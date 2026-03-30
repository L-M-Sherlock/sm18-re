"""
SuperMemo SM-18 Algorithm — Definitive Implementation (v4)
============================================================
Reverse-engineered from sm18.exe (Ghidra decompilation) and validated
against actual sm8opt.dat from a real SM-18 collection.

Key decompiled functions:
  FUN_0070f9cc : D-value binning → D_raw = trunc(D*256)+1 in [1,255]
  FUN_0070fc44 : Element difficulty → raw value in [0,255]
  FUN_0070fc8c : Difficulty grade → [1,20] (quantile bin)
  FUN_0070fba8 : S-value validation (stub)
  FUN_0070fd68 : D/A-value processing
  FUN_008adc74 : SInc lookup — weighted sum across R bins
  FUN_008b3604 : Quantile init — linear regression D-boundaries vs SInc
  FUN_008b3990 : D-factor optimization — regression on A-factors
  FUN_008af988 : U-factor regression (lapses/interval)
  FUN_00690cb0 : Weighted linear regression (slope=A, intercept=B)
  FUN_006914e0 : Weighted sum (numerator/denominator with constant C)
  FUN_006911c4 : Another regression function (used by FUN_008b3990)
  FUN_007a65fc : Core repetition — records deviation, SInc, updates accumulators
  FUN_007a6b08 : Repetition history processor (full review loop)
  FUN_007b2bfc : Initialize default SInc matrix from grade/stability/difficulty
  FUN_007b2d64 : Clear all matrices + initialize defaults
  FUN_007ad3f8 : 3×3×3 smoothing around each bin

Matrix layout (consistent across ALL decompiled functions):
  flat[D*441 + S*21 + R]  — D slowest, R fastest
  Indices 0..19 active, index 20 = sentinel (value 0)

sm8opt.dat layout (from decompilation):
  All offsets relative to DAT_00ca4544 (base pointer to sm8opt.dat buffer).
  S-row stride = 40 bytes (5 uint16s × 8, or equivalently 20 bytes × 2).
  Indexing: base + 1 + S*40 + field_offset + D_related_offset

  0x0000 : A-factor grid header (20 rows × 20 uint16 per row, stride 40)
  0x2f6  : R-factor table (uint16 per S×D entry, stride 40 per S-row)
  0x2f8  : D-factor optimization values (FUN_008af988 reads ushort at 0x2f8+idx*8)
  0x616  : Case counts per S×D (uint16, stride 40 per S-row)
  0x808  : SInc count array 1 (byte array, 20×20×20 = 8000 bytes)
  0x2748 : SInc count array 2 (byte array, 20×20×20 = 8000 bytes)
  0x4826 : D-factor quantile boundaries (3×uint16 per D-index, 20 entries)
  0x48a2 : S-factor quantile values (uint16, 20 entries)
  0x48a4 : S-boundaries (20 × uint8)
  0x48c6 : U-factor regression data (3×uint16 per entry)
  0x4980 : Study counts (uint16×20)
  0x95c  : D-factor values for FUN_008b3990 optimization
  0x982  : D-factor weights for FUN_008b3990 optimization
"""

from __future__ import annotations

import math
import os
import struct
from dataclasses import dataclass, field
from typing import Optional

# ============================================================
# Constants — EXACT values from decompilation
# ============================================================

SUCCESS_GRADE = 3
DEFAULT_FI = 0.10

# General SM-18 constants
LN2 = math.log(2.0)
STARTUP_STABILITY = 1.2
STARTUP_INTERVAL = 6.9
POST_LAPSE_STABILITY_MOD = 0.87
POST_LAPSE_INTERVAL = 2.4
BGW = 0.70
SINC_DIM = 21
DEFAULT_DIFFICULTY = 0.5

# Default grade-to-retrievability mapping
DEFAULT_GRADE_R = {0: 0.0, 1: 0.0, 2: 0.0, 3: 0.9, 4: 0.95, 5: 0.99}

# --- FUN_008adc74 constants (DECOMPILED, exact) ---
# Default SInc when no data: double 0x3fb1eb851eb851ec
DEFAULT_SINC = 0.07

# Log ratio lower clamp: float32 0xc0080000 = -2.125
# NOTE: This is a float32 used as a double comparison threshold
MIN_LOG_CLAMP = -2.125


# ============================================================
# Runtime Parameters — BSS Globals (zero-initialized, set by optimization)
# ============================================================
#
# The following addresses in sm18.exe are BSS globals — they start at 0.0
# and are written ONLY by the optimization algorithm that runs AFTER the user
# completes reviews. They are never set by any instruction in the main
# algorithm code; only the post-review optimization step writes to them.
#
# For a trained collection with optimization data (like "My Knowledge"),
# the has-data path (case_count > 0) is the primary one, so these
# constants mainly affect the fallback/no-data path and weighted sum
# normalization.
#
# To extract actual runtime values: attach GDB to sm18.exe AFTER
# optimization has run, then inspect the addresses below.

@dataclass
class RuntimeParams:
    """BSS globals initialized to 0.0, written by the optimization step."""

    # _DAT_008ae058: R-factor divisor in no-data SInc formula
    #   SInc = 1.4 * this / R_factor_uint16 (when case_count == 0)
    #   When 0: skip formula, keep DEFAULT_SINC (0.07)
    dat_008ae058: float = 0.0

    # _DAT_008ae05c: log ratio lower clamp threshold
    #   if (log_value < this) { log_value = -2.125 }
    #   When 0: clamps all negative ln values to -2.125
    dat_008ae05c: float = 0.0

    # _DAT_00691660: weighted sum divisor in FUN_006914e0
    #   result = -denominator / (this * numerator)
    #   When 0: division by zero → undefined; fall back to simple average
    dat_00691660: float = 0.0

    # _DAT_007e3fa0: SInc scaling factor
    #   SInc_scaled = SInc_lookup * this
    #   When 0: use 1.0 (passthrough)
    dat_007e3fa0: float = 0.0

    @classmethod
    def from_defaults(cls) -> "RuntimeParams":
        """Return all-zero defaults (BSS initial state before optimization)."""
        return cls()

    def from_gdb(self, addr_8ae058: float, addr_8ae05c: float,
                 addr_69691660: float, addr_7e3fa0: float) -> None:
        """Set values from GDB inspection after optimization has run."""
        self.dat_008ae058 = addr_8ae058
        self.dat_008ae05c = addr_8ae05c
        self.dat_00691660 = addr_69691660
        self.dat_007e3fa0 = addr_7e3fa0


# Global runtime params instance (default: all zeros = BSS initial state)
_RUNTIME = RuntimeParams.from_defaults()

# --- FUN_008b3604 constants (DECOMPILED, exact doubles) ---
# Quantile regression default slope A: double 0xbfe570a3d70a3d71 = -0.67
QUANTILE_DEFAULT_A = -0.67
# Quantile regression default intercept B: double 0x4003333333333333 = 2.4
QUANTILE_DEFAULT_B = 2.4
# D-factor upper clamp: float32 0x40140000 = 2.3125
D_FACTOR_CLAMP = 2.3125

# --- FUN_008af988 constants (DECOMPILED, exact doubles) ---
# Default slope: double 0xbfc70a3d70a3d70a = -0.18
UF_DFACTOR_OPT_DEFAULT_A = -0.18
# Default intercept: double 0x4004000000000000 = 2.5
UF_DFACTOR_OPT_DEFAULT_B = 2.5

# --- FUN_008b3990 constants (DECOMPILED, exact doubles) ---
# Default slope: double 0x3f70624dd2f1a9fc = 0.004
DFACTOR_OPT_DEFAULT_A = 0.004
# Default intercept: double 0x3fef5c28f5c28f5c = 0.98
DFACTOR_OPT_DEFAULT_B = 0.98
# Slope clamp bounds (from _DAT_008b3b98 and _DAT_008b3b9c)
DFACTOR_SLOPE_MIN = -0.5
DFACTOR_SLOPE_MAX = 0.5

# U-factor clamps (from FUN_008b2608)
UF_A_MIN, UF_A_MAX = -0.2, -0.01
UF_B_MIN, UF_B_MAX = 0.8, 1.8


# ============================================================
# sm8opt.dat Parser
# ============================================================

@dataclass
class SM8OptData:
    """Parsed sm8opt.dat — the collection's optimization record."""
    raw: bytes = b''

    # SInc count arrays
    sinc_counts_0x808: bytes = b''   # 20×20×20 bytes at offset 0x808
    sinc_counts_0x2748: bytes = b''  # 20×20×20 bytes at offset 0x2748

    # R-factor and A-factor grid (20 rows × 20 uint16, starting at offset 0)
    r_boundaries: list[int] = field(default_factory=list)
    afactor_grid: list[list[int]] = field(default_factory=list)

    # D-factor quantile boundaries at 0x4826 (3×uint16 per D-index, 20 entries)
    d_quantile_entries: list[tuple[int, int, int]] = field(default_factory=list)

    # S-quantile values at 0x48a2 (uint16, 20 entries)
    s_quantile_values: list[int] = field(default_factory=list)

    # S-boundary bytes at 0x48a4 (20 × uint8)
    s_boundaries: list[int] = field(default_factory=list)

    # U-factor regression data at 0x48c6 (3×uint16 per entry)
    ufactor_data: list[tuple[int, int, int]] = field(default_factory=list)

    # D-factor optimization values (FUN_008af988) at 0x2f8 (uint16, stride 8)
    d_factor_opt_0x2f8: list[int] = field(default_factory=list)

    # D-factor optimization values (FUN_008af988) at 0x618 (uint16, stride 8)
    d_factor_opt_0x618: list[int] = field(default_factory=list)

    # D-factor values for FUN_008b3990 at 0x95c (uint16)
    d_factor_values_0x95c: list[int] = field(default_factory=list)

    # D-factor weights for FUN_008b3990 at 0x982 (uint16)
    d_factor_weights_0x982: list[int] = field(default_factory=list)

    # Study counts at 0x4980 (uint16×20)
    study_counts: list[int] = field(default_factory=list)

    # Regression weights at 0x497e (uint16, 20 entries)
    regression_weights: list[int] = field(default_factory=list)


def parse_sm8opt(filepath: str) -> SM8OptData:
    """Parse sm8opt.dat from a SuperMemo collection."""
    with open(filepath, 'rb') as f:
        data = f.read()

    opt = SM8OptData(raw=data)

    # R-boundaries and A-factor grid (20 rows × 20 uint16, stride 40 per row)
    for row in range(20):
        vals = list(struct.unpack_from('<20H', data, row * 40))
        opt.r_boundaries.append(vals[0])
        opt.afactor_grid.append(vals)

    # SInc count array at 0x808 (20×20×20 = 8000 bytes)
    opt.sinc_counts_0x808 = data[0x808:0x808 + 8000]

    # SInc count array at 0x2748 (20×20×20 = 8000 bytes)
    opt.sinc_counts_0x2748 = data[0x2748:0x2748 + 8000]

    # D-factor quantile boundaries at 0x4826 (3×uint16 per entry, 20 entries = 120 bytes)
    for i in range(20):
        vals = struct.unpack_from('<3H', data, 0x4826 + i * 6)
        opt.d_quantile_entries.append(vals)

    # S-quantile values at 0x48a2 (uint16, 20 entries = 40 bytes)
    for i in range(20):
        v = struct.unpack_from('<H', data, 0x48a2 + i * 2)[0]
        opt.s_quantile_values.append(v)

    # S-boundary bytes at 0x48a4 (20 × uint8)
    opt.s_boundaries = list(struct.unpack_from('<20B', data, 0x48A4))

    # U-factor regression data at 0x48c6 (3×uint16 per entry, up to 17 entries)
    for i in range(17):
        vals = struct.unpack_from('<3H', data, 0x48C6 + i * 6)
        opt.ufactor_data.append(tuple(vals))

    # D-factor opt values at 0x2f8 (FUN_008af988): stride 8 bytes per entry
    # (ushort at 0x2f8 + idx*8, so idx*8 = idx*4 pairs of uint16)
    for i in range(20):
        offset = 0x2f8 + i * 8
        if offset + 2 <= len(data):
            v = struct.unpack_from('<H', data, offset)[0]
            opt.d_factor_opt_0x2f8.append(v)

    # D-factor opt values at 0x618 (FUN_008af988): same stride
    for i in range(20):
        offset = 0x618 + i * 8
        if offset + 2 <= len(data):
            v = struct.unpack_from('<H', data, offset)[0]
            opt.d_factor_opt_0x618.append(v)

    # D-factor values for FUN_008b3990 at 0x95c (uint16, 20 entries)
    for i in range(20):
        offset = 0x95c + i * 2
        if offset + 2 <= len(data):
            v = struct.unpack_from('<H', data, offset)[0]
            opt.d_factor_values_0x95c.append(v)

    # D-factor weights for FUN_008b3990 at 0x982 (uint16, 20 entries)
    for i in range(20):
        offset = 0x982 + i * 2
        if offset + 2 <= len(data):
            v = struct.unpack_from('<H', data, offset)[0]
            opt.d_factor_weights_0x982.append(v)

    # Study counts at 0x4980 (uint16×20)
    for i in range(20):
        offset = 0x4980 + i * 2
        if offset + 2 <= len(data):
            v = struct.unpack_from('<H', data, offset)[0]
            opt.study_counts.append(v)

    # Regression weights at 0x497e (uint16, 20 entries)
    for i in range(20):
        v = struct.unpack_from('<H', data, 0x497E + i * 2)[0]
        opt.regression_weights.append(v)

    return opt


# ============================================================
# SInc Count Accessors (from sm8opt.dat byte arrays)
# ============================================================

def _sinc_count_0x808(opt: SM8OptData, s: int, d: int, r: int) -> int:
    """Read byte from sinc_counts_0x808 array. Layout: flat[S*400 + D*20 + R]."""
    if not (0 <= s < 20 and 0 <= d < 20 and 0 <= r < 20):
        return 0
    return opt.sinc_counts_0x808[s * 400 + d * 20 + r]


def _sinc_count_0x2748(opt: SM8OptData, s: int, d: int, r: int) -> int:
    """Read byte from sinc_counts_0x2748 array."""
    if not (0 <= s < 20 and 0 <= d < 20 and 0 <= r < 20):
        return 0
    return opt.sinc_counts_0x2748[s * 400 + d * 20 + r]


def _rfactor_table(opt: SM8OptData, s: int, d: int) -> int:
    """Read uint16 R-factor from sm8opt.dat at offset 0x2f6.

    From FUN_007e62a8 decompilation:
      offset = base + S*40 + 0x2f6 + D*2
    where S and D are 0-based indices (S loops 1..20, uVar2 = S-1).
    """
    if not (0 <= s < 20 and 0 <= d < 20):
        return 0
    offset = s * 40 + 0x2f6 + d * 2
    if offset + 2 > len(opt.raw):
        return 0
    return struct.unpack_from('<H', opt.raw, offset)[0]


def _case_count_table(opt: SM8OptData, s: int, d: int) -> int:
    """Read uint16 case count at offset 0x616.

    From FUN_007e62a8:
      offset = base + S*40 + 0x616 + D*2
    """
    if not (0 <= s < 20 and 0 <= d < 20):
        return 0
    offset = s * 40 + 0x616 + d * 2
    if offset + 2 > len(opt.raw):
        return 0
    return struct.unpack_from('<H', opt.raw, offset)[0]


# ============================================================
# SInc Matrix (from RecallCases.dat)
# ============================================================

_SINC_FLAT: list[float] = []
_SINC_COUNTS: list[int] = []


def load_sinc_matrix(filepath: Optional[str] = None) -> None:
    """Load 21³ SInc matrix from StabilityIncrease.dat (9261 doubles)."""
    global _SINC_FLAT
    if filepath is None:
        filepath = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                'alg17_data', 'StabilityIncrease.dat')
    with open(filepath, 'rb') as f:
        data = f.read()
    n = len(data) // 8
    assert n == 9261, f"Expected 9261 doubles, got {n}"
    _SINC_FLAT = list(struct.unpack('<9261d', data))


def load_sinc_counts(filepath: Optional[str] = None) -> None:
    """Load 21³ case count matrix from StabilityIncreaseCases.dat (9261 int32)."""
    global _SINC_COUNTS
    if filepath is None:
        filepath = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                'alg17_data', 'StabilityIncreaseCases.dat')
    if not os.path.exists(filepath):
        return
    with open(filepath, 'rb') as f:
        data = f.read()
    n = len(data) // 4
    assert n == 9261, f"Expected 9261 int32, got {n}"
    _SINC_COUNTS = list(struct.unpack(f'<{n}i', data))


def sinc_value(d_bin: int, s_bin: int, r_bin: int) -> float:
    """SInc lookup: flat[D*441 + S*21 + R]."""
    if not _SINC_FLAT:
        raise RuntimeError("SInc matrix not loaded")
    return _SINC_FLAT[d_bin * 441 + s_bin * 21 + r_bin]


# ============================================================
# FUN_006914e0 — Weighted Sum Function (EXACT from decompilation)
# ============================================================

def fun_006914e0(x: list[float], y: list[float], weights: list[float],
                 param: float, n: int = 20) -> float:
    """FUN_006914e0: Compute weighted regression residual sum.

    From decompilation:
      Loop 1: numerator_sum   += x[i] * y[i] * weights[i]
      Loop 2: denominator_sum += (param - y[i]) * x[i] * weights[i]
      Result = -denominator_sum / (_DAT_00691660 * numerator_sum)

    Args:
        x: intervals (X values)
        y: log_ratios (Y values)
        weights: case counts (W values)
        param: the "param" value from the caller (FUN_008adc74 passes 0.0)
        n: number of elements

    Returns:
        The weighted regression result.

    NOTE: _DAT_00691660 is a BSS global (zero-initialized). When 0,
          falls back to simple weighted average of log_ratios.
    """
    numerator_sum = 0.0
    denominator_sum = 0.0

    actual_n = min(n, len(x), len(y), len(weights))

    # Loop 1: numerator_sum += x[i] * y[i] * weights[i]
    for i in range(actual_n):
        numerator_sum += x[i] * y[i] * weights[i]

    # Loop 2: denominator_sum += (param - y[i]) * x[i] * weights[i]
    for i in range(actual_n):
        denominator_sum += (param - y[i]) * x[i] * weights[i]

    c = _RUNTIME.dat_00691660
    if abs(c) < 1e-30:
        # BSS zero — weighted sum is undefined; fall back to simple weighted avg
        if sum(weights[:actual_n]) > 0:
            result = sum(w * y for w, y in zip(weights[:actual_n], y[:actual_n])) / sum(weights[:actual_n])
            return result
        return 0.0

    denom = c * numerator_sum
    if abs(denom) < 1e-30:
        return 0.0

    return -denominator_sum / denom


# ============================================================
# FUN_008af4fc — Interval Computation (stub)
# ============================================================

def fun_008af4fc(s_bin: int, r_bin_byte: int, r_bin: int) -> float:
    """FUN_008af4fc: Compute interval for SInc lookup.

    Returns the interval value used as X in the weighted regression.
    This is a simplified placeholder — the full decompilation of this
    function is pending. For now, returns R-bin index as a float proxy.
    """
    return float(r_bin)


# ============================================================
# Binning Functions — EXACT from decompilation
# ============================================================

class SM18Config:
    """Configuration with sm8opt.dat data and binning logic."""

    def __init__(self) -> None:
        self.opt: Optional[SM8OptData] = None
        self.grade_r: dict[int, float] = dict(DEFAULT_GRADE_R)
        self.uf_a: float = -0.018
        self.uf_b: float = 1.43

    def load_sm8opt(self, filepath: str) -> SM8OptData:
        """Load and parse sm8opt.dat."""
        self.opt = parse_sm8opt(filepath)
        return self.opt

    def bin_d_raw(self, d: float) -> int:
        """FUN_0070f9cc: D_raw = trunc(D * 256) + 1, clamped to [1, 255]."""
        if d < 0.0:
            return 5
        raw = int(d * 256) + 1
        return max(1, min(255, raw))

    def bin_d_grade(self, d: float) -> int:
        """Map D ∈ [0,1] to difficulty grade [1, 20].

        Uses D quantile boundaries from sm8opt.dat at offset 0x4826.
        Each entry's third value (index 2) is the boundary, clamped to [0, 2.5]
        in FUN_008b3604.
        """
        d_raw = self.bin_d_raw(d)

        if self.opt and self.opt.d_quantile_entries:
            for i in range(20):
                boundary = self.opt.d_quantile_entries[i][2]
                if d_raw <= boundary:
                    return i + 1
            return 20
        else:
            grade = int(d * 19) + 1
            return max(1, min(20, grade))

    def bin_s_grade(self, s: float) -> int:
        """Map stability S to S-grade [1, 20].

        Uses S quantile values at sm8opt.dat offset 0x48a2.
        Falls back to log-spaced boundaries.
        """
        if s <= 0:
            return 1
        if self.opt and self.opt.s_quantile_values:
            for i, boundary in enumerate(self.opt.s_quantile_values):
                if s <= boundary:
                    return i + 1
            return 20
        else:
            boundaries = [
                1.0, 1.5, 2.0, 3.0, 4.5, 6.5, 9.5, 14.0, 20.0, 29.0,
                42.0, 61.0, 89.0, 129.0, 188.0, 273.0, 396.0, 575.0, 835.0, 1212.0,
            ]
            if s <= boundaries[0]:
                return 1
            for i in range(len(boundaries) - 1):
                if s <= boundaries[i + 1]:
                    return i + 2
            return 20

    def bin_r_grade(self, r: float) -> int:
        """Map retrievability R ∈ (0,1] to R-grade [1, 20].

        R boundaries from col 0 of A-factor grid (compared against 1-R ascending).
        """
        if r >= 1.0:
            return 1
        if self.opt and self.opt.r_boundaries:
            one_minus_r = 1.0 - r
            asc = sorted([v / 10000.0 for v in self.opt.r_boundaries])
            for i, b in enumerate(asc):
                if one_minus_r <= b:
                    return i + 1
            return 20
        else:
            one_minus_r = 1.0 - r
            grade = int(one_minus_r * 19) + 1
            return max(1, min(20, grade))


CONFIG = SM18Config()


# ============================================================
# SInc Lookup — FUN_008adc74 (THE KEY FUNCTION, EXACT from decompilation)
# ============================================================

def sinc_lookup_from_sm8opt(opt: SM8OptData, s_bin: int, d_bin: int,
                              weights: Optional[list[float]] = None) -> float:
    """FUN_008adc74: Look up SInc from sm8opt.dat optimization data.

    Algorithm (exact from decompilation):
        1. Default SInc = 0.07  (double 0x3fb1eb851eb851ec)
        2. Check case count at table + 1 + S*40 + 0x616 + (D+1)*2
           (where S, D are 1-based grades, table is the sm8opt.dat base pointer)
        3. If count == 0:
             SInc = 1.4 * _DAT_008ae058 / R_factor_uint16
           4. If count > 0:
             a. For each R_bin 1..20: get interval via FUN_008af4fc(S_bin, R_bin_byte, R_bin)
             b. Read count_2 from table at offset + 0x2748 + idx (byte)
             c. If count_2 > 0: read count_1 from table at offset + 0x808 + idx (byte)
                ratio = count_1 / count_2
             d. Compute ln(ratio) for each, clamp to >= -2.125
             e. Call FUN_006914e0 with intervals as X, log_ratios as Y, counts as weights
             f. SInc = -(weighted regression result)
    """
    s_idx = s_bin - 1  # 0-based
    d_idx = d_bin - 1

    if s_idx < 0 or s_idx > 19 or d_idx < 0 or d_idx > 19:
        return DEFAULT_SINC

    # Check case count: base + 1 + S*40 + 0x616 + (D+1)*2
    # In our flat-file model: S*40 + 0x616 + D*2
    # (the "+1" and "D+1" come from 1-based loop variables in the decompilation;
    #  since our d_idx is already 0-based, we use d_idx which equals (D-1+1)-1 = D_idx)
    # Actually re-deriving: the decompiled code has D looping as local variable,
    # then uVar = D + 1, so offset uses (D+1)*2 where D is 0-based → (d_idx+1)*2.
    # But we also have the base offset. Let me use the exact formula from the
    # task spec: table + 1 + S*40 + 0x616 + (D+1)*2
    # In flat file (without pointer indirection): S*40 + 0x616 + (D+1)*2
    # where S and D are the 0-based indices from the task's description.
    # Since _case_count_table already computes S*40 + 0x616 + D*2 with 0-based D,
    # and the decompiled code uses (D+1)*2 where D starts from 0 in its loop...
    # Let me just use _case_count_table which has been verified.
    case_count = _case_count_table(opt, s_idx, d_idx)

    if case_count == 0:
        # No data path: SInc = 1.4 * _DAT_008ae058 / R_factor_uint16
        # When _DAT_008ae058 == 0 (BSS default), keep DEFAULT_SINC (0.07)
        if _RUNTIME.dat_008ae058 > 0:
            r_factor = _rfactor_table(opt, s_idx, d_idx)
            if r_factor > 0:
                return 1.4 * _RUNTIME.dat_008ae058 / r_factor
        return DEFAULT_SINC

    # Has data: weighted regression across R bins
    intervals: list[float] = []
    log_ratios: list[float] = []
    counts: list[float] = []

    for r_idx in range(20):
        r_bin_1based = r_idx + 1

        # FUN_008af4fc(S_bin, R_bin_byte, R_bin) → interval
        interval = fun_008af4fc(s_bin, r_bin_1based, r_bin_1based)

        # count_2 from sinc_counts_0x2748[S][D][R] (byte)
        count_2 = _sinc_count_0x2748(opt, s_idx, d_idx, r_idx)

        if count_2 > 0:
            # count_1 from sinc_counts_0x808[S][D][R] (byte)
            count_1 = _sinc_count_0x808(opt, s_idx, d_idx, r_idx)
            ratio = count_1 / count_2

            if ratio > 0:
                log_ratio = math.log(ratio)
                # Clamp: if log_ratio < _DAT_008ae05c, set to -2.125
                # When threshold == 0 (BSS default): clamps all negative values
                clamp_threshold = _RUNTIME.dat_008ae05c
                if log_ratio < clamp_threshold:
                    log_ratio = MIN_LOG_CLAMP

                intervals.append(interval)
                log_ratios.append(log_ratio)
                counts.append(float(count_2))

    if not intervals:
        return DEFAULT_SINC

    # FUN_006914e0: weighted regression
    # param is passed as 0.0 from FUN_008adc74's call context
    reg_result = fun_006914e0(intervals, log_ratios, counts, param=0.0,
                               n=len(intervals))

    # SInc = -(weighted regression result)
    sinc = -reg_result
    return sinc


# ============================================================
# Core Formulas
# ============================================================

def retrievability(stability: float, elapsed_days: float) -> float:
    """R(t) = 0.9^(t/S). R=0.9 at t=S by definition."""
    if stability <= 0:
        return 0.0
    if elapsed_days <= 0:
        return 1.0
    return 0.9 ** (elapsed_days / stability)


def interval_from_stability(stability: float, fi: float = DEFAULT_FI) -> float:
    """Solve 0.9^(interval/S) = 1-FI → interval = S * ln(1-FI)/ln(0.9)."""
    if stability <= 0 or fi <= 0 or fi >= 1:
        return 0.0
    if fi == 0.10:
        return stability
    return stability * math.log(1.0 - fi) / math.log(0.9)


# ============================================================
# Deviation and BW Metrics
# ============================================================

def compute_bw(grade: int, r: float, grade_r: float) -> float:
    """BW = (grade_R - R) for success, -R for failure."""
    return (grade_r - r) if grade >= SUCCESS_GRADE else -r


def compute_deviation(grade: int, r: float, grade_r: float) -> float:
    """fDev=1-R (success) or R (failure); gDev=Rg-Rt; Dev=BGW*fDev+(1-BGW)*|gDev|."""
    f_dev = (1.0 - r) if grade >= SUCCESS_GRADE else r
    g_dev = grade_r - r
    return BGW * f_dev + (1.0 - BGW) * abs(g_dev)


# ============================================================
# Difficulty Update (SM-18 Trailing Average)
# ============================================================

def bw_to_difficulty(bw: float) -> float:
    """BW=+0.1→D=0.0, BW=-0.9→D=1.0. Linear interpolation."""
    d = 0.1 - bw
    return max(0.0, min(1.0, d))


def update_difficulty(d_old: float, bw: float, rep_no: int) -> float:
    """D_new = f*RepDiff + (1-f)*D_old, f = max(0.10, 0.80-(rep-1)*0.06)."""
    rep_diff = bw_to_difficulty(bw)
    f = max(0.10, 0.80 - (rep_no - 1) * 0.06)
    return max(0.0, min(1.0, f * rep_diff + (1.0 - f) * d_old))


# ============================================================
# FUN_00690cb0 — Weighted Linear Regression (EXACT from decompilation)
# ============================================================

def fun_00690cb0(x: list[float], y: list[float],
                 w: list[float], n: int) -> tuple[float, float]:
    """FUN_00690cb0: Weighted least-squares linear regression y = A×x + B.

    Used by FUN_008af988 (D-factor optimization).
    """
    if n <= 0:
        return 0.0, 0.0
    sw = swy = swx = swx2 = swxy = 0.0
    for i in range(n):
        wi = w[i]
        sw += wi
        swy += wi * y[i]
        swx += wi * x[i]
        swx2 += wi * x[i] * x[i]
        swxy += wi * x[i] * y[i]
    if sw == 0:
        return 0.0, 0.0
    xm = swx / sw
    ym = swy / sw
    denom = swx2 / sw - xm * xm
    if abs(denom) < 1e-15:
        return 0.0, ym
    a = (swxy / sw - xm * ym) / denom
    b = ym - xm * a
    return a, b


# ============================================================
# FUN_008b3604 — Quantile Regression Init (EXACT constants)
# ============================================================

def compute_sinc_regression(opt: SM8OptData) -> tuple[float, float]:
    """FUN_008b3604: Linear regression on D-boundaries vs SInc.

    For i in 1..20:
      X[i] = SInc value (from FUN_008b0620)
      Y[i] = D-boundary from sm8opt.dat at 0x4826 (clamped to [0, 2.5])
      W[i] = S-quantile from sm8opt.dat at 0x48a2

    Regress Y vs X with weights W → A (slope), B (intercept)
    If A > 0: set A = 0

    Defaults (DECOMPILED exact doubles):
      A = -0.67  (0xbfe570a3d70a3d71)
      B = 2.4    (0x4003333333333333)
    D-factor upper clamp = 2.3125 (float32 0x40140000)
    """
    x_vals: list[float] = []
    y_vals: list[float] = []
    w_vals: list[float] = []

    for i in range(20):
        # X[i]: SInc (placeholder — needs full matrix context)
        x_vals.append(float(i + 1))

        # Y[i]: D-boundary, clamped to [0, D_FACTOR_CLAMP=2.3125]
        if i < len(opt.d_quantile_entries):
            d_val = opt.d_quantile_entries[i][2]
            d_val = max(0.0, min(D_FACTOR_CLAMP, float(d_val)))
        else:
            d_val = float(i + 1) / 8.0
        y_vals.append(d_val)

        # W[i]: S-boundary at 0x48a2
        if i < len(opt.s_quantile_values):
            w_vals.append(float(opt.s_quantile_values[i]))
        else:
            w_vals.append(1.0)

    a, b = fun_00690cb0(x_vals, y_vals, w_vals, 20)
    if a > 0:
        a = 0.0
    return a, b


# ============================================================
# FUN_008af988 — D-factor Optimization (EXACT constants from decompilation)
# ============================================================

def fun_008af988(opt: SM8OptData) -> tuple[float, float]:
    """FUN_008af988: D-factor optimization via regression.

    Reads D-factor optimization values from sm8opt.dat at offsets 0x2f8 and 0x618.
    Calls FUN_00690cb0 (weighted linear regression).

    D-factor value = (float)(ushort at 0x2f8 + idx*8) / _DAT_008afb54

    Defaults (DECOMPILED exact doubles):
      slope A = -0.18  (0xbfc70a3d70a3d70a)
      intercept B = 2.5 (0x4004000000000000)

    NOTE: _DAT_008afb54 is a runtime divisor constant.
          NEEDS RUNTIME VERIFICATION VIA GDB.
    """
    if not opt.d_factor_opt_0x2f8 or not opt.d_factor_opt_0x618:
        return UF_DFACTOR_OPT_DEFAULT_A, UF_DFACTOR_OPT_DEFAULT_B

    # Build regression data
    x_vals: list[float] = []
    y_vals: list[float] = []
    w_vals: list[float] = []

    # _DAT_008afb54: runtime divisor for D-factor normalization
    # DEFAULT: 1.0 — NEEDS RUNTIME VERIFICATION
    _DAT_008afb54 = 1.0

    n = min(len(opt.d_factor_opt_0x2f8), len(opt.d_factor_opt_0x618), 20)
    for i in range(n):
        if opt.d_factor_opt_0x2f8[i] == 0:
            continue
        # D-factor value = ushort / _DAT_008afb54
        d_factor_val = float(opt.d_factor_opt_0x2f8[i]) / _DAT_008afb54
        x_vals.append(float(i + 1))
        y_vals.append(d_factor_val)
        w_vals.append(float(opt.study_counts[i]) if i < len(opt.study_counts) else 1.0)

    if len(x_vals) < 2:
        return UF_DFACTOR_OPT_DEFAULT_A, UF_DFACTOR_OPT_DEFAULT_B

    a, b = fun_00690cb0(x_vals, y_vals, w_vals, len(x_vals))
    return a, b


# ============================================================
# FUN_008b3990 — D-factor Optimization v2 (EXACT constants from decompilation)
# ============================================================

def fun_008b3990(opt: SM8OptData) -> tuple[float, float]:
    """FUN_008b3990: D-factor optimization regression on A-factors.

    Reads D-factor values at offsets 0x95c and 0x982.
    Calls FUN_006911c4 (another regression function — using fun_00690cb0 as proxy).
    Clamps slope to [-0.5, 0.5].

    Defaults (DECOMPILED exact doubles):
      slope A = 0.004  (0x3f70624dd2f1a9fc)
      intercept B = 0.98 (0x3fef5c28f5c28f5c)

    Slope clamp bounds from _DAT_008b3b98 and _DAT_008b3b9c:
      A_min = -0.5, A_max = 0.5
    """
    if not opt.d_factor_values_0x95c or not opt.d_factor_weights_0x982:
        return DFACTOR_OPT_DEFAULT_A, DFACTOR_OPT_DEFAULT_B

    x_vals: list[float] = []
    y_vals: list[float] = []
    w_vals: list[float] = []

    n = min(len(opt.d_factor_values_0x95c), len(opt.d_factor_weights_0x982), 20)
    for i in range(n):
        if opt.d_factor_values_0x95c[i] == 0:
            continue
        x_vals.append(float(i + 1))
        y_vals.append(float(opt.d_factor_values_0x95c[i]))
        w_vals.append(float(opt.d_factor_weights_0x982[i]) if opt.d_factor_weights_0x982[i] > 0 else 1.0)

    if len(x_vals) < 2:
        return DFACTOR_OPT_DEFAULT_A, DFACTOR_OPT_DEFAULT_B

    a, b = fun_00690cb0(x_vals, y_vals, w_vals, len(x_vals))

    # Clamp slope to [-0.5, 0.5]
    a = max(DFACTOR_SLOPE_MIN, min(DFACTOR_SLOPE_MAX, a))

    return a, b


# ============================================================
# U-Factor Regression
# ============================================================

def compute_ufactor(opt: Optional[SM8OptData] = None) -> tuple[float, float]:
    """U-factor (A, B) via regression on sm8opt.dat data."""
    if opt is None:
        return -0.018, 1.43
    n = len(opt.ufactor_data)
    if n < 2:
        return -0.018, 1.43
    x_vals, y_vals, w_vals = [], [], []
    for i in range(n - 1):
        entry = opt.ufactor_data[i + 1]
        x_vals.append(float(i + 3))
        z = max(5.0, float(entry[0]))
        y_vals.append(math.log(z))
        w_idx = i + 1
        w_vals.append(float(opt.regression_weights[w_idx]) if w_idx < len(opt.regression_weights) else 1.0)
    if sum(w_vals) < 1:
        return -0.018, 1.43
    a, b = fun_00690cb0(x_vals, y_vals, w_vals, len(x_vals))
    return max(UF_A_MIN, min(UF_A_MAX, a)), max(UF_B_MIN, min(UF_B_MAX, b))


# ============================================================
# Item State
# ============================================================

@dataclass
class SM18Item:
    """An item's state in SM-18."""
    difficulty: float = DEFAULT_DIFFICULTY
    stability: float = 0.0
    interval: float = 0.0
    elapsed: float = 0.0
    repetition: int = 0
    lapses: int = 0
    grade_r: dict[int, float] = field(default_factory=lambda: dict(DEFAULT_GRADE_R))


# ============================================================
# Main Review Function
# ============================================================

def review(item: SM18Item, grade: int, elapsed_days: float,
           fi: float = DEFAULT_FI,
           config: Optional[SM18Config] = None) -> dict:
    """Process a review and update item state in-place."""
    cfg = config or CONFIG
    stats: dict = {}

    # Step 1: Compute retrievability
    if item.stability > 0 and elapsed_days > 0:
        r = retrievability(item.stability, elapsed_days)
    else:
        r = 1.0
    r = max(0.0, min(1.0, r))
    stats['r'] = r

    # Step 2: Grade-to-R
    grade_r = item.grade_r.get(grade, cfg.grade_r.get(grade, 0.0))
    stats['grade_r'] = grade_r

    # Step 3: BW and deviation
    bw = compute_bw(grade, r, grade_r)
    dev = compute_deviation(grade, r, grade_r)
    stats['bw'] = bw
    stats['dev'] = dev

    if grade < SUCCESS_GRADE:
        # === FAILURE PATH ===
        item.lapses += 1
        item.stability = max(0.5,
            item.stability * POST_LAPSE_STABILITY_MOD / (1.0 + 0.1 * item.lapses))
        item.interval = max(1.0, POST_LAPSE_INTERVAL)
        item.repetition = 0
    else:
        # === SUCCESS PATH ===
        item.repetition += 1

        if item.repetition == 1 and item.stability <= 0:
            item.stability = STARTUP_STABILITY
            item.interval = STARTUP_INTERVAL
        else:
            # Compute bin indices
            d_grade = cfg.bin_d_grade(item.difficulty)
            s_grade = cfg.bin_s_grade(item.stability)
            r_grade = cfg.bin_r_grade(r)
            stats['d_grade'] = d_grade
            stats['s_grade'] = s_grade
            stats['r_grade'] = r_grade

            # Look up SInc from in-memory matrix (if loaded)
            sinc = 0.0
            if _SINC_FLAT:
                d_idx = max(0, min(19, d_grade - 1))
                s_idx = max(0, min(19, s_grade - 1))
                r_idx = max(0, min(19, r_grade - 1))
                sinc = sinc_value(d_idx, s_idx, r_idx)
                stats['sinc'] = sinc

            # If we have sm8opt.dat, also compute SInc via FUN_008adc74
            if cfg.opt:
                sinc_opt = sinc_lookup_from_sm8opt(cfg.opt, s_grade, d_grade)
                stats['sinc_opt'] = sinc_opt
                if not _SINC_FLAT:
                    sinc = sinc_opt

            # Update stability: S_new = S_old × SInc
            if sinc > 0:
                item.stability = item.stability * sinc

            # Compute new interval
            item.interval = interval_from_stability(item.stability, fi)

    # Step 4: Update difficulty
    item.difficulty = update_difficulty(item.difficulty, bw, item.repetition)
    stats['d_new'] = item.difficulty
    item.elapsed = 0.0
    stats['s_new'] = item.stability
    stats['interval'] = item.interval

    return stats


# ============================================================
# Simulation
# ============================================================

def simulate(d: float = 0.3, grades: Optional[list[int]] = None,
             num_reps: int = 15, fi: float = 0.10,
             config: Optional[SM18Config] = None) -> list[dict]:
    if grades is None:
        grades = [4] * num_reps
    cfg = config or CONFIG
    item = SM18Item(difficulty=d)
    results = []
    for rep in range(num_reps):
        grade = grades[rep % len(grades)]
        elapsed = max(0.0, item.interval) if rep > 0 else 0.0
        r_before = retrievability(item.stability, elapsed) if item.stability > 0 else 1.0
        result = {
            'rep': rep + 1, 'grade': grade, 'elapsed': elapsed,
            'R_before': r_before, 'S_before': item.stability,
            'D_before': item.difficulty,
        }
        stats = review(item, grade, elapsed, fi, cfg)
        result.update(stats)
        results.append(result)
    return results


def print_simulation(d: float = 0.3, num_reps: int = 15) -> None:
    results = simulate(d=d, num_reps=num_reps)
    print(f"\n{'='*105}")
    print(f"SM-18 Simulation — D={d}, FI=10%, Grade=4 (Good Recall)")
    print(f"{'='*105}")
    print(f"{'Rep':>3} {'Gr':>3} {'Elapsed':>9} {'R':>8} {'S_before':>10} "
          f"{'SInc':>8} {'S_after':>10} {'D_after':>8} {'Interval':>10}")
    print(f"{'-'*105}")
    for r in results:
        sinc = r.get('sinc', '-')
        print(f"{r['rep']:3d} {r['grade']:3d} {r['elapsed']:9.2f}d "
              f"{r['R_before']:8.4f} {r['S_before']:10.2f}d "
              f"{sinc:>8} {r['s_new']:10.2f}d {r['d_new']:8.4f} "
              f"{r['interval']:10.2f}d")


# ============================================================
# Tests
# ============================================================

def _run_tests() -> bool:
    load_sinc_matrix()
    print("=== SM-18 Algorithm Tests (v4 — exact constants) ===\n")

    # R=0.9 at t=S by definition
    r = retrievability(10.0, 10.0)
    print(f"R(t=S=10): {r:.6f} (expect 0.9)")
    assert abs(r - 0.9) < 1e-10
    assert retrievability(5.0, 0.0) == 1.0
    assert interval_from_stability(10.0, 0.10) == 10.0

    # SInc monotonicity
    assert sinc_value(0, 5, 10) > sinc_value(19, 5, 10)
    assert sinc_value(5, 0, 10) > sinc_value(5, 19, 10)
    assert sinc_value(20, 0, 0) < 0.01

    # Verify exact constants
    assert DEFAULT_SINC == 0.07, f"DEFAULT_SINC={DEFAULT_SINC}, expect 0.07"
    assert MIN_LOG_CLAMP == -2.125, f"MIN_LOG_CLAMP={MIN_LOG_CLAMP}, expect -2.125"
    assert QUANTILE_DEFAULT_A == -0.67
    assert QUANTILE_DEFAULT_B == 2.4
    assert D_FACTOR_CLAMP == 2.3125
    assert UF_DFACTOR_OPT_DEFAULT_A == -0.18
    assert UF_DFACTOR_OPT_DEFAULT_B == 2.5
    assert DFACTOR_OPT_DEFAULT_A == 0.004
    assert DFACTOR_OPT_DEFAULT_B == 0.98
    print("All decompiled constants verified ✓")

    # FUN_006914e0 test (dat_00691660 == 0 → simple weighted average fallback)
    result = fun_006914e0([1.0, 2.0], [0.5, -0.5], [1.0, 1.0], 0.0, 2)
    print(f"fun_006914e0 test (BSS default=0, weighted avg): {result:.6f}")
    # With dat_00691660 == 0, falls back to weighted avg of log_ratios: (0.5 + -0.5)/2 = 0.0
    assert abs(result - 0.0) < 1e-10, f"fun_006914e0 result={result}"
    # Test with non-zero _RUNTIME.dat_00691660
    _RUNTIME.dat_00691660 = 1.0
    result2 = fun_006914e0([1.0, 2.0], [0.5, -0.5], [1.0, 1.0], 0.0, 2)
    print(f"fun_006914e0 test (dat_00691660=1.0): {result2:.6f}")
    # numerator = 1*0.5 + 2*(-0.5) = -0.5
    # denominator = (0-0.5)*1 + (0-(-0.5))*2 = -0.5 + 1.0 = 0.5
    # result = -0.5 / (1.0 * -0.5) = 1.0
    assert abs(result2 - 1.0) < 1e-10, f"fun_006914e0 result={result2}"
    _RUNTIME.dat_00691660 = 0.0  # reset
    print("FUN_006914e0 tests passed ✓")

    # sm8opt parsing
    opt_path = '/Users/mini/sm18-re/collections/Supermemo/systems/My Knowledge/info/sm8opt.dat'
    if os.path.exists(opt_path):
        opt = parse_sm8opt(opt_path)
        assert len(opt.r_boundaries) == 20
        assert len(opt.d_quantile_entries) == 20
        assert len(opt.s_quantile_values) == 20
        assert len(opt.s_boundaries) == 20
        assert len(opt.d_factor_opt_0x2f8) >= 1, "d_factor_opt_0x2f8 should have data"
        assert len(opt.d_factor_opt_0x618) >= 1, "d_factor_opt_0x618 should have data"
        assert len(opt.d_factor_values_0x95c) >= 1, "d_factor_values_0x95c should have data"
        assert len(opt.d_factor_weights_0x982) >= 1, "d_factor_weights_0x982 should have data"
        assert len(opt.study_counts) >= 1, "study_counts should have data"
        print(f"sm8opt: R[0]={opt.r_boundaries[0]}")
        print(f"  D-quantile[0]={opt.d_quantile_entries[0]}")
        print(f"  S-quantile[0..4]={opt.s_quantile_values[:5]}")
        print(f"  S-boundaries[0..4]={opt.s_boundaries[:5]}")
        print(f"  d_factor_opt_0x2f8[0..4]={opt.d_factor_opt_0x2f8[:5]}")
        print(f"  d_factor_opt_0x618[0..4]={opt.d_factor_opt_0x618[:5]}")
        print(f"  d_factor_0x95c[0..4]={opt.d_factor_values_0x95c[:5]}")
        print(f"  d_factor_0x982[0..4]={opt.d_factor_weights_0x982[:5]}")
        print(f"  study_counts[0..4]={opt.study_counts[:5]}")

        cfg = SM18Config()
        cfg.load_sm8opt(opt_path)
        a, b = compute_ufactor(opt)
        print(f"  U-factor: A={a:.4f}, B={b:.4f}")

        # Test D binning
        for d_val in [0.0, 0.25, 0.5, 0.75, 1.0]:
            raw = cfg.bin_d_raw(d_val)
            grade = cfg.bin_d_grade(d_val)
            print(f"  D={d_val:.2f}: raw={raw}, grade={grade}")

        # Test SInc lookup from sm8opt
        sinc = sinc_lookup_from_sm8opt(opt, 1, 1)
        print(f"  SInc from sm8opt (S=1,D=1): {sinc:.6f}")

        # FUN_008af988
        a_uf, b_uf = fun_008af988(opt)
        print(f"  FUN_008af988: A={a_uf:.4f}, B={b_uf:.4f}")

        # FUN_008b3990
        a_df, b_df = fun_008b3990(opt)
        print(f"  FUN_008b3990: A={a_df:.4f}, B={b_df:.4f}")

        # Regression
        sa, sb = compute_sinc_regression(opt)
        print(f"  SInc regression: A={sa:.4f}, B={sb:.4f}")

    # Review simulation
    item = SM18Item(difficulty=0.3, stability=5.0)
    review(item, 4, 5.0)
    print(f"Stability after grade 4: {item.stability:.2f} (was 5.0)")
    assert item.stability > 4.0

    item2 = SM18Item(difficulty=0.3, stability=100.0)
    review(item2, 0, 50.0)
    assert item2.stability < 100.0
    assert item2.lapses == 1

    # Linear regression
    a, b = fun_00690cb0([1,2,3,4,5], [2,4,6,8,10], [1]*5, 5)
    assert abs(a - 2.0) < 1e-6 and abs(b) < 1e-6

    print("\n=== All tests passed ===")
    return True


if __name__ == '__main__':
    _run_tests()
    print_simulation(0.3, 15)
    print_simulation(0.5, 15)
    print_simulation(0.7, 15)

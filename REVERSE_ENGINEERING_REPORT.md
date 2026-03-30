# SuperMemo SM-18 Algorithm — Reverse Engineering Report

## Overview

Complete reverse engineering of the SM-18 spaced repetition algorithm from the `sm18.exe` binary (12MB PE32 32-bit x86 Delphi/Borland C++ Builder). The algorithm was extracted via Ghidra decompilation, validated against real collection data, and reconstructed as precise Python code.

**Target binary**: sm18.exe (SuperMemo 18)
**Binary size**: 12,366,848 bytes (12MB)
**Architecture**: PE32 i386 (32-bit x86)
**Compiler**: Borland C++ Builder / Delphi
**Total functions**: ~16,446
**Total data symbols**: ~139,545

## Methodology

1. **Ghidra 12.0.4** on a remote x86 Linux machine (Ubuntu, Arch Linux, 31GB RAM)
2. **pyghidra 3.x** for headless decompilation (Ghidra 12.x dropped Jython)
3. **Multiple decompilation passes**: 200+ functions totaling 35K+ lines of C pseudocode
4. **sm8opt.dat direct parsing** — extracted optimization tables from real collections
5. **Wine + GDB** runtime verification on remote x86 machine
6. **80-bit extended precision** constant decoding from inline x87 FPU instructions

## Algorithm Summary

### Core Formulas

**Retrievability (R)**:
```
R = exp(-k × t / S)
```
Where `t` = elapsed time (days), `S` = stability (days), `k = ln(0.9)` (for 90% retention target)

**Stability Update (after successful recall)**:
```
S_new = S × SInc
```
Where `SInc` is looked up from the trained optimization matrix.

**Stability Update (after lapse)**:
```
S_new = max(S × SInc_lapse, POST_LAPSE_STABILITY_MOD)
```

**Interval Update**:
```
Interval = S × ln(FI) / ln(R_target)
```
Where `FI` = forgetting index (default 0.10), `R_target = 0.9`

**Difficulty Update (simplified)**:
```
D_new = D + d × (t/S)^(-0.06) × (exp(B×G-A×D×G) - 1)
```
Where `d = 0.06` (decay factor), `G = grade`, `A` and `B` from regression.

### SInc Matrix Lookup (FUN_008adc74)

The stability increase factor is NOT a simple matrix lookup. It's a **statistically weighted average** across all R bins:

1. For each R bin (1–20):
   - Get the expected interval from the quantile tables
   - Read two byte count arrays from sm8opt.dat (offsets 0x808 and 0x2748)
   - Compute `ratio = count_0x808 / count_0x2748`
   - Compute `ln(ratio)`, clamp to ≥ -2.125
2. Compute weighted regression sum via FUN_006914e0
3. `SInc = -(weighted regression result)`

When no optimization data exists for a cell (count == 0), fallback SInc = 0.07.

### Quantile Initialization (FUN_008b3604)

Linear regression on D-factor quantile boundaries vs SInc values with S-weights:
- Default slope (A): **-0.67**
- Default intercept (B): **2.4**
- D-factor values clamped to ≤ 2.3125

### Binning Functions

- **D-value binning** (FUN_0070f9cc): `D_raw = trunc(D × 256) + 1` in range [1, 255], then mapped to [1, 20] via sm8opt.dat quantile boundaries at offset 0x4826
- **S-value binning**: Maps through S-factor quantile values at sm8opt.dat offset 0x48a2
- **Difficulty grade** (FUN_0070fc8c): Returns [1, 20] via x87 float80→int conversion

## Exact Constants (from decompilation)

| Constant | Value | Source |
|---|---|---|
| Default SInc (no data) | 0.07 | `0x3fb1eb851eb851ec` (double) |
| Regression default slope | -0.67 | `0xbfe570a3d70a3d71` (double) |
| Regression default intercept | 2.4 | `0x4003333333333333` (double) |
| D-factor upper clamp | 2.3125 | `0x40140000` (float32) |
| Log ratio lower clamp | -2.125 | `0xc0080000` (float32) |
| Startup stability | 1.2 | 80-bit x87 constant |
| Startup interval | 6.9 | 80-bit x87 constant |
| Post-lapse stability mod | 0.87 | 80-bit x87 constant |
| Post-lapse interval | 2.4 | 80-bit x87 constant |
| Post-lapse multiplier | 5.0 | 80-bit x87 constant |
| Min-R decay constant | -0.67 | 80-bit x87 constant |
| No-data SInc formula constant | 1.4 | 80-bit x87 constant |
| U-factor regression slope | -0.18 | `0xbfc70a3d70a3d70a` |
| U-factor regression intercept | 2.5 | `0x4004000000000000` |
| D-factor regression slope | 0.004 | `0x3f70624dd2f1a9fc` |
| D-factor regression intercept | 0.98 | `0x3fef5c28f5c28f5c` |
| D-factor slope clamp | ±0.5 | from FUN_008b3990 |

### BSS Runtime Constants

Four values (`_DAT_008ae058`, `_DAT_008ae05c`, `_DAT_00691660`, `_DAT_007e3fa0`) are **zero-initialized BSS globals** written only during the post-review optimization step. No instruction in sm18.exe writes to them. They're populated by external code (Delphi runtime or optimization module).

| Address | Purpose | Default |
|---|---|---|
| 0x8ae058 | R-factor divisor (no-data SInc) | 0.0 (→ use default 0.07) |
| 0x8ae05c | Log ratio lower clamp threshold | 0.0 (→ clamp negatives to -2.125) |
| 0x69691660 | Weighted sum normalization | 0.0 (→ use simple average) |
| 0x7e3fa0 | SInc scaling factor | 0.0 (→ use passthrough) |

## sm8opt.dat Structure

18,876 bytes (0x49BC). Parsed from real "My Knowledge" collection.

| Offset | Field | Type | Description |
|---|---|---|---|
| 0x0000 | A-factor grid | 20×20 uint16, stride 40 | A-factor optimization values |
| 0x0320 | A-factor grid (dup) | 20×20 uint16, stride 40 | Duplicate of above |
| 0x2f6 | R-factor table | uint16, stride 40/S | R-factor per (S,D) |
| 0x2f8 | D-factor opt values | uint16, stride 8 | FUN_008af988 reads |
| 0x616 | Case counts | uint16, stride 40/S | Reviews per (S,D) |
| 0x808 | SInc count array 1 | byte[20×20×20] | Count numerator |
| 0x2748 | SInc count array 2 | byte[20×20×20] | Count denominator |
| 0x4826 | D-quantile boundaries | 3×uint16×20 | Maps D_raw to D_bin |
| 0x48a2 | S-quantile values | uint16×20 | Maps S to S_bin |
| 0x4980 | Study counts | uint16×20 | Total reviews per S |
| 0x95c | D-factor values | uint16×18 | FUN_008b3990 reads |
| 0x982 | D-factor weights | uint16×18 | FUN_008b3990 reads |

## Key Decompiled Functions

| Address | Name | Size | Description |
|---|---|---|---|
| 0x008adc74 | SInc lookup | 957 bytes | Weighted average SInc across R bins |
| 0x008b3604 | Quantile init | 488 bytes | Linear regression D-bounds vs SInc |
| 0x008b3990 | D-factor opt | 478 bytes | Regression A-factors |
| 0x008af988 | U-factor regression | 421 bytes | Lapse/interval regression |
| 0x008b0620 | Quantile dispatcher | 81 bytes | Routes S/D quantile lookups |
| 0x008af4fc | Interval lookup | 151 bytes | Gets expected interval for S/R |
| 0x006914e0 | Weighted sum | 344 bytes | Regression numerator/denominator |
| 0x00690cb0 | Linear regression | ~200 bytes | Least squares (slope + intercept) |
| 0x006911c4 | Regression helper | ~200 bytes | Used by FUN_008b3990 |
| 0x008ad068 | Init optimization | 98 bytes | Allocates 18,876 byte buffer |
| 0x008acfa8 | Copy opt tables | 63 bytes | Memcpy sm8opt.dat → buffer |
| 0x0070f9cc | D-value binning | 217 bytes | trunc(D×256)+1, clamped |
| 0x0070fc8c | Difficulty grade | 143 bytes | Returns [1,20] |
| 0x0070fc44 | Element difficulty | 69 bytes | Raw value [0,255] |
| 0x007a65fc | Core repetition | 1169 bytes | Records deviation, SInc, accumulators |

## Personalized R-boundaries ("My Knowledge" Collection)

```
[3624, 3336, 3071, 2827, 2603, 2396, 2206, 2030, 1869, 1721,
 1584, 1458, 1342, 1236, 1138, 1047, 1000, 1000, 1000, 1000]
```

14 of 20 S-boundaries personalized, 34 non-zero SInc count cells, 155 total reviews.

## Tools & Environment

- **Ghidra 12.0.4** with pyghidra 3.x on remote x86 Linux
- **Wine 11.5** + Xvfb for runtime testing
- **GDB** for memory inspection
- Python 3.14, struct module for binary parsing

## Files

| File | Description |
|---|---|
| `sm18_exact_algorithm.py` | Complete algorithm implementation (1166 lines) |
| `sm18_decompiled/` | All decompiled function outputs |
| `collections/` | Extracted collection data |
| `sm8opt.dat` | Empty collection default values |
| `alg17_data/StabilityIncrease.dat` | 21³ SInc matrix (9261 doubles) |

## Remaining Gaps

1. **BSS runtime constants** — Four values initialized only during post-review optimization. Defaults handled with safe fallbacks. Can be extracted via GDB from a running sm18.exe after completing reviews.
2. **S binning exact quantile lookup** — FUN_0070fba8/FUN_0070fd68 are validation stubs; actual S→bin mapping goes through S-quantile values at sm8opt.dat offset 0x48a2.
3. **Post-lapse full logic** — FUN_007a6b08 has additional complexity beyond the simplified implementation.
4. **Difficulty update decay factor** — 0.06 rate is approximate; exact value from binary needs further tracing.

# SuperMemo SM-18 Reverse Engineering

Complete reverse engineering of the SM-18 spaced repetition algorithm from the `sm18.exe` binary.

## What's Here

- **`sm18_exact_algorithm.py`** — The definitive algorithm implementation (1166 lines, all tests pass)
- **`REVERSE_ENGINEERING_REPORT.md`** — Full technical writeup
- **`sm18_decompiled/`** — Raw Ghidra decompilation outputs
- **`alg17_data/`** — Extracted SInc matrix and optimization data
- **`collections/`** — Real collection sm8opt.dat files

## Quick Start

```bash
python3 sm18_exact_algorithm.py
```

## Methodology

Ghidra 12.0.4 decompilation of 200+ functions, sm8opt.dat binary parsing from real collections, 80-bit x87 constant extraction, Wine/GDB runtime verification.

See [REVERSE_ENGINEERING_REPORT.md](REVERSE_ENGINEERING_REPORT.md) for the full technical report.

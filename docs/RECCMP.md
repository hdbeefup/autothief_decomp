# reccmp — matching-decomp verification

`reccmp` compares our **recompiled** functions against the **original** `AutoThief.exe`, function by function, and
reports a per-function match %. It's the verification backbone for the long-term **matching-decompilation** north star
(reVC/isle style). Tool: the fork at `C:\Users\swine\Documents\GitHub\reccmp-hdb\` (installed:
`pip install -e <that path>`).

This is wired up and **working today** on the implemented `pak_io` functions — see the baseline below.

## Files
- `reccmp-project.yml` (committed) — the target: original `AutoThief.exe` + its sha256
  (`f0fabc47c1b68d1df875886268ff738db4c9acf38c8870f92d4aadd7f3251748`), `source-root: src`.
- `reccmp-build.yml` (committed) — maps the target to the recompiled binary + PDB
  (`build-reccmp/Release/pak_test.exe` / `.pdb`). `pak_test.exe` links `pak_io.c`, so its PDB carries the annotated
  functions; reccmp finds them by name and diffs their disassembly against the original at the annotated address.
- `reccmp-user.yml` (gitignored, per-machine) — where YOUR copy of the original lives. Regenerate with `detect` (below).

## Annotations
A function is tracked by a comment on the line directly above it (in `source-root`):
```c
// FUNCTION: AUTOTHIEF 0x0040ef80
void Cipher_ROR1(unsigned char *buf, int len) { ... }
```
`AUTOTHIEF` = the target name in `reccmp-project.yml`; the address is the original's function address (from
`docs/SYMBOLS.md`). Currently annotated (in `src/autothief/pak_io.c`): `Cipher_ROR1` 0x0040ef80,
`PakArchive_LoadFile` 0x00410060, `FileIO_LoadWithFallback` 0x004103c0, `FileIO_Open` 0x00410660, `FileIO_Read`
0x0040f000.

## Build with debug info (so reccmp has a PDB)
`src/CMakeLists.txt` adds `/Zi` (compile) + `/DEBUG /OPT:NOREF /OPT:NOICF` (link) under MSVC so Release builds emit a
PDB and don't fold/strip functions. Build **Win32** (the original is 32-bit x86):
```bash
cmake -S src -B build-reccmp -A Win32
cmake --build build-reccmp --config Release --target pak_test
```

## Run
From the repo root (where `reccmp-build.yml` is):
```bash
reccmp-project detect --search-path "N:/GamesRE/CarJacker"   # finds AutoThief.exe -> writes reccmp-user.yml
reccmp-reccmp --target AUTOTHIEF                              # per-function match table
reccmp-reccmp --target AUTOTHIEF --verbose 0x0040ef80         # side-by-side asm diff for one function
reccmp-reccmp --target AUTOTHIEF --html report.html          # HTML report
```
(The `[ERROR] Unhandled symbol type: S_COFFGROUP/S_SECTION` lines are harmless PDB-section notices.)

## Baseline (2026-06-21)
`pak_io` is a **functional** reimplementation, not a matching one, so the numbers are LOW by design — they're a
baseline to drive toward 100% if/when byte-matching work begins:

| function | addr | match |
|---|---|---|
| FileIO_Open | 0x410660 | 40.00% |
| FileIO_Read | 0x40f000 | 13.79% |
| Cipher_ROR1 | 0x40ef80 | 6.45% |
| PakArchive_LoadFile | 0x410060 | 3.99% |
| FileIO_LoadWithFallback | 0x4103c0 | 3.37% |

Total ~11% across the annotated functions. To raise a number: `--verbose <addr>` to see the asm diff, then rewrite
the C so MSVC emits closer instructions (matching decomp). reccmp re-runs against the fresh build each time.

## Workflow (mirrors the swinedecomp project)
1. Pick a function from `docs/SYMBOLS.md`; reimplement it in `src/` with a `// FUNCTION: AUTOTHIEF 0xADDR` annotation.
2. Build (Win32, debug info) → `reccmp-reccmp --target AUTOTHIEF` → iterate on the asm diff toward 100%.
3. IDA Hex-Rays as the C base, Ghidra to cross-check IDA's SSE/stack-tracking errors (see CLAUDE.md methodology).

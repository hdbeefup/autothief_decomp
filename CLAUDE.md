# CarJacker / AutoThief — Reverse Engineering Project

Working notes for Claude (and humans). Read this first.

## Rules
- Commit working state **before** risky/experimental changes so it can be reverted.
- Commit after a fix or a batch of related fixes, before running big experiments.
- Descriptive messages: `fix: …`, `feat: …`, `docs: …`. **Never amend** — always new commits.
- Don't push unless asked. Commit to `main` (this is a solo project; that's the convention).
- For the Lua decompiler: **never let `roundtrip_check.py` regress.** Run it before/after any
  `lua4dec.py` change (`python tools/lua4-decompile/roundtrip_check.py --baseline tools/lua4-decompile/baseline_roundtrip.json`).
- Decompiler/round-trip fidelity is necessary but NOT sufficient — also eyeball compound conditions and
  test in-game. (A passing `luac4 -p` once hid a backslash-escape bug that broke every file path.)

## Project Overview
Reverse-engineering **CarJacker / AutoThief** (retail title "Crazy Drive Away"), a 2005 GTA-clone by
**Kozmogames**. **Car Jacker 2** is a near-identical Polish reskin (same engine; assets packed in one
`data.pak`) used only for cross-checking.

Two goals: (1) recover the source — native `.exe`, the Lua `.luab → .lua`, and modding tools (map editor);
(2) a "labor of love" improvement pass (jumping, collision, shooting/aim, open-world, DX8→DX9). See `ROADMAP.md`.

Key insight: **gameplay logic lives largely in Lua scripts**, loaded at startup (`autoexec.cfg` → `run scripts\*.lua`).
The native exe is mostly an engine "host." So much can be changed via Lua/config without touching native code.

## Target binary & engine
- Primary target: `N:\GamesRE\CarJacker\AutoThief.exe` (~1.8 MB, 32-bit x86, MSVC 7.0/7.1).
- Cross-check: `N:\GamesRE\Car Jacker 2\CarJacker2.exe` (+ `data.pak`).
- Stack: **DirectX 8** (fixed-function, COM vtables via `Direct3DCreate8`), **ODE** physics (statically
  linked, no matched symbols), **Lua 4.0.1** scripting, **zlib**, **OpenAL + Ogg Vorbis**.
- **No PDB exists** for the original (unlike the swinedecomp project) — matching work relies on our own
  recompiled PDB + per-function address annotations.

## Repository layout
This repo is nested: `N:\ProjectsCODE\autothief_decomp\autothief_decomp\` (git root). Sibling repos:
- `..\ScriptsStable\` — hand-verified decompiled Lua scripts (separate git repo). See its `DECOMPILER_SOURCES.md`.
- `..\lua4-decompiler\` — older standalone copy of the Lua decompiler (`272713c`, `210fd78`). To be consolidated.

```
docs/        format specs + symbol map (see below)
decomp/      Ghidra + IDA Pro decompiled C of AutoThief.exe and CarJacker2.exe
src/         reconstructed engine source (early: logger, pak_io, 4.6k auto stubs) + CMake
tools/       Python tools: Lua decompiler, asset parsers/viewers, city editor, stub generator
blender/     io_import_autothief plugin (import .PM/.ALF/.city, export .city)
build/       CMake/scratch output (gitignored)
```

## Decompilation assets
- `decomp/ghidra/autothief_split/` — 34 Ghidra C modules (`entry_point.c`, `rendering.c`, `vehicle.c`,
  `terrain.c`, `world.c`, `models.c`, `scripting.c`, `audio.c`, `d3d_api.c`, `compression.c` [zlib+Lua],
  `globals_00..08.c`, …). Parallel `carjacker2_split/`. Perl splitter: `split_autothief.pl`.
- `decomp/ida pro/` — IDA Hex-Rays export (`AutoThief.exe.c/.h`) + the same split via `split_autothief.py`.
- `docs/SYMBOLS.md` — ~251 named game funcs + 136 matched Lua 4.0.1 VM funcs + zlib/OpenAL/D3D8 imports.
  (`generate_stubs.py` shows ~4.6k functions total / ~94% still anonymous.)
- Bootstrap chain (traced): `entry → WinMain FUN_004042a0 → init FUN_00401650 → message pump FUN_004067d0
  → D3D8 device`.

## Format docs (`docs/`)
`PM_FORMAT.md` (3D models, NGPM), `ALF_FORMAT.md` (skeletal anim), `CITY_FORMAT.md` (road net + placements),
`PAK_FORMAT.md` (ROR-1 archive), `PSF_FORMAT.md` (particles), `STR_DLG_FORMAT.md` (text/dialog),
`SYMBOLS.md` (symbol dictionary), `TODO.md` (format/animation open problems — esp. vertex-to-bone binding).

## Reconstruction (`src/`) — early stage
`autothief/logger.*`, `autothief/pak_io.*` (+`pak_test.c`) implemented; `stubs/stub_functions.cpp` holds the
auto-generated stubs; `include/autothief.h` declarations. Main exe target is disabled in `CMakeLists.txt`.
Build: `cmake -A Win32 -S src -B build && cmake --build build --config Release`.
Strategy: **hybrid now → reccmp-style matching decomp as the north star** (keep the original exe as ground
truth; patch/proxy + rebuild modules underneath, validated against it). Link Lua4/zlib/ODE/OpenAL/D3D8 as
real libs; reimplement only game-specific engine + glue.

## Lua toolchain (`tools/lua4-decompile/`)
- `lua4dec.py` — Lua 4.0 bytecode decompiler (canonical copy). `python lua4dec.py in.luab -o out.lua`.
- `roundtrip_check.py` — regression harness (all 16 `.luab`: decompile → `luac4 -p` → recompile →
  normalized `luac4 -l` disasm diff + `empty_if` bug count). Baseline: `baseline_roundtrip.json`.
  **`empty_if` is the real bug signal** (a broken compound-`or` collapses into `if … then / end`);
  raw `DIFFS` is only a regression signal (equivalent jump arrangements differ legitimately).
- `CFLuaDC-Lua4-Decompiler-main/`: `luac4.exe` (compiler), `lua4.exe` (interpreter), original VB6 decompiler.
- The game runs loose `.lua` directly (per `autoexec.cfg`); to test, copy scripts into the install's `Scripts\`.

## Other tools (`tools/`)
`city_format.py` (byte-perfect .city read/write), `city_editor/` (pyglet/OpenGL 3D city viewer → future map
editor), `pm_viewer.py` (PM + ALF viewer), `str_dlg_viewer.py`, `pak_tool.py`, `lua_match.py` (Lua-VM
function ID), `harvest_symbols.py`, `generate_stubs.py`. Blender plugin in `blender/`.

## Methodology (mirrors the swinedecomp project)
- IDA Hex-Rays as the C base; **Ghidra as cross-reference** to catch IDA's SSE/stack-tracking errors
  (sqrt-arg, undefined-var, missing-block bugs). Track per-function `[ ]/[x]/[F]` status in an audit doc.
- North star: set up **reccmp** for AutoThief.exe (recompiled CMake target emits a PDB; annotate functions
  with original addresses; `reccmp-reccmp --target` for per-function match %). Tool fork at
  `C:\Users\swine\Documents\GitHub\reccmp-hdb\`.
- **reVC** (GTA Vice City decomp): concept/algorithm reference ONLY — never copy code (GPLv3 + DMCA'd).

## Current focus / known bugs
See `TODO.md` (task pile) and `docs/TODO.md` (format/animation). Highlights:
- Decompiler compound-OR/empty-if bug — **fixed** (`c4e7889`); intro.lua `JMPT`-negation bug still open.
- menu.lua / rush.lua need manual review before refreshing in ScriptsStable.
- Audio fades to silence over playtime — likely an OpenAL source/buffer leak in the `audio.c` path.
- Vertex-to-bone binding for skeletal animation (`docs/TODO.md`).

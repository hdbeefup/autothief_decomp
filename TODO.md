# TODO — task pile

Actionable tasks. For phased context see `ROADMAP.md`; for format/animation open problems see `docs/TODO.md`.

## Done
- [x] Build Lua round-trip regression harness (`tools/lua4-decompile/roundtrip_check.py` + `baseline_roundtrip.json`).
- [x] Fix decompiler compound-OR / empty-if bug (`lua4dec.py`, commit `c4e7889`). empty_if 26→3 (residual = genuine
      source stubs), zero regressions, game 697→685.
- [x] Promote `sanjose.lua` + `skeleton.lua`; refresh `game.lua` + `mimics.lua` in `..\ScriptsStable\` (commit `3681e76`).

## Now / next
- [ ] **In-game smoke test** refreshed/promoted scripts (copy `ScriptsStable\*.lua` into the game's `Scripts\`):
      sanjose mission 0 start + transitions; skeleton get-hit ragdoll (~L879), pickup/death loop, taxi; game/mimics OK.
- [ ] **Review + refresh `menu.lua` / `rush.lua`** — the OR-fix changes them at *equal* bytecode fidelity, and rush's
      `driver/badguy/copnear` region is a diamond that isn't cleanly an OR. Verify vs bytecode before refreshing.
- [ ] **Fix `intro.lua` negation bug** — positive boolean test jumping into the body (`JMPT N ; to X`) reconstructed
      as `not(val)` → recompiles to `NOT; JMPF` (+1 instr, shifts targets). Lives in the shared
      `JMPT/JMPF/JMPONT/JMPONF` handler (`lua4dec.py:~1491`); needs OR-success-vs-closing discrimination + regression
      guard (rush/skeleton boolean checks share it). intro is "usable", so lower priority.
- [ ] **Consolidate decompiler copies** — make `tools/lua4-decompile/lua4dec.py` the single source of truth; reduce
      `..\lua4-decompiler\` to a tagged historical mirror (keep `272713c` for intro history).

## Phase 2 — gameplay (Lua/config first; see ROADMAP for detail)
- [ ] Collision: tune `ERP`/`CFM`/`G_ITERATIONS` in `globals.lua` (kills "magnetic trees" + ODE LCP spam).
- [ ] Shooting/aim: fix `py1=0` flatten + `random(0,150)` Y-jitter in `rush.lua`/`globals.lua`; expose aim knobs.
- [ ] Open-world: `config.ini` view distance / city detail / traffic density; fog.
- [ ] DX8→DX9: d3d8to9 drop-in `d3d8.dll` + per-effect verification (EMBM, stencil shadows, env map, water, caustics).
- [ ] Jumping (native): vertical velocity + ballistic integration + landing test vs dynamic geoms.

## Phase 3 — modding tools
- [ ] Map editor: extend `tools/city_editor/` (picking → placement move/add/delete → save via `city_format.py`).

## Phase 4 — native engine (background)
- [ ] Set up `reccmp` for AutoThief.exe (recompiled PDB + address annotations).
- [ ] Fix the **audio fade-to-silence** bug (likely OpenAL source/buffer leak in `audio.c`).
- [ ] Hybrid harness (disc-check patch, proxy DLL); boot-to-window milestone.
- [ ] Struct/offset map; vertex-to-bone binding (`docs/TODO.md`); IDA↔Ghidra audit doc.

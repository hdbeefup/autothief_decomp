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
- [x] **Reviewed `menu.lua` / `rush.lua`** — equal bytecode fidelity, neither bytecode-exact; rush's
      `driver/badguy/copnear` diamond is a decompiler limitation. Kept committed versions (DECOMPILER_SOURCES.md).
- [~] **Fix `intro.lua` negation bug** — DEFERRED. Positive boolean test jumping into the body (`JMPT`) reconstructed
      as `not(val)` → `NOT; JMPF` (+1 instr). Lives in the shared `JMPT/JMPF/JMPONT/JMPONF` handler. Tried mirroring
      the comparison handler's convention — regressed game/menu/skeleton; reverted. Needs target-based
      OR-success-vs-closing detection for booleans, regression-guarded. intro is usable + near-semantically-correct.
- [x] **Consolidated decompiler copies** — `tools/lua4-decompile/lua4dec.py` is canonical; `..\lua4-decompiler\`
      synced as a mirror, tagged `intro-baseline` (272713c).

## Phase 2 — gameplay (Lua/config first; see ROADMAP for detail)
- [ ] Collision: tune `ERP`/`CFM`/`G_ITERATIONS` in `globals.lua` (kills "magnetic trees" + ODE LCP spam).
- [ ] Shooting/aim: fix `py1=0` flatten + `random(0,150)` Y-jitter in `rush.lua`/`globals.lua`; expose aim knobs.
- [ ] Open-world: `config.ini` view distance / city detail / traffic density; fog.
- [ ] DX8→DX9: d3d8to9 drop-in `d3d8.dll` + per-effect verification (EMBM, stencil shadows, env map, water, caustics).
- [~] Jumping (native) — SCOPED (`docs/JUMPING.md`): "glued jump" = `FUN_00527060` (globals_06.c:19411) zeroes body
      Y velocity each frame. Fix: ballistic Y integration there + a `jump` verb in `FUN_00527c80` (vehicle.c:3878);
      `MoveBody` is already scene-wide so landing on cars works once airborne. First confirm pbeScene gravity applies
      to the char body (unresolved vtable from `FUN_0041da10`) + no other per-frame Y re-pin.

## Phase 3 — modding tools
- [x] Map-editor **data layer** — `tools/city_edit.py` (list/move/setpos/delete/dup placements on byte-perfect
      `city_format.py`; selftest verifies edits touch only intended bytes). GUI-agnostic foundation.
- [ ] Map-editor **GUI** — wire `tools/city_editor/` (pyglet viewer) to `city_edit.py`: picking → selection →
      move/add/delete gizmo → save. (Needs interactive testing.)
- [ ] Road-segment vertex editing (follow-up; `city_edit.py` currently covers model placements only).

## Phase 4 — native engine (background)
- [ ] Set up `reccmp` for AutoThief.exe (recompiled PDB + address annotations).
- [~] **Audio fade-to-silence** bug — investigated (`docs/AUDIO_FADE_BUG.md`): NOT a naive leak; likely the OpenAL
      manager update `sub_4F7560` ceasing to tick (stops GC + stream pump). NEXT (user, no code change): run
      `alCmd("Stat")`/`alCmd("Clean")` in-game to confirm; if `Clean` restores audio, try a periodic-`Clean` Lua
      workaround, then the native tick fix.
- [ ] Hybrid harness (disc-check patch, proxy DLL); boot-to-window milestone.
- [ ] Struct/offset map; vertex-to-bone binding (`docs/TODO.md`); IDA↔Ghidra audit doc.

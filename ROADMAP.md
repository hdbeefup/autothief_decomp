# Roadmap — CarJacker / AutoThief

## Why this project
**CarJacker / AutoThief** ("Crazy Drive Away", Kozmogames 2005) is a small, charming GTA-clone whose source
was never released. The goals are preservation and a labor-of-love improvement pass: recover buildable/runnable
source and the original Lua, build modding tools, then fix the things that always bugged us about the game.

Because the gameplay lives mostly in **Lua scripts** (loaded at startup), a lot is reachable without touching
native code — that's what makes the improvement phase tractable for a solo effort.

## Strategy decisions
- **Native exe: hybrid now → reVC/`reccmp`-style matching decomp as the north star.** Keep the original
  `AutoThief.exe` as ground truth; make changes via proxy DLLs + targeted binary patches and rebuild source
  module-by-module underneath, validating against the live exe. Don't block running/modding on a full rebuild.
  Caveat: **no PDB** for the original, so reccmp uses our recompiled PDB + per-function address annotations.
- **First: quick wins + tooling** (Lua recovery + cheap Lua/config gameplay tuning).
- **reVC: concept-only, never copy code** (GPLv3 + Take-Two DMCA). Aiming is already 100% in AutoThief's Lua.

---

## Phase 1 — Finish Lua recovery (quick wins)
- [x] Round-trip regression harness (`tools/lua4-decompile/roundtrip_check.py` + baseline).
- [x] Fix the compound-OR / empty-if decompiler bug (`c4e7889`) — empty_if 26→3 (residual are genuine stubs),
      zero regressions.
- [x] Promote `sanjose.lua` + `skeleton.lua`; refresh `game.lua` + `mimics.lua` in ScriptsStable.
- [ ] In-game smoke test the refreshed/promoted scripts (manual).
- [ ] Review + refresh `menu.lua` / `rush.lua` (OR-fix is equal-fidelity there; rush has a complex diamond).
- [ ] Fix the `intro.lua` `JMPT`-into-body negation bug (shared boolean-test handler — regression-guard).
- [ ] Consolidate the two `lua4dec.py` copies; retire the standalone repo to a tagged mirror.

## Phase 2 — Gameplay "labor of love" (mostly Lua/config; do the cheap ones first)
- [ ] **Collision "magnetic trees" + ODE LCP spam** — tune `globals.lua` `ERP` 0.4→~0.2, `CFM` 0.001→~0.01,
      `G_ITERATIONS` 10→20–40; reproduce by driving into a tree (watch `stderr.txt`).
- [ ] **Shooting/aim** (`rush.lua::BulletShot`, `globals.lua::GetAutoAimTarget`) — un-flatten the aim ray
      (`py1=0`), remove the `random(0,150)` target-Y jitter, expose aim cone/range/dispersion per weapon.
- [ ] **Open-world feel** — `config.ini` `ViewDistFactor`/`CityDetail`/`TrafficDensity`; `VIEWRANGEFACTOR`, fog.
- [ ] **DX8 → DX9** — drop-in **d3d8to9** `d3d8.dll`; verify every effect (EMBM, stencil shadows, env map,
      water, caustics). Fall back to DXVK; patch `d3d_api.c` only as last resort.
- [ ] **Jumping** (the one native item) — give the character vertical velocity + ballistic integration and a
      landing test that includes dynamic car/prop geoms. Needs the character controller mapped first.

## Phase 3 — Modding tools
- [ ] Evolve `tools/city_editor/` from viewer → MVP map editor (picking, placement move/add/delete, save via
      byte-perfect `tools/city_format.py`). Keep Blender `export_city` for bulk authoring (note its lossy scale).

## Phase 4 — Native engine (north star, background)
- [ ] Set up **reccmp** for AutoThief.exe (recompiled PDB + address annotations + per-function match %).
- [ ] Hybrid harness + first patches (disc-check patch; proxy-DLL scaffold).
- [ ] **Fix the audio fade-to-silence bug** (likely OpenAL source/buffer leak in `audio.c`) — good first
      native win; confirm by instrumenting the live process.
- [ ] Boot-to-window milestone (entry/WinMain shim, config, window, message pump, D3D8 device via real lib).
- [ ] Struct/offset map (extend `SYMBOLS.md`); resolve vertex-to-bone binding (`docs/TODO.md`) via live instrumentation.
- [ ] IDA-base + Ghidra-cross-reference audit doc (mirror swinedecomp's `ida_ghidra_audit.md`).

## Verification
- **Lua:** `python tools/lua4-decompile/roundtrip_check.py --baseline tools/lua4-decompile/baseline_roundtrip.json`
  (no file's `DIFFS`/`empty_if` may rise) + in-game smoke test.
- **Phase-2 tuning:** launch `AutoThief.exe`, A/B before/after; watch `stderr.txt` for ODE LCP spam.
- **Map editor:** edit a placement, save, diff `.city` (only intended bytes change), load in-game.
- **Native:** `pak_test.exe`-style golden-file tests per loader; reccmp match %; live differential testing.

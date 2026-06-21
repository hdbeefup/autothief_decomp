# TODO — task pile

Durable source of truth (survives /compact, /clear, fresh sessions). For phased context see `ROADMAP.md`;
format/animation problems in `docs/TODO.md`; decompiler status in the memory + `ScriptsStable/DECOMPILER_SOURCES.md`.

## Dogfooding loop (how we work on the Lua)
`ScriptsStable/` = "stable ENOUGH to iterate from" (NOT known-perfect). We run the decompiled scripts in-game, find
bugs, hand-patch, re-test. Loop:
1. Edit a script in `wip-scripts/`.
2. `bash wip-scripts/deploy.sh` → parse-checks + copies into `N:\GamesRE\CarJacker\Scripts\` (backs up originals to
   `Scripts\_backup_wip\`; revert with `cp Scripts/_backup_wip/*.lua Scripts/`).
3. User tests in-game, reports.
4. Fix; when a script is in-game-verified, promote `wip-scripts/X.lua` → `ScriptsStable/X.lua`.
Tools: `roundtrip_check.py` (harness, flags `DROP_LOCAL`), `find_dropped_locals.py <luab>` (names a dropped `local`).

## wip-scripts/ — deployed, awaiting in-game test
- **intro.lua** — fixes: loading-hang (restored `loadingcode and (loadingcode>0)` fade gate) + story-scroll (removed
  mis-decompiled `else skip=1` that instant-skipped the story; skip still via the **A** button).
- **game.lua** — fix: `Animate` dropped `return` (TAILCALL) → was returning nil → broke ALL `Animate` markers (taxi +
  mission checkpoints). Added `return`.
- **rush.lua + globals.lua** — GTA shooting v1 (lock-on): `ShowAimLock` draws a reticle on the auto-aim target each
  frame; globals fixes `GetAutoAimTarget` dropped `bestoy/bestoz`. User: "looks good." (free-aim crosshair = v2)
- **sanjose.lua** — `local progress` fix (PROMOTED + verified; copy here is the same).
- **skeleton.lua** — `local best_dist=max` fix (PROMOTED + verified; copy here is the same).

## In-game bugs found via dogfooding (open)
- [ ] **No arrow on moving VEHICLE targets** (pedestrian arrows work). `game.lua:889` `AddMarker("marker\\cars",…)`
      is gated by `if (car>0)` in a race/mission-mode block — check that mode condition isn't another mis-decompile.
- [ ] **No game-over / fade on player death.** In `sanjose.lua` `MissionUpdate` — the `mission_curid=-2` (failed) →
      fade/restart path (lines ~488-494). Investigate for a decompiler structure bug.
- [ ] **AI car drives into walls** (e.g. toolsaler/concept8). Likely `skeleton.lua` `character_Update` road-navigation
      (`GetPointOnNetwork(roadnetwork, dx, dy, dz)` — the decompiled `dy` maps to original local `y`; verify).

## Original-game bugs — wishlist bugfix mods (the "labor of love")
- [ ] **#17 Jack NPC/ghost-driven car → player stuck** (player can't move at all, NPC jumps out). Car-control
      handover bug. Find the car-enter/`OutOfCar` logic (game.lua/skeleton.lua), scope a fix.
- [ ] **#18 Camera teleports to 0,0** on fast car enter/leave — camera loses its follow target (car vs player) in a
      race condition. Find camera-target logic (Lua or native).
- [ ] **#19 Player run/sprint (hold shift)** — original lacks it (NPCs can run). Likely Lua: char controller has
      native `speedscale`/`movementscale` verbs (`FUN_00527c80`); detect shift + bump player movement speed.
- [ ] PlaySound3D Z-axis bug (`(sz-sz)` → `(sz-pz)`) in skeleton.lua + rush.lua — see `docs/ORIGINAL_BUGS.md`,
      `mods/bugfixes/`.

## Decompiler bug PATTERNS (catalog — fix in lua4dec.py eventually; hand-patch for now)
The user defers deep decompiler perfection until after the exe decomp matures. Patterns seen:
- **Dropped `return` on TAILCALL** (`return f(...)` → `f(...)`). Only 1 in 16 scripts (game.lua `Animate`). Fix:
  emit `return ` for `Op.TAILCALL` in the CALL handler (lua4dec.py:~1060).
- **Dropped `local`** (var becomes a global). Tooling: harness `DROP_LOCAL` + `find_dropped_locals.py`. Seen in
  sanjose(`progress`), skeleton(`best_dist`), globals(`bestoy/bestoz`); benign ones in game/gamegui/mimics. Proper
  fix: use the bytecode's local debug info so a `local` is never dropped.
- **Mis-structured if/else** (e.g. intro `else skip=1` attached to wrong branch; the compound-OR/empty-if bug [FIXED
  c4e7889]). Hand-patch per case; CFG-level fix is hard.
- **`JMPT`→`not((not X))`** — this is FAITHFUL (recompiles to `NOT;JMPT`), NOT a bug; simplifying to `if X` diverges.
  Leave it. (intro task #6 ≈ resolved this way.)

## Lua recovery — remaining
- [ ] Promote intro.lua + game.lua to ScriptsStable once in-game verified.
- [ ] Re-decompile + promote the benign-dropped-local files (game/gamegui/mimics) after hand-patching their locals.
- [ ] (optional) language files german/polish/russian → ScriptsStable (clean, string tables).

## Phase 2 — gameplay (mostly Lua/config; see ROADMAP + docs/PHASE2_TUNING.md)
- [~] Collision — SCOPED (`docs/COLLISION.md`): Lua `ERP`↓/`CFM`↑ = partial (`G_ITERATIONS` is a DEAD no-op). Real
      fix native: tree colliders oversized boxes, walls frictionless (`mu=|n.y|·300→0`), no soft-CFM, `0.1s` max-dt
      clamp triggers LCP (`FUN_00424b10` globals_01.c:12413). Native target: near-callback `FUN_00433490`.
- [~] Shooting/aim — v1 lock-on done (wip). v2: free-aim crosshair (hybrid), un-flatten `py1=0`, tune cone/jitter.
- [ ] Open-world: `config.ini` view distance / city detail / traffic density; fog.
- [ ] DX8→DX9: d3d8to9 drop-in + per-effect verification.
- [~] Jumping (native) — SCOPED + GO (`docs/JUMPING.md`): only `FUN_00527060` (globals_06.c:19656) clobbers body
      Y-vel each frame; stop that while airborne + add a `jump` verb in `FUN_00527c80`. ODE gravity already applies
      (don't double-count). Landing works (char collider is in the scene sweep).

## Phase 3 — modding tools
- [x] Map-editor data layer — `tools/city_edit.py` (list/move/setpos/delete/dup; selftest passes).
- [ ] Map-editor GUI — wire `tools/city_editor/` to `city_edit.py` (picking/selection/gizmo/save). Needs testing.
- [ ] Road-segment vertex editing (follow-up).

## Phase 4 — native engine (background)
- [x] **reccmp** working (`docs/RECCMP.md`): `reccmp-reccmp --target AUTOTHIEF`, 5 pak_io funcs, ~11% baseline. Next:
      reimplement more funcs from `docs/SYMBOLS.md` toward matching %.
- [~] **Audio fade-to-silence** (`docs/AUDIO_FADE_BUG.md`): likely OpenAL manager update `sub_4F7560` stops ticking.
      NEXT (no code): `alCmd("Stat")`/`alCmd("Clean")` in-game to confirm; then periodic-`Clean` Lua workaround / native fix.
- [ ] Hybrid harness (disc-check patch, proxy DLL); boot-to-window milestone.
- [ ] Struct/offset map; vertex-to-bone binding (`docs/TODO.md`); IDA↔Ghidra audit doc.

## Done (recent)
- [x] Lua round-trip harness + `DROP_LOCAL` check; compound-OR/empty-if fix (`c4e7889`).
- [x] Promote/verify sanjose.lua, skeleton.lua. Decompiler copies consolidated.
- [x] Native scoping: jumping, collision, audio (all in `docs/`). reccmp set up. city_edit.py data layer.
- [x] Bug audit (`docs/ORIGINAL_BUGS.md`), Phase-2 tuning proposals (`docs/PHASE2_TUNING.md`).

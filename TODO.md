# TODO — task pile

Durable source of truth (survives /compact, /clear, fresh sessions). For phased context see `ROADMAP.md`;
format/animation problems in `docs/TODO.md`; decompiler status in the memory + `ScriptsStable/DECOMPILER_SOURCES.md`.

## ⏯ CONTINUATION — START HERE (as of 2026-06-21)
We are **dogfooding the decompiled Lua**: run the scripts in-game, find bugs, hand-patch in `wip-scripts/`, deploy via
`bash wip-scripts/deploy.sh`, then promote verified files to `../ScriptsStable/`. All gameplay scripts are committed
to ScriptsStable and deployed to `N:\GamesRE\CarJacker\Scripts\` (backup in `Scripts\_backup_wip\`).
**The keystone fix this session:** the decompiler's reversed multi-return assignment (`c,b,a = a,f()` → scrambled
coordinates) — fixed in `lua4dec.py`; that alone repaired shooting, melee, AI driving, taxi, and more.
**WORKING in-game now:** intro (story + auto-advance), markers, taxi, shooting/melee, AI driving, luxury-car mission.
**NEXT (open in-game bugs, hardest first):**
1. Chinatown escort (mission 9, sanjose `MissionUpdate` ~L900): enemy attacker never spawns/enables — likely a
   DROPPED CODE BLOCK (the `pikap` is fetched at L906 but unused). Reconstruct mission 9 vs original bytecode.
2. Mission-FAILED gui not appearing (sanjose uses `message2(1.5, MISSIONFAILED)` — check `message2` in gamegui.lua
   and the MISSIONFAILED display path; mission-COMPLETE was fixed via the intro auto-advance, FAILED is separate).
3. Vehicle-target arrow (game.lua:889 mode gate); game-over fade on death (sanjose mission_curid=-2 path).
4. Wishlist bugfix-mods: #17 jack ghost-driver, #18 camera→0,0, #19 run/sprint (hold shift).
Tools: `roundtrip_check.py` (harness, DROP_LOCAL/empty_if), `find_dropped_locals.py <luab>`. Hand-patch > decompiler
change for most of these (decompiler perfection deferred per user until after the exe decomp matures).

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

## In-game bugs found via dogfooding
- [x] **intro** loading-hang + story-scroll — FIXED + promoted (loadingcode AND gate; removed `else skip=1`).
- [x] **All Animate markers gone** — FIXED (game.lua `Animate` dropped `return`).
- [x] **Taxi destination marker invisible** — FIXED: `skeleton.lua:1062` `GetPointOnNetwork(…, dx, dy, dz)` used an
      undeclared global `dy`; original passes local `y`. Changed `dy`→`y`. (Was the same root cause as the AI-driving
      report — road-network projection got garbage.) Re-test.
- [ ] **Passenger enters car but door doesn't close.** `skeleton.lua:1072` `Cmd(car,"close rightdoor")` exists but is
      gated by the seating condition at L1046 (`frame>10 and prevframe<=10 and taxiwaiter==2 and anim=="idle1"`) — if
      that animation-state check is mis-decompiled or never matches, the close never fires. Investigate.
- [x] **Shooting + melee (punch/kick)** — FIXED by the reversed-temp fix (BulletShot/HitTool/HitHandLeg aim was
      scrambled). User-confirmed working.
- [x] **Luxury car (mission 5) AI driving into walls** — FIXED (reversed-temp). User-confirmed.
- [x] **Taxi destination** — FIXED (reversed-temp; on-road now). The long taxi distances are original behavior
      (`range=random(50000,150000)`); tune if wanted.
- [x] **intro auto-advance + mission-complete text** — FIXED: moved `skip=1` to the OUTER else (text-fully-scrolled),
      so the long story scrolls AND brief mission-complete (StartIntro/ShowIntro) auto-advances.
- [x] **White rectangle in minimap** — FIXED: ShowAimLock used the static `marker\checkpoint` (only animated
      checkpoint0/1/2 exist) → white box; now uses `Animate("marker\\checkpoint",3)`.
- [x] **Mission-FAILED gui not appearing** — FIXED: `gamegui.lua` `message()`/`message2()` had a merged-else bug
      (`if not time then msg_alpha=v; msg_alpha=time; end`) → any no-`time` message set msg_alpha=nil → invisible.
      Restored the `else`. Affected EVERY no-time message. Promoted; gamegui added to deploy.sh (was loaded loose but
      never deployed by the script — an earlier session had copied a buggy one in).
- [~] **Chinatown escort — attacker behaviour** — ROOT-CAUSED + FIXED (pending re-test). The gang DOES enable
      (confirmed via diagnostics). The real bug was in `gangpikap_Update`'s respawn: the original condition is
      `if (dist2 > 15000^2) OR ((timeout>5) and (dist2>5000^2))` (respawn-on-road when FAR/escaped or stuck), but the
      decompiler flipped the JMPGT-to-body comparison and dropped the OR → inverted `dist2<=15000^2 and …` → the gang
      only respawned when CLOSE, so it sat at the cemetery near the destination = "calm ride." Restored the OR; now
      matches the user-described original (spawns behind player the moment the chinaman boards, respawns on escape/
      destroy). ← RE-TEST. Note: this is a NEW decompiler bug class (compound-OR where an operand is a `>`/`<`
      comparison whose success-jump enters the body) — likely more instances elsewhere; hand-patch for now.
      Remaining sub-issue: attacker car **spins continuously** = physics (ODE LCP "disabling bodies" spam in
      stderr.txt) — Phase-2 ODE tuning (lower ERP, raise CFM), not a Lua bug.
- [x] ~~Chinatown — dropped block theory~~ — WRONG: mission-9 MissionUpdate block is
      **faithful** (NOT a dropped block — original also fetches `pikap` unused). The gang is activated in
      **`game.lua chinamafiose_Update` ~L1662** when the chinamafiose boards the player car
      (`Cmd(FindObject("pikap"/"shooter"/"gangpikap"),"enable 1")`). SetDriver(board)+enable are in the SAME block, so
      if the ride happens the enable already ran → gang enabled but `gangpikap_Update` (sanjose ~L951) produces no
      chase = a RUNTIME issue. **Diagnostics deployed** (prints at the enable site + gangpikap_Update activation; wip
      game.lua+sanjose.lua, NOT promoted). NEXT: run chinatown, check `stderr.txt` for `CHINATOWN gang enabled:`
      (pikap/shooter/gangpikap >0?) and `CHINATOWN gangpikap ACTIVATED` (chase start?) → pinpoints break, then fix +
      remove prints.
- [ ] **No arrow on moving VEHICLE targets** (pedestrian arrows work). `game.lua:889` `AddMarker("marker\\cars",…)`
      gated by `if (car>0)` in a race/mission-mode block — check the mode condition isn't another mis-decompile.
- [ ] **No game-over / fade on player death.** `sanjose.lua` `MissionUpdate` `mission_curid=-2` path (~L488-494).

## Original-game bugs — wishlist bugfix mods (the "labor of love")
- [ ] **#17 Jack NPC/ghost-driven car → player stuck** (player can't move at all, NPC jumps out). Car-control
      handover bug. Find the car-enter/`OutOfCar` logic (game.lua/skeleton.lua), scope a fix.
- [ ] **#18 Camera teleports to 0,0** on fast car enter/leave — camera loses its follow target (car vs player) in a
      race condition. Find camera-target logic (Lua or native).
- [ ] **#19 Player run/sprint (hold shift)** — original lacks it (NPCs can run). Likely Lua: char controller has
      native `speedscale`/`movementscale` verbs (`FUN_00527c80`); detect shift + bump player movement speed.
- [ ] PlaySound3D Z-axis bug (`(sz-sz)` → `(sz-pz)`) in skeleton.lua + rush.lua — see `docs/ORIGINAL_BUGS.md`,
      `mods/bugfixes/`.

## MAJOR FIX (2026-06-21): reversed multi-return assignment
The decompiler emitted `c, b, a = a, f()` instead of `a, b, c = f()` (SETLOCALs come in reverse target order; the
handler didn't reverse them and prepended a spurious leading value). This **scrambled X/Y and dropped the 3rd result
on EVERY multi-return coordinate assignment** (IntersectLine, GetPointOnNetwork, SubVectors, Normalize, …). Fixed in
lua4dec.py (commit). Harness: zero regressions, big diff drops (rush 226→46, skeleton 613→372, game 685→432, globals
165→132, sanjose 127→99). Regenerated all gameplay scripts + re-applied patches + deployed. **Likely fixes at once:**
taxi destination out-of-bounds, AI cars driving into walls, shooting reliability (BulletShot aim was scrambled), melee
(HitTool/HitHandLeg same math). ← RE-TEST ALL THESE.

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

# Phase 2 — gameplay tuning proposals (needs in-game testing)

Grounded, reasoned starting points for the "labor of love" gameplay improvements. **All of these change game
behavior and must be tested in-game** — apply in small batches, A/B before/after. Values are *starting points*,
not final. File references are to `ScriptsStable\*.lua` (copy into the game's `Scripts\` to test) and
`config.ini` / a drop-in DLL in the game install.

Risk legend: 🟢 low (easily reverted value tweak) · 🟡 medium (changes feel/structure) · 🔴 experimental.

---

## 1. Collision — "magnetic trees" + ODE LCP spam  🟢 (partial) → 🟡 (native for the real fix)
**Symptom:** cars get pulled toward/over obstacles; `stderr.txt` shows `ODE Message 3: LCP internal error, s <= 0`.
**Where:** `globals.lua` (the engine reads `CFM`/`ERP`/`G_GRAVITY` at ODE world setup / per step). Full root-cause +
native fix in **`docs/COLLISION.md`**.

| line | knob | current | try | why |
|------|------|---------|-----|-----|
| `globals.lua:32` | `ERP` | `0.4` | `0.2` | softer position correction → less "yank" toward obstacles (confirmed consumed) |
| `globals.lua:31` | `CFM` | `0.001` | `0.01` | more numerically forgiving → reduces LCP stress (confirmed consumed) |

> ⚠️ **`G_ITERATIONS` is a DEAD no-op** — the engine uses ODE's *direct* `dWorldStep`, not QuickStep, so
> `dWorldSetQuickStepNumIterations` is never called and the global is never read. Don't bother tuning it.

**The Lua tuning only softens the symptom.** Root causes are native (see `docs/COLLISION.md`): tree colliders are
oversized *boxes*, vertical-face friction is ~0 (`mu = |n.y|·300 → 0`), no soft-CFM, and a **0.1 s max-timestep clamp**
(`FUN_00424b10`, globals_01.c:12413) triggers the LCP error on frame hitches. The real fix is the near-callback
`FUN_00433490` (soft-CFM + `dContactApprox1` + wall-`mu` floor + tighter depth clamp) and reducing that dt clamp.

**Test:** drive into a tree/lamppost; watch for the pull-in and the LCP burst in `stderr.txt`. Bisect ERP/CFM between
runs. If pull persists (it will, partly), it's the native near-callback (Phase 4 / `docs/COLLISION.md`).

## 2. Shooting / aim  🟡
**Where:** `rush.lua::BulletShot` (L31) + `globals.lua::GetAutoAimTarget` (L169). Weapon stats at `rush.lua:713/725`.

Important nuance: when auto-aim **acquires** a target, `BulletShot` already aims at its chest (`cy+100`, L38) — vertical
aim works there. `py1=0` (L34) only flattens the auto-aim *search* vector and the *no-target* fallback bullet.

Low-risk, high-value tweaks first:
- 🟢 `globals.lua:182` — remove the random vertical jitter `oy = oy + random(0, 150)` (drop it, or shrink to
  `random(0, 30)`). It makes target selection wander vertically; removing makes aim consistent.
- 🟢 `rush.lua:713` / `:725` — tighten `dispersion` (pistol `0.03`→`0.02`, uzi `0.2`→`0.15`) for precision; widen
  `autoaimangle` cone (`0.97`→`0.95`) for easier acquisition. These are already per-weapon knobs.
- 🟢 `globals.lua:188` — extend engagement range `dist<4000` → `dist<6000` if you want longer shots.
- 🔴 `rush.lua:34` — removing `py1=0` lets the gun's own tilt drive free-aim. Uncertain in this near-top-down game
  (may break the horizontal cone). Test in isolation; likely leave as-is unless free vertical aim is specifically wanted.

**Test:** shoot at enemies at varying range/height; confirm consistent aim, acquisition feel, and that the `print("aimed!…")`
debug fires. (reVC reference: NOT needed — this is all original Lua; do not vendor its code.)

## 3. Open-world feel  🟢
**Where:** `config.ini` (game install) + `globals.lua` / `game.lua`.

| setting | file | current | try | effect |
|---------|------|---------|-----|--------|
| `ViewDistFactor` | config.ini | `3` | `4`–`5` | farther draw distance |
| `CityDetail` | config.ini | `0.5` | `0.75`–`1.0` | more city geometry/props |
| `TrafficDensity` | config.ini | `10` | `15`–`20` | denser traffic (also set in sanjose/game Lua) |
| `VIEWRANGEFACTOR` | globals.lua:26 | `0.03` | lower (e.g. `0.02`) | pushes out the LOD/clip threshold |

**Test:** renderer is fixed-function (fill-rate bound) — watch FPS. Pair with #4 (DX9) if draw distance gets heavy.

## 4. DirectX 8 → DirectX 9 (compatibility)  🟡
**Approach:** drop a translating **d3d8to9** `d3d8.dll` next to `AutoThief.exe` (the engine makes one
`Direct3DCreate8` call + uses fixed-function = ideal case; no engine edits). Fallback: DXVK's `d3d8.dll`.
By itself this is a **stability/compatibility** win (modern GPUs/OS, windowed/borderless), not a visual upgrade.

**Verify each `config.ini` effect individually after dropping the DLL** (highest regression risk first):
EMBM / bump (`EMBM=true`) → stencil shadows (needs D24S8) → env mapping → water reflect/blur → caustics → god rays.
If a specific effect breaks, try DXVK before touching the engine. Only patch `d3d_api.c` as a last resort (Phase 4).

## 5. Jumping  🔴 (native — Phase 4)
Not Lua-tunable: the character is animation/ground-snap driven (`MoveBody` + per-frame Y clamp). Needs a native change
(vertical velocity + ballistic integration + a landing test that includes dynamic car/prop geoms). Deferred to Phase 4.

---

### Suggested test order (value ÷ effort)
1. Collision (#1) — likely the biggest felt improvement for least effort; kills the LCP spam too.
2. Aim jitter + dispersion (#2 low-risk items).
3. Open-world config (#3).
4. DX9 drop-in (#4) + effect checklist.

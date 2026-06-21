# Jumping — native feature scoping

**Goal:** a real jump (the player complaint: jumping is "glued to the same spot" and you "can't jump on top of a car").
**Verdict:** a small, well-localized **native** change (one function + one command verb), with one dependency to confirm.
This is a good hybrid-approach target (binary patch / reconstructed function on `FUN_00527060` + a new `jump` verb).

## How the on-foot character actually works
The character is a **custom velocity-driven rigid body** ("pbe" body at character field `param_1[0xbc]`), NOT
animation-root-position and NOT ground-height-clamped. Y is produced by the physics body (integrate velocity, collide
against the scene). Body sub-layout (from globals_05.c setters): pos `+0x98/9c/a0`, linear vel `+0xe8/ec/f0`,
angular vel `+0xf8/fc/100`, orientation quat `+0xa8..b4`.

`MoveBody` (Lua) → `FUN_00454090` (globals_02.c:15203) → sphere sweep `FUN_0041f800` (globals_01.c:8330), which is
**scene-wide**: it walks the collision world's full collider registry (`scene+0x90..+0x94`) and calls each collider's
virtual sphere-test (vtable+0x30) — terrain, road network, AND dynamically-registered car/prop geoms. Resolution is
collide-and-slide (accumulate contact push-outs), not stop-at-first-hit.

## Root cause of the "glued jump"
`FUN_00527060` (globals_06.c:19411) — the per-frame animation root-motion locomotion (a virtual method, called only
via vtable) — unconditionally overwrites the body's linear velocity every frame:
```c
// globals_06.c:19652-19657
local_38 = local_14;                                  // root-motion Y (~0 for walk/run; 100 only in vault states 7/8)
local_3c = (float)((float10)local_18 * fVar7);        // X * speed
local_34 = (float)((float10)local_10 * fVar7);        // Z * speed
if (*(int *)(*(int *)param_1[0xa6] + 0xbc) != 0)
  FUN_004e4778(body, local_3c, local_14, local_34);   // SetLinearVel(vx, vy=local_14, vz) -- Y reset every tick
```
So the body's vertical velocity is reset to ≈0 every frame before gravity/impulse can integrate into an arc →
vertically pinned. Since it never rises, it can never come down onto a car. The collision query is not the limiter.
There is **no `jump` verb** and no vertical-impulse verb (present or commented-out) in the dispatcher.

## Minimal fix
1. **Ballistic integration in `FUN_00527060`** (globals_06.c:~19652): maintain a per-character jump velocity (an unused
   character field, or read-modify body `vel.y` at +0xec via the getter `FUN_004e4730`). When airborne, replace the hard
   `vy = local_14` with `vy = jumpVel` and decrement `jumpVel -= g*dt` each frame instead of zeroing it. **This is the
   single load-bearing change.**
2. **Add a `jump` verb in `FUN_00527c80`** (vehicle.c char `Cmd` dispatcher, string-verb block ~line 4181, after
   `anim`): set the jump-velocity field to an upward impulse, optionally switch to a jump anim via vtable+0xb8
   (`FUN_00525b40`). Then Lua (`skeleton.lua`) can trigger it on the jump key.
3. **Landing:** no new query — `MoveBody`/`FUN_0041f800` already sweep the whole scene collider registry, so
   collide-and-slide resolves landing on a car roof once vertical motion exists.

## Dependency RESOLVED — GO (and simpler than first thought)
Correction: the character `+0xbc` body is a **raw ODE `dxBody`**, not a separate "pbe" body (pbeScene is just the
renderer/collision wrapper; `FUN_0041da10` only sets D3D matrices, it is NOT the physics step). The real step chain is
`FUN_004e3fa4` (world step) → `FUN_004edd30` (island stepper / `dInternalStepIsland`) → `FUN_004f0ce8` (integrator,
`pos += vel*dt`). Confirmed:
- **Gravity already applies to the character body.** The island stepper does `facc += mass*g` for every body whose
  no-gravity bit (`flags+0x18 & 0x8`) is clear (globals_05.c:16988), then `vel += impulse*invMass`. The char body is
  created by `dBodyCreate` (`FUN_004e3e0c`), enabled, gravity-ON by default, and **nothing in the binary ever sets the
  no-gravity bit**. So ODE produces the rise-and-fall arc for free — the jump code must **NOT** add its own `vy -= g*dt`
  (that would double-count gravity).
- **The char foot collider IS in the `scene+0x90` registry** (registered via the scene's pending-add list), so the
  scene-wide sweep already tests it against terrain + cars → landing on a car works once airborne.
- **Only ONE per-frame writer of the char body Y-velocity to gate:** the `FUN_004e4778` call at globals_06.c:19656
  inside `FUN_00527060`. (The ODE solver's own write at globals_05.c:18572 is legitimate — leave it.) No separate
  stick-to-ground routine exists.

**Net plan:** in `FUN_00527060`, while airborne don't overwrite body Y-vel (preserve `body+0xec`); set `vy = jumpVel`
once on the jump frame; add a `jump` verb in `FUN_00527c80` (vehicle.c:3882). ODE handles the gravity/fall and landing.

## Key addresses
| Purpose | Function | Location |
|---|---|---|
| `MoveBody` Lua binding | `FUN_00454090` | globals_02.c:15203 |
| Scene-wide sphere broadphase (all colliders) | `FUN_0041f800` | globals_01.c:8330 |
| **Per-frame locomotion (the velocity overwrite = the "glue")** | `FUN_00527060` | globals_06.c:19411 |
| Character `Cmd` verb dispatcher (no `jump`) | `FUN_00527c80` | vehicle.c:3878 |
| Animation-state setter (vtable+0xb8) | `FUN_00525b40` | globals_06.c:18696 |
| Body SetPos / SetLinVel / SetAngVel | `FUN_004e4804 / 004e4778 / 004e4754` | globals_05.c:13873 / 13837 / 13823 |
| pbeScene step (gravity/integration) — unresolved vtable link | from `FUN_0041da10` | globals_01.c |

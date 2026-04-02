# PSF Particle System Format Specification

**Game:** AutoThief / CarJacker (Kozmogames, 2005)  
**Engine:** PBE Engine  
**Magic:** None (raw struct, no magic bytes)  
**File extensions:** `.psf`  
**Path convention:** `ParticleSystems/{effect_name}.psf`  
**Fixed size:** 332 bytes (0x14C) — all files are identical in size  
**Textures:** TGA format, stored in `Textures/Sprite/` directory  

---

## File Layout Overview

The file is a single flat C struct with no header, no magic number, and no variable-length sections. It is loaded in one `fread()` call.

| Offset | Size | Description |
|--------|------|-------------|
| 0x00 | 0x10 (16) | Size parameters |
| 0x10 | 0x08 (8) | Emission parameters (burst, attached flag, rate) |
| 0x18 | 0x10 (16) | Direction and padding |
| 0x28 | 0x0C (12) | Physics parameters |
| 0x34 | 0x08 (8) | Render flags and spread angle |
| 0x3C | 0x100 (256) | Texture path |
| 0x13C | 0x0C (12) | Distance and velocity |
| 0x148 | 0x04 (4) | Color (RGB + pad) |

All multi-byte values are little-endian. Floats are IEEE 754 single-precision.

---

## Size Parameters (0x00 - 0x0F, 16 bytes)

```
Offset  Size  Type    Description
0x00    4     float   Size A minimum
0x04    4     float   Size B minimum
0x08    4     float   Size A maximum
0x0C    4     float   Size B maximum
```

At spawn time, each particle receives two random size values:
- `sizeA = random(sizeAMin, sizeAMax)`
- `sizeB = random(sizeBMin, sizeBMax)`

These values remain constant for the particle's lifetime. For most effects (explosions, smoke, debris), A and B are equal ranges, producing square sprites. Light trace effects use a small A (width) and very large B (length), producing elongated streaks.

---

## Emission Parameters (0x10 - 0x17, 8 bytes)

```
Offset  Size  Type    Description
0x10    2     uint16  Burst count (particles emitted at once; 0 = continuous mode)
0x12    2     uint16  Attached flag (1 = effect attached to source object)
0x14    4     int32   Emit rate (particles per tick in continuous mode)
```

One-shot effects (explosions, impacts) use a non-zero burst count with emit rate 0. Continuous effects (exhaust, smoke, trails) use burst count 0 with a non-zero emit rate.

The attached flag is set on effects that track their source object (light glows, shadows, muzzle flashes) rather than emitting freely into the world.

| Pattern | Burst | Attached | Rate | Example effects |
|---------|-------|----------|------|-----------------|
| One-shot | 50 | 0 | 0 | explosion, bigexplosion |
| One-shot | 40 | 0 | 0 | bloodExp |
| One-shot | 8–10 | 0 | 0 | carhit, surfacehit, leaf |
| Continuous | 0 | 0 | 1–10 | exhaust, enginesmoke, smoke1 |
| Continuous | 0 | 0 | 30 | enginefire |
| Continuous | 0 | 0 | 300 | watertrail |
| Attached | 0 | 1 | 5–30 | light traces, shadows, shotflare, marker |

---

## Direction Vector (0x18 - 0x27, 16 bytes)

```
Offset  Size  Type    Description
0x18    4     float   Direction X
0x1C    4     float   Direction Y
0x20    4     float   Direction Z
0x24    4     float   (unused, always 0.0)
```

The preferred emission direction, normalized at spawn time. Combined with the spread angle to determine each particle's initial heading.

Common direction vectors:
- `(0, 1, 0)` — upward (explosions, smoke, fire)
- `(0, 0, 1)` — forward (headlight traces, traffic shadows)
- `(0, 0, -1)` — backward (backlight traces)
- `(0, -1, 0)` — downward (used by trafficshadow1)
- `(0, 0, 0)` — omnidirectional (bloodExp, surfacehit)

---

## Physics Parameters (0x28 - 0x33, 12 bytes)

```
Offset  Size  Type    Description
0x28    4     float   Speed (initial velocity multiplier)
0x2C    4     float   Gravity (Y-axis acceleration; negative = downward)
0x30    4     float   (unused, always 0.0)
```

**Speed** scales the normalized direction vector at spawn time, setting the particle's initial velocity magnitude.

**Gravity** is applied every update tick as a constant Y-axis acceleration:
```
velocity.Y += deltaTime * gravity
```

| Effect | Speed | Gravity | Behavior |
|--------|-------|---------|----------|
| explosion | 180.0 | -40.0 | Fast burst, falls |
| exhaust | 90.0 | 0.0 | Steady stream, no fall |
| bloodExp | 40.0 | -10.0 | Slow burst, slight fall |
| leaf | 360.0 | -5.0 | Fast scatter, gentle fall |
| watertrail | 90.0 | -50.0 | Trail, heavy fall |

---

## Render Flags (0x34 - 0x37, 4 bytes)

```
Offset  Size  Type    Description
0x34    1     uint8   Blend mode
0x35    1     uint8   Particle type
0x36    2     pad     Always 0
```

### Blend Mode

| Value | Mode | Usage |
|-------|------|-------|
| 1 | Additive | Light traces, flares, glow effects |
| 2 | Alpha blend | Smoke, debris, leaves, explosions |

### Particle Type

| Value | Description | Example effects |
|-------|-------------|-----------------|
| 1 | Standard billboard | explosion, smoke, leaf, engine effects, light traces |
| 3 | Variant | bloodExp, carhit, exhaust, marker, shotflare, surfacehit |

---

## Spread Angle (0x38 - 0x3B, 4 bytes)

```
Offset  Size  Type    Description
0x38    4     float   Spread angle (degrees)
```

Controls the cone of emission around the direction vector. At spawn time, the direction is randomly perturbed within this angle range:

- `360.0` — full sphere (explosions, impacts, leaf scatter)
- `0.0` — perfectly directional (light traces, traffic shadows)

---

## Texture Path (0x3C - 0x13B, 256 bytes)

```
Offset  Size  Type      Description
0x3C    256   char[256] Null-terminated texture file path, zero-padded
```

Contains the absolute development path to the sprite texture, e.g.:
```
D:\AutoThief\Bin\Textures\Sprite\fire2.tga
D:\AutoThief\Bin\Textures\Sprite\smoke.tga
```

At runtime, the engine extracts the filename from this path, prepends `.\Textures\Sprite\`, and loads the TGA texture via `FUN_00429a60`. The loaded texture handle is stored at `obj+0xCC` (outside the PSF data region).

One anomalous file (`bloodExp.psf`) references a path beginning with `D:\Aliens-Break...`, indicating asset reuse from a different project.

---

## Distance and Velocity (0x13C - 0x147, 12 bytes)

```
Offset  Size  Type    Description
0x13C   4     float   Max distance (particle kill threshold)
0x140   4     float   Velocity scale minimum
0x144   4     float   Velocity scale maximum
```

**Max distance:** Each particle accumulates the total distance it has traveled. When accumulated distance reaches this threshold, the particle is destroyed:
```
distance += length(velocity * deltaTime)
if (distance >= maxDistance) → kill particle
```

**Velocity scale:** At spawn, each particle's direction vector is further multiplied by a random value in this range:
```
scale = random(velocityScaleMin, velocityScaleMax)
velocity = normalized_direction * speed * scale
```

---

## Color (0x148 - 0x14B, 4 bytes)

```
Offset  Size  Type    Description
0x148   1     uint8   Red
0x149   1     uint8   Green
0x14A   1     uint8   Blue
0x14B   1     pad     Always 0
```

The particle tint color. At load time, the engine packs these into a 32-bit ARGB value with full opacity:
```
ARGB = 0xFF000000 | (R << 16) | (G << 8) | B
```

| Effect | R | G | B | Color |
|--------|---|---|---|-------|
| explosion | 0x80 | 0x80 | 0x80 | Gray (neutral tint) |
| bigexplosion_particles | 0xFF | 0xFF | 0xFF | White (full bright) |
| bloodExp | 0xFF | 0x00 | 0x00 | Red |
| carsmoke | 0x29 | 0x29 | 0x29 | Dark gray |
| enginefire | 0xFF | 0xFF | 0xFF | White |
| leaf | 0x3C | 0x91 | 0x66 | Green |
| backlighttrace | 0xFF | 0x00 | 0x00 | Red |
| headlighttrace | 0xFF | 0xFF | 0xFF | White |

---

## File Size

All PSF files are exactly **332 bytes (0x14C)**. There are no variable-length sections. All 23 shipped files have been verified at this size.

---

## Verification Examples

### explosion.psf (332 bytes)

```
Offset  Hex                  Interpreted
0x00    00 00 96 43          sizeAMin = 300.0
0x04    00 00 96 43          sizeBMin = 300.0
0x08    00 00 48 44          sizeAMax = 800.0
0x0C    00 00 48 44          sizeBMax = 800.0
0x10    32 00               burstCount = 50
0x12    00 00               attachedFlag = 0
0x14    00 00 00 00          emitRate = 0
0x18    00 00 00 00          directionX = 0.0
0x1C    00 00 80 3F          directionY = 1.0 (up)
0x20    00 00 00 00          directionZ = 0.0
0x28    00 00 34 43          speed = 180.0
0x2C    00 00 20 C2          gravity = -40.0
0x34    02                   blendMode = 2 (alpha)
0x35    01                   particleType = 1
0x38    00 00 B4 43          spreadAngle = 360.0
0x3C    "D:\AutoThief\Bin\Textures\Sprite\fire2.tga"
0x13C   00 00 FA 43          maxDistance = 500.0
0x140   00 00 48 44          velocityScaleMin = 800.0
0x144   00 00 96 44          velocityScaleMax = 1200.0
0x148   80 80 80 00          color = RGB(128, 128, 128)
```

### exhaust.psf (332 bytes)

```
Offset  Hex                  Interpreted
0x00    00 00 A0 41          sizeAMin = 20.0
0x04    00 00 A0 41          sizeBMin = 20.0
0x08    00 00 F0 41          sizeAMax = 30.0
0x0C    00 00 F0 41          sizeBMax = 30.0
0x10    00 00               burstCount = 0
0x12    00 00               attachedFlag = 0
0x14    01 00 00 00          emitRate = 1
0x18    00 00 00 00          directionX = 0.0
0x1C    00 00 80 3F          directionY = 1.0 (up)
0x20    00 00 00 00          directionZ = 0.0
0x28    00 00 B4 42          speed = 90.0
0x2C    00 00 00 00          gravity = 0.0
0x34    02                   blendMode = 2 (alpha)
0x35    03                   particleType = 3
0x38    00 00 B4 43          spreadAngle = 360.0
0x3C    "D:\AutoThief\Bin\Textures\Sprite\smoke.tga"
0x13C   00 00 48 42          maxDistance = 50.0
0x140   00 00 70 41          velocityScaleMin = 15.0
0x144   00 00 C8 41          velocityScaleMax = 25.0
0x148   80 80 80 00          color = RGB(128, 128, 128)
```

---

## Runtime Structure

The engine allocates a 0x2A0 (672) byte object for each particle system instance. The PSF data occupies bytes 0x118–0x263:

```c
struct ParticleSystemObject {   // 0x2A0 bytes, allocated by FUN_004573b0
    void*   vtable;             // 0x00
    // ... base class / runtime state (0x04 - 0x117) ...
    // PSF data region (0x118 - 0x263):
    float   sizeAMin;           // 0x118 (file 0x00)
    float   sizeBMin;           // 0x11C (file 0x04)
    float   sizeAMax;           // 0x120 (file 0x08)
    float   sizeBMax;           // 0x124 (file 0x0C)
    uint16  burstCount;         // 0x128 (file 0x10)
    uint16  attachedFlag;       // 0x12A (file 0x12)
    int     emitRate;           // 0x12C (file 0x14)
    float   directionX;         // 0x130 (file 0x18)
    float   directionY;         // 0x134 (file 0x1C)
    float   directionZ;         // 0x138 (file 0x20)
    float   _unused_24;         // 0x13C (file 0x24)
    float   speed;              // 0x140 (file 0x28)
    float   gravity;            // 0x144 (file 0x2C)
    float   _unused_30;         // 0x148 (file 0x30)
    uint8   blendMode;          // 0x14C (file 0x34)
    uint8   particleType;       // 0x14D (file 0x35)
    uint8   _pad[2];            // 0x14E (file 0x36)
    float   spreadAngle;        // 0x150 (file 0x38)
    char    texturePath[256];   // 0x154 (file 0x3C)
    float   maxDistance;        // 0x254 (file 0x13C)
    float   velocityScaleMin;   // 0x258 (file 0x140)
    float   velocityScaleMax;   // 0x25C (file 0x144)
    uint8   colorR;             // 0x260 (file 0x148)
    uint8   colorG;             // 0x261 (file 0x149)
    uint8   colorB;             // 0x262 (file 0x14A)
    uint8   _pad2;              // 0x263 (file 0x14B)
    // Computed / runtime fields:
    uint32  packedARGB;         // 0x264 (computed from RGB)
    // ... Lua callback string, further runtime state ...
};
```

---

## Lua API

Particle emitters are placed from Lua scripts via:
```lua
local id = InsertParticleSource("ParticleSystems\\exhaust.psf", x, y, z)
```

The function accepts optional additional parameters for orientation and scale:
```lua
InsertParticleSource("ParticleSystems\\watertrail.psf", cx, cy, cz, 0, 0, 0, 2, 2, 2)
```

---

## Complete File Inventory

All 23 shipped PSF files in `ParticleSystems/`:

| File | Texture | Burst | Attached | Rate | Blend | Color |
|------|---------|-------|----------|------|-------|-------|
| backlighttrace.psf | particle1.tga | 0 | 0 | 5 | Additive | Red |
| backlighttracelight.psf | test.tga | 0 | 1 | 15 | Additive | Red |
| bigexplosion.psf | fire2.tga | 50 | 0 | 0 | Alpha | Gray |
| bigexplosion_particles.psf | firepat.tga | 50 | 0 | 0 | Additive | White |
| bloodExp.psf | smoke.tga | 40 | 0 | 0 | Alpha | Red |
| carhit.psf | transparent.tga | 8 | 0 | 0 | Additive | RGB(151,75,0) |
| carsmoke.psf | smoke.tga | 0 | 0 | 5 | Alpha | Dark gray |
| enginefire.psf | fire2.tga | 0 | 0 | 30 | Alpha | White |
| enginesmoke.psf | smoke.tga | 0 | 0 | 10 | Alpha | RGB(89,89,89) |
| exhaust.psf | smoke.tga | 0 | 0 | 1 | Alpha | Gray |
| explosion.psf | fire2.tga | 50 | 0 | 0 | Alpha | Gray |
| headlighttrace.psf | flare.tga | 0 | 0 | 5 | Additive | White |
| headlighttracelight.psf | test.tga | 0 | 1 | 30 | Additive | RGB(91,91,91) |
| leaf.psf | leaf.tga | 8 | 0 | 0 | Alpha | Green |
| marker.psf | cmarker.tga | 0 | 1 | 3 | Alpha | White |
| shotflare.psf | shotflare.tga | 0 | 1 | 30 | Additive | White |
| skid.psf | smoke.tga | 1 | 0 | 0 | Alpha | Gray |
| smoke1.psf | smoke.tga | 0 | 0 | 1 | Alpha | RGB(192,192,192) |
| surfacehit.psf | particle.tga | 10 | 0 | 0 | Alpha | RGB(83,83,83) |
| trafficshadow.psf | smoke.tga | 0 | 1 | 5 | Alpha | RGB(91,91,91) |
| trafficshadow1.psf | smoke.tga | 0 | 1 | 5 | Alpha | RGB(91,91,91) |
| watertrail.psf | water.tga | 0 | 0 | 300 | Alpha | White |

---

## References

- Decompiled from `AutoThief.exe` using Ghidra
- Key functions:
  - `FUN_004699e0` — PSF file loader (`fread` 0x14C bytes into `obj+0x118`, copies to hash map, loads texture)
  - `FUN_00469940` — Registers PSF data in internal hash map by filename
  - `FUN_00466a40` — Texture loader (extracts filename from PSF path, loads from `.\Textures\Sprite\`)
  - `FUN_00466c50` — Particle spawn (randomizes size, direction, velocity; allocates 0x138-byte particle instance)
  - `FUN_004670d0` — Particle update (applies gravity, accumulates distance, kills expired particles)
  - `FUN_004573b0` — Particle system object constructor (allocates 0x2A0-byte object)

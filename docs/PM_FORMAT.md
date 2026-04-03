# PM Model Format Specification

**Game:** AutoThief / CarJacker (Kozmogames, 2005)  
**Engine:** PBE Engine (pbeScene.cpp / pbeTexture.cpp)  
**Magic:** `NGPM` (4 bytes)  
**File extensions:** `.pm`, `.PM`  
**3D authoring tool:** 3ds Max (`.max` source files referenced in headers)  
**Textures:** DDS format, stored separately in `Textures/` directory  

---

## File Layout Overview

| Offset | Size | Description |
|--------|------|-------------|
| 0x000 | 0x100 (256) | Text header |
| 0x100 | 0x28 (40) | Binary header |
| 0x128 | varies | Vertex positions |
| varies | varies | Vertex indices (optional) |
| varies | varies | Per-vertex normals (optional) |
| varies | varies | Triangle data |
| varies | varies | Extra triangle data (optional) |
| varies | varies | Helper objects |
| varies | varies | Material entries |

---

## Text Header (0x000 - 0x0FF, 256 bytes)

```
Offset  Size  Description
0x000   4     Magic: "NGPM" (4E 47 50 4D)
0x004   1     Version byte (typically 0x01)
0x005   251   Null-terminated ASCII build string, zero-padded
```

The build string contains metadata from the export tool:
```
Build performed by <user> on comp '<hostname>' at <date> from '<source_path>'
```

**Examples:**
- `Build performed by Ilia on comp 'HOME' at Tue Dec 16 20:18:21 2003`
- `Build performed by Ilia on comp 'KOZMO' at Thu Jan 13 18:27:58 2005 from 'D:\AutoThief\Models\Trees\tree_02\tree02a.max'`
- `Build performed by Administrator on comp 'ILIA' at Sat Sep 14 17:37:42 2002 from 'D:\SkateMadnessGraphics\Misc\arrow\arrow.max'`

Older models (exported ~2002) reference `SkateMadnessGraphics` paths, suggesting asset reuse from an earlier project (Skateboard Madness / SkateMadness).

---

## Binary Header (0x100 - 0x127, 40 bytes)

```
Offset  Size   Type     Description
0x100   4      uint32   Reserved (always 0)
0x104   2      uint16   Flags (see below)
0x106   2      uint16   Vertex count
0x108   2      uint16   Triangle count
0x10A   1      uint8    Material count
0x10B   1      uint8    Reserved (0)
0x10C   2      uint16   Has vertex indices flag (1 if vertex indices present, correlates with flags bit 0 clear)
0x10E   1      uint8    Helper count
0x10F   1      uint8    Reserved (0)
0x110   24     float[6] Bounding box (min_x, min_y, min_z, max_x, max_y, max_z) — stored as 6 floats
```

### Flags (offset 0x104)

| Bit | Mask | When SET | When CLEAR |
|-----|------|----------|------------|
| 0 | 0x01 | No vertex indices array; triangle UVs stored as **direct floats** | Vertex indices array present; triangle UVs computed via **projection matrix** |
| 1 | 0x02 | Per-vertex normals array present | No per-vertex normals |
| 2 | 0x04 | Extra triangle data present (32 bytes per triangle) | No extra triangle data |

The flags field fundamentally changes how UV coordinates are stored in the triangle data (see Triangle Data section).

---

## Vertex Positions (starting at 0x128)

```
Count:  vertex_count (from header)
Stride: 12 bytes
```

| Offset | Size | Type  | Description |
|--------|------|-------|-------------|
| 0      | 4    | float | X position |
| 4      | 4    | float | Y position |
| 8      | 4    | float | Z position |

Coordinate system: Left-handed (Direct3D 8 convention).

---

## Vertex Indices (optional, follows vertex positions)

**Present when:** `flags & 1 == 0`

```
Count:  vertex_count
Stride: 2 bytes (uint16)
```

Each entry is a uint16 value per vertex. Purpose appears to be smoothing group or adjacency data used by the engine's LOD system. Values range from 0 to approximately vertex_count and are NOT material indices.

---

## Per-Vertex Normals (optional, follows vertex indices)

**Present when:** `flags & 2 != 0`

```
Count:  vertex_count
Stride: 12 bytes
```

| Offset | Size | Type  | Description |
|--------|------|-------|-------------|
| 0      | 4    | float | Normal X |
| 4      | 4    | float | Normal Y |
| 8      | 4    | float | Normal Z |

When absent, face normals should be computed from triangle vertex positions.

---

## Triangle Data (follows normals or vertex indices)

```
Count:  triangle_count
Stride: 44 bytes (0x2C)
```

The internal layout of each 44-byte triangle entry depends on the **flags** field:

### When `flags & 1 == 1` (Direct Float UVs)

| Offset | Size | Type     | Description |
|--------|------|----------|-------------|
| 0      | 2    | uint16   | Vertex index 0 |
| 2      | 2    | uint16   | Vertex index 1 |
| 4      | 2    | uint16   | Vertex index 2 |
| 6      | 2    | uint16   | Unused padding |
| 8      | 4    | float    | U coordinate for vertex 0 |
| 12     | 4    | float    | V coordinate for vertex 0 |
| 16     | 4    | float    | U coordinate for vertex 1 |
| 20     | 4    | float    | V coordinate for vertex 1 |
| 24     | 4    | float    | U coordinate for vertex 2 |
| 28     | 4    | float    | V coordinate for vertex 2 |
| 32     | 8    | -        | Unused / reserved |
| 40     | 1    | uint8    | **Material index** |
| 41     | 3    | -        | Unused padding |

UV coordinates are stored directly as IEEE 754 floats. Values are typically in the 0.0–1.0 range but may exceed it for tiled/wrapped textures.

**V coordinate convention:** Top-down (V=0 at top of texture). For OpenGL rendering, apply `V = 1 - V`.

### When `flags & 1 == 0` (UV Projection Matrix)

| Offset | Size | Type     | Description |
|--------|------|----------|-------------|
| 0      | 2    | uint16   | Vertex index 0 |
| 2      | 2    | uint16   | Vertex index 1 |
| 4      | 2    | uint16   | Vertex index 2 |
| 6      | 2    | -        | Unused padding |
| 8      | 4    | float    | U projection: X coefficient (m0) |
| 12     | 4    | float    | U projection: Y coefficient (m1) |
| 16     | 4    | float    | U projection: Z coefficient (m2) |
| 20     | 4    | float    | U projection: constant offset (m3) |
| 24     | 4    | float    | V projection: X coefficient (m4) |
| 28     | 4    | float    | V projection: Y coefficient (m5) |
| 32     | 4    | float    | V projection: Z coefficient (m6) |
| 36     | 4    | float    | V projection: constant offset (m7) |
| 40     | 1    | uint8    | **Material index** |
| 41     | 3    | -        | Unused padding |

UV coordinates are **computed** at runtime by projecting each vertex position through the per-face affine matrix:

```
u = pos.x * m0 + pos.y * m1 + pos.z * m2 + m3
v = pos.x * m4 + pos.y * m5 + pos.z * m6 + m7
```

This is equivalent to a planar/box UV projection commonly used in 3ds Max for architectural and environmental models. Each face carries its own projection, allowing different faces to be mapped from different angles.

**Note:** The original D3D engine code negates V (`v = -v`) because Direct3D uses top-down V coordinates. When rendering in OpenGL, apply the standard `V = 1 - V` flip instead (same as for flags=1 direct UVs).

### Material Index (byte 40)

Present in **both** triangle layouts at the same offset. Values range from `0` to `material_count - 1`. This byte determines which material (texture) is applied to the face.

**Note:** In MSVC debug builds, bytes 6-7 often contain `0xCDCD` (uninitialized heap fill). These bytes are unused by the engine.

---

## Extra Triangle Data (optional, follows triangle data)

**Present when:** `flags & 4 != 0`

```
Count:  triangle_count
Stride: 32 bytes (0x20)
```

Purpose unknown. Possibly lightmap UVs or additional per-face data. Rarely observed in the game's model files.

---

## Helper Objects (follows extra triangle data)

**Important:** Helpers are stored BEFORE materials in the file.

```
Count:  helper_count (from header)
Stride: 76 bytes (0x4C)
```

| Offset | Size | Type     | Description |
|--------|------|----------|-------------|
| 0x00   | 32   | char[32] | Null-terminated ASCII name |
| 0x20   | 32   | byte[32] | Mixed data (vertex indices, flags — varies by helper type) |
| 0x40   | 4    | float    | Position X |
| 0x44   | 4    | float    | Position Y |
| 0x48   | 4    | float    | Position Z |

Helpers are named attachment points used by the game engine for vehicle physics, doors, lights, and character placement. The game matches helper names using case-insensitive string comparison (`_stricmp`).

### Known Helper Names

| Name | Purpose |
|------|---------|
| `PHYS_WHEEL_FL_LINK` | Front-left wheel physics attachment |
| `PHYS_WHEEL_FR_LINK` | Front-right wheel physics attachment |
| `PHYS_WHEEL_BL_LINK` | Back-left wheel physics attachment |
| `PHYS_WHEEL_BR_LINK` | Back-right wheel physics attachment |
| `doorleft` | Left door pivot/attachment |
| `doorright` | Right door pivot/attachment |
| `hood` | Engine hood pivot |
| `boot` | Trunk/boot pivot |
| `headlight` | Headlight position (may appear multiple times) |
| `backlight` | Taillight position (may appear multiple times) |
| `siren` | Siren/emergency light position (may appear multiple times) |
| `frontlights` | Front light group position |
| `Exhaust` | Exhaust particle spawn point |
| `Driver` | Driver seat position and orientation |
| `Driver_outpt` | Driver exit/entry point |
| `Passenger` | Passenger seat position |
| `Passenger_outpt` | Passenger exit/entry point |
| `fpcamera` | First-person camera position |
| `marker` | Generic marker point |

The 32 bytes of mixed data at offset 0x20 contain vertex indices and flags whose layout varies by helper type. Their exact structure is not fully understood.

---

## Material Entries (follows helpers)

**Important:** Materials are stored AFTER helpers in the file.

```
Count:  material_count (from header)
Stride: 80 bytes (0x50)
```

| Offset | Size | Type   | Description |
|--------|------|--------|-------------|
| 0      | 64   | char[] | Null-terminated texture path (relative to Textures/ directory) |
| 64     | 12   | -      | Reserved (usually all zeros) |
| 76     | 4    | uint32 | Material flags (bit 3 = alpha/transparency, e.g., glass materials) |

### Texture Path Convention

Texture paths use backslash separators and are relative to the game's `Textures/` directory. The `.dds` extension is implied and not included in the path.

**Examples:**
- `bank\bank_04` → `Textures/Bank/bank_04.dds`
- `cars\glass` → `Textures/cars/glass.dds`
- `misc\yellow` → `Textures/misc/yellow.dds`

Path matching is case-insensitive on Windows.

---

## File Size Calculation

The total file size can be computed to validate parsing:

```
size = 0x128                              # text + binary header
     + vertex_count * 12                  # vertex positions
     + (vertex_count * 2 if !(flags & 1)) # vertex indices (optional)
     + (vertex_count * 12 if flags & 2)   # per-vertex normals (optional)
     + triangle_count * 44                # triangle data
     + (triangle_count * 32 if flags & 4) # extra triangle data (optional)
     + helper_count * 76                  # helpers
     + material_count * 80               # materials
```

This has been verified against all models in the game's `Models/` directory.

---

## Rendering Notes

### Winding Order
Triangles use **clockwise** winding order (CW), consistent with Direct3D's default front-face convention. For OpenGL rendering, either:
- Use `glFrontFace(GL_CW)`, or
- Use `glCullFace(GL_FRONT)` to render back faces

### UV Coordinate System
- **U axis:** Standard left-to-right
- **V axis:** Top-down (V=0 at texture top, V=1 at texture bottom)
- For OpenGL (bottom-up V), apply: `V_gl = 1.0 - V_pm`
- For flags=1 models with direct float UVs, also apply: `U_gl = 1.0 - U_pm` (horizontal mirror correction due to CW winding)

### Lighting
When per-vertex normals are absent (common), face normals should be computed from the cross product of triangle edges. The engine uses Direct3D 8 fixed-function or shader-based lighting.

### Coordinate System
Left-handed coordinate system (Direct3D convention):
- **X:** Right
- **Y:** Up  
- **Z:** Into screen

---

## Known Flag Combinations

| Flags | Hex  | UV Type | Vert Indices | Normals | Extra Tri | Example Models |
|-------|------|---------|-------------|---------|-----------|---------------|
| 0     | 0x00 | Projection matrix | Yes | No | No | bat.PM, bus.PM, money.PM, concept8.pm, police.pm |
| 1     | 0x01 | Direct floats | No | No | No | bank.pm, church.pm, arrow.pm |

Flags values 2-7 are structurally supported but not commonly observed in the game's shipping models.

---

## Tools

- **pm_viewer.py** — Interactive 3D viewer (pyglet/OpenGL). Supports both UV modes, drag-and-drop loading, wireframe toggle.
- **split_autothief.pl** — Perl script to split Ghidra decompiled output into categorized module files.

---

## References

- Decompiled from `AutoThief.exe` using Ghidra
- Key functions:
  - `FUN_00446bd0` — CPMTemplate::Load (file parsing)
  - `FUN_0043fd90` — Triangle rendering / UV computation
  - `FUN_0043fbe0` — Bounding box computation
  - `FUN_00446470` — Material / texture setup
  - `FUN_0040f000` — Generic file read (fread wrapper)

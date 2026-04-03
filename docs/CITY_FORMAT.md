# CarJacker .city File Format Specification

## Overview

The `.city` format stores road network data for CarJacker (Kozmogames). It defines road segment polylines, junction positions, road-to-road connections, and static model placements that together describe a city map.

- **Endianness:** Little-endian
- **No header/magic:** Data starts immediately
- **Reference file:** `City\sanjose.city` (163,080 bytes)
- **Loaded by:** `InsertRoadNetwork()` Lua function, parsed by `FUN_0047daa0` in the engine

### Lua Loading Context

```lua
terrain = InsertTerrain("city", "textures\\Terrain\\city\\cityHMap.bmp", "",
    "textures\\Terrain\\city\\cityDemographic.jpg", 800, 200, 16)
roadnetwork = InsertRoadNetwork(512, 0, 512, terrain, "city\\sanjose.city")
Cmd(roadnetwork, format("CreateGeometry %s %s %s %s",
    "textures\\city\\road", "textures\\city\\crossing",
    "textures\\city\\pavement", "textures\\city\\offroad"))
Cmd(roadnetwork, "ExtrudeShapes")
```

Terrain heightmap and textures are separate assets. The `.city` file only stores the road network graph and building placements.

## File Layout

```
Offset  Content
------  -------
0x00    uint32          segment_count
0x04    Segment[segment_count]          (variable size per segment)
...     uint32          junction_count
...     Junction[junction_count]        (12 bytes each)
...     uint32          connection_count
...     Connection[connection_count]    (16 bytes each)
...     uint32          model_count
...     ModelPlacement[model_count]     (132 bytes each)
EOF
```

All sections are sequential with no padding between them.

## Section 1: Road Segments

Each road segment defines a polyline representing a road centerline. The engine extrudes this into 3D road geometry at runtime via `ExtrudeShapes`.

### Segment Structure (variable size)

```
Offset  Size    Type        Field           Description
0       4       uint32      id              Unique segment identifier
4       1       uint8       road_type       Road classification (see below)
5       12      float[3]    center          XYZ center/control point
17      12      float[3]    direction       XYZ direction (always 0.0 in file, computed at runtime)
29      4       uint32      vertex_count    Number of polyline vertices (range: 4-12)
33      vc*12   float[3][]  vertices        Polyline points (vertex_count entries)
33+vc*12 1      uint8       is_closed       0 = open segment, 1 = closed loop
```

Total size per segment: `34 + vertex_count * 12` bytes.

### Road Type Values

| Value | Meaning | Count (sanjose) |
|-------|---------|-----------------|
| 0     | Normal road | 475 |
| 1     | Minor road / alley | 68 |
| 3     | Highway / main road | 3 |

### is_closed Values

| Value | Meaning | Count (sanjose) |
|-------|---------|-----------------|
| 0     | Open segment | 177 |
| 1     | Closed loop | 369 |

**Ghidra reference:** `FUN_00478960` (globals_03.c:11520) reads into a 0x13C (316) byte runtime object. Fields map to object offsets: id -> +0xCC, road_type -> +0x87, center -> +0x44, direction -> +0x50, is_closed -> +0xB1.

## Section 2: Junctions

Junction points where road segments meet.

### Junction Structure (12 bytes)

```
Offset  Size    Type        Field       Description
0       12      float[3]    position    XYZ world position
```

Stored in 0x30 (48) byte runtime objects at offset +0x10.

**Ghidra reference:** Allocated in `FUN_0047daa0`, read via `FUN_0040f000(obj + 0x10, 4, 3, file)`.

## Section 3: Road Connections

Defines connectivity between road segments, linking them through junctions.

### Connection Structure (16 bytes)

```
Offset  Size    Type        Field           Description
0       4       float       param_a         Written to obj+0x20 (road width or elevation)
4       4       float       param_b         Written to obj+0x18 (secondary parameter)
8       4       uint32      junction_idx_a  Index into junction array
12      4       uint32      junction_idx_b  Index into junction array
```

Stored in 0x28 (40) byte runtime objects. Default values for unread fields include: offset +0x04 = PI (0x40C90FDB), +0x05 = 3000.0f (0x453B8000), +0x08 = 2000.0f (0x44FA0000).

**Ghidra reference:** `FUN_0046bc60` (globals_03.c:2855).

## Section 4: Model Placements

Static 3D model instances placed in the world (buildings, fences, trees, etc.).

### ModelPlacement Structure (132 bytes / 0x84)

```
Offset  Size    Type        Field           Description
0       64      char[64]    model_name      Null-terminated model path
64      64      float[4][4] transform       4x4 transformation matrix (row-major)
128     4       float       extra           Additional parameter (always 0.0 in sanjose)
```

### Transform Matrix Layout

```
[ rot_00  rot_01  rot_02  0.0 ]    Row 0: right vector
[ rot_10  rot_11  rot_12  0.0 ]    Row 1: up vector
[ rot_20  rot_21  rot_22  0.0 ]    Row 2: forward vector
[ pos_x   pos_y   pos_z   1.0 ]    Row 3: world position
```

The upper-left 3x3 submatrix contains rotation only (no scaling observed). Position values are in the same coordinate space as road segment vertices.

### Model Types in sanjose.city

26 unique model types, 648 total placements:

```
models\bank          models\building1     models\building2
models\building3     models\building4     models\china_01
models\china_02      models\china_03      models\china_04
models\china_05      models\church        models\fencec
models\fencew        models\gate          models\graves
models\gs            models\hangar        models\house1
models\house2        models\junkyard      models\skyscraper1
models\skyscraper2   models\skyscraper3   models\trees
models\warehouse     models\warehouse1
```

## Coordinate Space

- **X axis:** ~380,000 - 540,000 (horizontal)
- **Y axis:** ~2,900 - 7,700 (elevation / vertical)
- **Z axis:** ~320,000 - 540,000 (horizontal)
- Units appear to be game units (not meters). Terrain is 1024x1024 heightmap pixels mapped to an 800-unit terrain scale parameter.

## Related Assets

| Asset | Path | Purpose |
|-------|------|---------|
| Terrain heightmap | `textures\Terrain\city\cityHMap.bmp` | 1024x1024 BMP elevation data |
| Demographic map | `textures\Terrain\city\cityDemographic.jpg` | Zone/district classification |
| Road texture | `textures\city\road` | Road surface |
| Crossing texture | `textures\city\crossing` | Intersection surface |
| Pavement texture | `textures\city\pavement` | Sidewalk surface |
| Offroad texture | `textures\city\offroad` | Non-road ground |
| Wire overlay | `city\wire` | Wireframe debug texture |
| Color map | `textures\city\color.bmp` | City color overlay |

## sanjose.city Statistics

| Section | Count | Byte Range |
|---------|-------|------------|
| Road Segments | 546 | 0x0000 - 0xDA43 |
| Junctions | 574 | 0xDA44 - 0xF52F |
| Connections | 923 | 0xF530 - 0x12EE3 |
| Model Placements | 648 | 0x12EE4 - 0x27D08 |
| **Total** | | **163,080 bytes** |

# ALF Animation Format Specification

**Game:** AutoThief / CarJacker (Kozmogames, 2005)  
**Engine:** PBE Engine  
**Magic:** None (file begins directly with animation name)  
**File extensions:** `.alf`, `.ALF`  
**Path convention:** `Animations/{character_name}/{animation_name}.alf`  
**Skeleton system:** 3ds Max Biped (`Bip01` bone naming convention)  

---

## File Layout Overview

| Offset | Size | Description |
|--------|------|-------------|
| 0x00 | 0x44 (68) | File header |
| 0x44 | varies | Bone data (header + keyframes, repeated per bone) |
| varies | varies | Root position track |

---

## File Header (0x00 - 0x43, 68 bytes)

```
Offset  Size  Type       Description
0x00    32    char[32]   Animation name (null-terminated, zero-padded)
0x20    28    byte[28]   Reserved (all zeros in observed files)
0x3C    3     byte[3]    Reserved (all zeros)
0x3F    1     uint8      Position data format flag (0 = extended, 1 = compact)
0x40    2     uint16     Frame count (root position track length)
0x42    1     uint8      Bone count
0x43    1     byte       Padding
```

All multi-byte integers are little-endian.

The animation name matches the filename stem (e.g. `walk`, `driver`, `idle1`).

---

## Bone Data (repeated bone_count times, sequentially)

Each bone consists of a fixed-size header followed by a variable-length keyframe array. Bones are stored sequentially: header₀, keyframes₀, header₁, keyframes₁, …

### Bone Header (0x48 bytes = 72 bytes)

```
Offset  Size  Type       Description
0x00    64    char[64]   Bone name (null-terminated; bytes after the terminator are residual/garbage)
0x40    2     uint16     Keyframe count for this bone
0x42    2     byte[2]    Padding
0x44    4     uint32     Runtime pointer (overwritten by malloc at load time; value in file is meaningless)
```

Bone names follow 3ds Max Biped convention:
- `Bip01 Spine`, `Bip01 Spine1`, `Bip01 Spine2`
- `Bip01 L UpperArm`, `Bip01 R Finger12`
- `Bip01 Head`, `Bip01 Pelvis`

### Bone Keyframe Data (0x40 bytes = 64 bytes per keyframe)

Each keyframe is a 4×4 transformation matrix stored as 16 IEEE 754 single-precision floats in row-major order:

```
[ m00  m01  m02  m03 ]       3×3 rotation/scale    translation
[ m10  m11  m12  m13 ]       in upper-left 3×3     in column 3
[ m20  m21  m22  m23 ]
[  0    0    0   1.0 ]       last row always (0, 0, 0, 1)
```

The last row is constant `{0.0, 0.0, 0.0, 1.0}` across all observed keyframes, confirming standard homogeneous transformation matrices.

---

## Root Position Track (after all bone data)

Stores per-frame root motion data for the animation. The format depends on the **flag** byte in the file header.

### Flag = 1 (compact, 0x10 bytes per frame)

All observed .alf files in the shipped game use this format.

```
Offset  Size  Type       Description
0x00    4     float      X position
0x04    4     float      Y position
0x08    4     float      Z position
0x0C    4     uint32     Flags / event data
```

Total size: `frame_count × 16` bytes.

### Flag = 0 (extended, 0x1C bytes per frame)

Present in the engine code but not observed in shipped files. Each 28-byte record is converted to the compact 16-byte format at load time:

```
Source     Destination   Description
[0..3]  →  [0..3]       X position (float)
[4..7]  →  [4..7]       Y position (float)
[8..11] →  [8..11]      Z position (float)
[24]    →  [12]         Flags (1 byte)
```

Bytes 12–23 and 25–27 of the source record are discarded.

---

## File Size Calculation

```
size = 0x44                                              # file header
     + bone_count × 0x48                                 # bone headers
     + sum(bone[i].keyframe_count × 0x40, i=0..N-1)     # bone keyframes
     + frame_count × 0x10                                # root position track (flag=1)
```

When all bones share the same keyframe count (common case):

```
size = 68 + bone_count × (72 + keyframe_count × 64) + frame_count × 16
```

**Verified examples:**

| File | Bones | Keyframes/bone | Root frames | Calculated | Actual |
|------|-------|---------------|-------------|-----------|--------|
| `cop/driver.ALF` | 24 | 2 | 507 | 68 + 24×200 + 8112 = 12,980 | 12,980 ✓ |
| `rush/walk.ALF` | 31 | 31 | 909 | 68 + 31×2056 + 14544 = 78,348 | 78,348 ✓ |

---

## Runtime Structure

The engine allocates a 0x4C (76) byte structure for each loaded animation:

```c
struct Animation {        // 0x4C bytes, allocated by FUN_004f5490
    // Bytes 0x00-0x43 are copied directly from the file header:
    char  name[32];       // 0x00: animation name
    byte  reserved[28];   // 0x20: reserved
    byte  pad[3];         // 0x3C: reserved
    uint8 flag;           // 0x3F: position data format (0 or 1)
    uint16 frame_count;   // 0x40: root position frame count
    uint8  bone_count;    // 0x42: number of bones
    byte   pad2;          // 0x43: padding
    // Runtime pointers (not from file):
    Bone*  bones;         // 0x44: pointer to bone array (bone_count × 0x48)
    void*  positions;     // 0x48: pointer to root position data (frame_count × 0x10)
};

struct Bone {             // 0x48 bytes per bone
    char   name[64];      // 0x00: bone name
    uint16 keyframe_count;// 0x40: number of keyframes
    byte   pad[2];        // 0x42: padding
    float* keyframes;     // 0x44: pointer to keyframe data (keyframe_count × 0x40)
};
```

---

## References

- Decompiled from `AutoThief.exe` using Ghidra
- Key functions:
  - `FUN_004456c0` — Animation loader (builds path `animations\{char}\{name}.alf`, reads file, calls parser)
  - `FUN_004f5530` — ALF parser (reads header, bone data, keyframes, root positions)
  - `FUN_004f5490` — Animation structure allocator (mallocs 0x4C header + bone/frame arrays)
  - `FUN_004f54e0` — Generic binary reader (memcpy from buffer with bounds checking)

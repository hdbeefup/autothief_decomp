# TODO

## Animation / Skinning

- [ ] **Vertex-to-bone binding (the key unsolved problem)**
  The PM vertex indices (uint16 per vertex, flags bit 0 clear) go up to ~459 for 507 vertices — NOT direct bone indices. Ghidra/IDA investigation revealed:

  **What we know (from globals_02.c and globals_06.c):**
  - The game has TWO rendering paths, selected by a 0x8000 flag on the model sub-structure:
    - **0x8000 set**: Full per-vertex bone transformation (skinned characters)
    - **0x8000 clear**: Static rendering with material-based grouping (buildings, props)
  - The skeleton stores a **per-bone compact transform** at offset 0x22C (4 floats per bone: XYZ + 1.0)
  - Bone data source is FUN_0043f8a0() → skeleton offset 0x1BC (3 floats/bone, from ALF keyframes)
  - The bone index lookup during rendering reads from skeleton offset 0x248 (`[0x92]`), NOT from the PM vertex indices
  - Skeleton offset 0x248 is an array of `bone_count` uint32s, zeroed at init (globals_06.c:2374-2388)
  - It gets populated during FUN_0043fd90 (triangle remapping/culling), which walks a bone parent chain via `this[119]` (a bone hierarchy table stored as uint16 parent indices)

  **Key code locations:**
  - `globals_06.c:2310-2389` — skeleton setup: allocates per-bone arrays, fills bone transforms
  - `globals_02.c:5600-5700` — rendering: vertex transformation using bone matrices
  - `globals_02.c:4993-5072` (FUN_0043fd90) — triangle-to-bone remapping via parent chain
  - `globals_02.c:23620-23720` (FUN_004610b0) — per-frame bone data update
  - `globals_02.c:9010-9134` (FUN_0043fd90 / IDA: sub_43FD90) — triangle culling/reassignment

  **What's still unknown:**
  - Where `this[119]` (bone parent table) gets populated — this is the vertex-to-bone mapping
  - Whether PM vertex indices feed into the bone parent table construction
  - The exact format of the model sub-structure at param_1+0x1FC that carries the 0x8000 skinning flag

  **Accessor function map (Ghidra offset → meaning):**
  - `FUN_0043f890` → `+0x1C0` = bone count
  - `FUN_0043f8a0` → `+0x1BC` = bone keyframe data (compact, 12 bytes/bone)
  - `FUN_0043f8b0` → `+0x1E8` = unknown pointer
  - `FUN_0043f8c0` → `+0x1E4` = triangle data pointer
  - `FUN_0043f8d0` → `+0x1D4` = unknown
  - `FUN_0043f8e0` → `+0x1D8` = unknown
  - `FUN_0043f8f0` → `+0x200` = total bone count (used for array allocation)
  - `FUN_0043f900` → `+0x1F0` = helpers array
  - `FUN_0043f910` → `+0x1EC` = helper count

- [ ] Current pm_viewer.py uses nearest-bone rigid skinning (1 bone per vertex, no blending). This causes sharp joint transitions. Proper bone weights or at least distance-weighted multi-bone blending would improve quality.
- [ ] Some animations play rotated 90/180 degrees relative to the model. The ALF bone matrices are in world space and some animations store bones in a different orientation than the model's rest pose. Nearest-bone assignment then maps vertices to wrong bones. The real fix is proper bone binding (see first item), which would use the game's actual vertex-to-bone mapping regardless of skeleton orientation.
- [ ] The per-frame mesh deformation (`_deform_mesh`) rebuilds all vertex data in Python every frame — could be optimized with numpy or moved to a vertex shader with bone matrices as uniforms.
- [ ] ALF bone keyframe interpolation: currently snaps to nearest integer frame. Lerp between frames for smoother playback.
- [ ] Root position track data is parsed but not applied to the mesh (root motion / translation).

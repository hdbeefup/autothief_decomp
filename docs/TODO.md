# TODO

## Animation / Skinning

- [ ] Investigate how the game actually maps vertices to bones — the PM vertex indices (uint16 per vertex, flags bit 0 clear) go up to ~459 for 507 vertices, so they're NOT bone indices. The game must have a different mechanism (possibly in the engine code around FUN_0043fd90 / globals_02.c:5649-5698). Understanding this would replace the current nearest-bone approximation with accurate skinning.
- [ ] Current pm_viewer.py uses nearest-bone rigid skinning (1 bone per vertex, no blending). This causes sharp joint transitions. Proper bone weights or at least distance-weighted multi-bone blending would improve quality.
- [ ] The per-frame mesh deformation (`_deform_mesh`) rebuilds all vertex data in Python every frame — could be optimized with numpy or moved to a vertex shader with bone matrices as uniforms.
- [ ] ALF bone keyframe interpolation: currently snaps to nearest integer frame. Lerp between frames for smoother playback.
- [ ] Root position track data is parsed but not applied to the mesh (root motion / translation).

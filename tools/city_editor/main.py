"""
CarJacker City Map Editor — standalone 3D viewer/editor for .city files.

Renders the road network as extruded road geometry and places actual .PM
building models at their world positions with correct orientation.

Usage:
    python -m city_editor.main <city_file> <game_root>

    city_file:  Path to .city file  (e.g. City/sanjose.city)
    game_root:  Path to game data root containing Models/ and Textures/

Controls:
    LMB drag    Orbit camera
    RMB drag    Pan camera
    Scroll      Zoom
    W           Toggle wireframe overlay
    G           Toggle ground grid
    R           Reset camera
    J           Toggle junction markers
    1/2/3       Toggle roads / models / connections
"""

import ctypes
import math
import os
import sys

import pyglet
from pyglet import gl
from pyglet.math import Mat4, Vec3

from .city_loader import CityFile
from .pm_loader import PMModel
from .gl_renderer import (
    MESH_VS, MESH_FS, LINE_VS, LINE_FS,
    compile_program, get_uniform, set_mat4,
    TextureCache, GPUMesh, GPULines, OrbitCamera,
    compute_face_normal,
)


# ── D3D → OpenGL coordinate conversion ────────────────────────────────────
# Game: D3D left-handed Y-up.  We negate X for RH OpenGL.

def d3d_to_gl(x, y, z):
    return (-x, y, z)




# ── Model cache ────────────────────────────────────────────────────────────

class ModelCache:
    """Loads and caches PM models as GPUMesh objects."""

    def __init__(self, models_root, tex_cache):
        self.models_root = models_root
        self.tex_cache = tex_cache
        self._cache = {}  # model_name -> GPUMesh or None

    def get(self, model_name):
        if model_name in self._cache:
            return self._cache[model_name]

        # model_name is like "models\bank" — strip "models\" prefix to get filename
        short = model_name.replace('models\\', '').replace('models/', '')
        # Try case-insensitive file search
        pm_path = self._find_pm(short)
        if not pm_path:
            self._cache[model_name] = None
            return None

        try:
            pm = PMModel.load(pm_path)
            gpu_mesh = GPUMesh.from_pm(pm, self.tex_cache)
            self._cache[model_name] = gpu_mesh
            return gpu_mesh
        except Exception as e:
            print(f"  Warning: failed to load model '{model_name}': {e}")
            self._cache[model_name] = None
            return None

    def _find_pm(self, short_name):
        if not self.models_root:
            return None
        # Try exact match
        for ext in ('.pm', '.PM'):
            path = os.path.join(self.models_root, short_name + ext)
            if os.path.exists(path):
                return path
        # Case-insensitive
        try:
            for entry in os.listdir(self.models_root):
                base, ext = os.path.splitext(entry)
                if base.lower() == short_name.lower() and ext.lower() == '.pm':
                    return os.path.join(self.models_root, entry)
        except OSError:
            pass
        return None

    def cleanup(self):
        for mesh in self._cache.values():
            if mesh:
                mesh.cleanup()
        self._cache.clear()


# ── City Editor ────────────────────────────────────────────────────────────

class CityEditor:
    def __init__(self, window, city_path, game_root):
        self.window = window
        self.city_path = city_path
        self.game_root = game_root

        models_root = os.path.join(game_root, 'Models')
        textures_root = os.path.join(game_root, 'Textures')
        if not os.path.isdir(models_root):
            models_root = None
            print(f"Warning: Models/ not found at {game_root}")
        if not os.path.isdir(textures_root):
            textures_root = None
            print(f"Warning: Textures/ not found at {game_root}")

        # Camera
        self.camera = OrbitCamera()
        self.dragging = False
        self.panning = False

        # Display toggles
        self.show_wireframe = False
        self.show_grid = True
        self.show_models = True
        self.show_junctions = True
        self.show_connections = True

        # GL programs
        self.mesh_program = compile_program(MESH_VS, MESH_FS)
        self.line_program = compile_program(LINE_VS, LINE_FS)

        # Uniform locations
        self.u_proj = get_uniform(self.mesh_program, 'projection')
        self.u_view = get_uniform(self.mesh_program, 'view')
        self.u_model = get_uniform(self.mesh_program, 'model')
        self.u_has_tex = get_uniform(self.mesh_program, 'has_texture')
        self.u_light = get_uniform(self.mesh_program, 'light_dir')
        self.u_base_color = get_uniform(self.mesh_program, 'base_color')
        self.u_wire = get_uniform(self.mesh_program, 'wireframe')
        self.lu_proj = get_uniform(self.line_program, 'projection')
        self.lu_view = get_uniform(self.line_program, 'view')

        # Caches
        self.tex_cache = TextureCache(textures_root)
        self.model_cache = ModelCache(models_root, self.tex_cache)

        # Terrain mesh
        self.terrain_mesh = None
        self.show_terrain = True
        # Building shape outlines + extruded 3D buildings
        self.building_lines = GPULines()
        self.building_mesh = None
        self.show_buildings = True
        # Road surfaces between junctions (separate meshes per layer for polygon offset)
        self.road_mesh_sidewalk = None
        self.road_mesh_junction = None
        self.road_mesh_road = None
        self.road_mesh_crosswalk = None
        self.show_roads = True
        # Junction/connection lines
        self.junction_lines = GPULines()
        self.connection_lines = GPULines()
        self.grid_lines = GPULines()

        # City data
        self.city = None
        self.model_instances = []  # list of (GPUMesh, model_matrix_16_floats)

        # Info label
        self.info_label = pyglet.text.Label('', font_size=10, x=8, y=8,
                                            color=(200, 200, 200, 220),
                                            multiline=True, width=window.width - 16,
                                            anchor_y='bottom')

        self._load_city()

    def _load_city(self):
        print(f"Loading city: {self.city_path}")
        self.city = CityFile.read(self.city_path)
        c = self.city
        print(f"  Segments: {len(c.segments)}, Junctions: {len(c.junctions)}, "
              f"Connections: {len(c.connections)}, Models: {len(c.models)}")

        self._build_terrain_mesh()
        self._build_building_outlines()
        self._build_extruded_buildings()
        self._build_road_surfaces()
        self._build_junction_markers()
        self._build_connection_lines()
        self._load_model_instances()
        self._build_grid()
        self._fit_camera()
        self._update_info()

    def _build_terrain_mesh(self):
        """Build terrain mesh from heightmap BMP + color texture."""
        hmap_path = os.path.join(self.game_root, 'Textures', 'Terrain', 'city', 'cityHMap.bmp')
        color_path = os.path.join(self.game_root, 'Textures', 'Terrain', 'city', 'city.dds')

        if not os.path.exists(hmap_path):
            print(f"  Terrain heightmap not found: {hmap_path}")
            return

        from PIL import Image
        hmap_img = Image.open(hmap_path)
        hmap = hmap_img.load()
        hmap_w, hmap_h = hmap_img.size  # 1024x1024

        # Terrain parameters from sanjose.lua InsertTerrain() call
        pixel_scale = 800.0    # world units per pixel
        height_scale = 200.0   # height multiplier

        # Subsample for performance: step=4 -> 256x256 grid
        step = 4
        grid_w = hmap_w // step
        grid_h = hmap_h // step

        # Build height grid
        # BMP is stored bottom-up; PIL reads top-down. Game reads bottom-up natively.
        # So PIL row 0 = game row 1023. We flip Z to correct this.
        heights = []
        for row in range(grid_h + 1):
            row_heights = []
            for col in range(grid_w + 1):
                px = min(col * step, hmap_w - 1)
                py = min((hmap_h - 1) - min(row * step, hmap_h - 1), hmap_h - 1)
                row_heights.append(hmap[px, py] * height_scale)
            heights.append(row_heights)

        # Build triangle mesh
        positions = []
        normals = []
        uvs = []

        for row in range(grid_h):
            for col in range(grid_w):
                # Four corners of this grid cell (in D3D world coords)
                x0 = col * step * pixel_scale
                x1 = (col + 1) * step * pixel_scale
                z0 = row * step * pixel_scale
                z1 = (row + 1) * step * pixel_scale
                y00 = heights[row][col]
                y10 = heights[row][col + 1]
                y01 = heights[row + 1][col]
                y11 = heights[row + 1][col + 1]

                # Convert to GL coords (negate X)
                v00 = d3d_to_gl(x0, y00, z0)
                v10 = d3d_to_gl(x1, y10, z0)
                v01 = d3d_to_gl(x0, y01, z1)
                v11 = d3d_to_gl(x1, y11, z1)

                # UV mapping to color texture
                u0 = col / grid_w
                u1 = (col + 1) / grid_w
                v0_uv = row / grid_h
                v1_uv = (row + 1) / grid_h

                # Triangle 1: v00, v10, v11
                n1 = compute_face_normal(v00, v10, v11)
                positions.extend([*v00, *v10, *v11])
                normals.extend([*n1, *n1, *n1])
                uvs.extend([u0, v0_uv, u1, v0_uv, u1, v1_uv])

                # Triangle 2: v00, v11, v01
                n2 = compute_face_normal(v00, v11, v01)
                positions.extend([*v00, *v11, *v01])
                normals.extend([*n2, *n2, *n2])
                uvs.extend([u0, v0_uv, u1, v1_uv, u0, v1_uv])

        # Load color texture
        tex_id = 0
        if os.path.exists(color_path):
            try:
                img = Image.open(color_path)
                if img.mode != 'RGBA':
                    img = img.convert('RGBA')
                raw = img.tobytes()
                tid = gl.GLuint()
                gl.glGenTextures(1, ctypes.byref(tid))
                gl.glBindTexture(gl.GL_TEXTURE_2D, tid.value)
                gl.glTexParameteri(gl.GL_TEXTURE_2D, gl.GL_TEXTURE_MIN_FILTER, gl.GL_LINEAR_MIPMAP_LINEAR)
                gl.glTexParameteri(gl.GL_TEXTURE_2D, gl.GL_TEXTURE_MAG_FILTER, gl.GL_LINEAR)
                gl.glTexParameteri(gl.GL_TEXTURE_2D, gl.GL_TEXTURE_WRAP_S, gl.GL_CLAMP_TO_EDGE)
                gl.glTexParameteri(gl.GL_TEXTURE_2D, gl.GL_TEXTURE_WRAP_T, gl.GL_CLAMP_TO_EDGE)
                gl.glTexImage2D(gl.GL_TEXTURE_2D, 0, gl.GL_RGBA8, img.width, img.height,
                                0, gl.GL_RGBA, gl.GL_UNSIGNED_BYTE, raw)
                gl.glGenerateMipmap(gl.GL_TEXTURE_2D)
                gl.glBindTexture(gl.GL_TEXTURE_2D, 0)
                tex_id = tid.value
            except Exception as e:
                print(f"  Warning: terrain texture: {e}")

        mesh = GPUMesh()
        mesh.vertex_count = len(positions) // 3
        mesh.mat_groups = [(tex_id, 0, mesh.vertex_count)]
        mesh._upload(positions, normals, uvs)
        self.terrain_mesh = mesh
        print(f"  Terrain mesh: {mesh.vertex_count} vertices ({grid_w}x{grid_h} grid), "
              f"texture={'yes' if tex_id else 'no'}")

    def _build_building_outlines(self):
        """Build wireframe outlines for building shape polylines (city segments).
        These are footprints that the game engine extrudes into 3D buildings via ExtrudeShapes.
        """
        c = self.city
        line_verts = []

        # Color by building type
        type_colors = {
            0: (0.3, 0.8, 0.3),   # normal — green
            1: (0.8, 0.8, 0.3),   # minor — yellow
            3: (0.8, 0.3, 0.3),   # highway/special — red
        }

        for seg in c.segments:
            r, g, b = type_colors.get(seg.road_type, (0.5, 0.5, 0.5))
            verts = seg.vertices
            n = len(verts)
            count = n if seg.is_closed else n - 1
            for i in range(count):
                j = (i + 1) % n
                ax, ay, az = d3d_to_gl(*verts[i])
                bx, by, bz = d3d_to_gl(*verts[j])
                # Offset Y slightly above terrain to avoid z-fighting
                line_verts.extend([ax, ay + 20, az, r, g, b])
                line_verts.extend([bx, by + 20, bz, r, g, b])

        self.building_lines.upload(line_verts)
        print(f"  Building outlines: {len(c.segments)} shapes ({len(line_verts)//12} line segments)")

    def _load_city_texture(self, name):
        """Load a texture from Textures/City/ by name (without extension)."""
        city_tex_dir = os.path.join(self.game_root, 'Textures', 'City')
        path = os.path.join(city_tex_dir, name + '.dds')
        if not os.path.exists(path):
            # Case-insensitive fallback
            try:
                for entry in os.listdir(city_tex_dir):
                    if entry.lower() == (name + '.dds').lower():
                        path = os.path.join(city_tex_dir, entry)
                        break
            except OSError:
                return 0
        if not os.path.exists(path):
            return 0
        try:
            from PIL import Image
            img = Image.open(path)
            if img.mode != 'RGBA':
                img = img.convert('RGBA')
            raw = img.tobytes()
            tid = gl.GLuint()
            gl.glGenTextures(1, ctypes.byref(tid))
            gl.glBindTexture(gl.GL_TEXTURE_2D, tid.value)
            gl.glTexParameteri(gl.GL_TEXTURE_2D, gl.GL_TEXTURE_MIN_FILTER, gl.GL_LINEAR_MIPMAP_LINEAR)
            gl.glTexParameteri(gl.GL_TEXTURE_2D, gl.GL_TEXTURE_MAG_FILTER, gl.GL_LINEAR)
            gl.glTexParameteri(gl.GL_TEXTURE_2D, gl.GL_TEXTURE_WRAP_S, gl.GL_REPEAT)
            gl.glTexParameteri(gl.GL_TEXTURE_2D, gl.GL_TEXTURE_WRAP_T, gl.GL_REPEAT)
            gl.glTexImage2D(gl.GL_TEXTURE_2D, 0, gl.GL_RGBA8, img.width, img.height,
                            0, gl.GL_RGBA, gl.GL_UNSIGNED_BYTE, raw)
            gl.glGenerateMipmap(gl.GL_TEXTURE_2D)
            gl.glBindTexture(gl.GL_TEXTURE_2D, 0)
            return tid.value
        except Exception as e:
            print(f"  Warning: city texture '{name}': {e}")
            return 0

    def _build_extruded_buildings(self):
        """Extrude building footprint polylines into 3D box buildings with walls and roof."""
        c = self.city

        # Load building textures
        wall_tex = self._load_city_texture('t1_middle1')
        roof_tex = self._load_city_texture('roof')

        wall_pos, wall_nrm, wall_uv = [], [], []
        roof_pos, roof_nrm, roof_uv = [], [], []

        import random as _rand

        for seg in c.segments:
            verts = seg.vertices
            n = len(verts)
            if n < 3:
                continue

            _rand.seed(seg.id)

            gl_verts = [d3d_to_gl(*v) for v in verts]
            min_x = min(v[0] for v in gl_verts)
            max_x = max(v[0] for v in gl_verts)
            min_z = min(v[2] for v in gl_verts)
            max_z = max(v[2] for v in gl_verts)
            footprint_size = math.sqrt(max(1, (max_x - min_x) * (max_z - min_z)))

            base_y = gl_verts[0][1]
            if seg.road_type == 0:
                height = footprint_size * (0.5 + _rand.random() * 1.5)
                height = max(800, min(height, footprint_size * 4))
            elif seg.road_type == 1:
                height = footprint_size * (0.3 + _rand.random() * 0.5)
                height = max(400, min(height, 2000))
            else:
                height = footprint_size * (0.8 + _rand.random() * 2.0)
                height = max(1000, min(height, footprint_size * 5))

            top_y = base_y + height

            # Walls
            edge_count = n if seg.is_closed else n - 1
            for i in range(edge_count):
                j = (i + 1) % n
                bx0, _, bz0 = gl_verts[i]
                bx1, _, bz1 = gl_verts[j]

                bl = (bx0, base_y, bz0)
                br = (bx1, base_y, bz1)
                tl = (bx0, top_y, bz0)
                tr = (bx1, top_y, bz1)
                wall_n = compute_face_normal(bl, br, tr)

                edge_len = math.sqrt((bx1 - bx0)**2 + (bz1 - bz0)**2)
                u_scale = edge_len / 1000.0
                v_scale = height / 1000.0

                wall_pos.extend([*bl, *br, *tr])
                wall_nrm.extend([*wall_n, *wall_n, *wall_n])
                wall_uv.extend([0, 0, u_scale, 0, u_scale, v_scale])

                wall_pos.extend([*bl, *tr, *tl])
                wall_nrm.extend([*wall_n, *wall_n, *wall_n])
                wall_uv.extend([0, 0, u_scale, v_scale, 0, v_scale])

            # Roof
            if seg.is_closed and n >= 3:
                roof_n = (0.0, 1.0, 0.0)
                v0 = (gl_verts[0][0], top_y, gl_verts[0][2])
                span_x = max_x - min_x if max_x > min_x else 1
                span_z = max_z - min_z if max_z > min_z else 1
                for i in range(1, n - 1):
                    v1 = (gl_verts[i][0], top_y, gl_verts[i][2])
                    v2 = (gl_verts[i + 1][0], top_y, gl_verts[i + 1][2])
                    roof_pos.extend([*v0, *v1, *v2])
                    roof_nrm.extend([*roof_n, *roof_n, *roof_n])
                    roof_uv.extend([
                        (v0[0] - min_x) / span_x, (v0[2] - min_z) / span_z,
                        (v1[0] - min_x) / span_x, (v1[2] - min_z) / span_z,
                        (v2[0] - min_x) / span_x, (v2[2] - min_z) / span_z,
                    ])

        all_pos = wall_pos + roof_pos
        all_nrm = wall_nrm + roof_nrm
        all_uv = wall_uv + roof_uv

        if not all_pos:
            return

        wall_count = len(wall_pos) // 3
        roof_count = len(roof_pos) // 3
        mat_groups = []
        if wall_count:
            mat_groups.append((wall_tex, 0, wall_count))
        if roof_count:
            mat_groups.append((roof_tex, wall_count, roof_count))

        mesh = GPUMesh()
        mesh.vertex_count = len(all_pos) // 3
        mesh.mat_groups = mat_groups
        mesh._upload(all_pos, all_nrm, all_uv)
        self.building_mesh = mesh
        print(f"  Extruded buildings: {mesh.vertex_count} vertices from {len(c.segments)} shapes, "
              f"wall_tex={'yes' if wall_tex else 'no'}, roof_tex={'yes' if roof_tex else 'no'}")

    def _build_road_surfaces(self):
        """Build road + sidewalk + junction fill + crosswalk surfaces."""
        c = self.city
        road_tex = self._load_city_texture('road')
        pavement_tex = self._load_city_texture('crossing')  # sidewalk/pavement
        crosswalk_tex = self._load_city_texture('zebra')

        road_pos, road_nrm, road_uv = [], [], []
        side_pos, side_nrm, side_uv = [], [], []
        junc_pos, junc_nrm, junc_uv = [], [], []
        cross_pos, cross_nrm, cross_uv = [], [], []
        up = (0.0, 1.0, 0.0)
        road_hw = 400.0      # road half-width
        sidewalk_w = 200.0   # sidewalk width on each side
        total_hw = road_hw + sidewalk_w
        # All layers at same small Y offset; z-fighting solved via glPolygonOffset at draw time
        y_sidewalk = 5.0
        y_junc = 5.0
        y_road = 5.0
        y_cross = 6.0

        # Build per-junction connection data for junction fills
        junc_connections = {}  # junction_idx -> list of (other_junction_idx, conn)
        for conn in c.connections:
            ia, ib = conn.junction_idx_a, conn.junction_idx_b
            if ia < len(c.junctions) and ib < len(c.junctions):
                junc_connections.setdefault(ia, []).append(ib)
                junc_connections.setdefault(ib, []).append(ia)

        # ── Road strips + sidewalks ───────────────────────────────
        for conn in c.connections:
            ia, ib = conn.junction_idx_a, conn.junction_idx_b
            if ia >= len(c.junctions) or ib >= len(c.junctions):
                continue

            pa = c.junctions[ia].position
            pb = c.junctions[ib].position
            ax, ay, az = d3d_to_gl(*pa)
            bx, by, bz = d3d_to_gl(*pb)

            dx = bx - ax
            dz = bz - az
            ln = math.sqrt(dx * dx + dz * dz)
            if ln < 1e-6:
                continue
            dx /= ln
            dz /= ln

            px, pz = -dz, dx  # perpendicular
            u_len = ln / 2000.0

            # Road surface (center strip)
            for hw, yoff, pos_list, nrm_list, uv_list in [
                (road_hw, y_road, road_pos, road_nrm, road_uv),
            ]:
                l0 = (ax + px*hw, ay + yoff, az + pz*hw)
                r0 = (ax - px*hw, ay + yoff, az - pz*hw)
                l1 = (bx + px*hw, by + yoff, bz + pz*hw)
                r1 = (bx - px*hw, by + yoff, bz - pz*hw)
                pos_list.extend([*l0, *r0, *r1])
                nrm_list.extend([*up, *up, *up])
                uv_list.extend([0, 0, 1, 0, 1, u_len])
                pos_list.extend([*l0, *r1, *l1])
                nrm_list.extend([*up, *up, *up])
                uv_list.extend([0, 0, 1, u_len, 0, u_len])

            # Left sidewalk strip
            sl0 = (ax + px*total_hw, ay + y_sidewalk, az + pz*total_hw)
            sl1 = (ax + px*road_hw, ay + y_sidewalk, az + pz*road_hw)
            sl2 = (bx + px*total_hw, by + y_sidewalk, bz + pz*total_hw)
            sl3 = (bx + px*road_hw, by + y_sidewalk, bz + pz*road_hw)
            side_pos.extend([*sl0, *sl1, *sl3])
            side_nrm.extend([*up, *up, *up])
            side_uv.extend([0, 0, 1, 0, 1, u_len])
            side_pos.extend([*sl0, *sl3, *sl2])
            side_nrm.extend([*up, *up, *up])
            side_uv.extend([0, 0, 1, u_len, 0, u_len])

            # Right sidewalk strip
            sr0 = (ax - px*road_hw, ay + y_sidewalk, az - pz*road_hw)
            sr1 = (ax - px*total_hw, ay + y_sidewalk, az - pz*total_hw)
            sr2 = (bx - px*road_hw, by + y_sidewalk, bz - pz*road_hw)
            sr3 = (bx - px*total_hw, by + y_sidewalk, bz - pz*total_hw)
            side_pos.extend([*sr0, *sr1, *sr3])
            side_nrm.extend([*up, *up, *up])
            side_uv.extend([0, 0, 1, 0, 1, u_len])
            side_pos.extend([*sr0, *sr3, *sr2])
            side_nrm.extend([*up, *up, *up])
            side_uv.extend([0, 0, 1, u_len, 0, u_len])

        # ── Junction fills (flat polygon at each junction covering the gap) ──
        for ji, neighbors in junc_connections.items():
            if len(neighbors) < 2:
                continue
            jpos = c.junctions[ji].position
            jx, jy, jz = d3d_to_gl(*jpos)
            jy += y_junc

            # Collect edge points where roads meet the junction
            edge_pts = []
            for ni in neighbors:
                npos = c.junctions[ni].position
                nx, ny, nz = d3d_to_gl(*npos)
                ddx = nx - jx
                ddz = nz - jz
                ln = math.sqrt(ddx*ddx + ddz*ddz)
                if ln < 1e-6:
                    continue
                ddx /= ln
                ddz /= ln
                ppx, ppz = -ddz, ddx
                # Two edge points at total_hw from center
                edge_pts.append((jx + ppx*total_hw, jy, jz + ppz*total_hw))
                edge_pts.append((jx - ppx*total_hw, jy, jz - ppz*total_hw))

            if len(edge_pts) < 3:
                continue

            # Sort edge points by angle around junction center
            import math as _m
            edge_pts.sort(key=lambda p: _m.atan2(p[2] - jz, p[0] - jx))

            # Fan triangulate the junction polygon
            v0 = (jx, jy, jz)
            for i in range(len(edge_pts)):
                v1 = edge_pts[i]
                v2 = edge_pts[(i + 1) % len(edge_pts)]
                junc_pos.extend([*v0, *v1, *v2])
                junc_nrm.extend([*up, *up, *up])
                junc_uv.extend([0.5, 0.5, 0, 0, 1, 0])

        # ── Crosswalks at junctions with 2+ connections ──────────
        for ji, neighbors in junc_connections.items():
            if len(neighbors) < 2:
                continue
            jpos = c.junctions[ji].position
            jx, jy, jz = d3d_to_gl(*jpos)
            jy += y_cross

            for ni in neighbors:
                npos = c.junctions[ni].position
                nx, _, nz = d3d_to_gl(*npos)
                ddx = nx - jx
                ddz = nz - jz
                ln = math.sqrt(ddx*ddx + ddz*ddz)
                if ln < 1e-6:
                    continue
                ddx /= ln
                ddz /= ln
                ppx, ppz = -ddz, ddx

                # Crosswalk strip perpendicular to road, offset from junction center
                cw_dist = total_hw * 0.8  # distance from junction center
                cw_hw = road_hw  # crosswalk width = road width
                cw_depth = 150.0  # crosswalk depth along road

                cx = jx + ddx * cw_dist
                cz = jz + ddz * cw_dist

                cl0 = (cx + ppx*cw_hw - ddx*cw_depth*0.5, jy, cz + ppz*cw_hw - ddz*cw_depth*0.5)
                cr0 = (cx - ppx*cw_hw - ddx*cw_depth*0.5, jy, cz - ppz*cw_hw - ddz*cw_depth*0.5)
                cl1 = (cx + ppx*cw_hw + ddx*cw_depth*0.5, jy, cz + ppz*cw_hw + ddz*cw_depth*0.5)
                cr1 = (cx - ppx*cw_hw + ddx*cw_depth*0.5, jy, cz - ppz*cw_hw + ddz*cw_depth*0.5)

                cross_pos.extend([*cl0, *cr0, *cr1])
                cross_nrm.extend([*up, *up, *up])
                cross_uv.extend([0, 0, 1, 0, 1, 1])
                cross_pos.extend([*cl0, *cr1, *cl1])
                cross_nrm.extend([*up, *up, *up])
                cross_uv.extend([0, 0, 1, 1, 0, 1])

        # ── Build separate meshes per layer (for polygon offset z-fight fix) ──
        def _make_mesh(pos, nrm, uv, tex):
            if not pos:
                return None
            m = GPUMesh()
            m.vertex_count = len(pos) // 3
            m.mat_groups = [(tex, 0, m.vertex_count)]
            m._upload(pos, nrm, uv)
            return m

        self.road_mesh_sidewalk = _make_mesh(side_pos, side_nrm, side_uv, pavement_tex)
        self.road_mesh_junction = _make_mesh(junc_pos, junc_nrm, junc_uv, pavement_tex)
        self.road_mesh_road = _make_mesh(road_pos, road_nrm, road_uv, road_tex)
        self.road_mesh_crosswalk = _make_mesh(cross_pos, cross_nrm, cross_uv, crosswalk_tex)

        rc = len(road_pos)//3; sc = len(side_pos)//3; jc = len(junc_pos)//3; cc = len(cross_pos)//3
        print(f"  Road system: {rc} road + {sc} sidewalk + {jc} junction + {cc} crosswalk verts")

    def _build_junction_markers(self):
        """Build point markers for junctions."""
        c = self.city
        point_verts = []
        for junc in c.junctions:
            x, y, z = d3d_to_gl(*junc.position)
            point_verts.extend([x, y + 10, z, 1.0, 0.2, 0.2])  # red
        self.junction_lines.upload([], point_verts)

    def _build_connection_lines(self):
        """Build lines between connected junctions."""
        c = self.city
        line_verts = []
        for conn in c.connections:
            ia, ib = conn.junction_idx_a, conn.junction_idx_b
            if ia < len(c.junctions) and ib < len(c.junctions):
                pa = c.junctions[ia].position
                pb = c.junctions[ib].position
                ax, ay, az = d3d_to_gl(*pa)
                bx, by, bz = d3d_to_gl(*pb)
                line_verts.extend([ax, ay + 15, az, 0.2, 0.6, 1.0])
                line_verts.extend([bx, by + 15, bz, 0.2, 0.6, 1.0])
        self.connection_lines.upload(line_verts)

    def _load_model_instances(self):
        """Load PM models and compute their world transforms."""
        c = self.city
        self.model_instances = []
        loaded = set()

        for mp in c.models:
            gpu_mesh = self.model_cache.get(mp.model_name)
            if gpu_mesh is None:
                if mp.model_name not in loaded:
                    loaded.add(mp.model_name)
                continue
            loaded.add(mp.model_name)

            # Build model matrix: the .city transform is D3D row-major
            # Convert to OpenGL column-major: transpose, then apply X-negation
            # for handedness change (D3D LH → OpenGL RH).
            # Transpose: GL col[i] = D3D row[i] → col[j][i] = row[i][j]
            # X-negate: negate column 0 and position X
            t = mp.transform
            col_major = [
                -t[0][0], -t[1][0], -t[2][0],  0,  # col 0: X-negated
                 t[0][1],  t[1][1],  t[2][1],  0,  # col 1: Y
                 t[0][2],  t[1][2],  t[2][2],  0,  # col 2: Z
                -t[3][0],  t[3][1],  t[3][2],  1,  # col 3: position
            ]

            self.model_instances.append((gpu_mesh, col_major))

        unique_loaded = sum(1 for m in set(mp.model_name for mp in c.models)
                           if self.model_cache.get(m) is not None)
        print(f"  Model instances: {len(self.model_instances)} placed, "
              f"{unique_loaded} unique models loaded")

    def _build_grid(self):
        """Build a ground reference grid."""
        # Compute grid bounds from city data
        if not self.city or not self.city.segments:
            return

        all_x = []
        all_z = []
        for seg in self.city.segments:
            for v in seg.vertices:
                gx, _, gz = d3d_to_gl(*v)
                all_x.append(gx)
                all_z.append(gz)

        min_x = min(all_x) - 5000
        max_x = max(all_x) + 5000
        min_z = min(all_z) - 5000
        max_z = max(all_z) + 5000
        step = 10000  # grid spacing

        line_verts = []
        r, g, b = 0.25, 0.25, 0.25
        y = 0.0  # ground plane

        # Z lines
        x = min_x - (min_x % step)
        while x <= max_x:
            line_verts.extend([x, y, min_z, r, g, b])
            line_verts.extend([x, y, max_z, r, g, b])
            x += step

        # X lines
        z = min_z - (min_z % step)
        while z <= max_z:
            line_verts.extend([min_x, y, z, r, g, b])
            line_verts.extend([max_x, y, z, r, g, b])
            z += step

        self.grid_lines.upload(line_verts)

    def _fit_camera(self):
        """Center camera on the city."""
        if not self.city or not self.city.segments:
            return
        all_x, all_y, all_z = [], [], []
        for seg in self.city.segments:
            for v in seg.vertices:
                gx, gy, gz = d3d_to_gl(*v)
                all_x.append(gx)
                all_y.append(gy)
                all_z.append(gz)

        cx = (min(all_x) + max(all_x)) / 2
        cy = (min(all_y) + max(all_y)) / 2
        cz = (min(all_z) + max(all_z)) / 2
        dx = max(all_x) - min(all_x)
        dz = max(all_z) - min(all_z)
        radius = max(dx, dz) / 2

        self.camera.center = [cx, cy, cz]
        self.camera.distance = radius * 1.5
        self.camera.pitch = 0.8  # look from above
        self.camera.far = radius * 10

    def _update_info(self):
        c = self.city
        name = os.path.basename(self.city_path)
        lines = [
            f"{name}  |  {len(c.segments)} roads, {len(c.junctions)} junctions, "
            f"{len(c.connections)} connections, {len(c.models)} models",
            f"[T] Terrain {'ON' if self.show_terrain else 'off'}  "
            f"[1] Buildings {'ON' if self.show_buildings else 'off'}  "
            f"[2] Models {'ON' if self.show_models else 'off'}  "
            f"[3] Roads {'ON' if self.show_roads else 'off'}  "
            f"[4] Connections {'ON' if self.show_connections else 'off'}  "
            f"[J] Junctions {'ON' if self.show_junctions else 'off'}",
            f"[W] Wireframe {'ON' if self.show_wireframe else 'off'}  "
            f"[G] Grid {'ON' if self.show_grid else 'off'}  "
            f"[R] Reset  |  Arrows=move  Q/E=up/down  Shift=fast  LMB=orbit  RMB=pan  Scroll=zoom",
        ]
        self.info_label.text = '\n'.join(lines)
        self.info_label.width = self.window.width - 16

    # ── Rendering ─────────────────────────────────────────────────────

    def on_draw(self):
        self.window.clear()
        gl.glEnable(gl.GL_DEPTH_TEST)
        gl.glEnable(gl.GL_CULL_FACE)
        gl.glCullFace(gl.GL_BACK)

        aspect = self.window.width / max(self.window.height, 1)
        proj = self.camera.get_projection(aspect)
        view = self.camera.get_view_matrix()

        identity = Mat4()

        # ── Draw meshes ───────────────────────────────────────────
        gl.glUseProgram(self.mesh_program)
        set_mat4(self.u_proj, proj)
        set_mat4(self.u_view, view)
        gl.glUniform3f(self.u_light, 0.4, 0.7, 0.5)
        gl.glUniform1i(self.u_wire, 0)

        # Terrain — draw first, disable culling (visible from all angles on slopes)
        if self.show_terrain and self.terrain_mesh:
            gl.glDisable(gl.GL_CULL_FACE)
            set_mat4(self.u_model, identity)
            gl.glUniform4f(self.u_base_color, 0.5, 0.45, 0.35, 1.0)
            self.terrain_mesh.draw(self.mesh_program, self.u_has_tex)
            gl.glEnable(gl.GL_CULL_FACE)

        # Road system layers — drawn with glPolygonOffset to prevent z-fighting
        if self.show_roads:
            gl.glDisable(gl.GL_CULL_FACE)
            gl.glEnable(gl.GL_POLYGON_OFFSET_FILL)
            set_mat4(self.u_model, identity)

            # Layer 0: sidewalks (farthest from camera in depth)
            if self.road_mesh_sidewalk:
                gl.glPolygonOffset(-1.0, -1.0)
                gl.glUniform4f(self.u_base_color, 0.55, 0.50, 0.42, 1.0)
                self.road_mesh_sidewalk.draw(self.mesh_program, self.u_has_tex)

            # Layer 1: junction fills
            if self.road_mesh_junction:
                gl.glPolygonOffset(-2.0, -2.0)
                gl.glUniform4f(self.u_base_color, 0.50, 0.48, 0.40, 1.0)
                self.road_mesh_junction.draw(self.mesh_program, self.u_has_tex)

            # Layer 2: road surface
            if self.road_mesh_road:
                gl.glPolygonOffset(-3.0, -3.0)
                gl.glUniform4f(self.u_base_color, 0.45, 0.43, 0.40, 1.0)
                self.road_mesh_road.draw(self.mesh_program, self.u_has_tex)

            # Layer 3: crosswalks (closest to camera)
            if self.road_mesh_crosswalk:
                gl.glPolygonOffset(-4.0, -4.0)
                gl.glUniform4f(self.u_base_color, 0.9, 0.9, 0.85, 1.0)
                self.road_mesh_crosswalk.draw(self.mesh_program, self.u_has_tex)

            gl.glDisable(gl.GL_POLYGON_OFFSET_FILL)
            gl.glEnable(gl.GL_CULL_FACE)

        # Extruded buildings (procedural shapes from .city segments)
        if self.show_buildings and self.building_mesh:
            gl.glDisable(gl.GL_CULL_FACE)
            set_mat4(self.u_model, identity)
            gl.glUniform4f(self.u_base_color, 0.55, 0.50, 0.45, 1.0)
            self.building_mesh.draw(self.mesh_program, self.u_has_tex)
            gl.glEnable(gl.GL_CULL_FACE)

        # PM model placements — cull front faces because X-negation flips winding
        if self.show_models:
            gl.glCullFace(gl.GL_FRONT)
            for gpu_mesh, col_major in self.model_instances:
                set_mat4(self.u_model, col_major)
                gl.glUniform4f(self.u_base_color, 0.7, 0.7, 0.7, 1.0)
                gpu_mesh.draw(self.mesh_program, self.u_has_tex)
            gl.glCullFace(gl.GL_BACK)

        gl.glUseProgram(0)

        # ── Draw lines/points ─────────────────────────────────────
        gl.glUseProgram(self.line_program)
        set_mat4(self.lu_proj, proj)
        set_mat4(self.lu_view, view)

        if self.show_grid:
            self.grid_lines.draw(line_width=1.0)

        # Building shape outlines (the polylines from .city segments)
        if self.show_buildings:
            self.building_lines.draw(line_width=1.5)

        if self.show_junctions:
            gl.glDisable(gl.GL_DEPTH_TEST)
            self.junction_lines.draw(line_width=1.0)
            gl.glEnable(gl.GL_DEPTH_TEST)

        if self.show_connections:
            gl.glDisable(gl.GL_DEPTH_TEST)
            self.connection_lines.draw(line_width=1.5)
            gl.glEnable(gl.GL_DEPTH_TEST)

        gl.glUseProgram(0)

        # ── HUD ───────────────────────────────────────────────────
        gl.glDisable(gl.GL_DEPTH_TEST)
        gl.glDisable(gl.GL_CULL_FACE)
        gl.glEnable(gl.GL_BLEND)
        gl.glBlendFunc(gl.GL_SRC_ALPHA, gl.GL_ONE_MINUS_SRC_ALPHA)
        self.info_label.draw()
        gl.glDisable(gl.GL_BLEND)
        gl.glEnable(gl.GL_CULL_FACE)
        gl.glEnable(gl.GL_DEPTH_TEST)

    # ── Input ─────────────────────────────────────────────────────

    def on_mouse_press(self, x, y, button, modifiers):
        if button == pyglet.window.mouse.LEFT:
            self.dragging = True
        elif button == pyglet.window.mouse.RIGHT:
            self.panning = True

    def on_mouse_release(self, x, y, button, modifiers):
        if button == pyglet.window.mouse.LEFT:
            self.dragging = False
        elif button == pyglet.window.mouse.RIGHT:
            self.panning = False

    def on_mouse_drag(self, x, y, dx, dy, buttons, modifiers):
        if self.dragging:
            self.camera.orbit(dx, dy)
        elif self.panning:
            self.camera.pan(dx, dy)

    def on_mouse_scroll(self, x, y, scroll_x, scroll_y):
        self.camera.zoom(scroll_y)

    # Key-to-movement mapping (arrow keys + WASD for movement)
    _MOVE_KEYS = None

    @classmethod
    def _get_move_keys(cls):
        if cls._MOVE_KEYS is None:
            key = pyglet.window.key
            cls._MOVE_KEYS = {
                key.UP: 'forward', key.DOWN: 'back',
                key.LEFT: 'left', key.RIGHT: 'right',
                key.PAGEUP: 'up', key.PAGEDOWN: 'down',
                key.Q: 'up', key.E: 'down',
            }
        return cls._MOVE_KEYS

    def on_key_press(self, symbol, modifiers):
        key = pyglet.window.key
        if symbol in (key.LSHIFT, key.RSHIFT):
            self.camera.sprint = True
            return
        move_keys = self._get_move_keys()
        if symbol in move_keys:
            self.camera.keys_held.add(move_keys[symbol])
            return
        if symbol == key.W:
            self.show_wireframe = not self.show_wireframe
        elif symbol == key.G:
            self.show_grid = not self.show_grid
        elif symbol == key.R:
            self._fit_camera()
        elif symbol == key.J:
            self.show_junctions = not self.show_junctions
        elif symbol == key._1:
            self.show_buildings = not self.show_buildings
        elif symbol == key._2:
            self.show_models = not self.show_models
        elif symbol == key._3:
            self.show_roads = not self.show_roads
        elif symbol == key._4:
            self.show_connections = not self.show_connections
        elif symbol == key.T:
            self.show_terrain = not self.show_terrain
        self._update_info()

    def on_key_release(self, symbol, modifiers):
        key = pyglet.window.key
        if symbol in (key.LSHIFT, key.RSHIFT):
            self.camera.sprint = False
            return
        move_keys = self._get_move_keys()
        if symbol in move_keys:
            self.camera.keys_held.discard(move_keys[symbol])

    def on_update(self, dt):
        self.camera.update(dt)


# ── Main ───────────────────────────────────────────────────────────────────

def main():
    if len(sys.argv) < 3:
        print("Usage: python -m city_editor.main <city_file> <game_root>")
        print()
        print("  city_file:  Path to .city file  (e.g. City/sanjose.city)")
        print("  game_root:  Path to game data root containing Models/ and Textures/")
        print()
        print("Controls:")
        print("  LMB=orbit  RMB=pan  Scroll=zoom")
        print("  W=wireframe  G=grid  R=reset camera  J=junctions")
        print("  1=roads  2=models  3=connections")
        sys.exit(1)

    city_path = sys.argv[1]
    game_root = sys.argv[2]

    config = pyglet.gl.Config(double_buffer=True, depth_size=24, sample_buffers=1, samples=4)
    try:
        window = pyglet.window.Window(1400, 900, "CarJacker City Editor", config=config, resizable=True)
    except pyglet.window.NoSuchConfigException:
        config = pyglet.gl.Config(double_buffer=True, depth_size=24)
        window = pyglet.window.Window(1400, 900, "CarJacker City Editor", config=config, resizable=True)

    gl.glClearColor(0.12, 0.13, 0.16, 1.0)

    editor = CityEditor(window, city_path, game_root)

    @window.event
    def on_draw():
        editor.on_draw()

    @window.event
    def on_mouse_press(x, y, button, modifiers):
        editor.on_mouse_press(x, y, button, modifiers)

    @window.event
    def on_mouse_release(x, y, button, modifiers):
        editor.on_mouse_release(x, y, button, modifiers)

    @window.event
    def on_mouse_drag(x, y, dx, dy, buttons, modifiers):
        editor.on_mouse_drag(x, y, dx, dy, buttons, modifiers)

    @window.event
    def on_mouse_scroll(x, y, scroll_x, scroll_y):
        editor.on_mouse_scroll(x, y, scroll_x, scroll_y)

    @window.event
    def on_key_press(symbol, modifiers):
        editor.on_key_press(symbol, modifiers)

    @window.event
    def on_key_release(symbol, modifiers):
        editor.on_key_release(symbol, modifiers)

    pyglet.clock.schedule_interval(editor.on_update, 1 / 60.0)
    pyglet.app.run()


if __name__ == '__main__':
    main()

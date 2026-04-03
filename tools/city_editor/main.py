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


# ── Road extrusion ─────────────────────────────────────────────────────────

def extrude_road_segment(vertices, half_width, is_closed):
    """Extrude a polyline into a flat road strip. Returns (positions, normals, uvs)."""
    n = len(vertices)
    if n < 2:
        return [], [], []

    # Convert all vertices to GL coords
    pts = [d3d_to_gl(*v) for v in vertices]

    # Compute perpendicular directions (in XZ plane)
    perps = []
    for i in range(n):
        if i == 0:
            dx = pts[1][0] - pts[0][0]
            dz = pts[1][2] - pts[0][2]
        elif i == n - 1:
            dx = pts[n - 1][0] - pts[n - 2][0]
            dz = pts[n - 1][2] - pts[n - 2][2]
        else:
            dx = pts[i + 1][0] - pts[i - 1][0]
            dz = pts[i + 1][2] - pts[i - 1][2]
        ln = math.sqrt(dx * dx + dz * dz)
        if ln > 1e-6:
            dx /= ln
            dz /= ln
        perps.append((-dz, dx))  # perpendicular in XZ

    # Build left/right edge vertices
    left = []
    right = []
    for i, (px, py, pz) in enumerate(pts):
        nx, nz = perps[i]
        left.append((px + nx * half_width, py, pz + nz * half_width))
        right.append((px - nx * half_width, py, pz - nz * half_width))

    # Triangulate strip
    positions = []
    normals = []
    uvs = []
    up = (0.0, 1.0, 0.0)

    seg_count = n if is_closed else n - 1
    for i in range(seg_count):
        j = (i + 1) % n
        l0, l1 = left[i], left[j]
        r0, r1 = right[i], right[j]

        # Two triangles per quad: l0-r0-r1, l0-r1-l1
        for tri in [(l0, r0, r1), (l0, r1, l1)]:
            for v in tri:
                positions.extend(v)
                normals.extend(up)
            # Simple UV mapping along road length
            u0 = i / max(seg_count, 1)
            u1 = j / max(seg_count, 1)
            uvs.extend([u0, 0.0, u0, 1.0, u1, 1.0])

        for tri in [(l0, r1, l1)]:
            pass  # already added above
        # Fix UVs for second triangle
        uvs[-6:] = [u0, 0.0, u1, 1.0, u1, 0.0]

    return positions, normals, uvs


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
        self.show_roads = True
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

        # Road mesh
        self.road_mesh = None  # GPUMesh for all road surfaces
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

        self._build_road_mesh()
        self._build_junction_markers()
        self._build_connection_lines()
        self._load_model_instances()
        self._build_grid()
        self._fit_camera()
        self._update_info()

    def _build_road_mesh(self):
        """Extrude all road segments into a single mesh."""
        c = self.city
        all_pos = []
        all_nrm = []
        all_uv = []

        road_widths = {0: 400.0, 1: 250.0, 3: 600.0}

        for seg in c.segments:
            hw = road_widths.get(seg.road_type, 400.0) * 0.5
            pos, nrm, uv = extrude_road_segment(seg.vertices, hw, seg.is_closed)
            all_pos.extend(pos)
            all_nrm.extend(nrm)
            all_uv.extend(uv)

        if not all_pos:
            return

        # Build GPUMesh manually (no texture, single group)
        mesh = GPUMesh()
        mesh.vertex_count = len(all_pos) // 3
        mesh.mat_groups = [(0, 0, mesh.vertex_count)]
        mesh._upload(all_pos, all_nrm, all_uv)
        self.road_mesh = mesh
        print(f"  Road mesh: {mesh.vertex_count} vertices")

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
            # Convert to OpenGL column-major with X negation
            t = mp.transform
            # D3D row-major to column-major (transpose), then negate X axis
            # Row 0 (right):  negate for handedness
            # Row 3 (pos):    negate X component
            col_major = [
                -t[0][0], t[0][1], t[0][2], t[0][3],  # col 0 (negated right)
                -t[1][0], t[1][1], t[1][2], t[1][3],  # col 1
                -t[2][0], t[2][1], t[2][2], t[2][3],   # col 2
                -t[3][0], t[3][1], t[3][2], t[3][3],  # col 3 (position, X negated)
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
            f"[1] Roads {'ON' if self.show_roads else 'off'}  "
            f"[2] Models {'ON' if self.show_models else 'off'}  "
            f"[3] Connections {'ON' if self.show_connections else 'off'}  "
            f"[J] Junctions {'ON' if self.show_junctions else 'off'}",
            f"[W] Wireframe {'ON' if self.show_wireframe else 'off'}  "
            f"[G] Grid {'ON' if self.show_grid else 'off'}  "
            f"[R] Reset camera  |  LMB=orbit  RMB=pan  Scroll=zoom",
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

        # Roads
        if self.show_roads and self.road_mesh:
            set_mat4(self.u_model, identity)
            gl.glUniform4f(self.u_base_color, 0.35, 0.35, 0.38, 1.0)
            self.road_mesh.draw(self.mesh_program, self.u_has_tex)

        # Building models — cull front faces because X-negation flips winding
        if self.show_models:
            gl.glCullFace(gl.GL_FRONT)
            for gpu_mesh, col_major in self.model_instances:
                set_mat4(self.u_model, col_major)
                gl.glUniform4f(self.u_base_color, 0.7, 0.7, 0.7, 1.0)
                gpu_mesh.draw(self.mesh_program, self.u_has_tex)
            gl.glCullFace(gl.GL_BACK)

        # Wireframe overlay
        if self.show_wireframe:
            gl.glUniform1i(self.u_wire, 1)
            gl.glUniform1i(self.u_has_tex, 0)
            gl.glPolygonMode(gl.GL_FRONT_AND_BACK, gl.GL_LINE)
            gl.glDisable(gl.GL_CULL_FACE)
            if self.show_roads and self.road_mesh:
                set_mat4(self.u_model, identity)
                gl.glBindVertexArray(self.road_mesh.vao)
                gl.glDrawArrays(gl.GL_TRIANGLES, 0, self.road_mesh.vertex_count)
                gl.glBindVertexArray(0)
            gl.glPolygonMode(gl.GL_FRONT_AND_BACK, gl.GL_FILL)
            gl.glEnable(gl.GL_CULL_FACE)

        gl.glUseProgram(0)

        # ── Draw lines/points ─────────────────────────────────────
        gl.glUseProgram(self.line_program)
        set_mat4(self.lu_proj, proj)
        set_mat4(self.lu_view, view)

        if self.show_grid:
            self.grid_lines.draw(line_width=1.0)

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

    def on_key_press(self, symbol, modifiers):
        key = pyglet.window.key
        if symbol == key.W:
            self.show_wireframe = not self.show_wireframe
        elif symbol == key.G:
            self.show_grid = not self.show_grid
        elif symbol == key.R:
            self._fit_camera()
        elif symbol == key.J:
            self.show_junctions = not self.show_junctions
        elif symbol == key._1:
            self.show_roads = not self.show_roads
        elif symbol == key._2:
            self.show_models = not self.show_models
        elif symbol == key._3:
            self.show_connections = not self.show_connections
        self._update_info()


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

    pyglet.clock.schedule_interval(lambda dt: None, 1 / 60.0)
    pyglet.app.run()


if __name__ == '__main__':
    main()

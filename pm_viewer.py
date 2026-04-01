"""
3D Model Viewer for AutoThief/CarJacker .PM files using pyglet 2.x modern OpenGL.
PM format: NGPM magic, 3D mesh with vertices, triangles (per-face UVs), materials (DDS textures).
"""

import ctypes
import math
import os
import struct
import sys

import pyglet
from pyglet import gl
from pyglet.math import Mat4, Vec3
from PIL import Image

# ── PM file parser ──────────────────────────────────────────────────────────

class PMModel:
    """Parsed .PM model data."""
    def __init__(self):
        self.build_string = ""
        self.flags = 0
        self.vertices = []       # list of (x, y, z)
        self.triangles = []      # list of (i0, i1, i2, u1, v1, u2, v2, u3, v3, nx, ny, nz, mat_idx)
        self.materials = []      # list of texture path strings
        self.helpers = []
        self.vertex_indices = [] # per-vertex ushort (when flags bit 0 clear)
        self.normals = []        # per-vertex (nx, ny, nz) (when flags bit 1 set)

    @staticmethod
    def load(filepath):
        m = PMModel()
        with open(filepath, 'rb') as f:
            # Text header: 0x100 bytes
            header_text = f.read(0x100)
            if header_text[:4] != b'NGPM':
                raise ValueError(f"Not a PM file: bad magic {header_text[:4]!r}")
            m.build_string = header_text[4:].split(b'\x00')[0].decode('ascii', errors='replace').strip()

            # Binary header: 0x28 bytes (file offset 0x100-0x127)
            bin_header = f.read(0x28)
            m.flags = struct.unpack_from('<H', bin_header, 4)[0]
            vert_count = struct.unpack_from('<H', bin_header, 6)[0]
            tri_count = struct.unpack_from('<H', bin_header, 8)[0]
            mat_count = struct.unpack_from('<B', bin_header, 10)[0]
            helper_count = struct.unpack_from('<B', bin_header, 14)[0]

            # Vertices: vert_count * 12 bytes
            for _ in range(vert_count):
                x, y, z = struct.unpack('<fff', f.read(12))
                m.vertices.append((x, y, z))

            # Optional: vertex indices (flags bit 0 clear)
            if not (m.flags & 1):
                for _ in range(vert_count):
                    idx, = struct.unpack('<H', f.read(2))
                    m.vertex_indices.append(idx)

            # Optional: per-vertex normals (flags bit 1 set)
            if m.flags & 2:
                for _ in range(vert_count):
                    nx, ny, nz = struct.unpack('<fff', f.read(12))
                    m.normals.append((nx, ny, nz))

            # Triangles: tri_count * 44 bytes
            for _ in range(tri_count):
                data = f.read(44)
                i0, i1, i2 = struct.unpack_from('<HHH', data, 0)
                u1, v1, u2, v2, u3, v3 = struct.unpack_from('<ffffff', data, 8)
                nx, ny = struct.unpack_from('<ff', data, 32)
                mat_idx = data[40]
                nz_bytes = data[41:44] + b'\x00'
                nz = struct.unpack('<f', bytes([0]) + data[41:44])[0] if any(data[41:44]) else 0.0
                # Face normal z is approximate since mat_idx overlaps byte 40
                m.triangles.append((i0, i1, i2, u1, v1, u2, v2, u3, v3, nx, ny, nz, mat_idx))

            # Optional: extra triangle data (flags bit 2 set)
            if m.flags & 4:
                f.read(tri_count * 32)  # skip for now

            # Helpers BEFORE materials in file order
            for _ in range(helper_count):
                m.helpers.append(f.read(76))

            # Materials: mat_count * 80 bytes (texture path string)
            for _ in range(mat_count):
                mat_data = f.read(80)
                name = mat_data[:64].split(b'\x00')[0].decode('ascii', errors='replace')
                m.materials.append(name)

        return m


# ── Shaders ─────────────────────────────────────────────────────────────────

VERTEX_SHADER = """#version 330 core
layout(location = 0) in vec3 position;
layout(location = 1) in vec3 normal;
layout(location = 2) in vec2 texcoord;

uniform mat4 projection;
uniform mat4 view;

out vec3 v_normal;
out vec2 v_texcoord;
out vec3 v_pos;

void main() {
    gl_Position = projection * view * vec4(position, 1.0);
    v_normal = normal;
    v_texcoord = texcoord;
    v_pos = position;
}
"""

FRAGMENT_SHADER = """#version 330 core
in vec3 v_normal;
in vec2 v_texcoord;
in vec3 v_pos;

uniform sampler2D diffuse_tex;
uniform bool has_texture;
uniform vec3 light_dir;
uniform bool wireframe;

out vec4 frag_color;

void main() {
    if (wireframe) {
        frag_color = vec4(0.0, 1.0, 0.4, 1.0);
        return;
    }

    vec3 n = normalize(v_normal);
    float ndl = max(dot(n, light_dir), 0.0);
    float light = 0.35 + 0.65 * ndl;

    vec4 base;
    if (has_texture) {
        base = texture(diffuse_tex, v_texcoord);
    } else {
        base = vec4(0.7, 0.7, 0.7, 1.0);
    }

    frag_color = vec4(base.rgb * light, base.a);
}
"""


# ── Viewer ──────────────────────────────────────────────────────────────────

def _compute_face_normal(v0, v1, v2):
    """Compute face normal from 3 vertex positions."""
    ax, ay, az = v1[0]-v0[0], v1[1]-v0[1], v1[2]-v0[2]
    bx, by, bz = v2[0]-v0[0], v2[1]-v0[1], v2[2]-v0[2]
    nx = ay*bz - az*by
    ny = az*bx - ax*bz
    nz = ax*by - ay*bx
    length = math.sqrt(nx*nx + ny*ny + nz*nz)
    if length > 1e-8:
        nx /= length; ny /= length; nz /= length
    return (nx, ny, nz)


class PMViewer:
    def __init__(self, window, pm_path, textures_root=None):
        self.window = window
        self.pm_path = pm_path
        self.textures_root = textures_root

        # Camera state
        self.yaw = 0.0
        self.pitch = 0.3
        self.distance = 100.0
        self.center = [0.0, 0.0, 0.0]
        self.dragging = False
        self.panning = False
        self.last_mouse = (0, 0)
        self.show_wireframe = False

        # Model data
        self.vao = 0
        self.vbo_pos = 0
        self.vbo_nrm = 0
        self.vbo_uv = 0
        self.vertex_count = 0
        self.model = None
        self.tex_cache = {}
        self.mat_groups = []  # list of (tex_id, start_idx, count)
        self.info_label = pyglet.text.Label('', font_size=10, x=8, y=8,
                                            color=(200, 200, 200, 220),
                                            multiline=True, width=window.width - 16,
                                            anchor_y='bottom')

        # Compile shaders
        self._compile_shaders()

        # Load model
        self._load_model()

    def _compile_shaders(self):
        vs = gl.GLuint(gl.glCreateShader(gl.GL_VERTEX_SHADER))
        src = VERTEX_SHADER.encode('utf-8')
        buf = ctypes.create_string_buffer(src)
        ptr = ctypes.cast(buf, ctypes.POINTER(ctypes.c_char))
        length = gl.GLint(len(src))
        gl.glShaderSource(vs, 1, ctypes.byref(ptr), ctypes.byref(length))
        gl.glCompileShader(vs)

        fs = gl.GLuint(gl.glCreateShader(gl.GL_FRAGMENT_SHADER))
        src = FRAGMENT_SHADER.encode('utf-8')
        buf = ctypes.create_string_buffer(src)
        ptr = ctypes.cast(buf, ctypes.POINTER(ctypes.c_char))
        length = gl.GLint(len(src))
        gl.glShaderSource(fs, 1, ctypes.byref(ptr), ctypes.byref(length))
        gl.glCompileShader(fs)

        self.program = gl.glCreateProgram()
        gl.glAttachShader(self.program, vs)
        gl.glAttachShader(self.program, fs)
        gl.glLinkProgram(self.program)

        gl.glDeleteShader(vs)
        gl.glDeleteShader(fs)

        self.u_projection = gl.glGetUniformLocation(self.program, b"projection")
        self.u_view = gl.glGetUniformLocation(self.program, b"view")
        self.u_has_texture = gl.glGetUniformLocation(self.program, b"has_texture")
        self.u_light_dir = gl.glGetUniformLocation(self.program, b"light_dir")
        self.u_wireframe = gl.glGetUniformLocation(self.program, b"wireframe")

    def _load_texture(self, tex_name):
        """Load a DDS texture from textures_root/tex_name.dds."""
        if tex_name in self.tex_cache:
            return self.tex_cache[tex_name]
        if not self.textures_root:
            self.tex_cache[tex_name] = 0
            return 0

        # tex_name is like "bank\bank_00" - look for Textures/Bank/bank_00.dds
        dds_path = os.path.join(self.textures_root, tex_name + '.dds')
        if not os.path.exists(dds_path):
            # Try case-insensitive search
            parts = tex_name.replace('\\', '/').split('/')
            search_dir = self.textures_root
            for i, part in enumerate(parts):
                found = False
                try:
                    for entry in os.listdir(search_dir):
                        if entry.lower() == part.lower() or (i == len(parts)-1 and entry.lower() == (part + '.dds').lower()):
                            search_dir = os.path.join(search_dir, entry)
                            found = True
                            break
                except OSError:
                    break
                if not found:
                    break
            if found and os.path.isfile(search_dir):
                dds_path = search_dir
            else:
                self.tex_cache[tex_name] = 0
                return 0

        try:
            img = Image.open(dds_path)
            if img.mode != 'RGBA':
                img = img.convert('RGBA')
            raw = img.tobytes()

            tex_id = gl.GLuint()
            gl.glGenTextures(1, ctypes.byref(tex_id))
            gl.glBindTexture(gl.GL_TEXTURE_2D, tex_id.value)
            gl.glTexParameteri(gl.GL_TEXTURE_2D, gl.GL_TEXTURE_MIN_FILTER, gl.GL_LINEAR_MIPMAP_LINEAR)
            gl.glTexParameteri(gl.GL_TEXTURE_2D, gl.GL_TEXTURE_MAG_FILTER, gl.GL_LINEAR)
            gl.glTexParameteri(gl.GL_TEXTURE_2D, gl.GL_TEXTURE_WRAP_S, gl.GL_REPEAT)
            gl.glTexParameteri(gl.GL_TEXTURE_2D, gl.GL_TEXTURE_WRAP_T, gl.GL_REPEAT)
            gl.glTexImage2D(gl.GL_TEXTURE_2D, 0, gl.GL_RGBA8, img.width, img.height,
                            0, gl.GL_RGBA, gl.GL_UNSIGNED_BYTE, raw)
            gl.glGenerateMipmap(gl.GL_TEXTURE_2D)
            gl.glBindTexture(gl.GL_TEXTURE_2D, 0)

            self.tex_cache[tex_name] = tex_id.value
            return tex_id.value
        except Exception as e:
            print(f"  Warning: texture '{tex_name}': {e}")
            self.tex_cache[tex_name] = 0
            return 0

    def _load_model(self):
        print(f"Loading {self.pm_path}...")
        self.model = PMModel.load(self.pm_path)
        m = self.model
        print(f"  Build: {m.build_string}")
        print(f"  Flags: {m.flags:#x}")
        print(f"  Vertices: {len(m.vertices)}, Triangles: {len(m.triangles)}")
        print(f"  Materials: {len(m.materials)}, Helpers: {len(m.helpers)}")
        for i, mat in enumerate(m.materials):
            print(f"    Mat {i}: {mat}")

        has_per_vertex_normals = bool(m.normals)

        # Group triangles by material index (byte 40 of triangle struct)
        from collections import defaultdict
        tris_by_mat = defaultdict(list)
        for tri in m.triangles:
            mat_idx = tri[12]  # material index
            tris_by_mat[mat_idx].append(tri)

        positions = []
        normals = []
        uvs = []
        self.mat_groups = []

        for mi in sorted(tris_by_mat.keys()):
            tex_id = 0
            if mi < len(m.materials):
                tex_id = self._load_texture(m.materials[mi])

            start_vert = len(positions) // 3
            for tri in tris_by_mat[mi]:
                i0, i1, i2 = tri[0], tri[1], tri[2]
                u1, v1, u2, v2, u3, v3 = tri[3], tri[4], tri[5], tri[6], tri[7], tri[8]
                fnx, fny = tri[9], tri[10]

                p0 = m.vertices[i0] if i0 < len(m.vertices) else (0,0,0)
                p1 = m.vertices[i1] if i1 < len(m.vertices) else (0,0,0)
                p2 = m.vertices[i2] if i2 < len(m.vertices) else (0,0,0)

                if has_per_vertex_normals:
                    n0 = m.normals[i0] if i0 < len(m.normals) else (0,1,0)
                    n1 = m.normals[i1] if i1 < len(m.normals) else (0,1,0)
                    n2 = m.normals[i2] if i2 < len(m.normals) else (0,1,0)
                else:
                    n = _compute_face_normal(p0, p1, p2)
                    n0 = n1 = n2 = n

                positions.extend(p0)
                positions.extend(p1)
                positions.extend(p2)
                normals.extend(n0)
                normals.extend(n1)
                normals.extend(n2)
                uvs.extend([1-u1, 1-v1, 1-u2, 1-v2, 1-u3, 1-v3])

            vert_count = (len(positions) // 3) - start_vert
            if vert_count > 0:
                self.mat_groups.append((tex_id, start_vert, vert_count))

        self.vertex_count = len(positions) // 3
        print(f"  Total render vertices: {self.vertex_count}")

        # Update info label
        fname = os.path.basename(self.pm_path)
        info = f"{fname}  |  {len(m.vertices)} verts, {len(m.triangles)} tris, {len(m.materials)} mats"
        if m.build_string:
            info += f"\n{m.build_string}"
        self.info_label.text = info
        self.info_label.width = self.window.width - 16

        # Compute bounding sphere
        if m.vertices:
            xs = [v[0] for v in m.vertices]
            ys = [v[1] for v in m.vertices]
            zs = [v[2] for v in m.vertices]
            self.center = [(min(xs)+max(xs))/2, (min(ys)+max(ys))/2, (min(zs)+max(zs))/2]
            dx, dy, dz = max(xs)-min(xs), max(ys)-min(ys), max(zs)-min(zs)
            radius = math.sqrt(dx*dx + dy*dy + dz*dz) / 2
            self.distance = radius * 2.5 if radius > 0.001 else 100.0

        # Upload to GPU
        vao = gl.GLuint()
        gl.glGenVertexArrays(1, ctypes.byref(vao))
        gl.glBindVertexArray(vao.value)
        self.vao = vao.value

        # Position buffer
        vbo = gl.GLuint()
        gl.glGenBuffers(1, ctypes.byref(vbo))
        gl.glBindBuffer(gl.GL_ARRAY_BUFFER, vbo.value)
        pos_data = (gl.GLfloat * len(positions))(*positions)
        gl.glBufferData(gl.GL_ARRAY_BUFFER, ctypes.sizeof(pos_data), pos_data, gl.GL_STATIC_DRAW)
        gl.glVertexAttribPointer(0, 3, gl.GL_FLOAT, gl.GL_FALSE, 0, None)
        gl.glEnableVertexAttribArray(0)
        self.vbo_pos = vbo.value

        # Normal buffer
        vbo = gl.GLuint()
        gl.glGenBuffers(1, ctypes.byref(vbo))
        gl.glBindBuffer(gl.GL_ARRAY_BUFFER, vbo.value)
        nrm_data = (gl.GLfloat * len(normals))(*normals)
        gl.glBufferData(gl.GL_ARRAY_BUFFER, ctypes.sizeof(nrm_data), nrm_data, gl.GL_STATIC_DRAW)
        gl.glVertexAttribPointer(1, 3, gl.GL_FLOAT, gl.GL_FALSE, 0, None)
        gl.glEnableVertexAttribArray(1)
        self.vbo_nrm = vbo.value

        # UV buffer
        vbo = gl.GLuint()
        gl.glGenBuffers(1, ctypes.byref(vbo))
        gl.glBindBuffer(gl.GL_ARRAY_BUFFER, vbo.value)
        uv_data = (gl.GLfloat * len(uvs))(*uvs)
        gl.glBufferData(gl.GL_ARRAY_BUFFER, ctypes.sizeof(uv_data), uv_data, gl.GL_STATIC_DRAW)
        gl.glVertexAttribPointer(2, 2, gl.GL_FLOAT, gl.GL_FALSE, 0, None)
        gl.glEnableVertexAttribArray(2)
        self.vbo_uv = vbo.value

        gl.glBindVertexArray(0)

    def on_draw(self):
        self.window.clear()
        gl.glEnable(gl.GL_DEPTH_TEST)
        gl.glEnable(gl.GL_CULL_FACE)
        gl.glCullFace(gl.GL_FRONT)

        gl.glUseProgram(self.program)

        # Projection
        aspect = self.window.width / max(self.window.height, 1)
        proj = Mat4.perspective_projection(aspect, 0.1, self.distance * 20, 60)
        proj_arr = (gl.GLfloat * 16)(*tuple(proj))
        gl.glUniformMatrix4fv(self.u_projection, 1, gl.GL_FALSE, proj_arr)

        # View (orbit camera)
        cx, cy, cz = self.center
        eye_x = cx + self.distance * math.cos(self.pitch) * math.sin(self.yaw)
        eye_y = cy + self.distance * math.sin(self.pitch)
        eye_z = cz + self.distance * math.cos(self.pitch) * math.cos(self.yaw)

        view = Mat4.look_at(Vec3(eye_x, eye_y, eye_z), Vec3(cx, cy, cz), Vec3(0, 1, 0))
        view_arr = (gl.GLfloat * 16)(*tuple(view))
        gl.glUniformMatrix4fv(self.u_view, 1, gl.GL_FALSE, view_arr)

        # Light direction
        lx = math.cos(0.5) * math.sin(0.8)
        ly = math.sin(0.5)
        lz = math.cos(0.5) * math.cos(0.8)
        gl.glUniform3f(self.u_light_dir, lx, ly, lz)

        gl.glBindVertexArray(self.vao)

        # Draw solid
        gl.glUniform1i(self.u_wireframe, 0)
        for tex_id, start, count in self.mat_groups:
            if tex_id:
                gl.glUniform1i(self.u_has_texture, 1)
                gl.glActiveTexture(gl.GL_TEXTURE0)
                gl.glBindTexture(gl.GL_TEXTURE_2D, tex_id)
            else:
                gl.glUniform1i(self.u_has_texture, 0)
            gl.glDrawArrays(gl.GL_TRIANGLES, start, count)

        # Draw wireframe overlay
        if self.show_wireframe:
            gl.glUniform1i(self.u_wireframe, 1)
            gl.glUniform1i(self.u_has_texture, 0)
            gl.glPolygonMode(gl.GL_FRONT_AND_BACK, gl.GL_LINE)
            gl.glDisable(gl.GL_CULL_FACE)
            gl.glDrawArrays(gl.GL_TRIANGLES, 0, self.vertex_count)
            gl.glPolygonMode(gl.GL_FRONT_AND_BACK, gl.GL_FILL)
            gl.glEnable(gl.GL_CULL_FACE)

        gl.glBindVertexArray(0)
        gl.glUseProgram(0)

        # Draw info text overlay
        gl.glDisable(gl.GL_DEPTH_TEST)
        self.info_label.draw()
        gl.glEnable(gl.GL_DEPTH_TEST)

    def on_mouse_press(self, x, y, button, modifiers):
        if button == pyglet.window.mouse.LEFT:
            self.dragging = True
            self.last_mouse = (x, y)
        elif button == pyglet.window.mouse.RIGHT:
            self.panning = True
            self.last_mouse = (x, y)

    def on_mouse_release(self, x, y, button, modifiers):
        if button == pyglet.window.mouse.LEFT:
            self.dragging = False
        elif button == pyglet.window.mouse.RIGHT:
            self.panning = False

    def on_mouse_drag(self, x, y, dx, dy, buttons, modifiers):
        if self.dragging:
            self.yaw += dx * 0.01
            self.pitch += dy * 0.01
            self.pitch = max(-math.pi/2 + 0.01, min(math.pi/2 - 0.01, self.pitch))
        elif self.panning:
            # Pan in screen space
            speed = self.distance * 0.002
            # Compute right and up vectors from yaw/pitch
            right_x = math.cos(self.yaw)
            right_z = -math.sin(self.yaw)
            up_x = -math.sin(self.pitch) * math.sin(self.yaw)
            up_y = math.cos(self.pitch)
            up_z = -math.sin(self.pitch) * math.cos(self.yaw)
            self.center[0] -= (dx * right_x + dy * up_x) * speed
            self.center[1] -= (dy * up_y) * speed
            self.center[2] -= (dx * right_z + dy * up_z) * speed

    def on_mouse_scroll(self, x, y, scroll_x, scroll_y):
        self.distance *= 0.9 ** scroll_y
        self.distance = max(0.1, self.distance)

    def on_key_press(self, symbol, modifiers):
        if symbol == pyglet.window.key.W:
            self.show_wireframe = not self.show_wireframe
        elif symbol == pyglet.window.key.R:
            self._reset_camera()

    def _reset_camera(self):
        self.yaw = 0.0
        self.pitch = 0.3
        if self.model and self.model.vertices:
            xs = [v[0] for v in self.model.vertices]
            ys = [v[1] for v in self.model.vertices]
            zs = [v[2] for v in self.model.vertices]
            self.center = [(min(xs)+max(xs))/2, (min(ys)+max(ys))/2, (min(zs)+max(zs))/2]
            dx, dy, dz = max(xs)-min(xs), max(ys)-min(ys), max(zs)-min(zs)
            radius = math.sqrt(dx*dx + dy*dy + dz*dz) / 2
            self.distance = radius * 2.5 if radius > 0.001 else 100.0

    def reload_model(self, new_path):
        """Load a new model (e.g. from drag & drop)."""
        # Clean up old GL objects
        if self.vao:
            vao = gl.GLuint(self.vao)
            gl.glDeleteVertexArrays(1, ctypes.byref(vao))
        for attr in ('vbo_pos', 'vbo_nrm', 'vbo_uv'):
            val = getattr(self, attr, 0)
            if val:
                buf = gl.GLuint(val)
                gl.glDeleteBuffers(1, ctypes.byref(buf))
        # Clear texture cache
        for tid in self.tex_cache.values():
            if tid:
                t = gl.GLuint(tid)
                gl.glDeleteTextures(1, ctypes.byref(t))
        self.tex_cache.clear()

        self.pm_path = new_path
        # Auto-detect textures root from new model path
        model_dir = os.path.dirname(os.path.abspath(new_path))
        for parent in [model_dir, os.path.dirname(model_dir)]:
            candidate = os.path.join(parent, 'Textures')
            if os.path.isdir(candidate):
                self.textures_root = candidate
                break

        self._load_model()
        self._reset_camera()
        self.window.set_caption(f"PM Viewer - {os.path.basename(new_path)}")


def main():
    if len(sys.argv) < 2:
        print("Usage: python pm_viewer.py [model.pm] [textures_root]")
        print("  Drag & drop .pm files onto the window to load them.")
        print("Controls: LMB=orbit, RMB=pan, Scroll=zoom, W=wireframe, R=reset")

    pm_path = sys.argv[1] if len(sys.argv) > 1 else None
    textures_root = sys.argv[2] if len(sys.argv) > 2 else None

    # Auto-detect textures root if not specified
    if not textures_root and pm_path:
        model_dir = os.path.dirname(os.path.abspath(pm_path))
        for parent in [model_dir, os.path.dirname(model_dir)]:
            candidate = os.path.join(parent, 'Textures')
            if os.path.isdir(candidate):
                textures_root = candidate
                break

    filename = os.path.basename(pm_path) if pm_path else "Drop a .pm file"
    config = pyglet.gl.Config(double_buffer=True, depth_size=24, sample_buffers=1, samples=4)
    try:
        window = pyglet.window.Window(1280, 800, f"PM Viewer - {filename}", config=config, resizable=True)
    except pyglet.window.NoSuchConfigException:
        config = pyglet.gl.Config(double_buffer=True, depth_size=24)
        window = pyglet.window.Window(1280, 800, f"PM Viewer - {filename}", config=config, resizable=True)

    gl.glClearColor(0.15, 0.15, 0.18, 1.0)

    viewer = PMViewer(window, pm_path, textures_root) if pm_path else None

    @window.event
    def on_draw():
        if viewer:
            viewer.on_draw()
        else:
            window.clear()

    @window.event
    def on_mouse_press(x, y, button, modifiers):
        if viewer:
            viewer.on_mouse_press(x, y, button, modifiers)

    @window.event
    def on_mouse_release(x, y, button, modifiers):
        if viewer:
            viewer.on_mouse_release(x, y, button, modifiers)

    @window.event
    def on_mouse_drag(x, y, dx, dy, buttons, modifiers):
        if viewer:
            viewer.on_mouse_drag(x, y, dx, dy, buttons, modifiers)

    @window.event
    def on_mouse_scroll(x, y, scroll_x, scroll_y):
        if viewer:
            viewer.on_mouse_scroll(x, y, scroll_x, scroll_y)

    @window.event
    def on_key_press(symbol, modifiers):
        if viewer:
            viewer.on_key_press(symbol, modifiers)

    @window.event
    def on_file_drop(x, y, paths):
        nonlocal viewer
        for path in paths:
            if path.lower().endswith('.pm'):
                try:
                    if viewer:
                        viewer.reload_model(path)
                    else:
                        viewer = PMViewer(window, path)
                except Exception as e:
                    print(f"Error loading {path}: {e}")
                break

    pyglet.app.run()


if __name__ == '__main__':
    main()

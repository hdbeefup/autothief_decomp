"""
OpenGL 3.3 rendering utilities for the city editor.
Shader compilation, texture loading, mesh GPU upload, orbit camera.
Extracted and generalized from pm_viewer.py.
"""

import ctypes
import math
import os

import pyglet
from pyglet import gl
from pyglet.math import Mat4, Vec3
from PIL import Image


# ── Shaders ────────────────────────────────────────────────────────────────

MESH_VS = """#version 330 core
layout(location = 0) in vec3 position;
layout(location = 1) in vec3 normal;
layout(location = 2) in vec2 texcoord;

uniform mat4 projection;
uniform mat4 view;
uniform mat4 model;

out vec3 v_normal;
out vec2 v_texcoord;
out vec3 v_pos;

void main() {
    vec4 world = model * vec4(position, 1.0);
    gl_Position = projection * view * world;
    v_normal = mat3(model) * normal;
    v_texcoord = texcoord;
    v_pos = world.xyz;
}
"""

MESH_FS = """#version 330 core
in vec3 v_normal;
in vec2 v_texcoord;
in vec3 v_pos;

uniform sampler2D diffuse_tex;
uniform bool has_texture;
uniform vec3 light_dir;
uniform vec4 base_color;
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
        base = base_color;
    }

    frag_color = vec4(base.rgb * light, base.a);
}
"""

LINE_VS = """#version 330 core
layout(location = 0) in vec3 position;
layout(location = 1) in vec3 color;

uniform mat4 projection;
uniform mat4 view;

out vec3 v_color;

void main() {
    gl_Position = projection * view * vec4(position, 1.0);
    gl_PointSize = 6.0;
    v_color = color;
}
"""

LINE_FS = """#version 330 core
in vec3 v_color;
out vec4 frag_color;

void main() {
    frag_color = vec4(v_color, 1.0);
}
"""


# ── Shader helpers ─────────────────────────────────────────────────────────

def _compile_shader(source, shader_type):
    shader = gl.GLuint(gl.glCreateShader(shader_type))
    src = source.encode('utf-8')
    buf = ctypes.create_string_buffer(src)
    ptr = ctypes.cast(buf, ctypes.POINTER(ctypes.c_char))
    length = gl.GLint(len(src))
    gl.glShaderSource(shader, 1, ctypes.byref(ptr), ctypes.byref(length))
    gl.glCompileShader(shader)
    status = gl.GLint()
    gl.glGetShaderiv(shader, gl.GL_COMPILE_STATUS, ctypes.byref(status))
    if not status.value:
        log_len = gl.GLint()
        gl.glGetShaderiv(shader, gl.GL_INFO_LOG_LENGTH, ctypes.byref(log_len))
        log_buf = ctypes.create_string_buffer(log_len.value)
        gl.glGetShaderInfoLog(shader, log_len, None, log_buf)
        raise RuntimeError(f"Shader compile error: {log_buf.value.decode()}")
    return shader


def compile_program(vs_source, fs_source):
    vs = _compile_shader(vs_source, gl.GL_VERTEX_SHADER)
    fs = _compile_shader(fs_source, gl.GL_FRAGMENT_SHADER)
    program = gl.glCreateProgram()
    gl.glAttachShader(program, vs)
    gl.glAttachShader(program, fs)
    gl.glLinkProgram(program)
    gl.glDeleteShader(vs)
    gl.glDeleteShader(fs)
    return program


def get_uniform(program, name):
    return gl.glGetUniformLocation(program, name.encode('ascii'))


def set_mat4(loc, mat4):
    if isinstance(mat4, (list, tuple)):
        arr = (gl.GLfloat * 16)(*mat4)
    else:
        arr = (gl.GLfloat * 16)(*tuple(mat4))
    gl.glUniformMatrix4fv(loc, 1, gl.GL_FALSE, arr)


# ── Texture loading ────────────────────────────────────────────────────────

class TextureCache:
    def __init__(self, textures_root=None):
        self.root = textures_root
        self._cache = {}

    def load(self, tex_name):
        if tex_name in self._cache:
            return self._cache[tex_name]
        if not self.root:
            self._cache[tex_name] = 0
            return 0

        dds_path = self._find_texture_path(tex_name)
        if not dds_path:
            self._cache[tex_name] = 0
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

            self._cache[tex_name] = tex_id.value
            return tex_id.value
        except Exception as e:
            print(f"  Warning: texture '{tex_name}': {e}")
            self._cache[tex_name] = 0
            return 0

    def _find_texture_path(self, tex_name):
        path = os.path.join(self.root, tex_name + '.dds')
        if os.path.exists(path):
            return path
        # Case-insensitive search
        parts = tex_name.replace('\\', '/').split('/')
        search_dir = self.root
        for i, part in enumerate(parts):
            found = False
            try:
                for entry in os.listdir(search_dir):
                    if entry.lower() == part.lower() or \
                       (i == len(parts) - 1 and entry.lower() == (part + '.dds').lower()):
                        search_dir = os.path.join(search_dir, entry)
                        found = True
                        break
            except OSError:
                return None
            if not found:
                return None
        if os.path.isfile(search_dir):
            return search_dir
        return None

    def cleanup(self):
        for tid in self._cache.values():
            if tid:
                t = gl.GLuint(tid)
                gl.glDeleteTextures(1, ctypes.byref(t))
        self._cache.clear()


# ── GPU mesh ───────────────────────────────────────────────────────────────

def compute_face_normal(v0, v1, v2):
    ax, ay, az = v1[0] - v0[0], v1[1] - v0[1], v1[2] - v0[2]
    bx, by, bz = v2[0] - v0[0], v2[1] - v0[1], v2[2] - v0[2]
    nx = ay * bz - az * by
    ny = az * bx - ax * bz
    nz = ax * by - ay * bx
    length = math.sqrt(nx * nx + ny * ny + nz * nz)
    if length > 1e-8:
        nx /= length
        ny /= length
        nz /= length
    return (nx, ny, nz)


class GPUMesh:
    """A triangle mesh uploaded to the GPU with per-material texture groups."""

    def __init__(self):
        self.vao = 0
        self.vbo_pos = 0
        self.vbo_nrm = 0
        self.vbo_uv = 0
        self.vertex_count = 0
        self.mat_groups = []  # list of (tex_id, start_idx, count)

    @staticmethod
    def from_pm(pm_model, tex_cache):
        """Build a GPUMesh from a PMModel."""
        mesh = GPUMesh()
        m = pm_model
        has_normals = bool(m.normals)

        from collections import defaultdict
        tris_by_mat = defaultdict(list)
        for tri in m.triangles:
            tris_by_mat[tri[12]].append(tri)

        positions = []
        normals = []
        uvs = []

        for mi in sorted(tris_by_mat.keys()):
            tex_id = 0
            if mi < len(m.materials):
                tex_id = tex_cache.load(m.materials[mi])

            start_vert = len(positions) // 3
            for tri in tris_by_mat[mi]:
                i0, i1, i2 = tri[0], tri[1], tri[2]
                u1, v1, u2, v2, u3, v3 = tri[3], tri[4], tri[5], tri[6], tri[7], tri[8]

                p0 = m.vertices[i0] if i0 < len(m.vertices) else (0, 0, 0)
                p1 = m.vertices[i1] if i1 < len(m.vertices) else (0, 0, 0)
                p2 = m.vertices[i2] if i2 < len(m.vertices) else (0, 0, 0)

                if has_normals:
                    n0 = m.normals[i0] if i0 < len(m.normals) else (0, 1, 0)
                    n1 = m.normals[i1] if i1 < len(m.normals) else (0, 1, 0)
                    n2 = m.normals[i2] if i2 < len(m.normals) else (0, 1, 0)
                else:
                    n = compute_face_normal(p0, p1, p2)
                    n0 = n1 = n2 = n

                positions.extend(p0)
                positions.extend(p1)
                positions.extend(p2)
                normals.extend(n0)
                normals.extend(n1)
                normals.extend(n2)
                uvs.extend([u1, 1 - v1, u2, 1 - v2, u3, 1 - v3])

            vert_count = (len(positions) // 3) - start_vert
            if vert_count > 0:
                mesh.mat_groups.append((tex_id, start_vert, vert_count))

        mesh.vertex_count = len(positions) // 3
        mesh._upload(positions, normals, uvs)
        return mesh

    def _upload(self, positions, normals, uvs):
        vao = gl.GLuint()
        gl.glGenVertexArrays(1, ctypes.byref(vao))
        gl.glBindVertexArray(vao.value)
        self.vao = vao.value

        # Position
        vbo = gl.GLuint()
        gl.glGenBuffers(1, ctypes.byref(vbo))
        gl.glBindBuffer(gl.GL_ARRAY_BUFFER, vbo.value)
        data = (gl.GLfloat * len(positions))(*positions)
        gl.glBufferData(gl.GL_ARRAY_BUFFER, ctypes.sizeof(data), data, gl.GL_STATIC_DRAW)
        gl.glVertexAttribPointer(0, 3, gl.GL_FLOAT, gl.GL_FALSE, 0, None)
        gl.glEnableVertexAttribArray(0)
        self.vbo_pos = vbo.value

        # Normal
        vbo = gl.GLuint()
        gl.glGenBuffers(1, ctypes.byref(vbo))
        gl.glBindBuffer(gl.GL_ARRAY_BUFFER, vbo.value)
        data = (gl.GLfloat * len(normals))(*normals)
        gl.glBufferData(gl.GL_ARRAY_BUFFER, ctypes.sizeof(data), data, gl.GL_STATIC_DRAW)
        gl.glVertexAttribPointer(1, 3, gl.GL_FLOAT, gl.GL_FALSE, 0, None)
        gl.glEnableVertexAttribArray(1)
        self.vbo_nrm = vbo.value

        # UV
        vbo = gl.GLuint()
        gl.glGenBuffers(1, ctypes.byref(vbo))
        gl.glBindBuffer(gl.GL_ARRAY_BUFFER, vbo.value)
        data = (gl.GLfloat * len(uvs))(*uvs)
        gl.glBufferData(gl.GL_ARRAY_BUFFER, ctypes.sizeof(data), data, gl.GL_STATIC_DRAW)
        gl.glVertexAttribPointer(2, 2, gl.GL_FLOAT, gl.GL_FALSE, 0, None)
        gl.glEnableVertexAttribArray(2)
        self.vbo_uv = vbo.value

        gl.glBindVertexArray(0)

    def draw(self, program, u_has_texture):
        gl.glBindVertexArray(self.vao)
        for tex_id, start, count in self.mat_groups:
            if tex_id:
                gl.glUniform1i(u_has_texture, 1)
                gl.glActiveTexture(gl.GL_TEXTURE0)
                gl.glBindTexture(gl.GL_TEXTURE_2D, tex_id)
            else:
                gl.glUniform1i(u_has_texture, 0)
            gl.glDrawArrays(gl.GL_TRIANGLES, start, count)
        gl.glBindVertexArray(0)

    def cleanup(self):
        for attr in ('vbo_pos', 'vbo_nrm', 'vbo_uv'):
            val = getattr(self, attr, 0)
            if val:
                buf = gl.GLuint(val)
                gl.glDeleteBuffers(1, ctypes.byref(buf))
        if self.vao:
            vao = gl.GLuint(self.vao)
            gl.glDeleteVertexArrays(1, ctypes.byref(vao))


class GPULines:
    """Dynamic line/point buffer for roads, junctions, grid etc."""

    def __init__(self):
        self.vao = 0
        self.vbo = 0
        self.line_count = 0
        self.point_count = 0

    def upload(self, line_verts, point_verts=None):
        """Upload vertex data. Each vertex: [x, y, z, r, g, b] (6 floats)."""
        if point_verts is None:
            point_verts = []

        self.line_count = len(line_verts) // 6
        self.point_count = len(point_verts) // 6
        all_verts = line_verts + point_verts

        if not all_verts:
            return

        if not self.vao:
            vao = gl.GLuint()
            gl.glGenVertexArrays(1, ctypes.byref(vao))
            self.vao = vao.value
            vbo = gl.GLuint()
            gl.glGenBuffers(1, ctypes.byref(vbo))
            self.vbo = vbo.value

        gl.glBindVertexArray(self.vao)
        gl.glBindBuffer(gl.GL_ARRAY_BUFFER, self.vbo)
        data = (gl.GLfloat * len(all_verts))(*all_verts)
        gl.glBufferData(gl.GL_ARRAY_BUFFER, ctypes.sizeof(data), data, gl.GL_DYNAMIC_DRAW)
        stride = 6 * 4
        gl.glVertexAttribPointer(0, 3, gl.GL_FLOAT, gl.GL_FALSE, stride, None)
        gl.glEnableVertexAttribArray(0)
        gl.glVertexAttribPointer(1, 3, gl.GL_FLOAT, gl.GL_FALSE, stride, ctypes.c_void_p(12))
        gl.glEnableVertexAttribArray(1)
        gl.glBindVertexArray(0)

    def draw(self, line_width=1.0):
        if not self.vao:
            return
        gl.glBindVertexArray(self.vao)
        if self.line_count:
            gl.glLineWidth(line_width)
            gl.glDrawArrays(gl.GL_LINES, 0, self.line_count)
        if self.point_count:
            gl.glEnable(gl.GL_PROGRAM_POINT_SIZE)
            gl.glDrawArrays(gl.GL_POINTS, self.line_count, self.point_count)
            gl.glDisable(gl.GL_PROGRAM_POINT_SIZE)
        gl.glBindVertexArray(0)

    def cleanup(self):
        if self.vbo:
            buf = gl.GLuint(self.vbo)
            gl.glDeleteBuffers(1, ctypes.byref(buf))
        if self.vao:
            vao = gl.GLuint(self.vao)
            gl.glDeleteVertexArrays(1, ctypes.byref(vao))


# ── Orbit camera ───────────────────────────────────────────────────────────

class OrbitCamera:
    def __init__(self):
        self.yaw = 0.0
        self.pitch = 0.5
        self.distance = 5000.0
        self.center = [0.0, 0.0, 0.0]
        self.near = 1.0
        self.far = 100000.0
        self.fov = 60

    def get_eye(self):
        cx, cy, cz = self.center
        ex = cx + self.distance * math.cos(self.pitch) * math.sin(self.yaw)
        ey = cy + self.distance * math.sin(self.pitch)
        ez = cz + self.distance * math.cos(self.pitch) * math.cos(self.yaw)
        return (ex, ey, ez)

    def get_view_matrix(self):
        ex, ey, ez = self.get_eye()
        cx, cy, cz = self.center
        return Mat4.look_at(Vec3(ex, ey, ez), Vec3(cx, cy, cz), Vec3(0, 1, 0))

    def get_projection(self, aspect):
        return Mat4.perspective_projection(aspect, self.near, self.far, self.fov)

    def orbit(self, dx, dy):
        self.yaw += dx * 0.01
        self.pitch += dy * 0.01
        self.pitch = max(-math.pi / 2 + 0.01, min(math.pi / 2 - 0.01, self.pitch))

    def pan(self, dx, dy):
        speed = self.distance * 0.002
        right_x = math.cos(self.yaw)
        right_z = -math.sin(self.yaw)
        up_x = -math.sin(self.pitch) * math.sin(self.yaw)
        up_y = math.cos(self.pitch)
        up_z = -math.sin(self.pitch) * math.cos(self.yaw)
        self.center[0] -= (dx * right_x + dy * up_x) * speed
        self.center[1] -= (dy * up_y) * speed
        self.center[2] -= (dx * right_z + dy * up_z) * speed

    def zoom(self, scroll_y):
        self.distance *= 0.9 ** scroll_y
        self.distance = max(1.0, self.distance)

    def focus_on(self, center, radius):
        self.center = list(center)
        self.distance = radius * 2.5 if radius > 0.001 else 5000.0

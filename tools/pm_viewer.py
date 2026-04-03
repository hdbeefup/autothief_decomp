"""
3D Model Viewer for AutoThief/CarJacker .PM files using pyglet 2.x modern OpenGL.
PM format: NGPM magic, 3D mesh with vertices, triangles (per-face UVs), materials (DDS textures).
ALF animation support: skeletal animation overlay with bone visualization.
"""

import ctypes
import glob
import math
import os
import struct
import sys
import time

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
        self.helpers = []        # list of (name, x, y, z) — parsed helpers
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
            raw = header_text[4:].split(b'\x00')[0].decode('ascii', errors='replace').strip()
            # Strip leading control characters (e.g. \x01 version byte)
            m.build_string = raw.lstrip('\x00\x01\x02\x03\x04\x05\x06\x07\x08').strip()

            # Binary header: 0x28 bytes (file offset 0x100-0x127)
            bin_header = f.read(0x28)
            m.flags = struct.unpack_from('<H', bin_header, 4)[0]
            vert_count = struct.unpack_from('<H', bin_header, 6)[0]
            tri_count = struct.unpack_from('<H', bin_header, 8)[0]
            mat_count = struct.unpack_from('<B', bin_header, 10)[0]
            helper_count = struct.unpack_from('<B', bin_header, 14)[0]

            # Vertices: vert_count * 12 bytes
            m._raw_vertices = []  # original positions for UV projection
            for _ in range(vert_count):
                x, y, z = struct.unpack('<fff', f.read(12))
                m._raw_vertices.append((x, y, z))
                m.vertices.append((-x, y, z))  # negate X: LH (D3D) → RH (OpenGL)

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
            # Winding is CW (D3D convention) — swap i1/i2 for CCW (OpenGL).
            # UV layout differs by flags:
            #   flags & 1: UVs as 6 floats at offset 8-31 (direct per-face UVs)
            #   !(flags & 1): 8 floats at offset 8-39 are a UV projection matrix
            use_float_uvs = bool(m.flags & 1)
            for _ in range(tri_count):
                data = f.read(44)
                i0, i1, i2 = struct.unpack_from('<HHH', data, 0)
                mat_idx = data[40]
                if use_float_uvs:
                    u1, v1, u2, v2, u3, v3 = struct.unpack_from('<ffffff', data, 8)
                else:
                    # UV projection matrix: 8 floats at offset 8
                    mx = struct.unpack_from('<8f', data, 8)
                    uvs = []
                    for vi in (i0, i1, i2):
                        px, py, pz = m._raw_vertices[vi] if vi < len(m._raw_vertices) else (0,0,0)
                        u = px*mx[0] + py*mx[1] + pz*mx[2] + mx[3]
                        v = px*mx[4] + py*mx[5] + pz*mx[6] + mx[7]
                        uvs.append((u, v))
                    u1, v1 = uvs[0]
                    u2, v2 = uvs[1]
                    u3, v3 = uvs[2]
                m.triangles.append((i0, i1, i2, u1, v1, u2, v2, u3, v3, 0, 0, 0, mat_idx))

            # Optional: extra triangle data (flags bit 2 set)
            if m.flags & 4:
                f.read(tri_count * 32)  # skip for now

            # Helpers BEFORE materials: 76 bytes each (name[32] + data[32] + pos[12])
            for _ in range(helper_count):
                hdata = f.read(76)
                hname = hdata[:32].split(b'\x00')[0].decode('ascii', errors='replace')
                hx, hy, hz = struct.unpack_from('<fff', hdata, 0x40)
                m.helpers.append((hname, -hx, hy, hz))  # negate X: LH → RH

            # Materials: mat_count * 80 bytes (texture path string)
            for _ in range(mat_count):
                mat_data = f.read(80)
                name = mat_data[:64].split(b'\x00')[0].decode('ascii', errors='replace')
                m.materials.append(name)

        return m


# ── ALF animation parser ───────────────────────────────────────────────────

class ALFBone:
    """A single bone's animation data."""
    __slots__ = ('name', 'keyframes')
    def __init__(self, name, keyframes):
        self.name = name          # str
        self.keyframes = keyframes  # list of 16-float tuples (4x4 row-major matrix)

class ALFAnimation:
    """Parsed .ALF animation data."""
    __slots__ = ('name', 'frame_count', 'bones', 'positions')

    @staticmethod
    def load(filepath):
        anim = ALFAnimation()
        with open(filepath, 'rb') as f:
            data = f.read()

        # Header: 0x44 bytes
        anim.name = data[0:32].split(b'\x00')[0].decode('ascii', errors='replace')
        flag = data[0x3F]
        anim.frame_count = struct.unpack_from('<H', data, 0x40)[0]
        bone_count = data[0x42]

        offset = 0x44
        anim.bones = []
        for _ in range(bone_count):
            # Bone header: 0x48 bytes
            bone_name = data[offset:offset+64].split(b'\x00')[0].decode('ascii', errors='replace')
            kf_count = struct.unpack_from('<H', data, offset + 0x40)[0]
            offset += 0x48

            # Keyframe data: kf_count * 0x40 bytes (each is 16 floats = 4x4 matrix)
            keyframes = []
            for _ in range(kf_count):
                mat = struct.unpack_from('<16f', data, offset)
                keyframes.append(mat)
                offset += 0x40
            anim.bones.append(ALFBone(bone_name, keyframes))

        # Root position track
        anim.positions = []
        for _ in range(anim.frame_count):
            if flag == 0:
                rec = data[offset:offset+0x1C]
                x, y, z = struct.unpack_from('<fff', rec, 0)
                flags = rec[24] if len(rec) > 24 else 0
                offset += 0x1C
            else:
                x, y, z, flags = struct.unpack_from('<fffI', data, offset)
                offset += 0x10
            anim.positions.append((-x, y, z))  # negate X: LH → RH

        return anim


def find_animations(pm_path):
    """Find matching animation folder for a .pm model file.
    Returns (character_name, {anim_name: filepath}) or (None, {}).
    """
    model_dir = os.path.dirname(os.path.abspath(pm_path))
    model_name = os.path.splitext(os.path.basename(pm_path))[0].lower()

    # Look for Animations/ folder as sibling to Models/
    for parent in [model_dir, os.path.dirname(model_dir)]:
        anim_root = os.path.join(parent, 'Animations')
        if not os.path.isdir(anim_root):
            continue
        # Case-insensitive match for character folder
        for entry in os.listdir(anim_root):
            if entry.lower() == model_name:
                char_dir = os.path.join(anim_root, entry)
                anims = {}
                for alf in os.listdir(char_dir):
                    if alf.lower().endswith('.alf'):
                        anim_name = os.path.splitext(alf)[0].lower()
                        anims[anim_name] = os.path.join(char_dir, alf)
                if anims:
                    return entry, anims
    return None, {}


def mat4x4_get_translation(mat):
    """Extract translation (column 3) from a row-major 4x4 matrix."""
    return (mat[3], mat[7], mat[11])


def mat4x4_multiply(a, b):
    """Multiply two row-major 4x4 matrices."""
    r = [0.0] * 16
    for row in range(4):
        for col in range(4):
            s = 0.0
            for k in range(4):
                s += a[row * 4 + k] * b[k * 4 + col]
            r[row * 4 + col] = s
    return tuple(r)


def mat4x4_invert_rigid(m):
    """Invert a rigid body transform (rotation + translation). Much simpler than general inverse."""
    # Transpose the 3x3 rotation part
    r = [0.0] * 16
    r[0] = m[0]; r[1] = m[4]; r[2] = m[8]
    r[4] = m[1]; r[5] = m[5]; r[6] = m[9]
    r[8] = m[2]; r[9] = m[6]; r[10] = m[10]
    # New translation = -R^T * t
    tx, ty, tz = m[3], m[7], m[11]
    r[3]  = -(r[0]*tx + r[1]*ty + r[2]*tz)
    r[7]  = -(r[4]*tx + r[5]*ty + r[6]*tz)
    r[11] = -(r[8]*tx + r[9]*ty + r[10]*tz)
    r[15] = 1.0
    return tuple(r)


def mat4x4_transform_point(m, px, py, pz):
    """Transform a point by a row-major 4x4 matrix."""
    ox = m[0]*px + m[1]*py + m[2]*pz + m[3]
    oy = m[4]*px + m[5]*py + m[6]*pz + m[7]
    oz = m[8]*px + m[9]*py + m[10]*pz + m[11]
    return (ox, oy, oz)


# Biped bone hierarchy (parent → children) for 3ds Max Biped skeleton
BIPED_HIERARCHY = {
    'Bip01': 'Bip01 Pelvis',
    'Bip01 Pelvis': 'Bip01 Spine',
    'Bip01 Spine': 'Bip01 Spine1',
    'Bip01 Spine1': 'Bip01 Spine2',
    'Bip01 Spine2': 'Bip01 Neck',
    'Bip01 Neck': 'Bip01 Head',
    # Left arm
    'Bip01 L Clavicle': 'Bip01 L UpperArm',
    'Bip01 L UpperArm': 'Bip01 L Forearm',
    'Bip01 L Forearm': 'Bip01 L Hand',
    # Right arm
    'Bip01 R Clavicle': 'Bip01 R UpperArm',
    'Bip01 R UpperArm': 'Bip01 R Forearm',
    'Bip01 R Forearm': 'Bip01 R Hand',
    # Left leg
    'Bip01 L Thigh': 'Bip01 L Calf',
    'Bip01 L Calf': 'Bip01 L Foot',
    'Bip01 L Foot': 'Bip01 L Toe0',
    # Right leg
    'Bip01 R Thigh': 'Bip01 R Calf',
    'Bip01 R Calf': 'Bip01 R Foot',
    'Bip01 R Foot': 'Bip01 R Toe0',
}

# Bones that branch off Spine2
SPINE2_CHILDREN = ['Bip01 Neck', 'Bip01 L Clavicle', 'Bip01 R Clavicle']
# Bones that branch off Pelvis
PELVIS_CHILDREN = ['Bip01 Spine', 'Bip01 L Thigh', 'Bip01 R Thigh']


def build_bone_connections(bone_names):
    """Build list of (parent_name, child_name) pairs from available bones."""
    name_set = set(bone_names)
    connections = []

    # Pelvis branches
    for child in PELVIS_CHILDREN:
        if 'Bip01 Pelvis' in name_set and child in name_set:
            connections.append(('Bip01 Pelvis', child))

    # Spine2 branches
    for child in SPINE2_CHILDREN:
        if 'Bip01 Spine2' in name_set and child in name_set:
            connections.append(('Bip01 Spine2', child))

    # Chain connections
    for parent, child in BIPED_HIERARCHY.items():
        if parent in name_set and child in name_set:
            if (parent, child) not in connections:
                connections.append((parent, child))

    # Finger chains
    for side in ('L', 'R'):
        for finger_idx in range(3):
            for knuckle in range(3):
                parent_name = f'Bip01 {side} Finger{finger_idx}{knuckle}'
                child_name = f'Bip01 {side} Finger{finger_idx}{knuckle + 1}'
                if parent_name in name_set and child_name in name_set:
                    connections.append((parent_name, child_name))
            # Hand → first knuckle
            hand = f'Bip01 {side} Hand'
            first = f'Bip01 {side} Finger{finger_idx}0'
            if hand in name_set and first in name_set:
                connections.append((hand, first))

    return connections


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

# Simple shader for skeleton lines/points
SKEL_VERTEX_SHADER = """#version 330 core
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

SKEL_FRAGMENT_SHADER = """#version 330 core
in vec3 v_color;
out vec4 frag_color;

void main() {
    frag_color = vec4(v_color, 1.0);
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

        # Animation state
        self.anim_available = {}     # {name: filepath}
        self.anim_names = []         # sorted list of animation names
        self.anim_char_name = None   # character name from Animations/ folder
        self.current_anim = None     # loaded ALFAnimation
        self.current_anim_idx = -1   # index into anim_names (-1 = none)
        self.anim_playing = False
        self.anim_time = 0.0
        self.anim_fps = 30.0
        self.anim_last_time = 0.0
        self.show_skeleton = True

        # Skinning data
        self.vertex_bone_map = []    # per-vertex bone index (nearest-bone assignment)
        self.bind_inv = []           # inverse bind pose matrices

        # Skeleton GL objects
        self.skel_vao = 0
        self.skel_vbo = 0
        self.skel_line_count = 0
        self.skel_point_count = 0
        self.skel_program = 0

        # Helper visualization
        self.show_helpers = True
        self.helper_vao = 0
        self.helper_vbo = 0
        self.helper_vert_count = 0
        self.helper_labels = []      # list of pyglet.text.Label

        # Compile shaders
        self._compile_shaders()
        self._compile_skel_shaders()

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

    def _compile_skel_shaders(self):
        vs = gl.GLuint(gl.glCreateShader(gl.GL_VERTEX_SHADER))
        src = SKEL_VERTEX_SHADER.encode('utf-8')
        buf = ctypes.create_string_buffer(src)
        ptr = ctypes.cast(buf, ctypes.POINTER(ctypes.c_char))
        length = gl.GLint(len(src))
        gl.glShaderSource(vs, 1, ctypes.byref(ptr), ctypes.byref(length))
        gl.glCompileShader(vs)

        fs = gl.GLuint(gl.glCreateShader(gl.GL_FRAGMENT_SHADER))
        src = SKEL_FRAGMENT_SHADER.encode('utf-8')
        buf = ctypes.create_string_buffer(src)
        ptr = ctypes.cast(buf, ctypes.POINTER(ctypes.c_char))
        length = gl.GLint(len(src))
        gl.glShaderSource(fs, 1, ctypes.byref(ptr), ctypes.byref(length))
        gl.glCompileShader(fs)

        self.skel_program = gl.glCreateProgram()
        gl.glAttachShader(self.skel_program, vs)
        gl.glAttachShader(self.skel_program, fs)
        gl.glLinkProgram(self.skel_program)

        gl.glDeleteShader(vs)
        gl.glDeleteShader(fs)

        self.su_projection = gl.glGetUniformLocation(self.skel_program, b"projection")
        self.su_view = gl.glGetUniformLocation(self.skel_program, b"view")

    def _discover_animations(self):
        """Find animations matching the current model name."""
        self.anim_char_name, self.anim_available = find_animations(self.pm_path)
        self.anim_names = sorted(self.anim_available.keys())
        self.current_anim = None
        self.current_anim_idx = -1
        self.anim_playing = False
        if self.anim_names:
            print(f"  Animations found ({self.anim_char_name}): {', '.join(self.anim_names)}")
        else:
            print(f"  No animations found for this model")

    def _build_helper_geometry(self):
        """Build cross markers for helpers using the skeleton shader."""
        if not self.model or not self.model.helpers:
            self.helper_vert_count = 0
            self.helper_labels = []
            return

        cross_size = 3.0
        verts = []  # position(3) + color(3) per vertex
        self.helper_labels = []

        for hname, hx, hy, hz in self.model.helpers:
            # Cross marker: 3 lines (6 verts) in cyan
            r, g, b = 0.2, 0.9, 1.0
            for axis in range(3):
                for sign in (-1, 1):
                    dx = cross_size * sign if axis == 0 else 0
                    dy = cross_size * sign if axis == 1 else 0
                    dz = cross_size * sign if axis == 2 else 0
                    verts.extend([hx + dx, hy + dy, hz + dz, r, g, b])

            # Store label info for 2D text rendering
            self.helper_labels.append((hname, hx, hy, hz))

        self.helper_vert_count = len(verts) // 6

        if not verts:
            return

        if not self.helper_vao:
            vao = gl.GLuint()
            gl.glGenVertexArrays(1, ctypes.byref(vao))
            self.helper_vao = vao.value
            vbo = gl.GLuint()
            gl.glGenBuffers(1, ctypes.byref(vbo))
            self.helper_vbo = vbo.value

        gl.glBindVertexArray(self.helper_vao)
        gl.glBindBuffer(gl.GL_ARRAY_BUFFER, self.helper_vbo)
        data = (gl.GLfloat * len(verts))(*verts)
        gl.glBufferData(gl.GL_ARRAY_BUFFER, ctypes.sizeof(data), data, gl.GL_STATIC_DRAW)
        stride = 6 * 4
        gl.glVertexAttribPointer(0, 3, gl.GL_FLOAT, gl.GL_FALSE, stride, None)
        gl.glEnableVertexAttribArray(0)
        offset_ptr = ctypes.c_void_p(3 * 4)
        gl.glVertexAttribPointer(1, 3, gl.GL_FLOAT, gl.GL_FALSE, stride, offset_ptr)
        gl.glEnableVertexAttribArray(1)
        gl.glBindVertexArray(0)

        print(f"  Helpers: {len(self.model.helpers)}")
        for hname, hx, hy, hz in self.model.helpers:
            print(f"    {hname}: ({hx:.1f}, {hy:.1f}, {hz:.1f})")

    def _compute_bone_assignments(self):
        """Assign each model vertex to its nearest bone using frame 0 positions."""
        if not self.current_anim or not self.model:
            self.vertex_bone_map = []
            return
        # Get bone positions at frame 0 (bind pose)
        bone_positions = []
        for bone in self.current_anim.bones:
            if bone.keyframes:
                mat = bone.keyframes[0]
                tx, ty, tz = mat[3], mat[7], mat[11]
                bone_positions.append((-tx, ty, tz))  # LH → RH
            else:
                bone_positions.append((0, 0, 0))

        # For each original vertex, find nearest bone
        self.vertex_bone_map = []
        for vx, vy, vz in self.model.vertices:
            best_dist = float('inf')
            best_bone = 0
            for bi, (bx, by, bz) in enumerate(bone_positions):
                dx = vx - bx
                dy = vy - by
                dz = vz - bz
                d = dx*dx + dy*dy + dz*dz
                if d < best_dist:
                    best_dist = d
                    best_bone = bi
            self.vertex_bone_map.append(best_bone)

    def _compute_bind_pose_inverses(self):
        """Compute inverse bind pose matrices from frame 0."""
        self.bind_inv = []
        if not self.current_anim:
            return
        for bone in self.current_anim.bones:
            if bone.keyframes:
                mat = bone.keyframes[0]
                self.bind_inv.append(mat4x4_invert_rigid(mat))
            else:
                self.bind_inv.append((1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1))

    def _deform_mesh(self, frame_float):
        """Apply bone transforms to vertex positions and upload to GPU."""
        if not self.current_anim or not self.vertex_bone_map or not self.bind_inv:
            return
        anim = self.current_anim
        frame_int = int(frame_float) % max(1, anim.frame_count)

        # Get current frame matrices
        cur_matrices = []
        for bi, bone in enumerate(anim.bones):
            if bone.keyframes:
                kf_idx = frame_int % len(bone.keyframes)
                cur_matrices.append(bone.keyframes[kf_idx])
            else:
                cur_matrices.append((1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1))

        # Precompute delta matrices: cur * inv_bind
        deltas = []
        for bi in range(len(anim.bones)):
            deltas.append(mat4x4_multiply(cur_matrices[bi], self.bind_inv[bi]))

        # Transform vertices
        m = self.model
        has_per_vertex_normals = bool(m.normals)
        from collections import defaultdict
        tris_by_mat = defaultdict(list)
        for tri in m.triangles:
            tris_by_mat[tri[12]].append(tri)

        positions = []
        normals = []
        uvs = []

        for mi in sorted(tris_by_mat.keys()):
            for tri in tris_by_mat[mi]:
                i0, i1, i2 = tri[0], tri[1], tri[2]
                u1, v1, u2, v2, u3, v3 = tri[3], tri[4], tri[5], tri[6], tri[7], tri[8]

                for vi in (i0, i1, i2):
                    p = m.vertices[vi] if vi < len(m.vertices) else (0,0,0)
                    bone_idx = self.vertex_bone_map[vi] if vi < len(self.vertex_bone_map) else 0
                    delta = deltas[bone_idx]
                    # Transform from RH back to original, apply delta, convert back
                    # Original vertices are already in RH space (-x, y, z)
                    # Delta matrices are in LH space, so convert point to LH, transform, convert back
                    lh_x, lh_y, lh_z = -p[0], p[1], p[2]
                    tx, ty, tz = mat4x4_transform_point(delta, lh_x, lh_y, lh_z)
                    positions.extend((-tx, ty, tz))

                if has_per_vertex_normals:
                    for vi in (i0, i1, i2):
                        n = m.normals[vi] if vi < len(m.normals) else (0,1,0)
                        normals.extend(n)
                else:
                    p0 = positions[-9:-6]
                    p1 = positions[-6:-3]
                    p2 = positions[-3:]
                    n = _compute_face_normal(p0, p1, p2)
                    normals.extend(n * 3)

                uvs.extend([u1, 1-v1, u2, 1-v2, u3, 1-v3])

        # Upload to GPU
        if positions:
            gl.glBindVertexArray(self.vao)
            gl.glBindBuffer(gl.GL_ARRAY_BUFFER, self.vbo_pos)
            pos_data = (gl.GLfloat * len(positions))(*positions)
            gl.glBufferSubData(gl.GL_ARRAY_BUFFER, 0, ctypes.sizeof(pos_data), pos_data)
            gl.glBindBuffer(gl.GL_ARRAY_BUFFER, self.vbo_nrm)
            nrm_data = (gl.GLfloat * len(normals))(*normals)
            gl.glBufferSubData(gl.GL_ARRAY_BUFFER, 0, ctypes.sizeof(nrm_data), nrm_data)
            gl.glBindVertexArray(0)

    def _load_animation(self, idx):
        """Load animation by index into anim_names."""
        if not self.anim_names or idx < 0 or idx >= len(self.anim_names):
            self.current_anim = None
            self.current_anim_idx = -1
            self.anim_playing = False
            self._update_info_label()
            return
        name = self.anim_names[idx]
        filepath = self.anim_available[name]
        try:
            self.current_anim = ALFAnimation.load(filepath)
            self.current_anim_idx = idx
            self.anim_time = 0.0
            self.anim_last_time = time.monotonic()
            self.anim_playing = True
            print(f"  Playing: {name} ({self.current_anim.frame_count} frames, "
                  f"{len(self.current_anim.bones)} bones)")
            self._compute_bind_pose_inverses()
            self._compute_bone_assignments()
            self._update_skeleton_geometry(0)
        except Exception as e:
            print(f"  Error loading animation '{name}': {e}")
            self.current_anim = None
            self.current_anim_idx = idx
            self.anim_playing = False
        self._update_info_label()

    def _update_info_label(self):
        fname = os.path.basename(self.pm_path)
        m = self.model
        info = f"{fname}  |  {len(m.vertices)} verts, {len(m.triangles)} tris, {len(m.materials)} mats, {len(m.helpers)} helpers"
        if self.anim_names:
            anim_name = self.anim_names[self.current_anim_idx] if self.current_anim_idx >= 0 else "none"
            status = "playing" if self.anim_playing else "paused"
            if self.current_anim_idx < 0:
                status = ""
            info += f"\nAnim: {anim_name} [{self.current_anim_idx+1}/{len(self.anim_names)}]"
            if status:
                frame = int(self.anim_time) if self.current_anim else 0
                total = self.current_anim.frame_count if self.current_anim else 0
                info += f"  {status}  frame {frame}/{total}"
            info += f"\n[A/D] prev/next anim  [Space] play/pause  [S] skeleton  [H] helpers"
        self.info_label.text = info
        self.info_label.width = self.window.width - 16

    def _get_bone_positions(self, frame_float):
        """Get world-space positions for all bones at a given fractional frame."""
        anim = self.current_anim
        if not anim:
            return {}
        positions = {}
        frame_int = int(frame_float) % max(1, anim.frame_count)
        for bone in anim.bones:
            if not bone.keyframes:
                continue
            kf_idx = frame_int % len(bone.keyframes)
            mat = bone.keyframes[kf_idx]
            # Translation is in column 3 of row-major matrix (indices 3, 7, 11)
            tx, ty, tz = mat[3], mat[7], mat[11]
            positions[bone.name] = (-tx, ty, tz)  # negate X: LH → RH
        return positions

    def _update_skeleton_geometry(self, frame_float):
        """Rebuild skeleton line/point VBO for the current frame."""
        bone_positions = self._get_bone_positions(frame_float)
        if not bone_positions:
            self.skel_line_count = 0
            self.skel_point_count = 0
            return

        bone_names = [b.name for b in self.current_anim.bones]
        connections = build_bone_connections(bone_names)

        # Build vertex data: position(3) + color(3) per vertex
        line_verts = []
        point_verts = []

        # Lines: yellow
        for parent_name, child_name in connections:
            if parent_name in bone_positions and child_name in bone_positions:
                p = bone_positions[parent_name]
                c = bone_positions[child_name]
                line_verts.extend([p[0], p[1], p[2], 1.0, 0.9, 0.2])
                line_verts.extend([c[0], c[1], c[2], 1.0, 0.9, 0.2])

        # Points: red for joints
        for name, pos in bone_positions.items():
            point_verts.extend([pos[0], pos[1], pos[2], 1.0, 0.3, 0.3])

        self.skel_line_count = len(line_verts) // 6
        self.skel_point_count = len(point_verts) // 6

        all_verts = line_verts + point_verts
        if not all_verts:
            return

        # Upload to GPU
        if not self.skel_vao:
            vao = gl.GLuint()
            gl.glGenVertexArrays(1, ctypes.byref(vao))
            self.skel_vao = vao.value
            vbo = gl.GLuint()
            gl.glGenBuffers(1, ctypes.byref(vbo))
            self.skel_vbo = vbo.value

        gl.glBindVertexArray(self.skel_vao)
        gl.glBindBuffer(gl.GL_ARRAY_BUFFER, self.skel_vbo)
        data = (gl.GLfloat * len(all_verts))(*all_verts)
        gl.glBufferData(gl.GL_ARRAY_BUFFER, ctypes.sizeof(data), data, gl.GL_DYNAMIC_DRAW)
        stride = 6 * 4  # 6 floats * 4 bytes
        gl.glVertexAttribPointer(0, 3, gl.GL_FLOAT, gl.GL_FALSE, stride, None)
        gl.glEnableVertexAttribArray(0)
        offset_ptr = ctypes.c_void_p(3 * 4)
        gl.glVertexAttribPointer(1, 3, gl.GL_FLOAT, gl.GL_FALSE, stride, offset_ptr)
        gl.glEnableVertexAttribArray(1)
        gl.glBindVertexArray(0)

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
                uvs.extend([u1, 1-v1, u2, 1-v2, u3, 1-v3])

            vert_count = (len(positions) // 3) - start_vert
            if vert_count > 0:
                self.mat_groups.append((tex_id, start_vert, vert_count))

        self.vertex_count = len(positions) // 3
        print(f"  Total render vertices: {self.vertex_count}")

        # Discover animations
        self._discover_animations()
        self._build_helper_geometry()
        self._update_info_label()

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
        gl.glCullFace(gl.GL_BACK)

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

        # Advance animation
        if self.anim_playing and self.current_anim:
            now = time.monotonic()
            dt = now - self.anim_last_time
            self.anim_last_time = now
            self.anim_time += dt * self.anim_fps
            if self.anim_time >= self.current_anim.frame_count:
                self.anim_time -= self.current_anim.frame_count
            self._update_skeleton_geometry(self.anim_time)
            self._deform_mesh(self.anim_time)
            self._update_info_label()

        # Draw skeleton overlay
        if self.show_skeleton and self.current_anim and self.skel_vao and (self.skel_line_count or self.skel_point_count):
            gl.glUseProgram(self.skel_program)
            gl.glUniformMatrix4fv(self.su_projection, 1, gl.GL_FALSE, proj_arr)
            gl.glUniformMatrix4fv(self.su_view, 1, gl.GL_FALSE, view_arr)
            gl.glBindVertexArray(self.skel_vao)
            gl.glDisable(gl.GL_DEPTH_TEST)

            if self.skel_line_count:
                gl.glLineWidth(2.0)
                gl.glDrawArrays(gl.GL_LINES, 0, self.skel_line_count)

            if self.skel_point_count:
                gl.glEnable(gl.GL_PROGRAM_POINT_SIZE)
                gl.glDrawArrays(gl.GL_POINTS, self.skel_line_count, self.skel_point_count)
                gl.glDisable(gl.GL_PROGRAM_POINT_SIZE)

            gl.glEnable(gl.GL_DEPTH_TEST)
            gl.glBindVertexArray(0)
            gl.glUseProgram(0)

        # Draw helper markers
        if self.show_helpers and self.helper_vao and self.helper_vert_count:
            gl.glUseProgram(self.skel_program)
            gl.glUniformMatrix4fv(self.su_projection, 1, gl.GL_FALSE, proj_arr)
            gl.glUniformMatrix4fv(self.su_view, 1, gl.GL_FALSE, view_arr)
            gl.glBindVertexArray(self.helper_vao)
            gl.glDisable(gl.GL_DEPTH_TEST)
            gl.glLineWidth(2.0)
            gl.glDrawArrays(gl.GL_LINES, 0, self.helper_vert_count)
            gl.glEnable(gl.GL_DEPTH_TEST)
            gl.glBindVertexArray(0)
            gl.glUseProgram(0)

        # Draw info text overlay and helper labels
        gl.glDisable(gl.GL_DEPTH_TEST)
        gl.glDisable(gl.GL_CULL_FACE)
        gl.glEnable(gl.GL_BLEND)
        gl.glBlendFunc(gl.GL_SRC_ALPHA, gl.GL_ONE_MINUS_SRC_ALPHA)
        self.info_label.draw()

        # Draw helper name labels projected to screen
        if self.show_helpers and self.helper_labels:
            self._draw_helper_labels(proj, view)

        gl.glDisable(gl.GL_BLEND)
        gl.glEnable(gl.GL_CULL_FACE)
        gl.glEnable(gl.GL_DEPTH_TEST)

    def _draw_helper_labels(self, proj, view):
        """Project helper positions to screen and draw name labels."""
        w, h = self.window.width, self.window.height
        # Compute MVP manually for projection
        mvp = proj @ view
        for hname, hx, hy, hz in self.helper_labels:
            # Project 3D → clip → NDC → screen
            cx = mvp[0]*hx + mvp[4]*hy + mvp[8]*hz + mvp[12]
            cy = mvp[1]*hx + mvp[5]*hy + mvp[9]*hz + mvp[13]
            cw = mvp[3]*hx + mvp[7]*hy + mvp[11]*hz + mvp[15]
            if cw <= 0.01:
                continue  # behind camera
            ndx = cx / cw
            ndy = cy / cw
            sx = int((ndx * 0.5 + 0.5) * w)
            sy = int((ndy * 0.5 + 0.5) * h)
            if 0 <= sx < w and 0 <= sy < h:
                label = pyglet.text.Label(
                    hname, font_size=9, x=sx + 8, y=sy,
                    color=(50, 230, 255, 200), anchor_y='center')
                label.draw()

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
        elif symbol == pyglet.window.key.S:
            self.show_skeleton = not self.show_skeleton
        elif symbol == pyglet.window.key.H:
            self.show_helpers = not self.show_helpers
        elif symbol == pyglet.window.key.SPACE:
            if self.current_anim:
                self.anim_playing = not self.anim_playing
                if self.anim_playing:
                    self.anim_last_time = time.monotonic()
                self._update_info_label()
        elif symbol == pyglet.window.key.D:
            if self.anim_names:
                idx = (self.current_anim_idx + 1) % len(self.anim_names)
                self._load_animation(idx)
        elif symbol == pyglet.window.key.A:
            if self.anim_names:
                idx = (self.current_anim_idx - 1) % len(self.anim_names)
                self._load_animation(idx)

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
        # Clean up skeleton GL objects
        if self.skel_vao:
            vao = gl.GLuint(self.skel_vao)
            gl.glDeleteVertexArrays(1, ctypes.byref(vao))
            self.skel_vao = 0
        if self.skel_vbo:
            buf = gl.GLuint(self.skel_vbo)
            gl.glDeleteBuffers(1, ctypes.byref(buf))
            self.skel_vbo = 0
        # Clean up helper GL objects
        if self.helper_vao:
            vao = gl.GLuint(self.helper_vao)
            gl.glDeleteVertexArrays(1, ctypes.byref(vao))
            self.helper_vao = 0
        if self.helper_vbo:
            buf = gl.GLuint(self.helper_vbo)
            gl.glDeleteBuffers(1, ctypes.byref(buf))
            self.helper_vbo = 0
        self.helper_labels = []
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
        print("Controls: LMB=orbit, RMB=pan, Scroll=zoom, W=wireframe, R=reset, H=helpers")
        print("  A/D=prev/next animation, Space=play/pause, S=toggle skeleton")

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
        window = pyglet.window.Window(1280, 800, f"PM Viewer - {filename}", config=config, resizable=True, file_drops=True)
    except pyglet.window.NoSuchConfigException:
        config = pyglet.gl.Config(double_buffer=True, depth_size=24)
        window = pyglet.window.Window(1280, 800, f"PM Viewer - {filename}", config=config, resizable=True, file_drops=True)

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

    def update(dt):
        # Trigger redraw when animation is playing
        if viewer and viewer.anim_playing:
            pass  # on_draw handles the timing

    pyglet.clock.schedule_interval(update, 1/60.0)
    pyglet.app.run()


if __name__ == '__main__':
    main()

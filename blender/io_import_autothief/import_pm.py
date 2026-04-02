"""
PM model importer for Blender.
AutoThief / CarJacker (Kozmogames, 2005) .PM model format.
"""

import os
import struct
import math

import bpy
import bmesh
from bpy_extras.io_utils import ImportHelper
from bpy.props import BoolProperty, StringProperty
from mathutils import Matrix, Vector


# ── PM Parser ──────────────────────────────────────────────────────────────

class PMModel:
    def __init__(self):
        self.build_string = ""
        self.flags = 0
        self.vertices = []       # (x, y, z) in original D3D coords
        self.triangles = []      # (i0, i1, i2, u0, v0, u1, v1, u2, v2, mat_idx)
        self.materials = []      # texture path strings
        self.helpers = []        # raw 76-byte blocks
        self.normals = []        # per-vertex (nx, ny, nz)
        self.vertex_indices = [] # per-vertex uint16

    @staticmethod
    def load(filepath):
        m = PMModel()
        with open(filepath, 'rb') as f:
            # Text header: 0x100 bytes
            header_text = f.read(0x100)
            if header_text[:4] != b'NGPM':
                raise ValueError(f"Not a PM file: bad magic {header_text[:4]!r}")
            raw = header_text[4:].split(b'\x00')[0].decode('ascii', errors='replace').strip()
            m.build_string = raw.lstrip('\x00\x01\x02\x03\x04\x05\x06\x07\x08').strip()

            # Binary header: 0x28 bytes
            bin_header = f.read(0x28)
            m.flags = struct.unpack_from('<H', bin_header, 4)[0]
            vert_count = struct.unpack_from('<H', bin_header, 6)[0]
            tri_count = struct.unpack_from('<H', bin_header, 8)[0]
            mat_count = struct.unpack_from('<B', bin_header, 10)[0]
            helper_count = struct.unpack_from('<B', bin_header, 14)[0]

            # Vertices
            for _ in range(vert_count):
                x, y, z = struct.unpack('<fff', f.read(12))
                m.vertices.append((x, y, z))

            # Optional vertex indices (flags bit 0 clear)
            if not (m.flags & 1):
                for _ in range(vert_count):
                    idx, = struct.unpack('<H', f.read(2))
                    m.vertex_indices.append(idx)

            # Optional per-vertex normals (flags bit 1 set)
            if m.flags & 2:
                for _ in range(vert_count):
                    nx, ny, nz = struct.unpack('<fff', f.read(12))
                    m.normals.append((nx, ny, nz))

            # Triangles: tri_count * 44 bytes
            use_float_uvs = bool(m.flags & 1)
            for _ in range(tri_count):
                data = f.read(44)
                i0, i1, i2 = struct.unpack_from('<HHH', data, 0)
                mat_idx = data[40]
                if use_float_uvs:
                    u0, v0, u1, v1, u2, v2 = struct.unpack_from('<ffffff', data, 8)
                else:
                    mx = struct.unpack_from('<8f', data, 8)
                    uvs = []
                    for vi in (i0, i1, i2):
                        px, py, pz = m.vertices[vi] if vi < len(m.vertices) else (0, 0, 0)
                        u = px * mx[0] + py * mx[1] + pz * mx[2] + mx[3]
                        v = px * mx[4] + py * mx[5] + pz * mx[6] + mx[7]
                        uvs.append((u, v))
                    u0, v0 = uvs[0]
                    u1, v1 = uvs[1]
                    u2, v2 = uvs[2]
                m.triangles.append((i0, i1, i2, u0, v0, u1, v1, u2, v2, mat_idx))

            # Extra triangle data (flags bit 2)
            if m.flags & 4:
                f.read(tri_count * 32)

            # Helpers
            for _ in range(helper_count):
                m.helpers.append(f.read(76))

            # Materials
            for _ in range(mat_count):
                mat_data = f.read(80)
                name = mat_data[:64].split(b'\x00')[0].decode('ascii', errors='replace')
                m.materials.append(name)

        return m


# ── Texture finder ─────────────────────────────────────────────────────────

def find_texture(textures_root, tex_name):
    """Find a DDS texture file with case-insensitive path matching."""
    if not textures_root:
        return None
    dds_path = os.path.join(textures_root, tex_name + '.dds')
    if os.path.exists(dds_path):
        return dds_path
    # Case-insensitive search
    parts = tex_name.replace('\\', '/').split('/')
    search_dir = textures_root
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


def find_textures_root(pm_path):
    """Auto-detect Textures/ directory relative to the model file."""
    model_dir = os.path.dirname(os.path.abspath(pm_path))
    for parent in [model_dir, os.path.dirname(model_dir)]:
        candidate = os.path.join(parent, 'Textures')
        if os.path.isdir(candidate):
            return candidate
    return None


# ── D3D → Blender coordinate conversion ───────────────────────────────────
# D3D left-handed Y-up: X=right, Y=up, Z=forward
# Blender right-handed Z-up: X=right, Y=forward, Z=up
# Axis mapping: D3D.Y→Blender.Z, D3D.Z→Blender.Y, negate X for handedness
# Conversion: (x, y, z) → (-x, z, y)

def d3d_to_blender(x, y, z):
    return (-x, z, y)


def d3d_normal_to_blender(nx, ny, nz):
    return (-nx, nz, ny)


# ── Import logic ──────────────────────────────────────────────────────────

def import_pm(filepath, context, import_textures=True):
    pm = PMModel.load(filepath)
    model_name = os.path.splitext(os.path.basename(filepath))[0]

    # Convert vertices to Blender coords
    bl_verts = [d3d_to_blender(*v) for v in pm.vertices]

    # Build face list (swap i1↔i2 for CW→CCW winding)
    faces = []
    face_mat_indices = []
    face_uvs = []  # per-face list of [(u0,v0), (u1,v1), (u2,v2)]
    for tri in pm.triangles:
        i0, i1, i2 = tri[0], tri[2], tri[1]  # swap 1↔2 for CW→CCW winding
        faces.append((i0, i1, i2))
        face_mat_indices.append(tri[9])
        # UVs must follow the swapped face order; flip V
        face_uvs.append([
            (tri[3], 1.0 - tri[4]),   # UV for orig i0 (loop 0)
            (tri[7], 1.0 - tri[8]),   # UV for orig i2 (loop 1, was swapped)
            (tri[5], 1.0 - tri[6]),   # UV for orig i1 (loop 2, was swapped)
        ])

    # Create mesh
    mesh = bpy.data.meshes.new(model_name)
    mesh.from_pydata(bl_verts, [], faces)

    # Materials
    textures_root = find_textures_root(filepath) if import_textures else None
    for mat_name in pm.materials:
        bl_mat = bpy.data.materials.new(name=mat_name.replace('\\', '/'))
        bl_mat.use_nodes = True
        bsdf = bl_mat.node_tree.nodes.get('Principled BSDF')

        if import_textures and textures_root:
            tex_path = find_texture(textures_root, mat_name)
            if tex_path and bsdf:
                tex_node = bl_mat.node_tree.nodes.new('ShaderNodeTexImage')
                try:
                    tex_node.image = bpy.data.images.load(tex_path)
                    bl_mat.node_tree.links.new(
                        bsdf.inputs['Base Color'], tex_node.outputs['Color'])
                except Exception:
                    pass

        mesh.materials.append(bl_mat)

    # Assign material indices per face
    for fi, mat_idx in enumerate(face_mat_indices):
        if fi < len(mesh.polygons):
            mesh.polygons[fi].material_index = min(mat_idx, len(pm.materials) - 1)

    # UV layer
    uv_layer = mesh.uv_layers.new(name="UVMap")
    for fi, poly in enumerate(mesh.polygons):
        for li, loop_idx in enumerate(poly.loop_indices):
            if fi < len(face_uvs) and li < len(face_uvs[fi]):
                uv_layer.data[loop_idx].uv = face_uvs[fi][li]

    # Normals
    if pm.normals:
        bl_normals = [d3d_normal_to_blender(*n) for n in pm.normals]
        mesh.normals_split_custom_set_from_vertices(bl_normals)
        mesh.use_auto_smooth = True

    mesh.update()
    mesh.validate()

    # Create object and link to scene
    obj = bpy.data.objects.new(model_name, mesh)
    context.collection.objects.link(obj)
    context.view_layer.objects.active = obj
    obj.select_set(True)

    print(f"Imported PM: {model_name} ({len(pm.vertices)} verts, "
          f"{len(pm.triangles)} tris, {len(pm.materials)} mats)")

    return obj


# ── Operator ──────────────────────────────────────────────────────────────

class IMPORT_OT_autothief_pm(bpy.types.Operator, ImportHelper):
    bl_idname = "import_mesh.autothief_pm"
    bl_label = "Import AutoThief PM"
    bl_options = {'REGISTER', 'UNDO'}

    filename_ext = ".pm"
    filter_glob: StringProperty(default="*.pm;*.PM", options={'HIDDEN'})

    import_textures: BoolProperty(
        name="Import Textures",
        description="Auto-find and assign DDS textures from Textures/ directory",
        default=True,
    )

    def execute(self, context):
        try:
            import_pm(self.filepath, context, self.import_textures)
            return {'FINISHED'}
        except Exception as e:
            self.report({'ERROR'}, str(e))
            return {'CANCELLED'}

    def draw(self, context):
        layout = self.layout
        layout.prop(self, "import_textures")

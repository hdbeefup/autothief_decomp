"""
ALF animation importer for Blender.
AutoThief / CarJacker (Kozmogames, 2005) .ALF skeletal animation format.
"""

import os
import struct
import math

import bpy
from bpy_extras.io_utils import ImportHelper
from bpy.props import StringProperty
from mathutils import Matrix, Vector, Quaternion


# ── ALF Parser ─────────────────────────────────────────────────────────────

class ALFBone:
    __slots__ = ('name', 'keyframes')
    def __init__(self, name, keyframes):
        self.name = name
        self.keyframes = keyframes  # list of 16-float tuples (row-major 4x4)


class ALFAnimation:
    __slots__ = ('name', 'frame_count', 'bones', 'positions')

    @staticmethod
    def load(filepath):
        anim = ALFAnimation()
        with open(filepath, 'rb') as f:
            data = f.read()

        anim.name = data[0:32].split(b'\x00')[0].decode('ascii', errors='replace')
        flag = data[0x3F]
        anim.frame_count = struct.unpack_from('<H', data, 0x40)[0]
        bone_count = data[0x42]

        offset = 0x44
        anim.bones = []
        for _ in range(bone_count):
            bone_name = data[offset:offset + 64].split(b'\x00')[0].decode('ascii', errors='replace')
            kf_count = struct.unpack_from('<H', data, offset + 0x40)[0]
            offset += 0x48

            keyframes = []
            for _ in range(kf_count):
                mat = struct.unpack_from('<16f', data, offset)
                keyframes.append(mat)
                offset += 0x40
            anim.bones.append(ALFBone(bone_name, keyframes))

        anim.positions = []
        for _ in range(anim.frame_count):
            if flag == 0:
                x, y, z = struct.unpack_from('<fff', data, offset)
                offset += 0x1C
            else:
                x, y, z = struct.unpack_from('<fff', data, offset)
                offset += 0x10
            anim.positions.append((x, y, z))

        return anim


# ── Bone hierarchy ─────────────────────────────────────────────────────────

# Parent → list of children
BIPED_CHILDREN = {
    'Bip01 Pelvis': ['Bip01 Spine', 'Bip01 L Thigh', 'Bip01 R Thigh'],
    'Bip01 Spine': ['Bip01 Spine1'],
    'Bip01 Spine1': ['Bip01 Spine2'],
    'Bip01 Spine2': ['Bip01 Neck', 'Bip01 L Clavicle', 'Bip01 R Clavicle'],
    'Bip01 Neck': ['Bip01 Head'],
    # Left arm
    'Bip01 L Clavicle': ['Bip01 L UpperArm'],
    'Bip01 L UpperArm': ['Bip01 L Forearm'],
    'Bip01 L Forearm': ['Bip01 L Hand'],
    # Right arm
    'Bip01 R Clavicle': ['Bip01 R UpperArm'],
    'Bip01 R UpperArm': ['Bip01 R Forearm'],
    'Bip01 R Forearm': ['Bip01 R Hand'],
    # Left leg
    'Bip01 L Thigh': ['Bip01 L Calf'],
    'Bip01 L Calf': ['Bip01 L Foot'],
    'Bip01 L Foot': ['Bip01 L Toe0'],
    # Right leg
    'Bip01 R Thigh': ['Bip01 R Calf'],
    'Bip01 R Calf': ['Bip01 R Foot'],
    'Bip01 R Foot': ['Bip01 R Toe0'],
}


def get_parent_name(bone_name, available_names):
    """Find the parent of a bone from the hierarchy."""
    for parent, children in BIPED_CHILDREN.items():
        if bone_name in children and parent in available_names:
            return parent
    # Finger chains: hand → finger
    for side in ('L', 'R'):
        hand = f'Bip01 {side} Hand'
        for fi in range(3):
            first_knuckle = f'Bip01 {side} Finger{fi}0'
            if bone_name == first_knuckle and hand in available_names:
                return hand
            for ki in range(1, 4):
                knuckle = f'Bip01 {side} Finger{fi}{ki}'
                prev = f'Bip01 {side} Finger{fi}{ki - 1}'
                if bone_name == knuckle and prev in available_names:
                    return prev
    return None


# ── Coordinate conversion ──────────────────────────────────────────────────
# D3D left-handed Y-up → Blender right-handed Z-up
# (x, y, z) → (x, z, -y)

# Axis swap matrix for converting D3D → Blender coordinate system
# D3D (x,y,z) → Blender (-x, z, y): negate X for handedness, swap Y↔Z
AXIS_SWAP = Matrix((
    (-1, 0, 0, 0),
    ( 0, 0, 1, 0),
    ( 0, 1, 0, 0),
    ( 0, 0, 0, 1),
))

AXIS_SWAP_INV = AXIS_SWAP.inverted()


def d3d_matrix_to_blender(row_major_16):
    """Convert a D3D row-major 4x4 matrix to a Blender Matrix."""
    # Build column-major Matrix from row-major data
    m = row_major_16
    d3d_mat = Matrix((
        (m[0], m[1], m[2], m[3]),
        (m[4], m[5], m[6], m[7]),
        (m[8], m[9], m[10], m[11]),
        (m[12], m[13], m[14], m[15]),
    )).transposed()
    # Apply axis conversion
    return AXIS_SWAP @ d3d_mat @ AXIS_SWAP_INV


# ── Import logic ──────────────────────────────────────────────────────────

def import_alf(filepath, context):
    anim = ALFAnimation.load(filepath)
    anim_name = os.path.splitext(os.path.basename(filepath))[0]
    bone_names = set(b.name for b in anim.bones)

    # Check if an armature is selected
    armature_obj = None
    if context.active_object and context.active_object.type == 'ARMATURE':
        armature_obj = context.active_object

    if not armature_obj:
        # Create armature from bone data
        arm_data = bpy.data.armatures.new(f"{anim_name}_armature")
        armature_obj = bpy.data.objects.new(f"{anim_name}_armature", arm_data)
        context.collection.objects.link(armature_obj)
        context.view_layer.objects.active = armature_obj
        armature_obj.select_set(True)

        # Enter edit mode to create bones
        bpy.ops.object.mode_set(mode='EDIT')
        edit_bones = arm_data.edit_bones

        # Get rest pose from frame 0
        bone_matrices = {}
        for bone in anim.bones:
            if bone.keyframes:
                bl_mat = d3d_matrix_to_blender(bone.keyframes[0])
                bone_matrices[bone.name] = bl_mat

        # Create edit bones
        for bone in anim.bones:
            eb = edit_bones.new(bone.name)
            if bone.name in bone_matrices:
                mat = bone_matrices[bone.name]
                head = mat.to_translation()
                # Tail along local Y axis (Blender bone convention)
                tail = head + mat.to_3x3() @ Vector((0, 0.5, 0))
                eb.head = head
                eb.tail = tail
            else:
                eb.head = Vector((0, 0, 0))
                eb.tail = Vector((0, 0.5, 0))

        # Set parent relationships
        for bone in anim.bones:
            parent_name = get_parent_name(bone.name, bone_names)
            if parent_name and parent_name in edit_bones:
                edit_bones[bone.name].parent = edit_bones[parent_name]

        bpy.ops.object.mode_set(mode='OBJECT')

    # Create action
    action = bpy.data.actions.new(name=anim_name)
    if not armature_obj.animation_data:
        armature_obj.animation_data_create()
    armature_obj.animation_data.action = action

    # Compute rest pose inverse matrices (from edit bone transforms)
    bpy.ops.object.mode_set(mode='POSE')

    # Get rest bone matrices
    rest_matrices = {}
    for pbone in armature_obj.pose.bones:
        rest_matrices[pbone.name] = pbone.bone.matrix_local.copy()

    # Set keyframes for each bone
    for bone in anim.bones:
        pbone = armature_obj.pose.bones.get(bone.name)
        if not pbone:
            continue

        rest_inv = rest_matrices[bone.name].inverted()

        for kf_idx, kf_mat in enumerate(bone.keyframes):
            bl_world = d3d_matrix_to_blender(kf_mat)

            # Convert world-space to pose-space (relative to rest pose)
            if pbone.parent:
                parent_rest = rest_matrices[pbone.parent.name]
                parent_rest_inv = parent_rest.inverted()
                local_mat = parent_rest_inv @ bl_world
                pose_mat = pbone.bone.matrix_local.inverted() @ parent_rest @ local_mat
            else:
                pose_mat = rest_inv @ bl_world

            pbone.matrix_basis = pose_mat

            frame = kf_idx + 1  # Blender frames start at 1
            pbone.keyframe_insert(data_path="location", frame=frame)
            pbone.keyframe_insert(data_path="rotation_quaternion", frame=frame)

        # Set rotation mode to quaternion
        pbone.rotation_mode = 'QUATERNION'

    # Set frame range
    max_frames = max((len(b.keyframes) for b in anim.bones), default=1)
    context.scene.frame_start = 1
    context.scene.frame_end = max_frames
    context.scene.frame_set(1)

    bpy.ops.object.mode_set(mode='OBJECT')

    print(f"Imported ALF: {anim_name} ({len(anim.bones)} bones, "
          f"{anim.frame_count} root frames, {max_frames} bone keyframes)")

    return armature_obj


# ── Operator ──────────────────────────────────────────────────────────────

class IMPORT_OT_autothief_alf(bpy.types.Operator, ImportHelper):
    bl_idname = "import_anim.autothief_alf"
    bl_label = "Import AutoThief ALF"
    bl_options = {'REGISTER', 'UNDO'}

    filename_ext = ".alf"
    filter_glob: StringProperty(default="*.alf;*.ALF", options={'HIDDEN'})

    def execute(self, context):
        try:
            import_alf(self.filepath, context)
            return {'FINISHED'}
        except Exception as e:
            self.report({'ERROR'}, str(e))
            import traceback
            traceback.print_exc()
            return {'CANCELLED'}

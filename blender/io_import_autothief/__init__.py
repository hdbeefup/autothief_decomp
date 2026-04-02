"""
AutoThief / CarJacker (Kozmogames, 2005) import plugin for Blender.
Supports .PM model files and .ALF skeletal animation files.
"""

bl_info = {
    "name": "AutoThief PM/ALF Import",
    "author": "",
    "version": (1, 0, 0),
    "blender": (3, 0, 0),
    "location": "File > Import",
    "description": "Import PM models and ALF animations from AutoThief / CarJacker",
    "category": "Import-Export",
}

import bpy

from . import import_pm
from . import import_alf


def menu_func_pm(self, context):
    self.layout.operator(import_pm.IMPORT_OT_autothief_pm.bl_idname,
                         text="AutoThief Model (.pm)")


def menu_func_alf(self, context):
    self.layout.operator(import_alf.IMPORT_OT_autothief_alf.bl_idname,
                         text="AutoThief Animation (.alf)")


classes = (
    import_pm.IMPORT_OT_autothief_pm,
    import_alf.IMPORT_OT_autothief_alf,
)


def register():
    for cls in classes:
        bpy.utils.register_class(cls)
    bpy.types.TOPBAR_MT_file_import.append(menu_func_pm)
    bpy.types.TOPBAR_MT_file_import.append(menu_func_alf)


def unregister():
    bpy.types.TOPBAR_MT_file_import.remove(menu_func_alf)
    bpy.types.TOPBAR_MT_file_import.remove(menu_func_pm)
    for cls in reversed(classes):
        bpy.utils.unregister_class(cls)


if __name__ == "__main__":
    register()

"""
AutoThief / CarJacker (Kozmogames, 2005) import/export plugin for Blender.
Supports .PM model files, .ALF skeletal animation files, and .city map files.
"""

bl_info = {
    "name": "AutoThief Import/Export",
    "author": "",
    "version": (1, 1, 0),
    "blender": (3, 0, 0),
    "location": "File > Import/Export",
    "description": "Import/Export PM models, ALF animations, and city maps for AutoThief / CarJacker",
    "category": "Import-Export",
}

import bpy

from . import import_pm
from . import import_alf
from . import import_city
from . import export_city


def menu_func_pm(self, context):
    self.layout.operator(import_pm.IMPORT_OT_autothief_pm.bl_idname,
                         text="AutoThief Model (.pm)")


def menu_func_alf(self, context):
    self.layout.operator(import_alf.IMPORT_OT_autothief_alf.bl_idname,
                         text="AutoThief Animation (.alf)")


def menu_func_city_import(self, context):
    self.layout.operator(import_city.IMPORT_OT_autothief_city.bl_idname,
                         text="AutoThief City Map (.city)")


def menu_func_city_export(self, context):
    self.layout.operator(export_city.EXPORT_OT_autothief_city.bl_idname,
                         text="AutoThief City Map (.city)")


classes = (
    import_pm.IMPORT_OT_autothief_pm,
    import_alf.IMPORT_OT_autothief_alf,
    import_city.IMPORT_OT_autothief_city,
    export_city.EXPORT_OT_autothief_city,
)


def register():
    for cls in classes:
        bpy.utils.register_class(cls)
    bpy.types.TOPBAR_MT_file_import.append(menu_func_pm)
    bpy.types.TOPBAR_MT_file_import.append(menu_func_alf)
    bpy.types.TOPBAR_MT_file_import.append(menu_func_city_import)
    bpy.types.TOPBAR_MT_file_export.append(menu_func_city_export)


def unregister():
    bpy.types.TOPBAR_MT_file_export.remove(menu_func_city_export)
    bpy.types.TOPBAR_MT_file_import.remove(menu_func_city_import)
    bpy.types.TOPBAR_MT_file_import.remove(menu_func_alf)
    bpy.types.TOPBAR_MT_file_import.remove(menu_func_pm)
    for cls in reversed(classes):
        bpy.utils.unregister_class(cls)


if __name__ == "__main__":
    register()

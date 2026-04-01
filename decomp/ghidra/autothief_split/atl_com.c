/* atl_com functions - AutoThief.exe Ghidra decompilation */

/* Function: Term */

/* Library Function - Single Match
    public: void __thiscall ATL::CAtlComModule::Term(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __thiscall ATL::CAtlComModule::Term(CAtlComModule *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)this != 0) {
    piVar3 = *(int **)(this + 8);
    if (piVar3 < *(int **)(this + 0xc)) {
      do {
        iVar1 = *piVar3;
        if (iVar1 != 0) {
          piVar2 = *(int **)(iVar1 + 0x10);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          *(undefined4 *)(iVar1 + 0x10) = 0;
        }
        piVar3 = piVar3 + 1;
      } while (piVar3 < *(int **)(this + 0xc));
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x10));
    *(undefined4 *)this = 0;
  }
  return;
}




/* Function: CAtlComModule */

/* Library Function - Single Match
    public: __thiscall ATL::CAtlComModule::CAtlComModule(void)
   
   Library: Visual Studio 2003 Release */

CAtlComModule * __thiscall ATL::CAtlComModule::CAtlComModule(CAtlComModule *this)

{
  int iVar1;
  
  FUN_004010d0();
  *(undefined4 *)this = 0x28;
  *(undefined4 *)(this + 4) = 0x400000;
  *(undefined **)(this + 8) = &DAT_0059eec4;
  *(undefined **)(this + 0xc) = &DAT_0059eec4;
  iVar1 = FUN_00401170();
  if (iVar1 < 0) {
    DAT_005b3b44 = 1;
  }
  return this;
}




/* Function: _ATL_WIN_MODULE70 */

/* Library Function - Single Match
    public: __thiscall ATL::_ATL_WIN_MODULE70::_ATL_WIN_MODULE70(void)
   
   Library: Visual Studio 2003 Release */

_ATL_WIN_MODULE70 * __thiscall ATL::_ATL_WIN_MODULE70::_ATL_WIN_MODULE70(_ATL_WIN_MODULE70 *this)

{
  FUN_004010d0();
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return this;
}




/* Function: CAtlWinModule */

/* Library Function - Single Match
    public: __thiscall ATL::CAtlWinModule::CAtlWinModule(void)
   
   Library: Visual Studio 2003 Release */

CAtlWinModule * __thiscall ATL::CAtlWinModule::CAtlWinModule(CAtlWinModule *this)

{
  int iVar1;
  
  _ATL_WIN_MODULE70::_ATL_WIN_MODULE70((_ATL_WIN_MODULE70 *)this);
  *(undefined4 *)this = 0x2c;
  iVar1 = FUN_00493a62(this);
  if (iVar1 < 0) {
    DAT_005b3b44 = 1;
  }
  return this;
}




/* Function: RemoveAll */

/* Library Function - Single Match
    public: void __thiscall ATL::CSimpleArray<struct HINSTANCE__ *,class
   ATL::CSimpleArrayEqualHelper<struct HINSTANCE__ *> >::RemoveAll(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __thiscall
ATL::CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::
RemoveAll(CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
          *this)

{
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}




/* Function: ~CAtlBaseModule */

/* Library Function - Single Match
    public: __thiscall ATL::CAtlBaseModule::~CAtlBaseModule(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall ATL::CAtlBaseModule::~CAtlBaseModule(CAtlBaseModule *this)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x18));
  CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::
  RemoveAll((CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
             *)(this + 0x30));
  return;
}





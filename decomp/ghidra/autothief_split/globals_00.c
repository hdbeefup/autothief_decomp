/* globals_00 functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_00401060 */

void FUN_00401060(void)

{
  undefined1 *Value;
  _OSVERSIONINFOA local_94;
  
  local_94.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_94);
  if ((local_94.dwPlatformId != 2) || (Value = &LAB_00449790, local_94.dwMajorVersion < 5)) {
    Value = &LAB_00401000;
  }
  InterlockedExchange((LONG *)&PTR_FUN_005a20d0,(LONG)Value);
                    /* WARNING: Could not recover jumptable at 0x004010a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_005a20d0)();
  return;
}




/* Function: FUN_004010b0 */

void FUN_004010b0(undefined4 param_1)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&param_1,(ThrowInfo *)&DAT_00594c6c);
}




/* Function: FUN_004010d0 */

undefined4 * __fastcall FUN_004010d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* Function: FUN_004010f0 */

undefined4 __fastcall FUN_004010f0(LPCRITICAL_SECTION param_1)

{
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005827f0;
  puStack_10 = &DAT_004cf010;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  EnterCriticalSection(param_1);
  ExceptionList = local_14;
  return 0;
}




/* Function: FUN_00401170 */

undefined4 __fastcall FUN_00401170(LPCRITICAL_SECTION param_1)

{
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00582800;
  puStack_10 = &DAT_004cf010;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  InitializeCriticalSection(param_1);
  ExceptionList = local_14;
  return 0;
}




/* Function: FUN_004011f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004011f0(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_4 != (undefined4 *)0x0) {
    _DAT_005b3b48 = *param_4;
    _DAT_005b3b4c = param_4[1];
    _DAT_005b3b50 = param_4[2];
    _DAT_005b3b54 = param_4[3];
  }
  if ((param_2 != (int *)0xffffffff) && (*(int **)(param_1 + 0x2c) = param_2, param_2 != (int *)0x0)
     ) {
    iVar1 = *param_2;
    while (iVar1 != 0) {
      (*(code *)param_2[8])(1);
      piVar2 = param_2 + 9;
      param_2 = param_2 + 9;
      iVar1 = *piVar2;
    }
  }
  piVar2 = DAT_005b60dc;
  if (DAT_005b60dc < DAT_005b60e0) {
    do {
      if (*piVar2 != 0) {
        (**(code **)(*piVar2 + 0x20))(1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 < DAT_005b60e0);
  }
  return 0;
}




/* Function: FUN_00401270 */

void FUN_00401270(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    (*(code *)*puVar1)(puVar1[1]);
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}




/* Function: FUN_004012b0 */

void __thiscall FUN_004012b0(int param_1,int param_2,undefined4 param_3)

{
  HANDLE pvVar1;
  LPVOID pvVar2;
  DWORD dwFlags;
  undefined4 *lpBaseAddress;
  SIZE_T SVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    SVar3 = 0xd;
    dwFlags = 4;
    pvVar1 = GetProcessHeap();
    pvVar2 = HeapAlloc(pvVar1,dwFlags,SVar3);
    *(LPVOID *)(param_1 + 0xc) = pvVar2;
  }
  lpBaseAddress = *(undefined4 **)(param_1 + 0xc);
  SVar3 = 0xd;
  *lpBaseAddress = 0x42444c7;
  lpBaseAddress[1] = param_3;
  *(undefined1 *)(lpBaseAddress + 2) = 0xe9;
  *(int *)((int)lpBaseAddress + 9) = (param_2 - (int)lpBaseAddress) + -0xd;
  pvVar1 = GetCurrentProcess();
  FlushInstructionCache(pvVar1,lpBaseAddress,SVar3);
  return;
}




/* Function: FUN_004014a0 */

undefined4 __thiscall FUN_004014a0(int *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  
  if ((-1 < param_2) && (iVar1 = param_1[2], param_2 < iVar1)) {
    if (param_2 != iVar1 + -1) {
      pvVar2 = (void *)(*param_1 + param_2 * 4);
      memmove(pvVar2,(void *)((int)pvVar2 + 4),(iVar1 - param_2) * 4 - 4);
      pvVar2 = (void *)(param_1[1] + param_2 * 4);
      memmove(pvVar2,(void *)((int)pvVar2 + 4),(param_1[2] - param_2) * 4 - 4);
    }
    pvVar2 = realloc((void *)*param_1,param_1[2] * 4 - 4);
    if ((pvVar2 != (void *)0x0) || (param_1[2] == 1)) {
      *param_1 = (int)pvVar2;
    }
    pvVar2 = realloc((void *)param_1[1],param_1[2] * 4 - 4);
    if ((pvVar2 != (void *)0x0) || (param_1[2] == 1)) {
      param_1[1] = (int)pvVar2;
    }
    param_1[2] = param_1[2] + -1;
    return 1;
  }
  return 0;
}




/* Function: FUN_00401560 */

void __fastcall FUN_00401560(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00401270((undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}




/* Function: FUN_004015b0 */

void __fastcall FUN_004015b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x2c);
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    while (iVar1 != 0) {
      piVar2 = (int *)piVar3[4];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      piVar3[4] = 0;
      (*(code *)piVar3[8])(0);
      piVar2 = piVar3 + 9;
      piVar3 = piVar3 + 9;
      iVar1 = *piVar2;
    }
  }
  piVar3 = DAT_005b60dc;
  if (DAT_005b60dc < DAT_005b60e0) {
    do {
      if (*piVar3 != 0) {
        (**(code **)(*piVar3 + 0x20))(0);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 < DAT_005b60e0);
  }
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00401270((undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    piVar3 = *(int **)(param_1 + 0x28);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}




/* Function: FUN_00401650 */

int __thiscall FUN_00401650(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057a730;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  iVar1 = FUN_004011f0(param_2,param_3,param_4);
  if (iVar1 < 0) {
    ExceptionList = pvStack_10;
    return iVar1;
  }
  DVar2 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 0x30) = DVar2;
  *(undefined4 *)(param_1 + 0x34) = 0;
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_00493c27(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 **)(param_1 + 0x34) = puVar3;
    iVar1 = FUN_004016d3();
    return iVar1;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = FUN_004016d3();
  return iVar1;
}




/* Function: FUN_004016d3 */

undefined4 FUN_004016d3(void)

{
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_ESI + 0x34) == unaff_EDI) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return 0x8007000e;
  }
  *(int *)(unaff_ESI + 0x38) = unaff_EDI;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return unaff_EBX;
}




/* Function: FUN_00401720 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00401720(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1 + 4;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = 0x24;
  param_1[3] = 0;
  param_1[2] = 0;
  DAT_005b3b58 = param_1;
  iVar1 = FUN_00401170();
  if (iVar1 < 0) {
    DAT_005b3b44 = 1;
  }
  param_1[10] = 0;
  *param_1 = &PTR_LAB_0058283c;
  _DAT_005b3b40 = param_1;
  return param_1;
}




/* Function: FUN_00401790 */

undefined4 __fastcall FUN_00401790(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




/* Function: FUN_004017a0 */

HRESULT __thiscall FUN_004017a0(int param_1,undefined4 *param_2)

{
  LPVOID *ppv;
  HRESULT HVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  ppv = (LPVOID *)(param_1 + 0x28);
  HVar1 = 0;
  if ((*(int *)(param_1 + 0x28) == 0) &&
     (HVar1 = CoCreateInstance((IID *)&DAT_005826dc,(LPUNKNOWN)0x0,1,(IID *)&DAT_00582860,ppv),
     HVar1 < 0)) {
    return HVar1;
  }
  *param_2 = *ppv;
  (**(code **)(*(int *)*ppv + 4))(*ppv);
  return HVar1;
}




/* Function: FUN_00401820 */

void FUN_00401820(int param_1,undefined4 *param_2,undefined4 param_3)

{
  DWORD DVar1;
  int iVar2;
  
  *param_2 = param_3;
  DVar1 = GetCurrentThreadId();
  param_2[1] = DVar1;
  iVar2 = FUN_004010f0();
  if (-1 < iVar2) {
    param_2[2] = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 **)(param_1 + 0x1c) = param_2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  }
  return;
}




/* Function: FUN_004018f0 */

undefined4 * __fastcall FUN_004018f0(undefined4 *param_1)

{
  FUN_00401720();
  *param_1 = &PTR_LAB_0058283c;
  return param_1;
}




/* Function: FUN_00401920 */

void __fastcall FUN_00401920(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}




/* Function: FUN_00401940 */

void __fastcall FUN_00401940(undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  psVar2 = (short *)param_1[3];
  if ((psVar2 != (short *)0x0) && (iVar3 = param_1[4], iVar3 != 0)) {
    sVar1 = *psVar2;
    while (sVar1 != -1) {
      if ((*(byte *)(iVar3 + 1) & 0x20) != 0) {
        free(*(void **)(iVar3 + 4));
      }
      psVar2 = psVar2 + 2;
      iVar3 = iVar3 + 8;
      sVar1 = *psVar2;
    }
    operator_delete__((void *)param_1[4]);
  }
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




/* Function: FUN_004019b0 */

void __fastcall FUN_004019b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_005b3b58 + 0x10);
  iVar2 = FUN_004010f0();
  if (-1 < iVar2) {
    puVar1 = *(undefined4 **)(param_1 + 0x38);
    if ((puVar1 != (undefined4 *)0x0) && (0 < (int)puVar1[1])) {
      DestroyWindow(*(HWND *)*puVar1);
    }
    puVar1 = *(undefined4 **)(param_1 + 0x38);
    if (puVar1 != (undefined4 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        free((void *)*puVar1);
        *puVar1 = 0;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
                    /* WARNING: Subroutine does not return */
      operator_delete(puVar1);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}




/* Function: FUN_00401a30 */

void __fastcall FUN_00401a30(int param_1)

{
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    free(*(void **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}




/* Function: FUN_00401a70 */

void __fastcall FUN_00401a70(int param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  
  lpMem = *(LPVOID *)(param_1 + 0x14);
  if (lpMem != (LPVOID)0x0) {
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,lpMem);
  }
  return;
}




/* Function: FUN_00401aa0 */

uint __thiscall FUN_00401aa0(WNDCLASSEXA *param_1,UINT *param_2)

{
  LPSTR pCVar1;
  ushort uVar2;
  LPCSTR pCVar3;
  WNDPROC pWVar4;
  LPCSTR pCVar5;
  HINSTANCE pHVar6;
  ATOM AVar7;
  uint uVar8;
  BOOL BVar9;
  HCURSOR pHVar10;
  HICON pHVar11;
  UINT UVar12;
  int iVar13;
  tagWNDCLASSEXA *ptVar14;
  WNDCLASSEXA *pWVar15;
  WNDPROC *ppWVar16;
  tagWNDCLASSEXA local_60;
  tagWNDCLASSEXA local_30;
  
  if ((short)param_1[1].cbWndExtra == 0) {
    uVar8 = FUN_004010f0();
    pHVar6 = DAT_005b612c;
    if ((int)uVar8 < 0) {
LAB_00401b52:
      return uVar8 & 0xffff0000;
    }
    if ((short)param_1[1].cbWndExtra == 0) {
      pCVar3 = (LPCSTR)param_1[1].cbSize;
      if (pCVar3 == (LPCSTR)0x0) {
        pHVar10 = LoadCursorA((HINSTANCE)((param_1[1].cbClsExtra != 0) - 1 & (uint)DAT_005b612c),
                              (LPCSTR)param_1[1].lpfnWndProc);
        param_1->hCursor = pHVar10;
      }
      else {
        pWVar4 = param_1->lpfnWndProc;
        pCVar5 = param_1->lpszClassName;
        ppWVar16 = (WNDPROC *)&local_60.style;
        for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
          *ppWVar16 = (WNDPROC)0x0;
          ppWVar16 = ppWVar16 + 1;
        }
        local_60.cbSize = 0x30;
        BVar9 = GetClassInfoExA(DAT_005b612c,pCVar3,&local_60);
        if (BVar9 == 0) {
          BVar9 = GetClassInfoExA((HINSTANCE)0x0,(LPCSTR)param_1[1].cbSize,&local_60);
          if (BVar9 == 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005b6100);
            uVar8 = FUN_00401920();
            goto LAB_00401b52;
          }
        }
        ptVar14 = &local_60;
        pWVar15 = param_1;
        for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
          pWVar15->cbSize = ptVar14->cbSize;
          ptVar14 = (tagWNDCLASSEXA *)&ptVar14->style;
          pWVar15 = (WNDCLASSEXA *)&pWVar15->style;
        }
        param_1[1].style = (UINT)param_1->lpfnWndProc;
        param_1->lpszClassName = pCVar5;
        param_1->lpfnWndProc = pWVar4;
      }
      param_1->hInstance = pHVar6;
      param_1->style = param_1->style & 0xffffbfff;
      if (param_1->lpszClassName == (LPCSTR)0x0) {
        pCVar1 = (LPSTR)((int)&param_1[1].cbWndExtra + 2);
        wsprintfA(pCVar1,"ATL:%8.8X",param_1);
        param_1->lpszClassName = pCVar1;
      }
      pCVar3 = param_1->lpszClassName;
      pWVar15 = param_1;
      ptVar14 = &local_30;
      for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
        ptVar14->cbSize = pWVar15->cbSize;
        pWVar15 = (WNDCLASSEXA *)&pWVar15->style;
        ptVar14 = (tagWNDCLASSEXA *)&ptVar14->style;
      }
      BVar9 = GetClassInfoExA(param_1->hInstance,pCVar3,&local_30);
      *(short *)&param_1[1].cbWndExtra = (short)BVar9;
      if ((short)BVar9 == 0) {
        if (param_1[1].hbrBackground != (HBRUSH)0x0) {
          pHVar11 = LoadImageA(DAT_005b6130,(LPCSTR)((uint)param_1[1].hbrBackground & 0xffff),1,0x20
                               ,0x20,0);
          uVar2 = *(ushort *)&param_1[1].hbrBackground;
          param_1->hIcon = pHVar11;
          pHVar11 = LoadImageA(DAT_005b6130,(LPCSTR)(uint)uVar2,1,0x10,0x10,0);
          param_1->hIconSm = pHVar11;
        }
        AVar7 = RegisterClassExA(param_1);
        *(ATOM *)&param_1[1].cbWndExtra = AVar7;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005b6100);
  }
  UVar12 = 0;
  if (param_1[1].cbSize != 0) {
    UVar12 = param_1[1].style;
    *param_2 = UVar12;
  }
  return CONCAT22((short)(UVar12 >> 0x10),(short)param_1[1].cbWndExtra);
}




/* Function: FUN_00401c70 */

undefined4 __thiscall FUN_00401c70(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = 0;
  if (0 < (int)param_1[2]) {
    piVar3 = (int *)*param_1;
    while (*piVar3 != *param_2) {
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
      if ((int)param_1[2] <= iVar1) {
        return 0;
      }
    }
    if (iVar1 != -1) {
      uVar2 = FUN_004014a0();
      return uVar2;
    }
  }
  return 0;
}




/* Function: FUN_00401cb0 */

HWND __thiscall
FUN_00401cb0(HMENU param_1,HWND param_2,int *param_3,LPCSTR param_4,uint param_5,DWORD param_6,
            HMENU param_7,ushort param_8,LPVOID param_9)

{
  HWND pHVar1;
  
  if (param_8 == 0) {
    return (HWND)0x0;
  }
  FUN_00401820(&DAT_005b60fc,param_1 + 2,param_1);
  if ((param_7 == (HMENU)0x0) && ((param_5 & 0x40000000) != 0)) {
    param_7 = param_1;
  }
  if (param_3 == (int *)0x0) {
    param_3 = &DAT_005a20c0;
  }
  pHVar1 = CreateWindowExA(param_6,(LPCSTR)(uint)param_8,param_4,param_5,*param_3,param_3[1],
                           param_3[2] - *param_3,param_3[3] - param_3[1],param_2,param_7,
                           DAT_005b612c,param_9);
  return pHVar1;
}




/* Function: FUN_00401d90 */

void __fastcall FUN_00401d90(int param_1)

{
  undefined4 *puVar1;
  
  FUN_004019b0();
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  if (puVar1 != (undefined4 *)0x0) {
    if ((void *)*puVar1 != (void *)0x0) {
      free((void *)*puVar1);
      *puVar1 = 0;
    }
    if ((void *)puVar1[1] != (void *)0x0) {
      free((void *)puVar1[1]);
      puVar1[1] = 0;
    }
    puVar1[2] = 0;
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar1);
  }
  FUN_004015b0();
  return;
}




/* Function: FUN_00401df0 */

void __fastcall FUN_00401df0(int param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  
  FUN_0042d540();
  FUN_00401940();
  lpMem = *(LPVOID *)(param_1 + 0x14);
  if (lpMem != (LPVOID)0x0) {
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,lpMem);
  }
  return;
}




/* Function: FUN_00401e30 */

void __thiscall
FUN_00401e30(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,int param_5,
            int param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00401aa0(param_1 + 0x20);
  if (param_5 == 0) {
    param_5 = 0x6cf0000;
  }
  if (param_6 == 0) {
    param_6 = 0x40100;
  }
  if (param_3 == (undefined4 *)0x0) {
    param_3 = &DAT_005a20c0;
  }
  FUN_00401cb0(param_2,param_3,param_4,param_5,param_6,param_7,uVar1,param_8);
  return;
}




/* Function: FUN_00401ea0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_00401ea0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  HMENU pHVar1;
  int iVar2;
  HACCEL pHVar3;
  CHAR local_100 [256];
  
  local_100[0] = '\0';
  LoadStringA(DAT_005b6130,_DAT_005a2148,local_100,0x100);
  pHVar1 = LoadMenuA(DAT_005b6130,(LPCSTR)(_DAT_005a2148 & 0xffff));
  iVar2 = FUN_00401e30(param_2,param_3,local_100,param_4,param_5,pHVar1,param_6);
  if (iVar2 != 0) {
    pHVar3 = LoadAcceleratorsA(DAT_005b6130,(LPCSTR)(_DAT_005a2148 & 0xffff));
    *(HACCEL *)(param_1 + 0x30) = pHVar3;
  }
  return iVar2;
}




/* Function: FUN_00402160 */

DWORD FUN_00402160(void)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if (0 < (int)DVar1) {
    DVar1 = DVar1 & 0xffff | 0x80070000;
  }
  return DVar1;
}




/* Function: FUN_00402180 */

void __fastcall FUN_00402180(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057a75e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_005828b0;
  local_4 = 1;
  FUN_00402280(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  local_4 = 2;
  FUN_00402210();
  local_4 = 0xffffffff;
  FUN_004022b0();
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00402200 */

undefined4 FUN_00402200(void)

{
  return 1;
}




/* Function: FUN_00402210 */

undefined4 __fastcall FUN_00402210(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[2]) {
    do {
      operator_delete__(*(void **)(*param_1 + iVar1 * 4));
      operator_delete__(*(void **)(param_1[1] + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[2]);
  }
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
    param_1[1] = 0;
  }
  param_1[2] = 0;
  return 0;
}




/* Function: FUN_00402280 */

undefined4 FUN_00402280(int param_1)

{
  undefined4 uVar1;
  
  FUN_004010f0();
  uVar1 = FUN_00402210();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return uVar1;
}




/* Function: FUN_004022b0 */

void __fastcall FUN_004022b0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
    param_1[1] = 0;
  }
  param_1[2] = 0;
  return;
}




/* Function: FUN_004022f0 */

void __fastcall FUN_004022f0(undefined4 *param_1)

{
  FUN_00402210();
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
    param_1[1] = 0;
  }
  param_1[2] = 0;
  return;
}




/* Function: FUN_00402330 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

uint FUN_00402330(int param_1,LPCWSTR param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  UINT aUStackY_38 [2];
  DWORD aDStackY_30 [3];
  int aiStackY_24 [3];
  
  if ((param_2 != (LPCWSTR)0x0) && (param_3 != 0)) {
    FUN_004010f0();
    uVar1 = (*(code *)PTR_FUN_005a20d0)();
    aiStackY_24[2] = 0x40236a;
    iVar2 = lstrlenW(param_2);
    puVar3 = (undefined1 *)(iVar2 * 2 + 5U & 0xfffffffc);
    iVar4 = -(int)puVar3;
    puVar5 = &stack0xffffffec + iVar4;
    if (&stack0xffffffec != puVar3) {
      *(undefined4 *)(&stack0xffffffe8 + iVar4) = 0;
      *(undefined4 *)((int)aiStackY_24 + iVar4 + 8) = 0;
      *(int *)((int)aiStackY_24 + iVar4 + 4) = iVar2 * 2 + 2;
      *(undefined1 **)((int)aiStackY_24 + iVar4) = &stack0xffffffec + iVar4;
      *(undefined4 *)((int)aDStackY_30 + iVar4 + 8) = 0xffffffff;
      *(LPCWSTR *)((int)aDStackY_30 + iVar4 + 4) = param_2;
      *(undefined4 *)((int)aDStackY_30 + iVar4) = 0;
      *(undefined4 *)((int)aUStackY_38 + iVar4 + 4) = uVar1;
      (&stack0xffffffec)[iVar4] = 0;
      puVar5 = (undefined1 *)((int)aUStackY_38 + iVar4);
      *(undefined4 *)((int)aUStackY_38 + iVar4) = 0x40239c;
      WideCharToMultiByte(*(UINT *)((int)aUStackY_38 + iVar4 + 4),
                          *(DWORD *)((int)aDStackY_30 + iVar4),
                          *(LPCWSTR *)((int)aDStackY_30 + iVar4 + 4),
                          *(int *)((int)aDStackY_30 + iVar4 + 8),
                          *(LPSTR *)((int)aiStackY_24 + iVar4),
                          *(int *)((int)aiStackY_24 + iVar4 + 4),
                          *(LPCSTR *)((int)aiStackY_24 + iVar4 + 8),
                          *(LPBOOL *)(&stack0xffffffe8 + iVar4));
    }
    *(int *)(puVar5 + -4) = param_3;
    *(undefined1 **)(puVar5 + -8) = &stack0xffffffec + iVar4;
    *(undefined4 *)(puVar5 + -0xc) = 0x4023ac;
    iVar4 = FUN_004023e0();
    *(int *)(puVar5 + -4) = param_1 + 0x10;
    *(undefined4 *)(puVar5 + -8) = 0x4023b5;
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(puVar5 + -4));
    return (iVar4 != 0) - 1 & 0x8007000e;
  }
  return 0x80070057;
}




/* Function: FUN_004023e0 */

undefined4 FUN_004023e0(LPCSTR param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057a770;
  local_10 = ExceptionList;
  if ((param_1 != (LPCSTR)0x0) && (param_2 != 0)) {
    ExceptionList = &local_10;
    iVar1 = lstrlenA(param_1);
    local_8 = 0;
    thunk_FUN_00493c27(iVar1 + 1);
    uVar2 = FUN_00402449();
    return uVar2;
  }
  return 0;
}




/* Function: FUN_00402449 */

void FUN_00402449(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined4 unaff_EDI;
  
  iVar1 = lstrlenW(*(LPCWSTR *)(unaff_EBP + 0xc));
  iVar1 = iVar1 * 2 + 2;
  *(int *)(unaff_EBP + -0x24) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = unaff_EDI;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  uVar2 = thunk_FUN_00493c27(iVar1 * 2);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  FUN_00402481();
  return;
}




/* Function: FUN_00402481 */

bool FUN_00402481(void)

{
  int iVar1;
  uint uVar2;
  uint unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if ((puVar4 != (undefined4 *)0x0) && (*(int *)(unaff_EBP + -0x14) != 0)) {
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
    for (uVar2 = unaff_ESI >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = unaff_ESI & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar4 = *(undefined4 **)(unaff_EBP + 0xc);
    puVar3 = *(undefined4 **)(unaff_EBP + -0x14);
    for (uVar2 = unaff_EBX >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = unaff_EBX & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    iVar1 = FUN_00402530(unaff_EBP + -0x18,unaff_EBP + -0x14);
    if (iVar1 != 0) goto LAB_004024ef;
    puVar4 = *(undefined4 **)(unaff_EBP + -0x18);
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0x8007000e;
  operator_delete__(puVar4);
  operator_delete__(*(void **)(unaff_EBP + -0x14));
LAB_004024ef:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return -1 < *(int *)(unaff_EBP + -0x1c);
}




/* Function: FUN_00402530 */

undefined4 __thiscall FUN_00402530(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = realloc((void *)*param_1,param_1[2] * 4 + 4);
  if (pvVar2 != (void *)0x0) {
    *param_1 = pvVar2;
    pvVar2 = realloc((void *)param_1[1],param_1[2] * 4 + 4);
    if (pvVar2 != (void *)0x0) {
      iVar1 = param_1[2];
      param_1[1] = pvVar2;
      param_1[2] = iVar1 + 1;
      FUN_004025a0(iVar1,param_2,param_3);
      return 1;
    }
  }
  return 0;
}




/* Function: FUN_004025a0 */

void __thiscall FUN_004025a0(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*param_1 + param_2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
  }
  puVar1 = (undefined4 *)(param_1[1] + param_2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_4;
  }
  return;
}




/* Function: FUN_004025d0 */

undefined4 * __fastcall FUN_004025d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057a78b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_005828b0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  FUN_00402620();
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00402620 */

undefined4 * __fastcall FUN_00402620(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar1 = FUN_00401170();
  if (iVar1 < 0) {
    FUN_004010b0(iVar1);
  }
  return param_1;
}




/* Function: FUN_00402650 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00402650(undefined4 param_1,undefined4 param_2,int param_3,LPCWSTR param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  UINT aUStackY_38 [2];
  DWORD aDStackY_30 [3];
  int aiStackY_24 [3];
  
  uVar2 = (*(code *)PTR_FUN_005a20d0)();
  if ((param_3 != 0) && (param_4 != (LPCWSTR)0x0)) {
    aiStackY_24[2] = 0x40267d;
    iVar3 = lstrlenW(param_4);
    puVar4 = (undefined1 *)(iVar3 * 2 + 5U & 0xfffffffc);
    iVar1 = -(int)puVar4;
    puVar5 = &stack0xffffffec + iVar1;
    if (&stack0xffffffec != puVar4) {
      *(undefined4 *)(&stack0xffffffe8 + iVar1) = 0;
      *(undefined4 *)((int)aiStackY_24 + iVar1 + 8) = 0;
      *(int *)((int)aiStackY_24 + iVar1 + 4) = iVar3 * 2 + 2;
      *(undefined1 **)((int)aiStackY_24 + iVar1) = &stack0xffffffec + iVar1;
      *(undefined4 *)((int)aDStackY_30 + iVar1 + 8) = 0xffffffff;
      *(LPCWSTR *)((int)aDStackY_30 + iVar1 + 4) = param_4;
      *(undefined4 *)((int)aDStackY_30 + iVar1) = 0;
      *(undefined4 *)((int)aUStackY_38 + iVar1 + 4) = uVar2;
      (&stack0xffffffec)[iVar1] = 0;
      puVar5 = (undefined1 *)((int)aUStackY_38 + iVar1);
      *(undefined4 *)((int)aUStackY_38 + iVar1) = 0x4026b1;
      WideCharToMultiByte(*(UINT *)((int)aUStackY_38 + iVar1 + 4),
                          *(DWORD *)((int)aDStackY_30 + iVar1),
                          *(LPCWSTR *)((int)aDStackY_30 + iVar1 + 4),
                          *(int *)((int)aDStackY_30 + iVar1 + 8),
                          *(LPSTR *)((int)aiStackY_24 + iVar1),
                          *(int *)((int)aiStackY_24 + iVar1 + 4),
                          *(LPCSTR *)((int)aiStackY_24 + iVar1 + 8),
                          *(LPBOOL *)(&stack0xffffffe8 + iVar1));
    }
    param_4 = (LPCWSTR)(&stack0xffffffec + iVar1);
    *(int *)(puVar5 + -4) = param_3;
    puVar6 = puVar5 + -8;
    *(undefined4 *)(puVar5 + -8) = 0x4026be;
    iVar3 = lstrlenW(*(LPCWSTR *)(puVar5 + -4));
    puVar4 = (undefined1 *)(iVar3 * 2 + 5U & 0xfffffffc);
    *(undefined4 *)(puVar6 + -4) = 0x4026cf;
    iVar1 = -(int)puVar4;
    puVar7 = puVar6 + iVar1;
    if (puVar6 != puVar4) {
      *(undefined4 *)(puVar6 + iVar1 + -4) = 0;
      *(undefined4 *)(puVar6 + iVar1 + -8) = 0;
      *(int *)(puVar6 + iVar1 + -0xc) = iVar3 * 2 + 2;
      *(int *)(puVar6 + iVar1 + -0x10) = (int)puVar6 + iVar1;
      *(undefined4 *)(puVar6 + iVar1 + -0x14) = 0xffffffff;
      *(int *)(puVar6 + iVar1 + -0x18) = param_3;
      *(undefined4 *)(puVar6 + iVar1 + -0x1c) = 0;
      *(undefined4 *)(puVar6 + iVar1 + -0x20) = uVar2;
      puVar6[iVar1] = 0;
      puVar7 = puVar6 + iVar1 + -0x24;
      *(undefined4 *)(puVar6 + iVar1 + -0x24) = 0x4026ed;
      WideCharToMultiByte(*(UINT *)(puVar6 + iVar1 + -0x20),*(DWORD *)(puVar6 + iVar1 + -0x1c),
                          *(LPCWSTR *)(puVar6 + iVar1 + -0x18),*(int *)(puVar6 + iVar1 + -0x14),
                          *(LPSTR *)(puVar6 + iVar1 + -0x10),*(int *)(puVar6 + iVar1 + -0xc),
                          *(LPCSTR *)(puVar6 + iVar1 + -8),*(LPBOOL *)(puVar6 + iVar1 + -4));
    }
    *(undefined4 *)(puVar7 + -4) = 1;
    *(LPCWSTR *)(puVar7 + -8) = param_4;
    *(int *)(puVar7 + -0xc) = (int)puVar6 + iVar1;
    *(undefined4 *)(puVar7 + -0x10) = param_2;
    *(undefined4 *)(puVar7 + -0x14) = 0x402700;
    uVar2 = FUN_00402720();
    return uVar2;
  }
  return 0x80070057;
}




/* Function: FUN_00402720 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_00402720(LPCWSTR param_1,LPCSTR param_2,LPCSTR param_3)

{
  UINT CodePage;
  int iVar1;
  HMODULE hModule;
  undefined4 uVar2;
  HRSRC hResInfo;
  HGLOBAL pvVar3;
  DWORD DVar4;
  LPCSTR lpLibFileName;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057a7ab;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  CodePage = (*(code *)PTR_FUN_005a20d0)();
  local_8 = 0;
  lpLibFileName = (LPCSTR)0x0;
  if (param_1 != (LPCWSTR)0x0) {
    iVar1 = lstrlenW(param_1);
    lpLibFileName = &stack0xfffffbd0;
    if (&stack0x00000000 != (undefined1 *)0x430) {
      WideCharToMultiByte(CodePage,0,param_1,-1,&stack0xfffffbd0,iVar1 * 2 + 2,(LPCSTR)0x0,
                          (LPBOOL)0x0);
      lpLibFileName = &stack0xfffffbd0;
    }
  }
  hModule = LoadLibraryExA(lpLibFileName,(HANDLE)0x0,2);
  if (hModule == (HMODULE)0x0) {
    uVar2 = FUN_00402160();
  }
  else {
    hResInfo = FindResourceA(hModule,param_2,param_3);
    if (hResInfo == (HRSRC)0x0) {
      uVar2 = FUN_00402160();
    }
    else {
      pvVar3 = LoadResource(hModule,hResInfo);
      if (pvVar3 != (HGLOBAL)0x0) {
        DVar4 = SizeofResource(hModule,hResInfo);
        local_8 = CONCAT31(local_8._1_3_,1);
        if (0x400 < DVar4 + 1) {
          FUN_004028d0(DVar4 + 1);
          uVar2 = FUN_00402840();
          return uVar2;
        }
        uVar2 = FUN_00402840();
        return uVar2;
      }
      uVar2 = FUN_00402160();
    }
    FreeLibrary(hModule);
  }
  if (&stack0x00000000 != (undefined1 *)0x420) {
    FUN_00403d50();
  }
  ExceptionList = pvStack_10;
  return uVar2;
}




/* Function: FUN_00402840 */

undefined4 FUN_00402840(void)

{
  uint uVar1;
  uint unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 uVar2;
  HMODULE unaff_EDI;
  undefined4 *puVar3;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(undefined4 **)(unaff_EBP + -0x420) == (undefined4 *)0x0) {
    uVar2 = 0x8007000e;
  }
  else {
    puVar3 = *(undefined4 **)(unaff_EBP + -0x420);
    for (uVar1 = unaff_EBX >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *unaff_ESI;
      unaff_ESI = unaff_ESI + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar1 = unaff_EBX & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)unaff_ESI;
      unaff_ESI = (undefined4 *)((int)unaff_ESI + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    uVar2 = *(undefined4 *)(unaff_EBP + 0x14);
    *(undefined1 *)(unaff_EBX + *(int *)(unaff_EBP + -0x420)) = 0;
    uVar2 = FUN_00402900(*(undefined4 *)(unaff_EBP + -0x420),uVar2);
    unaff_EDI = *(HMODULE *)(unaff_EBP + 8);
  }
  FreeLibrary(unaff_EDI);
  if (*(int *)(unaff_EBP + -0x420) != unaff_EBP + -0x41c) {
    FUN_00403d50();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}




/* Function: FUN_004028d0 */

void __thiscall FUN_004028d0(undefined4 *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_2);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)FUN_004010b0(0x8007000e);
  }
  *param_1 = pvVar1;
  return;
}




/* Function: FUN_00402900 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __thiscall FUN_00402900(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *local_1004;
  char local_1000 [4092];
  undefined4 uStack_4;
  
  uStack_4 = 0x40290a;
  iVar3 = FUN_00402bd0(param_2,&local_1004);
  if (-1 < iVar3) {
    *param_1 = local_1004;
    cVar1 = *local_1004;
    while( true ) {
      if ((cVar1 == '\0') || (iVar3 = FUN_00402aa0(local_1000), iVar3 < 0)) goto LAB_004029ba;
      iVar4 = FUN_00402a00(local_1000);
      if (iVar4 == 0) break;
      iVar3 = FUN_00402aa0(local_1000);
      if (iVar3 < 0) goto LAB_004029ba;
      if (local_1000[0] != '{') break;
      if (param_3 == 0) {
        iVar3 = FUN_00402f50(local_1000,iVar4,0,0);
        if (iVar3 < 0) goto LAB_004029ba;
      }
      else {
        uVar2 = *param_1;
        iVar3 = FUN_00402f50(local_1000,iVar4,param_3,0);
        if (iVar3 < 0) {
          *param_1 = uVar2;
          FUN_00402f50(local_1000,iVar4,0,0);
          goto LAB_004029ba;
        }
      }
      FUN_00402a40();
      cVar1 = *(char *)*param_1;
    }
    iVar3 = -0x7ffdfff7;
LAB_004029ba:
    CoTaskMemFree(local_1004);
  }
  return iVar3;
}




/* Function: FUN_00402a00 */

undefined4 FUN_00402a00(LPCSTR param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = lstrcmpiA(param_1,(&PTR_DAT_00582980)[uVar2 * 2]);
    if (iVar1 == 0) {
      return (&DAT_00582984)[uVar2 * 2];
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xe);
  return 0;
}




/* Function: FUN_00402a40 */

void __fastcall FUN_00402a40(undefined4 *param_1)

{
  LPSTR pCVar1;
  
  do {
    switch(*(LPCSTR)*param_1) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      pCVar1 = CharNextA((LPCSTR)*param_1);
      *param_1 = pCVar1;
      break;
    default:
      return;
    }
  } while( true );
}




/* Function: FUN_00402aa0 */

undefined4 __thiscall FUN_00402aa0(undefined4 *param_1,CHAR *param_2)

{
  char cVar1;
  LPSTR pCVar2;
  LPCSTR pCVar3;
  CHAR *pCVar4;
  
  (*(code *)PTR_FUN_005a20d0)();
  FUN_00402a40();
  cVar1 = *(LPCSTR)*param_1;
  if (cVar1 == '\0') {
    return 0x80020009;
  }
  if (cVar1 == '\'') {
    pCVar2 = CharNextA((LPCSTR)*param_1);
    *param_1 = pCVar2;
    cVar1 = *pCVar2;
    pCVar4 = param_2;
    while( true ) {
      if ((cVar1 == '\0') ||
         ((*(LPCSTR)*param_1 == '\'' && (pCVar2 = CharNextA((LPCSTR)*param_1), *pCVar2 != '\'')))) {
        if (*(char *)*param_1 == '\0') {
          return 0x80020009;
        }
        *pCVar4 = '\0';
        pCVar2 = CharNextA((LPCSTR)*param_1);
        *param_1 = pCVar2;
        return 0;
      }
      if (*(LPCSTR)*param_1 == '\'') {
        pCVar2 = CharNextA((LPCSTR)*param_1);
        *param_1 = pCVar2;
      }
      pCVar3 = (LPCSTR)*param_1;
      pCVar2 = CharNextA(pCVar3);
      *param_1 = pCVar2;
      if (param_2 + 0x1000 <= pCVar4 + 2) break;
      if (pCVar3 < pCVar2) {
        do {
          *pCVar4 = *pCVar3;
          pCVar3 = pCVar3 + 1;
          pCVar4 = pCVar4 + 1;
        } while (pCVar3 < (LPCSTR)*param_1);
      }
      cVar1 = *(char *)*param_1;
    }
    return 0x80020009;
  }
  do {
    pCVar3 = (LPCSTR)*param_1;
    switch(*pCVar3) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      goto switchD_00402b74_caseD_9;
    }
    pCVar2 = CharNextA(pCVar3);
    *param_1 = pCVar2;
    if (pCVar3 < pCVar2) {
      do {
        *param_2 = *pCVar3;
        pCVar3 = pCVar3 + 1;
        param_2 = param_2 + 1;
      } while (pCVar3 < (CHAR *)*param_1);
    }
  } while (*(char *)*param_1 != '\0');
switchD_00402b74_caseD_9:
  *param_2 = '\0';
  return 0;
}




/* Function: FUN_00402bd0 */

undefined4 __thiscall FUN_00402bd0(undefined4 *param_1,LPCSTR param_2,int *param_3)

{
  char cVar1;
  LPVOID pvVar2;
  int iVar3;
  LPCSTR lpsz;
  LPSTR pCVar4;
  LPCSTR pCVar5;
  undefined4 uVar6;
  LPVOID pvStack_30;
  CHAR aCStack_2c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pvVar2 = pvStack_30;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057a7c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (*(code *)PTR_FUN_005a20d0)();
  *param_3 = 0;
  iVar3 = lstrlenA(param_2);
  FUN_00402d60(iVar3 << 1);
  uStack_4 = 0;
  if (pvStack_30 == (LPVOID)0x0) {
    CoTaskMemFree((LPVOID)0x0);
    ExceptionList = pvStack_c;
    return 0x8007000e;
  }
  *param_1 = param_2;
  cVar1 = *param_2;
  do {
    if (cVar1 == '\0') {
      uVar6 = 0;
      pvStack_30 = (LPVOID)0x0;
      *param_3 = (int)pvVar2;
LAB_00402ca3:
      CoTaskMemFree(pvStack_30);
      ExceptionList = pvStack_c;
      return uVar6;
    }
    lpsz = (LPCSTR)*param_1;
    if (*lpsz == '%') {
      lpsz = CharNextA(lpsz);
      *param_1 = lpsz;
      if (*lpsz == '%') goto LAB_00402c65;
      cVar1 = *lpsz;
      while( true ) {
        if (cVar1 == '\0') goto LAB_00402cdf;
        if (cVar1 == '%') break;
        lpsz = CharNextA(lpsz);
        cVar1 = *lpsz;
      }
      if (lpsz == (LPCSTR)0x0) {
LAB_00402cdf:
        uVar6 = 0x80020009;
        goto LAB_00402ca3;
      }
      iVar3 = (int)lpsz - (int)*param_1;
      if (0x1f < iVar3) {
        uVar6 = 0x80004005;
        goto LAB_00402ca3;
      }
      lstrcpynA(aCStack_2c,(LPCSTR)*param_1,iVar3 + 1);
      iVar3 = FUN_00402eb0(aCStack_2c);
      if (iVar3 == 0) goto LAB_00402cdf;
      iVar3 = FUN_00402e30(iVar3);
      if (iVar3 == 0) goto LAB_00402d4a;
      pCVar5 = (LPCSTR)*param_1;
      while (pCVar5 != lpsz) {
        pCVar5 = CharNextA((LPCSTR)*param_1);
        *param_1 = pCVar5;
      }
    }
    else {
LAB_00402c65:
      pCVar4 = CharNextA(lpsz);
      iVar3 = FUN_00402db0(lpsz,(int)pCVar4 - (int)lpsz);
      if (iVar3 == 0) {
LAB_00402d4a:
        uVar6 = 0x8007000e;
        goto LAB_00402ca3;
      }
    }
    pCVar4 = CharNextA((LPCSTR)*param_1);
    *param_1 = pCVar4;
    cVar1 = *pCVar4;
  } while( true );
}




/* Function: FUN_00402d60 */

undefined4 * __thiscall FUN_00402d60(undefined4 *param_1,SIZE_T param_2)

{
  undefined1 *puVar1;
  
  if ((int)param_2 < 100) {
    param_2 = 1000;
  }
  *param_1 = 0;
  param_1[1] = param_2;
  puVar1 = CoTaskMemAlloc(param_2);
  param_1[2] = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  return param_1;
}




/* Function: FUN_00402da0 */

void __fastcall FUN_00402da0(int param_1)

{
  CoTaskMemFree(*(LPVOID *)(param_1 + 8));
  return;
}




/* Function: FUN_00402db0 */

undefined4 __thiscall FUN_00402db0(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  SIZE_T cb;
  LPVOID pvVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_1[1] <= (int)(*param_1 + 1 + param_3)) {
    do {
      cb = param_1[1] * 2;
      param_1[1] = cb;
    } while ((int)cb <= (int)(*param_1 + 1 + param_3));
    pvVar2 = CoTaskMemRealloc((LPVOID)param_1[2],cb);
    if (pvVar2 == (LPVOID)0x0) {
      return 0;
    }
    param_1[2] = (int)pvVar2;
  }
  puVar4 = (undefined4 *)(*param_1 + param_1[2]);
  for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + param_3;
  *(undefined1 *)(iVar1 + param_3 + param_1[2]) = 0;
  return 1;
}




/* Function: FUN_00402e30 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00402e30(LPCWSTR param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  UINT aUStackY_38 [2];
  DWORD aDStackY_30 [3];
  int aiStackY_24 [3];
  
  if (param_1 != (LPCWSTR)0x0) {
    uVar2 = (*(code *)PTR_FUN_005a20d0)();
    aiStackY_24[2] = 0x402e51;
    iVar3 = lstrlenW(param_1);
    puVar4 = (undefined1 *)(iVar3 * 2 + 5U & 0xfffffffc);
    iVar1 = -(int)puVar4;
    if (&stack0xffffffec != puVar4) {
      *(undefined4 *)(&stack0xffffffe8 + iVar1) = 0;
      *(undefined4 *)((int)aiStackY_24 + iVar1 + 8) = 0;
      *(int *)((int)aiStackY_24 + iVar1 + 4) = iVar3 * 2 + 2;
      *(undefined1 **)((int)aiStackY_24 + iVar1) = &stack0xffffffec + iVar1;
      *(undefined4 *)((int)aDStackY_30 + iVar1 + 8) = 0xffffffff;
      *(LPCWSTR *)((int)aDStackY_30 + iVar1 + 4) = param_1;
      *(undefined4 *)((int)aDStackY_30 + iVar1) = 0;
      *(undefined4 *)((int)aUStackY_38 + iVar1 + 4) = uVar2;
      (&stack0xffffffec)[iVar1] = 0;
      puVar5 = (undefined1 *)((int)aUStackY_38 + iVar1);
      *(undefined4 *)((int)aUStackY_38 + iVar1) = 0x402e80;
      WideCharToMultiByte(*(UINT *)((int)aUStackY_38 + iVar1 + 4),
                          *(DWORD *)((int)aDStackY_30 + iVar1),
                          *(LPCWSTR *)((int)aDStackY_30 + iVar1 + 4),
                          *(int *)((int)aDStackY_30 + iVar1 + 8),
                          *(LPSTR *)((int)aiStackY_24 + iVar1),
                          *(int *)((int)aiStackY_24 + iVar1 + 4),
                          *(LPCSTR *)((int)aiStackY_24 + iVar1 + 8),
                          *(LPBOOL *)(&stack0xffffffe8 + iVar1));
      *(undefined1 **)((int)puVar5 + -4) = &stack0xffffffec + iVar1;
      puVar6 = puVar5 + -8;
      *(undefined4 *)(puVar5 + -8) = 0x402e99;
      iVar3 = lstrlenA(*(LPCSTR *)(puVar5 + -4));
      *(int *)(puVar6 + -4) = iVar3;
      *(undefined1 **)((int)puVar6 + -8) = &stack0xffffffec + iVar1;
      *(undefined4 *)(puVar6 + -0xc) = 0x402ea3;
      uVar2 = FUN_00402db0();
      return uVar2;
    }
  }
  return 0;
}




/* Function: FUN_00402eb0 */

undefined4 __fastcall FUN_00402eb0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  (*(code *)PTR_FUN_005a20d0)();
  FUN_004010f0();
  iVar2 = FUN_00402f00(&stack0x00000004);
  if (iVar2 == -1) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    return 0;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return uVar1;
}




/* Function: FUN_00402f00 */

int __thiscall FUN_00402f00(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[2]) {
    do {
      iVar1 = lstrcmpiA(*(LPCSTR *)(*param_1 + iVar2 * 4),(LPCSTR)*param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[2]);
  }
  return -1;
}




/* Function: FUN_00402f50 */

int FUN_00402f50(LPCSTR param_1,HKEY param_2,int param_3,int param_4)

{
  char cVar1;
  HKEY hKey;
  int iVar2;
  int iVar3;
  LPCSTR pCVar4;
  LSTATUS LVar5;
  undefined **ppuVar6;
  HKEY local_22c;
  HKEY local_228 [2];
  HKEY local_220;
  int local_21c;
  DWORD local_218;
  CHAR local_214 [260];
  CHAR local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0057a801;
  local_c = ExceptionList;
  local_22c = (HKEY)0x0;
  local_4 = 0;
  local_21c = param_4;
  ExceptionList = &local_c;
  iVar2 = FUN_00402aa0(param_1);
  if (iVar2 < 0) {
    FUN_004035e0();
  }
  else {
    cVar1 = *param_1;
    while (cVar1 != '}') {
      local_228[0] = (HKEY)0x1;
      iVar3 = lstrcmpiA(param_1,"Delete");
      iVar2 = lstrcmpiA(param_1,"ForceRemove");
      if ((iVar2 == 0) || (iVar3 == 0)) {
        iVar2 = FUN_00402aa0(param_1);
        if (iVar2 < 0) break;
        if (param_3 == 0) goto LAB_0040312e;
        local_220 = (HKEY)0x0;
        cVar1 = *param_1;
        local_4 = CONCAT31(local_4._1_3_,1);
        pCVar4 = param_1;
        while (cVar1 != '\0') {
          if (cVar1 == '\\') {
            FUN_004035e0();
            goto LAB_0040356b;
          }
          pCVar4 = CharNextA(pCVar4);
          cVar1 = *pCVar4;
        }
        ppuVar6 = &PTR_s_AppID_005826ec;
        do {
          iVar2 = lstrcmpiA(param_1,*ppuVar6);
          if (iVar2 == 0) goto LAB_00403081;
          ppuVar6 = ppuVar6 + 1;
        } while ((int)ppuVar6 < 0x58271c);
        local_220 = param_2;
        FUN_004036d0(param_1);
        local_220 = (HKEY)0x0;
LAB_00403081:
        if (iVar3 != 0) {
          local_4 = local_4 & 0xffffff00;
          if (local_220 != (HKEY)0x0) {
            RegCloseKey(local_220);
          }
          goto LAB_0040312e;
        }
        iVar2 = FUN_00402aa0(param_1);
        if (iVar2 < 0) {
          if (local_220 != (HKEY)0x0) {
            RegCloseKey(local_220);
          }
          break;
        }
        iVar2 = FUN_00403650(param_1);
        if (iVar2 < 0) {
          FUN_004035e0();
          break;
        }
        local_4 = local_4 & 0xffffff00;
        if (local_220 != (HKEY)0x0) {
          RegCloseKey(local_220);
        }
LAB_004030c7:
        if ((*param_1 == '{') && (iVar3 = lstrlenA(param_1), iVar3 == 1)) {
          iVar2 = FUN_00402f50(param_1,local_22c,param_3,0);
          if (iVar2 < 0) break;
          iVar2 = FUN_00402aa0(param_1);
LAB_00403104:
          if (iVar2 < 0) break;
        }
      }
      else {
LAB_0040312e:
        iVar2 = lstrcmpiA(param_1,"NoRemove");
        if (iVar2 == 0) {
          local_228[0] = (HKEY)0x0;
          iVar2 = FUN_00402aa0(param_1);
          if (iVar2 < 0) break;
        }
        iVar2 = lstrcmpiA(param_1,"Val");
        if (iVar2 == 0) {
          iVar2 = FUN_00402aa0(local_110);
          if ((-1 < iVar2) && (iVar2 = FUN_00402aa0(param_1), -1 < iVar2)) {
            if (*param_1 != '=') {
LAB_0040356b:
              if (local_22c != (HKEY)0x0) {
                RegCloseKey(local_22c);
              }
              ExceptionList = local_c;
              return -0x7ffdfff7;
            }
            if (param_3 == 0) {
              if ((param_4 != 0) || (local_228[0] == (HKEY)0x0)) {
LAB_0040324f:
                iVar2 = FUN_00403650(param_1);
                goto LAB_00403104;
              }
              local_228[0] = (HKEY)0x0;
              iVar3 = RegOpenKeyExA(param_2,(LPCSTR)0x0,0,0x20006,local_228);
              hKey = local_228[0];
              if (iVar3 != 0) goto LAB_0040352c;
              LVar5 = RegDeleteValueA(local_228[0],local_110);
              if ((LVar5 == 0) || (LVar5 == 2)) {
                if (hKey != (HKEY)0x0) {
                  RegCloseKey(hKey);
                }
                goto LAB_0040324f;
              }
              iVar2 = FUN_004035c0(LVar5);
              if (hKey != (HKEY)0x0) {
                RegCloseKey(hKey);
              }
            }
            else {
              local_228[0] = param_2;
              local_4 = CONCAT31(local_4._1_3_,2);
              iVar2 = FUN_00403820(local_228,local_110,param_1);
              local_228[0] = (HKEY)0x0;
              if (-1 < iVar2) {
                local_4 = local_4 & 0xffffff00;
                goto LAB_004030c7;
              }
            }
          }
          break;
        }
        cVar1 = *param_1;
        pCVar4 = param_1;
        while (cVar1 != '\0') {
          if (cVar1 == '\\') goto LAB_0040356b;
          pCVar4 = CharNextA(pCVar4);
          cVar1 = *pCVar4;
        }
        if (param_3 != 0) {
          local_228[0] = (HKEY)0x0;
          LVar5 = RegOpenKeyExA(param_2,param_1,0,0x2001f,local_228);
          if (LVar5 == 0) {
            iVar2 = 0;
            if (local_22c != (HKEY)0x0) {
              iVar2 = RegCloseKey(local_22c);
            }
            local_22c = local_228[0];
            if (iVar2 != 0) goto LAB_004032d0;
LAB_0040334c:
            local_22c = local_228[0];
            iVar2 = FUN_00402aa0(param_1);
            if ((-1 < iVar2) &&
               ((*param_1 != '=' || (iVar2 = FUN_00403820(&local_22c,0,param_1), -1 < iVar2))))
            goto LAB_004030c7;
          }
          else {
LAB_004032d0:
            local_228[0] = (HKEY)0x0;
            LVar5 = RegOpenKeyExA(param_2,param_1,0,0x20019,local_228);
            if (LVar5 == 0) {
              iVar2 = 0;
              if (local_22c != (HKEY)0x0) {
                iVar2 = RegCloseKey(local_22c);
              }
              local_22c = local_228[0];
              if (iVar2 == 0) goto LAB_0040334c;
            }
            local_228[0] = (HKEY)0x0;
            iVar3 = RegCreateKeyExA(param_2,param_1,0,(LPSTR)0x0,0,0x2001f,
                                    (LPSECURITY_ATTRIBUTES)0x0,local_228,&local_218);
            if (iVar3 == 0) {
              iVar3 = 0;
              if (local_22c != (HKEY)0x0) {
                iVar3 = RegCloseKey(local_22c);
              }
              local_22c = local_228[0];
              if (iVar3 == 0) goto LAB_0040334c;
            }
LAB_0040352c:
            iVar2 = FUN_004035c0(iVar3);
          }
          break;
        }
        if (param_4 == 0) {
          local_220 = (HKEY)0x0;
          iVar3 = RegOpenKeyExA(param_2,param_1,0,0x20019,&local_220);
          if (iVar3 == 0) {
            iVar3 = 0;
            if (local_22c != (HKEY)0x0) {
              iVar3 = RegCloseKey(local_22c);
            }
            local_22c = local_220;
          }
          param_4 = 0;
          if (iVar3 != 0) goto LAB_004033d6;
        }
        else {
          iVar3 = 2;
LAB_004033d6:
          param_4 = 1;
        }
        lstrcpynA(local_214,param_1,0x104);
        iVar2 = FUN_00402aa0(param_1);
        if (((iVar2 < 0) || (iVar2 = FUN_00403650(param_1), iVar2 < 0)) ||
           ((*param_1 == '{' &&
            (((iVar2 = FUN_00402f50(param_1,local_22c,0,param_4), iVar2 < 0 && (param_4 == 0)) ||
             (iVar2 = FUN_00402aa0(param_1), iVar2 < 0)))))) break;
        param_4 = local_21c;
        if (iVar3 != 2) {
          if (iVar3 == 0) {
            if ((local_21c == 0) || (iVar3 = FUN_00403600(local_22c), iVar3 == 0)) {
              if (local_22c != (HKEY)0x0) {
                iVar3 = RegCloseKey(local_22c);
                local_22c = (HKEY)0x0;
                if (iVar3 != 0) goto LAB_0040352c;
              }
              if ((local_228[0] != (HKEY)0x0) &&
                 (iVar3 = RegDeleteKeyA(param_2,local_214), iVar3 != 0)) goto LAB_0040352c;
            }
            else {
              ppuVar6 = &PTR_s_AppID_005826ec;
              do {
                iVar3 = lstrcmpiA(local_214,*ppuVar6);
                if (iVar3 == 0) goto LAB_0040310e;
                ppuVar6 = ppuVar6 + 1;
              } while ((int)ppuVar6 < 0x58271c);
              if (local_228[0] != (HKEY)0x0) {
                FUN_004036d0(local_214);
              }
            }
          }
          else if (local_21c == 0) goto LAB_0040352c;
        }
      }
LAB_0040310e:
      cVar1 = *param_1;
    }
    if (local_22c != (HKEY)0x0) {
      RegCloseKey(local_22c);
    }
  }
  ExceptionList = local_c;
  return iVar2;
}




/* Function: FUN_004035c0 */

uint FUN_004035c0(uint param_1)

{
  if (0 < (int)param_1) {
    param_1 = param_1 & 0xffff | 0x80070000;
  }
  return param_1;
}




/* Function: FUN_004035e0 */

LSTATUS __fastcall FUN_004035e0(undefined4 *param_1)

{
  LSTATUS LVar1;
  
  LVar1 = 0;
  if ((HKEY)*param_1 != (HKEY)0x0) {
    LVar1 = RegCloseKey((HKEY)*param_1);
    *param_1 = 0;
  }
  return LVar1;
}




/* Function: FUN_00403600 */

bool FUN_00403600(HKEY param_1)

{
  LSTATUS LVar1;
  DWORD local_4;
  
  local_4 = 0;
  LVar1 = RegQueryInfoKeyA(param_1,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,&local_4,(LPDWORD)0x0,
                           (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                           (PFILETIME)0x0);
  if (LVar1 != 0) {
    return false;
  }
  return local_4 != 0;
}




/* Function: FUN_00403650 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_00403650(char *param_1)

{
  int iVar1;
  undefined1 local_1000 [4092];
  undefined4 uStack_4;
  
  uStack_4 = 0x40365a;
  if (*param_1 == '=') {
    iVar1 = FUN_00402aa0(param_1);
    if (iVar1 < 0) {
      return iVar1;
    }
    FUN_00402a40();
    iVar1 = FUN_00402aa0(local_1000);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = FUN_00402aa0(param_1);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  return 0;
}




/* Function: FUN_004036b0 */

void __fastcall FUN_004036b0(undefined4 *param_1)

{
  if ((HKEY)*param_1 != (HKEY)0x0) {
    RegCloseKey((HKEY)*param_1);
    *param_1 = 0;
  }
  return;
}




/* Function: FUN_004036d0 */

LSTATUS __thiscall FUN_004036d0(undefined4 *param_1,LPCSTR param_2)

{
  int iVar1;
  LSTATUS LVar2;
  HKEY pHVar3;
  HKEY local_114;
  DWORD local_110;
  HKEY local_10c;
  _FILETIME local_108;
  CHAR local_100 [256];
  
  local_10c = (HKEY)0x0;
  iVar1 = RegOpenKeyExA((HKEY)*param_1,param_2,0,0x2001f,&local_10c);
  if (iVar1 == 0) {
    iVar1 = FUN_004035e0();
    pHVar3 = local_10c;
    local_114 = local_10c;
    if (iVar1 == 0) {
      local_110 = 0x100;
      iVar1 = RegEnumKeyExA(local_10c,0,local_100,&local_110,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                            &local_108);
      while( true ) {
        if (iVar1 != 0) {
          if (pHVar3 != (HKEY)0x0) {
            RegCloseKey(pHVar3);
            local_114 = (HKEY)0x0;
          }
          LVar2 = RegDeleteKeyA((HKEY)*param_1,param_2);
          if (local_114 != (HKEY)0x0) {
            RegCloseKey(local_114);
          }
          return LVar2;
        }
        iVar1 = FUN_004036d0(local_100);
        if (iVar1 != 0) break;
        local_110 = 0x100;
        iVar1 = RegEnumKeyExA(pHVar3,0,local_100,&local_110,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                              &local_108);
      }
      if (pHVar3 != (HKEY)0x0) {
        RegCloseKey(pHVar3);
      }
      return iVar1;
    }
  }
  else {
    pHVar3 = (HKEY)0x0;
  }
  if (pHVar3 != (HKEY)0x0) {
    RegCloseKey(pHVar3);
  }
  return iVar1;
}




/* Function: FUN_00403820 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_00403820(undefined4 *param_1,LPCSTR param_2,undefined4 param_3)

{
  BYTE *pBVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  LSTATUS LVar5;
  UINT CodePage;
  LPSTR lpsz;
  BYTE *lpsz_00;
  BOOL BVar6;
  BYTE *pBVar7;
  BYTE local_1128 [4096];
  BYTE *local_128;
  BYTE local_124 [260];
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057a826;
  pvStack_10 = ExceptionList;
  local_18 = 0x403843;
  local_14 = &stack0xffffeecc;
  local_20 = 0;
  ExceptionList = &pvStack_10;
  uVar3 = FUN_00402aa0(local_1128);
  if ((int)uVar3 < 0) {
    ExceptionList = pvStack_10;
    return uVar3;
  }
  iVar4 = FUN_00403ca0(local_1128,&local_20);
  if (iVar4 == 0) {
    ExceptionList = pvStack_10;
    return 0x80020009;
  }
  FUN_00402a40();
  uVar3 = FUN_00402aa0(local_1128);
  if ((int)uVar3 < 0) {
    ExceptionList = pvStack_10;
    return uVar3;
  }
  uVar3 = local_20 & 0xffff;
  if (uVar3 < 0x14) {
    if (uVar3 == 0x13) {
      CodePage = (*(code *)PTR_FUN_005a20d0)();
      iVar4 = lstrlenA((LPCSTR)local_1128);
      local_14 = &stack0xffffeecc;
      puVar2 = &stack0xffffeecc;
      if (&stack0x00000000 != (undefined1 *)0x1134) {
        MultiByteToWideChar(CodePage,0,(LPCSTR)local_1128,-1,(LPWSTR)&stack0xffffeecc,iVar4 + 1);
        puVar2 = local_14;
      }
      local_14 = puVar2;
      VarUI4FromStr((LPCOLESTR)&stack0xffffeecc,0,0,&local_1c);
      local_18 = local_1c;
      LVar5 = RegSetValueExA((HKEY)*param_1,param_2,0,4,(BYTE *)&local_18,4);
    }
    else {
      if (uVar3 != 8) {
        if (uVar3 == 0x11) {
          local_1c = lstrlenA((LPCSTR)local_1128);
          if ((local_1c & 1) != 0) {
            ExceptionList = pvStack_10;
            return 0x80004005;
          }
          local_18 = (int)local_1c / 2;
          local_128 = (BYTE *)0x0;
          local_8 = 4;
          if (local_18 < 0x101) {
            local_128 = local_124;
            uVar3 = FUN_00403930();
            return uVar3;
          }
          FUN_004028d0(local_18);
          uVar3 = FUN_00403930();
          return uVar3;
        }
        goto LAB_00403be2;
      }
      iVar4 = lstrlenA((LPCSTR)local_1128);
      LVar5 = RegSetValueExA((HKEY)*param_1,param_2,0,1,local_1128,iVar4 + 1);
    }
  }
  else {
    if (uVar3 != 0x4008) goto LAB_00403be2;
    iVar4 = lstrlenA((LPCSTR)local_1128);
    local_128 = (BYTE *)0x0;
    local_8 = 1;
    if (iVar4 + 1U < 0x101) {
      local_128 = local_124;
LAB_00403b25:
      lpsz_00 = local_1128;
      pBVar7 = local_128;
      while (local_1128[0] != '\0') {
        lpsz = CharNextA((LPCSTR)lpsz_00);
        if ((*lpsz_00 == '\\') && (*lpsz == '0')) {
          *pBVar7 = '\0';
          lpsz_00 = (BYTE *)CharNextA(lpsz);
        }
        else {
          *pBVar7 = *lpsz_00;
          BVar6 = IsDBCSLeadByte(*lpsz_00);
          if (BVar6 != 0) {
            pBVar1 = lpsz_00 + 1;
            pBVar7 = pBVar7 + 1;
            lpsz_00 = lpsz_00 + 1;
            *pBVar7 = *pBVar1;
          }
          lpsz_00 = lpsz_00 + 1;
        }
        pBVar7 = pBVar7 + 1;
        local_1128[0] = *lpsz_00;
      }
      *pBVar7 = '\0';
      LVar5 = FUN_00403c60(param_2,local_128);
    }
    else {
      FUN_004028d0(iVar4 + 1U);
      if (local_128 != (BYTE *)0x0) goto LAB_00403b25;
      LVar5 = 0xe;
    }
    local_8 = 0xffffffff;
    if (local_128 != local_124) {
      FUN_00403d50();
    }
  }
  if (LVar5 != 0) {
    uVar3 = FUN_004035c0(LVar5);
    ExceptionList = pvStack_10;
    return uVar3;
  }
LAB_00403be2:
  uVar3 = FUN_00402aa0(param_3);
  ExceptionList = pvStack_10;
  return uVar3 & (-1 < (int)uVar3) - 1;
}




/* Function: FUN_00403930 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

uint FUN_00403930(void)

{
  uint uVar1;
  byte *pbVar2;
  LSTATUS LVar3;
  char cVar4;
  int unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  uint uVar5;
  undefined4 *puVar6;
  
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (*(undefined4 **)(unaff_EBP + -0x124) == (undefined4 *)0x0) {
    if (unaff_EBP != 0x120) {
      FUN_00403d50();
    }
    uVar1 = 0x80004005;
  }
  else {
    puVar6 = *(undefined4 **)(unaff_EBP + -0x124);
    for (uVar1 = unaff_ESI >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    uVar5 = 0;
    for (uVar1 = unaff_ESI & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    if (0 < unaff_EBX) {
      do {
        pbVar2 = (byte *)((int)uVar5 / 2 + *(int *)(unaff_EBP + -0x124));
        cVar4 = *(char *)(unaff_EBP + -0x1124 + uVar5);
        switch(cVar4) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
          cVar4 = cVar4 + -0x30;
          break;
        default:
          cVar4 = '\0';
          break;
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
          cVar4 = cVar4 + -0x37;
          break;
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
          cVar4 = cVar4 + -0x57;
        }
        uVar1 = uVar5 & 1;
        uVar5 = uVar5 + 1;
        *pbVar2 = *pbVar2 | cVar4 << (4U - (char)(uVar1 << 2) & 0x1f);
      } while ((int)uVar5 < unaff_EBX);
    }
    LVar3 = RegSetValueExA((HKEY)**(undefined4 **)(unaff_EBP + 8),*(LPCSTR *)(unaff_EBP + 0xc),0,3,
                           *(BYTE **)(unaff_EBP + -0x124),*(DWORD *)(unaff_EBP + -0x14));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x124) != unaff_EBP + -0x120) {
      FUN_00403d50();
    }
    if (LVar3 == 0) {
      uVar1 = FUN_00402aa0(*(undefined4 *)(unaff_EBP + 0x10));
      uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
    }
    else {
      uVar1 = FUN_004035c0(LVar3);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}




/* Function: FUN_00403c60 */

void __thiscall FUN_00403c60(undefined4 *param_1,LPCSTR param_2,BYTE *param_3)

{
  int iVar1;
  BYTE *lpString;
  DWORD cbData;
  
  cbData = 0;
  lpString = param_3;
  do {
    iVar1 = lstrlenA((LPCSTR)lpString);
    iVar1 = iVar1 + 1;
    lpString = lpString + iVar1;
    cbData = cbData + iVar1;
  } while (iVar1 != 1);
  RegSetValueExA((HKEY)*param_1,param_2,0,7,param_3,cbData);
  return;
}




/* Function: FUN_00403ca0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00403ca0(LPCSTR param_1,undefined2 *param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((_DAT_005b3bbc & 1) == 0) {
    _DAT_005b3bbc = _DAT_005b3bbc | 1;
    DAT_005b3b9c = &DAT_005827c8;
    DAT_005b3ba0 = 8;
    DAT_005b3ba4 = &DAT_005827c4;
    _DAT_005b3ba8 = 0x4008;
    _DAT_005b3bac = &DAT_005827c0;
    _DAT_005b3bb0 = 0x13;
    _DAT_005b3bb4 = &DAT_005827bc;
    _DAT_005b3bb8 = 0x11;
  }
  uVar2 = 0;
  do {
    iVar1 = lstrcmpiA(param_1,(&DAT_005b3b9c)[uVar2 * 2]);
    if (iVar1 == 0) {
      *param_2 = (&DAT_005b3ba0)[uVar2 * 4];
      return 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return 0;
}




/* Function: FUN_00403d50 */

void __fastcall FUN_00403d50(undefined4 *param_1)

{
  free((void *)*param_1);
  return;
}




/* Function: FUN_00403d60 */

void __fastcall FUN_00403d60(int *param_1)

{
  if ((int *)*param_1 != param_1 + 1) {
    FUN_00403d50();
    return;
  }
  return;
}




/* Function: FUN_00403d70 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00403d70(undefined4 param_1,undefined4 param_2,int param_3,LPCWSTR param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  UINT aUStackY_38 [2];
  DWORD aDStackY_30 [3];
  int aiStackY_24 [3];
  
  uVar2 = (*(code *)PTR_FUN_005a20d0)();
  if ((param_3 != 0) && (param_4 != (LPCWSTR)0x0)) {
    aiStackY_24[2] = 0x403d9d;
    iVar3 = lstrlenW(param_4);
    puVar4 = (undefined1 *)(iVar3 * 2 + 5U & 0xfffffffc);
    iVar1 = -(int)puVar4;
    puVar5 = &stack0xffffffec + iVar1;
    if (&stack0xffffffec != puVar4) {
      *(undefined4 *)(&stack0xffffffe8 + iVar1) = 0;
      *(undefined4 *)((int)aiStackY_24 + iVar1 + 8) = 0;
      *(int *)((int)aiStackY_24 + iVar1 + 4) = iVar3 * 2 + 2;
      *(undefined1 **)((int)aiStackY_24 + iVar1) = &stack0xffffffec + iVar1;
      *(undefined4 *)((int)aDStackY_30 + iVar1 + 8) = 0xffffffff;
      *(LPCWSTR *)((int)aDStackY_30 + iVar1 + 4) = param_4;
      *(undefined4 *)((int)aDStackY_30 + iVar1) = 0;
      *(undefined4 *)((int)aUStackY_38 + iVar1 + 4) = uVar2;
      (&stack0xffffffec)[iVar1] = 0;
      puVar5 = (undefined1 *)((int)aUStackY_38 + iVar1);
      *(undefined4 *)((int)aUStackY_38 + iVar1) = 0x403dd1;
      WideCharToMultiByte(*(UINT *)((int)aUStackY_38 + iVar1 + 4),
                          *(DWORD *)((int)aDStackY_30 + iVar1),
                          *(LPCWSTR *)((int)aDStackY_30 + iVar1 + 4),
                          *(int *)((int)aDStackY_30 + iVar1 + 8),
                          *(LPSTR *)((int)aiStackY_24 + iVar1),
                          *(int *)((int)aiStackY_24 + iVar1 + 4),
                          *(LPCSTR *)((int)aiStackY_24 + iVar1 + 8),
                          *(LPBOOL *)(&stack0xffffffe8 + iVar1));
    }
    param_4 = (LPCWSTR)(&stack0xffffffec + iVar1);
    *(int *)(puVar5 + -4) = param_3;
    puVar6 = puVar5 + -8;
    *(undefined4 *)(puVar5 + -8) = 0x403dde;
    iVar3 = lstrlenW(*(LPCWSTR *)(puVar5 + -4));
    puVar4 = (undefined1 *)(iVar3 * 2 + 5U & 0xfffffffc);
    *(undefined4 *)(puVar6 + -4) = 0x403def;
    iVar1 = -(int)puVar4;
    puVar7 = puVar6 + iVar1;
    if (puVar6 != puVar4) {
      *(undefined4 *)(puVar6 + iVar1 + -4) = 0;
      *(undefined4 *)(puVar6 + iVar1 + -8) = 0;
      *(int *)(puVar6 + iVar1 + -0xc) = iVar3 * 2 + 2;
      *(int *)(puVar6 + iVar1 + -0x10) = (int)puVar6 + iVar1;
      *(undefined4 *)(puVar6 + iVar1 + -0x14) = 0xffffffff;
      *(int *)(puVar6 + iVar1 + -0x18) = param_3;
      *(undefined4 *)(puVar6 + iVar1 + -0x1c) = 0;
      *(undefined4 *)(puVar6 + iVar1 + -0x20) = uVar2;
      puVar6[iVar1] = 0;
      puVar7 = puVar6 + iVar1 + -0x24;
      *(undefined4 *)(puVar6 + iVar1 + -0x24) = 0x403e0d;
      WideCharToMultiByte(*(UINT *)(puVar6 + iVar1 + -0x20),*(DWORD *)(puVar6 + iVar1 + -0x1c),
                          *(LPCWSTR *)(puVar6 + iVar1 + -0x18),*(int *)(puVar6 + iVar1 + -0x14),
                          *(LPSTR *)(puVar6 + iVar1 + -0x10),*(int *)(puVar6 + iVar1 + -0xc),
                          *(LPCSTR *)(puVar6 + iVar1 + -8),*(LPBOOL *)(puVar6 + iVar1 + -4));
    }
    *(undefined4 *)(puVar7 + -4) = 0;
    *(LPCWSTR *)(puVar7 + -8) = param_4;
    *(int *)(puVar7 + -0xc) = (int)puVar6 + iVar1;
    *(undefined4 *)(puVar7 + -0x10) = param_2;
    *(undefined4 *)(puVar7 + -0x14) = 0x403e20;
    uVar2 = FUN_00402720();
    return uVar2;
  }
  return 0x80070057;
}




/* Function: FUN_00403fc0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_00403fc0(undefined4 param_1,undefined4 param_2,undefined2 param_3,LPCWSTR param_4)

{
  UINT CodePage;
  int iVar1;
  undefined1 *puVar2;
  
  CodePage = (*(code *)PTR_FUN_005a20d0)();
  if (param_4 != (LPCWSTR)0x0) {
    iVar1 = lstrlenW(param_4);
    puVar2 = &stack0xffffffec;
    if (&stack0x00000000 != (undefined1 *)0x14) {
      WideCharToMultiByte(CodePage,0,param_4,-1,&stack0xffffffec,iVar1 * 2 + 2,(LPCSTR)0x0,
                          (LPBOOL)0x0);
      goto LAB_00404011;
    }
  }
  puVar2 = (undefined1 *)0x0;
LAB_00404011:
  FUN_00402720(param_2,param_3,puVar2,1);
  return;
}




/* Function: FUN_00404040 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_00404040(undefined4 param_1,undefined4 param_2,undefined2 param_3,LPCWSTR param_4)

{
  UINT CodePage;
  int iVar1;
  undefined1 *puVar2;
  
  CodePage = (*(code *)PTR_FUN_005a20d0)();
  if (param_4 != (LPCWSTR)0x0) {
    iVar1 = lstrlenW(param_4);
    puVar2 = &stack0xffffffec;
    if (&stack0x00000000 != (undefined1 *)0x14) {
      WideCharToMultiByte(CodePage,0,param_4,-1,&stack0xffffffec,iVar1 * 2 + 2,(LPCSTR)0x0,
                          (LPBOOL)0x0);
      goto LAB_00404091;
    }
  }
  puVar2 = (undefined1 *)0x0;
LAB_00404091:
  FUN_00402720(param_2,param_3,puVar2,0);
  return;
}




/* Function: FUN_004040c0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_004040c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  HANDLE pvVar2;
  undefined4 uVar3;
  LPCRITICAL_SECTION p_Var4;
  DWORD DVar5;
  void *pvStack_2310;
  void *pvStack_2304;
  HWND local_22d4;
  LPVOID pvStack_22c4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057a846;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004068e0();
  p_Var4 = (LPCRITICAL_SECTION)(DAT_005b3b58 + 0x10);
  local_4 = 0;
  iVar1 = FUN_004010f0();
  if (-1 < iVar1) {
    GetCurrentThreadId();
    FUN_00402530();
    LeaveCriticalSection(p_Var4);
  }
  FUN_00405940();
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = FUN_00401ea0(0);
  if (iVar1 == 0) {
    FUN_0042d540();
    FUN_00401940();
    if (pvStack_22c4 != (LPVOID)0x0) {
      DVar5 = 0;
      pvVar2 = GetProcessHeap();
      HeapFree(pvVar2,DVar5,pvStack_22c4);
    }
    if (pvStack_2304 != (void *)0x0) {
      free(pvStack_2304);
    }
    if (pvStack_2310 != (void *)0x0) {
      free(pvStack_2310);
    }
    uVar3 = 0;
  }
  else {
    ShowWindow(local_22d4,param_3);
    uVar3 = FUN_004067d0();
    p_Var4 = (LPCRITICAL_SECTION)(DAT_005b3b58 + 0x10);
    iVar1 = FUN_004010f0();
    if (-1 < iVar1) {
      GetCurrentThreadId();
      FUN_00401c70();
      LeaveCriticalSection(p_Var4);
    }
    FUN_0042d540();
    FUN_00401940();
    if (pvStack_22c4 != (LPVOID)0x0) {
      DVar5 = 0;
      pvVar2 = GetProcessHeap();
      HeapFree(pvVar2,DVar5,pvStack_22c4);
    }
    if (pvStack_2304 != (void *)0x0) {
      free(pvStack_2304);
    }
    if (pvStack_2310 != (void *)0x0) {
      free(pvStack_2310);
    }
  }
  ExceptionList = pvStack_c;
  return uVar3;
}




/* Function: FUN_00404430 */

LARGE_INTEGER * __fastcall FUN_00404430(LARGE_INTEGER *param_1)

{
  int iVar1;
  LARGE_INTEGER *pLVar2;
  LARGE_INTEGER *pLVar3;
  
  param_1[0x42].s.LowPart = 0;
  param_1[0x43].s.LowPart = 0;
  *(undefined4 *)((int)param_1 + 0x21c) = 0;
  param_1[0x44].s.LowPart = 0;
  *(undefined4 *)((int)param_1 + 0x224) = 0;
  QueryPerformanceFrequency(param_1 + 1);
  QueryPerformanceCounter(param_1);
  param_1[2].s.LowPart = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  pLVar2 = param_1 + 2;
  pLVar3 = param_1 + 3;
  for (iVar1 = 0x7e; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pLVar3->s).LowPart = (pLVar2->s).LowPart;
    pLVar2 = (LARGE_INTEGER *)&(pLVar2->s).HighPart;
    pLVar3 = (LARGE_INTEGER *)&(pLVar3->s).HighPart;
  }
  param_1[0x43].s.LowPart = 0;
  *(undefined4 *)((int)param_1 + 0x21c) = 0;
  return param_1;
}




/* Function: FUN_00404490 */

void __fastcall FUN_00404490(LARGE_INTEGER *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar3 = (param_1->s).HighPart;
  uVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  DVar4 = param_1[0x42].s.LowPart;
  uVar2 = (param_1->s).LowPart - uVar1;
  iVar3 = ((param_1->s).HighPart - iVar3) - (uint)((param_1->s).LowPart < uVar1);
  uVar5 = uVar2 - param_1[DVar4 + 2].s.LowPart;
  uVar1 = param_1[0x43].s.LowPart;
  *(int *)((int)param_1 + 0x21c) =
       *(int *)((int)param_1 + 0x21c) +
       ((iVar3 - *(int *)((int)param_1 + DVar4 * 8 + 0x14)) -
       (uint)(uVar2 < param_1[DVar4 + 2].s.LowPart)) + (uint)CARRY4(uVar1,uVar5);
  param_1[0x43].s.LowPart = uVar1 + uVar5;
  param_1[DVar4 + 2].s.LowPart = uVar2;
  param_1[DVar4 + 2].s.HighPart = iVar3;
  DVar4 = param_1[0x42].s.LowPart + 1;
  param_1[0x42].s.LowPart = DVar4;
  if (0x3f < (int)DVar4) {
    param_1[0x42].s.LowPart = 0;
  }
  uVar6 = __allmul(param_1[1].s.LowPart,*(undefined4 *)((int)param_1 + 0xc),0x40,0);
  param_1[0x44].QuadPart =
       (-(double)(longlong)((uVar6 >> 0x20 & 0x80000000) << 0x20) +
       (double)(uVar6 & 0x7fffffffffffffff)) /
       (-(double)(longlong)(((ulonglong)*(uint *)((int)param_1 + 0x21c) & 0x80000000) << 0x20) +
       (double)((ulonglong)param_1[0x43] & 0x7fffffffffffffff));
  return;
}




/* Function: FUN_00404580 */

undefined4 FUN_00404580(undefined4 param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_3 + 0x18) = 0x140;
  *(undefined4 *)(param_3 + 0x1c) = 200;
  return 0;
}




/* Function: FUN_004045a0 */

undefined4 FUN_004045a0(void)

{
  return 0;
}




/* Function: FUN_004045b0 */

undefined4 __thiscall FUN_004045b0(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)(param_1 + 0x5c) = param_3 == 1;
  if (param_3 == 1) {
    SetActiveWindow(*(HWND *)(param_1 + 4));
    SetFocus(*(HWND *)(param_1 + 4));
    ShowWindow(*(HWND *)(param_1 + 4),5);
  }
  return 0;
}




/* Function: FUN_004045f0 */

undefined4 __thiscall FUN_004045f0(int param_1,undefined4 param_2,uint param_3)

{
  if ((param_3 >> 0x10 == 0) && ((short)param_3 != 0)) {
    *(undefined1 *)(param_1 + 0x5c) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  if (*(char *)(param_1 + 0x5c) != '\0') {
    SetActiveWindow(*(HWND *)(param_1 + 4));
    SetFocus(*(HWND *)(param_1 + 4));
    ShowWindow(*(HWND *)(param_1 + 4),5);
  }
  return 0;
}




/* Function: FUN_00404640 */

undefined4 FUN_00404640(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  if (0 < (short)((uint)param_2 >> 0x10)) {
    uVar1 = FUN_0041cda0();
    FUN_0041cd90(uVar1 | 0x200);
    return 0;
  }
  if (param_2 < 0) {
    uVar1 = FUN_0041cda0();
    FUN_0041cd90(uVar1 | 0x400);
  }
  return 0;
}




/* Function: FUN_00404690 */

undefined4 __thiscall
FUN_00404690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_0041cda0();
  FUN_0041cd90(uVar1 | 0x22);
  if (*(char *)(param_1 + 100) == '\0') {
    SetCapture(*(HWND *)(param_1 + 4));
    *(undefined1 *)(param_1 + 100) = 1;
    *(int *)(param_1 + 0x68) = (int)(short)param_4;
    *(int *)(param_1 + 0x6c) = (int)(short)((uint)param_4 >> 0x10);
  }
  return 0;
}




/* Function: FUN_004046e0 */

undefined4 __fastcall FUN_004046e0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0041cda0();
  FUN_0041cd90(uVar1 & 0xfffffffd);
  uVar1 = FUN_0041cda0();
  FUN_0041cd90(uVar1 & 0xffffffdf);
  uVar1 = FUN_0041cda0();
  FUN_0041cd90(uVar1 | 8);
  if (*(char *)(param_1 + 100) != '\0') {
    ReleaseCapture();
  }
  return 0;
}




/* Function: FUN_00404740 */

undefined4 FUN_00404740(void)

{
  uint uVar1;
  
  uVar1 = FUN_0041cda0();
  FUN_0041cd90(uVar1 | 0x11);
  return 0;
}




/* Function: FUN_00404760 */

undefined4 FUN_00404760(void)

{
  uint uVar1;
  
  uVar1 = FUN_0041cda0();
  FUN_0041cd90(uVar1 & 0xfffffffe);
  uVar1 = FUN_0041cda0();
  FUN_0041cd90(uVar1 & 0xffffffef);
  uVar1 = FUN_0041cda0();
  FUN_0041cd90(uVar1 | 4);
  return 0;
}




/* Function: FUN_004047a0 */

undefined4 FUN_004047a0(void)

{
  uint uVar1;
  
  uVar1 = FUN_0041cda0();
  FUN_0041cd90(uVar1 | 0x140);
  return 0;
}




/* Function: FUN_004047c0 */

undefined4 FUN_004047c0(void)

{
  uint uVar1;
  
  uVar1 = FUN_0041cda0();
  FUN_0041cd90(uVar1 & 0xffffffbf);
  uVar1 = FUN_0041cda0();
  FUN_0041cd90(uVar1 | 0x80);
  return 0;
}




/* Function: FUN_004047f0 */

undefined4 __fastcall FUN_004047f0(int param_1)

{
  *(undefined1 *)(param_1 + 100) = 0;
  return 0;
}




/* Function: FUN_00404800 */

undefined4 __thiscall
FUN_00404800(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  
  sVar1 = (short)((uint)param_4 >> 0x10);
  if (*(char *)(param_1 + 100) != '\0') {
    *(int *)(param_1 + 0x68) = (int)(short)param_4;
    *(int *)(param_1 + 0x6c) = (int)sVar1;
  }
  *(int *)(param_1 + 0x74) = (int)sVar1;
  *(int *)(param_1 + 0x70) = (int)(short)param_4;
  return 0;
}




/* Function: FUN_00404830 */

undefined4 __thiscall FUN_00404830(int param_1,undefined4 param_2,undefined4 param_3)

{
  char local_100 [256];
  
  _snprintf(local_100,0x100,"FPS[%u] Tris[%u] AlphaTris[%u]",param_3,DAT_005b3bc4,DAT_005b3bc0);
  SetWindowTextA(*(HWND *)(param_1 + 4),local_100);
  return 0;
}




/* Function: FUN_00404880 */

undefined4 __thiscall
FUN_00404880(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1 = param_1 + 0x78;
  FUN_0041e5b0(param_3,param_4,param_1);
  FUN_0040aba0(param_3,param_4,param_1);
  return 0;
}




/* Function: FUN_004048a0 */

undefined4 __thiscall
FUN_004048a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1 = param_1 + 0x78;
  uVar1 = param_3;
  iVar2 = param_1;
  FUN_0041e5b0(param_3,param_1);
  FUN_0040c830(uVar1,iVar2);
  FUN_0041e5b0(param_3,param_4,param_1);
  FUN_0040ac60(param_3,param_4,param_1);
  return 0;
}




/* Function: FUN_004048e0 */

undefined4 __thiscall FUN_004048e0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  param_1 = param_1 + 0x78;
  param_4 = param_4 & 0xffff;
  FUN_0041e5b0(param_3,param_4,param_1);
  FUN_0040c690(param_3,param_4,param_1);
  return 0;
}




/* Function: FUN_00404910 */

undefined4 FUN_00404910(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  if (param_2 != 0xf140) {
    *param_4 = 0;
    return 1;
  }
  return 0;
}




/* Function: FUN_00404940 */

undefined4 FUN_00404940(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  HCURSOR hCursor;
  undefined4 *in_stack_00000010;
  
  iVar2 = FUN_0041cab0();
  if (iVar2 == 0) {
    return 0;
  }
  piVar3 = (int *)FUN_0041cab0();
  cVar1 = (**(code **)(*piVar3 + 0x88))();
  if (cVar1 != '\0') {
    *in_stack_00000010 = 1;
    piVar3 = (int *)FUN_0041cab0();
    hCursor = (HCURSOR)(**(code **)(*piVar3 + 0x8c))();
    SetCursor(hCursor);
    return 1;
  }
  SetCursor((HCURSOR)0x0);
  return 1;
}




/* Function: FUN_004049b0 */

undefined4 FUN_004049b0(void)

{
  return 0;
}




/* Function: FUN_004049c0 */

undefined1 __fastcall FUN_004049c0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x5c);
}




/* Function: FUN_00404f20 */

void __thiscall FUN_00404f20(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*param_1 + param_2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
  }
  return;
}




/* Function: FUN_00404f40 */

void __fastcall FUN_00404f40(undefined4 *param_1)

{
  undefined4 uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0057a878;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  param_1[3] = &DAT_00582aa0;
  local_8 = 1;
  uVar1 = thunk_FUN_00493c27(8);
  param_1[4] = uVar1;
  FUN_00404fa2();
  return;
}




/* Function: FUN_00404fa2 */

void FUN_00404fa2(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  puVar1 = *(undefined4 **)(unaff_ESI + 0x10);
  if (puVar1 != unaff_EBX) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}




/* Function: FUN_00404fd0 */

undefined4 __thiscall FUN_00404fd0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  
  if (param_1[1] == param_1[2]) {
    iVar2 = 1;
    if (param_1[2] != 0) {
      iVar2 = param_1[1] * 2;
    }
    pvVar1 = realloc((void *)*param_1,iVar2 * 4);
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    param_1[2] = iVar2;
    *param_1 = pvVar1;
  }
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  FUN_00404f20(iVar2,param_2);
  return 1;
}




/* Function: FUN_00405030 */

undefined4 __thiscall FUN_00405030(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < (int)param_1[2]) {
    piVar2 = (int *)*param_1;
    while (*piVar2 != *param_2) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      if ((int)param_1[2] <= iVar1) {
        return 0;
      }
    }
    if (iVar1 != -1) {
      return *(undefined4 *)(param_1[1] + iVar1 * 4);
    }
  }
  return 0;
}




/* Function: FUN_00406000 */

undefined4 __thiscall
FUN_00406000(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 *param_6,int param_7)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  
  if (param_7 == 0) {
    if (param_3 == 0x117) {
      param_7 = 0;
      if (param_4 == 0) {
        uVar3 = 1;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x10);
        if (iVar5 == 0) {
          uVar3 = 1;
        }
        else {
          psVar4 = *(short **)(param_1 + 0xc);
          sVar2 = *psVar4;
          while (sVar2 != -1) {
            if ((*(byte *)(psVar4 + 1) & 1) != 0) {
              FUN_004060e0(sVar2,iVar5,param_4);
            }
            psVar1 = psVar4 + 2;
            psVar4 = psVar4 + 2;
            iVar5 = iVar5 + 8;
            sVar2 = *psVar1;
          }
          uVar3 = 0;
        }
      }
      *param_6 = uVar3;
      if (param_7 != 0) {
        return 1;
      }
    }
    else if (param_3 == 0x111) {
      param_7 = 1;
      uVar3 = FUN_004061c0(0x111,param_4,param_5,&param_7);
      *param_6 = uVar3;
      if (param_7 != 0) {
        return 1;
      }
    }
  }
  return 0;
}




/* Function: FUN_004060e0 */

void FUN_004060e0(UINT param_1,ushort *param_2,HMENU param_3)

{
  ushort uVar1;
  BOOL BVar2;
  int iVar3;
  MENUITEMINFOA *pMVar4;
  HBITMAP *ppHVar5;
  MENUITEMINFOA local_58;
  undefined4 local_28;
  uint local_24;
  UINT local_1c;
  
  if ((*param_2 & 0x4000) != 0) {
    SetMenuDefaultItem(param_3,0xffffffff,0);
    *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xbf;
  }
  pMVar4 = &local_58;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    pMVar4->cbSize = 0;
    pMVar4 = (MENUITEMINFOA *)&pMVar4->fMask;
  }
  uVar1 = *param_2;
  local_58.cbSize = 0x2c;
  local_58.fMask = 1;
  local_58.wID = param_1;
  if ((uVar1 & 0x100) != 0) {
    local_58.fState = local_58.fState | 3;
  }
  if ((uVar1 & 0x200) != 0) {
    local_58.fState = local_58.fState | 8;
  }
  if ((uVar1 & 0x1000) != 0) {
    local_58.fState = local_58.fState | 0x1000;
  }
  if ((uVar1 & 0x2000) != 0) {
    ppHVar5 = &local_58.hbmpItem;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppHVar5 = (HBITMAP)0x0;
      ppHVar5 = ppHVar5 + 1;
    }
    local_58.hbmpItem = (HBITMAP)0x2c;
    local_28 = 0x10;
    local_1c = param_1;
    BVar2 = GetMenuItemInfoA(param_3,param_1,0,(LPMENUITEMINFOA)&local_58.hbmpItem);
    if (BVar2 != 0) {
      local_58.dwTypeData = *(LPSTR *)(param_2 + 2);
      local_58.fMask = local_58.fMask | 0x10;
      local_58.fType = local_58.fType | local_24 & 0xfffff7fb;
    }
  }
  SetMenuItemInfoA(param_3,param_1,0,&local_58);
  return;
}




/* Function: FUN_004061c0 */

undefined4 __thiscall
FUN_004061c0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  *param_5 = 0;
  if ((*(char *)(param_1 + 0x16) != '\0') && (param_3 >> 0x10 == 1)) {
    puVar4 = *(ushort **)(param_1 + 0xc);
    puVar3 = *(ushort **)(param_1 + 0x10);
    if (puVar3 != (ushort *)0x0) {
      uVar2 = *puVar4;
      while (uVar2 != 0xffff) {
        if ((param_3 & 0xffff) == (uint)uVar2) {
          uVar2 = *puVar3;
          goto LAB_00406210;
        }
        puVar1 = puVar4 + 2;
        puVar4 = puVar4 + 2;
        puVar3 = puVar3 + 4;
        uVar2 = *puVar1;
      }
    }
    uVar2 = 0;
LAB_00406210:
    if ((uVar2 & 0x100) != 0) {
      *param_5 = 1;
    }
  }
  return 0;
}




/* Function: FUN_00406230 */

undefined4
FUN_00406230(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 *param_5,int param_6)

{
  int iVar1;
  
  if (param_6 == 0) {
    if (param_2 == 5) {
      if (param_3 != 1) {
        FUN_004062c0(1);
      }
      *param_5 = 1;
    }
    else if ((param_2 == 0x4e) && (*(int *)(param_4 + 8) == -0x342)) {
      FUN_004062c0(0);
      *param_5 = 0;
      return 1;
    }
    iVar1 = FUN_00406420(param_1,param_2,param_3,param_4,param_5,0);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* Function: FUN_004062c0 */

void __thiscall FUN_004062c0(int param_1,undefined4 param_2)

{
  tagRECT local_10;
  
  local_10.top = 0;
  local_10.right = 0;
  local_10.left = 0;
  local_10.bottom = 0;
  GetClientRect(*(HWND *)(param_1 + 4),&local_10);
  FUN_00406330(&local_10,param_2);
  if (*(HWND *)(param_1 + 0x2c) != (HWND)0x0) {
    SetWindowPos(*(HWND *)(param_1 + 0x2c),(HWND)0x0,local_10.left,local_10.top,
                 local_10.right - local_10.left,local_10.bottom - local_10.top,0x14);
  }
  return;
}




/* Function: FUN_00406330 */

void __thiscall FUN_00406330(int param_1,int param_2,int param_3)

{
  uint uVar1;
  tagRECT local_10;
  
  if (*(HWND *)(param_1 + 0x24) != (HWND)0x0) {
    uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0x24),-0x10);
    if ((uVar1 & 0x10000000) != 0) {
      if (param_3 != 0) {
        SendMessageA(*(HWND *)(param_1 + 0x24),5,0,0);
        InvalidateRect(*(HWND *)(param_1 + 0x24),(RECT *)0x0,0);
      }
      local_10.top = 0;
      local_10.right = 0;
      local_10.left = 0;
      local_10.bottom = 0;
      GetWindowRect(*(HWND *)(param_1 + 0x24),&local_10);
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + (local_10.bottom - local_10.top);
    }
  }
  if (*(HWND *)(param_1 + 0x28) != (HWND)0x0) {
    uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0x28),-0x10);
    if ((uVar1 & 0x10000000) != 0) {
      if (param_3 != 0) {
        SendMessageA(*(HWND *)(param_1 + 0x28),5,0,0);
      }
      local_10.top = 0;
      local_10.right = 0;
      local_10.left = 0;
      local_10.bottom = 0;
      GetWindowRect(*(HWND *)(param_1 + 0x28),&local_10);
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + (local_10.top - local_10.bottom);
    }
  }
  return;
}




/* Function: FUN_00406420 */

undefined4 __thiscall
FUN_00406420(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 *param_6,int param_7)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_7 != 0) {
    return 0;
  }
  if (param_3 == 0x14) {
    param_7 = 1;
    if (*(int *)(param_1 + 0x2c) == 0) {
      param_7 = 0;
      *param_6 = 0;
    }
    else {
      *param_6 = 1;
    }
  }
  else if (param_3 == 0x11f) {
    param_7 = 1;
    uVar1 = FUN_00406580(0x11f,param_4,param_5,&param_7);
    *param_6 = uVar1;
  }
  else {
    if (param_3 == 7) {
      param_7 = 1;
      if (*(HWND *)(param_1 + 0x2c) != (HWND)0x0) {
        SetFocus(*(HWND *)(param_1 + 0x2c));
      }
      *param_6 = 1;
      return 0;
    }
    if (param_3 == 2) {
      param_7 = 1;
      uVar2 = GetWindowLongA(*(HWND *)(param_1 + 4),-0x10);
      if ((uVar2 & 0xc0000000) == 0) {
        PostQuitMessage(1);
      }
      *param_6 = 1;
      return 0;
    }
    if (param_3 != 0x4e) {
      return 0;
    }
    if (*(int *)(param_5 + 8) == -0x208) {
      param_7 = 1;
      uVar1 = FUN_004066a0(param_4,param_5,&param_7);
      *param_6 = uVar1;
      if (param_7 != 0) {
        return 1;
      }
    }
    if (*(int *)(param_5 + 8) != -0x212) {
      return 0;
    }
    param_7 = 1;
    uVar1 = FUN_00406730(param_4,param_5,&param_7);
    *param_6 = uVar1;
  }
  if (param_7 == 0) {
    return 0;
  }
  return 1;
}




/* Function: FUN_00406580 */

undefined4 __thiscall
FUN_00406580(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 *param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  CHAR local_100 [256];
  
  *param_5 = 0;
  if (*(HWND *)(param_1 + 0x28) != (HWND)0x0) {
    if (((short)(param_3 >> 0x10) == -1) && (param_4 == 0)) {
      SendMessageA(*(HWND *)(param_1 + 0x28),0x409,0,0);
      return 1;
    }
    local_100[0] = '\0';
    if ((param_3 >> 0x10 & 0x10) == 0) {
      uVar1 = (ushort)param_3;
      if ((uVar1 < 0xf000) || (0xf1ef < uVar1)) {
        if ((uVar1 < 0xe110) || (0xe11f < uVar1)) {
          if (0xfeff < uVar1) {
            param_3 = 0xef1f;
          }
        }
        else {
          param_3 = 0xefda;
        }
      }
      else {
        param_3 = ((int)((param_3 & 0xffff) - 0xf000) >> 4) - 0x1100;
      }
      iVar2 = LoadStringA(DAT_005b6130,param_3 & 0xffff,local_100,0x100);
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          if (local_100[iVar3] == '\n') {
            local_100[iVar3] = '\0';
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
      }
    }
    SendMessageA(*(HWND *)(param_1 + 0x28),0x409,1,0);
    SendMessageA(*(HWND *)(param_1 + 0x28),0x401,0x1ff,(LPARAM)local_100);
  }
  return 1;
}




/* Function: FUN_004066a0 */

undefined4 FUN_004066a0(UINT param_1,int param_2)

{
  int iVar1;
  int iVar2;
  CHAR local_100 [256];
  
  *(LPSTR)(param_2 + 0x10) = '\0';
  if ((param_1 != 0) && ((*(byte *)(param_2 + 100) & 1) == 0)) {
    local_100[0] = '\0';
    iVar1 = LoadStringA(DAT_005b6130,param_1,local_100,0x100);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        if (local_100[iVar2] == '\n') {
          lstrcpynA((LPSTR)(param_2 + 0x10),local_100 + iVar2 + 1,0x50);
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
      if (0 < iVar1) {
        *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) | 0x8000;
      }
    }
  }
  return 0;
}




/* Function: FUN_00406730 */

undefined4 FUN_00406730(UINT param_1,int param_2)

{
  int iVar1;
  int iVar2;
  WCHAR local_200 [256];
  
  *(LPWSTR)(param_2 + 0x10) = L'\0';
  if ((param_1 != 0) && ((*(byte *)(param_2 + 0xb4) & 1) == 0)) {
    local_200[0] = L'\0';
    iVar1 = LoadStringW(DAT_005b6130,param_1,local_200,0x100);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        if (local_200[iVar2] == L'\n') {
          lstrcpynW((LPWSTR)(param_2 + 0x10),local_200 + iVar2 + 1,0x50);
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
      if (0 < iVar1) {
        *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) | 0x8000;
      }
    }
  }
  return 0;
}




/* Function: FUN_004067c0 */

void __thiscall FUN_004067c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}




/* Function: FUN_004067d0 */

int __fastcall FUN_004067d0(int *param_1)

{
  LPMSG lpMsg;
  uint uVar1;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  bool bVar5;
  
  bVar2 = true;
  lpMsg = (LPMSG)(param_1 + 7);
  do {
    while( true ) {
      BVar3 = PeekMessageA(lpMsg,(HWND)0x0,0,0,1);
      if (BVar3 != 0) break;
      if (bVar2) {
        (**(code **)(*param_1 + 4))(0);
        bVar2 = false;
      }
      else if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
        iVar4 = (*(code *)**(undefined4 **)param_1[0xe])();
        if (iVar4 == 0) {
          (**(code **)(*(int *)param_1[0xe] + 4))();
        }
        else {
          WaitMessage();
        }
      }
    }
    uVar1 = param_1[8];
    if (uVar1 == 0x12) {
      return param_1[9];
    }
    if (uVar1 < 0x119) {
      if ((uVar1 != 0x118) && (uVar1 != 0xf)) {
        bVar5 = uVar1 == 0xa0;
        goto LAB_00406812;
      }
    }
    else {
      bVar5 = uVar1 == 0x200;
LAB_00406812:
      if (!bVar5) {
        bVar2 = true;
      }
    }
    iVar4 = (**(code **)*param_1)(lpMsg);
    if (iVar4 == 0) {
      TranslateMessage(lpMsg);
      DispatchMessageA(lpMsg);
    }
  } while( true );
}




/* Function: FUN_00406870 */

undefined4 __thiscall FUN_00406870(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 0;
    }
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + iVar1 * 4);
  } while ((puVar2 == (undefined4 *)0x0) || (iVar3 = (**(code **)*puVar2)(param_2), iVar3 == 0));
  return 1;
}




/* Function: FUN_004068b0 */

undefined4 __fastcall FUN_004068b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x10) + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return 0;
}




/* Function: FUN_004068e0 */

void __fastcall FUN_004068e0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_00582d20;
  param_1[0xe] = 0;
  return;
}




/* Function: FUN_00406900 */

void FUN_00406900(void)

{
  if (DAT_005b3dfc != (int *)0x0) {
    (**(code **)(*DAT_005b3dfc + 8))(DAT_005b3dfc);
  }
  DAT_005b3dfc = (int *)0x0;
  if (DAT_005b3e00 != (int *)0x0) {
    (**(code **)(*DAT_005b3e00 + 8))(DAT_005b3e00);
  }
  DAT_005b3e00 = (int *)0x0;
  if (DAT_005b3e04 != (int *)0x0) {
    (**(code **)(*DAT_005b3e04 + 8))(DAT_005b3e04);
  }
  DAT_005b3e04 = (int *)0x0;
  if (DAT_005b3e08 != (int *)0x0) {
    (**(code **)(*DAT_005b3e08 + 8))(DAT_005b3e08);
  }
  DAT_005b3e08 = (int *)0x0;
  DestroyWindow(DAT_005b3e0c);
  return;
}




/* Function: FUN_00406970 */

void FUN_00406970(void)

{
  (**(code **)(*DAT_005b3e00 + 0x24))(DAT_005b3e00);
  DAT_005a214c = 0;
  return;
}




/* Function: FUN_00406990 */

void FUN_00406990(char *param_1)

{
  char local_200 [512];
  
  vsprintf(local_200,param_1,&stack0x00000008);
  return;
}




/* Function: FUN_004069c0 */

void FUN_004069c0(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  if ((param_2 == 0x100) && (((param_3 == 0xd || (param_3 == 0x1b)) || (param_3 == 0x20)))) {
    DAT_005b3e10 = 1;
    FUN_00406970();
  }
  DefWindowProcA(param_1,param_2,param_3,param_4);
  return;
}




/* Function: FUN_00406a10 */

HRESULT FUN_00406a10(void)

{
  HRESULT HVar1;
  int iVar2;
  
  HVar1 = CoCreateInstance((IID *)&DAT_0058f7f0,(LPUNKNOWN)0x0,3,(IID *)&DAT_0058f7b0,&DAT_005b3dfc)
  ;
  if (HVar1 < 0) {
    FUN_00406990("FAILED(hr=0x%x) in CoCreateInstance(CLSID_FilterGraph, NULL, CLSCTX_INPROC, IID_IGraphBuilder, (void **)&pGB)\n"
                 ,HVar1);
    FUN_00406900();
    return HVar1;
  }
  iVar2 = (**(code **)*DAT_005b3dfc)(DAT_005b3dfc,&DAT_0058f7e0,&DAT_005b3e00);
  if (iVar2 < 0) {
    FUN_00406990("FAILED(hr=0x%x) in pGB->QueryInterface(IID_IMediaControl, (void **)&pMC)\n",iVar2)
    ;
    FUN_00406900();
    return iVar2;
  }
  iVar2 = (**(code **)*DAT_005b3dfc)(DAT_005b3dfc,&DAT_0058f7c0,&DAT_005b3e04);
  if (iVar2 < 0) {
    FUN_00406990("FAILED(hr=0x%x) in pGB->QueryInterface(IID_IVideoWindow, (void **)&pVW)\n",iVar2);
    FUN_00406900();
    return iVar2;
  }
  iVar2 = (**(code **)*DAT_005b3dfc)(DAT_005b3dfc,&DAT_0058f7d0,&DAT_005b3e08);
  if (iVar2 < 0) {
    FUN_00406990("FAILED(hr=0x%x) in pGB->QueryInterface(IID_IMediaEventEx, (void **)&pME)\n",iVar2)
    ;
    FUN_00406900();
    return iVar2;
  }
  return 0;
}




/* Function: FUN_00406f40 */

void FUN_00406f40(undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  if (-1 < param_3 + -1) {
    do {
      (*param_4)();
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}




/* Function: FUN_00406f70 */

void __thiscall FUN_00406f70(int param_1,int param_2,char *param_3)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (*(int *)(param_1 + 0x1088) + param_2 * 0x1c),param_3);
  return;
}




/* Function: FUN_00406fa0 */

char * __thiscall FUN_00406fa0(int param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  
  bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                    ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(*(int *)(param_1 + 0x1088) + param_2 * 0x1c));
  if (!bVar1) {
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (*(int *)(param_1 + 0x1088) + param_2 * 0x1c));
    return pcVar2;
  }
  return (char *)0x0;
}




/* Function: FUN_00407020 */

int __fastcall FUN_00407020(int param_1)

{
  return param_1 + 0x88;
}




/* Function: FUN_00407030 */

undefined1 __fastcall FUN_00407030(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1090);
}




/* Function: FUN_00407060 */

void __fastcall FUN_00407060(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  return;
}




/* Function: FUN_00407080 */

undefined4 __thiscall FUN_00407080(int *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar2 = param_3;
  *param_3 = 0;
  param_3 = (int *)0x0;
  if (param_2 <= (uint)param_1[9]) {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      uVar4 = 0x1000;
      if ((*(char *)((int)param_1 + 9) != '\0') || ((uint)param_1[9] < param_1[1] + param_2)) {
        *(undefined1 *)((int)param_1 + 9) = 0;
        param_1[1] = 0;
        uVar4 = 0x2000;
      }
      iVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1,param_1[1] * 0x18,param_2 * 0x18,&param_3,uVar4);
      if (-1 < iVar3) {
        *(undefined1 *)(param_1 + 2) = 1;
        *piVar2 = param_1[1];
        param_1[1] = param_1[1] + param_2;
      }
    }
    return param_3;
  }
  return 0;
}




/* Function: FUN_00407110 */

void FUN_00407110(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x11);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x11);
  }
  return;
}




/* Function: FUN_00407130 */

void FUN_00407130(int *param_1)

{
  char cVar1;
  
  param_1 = (int *)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x11);
  while (cVar1 == '\0') {
    param_1 = (int *)*param_1;
    cVar1 = *(char *)((int)param_1 + 0x11);
  }
  return;
}




/* Function: FUN_00407150 */

void FUN_00407150(void)

{
  return;
}




/* Function: FUN_00407160 */

void __fastcall FUN_00407160(exception *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057a959;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_FUN_00583110;
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xc));
  local_4 = 0xffffffff;
  exception::~exception(param_1);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004071d0 */

void * __thiscall FUN_004071d0(void *param_1,byte param_2)

{
  FUN_00407160();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004071f0 */

void * __thiscall FUN_004071f0(void *param_1,byte param_2)

{
  FUN_00407210();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00407210 */

void __fastcall FUN_00407210(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00583118;
  FUN_00407160();
  return;
}




/* Function: FUN_00407220 */

void * __thiscall FUN_00407220(void *param_1,byte param_2)

{
  FUN_00407240();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00407240 */

void __fastcall FUN_00407240(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00583120;
  FUN_00407160();
  return;
}




/* Function: FUN_00407260 */

undefined4 * __thiscall FUN_00407260(undefined4 *param_1,undefined4 *param_2)

{
  _eh_vector_constructor_iterator_(param_1,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150)
  ;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  if (param_1 + 4 != param_2 + 4) {
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
  }
  if (param_1 + 8 != param_2 + 8) {
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
  }
  if (param_1 + 0xc != param_2 + 0xc) {
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
  }
  return param_1;
}




/* Function: FUN_00407300 */

void __fastcall FUN_00407300(void *param_1)

{
  _eh_vector_destructor_iterator_(param_1,0x10,4,FUN_00407150);
  return;
}




/* Function: FUN_00407310 */

void __thiscall FUN_00407310(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_10 [4];
  
  if (param_1 != local_10) {
    param_1[1] = 0;
    *param_1 = param_2;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if (param_1 + 4 != local_10) {
    param_1[4] = 0;
    param_1[5] = param_2;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if (param_1 + 8 != local_10) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = param_2;
    param_1[0xb] = 0;
  }
  if (param_1 + 0xc != local_10) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0x3f800000;
  }
  return;
}




/* Function: FUN_00407390 */

exception * __thiscall FUN_00407390(exception *param_1,exception *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057a959;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  exception::exception(param_1,param_2);
  local_4 = 0;
  *(undefined ***)param_1 = &PTR_FUN_00583110;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xc),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0xc));
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_004073f0 */

void __thiscall FUN_004073f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}




/* Function: FUN_00407400 */

void __fastcall
FUN_00407400(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057a979;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1 + 0x1c);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00407c10 */

undefined4 __fastcall FUN_00407c10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}




/* Function: FUN_00407c20 */

void FUN_00407c20(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057aa22;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_50,"deque<T> too long");
  local_4 = 0;
  exception::exception((exception *)local_34);
  local_4._0_1_ = 1;
  local_34[0] = &PTR_FUN_00583110;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,local_50);
  local_4 = (uint)local_4._1_3_ << 8;
  local_34[0] = &PTR_FUN_00583118;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_34,(ThrowInfo *)&DAT_005950a0);
}




/* Function: FUN_00407ca0 */

void __thiscall FUN_00407ca0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x11) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*(int *)(param_1 + 4) + 4)) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}




/* Function: FUN_00407d00 */

void __thiscall FUN_00407d00(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x11) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*(int *)(param_1 + 4) + 4)) {
    *(int *)(*(int *)(param_1 + 4) + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}




/* Function: FUN_00407d60 */

void __fastcall FUN_00407d60(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x11) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x11);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x11);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x11) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x11) == '\0');
    if (*(char *)((int)piVar4 + 0x11) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}




/* Function: FUN_00407dc0 */

void __fastcall FUN_00407dc0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x11);
      piVar4 = (int *)*piVar3;
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar4 + 0x11);
        piVar3 = piVar5;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x11);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
    *param_1 = iVar2;
  }
  return;
}




/* Function: FUN_00407e10 */

void FUN_00407e10(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057aa22;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_50,"vector<T> too long");
  local_4 = 0;
  exception::exception((exception *)local_34);
  local_4._0_1_ = 1;
  local_34[0] = &PTR_FUN_00583110;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,local_50);
  local_4 = (uint)local_4._1_3_ << 8;
  local_34[0] = &PTR_FUN_00583118;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_34,(ThrowInfo *)&DAT_005950a0);
}




/* Function: FUN_00407e90 */

void FUN_00407e90(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057a9a1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0
     ) {
    ExceptionList = &local_c;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00407ee0 */

void FUN_00407ee0(undefined4 *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *param_3,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (param_4,param_2);
    param_2 = param_2 + 0x1c;
    param_4 = param_4 + 0x1c;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return;
}




/* Function: FUN_00407f20 */

void FUN_00407f20(int *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *param_3,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_4)

{
  if (param_2 == param_3) {
    *param_1 = (int)param_4;
    return;
  }
  do {
    param_3 = param_3 + -0x1c;
    param_4 = param_4 + -0x1c;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (param_4,param_3);
  } while (param_3 != param_2);
  *param_1 = (int)param_4;
  return;
}




/* Function: FUN_00407f80 */

void * __thiscall FUN_00407f80(void *param_1,undefined4 param_2)

{
  _eh_vector_constructor_iterator_(param_1,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150)
  ;
  FUN_00407310(param_2);
  return param_1;
}




/* Function: FUN_00407fb0 */

undefined4 __thiscall FUN_00407fb0(int param_1,uint param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0x3fffffff < param_2) {
    FUN_00407e10();
    return 1;
  }
  iVar1 = FUN_00493c27(param_2 * 4);
  *(uint *)(param_1 + 0xc) = param_2 * 4 + iVar1;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  return 1;
}




/* Function: FUN_00408010 */

void FUN_00408010(void)

{
  FUN_00407400();
  return;
}




/* Function: FUN_00408180 */

undefined4 __thiscall FUN_00408180(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0xc) + param_2;
  if (*(uint *)(param_1 + 8) <= uVar1) {
    return *(undefined4 *)(*(int *)(param_1 + 4) + (uVar1 - *(uint *)(param_1 + 8)) * 4);
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + uVar1 * 4);
}




/* Function: FUN_004081c0 */

undefined4 __fastcall FUN_004081c0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 8) <= uVar1) {
    return *(undefined4 *)(*(int *)(param_1 + 4) + (uVar1 - *(uint *)(param_1 + 8)) * 4);
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + uVar1 * 4);
}




/* Function: FUN_004081e0 */

void FUN_004081e0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    FUN_004081e0(*(undefined4 *)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return;
}




/* Function: FUN_00408220 */

void FUN_00408220(void *param_1)

{
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    FUN_00408220(*(undefined4 *)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return;
}




/* Function: FUN_00408280 */

/* WARNING: Removing unreachable block (ram,0x004083a5) */
/* WARNING: Removing unreachable block (ram,0x004083b9) */
/* WARNING: Removing unreachable block (ram,0x004083c3) */
/* WARNING: Removing unreachable block (ram,0x004083c6) */
/* WARNING: Removing unreachable block (ram,0x004083b5) */
/* WARNING: Removing unreachable block (ram,0x004083d3) */
/* WARNING: Removing unreachable block (ram,0x004083e4) */
/* WARNING: Removing unreachable block (ram,0x004083ef) */
/* WARNING: Removing unreachable block (ram,0x004083eb) */
/* WARNING: Removing unreachable block (ram,0x004083df) */
/* WARNING: Removing unreachable block (ram,0x004083f2) */

void __thiscall FUN_00408280(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057aa22;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_3 + 0x11) != '\0') {
    ExceptionList = &pvStack_c;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_50,"invalid map/set<T> iterator");
    local_4 = 0;
    exception::exception((exception *)local_34);
    local_4._0_1_ = 1;
    local_34[0] = &PTR_FUN_00583110;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,local_50);
    local_4 = (uint)local_4._1_3_ << 8;
    local_34[0] = &PTR_FUN_00583120;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_34,(ThrowInfo *)&DAT_00595174);
  }
  ExceptionList = &pvStack_c;
  FUN_00407dc0();
  piVar5 = (int *)*param_3;
  if ((*(char *)((int)piVar5 + 0x11) != '\0') || (*(char *)(param_3[2] + 0x11) == '\0')) {
    piVar5 = (int *)param_3[2];
  }
  piVar6 = (int *)param_3[1];
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
    piVar5[1] = (int)piVar6;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar5;
  }
  else if ((int *)*piVar6 == param_3) {
    *piVar6 = (int)piVar5;
  }
  else {
    piVar6[2] = (int)piVar5;
  }
  puVar1 = *(undefined4 **)(param_1 + 4);
  if ((int *)*puVar1 == param_3) {
    piVar3 = piVar6;
    if (*(char *)((int)piVar5 + 0x11) == '\0') {
      piVar3 = (int *)FUN_00407130(piVar5);
    }
    *puVar1 = piVar3;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int **)(iVar2 + 8) == param_3) {
    if (*(char *)((int)piVar5 + 0x11) == '\0') {
      uVar4 = FUN_00407110(piVar5);
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
  if ((char)param_3[4] == '\x01') {
    if (piVar5 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        if ((char)piVar5[4] != '\x01') break;
        piVar3 = (int *)*piVar6;
        if (piVar5 == piVar3) {
          piVar3 = (int *)piVar6[2];
          if ((char)piVar3[4] == '\0') {
            *(undefined1 *)(piVar3 + 4) = 1;
            *(undefined1 *)(piVar6 + 4) = 0;
            FUN_00407ca0(piVar6);
            piVar3 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar3 + 0x11) == '\0') {
            if ((*(char *)(*piVar3 + 0x10) != '\x01') || (*(char *)(piVar3[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar3[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar3 + 0x10) = 1;
                *(undefined1 *)(piVar3 + 4) = 0;
                FUN_00407d00(piVar3);
                piVar3 = (int *)piVar6[2];
              }
              *(char *)(piVar3 + 4) = (char)piVar6[4];
              *(undefined1 *)(piVar6 + 4) = 1;
              *(undefined1 *)(piVar3[2] + 0x10) = 1;
              FUN_00407ca0(piVar6);
              break;
            }
LAB_004084c7:
            *(undefined1 *)(piVar3 + 4) = 0;
          }
        }
        else {
          if ((char)piVar3[4] == '\0') {
            *(undefined1 *)(piVar3 + 4) = 1;
            *(undefined1 *)(piVar6 + 4) = 0;
            FUN_00407d00(piVar6);
            piVar3 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar3 + 0x11) == '\0') {
            if ((*(char *)(piVar3[2] + 0x10) == '\x01') && (*(char *)(*piVar3 + 0x10) == '\x01'))
            goto LAB_004084c7;
            if (*(char *)(*piVar3 + 0x10) == '\x01') {
              *(undefined1 *)(piVar3[2] + 0x10) = 1;
              *(undefined1 *)(piVar3 + 4) = 0;
              FUN_00407ca0(piVar3);
              piVar3 = (int *)*piVar6;
            }
            *(char *)(piVar3 + 4) = (char)piVar6[4];
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(*piVar3 + 0x10) = 1;
            FUN_00407d00(piVar6);
            break;
          }
        }
        bVar7 = piVar6 != *(int **)(*(int *)(param_1 + 4) + 4);
        piVar5 = piVar6;
        piVar6 = (int *)piVar6[1];
      } while (bVar7);
    }
    *(undefined1 *)(piVar5 + 4) = 1;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_3);
}




/* Function: FUN_00408550 */

void FUN_00408550(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00493c27(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    *(undefined1 *)(puVar1 + 4) = param_5;
    *(undefined1 *)((int)puVar1 + 0x11) = 0;
  }
  return;
}




/* Function: FUN_00408590 */

undefined4 *
FUN_00408590(undefined4 param_1,undefined4 param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057a9c1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00493c27(0x28);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar1 + 2),param_3);
    puVar1[9] = *(undefined4 *)(param_3 + 0x1c);
  }
  ExceptionList = local_10;
  return puVar1;
}




/* Function: FUN_00408620 */

void __thiscall FUN_00408620(int param_1,uint param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057aa22;
  local_c = ExceptionList;
  if (0x7ffffffU - *(int *)(param_1 + 8) < param_2) {
    ExceptionList = &local_c;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_50,"list<T> too long");
    local_4 = 0;
    exception::exception((exception *)local_34);
    local_4._0_1_ = 1;
    local_34[0] = &PTR_FUN_00583110;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,local_50);
    local_4 = (uint)local_4._1_3_ << 8;
    local_34[0] = &PTR_FUN_00583118;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_34,(ThrowInfo *)&DAT_005950a0);
  }
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  return;
}




/* Function: FUN_004086c0 */

void FUN_004086c0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (param_1,param_3);
  }
  return;
}




/* Function: FUN_004086f0 */

undefined4 FUN_004086f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00407f20(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00408730 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_00408730(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (param_3,param_1);
    param_1 = param_1 + 0x1c;
    param_3 = param_3 + 0x1c;
  } while (param_1 != param_2);
  return param_3;
}




/* Function: FUN_00408770 */

void FUN_00408770(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  while (param_1 != param_2) {
    *param_3 = *param_3 + 1;
    if (*(char *)((int)param_1 + 0x11) == '\0') {
      piVar2 = (int *)param_1[2];
      if (*(char *)((int)piVar2 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x11);
        param_1 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          param_1 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_1[1] + 0x11);
        piVar3 = (int *)param_1[1];
        piVar2 = param_1;
        while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
          cVar1 = *(char *)(param_1[1] + 0x11);
          piVar3 = (int *)param_1[1];
          piVar2 = param_1;
        }
      }
    }
  }
  return;
}




/* Function: FUN_004087e0 */

void FUN_004087e0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,int param_2,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057a9e1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 !=
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,param_3);
    }
    param_1 = param_1 + 0x1c;
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00408870 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_00408870(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057aa01;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    local_8 = 1;
    if (param_3 !=
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_3,param_1);
    }
    param_3 = param_3 + 0x1c;
  }
  ExceptionList = local_10;
  return param_3;
}




/* Function: FUN_00408900 */

uint __thiscall
FUN_00408900(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::begin(param_2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::end(param_2);
  for (; param_2 != param_1; param_2 = param_2 + 1) {
    uVar1 = uVar1 * 2 ^ (int)(char)*param_2;
  }
  return uVar1;
}




/* Function: FUN_00408950 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_00408950(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  char *local_24;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c [28];
  
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,"");
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::begin(param_2);
  puVar1 = (undefined4 *)
           std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::end
                     (param_2);
  if (local_24 != (char *)*puVar1) {
    do {
      uVar2 = _mbctolower((int)*local_24);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
                (local_1c,(char)uVar2);
      local_24 = local_24 + 1;
      puVar1 = (undefined4 *)
               std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               end(param_2);
    } while (local_24 != (char *)*puVar1);
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,local_1c);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  return param_1;
}




/* Function: FUN_004089f0 */

undefined4 __thiscall FUN_004089f0(int param_1,uint param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0x9249249 < param_2) {
    FUN_00407e10();
    return 1;
  }
  iVar1 = FUN_00493c27(param_2 * 0x1c);
  *(uint *)(param_1 + 0xc) = param_2 * 0x1c + iVar1;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  return 1;
}




/* Function: FUN_00408a50 */

void FUN_00408a50(void)

{
  int iVar1;
  
  iVar1 = FUN_00493c27(0x40);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}




/* Function: FUN_00408a70 */

void FUN_00408a70(void)

{
  int iVar1;
  
  iVar1 = FUN_00493c27(0x28);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}




/* Function: FUN_00408af0 */

void __thiscall FUN_00408af0(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar4 = param_4;
  piVar6 = *(int **)(param_1 + 4);
  piVar2 = param_3;
  if ((param_3 == (int *)*piVar6) && (param_4 == piVar6)) {
    FUN_004081e0(piVar6[1]);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    *param_2 = **(undefined4 **)(param_1 + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x11) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x11);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x11);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x11);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x11);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_00408280(&param_3,piVar2);
    piVar2 = piVar6;
  }
  *param_2 = piVar2;
  return;
}




/* Function: FUN_00408bb0 */

void __thiscall FUN_00408bb0(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar4 = param_4;
  piVar6 = *(int **)(param_1 + 4);
  piVar2 = param_3;
  if ((param_3 == (int *)*piVar6) && (param_4 == piVar6)) {
    FUN_00408220(piVar6[1]);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    *param_2 = **(undefined4 **)(param_1 + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x11) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x11);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x11);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x11);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x11);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_00408280(&param_3,piVar2);
    piVar2 = piVar6;
  }
  *param_2 = piVar2;
  return;
}




/* Function: FUN_00408c70 */

void __thiscall FUN_00408c70(int param_1,int *param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  puVar2 = (undefined4 *)puVar4[1];
  puVar5 = puVar4;
  if (*(char *)((int)puVar2 + 0x11) == '\0') {
    puVar3 = puVar2;
    do {
      if (*param_3 < (uint)puVar3[3]) {
        puVar1 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      else {
        puVar1 = (undefined4 *)puVar3[2];
      }
      puVar3 = puVar1;
    } while (*(char *)((int)puVar1 + 0x11) == '\0');
  }
  if (*(char *)((int)puVar2 + 0x11) == '\0') {
    do {
      if ((uint)puVar2[3] < *param_3) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  param_2[1] = (int)puVar5;
  *param_2 = (int)puVar4;
  return;
}




/* Function: FUN_00408cd0 */

void __thiscall
FUN_00408cd0(int param_1,undefined4 *param_2,char param_3,undefined4 *param_4,undefined4 param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057aa22;
  local_c = ExceptionList;
  if (0x3ffffffd < *(uint *)(param_1 + 8)) {
    ExceptionList = &local_c;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_50,"map/set<T> too long");
    local_4 = 0;
    exception::exception((exception *)local_34);
    local_4._0_1_ = 1;
    local_34[0] = &PTR_FUN_00583110;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,local_50);
    local_4 = (uint)local_4._1_3_ << 8;
    local_34[0] = &PTR_FUN_00583118;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_34,(ThrowInfo *)&DAT_005950a0);
  }
  ExceptionList = &local_c;
  piVar5 = (int *)FUN_00408550(*(undefined4 *)(param_1 + 4),param_4,*(undefined4 *)(param_1 + 4),
                               param_5,0);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (param_4 == *(undefined4 **)(param_1 + 4)) {
    (*(undefined4 **)(param_1 + 4))[1] = piVar5;
    **(undefined4 **)(param_1 + 4) = piVar5;
    *(int **)(*(int *)(param_1 + 4) + 8) = piVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = piVar5;
    if (param_4 == *(undefined4 **)(*(int *)(param_1 + 4) + 8)) {
      *(int **)(*(int *)(param_1 + 4) + 8) = piVar5;
    }
  }
  else {
    *param_4 = piVar5;
    if (param_4 == (undefined4 *)**(int **)(param_1 + 4)) {
      **(int **)(param_1 + 4) = (int)piVar5;
    }
  }
  cVar1 = *(char *)(piVar5[1] + 0x10);
  piVar7 = piVar5;
  while (cVar1 == '\0') {
    piVar6 = piVar7 + 1;
    piVar2 = (int *)*piVar6;
    piVar3 = *(int **)piVar2[1];
    if (piVar2 == piVar3) {
      iVar4 = ((undefined4 *)piVar2[1])[2];
      if (*(char *)(iVar4 + 0x10) == '\0') {
        *(undefined1 *)(piVar2 + 4) = 1;
        *(undefined1 *)(iVar4 + 0x10) = 1;
        *(undefined1 *)(*(int *)(*piVar6 + 4) + 0x10) = 0;
        piVar7 = *(int **)(*piVar6 + 4);
      }
      else {
        if (piVar7 == (int *)piVar2[2]) {
          FUN_00407ca0(piVar2);
          piVar7 = piVar2;
        }
        *(undefined1 *)(piVar7[1] + 0x10) = 1;
        *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x10) = 0;
        FUN_00407d00(*(undefined4 *)(piVar7[1] + 4));
      }
    }
    else if ((char)piVar3[4] == '\0') {
      *(undefined1 *)(piVar2 + 4) = 1;
      *(undefined1 *)(piVar3 + 4) = 1;
      *(undefined1 *)(*(int *)(*piVar6 + 4) + 0x10) = 0;
      piVar7 = *(int **)(*piVar6 + 4);
    }
    else {
      if (piVar7 == (int *)*piVar2) {
        FUN_00407d00(piVar2);
        piVar7 = piVar2;
      }
      *(undefined1 *)(piVar7[1] + 0x10) = 1;
      *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x10) = 0;
      FUN_00407ca0(*(undefined4 *)(piVar7[1] + 4));
    }
    cVar1 = *(char *)(piVar7[1] + 0x10);
  }
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x10) = 1;
  *param_2 = piVar5;
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00408ea0 */

void FUN_00408ea0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00493c27(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  return;
}




/* Function: FUN_00408ee0 */

void FUN_00408ee0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
  }
  return;
}




/* Function: FUN_00408f10 */

void __thiscall FUN_00408f10(int param_1,int *param_2,int param_3)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  int iVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  
  iVar2 = param_3;
  FUN_00407ee0(&param_3,param_3 + 0x1c,*(undefined4 *)(param_1 + 8),param_3,param_3);
  pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
            (param_1 + 8);
  for (this = pbVar1 + -0x1c; this != pbVar1; this = this + 0x1c) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x1c;
  *param_2 = iVar2;
  return;
}




/* Function: FUN_00408f70 */

undefined4 FUN_00408f70(undefined4 param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00408c70(&local_8,param_1);
  param_1 = 0;
  FUN_00408770(local_8,local_4,&param_1,0);
  FUN_00408af0(&local_8,local_8,local_4);
  return param_1;
}




/* Function: FUN_00408fd0 */

void __thiscall FUN_00408fd0(int param_1,undefined4 *param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;
  
  puVar2 = param_3;
  bVar6 = true;
  piVar1 = *(int **)(param_1 + 4);
  piVar5 = piVar1;
  if (*(char *)(piVar1[1] + 0x11) == '\0') {
    piVar3 = (int *)piVar1[1];
    do {
      piVar5 = piVar3;
      bVar6 = *param_3 < (uint)piVar5[3];
      if (bVar6) {
        piVar3 = (int *)*piVar5;
      }
      else {
        piVar3 = (int *)piVar5[2];
      }
    } while (*(char *)((int)piVar3 + 0x11) == '\0');
  }
  param_3 = (uint *)piVar5;
  if (bVar6) {
    if (piVar5 == (int *)*piVar1) {
      puVar4 = (undefined4 *)FUN_00408cd0(&param_3,1,piVar5,puVar2);
      *param_2 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return;
    }
    FUN_00407d60();
  }
  if (param_3[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_00408cd0(&param_3,bVar6,piVar5,puVar2);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  *param_2 = param_3;
  *(undefined1 *)(param_2 + 1) = 0;
  return;
}




/* Function: FUN_004090a0 */

undefined4 FUN_004090a0(undefined4 param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00408c70(&local_8,param_1);
  param_1 = 0;
  FUN_00408770(local_8,local_4,&param_1,0);
  FUN_00408bb0(&local_8,local_8,local_4);
  return param_1;
}




/* Function: FUN_00409100 */

int __thiscall FUN_00409100(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_004087e0(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0x1c;
}




/* Function: FUN_00409130 */

void __fastcall FUN_00409130(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  while (iVar2 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar1 = *(int *)(param_1 + 0x10) + -1 + *(int *)(param_1 + 0xc);
      if (*(uint *)(param_1 + 8) <= uVar1) {
        uVar1 = uVar1 - *(uint *)(param_1 + 8);
      }
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                  (*(int *)(param_1 + 4) + uVar1 * 4));
      iVar2 = *(int *)(param_1 + 0x10) + -1;
      *(int *)(param_1 + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
    iVar2 = *(int *)(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 4));
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) + -1) * 4));
}




/* Function: FUN_004091b0 */

void __thiscall
FUN_004091b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00408870(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_004091d0 */

void __thiscall
FUN_004091d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00408870(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00409200 */

void __fastcall FUN_00409200(int param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  
  this = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
          (param_1 + 4);
  if (this == (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
            (param_1 + 8);
  for (; this != pbVar1; this = this + 0x1c) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00409250 */

void __fastcall FUN_00409250(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00408af0(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00409280 */

void __fastcall FUN_00409280(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00408bb0(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_004092b0 */

void __thiscall FUN_004092b0(int param_1,undefined4 param_2)

{
  undefined1 local_8 [8];
  
  if (*(char *)(param_1 + 4) == '\0') {
    FUN_00408fd0(local_8,&param_2);
    return;
  }
  FUN_00408fd0(local_8,&param_2);
  return;
}




/* Function: FUN_00409300 */

void __thiscall FUN_00409300(int param_1,undefined4 param_2)

{
  undefined1 local_8 [8];
  
  if (*(char *)(param_1 + 4) == '\0') {
    FUN_004090a0(&param_2);
    return;
  }
  FUN_00408fd0(local_8,&param_2);
  return;
}




/* Function: FUN_00409340 */

void __thiscall FUN_00409340(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057aa30;
  local_10 = ExceptionList;
  if (param_2 < 0x924924a) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x1c;
    }
    if (uVar2 < param_2) {
      iVar3 = param_2 * 0x1c;
      ExceptionList = &local_10;
      iVar1 = FUN_00493c27(iVar3);
      local_8 = 0;
      FUN_00408870(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar1,param_1,iVar1);
      local_8 = 0xffffffff;
      if (*(int *)(param_1 + 4) == 0) {
        param_2 = 0;
      }
      else {
        param_2 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
      }
      if (*(int *)(param_1 + 4) != 0) {
        FUN_00408ee0(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)(param_1 + 4));
      }
      *(int *)(param_1 + 0xc) = iVar3 + iVar1;
      *(int *)(param_1 + 4) = iVar1;
      *(uint *)(param_1 + 8) = iVar1 + param_2 * 0x1c;
      ExceptionList = local_10;
      return;
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_00407e10();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00409480 */

void __thiscall FUN_00409480(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = param_2;
  if (0x9249249U - *(int *)(param_1 + 8) < param_2) {
    FUN_00407c20();
  }
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = uVar1 >> 1;
  if (uVar3 < 8) {
    uVar3 = 8;
  }
  if ((uVar6 < uVar3) && (uVar1 <= 0x9249249 - uVar3)) {
    uVar6 = uVar3;
  }
  uVar3 = *(uint *)(param_1 + 0xc);
  iVar4 = FUN_00493c27((uVar1 + uVar6) * 4);
  uVar5 = FUN_00543360(*(int *)(param_1 + 4) + uVar3 * 4,
                       *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4,iVar4 + uVar3 * 4,param_1,
                       param_2);
  iVar2 = *(int *)(param_1 + 4);
  if (uVar6 < uVar3) {
    FUN_00543360(iVar2,iVar2 + uVar6 * 4,uVar5,param_1,param_2);
    param_2 = 0;
    iVar4 = FUN_00543360(*(int *)(param_1 + 4) + uVar6 * 4,*(int *)(param_1 + 4) + uVar3 * 4,iVar4,
                         param_1,0);
  }
  else {
    param_2 = 0;
    uVar5 = FUN_00543360(iVar2,iVar2 + uVar3 * 4,uVar5,param_1,0);
    FUN_004520c0(uVar5,uVar6 - uVar3,&param_2,param_1,param_2);
    param_2 = 0;
    uVar6 = uVar3;
  }
  FUN_004520c0(iVar4,uVar6,&param_2,param_1,param_2);
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_004095a0 */

void __thiscall
FUN_004095a0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined4 uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  int iVar5;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_50;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_4c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [28];
  undefined1 *local_1c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057aa49;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_4c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             0x4095d3;
  ExceptionList = &local_10;
  local_18 = param_1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38,param_4);
  pbVar2 = param_3;
  pbVar1 = param_2;
  iVar5 = *(int *)(param_1 + 4);
  pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  local_8 = 0;
  if (iVar5 != 0) {
    pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((*(int *)(param_1 + 0xc) - iVar5) / 0x1c);
  }
  if (param_3 != (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0
     ) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
    }
    if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
        (0x9249249U - iVar5) < param_3) {
      FUN_00407e10();
    }
    else {
      if (*(int *)(param_1 + 4) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
      }
      if (pbVar4 < param_3 + iVar5) {
        if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            (0x9249249 - ((uint)pbVar4 >> 1)) < pbVar4) {
          pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x0;
        }
        else {
          pbVar4 = pbVar4 + ((uint)pbVar4 >> 1);
        }
        if (*(int *)(param_1 + 4) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
        }
        if (pbVar4 < param_3 + iVar5) {
          iVar5 = FUN_004e1e80();
          pbVar4 = pbVar2 + iVar5;
        }
        local_4c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x4096cc;
        param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        param_4 = param_3;
        local_50 = param_3;
        local_4c = param_1;
        param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_00408870(*(undefined4 *)(param_1 + 4),param_2);
        local_50 = local_38;
        local_4c = param_1;
        FUN_004087e0(param_3,pbVar2);
        param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  ((int)param_3 + (int)pbVar2 * 0x1c);
        local_50 = param_3;
        local_4c = param_1;
        FUN_00408870(param_2,*(undefined4 *)(param_1 + 8));
        iVar5 = 0;
        local_8 = 0;
        if (*(int *)(param_1 + 4) != 0) {
          iVar5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
        }
        if (*(int *)(param_1 + 4) != 0) {
          local_50 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )0x409776;
          local_4c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )*(int *)(param_1 + 4);
          FUN_00408ee0();
                    /* WARNING: Subroutine does not return */
          local_4c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&UNK_0040977f;
          operator_delete(*(void **)(param_1 + 4));
        }
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 0xc) = param_4 + (int)pbVar4 * 0x1c;
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 4) = param_4;
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 8) = param_4 + (int)(pbVar2 + iVar5) * 0x1c;
      }
      else {
        local_4c = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(param_1 + 8);
        if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            (((int)local_4c - (int)param_2) / 0x1c) < param_3) {
          param_4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    ((int)param_3 * 0x1c);
          local_1c = (undefined1 *)&local_50;
          local_50 = param_2;
          FUN_004091d0();
          local_8 = CONCAT31(local_8._1_3_,3);
          local_50 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)(param_1 + 8);
          local_4c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )((int)pbVar2 - (*(int *)(param_1 + 8) - (int)pbVar1) / 0x1c);
          FUN_00409100();
          iVar5 = *(int *)(param_1 + 8);
          local_8 = 0;
          *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           (param_1 + 8) = param_4 + iVar5;
          local_4c = param_4 + iVar5 + -(int)param_4;
        }
        else {
          param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    &local_50;
          param_4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    ((int)param_3 * 0x1c);
          pbVar4 = local_4c + (int)param_3 * -0x1c;
          local_50 = pbVar4;
          local_1c = local_4c;
          uVar3 = FUN_004091d0();
          *(undefined4 *)(param_1 + 8) = uVar3;
          param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    &local_50;
          local_50 = pbVar1;
          local_4c = pbVar4;
          FUN_004086f0(&param_2);
          local_4c = param_4 + (int)pbVar1;
        }
        param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  &local_50;
        local_50 = pbVar1;
        FUN_004086c0();
      }
    }
  }
  local_8 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00409930 */

void __thiscall
FUN_00409930(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_3 != param_4) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    puVar2 = param_3;
    for (; param_4 != puVar1; param_4 = param_4 + 1) {
      *puVar2 = *param_4;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar2;
  }
  *param_2 = param_3;
  return;
}




/* Function: FUN_00409970 */

void __thiscall FUN_00409970(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0057aa70;
  local_10 = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004520c0(iVar1,param_2,param_3,param_1,param_3);
  *(int *)(param_1 + 8) = iVar1 + param_2 * 4;
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00409a00 */

void __thiscall FUN_00409a00(int param_1,int param_2)

{
  undefined1 local_8 [8];
  
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x1110) == '\0') {
      FUN_00408fd0(local_8,&param_2);
      FUN_004092b0(param_1);
      return;
    }
    FUN_00408fd0(local_8,&param_2);
  }
  return;
}




/* Function: FUN_00409a60 */

void __thiscall FUN_00409a60(int param_1,int param_2)

{
  undefined1 local_8 [8];
  
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x1110) == '\0') {
      FUN_00408f70(&param_2);
      FUN_00409300(param_1);
      return;
    }
    FUN_00408fd0(local_8,&param_2);
  }
  return;
}




/* Function: FUN_00409ac0 */

void __fastcall FUN_00409ac0(int param_1)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  
  *(undefined1 *)(param_1 + 0x1110) = 0;
  piVar5 = (int *)**(int **)(param_1 + 0x1124);
  if (piVar5 != *(int **)(param_1 + 0x1124)) {
    do {
      FUN_00409a00(piVar5[3]);
      if (*(char *)((int)piVar5 + 0x11) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x11);
          piVar4 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x11);
            piVar4 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int **)(param_1 + 0x1124));
  }
  piVar5 = (int *)**(int **)(param_1 + 0x1130);
  if (piVar5 != *(int **)(param_1 + 0x1130)) {
    do {
      FUN_00409a60(piVar5[3]);
      if (*(char *)((int)piVar5 + 0x11) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x11);
          piVar4 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x11);
            piVar4 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int **)(param_1 + 0x1130));
  }
  pvVar3 = *(void **)(*(int *)(param_1 + 0x1124) + 4);
  if (*(char *)((int)pvVar3 + 0x11) != '\0') {
    *(int *)(*(int *)(param_1 + 0x1124) + 4) = *(int *)(param_1 + 0x1124);
    *(undefined4 *)(param_1 + 0x1128) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 0x1124) = *(undefined4 *)(param_1 + 0x1124);
    *(int *)(*(int *)(param_1 + 0x1124) + 8) = *(int *)(param_1 + 0x1124);
    pvVar3 = *(void **)(*(int *)(param_1 + 0x1130) + 4);
    if (*(char *)((int)pvVar3 + 0x11) != '\0') {
      *(int *)(*(int *)(param_1 + 0x1130) + 4) = *(int *)(param_1 + 0x1130);
      *(undefined4 *)(param_1 + 0x1134) = 0;
      *(undefined4 *)*(undefined4 *)(param_1 + 0x1130) = *(undefined4 *)(param_1 + 0x1130);
      *(int *)(*(int *)(param_1 + 0x1130) + 8) = *(int *)(param_1 + 0x1130);
      return;
    }
    FUN_004081e0(*(undefined4 *)((int)pvVar3 + 8));
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  FUN_004081e0(*(undefined4 *)((int)pvVar3 + 8));
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar3);
}




/* Function: FUN_00409c40 */

void __fastcall FUN_00409c40(int param_1)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  
  *(undefined1 *)(param_1 + 4) = 0;
  piVar5 = (int *)**(int **)(param_1 + 0x18);
  if (piVar5 != *(int **)(param_1 + 0x18)) {
    do {
      FUN_004092b0(piVar5[3]);
      if (*(char *)((int)piVar5 + 0x11) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x11);
          piVar4 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x11);
            piVar4 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int **)(param_1 + 0x18));
  }
  piVar5 = (int *)**(int **)(param_1 + 0x24);
  if (piVar5 != *(int **)(param_1 + 0x24)) {
    do {
      FUN_00409300(piVar5[3]);
      if (*(char *)((int)piVar5 + 0x11) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x11);
          piVar4 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x11);
            piVar4 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int **)(param_1 + 0x24));
  }
  pvVar3 = *(void **)(*(int *)(param_1 + 0x18) + 4);
  if (*(char *)((int)pvVar3 + 0x11) != '\0') {
    *(int *)(*(int *)(param_1 + 0x18) + 4) = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(int *)(*(int *)(param_1 + 0x18) + 8) = *(int *)(param_1 + 0x18);
    pvVar3 = *(void **)(*(int *)(param_1 + 0x24) + 4);
    if (*(char *)((int)pvVar3 + 0x11) != '\0') {
      *(int *)(*(int *)(param_1 + 0x24) + 4) = *(int *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)*(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
      *(int *)(*(int *)(param_1 + 0x24) + 8) = *(int *)(param_1 + 0x24);
      return;
    }
    FUN_00408220(*(undefined4 *)((int)pvVar3 + 8));
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  FUN_00408220(*(undefined4 *)((int)pvVar3 + 8));
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar3);
}




/* Function: FUN_00409db0 */

int __thiscall FUN_00409db0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 != 0) {
    uVar3 = (*(int *)(param_2 + 8) - iVar1) / 0x1c;
    if (uVar3 != 0) {
      iVar2 = *(int *)(param_1 + 4);
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(param_1 + 8) - iVar2) / 0x1c;
      }
      if (uVar3 <= uVar6) {
        uVar4 = FUN_00408730(iVar1,*(undefined4 *)(param_2 + 8),iVar2,uVar3);
        FUN_00408ee0(uVar4,*(undefined4 *)(param_1 + 8));
        if (*(int *)(param_2 + 4) == 0) {
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
          return param_1;
        }
        *(int *)(param_1 + 8) =
             *(int *)(param_1 + 4) + ((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x1c) * 0x1c
        ;
        return param_1;
      }
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(param_1 + 0xc) - iVar2) / 0x1c;
      }
      if (uVar3 <= uVar6) {
        iVar5 = FUN_004e1e80();
        iVar5 = iVar1 + iVar5 * 0x1c;
        FUN_00408730(iVar1,iVar5,iVar2,iVar5);
        uVar4 = FUN_00408870(iVar5,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8),param_1
                             ,iVar5);
        *(undefined4 *)(param_1 + 8) = uVar4;
        return param_1;
      }
      FUN_00408ee0(iVar2,*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)(param_1 + 4));
    }
  }
  FUN_00409200();
  return param_1;
}




/* Function: FUN_00409f60 */

void __thiscall FUN_00409f60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 8) <= *(int *)(param_1 + 0x10) + 1U) {
    FUN_00409480(1);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 8);
  }
  iVar2 = iVar2 + -1;
  if (*(int *)(*(int *)(param_1 + 4) + iVar2 * 4) == 0) {
    uVar1 = FUN_00493c27(0x1c);
    *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4) = uVar1;
  }
  FUN_00407e90(*(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4),param_2);
  *(int *)(param_1 + 0xc) = iVar2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}




/* Function: FUN_00409fc0 */

undefined1 * __fastcall FUN_00409fc0(undefined1 *param_1)

{
  int iVar1;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *param_1 = local_1;
  iVar1 = FUN_00408ea0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}




/* Function: FUN_0040a000 */

void __thiscall FUN_0040a000(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x1c != 0) {
      iVar1 = (param_3 - iVar1) / 0x1c;
      goto LAB_0040a04b;
    }
  }
  iVar1 = 0;
LAB_0040a04b:
  FUN_004095a0(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x1c;
  return;
}




/* Function: FUN_0040a080 */

void __thiscall FUN_0040a080(int param_1,int param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057aa60;
  local_10 = ExceptionList;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - iVar3 >> 2;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 2;
    }
    if (0x3fffffffU - iVar5 < param_3) {
      ExceptionList = &local_10;
      FUN_00407e10();
      ExceptionList = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 2;
    }
    if (uVar2 < iVar5 + param_3) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar3 >> 2;
      }
      if (uVar2 < iVar5 + param_3) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) - iVar3 >> 2;
        }
        uVar2 = iVar3 + param_3;
      }
      ExceptionList = &local_10;
      iVar3 = FUN_00493c27();
      local_8 = 0;
      uVar4 = FUN_00543360(*(undefined4 *)(param_1 + 4));
      FUN_004520c0(uVar4);
      FUN_00543360(param_2);
      pvVar1 = *(void **)(param_1 + 4);
      if (pvVar1 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - (int)pvVar1 >> 2;
      }
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      *(uint *)(param_1 + 8) = iVar3 + (param_3 + iVar5) * 4;
      *(uint *)(param_1 + 0xc) = uVar2 * 4 + iVar3;
      *(int *)(param_1 + 4) = iVar3;
      ExceptionList = local_10;
      return;
    }
    if ((uint)(*(int *)(param_1 + 8) - param_2 >> 2) < param_3) {
      ExceptionList = &local_10;
      FUN_00532a30();
      local_8 = 2;
      FUN_00532ad0();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 4;
    }
    else {
      ExceptionList = &local_10;
      uVar4 = FUN_00532a30();
      *(undefined4 *)(param_1 + 8) = uVar4;
      FUN_00543330();
    }
    FUN_00450650();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_0040a320 */

void __fastcall FUN_0040a320(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}




/* Function: FUN_0040a340 */

void __thiscall FUN_0040a340(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  
  do {
    piVar1 = param_3;
    if (piVar1 == param_4) {
      *param_2 = piVar1;
      return;
    }
    param_3 = (int *)*piVar1;
  } while (piVar1 == *(int **)(param_1 + 4));
  *(int *)piVar1[1] = *piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
  FUN_00408010();
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar1);
}




/* Function: FUN_0040a3a0 */

void __thiscall FUN_0040a3a0(int param_1,char param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c [28];
  
  if ((*(int *)(param_1 + 0x10b0) != 0) && (param_2 == '\0')) {
    *(undefined4 *)(param_1 + 0x10c8) = 0xffffffff;
    return;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,"");
  FUN_00409f60(local_1c);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  *(undefined4 *)(param_1 + 0x10d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10c8) = 0xffffffff;
  return;
}




/* Function: FUN_0040a410 */

void FUN_0040a410(int param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  FILE *_File;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c [28];
  
  _vsnprintf(&DAT_005b3e20,0x2000,param_2,&stack0x0000000c);
  _File = fopen("log.txt","at");
  if (_File != (FILE *)0x0) {
    fprintf(_File,&DAT_005b3e20);
    fprintf(_File,"\n");
    fclose(_File);
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38,"");
  if (*(int *)(param_1 + 0x10b0) == 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,"");
    FUN_00409f60(local_1c);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x10ac);
    if (*(uint *)(param_1 + 0x10a8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(param_1 + 0x10a8);
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (local_38,*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          **)(*(int *)(param_1 + 0x10a4) + uVar4 * 4));
    uVar4 = *(uint *)(param_1 + 0x10ac);
    if (*(uint *)(param_1 + 0x10a8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(param_1 + 0x10a8);
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (*(int *)(param_1 + 0x10a4) + uVar4 * 4),"");
  }
  bVar3 = true;
  pcVar6 = &DAT_005b3e20;
  if (DAT_005b3e20 != '\0') {
    do {
      cVar2 = *pcVar6;
      if (cVar2 == '\t') {
        uVar4 = *(uint *)(param_1 + 0x10ac);
        if (*(uint *)(param_1 + 0x10a8) <= uVar4) {
          uVar4 = uVar4 - *(uint *)(param_1 + 0x10a8);
        }
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
                  (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(*(int *)(param_1 + 0x10a4) + uVar4 * 4),4,' ');
      }
      else if ((cVar2 == '\n') || (cVar2 == '\r')) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,"");
        if (*(uint *)(param_1 + 0x10a8) <= *(int *)(param_1 + 0x10b0) + 1U) {
          FUN_00409480(1);
        }
        iVar7 = *(int *)(param_1 + 0x10ac);
        if (iVar7 == 0) {
          iVar7 = *(int *)(param_1 + 0x10a8);
        }
        iVar7 = iVar7 + -1;
        if (*(int *)(*(int *)(param_1 + 0x10a4) + iVar7 * 4) == 0) {
          uVar5 = FUN_00493c27(0x1c);
          *(undefined4 *)(*(int *)(param_1 + 0x10a4) + iVar7 * 4) = uVar5;
        }
        FUN_00407e90(*(undefined4 *)(*(int *)(param_1 + 0x10a4) + iVar7 * 4),local_1c);
        *(int *)(param_1 + 0x10ac) = iVar7;
        *(int *)(param_1 + 0x10b0) = *(int *)(param_1 + 0x10b0) + 1;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
        bVar3 = true;
      }
      else {
        if (('\x1f' < cVar2) && (cVar2 < '~')) {
          uVar4 = *(uint *)(param_1 + 0x10ac);
          if (*(uint *)(param_1 + 0x10a8) <= uVar4) {
            uVar4 = uVar4 - *(uint *)(param_1 + 0x10a8);
          }
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
                    (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)(*(int *)(param_1 + 0x10a4) + uVar4 * 4),1,cVar2);
        }
        bVar3 = false;
      }
      pcVar1 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
    if (!bVar3) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,"");
      FUN_00409f60(local_1c);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
    }
  }
  uVar4 = *(uint *)(param_1 + 0x10ac);
  if (*(uint *)(param_1 + 0x10a8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(param_1 + 0x10a8);
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              (*(int *)(param_1 + 0x10a4) + uVar4 * 4),local_38);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
  return;
}




/* Function: FUN_0040ad40 */

void __thiscall FUN_0040ad40(int param_1,undefined1 param_2)

{
  FUN_0040a3a0(0);
  *(undefined1 *)(param_1 + 0x1090) = param_2;
  return;
}




/* Function: FUN_0040ad60 */

undefined4 * __fastcall FUN_0040ad60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00583324;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00409fc0();
  FUN_00409fc0();
  FUN_00409fc0();
  return param_1;
}




/* Function: FUN_0040ad90 */

void __fastcall FUN_0040ad90(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  *param_1 = &PTR_LAB_00583324;
  *(undefined1 *)(param_1 + 1) = 1;
  piVar4 = *(int **)param_1[3];
  if (piVar4 != (int *)param_1[3]) {
    do {
      FUN_00409a60(param_1);
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != (int *)param_1[3]);
  }
  FUN_00409c40();
  FUN_00409280();
  FUN_00409280();
  FUN_00409280();
  return;
}




/* Function: FUN_0040ae20 */

void __thiscall FUN_0040ae20(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 2) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 2))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_004520c0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 4;
    return;
  }
  FUN_0040a080(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_0040ae90 */

void __thiscall FUN_0040ae90(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x1c) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x1c))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_004087e0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x1c;
    return;
  }
  FUN_0040a000(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_0040af20 */

void __thiscall FUN_0040af20(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - iVar2 >> 2;
  }
  if (uVar1 < param_2) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar2 >> 2;
    }
    FUN_0040a080(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 2))) {
    FUN_00409930(&param_2,*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_0040bef0 */

void __thiscall
FUN_0040bef0(int param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            undefined4 param_3,int *param_4)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_84 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 *local_70;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_6c [16];
  undefined1 auStack_5c [28];
  undefined4 local_40;
  char local_3c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_1c [28];
  
  local_74 = param_1;
  bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                    (param_2);
  if (bVar1) {
    return;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_6c,param_2);
  local_80 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  local_7c = 0;
  local_78 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
  bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                    (local_6c);
  while (!bVar1) {
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             operator[](local_6c,0);
    iVar3 = isspace((int)*pcVar2);
    if (iVar3 == 0) {
      pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               operator[](local_6c,0);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
                (local_38,*pcVar2);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::erase
                (local_6c,0,1);
      bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              empty(local_6c);
      if (bVar1) {
        FUN_0040ae90();
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::clear
                  (local_38);
      }
    }
    else {
      bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              empty(local_38);
      if (!bVar1) {
        FUN_0040ae90();
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::clear
                  (local_38);
      }
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::erase
                (local_6c,0,1);
    }
    bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_6c);
  }
  if (((local_80 ==
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) ||
      (local_70 = (undefined1 *)((local_7c - (int)local_80) / 0x1c), local_70 == (undefined1 *)0x0))
     || (pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ::operator[](local_80,0), *pcVar2 == ';')) goto LAB_0040c2a4;
  if ((char)param_3 == '\0') {
    if (*(int *)(param_1 + 0x10c4) == 0) {
LAB_0040c104:
      FUN_00409f60();
    }
    else {
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_004081c0();
      bVar1 = std::operator!=(pbVar4,param_2);
      if (bVar1) goto LAB_0040c104;
    }
    *(undefined4 *)(param_1 + 0x10c8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x10d4) = 0xffffffff;
  }
  else {
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             operator[](local_80,0);
    if (*pcVar2 == '@') {
      bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              empty(local_80);
      while ((!bVar1 &&
             (pcVar2 = std::
                       basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       ::operator[](local_80,0), *pcVar2 == '@'))) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::erase
                  (local_80,0,1);
        bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                empty(local_80);
      }
      bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              empty(local_80);
      if (bVar1) {
        local_70 = &stack0xffffff68;
        FUN_00408f10(&local_70);
      }
    }
    else {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                (param_2);
      FUN_0040a410(param_1);
    }
  }
  FUN_0040a320();
  local_3c = (char)param_3;
  local_40 = 0;
  FUN_00409db0();
  (**(code **)(*param_4 + 0x44))(param_4,0);
  piVar5 = (int *)FUN_0041cae0();
  (**(code **)(*piVar5 + 0x44))(param_4,0,auStack_5c);
  iVar3 = FUN_0041cb10();
  if (iVar3 != 0) {
    piVar5 = (int *)FUN_0041cb10();
    (**(code **)(*piVar5 + 0x44))(param_4,0);
  }
  iVar3 = param_4[0x4c];
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0xf0) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(iVar3 + 0xf4) - *(int *)(iVar3 + 0xf0) >> 3;
    }
    uVar7 = 0;
    param_1 = local_74;
    if (uVar6 != 0) {
      do {
        (**(code **)(**(int **)(*(int *)(param_4[0x4c] + 0xf0) + uVar7 * 8) + 0x44))(param_4,0);
        uVar7 = uVar7 + 1;
        param_1 = local_74;
      } while (uVar7 < uVar6);
    }
  }
  FUN_0040f450(&local_74);
  if (*(int *)(param_1 + 0x10e0) == local_74) {
    FUN_004224c0(abStack_1c);
    bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (abStack_1c);
    pbVar4 = local_80;
    if (!bVar1) {
      if ((local_80 !=
           (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) &&
         (1 < (uint)((local_7c - (int)local_80) / 0x1c))) {
        FUN_0042a4a0(local_80);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_1c);
        goto LAB_0040c29b;
      }
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                (abStack_1c);
      pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(pbVar4);
      FUN_0040a410(param_1,"  %s = %s",pcVar2);
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_1c);
  }
  else {
    (**(code **)(local_74 + 0x24))(local_84,0,param_3);
  }
LAB_0040c29b:
  thunk_FUN_00409200();
LAB_0040c2a4:
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
  FUN_00409200();
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_6c);
  return;
}




/* Function: FUN_0040c2d0 */

void __thiscall
FUN_0040c2d0(undefined4 param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1b8 [28];
  int local_19c [25];
  int local_138;
  char local_100 [256];
  
  std::basic_ifstream<char,struct_std::char_traits<char>_>::
  basic_ifstream<char,struct_std::char_traits<char>_>
            ((basic_ifstream<char,struct_std::char_traits<char>_> *)local_19c);
  iVar6 = 1;
  pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (param_2);
  std::basic_ifstream<char,struct_std::char_traits<char>_>::open
            ((basic_ifstream<char,struct_std::char_traits<char>_> *)local_19c,pcVar2,iVar6);
  if (local_138 == 0) {
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(param_2);
    FUN_0040a410(param_1,"File [%s] not found",pcVar2);
  }
  else {
    bVar1 = std::ios_base::eof((ios_base *)((int)local_19c + *(int *)(local_19c[0] + 4)));
    while (!bVar1) {
      std::basic_istream<char,struct_std::char_traits<char>_>::getline
                ((basic_istream<char,struct_std::char_traits<char>_> *)local_19c,local_100,0x100);
      uVar4 = param_3;
      uVar5 = param_4;
      uVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_1b8,local_100);
      FUN_0040bef0(uVar3,uVar4,uVar5);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1b8);
      bVar1 = std::ios_base::eof((ios_base *)((int)local_19c + *(int *)(local_19c[0] + 4)));
    }
  }
  std::basic_ifstream<char,struct_std::char_traits<char>_>::_vbase_destructor_
            ((basic_ifstream<char,struct_std::char_traits<char>_> *)local_19c);
  return;
}




/* Function: FUN_0040c3c0 */

/* WARNING: Removing unreachable block (ram,0x0040c4d7) */

void __thiscall
FUN_0040c3c0(int param_1,int *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  undefined4 *puVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar12;
  undefined4 *puVar13;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_4;
  
  uVar11 = *(uint *)(param_1 + 0x24);
  if (uVar11 <= *(uint *)(param_1 + 0xc) >> 2) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
    }
    if (uVar11 < iVar6 - 1U) {
      if (*(uint *)(param_1 + 0x20) < uVar11) {
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) * 2 + 1;
      }
    }
    else {
      if (*(int *)(param_1 + 0x14) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
      }
      *(int *)(param_1 + 0x20) = iVar6 * 2 + -3;
      FUN_0040af20(iVar6 * 2 + -1,*(undefined4 *)(param_1 + 8));
    }
    uVar11 = (*(int *)(param_1 + 0x24) - (*(uint *)(param_1 + 0x20) >> 1)) - 1;
    pbVar8 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              (*(int *)(param_1 + 0x14) + uVar11 * 4);
    if (pbVar8 != *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   (*(int *)(param_1 + 0x14) + 4 + uVar11 * 4)) {
      do {
        uVar7 = FUN_00408900(pbVar8 + 8);
        if ((uVar7 & *(uint *)(param_1 + 0x20)) == uVar11) {
          pbVar12 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)pbVar8;
        }
        else {
          for (uVar7 = *(uint *)(param_1 + 0x24);
              (uVar11 < uVar7 &&
              (*(int *)(*(int *)(param_1 + 0x14) + uVar7 * 4) == *(int *)(param_1 + 8)));
              uVar7 = uVar7 - 1) {
            *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
             (*(int *)(param_1 + 0x14) + uVar7 * 4) = pbVar8;
          }
          pbVar12 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)pbVar8;
          local_4 = pbVar12;
          if (pbVar12 ==
              *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
               (param_1 + 8)) break;
          pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(*(int *)(param_1 + 0x14) + uVar11 * 4);
          uVar7 = uVar11;
          while ((pbVar8 == pbVar1 &&
                 (*(undefined4 *)(*(int *)(param_1 + 0x14) + uVar7 * 4) =
                       **(undefined4 **)(*(int *)(param_1 + 0x14) + uVar7 * 4), uVar7 != 0))) {
            uVar7 = uVar7 - 1;
            pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)(*(int *)(param_1 + 0x14) + uVar7 * 4);
          }
          pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(param_1 + 8);
          if (((pbVar8 != *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            **)(param_1 + 8)) && (pbVar1 != pbVar8)) &&
             (pbVar3 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         **)pbVar8, pbVar1 != pbVar3)) {
            **(undefined4 **)(pbVar8 + 4) = pbVar3;
            **(undefined4 **)(pbVar3 + 4) = pbVar1;
            **(undefined4 **)(pbVar1 + 4) = pbVar8;
            uVar4 = *(undefined4 *)(pbVar1 + 4);
            *(undefined4 *)(pbVar1 + 4) = *(undefined4 *)(pbVar3 + 4);
            *(undefined4 *)(pbVar3 + 4) = *(undefined4 *)(pbVar8 + 4);
            *(undefined4 *)(pbVar8 + 4) = uVar4;
          }
          *(undefined4 *)(*(int *)(param_1 + 0x14) + 4 + *(int *)(param_1 + 0x24) * 4) =
               *(undefined4 *)(param_1 + 8);
        }
        pbVar8 = pbVar12;
      } while (pbVar12 !=
               *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (*(int *)(param_1 + 0x14) + 4 + uVar11 * 4));
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  uVar11 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::begin(param_3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::end(param_3);
  for (pbVar8 = param_3; pbVar8 != local_4; pbVar8 = pbVar8 + 1) {
    uVar11 = uVar11 * 2 ^ (int)(char)*pbVar8;
  }
  uVar11 = *(uint *)(param_1 + 0x20) & uVar11;
  if (*(uint *)(param_1 + 0x24) <= uVar11) {
    uVar11 = uVar11 + (-1 - (*(uint *)(param_1 + 0x20) >> 1));
  }
  iVar6 = uVar11 * 4;
  piVar9 = (int *)(*(int *)(param_1 + 0x14) + iVar6);
  puVar13 = (undefined4 *)piVar9[1];
  if (puVar13 != (undefined4 *)*piVar9) {
    do {
      puVar13 = (undefined4 *)puVar13[1];
      bVar5 = std::operator<(param_3,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                      *)(puVar13 + 2));
      if (!bVar5) {
        bVar5 = std::operator<((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                *)(puVar13 + 2),param_3);
        if (!bVar5) {
          *param_2 = (int)puVar13;
          *(undefined1 *)(param_2 + 1) = 0;
          return;
        }
        puVar13 = (undefined4 *)*puVar13;
        break;
      }
    } while (puVar13 != *(undefined4 **)(iVar6 + *(int *)(param_1 + 0x14)));
  }
  iVar10 = FUN_00408590(puVar13,puVar13[1],param_3);
  FUN_00408620(1);
  puVar13[1] = iVar10;
  **(int **)(iVar10 + 4) = iVar10;
  iVar10 = puVar13[1];
  puVar2 = *(undefined4 **)(iVar6 + *(int *)(param_1 + 0x14));
  while ((puVar13 == puVar2 && (*(int *)(iVar6 + *(int *)(param_1 + 0x14)) = iVar10, uVar11 != 0)))
  {
    uVar11 = uVar11 - 1;
    iVar6 = uVar11 * 4;
    puVar2 = *(undefined4 **)(iVar6 + *(int *)(param_1 + 0x14));
  }
  *param_2 = iVar10;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}




/* Function: FUN_0040c650 */

void __fastcall FUN_0040c650(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_4;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  local_4 = param_1;
  FUN_0040a340(&local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_0040c690 */

void __thiscall FUN_0040c690(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c [28];
  
  FUN_0040a3a0(0);
  if (((*(char *)(param_1 + 0x1090) == '\0') || ((int)param_3 < 1)) || (param_2 == 0x60)) {
    *(undefined1 *)(param_1 + 0x1110) = 1;
    piVar6 = (int *)**(int **)(param_1 + 0x1118);
    if (piVar6 != *(int **)(param_1 + 0x1118)) {
      do {
        (**(code **)(*(int *)piVar6[3] + 0xc))(param_2,param_3);
        if (*(char *)((int)piVar6 + 0x11) == '\0') {
          piVar2 = (int *)piVar6[2];
          if (*(char *)((int)piVar2 + 0x11) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x11);
              piVar6 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar1 = *(char *)(piVar6[1] + 0x11);
            piVar3 = (int *)piVar6[1];
            piVar2 = piVar6;
            while ((piVar6 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
              cVar1 = *(char *)(piVar6[1] + 0x11);
              piVar3 = (int *)piVar6[1];
              piVar2 = piVar6;
            }
          }
        }
      } while (piVar6 != *(int **)(param_1 + 0x1118));
    }
    FUN_0041cae0();
    iVar5 = FUN_0042dbb0();
    if (iVar5 != 0) {
      FUN_00412e58(iVar5,"OnChar");
      FUN_00412cfc(iVar5,(double)param_2);
      FUN_00412798(iVar5,1,0);
    }
    FUN_00409ac0();
  }
  else {
    if ((0x1f < param_2) && (param_2 < 0x7e)) {
      uVar7 = *(uint *)(param_1 + 0x10d4);
      if (uVar7 != 0xffffffff) {
        pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 FUN_004081c0();
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::insert
                  (pbVar4,uVar7,param_3,(char)param_2);
        FUN_0040c830();
        return;
      }
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_004081c0();
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
                (pbVar4,param_3,(char)param_2);
      return;
    }
    if (param_2 == 0xd) {
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_004081c0();
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,pbVar4);
      FUN_0040a3a0(1);
      FUN_0040bef0(local_1c,0,param_4);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
      return;
    }
  }
  return;
}




/* Function: FUN_0040ce70 */

undefined4 __fastcall FUN_0040ce70(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_0040d000((int)&uStack_4 + 3,(int)&uStack_4 + 3);
  return param_1;
}




/* Function: FUN_0040ce90 */

int FUN_0040ce90(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_34 [8];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_2c [28];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057aaa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c,param_1);
  local_10 = 0;
  local_4 = 0;
  piVar2 = (int *)FUN_0040c3c0(local_34,local_2c);
  iVar1 = *piVar2;
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
  ExceptionList = local_c;
  return iVar1 + 0x24;
}




/* Function: FUN_0040cf00 */

void __fastcall FUN_0040cf00(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_4;
  
  local_4 = param_1;
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_0040a340(&local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 8));
}




/* Function: FUN_0040cf60 */

undefined1 * __thiscall FUN_0040cf60(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057aacb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  uVar1 = FUN_00408a50();
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_2 = *(undefined1 **)(param_1 + 8);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar2 = FUN_00493c27(0x24);
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 0x18) = iVar2;
  *(int *)(param_1 + 0x1c) = iVar2 + 0x24;
  FUN_00409970(9,&param_2);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0040d000 */

undefined1 * __thiscall FUN_0040d000(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057aa8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  uVar1 = FUN_00408a70();
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_2 = *(undefined1 **)(param_1 + 8);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar2 = FUN_00493c27(0x24);
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 0x18) = iVar2;
  *(int *)(param_1 + 0x1c) = iVar2 + 0x24;
  FUN_00409970(9,&param_2);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0040d840 */

/* WARNING: Removing unreachable block (ram,0x0040d87c) */

void __fastcall FUN_0040d840(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_4;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  local_4 = param_1;
  FUN_004f67b0(&local_4,uVar2,puVar1);
  local_4 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  FUN_0040a080(*(undefined4 *)(param_1 + 0x14),9,&local_4);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}




/* Function: FUN_0040d8d0 */

undefined4 __fastcall FUN_0040d8d0(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_0040cf60((int)&uStack_4 + 3,(int)&uStack_4 + 3);
  return param_1;
}




/* Function: FUN_0040d9f0 */

undefined4 * __fastcall FUN_0040d9f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00583740;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4));
  FUN_0040d8d0();
  FUN_0040ce70();
  param_1[0x20] = 0;
  param_1[2] = 0;
  FUN_00411120(1);
  FUN_00411140(1);
  *(undefined1 *)((int)param_1 + 6) = 1;
  FUN_00411160(0);
  param_1[0xb] = 0x42c80000;
  return param_1;
}




/* Function: FUN_0040da70 */

void FUN_0040da70(void)

{
  return;
}




/* Function: FUN_0040da90 */

void __fastcall FUN_0040da90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00583740;
  FUN_004f7ae0();
  thunk_FUN_0040cf00();
                    /* WARNING: Could not recover jumptable at 0x0040daad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4));
  return;
}




/* Function: FUN_0040dac0 */

void * __thiscall FUN_0040dac0(void *param_1,byte param_2)

{
  FUN_0040da90();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0040dae0 */

undefined4 * __fastcall FUN_0040dae0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c [28];
  
  FUN_0040d9f0();
  puVar4 = (undefined4 *)0x0;
  *param_1 = &PTR_LAB_00583a00;
  param_1[0x21] = 0;
  puVar2 = param_1 + 0x22;
  iVar3 = 0x100;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0x3f800000;
    puVar2[3] = 0x3f800000;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x423] = 0;
  *(undefined1 *)(param_1 + 0x424) = 0;
  param_1[0x425] = 0x3a;
  param_1[0x426] = 0x1e;
  param_1[0x427] = 0x14;
  param_1[0x429] = 0;
  param_1[0x42a] = 0;
  param_1[0x42b] = 0;
  param_1[0x42c] = 0;
  param_1[0x42e] = 0;
  param_1[0x42f] = 0;
  param_1[0x430] = 0;
  param_1[0x431] = 0;
  param_1[0x432] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x433) = 0;
  param_1[0x434] = 0;
  param_1[0x435] = 0xffffffff;
  FUN_0040ce70();
  param_1[0x440] = 0x800a1080;
  param_1[0x441] = 0x80100a80;
  param_1[0x442] = 0x20200af0;
  param_1[0x443] = 0x200a20f0;
  *(undefined1 *)(param_1 + 0x444) = 0;
  FUN_00409fc0();
  FUN_00409fc0();
  FUN_00409fc0();
  FUN_0040d840();
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,"help");
  puVar2 = (undefined4 *)FUN_0040ce90(local_1c);
  *puVar2 = &LAB_0040d0a0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,"load");
  puVar2 = (undefined4 *)FUN_0040ce90(local_1c);
  *puVar2 = &LAB_0040d8f0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,"kill");
  puVar2 = (undefined4 *)FUN_0040ce90(local_1c);
  *puVar2 = &LAB_0040d380;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,"console");
  puVar2 = (undefined4 *)FUN_0040ce90(local_1c);
  *puVar2 = &LAB_0040d6e0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,"set");
  puVar2 = (undefined4 *)FUN_0040ce90(local_1c);
  *puVar2 = &LAB_0040d480;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,"fly");
  puVar2 = (undefined4 *)FUN_0040ce90(local_1c);
  *puVar2 = &LAB_00407000;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,"exit");
  puVar2 = (undefined4 *)FUN_0040ce90(local_1c);
  *puVar2 = &LAB_00407010;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_1c,"errorlevel");
  puVar2 = (undefined4 *)FUN_0040ce90(local_1c);
  *puVar2 = &LAB_0040a700;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,"frustum");
  puVar2 = (undefined4 *)FUN_0040ce90(local_1c);
  *puVar2 = &LAB_0040d580;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  remove("log.txt");
  puVar2 = operator_new(0x1c04,(nothrow_t *)&DAT_005b6164);
  pcVar1 = basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_exref;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x100;
    puVar4 = puVar2 + 1;
    _eh_vector_constructor_iterator_
              (puVar4,0x1c,0x100,pcVar1,
               ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_exref);
  }
  param_1[0x422] = puVar4;
  FUN_00406f70(0x1b,&DAT_005839d0);
  FUN_00406f70(0x31,&DAT_00582a1c);
  FUN_00406f70(0x32,&DAT_005839cc);
  FUN_00406f70(0x33,&DAT_005839c8);
  FUN_00406f70(0x34,&DAT_005839c4);
  FUN_00406f70(0x35,&DAT_005839c0);
  FUN_00406f70(0x36,&DAT_005839bc);
  FUN_00406f70(0x37,&DAT_005839b8);
  FUN_00406f70(0x38,&DAT_005839b4);
  FUN_00406f70(0x39,&DAT_005839b0);
  FUN_00406f70(0x30,&DAT_005839ac);
  FUN_00406f70(0x2d,&DAT_005839a8);
  FUN_00406f70(0x3d,&DAT_005839a4);
  FUN_00406f70(8,"Backspace");
  FUN_00406f70(9,&DAT_00583994);
  FUN_00406f70(0x51,&DAT_00583990);
  FUN_00406f70(0x57,&DAT_0058398c);
  FUN_00406f70(0x45,&DAT_00583988);
  FUN_00406f70(0x52,&DAT_00583984);
  FUN_00406f70(0x54,&DAT_00583980);
  FUN_00406f70(0x59,&DAT_0058397c);
  FUN_00406f70(0x55,&DAT_00583978);
  FUN_00406f70(0x49,&DAT_00583974);
  FUN_00406f70(0x4f,&DAT_00583970);
  FUN_00406f70(0x50,&DAT_0058396c);
  FUN_00406f70(0x5b,&DAT_00583968);
  FUN_00406f70(0x5d,&DAT_00583964);
  FUN_00406f70(0xd,"Enter");
  FUN_00406f70(0xa2,"LCTRL");
  FUN_00406f70(0xa3,"RCTRL");
  FUN_00406f70(0x41,&DAT_00583948);
  FUN_00406f70(0x53,&DAT_005827c8);
  FUN_00406f70(0x44,&DAT_005827c0);
  FUN_00406f70(0x46,&DAT_00583944);
  FUN_00406f70(0x47,&DAT_00583940);
  FUN_00406f70(0x48,&DAT_0058393c);
  FUN_00406f70(0x4a,&DAT_00583938);
  FUN_00406f70(0x4b,&DAT_00583934);
  FUN_00406f70(0x4c,&DAT_00583930);
  FUN_00406f70(0xa0,"LShift");
  FUN_00406f70(0x5a,&DAT_00583924);
  FUN_00406f70(0x58,&DAT_00583920);
  FUN_00406f70(0x43,&DAT_0058391c);
  FUN_00406f70(0x56,&DAT_00583918);
  FUN_00406f70(0x42,&DAT_005827bc);
  FUN_00406f70(0x4e,&DAT_00583914);
  FUN_00406f70(0x4d,&DAT_005827c4);
  FUN_00406f70(0xa1,"RShift");
  FUN_00406f70(0x6a,"Num *");
  FUN_00406f70(0xa4,&DAT_00583900);
  FUN_00406f70(0x20,"Space");
  FUN_00406f70(0x14,"Caps Lock");
  FUN_00406f70(0x70,&DAT_005838e8);
  FUN_00406f70(0x71,&DAT_005838e4);
  FUN_00406f70(0x72,&DAT_005838e0);
  FUN_00406f70(0x73,&DAT_005838dc);
  FUN_00406f70(0x74,&DAT_005838d8);
  FUN_00406f70(0x75,&DAT_005838d4);
  FUN_00406f70(0x76,&DAT_005838d0);
  FUN_00406f70(0x77,&DAT_005838cc);
  FUN_00406f70(0x78,&DAT_005838c8);
  FUN_00406f70(0x79,&DAT_005838c4);
  FUN_00406f70(0x13,"Pause");
  FUN_00406f70(0x91,"Scroll Lock");
  FUN_00406f70(0x67,"Num 7");
  FUN_00406f70(0x68,"Num 8");
  FUN_00406f70(0x69,"Num 9");
  FUN_00406f70(0x6d,"Num -");
  FUN_00406f70(100,"Num 4");
  FUN_00406f70(0x65,"Num 5");
  FUN_00406f70(0x66,"Num 6");
  FUN_00406f70(0x6b,"Num +");
  FUN_00406f70(0x61,"Num 1");
  FUN_00406f70(0x62,"Num 2");
  FUN_00406f70(99,"Num 3");
  FUN_00406f70(0x60,"Num 0");
  FUN_00406f70(0x2e,"Delete");
  FUN_00406f70(0x2d,"Insert");
  FUN_00406f70(0x24,&DAT_00583840);
  FUN_00406f70(0x23,&DAT_0058383c);
  FUN_00406f70(0x21,"Page Up");
  FUN_00406f70(0x22,"Page Down");
  FUN_00406f70(0x90,"Num Lock");
  FUN_00406f70(0x6e,"Decimal");
  FUN_00406f70(0x7a,&DAT_00583810);
  FUN_00406f70(0x7b,&DAT_0058380c);
  FUN_00406f70(0x11,&DAT_00583804);
  FUN_00406f70(0x10,"Shift");
  FUN_00406f70(0x12,&DAT_00583900);
  FUN_00406f70(0x25,&DAT_005837f4);
  FUN_00406f70(0x27,"Right");
  FUN_00406f70(0x26,&DAT_005837e8);
  FUN_00406f70(0x28,&DAT_005837e0);
  FUN_00406f70(0xbc,&DAT_005837dc);
  FUN_00406f70(0xbe,&DAT_005837d8);
  FUN_00406f70(0xbf,&DAT_005837d4);
  FUN_00406f70(0xba,&DAT_005837d0);
  FUN_00406f70(0xdc,&DAT_005837cc);
  FUN_00406f70(0xc0,&DAT_005837c8);
  FUN_00406f70(0xde,&DAT_005837c4);
  return param_1;
}




/* Function: FUN_0040e370 */

void __fastcall FUN_0040e370(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  *param_1 = &PTR_LAB_00583a00;
  piVar4 = *(int **)param_1[0x446];
  if (piVar4 != (int *)param_1[0x446]) {
    do {
      FUN_00409300(param_1);
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != (int *)param_1[0x446]);
  }
  FUN_00541c20();
  FUN_00409250();
  FUN_00409250();
  FUN_00409250();
  FUN_004f7ae0();
  FUN_00409130();
  FUN_00409130();
  piVar4 = (int *)param_1[0x21];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    param_1[0x21] = 0;
  }
  FUN_0040da90();
  return;
}




/* Function: FUN_0040e450 */

void * __thiscall FUN_0040e450(void *param_1,byte param_2)

{
  FUN_0040e370();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0040e470 */

long FUN_0040e470(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,long param_2)

{
  bool bVar1;
  char *_Str;
  long lVar2;
  char **_EndPtr;
  int _Radix;
  char *local_4;
  
  bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                    (param_1);
  if (bVar1) {
    return param_2;
  }
  _EndPtr = &local_4;
  _Radix = 10;
  local_4 = (char *)0x0;
  _Str = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                   (param_1);
  lVar2 = strtol(_Str,_EndPtr,_Radix);
  return lVar2;
}




/* Function: FUN_0040e4b0 */

ulong FUN_0040e4b0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,ulong param_2)

{
  bool bVar1;
  char *_Str;
  ulong uVar2;
  char **_EndPtr;
  int _Radix;
  char *local_4;
  
  bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                    (param_1);
  if (bVar1) {
    return param_2;
  }
  _EndPtr = &local_4;
  _Radix = 10;
  local_4 = (char *)0x0;
  _Str = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                   (param_1);
  uVar2 = strtoul(_Str,_EndPtr,_Radix);
  return uVar2;
}




/* Function: FUN_0040e4f0 */

ulong FUN_0040e4f0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,ulong param_2)

{
  bool bVar1;
  char *_Str;
  ulong uVar2;
  char **_EndPtr;
  int _Radix;
  char *local_4;
  
  bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                    (param_1);
  if (bVar1) {
    return param_2;
  }
  _EndPtr = &local_4;
  _Radix = 0x10;
  local_4 = (char *)0x0;
  _Str = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                   (param_1);
  uVar2 = strtoul(_Str,_EndPtr,_Radix);
  return uVar2;
}




/* Function: FUN_0040e530 */

float10 FUN_0040e530(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                     *param_1,float param_2)

{
  bool bVar1;
  char *_String;
  double dVar2;
  
  bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                    (param_1);
  if (bVar1) {
    return (float10)param_2;
  }
  _String = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                      (param_1);
  dVar2 = atof(_String);
  return (float10)dVar2;
}




/* Function: FUN_0040e560 */

undefined1
FUN_0040e560(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            undefined1 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int local_64;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_60 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [36];
  int local_20;
  
  bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                    (param_1);
  if (!bVar1) {
    FUN_00408950(local_60,param_1);
    FUN_0040ce70();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44,"disable")
    ;
    puVar2 = (undefined4 *)FUN_0040ce90(local_44);
    *puVar2 = 0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44,"false");
    puVar2 = (undefined4 *)FUN_0040ce90(local_44);
    *puVar2 = 0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44,"off");
    puVar2 = (undefined4 *)FUN_0040ce90(local_44);
    *puVar2 = 0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44,"0");
    puVar2 = (undefined4 *)FUN_0040ce90(local_44);
    *puVar2 = 0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44,"enable");
    puVar2 = (undefined4 *)FUN_0040ce90(local_44);
    *puVar2 = 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44,"true");
    puVar2 = (undefined4 *)FUN_0040ce90(local_44);
    *puVar2 = 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44,"on");
    puVar2 = (undefined4 *)FUN_0040ce90(local_44);
    *puVar2 = 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44,"1");
    puVar2 = (undefined4 *)FUN_0040ce90(local_44);
    *puVar2 = 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
    FUN_0040f450(&local_64,local_60);
    if (local_20 != local_64) {
      if (*(int *)(local_64 + 0x24) == 0) {
        FUN_004f7ae0();
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_60);
        return 0;
      }
      if (*(int *)(local_64 + 0x24) == 1) {
        FUN_004f7ae0();
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_60);
        return 1;
      }
    }
    FUN_004f7ae0();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_60);
  }
  return param_2;
}




/* Function: FUN_0040e780 */

void FUN_0040e780(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057aaf2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_50,"vector<T> too long");
  local_4 = 0;
  exception::exception((exception *)local_34);
  local_4._0_1_ = 1;
  local_34[0] = &PTR_FUN_00583110;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,local_50);
  local_4 = (uint)local_4._1_3_ << 8;
  local_34[0] = &PTR_FUN_00583118;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_34,(ThrowInfo *)&DAT_005950a0);
}




/* Function: FUN_0040e800 */

void FUN_0040e800(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}




/* Function: FUN_0040e840 */

void FUN_0040e840(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  while (param_2 != param_3) {
    param_4[-4] = param_3[-4];
    param_4[-3] = param_3[-3];
    param_4[-2] = param_3[-2];
    param_4[-1] = param_3[-1];
    param_3 = param_3 + -4;
    param_4 = param_4 + -4;
  }
  *param_1 = param_4;
  return;
}




/* Function: FUN_0040e890 */

void __thiscall FUN_0040e890(int param_1,undefined4 param_2,char param_3,int param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  if (puVar1 != *(undefined4 **)(param_1 + 0x34)) {
    do {
      if ((*(char *)(puVar1 + 2) == param_3) && (*puVar1 = param_2, param_4 != -1)) {
        puVar1[1] = param_4;
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != *(undefined4 **)(param_1 + 0x34));
  }
  return;
}




/* Function: FUN_0040e8d0 */

uint __thiscall FUN_0040e8d0(int param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  while( true ) {
    if (uVar1 == *(uint *)(param_1 + 0x34)) {
      return uVar1 & 0xffffff00;
    }
    if (((*(char *)(uVar1 + 8) == param_2) && (*(char *)(uVar1 + 10) != '\0')) &&
       (*(char *)(uVar1 + 0xb) != *(char *)(uVar1 + 10))) break;
    uVar1 = uVar1 + 0x10;
  }
  *(undefined1 *)(uVar1 + 0xb) = *(undefined1 *)(uVar1 + 10);
  return CONCAT31((int3)(uVar1 >> 8),1);
}




/* Function: FUN_0040e910 */

uint __thiscall FUN_0040e910(int param_1,int param_2)

{
  uint uVar1;
  undefined3 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  while( true ) {
    if (uVar1 == *(uint *)(param_1 + 0x34)) {
      return uVar1 & 0xffffff00;
    }
    if (*(char *)(uVar1 + 8) == (char)param_2) break;
    uVar1 = uVar1 + 0x10;
  }
  uVar2 = (undefined3)(uVar1 >> 8);
  if ((param_2 >> 8 & 8U) == 0) {
    return CONCAT31(uVar2,*(char *)(uVar1 + 9) == (char)((uint)param_2 >> 8));
  }
  return CONCAT31(uVar2,*(undefined1 *)(uVar1 + 10));
}




/* Function: FUN_0040e950 */

void __thiscall FUN_0040e950(int param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != *(int *)(param_1 + 0x34)) {
    do {
      if (param_2 == 0xffffffff) {
LAB_0040e982:
        *(undefined1 *)(iVar2 + 9) = 0;
      }
      else if (param_2 == 8) {
        uVar1 = *(undefined1 *)(iVar2 + 10);
        *(undefined1 *)(iVar2 + 10) = 0;
        *(undefined1 *)(iVar2 + 0xb) = uVar1;
      }
      else if ((param_2 & (int)*(char *)(iVar2 + 9)) != 0) goto LAB_0040e982;
      iVar2 = iVar2 + 0x10;
    } while (iVar2 != *(int *)(param_1 + 0x34));
  }
  return;
}




/* Function: FUN_0040e9a0 */

void __thiscall FUN_0040e9a0(int param_1,int param_2)

{
  int iVar1;
  DWORD DVar2;
  int *piVar3;
  
  DVar2 = GetTickCount();
  piVar3 = *(int **)(param_1 + 0x30);
  if (piVar3 != *(int **)(param_1 + 0x34)) {
    while ((*piVar3 != param_2 && (piVar3[1] != param_2))) {
      piVar3 = piVar3 + 4;
      if (piVar3 == *(int **)(param_1 + 0x34)) {
        return;
      }
    }
    if (*(char *)((int)piVar3 + 9) != '\x01') {
      iVar1 = piVar3[3];
      piVar3[3] = DVar2;
      *(char *)((int)piVar3 + 9) = ((int)(DVar2 - iVar1) < 100) + '\x01';
      *(undefined1 *)((int)piVar3 + 0xb) = *(undefined1 *)((int)piVar3 + 10);
      *(undefined1 *)((int)piVar3 + 10) = 1;
      return;
    }
    *(undefined1 *)((int)piVar3 + 9) = 1;
    *(undefined1 *)((int)piVar3 + 0xb) = *(undefined1 *)((int)piVar3 + 10);
    *(undefined1 *)((int)piVar3 + 10) = 1;
    piVar3[3] = DVar2;
  }
  return;
}




/* Function: FUN_0040ea10 */

void __thiscall FUN_0040ea10(int param_1,int param_2)

{
  DWORD DVar1;
  int *piVar2;
  
  DVar1 = GetTickCount();
  piVar2 = *(int **)(param_1 + 0x30);
  if (piVar2 != *(int **)(param_1 + 0x34)) {
    while ((*piVar2 != param_2 && (piVar2[1] != param_2))) {
      piVar2 = piVar2 + 4;
      if (piVar2 == *(int **)(param_1 + 0x34)) {
        return;
      }
    }
    if (*(char *)((int)piVar2 + 9) != '\x02') {
      *(undefined1 *)((int)piVar2 + 9) = 4;
    }
    piVar2[3] = DVar1;
    *(undefined1 *)((int)piVar2 + 0xb) = *(undefined1 *)((int)piVar2 + 10);
    *(undefined1 *)((int)piVar2 + 10) = 0;
  }
  return;
}




/* Function: FUN_0040ea80 */

void FUN_0040ea80(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
    }
    param_1 = param_1 + 4;
  }
  return;
}




/* Function: FUN_0040eac0 */

void __thiscall
FUN_0040eac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_005175f0(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_0040eaf0 */

int __thiscall FUN_0040eaf0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_0040ea80(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x10 + param_2;
}




/* Function: FUN_0040eb20 */

void __thiscall FUN_0040eb20(int param_1,int param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057ab00;
  local_10 = ExceptionList;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - iVar3 >> 4;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 4;
    }
    if (0xfffffffU - iVar5 < param_3) {
      ExceptionList = &local_10;
      FUN_0040e780();
      ExceptionList = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 4;
    }
    if (uVar2 < iVar5 + param_3) {
      if (0xfffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar3 >> 4;
      }
      if (uVar2 < iVar5 + param_3) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) - iVar3 >> 4;
        }
        uVar2 = iVar3 + param_3;
      }
      ExceptionList = &local_10;
      iVar3 = FUN_00493c27();
      local_8 = 0;
      uVar4 = FUN_005175f0(*(undefined4 *)(param_1 + 4));
      FUN_0040ea80(uVar4);
      FUN_005175f0(param_2);
      pvVar1 = *(void **)(param_1 + 4);
      if (pvVar1 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - (int)pvVar1 >> 4;
      }
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      *(uint *)(param_1 + 0xc) = uVar2 * 0x10 + iVar3;
      *(uint *)(param_1 + 8) = (param_3 + iVar5) * 0x10 + iVar3;
      *(int *)(param_1 + 4) = iVar3;
      ExceptionList = local_10;
      return;
    }
    if ((uint)(*(int *)(param_1 + 8) - param_2 >> 4) < param_3) {
      ExceptionList = &local_10;
      FUN_0040eac0();
      local_8 = 2;
      FUN_0040eaf0();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
    }
    else {
      ExceptionList = &local_10;
      uVar4 = FUN_0040eac0();
      *(undefined4 *)(param_1 + 8) = uVar4;
      FUN_0050b3a0();
    }
    FUN_0040e800();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_0040edd0 */

void __thiscall FUN_0040edd0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(int *)(param_1 + 8) - iVar1 >> 4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_3 - iVar1 >> 4;
  }
  FUN_0040eb20(param_3,1,param_4);
  *param_2 = iVar1 * 0x10 + *(int *)(param_1 + 4);
  return;
}




/* Function: FUN_0040ee20 */

undefined4 * __fastcall FUN_0040ee20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057ab18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040ad60();
  *param_1 = &PTR_FUN_00583aa0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0040ee60 */

void __fastcall FUN_0040ee60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00583aa0;
  if ((void *)param_1[0xc] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0xc]);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_0040ad90();
  return;
}




/* Function: FUN_0040eea0 */

void __thiscall FUN_0040eea0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 4) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 4))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_0040ea80(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x10;
    return;
  }
  FUN_0040edd0(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_0040ef10 */

void * __thiscall FUN_0040ef10(void *param_1,byte param_2)

{
  FUN_0040ee60();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0040ef30 */

void FUN_0040ef30(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  DWORD local_4;
  
  local_10 = param_1;
  local_c = param_3;
  local_8 = param_2;
  local_6 = 0;
  local_5 = 0;
  local_4 = GetTickCount();
  local_7 = 0;
  FUN_0040eea0(&local_10);
  return;
}




/* Function: FUN_0040ef80 */

void FUN_0040ef80(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(byte *)(iVar1 + param_1) = *(byte *)(iVar1 + param_1) << 7 | *(byte *)(iVar1 + param_1) >> 1
      ;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}




/* Function: FUN_0040efb0 */

void FUN_0040efb0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete__((void *)*param_1);
  }
  *param_1 = 0;
  if ((FILE *)param_1[3] != (FILE *)0x0) {
    fclose((FILE *)param_1[3]);
  }
  param_1[3] = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}




/* Function: FUN_0040f000 */

uint FUN_0040f000(undefined4 *param_1,uint param_2,size_t param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_4 == (int *)0x0) {
    return 0;
  }
  if ((FILE *)param_4[3] != (FILE *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040f01f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = fread(param_1,param_2,param_3,(FILE *)param_4[3]);
    return uVar2;
  }
  if (*param_4 != 0) {
    uVar2 = param_2 * param_3;
    if ((uVar2 != 0) && (param_3 != 0)) {
      iVar1 = param_4[1];
      if (param_4[2] <= (int)(iVar1 + uVar2)) {
        uVar2 = param_4[2] - iVar1;
      }
      uVar2 = (uVar2 / param_2) * param_2;
      if (uVar2 != 0) {
        puVar4 = (undefined4 *)(iVar1 + *param_4);
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *param_1 = *puVar4;
          puVar4 = puVar4 + 1;
          param_1 = param_1 + 1;
        }
        for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)param_1 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          param_1 = (undefined4 *)((int)param_1 + 1);
        }
        param_4[1] = param_4[1] + uVar2;
        return uVar2 / param_2;
      }
    }
  }
  return 0;
}




/* Function: FUN_0040f090 */

size_t FUN_0040f090(void *param_1,size_t param_2,size_t param_3,int param_4)

{
  size_t sVar1;
  
  if ((param_4 != 0) && (*(FILE **)(param_4 + 0xc) != (FILE *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0040f0a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    sVar1 = fwrite(param_1,param_2,param_3,*(FILE **)(param_4 + 0xc));
    return sVar1;
  }
  return 0;
}




/* Function: FUN_0040f0b0 */

int FUN_0040f0b0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if ((FILE *)param_1[3] != (FILE *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040f0c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = fseek((FILE *)param_1[3],param_2,param_3);
      return iVar1;
    }
    if (*param_1 != 0) {
      if (param_3 != 0) {
        if (param_3 == 1) {
          iVar1 = param_1[1];
        }
        else {
          if (param_3 != 2) {
            return -1;
          }
          iVar1 = param_1[2];
        }
        param_2 = iVar1 + param_2;
      }
      if ((-1 < param_2) && (param_2 <= param_1[2])) {
        param_1[1] = param_2;
        return 0;
      }
    }
  }
  return -1;
}




/* Function: FUN_0040f110 */

int FUN_0040f110(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if ((FILE *)param_1[3] != (FILE *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040f12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = ftell((FILE *)param_1[3]);
      return iVar1;
    }
    if (*param_1 != 0) {
      return param_1[1];
    }
  }
  return -1;
}




/* Function: FUN_0040f140 */

void FUN_0040f140(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ab82;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_50,"vector<T> too long");
  local_4 = 0;
  exception::exception((exception *)local_34);
  local_4._0_1_ = 1;
  local_34[0] = &PTR_FUN_00583110;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,local_50);
  local_4 = (uint)local_4._1_3_ << 8;
  local_34[0] = &PTR_FUN_00583118;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_34,(ThrowInfo *)&DAT_005950a0);
}




/* Function: FUN_0040f1c0 */

undefined4 *
FUN_0040f1c0(undefined4 param_1,undefined4 param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057ab41;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00493c27(0x28);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar1 + 2),param_3);
    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(puVar1 + 9) =
         param_3[0x1c];
  }
  ExceptionList = local_10;
  return puVar1;
}




/* Function: FUN_0040f250 */

void __thiscall FUN_0040f250(int param_1,uint param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ab82;
  local_c = ExceptionList;
  if (0x7ffffffU - *(int *)(param_1 + 8) < param_2) {
    ExceptionList = &local_c;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_50,"list<T> too long");
    local_4 = 0;
    exception::exception((exception *)local_34);
    local_4._0_1_ = 1;
    local_34[0] = &PTR_FUN_00583110;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,local_50);
    local_4 = (uint)local_4._1_3_ << 8;
    local_34[0] = &PTR_FUN_00583118;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_34,(ThrowInfo *)&DAT_005950a0);
  }
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  return;
}




/* Function: FUN_0040f2f0 */

undefined4 *
FUN_0040f2f0(undefined4 param_1,undefined4 param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057ab61;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00493c27(0x38);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar1 + 2),param_3);
    pbVar3 = param_3 + 0x1c;
    puVar4 = puVar1 + 9;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *(undefined4 *)pbVar3;
      pbVar3 = pbVar3 + 4;
      puVar4 = puVar4 + 1;
    }
  }
  ExceptionList = local_10;
  return puVar1;
}




/* Function: FUN_0040f390 */

void __thiscall FUN_0040f390(int param_1,uint param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ab82;
  local_c = ExceptionList;
  if (0x5555555U - *(int *)(param_1 + 8) < param_2) {
    ExceptionList = &local_c;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_50,"list<T> too long");
    local_4 = 0;
    exception::exception((exception *)local_34);
    local_4._0_1_ = 1;
    local_34[0] = &PTR_FUN_00583110;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,local_50);
    local_4 = (uint)local_4._1_3_ << 8;
    local_34[0] = &PTR_FUN_00583118;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_34,(ThrowInfo *)&DAT_005950a0);
  }
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  return;
}




/* Function: FUN_0040f430 */

void FUN_0040f430(void)

{
  int iVar1;
  
  iVar1 = FUN_00493c27(0x38);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}




/* Function: FUN_0040f450 */

void __thiscall
FUN_0040f450(int param_1,undefined4 *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar3 = FUN_00408900(param_3);
  uVar3 = uVar3 & uVar1;
  if (*(uint *)(param_1 + 0x24) <= uVar3) {
    uVar3 = uVar3 + (-1 - (uVar1 >> 1));
  }
  piVar4 = *(int **)(*(int *)(param_1 + 0x14) + uVar3 * 4);
  if (piVar4 != *(int **)(*(int *)(param_1 + 0x14) + uVar3 * 4 + 4)) {
    do {
      bVar2 = std::operator<((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              *)(piVar4 + 2),param_3);
      if (!bVar2) {
        bVar2 = std::operator<(param_3,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                        *)(piVar4 + 2));
        if (!bVar2) {
          *param_2 = piVar4;
          return;
        }
        *param_2 = *(undefined4 *)(param_1 + 8);
        return;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(*(int *)(param_1 + 0x14) + 4 + uVar3 * 4));
  }
  *param_2 = *(undefined4 *)(param_1 + 8);
  return;
}




/* Function: FUN_0040f510 */

void __thiscall FUN_0040f510(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0057ab90;
  local_10 = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004520c0(iVar1,param_2,param_3,param_1,param_3);
  *(int *)(param_1 + 8) = iVar1 + param_2 * 4;
  ExceptionList = local_10;
  return;
}




/* Function: FUN_0040f590 */

void __thiscall FUN_0040f590(int param_1,int param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057aba0;
  local_10 = ExceptionList;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - iVar3 >> 2;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 2;
    }
    if (0x3fffffffU - iVar5 < param_3) {
      ExceptionList = &local_10;
      FUN_0040f140();
      ExceptionList = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 2;
    }
    if (uVar2 < iVar5 + param_3) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar3 >> 2;
      }
      if (uVar2 < iVar5 + param_3) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) - iVar3 >> 2;
        }
        uVar2 = iVar3 + param_3;
      }
      ExceptionList = &local_10;
      iVar3 = FUN_00493c27();
      local_8 = 0;
      uVar4 = FUN_00543360(*(undefined4 *)(param_1 + 4));
      FUN_004520c0(uVar4);
      FUN_00543360(param_2);
      pvVar1 = *(void **)(param_1 + 4);
      if (pvVar1 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - (int)pvVar1 >> 2;
      }
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      *(uint *)(param_1 + 8) = iVar3 + (param_3 + iVar5) * 4;
      *(uint *)(param_1 + 0xc) = uVar2 * 4 + iVar3;
      *(int *)(param_1 + 4) = iVar3;
      ExceptionList = local_10;
      return;
    }
    if ((uint)(*(int *)(param_1 + 8) - param_2 >> 2) < param_3) {
      ExceptionList = &local_10;
      FUN_00532a30();
      local_8 = 2;
      FUN_00532ad0();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 4;
    }
    else {
      ExceptionList = &local_10;
      uVar4 = FUN_00532a30();
      *(undefined4 *)(param_1 + 8) = uVar4;
      FUN_00543330();
    }
    FUN_00450650();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_0040f830 */

void __thiscall FUN_0040f830(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - iVar2 >> 2;
  }
  if (uVar1 < param_2) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar2 >> 2;
    }
    FUN_0040f590(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 2))) {
    FUN_00409930(&param_2,*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_0040f8b0 */

undefined1 * __thiscall FUN_0040f8b0(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057abbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  uVar1 = FUN_00408a70();
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_2 = *(undefined1 **)(param_1 + 8);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar2 = FUN_00493c27(0x24);
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 0x18) = iVar2;
  *(int *)(param_1 + 0x1c) = iVar2 + 0x24;
  FUN_0040f510(9,&param_2);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0040f950 */

/* WARNING: Removing unreachable block (ram,0x0040fa67) */

void __thiscall
FUN_0040f950(int param_1,int *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  undefined4 *puVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar12;
  undefined4 *puVar13;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_4;
  
  uVar11 = *(uint *)(param_1 + 0x24);
  if (uVar11 <= *(uint *)(param_1 + 0xc) >> 2) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
    }
    if (uVar11 < iVar6 - 1U) {
      if (*(uint *)(param_1 + 0x20) < uVar11) {
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) * 2 + 1;
      }
    }
    else {
      if (*(int *)(param_1 + 0x14) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
      }
      *(int *)(param_1 + 0x20) = iVar6 * 2 + -3;
      FUN_0040f830(iVar6 * 2 + -1,*(undefined4 *)(param_1 + 8));
    }
    uVar11 = (*(int *)(param_1 + 0x24) - (*(uint *)(param_1 + 0x20) >> 1)) - 1;
    pbVar8 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              (*(int *)(param_1 + 0x14) + uVar11 * 4);
    if (pbVar8 != *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   (*(int *)(param_1 + 0x14) + 4 + uVar11 * 4)) {
      do {
        uVar7 = FUN_00408900(pbVar8 + 8);
        if ((uVar7 & *(uint *)(param_1 + 0x20)) == uVar11) {
          pbVar12 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)pbVar8;
        }
        else {
          for (uVar7 = *(uint *)(param_1 + 0x24);
              (uVar11 < uVar7 &&
              (*(int *)(*(int *)(param_1 + 0x14) + uVar7 * 4) == *(int *)(param_1 + 8)));
              uVar7 = uVar7 - 1) {
            *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
             (*(int *)(param_1 + 0x14) + uVar7 * 4) = pbVar8;
          }
          pbVar12 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)pbVar8;
          local_4 = pbVar12;
          if (pbVar12 ==
              *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
               (param_1 + 8)) break;
          pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(*(int *)(param_1 + 0x14) + uVar11 * 4);
          uVar7 = uVar11;
          while ((pbVar8 == pbVar1 &&
                 (*(undefined4 *)(*(int *)(param_1 + 0x14) + uVar7 * 4) =
                       **(undefined4 **)(*(int *)(param_1 + 0x14) + uVar7 * 4), uVar7 != 0))) {
            uVar7 = uVar7 - 1;
            pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)(*(int *)(param_1 + 0x14) + uVar7 * 4);
          }
          pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(param_1 + 8);
          if (((pbVar8 != *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            **)(param_1 + 8)) && (pbVar1 != pbVar8)) &&
             (pbVar3 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         **)pbVar8, pbVar1 != pbVar3)) {
            **(undefined4 **)(pbVar8 + 4) = pbVar3;
            **(undefined4 **)(pbVar3 + 4) = pbVar1;
            **(undefined4 **)(pbVar1 + 4) = pbVar8;
            uVar4 = *(undefined4 *)(pbVar1 + 4);
            *(undefined4 *)(pbVar1 + 4) = *(undefined4 *)(pbVar3 + 4);
            *(undefined4 *)(pbVar3 + 4) = *(undefined4 *)(pbVar8 + 4);
            *(undefined4 *)(pbVar8 + 4) = uVar4;
          }
          *(undefined4 *)(*(int *)(param_1 + 0x14) + 4 + *(int *)(param_1 + 0x24) * 4) =
               *(undefined4 *)(param_1 + 8);
        }
        pbVar8 = pbVar12;
      } while (pbVar12 !=
               *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (*(int *)(param_1 + 0x14) + 4 + uVar11 * 4));
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  uVar11 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::begin(param_3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::end(param_3);
  for (pbVar8 = param_3; pbVar8 != local_4; pbVar8 = pbVar8 + 1) {
    uVar11 = uVar11 * 2 ^ (int)(char)*pbVar8;
  }
  uVar11 = *(uint *)(param_1 + 0x20) & uVar11;
  if (*(uint *)(param_1 + 0x24) <= uVar11) {
    uVar11 = uVar11 + (-1 - (*(uint *)(param_1 + 0x20) >> 1));
  }
  iVar6 = uVar11 * 4;
  piVar9 = (int *)(*(int *)(param_1 + 0x14) + iVar6);
  puVar13 = (undefined4 *)piVar9[1];
  if (puVar13 != (undefined4 *)*piVar9) {
    do {
      puVar13 = (undefined4 *)puVar13[1];
      bVar5 = std::operator<(param_3,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                      *)(puVar13 + 2));
      if (!bVar5) {
        bVar5 = std::operator<((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                *)(puVar13 + 2),param_3);
        if (!bVar5) {
          *param_2 = (int)puVar13;
          *(undefined1 *)(param_2 + 1) = 0;
          return;
        }
        puVar13 = (undefined4 *)*puVar13;
        break;
      }
    } while (puVar13 != *(undefined4 **)(iVar6 + *(int *)(param_1 + 0x14)));
  }
  iVar10 = FUN_0040f1c0(puVar13,puVar13[1],param_3);
  FUN_0040f250(1);
  puVar13[1] = iVar10;
  **(int **)(iVar10 + 4) = iVar10;
  iVar10 = puVar13[1];
  puVar2 = *(undefined4 **)(iVar6 + *(int *)(param_1 + 0x14));
  while ((puVar13 == puVar2 && (*(int *)(iVar6 + *(int *)(param_1 + 0x14)) = iVar10, uVar11 != 0)))
  {
    uVar11 = uVar11 - 1;
    iVar6 = uVar11 * 4;
    puVar2 = *(undefined4 **)(iVar6 + *(int *)(param_1 + 0x14));
  }
  *param_2 = iVar10;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}




/* Function: FUN_0040fbe0 */

undefined1 * __thiscall FUN_0040fbe0(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057abbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  uVar1 = FUN_0040f430();
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_2 = *(undefined1 **)(param_1 + 8);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar2 = FUN_00493c27(0x24);
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 0x18) = iVar2;
  *(int *)(param_1 + 0x1c) = iVar2 + 0x24;
  FUN_0040f510(9,&param_2);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0040fc80 */

/* WARNING: Removing unreachable block (ram,0x0040fd97) */

void __thiscall
FUN_0040fc80(int param_1,int *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  undefined4 *puVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar12;
  undefined4 *puVar13;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_4;
  
  uVar11 = *(uint *)(param_1 + 0x24);
  if (uVar11 <= *(uint *)(param_1 + 0xc) >> 2) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
    }
    if (uVar11 < iVar6 - 1U) {
      if (*(uint *)(param_1 + 0x20) < uVar11) {
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) * 2 + 1;
      }
    }
    else {
      if (*(int *)(param_1 + 0x14) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
      }
      *(int *)(param_1 + 0x20) = iVar6 * 2 + -3;
      FUN_0040f830(iVar6 * 2 + -1,*(undefined4 *)(param_1 + 8));
    }
    uVar11 = (*(int *)(param_1 + 0x24) - (*(uint *)(param_1 + 0x20) >> 1)) - 1;
    pbVar8 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              (*(int *)(param_1 + 0x14) + uVar11 * 4);
    if (pbVar8 != *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   (*(int *)(param_1 + 0x14) + 4 + uVar11 * 4)) {
      do {
        uVar7 = FUN_00408900(pbVar8 + 8);
        if ((uVar7 & *(uint *)(param_1 + 0x20)) == uVar11) {
          pbVar12 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)pbVar8;
        }
        else {
          for (uVar7 = *(uint *)(param_1 + 0x24);
              (uVar11 < uVar7 &&
              (*(int *)(*(int *)(param_1 + 0x14) + uVar7 * 4) == *(int *)(param_1 + 8)));
              uVar7 = uVar7 - 1) {
            *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
             (*(int *)(param_1 + 0x14) + uVar7 * 4) = pbVar8;
          }
          pbVar12 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)pbVar8;
          local_4 = pbVar12;
          if (pbVar12 ==
              *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
               (param_1 + 8)) break;
          pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(*(int *)(param_1 + 0x14) + uVar11 * 4);
          uVar7 = uVar11;
          while ((pbVar8 == pbVar1 &&
                 (*(undefined4 *)(*(int *)(param_1 + 0x14) + uVar7 * 4) =
                       **(undefined4 **)(*(int *)(param_1 + 0x14) + uVar7 * 4), uVar7 != 0))) {
            uVar7 = uVar7 - 1;
            pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)(*(int *)(param_1 + 0x14) + uVar7 * 4);
          }
          pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(param_1 + 8);
          if (((pbVar8 != *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            **)(param_1 + 8)) && (pbVar1 != pbVar8)) &&
             (pbVar3 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         **)pbVar8, pbVar1 != pbVar3)) {
            **(undefined4 **)(pbVar8 + 4) = pbVar3;
            **(undefined4 **)(pbVar3 + 4) = pbVar1;
            **(undefined4 **)(pbVar1 + 4) = pbVar8;
            uVar4 = *(undefined4 *)(pbVar1 + 4);
            *(undefined4 *)(pbVar1 + 4) = *(undefined4 *)(pbVar3 + 4);
            *(undefined4 *)(pbVar3 + 4) = *(undefined4 *)(pbVar8 + 4);
            *(undefined4 *)(pbVar8 + 4) = uVar4;
          }
          *(undefined4 *)(*(int *)(param_1 + 0x14) + 4 + *(int *)(param_1 + 0x24) * 4) =
               *(undefined4 *)(param_1 + 8);
        }
        pbVar8 = pbVar12;
      } while (pbVar12 !=
               *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (*(int *)(param_1 + 0x14) + 4 + uVar11 * 4));
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  uVar11 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::begin(param_3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::end(param_3);
  for (pbVar8 = param_3; pbVar8 != local_4; pbVar8 = pbVar8 + 1) {
    uVar11 = uVar11 * 2 ^ (int)(char)*pbVar8;
  }
  uVar11 = *(uint *)(param_1 + 0x20) & uVar11;
  if (*(uint *)(param_1 + 0x24) <= uVar11) {
    uVar11 = uVar11 + (-1 - (*(uint *)(param_1 + 0x20) >> 1));
  }
  iVar6 = uVar11 * 4;
  piVar9 = (int *)(*(int *)(param_1 + 0x14) + iVar6);
  puVar13 = (undefined4 *)piVar9[1];
  if (puVar13 != (undefined4 *)*piVar9) {
    do {
      puVar13 = (undefined4 *)puVar13[1];
      bVar5 = std::operator<(param_3,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                      *)(puVar13 + 2));
      if (!bVar5) {
        bVar5 = std::operator<((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                *)(puVar13 + 2),param_3);
        if (!bVar5) {
          *param_2 = (int)puVar13;
          *(undefined1 *)(param_2 + 1) = 0;
          return;
        }
        puVar13 = (undefined4 *)*puVar13;
        break;
      }
    } while (puVar13 != *(undefined4 **)(iVar6 + *(int *)(param_1 + 0x14)));
  }
  iVar10 = FUN_0040f2f0(puVar13,puVar13[1],param_3);
  FUN_0040f390(1);
  puVar13[1] = iVar10;
  **(int **)(iVar10 + 4) = iVar10;
  iVar10 = puVar13[1];
  puVar2 = *(undefined4 **)(iVar6 + *(int *)(param_1 + 0x14));
  while ((puVar13 == puVar2 && (*(int *)(iVar6 + *(int *)(param_1 + 0x14)) = iVar10, uVar11 != 0)))
  {
    uVar11 = uVar11 - 1;
    iVar6 = uVar11 * 4;
    puVar2 = *(undefined4 **)(iVar6 + *(int *)(param_1 + 0x14));
  }
  *param_2 = iVar10;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}




/* Function: FUN_0040ff10 */

undefined4 __fastcall FUN_0040ff10(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_0040f8b0((int)&uStack_4 + 3,(int)&uStack_4 + 3);
  return param_1;
}




/* Function: FUN_0040ff30 */

int FUN_0040ff30(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_34 [8];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_2c [28];
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057abd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c,param_1);
  local_10 = 0;
  local_4 = 0;
  piVar2 = (int *)FUN_0040f950(local_34,local_2c);
  iVar1 = *piVar2;
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
  ExceptionList = local_c;
  return iVar1 + 0x24;
}




/* Function: FUN_0040ffa0 */

undefined4 __fastcall FUN_0040ffa0(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_0040fbe0((int)&uStack_4 + 3,(int)&uStack_4 + 3);
  return param_1;
}




/* Function: FUN_0040ffc0 */

int FUN_0040ffc0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_58 [8];
  undefined4 local_50 [5];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_3c [28];
  undefined4 local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057abf8;
  local_c = ExceptionList;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[4] = 0;
  local_50[3] = 0;
  local_50[0] = 0;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_3c,param_1);
  puVar3 = local_50;
  puVar4 = local_20;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_4 = 0;
  piVar1 = (int *)FUN_0040fc80(local_58,local_3c);
  iVar2 = *piVar1;
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_3c);
  ExceptionList = local_c;
  return iVar2 + 0x24;
}




/* Function: FUN_00410060 */

undefined4 FUN_00410060(char *param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  char cVar8;
  char *pcVar2;
  FILE *pFVar3;
  long lVar4;
  char *pcVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int iVar9;
  FILE **ppFVar10;
  uint uVar11;
  uint local_300;
  uint local_2fc;
  int local_2f8;
  FILE *local_2f4 [4];
  undefined4 local_2e4;
  int local_2e0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_2dc [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_2c0 [28];
  char local_2a4 [2];
  char acStack_2a2 [126];
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  char local_214 [260];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ac28;
  local_c = ExceptionList;
  if ((*param_1 == '.') && ((param_1[1] == '\\' || (param_1[1] == '/')))) {
    param_1 = param_1 + 2;
  }
  uVar11 = 0;
  local_300 = (int)param_1 - (int)local_110;
  ExceptionList = &local_c;
  do {
    pcVar2 = local_110 + uVar11;
    if (pcVar2[local_300] == '/') {
      *pcVar2 = '\\';
    }
    else {
      iVar9 = tolower((int)pcVar2[local_300]);
      *pcVar2 = (char)iVar9;
    }
    uVar11 = uVar11 + 1;
    pcVar2 = param_1;
    do {
      cVar8 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar8 != '\0');
  } while (uVar11 <= (uint)((int)pcVar2 - (int)(param_1 + 1)));
  if (DAT_005b5ed4 == 0) {
    local_2f8 = 0;
    do {
      iVar9 = local_2f8;
      if (local_2f8 < 1) {
        _snprintf(local_214,0x104,"data.pak");
      }
      else {
        _snprintf(local_214,0x104,"data%d.pak",local_2f8);
      }
      pFVar3 = fopen(local_214,"rb");
      if (pFVar3 != (FILE *)0x0) {
        fseek(pFVar3,0,2);
        lVar4 = ftell(pFVar3);
        fseek(pFVar3,lVar4 + -4,0);
        local_2fc = 0;
        fread(&local_2fc,1,4,pFVar3);
        iVar9 = local_2fc * 0x90;
        local_2fc = -local_2fc;
        fseek(pFVar3,lVar4 + iVar9 + -4,0);
        local_300 = 0;
        iVar9 = local_2f8;
        if (0 < (int)local_2fc) {
          do {
            pcVar2 = local_2a4;
            for (iVar9 = 0x20; iVar9 != 0; iVar9 = iVar9 + -1) {
              pcVar2[0] = '\0';
              pcVar2[1] = '\0';
              pcVar2[2] = '\0';
              pcVar2[3] = '\0';
              pcVar2 = pcVar2 + 4;
            }
            local_224 = 0;
            local_220 = 0;
            local_218 = 0;
            local_21c = 0;
            fread(local_2a4,1,0x90,pFVar3);
            FUN_0040ef80(local_2a4,0x90);
            pcVar2 = local_2a4;
            if (((char)_local_2a4 == '.') &&
               ((cVar8 = (char)((uint)_local_2a4 >> 8), cVar8 == '\\' || (cVar8 == '/')))) {
              pcVar2 = local_2a4 + 2;
            }
            pcVar5 = pcVar2;
            do {
              cVar8 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar8 != '\0');
            local_2e0 = (int)pcVar5 - (int)(pcVar2 + 1);
            if (local_2e0 != 0) {
              pcVar2 = _strlwr(pcVar2);
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_2c0,pcVar2);
              local_2f4[2] = (FILE *)local_220;
              local_2f4[1] = (FILE *)local_224;
              local_2f4[3] = (FILE *)local_21c;
              local_4 = 0;
              local_2e4 = local_218;
              local_2f4[0] = pFVar3;
              puVar6 = (undefined4 *)FUN_0040ffc0(local_2c0);
              local_4 = 0xffffffff;
              ppFVar10 = local_2f4;
              for (iVar9 = 5; iVar9 != 0; iVar9 = iVar9 + -1) {
                *puVar6 = *ppFVar10;
                ppFVar10 = ppFVar10 + 1;
                puVar6 = puVar6 + 1;
              }
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_2c0);
            }
            local_300 = local_300 + 1;
            iVar9 = local_2f8;
          } while ((int)local_300 < (int)local_2fc);
        }
      }
      local_2f8 = iVar9 + 1;
    } while (local_2f8 < 10);
    DAT_005b5ed4 = 1;
  }
  if (DAT_005b5f0c != 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_2dc,local_110);
    local_4 = 1;
    FUN_0040f450(&local_300,local_2dc);
    local_4 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2dc);
    uVar11 = local_300;
    if (local_300 != DAT_005b5f08) {
      uVar1 = *(uint *)(local_300 + 0x2c);
      pFVar3 = *(FILE **)(local_300 + 0x24);
      *param_3 = uVar1;
      pvVar7 = operator_new(uVar1,(nothrow_t *)&DAT_005b6164);
      *param_2 = pvVar7;
      fseek(pFVar3,*(long *)(uVar11 + 0x28),0);
      fread((void *)*param_2,1,*param_3,pFVar3);
      FUN_0040ef80(*param_2,*param_3);
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_004103c0 */

undefined4 FUN_004103c0(char *param_1,int *param_2,uint *param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  void *pvVar6;
  uint uVar7;
  uint local_2a0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_29c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_280 [28];
  undefined1 local_264 [28];
  uint local_248;
  char local_214 [260];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ac58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_00410060(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    if ((param_2 == (int *)0x0) || (param_3 == (uint *)0x0)) {
      uVar2 = 0;
    }
    else {
      if ((*param_1 == '.') && ((param_1[1] == '\\' || (param_1[1] == '/')))) {
        param_1 = param_1 + 2;
      }
      uVar7 = 0;
      do {
        pcVar3 = local_110 + uVar7;
        if (pcVar3[(int)param_1 - (int)local_110] == '\\') {
          *pcVar3 = '/';
        }
        else {
          iVar4 = tolower((int)pcVar3[(int)param_1 - (int)local_110]);
          *pcVar3 = (char)iVar4;
        }
        uVar7 = uVar7 + 1;
        pcVar3 = param_1;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
      } while (uVar7 <= (uint)((int)pcVar3 - (int)(param_1 + 1)));
      if (DAT_005b5ecc == 0) {
        DAT_005b5ed0 = FUN_004d0760("data.zip");
        if (DAT_005b5ed0 != 0) {
          iVar4 = FUN_004cff10(DAT_005b5ed0);
          while (iVar4 == 0) {
            local_214[0] = '\0';
            FUN_004cfed0(DAT_005b5ed0,0,local_214,0x104,0,0,0,0);
            pcVar3 = local_214;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            local_2a0 = (int)pcVar3 - (int)(local_214 + 1);
            if (local_2a0 != 0) {
              pcVar3 = _strlwr(local_214);
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_280,pcVar3);
              local_4 = 0;
              puVar5 = (undefined1 *)FUN_0040ff30(local_280);
              *puVar5 = 1;
              local_4 = 0xffffffff;
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_280);
            }
            iVar4 = FUN_004cff60(DAT_005b5ed0);
          }
        }
        DAT_005b5ecc = 1;
      }
      if (DAT_005b5ed0 != 0) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  (local_29c,local_110);
        local_4 = 1;
        FUN_0040f450(&local_2a0,local_29c);
        local_4 = 0xffffffff;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_29c);
        if (((local_2a0 != DAT_005b5ee0) &&
            (iVar4 = FUN_004cffe0(DAT_005b5ed0,local_110,2), iVar4 == 0)) &&
           (iVar4 = FUN_004d0910(DAT_005b5ed0), iVar4 == 0)) {
          FUN_004cfed0(DAT_005b5ed0,local_264,0,0,0,0,0,0);
          pvVar6 = operator_new(local_248,(nothrow_t *)&DAT_005b6164);
          *param_2 = (int)pvVar6;
          *param_3 = local_248;
          if (*param_2 != 0) {
            FUN_004d02c0(DAT_005b5ed0,*param_2,local_248);
            FUN_004d04c0(DAT_005b5ed0);
            ExceptionList = local_c;
            return 1;
          }
          FUN_004d04c0(DAT_005b5ed0);
        }
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  ExceptionList = local_c;
  return uVar2;
}




/* Function: FUN_00410660 */

undefined4 * FUN_00410660(char *param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  FILE *pFVar3;
  bool bVar4;
  
  puVar2 = operator_new(0x10,(nothrow_t *)&DAT_005b6164);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  if ((*param_2 == 'w') || (*param_2 == 'W')) {
    pFVar3 = fopen(param_1,param_2);
    puVar2[3] = pFVar3;
    bVar4 = pFVar3 == (FILE *)0x0;
  }
  else {
    pFVar3 = fopen(param_1,param_2);
    puVar2[3] = pFVar3;
    if (pFVar3 != (FILE *)0x0) {
      return puVar2;
    }
    cVar1 = FUN_004103c0(param_1,puVar2,puVar2 + 2);
    bVar4 = cVar1 == '\0';
  }
  if (!bVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar2);
}




/* Function: FUN_00410700 */

void FUN_00410700(undefined4 param_1)

{
  DAT_005a21c8 = param_1;
  return;
}




/* Function: FUN_00410710 */

undefined4 FUN_00410710(void)

{
  return DAT_005a21c8;
}




/* Function: FUN_00410720 */

void FUN_00410720(char *param_1)

{
  char local_800 [2048];
  
  _vsnprintf(local_800,0x800,param_1,&stack0x00000008);
  OutputDebugStringA(local_800);
  return;
}




/* Function: FUN_00410760 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_00410760(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  DWORD dwMessageId;
  DWORD dwLanguageId;
  char **lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  char *pcVar1;
  char *local_20;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c [28];
  
  Arguments = (va_list *)0x0;
  lpBuffer = &local_20;
  nSize = 0;
  dwLanguageId = 0x400;
  local_20 = (char *)0x0;
  dwMessageId = GetLastError();
  FormatMessageA(0x1100,(LPCVOID)0x0,dwMessageId,dwLanguageId,(LPSTR)lpBuffer,nSize,Arguments);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  pcVar1 = local_20;
  if (local_20 == (char *)0x0) {
    pcVar1 = "No Error";
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_1c,pcVar1);
  LocalFree(local_20);
  local_20 = (char *)0x0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,local_1c);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  return param_1;
}




/* Function: FUN_004107e0 */

void FUN_004107e0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  DWORD DVar5;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c [28];
  
  iVar2 = FUN_0041ce80();
  if (iVar2 != 0) {
    if (((byte)DAT_005a21c8 & 1) != 0) {
      pcVar3 = (char *)FUN_00411180(param_1);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "Unknown error";
      }
      uVar4 = FUN_0041e5b0("Error code [0x%08X] is: %s",param_1,pcVar3);
      FUN_0040a410(uVar4);
    }
    if (((byte)DAT_005a21c8 & 3) != 0) {
      if (param_2 == 0) {
        uVar4 = FUN_0041e5b0("Source file name .........: [Unknown]");
        FUN_0040a410(uVar4);
      }
      else {
        uVar4 = FUN_0041e5b0("Source file name .........: %s",param_2);
        FUN_0040a410(uVar4);
      }
      if (param_3 < 0) {
        pcVar3 = "Source line number .......: [Unknown]";
      }
      else {
        pcVar3 = "Source line number .......: %d";
      }
      uVar4 = FUN_0041e5b0(pcVar3,param_3);
      FUN_0040a410(uVar4);
      if (param_4 == 0) {
        uVar4 = FUN_0041e5b0("Source compiled at date ..: [Unknown]");
        FUN_0040a410(uVar4);
      }
      else {
        uVar4 = FUN_0041e5b0("Source compiled at date ..: %s",param_4);
        FUN_0040a410(uVar4);
      }
      if (param_5 == 0) {
        uVar4 = FUN_0041e5b0("Source compiled at time ..: [Unknown]");
        FUN_0040a410(uVar4);
      }
      else {
        uVar4 = FUN_0041e5b0("Source compiled at time ..: %s",param_5);
        FUN_0040a410(uVar4);
      }
    }
    if (((byte)DAT_005a21c8 & 7) != 0) {
      DVar5 = GetLastError();
      if (DVar5 != 0) {
        FUN_00410760(local_1c);
        bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                empty(local_1c);
        if (!bVar1) {
          pcVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   ::c_str(local_1c);
          uVar4 = FUN_0041e5b0("Extended error information: %s",pcVar3);
          FUN_0040a410(uVar4);
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
          return;
        }
        uVar4 = FUN_0041e5b0("There is no extended error information");
        FUN_0040a410(uVar4);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
      }
    }
  }
  return;
}




/* Function: FUN_00410980 */

undefined4 __fastcall FUN_00410980(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x84);
  do {
    if (*(char *)(param_1 + 0x164 + iVar1) == '\0') {
      *puVar2 = 0;
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 7);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}




/* Function: FUN_004109c1 */

undefined4 FUN_004109c1(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar4 = (undefined4 *)(unaff_EBP + 0x84);
  iVar2 = unaff_EBP + 0xa0;
  do {
    if (*(char *)(iVar3 + 0x164 + unaff_EBP) == '\0') {
      uVar1 = FUN_004222d0(iVar2);
      *puVar4 = uVar1;
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + 0x1c;
  } while (iVar3 < 7);
  return 1;
}




/* Function: FUN_00410a00 */

undefined4 __thiscall
FUN_00410a00(int param_1,int param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
            int param_4)

{
  *(int *)(param_1 + 0x84 + param_2 * 4) = param_4;
  *(bool *)(param_2 + 0x164 + param_1) = param_4 != 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xa0 + param_2 * 0x1c),param_3);
  return 1;
}




/* Function: FUN_00410a40 */

undefined4 __thiscall FUN_00410a40(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 0x84 + param_2 * 4);
}




/* Function: FUN_00410a50 */

int __thiscall FUN_00410a50(int param_1,int param_2)

{
  return param_1 + 0xa0 + param_2 * 0x1c;
}




/* Function: FUN_00410a70 */

void __thiscall FUN_00410a70(int param_1,int param_2)

{
  *(int *)(param_1 + 0x16c) = param_2;
  if (param_2 != 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_1 + 0x110),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_2 + 0x44));
    *(undefined4 *)(param_1 + 0x94) = 0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_1 + 300),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (*(int *)(param_1 + 0x16c) + 0x60));
    *(undefined4 *)(param_1 + 0x98) = 0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_1 + 0x148),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (*(int *)(param_1 + 0x16c) + 0x7c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  return;
}




/* Function: FUN_00410ae0 */

undefined4 __fastcall FUN_00410ae0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x16c);
}




/* Function: FUN_00410af0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00410af0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  char cStack_14;
  
  iVar1 = *(int *)(param_1 + 0x16c);
  (**(code **)(*param_2 + 0xa8))();
  piVar2 = param_2;
  if (*(float *)(*(int *)(param_1 + 0x16c) + 0x40) <= _DAT_00582ad8) {
    (**(code **)(*param_2 + 200))(param_2,0x1d,0);
    (**(code **)(*param_2 + 200))(param_2,0x8e,0);
  }
  else {
    (**(code **)(*param_2 + 200))(param_2,0x1d,1);
    (**(code **)(*param_2 + 200))(param_2,0x8e,1);
  }
  cStack_14 = (char)param_2;
  if ((*(int *)(param_1 + 0x8c) == 0) || (cStack_14 != '\0')) {
    if (iVar1 == 1) {
      if (*(int *)(param_1 + 0x9c) == 0) {
        if (*(int *)(param_1 + 0x84) == 0) {
          (**(code **)(*param_2 + 0xf4))(param_2,0,0);
        }
        else {
          (**(code **)(*(int *)(param_1 + 0x84) + 4))(param_2);
        }
      }
      else {
        (**(code **)(*(int *)(param_1 + 0x9c) + 4))(param_2);
      }
    }
    else if (*(int *)(param_1 + 0x84) == 0) {
      (**(code **)(*param_2 + 0xf4))(param_2,0);
    }
    else {
      (**(code **)(*(int *)(param_1 + 0x84) + 4))(param_2);
    }
  }
  else if (*(int *)(param_1 + 0x84) == 0) {
    (**(code **)(*param_2 + 0xf4))(param_2,1,0);
  }
  else {
    (**(code **)(*(int *)(param_1 + 0x84) + 4))(param_2,1);
  }
  if (piVar2 == (int *)0x0) {
    (**(code **)(*param_2 + 0xfc))
              (param_2,0,0x13,DAT_005b5f28 + *(float *)(*(int *)(param_1 + 0x16c) + 0xac));
    (**(code **)(*param_2 + 0xfc))(param_2,0,0x14,*(undefined4 *)(*(int *)(param_1 + 0x16c) + 0xb0))
    ;
    (**(code **)(*param_2 + 0xfc))(param_2,0,0x12,DAT_005a21cc);
    (**(code **)(*param_2 + 0xfc))(param_2,0,1,4);
    (**(code **)(*param_2 + 0xfc))(param_2,0,2,2);
    (**(code **)(*param_2 + 0xfc))(param_2,0,3,1);
    (**(code **)(*param_2 + 0xfc))(param_2,0,4,4);
    (**(code **)(*param_2 + 0xfc))(param_2,0,5,2);
    (**(code **)(*param_2 + 0xfc))(param_2,0,6,1);
    (**(code **)(*param_2 + 0xfc))(param_2,0,0xb,0);
    (**(code **)(*param_2 + 0xfc))(param_2,0,0x18,0);
    if (*(int *)(param_1 + 0x90) != 0) {
      (**(code **)(*(int *)(param_1 + 0x90) + 4))(param_2,1);
      (**(code **)(*param_2 + 0xfc))
                (param_2,1,0x13,DAT_005b5f28 + *(float *)(*(int *)(param_1 + 0x16c) + 0xac));
      (**(code **)(*param_2 + 0xfc))
                (param_2,1,0x14,*(undefined4 *)(*(int *)(param_1 + 0x16c) + 0xb0));
      (**(code **)(*param_2 + 0xfc))(param_2,1,1,4);
      (**(code **)(*param_2 + 0xfc))(param_2,1,2,2);
      (**(code **)(*param_2 + 0xfc))(param_2,1,3,1);
      (**(code **)(*param_2 + 0xfc))(param_2,1,4,2);
      (**(code **)(*param_2 + 0xfc))(param_2,1,5,1);
      (**(code **)(*param_2 + 0xfc))(param_2,1,6,1);
      (**(code **)(*param_2 + 0xf4))(param_2,2,0);
      (**(code **)(*param_2 + 0xfc))(param_2,2,1,1);
      (**(code **)(*param_2 + 0xfc))(param_2,2,4,1);
      return 1;
    }
    (**(code **)(*param_2 + 0xf4))(param_2,1,0);
    (**(code **)(*param_2 + 0xfc))(param_2,1,1,1);
    (**(code **)(*param_2 + 0xfc))(param_2,1,4,1);
    return 1;
  }
  if (piVar2 != (int *)0x1) {
    (**(code **)(*param_2 + 0xf4))(param_2,0,0);
    (**(code **)(*param_2 + 0xfc))(param_2,0,1,1);
    (**(code **)(*param_2 + 0xfc))(param_2,0,4,1);
    (**(code **)(*param_2 + 0xf4))(param_2,1,0);
    (**(code **)(*param_2 + 0xfc))(param_2,0,1,1);
    (**(code **)(*param_2 + 0xfc))(param_2,0,4,1);
    return 1;
  }
  (**(code **)(*param_2 + 0xfc))
            (param_2,0,0x13,DAT_005b5f28 + *(float *)(*(int *)(param_1 + 0x16c) + 0xac));
  (**(code **)(*param_2 + 0xfc))(param_2,0,0x14,*(undefined4 *)(*(int *)(param_1 + 0x16c) + 0xb0));
  (**(code **)(*param_2 + 0xfc))(param_2,0,0x12,DAT_005a21d0);
  (**(code **)(*param_2 + 0xfc))(param_2,0,1,4);
  (**(code **)(*param_2 + 0xfc))(param_2,0,2,2);
  (**(code **)(*param_2 + 0xfc))(param_2,0,3,1);
  (**(code **)(*param_2 + 0xfc))(param_2,0,4,4);
  (**(code **)(*param_2 + 0xfc))(param_2,0,5,2);
  (**(code **)(*param_2 + 0xfc))(param_2,0,6,3);
  (**(code **)(*param_2 + 0xfc))(param_2,0,0xd,1);
  (**(code **)(*param_2 + 0xfc))(param_2,0,0xe,1);
  (**(code **)(*param_2 + 0xfc))(param_2,0,0xb,0);
  if ((cStack_14 == '\0') && (*(int *)(param_1 + 0x8c) != 0)) {
    (**(code **)(*(int *)(param_1 + 0x8c) + 4))(param_2,0);
    (**(code **)(*param_2 + 0xfc))(param_2,0,2,2);
    (**(code **)(*param_2 + 0xfc))(param_2,0,3,0);
    (**(code **)(*param_2 + 0xfc))(param_2,0,1,0x18);
    (**(code **)(*param_2 + 0xfc))(param_2,0,4,1);
    (**(code **)(*param_2 + 0xfc))(param_2,1,0xb,1);
    (**(code **)(*param_2 + 0xfc))(param_2,1,0xd,1);
    (**(code **)(*param_2 + 0xfc))(param_2,1,0xe,1);
    (**(code **)(*param_2 + 0xfc))(param_2,1,2,2);
    (**(code **)(*param_2 + 0xfc))(param_2,1,3,1);
    (**(code **)(*param_2 + 0xfc))(param_2,1,1,4);
    (**(code **)(*param_2 + 0xfc))(param_2,1,4,2);
    (**(code **)(*param_2 + 0xfc))(param_2,1,5,2);
    (**(code **)(*param_2 + 0xfc))(param_2,1,6,1);
    return 1;
  }
  (**(code **)(*param_2 + 0xf4))(param_2,1,0);
  (**(code **)(*param_2 + 0xfc))(param_2,1,1,1);
  (**(code **)(*param_2 + 0xfc))(param_2,1,4,1);
  (**(code **)(*param_2 + 0xfc))(param_2,2,1,1);
  (**(code **)(*param_2 + 0xfc))(param_2,2,4,1);
  return 1;
}




/* Function: FUN_00411050 */

undefined4 * __fastcall FUN_00411050(undefined4 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_0040d9f0();
  pcVar2 = ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_exref;
  pcVar1 = basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_exref;
  this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
         (param_1 + 0x28);
  *param_1 = &PTR_LAB_00583c80;
  _eh_vector_constructor_iterator_(this,0x1c,7,pcVar1,pcVar2);
  iVar4 = 0;
  puVar3 = param_1 + 0x21;
  param_1[0x5b] = 0;
  do {
    *puVar3 = 0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (this,"");
    *(undefined1 *)((int)param_1 + iVar4 + 0x164) = 0;
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 1;
    this = this + 0x1c;
  } while (iVar4 < 7);
  FUN_00411120(0);
  FUN_00411140(0);
  return param_1;
}




/* Function: FUN_004110d0 */

void __fastcall FUN_004110d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00583c80;
  FUN_00410980();
  _eh_vector_destructor_iterator_
            (param_1 + 0x28,0x1c,7,
             ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_exref);
  FUN_0040da90();
  return;
}




/* Function: FUN_00411100 */

void * __thiscall FUN_00411100(void *param_1,byte param_2)

{
  FUN_004110d0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00411120 */

void __thiscall FUN_00411120(int param_1,char param_2)

{
  if (*(char *)(param_1 + 4) != param_2) {
    *(char *)(param_1 + 4) = param_2;
  }
  return;
}




/* Function: FUN_00411140 */

void __thiscall FUN_00411140(int param_1,char param_2)

{
  if (*(char *)(param_1 + 5) != param_2) {
    *(char *)(param_1 + 5) = param_2;
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 8) + 0x28) = 1;
    }
  }
  return;
}




/* Function: FUN_00411160 */

void __thiscall FUN_00411160(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0xc) != param_2) {
    *(char *)(param_1 + 0xc) = param_2;
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 8) + 0x28) = 1;
    }
  }
  return;
}




/* Function: FUN_00411180 */

undefined4 FUN_00411180(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((&DAT_00583d08)[uVar1 * 2] == param_1) {
      return *(undefined4 *)(&UNK_00583d0c + uVar1 * 8);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x1a9);
  return 0;
}




/* Function: FUN_004111b0 */

int * FUN_004111b0(int *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int local_24;
  int local_20;
  char local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0058100a;
  local_10 = ExceptionList;
  uVar5 = *(uint *)(param_2 + 0x14);
  local_20 = 0;
  uVar3 = *(uint *)(*(int *)(*param_1 + 4) + 0x14 + (int)param_1);
  if (((int)uVar3 < 1) || (uVar3 <= uVar5)) {
    local_24 = 0;
  }
  else {
    local_24 = uVar3 - uVar5;
  }
  ExceptionList = &local_10;
  FUN_00411470(param_1);
  if (local_18 == '\0') {
    local_20 = 4;
  }
  else {
    local_8 = 1;
    iVar7 = (int)param_1 + *(int *)(*param_1 + 4);
    if (((*(uint *)(iVar7 + 0xc) & 0x1c0) != 0x40) && (local_24 != 0)) {
      while( true ) {
        piVar2 = *(int **)(iVar7 + 0x28);
        bVar1 = *(byte *)(iVar7 + 0x30);
        uVar3 = *(uint *)piVar2[9];
        if ((uVar3 == 0) || (*(int *)piVar2[0xd] + uVar3 <= uVar3)) {
          uVar3 = (**(code **)(*piVar2 + 4))(bVar1);
        }
        else {
          pbVar6 = (byte *)FUN_0041145c();
          *pbVar6 = bVar1;
          uVar3 = (uint)bVar1;
        }
        if (uVar3 == 0xffffffff) {
          local_20 = 4;
          iVar7 = (int)param_1 + *(int *)(*param_1 + 4);
          goto LAB_00411313;
        }
        local_24 = local_24 + -1;
        if (local_24 == 0) break;
        iVar7 = (int)param_1 + *(int *)(*param_1 + 4);
      }
      iVar7 = (int)param_1 + *(int *)(*param_1 + 4);
    }
LAB_00411313:
    if ((local_20 == 0) && (uVar3 = 0, uVar5 != 0)) {
      while( true ) {
        piVar2 = *(int **)(iVar7 + 0x28);
        if (*(uint *)(param_2 + 0x18) < 0x10) {
          iVar7 = param_2 + 4;
        }
        else {
          iVar7 = *(int *)(param_2 + 4);
        }
        bVar1 = *(byte *)(iVar7 + uVar3);
        uVar4 = *(uint *)piVar2[9];
        if ((uVar4 == 0) || (*(int *)piVar2[0xd] + uVar4 <= uVar4)) {
          uVar4 = (**(code **)(*piVar2 + 4))(bVar1);
        }
        else {
          pbVar6 = (byte *)FUN_0041145c();
          *pbVar6 = bVar1;
          uVar4 = (uint)bVar1;
        }
        if (uVar4 == 0xffffffff) {
          local_20 = 4;
          iVar7 = (int)param_1 + *(int *)(*param_1 + 4);
          goto LAB_00411382;
        }
        uVar3 = uVar3 + 1;
        if (uVar5 <= uVar3) break;
        iVar7 = (int)param_1 + *(int *)(*param_1 + 4);
      }
      iVar7 = (int)param_1 + *(int *)(*param_1 + 4);
    }
LAB_00411382:
    if ((local_20 == 0) && (local_24 != 0)) {
      while( true ) {
        piVar2 = *(int **)(iVar7 + 0x28);
        bVar1 = *(byte *)(iVar7 + 0x30);
        uVar5 = *(uint *)piVar2[9];
        if ((uVar5 == 0) || (*(int *)piVar2[0xd] + uVar5 <= uVar5)) {
          uVar5 = (**(code **)(*piVar2 + 4))(bVar1);
        }
        else {
          pbVar6 = (byte *)FUN_0041145c();
          *pbVar6 = bVar1;
          uVar5 = (uint)bVar1;
        }
        if (uVar5 == 0xffffffff) {
          local_20 = 4;
          iVar7 = (int)param_1 + *(int *)(*param_1 + 4);
          goto LAB_004113d9;
        }
        local_24 = local_24 + -1;
        if (local_24 == 0) break;
        iVar7 = (int)param_1 + *(int *)(*param_1 + 4);
      }
      iVar7 = (int)param_1 + *(int *)(*param_1 + 4);
    }
LAB_004113d9:
    *(undefined4 *)(iVar7 + 0x14) = 0;
  }
  local_8 = 0;
  FUN_0041180c(local_20,0);
  local_8 = 0xffffffff;
  FUN_00411578();
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_0041145c */

int __fastcall FUN_0041145c(int param_1)

{
  int iVar1;
  
  **(int **)(param_1 + 0x34) = **(int **)(param_1 + 0x34) + -1;
  iVar1 = **(int **)(param_1 + 0x24);
  **(int **)(param_1 + 0x24) = iVar1 + 1;
  return iVar1;
}




/* Function: FUN_00411470 */

int __thiscall FUN_00411470(int param_1,int *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0058101e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00411508(param_2);
  local_8 = 0;
  iVar1 = *(int *)(*(int *)(*param_2 + 4) + 4 + (int)param_2);
  if ((iVar1 == 0) && (*(int *)(*(int *)(*param_2 + 4) + 0x2c + (int)param_2) != 0)) {
    FUN_00411530();
    iVar1 = *(int *)(*(int *)(*param_2 + 4) + 4 + (int)param_2);
  }
  *(bool *)(param_1 + 4) = iVar1 == 0;
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_00411508 */

undefined4 * __thiscall FUN_00411508(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = *(int *)(*(int *)(*param_2 + 4) + 0x28 + (int)param_2);
  if (iVar1 != 0) {
    std::_Mutex::_Lock((_Mutex *)(iVar1 + 4));
  }
  return param_1;
}




/* Function: FUN_00411530 */

int * __fastcall FUN_00411530(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) & 6) == 0) &&
     (iVar1 = (**(code **)(**(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1) + 0x2c))(),
     iVar1 == -1)) {
    uVar2 = 4;
  }
  FUN_0041180c(uVar2,0);
  return param_1;
}




/* Function: FUN_00411578 */

void FUN_00411578(void)

{
  bool bVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00581032;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    FUN_004115e0();
  }
  local_8 = 0xffffffff;
  FUN_004115f8();
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004115e0 */

void __fastcall FUN_004115e0(int *param_1)

{
  if ((*(uint *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) & 2) != 0) {
    FUN_00411530();
  }
  return;
}




/* Function: FUN_004115f8 */

void __fastcall FUN_004115f8(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)*param_1 + 4) + 0x28 + *param_1);
  if (iVar1 != 0) {
    std::_Mutex::_Unlock((_Mutex *)(iVar1 + 4));
  }
  return;
}




/* Function: FUN_00411614 */

bool __thiscall FUN_00411614(_String_base *param_1,uint param_2,undefined4 param_3,char param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00411838();
  if (uVar1 < param_2) {
    std::_String_base::_Xlen(param_1);
  }
  if (*(uint *)(param_1 + 0x18) < param_2) {
    if (param_4 == '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0x14);
    }
    else {
      uVar2 = 0;
    }
    FUN_004116a0(param_2,uVar2);
  }
  else if (param_4 == '\0') {
    if (param_2 == 0) {
      FUN_00411680(0);
    }
  }
  else if (param_2 < 0x10) {
    FUN_004117d0(1);
  }
  return param_2 != 0;
}




/* Function: FUN_00411680 */

void __thiscall FUN_00411680(int param_1,int param_2)

{
  *(int *)(param_1 + 0x14) = param_2;
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    param_1 = param_1 + 4;
  }
  else {
    param_1 = *(int *)(param_1 + 4);
  }
  *(undefined1 *)(param_1 + param_2) = 0;
  return;
}




/* Function: FUN_004116a0 */

void __thiscall FUN_004116a0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004117c4;
  local_10 = ExceptionList;
  local_20 = param_2 | 0xf;
  ExceptionList = &local_10;
  uVar1 = FUN_00411838();
  if (uVar1 < local_20) {
    local_20 = param_2;
  }
  local_8 = 0;
  puVar2 = (undefined4 *)FUN_00493c27(local_20 + 1);
  local_8 = 0xffffffff;
  if (param_3 != 0) {
    if (*(uint *)(param_1 + 0x18) < 0x10) {
      puVar3 = (undefined4 *)(param_1 + 4);
    }
    else {
      puVar3 = *(undefined4 **)(param_1 + 4);
    }
    puVar4 = puVar2;
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  FUN_004117d0(1);
  *(undefined4 **)(param_1 + 4) = puVar2;
  *(uint *)(param_1 + 0x18) = local_20;
  FUN_00411680(param_3);
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004117d0 */

void __thiscall FUN_004117d0(int param_1,char param_2)

{
  void *pvVar1;
  bool bVar2;
  
  if ((param_2 != '\0') && (bVar2 = *(uint *)(param_1 + 0x18) < 0x10, !bVar2)) {
    if (bVar2) {
      pvVar1 = (void *)(param_1 + 4);
    }
    else {
      pvVar1 = *(void **)(param_1 + 4);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  FUN_00411680(0);
  return;
}




/* Function: FUN_0041180c */

void __thiscall FUN_0041180c(ios_base *param_1,uint param_2,bool param_3)

{
  if (param_2 != 0) {
    param_2 = *(uint *)(param_1 + 4) | param_2;
    if (*(int *)(param_1 + 0x28) == 0) {
      param_2 = param_2 | 4;
    }
    std::ios_base::clear(param_1,param_2,param_3);
  }
  return;
}




/* Function: FUN_00411838 */

undefined4 FUN_00411838(void)

{
  return 0xfffffffe;
}




/* Function: FUN_00411848 */

undefined4 __thiscall FUN_00411848(undefined4 param_1,undefined4 param_2)

{
  FUN_004117d0(0);
  FUN_0041186c(param_2,0,0xffffffff);
  return param_1;
}




/* Function: FUN_0041186c */

_String_base * __thiscall
FUN_0041186c(_String_base *param_1,_String_base *param_2,uint param_3,undefined4 param_4,
            uint param_5)

{
  char cVar1;
  _String_base *p_Var2;
  uint uVar3;
  uint uVar4;
  _String_base *p_Var5;
  
  uVar3 = *(uint *)(param_2 + 0x14);
  if (uVar3 < param_3) {
    std::_String_base::_Xran(param_1);
    uVar3 = *(uint *)(param_2 + 0x14);
  }
  uVar4 = uVar3 - param_3;
  if (param_5 < uVar3 - param_3) {
    uVar4 = param_5;
  }
  if (param_1 == param_2) {
    FUN_00411910(uVar4 + param_3,0xffffffff);
    FUN_00411910(0,param_3);
  }
  else {
    cVar1 = FUN_00411614(uVar4,1);
    if (cVar1 != '\0') {
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        p_Var2 = param_1 + 4;
      }
      else {
        p_Var2 = *(_String_base **)(param_1 + 4);
      }
      if (*(uint *)(param_2 + 0x18) < 0x10) {
        param_2 = param_2 + 4;
      }
      else {
        param_2 = *(_String_base **)(param_2 + 4);
      }
      p_Var5 = param_2 + param_3;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)p_Var2 = *(undefined4 *)p_Var5;
        p_Var5 = p_Var5 + 4;
        p_Var2 = p_Var2 + 4;
      }
      for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *p_Var2 = *p_Var5;
        p_Var5 = p_Var5 + 1;
        p_Var2 = p_Var2 + 1;
      }
      FUN_00411680(uVar4);
    }
  }
  return param_1;
}




/* Function: FUN_00411910 */

_String_base * __thiscall FUN_00411910(_String_base *param_1,uint param_2,uint param_3)

{
  _String_base *p_Var1;
  int iVar2;
  char cVar3;
  _String_base *p_Var4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x14);
  if (uVar5 < param_2) {
    std::_String_base::_Xran(param_1);
    uVar5 = *(uint *)(param_1 + 0x14);
  }
  uVar5 = uVar5 - param_2;
  if (uVar5 < param_3) {
    param_3 = uVar5;
  }
  if (param_3 != 0) {
    if (*(uint *)(param_1 + 0x18) < 0x10) {
      p_Var1 = param_1 + 4;
      p_Var4 = param_1 + 4;
    }
    else {
      p_Var1 = *(_String_base **)(param_1 + 4);
      p_Var4 = *(_String_base **)(param_1 + 4);
    }
    memmove(p_Var1 + param_2,p_Var4 + param_2 + param_3,uVar5 - param_3);
    iVar2 = *(int *)(param_1 + 0x14);
    cVar3 = FUN_00411614(iVar2 - param_3,0);
    if (cVar3 != '\0') {
      FUN_00411680(iVar2 - param_3);
    }
  }
  return param_1;
}




/* Function: FUN_00411994 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00411994(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00581046;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00411848(param_2);
  local_8 = 0;
  iVar2 = 0;
  cVar1 = *param_3;
  pcVar4 = param_3;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    iVar2 = iVar2 + 1;
    cVar1 = *pcVar4;
  }
  uVar3 = FUN_00411a48(param_3,iVar2);
  FUN_00411848(uVar3);
  local_8 = 0xffffffff;
  FUN_004117d0(1);
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_00411a48 */

_String_base * __thiscall FUN_00411a48(_String_base *param_1,_String_base *param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  _String_base *p_Var3;
  uint uVar4;
  
  cVar2 = FUN_00411af4(param_2);
  if (cVar2 == '\0') {
    if (std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::npos -
        *(int *)(param_1 + 0x14) <= param_3) {
      std::_String_base::_Xlen(param_1);
    }
    if (param_3 != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      cVar2 = FUN_00411614(iVar1 + param_3,0);
      if (cVar2 != '\0') {
        if (*(uint *)(param_1 + 0x18) < 0x10) {
          p_Var3 = param_1 + 4;
        }
        else {
          p_Var3 = *(_String_base **)(param_1 + 4);
        }
        p_Var3 = p_Var3 + *(int *)(param_1 + 0x14);
        for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)p_Var3 = *(undefined4 *)param_2;
          param_2 = param_2 + 4;
          p_Var3 = p_Var3 + 4;
        }
        for (uVar4 = param_3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *p_Var3 = *param_2;
          param_2 = param_2 + 1;
          p_Var3 = p_Var3 + 1;
        }
        FUN_00411680(iVar1 + param_3);
      }
    }
    return param_1;
  }
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    p_Var3 = param_1 + 4;
  }
  else {
    p_Var3 = *(_String_base **)(param_1 + 4);
  }
  p_Var3 = (_String_base *)FUN_00411b38(param_1,(int)param_2 - (int)p_Var3,param_3);
  return p_Var3;
}




/* Function: FUN_00411af4 */

undefined4 __thiscall FUN_00411af4(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    uVar1 = param_1 + 4;
  }
  else {
    uVar1 = *(uint *)(param_1 + 4);
  }
  if (param_2 < uVar1) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    iVar2 = param_1 + 4;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
  }
  if (param_2 < (uint)(iVar2 + *(int *)(param_1 + 0x14))) {
    return 1;
  }
  return 0;
}




/* Function: FUN_00411b38 */

_String_base * __thiscall FUN_00411b38(_String_base *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  _String_base *p_Var3;
  uint uVar4;
  _String_base *p_Var5;
  
  uVar4 = *(uint *)(param_2 + 0x14);
  if (uVar4 < param_3) {
    std::_String_base::_Xran(param_1);
    uVar4 = *(uint *)(param_2 + 0x14);
  }
  if (uVar4 - param_3 < param_4) {
    param_4 = uVar4 - param_3;
  }
  if (std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::npos -
      *(int *)(param_1 + 0x14) <= param_4) {
    std::_String_base::_Xlen(param_1);
  }
  if (param_4 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    cVar2 = FUN_00411614(param_4 + iVar1,0);
    if (cVar2 != '\0') {
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        p_Var3 = param_1 + 4;
      }
      else {
        p_Var3 = *(_String_base **)(param_1 + 4);
      }
      if (*(uint *)(param_2 + 0x18) < 0x10) {
        param_2 = param_2 + 4;
      }
      else {
        param_2 = *(int *)(param_2 + 4);
      }
      p_Var5 = (_String_base *)(param_3 + param_2);
      p_Var3 = p_Var3 + *(int *)(param_1 + 0x14);
      for (uVar4 = param_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)p_Var3 = *(undefined4 *)p_Var5;
        p_Var5 = p_Var5 + 4;
        p_Var3 = p_Var3 + 4;
      }
      for (uVar4 = param_4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *p_Var3 = *p_Var5;
        p_Var5 = p_Var5 + 1;
        p_Var3 = p_Var3 + 1;
      }
      FUN_00411680(param_4 + iVar1);
    }
  }
  return param_1;
}




/* Function: FUN_00411be4 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00411be4(undefined4 param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0058105a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00411c84(1,(int)param_2);
  local_8 = 0;
  uVar1 = FUN_00411b38(param_3,0,0xffffffff);
  FUN_00411848(uVar1);
  local_8 = 0xffffffff;
  FUN_004117d0(1);
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_00411c84 */

undefined4 __thiscall FUN_00411c84(undefined4 param_1,undefined4 param_2,char param_3)

{
  FUN_004117d0(0);
  FUN_00411ca8(param_2,(int)param_3);
  return param_1;
}




/* Function: FUN_00411ca8 */

_String_base * __thiscall
FUN_00411ca8(_String_base *param_1,uint param_2,undefined4 param_3,_String_base param_4)

{
  char cVar1;
  uint uVar2;
  _String_base *p_Var3;
  
  if (param_2 ==
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::npos) {
    std::_String_base::_Xlen(param_1);
  }
  cVar1 = FUN_00411614(param_2,1);
  if (cVar1 != '\0') {
    if (*(uint *)(param_1 + 0x18) < 0x10) {
      p_Var3 = param_1 + 4;
    }
    else {
      p_Var3 = *(_String_base **)(param_1 + 4);
    }
    for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(uint *)p_Var3 = CONCAT22(CONCAT11(param_4,param_4),CONCAT11(param_4,param_4));
      p_Var3 = p_Var3 + 4;
    }
    for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *p_Var3 = param_4;
      p_Var3 = p_Var3 + 1;
    }
    FUN_00411680(param_2);
  }
  return param_1;
}




/* Function: FUN_00411d18 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00411d18(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0058106e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00411db4(param_2);
  local_8 = 0;
  uVar1 = FUN_00411b38(param_3,0,0xffffffff);
  FUN_00411848(uVar1);
  local_8 = 0xffffffff;
  FUN_004117d0(1);
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_00411db4 */

undefined4 __thiscall FUN_00411db4(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  FUN_004117d0(0);
  iVar2 = 0;
  cVar1 = *param_2;
  pcVar3 = param_2;
  while (cVar1 != '\0') {
    pcVar3 = pcVar3 + 1;
    iVar2 = iVar2 + 1;
    cVar1 = *pcVar3;
  }
  FUN_00411de8(param_2,iVar2);
  return param_1;
}




/* Function: FUN_00411de8 */

int __thiscall FUN_00411de8(int param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  cVar1 = FUN_00411af4(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_00411614(param_3,1);
    if (cVar1 != '\0') {
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        puVar4 = (undefined4 *)(param_1 + 4);
      }
      else {
        puVar4 = *(undefined4 **)(param_1 + 4);
      }
      for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = *param_2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      FUN_00411680(param_3);
    }
    return param_1;
  }
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    iVar2 = param_1 + 4;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
  }
  iVar2 = FUN_0041186c(param_1,(int)param_2 - iVar2,param_3);
  return iVar2;
}




/* Function: FUN_00411e6c */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00411e6c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00581082;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00411848(param_2);
  local_8 = 0;
  uVar1 = FUN_00411b38(param_3,0,0xffffffff);
  FUN_00411848(uVar1);
  local_8 = 0xffffffff;
  FUN_004117d0(1);
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_00411f08 */

void FUN_00411f08(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_3 - (*param_1 - param_2 >> 4);
  if (0 < iVar3) {
    FUN_00412294(param_1,iVar3);
    iVar2 = iVar3 + -1;
    if (iVar3 != 0) {
      do {
        puVar1 = (undefined4 *)*param_1;
        iVar2 = iVar2 + -1;
        *param_1 = (int)(puVar1 + 4);
        *puVar1 = 1;
      } while (iVar2 != -1);
    }
    return;
  }
  *param_1 = param_2 + param_3 * 0x10;
  return;
}




/* Function: FUN_00411f64 */

void FUN_00411f64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *local_60;
  undefined4 local_5c;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    local_4 = param_2;
    local_60 = &DAT_0058705c;
    local_5c = param_3;
    FUN_00411fa0(param_1,&local_60,param_4);
  }
  return;
}




/* Function: FUN_00411fa0 */

void FUN_00411fa0(undefined4 *param_1,undefined4 param_2,code *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[4];
  uVar2 = *param_1;
  param_1[4] = uVar2;
  FUN_00412294(param_1,0x14);
  param_1[0x1b] = 0;
  (*param_3)(param_1,param_2);
  param_1[0x1b] = 1;
  *param_1 = uVar2;
  param_1[4] = uVar1;
  return;
}




/* Function: FUN_00411fdc */

void FUN_00411fdc(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  param_3 = param_3 * -0x10;
  iVar1 = *param_1;
  FUN_00412024(param_1,iVar1 + param_3);
  *(undefined4 *)(param_3 + 8 + iVar1) = param_2;
  *(undefined4 *)(param_3 + iVar1) = 5;
  FUN_0041209c(param_1,iVar1 + param_3,param_4);
  return;
}




/* Function: FUN_00412024 */

void FUN_00412024(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar2 = iVar3 - param_2 >> 4;
  iVar1 = iVar2 + -1;
  if (iVar2 != 0) {
    iVar3 = iVar1 * 0x10;
    do {
      iVar1 = iVar1 + -1;
      *(undefined4 *)(iVar3 + 0x10 + param_2) = *(undefined4 *)(iVar3 + param_2);
      *(undefined4 *)(iVar3 + 0x14 + param_2) = *(undefined4 *)(iVar3 + 4 + param_2);
      *(undefined4 *)(iVar3 + 0x18 + param_2) = *(undefined4 *)(iVar3 + 8 + param_2);
      *(undefined4 *)(iVar3 + 0x1c + param_2) = *(undefined4 *)(iVar3 + 0xc + param_2);
      iVar3 = iVar3 + -0x10;
    } while (iVar1 != -1);
    iVar3 = *param_1;
  }
  if (iVar3 == param_1[2]) {
    FUN_00412294(param_1,1);
    iVar3 = *param_1;
  }
  *param_1 = iVar3 + 0x10;
  return;
}




/* Function: FUN_0041209c */

void FUN_0041209c(uint *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar6;
  int *piVar7;
  int local_3c [5];
  int local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  uint uVar5;
  
  if (*param_2 == 5) {
    iVar2 = param_2[2];
  }
  else {
    iVar2 = FUN_004136c0(param_2);
    iVar2 = *(int *)(param_1[0x12] + 0x38 + iVar2 * 0x40);
    if (iVar2 == 0) {
      FUN_004142c0(param_1,param_2,&DAT_00587064);
    }
    FUN_00412024(param_1,param_2);
  }
  param_2[2] = (int)local_3c;
  *param_2 = 6;
  uVar5 = param_1[0x19];
  local_3c[0] = iVar2;
  if (uVar5 != 0) {
    FUN_004124b0(param_1,param_2,uVar5,&DAT_00587064);
  }
  if (*(short *)(iVar2 + 0xc) == 0) {
    piVar3 = (int *)FUN_004143d0(param_1,iVar2,param_2 + 4);
  }
  else {
    piVar3 = (int *)FUN_00412390(param_1,iVar2,param_2 + 4);
  }
  if (uVar5 != 0) {
    FUN_004124b0(param_1,param_2,uVar5,"return");
  }
  if (param_3 == -1) {
    if (piVar3 < (int *)*param_1) {
      local_18 = param_2;
      piVar7 = piVar3;
      piVar6 = param_2;
      do {
        param_2 = piVar6 + 4;
        *piVar6 = *piVar7;
        piVar6[1] = piVar7[1];
        piVar6[2] = piVar7[2];
        piVar1 = piVar7 + 3;
        piVar7 = piVar7 + 4;
        piVar6[3] = *piVar1;
        piVar6 = param_2;
        local_14 = piVar3;
      } while (piVar7 < (int *)*param_1);
    }
    *param_1 = (uint)param_2;
  }
  else {
    iVar2 = param_3;
    piVar7 = param_2;
    if (0 < param_3) {
      local_28 = param_3;
      local_24 = param_2;
      piVar6 = piVar3;
      for (; local_20 = piVar3, 3 < param_3; param_3 = param_3 + -3) {
        iVar2 = param_3;
        piVar7 = param_2;
        if ((int *)*param_1 <= piVar6) goto LAB_00412217;
        *param_2 = *piVar6;
        param_2[1] = piVar6[1];
        param_2[2] = piVar6[2];
        param_2[3] = piVar6[3];
        iVar2 = param_3 + -1;
        piVar7 = param_2 + 4;
        if ((int *)*param_1 <= piVar6 + 4) goto LAB_00412217;
        param_2[4] = piVar6[4];
        param_2[5] = piVar6[5];
        param_2[6] = piVar6[6];
        param_2[7] = piVar6[7];
        iVar2 = param_3 + -2;
        piVar7 = param_2 + 8;
        if ((int *)*param_1 <= piVar6 + 8) goto LAB_00412217;
        param_2[8] = piVar6[8];
        param_2[9] = piVar6[9];
        param_2[10] = piVar6[10];
        piVar7 = piVar6 + 0xb;
        piVar6 = piVar6 + 0xc;
        param_2[0xb] = *piVar7;
        param_2 = param_2 + 0xc;
      }
      do {
        iVar2 = param_3;
        piVar7 = param_2;
        if ((int *)*param_1 <= piVar6) break;
        param_3 = param_3 + -1;
        *param_2 = *piVar6;
        param_2[1] = piVar6[1];
        param_2[2] = piVar6[2];
        piVar3 = piVar6 + 3;
        piVar6 = piVar6 + 4;
        param_2[3] = *piVar3;
        param_2 = param_2 + 4;
        iVar2 = param_3;
        piVar7 = param_2;
      } while (0 < param_3);
    }
LAB_00412217:
    *param_1 = (uint)piVar7;
    if (0 < iVar2) {
      puVar4 = (undefined4 *)*param_1;
      local_1c = iVar2;
      do {
        *puVar4 = 1;
        uVar5 = *param_1;
        if (uVar5 == param_1[2]) {
          FUN_00412294(param_1,1);
          uVar5 = *param_1;
        }
        puVar4 = (undefined4 *)(uVar5 + 0x10);
        iVar2 = iVar2 + -1;
        *param_1 = (uint)puVar4;
      } while (0 < iVar2);
    }
  }
  FUN_00416850(param_1);
  return;
}




/* Function: FUN_00412294 */

void FUN_00412294(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 - *param_1 >> 4 <= param_2) {
    if (iVar1 - param_1[1] >> 4 <= param_1[3] + -1) {
      param_1[2] = iVar1 + 0x280;
      FUN_00412884(param_1,"stack overflow");
      return;
    }
    FUN_004122e4(param_1,5);
  }
  return;
}




/* Function: FUN_004122e4 */

void FUN_004122e4(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(*(int *)(param_1 + 0x14) + 0x44) = param_2;
                    /* WARNING: Subroutine does not return */
    longjmp(*(int **)(param_1 + 0x14),1);
  }
  if (param_2 != 4) {
    FUN_00412324(param_1,"unable to recover; exiting\n");
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}




/* Function: FUN_00412324 */

void FUN_00412324(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_00417908(param_1,"_ERRORMESSAGE");
  if (*piVar2 != 5) {
    return;
  }
  piVar1 = (int *)*param_1;
  *piVar1 = *piVar2;
  piVar1[1] = piVar2[1];
  piVar1[2] = piVar2[2];
  piVar1[3] = piVar2[3];
  iVar3 = *param_1;
  if (iVar3 == param_1[2]) {
    FUN_00412294(param_1,1);
    iVar3 = *param_1;
  }
  *param_1 = iVar3 + 0x10;
  FUN_00412d30(param_1,param_2);
  FUN_0041209c(param_1,*param_1 + -0x20,0);
  return;
}




/* Function: FUN_00412390 */

int FUN_00412390(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)*(short *)((int)param_2 + 0xe);
  iVar2 = param_1[4];
  param_1[4] = param_3;
  FUN_00412294(param_1,iVar6 + 0x14);
  iVar5 = 0;
  if (0 < iVar6) {
    if (3 < iVar6) {
      iVar4 = 0;
      do {
        puVar3 = (undefined4 *)*param_1;
        iVar5 = iVar5 + 3;
        *param_1 = (int)(puVar3 + 4);
        *puVar3 = *(undefined4 *)(iVar4 + 0x10 + (int)param_2);
        puVar3[1] = *(undefined4 *)(iVar4 + 0x14 + (int)param_2);
        puVar3[2] = *(undefined4 *)(iVar4 + 0x18 + (int)param_2);
        puVar3[3] = *(undefined4 *)(iVar4 + 0x1c + (int)param_2);
        puVar3 = (undefined4 *)*param_1;
        *param_1 = (int)(puVar3 + 4);
        *puVar3 = *(undefined4 *)(iVar4 + 0x20 + (int)param_2);
        puVar3[1] = *(undefined4 *)(iVar4 + 0x24 + (int)param_2);
        puVar3[2] = *(undefined4 *)(iVar4 + 0x28 + (int)param_2);
        puVar3[3] = *(undefined4 *)(iVar4 + 0x2c + (int)param_2);
        puVar3 = (undefined4 *)*param_1;
        *param_1 = (int)(puVar3 + 4);
        *puVar3 = *(undefined4 *)(iVar4 + 0x30 + (int)param_2);
        puVar3[1] = *(undefined4 *)(iVar4 + 0x34 + (int)param_2);
        puVar3[2] = *(undefined4 *)(iVar4 + 0x38 + (int)param_2);
        iVar1 = iVar4 + 0x3c;
        iVar4 = iVar4 + 0x30;
        puVar3[3] = *(undefined4 *)(iVar1 + (int)param_2);
      } while (iVar5 <= iVar6 + -4);
    }
    iVar4 = iVar5 << 4;
    do {
      puVar3 = (undefined4 *)*param_1;
      iVar5 = iVar5 + 1;
      *param_1 = (int)(puVar3 + 4);
      *puVar3 = *(undefined4 *)(iVar4 + 0x10 + (int)param_2);
      puVar3[1] = *(undefined4 *)(iVar4 + 0x14 + (int)param_2);
      puVar3[2] = *(undefined4 *)(iVar4 + 0x18 + (int)param_2);
      iVar1 = iVar4 + 0x1c;
      iVar4 = iVar4 + 0x10;
      puVar3[3] = *(undefined4 *)(iVar1 + (int)param_2);
    } while (iVar5 < iVar6);
  }
  iVar5 = (*(code *)*param_2)(param_1);
  param_1[4] = iVar2;
  return *param_1 + iVar5 * -0x10;
}




/* Function: FUN_004124b0 */

void FUN_004124b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_60 [23];
  int local_4;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    local_4 = param_2;
    local_60[0] = param_4;
    *(undefined4 *)(*(int *)(param_2 + 8) + 4) = 0;
    FUN_00411fa0(param_1,local_60,param_3);
  }
  return;
}




/* Function: FUN_00412504 */

void FUN_00412504(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2[1] == 0) {
    uVar1 = FUN_00417928(param_1,*param_2);
  }
  else {
    uVar1 = FUN_00419c60(param_1,*param_2);
  }
  FUN_004166a8(param_1,uVar1,0);
  return;
}




/* Function: FUN_0041253c */

void FUN_0041253c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00412564(param_1,param_2);
  if (iVar1 == 0) {
    FUN_00412798(param_1,0,0xffffffff);
  }
  return;
}




/* Function: FUN_00412564 */

undefined4 FUN_00412564(undefined4 param_1,char *param_2)

{
  int _Ch;
  undefined4 uVar1;
  undefined4 uVar2;
  FILE *_File;
  undefined4 uVar3;
  undefined1 local_124 [276];
  
  _File = (FILE *)_iob_exref;
  if (param_2 != (char *)0x0) {
    _File = fopen(param_2,"r");
  }
  if (_File != (FILE *)0x0) {
    _Ch = fgetc(_File);
    ungetc(_Ch,_File);
    if (_Ch == 0x1b) {
      uVar3 = 1;
      if ((_File != (FILE *)_iob_exref) &&
         (_File = freopen(param_2,"rb",_File), _File == (FILE *)0x0)) {
        return 2;
      }
    }
    else {
      uVar3 = 0;
    }
    FUN_00412d30(param_1,&DAT_0058707c);
    if (param_2 == (char *)0x0) {
      param_2 = "(stdin)";
    }
    FUN_00412d30(param_1,param_2);
    FUN_00413520(param_1,2);
    uVar1 = FUN_00412940(param_1);
    uVar2 = FUN_00412c34(param_1,uVar1);
    FUN_00419d60(local_124,_File,uVar2);
    uVar3 = FUN_00412670(param_1,local_124,uVar3);
    FUN_00412978(param_1,uVar1);
    if (_File != (FILE *)_iob_exref) {
      fclose(_File);
    }
    return uVar3;
  }
  return 2;
}




/* Function: FUN_00412670 */

int FUN_00412670(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  local_10 = param_2;
  local_c = param_3;
  if (*(uint *)(param_1 + 0x5c) / 10 <= uVar2 >> 3) {
    FUN_00416864(param_1);
    uVar2 = *(uint *)(param_1 + 0x60);
  }
  iVar1 = FUN_004126e0(param_1,FUN_00412504,&local_10);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x5c) = (*(int *)(param_1 + 0x5c) - uVar2) + *(int *)(param_1 + 0x60);
    return 0;
  }
  if (iVar1 == 1) {
    iVar1 = 3;
  }
  return iVar1;
}




/* Function: FUN_004126e0 */

undefined4 FUN_004126e0(undefined4 *param_1,code *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_4c [64];
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = param_1[4];
  uVar2 = *param_1;
  uVar3 = param_1[0x1b];
  local_8 = 0;
  local_c = param_1[5];
  param_1[5] = local_4c;
  iVar4 = setjmp3(local_4c,0);
  if (iVar4 == 0) {
    (*param_2)(param_1,param_3);
  }
  else {
    param_1[0x1b] = uVar3;
    param_1[4] = uVar1;
    *param_1 = uVar2;
    FUN_00412770(param_1);
  }
  param_1[5] = local_c;
  return local_8;
}




/* Function: FUN_00412770 */

void FUN_00412770(int *param_1)

{
  if (*param_1 - param_1[1] >> 4 < param_1[3] + -1) {
    param_1[2] = param_1[1] + -0x10 + param_1[3] * 0x10;
  }
  return;
}




/* Function: FUN_00412798 */

void FUN_00412798(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_10;
  undefined4 local_c;
  
  iVar2 = *param_1 + (param_2 + 1) * -0x10;
  local_c = param_3;
  local_10 = iVar2;
  iVar1 = FUN_004126e0(param_1,&LAB_004124ec,&local_10);
  if (iVar1 != 0) {
    *param_1 = iVar2;
  }
  return;
}




/* Function: FUN_004127d8 */

void FUN_004127d8(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = 0;
  cVar1 = *param_2;
  pcVar3 = param_2;
  while (cVar1 != '\0') {
    pcVar3 = pcVar3 + 1;
    iVar2 = iVar2 + 1;
    cVar1 = *pcVar3;
  }
  FUN_00412800(param_1,param_2,iVar2,param_2);
  return;
}




/* Function: FUN_00412800 */

void FUN_00412800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00412830(param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    FUN_00412798(param_1,0,0xffffffff);
  }
  return;
}




/* Function: FUN_00412830 */

void FUN_00412830(undefined4 param_1,char *param_2,undefined4 param_3,undefined *param_4)

{
  undefined1 local_118 [276];
  
  if (param_4 == (undefined *)0x0) {
    param_4 = &DAT_00587088;
  }
  FUN_00419ce8(local_118,param_2,param_3,param_4);
  FUN_00412670(param_1,local_118,*param_2 == '\x1b');
  return;
}




/* Function: FUN_00412884 */

void FUN_00412884(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00412324(param_1,param_2);
  }
  FUN_004122e4(param_1,1);
  return;
}




/* Function: FUN_004128a8 */

void FUN_004128a8(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00419e70(param_1,0,param_2 * 0x10 + 0x280);
  param_1[1] = iVar1;
  param_1[0x18] = param_1[0x18] + param_2 * 0x10;
  param_1[2] = iVar1 + -0x10 + param_2 * 0x10;
  param_1[3] = param_2;
  *param_1 = iVar1;
  param_1[4] = iVar1;
  return;
}




/* Function: FUN_004128f0 */

void FUN_004128f0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_1;
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  iVar2 = *param_1;
  if (iVar2 == param_1[2]) {
    FUN_00412294(param_1,1);
    iVar2 = *param_1;
  }
  *param_1 = iVar2 + 0x10;
  return;
}




/* Function: FUN_00412930 */

int FUN_00412930(int *param_1)

{
  return param_1[2] - *param_1 >> 4;
}




/* Function: FUN_00412940 */

int FUN_00412940(int *param_1)

{
  return *param_1 - param_1[4] >> 4;
}




/* Function: FUN_00412950 */

void FUN_00412950(int *param_1,int param_2)

{
  if (-1 < param_2) {
    FUN_00411f08(param_1,param_1[4],param_2);
    return;
  }
  *param_1 = *param_1 + 0x10 + param_2 * 0x10;
  return;
}




/* Function: FUN_00412978 */

void FUN_00412978(uint *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_004133e4(param_1,param_2);
  puVar2 = (undefined4 *)(iVar1 + 0x10);
  puVar3 = (undefined4 *)*param_1;
  if (puVar2 < puVar3) {
    do {
      puVar2[-4] = *puVar2;
      puVar2[-3] = puVar2[1];
      puVar2[-2] = puVar2[2];
      puVar2[-1] = puVar2[3];
      puVar2 = puVar2 + 4;
      puVar3 = (undefined4 *)*param_1;
    } while (puVar2 < puVar3);
  }
  *param_1 = (uint)(puVar3 + -4);
  return;
}




/* Function: FUN_004129c4 */

void FUN_004129c4(uint *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_004133e4(param_1,param_2);
  puVar2 = (undefined4 *)*param_1;
  if (puVar1 < puVar2) {
    if (0x4f < (uint)((int)puVar2 - (int)puVar1)) {
      do {
        *puVar2 = puVar2[-4];
        puVar2[1] = puVar2[-3];
        puVar2[2] = puVar2[-2];
        puVar2[3] = puVar2[-1];
        puVar2[-4] = puVar2[-8];
        puVar2[-3] = puVar2[-7];
        puVar2[-2] = puVar2[-6];
        puVar2[-1] = puVar2[-5];
        puVar2[-8] = puVar2[-0xc];
        puVar2[-7] = puVar2[-0xb];
        puVar2[-6] = puVar2[-10];
        puVar2[-5] = puVar2[-9];
        puVar2[-0xc] = puVar2[-0x10];
        puVar2[-0xb] = puVar2[-0xf];
        puVar2[-10] = puVar2[-0xe];
        puVar2[-9] = puVar2[-0xd];
        puVar2 = puVar2 + -0x10;
      } while (puVar1 + 0x14 < puVar2);
    }
    do {
      *puVar2 = puVar2[-4];
      puVar2[1] = puVar2[-3];
      puVar2[2] = puVar2[-2];
      puVar2[3] = puVar2[-1];
      puVar2 = puVar2 + -4;
    } while (puVar1 < puVar2);
    puVar2 = (undefined4 *)*param_1;
  }
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1[3] = puVar2[3];
  return;
}




/* Function: FUN_00412a9c */

void FUN_00412a9c(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)FUN_004133e4(param_1,param_2);
  puVar1 = (undefined4 *)*param_1;
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1[3] = puVar2[3];
  iVar3 = *param_1;
  if (iVar3 == param_1[2]) {
    FUN_00412294(param_1,1);
    iVar3 = *param_1;
  }
  *param_1 = iVar3 + 0x10;
  return;
}




/* Function: FUN_00412ae4 */

char * FUN_00412ae4(undefined4 param_1,int param_2)

{
  if (param_2 != -1) {
    return (&PTR_s_userdata_005a233c)[param_2];
  }
  return "no value";
}




/* Function: FUN_00412afc */

undefined4 FUN_00412afc(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00412b94(param_1,param_2);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*piVar1 != 2) {
    iVar2 = FUN_00415d6c(piVar1);
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 1;
}




/* Function: FUN_00412b2c */

undefined4 FUN_00412b2c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00412b50(param_1,param_2);
  if ((iVar1 != 3) && (iVar1 != 2)) {
    return 0;
  }
  return 1;
}




/* Function: FUN_00412b50 */

undefined4 FUN_00412b50(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00412b94(param_1,param_2);
  if (puVar1 != (undefined4 *)0x0) {
    return *puVar1;
  }
  return 0xffffffff;
}




/* Function: FUN_00412b70 */

undefined4 FUN_00412b70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00412b94(param_1,param_2);
  if (iVar1 == 0) {
    return 0xfffffffe;
  }
  uVar2 = FUN_004136c0(iVar1);
  return uVar2;
}




/* Function: FUN_00412b94 */

uint FUN_00412b94(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 < 0) {
    return param_2 * 0x10 + *param_1;
  }
  uVar1 = (param_1[4] - 0x10) + param_2 * 0x10;
  if (*param_1 <= uVar1) {
    return 0;
  }
  return uVar1;
}




/* Function: FUN_00412bc4 */

undefined4 FUN_00412bc4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00412b94(param_1,param_2);
  iVar2 = FUN_00412b94(param_1,param_3);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    uVar3 = FUN_00415da8(param_1,iVar1,iVar2,*param_1);
    return uVar3;
  }
  return 0;
}




/* Function: FUN_00412c00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00412c00(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00412b94(param_1,param_2);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 2) {
      iVar2 = FUN_00415d6c(piVar1);
      if (iVar2 != 0) goto LAB_00412c27;
    }
    return (float10)*(double *)(piVar1 + 2);
  }
LAB_00412c27:
  return (float10)_DAT_005b91e0;
}




/* Function: FUN_00412c34 */

int FUN_00412c34(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00412b94(param_1,param_2);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if ((*piVar1 != 3) && (iVar2 = FUN_00416620(param_1,piVar1), iVar2 != 0)) {
    return 0;
  }
  return piVar1[2] + 0x14;
}




/* Function: FUN_00412c70 */

undefined4 FUN_00412c70(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00412b94(param_1,param_2);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if ((*piVar1 != 3) && (iVar2 = FUN_00416620(param_1,piVar1), iVar2 != 0)) {
    return 0;
  }
  return *(undefined4 *)(piVar1[2] + 8);
}




/* Function: FUN_00412cac */

undefined4 FUN_00412cac(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00412b94(param_1,param_2);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    return *(undefined4 *)(piVar1[2] + 4);
  }
  return 0;
}




/* Function: FUN_00412cd0 */

int FUN_00412cd0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00412b94(param_1,param_2);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 4) {
      return piVar1[2];
    }
    if (*piVar1 == 5) {
      return piVar1[2];
    }
  }
  return 0;
}




/* Function: FUN_00412cfc */

void FUN_00412cfc(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  *(undefined8 *)(*param_1 + 8) = param_2;
  *(undefined4 *)*param_1 = 2;
  iVar1 = *param_1;
  if (iVar1 == param_1[2]) {
    FUN_00412294(param_1,1);
    iVar1 = *param_1;
  }
  *param_1 = iVar1 + 0x10;
  return;
}




/* Function: FUN_00412d30 */

void FUN_00412d30(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_2 == (char *)0x0) {
    FUN_00412dac(param_1);
    return;
  }
  iVar2 = 0;
  cVar1 = *param_2;
  pcVar3 = param_2;
  while (cVar1 != '\0') {
    pcVar3 = pcVar3 + 1;
    iVar2 = iVar2 + 1;
    cVar1 = *pcVar3;
  }
  FUN_00412d6c(param_1,param_2,iVar2);
  return;
}




/* Function: FUN_00412d6c */

void FUN_00412d6c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0041a5d0(param_1,param_2,param_3);
  *(undefined4 *)(*param_1 + 8) = uVar1;
  *(undefined4 *)*param_1 = 3;
  iVar2 = *param_1;
  if (iVar2 == param_1[2]) {
    FUN_00412294(param_1,1);
    iVar2 = *param_1;
  }
  *param_1 = iVar2 + 0x10;
  return;
}




/* Function: FUN_00412dac */

void FUN_00412dac(int *param_1)

{
  int iVar1;
  
  *(undefined4 *)*param_1 = 1;
  iVar1 = *param_1;
  if (iVar1 == param_1[2]) {
    FUN_00412294(param_1,1);
    iVar1 = *param_1;
  }
  *param_1 = iVar1 + 0x10;
  return;
}




/* Function: FUN_00412dd8 */

void FUN_00412dd8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0041431c(param_1,param_2,param_3);
  return;
}




/* Function: FUN_00412df0 */

void FUN_00412df0(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_3 != -1) && (param_3 != 0)) && ((param_3 < 6 || (param_1[0x13] < param_3)))) {
    FUN_0041a1c0(param_1,"invalid tag for a userdata (%d)",param_3);
  }
  uVar1 = FUN_0041a228(param_1,param_2,param_3);
  *(undefined4 *)(*param_1 + 8) = uVar1;
  *(undefined4 *)*param_1 = 0;
  iVar2 = *param_1;
  if (iVar2 == param_1[2]) {
    FUN_00412294(param_1,1);
    iVar2 = *param_1;
  }
  *param_1 = iVar2 + 0x10;
  return;
}




/* Function: FUN_00412e58 */

void FUN_00412e58(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*param_1;
  uVar1 = FUN_0041a5a8(param_1,param_2);
  puVar2 = (undefined4 *)FUN_004160f4(param_1,uVar1);
  *puVar3 = *puVar2;
  puVar3[1] = puVar2[1];
  puVar3[2] = puVar2[2];
  puVar3[3] = puVar2[3];
  if (puVar3 == (undefined4 *)param_1[2]) {
    *param_1 = (int)puVar3;
    FUN_00412294(param_1,1);
    puVar3 = (undefined4 *)*param_1;
  }
  *param_1 = (int)(puVar3 + 4);
  return;
}




/* Function: FUN_00412ea8 */

void FUN_00412ea8(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (param_2 < 0) {
    iVar3 = param_2 * 0x10 + iVar1;
  }
  else {
    iVar3 = param_1[4] + -0x10 + param_2 * 0x10;
  }
  puVar2 = (undefined4 *)FUN_00415ffc(param_1,iVar3);
  *(undefined4 *)(iVar1 + -0x10) = *puVar2;
  *(undefined4 *)(iVar1 + -0xc) = puVar2[1];
  *(undefined4 *)(iVar1 + -8) = puVar2[2];
  *(undefined4 *)(iVar1 + -4) = puVar2[3];
  *param_1 = iVar1;
  return;
}




/* Function: FUN_00412ef8 */

void FUN_00412ef8(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 < 0) {
    iVar2 = param_2 * 0x10 + *param_1;
  }
  else {
    iVar2 = param_1[4] + -0x10 + param_2 * 0x10;
  }
  puVar1 = (undefined4 *)FUN_00417124(param_1,*(undefined4 *)(iVar2 + 8),*param_1 + -0x10);
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + -0x10) = *puVar1;
  *(undefined4 *)(iVar2 + -0xc) = puVar1[1];
  *(undefined4 *)(iVar2 + -8) = puVar1[2];
  *(undefined4 *)(iVar2 + -4) = puVar1[3];
  return;
}




/* Function: FUN_00412f4c */

void FUN_00412f4c(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 < 0) {
    iVar3 = param_2 * 0x10 + *param_1;
  }
  else {
    iVar3 = param_1[4] + -0x10 + param_2 * 0x10;
  }
  puVar2 = (undefined4 *)FUN_004172cc(*(undefined4 *)(iVar3 + 8),(double)param_3);
  puVar1 = (undefined4 *)*param_1;
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1[3] = puVar2[3];
  iVar3 = *param_1;
  if (iVar3 == param_1[2]) {
    FUN_00412294(param_1,1);
    iVar3 = *param_1;
  }
  *param_1 = iVar3 + 0x10;
  return;
}




/* Function: FUN_00412fcc */

void FUN_00412fcc(int *param_1)

{
  int iVar1;
  
  *(int *)(*param_1 + 8) = param_1[0x11];
  *(undefined4 *)*param_1 = 4;
  iVar1 = *param_1;
  if (iVar1 == param_1[2]) {
    FUN_00412294(param_1,1);
    iVar1 = *param_1;
  }
  *param_1 = iVar1 + 0x10;
  return;
}




/* Function: FUN_00413000 */

undefined4 FUN_00413000(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 == -1) {
    *(undefined4 *)*param_1 = 1;
LAB_0041304d:
    iVar3 = *param_1;
    if (iVar3 == param_1[2]) {
      FUN_00412294(param_1,1);
      iVar3 = *param_1;
    }
    *param_1 = iVar3 + 0x10;
    return 1;
  }
  if ((-1 < param_2) && (param_2 < param_1[0x15])) {
    iVar3 = param_1[0x14];
    iVar1 = *(int *)(iVar3 + 0x10 + param_2 * 0x18);
    if ((iVar1 == -4) || (iVar1 == -2)) {
      puVar2 = (undefined4 *)*param_1;
      *puVar2 = *(undefined4 *)(iVar3 + param_2 * 0x18);
      puVar2[1] = *(undefined4 *)(iVar3 + 4 + param_2 * 0x18);
      puVar2[2] = *(undefined4 *)(iVar3 + 8 + param_2 * 0x18);
      puVar2[3] = *(undefined4 *)(iVar3 + 0xc + param_2 * 0x18);
      goto LAB_0041304d;
    }
  }
  return 0;
}




/* Function: FUN_00413084 */

void FUN_00413084(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_004173f8(param_1,0);
  *(undefined4 *)(*param_1 + 8) = uVar1;
  *(undefined4 *)*param_1 = 4;
  iVar2 = *param_1;
  if (iVar2 == param_1[2]) {
    FUN_00412294(param_1,1);
    iVar2 = *param_1;
  }
  *param_1 = iVar2 + 0x10;
  return;
}




/* Function: FUN_004130c0 */

void FUN_004130c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  uVar2 = FUN_0041a5a8(param_1,param_2);
  FUN_00416188(param_1,uVar2);
  *param_1 = iVar1 + -0x10;
  return;
}




/* Function: FUN_004130e4 */

void FUN_004130e4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0) {
    iVar1 = param_2 * 0x10 + *param_1;
  }
  else {
    iVar1 = param_1[4] + -0x10 + param_2 * 0x10;
  }
  iVar2 = *param_1 + -0x20;
  FUN_0041629c(param_1,iVar1,iVar2);
  *param_1 = iVar2;
  return;
}




/* Function: FUN_00413120 */

void FUN_00413120(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 < 0) {
    iVar2 = param_2 * 0x10 + *param_1;
  }
  else {
    iVar2 = param_1[4] + -0x10 + param_2 * 0x10;
  }
  puVar1 = (undefined4 *)FUN_004174a4(param_1,*(undefined4 *)(iVar2 + 8),*param_1 + -0x20);
  iVar2 = *param_1;
  *puVar1 = *(undefined4 *)(iVar2 + -0x10);
  puVar1[1] = *(undefined4 *)(iVar2 + -0xc);
  puVar1[2] = *(undefined4 *)(iVar2 + -8);
  puVar1[3] = *(undefined4 *)(iVar2 + -4);
  *param_1 = *param_1 + -0x20;
  return;
}




/* Function: FUN_00413178 */

void FUN_00413178(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 < 0) {
    iVar2 = param_2 * 0x10 + *param_1;
  }
  else {
    iVar2 = param_1[4] + -0x10 + param_2 * 0x10;
  }
  puVar1 = (undefined4 *)FUN_0041747c(param_1,*(undefined4 *)(iVar2 + 8),param_3);
  iVar2 = *param_1;
  *puVar1 = *(undefined4 *)(iVar2 + -0x10);
  puVar1[1] = *(undefined4 *)(iVar2 + -0xc);
  puVar1[2] = *(undefined4 *)(iVar2 + -8);
  puVar1[3] = *(undefined4 *)(iVar2 + -4);
  *param_1 = *param_1 + -0x10;
  return;
}




/* Function: FUN_004131cc */

void FUN_004131cc(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -0x10;
  param_1[0x11] = *(int *)(iVar1 + -8);
  return;
}




/* Function: FUN_004131e0 */

int FUN_004131e0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (*(int *)(iVar4 + -0x10) == 1) {
    iVar2 = -1;
  }
  else {
    iVar2 = param_1[0x16];
    if (iVar2 == -1) {
      iVar1 = FUN_00419e0c(param_1,param_1[0x14],param_1[0x15],1,0x18,"reference table overflow",
                           0x7ffffffd);
      param_1[0x14] = iVar1;
      param_1[0x18] = param_1[0x18] + 0x18;
      iVar2 = param_1[0x15];
      param_1[0x15] = iVar2 + 1;
      iVar4 = *param_1;
    }
    else {
      iVar1 = param_1[0x14];
      param_1[0x16] = *(int *)(iVar1 + 0x10 + iVar2 * 0x18);
    }
    *(undefined4 *)(iVar1 + iVar2 * 0x18) = *(undefined4 *)(iVar4 + -0x10);
    *(undefined4 *)(iVar1 + 4 + iVar2 * 0x18) = *(undefined4 *)(iVar4 + -0xc);
    *(undefined4 *)(iVar1 + 8 + iVar2 * 0x18) = *(undefined4 *)(iVar4 + -8);
    *(undefined4 *)(iVar1 + 0xc + iVar2 * 0x18) = *(undefined4 *)(iVar4 + -4);
    if (param_2 == 0) {
      uVar3 = 0xfffffffe;
    }
    else {
      uVar3 = 0xfffffffc;
    }
    *(undefined4 *)(param_1[0x14] + 0x10 + iVar2 * 0x18) = uVar3;
    iVar4 = *param_1;
  }
  *param_1 = iVar4 + -0x10;
  return iVar2;
}




/* Function: FUN_004132a0 */

void FUN_004132a0(int *param_1,int param_2,undefined4 param_3)

{
  FUN_0041209c(param_1,*param_1 + (param_2 + 1) * -0x10,param_3);
  return;
}




/* Function: FUN_004132c4 */

uint FUN_004132c4(int param_1)

{
  return *(uint *)(param_1 + 0x5c) >> 10;
}




/* Function: FUN_004132d0 */

uint FUN_004132d0(int param_1)

{
  return *(uint *)(param_1 + 0x60) >> 10;
}




/* Function: FUN_004132dc */

void FUN_004132dc(int param_1,int param_2)

{
  if (param_2 < 0x400000) {
    *(int *)(param_1 + 0x5c) = param_2 << 10;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  }
  FUN_00416850(param_1);
  return;
}




/* Function: FUN_00413304 */

void FUN_00413304(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_004135e4(param_1,param_2);
  iVar1 = *param_1;
  if (*(int *)(iVar1 + -0x10) == 4) {
    *(undefined4 *)(*(int *)(iVar1 + -8) + 4) = param_2;
    return;
  }
  if (*(int *)(iVar1 + -0x10) == 0) {
    **(undefined4 **)(iVar1 + -8) = param_2;
    return;
  }
  FUN_0041a1c0(param_1,"cannot change the tag of a %.20s",
               (&PTR_s_userdata_005a233c)[*(int *)(iVar1 + -0x10)]);
  return;
}




/* Function: FUN_00413354 */

undefined4 FUN_00413354(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_004133e4(param_1,param_2);
  uVar3 = FUN_004133e4(param_1,0xffffffff);
  puVar4 = (undefined4 *)FUN_004170a4(param_1,*(undefined4 *)(iVar2 + 8),uVar3);
  if (puVar4 != (undefined4 *)0x0) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + -0x10) = *puVar4;
    *(undefined4 *)(iVar2 + -0xc) = puVar4[1];
    *(undefined4 *)(iVar2 + -8) = puVar4[2];
    *(undefined4 *)(iVar2 + -4) = puVar4[3];
    puVar1 = (undefined4 *)*param_1;
    *puVar1 = puVar4[4];
    puVar1[1] = puVar4[5];
    puVar1[2] = puVar4[6];
    puVar1[3] = puVar4[7];
    iVar2 = *param_1;
    if (iVar2 == param_1[2]) {
      FUN_00412294(param_1,1);
      iVar2 = *param_1;
    }
    *param_1 = iVar2 + 0x10;
    return 1;
  }
  *param_1 = *param_1 + -0x10;
  return 0;
}




/* Function: FUN_004133e4 */

int FUN_004133e4(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    iVar1 = *param_1 + param_2 * 0x10;
  }
  else {
    iVar1 = param_1[4] + -0x10 + param_2 * 0x10;
  }
  return iVar1;
}




/* Function: FUN_00413410 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00413410(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint local_20;
  uint uStack_1c;
  
  iVar4 = FUN_004133e4(param_1,param_2);
  puVar2 = *(undefined4 **)(iVar4 + 8);
  uVar5 = FUN_0041a5a8(param_1,&DAT_00587124);
  piVar6 = (int *)FUN_004171c0(puVar2,uVar5);
  if (*piVar6 == 2) {
    lVar1 = *(longlong *)(piVar6 + 2);
    local_20 = (uint)lVar1;
    uStack_1c = (uint)((ulonglong)lVar1 >> 0x20);
    uVar7 = uStack_1c >> 0x14 & 0x7ff;
    if (uVar7 < 0x3ff) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uStack_1c << 0xb | local_20 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar7 & 0x1f);
      if (lVar1 < 0) {
        return -uVar7;
      }
    }
    return uVar7;
  }
  piVar6 = (int *)*puVar2;
  iVar4 = puVar2[2] + -1;
  dVar3 = _DAT_005b91e8;
  if (puVar2[2] != 0) {
    do {
      if (((*piVar6 == 2) && (piVar6[4] != 1)) && (dVar3 < *(double *)(piVar6 + 2))) {
        dVar3 = *(double *)(piVar6 + 2);
      }
      piVar6 = piVar6 + 10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  local_20 = SUB84(dVar3,0);
  uStack_1c = (uint)((ulonglong)dVar3 >> 0x20);
  uVar7 = uStack_1c >> 0x14 & 0x7ff;
  if (uVar7 < 0x3ff) {
    uVar7 = 0;
  }
  else {
    uVar7 = (uStack_1c << 0xb | local_20 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar7 & 0x1f);
    if ((longlong)dVar3 < 0) {
      return -uVar7;
    }
  }
  return uVar7;
}




/* Function: FUN_00413520 */

void FUN_00413520(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_0041643c(param_1,param_2,iVar1);
  *param_1 = iVar1 + (param_2 + -1) * -0x10;
  FUN_00416850(param_1);
  return;
}




/* Function: FUN_00413550 */

undefined4 FUN_00413550(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  iVar1 = FUN_0041a27c(param_1,param_2,0);
  *(int *)(*param_1 + 8) = iVar1;
  *(undefined4 *)*param_1 = 0;
  iVar2 = *param_1;
  if (iVar2 == param_1[2]) {
    FUN_00412294(param_1,1);
    iVar2 = *param_1;
  }
  *param_1 = iVar2 + 0x10;
  return *(undefined4 *)(iVar1 + 4);
}




/* Function: FUN_004135a0 */

undefined4 FUN_004135a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00419e0c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),1,
                       0x40,"tag table overflow",0x7ffffffd);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  iVar2 = *(int *)(param_1 + 0x4c) + 1;
  *(int *)(param_1 + 0x4c) = iVar2;
  FUN_00413948(param_1,iVar2);
  return *(undefined4 *)(param_1 + 0x4c);
}




/* Function: FUN_004135e4 */

void FUN_004135e4(int param_1,int param_2)

{
  if ((param_2 < 6) || (*(int *)(param_1 + 0x4c) < param_2)) {
    FUN_0041a1c0(param_1,"tag %d was not created by `newtag\'",param_2);
  }
  return;
}




/* Function: FUN_00413608 */

int FUN_00413608(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_0041369c(param_1,param_2);
  FUN_0041369c(param_1,param_3);
  iVar2 = 0;
  do {
    iVar1 = FUN_00413674(param_2,iVar2);
    if (iVar1 != 0) {
      *(undefined4 *)(param_2 * 0x40 + *(int *)(param_1 + 0x48) + iVar2 * 4) =
           *(undefined4 *)(param_3 * 0x40 + *(int *)(param_1 + 0x48) + iVar2 * 4);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xf);
  return param_2;
}




/* Function: FUN_00413674 */

int FUN_00413674(int param_1,int param_2)

{
  if (5 < param_1) {
    return 1;
  }
  return (int)(char)(&DAT_005a2260)[param_1 * 0xf + param_2];
}




/* Function: FUN_0041369c */

void FUN_0041369c(int param_1,int param_2)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x4c) < param_2)) {
    FUN_0041a1c0(param_1,"%d is not a valid tag",param_2);
  }
  return;
}




/* Function: FUN_004136c0 */

int FUN_004136c0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return *(int *)param_1[2];
  }
  if (iVar1 == 4) {
    return *(int *)(param_1[2] + 4);
  }
  return iVar1;
}




/* Function: FUN_004136e0 */

void FUN_004136e0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00413764(param_1,param_3,param_2);
  FUN_0041369c(param_1,param_2);
  iVar2 = FUN_00413674(param_2,iVar1);
  if ((iVar2 == 0) || (iVar1 = *(int *)(param_1[0x12] + param_2 * 0x40 + iVar1 * 4), iVar1 == 0)) {
    *(undefined4 *)*param_1 = 1;
  }
  else {
    *(int *)(*param_1 + 8) = iVar1;
    *(undefined4 *)*param_1 = 5;
  }
  iVar1 = *param_1;
  if (iVar1 == param_1[2]) {
    FUN_00412294(param_1,1);
    iVar1 = *param_1;
  }
  *param_1 = iVar1 + 0x10;
  return;
}




/* Function: FUN_00413764 */

int FUN_00413764(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004137d0(param_2);
  if (iVar1 < 0xf) {
    if (iVar1 == 0xd) {
      if (param_3 == 4) {
        FUN_0041a1c0(param_1,"event `gc\' for tables is deprecated");
      }
    }
    else if (iVar1 < 0) {
      FUN_0041a1c0(param_1,"`%.50s\' is not a valid event name",param_2);
    }
  }
  else {
    FUN_0041a1c0(param_1,"event `%.50s\' is deprecated",param_2);
  }
  return iVar1;
}




/* Function: FUN_004137d0 */

int FUN_004137d0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar3 = 0;
  pbVar5 = PTR_s_gettable_005a22c0;
  do {
    pbVar4 = param_1;
    if (pbVar5 == (byte *)0x0) {
      return -1;
    }
    do {
      bVar1 = *pbVar5;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_0041380d:
        uVar2 = -(uint)bVar6 | 1;
        goto LAB_00413812;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_0041380d;
      pbVar5 = pbVar5 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    uVar2 = 0;
LAB_00413812:
    if (uVar2 == 0) {
      return iVar3;
    }
    pbVar5 = (&PTR_s_settable_005a22c4)[iVar3];
    iVar3 = iVar3 + 1;
  } while( true );
}




/* Function: FUN_00413834 */

void FUN_00413834(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = FUN_00413764(param_1,param_3,param_2);
  FUN_0041369c(param_1,param_2);
  iVar2 = FUN_00413674(param_2,iVar1);
  if (iVar2 == 0) {
    if ((param_2 == 4) || (param_2 == 0)) {
      pcVar3 = " with default tag";
    }
    else {
      pcVar3 = "";
    }
    FUN_0041a1c0(param_1,"cannot change `%.20s\' tag method for type `%.20s\'%.20s",
                 (&PTR_s_gettable_005a22c0)[iVar1],(&PTR_s_userdata_005a233c)[param_2],pcVar3);
  }
  iVar2 = *(int *)(*param_1 + -0x10);
  if (iVar2 == 1) {
    *(undefined4 *)(param_1[0x12] + param_2 * 0x40 + iVar1 * 4) = 0;
  }
  else if (iVar2 == 5) {
    *(undefined4 *)(param_1[0x12] + param_2 * 0x40 + iVar1 * 4) = *(undefined4 *)(*param_1 + -8);
  }
  else {
    FUN_00412884(param_1,"tag method must be a function (or nil)");
  }
  *param_1 = *param_1 + -0x10;
  return;
}




/* Function: FUN_004138f8 */

void FUN_004138f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00419e0c(param_1,*(undefined4 *)(param_1 + 0x48),0,6,0x40,&DAT_00582ad8,0x7ffffffd);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x180;
  *(undefined4 *)(param_1 + 0x4c) = 5;
  iVar2 = 0;
  do {
    FUN_00413948(param_1,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 <= *(int *)(param_1 + 0x4c));
  return;
}




/* Function: FUN_00413948 */

void FUN_00413948(int param_1,int param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x48) + param_2 * 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 4 + param_2 * 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 8 + param_2 * 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0xc + param_2 * 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x10 + param_2 * 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x14 + param_2 * 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x18 + param_2 * 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x1c + param_2 * 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x20 + param_2 * 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x24 + param_2 * 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28 + param_2 * 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x2c + param_2 * 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x30 + param_2 * 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x34 + param_2 * 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x38 + param_2 * 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x3c + param_2 * 0x40) = 0;
  return;
}




/* Function: FUN_004139ec */

undefined4 FUN_004139ec(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00413a14(param_1,param_2,*param_1);
  if (iVar1 != 0) {
    *(int *)(param_3 + 0x5c) = iVar1;
    return 1;
  }
  return 0;
}




/* Function: FUN_00413a14 */

int * FUN_00413a14(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_3 + -0x10) - *(int *)(param_1 + 4) >> 4;
  if (-1 < iVar3) {
    iVar2 = iVar3 << 4;
    do {
      piVar1 = (int *)(*(int *)(param_1 + 4) + iVar2);
      if (*piVar1 == 6) {
        if (param_2 == 0) {
          return piVar1;
        }
        param_2 = param_2 + -1;
      }
      iVar2 = iVar2 + -0x10;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return (int *)0x0;
}




/* Function: FUN_00413a60 */

int FUN_00413a60(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_2 + 0x5c);
  iVar2 = FUN_00413ab4(iVar1);
  if (iVar2 != 0) {
    uVar3 = FUN_00413af8(iVar1);
    iVar2 = FUN_0041a8ec(iVar2,param_3,uVar3);
    if (iVar2 != 0) {
      FUN_004128f0(param_1,iVar1 + param_3 * 0x10);
      return iVar2;
    }
  }
  return 0;
}




/* Function: FUN_00413ab4 */

undefined4 FUN_00413ab4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00413ad4(param_1);
  if (iVar1 != 0) {
    return *(undefined4 *)**(undefined4 **)(param_1 + 8);
  }
  return 0;
}




/* Function: FUN_00413ad4 */

undefined4 FUN_00413ad4(int *param_1)

{
  if (((param_1 != (int *)0x0) && (*param_1 == 6)) && (*(short *)(*(int *)param_1[2] + 0xc) == 0)) {
    return 1;
  }
  return 0;
}




/* Function: FUN_00413af8 */

int FUN_00413af8(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(undefined4 **)(param_1 + 8))[1];
  if (piVar1 != (int *)0x0) {
    return (*piVar1 - *(int *)(*(int *)**(undefined4 **)(param_1 + 8) + 0x18) >> 2) + -1;
  }
  return -1;
}




/* Function: FUN_00413b1c */

char * FUN_00413b1c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar1 = *(int *)(param_2 + 0x5c);
  iVar3 = FUN_00413ab4(iVar1);
  *param_1 = *param_1 + -0x10;
  if (iVar3 != 0) {
    uVar4 = FUN_00413af8(iVar1);
    pcVar5 = (char *)FUN_0041a8ec(iVar3,param_3,uVar4);
    if ((pcVar5 != (char *)0x0) && (*pcVar5 != '(')) {
      puVar2 = (undefined4 *)*param_1;
      *(undefined4 *)(iVar1 + param_3 * 0x10) = *puVar2;
      *(undefined4 *)(iVar1 + 4 + param_3 * 0x10) = puVar2[1];
      *(undefined4 *)(iVar1 + 8 + param_3 * 0x10) = puVar2[2];
      *(undefined4 *)(iVar1 + 0xc + param_3 * 0x10) = puVar2[3];
      return pcVar5;
    }
  }
  return (char *)0x0;
}




/* Function: FUN_00413b88 */

undefined4 FUN_00413b88(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  cVar1 = *param_2;
  bVar5 = cVar1 == '>';
  if (bVar5) {
    param_2 = param_2 + 1;
    iVar4 = *param_1 + -0x10;
    cVar1 = *param_2;
  }
  else {
    iVar4 = *(int *)(param_3 + 0x5c);
  }
  bVar5 = !bVar5;
  do {
    if (cVar1 == '\0') {
      if (!bVar5) {
        *param_1 = *param_1 + -0x10;
      }
      return 1;
    }
    if (cVar1 == 'S') {
      FUN_004141ac(param_1,param_3,iVar4);
    }
    else if (cVar1 == 'l') {
      uVar3 = FUN_004140e8(iVar4);
      *(undefined4 *)(param_3 + 4) = uVar3;
    }
    else if (cVar1 == 'u') {
      uVar3 = FUN_004140c0(iVar4);
      *(undefined4 *)(param_3 + 0x10) = uVar3;
    }
    else if (cVar1 == 'n') {
      if (bVar5) {
        iVar2 = FUN_00413ce4(param_1,iVar4,param_3 + 8);
      }
      else {
        iVar2 = 0;
      }
      *(int *)(param_3 + 0xc) = iVar2;
      if (iVar2 == 0) {
        FUN_00413f9c(param_1,iVar4,param_3);
      }
    }
    else {
      if (cVar1 != 'f') {
        return 0;
      }
      FUN_00413cb0(*param_1,iVar4);
      iVar2 = *param_1;
      if (iVar2 == param_1[2]) {
        FUN_00412294(param_1,1);
        iVar2 = *param_1;
      }
      *param_1 = iVar2 + 0x10;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 1;
  } while( true );
}




/* Function: FUN_00413cb0 */

void FUN_00413cb0(int *param_1,int *param_2)

{
  if (*param_2 != 6) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return;
  }
  param_1[2] = *(int *)param_2[2];
  *param_1 = 5;
  return;
}




/* Function: FUN_00413ce4 */

undefined4 FUN_00413ce4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  iVar2 = FUN_00413a14(param_1,0,param_2);
  iVar3 = FUN_00413ad4(iVar2);
  if (iVar3 != 0) {
    iVar3 = *(int *)**(undefined4 **)(iVar2 + 8);
    iVar4 = FUN_00413af8(iVar2);
    if (iVar4 != -1) {
      uVar1 = *(uint *)(*(int *)(iVar3 + 0x18) + iVar4 * 4);
      uVar6 = uVar1 & 0x3f;
      if ((1 < uVar6) && (uVar6 < 4)) {
        uVar5 = FUN_00413d50(param_1,iVar2 + 0x10 + (uVar1 >> 0xf) * 0x10,param_3);
        return uVar5;
      }
    }
  }
  return 0;
}




/* Function: FUN_00413d50 */

char * FUN_00413d50(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_00413a14(param_1,0,param_2);
  iVar2 = FUN_00413ad4(iVar1);
  if (iVar2 != 0) {
    iVar2 = *(int *)**(undefined4 **)(iVar1 + 8);
    uVar3 = FUN_00413af8(iVar1);
    uVar4 = FUN_00413e0c(iVar2,uVar3,(param_2 - iVar1) + -0x10 >> 4);
    uVar5 = uVar4 & 0x3f;
    if (uVar5 == 0xc) {
      *param_3 = *(int *)(*(int *)(iVar2 + 8) + (uVar4 >> 6) * 4) + 0x14;
      return "global";
    }
    if (uVar5 == 0xb) {
      iVar1 = FUN_0041a8ec(iVar2,(uVar4 >> 6) + 1,uVar3);
      *param_3 = iVar1;
      return "local";
    }
    if ((uVar5 == 0xe) || (uVar5 == 0x10)) {
      *param_3 = *(int *)(*(int *)(iVar2 + 8) + (uVar4 >> 6) * 4) + 0x14;
      return "field";
    }
  }
  return (char *)0x0;
}




/* Function: FUN_00413e0c */

undefined4 FUN_00413e0c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_3f8 [250];
  
  iVar1 = *(int *)(param_1 + 0x18);
  uVar3 = (uint)*(short *)(param_1 + 0x20);
  iVar5 = 0;
  if (*(short *)(param_1 + 0x22) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (0 < param_2) {
    do {
      uVar2 = *(uint *)(iVar1 + iVar5 * 4);
      iVar6 = iVar5 + 1;
      switch(uVar2 & 0x3f) {
      case 1:
        uVar3 = uVar2 >> 6;
        break;
      case 2:
        uVar3 = FUN_00413f6c(local_3f8,iVar6,uVar2 >> 0xf);
        break;
      case 3:
        uVar3 = uVar2 >> 6 & 0x1ff;
        break;
      case 4:
        uVar3 = FUN_00413f6c(local_3f8,iVar6,uVar3);
        break;
      case 5:
        uVar3 = uVar3 - (uVar2 >> 6);
        break;
      default:
        uVar3 = FUN_00413f6c(local_3f8,iVar6,uVar3 - (byte)(&DAT_005a23c2)[(uVar2 & 0x3f) * 3]);
        break;
      case 0x14:
      case 0x15:
        uVar3 = uVar3 - (uVar2 >> 6 & 0x1ff);
        break;
      case 0x16:
        uVar3 = uVar3 + (uVar2 >> 6) * -2;
        break;
      case 0x1d:
        iVar4 = uVar3 - (uVar2 >> 6);
        uVar3 = iVar4 + 1;
        local_3f8[iVar4] = iVar5;
        break;
      case 0x28:
      case 0x29:
        iVar4 = iVar5 + -0x1fffffe + (uVar2 >> 6);
        if ((iVar6 < iVar4) && (iVar4 <= param_2)) {
          local_3f8[uVar3 - 1] = iVar5;
          iVar6 = iVar4;
        }
        else {
          uVar3 = uVar3 - 1;
        }
        break;
      case 0x30:
        iVar4 = uVar3 - (uVar2 >> 6 & 0x1ff);
        uVar3 = iVar4 + 1;
        local_3f8[iVar4] = iVar5;
      }
      iVar5 = iVar6;
    } while (iVar6 < param_2);
  }
  return *(undefined4 *)(iVar1 + local_3f8[param_3] * 4);
}




/* Function: FUN_00413f6c */

int FUN_00413f6c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = param_4 + -1;
  if (param_4 != 0) {
    do {
      *(int *)(param_1 + param_3 * 4) = param_2 + -1;
      iVar1 = iVar1 + -1;
      param_3 = param_3 + 1;
    } while (iVar1 != -1);
  }
  return param_3;
}




/* Function: FUN_00413f9c */

void FUN_00413f9c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 local_18 [16];
  
  FUN_00413cb0(local_18,param_2);
  iVar1 = FUN_00414008(param_1,local_18);
  *(int *)(param_3 + 8) = iVar1;
  if (iVar1 != 0) {
    *(char **)(param_3 + 0xc) = "global";
    return;
  }
  iVar1 = FUN_0041405c(param_1,local_18);
  *(int *)(param_3 + 8) = iVar1;
  if (iVar1 != 0) {
    *(char **)(param_3 + 0xc) = "tag-method";
    return;
  }
  *(undefined **)(param_3 + 0xc) = &DAT_00582ad8;
  return;
}




/* Function: FUN_00414008 */

int FUN_00414008(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x44);
  if (0 < piVar1[2]) {
    iVar3 = 0;
    do {
      iVar2 = FUN_00419ee8(param_2,*piVar1 + 0x10 + iVar3 * 0x28);
      if ((iVar2 != 0) && (*(int *)(*piVar1 + iVar3 * 0x28) == 3)) {
        return *(int *)(*piVar1 + 8 + iVar3 * 0x28) + 0x14;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < piVar1[2]);
  }
  return 0;
}




/* Function: FUN_0041405c */

undefined * FUN_0041405c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_2 == 5) {
    iVar1 = 0;
    do {
      iVar2 = 0;
      if (-1 < *(int *)(param_1 + 0x4c)) {
        iVar3 = 0;
        do {
          if (param_2[2] == *(int *)(iVar3 + iVar1 * 4 + *(int *)(param_1 + 0x48))) {
            return (&PTR_s_gettable_005a22c0)[iVar1];
          }
          iVar3 = iVar3 + 0x40;
          iVar2 = iVar2 + 1;
        } while (iVar2 <= *(int *)(param_1 + 0x4c));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xf);
  }
  return (undefined *)0x0;
}




/* Function: FUN_004140c0 */

int FUN_004140c0(int *param_1)

{
  if (*param_1 == 5) {
    return (int)*(short *)(param_1[2] + 0xe);
  }
  if (*param_1 == 6) {
    return (int)*(short *)(*(int *)param_1[2] + 0xe);
  }
  return 0;
}




/* Function: FUN_004140e8 */

undefined4 FUN_004140e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00413ad4(param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar3 = *(undefined4 *)(*(int *)**(undefined4 **)(param_1 + 8) + 0x2c);
  uVar2 = FUN_00413af8(param_1);
  uVar3 = FUN_00414124(uVar3,uVar2,1,0);
  return uVar3;
}




/* Function: FUN_00414124 */

int FUN_00414124(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != 0) && (param_2 != -1)) {
    if (param_4 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *param_4;
    }
    iVar4 = *(int *)(param_1 + iVar2 * 4);
    if (iVar4 < 0) {
      param_3 = param_3 - *(int *)(param_1 + iVar2 * 4);
      iVar4 = *(int *)(param_1 + (iVar2 + 1) * 4);
      iVar2 = iVar2 + 1;
    }
    while (iVar1 = iVar2, param_2 < iVar4) {
      param_3 = param_3 + -1;
      iVar2 = iVar1 + -1;
      iVar4 = *(int *)(param_1 + iVar2 * 4);
      if (iVar4 < 0) {
        param_3 = param_3 + *(int *)(param_1 + iVar2 * 4);
        iVar4 = *(int *)(param_1 + (iVar1 + -2) * 4);
        iVar2 = iVar1 + -2;
      }
    }
    do {
      iVar3 = param_3;
      iVar4 = iVar1;
      param_3 = iVar3 + 1;
      iVar1 = iVar4 + 1;
      iVar2 = *(int *)(param_1 + 4 + iVar4 * 4);
      if (iVar2 < 0) {
        param_3 = param_3 - *(int *)(param_1 + iVar1 * 4);
        iVar1 = iVar4 + 2;
        iVar2 = *(int *)(param_1 + iVar1 * 4);
      }
    } while (iVar2 <= param_2);
    if (param_4 != (int *)0x0) {
      *param_4 = iVar4;
    }
    return iVar3;
  }
  return -1;
}




/* Function: FUN_004141ac */

void FUN_004141ac(undefined4 param_1,int param_2,int *param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  if (*param_3 == 5) {
    puVar2 = (undefined4 *)param_3[2];
  }
  else if (*param_3 == 6) {
    puVar2 = *(undefined4 **)param_3[2];
  }
  else {
    FUN_00412884(param_1,"value for `lua_getinfo\' is not a function");
  }
  if (*(short *)(puVar2 + 3) == 0) {
    FUN_00414230(param_2,*puVar2);
    puVar1 = *(undefined **)(param_2 + 0x1c);
  }
  else {
    puVar1 = &DAT_005872ec;
    *(undefined **)(param_2 + 0x1c) = &DAT_005872ec;
    *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
    *(undefined **)(param_2 + 0x18) = &DAT_00587044;
  }
  FUN_0041a0a0(param_2 + 0x20,puVar1,0x3c);
  if (*(int *)(param_2 + 0x14) == 0) {
    *(undefined **)(param_2 + 0x18) = &DAT_005872f0;
  }
  return;
}




/* Function: FUN_00414230 */

void FUN_00414230(int param_1,int param_2)

{
  *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x40) + 0x14;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined1 **)(param_1 + 0x18) = &DAT_005872bc;
  return;
}




/* Function: FUN_00414250 */

void FUN_00414250(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = (&PTR_s_userdata_005a233c)[*(int *)(param_2 + -0x20)];
  if (puVar1[2] != (&PTR_s_userdata_005a233c)[*(int *)(param_2 + -0x10)][2]) {
    FUN_0041a1c0(param_1,"attempt to compare %.10s with %.10s",puVar1,
                 (&PTR_s_userdata_005a233c)[*(int *)(param_2 + -0x10)]);
    return;
  }
  FUN_0041a1c0(param_1,"attempt to compare two %.10s values",puVar1);
  return;
}




/* Function: FUN_0041429c */

void FUN_0041429c(undefined4 param_1,int *param_2,int param_3,undefined4 param_4)

{
  if (*param_2 == param_3) {
    param_2 = param_2 + 4;
  }
  FUN_004142c0(param_1,param_2,param_4);
  return;
}




/* Function: FUN_004142c0 */

void FUN_004142c0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 unaff_ESI;
  
  iVar1 = FUN_00413d50(param_1,param_2,&stack0xfffffff4);
  if (iVar1 == 0) {
    FUN_0041a1c0(param_1,"attempt to %.30s a %.10s value",param_3,
                 (&PTR_s_userdata_005a233c)[*param_2]);
    return;
  }
  FUN_0041a1c0(param_1,"attempt to %.30s %.20s `%.40s\' (a %.10s value)",param_3,iVar1,unaff_ESI,
               (&PTR_s_userdata_005a233c)[*param_2]);
  return;
}




/* Function: FUN_0041431c */

void FUN_0041431c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0041433c(param_1,param_3);
  *puVar1 = param_2;
  *(undefined2 *)(puVar1 + 3) = 1;
  return;
}




/* Function: FUN_0041433c */

int FUN_0041433c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_0041a750(param_1,param_2);
  iVar3 = param_2 + -1;
  iVar4 = param_2 * -0x10 + *param_1;
  *param_1 = iVar4;
  if (param_2 != 0) {
    iVar4 = iVar3 * 0x10;
    do {
      iVar1 = *param_1;
      iVar3 = iVar3 + -1;
      *(undefined4 *)(iVar4 + 0x10 + iVar2) = *(undefined4 *)(iVar4 + iVar1);
      *(undefined4 *)(iVar4 + 0x14 + iVar2) = *(undefined4 *)(iVar4 + 4 + iVar1);
      *(undefined4 *)(iVar4 + 0x18 + iVar2) = *(undefined4 *)(iVar4 + 8 + iVar1);
      *(undefined4 *)(iVar4 + 0x1c + iVar2) = *(undefined4 *)(iVar4 + 0xc + iVar1);
      iVar4 = iVar4 + -0x10;
    } while (iVar3 != -1);
    iVar4 = *param_1;
  }
  *(int *)(iVar4 + 8) = iVar2;
  *(undefined4 *)*param_1 = 5;
  iVar3 = *param_1;
  if (iVar3 == param_1[2]) {
    FUN_00412294(param_1,1);
    iVar3 = *param_1;
  }
  *param_1 = iVar3 + 0x10;
  return iVar2;
}




/* Function: FUN_004143d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004143d0(uint *param_1,int *param_2,int param_3)

{
  double dVar1;
  uint uVar2;
  double dVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint local_4c;
  uint *local_48;
  uint local_44;
  uint *local_40;
  int local_3c;
  int local_34;
  uint *local_2c;
  int *local_28;
  int local_24;
  uint local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  
  while ((_DAT_005b71d0 & 0xffffff80) == 0) {
    if (_DAT_005b71d0 != 0) {
      local_28 = (int *)*param_2;
      local_58 = (uint *)local_28[6];
      local_24 = local_28[2];
      puVar9 = (uint *)param_1[0x1a];
      *(uint ***)(*(int *)(param_3 + -8) + 4) = &local_58;
      FUN_00412294(param_1,(short)local_28[9] + 8);
      if (*(short *)((int)local_28 + 0x22) == 0) {
        FUN_00411f08(param_1,param_3,(int)(short)local_28[8]);
      }
      else {
        FUN_004166c8(param_1,param_3,(int)(short)local_28[8]);
      }
      puVar7 = (uint *)*param_1;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      goto switchD_0041515b_default;
    }
    FUN_004d34fc();
  }
  local_28 = (int *)*param_2;
  local_54 = (uint *)local_28[6];
  puVar9 = (uint *)param_1[0x1a];
  local_24 = local_28[2];
  *(uint ***)(*(int *)(param_3 + -8) + 4) = &local_54;
  local_58 = (uint *)((short)local_28[9] + 8);
  FUN_00412294(param_1);
  if (*(short *)((int)local_28 + 0x22) == 0) {
    local_58 = (uint *)(int)(short)local_28[8];
    FUN_00411f08(param_1,param_3);
  }
  else {
    local_58 = (uint *)(int)(short)local_28[8];
    FUN_004166c8(param_1,param_3);
  }
  puVar7 = (uint *)*param_1;
  uVar10 = local_44;
  puVar11 = local_40;
  puVar4 = local_2c;
  do {
    local_2c = puVar4;
    local_40 = puVar11;
    local_44 = uVar10;
    puVar11 = local_54 + 1;
    uVar12 = *local_54;
    local_54 = puVar11;
    if (puVar9 != (uint *)0x0) {
      local_58 = puVar9;
      FUN_004167d0(param_1,param_3,puVar7);
    }
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    local_58 = puVar7;
    switch(uVar12 & 0x3f) {
    case 0:
      *param_1 = (uint)puVar7;
      return (int *)puVar7;
    case 1:
      *param_1 = (uint)puVar7;
      return (int *)(param_3 + (uVar12 >> 6) * 0x10);
    case 2:
      local_58 = (uint *)(uVar12 >> 6 & 0x1ff);
      if (local_58 == (uint *)0xff) {
        local_58 = (uint *)0xffffffff;
      }
      *param_1 = (uint)puVar7;
      FUN_0041209c(param_1,(uVar12 >> 0xf) * 0x10 + param_3);
      puVar7 = (uint *)*param_1;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      break;
    case 3:
      *param_1 = (uint)puVar7;
      local_58 = (uint *)0xffffffff;
      FUN_0041209c(param_1,(uVar12 >> 0xf) * 0x10 + param_3);
      return (int *)(param_3 + (uVar12 >> 6 & 0x1ff) * 0x10);
    case 4:
      local_50 = (uint *)(uVar12 >> 6);
      iVar8 = 0;
      puVar5 = local_50;
      do {
        *(undefined4 *)(iVar8 + (int)puVar7) = 1;
        puVar5 = (uint *)((int)puVar5 + -1);
        iVar8 = iVar8 + 0x10;
      } while (0 < (int)puVar5);
      puVar7 = puVar7 + (int)local_50 * 4;
      break;
    case 5:
      puVar7 = puVar7 + (uVar12 >> 6) * -4;
      break;
    case 6:
      *puVar7 = 2;
      local_34 = (uVar12 >> 6) + 0xfe000001;
      *(double *)(puVar7 + 2) = (double)local_34;
      puVar7 = puVar7 + 4;
      break;
    case 7:
      *puVar7 = 3;
      puVar7[2] = *(uint *)(local_24 + (uVar12 >> 6) * 4);
      puVar7 = puVar7 + 4;
      break;
    case 8:
      *puVar7 = 2;
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(*local_28 + (uVar12 >> 6) * 8);
      puVar7 = puVar7 + 4;
      break;
    case 9:
      *puVar7 = 2;
      *(double *)(puVar7 + 2) = -*(double *)(*local_28 + (uVar12 >> 6) * 8);
      puVar7 = puVar7 + 4;
      break;
    case 10:
      uVar12 = uVar12 >> 6;
      *puVar7 = param_2[uVar12 * 4 + 4];
      puVar7[1] = param_2[uVar12 * 4 + 5];
      puVar7[2] = param_2[uVar12 * 4 + 6];
      puVar7[3] = param_2[uVar12 * 4 + 7];
      puVar7 = puVar7 + 4;
      break;
    case 0xb:
      uVar12 = uVar12 >> 6;
      *puVar7 = *(uint *)(param_3 + uVar12 * 0x10);
      puVar7[1] = *(uint *)(param_3 + 4 + uVar12 * 0x10);
      puVar7[2] = *(uint *)(param_3 + 8 + uVar12 * 0x10);
      puVar7[3] = *(uint *)(param_3 + 0xc + uVar12 * 0x10);
      puVar7 = puVar7 + 4;
      break;
    case 0xc:
      *param_1 = (uint)puVar7;
      local_58 = *(uint **)(local_24 + (uVar12 >> 6) * 4);
      puVar11 = (uint *)FUN_004160f4(param_1);
      *puVar7 = *puVar11;
      puVar7[1] = puVar11[1];
      puVar7[2] = puVar11[2];
      puVar7[3] = puVar11[3];
      puVar7 = puVar7 + 4;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      break;
    case 0xd:
      *param_1 = (uint)puVar7;
      local_58 = puVar7 + -8;
      puVar11 = (uint *)FUN_00415ffc(param_1);
      puVar7[-8] = *puVar11;
      puVar7[-7] = puVar11[1];
      puVar7[-6] = puVar11[2];
      puVar7[-5] = puVar11[3];
      puVar7 = puVar7 + -4;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      break;
    case 0xe:
      *puVar7 = 3;
      puVar7[2] = *(uint *)(local_24 + (uVar12 >> 6) * 4);
      *param_1 = (uint)(puVar7 + 4);
      local_58 = puVar7 + -4;
      puVar11 = (uint *)FUN_00415ffc(param_1);
      puVar7[-4] = *puVar11;
      puVar7[-3] = puVar11[1];
      puVar7[-2] = puVar11[2];
      puVar7[-1] = puVar11[3];
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      break;
    case 0xf:
      uVar12 = uVar12 >> 6;
      *puVar7 = *(uint *)(param_3 + uVar12 * 0x10);
      puVar7[1] = *(uint *)(param_3 + 4 + uVar12 * 0x10);
      puVar7[2] = *(uint *)(param_3 + 8 + uVar12 * 0x10);
      puVar7[3] = *(uint *)(param_3 + 0xc + uVar12 * 0x10);
      *param_1 = (uint)(puVar7 + 4);
      local_58 = puVar7 + -4;
      puVar11 = (uint *)FUN_00415ffc(param_1);
      puVar7[-4] = *puVar11;
      puVar7[-3] = puVar11[1];
      puVar7[-2] = puVar11[2];
      puVar7[-1] = puVar11[3];
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      break;
    case 0x10:
      local_1c = (uint *)puVar7[-4];
      local_18 = (uint *)puVar7[-3];
      local_20 = puVar7[-2];
      local_14 = (uint *)puVar7[-1];
      *puVar7 = 3;
      puVar7[2] = *(uint *)(local_24 + (uVar12 >> 6) * 4);
      *param_1 = (uint)(puVar7 + 4);
      local_58 = puVar7 + -4;
      puVar11 = (uint *)FUN_00415ffc(param_1);
      puVar7[-4] = *puVar11;
      puVar7[-3] = puVar11[1];
      puVar7[-2] = puVar11[2];
      puVar7[-1] = puVar11[3];
      *puVar7 = (uint)local_1c;
      puVar7[1] = (uint)local_18;
      puVar7[2] = local_20;
      puVar7[3] = (uint)local_14;
      puVar7 = puVar7 + 4;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      break;
    case 0x11:
      *param_1 = (uint)puVar7;
      local_58 = param_1;
      FUN_00416850();
      uVar10 = FUN_004173f8(param_1,uVar12 >> 6);
      puVar7[2] = uVar10;
      *puVar7 = 4;
      puVar7 = puVar7 + 4;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      break;
    case 0x12:
      uVar12 = uVar12 >> 6;
      *(uint *)(param_3 + uVar12 * 0x10) = puVar7[-4];
      *(uint *)(param_3 + 4 + uVar12 * 0x10) = puVar7[-3];
      *(uint *)(param_3 + 8 + uVar12 * 0x10) = puVar7[-2];
      *(uint *)(param_3 + 0xc + uVar12 * 0x10) = puVar7[-1];
      puVar7 = puVar7 + -4;
      break;
    case 0x13:
      *param_1 = (uint)puVar7;
      local_58 = *(uint **)(local_24 + (uVar12 >> 6) * 4);
      FUN_00416188(param_1);
      puVar7 = puVar7 + -4;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      break;
    case 0x14:
      iVar8 = (int)puVar7 - (uVar12 >> 0xb & 0xfffffff0);
      local_58 = (uint *)(iVar8 + 0x10);
      *param_1 = (uint)puVar7;
      FUN_0041629c(param_1,iVar8);
      puVar7 = puVar7 + (uVar12 >> 6 & 0x1ff) * -4;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      break;
    case 0x15:
      uVar13 = uVar12 >> 6 & 0x1ff;
      uVar2 = puVar7[uVar13 * -4 + -2];
      *param_1 = (uint)(puVar7 + uVar13 * -4);
      if (uVar13 != 0) {
        puVar6 = (uint *)((uVar12 >> 0xf) * 0x3e + uVar13);
        puVar5 = puVar7;
        local_4c = uVar13;
        local_48 = puVar7;
        local_2c = puVar9;
        do {
          puVar7 = puVar5 + -4;
          local_58 = puVar6;
          puVar9 = (uint *)FUN_0041747c(param_1,uVar2);
          puVar6 = (uint *)((int)puVar6 + -1);
          uVar13 = uVar13 - 1;
          *puVar9 = *puVar7;
          puVar9[1] = puVar5[-3];
          puVar9[2] = puVar5[-2];
          puVar9[3] = puVar5[-1];
          puVar5 = puVar7;
          puVar9 = local_2c;
          uVar10 = local_44;
          puVar11 = local_40;
          puVar4 = local_2c;
        } while (uVar13 != 0);
      }
      break;
    case 0x16:
      uVar12 = uVar12 >> 6;
      uVar2 = (puVar7 + uVar12 * -8)[-2];
      *param_1 = (uint)(puVar7 + uVar12 * -8);
      local_44 = uVar12;
      local_40 = puVar7;
      for (; local_2c = puVar9, puVar9 = local_2c, uVar12 != 0; uVar12 = uVar12 - 1) {
        local_58 = puVar7 + -8;
        puVar9 = (uint *)FUN_004174a4(param_1,uVar2);
        *puVar9 = puVar7[-4];
        puVar9[1] = puVar7[-3];
        puVar9[2] = puVar7[-2];
        puVar9[3] = puVar7[-1];
        puVar7 = puVar7 + -8;
        puVar9 = local_2c;
        uVar10 = local_44;
        puVar11 = local_40;
        puVar4 = local_2c;
      }
      break;
    case 0x17:
      local_58 = puVar7 + -8;
      if (((puVar7[-8] == 2) || (iVar8 = FUN_00415d6c(), iVar8 == 0)) &&
         ((local_58 = puVar7 + -4, local_14 = local_58, puVar7[-4] == 2 ||
          (iVar8 = FUN_00415d6c(), iVar8 == 0)))) {
        *(double *)(puVar7 + -6) = *(double *)(puVar7 + -6) + *(double *)(local_14 + 2);
      }
      else {
        local_58 = (uint *)0x5;
        FUN_00416674(param_1,puVar7);
      }
      puVar7 = puVar7 + -4;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      break;
    case 0x18:
      local_58 = puVar7 + -4;
      local_14 = local_58;
      if ((puVar7[-4] == 2) || (iVar8 = FUN_00415d6c(), iVar8 == 0)) {
        local_34 = (uVar12 >> 6) + 0xfe000001;
        *(double *)(local_14 + 2) = (double)local_34 + *(double *)(local_14 + 2);
        uVar10 = local_44;
        puVar11 = local_40;
        puVar4 = local_2c;
      }
      else {
        *puVar7 = 2;
        local_3c = (uVar12 >> 6) + 0xfe000001;
        *(double *)(puVar7 + 2) = (double)local_3c;
        local_58 = (uint *)0x5;
        FUN_00416674(param_1,puVar7 + 4);
        uVar10 = local_44;
        puVar11 = local_40;
        puVar4 = local_2c;
      }
      break;
    case 0x19:
      local_58 = puVar7 + -8;
      if (((puVar7[-8] == 2) || (iVar8 = FUN_00415d6c(), iVar8 == 0)) &&
         ((local_58 = puVar7 + -4, local_14 = local_58, puVar7[-4] == 2 ||
          (iVar8 = FUN_00415d6c(), iVar8 == 0)))) {
        *(double *)(puVar7 + -6) = *(double *)(puVar7 + -6) - *(double *)(local_14 + 2);
      }
      else {
        local_58 = (uint *)0x6;
        FUN_00416674(param_1,puVar7);
      }
      puVar7 = puVar7 + -4;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      break;
    case 0x1a:
      local_58 = puVar7 + -8;
      if (((puVar7[-8] == 2) || (iVar8 = FUN_00415d6c(), iVar8 == 0)) &&
         ((local_58 = puVar7 + -4, local_14 = local_58, puVar7[-4] == 2 ||
          (iVar8 = FUN_00415d6c(), iVar8 == 0)))) {
        *(double *)(puVar7 + -6) = *(double *)(puVar7 + -6) * *(double *)(local_14 + 2);
      }
      else {
        local_58 = (uint *)0x7;
        FUN_00416674(param_1,puVar7);
      }
      puVar7 = puVar7 + -4;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      break;
    case 0x1b:
      local_58 = puVar7 + -8;
      if (((puVar7[-8] == 2) || (iVar8 = FUN_00415d6c(), iVar8 == 0)) &&
         ((local_58 = puVar7 + -4, local_14 = local_58, puVar7[-4] == 2 ||
          (iVar8 = FUN_00415d6c(), iVar8 == 0)))) {
        *(double *)(puVar7 + -6) = *(double *)(puVar7 + -6) / *(double *)(local_14 + 2);
      }
      else {
        local_58 = (uint *)0x8;
        FUN_00416674(param_1,puVar7);
      }
      puVar7 = puVar7 + -4;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      break;
    case 0x1c:
      local_58 = (uint *)0x9;
      iVar8 = FUN_004163a8(param_1,puVar7);
      if (iVar8 == 0) {
        local_58 = (uint *)0x5873ec;
        FUN_00412884(param_1);
      }
      puVar7 = puVar7 + -4;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      break;
    case 0x1d:
      FUN_0041643c(param_1,uVar12 >> 6);
      *param_1 = (uint)(puVar7 + (uVar12 >> 6) * -4 + 4);
      FUN_00416850(param_1);
      puVar7 = puVar7 + (uVar12 >> 6) * -4 + 4;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      break;
    case 0x1e:
      local_58 = puVar7 + -4;
      if ((puVar7[-4] == 2) || (iVar8 = FUN_00415d6c(), iVar8 == 0)) {
        *(double *)(puVar7 + -2) = -*(double *)(puVar7 + -2);
        uVar10 = local_44;
        puVar11 = local_40;
        puVar4 = local_2c;
      }
      else {
        *puVar7 = 1;
        local_58 = (uint *)0xa;
        FUN_00416674(param_1,puVar7 + 4);
        uVar10 = local_44;
        puVar11 = local_40;
        puVar4 = local_2c;
      }
      break;
    case 0x1f:
      if (puVar7[-4] == 1) {
        puVar7[-4] = 2;
      }
      else {
        puVar7[-4] = 1;
      }
      *(undefined8 *)(puVar7 + -2) = _DAT_005b92c8;
      break;
    case 0x20:
      puVar11 = puVar7 + -8;
      local_58 = puVar7 + -4;
      iVar8 = FUN_00419ee8(puVar11);
      puVar7 = puVar11;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      if (iVar8 == 0) {
        local_54 = local_54 + (uVar12 >> 6) + 0xfe000001;
      }
      break;
    case 0x21:
      puVar11 = puVar7 + -8;
      local_58 = puVar7 + -4;
      iVar8 = FUN_00419ee8(puVar11);
      puVar7 = puVar11;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      if (iVar8 != 0) {
        local_54 = local_54 + (uVar12 >> 6) + 0xfe000001;
      }
      break;
    case 0x22:
      puVar11 = puVar7 + -8;
      iVar8 = FUN_00415da8(param_1,puVar11,puVar7 + -4);
      puVar7 = puVar11;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      if (iVar8 != 0) {
        local_54 = local_54 + (uVar12 >> 6) + 0xfe000001;
      }
      break;
    case 0x23:
      puVar11 = puVar7 + -8;
      iVar8 = FUN_00415da8(param_1,puVar7 + -4,puVar11);
      puVar7 = puVar11;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      if (iVar8 == 0) {
        local_54 = local_54 + (uVar12 >> 6) + 0xfe000001;
      }
      break;
    case 0x24:
      puVar11 = puVar7 + -8;
      iVar8 = FUN_00415da8(param_1,puVar7 + -4,puVar11);
      puVar7 = puVar11;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      if (iVar8 != 0) {
        local_54 = local_54 + (uVar12 >> 6) + 0xfe000001;
      }
      break;
    case 0x25:
      puVar11 = puVar7 + -8;
      iVar8 = FUN_00415da8(param_1,puVar11,puVar7 + -4);
      puVar7 = puVar11;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      if (iVar8 == 0) {
        local_54 = local_54 + (uVar12 >> 6) + 0xfe000001;
      }
      break;
    case 0x26:
      puVar7 = puVar7 + -4;
      if (*puVar7 != 1) {
        local_54 = local_54 + (uVar12 >> 6) + 0xfe000001;
      }
      break;
    case 0x27:
      puVar7 = puVar7 + -4;
      if (*puVar7 == 1) {
        local_54 = local_54 + (uVar12 >> 6) + 0xfe000001;
      }
      break;
    case 0x28:
      if (puVar7[-4] == 1) {
        puVar7 = puVar7 + -4;
      }
      else {
        local_54 = local_54 + (uVar12 >> 6) + 0xfe000001;
      }
      break;
    case 0x29:
      if (puVar7[-4] == 1) {
        local_54 = local_54 + (uVar12 >> 6) + 0xfe000001;
      }
      else {
        puVar7 = puVar7 + -4;
      }
      break;
    case 0x2a:
      local_54 = local_54 + (uVar12 >> 6) + 0xfe000001;
      break;
    case 0x2b:
      *puVar7 = 1;
      local_54 = local_54 + 1;
      puVar7 = puVar7 + 4;
      break;
    case 0x2c:
      local_58 = puVar7 + -4;
      local_1c = local_58;
      if ((puVar7[-4] != 2) && (iVar8 = FUN_00415d6c(), iVar8 != 0)) {
        local_58 = (uint *)0x587400;
        FUN_00412884(param_1);
      }
      local_58 = puVar7 + -8;
      local_14 = local_58;
      if ((puVar7[-8] != 2) && (iVar8 = FUN_00415d6c(), iVar8 != 0)) {
        local_58 = (uint *)0x58741c;
        FUN_00412884(param_1);
      }
      local_58 = puVar7 + -0xc;
      local_18 = local_58;
      if ((puVar7[-0xc] != 2) && (iVar8 = FUN_00415d6c(), iVar8 != 0)) {
        local_58 = (uint *)0x58743c;
        FUN_00412884(param_1);
      }
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      if (*(double *)(local_1c + 2) <= _DAT_005b92c0) {
        if (*(double *)(local_14 + 2) <= *(double *)(local_18 + 2)) break;
      }
      else if (*(double *)(local_18 + 2) <= *(double *)(local_14 + 2)) break;
      local_54 = local_54 + (uVar12 >> 6) + 0xfe000001;
      puVar7 = puVar7 + -0xc;
      break;
    case 0x2d:
      local_14 = puVar7 + -0xc;
      if (puVar7[-0xc] != 2) {
        local_58 = (uint *)0x587464;
        FUN_00412884(param_1);
      }
      dVar1 = *(double *)(puVar7 + -2);
      dVar3 = *(double *)(local_14 + 2) + dVar1;
      *(double *)(local_14 + 2) = dVar3;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      if (dVar1 <= _DAT_005b92c0) {
        if (dVar3 < *(double *)(puVar7 + -6)) goto LAB_004145f7;
      }
      else if (*(double *)(puVar7 + -6) < dVar3) {
LAB_004145f7:
        puVar7 = puVar7 + -0xc;
        break;
      }
      local_54 = local_54 + (uVar12 >> 6) + 0xfe000001;
      break;
    case 0x2e:
      local_14 = puVar7 + -4;
      if (puVar7[-4] != 4) {
        local_58 = (uint *)0x587484;
        FUN_00412884(param_1);
      }
      local_58 = (uint *)&DAT_005b94a8;
      puVar5 = (uint *)FUN_004170a4(param_1,local_14[2]);
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      if (puVar5 == (uint *)0x0) {
        local_54 = local_54 + (uVar12 >> 6) + 0xfe000001;
        puVar7 = puVar7 + -4;
      }
      else {
        *puVar7 = *puVar5;
        puVar7[1] = puVar5[1];
        puVar7[2] = puVar5[2];
        puVar7[3] = puVar5[3];
        puVar7[4] = puVar5[4];
        puVar7[5] = puVar5[5];
        puVar7[6] = puVar5[6];
        puVar7[7] = puVar5[7];
        puVar7 = puVar7 + 8;
      }
      break;
    case 0x2f:
      local_58 = puVar7 + -8;
      local_18 = local_58;
      puVar5 = (uint *)FUN_004170a4(param_1,puVar7[-10]);
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
      if (puVar5 == (uint *)0x0) {
        puVar7 = puVar7 + -0xc;
      }
      else {
        *local_18 = *puVar5;
        local_18[1] = puVar5[1];
        local_18[2] = puVar5[2];
        local_18[3] = puVar5[3];
        puVar7[-4] = puVar5[4];
        puVar7[-3] = puVar5[5];
        puVar7[-2] = puVar5[6];
        puVar7[-1] = puVar5[7];
        local_54 = local_54 + (uVar12 >> 6) + 0xfe000001;
      }
      break;
    case 0x30:
      *param_1 = (uint)puVar7;
      local_58 = (uint *)(uVar12 >> 6 & 0x1ff);
      FUN_004166a8(param_1,*(undefined4 *)(local_28[4] + (uVar12 >> 0xf) * 4));
      puVar7 = (uint *)*param_1;
      FUN_00416850(param_1);
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
    }
  } while( true );
switchD_0041515b_default:
  local_2c = puVar4;
  local_40 = puVar11;
  local_44 = uVar10;
  puVar5 = puVar7;
  puVar7 = local_58 + 1;
  uVar12 = *local_58;
  local_58 = puVar7;
  if (puVar9 != (uint *)0x0) {
    FUN_004167d0(param_1,param_3,puVar5,puVar9);
  }
  puVar7 = puVar5;
  uVar10 = local_44;
  puVar11 = local_40;
  puVar4 = local_2c;
  switch(uVar12 & 0x3f) {
  case 0:
    *param_1 = (uint)puVar5;
    return (int *)puVar5;
  case 1:
    *param_1 = (uint)puVar5;
    return (int *)(param_3 + (uVar12 >> 6) * 0x10);
  case 2:
    uVar10 = uVar12 >> 6 & 0x1ff;
    if (uVar10 == 0xff) {
      uVar10 = 0xffffffff;
    }
    *param_1 = (uint)puVar5;
    FUN_0041209c(param_1,(uVar12 >> 0xf) * 0x10 + param_3,uVar10);
    puVar7 = (uint *)*param_1;
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    break;
  case 3:
    *param_1 = (uint)puVar5;
    FUN_0041209c(param_1,(uVar12 >> 0xf) * 0x10 + param_3,0xffffffff);
    return (int *)(param_3 + (uVar12 >> 6 & 0x1ff) * 0x10);
  case 4:
    local_54 = (uint *)(uVar12 >> 6);
    puVar6 = local_54;
    do {
      *puVar7 = 1;
      puVar6 = (uint *)((int)puVar6 - 1);
      puVar7 = puVar7 + 4;
      local_50 = puVar5;
    } while (0 < (int)puVar6);
    break;
  case 5:
    puVar7 = puVar5 + (uVar12 >> 6) * -4;
    break;
  case 6:
    *puVar5 = 2;
    local_34 = (uVar12 >> 6) + 0xfe000001;
    *(double *)(puVar5 + 2) = (double)local_34;
    puVar7 = puVar5 + 4;
    break;
  case 7:
    *puVar5 = 3;
    puVar5[2] = *(uint *)(local_24 + (uVar12 >> 6) * 4);
    puVar7 = puVar5 + 4;
    break;
  case 8:
    *puVar5 = 2;
    uVar2 = *(uint *)(*local_28 + 4 + (uVar12 >> 6) * 8);
    puVar5[2] = *(uint *)(*local_28 + (uVar12 >> 6) * 8);
    puVar5[3] = uVar2;
    puVar7 = puVar5 + 4;
    break;
  case 9:
    *puVar5 = 2;
    *(double *)(puVar5 + 2) = -*(double *)(*local_28 + (uVar12 >> 6) * 8);
    puVar7 = puVar5 + 4;
    break;
  case 10:
    uVar12 = uVar12 >> 6;
    *puVar5 = param_2[uVar12 * 4 + 4];
    puVar5[1] = param_2[uVar12 * 4 + 5];
    puVar5[2] = param_2[uVar12 * 4 + 6];
    puVar5[3] = param_2[uVar12 * 4 + 7];
    puVar7 = puVar5 + 4;
    break;
  case 0xb:
    uVar12 = uVar12 >> 6;
    *puVar5 = *(uint *)(param_3 + uVar12 * 0x10);
    puVar5[1] = *(uint *)(param_3 + 4 + uVar12 * 0x10);
    puVar5[2] = *(uint *)(param_3 + 8 + uVar12 * 0x10);
    puVar5[3] = *(uint *)(param_3 + 0xc + uVar12 * 0x10);
    puVar7 = puVar5 + 4;
    break;
  case 0xc:
    *param_1 = (uint)puVar5;
    puVar7 = (uint *)FUN_004160f4(param_1,*(undefined4 *)(local_24 + (uVar12 >> 6) * 4));
    *puVar5 = *puVar7;
    puVar5[1] = puVar7[1];
    puVar5[2] = puVar7[2];
    puVar5[3] = puVar7[3];
    puVar7 = puVar5 + 4;
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    break;
  case 0xd:
    *param_1 = (uint)puVar5;
    puVar7 = (uint *)FUN_00415ffc(param_1,puVar5 + -8);
    puVar5[-8] = *puVar7;
    puVar5[-7] = puVar7[1];
    puVar5[-6] = puVar7[2];
    puVar5[-5] = puVar7[3];
    puVar7 = puVar5 + -4;
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    break;
  case 0xe:
    *puVar5 = 3;
    puVar5[2] = *(uint *)(local_24 + (uVar12 >> 6) * 4);
    *param_1 = (uint)(puVar5 + 4);
    puVar11 = (uint *)FUN_00415ffc(param_1,puVar5 + -4);
    puVar5[-4] = *puVar11;
    puVar5[-3] = puVar11[1];
    puVar5[-2] = puVar11[2];
    puVar5[-1] = puVar11[3];
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    break;
  case 0xf:
    uVar12 = uVar12 >> 6;
    *puVar5 = *(uint *)(param_3 + uVar12 * 0x10);
    puVar5[1] = *(uint *)(param_3 + 4 + uVar12 * 0x10);
    puVar5[2] = *(uint *)(param_3 + 8 + uVar12 * 0x10);
    puVar5[3] = *(uint *)(param_3 + 0xc + uVar12 * 0x10);
    *param_1 = (uint)(puVar5 + 4);
    puVar11 = (uint *)FUN_00415ffc(param_1,puVar5 + -4);
    puVar5[-4] = *puVar11;
    puVar5[-3] = puVar11[1];
    puVar5[-2] = puVar11[2];
    puVar5[-1] = puVar11[3];
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    break;
  case 0x10:
    local_1c = (uint *)puVar5[-4];
    local_14 = (uint *)puVar5[-3];
    local_18 = (uint *)puVar5[-2];
    local_20 = puVar5[-1];
    *puVar5 = 3;
    puVar5[2] = *(uint *)(local_24 + (uVar12 >> 6) * 4);
    *param_1 = (uint)(puVar5 + 4);
    puVar7 = (uint *)FUN_00415ffc(param_1,puVar5 + -4);
    puVar5[-4] = *puVar7;
    puVar5[-3] = puVar7[1];
    puVar5[-2] = puVar7[2];
    puVar5[-1] = puVar7[3];
    *puVar5 = (uint)local_1c;
    puVar5[1] = (uint)local_14;
    puVar5[2] = (uint)local_18;
    puVar5[3] = local_20;
    puVar7 = puVar5 + 4;
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    break;
  case 0x11:
    *param_1 = (uint)puVar5;
    FUN_00416850(param_1);
    uVar10 = FUN_004173f8(param_1,uVar12 >> 6);
    puVar5[2] = uVar10;
    *puVar5 = 4;
    puVar7 = puVar5 + 4;
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    break;
  case 0x12:
    uVar12 = uVar12 >> 6;
    *(uint *)(param_3 + uVar12 * 0x10) = puVar5[-4];
    *(uint *)(param_3 + 4 + uVar12 * 0x10) = puVar5[-3];
    *(uint *)(param_3 + 8 + uVar12 * 0x10) = puVar5[-2];
    *(uint *)(param_3 + 0xc + uVar12 * 0x10) = puVar5[-1];
    puVar7 = puVar5 + -4;
    break;
  case 0x13:
    *param_1 = (uint)puVar5;
    FUN_00416188(param_1,*(undefined4 *)(local_24 + (uVar12 >> 6) * 4));
    puVar7 = puVar5 + -4;
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    break;
  case 0x14:
    iVar8 = (int)puVar5 - (uVar12 >> 0xb & 0xfffffff0);
    *param_1 = (uint)puVar5;
    FUN_0041629c(param_1,iVar8,iVar8 + 0x10);
    puVar7 = puVar5 + (uVar12 >> 6 & 0x1ff) * -4;
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    break;
  case 0x15:
    uVar13 = uVar12 >> 6 & 0x1ff;
    uVar2 = puVar5[uVar13 * -4 + -2];
    *param_1 = (uint)(puVar5 + uVar13 * -4);
    if (uVar13 != 0) {
      iVar8 = (uVar12 >> 0xf) * 0x3e + uVar13;
      local_4c = uVar13;
      local_48 = puVar5;
      local_2c = puVar9;
      do {
        puVar7 = puVar5 + -4;
        puVar9 = (uint *)FUN_0041747c(param_1,uVar2,iVar8);
        *puVar9 = *puVar7;
        puVar9[1] = puVar5[-3];
        puVar9[2] = puVar5[-2];
        puVar9[3] = puVar5[-1];
        iVar8 = iVar8 + -1;
        uVar13 = uVar13 - 1;
        puVar5 = puVar7;
        puVar9 = local_2c;
        uVar10 = local_44;
        puVar11 = local_40;
        puVar4 = local_2c;
      } while (uVar13 != 0);
    }
    break;
  case 0x16:
    uVar12 = uVar12 >> 6;
    uVar2 = puVar5[uVar12 * -8 + -2];
    *param_1 = (uint)(puVar5 + uVar12 * -8);
    local_44 = uVar12;
    local_40 = puVar5;
    for (; local_2c = puVar9, puVar7 = puVar5, puVar9 = local_2c, uVar12 != 0; uVar12 = uVar12 - 1)
    {
      puVar9 = (uint *)FUN_004174a4(param_1,uVar2,puVar5 + -8);
      *puVar9 = puVar5[-4];
      puVar9[1] = puVar5[-3];
      puVar9[2] = puVar5[-2];
      puVar9[3] = puVar5[-1];
      puVar5 = puVar5 + -8;
      puVar9 = local_2c;
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
    }
    break;
  case 0x17:
    if (((puVar5[-8] == 2) || (iVar8 = FUN_00415d6c(puVar5 + -8), iVar8 == 0)) &&
       ((local_14 = puVar5 + -4, puVar5[-4] == 2 || (iVar8 = FUN_00415d6c(local_14), iVar8 == 0))))
    {
      *(double *)(puVar5 + -6) = *(double *)(puVar5 + -6) + *(double *)(local_14 + 2);
    }
    else {
      FUN_00416674(param_1,puVar5,5);
    }
    puVar7 = puVar5 + -4;
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    break;
  case 0x18:
    local_14 = puVar5 + -4;
    if ((puVar5[-4] == 2) || (iVar8 = FUN_00415d6c(local_14), iVar8 == 0)) {
      local_34 = (uVar12 >> 6) + 0xfe000001;
      *(double *)(local_14 + 2) = (double)local_34 + *(double *)(local_14 + 2);
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
    }
    else {
      *puVar5 = 2;
      local_3c = (uVar12 >> 6) + 0xfe000001;
      *(double *)(puVar5 + 2) = (double)local_3c;
      FUN_00416674(param_1,puVar5 + 4,5);
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
    }
    break;
  case 0x19:
    if (((puVar5[-8] == 2) || (iVar8 = FUN_00415d6c(puVar5 + -8), iVar8 == 0)) &&
       ((local_14 = puVar5 + -4, puVar5[-4] == 2 || (iVar8 = FUN_00415d6c(local_14), iVar8 == 0))))
    {
      *(double *)(puVar5 + -6) = *(double *)(puVar5 + -6) - *(double *)(local_14 + 2);
    }
    else {
      FUN_00416674(param_1,puVar5,6);
    }
    puVar7 = puVar5 + -4;
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    break;
  case 0x1a:
    if (((puVar5[-8] == 2) || (iVar8 = FUN_00415d6c(puVar5 + -8), iVar8 == 0)) &&
       ((local_14 = puVar5 + -4, puVar5[-4] == 2 || (iVar8 = FUN_00415d6c(local_14), iVar8 == 0))))
    {
      *(double *)(puVar5 + -6) = *(double *)(puVar5 + -6) * *(double *)(local_14 + 2);
    }
    else {
      FUN_00416674(param_1,puVar5,7);
    }
    puVar7 = puVar5 + -4;
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    break;
  case 0x1b:
    if (((puVar5[-8] == 2) || (iVar8 = FUN_00415d6c(puVar5 + -8), iVar8 == 0)) &&
       ((local_14 = puVar5 + -4, puVar5[-4] == 2 || (iVar8 = FUN_00415d6c(local_14), iVar8 == 0))))
    {
      *(double *)(puVar5 + -6) = *(double *)(puVar5 + -6) / *(double *)(local_14 + 2);
    }
    else {
      FUN_00416674(param_1,puVar5,8);
    }
    puVar7 = puVar5 + -4;
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    break;
  case 0x1c:
    iVar8 = FUN_004163a8(param_1,puVar5,9);
    if (iVar8 == 0) {
      FUN_00412884(param_1,"undefined operation");
    }
    puVar7 = puVar5 + -4;
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    break;
  case 0x1d:
    FUN_0041643c(param_1,uVar12 >> 6,puVar5);
    *param_1 = (uint)(puVar5 + (uVar12 >> 6) * -4 + 4);
    FUN_00416850(param_1);
    puVar7 = puVar5 + (uVar12 >> 6) * -4 + 4;
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    break;
  case 0x1e:
    if ((puVar5[-4] == 2) || (iVar8 = FUN_00415d6c(puVar5 + -4), iVar8 == 0)) {
      *(double *)(puVar5 + -2) = -*(double *)(puVar5 + -2);
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
    }
    else {
      *puVar5 = 1;
      FUN_00416674(param_1,puVar5 + 4,10);
      uVar10 = local_44;
      puVar11 = local_40;
      puVar4 = local_2c;
    }
    break;
  case 0x1f:
    if (puVar5[-4] == 1) {
      puVar5[-4] = 2;
    }
    else {
      puVar5[-4] = 1;
    }
    puVar5[-2] = 0;
    puVar5[-1] = 0x3ff00000;
    break;
  case 0x20:
    puVar7 = puVar5 + -8;
    iVar8 = FUN_00419ee8(puVar7,puVar5 + -4);
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    if (iVar8 == 0) {
      local_58 = local_58 + (uVar12 >> 6) + 0xfe000001;
    }
    break;
  case 0x21:
    puVar7 = puVar5 + -8;
    iVar8 = FUN_00419ee8(puVar7,puVar5 + -4);
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    if (iVar8 != 0) {
      local_58 = local_58 + (uVar12 >> 6) + 0xfe000001;
    }
    break;
  case 0x22:
    puVar7 = puVar5 + -8;
    iVar8 = FUN_00415da8(param_1,puVar7,puVar5 + -4,puVar5);
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    if (iVar8 != 0) {
      local_58 = local_58 + (uVar12 >> 6) + 0xfe000001;
    }
    break;
  case 0x23:
    puVar7 = puVar5 + -8;
    iVar8 = FUN_00415da8(param_1,puVar5 + -4,puVar7,puVar5);
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    if (iVar8 == 0) {
      local_58 = local_58 + (uVar12 >> 6) + 0xfe000001;
    }
    break;
  case 0x24:
    puVar7 = puVar5 + -8;
    iVar8 = FUN_00415da8(param_1,puVar5 + -4,puVar7,puVar5);
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    if (iVar8 != 0) {
      local_58 = local_58 + (uVar12 >> 6) + 0xfe000001;
    }
    break;
  case 0x25:
    puVar7 = puVar5 + -8;
    iVar8 = FUN_00415da8(param_1,puVar7,puVar5 + -4,puVar5);
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    if (iVar8 == 0) {
      local_58 = local_58 + (uVar12 >> 6) + 0xfe000001;
    }
    break;
  case 0x26:
    puVar7 = puVar5 + -4;
    if (*puVar7 != 1) {
      local_58 = local_58 + (uVar12 >> 6) + 0xfe000001;
    }
    break;
  case 0x27:
    puVar7 = puVar5 + -4;
    if (*puVar7 == 1) {
      local_58 = local_58 + (uVar12 >> 6) + 0xfe000001;
    }
    break;
  case 0x28:
    if (puVar5[-4] == 1) {
      puVar7 = puVar5 + -4;
    }
    else {
      local_58 = local_58 + (uVar12 >> 6) + 0xfe000001;
    }
    break;
  case 0x29:
    if (puVar5[-4] == 1) {
      local_58 = local_58 + (uVar12 >> 6) + 0xfe000001;
    }
    else {
      puVar7 = puVar5 + -4;
    }
    break;
  case 0x2a:
    local_58 = local_58 + (uVar12 >> 6) + 0xfe000001;
    break;
  case 0x2b:
    *puVar5 = 1;
    local_58 = local_58 + 1;
    puVar7 = puVar5 + 4;
    break;
  case 0x2c:
    local_14 = puVar5 + -4;
    if ((puVar5[-4] != 2) && (iVar8 = FUN_00415d6c(local_14), iVar8 != 0)) {
      FUN_00412884(param_1,"`for\' step must be a number");
    }
    local_1c = puVar5 + -8;
    if ((puVar5[-8] != 2) && (iVar8 = FUN_00415d6c(local_1c), iVar8 != 0)) {
      FUN_00412884(param_1,"`for\' limit must be a number");
    }
    local_18 = puVar5 + -0xc;
    if ((puVar5[-0xc] != 2) && (iVar8 = FUN_00415d6c(local_18), iVar8 != 0)) {
      FUN_00412884(param_1,"`for\' initial value must be a number");
    }
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    if (*(double *)(local_14 + 2) <= _DAT_005b93a8) {
      if (*(double *)(local_1c + 2) <= *(double *)(local_18 + 2)) break;
    }
    else if (*(double *)(local_18 + 2) <= *(double *)(local_1c + 2)) break;
    local_58 = local_58 + (uVar12 >> 6) + 0xfe000001;
    puVar7 = puVar5 + -0xc;
    break;
  case 0x2d:
    local_14 = puVar5 + -0xc;
    if (puVar5[-0xc] != 2) {
      FUN_00412884(param_1,"`for\' index must be a number");
    }
    dVar1 = *(double *)(puVar5 + -2);
    dVar3 = *(double *)(local_14 + 2) + dVar1;
    *(double *)(local_14 + 2) = dVar3;
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    if (dVar1 <= _DAT_005b93a8) {
      if (dVar3 < *(double *)(puVar5 + -6)) goto LAB_004152af;
    }
    else if (*(double *)(puVar5 + -6) < dVar3) {
LAB_004152af:
      puVar7 = puVar5 + -0xc;
      break;
    }
    local_58 = local_58 + (uVar12 >> 6) + 0xfe000001;
    break;
  case 0x2e:
    local_14 = puVar5 + -4;
    if (puVar5[-4] != 4) {
      FUN_00412884(param_1,"`for\' table must be a table");
    }
    puVar7 = (uint *)FUN_004170a4(param_1,local_14[2],&DAT_005b94a8);
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    if (puVar7 == (uint *)0x0) {
      local_58 = local_58 + (uVar12 >> 6) + 0xfe000001;
      puVar7 = puVar5 + -4;
    }
    else {
      *puVar5 = *puVar7;
      puVar5[1] = puVar7[1];
      puVar5[2] = puVar7[2];
      puVar5[3] = puVar7[3];
      puVar5[4] = puVar7[4];
      puVar5[5] = puVar7[5];
      puVar5[6] = puVar7[6];
      puVar5[7] = puVar7[7];
      puVar7 = puVar5 + 8;
    }
    break;
  case 0x2f:
    local_18 = puVar5 + -8;
    puVar6 = (uint *)FUN_004170a4(param_1,puVar5[-10],local_18);
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
    if (puVar6 == (uint *)0x0) {
      puVar7 = puVar5 + -0xc;
    }
    else {
      *local_18 = *puVar6;
      local_18[1] = puVar6[1];
      local_18[2] = puVar6[2];
      local_18[3] = puVar6[3];
      puVar5[-4] = puVar6[4];
      puVar5[-3] = puVar6[5];
      puVar5[-2] = puVar6[6];
      puVar5[-1] = puVar6[7];
      local_58 = local_58 + (uVar12 >> 6) + 0xfe000001;
    }
    break;
  case 0x30:
    *param_1 = (uint)puVar5;
    FUN_004166a8(param_1,*(undefined4 *)(local_28[4] + (uVar12 >> 0xf) * 4),uVar12 >> 6 & 0x1ff);
    puVar7 = (uint *)*param_1;
    FUN_00416850(param_1);
    uVar10 = local_44;
    puVar11 = local_40;
    puVar4 = local_2c;
  }
  goto switchD_0041515b_default;
}




/* Function: FUN_00415d6c */

undefined4 FUN_00415d6c(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 3) {
    return 1;
  }
  iVar1 = FUN_0041a030(param_1[2] + 0x14,param_1 + 2);
  if (iVar1 == 0) {
    return 2;
  }
  *param_1 = 2;
  return 0;
}




/* Function: FUN_00415da8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00415da8(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xffffff80) != 0) {
      if ((*param_2 == 2) && (*param_3 == 2)) {
        return (uint)(*(double *)(param_2 + 2) < *(double *)(param_3 + 2));
      }
      if ((*param_2 == 3) && (*param_3 == 3)) {
        uVar2 = FUN_00415f7c(param_2[2],param_3[2]);
        return uVar2 >> 0x1f;
      }
      FUN_00412294(param_1,2);
      *param_4 = *param_2;
      param_4[1] = param_2[1];
      param_4[2] = param_2[2];
      param_4[3] = param_2[3];
      param_4[4] = *param_3;
      param_4[5] = param_3[1];
      param_4[6] = param_3[2];
      param_4[7] = param_3[3];
      iVar1 = FUN_004163a8(param_1,param_4 + 8,0xb);
      if (iVar1 == 0) {
        FUN_00414250(param_1,param_4);
      }
      iVar1 = *param_1;
      *param_1 = iVar1 + -0x10;
      return (uint)(*(int *)(iVar1 + -0x10) != 1);
    }
    if (_DAT_005b71d0 != 0) break;
    FUN_004d34fc();
  }
  if ((*param_2 == 2) && (*param_3 == 2)) {
    return (uint)(*(double *)(param_2 + 2) < *(double *)(param_3 + 2));
  }
  if ((*param_2 == 3) && (*param_3 == 3)) {
    uVar2 = FUN_00415f7c(param_2[2],param_3[2]);
    return uVar2 >> 0x1f;
  }
  FUN_00412294(param_1,2);
  *param_4 = *param_2;
  param_4[1] = param_2[1];
  param_4[2] = param_2[2];
  param_4[3] = param_2[3];
  param_4[4] = *param_3;
  param_4[5] = param_3[1];
  param_4[6] = param_3[2];
  param_4[7] = param_3[3];
  iVar1 = FUN_004163a8(param_1,param_4 + 8,0xb);
  if (iVar1 == 0) {
    FUN_00414250(param_1,param_4);
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + -0x10;
  return (uint)(*(int *)(iVar1 + -0x10) != 1);
}




/* Function: FUN_00415f7c */

int FUN_00415f7c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *_Str2;
  char *_Str1;
  
  _Str1 = (char *)(param_1 + 0x14);
  iVar4 = *(int *)(param_1 + 8);
  _Str2 = (char *)(param_2 + 0x14);
  iVar5 = *(int *)(param_2 + 8);
  while( true ) {
    iVar2 = strcoll(_Str1,_Str2);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    cVar1 = *_Str1;
    pcVar3 = _Str1;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      iVar2 = iVar2 + 1;
      cVar1 = *pcVar3;
    }
    if (iVar2 == iVar4) break;
    if (iVar2 == iVar5) {
      return 1;
    }
    _Str1 = _Str1 + iVar2 + 1;
    iVar4 = iVar4 - (iVar2 + 1);
    _Str2 = _Str2 + iVar2 + 1;
    iVar5 = iVar5 - (iVar2 + 1);
  }
  if (iVar2 != iVar5) {
    return -1;
  }
  return 0;
}




/* Function: FUN_00415ffc */

int * FUN_00415ffc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_2 == 4) {
    iVar2 = *(int *)(param_2[2] + 4);
    if ((iVar2 == 4) || (*(int *)(param_1[0x12] + iVar2 * 0x40) == 0)) {
      piVar3 = (int *)FUN_00417124(param_1,param_2[2],*param_1 + -0x10);
      if ((*piVar3 != 1) || (iVar2 = *(int *)(param_1[0x12] + 8 + iVar2 * 0x40), iVar2 == 0)) {
        return piVar3;
      }
      goto LAB_00416024;
    }
  }
  iVar2 = FUN_004136c0(param_2);
  iVar2 = *(int *)(param_1[0x12] + iVar2 * 0x40);
LAB_00416024:
  if (iVar2 == 0) {
    FUN_004142c0(param_1,param_2,"index");
    return (int *)0x0;
  }
  FUN_00412294(param_1,2);
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + -0x10);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + -0xc);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + -8);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + -4);
  piVar3 = (int *)*param_1;
  *piVar3 = *param_2;
  piVar3[1] = param_2[1];
  piVar3[2] = param_2[2];
  piVar3[3] = param_2[3];
  *(int *)(*param_1 + -8) = iVar2;
  *(undefined4 *)(*param_1 + -0x10) = 5;
  iVar2 = *param_1;
  *param_1 = iVar2 + 0x20;
  FUN_0041209c(param_1,iVar2 + -0x10,1);
  return (int *)(*param_1 + -0x10);
}




/* Function: FUN_004160f4 */

undefined4 * FUN_004160f4(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_004171c0(param_1[0x11],param_2);
  iVar2 = FUN_004136c0(puVar1);
  iVar2 = *(int *)(param_1[0x12] + 0xc + iVar2 * 0x40);
  if (iVar2 != 0) {
    FUN_00412294(param_1,3);
    *(int *)(*param_1 + 8) = iVar2;
    *(undefined4 *)*param_1 = 5;
    *(undefined4 *)(*param_1 + 0x18) = param_2;
    *(undefined4 *)(*param_1 + 0x10) = 3;
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x20) = *puVar1;
    *(undefined4 *)(iVar2 + 0x24) = puVar1[1];
    *(undefined4 *)(iVar2 + 0x28) = puVar1[2];
    *(undefined4 *)(iVar2 + 0x2c) = puVar1[3];
    iVar2 = *param_1;
    *param_1 = iVar2 + 0x30;
    FUN_0041209c(param_1,iVar2,1);
    return (undefined4 *)(*param_1 + -0x10);
  }
  return puVar1;
}




/* Function: FUN_00416188 */

void FUN_00416188(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  puVar2 = (undefined4 *)FUN_004171c0(param_1[0x11],param_2);
  iVar3 = FUN_004136c0(puVar2);
  iVar3 = *(int *)(param_1[0x12] + 0x10 + iVar3 * 0x40);
  if (iVar3 != 0) {
    FUN_00412294(param_1,3);
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + -0x10);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + -0xc);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar1 + -8);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + -4);
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x10) = *puVar2;
    *(undefined4 *)(iVar1 + 0x14) = puVar2[1];
    *(undefined4 *)(iVar1 + 0x18) = puVar2[2];
    *(undefined4 *)(iVar1 + 0x1c) = puVar2[3];
    *(undefined4 *)*param_1 = 3;
    *(undefined4 *)(*param_1 + 8) = param_2;
    *(int *)(*param_1 + -8) = iVar3;
    *(undefined4 *)(*param_1 + -0x10) = 5;
    iVar3 = *param_1;
    *param_1 = iVar3 + 0x30;
    FUN_0041209c(param_1,iVar3 + -0x10,0);
    return;
  }
  if (puVar2 != (undefined4 *)&DAT_005b94a8) {
    iVar3 = *param_1;
    *puVar2 = *(undefined4 *)(iVar3 + -0x10);
    puVar2[1] = *(undefined4 *)(iVar3 + -0xc);
    puVar2[2] = *(undefined4 *)(iVar3 + -8);
    puVar2[3] = *(undefined4 *)(iVar3 + -4);
    return;
  }
  local_20[0] = 3;
  local_18 = param_2;
  puVar2 = (undefined4 *)FUN_004174a4(param_1,param_1[0x11],local_20);
  iVar3 = *param_1;
  *puVar2 = *(undefined4 *)(iVar3 + -0x10);
  puVar2[1] = *(undefined4 *)(iVar3 + -0xc);
  puVar2[2] = *(undefined4 *)(iVar3 + -8);
  puVar2[3] = *(undefined4 *)(iVar3 + -4);
  return;
}




/* Function: FUN_0041629c */

void FUN_0041629c(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*param_2 == 4) {
    iVar3 = *(int *)(param_2[2] + 4);
    if ((iVar3 == 4) || (*(int *)(param_1[0x12] + 4 + iVar3 * 0x40) == 0)) {
      puVar4 = (undefined4 *)FUN_004174a4(param_1,param_2[2],param_3);
      iVar3 = *param_1;
      *puVar4 = *(undefined4 *)(iVar3 + -0x10);
      puVar4[1] = *(undefined4 *)(iVar3 + -0xc);
      puVar4[2] = *(undefined4 *)(iVar3 + -8);
      puVar4[3] = *(undefined4 *)(iVar3 + -4);
      return;
    }
  }
  iVar3 = FUN_004136c0(param_2);
  iVar3 = *(int *)(param_1[0x12] + 4 + iVar3 * 0x40);
  if (iVar3 != 0) {
    FUN_00412294(param_1,3);
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + -0x10);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + -0xc);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar1 + -8);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + -4);
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x10) = *param_3;
    *(undefined4 *)(iVar1 + 0x14) = param_3[1];
    *(undefined4 *)(iVar1 + 0x18) = param_3[2];
    *(undefined4 *)(iVar1 + 0x1c) = param_3[3];
    piVar2 = (int *)*param_1;
    *piVar2 = *param_2;
    piVar2[1] = param_2[1];
    piVar2[2] = param_2[2];
    piVar2[3] = param_2[3];
    *(int *)(*param_1 + -8) = iVar3;
    *(undefined4 *)(*param_1 + -0x10) = 5;
    iVar3 = *param_1;
    *param_1 = iVar3 + 0x30;
    FUN_0041209c(param_1,iVar3 + -0x10,0);
    return;
  }
  FUN_004142c0(param_1,param_2,"index");
  return;
}




/* Function: FUN_004163a8 */

undefined4 FUN_004163a8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004136c0(param_2 + -0x20);
  iVar1 = *(int *)(param_1[0x12] + iVar1 * 0x40 + param_3 * 4);
  *param_1 = param_2;
  if (iVar1 == 0) {
    iVar1 = FUN_004136c0(param_2 + -0x10);
    iVar1 = *(int *)(param_3 * 4 + param_1[0x12] + iVar1 * 0x40);
    if ((iVar1 == 0) && (iVar1 = *(int *)(param_1[0x12] + param_3 * 4), iVar1 == 0)) {
      return 0;
    }
  }
  FUN_00412d30(param_1,(&PTR_s_gettable_005a22c0)[param_3]);
  FUN_00411fdc(param_1,iVar1,3,1);
  return 1;
}




/* Function: FUN_0041643c */

void FUN_0041643c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int local_18;
  
  do {
    iVar9 = 2;
    if (((*(int *)(param_3 + -0x20) == 3) ||
        (iVar2 = FUN_00416620(param_1,param_3 + -0x20), iVar2 == 0)) &&
       ((*(int *)(param_3 + -0x10) == 3 ||
        (iVar2 = FUN_00416620(param_1,param_3 + -0x10), iVar2 == 0)))) {
      iVar2 = *(int *)(*(int *)(param_3 + -8) + 8);
      if (iVar2 != 0) {
        uVar11 = iVar2 + *(int *)(*(int *)(param_3 + -0x18) + 8);
        if (param_2 < 3) {
          local_18 = 0x20;
        }
        else {
          do {
            local_18 = iVar9 << 4;
            piVar8 = (int *)(param_3 + -0x10 + iVar9 * -0x10);
            if ((*piVar8 != 3) && (iVar2 = FUN_00416620(param_1,piVar8), iVar2 != 0))
            goto LAB_0041654d;
            iVar9 = iVar9 + 1;
            uVar11 = uVar11 + *(int *)(piVar8[2] + 8);
          } while (iVar9 < param_2);
          local_18 = iVar9 * 0x10;
        }
LAB_0041654d:
        if (0xfffffffd < uVar11) {
          FUN_00412884(param_1,"string size overflow");
        }
        iVar2 = FUN_00419ff8(param_1,uVar11);
        iVar6 = 0;
        if (0 < iVar9) {
          iVar3 = iVar9 * -0x10;
          iVar7 = iVar9;
          do {
            iVar1 = *(int *)(iVar3 + 8 + param_3);
            uVar11 = *(uint *)(iVar1 + 8);
            puVar10 = (undefined4 *)(iVar1 + 0x14);
            puVar12 = (undefined4 *)(iVar2 + iVar6);
            for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar12 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
            }
            for (uVar5 = uVar11 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
              puVar10 = (undefined4 *)((int)puVar10 + 1);
              puVar12 = (undefined4 *)((int)puVar12 + 1);
            }
            iVar6 = iVar6 + uVar11;
            iVar3 = iVar3 + 0x10;
            iVar7 = iVar7 + -1;
          } while (0 < iVar7);
        }
        uVar4 = FUN_0041a5d0(param_1,iVar2,iVar6);
        *(undefined4 *)((param_3 - local_18) + 8) = uVar4;
      }
    }
    else {
      iVar2 = FUN_004163a8(param_1,param_3,0xc);
      if (iVar2 == 0) {
        FUN_0041429c(param_1,param_3 + -0x20,3,"concat");
      }
    }
    param_2 = (param_2 - iVar9) + 1;
    param_3 = param_3 + 0x10 + iVar9 * -0x10;
    if (param_2 < 2) {
      return;
    }
  } while( true );
}




/* Function: FUN_00416620 */

undefined4 FUN_00416620(undefined4 param_1,int *param_2)

{
  int iVar1;
  char local_24 [32];
  
  if (*param_2 != 2) {
    return 1;
  }
  sprintf(local_24,"%.16g",*(undefined8 *)(param_2 + 2));
  iVar1 = FUN_0041a5a8(param_1,local_24);
  param_2[2] = iVar1;
  *param_2 = 3;
  return 0;
}




/* Function: FUN_00416674 */

void FUN_00416674(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004163a8(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_0041429c(param_1,param_2 + -0x20,2,"perform arithmetic on");
  }
  return;
}




/* Function: FUN_004166a8 */

void FUN_004166a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0041433c(param_1,param_3);
  *puVar1 = param_2;
  *(undefined2 *)(puVar1 + 3) = 0;
  return;
}




/* Function: FUN_004166c8 */

void FUN_004166c8(int *param_1,int param_2,int param_3)

{
  if ((*param_1 - param_2 >> 4) - param_3 < 0) {
    FUN_00411f08(param_1,param_2,param_3);
  }
  FUN_0041670c(param_1,param_2 + param_3 * 0x10);
  return;
}




/* Function: FUN_0041670c */

void FUN_0041670c(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_004173f8(param_1,0);
  iVar5 = 0;
  iVar4 = iVar5;
  if (param_2 < (undefined4 *)*param_1) {
    do {
      iVar4 = iVar5 + 1;
      puVar2 = (undefined4 *)FUN_0041747c(param_1,uVar1,iVar4);
      *puVar2 = param_2[iVar5 * 4];
      puVar2[1] = param_2[iVar5 * 4 + 1];
      puVar2[2] = param_2[iVar5 * 4 + 2];
      puVar2[3] = param_2[iVar5 * 4 + 3];
      iVar5 = iVar4;
    } while (param_2 + iVar4 * 4 < (undefined4 *)*param_1);
  }
  uVar3 = FUN_0041a5a8(param_1,&DAT_00587124);
  FUN_004178d4(param_1,uVar1,uVar3,(double)iVar4);
  *param_1 = (int)param_2;
  *param_2 = 4;
  *(undefined4 *)(*param_1 + 8) = uVar1;
  iVar4 = *param_1;
  if (iVar4 == param_1[2]) {
    FUN_00412294(param_1,1);
    iVar4 = *param_1;
  }
  *param_1 = iVar4 + 0x10;
  return;
}




/* Function: FUN_004167d0 */

void FUN_004167d0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = *(undefined4 **)(param_2 + -8);
  uVar2 = *(undefined4 *)(*(int *)*puVar1 + 0x2c);
  iVar4 = *(int *)puVar1[1] - *(int *)(*(int *)*puVar1 + 0x18) >> 2;
  iVar5 = iVar4 + -1;
  if (iVar5 == 0) {
    uVar3 = 1;
    puVar1[3] = 1;
    puVar1[4] = 0;
    puVar1[2] = iVar4;
  }
  else {
    uVar3 = puVar1[3];
  }
  iVar4 = FUN_00414124(uVar2,iVar5,uVar3,puVar1 + 4);
  if ((iVar4 != puVar1[3]) || (iVar5 <= (int)puVar1[2])) {
    puVar1[3] = iVar4;
    *param_1 = param_3;
    FUN_00411f64(param_1,param_2 + -0x10,iVar4,param_4);
  }
  puVar1[2] = iVar5;
  return;
}




/* Function: FUN_00416850 */

void FUN_00416850(int param_1)

{
  if (*(uint *)(param_1 + 0x5c) <= *(uint *)(param_1 + 0x60)) {
    FUN_00416864(param_1);
  }
  return;
}




/* Function: FUN_00416864 */

void FUN_00416864(int param_1)

{
  FUN_0041689c(param_1);
  FUN_00417030(param_1);
  FUN_00416bf8(param_1,0);
  FUN_00416fbc(param_1);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x60) * 2;
  FUN_00416db0(param_1,&DAT_005b94a8);
  return;
}




/* Function: FUN_0041689c */

void FUN_0041689c(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = *(int **)(param_1 + 0x44);
  local_18[5] = 0;
  FUN_00416a18(param_1,&local_18);
  FUN_00416b54(param_1,&local_18);
  FUN_00416b90(param_1,&local_18);
  iVar4 = local_14;
  while( true ) {
    while (iVar7 = iVar4, piVar3 = local_18, iVar7 != 0) {
      local_14 = *(int *)(iVar7 + 8);
      iVar6 = 0;
      iVar4 = local_14;
      iVar5 = iVar7;
      if (0 < *(short *)(iVar7 + 0xe)) {
        do {
          FUN_004169a8(&local_18,iVar5 + 0x10);
          iVar6 = iVar6 + 1;
          iVar4 = local_14;
          iVar5 = iVar5 + 0x10;
        } while (iVar6 < *(short *)(iVar7 + 0xe));
      }
    }
    if (local_18 == (int *)0x0) break;
    piVar2 = local_18 + 5;
    iVar5 = 0;
    piVar1 = local_18 + 2;
    iVar4 = iVar7;
    local_18 = (int *)*piVar2;
    if (0 < *piVar1) {
      iVar7 = 0;
      do {
        piVar2 = (int *)(*piVar3 + iVar7);
        if (*piVar2 != 1) {
          if (*(int *)(iVar7 + 0x10 + *piVar3) == 1) {
            FUN_004171f8(piVar3,piVar2);
          }
          FUN_004169a8(&local_18,piVar2);
          FUN_004169a8(&local_18,piVar2 + 4);
        }
        iVar7 = iVar7 + 0x28;
        iVar5 = iVar5 + 1;
        iVar4 = local_14;
      } while (iVar5 < piVar3[2]);
    }
  }
  return;
}




/* Function: FUN_004169a8 */

void FUN_004169a8(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((iVar1 == 0) || (iVar1 == 3)) {
    if (*(int *)(param_2[2] + 0x10) == 0) {
      *(undefined4 *)(param_2[2] + 0x10) = 1;
      return;
    }
  }
  else if (iVar1 == 6) {
    FUN_00416a7c(param_1,*(undefined4 *)param_2[2]);
  }
  else {
    if (iVar1 == 5) {
      FUN_00416a7c(param_1,param_2[2]);
      return;
    }
    if ((iVar1 == 4) && (iVar1 = param_2[2], iVar1 == *(int *)(iVar1 + 0x14))) {
      *(int *)(iVar1 + 0x14) = *param_1;
      *param_1 = param_2[2];
      return;
    }
  }
  return;
}




/* Function: FUN_00416a18 */

void FUN_00416a18(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x4c);
  do {
    iVar5 = 0;
    if (-1 < iVar2) {
      iVar4 = 0;
      do {
        iVar1 = *(int *)(iVar4 + *(int *)(param_1 + 0x48) + iVar3 * 4);
        if (iVar1 != 0) {
          FUN_00416a7c(param_2,iVar1);
          iVar2 = *(int *)(param_1 + 0x4c);
        }
        iVar4 = iVar4 + 0x40;
        iVar5 = iVar5 + 1;
      } while (iVar5 <= iVar2);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xf);
  return;
}




/* Function: FUN_00416a7c */

void FUN_00416a7c(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)param_2[2]) {
    return;
  }
  if (*(short *)(param_2 + 3) == 0) {
    FUN_00416aa8(*param_2);
  }
  param_2[2] = *(undefined4 *)(param_1 + 4);
  *(undefined4 **)(param_1 + 4) = param_2;
  return;
}




/* Function: FUN_00416aa8 */

void FUN_00416aa8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(short *)(param_1 + 0x26) == 0) {
    *(undefined2 *)(param_1 + 0x26) = 1;
    if (*(int *)(*(int *)(param_1 + 0x40) + 0x10) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x10) = 1;
    }
    iVar2 = 0;
    iVar4 = *(int *)(param_1 + 0xc);
    if (0 < iVar4) {
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 8) + iVar2 * 4);
        if (*(int *)(iVar3 + 0x10) == 0) {
          *(undefined4 *)(iVar3 + 0x10) = 1;
          iVar4 = *(int *)(param_1 + 0xc);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar4);
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        FUN_00416aa8(*(undefined4 *)(*(int *)(param_1 + 0x10) + iVar4 * 4));
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x14));
    }
    iVar2 = 0;
    iVar4 = *(int *)(param_1 + 0x34);
    if (0 < iVar4) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x38));
        if (*(int *)(iVar1 + 0x10) == 0) {
          *(undefined4 *)(iVar1 + 0x10) = 1;
          iVar4 = *(int *)(param_1 + 0x34);
        }
        iVar3 = iVar3 + 0xc;
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar4);
    }
  }
  return;
}




/* Function: FUN_00416b54 */

void FUN_00416b54(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  if (uVar1 < *param_1) {
    do {
      FUN_004169a8(param_2,uVar1);
      uVar1 = uVar1 + 0x10;
    } while (uVar1 < *param_1);
  }
  return;
}




/* Function: FUN_00416b90 */

void FUN_00416b90(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if (0 < iVar1) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar2 = iVar3 + *(int *)(param_1 + 0x50);
      if (*(int *)(iVar2 + 0x10) == -4) {
        FUN_004169a8(param_2,iVar2);
        iVar1 = *(int *)(param_1 + 0x54);
      }
      iVar3 = iVar3 + 0x18;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}




/* Function: FUN_00416bf8 */

void FUN_00416bf8(undefined4 param_1,undefined4 param_2)

{
  FUN_00416c30(param_1,param_2);
  FUN_00416d1c(param_1);
  FUN_00416e2c(param_1,param_2);
  FUN_00416ed4(param_1);
  FUN_00416f20(param_1);
  FUN_00416f70(param_1);
  return;
}




/* Function: FUN_00416c30 */

void FUN_00416c30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    iVar1 = 0;
    do {
      piVar4 = (int *)(iVar1 + *(int *)(param_1 + 0x40));
      piVar5 = *(int **)(*(int *)(param_1 + 0x40) + iVar2 * 4);
      if (piVar5 != (int *)0x0) {
        do {
          if ((piVar5[4] == 0) || (param_2 != 0)) {
            iVar3 = *piVar5;
            *piVar4 = piVar5[3];
            piVar5[3] = *(int *)(*(int *)(param_1 + 0x48) + 0x3c + iVar3 * 0x40);
            *(int **)(*(int *)(param_1 + 0x48) + 0x3c + iVar3 * 0x40) = piVar5;
            *(int *)(param_1 + 0x60) = (*(int *)(param_1 + 0x60) - piVar5[2]) + -0x15;
            *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
          }
          else {
            piVar5[4] = 0;
            piVar4 = piVar5 + 3;
          }
          piVar5 = (int *)*piVar4;
        } while (piVar5 != (int *)0x0);
        iVar3 = *(int *)(param_1 + 0x38);
      }
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  FUN_00416ce0(param_1,param_1 + 0x38);
  return;
}




/* Function: FUN_00416ce0 */

void FUN_00416ce0(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if ((param_2[1] < (uint)((int)(((uint)((int)uVar1 >> 1) >> 0x1e) + uVar1) >> 2)) &&
     (10 < (int)uVar1)) {
    FUN_0041a324(param_1,param_2,(int)(uVar1 + (0x7fffffff < uVar1)) >> 1);
  }
  return;
}




/* Function: FUN_00416d1c */

void FUN_00416d1c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_24 [2];
  int local_1c;
  int local_14;
  
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x60) * 2;
  iVar4 = *(int *)(param_1 + 0x4c);
  if (-1 < iVar4) {
    local_24[0] = 0;
    iVar3 = *(int *)(param_1 + 0x48);
    iVar5 = iVar4 * 0x40;
    local_14 = iVar4;
    do {
      iVar1 = iVar3 + iVar5;
      iVar2 = *(int *)(iVar1 + 0x3c);
      while (iVar2 != 0) {
        *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar2 + 0xc);
        local_1c = iVar2;
        FUN_00416db0(param_1,local_24);
        FUN_00419e70(param_1,iVar2,0);
        iVar3 = *(int *)(param_1 + 0x48);
        iVar1 = iVar3 + iVar5;
        iVar2 = *(int *)(iVar1 + 0x3c);
      }
      iVar5 = iVar5 + -0x40;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return;
}




/* Function: FUN_00416db0 */

void FUN_00416db0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_004136c0(param_2);
  iVar2 = *(int *)(param_1[0x12] + 0x34 + iVar2 * 0x40);
  if (iVar2 != 0) {
    iVar1 = param_1[0x1b];
    param_1[0x1b] = 0;
    FUN_00412294(param_1,2);
    *(int *)(*param_1 + 8) = iVar2;
    *(undefined4 *)*param_1 = 5;
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x10) = *param_2;
    *(undefined4 *)(iVar2 + 0x14) = param_2[1];
    *(undefined4 *)(iVar2 + 0x18) = param_2[2];
    *(undefined4 *)(iVar2 + 0x1c) = param_2[3];
    iVar2 = *param_1;
    *param_1 = iVar2 + 0x20;
    FUN_0041209c(param_1,iVar2,0);
    param_1[0x1b] = iVar1;
  }
  return;
}




/* Function: FUN_00416e2c */

void FUN_00416e2c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x2c);
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      piVar5 = (int *)(iVar4 + *(int *)(param_1 + 0x34));
      iVar1 = *(int *)(*(int *)(param_1 + 0x34) + iVar2 * 4);
      if (iVar1 != 0) {
        do {
          if ((*(int *)(iVar1 + 0x10) == 0) || (param_2 != 0)) {
            *piVar5 = *(int *)(iVar1 + 0xc);
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
            *(int *)(param_1 + 0x60) = (*(int *)(param_1 + 0x60) - *(int *)(iVar1 + 8)) + -0x15;
            FUN_00419e70(param_1,iVar1,0);
          }
          else {
            if (*(int *)(iVar1 + 0x10) < 2) {
              *(undefined4 *)(iVar1 + 0x10) = 0;
            }
            piVar5 = (int *)(iVar1 + 0xc);
          }
          iVar1 = *piVar5;
        } while (iVar1 != 0);
        iVar3 = *(int *)(param_1 + 0x2c);
      }
      iVar4 = iVar4 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  FUN_00416ce0(param_1,param_1 + 0x2c);
  return;
}




/* Function: FUN_00416ed4 */

void FUN_00416ed4(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x28);
  while (iVar1 != 0) {
    if (iVar1 == *(int *)(iVar1 + 0x14)) {
      *piVar2 = *(int *)(iVar1 + 0x10);
      FUN_00417448(param_1,iVar1);
    }
    else {
      *(int *)(iVar1 + 0x14) = iVar1;
      piVar2 = (int *)(iVar1 + 0x10);
    }
    iVar1 = *piVar2;
  }
  return;
}




/* Function: FUN_00416f20 */

void FUN_00416f20(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x20);
  while (iVar1 != 0) {
    if (*(short *)(iVar1 + 0x26) == 0) {
      *piVar2 = *(int *)(iVar1 + 0x28);
      FUN_0041a848(param_1,iVar1);
    }
    else {
      piVar2 = (int *)(iVar1 + 0x28);
      *(undefined2 *)(iVar1 + 0x26) = 0;
    }
    iVar1 = *piVar2;
  }
  return;
}




/* Function: FUN_00416f70 */

void FUN_00416f70(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x24);
  while (iVar1 != 0) {
    if (iVar1 == *(int *)(iVar1 + 8)) {
      *piVar2 = *(int *)(iVar1 + 4);
      FUN_0041a8bc(param_1,iVar1);
    }
    else {
      *(int *)(iVar1 + 8) = iVar1;
      piVar2 = (int *)(iVar1 + 4);
    }
    iVar1 = *piVar2;
  }
  return;
}




/* Function: FUN_00416fbc */

void FUN_00416fbc(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (0x200 < uVar1) {
    uVar3 = uVar1 >> 1;
    *(uint *)(param_1 + 0x60) = (*(int *)(param_1 + 0x60) + uVar3) - uVar1;
    *(uint *)(param_1 + 0x1c) = uVar3;
    uVar2 = FUN_00419e70(param_1,*(undefined4 *)(param_1 + 0x18),uVar3);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  return;
}




/* Function: FUN_00416ff0 */

uint FUN_00416ff0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 == 0) || (iVar1 == 3)) {
    return *(uint *)(param_1[2] + 0x10);
  }
  if (iVar1 == 4) {
    return (uint)(param_1[2] != *(int *)(param_1[2] + 0x14));
  }
  if (iVar1 == 5) {
    return (uint)(param_1[2] != *(int *)(param_1[2] + 8));
  }
  return 1;
}




/* Function: FUN_00417030 */

void FUN_00417030(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if (0 < iVar1) {
    iVar4 = 0;
    iVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x50);
      iVar3 = iVar2 + iVar4;
      if ((*(int *)(iVar3 + 0x10) == -2) && (iVar3 = FUN_00416ff0(iVar3), iVar3 == 0)) {
        *(undefined4 *)(iVar4 + 0x10 + iVar2) = 0xfffffffd;
      }
      iVar4 = iVar4 + 0x18;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return;
}




/* Function: FUN_004170a4 */

int FUN_004170a4(undefined4 param_1,int *param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  if (*param_3 == 1) {
    iVar2 = 0;
  }
  else {
    puVar1 = (undefined *)FUN_00417124(param_1,param_2,param_3);
    if (puVar1 == &DAT_005b94a8) {
      FUN_00412884(param_1,"invalid key for `next\'");
    }
    iVar2 = (uint)((int)puVar1 - (*param_2 + 0x10)) / 0x28 + 1;
  }
  if (iVar2 < param_2[2]) {
    iVar3 = iVar2 * 0x28;
    do {
      if (*(int *)(*param_2 + iVar3 + 0x10) != 1) {
        return *param_2 + iVar3;
      }
      iVar3 = iVar3 + 0x28;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2[2]);
  }
  return 0;
}




/* Function: FUN_00417124 */

void FUN_00417124(undefined4 param_1,undefined4 param_2,int *param_3)

{
  if (*param_3 == 2) {
    FUN_004172cc(param_2,*(undefined8 *)(param_3 + 2));
    return;
  }
  if (*param_3 == 3) {
    FUN_004171c0(param_2,param_3[2]);
    return;
  }
  FUN_0041716c(param_1,param_2,param_3);
  return;
}




/* Function: FUN_0041716c */

undefined * FUN_0041716c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004175c4(param_2,param_3);
  if (iVar1 == 0) {
    FUN_00412884(param_1,"table index is nil");
  }
  else {
    do {
      iVar2 = FUN_00419ee8(param_3,iVar1);
      if (iVar2 != 0) {
        return (undefined *)(iVar1 + 0x10);
      }
      iVar1 = *(int *)(iVar1 + 0x20);
    } while (iVar1 != 0);
  }
  return &DAT_005b94a8;
}




/* Function: FUN_004171c0 */

int * FUN_004171c0(int *param_1,uint *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((param_1[2] - 1U & *param_2) * 0x28 + *param_1);
  while ((*piVar1 != 3 || (param_2 != (uint *)piVar1[2]))) {
    piVar1 = (int *)piVar1[8];
    if (piVar1 == (int *)0x0) {
      return (int *)&DAT_005b94a8;
    }
  }
  return piVar1 + 4;
}




/* Function: FUN_004171f8 */

void FUN_004171f8(int *param_1,int *param_2)

{
  double dVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((*param_2 != 2) && ((*param_2 != 3 || (0x1e < *(uint *)(param_2[2] + 8))))) {
    iVar2 = FUN_004175c4(param_1,param_2);
    iVar2 = (iVar2 - *param_1) / 0x28;
    dVar1 = (double)iVar2;
    puVar3 = (undefined *)FUN_004172cc(param_1,dVar1);
    while( true ) {
      if (puVar3 == &DAT_005b94a8) {
        *param_2 = 2;
        *(double *)(param_2 + 2) = dVar1;
        return;
      }
      if (0x7ffffffd - param_1[2] <= iVar2) break;
      iVar2 = iVar2 + param_1[2];
      dVar1 = (double)iVar2;
      puVar3 = (undefined *)FUN_004172cc(param_1,dVar1);
    }
    return;
  }
  return;
}




/* Function: FUN_004172cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004172cc(int *param_1,double param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint local_18;
  uint uStack_14;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xffffff80) != 0) {
      local_18 = SUB84(param_2,0);
      uStack_14 = (uint)((ulonglong)param_2 >> 0x20);
      uVar1 = uStack_14 >> 0x14 & 0x7ff;
      if (uVar1 < 0x3ff) {
        uVar1 = 0;
      }
      else {
        uVar3 = (uStack_14 << 0xb | local_18 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar1 & 0x1f);
        uVar1 = -uVar3;
        if (-1 < (longlong)param_2) {
          uVar1 = uVar3;
        }
      }
      piVar2 = (int *)((uVar1 & param_1[2] - 1U) * 0x28 + *param_1);
      while ((*piVar2 != 2 || (param_2 != *(double *)(piVar2 + 2)))) {
        piVar2 = (int *)piVar2[8];
        if (piVar2 == (int *)0x0) {
          return (int *)&DAT_005b94a8;
        }
      }
      return piVar2 + 4;
    }
    if (_DAT_005b71d0 != 0) break;
    FUN_004d34fc();
  }
  piVar2 = (int *)((param_1[2] - 1U & (int)ROUND(param_2)) * 0x28 + *param_1);
  while ((*piVar2 != 2 || (param_2 != *(double *)(piVar2 + 2)))) {
    piVar2 = (int *)piVar2[8];
    if (piVar2 == (int *)0x0) {
      return (int *)&DAT_005b94a8;
    }
  }
  return piVar2 + 4;
}




/* Function: FUN_004173f8 */

undefined4 * FUN_004173f8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00419e70(param_1,0,0x18);
  puVar1[1] = 4;
  puVar1[4] = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 **)(param_1 + 0x28) = puVar1;
  puVar1[5] = puVar1;
  puVar1[2] = 0;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x18;
  *puVar1 = 0;
  uVar2 = FUN_00419ed0(param_2);
  FUN_00417758(param_1,puVar1,uVar2);
  return puVar1;
}




/* Function: FUN_00417448 */

void FUN_00417448(int param_1,undefined4 *param_2)

{
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -0x18 + param_2[2] * -0x28;
  FUN_00419e70(param_1,*param_2,0);
  FUN_00419e70(param_1,param_2,0);
  return;
}




/* Function: FUN_0041747c */

void FUN_0041747c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 local_10 [2];
  double local_8;
  
  local_10[0] = 2;
  local_8 = (double)param_3;
  FUN_004174a4(param_1,param_2,local_10);
  return;
}




/* Function: FUN_004174a4 */

int * FUN_004174a4(undefined4 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  do {
    piVar2 = (int *)FUN_004175c4(param_2,param_3);
    piVar5 = piVar2;
    if (piVar2 == (int *)0x0) {
      FUN_00412884(param_1,"table index is nil");
    }
    do {
      iVar3 = FUN_00419ee8(param_3,piVar5);
      if (iVar3 != 0) {
        return piVar5 + 4;
      }
      piVar5 = (int *)piVar5[8];
    } while (piVar5 != (int *)0x0);
    piVar5 = piVar2;
    if (*piVar2 != 1) {
      piVar5 = (int *)param_2[3];
      if (piVar5 < piVar2) {
        piVar4 = (int *)FUN_004175c4(param_2,piVar2);
        if (piVar4 != piVar2) {
          if (piVar2 != (int *)piVar4[8]) {
            piVar1 = (int *)piVar4[8];
            do {
              piVar4 = piVar1;
              piVar1 = (int *)piVar4[8];
            } while ((int *)piVar4[8] != piVar2);
          }
          piVar4[8] = (int)piVar5;
          *piVar5 = *piVar2;
          piVar5[1] = piVar2[1];
          piVar5[2] = piVar2[2];
          piVar5[3] = piVar2[3];
          piVar5[4] = piVar2[4];
          piVar5[5] = piVar2[5];
          piVar5[6] = piVar2[6];
          piVar5[7] = piVar2[7];
          piVar5[8] = piVar2[8];
          piVar5[9] = piVar2[9];
          piVar2[8] = 0;
          piVar5 = piVar2;
          goto LAB_00417571;
        }
      }
      piVar5[8] = piVar2[8];
      piVar2[8] = (int)piVar5;
    }
LAB_00417571:
    *piVar5 = *param_3;
    piVar5[1] = param_3[1];
    piVar5[2] = param_3[2];
    piVar5[3] = param_3[3];
    piVar2 = (int *)param_2[3];
    while( true ) {
      if (*piVar2 == 1) {
        return piVar5 + 4;
      }
      if (piVar2 == (int *)*param_2) break;
      piVar2 = piVar2 + -10;
      param_2[3] = (int)piVar2;
    }
    FUN_0041766c(param_1,param_2);
  } while( true );
}




/* Function: FUN_004175c4 */

int FUN_004175c4(int *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  uint uStack_c;
  
  iVar2 = *param_2;
  if (iVar2 == 2) {
    lVar1 = *(longlong *)(param_2 + 2);
    local_10 = (uint)lVar1;
    uStack_c = (uint)((ulonglong)lVar1 >> 0x20);
    uVar3 = uStack_c >> 0x14 & 0x7ff;
    if (uVar3 < 0x3ff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uStack_c << 0xb | local_10 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar3 & 0x1f);
      if (lVar1 < 0) {
        uVar3 = -uVar3;
      }
    }
  }
  else if (iVar2 == 3) {
    uVar3 = *(uint *)param_2[2];
  }
  else if (iVar2 == 0) {
    uVar3 = (uint)param_2[2] >> 3;
  }
  else if (iVar2 == 4) {
    uVar3 = (uint)param_2[2] >> 3;
  }
  else {
    if (iVar2 != 5) {
      return 0;
    }
    uVar3 = (uint)param_2[2] >> 3;
  }
  return (uVar3 & param_1[2] - 1U) * 0x28 + *param_1;
}




/* Function: FUN_0041766c */

void FUN_0041766c(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = param_2[2];
  iVar2 = *param_2;
  iVar3 = FUN_00417898(param_2);
  iVar5 = (int)(((uint)((int)uVar1 >> 1) >> 0x1e) + uVar1) >> 2;
  if (iVar3 < (int)(uVar1 - iVar5)) {
    if ((iVar5 < iVar3) || ((int)uVar1 < 5)) {
      FUN_00417758(param_1,param_2,uVar1);
    }
    else {
      FUN_00417758(param_1,param_2,(int)(uVar1 + (0x7fffffff < uVar1)) >> 1);
    }
  }
  else {
    FUN_00417758(param_1,param_2,uVar1 * 2);
  }
  if (0 < (int)uVar1) {
    iVar3 = 0;
    iVar6 = 0;
    iVar5 = iVar2;
    do {
      if (*(int *)(iVar3 + 0x10 + iVar2) != 1) {
        puVar4 = (undefined4 *)FUN_004174a4(param_1,param_2,iVar5);
        *puVar4 = *(undefined4 *)(iVar3 + 0x10 + iVar2);
        puVar4[1] = *(undefined4 *)(iVar3 + 0x14 + iVar2);
        puVar4[2] = *(undefined4 *)(iVar3 + 0x18 + iVar2);
        puVar4[3] = *(undefined4 *)(iVar3 + 0x1c + iVar2);
      }
      iVar3 = iVar3 + 0x28;
      iVar5 = iVar5 + 0x28;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar1);
  }
  FUN_00419e70(param_1,iVar2,0);
  return;
}




/* Function: FUN_00417758 */

void FUN_00417758(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0x7ffffffd < param_3) {
    FUN_00412884(param_1,"table overflow");
  }
  iVar1 = FUN_00419e70(param_1,0,param_3 * 0x28);
  *param_2 = iVar1;
  iVar3 = 0;
  if (0 < (int)param_3) {
    if (4 < (int)param_3) {
      iVar2 = 0;
      while( true ) {
        iVar3 = iVar3 + 4;
        *(undefined4 *)(iVar2 + 0x10 + iVar1) = 1;
        *(undefined4 *)(iVar2 + *param_2) = 1;
        *(undefined4 *)(iVar2 + 0x20 + *param_2) = 0;
        *(undefined4 *)(iVar2 + 0x38 + *param_2) = 1;
        *(undefined4 *)(iVar2 + 0x28 + *param_2) = 1;
        *(undefined4 *)(iVar2 + 0x48 + *param_2) = 0;
        *(undefined4 *)(iVar2 + 0x60 + *param_2) = 1;
        *(undefined4 *)(iVar2 + 0x50 + *param_2) = 1;
        *(undefined4 *)(iVar2 + 0x70 + *param_2) = 0;
        *(undefined4 *)(iVar2 + 0x88 + *param_2) = 1;
        *(undefined4 *)(iVar2 + 0x78 + *param_2) = 1;
        *(undefined4 *)(iVar2 + 0x98 + *param_2) = 0;
        iVar2 = iVar2 + 0xa0;
        if ((int)(param_3 - 5) < iVar3) break;
        iVar1 = *param_2;
      }
      iVar1 = *param_2;
    }
    iVar2 = iVar3 * 0x28;
    while( true ) {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar2 + 0x10 + iVar1) = 1;
      *(undefined4 *)(iVar2 + *param_2) = 1;
      *(undefined4 *)(iVar2 + 0x20 + *param_2) = 0;
      iVar2 = iVar2 + 0x28;
      if ((int)param_3 <= iVar3) break;
      iVar1 = *param_2;
    }
  }
  *(uint *)(param_1 + 0x60) = param_3 * 0x28 + *(int *)(param_1 + 0x60) + param_2[2] * -0x28;
  param_2[2] = param_3;
  param_2[3] = *param_2 + -0x28 + param_3 * 0x28;
  return;
}




/* Function: FUN_00417898 */

int FUN_00417898(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < param_1[2]) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x10 + *param_1) != 1) {
        iVar3 = iVar3 + 1;
      }
      iVar1 = iVar1 + 0x28;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[2]);
  }
  return iVar3;
}





/* globals_08 functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_00550f60 */

undefined4 * __thiscall FUN_00550f60(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  FUN_00550ed0();
  piVar2 = *(int **)(param_1 + 4);
  if (param_2 == (undefined4 *)0x0) {
    if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 8) = 0;
    iVar3 = FUN_00550d70();
    if (iVar3 == 0) {
      param_2 = (undefined4 *)0x0;
    }
    else {
      param_2 = (undefined4 *)FUN_00493c27(iVar3);
    }
    *(undefined4 **)(param_1 + 8) = param_2;
  }
  if (param_2 != (undefined4 *)0x0) {
    iVar3 = *piVar2;
    puVar6 = param_2;
    while (iVar3 != 0) {
      uVar5 = piVar2[2];
      puVar7 = (undefined4 *)piVar2[1];
      puVar8 = puVar6;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      piVar1 = piVar2 + 2;
      piVar2 = (int *)*piVar2;
      puVar6 = (undefined4 *)((int)puVar6 + *piVar1);
      iVar3 = *piVar2;
    }
    uVar5 = piVar2[2];
    puVar7 = (undefined4 *)piVar2[1];
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(undefined2 *)(param_1 + 0x14) = 0;
  }
  return param_2;
}




/* Function: FUN_00551010 */

int * __thiscall FUN_00551010(int *param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  
  FUN_00550ed0();
  FUN_00550e20(2);
  puVar1 = (undefined2 *)(*(int *)(*param_1 + 8) + *(int *)(*param_1 + 4));
  *puVar1 = param_2;
  param_1[4] = (int)puVar1;
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 2;
  return param_1;
}




/* Function: FUN_00551050 */

int * __thiscall FUN_00551050(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  FUN_00550ed0();
  FUN_00550e20(4);
  puVar1 = (undefined4 *)(*(int *)(*param_1 + 8) + *(int *)(*param_1 + 4));
  *puVar1 = param_2;
  param_1[4] = (int)puVar1;
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 4;
  return param_1;
}




/* Function: FUN_00551080 */

void __fastcall FUN_00551080(int param_1)

{
  void *pvVar1;
  
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  pvVar1 = *(void **)(param_1 + 4);
  if (pvVar1 != (void *)0x0) {
    FUN_00550da0();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  return;
}




/* Function: FUN_005510e0 */

void __fastcall FUN_005510e0(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}




/* Function: FUN_00551120 */

undefined4 __thiscall
FUN_00551120(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1[2] + *param_1 * 0xc) = param_2;
  *(undefined4 *)(param_1[2] + 4 + *param_1 * 0xc) = param_3;
  iVar1 = *param_1;
  *(undefined4 *)(param_1[2] + 8 + iVar1 * 0xc) = param_4;
  *param_1 = *param_1 + 1;
  return CONCAT31((int3)((uint)(iVar1 * 3) >> 8),1);
}




/* Function: FUN_00551160 */

undefined1 __thiscall FUN_00551160(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *param_1;
  uVar2 = 0xff;
  if (((iVar1 == param_2) && (param_1[1] == param_3)) ||
     ((iVar1 == param_3 && (param_1[1] == param_2)))) {
    return 0;
  }
  if (((iVar1 != param_2) || (param_1[2] != param_3)) &&
     ((iVar1 != param_3 || (param_1[2] != param_2)))) {
    if (((param_1[1] == param_2) && (param_1[2] == param_3)) ||
       ((param_1[1] == param_3 && (param_1[2] == param_2)))) {
      uVar2 = 2;
    }
    return uVar2;
  }
  return 1;
}




/* Function: FUN_005511c0 */

int __thiscall FUN_005511c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 == param_2) && (param_1[1] == param_3)) ||
     ((iVar1 == param_3 && (param_1[1] == param_2)))) {
    return param_1[2];
  }
  if (((iVar1 != param_2) || (param_1[2] != param_3)) &&
     ((iVar1 != param_3 || (param_1[2] != param_2)))) {
    if (((param_1[1] != param_2) || (param_1[2] != param_3)) &&
       ((param_1[1] != param_3 || (param_1[2] != param_2)))) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return param_1[1];
}




/* Function: FUN_00551230 */

undefined4 __thiscall FUN_00551230(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  *(uint *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 4) * 0x18) = param_2;
  *(uint *)(*(int *)(param_1 + 0x10) + 4 + *(int *)(param_1 + 4) * 0x18) = param_3;
  *(uint *)(*(int *)(param_1 + 0x10) + 8 + *(int *)(param_1 + 4) * 0x18) = param_4;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc + *(int *)(param_1 + 4) * 0x18) = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10 + *(int *)(param_1 + 4) * 0x18) = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14 + *(int *)(param_1 + 4) * 0x18) = 0xffffffff;
  if (param_2 < param_3) {
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar2 = param_2;
    uVar3 = param_3;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar2 = param_3;
    uVar3 = param_2;
  }
  FUN_00551120(uVar2,uVar3,uVar4);
  if (param_2 < param_4) {
    uVar4 = *(undefined4 *)(extraout_ECX + 4);
    uVar2 = param_2;
    param_2 = param_4;
  }
  else {
    uVar4 = *(undefined4 *)(extraout_ECX + 4);
    uVar2 = param_4;
  }
  FUN_00551120(uVar2,param_2,uVar4);
  if (param_3 < param_4) {
    uVar4 = *(undefined4 *)(extraout_ECX_00 + 4);
    uVar2 = param_3;
  }
  else {
    uVar4 = *(undefined4 *)(extraout_ECX_00 + 4);
    uVar2 = param_4;
    param_4 = param_3;
  }
  FUN_00551120(uVar2,param_4,uVar4);
  iVar1 = *(int *)(extraout_ECX_01 + 4) + 1;
  *(int *)(extraout_ECX_01 + 4) = iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}




/* Function: FUN_005512f0 */

uint __thiscall
FUN_005512f0(int param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = FUN_00551160(param_4,param_5);
  uVar3 = uVar2;
  if ((char)uVar2 != -1) {
    uVar3 = FUN_00551160(param_4,param_5);
    if ((char)uVar3 != -1) {
      *(uint *)(iVar1 + param_2 * 0x18 + 0xc + (uVar2 & 0xff) * 4) =
           (uVar3 & 0xff) << 0x1e | param_3;
      param_2 = (uVar2 & 0xff) << 0x1e | param_2;
      *(uint *)(iVar1 + param_3 * 0x18 + 0xc + (uVar3 & 0xff) * 4) = param_2;
      return CONCAT31((int3)(param_2 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}




/* Function: FUN_00551370 */

undefined4 __thiscall FUN_00551370(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = *param_2;
  *(int *)(param_1 + 0xc) = iVar2;
  iVar2 = FUN_00493c27(iVar2 * 0x18);
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_00493c27(*(int *)(param_1 + 0xc) * 0x24);
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 != 0) {
      uVar6 = 0;
      uVar5 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        iVar2 = 0;
        iVar7 = 0;
        do {
          iVar1 = param_2[1];
          if (iVar1 == 0) {
            if (param_2[2] == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = (uint)*(ushort *)(iVar2 + param_2[2]);
            }
          }
          else {
            uVar5 = *(uint *)(iVar7 + iVar1);
          }
          if (iVar1 == 0) {
            if (param_2[2] == 0) {
              uVar4 = 1;
            }
            else {
              uVar4 = (uint)*(ushort *)(iVar2 + 2 + param_2[2]);
            }
          }
          else {
            uVar4 = *(uint *)(iVar7 + 4 + iVar1);
          }
          if (iVar1 == 0) {
            if (param_2[2] == 0) {
              uVar3 = 2;
            }
            else {
              uVar3 = (uint)*(ushort *)(iVar2 + 4 + param_2[2]);
            }
          }
          else {
            uVar3 = *(uint *)(iVar7 + 8 + iVar1);
          }
          FUN_00551230(uVar5,uVar4,uVar3);
          uVar5 = *(uint *)(param_1 + 0xc);
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + 0xc;
          iVar2 = iVar2 + 6;
        } while (uVar6 < uVar5);
      }
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
  }
  return 0;
}




/* Function: FUN_00551450 */

uint __fastcall FUN_00551450(uint *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  void *pvVar13;
  uint uVar14;
  undefined4 uVar15;
  uint local_40;
  int local_38;
  undefined4 local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00580748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005517b0();
  local_4 = 0;
  iVar3 = FUN_00493c27(*param_1 << 2);
  if (iVar3 == 0) {
    local_4 = 0xffffffff;
    uVar4 = FUN_00551730();
    ExceptionList = local_c;
    return uVar4 & 0xffffff00;
  }
  puVar5 = (undefined4 *)FUN_00493c27(*param_1 << 2);
  if (puVar5 != (undefined4 *)0x0) {
    pvVar6 = (void *)FUN_00493c27(*param_1 << 2);
    iVar7 = 0;
    if (pvVar6 != (void *)0x0) {
      local_40 = 0;
      if (*param_1 != 0) {
        puVar9 = puVar5;
        do {
          *(undefined4 *)((iVar3 - (int)puVar5) + (int)puVar9) =
               *(undefined4 *)(iVar7 + 8 + param_1[2]);
          *puVar9 = *(undefined4 *)(iVar7 + param_1[2]);
          *(undefined4 *)((int)puVar9 + ((int)pvVar6 - (int)puVar5)) =
               *(undefined4 *)(iVar7 + 4 + param_1[2]);
          local_40 = local_40 + 1;
          iVar7 = iVar7 + 0xc;
          puVar9 = puVar9 + 1;
        } while (local_40 < *param_1);
      }
      uVar4 = *param_1;
      uVar15 = 1;
      uVar12 = 1;
      puVar9 = puVar5;
      pvVar13 = pvVar6;
      uVar14 = uVar4;
      FUN_005517f0(iVar3,uVar4,1);
      FUN_005517f0(puVar9,uVar4,uVar12);
      iVar7 = FUN_005517f0(pvVar13,uVar14,uVar15);
      piVar1 = *(int **)(iVar7 + 0xc);
      iVar7 = *piVar1;
      iVar10 = puVar5[iVar7];
      local_38 = *(int *)(iVar7 * 4 + (int)pvVar6);
      iVar11 = 0;
      local_40 = 0;
      iVar7 = iVar10;
      if (*param_1 != 0) {
        do {
          iVar10 = piVar1[local_40];
          iVar8 = iVar10 * 4;
          uVar12 = *(undefined4 *)(iVar8 + iVar3);
          iVar10 = puVar5[iVar10];
          iVar8 = *(int *)(iVar8 + (int)pvVar6);
          if ((iVar10 == iVar7) && (iVar8 == local_38)) {
            local_2c[iVar11] = uVar12;
            iVar11 = iVar11 + 1;
            iVar10 = iVar7;
            if (iVar11 == 3) {
                    /* WARNING: Subroutine does not return */
              operator_delete(pvVar6);
            }
          }
          else {
            if ((iVar11 == 2) &&
               (cVar2 = FUN_005512f0(local_2c[0],local_2c[1],iVar7,local_38), cVar2 == '\0')) {
                    /* WARNING: Subroutine does not return */
              operator_delete(pvVar6);
            }
            iVar11 = 1;
            local_38 = iVar8;
            local_2c[0] = uVar12;
          }
          local_40 = local_40 + 1;
          iVar7 = iVar10;
        } while (local_40 < *param_1);
      }
      if (iVar11 == 2) {
        FUN_005512f0(local_2c[0],local_2c[1],iVar10,local_38);
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar6);
    }
  }
  local_4 = 0xffffffff;
  uVar4 = FUN_00551730();
  ExceptionList = local_c;
  return uVar4 & 0xffffff00;
}




/* Function: FUN_00551730 */

void __fastcall FUN_00551730(undefined4 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[1]);
  }
  param_1[1] = 0;
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*param_1);
  }
  *param_1 = 0;
  if ((void *)param_1[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[4]);
  }
  param_1[4] = 0;
  if ((void *)param_1[3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[3]);
  }
  param_1[3] = 0;
  return;
}




/* Function: FUN_00551790 */

void __fastcall FUN_00551790(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      *(uint *)(*(int *)(param_1 + 0xc) + uVar1 * 4) = uVar1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_005517b0 */

undefined4 * __fastcall FUN_005517b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  uVar1 = FUN_00493c27(0x1000);
  *param_1 = uVar1;
  uVar1 = FUN_00493c27(0x400);
  param_1[1] = uVar1;
  FUN_00551790();
  return param_1;
}




/* Function: FUN_005517f0 */

int * __thiscall FUN_005517f0(int *param_1,byte *param_2,uint param_3,char param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  uint local_8;
  int local_4;
  
  if ((uint)param_1[2] < param_3) {
    if ((void *)param_1[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_1[4]);
    }
    param_1[4] = 0;
    if ((void *)param_1[3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_1[3]);
    }
    param_1[3] = 0;
    iVar6 = FUN_00493c27(param_3 * 4);
    param_1[3] = iVar6;
    iVar6 = FUN_00493c27(param_3 * 4);
    param_1[4] = iVar6;
    param_1[2] = param_3;
    FUN_00551790();
  }
  puVar13 = (undefined4 *)*param_1;
  for (iVar6 = 0x400; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  piVar8 = (int *)param_1[3];
  iVar6 = *param_1;
  pbVar2 = param_2 + param_3 * 4;
  bVar5 = true;
  local_8 = *(uint *)(param_2 + *piVar8 * 4);
  if (param_4 == '\0') {
    pbVar7 = param_2;
    if (param_2 == pbVar2) {
      return param_1;
    }
    do {
      uVar9 = *(uint *)(param_2 + *piVar8 * 4);
      piVar8 = piVar8 + 1;
      if (uVar9 < local_8) {
        bVar5 = false;
      }
      piVar11 = (int *)(iVar6 + (uint)*pbVar7 * 4);
      *piVar11 = *piVar11 + 1;
      *(int *)(iVar6 + 0x400 + (uint)pbVar7[1] * 4) =
           *(int *)(iVar6 + 0x400 + (uint)pbVar7[1] * 4) + 1;
      *(int *)(iVar6 + 0x800 + (uint)pbVar7[2] * 4) =
           *(int *)(iVar6 + 0x800 + (uint)pbVar7[2] * 4) + 1;
      pbVar1 = pbVar7 + 3;
      pbVar7 = pbVar7 + 4;
      *(int *)(iVar6 + 0xc00 + (uint)*pbVar1 * 4) = *(int *)(iVar6 + 0xc00 + (uint)*pbVar1 * 4) + 1;
      local_8 = uVar9;
    } while (pbVar7 != pbVar2);
  }
  else {
    pbVar7 = param_2;
    if (param_2 == pbVar2) {
      return param_1;
    }
    do {
      uVar9 = *(uint *)(param_2 + *piVar8 * 4);
      piVar8 = piVar8 + 1;
      if ((int)uVar9 < (int)local_8) {
        bVar5 = false;
      }
      piVar11 = (int *)(iVar6 + (uint)*pbVar7 * 4);
      *piVar11 = *piVar11 + 1;
      *(int *)(iVar6 + 0x400 + (uint)pbVar7[1] * 4) =
           *(int *)(iVar6 + 0x400 + (uint)pbVar7[1] * 4) + 1;
      *(int *)(iVar6 + 0x800 + (uint)pbVar7[2] * 4) =
           *(int *)(iVar6 + 0x800 + (uint)pbVar7[2] * 4) + 1;
      pbVar1 = pbVar7 + 3;
      pbVar7 = pbVar7 + 4;
      *(int *)(iVar6 + 0xc00 + (uint)*pbVar1 * 4) = *(int *)(iVar6 + 0xc00 + (uint)*pbVar1 * 4) + 1;
      local_8 = uVar9;
    } while (pbVar7 != pbVar2);
  }
  if (!bVar5) {
    local_4 = 0;
    if (param_4 != '\0') {
      piVar8 = (int *)(*param_1 + 0xe18);
      iVar6 = 0x10;
      local_4 = 0;
      do {
        local_4 = local_4 + piVar8[-6] + piVar8[-5] + piVar8[-4] + piVar8[-3] + piVar8[-2] +
                            piVar8[-1] + piVar8[1] + *piVar8;
        piVar8 = piVar8 + 8;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    local_8 = 0;
    do {
      iVar6 = local_8 * 0x400 + *param_1;
      uVar9 = 0;
      do {
        uVar4 = *(uint *)(iVar6 + uVar9 * 4);
        if (uVar4 == param_3) goto LAB_00551b1e;
      } while ((uVar4 == 0) && (uVar9 = uVar9 + 1, uVar9 < 0x100));
      if ((local_8 == 3) && (param_4 != '\0')) {
        *(int *)param_1[1] = local_4;
        uVar9 = 4;
        do {
          piVar8 = (int *)(iVar6 + -4 + uVar9);
          piVar11 = (int *)(param_1[1] + -4 + uVar9);
          piVar10 = (int *)(param_1[1] + uVar9);
          uVar9 = uVar9 + 4;
          *piVar10 = *piVar8 + *piVar11;
        } while (uVar9 < 0x200);
        *(undefined4 *)(param_1[1] + 0x200) = 0;
        uVar9 = 0x204;
        do {
          iVar12 = uVar9 - 4;
          piVar8 = (int *)(param_1[1] + -4 + uVar9);
          piVar11 = (int *)(param_1[1] + uVar9);
          uVar9 = uVar9 + 4;
          *piVar11 = *(int *)(iVar12 + iVar6) + *piVar8;
        } while (uVar9 < 0x400);
      }
      else {
        *(undefined4 *)param_1[1] = 0;
        piVar8 = (int *)(iVar6 + 8);
        iVar6 = -iVar6;
        iVar12 = 0x33;
        do {
          iVar3 = iVar6 + -4;
          *(int *)((int)piVar8 + param_1[1] + iVar3) =
               *(int *)((int)piVar8 + param_1[1] + -4 + iVar3) + piVar8[-2];
          *(int *)((int)piVar8 + param_1[1] + iVar3 + 4) =
               piVar8[-1] + *(int *)((int)piVar8 + param_1[1] + iVar3);
          *(int *)((int)piVar8 + param_1[1] + iVar6 + 4) =
               *(int *)((int)piVar8 + param_1[1] + 4 + iVar3) + *piVar8;
          *(int *)((int)piVar8 + param_1[1] + iVar6 + 8) =
               *(int *)((int)piVar8 + param_1[1] + iVar6 + 4) + piVar8[1];
          *(int *)(param_1[1] + 0xc + iVar6 + (int)piVar8) =
               *(int *)((int)piVar8 + param_1[1] + iVar6 + 8) + piVar8[2];
          piVar8 = piVar8 + 5;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      piVar11 = (int *)param_1[3];
      piVar8 = piVar11 + param_3;
      for (; piVar11 != piVar8; piVar11 = piVar11 + 1) {
        iVar6 = *piVar11;
        *(int *)(param_1[4] + *(int *)(param_1[1] + (uint)param_2[iVar6 * 4 + local_8] * 4) * 4) =
             iVar6;
        piVar10 = (int *)(param_1[1] + (uint)param_2[iVar6 * 4 + local_8] * 4);
        *piVar10 = *piVar10 + 1;
      }
      iVar6 = param_1[3];
      param_1[3] = param_1[4];
      param_1[4] = iVar6;
LAB_00551b1e:
      local_8 = local_8 + 1;
    } while (local_8 < 4);
  }
  return param_1;
}




/* Function: FUN_00551b40 */

void __thiscall
FUN_00551b40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[2] = param_4;
  param_1[7] = param_3;
  param_1[5] = 0xfffff;
  *param_1 = param_5;
  param_1[3] = param_6;
  return;
}




/* Function: FUN_00551b80 */

int __thiscall FUN_00551b80(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((*param_1 != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) && (param_1[2] < 0x10000)
     ) {
    puVar2 = (undefined4 *)param_1[1];
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    iVar1 = param_1[2];
    param_1[1] = param_1[1] + 0x28;
    param_1[2] = iVar1 + 1;
    return iVar1;
  }
  return -1;
}




/* Function: FUN_00551bd0 */

int __thiscall FUN_00551bd0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((*param_1 != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) && (param_1[2] < 0xfffb))
  {
    puVar2 = (undefined4 *)param_1[1];
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    iVar1 = param_1[2];
    param_1[1] = param_1[1] + 0x28;
    param_1[2] = iVar1 + 1;
    return iVar1;
  }
  return -1;
}




/* Function: FUN_00551c20 */

undefined4 __fastcall FUN_00551c20(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1[1] != 0) && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
  }
  iVar2 = *param_1;
  param_1[1] = 0;
  FUN_0041ce80(iVar2);
  FUN_00423310(iVar2);
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *param_1 = 0;
  if ((param_1[4] != 0) && (piVar1 = (int *)param_1[3], piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
  }
  iVar2 = param_1[3];
  param_1[4] = 0;
  FUN_0041ce80(iVar2);
  FUN_00423310(iVar2);
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  param_1[2] = 0;
  param_1[5] = 0;
  return 1;
}




/* Function: FUN_00551ca0 */

undefined1 __thiscall FUN_00551ca0(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = FUN_00551c20();
  if (cVar1 == '\0') {
    return 0;
  }
  iVar3 = *param_2;
  uVar2 = FUN_00423420(param_1);
  iVar3 = (**(code **)(iVar3 + 0x5c))(param_2,0x280000,0x208,0x212,uVar2);
  if ((-1 < iVar3) && (*param_1 != 0)) {
    FUN_00425530("CMeshPage::m_VB",*param_1);
    iVar3 = *param_2;
    uVar2 = FUN_00423420(param_1 + 3);
    iVar3 = (**(code **)(iVar3 + 0x60))(param_2,0x20000,0x208,0x65,uVar2);
    if ((-1 < iVar3) && (iVar3 = param_1[3], iVar3 != 0)) {
      FUN_00425530("CMeshPage::m_IB",iVar3);
      return 1;
    }
  }
  return 0;
}




/* Function: FUN_00551d40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00551d40(int *param_1)

{
  int *piVar1;
  
  if ((param_1[1] != 0) && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
  }
  param_1[1] = 0;
  if ((param_1[4] != 0) && (param_1[3] == 0)) {
    (**(code **)(_DAT_00000000 + 0x30))(0);
  }
  param_1[4] = 0;
  return 1;
}




/* Function: FUN_00551d80 */

void FUN_00551d80(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00580772;
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




/* Function: FUN_00551e00 */

void FUN_00551e00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 8;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 8; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}




/* Function: FUN_00551e30 */

void FUN_00551e30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 8;
  }
  return;
}




/* Function: FUN_00552f30 */

void FUN_00552f30(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = param_3;
      puVar3 = param_1;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = param_1 + 8;
  }
  return;
}




/* Function: FUN_00552f60 */

void __thiscall
FUN_00552f60(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (param_3 != param_4) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    puVar2 = param_3;
    while (param_4 != puVar1) {
      puVar3 = param_4 + 8;
      puVar5 = puVar2 + 8;
      puVar6 = param_4;
      puVar7 = puVar2;
      for (iVar4 = 8; param_4 = puVar3, puVar2 = puVar5, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    *(undefined4 **)(param_1 + 8) = puVar2;
  }
  *param_2 = param_3;
  return;
}




/* Function: FUN_00552fb0 */

void __thiscall FUN_00552fb0(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_34 [8];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005807b0;
  local_10 = ExceptionList;
  iVar3 = *(int *)(param_1 + 4);
  local_14 = &stack0xffffffc0;
  puVar6 = local_34;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - iVar3 >> 5;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 5;
    }
    if (0x7ffffffU - iVar5 < param_3) {
      ExceptionList = &local_10;
      FUN_00551d80();
      ExceptionList = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 5;
    }
    if (uVar2 < iVar5 + param_3) {
      if (0x7ffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar3 >> 5;
      }
      if (uVar2 < iVar5 + param_3) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) - iVar3 >> 5;
        }
        uVar2 = iVar3 + param_3;
      }
      ExceptionList = &local_10;
      iVar3 = FUN_00493c27();
      local_8 = 0;
      uVar4 = FUN_00551e30(*(undefined4 *)(param_1 + 4));
      FUN_00552f30(uVar4);
      FUN_00551e30(param_2);
      pvVar1 = *(void **)(param_1 + 4);
      if (pvVar1 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - (int)pvVar1 >> 5;
      }
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      *(uint *)(param_1 + 0xc) = uVar2 * 0x20 + iVar3;
      *(uint *)(param_1 + 8) = (param_3 + iVar5) * 0x20 + iVar3;
      *(int *)(param_1 + 4) = iVar3;
      ExceptionList = local_10;
      return;
    }
    if ((uint)(*(int *)(param_1 + 8) - param_2 >> 5) < param_3) {
      ExceptionList = &local_10;
      FUN_0043afc0();
      local_8 = 2;
      FUN_0043b020();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x20;
    }
    else {
      ExceptionList = &local_10;
      uVar4 = FUN_0043afc0();
      *(undefined4 *)(param_1 + 8) = uVar4;
      FUN_0043aeb0();
    }
    FUN_00551e00();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00553250 */

void __thiscall FUN_00553250(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - iVar2 >> 5;
  }
  if (uVar1 < param_2) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar2 >> 5;
    }
    FUN_00552fb0(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 5))) {
    FUN_00552f60(&param_2,param_2 * 0x20 + *(int *)(param_1 + 4),*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_00553320 */

void __fastcall FUN_00553320(int param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005807f6;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00551c20();
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  piVar1 = *(int **)(param_1 + 0xc);
  local_4 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00553390 */

void FUN_00553390(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_48 [8];
  undefined4 local_20 [8];
  
  local_20[1] = 0;
  local_20[4] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  local_20[2] = 0;
  local_20[0] = 0;
  local_20[3] = 0;
  local_20[5] = 0xfffff;
  puVar2 = local_20;
  puVar3 = auStack_48;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00553250(param_1);
  return;
}




/* Function: FUN_005533f0 */

void __thiscall FUN_005533f0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 5) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 5))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00552f30(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x20;
    return;
  }
  FUN_00552fb0(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_00553460 */

undefined4 __fastcall FUN_00553460(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[3];
  if ((piVar1 != (int *)0x0) && (*param_1 != 0)) {
    iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,param_1 + 4,0);
    if ((-1 < iVar2) && (param_1[4] != 0)) {
      iVar2 = (**(code **)(*(int *)*param_1 + 0x2c))((int *)*param_1,0,0,param_1 + 1,0);
      if ((-1 < iVar2) && (param_1[1] != 0)) {
        param_1[2] = 0;
        param_1[5] = 0;
        FUN_00553390(0);
        return 1;
      }
    }
  }
  return 0;
}




/* Function: FUN_005534d0 */

undefined4 __thiscall
FUN_005534d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_1c = param_2;
  local_18 = param_4;
  local_20 = *(undefined4 *)(param_1 + 0x18);
  local_10 = 0;
  local_8 = 0;
  local_4 = param_3;
  local_c = 0xfffff;
  local_14 = param_5;
  FUN_005533f0(&local_20);
  return 1;
}




/* Function: FUN_00553530 */

uint __thiscall
FUN_00553530(int param_1,int param_2,ushort param_3,ushort param_4,ushort param_5,undefined4 param_6
            ,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (((*(int *)(param_1 + 0xc) != 0) && (uVar5 = *(uint *)(param_1 + 0x10), uVar5 != 0)) &&
     (*(int *)(param_1 + 0x14) < 0xfffb)) {
    if ((*(int *)(param_1 + 0x20) == 0) ||
       (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 5 == 0)) {
      uVar1 = FUN_00551b40(param_2,param_6,*(undefined4 *)(param_1 + 0x30),
                           *(undefined4 *)(param_1 + 0x18),param_7);
      FUN_005533f0(uVar1);
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 5;
    }
    iVar2 = iVar2 * 0x20 + -0x20 + *(int *)(param_1 + 0x20);
    if ((*(int *)(iVar2 + 4) != param_2) && (param_2 != 0)) {
      uVar1 = FUN_00551b40(param_2,param_6,*(undefined4 *)(param_1 + 0x30),
                           *(undefined4 *)(param_1 + 0x18),param_7);
      FUN_005533f0(uVar1);
      iVar2 = FUN_0046a460();
      iVar2 = iVar2 * 0x20 + -0x20 + *(int *)(param_1 + 0x20);
    }
    uVar5 = (uint)param_3;
    if ((int)uVar5 < *(int *)(iVar2 + 0x14)) {
      *(uint *)(iVar2 + 0x14) = uVar5;
    }
    uVar4 = (uint)param_4;
    if ((int)uVar4 < *(int *)(iVar2 + 0x14)) {
      *(uint *)(iVar2 + 0x14) = uVar4;
    }
    uVar3 = (uint)param_5;
    if ((int)uVar3 < *(int *)(iVar2 + 0x14)) {
      *(uint *)(iVar2 + 0x14) = uVar3;
    }
    if (*(int *)(iVar2 + 0x18) < (int)uVar5) {
      *(uint *)(iVar2 + 0x18) = uVar5;
    }
    if (*(int *)(iVar2 + 0x18) < (int)uVar4) {
      *(uint *)(iVar2 + 0x18) = uVar4;
    }
    if (*(int *)(iVar2 + 0x18) < (int)uVar3) {
      *(uint *)(iVar2 + 0x18) = uVar3;
    }
    **(ushort **)(param_1 + 0x10) = param_3;
    *(ushort *)(*(int *)(param_1 + 0x10) + 2) = param_4;
    *(ushort *)(*(int *)(param_1 + 0x10) + 4) = param_5;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 3;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 6;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 3;
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar5 & 0xffffff00;
}




/* Function: FUN_00553690 */

undefined4 * __thiscall FUN_00553690(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = 0;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_00493c27(pcVar2 + (1 - (int)(param_2 + 1)));
  param_1[1] = pcVar2;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[2] = param_3;
  param_1[3] = 0;
  return param_1;
}




/* Function: FUN_005536e0 */

undefined4 * __thiscall FUN_005536e0(undefined4 *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = 1;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_00493c27(pcVar2 + (1 - (int)(param_2 + 1)));
  param_1[1] = pcVar2;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_00493c27(pcVar2 + (1 - (int)(param_3 + 1)));
  param_1[3] = pcVar2;
  do {
    cVar1 = *param_3;
    param_3 = param_3 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[2] = 4;
  return param_1;
}




/* Function: FUN_00553760 */

void __fastcall FUN_00553760(int param_1)

{
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0xc));
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 4));
  }
  return;
}




/* Function: FUN_005537a0 */

undefined4 * __thiscall FUN_005537a0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_00493c27(pcVar2 + (1 - (int)(param_2 + 1)));
  *param_1 = pcVar2;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_00493c27(0x10);
  if (iVar3 != 0) {
    uVar4 = FUN_00555150();
    param_1[1] = uVar4;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}




/* Function: FUN_00553820 */

void FUN_00553820(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00493c27(0x10);
  if (iVar1 != 0) {
    uVar2 = FUN_00553690(param_1,param_2);
    FUN_005551d0(uVar2);
    return;
  }
  FUN_005551d0(0);
  return;
}




/* Function: FUN_00553860 */

void FUN_00553860(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00493c27(0x10);
  if (iVar1 != 0) {
    uVar2 = FUN_005536e0(param_1,param_2);
    FUN_005551d0(uVar2);
    return;
  }
  FUN_005551d0(0);
  return;
}




/* Function: FUN_005538a0 */

undefined4 __fastcall FUN_005538a0(undefined4 *param_1)

{
  return *param_1;
}




/* Function: FUN_005538b0 */

void __fastcall FUN_005538b0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_005551a0();
  if (pvVar1 != (void *)0x0) {
    FUN_00553760();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    FUN_00555160();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*param_1);
  }
  return;
}




/* Function: FUN_00553920 */

void __fastcall FUN_00553920(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_005551a0();
  if (pvVar1 != (void *)0x0) {
    FUN_00553760();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    FUN_00555160();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*param_1);
  }
  return;
}




/* Function: FUN_00553930 */

undefined4 * __thiscall FUN_00553930(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  
  if (param_1 != param_2) {
    FUN_005538b0();
    pcVar2 = (char *)*param_2;
    pcVar6 = pcVar2 + 1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_00493c27(pcVar2 + (1 - (int)pcVar6));
    *param_1 = pcVar2;
    pcVar6 = (char *)*param_2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_00493c27(0x10);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00555150();
    }
    param_1[1] = uVar4;
    piVar5 = (int *)FUN_005551a0();
    while (piVar5 != (int *)0x0) {
      if (*piVar5 == 0) {
        iVar3 = FUN_00493c27(0x10);
        if (iVar3 == 0) {
LAB_005539fc:
          param_2 = (undefined4 *)0x0;
        }
        else {
          param_2 = (undefined4 *)FUN_00553690(piVar5[1],piVar5[2]);
        }
      }
      else if (*piVar5 == 1) {
        iVar3 = FUN_00493c27(0x10);
        if (iVar3 == 0) goto LAB_005539fc;
        param_2 = (undefined4 *)FUN_005536e0(piVar5[1],piVar5[3]);
      }
      FUN_005551d0(param_2);
      piVar5 = (int *)FUN_005551b0();
    }
  }
  return param_1;
}




/* Function: FUN_00553a20 */

undefined4 * __thiscall FUN_00553a20(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  *param_1 = 1;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_00493c27(pcVar2 + (1 - (int)(param_2 + 1)));
  param_1[1] = pcVar2;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_00493c27(0x10);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00555150();
  }
  param_1[3] = uVar4;
  iVar3 = FUN_00493c27(8);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00555230();
  }
  param_1[4] = uVar4;
  param_1[5] = param_3;
  param_1[7] = 0;
  return param_1;
}




/* Function: FUN_00553ab0 */

undefined4 * __fastcall FUN_00553ab0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[1] = 0;
  param_1[4] = 0;
  *param_1 = 0xffffffff;
  iVar1 = FUN_00493c27(0x10);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00555150();
  }
  param_1[6] = uVar2;
  iVar1 = FUN_00493c27(0x10);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00555150();
  }
  param_1[7] = uVar2;
  iVar1 = FUN_00493c27(0x10);
  if (iVar1 != 0) {
    uVar2 = FUN_00555150();
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[5] = 0;
    param_1[9] = 0;
    param_1[8] = uVar2;
    return param_1;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return param_1;
}




/* Function: FUN_00553b40 */

int * FUN_00553b40(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005551a0();
  do {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 == 1) {
      if (piVar1[2] == param_3) {
        return piVar1;
      }
      piVar1 = (int *)FUN_00553b40(piVar1,param_2,param_3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    piVar1 = (int *)FUN_005551b0();
  } while( true );
}




/* Function: FUN_00553ba0 */

undefined4 FUN_00553ba0(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  bool bVar7;
  
  iVar2 = FUN_005551a0();
  do {
    if (iVar2 == 0) {
      puVar5 = (undefined4 *)FUN_00493c27(8);
      if (puVar5 == (undefined4 *)0x0) {
        return 0;
      }
      uVar6 = FUN_00555210();
      *puVar5 = uVar6;
      iVar2 = FUN_00493c27(8);
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_005538a0();
        uVar6 = FUN_005537a0(uVar6);
      }
      puVar5[1] = uVar6;
      FUN_00553930(param_1);
      FUN_005551d0(puVar5);
      return 1;
    }
    pbVar3 = (byte *)FUN_005538a0();
    pbVar4 = (byte *)FUN_005538a0();
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_00553bf4:
        iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00553bf9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_00553bf4;
      pbVar4 = pbVar4 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_00553bf9:
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_005551b0();
  } while( true );
}




/* Function: FUN_00553c80 */

int __thiscall FUN_00553c80(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) || ((*param_1 & 2) != 0)) {
    return 0;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  iVar1 = FUN_00493c27(0x20);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00553a20(param_2,param_3);
  }
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x18) = param_4;
  if (param_3 == 0) {
    FUN_005551d0(iVar1);
    return iVar1;
  }
  FUN_005551d0(iVar1);
  return iVar1;
}




/* Function: FUN_00553d00 */

void __thiscall FUN_00553d00(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  void *_Str;
  char *pcVar3;
  long lVar4;
  int iVar5;
  byte local_9;
  undefined4 local_8;
  int local_4;
  
  _Str = (void *)FUN_005551a0();
  while (_Str != (void *)0x0) {
    iVar5 = 0;
    if (param_3 == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(undefined4 *)(param_3 + 8);
    }
    pcVar3 = *(char **)((int)_Str + 4);
    cVar2 = (char)pcVar3;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    local_9 = ((char)pcVar3 - (cVar2 + '\x01')) + 1;
    fwrite(_Str,4,1,*(FILE **)(param_1 + 0x10));
    fwrite((void *)((int)_Str + 8),4,1,*(FILE **)(param_1 + 0x10));
    fwrite(&local_8,4,1,*(FILE **)(param_1 + 0x10));
    fwrite(&local_9,1,1,*(FILE **)(param_1 + 0x10));
    fwrite(*(void **)((int)_Str + 4),(uint)local_9,1,*(FILE **)(param_1 + 0x10));
    lVar4 = ftell(*(FILE **)(param_1 + 0x10));
    *(long *)((int)_Str + 0x18) = lVar4;
    fwrite((void *)(*(int *)((int)_Str + 0x10) + 4),1,4,*(FILE **)(param_1 + 0x10));
    local_4 = 0;
    if (0 < *(int *)(*(int *)((int)_Str + 0x10) + 4)) {
      do {
        fwrite((void *)(**(int **)((int)_Str + 0x10) + 8 + iVar5),1,4,*(FILE **)(param_1 + 0x10));
        fwrite((void *)(**(int **)((int)_Str + 0x10) + 4 + iVar5),1,4,*(FILE **)(param_1 + 0x10));
        fwrite((void *)(**(int **)((int)_Str + 0x10) + iVar5),1,4,*(FILE **)(param_1 + 0x10));
        local_4 = local_4 + 1;
        iVar5 = iVar5 + 0xc;
      } while (local_4 < *(int *)(*(int *)((int)_Str + 0x10) + 4));
    }
    if (*(int *)((int)_Str + 0xc) != 0) {
      FUN_00553d00(*(int *)((int)_Str + 0xc),_Str);
    }
    _Str = (void *)FUN_005551b0();
  }
  return;
}




/* Function: FUN_00553e60 */

undefined4 __thiscall FUN_00553e60(int param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  iVar3 = 3;
  bVar6 = true;
  pbVar5 = param_2;
  pbVar4 = &DAT_00593990;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *pbVar5 == *pbVar4;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (bVar6);
  if (bVar6) {
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x14);
    }
    return 1;
  }
  iVar3 = 2;
  bVar6 = true;
  pbVar5 = param_2;
  pbVar4 = &DAT_00594448;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *pbVar5 == *pbVar4;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (bVar6);
  if (bVar6) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return 1;
  }
  piVar2 = (int *)FUN_005551a0();
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if (*piVar2 == 1) {
      pbVar5 = (byte *)piVar2[1];
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar4;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00553f14:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00553f19;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00553f14;
        pbVar4 = pbVar4 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00553f19:
      if (iVar3 == 0) {
        *(int **)(param_1 + 0x28) = piVar2;
        return 1;
      }
    }
    piVar2 = (int *)FUN_005551b0();
  } while( true );
}




/* Function: FUN_00553f50 */

void FUN_00553f50(code *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005551a0();
  while (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      (*param_1)(piVar1[1],param_2);
    }
    piVar1 = (int *)FUN_005551b0();
  }
  return;
}




/* Function: FUN_00553fa0 */

undefined4 __fastcall FUN_00553fa0(uint *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  if (((FILE *)param_1[4] != (FILE *)0x0) && ((*param_1 & 2) == 0)) {
    if ((*param_1 & 4) == 0) {
      pcVar1 = "USMFile#2";
      do {
        pcVar2 = pcVar1;
        pcVar1 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      fwrite(&DAT_0059444c,(size_t)(pcVar2 + -0x59444b),1,(FILE *)param_1[4]);
    }
    return 1;
  }
  return 0;
}




/* Function: FUN_00553ff0 */

undefined4 __fastcall FUN_00553ff0(byte *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  char local_c8 [200];
  
  if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
    return 0;
  }
  if ((*param_1 & 4) == 0) {
    fseek(*(FILE **)(param_1 + 0x10),0,0);
    pcVar2 = "USMFile#2";
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    fread(local_c8,(size_t)(pcVar3 + -0x59444b),1,*(FILE **)(param_1 + 0x10));
    iVar1 = 10;
    bVar4 = true;
    pcVar2 = "USMFile#2";
    pcVar3 = local_c8;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if ((!bVar4) && ((*param_1 & 2) != 0)) {
      MessageBoxA((HWND)0x0,"This format not suport","Error",0);
      return 0;
    }
  }
  return 1;
}




/* Function: FUN_00554090 */

undefined4 FUN_00554090(undefined4 param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  puVar2 = (undefined4 *)FUN_005551a0();
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    pbVar3 = (byte *)FUN_005538a0();
    pbVar5 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_005540e4:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005540e9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_005540e4;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_005540e9:
    if (iVar4 == 0) {
      *param_3 = *puVar2;
      return puVar2[1];
    }
    puVar2 = (undefined4 *)FUN_005551b0();
  } while( true );
}




/* Function: FUN_00554120 */

void __fastcall FUN_00554120(int param_1)

{
  void *pvVar1;
  
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 4));
  }
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    FUN_00555240();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)FUN_005551a0();
  if (pvVar1 != (void *)0x0) {
    FUN_00554120();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0xc);
  if (pvVar1 != (void *)0x0) {
    FUN_00555160();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(*(int *)(param_1 + 0x1c) + 8) != 0)) {
    pvVar1 = (void *)FUN_005551a0();
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    pvVar1 = *(void **)(*(int *)(param_1 + 0x1c) + 8);
    if (pvVar1 != (void *)0x0) {
      FUN_00555160();
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
  }
  if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x1c));
  }
  return;
}




/* Function: FUN_00554200 */

undefined4 __thiscall FUN_00554200(uint *param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  FILE *pFVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  code *pcVar10;
  byte local_1e9;
  size_t local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  undefined1 local_1d0 [4];
  undefined1 local_1cc [4];
  undefined1 local_1c8 [4];
  int local_1c4 [13];
  undefined1 local_190 [200];
  undefined1 local_c8 [200];
  
  if (((param_3 & 1) != 0) && ((param_3 & 2) != 0)) {
    return 0;
  }
  pvVar6 = (void *)param_1[9];
  if (pvVar6 != (void *)0x0) {
    FUN_00555240();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar6);
  }
  iVar2 = FUN_00493c27(8);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00555230();
  }
  param_1[9] = uVar3;
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = (char *)FUN_00493c27(pcVar4 + (1 - (int)(param_2 + 1)));
  param_1[1] = (uint)pcVar4;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  *param_1 = param_3;
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) == 0) {
      return 1;
    }
    pFVar5 = fopen((char *)param_1[1],"rb");
    param_1[4] = (uint)pFVar5;
    if (pFVar5 != (FILE *)0x0) {
      iVar2 = FUN_00553ff0();
      pcVar10 = fseek_exref;
      if (iVar2 != 0) {
        fseek((FILE *)param_1[4],-8,2);
        fread(param_1 + 2,4,1,(FILE *)param_1[4]);
        fseek((FILE *)param_1[4],-4,2);
        fread(param_1 + 3,4,1,(FILE *)param_1[4]);
        fseek((FILE *)param_1[4],param_1[2],0);
        fread(&local_1d4,4,1,(FILE *)param_1[4]);
        local_1e4 = 0;
        if (0 < local_1d4) {
          do {
            pvVar6 = (void *)FUN_00493c27(8);
            fread(pvVar6,4,1,(FILE *)param_1[4]);
            fread(&local_1e8,4,1,(FILE *)param_1[4]);
            fread(local_190,local_1e8,1,(FILE *)param_1[4]);
            iVar2 = FUN_00493c27(8);
            if (iVar2 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = FUN_005537a0(local_190);
            }
            *(undefined4 *)((int)pvVar6 + 4) = uVar7;
            fread(&local_1dc,4,1,(FILE *)param_1[4]);
            iVar2 = 0;
            if (0 < local_1dc) {
              do {
                fread(&local_1d8,4,1,(FILE *)param_1[4]);
                fread(&local_1e8,4,1,(FILE *)param_1[4]);
                fread(local_190,local_1e8,1,(FILE *)param_1[4]);
                fread(&local_1e8,4,1,(FILE *)param_1[4]);
                if (local_1d8 == 0) {
                  iVar8 = FUN_00493c27(0x10);
                  if (iVar8 == 0) {
LAB_005544c6:
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = FUN_00553690(local_190,local_1e8);
                  }
                }
                else {
                  fread(&local_1e8,4,1,(FILE *)param_1[4]);
                  fread(local_c8,local_1e8,1,(FILE *)param_1[4]);
                  iVar8 = FUN_00493c27(0x10);
                  if (iVar8 == 0) goto LAB_005544c6;
                  uVar7 = FUN_005536e0(local_190,local_c8);
                }
                FUN_005551d0(uVar7);
                iVar2 = iVar2 + 1;
              } while (iVar2 < local_1dc);
            }
            FUN_005551d0(pvVar6);
            local_1e4 = local_1e4 + 1;
            pcVar10 = fseek_exref;
          } while (local_1e4 < local_1d4);
        }
        FUN_00553ff0();
        FUN_00555150();
        FUN_00555150();
        FUN_00555150();
        local_1e8 = *param_1;
        *param_1 = 8;
        (*pcVar10)(param_1[4],param_1[3],0);
        fread(&local_1e0,1,4,(FILE *)param_1[4]);
        iVar2 = 0;
        if (0 < local_1e0) {
          do {
            fread(local_1c8,1,4,(FILE *)param_1[4]);
            fread(local_1cc,1,4,(FILE *)param_1[4]);
            fread(local_1d0,1,4,(FILE *)param_1[4]);
            FUN_00555270(local_1d0);
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_1e0);
        }
        pcVar10 = ftell_exref;
        lVar9 = ftell((FILE *)param_1[4]);
        if (lVar9 < (int)param_1[2]) {
          do {
            fread(local_1c4,4,1,(FILE *)param_1[4]);
            if (local_1c4[0] == 1) {
              fread(&local_1dc,4,1,(FILE *)param_1[4]);
              fread(&local_1d8,4,1,(FILE *)param_1[4]);
              fread(&local_1e9,1,1,(FILE *)param_1[4]);
              pvVar6 = (void *)FUN_00493c27(local_1e9);
              fread(pvVar6,(uint)local_1e9,1,(FILE *)param_1[4]);
              uVar7 = (*pcVar10)(param_1[4]);
              local_1e4 = 0;
              if (local_1d8 == 0) {
                iVar2 = FUN_00553c80(pvVar6,0,uVar7);
                local_1e4 = *(int *)(iVar2 + 0x10);
              }
              else {
                iVar2 = FUN_00553b40(0,local_1dc,local_1d8);
                if (iVar2 != 0) {
                  local_1e4 = FUN_00553c80(pvVar6,iVar2,uVar7);
                }
                local_1e4 = *(int *)(local_1e4 + 0x10);
              }
              fread(&local_1e0,1,4,(FILE *)param_1[4]);
              iVar2 = 0;
              if (0 < local_1e0) {
                do {
                  fread(local_1c8,1,4,(FILE *)param_1[4]);
                  fread(local_1cc,1,4,(FILE *)param_1[4]);
                  fread(local_1d0,1,4,(FILE *)param_1[4]);
                  FUN_00555270(local_1d0);
                  iVar2 = iVar2 + 1;
                } while (iVar2 < local_1e0);
              }
              pcVar10 = ftell_exref;
              if (pvVar6 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                operator_delete(pvVar6);
              }
              param_1[10] = 0;
            }
            iVar2 = (*pcVar10)(param_1[4]);
          } while (iVar2 < (int)param_1[2]);
        }
        *param_1 = local_1e8;
        FUN_00553ff0();
        FUN_00555160();
        FUN_00555160();
        FUN_00555160();
        return 1;
      }
      fclose((FILE *)param_1[4]);
    }
  }
  else {
    pFVar5 = fopen((char *)param_1[1],"wb");
    param_1[4] = (uint)pFVar5;
    if (pFVar5 != (FILE *)0x0) {
      FUN_00553fa0();
      return 1;
    }
  }
  return 0;
}




/* Function: FUN_00554750 */

undefined4 __fastcall FUN_00554750(byte *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  void *_Str;
  int *_Str_00;
  int iVar4;
  int iVar5;
  char *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(FILE **)(param_1 + 0x10) != (FILE *)0x0) {
    if ((*param_1 & 1) != 0) {
      fseek(*(FILE **)(param_1 + 0x10),0,2);
      lVar3 = ftell(*(FILE **)(param_1 + 0x10));
      *(long *)(param_1 + 0xc) = lVar3;
      fwrite((void *)(*(int *)(param_1 + 0x24) + 4),1,4,*(FILE **)(param_1 + 0x10));
      iVar4 = 0;
      if (0 < *(int *)(*(int *)(param_1 + 0x24) + 4)) {
        iVar5 = 0;
        do {
          fwrite((void *)(**(int **)(param_1 + 0x24) + 8 + iVar5),1,4,*(FILE **)(param_1 + 0x10));
          fwrite((void *)(**(int **)(param_1 + 0x24) + 4 + iVar5),1,4,*(FILE **)(param_1 + 0x10));
          fwrite((void *)(**(int **)(param_1 + 0x24) + iVar5),1,4,*(FILE **)(param_1 + 0x10));
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0xc;
        } while (iVar4 < *(int *)(*(int *)(param_1 + 0x24) + 4));
      }
      FUN_00553d00(*(undefined4 *)(param_1 + 0x20),0);
      lVar3 = ftell(*(FILE **)(param_1 + 0x10));
      *(long *)(param_1 + 8) = lVar3;
      local_8 = FUN_00555210();
      fwrite(&local_8,4,1,*(FILE **)(param_1 + 0x10));
      _Str = (void *)FUN_005551a0();
      while (_Str != (void *)0x0) {
        fwrite(_Str,4,1,*(FILE **)(param_1 + 0x10));
        local_c = (char *)**(undefined4 **)((int)_Str + 4);
        pcVar1 = local_c + 1;
        do {
          cVar2 = *local_c;
          local_c = local_c + 1;
        } while (cVar2 != '\0');
        local_c = local_c + (1 - (int)pcVar1);
        fwrite(&local_c,4,1,*(FILE **)(param_1 + 0x10));
        fwrite((void *)**(undefined4 **)((int)_Str + 4),(size_t)local_c,1,*(FILE **)(param_1 + 0x10)
              );
        local_4 = FUN_00555210();
        fwrite(&local_4,4,1,*(FILE **)(param_1 + 0x10));
        _Str_00 = (int *)FUN_005551a0();
        while (_Str_00 != (int *)0x0) {
          fwrite(_Str_00,4,1,*(FILE **)(param_1 + 0x10));
          local_c = (char *)_Str_00[1];
          pcVar1 = local_c + 1;
          do {
            cVar2 = *local_c;
            local_c = local_c + 1;
          } while (cVar2 != '\0');
          local_c = local_c + (1 - (int)pcVar1);
          fwrite(&local_c,4,1,*(FILE **)(param_1 + 0x10));
          fwrite((void *)_Str_00[1],(size_t)local_c,1,*(FILE **)(param_1 + 0x10));
          fwrite(_Str_00 + 2,4,1,*(FILE **)(param_1 + 0x10));
          if (*_Str_00 == 1) {
            local_c = (char *)_Str_00[3];
            pcVar1 = local_c + 1;
            do {
              cVar2 = *local_c;
              local_c = local_c + 1;
            } while (cVar2 != '\0');
            local_c = local_c + (1 - (int)pcVar1);
            fwrite(&local_c,4,1,*(FILE **)(param_1 + 0x10));
            fwrite((void *)_Str_00[3],(size_t)local_c,1,*(FILE **)(param_1 + 0x10));
          }
          _Str_00 = (int *)FUN_005551b0();
        }
        _Str = (void *)FUN_005551b0();
      }
      fwrite(param_1 + 8,4,1,*(FILE **)(param_1 + 0x10));
      fwrite(param_1 + 0xc,4,1,*(FILE **)(param_1 + 0x10));
    }
    fclose(*(FILE **)(param_1 + 0x10));
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0] = 0xff;
    param_1[1] = 0xff;
    param_1[2] = 0xff;
    param_1[3] = 0xff;
    return 1;
  }
  return 0;
}




/* Function: FUN_005549e0 */

/* WARNING: Removing unreachable block (ram,0x00554aa6) */

undefined4 FUN_005549e0(char *param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (*param_1 == ':') {
    FUN_00553e60(&DAT_00594448);
  }
  else {
    iVar4 = -1;
  }
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  do {
    iVar5 = iVar4 + 1;
    iVar4 = iVar5;
    if (param_1[iVar5] != ':') {
      do {
        if ((int)pcVar3 - (int)(param_1 + 1) <= iVar4) break;
        iVar1 = iVar4 + 1;
        iVar4 = iVar4 + 1;
      } while (param_1[iVar1] != ':');
      if (iVar5 != iVar4) {
        pcVar3 = (char *)FUN_00493c27((iVar4 - iVar5) + 1);
        strncpy(pcVar3,param_1 + iVar5,iVar4 - iVar5);
        pcVar3[iVar4 - iVar5] = '\0';
        FUN_00553e60(pcVar3);
                    /* WARNING: Subroutine does not return */
        operator_delete(pcVar3);
      }
    }
    if (((param_1[iVar4] == '\0') && (param_1[iVar4 + 1] == '\0')) ||
       ((int)pcVar3 - (int)(param_1 + 1) <= iVar4)) {
      return 1;
    }
  } while( true );
}




/* Function: FUN_00554ad0 */

int __thiscall FUN_00554ad0(uint *param_1,size_t param_2,void *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *_DstBuf;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  FILE *_File;
  byte *pbVar10;
  undefined4 *puVar11;
  void *pvVar12;
  undefined4 *puVar13;
  bool bVar14;
  size_t _Offset;
  int local_44;
  int local_40;
  size_t local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  long local_18;
  long local_14 [5];
  
  if ((param_1[4] != 0) && ((*param_1 & 1) == 0)) {
    local_28 = 0;
    local_18 = 0;
    if ((*param_1 & 4) != 0) {
LAB_00554f98:
      if (param_4 == 0) {
        fseek((FILE *)param_1[4],local_18,0);
      }
      return local_28;
    }
    if (param_1[10] == 0) {
      piVar9 = (int *)param_1[9];
    }
    else {
      piVar9 = *(int **)(param_1[10] + 0x10);
    }
    local_30 = FUN_00554090(param_1[6],param_2,&local_24);
    if ((local_30 != 0) && (iVar2 = FUN_00554090(param_1[7],param_2,&local_24), iVar2 != 0)) {
      if ((param_3 != (void *)0x0) && (0 < param_4)) {
        param_2 = 0;
        local_40 = 0;
        piVar3 = (int *)FUN_005551a0();
        iVar2 = FUN_005551a0();
        while (piVar3 != (int *)0x0) {
          if ((iVar2 == 0) || (*piVar3 == 1)) {
LAB_00554bfb:
            param_2 = 0;
            break;
          }
          pbVar10 = *(byte **)(iVar2 + 4);
          pbVar5 = (byte *)piVar3[1];
          do {
            bVar1 = *pbVar5;
            bVar14 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_00554bc8:
              iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_00554bcd;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar14 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_00554bc8;
            pbVar5 = pbVar5 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_00554bcd:
          if ((iVar6 != 0) || (piVar3[2] != *(int *)(iVar2 + 8))) goto LAB_00554bfb;
          param_2 = param_2 + piVar3[2];
          piVar3 = (int *)FUN_005551b0();
          iVar2 = FUN_005551b0();
        }
        iVar2 = FUN_005551a0();
        if (iVar2 != 0) {
          local_40 = 0;
          do {
            local_40 = local_40 + *(int *)(iVar2 + 8);
            iVar2 = FUN_005551b0();
          } while (iVar2 != 0);
        }
        iVar2 = 0;
        local_2c = 0;
        local_18 = ftell((FILE *)param_1[4]);
        local_1c = 0;
        if (0 < piVar9[1]) {
          local_44 = 0;
          pvVar12 = param_3;
          do {
            if (((long *)(local_44 + *piVar9))[2] == local_24) {
              fseek((FILE *)param_1[4],*(long *)(local_44 + *piVar9),0);
              iVar6 = *(int *)(local_44 + 4 + *piVar9);
              if (param_4 < iVar6) {
                iVar6 = param_4;
              }
              local_2c = local_2c + iVar6;
              if (0 < iVar6) {
                local_28 = local_28 + iVar6;
                local_20 = iVar6;
                do {
                  if (pvVar12 != (void *)0x0) {
                    pvVar12 = (void *)((int)pvVar12 + iVar2);
                    param_3 = pvVar12;
                  }
                  local_34 = 0;
                  if (param_2 == 0) {
                    FUN_00555150();
                    piVar3 = (int *)FUN_005551a0();
                    iVar2 = 0;
                    while (piVar3 != (int *)0x0) {
                      iVar2 = 0;
                      local_38 = 0;
                      iVar6 = FUN_005551a0();
                      iVar4 = local_38;
                      while (iVar6 != 0) {
                        pbVar10 = *(byte **)(iVar6 + 4);
                        pbVar5 = (byte *)piVar3[1];
                        do {
                          bVar1 = *pbVar5;
                          bVar14 = bVar1 < *pbVar10;
                          if (bVar1 != *pbVar10) {
LAB_00554d5a:
                            iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                            goto LAB_00554d5f;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar5[1];
                          bVar14 = bVar1 < pbVar10[1];
                          if (bVar1 != pbVar10[1]) goto LAB_00554d5a;
                          pbVar5 = pbVar5 + 2;
                          pbVar10 = pbVar10 + 2;
                        } while (bVar1 != 0);
                        iVar4 = 0;
LAB_00554d5f:
                        if (iVar4 == 0) {
                          local_34 = local_34 + *(int *)(iVar6 + 8);
                          local_38 = iVar2;
                          if (*piVar3 == 1) {
                            fread(&local_3c,4,1,(FILE *)param_1[4]);
                            if (param_3 != (void *)0x0) {
                              if (local_3c == 0) {
                                *(undefined4 *)(iVar2 + (int)param_3) = 0;
                                FUN_005551d0(iVar6);
                              }
                              else {
                                pvVar12 = (void *)FUN_00493c27(local_3c);
                                fread(pvVar12,local_3c,1,(FILE *)param_1[4]);
                                *(void **)(iVar2 + (int)param_3) = pvVar12;
                                FUN_005551d0(iVar6);
                              }
                              goto LAB_00554ef0;
                            }
                            _File = (FILE *)param_1[4];
                            _Offset = local_3c;
                          }
                          else {
                            _Offset = piVar3[2];
                            if (param_3 != (void *)0x0) {
                              _DstBuf = (undefined4 *)FUN_00493c27(_Offset);
                              fread(_DstBuf,piVar3[2],1,(FILE *)param_1[4]);
                              uVar8 = *(uint *)(iVar6 + 8);
                              puVar11 = _DstBuf;
                              puVar13 = (undefined4 *)(local_38 + (int)param_3);
                              for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                *puVar13 = *puVar11;
                                puVar11 = puVar11 + 1;
                                puVar13 = puVar13 + 1;
                              }
                              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                                *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
                                puVar11 = (undefined4 *)((int)puVar11 + 1);
                                puVar13 = (undefined4 *)((int)puVar13 + 1);
                              }
                    /* WARNING: Subroutine does not return */
                              operator_delete(_DstBuf);
                            }
                            _File = (FILE *)param_1[4];
                          }
                          fseek(_File,_Offset,1);
                          FUN_005551d0(iVar6);
                          goto LAB_00554ef0;
                        }
                        iVar2 = iVar2 + *(int *)(iVar6 + 8);
                        iVar6 = FUN_005551b0();
                        iVar4 = iVar2;
                      }
                      local_38 = iVar4;
                      if (*piVar3 == 1) {
                        fread(local_14,4,1,(FILE *)param_1[4]);
                        fseek((FILE *)param_1[4],local_14[0],1);
                      }
                      else {
                        fseek((FILE *)param_1[4],piVar3[2],1);
                      }
LAB_00554ef0:
                      piVar3 = (int *)FUN_005551b0();
                      iVar2 = local_34;
                    }
                    iVar6 = FUN_005551a0();
                    while (iVar6 != 0) {
                      iVar4 = FUN_005551a0();
                      while (iVar4 != 0) {
                        if (iVar4 == iVar6) goto LAB_00554f44;
                        iVar4 = FUN_005551b0();
                      }
                      iVar2 = iVar2 + *(int *)(iVar6 + 8);
LAB_00554f44:
                      iVar6 = FUN_005551b0();
                    }
                    FUN_00555160();
                    pvVar12 = param_3;
                  }
                  else {
                    fread(pvVar12,param_2,1,(FILE *)param_1[4]);
                    iVar2 = local_40;
                  }
                  local_20 = local_20 + -1;
                } while (local_20 != 0);
              }
              if (param_4 <= local_2c) break;
            }
            local_44 = local_44 + 0xc;
            local_1c = local_1c + 1;
          } while (local_1c < piVar9[1]);
        }
        goto LAB_00554f98;
      }
      iVar2 = piVar9[1];
      iVar6 = 0;
      if (0 < iVar2) {
        piVar9 = (int *)(*piVar9 + 4);
        do {
          if (piVar9[1] == local_24) {
            iVar6 = iVar6 + *piVar9;
          }
          piVar9 = piVar9 + 3;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        return iVar6;
      }
    }
  }
  return 0;
}




/* Function: FUN_00555010 */

void __fastcall FUN_00555010(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  FUN_00554750();
  pvVar2 = *(void **)(param_1 + 0x24);
  if (pvVar2 != (void *)0x0) {
    FUN_00555240();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)FUN_005551a0();
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((int)pvVar2 + 4);
    if (pvVar1 != (void *)0x0) {
      FUN_00553920();
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x18);
  if (pvVar2 != (void *)0x0) {
    FUN_00555160();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)FUN_005551a0();
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((int)pvVar2 + 4);
    if (pvVar1 != (void *)0x0) {
      FUN_00553920();
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x1c);
  if (pvVar2 != (void *)0x0) {
    FUN_00555160();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)FUN_005551a0();
  if (pvVar2 != (void *)0x0) {
    FUN_00554120();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x20);
  if (pvVar2 != (void *)0x0) {
    FUN_00555160();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 4));
  }
  return;
}




/* Function: FUN_00555150 */

void __fastcall FUN_00555150(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}




/* Function: FUN_00555160 */

void __fastcall FUN_00555160(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  return;
}




/* Function: FUN_005551a0 */

undefined4 __fastcall FUN_005551a0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 8);
}




/* Function: FUN_005551b0 */

undefined4 __fastcall FUN_005551b0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 8) != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 8) + 4), iVar1 != 0)) {
    *(int *)(param_1 + 8) = iVar1;
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}




/* Function: FUN_005551d0 */

void __thiscall FUN_005551d0(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00493c27(0xc);
  piVar1[2] = param_2;
  *piVar1 = param_1[1];
  piVar1[1] = 0;
  if (param_1[1] != 0) {
    *(int **)(param_1[1] + 4) = piVar1;
  }
  param_1[1] = (int)piVar1;
  if (*param_1 == 0) {
    *param_1 = (int)piVar1;
    param_1[2] = (int)piVar1;
  }
  return;
}




/* Function: FUN_00555210 */

int __fastcall FUN_00555210(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}




/* Function: FUN_00555230 */

void __fastcall FUN_00555230(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return;
}




/* Function: FUN_00555240 */

void __fastcall FUN_00555240(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




/* Function: FUN_00555270 */

void __thiscall FUN_00555270(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar2 = param_1[1];
  if ((0 < iVar2) && (iVar1 = *param_1 + iVar2 * 0xc, *(int *)(iVar1 + -4) == param_2[2])) {
    *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + param_2[1];
    return;
  }
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)thunk_FUN_00493c27((iVar2 * 3 + 3) * 4);
    puVar5 = (undefined4 *)*param_1;
    for (uVar4 = param_1[1] * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*param_1);
  }
  iVar2 = thunk_FUN_00493c27(0xc);
  *param_1 = iVar2;
  *(undefined4 *)(iVar2 + 4 + param_1[1] * 0xc) = param_2[1];
  *(undefined4 *)(*param_1 + param_1[1] * 0xc) = *param_2;
  *(undefined4 *)(*param_1 + 8 + param_1[1] * 0xc) = param_2[2];
  param_1[1] = param_1[1] + 1;
  return;
}




/* Function: FUN_00555360 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555360(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < param_3) {
    uVar1 = _DAT_005bb3b0;
    if (5 < param_3) {
      iVar3 = param_2 * 8 + param_1;
      iVar6 = param_2 * 0x10 + param_1;
      iVar4 = param_2 * 0x18 + param_1;
      iVar5 = param_2 * 0x20 + param_1;
      iVar2 = 0;
      do {
        *(undefined4 *)(iVar2 + param_1) = uVar1;
        iVar7 = iVar7 + 5;
        *(undefined4 *)(iVar2 + 4 + param_1) = 0;
        *(undefined4 *)(iVar3 + iVar2) = 0;
        *(undefined4 *)(iVar3 + 4 + iVar2) = 0;
        *(undefined4 *)(iVar6 + iVar2) = 0;
        *(undefined4 *)(iVar6 + 4 + iVar2) = 0;
        *(undefined4 *)(iVar4 + iVar2) = 0;
        *(undefined4 *)(iVar4 + 4 + iVar2) = 0;
        *(undefined4 *)(iVar5 + iVar2) = 0;
        uVar1 = _DAT_005bb3b0;
        *(undefined4 *)(iVar5 + 4 + iVar2) = 0;
        iVar2 = iVar2 + param_2 * 0x28;
      } while (iVar7 <= param_3 + -6);
    }
    iVar2 = iVar7 * param_2 * 8;
    do {
      *(undefined4 *)(iVar2 + param_1) = uVar1;
      uVar1 = _DAT_005bb3b0;
      iVar7 = iVar7 + 1;
      *(undefined4 *)(iVar2 + 4 + param_1) = 0;
      iVar2 = iVar2 + param_2 * 8;
    } while (iVar7 < param_3);
  }
  return;
}




/* Function: FUN_005554a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005554a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  int local_38;
  double local_20;
  
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    local_38 = 1;
    iVar2 = 0;
    if (0 < iVar4) {
      if (iVar4 < 6) {
        iVar5 = *(int *)(param_1 + 8);
      }
      else {
        local_38 = 1;
        iVar5 = *(int *)(param_1 + 8);
        do {
          local_38 = local_38 * *(int *)(iVar5 + iVar2 * 4) * *(int *)(iVar5 + 4 + iVar2 * 4) *
                     *(int *)(iVar5 + 8 + iVar2 * 4) * *(int *)(iVar5 + 0xc + iVar2 * 4) *
                     *(int *)(iVar5 + 0x10 + iVar2 * 4);
          iVar2 = iVar2 + 5;
        } while (iVar2 <= iVar4 + -6);
      }
      do {
        local_38 = local_38 * *(int *)(iVar5 + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar4);
    }
    iVar4 = 1;
    while( true ) {
      local_20 = _DAT_005bb3d0;
      FUN_00555360(param_2,param_3,local_38);
      iVar2 = FUN_00557d50();
      iVar5 = 0;
      do {
        iVar1 = FUN_00557d50();
        iVar3 = 0;
        if (0 < iVar4) {
          do {
            FUN_0055695c(param_1,1,param_2,param_3,0,param_4,param_5,0);
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar4);
        }
        iVar3 = FUN_00557d50();
        fVar6 = (float10)FUN_00557da4((double)((float)(iVar3 - iVar1) +
                                              *(float *)(&DAT_005bb3e0 +
                                                        (iVar3 - iVar1 >> 0x1f) * -4)));
        if (fVar6 < (float10)local_20) {
          local_20 = (double)fVar6;
        }
        fVar6 = (float10)FUN_00557da4((double)((float)(iVar3 - iVar2) +
                                              *(float *)(&DAT_005bb3e0 +
                                                        (iVar3 - iVar2 >> 0x1f) * -4)));
      } while ((fVar6 <= (float10)_DAT_005bb3c8) && (iVar5 = iVar5 + 1, iVar5 < 4));
      if (_DAT_005bb3c0 <= local_20) break;
      iVar4 = iVar4 * 2;
    }
    return (float10)local_20 / (float10)iVar4;
  }
  return (float10)_DAT_005bb3d8;
}




/* Function: FUN_00555668 */

uint * FUN_00555668(uint param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if ((int)param_1 < 0) {
    return (uint *)0x0;
  }
  iVar1 = 0;
  if (0 < (int)param_1) {
    if (5 < (int)param_1) {
      do {
        if (*(int *)(param_2 + iVar1 * 4) < 1) {
          return (uint *)0x0;
        }
        if (*(int *)(param_2 + 4 + iVar1 * 4) < 1) {
          return (uint *)0x0;
        }
        if (*(int *)(param_2 + 8 + iVar1 * 4) < 1) {
          return (uint *)0x0;
        }
        if (*(int *)(param_2 + 0xc + iVar1 * 4) < 1) {
          return (uint *)0x0;
        }
        if (*(int *)(param_2 + 0x10 + iVar1 * 4) < 1) {
          return (uint *)0x0;
        }
        iVar1 = iVar1 + 5;
      } while (iVar1 <= (int)(param_1 - 6));
    }
    do {
      if (*(int *)(param_2 + iVar1 * 4) < 1) {
        return (uint *)0x0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1);
  }
  puVar2 = (uint *)FUN_00557dd4(0x28);
  puVar2[2] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[3] = param_3;
  puVar2[1] = param_1;
  *puVar2 = param_4 & 8;
  puVar2[8] = 0;
  puVar2[7] = 0;
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  iVar1 = param_1 * 4;
  uVar3 = FUN_00557dd4(iVar1);
  puVar2[2] = uVar3;
  uVar3 = FUN_00557dd4(iVar1);
  puVar2[4] = uVar3;
  uVar3 = FUN_00557dd4(iVar1);
  puVar2[5] = uVar3;
  *(undefined4 *)puVar2[4] = 1;
  *(undefined4 *)((puVar2[5] - 4) + param_1 * 4) = 1;
  iVar1 = 0;
  if (0 < (int)param_1) {
    iVar4 = 0;
    do {
      *(undefined4 *)(puVar2[2] + iVar1 * 4) = *(undefined4 *)(param_2 + iVar1 * 4);
      if (iVar1 != 0) {
        *(int *)(puVar2[4] + iVar1 * 4) =
             *(int *)((puVar2[4] - 4) + iVar1 * 4) * *(int *)(param_2 + -4 + iVar1 * 4);
        iVar5 = puVar2[5] + param_1 * 4;
        *(int *)(iVar5 + -4 + iVar4 * 4) =
             *(int *)(iVar5 + iVar4 * 4) * *(int *)(param_1 * 4 + param_2 + iVar4 * 4);
      }
      iVar4 = iVar4 + -1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1);
  }
  return puVar2;
}




/* Function: FUN_005557d0 */

int FUN_005557d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00557dd4(param_1 * 4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < param_1) {
    if (5 < param_1) {
      do {
        *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
        *(undefined4 *)(iVar1 + 8 + iVar2 * 4) = 0;
        *(undefined4 *)(iVar1 + 0xc + iVar2 * 4) = 0;
        *(undefined4 *)(iVar1 + 0x10 + iVar2 * 4) = 0;
        iVar2 = iVar2 + 5;
      } while (iVar2 <= param_1 + -6);
    }
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  return iVar1;
}




/* Function: FUN_00555830 */

int FUN_00555830(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 < 1) {
    return 0;
  }
  if ((param_1 != 0) && (iVar5 = 0, 0 < param_2)) {
    do {
      if ((iVar5 < param_2 + -1) || (uVar4 = param_5, (param_5 & 8) != 0)) {
        iVar1 = iVar5 + -1;
        iVar2 = iVar1;
        if (-1 < iVar1) {
          if (iVar1 < 6) {
            iVar3 = *(int *)(param_3 + iVar5 * 4);
          }
          else {
            iVar3 = *(int *)(param_3 + iVar5 * 4);
            do {
              iVar2 = iVar1;
              if ((((iVar3 == *(int *)(param_3 + iVar1 * 4)) ||
                   (iVar2 = iVar1 + -1, iVar3 == *(int *)(param_3 + (iVar1 + -1) * 4))) ||
                  (iVar2 = iVar1 + -2, iVar3 == *(int *)(param_3 + (iVar1 + -2) * 4))) ||
                 ((iVar2 = iVar1 + -3, iVar3 == *(int *)(param_3 + (iVar1 + -3) * 4) ||
                  (iVar2 = iVar1 + -4, iVar3 == *(int *)(param_3 + (iVar1 + -4) * 4)))))
              goto LAB_005558e0;
              iVar1 = iVar1 + -5;
            } while (5 < iVar1);
          }
          do {
            iVar2 = iVar1;
            if (iVar3 == *(int *)(param_3 + iVar1 * 4)) break;
            iVar1 = iVar1 + -1;
            iVar2 = iVar1;
          } while (-1 < iVar1);
        }
LAB_005558e0:
        uVar4 = param_5 | 8;
        if (iVar2 < 0) goto LAB_005558fa;
        *(undefined4 *)(param_1 + iVar5 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
      }
      else {
LAB_005558fa:
        iVar1 = FUN_00557cc4(*(undefined4 *)(iVar5 * 4 + param_3),param_4,uVar4);
        *(int *)(param_1 + iVar5 * 4) = iVar1;
        if (iVar1 == 0) {
          FUN_00555e4c(param_2,param_1);
          return 0;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  return param_1;
}




/* Function: FUN_00555964 */

int FUN_00555964(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < param_1 + -1) {
    do {
      iVar1 = *(int *)(param_2 + iVar2 * 4);
      iVar2 = iVar2 + 1;
      if (iVar3 < iVar1) {
        iVar3 = iVar1;
      }
    } while (iVar2 < param_1 + -1);
  }
  if (((0 < param_1) && ((param_3 & 8) != 0)) &&
     (iVar2 = *(int *)(param_2 + -4 + param_1 * 4), iVar3 < iVar2)) {
    iVar3 = iVar2;
  }
  return iVar3;
}




/* Function: FUN_005559c4 */

int FUN_005559c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00555964(param_1,param_2,param_3);
  return iVar1 * param_4 + -8 + param_4 * 8;
}




/* Function: FUN_005559e4 */

int FUN_005559e4(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,uint param_6,
                undefined4 param_7,int param_8,undefined4 param_9,int param_10)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 1) {
    return 0;
  }
  if (param_1 != 0) {
    iVar4 = 0;
    iVar1 = FUN_005559c4(param_2,param_3,param_6,1);
    if (iVar1 != 0) {
      iVar4 = FUN_00557dd4(iVar1 * 8);
    }
    if (0 < param_2) {
      iVar1 = 0;
      do {
        uVar2 = param_6;
        if (iVar1 < param_2 + -1) {
          uVar2 = param_6 | 8;
        }
        iVar3 = *(int *)(param_4 + iVar1 * 4);
        if ((uVar2 & 8) == 0) {
          iVar3 = FUN_00557c48(*(undefined4 *)(param_3 + iVar1 * 4),param_5,uVar2,param_7,
                               param_8 * iVar3,param_9,iVar3 * param_10);
          *(int *)(param_1 + iVar1 * 4) = iVar3;
        }
        else {
          iVar3 = FUN_00557c48(*(undefined4 *)(param_3 + iVar1 * 4),param_5,uVar2,param_7,
                               iVar3 * param_8,iVar4,1);
          *(int *)(param_1 + iVar1 * 4) = iVar3;
        }
        if (iVar3 == 0) {
          FUN_00555e4c(param_2,param_1);
          FUN_00557e10(iVar4);
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_2);
    }
    if (iVar4 != 0) {
      FUN_00557e10(iVar4);
    }
  }
  return param_1;
}




/* Function: FUN_00555b18 */

int * FUN_00555b18(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5
                  ,undefined4 param_6,int param_7,undefined4 param_8)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  piVar1 = (int *)FUN_00555668(param_1,param_2,param_3,param_4);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  if ((((param_4 & 1) == 0) || (param_5 == 0)) || ((*piVar1 == 0 && (param_7 == 0)))) {
    uVar2 = FUN_005557d0(param_1);
    iVar3 = FUN_00555830(uVar2,param_1,param_2,param_3,param_4);
    piVar1[6] = iVar3;
    if (iVar3 == 0) {
      FUN_00555f10(piVar1);
      return (int *)0x0;
    }
    if ((param_4 & 0x100) == 0) {
      piVar1[7] = 0;
      iVar3 = 0;
    }
    else {
      piVar1[7] = 8;
      iVar3 = 8;
    }
    iVar3 = FUN_005559c4(param_1,param_2,param_4,iVar3 + 1);
    piVar1[8] = iVar3;
    if ((iVar3 != 0) && ((param_4 & 0x80) == 0)) {
      iVar3 = FUN_00557dd4(iVar3 * 8);
      piVar1[9] = iVar3;
      if (iVar3 == 0) {
        FUN_00555f10(piVar1);
        return (int *)0x0;
      }
    }
  }
  else {
    iVar3 = FUN_005559c4(param_1,param_2,param_4,9);
    piVar1[8] = iVar3;
    if ((iVar3 == 0) || ((param_4 & 0x80) != 0)) {
      piVar1[9] = 0;
    }
    else {
      iVar3 = FUN_00557dd4(iVar3 * 8);
      piVar1[9] = iVar3;
      if (iVar3 == 0) {
        FUN_00555f10(piVar1);
        return (int *)0x0;
      }
    }
    uVar2 = FUN_005557d0(param_1);
    iVar3 = FUN_00555830(uVar2,param_1,param_2,param_3,param_4);
    uVar2 = FUN_005557d0(param_1);
    iVar4 = FUN_005559e4(uVar2,param_1,param_2,piVar1[5],param_3,param_4,param_5,param_6,param_7,
                         param_8);
    if ((iVar3 == 0) || (iVar4 == 0)) {
      FUN_00555e4c(param_1,iVar4);
      FUN_00555e4c(param_1,iVar3);
      FUN_00555f10(piVar1);
      return (int *)0x0;
    }
    piVar1[7] = 0;
    piVar1[6] = iVar4;
    iVar5 = FUN_005559c4(param_1,param_2,param_4,1);
    piVar1[8] = iVar5;
    fVar6 = (float10)FUN_005554a0(piVar1,param_5,param_6,param_7,param_8);
    piVar1[7] = 8;
    piVar1[6] = iVar3;
    iVar5 = FUN_005559c4(param_1,param_2,param_4,9);
    piVar1[8] = iVar5;
    fVar7 = (float10)FUN_005554a0(piVar1,param_5,param_6,param_7,param_8);
    if (fVar7 <= (float10)(double)fVar6) {
      FUN_00555e4c(param_1,iVar4);
    }
    else {
      piVar1[7] = 0;
      piVar1[6] = iVar4;
      if (piVar1[9] != 0) {
        FUN_00557e10(piVar1[9]);
      }
      piVar1[9] = 0;
      FUN_00555e4c(param_1,iVar3);
      iVar3 = FUN_005559c4(param_1,param_2,param_4,piVar1[7] + 1);
      piVar1[8] = iVar3;
      if ((iVar3 != 0) && ((param_4 & 0x80) == 0)) {
        iVar3 = FUN_00557dd4(iVar3 * 8);
        piVar1[9] = iVar3;
        if (iVar3 == 0) {
          FUN_00555f10(piVar1);
          return (int *)0x0;
        }
      }
    }
  }
  return piVar1;
}




/* Function: FUN_00555dec */

void FUN_00555dec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_1;
  local_4 = param_2;
  FUN_00555b18(2,&local_8,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}




/* Function: FUN_00555e28 */

void FUN_00555e28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00555dec(param_1,param_2,param_3,param_4,0,1,0,1);
  return;
}




/* Function: FUN_00555e4c */

void FUN_00555e4c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    if (0 < param_1) {
      iVar4 = 0;
      do {
        iVar1 = iVar4 + -1;
        if (iVar1 < 0) {
          iVar3 = *(int *)(param_2 + iVar4 * 4);
LAB_00555eee:
          if (iVar3 != 0) {
            FUN_00557d44(iVar3);
          }
        }
        else if (iVar1 < 6) {
          iVar3 = *(int *)(param_2 + iVar4 * 4);
          if (iVar3 != *(int *)(param_2 + iVar1 * 4)) goto LAB_00555ec3;
        }
        else {
          iVar3 = *(int *)(param_2 + iVar4 * 4);
          do {
            iVar2 = iVar1;
            if ((((iVar3 == *(int *)(param_2 + iVar1 * 4)) ||
                 (iVar2 = iVar1 + -1, iVar3 == *(int *)(param_2 + (iVar1 + -1) * 4))) ||
                (iVar2 = iVar1 + -2, iVar3 == *(int *)(param_2 + (iVar1 + -2) * 4))) ||
               ((iVar2 = iVar1 + -3, iVar3 == *(int *)(param_2 + (iVar1 + -3) * 4) ||
                (iVar2 = iVar1 + -4, iVar3 == *(int *)(param_2 + (iVar1 + -4) * 4)))))
            goto LAB_00555efb;
            iVar1 = iVar1 + -5;
          } while (5 < iVar1);
          iVar2 = iVar1;
          if (iVar3 == *(int *)(param_2 + iVar1 * 4)) {
LAB_00555efb:
            if (iVar2 < 0) goto LAB_00555eee;
          }
          else {
LAB_00555ec3:
            do {
              iVar1 = iVar1 + -1;
              if (iVar1 < 0) goto LAB_00555eee;
            } while (iVar3 != *(int *)(param_2 + iVar1 * 4));
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1);
    }
    FUN_00557e10(param_2);
  }
  return;
}




/* Function: FUN_00555f10 */

void FUN_00555f10(int param_1)

{
  if (param_1 != 0) {
    FUN_00555e4c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x18));
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00557e10(*(int *)(param_1 + 8));
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00557e10(*(int *)(param_1 + 0x10));
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00557e10(*(int *)(param_1 + 0x14));
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_00557e10(*(int *)(param_1 + 0x24));
    }
    FUN_00557e10(param_1);
  }
  return;
}




/* Function: FUN_00555f68 */

void FUN_00555f68(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
  int local_5c;
  undefined4 *local_4c;
  undefined4 *local_20;
  
  iVar5 = *param_1;
  iVar2 = iVar5 * 2 + 0x10;
  iVar3 = iVar5 * 2 + 0x10;
  iVar18 = (iVar5 * 2 + 0x10) * 2 - (iVar5 + 8);
  iVar20 = 0;
  iVar4 = iVar5 * 2 + 0x10;
  do {
    if (iVar20 <= param_2 - param_7) {
      iVar1 = param_7 + -4;
      do {
        iVar21 = iVar20 * param_5 * 8 + param_3;
        iVar14 = 0;
        if (0 < iVar5) {
          iVar15 = 0;
          iVar13 = 0;
          do {
            puVar16 = (undefined4 *)(iVar21 + iVar15);
            local_20 = (undefined4 *)(param_8 + iVar13);
            local_5c = 0;
            if (-1 < iVar1) {
              do {
                uVar6 = puVar16[1];
                uVar7 = puVar16[param_5 * 2];
                uVar8 = puVar16[param_5 * 2 + 1];
                uVar9 = puVar16[param_5 * 4];
                uVar10 = puVar16[param_5 * 4 + 1];
                uVar11 = puVar16[param_5 * 6];
                uVar12 = puVar16[param_5 * 6 + 1];
                *local_20 = *puVar16;
                local_20[1] = uVar6;
                local_20[iVar5 * 2 + 0x10] = uVar7;
                local_20[iVar5 * 2 + 0x11] = uVar8;
                local_20[iVar3 * 2] = uVar9;
                local_20[iVar3 * 2 + 1] = uVar10;
                local_20[iVar18 * 2] = uVar11;
                local_20[iVar18 * 2 + 1] = uVar12;
                local_5c = local_5c + 4;
                local_20 = local_20 + iVar4 * 4;
                puVar16 = puVar16 + param_5 * 8;
              } while (local_5c <= iVar1);
            }
            if (local_5c < param_7) {
              puVar17 = puVar16;
              puVar19 = local_20;
              if (4 < param_7 - local_5c) {
                do {
                  *puVar19 = *puVar17;
                  puVar19[1] = puVar17[1];
                  puVar19[iVar5 * 2 + 0x10] = puVar17[param_5 * 2];
                  puVar19[iVar5 * 2 + 0x11] = puVar17[param_5 * 2 + 1];
                  puVar19[iVar2 + iVar5 * 2 + 0x10] = puVar17[param_5 * 4];
                  puVar19[iVar2 + iVar5 * 2 + 0x11] = puVar17[param_5 * 4 + 1];
                  local_20 = puVar19 + iVar2 * 4;
                  puVar16 = puVar17 + param_5 * 8;
                  puVar19[iVar2 * 2 + iVar5 * 2 + 0x10] = puVar17[param_5 * 6];
                  puVar19[iVar2 * 2 + iVar5 * 2 + 0x11] = puVar17[param_5 * 6 + 1];
                  local_5c = local_5c + 4;
                  puVar17 = puVar16;
                  puVar19 = local_20;
                } while (local_5c <= param_7 + -5);
              }
              do {
                *local_20 = *puVar16;
                local_20[1] = puVar16[1];
                local_20 = local_20 + iVar2;
                puVar16 = puVar16 + param_5 * 2;
                local_5c = local_5c + 1;
              } while (local_5c < param_7);
            }
            iVar15 = iVar15 + param_4 * 8;
            iVar13 = iVar13 + 8;
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar5);
        }
        FUN_0055710c(param_1,param_7,param_8,1,iVar5 + 8,param_6,1,0);
        iVar14 = 0;
        if (0 < iVar5) {
          iVar15 = 0;
          iVar13 = 0;
          do {
            local_4c = (undefined4 *)(iVar21 + iVar15);
            puVar16 = (undefined4 *)(param_8 + iVar13);
            local_5c = 0;
            if (-1 < iVar1) {
              do {
                uVar6 = puVar16[iVar5 * 2 + 0x10];
                uVar7 = puVar16[iVar5 * 2 + 0x11];
                uVar8 = puVar16[iVar3 * 2];
                uVar9 = puVar16[1];
                uVar10 = puVar16[iVar3 * 2 + 1];
                uVar11 = puVar16[iVar18 * 2];
                uVar12 = puVar16[iVar18 * 2 + 1];
                *local_4c = *puVar16;
                local_4c[1] = uVar9;
                local_4c[param_5 * 2] = uVar6;
                local_4c[param_5 * 2 + 1] = uVar7;
                local_5c = local_5c + 4;
                local_4c[param_5 * 4] = uVar8;
                local_4c[param_5 * 4 + 1] = uVar10;
                local_4c[param_5 * 6] = uVar11;
                local_4c[param_5 * 6 + 1] = uVar12;
                puVar16 = puVar16 + iVar4 * 4;
                local_4c = local_4c + param_5 * 8;
              } while (local_5c <= iVar1);
            }
            if (local_5c < param_7) {
              puVar17 = local_4c;
              puVar19 = puVar16;
              if (4 < param_7 - local_5c) {
                do {
                  *puVar17 = *puVar19;
                  puVar17[1] = puVar19[1];
                  puVar17[param_5 * 2] = puVar19[iVar5 * 2 + 0x10];
                  puVar17[param_5 * 2 + 1] = puVar19[iVar5 * 2 + 0x11];
                  puVar17[param_5 * 4] = puVar19[iVar2 + iVar5 * 2 + 0x10];
                  puVar17[param_5 * 4 + 1] = puVar19[iVar2 + iVar5 * 2 + 0x11];
                  puVar16 = puVar19 + iVar2 * 4;
                  local_4c = puVar17 + param_5 * 8;
                  puVar17[param_5 * 6] = puVar19[iVar2 * 2 + iVar5 * 2 + 0x10];
                  puVar17[param_5 * 6 + 1] = puVar19[iVar2 * 2 + iVar5 * 2 + 0x11];
                  local_5c = local_5c + 4;
                  puVar17 = local_4c;
                  puVar19 = puVar16;
                } while (local_5c <= param_7 + -5);
              }
              do {
                *local_4c = *puVar16;
                local_4c[1] = puVar16[1];
                puVar16 = puVar16 + iVar2;
                local_4c = local_4c + param_5 * 2;
                local_5c = local_5c + 1;
              } while (local_5c < param_7);
            }
            iVar15 = iVar15 + param_4 * 8;
            iVar13 = iVar13 + 8;
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar5);
        }
        iVar20 = iVar20 + param_7;
      } while (iVar20 <= param_2 - param_7);
    }
    param_7 = param_2 - iVar20;
  } while (iVar20 < param_2);
  return;
}




/* Function: FUN_005564c4 */

void FUN_005564c4(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = *(int *)(param_1[5] + param_2 * 4);
  iVar1 = *(int *)(param_1[2] + param_2 * 4);
  iVar7 = param_1[1];
  if (param_2 == iVar7 + -2) {
    if (*param_1 == 0) {
      iVar6 = param_6 * iVar5;
      FUN_0055710c(*(undefined4 *)(param_1[6] + -4 + iVar7 * 4),iVar1,param_3,param_4,
                   iVar5 * param_4,param_5,param_6,iVar6);
    }
    else {
      FUN_0055710c(*(undefined4 *)(param_1[6] + -4 + iVar7 * 4),iVar1,param_3,param_4,
                   iVar5 * param_4,param_7,1,0);
      iVar6 = param_6 * iVar5;
    }
  }
  else if (iVar1 < 1) {
    iVar6 = param_6 * iVar5;
  }
  else {
    iVar2 = param_4 * 8 * iVar5;
    iVar3 = param_6 * 8 * iVar5;
    iVar4 = 0;
    iVar7 = param_5;
    iVar6 = param_3;
    iVar8 = param_2 + 1;
    do {
      FUN_005564c4(param_1,param_2 + 1,param_3,param_4,iVar7,param_6,param_7,iVar6,iVar8,iVar5);
      param_3 = param_3 + iVar2;
      iVar7 = iVar7 + iVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
    iVar6 = param_6 * iVar5;
  }
  if (param_1[7] == 0) {
    FUN_0055710c(*(undefined4 *)(param_1[6] + param_2 * 4),iVar5,param_5,iVar6,param_6,param_7,1,0);
    return;
  }
  FUN_00555f68(*(undefined4 *)(param_1[6] + param_2 * 4),iVar5,param_5,iVar6,param_6,param_7,
               param_1[7],iVar1 * 8 + param_7);
  return;
}




/* Function: FUN_00556684 */

void FUN_00556684(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,int param_7,int param_8,undefined4 param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1[5] + param_2 * 4);
  iVar5 = *(int *)(param_1[2] + param_2 * 4);
  iVar3 = param_1[1];
  if (param_2 == iVar3 + -2) {
    if (*param_1 == 0) {
      iVar4 = 0;
      if (0 < iVar5) {
        iVar2 = param_7;
        while( true ) {
          FUN_0055710c(*(undefined4 *)(param_1[6] + -4 + iVar3 * 4),param_3,param_4,param_5,param_6,
                       iVar2,param_8,param_9);
          param_4 = param_4 + param_5 * 8 * iVar1;
          iVar2 = iVar2 + param_8 * 8 * iVar1;
          iVar4 = iVar4 + 1;
          if (iVar5 <= iVar4) break;
          iVar3 = param_1[1];
        }
      }
    }
    else {
      iVar4 = 0;
      if (0 < iVar5) {
        while( true ) {
          FUN_0055710c(*(undefined4 *)(param_1[6] + -4 + iVar3 * 4),param_3,param_4,param_5,param_6,
                       param_10,1,0);
          param_4 = param_4 + param_5 * 8 * iVar1;
          iVar4 = iVar4 + 1;
          if (iVar5 <= iVar4) break;
          iVar3 = param_1[1];
        }
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < iVar5) {
      iVar4 = param_7;
      do {
        FUN_00556684(param_1,param_2 + 1,param_3,param_4,param_5,param_6,iVar4,param_8,param_9,
                     param_10);
        param_4 = param_4 + param_5 * 8 * iVar1;
        iVar4 = iVar4 + param_8 * 8 * iVar1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
    }
  }
  iVar3 = param_1[7];
  if (iVar3 == 0) {
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        FUN_0055710c(*(undefined4 *)(param_1[6] + param_2 * 4),param_3,param_7,param_8 * iVar1,
                     param_9,param_10,1,0);
        param_7 = param_7 + param_8 * 8;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
  }
  else {
    iVar4 = 0;
    if (0 < iVar1) {
      while( true ) {
        FUN_00555f68(*(undefined4 *)(param_1[6] + param_2 * 4),param_3,param_7,param_8 * iVar1,
                     param_9,param_10,iVar3,iVar5 * 8 + param_10);
        param_7 = param_7 + param_8 * 8;
        iVar4 = iVar4 + 1;
        if (iVar1 <= iVar4) break;
        iVar3 = param_1[7];
      }
    }
  }
  return;
}




/* Function: FUN_0055695c */

void FUN_0055695c(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int local_24;
  
  local_24 = param_6;
  if (param_1[8] == 0) {
    iVar1 = param_1[9];
  }
  else {
    iVar1 = param_1[9];
    if (iVar1 == 0) {
      iVar1 = FUN_00557dd4(param_1[8] * 8);
    }
  }
  if (param_1[1] != 0) {
    if (param_1[1] == 1) {
      if (*param_1 == 0) {
        FUN_0055710c(*(undefined4 *)param_1[6],param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      }
      else {
        FUN_0055710c(*(undefined4 *)param_1[6],param_2,param_3,param_4,param_5,iVar1,1,0);
      }
    }
    else {
      if (*param_1 != 0) {
        local_24 = param_3;
        param_8 = param_5;
        param_7 = param_4;
      }
      if ((param_2 < 2) || (param_7 <= param_8)) {
        if (0 < param_2) {
          iVar2 = 0;
          do {
            FUN_005564c4(param_1,0,param_3,param_4,local_24,param_7,iVar1);
            param_3 = param_3 + param_5 * 8;
            local_24 = local_24 + param_8 * 8;
            iVar2 = iVar2 + 1;
          } while (iVar2 < param_2);
        }
      }
      else {
        FUN_00556684(param_1,0,param_2,param_3,param_4,param_5,local_24,param_7,param_8,iVar1);
      }
    }
  }
  if ((param_1[8] != 0) && (param_1[9] == 0)) {
    FUN_00557e10(iVar1);
  }
  return;
}




/* Function: FUN_00556b10 */

void FUN_00556b10(uint param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_24;
  
  iVar8 = 0;
  uVar9 = param_1 & 3;
  if (uVar9 != 0) {
    if (4 < uVar9) {
      iVar11 = param_3 * 8 + param_4;
      iVar12 = param_3 * 0x10 + param_4;
      iVar13 = param_3 * 0x18 + param_4;
      iVar10 = 0;
      do {
        *(undefined4 *)(iVar10 + param_4) = *(undefined4 *)(param_2 + iVar8 * 8);
        *(undefined4 *)(iVar10 + 4 + param_4) = *(undefined4 *)(param_2 + 4 + iVar8 * 8);
        *(undefined4 *)(iVar11 + iVar10) = *(undefined4 *)(param_2 + 8 + iVar8 * 8);
        *(undefined4 *)(iVar11 + 4 + iVar10) = *(undefined4 *)(param_2 + 0xc + iVar8 * 8);
        *(undefined4 *)(iVar12 + iVar10) = *(undefined4 *)(param_2 + 0x10 + iVar8 * 8);
        *(undefined4 *)(iVar12 + 4 + iVar10) = *(undefined4 *)(param_2 + 0x14 + iVar8 * 8);
        *(undefined4 *)(iVar13 + iVar10) = *(undefined4 *)(param_2 + 0x18 + iVar8 * 8);
        *(undefined4 *)(iVar13 + 4 + iVar10) = *(undefined4 *)(param_2 + 0x1c + iVar8 * 8);
        iVar8 = iVar8 + 4;
        iVar10 = iVar10 + param_3 * 0x20;
      } while (iVar8 <= (int)(uVar9 - 5));
    }
    iVar10 = iVar8 * param_3 * 8;
    do {
      *(undefined4 *)(iVar10 + param_4) = *(undefined4 *)(param_2 + iVar8 * 8);
      iVar11 = iVar8 * 8;
      iVar8 = iVar8 + 1;
      *(undefined4 *)(iVar10 + 4 + param_4) = *(undefined4 *)(param_2 + 4 + iVar11);
      iVar10 = iVar10 + param_3 * 8;
    } while (iVar8 < (int)uVar9);
  }
  if (iVar8 < (int)param_1) {
    iVar12 = param_3 * 8 + param_4;
    iVar11 = param_3 * 0x10 + param_4;
    iVar10 = param_3 * 0x18 + param_4;
    local_24 = iVar8 * param_3;
    do {
      uVar1 = *(undefined4 *)(param_2 + 4 + iVar8 * 8);
      uVar2 = *(undefined4 *)(param_2 + 8 + iVar8 * 8);
      uVar3 = *(undefined4 *)(param_2 + 0xc + iVar8 * 8);
      uVar4 = *(undefined4 *)(param_2 + 0x10 + iVar8 * 8);
      uVar5 = *(undefined4 *)(param_2 + 0x14 + iVar8 * 8);
      uVar6 = *(undefined4 *)(param_2 + 0x18 + iVar8 * 8);
      uVar7 = *(undefined4 *)(param_2 + 0x1c + iVar8 * 8);
      *(undefined4 *)(param_4 + local_24 * 8) = *(undefined4 *)(param_2 + iVar8 * 8);
      *(undefined4 *)(param_4 + 4 + local_24 * 8) = uVar1;
      *(undefined4 *)(iVar12 + local_24 * 8) = uVar2;
      *(undefined4 *)(iVar12 + 4 + local_24 * 8) = uVar3;
      *(undefined4 *)(iVar11 + local_24 * 8) = uVar4;
      *(undefined4 *)(iVar11 + 4 + local_24 * 8) = uVar5;
      *(undefined4 *)(iVar10 + local_24 * 8) = uVar6;
      *(undefined4 *)(iVar10 + 4 + local_24 * 8) = uVar7;
      local_24 = local_24 + param_3 * 4;
      iVar8 = iVar8 + 4;
    } while (iVar8 < (int)param_1);
  }
  return;
}




/* Function: FUN_00556d24 */

void FUN_00556d24(undefined4 param_1,int param_2,int param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,int param_8,int param_9,undefined4 param_10)

{
  code *pcVar1;
  int iVar2;
  
  if (*param_4 == 0) {
    pcVar1 = (code *)param_4[2];
    iVar2 = 0;
    if (0 < param_7) {
      do {
        (*pcVar1)(param_2,param_3,param_5,param_6);
        param_2 = param_2 + param_8 * 8;
        param_3 = param_3 + param_9 * 8;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_7);
    }
  }
  else {
    iVar2 = 0;
    if (0 < param_7) {
      do {
        FUN_00556e1c(param_1,param_2,param_3,param_4,param_5,param_6,param_10);
        param_2 = param_2 + param_8 * 8;
        param_3 = param_3 + param_9 * 8;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_7);
    }
  }
  return;
}




/* Function: FUN_00556e1c */

void FUN_00556e1c(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_4;
  if (iVar1 == 0) {
    (*(code *)param_4[2])(param_2,param_3,param_5,param_6);
    return;
  }
  if (iVar1 == 1) {
    iVar1 = param_4[1];
    param_1 = param_1 / iVar1;
    FUN_00556d24(param_1,param_2,param_3,param_4[4],param_5 * iVar1,param_6,iVar1,param_5,
                 param_6 * param_1,0);
    (*(code *)param_4[2])(param_3,*(undefined4 *)(param_4[3] + 8),param_6 * param_1,param_1,param_6)
    ;
    return;
  }
  if (iVar1 == 2) {
    iVar1 = param_4[1];
    iVar2 = param_1 / iVar1;
    FUN_00556d24(iVar2,param_2,param_3,param_4[4],param_5 * iVar1,param_6,iVar1,param_5,
                 param_6 * iVar2,0);
    (*(code *)param_4[2])(param_3,*(undefined4 *)(param_4[3] + 8),iVar2,iVar1,param_1,param_6);
    return;
  }
  if (iVar1 == 3) {
    iVar1 = param_4[1];
    param_1 = param_1 / iVar1;
    FUN_00556d24(param_1,param_2,param_3,param_4[5],param_5 * iVar1,param_6,iVar1,param_5,
                 param_6 * param_1,0);
    (*(code *)param_4[2])(param_3,*(undefined4 *)(param_4[4] + 8),param_1,iVar1,param_6,param_4[3]);
    return;
  }
  FUN_00557e30("BUG in executor: invalid plan\n");
  return;
}




/* Function: FUN_00556f60 */

void FUN_00556f60(int param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  
  if (*param_4 != 0) {
    iVar1 = param_3;
    if (param_3 == 0) {
      iVar1 = FUN_00557dd4(param_1 * 8);
    }
    FUN_00556e1c(param_1,param_2,iVar1,param_4,param_5,1,param_6);
    FUN_00556b10(param_1,iVar1,param_5,param_2);
    if (param_3 == 0) {
      FUN_00557e10(iVar1);
    }
    return;
  }
  (*(code *)param_4[2])(param_2,param_2,param_5,param_5);
  return;
}




/* Function: FUN_00556fe4 */

void FUN_00556fe4(int param_1,int param_2,int param_3,int *param_4,undefined4 param_5,int param_6,
                 int param_7,undefined4 param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  if (*param_4 == 0) {
    pcVar1 = (code *)param_4[2];
    iVar3 = 0;
    if (0 < param_6) {
      do {
        (*pcVar1)(param_2,param_2,param_5,param_5);
        param_2 = param_2 + param_7 * 8;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_6);
    }
  }
  else {
    iVar3 = param_3;
    if (param_3 == 0) {
      iVar3 = FUN_00557dd4(param_1 * 8);
    }
    if (0 < param_6) {
      iVar2 = 0;
      do {
        FUN_00556e1c(param_1,param_2,iVar3,param_4,param_5,1,param_8);
        FUN_00556b10(param_1,iVar3,param_5,param_2);
        param_2 = param_2 + param_7 * 8;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_6);
    }
    if (param_3 == 0) {
      FUN_00557e10(iVar3);
    }
  }
  return;
}




/* Function: FUN_0055710c */

void FUN_0055710c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  if ((param_1[3] & 8) == 0) {
    if (param_2 != 1) {
      FUN_00556d24(uVar1,param_3,param_6,param_1[7],param_4,param_7,param_2,param_5,param_8,
                   param_1[10]);
      return;
    }
    FUN_00556e1c(uVar1,param_3,param_6,param_1[7],param_4,param_7,param_1[10]);
    return;
  }
  if (param_2 != 1) {
    FUN_00556fe4(uVar1,param_3,param_6,param_1[7],param_4,param_2,param_5,param_1[10]);
    return;
  }
  FUN_00556f60(uVar1,param_3,param_6,param_1[7],param_4,param_1[10]);
  return;
}




/* Function: FUN_005571c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005571c4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < param_3) {
    uVar1 = _DAT_005bb3e8;
    if (5 < param_3) {
      iVar3 = param_2 * 8 + param_1;
      iVar6 = param_2 * 0x10 + param_1;
      iVar4 = param_2 * 0x18 + param_1;
      iVar5 = param_2 * 0x20 + param_1;
      iVar2 = 0;
      do {
        *(undefined4 *)(iVar2 + param_1) = uVar1;
        iVar7 = iVar7 + 5;
        *(undefined4 *)(iVar2 + 4 + param_1) = 0;
        *(undefined4 *)(iVar3 + iVar2) = 0;
        *(undefined4 *)(iVar3 + 4 + iVar2) = 0;
        *(undefined4 *)(iVar6 + iVar2) = 0;
        *(undefined4 *)(iVar6 + 4 + iVar2) = 0;
        *(undefined4 *)(iVar4 + iVar2) = 0;
        *(undefined4 *)(iVar4 + 4 + iVar2) = 0;
        *(undefined4 *)(iVar5 + iVar2) = 0;
        uVar1 = _DAT_005bb3e8;
        *(undefined4 *)(iVar5 + 4 + iVar2) = 0;
        iVar2 = iVar2 + param_2 * 0x28;
      } while (iVar7 <= param_3 + -6);
    }
    iVar2 = iVar7 * param_2 * 8;
    do {
      *(undefined4 *)(iVar2 + param_1) = uVar1;
      uVar1 = _DAT_005bb3e8;
      iVar7 = iVar7 + 1;
      *(undefined4 *)(iVar2 + 4 + param_1) = 0;
      iVar2 = iVar2 + param_2 * 8;
    } while (iVar7 < param_3);
  }
  return;
}




/* Function: FUN_00557304 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00557304(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  double local_38;
  
  iVar1 = param_1[0xb];
  iVar2 = *param_1;
  iVar5 = 1;
  while( true ) {
    local_38 = _DAT_005bb408;
    FUN_005571c4(param_2,param_3,iVar2 * iVar1);
    iVar3 = FUN_00557d50();
    iVar7 = 0;
    do {
      iVar4 = FUN_00557d50();
      iVar6 = 0;
      if (0 < iVar5) {
        do {
          FUN_0055710c(param_1,iVar1,param_2,param_3,param_3,param_4,param_5,param_5);
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar5);
      }
      iVar6 = FUN_00557d50();
      fVar8 = (float10)FUN_00557da4((double)((float)(iVar6 - iVar4) +
                                            *(float *)(&DAT_005bb410 + (iVar6 - iVar4 >> 0x1f) * -4)
                                            ));
      if (fVar8 < (float10)local_38) {
        local_38 = (double)fVar8;
      }
      fVar8 = (float10)FUN_00557da4((double)((float)(iVar6 - iVar3) +
                                            *(float *)(&DAT_005bb410 + (iVar6 - iVar3 >> 0x1f) * -4)
                                            ));
    } while ((fVar8 <= (float10)_DAT_005bb400) && (iVar7 = iVar7 + 1, iVar7 < 4));
    if (_DAT_005bb3f8 <= local_38) break;
    iVar5 = iVar5 * 2;
  }
  return (float10)local_38 / (float10)iVar5;
}




/* Function: FUN_0055745c */

void FUN_0055745c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  float10 fVar1;
  
  if ((param_1[3] & 1U) != 0) {
    fVar1 = (float10)FUN_00557304(param_1,param_2,param_3,param_4,param_5);
    *(double *)(param_1 + 8) = (double)fVar1;
    return;
  }
  fVar1 = (float10)FUN_00558334(param_1[7]);
  *(double *)(param_1 + 8) = (double)((float10)param_1[0xb] * (float10)*param_1 * fVar1);
  return;
}




/* Function: FUN_005574a0 */

void FUN_005574a0(undefined4 *param_1)

{
  if ((DAT_005b813c != (code *)0x0) && (param_1 != (undefined4 *)0x0)) {
    FUN_00558130(param_1[7],*param_1);
    (*DAT_005b813c)(param_1);
  }
  return;
}




/* Function: FUN_005574c8 */

undefined4
FUN_005574c8(undefined4 param_1,int param_2,int param_3,uint param_4,int param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  int iVar6;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar3 = FUN_005586a0(param_2,param_4,param_3,0,param_7,param_9,&local_14,&local_18,&local_1c,0);
  if (iVar3 != 0) {
    if (local_14 == 0) {
      ppuVar4 = &PTR_PTR_005b2da0;
      puVar2 = PTR_PTR_005b2da0;
      while (puVar2 != (undefined *)0x0) {
        if ((((param_3 == *(int *)(puVar2 + 0xc)) && (*(int *)(puVar2 + 0x10) == 0)) &&
            (local_18 == *(int *)(puVar2 + 0x14))) && (param_2 == *(int *)(puVar2 + 8))) {
          uVar5 = FUN_00557e98(param_2,puVar2);
          uVar5 = FUN_005580ac(param_2,param_3,uVar5,param_4,*(undefined4 *)(puVar2 + 0x10),
                               *(undefined4 *)(puVar2 + 0x14),0,param_5);
          FUN_00558284(uVar5);
          FUN_005574a0(uVar5);
          return uVar5;
        }
        ppuVar1 = ppuVar4 + 1;
        ppuVar4 = ppuVar4 + 1;
        puVar2 = *ppuVar1;
      }
    }
    if (local_14 == 1) {
      ppuVar4 = &PTR_PTR_005b2da0;
      puVar2 = PTR_PTR_005b2da0;
      while (puVar2 != (undefined *)0x0) {
        if (((param_3 == *(int *)(puVar2 + 0xc)) && (*(int *)(puVar2 + 0x10) == 1)) &&
           ((local_18 == *(int *)(puVar2 + 0x14) &&
            ((iVar3 = *(int *)(puVar2 + 8), 1 < iVar3 && (param_2 % iVar3 == 0)))))) {
          iVar6 = iVar3;
          if (local_1c != 1) {
            iVar6 = param_5;
          }
          iVar3 = FUN_00557b70(param_1,param_2 / iVar3,param_3,param_4 | 0x200,iVar6,param_6,param_7
                               ,param_8,param_9);
          uVar5 = FUN_00557ebc(param_2,puVar2,*(undefined4 *)(iVar3 + 0x1c),param_4);
          uVar5 = FUN_005580ac(param_2,param_3,uVar5,param_4,*(undefined4 *)(puVar2 + 0x10),
                               *(undefined4 *)(puVar2 + 0x14),local_1c,param_5);
          FUN_00558284(uVar5);
          FUN_005574a0(uVar5);
          FUN_00558290(iVar3);
          return uVar5;
        }
        ppuVar1 = ppuVar4 + 1;
        ppuVar4 = ppuVar4 + 1;
        puVar2 = *ppuVar1;
      }
    }
  }
  return 0;
}




/* Function: FUN_00557664 */

int FUN_00557664(undefined4 param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  int iVar9;
  int local_1c;
  
  local_1c = 0;
  ppuVar8 = &PTR_PTR_005b2da0;
  if (PTR_PTR_005b2da0 != (undefined *)0x0) {
    local_1c = 0;
    puVar7 = PTR_PTR_005b2da0;
    do {
      if (((param_3 == *(int *)(puVar7 + 0xc)) && (*(int *)(puVar7 + 0x10) == 0)) &&
         (param_2 == *(int *)(puVar7 + 8))) {
        uVar2 = FUN_00557e98(param_2,puVar7);
        uVar2 = FUN_005580ac(param_2,param_3,uVar2,param_4,*(undefined4 *)(puVar7 + 0x10),
                             *(undefined4 *)(puVar7 + 0x14),0,param_5);
        FUN_00558284(uVar2);
        FUN_0055745c(uVar2,param_6,param_7,param_8,param_9);
        FUN_005574a0(uVar2);
        local_1c = FUN_0055847c(uVar2,local_1c);
      }
      puVar7 = ppuVar8[1];
      ppuVar8 = ppuVar8 + 1;
    } while (puVar7 != (undefined *)0x0);
  }
  ppuVar8 = &PTR_PTR_005b2da0;
  puVar7 = PTR_PTR_005b2da0;
  while (puVar7 != (undefined *)0x0) {
    if ((((param_3 == *(int *)(puVar7 + 0xc)) && (*(int *)(puVar7 + 0x10) == 1)) &&
        ((iVar9 = *(int *)(puVar7 + 8), param_2 % iVar9 == 0 && (1 < iVar9)))) &&
       ((local_1c == 0 || (param_2 != iVar9)))) {
      iVar9 = FUN_00557b70(param_1,param_2 / iVar9,param_3,param_4 | 0x200,param_5,param_6,param_7,
                           param_8,param_9);
      uVar2 = FUN_00557ebc(param_2,puVar7,*(undefined4 *)(iVar9 + 0x1c),param_4);
      uVar2 = FUN_005580ac(param_2,param_3,uVar2,param_4,*(undefined4 *)(puVar7 + 0x10),
                           *(undefined4 *)(puVar7 + 0x14),0,param_5);
      FUN_00558284(uVar2);
      FUN_00558290(iVar9);
      FUN_0055745c(uVar2,param_6,param_7,param_8,param_9);
      FUN_005574a0(uVar2);
      local_1c = FUN_0055847c(uVar2,local_1c);
    }
    ppuVar1 = ppuVar8 + 1;
    ppuVar8 = ppuVar8 + 1;
    puVar7 = *ppuVar1;
  }
  if ((param_4 & 0x200) == 0) {
    ppuVar8 = &PTR_PTR_005b2da0;
    puVar7 = PTR_PTR_005b2da0;
    while (puVar7 != (undefined *)0x0) {
      if (((((param_3 == *(int *)(puVar7 + 0xc)) && (*(int *)(puVar7 + 0x10) == 1)) &&
           (iVar9 = *(int *)(puVar7 + 8), param_2 % iVar9 == 0)) && (1 < iVar9)) &&
         ((local_1c == 0 || (param_2 != iVar9)))) {
        iVar9 = FUN_00557b70(param_1,param_2 / iVar9,param_3,param_4 | 0x200,iVar9,param_6,param_7,
                             param_8,param_9);
        uVar2 = FUN_00557ebc(param_2,puVar7,*(undefined4 *)(iVar9 + 0x1c),param_4);
        uVar2 = FUN_005580ac(param_2,param_3,uVar2,param_4,*(undefined4 *)(puVar7 + 0x10),
                             *(undefined4 *)(puVar7 + 0x14),1,param_5);
        FUN_00558284(uVar2);
        FUN_00558290(iVar9);
        FUN_0055745c(uVar2,param_6,param_7,param_8,param_9);
        FUN_005574a0(uVar2);
        local_1c = FUN_0055847c(uVar2,local_1c);
      }
      ppuVar1 = ppuVar8 + 1;
      ppuVar8 = ppuVar8 + 1;
      puVar7 = *ppuVar1;
    }
  }
  if (param_3 == -1) {
    puVar6 = &LAB_00558854;
  }
  else {
    puVar6 = &LAB_00558a2c;
  }
  iVar9 = 0;
  if (1 < param_2) {
    iVar4 = param_2;
    do {
      iVar3 = FUN_005584b4(iVar4);
      iVar4 = iVar4 / iVar3;
      if (iVar3 != iVar9) {
        ppuVar8 = &PTR_PTR_005b2da0;
        puVar7 = PTR_PTR_005b2da0;
        while (iVar9 = iVar3, puVar7 != (undefined *)0x0) {
          if (((param_3 == *(int *)(puVar7 + 0xc)) && (*(int *)(puVar7 + 0x10) == 1)) &&
             (iVar3 == *(int *)(puVar7 + 8))) goto LAB_0055780b;
          ppuVar1 = ppuVar8 + 1;
          ppuVar8 = ppuVar8 + 1;
          puVar7 = *ppuVar1;
        }
        if (iVar3 != 0) {
          iVar5 = FUN_00557b70(param_1,param_2 / iVar3,param_3,param_4 | 0x200,param_5,param_6,
                               param_7,param_8,param_9);
          uVar2 = FUN_005593c4(param_2,iVar3,param_3,*(undefined4 *)(iVar5 + 0x1c),param_4);
          uVar2 = FUN_005580ac(param_2,param_3,uVar2,param_4,3,0,0,param_5);
          FUN_00558284(uVar2);
          FUN_0055745c(uVar2,param_6,param_7,param_8,param_9);
          FUN_005574a0(uVar2);
          local_1c = FUN_0055847c(uVar2,local_1c);
          if (iVar3 < 100) {
            uVar2 = FUN_00557f14(param_2,iVar3,puVar6,*(undefined4 *)(iVar5 + 0x1c),param_4);
            uVar2 = FUN_005580ac(param_2,param_3,uVar2,param_4,2,0,0,param_5);
            FUN_00558284(uVar2);
            FUN_0055745c(uVar2,param_6,param_7,param_8,param_9);
            FUN_005574a0(uVar2);
            local_1c = FUN_0055847c(uVar2,local_1c);
          }
          FUN_00558290(iVar5);
        }
      }
LAB_0055780b:
    } while (1 < iVar4);
  }
  if (local_1c == 0) {
    FUN_00557e30("bug in planner\n");
  }
  return local_1c;
}




/* Function: FUN_00557b70 */

int FUN_00557b70(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  
  if (1 < param_5) {
    param_4 = param_4 | 0x200;
  }
  iVar1 = FUN_005582e4(param_1,param_2,param_4,param_5);
  if (iVar1 == 0) {
    iVar1 = FUN_005574c8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    if ((iVar1 != 0) ||
       (iVar1 = FUN_00557664(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                            ), iVar1 != 0)) {
      FUN_005582c8(param_1,iVar1);
      FUN_00558774(param_2,param_4,param_3,0,param_7,param_9,*(undefined4 *)(iVar1 + 0x14),
                   *(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x28));
    }
    return iVar1;
  }
  FUN_00558284(iVar1);
  return iVar1;
}




/* Function: FUN_00557c48 */

int FUN_00557c48(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  if ((0 < param_1) && ((param_2 == -1 || (param_2 == 1)))) {
    FUN_005582bc(&stack0xfffffff0);
    iVar1 = FUN_00557b70(&stack0xfffffff0,param_1,param_2,param_3 | 0x200,1,param_4,param_5,param_6,
                         param_7);
    FUN_00558310(&stack0xfffffff0);
    if (iVar1 != 0) {
      FUN_00558130(*(undefined4 *)(iVar1 + 0x1c),param_1);
    }
    return iVar1;
  }
  return 0;
}




/* Function: FUN_00557cc4 */

undefined4 FUN_00557cc4(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 & 1) == 0) {
    uVar2 = FUN_00557c48(param_1,param_2,param_3,0,1,0,1);
  }
  else {
    iVar1 = FUN_00557dd4(param_1 * 0x10);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_00557c48(param_1,param_2,param_3,iVar1,1,param_1 * 8 + iVar1,1);
    FUN_00557e10(iVar1);
  }
  return uVar2;
}




/* Function: FUN_00557d44 */

void FUN_00557d44(undefined4 param_1)

{
  FUN_00558290(param_1);
  return;
}




/* Function: FUN_00557d50 */

DWORD FUN_00557d50(void)

{
  BOOL BVar1;
  clock_t cVar2;
  LARGE_INTEGER local_8;
  
  if (DAT_005b2d84 != 0) {
    DAT_005b2d84 = 0;
    BVar1 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_005b8140);
    if (BVar1 != 0) {
      DAT_005b8148 = 1;
    }
  }
  if (DAT_005b8148 != 0) {
    QueryPerformanceCounter(&local_8);
    return local_8.s.LowPart;
  }
  cVar2 = clock();
  return cVar2;
}




/* Function: FUN_00557da4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00557da4(double param_1)

{
  if (DAT_005b8148 != 0) {
    return (float10)param_1 /
           ((float10)DAT_005b8140 + (float10)*(float *)(&DAT_005bb428 + (DAT_005b8140 >> 0x1f) * -4)
           );
  }
  return (float10)_DAT_005bb420 * (float10)param_1;
}




/* Function: FUN_00557dd4 */

void * FUN_00557dd4(size_t param_1)

{
  void *pvVar1;
  
  if (DAT_005b8158 != (code *)0x0) {
    pvVar1 = (void *)(*DAT_005b8158)(param_1);
    return pvVar1;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  pvVar1 = malloc(param_1);
  if (pvVar1 == (void *)0x0) {
    FUN_00557e30("fftw_malloc: out of memory\n");
  }
  return pvVar1;
}




/* Function: FUN_00557e10 */

void FUN_00557e10(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (DAT_005b8154 != (code *)0x0) {
      (*DAT_005b8154)(param_1);
      return;
    }
    free(param_1);
  }
  return;
}




/* Function: FUN_00557e30 */

void FUN_00557e30(undefined4 param_1)

{
  if (DAT_005b8150 != (code *)0x0) {
    (*DAT_005b8150)(param_1);
  }
  fflush((FILE *)(_iob_exref + 0x20));
  fprintf((FILE *)(_iob_exref + 0x40),"fftw: %s",param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}




/* Function: FUN_00557e74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557e74(void)

{
  int iVar1;
  
  iVar1 = FUN_00557dd4(0x20);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  _DAT_005b8164 = _DAT_005b8164 + 1;
  return;
}




/* Function: FUN_00557e8c */

void FUN_00557e8c(int param_1)

{
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}




/* Function: FUN_00557e98 */

void FUN_00557e98(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00557e74();
  *puVar1 = *(undefined4 *)(param_2 + 0x10);
  puVar1[1] = param_1;
  puVar1[2] = *(undefined4 *)(param_2 + 4);
  puVar1[3] = param_2;
  return;
}




/* Function: FUN_00557ebc */

undefined4 * FUN_00557ebc(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00557e74();
  *puVar1 = *(undefined4 *)(param_2 + 0x10);
  puVar1[1] = *(undefined4 *)(param_2 + 8);
  puVar1[2] = *(undefined4 *)(param_2 + 4);
  puVar1[4] = param_3;
  puVar1[5] = param_2;
  FUN_00557e8c(param_3);
  if ((param_4 & 1) == 0) {
    puVar1[3] = 0;
  }
  else {
    uVar2 = FUN_005597ec(param_1,param_2);
    puVar1[3] = uVar2;
  }
  return puVar1;
}




/* Function: FUN_00557f14 */

undefined4 *
FUN_00557f14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00557e74();
  *puVar1 = 2;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[4] = param_4;
  FUN_00557e8c(param_4);
  if ((param_5 & 1) == 0) {
    puVar1[3] = 0;
  }
  else {
    uVar2 = FUN_005597ec(param_1,0);
    puVar1[3] = uVar2;
  }
  return puVar1;
}




/* Function: FUN_00557f68 */

void FUN_00557f68(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((param_1 == (undefined4 *)0x0) ||
     (iVar1 = param_1[6], param_1[6] = iVar1 + -1, 0 < iVar1 + -1)) {
    return;
  }
  puVar2 = (undefined4 *)0x0;
  for (puVar3 = DAT_005b815c; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)puVar3[7]) {
    if (puVar3 == param_1) goto LAB_00557fa5;
    puVar2 = puVar3;
  }
  FUN_00557e30("invalid Rader data pointer\n");
LAB_00557fa5:
  if (puVar2 == (undefined4 *)0x0) {
    DAT_005b815c = (undefined4 *)param_1[7];
  }
  else {
    puVar2[7] = param_1[7];
  }
  FUN_00558290(*param_1);
  FUN_00557e10(param_1[1]);
  FUN_00557e10(param_1[8]);
  FUN_00557e10(param_1);
  return;
}




/* Function: FUN_00557fe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557fe0(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) &&
     (iVar1 = param_1[7], param_1[7] = iVar1 + -1, iVar1 + -1 == 0)) {
    switch(*param_1) {
    case 1:
      if (param_1[3] != 0) {
        FUN_00559864(param_1[3]);
      }
      FUN_00557fe0(param_1[4]);
      break;
    case 2:
      if (param_1[3] != 0) {
        FUN_00559864(param_1[3]);
      }
      FUN_00557fe0(param_1[4]);
      break;
    case 3:
      if (param_1[4] != 0) {
        FUN_00559864(param_1[4]);
      }
      if (param_1[3] != 0) {
        FUN_00557f68(param_1[3]);
      }
      FUN_00557fe0(param_1[5]);
      break;
    case 6:
      if (param_1[4] != 0) {
        FUN_00559864(param_1[4]);
      }
      FUN_00557fe0(param_1[5]);
      break;
    case 7:
      if (param_1[4] != 0) {
        FUN_00559864(param_1[4]);
      }
      FUN_00557fe0(param_1[5]);
    }
    FUN_00557e10(param_1);
    _DAT_005b8164 = _DAT_005b8164 + -1;
  }
  return;
}




/* Function: FUN_005580ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_005580ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,int param_8)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00557dd4(0x30);
  *puVar1 = param_1;
  puVar1[2] = param_2;
  puVar1[3] = param_4;
  FUN_00557e8c(param_3);
  *(undefined8 *)(puVar1 + 8) = _DAT_005bb450;
  puVar1[7] = param_3;
  puVar1[5] = param_5;
  puVar1[4] = param_6;
  puVar1[10] = param_7;
  puVar1[0xb] = param_8;
  if ((param_7 == 1) && (1 < param_8)) {
    FUN_00557e30("invalid vector-recurse plan attempted\n");
  }
  _DAT_005b8160 = _DAT_005b8160 + 1;
  puVar1[6] = 0;
  puVar1[1] = 0;
  return puVar1;
}




/* Function: FUN_00558130 */

void FUN_00558130(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    switch(*param_1) {
    case 0:
      return;
    case 1:
      iVar1 = param_1[1];
      if (param_1[3] == 0) {
        uVar2 = FUN_005597ec(param_2,param_1[5]);
        param_1[3] = uVar2;
      }
      param_1 = (undefined4 *)param_1[4];
      param_2 = param_2 / iVar1;
      break;
    case 2:
      iVar1 = param_1[1];
      if (param_1[3] == 0) {
        uVar2 = FUN_005597ec(param_2,0);
        param_1[3] = uVar2;
      }
      param_1 = (undefined4 *)param_1[4];
      param_2 = param_2 / iVar1;
      break;
    case 3:
      iVar1 = param_1[1];
      if (param_1[4] == 0) {
        uVar2 = FUN_005597ec(param_2,*(undefined4 *)(param_1[3] + 0x20));
        param_1[4] = uVar2;
      }
      param_1 = (undefined4 *)param_1[5];
      param_2 = param_2 / iVar1;
      break;
    case 4:
      return;
    case 5:
      return;
    case 6:
      iVar1 = param_1[1];
      if (param_1[4] == 0) {
        uVar2 = FUN_005597ec(param_2,param_1[6]);
        param_1[4] = uVar2;
      }
      param_1 = (undefined4 *)param_1[5];
      param_2 = param_2 / iVar1;
      break;
    case 7:
      iVar1 = param_1[1];
      if (param_1[4] == 0) {
        uVar2 = FUN_005597ec(param_2,0);
        param_1[4] = uVar2;
      }
      param_1 = (undefined4 *)param_1[5];
      param_2 = param_2 / iVar1;
      break;
    default:
      return;
    }
  } while( true );
}




/* Function: FUN_00558284 */

void FUN_00558284(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}




/* Function: FUN_00558290 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00558290(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    FUN_00557fe0(*(undefined4 *)(param_1 + 0x1c));
    _DAT_005b8160 = _DAT_005b8160 + -1;
    FUN_00557e10(param_1);
  }
  return;
}




/* Function: FUN_005582bc */

void FUN_005582bc(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}




/* Function: FUN_005582c8 */

void FUN_005582c8(int *param_1,int param_2)

{
  FUN_00558284(param_2);
  *(int *)(param_2 + 0x18) = *param_1;
  *param_1 = param_2;
  return;
}




/* Function: FUN_005582e4 */

void FUN_005582e4(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  for (piVar1 = (int *)*param_1;
      (piVar1 != (int *)0x0 &&
      (((*piVar1 != param_2 || (piVar1[3] != param_3)) || (piVar1[0xb] != param_4))));
      piVar1 = (int *)piVar1[6]) {
  }
  return;
}




/* Function: FUN_00558310 */

void FUN_00558310(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x18);
    FUN_00558290(iVar2);
    iVar2 = iVar1;
  }
  return;
}




/* Function: FUN_00558334 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00558334(undefined4 *param_1)

{
  int iVar1;
  float10 fVar2;
  
  switch(*param_1) {
  case 0:
    iVar1 = param_1[1];
    break;
  case 1:
    iVar1 = param_1[1];
    fVar2 = (float10)FUN_00558334(param_1[4]);
    return (float10)(iVar1 + -0xc) * (float10)_DAT_005bb488 * (float10)(iVar1 + -0xc) +
           (float10)_DAT_005bb490 + fVar2;
  case 2:
    iVar1 = param_1[1];
    fVar2 = (float10)FUN_00558334(param_1[4]);
    return (float10)(iVar1 * iVar1) + (float10)_DAT_005bb480 + fVar2;
  case 3:
    iVar1 = param_1[1];
    fVar2 = (float10)FUN_00558334(param_1[5]);
    return (float10)(iVar1 * 10) + (float10)_DAT_005bb480 + fVar2;
  case 4:
    iVar1 = param_1[1];
    break;
  case 5:
    iVar1 = param_1[1];
    break;
  case 6:
    iVar1 = param_1[1];
    fVar2 = (float10)FUN_00558334(param_1[5]);
    return (float10)(iVar1 + -0xc) * (float10)_DAT_005bb488 * (float10)(iVar1 + -0xc) +
           (float10)_DAT_005bb490 + fVar2;
  case 7:
    iVar1 = param_1[1];
    fVar2 = (float10)FUN_00558334(param_1[5]);
    return (float10)(iVar1 * iVar1) + (float10)_DAT_005bb480 + fVar2;
  default:
    return (float10)_DAT_005bb478;
  }
  return (float10)(iVar1 + -0x20) * (float10)_DAT_005bb488 * (float10)(iVar1 + -0x20) +
         (float10)_DAT_005bb490;
}




/* Function: FUN_0055847c */

int FUN_0055847c(int param_1,int param_2)

{
  if (param_1 == 0) {
    return param_2;
  }
  if (param_2 != 0) {
    if (*(double *)(param_2 + 0x20) < *(double *)(param_1 + 0x20)) {
      FUN_00558290(param_1);
      return param_2;
    }
    FUN_00558290(param_2);
  }
  return param_1;
}




/* Function: FUN_005584b4 */

uint FUN_005584b4(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 1) == 0) {
    return 2;
  }
  uVar1 = 3;
  if (8 < (int)param_1) {
    do {
      if ((int)param_1 % (int)uVar1 == 0) {
        return uVar1;
      }
      uVar1 = uVar1 + 2;
    } while ((int)(uVar1 * uVar1) <= (int)param_1);
  }
  return param_1;
}




/* Function: FUN_005584f8 */

void FUN_005584f8(FILE *param_1,undefined4 *param_2,int param_3)

{
  while (param_2 != (undefined4 *)0x0) {
    switch(*param_2) {
    case 0:
      fprintf(param_1,"%*sFFTW_NOTW %d\n",param_3,&DAT_00582ad8,param_2[1]);
      return;
    case 1:
      fprintf(param_1,"%*sFFTW_TWIDDLE %d\n",param_3,&DAT_00582ad8,param_2[1]);
      param_2 = (undefined4 *)param_2[4];
      break;
    case 2:
      fprintf(param_1,"%*sFFTW_GENERIC %d\n",param_3,&DAT_00582ad8,param_2[1]);
      param_2 = (undefined4 *)param_2[4];
      break;
    case 3:
      fprintf(param_1,"%*sFFTW_RADER %d\n",param_3,&DAT_00582ad8,param_2[1]);
      fprintf(param_1,"%*splan for size %d convolution:\n",param_3 + 4,&DAT_00582ad8,param_2[1] + -1
             );
      FUN_005584f8(param_1,*(undefined4 *)(*(int *)param_2[3] + 0x1c),param_3 + 6);
      param_2 = (undefined4 *)param_2[5];
      break;
    case 4:
      fprintf(param_1,"%*sFFTW_REAL2HC %d\n",param_3,&DAT_00582ad8,param_2[1]);
      return;
    case 5:
      fprintf(param_1,"%*sFFTW_HC2REAL %d\n",param_3,&DAT_00582ad8,param_2[1]);
      return;
    case 6:
      fprintf(param_1,"%*sFFTW_HC2HC %d\n",param_3,&DAT_00582ad8,param_2[1]);
      param_2 = (undefined4 *)param_2[5];
      break;
    case 7:
      fprintf(param_1,"%*sFFTW_RGENERIC %d\n",param_3,&DAT_00582ad8,param_2[1]);
      param_2 = (undefined4 *)param_2[5];
      break;
    default:
      goto switchD_00558532_default;
    }
  }
switchD_00558532_default:
  return;
}




/* Function: FUN_005586a0 */

undefined4
FUN_005586a0(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
            int *param_8,int *param_9,int param_10)

{
  int *piVar1;
  
  if ((param_2 & 0x10) == 0) {
    return 0;
  }
  piVar1 = DAT_005b8168;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((((*piVar1 == param_1) && ((param_2 | 1) == piVar1[1])) && (piVar1[2] == param_3)) &&
       (((piVar1[4] == param_5 && (piVar1[5] == param_6)) && (piVar1[3] == param_4)))) break;
    piVar1 = (int *)piVar1[10];
  }
  if (param_10 == 0) {
    *param_7 = piVar1[7];
    *param_8 = piVar1[8];
    *param_9 = piVar1[9];
  }
  else {
    piVar1[7] = *param_7;
    piVar1[8] = *param_8;
    piVar1[9] = *param_9;
  }
  return 1;
}




/* Function: FUN_00558774 */

void FUN_00558774(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((param_2 & 0x200) != 0) && (param_9 == 1)) {
    FUN_00557e30("bug in planner (conflicting plan options)\n");
  }
  if ((param_2 & 0x10) == 0) {
    return;
  }
  if ((param_2 & 1) == 0) {
    return;
  }
  iVar2 = FUN_005586a0(param_1,param_2,param_3,param_4,param_5,param_6,&param_7,&param_8,&param_9,1)
  ;
  if (iVar2 != 0) {
    return;
  }
  puVar3 = (undefined4 *)FUN_00557dd4(0x2c);
  *puVar3 = param_1;
  puVar3[1] = param_2;
  uVar1 = DAT_005b8168;
  DAT_005b8168 = puVar3;
  puVar3[2] = param_3;
  puVar3[3] = param_4;
  puVar3[4] = param_5;
  puVar3[5] = param_6;
  puVar3[7] = param_7;
  puVar3[8] = param_8;
  puVar3[9] = param_9;
  puVar3[10] = uVar1;
  return;
}




/* Function: FUN_00558c04 */

undefined4 FUN_00558c04(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  if ((param_2 & 1) == 0) {
    uVar1 = FUN_00558c04(param_1,(int)(param_2 + (0x7fffffff < param_2)) >> 1,param_3);
    uVar1 = FUN_00559440(uVar1,uVar1,param_3);
    return uVar1;
  }
  uVar1 = FUN_00558c04(param_1,param_2 - 1,param_3);
  uVar1 = FUN_00559440(param_1,uVar1,param_3);
  return uVar1;
}




/* Function: FUN_00558c64 */

int FUN_00558c64(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if (param_1 != 1) {
    iVar1 = 1;
    iVar2 = param_1;
    do {
      while( true ) {
        iVar2 = FUN_00559440(iVar2,param_1,param_2);
        iVar1 = iVar1 + 1;
        if (iVar2 != 0) break;
        FUN_00557e30("non-prime order in Rader\n");
      }
    } while (iVar2 != 1);
  }
  return iVar1;
}




/* Function: FUN_00558cc4 */

int FUN_00558cc4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (1 < param_1) {
    do {
      iVar1 = FUN_00558c64(iVar2,param_1);
      if (iVar1 == param_1 + -1) break;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  if (iVar2 == param_1) {
    FUN_00557e30("couldn\'t find generator for Rader\n");
  }
  return iVar2;
}




/* Function: FUN_00558d0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00558d0c(int param_1,uint param_2)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  double dVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  float10 fVar14;
  
  iVar1 = param_1 + -1;
  dVar3 = _DAT_005bb4e8 / (double)iVar1;
  if (param_1 < 2) {
    FUN_00557e30("non-prime order in Rader\n");
  }
  piVar5 = (int *)FUN_00557dd4(0x24);
  iVar6 = FUN_00558cc4(param_1);
  iVar7 = FUN_00558c04(iVar6,param_1 + -2,param_1);
  iVar10 = param_1 * 8 + -8;
  iVar8 = FUN_00557dd4(iVar10);
  iVar9 = FUN_00557cc4(iVar1,0xffffffff,param_2 & 0xfffffdf7);
  iVar10 = FUN_00557dd4(iVar10);
  dVar4 = _DAT_005bb4e0 / (double)param_1;
  iVar11 = 1;
  if (0 < iVar1) {
    iVar13 = 0;
    do {
      fVar14 = (float10)iVar11 * (float10)dVar4;
      fVar2 = (float10)fcos(fVar14);
      fVar14 = (float10)fsin(fVar14);
      *(float *)(iVar10 + iVar13 * 8) = (float)(fVar2 * (float10)dVar3);
      *(float *)(iVar10 + 4 + iVar13 * 8) = (float)(fVar14 * (float10)-(float)dVar3);
      iVar11 = FUN_00559440(iVar11,iVar7,param_1);
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar1);
  }
  FUN_00556e1c(iVar1,iVar10,iVar8,*(undefined4 *)(iVar9 + 0x1c),1,1,*(undefined4 *)(iVar9 + 0x28));
  FUN_00557e10(iVar10);
  *piVar5 = iVar9;
  piVar5[1] = iVar8;
  piVar5[6] = 1;
  piVar5[2] = iVar6;
  piVar5[3] = iVar7;
  piVar5[7] = 0;
  piVar5[4] = param_1;
  piVar5[5] = param_2 & 0xfffffff7;
  puVar12 = (undefined4 *)FUN_00557dd4(0x20);
  piVar5[8] = (int)puVar12;
  *puVar12 = 0;
  *(undefined4 *)(piVar5[8] + 4) = 0;
  *(int *)(piVar5[8] + 8) = param_1;
  *(undefined4 *)(piVar5[8] + 0xc) = 0xffffffff;
  *(undefined4 *)(piVar5[8] + 0x10) = 3;
  *(int *)(piVar5[8] + 0x14) = iVar6;
  *(undefined4 *)(piVar5[8] + 0x18) = 0;
  *(undefined4 *)(piVar5[8] + 0x1c) = 0;
  return piVar5;
}




/* Function: FUN_00558ecc */

int FUN_00558ecc(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_005b815c;
  while( true ) {
    if (iVar1 == 0) {
      iVar2 = FUN_00558d0c(param_1,param_2 & 0xfffffff7);
      iVar1 = iVar2;
      *(int *)(iVar2 + 0x1c) = DAT_005b815c;
      DAT_005b815c = iVar1;
      return iVar2;
    }
    if ((param_1 == *(int *)(iVar1 + 0x10)) && ((param_2 & 0xfffffff7) == *(uint *)(iVar1 + 0x14)))
    break;
    iVar1 = *(int *)(iVar1 + 0x1c);
  }
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
  return iVar1;
}




/* Function: FUN_005593c4 */

undefined4 *
FUN_005593c4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00557e74();
  *puVar1 = 3;
  puVar1[1] = param_2;
  if (param_3 == -1) {
    puVar3 = &LAB_00558f14;
  }
  else {
    puVar3 = &LAB_0055917c;
  }
  puVar1[2] = puVar3;
  uVar2 = FUN_00558ecc(param_2,param_5);
  puVar1[3] = uVar2;
  puVar1[5] = param_4;
  FUN_00557e8c(param_4);
  if ((param_5 & 1) == 0) {
    puVar1[4] = 0;
  }
  else {
    uVar2 = FUN_005597ec(param_1,*(undefined4 *)(puVar1[3] + 0x20));
    puVar1[4] = uVar2;
  }
  return puVar1;
}




/* Function: FUN_00559440 */

int FUN_00559440(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((int)(0x7fffffff / (longlong)(int)param_2) < param_1)) {
    iVar2 = (int)(param_2 + (0x7fffffff < param_2)) >> 1;
    iVar1 = FUN_00559440(param_1,iVar2,param_3);
    iVar2 = FUN_00559440(param_1,param_2 - iVar2,param_3);
    return (iVar1 + iVar2) % param_3;
  }
  return (int)(param_1 * param_2) % param_3;
}




/* Function: FUN_005594b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005594b0(int param_1,int param_2,undefined4 param_3)

{
  float10 fVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  int local_14;
  
  dVar2 = _DAT_005bb4f8 / (double)param_1;
  param_1 = param_1 / param_2;
  iVar3 = FUN_00557dd4(param_2 * 8 * param_1 + param_1 * -8);
  if (0 < param_1) {
    local_14 = 0;
    iVar5 = 0;
    iVar6 = 0;
    do {
      iVar4 = 1;
      iVar8 = 0;
      if (0 < param_2 + -1) {
        pfVar7 = (float *)(iVar3 + (iVar5 + iVar6) * 8);
        do {
          iVar8 = iVar8 + 1;
          fVar9 = (float10)(local_14 * iVar4) * (float10)dVar2;
          fVar1 = (float10)fcos(fVar9);
          fVar9 = (float10)fsin(fVar9);
          *pfVar7 = (float)fVar1;
          pfVar7[1] = (float)-fVar9;
          pfVar7 = pfVar7 + 2;
          iVar4 = FUN_00559440(iVar4,param_3,param_2);
        } while (iVar8 < param_2 + -1);
      }
      iVar5 = iVar5 + param_2;
      iVar6 = iVar6 + -1;
      local_14 = local_14 + 1;
    } while (local_14 < param_1);
  }
  return iVar3;
}




/* Function: FUN_00559598 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00559598(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  
  dVar3 = _DAT_005bb508 / (double)param_1;
  if (param_2 == 0) {
    iVar4 = FUN_00557dd4(param_1 * 8);
    iVar8 = 0;
    if (0 < param_1) {
      while( true ) {
        fVar11 = (float10)iVar8 * (float10)dVar3;
        fVar2 = (float10)fcos(fVar11);
        fVar11 = (float10)fsin(fVar11);
        *(float *)(iVar4 + iVar8 * 8) = (float)fVar2;
        iVar8 = iVar8 + 1;
        if (param_1 <= iVar8) break;
        *(float *)(iVar4 + -4 + iVar8 * 8) = (float)-fVar11;
      }
      *(float *)(iVar4 + -4 + iVar8 * 8) = (float)-fVar11;
      return iVar4;
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 0x10);
    if (iVar4 == 3) {
      iVar4 = FUN_005594b0(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x14));
      return iVar4;
    }
    iVar8 = *(int *)(param_2 + 0x18);
    param_1 = param_1 / *(int *)(param_2 + 8);
    if (iVar4 == 1) {
      iVar9 = 0;
      iVar4 = param_1;
    }
    else if (iVar4 == 6) {
      param_1 = (param_1 + 1) - (param_1 + 1 >> 0x1f) >> 1;
      iVar9 = 1;
      iVar4 = param_1 + -1;
    }
    else {
      FUN_00557e30("compute_twiddle: invalid argument\n");
      iVar9 = 0;
      iVar4 = 0;
    }
    iVar4 = FUN_00557dd4(iVar8 * 8 * iVar4);
    if (iVar9 < param_1) {
      iVar5 = -iVar9;
      iVar7 = iVar9 * iVar8;
      do {
        iVar10 = 0;
        if (0 < iVar8) {
          pfVar6 = (float *)(iVar4 + (iVar5 * iVar8 + iVar7) * 8);
          while( true ) {
            iVar1 = iVar10 * 4;
            iVar10 = iVar10 + 1;
            fVar11 = (float10)(iVar9 * *(int *)(*(int *)(param_2 + 0x1c) + iVar1)) * (float10)dVar3;
            fVar2 = (float10)fcos(fVar11);
            fVar11 = (float10)fsin(fVar11);
            *pfVar6 = (float)fVar2;
            if (iVar8 <= iVar10) break;
            pfVar6[1] = (float)-fVar11;
            pfVar6 = pfVar6 + 2;
          }
          pfVar6[1] = (float)-fVar11;
        }
        iVar7 = iVar7 + iVar8;
        iVar9 = iVar9 + 1;
      } while (iVar9 < param_1);
    }
  }
  return iVar4;
}




/* Function: FUN_00559714 */

undefined4 FUN_00559714(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 != param_2) {
    if ((((param_1 == 0) || (param_2 == 0)) || (*(int *)(param_1 + 8) != *(int *)(param_2 + 8))) ||
       ((*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10) ||
        (iVar1 = *(int *)(param_1 + 0x18), iVar1 != *(int *)(param_2 + 0x18))))) {
      return 0;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      if (iVar1 < 5) {
        iVar3 = *(int *)(param_1 + 0x1c);
        iVar6 = *(int *)(param_2 + 0x1c);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x1c);
        iVar6 = *(int *)(param_2 + 0x1c);
        iVar4 = iVar6;
        iVar5 = iVar3;
        do {
          if (*(int *)(iVar3 + iVar2 * 4) != *(int *)(iVar6 + iVar2 * 4)) {
            return 0;
          }
          if (*(int *)(iVar5 + 4) != *(int *)(iVar4 + 4)) {
            return 0;
          }
          if (*(int *)(iVar5 + 8) != *(int *)(iVar4 + 8)) {
            return 0;
          }
          if (*(int *)(iVar5 + 0xc) != *(int *)(iVar4 + 0xc)) {
            return 0;
          }
          iVar5 = iVar5 + 0x10;
          iVar4 = iVar4 + 0x10;
          iVar2 = iVar2 + 4;
        } while (iVar2 <= iVar1 + -5);
      }
      do {
        if (*(int *)(iVar3 + iVar2 * 4) != *(int *)(iVar6 + iVar2 * 4)) {
          return 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return 1;
}




/* Function: FUN_005597ec */

int * FUN_005597ec(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = DAT_005b817c;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_00557dd4(0x14);
      DAT_005b8180 = DAT_005b8180 + param_1;
      *piVar2 = param_1;
      piVar2[1] = param_2;
      iVar1 = FUN_00559598(param_1,param_2);
      piVar2[4] = 1;
      piVar2[2] = iVar1;
      piVar2[3] = (int)DAT_005b817c;
      DAT_005b817c = piVar2;
      return piVar2;
    }
    if ((param_1 == *piVar2) && (iVar1 = FUN_00559714(param_2,piVar2[1]), iVar1 != 0)) break;
    piVar2 = (int *)piVar2[3];
  }
  piVar2[4] = piVar2[4] + 1;
  return piVar2;
}




/* Function: FUN_00559864 */

void FUN_00559864(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[4];
  param_1[4] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    piVar2 = &DAT_005b817c;
    do {
      if ((int *)*piVar2 == param_1) {
        *piVar2 = param_1[3];
        DAT_005b8180 = DAT_005b8180 - *param_1;
        FUN_00557e10(param_1[2]);
        FUN_00557e10(param_1);
        return;
      }
      piVar2 = (int *)*piVar2 + 3;
    } while (piVar2 != (int *)0x0);
    FUN_00557e30("BUG in fftw_destroy_twiddle\n");
  }
  return;
}




/* Function: FUN_0055dec8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055dec8(float *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  fVar1 = param_1[1];
  fVar8 = param_1[param_3 * 0x10] + param_1[param_3 * 10];
  fVar16 = param_1[param_3 * 0x10] - param_1[param_3 * 10];
  fVar7 = param_1[param_3 * 0xc] + param_1[param_3 * 0x16];
  fVar2 = param_1[param_3 * 0xc] - param_1[param_3 * 0x16];
  fVar5 = param_1[param_3 * 4] + param_1[param_3 * 0xe];
  fVar4 = param_1[param_3 * 4] - param_1[param_3 * 0xe];
  fVar6 = fVar5 + fVar7;
  fVar3 = fVar4 + fVar2;
  fVar15 = param_1[param_3 * 6] - param_1[param_3 * 0x12];
  fVar9 = param_1[param_3 * 6] + param_1[param_3 * 0x12];
  fVar14 = param_1[param_3 * 2] + fVar9;
  fVar18 = fVar9 * _DAT_005bb7e4 + param_1[param_3 * 2];
  fVar9 = param_1[param_3 * 8] + param_1[param_3 * 0x14];
  fVar17 = param_1[param_3 * 8] - param_1[param_3 * 0x14];
  fVar10 = param_1[param_3 * 0x18] + fVar9;
  fVar9 = fVar9 * _DAT_005bb7e4 + param_1[param_3 * 0x18];
  fVar11 = fVar14 + fVar10;
  fVar14 = fVar14 - fVar10;
  fVar10 = fVar8 + fVar6;
  fVar12 = fVar11 + fVar10;
  fVar13 = (fVar11 - fVar10) * _DAT_005bb7b8;
  fVar8 = _DAT_005bb7e4 * fVar6 + fVar8;
  fVar10 = fVar18 - fVar9;
  fVar9 = fVar9 + fVar18;
  fVar6 = fVar9 + fVar8;
  fVar5 = (fVar7 - fVar5) * _DAT_005bb7b4;
  fVar9 = fVar9 - fVar8;
  fVar18 = fVar16 - fVar3;
  fVar16 = fVar16 + fVar3 * _DAT_005bb7b0;
  fVar3 = fVar15 - fVar17;
  fVar7 = (fVar17 + fVar15) * _DAT_005bb7b4;
  fVar15 = fVar7 + fVar16;
  fVar16 = fVar16 - fVar7;
  fVar4 = fVar4 - fVar2;
  fVar7 = fVar4 + fVar3;
  fVar4 = fVar4 - fVar3;
  fVar11 = fVar10 + fVar5;
  fVar10 = fVar10 - fVar5;
  fVar25 = param_1[param_3 * 0x10 + 1] + param_1[param_3 * 10 + 1];
  fVar19 = param_1[param_3 * 0x10 + 1] - param_1[param_3 * 10 + 1];
  fVar3 = param_1[param_3 * 8 + 1] - param_1[param_3 * 0x14 + 1];
  fVar2 = param_1[param_3 * 0x14 + 1] + param_1[param_3 * 8 + 1];
  fVar29 = param_1[param_3 * 0x18 + 1] + fVar2;
  fVar28 = fVar2 * _DAT_005bb7e4 + param_1[param_3 * 0x18 + 1];
  fVar2 = param_1[param_3 * 6 + 1] + param_1[param_3 * 0x12 + 1];
  fVar21 = param_1[param_3 * 6 + 1] - param_1[param_3 * 0x12 + 1];
  fVar26 = param_1[param_3 * 2 + 1] + fVar2;
  fVar27 = fVar2 * _DAT_005bb7e4 + param_1[param_3 * 2 + 1];
  fVar24 = param_1[param_3 * 0xc + 1] + param_1[param_3 * 0x16 + 1];
  fVar8 = param_1[param_3 * 0xc + 1] - param_1[param_3 * 0x16 + 1];
  fVar22 = param_1[param_3 * 4 + 1] + param_1[param_3 * 0xe + 1];
  fVar5 = param_1[param_3 * 4 + 1] - param_1[param_3 * 0xe + 1];
  fVar23 = fVar22 + fVar24;
  fVar2 = fVar8 + fVar5;
  fVar8 = fVar8 - fVar5;
  fVar20 = fVar19 - fVar2;
  fVar17 = fVar3 - fVar21;
  fVar19 = _DAT_005bb7b0 * fVar2 + fVar19;
  fVar2 = (fVar21 + fVar3) * _DAT_005bb7b4;
  fVar21 = fVar8 - fVar17;
  fVar3 = fVar2 - fVar19;
  fVar19 = fVar19 + fVar2;
  fVar17 = fVar17 + fVar8;
  fVar31 = fVar26 - fVar29;
  fVar26 = fVar26 + fVar29;
  fVar29 = fVar25 + fVar23;
  fVar30 = (fVar26 - fVar29) * _DAT_005bb7b8;
  fVar29 = fVar29 + fVar26;
  fVar25 = fVar23 * _DAT_005bb7e4 + fVar25;
  fVar26 = fVar28 + fVar27;
  fVar27 = fVar27 - fVar28;
  fVar23 = fVar26 + fVar25;
  fVar26 = fVar26 - fVar25;
  fVar2 = (fVar22 - fVar24) * _DAT_005bb7b4;
  fVar22 = fVar27 + fVar2;
  fVar27 = fVar27 - fVar2;
  fVar2 = *param_1;
  *param_2 = fVar2 + fVar12;
  fVar5 = _DAT_005bb7ac * fVar4 + _DAT_005bb7e0 * fVar9;
  fVar8 = _DAT_005bb7a8 * fVar7 + _DAT_005bb7dc * fVar6;
  fVar24 = fVar5 + fVar8;
  fVar8 = fVar8 - fVar5;
  fVar4 = fVar4 * _DAT_005bb7a0 + _DAT_005bb7a4 * fVar9;
  fVar9 = fVar13 - fVar4;
  fVar6 = _DAT_005bb798 * fVar7 + _DAT_005bb79c * fVar6;
  fVar2 = fVar2 + _DAT_005bb7d8 * fVar12;
  fVar5 = fVar2 - fVar6;
  fVar13 = fVar4 * _DAT_005bb794 + fVar13;
  fVar2 = fVar2 + _DAT_005bb794 * fVar6;
  fVar6 = fVar9 + fVar5;
  fVar5 = fVar5 - fVar9;
  fVar7 = _DAT_005bb7d4 * fVar31 + _DAT_005bb790 * fVar20;
  fVar4 = _DAT_005bb78c * fVar27 + _DAT_005bb7d0 * fVar3;
  fVar9 = _DAT_005bb784 * fVar22 + _DAT_005bb788 * fVar19;
  fVar25 = (fVar4 + fVar9) * _DAT_005bb780;
  fVar4 = fVar4 - fVar9;
  fVar9 = fVar7 - fVar4;
  fVar7 = _DAT_005bb794 * fVar4 + fVar7;
  fVar12 = fVar31 * _DAT_005bb790 + _DAT_005bb77c * fVar20;
  fVar4 = _DAT_005bb788 * fVar22 + _DAT_005bb7cc * fVar19;
  fVar3 = _DAT_005bb778 * fVar27 + _DAT_005bb78c * fVar3;
  fVar19 = fVar4 - fVar3;
  fVar20 = (fVar3 + fVar4) * _DAT_005bb780;
  fVar3 = fVar12 + fVar19;
  fVar4 = fVar13 + fVar2;
  fVar2 = fVar2 - fVar13;
  param_2[param_4 * 0x18] = fVar4 - fVar7;
  param_2[param_4 * 2] = fVar4 + fVar7;
  fVar12 = _DAT_005bb7c8 * fVar19 + fVar12;
  param_2[param_4 * 10] = fVar2 - fVar12;
  param_2[param_4 * 0x10] = fVar2 + fVar12;
  fVar4 = fVar5 + fVar25;
  fVar5 = fVar5 - fVar25;
  fVar2 = fVar24 + fVar3;
  fVar3 = fVar3 - fVar24;
  param_2[param_4 * 4] = fVar5 - fVar2;
  fVar7 = fVar20 - fVar8;
  fVar8 = fVar8 + fVar20;
  param_2[param_4 * 0xe] = fVar2 + fVar5;
  param_2[param_4 * 0xc] = fVar4 - fVar3;
  param_2[param_4 * 0x16] = fVar3 + fVar4;
  fVar2 = fVar6 + fVar9;
  fVar6 = fVar6 - fVar9;
  param_2[param_4 * 8] = fVar6 - fVar7;
  param_2[param_4 * 0x14] = fVar6 + fVar7;
  param_2[param_4 * 6] = fVar2 - fVar8;
  param_2[param_4 * 0x12] = fVar2 + fVar8;
  fVar3 = _DAT_005bb7ac;
  fVar2 = _DAT_005bb770;
  param_2[1] = fVar1 + fVar29;
  fVar3 = _DAT_005bb774 * fVar26 + fVar3 * fVar21;
  fVar7 = _DAT_005bb7a8 * fVar17 + fVar2 * fVar23;
  fVar2 = fVar3 - fVar7;
  fVar7 = fVar7 + fVar3;
  fVar4 = _DAT_005bb7a4 * fVar26 + _DAT_005bb7c4 * fVar21;
  fVar6 = fVar30 - fVar4;
  fVar3 = _DAT_005bb79c * fVar23 + _DAT_005bb7c0 * fVar17;
  fVar1 = _DAT_005bb7d8 * fVar29 + fVar1;
  fVar30 = fVar4 * _DAT_005bb794 + fVar30;
  fVar4 = fVar1 - fVar3;
  fVar5 = fVar6 + fVar4;
  fVar4 = fVar4 - fVar6;
  fVar1 = fVar1 + fVar3 * _DAT_005bb794;
  fVar8 = _DAT_005bb7bc * fVar18 + _DAT_005bb77c * fVar14;
  fVar6 = _DAT_005bb784 * fVar10 + _DAT_005bb788 * fVar15;
  fVar3 = _DAT_005bb778 * fVar16 + _DAT_005bb78c * fVar11;
  fVar13 = (fVar6 + fVar3) * _DAT_005bb780;
  fVar6 = fVar6 - fVar3;
  fVar12 = _DAT_005bb788 * fVar10 + _DAT_005bb7cc * fVar15;
  fVar3 = fVar8 - fVar6;
  fVar10 = fVar18 * _DAT_005bb77c + _DAT_005bb790 * fVar14;
  fVar11 = _DAT_005bb7d0 * fVar11 + _DAT_005bb78c * fVar16;
  fVar9 = fVar12 + fVar11;
  fVar12 = (fVar11 - fVar12) * _DAT_005bb780;
  fVar11 = fVar10 + fVar9;
  fVar8 = _DAT_005bb794 * fVar6 + fVar8;
  fVar6 = fVar30 + fVar1;
  fVar1 = fVar1 - fVar30;
  param_2[param_4 * 2 + 1] = fVar8 + fVar6;
  fVar9 = _DAT_005bb7c8 * fVar9;
  param_2[param_4 * 0x18 + 1] = fVar6 - fVar8;
  fVar9 = fVar9 + fVar10;
  param_2[param_4 * 10 + 1] = fVar9 + fVar1;
  param_2[param_4 * 0x10 + 1] = fVar1 - fVar9;
  fVar1 = fVar7 + fVar11;
  fVar6 = fVar4 + fVar13;
  fVar4 = fVar4 - fVar13;
  fVar7 = fVar7 - fVar11;
  param_2[param_4 * 4 + 1] = fVar1 + fVar6;
  param_2[param_4 * 0xe + 1] = fVar6 - fVar1;
  param_2[param_4 * 0xc + 1] = fVar4 - fVar7;
  fVar1 = fVar12 - fVar2;
  fVar2 = fVar2 + fVar12;
  param_2[param_4 * 0x16 + 1] = fVar4 + fVar7;
  fVar4 = fVar5 - fVar3;
  fVar3 = fVar3 + fVar5;
  param_2[param_4 * 8 + 1] = fVar4 - fVar1;
  param_2[param_4 * 0x14 + 1] = fVar1 + fVar4;
  param_2[param_4 * 6 + 1] = fVar3 - fVar2;
  param_2[param_4 * 0x12 + 1] = fVar3 + fVar2;
  return;
}




/* Function: FUN_0055f6d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055f6d4(float *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  
  fVar44 = _DAT_005bb844;
  fVar4 = param_1[param_3 * 10] + param_1[param_3 * 0x14];
  fVar3 = (param_1[param_3 * 0x14] - param_1[param_3 * 10]) * _DAT_005bb850;
  fVar1 = (param_1[param_3 * 10 + 1] - param_1[param_3 * 0x14 + 1]) * _DAT_005bb850;
  fVar2 = param_1[param_3 * 0x14 + 1] + param_1[param_3 * 10 + 1];
  fVar18 = *param_1 + fVar4;
  fVar13 = fVar4 * _DAT_005bb85c + *param_1;
  fVar14 = fVar13 - fVar1;
  fVar13 = fVar13 + fVar1;
  fVar15 = param_1[1] + fVar2;
  fVar16 = fVar2 * _DAT_005bb85c + param_1[1];
  fVar17 = fVar3 + fVar16;
  fVar16 = fVar16 - fVar3;
  fVar28 = param_1[param_3 * 0x16] + param_1[param_3 * 2];
  fVar5 = (param_1[param_3 * 2] - param_1[param_3 * 0x16]) * _DAT_005bb850;
  fVar2 = _DAT_005bb85c * fVar28 + param_1[param_3 * 0xc];
  fVar28 = fVar28 + param_1[param_3 * 0xc];
  fVar21 = param_1[param_3 * 0x16 + 1] + param_1[param_3 * 2 + 1];
  fVar26 = (param_1[param_3 * 0x16 + 1] - param_1[param_3 * 2 + 1]) * _DAT_005bb850;
  fVar1 = param_1[param_3 * 0xc + 1] + _DAT_005bb85c * fVar21;
  fVar30 = param_1[param_3 * 0x1c] + param_1[param_3 * 8];
  fVar7 = (param_1[param_3 * 8] - param_1[param_3 * 0x1c]) * _DAT_005bb850;
  fVar4 = param_1[param_3 * 0x12] + _DAT_005bb85c * fVar30;
  fVar22 = (param_1[param_3 * 0x1c + 1] - param_1[param_3 * 8 + 1]) * _DAT_005bb850;
  fVar19 = param_1[param_3 * 8 + 1] + param_1[param_3 * 0x1c + 1];
  fVar3 = _DAT_005bb85c * fVar19 + param_1[param_3 * 0x12 + 1];
  fVar19 = fVar19 + param_1[param_3 * 0x12 + 1];
  fVar30 = fVar30 + param_1[param_3 * 0x12];
  fVar29 = fVar30 + fVar28;
  fVar25 = fVar2 - fVar26;
  fVar26 = fVar26 + fVar2;
  fVar23 = fVar4 - fVar22;
  fVar22 = fVar22 + fVar4;
  fVar24 = fVar23 + fVar25;
  fVar21 = param_1[param_3 * 0xc + 1] + fVar21;
  fVar27 = fVar22 + fVar26;
  fVar20 = fVar19 + fVar21;
  fVar6 = fVar1 - fVar5;
  fVar4 = fVar3 - fVar7;
  fVar1 = fVar1 + fVar5;
  fVar5 = fVar4 + fVar6;
  fVar3 = fVar3 + fVar7;
  fVar2 = fVar3 + fVar1;
  fVar42 = param_1[param_3 * 0x10] + param_1[param_3 * 0x1a];
  fVar11 = (param_1[param_3 * 0x1a] - param_1[param_3 * 0x10]) * _DAT_005bb850;
  fVar8 = _DAT_005bb85c * fVar42 + param_1[param_3 * 6];
  fVar42 = fVar42 + param_1[param_3 * 6];
  fVar33 = param_1[param_3 * 0x10 + 1] + param_1[param_3 * 0x1a + 1];
  fVar40 = (param_1[param_3 * 0x10 + 1] - param_1[param_3 * 0x1a + 1]) * _DAT_005bb850;
  fVar9 = param_1[param_3 * 6 + 1] + _DAT_005bb85c * fVar33;
  fVar7 = param_1[param_3 * 4] + param_1[param_3 * 0xe];
  fVar34 = (param_1[param_3 * 0xe] - param_1[param_3 * 4]) * _DAT_005bb850;
  fVar43 = fVar7 + param_1[param_3 * 0x18];
  fVar10 = param_1[param_3 * 0x18] + _DAT_005bb85c * fVar7;
  fVar35 = fVar43 + fVar42;
  fVar36 = (param_1[param_3 * 4 + 1] - param_1[param_3 * 0xe + 1]) * _DAT_005bb850;
  fVar31 = param_1[param_3 * 0xe + 1] + param_1[param_3 * 4 + 1];
  fVar7 = _DAT_005bb85c * fVar31 + param_1[param_3 * 0x18 + 1];
  fVar31 = fVar31 + param_1[param_3 * 0x18 + 1];
  fVar39 = fVar8 - fVar40;
  fVar37 = fVar10 - fVar36;
  fVar40 = fVar40 + fVar8;
  fVar38 = fVar37 + fVar39;
  fVar36 = fVar36 + fVar10;
  fVar33 = param_1[param_3 * 6 + 1] + fVar33;
  fVar41 = fVar36 + fVar40;
  fVar32 = fVar33 + fVar31;
  fVar10 = fVar9 - fVar11;
  fVar12 = fVar7 - fVar34;
  fVar9 = fVar9 + fVar11;
  fVar11 = fVar12 + fVar10;
  fVar7 = fVar7 + fVar34;
  fVar8 = fVar7 + fVar9;
  fVar33 = fVar33 - fVar31;
  fVar31 = _DAT_005bb848 * fVar33;
  fVar34 = (fVar35 - fVar29) * _DAT_005bb84c;
  fVar35 = fVar35 + fVar29;
  fVar29 = _DAT_005bb858 * fVar35 + fVar18;
  fVar21 = fVar21 - fVar19;
  fVar19 = _DAT_005bb854 * fVar33 + _DAT_005bb848 * fVar21;
  *param_2 = fVar35 + fVar18;
  fVar31 = fVar31 + fVar44 * fVar21;
  fVar18 = fVar34 + fVar29;
  fVar29 = fVar29 - fVar34;
  param_2[param_4 * 0x12] = fVar18 - fVar31;
  fVar6 = fVar6 - fVar4;
  param_2[param_4 * 0xc] = fVar18 + fVar31;
  fVar10 = fVar10 - fVar12;
  param_2[param_4 * 0x18] = fVar29 - fVar19;
  param_2[param_4 * 6] = fVar29 + fVar19;
  fVar12 = (fVar38 - fVar24) * _DAT_005bb84c;
  fVar38 = fVar38 + fVar24;
  fVar4 = _DAT_005bb858 * fVar38 + fVar14;
  fVar18 = _DAT_005bb854 * fVar10 + _DAT_005bb848 * fVar6;
  fVar10 = _DAT_005bb848 * fVar10 + _DAT_005bb844 * fVar6;
  fVar6 = fVar12 + fVar4;
  fVar4 = fVar4 - fVar12;
  fVar42 = fVar42 - fVar43;
  param_2[param_4 * 10] = fVar38 + fVar14;
  param_2[param_4 * 0x1c] = fVar6 - fVar10;
  fVar28 = fVar28 - fVar30;
  param_2[param_4 * 0x16] = fVar6 + fVar10;
  param_2[param_4 * 4] = fVar4 - fVar18;
  param_2[param_4 * 0x10] = fVar4 + fVar18;
  fVar18 = _DAT_005bb848;
  fVar6 = (fVar32 - fVar20) * _DAT_005bb84c;
  fVar32 = fVar32 + fVar20;
  fVar4 = _DAT_005bb858 * fVar32 + fVar15;
  fVar12 = _DAT_005bb854 * fVar42;
  fVar42 = fVar42 * _DAT_005bb848;
  fVar10 = _DAT_005bb848 * fVar28;
  param_2[1] = fVar32 + fVar15;
  fVar14 = _DAT_005bb844;
  fVar12 = fVar12 + fVar10;
  fVar42 = fVar42 + fVar28 * _DAT_005bb844;
  fVar10 = fVar6 + fVar4;
  fVar4 = fVar4 - fVar6;
  param_2[param_4 * 0xc + 1] = fVar10 - fVar42;
  fVar15 = _DAT_005bb854;
  fVar39 = fVar39 - fVar37;
  param_2[param_4 * 0x12 + 1] = fVar10 + fVar42;
  fVar10 = _DAT_005bb848;
  param_2[param_4 * 6 + 1] = fVar4 - fVar12;
  param_2[param_4 * 0x18 + 1] = fVar4 + fVar12;
  fVar12 = (fVar11 - fVar5) * _DAT_005bb84c;
  fVar11 = fVar11 + fVar5;
  fVar6 = _DAT_005bb858 * fVar11 + fVar16;
  fVar25 = fVar25 - fVar23;
  param_2[param_4 * 10 + 1] = fVar16 + fVar11;
  fVar16 = _DAT_005bb858;
  fVar10 = fVar15 * fVar39 + fVar10 * fVar25;
  fVar4 = fVar39 * fVar18 + fVar25 * fVar14;
  fVar5 = fVar12 + fVar6;
  fVar6 = fVar6 - fVar12;
  param_2[param_4 * 0x16 + 1] = fVar5 - fVar4;
  fVar11 = _DAT_005bb848;
  param_2[param_4 * 0x1c + 1] = fVar5 + fVar4;
  param_2[param_4 * 4 + 1] = fVar10 + fVar6;
  param_2[param_4 * 0x10 + 1] = fVar6 - fVar10;
  fVar12 = _DAT_005bb854;
  fVar5 = (fVar8 - fVar2) * _DAT_005bb84c;
  fVar8 = fVar8 + fVar2;
  fVar10 = fVar16 * fVar8 + fVar17;
  fVar40 = fVar40 - fVar36;
  fVar26 = fVar26 - fVar22;
  fVar6 = fVar14 * fVar26 + fVar11 * fVar40;
  param_2[param_4 * 0x14 + 1] = fVar8 + fVar17;
  fVar2 = fVar40 * fVar12 + fVar26 * fVar18;
  fVar4 = fVar10 - fVar5;
  fVar5 = fVar5 + fVar10;
  fVar1 = fVar1 - fVar3;
  param_2[param_4 * 0xe + 1] = fVar2 + fVar4;
  param_2[param_4 * 0x1a + 1] = fVar4 - fVar2;
  fVar9 = fVar9 - fVar7;
  param_2[param_4 * 2 + 1] = fVar5 - fVar6;
  fVar7 = (fVar41 - fVar27) * _DAT_005bb84c;
  fVar41 = fVar41 + fVar27;
  fVar3 = _DAT_005bb858 * fVar41 + fVar13;
  fVar4 = fVar9 * _DAT_005bb848;
  fVar2 = fVar18 * fVar1 + fVar12 * fVar9;
  param_2[param_4 * 8 + 1] = fVar5 + fVar6;
  fVar5 = _DAT_005bb844;
  param_2[param_4 * 0x14] = fVar13 + fVar41;
  fVar4 = fVar1 * fVar5 + fVar4;
  fVar1 = fVar3 - fVar7;
  fVar3 = fVar3 + fVar7;
  param_2[param_4 * 0xe] = fVar1 - fVar2;
  param_2[param_4 * 0x1a] = fVar1 + fVar2;
  param_2[param_4 * 8] = fVar3 - fVar4;
  param_2[param_4 * 2] = fVar3 + fVar4;
  return;
}




/* Function: FUN_0055ff6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055ff6c(float *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  
  fVar44 = _DAT_005bb868;
  fVar1 = param_1[param_3 * 10] + param_1[param_3 * 0x14];
  fVar3 = (param_1[param_3 * 10] - param_1[param_3 * 0x14]) * _DAT_005bb874;
  fVar2 = param_1[param_3 * 10 + 1] + param_1[param_3 * 0x14 + 1];
  fVar14 = (param_1[param_3 * 0x14 + 1] - param_1[param_3 * 10 + 1]) * _DAT_005bb874;
  fVar18 = *param_1 + fVar1;
  fVar1 = fVar1 * _DAT_005bb880 + *param_1;
  fVar13 = fVar1 - fVar14;
  fVar14 = fVar14 + fVar1;
  fVar15 = param_1[1] + fVar2;
  fVar16 = fVar2 * _DAT_005bb880 + param_1[1];
  fVar17 = fVar3 + fVar16;
  fVar16 = fVar16 - fVar3;
  fVar5 = (param_1[param_3 * 0x16] - param_1[param_3 * 2]) * _DAT_005bb874;
  fVar28 = param_1[param_3 * 2] + param_1[param_3 * 0x16];
  fVar4 = _DAT_005bb880 * fVar28 + param_1[param_3 * 0xc];
  fVar28 = fVar28 + param_1[param_3 * 0xc];
  fVar21 = param_1[param_3 * 0x16 + 1] + param_1[param_3 * 2 + 1];
  fVar26 = (param_1[param_3 * 2 + 1] - param_1[param_3 * 0x16 + 1]) * _DAT_005bb874;
  fVar1 = _DAT_005bb880 * fVar21 + param_1[param_3 * 0xc + 1];
  fVar30 = param_1[param_3 * 0x1c] + param_1[param_3 * 8];
  fVar7 = (param_1[param_3 * 0x1c] - param_1[param_3 * 8]) * _DAT_005bb874;
  fVar23 = _DAT_005bb880 * fVar30 + param_1[param_3 * 0x12];
  fVar19 = param_1[param_3 * 0x1c + 1] + param_1[param_3 * 8 + 1];
  fVar2 = (param_1[param_3 * 8 + 1] - param_1[param_3 * 0x1c + 1]) * _DAT_005bb874;
  fVar3 = _DAT_005bb880 * fVar19 + param_1[param_3 * 0x12 + 1];
  fVar30 = param_1[param_3 * 0x12] + fVar30;
  fVar29 = fVar30 + fVar28;
  fVar22 = fVar23 + fVar2;
  fVar25 = fVar4 - fVar26;
  fVar23 = fVar23 - fVar2;
  fVar21 = param_1[param_3 * 0xc + 1] + fVar21;
  fVar24 = fVar23 + fVar25;
  fVar26 = fVar26 + fVar4;
  fVar19 = fVar19 + param_1[param_3 * 0x12 + 1];
  fVar27 = fVar22 + fVar26;
  fVar20 = fVar19 + fVar21;
  fVar6 = fVar1 - fVar5;
  fVar4 = fVar3 - fVar7;
  fVar1 = fVar1 + fVar5;
  fVar5 = fVar4 + fVar6;
  fVar3 = fVar3 + fVar7;
  fVar2 = fVar3 + fVar1;
  fVar31 = param_1[param_3 * 0x10] + param_1[param_3 * 0x1a];
  fVar11 = (param_1[param_3 * 0x10] - param_1[param_3 * 0x1a]) * _DAT_005bb874;
  fVar8 = _DAT_005bb880 * fVar31 + param_1[param_3 * 6];
  fVar31 = fVar31 + param_1[param_3 * 6];
  fVar34 = param_1[param_3 * 0x10 + 1] + param_1[param_3 * 0x1a + 1];
  fVar35 = (param_1[param_3 * 0x1a + 1] - param_1[param_3 * 0x10 + 1]) * _DAT_005bb874;
  fVar7 = param_1[param_3 * 6 + 1] + _DAT_005bb880 * fVar34;
  fVar33 = param_1[param_3 * 4] + param_1[param_3 * 0xe];
  fVar9 = (param_1[param_3 * 4] - param_1[param_3 * 0xe]) * _DAT_005bb874;
  fVar10 = _DAT_005bb880 * fVar33 + param_1[param_3 * 0x18];
  fVar37 = param_1[param_3 * 4 + 1] + param_1[param_3 * 0xe + 1];
  fVar39 = (param_1[param_3 * 0xe + 1] - param_1[param_3 * 4 + 1]) * _DAT_005bb874;
  fVar36 = _DAT_005bb880 * fVar37 + param_1[param_3 * 0x18 + 1];
  fVar37 = param_1[param_3 * 0x18 + 1] + fVar37;
  fVar33 = param_1[param_3 * 0x18] + fVar33;
  fVar32 = fVar33 + fVar31;
  fVar40 = fVar10 - fVar39;
  fVar42 = fVar8 - fVar35;
  fVar35 = fVar35 + fVar8;
  fVar41 = fVar40 + fVar42;
  fVar39 = fVar39 + fVar10;
  fVar34 = param_1[param_3 * 6 + 1] + fVar34;
  fVar43 = fVar39 + fVar35;
  fVar38 = fVar34 + fVar37;
  fVar12 = fVar7 - fVar11;
  fVar10 = fVar36 - fVar9;
  fVar7 = fVar7 + fVar11;
  fVar11 = fVar10 + fVar12;
  fVar9 = fVar9 + fVar36;
  fVar8 = fVar9 + fVar7;
  fVar21 = fVar21 - fVar19;
  fVar34 = fVar34 - fVar37;
  fVar37 = _DAT_005bb86c * fVar21;
  fVar36 = (fVar32 - fVar29) * _DAT_005bb870;
  fVar32 = fVar32 + fVar29;
  fVar29 = _DAT_005bb87c * fVar32 + fVar18;
  fVar19 = _DAT_005bb86c * fVar34 + _DAT_005bb878 * fVar21;
  *param_2 = fVar32 + fVar18;
  fVar37 = fVar37 + fVar34 * fVar44;
  fVar18 = fVar36 + fVar29;
  fVar29 = fVar29 - fVar36;
  fVar35 = fVar35 - fVar39;
  fVar26 = fVar26 - fVar22;
  param_2[param_4 * 0xc] = fVar18 - fVar37;
  param_2[param_4 * 0x12] = fVar18 + fVar37;
  param_2[param_4 * 0x18] = fVar29 - fVar19;
  fVar18 = fVar8 + fVar2;
  param_2[param_4 * 6] = fVar19 + fVar29;
  fVar32 = _DAT_005bb86c;
  fVar29 = _DAT_005bb868;
  fVar8 = (fVar8 - fVar2) * _DAT_005bb870;
  fVar2 = _DAT_005bb87c * fVar18 + fVar17;
  fVar21 = _DAT_005bb878 * fVar26 + _DAT_005bb86c * fVar35;
  fVar22 = fVar26 * _DAT_005bb86c + fVar35 * _DAT_005bb868;
  fVar19 = fVar8 + fVar2;
  fVar2 = fVar2 - fVar8;
  param_2[param_4 * 0x14 + 1] = fVar18 + fVar17;
  fVar7 = fVar7 - fVar9;
  param_2[param_4 * 8 + 1] = fVar19 - fVar22;
  param_2[param_4 * 2 + 1] = fVar19 + fVar22;
  fVar17 = _DAT_005bb86c;
  param_2[param_4 * 0x1a + 1] = fVar2 - fVar21;
  param_2[param_4 * 0xe + 1] = fVar2 + fVar21;
  fVar9 = (fVar43 - fVar27) * _DAT_005bb870;
  fVar43 = fVar43 + fVar27;
  fVar8 = _DAT_005bb87c * fVar43 + fVar14;
  fVar1 = fVar1 - fVar3;
  fVar3 = fVar17 * fVar1 + fVar29 * fVar7;
  fVar1 = fVar1 * _DAT_005bb878;
  param_2[param_4 * 0x14] = fVar43 + fVar14;
  fVar1 = fVar1 + fVar7 * fVar32;
  fVar2 = fVar8 - fVar9;
  fVar8 = fVar8 + fVar9;
  param_2[param_4 * 0xe] = fVar2 - fVar1;
  fVar6 = fVar6 - fVar4;
  param_2[param_4 * 0x1a] = fVar2 + fVar1;
  fVar12 = fVar12 - fVar10;
  param_2[param_4 * 2] = fVar8 - fVar3;
  param_2[param_4 * 8] = fVar8 + fVar3;
  fVar3 = _DAT_005bb868;
  fVar2 = (fVar41 - fVar24) * _DAT_005bb870;
  fVar41 = fVar41 + fVar24;
  fVar1 = _DAT_005bb87c * fVar41 + fVar13;
  fVar7 = _DAT_005bb86c * fVar6;
  fVar4 = _DAT_005bb878 * fVar6 + _DAT_005bb86c * fVar12;
  param_2[param_4 * 10] = fVar41 + fVar13;
  fVar7 = fVar7 + fVar3 * fVar12;
  fVar3 = fVar2 + fVar1;
  fVar1 = fVar1 - fVar2;
  fVar28 = fVar28 - fVar30;
  param_2[param_4 * 0x16] = fVar3 - fVar7;
  fVar31 = fVar31 - fVar33;
  param_2[param_4 * 0x1c] = fVar7 + fVar3;
  param_2[param_4 * 4] = fVar1 - fVar4;
  param_2[param_4 * 0x10] = fVar1 + fVar4;
  fVar8 = _DAT_005bb86c;
  fVar2 = (fVar38 - fVar20) * _DAT_005bb870;
  fVar38 = fVar38 + fVar20;
  fVar1 = _DAT_005bb87c * fVar38 + fVar15;
  fVar4 = _DAT_005bb878 * fVar28;
  fVar28 = fVar28 * _DAT_005bb86c;
  fVar3 = _DAT_005bb86c * fVar31;
  param_2[1] = fVar38 + fVar15;
  fVar7 = _DAT_005bb868;
  fVar4 = fVar4 + fVar3;
  fVar28 = fVar28 + fVar31 * _DAT_005bb868;
  fVar3 = fVar2 + fVar1;
  fVar1 = fVar1 - fVar2;
  param_2[param_4 * 0xc + 1] = fVar28 + fVar3;
  fVar2 = _DAT_005bb878;
  fVar42 = fVar42 - fVar40;
  param_2[param_4 * 0x12 + 1] = fVar3 - fVar28;
  fVar25 = fVar25 - fVar23;
  param_2[param_4 * 6 + 1] = fVar1 - fVar4;
  param_2[param_4 * 0x18 + 1] = fVar4 + fVar1;
  fVar6 = (fVar11 - fVar5) * _DAT_005bb870;
  fVar11 = fVar11 + fVar5;
  fVar3 = _DAT_005bb87c * fVar11 + fVar16;
  fVar4 = fVar42 * _DAT_005bb86c;
  param_2[param_4 * 10 + 1] = fVar11 + fVar16;
  fVar4 = fVar2 * fVar25 + fVar4;
  fVar1 = fVar25 * fVar8 + fVar7 * fVar42;
  fVar2 = fVar6 + fVar3;
  fVar3 = fVar3 - fVar6;
  param_2[param_4 * 0x1c + 1] = fVar2 - fVar1;
  param_2[param_4 * 0x16 + 1] = fVar2 + fVar1;
  param_2[param_4 * 0x10 + 1] = fVar3 - fVar4;
  param_2[param_4 * 4 + 1] = fVar3 + fVar4;
  return;
}




/* Function: FUN_005615f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005615f4(float *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  
  fVar5 = *param_1 + param_1[param_3 * 0x20];
  fVar1 = *param_1 - param_1[param_3 * 0x20];
  fVar2 = param_1[1] + param_1[param_3 * 0x20 + 1];
  fVar6 = param_1[1] - param_1[param_3 * 0x20 + 1];
  fVar8 = param_1[param_3 * 0x10] + param_1[param_3 * 0x30];
  fVar9 = param_1[param_3 * 0x10] - param_1[param_3 * 0x30];
  fVar3 = param_1[param_3 * 0x10 + 1] - param_1[param_3 * 0x30 + 1];
  fVar4 = param_1[param_3 * 0x30 + 1] + param_1[param_3 * 0x10 + 1];
  fVar7 = fVar5 - fVar8;
  fVar8 = fVar8 + fVar5;
  fVar5 = fVar2 - fVar4;
  fVar4 = fVar4 + fVar2;
  fVar2 = fVar1 + fVar3;
  fVar1 = fVar1 - fVar3;
  fVar3 = fVar6 - fVar9;
  fVar6 = fVar6 + fVar9;
  fVar12 = param_1[param_3 * 8] + param_1[param_3 * 0x28];
  fVar9 = param_1[param_3 * 8] - param_1[param_3 * 0x28];
  fVar40 = param_1[param_3 * 8 + 1] + param_1[param_3 * 0x28 + 1];
  fVar11 = param_1[param_3 * 8 + 1] - param_1[param_3 * 0x28 + 1];
  fVar41 = param_1[param_3 * 0x38] + param_1[param_3 * 0x18];
  fVar14 = param_1[param_3 * 0x38] - param_1[param_3 * 0x18];
  fVar13 = param_1[param_3 * 0x38 + 1] - param_1[param_3 * 0x18 + 1];
  fVar10 = param_1[param_3 * 0x18 + 1] + param_1[param_3 * 0x38 + 1];
  fVar42 = fVar12 + fVar41;
  fVar41 = fVar41 - fVar12;
  fVar39 = fVar40 - fVar10;
  fVar40 = fVar40 + fVar10;
  fVar12 = fVar14 - fVar13;
  fVar10 = fVar9 + fVar11;
  fVar11 = fVar11 - fVar9;
  fVar13 = fVar13 + fVar14;
  fVar36 = (fVar12 - fVar10) * _DAT_005bb8cc;
  fVar37 = (fVar10 + fVar12) * _DAT_005bb8cc;
  fVar38 = (fVar11 - fVar13) * _DAT_005bb8cc;
  fVar35 = (fVar13 + fVar11) * _DAT_005bb8cc;
  fVar13 = param_1[param_3 * 0x3e] + param_1[param_3 * 0x1e];
  fVar9 = param_1[param_3 * 0x3e] - param_1[param_3 * 0x1e];
  fVar17 = param_1[param_3 * 0x3e + 1] + param_1[param_3 * 0x1e + 1];
  fVar25 = param_1[param_3 * 0x3e + 1] - param_1[param_3 * 0x1e + 1];
  fVar16 = param_1[param_3 * 0xe] + param_1[param_3 * 0x2e];
  fVar22 = param_1[param_3 * 0xe] - param_1[param_3 * 0x2e];
  fVar12 = param_1[param_3 * 0xe + 1] + param_1[param_3 * 0x2e + 1];
  fVar11 = param_1[param_3 * 0xe + 1] - param_1[param_3 * 0x2e + 1];
  fVar18 = param_1[param_3 * 6] + param_1[param_3 * 0x26];
  fVar23 = param_1[param_3 * 6] - param_1[param_3 * 0x26];
  fVar26 = param_1[param_3 * 6 + 1] + param_1[param_3 * 0x26 + 1];
  fVar27 = param_1[param_3 * 6 + 1] - param_1[param_3 * 0x26 + 1];
  fVar15 = param_1[param_3 * 0x36] + param_1[param_3 * 0x16];
  fVar28 = param_1[param_3 * 0x36] - param_1[param_3 * 0x16];
  fVar14 = param_1[param_3 * 0x36 + 1] + param_1[param_3 * 0x16 + 1];
  fVar24 = param_1[param_3 * 0x36 + 1] - param_1[param_3 * 0x16 + 1];
  fVar10 = fVar9 + fVar11;
  fVar9 = fVar9 - fVar11;
  fVar19 = fVar18 + fVar15;
  fVar21 = fVar13 + fVar16;
  fVar15 = fVar15 - fVar18;
  fVar13 = fVar13 - fVar16;
  fVar20 = fVar21 - fVar19;
  fVar16 = fVar17 + fVar12;
  fVar17 = fVar17 - fVar12;
  fVar18 = fVar17 + fVar15;
  fVar17 = fVar17 - fVar15;
  fVar12 = fVar26 - fVar14;
  fVar14 = fVar14 + fVar26;
  fVar15 = fVar16 - fVar14;
  fVar26 = fVar25 - fVar22;
  fVar25 = fVar25 + fVar22;
  fVar11 = fVar13 + fVar12;
  fVar13 = fVar13 - fVar12;
  fVar22 = fVar28 - fVar24;
  fVar24 = fVar24 + fVar28;
  fVar12 = fVar27 - fVar23;
  fVar27 = fVar27 + fVar23;
  fVar44 = (fVar12 + fVar24) * _DAT_005bb8cc;
  fVar45 = (fVar12 - fVar24) * _DAT_005bb8cc;
  fVar46 = (fVar22 + fVar27) * _DAT_005bb8cc;
  fVar43 = (fVar22 - fVar27) * _DAT_005bb8cc;
  fVar22 = param_1[param_3 * 4] + param_1[param_3 * 0x24];
  fVar12 = param_1[param_3 * 4] - param_1[param_3 * 0x24];
  fVar27 = param_1[param_3 * 4 + 1] - param_1[param_3 * 0x24 + 1];
  fVar49 = param_1[param_3 * 0x24 + 1] + param_1[param_3 * 4 + 1];
  fVar31 = param_1[param_3 * 0x14] + param_1[param_3 * 0x34];
  fVar24 = param_1[param_3 * 0x14] - param_1[param_3 * 0x34];
  fVar28 = param_1[param_3 * 0x14 + 1] - param_1[param_3 * 0x34 + 1];
  fVar29 = param_1[param_3 * 0x34 + 1] + param_1[param_3 * 0x14 + 1];
  fVar23 = fVar22 - fVar31;
  fVar31 = fVar31 + fVar22;
  fVar30 = fVar49 + fVar29;
  fVar49 = fVar49 - fVar29;
  fVar22 = fVar27 + fVar24;
  fVar50 = fVar49 + fVar23;
  fVar49 = fVar49 - fVar23;
  fVar23 = fVar12 - fVar28;
  fVar27 = fVar27 - fVar24;
  fVar33 = _DAT_005bb8c8 * fVar22 + _DAT_005bb8e4 * fVar23;
  fVar48 = fVar23 * _DAT_005bb8c8 + fVar22 * _DAT_005bb8c4;
  fVar28 = fVar28 + fVar12;
  fVar34 = _DAT_005bb8c4 * fVar27 + _DAT_005bb8e0 * fVar28;
  fVar47 = fVar28 * _DAT_005bb8c4 + _DAT_005bb8c8 * fVar27;
  fVar22 = param_1[param_3 * 0x3c] + param_1[param_3 * 0x1c];
  fVar12 = param_1[param_3 * 0x3c] - param_1[param_3 * 0x1c];
  fVar28 = param_1[param_3 * 0x3c + 1] + param_1[param_3 * 0x1c + 1];
  fVar29 = param_1[param_3 * 0x3c + 1] - param_1[param_3 * 0x1c + 1];
  fVar52 = param_1[param_3 * 0xc] + param_1[param_3 * 0x2c];
  fVar23 = param_1[param_3 * 0xc] - param_1[param_3 * 0x2c];
  fVar24 = param_1[param_3 * 0xc + 1] - param_1[param_3 * 0x2c + 1];
  fVar27 = param_1[param_3 * 0x2c + 1] + param_1[param_3 * 0xc + 1];
  fVar51 = fVar22 - fVar52;
  fVar52 = fVar52 + fVar22;
  fVar57 = fVar28 + fVar27;
  fVar28 = fVar28 - fVar27;
  fVar58 = fVar51 + fVar28;
  fVar51 = fVar51 - fVar28;
  fVar22 = fVar29 - fVar23;
  fVar23 = fVar23 + fVar29;
  fVar27 = fVar12 - fVar24;
  fVar56 = _DAT_005bb8c4 * fVar27 + _DAT_005bb8c8 * fVar23;
  fVar55 = fVar27 * _DAT_005bb8c8 + fVar23 * _DAT_005bb8e4;
  fVar24 = fVar24 + fVar12;
  fVar53 = _DAT_005bb8c8 * fVar24 + _DAT_005bb8c4 * fVar22;
  fVar54 = fVar24 * _DAT_005bb8c4 + fVar22 * _DAT_005bb8e0;
  fVar59 = param_1[param_3 * 2] + param_1[param_3 * 0x22];
  fVar29 = param_1[param_3 * 2] - param_1[param_3 * 0x22];
  fVar63 = param_1[param_3 * 2 + 1] + param_1[param_3 * 0x22 + 1];
  fVar32 = param_1[param_3 * 2 + 1] - param_1[param_3 * 0x22 + 1];
  fVar61 = param_1[param_3 * 0x12] + param_1[param_3 * 0x32];
  fVar70 = param_1[param_3 * 0x12] - param_1[param_3 * 0x32];
  fVar12 = param_1[param_3 * 0x12 + 1] + param_1[param_3 * 0x32 + 1];
  fVar22 = param_1[param_3 * 0x12 + 1] - param_1[param_3 * 0x32 + 1];
  fVar62 = param_1[param_3 * 10] + param_1[param_3 * 0x2a];
  fVar64 = param_1[param_3 * 10] - param_1[param_3 * 0x2a];
  fVar23 = param_1[param_3 * 10 + 1] + param_1[param_3 * 0x2a + 1];
  fVar24 = param_1[param_3 * 10 + 1] - param_1[param_3 * 0x2a + 1];
  fVar28 = param_1[param_3 * 0x3a] + param_1[param_3 * 0x1a];
  fVar27 = param_1[param_3 * 0x3a] - param_1[param_3 * 0x1a];
  fVar60 = param_1[param_3 * 0x3a + 1] + param_1[param_3 * 0x1a + 1];
  fVar67 = param_1[param_3 * 0x3a + 1] - param_1[param_3 * 0x1a + 1];
  fVar71 = fVar32 - fVar70;
  fVar70 = fVar70 + fVar32;
  fVar65 = fVar62 + fVar28;
  fVar32 = fVar59 + fVar61;
  fVar59 = fVar59 - fVar61;
  fVar66 = fVar32 - fVar65;
  fVar61 = fVar23 + fVar60;
  fVar23 = fVar23 - fVar60;
  fVar28 = fVar28 - fVar62;
  fVar60 = fVar59 - fVar23;
  fVar23 = fVar23 + fVar59;
  fVar62 = fVar63 - fVar12;
  fVar12 = fVar12 + fVar63;
  fVar63 = fVar62 + fVar28;
  fVar62 = fVar62 - fVar28;
  fVar59 = fVar12 - fVar61;
  fVar28 = fVar29 + fVar22;
  fVar29 = fVar29 - fVar22;
  fVar68 = fVar64 + fVar24;
  fVar24 = fVar24 - fVar64;
  fVar22 = fVar27 - fVar67;
  fVar69 = (fVar22 + fVar68) * _DAT_005bb8cc;
  fVar68 = _DAT_005bb8cc * (fVar22 - fVar68);
  fVar27 = fVar27 + fVar67;
  fVar22 = fVar7 - fVar39;
  fVar73 = (fVar24 + fVar27) * _DAT_005bb8cc;
  fVar74 = (fVar24 - fVar27) * _DAT_005bb8cc;
  fVar72 = (fVar49 - fVar58) * _DAT_005bb8cc;
  fVar67 = fVar22 - fVar72;
  fVar72 = fVar72 + fVar22;
  fVar24 = _DAT_005bb8c8 * fVar62 + _DAT_005bb8e4 * fVar60;
  fVar64 = _DAT_005bb8c4 * fVar13 + _DAT_005bb8c8 * fVar17;
  fVar22 = fVar62 * _DAT_005bb8c4 + fVar60 * _DAT_005bb8c8;
  fVar60 = fVar24 - fVar64;
  fVar64 = fVar64 + fVar24;
  fVar17 = _DAT_005bb8e4 * fVar17 + _DAT_005bb8c8 * fVar13;
  fVar13 = fVar22 + fVar17;
  fVar24 = fVar5 - fVar41;
  fVar17 = fVar17 - fVar22;
  fVar22 = _DAT_005bb8cc * (fVar51 - fVar50);
  fVar27 = fVar24 + fVar22;
  fVar24 = fVar24 - fVar22;
  param_2[param_4 * 0x2c] = fVar72 - fVar13;
  param_2[param_4 * 0xc] = fVar72 + fVar13;
  param_2[param_4 * 0x3c + 1] = fVar24 - fVar17;
  param_2[param_4 * 0x1c + 1] = fVar24 + fVar17;
  param_2[param_4 * 0x3c] = fVar67 - fVar60;
  param_2[param_4 * 0x1c] = fVar67 + fVar60;
  fVar17 = _DAT_005bb8c8;
  fVar13 = (fVar50 + fVar51) * _DAT_005bb8cc;
  fVar7 = fVar7 + fVar39;
  param_2[param_4 * 0x2c + 1] = fVar27 - fVar64;
  param_2[param_4 * 0xc + 1] = fVar27 + fVar64;
  fVar27 = fVar7 + fVar13;
  fVar7 = fVar7 - fVar13;
  fVar24 = _DAT_005bb8c4 * fVar63 + _DAT_005bb8e0 * fVar23;
  fVar13 = fVar63 * fVar17 + fVar23 * _DAT_005bb8c4;
  fVar17 = fVar11 * _DAT_005bb8c8 + _DAT_005bb8c4 * fVar18;
  fVar22 = fVar24 + fVar17;
  fVar24 = fVar24 - fVar17;
  fVar17 = _DAT_005bb8e0 * fVar18 + _DAT_005bb8c4 * fVar11;
  fVar11 = fVar13 + fVar17;
  fVar5 = fVar5 + fVar41;
  fVar17 = fVar17 - fVar13;
  fVar18 = (fVar49 + fVar58) * _DAT_005bb8cc;
  fVar13 = fVar5 - fVar18;
  fVar18 = fVar18 + fVar5;
  param_2[param_4 * 0x24] = fVar27 - fVar11;
  param_2[param_4 * 4] = fVar27 + fVar11;
  param_2[param_4 * 0x34 + 1] = fVar13 - fVar17;
  param_2[param_4 * 0x14 + 1] = fVar13 + fVar17;
  param_2[param_4 * 0x34] = fVar7 - fVar24;
  param_2[param_4 * 0x14] = fVar7 + fVar24;
  param_2[param_4 * 0x24 + 1] = fVar18 - fVar22;
  fVar11 = fVar30 - fVar57;
  param_2[param_4 * 4 + 1] = fVar18 + fVar22;
  fVar5 = fVar8 - fVar42;
  fVar13 = fVar5 - fVar11;
  fVar11 = fVar11 + fVar5;
  fVar5 = fVar20 - fVar15;
  fVar15 = fVar15 + fVar20;
  fVar7 = fVar59 - fVar66;
  fVar59 = fVar59 + fVar66;
  fVar22 = (fVar7 - fVar15) * _DAT_005bb8cc;
  fVar15 = (fVar15 + fVar7) * _DAT_005bb8cc;
  fVar7 = (fVar59 + fVar5) * _DAT_005bb8cc;
  fVar20 = (fVar5 - fVar59) * _DAT_005bb8cc;
  fVar17 = fVar4 - fVar40;
  fVar5 = fVar52 - fVar31;
  fVar18 = fVar17 - fVar5;
  fVar5 = fVar5 + fVar17;
  param_2[param_4 * 0x28] = fVar11 - fVar7;
  fVar30 = fVar30 + fVar57;
  param_2[param_4 * 8] = fVar11 + fVar7;
  param_2[param_4 * 0x38 + 1] = fVar18 - fVar20;
  fVar8 = fVar8 + fVar42;
  param_2[param_4 * 0x18 + 1] = fVar18 + fVar20;
  param_2[param_4 * 0x38] = fVar13 - fVar22;
  param_2[param_4 * 0x18] = fVar13 + fVar22;
  param_2[param_4 * 0x28 + 1] = fVar5 - fVar15;
  fVar31 = fVar31 + fVar52;
  fVar12 = fVar12 + fVar61;
  param_2[param_4 * 8 + 1] = fVar5 + fVar15;
  fVar11 = fVar8 + fVar31;
  fVar8 = fVar8 - fVar31;
  fVar16 = fVar16 + fVar14;
  fVar13 = fVar12 - fVar16;
  fVar16 = fVar16 + fVar12;
  fVar32 = fVar32 + fVar65;
  fVar21 = fVar21 + fVar19;
  fVar7 = fVar32 + fVar21;
  fVar21 = fVar21 - fVar32;
  fVar4 = fVar4 + fVar40;
  fVar5 = fVar4 + fVar30;
  fVar4 = fVar4 - fVar30;
  param_2[param_4 * 0x20] = fVar11 - fVar7;
  fVar12 = fVar70 - fVar68;
  *param_2 = fVar11 + fVar7;
  fVar11 = fVar29 - fVar74;
  param_2[param_4 * 0x10 + 1] = fVar21 + fVar4;
  param_2[param_4 * 0x30 + 1] = fVar4 - fVar21;
  param_2[param_4 * 0x30] = fVar8 - fVar13;
  param_2[param_4 * 0x10] = fVar8 + fVar13;
  fVar17 = _DAT_005bb8c0;
  param_2[param_4 * 0x20 + 1] = fVar5 - fVar16;
  fVar8 = _DAT_005bb8c0 * fVar12;
  fVar7 = fVar1 - fVar38;
  fVar13 = fVar33 - fVar56;
  param_2[1] = fVar5 + fVar16;
  fVar14 = fVar7 - fVar13;
  fVar4 = fVar6 - fVar36;
  fVar13 = fVar13 + fVar7;
  fVar5 = fVar55 - fVar48;
  fVar7 = fVar4 - fVar5;
  fVar5 = fVar5 + fVar4;
  fVar8 = _DAT_005bb8bc * fVar11 + fVar8;
  fVar4 = fVar11 * _DAT_005bb8dc + fVar12 * _DAT_005bb8bc;
  fVar12 = fVar9 - fVar45;
  fVar29 = fVar29 + fVar74;
  fVar15 = fVar25 - fVar43;
  fVar11 = _DAT_005bb8dc * fVar15 + _DAT_005bb8bc * fVar12;
  fVar15 = fVar15 * _DAT_005bb8bc + fVar12 * fVar17;
  fVar12 = fVar8 + fVar11;
  fVar11 = fVar11 - fVar8;
  fVar70 = fVar70 + fVar68;
  param_2[param_4 * 0x2e] = fVar13 - fVar12;
  param_2[param_4 * 0xe] = fVar12 + fVar13;
  param_2[param_4 * 0x3e + 1] = fVar7 - fVar11;
  fVar8 = fVar4 + fVar15;
  fVar4 = fVar4 - fVar15;
  param_2[param_4 * 0x1e + 1] = fVar7 + fVar11;
  param_2[param_4 * 0x3e] = fVar14 - fVar4;
  param_2[param_4 * 0x1e] = fVar14 + fVar4;
  fVar7 = _DAT_005bb8b8;
  fVar6 = fVar6 + fVar36;
  param_2[param_4 * 0x2e + 1] = fVar5 - fVar8;
  fVar48 = fVar48 + fVar55;
  param_2[param_4 * 0xe + 1] = fVar5 + fVar8;
  fVar1 = fVar1 + fVar38;
  fVar11 = fVar1 - fVar48;
  fVar1 = fVar1 + fVar48;
  fVar33 = fVar33 + fVar56;
  fVar4 = fVar6 - fVar33;
  fVar33 = fVar33 + fVar6;
  fVar12 = _DAT_005bb8b4 * fVar29 + _DAT_005bb8b8 * fVar70;
  fVar5 = fVar29 * _DAT_005bb8d8 + fVar70 * _DAT_005bb8b4;
  fVar9 = fVar9 + fVar45;
  fVar25 = fVar25 + fVar43;
  fVar8 = _DAT_005bb8d8 * fVar25 + _DAT_005bb8b4 * fVar9;
  fVar6 = fVar25 * _DAT_005bb8b4 + fVar9 * fVar7;
  fVar7 = fVar12 + fVar8;
  fVar8 = fVar8 - fVar12;
  fVar9 = fVar28 - fVar69;
  param_2[param_4 * 0x26] = fVar1 - fVar7;
  param_2[param_4 * 6] = fVar7 + fVar1;
  fVar14 = fVar71 - fVar73;
  param_2[param_4 * 0x36 + 1] = fVar4 - fVar8;
  fVar7 = fVar5 + fVar6;
  fVar5 = fVar5 - fVar6;
  param_2[param_4 * 0x16 + 1] = fVar4 + fVar8;
  param_2[param_4 * 0x36] = fVar11 - fVar5;
  param_2[param_4 * 0x16] = fVar11 + fVar5;
  fVar15 = _DAT_005bb8b8;
  fVar1 = fVar3 - fVar35;
  param_2[param_4 * 0x26 + 1] = fVar33 - fVar7;
  fVar4 = fVar34 - fVar53;
  param_2[param_4 * 6 + 1] = fVar33 + fVar7;
  fVar11 = fVar2 - fVar37;
  fVar12 = fVar11 - fVar4;
  fVar11 = fVar11 + fVar4;
  fVar5 = fVar54 - fVar47;
  fVar4 = fVar1 + fVar5;
  fVar1 = fVar1 - fVar5;
  fVar13 = _DAT_005bb8b4 * fVar14 + _DAT_005bb8b8 * fVar9;
  fVar5 = fVar14 * fVar15 + fVar9 * _DAT_005bb8d4;
  fVar6 = fVar10 - fVar46;
  fVar8 = fVar26 - fVar44;
  fVar7 = _DAT_005bb8d4 * fVar8 + _DAT_005bb8b8 * fVar6;
  fVar6 = fVar6 * _DAT_005bb8b4 + fVar8 * fVar15;
  fVar8 = fVar13 + fVar7;
  param_2[param_4 * 0x2a] = fVar11 - fVar8;
  fVar7 = fVar7 - fVar13;
  param_2[param_4 * 10] = fVar11 + fVar8;
  param_2[param_4 * 0x3a + 1] = fVar1 - fVar7;
  param_2[param_4 * 0x1a + 1] = fVar1 + fVar7;
  fVar1 = fVar5 + fVar6;
  fVar5 = fVar5 - fVar6;
  fVar2 = fVar2 + fVar37;
  param_2[param_4 * 0x3a] = fVar12 - fVar5;
  fVar3 = fVar3 + fVar35;
  fVar34 = fVar34 + fVar53;
  param_2[param_4 * 0x1a] = fVar5 + fVar12;
  fVar7 = _DAT_005bb8c0;
  fVar5 = _DAT_005bb8bc;
  param_2[param_4 * 0x2a + 1] = fVar4 - fVar1;
  fVar71 = fVar71 + fVar73;
  param_2[param_4 * 10 + 1] = fVar4 + fVar1;
  fVar47 = fVar47 + fVar54;
  fVar4 = fVar2 + fVar47;
  fVar2 = fVar2 - fVar47;
  fVar28 = fVar28 + fVar69;
  fVar1 = fVar3 + fVar34;
  fVar3 = fVar3 - fVar34;
  fVar9 = _DAT_005bb8bc * fVar71 + _DAT_005bb8c0 * fVar28;
  fVar8 = fVar71 * fVar7 + fVar28 * _DAT_005bb8d0;
  fVar10 = fVar10 + fVar46;
  fVar26 = fVar26 + fVar44;
  fVar6 = _DAT_005bb8d0 * fVar26 + _DAT_005bb8c0 * fVar10;
  fVar7 = fVar26 * fVar7 + fVar10 * fVar5;
  fVar5 = fVar9 + fVar6;
  fVar6 = fVar6 - fVar9;
  param_2[param_4 * 0x22] = fVar4 - fVar5;
  param_2[param_4 * 2] = fVar5 + fVar4;
  param_2[param_4 * 0x32 + 1] = fVar3 - fVar6;
  fVar4 = fVar8 + fVar7;
  fVar8 = fVar8 - fVar7;
  param_2[param_4 * 0x12 + 1] = fVar3 + fVar6;
  param_2[param_4 * 0x32] = fVar2 - fVar8;
  param_2[param_4 * 0x12] = fVar2 + fVar8;
  param_2[param_4 * 0x22 + 1] = fVar1 - fVar4;
  param_2[param_4 * 2 + 1] = fVar1 + fVar4;
  return;
}




/* Function: FUN_0056e404 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056e404(float *param_1,float *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  for (; 0 < param_4; param_4 = param_4 + -1) {
    fVar3 = param_1[param_3 * 0x10] * param_2[0xf] + param_2[0xe] * param_1[param_3 * 0x10 + 1];
    fVar2 = param_2[0xe] * param_1[param_3 * 0x10] - param_1[param_3 * 0x10 + 1] * param_2[0xf];
    fVar1 = *param_1 - fVar2;
    fVar2 = fVar2 + *param_1;
    fVar4 = param_1[1] + fVar3;
    fVar3 = param_1[1] - fVar3;
    fVar7 = param_1[param_3 * 8] * param_2[6] - param_2[7] * param_1[param_3 * 8 + 1];
    fVar8 = param_1[param_3 * 8 + 1] * param_2[6] + param_2[7] * param_1[param_3 * 8];
    fVar5 = param_2[0x16] * param_1[param_3 * 0x18] - param_2[0x17] * param_1[param_3 * 0x18 + 1];
    fVar9 = param_2[0x17] * param_1[param_3 * 0x18] + param_1[param_3 * 0x18 + 1] * param_2[0x16];
    fVar6 = fVar7 - fVar5;
    fVar5 = fVar5 + fVar7;
    fVar7 = fVar8 + fVar9;
    fVar8 = fVar8 - fVar9;
    fVar12 = param_2[0x1c] * param_1[param_3 * 0x1e] - param_2[0x1d] * param_1[param_3 * 0x1e + 1];
    fVar11 = param_1[param_3 * 0x1e] * param_2[0x1d] + param_1[param_3 * 0x1e + 1] * param_2[0x1c];
    fVar9 = param_1[param_3 * 0x16] * param_2[0x15] + param_2[0x14] * param_1[param_3 * 0x16 + 1];
    fVar10 = param_2[0x14] * param_1[param_3 * 0x16] - param_1[param_3 * 0x16 + 1] * param_2[0x15];
    fVar19 = param_2[0xc] * param_1[param_3 * 0xe] - param_2[0xd] * param_1[param_3 * 0xe + 1];
    fVar15 = param_1[param_3 * 0xe] * param_2[0xd] + param_1[param_3 * 0xe + 1] * param_2[0xc];
    fVar14 = param_1[param_3 * 6] * param_2[5] + param_2[4] * param_1[param_3 * 6 + 1];
    fVar16 = param_2[4] * param_1[param_3 * 6] - param_2[5] * param_1[param_3 * 6 + 1];
    fVar13 = fVar12 - fVar19;
    fVar19 = fVar19 + fVar12;
    fVar17 = fVar10 + fVar16;
    fVar16 = fVar16 - fVar10;
    fVar18 = fVar19 - fVar17;
    fVar12 = fVar11 + fVar15;
    fVar11 = fVar11 - fVar15;
    fVar15 = fVar11 - fVar16;
    fVar16 = fVar16 + fVar11;
    fVar10 = fVar9 + fVar14;
    fVar11 = fVar12 - fVar10;
    fVar14 = fVar14 - fVar9;
    fVar9 = fVar13 - fVar14;
    fVar14 = fVar14 + fVar13;
    fVar13 = param_1[param_3 * 4] * param_2[3] + param_2[2] * param_1[param_3 * 4 + 1];
    fVar20 = param_2[2] * param_1[param_3 * 4] - param_1[param_3 * 4 + 1] * param_2[3];
    fVar22 = param_2[0x12] * param_1[param_3 * 0x14] - param_2[0x13] * param_1[param_3 * 0x14 + 1];
    fVar23 = param_1[param_3 * 0x14] * param_2[0x13] + param_1[param_3 * 0x14 + 1] * param_2[0x12];
    fVar21 = fVar20 - fVar22;
    fVar22 = fVar22 + fVar20;
    fVar20 = fVar13 - fVar23;
    fVar23 = fVar23 + fVar13;
    fVar13 = fVar20 + fVar21;
    fVar20 = fVar20 - fVar21;
    fVar24 = param_2[0x1a] * param_1[param_3 * 0x1c] - param_1[param_3 * 0x1c + 1] * param_2[0x1b];
    fVar21 = param_1[param_3 * 0x1c] * param_2[0x1b] + param_2[0x1a] * param_1[param_3 * 0x1c + 1];
    fVar26 = param_2[10] * param_1[param_3 * 0xc] - param_2[0xb] * param_1[param_3 * 0xc + 1];
    fVar27 = param_2[0xb] * param_1[param_3 * 0xc] + param_1[param_3 * 0xc + 1] * param_2[10];
    fVar25 = fVar24 - fVar26;
    fVar26 = fVar26 + fVar24;
    fVar24 = fVar21 - fVar27;
    fVar27 = fVar27 + fVar21;
    fVar21 = fVar25 + fVar24;
    fVar25 = fVar25 - fVar24;
    fVar32 = *param_2 * param_1[param_3 * 2] - param_2[1] * param_1[param_3 * 2 + 1];
    fVar31 = param_1[param_3 * 2] * param_2[1] + *param_2 * param_1[param_3 * 2 + 1];
    fVar24 = param_1[param_3 * 0x1a] * param_2[0x19] + param_2[0x18] * param_1[param_3 * 0x1a + 1];
    fVar28 = param_2[0x18] * param_1[param_3 * 0x1a] - param_1[param_3 * 0x1a + 1] * param_2[0x19];
    fVar30 = param_2[0x10] * param_1[param_3 * 0x12] - param_2[0x11] * param_1[param_3 * 0x12 + 1];
    fVar29 = param_1[param_3 * 0x12] * param_2[0x11] + param_1[param_3 * 0x12 + 1] * param_2[0x10];
    fVar34 = param_2[8] * param_1[param_3 * 10] - param_2[9] * param_1[param_3 * 10 + 1];
    fVar35 = param_1[param_3 * 10] * param_2[9] + param_1[param_3 * 10 + 1] * param_2[8];
    fVar33 = fVar32 - fVar30;
    fVar30 = fVar30 + fVar32;
    fVar32 = fVar28 + fVar34;
    fVar34 = fVar34 - fVar28;
    fVar28 = fVar30 - fVar32;
    fVar36 = fVar35 - fVar24;
    fVar24 = fVar24 + fVar35;
    fVar37 = fVar33 - fVar36;
    fVar36 = fVar36 + fVar33;
    fVar33 = fVar31 - fVar29;
    fVar29 = fVar29 + fVar31;
    fVar39 = fVar1 - fVar8;
    fVar35 = fVar29 - fVar24;
    fVar31 = fVar33 - fVar34;
    fVar34 = fVar34 + fVar33;
    fVar33 = (fVar20 - fVar21) * _DAT_005bbb54;
    fVar40 = fVar39 + fVar33;
    fVar39 = fVar39 - fVar33;
    fVar33 = (fVar25 - fVar13) * _DAT_005bbb54;
    fVar42 = fVar3 + fVar6;
    fVar41 = fVar33 + fVar42;
    fVar42 = fVar42 - fVar33;
    fVar33 = fVar34 * _DAT_005bbb50 + _DAT_005bbb5c * fVar37;
    fVar38 = _DAT_005bbb4c * fVar34 + _DAT_005bbb50 * fVar37;
    fVar34 = _DAT_005bbb50 * fVar9 + _DAT_005bbb5c * fVar16;
    fVar37 = fVar38 + fVar34;
    fVar34 = fVar34 - fVar38;
    fVar16 = _DAT_005bbb4c * fVar9 + _DAT_005bbb50 * fVar16;
    fVar9 = fVar33 + fVar16;
    fVar33 = fVar33 - fVar16;
    param_1[param_3 * 0x16] = fVar40 - fVar37;
    param_1[param_3 * 6] = fVar40 + fVar37;
    param_1[param_3 * 0x1e] = fVar39 - fVar33;
    param_1[param_3 * 0xe] = fVar39 + fVar33;
    fVar1 = fVar1 + fVar8;
    param_1[param_3 * 6 + 1] = fVar9 + fVar41;
    param_1[param_3 * 0x16 + 1] = fVar41 - fVar9;
    param_1[param_3 * 0xe + 1] = fVar34 + fVar42;
    param_1[param_3 * 0x1e + 1] = fVar42 - fVar34;
    fVar8 = (fVar13 + fVar25) * _DAT_005bbb54;
    fVar25 = fVar1 + fVar8;
    fVar1 = fVar1 - fVar8;
    fVar8 = (fVar20 + fVar21) * _DAT_005bbb54;
    fVar3 = fVar3 - fVar6;
    fVar20 = fVar8 + fVar3;
    fVar3 = fVar3 - fVar8;
    fVar8 = _DAT_005bbb50 * fVar31 + _DAT_005bbb4c * fVar36;
    fVar13 = _DAT_005bbb4c * fVar14 + _DAT_005bbb58 * fVar15;
    fVar6 = fVar31 * _DAT_005bbb4c + fVar36 * _DAT_005bbb58;
    fVar16 = fVar8 + fVar13;
    fVar13 = fVar13 - fVar8;
    fVar9 = _DAT_005bbb50 * fVar14 + _DAT_005bbb4c * fVar15;
    fVar8 = fVar6 + fVar9;
    fVar6 = fVar6 - fVar9;
    param_1[param_3 * 0x12] = fVar25 - fVar16;
    param_1[param_3 * 2] = fVar25 + fVar16;
    param_1[param_3 * 0x1a] = fVar1 - fVar6;
    param_1[param_3 * 10] = fVar1 + fVar6;
    param_1[param_3 * 2 + 1] = fVar8 + fVar20;
    param_1[param_3 * 0x12 + 1] = fVar20 - fVar8;
    fVar1 = fVar4 - fVar7;
    param_1[param_3 * 10 + 1] = fVar13 + fVar3;
    fVar6 = fVar23 - fVar27;
    param_1[param_3 * 0x1a + 1] = fVar3 - fVar13;
    fVar9 = fVar2 - fVar5;
    fVar13 = fVar9 - fVar6;
    fVar9 = fVar9 + fVar6;
    fVar6 = fVar26 - fVar22;
    fVar3 = fVar6 + fVar1;
    fVar1 = fVar1 - fVar6;
    fVar6 = fVar18 + fVar11;
    fVar14 = fVar28 + fVar35;
    fVar18 = fVar18 - fVar11;
    fVar35 = fVar35 - fVar28;
    fVar8 = (fVar14 + fVar18) * _DAT_005bbb54;
    fVar11 = (fVar18 - fVar14) * _DAT_005bbb54;
    fVar14 = (fVar35 + fVar6) * _DAT_005bbb54;
    fVar6 = (fVar35 - fVar6) * _DAT_005bbb54;
    fVar2 = fVar2 + fVar5;
    fVar12 = fVar12 + fVar10;
    param_1[param_3 * 0x14] = fVar9 - fVar8;
    param_1[param_3 * 4] = fVar9 + fVar8;
    param_1[param_3 * 0x1c] = fVar13 - fVar6;
    param_1[param_3 * 0xc] = fVar13 + fVar6;
    fVar4 = fVar4 + fVar7;
    param_1[param_3 * 4 + 1] = fVar14 + fVar3;
    param_1[param_3 * 0x14 + 1] = fVar3 - fVar14;
    param_1[param_3 * 0xc + 1] = fVar11 + fVar1;
    fVar22 = fVar22 + fVar26;
    param_1[param_3 * 0x1c + 1] = fVar1 - fVar11;
    fVar5 = fVar2 + fVar22;
    fVar2 = fVar2 - fVar22;
    fVar23 = fVar23 + fVar27;
    fVar3 = fVar23 + fVar4;
    fVar4 = fVar4 - fVar23;
    fVar30 = fVar30 + fVar32;
    fVar19 = fVar19 + fVar17;
    fVar6 = fVar30 + fVar19;
    fVar19 = fVar19 - fVar30;
    fVar29 = fVar29 + fVar24;
    fVar1 = fVar29 + fVar12;
    fVar29 = fVar29 - fVar12;
    param_1[param_3 * 0x10] = fVar5 - fVar6;
    *param_1 = fVar5 + fVar6;
    param_1[param_3 * 0x18] = fVar2 - fVar29;
    param_1[param_3 * 8] = fVar2 + fVar29;
    param_1[1] = fVar1 + fVar3;
    param_1[param_3 * 0x10 + 1] = fVar3 - fVar1;
    param_1[param_3 * 8 + 1] = fVar19 + fVar4;
    param_1[param_3 * 0x18 + 1] = fVar4 - fVar19;
    param_1 = param_1 + param_5 * 2;
    param_2 = param_2 + 0x1e;
  }
  return;
}




/* Function: FUN_0056edd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056edd0(float *param_1,float *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  
  for (; 0 < param_4; param_4 = param_4 + -1) {
    fVar3 = param_2[0xe] * param_1[param_3 * 0x10 + 1] - param_1[param_3 * 0x10] * param_2[0xf];
    fVar2 = param_1[param_3 * 0x10 + 1] * param_2[0xf] + param_2[0xe] * param_1[param_3 * 0x10];
    fVar1 = *param_1 - fVar2;
    fVar2 = fVar2 + *param_1;
    fVar4 = param_1[1] + fVar3;
    fVar3 = param_1[1] - fVar3;
    fVar7 = param_2[7] * param_1[param_3 * 8 + 1] + param_1[param_3 * 8] * param_2[6];
    fVar8 = param_1[param_3 * 8 + 1] * param_2[6] - param_2[7] * param_1[param_3 * 8];
    fVar5 = param_2[0x17] * param_1[param_3 * 0x18 + 1] + param_2[0x16] * param_1[param_3 * 0x18];
    fVar9 = param_1[param_3 * 0x18 + 1] * param_2[0x16] - param_2[0x17] * param_1[param_3 * 0x18];
    fVar6 = fVar7 + fVar5;
    fVar7 = fVar7 - fVar5;
    fVar5 = fVar8 + fVar9;
    fVar8 = fVar8 - fVar9;
    fVar13 = param_2[0x1d] * param_1[param_3 * 0x1e + 1] + param_2[0x1c] * param_1[param_3 * 0x1e];
    fVar20 = param_1[param_3 * 0x1e + 1] * param_2[0x1c] - param_1[param_3 * 0x1e] * param_2[0x1d];
    fVar10 = param_2[0x15] * param_1[param_3 * 0x16 + 1] + param_2[0x14] * param_1[param_3 * 0x16];
    fVar9 = param_1[param_3 * 0x16 + 1] * param_2[0x14] - param_1[param_3 * 0x16] * param_2[0x15];
    fVar12 = param_1[param_3 * 0xe + 1] * param_2[0xc] - param_2[0xd] * param_1[param_3 * 0xe];
    fVar16 = param_2[0xd] * param_1[param_3 * 0xe + 1] + param_1[param_3 * 0xe] * param_2[0xc];
    fVar14 = param_2[5] * param_1[param_3 * 6 + 1] + param_2[4] * param_1[param_3 * 6];
    fVar11 = param_2[4] * param_1[param_3 * 6 + 1] - param_1[param_3 * 6] * param_2[5];
    fVar15 = fVar10 + fVar14;
    fVar17 = fVar13 + fVar16;
    fVar13 = fVar13 - fVar16;
    fVar16 = fVar17 - fVar15;
    fVar14 = fVar14 - fVar10;
    fVar18 = fVar11 - fVar9;
    fVar9 = fVar9 + fVar11;
    fVar19 = fVar13 - fVar18;
    fVar18 = fVar18 + fVar13;
    fVar11 = fVar20 - fVar12;
    fVar12 = fVar12 + fVar20;
    fVar10 = fVar12 - fVar9;
    fVar13 = fVar11 - fVar14;
    fVar14 = fVar14 + fVar11;
    fVar20 = param_2[3] * param_1[param_3 * 4 + 1] + param_2[2] * param_1[param_3 * 4];
    fVar21 = param_1[param_3 * 4 + 1] * param_2[2] - param_2[3] * param_1[param_3 * 4];
    fVar23 = param_2[0x13] * param_1[param_3 * 0x14 + 1] + param_2[0x12] * param_1[param_3 * 0x14];
    fVar11 = param_1[param_3 * 0x14 + 1] * param_2[0x12] - param_2[0x13] * param_1[param_3 * 0x14];
    fVar22 = fVar20 - fVar23;
    fVar23 = fVar23 + fVar20;
    fVar20 = fVar21 - fVar11;
    fVar11 = fVar11 + fVar21;
    fVar21 = fVar22 - fVar20;
    fVar20 = fVar20 + fVar22;
    fVar24 = param_2[0x1b] * param_1[param_3 * 0x1c + 1] + param_1[param_3 * 0x1c] * param_2[0x1a];
    fVar22 = param_1[param_3 * 0x1c + 1] * param_2[0x1a] - param_2[0x1b] * param_1[param_3 * 0x1c];
    fVar26 = param_2[0xb] * param_1[param_3 * 0xc + 1] + param_2[10] * param_1[param_3 * 0xc];
    fVar27 = param_1[param_3 * 0xc + 1] * param_2[10] - param_2[0xb] * param_1[param_3 * 0xc];
    fVar25 = fVar24 - fVar26;
    fVar26 = fVar26 + fVar24;
    fVar24 = fVar22 - fVar27;
    fVar27 = fVar27 + fVar22;
    fVar22 = fVar25 + fVar24;
    fVar24 = fVar24 - fVar25;
    fVar32 = param_2[1] * param_1[param_3 * 2 + 1] + *param_2 * param_1[param_3 * 2];
    fVar31 = param_1[param_3 * 2 + 1] * *param_2 - param_1[param_3 * 2] * param_2[1];
    fVar25 = param_2[0x18] * param_1[param_3 * 0x1a + 1] - param_1[param_3 * 0x1a] * param_2[0x19];
    fVar28 = param_1[param_3 * 0x1a + 1] * param_2[0x19] + param_2[0x18] * param_1[param_3 * 0x1a];
    fVar29 = param_2[0x10] * param_1[param_3 * 0x12 + 1] - param_1[param_3 * 0x12] * param_2[0x11];
    fVar30 = param_2[0x11] * param_1[param_3 * 0x12 + 1] + param_2[0x10] * param_1[param_3 * 0x12];
    fVar35 = param_1[param_3 * 10 + 1] * param_2[8] - param_2[9] * param_1[param_3 * 10];
    fVar34 = param_2[9] * param_1[param_3 * 10 + 1] + param_1[param_3 * 10] * param_2[8];
    fVar33 = fVar32 - fVar30;
    fVar30 = fVar30 + fVar32;
    fVar32 = fVar28 + fVar34;
    fVar34 = fVar34 - fVar28;
    fVar28 = fVar30 - fVar32;
    fVar36 = fVar35 - fVar25;
    fVar25 = fVar25 + fVar35;
    fVar37 = fVar33 - fVar36;
    fVar36 = fVar36 + fVar33;
    fVar33 = fVar31 - fVar29;
    fVar29 = fVar29 + fVar31;
    fVar31 = fVar33 - fVar34;
    fVar35 = fVar29 - fVar25;
    fVar40 = fVar1 - fVar8;
    fVar38 = (fVar21 + fVar22) * _DAT_005bbb68;
    fVar34 = fVar34 + fVar33;
    fVar41 = fVar40 + fVar38;
    fVar40 = fVar40 - fVar38;
    fVar33 = (fVar20 + fVar24) * _DAT_005bbb68;
    fVar43 = fVar3 + fVar7;
    fVar42 = fVar33 + fVar43;
    fVar43 = fVar43 - fVar33;
    fVar38 = _DAT_005bbb64 * fVar14 + _DAT_005bbb70 * fVar19;
    fVar39 = _DAT_005bbb64 * fVar34 + _DAT_005bbb60 * fVar37;
    fVar33 = _DAT_005bbb70 * fVar34 + fVar37 * _DAT_005bbb64;
    fVar34 = fVar38 + fVar39;
    fVar38 = fVar38 - fVar39;
    param_2 = param_2 + 0x1e;
    fVar19 = _DAT_005bbb60 * fVar14 + _DAT_005bbb64 * fVar19;
    fVar14 = fVar33 - fVar19;
    fVar19 = fVar19 + fVar33;
    param_1[param_3 * 0x1a] = fVar40 - fVar38;
    param_1[param_3 * 10] = fVar40 + fVar38;
    param_1[param_3 * 0x12] = fVar41 - fVar19;
    param_1[param_3 * 2] = fVar41 + fVar19;
    fVar33 = _DAT_005bbb6c;
    fVar1 = fVar1 + fVar8;
    fVar8 = _DAT_005bbb64 * fVar36;
    param_1[param_3 * 2 + 1] = fVar34 + fVar42;
    param_1[param_3 * 0x12 + 1] = fVar42 - fVar34;
    param_1[param_3 * 10 + 1] = fVar14 + fVar43;
    param_1[param_3 * 0x1a + 1] = fVar43 - fVar14;
    fVar20 = (fVar24 - fVar20) * _DAT_005bbb68;
    fVar19 = fVar1 - fVar20;
    fVar20 = fVar20 + fVar1;
    fVar1 = (fVar21 - fVar22) * _DAT_005bbb68;
    fVar3 = fVar3 - fVar7;
    fVar21 = fVar1 + fVar3;
    fVar3 = fVar3 - fVar1;
    fVar14 = fVar33 * fVar31 + fVar36 * _DAT_005bbb60;
    fVar1 = _DAT_005bbb60 * fVar13 + _DAT_005bbb6c * fVar18;
    fVar8 = fVar31 * _DAT_005bbb60 + fVar8;
    fVar7 = fVar1 + fVar8;
    fVar1 = fVar1 - fVar8;
    fVar13 = _DAT_005bbb64 * fVar13 + fVar18 * _DAT_005bbb60;
    fVar8 = fVar14 - fVar13;
    fVar13 = fVar13 + fVar14;
    param_1[param_3 * 0x1e] = fVar19 - fVar1;
    param_1[param_3 * 0xe] = fVar19 + fVar1;
    param_1[param_3 * 0x16] = fVar20 - fVar13;
    param_1[param_3 * 6] = fVar20 + fVar13;
    fVar1 = fVar4 - fVar5;
    param_1[param_3 * 6 + 1] = fVar7 + fVar21;
    param_1[param_3 * 0x16 + 1] = fVar21 - fVar7;
    param_1[param_3 * 0xe + 1] = fVar8 + fVar3;
    fVar7 = fVar27 - fVar11;
    param_1[param_3 * 0x1e + 1] = fVar3 - fVar8;
    fVar18 = fVar2 - fVar6;
    fVar19 = fVar18 - fVar7;
    fVar18 = fVar18 + fVar7;
    fVar7 = fVar23 - fVar26;
    fVar3 = fVar7 + fVar1;
    fVar1 = fVar1 - fVar7;
    fVar7 = fVar28 + fVar35;
    fVar28 = fVar28 - fVar35;
    fVar8 = fVar16 + fVar10;
    fVar10 = fVar10 - fVar16;
    fVar14 = (fVar28 + fVar8) * _DAT_005bbb68;
    fVar8 = (fVar28 - fVar8) * _DAT_005bbb68;
    fVar13 = (fVar10 + fVar7) * _DAT_005bbb68;
    fVar7 = (fVar10 - fVar7) * _DAT_005bbb68;
    fVar2 = fVar2 + fVar6;
    fVar29 = fVar29 + fVar25;
    param_1[param_3 * 0x14] = fVar18 - fVar14;
    param_1[param_3 * 4] = fVar18 + fVar14;
    param_1[param_3 * 0x1c] = fVar19 - fVar7;
    param_1[param_3 * 0xc] = fVar19 + fVar7;
    fVar4 = fVar4 + fVar5;
    param_1[param_3 * 4 + 1] = fVar13 + fVar3;
    param_1[param_3 * 0x14 + 1] = fVar3 - fVar13;
    param_1[param_3 * 0xc + 1] = fVar8 + fVar1;
    fVar23 = fVar23 + fVar26;
    param_1[param_3 * 0x1c + 1] = fVar1 - fVar8;
    fVar5 = fVar2 + fVar23;
    fVar2 = fVar2 - fVar23;
    fVar11 = fVar11 + fVar27;
    fVar3 = fVar11 + fVar4;
    fVar4 = fVar4 - fVar11;
    fVar30 = fVar30 + fVar32;
    fVar17 = fVar17 + fVar15;
    fVar6 = fVar30 + fVar17;
    fVar30 = fVar30 - fVar17;
    fVar12 = fVar12 + fVar9;
    fVar1 = fVar12 + fVar29;
    fVar12 = fVar12 - fVar29;
    param_1[param_3 * 0x10] = fVar5 - fVar6;
    *param_1 = fVar5 + fVar6;
    param_1[param_3 * 0x18] = fVar2 - fVar12;
    param_1[param_3 * 8] = fVar2 + fVar12;
    param_1[1] = fVar1 + fVar3;
    param_1[param_3 * 0x10 + 1] = fVar3 - fVar1;
    param_1[param_3 * 8 + 1] = fVar30 + fVar4;
    param_1[param_3 * 0x18 + 1] = fVar4 - fVar30;
    param_1 = param_1 + param_5 * 2;
  }
  return;
}




/* Function: FUN_0056f798 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056f798(float *param_1,float *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  
  for (; 0 < param_4; param_4 = param_4 + -1) {
    fVar2 = param_2[0x1e] * param_1[param_3 * 0x20] - param_2[0x1f] * param_1[param_3 * 0x20 + 1];
    fVar1 = param_1[param_3 * 0x20] * param_2[0x1f] + param_1[param_3 * 0x20 + 1] * param_2[0x1e];
    fVar10 = param_2[0xf] * param_1[param_3 * 0x10] + param_1[param_3 * 0x10 + 1] * param_2[0xe];
    fVar6 = param_1[param_3 * 0x10] * param_2[0xe] - param_2[0xf] * param_1[param_3 * 0x10 + 1];
    fVar8 = param_1[param_3 * 0x30] * param_2[0x2f] + param_2[0x2e] * param_1[param_3 * 0x30 + 1];
    fVar3 = param_2[0x2e] * param_1[param_3 * 0x30] - param_1[param_3 * 0x30 + 1] * param_2[0x2f];
    fVar5 = fVar6 + fVar3;
    fVar6 = fVar6 - fVar3;
    fVar3 = *param_1 - fVar2;
    fVar2 = fVar2 + *param_1;
    fVar4 = fVar2 - fVar5;
    fVar2 = fVar2 + fVar5;
    fVar7 = param_1[1] + fVar1;
    fVar1 = param_1[1] - fVar1;
    fVar5 = fVar1 + fVar6;
    fVar1 = fVar1 - fVar6;
    fVar9 = fVar10 - fVar8;
    fVar8 = fVar8 + fVar10;
    fVar6 = fVar8 + fVar7;
    fVar7 = fVar7 - fVar8;
    fVar8 = fVar3 - fVar9;
    fVar9 = fVar9 + fVar3;
    fVar13 = param_1[param_3 * 0x3e] * param_2[0x3d] + param_2[0x3c] * param_1[param_3 * 0x3e + 1];
    fVar11 = param_2[0x3c] * param_1[param_3 * 0x3e] - param_1[param_3 * 0x3e + 1] * param_2[0x3d];
    fVar3 = param_1[param_3 * 0x2e] * param_2[0x2d] + param_2[0x2c] * param_1[param_3 * 0x2e + 1];
    fVar10 = param_2[0x2c] * param_1[param_3 * 0x2e] - param_1[param_3 * 0x2e + 1] * param_2[0x2d];
    fVar14 = param_2[0x1c] * param_1[param_3 * 0x1e] - param_2[0x1d] * param_1[param_3 * 0x1e + 1];
    fVar15 = param_1[param_3 * 0x1e + 1] * param_2[0x1c] + param_1[param_3 * 0x1e] * param_2[0x1d];
    fVar12 = param_1[param_3 * 0xe] * param_2[0xd] + param_2[0xc] * param_1[param_3 * 0xe + 1];
    fVar16 = param_2[0xc] * param_1[param_3 * 0xe] - param_1[param_3 * 0xe + 1] * param_2[0xd];
    fVar18 = fVar11 + fVar14;
    fVar11 = fVar11 - fVar14;
    fVar14 = fVar10 + fVar16;
    fVar16 = fVar16 - fVar10;
    fVar17 = fVar18 + fVar14;
    fVar18 = fVar18 - fVar14;
    fVar14 = fVar13 + fVar15;
    fVar13 = fVar13 - fVar15;
    fVar15 = fVar13 - fVar16;
    fVar16 = fVar16 + fVar13;
    fVar10 = fVar3 + fVar12;
    fVar12 = fVar12 - fVar3;
    fVar13 = fVar14 - fVar10;
    fVar10 = fVar10 + fVar14;
    fVar3 = fVar11 - fVar12;
    fVar12 = fVar12 + fVar11;
    fVar19 = param_2[7] * param_1[param_3 * 8] + param_1[param_3 * 8 + 1] * param_2[6];
    fVar20 = param_1[param_3 * 8] * param_2[6] - param_2[7] * param_1[param_3 * 8 + 1];
    fVar11 = param_1[param_3 * 0x18] * param_2[0x17] + param_2[0x16] * param_1[param_3 * 0x18 + 1];
    fVar14 = param_2[0x16] * param_1[param_3 * 0x18] - param_1[param_3 * 0x18 + 1] * param_2[0x17];
    fVar23 = param_2[0x26] * param_1[param_3 * 0x28] - param_2[0x27] * param_1[param_3 * 0x28 + 1];
    fVar22 = param_1[param_3 * 0x28] * param_2[0x27] + param_1[param_3 * 0x28 + 1] * param_2[0x26];
    fVar21 = fVar20 - fVar23;
    fVar23 = fVar23 + fVar20;
    fVar24 = param_2[0x36] * param_1[param_3 * 0x38] - param_2[0x37] * param_1[param_3 * 0x38 + 1];
    fVar20 = param_1[param_3 * 0x38] * param_2[0x37] + param_1[param_3 * 0x38 + 1] * param_2[0x36];
    fVar25 = fVar14 + fVar24;
    fVar24 = fVar24 - fVar14;
    fVar26 = fVar23 + fVar25;
    fVar25 = fVar25 - fVar23;
    fVar14 = fVar20 - fVar11;
    fVar20 = fVar20 + fVar11;
    fVar23 = fVar24 + fVar14;
    fVar24 = fVar24 - fVar14;
    fVar14 = fVar19 - fVar22;
    fVar22 = fVar22 + fVar19;
    fVar19 = fVar22 + fVar20;
    fVar22 = fVar22 - fVar20;
    fVar11 = fVar14 + fVar21;
    fVar14 = fVar14 - fVar21;
    fVar28 = param_2[4] * param_1[param_3 * 6] - param_2[5] * param_1[param_3 * 6 + 1];
    fVar27 = param_1[param_3 * 6] * param_2[5] + param_1[param_3 * 6 + 1] * param_2[4];
    fVar30 = param_2[0x24] * param_1[param_3 * 0x26] - param_2[0x25] * param_1[param_3 * 0x26 + 1];
    fVar20 = param_2[0x25] * param_1[param_3 * 0x26] + param_1[param_3 * 0x26 + 1] * param_2[0x24];
    fVar21 = fVar27 - fVar20;
    fVar29 = fVar28 - fVar30;
    fVar34 = param_2[0x34] * param_1[param_3 * 0x36] - param_1[param_3 * 0x36 + 1] * param_2[0x35];
    fVar31 = param_1[param_3 * 0x36] * param_2[0x35] + param_2[0x34] * param_1[param_3 * 0x36 + 1];
    fVar35 = param_2[0x15] * param_1[param_3 * 0x16] + param_1[param_3 * 0x16 + 1] * param_2[0x14];
    fVar64 = param_1[param_3 * 0x16] * param_2[0x14] - param_2[0x15] * param_1[param_3 * 0x16 + 1];
    fVar32 = fVar31 + fVar35;
    fVar33 = fVar34 - fVar64;
    fVar31 = fVar31 - fVar35;
    fVar64 = fVar64 + fVar34;
    fVar28 = fVar28 + fVar30;
    fVar65 = fVar28 + fVar64;
    fVar64 = fVar64 - fVar28;
    fVar27 = fVar27 + fVar20;
    fVar66 = fVar27 + fVar32;
    fVar27 = fVar27 - fVar32;
    fVar20 = fVar33 - fVar31;
    fVar31 = fVar31 + fVar33;
    fVar28 = fVar21 + fVar29;
    fVar21 = fVar21 - fVar29;
    fVar61 = (fVar20 - fVar28) * _DAT_005bbb8c;
    fVar62 = (fVar21 - fVar31) * _DAT_005bbb8c;
    fVar63 = (fVar31 + fVar21) * _DAT_005bbb8c;
    fVar60 = _DAT_005bbb8c * (fVar28 + fVar20);
    fVar36 = param_1[param_3 * 4] * param_2[3] + param_2[2] * param_1[param_3 * 4 + 1];
    fVar32 = param_2[2] * param_1[param_3 * 4] - param_1[param_3 * 4 + 1] * param_2[3];
    fVar21 = param_1[param_3 * 0x34] * param_2[0x33] + param_2[0x32] * param_1[param_3 * 0x34 + 1];
    fVar34 = param_2[0x32] * param_1[param_3 * 0x34] - param_1[param_3 * 0x34 + 1] * param_2[0x33];
    fVar28 = param_1[param_3 * 0x24] * param_2[0x23] + param_2[0x22] * param_1[param_3 * 0x24 + 1];
    fVar29 = param_2[0x22] * param_1[param_3 * 0x24] - param_2[0x23] * param_1[param_3 * 0x24 + 1];
    fVar30 = param_2[0x12] * param_1[param_3 * 0x14] - param_2[0x13] * param_1[param_3 * 0x14 + 1];
    fVar20 = param_1[param_3 * 0x14] * param_2[0x13] + param_2[0x12] * param_1[param_3 * 0x14 + 1];
    fVar31 = fVar34 + fVar30;
    fVar33 = fVar32 - fVar29;
    fVar29 = fVar29 + fVar32;
    fVar32 = fVar29 - fVar31;
    fVar31 = fVar31 + fVar29;
    fVar30 = fVar30 - fVar34;
    fVar34 = fVar20 - fVar21;
    fVar21 = fVar21 + fVar20;
    fVar35 = fVar33 - fVar34;
    fVar34 = fVar34 + fVar33;
    fVar29 = fVar36 - fVar28;
    fVar28 = fVar28 + fVar36;
    fVar20 = fVar28 + fVar21;
    fVar28 = fVar28 - fVar21;
    fVar21 = fVar29 - fVar30;
    fVar30 = fVar30 + fVar29;
    fVar40 = *param_2 * param_1[param_3 * 2] - param_2[1] * param_1[param_3 * 2 + 1];
    fVar44 = param_2[1] * param_1[param_3 * 2] + param_1[param_3 * 2 + 1] * *param_2;
    fVar33 = param_1[param_3 * 0x32] * param_2[0x31] + param_2[0x30] * param_1[param_3 * 0x32 + 1];
    fVar42 = param_2[0x30] * param_1[param_3 * 0x32] - param_1[param_3 * 0x32 + 1] * param_2[0x31];
    fVar36 = param_2[0x20] * param_1[param_3 * 0x22 + 1] + param_1[param_3 * 0x22] * param_2[0x21];
    fVar37 = param_2[0x20] * param_1[param_3 * 0x22] - param_2[0x21] * param_1[param_3 * 0x22 + 1];
    fVar38 = param_2[0x10] * param_1[param_3 * 0x12] - param_2[0x11] * param_1[param_3 * 0x12 + 1];
    fVar29 = param_1[param_3 * 0x12] * param_2[0x11] + param_2[0x10] * param_1[param_3 * 0x12 + 1];
    fVar39 = fVar42 + fVar38;
    fVar41 = fVar40 - fVar37;
    fVar37 = fVar37 + fVar40;
    fVar40 = fVar37 - fVar39;
    fVar39 = fVar39 + fVar37;
    fVar38 = fVar38 - fVar42;
    fVar42 = fVar29 - fVar33;
    fVar33 = fVar33 + fVar29;
    fVar43 = fVar41 - fVar42;
    fVar42 = fVar42 + fVar41;
    fVar37 = fVar44 - fVar36;
    fVar36 = fVar36 + fVar44;
    fVar29 = fVar36 + fVar33;
    fVar36 = fVar36 - fVar33;
    fVar33 = fVar37 - fVar38;
    fVar38 = fVar38 + fVar37;
    fVar48 = param_2[0x3a] * param_1[param_3 * 0x3c] - param_2[0x3b] * param_1[param_3 * 0x3c + 1];
    fVar52 = param_1[param_3 * 0x3c] * param_2[0x3b] + param_1[param_3 * 0x3c + 1] * param_2[0x3a];
    fVar41 = param_1[param_3 * 0x2c] * param_2[0x2b] + param_2[0x2a] * param_1[param_3 * 0x2c + 1];
    fVar50 = param_2[0x2a] * param_1[param_3 * 0x2c] - param_1[param_3 * 0x2c + 1] * param_2[0x2b];
    fVar44 = param_1[param_3 * 0x1c] * param_2[0x1b] + param_2[0x1a] * param_1[param_3 * 0x1c + 1];
    fVar45 = param_2[0x1a] * param_1[param_3 * 0x1c] - param_2[0x1b] * param_1[param_3 * 0x1c + 1];
    fVar46 = param_2[10] * param_1[param_3 * 0xc] - param_2[0xb] * param_1[param_3 * 0xc + 1];
    fVar37 = param_1[param_3 * 0xc] * param_2[0xb] + param_1[param_3 * 0xc + 1] * param_2[10];
    fVar47 = fVar50 + fVar46;
    fVar49 = fVar48 - fVar45;
    fVar45 = fVar45 + fVar48;
    fVar48 = fVar45 - fVar47;
    fVar47 = fVar47 + fVar45;
    fVar46 = fVar46 - fVar50;
    fVar50 = fVar37 - fVar41;
    fVar41 = fVar41 + fVar37;
    fVar51 = fVar49 - fVar50;
    fVar50 = fVar50 + fVar49;
    fVar45 = fVar52 - fVar44;
    fVar44 = fVar44 + fVar52;
    fVar37 = fVar44 + fVar41;
    fVar44 = fVar44 - fVar41;
    fVar41 = fVar45 - fVar46;
    fVar46 = fVar46 + fVar45;
    fVar55 = param_2[8] * param_1[param_3 * 10] - param_2[9] * param_1[param_3 * 10 + 1];
    fVar45 = param_1[param_3 * 10] * param_2[9] + param_1[param_3 * 10 + 1] * param_2[8];
    fVar53 = param_2[0x28] * param_1[param_3 * 0x2a] - param_2[0x29] * param_1[param_3 * 0x2a + 1];
    fVar52 = param_1[param_3 * 0x2a] * param_2[0x29] + param_1[param_3 * 0x2a + 1] * param_2[0x28];
    fVar54 = fVar55 - fVar53;
    fVar49 = fVar45 - fVar52;
    fVar58 = param_2[0x38] * param_1[param_3 * 0x3a] - param_1[param_3 * 0x3a + 1] * param_2[0x39];
    fVar56 = param_1[param_3 * 0x3a] * param_2[0x39] + param_2[0x38] * param_1[param_3 * 0x3a + 1];
    fVar55 = fVar55 + fVar53;
    fVar53 = param_2[0x18] * param_1[param_3 * 0x1a] - param_2[0x19] * param_1[param_3 * 0x1a + 1];
    fVar57 = param_2[0x19] * param_1[param_3 * 0x1a] + param_1[param_3 * 0x1a + 1] * param_2[0x18];
    fVar68 = fVar58 + fVar53;
    fVar58 = fVar58 - fVar53;
    fVar53 = fVar56 - fVar57;
    fVar57 = fVar57 + fVar56;
    fVar73 = fVar55 + fVar68;
    fVar68 = fVar68 - fVar55;
    fVar55 = fVar58 + fVar53;
    fVar58 = fVar58 - fVar53;
    fVar45 = fVar45 + fVar52;
    fVar67 = fVar45 + fVar57;
    fVar45 = fVar45 - fVar57;
    fVar53 = fVar54 + fVar49;
    fVar49 = fVar49 - fVar54;
    fVar70 = (fVar58 - fVar53) * _DAT_005bbb8c;
    fVar52 = fVar10 + fVar66;
    fVar69 = (fVar53 + fVar58) * _DAT_005bbb8c;
    fVar59 = fVar6 + fVar19;
    fVar71 = (fVar49 - fVar55) * _DAT_005bbb8c;
    fVar54 = fVar2 + fVar26;
    fVar72 = (fVar55 + fVar49) * _DAT_005bbb8c;
    fVar49 = fVar31 + fVar47;
    fVar55 = fVar54 + fVar49;
    fVar54 = fVar54 - fVar49;
    fVar49 = fVar20 + fVar37;
    fVar58 = fVar49 + fVar59;
    fVar59 = fVar59 - fVar49;
    fVar49 = fVar39 + fVar73;
    fVar57 = fVar17 + fVar65;
    fVar56 = fVar49 + fVar57;
    fVar57 = fVar57 - fVar49;
    fVar53 = fVar29 + fVar67;
    fVar49 = fVar53 + fVar52;
    fVar53 = fVar53 - fVar52;
    param_1[param_3 * 0x20] = fVar55 - fVar56;
    *param_1 = fVar55 + fVar56;
    param_1[param_3 * 0x30] = fVar54 - fVar53;
    param_1[param_3 * 0x10] = fVar54 + fVar53;
    fVar10 = fVar10 - fVar66;
    param_1[1] = fVar49 + fVar58;
    param_1[param_3 * 0x20 + 1] = fVar58 - fVar49;
    fVar2 = fVar2 - fVar26;
    fVar29 = fVar29 - fVar67;
    param_1[param_3 * 0x10 + 1] = fVar57 + fVar59;
    fVar20 = fVar20 - fVar37;
    param_1[param_3 * 0x30 + 1] = fVar59 - fVar57;
    fVar26 = fVar2 - fVar20;
    fVar6 = fVar6 - fVar19;
    fVar20 = fVar20 + fVar2;
    fVar47 = fVar47 - fVar31;
    fVar31 = fVar47 + fVar6;
    fVar6 = fVar6 - fVar47;
    fVar17 = fVar17 - fVar65;
    fVar39 = fVar39 - fVar73;
    fVar19 = fVar39 + fVar29;
    fVar29 = fVar29 - fVar39;
    fVar2 = fVar17 + fVar10;
    fVar17 = fVar17 - fVar10;
    fVar10 = (fVar19 + fVar17) * _DAT_005bbb8c;
    param_1[param_3 * 0x28] = fVar20 - fVar10;
    param_1[param_3 * 8] = fVar10 + fVar20;
    fVar10 = (fVar17 - fVar19) * _DAT_005bbb8c;
    param_1[param_3 * 0x18 + 1] = fVar6 + fVar10;
    param_1[param_3 * 0x38 + 1] = fVar6 - fVar10;
    fVar6 = (fVar29 - fVar2) * _DAT_005bbb8c;
    param_1[param_3 * 0x38] = fVar26 - fVar6;
    param_1[param_3 * 0x18] = fVar26 + fVar6;
    fVar2 = (fVar2 + fVar29) * _DAT_005bbb8c;
    param_1[param_3 * 8 + 1] = fVar2 + fVar31;
    param_1[param_3 * 0x28 + 1] = fVar31 - fVar2;
    fVar2 = fVar4 + fVar22;
    fVar4 = fVar4 - fVar22;
    fVar6 = fVar28 - fVar32;
    fVar10 = fVar48 + fVar44;
    fVar28 = fVar28 + fVar32;
    fVar48 = fVar48 - fVar44;
    fVar20 = (fVar6 - fVar10) * _DAT_005bbb8c;
    fVar19 = (fVar10 + fVar6) * _DAT_005bbb8c;
    fVar10 = fVar40 + fVar45;
    fVar17 = (fVar28 + fVar48) * _DAT_005bbb8c;
    fVar40 = fVar40 - fVar45;
    fVar22 = (fVar48 - fVar28) * _DAT_005bbb8c;
    fVar26 = fVar36 + fVar68;
    fVar36 = fVar36 - fVar68;
    fVar31 = _DAT_005bbb84 * fVar40 + _DAT_005bbb88 * fVar36;
    fVar28 = fVar40 * _DAT_005bbba4 + fVar36 * _DAT_005bbb84;
    fVar6 = fVar7 - fVar25;
    fVar7 = fVar7 + fVar25;
    fVar32 = _DAT_005bbb88 * fVar10 + _DAT_005bbb84 * fVar26;
    fVar10 = fVar10 * _DAT_005bbba0 + fVar26 * _DAT_005bbb88;
    fVar25 = fVar18 - fVar27;
    fVar27 = fVar27 + fVar18;
    fVar18 = fVar13 - fVar64;
    fVar26 = _DAT_005bbba4 * fVar18 + _DAT_005bbb84 * fVar25;
    fVar29 = fVar18 * _DAT_005bbb84 + fVar25 * _DAT_005bbb88;
    fVar13 = fVar13 + fVar64;
    fVar18 = _DAT_005bbb88 * fVar13 + _DAT_005bbb84 * fVar27;
    fVar13 = fVar13 * _DAT_005bbba0 + _DAT_005bbb88 * fVar27;
    fVar25 = fVar4 - fVar20;
    fVar20 = fVar20 + fVar4;
    fVar4 = fVar31 + fVar26;
    fVar26 = fVar26 - fVar31;
    param_1[param_3 * 0x2c] = fVar20 - fVar4;
    param_1[param_3 * 0xc] = fVar20 + fVar4;
    fVar4 = fVar28 + fVar29;
    fVar28 = fVar28 - fVar29;
    param_1[param_3 * 0x3c] = fVar25 - fVar28;
    param_1[param_3 * 0x1c] = fVar28 + fVar25;
    fVar20 = fVar22 + fVar6;
    fVar6 = fVar6 - fVar22;
    param_1[param_3 * 0xc + 1] = fVar4 + fVar20;
    param_1[param_3 * 0x2c + 1] = fVar20 - fVar4;
    param_1[param_3 * 0x1c + 1] = fVar26 + fVar6;
    param_1[param_3 * 0x3c + 1] = fVar6 - fVar26;
    fVar4 = fVar32 + fVar13;
    fVar13 = fVar13 - fVar32;
    fVar6 = fVar2 + fVar17;
    fVar2 = fVar2 - fVar17;
    param_1[param_3 * 0x24] = fVar6 - fVar4;
    param_1[param_3 * 4] = fVar6 + fVar4;
    fVar4 = fVar10 + fVar18;
    fVar10 = fVar10 - fVar18;
    param_1[param_3 * 0x34] = fVar2 - fVar10;
    param_1[param_3 * 0x14] = fVar10 + fVar2;
    fVar2 = fVar19 + fVar7;
    fVar7 = fVar7 - fVar19;
    param_1[param_3 * 4 + 1] = fVar4 + fVar2;
    fVar10 = (fVar24 + fVar11) * _DAT_005bbb8c;
    param_1[param_3 * 0x24 + 1] = fVar2 - fVar4;
    param_1[param_3 * 0x14 + 1] = fVar13 + fVar7;
    param_1[param_3 * 0x34 + 1] = fVar7 - fVar13;
    fVar6 = fVar9 - fVar10;
    fVar10 = fVar10 + fVar9;
    fVar2 = _DAT_005bbb84 * fVar21 + _DAT_005bbb88 * fVar34;
    fVar4 = fVar21 * _DAT_005bbb88 + fVar34 * _DAT_005bbba0;
    fVar7 = _DAT_005bbba0 * fVar41 + _DAT_005bbb88 * fVar50;
    fVar9 = fVar2 + fVar7;
    fVar7 = fVar7 - fVar2;
    fVar2 = (fVar23 + fVar14) * _DAT_005bbb8c;
    fVar22 = fVar1 - fVar2;
    fVar1 = fVar1 + fVar2;
    fVar13 = fVar41 * _DAT_005bbb88 + _DAT_005bbb84 * fVar50;
    fVar17 = fVar4 - fVar13;
    fVar13 = fVar13 + fVar4;
    fVar2 = fVar42 - fVar69;
    fVar4 = fVar33 - fVar72;
    fVar33 = fVar33 + fVar72;
    fVar26 = _DAT_005bbb7c * fVar4 + _DAT_005bbb80 * fVar2;
    fVar69 = fVar69 + fVar42;
    fVar19 = fVar4 * _DAT_005bbb80 + fVar2 * _DAT_005bbb9c;
    fVar18 = _DAT_005bbb74 * fVar33 + _DAT_005bbb78 * fVar69;
    fVar4 = fVar33 * _DAT_005bbb78 + fVar69 * _DAT_005bbb98;
    fVar20 = fVar15 + fVar63;
    fVar15 = fVar15 - fVar63;
    fVar2 = fVar12 - fVar60;
    fVar60 = fVar60 + fVar12;
    fVar21 = _DAT_005bbb9c * fVar15 + _DAT_005bbb80 * fVar2;
    fVar12 = fVar15 * _DAT_005bbb80 + _DAT_005bbb7c * fVar2;
    fVar2 = _DAT_005bbb78 * fVar60 + _DAT_005bbb98 * fVar20;
    fVar25 = _DAT_005bbb78 * fVar20 + fVar60 * _DAT_005bbb74;
    fVar20 = fVar26 + fVar21;
    fVar15 = fVar6 - fVar17;
    fVar17 = fVar17 + fVar6;
    fVar21 = fVar21 - fVar26;
    param_1[param_3 * 0x2a] = fVar17 - fVar20;
    param_1[param_3 * 10] = fVar17 + fVar20;
    fVar6 = fVar19 + fVar12;
    fVar19 = fVar19 - fVar12;
    param_1[param_3 * 0x3a] = fVar15 - fVar19;
    param_1[param_3 * 0x1a] = fVar19 + fVar15;
    fVar12 = fVar7 + fVar22;
    fVar22 = fVar22 - fVar7;
    param_1[param_3 * 10 + 1] = fVar6 + fVar12;
    param_1[param_3 * 0x2a + 1] = fVar12 - fVar6;
    param_1[param_3 * 0x1a + 1] = fVar21 + fVar22;
    param_1[param_3 * 0x3a + 1] = fVar22 - fVar21;
    fVar7 = fVar18 + fVar2;
    fVar2 = fVar2 - fVar18;
    fVar6 = fVar10 + fVar9;
    fVar10 = fVar10 - fVar9;
    param_1[param_3 * 0x22] = fVar6 - fVar7;
    param_1[param_3 * 2] = fVar6 + fVar7;
    fVar6 = fVar4 + fVar25;
    fVar4 = fVar4 - fVar25;
    param_1[param_3 * 0x32] = fVar10 - fVar4;
    param_1[param_3 * 0x12] = fVar4 + fVar10;
    fVar4 = fVar1 + fVar13;
    fVar1 = fVar1 - fVar13;
    param_1[param_3 * 2 + 1] = fVar6 + fVar4;
    fVar7 = (fVar14 - fVar23) * _DAT_005bbb8c;
    param_1[param_3 * 0x22 + 1] = fVar4 - fVar6;
    param_1[param_3 * 0x12 + 1] = fVar2 + fVar1;
    param_1[param_3 * 0x32 + 1] = fVar1 - fVar2;
    fVar12 = fVar8 + fVar7;
    fVar8 = fVar8 - fVar7;
    fVar1 = _DAT_005bbb88 * fVar30 + _DAT_005bbb84 * fVar35;
    fVar9 = fVar30 * _DAT_005bbb84 + fVar35 * _DAT_005bbba4;
    fVar10 = _DAT_005bbba4 * fVar46 + _DAT_005bbb84 * fVar51;
    fVar7 = fVar1 + fVar10;
    fVar10 = fVar10 - fVar1;
    fVar1 = (fVar24 - fVar11) * _DAT_005bbb8c;
    fVar15 = fVar5 - fVar1;
    fVar5 = fVar5 + fVar1;
    fVar1 = fVar46 * _DAT_005bbb84 + _DAT_005bbb88 * fVar51;
    fVar4 = fVar9 + fVar1;
    fVar9 = fVar9 - fVar1;
    fVar1 = fVar38 - fVar70;
    fVar2 = fVar43 - fVar71;
    fVar43 = fVar43 + fVar71;
    fVar70 = fVar70 + fVar38;
    fVar18 = _DAT_005bbb74 * fVar2 + _DAT_005bbb78 * fVar1;
    fVar13 = fVar2 * _DAT_005bbb94 + fVar1 * _DAT_005bbb74;
    fVar11 = _DAT_005bbb7c * fVar43 + _DAT_005bbb80 * fVar70;
    fVar1 = fVar3 - fVar62;
    fVar2 = fVar43 * _DAT_005bbb90 + _DAT_005bbb7c * fVar70;
    fVar6 = fVar16 - fVar61;
    fVar3 = fVar3 + fVar62;
    fVar17 = _DAT_005bbb94 * fVar6 + fVar1 * _DAT_005bbb74;
    fVar16 = fVar16 + fVar61;
    fVar14 = fVar6 * _DAT_005bbb74 + _DAT_005bbb78 * fVar1;
    fVar19 = fVar16 * _DAT_005bbb7c + _DAT_005bbb80 * fVar3;
    fVar6 = _DAT_005bbb90 * fVar16 + fVar3 * _DAT_005bbb7c;
    fVar3 = fVar8 - fVar9;
    fVar9 = fVar9 + fVar8;
    fVar1 = fVar18 + fVar17;
    fVar17 = fVar17 - fVar18;
    param_1[param_3 * 0x2e] = fVar9 - fVar1;
    param_1[param_3 * 0xe] = fVar1 + fVar9;
    fVar1 = fVar13 - fVar14;
    fVar14 = fVar14 + fVar13;
    param_1[param_3 * 0x3e] = fVar3 - fVar1;
    param_1[param_3 * 0x1e] = fVar1 + fVar3;
    fVar1 = fVar10 + fVar15;
    fVar15 = fVar15 - fVar10;
    param_1[param_3 * 0xe + 1] = fVar14 + fVar1;
    param_1[param_3 * 0x2e + 1] = fVar1 - fVar14;
    param_1[param_3 * 0x1e + 1] = fVar17 + fVar15;
    param_1[param_3 * 0x3e + 1] = fVar15 - fVar17;
    fVar1 = fVar12 - fVar7;
    fVar7 = fVar7 + fVar12;
    fVar3 = fVar11 + fVar6;
    fVar6 = fVar6 - fVar11;
    param_1[param_3 * 0x26] = fVar7 - fVar3;
    param_1[param_3 * 6] = fVar3 + fVar7;
    fVar3 = fVar2 + fVar19;
    fVar2 = fVar2 - fVar19;
    param_1[param_3 * 0x36] = fVar1 - fVar2;
    param_1[param_3 * 0x16] = fVar2 + fVar1;
    fVar1 = fVar5 - fVar4;
    fVar4 = fVar4 + fVar5;
    param_1[param_3 * 6 + 1] = fVar3 + fVar4;
    param_1[param_3 * 0x26 + 1] = fVar4 - fVar3;
    param_1[param_3 * 0x16 + 1] = fVar6 + fVar1;
    param_1[param_3 * 0x36 + 1] = fVar1 - fVar6;
    param_2 = param_2 + 0x3e;
    param_1 = param_1 + param_5 * 2;
  }
  return;
}




/* Function: FUN_005710e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005710e8(float *param_1,float *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  
  for (; 0 < param_4; param_4 = param_4 + -1) {
    fVar2 = param_2[0x1f] * param_1[param_3 * 0x20 + 1] + param_2[0x1e] * param_1[param_3 * 0x20];
    fVar1 = param_1[param_3 * 0x20 + 1] * param_2[0x1e] - param_1[param_3 * 0x20] * param_2[0x1f];
    fVar10 = param_1[param_3 * 0x10 + 1] * param_2[0xe] - param_2[0xf] * param_1[param_3 * 0x10];
    fVar6 = param_2[0xf] * param_1[param_3 * 0x10 + 1] + param_1[param_3 * 0x10] * param_2[0xe];
    fVar8 = param_1[param_3 * 0x30 + 1] * param_2[0x2e] - param_2[0x2f] * param_1[param_3 * 0x30];
    fVar3 = param_2[0x2f] * param_1[param_3 * 0x30 + 1] + param_1[param_3 * 0x30] * param_2[0x2e];
    fVar5 = fVar6 + fVar3;
    fVar6 = fVar6 - fVar3;
    fVar3 = *param_1 - fVar2;
    fVar2 = fVar2 + *param_1;
    fVar4 = fVar2 - fVar5;
    fVar2 = fVar2 + fVar5;
    fVar7 = param_1[1] + fVar1;
    fVar1 = param_1[1] - fVar1;
    fVar5 = fVar6 + fVar1;
    fVar1 = fVar1 - fVar6;
    fVar9 = fVar10 - fVar8;
    fVar8 = fVar8 + fVar10;
    fVar6 = fVar8 + fVar7;
    fVar7 = fVar7 - fVar8;
    fVar8 = fVar3 + fVar9;
    fVar3 = fVar3 - fVar9;
    fVar10 = param_2[0x3d] * param_1[param_3 * 0x3e + 1] + param_2[0x3c] * param_1[param_3 * 0x3e];
    fVar9 = param_1[param_3 * 0x3e + 1] * param_2[0x3c] - param_1[param_3 * 0x3e] * param_2[0x3d];
    fVar18 = param_2[0x2c] * param_1[param_3 * 0x2e + 1] - param_1[param_3 * 0x2e] * param_2[0x2d];
    fVar13 = param_1[param_3 * 0x2e + 1] * param_2[0x2d] + param_2[0x2c] * param_1[param_3 * 0x2e];
    fVar12 = param_2[0x1d] * param_1[param_3 * 0x1e + 1] + param_2[0x1c] * param_1[param_3 * 0x1e];
    fVar14 = param_1[param_3 * 0x1e + 1] * param_2[0x1c] - param_1[param_3 * 0x1e] * param_2[0x1d];
    fVar11 = param_2[0xc] * param_1[param_3 * 0xe + 1] - param_1[param_3 * 0xe] * param_2[0xd];
    fVar15 = param_2[0xc] * param_1[param_3 * 0xe] + param_1[param_3 * 0xe + 1] * param_2[0xd];
    fVar17 = fVar10 + fVar12;
    fVar10 = fVar10 - fVar12;
    fVar12 = fVar13 + fVar15;
    fVar15 = fVar15 - fVar13;
    fVar16 = fVar17 + fVar12;
    fVar17 = fVar17 - fVar12;
    fVar13 = fVar9 + fVar14;
    fVar9 = fVar9 - fVar14;
    fVar14 = fVar9 - fVar15;
    fVar15 = fVar15 + fVar9;
    fVar9 = fVar18 + fVar11;
    fVar11 = fVar11 - fVar18;
    fVar12 = fVar13 + fVar9;
    fVar13 = fVar13 - fVar9;
    fVar9 = fVar10 - fVar11;
    fVar11 = fVar11 + fVar10;
    fVar19 = param_1[param_3 * 8 + 1] * param_2[6] - param_2[7] * param_1[param_3 * 8];
    fVar20 = param_2[7] * param_1[param_3 * 8 + 1] + param_1[param_3 * 8] * param_2[6];
    fVar10 = param_2[0x16] * param_1[param_3 * 0x18 + 1] - param_1[param_3 * 0x18] * param_2[0x17];
    fVar18 = param_1[param_3 * 0x18 + 1] * param_2[0x17] + param_2[0x16] * param_1[param_3 * 0x18];
    fVar23 = param_2[0x26] * param_1[param_3 * 0x28] + param_2[0x27] * param_1[param_3 * 0x28 + 1];
    fVar21 = param_1[param_3 * 0x28 + 1] * param_2[0x26] - param_1[param_3 * 0x28] * param_2[0x27];
    fVar25 = param_2[0x37] * param_1[param_3 * 0x38 + 1] + param_2[0x36] * param_1[param_3 * 0x38];
    fVar22 = param_1[param_3 * 0x38 + 1] * param_2[0x36] - param_1[param_3 * 0x38] * param_2[0x37];
    fVar27 = fVar20 + fVar23;
    fVar20 = fVar20 - fVar23;
    fVar23 = fVar18 + fVar25;
    fVar25 = fVar25 - fVar18;
    fVar26 = fVar27 + fVar23;
    fVar27 = fVar27 - fVar23;
    fVar23 = fVar22 - fVar10;
    fVar22 = fVar22 + fVar10;
    fVar24 = fVar25 + fVar23;
    fVar23 = fVar23 - fVar25;
    fVar10 = fVar19 - fVar21;
    fVar21 = fVar21 + fVar19;
    fVar19 = fVar22 - fVar21;
    fVar21 = fVar21 + fVar22;
    fVar18 = fVar20 - fVar10;
    fVar10 = fVar10 + fVar20;
    fVar28 = param_2[5] * param_1[param_3 * 6 + 1] + param_2[4] * param_1[param_3 * 6];
    fVar25 = param_2[4] * param_1[param_3 * 6 + 1] - param_1[param_3 * 6] * param_2[5];
    fVar30 = param_2[0x24] * param_1[param_3 * 0x26] + param_2[0x25] * param_1[param_3 * 0x26 + 1];
    fVar20 = param_1[param_3 * 0x26 + 1] * param_2[0x24] - param_2[0x25] * param_1[param_3 * 0x26];
    fVar29 = fVar28 - fVar30;
    fVar22 = fVar25 - fVar20;
    fVar32 = param_2[0x35] * param_1[param_3 * 0x36 + 1] + param_2[0x34] * param_1[param_3 * 0x36];
    fVar31 = param_2[0x34] * param_1[param_3 * 0x36 + 1] - param_1[param_3 * 0x36] * param_2[0x35];
    fVar60 = param_2[0x15] * param_1[param_3 * 0x16 + 1] + param_2[0x14] * param_1[param_3 * 0x16];
    fVar58 = param_1[param_3 * 0x16 + 1] * param_2[0x14] - param_1[param_3 * 0x16] * param_2[0x15];
    fVar33 = fVar32 - fVar60;
    fVar60 = fVar60 + fVar32;
    fVar32 = fVar31 - fVar58;
    fVar58 = fVar58 + fVar31;
    fVar28 = fVar28 + fVar30;
    fVar65 = fVar28 - fVar60;
    fVar60 = fVar60 + fVar28;
    fVar25 = fVar25 + fVar20;
    fVar59 = fVar25 + fVar58;
    fVar58 = fVar58 - fVar25;
    fVar25 = fVar29 + fVar22;
    fVar29 = fVar29 - fVar22;
    fVar20 = fVar33 + fVar32;
    fVar32 = fVar32 - fVar33;
    fVar62 = (fVar29 + fVar20) * _DAT_005bbbc0;
    fVar64 = (fVar29 - fVar20) * _DAT_005bbbc0;
    fVar61 = (fVar25 + fVar32) * _DAT_005bbbc0;
    fVar63 = _DAT_005bbbc0 * (fVar32 - fVar25);
    fVar31 = param_2[3] * param_1[param_3 * 4 + 1] + param_2[2] * param_1[param_3 * 4];
    fVar35 = param_2[2] * param_1[param_3 * 4 + 1] - param_1[param_3 * 4] * param_2[3];
    fVar22 = param_2[0x32] * param_1[param_3 * 0x34 + 1] - param_1[param_3 * 0x34] * param_2[0x33];
    fVar33 = param_1[param_3 * 0x34 + 1] * param_2[0x33] + param_2[0x32] * param_1[param_3 * 0x34];
    fVar25 = param_2[0x22] * param_1[param_3 * 0x24 + 1] - param_1[param_3 * 0x24] * param_2[0x23];
    fVar28 = param_2[0x23] * param_1[param_3 * 0x24 + 1] + param_2[0x22] * param_1[param_3 * 0x24];
    fVar29 = param_2[0x13] * param_1[param_3 * 0x14 + 1] + param_2[0x12] * param_1[param_3 * 0x14];
    fVar20 = param_2[0x12] * param_1[param_3 * 0x14 + 1] - param_1[param_3 * 0x14] * param_2[0x13];
    fVar30 = fVar33 + fVar29;
    fVar32 = fVar31 - fVar28;
    fVar28 = fVar28 + fVar31;
    fVar31 = fVar28 - fVar30;
    fVar30 = fVar30 + fVar28;
    fVar29 = fVar29 - fVar33;
    fVar33 = fVar20 - fVar22;
    fVar22 = fVar22 + fVar20;
    fVar34 = fVar32 - fVar33;
    fVar33 = fVar33 + fVar32;
    fVar28 = fVar35 - fVar25;
    fVar25 = fVar25 + fVar35;
    fVar20 = fVar25 - fVar22;
    fVar25 = fVar25 + fVar22;
    fVar22 = fVar28 - fVar29;
    fVar29 = fVar29 + fVar28;
    fVar28 = param_2[1] * param_1[param_3 * 2 + 1] + *param_2 * param_1[param_3 * 2];
    fVar36 = param_1[param_3 * 2 + 1] * *param_2 - param_2[1] * param_1[param_3 * 2];
    fVar42 = param_2[0x30] * param_1[param_3 * 0x32 + 1] - param_1[param_3 * 0x32] * param_2[0x31];
    fVar37 = param_1[param_3 * 0x32 + 1] * param_2[0x31] + param_2[0x30] * param_1[param_3 * 0x32];
    fVar41 = param_2[0x21] * param_1[param_3 * 0x22 + 1] + param_2[0x20] * param_1[param_3 * 0x22];
    fVar38 = param_1[param_3 * 0x22 + 1] * param_2[0x20] - param_1[param_3 * 0x22] * param_2[0x21];
    fVar35 = param_1[param_3 * 0x12 + 1] * param_2[0x10] - param_2[0x11] * param_1[param_3 * 0x12];
    fVar39 = param_2[0x11] * param_1[param_3 * 0x12 + 1] + param_1[param_3 * 0x12] * param_2[0x10];
    fVar32 = fVar28 - fVar41;
    fVar41 = fVar41 + fVar28;
    fVar28 = fVar37 + fVar39;
    fVar39 = fVar39 - fVar37;
    fVar40 = fVar41 + fVar28;
    fVar41 = fVar41 - fVar28;
    fVar37 = fVar36 + fVar38;
    fVar36 = fVar36 - fVar38;
    fVar38 = fVar36 - fVar39;
    fVar39 = fVar39 + fVar36;
    fVar28 = fVar42 + fVar35;
    fVar35 = fVar35 - fVar42;
    fVar36 = fVar37 + fVar28;
    fVar37 = fVar37 - fVar28;
    fVar28 = fVar32 + fVar35;
    fVar32 = fVar32 - fVar35;
    fVar43 = param_2[0x3a] * param_1[param_3 * 0x3c + 1] - param_1[param_3 * 0x3c] * param_2[0x3b];
    fVar44 = param_1[param_3 * 0x3c + 1] * param_2[0x3b] + param_2[0x3a] * param_1[param_3 * 0x3c];
    fVar35 = param_2[0x2a] * param_1[param_3 * 0x2c + 1] - param_1[param_3 * 0x2c] * param_2[0x2b];
    fVar42 = param_1[param_3 * 0x2c + 1] * param_2[0x2b] + param_2[0x2a] * param_1[param_3 * 0x2c];
    fVar49 = param_2[0x1a] * param_1[param_3 * 0x1c] + param_2[0x1b] * param_1[param_3 * 0x1c + 1];
    fVar50 = param_1[param_3 * 0x1c + 1] * param_2[0x1a] - param_1[param_3 * 0x1c] * param_2[0x1b];
    fVar47 = param_2[10] * param_1[param_3 * 0xc] + param_2[0xb] * param_1[param_3 * 0xc + 1];
    fVar46 = param_1[param_3 * 0xc + 1] * param_2[10] - param_1[param_3 * 0xc] * param_2[0xb];
    fVar45 = fVar44 - fVar49;
    fVar49 = fVar49 + fVar44;
    fVar44 = fVar42 + fVar47;
    fVar47 = fVar47 - fVar42;
    fVar48 = fVar49 + fVar44;
    fVar49 = fVar49 - fVar44;
    fVar42 = fVar46 - fVar35;
    fVar35 = fVar35 + fVar46;
    fVar44 = fVar45 - fVar42;
    fVar42 = fVar42 + fVar45;
    fVar46 = fVar43 + fVar50;
    fVar43 = fVar43 - fVar50;
    fVar45 = fVar46 + fVar35;
    fVar46 = fVar46 - fVar35;
    fVar35 = fVar43 + fVar47;
    fVar43 = fVar43 - fVar47;
    fVar54 = param_2[9] * param_1[param_3 * 10 + 1] + param_2[8] * param_1[param_3 * 10];
    fVar47 = param_1[param_3 * 10 + 1] * param_2[8] - param_1[param_3 * 10] * param_2[9];
    fVar52 = param_2[0x29] * param_1[param_3 * 0x2a + 1] + param_2[0x28] * param_1[param_3 * 0x2a];
    fVar51 = param_1[param_3 * 0x2a + 1] * param_2[0x28] - param_1[param_3 * 0x2a] * param_2[0x29];
    fVar53 = fVar54 - fVar52;
    fVar50 = fVar47 - fVar51;
    fVar57 = param_2[0x39] * param_1[param_3 * 0x3a + 1] + param_2[0x38] * param_1[param_3 * 0x3a];
    fVar55 = param_1[param_3 * 0x3a + 1] * param_2[0x38] - param_1[param_3 * 0x3a] * param_2[0x39];
    fVar67 = param_1[param_3 * 0x1a + 1] * param_2[0x18] - param_2[0x19] * param_1[param_3 * 0x1a];
    fVar71 = param_1[param_3 * 0x1a] * param_2[0x18] + param_2[0x19] * param_1[param_3 * 0x1a + 1];
    fVar66 = fVar55 + fVar67;
    fVar56 = fVar57 - fVar71;
    fVar55 = fVar55 - fVar67;
    fVar71 = fVar71 + fVar57;
    fVar54 = fVar54 + fVar52;
    fVar72 = fVar54 - fVar71;
    fVar71 = fVar71 + fVar54;
    fVar47 = fVar47 + fVar51;
    fVar73 = fVar47 + fVar66;
    fVar66 = fVar66 - fVar47;
    fVar51 = fVar53 + fVar50;
    fVar53 = fVar53 - fVar50;
    fVar50 = fVar56 + fVar55;
    fVar55 = fVar55 - fVar56;
    fVar68 = (fVar53 + fVar50) * _DAT_005bbbc0;
    fVar47 = fVar36 + fVar73;
    fVar67 = (fVar53 - fVar50) * _DAT_005bbbc0;
    fVar57 = fVar6 + fVar21;
    fVar69 = (fVar51 + fVar55) * _DAT_005bbbc0;
    fVar52 = fVar2 + fVar26;
    fVar70 = _DAT_005bbbc0 * (fVar55 - fVar51);
    fVar50 = fVar30 + fVar48;
    fVar53 = fVar52 + fVar50;
    fVar52 = fVar52 - fVar50;
    fVar50 = fVar25 + fVar45;
    fVar56 = fVar50 + fVar57;
    fVar57 = fVar57 - fVar50;
    fVar55 = fVar40 + fVar71;
    fVar50 = fVar16 + fVar60;
    fVar54 = fVar55 + fVar50;
    fVar55 = fVar55 - fVar50;
    fVar51 = fVar12 + fVar59;
    fVar50 = fVar51 + fVar47;
    fVar51 = fVar51 - fVar47;
    param_1[param_3 * 0x20] = fVar53 - fVar54;
    *param_1 = fVar53 + fVar54;
    param_1[param_3 * 0x30] = fVar52 - fVar51;
    param_1[param_3 * 0x10] = fVar52 + fVar51;
    fVar16 = fVar16 - fVar60;
    param_1[1] = fVar50 + fVar56;
    param_1[param_3 * 0x20 + 1] = fVar56 - fVar50;
    fVar2 = fVar2 - fVar26;
    fVar40 = fVar40 - fVar71;
    param_1[param_3 * 0x10 + 1] = fVar55 + fVar57;
    fVar45 = fVar45 - fVar25;
    param_1[param_3 * 0x30 + 1] = fVar57 - fVar55;
    fVar26 = fVar2 - fVar45;
    fVar6 = fVar6 - fVar21;
    fVar45 = fVar45 + fVar2;
    fVar30 = fVar30 - fVar48;
    fVar25 = fVar30 + fVar6;
    fVar6 = fVar6 - fVar30;
    fVar12 = fVar12 - fVar59;
    fVar36 = fVar36 - fVar73;
    fVar21 = fVar40 - fVar36;
    fVar36 = fVar36 + fVar40;
    fVar2 = fVar16 + fVar12;
    fVar12 = fVar12 - fVar16;
    fVar16 = (fVar21 + fVar2) * _DAT_005bbbc0;
    param_1[param_3 * 0x28] = fVar45 - fVar16;
    param_1[param_3 * 8] = fVar16 + fVar45;
    fVar2 = (fVar21 - fVar2) * _DAT_005bbbc0;
    param_1[param_3 * 0x18 + 1] = fVar6 + fVar2;
    param_1[param_3 * 0x38 + 1] = fVar6 - fVar2;
    fVar2 = (fVar12 - fVar36) * _DAT_005bbbc0;
    param_1[param_3 * 0x38] = fVar26 - fVar2;
    param_1[param_3 * 0x18] = fVar26 + fVar2;
    fVar2 = (fVar12 + fVar36) * _DAT_005bbbc0;
    param_1[param_3 * 8 + 1] = fVar2 + fVar25;
    param_1[param_3 * 0x28 + 1] = fVar25 - fVar2;
    fVar2 = fVar4 + fVar19;
    fVar4 = fVar4 - fVar19;
    fVar6 = fVar46 - fVar49;
    fVar12 = fVar31 + fVar20;
    fVar31 = fVar31 - fVar20;
    fVar49 = fVar49 + fVar46;
    fVar20 = (fVar6 - fVar12) * _DAT_005bbbc0;
    fVar19 = (fVar12 + fVar6) * _DAT_005bbbc0;
    fVar21 = (fVar31 + fVar49) * _DAT_005bbbc0;
    fVar16 = (fVar31 - fVar49) * _DAT_005bbbc0;
    fVar12 = fVar17 + fVar58;
    fVar17 = fVar17 - fVar58;
    fVar6 = fVar13 - fVar65;
    fVar65 = fVar65 + fVar13;
    fVar26 = _DAT_005bbbd8 * fVar17 + _DAT_005bbbbc * fVar6;
    fVar36 = fVar17 * _DAT_005bbbbc + fVar6 * _DAT_005bbbb8;
    fVar6 = fVar7 - fVar27;
    fVar27 = fVar27 + fVar7;
    fVar31 = _DAT_005bbbd4 * fVar12 + _DAT_005bbbb8 * fVar65;
    fVar30 = fVar12 * _DAT_005bbbb8 + fVar65 * _DAT_005bbbbc;
    fVar17 = fVar41 + fVar66;
    fVar41 = fVar41 - fVar66;
    fVar12 = fVar37 + fVar72;
    fVar37 = fVar37 - fVar72;
    fVar25 = _DAT_005bbbb8 * fVar41 + _DAT_005bbbbc * fVar37;
    fVar13 = fVar41 * _DAT_005bbbbc + _DAT_005bbbd8 * fVar37;
    fVar7 = _DAT_005bbbb8 * fVar12 + _DAT_005bbbbc * fVar17;
    fVar12 = fVar17 * _DAT_005bbbb8 + _DAT_005bbbd4 * fVar12;
    fVar17 = fVar26 + fVar25;
    fVar26 = fVar26 - fVar25;
    fVar25 = fVar4 + fVar20;
    fVar4 = fVar4 - fVar20;
    param_1[param_3 * 0x3c] = fVar4 - fVar26;
    param_1[param_3 * 0x1c] = fVar4 + fVar26;
    fVar4 = fVar36 + fVar13;
    fVar13 = fVar13 - fVar36;
    param_1[param_3 * 0x2c] = fVar25 - fVar4;
    param_1[param_3 * 0xc] = fVar4 + fVar25;
    fVar4 = fVar6 - fVar16;
    fVar6 = fVar6 + fVar16;
    param_1[param_3 * 0x1c + 1] = fVar13 + fVar4;
    param_1[param_3 * 0x3c + 1] = fVar4 - fVar13;
    param_1[param_3 * 0xc + 1] = fVar17 + fVar6;
    param_1[param_3 * 0x2c + 1] = fVar6 - fVar17;
    fVar4 = fVar2 + fVar21;
    fVar2 = fVar2 - fVar21;
    fVar6 = fVar31 - fVar7;
    fVar7 = fVar7 + fVar31;
    param_1[param_3 * 0x34] = fVar2 - fVar6;
    param_1[param_3 * 0x14] = fVar6 + fVar2;
    fVar2 = fVar30 + fVar12;
    fVar12 = fVar12 - fVar30;
    param_1[param_3 * 0x24] = fVar4 - fVar2;
    param_1[param_3 * 4] = fVar2 + fVar4;
    fVar6 = _DAT_005bbbbc;
    fVar4 = _DAT_005bbbb8;
    fVar2 = fVar27 - fVar19;
    fVar27 = fVar27 + fVar19;
    param_1[param_3 * 0x14 + 1] = fVar12 + fVar2;
    fVar13 = (fVar23 - fVar10) * _DAT_005bbbc0;
    param_1[param_3 * 0x34 + 1] = fVar2 - fVar12;
    fVar16 = _DAT_005bbbd8;
    param_1[param_3 * 4 + 1] = fVar7 + fVar27;
    param_1[param_3 * 0x24 + 1] = fVar27 - fVar7;
    fVar12 = fVar8 - fVar13;
    fVar13 = fVar13 + fVar8;
    fVar2 = _DAT_005bbbd8 * fVar22 + _DAT_005bbbbc * fVar33;
    fVar7 = fVar4 * fVar43 + _DAT_005bbbbc * fVar42;
    fVar8 = fVar43 * fVar6 + fVar16 * fVar42;
    fVar16 = fVar2 - fVar7;
    fVar7 = fVar7 + fVar2;
    fVar25 = (fVar18 - fVar24) * _DAT_005bbbc0;
    fVar2 = fVar6 * fVar22 + _DAT_005bbbb8 * fVar33;
    fVar19 = fVar1 - fVar25;
    fVar25 = fVar25 + fVar1;
    fVar4 = fVar8 + fVar2;
    fVar8 = fVar8 - fVar2;
    fVar1 = fVar11 + fVar63;
    fVar11 = fVar11 - fVar63;
    fVar2 = fVar14 - fVar64;
    fVar64 = fVar64 + fVar14;
    fVar22 = _DAT_005bbbb4 * fVar2 + _DAT_005bbbd0 * fVar11;
    fVar17 = fVar11 * _DAT_005bbbb4 + fVar2 * _DAT_005bbbb0;
    fVar14 = _DAT_005bbbcc * fVar1 + _DAT_005bbbac * fVar64;
    fVar11 = fVar1 * _DAT_005bbbac + fVar64 * _DAT_005bbba8;
    fVar20 = fVar28 + fVar70;
    fVar28 = fVar28 - fVar70;
    fVar6 = fVar38 + fVar67;
    fVar38 = fVar38 - fVar67;
    fVar21 = _DAT_005bbbb0 * fVar28 + _DAT_005bbbb4 * fVar38;
    fVar1 = fVar28 * _DAT_005bbbb4 + _DAT_005bbbd0 * fVar38;
    fVar2 = _DAT_005bbbac * fVar6 + _DAT_005bbba8 * fVar20;
    fVar6 = _DAT_005bbbac * fVar20 + _DAT_005bbbcc * fVar6;
    fVar20 = fVar22 + fVar21;
    fVar22 = fVar22 - fVar21;
    fVar21 = fVar12 + fVar8;
    fVar12 = fVar12 - fVar8;
    param_1[param_3 * 0x3e] = fVar12 - fVar22;
    param_1[param_3 * 0x1e] = fVar12 + fVar22;
    fVar8 = fVar17 + fVar1;
    fVar1 = fVar1 - fVar17;
    param_1[param_3 * 0x2e] = fVar21 - fVar8;
    param_1[param_3 * 0xe] = fVar8 + fVar21;
    fVar8 = fVar19 - fVar16;
    fVar19 = fVar19 + fVar16;
    param_1[param_3 * 0x1e + 1] = fVar1 + fVar8;
    param_1[param_3 * 0x3e + 1] = fVar8 - fVar1;
    param_1[param_3 * 0xe + 1] = fVar20 + fVar19;
    param_1[param_3 * 0x2e + 1] = fVar19 - fVar20;
    fVar1 = fVar14 - fVar2;
    fVar2 = fVar2 + fVar14;
    fVar8 = fVar13 - fVar7;
    fVar7 = fVar7 + fVar13;
    param_1[param_3 * 0x36] = fVar8 - fVar1;
    param_1[param_3 * 0x16] = fVar8 + fVar1;
    fVar1 = fVar11 + fVar6;
    fVar6 = fVar6 - fVar11;
    param_1[param_3 * 0x26] = fVar7 - fVar1;
    param_1[param_3 * 6] = fVar1 + fVar7;
    fVar12 = _DAT_005bbbbc;
    fVar14 = _DAT_005bbbb8;
    fVar1 = fVar25 - fVar4;
    fVar4 = fVar4 + fVar25;
    param_1[param_3 * 0x16 + 1] = fVar6 + fVar1;
    fVar8 = _DAT_005bbbb8;
    fVar7 = (fVar24 + fVar18) * _DAT_005bbbc0;
    param_1[param_3 * 0x36 + 1] = fVar1 - fVar6;
    fVar1 = _DAT_005bbbd4;
    param_1[param_3 * 6 + 1] = fVar2 + fVar4;
    param_1[param_3 * 0x26 + 1] = fVar4 - fVar2;
    fVar13 = fVar3 + fVar7;
    fVar3 = fVar3 - fVar7;
    fVar8 = _DAT_005bbbd4 * fVar29 + fVar8 * fVar34;
    fVar11 = fVar35 * fVar14 + fVar1 * fVar44;
    fVar1 = fVar12 * fVar35 + _DAT_005bbbb8 * fVar44;
    fVar12 = fVar8 - fVar1;
    fVar8 = fVar8 + fVar1;
    fVar2 = (fVar23 + fVar10) * _DAT_005bbbc0;
    fVar1 = fVar14 * fVar29 + fVar34 * _DAT_005bbbbc;
    fVar10 = fVar5 - fVar2;
    fVar5 = fVar5 + fVar2;
    fVar6 = fVar11 + fVar1;
    fVar11 = fVar11 - fVar1;
    fVar1 = fVar32 - fVar68;
    fVar2 = fVar39 - fVar69;
    fVar39 = fVar39 + fVar69;
    fVar16 = _DAT_005bbbc8 * fVar2 + _DAT_005bbba8 * fVar1;
    fVar68 = fVar68 + fVar32;
    fVar14 = fVar2 * _DAT_005bbba8 + fVar1 * _DAT_005bbbac;
    fVar7 = _DAT_005bbbb0 * fVar68 + _DAT_005bbbc4 * fVar39;
    fVar17 = fVar39 * _DAT_005bbbb0 + fVar68 * _DAT_005bbbb4;
    fVar1 = fVar9 - fVar62;
    fVar2 = fVar15 - fVar61;
    fVar15 = fVar15 + fVar61;
    fVar9 = fVar9 + fVar62;
    fVar18 = _DAT_005bbbac * fVar2 + fVar1 * _DAT_005bbba8;
    fVar1 = fVar2 * _DAT_005bbba8 + _DAT_005bbbc8 * fVar1;
    fVar4 = fVar15 * _DAT_005bbbb0 + _DAT_005bbbc4 * fVar9;
    fVar9 = _DAT_005bbbb4 * fVar15 + fVar9 * _DAT_005bbbb0;
    fVar15 = fVar3 + fVar11;
    fVar2 = fVar16 + fVar18;
    fVar3 = fVar3 - fVar11;
    fVar16 = fVar16 - fVar18;
    param_1[param_3 * 0x2a] = fVar15 - fVar2;
    param_1[param_3 * 10] = fVar2 + fVar15;
    fVar2 = fVar1 - fVar14;
    fVar1 = fVar1 + fVar14;
    param_1[param_3 * 0x3a] = fVar3 - fVar2;
    param_1[param_3 * 0x1a] = fVar2 + fVar3;
    fVar2 = fVar12 + fVar10;
    fVar10 = fVar10 - fVar12;
    param_1[param_3 * 10 + 1] = fVar1 + fVar2;
    param_1[param_3 * 0x2a + 1] = fVar2 - fVar1;
    param_1[param_3 * 0x1a + 1] = fVar16 + fVar10;
    param_1[param_3 * 0x3a + 1] = fVar10 - fVar16;
    fVar1 = fVar13 - fVar8;
    fVar8 = fVar8 + fVar13;
    fVar2 = fVar7 + fVar9;
    fVar7 = fVar7 - fVar9;
    param_1[param_3 * 0x22] = fVar8 - fVar2;
    param_1[param_3 * 2] = fVar2 + fVar8;
    fVar2 = fVar4 - fVar17;
    fVar4 = fVar4 + fVar17;
    param_1[param_3 * 0x32] = fVar1 - fVar2;
    param_1[param_3 * 0x12] = fVar2 + fVar1;
    fVar1 = fVar5 - fVar6;
    fVar6 = fVar6 + fVar5;
    param_1[param_3 * 2 + 1] = fVar4 + fVar6;
    param_1[param_3 * 0x22 + 1] = fVar6 - fVar4;
    param_1[param_3 * 0x12 + 1] = fVar7 + fVar1;
    param_1[param_3 * 0x32 + 1] = fVar1 - fVar7;
    param_2 = param_2 + 0x3e;
    param_1 = param_1 + param_5 * 2;
  }
  return;
}




/* Function: FUN_00572a20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00572a20(float *param_1,float *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  
  for (; 0 < param_4; param_4 = param_4 + -1) {
    fVar2 = param_2[0x3e] * param_1[param_3 * 0x40] - param_2[0x3f] * param_1[param_3 * 0x40 + 1];
    fVar1 = param_1[param_3 * 0x40] * param_2[0x3f] + param_1[param_3 * 0x40 + 1] * param_2[0x3e];
    fVar10 = param_2[0x1f] * param_1[param_3 * 0x20] + param_1[param_3 * 0x20 + 1] * param_2[0x1e];
    fVar6 = param_1[param_3 * 0x20] * param_2[0x1e] - param_2[0x1f] * param_1[param_3 * 0x20 + 1];
    fVar8 = param_1[param_3 * 0x60] * param_2[0x5f] + param_2[0x5e] * param_1[param_3 * 0x60 + 1];
    fVar3 = param_2[0x5e] * param_1[param_3 * 0x60] - param_1[param_3 * 0x60 + 1] * param_2[0x5f];
    fVar5 = fVar6 + fVar3;
    fVar6 = fVar6 - fVar3;
    fVar3 = *param_1 - fVar2;
    fVar2 = fVar2 + *param_1;
    fVar4 = fVar2 - fVar5;
    fVar5 = fVar5 + fVar2;
    fVar7 = param_1[1] + fVar1;
    fVar1 = param_1[1] - fVar1;
    fVar2 = fVar1 + fVar6;
    fVar1 = fVar1 - fVar6;
    fVar9 = fVar10 - fVar8;
    fVar8 = fVar8 + fVar10;
    fVar6 = fVar8 + fVar7;
    fVar7 = fVar7 - fVar8;
    fVar8 = fVar3 + fVar9;
    fVar3 = fVar3 - fVar9;
    fVar10 = param_2[6] * param_1[param_3 * 8] - param_1[param_3 * 8 + 1] * param_2[7];
    fVar11 = param_1[param_3 * 8] * param_2[7] + param_2[6] * param_1[param_3 * 8 + 1];
    fVar9 = param_2[0x47] * param_1[param_3 * 0x48] + param_1[param_3 * 0x48 + 1] * param_2[0x46];
    fVar13 = param_1[param_3 * 0x48] * param_2[0x46] - param_2[0x47] * param_1[param_3 * 0x48 + 1];
    fVar12 = fVar10 - fVar13;
    fVar13 = fVar13 + fVar10;
    fVar10 = fVar11 + fVar9;
    fVar11 = fVar11 - fVar9;
    fVar16 = param_2[0x26] * param_1[param_3 * 0x28] - param_1[param_3 * 0x28 + 1] * param_2[0x27];
    fVar9 = param_1[param_3 * 0x28] * param_2[0x27] + param_2[0x26] * param_1[param_3 * 0x28 + 1];
    fVar15 = param_2[0x67] * param_1[param_3 * 0x68] + param_1[param_3 * 0x68 + 1] * param_2[0x66];
    fVar97 = param_1[param_3 * 0x68] * param_2[0x66] - param_2[0x67] * param_1[param_3 * 0x68 + 1];
    fVar14 = fVar9 - fVar15;
    fVar17 = fVar16 - fVar97;
    fVar97 = fVar97 + fVar16;
    fVar15 = fVar15 + fVar9;
    fVar9 = fVar13 - fVar97;
    fVar97 = fVar97 + fVar13;
    fVar90 = fVar10 + fVar15;
    fVar10 = fVar10 - fVar15;
    fVar96 = fVar10 + fVar9;
    fVar10 = fVar10 - fVar9;
    fVar9 = fVar11 - fVar17;
    fVar17 = fVar17 + fVar11;
    fVar11 = fVar12 - fVar14;
    fVar93 = _DAT_005bbc4c * fVar11 + _DAT_005bbc14 * fVar17;
    fVar92 = fVar17 * _DAT_005bbc10 + fVar11 * _DAT_005bbc14;
    fVar12 = fVar12 + fVar14;
    fVar95 = _DAT_005bbc48 * fVar12 + _DAT_005bbc10 * fVar9;
    fVar94 = _DAT_005bbc10 * fVar12 + _DAT_005bbc14 * fVar9;
    fVar15 = param_1[param_3 * 0x10] * param_2[0xe] - param_2[0xf] * param_1[param_3 * 0x10 + 1];
    fVar9 = param_2[0xf] * param_1[param_3 * 0x10] + param_1[param_3 * 0x10 + 1] * param_2[0xe];
    fVar13 = param_2[0x4e] * param_1[param_3 * 0x50] - param_2[0x4f] * param_1[param_3 * 0x50 + 1];
    fVar12 = param_2[0x4f] * param_1[param_3 * 0x50] + param_1[param_3 * 0x50 + 1] * param_2[0x4e];
    fVar11 = fVar9 - fVar12;
    fVar14 = fVar15 - fVar13;
    fVar19 = param_2[0x6e] * param_1[param_3 * 0x70] - param_1[param_3 * 0x70 + 1] * param_2[0x6f];
    fVar16 = param_1[param_3 * 0x70] * param_2[0x6f] + param_2[0x6e] * param_1[param_3 * 0x70 + 1];
    fVar20 = param_2[0x2f] * param_1[param_3 * 0x30] + param_1[param_3 * 0x30 + 1] * param_2[0x2e];
    fVar102 = param_1[param_3 * 0x30] * param_2[0x2e] - param_2[0x2f] * param_1[param_3 * 0x30 + 1];
    fVar17 = fVar16 + fVar20;
    fVar18 = fVar19 - fVar102;
    fVar16 = fVar16 - fVar20;
    fVar102 = fVar102 + fVar19;
    fVar15 = fVar15 + fVar13;
    fVar103 = fVar15 + fVar102;
    fVar102 = fVar102 - fVar15;
    fVar9 = fVar9 + fVar12;
    fVar104 = fVar9 + fVar17;
    fVar9 = fVar9 - fVar17;
    fVar12 = fVar18 - fVar16;
    fVar16 = fVar16 + fVar18;
    fVar13 = fVar11 + fVar14;
    fVar11 = fVar11 - fVar14;
    fVar98 = (fVar13 + fVar12) * _DAT_005bbc0c;
    fVar99 = (fVar11 - fVar16) * _DAT_005bbc0c;
    fVar101 = (fVar16 + fVar11) * _DAT_005bbc0c;
    fVar100 = _DAT_005bbc0c * (fVar12 - fVar13);
    fVar14 = param_2[0x7c] * param_1[param_3 * 0x7e] - param_1[param_3 * 0x7e + 1] * param_2[0x7d];
    fVar13 = param_1[param_3 * 0x7e] * param_2[0x7d] + param_2[0x7c] * param_1[param_3 * 0x7e + 1];
    fVar16 = param_2[0x3c] * param_1[param_3 * 0x3e] - param_2[0x3d] * param_1[param_3 * 0x3e + 1];
    fVar11 = param_2[0x3d] * param_1[param_3 * 0x3e] + param_1[param_3 * 0x3e + 1] * param_2[0x3c];
    fVar15 = fVar16 + fVar14;
    fVar12 = fVar11 + fVar13;
    fVar18 = param_1[param_3 * 0x6e] * param_2[0x6c] - param_2[0x6d] * param_1[param_3 * 0x6e + 1];
    fVar17 = param_2[0x6d] * param_1[param_3 * 0x6e] + param_1[param_3 * 0x6e + 1] * param_2[0x6c];
    fVar19 = param_2[0x2d] * param_1[param_3 * 0x2e] + param_1[param_3 * 0x2e + 1] * param_2[0x2c];
    fVar20 = param_1[param_3 * 0x2e] * param_2[0x2c] - param_2[0x2d] * param_1[param_3 * 0x2e + 1];
    fVar21 = fVar18 - fVar20;
    fVar20 = fVar20 + fVar18;
    fVar18 = fVar17 + fVar19;
    fVar17 = fVar17 - fVar19;
    fVar26 = param_2[0x1c] * param_1[param_3 * 0x1e] - param_1[param_3 * 0x1e + 1] * param_2[0x1d];
    fVar19 = param_1[param_3 * 0x1e] * param_2[0x1d] + param_2[0x1c] * param_1[param_3 * 0x1e + 1];
    fVar24 = param_2[0x5c] * param_1[param_3 * 0x5e] - param_2[0x5d] * param_1[param_3 * 0x5e + 1];
    fVar23 = param_2[0x5d] * param_1[param_3 * 0x5e] + param_1[param_3 * 0x5e + 1] * param_2[0x5c];
    fVar25 = fVar24 + fVar26;
    fVar22 = fVar23 + fVar19;
    fVar28 = param_2[0xc] * param_1[param_3 * 0xe] - param_2[0xd] * param_1[param_3 * 0xe + 1];
    fVar27 = param_1[param_3 * 0xe] * param_2[0xd] + param_1[param_3 * 0xe + 1] * param_2[0xc];
    fVar29 = param_2[0x4c] * param_1[param_3 * 0x4e] - param_2[0x4d] * param_1[param_3 * 0x4e + 1];
    fVar30 = param_1[param_3 * 0x4e] * param_2[0x4d] + param_1[param_3 * 0x4e + 1] * param_2[0x4c];
    fVar33 = fVar28 - fVar29;
    fVar29 = fVar29 + fVar28;
    fVar28 = fVar27 + fVar30;
    fVar27 = fVar27 - fVar30;
    fVar30 = fVar15 - fVar25;
    fVar25 = fVar25 + fVar15;
    fVar15 = fVar20 + fVar29;
    fVar20 = fVar20 - fVar29;
    fVar29 = fVar25 + fVar15;
    fVar25 = fVar25 - fVar15;
    fVar31 = fVar28 - fVar18;
    fVar28 = fVar28 + fVar18;
    fVar32 = fVar30 - fVar31;
    fVar31 = fVar31 + fVar30;
    fVar15 = fVar12 - fVar22;
    fVar22 = fVar22 + fVar12;
    fVar18 = fVar15 - fVar20;
    fVar12 = fVar22 - fVar28;
    fVar28 = fVar28 + fVar22;
    fVar14 = fVar14 - fVar16;
    fVar20 = fVar20 + fVar15;
    fVar19 = fVar19 - fVar23;
    fVar15 = fVar14 - fVar19;
    fVar19 = fVar19 + fVar14;
    fVar26 = fVar26 - fVar24;
    fVar13 = fVar13 - fVar11;
    fVar11 = fVar13 - fVar26;
    fVar13 = fVar13 + fVar26;
    fVar14 = fVar21 + fVar17;
    fVar21 = fVar21 - fVar17;
    fVar16 = fVar33 + fVar27;
    fVar27 = fVar27 - fVar33;
    fVar106 = (fVar21 - fVar16) * _DAT_005bbc0c;
    fVar105 = (fVar16 + fVar21) * _DAT_005bbc0c;
    fVar107 = (fVar27 - fVar14) * _DAT_005bbc0c;
    fVar108 = _DAT_005bbc0c * (fVar14 + fVar27);
    fVar16 = param_2[4] * param_1[param_3 * 6] - param_1[param_3 * 6 + 1] * param_2[5];
    fVar17 = param_2[4] * param_1[param_3 * 6 + 1] + param_1[param_3 * 6] * param_2[5];
    fVar14 = param_2[0x45] * param_1[param_3 * 0x46] + param_1[param_3 * 0x46 + 1] * param_2[0x44];
    fVar22 = param_1[param_3 * 0x46] * param_2[0x44] - param_2[0x45] * param_1[param_3 * 0x46 + 1];
    fVar21 = fVar16 - fVar22;
    fVar22 = fVar22 + fVar16;
    fVar16 = fVar17 + fVar14;
    fVar17 = fVar17 - fVar14;
    fVar23 = param_2[0x14] * param_1[param_3 * 0x16] - param_1[param_3 * 0x16 + 1] * param_2[0x15];
    fVar14 = param_2[0x14] * param_1[param_3 * 0x16 + 1] + param_1[param_3 * 0x16] * param_2[0x15];
    fVar24 = param_2[0x55] * param_1[param_3 * 0x56] + param_1[param_3 * 0x56 + 1] * param_2[0x54];
    fVar26 = param_1[param_3 * 0x56] * param_2[0x54] - param_2[0x55] * param_1[param_3 * 0x56 + 1];
    fVar27 = fVar23 - fVar26;
    fVar26 = fVar26 + fVar23;
    fVar23 = fVar14 + fVar24;
    fVar14 = fVar14 - fVar24;
    fVar30 = param_2[0x24] * param_1[param_3 * 0x26] - param_1[param_3 * 0x26 + 1] * param_2[0x25];
    fVar24 = param_2[0x24] * param_1[param_3 * 0x26 + 1] + param_1[param_3 * 0x26] * param_2[0x25];
    fVar33 = param_2[0x65] * param_1[param_3 * 0x66] + param_1[param_3 * 0x66 + 1] * param_2[100];
    fVar34 = param_1[param_3 * 0x66] * param_2[100] - param_2[0x65] * param_1[param_3 * 0x66 + 1];
    fVar35 = fVar30 - fVar34;
    fVar34 = fVar34 + fVar30;
    fVar30 = fVar24 + fVar33;
    fVar24 = fVar24 - fVar33;
    fVar41 = param_2[0x75] * param_1[param_3 * 0x76] + param_1[param_3 * 0x76 + 1] * param_2[0x74];
    fVar33 = param_1[param_3 * 0x76] * param_2[0x74] - param_2[0x75] * param_1[param_3 * 0x76 + 1];
    fVar38 = param_2[0x34] * param_1[param_3 * 0x36] - param_1[param_3 * 0x36 + 1] * param_2[0x35];
    fVar37 = param_1[param_3 * 0x36] * param_2[0x35] + param_2[0x34] * param_1[param_3 * 0x36 + 1];
    fVar36 = fVar33 + fVar38;
    fVar33 = fVar33 - fVar38;
    fVar38 = fVar41 + fVar37;
    fVar41 = fVar41 - fVar37;
    fVar37 = fVar26 + fVar36;
    fVar39 = fVar22 - fVar34;
    fVar34 = fVar34 + fVar22;
    fVar36 = fVar36 - fVar26;
    fVar40 = fVar34 + fVar37;
    fVar37 = fVar37 - fVar34;
    fVar22 = fVar16 + fVar30;
    fVar16 = fVar16 - fVar30;
    fVar30 = fVar16 + fVar39;
    fVar16 = fVar16 - fVar39;
    fVar26 = fVar23 + fVar38;
    fVar38 = fVar38 - fVar23;
    fVar23 = fVar22 - fVar26;
    fVar26 = fVar26 + fVar22;
    fVar22 = fVar36 + fVar38;
    fVar34 = fVar21 + fVar24;
    fVar21 = fVar21 - fVar24;
    fVar36 = fVar36 - fVar38;
    fVar24 = fVar17 + fVar35;
    fVar17 = fVar17 - fVar35;
    fVar111 = _DAT_005bbc4c * fVar21 + _DAT_005bbc14 * fVar24;
    fVar110 = fVar21 * _DAT_005bbc14 + fVar24 * _DAT_005bbc10;
    fVar116 = _DAT_005bbc48 * fVar34 + _DAT_005bbc10 * fVar17;
    fVar21 = fVar33 - fVar14;
    fVar109 = fVar34 * _DAT_005bbc10 + fVar17 * _DAT_005bbc14;
    fVar17 = fVar27 + fVar41;
    fVar41 = fVar41 - fVar27;
    fVar112 = _DAT_005bbc10 * fVar21 + _DAT_005bbc14 * fVar17;
    fVar113 = fVar21 * _DAT_005bbc14 + fVar17 * _DAT_005bbc4c;
    fVar14 = fVar14 + fVar33;
    fVar115 = _DAT_005bbc14 * fVar14 + _DAT_005bbc10 * fVar41;
    fVar114 = fVar14 * _DAT_005bbc10 + fVar41 * _DAT_005bbc48;
    fVar17 = param_2[0x76] * param_1[param_3 * 0x78] - param_2[0x77] * param_1[param_3 * 0x78 + 1];
    fVar14 = param_1[param_3 * 0x78] * param_2[0x77] + param_1[param_3 * 0x78 + 1] * param_2[0x76];
    fVar21 = param_2[0x37] * param_1[param_3 * 0x38] + param_1[param_3 * 0x38 + 1] * param_2[0x36];
    fVar24 = param_1[param_3 * 0x38] * param_2[0x36] - param_2[0x37] * param_1[param_3 * 0x38 + 1];
    fVar27 = fVar17 - fVar24;
    fVar24 = fVar24 + fVar17;
    fVar17 = fVar14 + fVar21;
    fVar14 = fVar14 - fVar21;
    fVar35 = param_2[0x16] * param_1[param_3 * 0x18] - param_1[param_3 * 0x18 + 1] * param_2[0x17];
    fVar21 = param_1[param_3 * 0x18] * param_2[0x17] + param_2[0x16] * param_1[param_3 * 0x18 + 1];
    fVar33 = param_2[0x56] * param_1[param_3 * 0x58] - param_2[0x57] * param_1[param_3 * 0x58 + 1];
    fVar34 = param_2[0x57] * param_1[param_3 * 0x58] + param_1[param_3 * 0x58 + 1] * param_2[0x56];
    fVar91 = fVar35 + fVar33;
    fVar35 = fVar35 - fVar33;
    fVar33 = fVar21 - fVar34;
    fVar34 = fVar34 + fVar21;
    fVar119 = fVar24 - fVar91;
    fVar91 = fVar91 + fVar24;
    fVar117 = fVar17 + fVar34;
    fVar17 = fVar17 - fVar34;
    fVar118 = fVar119 + fVar17;
    fVar119 = fVar119 - fVar17;
    fVar21 = fVar27 - fVar33;
    fVar17 = fVar14 + fVar35;
    fVar14 = fVar14 - fVar35;
    fVar123 = _DAT_005bbc10 * fVar21 + _DAT_005bbc14 * fVar17;
    fVar122 = fVar21 * _DAT_005bbc14 + fVar17 * _DAT_005bbc4c;
    fVar33 = fVar33 + fVar27;
    fVar120 = _DAT_005bbc14 * fVar33 + _DAT_005bbc10 * fVar14;
    fVar121 = fVar33 * _DAT_005bbc10 + fVar14 * _DAT_005bbc48;
    fVar33 = param_2[0x7a] * param_1[param_3 * 0x7c] - param_2[0x7b] * param_1[param_3 * 0x7c + 1];
    fVar14 = param_2[0x7b] * param_1[param_3 * 0x7c] + param_1[param_3 * 0x7c + 1] * param_2[0x7a];
    fVar24 = param_2[0x3a] * param_1[param_3 * 0x3c] - param_2[0x3b] * param_1[param_3 * 0x3c + 1];
    fVar21 = param_2[0x3b] * param_1[param_3 * 0x3c] + param_1[param_3 * 0x3c + 1] * param_2[0x3a];
    fVar27 = fVar24 + fVar33;
    fVar17 = fVar21 + fVar14;
    fVar34 = param_1[param_3 * 0x6c] * param_2[0x6a] - param_2[0x6b] * param_1[param_3 * 0x6c + 1];
    fVar41 = param_2[0x6b] * param_1[param_3 * 0x6c] + param_1[param_3 * 0x6c + 1] * param_2[0x6a];
    fVar39 = param_2[0x2b] * param_1[param_3 * 0x2c] + param_1[param_3 * 0x2c + 1] * param_2[0x2a];
    fVar38 = param_1[param_3 * 0x2c] * param_2[0x2a] - param_2[0x2b] * param_1[param_3 * 0x2c + 1];
    fVar35 = fVar34 - fVar38;
    fVar38 = fVar38 + fVar34;
    fVar34 = fVar41 + fVar39;
    fVar41 = fVar41 - fVar39;
    fVar46 = param_2[0x1a] * param_1[param_3 * 0x1c] - param_1[param_3 * 0x1c + 1] * param_2[0x1b];
    fVar39 = param_1[param_3 * 0x1c] * param_2[0x1b] + param_2[0x1a] * param_1[param_3 * 0x1c + 1];
    fVar44 = param_2[0x5a] * param_1[param_3 * 0x5c] - param_2[0x5b] * param_1[param_3 * 0x5c + 1];
    fVar43 = param_2[0x5b] * param_1[param_3 * 0x5c] + param_1[param_3 * 0x5c + 1] * param_2[0x5a];
    fVar45 = fVar44 + fVar46;
    fVar42 = fVar43 + fVar39;
    fVar49 = param_2[10] * param_1[param_3 * 0xc] - param_2[0xb] * param_1[param_3 * 0xc + 1];
    fVar53 = param_1[param_3 * 0xc + 1] * param_2[10] + param_2[0xb] * param_1[param_3 * 0xc];
    fVar47 = param_2[0x4a] * param_1[param_3 * 0x4c] - param_2[0x4b] * param_1[param_3 * 0x4c + 1];
    fVar50 = param_2[0x4b] * param_1[param_3 * 0x4c] + param_1[param_3 * 0x4c + 1] * param_2[0x4a];
    fVar48 = fVar49 - fVar47;
    fVar47 = fVar47 + fVar49;
    fVar51 = fVar53 + fVar50;
    fVar53 = fVar53 - fVar50;
    fVar49 = fVar38 - fVar47;
    fVar50 = fVar27 + fVar45;
    fVar47 = fVar47 + fVar38;
    fVar27 = fVar27 - fVar45;
    fVar38 = fVar50 - fVar47;
    fVar45 = fVar17 + fVar42;
    fVar17 = fVar17 - fVar42;
    fVar52 = fVar17 + fVar49;
    fVar17 = fVar17 - fVar49;
    fVar42 = fVar34 + fVar51;
    fVar51 = fVar51 - fVar34;
    fVar34 = fVar45 - fVar42;
    fVar14 = fVar14 - fVar21;
    fVar21 = fVar27 + fVar51;
    fVar27 = fVar27 - fVar51;
    fVar46 = fVar46 - fVar44;
    fVar44 = fVar14 - fVar46;
    fVar14 = fVar14 + fVar46;
    fVar33 = fVar33 - fVar24;
    fVar39 = fVar39 - fVar43;
    fVar24 = fVar33 + fVar39;
    fVar33 = fVar33 - fVar39;
    fVar39 = fVar53 - fVar48;
    fVar53 = fVar53 + fVar48;
    fVar43 = fVar35 - fVar41;
    fVar41 = fVar41 + fVar35;
    fVar126 = (fVar39 - fVar41) * _DAT_005bbc0c;
    fVar127 = (fVar41 + fVar39) * _DAT_005bbc0c;
    fVar124 = (fVar43 - fVar53) * _DAT_005bbc0c;
    fVar125 = _DAT_005bbc0c * (fVar53 + fVar43);
    fVar43 = param_2[2] * param_1[param_3 * 4] - param_1[param_3 * 4 + 1] * param_2[3];
    fVar41 = param_1[param_3 * 4] * param_2[3] + param_2[2] * param_1[param_3 * 4 + 1];
    fVar48 = param_2[0x42] * param_1[param_3 * 0x44] - param_2[0x43] * param_1[param_3 * 0x44 + 1];
    fVar35 = param_2[0x43] * param_1[param_3 * 0x44] + param_1[param_3 * 0x44 + 1] * param_2[0x42];
    fVar46 = fVar48 + fVar43;
    fVar39 = fVar35 + fVar41;
    fVar51 = param_1[param_3 * 0x74] * param_2[0x72] - param_2[0x73] * param_1[param_3 * 0x74 + 1];
    fVar49 = param_2[0x73] * param_1[param_3 * 0x74] + param_1[param_3 * 0x74 + 1] * param_2[0x72];
    fVar53 = param_2[0x33] * param_1[param_3 * 0x34] + param_1[param_3 * 0x34 + 1] * param_2[0x32];
    fVar54 = param_1[param_3 * 0x34] * param_2[0x32] - param_2[0x33] * param_1[param_3 * 0x34 + 1];
    fVar55 = fVar51 - fVar54;
    fVar54 = fVar54 + fVar51;
    fVar51 = fVar49 + fVar53;
    fVar49 = fVar49 - fVar53;
    fVar60 = param_2[0x22] * param_1[param_3 * 0x24] - param_1[param_3 * 0x24 + 1] * param_2[0x23];
    fVar53 = param_1[param_3 * 0x24] * param_2[0x23] + param_2[0x22] * param_1[param_3 * 0x24 + 1];
    fVar58 = param_2[0x62] * param_1[param_3 * 100] - param_2[99] * param_1[param_3 * 100 + 1];
    fVar57 = param_2[99] * param_1[param_3 * 100] + param_1[param_3 * 100 + 1] * param_2[0x62];
    fVar59 = fVar58 + fVar60;
    fVar56 = fVar57 + fVar53;
    fVar62 = param_2[0x12] * param_1[param_3 * 0x14] - param_2[0x13] * param_1[param_3 * 0x14 + 1];
    fVar61 = param_1[param_3 * 0x14 + 1] * param_2[0x12] + param_2[0x13] * param_1[param_3 * 0x14];
    fVar63 = param_2[0x53] * param_1[param_3 * 0x54] + param_1[param_3 * 0x54 + 1] * param_2[0x52];
    fVar64 = param_1[param_3 * 0x54] * param_2[0x52] - param_2[0x53] * param_1[param_3 * 0x54 + 1];
    fVar67 = fVar62 - fVar64;
    fVar64 = fVar64 + fVar62;
    fVar62 = fVar61 + fVar63;
    fVar61 = fVar61 - fVar63;
    fVar65 = fVar54 - fVar64;
    fVar63 = fVar46 + fVar59;
    fVar64 = fVar64 + fVar54;
    fVar46 = fVar46 - fVar59;
    fVar59 = fVar63 - fVar64;
    fVar66 = fVar39 + fVar56;
    fVar39 = fVar39 - fVar56;
    fVar56 = fVar39 + fVar65;
    fVar39 = fVar39 - fVar65;
    fVar54 = fVar51 + fVar62;
    fVar62 = fVar62 - fVar51;
    fVar51 = fVar66 - fVar54;
    fVar41 = fVar41 - fVar35;
    fVar35 = fVar46 + fVar62;
    fVar60 = fVar60 - fVar58;
    fVar46 = fVar46 - fVar62;
    fVar58 = fVar41 - fVar60;
    fVar41 = fVar41 + fVar60;
    fVar43 = fVar43 - fVar48;
    fVar53 = fVar53 - fVar57;
    fVar48 = fVar43 + fVar53;
    fVar43 = fVar43 - fVar53;
    fVar53 = fVar55 + fVar49;
    fVar55 = fVar55 - fVar49;
    fVar49 = fVar61 - fVar67;
    fVar61 = fVar61 + fVar67;
    fVar129 = (fVar49 + fVar53) * _DAT_005bbc0c;
    fVar130 = (fVar49 - fVar53) * _DAT_005bbc0c;
    fVar131 = (fVar55 + fVar61) * _DAT_005bbc0c;
    fVar128 = _DAT_005bbc0c * (fVar55 - fVar61);
    fVar53 = *param_2 * param_1[param_3 * 2] - param_2[1] * param_1[param_3 * 2 + 1];
    fVar49 = param_1[param_3 * 2] * param_2[1] + param_1[param_3 * 2 + 1] * *param_2;
    fVar60 = param_2[0x40] * param_1[param_3 * 0x42] - param_2[0x41] * param_1[param_3 * 0x42 + 1];
    fVar61 = fVar53 + fVar60;
    fVar55 = param_1[param_3 * 0x42] * param_2[0x41] + param_1[param_3 * 0x42 + 1] * param_2[0x40];
    fVar57 = fVar55 + fVar49;
    fVar68 = param_2[0x70] * param_1[param_3 * 0x72] - param_2[0x71] * param_1[param_3 * 0x72 + 1];
    fVar67 = param_1[param_3 * 0x72] * param_2[0x71] + param_1[param_3 * 0x72 + 1] * param_2[0x70];
    fVar65 = param_2[0x30] * param_1[param_3 * 0x32] - param_2[0x31] * param_1[param_3 * 0x32 + 1];
    fVar62 = param_2[0x31] * param_1[param_3 * 0x32] + param_1[param_3 * 0x32 + 1] * param_2[0x30];
    fVar69 = fVar68 + fVar65;
    fVar68 = fVar68 - fVar65;
    fVar65 = fVar67 + fVar62;
    fVar67 = fVar67 - fVar62;
    fVar74 = param_2[0x20] * param_1[param_3 * 0x22] - param_1[param_3 * 0x22 + 1] * param_2[0x21];
    fVar62 = param_1[param_3 * 0x22] * param_2[0x21] + param_2[0x20] * param_1[param_3 * 0x22 + 1];
    fVar72 = param_2[0x60] * param_1[param_3 * 0x62] - param_2[0x61] * param_1[param_3 * 0x62 + 1];
    fVar71 = param_2[0x61] * param_1[param_3 * 0x62] + param_1[param_3 * 0x62 + 1] * param_2[0x60];
    fVar73 = fVar72 + fVar74;
    fVar70 = fVar71 + fVar62;
    fVar76 = param_2[0x10] * param_1[param_3 * 0x12] - param_2[0x11] * param_1[param_3 * 0x12 + 1];
    fVar75 = param_2[0x11] * param_1[param_3 * 0x12] + param_1[param_3 * 0x12 + 1] * param_2[0x10];
    fVar78 = param_2[0x50] * param_1[param_3 * 0x52] - param_2[0x51] * param_1[param_3 * 0x52 + 1];
    fVar79 = param_2[0x51] * param_1[param_3 * 0x52] + param_1[param_3 * 0x52 + 1] * param_2[0x50];
    fVar80 = fVar76 - fVar78;
    fVar78 = fVar78 + fVar76;
    fVar76 = fVar75 + fVar79;
    fVar77 = fVar61 + fVar73;
    fVar75 = fVar75 - fVar79;
    fVar79 = fVar69 - fVar78;
    fVar78 = fVar78 + fVar69;
    fVar61 = fVar61 - fVar73;
    fVar73 = fVar77 + fVar78;
    fVar77 = fVar77 - fVar78;
    fVar78 = fVar57 + fVar70;
    fVar57 = fVar57 - fVar70;
    fVar70 = fVar57 + fVar79;
    fVar57 = fVar57 - fVar79;
    fVar69 = fVar65 + fVar76;
    fVar76 = fVar76 - fVar65;
    fVar65 = fVar78 - fVar69;
    fVar69 = fVar69 + fVar78;
    fVar49 = fVar49 - fVar55;
    fVar74 = fVar74 - fVar72;
    fVar55 = fVar61 - fVar76;
    fVar76 = fVar76 + fVar61;
    fVar61 = fVar49 + fVar74;
    fVar49 = fVar49 - fVar74;
    fVar62 = fVar62 - fVar71;
    fVar53 = fVar53 - fVar60;
    fVar60 = fVar53 + fVar62;
    fVar53 = fVar53 - fVar62;
    fVar62 = fVar75 - fVar80;
    fVar71 = fVar68 + fVar67;
    fVar68 = fVar68 - fVar67;
    fVar80 = fVar80 + fVar75;
    fVar133 = (fVar62 - fVar71) * _DAT_005bbc0c;
    fVar135 = (fVar71 + fVar62) * _DAT_005bbc0c;
    fVar134 = (fVar68 - fVar80) * _DAT_005bbc0c;
    fVar132 = (fVar68 + fVar80) * _DAT_005bbc0c;
    fVar71 = param_2[8] * param_1[param_3 * 10] - param_1[param_3 * 10 + 1] * param_2[9];
    fVar68 = param_1[param_3 * 10] * param_2[9] + param_2[8] * param_1[param_3 * 10 + 1];
    fVar67 = param_2[0x48] * param_1[param_3 * 0x4a] - param_2[0x49] * param_1[param_3 * 0x4a + 1];
    fVar62 = param_2[0x49] * param_1[param_3 * 0x4a] + param_1[param_3 * 0x4a + 1] * param_2[0x48];
    fVar72 = fVar71 + fVar67;
    fVar71 = fVar71 - fVar67;
    fVar67 = fVar68 + fVar62;
    fVar68 = fVar68 - fVar62;
    fVar79 = param_2[0x18] * param_1[param_3 * 0x1a] - param_1[param_3 * 0x1a + 1] * param_2[0x19];
    fVar62 = param_1[param_3 * 0x1a] * param_2[0x19] + param_2[0x18] * param_1[param_3 * 0x1a + 1];
    fVar74 = param_2[0x58] * param_1[param_3 * 0x5a] - param_2[0x59] * param_1[param_3 * 0x5a + 1];
    fVar75 = param_2[0x59] * param_1[param_3 * 0x5a] + param_1[param_3 * 0x5a + 1] * param_2[0x58];
    fVar78 = fVar79 + fVar74;
    fVar79 = fVar79 - fVar74;
    fVar74 = fVar62 + fVar75;
    fVar62 = fVar62 - fVar75;
    fVar83 = param_2[0x28] * param_1[param_3 * 0x2a] - param_1[param_3 * 0x2a + 1] * param_2[0x29];
    fVar75 = param_1[param_3 * 0x2a] * param_2[0x29] + param_2[0x28] * param_1[param_3 * 0x2a + 1];
    fVar80 = param_2[0x68] * param_1[param_3 * 0x6a] - param_2[0x69] * param_1[param_3 * 0x6a + 1];
    fVar81 = param_2[0x69] * param_1[param_3 * 0x6a] + param_1[param_3 * 0x6a + 1] * param_2[0x68];
    fVar82 = fVar83 + fVar80;
    fVar83 = fVar83 - fVar80;
    fVar80 = fVar75 + fVar81;
    fVar75 = fVar75 - fVar81;
    fVar89 = param_2[0x78] * param_1[param_3 * 0x7a] - param_1[param_3 * 0x7a + 1] * param_2[0x79];
    fVar81 = param_1[param_3 * 0x7a] * param_2[0x79] + param_2[0x78] * param_1[param_3 * 0x7a + 1];
    fVar84 = param_2[0x38] * param_1[param_3 * 0x3a] - param_2[0x39] * param_1[param_3 * 0x3a + 1];
    fVar85 = param_1[param_3 * 0x3a] * param_2[0x39] + param_1[param_3 * 0x3a + 1] * param_2[0x38];
    fVar87 = fVar89 + fVar84;
    fVar89 = fVar89 - fVar84;
    fVar84 = fVar81 + fVar85;
    fVar81 = fVar81 - fVar85;
    fVar85 = fVar72 + fVar82;
    fVar86 = fVar78 + fVar87;
    fVar87 = fVar87 - fVar78;
    fVar72 = fVar72 - fVar82;
    fVar82 = fVar85 + fVar86;
    fVar86 = fVar86 - fVar85;
    fVar85 = fVar84 - fVar74;
    fVar84 = fVar84 + fVar74;
    fVar88 = fVar87 - fVar85;
    fVar85 = fVar85 + fVar87;
    fVar74 = fVar67 - fVar80;
    fVar80 = fVar80 + fVar67;
    fVar67 = fVar80 + fVar84;
    fVar80 = fVar80 - fVar84;
    fVar78 = fVar72 + fVar74;
    fVar84 = fVar79 + fVar81;
    fVar74 = fVar74 - fVar72;
    fVar72 = fVar89 - fVar62;
    fVar89 = fVar89 + fVar62;
    fVar87 = _DAT_005bbc4c * fVar84 + _DAT_005bbc14 * fVar72;
    fVar84 = fVar84 * _DAT_005bbc14 + fVar72 * _DAT_005bbc10;
    fVar81 = fVar81 - fVar79;
    fVar136 = _DAT_005bbc48 * fVar81 + _DAT_005bbc10 * fVar89;
    fVar72 = fVar81 * _DAT_005bbc10 + fVar89 * _DAT_005bbc14;
    fVar81 = fVar71 + fVar75;
    fVar71 = fVar71 - fVar75;
    fVar62 = fVar68 + fVar83;
    fVar75 = _DAT_005bbc14 * fVar71 + _DAT_005bbc10 * fVar62;
    fVar68 = fVar68 - fVar83;
    fVar71 = _DAT_005bbc4c * fVar71 + fVar62 * _DAT_005bbc14;
    fVar79 = _DAT_005bbc10 * fVar81 + _DAT_005bbc14 * fVar68;
    fVar62 = fVar69 + fVar67;
    fVar68 = fVar81 * _DAT_005bbc48 + fVar68 * _DAT_005bbc10;
    fVar137 = fVar97 + fVar91;
    fVar83 = fVar5 + fVar103;
    fVar69 = fVar69 - fVar67;
    fVar81 = fVar83 - fVar137;
    fVar137 = fVar137 + fVar83;
    fVar83 = fVar28 + fVar26;
    fVar28 = fVar28 - fVar26;
    fVar89 = fVar62 - fVar83;
    fVar83 = fVar83 + fVar62;
    fVar26 = fVar90 + fVar117;
    fVar62 = fVar6 + fVar104;
    fVar67 = fVar26 + fVar62;
    fVar62 = fVar62 - fVar26;
    fVar63 = fVar63 + fVar64;
    fVar50 = fVar50 + fVar47;
    fVar26 = fVar63 + fVar50;
    fVar50 = fVar50 - fVar63;
    fVar63 = fVar73 + fVar82;
    fVar73 = fVar73 - fVar82;
    fVar47 = fVar73 + fVar69;
    fVar69 = fVar69 - fVar73;
    fVar64 = fVar29 - fVar40;
    fVar40 = fVar40 + fVar29;
    fVar29 = fVar63 + fVar40;
    fVar40 = fVar40 - fVar63;
    fVar66 = fVar66 + fVar54;
    fVar54 = fVar64 + fVar28;
    fVar64 = fVar64 - fVar28;
    fVar45 = fVar45 + fVar42;
    fVar28 = fVar137 + fVar26;
    fVar137 = fVar137 - fVar26;
    fVar42 = fVar66 - fVar45;
    fVar45 = fVar45 + fVar66;
    param_1[param_3 * 0x40] = fVar28 - fVar29;
    *param_1 = fVar28 + fVar29;
    param_1[param_3 * 0x60] = fVar137 - fVar89;
    param_1[param_3 * 0x20] = fVar137 + fVar89;
    fVar28 = (fVar47 + fVar64) * _DAT_005bbc0c;
    fVar26 = fVar81 + fVar42;
    param_1[param_3 * 0x50] = fVar26 - fVar28;
    param_1[param_3 * 0x10] = fVar26 + fVar28;
    fVar26 = (fVar64 - fVar47) * _DAT_005bbc0c;
    fVar28 = fVar62 + fVar50;
    fVar62 = fVar62 - fVar50;
    param_1[param_3 * 0x30 + 1] = fVar26 + fVar62;
    param_1[param_3 * 0x70 + 1] = fVar62 - fVar26;
    fVar26 = fVar67 - fVar45;
    fVar45 = fVar45 + fVar67;
    param_1[1] = fVar83 + fVar45;
    param_1[param_3 * 0x40 + 1] = fVar45 - fVar83;
    param_1[param_3 * 0x20 + 1] = fVar40 + fVar26;
    param_1[param_3 * 0x60 + 1] = fVar26 - fVar40;
    fVar29 = (fVar69 - fVar54) * _DAT_005bbc0c;
    fVar26 = (fVar54 + fVar69) * _DAT_005bbc0c;
    param_1[param_3 * 0x10 + 1] = fVar26 + fVar28;
    param_1[param_3 * 0x50 + 1] = fVar28 - fVar26;
    fVar81 = fVar81 - fVar42;
    param_1[param_3 * 0x70] = fVar81 - fVar29;
    fVar90 = fVar90 - fVar117;
    param_1[param_3 * 0x30] = fVar81 + fVar29;
    fVar5 = fVar5 - fVar103;
    fVar26 = fVar5 + fVar90;
    fVar5 = fVar5 - fVar90;
    fVar29 = fVar38 - fVar34;
    fVar34 = fVar34 + fVar38;
    fVar28 = fVar59 + fVar51;
    fVar51 = fVar51 - fVar59;
    fVar40 = (fVar28 + fVar29) * _DAT_005bbc0c;
    fVar29 = (fVar29 - fVar28) * _DAT_005bbc0c;
    fVar91 = fVar91 - fVar97;
    fVar38 = (fVar51 - fVar34) * _DAT_005bbc0c;
    fVar6 = fVar6 - fVar104;
    fVar34 = (fVar34 + fVar51) * _DAT_005bbc0c;
    fVar28 = fVar91 + fVar6;
    fVar47 = fVar77 + fVar80;
    fVar6 = fVar6 - fVar91;
    fVar77 = fVar77 - fVar80;
    fVar45 = fVar65 - fVar86;
    fVar86 = fVar86 + fVar65;
    fVar42 = _DAT_005bbc14 * fVar77 + _DAT_005bbc10 * fVar45;
    fVar45 = fVar77 * _DAT_005bbc4c + fVar45 * _DAT_005bbc14;
    fVar59 = _DAT_005bbc10 * fVar47 + _DAT_005bbc14 * fVar86;
    fVar51 = fVar47 * _DAT_005bbc48 + fVar86 * _DAT_005bbc10;
    fVar54 = fVar12 - fVar37;
    fVar50 = fVar25 + fVar23;
    fVar25 = fVar25 - fVar23;
    fVar47 = _DAT_005bbc4c * fVar54 + _DAT_005bbc14 * fVar25;
    fVar23 = fVar54 * _DAT_005bbc14 + fVar25 * _DAT_005bbc10;
    fVar12 = fVar12 + fVar37;
    fVar54 = _DAT_005bbc10 * fVar12 + _DAT_005bbc14 * fVar50;
    fVar50 = _DAT_005bbc48 * fVar12 + _DAT_005bbc10 * fVar50;
    fVar37 = fVar5 + fVar38;
    fVar25 = fVar42 + fVar47;
    param_1[param_3 * 0x58] = fVar37 - fVar25;
    fVar5 = fVar5 - fVar38;
    fVar47 = fVar47 - fVar42;
    fVar12 = fVar45 + fVar23;
    fVar45 = fVar45 - fVar23;
    param_1[param_3 * 0x18] = fVar25 + fVar37;
    param_1[param_3 * 0x78] = fVar5 - fVar45;
    param_1[param_3 * 0x38] = fVar5 + fVar45;
    fVar5 = fVar29 + fVar6;
    fVar6 = fVar6 - fVar29;
    param_1[param_3 * 0x18 + 1] = fVar12 + fVar5;
    param_1[param_3 * 0x58 + 1] = fVar5 - fVar12;
    param_1[param_3 * 0x38 + 1] = fVar47 + fVar6;
    param_1[param_3 * 0x78 + 1] = fVar6 - fVar47;
    fVar6 = fVar26 - fVar40;
    fVar40 = fVar40 + fVar26;
    fVar5 = fVar59 + fVar50;
    fVar50 = fVar50 - fVar59;
    fVar26 = fVar33 - fVar126;
    param_1[param_3 * 0x48] = fVar40 - fVar5;
    param_1[param_3 * 8] = fVar5 + fVar40;
    fVar12 = fVar51 + fVar54;
    fVar51 = fVar51 - fVar54;
    param_1[param_3 * 0x68] = fVar6 - fVar51;
    param_1[param_3 * 0x28] = fVar51 + fVar6;
    fVar37 = _DAT_005bbc44;
    fVar6 = fVar34 + fVar28;
    fVar28 = fVar28 - fVar34;
    param_1[param_3 * 8 + 1] = fVar12 + fVar6;
    fVar5 = fVar3 - fVar99;
    param_1[param_3 * 0x48 + 1] = fVar6 - fVar12;
    fVar29 = fVar41 - fVar128;
    param_1[param_3 * 0x28 + 1] = fVar50 + fVar28;
    fVar6 = fVar93 - fVar123;
    param_1[param_3 * 0x68 + 1] = fVar28 - fVar50;
    fVar12 = fVar5 - fVar6;
    fVar28 = fVar43 - fVar130;
    fVar6 = fVar6 + fVar5;
    fVar5 = fVar122 - fVar92;
    fVar23 = fVar2 - fVar100;
    fVar25 = fVar5 + fVar23;
    fVar23 = fVar23 - fVar5;
    fVar34 = _DAT_005bbc44 * fVar28 + _DAT_005bbc08 * fVar29;
    fVar28 = fVar28 * _DAT_005bbc08 + fVar29 * _DAT_005bbc04;
    fVar29 = fVar14 - fVar124;
    fVar5 = _DAT_005bbc04 * fVar26 + _DAT_005bbc08 * fVar29;
    fVar38 = fVar26 * _DAT_005bbc08 + fVar29 * fVar37;
    fVar29 = fVar34 + fVar5;
    fVar26 = fVar53 - fVar133;
    fVar34 = fVar34 - fVar5;
    fVar37 = fVar28 + fVar38;
    fVar38 = fVar38 - fVar28;
    fVar40 = fVar61 - fVar134;
    fVar5 = fVar87 - fVar75;
    fVar42 = fVar40 + fVar5;
    fVar40 = fVar40 - fVar5;
    fVar28 = fVar71 - fVar84;
    fVar5 = fVar26 - fVar28;
    fVar28 = fVar28 + fVar26;
    fVar51 = _DAT_005bbbfc * fVar5 + _DAT_005bbc00 * fVar40;
    fVar47 = fVar5 * _DAT_005bbc40 + fVar40 * _DAT_005bbbfc;
    fVar54 = _DAT_005bbbf4 * fVar28 + _DAT_005bbbf8 * fVar42;
    fVar5 = fVar111 - fVar112;
    fVar28 = fVar28 * _DAT_005bbc3c + fVar42 * _DAT_005bbbf4;
    fVar45 = fVar15 - fVar107;
    fVar50 = fVar45 + fVar5;
    fVar26 = fVar113 - fVar110;
    fVar45 = fVar45 - fVar5;
    fVar40 = fVar13 - fVar106;
    fVar5 = fVar40 + fVar26;
    fVar40 = fVar40 - fVar26;
    fVar42 = _DAT_005bbc40 * fVar40 + _DAT_005bbbfc * fVar45;
    fVar45 = _DAT_005bbc00 * fVar45 + fVar40 * _DAT_005bbbfc;
    fVar26 = _DAT_005bbc3c * fVar5 + _DAT_005bbbf4 * fVar50;
    fVar40 = _DAT_005bbbf4 * fVar5 + _DAT_005bbbf8 * fVar50;
    fVar50 = fVar12 - fVar34;
    fVar34 = fVar34 + fVar12;
    fVar5 = fVar51 + fVar42;
    fVar42 = fVar42 - fVar51;
    fVar33 = fVar33 + fVar126;
    param_1[param_3 * 0x5e] = fVar34 - fVar5;
    param_1[param_3 * 0x1e] = fVar5 + fVar34;
    fVar12 = fVar47 + fVar45;
    fVar47 = fVar47 - fVar45;
    param_1[param_3 * 0x7e] = fVar50 - fVar47;
    param_1[param_3 * 0x3e] = fVar47 + fVar50;
    fVar5 = fVar23 - fVar38;
    fVar38 = fVar38 + fVar23;
    param_1[param_3 * 0x1e + 1] = fVar12 + fVar38;
    param_1[param_3 * 0x5e + 1] = fVar38 - fVar12;
    param_1[param_3 * 0x3e + 1] = fVar42 + fVar5;
    param_1[param_3 * 0x7e + 1] = fVar5 - fVar42;
    fVar5 = fVar54 + fVar26;
    fVar26 = fVar26 - fVar54;
    fVar12 = fVar6 + fVar37;
    fVar6 = fVar6 - fVar37;
    param_1[param_3 * 0x4e] = fVar12 - fVar5;
    param_1[param_3 * 0xe] = fVar12 + fVar5;
    fVar12 = fVar28 + fVar40;
    fVar28 = fVar28 - fVar40;
    param_1[param_3 * 0x6e] = fVar6 - fVar28;
    param_1[param_3 * 0x2e] = fVar28 + fVar6;
    fVar23 = _DAT_005bbc38;
    fVar5 = fVar25 + fVar29;
    fVar25 = fVar25 - fVar29;
    param_1[param_3 * 0xe + 1] = fVar12 + fVar5;
    fVar92 = fVar92 + fVar122;
    param_1[param_3 * 0x4e + 1] = fVar5 - fVar12;
    fVar41 = fVar41 + fVar128;
    param_1[param_3 * 0x2e + 1] = fVar26 + fVar25;
    fVar3 = fVar3 + fVar99;
    param_1[param_3 * 0x6e + 1] = fVar25 - fVar26;
    fVar5 = fVar3 + fVar92;
    fVar43 = fVar43 + fVar130;
    fVar3 = fVar3 - fVar92;
    fVar93 = fVar93 + fVar123;
    fVar2 = fVar2 + fVar100;
    fVar6 = fVar93 + fVar2;
    fVar2 = fVar2 - fVar93;
    fVar25 = _DAT_005bbc38 * fVar43 + _DAT_005bbbf0 * fVar41;
    fVar26 = fVar43 * _DAT_005bbbf0 + fVar41 * _DAT_005bbbec;
    fVar14 = fVar14 + fVar124;
    fVar12 = _DAT_005bbbf0 * fVar14 + _DAT_005bbbec * fVar33;
    fVar29 = fVar33 * _DAT_005bbbf0 + fVar14 * fVar23;
    fVar23 = fVar25 + fVar12;
    fVar53 = fVar53 + fVar133;
    fVar84 = fVar84 + fVar71;
    fVar25 = fVar25 - fVar12;
    fVar28 = fVar26 + fVar29;
    fVar61 = fVar61 + fVar134;
    fVar29 = fVar29 - fVar26;
    fVar87 = fVar87 + fVar75;
    fVar12 = fVar53 + fVar87;
    fVar53 = fVar53 - fVar87;
    fVar14 = fVar61 + fVar84;
    fVar61 = fVar61 - fVar84;
    fVar26 = _DAT_005bbbe4 * fVar61 + _DAT_005bbbe8 * fVar53;
    fVar33 = fVar61 * _DAT_005bbbe8 + fVar53 * _DAT_005bbc34;
    fVar40 = _DAT_005bbbdc * fVar14 + _DAT_005bbbe0 * fVar12;
    fVar15 = fVar15 + fVar107;
    fVar14 = fVar14 * _DAT_005bbbe0 + fVar12 * _DAT_005bbc30;
    fVar110 = fVar110 + fVar113;
    fVar12 = fVar15 - fVar110;
    fVar110 = fVar110 + fVar15;
    fVar111 = fVar111 + fVar112;
    fVar13 = fVar13 + fVar106;
    fVar34 = fVar13 + fVar111;
    fVar13 = fVar13 - fVar111;
    fVar15 = _DAT_005bbbe4 * fVar12 + fVar13 * _DAT_005bbbe8;
    fVar37 = _DAT_005bbc34 * fVar13 + _DAT_005bbbe8 * fVar12;
    fVar12 = _DAT_005bbc30 * fVar34 + _DAT_005bbbe0 * fVar110;
    fVar38 = _DAT_005bbbe0 * fVar34 + fVar110 * _DAT_005bbbdc;
    fVar34 = fVar26 + fVar37;
    fVar37 = fVar37 - fVar26;
    fVar13 = fVar3 - fVar25;
    fVar25 = fVar25 + fVar3;
    param_1[param_3 * 0x56] = fVar25 - fVar34;
    param_1[param_3 * 0x16] = fVar25 + fVar34;
    fVar3 = fVar33 + fVar15;
    fVar33 = fVar33 - fVar15;
    param_1[param_3 * 0x76] = fVar13 - fVar33;
    param_1[param_3 * 0x36] = fVar33 + fVar13;
    fVar13 = fVar2 - fVar29;
    fVar29 = fVar29 + fVar2;
    param_1[param_3 * 0x16 + 1] = fVar3 + fVar29;
    param_1[param_3 * 0x56 + 1] = fVar29 - fVar3;
    param_1[param_3 * 0x36 + 1] = fVar37 + fVar13;
    param_1[param_3 * 0x76 + 1] = fVar13 - fVar37;
    fVar2 = fVar40 + fVar12;
    fVar12 = fVar12 - fVar40;
    fVar3 = fVar5 + fVar28;
    fVar5 = fVar5 - fVar28;
    param_1[param_3 * 0x46] = fVar3 - fVar2;
    param_1[param_3 * 6] = fVar3 + fVar2;
    fVar3 = fVar14 + fVar38;
    fVar14 = fVar14 - fVar38;
    param_1[param_3 * 0x66] = fVar5 - fVar14;
    param_1[param_3 * 0x26] = fVar14 + fVar5;
    fVar2 = fVar6 + fVar23;
    fVar6 = fVar6 - fVar23;
    param_1[param_3 * 6 + 1] = fVar3 + fVar2;
    fVar5 = (fVar10 - fVar118) * _DAT_005bbc0c;
    param_1[param_3 * 0x46 + 1] = fVar2 - fVar3;
    param_1[param_3 * 0x26 + 1] = fVar12 + fVar6;
    fVar23 = fVar4 - fVar9;
    param_1[param_3 * 0x66 + 1] = fVar6 - fVar12;
    fVar12 = fVar23 + fVar5;
    fVar23 = fVar23 - fVar5;
    fVar13 = _DAT_005bbc4c * fVar46 + _DAT_005bbc14 * fVar39;
    fVar2 = fVar46 * _DAT_005bbc14 + fVar39 * _DAT_005bbc10;
    fVar3 = _DAT_005bbc10 * fVar27 + _DAT_005bbc14 * fVar17;
    fVar15 = fVar13 + fVar3;
    fVar6 = (fVar36 - fVar30) * _DAT_005bbc0c;
    fVar13 = fVar13 - fVar3;
    fVar3 = (fVar119 - fVar96) * _DAT_005bbc0c;
    fVar34 = fVar7 - fVar102;
    fVar5 = fVar3 + fVar34;
    fVar34 = fVar34 - fVar3;
    fVar3 = fVar27 * _DAT_005bbc14 + _DAT_005bbc4c * fVar17;
    fVar14 = fVar2 + fVar3;
    fVar3 = fVar3 - fVar2;
    fVar2 = (fVar16 - fVar22) * _DAT_005bbc0c;
    fVar25 = fVar32 + fVar2;
    fVar32 = fVar32 - fVar2;
    fVar2 = fVar18 + fVar6;
    fVar18 = fVar18 - fVar6;
    fVar33 = _DAT_005bbc44 * fVar18 + _DAT_005bbc08 * fVar32;
    fVar17 = fVar32 * _DAT_005bbc04 + fVar18 * _DAT_005bbc08;
    fVar6 = _DAT_005bbbf0 * fVar25 + _DAT_005bbc38 * fVar2;
    fVar29 = fVar2 * _DAT_005bbbf0 + fVar25 * _DAT_005bbbec;
    fVar18 = (fVar88 - fVar78) * _DAT_005bbc0c;
    fVar2 = (fVar74 - fVar85) * _DAT_005bbc0c;
    fVar32 = fVar57 + fVar18;
    fVar57 = fVar57 - fVar18;
    fVar27 = fVar55 + fVar2;
    fVar55 = fVar55 - fVar2;
    fVar26 = _DAT_005bbc44 * fVar55 + fVar57 * _DAT_005bbc08;
    fVar18 = fVar55 * _DAT_005bbc08 + _DAT_005bbc04 * fVar57;
    fVar28 = _DAT_005bbbf0 * fVar27 + _DAT_005bbbec * fVar32;
    fVar25 = fVar33 - fVar18;
    fVar2 = fVar27 * _DAT_005bbc38 + fVar32 * _DAT_005bbbf0;
    fVar18 = fVar18 + fVar33;
    fVar27 = fVar23 - fVar13;
    fVar13 = fVar13 + fVar23;
    param_1[param_3 * 0x5c] = fVar13 - fVar18;
    param_1[param_3 * 0x1c] = fVar13 + fVar18;
    fVar13 = fVar26 - fVar17;
    fVar26 = fVar26 + fVar17;
    param_1[param_3 * 0x7c] = fVar27 - fVar13;
    param_1[param_3 * 0x3c] = fVar13 + fVar27;
    fVar13 = fVar34 - fVar3;
    fVar3 = fVar3 + fVar34;
    param_1[param_3 * 0x1c + 1] = fVar26 + fVar3;
    param_1[param_3 * 0x5c + 1] = fVar3 - fVar26;
    fVar3 = fVar6 + fVar28;
    param_1[param_3 * 0x3c + 1] = fVar25 + fVar13;
    param_1[param_3 * 0x7c + 1] = fVar13 - fVar25;
    fVar13 = fVar12 + fVar14;
    param_1[param_3 * 0x4c] = fVar13 - fVar3;
    param_1[param_3 * 0xc] = fVar13 + fVar3;
    fVar12 = fVar12 - fVar14;
    fVar6 = fVar6 - fVar28;
    fVar3 = fVar2 - fVar29;
    fVar2 = fVar2 + fVar29;
    param_1[param_3 * 0x6c] = fVar12 - fVar3;
    param_1[param_3 * 0x2c] = fVar3 + fVar12;
    fVar17 = _DAT_005bbc10;
    fVar3 = fVar15 + fVar5;
    fVar5 = fVar5 - fVar15;
    param_1[param_3 * 0xc + 1] = fVar2 + fVar3;
    fVar4 = fVar4 + fVar9;
    param_1[param_3 * 0x4c + 1] = fVar3 - fVar2;
    fVar12 = _DAT_005bbc10 * fVar56;
    param_1[param_3 * 0x2c + 1] = fVar6 + fVar5;
    fVar2 = (fVar96 + fVar119) * _DAT_005bbc0c;
    param_1[param_3 * 0x6c + 1] = fVar5 - fVar6;
    fVar14 = fVar4 - fVar2;
    fVar2 = fVar2 + fVar4;
    fVar12 = _DAT_005bbc48 * fVar35 + fVar12;
    fVar3 = fVar35 * fVar17 + fVar56 * _DAT_005bbc14;
    fVar4 = _DAT_005bbc14 * fVar21 + _DAT_005bbc10 * fVar52;
    fVar13 = fVar12 + fVar4;
    fVar15 = (fVar16 + fVar22) * _DAT_005bbc0c;
    fVar12 = fVar12 - fVar4;
    fVar4 = (fVar10 + fVar118) * _DAT_005bbc0c;
    fVar7 = fVar7 + fVar102;
    fVar5 = fVar4 + fVar7;
    fVar7 = fVar7 - fVar4;
    fVar6 = _DAT_005bbc48 * fVar52 + fVar21 * fVar17;
    fVar9 = fVar3 + fVar6;
    fVar6 = fVar6 - fVar3;
    fVar4 = (fVar30 + fVar36) * _DAT_005bbc0c;
    fVar3 = fVar31 + fVar4;
    fVar31 = fVar31 - fVar4;
    fVar10 = fVar20 + fVar15;
    fVar20 = fVar20 - fVar15;
    fVar21 = _DAT_005bbc2c * fVar20 + _DAT_005bbbec * fVar31;
    fVar20 = fVar20 * _DAT_005bbbec + fVar31 * _DAT_005bbbf0;
    fVar22 = _DAT_005bbc28 * fVar10 + _DAT_005bbc04 * fVar3;
    fVar4 = (fVar88 + fVar78) * _DAT_005bbc0c;
    fVar10 = fVar10 * _DAT_005bbc04 + fVar3 * _DAT_005bbc08;
    fVar18 = fVar76 + fVar4;
    fVar76 = fVar76 - fVar4;
    fVar3 = (fVar85 + fVar74) * _DAT_005bbc0c;
    fVar4 = fVar70 + fVar3;
    fVar70 = fVar70 - fVar3;
    fVar15 = _DAT_005bbbf0 * fVar70 + _DAT_005bbbec * fVar76;
    fVar16 = fVar70 * _DAT_005bbbec + _DAT_005bbc2c * fVar76;
    fVar3 = _DAT_005bbc08 * fVar4 + _DAT_005bbc04 * fVar18;
    fVar17 = fVar14 - fVar12;
    fVar4 = _DAT_005bbc04 * fVar4 + fVar18 * _DAT_005bbc28;
    fVar12 = fVar12 + fVar14;
    fVar14 = fVar21 - fVar15;
    fVar15 = fVar15 + fVar21;
    fVar18 = fVar44 - fVar127;
    param_1[param_3 * 0x54] = fVar12 - fVar15;
    param_1[param_3 * 0x14] = fVar15 + fVar12;
    fVar12 = fVar16 - fVar20;
    fVar16 = fVar16 + fVar20;
    param_1[param_3 * 0x74] = fVar17 - fVar12;
    param_1[param_3 * 0x34] = fVar12 + fVar17;
    fVar12 = fVar7 - fVar6;
    fVar6 = fVar6 + fVar7;
    param_1[param_3 * 0x14 + 1] = fVar16 + fVar6;
    param_1[param_3 * 0x54 + 1] = fVar6 - fVar16;
    param_1[param_3 * 0x34 + 1] = fVar14 + fVar12;
    param_1[param_3 * 0x74 + 1] = fVar12 - fVar14;
    fVar6 = fVar22 - fVar3;
    fVar3 = fVar3 + fVar22;
    fVar7 = fVar2 + fVar9;
    fVar2 = fVar2 - fVar9;
    fVar9 = fVar8 - fVar98;
    param_1[param_3 * 0x44] = fVar7 - fVar3;
    param_1[param_3 * 4] = fVar7 + fVar3;
    fVar3 = fVar4 - fVar10;
    fVar4 = fVar4 + fVar10;
    param_1[param_3 * 100] = fVar2 - fVar3;
    param_1[param_3 * 0x24] = fVar3 + fVar2;
    fVar2 = fVar13 + fVar5;
    fVar5 = fVar5 - fVar13;
    fVar7 = fVar48 - fVar131;
    param_1[param_3 * 4 + 1] = fVar4 + fVar2;
    fVar3 = fVar95 - fVar120;
    param_1[param_3 * 0x44 + 1] = fVar2 - fVar4;
    param_1[param_3 * 0x24 + 1] = fVar6 + fVar5;
    fVar12 = fVar58 - fVar129;
    param_1[param_3 * 100 + 1] = fVar5 - fVar6;
    fVar2 = fVar9 - fVar3;
    fVar10 = fVar24 - fVar125;
    fVar3 = fVar3 + fVar9;
    fVar4 = fVar121 - fVar94;
    fVar5 = fVar1 - fVar101;
    fVar6 = fVar4 + fVar5;
    fVar5 = fVar5 - fVar4;
    fVar13 = _DAT_005bbbec * fVar12 + _DAT_005bbc2c * fVar7;
    fVar4 = fVar7 * _DAT_005bbbec + fVar12 * _DAT_005bbbf0;
    fVar9 = _DAT_005bbc2c * fVar18 + fVar10 * _DAT_005bbbec;
    fVar7 = fVar18 * _DAT_005bbbec + _DAT_005bbbf0 * fVar10;
    fVar12 = fVar13 + fVar7;
    fVar14 = fVar49 - fVar135;
    fVar13 = fVar13 - fVar7;
    fVar10 = fVar4 + fVar9;
    fVar15 = fVar68 - fVar72;
    fVar9 = fVar9 - fVar4;
    fVar7 = fVar136 - fVar79;
    fVar4 = fVar14 + fVar7;
    fVar14 = fVar14 - fVar7;
    fVar16 = fVar60 - fVar132;
    fVar7 = fVar16 + fVar15;
    fVar16 = fVar16 - fVar15;
    fVar21 = _DAT_005bbbdc * fVar16 + _DAT_005bbbe0 * fVar14;
    fVar14 = fVar16 * _DAT_005bbc24 + fVar14 * _DAT_005bbbdc;
    fVar20 = _DAT_005bbbe4 * fVar7 + _DAT_005bbbe8 * fVar4;
    fVar15 = fVar116 - fVar115;
    fVar7 = fVar7 * _DAT_005bbc20 + fVar4 * _DAT_005bbbe4;
    fVar4 = fVar19 - fVar105;
    fVar17 = fVar4 + fVar15;
    fVar4 = fVar4 - fVar15;
    fVar16 = fVar11 - fVar108;
    fVar18 = fVar114 - fVar109;
    fVar15 = fVar16 - fVar18;
    fVar18 = fVar18 + fVar16;
    fVar16 = fVar15 * _DAT_005bbbdc + _DAT_005bbbe0 * fVar4;
    fVar15 = _DAT_005bbc24 * fVar15 + _DAT_005bbbdc * fVar4;
    fVar4 = _DAT_005bbc20 * fVar18 + _DAT_005bbbe4 * fVar17;
    fVar18 = _DAT_005bbbe4 * fVar18 + fVar17 * _DAT_005bbbe8;
    fVar17 = fVar2 - fVar13;
    fVar13 = fVar13 + fVar2;
    fVar2 = fVar21 + fVar15;
    fVar15 = fVar15 - fVar21;
    fVar44 = fVar44 + fVar127;
    param_1[param_3 * 0x5a] = fVar13 - fVar2;
    param_1[param_3 * 0x1a] = fVar2 + fVar13;
    fVar13 = fVar14 + fVar16;
    fVar14 = fVar14 - fVar16;
    param_1[param_3 * 0x7a] = fVar17 - fVar14;
    param_1[param_3 * 0x3a] = fVar14 + fVar17;
    fVar2 = fVar5 - fVar9;
    fVar9 = fVar9 + fVar5;
    param_1[param_3 * 0x1a + 1] = fVar13 + fVar9;
    param_1[param_3 * 0x5a + 1] = fVar9 - fVar13;
    param_1[param_3 * 0x3a + 1] = fVar15 + fVar2;
    param_1[param_3 * 0x7a + 1] = fVar2 - fVar15;
    fVar2 = fVar20 + fVar4;
    fVar4 = fVar4 - fVar20;
    fVar5 = fVar3 + fVar10;
    fVar3 = fVar3 - fVar10;
    fVar58 = fVar58 + fVar129;
    param_1[param_3 * 0x4a] = fVar5 - fVar2;
    param_1[param_3 * 10] = fVar5 + fVar2;
    fVar5 = fVar7 + fVar18;
    fVar7 = fVar7 - fVar18;
    param_1[param_3 * 0x6a] = fVar3 - fVar7;
    param_1[param_3 * 0x2a] = fVar7 + fVar3;
    fVar2 = fVar6 + fVar12;
    fVar6 = fVar6 - fVar12;
    fVar48 = fVar48 + fVar131;
    param_1[param_3 * 10 + 1] = fVar5 + fVar2;
    fVar94 = fVar94 + fVar121;
    param_1[param_3 * 0x4a + 1] = fVar2 - fVar5;
    param_1[param_3 * 0x2a + 1] = fVar4 + fVar6;
    fVar8 = fVar8 + fVar98;
    param_1[param_3 * 0x6a + 1] = fVar6 - fVar4;
    fVar2 = fVar8 + fVar94;
    fVar24 = fVar24 + fVar125;
    fVar8 = fVar8 - fVar94;
    fVar95 = fVar95 + fVar120;
    fVar1 = fVar1 + fVar101;
    fVar3 = fVar95 + fVar1;
    fVar1 = fVar1 - fVar95;
    fVar10 = _DAT_005bbc04 * fVar58 + _DAT_005bbc28 * fVar48;
    fVar4 = fVar48 * _DAT_005bbc04 + fVar58 * _DAT_005bbc08;
    fVar5 = _DAT_005bbc28 * fVar44 + fVar24 * _DAT_005bbc04;
    fVar6 = fVar44 * _DAT_005bbc04 + _DAT_005bbc08 * fVar24;
    fVar9 = fVar10 + fVar6;
    fVar60 = fVar60 + fVar132;
    fVar10 = fVar10 - fVar6;
    fVar7 = fVar4 + fVar5;
    fVar72 = fVar72 + fVar68;
    fVar5 = fVar5 - fVar4;
    fVar136 = fVar136 + fVar79;
    fVar49 = fVar49 + fVar135;
    fVar4 = fVar60 - fVar136;
    fVar136 = fVar136 + fVar60;
    fVar6 = fVar49 + fVar72;
    fVar49 = fVar49 - fVar72;
    fVar16 = _DAT_005bbbf8 * fVar4 + _DAT_005bbbf4 * fVar49;
    fVar15 = fVar49 * _DAT_005bbbf8 + fVar4 * _DAT_005bbc1c;
    fVar17 = _DAT_005bbbfc * fVar6 + _DAT_005bbc00 * fVar136;
    fVar19 = fVar19 + fVar105;
    fVar6 = fVar6 * _DAT_005bbc00 + fVar136 * _DAT_005bbc18;
    fVar109 = fVar109 + fVar114;
    fVar4 = fVar19 - fVar109;
    fVar109 = fVar109 + fVar19;
    fVar116 = fVar116 + fVar115;
    fVar11 = fVar11 + fVar108;
    fVar12 = fVar11 + fVar116;
    fVar11 = fVar11 - fVar116;
    fVar14 = fVar11 * _DAT_005bbbf8 + _DAT_005bbbf4 * fVar4;
    fVar13 = _DAT_005bbc1c * fVar11 + _DAT_005bbbf8 * fVar4;
    fVar4 = _DAT_005bbc18 * fVar12 + _DAT_005bbc00 * fVar109;
    fVar11 = fVar109 * _DAT_005bbbfc + _DAT_005bbc00 * fVar12;
    fVar12 = fVar16 + fVar13;
    fVar13 = fVar13 - fVar16;
    fVar16 = fVar8 - fVar10;
    fVar10 = fVar10 + fVar8;
    param_1[param_3 * 0x52] = fVar10 - fVar12;
    param_1[param_3 * 0x12] = fVar10 + fVar12;
    fVar10 = fVar15 + fVar14;
    fVar15 = fVar15 - fVar14;
    param_1[param_3 * 0x72] = fVar16 - fVar15;
    param_1[param_3 * 0x32] = fVar15 + fVar16;
    fVar8 = fVar1 - fVar5;
    fVar5 = fVar5 + fVar1;
    param_1[param_3 * 0x12 + 1] = fVar10 + fVar5;
    param_1[param_3 * 0x52 + 1] = fVar5 - fVar10;
    param_1[param_3 * 0x32 + 1] = fVar13 + fVar8;
    param_1[param_3 * 0x72 + 1] = fVar8 - fVar13;
    fVar1 = fVar17 + fVar4;
    fVar4 = fVar4 - fVar17;
    fVar5 = fVar2 + fVar7;
    fVar2 = fVar2 - fVar7;
    param_1[param_3 * 0x42] = fVar5 - fVar1;
    param_1[param_3 * 2] = fVar5 + fVar1;
    fVar5 = fVar6 + fVar11;
    fVar6 = fVar6 - fVar11;
    param_1[param_3 * 0x62] = fVar2 - fVar6;
    param_1[param_3 * 0x22] = fVar6 + fVar2;
    fVar1 = fVar3 + fVar9;
    fVar3 = fVar3 - fVar9;
    param_1[param_3 * 2 + 1] = fVar5 + fVar1;
    param_1[param_3 * 0x42 + 1] = fVar1 - fVar5;
    param_1[param_3 * 0x22 + 1] = fVar4 + fVar3;
    param_1[param_3 * 0x62 + 1] = fVar3 - fVar4;
    param_1 = param_1 + param_5 * 2;
    param_2 = param_2 + 0x7e;
  }
  return;
}




/* Function: FUN_00576730 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00576730(float *param_1,float *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  
  for (; 0 < param_4; param_4 = param_4 + -1) {
    fVar2 = param_2[0x3f] * param_1[param_3 * 0x40 + 1] + param_2[0x3e] * param_1[param_3 * 0x40];
    fVar1 = param_1[param_3 * 0x40 + 1] * param_2[0x3e] - param_1[param_3 * 0x40] * param_2[0x3f];
    fVar10 = param_1[param_3 * 0x20 + 1] * param_2[0x1e] - param_2[0x1f] * param_1[param_3 * 0x20];
    fVar6 = param_2[0x1f] * param_1[param_3 * 0x20 + 1] + param_1[param_3 * 0x20] * param_2[0x1e];
    fVar8 = param_1[param_3 * 0x60 + 1] * param_2[0x5e] - param_2[0x5f] * param_1[param_3 * 0x60];
    fVar3 = param_2[0x5f] * param_1[param_3 * 0x60 + 1] + param_1[param_3 * 0x60] * param_2[0x5e];
    fVar5 = fVar6 + fVar3;
    fVar6 = fVar6 - fVar3;
    fVar3 = *param_1 - fVar2;
    fVar2 = fVar2 + *param_1;
    fVar4 = fVar2 - fVar5;
    fVar2 = fVar2 + fVar5;
    fVar7 = param_1[1] + fVar1;
    fVar1 = param_1[1] - fVar1;
    fVar5 = fVar6 + fVar1;
    fVar1 = fVar1 - fVar6;
    fVar9 = fVar10 - fVar8;
    fVar8 = fVar8 + fVar10;
    fVar6 = fVar8 + fVar7;
    fVar7 = fVar7 - fVar8;
    fVar8 = fVar3 + fVar9;
    fVar3 = fVar3 - fVar9;
    fVar10 = param_2[7] * param_1[param_3 * 8 + 1] + param_2[6] * param_1[param_3 * 8];
    fVar9 = param_1[param_3 * 8 + 1] * param_2[6] - param_1[param_3 * 8] * param_2[7];
    fVar12 = param_2[0x46] * param_1[param_3 * 0x48] + param_2[0x47] * param_1[param_3 * 0x48 + 1];
    fVar11 = param_1[param_3 * 0x48 + 1] * param_2[0x46] - param_1[param_3 * 0x48] * param_2[0x47];
    fVar13 = fVar10 - fVar12;
    fVar12 = fVar12 + fVar10;
    fVar10 = fVar9 + fVar11;
    fVar9 = fVar9 - fVar11;
    fVar15 = param_1[param_3 * 0x28 + 1] * param_2[0x27] + param_2[0x26] * param_1[param_3 * 0x28];
    fVar11 = param_2[0x26] * param_1[param_3 * 0x28 + 1] - param_1[param_3 * 0x28] * param_2[0x27];
    fVar17 = param_1[param_3 * 0x68 + 1] * param_2[0x66] - param_2[0x67] * param_1[param_3 * 0x68];
    fVar16 = param_1[param_3 * 0x68] * param_2[0x66] + param_2[0x67] * param_1[param_3 * 0x68 + 1];
    fVar14 = fVar11 + fVar17;
    fVar90 = fVar15 + fVar16;
    fVar15 = fVar15 - fVar16;
    fVar11 = fVar11 - fVar17;
    fVar16 = fVar12 - fVar90;
    fVar90 = fVar90 + fVar12;
    fVar96 = fVar10 + fVar14;
    fVar10 = fVar10 - fVar14;
    fVar95 = fVar16 - fVar10;
    fVar10 = fVar10 + fVar16;
    fVar12 = fVar13 - fVar11;
    fVar14 = fVar9 + fVar15;
    fVar9 = fVar9 - fVar15;
    fVar92 = _DAT_005bbc84 * fVar12 + _DAT_005bbc88 * fVar14;
    fVar91 = fVar12 * _DAT_005bbc88 + fVar14 * _DAT_005bbcc0;
    fVar11 = fVar11 + fVar13;
    fVar94 = _DAT_005bbc88 * fVar11 + _DAT_005bbc84 * fVar9;
    fVar93 = fVar11 * _DAT_005bbc84 + fVar9 * _DAT_005bbcbc;
    fVar15 = param_2[0xf] * param_1[param_3 * 0x10 + 1] + param_2[0xe] * param_1[param_3 * 0x10];
    fVar9 = param_1[param_3 * 0x10 + 1] * param_2[0xe] - param_2[0xf] * param_1[param_3 * 0x10];
    fVar13 = param_2[0x4f] * param_1[param_3 * 0x50 + 1] + param_2[0x4e] * param_1[param_3 * 0x50];
    fVar12 = param_1[param_3 * 0x50 + 1] * param_2[0x4e] - param_2[0x4f] * param_1[param_3 * 0x50];
    fVar14 = fVar15 - fVar13;
    fVar11 = fVar9 - fVar12;
    fVar18 = param_2[0x6f] * param_1[param_3 * 0x70 + 1] + param_2[0x6e] * param_1[param_3 * 0x70];
    fVar16 = param_2[0x6e] * param_1[param_3 * 0x70 + 1] - param_1[param_3 * 0x70] * param_2[0x6f];
    fVar19 = param_1[param_3 * 0x30 + 1] * param_2[0x2e] - param_2[0x2f] * param_1[param_3 * 0x30];
    fVar102 = param_1[param_3 * 0x30] * param_2[0x2e] + param_2[0x2f] * param_1[param_3 * 0x30 + 1];
    fVar97 = fVar16 + fVar19;
    fVar17 = fVar18 - fVar102;
    fVar16 = fVar16 - fVar19;
    fVar102 = fVar102 + fVar18;
    fVar15 = fVar15 + fVar13;
    fVar103 = fVar15 - fVar102;
    fVar9 = fVar9 + fVar12;
    fVar102 = fVar102 + fVar15;
    fVar104 = fVar97 + fVar9;
    fVar97 = fVar97 - fVar9;
    fVar9 = fVar17 + fVar16;
    fVar16 = fVar16 - fVar17;
    fVar12 = fVar14 + fVar11;
    fVar14 = fVar14 - fVar11;
    fVar99 = (fVar16 - fVar12) * _DAT_005bbc80;
    fVar100 = (fVar14 + fVar9) * _DAT_005bbc80;
    fVar98 = (fVar14 - fVar9) * _DAT_005bbc80;
    fVar101 = _DAT_005bbc80 * (fVar12 + fVar16);
    fVar13 = param_2[0x7d] * param_1[param_3 * 0x7e + 1] + param_1[param_3 * 0x7e] * param_2[0x7c];
    fVar12 = param_1[param_3 * 0x7e + 1] * param_2[0x7c] - param_2[0x7d] * param_1[param_3 * 0x7e];
    fVar15 = param_2[0x3d] * param_1[param_3 * 0x3e + 1] + param_2[0x3c] * param_1[param_3 * 0x3e];
    fVar9 = param_1[param_3 * 0x3e + 1] * param_2[0x3c] - param_2[0x3d] * param_1[param_3 * 0x3e];
    fVar14 = fVar15 + fVar13;
    fVar11 = fVar9 + fVar12;
    fVar16 = param_2[0x6d] * param_1[param_3 * 0x6e + 1] + param_1[param_3 * 0x6e] * param_2[0x6c];
    fVar20 = param_1[param_3 * 0x6e + 1] * param_2[0x6c] - param_2[0x6d] * param_1[param_3 * 0x6e];
    fVar19 = param_1[param_3 * 0x2e + 1] * param_2[0x2c] - param_2[0x2d] * param_1[param_3 * 0x2e];
    fVar18 = param_2[0x2d] * param_1[param_3 * 0x2e + 1] + param_1[param_3 * 0x2e] * param_2[0x2c];
    fVar17 = fVar16 - fVar18;
    fVar18 = fVar18 + fVar16;
    fVar16 = fVar20 + fVar19;
    fVar20 = fVar20 - fVar19;
    fVar25 = param_1[param_3 * 0x1e + 1] * param_2[0x1d] + param_2[0x1c] * param_1[param_3 * 0x1e];
    fVar19 = param_2[0x1c] * param_1[param_3 * 0x1e + 1] - param_1[param_3 * 0x1e] * param_2[0x1d];
    fVar23 = param_2[0x5d] * param_1[param_3 * 0x5e + 1] + param_2[0x5c] * param_1[param_3 * 0x5e];
    fVar22 = param_1[param_3 * 0x5e + 1] * param_2[0x5c] - param_2[0x5d] * param_1[param_3 * 0x5e];
    fVar24 = fVar23 + fVar25;
    fVar21 = fVar22 + fVar19;
    fVar27 = param_2[0xd] * param_1[param_3 * 0xe + 1] + param_1[param_3 * 0xe] * param_2[0xc];
    fVar26 = param_1[param_3 * 0xe + 1] * param_2[0xc] - param_2[0xd] * param_1[param_3 * 0xe];
    fVar28 = param_1[param_3 * 0x4e + 1] * param_2[0x4c] - param_2[0x4d] * param_1[param_3 * 0x4e];
    fVar29 = param_2[0x4d] * param_1[param_3 * 0x4e + 1] + param_1[param_3 * 0x4e] * param_2[0x4c];
    fVar30 = fVar27 - fVar29;
    fVar29 = fVar29 + fVar27;
    fVar27 = fVar26 + fVar28;
    fVar26 = fVar26 - fVar28;
    fVar28 = fVar14 - fVar24;
    fVar24 = fVar24 + fVar14;
    fVar14 = fVar18 + fVar29;
    fVar29 = fVar29 - fVar18;
    fVar18 = fVar24 + fVar14;
    fVar13 = fVar13 - fVar15;
    fVar24 = fVar24 - fVar14;
    fVar14 = fVar16 + fVar27;
    fVar16 = fVar16 - fVar27;
    fVar15 = fVar28 + fVar16;
    fVar28 = fVar28 - fVar16;
    fVar16 = fVar11 - fVar21;
    fVar21 = fVar21 + fVar11;
    fVar27 = fVar21 - fVar14;
    fVar21 = fVar21 + fVar14;
    fVar11 = fVar16 - fVar29;
    fVar29 = fVar29 + fVar16;
    fVar19 = fVar19 - fVar22;
    fVar14 = fVar13 - fVar19;
    fVar19 = fVar19 + fVar13;
    fVar25 = fVar25 - fVar23;
    fVar12 = fVar12 - fVar9;
    fVar9 = fVar12 - fVar25;
    fVar12 = fVar12 + fVar25;
    fVar16 = fVar20 - fVar17;
    fVar17 = fVar17 + fVar20;
    fVar13 = fVar30 - fVar26;
    fVar26 = fVar26 + fVar30;
    fVar106 = (fVar26 + fVar16) * _DAT_005bbc80;
    fVar107 = (fVar16 - fVar26) * _DAT_005bbc80;
    fVar108 = (fVar13 - fVar17) * _DAT_005bbc80;
    fVar105 = _DAT_005bbc80 * (fVar17 + fVar13);
    fVar16 = param_2[5] * param_1[param_3 * 6 + 1] + param_1[param_3 * 6] * param_2[4];
    fVar17 = param_1[param_3 * 6 + 1] * param_2[4] - param_2[5] * param_1[param_3 * 6];
    fVar13 = param_1[param_3 * 0x46 + 1] * param_2[0x44] - param_2[0x45] * param_1[param_3 * 0x46];
    fVar22 = param_1[param_3 * 0x46] * param_2[0x44] + param_2[0x45] * param_1[param_3 * 0x46 + 1];
    fVar20 = fVar16 - fVar22;
    fVar22 = fVar22 + fVar16;
    fVar16 = fVar17 + fVar13;
    fVar17 = fVar17 - fVar13;
    fVar13 = param_2[0x14] * param_1[param_3 * 0x16 + 1] - param_1[param_3 * 0x16] * param_2[0x15];
    fVar25 = param_1[param_3 * 0x16 + 1] * param_2[0x15] + param_2[0x14] * param_1[param_3 * 0x16];
    fVar23 = param_1[param_3 * 0x56 + 1] * param_2[0x54] - param_2[0x55] * param_1[param_3 * 0x56];
    fVar26 = param_1[param_3 * 0x56] * param_2[0x54] + param_2[0x55] * param_1[param_3 * 0x56 + 1];
    fVar30 = fVar25 - fVar26;
    fVar26 = fVar26 + fVar25;
    fVar25 = fVar13 - fVar23;
    fVar23 = fVar23 + fVar13;
    fVar31 = param_1[param_3 * 0x26 + 1] * param_2[0x25] + param_2[0x24] * param_1[param_3 * 0x26];
    fVar32 = param_2[0x24] * param_1[param_3 * 0x26 + 1] - param_1[param_3 * 0x26] * param_2[0x25];
    fVar13 = param_1[param_3 * 0x66 + 1] * param_2[100] - param_2[0x65] * param_1[param_3 * 0x66];
    fVar34 = param_2[0x65] * param_1[param_3 * 0x66 + 1] + param_1[param_3 * 0x66] * param_2[100];
    fVar33 = fVar31 - fVar34;
    fVar34 = fVar34 + fVar31;
    fVar31 = fVar32 + fVar13;
    fVar32 = fVar32 - fVar13;
    fVar13 = param_2[0x74] * param_1[param_3 * 0x76 + 1] - param_1[param_3 * 0x76] * param_2[0x75];
    fVar35 = param_2[0x75] * param_1[param_3 * 0x76 + 1] + param_2[0x74] * param_1[param_3 * 0x76];
    fVar39 = param_2[0x34] * param_1[param_3 * 0x36 + 1] - param_1[param_3 * 0x36] * param_2[0x35];
    fVar37 = param_2[0x35] * param_1[param_3 * 0x36 + 1] + param_2[0x34] * param_1[param_3 * 0x36];
    fVar36 = fVar35 - fVar37;
    fVar37 = fVar37 + fVar35;
    fVar38 = fVar13 + fVar39;
    fVar35 = fVar26 + fVar37;
    fVar37 = fVar37 - fVar26;
    fVar13 = fVar13 - fVar39;
    fVar26 = fVar22 - fVar34;
    fVar34 = fVar34 + fVar22;
    fVar39 = fVar34 - fVar35;
    fVar35 = fVar35 + fVar34;
    fVar22 = fVar16 + fVar31;
    fVar16 = fVar16 - fVar31;
    fVar31 = fVar26 - fVar16;
    fVar16 = fVar16 + fVar26;
    fVar26 = fVar23 + fVar38;
    fVar38 = fVar38 - fVar23;
    fVar23 = fVar22 + fVar26;
    fVar26 = fVar26 - fVar22;
    fVar22 = fVar37 + fVar38;
    fVar40 = fVar36 - fVar25;
    fVar38 = fVar38 - fVar37;
    fVar34 = fVar30 + fVar13;
    fVar13 = fVar13 - fVar30;
    fVar115 = _DAT_005bbcc0 * fVar40 + _DAT_005bbc88 * fVar34;
    fVar114 = fVar40 * _DAT_005bbc88 + fVar34 * _DAT_005bbc84;
    fVar25 = fVar25 + fVar36;
    fVar116 = _DAT_005bbcbc * fVar25 + _DAT_005bbc84 * fVar13;
    fVar30 = fVar20 + fVar32;
    fVar20 = fVar20 - fVar32;
    fVar109 = fVar25 * _DAT_005bbc84 + fVar13 * _DAT_005bbc88;
    fVar13 = fVar17 - fVar33;
    fVar33 = fVar33 + fVar17;
    fVar110 = _DAT_005bbc84 * fVar20 + _DAT_005bbc88 * fVar33;
    fVar111 = fVar33 * _DAT_005bbcc0 + fVar20 * _DAT_005bbc88;
    fVar112 = _DAT_005bbc88 * fVar30 + _DAT_005bbc84 * fVar13;
    fVar113 = fVar30 * _DAT_005bbc84 + fVar13 * _DAT_005bbcbc;
    fVar17 = param_2[0x77] * param_1[param_3 * 0x78 + 1] + param_2[0x76] * param_1[param_3 * 0x78];
    fVar13 = param_2[0x76] * param_1[param_3 * 0x78 + 1] - param_1[param_3 * 0x78] * param_2[0x77];
    fVar25 = param_2[0x37] * param_1[param_3 * 0x38 + 1] + param_2[0x36] * param_1[param_3 * 0x38];
    fVar20 = param_1[param_3 * 0x38 + 1] * param_2[0x36] - param_1[param_3 * 0x38] * param_2[0x37];
    fVar30 = fVar17 - fVar25;
    fVar25 = fVar25 + fVar17;
    fVar17 = fVar13 + fVar20;
    fVar13 = fVar13 - fVar20;
    fVar33 = param_1[param_3 * 0x18 + 1] * param_2[0x17] + param_2[0x16] * param_1[param_3 * 0x18];
    fVar20 = param_2[0x16] * param_1[param_3 * 0x18 + 1] - param_1[param_3 * 0x18] * param_2[0x17];
    fVar34 = param_1[param_3 * 0x58 + 1] * param_2[0x56] - param_2[0x57] * param_1[param_3 * 0x58];
    fVar32 = param_1[param_3 * 0x58] * param_2[0x56] + param_2[0x57] * param_1[param_3 * 0x58 + 1];
    fVar121 = fVar33 + fVar32;
    fVar33 = fVar33 - fVar32;
    fVar32 = fVar20 + fVar34;
    fVar20 = fVar20 - fVar34;
    fVar34 = fVar25 - fVar121;
    fVar121 = fVar121 + fVar25;
    fVar89 = fVar17 + fVar32;
    fVar17 = fVar17 - fVar32;
    fVar122 = fVar34 + fVar17;
    fVar17 = fVar17 - fVar34;
    fVar25 = fVar30 - fVar20;
    fVar32 = fVar13 + fVar33;
    fVar13 = fVar13 - fVar33;
    fVar117 = _DAT_005bbc88 * fVar32 + _DAT_005bbcc0 * fVar25;
    fVar118 = fVar25 * _DAT_005bbc88 + fVar32 * _DAT_005bbc84;
    fVar20 = fVar20 + fVar30;
    fVar120 = _DAT_005bbcbc * fVar20 + _DAT_005bbc84 * fVar13;
    fVar119 = _DAT_005bbc84 * fVar20 + _DAT_005bbc88 * fVar13;
    fVar33 = param_2[0x7b] * param_1[param_3 * 0x7c + 1] + param_2[0x7a] * param_1[param_3 * 0x7c];
    fVar13 = param_1[param_3 * 0x7c + 1] * param_2[0x7a] - param_1[param_3 * 0x7c] * param_2[0x7b];
    fVar30 = param_2[0x3b] * param_1[param_3 * 0x3c + 1] + param_2[0x3a] * param_1[param_3 * 0x3c];
    fVar25 = param_1[param_3 * 0x3c + 1] * param_2[0x3a] - param_2[0x3b] * param_1[param_3 * 0x3c];
    fVar32 = fVar30 + fVar33;
    fVar20 = fVar25 + fVar13;
    fVar34 = param_2[0x6b] * param_1[param_3 * 0x6c + 1] + param_1[param_3 * 0x6c] * param_2[0x6a];
    fVar41 = param_1[param_3 * 0x6c + 1] * param_2[0x6a] - param_2[0x6b] * param_1[param_3 * 0x6c];
    fVar40 = param_1[param_3 * 0x2c + 1] * param_2[0x2a] - param_2[0x2b] * param_1[param_3 * 0x2c];
    fVar37 = param_2[0x2b] * param_1[param_3 * 0x2c + 1] + param_1[param_3 * 0x2c] * param_2[0x2a];
    fVar36 = fVar34 - fVar37;
    fVar37 = fVar37 + fVar34;
    fVar34 = fVar41 + fVar40;
    fVar41 = fVar41 - fVar40;
    fVar46 = param_1[param_3 * 0x1c + 1] * param_2[0x1b] + param_2[0x1a] * param_1[param_3 * 0x1c];
    fVar40 = param_2[0x1a] * param_1[param_3 * 0x1c + 1] - param_1[param_3 * 0x1c] * param_2[0x1b];
    fVar44 = param_2[0x5b] * param_1[param_3 * 0x5c + 1] + param_2[0x5a] * param_1[param_3 * 0x5c];
    fVar43 = param_1[param_3 * 0x5c + 1] * param_2[0x5a] - param_2[0x5b] * param_1[param_3 * 0x5c];
    fVar45 = fVar44 + fVar46;
    fVar42 = fVar43 + fVar40;
    fVar48 = param_2[0xb] * param_1[param_3 * 0xc + 1] + param_1[param_3 * 0xc] * param_2[10];
    fVar47 = param_1[param_3 * 0xc + 1] * param_2[10] - param_2[0xb] * param_1[param_3 * 0xc];
    fVar50 = param_1[param_3 * 0x4c + 1] * param_2[0x4a] - param_2[0x4b] * param_1[param_3 * 0x4c];
    fVar49 = param_2[0x4b] * param_1[param_3 * 0x4c + 1] + param_1[param_3 * 0x4c] * param_2[0x4a];
    fVar53 = fVar48 - fVar49;
    fVar49 = fVar49 + fVar48;
    fVar48 = fVar47 + fVar50;
    fVar47 = fVar47 - fVar50;
    fVar52 = fVar32 - fVar45;
    fVar45 = fVar45 + fVar32;
    fVar50 = fVar37 + fVar49;
    fVar49 = fVar49 - fVar37;
    fVar51 = fVar45 - fVar50;
    fVar37 = fVar20 + fVar42;
    fVar20 = fVar20 - fVar42;
    fVar42 = fVar20 - fVar49;
    fVar20 = fVar20 + fVar49;
    fVar32 = fVar34 - fVar48;
    fVar48 = fVar48 + fVar34;
    fVar13 = fVar13 - fVar25;
    fVar25 = fVar37 - fVar48;
    fVar34 = fVar52 - fVar32;
    fVar46 = fVar46 - fVar44;
    fVar32 = fVar32 + fVar52;
    fVar44 = fVar13 - fVar46;
    fVar13 = fVar13 + fVar46;
    fVar33 = fVar33 - fVar30;
    fVar40 = fVar40 - fVar43;
    fVar30 = fVar33 + fVar40;
    fVar33 = fVar33 - fVar40;
    fVar43 = fVar53 + fVar47;
    fVar53 = fVar53 - fVar47;
    fVar40 = fVar36 + fVar41;
    fVar41 = fVar41 - fVar36;
    fVar124 = (fVar53 + fVar40) * _DAT_005bbc80;
    fVar126 = (fVar53 - fVar40) * _DAT_005bbc80;
    fVar123 = (fVar43 + fVar41) * _DAT_005bbc80;
    fVar125 = _DAT_005bbc80 * (fVar41 - fVar43);
    fVar41 = param_1[param_3 * 4 + 1] * param_2[3] + param_2[2] * param_1[param_3 * 4];
    fVar43 = param_2[2] * param_1[param_3 * 4 + 1] - param_1[param_3 * 4] * param_2[3];
    fVar36 = param_2[0x43] * param_1[param_3 * 0x44 + 1] + param_2[0x42] * param_1[param_3 * 0x44];
    fVar47 = param_1[param_3 * 0x44 + 1] * param_2[0x42] - param_2[0x43] * param_1[param_3 * 0x44];
    fVar40 = fVar36 + fVar41;
    fVar46 = fVar47 + fVar43;
    fVar49 = param_2[0x73] * param_1[param_3 * 0x74 + 1] + param_1[param_3 * 0x74] * param_2[0x72];
    fVar55 = param_1[param_3 * 0x74 + 1] * param_2[0x72] - param_2[0x73] * param_1[param_3 * 0x74];
    fVar54 = param_1[param_3 * 0x34 + 1] * param_2[0x32] - param_2[0x33] * param_1[param_3 * 0x34];
    fVar53 = param_2[0x33] * param_1[param_3 * 0x34 + 1] + param_1[param_3 * 0x34] * param_2[0x32];
    fVar52 = fVar49 - fVar53;
    fVar53 = fVar53 + fVar49;
    fVar49 = fVar55 + fVar54;
    fVar55 = fVar55 - fVar54;
    fVar60 = param_1[param_3 * 0x24 + 1] * param_2[0x23] + param_2[0x22] * param_1[param_3 * 0x24];
    fVar54 = param_2[0x22] * param_1[param_3 * 0x24 + 1] - param_1[param_3 * 0x24] * param_2[0x23];
    fVar58 = param_2[99] * param_1[param_3 * 100 + 1] + param_2[0x62] * param_1[param_3 * 100];
    fVar57 = param_1[param_3 * 100 + 1] * param_2[0x62] - param_2[99] * param_1[param_3 * 100];
    fVar59 = fVar58 + fVar60;
    fVar56 = fVar57 + fVar54;
    fVar68 = param_2[0x13] * param_1[param_3 * 0x14 + 1] + param_1[param_3 * 0x14] * param_2[0x12];
    fVar61 = param_1[param_3 * 0x14 + 1] * param_2[0x12] - param_2[0x13] * param_1[param_3 * 0x14];
    fVar63 = param_1[param_3 * 0x54 + 1] * param_2[0x52] - param_2[0x53] * param_1[param_3 * 0x54];
    fVar62 = param_1[param_3 * 0x54] * param_2[0x52] + param_2[0x53] * param_1[param_3 * 0x54 + 1];
    fVar65 = fVar68 + fVar62;
    fVar68 = fVar68 - fVar62;
    fVar62 = fVar61 + fVar63;
    fVar61 = fVar61 - fVar63;
    fVar63 = fVar40 - fVar59;
    fVar59 = fVar59 + fVar40;
    fVar64 = fVar53 + fVar65;
    fVar65 = fVar65 - fVar53;
    fVar53 = fVar59 - fVar64;
    fVar66 = fVar46 + fVar56;
    fVar46 = fVar46 - fVar56;
    fVar56 = fVar46 - fVar65;
    fVar65 = fVar65 + fVar46;
    fVar40 = fVar49 + fVar62;
    fVar67 = fVar66 - fVar40;
    fVar49 = fVar49 - fVar62;
    fVar46 = fVar63 - fVar49;
    fVar54 = fVar54 - fVar57;
    fVar49 = fVar49 + fVar63;
    fVar41 = fVar41 - fVar36;
    fVar36 = fVar41 + fVar54;
    fVar41 = fVar41 - fVar54;
    fVar43 = fVar43 - fVar47;
    fVar60 = fVar60 - fVar58;
    fVar47 = fVar43 - fVar60;
    fVar43 = fVar43 + fVar60;
    fVar54 = fVar55 - fVar52;
    fVar52 = fVar52 + fVar55;
    fVar55 = fVar68 - fVar61;
    fVar61 = fVar61 + fVar68;
    fVar128 = (fVar61 + fVar54) * _DAT_005bbc80;
    fVar130 = (fVar54 - fVar61) * _DAT_005bbc80;
    fVar127 = (fVar55 - fVar52) * _DAT_005bbc80;
    fVar129 = _DAT_005bbc80 * (fVar52 + fVar55);
    fVar54 = *param_2 * param_1[param_3 * 2] + param_2[1] * param_1[param_3 * 2 + 1];
    fVar52 = param_1[param_3 * 2 + 1] * *param_2 - param_1[param_3 * 2] * param_2[1];
    fVar58 = param_2[0x40] * param_1[param_3 * 0x42] + param_2[0x41] * param_1[param_3 * 0x42 + 1];
    fVar60 = fVar54 + fVar58;
    fVar55 = param_1[param_3 * 0x42 + 1] * param_2[0x40] - param_1[param_3 * 0x42] * param_2[0x41];
    fVar57 = fVar55 + fVar52;
    fVar62 = param_2[0x71] * param_1[param_3 * 0x72 + 1] + param_2[0x70] * param_1[param_3 * 0x72];
    fVar63 = param_1[param_3 * 0x72 + 1] * param_2[0x70] - param_1[param_3 * 0x72] * param_2[0x71];
    fVar69 = param_2[0x30] * param_1[param_3 * 0x32] + param_2[0x31] * param_1[param_3 * 0x32 + 1];
    fVar61 = param_1[param_3 * 0x32 + 1] * param_2[0x30] - param_1[param_3 * 0x32] * param_2[0x31];
    fVar68 = fVar62 - fVar69;
    fVar69 = fVar69 + fVar62;
    fVar62 = fVar63 + fVar61;
    fVar63 = fVar63 - fVar61;
    fVar74 = param_1[param_3 * 0x22 + 1] * param_2[0x21] + param_2[0x20] * param_1[param_3 * 0x22];
    fVar61 = param_2[0x20] * param_1[param_3 * 0x22 + 1] - param_1[param_3 * 0x22] * param_2[0x21];
    fVar72 = param_2[0x61] * param_1[param_3 * 0x62 + 1] + param_2[0x60] * param_1[param_3 * 0x62];
    fVar71 = param_1[param_3 * 0x62 + 1] * param_2[0x60] - param_2[0x61] * param_1[param_3 * 0x62];
    fVar73 = fVar72 + fVar74;
    fVar70 = fVar71 + fVar61;
    fVar76 = param_2[0x11] * param_1[param_3 * 0x12 + 1] + param_2[0x10] * param_1[param_3 * 0x12];
    fVar75 = param_1[param_3 * 0x12 + 1] * param_2[0x10] - param_1[param_3 * 0x12] * param_2[0x11];
    fVar79 = param_2[0x50] * param_1[param_3 * 0x52] + param_2[0x51] * param_1[param_3 * 0x52 + 1];
    fVar77 = param_1[param_3 * 0x52 + 1] * param_2[0x50] - param_1[param_3 * 0x52] * param_2[0x51];
    fVar80 = fVar76 - fVar79;
    fVar79 = fVar79 + fVar76;
    fVar76 = fVar75 + fVar77;
    fVar75 = fVar75 - fVar77;
    fVar77 = fVar60 - fVar73;
    fVar73 = fVar73 + fVar60;
    fVar60 = fVar69 + fVar79;
    fVar79 = fVar79 - fVar69;
    fVar78 = fVar73 + fVar60;
    fVar73 = fVar73 - fVar60;
    fVar60 = fVar62 + fVar76;
    fVar62 = fVar62 - fVar76;
    fVar69 = fVar77 + fVar62;
    fVar77 = fVar77 - fVar62;
    fVar62 = fVar57 - fVar70;
    fVar70 = fVar70 + fVar57;
    fVar76 = fVar70 - fVar60;
    fVar60 = fVar60 + fVar70;
    fVar57 = fVar62 - fVar79;
    fVar79 = fVar79 + fVar62;
    fVar54 = fVar54 - fVar58;
    fVar61 = fVar61 - fVar71;
    fVar58 = fVar54 + fVar61;
    fVar54 = fVar54 - fVar61;
    fVar52 = fVar52 - fVar55;
    fVar74 = fVar74 - fVar72;
    fVar55 = fVar52 - fVar74;
    fVar52 = fVar52 + fVar74;
    fVar61 = fVar63 - fVar68;
    fVar68 = fVar68 + fVar63;
    fVar62 = fVar80 - fVar75;
    fVar75 = fVar75 + fVar80;
    fVar132 = (fVar75 + fVar61) * _DAT_005bbc80;
    fVar133 = (fVar61 - fVar75) * _DAT_005bbc80;
    fVar134 = (fVar68 + fVar62) * _DAT_005bbc80;
    fVar131 = (fVar62 - fVar68) * _DAT_005bbc80;
    fVar62 = param_2[9] * param_1[param_3 * 10 + 1] + param_1[param_3 * 10] * param_2[8];
    fVar63 = param_1[param_3 * 10 + 1] * param_2[8] - param_2[9] * param_1[param_3 * 10];
    fVar61 = param_1[param_3 * 0x4a + 1] * param_2[0x48] - param_2[0x49] * param_1[param_3 * 0x4a];
    fVar70 = param_2[0x49] * param_1[param_3 * 0x4a + 1] + param_1[param_3 * 0x4a] * param_2[0x48];
    fVar68 = fVar62 - fVar70;
    fVar70 = fVar70 + fVar62;
    fVar62 = fVar63 + fVar61;
    fVar63 = fVar63 - fVar61;
    fVar71 = param_1[param_3 * 0x1a + 1] * param_2[0x19] + param_2[0x18] * param_1[param_3 * 0x1a];
    fVar61 = param_2[0x18] * param_1[param_3 * 0x1a + 1] - param_1[param_3 * 0x1a] * param_2[0x19];
    fVar72 = param_1[param_3 * 0x5a + 1] * param_2[0x58] - param_2[0x59] * param_1[param_3 * 0x5a];
    fVar74 = param_2[0x59] * param_1[param_3 * 0x5a + 1] + param_1[param_3 * 0x5a] * param_2[0x58];
    fVar75 = fVar71 - fVar74;
    fVar74 = fVar74 + fVar71;
    fVar71 = fVar61 + fVar72;
    fVar61 = fVar61 - fVar72;
    fVar80 = param_1[param_3 * 0x2a + 1] * param_2[0x29] + param_2[0x28] * param_1[param_3 * 0x2a];
    fVar72 = param_2[0x28] * param_1[param_3 * 0x2a + 1] - param_1[param_3 * 0x2a] * param_2[0x29];
    fVar81 = param_1[param_3 * 0x6a + 1] * param_2[0x68] - param_2[0x69] * param_1[param_3 * 0x6a];
    fVar82 = param_2[0x69] * param_1[param_3 * 0x6a + 1] + param_1[param_3 * 0x6a] * param_2[0x68];
    fVar83 = fVar80 - fVar82;
    fVar82 = fVar82 + fVar80;
    fVar80 = fVar72 + fVar81;
    fVar72 = fVar72 - fVar81;
    fVar84 = param_1[param_3 * 0x7a + 1] * param_2[0x79] + param_2[0x78] * param_1[param_3 * 0x7a];
    fVar81 = param_2[0x78] * param_1[param_3 * 0x7a + 1] - param_1[param_3 * 0x7a] * param_2[0x79];
    fVar86 = param_1[param_3 * 0x3a + 1] * param_2[0x38] - param_2[0x39] * param_1[param_3 * 0x3a];
    fVar85 = param_2[0x39] * param_1[param_3 * 0x3a + 1] + param_1[param_3 * 0x3a] * param_2[0x38];
    fVar88 = fVar84 - fVar85;
    fVar85 = fVar85 + fVar84;
    fVar84 = fVar81 + fVar86;
    fVar81 = fVar81 - fVar86;
    fVar86 = fVar74 + fVar85;
    fVar85 = fVar85 - fVar74;
    fVar87 = fVar70 - fVar82;
    fVar82 = fVar82 + fVar70;
    fVar74 = fVar82 - fVar86;
    fVar86 = fVar86 + fVar82;
    fVar82 = fVar62 + fVar80;
    fVar62 = fVar62 - fVar80;
    fVar80 = fVar87 - fVar62;
    fVar62 = fVar62 + fVar87;
    fVar70 = fVar71 + fVar84;
    fVar84 = fVar84 - fVar71;
    fVar87 = fVar82 + fVar70;
    fVar135 = fVar88 - fVar61;
    fVar70 = fVar70 - fVar82;
    fVar71 = fVar85 + fVar84;
    fVar84 = fVar84 - fVar85;
    fVar82 = fVar75 + fVar81;
    fVar81 = fVar81 - fVar75;
    fVar85 = _DAT_005bbcc0 * fVar135 + _DAT_005bbc88 * fVar82;
    fVar82 = fVar135 * _DAT_005bbc88 + fVar82 * _DAT_005bbc84;
    fVar61 = fVar61 + fVar88;
    fVar75 = _DAT_005bbcbc * fVar61 + _DAT_005bbc84 * fVar81;
    fVar88 = fVar68 + fVar72;
    fVar61 = fVar61 * _DAT_005bbc84 + fVar81 * _DAT_005bbc88;
    fVar68 = fVar68 - fVar72;
    fVar72 = fVar63 + fVar83;
    fVar63 = fVar63 - fVar83;
    fVar81 = _DAT_005bbc84 * fVar68 + _DAT_005bbc88 * fVar72;
    fVar68 = fVar68 * _DAT_005bbc88 + _DAT_005bbcc0 * fVar72;
    fVar72 = _DAT_005bbc84 * fVar63 + _DAT_005bbc88 * fVar88;
    fVar136 = fVar2 + fVar102;
    fVar83 = fVar60 - fVar87;
    fVar87 = fVar87 + fVar60;
    fVar63 = fVar88 * _DAT_005bbc84 + _DAT_005bbcbc * fVar63;
    fVar60 = fVar90 + fVar121;
    fVar137 = fVar136 + fVar60;
    fVar136 = fVar136 - fVar60;
    fVar88 = fVar21 + fVar23;
    fVar21 = fVar21 - fVar23;
    fVar135 = fVar88 + fVar87;
    fVar37 = fVar37 + fVar48;
    fVar88 = fVar88 - fVar87;
    fVar23 = fVar96 + fVar89;
    fVar48 = fVar6 + fVar104;
    fVar60 = fVar23 + fVar48;
    fVar48 = fVar48 - fVar23;
    fVar45 = fVar45 + fVar50;
    fVar59 = fVar59 + fVar64;
    fVar23 = fVar59 - fVar45;
    fVar59 = fVar59 + fVar45;
    fVar50 = fVar78 + fVar86;
    fVar78 = fVar78 - fVar86;
    fVar45 = fVar78 + fVar83;
    fVar78 = fVar78 - fVar83;
    fVar64 = fVar18 - fVar35;
    fVar35 = fVar35 + fVar18;
    fVar18 = fVar50 + fVar35;
    fVar50 = fVar50 - fVar35;
    fVar35 = fVar64 + fVar21;
    fVar21 = fVar21 - fVar64;
    fVar64 = fVar137 - fVar59;
    fVar59 = fVar59 + fVar137;
    fVar66 = fVar66 + fVar40;
    fVar40 = fVar37 - fVar66;
    fVar66 = fVar66 + fVar37;
    param_1[param_3 * 0x40] = fVar59 - fVar18;
    *param_1 = fVar59 + fVar18;
    fVar18 = fVar136 + fVar40;
    param_1[param_3 * 0x60] = fVar64 - fVar88;
    param_1[param_3 * 0x20] = fVar64 + fVar88;
    fVar37 = (fVar35 + fVar78) * _DAT_005bbc80;
    param_1[param_3 * 0x50] = fVar18 - fVar37;
    param_1[param_3 * 0x10] = fVar37 + fVar18;
    fVar18 = (fVar78 - fVar35) * _DAT_005bbc80;
    fVar35 = fVar48 + fVar23;
    fVar48 = fVar48 - fVar23;
    param_1[param_3 * 0x30 + 1] = fVar18 + fVar48;
    param_1[param_3 * 0x70 + 1] = fVar48 - fVar18;
    fVar18 = fVar60 - fVar66;
    fVar66 = fVar66 + fVar60;
    param_1[1] = fVar135 + fVar66;
    param_1[param_3 * 0x40 + 1] = fVar66 - fVar135;
    param_1[param_3 * 0x20 + 1] = fVar50 + fVar18;
    param_1[param_3 * 0x60 + 1] = fVar18 - fVar50;
    fVar18 = (fVar45 + fVar21) * _DAT_005bbc80;
    fVar21 = (fVar21 - fVar45) * _DAT_005bbc80;
    param_1[param_3 * 0x10 + 1] = fVar18 + fVar35;
    param_1[param_3 * 0x50 + 1] = fVar35 - fVar18;
    fVar136 = fVar136 - fVar40;
    param_1[param_3 * 0x70] = fVar136 - fVar21;
    fVar89 = fVar89 - fVar96;
    param_1[param_3 * 0x30] = fVar136 + fVar21;
    fVar2 = fVar2 - fVar102;
    fVar18 = fVar2 + fVar89;
    fVar2 = fVar2 - fVar89;
    fVar21 = fVar53 - fVar67;
    fVar23 = fVar51 + fVar25;
    fVar25 = fVar25 - fVar51;
    fVar67 = fVar67 + fVar53;
    fVar37 = (fVar21 + fVar23) * _DAT_005bbc80;
    fVar35 = (fVar21 - fVar23) * _DAT_005bbc80;
    fVar90 = fVar90 - fVar121;
    fVar40 = (fVar25 - fVar67) * _DAT_005bbc80;
    fVar6 = fVar6 - fVar104;
    fVar25 = (fVar67 + fVar25) * _DAT_005bbc80;
    fVar21 = fVar90 + fVar6;
    fVar6 = fVar6 - fVar90;
    fVar45 = fVar24 + fVar26;
    fVar24 = fVar24 - fVar26;
    fVar23 = fVar27 + fVar39;
    fVar27 = fVar27 - fVar39;
    fVar26 = _DAT_005bbcbc * fVar24 + _DAT_005bbc84 * fVar27;
    fVar27 = fVar24 * _DAT_005bbc84 + fVar27 * _DAT_005bbc88;
    fVar53 = _DAT_005bbcc0 * fVar45 + _DAT_005bbc88 * fVar23;
    fVar39 = fVar45 * _DAT_005bbc88 + fVar23 * _DAT_005bbc84;
    fVar23 = fVar76 - fVar74;
    fVar24 = fVar73 - fVar70;
    fVar73 = fVar73 + fVar70;
    fVar45 = _DAT_005bbc88 * fVar24 + _DAT_005bbc84 * fVar23;
    fVar74 = fVar74 + fVar76;
    fVar51 = fVar23 * _DAT_005bbcbc + fVar24 * _DAT_005bbc84;
    fVar23 = _DAT_005bbc84 * fVar73 + _DAT_005bbc88 * fVar74;
    fVar48 = fVar26 - fVar45;
    fVar24 = fVar73 * _DAT_005bbc88 + _DAT_005bbcc0 * fVar74;
    fVar50 = fVar2 - fVar40;
    param_1[param_3 * 0x78] = fVar50 - fVar48;
    fVar2 = fVar2 + fVar40;
    fVar26 = fVar26 + fVar45;
    fVar40 = fVar27 + fVar51;
    fVar51 = fVar51 - fVar27;
    param_1[param_3 * 0x38] = fVar50 + fVar48;
    param_1[param_3 * 0x58] = fVar2 - fVar40;
    fVar27 = fVar6 - fVar35;
    fVar6 = fVar6 + fVar35;
    param_1[param_3 * 0x18] = fVar2 + fVar40;
    fVar35 = fVar43 - fVar128;
    param_1[param_3 * 0x38 + 1] = fVar51 + fVar27;
    param_1[param_3 * 0x78 + 1] = fVar27 - fVar51;
    param_1[param_3 * 0x18 + 1] = fVar26 + fVar6;
    param_1[param_3 * 0x58 + 1] = fVar6 - fVar26;
    fVar6 = fVar18 + fVar37;
    fVar18 = fVar18 - fVar37;
    fVar2 = fVar53 - fVar23;
    fVar23 = fVar23 + fVar53;
    fVar27 = fVar13 - fVar123;
    param_1[param_3 * 0x68] = fVar18 - fVar2;
    param_1[param_3 * 0x28] = fVar2 + fVar18;
    fVar2 = fVar39 + fVar24;
    fVar24 = fVar24 - fVar39;
    param_1[param_3 * 0x48] = fVar6 - fVar2;
    param_1[param_3 * 8] = fVar2 + fVar6;
    fVar2 = fVar21 - fVar25;
    fVar21 = fVar21 + fVar25;
    fVar25 = fVar33 - fVar124;
    param_1[param_3 * 0x28 + 1] = fVar24 + fVar2;
    fVar6 = fVar117 - fVar92;
    param_1[param_3 * 0x68 + 1] = fVar2 - fVar24;
    param_1[param_3 * 8 + 1] = fVar23 + fVar21;
    fVar18 = fVar3 - fVar100;
    param_1[param_3 * 0x48 + 1] = fVar21 - fVar23;
    fVar2 = fVar18 + fVar6;
    fVar26 = fVar41 - fVar129;
    fVar18 = fVar18 - fVar6;
    fVar6 = fVar91 - fVar118;
    fVar21 = fVar5 - fVar101;
    fVar23 = fVar6 + fVar21;
    fVar21 = fVar21 - fVar6;
    fVar37 = _DAT_005bbc7c * fVar27 + _DAT_005bbcb8 * fVar25;
    fVar24 = fVar25 * _DAT_005bbc7c + fVar27 * _DAT_005bbc78;
    fVar6 = _DAT_005bbcb8 * fVar35 + fVar26 * _DAT_005bbc7c;
    fVar25 = fVar35 * _DAT_005bbc7c + _DAT_005bbc78 * fVar26;
    fVar27 = fVar37 + fVar25;
    fVar37 = fVar37 - fVar25;
    fVar25 = fVar54 - fVar134;
    fVar26 = fVar24 + fVar6;
    fVar35 = fVar68 - fVar82;
    fVar6 = fVar6 - fVar24;
    fVar24 = fVar85 - fVar81;
    fVar40 = fVar25 + fVar24;
    fVar25 = fVar25 - fVar24;
    fVar24 = fVar52 - fVar132;
    fVar39 = fVar24 + fVar35;
    fVar24 = fVar24 - fVar35;
    fVar50 = _DAT_005bbcb4 * fVar24 + _DAT_005bbc74 * fVar25;
    fVar48 = fVar24 * _DAT_005bbc74 + fVar25 * _DAT_005bbc70;
    fVar53 = _DAT_005bbcb0 * fVar39 + _DAT_005bbc6c * fVar40;
    fVar25 = fVar14 - fVar105;
    fVar51 = fVar39 * _DAT_005bbc6c + fVar40 * _DAT_005bbc68;
    fVar39 = fVar115 - fVar110;
    fVar24 = fVar25 - fVar39;
    fVar39 = fVar39 + fVar25;
    fVar25 = fVar111 - fVar114;
    fVar35 = fVar12 - fVar106;
    fVar59 = fVar35 + fVar25;
    fVar35 = fVar35 - fVar25;
    fVar40 = _DAT_005bbc70 * fVar35 + _DAT_005bbc74 * fVar24;
    fVar35 = fVar35 * _DAT_005bbc74 + _DAT_005bbcb4 * fVar24;
    fVar25 = _DAT_005bbc68 * fVar59 + _DAT_005bbc6c * fVar39;
    fVar45 = fVar18 - fVar37;
    fVar24 = _DAT_005bbc6c * fVar59 + fVar39 * _DAT_005bbcb0;
    fVar37 = fVar37 + fVar18;
    fVar39 = fVar50 - fVar40;
    fVar40 = fVar40 + fVar50;
    fVar43 = fVar43 + fVar128;
    param_1[param_3 * 0x5a] = fVar37 - fVar40;
    param_1[param_3 * 0x1a] = fVar40 + fVar37;
    fVar18 = fVar35 - fVar48;
    fVar35 = fVar35 + fVar48;
    param_1[param_3 * 0x7a] = fVar45 - fVar18;
    param_1[param_3 * 0x3a] = fVar18 + fVar45;
    fVar18 = fVar21 - fVar6;
    fVar6 = fVar6 + fVar21;
    param_1[param_3 * 0x1a + 1] = fVar35 + fVar6;
    param_1[param_3 * 0x5a + 1] = fVar6 - fVar35;
    param_1[param_3 * 0x3a + 1] = fVar39 + fVar18;
    param_1[param_3 * 0x7a + 1] = fVar18 - fVar39;
    fVar6 = fVar53 - fVar25;
    fVar25 = fVar25 + fVar53;
    fVar18 = fVar2 + fVar26;
    fVar2 = fVar2 - fVar26;
    fVar13 = fVar13 + fVar123;
    param_1[param_3 * 0x4a] = fVar18 - fVar25;
    param_1[param_3 * 10] = fVar18 + fVar25;
    fVar18 = fVar24 - fVar51;
    fVar24 = fVar24 + fVar51;
    param_1[param_3 * 0x6a] = fVar2 - fVar18;
    param_1[param_3 * 0x2a] = fVar18 + fVar2;
    fVar2 = fVar23 + fVar27;
    fVar23 = fVar23 - fVar27;
    fVar33 = fVar33 + fVar124;
    param_1[param_3 * 10 + 1] = fVar24 + fVar2;
    fVar91 = fVar91 + fVar118;
    param_1[param_3 * 0x4a + 1] = fVar2 - fVar24;
    param_1[param_3 * 0x2a + 1] = fVar6 + fVar23;
    fVar3 = fVar3 + fVar100;
    param_1[param_3 * 0x6a + 1] = fVar23 - fVar6;
    fVar2 = fVar3 + fVar91;
    fVar41 = fVar41 + fVar129;
    fVar3 = fVar3 - fVar91;
    fVar92 = fVar92 + fVar117;
    fVar5 = fVar5 + fVar101;
    fVar6 = fVar92 + fVar5;
    fVar5 = fVar5 - fVar92;
    fVar24 = _DAT_005bbc64 * fVar13 + _DAT_005bbcac * fVar33;
    fVar23 = fVar33 * _DAT_005bbc64 + fVar13 * _DAT_005bbc60;
    fVar21 = _DAT_005bbcac * fVar43 + fVar41 * _DAT_005bbc64;
    fVar13 = fVar43 * _DAT_005bbc64 + _DAT_005bbc60 * fVar41;
    fVar18 = fVar24 + fVar13;
    fVar12 = fVar12 + fVar106;
    fVar24 = fVar24 - fVar13;
    fVar13 = fVar23 + fVar21;
    fVar114 = fVar114 + fVar111;
    fVar21 = fVar21 - fVar23;
    fVar115 = fVar115 + fVar110;
    fVar23 = fVar12 + fVar115;
    fVar12 = fVar12 - fVar115;
    fVar14 = fVar14 + fVar105;
    fVar27 = fVar14 + fVar114;
    fVar14 = fVar14 - fVar114;
    fVar25 = _DAT_005bbca8 * fVar14 + _DAT_005bbc5c * fVar12;
    fVar26 = fVar12 * _DAT_005bbc58 + fVar14 * _DAT_005bbc5c;
    fVar37 = _DAT_005bbca4 * fVar27 + _DAT_005bbc54 * fVar23;
    fVar85 = fVar85 + fVar81;
    fVar35 = fVar27 * _DAT_005bbc54 + fVar23 * _DAT_005bbc50;
    fVar52 = fVar52 + fVar132;
    fVar12 = fVar52 + fVar85;
    fVar52 = fVar52 - fVar85;
    fVar54 = fVar54 + fVar134;
    fVar82 = fVar82 + fVar68;
    fVar14 = fVar54 - fVar82;
    fVar82 = fVar82 + fVar54;
    fVar23 = fVar14 * _DAT_005bbc5c + _DAT_005bbca8 * fVar52;
    fVar27 = _DAT_005bbc58 * fVar14 + _DAT_005bbc5c * fVar52;
    fVar14 = _DAT_005bbc50 * fVar82 + _DAT_005bbc54 * fVar12;
    fVar33 = fVar3 + fVar24;
    fVar12 = _DAT_005bbc54 * fVar82 + fVar12 * _DAT_005bbca4;
    fVar3 = fVar3 - fVar24;
    fVar24 = fVar25 - fVar27;
    fVar27 = fVar27 + fVar25;
    param_1[param_3 * 0x72] = fVar3 - fVar24;
    param_1[param_3 * 0x32] = fVar24 + fVar3;
    fVar3 = fVar26 + fVar23;
    fVar23 = fVar23 - fVar26;
    param_1[param_3 * 0x52] = fVar33 - fVar3;
    param_1[param_3 * 0x12] = fVar3 + fVar33;
    fVar3 = fVar5 - fVar21;
    fVar21 = fVar21 + fVar5;
    param_1[param_3 * 0x32 + 1] = fVar23 + fVar3;
    param_1[param_3 * 0x72 + 1] = fVar3 - fVar23;
    param_1[param_3 * 0x12 + 1] = fVar27 + fVar21;
    param_1[param_3 * 0x52 + 1] = fVar21 - fVar27;
    fVar3 = fVar37 - fVar14;
    fVar14 = fVar14 + fVar37;
    fVar5 = fVar2 - fVar13;
    fVar13 = fVar13 + fVar2;
    param_1[param_3 * 0x62] = fVar5 - fVar3;
    param_1[param_3 * 0x22] = fVar5 + fVar3;
    fVar2 = fVar35 + fVar12;
    fVar12 = fVar12 - fVar35;
    param_1[param_3 * 0x42] = fVar13 - fVar2;
    param_1[param_3 * 2] = fVar2 + fVar13;
    fVar24 = _DAT_005bbc88;
    fVar23 = _DAT_005bbc84;
    fVar2 = fVar6 - fVar18;
    fVar18 = fVar18 + fVar6;
    param_1[param_3 * 0x22 + 1] = fVar12 + fVar2;
    fVar5 = _DAT_005bbc88;
    fVar3 = (fVar95 + fVar122) * _DAT_005bbc80;
    param_1[param_3 * 0x62 + 1] = fVar2 - fVar12;
    fVar6 = _DAT_005bbcc0;
    param_1[param_3 * 2 + 1] = fVar14 + fVar18;
    fVar21 = fVar4 + fVar97;
    param_1[param_3 * 0x42 + 1] = fVar18 - fVar14;
    fVar2 = fVar21 + fVar3;
    fVar21 = fVar21 - fVar3;
    fVar13 = _DAT_005bbcc0 * fVar32 + fVar5 * fVar20;
    fVar5 = fVar49 * fVar24 + fVar6 * fVar65;
    fVar3 = fVar65 * _DAT_005bbc88 + fVar23 * fVar49;
    fVar18 = fVar13 + fVar3;
    fVar13 = fVar13 - fVar3;
    fVar12 = (fVar10 + fVar17) * _DAT_005bbc80;
    fVar3 = fVar24 * fVar32 + _DAT_005bbc84 * fVar20;
    fVar32 = fVar7 + fVar103;
    fVar6 = fVar12 + fVar32;
    fVar32 = fVar32 - fVar12;
    fVar14 = fVar5 + fVar3;
    fVar5 = fVar5 - fVar3;
    fVar23 = (fVar31 + fVar22) * _DAT_005bbc80;
    fVar12 = (fVar16 + fVar38) * _DAT_005bbc80;
    fVar3 = fVar15 - fVar23;
    fVar23 = fVar23 + fVar15;
    fVar15 = fVar29 + fVar12;
    fVar29 = fVar29 - fVar12;
    fVar26 = _DAT_005bbc78 * fVar29 + _DAT_005bbc7c * fVar3;
    fVar20 = fVar29 * _DAT_005bbc7c + fVar3 * _DAT_005bbcb8;
    fVar27 = _DAT_005bbc60 * fVar15 + _DAT_005bbc64 * fVar23;
    fVar12 = (fVar80 + fVar71) * _DAT_005bbc80;
    fVar3 = fVar23 * _DAT_005bbcac + fVar15 * _DAT_005bbc64;
    fVar23 = fVar69 + fVar12;
    fVar69 = fVar69 - fVar12;
    fVar12 = (fVar62 + fVar84) * _DAT_005bbc80;
    fVar24 = fVar79 + fVar12;
    fVar79 = fVar79 - fVar12;
    fVar15 = fVar79 * _DAT_005bbc7c + _DAT_005bbc78 * fVar69;
    fVar25 = _DAT_005bbcb8 * fVar79 + _DAT_005bbc7c * fVar69;
    fVar12 = _DAT_005bbcac * fVar24 + _DAT_005bbc64 * fVar23;
    fVar29 = _DAT_005bbc64 * fVar24 + _DAT_005bbc60 * fVar23;
    fVar24 = fVar26 + fVar25;
    fVar25 = fVar25 - fVar26;
    fVar23 = fVar21 - fVar13;
    fVar13 = fVar13 + fVar21;
    param_1[param_3 * 0x54] = fVar13 - fVar24;
    param_1[param_3 * 0x14] = fVar13 + fVar24;
    fVar13 = fVar20 + fVar15;
    fVar20 = fVar20 - fVar15;
    param_1[param_3 * 0x74] = fVar23 - fVar20;
    param_1[param_3 * 0x34] = fVar20 + fVar23;
    fVar15 = fVar32 - fVar5;
    fVar5 = fVar5 + fVar32;
    param_1[param_3 * 0x14 + 1] = fVar13 + fVar5;
    param_1[param_3 * 0x54 + 1] = fVar5 - fVar13;
    fVar13 = fVar2 + fVar14;
    param_1[param_3 * 0x34 + 1] = fVar25 + fVar15;
    param_1[param_3 * 0x74 + 1] = fVar15 - fVar25;
    fVar5 = fVar27 + fVar12;
    param_1[param_3 * 0x44] = fVar13 - fVar5;
    param_1[param_3 * 4] = fVar5 + fVar13;
    fVar2 = fVar2 - fVar14;
    fVar12 = fVar12 - fVar27;
    fVar5 = fVar3 + fVar29;
    fVar3 = fVar3 - fVar29;
    param_1[param_3 * 100] = fVar2 - fVar3;
    param_1[param_3 * 0x24] = fVar3 + fVar2;
    fVar15 = _DAT_005bbcbc;
    fVar3 = _DAT_005bbc88;
    fVar2 = fVar18 + fVar6;
    fVar6 = fVar6 - fVar18;
    param_1[param_3 * 4 + 1] = fVar5 + fVar2;
    fVar4 = fVar4 - fVar97;
    param_1[param_3 * 0x44 + 1] = fVar2 - fVar5;
    param_1[param_3 * 0x24 + 1] = fVar12 + fVar6;
    fVar14 = (fVar17 - fVar10) * _DAT_005bbc80;
    param_1[param_3 * 100 + 1] = fVar6 - fVar12;
    fVar13 = fVar4 - fVar14;
    fVar14 = fVar14 + fVar4;
    fVar10 = _DAT_005bbcbc * fVar34 + _DAT_005bbc84 * fVar42;
    fVar2 = fVar3 * fVar46 + _DAT_005bbc84 * fVar56;
    fVar4 = fVar46 * _DAT_005bbc84 + fVar15 * fVar56;
    fVar12 = fVar10 + fVar2;
    fVar6 = (fVar84 - fVar62) * _DAT_005bbc80;
    fVar10 = fVar10 - fVar2;
    fVar2 = (fVar95 - fVar122) * _DAT_005bbc80;
    fVar3 = _DAT_005bbc84 * fVar34 + fVar42 * _DAT_005bbc88;
    fVar7 = fVar7 - fVar103;
    fVar5 = fVar2 + fVar7;
    fVar7 = fVar7 - fVar2;
    fVar2 = fVar4 + fVar3;
    fVar4 = fVar4 - fVar3;
    fVar3 = (fVar80 - fVar71) * _DAT_005bbc80;
    fVar18 = fVar57 + fVar3;
    fVar57 = fVar57 - fVar3;
    fVar3 = fVar77 + fVar6;
    fVar77 = fVar77 - fVar6;
    fVar17 = _DAT_005bbc64 * fVar77 + _DAT_005bbc60 * fVar57;
    fVar15 = fVar77 * _DAT_005bbc60 + fVar57 * _DAT_005bbca0;
    fVar23 = _DAT_005bbc7c * fVar3 + _DAT_005bbc78 * fVar18;
    fVar6 = (fVar31 - fVar22) * _DAT_005bbc80;
    fVar21 = fVar18 * _DAT_005bbc9c + fVar3 * _DAT_005bbc78;
    fVar3 = fVar11 + fVar6;
    fVar11 = fVar11 - fVar6;
    fVar6 = (fVar38 - fVar16) * _DAT_005bbc80;
    fVar20 = fVar28 + fVar6;
    fVar28 = fVar28 - fVar6;
    fVar16 = _DAT_005bbca0 * fVar28 + _DAT_005bbc60 * fVar11;
    fVar18 = fVar28 * _DAT_005bbc60 + _DAT_005bbc64 * fVar11;
    fVar6 = _DAT_005bbc9c * fVar20 + _DAT_005bbc78 * fVar3;
    fVar3 = _DAT_005bbc78 * fVar20 + fVar3 * _DAT_005bbc7c;
    fVar20 = fVar13 - fVar10;
    fVar10 = fVar10 + fVar13;
    fVar11 = fVar16 - fVar17;
    fVar17 = fVar17 + fVar16;
    fVar13 = fVar36 - fVar130;
    param_1[param_3 * 0x7c] = fVar20 - fVar11;
    param_1[param_3 * 0x3c] = fVar11 + fVar20;
    fVar11 = fVar15 - fVar18;
    fVar18 = fVar18 + fVar15;
    param_1[param_3 * 0x5c] = fVar10 - fVar18;
    param_1[param_3 * 0x1c] = fVar18 + fVar10;
    fVar10 = fVar7 + fVar4;
    fVar7 = fVar7 - fVar4;
    param_1[param_3 * 0x3c + 1] = fVar11 + fVar7;
    param_1[param_3 * 0x7c + 1] = fVar7 - fVar11;
    param_1[param_3 * 0x1c + 1] = fVar17 + fVar10;
    param_1[param_3 * 0x5c + 1] = fVar10 - fVar17;
    fVar4 = fVar6 - fVar23;
    fVar6 = fVar6 + fVar23;
    fVar7 = fVar14 - fVar2;
    fVar2 = fVar2 + fVar14;
    fVar10 = fVar8 - fVar99;
    param_1[param_3 * 0x6c] = fVar7 - fVar4;
    param_1[param_3 * 0x2c] = fVar7 + fVar4;
    fVar4 = fVar21 - fVar3;
    fVar3 = fVar3 + fVar21;
    param_1[param_3 * 0x4c] = fVar2 - fVar3;
    param_1[param_3 * 0xc] = fVar3 + fVar2;
    fVar2 = fVar5 - fVar12;
    fVar5 = fVar5 + fVar12;
    param_1[param_3 * 0x2c + 1] = fVar4 + fVar2;
    fVar3 = fVar120 - fVar94;
    param_1[param_3 * 0x6c + 1] = fVar2 - fVar4;
    fVar7 = fVar44 - fVar126;
    param_1[param_3 * 0xc + 1] = fVar6 + fVar5;
    fVar14 = _DAT_005bbca0;
    param_1[param_3 * 0x4c + 1] = fVar5 - fVar6;
    fVar2 = fVar10 - fVar3;
    fVar12 = fVar30 - fVar125;
    fVar3 = fVar3 + fVar10;
    fVar4 = fVar93 - fVar119;
    fVar5 = fVar1 - fVar98;
    fVar6 = fVar4 + fVar5;
    fVar5 = fVar5 - fVar4;
    fVar11 = _DAT_005bbca0 * fVar12 + _DAT_005bbc60 * fVar7;
    fVar7 = fVar12 * _DAT_005bbc60 + fVar7 * _DAT_005bbc64;
    fVar10 = fVar47 - fVar127;
    fVar4 = _DAT_005bbc64 * fVar13 + _DAT_005bbc60 * fVar10;
    fVar13 = fVar13 * _DAT_005bbc60 + fVar10 * fVar14;
    fVar10 = fVar11 + fVar4;
    fVar14 = fVar58 - fVar133;
    fVar16 = fVar55 - fVar131;
    fVar11 = fVar11 - fVar4;
    fVar12 = fVar7 + fVar13;
    fVar15 = fVar63 - fVar61;
    fVar13 = fVar13 - fVar7;
    fVar7 = fVar75 - fVar72;
    fVar4 = fVar14 + fVar7;
    fVar14 = fVar14 - fVar7;
    fVar17 = fVar16 + fVar15;
    fVar16 = fVar16 - fVar15;
    fVar15 = _DAT_005bbc98 * fVar16 + _DAT_005bbc50 * fVar14;
    fVar14 = fVar16 * _DAT_005bbc50 + fVar14 * _DAT_005bbc54;
    fVar22 = _DAT_005bbc94 * fVar17 + _DAT_005bbc58 * fVar4;
    fVar7 = fVar116 - fVar112;
    fVar21 = fVar17 * _DAT_005bbc58 + fVar4 * _DAT_005bbc5c;
    fVar4 = fVar19 - fVar107;
    fVar17 = fVar4 + fVar7;
    fVar4 = fVar4 - fVar7;
    fVar16 = fVar9 - fVar108;
    fVar20 = fVar113 - fVar109;
    fVar7 = fVar16 - fVar20;
    fVar20 = fVar20 + fVar16;
    fVar16 = fVar7 * _DAT_005bbc50 + _DAT_005bbc98 * fVar4;
    fVar18 = _DAT_005bbc54 * fVar7 + _DAT_005bbc50 * fVar4;
    fVar7 = _DAT_005bbc5c * fVar20 + _DAT_005bbc58 * fVar17;
    fVar4 = _DAT_005bbc58 * fVar20 + _DAT_005bbc94 * fVar17;
    fVar20 = fVar2 - fVar11;
    fVar11 = fVar11 + fVar2;
    fVar17 = fVar15 - fVar18;
    fVar18 = fVar18 + fVar15;
    fVar36 = fVar36 + fVar130;
    param_1[param_3 * 0x5e] = fVar11 - fVar18;
    param_1[param_3 * 0x1e] = fVar18 + fVar11;
    fVar2 = fVar16 - fVar14;
    fVar16 = fVar16 + fVar14;
    param_1[param_3 * 0x7e] = fVar20 - fVar2;
    param_1[param_3 * 0x3e] = fVar2 + fVar20;
    fVar2 = fVar5 - fVar13;
    fVar13 = fVar13 + fVar5;
    param_1[param_3 * 0x1e + 1] = fVar16 + fVar13;
    param_1[param_3 * 0x5e + 1] = fVar13 - fVar16;
    param_1[param_3 * 0x3e + 1] = fVar17 + fVar2;
    param_1[param_3 * 0x7e + 1] = fVar2 - fVar17;
    fVar5 = fVar22 - fVar7;
    fVar7 = fVar7 + fVar22;
    fVar2 = fVar3 + fVar12;
    fVar3 = fVar3 - fVar12;
    param_1[param_3 * 0x4e] = fVar2 - fVar7;
    param_1[param_3 * 0xe] = fVar2 + fVar7;
    fVar2 = fVar4 - fVar21;
    fVar4 = fVar4 + fVar21;
    param_1[param_3 * 0x6e] = fVar3 - fVar2;
    param_1[param_3 * 0x2e] = fVar2 + fVar3;
    fVar7 = _DAT_005bbc9c;
    fVar2 = fVar6 + fVar10;
    fVar6 = fVar6 - fVar10;
    param_1[param_3 * 0xe + 1] = fVar4 + fVar2;
    fVar93 = fVar93 + fVar119;
    param_1[param_3 * 0x4e + 1] = fVar2 - fVar4;
    fVar44 = fVar44 + fVar126;
    param_1[param_3 * 0x2e + 1] = fVar5 + fVar6;
    fVar8 = fVar8 + fVar99;
    param_1[param_3 * 0x6e + 1] = fVar6 - fVar5;
    fVar2 = fVar8 + fVar93;
    fVar30 = fVar30 + fVar125;
    fVar8 = fVar8 - fVar93;
    fVar94 = fVar94 + fVar120;
    fVar1 = fVar1 + fVar98;
    fVar3 = fVar94 + fVar1;
    fVar1 = fVar1 - fVar94;
    fVar10 = _DAT_005bbc9c * fVar30 + _DAT_005bbc78 * fVar44;
    fVar6 = fVar30 * _DAT_005bbc78 + fVar44 * _DAT_005bbc7c;
    fVar47 = fVar47 + fVar127;
    fVar4 = _DAT_005bbc7c * fVar36 + _DAT_005bbc78 * fVar47;
    fVar11 = fVar36 * _DAT_005bbc78 + fVar47 * fVar7;
    fVar5 = fVar10 + fVar4;
    fVar9 = fVar9 + fVar108;
    fVar10 = fVar10 - fVar4;
    fVar7 = fVar6 + fVar11;
    fVar109 = fVar109 + fVar113;
    fVar11 = fVar11 - fVar6;
    fVar116 = fVar116 + fVar112;
    fVar4 = fVar9 - fVar116;
    fVar116 = fVar116 + fVar9;
    fVar19 = fVar19 + fVar107;
    fVar6 = fVar19 + fVar109;
    fVar19 = fVar19 - fVar109;
    fVar13 = _DAT_005bbc90 * fVar19 + _DAT_005bbc68 * fVar4;
    fVar16 = fVar19 * _DAT_005bbc68 + fVar4 * _DAT_005bbc6c;
    fVar17 = _DAT_005bbc8c * fVar6 + _DAT_005bbc70 * fVar116;
    fVar55 = fVar55 + fVar131;
    fVar9 = fVar6 * _DAT_005bbc70 + fVar116 * _DAT_005bbc74;
    fVar75 = fVar75 + fVar72;
    fVar4 = fVar55 - fVar75;
    fVar75 = fVar75 + fVar55;
    fVar61 = fVar61 + fVar63;
    fVar58 = fVar58 + fVar133;
    fVar6 = fVar58 + fVar61;
    fVar58 = fVar58 - fVar61;
    fVar15 = fVar58 * _DAT_005bbc68 + _DAT_005bbc90 * fVar4;
    fVar12 = _DAT_005bbc6c * fVar58 + _DAT_005bbc68 * fVar4;
    fVar4 = _DAT_005bbc74 * fVar6 + _DAT_005bbc70 * fVar75;
    fVar6 = fVar75 * _DAT_005bbc8c + _DAT_005bbc70 * fVar6;
    fVar14 = fVar8 + fVar10;
    fVar8 = fVar8 - fVar10;
    fVar10 = fVar13 + fVar12;
    fVar13 = fVar13 - fVar12;
    param_1[param_3 * 0x76] = fVar8 - fVar13;
    param_1[param_3 * 0x36] = fVar13 + fVar8;
    fVar8 = fVar16 + fVar15;
    fVar15 = fVar15 - fVar16;
    param_1[param_3 * 0x56] = fVar14 - fVar8;
    param_1[param_3 * 0x16] = fVar8 + fVar14;
    fVar8 = fVar1 - fVar11;
    fVar11 = fVar11 + fVar1;
    param_1[param_3 * 0x36 + 1] = fVar15 + fVar8;
    param_1[param_3 * 0x76 + 1] = fVar8 - fVar15;
    param_1[param_3 * 0x16 + 1] = fVar10 + fVar11;
    param_1[param_3 * 0x56 + 1] = fVar11 - fVar10;
    fVar1 = fVar17 - fVar4;
    fVar4 = fVar4 + fVar17;
    fVar8 = fVar2 - fVar7;
    fVar7 = fVar7 + fVar2;
    param_1[param_3 * 0x66] = fVar8 - fVar1;
    param_1[param_3 * 0x26] = fVar8 + fVar1;
    fVar1 = fVar9 + fVar6;
    fVar6 = fVar6 - fVar9;
    param_1[param_3 * 0x46] = fVar7 - fVar1;
    param_1[param_3 * 6] = fVar1 + fVar7;
    fVar1 = fVar3 - fVar5;
    fVar5 = fVar5 + fVar3;
    param_1[param_3 * 0x26 + 1] = fVar6 + fVar1;
    param_1[param_3 * 0x66 + 1] = fVar1 - fVar6;
    param_1[param_3 * 6 + 1] = fVar4 + fVar5;
    param_1[param_3 * 0x46 + 1] = fVar5 - fVar4;
    param_1 = param_1 + param_5 * 2;
    param_2 = param_2 + 0x7e;
  }
  return;
}




/* Function: FUN_0057a4ec */

void FUN_0057a4ec(void *param_1)

{
  operator_delete__(param_1);
  return;
}




/* Function: FUN_0057a530 */

void FUN_0057a530(int param_1,int *param_2,int *param_3,uint *param_4,int *param_5,
                 undefined1 *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 local_4c;
  short sStack_3e;
  int local_3c [7];
  int local_20;
  
  *param_2 = 0x1101;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0x5622;
  *param_6 = 0;
  if (param_1 != 0) {
    piVar6 = (int *)(param_1 + 0xc);
    for (iVar5 = (*(int *)(param_1 + 4) + 1U & 0xfffffffe) - 4; iVar5 != 0;
        iVar5 = iVar5 + (-8 - (uVar1 + 1 & 0xfffffffe))) {
      iVar4 = *piVar6;
      uVar1 = piVar6[1];
      piVar7 = piVar6 + 2;
      if (iVar4 == DAT_005b3b30) {
        iVar4 = *piVar7;
        iVar2 = piVar6[3];
        local_4c = iVar4;
        if ((short)iVar4 == 1) {
          local_4c._2_2_ = (short)((uint)iVar4 >> 0x10);
          sStack_3e = (short)((uint)piVar6[5] >> 0x10);
          if (local_4c._2_2_ == 1) {
            *param_2 = (sStack_3e != 8) + 0x1100;
            *param_5 = iVar2;
          }
          else {
            *param_2 = (sStack_3e != 8) + 0x1102;
            *param_5 = iVar2;
          }
        }
LAB_0057a6c2:
        piVar7 = (int *)((int)piVar7 + uVar1);
      }
      else {
        if (iVar4 != DAT_005b3b28) {
          if (iVar4 == DAT_005b3b20) {
            piVar6 = piVar7;
            piVar8 = local_3c;
            for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar8 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar8 = piVar8 + 1;
            }
            *param_6 = local_20 != 0;
          }
          goto LAB_0057a6c2;
        }
        if ((short)local_4c == 1) {
          *param_4 = uVar1;
          piVar6 = malloc(uVar1 + 0x1f);
          *param_3 = (int)piVar6;
          if (piVar6 != (int *)0x0) {
            piVar8 = piVar7;
            for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *piVar6 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar6 = piVar6 + 1;
            }
            for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(char *)piVar6 = (char)*piVar8;
              piVar8 = (int *)((int)piVar8 + 1);
              piVar6 = (int *)((int)piVar6 + 1);
            }
          }
          puVar9 = (undefined4 *)(*param_3 + uVar1);
          for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          *(undefined2 *)puVar9 = 0;
          *(undefined1 *)((int)puVar9 + 2) = 0;
          goto LAB_0057a6c2;
        }
      }
      piVar6 = (int *)((int)piVar7 + (uVar1 & 1));
    }
  }
  return;
}




/* Function: FUN_0057a6f0 */

void FUN_0057a6f0(undefined4 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    free(param_2);
  }
  return;
}




/* Function: FUN_00580ba0 */

void FUN_00580ba0(void)

{
  thunk_FUN_00401560();
  return;
}




/* Function: FUN_00580bd0 */

void FUN_00580bd0(void)

{
  FUN_004f7ae0();
  return;
}




/* Function: FUN_00580be0 */

void FUN_00580be0(void)

{
  FUN_004f7ae0();
  return;
}




/* Function: FUN_00580c70 */

void FUN_00580c70(void)

{
  if (DAT_005b6040 != (undefined4 *)0x0) {
    (**(code **)*DAT_005b6040)(1);
  }
  DAT_005b6040 = (undefined4 *)0x0;
  return;
}




/* Function: FUN_00580c90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00580c90(void)

{
  operator_delete__(DAT_005b6064);
  DAT_005b6064 = (void *)0x0;
  _DAT_005b6068 = 0;
  DAT_005b606c = 0;
  return;
}




/* Function: FUN_00580cf0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00580cf0(void)

{
  if (DAT_005b6088 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(DAT_005b6088);
  }
  DAT_005b6088 = (void *)0x0;
  _DAT_005b608c = 0;
  _DAT_005b6090 = 0;
  return;
}




/* Function: FUN_00580d30 */

void FUN_00580d30(void)

{
  FUN_00469910();
  return;
}




/* Function: FUN_00580d40 */

void FUN_00580d40(void)

{
  ATL::CAtlComModule::Term((CAtlComModule *)&DAT_005b60d4);
  return;
}




/* Function: FUN_00580d4a */

void FUN_00580d4a(void)

{
  FUN_00493b11();
  return;
}




/* Function: FUN_00580d54 */

void FUN_00580d54(void)

{
  ATL::CAtlBaseModule::~CAtlBaseModule((CAtlBaseModule *)&DAT_005b6128);
  return;
}




/* Function: FUN_00580d60 */

void FUN_00580d60(void)

{
  HRESULT HVar1;
  
  HVar1 = VariantClear((VARIANTARG *)&DAT_005b2450);
  if (HVar1 < 0) {
    FUN_004d3810(HVar1);
  }
  return;
}




/* Function: FUN_00580d80 */

void FUN_00580d80(void)

{
  return;
}




/* Function: FUN_00580d90 */

void FUN_00580d90(void)

{
  return;
}




/* Function: FUN_00580da0 */

void FUN_00580da0(void)

{
  return;
}




/* Function: FUN_00580db0 */

void FUN_00580db0(void)

{
  return;
}




/* Function: FUN_00580dc0 */

void FUN_00580dc0(void)

{
  return;
}




/* Function: FUN_00580dd0 */

void FUN_00580dd0(void)

{
  return;
}




/* Function: FUN_00580de0 */

void FUN_00580de0(void)

{
  return;
}




/* Function: FUN_00580df0 */

void FUN_00580df0(void)

{
  return;
}





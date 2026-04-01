/* globals_05 functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_004c89e3 */

void FUN_004c89e3(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_c;
  int local_8;
  
  if (param_3 < param_4) {
    local_8 = param_3 * 2;
    piVar6 = (int *)(param_3 * 0x20 + 0xc + param_2);
    do {
      piVar5 = (int *)0x0;
      iVar4 = 0;
      local_c = param_3;
      if (param_4 < local_8) {
        if (0 < local_8) {
          piVar1 = (int *)(param_2 + 0x18);
          do {
            if (iVar4 < *piVar1) {
              piVar5 = piVar1 + -6;
              iVar4 = *piVar1;
            }
            piVar1 = piVar1 + 8;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
      }
      else if (0 < local_8) {
        piVar1 = (int *)(param_2 + 0x1c);
        do {
          if ((iVar4 < *piVar1) && (0 < piVar1[-1])) {
            piVar5 = piVar1 + -7;
            iVar4 = *piVar1;
          }
          piVar1 = piVar1 + 8;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      if (piVar5 == (int *)0x0) {
        return;
      }
      piVar6[-2] = piVar5[1];
      *piVar6 = piVar5[3];
      piVar6[2] = piVar5[5];
      piVar6[-3] = *piVar5;
      piVar6[-1] = piVar5[2];
      piVar6[1] = piVar5[4];
      iVar2 = (piVar5[1] - *piVar5) * 0x10;
      iVar4 = (piVar5[3] - piVar5[2]) * 0xc;
      cVar3 = iVar2 <= iVar4;
      if (!(bool)cVar3) {
        iVar4 = iVar2;
      }
      if (iVar4 < (piVar5[5] - piVar5[4]) * 8) {
        cVar3 = '\x02';
      }
      if (cVar3 == '\0') {
        iVar4 = (piVar5[1] + *piVar5) / 2;
        piVar5[1] = iVar4;
        piVar6[-3] = iVar4 + 1;
      }
      else if (cVar3 == '\x01') {
        iVar4 = (piVar5[3] + piVar5[2]) / 2;
        piVar5[3] = iVar4;
        piVar6[-1] = iVar4 + 1;
      }
      else if (cVar3 == '\x02') {
        iVar4 = (piVar5[5] + piVar5[4]) / 2;
        piVar5[5] = iVar4;
        piVar6[1] = iVar4 + 1;
      }
      FUN_004c86ab();
      FUN_004c86ab();
      local_8 = local_8 + 2;
      param_3 = param_3 + 1;
      piVar6 = piVar6 + 8;
    } while (param_3 < param_4);
  }
  return;
}




/* Function: FUN_004c8b36 */

void FUN_004c8b36(int param_1)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  uint uVar5;
  int local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  ushort *local_10;
  int local_c;
  ushort *local_8;
  
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  iVar3 = in_EAX[2];
  iVar1 = in_EAX[4];
  iVar2 = *in_EAX;
  if (iVar2 <= in_EAX[1]) {
    local_18 = iVar2 * 8 + 4;
    do {
      if (iVar3 <= in_EAX[3]) {
        local_14 = iVar3 * 4 + 2;
        local_10 = (ushort *)
                   (*(int *)(*(int *)(*(int *)(unaff_ESI + 0x1a4) + 0x18) + iVar2 * 4) +
                   (iVar3 * 0x20 + iVar1) * 2);
        iVar4 = (in_EAX[3] - iVar3) + 1;
        do {
          local_8 = local_10;
          if (iVar1 <= in_EAX[5]) {
            local_c = iVar1 * 8 + 4;
            local_38 = (in_EAX[5] - iVar1) + 1;
            do {
              uVar5 = (uint)*local_8;
              local_8 = local_8 + 1;
              if (uVar5 != 0) {
                local_1c = local_1c + uVar5;
                local_24 = local_24 + local_14 * uVar5;
                local_20 = local_20 + local_18 * uVar5;
                local_28 = local_28 + local_c * uVar5;
              }
              local_c = local_c + 8;
              local_38 = local_38 + -1;
            } while (local_38 != 0);
          }
          local_10 = local_10 + 0x20;
          local_14 = local_14 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_18 = local_18 + 8;
      iVar2 = iVar2 + 1;
    } while (iVar2 <= in_EAX[1]);
  }
  iVar3 = local_1c >> 1;
  *(char *)(param_1 + **(int **)(unaff_ESI + 0x74)) = (char)((local_20 + iVar3) / local_1c);
  *(char *)(param_1 + *(int *)(*(int *)(unaff_ESI + 0x74) + 4)) =
       (char)((local_24 + iVar3) / local_1c);
  *(char *)(param_1 + *(int *)(*(int *)(unaff_ESI + 0x74) + 8)) =
       (char)((local_28 + iVar3) / local_1c);
  return;
}




/* Function: FUN_004c8c6e */

void FUN_004c8c6e(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_EDI;
  int iStack00000004;
  
  puVar1 = (undefined4 *)(**(code **)unaff_EDI[1])();
  puVar1[1] = 0x1f;
  puVar1[5] = 0x1f;
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[3] = 0x3f;
  puVar1[4] = 0;
  FUN_004c86ab();
  iVar2 = FUN_004c89e3();
  iStack00000004 = 0;
  if (0 < iVar2) {
    do {
      FUN_004c8b36(iStack00000004);
      iStack00000004 = iStack00000004 + 1;
    } while (iStack00000004 < iVar2);
  }
  unaff_EDI[0x1c] = iVar2;
  *(undefined4 *)(*unaff_EDI + 0x14) = 0x5f;
  *(int *)(*unaff_EDI + 0x18) = iVar2;
  (**(code **)(*unaff_EDI + 4))();
  return;
}




/* Function: FUN_004c8cfb */

void FUN_004c8cfb(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  int aiStack_42c [256];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_1c = param_1 * 2 + 0x18 >> 1;
  local_24 = unaff_EDI * 2 + 0x1c >> 1;
  local_10 = *(int *)(in_EAX + 0x70);
  local_28 = param_2 * 2 + 0x18 >> 1;
  local_c = 0x7fffffff;
  if (0 < *(int *)(in_EAX + 0x70)) {
    piVar1 = *(int **)(in_EAX + 0x74);
    local_2c = *piVar1;
    local_14 = piVar1[1];
    local_18 = piVar1[2];
    do {
      iVar6 = local_c;
      uVar3 = (uint)*(byte *)(local_2c + local_8);
      iVar4 = param_1 + 0x18;
      if ((int)uVar3 < param_1) {
        iVar7 = (uVar3 - param_1) * 2;
        iVar7 = iVar7 * iVar7;
LAB_004c8db3:
        iVar5 = iVar4;
      }
      else {
        iVar5 = param_1;
        if (iVar4 < (int)uVar3) {
          iVar7 = (uVar3 - iVar4) * 2;
          iVar7 = iVar7 * iVar7;
        }
        else {
          iVar7 = 0;
          if ((int)uVar3 <= local_1c) goto LAB_004c8db3;
        }
      }
      iVar4 = (uVar3 - iVar5) * 2;
      uVar3 = (uint)*(byte *)(local_14 + local_8);
      if ((int)uVar3 < unaff_EDI) {
        iVar5 = (uVar3 - unaff_EDI) * 3;
        iVar7 = iVar7 + iVar5 * iVar5;
        iVar5 = uVar3 - (unaff_EDI + 0x1c);
      }
      else {
        if (unaff_EDI + 0x1c < (int)uVar3) {
          iVar5 = (uVar3 - (unaff_EDI + 0x1c)) * 3;
          iVar7 = iVar7 + iVar5 * iVar5;
        }
        else if ((int)uVar3 <= local_24) {
          iVar5 = uVar3 - (unaff_EDI + 0x1c);
          goto LAB_004c8dd4;
        }
        iVar5 = uVar3 - unaff_EDI;
      }
LAB_004c8dd4:
      uVar3 = (uint)*(byte *)(local_18 + local_8);
      if ((int)uVar3 < param_2) {
        iVar7 = iVar7 + (uVar3 - param_2) * (uVar3 - param_2);
LAB_004c8e77:
        iVar2 = param_2 + 0x18;
      }
      else {
        local_20 = param_2 + 0x18;
        iVar2 = param_2;
        if (local_20 < (int)uVar3) {
          iVar7 = iVar7 + (uVar3 - local_20) * (uVar3 - local_20);
        }
        else if ((int)uVar3 <= local_28) goto LAB_004c8e77;
      }
      iVar4 = iVar4 * iVar4 + iVar5 * 3 * iVar5 * 3 + (uVar3 - iVar2) * (uVar3 - iVar2);
      aiStack_42c[local_8] = iVar7;
      if (iVar4 < iVar6) {
        local_c = iVar4;
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_10);
  }
  iVar6 = 0;
  iVar4 = 0;
  if (0 < local_10) {
    do {
      if (aiStack_42c[iVar6] <= local_c) {
        *(char *)(iVar4 + param_3) = (char)iVar6;
        iVar4 = iVar4 + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_10);
  }
  return;
}




/* Function: FUN_004c8e7b */

void FUN_004c8e7b(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 byte *param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int local_22c [128];
  int local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  piVar7 = local_22c;
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = 0x7fffffff;
    piVar7 = piVar7 + 1;
  }
  if (0 < param_5) {
    do {
      bVar1 = *(byte *)(local_c + param_6);
      uVar6 = (uint)bVar1;
      piVar7 = *(int **)(param_1 + 0x74);
      iVar2 = param_3 - (uint)*(byte *)(piVar7[1] + uVar6);
      iVar3 = iVar2 * 3;
      iVar5 = param_4 - (uint)*(byte *)(piVar7[2] + uVar6);
      iVar4 = (param_2 - (uint)*(byte *)(uVar6 + *piVar7)) * 2;
      iVar3 = iVar5 * iVar5 + iVar3 * iVar3 + iVar4 * iVar4;
      local_14 = local_22c;
      local_8 = (iVar4 + 8) * 0x20;
      local_20 = param_7;
      local_28 = 4;
      do {
        local_2c = 8;
        local_1c = iVar3;
        local_10 = (iVar2 * 9 + 0x12) * 8;
        do {
          local_24 = 4;
          iVar4 = local_1c;
          local_18 = (iVar5 + 4) * 0x10;
          do {
            if (iVar4 < *local_14) {
              *local_14 = iVar4;
              *local_20 = bVar1;
            }
            iVar4 = iVar4 + local_18;
            local_18 = local_18 + 0x80;
            local_14 = local_14 + 1;
            local_20 = local_20 + 1;
            local_24 = local_24 + -1;
          } while (local_24 != 0);
          local_1c = local_1c + local_10;
          local_10 = local_10 + 0x120;
          local_2c = local_2c + -1;
        } while (local_2c != 0);
        iVar3 = iVar3 + local_8;
        local_8 = local_8 + 0x200;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
      local_c = local_c + 1;
    } while (local_c < param_5);
  }
  return;
}




/* Function: FUN_004c8f95 */

void FUN_004c8f95(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  short *psVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined1 local_18c [256];
  byte local_8c [128];
  int local_c;
  int local_8;
  
  iVar1 = param_3 >> 2;
  local_8 = *(int *)(*(int *)(param_1 + 0x1a4) + 0x18);
  local_c = iVar1 * 0x20 + 4;
  iVar6 = (param_2 >> 2) * 0x20 + 4;
  uVar2 = FUN_004c8cfb(iVar6,local_c,local_18c);
  FUN_004c8e7b(param_1,iVar6,(in_EAX >> 3) * 0x20 + 2,local_c,uVar2,local_18c,local_8c);
  pbVar5 = local_8c;
  piVar4 = (int *)(local_8 + (param_2 >> 2) * 0x10);
  param_2 = 4;
  do {
    param_3 = 8;
    iVar6 = ((in_EAX >> 3) * 0x100 + iVar1 * 4) * 2;
    do {
      psVar3 = (short *)(*piVar4 + iVar6);
      iVar7 = 4;
      do {
        *psVar3 = *pbVar5 + 1;
        psVar3 = psVar3 + 1;
        pbVar5 = pbVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar6 = iVar6 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    piVar4 = piVar4 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}




/* Function: FUN_004c9065 */

void FUN_004c9065(int param_1,int param_2,int *param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  int local_10;
  int *local_8;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x1a4) + 0x18);
  iVar5 = *(int *)(param_1 + 0x5c);
  if (0 < param_4) {
    local_8 = param_3;
    local_10 = param_4;
    do {
      pbVar8 = *(byte **)((param_2 - (int)param_3) + (int)local_8);
      pcVar6 = (char *)*local_8;
      for (iVar2 = iVar5; iVar2 != 0; iVar2 = iVar2 + -1) {
        bVar3 = *pbVar8;
        pbVar7 = pbVar8 + 2;
        psVar1 = (short *)(*(int *)(iVar4 + (uint)(bVar3 >> 3) * 4) +
                          ((uint)(pbVar8[1] >> 2) * 0x20 + (uint)(*pbVar7 >> 3)) * 2);
        pbVar8 = pbVar8 + 3;
        if (*psVar1 == 0) {
          FUN_004c8f95(param_1,(uint)(bVar3 >> 3),(uint)(*pbVar7 >> 3));
        }
        *pcVar6 = (char)*psVar1 + -1;
        pcVar6 = pcVar6 + 1;
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}




/* Function: FUN_004c910e */

void FUN_004c910e(int param_1,int param_2,int *param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  short *psVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int local_48;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 *local_14;
  int local_8;
  
  iVar3 = *(int *)(param_1 + 0x1a4);
  iVar4 = *(int *)(iVar3 + 0x18);
  iVar5 = *(int *)(param_1 + 0x11c);
  iVar6 = *(int *)(iVar3 + 0x28);
  iVar7 = *(int *)(param_1 + 0x5c);
  piVar8 = *(int **)(param_1 + 0x74);
  iVar9 = *piVar8;
  iVar10 = piVar8[1];
  iVar11 = piVar8[2];
  if (0 < param_4) {
    local_28 = param_3;
    local_48 = param_4;
    do {
      pbVar12 = *(byte **)((param_2 - (int)param_3) + (int)local_28);
      local_14 = (undefined1 *)*local_28;
      if (*(char *)(iVar3 + 0x24) == '\0') {
        psVar18 = *(short **)(iVar3 + 0x20);
        local_3c = 1;
        local_8 = 3;
        *(undefined1 *)(iVar3 + 0x24) = 1;
      }
      else {
        local_3c = -1;
        *(undefined1 *)(iVar3 + 0x24) = 0;
        pbVar12 = pbVar12 + iVar7 * 3 + -3;
        local_14 = local_14 + iVar7 + -1;
        psVar18 = (short *)(*(int *)(iVar3 + 0x20) + (iVar7 * 3 + 3) * 2);
        local_8 = -3;
      }
      iVar15 = 0;
      local_24 = 0;
      local_24._0_2_ = 0;
      local_20 = 0;
      local_20._0_2_ = 0;
      local_1c = 0;
      local_1c._0_2_ = 0;
      iVar19 = 0;
      param_4 = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      for (iVar2 = iVar7; iVar2 != 0; iVar2 = iVar2 + -1) {
        uVar20 = (uint)*(byte *)(*(int *)(iVar6 + (psVar18[local_8] + 8 + iVar19 >> 4) * 4) +
                                 (uint)*pbVar12 + iVar5);
        uVar16 = (uint)*(byte *)(*(int *)(iVar6 + (psVar18[local_8 + 1] + 8 + iVar15 >> 4) * 4) +
                                 (uint)pbVar12[1] + iVar5);
        uVar13 = (uint)*(byte *)(*(int *)(iVar6 + (psVar18[local_8 + 2] + 8 + param_4 >> 4) * 4) +
                                 (uint)pbVar12[2] + iVar5);
        iVar19 = (int)uVar13 >> 3;
        iVar15 = (int)uVar20 >> 3;
        puVar1 = (ushort *)(*(int *)(iVar4 + iVar15 * 4) + (((int)uVar16 >> 2) * 0x20 + iVar19) * 2)
        ;
        if (*puVar1 == 0) {
          FUN_004c8f95(param_1,iVar15,iVar19);
        }
        iVar19 = *puVar1 - 1;
        *local_14 = (char)iVar19;
        iVar21 = uVar20 - *(byte *)(iVar19 + iVar9);
        iVar17 = uVar16 - *(byte *)(iVar19 + iVar10);
        iVar14 = uVar13 - *(byte *)(iVar19 + iVar11);
        *psVar18 = (short)local_1c + (short)iVar21 * 3;
        local_1c = local_30 + iVar21 * 5;
        iVar19 = iVar21 * 7;
        psVar18[1] = (short)local_20 + (short)iVar17 * 3;
        local_20 = local_34 + iVar17 * 5;
        iVar15 = iVar17 * 7;
        psVar18[2] = (short)local_24 + (short)iVar14 * 3;
        local_24 = local_38 + iVar14 * 5;
        param_4 = iVar14 * 7;
        pbVar12 = pbVar12 + local_8;
        local_14 = local_14 + local_3c;
        psVar18 = psVar18 + local_8;
        local_38 = iVar14;
        local_34 = iVar17;
        local_30 = iVar21;
      }
      local_28 = local_28 + 1;
      local_48 = local_48 + -1;
      *psVar18 = (short)local_1c;
      psVar18[1] = (short)local_20;
      psVar18[2] = (short)local_24;
    } while (local_48 != 0);
  }
  return;
}




/* Function: FUN_004c937c */

void FUN_004c937c(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *(int *)(in_EAX + 0x1a4);
  iVar1 = (*(code *)**(undefined4 **)(in_EAX + 4))();
  piVar2 = (int *)(iVar1 + 0x3fc);
  *(int **)(iVar4 + 0x28) = piVar2;
  iVar4 = 0;
  uVar3 = 0;
  iVar1 = 0;
  piVar5 = piVar2;
  do {
    piVar2[uVar3] = iVar4;
    *piVar5 = iVar1;
    uVar3 = uVar3 + 1;
    piVar5 = piVar5 + -1;
    iVar4 = iVar4 + 1;
    iVar1 = iVar1 + -1;
  } while ((int)uVar3 < 0x10);
  if ((int)uVar3 < 0x30) {
    piVar5 = piVar2 + -uVar3;
    do {
      piVar2[uVar3] = iVar4;
      *piVar5 = -iVar4;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + -1;
      iVar4 = iVar4 + (~uVar3 & 1);
    } while ((int)uVar3 < 0x30);
  }
  if ((int)uVar3 < 0x100) {
    piVar5 = piVar2 + -uVar3;
    do {
      piVar2[uVar3] = iVar4;
      *piVar5 = -iVar4;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + -1;
    } while ((int)uVar3 < 0x100);
  }
  return;
}




/* Function: FUN_004c942e */

void FUN_004c942e(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = param_1[0x69];
  iVar2 = *(int *)(iVar1 + 0x18);
  if (param_1[0x13] != 0) {
    param_1[0x13] = 2;
  }
  if (param_2 == '\0') {
    if (param_1[0x13] == 2) {
      *(code **)(iVar1 + 4) = FUN_004c910e;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_004c9065;
    }
    *(code **)(iVar1 + 8) = FUN_004c9fbd;
    iVar4 = param_1[0x1c];
    if (iVar4 < 1) {
      *(undefined4 *)(*param_1 + 0x14) = 0x37;
      *(undefined4 *)(*param_1 + 0x18) = 1;
      (**(code **)*param_1)(param_1);
    }
    if (0x100 < iVar4) {
      *(undefined4 *)(*param_1 + 0x14) = 0x38;
      *(undefined4 *)(*param_1 + 0x18) = 0x100;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[0x13] == 2) {
      iVar4 = (param_1[0x17] + 2) * 6;
      if (*(int *)(iVar1 + 0x20) == 0) {
        uVar3 = (**(code **)(param_1[1] + 4))(param_1,1,iVar4);
        *(undefined4 *)(iVar1 + 0x20) = uVar3;
      }
      FUN_004b8d64(*(undefined4 *)(iVar1 + 0x20),iVar4);
      if (*(int *)(iVar1 + 0x28) == 0) {
        FUN_004c937c();
      }
      *(undefined1 *)(iVar1 + 0x24) = 0;
    }
  }
  else {
    *(code **)(iVar1 + 4) = FUN_004c863f;
    *(undefined1 **)(iVar1 + 8) = &LAB_004c940c;
    *(undefined1 *)(iVar1 + 0x1c) = 1;
  }
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    iVar4 = 0;
    do {
      FUN_004b8d64(*(undefined4 *)(iVar2 + iVar4 * 4),0x1000);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x20);
    *(undefined1 *)(iVar1 + 0x1c) = 0;
  }
  return;
}




/* Function: FUN_004c953f */

void FUN_004c953f(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x2c);
  param_1[0x69] = (int)puVar1;
  iVar3 = 0;
  *puVar1 = FUN_004c942e;
  puVar1[3] = &LAB_004c9530;
  puVar1[8] = 0;
  puVar1[10] = 0;
  if (param_1[0x19] != 3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x2e;
    (**(code **)*param_1)(param_1);
  }
  uVar2 = (**(code **)param_1[1])(param_1,1,0x80);
  puVar1[6] = uVar2;
  do {
    uVar2 = (**(code **)(param_1[1] + 4))(param_1,1,0x1000);
    *(undefined4 *)(puVar1[6] + iVar3) = uVar2;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x80);
  *(undefined1 *)(puVar1 + 7) = 1;
  if (*(char *)((int)param_1 + 0x5a) == '\0') {
    puVar1[4] = 0;
  }
  else {
    iVar3 = param_1[0x15];
    if (iVar3 < 8) {
      *(undefined4 *)(*param_1 + 0x14) = 0x37;
      *(undefined4 *)(*param_1 + 0x18) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (0x100 < iVar3) {
      *(undefined4 *)(*param_1 + 0x14) = 0x38;
      *(undefined4 *)(*param_1 + 0x18) = 0x100;
      (**(code **)*param_1)(param_1);
    }
    uVar2 = (**(code **)(param_1[1] + 8))(param_1,1,iVar3,3);
    puVar1[4] = uVar2;
    puVar1[5] = iVar3;
  }
  if (param_1[0x13] != 0) {
    param_1[0x13] = 2;
  }
  if (param_1[0x13] == 2) {
    uVar2 = (**(code **)(param_1[1] + 4))(param_1,1,(param_1[0x17] + 2) * 6);
    puVar1[8] = uVar2;
    FUN_004c937c();
    return;
  }
  return;
}




/* Function: FUN_004c9652 */

int FUN_004c9652(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_10;
  int local_c;
  
  iVar1 = param_1[0x15];
  iVar2 = param_1[0x19];
  iVar7 = 1;
  do {
    iVar5 = iVar7;
    iVar7 = iVar5 + 1;
    iVar4 = iVar7;
    if (1 < iVar2) {
      iVar6 = iVar2 + -1;
      do {
        iVar4 = iVar4 * iVar7;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  } while (iVar4 <= iVar1);
  if (iVar5 < 2) {
    *(undefined4 *)(*param_1 + 0x14) = 0x37;
    *(int *)(*param_1 + 0x18) = iVar4;
    (**(code **)*param_1)(param_1);
  }
  local_10 = 1;
  iVar7 = iVar2;
  piVar8 = param_2;
  if (0 < iVar2) {
    for (; iVar4 = iVar2, iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = iVar5;
      piVar8 = piVar8 + 1;
    }
    do {
      local_10 = local_10 * iVar5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  do {
    bVar3 = false;
    local_c = 0;
    if (iVar2 < 1) {
      return local_10;
    }
    do {
      iVar7 = local_c;
      if (param_1[10] == 2) {
        iVar7 = *(int *)(&DAT_0058eea0 + local_c * 4);
      }
      iVar5 = param_2[iVar7];
      iVar4 = iVar5 + 1;
      iVar5 = (local_10 / iVar5) * iVar4;
      if (iVar5 - iVar1 != 0 && iVar1 <= iVar5) break;
      local_c = local_c + 1;
      param_2[iVar7] = iVar4;
      bVar3 = true;
      local_10 = iVar5;
    } while (local_c < iVar2);
    if (!bVar3) {
      return local_10;
    }
  } while( true );
}




/* Function: FUN_004c971d */

void FUN_004c971d(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *unaff_ESI;
  int iVar8;
  undefined1 local_34;
  int local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_8;
  
  iVar2 = unaff_ESI[0x69];
  local_1c = (int *)(iVar2 + 0x20);
  iVar3 = FUN_004c9652();
  iVar5 = *unaff_ESI;
  if (unaff_ESI[0x19] == 3) {
    *(int *)(iVar5 + 0x18) = iVar3;
    *(int *)(iVar5 + 0x1c) = *local_1c;
    *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x5d;
  }
  else {
    *(undefined4 *)(iVar5 + 0x14) = 0x5e;
    *(int *)(*unaff_ESI + 0x18) = iVar3;
  }
  (**(code **)(*unaff_ESI + 4))();
  piVar4 = (int *)(**(code **)(unaff_ESI[1] + 8))();
  local_24 = 0;
  local_20 = piVar4;
  local_18 = iVar3;
  if (0 < unaff_ESI[0x19]) {
    do {
      local_28 = *local_1c;
      iVar5 = local_18 / local_28;
      iVar8 = 0;
      if (0 < local_28) {
        iVar1 = local_28 + -1;
        local_14 = 0;
        do {
          for (iVar7 = local_14; iVar7 < iVar3; iVar7 = iVar7 + local_18) {
            local_8 = 0;
            if (0 < iVar5) {
              do {
                iVar6 = *local_20 + local_8;
                local_34 = (undefined1)((iVar1 / 2 + iVar8) / iVar1);
                local_8 = local_8 + 1;
                *(undefined1 *)(iVar6 + iVar7) = local_34;
              } while (local_8 < iVar5);
            }
          }
          local_14 = local_14 + iVar5;
          iVar8 = iVar8 + 0xff;
          local_28 = local_28 + -1;
        } while (local_28 != 0);
      }
      local_24 = local_24 + 1;
      local_1c = local_1c + 1;
      local_20 = local_20 + 1;
      local_18 = iVar5;
    } while (local_24 < unaff_ESI[0x19]);
  }
  *(int *)(iVar2 + 0x14) = iVar3;
  *(int **)(iVar2 + 0x10) = piVar4;
  return;
}




/* Function: FUN_004c984a */

void FUN_004c984a(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int local_1c;
  char local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x4c) == 1) {
    local_10 = 0x1fe;
    *(undefined1 *)(iVar2 + 0x1c) = 1;
  }
  else {
    local_10 = 0;
    *(undefined1 *)(iVar2 + 0x1c) = 0;
  }
  uVar4 = (**(code **)(*(int *)(param_1 + 4) + 8))
                    (param_1,1,local_10 + 0x100,*(undefined4 *)(param_1 + 100));
  *(undefined4 *)(iVar2 + 0x18) = uVar4;
  iVar5 = *(int *)(iVar2 + 0x14);
  local_1c = 0;
  if (0 < *(int *)(param_1 + 100)) {
    local_14 = (int *)(iVar2 + 0x20);
    do {
      iVar9 = *local_14;
      iVar5 = iVar5 / iVar9;
      if (local_10 != 0) {
        piVar1 = (int *)(*(int *)(iVar2 + 0x18) + local_1c * 4);
        *piVar1 = *piVar1 + 0xff;
      }
      puVar3 = *(undefined1 **)(*(int *)(iVar2 + 0x18) + local_1c * 4);
      iVar6 = (iVar9 + 0xfe) / (iVar9 * 2 + -2);
      local_c = 0;
      local_8 = 0;
      do {
        if (iVar6 < local_8) {
          iVar7 = local_c * 0x1fe;
          do {
            iVar6 = (iVar7 + 0x2fc + iVar9) / (iVar9 * 2 + -2);
            local_c = local_c + 1;
            iVar7 = iVar7 + 0x1fe;
          } while (iVar6 < local_8);
        }
        local_18 = (char)iVar5;
        iVar7 = local_8 + 1;
        puVar3[local_8] = (char)local_c * local_18;
        local_8 = iVar7;
      } while (iVar7 < 0x100);
      if (local_10 != 0) {
        iVar9 = 1;
        puVar8 = puVar3;
        do {
          puVar8 = puVar8 + -1;
          *puVar8 = *puVar3;
          (puVar3 + 0xff)[iVar9] = puVar3[0xff];
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x100);
      }
      local_14 = local_14 + 1;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(param_1 + 100));
  }
  return;
}




/* Function: FUN_004c9975 */

void FUN_004c9975(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int unaff_EDI;
  undefined1 *local_c;
  int local_8;
  
  iVar2 = *(int *)(unaff_EDI + 0x1a4);
  local_8 = 0;
  if (0 < *(int *)(unaff_EDI + 100)) {
    piVar6 = (int *)(iVar2 + 0x34);
    do {
      iVar3 = piVar6[-5];
      iVar4 = 0;
      if (0 < local_8) {
        piVar5 = (int *)(iVar2 + 0x20);
        do {
          if (iVar3 == *piVar5) {
            piVar5 = *(int **)(iVar2 + 0x34 + iVar4 * 4);
            if (piVar5 != (int *)0x0) goto LAB_004c9a1f;
            break;
          }
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar4 < local_8);
      }
      piVar5 = (int *)(*(code *)**(undefined4 **)(unaff_EDI + 4))();
      local_c = &DAT_0058eda0;
      piVar7 = piVar5;
      do {
        iVar4 = 0;
        do {
          pbVar1 = local_c + iVar4;
          iVar4 = iVar4 + 1;
          *piVar7 = (int)((uint)*pbVar1 * -0x1fe + 0xfe01) / (iVar3 * 0x200 + -0x200);
          piVar7 = piVar7 + 1;
        } while (iVar4 < 0x10);
        local_c = local_c + 0x10;
      } while ((int)local_c < 0x58eea0);
LAB_004c9a1f:
      local_8 = local_8 + 1;
      *piVar6 = (int)piVar5;
      piVar6 = piVar6 + 1;
    } while (local_8 < *(int *)(unaff_EDI + 100));
  }
  return;
}




/* Function: FUN_004c9a3a */

void FUN_004c9a3a(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  int local_c;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x1a4) + 0x18);
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 100);
  if (0 < param_4) {
    param_2 = param_2 - (int)param_3;
    local_c = param_4;
    do {
      pbVar7 = *(byte **)(param_2 + (int)param_3);
      pcVar6 = (char *)*param_3;
      for (iVar2 = iVar4; iVar2 != 0; iVar2 = iVar2 + -1) {
        cVar1 = '\0';
        iVar8 = 0;
        if (0 < iVar5) {
          do {
            cVar1 = cVar1 + *(char *)(*(int *)(iVar3 + iVar8 * 4) + (uint)*pbVar7);
            pbVar7 = pbVar7 + 1;
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar5);
        }
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      }
      param_3 = param_3 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}




/* Function: FUN_004c9ac2 */

void FUN_004c9ac2(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0x1a4) + 0x18);
  iVar4 = *piVar3;
  iVar5 = piVar3[1];
  iVar6 = piVar3[2];
  iVar7 = *(int *)(param_1 + 0x5c);
  if (0 < param_4) {
    param_2 = param_2 - (int)param_3;
    do {
      pbVar10 = *(byte **)(param_2 + (int)param_3);
      pcVar11 = (char *)*param_3;
      for (iVar1 = iVar7; iVar1 != 0; iVar1 = iVar1 + -1) {
        bVar2 = *pbVar10;
        pbVar8 = pbVar10 + 1;
        pbVar9 = pbVar10 + 2;
        pbVar10 = pbVar10 + 3;
        *pcVar11 = *(char *)((uint)bVar2 + iVar4) + *(char *)((uint)*pbVar8 + iVar5) +
                   *(char *)((uint)*pbVar9 + iVar6);
        pcVar11 = pcVar11 + 1;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}




/* Function: FUN_004c9b4f */

void FUN_004c9b4f(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  int local_1c;
  int *local_8;
  
  iVar3 = *(int *)(param_1 + 100);
  iVar4 = *(int *)(param_1 + 0x1a4);
  iVar5 = *(int *)(param_1 + 0x5c);
  if (0 < (int)param_4) {
    param_2 = param_2 - (int)param_3;
    local_1c = param_4;
    do {
      FUN_004b8d64(*param_3,iVar5);
      iVar6 = *(int *)(iVar4 + 0x30);
      param_1 = 0;
      if (0 < iVar3) {
        local_8 = (int *)(iVar4 + 0x34);
        do {
          param_4 = 0;
          pcVar10 = (char *)*param_3;
          pbVar9 = (byte *)(*(int *)(param_2 + (int)param_3) + param_1);
          iVar7 = *(int *)(*(int *)(iVar4 + 0x18) + param_1 * 4);
          iVar8 = *local_8;
          for (iVar1 = iVar5; iVar1 != 0; iVar1 = iVar1 + -1) {
            bVar2 = *pbVar9;
            pbVar9 = pbVar9 + iVar3;
            *pcVar10 = *pcVar10 +
                       *(char *)(*(int *)(iVar8 + iVar6 * 0x40 + param_4 * 4) + (uint)bVar2 + iVar7)
            ;
            pcVar10 = pcVar10 + 1;
            param_4 = param_4 + 1 & 0xf;
          }
          param_1 = param_1 + 1;
          local_8 = local_8 + 1;
        } while (param_1 < iVar3);
      }
      param_3 = param_3 + 1;
      local_1c = local_1c + -1;
      *(uint *)(iVar4 + 0x30) = iVar6 + 1U & 0xf;
    } while (local_1c != 0);
  }
  return;
}




/* Function: FUN_004c9c3a */

void FUN_004c9c3a(uint param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  int local_14;
  int *local_c;
  
  iVar2 = *(int *)(param_1 + 0x1a4);
  piVar3 = *(int **)(iVar2 + 0x18);
  iVar4 = *piVar3;
  iVar5 = piVar3[1];
  iVar6 = piVar3[2];
  iVar7 = *(int *)(param_1 + 0x5c);
  if (0 < param_4) {
    local_c = param_3;
    local_14 = param_4;
    do {
      pbVar13 = *(byte **)((param_2 - (int)param_3) + (int)local_c);
      pcVar8 = (char *)*local_c;
      iVar9 = *(int *)(iVar2 + 0x30);
      iVar10 = *(int *)(iVar2 + 0x34);
      iVar11 = *(int *)(iVar2 + 0x3c);
      param_1 = 0;
      iVar14 = iVar9 * 0x40;
      iVar12 = *(int *)(iVar2 + 0x38);
      for (iVar1 = iVar7; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pcVar8 = *(char *)(*(int *)(iVar10 + iVar14 + param_1 * 4) + (uint)*pbVar13 + iVar4) +
                  *(char *)(*(int *)(iVar12 + iVar14 + param_1 * 4) + (uint)pbVar13[1] + iVar5) +
                  *(char *)(*(int *)(iVar11 + iVar14 + param_1 * 4) + (uint)pbVar13[2] + iVar6);
        pbVar13 = pbVar13 + 3;
        pcVar8 = pcVar8 + 1;
        param_1 = param_1 + 1 & 0xf;
      }
      local_c = local_c + 1;
      local_14 = local_14 + -1;
      *(uint *)(iVar2 + 0x30) = iVar9 + 1U & 0xf;
    } while (local_14 != 0);
  }
  return;
}




/* Function: FUN_004c9d39 */

void FUN_004c9d39(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  char *pcVar13;
  byte *pbVar14;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_c;
  
  local_28 = (int)param_4;
  iVar3 = *(int *)(param_1 + 100);
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 0x1a4);
  iVar6 = *(int *)(param_1 + 0x11c);
  if (0 < (int)param_4) {
    param_4 = param_3;
    do {
      FUN_004b8d64(*param_4,iVar4);
      param_1 = 0;
      if (0 < iVar3) {
        local_c = (int *)(iVar5 + 0x44);
        do {
          pbVar14 = (byte *)(*(int *)((param_2 - (int)param_3) + (int)param_4) + param_1);
          pcVar13 = (char *)*param_4;
          if (*(char *)(iVar5 + 0x54) == '\0') {
            psVar12 = (short *)*local_c;
            local_14 = 1;
            local_20 = iVar3;
          }
          else {
            local_14 = -1;
            pcVar13 = pcVar13 + iVar4 + -1;
            pbVar14 = pbVar14 + (iVar4 + -1) * iVar3;
            psVar12 = (short *)(*local_c + 2 + iVar4 * 2);
            local_20 = -iVar3;
          }
          iVar7 = *(int *)(param_1 * 4 + *(int *)(iVar5 + 0x18));
          iVar8 = *(int *)(param_1 * 4 + *(int *)(iVar5 + 0x10));
          iVar9 = 0;
          local_18 = 0;
          local_18._0_2_ = 0;
          local_1c = 0;
          for (iVar1 = iVar4; iVar1 != 0; iVar1 = iVar1 + -1) {
            uVar10 = (uint)*(byte *)((uint)*pbVar14 + iVar6 + (psVar12[local_14] + 8 + iVar9 >> 4));
            bVar2 = *(byte *)(uVar10 + iVar7);
            *pcVar13 = *pcVar13 + bVar2;
            pbVar14 = pbVar14 + local_20;
            pcVar13 = pcVar13 + local_14;
            iVar11 = uVar10 - *(byte *)((uint)bVar2 + iVar8);
            *psVar12 = (short)local_18 + (short)iVar11 * 3;
            local_18 = local_1c + iVar11 * 5;
            iVar9 = iVar11 * 7;
            psVar12 = psVar12 + local_14;
            local_1c = iVar11;
          }
          param_1 = param_1 + 1;
          local_c = local_c + 1;
          *psVar12 = (short)local_18;
        } while (param_1 < iVar3);
      }
      param_4 = param_4 + 1;
      local_28 = local_28 + -1;
      *(bool *)(iVar5 + 0x54) = *(char *)(iVar5 + 0x54) == '\0';
    } while (local_28 != 0);
  }
  return;
}




/* Function: FUN_004c9ebd */

void FUN_004c9ebd(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(unaff_ESI + 100)) {
    puVar2 = (undefined4 *)(*(int *)(unaff_ESI + 0x1a4) + 0x44);
    do {
      uVar1 = (**(code **)(*(int *)(unaff_ESI + 4) + 4))();
      *puVar2 = uVar1;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < *(int *)(unaff_ESI + 100));
  }
  return;
}




/* Function: FUN_004c9ef3 */

void FUN_004c9ef3(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = param_1[0x69];
  param_1[0x1d] = *(int *)(iVar1 + 0x10);
  param_1[0x1c] = *(int *)(iVar1 + 0x14);
  iVar3 = param_1[0x13];
  if (iVar3 == 0) {
    if (param_1[0x19] == 3) {
      *(code **)(iVar1 + 4) = FUN_004c9ac2;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_004c9a3a;
    }
  }
  else if (iVar3 == 1) {
    if (param_1[0x19] == 3) {
      *(code **)(iVar1 + 4) = FUN_004c9c3a;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_004c9b4f;
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    if (*(char *)(iVar1 + 0x1c) == '\0') {
      FUN_004c984a(param_1);
    }
    if (*(int *)(iVar1 + 0x34) == 0) {
      FUN_004c9975();
    }
  }
  else if (iVar3 == 2) {
    *(undefined1 *)(iVar1 + 0x54) = 0;
    piVar2 = (int *)(iVar1 + 0x44);
    *(code **)(iVar1 + 4) = FUN_004c9d39;
    if (*piVar2 == 0) {
      FUN_004c9ebd();
    }
    iVar1 = param_1[0x17];
    iVar3 = 0;
    if (0 < param_1[0x19]) {
      do {
        FUN_004b8d64(*piVar2,iVar1 * 2 + 4);
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < param_1[0x19]);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x2f;
    (**(code **)*param_1)(param_1);
  }
  return;
}




/* Function: FUN_004c9fbd */

void FUN_004c9fbd(void)

{
  return;
}




/* Function: FUN_004c9fd2 */

void FUN_004c9fd2(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x58);
  param_1[0x69] = (int)puVar1;
  puVar1[0x11] = 0;
  puVar1[0xd] = 0;
  *puVar1 = FUN_004c9ef3;
  puVar1[2] = FUN_004c9fbd;
  puVar1[3] = &LAB_004c9fbe;
  if (4 < param_1[0x19]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x36;
    *(undefined4 *)(*param_1 + 0x18) = 4;
    (**(code **)*param_1)(param_1);
  }
  if (0x100 < param_1[0x15]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(undefined4 *)(*param_1 + 0x18) = 0x100;
    (**(code **)*param_1)(param_1);
  }
  FUN_004c971d();
  FUN_004c984a(param_1);
  if (param_1[0x13] == 2) {
    FUN_004c9ebd();
  }
  return;
}




/* Function: FUN_004ca059 */

void FUN_004ca059(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 != (int *)0x0) {
    *param_3 = param_1[0xf];
  }
  if ((*param_1 == 4) || (*param_1 == 5)) {
    (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[3]);
  }
  if (*param_1 == 6) {
    FUN_004cca59(param_1[1],param_2);
  }
  param_1[0xd] = param_1[10];
  param_1[0xc] = param_1[10];
  *param_1 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if ((code *)param_1[0xe] != (code *)0x0) {
    iVar1 = (*(code *)param_1[0xe])(0,0,0);
    param_1[0xf] = iVar1;
    *(int *)(param_2 + 0x30) = iVar1;
  }
  return;
}




/* Function: FUN_004ca0c4 */

undefined4 * FUN_004ca0c4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x40);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),8,0x5a0);
    puVar1[9] = iVar2;
    if (iVar2 != 0) {
      iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,param_3);
      puVar1[10] = iVar2;
      if (iVar2 == 0) {
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),puVar1[9]);
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),puVar1);
        return (undefined4 *)0x0;
      }
      *puVar1 = 0;
      puVar1[0xb] = iVar2 + param_3;
      puVar1[0xe] = param_2;
      FUN_004ca059(puVar1,param_1,0);
      return puVar1;
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),puVar1);
  }
  return (undefined4 *)0x0;
}




/* Function: FUN_004ca8ec */

undefined4 FUN_004ca8ec(int param_1,int param_2)

{
  FUN_004ca059(param_1,param_2,0);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x28));
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x24));
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  return 0;
}




/* Function: FUN_004ca920 */

uint FUN_004ca920(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  uVar3 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_2 == (byte *)0x0) {
    uVar3 = 1;
  }
  else {
    while (param_3 != 0) {
      uVar2 = 0x15b0;
      if (param_3 < 0x15b0) {
        uVar2 = param_3;
      }
      param_3 = param_3 - uVar2;
      if (0xf < (int)uVar2) {
        uVar1 = uVar2 >> 4;
        uVar2 = uVar2 + uVar1 * -0x10;
        do {
          iVar4 = uVar3 + *param_2;
          iVar5 = iVar4 + (uint)param_2[1];
          iVar6 = iVar5 + (uint)param_2[2];
          iVar7 = iVar6 + (uint)param_2[3];
          iVar8 = iVar7 + (uint)param_2[4];
          iVar9 = iVar8 + (uint)param_2[5];
          iVar10 = iVar9 + (uint)param_2[6];
          iVar11 = iVar10 + (uint)param_2[7];
          iVar12 = iVar11 + (uint)param_2[8];
          iVar13 = iVar12 + (uint)param_2[9];
          iVar14 = iVar13 + (uint)param_2[10];
          iVar15 = iVar14 + (uint)param_2[0xb];
          iVar16 = iVar15 + (uint)param_2[0xc];
          iVar17 = iVar16 + (uint)param_2[0xd];
          iVar18 = iVar17 + (uint)param_2[0xe];
          uVar3 = iVar18 + (uint)param_2[0xf];
          param_1 = param_1 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                    iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
          param_2 = param_2 + 0x10;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        uVar3 = uVar3 + *param_2;
        param_2 = param_2 + 1;
        param_1 = param_1 + uVar3;
      }
      uVar3 = uVar3 % 0xfff1;
      param_1 = param_1 % 0xfff1;
    }
    uVar3 = param_1 << 0x10 | uVar3;
  }
  return uVar3;
}




/* Function: FUN_004caa39 */

void FUN_004caa39(undefined4 param_1,size_t param_2,size_t param_3)

{
  calloc(param_2,param_3);
  return;
}




/* Function: FUN_004caa50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004caa50(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  
  fVar6 = (float)(*param_1 & _DAT_005afdc0);
  fVar10 = (float)(param_1[1] & uRam005afdc4);
  fVar14 = (float)(param_1[2] & uRam005afdc8);
  fVar18 = (float)(param_1[3] & uRam005afdcc);
  uVar22 = param_1[1] & uRam005afdb4;
  uVar23 = param_1[2] & uRam005afdb8;
  uVar24 = param_1[3] & uRam005afdbc;
  fVar7 = fVar6 * _DAT_005afda0 + _DAT_005afd50;
  fVar11 = fVar10 * fRam005afda4 + fRam005afd54;
  fVar15 = fVar14 * fRam005afda8 + fRam005afd58;
  fVar19 = fVar18 * fRam005afdac + fRam005afd5c;
  fVar8 = fVar7 - _DAT_005afd50;
  fVar12 = fVar11 - fRam005afd54;
  fVar16 = fVar15 - fRam005afd58;
  fVar20 = fVar19 - fRam005afd5c;
  fVar6 = (((fVar6 - _DAT_005afd90 * fVar8) - _DAT_005afd80 * fVar8) - _DAT_005afd70 * fVar8) -
          _DAT_005afd60 * fVar8;
  fVar8 = (((fVar10 - fRam005afd94 * fVar12) - fRam005afd84 * fVar12) - fRam005afd74 * fVar12) -
          fRam005afd64 * fVar12;
  fVar10 = (((fVar14 - fRam005afd98 * fVar16) - fRam005afd88 * fVar16) - fRam005afd78 * fVar16) -
           fRam005afd68 * fVar16;
  fVar12 = (((fVar18 - fRam005afd9c * fVar20) - fRam005afd8c * fVar20) - fRam005afd7c * fVar20) -
           fRam005afd6c * fVar20;
  fVar14 = fVar6 * fVar6;
  fVar16 = fVar8 * fVar8;
  fVar18 = fVar10 * fVar10;
  fVar20 = fVar12 * fVar12;
  uVar25 = (uint)fVar7 & _DAT_005afd20;
  uVar26 = (uint)fVar11 & uRam005afd24;
  uVar27 = (uint)fVar15 & uRam005afd28;
  uVar28 = (uint)fVar19 & uRam005afd2c;
  uVar9 = uVar25 & _DAT_005afd10;
  uVar13 = uVar26 & uRam005afd14;
  uVar17 = uVar27 & uRam005afd18;
  uVar21 = uVar28 & uRam005afd1c;
  uVar1 = uVar26 - uVar13 & _DAT_005afd00;
  uVar2 = uVar27 - uVar17 & _DAT_005afd00;
  uVar3 = uVar28 - uVar21 & _DAT_005afd00;
  uVar4 = uVar25 + uVar9 & _DAT_005afd00;
  uVar26 = uVar26 + uVar13 & _DAT_005afd00;
  uVar27 = uVar27 + uVar17 & _DAT_005afd00;
  uVar28 = uVar28 + uVar21 & _DAT_005afd00;
  uVar5 = -(uint)((float)(uVar9 << 0x1e) != 0.0);
  uVar13 = -(uint)((float)(uVar13 << 0x1e) != 0.0);
  uVar17 = -(uint)((float)(uVar17 << 0x1e) != 0.0);
  uVar21 = -(uint)((float)(uVar21 << 0x1e) != 0.0);
  fVar6 = (((_DAT_005afd40 * fVar14 + _DAT_005afcf0) * fVar14 + _DAT_005afcd0) * fVar14 +
          _DAT_005afcb0) * fVar6;
  fVar8 = (((fRam005afd44 * fVar16 + fRam005afcf4) * fVar16 + fRam005afcd4) * fVar16 + fRam005afcb4)
          * fVar8;
  fVar10 = (((fRam005afd48 * fVar18 + fRam005afcf8) * fVar18 + fRam005afcd8) * fVar18 + fRam005afcb8
           ) * fVar10;
  fVar12 = (((fRam005afd4c * fVar20 + fRam005afcfc) * fVar20 + fRam005afcdc) * fVar20 + fRam005afcbc
           ) * fVar12;
  fVar7 = (((_DAT_005afd30 * fVar14 + _DAT_005afce0) * fVar14 + _DAT_005afcc0) * fVar14 +
          _DAT_005afca0) * fVar14 + _DAT_005afc90;
  fVar11 = (((fRam005afd34 * fVar16 + fRam005afce4) * fVar16 + fRam005afcc4) * fVar16 + fRam005afca4
           ) * fVar16 + fRam005afc94;
  fVar14 = (((fRam005afd38 * fVar18 + fRam005afce8) * fVar18 + fRam005afcc8) * fVar18 + fRam005afca8
           ) * fVar18 + fRam005afc98;
  fVar15 = (((fRam005afd3c * fVar20 + fRam005afcec) * fVar20 + fRam005afccc) * fVar20 + fRam005afcac
           ) * fVar20 + fRam005afc9c;
  *param_2 = (~uVar5 & (uint)fVar6 | uVar5 & (uint)fVar7) ^
             (uVar25 - uVar9 & _DAT_005afd00) << 0x1e ^ *param_1 & _DAT_005afdb0;
  param_2[1] = (~uVar13 & (uint)fVar8 | uVar13 & (uint)fVar11) ^ uVar1 << 0x1e ^ uVar22;
  param_2[2] = (~uVar17 & (uint)fVar10 | uVar17 & (uint)fVar14) ^ uVar2 << 0x1e ^ uVar23;
  param_2[3] = (~uVar21 & (uint)fVar12 | uVar21 & (uint)fVar15) ^ uVar3 << 0x1e ^ uVar24;
  *param_3 = (uVar5 & (uint)fVar6 | ~uVar5 & (uint)fVar7) ^ uVar4 << 0x1e;
  param_3[1] = (uVar13 & (uint)fVar8 | ~uVar13 & (uint)fVar11) ^ uVar26 << 0x1e;
  param_3[2] = (uVar17 & (uint)fVar10 | ~uVar17 & (uint)fVar14) ^ uVar27 << 0x1e;
  param_3[3] = (uVar21 & (uint)fVar12 | ~uVar21 & (uint)fVar15) ^ uVar28 << 0x1e;
  return;
}




/* Function: FUN_004cac40 */

void FUN_004cac40(void)

{
  return;
}




/* Function: FUN_004cad30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cad30(uint *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  
  fVar16 = (float)(*param_1 & _DAT_005affe0);
  fVar17 = (float)(param_1[1] & uRam005affe4);
  fVar25 = (float)(param_1[2] & uRam005affe8);
  fVar26 = (float)(param_1[3] & uRam005affec);
  uVar13 = param_1[1] & uRam005affd4;
  uVar14 = param_1[2] & uRam005affd8;
  uVar15 = param_1[3] & uRam005affdc;
  fVar1 = fVar16 * _DAT_005affc0 + _DAT_005aff70;
  fVar4 = fVar17 * fRam005affc4 + fRam005aff74;
  fVar7 = fVar25 * fRam005affc8 + fRam005aff78;
  fVar10 = fVar26 * fRam005affcc + fRam005aff7c;
  fVar2 = fVar1 - _DAT_005aff70;
  fVar5 = fVar4 - fRam005aff74;
  fVar8 = fVar7 - fRam005aff78;
  fVar11 = fVar10 - fRam005aff7c;
  fVar16 = (((fVar16 - _DAT_005affb0 * fVar2) - _DAT_005affa0 * fVar2) - _DAT_005aff90 * fVar2) -
           _DAT_005aff80 * fVar2;
  fVar2 = (((fVar17 - fRam005affb4 * fVar5) - fRam005affa4 * fVar5) - fRam005aff94 * fVar5) -
          fRam005aff84 * fVar5;
  fVar17 = (((fVar25 - fRam005affb8 * fVar8) - fRam005affa8 * fVar8) - fRam005aff98 * fVar8) -
           fRam005aff88 * fVar8;
  fVar5 = (((fVar26 - fRam005affbc * fVar11) - fRam005affac * fVar11) - fRam005aff9c * fVar11) -
          fRam005aff8c * fVar11;
  fVar25 = fVar16 * fVar16;
  fVar8 = fVar2 * fVar2;
  fVar26 = fVar17 * fVar17;
  fVar11 = fVar5 * fVar5;
  uVar18 = (uint)fVar1 & _DAT_005aff40;
  uVar19 = (uint)fVar4 & uRam005aff44;
  uVar21 = (uint)fVar7 & uRam005aff48;
  uVar23 = (uint)fVar10 & uRam005aff4c;
  uVar3 = uVar18 & _DAT_005aff30;
  uVar6 = uVar19 & uRam005aff34;
  uVar9 = uVar21 & uRam005aff38;
  uVar12 = uVar23 & uRam005aff3c;
  uVar20 = uVar19 - uVar6 & uRam005aff24;
  uVar22 = uVar21 - uVar9 & uRam005aff28;
  uVar24 = uVar23 - uVar12 & uRam005aff2c;
  uVar27 = uVar18 + uVar3 & _DAT_005aff20;
  uVar28 = uVar19 + uVar6 & uRam005aff24;
  uVar21 = uVar21 + uVar9 & uRam005aff28;
  uVar23 = uVar23 + uVar12 & uRam005aff2c;
  uVar19 = -(uint)((float)(uVar3 << 0x1e) != 0.0);
  uVar6 = -(uint)((float)(uVar6 << 0x1e) != 0.0);
  uVar9 = -(uint)((float)(uVar9 << 0x1e) != 0.0);
  uVar12 = -(uint)((float)(uVar12 << 0x1e) != 0.0);
  fVar16 = (((_DAT_005aff60 * fVar25 + _DAT_005aff10) * fVar25 + _DAT_005afef0) * fVar25 +
           _DAT_005afed0) * fVar16;
  fVar2 = (((fRam005aff64 * fVar8 + fRam005aff14) * fVar8 + fRam005afef4) * fVar8 + fRam005afed4) *
          fVar2;
  fVar17 = (((fRam005aff68 * fVar26 + fRam005aff18) * fVar26 + fRam005afef8) * fVar26 + fRam005afed8
           ) * fVar17;
  fVar5 = (((fRam005aff6c * fVar11 + fRam005aff1c) * fVar11 + fRam005afefc) * fVar11 + fRam005afedc)
          * fVar5;
  fVar1 = (((_DAT_005aff50 * fVar25 + _DAT_005aff00) * fVar25 + _DAT_005afee0) * fVar25 +
          _DAT_005afec0) * fVar25 + _DAT_005afeb0;
  fVar4 = (((fRam005aff54 * fVar8 + fRam005aff04) * fVar8 + fRam005afee4) * fVar8 + fRam005afec4) *
          fVar8 + fRam005afeb4;
  fVar25 = (((fRam005aff58 * fVar26 + fRam005aff08) * fVar26 + fRam005afee8) * fVar26 + fRam005afec8
           ) * fVar26 + fRam005afeb8;
  fVar7 = (((fRam005aff5c * fVar11 + fRam005aff0c) * fVar11 + fRam005afeec) * fVar11 + fRam005afecc)
          * fVar11 + fRam005afebc;
  *param_2 = (~uVar19 & (uint)fVar16 | uVar19 & (uint)fVar1) ^
             (uVar18 - uVar3 & _DAT_005aff20) << 0x1e ^ *param_1 & _DAT_005affd0;
  param_2[1] = (~uVar6 & (uint)fVar2 | uVar6 & (uint)fVar4) ^ uVar20 << 0x1e ^ uVar13;
  param_2[2] = (~uVar9 & (uint)fVar17 | uVar9 & (uint)fVar25) ^ uVar22 << 0x1e ^ uVar14;
  param_2[3] = (~uVar12 & (uint)fVar5 | uVar12 & (uint)fVar7) ^ uVar24 << 0x1e ^ uVar15;
  *param_3 = (uVar19 & (uint)fVar16 | ~uVar19 & (uint)fVar1) ^ uVar27 << 0x1e;
  param_3[1] = (uVar6 & (uint)fVar2 | ~uVar6 & (uint)fVar4) ^ uVar28 << 0x1e;
  param_3[2] = (uVar9 & (uint)fVar17 | ~uVar9 & (uint)fVar25) ^ uVar21 << 0x1e;
  param_3[3] = (uVar12 & (uint)fVar5 | ~uVar12 & (uint)fVar7) ^ uVar23 << 0x1e;
  return;
}




/* Function: FUN_004caf40 */

ulonglong FUN_004caf40(void)

{
  ulonglong in_MM0;
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong in_MM1;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = (DAT_005b0098 & in_MM0) >> 1 | DAT_005b0098 & in_MM1;
  uVar3 = in_MM1 & DAT_005b009c;
  uVar1 = in_MM0 & DAT_005b009c;
  uVar2 = PackedFloatingMAX(uVar1,uVar3);
  uVar7 = (uint)((int)uVar1 < (int)uVar3) * -0x80000000;
  uVar4 = PackedFloatingMIN(uVar3,uVar1);
  uVar5 = FloatingReciprocalAprox(uVar1,uVar2);
  uVar2 = PackedFloatingReciprocalIter1(uVar2,uVar5);
  uVar2 = PackedFloatingReciprocalIter2(uVar2,uVar5);
  uVar2 = PackedFloatingMUL(uVar2,uVar4);
  uVar4 = PackedFloatingMUL(uVar2,uVar2);
  uVar5 = PackedFloatingADD((ulonglong)DAT_005b00d0,uVar4);
  uVar6 = PackedFloatingMUL((ulonglong)DAT_005b00dc,uVar4);
  uVar5 = PackedFloatingMUL(uVar5,uVar4);
  uVar6 = PackedFloatingADD(uVar6,(ulonglong)DAT_005b00d8);
  uVar5 = PackedFloatingADD(uVar5,(ulonglong)DAT_005b00cc);
  uVar6 = PackedFloatingMUL(uVar6,uVar4);
  uVar5 = PackedFloatingMUL(uVar5,uVar4);
  uVar6 = PackedFloatingADD(uVar6,(ulonglong)DAT_005b00d4);
  uVar5 = PackedFloatingADD(uVar5,(ulonglong)DAT_005b00c8);
  uVar4 = PackedFloatingMUL(uVar4,uVar6);
  uVar4 = PackedFloatingMUL(uVar4,uVar2);
  uVar6 = FloatingReciprocalAprox((ulonglong)DAT_005b00d4,uVar5);
  uVar8 = (int)uVar9 << 1;
  uVar5 = PackedFloatingReciprocalIter1(uVar5,uVar6);
  uVar5 = PackedFloatingReciprocalIter2(uVar5,uVar6);
  uVar4 = PackedFloatingMUL(uVar4,uVar5);
  uVar1 = PackedFloatingADD(uVar4,uVar2);
  uVar2 = PackedFloatingSUB(~(ulonglong)(uint)((int)uVar7 >> 0x1f) &
                            (ulonglong)(uVar8 ^ DAT_005b00f8),(ulonglong)DAT_005b00f8);
  uVar1 = PackedFloatingADD(uVar1 | uVar8 ^ uVar7,uVar2);
  return uVar1 | DAT_005b0098 & uVar9;
}




/* Function: FUN_004cb040 */

ulonglong FUN_004cb040(void)

{
  uint uVar1;
  ulonglong in_MM0;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar5;
  
  uVar2 = in_MM0 & DAT_005b009c;
  uVar6 = -(uint)(DAT_005b00a8 < (int)uVar2);
  uVar3 = PackedFloatingMUL(uVar2,(ulonglong)DAT_005b00ac);
  uVar3 = PackedFloatingSUBR(uVar3,(ulonglong)DAT_005b00ac);
  uVar7 = PackedFloatingReciprocalSQRAprox((ulonglong)DAT_005b009c,uVar3);
  uVar8 = PackedFloatingMUL(uVar7,uVar7);
  uVar1 = (uint)((int)uVar2 < DAT_005b00e0);
  uVar4 = -uVar1;
  uVar5 = (ulonglong)uVar4;
  uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar3);
  uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
  uVar9 = PackedFloatingMUL(uVar7,uVar3);
  uVar2 = ~uVar5 & uVar9 | uVar2 & uVar4;
  uVar3 = PackedFloatingMUL(uVar2,uVar2);
  uVar8 = PackedFloatingMUL((ulonglong)DAT_005b00e8,uVar3);
  uVar7 = PackedFloatingADD((ulonglong)DAT_005b00f0,uVar3);
  uVar8 = PackedFloatingADD(uVar8,(ulonglong)DAT_005b00e4);
  uVar8 = PackedFloatingMUL(uVar8,uVar3);
  uVar3 = PackedFloatingMUL(uVar3,uVar7);
  uVar3 = PackedFloatingADD(uVar3,(ulonglong)DAT_005b00ec);
  uVar8 = PackedFloatingMUL(uVar8,uVar2);
  uVar7 = FloatingReciprocalAprox(uVar7,uVar3);
  uVar3 = PackedFloatingReciprocalIter1(uVar3,uVar7);
  uVar3 = PackedFloatingReciprocalIter2(uVar3,uVar7);
  uVar3 = PackedFloatingMUL(uVar3,uVar8);
  uVar2 = PackedFloatingADD(uVar2,uVar3);
  uVar3 = PackedFloatingADD(~uVar5 & (ulonglong)DAT_005b00f8 ^ DAT_005b0098 & in_MM0,
                            (ulonglong)DAT_005b00f4);
  uVar2 = PackedFloatingADD(uVar2,~uVar5 & uVar2);
  uVar2 = PackedFloatingADD(uVar3,uVar2 | (ulonglong)(uVar1 * -0x80000000) ^ DAT_005b0098 & in_MM0);
  return (ulonglong)(DAT_005b00b4 & uVar6) | ~(ulonglong)uVar6 & uVar2;
}




/* Function: FUN_004cb620 */

ulonglong FUN_004cb620(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong in_MM0;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = (uint)in_MM0;
  if ((int)(uVar1 ^ uVar1 & 0x80000000) < DAT_005b0154) {
    uVar5 = PackedFloatingMUL(in_MM0 & DAT_005b009c,(ulonglong)DAT_005b0150);
    uVar4 = PackedFloatingToIntDwordConv(uVar5,uVar5);
    uVar2 = (uint)uVar4;
    uVar5 = PackedIntToFloatingDwordConv(uVar4,uVar4);
    uVar5 = PackedFloatingMUL(CONCAT44((int)uVar5,(int)uVar5),DAT_005b0060);
    uVar7 = PackedFloatingADD(in_MM0 & DAT_005b009c,uVar5);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = PackedFloatingADD(uVar7,CONCAT44(uVar6,uVar6));
    uVar5 = CONCAT44((int)uVar5,(int)uVar5);
    if ((uVar4 & 1) != 0) {
      uVar5 = PackedFloatingSUBR(uVar5,DAT_005b0070);
    }
    iVar3 = (uVar1 >> 0x1f ^ uVar2 >> 2) << 0x1f;
    uVar7 = PackedFloatingMUL(uVar5,uVar5);
    uVar9 = PackedFloatingMUL(DAT_005b0068,uVar7);
    uVar8 = PackedFloatingMUL(DAT_005b0078,uVar7);
    uVar10 = PackedFloatingADD(uVar9,DAT_005b0018);
    uVar9 = PackedFloatingMUL(DAT_005b0080,uVar7);
    uVar8 = PackedFloatingMUL(uVar10,uVar8);
    uVar10 = PackedFloatingADD(uVar8,DAT_005b0018);
    uVar8 = PackedFloatingMUL(DAT_005b0088,uVar7);
    uVar7 = PackedFloatingMUL(uVar9,uVar10);
    uVar7 = PackedFloatingADD(uVar7,DAT_005b0018);
    uVar7 = PackedFloatingMUL(uVar7,CONCAT44((int)DAT_005b0018,(int)uVar8));
    uVar7 = PackedFloatingADD(uVar7,DAT_005b0018 >> 0x20);
    uVar4 = PackedFloatingMUL(uVar7,CONCAT44((int)uVar5,(int)DAT_005b0018));
    if (((uVar2 ^ uVar2 >> 1) & 1) != 0) {
      uVar4 = CONCAT44((int)uVar4,(int)(uVar4 >> 0x20));
    }
    uVar4 = CONCAT44(iVar3,iVar3) ^ uVar4 ^ (uVar1 & 0x80000000 ^ (uVar2 >> 1) << 0x1f);
  }
  else {
    uVar4 = (ulonglong)DAT_005b00a8;
  }
  return uVar4;
}




/* Function: FUN_004cb740 */

void FUN_004cb740(void)

{
  ulonglong in_MM0;
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((int)((uint)in_MM0 ^ (uint)in_MM0 & 0x80000000) < DAT_005b0154) {
    uVar1 = PackedFloatingMUL(in_MM0 & DAT_005b009c,(ulonglong)DAT_005b0150);
    uVar2 = PackedFloatingToIntDwordConv(uVar1,uVar1);
    uVar1 = PackedIntToFloatingDwordConv(uVar2,uVar2);
    uVar1 = PackedFloatingMUL(CONCAT44((int)uVar1,(int)uVar1),DAT_005b0060);
    uVar4 = PackedFloatingADD(in_MM0 & DAT_005b009c,uVar1);
    uVar3 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = PackedFloatingADD(uVar4,CONCAT44(uVar3,uVar3));
    uVar1 = CONCAT44((int)uVar1,(int)uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = PackedFloatingSUBR(uVar1,DAT_005b0070);
    }
    uVar4 = PackedFloatingMUL(uVar1,uVar1);
    uVar6 = PackedFloatingMUL(DAT_005b0068,uVar4);
    uVar5 = PackedFloatingMUL(DAT_005b0078,uVar4);
    uVar7 = PackedFloatingADD(uVar6,DAT_005b0018);
    uVar6 = PackedFloatingMUL(DAT_005b0080,uVar4);
    uVar5 = PackedFloatingMUL(uVar7,uVar5);
    uVar7 = PackedFloatingADD(uVar5,DAT_005b0018);
    uVar5 = PackedFloatingMUL(DAT_005b0088,uVar4);
    uVar4 = PackedFloatingMUL(uVar6,uVar7);
    uVar4 = PackedFloatingADD(uVar4,DAT_005b0018);
    uVar4 = PackedFloatingMUL(uVar4,CONCAT44((int)DAT_005b0018,(int)uVar5));
    uVar4 = PackedFloatingADD(uVar4,DAT_005b0018 >> 0x20);
    PackedFloatingMUL(uVar4,CONCAT44((int)uVar1,(int)DAT_005b0018));
  }
  return;
}




/* Function: FUN_004cbb38 */

void FUN_004cbb38(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined1 *puVar5;
  short *psVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  ushort *puVar11;
  int iVar12;
  int local_9c;
  int local_98;
  int local_94;
  int local_90 [3];
  int local_84;
  int local_80 [25];
  uint local_1c;
  ushort *local_18;
  int *local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  iVar8 = *(int *)(param_1 + 0x11c) + 0x80;
  puVar11 = (ushort *)(param_3 + 0x60);
  piVar7 = local_80 + 1;
  local_10 = iVar8;
  param_1 = 8;
  psVar6 = (short *)(*(int *)(param_2 + 0x50) + 0x60);
  do {
    if (param_1 != 4) {
      uVar1 = *puVar11;
      uVar2 = puVar11[-0x18];
      local_8 = CONCAT22(local_8._2_2_,uVar2);
      uVar3 = puVar11[-0x28];
      local_1c = (uint)uVar1;
      local_c = (uint)uVar3;
      if (((((uVar1 == 0 && uVar3 == 0) && uVar2 == 0) && puVar11[-8] == 0) && puVar11[8] == 0) &&
          puVar11[-0x20] == 0) {
        iVar4 = (int)psVar6[-0x30] * (int)(short)puVar11[-0x30] * 4;
        piVar7[-8] = iVar4;
        *piVar7 = iVar4;
        piVar7[0x10] = iVar4;
      }
      else {
        iVar12 = (short)(psVar6[-0x20] * puVar11[-0x20]) * 0x3b21 +
                 (short)(*psVar6 * uVar1) * -0x187e;
        iVar4 = (int)psVar6[-0x30] * (int)(short)puVar11[-0x30] * 0x4000;
        iVar8 = iVar12 + iVar4;
        iVar4 = iVar4 - iVar12;
        param_2._0_2_ = psVar6[-8] * puVar11[-8];
        local_c = (int)psVar6[-0x28] * (int)(short)uVar3;
        local_c._0_2_ = (short)((int)psVar6[-0x28] * (int)(short)uVar3);
        local_8 = (int)(short)local_c;
        iVar12 = (int)(short)(psVar6[8] * puVar11[8]);
        iVar9 = (short)param_2 * 0x2e75 + local_8 * 0x21f9 + iVar12 * -0x6c2 +
                (short)(psVar6[-0x18] * uVar2) * -0x4587;
        iVar12 = (short)(psVar6[-0x18] * uVar2) * 0x1ccd + (short)param_2 * -0x133e +
                 iVar12 * -0x1050 + local_8 * 0x5203;
        local_18 = puVar11;
        piVar7[-8] = iVar8 + 0x800 + iVar12 >> 0xc;
        piVar7[0x10] = (iVar8 - iVar12) + 0x800 >> 0xc;
        iVar8 = local_10;
        *piVar7 = iVar4 + 0x800 + iVar9 >> 0xc;
        iVar4 = (iVar4 - iVar9) + 0x800 >> 0xc;
        puVar11 = local_18;
      }
      piVar7[8] = iVar4;
    }
    puVar11 = puVar11 + 1;
    piVar7 = piVar7 + 1;
    psVar6 = psVar6 + 1;
    param_1 = param_1 + -1;
    local_18 = puVar11;
    local_14 = piVar7;
  } while (0 < param_1);
  param_1 = 0;
  piVar7 = &local_9c;
  do {
    puVar5 = (undefined1 *)(*(int *)(param_4 + param_1 * 4) + param_5);
    if (((((piVar7[1] == 0 && piVar7[3] == 0) && piVar7[5] == 0) && piVar7[7] == 0) &&
        piVar7[6] == 0) && piVar7[2] == 0) {
      uVar10 = *(undefined1 *)((*piVar7 + 0x10 >> 5 & 0x3ffU) + iVar8);
      *puVar5 = uVar10;
      puVar5[1] = uVar10;
      puVar5[3] = uVar10;
    }
    else {
      iVar4 = (short)piVar7[2] * 0x3b21 + (short)piVar7[6] * -0x187e;
      iVar8 = iVar4 + *piVar7 * 0x4000;
      local_c = *piVar7 * 0x4000 - iVar4;
      iVar4 = (int)(short)piVar7[5];
      local_8 = (int)(short)piVar7[1];
      iVar12 = iVar4 * 0x2e75 + local_8 * 0x21f9 + (short)piVar7[7] * -0x6c2 +
               (short)piVar7[3] * -0x4587;
      iVar4 = (short)piVar7[3] * 0x1ccd + iVar4 * -0x133e + (short)piVar7[7] * -0x1050 +
              local_8 * 0x5203;
      *puVar5 = *(undefined1 *)((iVar8 + 0x40000 + iVar4 >> 0x13 & 0x3ffU) + local_10);
      puVar5[3] = *(undefined1 *)(((iVar8 - iVar4) + 0x40000 >> 0x13 & 0x3ffU) + local_10);
      puVar5[1] = *(undefined1 *)(((int)(local_c + 0x40000 + iVar12) >> 0x13 & 0x3ffU) + local_10);
      uVar10 = *(undefined1 *)(((int)((local_c - iVar12) + 0x40000) >> 0x13 & 0x3ffU) + local_10);
      iVar8 = local_10;
    }
    piVar7 = piVar7 + 8;
    param_1 = param_1 + 1;
    puVar5[2] = uVar10;
  } while (param_1 < 4);
  return;
}




/* Function: FUN_004cbe4d */

void FUN_004cbe4d(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  undefined1 *puVar7;
  int local_4c;
  int local_48 [2];
  int local_40 [2];
  int local_38 [2];
  int local_30 [9];
  int local_c;
  int *local_8;
  
  iVar5 = *(int *)(param_1 + 0x11c) + 0x80;
  piVar2 = &local_4c;
  psVar6 = (short *)(param_3 + 0x30);
  local_c = iVar5;
  param_1 = 8;
  psVar4 = (short *)(*(int *)(param_2 + 0x50) + 0x30);
  do {
    if (((param_1 != 6) && (param_1 != 4)) && (param_1 != 2)) {
      if (((psVar6[0x20] == 0 && psVar6[0x10] == 0) && psVar6[-0x10] == 0) && *psVar6 == 0) {
        iVar1 = (int)psVar4[-0x18] * (int)psVar6[-0x18] * 4;
        *piVar2 = iVar1;
      }
      else {
        iVar5 = (int)psVar4[-0x18] * (int)psVar6[-0x18] * 0x8000;
        iVar1 = (short)(psVar4[0x10] * psVar6[0x10]) * 0x1b37 +
                (short)(psVar4[0x20] * psVar6[0x20]) * -0x1712 +
                (short)(psVar4[-0x10] * psVar6[-0x10]) * 0x73fc +
                (short)(*psVar4 * *psVar6) * -0x28ba;
        *piVar2 = iVar1 + 0x1000 + iVar5 >> 0xd;
        iVar1 = (iVar5 - iVar1) + 0x1000 >> 0xd;
        iVar5 = local_c;
      }
      piVar2[8] = iVar1;
    }
    psVar6 = psVar6 + 1;
    piVar2 = piVar2 + 1;
    psVar4 = psVar4 + 1;
    param_1 = param_1 + -1;
    local_8 = piVar2;
  } while (0 < param_1);
  param_1 = 0;
  piVar2 = &local_4c;
  do {
    puVar7 = (undefined1 *)(*(int *)(param_4 + param_1 * 4) + param_5);
    if (((piVar2[7] == 0 && piVar2[3] == 0) && piVar2[1] == 0) && piVar2[5] == 0) {
      uVar3 = *(undefined1 *)((*piVar2 + 0x10 >> 5 & 0x3ffU) + iVar5);
      *puVar7 = uVar3;
    }
    else {
      iVar5 = *piVar2 * 0x8000;
      iVar1 = (short)piVar2[3] * -0x28ba + (short)piVar2[7] * -0x1712 + (short)piVar2[1] * 0x73fc +
              (short)piVar2[5] * 0x1b37;
      *puVar7 = *(undefined1 *)((iVar1 + 0x80000 + iVar5 >> 0x14 & 0x3ffU) + local_c);
      uVar3 = *(undefined1 *)(((iVar5 - iVar1) + 0x80000 >> 0x14 & 0x3ffU) + local_c);
      iVar5 = local_c;
    }
    piVar2 = piVar2 + 8;
    param_1 = param_1 + 1;
    puVar7[1] = uVar3;
  } while (param_1 < 2);
  return;
}




/* Function: FUN_004cc00b */

void FUN_004cc00b(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  *(undefined1 *)(param_5 + *param_4) =
       *(undefined1 *)
        (((int)**(short **)(param_2 + 0x50) * (int)*param_3 + 4 >> 3 & 0x3ffU) + 0x80 +
        *(int *)(param_1 + 0x11c));
  return;
}




/* Function: FUN_004cc048 */

void FUN_004cc048(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 auStack_90 [140];
  
  if (DAT_005af750 == '\0') {
    FUN_004cd0b5(param_3,*(undefined4 *)(param_2 + 0x50),auStack_90,param_4,param_5,
                 *(int *)(param_1 + 0x11c) + 0x80);
  }
  else {
    FUN_004cd517();
  }
  return;
}




/* Function: FUN_004cc094 */

void FUN_004cc094(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 auStack_90 [140];
  
  if (DAT_005af750 == '\0') {
    FUN_004cdbcf(param_3,auStack_90,*(undefined4 *)(param_2 + 0x50),param_4,param_5,
                 *(int *)(param_1 + 0x11c) + 0x80);
  }
  else {
    FUN_004cdf2a();
  }
  return;
}




/* Function: FUN_004cc0e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cc0e0(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  undefined1 *puVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float local_11c [16];
  float local_dc [8];
  float local_bc [8];
  float local_9c [8];
  float local_7c [8];
  float local_5c [8];
  float local_3c [8];
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  
  fVar11 = (float10)_DAT_0058efec;
  fVar12 = (float10)_DAT_0058efe8;
  local_14 = *(int *)(param_1 + 0x11c) + 0x80;
  pfVar9 = *(float **)(param_2 + 0x50);
  pfVar7 = local_11c;
  local_1c = 1.12104e-44;
  do {
    if ((((((param_3[8] == 0 && param_3[0x10] == 0) && param_3[0x18] == 0) && param_3[0x20] == 0) &&
         param_3[0x28] == 0) && param_3[0x30] == 0) && param_3[0x38] == 0) {
      fVar1 = (float)(int)*param_3 * *pfVar9;
      *pfVar7 = fVar1;
      pfVar7[8] = fVar1;
      pfVar7[0x10] = fVar1;
      pfVar7[0x18] = fVar1;
      pfVar7[0x20] = fVar1;
      pfVar7[0x28] = fVar1;
      pfVar7[0x30] = fVar1;
      pfVar7[0x38] = fVar1;
    }
    else {
      fVar2 = (float)(int)param_3[0x30] * pfVar9[0x30];
      fVar1 = (float)((float10)(int)param_3[0x20] * (float10)pfVar9[0x20] +
                     (float10)(int)*param_3 * (float10)*pfVar9);
      fVar13 = (float10)(int)*param_3 * (float10)*pfVar9 -
               (float10)(int)param_3[0x20] * (float10)pfVar9[0x20];
      fVar14 = (float10)fVar2 + (float10)((float)(int)param_3[0x10] * pfVar9[0x10]);
      fVar15 = ((float10)((float)(int)param_3[0x10] * pfVar9[0x10]) - (float10)fVar2) * fVar11 -
               fVar14;
      local_18 = (float)(fVar14 + (float10)fVar1);
      fVar1 = (float)((float10)fVar1 - fVar14);
      fVar2 = (float)(fVar15 + fVar13);
      fVar13 = fVar13 - fVar15;
      fVar14 = (float10)(int)param_3[0x38] * (float10)pfVar9[0x38];
      fVar5 = (float)(int)param_3[0x28] * pfVar9[0x28] + (float)(int)param_3[0x18] * pfVar9[0x18];
      fVar6 = (float)(int)param_3[0x28] * pfVar9[0x28] - (float)(int)param_3[0x18] * pfVar9[0x18];
      fVar3 = (float)(fVar14 + (float10)(int)param_3[8] * (float10)pfVar9[8]);
      fVar14 = (float10)(int)param_3[8] * (float10)pfVar9[8] - fVar14;
      fVar15 = (float10)fVar3 + (float10)fVar5;
      fVar4 = (float)((fVar14 + (float10)fVar6) * fVar12);
      fVar16 = ((float10)fVar4 - (float10)fVar6 * (float10)_DAT_0058efe4) - fVar15;
      fVar17 = ((float10)fVar3 - (float10)fVar5) * fVar11 - fVar16;
      local_8 = (float)fVar17;
      local_c = (float)((fVar14 * (float10)_DAT_0058efe0 - (float10)fVar4) + fVar17);
      *pfVar7 = (float)(fVar15 + (float10)local_18);
      pfVar7[0x38] = (float)((float10)local_18 - fVar15);
      pfVar7[8] = (float)((float10)fVar2 + fVar16);
      pfVar7[0x30] = (float)((float10)fVar2 - fVar16);
      pfVar7[0x10] = (float)((float10)local_8 + fVar13);
      pfVar7[0x28] = (float)(fVar13 - (float10)local_8);
      pfVar7[0x20] = local_c + fVar1;
      pfVar7[0x18] = fVar1 - local_c;
    }
    pfVar9 = pfVar9 + 1;
    param_3 = param_3 + 1;
    pfVar7 = pfVar7 + 1;
    local_1c = (float)((int)local_1c + -1);
  } while (local_1c != 0.0);
  local_10 = 0;
  pfVar7 = local_11c + 2;
  do {
    puVar10 = (undefined1 *)(*(int *)(param_4 + local_10 * 4) + param_5);
    local_18 = *pfVar7 + pfVar7[4] + pfVar7[2] + pfVar7[-2];
    local_c = (float)((float10)pfVar7[3] + (float10)pfVar7[1]);
    local_8 = pfVar7[5] + pfVar7[-1];
    local_1c = pfVar7[-1] - pfVar7[5];
    fVar12 = ((float10)local_1c + (float10)(pfVar7[3] - pfVar7[1])) * fVar12;
    fVar11 = ((float10)local_8 - (float10)local_c) * fVar11 -
             ((fVar12 - (float10)(pfVar7[3] - pfVar7[1]) * (float10)_DAT_0058efe4) -
             ((float10)pfVar7[3] + (float10)pfVar7[1] + (float10)local_8));
    local_8 = (float)fVar11;
    local_c = (float)(((float10)local_1c * (float10)_DAT_0058efe0 - fVar12) + fVar11);
    iVar8 = ftol();
    *puVar10 = *(undefined1 *)((iVar8 + 4 >> 3 & 0x3ffU) + local_14);
    iVar8 = ftol();
    puVar10[7] = *(undefined1 *)((iVar8 + 4 >> 3 & 0x3ffU) + local_14);
    iVar8 = ftol();
    puVar10[1] = *(undefined1 *)((iVar8 + 4 >> 3 & 0x3ffU) + local_14);
    iVar8 = ftol();
    puVar10[6] = *(undefined1 *)((iVar8 + 4 >> 3 & 0x3ffU) + local_14);
    iVar8 = ftol();
    puVar10[2] = *(undefined1 *)((iVar8 + 4 >> 3 & 0x3ffU) + local_14);
    iVar8 = ftol();
    puVar10[5] = *(undefined1 *)((iVar8 + 4 >> 3 & 0x3ffU) + local_14);
    iVar8 = ftol();
    puVar10[4] = *(undefined1 *)((iVar8 + 4 >> 3 & 0x3ffU) + local_14);
    iVar8 = ftol();
    pfVar7 = pfVar7 + 8;
    local_10 = local_10 + 1;
    puVar10[3] = *(undefined1 *)((iVar8 + 4 >> 3 & 0x3ffU) + local_14);
    fVar12 = extraout_ST0;
    fVar11 = extraout_ST1;
  } while (local_10 < 8);
  return;
}




/* Function: FUN_004cc4c1 */

void FUN_004cc4c1(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(param_5 + 0x20))(*(undefined4 *)(param_5 + 0x28),1,0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 4) = param_1;
    *(undefined1 *)((int)puVar1 + 0x11) = param_2;
    puVar1[5] = param_3;
    puVar1[6] = param_4;
  }
  return;
}




/* Function: FUN_004cca59 */

void FUN_004cca59(undefined4 param_1,int param_2)

{
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  return;
}




/* Function: FUN_004cca6a */

undefined4
FUN_004cca6a(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6,
            int param_7,uint *param_8,uint *param_9)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *in_EAX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  int local_fc [15];
  uint local_c0 [16];
  uint local_80 [17];
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint *local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[7] = 0;
  local_80[8] = 0;
  local_80[9] = 0;
  local_80[10] = 0;
  local_80[0xb] = 0;
  local_80[0xc] = 0;
  local_80[0xd] = 0;
  local_80[0xe] = 0;
  local_80[0xf] = 0;
  piVar6 = (int *)param_1;
  uVar10 = param_2;
  do {
    local_80[*piVar6] = local_80[*piVar6] + 1;
    piVar6 = piVar6 + 1;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (local_80[0] == param_2) {
    *param_6 = 0;
    *in_EAX = 0;
  }
  else {
    uVar11 = 1;
    local_8 = *in_EAX;
    uVar10 = 0xf;
    do {
      if (local_80[uVar11] != 0) break;
      uVar11 = uVar11 + 1;
    } while (uVar11 < 0x10);
    local_c = uVar11;
    if (*in_EAX < uVar11) {
      local_8 = uVar11;
    }
    do {
      if (local_80[uVar10] != 0) break;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    local_30 = uVar10;
    if (uVar10 < local_8) {
      local_8 = uVar10;
    }
    *in_EAX = local_8;
    iVar12 = 1 << ((byte)uVar11 & 0x1f);
    for (; uVar11 < uVar10; uVar11 = uVar11 + 1) {
      if ((int)(iVar12 - local_80[uVar11]) < 0) {
        return 0xfffffffd;
      }
      iVar12 = (iVar12 - local_80[uVar11]) * 2;
    }
    uVar11 = local_80[uVar10];
    iVar12 = iVar12 - uVar11;
    local_38 = iVar12;
    if (iVar12 < 0) {
      return 0xfffffffd;
    }
    local_80[uVar10] = uVar11 + iVar12;
    iVar7 = 0;
    iVar3 = uVar10 - 1;
    local_c0[1] = 0;
    if (iVar3 != 0) {
      iVar14 = 0;
      do {
        iVar7 = iVar7 + *(int *)((int)local_80 + iVar14 + 4);
        iVar3 = iVar3 + -1;
        *(int *)((int)local_c0 + iVar14 + 8) = iVar7;
        iVar14 = iVar14 + 4;
      } while (iVar3 != 0);
    }
    uVar11 = 0;
    do {
      iVar7 = local_38;
      iVar3 = *param_1;
      param_1 = param_1 + 1;
      if (iVar3 != 0) {
        uVar8 = local_c0[iVar3];
        param_9[uVar8] = uVar11;
        local_c0[iVar3] = uVar8 + 1;
        iVar12 = iVar7;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_2);
    uVar10 = local_c0[uVar10];
    local_10 = -1;
    param_1 = param_9;
    iVar3 = -local_8;
    local_24 = 0;
    local_c0[0] = 0;
    local_fc[0] = 0;
    local_2c = 0;
    local_14 = 0;
    if ((int)local_c <= (int)local_30) {
      local_34 = local_c - 1;
      local_28 = local_80 + local_c;
      do {
        local_20 = *local_28;
        uVar1 = local_1c;
        while (local_1c = uVar1, local_20 != 0) {
          local_1c._2_2_ = (undefined2)((uint)uVar1 >> 0x10);
          local_20 = local_20 - 1;
          local_3c = local_8 + iVar3;
          if (local_3c < (int)local_c) {
            local_80[0x10] = iVar3 - local_8;
            do {
              iVar12 = local_10;
              local_10 = local_10 + 1;
              iVar3 = iVar3 + local_8;
              local_80[0x10] = local_80[0x10] + local_8;
              local_3c = local_3c + local_8;
              uVar11 = local_30 - iVar3;
              if (local_8 < local_30 - iVar3) {
                uVar11 = local_8;
              }
              uVar8 = local_c - iVar3;
              uVar4 = 1 << ((byte)uVar8 & 0x1f);
              if ((local_20 + 1 < uVar4) &&
                 (iVar7 = uVar4 + (-1 - local_20), puVar2 = local_28, uVar8 < uVar11)) {
                while (uVar8 = uVar8 + 1, uVar8 < uVar11) {
                  uVar4 = puVar2[1];
                  uVar5 = iVar7 * 2;
                  if (uVar5 < uVar4 || uVar5 - uVar4 == 0) break;
                  iVar7 = uVar5 - uVar4;
                  puVar2 = puVar2 + 1;
                }
              }
              local_14 = 1 << ((byte)uVar8 & 0x1f);
              uVar11 = *param_8 + local_14;
              if (0x5a0 < uVar11) {
                return 0xfffffffc;
              }
              local_2c = param_7 + *param_8 * 8;
              local_fc[local_10] = local_2c;
              uVar4 = local_24;
              *param_8 = uVar11;
              if (local_10 == 0) {
                *param_6 = local_2c;
              }
              else {
                local_c0[local_10] = local_24;
                local_1c = CONCAT31(CONCAT21(local_1c._2_2_,(undefined1)local_8),(byte)uVar8);
                uVar4 = uVar4 >> ((byte)local_80[0x10] & 0x1f);
                iVar12 = local_fc[iVar12];
                local_18 = (local_2c - iVar12 >> 3) - uVar4;
                *(undefined4 *)(iVar12 + uVar4 * 8) = local_1c;
                *(uint *)(iVar12 + 4 + uVar4 * 8) = local_18;
              }
              iVar12 = local_38;
            } while (local_3c < (int)local_c);
          }
          bVar13 = (byte)iVar3;
          if (param_1 < param_9 + uVar10) {
            local_18 = *param_1;
            if (local_18 < param_3) {
              local_1c._0_1_ = (local_18 < 0x100) - 1U & 0x60;
            }
            else {
              iVar7 = (local_18 - param_3) * 4;
              local_1c._0_1_ = *(char *)(iVar7 + param_5) + 0x50;
              local_18 = *(uint *)(iVar7 + param_4);
            }
            param_1 = param_1 + 1;
          }
          else {
            local_1c._0_1_ = 0xc0;
          }
          local_1c = CONCAT31(CONCAT21(local_1c._2_2_,(char)local_c - bVar13),(byte)local_1c);
          iVar7 = 1 << ((char)local_c - bVar13 & 0x1f);
          uVar11 = local_24 >> (bVar13 & 0x1f);
          if (uVar11 < local_14) {
            puVar9 = (undefined4 *)(local_2c + uVar11 * 8);
            do {
              *puVar9 = local_1c;
              puVar9[1] = local_18;
              uVar11 = uVar11 + iVar7;
              puVar9 = puVar9 + iVar7 * 2;
              iVar12 = local_38;
            } while (uVar11 < local_14);
          }
          uVar11 = 1 << ((byte)local_34 & 0x1f);
          while ((local_24 & uVar11) != 0) {
            local_24 = local_24 ^ uVar11;
            uVar11 = uVar11 >> 1;
          }
          local_24 = local_24 ^ uVar11;
          uVar1 = local_1c;
          if (((1 << (bVar13 & 0x1f)) - 1U & local_24) != local_c0[local_10]) {
            do {
              iVar3 = iVar3 - local_8;
              local_10 = local_10 + -1;
            } while (((1 << ((byte)iVar3 & 0x1f)) - 1U & local_24) != local_c0[local_10]);
          }
        }
        local_c = local_c + 1;
        local_28 = local_28 + 1;
        local_34 = local_34 + 1;
      } while ((int)local_c <= (int)local_30);
    }
    if ((iVar12 != 0) && (local_30 != 1)) {
      return 0xfffffffb;
    }
  }
  return 0;
}




/* Function: FUN_004ccdef */

int FUN_004ccdef(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(param_5 + 0x20))(*(undefined4 *)(param_5 + 0x28),0x13,4);
  if (iVar1 == 0) {
    iVar2 = -4;
  }
  else {
    iVar2 = FUN_004cca6a(param_1,0x13,0x13,0,0,param_3,param_4,&local_8,iVar1);
    if (iVar2 == -3) {
      *(char **)(param_5 + 0x18) = "oversubscribed dynamic bit lengths tree";
    }
    else if ((iVar2 == -5) || (*param_2 == 0)) {
      *(char **)(param_5 + 0x18) = "incomplete dynamic bit lengths tree";
      iVar2 = -3;
    }
    (**(code **)(param_5 + 0x24))(*(undefined4 *)(param_5 + 0x28),iVar1);
  }
  return iVar2;
}




/* Function: FUN_004cce6e */

int FUN_004cce6e(uint param_1,undefined4 param_2,int param_3,int *param_4,int *param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(param_9 + 0x20))(*(undefined4 *)(param_9 + 0x28),0x120,4);
  if (iVar1 == 0) {
    return -4;
  }
  iVar2 = FUN_004cca6a(param_3,param_1,0x101,&DAT_0058f028,&DAT_0058f0a8,param_6,param_8,&local_8,
                       iVar1);
  if (iVar2 == 0) {
    if (*param_4 == 0) goto LAB_004ccf53;
    iVar2 = FUN_004cca6a(param_3 + param_1 * 4,param_2,0,&DAT_0058f128,&DAT_0058f1a0,param_7,param_8
                         ,&local_8,iVar1);
    if (iVar2 == 0) {
      if ((*param_5 != 0) || (param_1 < 0x102)) {
        iVar2 = 0;
        goto LAB_004ccf5f;
      }
LAB_004ccf37:
      *(char **)(param_9 + 0x18) = "empty distance tree with lengths";
    }
    else {
      if (iVar2 == -3) {
        *(char **)(param_9 + 0x18) = "oversubscribed distance tree";
        goto LAB_004ccf5f;
      }
      if (iVar2 != -5) {
        if (iVar2 == -4) goto LAB_004ccf5f;
        goto LAB_004ccf37;
      }
      *(char **)(param_9 + 0x18) = "incomplete distance tree";
    }
  }
  else {
    if (iVar2 == -3) {
      *(char **)(param_9 + 0x18) = "oversubscribed literal/length tree";
      goto LAB_004ccf5f;
    }
    if (iVar2 == -4) goto LAB_004ccf5f;
LAB_004ccf53:
    *(char **)(param_9 + 0x18) = "incomplete literal/length tree";
  }
  iVar2 = -3;
LAB_004ccf5f:
  (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),iVar1);
  return iVar2;
}




/* Function: FUN_004ccf71 */

undefined4
FUN_004ccf71(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_1 = DAT_005b0158;
  *param_2 = DAT_005b015c;
  *param_3 = &DAT_005b0160;
  *param_4 = &DAT_005b1160;
  return 0;
}




/* Function: FUN_004ccfa0 */

int FUN_004ccfa0(undefined1 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *local_c;
  
  iVar2 = (int)param_1;
  puVar1 = *(undefined4 **)((int)param_1 + 0x30);
  local_c = *(undefined4 **)(param_2 + 0xc);
  puVar6 = *(undefined4 **)((int)param_1 + 0x34);
  if (puVar6 < puVar1) {
    puVar6 = *(undefined4 **)((int)param_1 + 0x2c);
  }
  uVar5 = *(uint *)(param_2 + 0x10);
  uVar7 = (int)puVar6 - (int)puVar1;
  if (uVar5 < (uint)((int)puVar6 - (int)puVar1)) {
    uVar7 = uVar5;
  }
  if ((uVar7 != 0) && (param_3 == -5)) {
    param_3 = 0;
  }
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + uVar7;
  *(uint *)(param_2 + 0x10) = uVar5 - uVar7;
  if (*(code **)((int)param_1 + 0x38) != (code *)0x0) {
    uVar4 = (**(code **)((int)param_1 + 0x38))(*(undefined4 *)((int)param_1 + 0x3c),puVar1,uVar7);
    *(undefined4 *)((int)param_1 + 0x3c) = uVar4;
    *(undefined4 *)(param_2 + 0x30) = uVar4;
  }
  puVar6 = puVar1;
  puVar8 = local_c;
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  local_c = (undefined4 *)((int)local_c + uVar7);
  for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  puVar3 = (undefined1 *)((int)puVar1 + uVar7);
  if ((undefined1 *)((int)puVar1 + uVar7) == *(undefined1 **)((int)param_1 + 0x2c)) {
    puVar1 = *(undefined4 **)((int)param_1 + 0x28);
    if (*(undefined1 **)((int)param_1 + 0x34) == *(undefined1 **)((int)param_1 + 0x2c)) {
      *(undefined4 **)((int)param_1 + 0x34) = puVar1;
    }
    uVar5 = *(uint *)(param_2 + 0x10);
    uVar7 = *(int *)((int)param_1 + 0x34) - (int)puVar1;
    if (uVar5 < uVar7) {
      uVar7 = uVar5;
    }
    if ((uVar7 != 0) && (param_3 == -5)) {
      param_3 = 0;
    }
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + uVar7;
    *(uint *)(param_2 + 0x10) = uVar5 - uVar7;
    if (*(code **)((int)param_1 + 0x38) != (code *)0x0) {
      uVar4 = (**(code **)((int)param_1 + 0x38))(*(undefined4 *)((int)param_1 + 0x3c),puVar1,uVar7);
      *(undefined4 *)((int)param_1 + 0x3c) = uVar4;
      *(undefined4 *)(param_2 + 0x30) = uVar4;
    }
    puVar6 = puVar1;
    puVar8 = local_c;
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    local_c = (undefined4 *)((int)local_c + uVar7);
    for (uVar5 = uVar7 & 3; puVar3 = (undefined1 *)((int)puVar1 + uVar7), uVar5 != 0;
        uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  param_1 = puVar3;
  *(undefined4 **)(param_2 + 0xc) = local_c;
  *(undefined1 **)(iVar2 + 0x30) = param_1;
  return param_3;
}




/* Function: FUN_004cd0b5 */

void FUN_004cd0b5(short *param_1,short *param_2,int *param_3,int param_4,int param_5,int param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  undefined4 *puVar19;
  short *local_48;
  short *local_44;
  int *local_40;
  int local_3c;
  int local_8;
  
  local_48 = param_1;
  local_44 = param_2;
  local_40 = param_3;
  local_3c = 8;
  do {
    iVar15 = ((int)local_48[0x10] * (int)local_44[0x10] + (int)local_48[0x30] * (int)local_44[0x30])
             * 0x1151;
    iVar8 = (int)local_48[0x30] * (int)local_44[0x30] * -0x3b21 + iVar15;
    iVar15 = (int)local_48[0x10] * (int)local_44[0x10] * 0x187e + iVar15;
    iVar9 = ((int)local_48[0x20] * (int)local_44[0x20] + (int)*local_48 * (int)*local_44) * 0x2000;
    iVar5 = ((int)*local_48 * (int)*local_44 - (int)local_48[0x20] * (int)local_44[0x20]) * 0x2000;
    iVar10 = iVar9 + iVar15;
    iVar6 = iVar5 + iVar8;
    iVar9 = iVar9 - iVar15;
    iVar5 = iVar5 - iVar8;
    iVar15 = (int)local_48[0x38] * (int)local_44[0x38];
    iVar11 = (int)local_48[0x18] * (int)local_44[0x18];
    iVar16 = (int)local_48[8] * (int)local_44[8];
    iVar8 = (int)local_48[0x28] * (int)local_44[0x28];
    iVar7 = (iVar15 + iVar16) * -0x1ccd;
    iVar13 = (iVar8 + iVar11) * -0x5203;
    iVar17 = (iVar15 + iVar11 + iVar8 + iVar16) * 0x25a1;
    iVar12 = (iVar15 + iVar11) * -0x3ec5 + iVar17;
    iVar17 = (iVar8 + iVar16) * -0xc7c + iVar17;
    iVar15 = iVar7 + iVar12 + iVar15 * 0x98e;
    iVar14 = iVar13 + iVar17 + iVar8 * 0x41b3;
    iVar8 = iVar12 + iVar13 + iVar11 * 0x6254;
    iVar7 = iVar7 + iVar17 + iVar16 * 0x300b;
    local_40[0x20] = (iVar9 - iVar15) + 0x400 >> 0xb;
    local_40[0x18] = iVar15 + iVar9 + 0x400 >> 0xb;
    local_40[0x28] = (iVar5 - iVar14) + 0x400 >> 0xb;
    local_40[0x30] = (iVar6 - iVar8) + 0x400 >> 0xb;
    local_40[0x10] = iVar14 + iVar5 + 0x400 >> 0xb;
    local_40[8] = iVar8 + iVar6 + 0x400 >> 0xb;
    local_40[0x38] = (iVar10 - iVar7) + 0x400 >> 0xb;
    *local_40 = iVar10 + iVar7 + 0x400 >> 0xb;
    local_48 = local_48 + 1;
    local_40 = local_40 + 1;
    local_44 = local_44 + 1;
    local_3c = local_3c + -1;
  } while (local_3c != 0);
  local_3c = 8;
  local_8 = 0;
  local_40 = param_3;
  do {
    piVar18 = (int *)(param_4 + local_8);
    local_8 = local_8 + 4;
    puVar19 = (undefined4 *)(*piVar18 + param_5);
    iVar15 = (local_40[2] + local_40[6]) * 0x1151;
    iVar5 = local_40[6] * -0x3b21 + iVar15;
    iVar15 = local_40[2] * 0x187e + iVar15;
    iVar11 = (local_40[4] + *local_40) * 0x2000;
    iVar7 = (*local_40 - local_40[4]) * 0x2000;
    iVar12 = iVar11 + iVar15;
    iVar9 = iVar7 + iVar5;
    iVar11 = iVar11 - iVar15;
    iVar7 = iVar7 - iVar5;
    iVar15 = local_40[7];
    iVar5 = local_40[3];
    iVar6 = local_40[1];
    iVar8 = local_40[5];
    iVar10 = (iVar15 + iVar6) * -0x1ccd;
    iVar14 = (iVar8 + iVar5) * -0x5203;
    iVar16 = (iVar15 + iVar5 + iVar8 + iVar6) * 0x25a1;
    iVar13 = (iVar15 + iVar5) * -0x3ec5 + iVar16;
    iVar16 = (iVar8 + iVar6) * -0xc7c + iVar16;
    iVar15 = iVar10 + iVar13 + iVar15 * 0x98e;
    iVar8 = iVar14 + iVar16 + iVar8 * 0x41b3;
    iVar5 = iVar13 + iVar14 + iVar5 * 0x6254;
    iVar6 = iVar10 + iVar16 + iVar6 * 0x300b;
    uVar1 = *(undefined1 *)(param_6 + ((iVar12 - iVar6) + 0x20000 >> 0x12 & 0x3ffU));
    uVar2 = *(undefined1 *)(param_6 + ((iVar9 - iVar5) + 0x20000 >> 0x12 & 0x3ffU));
    uVar3 = *(undefined1 *)(param_6 + ((iVar7 - iVar8) + 0x20000 >> 0x12 & 0x3ffU));
    uVar4 = *(undefined1 *)(param_6 + ((iVar11 - iVar15) + 0x20000 >> 0x12 & 0x3ffU));
    *puVar19 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                           (param_6 + (iVar11 + iVar15 + 0x20000 >> 0x12 & 0x3ffU)),
                                          *(undefined1 *)
                                           (param_6 + (iVar7 + iVar8 + 0x20000 >> 0x12 & 0x3ffU))),
                                 *(undefined1 *)
                                  (param_6 + (iVar9 + iVar5 + 0x20000 >> 0x12 & 0x3ffU))),
                        *(undefined1 *)(param_6 + (iVar12 + iVar6 + 0x20000 >> 0x12 & 0x3ffU)));
    puVar19[1] = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
    local_40 = local_40 + 8;
    local_3c = local_3c + -1;
  } while (local_3c != 0);
  return;
}




/* Function: FUN_004cd517 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cd517(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                 int param_5,int param_6)

{
  undefined2 uVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar8;
  short sVar9;
  short sVar11;
  undefined8 uVar7;
  int iVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  short sVar24;
  short sVar25;
  short sVar29;
  ulonglong uVar21;
  int iVar26;
  int iVar27;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar28;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  ulonglong uVar34;
  int iVar38;
  int iVar39;
  ulonglong uVar35;
  ulonglong uVar36;
  int iVar40;
  ulonglong uVar37;
  short sVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  short sVar50;
  undefined8 uVar45;
  short sVar49;
  int iVar51;
  int iVar52;
  short sVar54;
  ulonglong uVar47;
  int iVar53;
  undefined8 uVar48;
  int iVar55;
  int iVar56;
  int iVar57;
  undefined8 uVar58;
  int iVar60;
  int iVar61;
  int iVar62;
  undefined8 uVar59;
  short sVar63;
  int iVar64;
  short sVar67;
  short sVar68;
  undefined8 uVar65;
  int iVar69;
  short sVar70;
  int iVar71;
  int iVar72;
  ulonglong uVar73;
  int iVar74;
  int iVar75;
  undefined8 *local_18;
  undefined8 *local_14;
  undefined8 *local_10;
  int local_c;
  int local_8;
  ulonglong uVar46;
  ulonglong uVar66;
  
  local_18 = param_1;
  local_10 = param_2;
  local_8 = 2;
  local_14 = param_3;
  do {
    uVar7 = local_18[4];
    uVar45 = local_10[4];
    uVar58 = local_18[0xc];
    sVar3 = (short)uVar7 * (short)uVar45;
    sVar8 = (short)((ulonglong)uVar7 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
    sVar9 = (short)((ulonglong)uVar7 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
    sVar11 = (short)((ulonglong)uVar7 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
    uVar37 = CONCAT26(sVar11,CONCAT24(sVar9,CONCAT22(sVar8,sVar3)));
    uVar7 = local_10[0xc];
    sVar17 = (short)uVar58 * (short)uVar7;
    sVar24 = (short)((ulonglong)uVar58 >> 0x10) * (short)((ulonglong)uVar7 >> 0x10);
    sVar25 = (short)((ulonglong)uVar58 >> 0x20) * (short)((ulonglong)uVar7 >> 0x20);
    sVar29 = (short)((ulonglong)uVar58 >> 0x30) * (short)((ulonglong)uVar7 >> 0x30);
    uVar34 = CONCAT26(sVar29,CONCAT24(sVar25,CONCAT22(sVar24,sVar17)));
    uVar45 = pmaddwd(uVar37,DAT_0058f360);
    uVar58 = pmaddwd(uVar37 >> 0x10,DAT_0058f360);
    uVar37 = CONCAT26(sVar11 + sVar29,
                      CONCAT24(sVar9 + sVar25,CONCAT22(sVar8 + sVar24,sVar3 + sVar17)));
    uVar21 = pmaddwd(uVar34,DAT_0058f380);
    uVar34 = pmaddwd(uVar34 >> 0x10,DAT_0058f380);
    uVar7 = pmaddwd(uVar37,DAT_0058f358);
    uVar65 = pmaddwd(uVar37 >> 0x10,DAT_0058f358);
    iVar5 = (int)DAT_0058f3b0;
    iVar6 = (int)((ulonglong)DAT_0058f3b0 >> 0x20);
    iVar18 = (int)(uVar21 ^ DAT_0058f3a8) + iVar5 + (int)uVar7;
    iVar51 = (int)((ulonglong)uVar7 >> 0x20);
    iVar26 = (int)((uVar21 ^ DAT_0058f3a8) >> 0x20) + iVar6 + iVar51;
    iVar42 = (int)uVar45 + (int)uVar7;
    iVar51 = (int)((ulonglong)uVar45 >> 0x20) + iVar51;
    uVar7 = *local_18;
    iVar30 = (int)(uVar34 ^ DAT_0058f3a8) + iVar5 + (int)uVar65;
    iVar60 = (int)((ulonglong)uVar65 >> 0x20);
    iVar38 = (int)((uVar34 ^ DAT_0058f3a8) >> 0x20) + iVar6 + iVar60;
    uVar45 = *local_10;
    iVar55 = (int)uVar58 + (int)uVar65;
    iVar60 = (int)((ulonglong)uVar58 >> 0x20) + iVar60;
    uVar58 = local_18[8];
    sVar3 = (short)uVar7 * (short)uVar45;
    sVar8 = (short)((ulonglong)uVar7 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
    sVar9 = (short)((ulonglong)uVar7 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
    sVar11 = (short)((ulonglong)uVar7 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
    uVar7 = local_10[8];
    sVar17 = (short)uVar58 * (short)uVar7;
    sVar24 = (short)((ulonglong)uVar58 >> 0x10) * (short)((ulonglong)uVar7 >> 0x10);
    sVar25 = (short)((ulonglong)uVar58 >> 0x20) * (short)((ulonglong)uVar7 >> 0x20);
    sVar29 = (short)((ulonglong)uVar58 >> 0x30) * (short)((ulonglong)uVar7 >> 0x30);
    uVar37 = CONCAT26(sVar11 + sVar29,
                      CONCAT24(sVar9 + sVar25,CONCAT22(sVar8 + sVar24,sVar3 + sVar17)));
    uVar34 = CONCAT26(sVar11 - sVar29,
                      CONCAT24(sVar9 - sVar25,CONCAT22(sVar8 - sVar24,sVar3 - sVar17)));
    uVar7 = pmaddwd(uVar37,DAT_0058f3b8);
    uVar65 = pmaddwd(uVar37 >> 0x10,DAT_0058f3b8);
    uVar45 = pmaddwd(uVar34,DAT_0058f3b8);
    uVar58 = pmaddwd(uVar34 >> 0x10,DAT_0058f3b8);
    iVar4 = (int)uVar7 * 0x2000;
    iVar10 = (int)((ulonglong)uVar7 >> 0x20) * 0x2000;
    iVar64 = (int)uVar65 * 0x2000;
    iVar69 = (int)((ulonglong)uVar65 >> 0x20) * 0x2000;
    iVar43 = iVar42 + iVar4;
    iVar52 = iVar51 + iVar10;
    iVar4 = iVar4 - iVar42;
    iVar10 = iVar10 - iVar51;
    iVar19 = (int)uVar58 * 0x2000;
    iVar27 = (int)((ulonglong)uVar58 >> 0x20) * 0x2000;
    iVar56 = iVar55 + iVar64;
    iVar61 = iVar60 + iVar69;
    iVar64 = iVar64 - iVar55;
    iVar69 = iVar69 - iVar60;
    iVar31 = iVar30 + iVar19;
    iVar39 = iVar38 + iVar27;
    iVar60 = (int)uVar45 * 0x2000;
    iVar14 = (int)((ulonglong)uVar45 >> 0x20) * 0x2000;
    iVar19 = iVar19 - iVar30;
    iVar27 = iVar27 - iVar38;
    uVar7 = local_18[2];
    iVar30 = iVar18 + iVar60;
    iVar38 = iVar26 + iVar14;
    uVar45 = local_10[2];
    iVar60 = iVar60 - iVar18;
    iVar14 = iVar14 - iVar26;
    uVar58 = local_18[0xe];
    sVar63 = (short)uVar7 * (short)uVar45;
    sVar67 = (short)((ulonglong)uVar7 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
    sVar68 = (short)((ulonglong)uVar7 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
    sVar70 = (short)((ulonglong)uVar7 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
    uVar66 = CONCAT26(sVar70,CONCAT24(sVar68,CONCAT22(sVar67,sVar63)));
    uVar7 = local_10[0xe];
    uVar45 = local_18[10];
    sVar3 = (short)uVar58 * (short)uVar7;
    sVar8 = (short)((ulonglong)uVar58 >> 0x10) * (short)((ulonglong)uVar7 >> 0x10);
    sVar9 = (short)((ulonglong)uVar58 >> 0x20) * (short)((ulonglong)uVar7 >> 0x20);
    sVar11 = (short)((ulonglong)uVar58 >> 0x30) * (short)((ulonglong)uVar7 >> 0x30);
    uVar37 = CONCAT26(sVar11,CONCAT24(sVar9,CONCAT22(sVar8,sVar3)));
    uVar7 = local_10[10];
    uVar58 = local_18[6];
    sVar17 = (short)uVar45 * (short)uVar7;
    sVar24 = (short)((ulonglong)uVar45 >> 0x10) * (short)((ulonglong)uVar7 >> 0x10);
    sVar25 = (short)((ulonglong)uVar45 >> 0x20) * (short)((ulonglong)uVar7 >> 0x20);
    sVar29 = (short)((ulonglong)uVar45 >> 0x30) * (short)((ulonglong)uVar7 >> 0x30);
    uVar22 = CONCAT26(sVar29,CONCAT24(sVar25,CONCAT22(sVar24,sVar17)));
    uVar7 = local_10[6];
    sVar41 = (short)uVar58 * (short)uVar7;
    sVar49 = (short)((ulonglong)uVar58 >> 0x10) * (short)((ulonglong)uVar7 >> 0x10);
    sVar50 = (short)((ulonglong)uVar58 >> 0x20) * (short)((ulonglong)uVar7 >> 0x20);
    sVar54 = (short)((ulonglong)uVar58 >> 0x30) * (short)((ulonglong)uVar7 >> 0x30);
    uVar46 = CONCAT26(sVar54,CONCAT24(sVar50,CONCAT22(sVar49,sVar41)));
    uVar34 = CONCAT26(sVar11 + sVar70,
                      CONCAT24(sVar9 + sVar68,CONCAT22(sVar8 + sVar67,sVar3 + sVar63)));
    uVar47 = CONCAT26(sVar29 + sVar54,
                      CONCAT24(sVar25 + sVar50,CONCAT22(sVar24 + sVar49,sVar17 + sVar41)));
    uVar36 = CONCAT26(sVar11 + sVar54,
                      CONCAT24(sVar9 + sVar50,CONCAT22(sVar8 + sVar49,sVar3 + sVar41)));
    uVar35 = CONCAT26(sVar29 + sVar70,
                      CONCAT24(sVar25 + sVar68,CONCAT22(sVar24 + sVar67,sVar17 + sVar63)));
    uVar23 = CONCAT26(sVar11 + sVar54 + sVar29 + sVar70,
                      CONCAT24(sVar9 + sVar50 + sVar25 + sVar68,
                               CONCAT22(sVar8 + sVar49 + sVar24 + sVar67,
                                        sVar3 + sVar41 + sVar17 + sVar63)));
    uVar7 = pmaddwd(uVar23,DAT_0058f370);
    uVar21 = pmaddwd(uVar34,_DAT_0058f368);
    uVar45 = pmaddwd(uVar23 >> 0x10,DAT_0058f370);
    iVar26 = (int)(uVar21 ^ DAT_0058f3a8) + iVar5;
    iVar42 = (int)((uVar21 ^ DAT_0058f3a8) >> 0x20) + iVar6;
    uVar23 = pmaddwd(uVar47,DAT_0058f398);
    uVar47 = pmaddwd(uVar47 >> 0x10,DAT_0058f398);
    uVar73 = pmaddwd(uVar34 >> 0x10,_DAT_0058f368);
    uVar21 = pmaddwd(uVar36,DAT_0058f388);
    iVar20 = (int)(uVar23 ^ DAT_0058f3a8) + iVar5;
    iVar28 = (int)((uVar23 ^ DAT_0058f3a8) >> 0x20) + iVar6;
    uVar23 = pmaddwd(uVar36 >> 0x10,DAT_0058f388);
    uVar36 = pmaddwd(uVar35,DAT_0058f350);
    iVar44 = (int)(uVar47 ^ DAT_0058f3a8) + iVar5;
    iVar53 = (int)((uVar47 ^ DAT_0058f3a8) >> 0x20) + iVar6;
    uVar34 = pmaddwd(uVar35 >> 0x10,DAT_0058f350);
    iVar71 = (int)(uVar73 ^ DAT_0058f3a8) + iVar5;
    iVar74 = (int)((uVar73 ^ DAT_0058f3a8) >> 0x20) + iVar6;
    iVar12 = (int)(uVar21 ^ DAT_0058f3a8) + iVar5 + (int)uVar7;
    iVar51 = (int)((ulonglong)uVar7 >> 0x20);
    iVar15 = (int)((uVar21 ^ DAT_0058f3a8) >> 0x20) + iVar6 + iVar51;
    iVar57 = (int)(uVar23 ^ DAT_0058f3a8) + iVar5 + (int)uVar45;
    iVar18 = (int)((ulonglong)uVar45 >> 0x20);
    iVar62 = (int)((uVar23 ^ DAT_0058f3a8) >> 0x20) + iVar6 + iVar18;
    iVar32 = (int)(uVar36 ^ DAT_0058f3a8) + iVar5 + (int)uVar7;
    iVar51 = (int)((uVar36 ^ DAT_0058f3a8) >> 0x20) + iVar6 + iVar51;
    iVar5 = (int)(uVar34 ^ DAT_0058f3a8) + iVar5 + (int)uVar45;
    iVar18 = (int)((uVar34 ^ DAT_0058f3a8) >> 0x20) + iVar6 + iVar18;
    uVar7 = pmaddwd(uVar37,DAT_0058f348);
    uVar45 = pmaddwd(uVar37 >> 0x10,DAT_0058f348);
    uVar65 = pmaddwd(uVar22,DAT_0058f390);
    uVar58 = pmaddwd(uVar22 >> 0x10,DAT_0058f390);
    uVar59 = pmaddwd(uVar46,DAT_0058f3a0);
    uVar48 = pmaddwd(uVar46 >> 0x10,DAT_0058f3a0);
    iVar6 = (int)uVar7 + iVar26 + iVar12;
    iVar55 = (int)((ulonglong)uVar7 >> 0x20) + iVar42 + iVar15;
    iVar13 = (int)uVar45 + iVar71 + iVar57;
    iVar16 = (int)((ulonglong)uVar45 >> 0x20) + iVar74 + iVar62;
    uVar45 = pmaddwd(uVar66,DAT_0058f378);
    iVar33 = (int)uVar65 + iVar20 + iVar32;
    iVar40 = (int)((ulonglong)uVar65 >> 0x20) + iVar28 + iVar51;
    uVar7 = pmaddwd(uVar66 >> 0x10,DAT_0058f378);
    iVar72 = (int)uVar45 + iVar32 + iVar26;
    iVar75 = (int)((ulonglong)uVar45 >> 0x20) + iVar51 + iVar42;
    iVar32 = (int)uVar7 + iVar5 + iVar71;
    iVar71 = (int)((ulonglong)uVar7 >> 0x20) + iVar18 + iVar74;
    iVar51 = (int)uVar58 + iVar44 + iVar5;
    iVar18 = (int)((ulonglong)uVar58 >> 0x20) + iVar53 + iVar18;
    iVar26 = (int)DAT_0058f3c0;
    iVar5 = (int)((ulonglong)DAT_0058f3c0 >> 0x20);
    iVar20 = (int)uVar59 + iVar12 + iVar20;
    iVar15 = (int)((ulonglong)uVar59 >> 0x20) + iVar15 + iVar28;
    iVar42 = (int)uVar48 + iVar57 + iVar44;
    iVar12 = (int)((ulonglong)uVar48 >> 0x20) + iVar62 + iVar53;
    local_14[0xe] =
         CONCAT44(CONCAT22((short)((iVar61 - iVar71) + iVar5 >> 0xb),
                           (short)((iVar52 - iVar75) + iVar5 >> 0xb)),
                  CONCAT22((short)((iVar56 - iVar32) + iVar26 >> 0xb),
                           (short)((iVar43 - iVar72) + iVar26 >> 0xb)));
    *local_14 = CONCAT44(CONCAT22((short)(iVar71 + iVar61 + iVar5 >> 0xb),
                                  (short)(iVar75 + iVar52 + iVar5 >> 0xb)),
                         CONCAT22((short)(iVar32 + iVar56 + iVar26 >> 0xb),
                                  (short)(iVar72 + iVar43 + iVar26 >> 0xb)));
    local_14[0xc] =
         CONCAT44(CONCAT22((short)((iVar39 - iVar12) + iVar5 >> 0xb),
                           (short)((iVar38 - iVar15) + iVar5 >> 0xb)),
                  CONCAT22((short)((iVar31 - iVar42) + iVar26 >> 0xb),
                           (short)((iVar30 - iVar20) + iVar26 >> 0xb)));
    local_14[2] = CONCAT44(CONCAT22((short)(iVar12 + iVar39 + iVar5 >> 0xb),
                                    (short)(iVar15 + iVar38 + iVar5 >> 0xb)),
                           CONCAT22((short)(iVar42 + iVar31 + iVar26 >> 0xb),
                                    (short)(iVar20 + iVar30 + iVar26 >> 0xb)));
    local_14[4] = CONCAT44(CONCAT22((short)(iVar27 + iVar18 + iVar5 >> 0xb),
                                    (short)(iVar14 + iVar40 + iVar5 >> 0xb)),
                           CONCAT22((short)(iVar19 + iVar51 + iVar26 >> 0xb),
                                    (short)(iVar60 + iVar33 + iVar26 >> 0xb)));
    local_14[10] = CONCAT44(CONCAT22((short)((iVar27 - iVar18) + iVar5 >> 0xb),
                                     (short)((iVar14 - iVar40) + iVar5 >> 0xb)),
                            CONCAT22((short)((iVar19 - iVar51) + iVar26 >> 0xb),
                                     (short)((iVar60 - iVar33) + iVar26 >> 0xb)));
    local_14[6] = CONCAT44(CONCAT22((short)(iVar69 + iVar16 + iVar5 >> 0xb),
                                    (short)(iVar10 + iVar55 + iVar5 >> 0xb)),
                           CONCAT22((short)(iVar64 + iVar13 + iVar26 >> 0xb),
                                    (short)(iVar4 + iVar6 + iVar26 >> 0xb)));
    local_18 = local_18 + 1;
    local_10 = local_10 + 1;
    local_14[8] = CONCAT44(CONCAT22((short)((iVar69 - iVar16) + iVar5 >> 0xb),
                                    (short)((iVar10 - iVar55) + iVar5 >> 0xb)),
                           CONCAT22((short)((iVar64 - iVar13) + iVar26 >> 0xb),
                                    (short)((iVar4 - iVar6) + iVar26 >> 0xb)));
    local_14 = local_14 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  local_8 = 8;
  local_14 = param_3;
  local_c = 0;
  do {
    uVar7 = *local_14;
    uVar45 = local_14[1];
    sVar3 = (short)uVar45;
    sVar17 = (short)uVar7;
    sVar8 = (short)((ulonglong)uVar45 >> 0x10);
    sVar24 = (short)((ulonglong)uVar7 >> 0x10);
    iVar18 = CONCAT22(sVar24 + sVar8,sVar17 + sVar3);
    sVar9 = (short)((ulonglong)uVar45 >> 0x20);
    sVar25 = (short)((ulonglong)uVar7 >> 0x20);
    sVar29 = (short)((ulonglong)uVar7 >> 0x30);
    sVar11 = (short)((ulonglong)uVar45 >> 0x30);
    uVar65 = pmaddwd(CONCAT44((int)((ulonglong)uVar45 >> 0x20),(int)((ulonglong)uVar7 >> 0x20)),
                     _DAT_0058f3d8);
    uVar58 = pmaddwd(CONCAT26(sVar29 + sVar11,CONCAT24(sVar25 + sVar9,iVar18)),_DAT_0058f3e0);
    iVar4 = (int)((ulonglong)uVar58 >> 0x20);
    iVar51 = (int)((ulonglong)DAT_0058f3b0 >> 0x20);
    iVar5 = (iVar18 << 0x10) >> 3;
    iVar10 = (int)((uint)(ushort)(sVar17 - sVar3) << 0x10) >> 3;
    iVar18 = (int)uVar65 + iVar4;
    iVar4 = ((uint)((ulonglong)uVar65 >> 0x20) ^ (uint)(DAT_0058f3a8 >> 0x20)) + iVar51 + iVar4;
    sVar41 = sVar17 + sVar3;
    sVar49 = sVar24 + sVar8;
    iVar6 = iVar5 + iVar18;
    iVar38 = iVar10 + iVar4;
    iVar5 = iVar5 - iVar18;
    iVar10 = iVar10 - iVar4;
    uVar7 = pmaddwd(uVar7,_DAT_0058f3e8);
    uVar58 = pmaddwd(CONCAT26(sVar49 + sVar29 + sVar11,
                              CONCAT24(sVar41 + sVar25 + sVar9,CONCAT22(sVar49 * 2,sVar41 * 2))),
                     _DAT_0058f408);
    uVar37 = pmaddwd(CONCAT26(sVar29 + sVar11,CONCAT24(sVar25 + sVar9,CONCAT22(sVar49,sVar41))),
                     _DAT_0058f400);
    uVar34 = pmaddwd(CONCAT26(sVar24 + sVar11,
                              CONCAT24(sVar17 + sVar9,CONCAT22(sVar29 + sVar8,sVar25 + sVar3))),
                     _DAT_0058f3f8);
    uVar45 = pmaddwd(uVar45,_DAT_0058f3f0);
    iVar26 = (int)((ulonglong)uVar58 >> 0x20);
    iVar42 = (int)(uVar34 ^ DAT_0058f3a8) + (int)DAT_0058f3b0;
    iVar55 = (int)((uVar34 ^ DAT_0058f3a8) >> 0x20) + iVar51;
    iVar18 = (int)(uVar37 ^ DAT_0058f3a8) + (int)DAT_0058f3b0 + iVar26;
    iVar26 = (int)((uVar37 ^ DAT_0058f3a8) >> 0x20) + iVar51 + iVar26;
    iVar4 = (int)uVar45 + iVar42 + iVar18;
    iVar30 = (int)((ulonglong)uVar45 >> 0x20) + iVar55 + iVar26;
    iVar51 = (int)uVar7 + iVar55 + iVar18;
    iVar18 = (int)((ulonglong)uVar7 >> 0x20) + iVar42 + iVar26;
    iVar26 = (int)DAT_0058f3c8;
    iVar42 = (int)((ulonglong)DAT_0058f3c8 >> 0x20);
    uVar34 = CONCAT44(iVar4 + iVar10 + iVar42 >> 0x12,iVar30 + iVar5 + iVar26 >> 0x12) &
             DAT_0058f3d0;
    piVar2 = (int *)(param_4 + local_c);
    uVar37 = CONCAT44(iVar18 + iVar38 + iVar42 >> 0x12,iVar51 + iVar6 + iVar26 >> 0x12) &
             DAT_0058f3d0;
    uVar1 = CONCAT11(*(undefined1 *)(param_6 + (int)uVar34),
                     *(undefined1 *)(param_6 + (int)(uVar34 >> 0x20)));
    local_c = local_c + 4;
    uVar21 = CONCAT44((iVar38 - iVar18) + iVar42 >> 0x12,(iVar6 - iVar51) + iVar26 >> 0x12) &
             DAT_0058f3d0;
    uVar34 = CONCAT44((iVar10 - iVar4) + iVar42 >> 0x12,(iVar5 - iVar30) + iVar26 >> 0x12) &
             DAT_0058f3d0;
    local_14 = local_14 + 2;
    *(ulonglong *)(*piVar2 + param_5) =
         CONCAT44(CONCAT22((short)CONCAT31(CONCAT21(uVar1,*(undefined1 *)(param_6 + (int)uVar21)),
                                           *(undefined1 *)(param_6 + (int)(uVar21 >> 0x20))),
                           CONCAT11(*(undefined1 *)(param_6 + (int)(uVar34 >> 0x20)),
                                    *(undefined1 *)(param_6 + (int)uVar34))),
                  CONCAT22(uVar1,CONCAT11(*(undefined1 *)(param_6 + (int)(uVar37 >> 0x20)),
                                          *(undefined1 *)(param_6 + (int)uVar37))));
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}




/* Function: FUN_004cdbcf */

void FUN_004cdbcf(short *param_1,short *param_2,short *param_3,int param_4,int param_5,int param_6)

{
  short sVar1;
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined1 *puVar12;
  short *local_30;
  short *local_2c;
  short *local_28;
  int local_24;
  short local_20;
  
  local_30 = param_1;
  local_2c = param_3;
  local_28 = param_2;
  local_20 = 8;
  do {
    sVar3 = *local_30 * *local_2c + local_30[0x20] * local_2c[0x20];
    sVar1 = *local_30 * *local_2c - local_30[0x20] * local_2c[0x20];
    sVar8 = local_30[0x10] * local_2c[0x10] + local_30[0x30] * local_2c[0x30];
    sVar4 = sVar3 + sVar8;
    sVar3 = sVar3 - sVar8;
    sVar8 = (short)((uint)((short)(local_30[0x10] * local_2c[0x10] - local_30[0x30] * local_2c[0x30]
                                  ) * 0x16a) >> 8) - sVar8;
    sVar5 = sVar1 + sVar8;
    sVar1 = sVar1 - sVar8;
    sVar6 = local_30[8] * local_2c[8] + local_30[0x38] * local_2c[0x38];
    sVar8 = local_30[8] * local_2c[8] - local_30[0x38] * local_2c[0x38];
    sVar9 = local_30[0x28] * local_2c[0x28] + local_30[0x18] * local_2c[0x18];
    sVar10 = local_30[0x28] * local_2c[0x28] - local_30[0x18] * local_2c[0x18];
    sVar7 = sVar6 + sVar9;
    sVar11 = (short)((uint)((short)(sVar10 + sVar8) * 0x1d9) >> 8);
    sVar10 = ((short)((uint)(sVar10 * -0x29d) >> 8) + sVar11) - sVar7;
    sVar6 = (short)((uint)((short)(sVar6 - sVar9) * 0x16a) >> 8) - sVar10;
    sVar8 = ((short)((uint)(sVar8 * 0x115) >> 8) - sVar11) + sVar6;
    *local_28 = sVar7 + sVar4;
    local_28[0x38] = sVar4 - sVar7;
    local_28[8] = sVar10 + sVar5;
    local_28[0x30] = sVar5 - sVar10;
    local_28[0x10] = sVar6 + sVar1;
    local_28[0x28] = sVar1 - sVar6;
    local_28[0x20] = sVar8 + sVar3;
    local_28[0x18] = sVar3 - sVar8;
    local_30 = local_30 + 1;
    local_2c = local_2c + 1;
    local_28 = local_28 + 1;
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  local_24 = 0;
  local_20 = 8;
  local_28 = param_2;
  do {
    puVar12 = (undefined1 *)(*(int *)(param_4 + local_24) + param_5);
    local_24 = local_24 + 4;
    sVar3 = *local_28 + local_28[4];
    sVar1 = *local_28 - local_28[4];
    sVar8 = local_28[2] + local_28[6];
    sVar4 = sVar3 + sVar8;
    sVar3 = sVar3 - sVar8;
    sVar8 = (short)((uint)((short)(local_28[2] - local_28[6]) * 0x16a) >> 8) - sVar8;
    sVar5 = sVar1 + sVar8;
    sVar1 = sVar1 - sVar8;
    sVar6 = local_28[1] + local_28[7];
    sVar8 = local_28[1] - local_28[7];
    sVar9 = local_28[5] + local_28[3];
    sVar10 = local_28[5] - local_28[3];
    sVar7 = sVar6 + sVar9;
    sVar11 = (short)((uint)((short)(sVar10 + sVar8) * 0x1d9) >> 8);
    sVar10 = ((short)((uint)(sVar10 * -0x29d) >> 8) + sVar11) - sVar7;
    sVar6 = (short)((uint)((short)(sVar6 - sVar9) * 0x16a) >> 8) - sVar10;
    sVar8 = ((short)((uint)(sVar8 * 0x115) >> 8) - sVar11) + sVar6;
    uVar2 = *(undefined1 *)(param_6 + ((ushort)((short)(sVar4 - sVar7) >> 5) & 0x3ff));
    *puVar12 = *(undefined1 *)(param_6 + ((ushort)((short)(sVar7 + sVar4) >> 5) & 0x3ff));
    puVar12[7] = uVar2;
    uVar2 = *(undefined1 *)(param_6 + ((ushort)((short)(sVar5 - sVar10) >> 5) & 0x3ff));
    puVar12[1] = *(undefined1 *)(param_6 + ((ushort)((short)(sVar10 + sVar5) >> 5) & 0x3ff));
    puVar12[6] = uVar2;
    uVar2 = *(undefined1 *)(param_6 + ((ushort)((short)(sVar1 - sVar6) >> 5) & 0x3ff));
    puVar12[2] = *(undefined1 *)(param_6 + ((ushort)((short)(sVar6 + sVar1) >> 5) & 0x3ff));
    puVar12[5] = uVar2;
    uVar2 = *(undefined1 *)(param_6 + ((ushort)((short)(sVar3 - sVar8) >> 5) & 0x3ff));
    puVar12[4] = *(undefined1 *)(param_6 + ((ushort)((short)(sVar8 + sVar3) >> 5) & 0x3ff));
    puVar12[3] = uVar2;
    local_28 = local_28 + 8;
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  return;
}




/* Function: FUN_004cdf2a */

void FUN_004cdf2a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int *param_4,
                 int param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined1 *puVar8;
  short sVar9;
  undefined4 uVar10;
  undefined6 uVar11;
  short sVar13;
  short sVar14;
  short sVar15;
  undefined8 uVar12;
  short sVar16;
  short sVar19;
  short sVar20;
  short sVar21;
  undefined8 uVar17;
  undefined8 uVar18;
  short sVar22;
  short sVar24;
  undefined4 uVar23;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  undefined4 uVar35;
  undefined8 uVar36;
  short sVar37;
  ushort uVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  ushort uVar46;
  undefined8 uVar47;
  short sVar48;
  undefined8 uVar49;
  
  uVar17 = param_1[0xc];
  uVar47 = param_3[0xc];
  sVar9 = (short)uVar17 * (short)uVar47;
  sVar13 = (short)((ulonglong)uVar17 >> 0x10) * (short)((ulonglong)uVar47 >> 0x10);
  sVar14 = (short)((ulonglong)uVar17 >> 0x20) * (short)((ulonglong)uVar47 >> 0x20);
  sVar15 = (short)((ulonglong)uVar17 >> 0x30) * (short)((ulonglong)uVar47 >> 0x30);
  uVar17 = param_1[4];
  uVar47 = param_3[4];
  sVar16 = (short)uVar17 * (short)uVar47;
  sVar19 = (short)((ulonglong)uVar17 >> 0x10) * (short)((ulonglong)uVar47 >> 0x10);
  sVar20 = (short)((ulonglong)uVar17 >> 0x20) * (short)((ulonglong)uVar47 >> 0x20);
  sVar21 = (short)((ulonglong)uVar17 >> 0x30) * (short)((ulonglong)uVar47 >> 0x30);
  uVar17 = *param_1;
  uVar47 = *param_3;
  sVar27 = (short)uVar17 * (short)uVar47;
  sVar29 = (short)((ulonglong)uVar17 >> 0x10) * (short)((ulonglong)uVar47 >> 0x10);
  sVar31 = (short)((ulonglong)uVar17 >> 0x20) * (short)((ulonglong)uVar47 >> 0x20);
  sVar33 = (short)((ulonglong)uVar17 >> 0x30) * (short)((ulonglong)uVar47 >> 0x30);
  uVar17 = param_1[8];
  uVar47 = param_3[8];
  sVar37 = (short)uVar17 * (short)uVar47;
  sVar39 = (short)((ulonglong)uVar17 >> 0x10) * (short)((ulonglong)uVar47 >> 0x10);
  sVar40 = (short)((ulonglong)uVar17 >> 0x20) * (short)((ulonglong)uVar47 >> 0x20);
  sVar42 = (short)((ulonglong)uVar17 >> 0x30) * (short)((ulonglong)uVar47 >> 0x30);
  sVar22 = sVar16 + sVar9;
  sVar24 = sVar19 + sVar13;
  sVar25 = sVar20 + sVar14;
  sVar26 = sVar21 + sVar15;
  uVar17 = pmaddwd(CONCAT44(CONCAT22((short)((uint)(undefined4)DAT_0058f440 >> 0x10),sVar19 - sVar13
                                    ),CONCAT22((short)(undefined4)DAT_0058f440,sVar16 - sVar9)),
                   DAT_0058f420);
  uVar47 = pmaddwd(CONCAT26((short)((uint)DAT_0058f440._4_4_ >> 0x10),
                            CONCAT24(sVar21 - sVar15,
                                     CONCAT22((short)DAT_0058f440._4_4_,sVar20 - sVar14))),
                   DAT_0058f420);
  sVar28 = sVar27 + sVar37;
  sVar30 = sVar29 + sVar39;
  sVar32 = sVar31 + sVar40;
  sVar34 = sVar33 + sVar42;
  sVar27 = sVar27 - sVar37;
  sVar29 = sVar29 - sVar39;
  sVar31 = sVar31 - sVar40;
  sVar33 = sVar33 - sVar42;
  uVar17 = packssdw(CONCAT44((int)((longlong)uVar17 >> 0x28),(int)uVar17 >> 8),
                    CONCAT44((int)((longlong)uVar47 >> 0x28),(int)uVar47 >> 8));
  sVar9 = (short)uVar17 - sVar22;
  sVar13 = (short)((ulonglong)uVar17 >> 0x10) - sVar24;
  sVar14 = (short)((ulonglong)uVar17 >> 0x20) - sVar25;
  sVar15 = (short)((ulonglong)uVar17 >> 0x30) - sVar26;
  param_2[4] = CONCAT26(sVar34 + sVar26,
                        CONCAT24(sVar32 + sVar25,CONCAT22(sVar30 + sVar24,sVar28 + sVar22)));
  param_2[0xc] = CONCAT26(sVar15 + sVar33,
                          CONCAT24(sVar14 + sVar31,CONCAT22(sVar13 + sVar29,sVar9 + sVar27)));
  sVar28 = sVar28 - sVar22;
  sVar30 = sVar30 - sVar24;
  sVar32 = sVar32 - sVar25;
  sVar34 = sVar34 - sVar26;
  *param_2 = CONCAT26(sVar33 - sVar15,
                      CONCAT24(sVar31 - sVar14,CONCAT22(sVar29 - sVar13,sVar27 - sVar9)));
  uVar17 = param_1[10];
  uVar47 = param_3[10];
  sVar22 = (short)uVar17 * (short)uVar47;
  sVar24 = (short)((ulonglong)uVar17 >> 0x10) * (short)((ulonglong)uVar47 >> 0x10);
  sVar25 = (short)((ulonglong)uVar17 >> 0x20) * (short)((ulonglong)uVar47 >> 0x20);
  sVar26 = (short)((ulonglong)uVar17 >> 0x30) * (short)((ulonglong)uVar47 >> 0x30);
  uVar17 = param_1[6];
  uVar47 = param_3[6];
  sVar9 = (short)uVar17 * (short)uVar47;
  sVar14 = (short)((ulonglong)uVar17 >> 0x10) * (short)((ulonglong)uVar47 >> 0x10);
  sVar16 = (short)((ulonglong)uVar17 >> 0x20) * (short)((ulonglong)uVar47 >> 0x20);
  sVar20 = (short)((ulonglong)uVar17 >> 0x30) * (short)((ulonglong)uVar47 >> 0x30);
  uVar17 = param_1[2];
  uVar47 = param_3[2];
  sVar13 = (short)uVar17 * (short)uVar47;
  sVar15 = (short)((ulonglong)uVar17 >> 0x10) * (short)((ulonglong)uVar47 >> 0x10);
  sVar19 = (short)((ulonglong)uVar17 >> 0x20) * (short)((ulonglong)uVar47 >> 0x20);
  sVar21 = (short)((ulonglong)uVar17 >> 0x30) * (short)((ulonglong)uVar47 >> 0x30);
  sVar37 = sVar22 - sVar9;
  sVar39 = sVar24 - sVar14;
  sVar40 = sVar25 - sVar16;
  sVar42 = sVar26 - sVar20;
  uVar17 = param_1[0xe];
  uVar47 = param_3[0xe];
  sVar27 = (short)uVar17 * (short)uVar47;
  sVar29 = (short)((ulonglong)uVar17 >> 0x10) * (short)((ulonglong)uVar47 >> 0x10);
  sVar31 = (short)((ulonglong)uVar17 >> 0x20) * (short)((ulonglong)uVar47 >> 0x20);
  sVar33 = (short)((ulonglong)uVar17 >> 0x30) * (short)((ulonglong)uVar47 >> 0x30);
  sVar22 = sVar22 + sVar9;
  sVar24 = sVar24 + sVar14;
  sVar25 = sVar25 + sVar16;
  sVar26 = sVar26 + sVar20;
  uVar6 = (undefined2)((uint)(undefined4)DAT_0058f440 >> 0x10);
  uVar5 = (undefined2)(undefined4)DAT_0058f440;
  uVar47 = pmaddwd(CONCAT44(CONCAT22(uVar6,sVar39),CONCAT22(uVar5,sVar37)),DAT_0058f428);
  sVar9 = sVar13 + sVar27;
  sVar14 = sVar15 + sVar29;
  sVar16 = sVar19 + sVar31;
  sVar20 = sVar21 + sVar33;
  uVar3 = (undefined2)DAT_0058f440._4_4_;
  uVar4 = (undefined2)((uint)DAT_0058f440._4_4_ >> 0x10);
  sVar13 = sVar13 - sVar27;
  sVar15 = sVar15 - sVar29;
  sVar19 = sVar19 - sVar31;
  sVar21 = sVar21 - sVar33;
  uVar17 = pmaddwd(CONCAT26(uVar4,CONCAT24(sVar42,CONCAT22(uVar3,sVar40))),DAT_0058f428);
  uVar49 = packssdw(CONCAT44((int)((longlong)uVar47 >> 0x28),(int)uVar47 >> 8),
                    CONCAT44((int)((longlong)uVar17 >> 0x28),(int)uVar17 >> 8));
  uVar17 = pmaddwd(CONCAT44(CONCAT22(uVar6,sVar15),CONCAT22(uVar5,sVar13)),DAT_0058f430);
  uVar47 = pmaddwd(CONCAT26(uVar4,CONCAT24(sVar21,CONCAT22(uVar3,sVar19))),DAT_0058f430);
  uVar12 = packssdw(CONCAT44((int)((longlong)uVar17 >> 0x28),(int)uVar17 >> 8),
                    CONCAT44((int)((longlong)uVar47 >> 0x28),(int)uVar47 >> 8));
  uVar47 = pmaddwd(CONCAT44(CONCAT22(uVar6,sVar39 + sVar15),CONCAT22(uVar5,sVar37 + sVar13)),
                   DAT_0058f438);
  sVar27 = sVar9 + sVar22;
  sVar29 = sVar14 + sVar24;
  sVar31 = sVar16 + sVar25;
  sVar33 = sVar20 + sVar26;
  uVar17 = pmaddwd(CONCAT26(uVar4,CONCAT24(sVar42 + sVar21,CONCAT22(uVar3,sVar40 + sVar19))),
                   DAT_0058f438);
  uVar36 = pmaddwd(CONCAT44(CONCAT22(uVar6,sVar14 - sVar24),CONCAT22(uVar5,sVar9 - sVar22)),
                   DAT_0058f420);
  uVar18 = packssdw(CONCAT44((int)((longlong)uVar47 >> 0x28),(int)uVar47 >> 8),
                    CONCAT44((int)((longlong)uVar17 >> 0x28),(int)uVar17 >> 8));
  uVar47 = pmaddwd(CONCAT26(uVar4,CONCAT24(sVar20 - sVar26,CONCAT22(uVar3,sVar16 - sVar25))),
                   DAT_0058f420);
  sVar13 = (short)((ulonglong)uVar18 >> 0x10);
  sVar14 = (short)((ulonglong)uVar18 >> 0x20);
  sVar15 = (short)((ulonglong)uVar18 >> 0x30);
  uVar17 = param_2[4];
  uVar36 = packssdw(CONCAT44((int)((longlong)uVar36 >> 0x28),(int)uVar36 >> 8),
                    CONCAT44((int)((longlong)uVar47 >> 0x28),(int)uVar47 >> 8));
  sVar16 = ((short)uVar18 + (short)uVar49) - sVar27;
  sVar19 = (sVar13 + (short)((ulonglong)uVar49 >> 0x10)) - sVar29;
  sVar20 = (sVar14 + (short)((ulonglong)uVar49 >> 0x20)) - sVar31;
  sVar21 = (sVar15 + (short)((ulonglong)uVar49 >> 0x30)) - sVar33;
  uVar47 = param_2[0xc];
  sVar22 = (short)uVar36 - sVar16;
  sVar24 = (short)((ulonglong)uVar36 >> 0x10) - sVar19;
  sVar25 = (short)((ulonglong)uVar36 >> 0x20) - sVar20;
  sVar26 = (short)((ulonglong)uVar36 >> 0x30) - sVar21;
  sVar9 = ((short)uVar12 - (short)uVar18) + sVar22;
  sVar13 = ((short)((ulonglong)uVar12 >> 0x10) - sVar13) + sVar24;
  sVar14 = ((short)((ulonglong)uVar12 >> 0x20) - sVar14) + sVar25;
  sVar15 = ((short)((ulonglong)uVar12 >> 0x30) - sVar15) + sVar26;
  param_2[8] = CONCAT26(sVar34 + sVar15,
                        CONCAT24(sVar32 + sVar14,CONCAT22(sVar30 + sVar13,sVar28 + sVar9)));
  sVar37 = (short)((ulonglong)uVar17 >> 0x10);
  sVar39 = (short)((ulonglong)uVar17 >> 0x20);
  sVar40 = (short)((ulonglong)uVar17 >> 0x30);
  param_2[6] = CONCAT26(sVar34 - sVar15,
                        CONCAT24(sVar32 - sVar14,CONCAT22(sVar30 - sVar13,sVar28 - sVar9)));
  uVar12 = *param_2;
  *param_2 = CONCAT26(sVar40 + sVar33,
                      CONCAT24(sVar39 + sVar31,CONCAT22(sVar37 + sVar29,(short)uVar17 + sVar27)));
  sVar9 = (short)((ulonglong)uVar47 >> 0x10);
  sVar13 = (short)((ulonglong)uVar47 >> 0x20);
  sVar14 = (short)((ulonglong)uVar47 >> 0x30);
  param_2[0xe] = CONCAT26(sVar40 - sVar33,
                          CONCAT24(sVar39 - sVar31,CONCAT22(sVar37 - sVar29,(short)uVar17 - sVar27))
                         );
  param_2[2] = CONCAT26(sVar14 + sVar21,
                        CONCAT24(sVar13 + sVar20,CONCAT22(sVar9 + sVar19,(short)uVar47 + sVar16)));
  param_2[0xc] = CONCAT26(sVar14 - sVar21,
                          CONCAT24(sVar13 - sVar20,CONCAT22(sVar9 - sVar19,(short)uVar47 - sVar16)))
  ;
  sVar16 = (short)((ulonglong)uVar12 >> 0x10);
  sVar19 = (short)((ulonglong)uVar12 >> 0x20);
  sVar20 = (short)((ulonglong)uVar12 >> 0x30);
  uVar17 = param_1[5];
  uVar47 = param_3[5];
  sVar9 = (short)uVar17 * (short)uVar47;
  sVar13 = (short)((ulonglong)uVar17 >> 0x10) * (short)((ulonglong)uVar47 >> 0x10);
  sVar14 = (short)((ulonglong)uVar17 >> 0x20) * (short)((ulonglong)uVar47 >> 0x20);
  sVar15 = (short)((ulonglong)uVar17 >> 0x30) * (short)((ulonglong)uVar47 >> 0x30);
  param_2[4] = CONCAT26(sVar20 + sVar26,
                        CONCAT24(sVar19 + sVar25,CONCAT22(sVar16 + sVar24,(short)uVar12 + sVar22)));
  param_2[10] = CONCAT26(sVar20 - sVar26,
                         CONCAT24(sVar19 - sVar25,CONCAT22(sVar16 - sVar24,(short)uVar12 - sVar22)))
  ;
  uVar17 = param_1[0xd];
  uVar47 = param_3[0xd];
  sVar16 = (short)uVar17 * (short)uVar47;
  sVar20 = (short)((ulonglong)uVar17 >> 0x10) * (short)((ulonglong)uVar47 >> 0x10);
  sVar28 = (short)((ulonglong)uVar17 >> 0x20) * (short)((ulonglong)uVar47 >> 0x20);
  sVar30 = (short)((ulonglong)uVar17 >> 0x30) * (short)((ulonglong)uVar47 >> 0x30);
  uVar17 = param_1[1];
  uVar47 = param_3[1];
  sVar27 = (short)uVar17 * (short)uVar47;
  sVar29 = (short)((ulonglong)uVar17 >> 0x10) * (short)((ulonglong)uVar47 >> 0x10);
  sVar31 = (short)((ulonglong)uVar17 >> 0x20) * (short)((ulonglong)uVar47 >> 0x20);
  sVar33 = (short)((ulonglong)uVar17 >> 0x30) * (short)((ulonglong)uVar47 >> 0x30);
  uVar17 = param_1[9];
  uVar47 = param_3[9];
  sVar19 = (short)uVar17 * (short)uVar47;
  sVar21 = (short)((ulonglong)uVar17 >> 0x10) * (short)((ulonglong)uVar47 >> 0x10);
  sVar37 = (short)((ulonglong)uVar17 >> 0x20) * (short)((ulonglong)uVar47 >> 0x20);
  sVar39 = (short)((ulonglong)uVar17 >> 0x30) * (short)((ulonglong)uVar47 >> 0x30);
  sVar22 = sVar9 + sVar16;
  sVar24 = sVar13 + sVar20;
  sVar25 = sVar14 + sVar28;
  sVar26 = sVar15 + sVar30;
  uVar12 = pmaddwd(CONCAT44(CONCAT22((short)((uint)(undefined4)DAT_0058f440 >> 0x10),sVar13 - sVar20
                                    ),CONCAT22((short)(undefined4)DAT_0058f440,sVar9 - sVar16)),
                   DAT_0058f420);
  uVar17 = param_1[0xb];
  uVar18 = pmaddwd(CONCAT26((short)((uint)DAT_0058f440._4_4_ >> 0x10),
                            CONCAT24(sVar15 - sVar30,
                                     CONCAT22((short)DAT_0058f440._4_4_,sVar14 - sVar28))),
                   DAT_0058f420);
  uVar47 = param_3[0xb];
  sVar9 = (short)uVar17 * (short)uVar47;
  sVar14 = (short)((ulonglong)uVar17 >> 0x10) * (short)((ulonglong)uVar47 >> 0x10);
  sVar16 = (short)((ulonglong)uVar17 >> 0x20) * (short)((ulonglong)uVar47 >> 0x20);
  sVar20 = (short)((ulonglong)uVar17 >> 0x30) * (short)((ulonglong)uVar47 >> 0x30);
  uVar17 = packssdw(CONCAT44((int)((longlong)uVar12 >> 0x28),(int)uVar12 >> 8),
                    CONCAT44((int)((longlong)uVar18 >> 0x28),(int)uVar18 >> 8));
  sVar28 = sVar27 + sVar19;
  sVar30 = sVar29 + sVar21;
  sVar32 = sVar31 + sVar37;
  sVar34 = sVar33 + sVar39;
  sVar27 = sVar27 - sVar19;
  sVar29 = sVar29 - sVar21;
  sVar31 = sVar31 - sVar37;
  sVar33 = sVar33 - sVar39;
  sVar13 = (short)uVar17 - sVar22;
  sVar15 = (short)((ulonglong)uVar17 >> 0x10) - sVar24;
  sVar19 = (short)((ulonglong)uVar17 >> 0x20) - sVar25;
  sVar21 = (short)((ulonglong)uVar17 >> 0x30) - sVar26;
  uVar17 = param_1[7];
  param_2[5] = CONCAT26(sVar34 + sVar26,
                        CONCAT24(sVar32 + sVar25,CONCAT22(sVar30 + sVar24,sVar28 + sVar22)));
  uVar47 = param_3[7];
  sVar37 = (short)uVar17 * (short)uVar47;
  sVar39 = (short)((ulonglong)uVar17 >> 0x10) * (short)((ulonglong)uVar47 >> 0x10);
  sVar40 = (short)((ulonglong)uVar17 >> 0x20) * (short)((ulonglong)uVar47 >> 0x20);
  sVar42 = (short)((ulonglong)uVar17 >> 0x30) * (short)((ulonglong)uVar47 >> 0x30);
  sVar28 = sVar28 - sVar22;
  sVar30 = sVar30 - sVar24;
  sVar32 = sVar32 - sVar25;
  sVar34 = sVar34 - sVar26;
  param_2[0xd] = CONCAT26(sVar33 + sVar21,
                          CONCAT24(sVar31 + sVar19,CONCAT22(sVar29 + sVar15,sVar27 + sVar13)));
  param_2[9] = CONCAT26(sVar33 - sVar21,
                        CONCAT24(sVar31 - sVar19,CONCAT22(sVar29 - sVar15,sVar27 - sVar13)));
  sVar13 = sVar9 + sVar37;
  sVar15 = sVar14 + sVar39;
  sVar19 = sVar16 + sVar40;
  sVar21 = sVar20 + sVar42;
  uVar17 = param_1[0xf];
  sVar9 = sVar9 - sVar37;
  sVar14 = sVar14 - sVar39;
  sVar16 = sVar16 - sVar40;
  sVar20 = sVar20 - sVar42;
  uVar47 = param_3[0xf];
  sVar22 = (short)uVar17 * (short)uVar47;
  sVar24 = (short)((ulonglong)uVar17 >> 0x10) * (short)((ulonglong)uVar47 >> 0x10);
  sVar25 = (short)((ulonglong)uVar17 >> 0x20) * (short)((ulonglong)uVar47 >> 0x20);
  sVar26 = (short)((ulonglong)uVar17 >> 0x30) * (short)((ulonglong)uVar47 >> 0x30);
  uVar17 = param_1[3];
  uVar47 = param_3[3];
  sVar27 = (short)uVar17 * (short)uVar47;
  sVar31 = (short)((ulonglong)uVar17 >> 0x10) * (short)((ulonglong)uVar47 >> 0x10);
  sVar37 = (short)((ulonglong)uVar17 >> 0x20) * (short)((ulonglong)uVar47 >> 0x20);
  sVar43 = (short)((ulonglong)uVar17 >> 0x30) * (short)((ulonglong)uVar47 >> 0x30);
  sVar29 = sVar27 + sVar22;
  sVar33 = sVar31 + sVar24;
  sVar42 = sVar37 + sVar25;
  sVar44 = sVar43 + sVar26;
  uVar6 = (undefined2)((uint)(undefined4)DAT_0058f440 >> 0x10);
  uVar5 = (undefined2)(undefined4)DAT_0058f440;
  sVar27 = sVar27 - sVar22;
  sVar31 = sVar31 - sVar24;
  sVar37 = sVar37 - sVar25;
  sVar43 = sVar43 - sVar26;
  uVar17 = pmaddwd(CONCAT44(CONCAT22(uVar6,sVar14),CONCAT22(uVar5,sVar9)),DAT_0058f428);
  uVar3 = (undefined2)DAT_0058f440._4_4_;
  uVar4 = (undefined2)((uint)DAT_0058f440._4_4_ >> 0x10);
  sVar39 = sVar29 + sVar13;
  sVar40 = sVar33 + sVar15;
  sVar41 = sVar42 + sVar19;
  sVar45 = sVar44 + sVar21;
  uVar47 = pmaddwd(CONCAT26(uVar4,CONCAT24(sVar20,CONCAT22(uVar3,sVar16))),DAT_0058f428);
  uVar47 = packssdw(CONCAT44((int)((longlong)uVar17 >> 0x28),(int)uVar17 >> 8),
                    CONCAT44((int)((longlong)uVar47 >> 0x28),(int)uVar47 >> 8));
  uVar12 = pmaddwd(CONCAT44(CONCAT22(uVar6,sVar33 - sVar15),CONCAT22(uVar5,sVar29 - sVar13)),
                   DAT_0058f420);
  uVar17 = pmaddwd(CONCAT26(uVar4,CONCAT24(sVar44 - sVar21,CONCAT22(uVar3,sVar42 - sVar19))),
                   DAT_0058f420);
  uVar18 = packssdw(CONCAT44((int)((longlong)uVar12 >> 0x28),(int)uVar12 >> 8),
                    CONCAT44((int)((longlong)uVar17 >> 0x28),(int)uVar17 >> 8));
  uVar17 = pmaddwd(CONCAT44(CONCAT22(uVar6,sVar14 + sVar31),CONCAT22(uVar5,sVar9 + sVar27)),
                   DAT_0058f438);
  uVar12 = pmaddwd(CONCAT26(uVar4,CONCAT24(sVar20 + sVar43,CONCAT22(uVar3,sVar16 + sVar37))),
                   DAT_0058f438);
  uVar12 = packssdw(CONCAT44((int)((longlong)uVar17 >> 0x28),(int)uVar17 >> 8),
                    CONCAT44((int)((longlong)uVar12 >> 0x28),(int)uVar12 >> 8));
  uVar36 = pmaddwd(CONCAT44(CONCAT22(uVar6,sVar31),CONCAT22(uVar5,sVar27)),DAT_0058f430);
  uVar17 = pmaddwd(CONCAT26(uVar4,CONCAT24(sVar43,CONCAT22(uVar3,sVar37))),DAT_0058f430);
  uVar36 = packssdw(CONCAT44((int)((longlong)uVar36 >> 0x28),(int)uVar36 >> 8),
                    CONCAT44((int)((longlong)uVar17 >> 0x28),(int)uVar17 >> 8));
  uVar17 = param_2[5];
  sVar13 = (short)((ulonglong)uVar12 >> 0x10);
  sVar15 = (short)((ulonglong)uVar12 >> 0x20);
  sVar19 = (short)((ulonglong)uVar12 >> 0x30);
  sVar20 = ((short)uVar12 + (short)uVar47) - sVar39;
  sVar21 = (sVar13 + (short)((ulonglong)uVar47 >> 0x10)) - sVar40;
  sVar24 = (sVar15 + (short)((ulonglong)uVar47 >> 0x20)) - sVar41;
  sVar26 = (sVar19 + (short)((ulonglong)uVar47 >> 0x30)) - sVar45;
  sVar29 = (short)uVar18 - sVar20;
  sVar31 = (short)((ulonglong)uVar18 >> 0x10) - sVar21;
  sVar33 = (short)((ulonglong)uVar18 >> 0x20) - sVar24;
  sVar37 = (short)((ulonglong)uVar18 >> 0x30) - sVar26;
  sVar9 = (short)((ulonglong)uVar17 >> 0x10);
  sVar14 = (short)((ulonglong)uVar17 >> 0x20);
  sVar16 = (short)((ulonglong)uVar17 >> 0x30);
  uVar47 = param_2[0xd];
  sVar42 = ((short)uVar36 - (short)uVar12) + sVar29;
  sVar43 = ((short)((ulonglong)uVar36 >> 0x10) - sVar13) + sVar31;
  sVar44 = ((short)((ulonglong)uVar36 >> 0x20) - sVar15) + sVar33;
  sVar48 = ((short)((ulonglong)uVar36 >> 0x30) - sVar19) + sVar37;
  param_2[1] = CONCAT26(sVar16 + sVar45,
                        CONCAT24(sVar14 + sVar41,CONCAT22(sVar9 + sVar40,(short)uVar17 + sVar39)));
  uVar12 = param_2[9];
  param_2[7] = CONCAT26(sVar34 - sVar48,
                        CONCAT24(sVar32 - sVar44,CONCAT22(sVar30 - sVar43,sVar28 - sVar42)));
  sVar22 = (short)((ulonglong)uVar47 >> 0x10);
  sVar25 = (short)((ulonglong)uVar47 >> 0x20);
  sVar27 = (short)((ulonglong)uVar47 >> 0x30);
  param_2[3] = CONCAT26(sVar27 + sVar26,
                        CONCAT24(sVar25 + sVar24,CONCAT22(sVar22 + sVar21,(short)uVar47 + sVar20)));
  sVar13 = (short)((ulonglong)uVar12 >> 0x10);
  sVar15 = (short)((ulonglong)uVar12 >> 0x20);
  sVar19 = (short)((ulonglong)uVar12 >> 0x30);
  param_2[5] = CONCAT26(sVar19 + sVar37,
                        CONCAT24(sVar15 + sVar33,CONCAT22(sVar13 + sVar31,(short)uVar12 + sVar29)));
  uVar10 = CONCAT22(sVar15 - sVar33,sVar32 + sVar44);
  uVar18 = *param_2;
  uVar36 = param_2[2];
  uVar23 = CONCAT22(sVar14 - sVar41,sVar25 - sVar24);
  param_2[9] = CONCAT44(CONCAT22((short)uVar17 - sVar39,(short)uVar47 - sVar20),
                        CONCAT22((short)uVar12 - sVar29,sVar28 + sVar42));
  param_2[0xb] = CONCAT44(CONCAT22(sVar9 - sVar40,sVar22 - sVar21),
                          CONCAT22(sVar13 - sVar31,sVar30 + sVar43));
  param_2[0xd] = CONCAT44(uVar23,uVar10);
  param_2[0xf] = CONCAT44((int)(CONCAT26(sVar16 - sVar45,CONCAT24(sVar27 - sVar26,uVar23)) >> 0x20),
                          (int)(CONCAT26(sVar19 - sVar37,CONCAT24(sVar34 + sVar48,uVar10)) >> 0x20))
  ;
  uVar23 = CONCAT22((short)((ulonglong)uVar36 >> 0x20),(short)((ulonglong)uVar18 >> 0x20));
  uVar17 = param_2[4];
  uVar47 = param_2[6];
  uVar10 = CONCAT22((short)((ulonglong)uVar47 >> 0x20),(short)((ulonglong)uVar17 >> 0x20));
  *param_2 = CONCAT44(CONCAT22((short)uVar47,(short)uVar17),CONCAT22((short)uVar36,(short)uVar18));
  param_2[2] = CONCAT44(CONCAT22((short)((ulonglong)uVar47 >> 0x10),
                                 (short)((ulonglong)uVar17 >> 0x10)),
                        CONCAT22((short)((ulonglong)uVar36 >> 0x10),
                                 (short)((ulonglong)uVar18 >> 0x10)));
  param_2[4] = CONCAT44(uVar10,uVar23);
  param_2[6] = CONCAT44((int)(CONCAT26((short)((ulonglong)uVar47 >> 0x30),
                                       CONCAT24((short)((ulonglong)uVar17 >> 0x30),uVar10)) >> 0x20)
                        ,(int)(CONCAT26((short)((ulonglong)uVar36 >> 0x30),
                                        CONCAT24((short)((ulonglong)uVar18 >> 0x30),uVar23)) >> 0x20
                              ));
  uVar17 = param_2[1];
  uVar47 = param_2[3];
  uVar12 = param_2[5];
  uVar23 = CONCAT22((short)((ulonglong)uVar47 >> 0x20),(short)((ulonglong)uVar17 >> 0x20));
  uVar18 = param_2[7];
  uVar35 = CONCAT22((short)((ulonglong)uVar18 >> 0x20),(short)((ulonglong)uVar12 >> 0x20));
  uVar36 = param_2[8];
  param_2[8] = CONCAT44(CONCAT22((short)uVar18,(short)uVar12),CONCAT22((short)uVar47,(short)uVar17))
  ;
  uVar49 = param_2[10];
  param_2[10] = CONCAT44(CONCAT22((short)((ulonglong)uVar18 >> 0x10),
                                  (short)((ulonglong)uVar12 >> 0x10)),
                         CONCAT22((short)((ulonglong)uVar47 >> 0x10),
                                  (short)((ulonglong)uVar17 >> 0x10)));
  uVar1 = param_2[0xc];
  uVar10 = CONCAT22((short)((ulonglong)uVar49 >> 0x20),(short)((ulonglong)uVar36 >> 0x20));
  uVar2 = param_2[0xe];
  param_2[0xc] = CONCAT44(uVar35,uVar23);
  param_2[0xe] = CONCAT44((int)(CONCAT26((short)((ulonglong)uVar18 >> 0x30),
                                         CONCAT24((short)((ulonglong)uVar12 >> 0x30),uVar35)) >>
                               0x20),
                          (int)(CONCAT26((short)((ulonglong)uVar47 >> 0x30),
                                         CONCAT24((short)((ulonglong)uVar17 >> 0x30),uVar23)) >>
                               0x20));
  uVar23 = CONCAT22((short)((ulonglong)uVar2 >> 0x20),(short)((ulonglong)uVar1 >> 0x20));
  param_2[1] = CONCAT44(CONCAT22((short)uVar2,(short)uVar1),CONCAT22((short)uVar49,(short)uVar36));
  param_2[3] = CONCAT44(CONCAT22((short)((ulonglong)uVar2 >> 0x10),(short)((ulonglong)uVar1 >> 0x10)
                                ),
                        CONCAT22((short)((ulonglong)uVar49 >> 0x10),
                                 (short)((ulonglong)uVar36 >> 0x10)));
  param_2[5] = CONCAT44(uVar23,uVar10);
  param_2[7] = CONCAT44((int)(CONCAT26((short)((ulonglong)uVar2 >> 0x30),
                                       CONCAT24((short)((ulonglong)uVar1 >> 0x30),uVar23)) >> 0x20),
                        (int)(CONCAT26((short)((ulonglong)uVar49 >> 0x30),
                                       CONCAT24((short)((ulonglong)uVar36 >> 0x30),uVar10)) >> 0x20)
                       );
  uVar17 = param_2[0xc];
  uVar47 = param_2[4];
  uVar12 = *param_2;
  uVar18 = param_2[8];
  sVar9 = (short)((ulonglong)uVar17 >> 0x10);
  sVar15 = (short)((ulonglong)uVar47 >> 0x10);
  sVar13 = (short)((ulonglong)uVar17 >> 0x20);
  sVar16 = (short)((ulonglong)uVar47 >> 0x20);
  sVar19 = (short)((ulonglong)uVar47 >> 0x30);
  sVar14 = (short)((ulonglong)uVar17 >> 0x30);
  sVar20 = (short)uVar47 + (short)uVar17;
  sVar21 = sVar15 + sVar9;
  sVar22 = sVar16 + sVar13;
  sVar24 = sVar19 + sVar14;
  uVar17 = pmaddwd(CONCAT44(CONCAT22((short)((uint)(undefined4)DAT_0058f440 >> 0x10),sVar15 - sVar9)
                            ,CONCAT22((short)(undefined4)DAT_0058f440,(short)uVar47 - (short)uVar17)
                           ),DAT_0058f420);
  uVar47 = pmaddwd(CONCAT26((short)((uint)DAT_0058f440._4_4_ >> 0x10),
                            CONCAT24(sVar19 - sVar14,
                                     CONCAT22((short)DAT_0058f440._4_4_,sVar16 - sVar13))),
                   DAT_0058f420);
  uVar17 = packssdw(CONCAT44((int)((longlong)uVar17 >> 0x28),(int)uVar17 >> 8),
                    CONCAT44((int)((longlong)uVar47 >> 0x28),(int)uVar47 >> 8));
  sVar25 = (short)uVar12 + (short)uVar18;
  sVar16 = (short)((ulonglong)uVar12 >> 0x10);
  sVar9 = (short)((ulonglong)uVar18 >> 0x10);
  sVar26 = sVar16 + sVar9;
  sVar19 = (short)((ulonglong)uVar12 >> 0x20);
  sVar28 = (short)((ulonglong)uVar12 >> 0x30);
  sVar13 = (short)((ulonglong)uVar18 >> 0x20);
  sVar27 = sVar19 + sVar13;
  sVar14 = (short)((ulonglong)uVar18 >> 0x30);
  sVar29 = sVar28 + sVar14;
  sVar30 = (short)uVar12 - (short)uVar18;
  sVar16 = sVar16 - sVar9;
  sVar19 = sVar19 - sVar13;
  sVar28 = sVar28 - sVar14;
  sVar9 = (short)uVar17 - sVar20;
  sVar13 = (short)((ulonglong)uVar17 >> 0x10) - sVar21;
  sVar14 = (short)((ulonglong)uVar17 >> 0x20) - sVar22;
  sVar15 = (short)((ulonglong)uVar17 >> 0x30) - sVar24;
  param_2[4] = CONCAT26(sVar29 + sVar24,
                        CONCAT24(sVar27 + sVar22,CONCAT22(sVar26 + sVar21,sVar25 + sVar20)));
  param_2[0xc] = CONCAT26(sVar15 + sVar28,
                          CONCAT24(sVar14 + sVar19,CONCAT22(sVar13 + sVar16,sVar9 + sVar30)));
  sVar25 = sVar25 - sVar20;
  sVar26 = sVar26 - sVar21;
  sVar27 = sVar27 - sVar22;
  sVar29 = sVar29 - sVar24;
  *param_2 = CONCAT26(sVar28 - sVar15,
                      CONCAT24(sVar19 - sVar14,CONCAT22(sVar16 - sVar13,sVar30 - sVar9)));
  uVar17 = param_2[10];
  uVar47 = param_2[6];
  uVar12 = param_2[2];
  sVar21 = (short)uVar17 - (short)uVar47;
  sVar9 = (short)((ulonglong)uVar47 >> 0x10);
  sVar24 = (short)((ulonglong)uVar17 >> 0x10);
  sVar41 = sVar24 - sVar9;
  sVar13 = (short)((ulonglong)uVar47 >> 0x20);
  sVar28 = (short)((ulonglong)uVar17 >> 0x20);
  sVar30 = (short)((ulonglong)uVar17 >> 0x30);
  sVar43 = sVar28 - sVar13;
  sVar14 = (short)((ulonglong)uVar47 >> 0x30);
  sVar44 = sVar30 - sVar14;
  uVar18 = param_2[0xe];
  sVar22 = (short)uVar17 + (short)uVar47;
  sVar24 = sVar24 + sVar9;
  sVar28 = sVar28 + sVar13;
  sVar30 = sVar30 + sVar14;
  uVar6 = (undefined2)((uint)(undefined4)DAT_0058f440 >> 0x10);
  uVar5 = (undefined2)(undefined4)DAT_0058f440;
  uVar47 = pmaddwd(CONCAT44(CONCAT22(uVar6,sVar41),CONCAT22(uVar5,sVar21)),DAT_0058f428);
  uVar3 = (undefined2)DAT_0058f440._4_4_;
  uVar4 = (undefined2)((uint)DAT_0058f440._4_4_ >> 0x10);
  uVar17 = pmaddwd(CONCAT26(uVar4,CONCAT24(sVar44,CONCAT22(uVar3,sVar43))),DAT_0058f428);
  uVar36 = packssdw(CONCAT44((int)((longlong)uVar47 >> 0x28),(int)uVar47 >> 8),
                    CONCAT44((int)((longlong)uVar17 >> 0x28),(int)uVar17 >> 8));
  sVar31 = (short)uVar12 + (short)uVar18;
  sVar16 = (short)((ulonglong)uVar18 >> 0x10);
  sVar13 = (short)((ulonglong)uVar12 >> 0x10);
  sVar33 = sVar13 + sVar16;
  sVar19 = (short)((ulonglong)uVar18 >> 0x20);
  sVar14 = (short)((ulonglong)uVar12 >> 0x20);
  sVar15 = (short)((ulonglong)uVar12 >> 0x30);
  sVar37 = sVar14 + sVar19;
  sVar20 = (short)((ulonglong)uVar18 >> 0x30);
  sVar40 = sVar15 + sVar20;
  sVar9 = (short)uVar12 - (short)uVar18;
  sVar13 = sVar13 - sVar16;
  sVar14 = sVar14 - sVar19;
  sVar15 = sVar15 - sVar20;
  uVar17 = pmaddwd(CONCAT44(CONCAT22(uVar6,sVar13),CONCAT22(uVar5,sVar9)),DAT_0058f430);
  uVar47 = pmaddwd(CONCAT26(uVar4,CONCAT24(sVar15,CONCAT22(uVar3,sVar14))),DAT_0058f430);
  uVar12 = packssdw(CONCAT44((int)((longlong)uVar17 >> 0x28),(int)uVar17 >> 8),
                    CONCAT44((int)((longlong)uVar47 >> 0x28),(int)uVar47 >> 8));
  sVar32 = sVar31 + sVar22;
  sVar34 = sVar33 + sVar24;
  sVar39 = sVar37 + sVar28;
  sVar42 = sVar40 + sVar30;
  uVar17 = pmaddwd(CONCAT44(CONCAT22(uVar6,sVar41 + sVar13),CONCAT22(uVar5,sVar21 + sVar9)),
                   DAT_0058f438);
  uVar47 = pmaddwd(CONCAT26(uVar4,CONCAT24(sVar44 + sVar15,CONCAT22(uVar3,sVar43 + sVar14))),
                   DAT_0058f438);
  uVar18 = packssdw(CONCAT44((int)((longlong)uVar17 >> 0x28),(int)uVar17 >> 8),
                    CONCAT44((int)((longlong)uVar47 >> 0x28),(int)uVar47 >> 8));
  sVar13 = (short)((ulonglong)uVar18 >> 0x10);
  sVar14 = (short)((ulonglong)uVar18 >> 0x20);
  sVar15 = (short)((ulonglong)uVar18 >> 0x30);
  sVar16 = ((short)uVar18 + (short)uVar36) - sVar32;
  sVar19 = (sVar13 + (short)((ulonglong)uVar36 >> 0x10)) - sVar34;
  sVar20 = (sVar14 + (short)((ulonglong)uVar36 >> 0x20)) - sVar39;
  sVar21 = (sVar15 + (short)((ulonglong)uVar36 >> 0x30)) - sVar42;
  uVar49 = pmaddwd(CONCAT44(CONCAT22(uVar6,sVar33 - sVar24),CONCAT22(uVar5,sVar31 - sVar22)),
                   DAT_0058f420);
  uVar36 = pmaddwd(CONCAT26(uVar4,CONCAT24(sVar40 - sVar30,CONCAT22(uVar3,sVar37 - sVar28))),
                   DAT_0058f420);
  uVar17 = param_2[0xc];
  uVar47 = param_2[4];
  uVar36 = packssdw(CONCAT44((int)((longlong)uVar49 >> 0x28),(int)uVar49 >> 8),
                    CONCAT44((int)((longlong)uVar36 >> 0x28),(int)uVar36 >> 8));
  sVar22 = (short)uVar36 - sVar16;
  sVar24 = (short)((ulonglong)uVar36 >> 0x10) - sVar19;
  sVar28 = (short)((ulonglong)uVar36 >> 0x20) - sVar20;
  sVar30 = (short)((ulonglong)uVar36 >> 0x30) - sVar21;
  sVar9 = ((short)uVar12 - (short)uVar18) + sVar22;
  sVar13 = ((short)((ulonglong)uVar12 >> 0x10) - sVar13) + sVar24;
  sVar14 = ((short)((ulonglong)uVar12 >> 0x20) - sVar14) + sVar28;
  sVar15 = ((short)((ulonglong)uVar12 >> 0x30) - sVar15) + sVar30;
  param_2[8] = CONCAT26(sVar29 + sVar15,
                        CONCAT24(sVar27 + sVar14,CONCAT22(sVar26 + sVar13,sVar25 + sVar9)));
  sVar31 = (short)((ulonglong)uVar47 >> 0x10);
  sVar33 = (short)((ulonglong)uVar47 >> 0x20);
  sVar37 = (short)((ulonglong)uVar47 >> 0x30);
  param_2[6] = CONCAT26(sVar29 - sVar15,
                        CONCAT24(sVar27 - sVar14,CONCAT22(sVar26 - sVar13,sVar25 - sVar9)));
  uVar12 = *param_2;
  *param_2 = CONCAT26(sVar37 + sVar42,
                      CONCAT24(sVar33 + sVar39,CONCAT22(sVar31 + sVar34,(short)uVar47 + sVar32)));
  sVar9 = (short)((ulonglong)uVar17 >> 0x10);
  sVar13 = (short)((ulonglong)uVar17 >> 0x20);
  sVar14 = (short)((ulonglong)uVar17 >> 0x30);
  param_2[0xe] = CONCAT26(sVar37 - sVar42,
                          CONCAT24(sVar33 - sVar39,CONCAT22(sVar31 - sVar34,(short)uVar47 - sVar32))
                         );
  param_2[2] = CONCAT26(sVar14 + sVar21,
                        CONCAT24(sVar13 + sVar20,CONCAT22(sVar9 + sVar19,(short)uVar17 + sVar16)));
  param_2[0xc] = CONCAT26(sVar14 - sVar21,
                          CONCAT24(sVar13 - sVar20,CONCAT22(sVar9 - sVar19,(short)uVar17 - sVar16)))
  ;
  sVar9 = (short)((ulonglong)uVar12 >> 0x10);
  sVar13 = (short)((ulonglong)uVar12 >> 0x20);
  sVar14 = (short)((ulonglong)uVar12 >> 0x30);
  uVar17 = param_2[5];
  param_2[4] = CONCAT26(sVar14 + sVar30,
                        CONCAT24(sVar13 + sVar28,CONCAT22(sVar9 + sVar24,(short)uVar12 + sVar22)));
  param_2[10] = CONCAT26(sVar14 - sVar30,
                         CONCAT24(sVar13 - sVar28,CONCAT22(sVar9 - sVar24,(short)uVar12 - sVar22)));
  uVar47 = param_2[0xd];
  uVar12 = param_2[1];
  sVar9 = (short)((ulonglong)uVar17 >> 0x10);
  sVar15 = (short)((ulonglong)uVar47 >> 0x10);
  sVar13 = (short)((ulonglong)uVar17 >> 0x20);
  sVar14 = (short)((ulonglong)uVar17 >> 0x30);
  sVar22 = (short)((ulonglong)uVar47 >> 0x20);
  sVar24 = (short)((ulonglong)uVar47 >> 0x30);
  uVar18 = param_2[9];
  sVar16 = (short)uVar17 + (short)uVar47;
  sVar19 = sVar9 + sVar15;
  sVar20 = sVar13 + sVar22;
  sVar21 = sVar14 + sVar24;
  uVar17 = pmaddwd(CONCAT44(CONCAT22((short)((uint)(undefined4)DAT_0058f440 >> 0x10),sVar9 - sVar15)
                            ,CONCAT22((short)(undefined4)DAT_0058f440,(short)uVar17 - (short)uVar47)
                           ),DAT_0058f420);
  uVar47 = pmaddwd(CONCAT26((short)((uint)DAT_0058f440._4_4_ >> 0x10),
                            CONCAT24(sVar14 - sVar24,
                                     CONCAT22((short)DAT_0058f440._4_4_,sVar13 - sVar22))),
                   DAT_0058f420);
  sVar22 = (short)uVar12 + (short)uVar18;
  sVar25 = (short)((ulonglong)uVar12 >> 0x10);
  sVar9 = (short)((ulonglong)uVar18 >> 0x10);
  sVar24 = sVar25 + sVar9;
  sVar27 = (short)((ulonglong)uVar12 >> 0x20);
  sVar28 = (short)((ulonglong)uVar12 >> 0x30);
  sVar13 = (short)((ulonglong)uVar18 >> 0x20);
  sVar26 = sVar27 + sVar13;
  sVar14 = (short)((ulonglong)uVar18 >> 0x30);
  sVar29 = sVar28 + sVar14;
  sVar30 = (short)uVar12 - (short)uVar18;
  sVar25 = sVar25 - sVar9;
  sVar27 = sVar27 - sVar13;
  sVar28 = sVar28 - sVar14;
  uVar17 = packssdw(CONCAT44((int)((longlong)uVar17 >> 0x28),(int)uVar17 >> 8),
                    CONCAT44((int)((longlong)uVar47 >> 0x28),(int)uVar47 >> 8));
  sVar9 = (short)uVar17 - sVar16;
  sVar13 = (short)((ulonglong)uVar17 >> 0x10) - sVar19;
  sVar14 = (short)((ulonglong)uVar17 >> 0x20) - sVar20;
  sVar15 = (short)((ulonglong)uVar17 >> 0x30) - sVar21;
  param_2[5] = CONCAT26(sVar29 + sVar21,
                        CONCAT24(sVar26 + sVar20,CONCAT22(sVar24 + sVar19,sVar22 + sVar16)));
  param_2[0xd] = CONCAT26(sVar28 + sVar15,
                          CONCAT24(sVar27 + sVar14,CONCAT22(sVar25 + sVar13,sVar30 + sVar9)));
  sVar22 = sVar22 - sVar16;
  sVar24 = sVar24 - sVar19;
  sVar26 = sVar26 - sVar20;
  sVar29 = sVar29 - sVar21;
  param_2[9] = CONCAT26(sVar28 - sVar15,
                        CONCAT24(sVar27 - sVar14,CONCAT22(sVar25 - sVar13,sVar30 - sVar9)));
  uVar17 = param_2[0xb];
  uVar47 = param_2[7];
  uVar12 = param_2[0xf];
  uVar18 = param_2[3];
  sVar9 = (short)uVar17 + (short)uVar47;
  sVar14 = (short)((ulonglong)uVar17 >> 0x10);
  sVar25 = (short)((ulonglong)uVar47 >> 0x10);
  sVar13 = sVar14 + sVar25;
  sVar16 = (short)((ulonglong)uVar17 >> 0x20);
  sVar20 = (short)((ulonglong)uVar17 >> 0x30);
  sVar27 = (short)((ulonglong)uVar47 >> 0x20);
  sVar15 = sVar16 + sVar27;
  sVar28 = (short)((ulonglong)uVar47 >> 0x30);
  sVar19 = sVar20 + sVar28;
  sVar21 = (short)uVar17 - (short)uVar47;
  sVar14 = sVar14 - sVar25;
  sVar16 = sVar16 - sVar27;
  sVar20 = sVar20 - sVar28;
  uVar6 = (undefined2)((uint)(undefined4)DAT_0058f440 >> 0x10);
  uVar5 = (undefined2)(undefined4)DAT_0058f440;
  uVar17 = pmaddwd(CONCAT44(CONCAT22(uVar6,sVar14),CONCAT22(uVar5,sVar21)),DAT_0058f428);
  uVar3 = (undefined2)DAT_0058f440._4_4_;
  uVar4 = (undefined2)((uint)DAT_0058f440._4_4_ >> 0x10);
  uVar47 = pmaddwd(CONCAT26(uVar4,CONCAT24(sVar20,CONCAT22(uVar3,sVar16))),DAT_0058f428);
  sVar30 = (short)uVar18 + (short)uVar12;
  sVar25 = (short)((ulonglong)uVar12 >> 0x10);
  sVar32 = (short)((ulonglong)uVar18 >> 0x10);
  sVar31 = sVar32 + sVar25;
  sVar27 = (short)((ulonglong)uVar12 >> 0x20);
  sVar34 = (short)((ulonglong)uVar18 >> 0x20);
  sVar41 = (short)((ulonglong)uVar18 >> 0x30);
  sVar33 = sVar34 + sVar27;
  sVar28 = (short)((ulonglong)uVar12 >> 0x30);
  sVar37 = sVar41 + sVar28;
  sVar44 = (short)uVar18 - (short)uVar12;
  sVar32 = sVar32 - sVar25;
  sVar34 = sVar34 - sVar27;
  sVar41 = sVar41 - sVar28;
  sVar39 = sVar30 + sVar9;
  sVar40 = sVar31 + sVar13;
  sVar42 = sVar33 + sVar15;
  sVar43 = sVar37 + sVar19;
  uVar47 = packssdw(CONCAT44((int)((longlong)uVar17 >> 0x28),(int)uVar17 >> 8),
                    CONCAT44((int)((longlong)uVar47 >> 0x28),(int)uVar47 >> 8));
  uVar12 = pmaddwd(CONCAT44(CONCAT22(uVar6,sVar31 - sVar13),CONCAT22(uVar5,sVar30 - sVar9)),
                   DAT_0058f420);
  uVar17 = pmaddwd(CONCAT26(uVar4,CONCAT24(sVar37 - sVar19,CONCAT22(uVar3,sVar33 - sVar15))),
                   DAT_0058f420);
  uVar36 = packssdw(CONCAT44((int)((longlong)uVar12 >> 0x28),(int)uVar12 >> 8),
                    CONCAT44((int)((longlong)uVar17 >> 0x28),(int)uVar17 >> 8));
  uVar12 = pmaddwd(CONCAT44(CONCAT22(uVar6,sVar14 + sVar32),CONCAT22(uVar5,sVar21 + sVar44)),
                   DAT_0058f438);
  uVar17 = pmaddwd(CONCAT26(uVar4,CONCAT24(sVar20 + sVar41,CONCAT22(uVar3,sVar16 + sVar34))),
                   DAT_0058f438);
  uVar18 = packssdw(CONCAT44((int)((longlong)uVar12 >> 0x28),(int)uVar12 >> 8),
                    CONCAT44((int)((longlong)uVar17 >> 0x28),(int)uVar17 >> 8));
  uVar49 = pmaddwd(CONCAT44(CONCAT22(uVar6,sVar32),CONCAT22(uVar5,sVar44)),DAT_0058f430);
  uVar12 = pmaddwd(CONCAT26(uVar4,CONCAT24(sVar41,CONCAT22(uVar3,sVar34))),DAT_0058f430);
  uVar17 = param_2[5];
  uVar12 = packssdw(CONCAT44((int)((longlong)uVar49 >> 0x28),(int)uVar49 >> 8),
                    CONCAT44((int)((longlong)uVar12 >> 0x28),(int)uVar12 >> 8));
  sVar13 = (short)((ulonglong)uVar18 >> 0x10);
  sVar15 = (short)((ulonglong)uVar18 >> 0x20);
  sVar19 = (short)((ulonglong)uVar18 >> 0x30);
  sVar20 = ((short)uVar18 + (short)uVar47) - sVar39;
  sVar21 = (sVar13 + (short)((ulonglong)uVar47 >> 0x10)) - sVar40;
  sVar27 = (sVar15 + (short)((ulonglong)uVar47 >> 0x20)) - sVar42;
  sVar30 = (sVar19 + (short)((ulonglong)uVar47 >> 0x30)) - sVar43;
  sVar32 = (short)uVar36 - sVar20;
  sVar33 = (short)((ulonglong)uVar36 >> 0x10) - sVar21;
  sVar34 = (short)((ulonglong)uVar36 >> 0x20) - sVar27;
  sVar37 = (short)((ulonglong)uVar36 >> 0x30) - sVar30;
  sVar9 = (short)((ulonglong)uVar17 >> 0x10);
  sVar14 = (short)((ulonglong)uVar17 >> 0x20);
  sVar16 = (short)((ulonglong)uVar17 >> 0x30);
  uVar47 = param_2[0xd];
  sVar41 = ((short)uVar12 - (short)uVar18) + sVar32;
  sVar44 = ((short)((ulonglong)uVar12 >> 0x10) - sVar13) + sVar33;
  sVar45 = ((short)((ulonglong)uVar12 >> 0x20) - sVar15) + sVar34;
  sVar48 = ((short)((ulonglong)uVar12 >> 0x30) - sVar19) + sVar37;
  param_2[1] = CONCAT26(sVar16 + sVar43,
                        CONCAT24(sVar14 + sVar42,CONCAT22(sVar9 + sVar40,(short)uVar17 + sVar39)));
  uVar12 = param_2[9];
  param_2[7] = CONCAT26(sVar29 - sVar48,
                        CONCAT24(sVar26 - sVar45,CONCAT22(sVar24 - sVar44,sVar22 - sVar41)));
  sVar25 = (short)((ulonglong)uVar47 >> 0x10);
  sVar28 = (short)((ulonglong)uVar47 >> 0x20);
  sVar31 = (short)((ulonglong)uVar47 >> 0x30);
  param_2[3] = CONCAT26(sVar31 + sVar30,
                        CONCAT24(sVar28 + sVar27,CONCAT22(sVar25 + sVar21,(short)uVar47 + sVar20)));
  sVar13 = (short)((ulonglong)uVar12 >> 0x10);
  sVar15 = (short)((ulonglong)uVar12 >> 0x20);
  sVar19 = (short)((ulonglong)uVar12 >> 0x30);
  param_2[5] = CONCAT26(sVar19 + sVar37,
                        CONCAT24(sVar15 + sVar34,CONCAT22(sVar13 + sVar33,(short)uVar12 + sVar32)));
  iVar7 = param_4[4] + param_5;
  uVar18 = *param_2;
  uVar36 = param_2[2];
  uVar38 = (ushort)(sVar22 + sVar41) >> 5;
  uVar11 = CONCAT24((ushort)((short)uVar47 - sVar20) >> 5,
                    CONCAT22((ushort)((short)uVar12 - sVar32) >> 5,uVar38));
  uVar46 = (ushort)((short)uVar17 - sVar39) >> 5;
  *(undefined1 *)(iVar7 + 4) = *(undefined1 *)(param_6 + (uVar38 & 0x3ff));
  *(undefined1 *)(iVar7 + 5) = *(undefined1 *)(param_6 + ((uint)((uint6)uVar11 >> 0x10) & 0x3ff));
  *(undefined1 *)(iVar7 + 6) =
       *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar46,uVar11) >> 0x20) & 0x3ff));
  *(undefined1 *)(iVar7 + 7) = *(undefined1 *)(param_6 + (uVar46 & 0x3ff));
  iVar7 = param_4[5] + param_5;
  uVar38 = (ushort)(sVar24 + sVar44) >> 5;
  uVar11 = CONCAT24((ushort)(sVar25 - sVar21) >> 5,CONCAT22((ushort)(sVar13 - sVar33) >> 5,uVar38));
  uVar46 = (ushort)(sVar9 - sVar40) >> 5;
  *(undefined1 *)(iVar7 + 4) = *(undefined1 *)(param_6 + (uVar38 & 0x3ff));
  *(undefined1 *)(iVar7 + 5) = *(undefined1 *)(param_6 + ((uint)((uint6)uVar11 >> 0x10) & 0x3ff));
  *(undefined1 *)(iVar7 + 6) =
       *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar46,uVar11) >> 0x20) & 0x3ff));
  *(undefined1 *)(iVar7 + 7) = *(undefined1 *)(param_6 + (uVar46 & 0x3ff));
  iVar7 = param_4[6] + param_5;
  uVar38 = (ushort)(sVar26 + sVar45) >> 5;
  uVar11 = CONCAT24((ushort)(sVar28 - sVar27) >> 5,CONCAT22((ushort)(sVar15 - sVar34) >> 5,uVar38));
  uVar46 = (ushort)(sVar14 - sVar42) >> 5;
  *(undefined1 *)(iVar7 + 4) = *(undefined1 *)(param_6 + (uVar38 & 0x3ff));
  *(undefined1 *)(iVar7 + 5) = *(undefined1 *)(param_6 + ((uint)((uint6)uVar11 >> 0x10) & 0x3ff));
  *(undefined1 *)(iVar7 + 6) =
       *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar46,uVar11) >> 0x20) & 0x3ff));
  *(undefined1 *)(iVar7 + 7) = *(undefined1 *)(param_6 + (uVar46 & 0x3ff));
  iVar7 = param_4[7] + param_5;
  uVar38 = (ushort)(sVar29 + sVar48) >> 5;
  uVar11 = CONCAT24((ushort)(sVar31 - sVar30) >> 5,CONCAT22((ushort)(sVar19 - sVar37) >> 5,uVar38));
  uVar46 = (ushort)(sVar16 - sVar43) >> 5;
  *(undefined1 *)(iVar7 + 4) = *(undefined1 *)(param_6 + (uVar38 & 0x3ff));
  *(undefined1 *)(iVar7 + 5) = *(undefined1 *)(param_6 + ((uint)((uint6)uVar11 >> 0x10) & 0x3ff));
  *(undefined1 *)(iVar7 + 6) =
       *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar46,uVar11) >> 0x20) & 0x3ff));
  *(undefined1 *)(iVar7 + 7) = *(undefined1 *)(param_6 + (uVar46 & 0x3ff));
  puVar8 = (undefined1 *)(*param_4 + param_5);
  uVar17 = param_2[6];
  uVar47 = param_2[4];
  uVar38 = (ushort)uVar18 >> 5;
  uVar11 = CONCAT24((ushort)uVar47 >> 5,CONCAT22((ushort)uVar36 >> 5,uVar38));
  uVar46 = (ushort)uVar17 >> 5;
  *puVar8 = *(undefined1 *)(param_6 + (uVar38 & 0x3ff));
  puVar8[1] = *(undefined1 *)(param_6 + ((uint)((uint6)uVar11 >> 0x10) & 0x3ff));
  puVar8[2] = *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar46,uVar11) >> 0x20) & 0x3ff));
  puVar8[3] = *(undefined1 *)(param_6 + (uVar46 & 0x3ff));
  puVar8 = (undefined1 *)(param_4[1] + param_5);
  uVar38 = (ushort)((ulonglong)uVar18 >> 0x10) >> 5;
  uVar11 = CONCAT24((ushort)((ulonglong)uVar47 >> 0x10) >> 5,
                    CONCAT22((ushort)((ulonglong)uVar36 >> 0x10) >> 5,uVar38));
  uVar46 = (ushort)((ulonglong)uVar17 >> 0x10) >> 5;
  *puVar8 = *(undefined1 *)(param_6 + (uVar38 & 0x3ff));
  puVar8[1] = *(undefined1 *)(param_6 + ((uint)((uint6)uVar11 >> 0x10) & 0x3ff));
  puVar8[2] = *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar46,uVar11) >> 0x20) & 0x3ff));
  puVar8[3] = *(undefined1 *)(param_6 + (uVar46 & 0x3ff));
  puVar8 = (undefined1 *)(param_4[2] + param_5);
  uVar38 = (ushort)((ulonglong)uVar18 >> 0x20) >> 5;
  uVar11 = CONCAT24((ushort)((ulonglong)uVar47 >> 0x20) >> 5,
                    CONCAT22((ushort)((ulonglong)uVar36 >> 0x20) >> 5,uVar38));
  uVar46 = (ushort)((ulonglong)uVar17 >> 0x20) >> 5;
  *puVar8 = *(undefined1 *)(param_6 + (uVar38 & 0x3ff));
  puVar8[1] = *(undefined1 *)(param_6 + ((uint)((uint6)uVar11 >> 0x10) & 0x3ff));
  puVar8[2] = *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar46,uVar11) >> 0x20) & 0x3ff));
  puVar8[3] = *(undefined1 *)(param_6 + (uVar46 & 0x3ff));
  puVar8 = (undefined1 *)(param_4[3] + param_5);
  uVar38 = (ushort)((ulonglong)uVar18 >> 0x35);
  uVar11 = CONCAT24((ushort)((ulonglong)uVar47 >> 0x35),
                    CONCAT22((ushort)((ulonglong)uVar36 >> 0x35),uVar38));
  uVar46 = (ushort)((ulonglong)uVar17 >> 0x35);
  *puVar8 = *(undefined1 *)(param_6 + (uVar38 & 0x3ff));
  puVar8[1] = *(undefined1 *)(param_6 + ((uint)((uint6)uVar11 >> 0x10) & 0x3ff));
  puVar8[2] = *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar46,uVar11) >> 0x20) & 0x3ff));
  puVar8[3] = *(undefined1 *)(param_6 + (uVar46 & 0x3ff));
  puVar8 = (undefined1 *)(param_4[4] + param_5);
  uVar17 = param_2[1];
  uVar47 = param_2[3];
  uVar12 = param_2[5];
  uVar18 = param_2[7];
  uVar36 = param_2[8];
  uVar38 = (ushort)uVar17 >> 5;
  uVar11 = CONCAT24((ushort)uVar12 >> 5,CONCAT22((ushort)uVar47 >> 5,uVar38));
  uVar46 = (ushort)uVar18 >> 5;
  *puVar8 = *(undefined1 *)(param_6 + (uVar38 & 0x3ff));
  puVar8[1] = *(undefined1 *)(param_6 + ((uint)((uint6)uVar11 >> 0x10) & 0x3ff));
  puVar8[2] = *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar46,uVar11) >> 0x20) & 0x3ff));
  puVar8[3] = *(undefined1 *)(param_6 + (uVar46 & 0x3ff));
  puVar8 = (undefined1 *)(param_4[5] + param_5);
  uVar49 = param_2[10];
  uVar38 = (ushort)((ulonglong)uVar17 >> 0x10) >> 5;
  uVar11 = CONCAT24((ushort)((ulonglong)uVar12 >> 0x10) >> 5,
                    CONCAT22((ushort)((ulonglong)uVar47 >> 0x10) >> 5,uVar38));
  uVar46 = (ushort)((ulonglong)uVar18 >> 0x10) >> 5;
  *puVar8 = *(undefined1 *)(param_6 + (uVar38 & 0x3ff));
  puVar8[1] = *(undefined1 *)(param_6 + ((uint)((uint6)uVar11 >> 0x10) & 0x3ff));
  puVar8[2] = *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar46,uVar11) >> 0x20) & 0x3ff));
  puVar8[3] = *(undefined1 *)(param_6 + (uVar46 & 0x3ff));
  puVar8 = (undefined1 *)(param_4[6] + param_5);
  uVar1 = param_2[0xc];
  uVar2 = param_2[0xe];
  uVar38 = (ushort)((ulonglong)uVar17 >> 0x20) >> 5;
  uVar11 = CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 5,
                    CONCAT22((ushort)((ulonglong)uVar47 >> 0x20) >> 5,uVar38));
  uVar46 = (ushort)((ulonglong)uVar18 >> 0x20) >> 5;
  *puVar8 = *(undefined1 *)(param_6 + (uVar38 & 0x3ff));
  puVar8[1] = *(undefined1 *)(param_6 + ((uint)((uint6)uVar11 >> 0x10) & 0x3ff));
  puVar8[2] = *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar46,uVar11) >> 0x20) & 0x3ff));
  puVar8[3] = *(undefined1 *)(param_6 + (uVar46 & 0x3ff));
  puVar8 = (undefined1 *)(param_4[7] + param_5);
  uVar38 = (ushort)((ulonglong)uVar17 >> 0x35);
  uVar11 = CONCAT24((ushort)((ulonglong)uVar12 >> 0x35),
                    CONCAT22((ushort)((ulonglong)uVar47 >> 0x35),uVar38));
  uVar46 = (ushort)((ulonglong)uVar18 >> 0x35);
  *puVar8 = *(undefined1 *)(param_6 + (uVar38 & 0x3ff));
  puVar8[1] = *(undefined1 *)(param_6 + ((uint)((uint6)uVar11 >> 0x10) & 0x3ff));
  puVar8[2] = *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar46,uVar11) >> 0x20) & 0x3ff));
  puVar8[3] = *(undefined1 *)(param_6 + (uVar46 & 0x3ff));
  iVar7 = *param_4 + param_5;
  uVar38 = (ushort)uVar36 >> 5;
  uVar11 = CONCAT24((ushort)uVar1 >> 5,CONCAT22((ushort)uVar49 >> 5,uVar38));
  uVar46 = (ushort)uVar2 >> 5;
  *(undefined1 *)(iVar7 + 4) = *(undefined1 *)(param_6 + (uVar38 & 0x3ff));
  *(undefined1 *)(iVar7 + 5) = *(undefined1 *)(param_6 + ((uint)((uint6)uVar11 >> 0x10) & 0x3ff));
  *(undefined1 *)(iVar7 + 6) =
       *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar46,uVar11) >> 0x20) & 0x3ff));
  *(undefined1 *)(iVar7 + 7) = *(undefined1 *)(param_6 + (uVar46 & 0x3ff));
  iVar7 = param_4[1] + param_5;
  uVar38 = (ushort)((ulonglong)uVar36 >> 0x10) >> 5;
  uVar11 = CONCAT24((ushort)((ulonglong)uVar1 >> 0x10) >> 5,
                    CONCAT22((ushort)((ulonglong)uVar49 >> 0x10) >> 5,uVar38));
  uVar46 = (ushort)((ulonglong)uVar2 >> 0x10) >> 5;
  *(undefined1 *)(iVar7 + 4) = *(undefined1 *)(param_6 + (uVar38 & 0x3ff));
  *(undefined1 *)(iVar7 + 5) = *(undefined1 *)(param_6 + ((uint)((uint6)uVar11 >> 0x10) & 0x3ff));
  *(undefined1 *)(iVar7 + 6) =
       *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar46,uVar11) >> 0x20) & 0x3ff));
  *(undefined1 *)(iVar7 + 7) = *(undefined1 *)(param_6 + (uVar46 & 0x3ff));
  iVar7 = param_4[2] + param_5;
  uVar38 = (ushort)((ulonglong)uVar36 >> 0x20) >> 5;
  uVar11 = CONCAT24((ushort)((ulonglong)uVar1 >> 0x20) >> 5,
                    CONCAT22((ushort)((ulonglong)uVar49 >> 0x20) >> 5,uVar38));
  uVar46 = (ushort)((ulonglong)uVar2 >> 0x20) >> 5;
  *(undefined1 *)(iVar7 + 4) = *(undefined1 *)(param_6 + (uVar38 & 0x3ff));
  *(undefined1 *)(iVar7 + 5) = *(undefined1 *)(param_6 + ((uint)((uint6)uVar11 >> 0x10) & 0x3ff));
  *(undefined1 *)(iVar7 + 6) =
       *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar46,uVar11) >> 0x20) & 0x3ff));
  *(undefined1 *)(iVar7 + 7) = *(undefined1 *)(param_6 + (uVar46 & 0x3ff));
  param_5 = param_4[3] + param_5;
  uVar38 = (ushort)((ulonglong)uVar36 >> 0x35);
  uVar11 = CONCAT24((ushort)((ulonglong)uVar1 >> 0x35),
                    CONCAT22((ushort)((ulonglong)uVar49 >> 0x35),uVar38));
  uVar46 = (ushort)((ulonglong)uVar2 >> 0x35);
  *(undefined1 *)(param_5 + 4) = *(undefined1 *)(param_6 + (uVar38 & 0x3ff));
  *(undefined1 *)(param_5 + 5) = *(undefined1 *)(param_6 + ((uint)((uint6)uVar11 >> 0x10) & 0x3ff));
  *(undefined1 *)(param_5 + 6) =
       *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar46,uVar11) >> 0x20) & 0x3ff));
  *(undefined1 *)(param_5 + 7) = *(undefined1 *)(param_6 + (uVar46 & 0x3ff));
  return;
}




/* Function: FUN_004cf110 */

ulonglong FUN_004cf110(void)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = (ulonglong)ROUND(in_ST0);
  local_20 = (uint)uVar1;
  uStack_1c = (float)(uVar1 >> 0x20);
  fVar3 = (float)in_ST0;
  if ((local_20 != 0) || (fVar3 = uStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
    if ((int)fVar3 < 0) {
      uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
    }
    else {
      uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
      uVar1 = CONCAT44((int)uStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
    }
  }
  return uVar1;
}




/* Function: FUN_004cf22b */

void FUN_004cf22b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}




/* Function: FUN_004cf470 */

void FUN_004cf470(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x20),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x18));
  }
  return;
}




/* Function: FUN_004cf560 */

void FUN_004cf560(void *param_1)

{
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}




/* Function: FUN_004cf66c */

void FUN_004cf66c(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
  return;
}




/* Function: FUN_004cf70c */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void FUN_004cf70c(void)

{
  undefined4 *local_20;
  
  for (local_20 = &DAT_00594c3c; local_20 < &DAT_00594c3c; local_20 = local_20 + 1) {
    if ((code *)*local_20 != (code *)0x0) {
      (*(code *)*local_20)();
    }
  }
  return;
}




/* Function: FUN_004cf79a */

void FUN_004cf79a(void)

{
  _controlfp(0x10000,0x30000);
  return;
}




/* Function: FUN_004cf7ac */

void FUN_004cf7ac(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  DVar1 = GetCurrentProcessId();
  DVar2 = GetCurrentThreadId();
  DVar3 = GetTickCount();
  QueryPerformanceCounter(&local_14);
  DAT_005b12c0 = local_c.dwHighDateTime ^ local_c.dwLowDateTime ^ DVar1 ^ DVar2 ^ DVar3 ^
                 local_14.s.HighPart ^ local_14.s.LowPart;
  if (DAT_005b12c0 == 0) {
    DAT_005b12c0 = 0xbb40e64e;
  }
  return;
}




/* Function: FUN_004cf810 */

int FUN_004cf810(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = (**(code **)(unaff_ESI + 4))();
  if (iVar1 == 1) {
    return 0;
  }
  iVar1 = (**(code **)(unaff_ESI + 0x18))(*(undefined4 *)(unaff_ESI + 0x1c));
  return -(uint)(iVar1 != 0);
}




/* Function: FUN_004cf850 */

void FUN_004cf850(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar2 = FUN_004cf810(&local_4);
  iVar1 = local_4;
  if (iVar2 == 0) {
    iVar2 = FUN_004cf810(&local_4);
    if (iVar2 == 0) {
      *param_1 = local_4 * 0x100 + iVar1;
      return;
    }
  }
  *param_1 = 0;
  return;
}




/* Function: FUN_004cf8b0 */

void FUN_004cf8b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar2 = FUN_004cf810(&local_4);
  iVar1 = local_4;
  if (iVar2 == 0) {
    iVar2 = FUN_004cf810(&local_4);
  }
  iVar4 = local_4 * 0x100;
  if (iVar2 == 0) {
    iVar2 = FUN_004cf810(&local_4);
  }
  iVar3 = local_4 * 0x10000;
  if (iVar2 == 0) {
    iVar2 = FUN_004cf810(&local_4);
    if (iVar2 == 0) {
      *param_1 = local_4 * 0x1000000 + iVar1 + iVar4 + iVar3;
      return;
    }
  }
  *param_1 = 0;
  return;
}




/* Function: FUN_004cf940 */

int __fastcall FUN_004cf940(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *in_EAX;
  char cVar2;
  
  while( true ) {
    cVar2 = *param_2;
    cVar1 = *in_EAX;
    param_2 = param_2 + 1;
    in_EAX = in_EAX + 1;
    if (('`' < cVar2) && (cVar2 < '{')) {
      cVar2 = cVar2 + -0x20;
    }
    if (('`' < cVar1) && (cVar1 < '{')) {
      cVar1 = cVar1 + -0x20;
    }
    if (cVar2 == '\0') {
      return -(uint)(cVar1 != '\0');
    }
    if (cVar1 == '\0') {
      return 1;
    }
    if (cVar2 < cVar1) break;
    if (cVar1 < cVar2) {
      return 1;
    }
  }
  return -1;
}




/* Function: FUN_004cf980 */

int FUN_004cf980(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_3 == 0) || (param_3 != 1)) {
    iVar2 = FUN_004cf940();
    return iVar2;
  }
  while( true ) {
    bVar1 = *param_1;
    bVar3 = bVar1 < *param_2;
    if (bVar1 != *param_2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = param_1[1];
    bVar3 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar3) - (uint)(bVar3 != 0);
}




/* Function: FUN_004cf9e0 */

int FUN_004cf9e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *_Memory;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBX;
  undefined4 unaff_EBP;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar7 = *(uint *)(unaff_EBX + 0x1c);
  iVar9 = 0;
  iVar2 = (**(code **)(unaff_EBX + 0x10))(uVar7,param_1,0,2);
  if (iVar2 != 0) {
    return 0;
  }
  uVar3 = (**(code **)(unaff_EBX + 0xc))(*(undefined4 *)(unaff_EBX + 0x1c),param_1);
  uVar8 = 0xffff;
  if (uVar3 < 0xffff) {
    uVar8 = uVar3;
    uVar7 = uVar3;
  }
  uVar10 = uVar3;
  _Memory = malloc(0x404);
  if (_Memory == (void *)0x0) {
    return 0;
  }
  uVar4 = 4;
  if (4 < uVar8) {
    do {
      uVar5 = uVar4 + 0x400;
      uVar4 = uVar8;
      if (uVar5 <= uVar8) {
        uVar4 = uVar5;
      }
      iVar2 = uVar3 - uVar4;
      uVar5 = 0x404;
      if (uVar3 - iVar2 < 0x405) {
        uVar5 = uVar3 - iVar2;
      }
      iVar6 = (**(code **)(unaff_EBX + 0x10))(*(undefined4 *)(unaff_EBX + 0x1c),unaff_EBP,iVar2,0);
      if ((iVar6 != 0) ||
         (uVar8 = uVar7, uVar3 = uVar10,
         uVar7 = (**(code **)(unaff_EBX + 4))
                           (*(undefined4 *)(unaff_EBX + 0x1c),unaff_EBP,_Memory,uVar5),
         uVar7 != uVar5)) break;
      iVar6 = uVar5 - 3;
      do {
        iVar1 = iVar6;
        if (iVar1 < 1) goto LAB_004cfaef;
        iVar6 = iVar1 + -1;
      } while ((((*(char *)(iVar1 + -1 + (int)_Memory) != 'P') ||
                (*(char *)(iVar1 + (int)_Memory) != 'K')) ||
               (*(char *)(iVar1 + 1 + (int)_Memory) != '\x05')) ||
              (*(char *)(iVar1 + 2 + (int)_Memory) != '\x06'));
      iVar9 = iVar6 + iVar2;
      if (iVar9 != 0) break;
LAB_004cfaef:
      uVar7 = uVar8;
      uVar10 = uVar3;
    } while (uVar4 < uVar8);
  }
  free(_Memory);
  return iVar9;
}




/* Function: FUN_004cfb20 */

void __fastcall FUN_004cfb20(uint param_1,int *param_2)

{
  param_2[3] = param_1 >> 0x10 & 0x1f;
  param_2[5] = (param_1 >> 0x19) + 0x7bc;
  param_2[2] = param_1 >> 0xb & 0x1f;
  param_2[4] = (param_1 >> 0x15 & 0xf) - 1;
  param_2[1] = param_1 >> 5 & 0x3f;
  *param_2 = (param_1 & 0x1f) << 1;
  return;
}




/* Function: FUN_004cfb70 */

int FUN_004cfb70(int param_1,uint param_2,int param_3,uint param_4)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint unaff_retaddr;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [32];
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iVar4 = 0;
  if (in_EAX == 0) {
    return -0x66;
  }
  uStack_64 = 0;
  uStack_68 = *(int *)(in_EAX + 0x34) + *(int *)(in_EAX + 0x2c);
  iVar1 = (**(code **)(in_EAX + 0x10))
                    (*(undefined4 *)(in_EAX + 0x1c),*(undefined4 *)(in_EAX + 0x20));
  if (iVar1 == 0) {
    iVar1 = FUN_004cf8b0(&uStack_68);
    if (iVar1 == 0) {
      if (uStack_68 != 0x2014b50) {
        iVar4 = -0x67;
      }
    }
    else {
      iVar4 = -1;
    }
  }
  else {
    iVar4 = -1;
  }
  iVar1 = FUN_004cf850(&stack0xffffffa0);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_004cf850(&stack0xffffffa4);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_004cf850(auStack_58);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_004cf850(auStack_54);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_004cf8b0(auStack_50);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  FUN_004cfb20();
  iVar1 = FUN_004cf8b0(auStack_4c);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_004cf8b0(auStack_48);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_004cf8b0(auStack_44);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_004cf850(&uStack_40);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_004cf850(&uStack_3c);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_004cf850(&uStack_38);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_004cf850(auStack_34);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_004cf850(auStack_30);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_004cf8b0(auStack_2c);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_004cf8b0(&uStack_64);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  uVar3 = uStack_40;
  if (iVar4 == 0) {
    if (iStack_4 != 0) {
      uVar3 = unaff_retaddr;
      if (uStack_40 < unaff_retaddr) {
        *(undefined1 *)(uStack_40 + iStack_4) = 0;
        uVar3 = uStack_40;
      }
      if (((uStack_40 != 0) && (unaff_retaddr != 0)) &&
         (uVar2 = (**(code **)(in_EAX + 4))
                            (*(undefined4 *)(in_EAX + 0x1c),*(undefined4 *)(in_EAX + 0x20),iStack_4,
                             uVar3), uVar2 != uVar3)) {
        iVar4 = -1;
      }
      uVar3 = uStack_40 - uVar3;
      if (iVar4 != 0) goto LAB_004cfe10;
    }
    if (param_1 != 0) {
      uStack_68 = uStack_3c;
      if (param_2 <= uStack_3c) {
        uStack_68 = param_2;
      }
      if (uVar3 != 0) {
        iVar1 = (**(code **)(in_EAX + 0x10))
                          (*(undefined4 *)(in_EAX + 0x1c),*(undefined4 *)(in_EAX + 0x20),uVar3,1);
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        else {
          iVar4 = -1;
        }
      }
      if (((uStack_3c != 0) && (param_2 != 0)) &&
         (uVar2 = (**(code **)(in_EAX + 4))
                            (*(undefined4 *)(in_EAX + 0x1c),*(undefined4 *)(in_EAX + 0x20),param_1,
                             uStack_68), uVar2 != uStack_68)) {
        iVar4 = -1;
      }
      iVar1 = uVar3 + (uStack_3c - uStack_68);
      goto LAB_004cfe14;
    }
  }
LAB_004cfe10:
  iVar1 = uVar3 + uStack_3c;
LAB_004cfe14:
  if (iVar4 == 0) {
    if (param_3 != 0) {
      if (uStack_38 < param_4) {
        *(undefined1 *)(uStack_38 + param_3) = 0;
        uStack_68 = uStack_38;
      }
      else {
        uStack_68 = param_4;
      }
      iVar5 = 0;
      if ((iVar1 != 0) &&
         (iVar4 = (**(code **)(in_EAX + 0x10))
                            (*(undefined4 *)(in_EAX + 0x1c),*(undefined4 *)(in_EAX + 0x20),iVar1,1),
         iVar4 != 0)) {
        iVar5 = -1;
      }
      if (((uStack_38 != 0) && (param_4 != 0)) &&
         (uVar3 = (**(code **)(in_EAX + 4))
                            (*(undefined4 *)(in_EAX + 0x1c),*(undefined4 *)(in_EAX + 0x20),param_3,
                             uStack_68), uVar3 != uStack_68)) {
        return -1;
      }
      iVar4 = 0;
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    if (puStack_c != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)&stack0xffffffa0;
      for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puStack_c = *puVar6;
        puVar6 = puVar6 + 1;
        puStack_c = puStack_c + 1;
      }
    }
    if (puStack_8 != (undefined4 *)0x0) {
      *puStack_8 = uStack_64;
    }
  }
  return iVar4;
}




/* Function: FUN_004cfed0 */

void FUN_004cfed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_004cfb70(param_2,0,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}




/* Function: FUN_004cff10 */

int FUN_004cff10(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -0x66;
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar1 = FUN_004cfb70(param_1 + 0x48,param_1 + 0x98,0,0,0,0,0,0);
  *(uint *)(param_1 + 0x38) = (uint)(iVar1 == 0);
  return iVar1;
}




/* Function: FUN_004cff60 */

int FUN_004cff60(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -0x66;
  }
  if ((*(int *)(param_1 + 0x38) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x30) + 1, iVar1 != *(int *)(param_1 + 0x24))) {
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) +
         *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x6c) + 0x2e + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x30) = iVar1;
    iVar1 = FUN_004cfb70(param_1 + 0x48,param_1 + 0x98,0,0,0,0,0,0);
    *(uint *)(param_1 + 0x38) = (uint)(iVar1 == 0);
    return iVar1;
  }
  return -100;
}




/* Function: FUN_004cffe0 */

int FUN_004cffe0(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined1 local_104 [260];
  
  if (param_1 == 0) {
    return -0x66;
  }
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (0xff < (uint)((int)pcVar4 - (int)(param_2 + 1))) {
    return -0x66;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    return -100;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  iVar5 = FUN_004cff10(param_1);
  while( true ) {
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x30) = uVar3;
      *(undefined4 *)(param_1 + 0x34) = uVar2;
      return iVar5;
    }
    FUN_004cfed0(param_1,0,local_104,0x100,0,0,0,0);
    iVar5 = FUN_004cf980(local_104,param_2,param_3);
    if (iVar5 == 0) break;
    iVar5 = FUN_004cff60(param_1);
  }
  return 0;
}




/* Function: FUN_004d00c0 */

int __thiscall FUN_004d00c0(int *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int *unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int iVar3;
  uint auStack_14 [2];
  
  iVar3 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  auStack_14[1] = 0;
  auStack_14[0] = *(int *)(unaff_ESI + 0x2c) + *(int *)(unaff_ESI + 0x98);
  iVar2 = (**(code **)(unaff_ESI + 0x10))
                    (*(undefined4 *)(unaff_ESI + 0x1c),*(undefined4 *)(unaff_ESI + 0x20));
  if (iVar2 != 0) {
    return -1;
  }
  iVar2 = FUN_004cf8b0(&stack0xfffffff4);
  if (iVar2 == 0) {
    if (unaff_EDI != 0x4034b50) {
      iVar3 = -0x67;
    }
  }
  else {
    iVar3 = -1;
  }
  iVar2 = FUN_004cf850(&stack0xfffffff4);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_004cf850(auStack_14);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_004cf850(&stack0xfffffff4);
  if (iVar2 == 0) {
    if ((iVar3 == 0) &&
       ((iVar2 = *(int *)(unaff_ESI + 0x54), unaff_EDI != iVar2 || ((iVar2 != 0 && (iVar2 != 8))))))
    {
      iVar3 = -0x67;
    }
  }
  else {
    iVar3 = -1;
  }
  iVar2 = FUN_004cf8b0(&stack0xfffffff4);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_004cf8b0(&stack0xfffffff4);
  uVar1 = auStack_14[0];
  if (iVar2 == 0) {
    if (((iVar3 == 0) && (unaff_EDI != *(int *)(unaff_ESI + 0x5c))) && ((auStack_14[0] & 8) == 0)) {
      iVar3 = -0x67;
    }
  }
  else {
    iVar3 = -1;
  }
  iVar2 = FUN_004cf8b0(&stack0xfffffff4);
  if (iVar2 == 0) {
    if (((iVar3 == 0) && (unaff_EDI != *(int *)(unaff_ESI + 0x60))) && ((uVar1 & 8) == 0)) {
      iVar3 = -0x67;
    }
  }
  else {
    iVar3 = -1;
  }
  iVar2 = FUN_004cf8b0(&stack0xfffffff4);
  if (iVar2 == 0) {
    if (((iVar3 == 0) && (unaff_EDI != *(int *)(unaff_ESI + 100))) && ((uVar1 & 8) == 0)) {
      iVar3 = -0x67;
    }
  }
  else {
    iVar3 = -1;
  }
  iVar2 = FUN_004cf850(&stack0xfffffff4);
  if (iVar2 == 0) {
    if ((iVar3 == 0) && (unaff_EDI != *(int *)(unaff_ESI + 0x68))) {
      iVar3 = -0x67;
    }
  }
  else {
    iVar3 = -1;
  }
  *param_2 = *param_2 + unaff_EDI;
  iVar2 = FUN_004cf850(&stack0xfffffff4);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  *unaff_EBP = unaff_EDI + 0x1e + *(int *)(unaff_ESI + 0x98);
  *param_1 = unaff_EDI;
  *param_2 = *param_2 + unaff_EDI;
  return iVar3;
}




/* Function: FUN_004d02c0 */

int FUN_004d02c0(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_4;
  
  local_4 = 0;
  if (param_1 == 0) {
    return -0x66;
  }
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    return -0x66;
  }
  if (*piVar1 == 0) {
    return -100;
  }
  if (param_3 != 0) {
    piVar1[4] = param_2;
    piVar1[5] = param_3;
    if ((uint)piVar1[0x17] < param_3) {
      piVar1[5] = piVar1[0x17];
    }
    iVar2 = piVar1[5];
    do {
      if (iVar2 == 0) {
        return local_4;
      }
      if ((piVar1[2] == 0) && (uVar3 = piVar1[0x16], uVar3 != 0)) {
        uVar6 = 0x4000;
        if (uVar3 < 0x4000) {
          uVar6 = uVar3;
        }
        iVar2 = (*(code *)piVar1[0x1c])(piVar1[0x1f],piVar1[0x20],piVar1[0x22] + piVar1[0xf],0);
        if ((iVar2 != 0) ||
           (uVar3 = (*(code *)piVar1[0x19])(piVar1[0x1f],piVar1[0x20],*piVar1,uVar6), uVar3 != uVar6
           )) {
          return -1;
        }
        piVar1[0xf] = piVar1[0xf] + uVar6;
        piVar1[0x16] = piVar1[0x16] - uVar6;
        piVar1[1] = *piVar1;
        piVar1[2] = uVar6;
      }
      if ((piVar1[0x21] == 0) || (piVar1[0x23] != 0)) {
        uVar3 = piVar1[2];
        if ((uVar3 == 0) && (piVar1[0x16] == 0)) {
          return local_4;
        }
        uVar6 = piVar1[5];
        if (uVar3 <= (uint)piVar1[5]) {
          uVar6 = uVar3;
        }
        uVar3 = 0;
        if (uVar6 != 0) {
          do {
            *(undefined1 *)(uVar3 + piVar1[4]) = *(undefined1 *)(uVar3 + piVar1[1]);
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar6);
        }
        iVar2 = FUN_004d0a80(piVar1[0x14],piVar1[4],uVar6);
        piVar1[0x14] = iVar2;
        piVar1[0x17] = piVar1[0x17] - uVar6;
        piVar1[2] = piVar1[2] - uVar6;
        local_4 = local_4 + uVar6;
        piVar1[5] = piVar1[5] - uVar6;
        piVar1[4] = piVar1[4] + uVar6;
        piVar1[1] = piVar1[1] + uVar6;
        piVar1[6] = piVar1[6] + uVar6;
      }
      else {
        iVar2 = piVar1[4];
        iVar5 = piVar1[6];
        iVar4 = FUN_004d0d60(piVar1 + 1,2);
        iVar5 = piVar1[6] - iVar5;
        iVar2 = FUN_004d0a80(piVar1[0x14],iVar2,iVar5);
        local_4 = local_4 + iVar5;
        piVar1[0x14] = iVar2;
        piVar1[0x17] = piVar1[0x17] - iVar5;
        if (iVar4 == 1) {
          return local_4;
        }
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      iVar2 = piVar1[5];
    } while( true );
  }
  return 0;
}




/* Function: FUN_004d04c0 */

undefined4 FUN_004d04c0(int param_1)

{
  undefined4 *_Memory;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  _Memory = *(undefined4 **)(param_1 + 0x9c);
  if (_Memory == (undefined4 *)0x0) {
    return 0xffffff9a;
  }
  if (((_Memory[0x17] == 0) && (_Memory[0x23] == 0)) && (_Memory[0x14] != _Memory[0x15])) {
    uVar1 = 0xffffff97;
  }
  if ((void *)*_Memory != (void *)0x0) {
    free((void *)*_Memory);
  }
  *_Memory = 0;
  if (_Memory[0x10] != 0) {
    FUN_004d0c10(_Memory + 1);
  }
  _Memory[0x10] = 0;
  free(_Memory);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return uVar1;
}




/* Function: FUN_004d0560 */

undefined4 * FUN_004d0560(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  int iVar4;
  code ***pppcVar5;
  code **ppcVar6;
  undefined4 *puVar7;
  int iStack_c4;
  int iStack_c0;
  code **ppcStack_bc;
  code *pcStack_a8;
  code *local_a0 [2];
  int iStack_98;
  undefined1 auStack_94 [4];
  int iStack_90;
  int iStack_8c;
  int local_84;
  uint uStack_80;
  int iStack_7c;
  int aiStack_78 [22];
  undefined4 uStack_20;
  
  iVar4 = 0;
  if (param_2 == (undefined4 *)0x0) {
    ppcStack_bc = local_a0;
    iStack_c0 = 0x4d0580;
    FUN_004d1260();
  }
  else {
    ppcVar6 = local_a0;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppcVar6 = (code *)*param_2;
      param_2 = param_2 + 1;
      ppcVar6 = ppcVar6 + 1;
    }
  }
  ppcStack_bc = (code **)0x5;
  iStack_c0 = param_1;
  iStack_c4 = local_84;
  iStack_8c = (*local_a0[0])();
  if (iStack_8c == 0) {
    return (undefined4 *)0x0;
  }
  uVar1 = FUN_004cf9e0(iStack_8c);
  if (uVar1 == 0) {
    iVar4 = -1;
  }
  iVar2 = (*local_a0[1])(iStack_90,iStack_8c,uVar1,0);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  iVar2 = FUN_004cf8b0(&stack0xffffff38);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  iVar2 = FUN_004cf850(&stack0xffffff38);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  iVar2 = FUN_004cf850(&iStack_c4);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  iVar2 = FUN_004cf850(&iStack_98);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  iVar2 = FUN_004cf850(&iStack_c0);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  if (((iStack_c0 != iStack_98) || (iStack_c4 != 0)) || (unaff_EBX != 0)) {
    iVar4 = -0x67;
  }
  iVar2 = FUN_004cf8b0(&iStack_7c);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  iVar2 = FUN_004cf8b0(aiStack_78);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  iVar2 = FUN_004cf850(auStack_94);
  if (iVar2 != 0) {
    iVar4 = -1;
  }
  if (((uint)(iStack_7c + aiStack_78[0]) <= uVar1) && (iVar4 == 0)) {
    iStack_90 = (uVar1 - iStack_7c) - aiStack_78[0];
    uStack_20 = 0;
    uStack_80 = uVar1;
    puVar3 = malloc(0xa0);
    pppcVar5 = &ppcStack_bc;
    puVar7 = puVar3;
    for (iVar4 = 0x28; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *pppcVar5;
      pppcVar5 = pppcVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_004cff10(puVar3);
    return puVar3;
  }
  (*pcStack_a8)(local_a0[0],local_a0[1]);
  return (undefined4 *)0x0;
}




/* Function: FUN_004d0760 */

void FUN_004d0760(undefined4 param_1)

{
  FUN_004d0560(param_1,0);
  return;
}




/* Function: FUN_004d0770 */

undefined4 FUN_004d0770(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *_Memory;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_8;
  int local_4;
  
  puVar2 = param_1;
  if ((param_1 == (undefined4 *)0x0) || (param_1[0xe] == 0)) {
    return 0xffffff9a;
  }
  if (param_1[0x27] != 0) {
    FUN_004d04c0(param_1);
  }
  iVar3 = FUN_004d00c0(&local_4,&param_1,&local_8);
  if (iVar3 != 0) {
    return 0xffffff99;
  }
  _Memory = malloc(0x90);
  if (_Memory != (undefined4 *)0x0) {
    pvVar4 = malloc(0x4000);
    _Memory[0x12] = local_8;
    *_Memory = pvVar4;
    _Memory[0x11] = param_1;
    _Memory[0x13] = 0;
    _Memory[0x23] = param_4;
    if (pvVar4 != (void *)0x0) {
      _Memory[0x10] = 0;
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = puVar2[0x15];
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 6;
        uVar5 = puVar2[0x14] & 6;
        if (uVar5 == 2) {
          *param_3 = 9;
        }
        else if (uVar5 == 4) {
          *param_3 = 2;
        }
        else if (uVar5 == 6) {
          *param_3 = 1;
        }
      }
      uVar1 = puVar2[0x17];
      _Memory[0x14] = 0;
      _Memory[0x15] = uVar1;
      _Memory[0x21] = puVar2[0x15];
      _Memory[0x20] = puVar2[8];
      puVar6 = puVar2;
      puVar7 = _Memory + 0x18;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      _Memory[0x22] = puVar2[0xb];
      _Memory[6] = 0;
      if ((puVar2[0x15] == 8) && (param_4 == 0)) {
        _Memory[9] = 0;
        _Memory[10] = 0;
        _Memory[0xb] = 0;
        iVar3 = FUN_004d0c60(_Memory + 1,0xfffffff1,"1.1.4",0x38);
        if (iVar3 == 0) {
          _Memory[0x10] = 1;
        }
      }
      _Memory[0x16] = puVar2[0x18];
      _Memory[0x17] = puVar2[0x19];
      iVar3 = puVar2[0x26];
      _Memory[2] = 0;
      _Memory[0xf] = iVar3 + 0x1e + local_4;
      puVar2[0x27] = _Memory;
      return 0;
    }
    free(_Memory);
  }
  return 0xffffff98;
}




/* Function: FUN_004d0910 */

void FUN_004d0910(undefined4 param_1)

{
  FUN_004d0770(param_1,0,0,0);
  return;
}




/* Function: FUN_004d0930 */

void FUN_004d0930(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  do {
    uVar1 = uVar2 + 7;
    uVar3 = uVar3 | 1 << (0x1f - (&DAT_0058f51c)[uVar2] & 0x1f) |
                    1 << (0x1f - (&DAT_0058f51d)[uVar2] & 0x1f) |
                    1 << (0x1f - (&DAT_0058f51e)[uVar2] & 0x1f) |
                    1 << (0x1f - (&DAT_0058f51f)[uVar2] & 0x1f) |
                    1 << (0x1f - (&DAT_0058f520)[uVar2] & 0x1f) |
                    1 << (0x1f - (&DAT_0058f522)[uVar2] & 0x1f) |
                    1 << (0x1f - (&DAT_0058f521)[uVar2] & 0x1f);
    uVar2 = uVar1;
  } while (uVar1 < 0xe);
  uVar2 = 0;
  do {
    uVar1 = uVar2 >> 1;
    if ((uVar2 & 1) != 0) {
      uVar1 = uVar1 ^ uVar3;
    }
    if ((uVar1 & 1) == 0) {
      uVar1 = uVar1 >> 1;
    }
    else {
      uVar1 = uVar1 >> 1 ^ uVar3;
    }
    if ((uVar1 & 1) == 0) {
      uVar1 = uVar1 >> 1;
    }
    else {
      uVar1 = uVar1 >> 1 ^ uVar3;
    }
    if ((uVar1 & 1) == 0) {
      uVar1 = uVar1 >> 1;
    }
    else {
      uVar1 = uVar1 >> 1 ^ uVar3;
    }
    if ((uVar1 & 1) == 0) {
      uVar1 = uVar1 >> 1;
    }
    else {
      uVar1 = uVar1 >> 1 ^ uVar3;
    }
    if ((uVar1 & 1) == 0) {
      uVar1 = uVar1 >> 1;
    }
    else {
      uVar1 = uVar1 >> 1 ^ uVar3;
    }
    if ((uVar1 & 1) == 0) {
      uVar1 = uVar1 >> 1;
    }
    else {
      uVar1 = uVar1 >> 1 ^ uVar3;
    }
    if ((uVar1 & 1) == 0) {
      uVar1 = uVar1 >> 1;
    }
    else {
      uVar1 = uVar1 >> 1 ^ uVar3;
    }
    (&DAT_005b6dd0)[uVar2] = uVar1;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x100);
  DAT_005b12d4 = 0;
  return;
}




/* Function: FUN_004d0a80 */

uint FUN_004d0a80(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (DAT_005b12d4 != 0) {
    FUN_004d0930();
  }
  param_1 = ~param_1;
  if (7 < param_3) {
    uVar2 = param_3 >> 3;
    do {
      param_3 = param_3 - 8;
      uVar1 = (&DAT_005b6dd0)[(*param_2 ^ param_1) & 0xff] ^ param_1 >> 8;
      uVar1 = (&DAT_005b6dd0)[(param_2[1] ^ uVar1) & 0xff] ^ uVar1 >> 8;
      uVar1 = (&DAT_005b6dd0)[(param_2[2] ^ uVar1) & 0xff] ^ uVar1 >> 8;
      uVar1 = (&DAT_005b6dd0)[(param_2[3] ^ uVar1) & 0xff] ^ uVar1 >> 8;
      uVar1 = (&DAT_005b6dd0)[(param_2[4] ^ uVar1) & 0xff] ^ uVar1 >> 8;
      uVar1 = (&DAT_005b6dd0)[(param_2[5] ^ uVar1) & 0xff] ^ uVar1 >> 8;
      uVar1 = (&DAT_005b6dd0)[(param_2[6] ^ uVar1) & 0xff] ^ uVar1 >> 8;
      param_1 = uVar1 >> 8 ^ (&DAT_005b6dd0)[(param_2[7] ^ uVar1) & 0xff];
      param_2 = param_2 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    param_1 = param_1 >> 8 ^ (&DAT_005b6dd0)[(*param_2 ^ param_1) & 0xff];
    param_2 = param_2 + 1;
  }
  return ~param_1;
}




/* Function: FUN_004d0bc0 */

undefined4 FUN_004d0bc0(int param_1)

{
  uint *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(uint **)(param_1 + 0x1c), puVar1 != (uint *)0x0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *puVar1 = -(uint)(puVar1[3] != 0) & 7;
    FUN_004d12a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14),param_1,0);
    return 0;
  }
  return 0xfffffffe;
}




/* Function: FUN_004d0c10 */

undefined4 FUN_004d0c10(int param_1)

{
  int iVar1;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
    if (iVar1 != 0) {
      FUN_004d1f20(iVar1,param_1);
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}




/* Function: FUN_004d0c60 */

undefined4 FUN_004d0c60(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(code **)(param_1 + 0x20) = FUN_004d2090;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined1 **)(param_1 + 0x24) = &LAB_004d20b0;
  }
  iVar1 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x18);
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 0;
    if (param_2 < 0) {
      param_2 = -param_2;
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 1;
    }
    if ((param_2 < 8) || (0xf < param_2)) {
      FUN_004d0c10(param_1);
      return 0xfffffffe;
    }
    *(int *)(*(int *)(param_1 + 0x1c) + 0x10) = param_2;
    uVar2 = FUN_004d1320(param_1,(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) != 0) - 1 & 0x4d1f60,
                         1 << ((byte)param_2 & 0x1f));
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14) = uVar2;
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x14) != 0) {
      FUN_004d0bc0(param_1);
      return 0;
    }
    FUN_004d0c10(param_1);
  }
  return 0xfffffffc;
}




/* Function: FUN_004d0d60 */

uint FUN_004d0d60(int *param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (((param_1 != (int *)0x0) && ((uint *)param_1[7] != (uint *)0x0)) && (*param_1 != 0)) {
    uVar6 = 0xfffffffb;
    uVar5 = (param_2 != 4) - 1 & 0xfffffffb;
    uVar4 = *(uint *)param_1[7];
    while (uVar4 < 0xe) {
      switch(uVar4) {
      case 0:
        if (param_1[1] == 0) {
          return uVar6;
        }
        param_1[2] = param_1[2] + 1;
        param_1[1] = param_1[1] + -1;
        *(uint *)(param_1[7] + 4) = (uint)*(byte *)*param_1;
        puVar3 = (undefined4 *)param_1[7];
        uVar2 = puVar3[1];
        *param_1 = *param_1 + 1;
        if (((byte)uVar2 & 0xf) != 8) {
          *puVar3 = 0xd;
          param_1[6] = (int)"unknown compression method";
          *(undefined4 *)(param_1[7] + 4) = 5;
          uVar6 = uVar5;
          break;
        }
        if (((uint)puVar3[1] >> 4) + 8 <= (uint)puVar3[4]) {
          *puVar3 = 1;
          uVar6 = uVar5;
          goto switchD_004d0db0_caseD_1;
        }
        *puVar3 = 0xd;
        param_1[6] = (int)"invalid window size";
        goto LAB_004d0fe4;
      case 1:
switchD_004d0db0_caseD_1:
        if (param_1[1] == 0) {
          return uVar6;
        }
        puVar3 = (undefined4 *)param_1[7];
        param_1[1] = param_1[1] + -1;
        param_1[2] = param_1[2] + 1;
        bVar1 = *(byte *)*param_1;
        *param_1 = (int)((byte *)*param_1 + 1);
        if ((puVar3[1] * 0x100 + (uint)bVar1) % 0x1f == 0) {
          if ((bVar1 & 0x20) != 0) {
            *(undefined4 *)param_1[7] = 2;
            uVar6 = uVar5;
            goto switchD_004d0db0_caseD_2;
          }
          *puVar3 = 7;
          uVar6 = uVar5;
        }
        else {
          *puVar3 = 0xd;
          param_1[6] = (int)"incorrect header check";
          *(undefined4 *)(param_1[7] + 4) = 5;
          uVar6 = uVar5;
        }
        break;
      case 2:
switchD_004d0db0_caseD_2:
        if (param_1[1] == 0) {
          return uVar6;
        }
        param_1[2] = param_1[2] + 1;
        param_1[1] = param_1[1] + -1;
        *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
        *param_1 = *param_1 + 1;
        *(undefined4 *)param_1[7] = 3;
        uVar6 = uVar5;
      case 3:
        if (param_1[1] != 0) {
          param_1[1] = param_1[1] + -1;
          param_1[2] = param_1[2] + 1;
          *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
          *param_1 = *param_1 + 1;
          *(undefined4 *)param_1[7] = 4;
          uVar6 = uVar5;
switchD_004d0db0_caseD_4:
          if (param_1[1] != 0) {
            param_1[1] = param_1[1] + -1;
            param_1[2] = param_1[2] + 1;
            *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
            *param_1 = *param_1 + 1;
            *(undefined4 *)param_1[7] = 5;
            uVar6 = uVar5;
switchD_004d0db0_caseD_5:
            if (param_1[1] != 0) {
              param_1[1] = param_1[1] + -1;
              param_1[2] = param_1[2] + 1;
              *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
              *param_1 = *param_1 + 1;
              param_1[0xc] = ((undefined4 *)param_1[7])[2];
              *(undefined4 *)param_1[7] = 6;
              return 2;
            }
          }
        }
        return uVar6;
      case 4:
        goto switchD_004d0db0_caseD_4;
      case 5:
        goto switchD_004d0db0_caseD_5;
      case 6:
        *(undefined4 *)param_1[7] = 0xd;
        param_1[6] = (int)"need dictionary";
        *(undefined4 *)(param_1[7] + 4) = 0;
        return 0xfffffffe;
      case 7:
        uVar4 = FUN_004d13c0(*(undefined4 *)(param_1[7] + 0x14),param_1,uVar6);
        if (uVar4 == 0xfffffffd) {
          *(undefined4 *)param_1[7] = 0xd;
          *(undefined4 *)(param_1[7] + 4) = 0;
          uVar6 = 0xfffffffd;
        }
        else {
          if (uVar4 == 0) {
            uVar4 = uVar5;
          }
          if (uVar4 != 1) {
            return uVar4;
          }
          FUN_004d12a0(*(undefined4 *)(param_1[7] + 0x14),param_1,param_1[7] + 4);
          puVar3 = (undefined4 *)param_1[7];
          if (puVar3[3] == 0) {
            *puVar3 = 8;
            uVar6 = uVar5;
            goto switchD_004d0db0_caseD_8;
          }
          *puVar3 = 0xc;
          uVar6 = uVar5;
        }
        break;
      case 8:
switchD_004d0db0_caseD_8:
        if (param_1[1] == 0) {
          return uVar6;
        }
        param_1[1] = param_1[1] + -1;
        param_1[2] = param_1[2] + 1;
        *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
        *param_1 = *param_1 + 1;
        *(undefined4 *)param_1[7] = 9;
        uVar6 = uVar5;
      case 9:
        if (param_1[1] == 0) {
          return uVar6;
        }
        param_1[1] = param_1[1] + -1;
        param_1[2] = param_1[2] + 1;
        *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
        *param_1 = *param_1 + 1;
        *(undefined4 *)param_1[7] = 10;
        uVar6 = uVar5;
switchD_004d0db0_caseD_a:
        if (param_1[1] == 0) {
          return uVar6;
        }
        param_1[1] = param_1[1] + -1;
        param_1[2] = param_1[2] + 1;
        *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
        *param_1 = *param_1 + 1;
        *(undefined4 *)param_1[7] = 0xb;
        uVar6 = uVar5;
switchD_004d0db0_caseD_b:
        if (param_1[1] == 0) {
          return uVar6;
        }
        param_1[1] = param_1[1] + -1;
        param_1[2] = param_1[2] + 1;
        *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
        *param_1 = *param_1 + 1;
        puVar3 = (undefined4 *)param_1[7];
        if (puVar3[1] == puVar3[2]) {
          *(undefined4 *)param_1[7] = 0xc;
switchD_004d0db0_caseD_c:
          return 1;
        }
        *puVar3 = 0xd;
        param_1[6] = (int)"incorrect data check";
LAB_004d0fe4:
        *(undefined4 *)(param_1[7] + 4) = 5;
        uVar6 = uVar5;
        break;
      case 10:
        goto switchD_004d0db0_caseD_a;
      case 0xb:
        goto switchD_004d0db0_caseD_b;
      case 0xc:
        goto switchD_004d0db0_caseD_c;
      case 0xd:
        return 0xfffffffd;
      }
      uVar4 = *(uint *)param_1[7];
    }
  }
  return 0xfffffffe;
}




/* Function: FUN_004d1260 */

void FUN_004d1260(undefined4 *param_1)

{
  *param_1 = &LAB_004d1160;
  param_1[1] = &LAB_004d11b0;
  param_1[2] = &LAB_004d11d0;
  param_1[3] = &LAB_004d11f0;
  param_1[4] = &LAB_004d1200;
  param_1[5] = &LAB_004d1240;
  param_1[6] = &LAB_004d1250;
  param_1[7] = 0;
  return;
}




/* Function: FUN_004d12a0 */

void FUN_004d12a0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 != (int *)0x0) {
    *param_3 = param_1[0xf];
  }
  if ((*param_1 == 4) || (*param_1 == 5)) {
    (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[3]);
  }
  if (*param_1 == 6) {
    FUN_004d2820(param_1[1],param_2);
  }
  param_1[0xd] = param_1[10];
  param_1[0xc] = param_1[10];
  *param_1 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if ((code *)param_1[0xe] != (code *)0x0) {
    iVar1 = (*(code *)param_1[0xe])(0,0,0);
    param_1[0xf] = iVar1;
    *(int *)(param_2 + 0x30) = iVar1;
  }
  return;
}




/* Function: FUN_004d1320 */

undefined4 * FUN_004d1320(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x40);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),8,0x5a0);
    puVar1[9] = iVar2;
    if (iVar2 != 0) {
      iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,param_3);
      puVar1[10] = iVar2;
      if (iVar2 == 0) {
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),puVar1[9]);
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),puVar1);
        return (undefined4 *)0x0;
      }
      puVar1[0xb] = iVar2 + param_3;
      puVar1[0xe] = param_2;
      *puVar1 = 0;
      FUN_004d12a0(puVar1,param_1,0);
      return puVar1;
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),puVar1);
  }
  return (undefined4 *)0x0;
}




/* Function: FUN_004d1f20 */

undefined4 FUN_004d1f20(int param_1,int param_2)

{
  FUN_004d12a0(param_1,param_2,0);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x28));
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x24));
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  return 0;
}




/* Function: FUN_004d1f60 */

uint FUN_004d1f60(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  
  uVar2 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_2 != (byte *)0x0) {
    while (param_3 != 0) {
      uVar1 = param_3;
      if (0x15af < param_3) {
        uVar1 = 0x15b0;
      }
      param_3 = param_3 - uVar1;
      if (0xf < (int)uVar1) {
        uVar18 = uVar1 >> 4;
        uVar1 = uVar1 + uVar18 * -0x10;
        do {
          iVar3 = uVar2 + *param_2;
          iVar4 = iVar3 + (uint)param_2[1];
          iVar5 = iVar4 + (uint)param_2[2];
          iVar6 = iVar5 + (uint)param_2[3];
          iVar7 = iVar6 + (uint)param_2[4];
          iVar8 = iVar7 + (uint)param_2[5];
          iVar9 = iVar8 + (uint)param_2[6];
          iVar10 = iVar9 + (uint)param_2[7];
          iVar11 = iVar10 + (uint)param_2[8];
          iVar12 = iVar11 + (uint)param_2[9];
          iVar13 = iVar12 + (uint)param_2[10];
          iVar14 = iVar13 + (uint)param_2[0xb];
          iVar15 = iVar14 + (uint)param_2[0xc];
          iVar16 = iVar15 + (uint)param_2[0xd];
          iVar17 = iVar16 + (uint)param_2[0xe];
          uVar2 = iVar17 + (uint)param_2[0xf];
          param_1 = param_1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
                    iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar2;
          param_2 = param_2 + 0x10;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        uVar2 = uVar2 + *param_2;
        param_2 = param_2 + 1;
        param_1 = param_1 + uVar2;
      }
      uVar2 = uVar2 % 0xfff1;
      param_1 = param_1 % 0xfff1;
    }
    return param_1 << 0x10 | uVar2;
  }
  return 1;
}




/* Function: FUN_004d2090 */

void FUN_004d2090(undefined4 param_1,size_t param_2,size_t param_3)

{
  calloc(param_2,param_3);
  return;
}




/* Function: FUN_004d20c0 */

void FUN_004d20c0(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(param_5 + 0x20))(*(undefined4 *)(param_5 + 0x28),1,0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 4) = param_1;
    *(undefined1 *)((int)puVar1 + 0x11) = param_2;
    *puVar1 = 0;
    puVar1[5] = param_3;
    puVar1[6] = param_4;
  }
  return;
}




/* Function: FUN_004d2820 */

void FUN_004d2820(undefined4 param_1,int param_2)

{
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  return;
}




/* Function: FUN_004d2840 */

undefined4 __thiscall
FUN_004d2840(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint *param_6,
            int param_7,uint *param_8,uint *param_9)

{
  uint *puVar1;
  undefined4 uVar2;
  uint *in_EAX;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint local_fc;
  uint local_f8;
  int local_f4;
  uint *local_ec;
  uint *local_e8;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  uint local_d4;
  int local_d0;
  int local_cc;
  uint local_bc [47];
  
  uVar15 = 0;
  local_bc[0] = 0;
  local_bc[1] = 0;
  local_bc[2] = 0;
  local_bc[3] = 0;
  local_bc[4] = 0;
  local_bc[5] = 0;
  local_bc[6] = 0;
  local_bc[7] = 0;
  local_bc[8] = 0;
  local_bc[9] = 0;
  local_bc[10] = 0;
  local_bc[0xb] = 0;
  local_bc[0xc] = 0;
  local_bc[0xd] = 0;
  local_bc[0xe] = 0;
  local_bc[0xf] = 0;
  piVar3 = param_1;
  uVar12 = param_2;
  do {
    local_bc[*piVar3] = local_bc[*piVar3] + 1;
    piVar3 = piVar3 + 1;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (local_bc[0] == param_2) {
    *param_6 = 0;
    *in_EAX = 0;
  }
  else {
    local_f8 = 1;
    do {
      if (local_bc[local_f8] != 0) break;
      if (local_bc[local_f8 + 1] != 0) {
        local_f8 = local_f8 + 1;
        break;
      }
      if (local_bc[local_f8 + 2] != 0) {
        local_f8 = local_f8 + 2;
        break;
      }
      if (local_bc[local_f8 + 3] != 0) {
        local_f8 = local_f8 + 3;
        break;
      }
      if (local_bc[local_f8 + 4] != 0) {
        local_f8 = local_f8 + 4;
        break;
      }
      local_f8 = local_f8 + 5;
    } while (local_f8 < 0x10);
    local_fc = *in_EAX;
    if (*in_EAX < local_f8) {
      local_fc = local_f8;
    }
    uVar12 = 0xf;
    do {
      if (local_bc[uVar12] != 0) break;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (uVar12 < local_fc) {
      local_fc = uVar12;
    }
    iVar13 = 1 << ((byte)local_f8 & 0x1f);
    *in_EAX = local_fc;
    for (uVar7 = local_f8; uVar7 < uVar12; uVar7 = uVar7 + 1) {
      if ((int)(iVar13 - local_bc[uVar7]) < 0) {
        return 0xfffffffd;
      }
      iVar13 = (iVar13 - local_bc[uVar7]) * 2;
    }
    uVar7 = local_bc[uVar12];
    iVar13 = iVar13 - uVar7;
    if (iVar13 < 0) {
      return 0xfffffffd;
    }
    local_bc[uVar12] = uVar7 + iVar13;
    iVar8 = 0;
    iVar17 = uVar12 - 1;
    local_bc[0x11] = 0;
    if (iVar17 != 0) {
      iVar16 = 0;
      do {
        iVar8 = iVar8 + *(int *)((int)local_bc + iVar16 + 4);
        iVar17 = iVar17 + -1;
        *(int *)((int)local_bc + iVar16 + 0x48) = iVar8;
        iVar16 = iVar16 + 4;
      } while (iVar17 != 0);
    }
    uVar7 = 0;
    do {
      iVar8 = *param_1;
      param_1 = param_1 + 1;
      if (iVar8 != 0) {
        uVar18 = local_bc[iVar8 + 0x10];
        param_9[uVar18] = uVar7;
        local_bc[iVar8 + 0x10] = uVar18 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_2);
    uVar7 = local_bc[uVar12 + 0x10];
    local_ec = param_9;
    uVar18 = 0;
    iVar8 = -local_fc;
    local_e0 = 0;
    local_bc[0x10] = 0;
    local_f4 = -1;
    local_bc[0x20] = 0;
    local_dc = 0;
    if ((int)local_f8 <= (int)uVar12) {
      local_cc = local_f8 - 1;
      local_e8 = local_bc + local_f8;
      do {
        uVar6 = *local_e8;
        uVar2 = local_d8;
        while (local_d8 = uVar2, uVar6 != 0) {
          local_d8._2_2_ = (undefined2)((uint)uVar2 >> 0x10);
          uVar9 = uVar6 - 1;
          local_d0 = iVar8 + local_fc;
          if (local_d0 < (int)local_f8) {
            iVar17 = iVar8 - local_fc;
            do {
              iVar16 = local_f4 + 1;
              iVar8 = iVar8 + local_fc;
              iVar17 = iVar17 + local_fc;
              local_d0 = local_d0 + local_fc;
              uVar15 = uVar12 - iVar8;
              if (local_fc < uVar12 - iVar8) {
                uVar15 = local_fc;
              }
              uVar10 = local_f8 - iVar8;
              uVar18 = 1 << ((byte)uVar10 & 0x1f);
              if ((uVar6 < uVar18) &&
                 (iVar4 = uVar18 + (-1 - uVar9), puVar1 = local_e8, uVar10 < uVar15)) {
                while (uVar10 = uVar10 + 1, uVar10 < uVar15) {
                  uVar18 = puVar1[1];
                  uVar5 = iVar4 * 2;
                  if (uVar5 < uVar18 || uVar5 - uVar18 == 0) break;
                  iVar4 = uVar5 - uVar18;
                  puVar1 = puVar1 + 1;
                }
              }
              uVar18 = 1 << ((byte)uVar10 & 0x1f);
              uVar15 = *param_8 + uVar18;
              if (0x5a0 < uVar15) {
                return 0xfffffffd;
              }
              local_dc = param_7 + *param_8 * 8;
              local_bc[local_f4 + 0x21] = local_dc;
              *param_8 = uVar15;
              if (iVar16 == 0) {
                *param_6 = local_dc;
              }
              else {
                local_bc[local_f4 + 0x11] = local_e0;
                uVar5 = local_e0 >> ((byte)iVar17 & 0x1f);
                uVar15 = local_bc[local_f4 + 0x20];
                local_d8._0_2_ = CONCAT11((undefined1)local_fc,(byte)uVar10);
                local_d4 = ((int)(local_dc - uVar15) >> 3) - uVar5;
                *(undefined4 *)(uVar15 + uVar5 * 8) = local_d8;
                *(uint *)(uVar15 + 4 + uVar5 * 8) = local_d4;
              }
              uVar15 = local_e0;
              local_f4 = iVar16;
            } while (local_d0 < (int)local_f8);
          }
          bVar14 = (byte)iVar8;
          if (local_ec < param_9 + uVar7) {
            local_d4 = *local_ec;
            if (local_d4 < param_3) {
              local_d8._0_1_ = (local_d4 < 0x100) - 1U & 0x60;
            }
            else {
              iVar17 = (local_d4 - param_3) * 4;
              local_d8._0_1_ = *(char *)(iVar17 + param_5) + 0x50;
              local_d4 = *(uint *)(iVar17 + param_4);
            }
            local_ec = local_ec + 1;
          }
          else {
            local_d8._0_1_ = 0xc0;
          }
          local_d8 = CONCAT31(CONCAT21(local_d8._2_2_,(char)local_f8 - bVar14),(byte)local_d8);
          iVar17 = 1 << ((char)local_f8 - bVar14 & 0x1f);
          uVar6 = uVar15 >> (bVar14 & 0x1f);
          if (uVar6 < uVar18) {
            puVar11 = (undefined4 *)(local_dc + uVar6 * 8);
            do {
              *puVar11 = local_d8;
              puVar11[1] = local_d4;
              uVar6 = uVar6 + iVar17;
              puVar11 = puVar11 + iVar17 * 2;
              uVar15 = local_e0;
            } while (uVar6 < uVar18);
          }
          uVar10 = 1 << ((byte)local_cc & 0x1f);
          uVar6 = uVar15 & uVar10;
          while (uVar6 != 0) {
            uVar15 = uVar15 ^ uVar10;
            uVar10 = uVar10 >> 1;
            uVar6 = uVar15 & uVar10;
          }
          uVar15 = uVar15 ^ uVar10;
          uVar6 = uVar9;
          local_e0 = uVar15;
          uVar2 = local_d8;
          if (((1 << (bVar14 & 0x1f)) - 1U & uVar15) != local_bc[local_f4 + 0x10]) {
            do {
              iVar8 = iVar8 - local_fc;
              iVar17 = local_f4 + 0xf;
              local_f4 = local_f4 + -1;
            } while (((1 << ((byte)iVar8 & 0x1f)) - 1U & uVar15) != local_bc[iVar17]);
          }
        }
        local_e8 = local_e8 + 1;
        local_f8 = local_f8 + 1;
        local_cc = local_cc + 1;
      } while ((int)local_f8 <= (int)uVar12);
    }
    if ((iVar13 != 0) && (uVar12 != 1)) {
      return 0xfffffffb;
    }
  }
  return 0;
}




/* Function: FUN_004d2d30 */

int FUN_004d2d30(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(param_5 + 0x20))(*(undefined4 *)(param_5 + 0x28),0x13,4);
  if (iVar1 == 0) {
    return -4;
  }
  iVar2 = FUN_004d2840(0x13,0x13,0,0,param_3,param_4,&local_4,iVar1);
  if (iVar2 == -3) {
    *(char **)(param_5 + 0x18) = "oversubscribed dynamic bit lengths tree";
    (**(code **)(param_5 + 0x24))(*(undefined4 *)(param_5 + 0x28),iVar1);
    return -3;
  }
  if ((iVar2 == -5) || (*param_2 == 0)) {
    *(char **)(param_5 + 0x18) = "incomplete dynamic bit lengths tree";
    iVar2 = -3;
  }
  (**(code **)(param_5 + 0x24))(*(undefined4 *)(param_5 + 0x28),iVar1);
  return iVar2;
}




/* Function: FUN_004d2de0 */

int FUN_004d2de0(uint param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(param_9 + 0x20))(*(undefined4 *)(param_9 + 0x28),0x120,4);
  if (iVar1 == 0) {
    return -4;
  }
  iVar2 = FUN_004d2840(param_1,0x101,&DAT_0058f5b8,&DAT_0058f638,param_6,param_8,&local_4,iVar1);
  if (iVar2 == 0) {
    if (*param_4 != 0) {
      iVar2 = FUN_004d2840(param_2,0,&DAT_0058f6b8,&DAT_0058f730,param_7,param_8,&local_4,iVar1);
      if (iVar2 == 0) {
        if ((*param_5 != 0) || (param_1 < 0x102)) {
          (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),iVar1);
          return 0;
        }
      }
      else {
        if (iVar2 == -3) {
          *(char **)(param_9 + 0x18) = "oversubscribed distance tree";
          (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),iVar1);
          return -3;
        }
        if (iVar2 == -5) {
          *(char **)(param_9 + 0x18) = "incomplete distance tree";
          (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),iVar1);
          return -3;
        }
        if (iVar2 == -4) goto LAB_004d2f0d;
      }
      *(char **)(param_9 + 0x18) = "empty distance tree with lengths";
      iVar2 = -3;
LAB_004d2f0d:
      (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),iVar1);
      return iVar2;
    }
  }
  else {
    if (iVar2 == -3) {
      *(char **)(param_9 + 0x18) = "oversubscribed literal/length tree";
      (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),iVar1);
      return -3;
    }
    if (iVar2 == -4) goto LAB_004d2f50;
  }
  *(char **)(param_9 + 0x18) = "incomplete literal/length tree";
  iVar2 = -3;
LAB_004d2f50:
  (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),iVar1);
  return iVar2;
}




/* Function: FUN_004d2f70 */

undefined4
FUN_004d2f70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_1 = DAT_005b1300;
  *param_2 = DAT_005b1304;
  *param_3 = &DAT_005b1308;
  *param_4 = &DAT_005b2308;
  return 0;
}




/* Function: FUN_004d2fa0 */

int FUN_004d2fa0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x34);
  local_4 = *(undefined4 **)(param_2 + 0xc);
  puVar6 = *(undefined4 **)(param_1 + 0x30);
  if (puVar4 < puVar6) {
    puVar4 = *(undefined4 **)(param_1 + 0x2c);
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar5 = (int)puVar4 - (int)puVar6;
  if (uVar3 < (uint)((int)puVar4 - (int)puVar6)) {
    uVar5 = uVar3;
  }
  if ((uVar5 != 0) && (param_3 == -5)) {
    param_3 = 0;
  }
  *(uint *)(param_2 + 0x10) = uVar3 - uVar5;
  *(uint *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + uVar5;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),puVar6,uVar5);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x30) = uVar1;
  }
  puVar4 = puVar6;
  puVar7 = local_4;
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  local_4 = (undefined4 *)((int)local_4 + uVar5);
  puVar2 = (undefined1 *)((int)puVar6 + uVar5);
  if (puVar2 == *(undefined1 **)(param_1 + 0x2c)) {
    puVar4 = *(undefined4 **)(param_1 + 0x28);
    if (*(undefined1 **)(param_1 + 0x34) == *(undefined1 **)(param_1 + 0x2c)) {
      *(undefined4 **)(param_1 + 0x34) = puVar4;
    }
    uVar3 = *(uint *)(param_2 + 0x10);
    uVar5 = *(int *)(param_1 + 0x34) - (int)puVar4;
    if (uVar3 < uVar5) {
      uVar5 = uVar3;
    }
    if ((uVar5 != 0) && (param_3 == -5)) {
      param_3 = 0;
    }
    *(uint *)(param_2 + 0x10) = uVar3 - uVar5;
    *(uint *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + uVar5;
    if (*(code **)(param_1 + 0x38) != (code *)0x0) {
      uVar1 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),puVar4,uVar5);
      *(undefined4 *)(param_1 + 0x3c) = uVar1;
      *(undefined4 *)(param_2 + 0x30) = uVar1;
    }
    puVar6 = puVar4;
    puVar7 = local_4;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    local_4 = (undefined4 *)((int)local_4 + uVar5);
    puVar2 = (undefined1 *)((int)puVar4 + uVar5);
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  *(undefined4 **)(param_2 + 0xc) = local_4;
  *(undefined1 **)(param_1 + 0x30) = puVar2;
  return param_3;
}




/* Function: FUN_004d3470 */

undefined4 FUN_004d3470(void)

{
  return 1;
}




/* Function: FUN_004d34fc */

/* WARNING: Removing unreachable block (ram,0x004d3534) */
/* WARNING: Removing unreachable block (ram,0x004d3521) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall FUN_004d34fc(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  undefined4 in_EAX;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar7;
  undefined1 auStack_6c [48];
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  uVar7 = (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xffffffe4,0x50) * 0x800 |
          (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)auStack_6c < 0) * 0x80
          | (uint)(&stack0x00000000 == (undefined1 *)0x6c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
          (uint)((POPCOUNT((uint)auStack_6c & 0xff) & 1U) == 0) * 4 |
          (uint)(&stack0xffffffe4 < (undefined1 *)0x50) | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar4 = uVar7 ^ 0x200000;
  if (((uint)((uVar4 & 0x4000) != 0) * 0x4000 | (uint)((uVar4 & 0x800) != 0) * 0x800 |
       (uint)((uVar4 & 0x200) != 0) * 0x200 | (uint)((uVar4 & 0x100) != 0) * 0x100 |
       (uint)((uVar4 & 0x80) != 0) * 0x80 | (uint)((uVar4 & 0x40) != 0) * 0x40 |
       (uint)((uVar4 & 0x10) != 0) * 0x10 | (uint)((uVar4 & 4) != 0) * 4 | (uint)((uVar4 & 1) != 0)
       | (uint)((uVar4 & 0x200000) != 0) * 0x200000 | (uint)((uVar4 & 0x40000) != 0) * 0x40000) ==
      uVar7) {
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
  }
  else {
    piVar1 = (int *)cpuid_basic_info(0);
    local_20 = *piVar1;
    local_24 = piVar1[1];
    local_2c = piVar1[2];
    local_28 = piVar1[3];
    puVar2 = (uint *)cpuid_Version_info(1);
    local_30 = *puVar2;
    local_34 = puVar2[1];
    local_3c = puVar2[2];
    local_38 = puVar2[3];
  }
  uVar6 = 1;
  if (((local_24 == 0x756e6547) && (local_2c == 0x49656e69)) && (local_28 == 0x6c65746e)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((local_20 != 0) && (bVar3)) {
    uVar4 = local_30 >> 8 & 0xf;
    if (uVar4 == 5) {
      uVar6 = 2;
      if ((local_3c & 0x800000) != 0) {
        uVar6 = 8;
      }
    }
    else if (uVar4 == 6) {
      uVar6 = 4;
      if ((local_3c & 0x800000) != 0) {
        uVar6 = 0x10;
      }
      if ((local_3c & 0x1000000) != 0) {
        uVar6 = 0x20;
        if ((local_3c & 0x2000000) != 0) {
          iVar5 = FUN_004d3470();
          if (iVar5 == 0) {
            uVar6 = 0x40;
          }
          else {
            uVar6 = 0x80;
          }
        }
        if (((local_3c & 0x4000000) != 0) && (iVar5 = FUN_004d3470(), iVar5 != 0)) {
          uVar6 = 0x200;
        }
      }
    }
    else if ((uVar4 == 0xf) && ((local_3c & 0x4000000) != 0)) {
      iVar5 = FUN_004d3470();
      if (iVar5 == 0) {
        uVar6 = 0x100;
      }
      else {
        uVar6 = 0x200;
      }
    }
  }
  _DAT_005b71d0 = uVar6;
  return CONCAT44(param_2,in_EAX);
}




/* Function: FUN_004d3660 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

BSTR FUN_004d3660(LPCSTR param_1)

{
  int iVar1;
  OLECHAR *lpWideCharStr;
  int iVar2;
  DWORD DVar3;
  BSTR pOVar4;
  
  if (param_1 == (LPCSTR)0x0) {
    return (BSTR)0x0;
  }
  iVar1 = lstrlenA(param_1);
  iVar1 = iVar1 + 1;
  if (iVar1 < 0x1000) {
    lpWideCharStr = (OLECHAR *)&stack0xfffffff0;
  }
  else {
    lpWideCharStr = malloc(iVar1 * 2);
  }
  if (lpWideCharStr == (OLECHAR *)0x0) {
    FUN_004d3810(0x8007000e);
  }
  *lpWideCharStr = L'\0';
  iVar2 = MultiByteToWideChar(0,0,param_1,-1,lpWideCharStr,iVar1);
  if (iVar2 == 0) {
    DVar3 = GetLastError();
    if ((int)DVar3 < 1) {
      DVar3 = GetLastError();
    }
    else {
      DVar3 = GetLastError();
      DVar3 = DVar3 & 0xffff | 0x80070000;
    }
    FUN_004d3810(DVar3);
  }
  pOVar4 = SysAllocString(lpWideCharStr);
  if (0xfff < iVar1) {
    free(lpWideCharStr);
  }
  return pOVar4;
}




/* Function: FUN_004d3720 */

undefined4 FUN_004d3720(wchar_t *param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057dd90;
  local_10 = ExceptionList;
  if (param_1 == (wchar_t *)0x0) {
    return 0;
  }
  ExceptionList = &local_10;
  sVar1 = wcslen(param_1);
  local_8 = 0;
  FUN_00493c27(sVar1 * 2 + 2);
  uVar2 = FUN_004d3794();
  return uVar2;
}




/* Function: FUN_004d3794 */

void FUN_004d3794(void)

{
  int iVar1;
  LPCWSTR unaff_EBX;
  int unaff_EBP;
  LPSTR unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_ESI == (LPSTR)0x0) {
    FUN_004d3810(0x8007000e);
  }
  *unaff_ESI = '\0';
  iVar1 = WideCharToMultiByte(0,0,unaff_EBX,-1,unaff_ESI,unaff_EDI,(LPCSTR)0x0,(LPBOOL)0x0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(unaff_ESI);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}




/* Function: FUN_004d3810 */

void FUN_004d3810(undefined4 param_1)

{
  (*(code *)PTR_FUN_005b2460)(param_1,0);
  return;
}




/* Function: FUN_004d3820 */

void FUN_004d3820(undefined4 param_1,undefined4 param_2)

{
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = &PTR_FUN_0058f7ac;
  local_c = param_1;
  local_8 = param_2;
  local_4 = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_10,(ThrowInfo *)&DAT_0059a4c4);
}




/* Function: FUN_004d38d0 */

undefined4 * __thiscall FUN_004d38d0(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_FUN_0058f7ac;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((HLOCAL)param_1[3] != (HLOCAL)0x0) {
    LocalFree((HLOCAL)param_1[3]);
  }
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004d3960 */

undefined4 * __fastcall FUN_004d3960(undefined4 *param_1)

{
  FUN_005057c0();
  *param_1 = &PTR_LAB_0058f820;
  return param_1;
}




/* Function: FUN_004d3990 */

void __fastcall FUN_004d3990(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0058f8b8;
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_1[0x2d]);
}




/* Function: FUN_004d39c0 */

undefined1 __fastcall FUN_004d39c0(int param_1)

{
  return *(undefined1 *)(param_1 + 0xb0);
}




/* Function: FUN_004d39d0 */

bool FUN_004d39d0(undefined4 param_1)

{
  int iVar1;
  
  FUN_0050f650(param_1);
  iVar1 = FUN_0041c940();
  return iVar1 != 0;
}




/* Function: FUN_004d3a20 */

void __fastcall FUN_004d3a20(int param_1)

{
  *(undefined1 *)(param_1 + 0x2a5) = 0;
  *(undefined1 *)(param_1 + 0x2a6) = 1;
  FUN_0053e690();
  return;
}




/* Function: FUN_004d3a60 */

void * __thiscall FUN_004d3a60(void *param_1,byte param_2)

{
  thunk_FUN_005059c0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004d3a80 */

void * __thiscall FUN_004d3a80(void *param_1,byte param_2)

{
  FUN_004d3990();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004d4110 */

void * __thiscall FUN_004d4110(void *param_1,byte param_2)

{
  FUN_00526850();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004d4130 */

undefined4 * __fastcall FUN_004d4130(undefined4 *param_1)

{
  FUN_004d3e50();
  param_1[0xad] = 0xffffffec;
  param_1[0xae] = 0xffffffec;
  param_1[0xde] = 0x42c80000;
  param_1[0xe0] = 0x42c80000;
  *param_1 = &PTR_LAB_0058fd28;
  param_1[0xdd] = 0x40000000;
  param_1[0xe3] = 0x3f000000;
  param_1[0xe5] = 10;
  *(undefined1 *)((int)param_1 + 0x2a5) = 1;
  return param_1;
}




/* Function: FUN_004d4190 */

void * __thiscall FUN_004d4190(void *param_1,byte param_2)

{
  thunk_FUN_00526850();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004d41b0 */

undefined4 * __fastcall FUN_004d41b0(undefined4 *param_1)

{
  FUN_004d3e50();
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xde] = 0x42c80000;
  param_1[0xe0] = 0x42c80000;
  *param_1 = &PTR_LAB_0058fa58;
  param_1[0xe5] = 0x14;
  *(undefined1 *)((int)param_1 + 0x2a5) = 1;
  param_1[0xe6] = 100;
  return param_1;
}




/* Function: FUN_004d4200 */

undefined4 * __fastcall FUN_004d4200(undefined4 *param_1)

{
  FUN_004d3e50();
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xe6] = 0;
  *param_1 = &PTR_LAB_0058fa58;
  *(undefined1 *)((int)param_1 + 0x2a5) = 1;
  param_1[0xde] = 0x42c80000;
  param_1[0xe0] = 0x42c80000;
  param_1[0xf5] = 0x3f8f5c29;
  return param_1;
}




/* Function: FUN_004d4260 */

undefined4 * __fastcall FUN_004d4260(undefined4 *param_1)

{
  FUN_004d3e50();
  param_1[0xad] = 0xffffffec;
  param_1[0xae] = 0xffffffec;
  param_1[0xde] = 0x447a0000;
  param_1[0xe0] = 0x447a0000;
  *param_1 = &PTR_LAB_0058fb48;
  param_1[0xe5] = 0x14;
  *(undefined1 *)((int)param_1 + 0x2a5) = 1;
  param_1[0x10e] = 0;
  param_1[0xe6] = 100;
  param_1[0xbc] = 0x42700000;
  return param_1;
}




/* Function: FUN_004d42e0 */

undefined4 * __fastcall FUN_004d42e0(undefined4 *param_1)

{
  FUN_004d3e50();
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined1 *)(param_1 + 0xee) = 0;
  *param_1 = &PTR_LAB_0058fc38;
  param_1[0xde] = 0x44fa0000;
  param_1[0xe0] = 0x44fa0000;
  param_1[0xe5] = 0x14;
  *(undefined1 *)((int)param_1 + 0x2a5) = 1;
  param_1[0xe6] = 100;
  param_1[0xbc] = 0x42700000;
  return param_1;
}




/* Function: FUN_004d4340 */

undefined4 * __fastcall FUN_004d4340(undefined4 *param_1)

{
  FUN_004d3e50();
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xde] = 0x43fa0000;
  param_1[0xe0] = 0x43fa0000;
  *param_1 = &PTR_LAB_0058fd28;
  param_1[0xe3] = 0x3e99999a;
  param_1[0xe2] = 0x3f000000;
  *(undefined1 *)((int)param_1 + 0x2a5) = 1;
  return param_1;
}




/* Function: FUN_004d4390 */

undefined4 * __fastcall FUN_004d4390(undefined4 *param_1)

{
  FUN_004d3e50();
  *param_1 = &PTR_LAB_0058fd28;
  *(undefined1 *)((int)param_1 + 0x2a5) = 1;
  return param_1;
}




/* Function: FUN_004d43b0 */

undefined4 FUN_004d43b0(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057df22;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x438,(nothrow_t *)&DAT_005b6164);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_004d41b0(pvVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_004d4410 */

undefined4 * FUN_004d4410(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057df22;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x438,(nothrow_t *)&DAT_005b6164);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004d3e50();
    puVar1[0xe5] = 0;
    puVar1[0xad] = 0;
    puVar1[0xae] = 0;
    puVar1[0xe6] = 0;
    *puVar1 = &PTR_LAB_0058fa58;
    *(undefined1 *)((int)puVar1 + 0x2a5) = 1;
    puVar1[0xf5] = 0x3f8f5c29;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}




/* Function: FUN_004d44b0 */

undefined4 FUN_004d44b0(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057df22;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x438,(nothrow_t *)&DAT_005b6164);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_004d4200(pvVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_004d4510 */

undefined4 * FUN_004d4510(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057df22;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x438,(nothrow_t *)&DAT_005b6164);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004d3e50();
    *puVar1 = &PTR_LAB_0058fd28;
    *(undefined1 *)((int)puVar1 + 0x2a5) = 1;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}




/* Function: FUN_004d4c00 */

undefined4 FUN_004d4c00(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057df22;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xb8,(nothrow_t *)&DAT_005b6164);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_004d4570(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_004d51a0 */

void __thiscall FUN_004d51a0(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_004e46b0(*(int *)(param_1 + 0xbc),*param_2,param_2[1],param_2[2]);
  }
  return;
}




/* Function: FUN_004d51d0 */

undefined4 * __thiscall FUN_004d51d0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  puVar1 = (undefined4 *)FUN_004e4730(*(int *)(param_1 + 0xbc));
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return param_2;
}




/* Function: FUN_004d5210 */

void __fastcall FUN_004d5210(int param_1)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_004e4658(*(int *)(param_1 + 0xbc));
  }
  return;
}




/* Function: FUN_004d5230 */

void __fastcall FUN_004d5230(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}




/* Function: FUN_004d5250 */

undefined4 * __fastcall FUN_004d5250(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057df5c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 3));
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 10));
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  param_1[0x11] = 0;
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 0x4a) = 0;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_004d52b0 */

undefined4 __thiscall FUN_004d52b0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x88))();
  FUN_005488cc(param_2,param_1 + 0x142,uVar1);
  return param_2;
}




/* Function: FUN_004d52e0 */

undefined4 __thiscall FUN_004d52e0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x88))();
  FUN_005488cc(param_2,param_1 + 0x145,uVar1);
  return param_2;
}




/* Function: FUN_004d5310 */

undefined4 __thiscall FUN_004d5310(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x88))();
  FUN_005488cc(param_2,param_1 + param_3 * 3 + 0x124,uVar1);
  return param_2;
}




/* Function: FUN_004d5340 */

void __thiscall FUN_004d5340(int param_1,char param_2,char param_3)

{
  if (param_3 != '\0') {
    *(char *)(param_1 + 0x539) = param_2;
    *(undefined4 *)(param_1 + 0x53c) = 0;
    *(undefined1 *)(param_1 + 0x538) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x540) = 0;
  *(uint *)(param_1 + 0x53c) = (uint)(param_2 != '\0') * 2 + -1;
  return;
}




/* Function: FUN_004d5390 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004d5390(int param_1)

{
  switch(param_1) {
  case 0:
    return (float10)_DAT_00583354;
  case 1:
    return (float10)_DAT_0058aa44;
  case 2:
    return (float10)_DAT_005888f4;
  case 3:
    return (float10)_DAT_00588884;
  default:
    return (float10)param_1;
  }
}




/* Function: FUN_004d53e0 */

void FUN_004d53e0(undefined4 param_1)

{
  int iVar1;
  
  FUN_0041ce80();
  FUN_0041cae0();
  iVar1 = FUN_0042dbb0();
  if (iVar1 != 0) {
    FUN_00412e58(iVar1,"display_scanner");
    FUN_00412d30(iVar1,param_1);
    FUN_00412798(iVar1,1,0);
  }
  return;
}




/* Function: FUN_004d5420 */

void FUN_004d5420(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  FUN_0041ce80();
  FUN_0041cae0();
  iVar2 = FUN_0042dbb0();
  if (iVar2 != 0) {
    FUN_00412e58(iVar2,"enter_security_code");
    FUN_00412d30(iVar2,param_1);
    FUN_00412798(iVar2,1,1);
    pcVar3 = (char *)FUN_00412c34(iVar2,0xffffffff);
    if (pcVar3 != (char *)0x0) {
      param_1 = param_1 - (int)pcVar3;
      do {
        cVar1 = *pcVar3;
        pcVar3[param_1] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    FUN_00412950(iVar2,0xfffffffe);
  }
  return;
}




/* Function: FUN_004d5490 */

void FUN_004d5490(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  FUN_0041ce80();
  FUN_0041cae0();
  iVar1 = FUN_0042dbb0();
  if (iVar1 != 0) {
    FUN_00412e58(iVar1,"indicators");
    FUN_00412cfc(iVar1,(double)param_1);
    FUN_00412cfc(iVar1,(double)param_2);
    FUN_00412cfc(iVar1,(double)param_3);
    FUN_00412cfc(iVar1,(double)param_4);
    FUN_00412cfc(iVar1,(double)param_5);
    FUN_00412cfc(iVar1,(double)param_6);
    FUN_00412798(iVar1,6,0);
  }
  return;
}




/* Function: FUN_004d5530 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d5530(undefined4 param_1,float param_2)

{
  int iVar1;
  
  FUN_0041ce80();
  FUN_0041cae0();
  iVar1 = FUN_0042dbb0();
  if (iVar1 != 0) {
    FUN_00412e58(iVar1,"progressbox");
    FUN_00412d30(iVar1,param_1);
    FUN_00412cfc(iVar1,(double)(param_2 * _DAT_00588808));
    FUN_00412798(iVar1,2,0);
  }
  return;
}




/* Function: FUN_004d5eb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d5eb0(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  if (_DAT_00582ad8 < (float)param_1[0x11d]) {
    switch(param_1[0xb4]) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 9:
    case 0x10:
    case 0x11:
      (**(code **)(*param_1 + 0xb8))(0x13);
      FUN_004d55d0(0xd);
      param_1[0x11d] = 0x40000000;
      return;
    default:
      FUN_00526300(param_2);
      return;
    }
  }
  FUN_0041cf50();
  if (param_1[0xb4] != 3) {
    FUN_00526300(param_2);
    return;
  }
  cVar1 = FUN_0040e910(0x855);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0xb8))(0);
    (**(code **)(*param_1 + 0xb8))(3);
    return;
  }
  (**(code **)(*param_1 + 0xb8))(0x13);
  FUN_004d55d0(0x11);
  return;
}




/* Function: FUN_004d5fa0 */

void __fastcall FUN_004d5fa0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057df5c;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x28));
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xc));
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004d6080 */

int __thiscall FUN_004d6080(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x5fc);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0x600)) {
      return 0;
    }
    if (*(int *)(*piVar1 + 0x2d8) == param_2) break;
    piVar1 = piVar1 + 1;
  }
  return *piVar1;
}




/* Function: FUN_004d6350 */

float10 FUN_004d6350(void)

{
  float fVar1;
  float *pfVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057df99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"felony");
  local_4 = 0;
  pfVar2 = (float *)FUN_00457170(local_28);
  fVar1 = *pfVar2;
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  ExceptionList = local_c;
  return (float10)fVar1;
}




/* Function: FUN_004db9c0 */

undefined4 * __fastcall FUN_004db9c0(undefined4 *param_1)

{
  FUN_004d3e50();
  *param_1 = &PTR_LAB_005904d0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  *(undefined1 *)((int)param_1 + 0x479) = 0;
  *(undefined1 *)((int)param_1 + 0x47a) = 0;
  *(undefined1 *)((int)param_1 + 0x49a) = 0;
  *(undefined1 *)(param_1 + 0x11e) = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  *(undefined1 *)((int)param_1 + 0x43d) = 0;
  *(undefined1 *)(param_1 + 0x10f) = 0;
  *(undefined1 *)((int)param_1 + 0x469) = 0;
  param_1[0x144] = 0;
  param_1[0x131] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  *(undefined1 *)((int)param_1 + 0x4ba) = 0;
  param_1[0x119] = 0;
  param_1[0x12f] = 0;
  param_1[0x11d] = 0;
  *(undefined1 *)(param_1 + 0x11a) = 0;
  *(undefined1 *)((int)param_1 + 0x43e) = 1;
  param_1[0x132] = 0x40a00000;
  param_1[0x141] = 0xffffffff;
  param_1[0xe2] = 0x3f333333;
  param_1[0xbc] = 0x42480000;
  param_1[0x133] = 0x437a0000;
  *(undefined1 *)((int)param_1 + 0x372) = 1;
  param_1[0x110] = 4;
  param_1[0xcc] = 0x3f20d97c;
  *(undefined4 *)((int)param_1 + 0x46a) = 0;
  *(undefined4 *)((int)param_1 + 0x46e) = 0;
  *(undefined2 *)((int)param_1 + 0x472) = 0;
  return param_1;
}




/* Function: FUN_004dbb10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004dbb10(float *param_1,float *param_2)

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
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_1[2];
  fVar4 = param_1[1];
  fVar5 = param_2[2];
  fVar6 = param_2[1];
  fVar7 = *param_1;
  fVar8 = param_2[3];
  fVar9 = *param_2;
  fVar10 = param_1[1];
  fVar11 = (*param_1 + param_1[2]) * (*param_2 + param_2[1]);
  fVar15 = (param_1[3] + param_1[1]) * (param_2[3] - param_2[2]);
  fVar12 = (param_1[3] - param_1[1]) * (param_2[3] + param_2[2]);
  fVar13 = fVar12 + fVar15 + fVar11;
  fVar14 = ((param_1[2] - *param_1) * (*param_2 - param_2[1]) + fVar13) * _DAT_00583340;
  *param_1 = ((param_1[3] + *param_1) * (param_2[3] + *param_2) + fVar14) - fVar13;
  param_1[1] = (fVar14 + (param_1[3] - fVar7) * (fVar5 + fVar6)) - fVar12;
  param_1[2] = (fVar14 + (fVar10 + param_1[2]) * (fVar8 - fVar9)) - fVar15;
  param_1[3] = (fVar14 + (fVar3 - fVar4) * (fVar1 - fVar2)) - fVar11;
  return;
}




/* Function: FUN_004dbbe0 */

undefined4 * FUN_004dbbe0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004dbb10(param_3);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return param_1;
}




/* Function: FUN_004dbc30 */

void FUN_004dbc30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0041ce80();
  if (iVar1 == 0) {
    return;
  }
  FUN_0054fe64(param_1,param_2,0,0x3ff00000);
  uVar2 = FUN_004cf110();
  FUN_0044ab40(uVar2);
  return;
}




/* Function: FUN_004dbcc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004dbcc0(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *puVar11;
  undefined1 local_44 [4];
  float local_40;
  float local_3c;
  float local_38;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057e109;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    puVar11 = &DAT_0058ff48;
    FUN_0041ce80(&DAT_0058ff48);
    FUN_0041cac0();
    iVar1 = FUN_0045b600(puVar11);
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x35) != '\0')) {
      fVar4 = (float10)FUN_0054fe64(param_1,10,0,0);
      uVar3 = (uint)((float10)_DAT_00582ae8 < fVar4);
      pcVar2 = (char *)FUN_0054fdc0(param_1,1,0,local_44);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34,pcVar2);
      local_c = 0;
      fVar4 = (float10)FUN_0054fe64(param_1,4,0,0);
      fVar5 = (float10)FUN_0054fe64(param_1,3,0,0);
      fVar6 = (float10)FUN_0054fe64(param_1,2,0,0);
      local_40 = (float)fVar6;
      local_3c = (float)fVar5;
      local_38 = (float)fVar4;
      fVar4 = (float10)FUN_0054fe64(param_1,9,0,0,uVar3);
      fVar10 = (float)fVar4;
      fVar4 = (float10)FUN_0054fe64(param_1,8,0,0,fVar10);
      fVar9 = (float)fVar4;
      fVar4 = (float10)FUN_0054fe64(param_1,7,0,0,fVar9);
      fVar8 = (float)fVar4;
      fVar4 = (float10)FUN_0054fe64(param_1,6,0,0x40200000,fVar8);
      fVar7 = (float)fVar4;
      fVar4 = (float10)FUN_0054fe64(param_1,5,0,0x40200000,fVar7);
      FUN_004dd9c0(local_34,&local_40,(float)fVar4,fVar7,fVar8,fVar9,fVar10,uVar3);
      local_c = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
    }
  }
  ExceptionList = local_14;
  return 0;
}




/* Function: FUN_004dc0b0 */

undefined4 __thiscall FUN_004dc0b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e172;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0041ce80(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0041ce80();
    puVar5 = &DAT_00590074;
    FUN_0041cac0(&DAT_00590074);
    iVar1 = FUN_0045b600(puVar5);
    if (iVar1 == 0) {
      pvVar3 = operator_new(0x15c,(nothrow_t *)&DAT_005b6164);
      if (pvVar3 == (void *)0x0) {
        iVar1 = 0;
      }
      else {
        local_4 = iVar1;
        iVar1 = FUN_004df180(uVar2);
      }
      local_4 = 0xffffffff;
      iVar6 = iVar1;
      FUN_0041cac0(iVar1);
      FUN_0045d8a0(iVar6);
      if (iVar1 == 0) {
        ExceptionList = local_c;
        return 0;
      }
    }
    FUN_0054fe94(param_2,1);
    uVar4 = FUN_004cf110();
    FUN_004debd0(uVar2,uVar4);
  }
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_004dc2c0 */

undefined4 FUN_004dc2c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  undefined1 local_6c [4];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057e109;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_0041ce80();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0041ce80();
    FUN_0054fe64(param_1,1,0,0);
    uVar3 = FUN_004cf110();
    iVar1 = FUN_0044ab40(uVar3);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x80) != 0xbd)) {
      uVar2 = 0;
    }
    else {
      pcVar4 = (char *)FUN_0054fdc0(param_1,2,0,local_6c);
      fVar5 = (float10)FUN_0054fe64(param_1,3,0,0);
      fVar6 = (float10)FUN_0054fe64(param_1,4,0,0);
      fVar7 = (float10)FUN_0054fe64(param_1,5,0,0);
      fVar8 = (float10)FUN_0054fe64(param_1,6,0,0);
      fVar9 = (float10)FUN_0054fe64(param_1,7,0,0);
      fVar10 = (float10)FUN_0054fe64(param_1,8,0,0);
      fVar11 = (float10)FUN_0054fe64(param_1,9,0,0xbff00000);
      fVar12 = (float10)FUN_0054fe64(param_1,10,0,0);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34,pcVar4);
      local_c = 0;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_50,".\\Textures\\");
      FUN_00429a60(local_50,local_34,1);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
      local_c = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34,pcVar4);
      uVar3 = FUN_004222d0(local_34);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
      local_68 = (float)fVar10;
      local_64 = (float)fVar11;
      local_60 = (float)fVar12;
      local_5c = (float)fVar7;
      local_58 = (float)fVar8;
      local_54 = (float)fVar9;
      FUN_004e1fb0(uVar2,uVar3,(float)fVar5,(float)fVar6,&local_5c,&local_68);
      uVar2 = 0x3ff00000;
    }
  }
  FUN_00412cfc(param_1,0,uVar2);
  ExceptionList = local_14;
  return 1;
}




/* Function: FUN_004dc4d0 */

undefined4 FUN_004dc4d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  float local_5c;
  float local_58;
  float local_54;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057e109;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_0041ce80();
  if (iVar1 == 0) {
    dVar9 = 0.0;
  }
  else {
    uVar2 = FUN_0041ce80();
    FUN_0054fe64(param_1,1,0);
    uVar3 = FUN_004cf110();
    iVar1 = FUN_0044ab40(uVar3);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x80) != 0xbd)) {
      dVar9 = 0.0;
    }
    else {
      pcVar4 = (char *)FUN_0054fdc0(param_1,2,0);
      fVar5 = (float10)FUN_0054fe64(param_1,3,0,0);
      fVar6 = (float10)FUN_0054fe64(param_1,4,0,0);
      fVar7 = (float10)FUN_0054fe64(param_1,5,0,0);
      fVar8 = (float10)FUN_0054fe64(param_1,6,0);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34,pcVar4);
      local_c = 0;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_50,".\\Textures\\");
      FUN_00429a60(local_50,local_34,1);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
      local_c = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34,pcVar4);
      uVar3 = FUN_004222d0();
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
      local_5c = (float)fVar6;
      local_58 = (float)fVar7;
      local_54 = (float)fVar8;
      iVar1 = FUN_004e3ac0(uVar2,uVar3,(float)fVar5,&local_5c);
      dVar9 = (double)iVar1;
    }
  }
  FUN_00412cfc(param_1,dVar9);
  ExceptionList = local_14;
  return 1;
}




/* Function: FUN_004dc680 */

undefined4 FUN_004dc680(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  float local_14;
  float local_10;
  float local_c;
  
  iVar1 = FUN_0041ce80();
  if (iVar1 == 0) {
    FUN_00412cfc(param_1,0,0);
    return 1;
  }
  uVar2 = FUN_0041ce80();
  FUN_0054fe64(param_1,1,0,0);
  uVar3 = FUN_004cf110();
  iVar1 = FUN_0044ab40(uVar3);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x80) == 0xbd)) {
    FUN_0054fe64(param_1,2,0,0);
    uVar3 = FUN_004cf110();
    fVar4 = (float10)FUN_0054fe64(param_1,3,0,0);
    fVar5 = (float10)FUN_0054fe64(param_1,4,0,0);
    local_10 = (float)fVar5;
    local_14 = (float)fVar4;
    fVar4 = (float10)FUN_0054fe64(param_1,5,0,0);
    local_c = (float)fVar4;
    FUN_004e3020(uVar2,uVar3,&local_14);
    return 0;
  }
  FUN_00412cfc(param_1,0,0);
  return 1;
}




/* Function: FUN_004dc770 */

void __thiscall FUN_004dc770(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004dbc30(param_2,param_3,param_1);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0x58))(&stack0xffffffff);
  return;
}




/* Function: FUN_004dc9c0 */

void FUN_004dc9c0(undefined4 param_1)

{
  FUN_0054ff5c(param_1,&PTR_s_goodbye_005905d0,0x11);
  return;
}




/* Function: FUN_004dc9e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004dc9e0(undefined4 param_1)

{
  float fVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 uVar7;
  float unaff_ESI;
  float10 fVar8;
  undefined4 uVar9;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [88];
  
  iVar3 = FUN_0041ce80();
  if (iVar3 == 0) {
    FUN_00412cfc(param_1,0,0);
    return 1;
  }
  uVar4 = FUN_0041ce80();
  piVar5 = (int *)FUN_004dc770(param_1,1);
  if (piVar5 == (int *)0x0) {
    FUN_00412cfc(param_1);
    return 1;
  }
  fVar8 = (float10)FUN_0054fe64(param_1,4,0,0);
  local_9c = (float)fVar8;
  fVar8 = (float10)FUN_0054fe64(param_1,3,0,0);
  local_98 = (float)fVar8;
  fVar8 = (float10)FUN_0054fe64(param_1,2,0,0);
  local_94 = (float)fVar8;
  local_90 = local_98;
  local_8c = local_9c;
  fVar8 = (float10)FUN_0054fe64(param_1,5,0,0x40240000);
  local_98 = (float)fVar8;
  pfVar6 = operator_new(0x2ac,(nothrow_t *)&DAT_005b6164);
  if (pfVar6 == (float *)0x0) {
    pfVar6 = (float *)0x0;
  }
  else {
    FUN_0053eae0();
    *pfVar6 = (float)&PTR_LAB_00590798;
  }
  pfVar6[0x9a] = 5.0;
  FUN_004ff6f0(1);
  FUN_004ffb80(0);
  uVar7 = FUN_004ffac0();
  FUN_004ffb10(uVar7);
  FUN_004ffa80(0);
  FUN_00501a80(0);
  local_9c = *pfVar6;
  uVar7 = (**(code **)(*piVar5 + 0x88))();
  (**(code **)((int)local_9c + 0x8c))(uVar7);
  uVar9 = 1;
  uVar7 = FUN_0041c940(1);
  FUN_00423250(pfVar6,uVar7,uVar9);
  fVar1 = *pfVar6;
  uVar7 = FUN_0041c940();
  (**(code **)((int)fVar1 + 0x1c))(uVar4,uVar7);
  *(undefined1 *)((int)pfVar6 + 0x2a7) = 1;
  pfVar6[0xaa] = unaff_ESI;
  FUN_0053ea90(&stack0xffffff60);
  fVar1 = *pfVar6;
  uVar4 = FUN_0041c930(uVar4);
  (**(code **)((int)fVar1 + 0x14))(uVar4);
  FUN_00547224(auStack_5c);
  FUN_005489a8();
  _eh_vector_destructor_iterator_(auStack_5c,0x10,4,FUN_00407150);
  (**(code **)((int)*pfVar6 + 0x88))();
  FUN_005489a8();
  FUN_004dbbe0(&local_9c,auStack_6c,auStack_7c);
  local_8c = local_9c;
  fStack_88 = local_98;
  fStack_84 = local_94;
  fStack_80 = local_90;
  FUN_004e479c(*(undefined4 *)(*(int *)pfVar6[0xa6] + 0xbc),&local_8c);
  iVar3 = FUN_0044ab40(pfVar6);
  dVar2 = (double)iVar3;
  if (iVar3 < 0) {
    dVar2 = dVar2 + _DAT_00589ec0;
  }
  FUN_00412cfc(param_1,dVar2);
  return 1;
}




/* Function: FUN_004dcc40 */

void FUN_004dcc40(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  FUN_0041ce80();
  FUN_0041cae0();
  iVar1 = FUN_0042dbb0();
  if (iVar1 != 0) {
    FUN_00412e58(iVar1,&DAT_00590850);
    FUN_00412cfc(iVar1,(double)param_1);
    FUN_00412cfc(iVar1,(double)param_2);
    FUN_00412cfc(iVar1,(double)param_3);
    FUN_00412cfc(iVar1,(double)param_4);
    FUN_00412cfc(iVar1,(double)param_5);
    FUN_00412798(iVar1,5,0);
  }
  return;
}




/* Function: FUN_004dccd0 */

void __thiscall FUN_004dccd0(int param_1,char param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 local_c [12];
  
  if (*(char *)(param_1 + 0xcd) != param_2) {
    *(undefined4 *)(param_1 + 200) = param_3;
    *(char *)(param_1 + 0xcd) = param_2;
    if (param_2 != '\0') {
      puVar1 = (undefined4 *)FUN_00547ab0(local_c);
      if (puVar1 != (undefined4 *)(param_1 + 0xbc)) {
        *(undefined4 *)(param_1 + 0xbc) = *puVar1;
        *(undefined4 *)(param_1 + 0xc0) = puVar1[1];
        *(undefined4 *)(param_1 + 0xc4) = puVar1[2];
      }
    }
  }
  return;
}




/* Function: FUN_004dcd30 */

void FUN_004dcd30(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e192;
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




/* Function: FUN_004dcf20 */

void FUN_004dcf20(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *param_3)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  
  if (param_1 != param_2) {
    pbVar1 = param_1 + 0x1c;
    do {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                (param_1,param_3);
      if (param_3 + 0x1c != pbVar1) {
        *(undefined4 *)pbVar1 = *(undefined4 *)(param_3 + 0x1c);
        *(undefined4 *)(pbVar1 + 4) = *(undefined4 *)(param_3 + 0x20);
        *(undefined4 *)(pbVar1 + 8) = *(undefined4 *)(param_3 + 0x24);
      }
      *(undefined4 *)(pbVar1 + 0xc) = *(undefined4 *)(param_3 + 0x28);
      *(undefined4 *)(pbVar1 + 0x10) = *(undefined4 *)(param_3 + 0x2c);
      *(undefined4 *)(pbVar1 + 0x14) = *(undefined4 *)(param_3 + 0x30);
      *(undefined4 *)(pbVar1 + 0x18) = *(undefined4 *)(param_3 + 0x34);
      *(undefined4 *)(pbVar1 + 0x1c) = *(undefined4 *)(param_3 + 0x38);
      pbVar1[0x20] = param_3[0x3c];
      param_1 = param_1 + 0x40;
      pbVar1 = pbVar1 + 0x40;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_004dcfa0 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_004dcfa0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  
  if (param_1 != param_2) {
    pbVar1 = param_3 + 0x1c;
    pbVar2 = param_1 + 0x1c;
    do {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                (param_3,param_1);
      if (pbVar2 != pbVar1) {
        *(undefined4 *)pbVar1 = *(undefined4 *)pbVar2;
        *(undefined4 *)(pbVar1 + 4) = *(undefined4 *)(pbVar2 + 4);
        *(undefined4 *)(pbVar1 + 8) = *(undefined4 *)(pbVar2 + 8);
      }
      *(undefined4 *)(pbVar1 + 0xc) = *(undefined4 *)(pbVar2 + 0xc);
      *(undefined4 *)(pbVar1 + 0x10) = *(undefined4 *)(pbVar2 + 0x10);
      *(undefined4 *)(pbVar1 + 0x14) = *(undefined4 *)(pbVar2 + 0x14);
      *(undefined4 *)(pbVar1 + 0x18) = *(undefined4 *)(pbVar2 + 0x18);
      *(undefined4 *)(pbVar1 + 0x1c) = *(undefined4 *)(pbVar2 + 0x1c);
      pbVar1[0x20] = pbVar2[0x20];
      param_1 = param_1 + 0x40;
      param_3 = param_3 + 0x40;
      pbVar1 = pbVar1 + 0x40;
      pbVar2 = pbVar2 + 0x40;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}




/* Function: FUN_004dd030 */

void FUN_004dd030(undefined4 *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *param_3,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  
  if (param_2 != param_3) {
    pbVar1 = param_3 + 0x1c;
    pbVar3 = param_4 + 0x1c;
    do {
      param_3 = param_3 + -0x40;
      param_4 = param_4 + -0x40;
      pbVar2 = pbVar1 + -0x40;
      pbVar4 = pbVar3 + -0x40;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                (param_4,param_3);
      if (pbVar2 != pbVar4) {
        *(undefined4 *)pbVar4 = *(undefined4 *)pbVar2;
        *(undefined4 *)(pbVar3 + -0x3c) = *(undefined4 *)(pbVar1 + -0x3c);
        *(undefined4 *)(pbVar3 + -0x38) = *(undefined4 *)(pbVar1 + -0x38);
      }
      *(undefined4 *)(pbVar3 + -0x34) = *(undefined4 *)(pbVar1 + -0x34);
      *(undefined4 *)(pbVar3 + -0x30) = *(undefined4 *)(pbVar1 + -0x30);
      *(undefined4 *)(pbVar3 + -0x2c) = *(undefined4 *)(pbVar1 + -0x2c);
      *(undefined4 *)(pbVar3 + -0x28) = *(undefined4 *)(pbVar1 + -0x28);
      *(undefined4 *)(pbVar3 + -0x24) = *(undefined4 *)(pbVar1 + -0x24);
      pbVar3[-0x20] = pbVar1[-0x20];
      pbVar1 = pbVar2;
      pbVar3 = pbVar4;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return;
  }
  *param_1 = param_4;
  return;
}




/* Function: FUN_004dd0c0 */

undefined4 FUN_004dd0c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004dd030(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_004dd100 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_004dd100(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057e1b1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    local_8 = 1;
    if (param_3 !=
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_3,param_1);
      *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_1 + 0x38);
      param_3[0x3c] = param_1[0x3c];
    }
    param_3 = param_3 + 0x40;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}




/* Function: FUN_004dd1d0 */

void FUN_004dd1d0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,int param_2,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057e1d1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 !=
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,param_3);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x20);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x28);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 0x30);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_3 + 0x34);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_3 + 0x38);
      param_1[0x3c] = param_3[0x3c];
    }
    param_1 = param_1 + 0x40;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}




/* Function: FUN_004dd2a0 */

void __thiscall
FUN_004dd2a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004dd100(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_004dd2d0 */

int __thiscall FUN_004dd2d0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_004dd1d0(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x40 + param_2;
}




/* Function: FUN_004dd300 */

void FUN_004dd300(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
  }
  return;
}




/* Function: FUN_004dd330 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUN_004dd330(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            uint param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  uint uVar1;
  int iVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined4 uVar4;
  int iVar5;
  uint unaff_retaddr;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_78;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_74;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_60 [28];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_24;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_20;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057e1e8;
  local_10 = ExceptionList;
  local_18 = DAT_005b12c0 ^ unaff_retaddr;
  local_14 = &stack0xffffff94;
  local_74 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             0x4dd36e;
  ExceptionList = &local_10;
  local_1c = param_1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_60,param_4);
  local_44 = *(undefined4 *)(param_4 + 0x1c);
  local_40 = *(undefined4 *)(param_4 + 0x20);
  local_3c = *(undefined4 *)(param_4 + 0x24);
  local_38 = *(undefined4 *)(param_4 + 0x28);
  local_34 = *(undefined4 *)(param_4 + 0x2c);
  local_30 = *(undefined4 *)(param_4 + 0x30);
  local_2c = *(undefined4 *)(param_4 + 0x34);
  local_28 = *(undefined4 *)(param_4 + 0x38);
  local_24 = param_4[0x3c];
  iVar2 = *(int *)(param_1 + 4);
  iVar5 = 0;
  local_8 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0xc) - iVar2 >> 6;
  }
  if (param_3 != 0) {
    if (iVar2 != 0) {
      iVar5 = *(int *)(param_1 + 8) - iVar2 >> 6;
    }
    if (0x3ffffffU - iVar5 < param_3) {
      FUN_004dcd30();
    }
    else {
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar2 >> 6;
      }
      if (uVar1 < iVar5 + param_3) {
        if (0x3ffffff - (uVar1 >> 1) < uVar1) {
          uVar1 = 0;
        }
        else {
          uVar1 = uVar1 + (uVar1 >> 1);
        }
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar2 >> 6;
        }
        if (uVar1 < iVar5 + param_3) {
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 8) - iVar2 >> 6;
          }
          uVar1 = iVar2 + param_3;
        }
        local_74 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x4dd44d;
        pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        local_78 = pbVar3;
        local_74 = param_1;
        local_20 = pbVar3;
        iVar2 = FUN_004dd100(*(undefined4 *)(param_1 + 4));
        local_78 = local_60;
        local_74 = param_1;
        FUN_004dd1d0(iVar2);
        local_78 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (iVar2 + param_3 * 0x40);
        local_74 = param_1;
        FUN_004dd100(param_2);
        iVar2 = *(int *)(param_1 + 4);
        local_8 = 0;
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar2 >> 6;
        }
        if (iVar2 != 0) {
          local_78 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )0x4dd4e7;
          local_74 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )iVar2;
          FUN_004dd300();
                    /* WARNING: Subroutine does not return */
          local_74 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&UNK_004dd4f0;
          operator_delete(*(void **)(param_1 + 4));
        }
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 0xc) = pbVar3 + uVar1 * 0x40;
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 8) = pbVar3 + (param_3 + iVar5) * 0x40;
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 4) = pbVar3;
      }
      else {
        local_74 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(param_1 + 8);
        if ((uint)((int)local_74 - (int)param_2 >> 6) < param_3) {
          local_20 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&local_78;
          local_78 = param_2;
          FUN_004dd2a0();
          local_78 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)(param_1 + 8);
          local_74 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(param_3 - ((int)local_78 - (int)param_2 >> 6));
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_004dd2d0();
          iVar2 = *(int *)(param_1 + 8) + param_3 * 0x40;
          *(int *)(param_1 + 8) = iVar2;
          local_74 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(iVar2 + param_3 * -0x40);
          local_8 = 0;
        }
        else {
          pbVar3 = local_74 + param_3 * -0x40;
          local_78 = pbVar3;
          local_20 = local_74;
          uVar4 = FUN_004dd2a0();
          *(undefined4 *)(param_1 + 8) = uVar4;
          local_78 = param_2;
          local_74 = pbVar3;
          FUN_004dd0c0();
          local_74 = param_2 + param_3 * 0x40;
        }
        local_78 = param_2;
        FUN_004dcf20();
      }
    }
  }
  local_8 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_60);
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004dd670 */

void __fastcall FUN_004dd670(int param_1)

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
  for (; this != pbVar1; this = this + 0x40) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_004dd6c0 */

void __thiscall FUN_004dd6c0(int param_1,int *param_2,int param_3,int param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  
  if (param_3 != param_4) {
    pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_004dcfa0(param_4);
    pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              (param_1 + 8);
    for (this = pbVar2; this != pbVar1; this = this + 0x40) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
    }
    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)(param_1 + 8)
         = pbVar2;
  }
  *param_2 = param_3;
  return;
}




/* Function: FUN_004dd720 */

void __fastcall FUN_004dd720(int param_1)

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
  for (; this != pbVar1; this = this + 0x40) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_004dd730 */

void __thiscall FUN_004dd730(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 6) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 6))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_004dd1d0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x40;
    return;
  }
  FUN_004dd330(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_004dd7a0 */

void __thiscall FUN_004dd7a0(int param_1,undefined4 **param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *local_20;
  int local_1c;
  undefined1 *local_18;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &DAT_0057e208;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  local_4 = 0;
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = (undefined1 *)(*(int *)(param_1 + 8) - iVar1 >> 6);
  }
  if (puVar2 < param_2) {
    if (iVar1 == 0) {
      local_1c = 0;
    }
    else {
      local_1c = *(int *)(param_1 + 8) - iVar1 >> 6;
    }
    local_1c = (int)param_2 - local_1c;
    local_20 = *(undefined4 **)(param_1 + 8);
    local_18 = &stack0x00000008;
    param_2 = &local_20;
    ExceptionList = &local_c;
    FUN_004dd330();
  }
  else {
    ExceptionList = &local_c;
    if ((iVar1 != 0) &&
       (local_18 = *(undefined1 **)(param_1 + 8), ExceptionList = &local_c,
       param_2 < (undefined1 *)((int)local_18 - iVar1 >> 6))) {
      local_1c = (int)param_2 * 0x40 + *(int *)(param_1 + 4);
      local_20 = &param_2;
      ExceptionList = &local_c;
      param_2 = (undefined4 **)&local_1c;
      FUN_004dd6c0();
    }
  }
  local_4 = 0xffffffff;
  local_18 = (undefined1 *)0x4dd84d;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000008);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004dd860 */

undefined4 * __fastcall FUN_004dd860(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e23e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0045ca20();
  *param_1 = &PTR_LAB_00590858;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 0x1f,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310(0x3f800000);
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x13),"Map");
  iVar1 = FUN_0041c920();
  param_1[0x10] = *(int *)(iVar1 + 0xc) + -0x90;
  param_1[0xf] = 0x10;
  param_1[0x11] = 0x80;
  param_1[0x12] = 0x80;
  param_1[0x1e] = 0;
  *(undefined1 *)((int)param_1 + 0xcd) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x32] = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  param_1[0x34] = 2;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_004dd950 */

void __fastcall FUN_004dd950(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057e258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00590858;
  local_4 = 0;
  _eh_vector_destructor_iterator_(param_1 + 0x1f,0x10,4,FUN_00407150);
  FUN_004dd670();
  local_4 = 0xffffffff;
  FUN_0045c780();
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004dd9c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004dd9c0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  uint unaff_retaddr;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e278;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_50,param_1);
  if (param_2 != &local_34) {
    local_34 = *param_2;
    local_30 = param_2[1];
    local_2c = param_2[2];
  }
  local_28 = param_3;
  local_24 = param_4;
  local_1c = param_6;
  local_20 = param_5;
  local_18 = param_7;
  local_14 = param_8;
  FUN_004dd730(local_50);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004ddab0 */

void FUN_004ddab0(undefined4 param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_4c [28];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_4c);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  FUN_004dd7a0(param_1);
  return;
}




/* Function: FUN_004ddaf0 */

void * __thiscall FUN_004ddaf0(void *param_1,byte param_2)

{
  FUN_004dd950();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004de560 */

void __thiscall FUN_004de560(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x158) = param_2;
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (*(int *)(param_1 + 0x150) != 0) {
    FUN_0045c8f0();
    return;
  }
  return;
}




/* Function: FUN_004de5e0 */

undefined4 __thiscall
FUN_004de5e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x148) == 0) {
    return 0;
  }
  FUN_004dcc40(*(int *)(param_1 + 0x3c) + -8,*(int *)(param_1 + 0x40) + -8,
               *(int *)(param_1 + 0x44) + 0x10,*(int *)(param_1 + 0x48) + 0x10,0x96);
  uVar1 = FUN_0045be00(param_2,param_3,param_4);
  return uVar1;
}




/* Function: FUN_004de640 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_004de640(int *param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint unaff_retaddr;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_1cc [4];
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_1b0 [4];
  undefined4 uStack_1ac;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_168 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_14c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_130 [28];
  char local_114 [256];
  void *pvStack_14;
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e2f3;
  pvStack_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  FUN_0041caf0();
  pcVar1 = (char *)FUN_00549a10();
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '#') {
      local_114[0] = '\0';
      uStack_1ac = 0x4de6dc;
      sscanf(pcVar1 + 1,"%d %d %s");
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_168,local_114);
      local_4 = 0;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_130,".\\Textures\\");
      FUN_00429a60();
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_130);
      local_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_168);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_14c,local_114);
      iVar2 = FUN_004222d0();
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_14c);
      if (iVar2 == 0) goto LAB_004de8b9;
      pvVar3 = operator_new(0x84,(nothrow_t *)&DAT_005b6164);
      local_4 = 1;
      if (pvVar3 == (void *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        uStack_1bc = 0x4de7a7;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &stack0xfffffe4c,"");
        uStack_1bc = 0;
        uStack_1c0 = 0;
        uStack_1c4 = 0;
        uStack_1c8 = 0x4de7bc;
        piVar4 = (int *)FUN_0045cd50();
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar4 + 0x28))();
    }
    else {
      pvVar3 = operator_new(0xa0,(nothrow_t *)&DAT_005b6164);
      local_4 = 2;
      if (pvVar3 == (void *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  (abStack_1b0,pcVar1);
        local_4._0_1_ = 3;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_1cc,"")
        ;
        local_4 = CONCAT31(local_4._1_3_,2);
        piVar4 = (int *)FUN_0045ce80(0,0,400,0x400);
      }
      local_4 = 0xffffffff;
      FUN_00459070();
      FUN_00459020();
      FUN_00459050();
      FUN_00459030();
      FUN_0041cd90();
      FUN_00459690();
      iVar2 = FUN_00459080();
      piVar4[0x12] = iVar2 + 4;
      (**(code **)(*piVar4 + 0x28))();
    }
    FUN_0045e010();
  }
LAB_004de8b9:
  iVar2 = *(int *)(param_3 + 0x20);
  iVar6 = 1;
  if (iVar2 != *(int *)(param_3 + 0x24)) {
    do {
      FUN_0041caf0();
      pcVar1 = (char *)FUN_00549a10();
      if (pcVar1 != (char *)0x0) {
        pvVar3 = operator_new(0xa0,(nothrow_t *)&DAT_005b6164);
        local_4 = 4;
        if (pvVar3 == (void *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (abStack_1b0,pcVar1);
          local_4._0_1_ = 5;
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (abStack_1cc,"");
          local_4 = CONCAT31(local_4._1_3_,4);
          piVar4 = (int *)FUN_0045ce80(0,0,400,0x400);
        }
        local_4 = 0xffffffff;
        FUN_00459070();
        FUN_00459020();
        FUN_00459050();
        FUN_00459060();
        (**(code **)(*piVar4 + 0x28))();
        piVar4[0xc] = iVar6;
        FUN_00459690();
        FUN_004596a0();
        FUN_00459030();
        FUN_0041cd90();
        iVar5 = FUN_00459080();
        piVar4[0x12] = iVar5 + 4;
        if (iVar6 == 1) {
          FUN_00459050();
        }
        FUN_0045e010();
      }
      iVar2 = iVar2 + 4;
      iVar6 = iVar6 + 1;
    } while (iVar2 != *(int *)(param_3 + 0x24));
  }
  FUN_0045ba60();
  *(int *)(param_1[0x54] + 0x48) = *(int *)(param_1[0x54] + 0xa8) + 4;
  iVar2 = 0x40;
  if (0x40 < *(int *)(param_1[0x54] + 0x48)) {
    iVar2 = *(int *)(param_1[0x54] + 0x48);
  }
  iVar6 = *param_1;
  param_1[0x12] = iVar2 + 0x10;
  FUN_0041c920();
  FUN_0041c920();
  (**(code **)(iVar6 + 0x34))();
  *(undefined4 *)(param_1[0x54] + 0x108) = 0x400;
  ExceptionList = pvStack_14;
  return;
}




/* Function: FUN_004dead0 */

void __thiscall FUN_004dead0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar3 = *(int *)(param_1 + 0x144);
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x148) != 0)) {
    param_3 = param_3 + -1;
    if (*(int *)(iVar3 + 0x20) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x24) - *(int *)(iVar3 + 0x20) >> 2;
    }
    if ((-1 < param_3) && (param_3 < iVar3)) {
      FUN_0045c8f0(1);
      puVar2 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x144) + 0x20) + param_3 * 4);
      uVar7 = puVar2[2];
      FUN_0041caf0(uVar7);
      pcVar4 = (char *)FUN_00549a10(uVar7);
      *(undefined4 *)(param_1 + 0x140) = *puVar2;
      if (pcVar4 != (char *)0x0) {
        pcVar6 = pcVar4;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar8 = 0;
        iVar3 = (int)pcVar6 - (int)(pcVar4 + 1);
        uVar7 = param_2;
        FUN_0041cae0(param_2,pcVar4,iVar3,0);
        FUN_0042dbc0(uVar7,pcVar4,iVar3,uVar8);
      }
      if ((*(int *)(param_1 + 0x140) != 0xffff) &&
         (piVar5 = *(int **)(*(int *)(param_1 + 0x148) + 8),
         piVar5 != *(int **)(*(int *)(param_1 + 0x148) + 0xc))) {
        while (*(int *)(*piVar5 + 0x14) != *(int *)(param_1 + 0x140)) {
          piVar5 = piVar5 + 1;
          if (piVar5 == *(int **)(*(int *)(param_1 + 0x148) + 0xc)) {
            return;
          }
        }
        iVar3 = *piVar5;
        *(int *)(param_1 + 0x144) = iVar3;
        FUN_004de640(param_2,iVar3);
      }
    }
  }
  return;
}




/* Function: FUN_004debd0 */

void __thiscall FUN_004debd0(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if (-1 < (int)param_3) {
    iVar1 = FUN_0041cb00();
    if ((*(int *)(iVar1 + 4) != 0) &&
       (param_3 < (uint)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2))) {
      (**(code **)(*param_1 + 0x28))(param_2);
      iVar1 = FUN_0041cb00();
      iVar1 = *(int *)(*(int *)(iVar1 + 4) + param_3 * 4);
      param_1[0x52] = iVar1;
      iVar1 = **(int **)(iVar1 + 8);
      param_1[0x51] = iVar1;
      FUN_004de640(param_2,iVar1);
    }
  }
  return;
}




/* Function: FUN_004dec30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_004dec30(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint unaff_retaddr;
  int aiStack_38 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057e309;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  if (*(char *)((int)param_1 + 0x35) == '\0') {
    return;
  }
  ExceptionList = &local_c;
  if (((param_1[0x51] == 0) && (ExceptionList = &local_c, (int *)param_1[0x56] != (int *)0x0)) &&
     (ExceptionList = &local_c, uVar2 = (**(code **)(*(int *)param_1[0x56] + 0xe8))(param_2),
     -1 < (int)uVar2)) {
    iVar3 = FUN_0041cb00();
    if ((*(int *)(iVar3 + 4) != 0) &&
       (uVar2 < (uint)(*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2))) {
      iVar3 = FUN_0041cb00();
      iVar3 = *(int *)(*(int *)(iVar3 + 4) + uVar2 * 4);
      param_1[0x52] = iVar3;
      iVar3 = **(int **)(iVar3 + 8);
      param_1[0x51] = iVar3;
      FUN_004de640(param_2,iVar3);
      *(undefined4 *)(param_1[0x55] + 0x68) = 0;
      (**(code **)(*(int *)param_1[0x55] + 0x20))(param_2);
      if ((*(int *)(param_1[0x56] + 0x2b0) != 0) &&
         (*(int *)(*(int *)(param_1[0x56] + 0x2b0) + 0x2d0) != 0)) {
        FUN_0041c940("Textures\\");
        uVar4 = FUN_0041cf90();
        FUN_00411994(abStack_2c,uVar4);
        uStack_4 = 0;
        pvVar5 = operator_new(0xa8,(nothrow_t *)&DAT_005b6164);
        if (pvVar5 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_004fbe10(abStack_2c,*(int *)(param_1[0x56] + 0x2b0) + 700,0xffffffff);
        }
        uVar6 = FUN_0041c930();
        FUN_004fbd30(uVar6);
        FUN_00429210(uVar4);
        *(undefined4 *)(param_1[0x55] + 0x68) = uVar4;
        (**(code **)(*(int *)param_1[0x55] + 0x28))(param_2);
        uStack_4 = 0xffffffff;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_2c);
      }
    }
  }
  FUN_0041cf50();
  cVar1 = FUN_0040e910(0x155);
  if ((cVar1 != '\0') || (cVar1 = FUN_0040e910(0x255), cVar1 != '\0')) {
    FUN_0040e950(0xffffffff);
    iVar3 = param_1[0x54];
    uVar2 = 0;
    while( true ) {
      if ((*(int *)(iVar3 + 0x134) == 0) ||
         ((uint)(*(int *)(iVar3 + 0x138) - *(int *)(iVar3 + 0x134) >> 2) <= uVar2))
      goto LAB_004dee9b;
      if (*(char *)(*(int *)(*(int *)(iVar3 + 0x134) + uVar2 * 4) + 0x86) != '\0') break;
      uVar2 = uVar2 + 1;
    }
    FUN_00459050(0);
    uVar8 = uVar2 - 1;
    if (uVar2 != uVar8) {
      iVar3 = param_1[0x54];
      goto LAB_004dee50;
    }
  }
  goto LAB_004dee9b;
  while (uVar8 = uVar8 + 1, uVar2 != uVar8) {
LAB_004def30:
    if ((iVar3 == 0) || ((uint)(*(int *)(param_1[0x54] + 0x138) - iVar3 >> 2) <= uVar8)) {
      uVar8 = 0;
    }
    iVar7 = *(int *)(iVar3 + uVar8 * 4);
    if ((*(int *)(iVar7 + 0x30) != 0) && (*(char *)(iVar7 + 0x87) != '\0')) {
      FUN_00459050(1);
      break;
    }
  }
  goto LAB_004def73;
  while (uVar8 = uVar8 - 1, uVar2 != uVar8) {
LAB_004dee50:
    if ((int)uVar8 < 0) {
      if (*(int *)(iVar3 + 0x134) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iVar3 + 0x138) - *(int *)(iVar3 + 0x134) >> 2;
      }
      uVar8 = iVar7 - 1;
    }
    iVar7 = *(int *)(*(int *)(iVar3 + 0x134) + uVar8 * 4);
    if ((*(int *)(iVar7 + 0x30) != 0) && (*(char *)(iVar7 + 0x87) != '\0')) {
      FUN_00459050(1);
      break;
    }
  }
LAB_004dee9b:
  cVar1 = FUN_0040e910(0x144);
  if ((cVar1 != '\0') || (cVar1 = FUN_0040e910(0x244), cVar1 != '\0')) {
    FUN_0040e950(0xffffffff);
    iVar3 = param_1[0x54];
    uVar2 = 0;
    while( true ) {
      if ((*(int *)(iVar3 + 0x134) == 0) ||
         ((uint)(*(int *)(iVar3 + 0x138) - *(int *)(iVar3 + 0x134) >> 2) <= uVar2))
      goto LAB_004def73;
      iVar7 = *(int *)(*(int *)(iVar3 + 0x134) + uVar2 * 4);
      if ((*(int *)(iVar7 + 0x30) != 0) && (*(char *)(iVar7 + 0x86) != '\0')) break;
      uVar2 = uVar2 + 1;
    }
    FUN_00459050(0);
    uVar8 = uVar2 + 1;
    if (uVar2 != uVar8) {
      iVar3 = *(int *)(param_1[0x54] + 0x134);
      goto LAB_004def30;
    }
  }
LAB_004def73:
  cVar1 = FUN_0040e910(0x841);
  if (cVar1 != '\0') {
    iVar3 = param_1[0x54];
    uVar2 = 0;
    while( true ) {
      if ((*(int *)(iVar3 + 0x134) == 0) ||
         ((uint)(*(int *)(iVar3 + 0x138) - *(int *)(iVar3 + 0x134) >> 2) <= uVar2))
      goto LAB_004defe8;
      iVar7 = *(int *)(*(int *)(iVar3 + 0x134) + uVar2 * 4);
      if ((*(int *)(iVar7 + 0x30) != 0) && (*(char *)(iVar7 + 0x86) != '\0')) break;
      uVar2 = uVar2 + 1;
    }
    aiStack_38[2] = *(undefined4 *)(iVar7 + 0x30);
    aiStack_38[1] = 1;
    aiStack_38[0] = iVar7;
    FUN_0040e950(8);
    (**(code **)(*param_1 + 0x10))(param_2,aiStack_38);
LAB_004defe8:
    FUN_0040e950(0xffffffff);
  }
  FUN_0040e950(3);
  FUN_0045d010(param_2);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004df100 */

void __fastcall FUN_004df100(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057e328;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_005908f0;
  local_4 = 0;
  FUN_0045c8f0(1);
  if ((int *)param_1[0x55] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x55] + 0x18))(1);
  }
  if ((int *)param_1[0x54] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x54] + 0x18))(1);
  }
  local_4 = 0xffffffff;
  FUN_0045c850();
  ExceptionList = pvStack_c;
  return;
}




/* Function: FUN_004df180 */

undefined4 * __fastcall FUN_004df180(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_40 [12];
  undefined4 uStack_34;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e36c;
  pvStack_c = ExceptionList;
  uStack_48 = 0x4df1b6;
  ExceptionList = &pvStack_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_40,"Chat");
  uStack_48 = 0x1e4;
  iVar1 = FUN_0041c920();
  iVar1 = *(int *)(iVar1 + 0xc) + -0xa6;
  iVar2 = FUN_0041c920(iVar1);
  FUN_0045ec30(*(int *)(iVar2 + 8) + -500,iVar1);
  local_4 = 0;
  *param_1 = &PTR_LAB_005908f0;
  FUN_00459780();
  param_1[0x51] = 0;
  param_1[0x56] = 0;
  param_1[0x52] = 0;
  FUN_00459730();
  FUN_00459770();
  pvVar3 = operator_new(0x140,(nothrow_t *)&DAT_005b6164);
  local_4._0_1_ = 1;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uStack_48 = 0x4df258;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_40,"LISTBOX");
    uStack_48 = 400;
    uVar4 = FUN_0045ec30(8,6);
  }
  local_10 = abStack_40;
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x54] = uVar4;
  FUN_00459790();
  FUN_00459730();
  FUN_00459750();
  FUN_00459760();
  FUN_00459740();
  FUN_0045b400();
  FUN_004597a0();
  FUN_004597b0();
  (**(code **)(*(int *)param_1[0x54] + 0x28))();
  FUN_0045e010();
  param_1[0x50] = 0xffff;
  uStack_34 = 0x4df30d;
  pvVar3 = operator_new(0x84,(nothrow_t *)&DAT_005b6164);
  puStack_8._0_1_ = 2;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &uStack_48,"");
    uVar4 = FUN_0045cd50(0x19c,8,0x40,0x40);
  }
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  param_1[0x55] = uVar4;
  FUN_0045e010();
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_004df380 */

void * __thiscall FUN_004df380(void *param_1,byte param_2)

{
  FUN_004df100();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004df3a0 */

void FUN_004df3a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6,int param_7,int param_8)

{
  int iVar1;
  
  FUN_0041ce80();
  FUN_0041cae0();
  iVar1 = FUN_0042dbb0();
  if (iVar1 != 0) {
    FUN_00412e58(iVar1,"gui_AddMsg");
    FUN_00412d30(iVar1,param_1);
    FUN_00412d30(iVar1,param_2);
    FUN_00412cfc(iVar1,(double)param_3);
    FUN_00412cfc(iVar1,(double)param_4);
    FUN_00412cfc(iVar1,(double)param_5);
    FUN_00412cfc(iVar1,(double)param_6);
    FUN_00412cfc(iVar1,(double)param_7);
    FUN_00412cfc(iVar1,(double)param_8);
    FUN_00412798(iVar1,8,0);
  }
  return;
}




/* Function: FUN_004df450 */

void __fastcall FUN_004df450(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0057e394;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00590980;
  local_4 = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x21));
  local_4 = local_4 & 0xffffff00;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x1a));
  local_4 = 0xffffffff;
  FUN_0045c780();
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004df4c0 */

void __thiscall FUN_004df4c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xa8) = param_3;
  return;
}




/* Function: FUN_004df4d0 */

void __thiscall FUN_004df4d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xa0) = param_3;
  return;
}




/* Function: FUN_004df760 */

void __thiscall
FUN_004df760(int param_1,undefined4 param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  int iVar1;
  undefined4 uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c [28];
  
  this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
         (param_1 + 0x68);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (this,param_3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x84),param_4);
  iVar1 = FUN_004222d0(this);
  *(int *)(param_1 + 0xac) = iVar1;
  if (iVar1 == 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_1c,".\\Textures\\");
    FUN_00429a60(local_1c,this,1);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
    uVar2 = FUN_004222d0(this);
    *(undefined4 *)(param_1 + 0xac) = uVar2;
  }
  return;
}




/* Function: FUN_004df7e0 */

void __thiscall
FUN_004df7e0(int param_1,undefined4 param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x84),param_3);
  return;
}




/* Function: FUN_004df8e0 */

void __fastcall FUN_004df8e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00590a18;
  FUN_0045c780();
  return;
}




/* Function: FUN_004df8f0 */

void __thiscall FUN_004df8f0(int param_1,undefined4 param_2,int param_3)

{
  *(float *)(param_1 + 0x68) = (float)param_3;
  return;
}




/* Function: FUN_004dfd60 */

void __thiscall FUN_004dfd60(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x70) = param_3;
  return;
}




/* Function: FUN_004dfd70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004dfd70(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_0041ce10();
  fVar2 = fVar1 * (float10)_DAT_00588810 + (float10)*(float *)(param_1 + 0x6c);
  if (((float10)*(float *)(param_1 + 0x70) <= fVar2) &&
     (fVar2 = (float10)*(float *)(param_1 + 0x6c) - (float10)(float)(fVar1 * (float10)_DAT_00588810)
     , fVar2 <= (float10)*(float *)(param_1 + 0x70))) {
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x70);
    return;
  }
  *(float *)(param_1 + 0x6c) = (float)fVar2;
  return;
}




/* Function: FUN_004dfde0 */

undefined4 * __thiscall FUN_004dfde0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e3ac;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 3),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 3));
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 10),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 10));
  param_1[0x11] = param_2[0x11];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)((int)param_1 + 0x49) = *(undefined1 *)((int)param_2 + 0x49);
  *(undefined1 *)((int)param_1 + 0x4a) = *(undefined1 *)((int)param_2 + 0x4a);
  *unaff_FS_OFFSET = local_c;
  return param_1;
}




/* Function: FUN_004dfe70 */

undefined4 * __thiscall FUN_004dfe70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 3),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 3));
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 10),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 10));
  param_1[0x11] = param_2[0x11];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)((int)param_1 + 0x49) = *(undefined1 *)((int)param_2 + 0x49);
  *(undefined1 *)((int)param_1 + 0x4a) = *(undefined1 *)((int)param_2 + 0x4a);
  return param_1;
}




/* Function: FUN_004dfed0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004dfed0(undefined4 param_1,undefined4 *param_2)

{
  uint unaff_retaddr;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_34 [28];
  undefined4 local_18;
  undefined1 uStack_12;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e3d1;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  FUN_004dfde0(param_1);
  local_4 = 0;
  FUN_004dfe70(param_2);
  *param_2 = local_5c;
  param_2[1] = local_58;
  param_2[2] = local_54;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 3),local_50);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 10),local_34);
  *(char *)(param_2 + 0x12) = (char)local_14;
  param_2[0x11] = local_18;
  *(char *)((int)param_2 + 0x49) = (char)((uint)local_14 >> 8);
  *(undefined1 *)((int)param_2 + 0x4a) = uStack_12;
  local_4 = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004dffb0 */

void FUN_004dffb0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  code *in_stack_0000005c;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &DAT_0057e3f1;
  local_4 = 0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (param_3 < param_2) {
    iVar2 = (param_2 + -1) / 2;
    puVar4 = (undefined4 *)(iVar2 * 0x4c + param_1);
    cVar1 = (*in_stack_0000005c)(puVar4,&param_4);
    if (cVar1 == '\0') break;
    puVar3 = (undefined4 *)(param_2 * 0x4c + param_1);
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    puVar3[2] = puVar4[2];
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar3 + 3),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar4 + 3));
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar3 + 10),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar4 + 10));
    puVar3[0x11] = puVar4[0x11];
    *(undefined1 *)(puVar3 + 0x12) = *(undefined1 *)(puVar4 + 0x12);
    *(undefined1 *)((int)puVar3 + 0x49) = *(undefined1 *)((int)puVar4 + 0x49);
    *(undefined1 *)((int)puVar3 + 0x4a) = *(undefined1 *)((int)puVar4 + 0x4a);
    param_2 = iVar2;
  }
  puVar4 = (undefined4 *)(param_2 * 0x4c + param_1);
  *puVar4 = param_4;
  puVar4[2] = param_6;
  puVar4[1] = param_5;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (puVar4 + 3),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x0000001c);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (puVar4 + 10),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000038);
  puVar4[0x11] = in_stack_00000054;
  *(char *)(puVar4 + 0x12) = (char)in_stack_00000058;
  *(char *)((int)puVar4 + 0x49) = (char)((uint)in_stack_00000058 >> 8);
  *(undefined1 *)((int)puVar4 + 0x4a) = in_stack_00000058._2_1_;
  local_4 = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000038);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x0000001c);
  ExceptionList = pvStack_c;
  return;
}




/* Function: FUN_004e00f0 */

void * __thiscall FUN_004e00f0(void *param_1,byte param_2)

{
  FUN_004df450();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004e0110 */

void * __thiscall FUN_004e0110(void *param_1,byte param_2)

{
  FUN_004df8e0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004e0130 */

void FUN_004e0130(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e412;
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




/* Function: FUN_004e01b0 */

void FUN_004e01b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    do {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_1 + 3),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_3 + 3));
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_1 + 10),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_3 + 10));
      param_1[0x11] = param_3[0x11];
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_3 + 0x12);
      *(undefined1 *)((int)param_1 + 0x49) = *(undefined1 *)((int)param_3 + 0x49);
      *(undefined1 *)((int)param_1 + 0x4a) = *(undefined1 *)((int)param_3 + 0x4a);
      param_1 = param_1 + 0x13;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_004e0220 */

void FUN_004e0220(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    *param_4 = *param_2;
    param_4[1] = param_2[1];
    param_4[2] = param_2[2];
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_4 + 3),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_2 + 3));
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_4 + 10),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_2 + 10));
    param_4[0x11] = param_2[0x11];
    *(undefined1 *)(param_4 + 0x12) = *(undefined1 *)(param_2 + 0x12);
    *(undefined1 *)((int)param_4 + 0x49) = *(undefined1 *)((int)param_2 + 0x49);
    *(undefined1 *)((int)param_4 + 0x4a) = *(undefined1 *)((int)param_2 + 0x4a);
    param_2 = param_2 + 0x13;
    param_4 = param_4 + 0x13;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return;
}




/* Function: FUN_004e02a0 */

void FUN_004e02a0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    iVar1 = param_3 + -0x4c;
    puVar2 = param_4 + -0x13;
    *puVar2 = *(undefined4 *)(param_3 + -0x4c);
    param_4[-0x12] = *(undefined4 *)(param_3 + -0x48);
    param_4[-0x11] = *(undefined4 *)(param_3 + -0x44);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_4 + -0x10),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_3 + -0x40));
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_4 + -9),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_3 + -0x24));
    param_4[-2] = *(undefined4 *)(param_3 + -8);
    *(undefined1 *)(param_4 + -1) = *(undefined1 *)(param_3 + -4);
    *(undefined1 *)((int)param_4 + -3) = *(undefined1 *)(param_3 + -3);
    *(undefined1 *)((int)param_4 + -2) = *(undefined1 *)(param_3 + -2);
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return;
}




/* Function: FUN_004e0320 */

void FUN_004e0320(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4)

{
  char cVar1;
  
  cVar1 = (*param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    FUN_004dfed0(param_2,param_1);
  }
  cVar1 = (*param_4)(param_3,param_2);
  if (cVar1 != '\0') {
    FUN_004dfed0(param_3,param_2);
  }
  cVar1 = (*param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    FUN_004dfed0(param_2,param_1);
  }
  return;
}




/* Function: FUN_004e0380 */

void FUN_004e0380(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  code *in_stack_0000005c;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &DAT_0057e3f1;
  local_4 = 0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while( true ) {
    iVar2 = param_2 * 2 + 2;
    if (param_3 <= iVar2) break;
    cVar1 = (*in_stack_0000005c)();
    if (cVar1 != '\0') {
      iVar2 = param_2 * 2 + 1;
    }
    iVar3 = iVar2 * 0x4c + param_1;
    puVar4 = (undefined4 *)(param_2 * 0x4c + param_1);
    *puVar4 = *(undefined4 *)(iVar2 * 0x4c + param_1);
    puVar4[1] = *(undefined4 *)(iVar3 + 4);
    puVar4[2] = *(undefined4 *)(iVar3 + 8);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar4 + 3),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (iVar3 + 0xc));
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar4 + 10),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (iVar3 + 0x28));
    puVar4[0x11] = *(undefined4 *)(iVar3 + 0x44);
    *(undefined1 *)(puVar4 + 0x12) = *(undefined1 *)(iVar3 + 0x48);
    *(undefined1 *)((int)puVar4 + 0x49) = *(undefined1 *)(iVar3 + 0x49);
    *(undefined1 *)((int)puVar4 + 0x4a) = *(undefined1 *)(iVar3 + 0x4a);
    param_2 = iVar2;
  }
  if (iVar2 == param_3) {
    iVar2 = param_3 * 0x4c + -0x4c + param_1;
    puVar4 = (undefined4 *)(param_2 * 0x4c + param_1);
    *puVar4 = *(undefined4 *)(param_3 * 0x4c + -0x4c + param_1);
    puVar4[1] = *(undefined4 *)(iVar2 + 4);
    puVar4[2] = *(undefined4 *)(iVar2 + 8);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar4 + 3),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (iVar2 + 0xc));
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar4 + 10),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (iVar2 + 0x28));
    puVar4[0x11] = *(undefined4 *)(iVar2 + 0x44);
    *(undefined1 *)(puVar4 + 0x12) = *(undefined1 *)(iVar2 + 0x48);
    *(undefined1 *)((int)puVar4 + 0x49) = *(undefined1 *)(iVar2 + 0x49);
    *(undefined1 *)((int)puVar4 + 0x4a) = *(undefined1 *)(iVar2 + 0x4a);
  }
  FUN_004dfde0();
  FUN_004dffb0();
  local_4 = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000038);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x0000001c);
  ExceptionList = pvStack_c;
  return;
}




/* Function: FUN_004e0500 */

void FUN_004e0500(void)

{
  undefined4 in_stack_0000005c;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &DAT_0057e3f1;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004dfe70();
  FUN_004dfde0();
  FUN_004e0380();
  local_4 = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000038);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x0000001c);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004e05b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004e05b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint unaff_retaddr;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_34 [28];
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e3d1;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  iVar2 = (param_3 - param_1) / 0x4c;
  iVar1 = (param_2 - param_1) / 0x4c;
  iVar6 = iVar1;
  local_6c = iVar2;
  while (iVar3 = iVar6, iVar3 != 0) {
    iVar6 = local_6c % iVar3;
    local_6c = iVar3;
  }
  if ((local_6c < iVar2) && (0 < local_6c)) {
    param_2 = iVar1 * 0x4c;
    puVar9 = (undefined4 *)(local_6c * 0x4c + param_1);
    ExceptionList = &local_c;
    do {
      iVar2 = param_2;
      FUN_004dfde0(puVar9);
      local_4 = 0;
      if ((int)puVar9 + iVar2 == param_3) {
        piVar8 = &param_1;
      }
      else {
        local_68 = (int)puVar9 + iVar2;
        piVar8 = &local_68;
      }
      puVar7 = (undefined4 *)*piVar8;
      puVar5 = puVar9;
      while (puVar4 = puVar7, puVar4 != puVar9) {
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[1];
        puVar5[2] = puVar4[2];
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (puVar5 + 3),
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (puVar4 + 3));
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (puVar5 + 10),
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (puVar4 + 10));
        puVar5[0x11] = puVar4[0x11];
        *(undefined1 *)(puVar5 + 0x12) = *(undefined1 *)(puVar4 + 0x12);
        *(undefined1 *)((int)puVar5 + 0x49) = *(undefined1 *)((int)puVar4 + 0x49);
        *(undefined1 *)((int)puVar5 + 0x4a) = *(undefined1 *)((int)puVar4 + 0x4a);
        iVar2 = (param_3 - (int)puVar4) / 0x4c;
        if (iVar1 < iVar2) {
          local_64 = param_2 + (int)puVar4;
          piVar8 = &local_64;
        }
        else {
          local_60 = (iVar1 - iVar2) * 0x4c + param_1;
          piVar8 = &local_60;
        }
        puVar5 = puVar4;
        puVar7 = (undefined4 *)*piVar8;
      }
      *puVar5 = local_5c;
      puVar5[1] = local_58;
      puVar5[2] = local_54;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (puVar5 + 3),local_50);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (puVar5 + 10),local_34);
      puVar5[0x11] = local_18;
      *(undefined1 *)(puVar5 + 0x12) = local_14;
      *(undefined1 *)((int)puVar5 + 0x49) = local_13;
      *(undefined1 *)((int)puVar5 + 0x4a) = local_12;
      local_4 = 1;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
      local_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
      puVar9 = puVar9 + -0x13;
      local_6c = local_6c + -1;
    } while (local_6c != 0);
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004e07e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e07e0(int param_1,undefined4 param_2)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint unaff_retaddr;
  char local_104 [256];
  uint local_4;
  
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  if (*(char *)(param_1 + 0x35) != '\0') {
    FUN_0041cf50();
    piVar8 = *(int **)(param_1 + 0x6c);
    if (piVar8 != *(int **)(param_1 + 0x70)) {
      do {
        if ((*(char *)((int)piVar8 + 0x4a) != '\0') && (cVar2 = FUN_0040e8d0(), cVar2 != '\0')) {
          FUN_0041cae0();
          uVar3 = FUN_0042dbb0();
          pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   ::c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            *)(piVar8 + 3));
          FUN_00412e58(uVar3,pcVar4);
          iVar7 = 0;
          if (*piVar8 != 0) {
            iVar7 = FUN_0044ab40();
            dVar1 = (double)iVar7;
            if (iVar7 < 0) {
              dVar1 = dVar1 + _DAT_00589ec0;
            }
            FUN_00412cfc(uVar3,dVar1);
            pcVar5 = std::
                     basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                     c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            *)(piVar8 + 3));
            pcVar4 = local_104;
            do {
              cVar2 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              *pcVar4 = cVar2;
              pcVar4 = pcVar4 + 1;
            } while (cVar2 != '\0');
            (**(code **)(*(int *)*piVar8 + 0x44))(param_2,0xfffffffe,piVar8);
            iVar7 = 1;
          }
          if (piVar8[1] != 0) {
            iVar6 = FUN_0044ab40();
            dVar1 = (double)iVar6;
            if (iVar6 < 0) {
              dVar1 = dVar1 + _DAT_00589ec0;
            }
            FUN_00412cfc(uVar3,dVar1);
            iVar7 = iVar7 + 1;
          }
          FUN_00412798(uVar3,iVar7,0);
          return;
        }
        piVar8 = piVar8 + 0x13;
      } while (piVar8 != *(int **)(param_1 + 0x70));
    }
  }
  return;
}




/* Function: FUN_004e0930 */

undefined4 FUN_004e0930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004e02a0(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_004e0970 */

int FUN_004e0970(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057e431;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x4c) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_004dfde0(param_1);
    }
    param_3 = param_3 + 0x4c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}




/* Function: FUN_004e0a00 */

void FUN_004e0a00(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (param_3 - param_1) / 0x4c;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_004e0320(param_1);
    FUN_004e0320(param_2 + iVar1 * -0x4c);
    FUN_004e0320(param_3 + iVar1 * -0x98);
    param_1 = iVar1 * 0x4c + param_1;
  }
  FUN_004e0320(param_1);
  return;
}




/* Function: FUN_004e0af0 */

void FUN_004e0af0(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = (param_2 - param_1) / 0x98; 0 < iVar1; iVar1 = iVar1 + -1) {
    FUN_004dfde0();
    FUN_004e0380();
  }
  return;
}




/* Function: FUN_004e0b60 */

void FUN_004e0b60(void)

{
  FUN_004dfde0();
  FUN_004e0500();
  return;
}




/* Function: FUN_004e0bb0 */

void FUN_004e0bb0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057e451;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_004dfde0(param_3);
    }
    param_1 = param_1 + 0x4c;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}




/* Function: FUN_004e0c40 */

void FUN_004e0c40(uint *param_1,uint param_2,uint param_3,code *param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uStack_4;
  
  uVar5 = ((int)(param_3 - param_2) / 0x98) * 0x4c + param_2;
  FUN_004e0a00(param_2,uVar5,param_3 - 0x4c,param_4);
  uVar1 = uVar5;
  while (uStack_4 = uVar1, param_2 < uStack_4) {
    uVar1 = uStack_4 - 0x4c;
    cVar2 = (*param_4)(uVar1,uStack_4);
    if ((cVar2 != '\0') || (cVar2 = (*param_4)(uStack_4,uVar1), cVar2 != '\0')) break;
  }
  do {
    uVar5 = uVar5 + 0x4c;
    uVar1 = uVar5;
    uVar6 = uStack_4;
    if (param_3 <= uVar5) break;
    cVar2 = (*param_4)(uVar5,uStack_4);
    if ((cVar2 != '\0') || (cVar2 = (*param_4)(uStack_4,uVar5), cVar2 != '\0')) break;
  } while( true );
joined_r0x004e0cea:
  uVar3 = uStack_4;
  if (param_3 <= uVar1) {
joined_r0x004e0d28:
    for (; param_2 < uStack_4; uStack_4 = uStack_4 - 0x4c) {
      uVar3 = uVar3 - 0x4c;
      cVar2 = (*param_4)(uVar3,uVar6);
      if (cVar2 == '\0') {
        cVar2 = (*param_4)(uVar6,uVar3);
        if (cVar2 != '\0') break;
        uVar6 = uVar6 - 0x4c;
        FUN_004dfed0(uVar6,uVar3);
      }
    }
    if (uStack_4 == param_2) {
      if (uVar1 == param_3) {
        *param_1 = uVar6;
        param_1[1] = uVar5;
        return;
      }
      if (uVar5 != uVar1) {
        FUN_004dfed0(uVar6,uVar5);
      }
      uVar5 = uVar5 + 0x4c;
      FUN_004dfed0(uVar6,uVar1);
      uVar1 = uVar1 + 0x4c;
      uVar6 = uVar6 + 0x4c;
    }
    else {
      uStack_4 = uStack_4 - 0x4c;
      if (uVar1 == param_3) {
        uVar6 = uVar6 - 0x4c;
        if (uStack_4 != uVar6) {
          FUN_004dfed0(uStack_4,uVar6);
        }
        uVar5 = uVar5 - 0x4c;
        FUN_004dfed0(uVar6,uVar5);
      }
      else {
        FUN_004dfed0(uVar1,uStack_4);
        uVar1 = uVar1 + 0x4c;
      }
    }
    goto joined_r0x004e0cea;
  }
  cVar2 = (*param_4)(uVar6,uVar1);
  uVar4 = uVar5;
  if (cVar2 == '\0') {
    cVar2 = (*param_4)(uVar1,uVar6);
    if (cVar2 != '\0') goto joined_r0x004e0d28;
    uVar4 = uVar5 + 0x4c;
    FUN_004dfed0(uVar5,uVar1);
  }
  uVar5 = uVar4;
  uVar1 = uVar1 + 0x4c;
  goto joined_r0x004e0cea;
}




/* Function: FUN_004e0e10 */

void __thiscall
FUN_004e0e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004e0970(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_004e0e40 */

int FUN_004e0e40(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 - param_1;
  iVar1 = -(iVar2 >> 0x1f);
  while (1 < iVar2 / 0x4c) {
    FUN_004e0b60(param_1,param_2,param_3,0);
    iVar2 = iVar2 + -0x4c;
    iVar1 = iVar2 * 0x6bca1af3;
    param_2 = param_2 + -0x4c;
  }
  return iVar1;
}




/* Function: FUN_004e0eb0 */

void FUN_004e0eb0(int param_1,int param_2,code *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 != param_2) && (iVar4 = param_1 + 0x4c, iVar4 != param_2)) {
    iVar3 = param_1 + 0x98;
    do {
      cVar2 = (*param_3)(iVar4,param_1);
      if (cVar2 == '\0') {
        cVar2 = (*param_3)(iVar4,iVar3 + -0x98);
        iVar1 = iVar3 + -0x98;
        if (cVar2 != '\0') {
          do {
            iVar5 = iVar1;
            cVar2 = (*param_3)(iVar4,iVar5 + -0x4c);
            iVar1 = iVar5 + -0x4c;
          } while (cVar2 != '\0');
          if ((iVar5 != iVar4) && (iVar4 != iVar3)) {
            FUN_004e05b0(iVar5,iVar4,iVar3,0,0);
          }
        }
      }
      else if ((param_1 != iVar4) && (iVar4 != iVar3)) {
        FUN_004e05b0(param_1,iVar4,iVar3,0,0);
      }
      iVar4 = iVar4 + 0x4c;
      iVar3 = iVar3 + 0x4c;
    } while (iVar4 != param_2);
  }
  return;
}




/* Function: FUN_004e0f70 */

void FUN_004e0f70(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x4c) {
    FUN_004d5fa0();
  }
  return;
}




/* Function: FUN_004e0fa0 */

void __fastcall FUN_004e0fa0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x4c) {
    FUN_004d5fa0();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_004e0ff0 */

int __thiscall FUN_004e0ff0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_004e0bb0(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x4c + param_2;
}




/* Function: FUN_004e1020 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_004e1020(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint unaff_retaddr;
  undefined1 *local_84;
  undefined1 *local_80;
  undefined1 local_6c [12];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_60 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [36];
  undefined1 *local_20;
  undefined1 *local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057e471;
  local_10 = ExceptionList;
  local_18 = DAT_005b12c0 ^ unaff_retaddr;
  local_14 = &stack0xffffff88;
  local_80 = (undefined1 *)0x4e105d;
  ExceptionList = &local_10;
  local_1c = param_1;
  FUN_004dfde0();
  iVar4 = *(int *)(param_1 + 4);
  uVar5 = 0;
  local_8 = 0;
  if (iVar4 != 0) {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar4) / 0x4c;
  }
  if (param_3 != 0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x4c;
    }
    if (0x35e50d7U - iVar3 < param_3) {
      FUN_004e0130();
    }
    else {
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x4c;
      }
      if (uVar5 < iVar3 + param_3) {
        if (0x35e50d7 - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar4) / 0x4c;
        }
        if (uVar5 < iVar4 + param_3) {
          iVar4 = FUN_0044aba0();
          uVar5 = iVar4 + param_3;
        }
        local_80 = (undefined1 *)0x4e1136;
        puVar1 = (undefined1 *)FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        local_84 = puVar1;
        local_80 = param_1;
        iVar4 = FUN_004e0970(*(undefined4 *)(param_1 + 4));
        local_84 = local_6c;
        local_80 = param_1;
        FUN_004e0bb0(iVar4);
        local_84 = (undefined1 *)(iVar4 + param_3 * 0x4c);
        local_80 = param_1;
        FUN_004e0970(param_2);
        iVar4 = *(int *)(param_1 + 4);
        iVar3 = 0;
        local_8 = 0;
        if (iVar4 != 0) {
          iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x4c;
        }
        if (iVar4 != 0) {
          local_84 = (undefined1 *)0x4e11d6;
          local_80 = (undefined1 *)iVar4;
          FUN_004e0f70();
                    /* WARNING: Subroutine does not return */
          local_80 = &UNK_004e11df;
          operator_delete(*(void **)(param_1 + 4));
        }
        *(undefined1 **)(param_1 + 0xc) = puVar1 + uVar5 * 0x4c;
        *(undefined1 **)(param_1 + 8) = puVar1 + (param_3 + iVar3) * 0x4c;
        *(undefined1 **)(param_1 + 4) = puVar1;
      }
      else {
        local_80 = *(undefined1 **)(param_1 + 8);
        if ((uint)(((int)local_80 - (int)param_2) / 0x4c) < param_3) {
          local_20 = (undefined1 *)&local_84;
          local_84 = param_2;
          FUN_004e0e10();
          local_84 = *(undefined1 **)(param_1 + 8);
          local_80 = (undefined1 *)(param_3 - ((int)local_84 - (int)param_2) / 0x4c);
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_004e0ff0();
          iVar4 = *(int *)(param_1 + 8) + param_3 * 0x4c;
          *(int *)(param_1 + 8) = iVar4;
          local_80 = (undefined1 *)(iVar4 + param_3 * -0x4c);
          local_8 = 0;
        }
        else {
          puVar1 = (undefined1 *)((int)local_80 + param_3 * -0x4c);
          local_84 = puVar1;
          uVar2 = FUN_004e0e10();
          *(undefined4 *)(param_1 + 8) = uVar2;
          local_84 = param_2;
          local_80 = puVar1;
          FUN_004e0930();
          local_80 = param_2 + param_3 * 0x4c;
        }
        local_84 = param_2;
        FUN_004e01b0();
      }
    }
  }
  local_8 = 5;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
  local_8 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_60);
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004e1380 */

void FUN_004e1380(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 0x4c;
    if (iVar1 < 0x21) {
LAB_004e146b:
      if (1 < iVar1) {
        FUN_004e0eb0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (param_2 - param_1) / 0x4c) {
          FUN_004e0af0(param_1,param_2,param_4,0,0);
        }
        FUN_004e0e40(param_1,param_2,param_4);
        return;
      }
      goto LAB_004e146b;
    }
    FUN_004e0c40(&local_8,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_8 - param_1) / 0x4c < (param_2 - local_4) / 0x4c) {
      FUN_004e1380(param_1,local_8,param_3,param_4);
      param_1 = local_4;
    }
    else {
      FUN_004e1380(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}




/* Function: FUN_004e14f0 */

void __thiscall FUN_004e14f0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x4c != 0) {
      iVar1 = (param_3 - iVar1) / 0x4c;
      goto LAB_004e1537;
    }
  }
  iVar1 = 0;
LAB_004e1537:
  FUN_004e1020(param_3,1,param_4);
  *param_2 = iVar1 * 0x4c + *(int *)(param_1 + 4);
  return;
}




/* Function: FUN_004e1890 */

undefined4 * __fastcall FUN_004e1890(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e503;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0045ca20();
  *param_1 = &PTR_LAB_00590ae8;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  local_4 = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x13),"ActionList");
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_004e18f0 */

void __fastcall FUN_004e18f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057e518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00590ae8;
  local_4 = 0;
  FUN_004e0fa0();
  local_4 = 0xffffffff;
  FUN_0045c780();
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004e1aa0 */

void __thiscall FUN_004e1aa0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x4c) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x4c))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_004e0bb0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x4c;
    return;
  }
  FUN_004e14f0(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_004e1b30 */

void * __thiscall FUN_004e1b30(void *param_1,byte param_2)

{
  FUN_004e18f0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004e1b50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FUN_004e1b50(int param_1,char *param_2,undefined1 param_3,int param_4,undefined4 param_5,
            char *param_6,int param_7)

{
  void **ppvVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint unaff_retaddr;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_34 [28];
  int local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e54a;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  piVar4 = *(int **)(param_1 + 0x6c);
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (piVar4 != *(int **)(param_1 + 0x70)) {
    do {
      ExceptionList = ppvVar1;
      bVar2 = std::operator==((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)(piVar4 + 10),param_2);
      if ((((bVar2) && (*piVar4 == param_4)) &&
          (bVar2 = std::operator==((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    *)(piVar4 + 3),param_6), bVar2)) && (piVar4[0x11] == param_7)) {
        *(undefined1 *)((int)piVar4 + 0x49) = 0;
        ExceptionList = local_c;
        return 0;
      }
      piVar4 = piVar4 + 0x13;
      ppvVar1 = ExceptionList;
    } while (piVar4 != *(int **)(param_1 + 0x70));
  }
  iVar3 = *(int *)(param_1 + 0x6c);
  if (iVar3 != *(int *)(param_1 + 0x70)) {
    do {
      *(undefined1 *)(iVar3 + 0x48) = 0;
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(param_1 + 0x70));
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
  local_5c = 0;
  local_58 = 0;
  local_18 = 0;
  local_54 = 0;
  local_12 = 0;
  local_4 = 1;
  local_13 = 0;
  local_14 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_34,param_2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_50,param_6);
  local_58 = param_5;
  local_5c = param_4;
  local_18 = param_7;
  local_12 = param_3;
  FUN_004e1aa0(&local_5c);
  local_4 = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
  ExceptionList = local_c;
  return 1;
}




/* Function: FUN_004e1cd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FUN_004e1cd0(int param_1,char *param_2,undefined1 param_3,int param_4,undefined4 param_5,int param_6
            ,char *param_7,int param_8)

{
  void **ppvVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint unaff_retaddr;
  int local_5c;
  undefined4 local_58;
  int local_54;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_34 [28];
  int local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e54a;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  piVar4 = *(int **)(param_1 + 0x6c);
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (piVar4 != *(int **)(param_1 + 0x70)) {
    do {
      ExceptionList = ppvVar1;
      bVar2 = std::operator==((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)(piVar4 + 10),param_2);
      if ((((bVar2) && (*piVar4 == param_4)) &&
          (bVar2 = std::operator==((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    *)(piVar4 + 3),param_7), bVar2)) &&
         ((piVar4[0x11] == param_8 && (piVar4[2] == param_6)))) {
        *(undefined1 *)((int)piVar4 + 0x49) = 0;
        ExceptionList = local_c;
        return 0;
      }
      piVar4 = piVar4 + 0x13;
      ppvVar1 = ExceptionList;
    } while (piVar4 != *(int **)(param_1 + 0x70));
  }
  iVar3 = *(int *)(param_1 + 0x6c);
  if (iVar3 != *(int *)(param_1 + 0x70)) {
    do {
      *(undefined1 *)(iVar3 + 0x48) = 0;
      iVar3 = iVar3 + 0x4c;
    } while (iVar3 != *(int *)(param_1 + 0x70));
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
  local_5c = 0;
  local_58 = 0;
  local_18 = 0;
  local_54 = 0;
  local_12 = 0;
  local_4 = 1;
  local_13 = 0;
  local_14 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_34,param_2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_50,param_7);
  local_5c = param_4;
  local_18 = param_8;
  local_58 = param_5;
  local_54 = param_6;
  local_12 = param_3;
  FUN_004e1aa0(&local_5c);
  local_4 = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
  ExceptionList = local_c;
  return 1;
}




/* Function: FUN_004e1e60 */

int __fastcall FUN_004e1e60(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}




/* Function: FUN_004e1e80 */

int __fastcall FUN_004e1e80(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
}




/* Function: FUN_004e1eb0 */

void FUN_004e1eb0(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e572;
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




/* Function: FUN_004e1f30 */

void FUN_004e1f30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  while (param_2 != param_3) {
    param_4[-3] = param_3[-3];
    param_4[-2] = param_3[-2];
    param_4[-1] = param_3[-1];
    param_3 = param_3 + -3;
    param_4 = param_4 + -3;
  }
  *param_1 = param_4;
  return;
}




/* Function: FUN_004e1f70 */

void FUN_004e1f70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_3 = param_3 + 3;
  }
  return;
}




/* Function: FUN_004e1fb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004e1fb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_retaddr;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  int local_23c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_238 [28];
  undefined1 local_21c [64];
  undefined1 local_1dc [12];
  undefined1 local_1d0 [64];
  undefined1 local_190 [64];
  undefined1 local_150 [64];
  char local_110 [256];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e58b;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  if (*(int *)(param_1 + 0x88) != 0) {
    local_23c = (*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88)) / 0xc;
    if (local_23c != 0) {
      piVar1 = (int *)(*(int *)(param_1 + 0x88) + *(int *)(param_1 + 0x94) * 0xc);
      ExceptionList = &local_c;
      uVar3 = FUN_004cf110();
      *(undefined4 *)(*piVar1 + 3) = uVar3;
      uVar3 = FUN_004cf110();
      *(undefined4 *)(*piVar1 + 7) = uVar3;
      _snprintf(local_110,0x100,"splash#%d",*(undefined4 *)(param_1 + 0x94));
      FUN_0041c940();
      uVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_238,local_110);
      iVar4 = FUN_0041f960(uVar3);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_238);
      if (iVar4 != 0) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  (local_238,"splash");
        FUN_00410a00(0,local_238,param_3);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_238);
      }
      _eh_vector_constructor_iterator_
                (local_21c,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
      FUN_00407310(0x3f800000);
      local_4 = 0;
      local_248 = 0;
      local_244 = 0x3f800000;
      local_240 = 0;
      uVar3 = FUN_0041d550(local_1dc,param_6,param_7);
      FUN_00496e69(local_21c,param_6,uVar3,&local_248);
      uVar3 = FUN_00434b40(local_190);
      uVar5 = FUN_00547224(local_1d0,_DAT_005b9004 * _DAT_005888f4);
      uVar3 = FUN_0041d7a0(local_150,uVar5,uVar3);
      FUN_0041d670(uVar3);
      _eh_vector_destructor_iterator_(local_150,0x10,4,FUN_00407150);
      _eh_vector_destructor_iterator_(local_1d0,0x10,4,FUN_00407150);
      _eh_vector_destructor_iterator_(local_190,0x10,4,FUN_00407150);
      FUN_0042ede0(local_21c);
      cVar2 = FUN_0042f900(param_7,param_2);
      if (cVar2 == '\0') {
        (**(code **)(*(int *)piVar1[1] + 8))(0);
      }
      else {
        (**(code **)(*(int *)piVar1[1] + 8))(1);
      }
      uVar7 = *(int *)(param_1 + 0x94) + 1;
      *(uint *)(param_1 + 0x94) = uVar7;
      if (*(int *)(param_1 + 0x88) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88)) / 0xc;
      }
      local_4 = 0xffffffff;
      *(uint *)(param_1 + 0x94) = uVar7 % uVar6;
      _eh_vector_destructor_iterator_(local_21c,0x10,4,FUN_00407150);
    }
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004e22a0 */

void FUN_004e22a0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
    }
    param_1 = param_1 + 3;
  }
  return;
}




/* Function: FUN_004e22e0 */

undefined4 __fastcall FUN_004e22e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 != *(int *)(param_1 + 0x8c)) {
    do {
      (**(code **)(**(int **)(iVar1 + 4) + 0x10))();
      iVar1 = iVar1 + 0xc;
    } while (iVar1 != *(int *)(param_1 + 0x8c));
  }
  return 1;
}




/* Function: FUN_004e2310 */

undefined4 __thiscall FUN_004e2310(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 != *(int *)(param_1 + 0x8c)) {
    do {
      (**(code **)(**(int **)(iVar1 + 4) + 0x14))(param_2,param_3);
      iVar1 = iVar1 + 0xc;
    } while (iVar1 != *(int *)(param_1 + 0x8c));
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  return 1;
}




/* Function: FUN_004e28f0 */

int __thiscall
FUN_004e28f0(undefined4 *param_1,undefined4 **param_2,undefined1 *param_3,undefined4 **param_4)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_3;
  puVar2 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057e5a0;
  local_10 = ExceptionList;
  local_20 = *param_4;
  local_1c = param_4[1];
  iVar4 = param_1[1];
  local_18 = (int)param_4[2];
  local_14 = &stack0xffffffd4;
  if (iVar4 == 0) {
    puVar6 = (undefined1 *)0x0;
    iVar7 = local_18;
  }
  else {
    iVar7 = (param_1[3] - iVar4) * 0x2aaaaaab;
    puVar6 = (undefined1 *)((param_1[3] - iVar4) / 0xc);
  }
  if (param_3 != (undefined1 *)0x0) {
    if (iVar4 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (param_1[2] - iVar4) / 0xc;
    }
    if ((undefined1 *)(0x15555555U - iVar7) < param_3) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffd4;
      iVar4 = FUN_004e1eb0();
      ExceptionList = local_10;
      return iVar4;
    }
    if (iVar4 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (param_1[2] - iVar4) / 0xc;
    }
    if (puVar6 < param_3 + iVar7) {
      if ((undefined1 *)(0x15555555 - ((uint)puVar6 >> 1)) < puVar6) {
        puVar6 = (undefined1 *)0x0;
      }
      else {
        puVar6 = puVar6 + ((uint)puVar6 >> 1);
      }
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (param_1[2] - iVar4) / 0xc;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xffffffd4;
      if (puVar6 < param_3 + iVar4) {
        ExceptionList = &local_10;
        local_14 = &stack0xffffffd4;
        iVar4 = FUN_004e1e60();
        puVar6 = puVar3 + iVar4;
      }
      local_34 = (undefined4 *)0x4e2a0c;
      param_4 = (undefined4 **)FUN_00493c27();
      local_8 = 0;
      local_38 = param_4;
      local_34 = param_1;
      param_3 = (undefined1 *)FUN_004e1f70(param_1[1],param_2);
      local_38 = &local_20;
      local_34 = param_1;
      FUN_004e22a0(param_3,puVar3);
      local_38 = (undefined4 *)((int)param_3 + (int)puVar3 * 0xc);
      local_34 = param_1;
      FUN_004e1f70(param_2,param_1[2]);
      pvVar1 = (void *)param_1[1];
      if (pvVar1 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (param_1[2] - (int)pvVar1) / 0xc;
      }
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        local_34 = (undefined4 *)&UNK_004e2aa0;
        operator_delete(pvVar1);
      }
      param_1[3] = param_4 + (int)puVar6 * 3;
      param_1[2] = param_4 + (int)(puVar3 + iVar4) * 3;
      param_1[1] = param_4;
      ExceptionList = local_10;
      return (int)param_4;
    }
    param_4 = (undefined4 **)param_1[2];
    local_34 = param_4;
    if ((undefined1 *)(((int)param_4 - (int)param_2) / 0xc) < param_3) {
      local_38 = param_2;
      ExceptionList = &local_10;
      param_2 = (undefined4 **)((int)param_3 * 0xc);
      param_4 = &local_38;
      local_14 = &stack0xffffffd4;
      FUN_004364b0();
      local_38 = (undefined4 *)param_1[2];
      local_34 = (undefined4 *)(puVar3 + -(((int)local_38 - (int)puVar2) / 0xc));
      local_8 = 2;
      FUN_004369c0();
      iVar4 = param_1[2];
      param_1[2] = iVar4 + (int)param_2;
      local_34 = (undefined4 *)((iVar4 + (int)param_2) - (int)param_2);
    }
    else {
      param_2 = param_4 + (int)param_3 * -3;
      ExceptionList = &local_10;
      local_38 = param_2;
      uVar5 = FUN_004364b0();
      param_1[2] = uVar5;
      param_3 = &stack0xffffffd0;
      param_4 = &local_34;
      local_34 = param_2;
      local_38 = puVar2;
      param_2 = &local_38;
      FUN_0046c0e0(&param_2);
      local_34 = puVar2 + (int)puVar3 * 3;
    }
    param_2 = &local_38;
    local_38 = puVar2;
    iVar7 = FUN_00434fd0();
  }
  ExceptionList = local_10;
  return iVar7;
}




/* Function: FUN_004e2bf0 */

void __thiscall FUN_004e2bf0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0xc != 0) {
      iVar1 = (param_3 - iVar1) / 0xc;
      goto LAB_004e2c35;
    }
  }
  iVar1 = 0;
LAB_004e2c35:
  FUN_004e28f0(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0xc;
  return;
}




/* Function: FUN_004e2c60 */

void __thiscall FUN_004e2c60(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0xc) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0xc))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_004e22a0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0xc;
    return;
  }
  FUN_004e2bf0(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_004e2cf0 */

int __thiscall FUN_004e2cf0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057e5b0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)(param_2 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0xc;
  }
  cVar1 = FUN_0046bf30(iVar3);
  if (cVar1 != '\0') {
    local_8 = 0;
    uVar2 = FUN_0046c370(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(param_1 + 4),param_1,param_2);
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}




/* Function: FUN_004e3020 */

void __thiscall FUN_004e3020(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  if ((-1 < (int)param_3) && (*(int *)(param_1 + 0x9c) != 0)) {
    if (param_3 < (uint)((*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c)) / 0x1c)) {
      *(undefined4 *)(param_3 * 0x1c + 0x14 + *(int *)(param_1 + 0x9c)) = 0;
      FUN_00478780(param_4);
    }
  }
  return;
}




/* Function: FUN_004e3080 */

void FUN_004e3080(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    iVar1 = param_3 + -0x1c;
    iVar2 = param_4 + -0x1c;
    FUN_00484320(iVar1);
    *(undefined4 *)(param_4 + -0xc) = *(undefined4 *)(param_3 + -0xc);
    *(undefined4 *)(param_4 + -8) = *(undefined4 *)(param_3 + -8);
    *(undefined4 *)(param_4 + -4) = *(undefined4 *)(param_3 + -4);
    param_3 = iVar1;
    param_4 = iVar2;
  } while (iVar1 != param_2);
  *param_1 = iVar2;
  return;
}




/* Function: FUN_004e30d0 */

void FUN_004e30d0(int param_1,int param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_00484320(param_3);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 0x18);
  }
  return;
}




/* Function: FUN_004e3110 */

undefined4 FUN_004e3110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004e3080(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_004e3150 */

int FUN_004e3150(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057e5d1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_004e2cf0(param_1);
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    }
    param_3 = param_3 + 0x1c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}




/* Function: FUN_004e3230 */

void FUN_004e3230(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057e5f1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_004e2cf0(param_3);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 0x14);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    }
    param_1 = param_1 + 0x1c;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}




/* Function: FUN_004e3310 */

void __thiscall
FUN_004e3310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004e3150(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_004e3340 */

int __thiscall FUN_004e3340(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_004e3230(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x1c + param_2;
}




/* Function: FUN_004e3370 */

void FUN_004e3370(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_00532a60();
  }
  return;
}




/* Function: FUN_004e33a0 */

void __thiscall FUN_004e33a0(int param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  void *pvVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *local_50;
  undefined *local_4c;
  undefined1 local_38 [4];
  void *local_34;
  void *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057e608;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_4c = (undefined *)0x4e33d2;
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_004e2cf0();
  local_28 = *(undefined4 *)(param_4 + 0x10);
  local_24 = *(undefined4 *)(param_4 + 0x14);
  local_20 = *(undefined4 *)(param_4 + 0x18);
  iVar5 = *(int *)(param_1 + 4);
  local_8 = 0;
  if (iVar5 == 0) {
    param_4 = 0;
  }
  else {
    param_4 = (*(int *)(param_1 + 0xc) - iVar5) / 0x1c;
  }
  if (param_3 != 0) {
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_1 + 8) - iVar5) / 0x1c;
    }
    if (0x9249249U - iVar4 < param_3) {
      FUN_004e1eb0();
    }
    else {
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_1 + 8) - iVar5) / 0x1c;
      }
      if (param_4 < iVar4 + param_3) {
        if (0x9249249 - (param_4 >> 1) < param_4) {
          param_4 = 0;
        }
        else {
          param_4 = param_4 + (param_4 >> 1);
        }
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (*(int *)(param_1 + 8) - iVar5) / 0x1c;
        }
        if (param_4 < iVar5 + param_3) {
          iVar5 = FUN_004e1e80();
          param_4 = iVar5 + param_3;
        }
        local_4c = (undefined *)0x4e34dd;
        puVar2 = (undefined1 *)FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        local_50 = puVar2;
        local_4c = (undefined *)param_1;
        iVar5 = FUN_004e3150(*(undefined4 *)(param_1 + 4));
        local_50 = local_38;
        local_4c = (undefined *)param_1;
        FUN_004e3230(iVar5);
        local_50 = (undefined1 *)(iVar5 + param_3 * 0x1c);
        local_4c = (undefined *)param_1;
        FUN_004e3150(param_2);
        if (*(int *)(param_1 + 4) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
        }
        local_4c = *(undefined **)(param_1 + 4);
        if (local_4c != (undefined *)0x0) {
          local_50 = (undefined1 *)0x4e3581;
          FUN_004e3370();
                    /* WARNING: Subroutine does not return */
          local_4c = &UNK_004e358a;
          operator_delete(*(void **)(param_1 + 4));
        }
        *(undefined1 **)(param_1 + 0xc) = puVar2 + param_4 * 0x1c;
        *(undefined1 **)(param_1 + 8) = puVar2 + (param_3 + iVar5) * 0x1c;
        *(undefined1 **)(param_1 + 4) = puVar2;
      }
      else {
        local_4c = *(undefined **)(param_1 + 8);
        if ((uint)(((int)local_4c - (int)param_2) / 0x1c) < param_3) {
          local_1c = (undefined1 *)&local_50;
          local_50 = param_2;
          FUN_004e3310();
          local_50 = *(undefined1 **)(param_1 + 8);
          local_4c = (undefined *)(param_3 - (*(int *)(param_1 + 8) - (int)param_2) / 0x1c);
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_004e3340();
          iVar5 = *(int *)(param_1 + 8) + param_3 * 0x1c;
          *(int *)(param_1 + 8) = iVar5;
          local_4c = (undefined *)(iVar5 + param_3 * -0x1c);
          local_8 = 0;
        }
        else {
          puVar2 = local_4c + param_3 * -0x1c;
          local_50 = puVar2;
          local_1c = local_4c;
          uVar3 = FUN_004e3310();
          *(undefined4 *)(param_1 + 8) = uVar3;
          local_50 = param_2;
          local_4c = puVar2;
          FUN_004e3110();
          local_4c = param_2 + param_3 * 0x1c;
        }
        local_50 = param_2;
        FUN_004e30d0();
      }
    }
  }
  pvVar1 = local_34;
  if (local_34 != (void *)0x0) {
    for (; pvVar1 != local_30; pvVar1 = (void *)((int)pvVar1 + 0xc)) {
      local_4c = (undefined *)0x4e370b;
      FUN_004506b0();
    }
                    /* WARNING: Subroutine does not return */
    local_4c = (undefined *)0x4e3718;
    operator_delete(local_34);
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004e3730 */

void __thiscall FUN_004e3730(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x1c != 0) {
      iVar1 = (param_3 - iVar1) / 0x1c;
      goto LAB_004e377b;
    }
  }
  iVar1 = 0;
LAB_004e377b:
  FUN_004e33a0(param_3,1,param_4);
  *param_2 = iVar1 * 0x1c + *(int *)(param_1 + 4);
  return;
}




/* Function: FUN_004e37f0 */

void __fastcall FUN_004e37f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    FUN_00532a60();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_004e3800 */

void __thiscall FUN_004e3800(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x1c) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x1c))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_004e3230(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x1c;
    return;
  }
  FUN_004e3730(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_004e3890 */

undefined4 * __fastcall FUN_004e3890(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057e636;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00590b78;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x25] = 0;
  param_1[0x2a] = 0;
  param_1[0x20] = 0xbd;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_004e3910 */

void __fastcall FUN_004e3910(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_0057e664;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00590b78;
  puVar1 = (undefined4 *)param_1[0x22];
  local_4 = 2;
  local_10 = param_1;
  if (puVar1 != (undefined4 *)param_1[0x23]) {
    if ((int *)puVar1[1] != (int *)0x0) {
      (**(code **)(*(int *)puVar1[1] + 0xc))(1);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar1);
  }
  if ((void *)param_1[0x22] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x22]);
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  iVar4 = param_1[0x27];
  if (iVar4 != 0) {
    iVar2 = param_1[0x28];
    for (; iVar4 != iVar2; iVar4 = iVar4 + 0x1c) {
      FUN_00532a60();
    }
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x27]);
  }
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if ((void *)param_1[0x22] == (void *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    *param_1 = &PTR_LAB_00583740;
    local_4 = 0xffffffff;
    if ((void *)param_1[0x1b] == (void *)0x0) {
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      puVar1 = (undefined4 *)param_1[0x18];
      if (puVar1 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *puVar1;
      }
      FUN_004f67b0(&local_10,uVar3,puVar1);
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_1[0x18]);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x1b]);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_1[0x22]);
}




/* Function: FUN_004e3ac0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_004e3ac0(int param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_28 [4];
  void *local_24;
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e678;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x9c) == 0) ||
     ((uint)((*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c)) / 0x1c) < 0x20)) {
    local_24 = (void *)0x0;
    local_20 = (void *)0x0;
    local_1c = 0;
    local_10 = param_4 * _DAT_00583340;
    local_18 = param_3;
    local_4 = 0;
    local_14 = 0;
    ExceptionList = &local_c;
    FUN_00478780(param_5);
    FUN_004e3800(local_28);
    pvVar3 = local_20;
    pvVar1 = local_24;
    if (*(int *)(param_1 + 0x9c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c)) / 0x1c;
    }
    *(int *)(param_1 + 0xa8) = iVar5 + -1;
    pvVar2 = local_24;
    if (local_24 != (void *)0x0) {
      for (; pvVar2 != pvVar3; pvVar2 = (void *)((int)pvVar2 + 0xc)) {
        FUN_004506b0(0);
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
  }
  else {
    uVar6 = *(int *)(param_1 + 0xa8) + 1;
    ExceptionList = &local_c;
    *(uint *)(param_1 + 0xa8) = uVar6;
    if (*(int *)(param_1 + 0x9c) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c)) / 0x1c;
    }
    param_4 = param_4 * _DAT_00583340;
    uVar6 = uVar6 % uVar4;
    *(uint *)(param_1 + 0xa8) = uVar6;
    *(undefined4 *)(uVar6 * 0x1c + 0x10 + *(int *)(param_1 + 0x9c)) = param_3;
    *(float *)(*(int *)(param_1 + 0xa8) * 0x1c + 0x18 + *(int *)(param_1 + 0x9c)) = param_4;
    *(undefined4 *)(*(int *)(param_1 + 0xa8) * 0x1c + 0x14 + *(int *)(param_1 + 0x9c)) = 0;
    iVar5 = *(int *)(param_1 + 0xa8) * 0x1c;
    pvVar1 = *(void **)(iVar5 + 4 + *(int *)(param_1 + 0x9c));
    iVar5 = iVar5 + *(int *)(param_1 + 0x9c);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(undefined4 *)(iVar5 + 4) = 0;
    *(undefined4 *)(iVar5 + 8) = 0;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    FUN_00478780(param_5);
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 0xa8);
}




/* Function: FUN_004e3ca0 */

void * __thiscall FUN_004e3ca0(void *param_1,byte param_2)

{
  FUN_004e3910();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004e3cc0 */

void FUN_004e3cc0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x20) != 0) || (*(int *)(param_1 + 0x2c) != 0)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(iVar4 + 0x20 + param_1);
      iVar4 = iVar4 + 0xc;
      if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 0x14), piVar2 != (int *)0x0)) {
        if (param_1 != *piVar2) {
          do {
            piVar3 = piVar2;
            piVar2 = (int *)piVar3[2];
            if (piVar2 == (int *)0x0) goto LAB_004e3d00;
          } while (param_1 != *piVar2);
          if (piVar3 != (int *)0x0) {
            piVar3[2] = piVar2[2];
            goto LAB_004e3d00;
          }
        }
        *(int *)(iVar1 + 0x14) = piVar2[2];
      }
LAB_004e3d00:
    } while (iVar4 < 0x18);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (param_2 == 0) {
    iVar4 = 0;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
    param_2 = param_3;
  }
  else {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffd;
    iVar4 = param_3;
  }
  *(int *)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 0x2c) = iVar4;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x14);
    *(int *)(param_2 + 0x14) = param_1 + 0x28;
  }
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar4 + 0x14);
  *(int *)(iVar4 + 0x14) = param_1 + 0x1c;
  return;
}




/* Function: FUN_004e3dac */

int __fastcall FUN_004e3dac(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    iVar1 = FUN_004e4ef8(*param_1);
  }
  else {
    iVar1 = FUN_004eb868(*param_1);
    *param_2 = *param_2 + 1;
  }
  FUN_004e4850();
  *(undefined4 **)(iVar1 + 0x14) = param_1;
  if (param_2 != (int *)0x0) {
    *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 1;
  }
  if ((code *)param_1[1] != (code *)0x0) {
    (*(code *)param_1[1])(iVar1);
  }
  *(undefined4 *)(iVar1 + 0x34) = 0;
  return iVar1;
}




/* Function: FUN_004e3e0c */

undefined4 * FUN_004e3e0c(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004e4ef8(0x138);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_004e4998(puVar1 + 8);
  }
  *puVar1 = param_1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  FUN_004e4a30(puVar1 + 8,0x3f800000,0,0,0,0x3f800000,0x3f800000,0x3f800000,0,0,0);
  FUN_004ec1bc(puVar1 + 0x19,0xc);
  puVar1[0x19] = 0x3f800000;
  puVar1[0x1e] = 0x3f800000;
  puVar1[0x23] = 0x3f800000;
  puVar1[0x25] = 0x3f800000;
  FUN_004ec1bc(puVar1 + 0x26,4);
  FUN_004ec1bc(puVar1 + 0x2a,4);
  puVar1[0x2a] = 0x3f800000;
  FUN_004edb30(puVar1 + 0x2e);
  FUN_004ec1bc(puVar1 + 0x3a,4);
  FUN_004ec1bc(puVar1 + 0x3e,4);
  FUN_004ec1bc(puVar1 + 0x42,4);
  FUN_004ec1bc(puVar1 + 0x46,4);
  FUN_004ec1bc(puVar1 + 0x4a,4);
  puVar1[1] = *param_1;
  puVar1[2] = param_1;
  if (*param_1 != 0) {
    *(undefined4 **)(*param_1 + 8) = puVar1 + 1;
  }
  *param_1 = (int)puVar1;
  param_1[2] = param_1[2] + 1;
  return puVar1;
}




/* Function: FUN_004e3f58 */

undefined4 * FUN_004e3f58(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004e4ef8(0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_004ec1bc(puVar1 + 4,4);
  puVar1[8] = 0x3e4ccccd;
  puVar1[9] = 0x3727c5ac;
  return puVar1;
}




/* Function: FUN_004e3f90 */

void FUN_004e3f90(void)

{
  FUN_004e3fa4();
  return;
}




/* Function: FUN_004e3fa4 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004e3fa4(void)

{
  int *piVar1;
  int iVar2;
  int *in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float10 in_ST0;
  double local_3c;
  int local_34;
  int local_30;
  int *local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  local_3c = (double)in_ST0;
  if (0 < in_EAX[2]) {
    uVar6 = (int)&local_3c - (in_EAX[2] * 4 + 0xf) & 0xfffffff0;
    uVar9 = uVar6 - 1 | 0xf;
    local_34 = uVar9 + 1;
    iVar3 = in_EAX[3];
    *(undefined4 *)(uVar6 - 4) = 0x4e3ff4;
    uVar7 = uVar6 - (iVar3 * 4 + 0xf) & 0xfffffff0;
    local_28 = uVar7 - 1 | 0xf;
    local_30 = local_28 + 1;
    for (iVar3 = *in_EAX; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
    for (iVar3 = in_EAX[1]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
    iVar3 = in_EAX[3];
    if (in_EAX[2] <= in_EAX[3]) {
      iVar3 = in_EAX[2];
    }
    *(undefined4 *)(uVar7 - 4) = 0x4e4046;
    uVar8 = uVar7 - (iVar3 * 4 + 0xf) & 0xfffffff0;
    local_24 = uVar8 - 1 | 0xf;
    local_2c = in_EAX;
    for (iVar3 = *in_EAX; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      if ((*(int *)(iVar3 + 0x10) == 0) && ((*(uint *)(iVar3 + 0x18) & 4) == 0)) {
        *(undefined4 *)(iVar3 + 0x10) = 1;
        iVar4 = 0;
        *(int *)(uVar9 + 1) = iVar3;
        local_1c = 0;
        iVar5 = iVar3;
        iVar10 = 1;
        while( true ) {
          for (piVar1 = *(int **)(iVar5 + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
            iVar5 = iVar4;
            if (*(int *)(*piVar1 + 0x10) == 0) {
              *(undefined4 *)(*piVar1 + 0x10) = 1;
              *(int *)(local_28 + 1 + local_1c * 4) = *piVar1;
              iVar2 = piVar1[1];
              local_1c = local_1c + 1;
              if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) == 0)) {
                *(undefined4 *)(iVar2 + 0x10) = 1;
                iVar5 = iVar4 + 1;
                *(int *)(local_24 + 1 + iVar4 * 4) = piVar1[1];
              }
            }
            iVar4 = iVar5;
            local_18 = uVar9;
            local_14 = iVar10;
          }
          if (iVar4 < 1) break;
          iVar4 = iVar4 + -1;
          iVar5 = *(int *)(local_24 + 1 + iVar4 * 4);
          *(int *)(uVar9 + 1 + iVar10 * 4) = iVar5;
          iVar10 = iVar10 + 1;
        }
        *(int **)(uVar8 - 0x18) = local_2c;
        *(int *)(uVar8 - 0x14) = local_34;
        *(int *)(uVar8 - 0x10) = iVar10;
        *(int *)(uVar8 - 0xc) = local_30;
        *(int *)(uVar8 - 8) = local_1c;
        *(float *)(uVar8 - 4) = (float)local_3c;
        *(undefined4 *)(uVar8 - 0x1c) = 0x4e4146;
        local_20 = iVar3;
        FUN_004edcf4();
        iVar5 = 0;
        if (0 < iVar10) {
          if (5 < iVar10) {
            do {
              *(undefined4 *)(*(int *)(uVar9 + 1 + iVar5 * 4) + 0x10) = 1;
              *(undefined4 *)(*(int *)(uVar9 + 5 + iVar5 * 4) + 0x10) = 1;
              *(undefined4 *)(*(int *)(uVar9 + 9 + iVar5 * 4) + 0x10) = 1;
              *(undefined4 *)(*(int *)(uVar9 + 0xd + iVar5 * 4) + 0x10) = 1;
              iVar4 = iVar5 * 4;
              iVar5 = iVar5 + 5;
              *(undefined4 *)(*(int *)(uVar9 + 0x11 + iVar4) + 0x10) = 1;
            } while (iVar5 <= iVar10 + -6);
          }
          do {
            iVar4 = iVar5 * 4;
            iVar5 = iVar5 + 1;
            *(undefined4 *)(*(int *)(uVar9 + 1 + iVar4) + 0x10) = 1;
          } while (iVar5 < iVar10);
        }
        iVar5 = 0;
        if (0 < local_1c) {
          if (5 < local_1c) {
            do {
              *(undefined4 *)(*(int *)(local_28 + 1 + iVar5 * 4) + 0x10) = 1;
              *(undefined4 *)(*(int *)(local_28 + 5 + iVar5 * 4) + 0x10) = 1;
              *(undefined4 *)(*(int *)(local_28 + 9 + iVar5 * 4) + 0x10) = 1;
              *(undefined4 *)(*(int *)(local_28 + 0xd + iVar5 * 4) + 0x10) = 1;
              iVar4 = iVar5 * 4;
              iVar5 = iVar5 + 5;
              *(undefined4 *)(*(int *)(local_28 + 0x11 + iVar4) + 0x10) = 1;
              local_18 = uVar9;
            } while (iVar5 <= local_1c + -6);
          }
          do {
            iVar4 = iVar5 * 4;
            iVar5 = iVar5 + 1;
            *(undefined4 *)(*(int *)(local_28 + 1 + iVar4) + 0x10) = 1;
          } while (iVar5 < local_1c);
        }
      }
    }
    return;
  }
  return;
}




/* Function: FUN_004e4204 */

void FUN_004e4204(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




/* Function: FUN_004e4210 */

void FUN_004e4210(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}




/* Function: FUN_004e421c */

void FUN_004e421c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  return;
}




/* Function: FUN_004e4238 */

void FUN_004e4238(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = *param_1;
  while (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 4);
    FUN_004e4ed0(iVar3,0x138);
    iVar3 = iVar1;
  }
  puVar4 = (undefined4 *)param_1[1];
  while (puVar4 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar4[1];
    if ((puVar4[6] & 1) == 0) {
      FUN_004e4ed0(puVar4,*(undefined4 *)puVar4[5]);
      puVar4 = puVar2;
    }
    else {
      *puVar4 = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      FUN_004edb88(0,"warning: destroying world containing grouped joints");
      puVar4 = puVar2;
    }
  }
  FUN_004e4ed0(param_1,0x28);
  return;
}




/* Function: FUN_004e42b8 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004e42b8(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  int *local_18;
  uint local_14;
  
  uVar7 = (int)&local_18 - (*param_1 * 4 + 0xf) & 0xfffffff0;
  uVar8 = uVar7 - 1 | 0xf;
  *(undefined4 *)(uVar7 - 4) = 0x4e42ed;
  iVar2 = FUN_004eb818();
  iVar6 = *param_1;
  piVar5 = param_1 + 1;
  if (0 < iVar6) {
    iVar4 = 0;
    local_18 = param_1 + 1;
    do {
      *(int *)(uVar8 + 1 + iVar4 * 4) = iVar2;
      *(undefined4 *)(uVar7 - 4) = **(undefined4 **)(iVar2 + 0x14);
      *(undefined4 *)(uVar7 - 8) = 0x4e430b;
      iVar2 = FUN_004eb7d8();
      iVar4 = iVar4 + 1;
      iVar6 = *param_1;
      piVar5 = local_18;
    } while (iVar4 < iVar6);
  }
  if (-1 < iVar6 + -1) {
    uVar3 = uVar8 + 5 + (iVar6 + -1) * 4;
    do {
      piVar1 = *(int **)(uVar3 - 4);
      if (*piVar1 != 0) {
        iVar6 = 0;
        do {
          iVar2 = *(int *)(iVar6 + 0x20 + (int)piVar1);
          iVar6 = iVar6 + 0xc;
          if ((iVar2 != 0) && (piVar9 = *(int **)(iVar2 + 0x14), piVar9 != (int *)0x0)) {
            if (piVar1 != (int *)*piVar9) {
              do {
                piVar10 = piVar9;
                piVar9 = (int *)piVar10[2];
                if (piVar9 == (int *)0x0) goto LAB_004e4352;
              } while (piVar1 != (int *)*piVar9);
              if (piVar10 != (int *)0x0) {
                piVar10[2] = piVar9[2];
                goto LAB_004e4352;
              }
            }
            *(int *)(iVar2 + 0x14) = piVar9[2];
          }
LAB_004e4352:
        } while (iVar6 < 0x18);
        piVar1[8] = 0;
        piVar1[9] = 0;
        piVar1[0xb] = 0;
        piVar1[0xc] = 0;
        iVar6 = *(int *)(uVar3 - 4);
        uVar11 = 0;
        if (*(int *)(iVar6 + 4) != 0) {
          *(undefined4 *)(*(int *)(iVar6 + 4) + 8) = *(undefined4 *)(iVar6 + 8);
          uVar11 = *(undefined4 *)(iVar6 + 4);
        }
        **(undefined4 **)(iVar6 + 8) = uVar11;
        *(undefined4 *)(iVar6 + 4) = 0;
        *(undefined4 *)(iVar6 + 8) = 0;
        piVar1 = (int *)(**(int **)(uVar3 - 4) + 0xc);
        *piVar1 = *piVar1 + -1;
        local_14 = uVar8 + 5;
      }
      uVar3 = uVar3 - 4;
      local_18 = piVar5;
    } while (uVar8 + 5 <= uVar3);
  }
  *param_1 = 0;
  *(undefined4 *)(uVar7 - 4) = 0x4e43aa;
  FUN_004eb844();
  return;
}




/* Function: FUN_004e43d0 */

void __thiscall FUN_004e43d0(undefined4 param_1,uint param_2)

{
  FUN_004e43f4();
  if ((param_2 & 1) != 0) {
    FUN_004e4ed0(param_1,0x14);
  }
  return;
}




/* Function: FUN_004e43f4 */

void FUN_004e43f4(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0058109c;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_004eb94c();
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004e4448 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004e4448(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  int *local_18;
  uint local_14;
  
  uVar7 = (int)&local_18 - (*param_1 * 4 + 0xf) & 0xfffffff0;
  uVar8 = uVar7 - 1 | 0xf;
  *(undefined4 *)(uVar7 - 4) = 0x4e447d;
  iVar2 = FUN_004eb818();
  iVar6 = *param_1;
  piVar5 = param_1 + 1;
  if (0 < iVar6) {
    iVar4 = 0;
    local_18 = param_1 + 1;
    do {
      *(int *)(uVar8 + 1 + iVar4 * 4) = iVar2;
      *(undefined4 *)(uVar7 - 4) = **(undefined4 **)(iVar2 + 0x14);
      *(undefined4 *)(uVar7 - 8) = 0x4e449b;
      iVar2 = FUN_004eb7d8();
      iVar4 = iVar4 + 1;
      iVar6 = *param_1;
      piVar5 = local_18;
    } while (iVar4 < iVar6);
  }
  if (-1 < iVar6 + -1) {
    uVar3 = uVar8 + 5 + (iVar6 + -1) * 4;
    do {
      piVar1 = *(int **)(uVar3 - 4);
      if (*piVar1 != 0) {
        iVar6 = 0;
        do {
          iVar2 = *(int *)(iVar6 + 0x20 + (int)piVar1);
          iVar6 = iVar6 + 0xc;
          if ((iVar2 != 0) && (piVar9 = *(int **)(iVar2 + 0x14), piVar9 != (int *)0x0)) {
            if (piVar1 != (int *)*piVar9) {
              do {
                piVar10 = piVar9;
                piVar9 = (int *)piVar10[2];
                if (piVar9 == (int *)0x0) goto LAB_004e44e2;
              } while (piVar1 != (int *)*piVar9);
              if (piVar10 != (int *)0x0) {
                piVar10[2] = piVar9[2];
                goto LAB_004e44e2;
              }
            }
            *(int *)(iVar2 + 0x14) = piVar9[2];
          }
LAB_004e44e2:
        } while (iVar6 < 0x18);
        piVar1[8] = 0;
        piVar1[9] = 0;
        piVar1[0xb] = 0;
        piVar1[0xc] = 0;
        iVar6 = *(int *)(uVar3 - 4);
        uVar11 = 0;
        if (*(int *)(iVar6 + 4) != 0) {
          *(undefined4 *)(*(int *)(iVar6 + 4) + 8) = *(undefined4 *)(iVar6 + 8);
          uVar11 = *(undefined4 *)(iVar6 + 4);
        }
        **(undefined4 **)(iVar6 + 8) = uVar11;
        *(undefined4 *)(iVar6 + 4) = 0;
        *(undefined4 *)(iVar6 + 8) = 0;
        piVar1 = (int *)(**(int **)(uVar3 - 4) + 0xc);
        *piVar1 = *piVar1 + -1;
        local_14 = uVar8 + 5;
      }
      uVar3 = uVar3 - 4;
      local_18 = piVar5;
    } while (uVar8 + 5 <= uVar3);
  }
  *param_1 = 0;
  *(undefined4 *)(uVar7 - 4) = 0x4e453a;
  FUN_004eb844();
  if (param_1 != (int *)0x0) {
    *(undefined4 *)(uVar7 - 4) = 1;
    *(undefined4 *)(uVar7 - 8) = 0x4e4547;
    FUN_004e43d0();
  }
  return;
}




/* Function: FUN_004e4574 */

void FUN_004e4574(void)

{
  undefined4 *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005810ba;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = (undefined4 *)FUN_004e4ef8(0x14);
  if (local_20 == (undefined4 *)0x0) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    local_8 = 0;
    FUN_004eb974();
  }
  *local_20 = 0;
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004e45fc */

void FUN_004e45fc(void)

{
  FUN_004e3dac();
  return;
}




/* Function: FUN_004e4618 */

void FUN_004e4618(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_004e3dac();
  puVar3 = (undefined4 *)(iVar1 + 0x3c);
  for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}




/* Function: FUN_004e4644 */

bool FUN_004e4644(int param_1)

{
  return (*(uint *)(param_1 + 0x18) & 4) == 0;
}




/* Function: FUN_004e4658 */

void FUN_004e4658(int param_1)

{
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 4;
  return;
}




/* Function: FUN_004e4668 */

void FUN_004e4668(int param_1)

{
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb;
  return;
}




/* Function: FUN_004e46b0 */

void FUN_004e46b0(int param_1,float param_2,float param_3,float param_4)

{
  *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x108) + param_2;
  *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) + param_3;
  *(float *)(param_1 + 0x110) = *(float *)(param_1 + 0x110) + param_4;
  return;
}




/* Function: FUN_004e46e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e46e8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x20);
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  iVar1 = FUN_004ec20c(param_1 + 0x34,param_1 + 100,3);
  if (iVar1 == 0) {
    FUN_004edb30(param_1 + 100);
  }
  *(float *)(param_1 + 0x94) = _DAT_005ba304 / *(float *)(param_1 + 0x20);
  return;
}




/* Function: FUN_004e4730 */

int FUN_004e4730(int param_1)

{
  return param_1 + 0xe8;
}




/* Function: FUN_004e473c */

int FUN_004e473c(int param_1)

{
  return param_1 + 0xb8;
}




/* Function: FUN_004e4748 */

int FUN_004e4748(int param_1)

{
  return param_1 + 0x98;
}




/* Function: FUN_004e4754 */

void FUN_004e4754(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0xf8) = param_2;
  *(undefined4 *)(param_1 + 0xfc) = param_3;
  *(undefined4 *)(param_1 + 0x100) = param_4;
  return;
}




/* Function: FUN_004e4778 */

void FUN_004e4778(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0xe8) = param_2;
  *(undefined4 *)(param_1 + 0xec) = param_3;
  *(undefined4 *)(param_1 + 0xf0) = param_4;
  return;
}




/* Function: FUN_004e479c */

void FUN_004e479c(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xa8) = *param_2;
  *(undefined4 *)(param_1 + 0xac) = param_2[1];
  *(undefined4 *)(param_1 + 0xb0) = param_2[2];
  *(undefined4 *)(param_1 + 0xb4) = param_2[3];
  FUN_004f11b8(param_1 + 0xa8);
  FUN_004eda5c(param_1 + 0xa8,param_1 + 0xb8);
  for (iVar1 = *(int *)(param_1 + 0x1c); iVar1 != 0; iVar1 = FUN_0054e7f8(iVar1)) {
    FUN_004e4f14(iVar1);
  }
  return;
}




/* Function: FUN_004e4804 */

void FUN_004e4804(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x98) = param_2;
  *(undefined4 *)(param_1 + 0x9c) = param_3;
  *(undefined4 *)(param_1 + 0xa0) = param_4;
  for (iVar1 = *(int *)(param_1 + 0x1c); iVar1 != 0; iVar1 = FUN_0054e7f8(iVar1)) {
    FUN_004e4f14(iVar1);
  }
  return;
}




/* Function: FUN_004e4850 */

void FUN_004e4850(int param_1,int *param_2)

{
  *param_2 = param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = (int)param_2;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = (int)param_2;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[1] = *(int *)(param_1 + 4);
  param_2[2] = param_1 + 4;
  if (*(int *)(param_1 + 4) != 0) {
    *(int **)(*(int *)(param_1 + 4) + 8) = param_2 + 1;
  }
  *(int **)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}




/* Function: FUN_004e48a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e48a4(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = (_DAT_005ba374 / *param_1) * param_2;
  *param_1 = param_2;
  iVar3 = 0;
  while( true ) {
    *(float *)(iVar3 + 0x14 + (int)param_1) = *(float *)(iVar3 + 0x14 + (int)param_1) * fVar1;
    *(float *)(iVar3 + 0x18 + (int)param_1) = *(float *)(iVar3 + 0x18 + (int)param_1) * fVar1;
    fVar2 = *(float *)(iVar3 + 0x1c + (int)param_1) * fVar1;
    if (0x2f < iVar3 + 0x10) break;
    *(float *)(iVar3 + 0x1c + (int)param_1) = fVar2;
    iVar3 = iVar3 + 0x10;
  }
  *(float *)(iVar3 + 0x1c + (int)param_1) = fVar2;
  return;
}




/* Function: FUN_004e48ec */

void FUN_004e48ec(void)

{
  FUN_004e492c();
  return;
}




/* Function: FUN_004e492c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e492c(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float *in_EAX;
  float10 in_ST0;
  
  fVar1 = (float)in_ST0;
  FUN_004e499c();
  *in_EAX = fVar1;
  in_EAX[5] = (param_4 * param_4 + param_5 * param_5) * fVar1 * _DAT_005ba378;
  in_EAX[10] = (param_5 * param_5 + param_3 * param_3) * fVar1 * _DAT_005ba378;
  in_EAX[0xf] = fVar1 * _DAT_005ba378 * (param_4 * param_4 + param_3 * param_3);
  return;
}




/* Function: FUN_004e4998 */

void FUN_004e4998(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_004ec1bc(param_1 + 1,4);
  FUN_004ec1bc(param_1 + 5,0xc);
  return;
}




/* Function: FUN_004e499c */

void FUN_004e499c(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  FUN_004ec1bc(in_EAX + 1,4);
  FUN_004ec1bc(in_EAX + 5,0xc);
  return;
}




/* Function: FUN_004e49c4 */

void FUN_004e49c4(void)

{
  FUN_004e49f8();
  return;
}




/* Function: FUN_004e49f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e49f8(undefined4 param_1,undefined4 param_2,float param_3)

{
  float *in_EAX;
  float10 in_ST0;
  
  FUN_004e499c();
  *in_EAX = (float)in_ST0;
  param_3 = param_3 * _DAT_005ba3b0 * (float)in_ST0 * param_3;
  in_EAX[5] = param_3;
  in_EAX[10] = param_3;
  in_EAX[0xf] = param_3;
  return;
}




/* Function: FUN_004e4a30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e4a30(float *param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9,float param_10,
                 float param_11)

{
  int iVar1;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xfffffff4) != 0) {
      FUN_004e499c();
      *param_1 = param_2;
      param_1[1] = param_3;
      param_1[2] = param_4;
      param_1[3] = param_5;
      param_1[5] = param_6;
      param_1[10] = param_7;
      param_1[0xf] = param_8;
      param_1[6] = param_9;
      param_1[7] = param_10;
      param_1[0xb] = param_11;
      param_1[9] = param_9;
      param_1[0xd] = param_10;
      param_1[0xe] = param_11;
      if (_DAT_005ba3b4 < param_2) {
        iVar1 = FUN_004ecf20(param_1 + 5,3);
        if (iVar1 != 0) {
          FUN_004ec1bc(&fStack_64,0xc);
          fStack_60 = -param_1[3];
          fStack_5c = param_1[2];
          fStack_54 = param_1[3];
          fStack_4c = -param_1[1];
          fStack_44 = -param_1[2];
          fStack_40 = param_1[1];
          fStack_34 = *param_1 *
                      (fStack_5c * fStack_44 + fStack_60 * fStack_54 + fStack_64 * fStack_64) +
                      param_1[5];
          fStack_30 = *param_1 *
                      (fStack_40 * fStack_5c + fStack_50 * fStack_60 + fStack_64 * fStack_60) +
                      param_1[6];
          fStack_2c = *param_1 *
                      (fStack_5c * fStack_3c + fStack_60 * fStack_4c + fStack_64 * fStack_5c) +
                      param_1[7];
          fStack_24 = *param_1 *
                      (fStack_4c * fStack_44 + fStack_50 * fStack_54 + fStack_54 * fStack_64) +
                      param_1[9];
          fStack_20 = *param_1 *
                      (fStack_4c * fStack_40 + fStack_50 * fStack_50 + fStack_60 * fStack_54) +
                      param_1[10];
          fStack_1c = *param_1 *
                      (fStack_4c * fStack_3c + fStack_4c * fStack_50 + fStack_5c * fStack_54) +
                      param_1[0xb];
          fStack_14 = *param_1 *
                      (fStack_3c * fStack_44 + fStack_40 * fStack_54 + fStack_64 * fStack_44) +
                      param_1[0xd];
          fStack_10 = *param_1 *
                      (fStack_3c * fStack_40 + fStack_40 * fStack_50 + fStack_60 * fStack_44) +
                      param_1[0xe];
          fStack_c = *param_1 *
                     (fStack_3c * fStack_3c + fStack_40 * fStack_4c + fStack_44 * fStack_5c) +
                     param_1[0xf];
          FUN_004ecf20(&fStack_34,3);
        }
      }
      return;
    }
    if (_DAT_005b71d0 != 0) break;
    FUN_004d34fc();
  }
  FUN_004e499c();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[5] = param_6;
  param_1[10] = param_7;
  param_1[0xf] = param_8;
  param_1[6] = param_9;
  param_1[7] = param_10;
  param_1[0xb] = param_11;
  param_1[9] = param_9;
  param_1[0xd] = param_10;
  param_1[0xe] = param_11;
  if (_DAT_005ba3bc < param_2) {
    iVar1 = FUN_004ecf20(param_1 + 5,3);
    if (iVar1 != 0) {
      FUN_004ec1bc(&fStack_64,0xc);
      fStack_60 = -param_1[3];
      fStack_5c = param_1[2];
      fStack_54 = param_1[3];
      fStack_4c = -param_1[1];
      fStack_44 = -param_1[2];
      fStack_40 = param_1[1];
      fStack_34 = *param_1 * (fStack_5c * fStack_44 + fStack_60 * fStack_54 + fStack_64 * fStack_64)
                  + param_1[5];
      fStack_30 = *param_1 * (fStack_40 * fStack_5c + fStack_50 * fStack_60 + fStack_64 * fStack_60)
                  + param_1[6];
      fStack_2c = *param_1 * (fStack_5c * fStack_3c + fStack_60 * fStack_4c + fStack_64 * fStack_5c)
                  + param_1[7];
      fStack_24 = *param_1 * (fStack_4c * fStack_44 + fStack_50 * fStack_54 + fStack_54 * fStack_64)
                  + param_1[9];
      fStack_20 = *param_1 * (fStack_4c * fStack_40 + fStack_50 * fStack_50 + fStack_60 * fStack_54)
                  + param_1[10];
      fStack_1c = *param_1 * (fStack_4c * fStack_3c + fStack_4c * fStack_50 + fStack_5c * fStack_54)
                  + param_1[0xb];
      fStack_14 = *param_1 * (fStack_3c * fStack_44 + fStack_40 * fStack_54 + fStack_64 * fStack_44)
                  + param_1[0xd];
      fStack_10 = *param_1 * (fStack_3c * fStack_40 + fStack_40 * fStack_50 + fStack_60 * fStack_44)
                  + param_1[0xe];
      fStack_c = *param_1 * (fStack_3c * fStack_3c + fStack_40 * fStack_4c + fStack_44 * fStack_5c)
                 + param_1[0xf];
      FUN_004ecf20(&fStack_34,3);
    }
  }
  return;
}




/* Function: FUN_004e4a58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e4a58(float *param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9,float param_10,
                 float param_11)

{
  int iVar1;
  float local_64;
  float local_60;
  float local_5c;
  float local_54;
  float local_50;
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  float local_c;
  
  FUN_004e499c();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[5] = param_6;
  param_1[10] = param_7;
  param_1[0xf] = param_8;
  param_1[6] = param_9;
  param_1[7] = param_10;
  param_1[0xb] = param_11;
  param_1[9] = param_9;
  param_1[0xd] = param_10;
  param_1[0xe] = param_11;
  if (_DAT_005ba3b4 < param_2) {
    iVar1 = FUN_004ecf20(param_1 + 5,3);
    if (iVar1 != 0) {
      FUN_004ec1bc(&local_64,0xc);
      local_60 = -param_1[3];
      local_5c = param_1[2];
      local_54 = param_1[3];
      local_4c = -param_1[1];
      local_44 = -param_1[2];
      local_40 = param_1[1];
      local_34 = *param_1 * (local_5c * local_44 + local_60 * local_54 + local_64 * local_64) +
                 param_1[5];
      local_30 = *param_1 * (local_40 * local_5c + local_50 * local_60 + local_64 * local_60) +
                 param_1[6];
      local_2c = *param_1 * (local_5c * local_3c + local_60 * local_4c + local_64 * local_5c) +
                 param_1[7];
      local_24 = *param_1 * (local_4c * local_44 + local_50 * local_54 + local_54 * local_64) +
                 param_1[9];
      local_20 = *param_1 * (local_4c * local_40 + local_50 * local_50 + local_60 * local_54) +
                 param_1[10];
      local_1c = *param_1 * (local_4c * local_3c + local_4c * local_50 + local_5c * local_54) +
                 param_1[0xb];
      local_14 = *param_1 * (local_3c * local_44 + local_40 * local_54 + local_64 * local_44) +
                 param_1[0xd];
      local_10 = *param_1 * (local_3c * local_40 + local_40 * local_50 + local_60 * local_44) +
                 param_1[0xe];
      local_c = *param_1 * (local_3c * local_3c + local_40 * local_4c + local_44 * local_5c) +
                param_1[0xf];
      FUN_004ecf20(&local_34,3);
    }
  }
  return;
}




/* Function: FUN_004e4c94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e4c94(float *param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9,float param_10,
                 float param_11)

{
  int iVar1;
  float local_64;
  float local_60;
  float local_5c;
  float local_54;
  float local_50;
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  float local_c;
  
  FUN_004e499c();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[5] = param_6;
  param_1[10] = param_7;
  param_1[0xf] = param_8;
  param_1[6] = param_9;
  param_1[7] = param_10;
  param_1[0xb] = param_11;
  param_1[9] = param_9;
  param_1[0xd] = param_10;
  param_1[0xe] = param_11;
  if (_DAT_005ba3bc < param_2) {
    iVar1 = FUN_004ecf20(param_1 + 5,3);
    if (iVar1 != 0) {
      FUN_004ec1bc(&local_64,0xc);
      local_60 = -param_1[3];
      local_5c = param_1[2];
      local_54 = param_1[3];
      local_4c = -param_1[1];
      local_44 = -param_1[2];
      local_40 = param_1[1];
      local_34 = *param_1 * (local_5c * local_44 + local_60 * local_54 + local_64 * local_64) +
                 param_1[5];
      local_30 = *param_1 * (local_40 * local_5c + local_50 * local_60 + local_64 * local_60) +
                 param_1[6];
      local_2c = *param_1 * (local_5c * local_3c + local_60 * local_4c + local_64 * local_5c) +
                 param_1[7];
      local_24 = *param_1 * (local_4c * local_44 + local_50 * local_54 + local_54 * local_64) +
                 param_1[9];
      local_20 = *param_1 * (local_4c * local_40 + local_50 * local_50 + local_60 * local_54) +
                 param_1[10];
      local_1c = *param_1 * (local_4c * local_3c + local_4c * local_50 + local_5c * local_54) +
                 param_1[0xb];
      local_14 = *param_1 * (local_3c * local_44 + local_40 * local_54 + local_64 * local_44) +
                 param_1[0xd];
      local_10 = *param_1 * (local_3c * local_40 + local_40 * local_50 + local_60 * local_44) +
                 param_1[0xe];
      local_c = *param_1 * (local_3c * local_3c + local_40 * local_4c + local_44 * local_5c) +
                param_1[0xf];
      FUN_004ecf20(&local_34,3);
    }
  }
  return;
}




/* Function: FUN_004e4ed0 */

void FUN_004e4ed0(void *param_1,undefined4 param_2)

{
  if (param_1 != (void *)0x0) {
    if (DAT_005b71d8 == (code *)0x0) {
      free(param_1);
      return;
    }
    (*DAT_005b71d8)(param_1,param_2);
  }
  return;
}




/* Function: FUN_004e4ef8 */

void FUN_004e4ef8(size_t param_1)

{
  if (DAT_005b71e0 != (code *)0x0) {
    (*DAT_005b71e0)(param_1);
    return;
  }
  malloc(param_1);
  return;
}




/* Function: FUN_004e4f14 */

void FUN_004e4f14(void)

{
  return;
}




/* Function: FUN_004e75b8 */

float10 FUN_004e75b8(void)

{
  int iVar1;
  int in_EAX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar1 = *(int *)(in_EAX + 0x2c);
  fVar2 = (float10)*(float *)(iVar1 + 0xc0) * (float10)*(float *)(in_EAX + 0x70) +
          (float10)*(float *)(iVar1 + 0xbc) * (float10)*(float *)(in_EAX + 0x6c) +
          (float10)*(float *)(iVar1 + 0xb8) * (float10)*(float *)(in_EAX + 0x68);
  fVar3 = (float10)*(float *)(iVar1 + 0xd0) * (float10)*(float *)(in_EAX + 0x70) +
          (float10)*(float *)(iVar1 + 0xcc) * (float10)*(float *)(in_EAX + 0x6c) +
          (float10)*(float *)(iVar1 + 200) * (float10)*(float *)(in_EAX + 0x68);
  fVar4 = (float10)*(float *)(iVar1 + 0xe0) * (float10)*(float *)(in_EAX + 0x70) +
          (float10)*(float *)(iVar1 + 0xdc) * (float10)*(float *)(in_EAX + 0x6c) +
          (float10)*(float *)(iVar1 + 0xd8) * (float10)*(float *)(in_EAX + 0x68);
  iVar1 = *(int *)(in_EAX + 0x20);
  fVar5 = (float10)*(float *)(iVar1 + 0xd8) * fVar4 +
          (float10)*(float *)(iVar1 + 200) * fVar3 + (float10)*(float *)(iVar1 + 0xb8) * fVar2;
  fVar6 = (float10)*(float *)(iVar1 + 0xdc) * fVar4 +
          (float10)*(float *)(iVar1 + 0xcc) * fVar3 + (float10)*(float *)(iVar1 + 0xbc) * fVar2;
  fVar2 = (float10)*(float *)(iVar1 + 0xe0) * fVar4 +
          (float10)*(float *)(iVar1 + 0xd0) * fVar3 + (float10)*(float *)(iVar1 + 0xc0) * fVar2;
  fVar2 = (float10)fpatan((float10)*(float *)(in_EAX + 0x98) * fVar2 +
                          (float10)*(float *)(in_EAX + 0x94) * fVar6 +
                          (float10)*(float *)(in_EAX + 0x90) * fVar5,
                          (float10)*(float *)(in_EAX + 0x88) * fVar2 +
                          (float10)*(float *)(in_EAX + 0x84) * fVar6 +
                          (float10)*(float *)(in_EAX + 0x80) * fVar5);
  return -fVar2;
}




/* Function: FUN_004ea760 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ea760(float *param_1,undefined4 param_2,float param_3)

{
  float *extraout_ECX;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xfffffff4) != 0) {
      switch(param_2) {
      case 0:
        if (param_3 <= param_1[3]) {
          param_1[2] = param_3;
          return;
        }
        break;
      case 1:
        if (param_1[2] <= param_3) {
          param_1[3] = param_3;
          return;
        }
        break;
      case 2:
        *param_1 = param_3;
        return;
      case 3:
        if (_DAT_005ba7a0 <= param_3) {
          param_1[1] = param_3;
          return;
        }
        break;
      case 4:
        if (param_3 < _DAT_005ba7a0) {
          return;
        }
        if (param_3 <= _DAT_005ba79c) {
          param_1[4] = param_3;
          return;
        }
        break;
      case 5:
        param_1[8] = param_3;
        return;
      case 6:
        param_1[5] = param_3;
        return;
      case 7:
        param_1[6] = param_3;
        return;
      case 8:
        param_1[7] = param_3;
        return;
      }
      return;
    }
    if (_DAT_005b71d0 != 0) break;
    FUN_004d34fc();
    param_1 = extraout_ECX;
  }
  switch(param_2) {
  case 0:
    if (param_3 <= param_1[3]) {
      param_1[2] = param_3;
      return;
    }
    break;
  case 1:
    if (param_1[2] <= param_3) {
      param_1[3] = param_3;
      return;
    }
    break;
  case 2:
    *param_1 = param_3;
    return;
  case 3:
    if (_DAT_005ba7d4 <= param_3) {
      param_1[1] = param_3;
      return;
    }
    break;
  case 4:
    if (param_3 < _DAT_005ba7d4) {
      return;
    }
    if (param_3 <= _DAT_005ba7d0) {
      param_1[4] = param_3;
      return;
    }
    break;
  case 5:
    param_1[8] = param_3;
    return;
  case 6:
    param_1[5] = param_3;
    return;
  case 7:
    param_1[6] = param_3;
    return;
  case 8:
    param_1[7] = param_3;
    return;
  }
  return;
}




/* Function: FUN_004ea8b0 */

void __fastcall
FUN_004ea8b0(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4,float param_5,
            float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int in_EAX;
  float10 in_ST0;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (*(int *)(in_EAX + 0x20) != 0) {
    fVar5 = in_ST0 - (float10)*(float *)(*(int *)(in_EAX + 0x20) + 0x98);
    fVar1 = (float)fVar5;
    fVar6 = (float10)param_5 - (float10)*(float *)(*(int *)(in_EAX + 0x20) + 0x9c);
    fVar2 = (float)fVar6;
    fVar7 = (float10)param_6 - (float10)*(float *)(*(int *)(in_EAX + 0x20) + 0xa0);
    fVar3 = (float)fVar7;
    iVar4 = *(int *)(in_EAX + 0x20);
    *param_2 = (float)((float10)*(float *)(iVar4 + 0xd8) * fVar7 +
                      (float10)*(float *)(iVar4 + 200) * fVar6 +
                      (float10)*(float *)(iVar4 + 0xb8) * fVar5);
    param_2[1] = *(float *)(iVar4 + 0xdc) * fVar3 +
                 *(float *)(iVar4 + 0xcc) * fVar2 + *(float *)(iVar4 + 0xbc) * fVar1;
    param_2[2] = *(float *)(iVar4 + 0xe0) * fVar3 +
                 *(float *)(iVar4 + 0xd0) * fVar2 + *(float *)(iVar4 + 0xc0) * fVar1;
    if (*(int *)(in_EAX + 0x2c) == 0) {
      *param_1 = (float)in_ST0;
      param_1[1] = param_5;
      param_1[2] = param_6;
    }
    else {
      fVar6 = in_ST0 - (float10)*(float *)(*(int *)(in_EAX + 0x2c) + 0x98);
      fVar1 = (float)fVar6;
      fVar5 = (float10)param_5 - (float10)*(float *)(*(int *)(in_EAX + 0x2c) + 0x9c);
      fVar2 = (float)fVar5;
      fVar7 = (float10)param_6 - (float10)*(float *)(*(int *)(in_EAX + 0x2c) + 0xa0);
      fVar3 = (float)fVar7;
      iVar4 = *(int *)(in_EAX + 0x2c);
      *param_1 = (float)((float10)*(float *)(iVar4 + 200) * fVar5 +
                         (float10)*(float *)(iVar4 + 0xb8) * fVar6 +
                        (float10)*(float *)(iVar4 + 0xd8) * fVar7);
      param_1[1] = *(float *)(iVar4 + 0xdc) * fVar3 +
                   *(float *)(iVar4 + 0xcc) * fVar2 + *(float *)(iVar4 + 0xbc) * fVar1;
      param_1[2] = *(float *)(iVar4 + 0xe0) * fVar3 +
                   *(float *)(iVar4 + 0xd0) * fVar2 + *(float *)(iVar4 + 0xc0) * fVar1;
    }
  }
  param_2[3] = 0.0;
  param_1[3] = 0.0;
  return;
}




/* Function: FUN_004eaa4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004eaa4c(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    fVar1 = (float10)FUN_004e75b8();
    return fVar1;
  }
  return (float10)_DAT_005ba80c;
}




/* Function: FUN_004eaa6c */

void FUN_004eaa6c(int param_1,uint param_2,undefined4 param_3)

{
  if ((param_2 & 0xff00) == 0x100) {
    FUN_004ea760(param_2 & 0xff,param_3);
    return;
  }
  if (param_2 != 9) {
    if (param_2 == 10) {
      *(undefined4 *)(param_1 + 0xfc) = param_3;
      return;
    }
    FUN_004ea760(param_2,param_3);
    return;
  }
  *(undefined4 *)(param_1 + 0xf8) = param_3;
  return;
}




/* Function: FUN_004eaacc */

void FUN_004eaacc(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    local_3c = param_2;
    local_38 = param_3;
    local_34 = param_4;
    local_30 = 0;
    FUN_004f12d8(&local_3c);
    iVar1 = *(int *)(param_1 + 0x2c);
    iVar2 = *(int *)(param_1 + 0x20);
    *(float *)(param_1 + 0x68) =
         *(float *)(iVar1 + 0xd8) * local_34 +
         *(float *)(iVar1 + 200) * local_38 + *(float *)(iVar1 + 0xb8) * local_3c;
    *(float *)(param_1 + 0x6c) =
         *(float *)(iVar1 + 0xdc) * local_34 +
         *(float *)(iVar1 + 0xcc) * local_38 + *(float *)(iVar1 + 0xbc) * local_3c;
    *(float *)(param_1 + 0x70) =
         *(float *)(iVar1 + 0xe0) * local_34 +
         *(float *)(iVar1 + 0xd0) * local_38 + *(float *)(iVar1 + 0xc0) * local_3c;
    *(undefined4 *)(param_1 + 100) = 0;
    local_2c = *(float *)(iVar2 + 0xc0) * *(float *)(param_1 + 0x60) +
               *(float *)(iVar2 + 0xbc) * *(float *)(param_1 + 0x5c) +
               *(float *)(iVar2 + 0xb8) * *(float *)(param_1 + 0x58);
    local_28 = *(float *)(iVar2 + 0xd0) * *(float *)(param_1 + 0x60) +
               *(float *)(iVar2 + 0xcc) * *(float *)(param_1 + 0x5c) +
               *(float *)(iVar2 + 200) * *(float *)(param_1 + 0x58);
    local_24 = *(float *)(iVar2 + 0xe0) * *(float *)(param_1 + 0x60) +
               *(float *)(iVar2 + 0xdc) * *(float *)(param_1 + 0x5c) +
               *(float *)(iVar2 + 0xd8) * *(float *)(param_1 + 0x58);
    iVar1 = *(int *)(param_1 + 0x2c);
    local_1c = *(float *)(iVar1 + 0xc0) * *(float *)(param_1 + 0x70) +
               *(float *)(iVar1 + 0xbc) * *(float *)(param_1 + 0x6c) +
               *(float *)(iVar1 + 0xb8) * *(float *)(param_1 + 0x68);
    local_18 = *(float *)(iVar1 + 0xd0) * *(float *)(param_1 + 0x70) +
               *(float *)(iVar1 + 0xcc) * *(float *)(param_1 + 0x6c) +
               *(float *)(iVar1 + 200) * *(float *)(param_1 + 0x68);
    local_14 = *(float *)(iVar1 + 0xe0) * *(float *)(param_1 + 0x70) +
               *(float *)(iVar1 + 0xdc) * *(float *)(param_1 + 0x6c) +
               *(float *)(iVar1 + 0xd8) * *(float *)(param_1 + 0x68);
    fVar4 = local_28 * local_14 - local_24 * local_18;
    fVar5 = local_24 * local_1c - local_2c * local_14;
    fVar3 = local_2c * local_18 - local_28 * local_1c;
    *(float *)(param_1 + 0x7c) = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
    *(float *)(param_1 + 0x78) = local_24 * local_14 + local_18 * local_28 + local_1c * local_2c;
    local_c = local_24;
    local_8 = local_14;
  }
  FUN_004eacc0();
  return;
}




/* Function: FUN_004eacc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eacc0(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_EAX;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  while ((_DAT_005b71d0 & 0xfffffff4) == 0) {
    if (_DAT_005b71d0 != 0) {
      iVar1 = *(int *)(in_EAX + 0x20);
      if (iVar1 != 0) {
        fVar3 = *(float *)(iVar1 + 0xc0) * *(float *)(in_EAX + 0x60) +
                *(float *)(iVar1 + 0xbc) * *(float *)(in_EAX + 0x5c) +
                *(float *)(iVar1 + 0xb8) * *(float *)(in_EAX + 0x58);
        fVar6 = *(float *)(iVar1 + 0xd0) * *(float *)(in_EAX + 0x60) +
                *(float *)(iVar1 + 0xcc) * *(float *)(in_EAX + 0x5c) +
                *(float *)(iVar1 + 200) * *(float *)(in_EAX + 0x58);
        fVar4 = *(float *)(iVar1 + 0xe0) * *(float *)(in_EAX + 0x60) +
                *(float *)(iVar1 + 0xdc) * *(float *)(in_EAX + 0x5c) +
                *(float *)(iVar1 + 0xd8) * *(float *)(in_EAX + 0x58);
        iVar1 = *(int *)(in_EAX + 0x2c);
        fStack_24 = *(float *)(iVar1 + 0xc0) * *(float *)(in_EAX + 0x70) +
                    *(float *)(iVar1 + 0xbc) * *(float *)(in_EAX + 0x6c) +
                    *(float *)(iVar1 + 0xb8) * *(float *)(in_EAX + 0x68);
        fStack_20 = *(float *)(iVar1 + 0xd0) * *(float *)(in_EAX + 0x70) +
                    *(float *)(iVar1 + 0xcc) * *(float *)(in_EAX + 0x6c) +
                    *(float *)(iVar1 + 200) * *(float *)(in_EAX + 0x68);
        fStack_1c = *(float *)(iVar1 + 0xe0) * *(float *)(in_EAX + 0x70) +
                    *(float *)(iVar1 + 0xdc) * *(float *)(in_EAX + 0x6c) +
                    *(float *)(iVar1 + 0xd8) * *(float *)(in_EAX + 0x68);
        if ((((_DAT_005ba81c == fVar3) && (_DAT_005ba81c == fVar6)) && (_DAT_005ba81c == fVar4)) ||
           ((((_DAT_005ba81c == fStack_24 && (_DAT_005ba81c == fStack_20)) &&
             (_DAT_005ba81c == fStack_1c)) ||
            (((fVar3 == fStack_24 && (fVar6 == fStack_20)) && (fVar4 == fStack_1c)))))) {
          return;
        }
        fVar5 = fVar4 * fStack_1c + fStack_20 * fVar6 + fStack_24 * fVar3;
        fStack_24 = fStack_24 - fVar3 * fVar5;
        fStack_20 = fStack_20 - fVar6 * fVar5;
        fStack_1c = fStack_1c - fVar4 * fVar5;
        FUN_004f12d8(&fStack_24);
        fVar5 = fVar6 * fStack_1c - fVar4 * fStack_20;
        fVar4 = fVar4 * fStack_24 - fStack_1c * fVar3;
        fVar3 = fStack_20 * fVar3 - fVar6 * fStack_24;
        iVar1 = *(int *)(in_EAX + 0x20);
        iVar2 = *(int *)(in_EAX + 0x20);
        *(float *)(in_EAX + 0x80) =
             *(float *)(iVar1 + 0xd8) * fStack_1c +
             *(float *)(iVar1 + 200) * fStack_20 + *(float *)(iVar1 + 0xb8) * fStack_24;
        *(float *)(in_EAX + 0x84) =
             *(float *)(iVar1 + 0xdc) * fStack_1c +
             *(float *)(iVar1 + 0xcc) * fStack_20 + *(float *)(iVar1 + 0xbc) * fStack_24;
        *(float *)(in_EAX + 0x88) =
             *(float *)(iVar1 + 0xe0) * fStack_1c +
             *(float *)(iVar1 + 0xd0) * fStack_20 + *(float *)(iVar1 + 0xc0) * fStack_24;
        *(float *)(in_EAX + 0x90) =
             *(float *)(iVar2 + 0xd8) * fVar3 +
             *(float *)(iVar2 + 200) * fVar4 + *(float *)(iVar2 + 0xb8) * fVar5;
        *(float *)(in_EAX + 0x94) =
             *(float *)(iVar2 + 0xdc) * fVar3 +
             *(float *)(iVar2 + 0xcc) * fVar4 + *(float *)(iVar2 + 0xbc) * fVar5;
        *(float *)(in_EAX + 0x98) =
             *(float *)(iVar2 + 0xe0) * fVar3 +
             *(float *)(iVar2 + 0xd0) * fVar4 + *(float *)(iVar2 + 0xc0) * fVar5;
      }
      return;
    }
    in_EAX = FUN_004d34fc();
  }
  iVar1 = *(int *)(in_EAX + 0x20);
  if (iVar1 != 0) {
    fVar3 = *(float *)(iVar1 + 0xc0) * *(float *)(in_EAX + 0x60) +
            *(float *)(iVar1 + 0xbc) * *(float *)(in_EAX + 0x5c) +
            *(float *)(iVar1 + 0xb8) * *(float *)(in_EAX + 0x58);
    fVar6 = *(float *)(iVar1 + 0xd0) * *(float *)(in_EAX + 0x60) +
            *(float *)(iVar1 + 0xcc) * *(float *)(in_EAX + 0x5c) +
            *(float *)(iVar1 + 200) * *(float *)(in_EAX + 0x58);
    fVar4 = *(float *)(iVar1 + 0xe0) * *(float *)(in_EAX + 0x60) +
            *(float *)(iVar1 + 0xdc) * *(float *)(in_EAX + 0x5c) +
            *(float *)(iVar1 + 0xd8) * *(float *)(in_EAX + 0x58);
    iVar1 = *(int *)(in_EAX + 0x2c);
    fStack_24 = *(float *)(iVar1 + 0xc0) * *(float *)(in_EAX + 0x70) +
                *(float *)(iVar1 + 0xbc) * *(float *)(in_EAX + 0x6c) +
                *(float *)(iVar1 + 0xb8) * *(float *)(in_EAX + 0x68);
    fStack_20 = *(float *)(iVar1 + 0xd0) * *(float *)(in_EAX + 0x70) +
                *(float *)(iVar1 + 0xcc) * *(float *)(in_EAX + 0x6c) +
                *(float *)(iVar1 + 200) * *(float *)(in_EAX + 0x68);
    fStack_1c = *(float *)(iVar1 + 0xe0) * *(float *)(in_EAX + 0x70) +
                *(float *)(iVar1 + 0xdc) * *(float *)(in_EAX + 0x6c) +
                *(float *)(iVar1 + 0xd8) * *(float *)(in_EAX + 0x68);
    if ((((_DAT_005ba814 == fVar3) && (_DAT_005ba814 == fVar6)) && (_DAT_005ba814 == fVar4)) ||
       ((((_DAT_005ba814 == fStack_24 && (_DAT_005ba814 == fStack_20)) &&
         (_DAT_005ba814 == fStack_1c)) ||
        (((fVar3 == fStack_24 && (fVar6 == fStack_20)) && (fVar4 == fStack_1c)))))) {
      return;
    }
    fVar5 = fVar4 * fStack_1c + fStack_20 * fVar6 + fStack_24 * fVar3;
    fStack_24 = fStack_24 - fVar3 * fVar5;
    fStack_20 = fStack_20 - fVar6 * fVar5;
    fStack_1c = fStack_1c - fVar4 * fVar5;
    FUN_004f12d8(&fStack_24);
    fVar5 = fVar6 * fStack_1c - fVar4 * fStack_20;
    fVar4 = fVar4 * fStack_24 - fStack_1c * fVar3;
    fVar3 = fStack_20 * fVar3 - fVar6 * fStack_24;
    iVar1 = *(int *)(in_EAX + 0x20);
    iVar2 = *(int *)(in_EAX + 0x20);
    *(float *)(in_EAX + 0x80) =
         *(float *)(iVar1 + 0xd8) * fStack_1c +
         *(float *)(iVar1 + 200) * fStack_20 + *(float *)(iVar1 + 0xb8) * fStack_24;
    *(float *)(in_EAX + 0x84) =
         *(float *)(iVar1 + 0xdc) * fStack_1c +
         *(float *)(iVar1 + 0xcc) * fStack_20 + *(float *)(iVar1 + 0xbc) * fStack_24;
    *(float *)(in_EAX + 0x88) =
         *(float *)(iVar1 + 0xe0) * fStack_1c +
         *(float *)(iVar1 + 0xd0) * fStack_20 + *(float *)(iVar1 + 0xc0) * fStack_24;
    *(float *)(in_EAX + 0x90) =
         *(float *)(iVar2 + 0xd8) * fVar3 +
         *(float *)(iVar2 + 200) * fVar4 + *(float *)(iVar2 + 0xb8) * fVar5;
    *(float *)(in_EAX + 0x94) =
         *(float *)(iVar2 + 0xdc) * fVar3 +
         *(float *)(iVar2 + 0xcc) * fVar4 + *(float *)(iVar2 + 0xbc) * fVar5;
    *(float *)(in_EAX + 0x98) =
         *(float *)(iVar2 + 0xe0) * fVar3 +
         *(float *)(iVar2 + 0xd0) * fVar4 + *(float *)(iVar2 + 0xc0) * fVar5;
  }
  return;
}




/* Function: FUN_004eace8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eace8(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_EAX;
  float local_24;
  float local_20;
  float local_1c;
  
  iVar1 = *(int *)(in_EAX + 0x20);
  if (iVar1 != 0) {
    fVar3 = *(float *)(iVar1 + 0xc0) * *(float *)(in_EAX + 0x60) +
            *(float *)(iVar1 + 0xbc) * *(float *)(in_EAX + 0x5c) +
            *(float *)(iVar1 + 0xb8) * *(float *)(in_EAX + 0x58);
    fVar6 = *(float *)(iVar1 + 0xd0) * *(float *)(in_EAX + 0x60) +
            *(float *)(iVar1 + 0xcc) * *(float *)(in_EAX + 0x5c) +
            *(float *)(iVar1 + 200) * *(float *)(in_EAX + 0x58);
    fVar4 = *(float *)(iVar1 + 0xe0) * *(float *)(in_EAX + 0x60) +
            *(float *)(iVar1 + 0xdc) * *(float *)(in_EAX + 0x5c) +
            *(float *)(iVar1 + 0xd8) * *(float *)(in_EAX + 0x58);
    iVar1 = *(int *)(in_EAX + 0x2c);
    local_24 = *(float *)(iVar1 + 0xc0) * *(float *)(in_EAX + 0x70) +
               *(float *)(iVar1 + 0xbc) * *(float *)(in_EAX + 0x6c) +
               *(float *)(iVar1 + 0xb8) * *(float *)(in_EAX + 0x68);
    local_20 = *(float *)(iVar1 + 0xd0) * *(float *)(in_EAX + 0x70) +
               *(float *)(iVar1 + 0xcc) * *(float *)(in_EAX + 0x6c) +
               *(float *)(iVar1 + 200) * *(float *)(in_EAX + 0x68);
    local_1c = *(float *)(iVar1 + 0xe0) * *(float *)(in_EAX + 0x70) +
               *(float *)(iVar1 + 0xdc) * *(float *)(in_EAX + 0x6c) +
               *(float *)(iVar1 + 0xd8) * *(float *)(in_EAX + 0x68);
    if (((((_DAT_005ba814 == fVar3) && (_DAT_005ba814 == fVar6)) && (_DAT_005ba814 == fVar4)) ||
        (((_DAT_005ba814 == local_24 && (_DAT_005ba814 == local_20)) && (_DAT_005ba814 == local_1c))
        )) || (((fVar3 == local_24 && (fVar6 == local_20)) && (fVar4 == local_1c)))) {
      return;
    }
    fVar5 = fVar4 * local_1c + local_20 * fVar6 + local_24 * fVar3;
    local_24 = local_24 - fVar3 * fVar5;
    local_20 = local_20 - fVar6 * fVar5;
    local_1c = local_1c - fVar4 * fVar5;
    FUN_004f12d8(&local_24);
    fVar5 = fVar6 * local_1c - fVar4 * local_20;
    fVar4 = fVar4 * local_24 - local_1c * fVar3;
    fVar3 = local_20 * fVar3 - fVar6 * local_24;
    iVar1 = *(int *)(in_EAX + 0x20);
    iVar2 = *(int *)(in_EAX + 0x20);
    *(float *)(in_EAX + 0x80) =
         *(float *)(iVar1 + 0xd8) * local_1c +
         *(float *)(iVar1 + 200) * local_20 + *(float *)(iVar1 + 0xb8) * local_24;
    *(float *)(in_EAX + 0x84) =
         *(float *)(iVar1 + 0xdc) * local_1c +
         *(float *)(iVar1 + 0xcc) * local_20 + *(float *)(iVar1 + 0xbc) * local_24;
    *(float *)(in_EAX + 0x88) =
         *(float *)(iVar1 + 0xe0) * local_1c +
         *(float *)(iVar1 + 0xd0) * local_20 + *(float *)(iVar1 + 0xc0) * local_24;
    *(float *)(in_EAX + 0x90) =
         *(float *)(iVar2 + 0xd8) * fVar3 +
         *(float *)(iVar2 + 200) * fVar4 + *(float *)(iVar2 + 0xb8) * fVar5;
    *(float *)(in_EAX + 0x94) =
         *(float *)(iVar2 + 0xdc) * fVar3 +
         *(float *)(iVar2 + 0xcc) * fVar4 + *(float *)(iVar2 + 0xbc) * fVar5;
    *(float *)(in_EAX + 0x98) =
         *(float *)(iVar2 + 0xe0) * fVar3 +
         *(float *)(iVar2 + 0xd0) * fVar4 + *(float *)(iVar2 + 0xc0) * fVar5;
  }
  return;
}




/* Function: FUN_004eafc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eafc0(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_EAX;
  float local_24;
  float local_20;
  float local_1c;
  
  iVar1 = *(int *)(in_EAX + 0x20);
  if (iVar1 != 0) {
    fVar3 = *(float *)(iVar1 + 0xc0) * *(float *)(in_EAX + 0x60) +
            *(float *)(iVar1 + 0xbc) * *(float *)(in_EAX + 0x5c) +
            *(float *)(iVar1 + 0xb8) * *(float *)(in_EAX + 0x58);
    fVar6 = *(float *)(iVar1 + 0xd0) * *(float *)(in_EAX + 0x60) +
            *(float *)(iVar1 + 0xcc) * *(float *)(in_EAX + 0x5c) +
            *(float *)(iVar1 + 200) * *(float *)(in_EAX + 0x58);
    fVar4 = *(float *)(iVar1 + 0xe0) * *(float *)(in_EAX + 0x60) +
            *(float *)(iVar1 + 0xdc) * *(float *)(in_EAX + 0x5c) +
            *(float *)(iVar1 + 0xd8) * *(float *)(in_EAX + 0x58);
    iVar1 = *(int *)(in_EAX + 0x2c);
    local_24 = *(float *)(iVar1 + 0xc0) * *(float *)(in_EAX + 0x70) +
               *(float *)(iVar1 + 0xbc) * *(float *)(in_EAX + 0x6c) +
               *(float *)(iVar1 + 0xb8) * *(float *)(in_EAX + 0x68);
    local_20 = *(float *)(iVar1 + 0xd0) * *(float *)(in_EAX + 0x70) +
               *(float *)(iVar1 + 0xcc) * *(float *)(in_EAX + 0x6c) +
               *(float *)(iVar1 + 200) * *(float *)(in_EAX + 0x68);
    local_1c = *(float *)(iVar1 + 0xe0) * *(float *)(in_EAX + 0x70) +
               *(float *)(iVar1 + 0xdc) * *(float *)(in_EAX + 0x6c) +
               *(float *)(iVar1 + 0xd8) * *(float *)(in_EAX + 0x68);
    if (((((_DAT_005ba81c == fVar3) && (_DAT_005ba81c == fVar6)) && (_DAT_005ba81c == fVar4)) ||
        (((_DAT_005ba81c == local_24 && (_DAT_005ba81c == local_20)) && (_DAT_005ba81c == local_1c))
        )) || (((fVar3 == local_24 && (fVar6 == local_20)) && (fVar4 == local_1c)))) {
      return;
    }
    fVar5 = fVar4 * local_1c + local_20 * fVar6 + local_24 * fVar3;
    local_24 = local_24 - fVar3 * fVar5;
    local_20 = local_20 - fVar6 * fVar5;
    local_1c = local_1c - fVar4 * fVar5;
    FUN_004f12d8(&local_24);
    fVar5 = fVar6 * local_1c - fVar4 * local_20;
    fVar4 = fVar4 * local_24 - local_1c * fVar3;
    fVar3 = local_20 * fVar3 - fVar6 * local_24;
    iVar1 = *(int *)(in_EAX + 0x20);
    iVar2 = *(int *)(in_EAX + 0x20);
    *(float *)(in_EAX + 0x80) =
         *(float *)(iVar1 + 0xd8) * local_1c +
         *(float *)(iVar1 + 200) * local_20 + *(float *)(iVar1 + 0xb8) * local_24;
    *(float *)(in_EAX + 0x84) =
         *(float *)(iVar1 + 0xdc) * local_1c +
         *(float *)(iVar1 + 0xcc) * local_20 + *(float *)(iVar1 + 0xbc) * local_24;
    *(float *)(in_EAX + 0x88) =
         *(float *)(iVar1 + 0xe0) * local_1c +
         *(float *)(iVar1 + 0xd0) * local_20 + *(float *)(iVar1 + 0xc0) * local_24;
    *(float *)(in_EAX + 0x90) =
         *(float *)(iVar2 + 0xd8) * fVar3 +
         *(float *)(iVar2 + 200) * fVar4 + *(float *)(iVar2 + 0xb8) * fVar5;
    *(float *)(in_EAX + 0x94) =
         *(float *)(iVar2 + 0xdc) * fVar3 +
         *(float *)(iVar2 + 0xcc) * fVar4 + *(float *)(iVar2 + 0xbc) * fVar5;
    *(float *)(in_EAX + 0x98) =
         *(float *)(iVar2 + 0xe0) * fVar3 +
         *(float *)(iVar2 + 0xd0) * fVar4 + *(float *)(iVar2 + 0xc0) * fVar5;
  }
  return;
}




/* Function: FUN_004eb298 */

void FUN_004eb298(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    local_3c = param_2;
    local_38 = param_3;
    local_34 = param_4;
    local_30 = 0;
    FUN_004f12d8(&local_3c);
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x20);
    fVar3 = *(float *)(iVar1 + 0xd8) * local_34 +
            *(float *)(iVar1 + 200) * local_38 + *(float *)(iVar1 + 0xb8) * local_3c;
    *(float *)(param_1 + 0x58) = fVar3;
    fVar5 = *(float *)(iVar1 + 0xdc) * local_34 +
            *(float *)(iVar1 + 0xcc) * local_38 + *(float *)(iVar1 + 0xbc) * local_3c;
    *(float *)(param_1 + 0x5c) = fVar5;
    fVar4 = *(float *)(iVar1 + 0xe0) * local_34 +
            *(float *)(iVar1 + 0xd0) * local_38 + *(float *)(iVar1 + 0xc0) * local_3c;
    *(float *)(param_1 + 0x60) = fVar4;
    *(undefined4 *)(param_1 + 100) = 0;
    local_2c = *(float *)(iVar2 + 0xc0) * fVar4 +
               *(float *)(iVar2 + 0xbc) * fVar5 + *(float *)(iVar2 + 0xb8) * fVar3;
    local_28 = *(float *)(iVar2 + 0xd0) * *(float *)(param_1 + 0x60) +
               *(float *)(iVar2 + 0xcc) * *(float *)(param_1 + 0x5c) +
               *(float *)(iVar2 + 200) * *(float *)(param_1 + 0x58);
    local_24 = *(float *)(iVar2 + 0xe0) * *(float *)(param_1 + 0x60) +
               *(float *)(iVar2 + 0xdc) * *(float *)(param_1 + 0x5c) +
               *(float *)(iVar2 + 0xd8) * *(float *)(param_1 + 0x58);
    iVar1 = *(int *)(param_1 + 0x2c);
    local_1c = *(float *)(iVar1 + 0xc0) * *(float *)(param_1 + 0x70) +
               *(float *)(iVar1 + 0xbc) * *(float *)(param_1 + 0x6c) +
               *(float *)(iVar1 + 0xb8) * *(float *)(param_1 + 0x68);
    local_18 = *(float *)(iVar1 + 0xd0) * *(float *)(param_1 + 0x70) +
               *(float *)(iVar1 + 0xcc) * *(float *)(param_1 + 0x6c) +
               *(float *)(iVar1 + 200) * *(float *)(param_1 + 0x68);
    local_14 = *(float *)(iVar1 + 0xe0) * *(float *)(param_1 + 0x70) +
               *(float *)(iVar1 + 0xdc) * *(float *)(param_1 + 0x6c) +
               *(float *)(iVar1 + 0xd8) * *(float *)(param_1 + 0x68);
    fVar4 = local_28 * local_14 - local_24 * local_18;
    fVar5 = local_24 * local_1c - local_2c * local_14;
    fVar3 = local_2c * local_18 - local_28 * local_1c;
    *(float *)(param_1 + 0x7c) = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
    *(float *)(param_1 + 0x78) = local_24 * local_14 + local_18 * local_28 + local_1c * local_2c;
    local_c = local_24;
    local_8 = local_14;
  }
  FUN_004eacc0();
  return;
}




/* Function: FUN_004eb48c */

void FUN_004eb48c(void)

{
  FUN_004ea8b0();
  FUN_004eacc0();
  return;
}




/* Function: FUN_004eb7d8 */

int __thiscall FUN_004eb7d8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar2 = (((int)piVar1 + *(int *)(param_1 + 0xc) + param_2 + -1 | 0xfU) - (int)piVar1) + 1;
  *(int *)(param_1 + 0xc) = iVar2;
  if (piVar1[1] <= iVar2) {
    piVar1 = (int *)*piVar1;
    *(int **)(param_1 + 8) = piVar1;
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = (((int)piVar1 + 7U | 0xf) - (int)piVar1) + 1;
    *(int *)(param_1 + 0xc) = iVar2;
  }
  return (int)piVar1 + iVar2;
}




/* Function: FUN_004eb818 */

int __fastcall FUN_004eb818(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    iVar2 = (iVar1 + 7U | 0xf) - iVar1;
    param_1[3] = iVar2 + 1;
    return iVar1 + 1 + iVar2;
  }
  param_1[3] = 8;
  return 0;
}




/* Function: FUN_004eb844 */

void __fastcall FUN_004eb844(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = 8;
    iVar1 = *param_1;
    *(uint *)(iVar1 + 4) = ((iVar1 + -1 + *(int *)(iVar1 + 4) | 0xfU) - iVar1) + 1;
  }
  return;
}




/* Function: FUN_004eb868 */

int __thiscall FUN_004eb868(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  if (0x3fe9 < param_2) {
    FUN_004edc68(0,"num_bytes too large");
  }
  if (*param_1 == 0) {
    puVar4 = (undefined4 *)FUN_004e4ef8(0x4000);
    param_1[1] = (int)puVar4;
    *param_1 = (int)puVar4;
    *puVar4 = 0;
    *(undefined4 *)(*param_1 + 4) = 8;
    iVar1 = *param_1;
    *(uint *)(iVar1 + 4) = ((iVar1 + -1 + *(int *)(iVar1 + 4) | 0xfU) - iVar1) + 1;
    piVar5 = (int *)param_1[1];
    iVar2 = piVar5[1];
    iVar1 = param_2 + iVar2;
  }
  else {
    piVar5 = (int *)param_1[1];
    iVar2 = piVar5[1];
    iVar1 = param_2 + iVar2;
    if (0x4000 < iVar1) {
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        uVar3 = FUN_004e4ef8(0x4000);
        *(undefined4 *)param_1[1] = uVar3;
        **(undefined4 **)param_1[1] = 0;
        iVar1 = *(int *)param_1[1];
      }
      param_1[1] = iVar1;
      *(undefined4 *)(iVar1 + 4) = 8;
      iVar1 = param_1[1];
      *(uint *)(iVar1 + 4) = ((iVar1 + -1 + *(int *)(iVar1 + 4) | 0xfU) - iVar1) + 1;
      piVar5 = (int *)param_1[1];
      iVar2 = piVar5[1];
      iVar1 = param_2 + iVar2;
    }
  }
  piVar5[1] = iVar1;
  iVar1 = param_1[1];
  *(uint *)(iVar1 + 4) = ((iVar1 + -1 + *(int *)(iVar1 + 4) | 0xfU) - iVar1) + 1;
  return iVar2 + (int)piVar5;
}




/* Function: FUN_004eb94c */

void __fastcall FUN_004eb94c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_004e4ed0(puVar2,0x4000);
    puVar2 = puVar1;
  }
  return;
}




/* Function: FUN_004eb974 */

undefined4 * __fastcall FUN_004eb974(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}




/* Function: FUN_004eb984 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eb984(int param_1,int *param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 int param_7,int param_8)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  float10 fVar14;
  int local_38;
  int *local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = param_6 + -1;
  if (param_7 != local_14) {
    if (param_7 == 0) {
      puVar9 = (undefined1 *)((int)&local_38 - (param_6 * 4 + 0xf) & 0xfffffff0);
      uVar3 = (uint)(puVar9 + -1) | 0xf;
      iVar5 = 0;
      if (0 < param_6) {
        do {
          iVar12 = param_2[iVar5];
          iVar7 = *param_2;
          if (iVar7 < iVar12) {
            fVar1 = *(float *)(*(int *)(param_1 + iVar12 * 4) + iVar7 * 4);
          }
          else {
            fVar1 = *(float *)(*(int *)(param_1 + iVar7 * 4) + iVar12 * 4);
          }
          *(float *)(uVar3 + 1 + iVar5 * 4) = -fVar1;
          iVar5 = iVar5 + 1;
          local_18 = uVar3 + 1;
        } while (iVar5 < param_6);
      }
      *(float *)(uVar3 + 1) = _DAT_005ba858 + *(float *)(uVar3 + 1);
      *(int *)(puVar9 + -8) = param_6;
      *(int *)(puVar9 + -4) = param_8;
      *(undefined4 *)(puVar9 + -0x18) = 0x4ebd5f;
      FUN_004ebd74();
    }
    else {
      uVar8 = (int)&local_38 - (param_7 * 4 + 0xf) & 0xfffffff0;
      uVar10 = uVar8 - 1 | 0xf;
      local_18 = uVar10 + 1;
      local_1c = param_6 - param_7;
      *(undefined4 *)(uVar8 - 4) = 0x4eb9e0;
      puVar9 = (undefined1 *)(uVar8 - (local_1c * 4 + 0xf) & 0xfffffff0);
      uVar3 = (int)puVar9 - 1U | 0xf;
      local_20 = uVar3 + 1;
      local_30 = 0;
      if (param_7 < 1) {
        local_24 = param_7 * 4 * param_8;
      }
      else {
        if (param_7 < 5) {
          local_24 = param_7 * 4 * param_8;
          local_34 = (int *)(param_3 + local_24);
          iVar5 = local_30;
        }
        else {
          local_24 = param_7 * 4 * param_8;
          local_34 = (int *)(param_3 + local_24);
          local_38 = param_7 + -5;
          local_30 = 0;
          while( true ) {
            *(float *)(uVar10 + 1 + local_30 * 4) =
                 (_DAT_005ba858 / *(float *)(param_4 + local_30 * 4)) * (float)local_34[local_30];
            *(float *)(uVar10 + 5 + local_30 * 4) =
                 (_DAT_005ba858 / *(float *)(param_4 + 4 + local_30 * 4)) *
                 (float)local_34[local_30 + 1];
            *(float *)(uVar10 + 9 + local_30 * 4) =
                 (_DAT_005ba858 / *(float *)(param_4 + 8 + local_30 * 4)) *
                 (float)local_34[local_30 + 2];
            fVar1 = (_DAT_005ba858 / *(float *)(param_4 + 0xc + local_30 * 4)) *
                    (float)local_34[local_30 + 3];
            local_30 = local_30 + 4;
            if (local_38 < local_30) break;
            *(float *)((uVar10 - 3) + local_30 * 4) = fVar1;
          }
          *(float *)((uVar10 - 3) + local_30 * 4) = fVar1;
          iVar5 = local_30;
        }
        while( true ) {
          fVar1 = (_DAT_005ba858 / *(float *)(param_4 + iVar5 * 4)) * (float)local_34[iVar5];
          iVar5 = iVar5 + 1;
          if (param_7 <= iVar5) break;
          *(float *)((uVar10 - 3) + iVar5 * 4) = fVar1;
        }
        *(float *)((uVar10 - 3) + iVar5 * 4) = fVar1;
        local_2c = uVar3;
      }
      iVar5 = 0;
      if (0 < local_1c) {
        local_34 = param_2 + param_7;
        local_30 = param_8 * 4;
        local_38 = param_7;
        iVar12 = param_7;
        local_2c = uVar3;
        local_28 = param_7 * 4;
        do {
          *(int *)(puVar9 + -4) = param_7;
          *(int *)(puVar9 + -8) = local_18;
          *(int *)(puVar9 + -0xc) = local_30 * iVar12 + param_3;
          *(undefined4 *)(puVar9 + -0x10) = 0x4ebaf1;
          fVar14 = (float10)FUN_004f1618();
          iVar7 = *local_34;
          iVar2 = local_34[iVar5];
          if (iVar7 < iVar2) {
            fVar1 = *(float *)(*(int *)(param_1 + iVar2 * 4) + iVar7 * 4);
          }
          else {
            fVar1 = *(float *)(*(int *)(param_1 + iVar7 * 4) + iVar2 * 4);
          }
          *(float *)(local_2c + 1 + iVar5 * 4) = (float)(fVar14 - (float10)fVar1);
          iVar12 = iVar12 + 1;
          iVar5 = iVar5 + 1;
          uVar3 = local_2c;
        } while (iVar5 < local_1c);
      }
      *(float *)(uVar3 + 1) = _DAT_005ba858 + *(float *)(uVar3 + 1);
      *(int *)(puVar9 + -8) = local_1c;
      *(int *)(puVar9 + -4) = param_8;
      *(undefined4 *)(puVar9 + -0x18) = 0x4ebb5a;
      FUN_004ebd74();
    }
    if (param_7 < local_14) {
      if (0 < param_7) {
        if (0 < param_7) {
          local_34 = (int *)((param_6 - param_7) * 4 - 4);
          iVar12 = param_7 * 4 + param_3;
          local_24 = param_8 * 4;
          iVar5 = iVar12 + 4;
          iVar7 = 0;
          do {
            *(int **)(puVar9 + -4) = local_34;
            *(int *)(puVar9 + -8) = iVar5;
            *(int *)(puVar9 + -0xc) = iVar12;
            *(undefined4 *)(puVar9 + -0x10) = 0x4ebbb7;
            memmove(*(void **)(puVar9 + -0xc),*(void **)(puVar9 + -8),*(size_t *)(puVar9 + -4));
            iVar12 = iVar12 + local_24;
            iVar5 = iVar5 + local_24;
            iVar7 = iVar7 + 1;
          } while (iVar7 < param_7);
        }
        if (param_7 < local_14) {
          local_24 = param_8 * 4;
          puVar6 = (undefined4 *)(param_7 * local_24 + param_3);
          puVar4 = (undefined4 *)(param_7 * local_24 + param_3 + local_24);
          iVar5 = param_7;
          iVar12 = param_7;
          puVar11 = puVar6;
          puVar13 = puVar4;
          do {
            for (; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar6 = puVar11 + param_8;
            puVar4 = puVar13 + param_8;
            iVar12 = iVar12 + 1;
            iVar5 = param_7;
            puVar11 = puVar6;
            puVar13 = puVar4;
          } while (iVar12 < local_14);
        }
      }
      if (param_7 < local_14) {
        local_34 = (int *)((param_6 - param_7) * 4 - 4);
        param_3 = param_7 * 4 + param_3;
        local_38 = param_8 * 4;
        puVar6 = (undefined4 *)(param_7 * local_38 + param_3);
        puVar4 = (undefined4 *)(local_38 + param_3 + 4 + param_7 * local_38);
        iVar5 = param_7;
        do {
          *(int **)(puVar9 + -4) = local_34;
          puVar11 = puVar4;
          puVar13 = puVar6;
          for (uVar3 = (uint)local_34 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          for (uVar3 = *(uint *)(puVar9 + -4) & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          puVar6 = puVar6 + param_8;
          puVar4 = puVar4 + param_8;
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_14);
      }
    }
    if (param_7 < local_14) {
      *(int *)(puVar9 + -4) = (param_6 - param_7) * 4 + -4;
      *(int *)(puVar9 + -8) = param_4 + 4 + param_7 * 4;
      *(int *)(puVar9 + -0xc) = param_7 * 4 + param_4;
      *(undefined4 *)(puVar9 + -0x10) = 0x4ebca0;
      memmove(*(void **)(puVar9 + -0xc),*(void **)(puVar9 + -8),*(size_t *)(puVar9 + -4));
    }
  }
  return;
}




/* Function: FUN_004ebd74 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ebd74(float *param_1,float *param_2)

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
  int in_EAX;
  uint uVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined1 local_38 [36];
  
  if (1 < in_stack_00000010) {
    iVar13 = in_stack_00000010 * 4 + 0xf;
    uVar15 = (uint)(local_38 + -iVar13) & 0xfffffff0;
    uVar16 = uVar15 - 1 | 0xf;
    *(undefined4 *)(uVar15 - 4) = 0x4ebdc1;
    uVar11 = (uVar15 - iVar13 & 0xfffffff0) - 1 | 0xf;
    iVar13 = 1;
    *(undefined4 *)(uVar16 + 1) = 0;
    *(undefined4 *)(uVar11 + 1) = 0;
    if (1 < in_stack_00000010) {
      if (4 < in_stack_00000010 + -1) {
        while( true ) {
          fVar6 = param_1[iVar13] * _DAT_005ba860;
          *(float *)(uVar11 + 1 + iVar13 * 4) = fVar6;
          *(float *)(uVar16 + 1 + iVar13 * 4) = fVar6;
          fVar6 = param_1[iVar13 + 1] * _DAT_005ba860;
          *(float *)(uVar11 + 5 + iVar13 * 4) = fVar6;
          *(float *)(uVar16 + 5 + iVar13 * 4) = fVar6;
          fVar6 = param_1[iVar13 + 2] * _DAT_005ba860;
          *(float *)(uVar11 + 9 + iVar13 * 4) = fVar6;
          *(float *)(uVar16 + 9 + iVar13 * 4) = fVar6;
          fVar6 = param_1[iVar13 + 3] * _DAT_005ba860;
          *(float *)(uVar11 + 0xd + iVar13 * 4) = fVar6;
          iVar13 = iVar13 + 4;
          if (in_stack_00000010 + -5 < iVar13) break;
          *(float *)((uVar16 - 3) + iVar13 * 4) = fVar6;
        }
        *(float *)((uVar16 - 3) + iVar13 * 4) = fVar6;
      }
      while( true ) {
        fVar6 = param_1[iVar13] * _DAT_005ba860;
        *(float *)(uVar11 + 1 + iVar13 * 4) = fVar6;
        iVar13 = iVar13 + 1;
        if (in_stack_00000010 <= iVar13) break;
        *(float *)((uVar16 - 3) + iVar13 * 4) = fVar6;
      }
      *(float *)((uVar16 - 3) + iVar13 * 4) = fVar6;
    }
    fVar7 = (_DAT_005ba868 + _DAT_005ba864 * *param_1) * _DAT_005ba860;
    fVar4 = _DAT_005ba860 * (_DAT_005ba85c + _DAT_005ba864 * *param_1);
    fVar6 = fVar7 * fVar7 * *param_2 + _DAT_005ba868;
    fVar3 = (_DAT_005ba868 / fVar6) * *param_2;
    fVar5 = _DAT_005ba868 - fVar4 * fVar4 * fVar3 * _DAT_005ba868;
    fVar1 = fVar7 * fVar3 * fVar4;
    fVar3 = _DAT_005ba868 - fVar1;
    fVar4 = fVar1 * fVar7 - fVar4;
    iVar13 = 1;
    if (1 < in_stack_00000010) {
      if (3 < in_stack_00000010 + -1) {
        iVar12 = in_stack_00000014 * 4;
        while( true ) {
          fVar8 = -fVar7;
          fVar1 = *(float *)(uVar16 + 1 + iVar13 * 4);
          fVar2 = *(float *)(iVar12 + in_EAX);
          *(float *)(uVar16 + 1 + iVar13 * 4) = fVar8 * fVar2 + fVar1;
          *(float *)(uVar11 + 1 + iVar13 * 4) = fVar2 * fVar4 + fVar1 * fVar3;
          fVar1 = *(float *)(uVar16 + 5 + iVar13 * 4);
          fVar2 = *(float *)(in_stack_00000014 * 4 + in_EAX + iVar12);
          *(float *)(uVar16 + 5 + iVar13 * 4) = fVar8 * fVar2 + fVar1;
          *(float *)(uVar11 + 5 + iVar13 * 4) = fVar2 * fVar4 + fVar1 * fVar3;
          fVar1 = *(float *)(uVar16 + 9 + iVar13 * 4);
          fVar2 = *(float *)(in_stack_00000014 * 8 + in_EAX + iVar12);
          *(float *)(uVar16 + 9 + iVar13 * 4) = fVar8 * fVar2 + fVar1;
          fVar1 = fVar2 * fVar4 + fVar1 * fVar3;
          iVar13 = iVar13 + 3;
          iVar12 = iVar12 + in_stack_00000014 * 0xc;
          if (in_stack_00000010 + -4 < iVar13) break;
          *(float *)((uVar11 - 3) + iVar13 * 4) = fVar1;
        }
        *(float *)((uVar11 - 3) + iVar13 * 4) = fVar1;
      }
      iVar12 = iVar13 * in_stack_00000014 * 4;
      while( true ) {
        fVar1 = *(float *)(uVar16 + 1 + iVar13 * 4);
        fVar2 = *(float *)(iVar12 + in_EAX);
        *(float *)(uVar16 + 1 + iVar13 * 4) = -fVar7 * fVar2 + fVar1;
        fVar1 = fVar2 * fVar4 + fVar1 * fVar3;
        iVar12 = iVar12 + in_stack_00000014 * 4;
        iVar13 = iVar13 + 1;
        if (in_stack_00000010 <= iVar13) break;
        *(float *)((uVar11 - 3) + iVar13 * 4) = fVar1;
      }
      *(float *)((uVar11 - 3) + iVar13 * 4) = fVar1;
    }
    iVar13 = 1;
    if (1 < in_stack_00000010) {
      do {
        iVar12 = iVar13 * 4;
        fVar3 = *(float *)(uVar16 + 1 + iVar13 * 4);
        fVar8 = fVar3 * fVar3 * param_2[iVar13] + fVar6;
        fVar2 = (_DAT_005ba868 / fVar8) * param_2[iVar13];
        fVar6 = fVar6 * fVar2;
        fVar4 = *(float *)(uVar11 + 1 + iVar13 * 4);
        fVar7 = fVar5 - fVar4 * fVar4 * fVar6;
        fVar6 = (_DAT_005ba868 / fVar7) * fVar6;
        param_2[iVar13] = fVar5 * fVar6;
        fVar5 = *(float *)(uVar16 + 1 + iVar13 * 4);
        fVar1 = *(float *)(uVar11 + 1 + iVar13 * 4);
        iVar13 = iVar13 + 1;
        if (iVar13 < in_stack_00000010) {
          pfVar14 = (float *)(iVar12 + in_EAX + iVar13 * in_stack_00000014 * 4);
          iVar12 = iVar13;
          do {
            fVar10 = -fVar5 * *pfVar14 + *(float *)(uVar16 + 1 + iVar12 * 4);
            fVar9 = fVar3 * fVar2 * fVar10 + *pfVar14;
            *(float *)(uVar16 + 1 + iVar12 * 4) = fVar10;
            fVar10 = -fVar1 * fVar9 + *(float *)(uVar11 + 1 + iVar12 * 4);
            *(float *)(uVar11 + 1 + iVar12 * 4) = fVar10;
            iVar12 = iVar12 + 1;
            *pfVar14 = -(fVar4 * fVar6) * fVar10 + fVar9;
            pfVar14 = pfVar14 + in_stack_00000014;
          } while (iVar12 < in_stack_00000010);
        }
        fVar5 = fVar7;
        fVar6 = fVar8;
      } while (iVar13 < in_stack_00000010);
    }
    return;
  }
  return;
}




/* Function: FUN_004ec118 */

void FUN_004ec118(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  float fVar1;
  int iVar2;
  
  FUN_004f1bf8(param_1,param_3,param_4,param_5);
  iVar2 = 0;
  if (0 < param_4) {
    if (5 < param_4) {
      while( true ) {
        *(float *)(param_3 + iVar2 * 4) =
             *(float *)(param_3 + iVar2 * 4) * *(float *)(param_2 + iVar2 * 4);
        *(float *)(param_3 + 4 + iVar2 * 4) =
             *(float *)(param_3 + 4 + iVar2 * 4) * *(float *)(param_2 + 4 + iVar2 * 4);
        *(float *)(param_3 + 8 + iVar2 * 4) =
             *(float *)(param_3 + 8 + iVar2 * 4) * *(float *)(param_2 + 8 + iVar2 * 4);
        *(float *)(param_3 + 0xc + iVar2 * 4) =
             *(float *)(param_3 + 0xc + iVar2 * 4) * *(float *)(param_2 + 0xc + iVar2 * 4);
        fVar1 = *(float *)(param_3 + 0x10 + iVar2 * 4) * *(float *)(param_2 + 0x10 + iVar2 * 4);
        iVar2 = iVar2 + 5;
        if (param_4 + -6 < iVar2) break;
        *(float *)(param_3 + -4 + iVar2 * 4) = fVar1;
      }
      *(float *)(param_3 + -4 + iVar2 * 4) = fVar1;
    }
    while( true ) {
      fVar1 = *(float *)(param_3 + iVar2 * 4) * *(float *)(param_2 + iVar2 * 4);
      iVar2 = iVar2 + 1;
      if (param_4 <= iVar2) break;
      *(float *)(param_3 + -4 + iVar2 * 4) = fVar1;
    }
    *(float *)(param_3 + -4 + iVar2 * 4) = fVar1;
  }
  FUN_004f1d28(param_1,param_3,param_4,param_5);
  return;
}




/* Function: FUN_004ec1bc */

void FUN_004ec1bc(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    for (; 5 < param_2; param_2 = param_2 + -5) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1 = param_1 + 5;
    }
    do {
      *param_1 = 0;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (0 < param_2);
  }
  return;
}




/* Function: FUN_004ec20c */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004ec20c(float *param_1,undefined4 *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  undefined1 *puVar22;
  int iVar23;
  float *pfVar24;
  int iVar25;
  float *pfVar26;
  int iVar27;
  undefined1 local_90 [4];
  float *local_8c;
  float *local_84;
  int local_78;
  int local_68;
  int local_64;
  int local_5c;
  int local_58;
  int local_50;
  int local_38;
  int local_34;
  int local_24;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xfffffff4) != 0) {
      uVar4 = param_3 - 1;
      iVar16 = (uVar4 | 3) + 1;
      iVar3 = param_3;
      if (1 < param_3) {
        iVar3 = iVar16;
      }
      uVar13 = param_3 * 4 * iVar3;
      uVar17 = (uint)(local_90 + -(uVar13 + 0xf)) & 0xfffffff0;
      uVar9 = uVar17 - 1 | 0xf;
      pfVar1 = (float *)(uVar9 + 1);
      *(uint *)(uVar17 - 4) = uVar13;
      pfVar24 = pfVar1;
      for (uVar13 = uVar13 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pfVar24 = *param_1;
        param_1 = param_1 + 1;
        pfVar24 = pfVar24 + 1;
      }
      for (uVar13 = *(uint *)(uVar17 - 4) & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)pfVar24 = *(undefined1 *)param_1;
        param_1 = (float *)((int)param_1 + 1);
        pfVar24 = (float *)((int)pfVar24 + 1);
      }
      iVar10 = param_3 * 4 + 0xf;
      *(undefined4 *)(uVar17 - 4) = 0x4ec2b8;
      uVar18 = uVar17 - iVar10 & 0xfffffff0;
      uVar13 = uVar18 - 1 | 0xf;
      iVar15 = param_3;
      if (1 < param_3) {
        iVar15 = iVar16;
      }
      *(undefined4 *)(uVar18 - 4) = 0x4ec2d7;
      puVar19 = (undefined1 *)(uVar18 - iVar10 & 0xfffffff0);
      iVar27 = 0;
      if (0 < param_3) {
        iVar11 = 0;
        local_8c = pfVar1;
        do {
          pfVar24 = (float *)(iVar11 + 1 + uVar9);
          iVar25 = 0;
          pfVar5 = pfVar1;
          if (0 < iVar27) {
            do {
              fVar2 = *pfVar24;
              pfVar14 = pfVar5;
              pfVar26 = local_8c;
              for (iVar8 = iVar25; iVar8 != 0; iVar8 = iVar8 + -1) {
                fVar2 = fVar2 - *pfVar26 * *pfVar14;
                pfVar26 = pfVar26 + 1;
                pfVar14 = pfVar14 + 1;
              }
              iVar8 = iVar25 * 4;
              iVar25 = iVar25 + 1;
              *pfVar24 = fVar2 * *(float *)(((uint)(puVar19 + -1) | 0xf) + 1 + iVar8);
              pfVar24 = pfVar24 + 1;
              pfVar5 = pfVar5 + iVar15;
            } while (iVar25 < iVar27);
          }
          fVar2 = *pfVar24;
          pfVar5 = local_8c;
          for (iVar25 = iVar27; iVar25 != 0; iVar25 = iVar25 + -1) {
            fVar2 = fVar2 - *pfVar5 * *pfVar5;
            pfVar5 = pfVar5 + 1;
          }
          if (fVar2 <= _DAT_005ba898) {
            return 0;
          }
          *pfVar24 = SQRT(fVar2);
          iVar11 = iVar11 + iVar15 * 4;
          *(float *)(((uint)(puVar19 + -1) | 0xf) + 1 + iVar27 * 4) = _DAT_005ba894 / SQRT(fVar2);
          iVar27 = iVar27 + 1;
          local_8c = local_8c + iVar15;
        } while (iVar27 < param_3);
      }
      iVar15 = param_3 * iVar3;
      puVar6 = param_2;
      if (0 < iVar15) {
        for (; 5 < iVar15; iVar15 = iVar15 + -5) {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6 = puVar6 + 5;
        }
        do {
          *puVar6 = 0;
          iVar15 = iVar15 + -1;
          puVar6 = puVar6 + 1;
        } while (0 < iVar15);
      }
      if (0 < param_3) {
        iVar15 = param_3 + -6;
        local_58 = 0;
        do {
          iVar27 = 0;
          if (0 < param_3) {
            if (5 < param_3) {
              do {
                *(undefined4 *)(uVar13 + 1 + iVar27 * 4) = 0;
                *(undefined4 *)(uVar13 + 5 + iVar27 * 4) = 0;
                *(undefined4 *)(uVar13 + 9 + iVar27 * 4) = 0;
                *(undefined4 *)(uVar13 + 0xd + iVar27 * 4) = 0;
                *(undefined4 *)(uVar13 + 0x11 + iVar27 * 4) = 0;
                iVar27 = iVar27 + 5;
              } while (iVar27 <= iVar15);
            }
            do {
              *(undefined4 *)(uVar13 + 1 + iVar27 * 4) = 0;
              iVar27 = iVar27 + 1;
            } while (iVar27 < param_3);
          }
          iVar27 = local_58 * 4;
          *(undefined4 *)(uVar13 + 1 + local_58 * 4) = 0x3f800000;
          iVar11 = param_3;
          if (1 < param_3) {
            iVar11 = iVar16;
          }
          *(undefined4 *)(puVar19 + -4) = 0x4ec4e2;
          puVar19 = (undefined1 *)((int)puVar19 - iVar10 & 0xfffffff0);
          uVar7 = (uint)(puVar19 + -1) | 0xf;
          iVar25 = 0;
          if (0 < param_3) {
            local_24 = 0;
            iVar8 = 0;
            do {
              local_38 = 0;
              fVar2 = _DAT_005ba898;
              if (0 < iVar25) {
                if (iVar25 < 6) {
                  local_34 = local_24 + 1 + uVar9;
                }
                else {
                  local_34 = local_24 + 1 + uVar9;
                  local_38 = 0;
                  do {
                    fVar2 = *(float *)(local_34 + 0x10 + local_38 * 4) *
                            *(float *)(uVar7 + 0x11 + local_38 * 4) +
                            *(float *)(local_34 + 0xc + local_38 * 4) *
                            *(float *)(uVar7 + 0xd + local_38 * 4) +
                            *(float *)(local_34 + 8 + local_38 * 4) *
                            *(float *)(uVar7 + 9 + local_38 * 4) +
                            *(float *)(local_34 + 4 + local_38 * 4) *
                            *(float *)(uVar7 + 5 + local_38 * 4) +
                            *(float *)(local_34 + local_38 * 4) *
                            *(float *)(uVar7 + 1 + local_38 * 4) + fVar2;
                    local_38 = local_38 + 5;
                  } while (local_38 <= iVar25 + -6);
                }
                do {
                  fVar2 = *(float *)(local_34 + local_38 * 4) * *(float *)(uVar7 + 1 + local_38 * 4)
                          + fVar2;
                  local_38 = local_38 + 1;
                } while (local_38 < iVar25);
              }
              *(float *)(uVar7 + 1 + iVar25 * 4) =
                   (_DAT_005ba894 / *(float *)(uVar9 + 1 + (iVar8 + iVar25) * 4)) *
                   (*(float *)(uVar13 + 1 + iVar25 * 4) - fVar2);
              iVar25 = iVar25 + 1;
              local_24 = local_24 + iVar11 * 4;
              iVar8 = iVar8 + iVar11;
            } while (iVar25 < param_3);
          }
          if (-1 < (int)uVar4) {
            iVar25 = iVar11 * 4;
            local_50 = uVar4 * iVar11;
            uVar12 = uVar4;
            do {
              iVar8 = uVar12 + 1;
              fVar2 = _DAT_005ba898;
              if (iVar8 < param_3) {
                if (param_3 - iVar8 < 6) {
                  local_68 = uVar12 << 2;
                  local_5c = uVar9 + 1 + uVar12 * 4;
                }
                else {
                  local_68 = uVar12 * 4;
                  local_5c = uVar9 + 1 + uVar12 * 4;
                  iVar23 = iVar8 * iVar25;
                  do {
                    fVar2 = *(float *)(local_68 + uVar9 + 1 + iVar11 * 0x10 + iVar23) *
                            *(float *)(uVar13 + 0x11 + iVar8 * 4) +
                            *(float *)(local_68 + iVar11 * 0xc + 1 + uVar9 + iVar23) *
                            *(float *)(uVar13 + 0xd + iVar8 * 4) +
                            *(float *)(local_68 + uVar9 + 1 + iVar11 * 8 + iVar23) *
                            *(float *)(uVar13 + 9 + iVar8 * 4) +
                            *(float *)(local_68 + uVar9 + 1 + iVar11 * 4 + iVar23) *
                            *(float *)(uVar13 + 5 + iVar8 * 4) +
                            *(float *)(iVar23 + local_5c) * *(float *)(uVar13 + 1 + iVar8 * 4) +
                            fVar2;
                    iVar23 = iVar23 + iVar11 * 0x14;
                    iVar8 = iVar8 + 5;
                  } while (iVar8 <= iVar15);
                }
                iVar23 = iVar8 * iVar25;
                do {
                  fVar2 = *(float *)(iVar23 + local_5c) * *(float *)(uVar13 + 1 + iVar8 * 4) + fVar2
                  ;
                  iVar23 = iVar23 + iVar25;
                  iVar8 = iVar8 + 1;
                } while (iVar8 < param_3);
              }
              else {
                local_68 = uVar12 << 2;
              }
              iVar8 = local_50 + uVar12;
              uVar12 = uVar12 - 1;
              *(float *)(local_68 + 1 + uVar13) =
                   (_DAT_005ba894 / *(float *)(uVar9 + 1 + iVar8 * 4)) *
                   (*(float *)(uVar7 + 1 + local_68) - fVar2);
              local_50 = local_50 - iVar11;
            } while (-1 < (int)uVar12);
          }
          iVar11 = 0;
          if (0 < param_3) {
            if (5 < param_3) {
              iVar25 = 0;
              do {
                *(undefined4 *)((int)param_2 + iVar25 + iVar27) =
                     *(undefined4 *)(uVar13 + 1 + iVar11 * 4);
                *(undefined4 *)((int)param_2 + iVar25 + iVar27 + iVar3 * 4) =
                     *(undefined4 *)(uVar13 + 5 + iVar11 * 4);
                *(undefined4 *)((int)param_2 + iVar25 + iVar27 + iVar3 * 8) =
                     *(undefined4 *)(uVar13 + 9 + iVar11 * 4);
                *(undefined4 *)((int)param_2 + iVar25 + iVar27 + iVar3 * 0xc) =
                     *(undefined4 *)(uVar13 + 0xd + iVar11 * 4);
                *(undefined4 *)((int)param_2 + iVar25 + iVar27 + iVar3 * 0x10) =
                     *(undefined4 *)(uVar13 + 0x11 + iVar11 * 4);
                iVar11 = iVar11 + 5;
                iVar25 = iVar25 + iVar3 * 0x14;
              } while (iVar11 <= iVar15);
            }
            iVar25 = iVar11 * iVar3 * 4;
            do {
              *(undefined4 *)((int)param_2 + iVar25 + iVar27) =
                   *(undefined4 *)(uVar13 + 1 + iVar11 * 4);
              iVar11 = iVar11 + 1;
              iVar25 = iVar25 + iVar3 * 4;
            } while (iVar11 < param_3);
          }
          local_58 = local_58 + 1;
        } while (local_58 < param_3);
      }
      return 1;
    }
    if (_DAT_005b71d0 != 0) break;
    FUN_004d34fc();
  }
  if (param_3 < 2) {
    local_78 = param_3;
  }
  else {
    local_78 = (param_3 - 1U | 3) + 1;
  }
  uVar9 = param_3 * 4 * local_78;
  uVar20 = (uint)(local_90 + -(uVar9 + 0xf)) & 0xfffffff0;
  uVar4 = uVar20 - 1 | 0xf;
  pfVar1 = (float *)(uVar4 + 1);
  *(uint *)(uVar20 - 4) = uVar9;
  pfVar24 = pfVar1;
  for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pfVar24 = *param_1;
    param_1 = param_1 + 1;
    pfVar24 = pfVar24 + 1;
  }
  for (uVar9 = *(uint *)(uVar20 - 4) & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)pfVar24 = *(undefined1 *)param_1;
    param_1 = (float *)((int)param_1 + 1);
    pfVar24 = (float *)((int)pfVar24 + 1);
  }
  iVar3 = param_3 * 4 + 0xf;
  *(undefined4 *)(uVar20 - 4) = 0x4ec902;
  uVar21 = uVar20 - iVar3 & 0xfffffff0;
  uVar9 = uVar21 - 1 | 0xf;
  iVar16 = param_3;
  if (1 < param_3) {
    iVar16 = (param_3 - 1U | 3) + 1;
  }
  *(undefined4 *)(uVar21 - 4) = 0x4ec92c;
  puVar22 = (undefined1 *)(uVar21 - iVar3 & 0xfffffff0);
  iVar10 = 0;
  if (0 < param_3) {
    iVar15 = 0;
    local_84 = pfVar1;
    do {
      pfVar24 = (float *)(iVar15 + 1 + uVar4);
      iVar27 = 0;
      pfVar5 = pfVar1;
      if (0 < iVar10) {
        do {
          fVar2 = *pfVar24;
          pfVar14 = pfVar5;
          pfVar26 = local_84;
          for (iVar11 = iVar27; iVar11 != 0; iVar11 = iVar11 + -1) {
            fVar2 = fVar2 - *pfVar26 * *pfVar14;
            pfVar26 = pfVar26 + 1;
            pfVar14 = pfVar14 + 1;
          }
          iVar11 = iVar27 * 4;
          iVar27 = iVar27 + 1;
          *pfVar24 = fVar2 * *(float *)(((uint)(puVar22 + -1) | 0xf) + 1 + iVar11);
          pfVar24 = pfVar24 + 1;
          pfVar5 = pfVar5 + iVar16;
        } while (iVar27 < iVar10);
      }
      fVar2 = *pfVar24;
      pfVar5 = local_84;
      for (iVar27 = iVar10; iVar27 != 0; iVar27 = iVar27 + -1) {
        fVar2 = fVar2 - *pfVar5 * *pfVar5;
        pfVar5 = pfVar5 + 1;
      }
      if (fVar2 <= _DAT_005ba8a8) {
        return 0;
      }
      *pfVar24 = SQRT(fVar2);
      iVar15 = iVar15 + iVar16 * 4;
      *(float *)(((uint)(puVar22 + -1) | 0xf) + 1 + iVar10 * 4) = _DAT_005ba8a4 / SQRT(fVar2);
      iVar10 = iVar10 + 1;
      local_84 = local_84 + iVar16;
    } while (iVar10 < param_3);
  }
  iVar16 = param_3 * local_78;
  puVar6 = param_2;
  if (0 < iVar16) {
    for (; 5 < iVar16; iVar16 = iVar16 + -5) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6 = puVar6 + 5;
    }
    do {
      *puVar6 = 0;
      iVar16 = iVar16 + -1;
      puVar6 = puVar6 + 1;
    } while (0 < iVar16);
  }
  if (0 < param_3) {
    uVar13 = param_3 - 1;
    iVar16 = param_3 + -6;
    local_58 = 0;
    do {
      iVar10 = 0;
      if (0 < param_3) {
        if (5 < param_3) {
          do {
            *(undefined4 *)(uVar9 + 1 + iVar10 * 4) = 0;
            *(undefined4 *)(uVar9 + 5 + iVar10 * 4) = 0;
            *(undefined4 *)(uVar9 + 9 + iVar10 * 4) = 0;
            *(undefined4 *)(uVar9 + 0xd + iVar10 * 4) = 0;
            *(undefined4 *)(uVar9 + 0x11 + iVar10 * 4) = 0;
            iVar10 = iVar10 + 5;
          } while (iVar10 <= iVar16);
        }
        do {
          *(undefined4 *)(uVar9 + 1 + iVar10 * 4) = 0;
          iVar10 = iVar10 + 1;
        } while (iVar10 < param_3);
      }
      iVar10 = local_58 * 4;
      *(undefined4 *)(uVar9 + 1 + local_58 * 4) = 0x3f800000;
      iVar15 = param_3;
      if (1 < param_3) {
        iVar15 = (uVar13 | 3) + 1;
      }
      *(undefined4 *)(puVar22 + -4) = 0x4ecb4e;
      puVar22 = (undefined1 *)((int)puVar22 - iVar3 & 0xfffffff0);
      uVar7 = (uint)(puVar22 + -1) | 0xf;
      iVar27 = 0;
      if (0 < param_3) {
        local_24 = 0;
        iVar11 = 0;
        do {
          local_38 = 0;
          fVar2 = _DAT_005ba8a8;
          if (0 < iVar27) {
            if (iVar27 < 6) {
              local_34 = local_24 + 1 + uVar4;
            }
            else {
              local_34 = local_24 + 1 + uVar4;
              local_38 = 0;
              do {
                fVar2 = *(float *)(local_34 + 0x10 + local_38 * 4) *
                        *(float *)(uVar7 + 0x11 + local_38 * 4) +
                        *(float *)(local_34 + 0xc + local_38 * 4) *
                        *(float *)(uVar7 + 0xd + local_38 * 4) +
                        *(float *)(local_34 + 8 + local_38 * 4) *
                        *(float *)(uVar7 + 9 + local_38 * 4) +
                        *(float *)(local_34 + 4 + local_38 * 4) *
                        *(float *)(uVar7 + 5 + local_38 * 4) +
                        *(float *)(local_34 + local_38 * 4) * *(float *)(uVar7 + 1 + local_38 * 4) +
                        fVar2;
                local_38 = local_38 + 5;
              } while (local_38 <= iVar27 + -6);
            }
            do {
              fVar2 = *(float *)(local_34 + local_38 * 4) * *(float *)(uVar7 + 1 + local_38 * 4) +
                      fVar2;
              local_38 = local_38 + 1;
            } while (local_38 < iVar27);
          }
          *(float *)(uVar7 + 1 + iVar27 * 4) =
               (_DAT_005ba8a4 / *(float *)(uVar4 + 1 + (iVar11 + iVar27) * 4)) *
               (*(float *)(uVar9 + 1 + iVar27 * 4) - fVar2);
          iVar27 = iVar27 + 1;
          local_24 = local_24 + iVar15 * 4;
          iVar11 = iVar11 + iVar15;
        } while (iVar27 < param_3);
      }
      if (-1 < (int)uVar13) {
        iVar27 = iVar15 * 4;
        local_50 = uVar13 * iVar15;
        uVar12 = uVar13;
        do {
          iVar11 = uVar12 + 1;
          fVar2 = _DAT_005ba8a8;
          if (iVar11 < param_3) {
            if (param_3 - iVar11 < 6) {
              local_64 = uVar12 << 2;
              local_5c = uVar4 + 1 + uVar12 * 4;
            }
            else {
              local_64 = uVar12 * 4;
              local_5c = uVar4 + 1 + uVar12 * 4;
              iVar25 = iVar11 * iVar27;
              do {
                fVar2 = *(float *)(local_64 + uVar4 + 1 + iVar15 * 0x10 + iVar25) *
                        *(float *)(uVar9 + 0x11 + iVar11 * 4) +
                        *(float *)(local_64 + iVar15 * 0xc + 1 + uVar4 + iVar25) *
                        *(float *)(uVar9 + 0xd + iVar11 * 4) +
                        *(float *)(local_64 + uVar4 + 1 + iVar15 * 8 + iVar25) *
                        *(float *)(uVar9 + 9 + iVar11 * 4) +
                        *(float *)(local_64 + uVar4 + 1 + iVar15 * 4 + iVar25) *
                        *(float *)(uVar9 + 5 + iVar11 * 4) +
                        *(float *)(iVar25 + local_5c) * *(float *)(uVar9 + 1 + iVar11 * 4) + fVar2;
                iVar25 = iVar25 + iVar15 * 0x14;
                iVar11 = iVar11 + 5;
              } while (iVar11 <= iVar16);
            }
            iVar25 = iVar11 * iVar27;
            do {
              fVar2 = *(float *)(iVar25 + local_5c) * *(float *)(uVar9 + 1 + iVar11 * 4) + fVar2;
              iVar25 = iVar25 + iVar27;
              iVar11 = iVar11 + 1;
            } while (iVar11 < param_3);
          }
          else {
            local_64 = uVar12 << 2;
          }
          iVar11 = local_50 + uVar12;
          uVar12 = uVar12 - 1;
          *(float *)(local_64 + 1 + uVar9) =
               (_DAT_005ba8a4 / *(float *)(uVar4 + 1 + iVar11 * 4)) *
               (*(float *)(uVar7 + 1 + local_64) - fVar2);
          local_50 = local_50 - iVar15;
        } while (-1 < (int)uVar12);
      }
      iVar15 = 0;
      if (0 < param_3) {
        if (5 < param_3) {
          iVar27 = 0;
          do {
            *(undefined4 *)((int)param_2 + iVar27 + iVar10) =
                 *(undefined4 *)(uVar9 + 1 + iVar15 * 4);
            *(undefined4 *)((int)param_2 + iVar27 + iVar10 + local_78 * 4) =
                 *(undefined4 *)(uVar9 + 5 + iVar15 * 4);
            *(undefined4 *)((int)param_2 + iVar27 + iVar10 + local_78 * 8) =
                 *(undefined4 *)(uVar9 + 9 + iVar15 * 4);
            *(undefined4 *)((int)param_2 + iVar27 + iVar10 + local_78 * 0xc) =
                 *(undefined4 *)(uVar9 + 0xd + iVar15 * 4);
            *(undefined4 *)((int)param_2 + iVar27 + iVar10 + local_78 * 0x10) =
                 *(undefined4 *)(uVar9 + 0x11 + iVar15 * 4);
            iVar15 = iVar15 + 5;
            iVar27 = iVar27 + local_78 * 0x14;
          } while (iVar15 <= iVar16);
        }
        iVar27 = iVar15 * local_78 * 4;
        do {
          *(undefined4 *)((int)param_2 + iVar27 + iVar10) = *(undefined4 *)(uVar9 + 1 + iVar15 * 4);
          iVar15 = iVar15 + 1;
          iVar27 = iVar27 + local_78 * 4;
        } while (iVar15 < param_3);
      }
      local_58 = local_58 + 1;
    } while (local_58 < param_3);
  }
  return 1;
}




/* Function: FUN_004ecee4 */

void FUN_004ecee4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  if (0 < param_2) {
    for (; 5 < param_2; param_2 = param_2 + -5) {
      *param_1 = param_3;
      param_1[1] = param_3;
      param_1[2] = param_3;
      param_1[3] = param_3;
      param_1[4] = param_3;
      param_1 = param_1 + 5;
    }
    do {
      *param_1 = param_3;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (0 < param_2);
  }
  return;
}




/* Function: FUN_004ecf20 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004ecf20(float *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  undefined1 local_40 [16];
  float *local_30;
  float *local_2c;
  
  while ((_DAT_005b71d0 & 0xfffffff4) == 0) {
    if (_DAT_005b71d0 != 0) {
      iVar4 = param_2;
      if (1 < param_2) {
        iVar4 = (param_2 - 1U | 3) + 1;
      }
      uVar5 = param_2 * 4 * iVar4;
      uVar10 = (uint)(local_40 + -(uVar5 + 0xf)) & 0xfffffff0;
      pfVar1 = (float *)((uVar10 - 1 | 0xf) + 1);
      *(uint *)(uVar10 - 4) = uVar5;
      pfVar8 = pfVar1;
      for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pfVar8 = *param_1;
        param_1 = param_1 + 1;
        pfVar8 = pfVar8 + 1;
      }
      for (uVar5 = *(uint *)(uVar10 - 4) & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)pfVar8 = *(undefined1 *)param_1;
        param_1 = (float *)((int)param_1 + 1);
        pfVar8 = (float *)((int)pfVar8 + 1);
      }
      iVar4 = param_2;
      if (1 < param_2) {
        iVar4 = (param_2 - 1U | 3) + 1;
      }
      *(undefined4 *)(uVar10 - 4) = 0x4ed150;
      uVar5 = (uVar10 - (param_2 * 4 + 0xf) & 0xfffffff0) - 1 | 0xf;
      iVar13 = 0;
      if (0 < param_2) {
        iVar6 = 0;
        local_2c = pfVar1;
        do {
          pfVar8 = (float *)(iVar6 + 1 + (uVar10 - 1 | 0xf));
          iVar11 = 0;
          pfVar3 = pfVar1;
          if (0 < iVar13) {
            do {
              fVar2 = *pfVar8;
              pfVar7 = pfVar3;
              pfVar12 = local_2c;
              for (iVar14 = iVar11; iVar14 != 0; iVar14 = iVar14 + -1) {
                fVar2 = fVar2 - *pfVar12 * *pfVar7;
                pfVar12 = pfVar12 + 1;
                pfVar7 = pfVar7 + 1;
              }
              iVar14 = iVar11 * 4;
              iVar11 = iVar11 + 1;
              *pfVar8 = fVar2 * *(float *)(uVar5 + 1 + iVar14);
              pfVar8 = pfVar8 + 1;
              pfVar3 = pfVar3 + iVar4;
            } while (iVar11 < iVar13);
          }
          fVar2 = *pfVar8;
          pfVar3 = local_2c;
          for (iVar11 = iVar13; iVar11 != 0; iVar11 = iVar11 + -1) {
            fVar2 = fVar2 - *pfVar3 * *pfVar3;
            pfVar3 = pfVar3 + 1;
          }
          if (fVar2 <= _DAT_005ba8cc) {
            return 0;
          }
          *pfVar8 = SQRT(fVar2);
          iVar6 = iVar6 + iVar4 * 4;
          *(float *)(uVar5 + 1 + iVar13 * 4) = _DAT_005ba8c8 / SQRT(fVar2);
          iVar13 = iVar13 + 1;
          local_2c = local_2c + iVar4;
        } while (iVar13 < param_2);
      }
      return 1;
    }
    FUN_004d34fc();
  }
  iVar13 = (param_2 - 1U | 3) + 1;
  iVar4 = param_2;
  if (1 < param_2) {
    iVar4 = iVar13;
  }
  uVar5 = param_2 * 4 * iVar4;
  uVar9 = (uint)(local_40 + -(uVar5 + 0xf)) & 0xfffffff0;
  pfVar1 = (float *)((uVar9 - 1 | 0xf) + 1);
  *(uint *)(uVar9 - 4) = uVar5;
  pfVar8 = pfVar1;
  for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pfVar8 = *param_1;
    param_1 = param_1 + 1;
    pfVar8 = pfVar8 + 1;
  }
  for (uVar5 = *(uint *)(uVar9 - 4) & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)pfVar8 = *(undefined1 *)param_1;
    param_1 = (float *)((int)param_1 + 1);
    pfVar8 = (float *)((int)pfVar8 + 1);
  }
  if (param_2 < 2) {
    iVar13 = param_2;
  }
  *(undefined4 *)(uVar9 - 4) = 0x4ecfcc;
  uVar5 = (uVar9 - (param_2 * 4 + 0xf) & 0xfffffff0) - 1 | 0xf;
  iVar4 = 0;
  if (0 < param_2) {
    iVar6 = 0;
    local_30 = pfVar1;
    do {
      pfVar8 = (float *)(iVar6 + 1 + (uVar9 - 1 | 0xf));
      iVar11 = 0;
      pfVar3 = pfVar1;
      if (0 < iVar4) {
        do {
          fVar2 = *pfVar8;
          pfVar7 = pfVar3;
          pfVar12 = local_30;
          for (iVar14 = iVar11; iVar14 != 0; iVar14 = iVar14 + -1) {
            fVar2 = fVar2 - *pfVar12 * *pfVar7;
            pfVar12 = pfVar12 + 1;
            pfVar7 = pfVar7 + 1;
          }
          iVar14 = iVar11 * 4;
          iVar11 = iVar11 + 1;
          *pfVar8 = fVar2 * *(float *)(uVar5 + 1 + iVar14);
          pfVar8 = pfVar8 + 1;
          pfVar3 = pfVar3 + iVar13;
        } while (iVar11 < iVar4);
      }
      fVar2 = *pfVar8;
      pfVar3 = local_30;
      for (iVar11 = iVar4; iVar11 != 0; iVar11 = iVar11 + -1) {
        fVar2 = fVar2 - *pfVar3 * *pfVar3;
        pfVar3 = pfVar3 + 1;
      }
      if (fVar2 <= _DAT_005ba8bc) {
        return 0;
      }
      *pfVar8 = SQRT(fVar2);
      iVar6 = iVar6 + iVar13 * 4;
      *(float *)(uVar5 + 1 + iVar4 * 4) = _DAT_005ba8b8 / SQRT(fVar2);
      iVar4 = iVar4 + 1;
      local_30 = local_30 + iVar13;
    } while (iVar4 < param_2);
  }
  return 1;
}




/* Function: FUN_004ed23c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ed23c(float *param_1,float *param_2,float *param_3)

{
  *param_3 = ((-*param_1 * param_2[1] - param_1[1] * param_2[2]) - param_1[2] * param_2[3]) *
             _DAT_005ba8d0;
  param_3[1] = ((param_1[1] * param_2[3] + *param_1 * *param_2) - param_1[2] * param_2[2]) *
               _DAT_005ba8d0;
  param_3[2] = (param_1[2] * param_2[1] + param_1[1] * *param_2 + -*param_1 * param_2[3]) *
               _DAT_005ba8d0;
  param_3[3] = (param_1[2] * *param_2 + (*param_1 * param_2[2] - param_1[1] * param_2[1])) *
               _DAT_005ba8d0;
  return;
}




/* Function: FUN_004ed794 */

void FUN_004ed794(float *param_1,float *param_2,float *param_3)

{
  *param_1 = ((*param_2 * *param_3 - param_2[1] * param_3[1]) - param_2[2] * param_3[2]) -
             param_2[3] * param_3[3];
  param_1[1] = (param_2[2] * param_3[3] + param_2[1] * *param_3 + *param_2 * param_3[1]) -
               param_2[3] * param_3[2];
  param_1[2] = (param_2[3] * param_3[1] + param_2[2] * *param_3 + *param_2 * param_3[2]) -
               param_2[1] * param_3[3];
  param_1[3] = (param_2[1] * param_3[2] + param_2[3] * *param_3 + *param_2 * param_3[3]) -
               param_2[2] * param_3[1];
  return;
}




/* Function: FUN_004eda5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eda5c(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = _DAT_005ba958 * param_1[1] * param_1[1];
  fVar3 = param_1[2] * _DAT_005ba958 * param_1[2];
  fVar1 = param_1[3] * _DAT_005ba958 * param_1[3];
  *param_2 = (_DAT_005ba954 - fVar3) - fVar1;
  param_2[1] = (param_1[1] * param_1[2] - *param_1 * param_1[3]) * _DAT_005ba958;
  param_2[2] = (*param_1 * param_1[2] + param_1[1] * param_1[3]) * _DAT_005ba958;
  param_2[4] = (*param_1 * param_1[3] + param_1[1] * param_1[2]) * _DAT_005ba958;
  param_2[5] = (_DAT_005ba954 - fVar2) - fVar1;
  param_2[6] = (param_1[2] * param_1[3] - *param_1 * param_1[1]) * _DAT_005ba958;
  param_2[8] = (param_1[1] * param_1[3] - *param_1 * param_1[2]) * _DAT_005ba958;
  param_2[9] = (*param_1 * param_1[1] + param_1[2] * param_1[3]) * _DAT_005ba958;
  param_2[10] = (_DAT_005ba954 - fVar2) - fVar3;
  return;
}




/* Function: FUN_004edb30 */

void FUN_004edb30(undefined4 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0;
  return;
}




/* Function: FUN_004edb88 */

void FUN_004edb88(undefined4 param_1,undefined4 param_2)

{
  if (DAT_005b71f0 != (code *)0x0) {
    (*DAT_005b71f0)(param_1,param_2,&stack0x0000000c);
    return;
  }
  FUN_004edbc8();
  return;
}




/* Function: FUN_004edbc8 */

void __fastcall FUN_004edbc8(char *param_1,undefined4 param_2)

{
  int in_EAX;
  va_list in_stack_00000010;
  
  fflush((FILE *)(_iob_exref + 0x40));
  fflush((FILE *)(_iob_exref + 0x20));
  if (in_EAX == 0) {
    fprintf((FILE *)(_iob_exref + 0x40),"\n%s: ",param_2);
  }
  else {
    fprintf((FILE *)(_iob_exref + 0x40),"\n%s %d: ",param_2);
  }
  vfprintf((FILE *)(_iob_exref + 0x40),param_1,in_stack_00000010);
  fprintf((FILE *)(_iob_exref + 0x40),"\n");
  fflush((FILE *)(_iob_exref + 0x40));
  return;
}




/* Function: FUN_004edc68 */

void FUN_004edc68(undefined4 param_1,char *param_2)

{
  char local_450 [100];
  char local_3ec [999];
  undefined1 local_5;
  
  if (DAT_005b71f4 == (code *)0x0) {
    _snprintf(local_450,100,"ODE INTERNAL ERROR %d",param_1);
    _vsnprintf(local_3ec,1000,param_2,&stack0x0000000c);
    local_5 = 0;
    MessageBoxA((HWND)0x0,local_3ec,local_450,0x10);
  }
  else {
    (*DAT_005b71f4)(param_1,param_2,&stack0x0000000c);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




/* Function: FUN_004edcf4 */

void FUN_004edcf4(void)

{
  FUN_004edd30();
  return;
}




/* Function: FUN_004edd30 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004edd30(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint in_EAX;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  float *pfVar22;
  int iVar23;
  int iVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  float *pfVar50;
  float *pfVar51;
  undefined4 *puVar52;
  float *pfVar53;
  uint uVar54;
  float *pfVar55;
  float10 in_ST0;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  float local_15c;
  float local_158;
  float local_154;
  float local_14c;
  float local_148;
  float local_144;
  float local_13c;
  float local_138;
  float local_134;
  float local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  undefined4 local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  undefined1 *local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_cc;
  float local_c8;
  float local_c4;
  int local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  float *local_98;
  float *local_94;
  int local_90;
  float *local_8c;
  uint local_88;
  undefined1 *local_84;
  int local_80;
  int local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  float *local_60;
  int local_5c;
  float *local_58;
  float *local_54;
  float *local_50;
  float *local_4c;
  float *local_48;
  float *local_44;
  float *local_40;
  uint local_3c;
  uint local_38;
  float *local_34;
  float *local_30;
  float *local_2c;
  float *local_28;
  float local_24;
  double local_1c;
  float *local_14;
  
  local_1c = (double)in_ST0;
  iVar20 = 0;
  local_24 = (float)((float10)_DAT_005ba9cc / in_ST0);
  if (0 < param_1) {
    if (5 < param_1) {
      iVar24 = 1;
      iVar15 = 2;
      local_28 = (float *)0x3;
      local_30 = (float *)0x4;
      do {
        *(int *)((int)param_2[iVar20] + 0x10) = iVar20;
        *(int *)((int)param_2[iVar20 + 1] + 0x10) = iVar24;
        iVar24 = iVar24 + 5;
        *(int *)((int)param_2[iVar20 + 2] + 0x10) = iVar15;
        *(float **)((int)param_2[iVar20 + 3] + 0x10) = local_28;
        *(float **)((int)param_2[iVar20 + 4] + 0x10) = local_30;
        iVar15 = iVar15 + 5;
        local_28 = (float *)((int)local_28 + 5);
        local_30 = (float *)((int)local_30 + 5);
        iVar20 = iVar20 + 5;
        local_bc = param_1;
      } while (iVar20 <= param_1 + -6);
    }
    do {
      *(int *)((int)param_2[iVar20] + 0x10) = iVar20;
      iVar20 = iVar20 + 1;
    } while (iVar20 < param_1);
  }
  local_28 = (float *)(in_stack_00000014 * 4 + 0xf);
  uVar28 = (int)&local_15c - (int)local_28 & 0xfffffff0;
  local_b8 = uVar28 - 1 | 0xf;
  puVar52 = (undefined4 *)(local_b8 + 1);
  for (iVar20 = in_stack_00000014; iVar20 != 0; iVar20 = iVar20 + -1) {
    *puVar52 = *in_stack_00000010;
    in_stack_00000010 = in_stack_00000010 + 1;
    puVar52 = puVar52 + 1;
  }
  iVar20 = param_1 * 0x30 + 0xf;
  *(undefined4 *)(uVar28 - 4) = 0x4ede3a;
  uVar29 = uVar28 - iVar20 & 0xfffffff0;
  uVar48 = uVar29 - 1 | 0xf;
  local_30 = (float *)(uVar48 + 1);
  *(undefined4 *)(uVar29 - 4) = 0x4ede52;
  uVar30 = uVar29 - iVar20 & 0xfffffff0;
  local_b4 = uVar30 - 1 | 0xf;
  local_2c = (float *)(local_b4 + 1);
  *(int *)(uVar30 - 4) = param_1 * 0xc;
  *(float **)(uVar30 - 8) = local_30;
  *(undefined4 *)(uVar30 - 0xc) = 0x4ede83;
  local_94 = param_2;
  local_3c = in_EAX;
  FUN_004ec1bc();
  *(int *)(uVar30 - 4) = param_1 * 0xc;
  *(float **)(uVar30 - 8) = local_2c;
  *(undefined4 *)(uVar30 - 0xc) = 0x4ede90;
  FUN_004ec1bc();
  iVar20 = 0;
  if (0 < param_1) {
    iVar24 = 0;
    do {
      fVar4 = local_94[iVar20];
      fVar6 = *(float *)((int)fVar4 + 0x3c) * *(float *)((int)fVar4 + 0xc0) +
              *(float *)((int)fVar4 + 0x38) * *(float *)((int)fVar4 + 0xbc) +
              *(float *)((int)fVar4 + 0x34) * *(float *)((int)fVar4 + 0xb8);
      fVar9 = *(float *)((int)fVar4 + 0x3c) * *(float *)((int)fVar4 + 0xd0) +
              *(float *)((int)fVar4 + 0x38) * *(float *)((int)fVar4 + 0xcc) +
              *(float *)((int)fVar4 + 0x34) * *(float *)((int)fVar4 + 200);
      fVar10 = *(float *)((int)fVar4 + 0x3c) * *(float *)((int)fVar4 + 0xe0) +
               *(float *)((int)fVar4 + 0x38) * *(float *)((int)fVar4 + 0xdc) +
               *(float *)((int)fVar4 + 0x34) * *(float *)((int)fVar4 + 0xd8);
      fVar8 = *(float *)((int)fVar4 + 0x4c) * *(float *)((int)fVar4 + 0xc0) +
              *(float *)((int)fVar4 + 0x48) * *(float *)((int)fVar4 + 0xbc) +
              *(float *)((int)fVar4 + 0x44) * *(float *)((int)fVar4 + 0xb8);
      fVar11 = *(float *)((int)fVar4 + 0x4c) * *(float *)((int)fVar4 + 0xd0) +
               *(float *)((int)fVar4 + 0x48) * *(float *)((int)fVar4 + 0xcc) +
               *(float *)((int)fVar4 + 0x44) * *(float *)((int)fVar4 + 200);
      fVar12 = *(float *)((int)fVar4 + 0x4c) * *(float *)((int)fVar4 + 0xe0) +
               *(float *)((int)fVar4 + 0x48) * *(float *)((int)fVar4 + 0xdc) +
               *(float *)((int)fVar4 + 0x44) * *(float *)((int)fVar4 + 0xd8);
      fVar7 = *(float *)((int)fVar4 + 0x5c) * *(float *)((int)fVar4 + 0xc0) +
              *(float *)((int)fVar4 + 0x58) * *(float *)((int)fVar4 + 0xbc) +
              *(float *)((int)fVar4 + 0x54) * *(float *)((int)fVar4 + 0xb8);
      fVar13 = *(float *)((int)fVar4 + 0x5c) * *(float *)((int)fVar4 + 0xd0) +
               *(float *)((int)fVar4 + 0x58) * *(float *)((int)fVar4 + 0xcc) +
               *(float *)((int)fVar4 + 0x54) * *(float *)((int)fVar4 + 200);
      fVar14 = *(float *)((int)fVar4 + 0x5c) * *(float *)((int)fVar4 + 0xe0) +
               *(float *)((int)fVar4 + 0x58) * *(float *)((int)fVar4 + 0xdc) +
               *(float *)((int)fVar4 + 0x54) * *(float *)((int)fVar4 + 0xd8);
      fVar4 = local_94[iVar20];
      *(float *)(iVar24 + 1 + uVar48) =
           *(float *)((int)fVar4 + 0xc0) * fVar7 +
           *(float *)((int)fVar4 + 0xbc) * fVar8 + *(float *)((int)fVar4 + 0xb8) * fVar6;
      *(float *)(iVar24 + 5 + uVar48) =
           *(float *)((int)fVar4 + 0xc0) * fVar13 +
           *(float *)((int)fVar4 + 0xbc) * fVar11 + *(float *)((int)fVar4 + 0xb8) * fVar9;
      *(float *)(iVar24 + 9 + uVar48) =
           *(float *)((int)fVar4 + 0xc0) * fVar14 +
           *(float *)((int)fVar4 + 0xbc) * fVar12 + *(float *)((int)fVar4 + 0xb8) * fVar10;
      *(float *)(iVar24 + 0x11 + uVar48) =
           *(float *)((int)fVar4 + 0xd0) * fVar7 +
           *(float *)((int)fVar4 + 0xcc) * fVar8 + *(float *)((int)fVar4 + 200) * fVar6;
      *(float *)(iVar24 + 0x15 + uVar48) =
           *(float *)((int)fVar4 + 0xd0) * fVar13 +
           *(float *)((int)fVar4 + 0xcc) * fVar11 + *(float *)((int)fVar4 + 200) * fVar9;
      *(float *)(iVar24 + 0x19 + uVar48) =
           *(float *)((int)fVar4 + 0xd0) * fVar14 +
           *(float *)((int)fVar4 + 0xcc) * fVar12 + *(float *)((int)fVar4 + 200) * fVar10;
      *(float *)(iVar24 + 0x21 + uVar48) =
           *(float *)((int)fVar4 + 0xe0) * fVar7 +
           *(float *)((int)fVar4 + 0xdc) * fVar8 + *(float *)((int)fVar4 + 0xd8) * fVar6;
      *(float *)(iVar24 + 0x25 + uVar48) =
           *(float *)((int)fVar4 + 0xe0) * fVar13 +
           *(float *)((int)fVar4 + 0xdc) * fVar11 + *(float *)((int)fVar4 + 0xd8) * fVar9;
      *(float *)(iVar24 + 0x29 + uVar48) =
           *(float *)((int)fVar4 + 0xe0) * fVar14 +
           *(float *)((int)fVar4 + 0xdc) * fVar12 + *(float *)((int)fVar4 + 0xd8) * fVar10;
      fVar4 = local_94[iVar20];
      fVar6 = *(float *)((int)fVar4 + 0x6c) * *(float *)((int)fVar4 + 0xc0) +
              *(float *)((int)fVar4 + 0x68) * *(float *)((int)fVar4 + 0xbc) +
              *(float *)((int)fVar4 + 100) * *(float *)((int)fVar4 + 0xb8);
      fVar7 = *(float *)((int)fVar4 + 0x6c) * *(float *)((int)fVar4 + 0xd0) +
              *(float *)((int)fVar4 + 0x68) * *(float *)((int)fVar4 + 0xcc) +
              *(float *)((int)fVar4 + 100) * *(float *)((int)fVar4 + 200);
      fVar8 = *(float *)((int)fVar4 + 0x6c) * *(float *)((int)fVar4 + 0xe0) +
              *(float *)((int)fVar4 + 0x68) * *(float *)((int)fVar4 + 0xdc) +
              *(float *)((int)fVar4 + 100) * *(float *)((int)fVar4 + 0xd8);
      local_14c = *(float *)((int)fVar4 + 0x7c) * *(float *)((int)fVar4 + 0xc0) +
                  *(float *)((int)fVar4 + 0x78) * *(float *)((int)fVar4 + 0xbc) +
                  *(float *)((int)fVar4 + 0x74) * *(float *)((int)fVar4 + 0xb8);
      local_148 = *(float *)((int)fVar4 + 0x7c) * *(float *)((int)fVar4 + 0xd0) +
                  *(float *)((int)fVar4 + 0x78) * *(float *)((int)fVar4 + 0xcc) +
                  *(float *)((int)fVar4 + 0x74) * *(float *)((int)fVar4 + 200);
      local_144 = *(float *)((int)fVar4 + 0x7c) * *(float *)((int)fVar4 + 0xe0) +
                  *(float *)((int)fVar4 + 0x78) * *(float *)((int)fVar4 + 0xdc) +
                  *(float *)((int)fVar4 + 0x74) * *(float *)((int)fVar4 + 0xd8);
      local_13c = *(float *)((int)fVar4 + 0x8c) * *(float *)((int)fVar4 + 0xc0) +
                  *(float *)((int)fVar4 + 0x88) * *(float *)((int)fVar4 + 0xbc) +
                  *(float *)((int)fVar4 + 0x84) * *(float *)((int)fVar4 + 0xb8);
      local_138 = *(float *)((int)fVar4 + 0x8c) * *(float *)((int)fVar4 + 0xd0) +
                  *(float *)((int)fVar4 + 0x88) * *(float *)((int)fVar4 + 0xcc) +
                  *(float *)((int)fVar4 + 0x84) * *(float *)((int)fVar4 + 200);
      local_134 = *(float *)((int)fVar4 + 0x8c) * *(float *)((int)fVar4 + 0xe0) +
                  *(float *)((int)fVar4 + 0x88) * *(float *)((int)fVar4 + 0xdc) +
                  *(float *)((int)fVar4 + 0x84) * *(float *)((int)fVar4 + 0xd8);
      fVar4 = local_94[iVar20];
      *(float *)(local_b4 + 1 + iVar24) =
           *(float *)((int)fVar4 + 0xc0) * local_13c +
           *(float *)((int)fVar4 + 0xbc) * local_14c + *(float *)((int)fVar4 + 0xb8) * fVar6;
      *(float *)(local_b4 + 5 + iVar24) =
           *(float *)((int)fVar4 + 0xc0) * local_138 +
           *(float *)((int)fVar4 + 0xbc) * local_148 + *(float *)((int)fVar4 + 0xb8) * fVar7;
      *(float *)(local_b4 + 9 + iVar24) =
           *(float *)((int)fVar4 + 0xc0) * local_134 +
           *(float *)((int)fVar4 + 0xbc) * local_144 + *(float *)((int)fVar4 + 0xb8) * fVar8;
      *(float *)(local_b4 + 0x11 + iVar24) =
           *(float *)((int)fVar4 + 0xd0) * local_13c +
           *(float *)((int)fVar4 + 0xcc) * local_14c + *(float *)((int)fVar4 + 200) * fVar6;
      *(float *)(local_b4 + 0x15 + iVar24) =
           *(float *)((int)fVar4 + 0xd0) * local_138 +
           *(float *)((int)fVar4 + 0xcc) * local_148 + *(float *)((int)fVar4 + 200) * fVar7;
      *(float *)(local_b4 + 0x19 + iVar24) =
           *(float *)((int)fVar4 + 0xd0) * local_134 +
           *(float *)((int)fVar4 + 0xcc) * local_144 + *(float *)((int)fVar4 + 200) * fVar8;
      *(float *)(local_b4 + 0x21 + iVar24) =
           *(float *)((int)fVar4 + 0xe0) * local_13c +
           local_14c * *(float *)((int)fVar4 + 0xdc) + *(float *)((int)fVar4 + 0xd8) * fVar6;
      *(float *)(local_b4 + 0x25 + iVar24) =
           *(float *)((int)fVar4 + 0xe0) * local_138 +
           *(float *)((int)fVar4 + 0xdc) * local_148 + *(float *)((int)fVar4 + 0xd8) * fVar7;
      *(float *)(local_b4 + 0x29 + iVar24) =
           *(float *)((int)fVar4 + 0xe0) * local_134 +
           *(float *)((int)fVar4 + 0xdc) * local_144 + *(float *)((int)fVar4 + 0xd8) * fVar8;
      fVar4 = local_94[iVar20];
      local_15c = *(float *)(iVar24 + 9 + uVar48) * *(float *)((int)fVar4 + 0x100) +
                  *(float *)(iVar24 + 5 + uVar48) * *(float *)((int)fVar4 + 0xfc) +
                  *(float *)(iVar24 + 1 + uVar48) * *(float *)((int)fVar4 + 0xf8);
      local_158 = *(float *)(iVar24 + 0x19 + uVar48) * *(float *)((int)fVar4 + 0x100) +
                  *(float *)(iVar24 + 0x15 + uVar48) * *(float *)((int)fVar4 + 0xfc) +
                  *(float *)(iVar24 + 0x11 + uVar48) * *(float *)((int)fVar4 + 0xf8);
      local_154 = *(float *)(iVar24 + 0x29 + uVar48) * *(float *)((int)fVar4 + 0x100) +
                  *(float *)(iVar24 + 0x25 + uVar48) * *(float *)((int)fVar4 + 0xfc) +
                  *(float *)(iVar24 + 0x21 + uVar48) * *(float *)((int)fVar4 + 0xf8);
      fVar4 = local_94[iVar20];
      iVar24 = iVar24 + 0x30;
      *(float *)((int)fVar4 + 0x118) =
           *(float *)((int)fVar4 + 0x118) -
           (-local_158 * *(float *)((int)fVar4 + 0x100) + *(float *)((int)fVar4 + 0xfc) * local_154)
      ;
      fVar4 = local_94[iVar20];
      *(float *)((int)fVar4 + 0x11c) =
           *(float *)((int)fVar4 + 0x11c) -
           (-local_154 * *(float *)((int)fVar4 + 0xf8) + *(float *)((int)fVar4 + 0x100) * local_15c)
      ;
      fVar4 = local_94[iVar20];
      iVar20 = iVar20 + 1;
      *(float *)((int)fVar4 + 0x120) =
           *(float *)((int)fVar4 + 0x120) -
           (-local_15c * *(float *)((int)fVar4 + 0xfc) + *(float *)((int)fVar4 + 0xf8) * local_158);
      local_bc = param_1;
    } while (iVar20 < param_1);
  }
  if (0 < param_1) {
    pfVar53 = local_94;
    do {
      fVar4 = *pfVar53;
      if ((*(uint *)((int)fVar4 + 0x18) & 8) == 0) {
        *(float *)((int)fVar4 + 0x108) =
             *(float *)((int)fVar4 + 0x20) * *(float *)(local_3c + 0x10) +
             *(float *)((int)fVar4 + 0x108);
        fVar4 = *pfVar53;
        *(float *)((int)fVar4 + 0x10c) =
             *(float *)((int)fVar4 + 0x20) * *(float *)(local_3c + 0x14) +
             *(float *)((int)fVar4 + 0x10c);
        fVar4 = *pfVar53;
        *(float *)((int)fVar4 + 0x110) =
             *(float *)((int)fVar4 + 0x20) * *(float *)(local_3c + 0x18) +
             *(float *)((int)fVar4 + 0x110);
      }
      pfVar53 = pfVar53 + 1;
    } while (pfVar53 < local_94 + param_1);
  }
  *(undefined4 *)(uVar30 - 4) = 0x4ee600;
  uVar31 = uVar30 - (in_stack_00000014 * 8 + 0xf) & 0xfffffff0;
  local_b0 = uVar31 - 1 | 0xf;
  *(undefined4 *)(uVar31 - 4) = 0x4ee61f;
  puVar32 = (undefined1 *)(uVar31 - (int)local_28 & 0xfffffff0);
  local_ac = (uint)(puVar32 + -1) | 0xf;
  local_a8 = 0;
  local_14 = (float *)0x0;
  iVar20 = local_a8;
  if (0 < in_stack_00000014) {
    pfVar53 = (float *)(local_b8 + 1);
    local_28 = (float *)(local_b8 + 1 + in_stack_00000014 * 4);
    local_60 = (float *)0x0;
    iVar20 = 0;
    puVar41 = puVar32;
    local_bc = param_1;
    do {
      fVar4 = *pfVar53;
      iVar24 = *(int *)((int)fVar4 + 0x14);
      *(uint *)(puVar41 + -4) = local_b0 + 1 + iVar20 * 8;
      *(float *)(puVar41 + -8) = fVar4;
      pcVar5 = *(code **)(iVar24 + 8);
      puVar33 = puVar41 + -0xc;
      *(undefined4 *)(puVar41 + -0xc) = 0x4ee67e;
      (*pcVar5)();
      puVar41 = puVar33 + 8;
      puVar32 = puVar33 + 8;
      if (*(int *)(local_b0 + 1 + iVar20 * 8) < 1) {
        *(undefined4 *)((int)*pfVar53 + 0x10) = 0xffffffff;
      }
      else {
        fVar4 = *pfVar53;
        *(float *)(local_b8 + 1 + iVar20 * 4) = fVar4;
        *(int *)((int)fVar4 + 0x10) = iVar20;
        iVar20 = iVar20 + 1;
      }
      pfVar53 = pfVar53 + 1;
      param_1 = local_bc;
      local_14 = local_60;
    } while (pfVar53 < local_28);
  }
  local_a8 = iVar20;
  iVar20 = 0;
  if (0 < local_a8) {
    do {
      if (*(int *)(local_b0 + 5 + iVar20 * 8) == *(int *)(local_b0 + 1 + iVar20 * 8)) {
        *(float **)(local_ac + 1 + iVar20 * 4) = local_14;
        local_14 = (float *)((int)local_14 + *(int *)(local_b0 + 1 + iVar20 * 8));
      }
      iVar20 = iVar20 + 1;
      local_bc = param_1;
    } while (iVar20 < local_a8);
  }
  iVar20 = 0;
  pfVar53 = local_14;
  if (0 < local_a8) {
    do {
      iVar24 = *(int *)(local_b0 + 5 + iVar20 * 8);
      if ((0 < iVar24) && (iVar24 < *(int *)(local_b0 + 1 + iVar20 * 8))) {
        *(float **)(local_ac + 1 + iVar20 * 4) = pfVar53;
        pfVar53 = (float *)((int)pfVar53 + *(int *)(local_b0 + 1 + iVar20 * 8));
      }
      iVar20 = iVar20 + 1;
      local_bc = param_1;
    } while (iVar20 < local_a8);
  }
  iVar20 = 0;
  if (0 < local_a8) {
    do {
      if (*(int *)(local_b0 + 5 + iVar20 * 8) == 0) {
        *(float **)(local_ac + 1 + iVar20 * 4) = pfVar53;
        pfVar53 = (float *)((int)pfVar53 + *(int *)(local_b0 + 1 + iVar20 * 8));
      }
      iVar20 = iVar20 + 1;
      local_bc = param_1;
    } while (iVar20 < local_a8);
  }
  local_64 = param_1 * 0x20 + 0xf;
  *(undefined4 *)(puVar32 + -4) = 0x4ee792;
  puVar34 = (undefined1 *)((int)puVar32 - local_64 & 0xfffffff0);
  uVar48 = (int)puVar34 - 1U | 0xf;
  local_6c = param_1 * 4;
  local_70 = param_1 << 3;
  *(int *)(puVar34 + -4) = local_70;
  *(uint *)(puVar34 + -8) = uVar48 + 1;
  *(undefined4 *)(puVar34 + -0xc) = 0x4ee7b5;
  FUN_004ec1bc();
  if (0 < (int)pfVar53) {
    local_38 = (int)pfVar53 * 4;
    local_74 = (int)pfVar53 * 4 + 0xf;
    *(undefined4 *)(puVar34 + -4) = 0x4ee7d5;
    uVar35 = (int)puVar34 - local_74 & 0xfffffff0;
    local_78 = uVar35 - 1 | 0xf;
    local_34 = (float *)(local_78 + 1);
    *(undefined4 *)(uVar35 - 4) = 0x4ee7f4;
    uVar36 = uVar35 - local_74 & 0xfffffff0;
    local_a0 = uVar36 - 1 | 0xf;
    local_30 = (float *)(local_a0 + 1);
    *(undefined4 *)(uVar36 - 4) = 0x4ee819;
    uVar37 = uVar36 - local_74 & 0xfffffff0;
    local_28 = (float *)(uVar37 - 1 | 0xf);
    local_7c = (int)local_28 + 1;
    *(undefined4 *)(uVar37 - 4) = 0x4ee838;
    uVar38 = uVar37 - local_74 & 0xfffffff0;
    local_2c = (float *)(uVar38 - 1 | 0xf);
    local_80 = (int)local_2c + 1;
    *(undefined4 *)(uVar38 - 4) = 0x4ee857;
    puVar39 = (undefined1 *)(uVar38 + (int)pfVar53 * -4 & 0xfffffff0);
    *(float **)(puVar39 + -4) = pfVar53;
    *(float **)(puVar39 + -8) = local_34;
    *(undefined4 *)(puVar39 + -0xc) = 0x4ee869;
    local_84 = puVar39;
    FUN_004ec1bc();
    *(undefined4 *)(puVar39 + -4) = *(undefined4 *)(local_3c + 0x24);
    *(float **)(puVar39 + -8) = pfVar53;
    *(float **)(puVar39 + -0xc) = local_30;
    *(undefined4 *)(puVar39 + -0x10) = 0x4ee87c;
    FUN_004ecee4();
    *(undefined4 *)(puVar39 + -4) = 0xe0ad78ec;
    *(float **)(puVar39 + -8) = pfVar53;
    *(int *)(puVar39 + -0xc) = local_7c;
    *(undefined4 *)(puVar39 + -0x10) = 0x4ee88e;
    FUN_004ecee4();
    *(undefined4 *)(puVar39 + -4) = 0x60ad78ec;
    *(float **)(puVar39 + -8) = pfVar53;
    *(int *)(puVar39 + -0xc) = local_80;
    *(undefined4 *)(puVar39 + -0x10) = 0x4ee8a0;
    FUN_004ecee4();
    iVar20 = 0;
    if (0 < (int)pfVar53) {
      if (5 < (int)pfVar53) {
        do {
          *(undefined4 *)(local_84 + iVar20 * 4) = 0xffffffff;
          *(undefined4 *)(local_84 + iVar20 * 4 + 4) = 0xffffffff;
          *(undefined4 *)(local_84 + iVar20 * 4 + 8) = 0xffffffff;
          *(undefined4 *)(local_84 + iVar20 * 4 + 0xc) = 0xffffffff;
          *(undefined4 *)(local_84 + iVar20 * 4 + 0x10) = 0xffffffff;
          iVar20 = iVar20 + 5;
          local_bc = param_1;
        } while (iVar20 <= (int)pfVar53 + -6);
      }
      do {
        *(undefined4 *)(local_84 + iVar20 * 4) = 0xffffffff;
        iVar20 = iVar20 + 1;
      } while (iVar20 < (int)pfVar53);
    }
    local_34 = (float *)((int)pfVar53 * 0x40 + 0xf);
    *(undefined4 *)(puVar39 + -4) = 0x4ee906;
    puVar40 = (undefined1 *)((int)puVar39 - (int)local_34 & 0xfffffff0);
    local_88 = (int)puVar40 - 1U | 0xf;
    local_30 = (float *)((int)pfVar53 << 4);
    *(float **)(puVar40 + -4) = local_30;
    *(uint *)(puVar40 + -8) = local_88 + 1;
    *(undefined4 *)(puVar40 + -0xc) = 0x4ee933;
    FUN_004ec1bc();
    local_114 = 8;
    local_12c = local_24;
    local_128 = *(undefined4 *)(local_3c + 0x20);
    if (0 < local_a8) {
      iVar20 = 0;
      puVar41 = puVar40;
      uVar49 = local_ac;
      uVar54 = local_b0;
      local_bc = param_1;
      local_68 = uVar48;
      local_60 = pfVar53;
      do {
        local_124 = local_88 + 1 + *(int *)(uVar49 + 1 + iVar20 * 4) * 0x40;
        local_120 = local_124 + 0x10;
        iVar24 = *(int *)(uVar54 + 1 + iVar20 * 8);
        local_11c = iVar24 * 0x20 + local_124;
        local_118 = local_124 + 0x10 + iVar24 * 0x20;
        local_110 = local_78 + 1 + *(int *)(uVar49 + 1 + iVar20 * 4) * 4;
        local_10c = local_a0 + 1 + *(int *)(uVar49 + 1 + iVar20 * 4) * 4;
        local_108 = (int)local_28 + *(int *)(uVar49 + 1 + iVar20 * 4) * 4 + 1;
        local_104 = (int)local_2c + *(int *)(uVar49 + 1 + iVar20 * 4) * 4 + 1;
        local_100 = local_84 + *(int *)(uVar49 + 1 + iVar20 * 4) * 4;
        iVar24 = *(int *)(local_b8 + 1 + iVar20 * 4);
        iVar15 = *(int *)(iVar24 + 0x14);
        *(float **)(puVar41 + -4) = &local_12c;
        *(int *)(puVar41 + -8) = iVar24;
        pcVar5 = *(code **)(iVar15 + 0xc);
        puVar42 = puVar41 + -0xc;
        *(undefined4 *)(puVar41 + -0xc) = 0x4eea33;
        (*pcVar5)();
        puVar41 = puVar42 + 8;
        puVar40 = puVar42 + 8;
        iVar15 = 0;
        iVar24 = *(int *)(uVar54 + 1 + iVar20 * 8);
        if (0 < iVar24) {
          do {
            iVar23 = *(int *)(local_ac + 1 + iVar20 * 4);
            if (-1 < *(int *)(local_84 + iVar15 * 4 + iVar23 * 4)) {
              *(int *)(local_84 + iVar15 * 4 + iVar23 * 4) =
                   iVar23 + *(int *)(local_84 + iVar15 * 4 + iVar23 * 4);
              iVar24 = *(int *)(local_b0 + 1 + iVar20 * 8);
            }
            iVar15 = iVar15 + 1;
            uVar49 = local_ac;
            uVar54 = local_b0;
          } while (iVar15 < iVar24);
        }
        iVar20 = iVar20 + 1;
        param_1 = local_bc;
        uVar48 = local_68;
        pfVar53 = local_60;
      } while (iVar20 < local_a8);
    }
    *(undefined4 *)(puVar40 + -4) = 0x4eea9c;
    uVar43 = (int)puVar40 - (int)local_34 & 0xfffffff0;
    local_3c = uVar43 - 1 | 0xf;
    *(float **)(uVar43 - 4) = local_30;
    *(uint *)(uVar43 - 8) = local_3c + 1;
    *(undefined4 *)(uVar43 - 0xc) = 0x4eeaba;
    FUN_004ec1bc();
    iVar20 = 0;
    if (0 < local_a8) {
      do {
        iVar23 = *(int *)(local_b8 + 1 + iVar20 * 4);
        iVar24 = *(int *)(*(int *)(iVar23 + 0x20) + 0x10);
        fVar4 = *(float *)((int)local_94[iVar24] + 0x94);
        iVar15 = *(int *)(local_ac + 1 + iVar20 * 4);
        pfVar17 = (float *)(local_88 + 1 + iVar15 * 0x40);
        pfVar18 = (float *)(local_3c + 1 + iVar15 * 0x40);
        iVar15 = *(int *)(local_b0 + 1 + iVar20 * 8) + -1;
        if (-1 < iVar15) {
          while( true ) {
            iVar15 = iVar15 + -1;
            *pfVar18 = *pfVar17 * fVar4;
            pfVar18[1] = pfVar17[1] * fVar4;
            pfVar18[2] = pfVar17[2] * fVar4;
            pfVar18[4] = pfVar17[6] * *(float *)(local_b4 + 0x21 + iVar24 * 0x30) +
                         pfVar17[5] * *(float *)(local_b4 + 0x11 + iVar24 * 0x30) +
                         pfVar17[4] * *(float *)(local_b4 + 1 + iVar24 * 0x30);
            pfVar18[5] = pfVar17[6] * *(float *)(local_b4 + 0x25 + iVar24 * 0x30) +
                         pfVar17[5] * *(float *)(local_b4 + 0x15 + iVar24 * 0x30) +
                         pfVar17[4] * *(float *)(local_b4 + 5 + iVar24 * 0x30);
            fVar6 = pfVar17[6] * *(float *)(local_b4 + 0x29 + iVar24 * 0x30) +
                    pfVar17[5] * *(float *)(local_b4 + 0x19 + iVar24 * 0x30) +
                    pfVar17[4] * *(float *)(local_b4 + 9 + iVar24 * 0x30);
            pfVar17 = pfVar17 + 8;
            if (iVar15 < 0) break;
            pfVar18[6] = fVar6;
            pfVar18 = pfVar18 + 8;
          }
          pfVar18[6] = fVar6;
          iVar23 = *(int *)(local_b8 + 1 + iVar20 * 4);
          pfVar18 = pfVar18 + 8;
        }
        if (*(int *)(iVar23 + 0x2c) != 0) {
          iVar24 = *(int *)(*(int *)(iVar23 + 0x2c) + 0x10);
          fVar4 = *(float *)((int)local_94[iVar24] + 0x94);
          iVar15 = *(int *)(local_b0 + 1 + iVar20 * 8) + -1;
          if (-1 < iVar15) {
            while( true ) {
              iVar15 = iVar15 + -1;
              *pfVar18 = *pfVar17 * fVar4;
              pfVar18[1] = pfVar17[1] * fVar4;
              pfVar18[2] = pfVar17[2] * fVar4;
              pfVar18[4] = pfVar17[6] * *(float *)(local_b4 + 0x21 + iVar24 * 0x30) +
                           pfVar17[5] * *(float *)(local_b4 + 0x11 + iVar24 * 0x30) +
                           pfVar17[4] * *(float *)(local_b4 + 1 + iVar24 * 0x30);
              pfVar18[5] = pfVar17[6] * *(float *)(local_b4 + 0x25 + iVar24 * 0x30) +
                           pfVar17[5] * *(float *)(local_b4 + 0x15 + iVar24 * 0x30) +
                           pfVar17[4] * *(float *)(local_b4 + 5 + iVar24 * 0x30);
              fVar6 = pfVar17[6] * *(float *)(local_b4 + 0x29 + iVar24 * 0x30) +
                      pfVar17[5] * *(float *)(local_b4 + 0x19 + iVar24 * 0x30) +
                      pfVar17[4] * *(float *)(local_b4 + 9 + iVar24 * 0x30);
              pfVar17 = pfVar17 + 8;
              if (iVar15 < 0) break;
              pfVar18[6] = fVar6;
              pfVar18 = pfVar18 + 8;
            }
            pfVar18[6] = fVar6;
          }
        }
        iVar20 = iVar20 + 1;
        local_bc = param_1;
        local_68 = uVar48;
        local_60 = pfVar53;
      } while (iVar20 < local_a8);
    }
    local_8c = pfVar53;
    if (1 < (int)pfVar53) {
      local_8c = (float *)(((int)pfVar53 - 1U | 3) + 1);
    }
    *(undefined4 *)(uVar43 - 4) = 0x4eecc5;
    uVar44 = uVar43 - ((int)pfVar53 * 4 * (int)local_8c + 0xf) & 0xfffffff0;
    local_9c = uVar44 - 1 | 0xf;
    local_90 = local_9c + 1;
    *(int *)(uVar44 - 4) = (int)pfVar53 * (int)local_8c;
    *(int *)(uVar44 - 8) = local_90;
    *(undefined4 *)(uVar44 - 0xc) = 0x4eecf5;
    FUN_004ec1bc();
    if (0 < param_1) {
      local_40 = (float *)((int)local_8c * 4);
      pfVar17 = local_94 + param_1;
      pfVar18 = local_94;
      do {
        pfVar27 = *(float **)((int)*pfVar18 + 0x14);
        while (pfVar51 = pfVar27, pfVar51 != (float *)0x0) {
          piVar21 = (int *)pfVar51[2];
          pfVar27 = (float *)0x0;
          local_48 = pfVar18;
          local_44 = pfVar17;
          if (piVar21 != (int *)0x0) {
            do {
              iVar20 = *(int *)((int)*pfVar51 + 0x10);
              iVar24 = *(int *)(*piVar21 + 0x10);
              iVar15 = iVar24;
              if (*(int *)(local_ac + 1 + iVar20 * 4) < *(int *)(local_ac + 1 + iVar24 * 4)) {
                iVar15 = iVar20;
                iVar20 = iVar24;
              }
              if ((iVar20 != -1) && (iVar15 != -1)) {
                local_30 = (float *)(uint)(*pfVar18 ==
                                          *(float *)(*(int *)(local_b8 + 1 + iVar20 * 4) + 0x2c));
                local_2c = (float *)(uint)(*pfVar18 ==
                                          *(float *)(*(int *)(local_b8 + 1 + iVar15 * 4) + 0x2c));
                iVar24 = *(int *)(local_ac + 1 + iVar20 * 4);
                iVar23 = *(int *)(local_ac + 1 + iVar15 * 4);
                local_28 = (float *)((int)local_40 * iVar24 + 1 + local_9c + iVar23 * 4);
                iVar20 = *(int *)(local_b0 + 1 + iVar20 * 8);
                pfVar25 = (float *)(local_3c + 1 + iVar24 * 0x40 + iVar20 * 0x20 * (int)local_30);
                pfVar27 = *(float **)(local_b0 + 1 + iVar15 * 8);
                pfVar16 = (float *)(local_88 + 1 + iVar23 * 0x40 +
                                   (int)pfVar27 * 0x20 * (int)local_2c);
                local_50 = (float *)piVar21;
                if (iVar20 != 0) {
                  local_5c = ((int)local_8c - (int)pfVar27) * 4;
                  pfVar50 = local_28;
                  local_a4 = iVar20;
                  do {
                    if (pfVar27 != (float *)0x0) {
                      local_30 = pfVar25 + 1;
                      local_2c = pfVar25 + 4;
                      local_34 = pfVar25 + 5;
                      pfVar22 = pfVar16;
                      pfVar26 = pfVar27;
                      pfVar55 = pfVar50;
                      while( true ) {
                        fVar4 = pfVar25[6] * pfVar22[6] +
                                *local_34 * pfVar22[5] +
                                *local_2c * pfVar22[4] +
                                pfVar25[2] * pfVar22[2] +
                                *local_30 * pfVar22[1] + *pfVar25 * *pfVar22 + *pfVar55;
                        pfVar22 = pfVar22 + 8;
                        pfVar50 = pfVar55 + 1;
                        pfVar26 = (float *)((int)pfVar26 + -1);
                        if (pfVar26 == (float *)0x0) break;
                        *pfVar55 = fVar4;
                        pfVar55 = pfVar50;
                      }
                      *pfVar55 = fVar4;
                      local_98 = pfVar25;
                    }
                    pfVar50 = pfVar50 + ((int)local_8c - (int)pfVar27);
                    pfVar25 = pfVar25 + 8;
                    local_a4 = local_a4 + -1;
                  } while (local_a4 != 0);
                  local_a4 = 0;
                  local_58 = pfVar16;
                  local_54 = pfVar27;
                }
              }
              piVar21 = (int *)piVar21[2];
            } while (piVar21 != (int *)0x0);
            pfVar27 = (float *)pfVar51[2];
            local_4c = pfVar51;
          }
        }
        pfVar18 = pfVar18 + 1;
        local_bc = param_1;
        local_68 = uVar48;
        local_60 = pfVar53;
      } while (pfVar18 < pfVar17);
    }
    iVar20 = 0;
    if (0 < local_a8) {
      local_58 = (float *)((int)local_8c * 4 + 4);
      do {
        iVar24 = *(int *)(local_ac + 1 + iVar20 * 4);
        local_54 = (float *)((int)local_58 * iVar24 + 1 + local_9c);
        pfVar17 = (float *)(local_3c + 1 + iVar24 * 0x40);
        pfVar18 = (float *)(local_88 + 1 + iVar24 * 0x40);
        pfVar27 = *(float **)(local_b0 + 1 + iVar20 * 8);
        if (pfVar27 != (float *)0x0) {
          local_50 = (float *)(((int)local_8c - (int)pfVar27) * 4);
          pfVar51 = local_54;
          local_2c = pfVar27;
          do {
            if (pfVar27 != (float *)0x0) {
              local_48 = pfVar17 + 1;
              local_4c = pfVar17 + 4;
              local_44 = pfVar17 + 5;
              local_40 = pfVar17 + 6;
              pfVar16 = pfVar27;
              pfVar25 = pfVar18;
              pfVar50 = pfVar51;
              while( true ) {
                fVar4 = *local_40 * pfVar25[6] +
                        *local_44 * pfVar25[5] +
                        *local_4c * pfVar25[4] +
                        pfVar17[2] * pfVar25[2] + *local_48 * pfVar25[1] + *pfVar17 * *pfVar25;
                pfVar25 = pfVar25 + 8;
                pfVar51 = pfVar50 + 1;
                pfVar16 = (float *)((int)pfVar16 + -1);
                if (pfVar16 == (float *)0x0) break;
                *pfVar50 = fVar4;
                pfVar50 = pfVar51;
              }
              *pfVar50 = fVar4;
              local_28 = pfVar17;
            }
            pfVar51 = pfVar51 + ((int)local_8c - (int)pfVar27);
            pfVar17 = pfVar17 + 8;
            local_2c = (float *)((int)local_2c + -1);
          } while (local_2c != (float *)0x0);
          local_2c = (float *)0x0;
          local_34 = pfVar18;
          local_30 = pfVar27;
        }
        if (*(int *)(*(int *)(local_b8 + 1 + iVar20 * 4) + 0x2c) != 0) {
          iVar24 = *(int *)(local_ac + 1 + iVar20 * 4);
          local_2c = (float *)((int)local_58 * iVar24 + 1 + local_9c);
          pfVar17 = *(float **)(local_b0 + 1 + iVar20 * 8);
          pfVar18 = (float *)(local_3c + 1 + iVar24 * 0x40 + (int)pfVar17 * 0x20);
          pfVar27 = (float *)((int)pfVar17 * 0x20 + local_88 + 1 + iVar24 * 0x40);
          if (pfVar17 != (float *)0x0) {
            local_28 = (float *)(((int)local_8c - (int)pfVar17) * 4);
            pfVar51 = local_2c;
            local_50 = pfVar17;
            do {
              if (pfVar17 != (float *)0x0) {
                local_34 = pfVar18 + 1;
                local_30 = pfVar18 + 4;
                local_40 = pfVar18 + 5;
                local_44 = pfVar18 + 6;
                pfVar16 = pfVar17;
                pfVar25 = pfVar27;
                pfVar50 = pfVar51;
                while( true ) {
                  fVar4 = *local_44 * pfVar25[6] +
                          *local_40 * pfVar25[5] +
                          *local_30 * pfVar25[4] +
                          pfVar18[2] * pfVar25[2] + *local_34 * pfVar25[1] + *pfVar18 * *pfVar25 +
                          *pfVar50;
                  pfVar25 = pfVar25 + 8;
                  pfVar51 = pfVar50 + 1;
                  pfVar16 = (float *)((int)pfVar16 + -1);
                  if (pfVar16 == (float *)0x0) break;
                  *pfVar50 = fVar4;
                  pfVar50 = pfVar51;
                }
                *pfVar50 = fVar4;
                local_54 = pfVar18;
              }
              pfVar51 = pfVar51 + ((int)local_8c - (int)pfVar17);
              pfVar18 = pfVar18 + 8;
              local_50 = (float *)((int)local_50 + -1);
            } while (local_50 != (float *)0x0);
            local_50 = (float *)0x0;
            local_4c = pfVar27;
            local_48 = pfVar17;
          }
        }
        iVar20 = iVar20 + 1;
        local_bc = param_1;
        local_68 = uVar48;
        local_60 = pfVar53;
      } while (iVar20 < local_a8);
    }
    iVar20 = 0;
    if (0 < (int)pfVar53) {
      if (4 < (int)pfVar53) {
        local_40 = (float *)((int)pfVar53 + -5);
        local_30 = (float *)((int)local_8c * 2);
        local_a4 = (int)local_8c * 3;
        local_2c = local_8c;
        local_3c = (int)local_8c * 4;
        local_28 = (float *)((int)local_8c * 4);
        local_98 = (float *)((int)local_8c * 4);
        pfVar17 = (float *)0x0;
        pfVar18 = local_8c;
        pfVar27 = local_30;
        do {
          local_34 = pfVar17;
          *(float *)(local_9c + 1 + (iVar20 + (int)local_34) * 4) =
               *(float *)(local_a0 + 1 + iVar20 * 4) * local_24 +
               *(float *)(local_9c + 1 + (iVar20 + (int)local_34) * 4);
          *(float *)(local_9c + 5 + (iVar20 + (int)pfVar18) * 4) =
               *(float *)(local_a0 + 5 + iVar20 * 4) * local_24 +
               *(float *)(local_9c + 5 + (iVar20 + (int)pfVar18) * 4);
          *(float *)(local_9c + 9 + (iVar20 + (int)pfVar27) * 4) =
               *(float *)(local_a0 + 9 + iVar20 * 4) * local_24 +
               *(float *)(local_9c + 9 + (iVar20 + (int)pfVar27) * 4);
          *(float *)(local_9c + 0xd + (iVar20 + local_a4) * 4) =
               *(float *)(local_a0 + 0xd + iVar20 * 4) * local_24 +
               *(float *)(local_9c + 0xd + (iVar20 + local_a4) * 4);
          iVar20 = iVar20 + 4;
          pfVar18 = pfVar18 + (int)local_8c;
          pfVar27 = pfVar27 + (int)local_8c;
          local_a4 = local_a4 + (int)local_98;
          pfVar17 = local_34 + (int)local_8c;
          local_60 = pfVar53;
        } while (iVar20 <= (int)local_40);
      }
      iVar24 = iVar20 * (int)local_8c;
      do {
        iVar15 = iVar20 + iVar24;
        iVar23 = iVar20 * 4;
        iVar20 = iVar20 + 1;
        *(float *)(local_9c + 1 + iVar15 * 4) =
             *(float *)(local_a0 + 1 + iVar23) * local_24 + *(float *)(local_9c + 1 + iVar15 * 4);
        iVar24 = iVar24 + (int)local_8c;
        local_bc = param_1;
        local_68 = uVar48;
      } while (iVar20 < (int)pfVar53);
    }
    *(undefined4 *)(uVar44 - 4) = 0x4ef2f2;
    uVar45 = uVar44 - local_64 & 0xfffffff0;
    local_38 = uVar45 - 1 | 0xf;
    *(int *)(uVar45 - 4) = local_70;
    *(uint *)(uVar45 - 8) = local_38 + 1;
    *(undefined4 *)(uVar45 - 0xc) = 0x4ef310;
    FUN_004ec1bc();
    iVar20 = 0;
    if (0 < param_1) {
      local_28 = (float *)0x0;
      local_2c = (float *)0x0;
      pfVar17 = (float *)(local_38 + 1);
      iVar24 = 0;
      iVar15 = 0;
      do {
        fVar6 = local_94[iVar20];
        fVar4 = *(float *)((int)fVar6 + 0x94);
        *pfVar17 = *(float *)((int)fVar6 + 0x108) * fVar4 + *(float *)((int)fVar6 + 0xe8) * local_24
        ;
        pfVar17[1] = *(float *)((int)local_94[iVar20] + 0x10c) * fVar4 +
                     *(float *)((int)local_94[iVar20] + 0xec) * local_24;
        pfVar17[2] = *(float *)((int)local_94[iVar20] + 0xf0) * local_24 +
                     *(float *)((int)local_94[iVar20] + 0x110) * fVar4;
        fVar4 = local_94[iVar20];
        *(float *)(iVar15 + 0x11 + local_38) =
             *(float *)(iVar24 + 9 + local_b4) * *(float *)((int)fVar4 + 0x120) +
             *(float *)(iVar24 + 5 + local_b4) * *(float *)((int)fVar4 + 0x11c) +
             *(float *)(iVar24 + 1 + local_b4) * *(float *)((int)fVar4 + 0x118);
        *(float *)(iVar15 + 0x15 + local_38) =
             *(float *)(iVar24 + 0x19 + local_b4) * *(float *)((int)fVar4 + 0x120) +
             *(float *)(iVar24 + 0x15 + local_b4) * *(float *)((int)fVar4 + 0x11c) +
             *(float *)(iVar24 + 0x11 + local_b4) * *(float *)((int)fVar4 + 0x118);
        *(float *)(iVar15 + 0x19 + local_38) =
             *(float *)(iVar24 + 0x29 + local_b4) * *(float *)((int)fVar4 + 0x120) +
             *(float *)(iVar24 + 0x25 + local_b4) * *(float *)((int)fVar4 + 0x11c) +
             *(float *)(iVar24 + 0x21 + local_b4) * *(float *)((int)fVar4 + 0x118);
        iVar24 = iVar24 + 0x30;
        iVar15 = iVar15 + 0x20;
        pfVar17[4] = *(float *)((int)local_94[iVar20] + 0xf8) * local_24 + pfVar17[4];
        pfVar17[5] = *(float *)((int)local_94[iVar20] + 0xfc) * local_24 + pfVar17[5];
        pfVar18 = local_94 + iVar20;
        iVar20 = iVar20 + 1;
        pfVar17[6] = *(float *)((int)*pfVar18 + 0x100) * local_24 + pfVar17[6];
        pfVar17 = pfVar17 + 8;
        local_bc = param_1;
        local_68 = uVar48;
        local_60 = pfVar53;
      } while (iVar20 < param_1);
    }
    *(undefined4 *)(uVar45 - 4) = 0x4ef4a8;
    uVar46 = uVar45 - local_74 & 0xfffffff0;
    local_34 = (float *)(uVar46 - 1 | 0xf);
    local_30 = (float *)((int)local_34 + 1);
    *(float **)(uVar46 - 4) = pfVar53;
    *(float **)(uVar46 - 8) = local_30;
    *(undefined4 *)(uVar46 - 0xc) = 0x4ef4c6;
    FUN_004ec1bc();
    iVar20 = 0;
    if (0 < local_a8) {
      do {
        iVar24 = *(int *)(local_ac + 1 + iVar20 * 4);
        local_2c = (float *)(local_88 + 1 + iVar24 * 0x40);
        pfVar17 = (float *)((int)local_34 + 1U + iVar24 * 4);
        iVar24 = *(int *)(local_b8 + 1 + iVar20 * 4);
        iVar15 = *(int *)(*(int *)(iVar24 + 0x20) + 0x10);
        iVar23 = *(int *)(local_b0 + 1 + iVar20 * 8);
        pfVar18 = local_2c;
        if (iVar23 != 0) {
          while( true ) {
            fVar4 = pfVar18[6] * *(float *)(local_38 + 0x19 + iVar15 * 0x20) +
                    pfVar18[5] * *(float *)(local_38 + 0x15 + iVar15 * 0x20) +
                    pfVar18[4] * *(float *)(local_38 + 0x11 + iVar15 * 0x20) +
                    pfVar18[2] * *(float *)(local_38 + 9 + iVar15 * 0x20) +
                    pfVar18[1] * *(float *)(local_38 + 5 + iVar15 * 0x20) +
                    *pfVar18 * *(float *)(local_38 + 1 + iVar15 * 0x20);
            iVar23 = iVar23 + -1;
            if (iVar23 == 0) break;
            *pfVar17 = fVar4;
            pfVar18 = pfVar18 + 8;
            pfVar17 = pfVar17 + 1;
          }
          *pfVar17 = fVar4;
          iVar24 = *(int *)(local_b8 + 1 + iVar20 * 4);
        }
        if (*(int *)(iVar24 + 0x2c) != 0) {
          pfVar17 = (float *)((int)local_34 + 1U + *(int *)(local_ac + 1 + iVar20 * 4) * 4);
          iVar15 = *(int *)(local_b0 + 1 + iVar20 * 8);
          pfVar18 = local_2c + iVar15 * 8;
          iVar24 = *(int *)(*(int *)(iVar24 + 0x2c) + 0x10);
          if (iVar15 != 0) {
            while( true ) {
              fVar4 = pfVar18[6] * *(float *)(local_38 + 0x19 + iVar24 * 0x20) +
                      pfVar18[5] * *(float *)(local_38 + 0x15 + iVar24 * 0x20) +
                      pfVar18[4] * *(float *)(local_38 + 0x11 + iVar24 * 0x20) +
                      pfVar18[2] * *(float *)(local_38 + 9 + iVar24 * 0x20) +
                      pfVar18[1] * *(float *)(local_38 + 5 + iVar24 * 0x20) +
                      *pfVar18 * *(float *)(local_38 + 1 + iVar24 * 0x20) + *pfVar17;
              pfVar18 = pfVar18 + 8;
              iVar15 = iVar15 + -1;
              if (iVar15 == 0) break;
              *pfVar17 = fVar4;
              pfVar17 = pfVar17 + 1;
            }
            *pfVar17 = fVar4;
          }
        }
        iVar20 = iVar20 + 1;
        local_bc = param_1;
        local_68 = uVar48;
        local_60 = pfVar53;
      } while (iVar20 < local_a8);
    }
    iVar20 = 0;
    if (0 < (int)pfVar53) {
      if (4 < (int)pfVar53) {
        while( true ) {
          *(float *)((int)local_34 + 1U + iVar20 * 4) =
               *(float *)(local_78 + 1 + iVar20 * 4) * local_24 -
               *(float *)((int)local_34 + 1U + iVar20 * 4);
          *(float *)((int)local_34 + 5U + iVar20 * 4) =
               *(float *)(local_78 + 5 + iVar20 * 4) * local_24 -
               *(float *)((int)local_34 + 5U + iVar20 * 4);
          *(float *)((int)local_34 + 9U + iVar20 * 4) =
               *(float *)(local_78 + 9 + iVar20 * 4) * local_24 -
               *(float *)((int)local_34 + 9U + iVar20 * 4);
          fVar4 = *(float *)(local_78 + 0xd + iVar20 * 4) * local_24 -
                  *(float *)((int)local_34 + 0xdU + iVar20 * 4);
          iVar20 = iVar20 + 4;
          if ((int)pfVar53 + -5 < iVar20) break;
          *(float *)(((int)local_34 - 3U) + iVar20 * 4) = fVar4;
        }
        *(float *)(((int)local_34 - 3U) + iVar20 * 4) = fVar4;
        local_bc = param_1;
      }
      while( true ) {
        fVar4 = *(float *)(local_78 + 1 + iVar20 * 4) * local_24 -
                *(float *)((int)local_34 + 1U + iVar20 * 4);
        iVar20 = iVar20 + 1;
        if ((int)pfVar53 <= iVar20) break;
        *(float *)(((int)local_34 - 3U) + iVar20 * 4) = fVar4;
      }
      *(float *)(((int)local_34 - 3U) + iVar20 * 4) = fVar4;
    }
    *(undefined4 *)(uVar46 - 4) = 0x4ef6bd;
    uVar47 = uVar46 - local_74 & 0xfffffff0;
    local_64 = uVar47 - 1 | 0xf;
    local_28 = (float *)(local_64 + 1);
    *(undefined4 *)(uVar47 - 4) = 0x4ef6dc;
    puVar34 = (undefined1 *)(uVar47 - local_74 & 0xfffffff0);
    *(undefined1 **)(puVar34 + -4) = local_84;
    *(int *)(puVar34 + -8) = local_80;
    *(int *)(puVar34 + -0xc) = local_7c;
    *(float **)(puVar34 + -0x10) = local_14;
    *(uint *)(puVar34 + -0x14) = ((uint)(puVar34 + -1) | 0xf) + 1;
    *(float **)(puVar34 + -0x18) = local_30;
    *(float **)(puVar34 + -0x1c) = local_28;
    *(int *)(puVar34 + -0x20) = local_90;
    *(float **)(puVar34 + -0x24) = pfVar53;
    *(undefined4 *)(puVar34 + -0x28) = 0x4ef70c;
    iVar20 = FUN_004f1fd0();
    if (iVar20 != 1) {
      *(char **)(puVar34 + -4) = "disabling bodies";
      *(undefined4 *)(puVar34 + -8) = 0;
      *(undefined4 *)(puVar34 + -0xc) = 0x4ef724;
      FUN_004edb88();
      iVar20 = 0;
      if (0 < param_1) {
        if (5 < param_1) {
          do {
            *(uint *)((int)local_94[iVar20] + 0x18) = *(uint *)((int)local_94[iVar20] + 0x18) | 4;
            *(uint *)((int)local_94[iVar20 + 1] + 0x18) =
                 *(uint *)((int)local_94[iVar20 + 1] + 0x18) | 4;
            *(uint *)((int)local_94[iVar20 + 2] + 0x18) =
                 *(uint *)((int)local_94[iVar20 + 2] + 0x18) | 4;
            *(uint *)((int)local_94[iVar20 + 3] + 0x18) =
                 *(uint *)((int)local_94[iVar20 + 3] + 0x18) | 4;
            *(uint *)((int)local_94[iVar20 + 4] + 0x18) =
                 *(uint *)((int)local_94[iVar20 + 4] + 0x18) | 4;
            iVar20 = iVar20 + 5;
            local_bc = param_1;
          } while (iVar20 <= param_1 + -6);
        }
        do {
          *(uint *)((int)local_94[iVar20] + 0x18) = *(uint *)((int)local_94[iVar20] + 0x18) | 4;
          iVar20 = iVar20 + 1;
        } while (iVar20 < param_1);
      }
    }
    pfVar53 = (float *)0x0;
    if (0 < local_a8) {
      do {
        iVar24 = *(int *)(local_ac + 1 + (int)pfVar53 * 4);
        iVar20 = local_88 + 1 + iVar24 * 0x40;
        iVar15 = *(int *)(local_b8 + 1 + (int)pfVar53 * 4);
        local_2c = *(float **)(iVar15 + 0x20);
        local_3c = *(uint *)(iVar15 + 0x2c);
        local_28 = *(float **)(iVar15 + 0x34);
        if (local_28 == (float *)0x0) {
          fVar4 = local_2c[4];
          local_34 = (float *)((int)fVar4 * 4);
          local_2c = (float *)(local_64 + 1 + iVar24 * 4);
          local_30 = (float *)((int)pfVar53 * 2);
          iVar15 = 0;
          iVar24 = *(int *)(local_b0 + 1 + (int)pfVar53 * 8);
          fVar6 = _DAT_005ba9c0;
          if (0 < iVar24) {
            if (5 < iVar24) {
              local_28 = (float *)(iVar24 + -6);
              iVar23 = 0;
              do {
                fVar6 = *(float *)(iVar23 + 0x80 + iVar20) * local_2c[iVar15 + 4] +
                        *(float *)(iVar23 + 0x60 + iVar20) * local_2c[iVar15 + 3] +
                        *(float *)(iVar23 + 0x40 + iVar20) * local_2c[iVar15 + 2] +
                        *(float *)(iVar23 + 0x20 + iVar20) * local_2c[iVar15 + 1] +
                        *(float *)(iVar23 + iVar20) * local_2c[iVar15] + fVar6;
                iVar23 = iVar23 + 0xa0;
                iVar15 = iVar15 + 5;
                local_60 = pfVar53;
              } while (iVar15 <= (int)local_28);
            }
            iVar23 = iVar15 << 5;
            do {
              fVar6 = *(float *)(iVar23 + iVar20) * local_2c[iVar15] + fVar6;
              iVar23 = iVar23 + 0x20;
              iVar15 = iVar15 + 1;
              local_68 = uVar48;
            } while (iVar15 < iVar24);
          }
          *(float *)(uVar48 + 1 + (int)fVar4 * 0x20) =
               fVar6 + *(float *)(uVar48 + 1 + (int)fVar4 * 0x20);
          iVar15 = 0;
          fVar6 = _DAT_005ba9c0;
          if (0 < iVar24) {
            if (5 < iVar24) {
              local_28 = (float *)(iVar24 + -6);
              iVar23 = 0;
              do {
                fVar6 = *(float *)(iVar23 + 0x84 + iVar20) * local_2c[iVar15 + 4] +
                        *(float *)(iVar23 + 100 + iVar20) * local_2c[iVar15 + 3] +
                        *(float *)(iVar23 + 0x44 + iVar20) * local_2c[iVar15 + 2] +
                        *(float *)(iVar23 + 0x24 + iVar20) * local_2c[iVar15 + 1] +
                        *(float *)(iVar23 + 4 + iVar20) * local_2c[iVar15] + fVar6;
                iVar23 = iVar23 + 0xa0;
                iVar15 = iVar15 + 5;
                local_60 = pfVar53;
              } while (iVar15 <= (int)local_28);
            }
            iVar23 = iVar15 << 5;
            do {
              fVar6 = *(float *)(iVar23 + 4 + iVar20) * local_2c[iVar15] + fVar6;
              iVar23 = iVar23 + 0x20;
              iVar15 = iVar15 + 1;
              local_68 = uVar48;
            } while (iVar15 < iVar24);
          }
          *(float *)(uVar48 + 5 + (int)fVar4 * 0x20) =
               fVar6 + *(float *)(uVar48 + 5 + (int)fVar4 * 0x20);
          iVar15 = 0;
          fVar6 = _DAT_005ba9c0;
          if (0 < iVar24) {
            if (5 < iVar24) {
              local_28 = (float *)(iVar24 + -6);
              iVar23 = 0;
              do {
                fVar6 = *(float *)(iVar23 + 0x88 + iVar20) * local_2c[iVar15 + 4] +
                        *(float *)(iVar23 + 0x68 + iVar20) * local_2c[iVar15 + 3] +
                        *(float *)(iVar23 + 0x48 + iVar20) * local_2c[iVar15 + 2] +
                        *(float *)(iVar23 + 0x28 + iVar20) * local_2c[iVar15 + 1] +
                        *(float *)(iVar23 + 8 + iVar20) * local_2c[iVar15] + fVar6;
                iVar23 = iVar23 + 0xa0;
                iVar15 = iVar15 + 5;
                local_60 = pfVar53;
              } while (iVar15 <= (int)local_28);
            }
            iVar23 = iVar15 << 5;
            do {
              fVar6 = *(float *)(iVar23 + 8 + iVar20) * local_2c[iVar15] + fVar6;
              iVar23 = iVar23 + 0x20;
              iVar15 = iVar15 + 1;
              local_68 = uVar48;
            } while (iVar15 < iVar24);
          }
          *(float *)(uVar48 + 9 + (int)fVar4 * 0x20) =
               fVar6 + *(float *)(uVar48 + 9 + (int)fVar4 * 0x20);
          iVar15 = 0;
          fVar6 = _DAT_005ba9c0;
          if (0 < iVar24) {
            if (5 < iVar24) {
              local_28 = (float *)(iVar24 + -6);
              iVar23 = 0;
              do {
                fVar6 = *(float *)(iVar23 + 0x90 + iVar20) * local_2c[iVar15 + 4] +
                        *(float *)(iVar23 + 0x70 + iVar20) * local_2c[iVar15 + 3] +
                        *(float *)(iVar23 + 0x50 + iVar20) * local_2c[iVar15 + 2] +
                        *(float *)(iVar23 + 0x30 + iVar20) * local_2c[iVar15 + 1] +
                        *(float *)(iVar23 + 0x10 + iVar20) * local_2c[iVar15] + fVar6;
                iVar23 = iVar23 + 0xa0;
                iVar15 = iVar15 + 5;
                local_60 = pfVar53;
              } while (iVar15 <= (int)local_28);
            }
            iVar23 = iVar15 << 5;
            do {
              fVar6 = *(float *)(iVar23 + 0x10 + iVar20) * local_2c[iVar15] + fVar6;
              iVar23 = iVar23 + 0x20;
              iVar15 = iVar15 + 1;
              local_68 = uVar48;
            } while (iVar15 < iVar24);
          }
          *(float *)(uVar48 + 0x11 + (int)fVar4 * 0x20) =
               fVar6 + *(float *)(uVar48 + 0x11 + (int)fVar4 * 0x20);
          iVar15 = 0;
          fVar6 = _DAT_005ba9c0;
          if (0 < iVar24) {
            if (5 < iVar24) {
              local_28 = (float *)(iVar24 + -6);
              iVar23 = 0;
              do {
                fVar6 = *(float *)(iVar23 + 0x94 + iVar20) * local_2c[iVar15 + 4] +
                        *(float *)(iVar23 + 0x74 + iVar20) * local_2c[iVar15 + 3] +
                        *(float *)(iVar23 + 0x54 + iVar20) * local_2c[iVar15 + 2] +
                        *(float *)(iVar23 + 0x34 + iVar20) * local_2c[iVar15 + 1] +
                        *(float *)(iVar23 + 0x14 + iVar20) * local_2c[iVar15] + fVar6;
                iVar23 = iVar23 + 0xa0;
                iVar15 = iVar15 + 5;
                local_60 = pfVar53;
              } while (iVar15 <= (int)local_28);
            }
            iVar23 = iVar15 << 5;
            do {
              fVar6 = *(float *)(iVar23 + 0x14 + iVar20) * local_2c[iVar15] + fVar6;
              iVar23 = iVar23 + 0x20;
              iVar15 = iVar15 + 1;
              local_68 = uVar48;
            } while (iVar15 < iVar24);
          }
          *(float *)(uVar48 + 0x15 + (int)fVar4 * 0x20) =
               fVar6 + *(float *)(uVar48 + 0x15 + (int)fVar4 * 0x20);
          iVar15 = 0;
          fVar6 = _DAT_005ba9c0;
          if (0 < iVar24) {
            if (5 < iVar24) {
              local_28 = (float *)(iVar24 + -6);
              iVar23 = 0;
              do {
                fVar6 = *(float *)(iVar23 + 0x98 + iVar20) * local_2c[iVar15 + 4] +
                        *(float *)(iVar23 + 0x78 + iVar20) * local_2c[iVar15 + 3] +
                        *(float *)(iVar23 + 0x58 + iVar20) * local_2c[iVar15 + 2] +
                        *(float *)(iVar23 + 0x38 + iVar20) * local_2c[iVar15 + 1] +
                        *(float *)(iVar23 + 0x18 + iVar20) * local_2c[iVar15] + fVar6;
                iVar23 = iVar23 + 0xa0;
                iVar15 = iVar15 + 5;
                local_60 = pfVar53;
              } while (iVar15 <= (int)local_28);
            }
            iVar23 = iVar15 << 5;
            do {
              fVar6 = *(float *)(iVar23 + 0x18 + iVar20) * local_2c[iVar15] + fVar6;
              iVar23 = iVar23 + 0x20;
              iVar15 = iVar15 + 1;
              local_68 = uVar48;
            } while (iVar15 < iVar24);
          }
          *(float *)(uVar48 + 0x19 + (int)fVar4 * 0x20) =
               fVar6 + *(float *)(uVar48 + 0x19 + (int)fVar4 * 0x20);
          if (local_3c != 0) {
            iVar24 = *(int *)(local_3c + 0x10);
            iVar23 = iVar24 * 4;
            iVar15 = *(int *)(local_b0 + 1 + (int)pfVar53 * 8);
            local_2c = (float *)(iVar15 * 0x20 + iVar20);
            local_30 = (float *)(local_64 + 1 + *(int *)(local_ac + 1 + (int)pfVar53 * 4) * 4);
            iVar20 = 0;
            fVar4 = _DAT_005ba9c0;
            if (0 < iVar15) {
              if (5 < iVar15) {
                local_28 = (float *)(iVar15 + -6);
                iVar19 = 0;
                do {
                  fVar4 = *(float *)(iVar19 + 0x80 + (int)local_2c) *
                          *(float *)((int)local_30 + 0x10 + iVar20 * 4) +
                          *(float *)(iVar19 + 0x60 + (int)local_2c) *
                          *(float *)((int)local_30 + 0xc + iVar20 * 4) +
                          *(float *)(iVar19 + 0x40 + (int)local_2c) *
                          *(float *)((int)local_30 + 8 + iVar20 * 4) +
                          *(float *)(iVar19 + 0x20 + (int)local_2c) *
                          *(float *)((int)local_30 + 4 + iVar20 * 4) +
                          *(float *)(iVar19 + (int)local_2c) *
                          *(float *)((int)local_30 + iVar20 * 4) + fVar4;
                  iVar19 = iVar19 + 0xa0;
                  iVar20 = iVar20 + 5;
                  local_74 = iVar23;
                } while (iVar20 <= (int)local_28);
              }
              iVar19 = iVar20 << 5;
              do {
                fVar4 = *(float *)(iVar19 + (int)local_2c) * *(float *)((int)local_30 + iVar20 * 4)
                        + fVar4;
                iVar19 = iVar19 + 0x20;
                iVar20 = iVar20 + 1;
                local_68 = uVar48;
                local_60 = pfVar53;
              } while (iVar20 < iVar15);
            }
            iVar20 = 0;
            *(float *)(uVar48 + 1 + iVar24 * 0x20) = fVar4 + *(float *)(uVar48 + 1 + iVar24 * 0x20);
            fVar4 = _DAT_005ba9c0;
            if (0 < iVar15) {
              if (5 < iVar15) {
                local_28 = (float *)(iVar15 + -6);
                iVar19 = 0;
                do {
                  fVar4 = *(float *)(iVar19 + 0x84 + (int)local_2c) *
                          *(float *)((int)local_30 + 0x10 + iVar20 * 4) +
                          *(float *)(iVar19 + 100 + (int)local_2c) *
                          *(float *)((int)local_30 + 0xc + iVar20 * 4) +
                          *(float *)(iVar19 + 0x44 + (int)local_2c) *
                          *(float *)((int)local_30 + 8 + iVar20 * 4) +
                          *(float *)(iVar19 + 0x24 + (int)local_2c) *
                          *(float *)((int)local_30 + 4 + iVar20 * 4) +
                          *(float *)(iVar19 + 4 + (int)local_2c) *
                          *(float *)((int)local_30 + iVar20 * 4) + fVar4;
                  iVar19 = iVar19 + 0xa0;
                  iVar20 = iVar20 + 5;
                  local_74 = iVar23;
                } while (iVar20 <= (int)local_28);
              }
              iVar19 = iVar20 << 5;
              do {
                fVar4 = *(float *)(iVar19 + 4 + (int)local_2c) *
                        *(float *)((int)local_30 + iVar20 * 4) + fVar4;
                iVar19 = iVar19 + 0x20;
                iVar20 = iVar20 + 1;
                local_68 = uVar48;
                local_60 = pfVar53;
              } while (iVar20 < iVar15);
            }
            iVar20 = 0;
            *(float *)(uVar48 + 5 + iVar24 * 0x20) = fVar4 + *(float *)(uVar48 + 5 + iVar24 * 0x20);
            fVar4 = _DAT_005ba9c0;
            if (0 < iVar15) {
              if (5 < iVar15) {
                local_28 = (float *)(iVar15 + -6);
                iVar19 = 0;
                do {
                  fVar4 = *(float *)(iVar19 + 0x88 + (int)local_2c) *
                          *(float *)((int)local_30 + 0x10 + iVar20 * 4) +
                          *(float *)(iVar19 + 0x68 + (int)local_2c) *
                          *(float *)((int)local_30 + 0xc + iVar20 * 4) +
                          *(float *)(iVar19 + 0x48 + (int)local_2c) *
                          *(float *)((int)local_30 + 8 + iVar20 * 4) +
                          *(float *)(iVar19 + 0x28 + (int)local_2c) *
                          *(float *)((int)local_30 + 4 + iVar20 * 4) +
                          *(float *)(iVar19 + 8 + (int)local_2c) *
                          *(float *)((int)local_30 + iVar20 * 4) + fVar4;
                  iVar19 = iVar19 + 0xa0;
                  iVar20 = iVar20 + 5;
                  local_74 = iVar23;
                } while (iVar20 <= (int)local_28);
              }
              iVar19 = iVar20 << 5;
              do {
                fVar4 = *(float *)(iVar19 + 8 + (int)local_2c) *
                        *(float *)((int)local_30 + iVar20 * 4) + fVar4;
                iVar19 = iVar19 + 0x20;
                iVar20 = iVar20 + 1;
                local_68 = uVar48;
                local_60 = pfVar53;
              } while (iVar20 < iVar15);
            }
            iVar20 = 0;
            *(float *)(uVar48 + 9 + iVar24 * 0x20) = fVar4 + *(float *)(uVar48 + 9 + iVar24 * 0x20);
            fVar4 = _DAT_005ba9c0;
            if (0 < iVar15) {
              if (5 < iVar15) {
                local_28 = (float *)(iVar15 + -6);
                iVar19 = 0;
                do {
                  fVar4 = *(float *)(iVar19 + 0x90 + (int)local_2c) *
                          *(float *)((int)local_30 + 0x10 + iVar20 * 4) +
                          *(float *)(iVar19 + 0x70 + (int)local_2c) *
                          *(float *)((int)local_30 + 0xc + iVar20 * 4) +
                          *(float *)(iVar19 + 0x50 + (int)local_2c) *
                          *(float *)((int)local_30 + 8 + iVar20 * 4) +
                          *(float *)(iVar19 + 0x30 + (int)local_2c) *
                          *(float *)((int)local_30 + 4 + iVar20 * 4) +
                          *(float *)(iVar19 + 0x10 + (int)local_2c) *
                          *(float *)((int)local_30 + iVar20 * 4) + fVar4;
                  iVar19 = iVar19 + 0xa0;
                  iVar20 = iVar20 + 5;
                  local_74 = iVar23;
                } while (iVar20 <= (int)local_28);
              }
              iVar19 = iVar20 << 5;
              do {
                fVar4 = *(float *)(iVar19 + 0x10 + (int)local_2c) *
                        *(float *)((int)local_30 + iVar20 * 4) + fVar4;
                iVar19 = iVar19 + 0x20;
                iVar20 = iVar20 + 1;
                local_68 = uVar48;
                local_60 = pfVar53;
              } while (iVar20 < iVar15);
            }
            iVar20 = 0;
            *(float *)(uVar48 + 0x11 + iVar24 * 0x20) =
                 fVar4 + *(float *)(uVar48 + 0x11 + iVar24 * 0x20);
            fVar4 = _DAT_005ba9c0;
            if (0 < iVar15) {
              if (5 < iVar15) {
                local_28 = (float *)(iVar15 + -6);
                iVar19 = 0;
                do {
                  fVar4 = *(float *)(iVar19 + 0x94 + (int)local_2c) *
                          *(float *)((int)local_30 + 0x10 + iVar20 * 4) +
                          *(float *)(iVar19 + 0x74 + (int)local_2c) *
                          *(float *)((int)local_30 + 0xc + iVar20 * 4) +
                          *(float *)(iVar19 + 0x54 + (int)local_2c) *
                          *(float *)((int)local_30 + 8 + iVar20 * 4) +
                          *(float *)(iVar19 + 0x34 + (int)local_2c) *
                          *(float *)((int)local_30 + 4 + iVar20 * 4) +
                          *(float *)(iVar19 + 0x14 + (int)local_2c) *
                          *(float *)((int)local_30 + iVar20 * 4) + fVar4;
                  iVar19 = iVar19 + 0xa0;
                  iVar20 = iVar20 + 5;
                  local_74 = iVar23;
                } while (iVar20 <= (int)local_28);
              }
              iVar19 = iVar20 << 5;
              do {
                fVar4 = *(float *)(iVar19 + 0x14 + (int)local_2c) *
                        *(float *)((int)local_30 + iVar20 * 4) + fVar4;
                iVar19 = iVar19 + 0x20;
                iVar20 = iVar20 + 1;
                local_68 = uVar48;
                local_60 = pfVar53;
              } while (iVar20 < iVar15);
            }
            iVar20 = 0;
            *(float *)(uVar48 + 0x15 + iVar24 * 0x20) =
                 fVar4 + *(float *)(uVar48 + 0x15 + iVar24 * 0x20);
            fVar4 = _DAT_005ba9c0;
            if (0 < iVar15) {
              if (5 < iVar15) {
                local_28 = (float *)(iVar15 + -6);
                iVar19 = 0;
                do {
                  fVar4 = *(float *)(iVar19 + 0x98 + (int)local_2c) *
                          *(float *)((int)local_30 + 0x10 + iVar20 * 4) +
                          *(float *)(iVar19 + 0x78 + (int)local_2c) *
                          *(float *)((int)local_30 + 0xc + iVar20 * 4) +
                          *(float *)(iVar19 + 0x58 + (int)local_2c) *
                          *(float *)((int)local_30 + 8 + iVar20 * 4) +
                          *(float *)(iVar19 + 0x38 + (int)local_2c) *
                          *(float *)((int)local_30 + 4 + iVar20 * 4) +
                          *(float *)(iVar19 + 0x18 + (int)local_2c) *
                          *(float *)((int)local_30 + iVar20 * 4) + fVar4;
                  iVar19 = iVar19 + 0xa0;
                  iVar20 = iVar20 + 5;
                  local_74 = iVar23;
                } while (iVar20 <= (int)local_28);
              }
              iVar23 = iVar20 << 5;
              do {
                fVar4 = *(float *)(iVar23 + 0x18 + (int)local_2c) *
                        *(float *)((int)local_30 + iVar20 * 4) + fVar4;
                iVar23 = iVar23 + 0x20;
                iVar20 = iVar20 + 1;
                local_68 = uVar48;
                local_60 = pfVar53;
              } while (iVar20 < iVar15);
            }
            *(float *)(uVar48 + 0x19 + iVar24 * 0x20) =
                 fVar4 + *(float *)(uVar48 + 0x19 + iVar24 * 0x20);
          }
        }
        else {
          local_38 = local_64 + 1 + iVar24 * 4;
          local_30 = (float *)((int)pfVar53 * 2);
          iVar15 = 0;
          iVar24 = *(int *)(local_b0 + 1 + (int)pfVar53 * 8);
          local_fc = _DAT_005ba9c0;
          if (0 < iVar24) {
            if (5 < iVar24) {
              local_34 = (float *)(iVar24 - 6);
              iVar23 = 0;
              do {
                local_fc = *(float *)(iVar23 + 0x80 + iVar20) *
                           *(float *)(local_38 + 0x10 + iVar15 * 4) +
                           *(float *)(iVar23 + 0x60 + iVar20) *
                           *(float *)(local_38 + 0xc + iVar15 * 4) +
                           *(float *)(iVar23 + 0x40 + iVar20) *
                           *(float *)(local_38 + 8 + iVar15 * 4) +
                           *(float *)(iVar23 + 0x20 + iVar20) *
                           *(float *)(local_38 + 4 + iVar15 * 4) +
                           *(float *)(iVar23 + iVar20) * *(float *)(local_38 + iVar15 * 4) +
                           local_fc;
                iVar23 = iVar23 + 0xa0;
                iVar15 = iVar15 + 5;
                local_60 = pfVar53;
              } while (iVar15 <= (int)local_34);
            }
            iVar23 = iVar15 << 5;
            do {
              local_fc = *(float *)(iVar23 + iVar20) * *(float *)(local_38 + iVar15 * 4) + local_fc;
              iVar23 = iVar23 + 0x20;
              iVar15 = iVar15 + 1;
              local_68 = uVar48;
            } while (iVar15 < iVar24);
          }
          iVar15 = 0;
          local_f8 = _DAT_005ba9c0;
          if (0 < iVar24) {
            if (5 < iVar24) {
              local_34 = (float *)(iVar24 - 6);
              iVar23 = 0;
              do {
                local_f8 = *(float *)(iVar23 + 0x84 + iVar20) *
                           *(float *)(local_38 + 0x10 + iVar15 * 4) +
                           *(float *)(iVar23 + 100 + iVar20) *
                           *(float *)(local_38 + 0xc + iVar15 * 4) +
                           *(float *)(iVar23 + 0x44 + iVar20) *
                           *(float *)(local_38 + 8 + iVar15 * 4) +
                           *(float *)(iVar23 + 0x24 + iVar20) *
                           *(float *)(local_38 + 4 + iVar15 * 4) +
                           *(float *)(iVar23 + 4 + iVar20) * *(float *)(local_38 + iVar15 * 4) +
                           local_f8;
                iVar23 = iVar23 + 0xa0;
                iVar15 = iVar15 + 5;
                local_60 = pfVar53;
              } while (iVar15 <= (int)local_34);
            }
            iVar23 = iVar15 << 5;
            do {
              local_f8 = *(float *)(iVar23 + 4 + iVar20) * *(float *)(local_38 + iVar15 * 4) +
                         local_f8;
              iVar23 = iVar23 + 0x20;
              iVar15 = iVar15 + 1;
              local_68 = uVar48;
            } while (iVar15 < iVar24);
          }
          iVar15 = 0;
          local_f4 = _DAT_005ba9c0;
          if (0 < iVar24) {
            if (5 < iVar24) {
              local_34 = (float *)(iVar24 - 6);
              iVar23 = 0;
              do {
                local_f4 = *(float *)(iVar23 + 0x88 + iVar20) *
                           *(float *)(local_38 + 0x10 + iVar15 * 4) +
                           *(float *)(iVar23 + 0x68 + iVar20) *
                           *(float *)(local_38 + 0xc + iVar15 * 4) +
                           *(float *)(iVar23 + 0x48 + iVar20) *
                           *(float *)(local_38 + 8 + iVar15 * 4) +
                           *(float *)(iVar23 + 0x28 + iVar20) *
                           *(float *)(local_38 + 4 + iVar15 * 4) +
                           *(float *)(iVar23 + 8 + iVar20) * *(float *)(local_38 + iVar15 * 4) +
                           local_f4;
                iVar23 = iVar23 + 0xa0;
                iVar15 = iVar15 + 5;
                local_60 = pfVar53;
              } while (iVar15 <= (int)local_34);
            }
            iVar23 = iVar15 << 5;
            do {
              local_f4 = *(float *)(iVar23 + 8 + iVar20) * *(float *)(local_38 + iVar15 * 4) +
                         local_f4;
              iVar23 = iVar23 + 0x20;
              iVar15 = iVar15 + 1;
              local_68 = uVar48;
            } while (iVar15 < iVar24);
          }
          iVar15 = 0;
          local_ec = _DAT_005ba9c0;
          if (0 < iVar24) {
            if (5 < iVar24) {
              local_34 = (float *)(iVar24 - 6);
              iVar23 = 0;
              do {
                local_ec = *(float *)(iVar23 + 0x90 + iVar20) *
                           *(float *)(local_38 + 0x10 + iVar15 * 4) +
                           *(float *)(iVar23 + 0x70 + iVar20) *
                           *(float *)(local_38 + 0xc + iVar15 * 4) +
                           *(float *)(iVar23 + 0x50 + iVar20) *
                           *(float *)(local_38 + 8 + iVar15 * 4) +
                           *(float *)(iVar23 + 0x30 + iVar20) *
                           *(float *)(local_38 + 4 + iVar15 * 4) +
                           *(float *)(iVar23 + 0x10 + iVar20) * *(float *)(local_38 + iVar15 * 4) +
                           local_ec;
                iVar23 = iVar23 + 0xa0;
                iVar15 = iVar15 + 5;
                local_60 = pfVar53;
              } while (iVar15 <= (int)local_34);
            }
            iVar23 = iVar15 << 5;
            do {
              local_ec = *(float *)(iVar23 + 0x10 + iVar20) * *(float *)(local_38 + iVar15 * 4) +
                         local_ec;
              iVar23 = iVar23 + 0x20;
              iVar15 = iVar15 + 1;
              local_68 = uVar48;
            } while (iVar15 < iVar24);
          }
          iVar15 = 0;
          local_e8 = _DAT_005ba9c0;
          if (0 < iVar24) {
            if (5 < iVar24) {
              local_34 = (float *)(iVar24 - 6);
              iVar23 = 0;
              do {
                local_e8 = *(float *)(iVar23 + 0x94 + iVar20) *
                           *(float *)(local_38 + 0x10 + iVar15 * 4) +
                           *(float *)(iVar23 + 0x74 + iVar20) *
                           *(float *)(local_38 + 0xc + iVar15 * 4) +
                           *(float *)(iVar23 + 0x54 + iVar20) *
                           *(float *)(local_38 + 8 + iVar15 * 4) +
                           *(float *)(iVar23 + 0x34 + iVar20) *
                           *(float *)(local_38 + 4 + iVar15 * 4) +
                           *(float *)(iVar23 + 0x14 + iVar20) * *(float *)(local_38 + iVar15 * 4) +
                           local_e8;
                iVar23 = iVar23 + 0xa0;
                iVar15 = iVar15 + 5;
                local_60 = pfVar53;
              } while (iVar15 <= (int)local_34);
            }
            iVar23 = iVar15 << 5;
            do {
              local_e8 = *(float *)(iVar23 + 0x14 + iVar20) * *(float *)(local_38 + iVar15 * 4) +
                         local_e8;
              iVar23 = iVar23 + 0x20;
              iVar15 = iVar15 + 1;
              local_68 = uVar48;
            } while (iVar15 < iVar24);
          }
          iVar15 = 0;
          local_e4 = _DAT_005ba9c0;
          if (0 < iVar24) {
            if (5 < iVar24) {
              local_34 = (float *)(iVar24 - 6);
              iVar23 = 0;
              do {
                local_e4 = *(float *)(iVar23 + 0x98 + iVar20) *
                           *(float *)(local_38 + 0x10 + iVar15 * 4) +
                           *(float *)(iVar23 + 0x78 + iVar20) *
                           *(float *)(local_38 + 0xc + iVar15 * 4) +
                           *(float *)(iVar23 + 0x58 + iVar20) *
                           *(float *)(local_38 + 8 + iVar15 * 4) +
                           *(float *)(iVar23 + 0x38 + iVar20) *
                           *(float *)(local_38 + 4 + iVar15 * 4) +
                           *(float *)(iVar23 + 0x18 + iVar20) * *(float *)(local_38 + iVar15 * 4) +
                           local_e4;
                iVar23 = iVar23 + 0xa0;
                iVar15 = iVar15 + 5;
                local_60 = pfVar53;
              } while (iVar15 <= (int)local_34);
            }
            iVar23 = iVar15 << 5;
            do {
              local_e4 = *(float *)(iVar23 + 0x18 + iVar20) * *(float *)(local_38 + iVar15 * 4) +
                         local_e4;
              iVar23 = iVar23 + 0x20;
              iVar15 = iVar15 + 1;
              local_68 = uVar48;
            } while (iVar15 < iVar24);
          }
          fVar4 = local_2c[4];
          *local_28 = local_fc;
          *(float *)(uVar48 + 1 + (int)fVar4 * 0x20) =
               local_fc + *(float *)(uVar48 + 1 + (int)fVar4 * 0x20);
          local_28[1] = local_f8;
          *(float *)(uVar48 + 5 + (int)fVar4 * 0x20) =
               local_f8 + *(float *)(uVar48 + 5 + (int)fVar4 * 0x20);
          local_28[2] = local_f4;
          *(float *)(uVar48 + 9 + (int)fVar4 * 0x20) =
               local_f4 + *(float *)(uVar48 + 9 + (int)fVar4 * 0x20);
          local_28[4] = local_ec;
          *(float *)(uVar48 + 0x11 + (int)fVar4 * 0x20) =
               local_ec + *(float *)(uVar48 + 0x11 + (int)fVar4 * 0x20);
          local_28[5] = local_e8;
          *(float *)(uVar48 + 0x15 + (int)fVar4 * 0x20) =
               local_e8 + *(float *)(uVar48 + 0x15 + (int)fVar4 * 0x20);
          local_28[6] = local_e4;
          *(float *)(uVar48 + 0x19 + (int)fVar4 * 0x20) =
               local_e4 + *(float *)(uVar48 + 0x19 + (int)fVar4 * 0x20);
          if (local_3c != 0) {
            iVar24 = *(int *)(local_b0 + 1 + (int)pfVar53 * 8);
            local_2c = (float *)(iVar24 * 0x20 + iVar20);
            local_30 = (float *)(local_64 + 1 + *(int *)(local_ac + 1 + (int)pfVar53 * 4) * 4);
            iVar20 = 0;
            local_dc = _DAT_005ba9c0;
            if (0 < iVar24) {
              if (5 < iVar24) {
                iVar15 = 0;
                do {
                  local_dc = *(float *)(iVar15 + 0x80 + (int)local_2c) *
                             *(float *)((int)local_30 + 0x10 + iVar20 * 4) +
                             *(float *)(iVar15 + 0x60 + (int)local_2c) *
                             *(float *)((int)local_30 + 0xc + iVar20 * 4) +
                             *(float *)(iVar15 + 0x40 + (int)local_2c) *
                             *(float *)((int)local_30 + 8 + iVar20 * 4) +
                             *(float *)(iVar15 + 0x20 + (int)local_2c) *
                             *(float *)((int)local_30 + 4 + iVar20 * 4) +
                             *(float *)(iVar15 + (int)local_2c) *
                             *(float *)((int)local_30 + iVar20 * 4) + local_dc;
                  iVar15 = iVar15 + 0xa0;
                  iVar20 = iVar20 + 5;
                  local_60 = pfVar53;
                } while (iVar20 <= iVar24 + -6);
              }
              iVar15 = iVar20 << 5;
              do {
                local_dc = *(float *)(iVar15 + (int)local_2c) *
                           *(float *)((int)local_30 + iVar20 * 4) + local_dc;
                iVar15 = iVar15 + 0x20;
                iVar20 = iVar20 + 1;
                local_68 = uVar48;
              } while (iVar20 < iVar24);
            }
            iVar20 = 0;
            local_d8 = _DAT_005ba9c0;
            if (0 < iVar24) {
              if (5 < iVar24) {
                iVar15 = 0;
                do {
                  local_d8 = *(float *)(iVar15 + 0x84 + (int)local_2c) *
                             *(float *)((int)local_30 + 0x10 + iVar20 * 4) +
                             *(float *)(iVar15 + 100 + (int)local_2c) *
                             *(float *)((int)local_30 + 0xc + iVar20 * 4) +
                             *(float *)(iVar15 + 0x44 + (int)local_2c) *
                             *(float *)((int)local_30 + 8 + iVar20 * 4) +
                             *(float *)(iVar15 + 0x24 + (int)local_2c) *
                             *(float *)((int)local_30 + 4 + iVar20 * 4) +
                             *(float *)(iVar15 + 4 + (int)local_2c) *
                             *(float *)((int)local_30 + iVar20 * 4) + local_d8;
                  iVar15 = iVar15 + 0xa0;
                  iVar20 = iVar20 + 5;
                  local_60 = pfVar53;
                } while (iVar20 <= iVar24 + -6);
              }
              iVar15 = iVar20 << 5;
              do {
                local_d8 = *(float *)(iVar15 + 4 + (int)local_2c) *
                           *(float *)((int)local_30 + iVar20 * 4) + local_d8;
                iVar15 = iVar15 + 0x20;
                iVar20 = iVar20 + 1;
                local_68 = uVar48;
              } while (iVar20 < iVar24);
            }
            iVar20 = 0;
            local_d4 = _DAT_005ba9c0;
            if (0 < iVar24) {
              if (5 < iVar24) {
                iVar15 = 0;
                do {
                  local_d4 = *(float *)(iVar15 + 0x88 + (int)local_2c) *
                             *(float *)((int)local_30 + 0x10 + iVar20 * 4) +
                             *(float *)(iVar15 + 0x68 + (int)local_2c) *
                             *(float *)((int)local_30 + 0xc + iVar20 * 4) +
                             *(float *)(iVar15 + 0x48 + (int)local_2c) *
                             *(float *)((int)local_30 + 8 + iVar20 * 4) +
                             *(float *)(iVar15 + 0x28 + (int)local_2c) *
                             *(float *)((int)local_30 + 4 + iVar20 * 4) +
                             *(float *)(iVar15 + 8 + (int)local_2c) *
                             *(float *)((int)local_30 + iVar20 * 4) + local_d4;
                  iVar15 = iVar15 + 0xa0;
                  iVar20 = iVar20 + 5;
                  local_60 = pfVar53;
                } while (iVar20 <= iVar24 + -6);
              }
              iVar15 = iVar20 << 5;
              do {
                local_d4 = *(float *)(iVar15 + 8 + (int)local_2c) *
                           *(float *)((int)local_30 + iVar20 * 4) + local_d4;
                iVar15 = iVar15 + 0x20;
                iVar20 = iVar20 + 1;
                local_68 = uVar48;
              } while (iVar20 < iVar24);
            }
            iVar20 = 0;
            local_cc = _DAT_005ba9c0;
            if (0 < iVar24) {
              if (5 < iVar24) {
                iVar15 = 0;
                do {
                  local_cc = *(float *)(iVar15 + 0x90 + (int)local_2c) *
                             *(float *)((int)local_30 + 0x10 + iVar20 * 4) +
                             *(float *)(iVar15 + 0x70 + (int)local_2c) *
                             *(float *)((int)local_30 + 0xc + iVar20 * 4) +
                             *(float *)(iVar15 + 0x50 + (int)local_2c) *
                             *(float *)((int)local_30 + 8 + iVar20 * 4) +
                             *(float *)(iVar15 + 0x30 + (int)local_2c) *
                             *(float *)((int)local_30 + 4 + iVar20 * 4) +
                             *(float *)(iVar15 + 0x10 + (int)local_2c) *
                             *(float *)((int)local_30 + iVar20 * 4) + local_cc;
                  iVar15 = iVar15 + 0xa0;
                  iVar20 = iVar20 + 5;
                  local_60 = pfVar53;
                } while (iVar20 <= iVar24 + -6);
              }
              iVar15 = iVar20 << 5;
              do {
                local_cc = *(float *)(iVar15 + 0x10 + (int)local_2c) *
                           *(float *)((int)local_30 + iVar20 * 4) + local_cc;
                iVar15 = iVar15 + 0x20;
                iVar20 = iVar20 + 1;
                local_68 = uVar48;
              } while (iVar20 < iVar24);
            }
            iVar20 = 0;
            local_c8 = _DAT_005ba9c0;
            if (0 < iVar24) {
              if (5 < iVar24) {
                iVar15 = 0;
                do {
                  local_c8 = *(float *)(iVar15 + 0x94 + (int)local_2c) *
                             *(float *)((int)local_30 + 0x10 + iVar20 * 4) +
                             *(float *)(iVar15 + 0x74 + (int)local_2c) *
                             *(float *)((int)local_30 + 0xc + iVar20 * 4) +
                             *(float *)(iVar15 + 0x54 + (int)local_2c) *
                             *(float *)((int)local_30 + 8 + iVar20 * 4) +
                             *(float *)(iVar15 + 0x34 + (int)local_2c) *
                             *(float *)((int)local_30 + 4 + iVar20 * 4) +
                             *(float *)(iVar15 + 0x14 + (int)local_2c) *
                             *(float *)((int)local_30 + iVar20 * 4) + local_c8;
                  iVar15 = iVar15 + 0xa0;
                  iVar20 = iVar20 + 5;
                  local_60 = pfVar53;
                } while (iVar20 <= iVar24 + -6);
              }
              iVar15 = iVar20 << 5;
              do {
                local_c8 = *(float *)(iVar15 + 0x14 + (int)local_2c) *
                           *(float *)((int)local_30 + iVar20 * 4) + local_c8;
                iVar15 = iVar15 + 0x20;
                iVar20 = iVar20 + 1;
                local_68 = uVar48;
              } while (iVar20 < iVar24);
            }
            iVar20 = 0;
            local_c4 = _DAT_005ba9c0;
            if (0 < iVar24) {
              if (5 < iVar24) {
                iVar15 = 0;
                do {
                  local_c4 = *(float *)(iVar15 + 0x98 + (int)local_2c) *
                             *(float *)((int)local_30 + 0x10 + iVar20 * 4) +
                             *(float *)(iVar15 + 0x78 + (int)local_2c) *
                             *(float *)((int)local_30 + 0xc + iVar20 * 4) +
                             *(float *)(iVar15 + 0x58 + (int)local_2c) *
                             *(float *)((int)local_30 + 8 + iVar20 * 4) +
                             *(float *)(iVar15 + 0x38 + (int)local_2c) *
                             *(float *)((int)local_30 + 4 + iVar20 * 4) +
                             *(float *)(iVar15 + 0x18 + (int)local_2c) *
                             *(float *)((int)local_30 + iVar20 * 4) + local_c4;
                  iVar15 = iVar15 + 0xa0;
                  iVar20 = iVar20 + 5;
                  local_60 = pfVar53;
                } while (iVar20 <= iVar24 + -6);
              }
              iVar15 = iVar20 << 5;
              do {
                local_c4 = *(float *)(iVar15 + 0x18 + (int)local_2c) *
                           *(float *)((int)local_30 + iVar20 * 4) + local_c4;
                iVar15 = iVar15 + 0x20;
                iVar20 = iVar20 + 1;
                local_68 = uVar48;
              } while (iVar20 < iVar24);
            }
            iVar20 = *(int *)(local_3c + 0x10);
            local_28[8] = local_dc;
            *(float *)(uVar48 + 1 + iVar20 * 0x20) =
                 local_dc + *(float *)(uVar48 + 1 + iVar20 * 0x20);
            local_28[9] = local_d8;
            *(float *)(uVar48 + 5 + iVar20 * 0x20) =
                 local_d8 + *(float *)(uVar48 + 5 + iVar20 * 0x20);
            local_28[10] = local_d4;
            *(float *)(uVar48 + 9 + iVar20 * 0x20) =
                 local_d4 + *(float *)(uVar48 + 9 + iVar20 * 0x20);
            local_28[0xc] = local_cc;
            *(float *)(uVar48 + 0x11 + iVar20 * 0x20) =
                 local_cc + *(float *)(uVar48 + 0x11 + iVar20 * 0x20);
            local_28[0xd] = local_c8;
            *(float *)(uVar48 + 0x15 + iVar20 * 0x20) =
                 local_c8 + *(float *)(uVar48 + 0x15 + iVar20 * 0x20);
            local_28[0xe] = local_c4;
            *(float *)(uVar48 + 0x19 + iVar20 * 0x20) =
                 local_c4 + *(float *)(uVar48 + 0x19 + iVar20 * 0x20);
          }
        }
        pfVar53 = (float *)((int)pfVar53 + 1);
        local_bc = param_1;
      } while ((int)pfVar53 < local_a8);
    }
  }
  pfVar53 = local_94;
  iVar20 = 0;
  if (0 < param_1) {
    pfVar17 = (float *)(uVar48 + 1);
    while( true ) {
      *pfVar17 = *pfVar17 + *(float *)((int)local_94[iVar20] + 0x108);
      pfVar17[1] = pfVar17[1] + *(float *)((int)local_94[iVar20] + 0x10c);
      pfVar17[2] = pfVar17[2] + *(float *)((int)local_94[iVar20] + 0x110);
      pfVar17[4] = pfVar17[4] + *(float *)((int)local_94[iVar20] + 0x118);
      pfVar17[5] = pfVar17[5] + *(float *)((int)local_94[iVar20] + 0x11c);
      pfVar18 = local_94 + iVar20;
      iVar20 = iVar20 + 1;
      fVar4 = pfVar17[6] + *(float *)((int)*pfVar18 + 0x120);
      if (param_1 <= iVar20) break;
      pfVar17[6] = fVar4;
      pfVar17 = pfVar17 + 8;
    }
    pfVar17[6] = fVar4;
  }
  iVar20 = 0;
  if (0 < local_70) {
    if (5 < local_6c + param_1 * 4) {
      fVar4 = (float)local_1c;
      while( true ) {
        *(float *)(uVar48 + 1 + iVar20 * 4) = *(float *)(uVar48 + 1 + iVar20 * 4) * fVar4;
        *(float *)(uVar48 + 5 + iVar20 * 4) = *(float *)(uVar48 + 5 + iVar20 * 4) * fVar4;
        *(float *)(uVar48 + 9 + iVar20 * 4) = *(float *)(uVar48 + 9 + iVar20 * 4) * fVar4;
        *(float *)(uVar48 + 0xd + iVar20 * 4) = *(float *)(uVar48 + 0xd + iVar20 * 4) * fVar4;
        fVar6 = *(float *)(uVar48 + 0x11 + iVar20 * 4) * fVar4;
        iVar20 = iVar20 + 5;
        if (local_6c + -6 + param_1 * 4 < iVar20) break;
        *(float *)((uVar48 - 3) + iVar20 * 4) = fVar6;
      }
      *(float *)((uVar48 - 3) + iVar20 * 4) = fVar6;
    }
    while( true ) {
      fVar4 = *(float *)(uVar48 + 1 + iVar20 * 4) * (float)local_1c;
      iVar20 = iVar20 + 1;
      if (local_70 <= iVar20) break;
      *(float *)((uVar48 - 3) + iVar20 * 4) = fVar4;
    }
    *(float *)((uVar48 - 3) + iVar20 * 4) = fVar4;
  }
  if (0 < param_1) {
    iVar20 = 0;
    iVar24 = 0;
    pfVar17 = (float *)(uVar48 + 1);
    pfVar18 = (float *)0x0;
    do {
      local_14 = pfVar18;
      fVar6 = local_94[(int)local_14];
      fVar4 = *(float *)((int)fVar6 + 0x94);
      *(float *)((int)fVar6 + 0xe8) = *pfVar17 * fVar4 + *(float *)((int)fVar6 + 0xe8);
      *(float *)((int)local_94[(int)local_14] + 0xec) =
           pfVar17[1] * fVar4 + *(float *)((int)local_94[(int)local_14] + 0xec);
      pfVar18 = pfVar17 + 2;
      pfVar17 = pfVar17 + 8;
      *(float *)((int)local_94[(int)local_14] + 0xf0) =
           fVar4 * *pfVar18 + *(float *)((int)local_94[(int)local_14] + 0xf0);
      fVar4 = local_94[(int)local_14];
      *(float *)((int)fVar4 + 0xf8) =
           *(float *)(iVar20 + 9 + local_b4) * *(float *)(iVar24 + 0x19 + uVar48) +
           *(float *)(iVar20 + 5 + local_b4) * *(float *)(iVar24 + 0x15 + uVar48) +
           *(float *)(iVar20 + 1 + local_b4) * *(float *)(iVar24 + 0x11 + uVar48) +
           *(float *)((int)fVar4 + 0xf8);
      *(float *)((int)fVar4 + 0xfc) =
           *(float *)(iVar20 + 0x19 + local_b4) * *(float *)(iVar24 + 0x19 + uVar48) +
           *(float *)(iVar20 + 0x15 + local_b4) * *(float *)(iVar24 + 0x15 + uVar48) +
           *(float *)(iVar20 + 0x11 + local_b4) * *(float *)(iVar24 + 0x11 + uVar48) +
           *(float *)((int)fVar4 + 0xfc);
      iVar15 = iVar20 + 0x21;
      iVar23 = iVar24 + 0x11;
      iVar19 = iVar20 + 0x25;
      iVar1 = iVar24 + 0x15;
      iVar2 = iVar20 + 0x29;
      iVar3 = iVar24 + 0x19;
      iVar20 = iVar20 + 0x30;
      iVar24 = iVar24 + 0x20;
      *(float *)((int)fVar4 + 0x100) =
           *(float *)(iVar2 + local_b4) * *(float *)(iVar3 + uVar48) +
           *(float *)(iVar19 + local_b4) * *(float *)(iVar1 + uVar48) +
           *(float *)(iVar15 + local_b4) * *(float *)(iVar23 + uVar48) +
           *(float *)((int)fVar4 + 0x100);
      pfVar18 = (float *)((int)local_14 + 1);
      local_bc = param_1;
      local_68 = uVar48;
    } while ((int)local_14 + 1 < param_1);
  }
  iVar20 = 0;
  if (0 < param_1) {
    do {
      *(undefined4 *)(puVar34 + -0xc) = 0x4f0363;
      FUN_004f0ce8();
      iVar20 = iVar20 + 1;
    } while (iVar20 < param_1);
  }
  if (0 < param_1) {
    pfVar17 = pfVar53 + param_1;
    do {
      *(undefined4 *)((int)*pfVar53 + 0x108) = 0;
      *(undefined4 *)((int)*pfVar53 + 0x10c) = 0;
      *(undefined4 *)((int)*pfVar53 + 0x110) = 0;
      *(undefined4 *)((int)*pfVar53 + 0x114) = 0;
      *(undefined4 *)((int)*pfVar53 + 0x118) = 0;
      *(undefined4 *)((int)*pfVar53 + 0x11c) = 0;
      *(undefined4 *)((int)*pfVar53 + 0x120) = 0;
      fVar4 = *pfVar53;
      pfVar53 = pfVar53 + 1;
      *(undefined4 *)((int)fVar4 + 0x124) = 0;
    } while (pfVar53 < pfVar17);
  }
  return;
}




/* Function: FUN_004f0ce8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f0ce8(void)

{
  float fVar1;
  int in_EAX;
  int iVar2;
  float10 in_ST0;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_2c [16];
  double local_1c;
  float local_14;
  float local_10;
  float local_c;
  
  local_1c = (double)in_ST0;
  *(float *)(in_EAX + 0x98) =
       (float)(in_ST0 * (float10)*(float *)(in_EAX + 0xe8) + (float10)*(float *)(in_EAX + 0x98));
  *(float *)(in_EAX + 0x9c) =
       (float)(in_ST0 * (float10)*(float *)(in_EAX + 0xec) + (float10)*(float *)(in_EAX + 0x9c));
  *(float *)(in_EAX + 0xa0) =
       (float)(in_ST0 * (float10)*(float *)(in_EAX + 0xf0) + (float10)*(float *)(in_EAX + 0xa0));
  if ((*(uint *)(in_EAX + 0x18) & 1) == 0) {
    FUN_004ed23c(in_EAX + 0xf8,in_EAX + 0xa8,&local_6c);
    fVar1 = (float)local_1c;
    *(float *)(in_EAX + 0xa8) = fVar1 * local_6c + *(float *)(in_EAX + 0xa8);
    *(float *)(in_EAX + 0xac) = fVar1 * local_68 + *(float *)(in_EAX + 0xac);
    *(float *)(in_EAX + 0xb0) = fVar1 * local_64 + *(float *)(in_EAX + 0xb0);
    *(float *)(in_EAX + 0xb4) = fVar1 * local_60 + *(float *)(in_EAX + 0xb4);
  }
  else {
    if ((*(uint *)(in_EAX + 0x18) & 2) == 0) {
      fVar4 = (float10)local_1c * (float10)_DAT_005ba9d0;
      local_1c = (double)fVar4;
      fVar4 = (float10)fcos(SQRT((float10)*(float *)(in_EAX + 0x100) *
                                 (float10)*(float *)(in_EAX + 0x100) +
                                 (float10)*(float *)(in_EAX + 0xfc) *
                                 (float10)*(float *)(in_EAX + 0xfc) +
                                 (float10)*(float *)(in_EAX + 0xf8) *
                                 (float10)*(float *)(in_EAX + 0xf8)) * fVar4);
      local_5c = (float)fVar4;
      fVar4 = (float10)FUN_004f0f90();
      fVar4 = fVar4 * (float10)local_1c;
      fVar5 = (float10)*(float *)(in_EAX + 0xf8) * fVar4;
      fVar3 = (float10)*(float *)(in_EAX + 0xfc) * fVar4;
      fVar4 = fVar4 * (float10)*(float *)(in_EAX + 0x100);
    }
    else {
      fVar4 = (float10)*(float *)(in_EAX + 0x130) * (float10)*(float *)(in_EAX + 0x100) +
              (float10)*(float *)(in_EAX + 300) * (float10)*(float *)(in_EAX + 0xfc) +
              (float10)*(float *)(in_EAX + 0x128) * (float10)*(float *)(in_EAX + 0xf8);
      local_10 = (float)((float10)*(float *)(in_EAX + 0x128) * fVar4);
      local_14 = (float)((float10)*(float *)(in_EAX + 300) * fVar4);
      local_c = (float)((float10)*(float *)(in_EAX + 0x130) * fVar4);
      fVar5 = (float10)local_1c * (float10)_DAT_005ba9d0;
      fVar4 = (float10)fcos(fVar4 * fVar5);
      local_1c = (double)fVar5;
      local_5c = (float)fVar4;
      fVar4 = (float10)FUN_004f0f90();
      fVar4 = fVar4 * (float10)local_1c;
      fVar5 = (float10)local_10 * fVar4;
      fVar3 = (float10)local_14 * fVar4;
      fVar4 = (float10)local_c * fVar4;
    }
    local_50 = (float)fVar4;
    local_54 = (float)fVar3;
    local_58 = (float)fVar5;
    FUN_004ed794(&local_4c,&local_5c,in_EAX + 0xa8);
    *(undefined4 *)(in_EAX + 0xa8) = local_4c;
    *(undefined4 *)(in_EAX + 0xac) = local_48;
    *(undefined4 *)(in_EAX + 0xb0) = local_44;
    *(undefined4 *)(in_EAX + 0xb4) = local_40;
    if ((*(uint *)(in_EAX + 0x18) & 2) != 0) {
      FUN_004ed23c(local_2c,in_EAX + 0xa8,&local_3c);
      fVar1 = (float)local_1c;
      *(float *)(in_EAX + 0xa8) = fVar1 * local_3c + *(float *)(in_EAX + 0xa8);
      *(float *)(in_EAX + 0xac) = fVar1 * local_38 + *(float *)(in_EAX + 0xac);
      *(float *)(in_EAX + 0xb0) = fVar1 * local_34 + *(float *)(in_EAX + 0xb0);
      *(float *)(in_EAX + 0xb4) = fVar1 * local_30 + *(float *)(in_EAX + 0xb4);
    }
  }
  FUN_004f11b8(in_EAX + 0xa8);
  FUN_004eda5c(in_EAX + 0xa8,in_EAX + 0xb8);
  for (iVar2 = *(int *)(in_EAX + 0x1c); iVar2 != 0; iVar2 = FUN_0054e7f8(iVar2)) {
    FUN_004e4f14(iVar2);
  }
  return;
}




/* Function: FUN_004f0f90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004f0f90(void)

{
  float10 in_ST0;
  float10 fVar1;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xfffffff4) != 0) {
      if (ABS(in_ST0) < (float10)_DAT_005ba9d8) {
        return in_ST0 * in_ST0 * (float10)_DAT_005ba9e8 + (float10)_DAT_005ba9ec;
      }
      fVar1 = (float10)fsin(in_ST0);
      return fVar1 * ((float10)_DAT_005ba9ec / in_ST0);
    }
    if (_DAT_005b71d0 != 0) break;
    in_ST0 = (float10)FUN_004d34fc();
  }
  if (ABS(in_ST0) < (float10)_DAT_005ba9f8) {
    return in_ST0 * in_ST0 * (float10)_DAT_005baa00 + (float10)_DAT_005baa04;
  }
  fVar1 = (float10)fsin(in_ST0);
  return fVar1 * ((float10)_DAT_005baa04 / in_ST0);
}




/* Function: FUN_004f11b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f11b8(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xfffffff4) != 0) {
      fVar1 = param_1[1];
      fVar2 = param_1[2];
      fVar3 = *param_1;
      fVar4 = param_1[3];
      fVar5 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
      if (_DAT_005baa5c < fVar5) {
        fVar5 = (float)_DAT_005baa48 / SQRT(fVar5);
        *param_1 = fVar3 * fVar5;
        param_1[1] = fVar1 * fVar5;
        param_1[2] = fVar2 * fVar5;
        param_1[3] = fVar4 * fVar5;
        return;
      }
      *param_1 = 1.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      return;
    }
    if (_DAT_005b71d0 != 0) break;
    FUN_004d34fc();
  }
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = *param_1;
  fVar4 = param_1[3];
  fVar5 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (_DAT_005baa74 < fVar5) {
    fVar5 = (float)_DAT_005baa68 / SQRT(fVar5);
    *param_1 = fVar3 * fVar5;
    param_1[1] = fVar1 * fVar5;
    param_1[2] = fVar2 * fVar5;
    param_1[3] = fVar4 * fVar5;
    return;
  }
  *param_1 = 1.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  return;
}




/* Function: FUN_004f12d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f12d8(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xfffffff4) != 0) {
      fVar1 = *param_1;
      fVar4 = ABS(fVar1);
      fVar2 = param_1[1];
      fVar5 = ABS(fVar2);
      fVar3 = param_1[2];
      fVar6 = ABS(fVar3);
      if (fVar5 <= fVar4) {
        if (fVar6 <= fVar4) {
          if (_DAT_005baa8c < fVar4) {
            fVar2 = fVar2 * (_DAT_005baa88 / fVar4);
            fVar3 = (_DAT_005baa88 / fVar4) * fVar3;
            fVar4 = (float)_DAT_005baa78 / SQRT(fVar3 * fVar3 + _DAT_005baa88 + fVar2 * fVar2);
            dVar7 = _copysign((double)fVar4,(double)fVar1);
            *param_1 = (float)dVar7;
            param_1[1] = fVar2 * fVar4;
            param_1[2] = fVar3 * fVar4;
            return;
          }
          *param_1 = 1.0;
          param_1[1] = 0.0;
          param_1[2] = 0.0;
          return;
        }
      }
      else if (fVar6 <= fVar5) {
        fVar1 = fVar1 * (_DAT_005baa88 / fVar5);
        fVar3 = (_DAT_005baa88 / fVar5) * fVar3;
        fVar4 = (float)_DAT_005baa78 / SQRT(fVar3 * fVar3 + fVar1 * fVar1 + _DAT_005baa88);
        *param_1 = fVar1 * fVar4;
        dVar7 = _copysign((double)fVar4,(double)fVar2);
        param_1[1] = (float)dVar7;
        param_1[2] = fVar3 * fVar4;
        return;
      }
      fVar1 = fVar1 * (_DAT_005baa88 / fVar6);
      fVar2 = (_DAT_005baa88 / fVar6) * fVar2;
      fVar4 = (float)_DAT_005baa78 / SQRT(fVar2 * fVar2 + fVar1 * fVar1 + _DAT_005baa88);
      *param_1 = fVar1 * fVar4;
      param_1[1] = fVar2 * fVar4;
      dVar7 = _copysign((double)fVar4,(double)fVar3);
      param_1[2] = (float)dVar7;
      return;
    }
    if (_DAT_005b71d0 != 0) break;
    FUN_004d34fc();
  }
  fVar1 = *param_1;
  fVar4 = ABS(fVar1);
  fVar2 = param_1[1];
  fVar5 = ABS(fVar2);
  fVar3 = param_1[2];
  fVar6 = ABS(fVar3);
  if (fVar5 <= fVar4) {
    if (fVar6 <= fVar4) {
      if (_DAT_005baaa4 < fVar4) {
        fVar2 = fVar2 * (_DAT_005baaa0 / fVar4);
        fVar3 = (_DAT_005baaa0 / fVar4) * fVar3;
        fVar4 = (float)_DAT_005baa98 / SQRT(fVar3 * fVar3 + _DAT_005baaa0 + fVar2 * fVar2);
        dVar7 = _copysign((double)fVar4,(double)fVar1);
        *param_1 = (float)dVar7;
        param_1[1] = fVar2 * fVar4;
        param_1[2] = fVar3 * fVar4;
        return;
      }
      *param_1 = 1.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      return;
    }
  }
  else if (fVar6 <= fVar5) {
    fVar1 = fVar1 * (_DAT_005baaa0 / fVar5);
    fVar3 = (_DAT_005baaa0 / fVar5) * fVar3;
    fVar4 = (float)_DAT_005baa98 / SQRT(fVar3 * fVar3 + fVar1 * fVar1 + _DAT_005baaa0);
    *param_1 = fVar1 * fVar4;
    dVar7 = _copysign((double)fVar4,(double)fVar2);
    param_1[1] = (float)dVar7;
    param_1[2] = fVar3 * fVar4;
    return;
  }
  fVar1 = fVar1 * (_DAT_005baaa0 / fVar6);
  fVar2 = (_DAT_005baaa0 / fVar6) * fVar2;
  fVar4 = (float)_DAT_005baa98 / SQRT(fVar2 * fVar2 + fVar1 * fVar1 + _DAT_005baaa0);
  *param_1 = fVar1 * fVar4;
  param_1[1] = fVar2 * fVar4;
  dVar7 = _copysign((double)fVar4,(double)fVar3);
  param_1[2] = (float)dVar7;
  return;
}




/* Function: FUN_004f1618 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004f1618(float *param_1,float *param_2,int param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)_DAT_005baad8;
  while (-1 < param_3 + -2) {
    fVar1 = fVar1 + (float10)*param_1 * (float10)*param_2 +
            (float10)param_1[1] * (float10)param_2[1];
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    param_3 = param_3 + -2;
  }
  if (0 < param_3) {
    for (; 5 < param_3; param_3 = param_3 + -5) {
      fVar1 = (float10)param_1[4] * (float10)param_2[4] +
              (float10)param_1[3] * (float10)param_2[3] +
              (float10)param_1[2] * (float10)param_2[2] +
              (float10)param_1[1] * (float10)param_2[1] +
              (float10)*param_1 * (float10)*param_2 + fVar1;
      param_1 = param_1 + 5;
      param_2 = param_2 + 5;
    }
    do {
      fVar1 = (float10)*param_1 * (float10)*param_2 + fVar1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  return fVar1;
}




/* Function: FUN_004f16a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f16a0(int param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
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
  int iVar34;
  float *pfVar35;
  float *pfVar36;
  int iVar37;
  int iVar38;
  float *pfVar39;
  int iVar40;
  int iVar41;
  float *pfVar42;
  int iVar43;
  
  if (0 < param_3) {
    iVar40 = 0;
    if (-1 < param_3 + -2) {
      iVar41 = 0;
      do {
        pfVar35 = (float *)(param_1 + iVar41);
        iVar37 = 0;
        fVar21 = _DAT_005baae0;
        fVar20 = _DAT_005baae0;
        fVar19 = _DAT_005baae0;
        pfVar36 = param_2;
        iVar38 = iVar40;
        if (0 < iVar40) {
          iVar34 = 0;
          do {
            pfVar39 = (float *)(param_1 + iVar34);
            pfVar42 = pfVar35;
            fVar10 = _DAT_005baae0;
            fVar20 = _DAT_005baae0;
            fVar21 = _DAT_005baae0;
            fVar19 = _DAT_005baae0;
            iVar43 = iVar37;
            while (-1 < iVar43 + -2) {
              fVar7 = *pfVar39;
              fVar8 = *pfVar42;
              pfVar3 = pfVar42 + param_4;
              pfVar4 = pfVar39 + param_4;
              pfVar1 = pfVar39 + 1;
              pfVar2 = pfVar42 + 1;
              fVar19 = *pfVar1 * *pfVar2 + fVar7 * fVar8 + fVar19;
              pfVar5 = pfVar42 + param_4 + 1;
              pfVar42 = pfVar42 + 2;
              pfVar6 = pfVar39 + param_4 + 1;
              pfVar39 = pfVar39 + 2;
              fVar20 = *pfVar1 * *pfVar5 + fVar7 * *pfVar3 + fVar20;
              fVar21 = *pfVar2 * *pfVar6 + fVar8 * *pfVar4 + fVar21;
              fVar10 = fVar10 + *pfVar4 * *pfVar3 + *pfVar6 * *pfVar5;
              iVar43 = iVar43 + -2;
            }
            for (; 0 < iVar43; iVar43 = iVar43 + -1) {
              fVar7 = *pfVar39;
              fVar8 = *pfVar42;
              fVar19 = fVar7 * fVar8 + fVar19;
              pfVar1 = pfVar42 + param_4;
              pfVar42 = pfVar42 + 1;
              pfVar2 = pfVar39 + param_4;
              pfVar39 = pfVar39 + 1;
              fVar20 = fVar7 * *pfVar1 + fVar20;
              fVar21 = fVar8 * *pfVar2 + fVar21;
              fVar10 = fVar10 + *pfVar2 * *pfVar1;
            }
            fVar7 = *pfVar42;
            iVar37 = iVar37 + 2;
            *pfVar42 = fVar7 - fVar19;
            fVar8 = pfVar42[param_4];
            pfVar42[param_4] = fVar8 - fVar20;
            fVar9 = pfVar39[param_4];
            pfVar42[1] = (pfVar42[1] - fVar21) - (fVar7 - fVar19) * fVar9;
            pfVar42[param_4 + 1] = (pfVar42[param_4 + 1] - fVar10) - (fVar8 - fVar20) * fVar9;
            iVar34 = iVar34 + param_4 * 8;
            fVar21 = _DAT_005baae0;
            fVar20 = _DAT_005baae0;
            fVar19 = _DAT_005baae0;
          } while (iVar37 < iVar40);
        }
        while (-1 < iVar38 + -6) {
          fVar10 = *pfVar35;
          fVar7 = pfVar35[param_4];
          fVar23 = fVar10 * *pfVar36;
          fVar22 = *pfVar36 * fVar7;
          *pfVar35 = fVar23;
          pfVar35[param_4] = fVar22;
          fVar8 = pfVar35[1];
          fVar9 = pfVar35[param_4 + 1];
          fVar26 = fVar8 * pfVar36[1];
          fVar25 = pfVar36[1] * fVar9;
          pfVar35[1] = fVar26;
          pfVar35[param_4 + 1] = fVar25;
          fVar11 = pfVar35[2];
          fVar12 = pfVar35[param_4 + 2];
          fVar28 = fVar11 * pfVar36[2];
          fVar27 = pfVar36[2] * fVar12;
          pfVar35[2] = fVar28;
          pfVar35[param_4 + 2] = fVar27;
          fVar13 = pfVar35[3];
          fVar14 = pfVar35[param_4 + 3];
          fVar30 = fVar13 * pfVar36[3];
          fVar29 = pfVar36[3] * fVar14;
          pfVar35[3] = fVar30;
          pfVar35[param_4 + 3] = fVar29;
          fVar15 = pfVar35[4];
          fVar16 = pfVar35[param_4 + 4];
          fVar32 = fVar15 * pfVar36[4];
          fVar31 = pfVar36[4] * fVar16;
          pfVar35[4] = fVar32;
          pfVar35[param_4 + 4] = fVar31;
          fVar17 = pfVar35[5];
          fVar18 = pfVar35[param_4 + 5];
          fVar24 = fVar17 * pfVar36[5];
          fVar33 = pfVar36[5] * fVar18;
          pfVar35[5] = fVar24;
          pfVar35[param_4 + 5] = fVar33;
          pfVar35 = pfVar35 + 6;
          fVar21 = fVar33 * fVar18 +
                   fVar16 * fVar31 +
                   fVar29 * fVar14 + fVar12 * fVar27 + fVar25 * fVar9 + fVar7 * fVar22 + fVar21;
          fVar20 = fVar17 * fVar24 +
                   fVar15 * fVar32 +
                   fVar13 * fVar30 + fVar11 * fVar28 + fVar8 * fVar26 + fVar10 * fVar23 + fVar20;
          fVar19 = fVar24 * fVar18 +
                   fVar32 * fVar16 +
                   fVar30 * fVar14 + fVar28 * fVar12 + fVar26 * fVar9 + fVar23 * fVar7 + fVar19;
          pfVar36 = pfVar36 + 6;
          iVar38 = iVar38 + -6;
        }
        for (; 0 < iVar38; iVar38 = iVar38 + -1) {
          fVar10 = *pfVar35;
          fVar7 = pfVar35[param_4];
          fVar9 = fVar10 * *pfVar36;
          fVar8 = *pfVar36 * fVar7;
          *pfVar35 = fVar9;
          pfVar35[param_4] = fVar8;
          fVar20 = fVar10 * fVar9 + fVar20;
          fVar19 = fVar9 * fVar7 + fVar19;
          fVar21 = fVar7 * fVar8 + fVar21;
          pfVar35 = pfVar35 + 1;
          pfVar36 = pfVar36 + 1;
        }
        fVar10 = pfVar35[param_4];
        fVar7 = pfVar35[param_4 + 1];
        fVar20 = _DAT_005baadc / (*pfVar35 - fVar20);
        param_2[iVar40] = fVar20;
        fVar20 = fVar20 * (fVar10 - fVar19);
        param_2[iVar40 + 1] =
             _DAT_005baadc / ((fVar7 - fVar21) - ((fVar10 - fVar19) * fVar20 + _DAT_005baae0));
        iVar40 = iVar40 + 2;
        pfVar35[param_4] = fVar20;
        iVar41 = iVar41 + param_4 * 8;
      } while (iVar40 <= param_3 + -2);
    }
    if (param_3 != iVar40) {
      if (param_3 - iVar40 == 1) {
        iVar41 = 0;
        pfVar35 = (float *)(iVar40 * param_4 * 4 + param_1);
        if (0 < iVar40) {
          iVar38 = 0;
          do {
            pfVar36 = (float *)(param_1 + iVar38);
            pfVar39 = pfVar35;
            fVar21 = _DAT_005baae0;
            fVar20 = _DAT_005baae0;
            iVar37 = iVar41;
            while (-1 < iVar37 + -2) {
              fVar19 = *pfVar39;
              pfVar1 = pfVar36 + param_4;
              pfVar42 = pfVar39 + 1;
              pfVar39 = pfVar39 + 2;
              fVar20 = pfVar36[1] * *pfVar42 + *pfVar36 * fVar19 + fVar20;
              pfVar2 = pfVar36 + param_4 + 1;
              pfVar36 = pfVar36 + 2;
              fVar21 = *pfVar2 * *pfVar42 + *pfVar1 * fVar19 + fVar21;
              iVar37 = iVar37 + -2;
            }
            if (0 < iVar37) {
              for (; 3 < iVar37; iVar37 = iVar37 + -3) {
                fVar19 = *pfVar39;
                pfVar2 = pfVar36 + param_4;
                pfVar42 = pfVar39 + 1;
                pfVar3 = pfVar36 + param_4 + 1;
                pfVar1 = pfVar39 + 2;
                pfVar39 = pfVar39 + 3;
                fVar20 = pfVar36[2] * *pfVar1 + pfVar36[1] * *pfVar42 + *pfVar36 * fVar19 + fVar20;
                pfVar4 = pfVar36 + param_4 + 2;
                pfVar36 = pfVar36 + 3;
                fVar21 = *pfVar4 * *pfVar1 + *pfVar3 * *pfVar42 + *pfVar2 * fVar19 + fVar21;
              }
              do {
                fVar19 = *pfVar36;
                iVar37 = iVar37 + -1;
                fVar10 = *pfVar39;
                pfVar39 = pfVar39 + 1;
                pfVar42 = pfVar36 + param_4;
                pfVar36 = pfVar36 + 1;
                fVar20 = fVar19 * fVar10 + fVar20;
                fVar21 = *pfVar42 * fVar10 + fVar21;
              } while (0 < iVar37);
            }
            fVar19 = *pfVar39;
            iVar41 = iVar41 + 2;
            *pfVar39 = fVar19 - fVar20;
            pfVar39[1] = (pfVar39[1] - fVar21) - pfVar36[param_4] * (fVar19 - fVar20);
            iVar38 = iVar38 + param_4 * 8;
          } while (iVar41 < iVar40);
        }
        iVar41 = iVar40 + -6;
        pfVar36 = pfVar35;
        pfVar39 = param_2;
        fVar21 = _DAT_005baae0;
        if (-1 < iVar41) {
          while( true ) {
            fVar20 = *pfVar35;
            iVar41 = iVar41 + -6;
            fVar14 = *pfVar39 * fVar20;
            *pfVar35 = fVar14;
            fVar19 = pfVar35[1];
            fVar13 = pfVar39[1] * fVar19;
            pfVar35[1] = fVar13;
            fVar10 = pfVar35[2];
            fVar12 = pfVar39[2] * fVar10;
            pfVar35[2] = fVar12;
            fVar7 = pfVar35[3];
            fVar11 = pfVar39[3] * fVar7;
            pfVar35[3] = fVar11;
            fVar8 = pfVar35[4];
            fVar9 = pfVar39[4] * fVar8;
            pfVar35[4] = fVar9;
            fVar15 = pfVar39[5] * pfVar35[5];
            fVar21 = pfVar35[5] * fVar15 +
                     fVar8 * fVar9 +
                     fVar7 * fVar11 + fVar10 * fVar12 + fVar19 * fVar13 + fVar20 * fVar14 + fVar21;
            pfVar36 = pfVar35 + 6;
            pfVar39 = pfVar39 + 6;
            if (iVar41 < 0) break;
            pfVar35[5] = fVar15;
            pfVar35 = pfVar36;
          }
          pfVar35[5] = fVar15;
        }
        iVar41 = iVar41 + 6;
        if (0 < iVar41) {
          for (; 3 < iVar41; iVar41 = iVar41 + -3) {
            fVar20 = *pfVar36;
            fVar7 = *pfVar39 * fVar20;
            *pfVar36 = fVar7;
            fVar19 = pfVar36[1];
            fVar8 = pfVar39[1] * fVar19;
            pfVar36[1] = fVar8;
            fVar10 = pfVar36[2];
            fVar9 = pfVar39[2] * fVar10;
            pfVar36[2] = fVar9;
            fVar21 = fVar10 * fVar9 + fVar19 * fVar8 + fVar20 * fVar7 + fVar21;
            pfVar36 = pfVar36 + 3;
            pfVar39 = pfVar39 + 3;
          }
          do {
            fVar20 = *pfVar36;
            iVar41 = iVar41 + -1;
            fVar19 = *pfVar39 * fVar20;
            *pfVar36 = fVar19;
            fVar21 = fVar20 * fVar19 + fVar21;
            pfVar36 = pfVar36 + 1;
            pfVar39 = pfVar39 + 1;
          } while (0 < iVar41);
        }
        param_2[iVar40] = _DAT_005baadc / (*pfVar36 - fVar21);
        return;
      }
      DAT_00000000 = 0;
    }
  }
  return;
}




/* Function: FUN_004f1bf8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f1bf8(int param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  
  iVar12 = 0;
  if (0 < param_3) {
    iVar10 = 0;
    do {
      pfVar11 = (float *)(iVar10 + param_1);
      fVar8 = _DAT_005baae4;
      fVar9 = _DAT_005baae4;
      pfVar13 = param_2;
      iVar14 = iVar12;
      while (-1 < iVar14 + -2) {
        fVar6 = *pfVar13;
        pfVar2 = pfVar11 + param_4;
        pfVar1 = pfVar13 + 1;
        pfVar13 = pfVar13 + 2;
        fVar9 = pfVar11[1] * *pfVar1 + *pfVar11 * fVar6 + fVar9;
        pfVar3 = pfVar11 + param_4 + 1;
        pfVar11 = pfVar11 + 2;
        fVar8 = *pfVar3 * *pfVar1 + *pfVar2 * fVar6 + fVar8;
        iVar14 = iVar14 + -2;
      }
      if (0 < iVar14) {
        for (; 3 < iVar14; iVar14 = iVar14 + -3) {
          fVar6 = *pfVar13;
          pfVar3 = pfVar11 + param_4;
          pfVar1 = pfVar13 + 1;
          pfVar4 = pfVar11 + param_4 + 1;
          pfVar2 = pfVar13 + 2;
          pfVar13 = pfVar13 + 3;
          fVar9 = pfVar11[2] * *pfVar2 + pfVar11[1] * *pfVar1 + *pfVar11 * fVar6 + fVar9;
          pfVar5 = pfVar11 + param_4 + 2;
          pfVar11 = pfVar11 + 3;
          fVar8 = *pfVar5 * *pfVar2 + *pfVar4 * *pfVar1 + *pfVar3 * fVar6 + fVar8;
        }
        do {
          fVar6 = *pfVar11;
          iVar14 = iVar14 + -1;
          fVar7 = *pfVar13;
          pfVar13 = pfVar13 + 1;
          pfVar1 = pfVar11 + param_4;
          pfVar11 = pfVar11 + 1;
          fVar9 = fVar6 * fVar7 + fVar9;
          fVar8 = *pfVar1 * fVar7 + fVar8;
        } while (0 < iVar14);
      }
      fVar6 = *pfVar13;
      iVar12 = iVar12 + 2;
      *pfVar13 = fVar6 - fVar9;
      pfVar13[1] = (pfVar13[1] - fVar8) - pfVar11[param_4] * (fVar6 - fVar9);
      iVar10 = iVar10 + param_4 * 8;
    } while (iVar12 < param_3);
  }
  return;
}




/* Function: FUN_004f1d28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f1d28(int param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  int iVar19;
  
  iVar4 = param_3 * 4 + param_1 + param_3 * 4 * param_4 + -4 + param_4 * -4;
  pfVar5 = (float *)(param_2 + -4 + param_3 * 4);
  iVar11 = 0;
  if (-1 < param_3 + -4) {
    iVar19 = 0;
    do {
      pfVar12 = (float *)(iVar4 - iVar19);
      pfVar18 = pfVar5;
      fVar9 = _DAT_005baae8;
      fVar7 = _DAT_005baae8;
      fVar8 = _DAT_005baae8;
      fVar10 = _DAT_005baae8;
      iVar16 = iVar11;
      while (-1 < iVar16 + -4) {
        pfVar1 = pfVar12 + -3;
        fVar6 = *pfVar18;
        pfVar13 = pfVar12 + -param_4;
        pfVar2 = pfVar18 + -1;
        pfVar14 = pfVar13 + -param_4;
        pfVar3 = pfVar18 + -2;
        pfVar15 = pfVar14 + -param_4;
        fVar7 = *pfVar15 * pfVar18[-3] +
                *pfVar14 * pfVar18[-2] + *pfVar13 * pfVar18[-1] + *pfVar12 * *pfVar18 + fVar7;
        fVar8 = pfVar15[-1] * pfVar18[-3] +
                pfVar14[-1] * pfVar18[-2] +
                pfVar13[-1] * pfVar18[-1] + pfVar12[-1] * *pfVar18 + fVar8;
        fVar10 = pfVar15[-2] * pfVar18[-3] +
                 pfVar14[-2] * pfVar18[-2] +
                 pfVar13[-2] * pfVar18[-1] + pfVar12[-2] * *pfVar18 + fVar10;
        pfVar17 = pfVar18 + -3;
        pfVar12 = pfVar15 + -param_4;
        pfVar18 = pfVar18 + -4;
        fVar9 = pfVar15[-3] * *pfVar17 +
                pfVar14[-3] * *pfVar3 + pfVar13[-3] * *pfVar2 + *pfVar1 * fVar6 + fVar9;
        iVar16 = iVar16 + -4;
      }
      for (; 0 < iVar16; iVar16 = iVar16 + -1) {
        fVar7 = *pfVar12 * *pfVar18 + fVar7;
        fVar8 = pfVar12[-1] * *pfVar18 + fVar8;
        fVar10 = pfVar12[-2] * *pfVar18 + fVar10;
        pfVar1 = pfVar12 + -3;
        fVar6 = *pfVar18;
        pfVar12 = pfVar12 + -param_4;
        pfVar18 = pfVar18 + -1;
        fVar9 = *pfVar1 * fVar6 + fVar9;
      }
      fVar7 = *pfVar18 - fVar7;
      *pfVar18 = fVar7;
      iVar19 = iVar19 + 0x10;
      fVar6 = (pfVar18[-1] - fVar8) - pfVar12[-1] * fVar7;
      pfVar18[-1] = fVar6;
      iVar11 = iVar11 + 4;
      fVar8 = ((pfVar18[-2] - fVar10) - pfVar12[-2] * fVar7) - pfVar12[-2 - param_4] * fVar6;
      pfVar18[-2] = fVar8;
      pfVar18[-3] = (((pfVar18[-3] - fVar9) - fVar7 * pfVar12[-3]) - fVar6 * pfVar12[-3 - param_4])
                    - pfVar12[param_4 * -2 + -3] * fVar8;
    } while (iVar11 <= param_3 + -4);
  }
  if (iVar11 < param_3) {
    iVar19 = iVar11 << 2;
    do {
      pfVar12 = (float *)(iVar4 - iVar19);
      pfVar18 = pfVar5;
      fVar9 = _DAT_005baae8;
      iVar16 = iVar11;
      while (-1 < iVar16 + -4) {
        fVar7 = *pfVar12;
        fVar8 = *pfVar18;
        pfVar17 = pfVar12 + -param_4;
        pfVar1 = pfVar18 + -1;
        pfVar13 = pfVar17 + -param_4;
        pfVar2 = pfVar18 + -2;
        pfVar3 = pfVar18 + -3;
        pfVar12 = pfVar13 + -param_4 + -param_4;
        pfVar18 = pfVar18 + -4;
        fVar9 = pfVar13[-param_4] * *pfVar3 +
                *pfVar13 * *pfVar2 + *pfVar17 * *pfVar1 + fVar7 * fVar8 + fVar9;
        iVar16 = iVar16 + -4;
      }
      if (0 < iVar16) {
        for (; 4 < iVar16; iVar16 = iVar16 + -4) {
          fVar7 = *pfVar12;
          fVar8 = *pfVar18;
          pfVar17 = pfVar12 + -param_4;
          pfVar1 = pfVar18 + -1;
          pfVar13 = pfVar17 + -param_4;
          pfVar2 = pfVar18 + -2;
          pfVar3 = pfVar18 + -3;
          pfVar12 = pfVar13 + -param_4 + -param_4;
          pfVar18 = pfVar18 + -4;
          fVar9 = pfVar13[-param_4] * *pfVar3 +
                  *pfVar13 * *pfVar2 + *pfVar17 * *pfVar1 + fVar7 * fVar8 + fVar9;
        }
        do {
          fVar7 = *pfVar12;
          fVar8 = *pfVar18;
          pfVar12 = pfVar12 + -param_4;
          pfVar18 = pfVar18 + -1;
          fVar9 = fVar7 * fVar8 + fVar9;
          iVar16 = iVar16 + -1;
        } while (0 < iVar16);
      }
      iVar19 = iVar19 + 4;
      iVar11 = iVar11 + 1;
      *pfVar18 = *pfVar18 - fVar9;
    } while (iVar11 < param_3);
  }
  return;
}




/* Function: FUN_004f1fd0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_004f1fd0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            int param_5,int param_6,int param_7,int param_8,int param_9)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  undefined4 *extraout_ECX;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  float *pfVar36;
  float *pfVar37;
  int iVar38;
  int iVar39;
  undefined4 *puVar40;
  uint uVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  float10 fVar44;
  float10 fVar45;
  float10 fVar46;
  float10 fVar47;
  float10 fVar48;
  undefined8 uVar49;
  int local_e0;
  int local_dc;
  float *local_d8;
  int local_d4;
  int local_d0;
  undefined4 *local_cc;
  float *local_c8;
  undefined4 *local_c4;
  uint local_c0;
  uint local_bc;
  float *local_b8;
  float *local_b4;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  float *local_94;
  float *local_90;
  float *local_8c;
  int local_88;
  float *local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 *local_54;
  undefined8 local_50;
  undefined4 *puStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  float *local_40;
  float *local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int in_stack_ffffffe8;
  
  uVar49 = CONCAT44(param_2,param_1);
  do {
    uVar13 = (undefined4)((ulonglong)uVar49 >> 0x20);
    iVar12 = (int)uVar49;
    if ((_DAT_005b71d0 & 0xfffffff4) != 0) {
      local_80 = local_80 & 0xffffff00;
      local_28 = 1;
      iVar39 = (iVar12 - 1U | 3) + 1;
      if (iVar12 < 2) {
        iVar39 = iVar12;
      }
      if (iVar12 <= param_6) {
        FUN_004f16a0(uVar13,param_5,iVar12,iVar39);
        FUN_004ec118(uVar13,param_5,param_4,iVar12,iVar39);
        for (iVar39 = iVar12; iVar39 != 0; iVar39 = iVar39 + -1) {
          *param_3 = *param_4;
          param_4 = param_4 + 1;
          param_3 = param_3 + 1;
        }
        FUN_004ec1bc(param_5,iVar12);
        return 0;
      }
      uVar16 = (int)&local_e0 - (iVar12 * 4 * iVar39 + 0xf) & 0xfffffff0;
      iVar39 = iVar12 * 4 + 0xf;
      *(undefined4 *)(uVar16 - 4) = 0x4f20d4;
      uVar17 = uVar16 - iVar39 & 0xfffffff0;
      *(undefined4 *)(uVar17 - 4) = 0x4f20e8;
      uVar18 = uVar17 - iVar39 & 0xfffffff0;
      uVar9 = uVar18 - 1 | 0xf;
      *(undefined4 *)(uVar18 - 4) = 0x4f2107;
      uVar19 = uVar18 - iVar39 & 0xfffffff0;
      uVar10 = uVar19 - 1 | 0xf;
      *(undefined4 *)(uVar19 - 4) = 0x4f2126;
      uVar20 = uVar19 - iVar39 & 0xfffffff0;
      local_84 = (float *)((uVar20 - 1 | 0xf) + 1);
      *(undefined4 *)(uVar20 - 4) = 0x4f2140;
      uVar21 = uVar20 - iVar39 & 0xfffffff0;
      local_88 = (uVar21 - 1 | 0xf) + 1;
      *(undefined4 *)(uVar21 - 4) = 0x4f215a;
      uVar22 = uVar21 - iVar39 & 0xfffffff0;
      local_78 = (uVar22 - 1 | 0xf) + 1;
      *(undefined4 *)(uVar22 - 4) = 0x4f2174;
      uVar23 = uVar22 - iVar39 & 0xfffffff0;
      uVar11 = uVar23 - 1 | 0xf;
      *(undefined4 *)(uVar23 - 4) = 0x4f2193;
      uVar24 = uVar23 - iVar39 & 0xfffffff0;
      local_7c = (uVar24 - 1 | 0xf) + 1;
      *(undefined4 *)(uVar24 - 4) = 0x4f21ad;
      uVar25 = uVar24 - iVar39 & 0xfffffff0;
      uVar14 = uVar25 - 1 | 0xf;
      *(uint *)(uVar25 - 4) = local_78;
      *(int *)(uVar25 - 8) = local_7c;
      *(uint *)(uVar25 - 0xc) = uVar11 + 1;
      *(int *)(uVar25 - 0x10) = param_9;
      *(uint *)(uVar25 - 0x14) = uVar14 + 1;
      *(uint *)(uVar25 - 0x18) = uVar10 + 1;
      *(int *)(uVar25 - 0x1c) = local_88;
      *(float **)(uVar25 - 0x20) = local_84;
      *(uint *)(uVar25 - 0x24) = (uVar17 - 1 | 0xf) + 1;
      *(uint *)(uVar25 - 0x28) = (uVar16 - 1 | 0xf) + 1;
      *(int *)(uVar25 - 0x2c) = param_8;
      *(int *)(uVar25 - 0x30) = param_7;
      *(int *)(uVar25 - 0x34) = param_5;
      *(undefined4 **)(uVar25 - 0x38) = param_4;
      *(undefined4 **)(uVar25 - 0x3c) = param_3;
      *(undefined4 *)(uVar25 - 0x40) = uVar13;
      *(int *)(uVar25 - 0x44) = param_6;
      *(int *)(uVar25 - 0x48) = iVar12;
      *(undefined4 *)(uVar25 - 0x4c) = 0x4f220b;
      FUN_004f47dc();
      pfVar8 = local_d8;
      if (iVar12 <= (int)local_d8) {
LAB_004f2e93:
        *(undefined4 *)(uVar25 - 4) = 0x4f2ea5;
        uVar9 = (uVar25 - (local_e0 * 4 + 0xf) & 0xfffffff0) - 1 | 0xf;
        puVar43 = (undefined4 *)(uVar9 + 1);
        puVar40 = local_cc;
        puVar42 = puVar43;
        for (iVar12 = local_e0; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar42 = *puVar40;
          puVar40 = puVar40 + 1;
          puVar42 = puVar42 + 1;
        }
        iVar39 = 0;
        iVar12 = local_e0;
        puVar40 = local_c4;
        if (0 < local_e0) {
          do {
            iVar7 = iVar39 * 4;
            iVar38 = iVar39 * 4;
            iVar39 = iVar39 + 1;
            local_cc[*(int *)(local_9c + iVar7)] = *(undefined4 *)(uVar9 + 1 + iVar38);
          } while (iVar39 < local_e0);
        }
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar43 = *puVar40;
          puVar40 = puVar40 + 1;
          puVar43 = puVar43 + 1;
        }
        iVar12 = 0;
        if (0 < local_e0) {
          do {
            iVar39 = iVar12 * 4;
            iVar7 = iVar12 * 4;
            iVar12 = iVar12 + 1;
            local_c4[*(int *)(local_9c + iVar39)] = *(undefined4 *)(uVar9 + 1 + iVar7);
          } while (iVar12 < local_e0);
        }
        return local_28;
      }
      pfVar37 = local_d8;
LAB_004f2235:
      if (param_9 == 0) {
        iVar39 = (int)pfVar37 << 2;
      }
      else {
        iVar39 = (int)pfVar37 << 2;
        if (-1 < *(int *)(param_9 + (int)pfVar37 * 4)) {
          iVar7 = 0;
          pfVar36 = pfVar37;
          if (0 < iVar12) {
            if (5 < iVar12) {
              do {
                *(undefined4 *)(uVar10 + 1 + *(int *)(uVar11 + 1 + iVar7 * 4) * 4) = param_3[iVar7];
                *(undefined4 *)(uVar10 + 1 + *(int *)(uVar11 + 5 + iVar7 * 4) * 4) =
                     param_3[iVar7 + 1];
                *(undefined4 *)(uVar10 + 1 + *(int *)(uVar11 + 9 + iVar7 * 4) * 4) =
                     param_3[iVar7 + 2];
                *(undefined4 *)(uVar10 + 1 + *(int *)(uVar11 + 0xd + iVar7 * 4) * 4) =
                     param_3[iVar7 + 3];
                *(undefined4 *)(uVar10 + 1 + *(int *)(uVar11 + 0x11 + iVar7 * 4) * 4) =
                     param_3[iVar7 + 4];
                iVar7 = iVar7 + 5;
              } while (iVar7 <= iVar12 + -6);
            }
            do {
              iVar38 = iVar7 * 4;
              puVar43 = param_3 + iVar7;
              iVar7 = iVar7 + 1;
              *(undefined4 *)(uVar10 + 1 + *(int *)(uVar11 + 1 + iVar38) * 4) = *puVar43;
              local_84 = pfVar37;
              local_88 = iVar39;
            } while (iVar7 < iVar12);
          }
          while ((int)pfVar36 < iVar12) {
            iVar7 = (int)pfVar36 * 4;
            pfVar36 = (float *)((int)pfVar36 + 1);
            fVar5 = *(float *)(uVar10 + 1 + *(int *)(param_9 + iVar7) * 4);
            if (fVar5 == _DAT_005babbc) {
              *(undefined4 *)(param_8 + -4 + (int)pfVar36 * 4) = 0;
              *(undefined4 *)(param_7 + -4 + (int)pfVar36 * 4) = 0;
              local_84 = pfVar37;
              local_88 = iVar39;
            }
            else {
              fVar5 = ABS(*(float *)(param_8 + -4 + (int)pfVar36 * 4) * fVar5);
              *(float *)(param_8 + -4 + (int)pfVar36 * 4) = fVar5;
              *(float *)(param_7 + -4 + (int)pfVar36 * 4) = -fVar5;
              local_84 = pfVar37;
              local_88 = iVar39;
            }
          }
          local_80 = CONCAT31(local_80._1_3_,1);
        }
      }
      do {
        *(float **)(uVar25 - 4) = local_94;
        *(undefined4 **)(uVar25 - 8) = param_3;
        *(undefined4 *)(uVar25 - 0xc) = *(undefined4 *)(iVar39 + local_d4);
        *(undefined4 *)(uVar25 - 0x10) = 0x4f2364;
        fVar44 = (float10)FUN_004f1618();
        iVar7 = *(int *)(iVar39 + local_d4);
        *(float **)(uVar25 - 4) = local_90;
        *(undefined4 **)(uVar25 - 8) = param_3 + (int)local_94;
        *(int *)(uVar25 - 0xc) = iVar7 + (int)local_94 * 4;
        *(undefined4 *)(uVar25 - 0x10) = 0x4f238c;
        fVar45 = (float10)FUN_004f1618();
        pfVar36 = (float *)(iVar39 + param_5);
        fVar45 = ((float10)(float)fVar44 - (float10)*(float *)((int)param_4 + iVar39)) + fVar45;
        *pfVar36 = (float)fVar45;
        pfVar1 = (float *)(iVar39 + param_7);
        fVar44 = (float10)_DAT_005babbc;
        if ((fVar44 != (float10)*pfVar1) || (fVar45 < fVar44)) {
          pfVar2 = (float *)(iVar39 + param_8);
          if ((fVar44 != (float10)*pfVar2) || (fVar44 < fVar45)) {
            if (fVar44 != fVar45) {
              pfVar4 = (float *)(iVar39 + 1 + uVar10);
              puVar43 = (undefined4 *)(iVar39 + 1 + uVar14);
              local_88 = iVar39;
              local_84 = pfVar37;
LAB_004f2405:
              iVar39 = -1;
              fVar5 = _DAT_005babb8;
              if (fVar45 <= fVar44) {
                iVar39 = 1;
                fVar5 = _DAT_005babb4;
              }
              if (0 < (int)local_94) {
                iVar7 = *(int *)(local_88 + local_d4);
                iVar38 = 0;
                pfVar37 = local_d8;
                if (0 < (int)local_d8) {
                  do {
                    *(undefined4 *)(local_b0 + iVar38 * 4) = *(undefined4 *)(iVar7 + iVar38 * 4);
                    iVar38 = iVar38 + 1;
                  } while (iVar38 < (int)local_d8);
                }
                for (; (int)pfVar37 < (int)local_94; pfVar37 = (float *)((int)pfVar37 + 1)) {
                  *(undefined4 *)(local_b0 + (int)pfVar37 * 4) =
                       *(undefined4 *)(iVar7 + *(int *)(local_98 + (int)pfVar37 * 4) * 4);
                }
                *(int *)(uVar25 - 4) = local_dc;
                *(float **)(uVar25 - 8) = local_94;
                *(int *)(uVar25 - 0xc) = local_b0;
                *(float **)(uVar25 - 0x10) = local_b8;
                *(undefined4 *)(uVar25 - 0x14) = 0x4f24bc;
                FUN_004f1bf8();
                iVar7 = 0;
                if (0 < (int)local_94) {
                  do {
                    *(float *)(local_ac + iVar7 * 4) =
                         *(float *)(local_b0 + iVar7 * 4) * local_b4[iVar7];
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < (int)local_94);
                }
                iVar7 = 0;
                if (0 < (int)local_94) {
                  do {
                    *(undefined4 *)((int)local_a8 + iVar7 * 4) =
                         *(undefined4 *)(local_ac + iVar7 * 4);
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < (int)local_94);
                }
                *(int *)(uVar25 - 4) = local_dc;
                *(float **)(uVar25 - 8) = local_94;
                *(int *)(uVar25 - 0xc) = (int)local_a8;
                *(float **)(uVar25 - 0x10) = local_b8;
                *(undefined4 *)(uVar25 - 0x14) = 0x4f252c;
                FUN_004f1d28();
                if (iVar39 < 1) {
                  iVar7 = 0;
                  if (0 < (int)local_94) {
                    do {
                      iVar38 = iVar7 * 4;
                      iVar6 = iVar7 * 4;
                      iVar7 = iVar7 + 1;
                      *(undefined4 *)(uVar9 + 1 + *(int *)(local_98 + iVar38) * 4) =
                           *(undefined4 *)((int)local_a8 + iVar6);
                    } while (iVar7 < (int)local_94);
                  }
                }
                else {
                  iVar7 = 0;
                  if (0 < (int)local_94) {
                    do {
                      *(float *)(uVar9 + 1 + *(int *)(local_98 + iVar7 * 4) * 4) =
                           -*(float *)((int)local_a8 + iVar7 * 4);
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < (int)local_94);
                  }
                }
              }
              iVar7 = 0;
              if (0 < (int)local_90) {
                do {
                  *(float **)(uVar25 - 4) = local_94;
                  *(uint *)(uVar25 - 8) = uVar9 + 1;
                  *(undefined4 *)(uVar25 - 0xc) =
                       *(undefined4 *)((int)local_94 * 4 + local_d4 + iVar7 * 4);
                  *(undefined4 *)(uVar25 - 0x10) = 0x4f2595;
                  fVar44 = (float10)FUN_004f1618();
                  *(float *)(uVar10 + 1 + (int)local_94 * 4 + iVar7 * 4) = (float)fVar44;
                  iVar7 = iVar7 + 1;
                } while (iVar7 < (int)local_90);
              }
              iVar7 = *(int *)(local_d4 + local_88);
              local_78 = (int)local_94 * 4;
              local_7c = local_78 + iVar7;
              if (iVar39 < 1) {
                if (0 < (int)local_90) {
                  iVar7 = 0;
                  do {
                    iVar38 = (int)local_94 * 4 + 1 + uVar10;
                    *(float *)(iVar38 + iVar7 * 4) =
                         *(float *)(iVar38 + iVar7 * 4) - *(float *)(local_7c + iVar7 * 4);
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < (int)local_90);
                  iVar7 = *(int *)(local_d4 + local_88);
                }
              }
              else if (0 < (int)local_90) {
                iVar7 = 0;
                do {
                  iVar38 = (int)local_94 * 4 + 1 + uVar10;
                  *(float *)(iVar38 + iVar7 * 4) =
                       *(float *)(iVar38 + iVar7 * 4) + *(float *)(local_7c + iVar7 * 4);
                  iVar7 = iVar7 + 1;
                } while (iVar7 < (int)local_90);
                iVar7 = *(int *)(local_d4 + local_88);
              }
              *(float **)(uVar25 - 4) = local_94;
              *(uint *)(uVar25 - 8) = uVar9 + 1;
              *(int *)(uVar25 - 0xc) = iVar7;
              *(undefined4 *)(uVar25 - 0x10) = 0x4f2631;
              fVar44 = (float10)FUN_004f1618();
              pfVar37 = local_84;
              fVar44 = (float10)*(float *)(local_88 + *(int *)(local_88 + local_d4)) *
                       (float10)fVar5 + fVar44;
              uVar41 = 1;
              *pfVar4 = (float)fVar44;
              local_40 = (float *)0x0;
              fVar45 = (float10)_DAT_005babb4;
              fVar44 = (fVar45 / fVar44) * -(float10)*pfVar36;
              if (iVar39 < 1) {
                if ((float10)_DAT_005babb0 < (float10)*pfVar1) {
                  fVar48 = (fVar45 / (float10)fVar5) *
                           ((float10)*pfVar1 - (float10)*(float *)((int)param_3 + local_88));
                  uVar41 = 1;
                  if (fVar48 < fVar44) {
                    uVar41 = 2;
                    fVar44 = fVar48;
                  }
                }
              }
              else if ((float10)*pfVar2 < (float10)_DAT_005babac) {
                fVar48 = (fVar45 / (float10)fVar5) *
                         ((float10)*pfVar2 - (float10)*(float *)((int)param_3 + local_88));
                uVar41 = 1;
                if (fVar48 < fVar44) {
                  uVar41 = 3;
                  fVar44 = fVar48;
                }
              }
              if (0 < (int)local_90) {
                fVar48 = (float10)_DAT_005babbc;
                iVar39 = 0;
                pfVar15 = local_94;
                local_78 = uVar41;
                do {
                  iVar7 = *(int *)(uVar14 + 1 + (int)pfVar15 * 4);
                  if ((((iVar7 == 0) &&
                       (fVar46 = (float10)*(float *)(uVar10 + 1 + (int)pfVar15 * 4), fVar46 < fVar48
                       )) || ((iVar7 != 0 &&
                              (fVar46 = (float10)*(float *)(uVar10 + 1 + (int)pfVar15 * 4),
                              fVar48 < fVar46)))) &&
                     (((fVar48 != (float10)*(float *)(param_7 + (int)pfVar15 * 4) ||
                       (fVar48 != (float10)*(float *)(param_8 + (int)pfVar15 * 4))) &&
                      (fVar46 = -(float10)*(float *)(param_5 + (int)pfVar15 * 4) * (fVar45 / fVar46)
                      , fVar46 < fVar44)))) {
                    local_78 = 4;
                    fVar44 = fVar46;
                    local_40 = pfVar15;
                  }
                  pfVar15 = (float *)((int)pfVar15 + 1);
                  iVar39 = iVar39 + 1;
                  uVar41 = local_78;
                } while (iVar39 < (int)local_90);
              }
              fVar48 = (float10)_DAT_005babbc;
              if ((int)pfVar8 < (int)local_94) {
                pfVar15 = pfVar8;
                local_78 = uVar41;
                do {
                  fVar46 = (float10)*(float *)(uVar9 + 1 + (int)pfVar15 * 4);
                  if (((fVar46 < fVar48) &&
                      (fVar47 = (float10)*(float *)(param_7 + (int)pfVar15 * 4),
                      (float10)_DAT_005babb0 < fVar47)) &&
                     (fVar47 = (fVar45 / fVar46) * (fVar47 - (float10)(float)param_3[(int)pfVar15]),
                     fVar47 < fVar44)) {
                    local_78 = 5;
                    fVar44 = fVar47;
                    local_40 = pfVar15;
                  }
                  if (((fVar48 < fVar46) &&
                      (fVar47 = (float10)*(float *)(param_8 + (int)pfVar15 * 4),
                      fVar47 < (float10)_DAT_005babac)) &&
                     (fVar46 = (fVar47 - (float10)(float)param_3[(int)pfVar15]) * (fVar45 / fVar46),
                     fVar46 < fVar44)) {
                    local_78 = 6;
                    fVar44 = fVar46;
                    local_40 = pfVar15;
                  }
                  pfVar15 = (float *)((int)pfVar15 + 1);
                  uVar41 = local_78;
                } while ((int)pfVar15 < (int)local_94);
              }
              if (fVar48 < fVar44) {
                iVar39 = 0;
                if (0 < (int)local_94) {
                  do {
                    param_3[iVar39] =
                         (float)(fVar44 * (float10)*(float *)(uVar9 + 1 + iVar39 * 4) +
                                (float10)(float)param_3[iVar39]);
                    iVar39 = iVar39 + 1;
                  } while (iVar39 < (int)local_94);
                }
                pfVar37 = (float *)(local_88 + (int)param_3);
                *pfVar37 = (float)(fVar44 * (float10)fVar5 + (float10)*pfVar37);
                iVar39 = 0;
                if (0 < (int)local_90) {
                  do {
                    iVar7 = (int)local_94 * 4 + param_5;
                    *(float *)(iVar7 + iVar39 * 4) =
                         (float)(fVar44 * (float10)*(float *)(uVar10 + 1 + (int)local_94 * 4 +
                                                             iVar39 * 4) +
                                (float10)*(float *)(iVar7 + iVar39 * 4));
                    iVar39 = iVar39 + 1;
                    local_78 = uVar41;
                  } while (iVar39 < (int)local_90);
                }
                *pfVar36 = (float)(fVar44 * (float10)*pfVar4 + (float10)*pfVar36);
                if (uVar41 != 1) {
                  if (uVar41 == 2) {
                    *pfVar37 = *pfVar1;
                    *puVar43 = 0;
                    local_90 = (float *)((int)local_90 + 1);
                    goto LAB_004f2ccc;
                  }
                  if (uVar41 == 3) {
                    *pfVar37 = *pfVar2;
                    *puVar43 = 1;
                    local_90 = (float *)((int)local_90 + 1);
                    goto LAB_004f2ccc;
                  }
                  if (uVar41 == 4) {
                    *(undefined4 *)(param_5 + (int)local_40 * 4) = 0;
                    if ((int)local_94 < 1) {
                      *local_b4 = _DAT_005babb4 /
                                  *(float *)(*(int *)(local_d4 + (int)local_40 * 4) +
                                            (int)local_40 * 4);
                    }
                    else {
                      iVar39 = *(int *)(local_d4 + (int)local_40 * 4);
                      iVar7 = 0;
                      pfVar37 = local_d8;
                      if (0 < (int)local_d8) {
                        do {
                          *(undefined4 *)(local_b0 + iVar7 * 4) =
                               *(undefined4 *)(iVar39 + iVar7 * 4);
                          iVar7 = iVar7 + 1;
                          local_78 = uVar41;
                        } while (iVar7 < (int)local_d8);
                      }
                      for (; (int)pfVar37 < (int)local_94; pfVar37 = (float *)((int)pfVar37 + 1)) {
                        *(undefined4 *)(local_b0 + (int)pfVar37 * 4) =
                             *(undefined4 *)(iVar39 + *(int *)(local_98 + (int)pfVar37 * 4) * 4);
                        local_78 = uVar41;
                      }
                      *(int *)(uVar25 - 4) = local_dc;
                      *(float **)(uVar25 - 8) = local_94;
                      *(int *)(uVar25 - 0xc) = local_b0;
                      *(float **)(uVar25 - 0x10) = local_b8;
                      *(undefined4 *)(uVar25 - 0x14) = 0x4f2b90;
                      FUN_004f1bf8();
                      iVar39 = 0;
                      if (0 < (int)local_94) {
                        do {
                          *(float *)(local_ac + iVar39 * 4) =
                               *(float *)(local_b0 + iVar39 * 4) * local_b4[iVar39];
                          iVar39 = iVar39 + 1;
                        } while (iVar39 < (int)local_94);
                      }
                      iVar39 = 0;
                      if (0 < (int)local_94) {
                        do {
                          *(undefined4 *)((int)local_94 * 4 * local_dc + (int)local_b8 + iVar39 * 4)
                               = *(undefined4 *)(local_ac + iVar39 * 4);
                          iVar39 = iVar39 + 1;
                        } while (iVar39 < (int)local_94);
                      }
                      *(float **)(uVar25 - 4) = local_94;
                      *(int *)(uVar25 - 8) = local_b0;
                      *(int *)(uVar25 - 0xc) = local_ac;
                      *(undefined4 *)(uVar25 - 0x10) = 0x4f2c05;
                      fVar44 = (float10)FUN_004f1618();
                      local_b4[(int)local_94] =
                           (float)((float10)_DAT_005babb4 /
                                  ((float10)*(float *)(*(int *)(local_d4 + (int)local_40 * 4) +
                                                      (int)local_40 * 4) - fVar44));
                    }
                    *(undefined4 **)(uVar25 - 0x2c) = local_c4;
                    *(uint *)(uVar25 - 0x28) = local_c0;
                    *(uint *)(uVar25 - 0x24) = local_bc;
                    *(int *)(uVar25 - 0x20) = local_9c;
                    *(undefined4 *)(uVar25 - 0x1c) = local_a8._4_4_;
                    *(int *)(uVar25 - 0x18) = local_a0;
                    *(int *)(uVar25 - 0x14) = local_e0;
                    *(float **)(uVar25 - 0x10) = local_94;
                    *(float **)(uVar25 - 0xc) = local_40;
                    *(int *)(uVar25 - 8) = local_dc;
                    *(undefined4 *)(uVar25 - 4) = 1;
                    *(undefined4 *)(uVar25 - 0x3c) = 0x4f2cb1;
                    FUN_004f4df0();
                    *(float **)(local_98 + (int)local_94 * 4) = local_94;
                    local_90 = (float *)((int)local_90 + -1);
                    local_94 = (float *)((int)local_94 + 1);
                    goto LAB_004f2ccc;
                  }
                  if (uVar41 != 5) {
                    if (uVar41 != 6) goto LAB_004f2ccc;
                    param_3[(int)local_40] = *(undefined4 *)(param_8 + (int)local_40 * 4);
                    *(undefined4 *)(uVar14 + 1 + (int)local_40 * 4) = 1;
                    if ((int)local_94 < 1) {
                      iVar39 = (int)local_94 + -1;
                    }
                    else {
                      iVar7 = 0;
                      do {
                        if (local_40 == *(float **)(local_98 + iVar7 * 4)) {
                          *(int *)(uVar25 - 4) = local_dc;
                          *(int *)(uVar25 - 8) = iVar7;
                          *(float **)(uVar25 - 0xc) = local_94;
                          *(int *)(uVar25 - 0x10) = local_e0;
                          *(float **)(uVar25 - 0x14) = local_b4;
                          *(float **)(uVar25 - 0x18) = local_b8;
                          *(int *)(uVar25 - 0x1c) = local_98;
                          *(int *)(uVar25 - 0x20) = local_d4;
                          *(undefined4 *)(uVar25 - 0x24) = 0x4f2de1;
                          local_7c = iVar7 << 2;
                          local_78 = uVar41;
                          FUN_004eb984();
                          iVar38 = 0;
                          if ((int)local_94 < 1) {
                            iVar39 = (int)local_94 + -1;
                            goto LAB_004f2a64;
                          }
                          iVar39 = (int)local_94 + -1;
                          goto LAB_004f2dfc;
                        }
                        iVar7 = iVar7 + 1;
                      } while (iVar7 < (int)local_94);
                      iVar39 = (int)local_94 + -1;
                      local_78 = uVar41;
                    }
                    goto LAB_004f2a64;
                  }
                  param_3[(int)local_40] = *(undefined4 *)(param_7 + (int)local_40 * 4);
                  *(undefined4 *)(uVar14 + 1 + (int)local_40 * 4) = 0;
                  if ((int)local_94 < 1) {
                    iVar39 = (int)local_94 + -1;
                  }
                  else {
                    iVar7 = 0;
                    do {
                      if (local_40 == *(float **)(local_98 + iVar7 * 4)) {
                        *(int *)(uVar25 - 4) = local_dc;
                        *(int *)(uVar25 - 8) = iVar7;
                        *(float **)(uVar25 - 0xc) = local_94;
                        *(int *)(uVar25 - 0x10) = local_e0;
                        *(float **)(uVar25 - 0x14) = local_b4;
                        *(float **)(uVar25 - 0x18) = local_b8;
                        *(int *)(uVar25 - 0x1c) = local_98;
                        *(int *)(uVar25 - 0x20) = local_d4;
                        *(undefined4 *)(uVar25 - 0x24) = 0x4f2d12;
                        local_7c = iVar7 << 2;
                        local_78 = uVar41;
                        FUN_004eb984();
                        iVar38 = 0;
                        if ((int)local_94 < 1) {
                          iVar39 = (int)local_94 + -1;
                          goto LAB_004f2971;
                        }
                        iVar39 = (int)local_94 + -1;
                        goto LAB_004f2d2d;
                      }
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < (int)local_94);
                    iVar39 = (int)local_94 + -1;
                    local_78 = uVar41;
                  }
                  goto LAB_004f2971;
                }
                *pfVar36 = 0.0;
                if ((int)local_94 < 1) {
                  *local_b4 = _DAT_005babb4 / *(float *)(local_88 + *(int *)(local_88 + local_d4));
                }
                else {
                  iVar39 = 0;
                  if (0 < (int)local_94) {
                    do {
                      *(undefined4 *)((int)local_94 * 4 * local_dc + (int)local_b8 + iVar39 * 4) =
                           *(undefined4 *)(local_ac + iVar39 * 4);
                      iVar39 = iVar39 + 1;
                    } while (iVar39 < (int)local_94);
                  }
                  *(float **)(uVar25 - 4) = local_94;
                  *(int *)(uVar25 - 8) = local_b0;
                  *(int *)(uVar25 - 0xc) = local_ac;
                  *(undefined4 *)(uVar25 - 0x10) = 0x4f2fdf;
                  fVar44 = (float10)FUN_004f1618();
                  local_b4[(int)local_94] =
                       (float)((float10)_DAT_005babb4 /
                              ((float10)*(float *)(local_88 + *(int *)(local_88 + local_d4)) -
                              fVar44));
                }
                *(undefined4 **)(uVar25 - 0x2c) = local_c4;
                *(uint *)(uVar25 - 0x28) = local_c0;
                *(uint *)(uVar25 - 0x24) = local_bc;
                *(int *)(uVar25 - 0x20) = local_9c;
                *(undefined4 *)(uVar25 - 0x1c) = local_a8._4_4_;
                *(int *)(uVar25 - 0x18) = local_a0;
                *(int *)(uVar25 - 0x14) = local_e0;
                *(float **)(uVar25 - 0x10) = local_94;
                *(float **)(uVar25 - 0xc) = local_84;
                *(int *)(uVar25 - 8) = local_dc;
                *(undefined4 *)(uVar25 - 4) = 1;
                *(undefined4 *)(uVar25 - 0x3c) = 0x4f308b;
                FUN_004f4df0();
                *(float **)(local_98 + (int)local_94 * 4) = local_94;
                local_94 = (float *)((int)local_94 + 1);
                goto LAB_004f2ccc;
              }
              *(undefined4 *)(uVar25 - 0x10) = 3;
              *(char **)(uVar25 - 0xc) = "LCP internal error, s <= 0 (s=%.4e)";
              *(double *)(uVar25 - 8) = (double)fVar44;
              *(undefined4 *)(uVar25 - 0x14) = 0x4f30eb;
              FUN_004edb88();
              local_28 = 0;
              if ((int)pfVar37 < (int)(iVar12 - 1U)) {
                iVar12 = iVar12 - (int)pfVar37;
                *(int *)(uVar25 - 4) = iVar12;
                *(int *)(uVar25 - 8) = local_88 + (int)param_3;
                *(undefined4 *)(uVar25 - 0xc) = 0x4f3113;
                FUN_004ec1bc();
                *(int *)(uVar25 - 4) = iVar12;
                *(float **)(uVar25 - 8) = pfVar36;
                *(undefined4 *)(uVar25 - 0xc) = 0x4f3120;
                FUN_004ec1bc();
              }
              goto LAB_004f2e93;
            }
            if (0 < (int)local_94) {
              iVar7 = *(int *)(iVar39 + local_d4);
              pfVar36 = local_d8;
              if (0 < (int)local_d8) {
                iVar38 = 0;
                do {
                  *(undefined4 *)(local_b0 + iVar38 * 4) = *(undefined4 *)(iVar7 + iVar38 * 4);
                  iVar38 = iVar38 + 1;
                  local_88 = iVar39;
                  local_84 = pfVar37;
                } while (iVar38 < (int)local_d8);
              }
              for (; (int)pfVar36 < (int)local_94; pfVar36 = (float *)((int)pfVar36 + 1)) {
                *(undefined4 *)(local_b0 + (int)pfVar36 * 4) =
                     *(undefined4 *)(iVar7 + *(int *)(local_98 + (int)pfVar36 * 4) * 4);
                local_88 = iVar39;
                local_84 = pfVar37;
              }
              *(int *)(uVar25 - 4) = local_dc;
              *(float **)(uVar25 - 8) = local_94;
              *(int *)(uVar25 - 0xc) = local_b0;
              *(float **)(uVar25 - 0x10) = local_b8;
              *(undefined4 *)(uVar25 - 0x14) = 0x4f32ca;
              FUN_004f1bf8();
              iVar7 = 0;
              if (0 < (int)local_94) {
                do {
                  *(float *)(local_ac + iVar7 * 4) =
                       *(float *)(local_b0 + iVar7 * 4) * local_b4[iVar7];
                  iVar7 = iVar7 + 1;
                } while (iVar7 < (int)local_94);
              }
            }
            if ((int)local_94 < 1) {
              *local_b4 = _DAT_005babb4 / *(float *)(iVar39 + *(int *)(iVar39 + local_d4));
            }
            else {
              iVar7 = 0;
              if (0 < (int)local_94) {
                do {
                  *(undefined4 *)((int)local_94 * 4 * local_dc + (int)local_b8 + iVar7 * 4) =
                       *(undefined4 *)(local_ac + iVar7 * 4);
                  iVar7 = iVar7 + 1;
                  local_84 = pfVar37;
                } while (iVar7 < (int)local_94);
              }
              *(float **)(uVar25 - 4) = local_94;
              *(int *)(uVar25 - 8) = local_b0;
              *(int *)(uVar25 - 0xc) = local_ac;
              *(undefined4 *)(uVar25 - 0x10) = 0x4f334e;
              fVar44 = (float10)FUN_004f1618();
              local_b4[(int)local_94] =
                   (float)((float10)_DAT_005babb4 /
                          ((float10)*(float *)(iVar39 + *(int *)(iVar39 + local_d4)) - fVar44));
            }
            *(undefined4 **)(uVar25 - 0x2c) = local_c4;
            *(uint *)(uVar25 - 0x28) = local_c0;
            *(uint *)(uVar25 - 0x24) = local_bc;
            *(int *)(uVar25 - 0x20) = local_9c;
            *(undefined4 *)(uVar25 - 0x1c) = local_a8._4_4_;
            *(int *)(uVar25 - 0x18) = local_a0;
            *(int *)(uVar25 - 0x14) = local_e0;
            *(float **)(uVar25 - 0x10) = local_94;
            *(float **)(uVar25 - 0xc) = pfVar37;
            *(int *)(uVar25 - 8) = local_dc;
            *(undefined4 *)(uVar25 - 4) = 1;
            *(undefined4 *)(uVar25 - 0x3c) = 0x4f33f4;
            FUN_004f4df0();
            *(float **)(local_98 + (int)local_94 * 4) = local_94;
            local_94 = (float *)((int)local_94 + 1);
          }
          else {
            local_90 = (float *)((int)local_90 + 1);
            *(undefined4 *)(uVar14 + 1 + iVar39) = 1;
          }
        }
        else {
          local_90 = (float *)((int)local_90 + 1);
          *(undefined4 *)(uVar14 + 1 + iVar39) = 0;
        }
LAB_004f2e7b:
        pfVar37 = (float *)((int)pfVar37 + 1);
        if (iVar12 <= (int)pfVar37) goto LAB_004f2e93;
        if ((char)local_80 == '\0') goto LAB_004f2235;
        iVar39 = (int)pfVar37 * 4;
      } while( true );
    }
    if (_DAT_005b71d0 != 0) {
      local_d8 = (float *)((uint)local_d8 & 0xffffff00);
      local_80 = 1;
      iVar39 = iVar12;
      if (1 < iVar12) {
        iVar39 = (iVar12 - 1U | 3) + 1;
      }
      local_88 = iVar12;
      local_84 = (float *)param_3;
      if (iVar12 <= param_6) {
        FUN_004f16a0(uVar13,param_5,iVar12,iVar39);
        FUN_004ec118(uVar13,param_5,param_4,local_88,iVar39);
        pfVar8 = local_84;
        for (iVar12 = local_88; iVar12 != 0; iVar12 = iVar12 + -1) {
          *pfVar8 = (float)*param_4;
          param_4 = param_4 + 1;
          pfVar8 = pfVar8 + 1;
        }
        FUN_004ec1bc(param_5,local_88);
        return 0;
      }
      uVar26 = (int)&local_e0 - (iVar12 * 4 * iVar39 + 0xf) & 0xfffffff0;
      local_c8 = (float *)((uVar26 - 1 | 0xf) + 1);
      iVar39 = iVar12 * 4 + 0xf;
      *(undefined4 *)(uVar26 - 4) = 0x4f358c;
      uVar27 = uVar26 - iVar39 & 0xfffffff0;
      *(undefined4 *)(uVar27 - 4) = 0x4f35a3;
      uVar28 = uVar27 - iVar39 & 0xfffffff0;
      local_c4 = (undefined4 *)(uVar28 - 1 | 0xf);
      local_b0 = (int)local_c4 + 1;
      *(undefined4 *)(uVar28 - 4) = 0x4f35ce;
      uVar29 = uVar28 - iVar39 & 0xfffffff0;
      local_c0 = uVar29 - 1 | 0xf;
      local_b8 = (float *)(local_c0 + 1);
      *(undefined4 *)(uVar29 - 4) = 0x4f35f9;
      uVar30 = uVar29 - iVar39 & 0xfffffff0;
      local_dc = (uVar30 - 1 | 0xf) + 1;
      *(undefined4 *)(uVar30 - 4) = 0x4f361c;
      uVar31 = uVar30 - iVar39 & 0xfffffff0;
      local_e0 = (uVar31 - 1 | 0xf) + 1;
      *(undefined4 *)(uVar31 - 4) = 0x4f363f;
      uVar32 = uVar31 - iVar39 & 0xfffffff0;
      local_d0 = (uVar32 - 1 | 0xf) + 1;
      *(undefined4 *)(uVar32 - 4) = 0x4f3662;
      uVar33 = uVar32 - iVar39 & 0xfffffff0;
      local_bc = uVar33 - 1 | 0xf;
      local_b4 = (float *)(local_bc + 1);
      *(undefined4 *)(uVar33 - 4) = 0x4f368d;
      uVar34 = uVar33 - iVar39 & 0xfffffff0;
      local_d4 = (uVar34 - 1 | 0xf) + 1;
      *(undefined4 *)(uVar34 - 4) = 0x4f36b0;
      uVar35 = uVar34 - iVar39 & 0xfffffff0;
      local_cc = (undefined4 *)(uVar35 - 1 | 0xf);
      *(int *)(uVar35 - 4) = local_d0;
      *(int *)(uVar35 - 8) = local_d4;
      *(float **)(uVar35 - 0xc) = local_b4;
      *(int *)(uVar35 - 0x10) = param_9;
      *(uint *)(uVar35 - 0x14) = (int)local_cc + 1;
      *(float **)(uVar35 - 0x18) = local_b8;
      *(int *)(uVar35 - 0x1c) = local_e0;
      *(int *)(uVar35 - 0x20) = local_dc;
      *(uint *)(uVar35 - 0x24) = (uVar27 - 1 | 0xf) + 1;
      *(float **)(uVar35 - 0x28) = local_c8;
      *(int *)(uVar35 - 0x2c) = param_8;
      *(int *)(uVar35 - 0x30) = param_7;
      *(int *)(uVar35 - 0x34) = param_5;
      *(undefined4 **)(uVar35 - 0x38) = param_4;
      *(undefined4 **)(uVar35 - 0x3c) = param_3;
      *(undefined4 *)(uVar35 - 0x40) = uVar13;
      *(int *)(uVar35 - 0x44) = param_6;
      *(int *)(uVar35 - 0x48) = iVar12;
      *(undefined4 *)(uVar35 - 0x4c) = 0x4f3726;
      FUN_004f47dc();
      if (iVar12 <= local_60) {
LAB_004f4291:
        *(undefined4 *)(uVar35 - 4) = 0x4f42a0;
        uVar9 = (uVar35 - (local_68 * 4 + 0xf) & 0xfffffff0) - 1 | 0xf;
        puVar43 = (undefined4 *)(uVar9 + 1);
        puVar40 = local_54;
        puVar42 = puVar43;
        for (iVar12 = local_68; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar42 = *puVar40;
          puVar40 = puVar40 + 1;
          puVar42 = puVar42 + 1;
        }
        iVar39 = 0;
        iVar12 = local_68;
        puVar40 = puStack_4c;
        if (0 < local_68) {
          do {
            iVar7 = iVar39 * 4;
            iVar38 = iVar39 * 4;
            iVar39 = iVar39 + 1;
            local_54[*(int *)(local_24 + iVar7)] = *(undefined4 *)(uVar9 + 1 + iVar38);
          } while (iVar39 < local_68);
        }
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar43 = *puVar40;
          puVar40 = puVar40 + 1;
          puVar43 = puVar43 + 1;
        }
        iVar12 = 0;
        if (0 < local_68) {
          do {
            iVar39 = iVar12 * 4;
            iVar7 = iVar12 * 4;
            iVar12 = iVar12 + 1;
            puStack_4c[*(int *)(local_24 + iVar39)] = *(undefined4 *)(uVar9 + 1 + iVar7);
          } while (iVar12 < local_68);
        }
        return local_80;
      }
      local_78 = iVar12 + -6;
      local_7c = local_60;
      iVar39 = local_60;
LAB_004f374b:
      if (param_9 == 0) {
        iVar7 = iVar39 << 2;
      }
      else {
        iVar7 = iVar39 << 2;
        if (-1 < *(int *)(param_9 + iVar39 * 4)) {
          iVar6 = 0;
          iVar38 = iVar39;
          if (0 < iVar12) {
            if (5 < iVar12) {
              do {
                *(float *)(local_c0 + 1 + *(int *)(local_bc + 1 + iVar6 * 4) * 4) = local_84[iVar6];
                *(float *)(local_c0 + 1 + *(int *)(local_bc + 5 + iVar6 * 4) * 4) =
                     local_84[iVar6 + 1];
                *(float *)(local_c0 + 1 + *(int *)(local_bc + 9 + iVar6 * 4) * 4) =
                     local_84[iVar6 + 2];
                *(float *)(local_c0 + 1 + *(int *)(local_bc + 0xd + iVar6 * 4) * 4) =
                     local_84[iVar6 + 3];
                *(float *)(local_c0 + 1 + *(int *)(local_bc + 0x11 + iVar6 * 4) * 4) =
                     local_84[iVar6 + 4];
                iVar6 = iVar6 + 5;
                iVar12 = local_88;
              } while (iVar6 <= (int)local_78);
            }
            do {
              iVar3 = iVar6 * 4;
              puVar43 = local_84 + iVar6;
              iVar6 = iVar6 + 1;
              *(undefined4 *)(local_c0 + 1 + *(int *)(local_bc + 1 + iVar3) * 4) = *puVar43;
              local_e0 = iVar7;
              local_dc = iVar39;
            } while (iVar6 < iVar12);
          }
          while (iVar38 < iVar12) {
            iVar6 = iVar38 * 4;
            iVar38 = iVar38 + 1;
            fVar5 = *(float *)(local_c0 + 1 + *(int *)(param_9 + iVar6) * 4);
            if (fVar5 == _DAT_005babe4) {
              *(undefined4 *)(param_8 + -4 + iVar38 * 4) = 0;
              *(undefined4 *)(param_7 + -4 + iVar38 * 4) = 0;
              local_e0 = iVar7;
              local_dc = iVar39;
            }
            else {
              fVar5 = ABS(*(float *)(param_8 + -4 + iVar38 * 4) * fVar5);
              *(float *)(param_8 + -4 + iVar38 * 4) = fVar5;
              *(float *)(param_7 + -4 + iVar38 * 4) = -fVar5;
              local_e0 = iVar7;
              local_dc = iVar39;
            }
          }
          local_d8 = (float *)CONCAT31(local_d8._1_3_,1);
        }
      }
      do {
        *(int *)(uVar35 - 4) = local_1c;
        *(float **)(uVar35 - 8) = local_84;
        *(undefined4 *)(uVar35 - 0xc) = *(undefined4 *)(iVar7 + local_5c);
        *(undefined4 *)(uVar35 - 0x10) = 0x4f38ae;
        fVar44 = (float10)FUN_004f1618();
        local_a8 = (double)fVar44;
        iVar12 = *(int *)(iVar7 + local_5c);
        *(int *)(uVar35 - 4) = in_stack_ffffffe8;
        *(float **)(uVar35 - 8) = local_84 + local_1c;
        *(int *)(uVar35 - 0xc) = iVar12 + local_1c * 4;
        *(undefined4 *)(uVar35 - 0x10) = 0x4f38d3;
        fVar44 = (float10)FUN_004f1618();
        fVar44 = ((float10)local_a8 - (float10)*(float *)((int)param_4 + iVar7)) + fVar44;
        *(float *)(iVar7 + param_5) = (float)fVar44;
        local_8c = (float *)(iVar7 + param_7);
        fVar45 = (float10)_DAT_005babe4;
        if ((fVar45 != (float10)*local_8c) || (fVar44 < fVar45)) {
          local_90 = (float *)(iVar7 + param_8);
          if ((fVar45 != (float10)*local_90) || (fVar45 < fVar44)) {
            if (fVar45 != fVar44) {
              local_94 = (float *)(iVar7 + 1 + local_c0);
              local_b4 = (float *)(iVar7 + 1 + (int)local_cc);
              local_e0 = iVar7;
              local_dc = iVar39;
              local_b8 = (float *)(iVar7 + param_5);
LAB_004f3967:
              if (fVar45 < fVar44) {
                local_c8 = (float *)CONCAT31(local_c8._1_3_,0xff);
                fVar5 = _DAT_005babe0;
              }
              else {
                local_c8 = (float *)CONCAT31(local_c8._1_3_,1);
                fVar5 = _DAT_005babdc;
              }
              local_a8 = (double)fVar5;
              if (0 < local_1c) {
                iVar12 = *(int *)(local_e0 + local_5c);
                iVar7 = 0;
                iVar39 = local_60;
                if (0 < local_60) {
                  do {
                    *(undefined4 *)(local_38 + iVar7 * 4) = *(undefined4 *)(iVar12 + iVar7 * 4);
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < local_60);
                }
                for (; iVar39 < local_1c; iVar39 = iVar39 + 1) {
                  *(undefined4 *)(local_38 + iVar39 * 4) =
                       *(undefined4 *)(iVar12 + *(int *)(local_20 + iVar39 * 4) * 4);
                }
                *(int *)(uVar35 - 4) = local_64;
                *(int *)(uVar35 - 8) = local_1c;
                *(int *)(uVar35 - 0xc) = local_38;
                *(float **)(uVar35 - 0x10) = local_40;
                *(undefined4 *)(uVar35 - 0x14) = 0x4f39f6;
                FUN_004f1bf8();
                iVar12 = 0;
                if (0 < local_1c) {
                  do {
                    *(float *)(local_34 + iVar12 * 4) =
                         *(float *)(local_38 + iVar12 * 4) * local_3c[iVar12];
                    iVar12 = iVar12 + 1;
                  } while (iVar12 < local_1c);
                }
                iVar12 = 0;
                if (0 < local_1c) {
                  do {
                    *(undefined4 *)(local_30 + iVar12 * 4) = *(undefined4 *)(local_34 + iVar12 * 4);
                    iVar12 = iVar12 + 1;
                  } while (iVar12 < local_1c);
                }
                *(int *)(uVar35 - 4) = local_64;
                *(int *)(uVar35 - 8) = local_1c;
                *(int *)(uVar35 - 0xc) = local_30;
                *(float **)(uVar35 - 0x10) = local_40;
                *(undefined4 *)(uVar35 - 0x14) = 0x4f3a45;
                FUN_004f1d28();
                if ((char)local_c8 < '\x01') {
                  iVar12 = 0;
                  if (0 < local_1c) {
                    do {
                      iVar39 = iVar12 * 4;
                      iVar7 = iVar12 * 4;
                      iVar12 = iVar12 + 1;
                      *(undefined4 *)((int)local_c4 + 1U + *(int *)(local_20 + iVar39) * 4) =
                           *(undefined4 *)(local_30 + iVar7);
                    } while (iVar12 < local_1c);
                  }
                }
                else {
                  iVar12 = 0;
                  if (0 < local_1c) {
                    do {
                      iVar39 = iVar12 * 4;
                      iVar7 = iVar12 * 4;
                      iVar12 = iVar12 + 1;
                      *(float *)((int)local_c4 + 1U + *(int *)(local_20 + iVar39) * 4) =
                           -*(float *)(local_30 + iVar7);
                    } while (iVar12 < local_1c);
                  }
                }
              }
              iVar12 = local_b0;
              iVar39 = 0;
              if (0 < in_stack_ffffffe8) {
                do {
                  *(int *)(uVar35 - 4) = local_1c;
                  *(int *)(uVar35 - 8) = iVar12;
                  *(undefined4 *)(uVar35 - 0xc) =
                       *(undefined4 *)(local_1c * 4 + local_5c + iVar39 * 4);
                  *(undefined4 *)(uVar35 - 0x10) = 0x4f3aa5;
                  fVar44 = (float10)FUN_004f1618();
                  *(float *)(local_c0 + 1 + local_1c * 4 + iVar39 * 4) = (float)fVar44;
                  iVar39 = iVar39 + 1;
                } while (iVar39 < in_stack_ffffffe8);
              }
              iVar12 = *(int *)(local_5c + local_e0);
              local_d0 = local_1c * 4 + iVar12;
              if ((char)local_c8 < '\x01') {
                if (0 < in_stack_ffffffe8) {
                  iVar12 = 0;
                  do {
                    iVar39 = local_1c * 4 + 1 + local_c0;
                    *(float *)(iVar39 + iVar12 * 4) =
                         *(float *)(iVar39 + iVar12 * 4) - *(float *)(local_d0 + iVar12 * 4);
                    iVar12 = iVar12 + 1;
                  } while (iVar12 < in_stack_ffffffe8);
                  iVar12 = *(int *)(local_5c + local_e0);
                }
              }
              else if (0 < in_stack_ffffffe8) {
                iVar12 = 0;
                do {
                  iVar39 = local_1c * 4 + 1 + local_c0;
                  *(float *)(iVar39 + iVar12 * 4) =
                       *(float *)(iVar39 + iVar12 * 4) + *(float *)(local_d0 + iVar12 * 4);
                  iVar12 = iVar12 + 1;
                } while (iVar12 < in_stack_ffffffe8);
                iVar12 = *(int *)(local_5c + local_e0);
              }
              local_d4 = 0;
              *(int *)(uVar35 - 4) = local_1c;
              *(int *)(uVar35 - 8) = local_b0;
              *(int *)(uVar35 - 0xc) = iVar12;
              *(undefined4 *)(uVar35 - 0x10) = 0x4f3b3e;
              fVar44 = (float10)FUN_004f1618();
              iVar12 = local_dc;
              fVar44 = (float10)local_a8 *
                       (float10)*(float *)(local_e0 + *(int *)(local_e0 + local_5c)) + fVar44;
              *local_94 = (float)fVar44;
              local_d0 = CONCAT31(local_d0._1_3_,1);
              local_98 = 0;
              fVar45 = (float10)_DAT_005babdc;
              fVar44 = (fVar45 / fVar44) * -(float10)*local_b8;
              if ((char)local_c8 < '\x01') {
                if (((float10)_DAT_005babd8 < (float10)*local_8c) &&
                   (fVar48 = (fVar45 / (float10)local_a8) *
                             ((float10)*local_8c - (float10)*(float *)((int)local_84 + local_e0)),
                   fVar48 < fVar44)) {
                  local_d0 = CONCAT31(local_d0._1_3_,2);
                  fVar44 = fVar48;
                }
              }
              else if (((float10)*local_90 < (float10)_DAT_005babd4) &&
                      (fVar48 = (fVar45 / (float10)local_a8) *
                                ((float10)*local_90 - (float10)*(float *)((int)local_84 + local_e0))
                      , fVar48 < fVar44)) {
                local_d0 = CONCAT31(local_d0._1_3_,3);
                fVar44 = fVar48;
              }
              iVar39 = 0;
              if (0 < in_stack_ffffffe8) {
                fVar48 = (float10)_DAT_005babe4;
                local_a0 = local_1c;
                iVar7 = local_1c;
                do {
                  iVar38 = *(int *)((int)local_cc + 1U + iVar7 * 4);
                  if ((((iVar38 == 0) &&
                       (fVar46 = (float10)*(float *)(local_c0 + 1 + iVar7 * 4), fVar46 < fVar48)) ||
                      ((iVar38 != 0 &&
                       (fVar46 = (float10)*(float *)(local_c0 + 1 + iVar7 * 4), fVar48 < fVar46))))
                     && (((fVar48 != (float10)*(float *)(param_7 + iVar7 * 4) ||
                          (fVar48 != (float10)*(float *)(param_8 + iVar7 * 4))) &&
                         (fVar46 = -(float10)*(float *)(param_5 + iVar7 * 4) * (fVar45 / fVar46),
                         fVar46 < fVar44)))) {
                    local_d0 = CONCAT31(local_d0._1_3_,4);
                    fVar44 = fVar46;
                    local_98 = iVar7;
                  }
                  iVar7 = iVar7 + 1;
                  iVar39 = iVar39 + 1;
                } while (iVar39 < in_stack_ffffffe8);
              }
              fVar48 = (float10)_DAT_005babe4;
              if (local_7c < local_1c) {
                iVar39 = local_7c;
                do {
                  fVar46 = (float10)*(float *)((int)local_c4 + 1U + iVar39 * 4);
                  if (((fVar46 < fVar48) &&
                      (fVar47 = (float10)*(float *)(param_7 + iVar39 * 4),
                      (float10)_DAT_005babd8 <= fVar47)) &&
                     (fVar47 = (fVar45 / fVar46) * (fVar47 - (float10)local_84[iVar39]),
                     fVar47 < fVar44)) {
                    local_d0 = CONCAT31(local_d0._1_3_,5);
                    fVar44 = fVar47;
                    local_98 = iVar39;
                  }
                  if (((fVar48 < fVar46) &&
                      (fVar47 = (float10)*(float *)(param_8 + iVar39 * 4),
                      fVar47 < (float10)_DAT_005babd4)) &&
                     (fVar46 = (fVar47 - (float10)local_84[iVar39]) * (fVar45 / fVar46),
                     fVar46 < fVar44)) {
                    local_d0 = CONCAT31(local_d0._1_3_,6);
                    fVar44 = fVar46;
                    local_98 = iVar39;
                  }
                  iVar39 = iVar39 + 1;
                } while (iVar39 < local_1c);
              }
              if (fVar48 < fVar44) {
                iVar12 = 0;
                if (0 < local_1c) {
                  do {
                    local_84[iVar12] =
                         (float)(fVar44 * (float10)*(float *)((int)local_c4 + 1U + iVar12 * 4) +
                                (float10)local_84[iVar12]);
                    iVar12 = iVar12 + 1;
                  } while (iVar12 < local_1c);
                }
                pfVar8 = (float *)(local_e0 + (int)local_84);
                *pfVar8 = (float)(fVar44 * (float10)local_a8 + (float10)*pfVar8);
                iVar12 = 0;
                if (0 < in_stack_ffffffe8) {
                  do {
                    iVar39 = local_1c * 4 + param_5;
                    *(float *)(iVar39 + iVar12 * 4) =
                         (float)(fVar44 * (float10)*(float *)(local_c0 + 1 + local_1c * 4 +
                                                             iVar12 * 4) +
                                (float10)*(float *)(iVar39 + iVar12 * 4));
                    iVar12 = iVar12 + 1;
                    local_c8 = pfVar8;
                  } while (iVar12 < in_stack_ffffffe8);
                }
                *local_b8 = (float)(fVar44 * (float10)*local_94 + (float10)*local_b8);
                if ((byte)local_d0 != '\x01') {
                  if ((byte)local_d0 == '\x02') {
                    *pfVar8 = *local_8c;
                    *local_b4 = 0.0;
                    in_stack_ffffffe8 = in_stack_ffffffe8 + 1;
                    goto LAB_004f40ef;
                  }
                  if ((byte)local_d0 == '\x03') {
                    *pfVar8 = *local_90;
                    *local_b4 = 1.4013e-45;
                    in_stack_ffffffe8 = in_stack_ffffffe8 + 1;
                    goto LAB_004f40ef;
                  }
                  if ((byte)local_d0 == '\x04') {
                    local_9c = local_98 * 2;
                    *(undefined4 *)(param_5 + local_98 * 4) = 0;
                    if (local_1c < 1) {
                      *local_3c = _DAT_005babdc /
                                  *(float *)(*(int *)(local_5c + local_98 * 4) + local_98 * 4);
                    }
                    else {
                      iVar12 = *(int *)(local_5c + local_98 * 4);
                      iVar7 = 0;
                      iVar39 = local_60;
                      if (0 < local_60) {
                        do {
                          *(undefined4 *)(local_38 + iVar7 * 4) =
                               *(undefined4 *)(iVar12 + iVar7 * 4);
                          iVar7 = iVar7 + 1;
                        } while (iVar7 < local_60);
                      }
                      for (; iVar39 < local_1c; iVar39 = iVar39 + 1) {
                        *(undefined4 *)(local_38 + iVar39 * 4) =
                             *(undefined4 *)(iVar12 + *(int *)(local_20 + iVar39 * 4) * 4);
                      }
                      *(int *)(uVar35 - 4) = local_64;
                      *(int *)(uVar35 - 8) = local_1c;
                      *(int *)(uVar35 - 0xc) = local_38;
                      *(float **)(uVar35 - 0x10) = local_40;
                      *(undefined4 *)(uVar35 - 0x14) = 0x4f4004;
                      FUN_004f1bf8();
                      iVar12 = 0;
                      if (0 < local_1c) {
                        do {
                          *(float *)(local_34 + iVar12 * 4) =
                               *(float *)(local_38 + iVar12 * 4) * local_3c[iVar12];
                          iVar12 = iVar12 + 1;
                        } while (iVar12 < local_1c);
                      }
                      iVar12 = 0;
                      if (0 < local_1c) {
                        do {
                          *(undefined4 *)(local_1c * 4 * local_64 + (int)local_40 + iVar12 * 4) =
                               *(undefined4 *)(local_34 + iVar12 * 4);
                          iVar12 = iVar12 + 1;
                        } while (iVar12 < local_1c);
                      }
                      *(int *)(uVar35 - 4) = local_1c;
                      *(int *)(uVar35 - 8) = local_38;
                      *(int *)(uVar35 - 0xc) = local_34;
                      *(undefined4 *)(uVar35 - 0x10) = 0x4f4058;
                      fVar44 = (float10)FUN_004f1618();
                      local_3c[local_1c] =
                           (float)((float10)_DAT_005babdc /
                                  ((float10)*(float *)(*(int *)(local_5c + local_9c * 2) +
                                                      local_9c * 2) - fVar44));
                    }
                    *(undefined4 **)(uVar35 - 0x2c) = puStack_4c;
                    *(undefined4 *)(uVar35 - 0x28) = local_48;
                    *(undefined4 *)(uVar35 - 0x24) = local_44;
                    *(int *)(uVar35 - 0x20) = local_24;
                    *(undefined4 *)(uVar35 - 0x1c) = local_2c;
                    *(undefined4 *)(uVar35 - 0x18) = local_28;
                    *(int *)(uVar35 - 0x14) = local_68;
                    *(int *)(uVar35 - 0x10) = local_1c;
                    *(int *)(uVar35 - 0xc) = local_98;
                    *(int *)(uVar35 - 8) = local_64;
                    *(undefined4 *)(uVar35 - 4) = 1;
                    *(undefined4 *)(uVar35 - 0x3c) = 0x4f40dd;
                    FUN_004f4df0();
                    *(int *)(local_20 + local_1c * 4) = local_1c;
                    in_stack_ffffffe8 = in_stack_ffffffe8 + -1;
                    local_1c = local_1c + 1;
                    goto LAB_004f40ef;
                  }
                  if ((byte)local_d0 != '\x05') {
                    if ((byte)local_d0 != '\x06') goto LAB_004f40ef;
                    pfVar8 = (float *)0x0;
                    local_84[local_98] = (float)*(undefined4 *)(param_8 + local_98 * 4);
                    *(undefined4 *)((int)local_cc + 1U + local_98 * 4) = 1;
                    local_c8 = (float *)0x0;
                    if (0 < local_1c) {
                      local_9c = local_1c;
                      do {
                        if (local_98 == *(int *)(local_20 + (int)pfVar8 * 4)) {
                          *(int *)(uVar35 - 4) = local_64;
                          *(float **)(uVar35 - 8) = pfVar8;
                          *(int *)(uVar35 - 0xc) = local_1c;
                          *(int *)(uVar35 - 0x10) = local_68;
                          *(float **)(uVar35 - 0x14) = local_3c;
                          *(float **)(uVar35 - 0x18) = local_40;
                          *(int *)(uVar35 - 0x1c) = local_20;
                          *(int *)(uVar35 - 0x20) = local_5c;
                          *(undefined4 *)(uVar35 - 0x24) = 0x4f41e8;
                          local_d4 = (int)pfVar8 * 2;
                          local_c8 = pfVar8;
                          local_a0 = (int)pfVar8 << 2;
                          FUN_004eb984();
                          iVar12 = 0;
                          if (0 < local_1c) {
                            goto LAB_004f41fa;
                          }
                          break;
                        }
                        pfVar8 = (float *)((int)pfVar8 + 1);
                      } while ((int)pfVar8 < local_1c);
                    }
                    goto LAB_004f3f20;
                  }
                  pfVar8 = (float *)0x0;
                  local_84[local_98] = (float)*(undefined4 *)(param_7 + local_98 * 4);
                  *(undefined4 *)((int)local_cc + 1U + local_98 * 4) = 0;
                  local_c8 = (float *)0x0;
                  if (0 < local_1c) {
                    local_9c = local_1c;
                    do {
                      if (local_98 == *(int *)(local_20 + (int)pfVar8 * 4)) {
                        *(int *)(uVar35 - 4) = local_64;
                        *(float **)(uVar35 - 8) = pfVar8;
                        *(int *)(uVar35 - 0xc) = local_1c;
                        *(int *)(uVar35 - 0x10) = local_68;
                        *(float **)(uVar35 - 0x14) = local_3c;
                        *(float **)(uVar35 - 0x18) = local_40;
                        *(int *)(uVar35 - 0x1c) = local_20;
                        *(int *)(uVar35 - 0x20) = local_5c;
                        *(undefined4 *)(uVar35 - 0x24) = 0x4f4131;
                        local_d4 = (int)pfVar8 * 2;
                        local_c8 = pfVar8;
                        local_a0 = (int)pfVar8 << 2;
                        FUN_004eb984();
                        iVar12 = 0;
                        if (0 < local_1c) {
                          goto LAB_004f4143;
                        }
                        break;
                      }
                      pfVar8 = (float *)((int)pfVar8 + 1);
                    } while ((int)pfVar8 < local_1c);
                  }
                  goto LAB_004f3e4e;
                }
                *local_b8 = 0.0;
                if (local_1c < 1) {
                  *local_3c = _DAT_005babdc / *(float *)(local_e0 + *(int *)(local_e0 + local_5c));
                }
                else {
                  iVar12 = 0;
                  if (0 < local_1c) {
                    do {
                      *(undefined4 *)(local_1c * 4 * local_64 + (int)local_40 + iVar12 * 4) =
                           *(undefined4 *)(local_34 + iVar12 * 4);
                      iVar12 = iVar12 + 1;
                    } while (iVar12 < local_1c);
                  }
                  *(int *)(uVar35 - 4) = local_1c;
                  *(int *)(uVar35 - 8) = local_38;
                  *(int *)(uVar35 - 0xc) = local_34;
                  *(undefined4 *)(uVar35 - 0x10) = 0x4f43ac;
                  fVar44 = (float10)FUN_004f1618();
                  local_3c[local_1c] =
                       (float)((float10)_DAT_005babdc /
                              ((float10)*(float *)(local_e0 + *(int *)(local_e0 + local_5c)) -
                              fVar44));
                }
                *(undefined4 **)(uVar35 - 0x2c) = puStack_4c;
                *(undefined4 *)(uVar35 - 0x28) = local_48;
                *(undefined4 *)(uVar35 - 0x24) = local_44;
                *(int *)(uVar35 - 0x20) = local_24;
                *(undefined4 *)(uVar35 - 0x1c) = local_2c;
                *(undefined4 *)(uVar35 - 0x18) = local_28;
                *(int *)(uVar35 - 0x14) = local_68;
                *(int *)(uVar35 - 0x10) = local_1c;
                *(int *)(uVar35 - 0xc) = local_dc;
                *(int *)(uVar35 - 8) = local_64;
                *(undefined4 *)(uVar35 - 4) = 1;
                *(undefined4 *)(uVar35 - 0x3c) = 0x4f4431;
                FUN_004f4df0();
                *(int *)(local_20 + local_1c * 4) = local_1c;
                local_1c = local_1c + 1;
                goto LAB_004f40ef;
              }
              *(undefined4 *)(uVar35 - 0x10) = 3;
              *(char **)(uVar35 - 0xc) = "LCP internal error, s <= 0 (s=%.4e)";
              *(double *)(uVar35 - 8) = (double)fVar44;
              *(undefined4 *)(uVar35 - 0x14) = 0x4f4485;
              FUN_004edb88();
              local_80 = 0;
              if (iVar12 < local_88 + -1) {
                local_88 = local_88 - iVar12;
                *(int *)(uVar35 - 4) = local_88;
                *(int *)(uVar35 - 8) = local_e0 + (int)local_84;
                *(undefined4 *)(uVar35 - 0xc) = 0x4f44b2;
                FUN_004ec1bc();
                *(int *)(uVar35 - 4) = local_88;
                *(float **)(uVar35 - 8) = local_b8;
                *(undefined4 *)(uVar35 - 0xc) = 0x4f44c5;
                FUN_004ec1bc();
              }
              goto LAB_004f4291;
            }
            if (0 < local_1c) {
              iVar12 = *(int *)(iVar7 + local_5c);
              local_98 = 0;
              iVar38 = local_60;
              if (0 < local_60) {
                iVar6 = 0;
                do {
                  *(undefined4 *)(local_38 + iVar6 * 4) = *(undefined4 *)(iVar12 + iVar6 * 4);
                  iVar6 = iVar6 + 1;
                  local_e0 = iVar7;
                  local_dc = iVar39;
                } while (iVar6 < local_60);
              }
              for (; iVar38 < local_1c; iVar38 = iVar38 + 1) {
                *(undefined4 *)(local_38 + iVar38 * 4) =
                     *(undefined4 *)(iVar12 + *(int *)(local_20 + iVar38 * 4) * 4);
                local_e0 = iVar7;
                local_dc = iVar39;
              }
              *(int *)(uVar35 - 4) = local_64;
              *(int *)(uVar35 - 8) = local_1c;
              *(int *)(uVar35 - 0xc) = local_38;
              *(float **)(uVar35 - 0x10) = local_40;
              *(undefined4 *)(uVar35 - 0x14) = 0x4f4649;
              FUN_004f1bf8();
              iVar12 = 0;
              if (0 < local_1c) {
                do {
                  *(float *)(local_34 + iVar12 * 4) =
                       *(float *)(local_38 + iVar12 * 4) * local_3c[iVar12];
                  iVar12 = iVar12 + 1;
                } while (iVar12 < local_1c);
              }
            }
            if (local_1c < 1) {
              *local_3c = _DAT_005babdc / *(float *)(iVar7 + *(int *)(iVar7 + local_5c));
            }
            else {
              iVar12 = 0;
              if (0 < local_1c) {
                do {
                  *(undefined4 *)(local_1c * 4 * local_64 + (int)local_40 + iVar12 * 4) =
                       *(undefined4 *)(local_34 + iVar12 * 4);
                  iVar12 = iVar12 + 1;
                  local_dc = iVar39;
                } while (iVar12 < local_1c);
              }
              *(int *)(uVar35 - 4) = local_1c;
              *(int *)(uVar35 - 8) = local_38;
              *(int *)(uVar35 - 0xc) = local_34;
              *(undefined4 *)(uVar35 - 0x10) = 0x4f46b2;
              fVar44 = (float10)FUN_004f1618();
              local_3c[local_1c] =
                   (float)((float10)_DAT_005babdc /
                          ((float10)*(float *)(iVar7 + *(int *)(iVar7 + local_5c)) - fVar44));
            }
            *(undefined4 **)(uVar35 - 0x2c) = puStack_4c;
            *(undefined4 *)(uVar35 - 0x28) = local_48;
            *(undefined4 *)(uVar35 - 0x24) = local_44;
            *(int *)(uVar35 - 0x20) = local_24;
            *(undefined4 *)(uVar35 - 0x1c) = local_2c;
            *(undefined4 *)(uVar35 - 0x18) = local_28;
            *(int *)(uVar35 - 0x14) = local_68;
            *(int *)(uVar35 - 0x10) = local_1c;
            *(int *)(uVar35 - 0xc) = iVar39;
            *(int *)(uVar35 - 8) = local_64;
            *(undefined4 *)(uVar35 - 4) = 1;
            *(undefined4 *)(uVar35 - 0x3c) = 0x4f472b;
            FUN_004f4df0();
            *(int *)(local_20 + local_1c * 4) = local_1c;
            local_1c = local_1c + 1;
          }
          else {
            in_stack_ffffffe8 = in_stack_ffffffe8 + 1;
            *(undefined4 *)((int)local_cc + 1U + iVar7) = 1;
          }
        }
        else {
          in_stack_ffffffe8 = in_stack_ffffffe8 + 1;
          *(undefined4 *)((int)local_cc + 1U + iVar7) = 0;
        }
LAB_004f4276:
        iVar39 = iVar39 + 1;
        if (local_88 <= iVar39) goto LAB_004f4291;
        iVar12 = local_88;
        if ((char)local_d8 == '\0') goto LAB_004f374b;
        iVar7 = iVar39 * 4;
      } while( true );
    }
    uVar49 = FUN_004d34fc();
    param_3 = extraout_ECX;
  } while( true );
  while (iVar38 = iVar38 + 1, local_78 = uVar41, iVar38 < (int)local_94) {
LAB_004f2dfc:
    if (iVar39 == *(int *)(local_98 + iVar38 * 4)) {
      *(undefined4 *)(local_98 + iVar38 * 4) = *(undefined4 *)(local_98 + iVar7 * 4);
      iVar39 = (int)local_94 + -1;
      local_78 = uVar41;
      if (iVar7 < iVar39) {
        *(int *)(uVar25 - 4) = (int)local_94 * 4 + -4 + iVar7 * -4;
        *(int *)(uVar25 - 8) = local_98 + 4 + iVar7 * 4;
        *(int *)(uVar25 - 0xc) = local_7c + local_98;
        *(undefined4 *)(uVar25 - 0x10) = 0x4f2e5b;
        memmove(*(void **)(uVar25 - 0xc),*(void **)(uVar25 - 8),*(size_t *)(uVar25 - 4));
        iVar39 = (int)local_94 + -1;
      }
      break;
    }
  }
LAB_004f2a64:
  *(undefined4 **)(uVar25 - 0x2c) = local_c4;
  *(uint *)(uVar25 - 0x28) = local_c0;
  *(uint *)(uVar25 - 0x24) = local_bc;
  *(int *)(uVar25 - 0x20) = local_9c;
  *(undefined4 *)(uVar25 - 0x1c) = local_a8._4_4_;
  *(int *)(uVar25 - 0x18) = local_a0;
  *(int *)(uVar25 - 0x14) = local_e0;
  *(float **)(uVar25 - 0x10) = local_40;
  *(int *)(uVar25 - 0xc) = iVar39;
  *(int *)(uVar25 - 8) = local_dc;
  *(undefined4 *)(uVar25 - 4) = 1;
  *(undefined4 *)(uVar25 - 0x3c) = 0x4f2ae1;
  FUN_004f4df0();
  local_94 = (float *)((int)local_94 + -1);
  local_90 = (float *)((int)local_90 + 1);
  goto LAB_004f2ccc;
  while (iVar38 = iVar38 + 1, local_78 = uVar41, iVar38 < (int)local_94) {
LAB_004f2d2d:
    if (iVar39 == *(int *)(local_98 + iVar38 * 4)) {
      *(undefined4 *)(local_98 + iVar38 * 4) = *(undefined4 *)(local_98 + iVar7 * 4);
      iVar39 = (int)local_94 + -1;
      local_78 = uVar41;
      if (iVar7 < iVar39) {
        *(int *)(uVar25 - 4) = (int)local_94 * 4 + -4 + iVar7 * -4;
        *(int *)(uVar25 - 8) = local_98 + 4 + iVar7 * 4;
        *(int *)(uVar25 - 0xc) = local_7c + local_98;
        *(undefined4 *)(uVar25 - 0x10) = 0x4f2d8c;
        memmove(*(void **)(uVar25 - 0xc),*(void **)(uVar25 - 8),*(size_t *)(uVar25 - 4));
        iVar39 = (int)local_94 + -1;
      }
      break;
    }
  }
LAB_004f2971:
  *(undefined4 **)(uVar25 - 0x2c) = local_c4;
  *(uint *)(uVar25 - 0x28) = local_c0;
  *(uint *)(uVar25 - 0x24) = local_bc;
  *(int *)(uVar25 - 0x20) = local_9c;
  *(undefined4 *)(uVar25 - 0x1c) = local_a8._4_4_;
  *(int *)(uVar25 - 0x18) = local_a0;
  *(int *)(uVar25 - 0x14) = local_e0;
  *(float **)(uVar25 - 0x10) = local_40;
  *(int *)(uVar25 - 0xc) = iVar39;
  *(int *)(uVar25 - 8) = local_dc;
  *(undefined4 *)(uVar25 - 4) = 1;
  *(undefined4 *)(uVar25 - 0x3c) = 0x4f29ee;
  FUN_004f4df0();
  local_94 = (float *)((int)local_94 + -1);
  local_90 = (float *)((int)local_90 + 1);
LAB_004f2ccc:
  pfVar37 = local_84;
  if (uVar41 < 4) goto LAB_004f2e7b;
  fVar45 = (float10)*pfVar36;
  fVar44 = (float10)_DAT_005babbc;
  goto LAB_004f2405;
  while (iVar12 = iVar12 + 1, iVar12 < local_1c) {
LAB_004f41fa:
    if (local_1c + -1 == *(int *)(local_20 + iVar12 * 4)) {
      *(undefined4 *)(local_20 + iVar12 * 4) = *(undefined4 *)(local_20 + local_d4 * 2);
      if ((int)local_c8 < local_1c + -1) {
        *(int *)(uVar35 - 4) = local_1c * 4 + -4 + (int)local_c8 * -4;
        *(int *)(uVar35 - 8) = local_20 + 4 + local_d4 * 2;
        *(int *)(uVar35 - 0xc) = local_a0 + local_20;
        *(undefined4 *)(uVar35 - 0x10) = 0x4f4256;
        memmove(*(void **)(uVar35 - 0xc),*(void **)(uVar35 - 8),*(size_t *)(uVar35 - 4));
      }
      break;
    }
  }
LAB_004f3f20:
  *(undefined4 **)(uVar35 - 0x2c) = puStack_4c;
  *(undefined4 *)(uVar35 - 0x28) = local_48;
  *(undefined4 *)(uVar35 - 0x24) = local_44;
  *(int *)(uVar35 - 0x20) = local_24;
  *(undefined4 *)(uVar35 - 0x1c) = local_2c;
  *(undefined4 *)(uVar35 - 0x18) = local_28;
  *(int *)(uVar35 - 0x14) = local_68;
  *(int *)(uVar35 - 0x10) = local_98;
  *(int *)(uVar35 - 0xc) = local_1c + -1;
  *(int *)(uVar35 - 8) = local_64;
  *(undefined4 *)(uVar35 - 4) = 1;
  *(undefined4 *)(uVar35 - 0x3c) = 0x4f3f7f;
  FUN_004f4df0();
  local_1c = local_1c + -1;
  in_stack_ffffffe8 = in_stack_ffffffe8 + 1;
  goto LAB_004f40ef;
  while (iVar12 = iVar12 + 1, iVar12 < local_1c) {
LAB_004f4143:
    if (local_1c + -1 == *(int *)(local_20 + iVar12 * 4)) {
      *(undefined4 *)(local_20 + iVar12 * 4) = *(undefined4 *)(local_20 + local_d4 * 2);
      if ((int)local_c8 < local_1c + -1) {
        *(int *)(uVar35 - 4) = local_1c * 4 + -4 + (int)local_c8 * -4;
        *(int *)(uVar35 - 8) = local_20 + 4 + local_d4 * 2;
        *(int *)(uVar35 - 0xc) = local_a0 + local_20;
        *(undefined4 *)(uVar35 - 0x10) = 0x4f419f;
        memmove(*(void **)(uVar35 - 0xc),*(void **)(uVar35 - 8),*(size_t *)(uVar35 - 4));
      }
      break;
    }
  }
LAB_004f3e4e:
  *(undefined4 **)(uVar35 - 0x2c) = puStack_4c;
  *(undefined4 *)(uVar35 - 0x28) = local_48;
  *(undefined4 *)(uVar35 - 0x24) = local_44;
  *(int *)(uVar35 - 0x20) = local_24;
  *(undefined4 *)(uVar35 - 0x1c) = local_2c;
  *(undefined4 *)(uVar35 - 0x18) = local_28;
  *(int *)(uVar35 - 0x14) = local_68;
  *(int *)(uVar35 - 0x10) = local_98;
  *(int *)(uVar35 - 0xc) = local_1c + -1;
  *(int *)(uVar35 - 8) = local_64;
  *(undefined4 *)(uVar35 - 4) = 1;
  *(undefined4 *)(uVar35 - 0x3c) = 0x4f3ead;
  FUN_004f4df0();
  local_1c = local_1c + -1;
  in_stack_ffffffe8 = in_stack_ffffffe8 + 1;
LAB_004f40ef:
  iVar39 = local_dc;
  if ((byte)local_d0 < 4) goto LAB_004f4276;
  fVar44 = (float10)*local_b8;
  fVar45 = (float10)_DAT_005babe4;
  goto LAB_004f3967;
}




/* Function: FUN_004f47dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall
FUN_004f47dc(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11,int param_12,int param_13,int param_14
            ,int param_15,int param_16,int param_17,int param_18,int param_19)

{
  int iVar1;
  int *extraout_ECX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_14;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xfffffff4) != 0) {
      *param_1 = param_2;
      param_1[2] = param_3;
      param_1[4] = param_4;
      param_1[3] = 0;
      param_1[5] = param_5;
      param_1[6] = param_6;
      param_1[7] = param_7;
      param_1[8] = param_8;
      param_1[9] = param_9;
      param_1[10] = param_10;
      param_1[0xb] = param_11;
      param_1[0xc] = param_12;
      param_1[0xd] = param_13;
      param_1[0xe] = param_14;
      param_1[0xf] = param_15;
      param_1[0x10] = param_16;
      param_1[0x11] = param_17;
      param_1[0x12] = param_18;
      iVar1 = (param_2 - 1U | 3) + 1;
      if (param_2 < 2) {
        iVar1 = param_2;
      }
      param_1[1] = iVar1;
      FUN_004ec1bc(param_5,param_2);
      param_1[3] = param_19;
      iVar6 = 0;
      iVar1 = *param_1;
      if (0 < iVar1) {
        while( true ) {
          *(int *)(param_19 + iVar6 * 4) = param_1[1] * 4 * iVar6 + param_1[4];
          iVar1 = *param_1;
          iVar6 = iVar6 + 1;
          if (iVar1 <= iVar6) break;
          param_19 = param_1[3];
        }
      }
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      iVar6 = 0;
      if (0 < iVar1) {
        do {
          *(int *)(param_1[0x11] + iVar6 * 4) = iVar6;
          iVar1 = *param_1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
      }
      local_14 = param_1[2];
      iVar6 = local_14;
      if (local_14 < iVar1) {
        do {
          if (((param_1[0x10] == 0) || (*(int *)(param_1[0x10] + iVar6 * 4) < 0)) &&
             ((*(float *)(param_1[8] + iVar6 * 4) == _DAT_005babec &&
              (*(float *)(param_1[9] + iVar6 * 4) == _DAT_005babe8)))) {
            FUN_004f4df0();
            local_14 = param_1[2] + 1;
            iVar1 = *param_1;
            param_1[2] = local_14;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
      }
      if (0 < local_14) {
        if (0 < local_14) {
          iVar1 = 0;
          uVar4 = 4;
          iVar6 = 0;
          do {
            puVar5 = *(undefined4 **)(param_1[3] + iVar6 * 4);
            puVar7 = (undefined4 *)(iVar1 * param_1[1] + param_1[10]);
            for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar7 = puVar7 + 1;
            }
            for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
            iVar1 = iVar1 + 4;
            uVar4 = uVar4 + 4;
            iVar6 = iVar6 + 1;
            local_14 = param_1[2];
          } while (iVar6 < local_14);
        }
        FUN_004f16a0(param_1[10],param_1[0xb],local_14,param_1[1]);
        puVar5 = (undefined4 *)param_1[6];
        puVar7 = (undefined4 *)param_1[5];
        for (iVar1 = param_1[2]; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_004ec118(param_1[10],param_1[0xb],param_1[5],param_1[2],param_1[1]);
        FUN_004ec1bc(param_1[7],param_1[2]);
        iVar1 = 0;
        local_14 = param_1[2];
        if (0 < local_14) {
          do {
            *(int *)(param_1[0x12] + iVar1 * 4) = iVar1;
            local_14 = param_1[2];
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_14);
        }
        param_1[0x13] = local_14;
      }
      iVar1 = param_1[0x10];
      if ((iVar1 != 0) && (iVar6 = *param_1 + -1, local_14 <= iVar6)) {
        while( true ) {
          if (-1 < *(int *)(iVar1 + iVar6 * 4)) {
            FUN_004f4df0();
            local_14 = param_1[2];
          }
          iVar6 = iVar6 + -1;
          if (iVar6 < local_14) break;
          iVar1 = param_1[0x10];
        }
      }
      return param_1;
    }
    if (_DAT_005b71d0 != 0) break;
    FUN_004d34fc();
    param_1 = extraout_ECX;
  }
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[4] = param_4;
  param_1[3] = 0;
  param_1[5] = param_5;
  param_1[6] = param_6;
  param_1[7] = param_7;
  param_1[8] = param_8;
  param_1[9] = param_9;
  param_1[10] = param_10;
  param_1[0xb] = param_11;
  param_1[0xc] = param_12;
  param_1[0xd] = param_13;
  param_1[0xe] = param_14;
  param_1[0xf] = param_15;
  param_1[0x10] = param_16;
  param_1[0x11] = param_17;
  param_1[0x12] = param_18;
  iVar1 = param_2;
  if (1 < param_2) {
    iVar1 = (param_2 - 1U | 3) + 1;
  }
  param_1[1] = iVar1;
  FUN_004ec1bc(param_5,param_2);
  param_1[3] = param_19;
  iVar6 = 0;
  iVar1 = *param_1;
  if (0 < iVar1) {
    while( true ) {
      *(int *)(param_19 + iVar6 * 4) = param_1[1] * 4 * iVar6 + param_1[4];
      iVar1 = *param_1;
      iVar6 = iVar6 + 1;
      if (iVar1 <= iVar6) break;
      param_19 = param_1[3];
    }
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      *(int *)(param_1[0x11] + iVar6 * 4) = iVar6;
      iVar1 = *param_1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  local_14 = param_1[2];
  iVar6 = local_14;
  if (local_14 < iVar1) {
    do {
      if ((((param_1[0x10] == 0) || (*(int *)(param_1[0x10] + iVar6 * 4) < 0)) &&
          (*(float *)(param_1[8] + iVar6 * 4) == _DAT_005babfc)) &&
         (*(float *)(param_1[9] + iVar6 * 4) == _DAT_005babf8)) {
        FUN_004f4df0();
        local_14 = param_1[2] + 1;
        iVar1 = *param_1;
        param_1[2] = local_14;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  if (0 < local_14) {
    if (0 < local_14) {
      iVar1 = 0;
      uVar4 = 4;
      iVar6 = 0;
      do {
        puVar5 = *(undefined4 **)(param_1[3] + iVar6 * 4);
        puVar7 = (undefined4 *)(iVar1 * param_1[1] + param_1[10]);
        for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        iVar1 = iVar1 + 4;
        uVar4 = uVar4 + 4;
        iVar6 = iVar6 + 1;
        local_14 = param_1[2];
      } while (iVar6 < local_14);
    }
    FUN_004f16a0(param_1[10],param_1[0xb],local_14,param_1[1]);
    puVar5 = (undefined4 *)param_1[6];
    puVar7 = (undefined4 *)param_1[5];
    for (iVar1 = param_1[2]; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_004ec118(param_1[10],param_1[0xb],param_1[5],param_1[2],param_1[1]);
    FUN_004ec1bc(param_1[7],param_1[2]);
    iVar1 = 0;
    local_14 = param_1[2];
    if (0 < local_14) {
      do {
        *(int *)(param_1[0x12] + iVar1 * 4) = iVar1;
        local_14 = param_1[2];
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_14);
    }
    param_1[0x13] = local_14;
  }
  iVar1 = param_1[0x10];
  if ((iVar1 != 0) && (iVar6 = *param_1 + -1, local_14 <= iVar6)) {
    while( true ) {
      if (-1 < *(int *)(iVar1 + iVar6 * 4)) {
        FUN_004f4df0();
        local_14 = param_1[2];
      }
      iVar6 = iVar6 + -1;
      if (iVar6 < local_14) break;
      iVar1 = param_1[0x10];
    }
  }
  return param_1;
}




/* Function: FUN_004f4df0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_004f4df0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_EAX;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000038;
  undefined1 local_34 [4];
  int local_30;
  int *local_2c;
  int *local_14;
  
  if (in_stack_0000002c != in_stack_00000030) {
    iVar3 = in_stack_0000002c + 1;
    if (iVar3 < in_stack_00000030) {
      iVar6 = iVar3;
      if (4 < in_stack_00000030 - iVar3) {
        do {
          *(undefined4 *)(*(int *)(in_EAX + in_stack_0000002c * 4) + iVar6 * 4) =
               *(undefined4 *)(*(int *)(in_EAX + iVar6 * 4) + in_stack_0000002c * 4);
          *(undefined4 *)(*(int *)(in_EAX + in_stack_0000002c * 4) + 4 + iVar6 * 4) =
               *(undefined4 *)(*(int *)(in_EAX + 4 + iVar6 * 4) + in_stack_0000002c * 4);
          *(undefined4 *)(*(int *)(in_EAX + in_stack_0000002c * 4) + 8 + iVar6 * 4) =
               *(undefined4 *)(*(int *)(in_EAX + 8 + iVar6 * 4) + in_stack_0000002c * 4);
          *(undefined4 *)(*(int *)(in_EAX + in_stack_0000002c * 4) + 0xc + iVar6 * 4) =
               *(undefined4 *)(*(int *)(in_EAX + 0xc + iVar6 * 4) + in_stack_0000002c * 4);
          iVar6 = iVar6 + 4;
        } while (iVar6 <= in_stack_00000030 + -5);
      }
      local_14 = (int *)(in_EAX + in_stack_0000002c * 4);
      do {
        *(undefined4 *)(*local_14 + iVar6 * 4) =
             *(undefined4 *)(*(int *)(in_EAX + iVar6 * 4) + in_stack_0000002c * 4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < in_stack_00000030);
    }
    else {
      local_14 = (int *)(in_EAX + in_stack_0000002c * 4);
    }
    in_stack_0000002c = in_stack_0000002c * 4;
    if (iVar3 < in_stack_00000030) {
      if (4 < in_stack_00000030 - iVar3) {
        do {
          *(undefined4 *)(*(int *)(in_EAX + iVar3 * 4) + in_stack_0000002c) =
               *(undefined4 *)(*(int *)(in_EAX + in_stack_00000030 * 4) + iVar3 * 4);
          *(undefined4 *)(*(int *)(in_EAX + 4 + iVar3 * 4) + in_stack_0000002c) =
               *(undefined4 *)(*(int *)(in_EAX + in_stack_00000030 * 4) + 4 + iVar3 * 4);
          *(undefined4 *)(*(int *)(in_EAX + 8 + iVar3 * 4) + in_stack_0000002c) =
               *(undefined4 *)(*(int *)(in_EAX + in_stack_00000030 * 4) + 8 + iVar3 * 4);
          iVar6 = iVar3 * 4;
          iVar1 = iVar3 * 4;
          iVar3 = iVar3 + 4;
          *(undefined4 *)(*(int *)(in_EAX + 0xc + iVar6) + in_stack_0000002c) =
               *(undefined4 *)(*(int *)(in_EAX + in_stack_00000030 * 4) + 0xc + iVar1);
        } while (iVar3 <= in_stack_00000030 + -5);
      }
      local_2c = (int *)(in_EAX + in_stack_00000030 * 4);
      do {
        iVar6 = iVar3 * 4;
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*(int *)(in_EAX + iVar6) + in_stack_0000002c) =
             *(undefined4 *)(*local_2c + iVar1);
      } while (iVar3 < in_stack_00000030);
    }
    else {
      local_2c = (int *)(in_EAX + in_stack_00000030 * 4);
    }
    local_30 = in_stack_00000030 * 4;
    *(undefined4 *)(local_30 + *local_14) = *(undefined4 *)(*local_14 + in_stack_0000002c);
    *(undefined4 *)(in_stack_0000002c + *local_14) = *(undefined4 *)(*local_2c + in_stack_0000002c);
    *(undefined4 *)(*local_2c + in_stack_0000002c) = *(undefined4 *)(*local_2c + local_30);
    if (in_stack_00000038 == 0) {
      puVar4 = (undefined4 *)
               ((((uint)(local_34 + -(in_stack_00000028 * 4 + 0xf)) & 0xfffffff0) - 1 | 0xf) + 1);
      puVar7 = (undefined4 *)*local_14;
      puVar8 = puVar4;
      for (iVar3 = in_stack_00000028; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar7 = (undefined4 *)*local_2c;
      puVar8 = (undefined4 *)*local_14;
      for (iVar3 = in_stack_00000028; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar7 = (undefined4 *)*local_2c;
      for (iVar3 = in_stack_00000028; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    else {
      iVar3 = *local_14;
      *local_14 = *local_2c;
      *local_2c = iVar3;
    }
    if (in_stack_00000030 + 1 < in_stack_00000028) {
      piVar5 = (int *)(in_EAX + 4 + in_stack_00000030 * 4);
      do {
        iVar3 = *piVar5;
        uVar2 = *(undefined4 *)(iVar3 + in_stack_0000002c);
        *(undefined4 *)(iVar3 + in_stack_0000002c) = *(undefined4 *)(iVar3 + local_30);
        iVar3 = *piVar5;
        piVar5 = piVar5 + 1;
        *(undefined4 *)(iVar3 + local_30) = uVar2;
      } while (piVar5 < (int *)(in_EAX + in_stack_00000028 * 4));
    }
    uVar2 = *(undefined4 *)(param_2 + in_stack_0000002c);
    *(undefined4 *)(param_2 + in_stack_0000002c) = *(undefined4 *)(local_30 + param_2);
    *(undefined4 *)(local_30 + param_2) = uVar2;
    uVar2 = *(undefined4 *)(param_1 + in_stack_0000002c);
    *(undefined4 *)(param_1 + in_stack_0000002c) = *(undefined4 *)(local_30 + param_1);
    *(undefined4 *)(local_30 + param_1) = uVar2;
    uVar2 = *(undefined4 *)(in_stack_00000010 + in_stack_0000002c);
    *(undefined4 *)(in_stack_00000010 + in_stack_0000002c) =
         *(undefined4 *)(local_30 + in_stack_00000010);
    *(undefined4 *)(local_30 + in_stack_00000010) = uVar2;
    uVar2 = *(undefined4 *)(in_stack_00000014 + in_stack_0000002c);
    *(undefined4 *)(in_stack_00000014 + in_stack_0000002c) =
         *(undefined4 *)(local_30 + in_stack_00000014);
    *(undefined4 *)(local_30 + in_stack_00000014) = uVar2;
    uVar2 = *(undefined4 *)(in_stack_00000018 + in_stack_0000002c);
    *(undefined4 *)(in_stack_00000018 + in_stack_0000002c) =
         *(undefined4 *)(local_30 + in_stack_00000018);
    *(undefined4 *)(local_30 + in_stack_00000018) = uVar2;
    uVar2 = *(undefined4 *)(in_stack_0000001c + in_stack_0000002c);
    *(undefined4 *)(in_stack_0000001c + in_stack_0000002c) =
         *(undefined4 *)(local_30 + in_stack_0000001c);
    *(undefined4 *)(local_30 + in_stack_0000001c) = uVar2;
    uVar2 = *(undefined4 *)(in_stack_00000020 + in_stack_0000002c);
    *(undefined4 *)(in_stack_00000020 + in_stack_0000002c) =
         *(undefined4 *)(local_30 + in_stack_00000020);
    *(undefined4 *)(local_30 + in_stack_00000020) = uVar2;
    if (in_stack_00000024 != 0) {
      uVar2 = *(undefined4 *)(in_stack_00000024 + in_stack_0000002c);
      *(undefined4 *)(in_stack_00000024 + in_stack_0000002c) =
           *(undefined4 *)(local_30 + in_stack_00000024);
      *(undefined4 *)(local_30 + in_stack_00000024) = uVar2;
    }
    return;
  }
  return;
}




/* Function: FUN_004f5100 */

void FUN_004f5100(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = param_2 * param_3 * 3;
  if (0 < iVar3) {
    puVar2 = (undefined1 *)(param_1 + 2);
    iVar3 = (iVar3 - 1U) / 3 + 1;
    do {
      uVar1 = puVar2[-2];
      puVar2[-2] = *puVar2;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}




/* Function: FUN_004f5140 */

undefined4 FUN_004f5140(char *param_1,ushort param_2,ushort param_3,void *param_4)

{
  FILE *_File;
  undefined1 local_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined2 uStack_f;
  undefined1 uStack_d;
  undefined4 local_c;
  ushort local_8;
  ushort uStack_6;
  undefined2 local_4;
  
  local_14 = 0;
  uStack_13 = 0;
  uStack_12 = 2;
  uStack_11 = 0;
  uStack_10 = 0;
  uStack_f = 0;
  uStack_d = 0;
  local_c = 0;
  local_8 = param_2;
  uStack_6 = param_3;
  local_4 = 0x18;
  _File = fopen(param_1,"wb");
  if (_File == (FILE *)0x0) {
    return 0;
  }
  fwrite(&local_14,1,0x12,_File);
  FUN_004f5100(param_4,local_8,uStack_6);
  fwrite(param_4,3,(uint)uStack_6 * (uint)local_8,_File);
  FUN_004f5100(param_4,local_8,uStack_6);
  fclose(_File);
  return 1;
}




/* Function: FUN_004f5230 */

void FUN_004f5230(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (-1 - (int)(param_1 + 1));
  *param_2 = '\0';
  if (pcVar2 != (char *)0x0) {
    while (-1 < (int)pcVar2) {
      pcVar5 = pcVar2 + -1;
      pcVar2 = pcVar2 + -1;
      if (param_1[(int)pcVar5] == '.') {
        pcVar5 = param_2;
        for (uVar3 = (uint)pcVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)param_1;
          param_1 = param_1 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (uVar3 = (uint)pcVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar5 = *param_1;
          param_1 = param_1 + 1;
          pcVar5 = pcVar5 + 1;
        }
        param_2[(int)pcVar2] = '\0';
        return;
      }
    }
    iVar4 = (int)param_2 - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar4] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  return;
}




/* Function: FUN_004f5290 */

void FUN_004f5290(undefined4 param_1,undefined1 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char local_80 [128];
  
  *param_2 = 0;
  FUN_004f5230(param_1,local_80);
  pcVar3 = local_80;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar3 + (-1 - (int)(local_80 + 1));
  if (pcVar3 + (-1 - (int)(local_80 + 1)) != (char *)0x0) {
    while (pcVar3 = pcVar2, 0 < (int)pcVar3) {
      if ((local_80[(int)(pcVar3 + -1)] == '/') ||
         (pcVar2 = pcVar3 + -1, local_80[(int)(pcVar3 + -1)] == '\\')) break;
    }
    pcVar3 = local_80 + (int)pcVar3;
    iVar4 = (int)param_2 - (int)pcVar3;
    do {
      cVar1 = *pcVar3;
      pcVar3[iVar4] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  return;
}




/* Function: FUN_004f5310 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f5310(float *param_1)

{
  float fVar1;
  
  fVar1 = SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  if (fVar1 != _DAT_00582ad8) {
    fVar1 = _DAT_00583354 / fVar1;
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
  }
  return;
}




/* Function: FUN_004f5360 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f5360(float *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float local_40 [4];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  fVar1 = param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1;
  if (fVar1 != (float)_DAT_00582ae8) {
    fVar1 = (float)_DAT_00582af0 / fVar1;
    local_8 = 0;
    local_c = 0;
    local_10 = 0;
    local_4 = 0x3f800000;
    local_40[0] = *param_1 * fVar1;
    local_30 = param_1[1] * fVar1;
    local_20 = param_1[2] * fVar1;
    local_40[1] = param_1[4] * fVar1;
    local_2c = param_1[5] * fVar1;
    local_1c = param_1[6] * fVar1;
    local_40[2] = param_1[8] * fVar1;
    local_28 = param_1[9] * fVar1;
    local_18 = param_1[10] * fVar1;
    local_40[3] = -(*param_1 * fVar1 * param_1[3] +
                   param_1[8] * fVar1 * param_1[0xb] + param_1[4] * fVar1 * param_1[7]);
    local_24 = -(param_1[1] * fVar1 * param_1[3] +
                param_1[9] * fVar1 * param_1[0xb] + param_1[5] * fVar1 * param_1[7]);
    local_14 = -(param_1[2] * fVar1 * param_1[3] +
                param_1[10] * fVar1 * param_1[0xb] + param_1[6] * fVar1 * param_1[7]);
    pfVar3 = local_40;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
  return;
}




/* Function: FUN_004f5490 */

undefined4 * FUN_004f5490(int param_1,int param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = malloc(0x4c);
  puVar4 = puVar1;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  pvVar2 = malloc(param_1 * 0x48);
  puVar1[0x11] = pvVar2;
  pvVar2 = malloc(param_2 << 4);
  *(short *)(puVar1 + 0x10) = (short)param_2;
  puVar1[0x12] = pvVar2;
  *(char *)((int)puVar1 + 0x42) = (char)param_1;
  return puVar1;
}




/* Function: FUN_004f54e0 */

uint FUN_004f54e0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  param_3 = param_2 * param_3;
  if (param_5 < param_3 + param_6) {
    param_3 = param_5 - param_6;
  }
  uVar1 = (param_3 / param_2) * param_2;
  if ((int)uVar1 < 1) {
    return 0;
  }
  puVar3 = (undefined4 *)(param_4 + param_6);
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return uVar1;
}




/* Function: FUN_004f5530 */

undefined4 * FUN_004f5530(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int local_48;
  undefined4 local_44 [15];
  char local_5;
  ushort local_4;
  byte local_2;
  
  iVar1 = FUN_004f54e0(local_44,0x44,1,param_1,param_2,0);
  puVar2 = (undefined4 *)FUN_004f5490(local_2,local_4);
  iVar5 = puVar2[0x11];
  puVar6 = local_44;
  puVar9 = puVar2;
  for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar7 = 0;
  if ((iVar5 == 0) || (puVar2[0x12] == 0)) {
    return (undefined4 *)0x0;
  }
  local_48 = 0;
  if (local_2 != 0) {
    do {
      iVar3 = FUN_004f54e0(puVar2[0x11] + iVar7,0x48,1,param_1,param_2,iVar1);
      pvVar4 = malloc((int)*(short *)(iVar7 + 0x40 + puVar2[0x11]) << 6);
      *(void **)(iVar7 + 0x44 + puVar2[0x11]) = pvVar4;
      iVar5 = *(int *)(iVar7 + 0x44 + puVar2[0x11]);
      if (iVar5 == 0) {
        return (undefined4 *)0x0;
      }
      iVar5 = FUN_004f54e0(iVar5,0x40,(int)*(short *)(iVar7 + puVar2[0x11] + 0x40),param_1,param_2,
                           iVar1 + iVar3);
      iVar1 = iVar1 + iVar3 + iVar5;
      local_48 = local_48 + 1;
      iVar7 = iVar7 + 0x48;
    } while (local_48 < (int)(uint)local_2);
  }
  if (local_5 == '\0') {
    uVar8 = (uint)local_4;
    pvVar4 = malloc(uVar8 * 0x1c);
    FUN_004f54e0(pvVar4,0x1c,uVar8,param_1,param_2,iVar1);
    if (uVar8 != 0) {
      uVar8 = (uint)local_4;
      iVar5 = 0;
      puVar6 = (undefined4 *)((int)pvVar4 + 8);
      do {
        *(undefined4 *)(iVar5 + puVar2[0x12]) = puVar6[-2];
        *(undefined4 *)(iVar5 + 4 + puVar2[0x12]) = puVar6[-1];
        *(undefined4 *)(iVar5 + 8 + puVar2[0x12]) = *puVar6;
        *(undefined1 *)(iVar5 + 0xc + puVar2[0x12]) = *(undefined1 *)(puVar6 + 4);
        puVar6 = puVar6 + 7;
        iVar5 = iVar5 + 0x10;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    free(pvVar4);
    return puVar2;
  }
  FUN_004f54e0(puVar2[0x12],0x10,local_4,param_1,param_2,iVar1);
  return puVar2;
}




/* Function: FUN_004f56e0 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_004f56e0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e6ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::size
                    (param_2);
  if (uVar2 != 0) {
    uVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::size
                      (param_2);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
    local_4 = 1;
    pcVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             operator[](param_2,uVar2);
    cVar1 = *pcVar3;
    while ((cVar1 != '.' && (0 < (int)uVar2))) {
      pcVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               operator[](param_2,uVar2);
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_00411be4(local_28,*pcVar3,local_44);
      local_4._0_1_ = 2;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                (local_44,pbVar4);
      uVar2 = uVar2 - 1;
      local_4 = CONCAT31(local_4._1_3_,1);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
      pcVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               operator[](param_2,uVar2);
      cVar1 = *pcVar3;
    }
    pcVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(local_44);
    _strupr(pcVar3);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,local_44);
    local_4 = local_4 & 0xffffff00;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
    ExceptionList = local_c;
    return param_1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,"");
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_004f5800 */

undefined4 __fastcall FUN_004f5800(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e6d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_28,"ALC error: ");
  local_4 = 0;
  iVar1 = alcGetError(*(undefined4 *)(param_1 + 0xbc));
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc4) = 0;
    pcVar2 = (char *)alcGetString(*(undefined4 *)(param_1 + 0xbc),iVar1);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
              (local_28,pcVar2);
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::data
                       (local_28);
    FUN_0041ce80(pcVar2);
    uVar3 = FUN_0041e5b0();
    FUN_0040a410(uVar3);
    local_4 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
    ExceptionList = local_c;
    return 0;
  }
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  ExceptionList = local_c;
  return 1;
}




/* Function: FUN_004f58e0 */

undefined4 __fastcall FUN_004f58e0(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e6d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_28,"OpenAL error: ");
  local_4 = 0;
  iVar1 = alGetError();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc4) = 0;
    pcVar2 = (char *)alGetString(iVar1);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
              (local_28,pcVar2);
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::data
                       (local_28);
    FUN_0041ce80(pcVar2);
    uVar3 = FUN_0041e5b0();
    FUN_0040a410(uVar3);
    local_4 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
    ExceptionList = local_c;
    return 0;
  }
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  ExceptionList = local_c;
  return 1;
}




/* Function: FUN_004f5b00 */

void __fastcall FUN_004f5b00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[8] = 0x3f800000;
  param_1[10] = 0x3f800000;
  *param_1 = &PTR_FUN_00590d14;
  param_1[9] = 0;
  puVar1 = param_1 + 4;
  iVar2 = 3;
  do {
    puVar1[-3] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}




/* Function: FUN_004f5b40 */

void __fastcall FUN_004f5b40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00590d14;
  return;
}




/* Function: FUN_004f5b50 */

undefined1 __fastcall FUN_004f5b50(int param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}




/* Function: FUN_004f5b60 */

undefined4 * __thiscall FUN_004f5b60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 1),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 1));
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  return param_1;
}




/* Function: FUN_004f5ba0 */

void __fastcall FUN_004f5ba0(int param_1)

{
  alSourcePlay(*(undefined4 *)(param_1 + 0x2c));
  return;
}




/* Function: FUN_004f5c00 */

void __fastcall FUN_004f5c00(int param_1)

{
  alSourceStop(*(undefined4 *)(param_1 + 0x2c));
  return;
}




/* Function: FUN_004f5c10 */

void __thiscall FUN_004f5c10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = param_2;
  local_8 = param_3;
  local_4 = param_4;
  alSourcefv(*(undefined4 *)(param_1 + 0x2c),0x1004,&local_c);
  return;
}




/* Function: FUN_004f5c50 */

void FUN_004f5c50(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x41);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x41);
  }
  return;
}




/* Function: FUN_004f5c70 */

void FUN_004f5c70(int *param_1)

{
  char cVar1;
  
  param_1 = (int *)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x41);
  while (cVar1 == '\0') {
    param_1 = (int *)*param_1;
    cVar1 = *(char *)((int)param_1 + 0x41);
  }
  return;
}




/* Function: FUN_004f5c90 */

void __thiscall FUN_004f5c90(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x41) == '\0') {
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




/* Function: FUN_004f5cf0 */

void __fastcall FUN_004f5cf0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x41) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x41) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x41);
      piVar4 = (int *)*piVar3;
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar4 + 0x41);
        piVar3 = piVar5;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x41);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x41);
    }
    *param_1 = iVar2;
  }
  return;
}




/* Function: FUN_004f5d40 */

void __fastcall FUN_004f5d40(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x41) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x41) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x41);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x41);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x41) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x41) == '\0');
    if (*(char *)((int)piVar4 + 0x41) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}




/* Function: FUN_004f5da0 */

void __fastcall FUN_004f5da0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004f5da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x14));
  return;
}




/* Function: FUN_004f5db0 */

void __fastcall FUN_004f5db0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004f5db3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 8));
  return;
}




/* Function: FUN_004f5dd0 */

void * __thiscall FUN_004f5dd0(void *param_1,byte param_2)

{
  FUN_004f5b40();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004f5df0 */

void __thiscall FUN_004f5df0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x41) == '\0') {
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




/* Function: FUN_004f5e50 */

undefined4 * __thiscall
FUN_004f5e50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = *param_5;
  param_1[4] = param_5[1];
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 5),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_5 + 2));
  param_1[0xc] = param_5[9];
  param_1[0xd] = param_5[10];
  param_1[0xe] = param_5[0xb];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_5 + 0xc);
  *(undefined1 *)(param_1 + 0x10) = param_6;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  return param_1;
}




/* Function: FUN_004f5eb0 */

void FUN_004f5eb0(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e702;
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




/* Function: FUN_004f5f30 */

int FUN_004f5f30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057e721;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00493c27(0x44);
  local_8 = 1;
  if (iVar1 != 0) {
    FUN_004f5e50(param_1,param_2,param_3,param_4,param_5);
  }
  ExceptionList = local_10;
  return iVar1;
}




/* Function: FUN_004f5fc0 */

undefined4 *
FUN_004f5fc0(undefined4 param_1,undefined4 param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057e741;
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




/* Function: FUN_004f6050 */

void __thiscall FUN_004f6050(int param_1,uint param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e702;
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




/* Function: FUN_004f60f0 */

void __fastcall FUN_004f60f0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)**(int **)(param_1 + 0x8c);
  if (piVar4 != *(int **)(param_1 + 0x8c)) {
    do {
      alDeleteBuffers(1,piVar4 + 4);
      if (*(char *)((int)piVar4 + 0x41) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x41) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x41);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x41);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x41);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x41);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int **)(param_1 + 0x8c));
  }
  alcMakeContextCurrent(0);
  alcDestroyContext(*(undefined4 *)(param_1 + 0xc0));
  alcCloseDevice(*(undefined4 *)(param_1 + 0xbc));
  return;
}




/* Function: FUN_004f6190 */

undefined4 * __thiscall FUN_004f6190(int param_1,undefined4 *param_2)

{
  if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = **(undefined4 **)(param_1 + 8);
  return param_2;
}




/* Function: FUN_004f61b0 */

void __thiscall
FUN_004f61b0(int param_1,undefined4 *param_2,char param_3,undefined4 *param_4,undefined4 param_5)

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
  puStack_8 = &LAB_0057e702;
  local_c = ExceptionList;
  if (0x4ec4ec2 < *(uint *)(param_1 + 8)) {
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
  piVar5 = (int *)FUN_004f5f30(*(undefined4 *)(param_1 + 4),param_4,*(undefined4 *)(param_1 + 4),
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
  cVar1 = *(char *)(piVar5[1] + 0x40);
  piVar7 = piVar5;
  while (cVar1 == '\0') {
    piVar6 = piVar7 + 1;
    piVar2 = (int *)*piVar6;
    piVar3 = *(int **)piVar2[1];
    if (piVar2 == piVar3) {
      iVar4 = ((undefined4 *)piVar2[1])[2];
      if (*(char *)(iVar4 + 0x40) == '\0') {
        *(undefined1 *)(piVar2 + 0x10) = 1;
        *(undefined1 *)(iVar4 + 0x40) = 1;
        *(undefined1 *)(*(int *)(*piVar6 + 4) + 0x40) = 0;
        piVar7 = *(int **)(*piVar6 + 4);
      }
      else {
        if (piVar7 == (int *)piVar2[2]) {
          FUN_004f5df0(piVar2);
          piVar7 = piVar2;
        }
        *(undefined1 *)(piVar7[1] + 0x40) = 1;
        *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x40) = 0;
        FUN_004f5c90(*(undefined4 *)(piVar7[1] + 4));
      }
    }
    else if ((char)piVar3[0x10] == '\0') {
      *(undefined1 *)(piVar2 + 0x10) = 1;
      *(undefined1 *)(piVar3 + 0x10) = 1;
      *(undefined1 *)(*(int *)(*piVar6 + 4) + 0x40) = 0;
      piVar7 = *(int **)(*piVar6 + 4);
    }
    else {
      if (piVar7 == (int *)*piVar2) {
        FUN_004f5c90(piVar2);
        piVar7 = piVar2;
      }
      *(undefined1 *)(piVar7[1] + 0x40) = 1;
      *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x40) = 0;
      FUN_004f5df0(*(undefined4 *)(piVar7[1] + 4));
    }
    cVar1 = *(char *)(piVar7[1] + 0x40);
  }
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x40) = 1;
  *param_2 = piVar5;
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004f6380 */

void FUN_004f6380(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00493c27(0x44);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x10) = 1;
  *(undefined1 *)((int)puVar1 + 0x41) = 0;
  return;
}




/* Function: FUN_004f63c0 */

/* WARNING: Removing unreachable block (ram,0x004f64e5) */
/* WARNING: Removing unreachable block (ram,0x004f64f9) */
/* WARNING: Removing unreachable block (ram,0x004f6503) */
/* WARNING: Removing unreachable block (ram,0x004f6506) */
/* WARNING: Removing unreachable block (ram,0x004f64f5) */
/* WARNING: Removing unreachable block (ram,0x004f6513) */
/* WARNING: Removing unreachable block (ram,0x004f6524) */
/* WARNING: Removing unreachable block (ram,0x004f652f) */
/* WARNING: Removing unreachable block (ram,0x004f652b) */
/* WARNING: Removing unreachable block (ram,0x004f651f) */
/* WARNING: Removing unreachable block (ram,0x004f6532) */

void __thiscall FUN_004f63c0(int param_1,undefined4 param_2,int *param_3)

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
  puStack_8 = &LAB_0057e702;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_3 + 0x41) != '\0') {
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
  FUN_004f5cf0();
  piVar5 = (int *)*param_3;
  if ((*(char *)((int)piVar5 + 0x41) != '\0') || (*(char *)(param_3[2] + 0x41) == '\0')) {
    piVar5 = (int *)param_3[2];
  }
  piVar6 = (int *)param_3[1];
  if (*(char *)((int)piVar5 + 0x41) == '\0') {
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
    if (*(char *)((int)piVar5 + 0x41) == '\0') {
      piVar3 = (int *)FUN_004f5c70(piVar5);
    }
    *puVar1 = piVar3;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int **)(iVar2 + 8) == param_3) {
    if (*(char *)((int)piVar5 + 0x41) == '\0') {
      uVar4 = FUN_004f5c50(piVar5);
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
  if ((char)param_3[0x10] == '\x01') {
    if (piVar5 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        if ((char)piVar5[0x10] != '\x01') break;
        piVar3 = (int *)*piVar6;
        if (piVar5 == piVar3) {
          piVar3 = (int *)piVar6[2];
          if ((char)piVar3[0x10] == '\0') {
            *(undefined1 *)(piVar3 + 0x10) = 1;
            *(undefined1 *)(piVar6 + 0x10) = 0;
            FUN_004f5df0(piVar6);
            piVar3 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar3 + 0x41) == '\0') {
            if ((*(char *)(*piVar3 + 0x40) != '\x01') || (*(char *)(piVar3[2] + 0x40) != '\x01')) {
              if (*(char *)(piVar3[2] + 0x40) == '\x01') {
                *(undefined1 *)(*piVar3 + 0x40) = 1;
                *(undefined1 *)(piVar3 + 0x10) = 0;
                FUN_004f5c90(piVar3);
                piVar3 = (int *)piVar6[2];
              }
              *(char *)(piVar3 + 0x10) = (char)piVar6[0x10];
              *(undefined1 *)(piVar6 + 0x10) = 1;
              *(undefined1 *)(piVar3[2] + 0x40) = 1;
              FUN_004f5df0(piVar6);
              break;
            }
LAB_004f6607:
            *(undefined1 *)(piVar3 + 0x10) = 0;
          }
        }
        else {
          if ((char)piVar3[0x10] == '\0') {
            *(undefined1 *)(piVar3 + 0x10) = 1;
            *(undefined1 *)(piVar6 + 0x10) = 0;
            FUN_004f5c90(piVar6);
            piVar3 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar3 + 0x41) == '\0') {
            if ((*(char *)(piVar3[2] + 0x40) == '\x01') && (*(char *)(*piVar3 + 0x40) == '\x01'))
            goto LAB_004f6607;
            if (*(char *)(*piVar3 + 0x40) == '\x01') {
              *(undefined1 *)(piVar3[2] + 0x40) = 1;
              *(undefined1 *)(piVar3 + 0x10) = 0;
              FUN_004f5df0(piVar3);
              piVar3 = (int *)*piVar6;
            }
            *(char *)(piVar3 + 0x10) = (char)piVar6[0x10];
            *(undefined1 *)(piVar6 + 0x10) = 1;
            *(undefined1 *)(*piVar3 + 0x40) = 1;
            FUN_004f5c90(piVar6);
            break;
          }
        }
        bVar7 = piVar6 != *(int **)(*(int *)(param_1 + 4) + 4);
        piVar5 = piVar6;
        piVar6 = (int *)piVar6[1];
      } while (bVar7);
    }
    *(undefined1 *)(piVar5 + 0x10) = 1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_3 + 5));
                    /* WARNING: Subroutine does not return */
  operator_delete(param_3);
}




/* Function: FUN_004f66a0 */

void __thiscall FUN_004f66a0(int param_1,undefined4 *param_2,uint *param_3)

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
  if (*(char *)(piVar1[1] + 0x41) == '\0') {
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
    } while (*(char *)((int)piVar3 + 0x41) == '\0');
  }
  param_3 = (uint *)piVar5;
  if (bVar6) {
    if (piVar5 == (int *)*piVar1) {
      puVar4 = (undefined4 *)FUN_004f61b0(&param_3,1,piVar5,puVar2);
      *param_2 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return;
    }
    FUN_004f5d40();
  }
  if (param_3[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_004f61b0(&param_3,bVar6,piVar5,puVar2);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  *param_2 = param_3;
  *(undefined1 *)(param_2 + 1) = 0;
  return;
}




/* Function: FUN_004f6770 */

void FUN_004f6770(void *param_1)

{
  if (*(char *)((int)param_1 + 0x41) == '\0') {
    FUN_004f6770(*(undefined4 *)((int)param_1 + 8));
    FUN_004f5da0();
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return;
}




/* Function: FUN_004f67b0 */

void __thiscall FUN_004f67b0(int param_1,undefined4 *param_2,int *param_3,int *param_4)

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
  FUN_004f5db0();
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar1);
}




/* Function: FUN_004f6810 */

int FUN_004f6810(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_78 [8];
  undefined4 local_70;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_6c [28];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [28];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e760;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_6c);
  local_4 = 0;
  local_3c = local_70;
  local_40 = *param_1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38,local_6c);
  local_1c = local_50;
  local_18 = local_4c;
  local_14 = local_48;
  local_10 = local_44;
  local_4._0_1_ = 1;
  piVar2 = (int *)FUN_004f66a0(local_78,&local_40);
  iVar1 = *piVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_6c);
  ExceptionList = local_c;
  return iVar1 + 0x10;
}




/* Function: FUN_004f68e0 */

void __fastcall FUN_004f68e0(int param_1)

{
  FUN_004f6770(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}




/* Function: FUN_004f6910 */

void __thiscall FUN_004f6910(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar4 = FUN_00408900(param_3 + 2);
  uVar4 = uVar4 & uVar2;
  if (*(uint *)(param_1 + 0x24) <= uVar4) {
    uVar4 = uVar4 + (-1 - (uVar2 >> 1));
  }
  iVar3 = *(int *)(param_1 + 0x14);
  iVar5 = uVar4 * 4;
  piVar1 = *(int **)(iVar5 + iVar3);
  while ((param_3 == piVar1 &&
         (*(undefined4 *)(iVar5 + iVar3) = **(undefined4 **)(iVar5 + iVar3), uVar4 != 0))) {
    iVar3 = *(int *)(param_1 + 0x14);
    uVar4 = uVar4 - 1;
    iVar5 = uVar4 * 4;
    piVar1 = *(int **)(iVar5 + iVar3);
  }
  if (param_3 == *(int **)(param_1 + 8)) {
    *param_2 = *param_3;
    return;
  }
  *(int *)param_3[1] = *param_3;
  *(int *)(*param_3 + 4) = param_3[1];
  FUN_004f5db0();
                    /* WARNING: Subroutine does not return */
  operator_delete(param_3);
}




/* Function: FUN_004f69a0 */

void __thiscall FUN_004f69a0(int param_1,undefined4 *param_2,int *param_3,int *param_4)

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
    FUN_004f6770(piVar6[1]);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    *param_2 = **(undefined4 **)(param_1 + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x41) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x41) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x41);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x41);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x41);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x41);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_004f63c0(&param_3,piVar2);
    piVar2 = piVar6;
  }
  *param_2 = piVar2;
  return;
}




/* Function: FUN_004f6a60 */

void __fastcall FUN_004f6a60(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int *piVar9;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar9 = (int *)**(int **)(param_1 + 0x8c);
  if (piVar9 != *(int **)(param_1 + 0x8c)) {
    do {
      piVar9[0xe] = 0;
      if (*(char *)((int)piVar9 + 0x41) == '\0') {
        piVar1 = (int *)piVar9[2];
        if (*(char *)((int)piVar1 + 0x41) == '\0') {
          cVar6 = *(char *)(*piVar1 + 0x41);
          piVar9 = piVar1;
          piVar1 = (int *)*piVar1;
          while (cVar6 == '\0') {
            cVar6 = *(char *)(*piVar1 + 0x41);
            piVar9 = piVar1;
            piVar1 = (int *)*piVar1;
          }
        }
        else {
          cVar6 = *(char *)(piVar9[1] + 0x41);
          piVar4 = (int *)piVar9[1];
          piVar1 = piVar9;
          while ((piVar9 = piVar4, cVar6 == '\0' && (piVar1 == (int *)piVar9[2]))) {
            cVar6 = *(char *)(piVar9[1] + 0x41);
            piVar4 = (int *)piVar9[1];
            piVar1 = piVar9;
          }
        }
      }
    } while (piVar9 != *(int **)(param_1 + 0x8c));
  }
  if (*(undefined4 **)(param_1 + 0x9c) == (undefined4 *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)**(undefined4 **)(param_1 + 0x9c);
  }
  iVar7 = param_1;
  if (piVar9 != *(int **)(param_1 + 0x9c)) {
    do {
      cVar6 = FUN_004f5b50();
      iVar7 = extraout_EDX;
      if (cVar6 == '\0') {
        local_8 = 0;
        alGetSourcei(*(undefined4 *)(extraout_ECX + 0x2c),0x1009,&local_8);
        local_c = 0;
        alGetSourcei(*(undefined4 *)(piVar9[9] + 0x2c),0x1010,&local_c);
        iVar7 = param_1;
        if (local_c == 0x1012) {
          local_4 = local_8;
          iVar7 = FUN_004f6810(&local_4);
          *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + 1;
          iVar7 = param_1;
        }
      }
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)*(int *)(iVar7 + 0x9c));
  }
LAB_004f6b5b:
  if (*(undefined4 **)(iVar7 + 0x9c) == (undefined4 *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)**(undefined4 **)(iVar7 + 0x9c);
  }
  if (piVar9 == *(int **)(iVar7 + 0x9c)) {
LAB_004f6bcd:
    do {
      puVar2 = (undefined4 *)**(undefined4 **)(iVar7 + 0x8c);
      while( true ) {
        if (puVar2 == *(undefined4 **)(iVar7 + 0x8c)) {
          return;
        }
        if ((puVar2[0xe] == 0) && (*(char *)(puVar2 + 0xf) == '\0')) break;
        if (*(char *)((int)puVar2 + 0x41) == '\0') {
          puVar3 = (undefined4 *)puVar2[2];
          if (*(char *)((int)puVar3 + 0x41) == '\0') {
            cVar6 = *(char *)((int)*puVar3 + 0x41);
            puVar2 = puVar3;
            puVar3 = (undefined4 *)*puVar3;
            while (cVar6 == '\0') {
              cVar6 = *(char *)((int)*puVar3 + 0x41);
              puVar2 = puVar3;
              puVar3 = (undefined4 *)*puVar3;
            }
          }
          else {
            cVar6 = *(char *)((int)puVar2[1] + 0x41);
            puVar5 = (undefined4 *)puVar2[1];
            puVar3 = puVar2;
            while ((puVar2 = puVar5, cVar6 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
              cVar6 = *(char *)((int)puVar2[1] + 0x41);
              puVar5 = (undefined4 *)puVar2[1];
              puVar3 = puVar2;
            }
          }
        }
      }
      alDeleteBuffers(1,puVar2 + 4);
      FUN_004f63c0(&local_4,puVar2);
      iVar7 = param_1;
    } while( true );
  }
  do {
    cVar6 = FUN_004f5b50();
    iVar7 = extraout_EDX_00;
    if (cVar6 == '\0') {
      local_8 = 0;
      alGetSourcei(*(undefined4 *)(extraout_ECX_00 + 0x2c),0x1009,&local_8);
      local_4 = local_8;
      iVar8 = FUN_004f6810(&local_4);
      iVar7 = param_1;
      if (*(int *)(iVar8 + 0x28) == 0) break;
    }
    piVar9 = (int *)*piVar9;
    if (piVar9 == (int *)*(int *)(iVar7 + 0x9c)) goto LAB_004f6bcd;
  } while( true );
  FUN_004f5bb0();
  if ((undefined4 *)piVar9[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)piVar9[9])(1);
  }
  FUN_004f6910(&local_4,piVar9);
  goto LAB_004f6b5b;
}




/* Function: FUN_004f6c90 */

undefined4 __thiscall FUN_004f6c90(int param_1,char *param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e6d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,param_2);
  local_4 = 0;
  FUN_0040f450(&param_2,local_28);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  if (param_2 != *(char **)(param_1 + 0x9c)) {
    ExceptionList = local_c;
    return *(undefined4 *)(param_2 + 0x24);
  }
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_004f6d20 */

void __thiscall FUN_004f6d20(int param_1,char *param_2)

{
  char *pcVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e6d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,param_2);
  local_4 = 0;
  FUN_0040f450(&param_2,local_28);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  pcVar1 = param_2;
  if (param_2 != *(char **)(param_1 + 0x9c)) {
    if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_2 + 0x24))(1);
    }
    FUN_004f6910(&param_2,pcVar1);
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004f6dc0 */

undefined4
FUN_004f6dc0(int param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined *puVar12;
  undefined1 uStack_55;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [28];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e798;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
  iVar11 = 0;
  local_4 = 0;
  local_44 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_38,param_2);
  local_10 = 0;
  piVar10 = (int *)**(int **)(param_1 + 0x8c);
  if (piVar10 == *(int **)(param_1 + 0x8c)) {
LAB_004f6e87:
    alGenBuffers(1,&local_3c);
    cVar4 = FUN_004f58e0();
    if (cVar4 == '\0') {
      alGenBuffers(1,&local_3c);
      cVar4 = FUN_004f58e0();
      if (cVar4 != '\0') goto LAB_004f6ebf;
    }
    else {
LAB_004f6ebf:
      puVar12 = &DAT_00582818;
      pcVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(param_2);
      iVar11 = FUN_00410660(pcVar5,puVar12);
      if (iVar11 != 0) {
        FUN_0040f0b0(iVar11,0,2);
        uVar6 = FUN_0040f110(iVar11);
        pvVar7 = operator_new(uVar6,(nothrow_t *)&DAT_005b6164);
        FUN_0040f0b0(iVar11,0,0);
        FUN_0040f000(pvVar7,1,uVar6,iVar11);
        FUN_0040efb0(iVar11);
        FUN_0057a530(pvVar7,&uStack_48,&uStack_4c,&uStack_50,&uStack_54,&uStack_55);
        operator_delete__(pvVar7);
        cVar4 = FUN_004f58e0();
        if (cVar4 != '\0') {
          local_1c = uStack_54;
          local_18 = uStack_48;
          alBufferData(local_3c,uStack_48,uStack_4c,uStack_50,uStack_54);
          cVar4 = FUN_004f58e0();
          if (cVar4 != '\0') {
            FUN_0057a6f0(uStack_48,uStack_4c,uStack_50,uStack_54);
            cVar4 = FUN_004f58e0();
            if (cVar4 != '\0') {
              puVar9 = &local_3c;
              FUN_004f6810(&local_3c);
              FUN_004f5b60(puVar9);
              goto LAB_004f7023;
            }
          }
        }
      }
    }
    local_4 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
    uVar8 = 0;
  }
  else {
    do {
      bVar3 = std::operator==((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)(piVar10 + 5),param_2);
      if (bVar3) {
        iVar11 = piVar10[3];
      }
      if (*(char *)((int)piVar10 + 0x41) == '\0') {
        piVar1 = (int *)piVar10[2];
        if (*(char *)((int)piVar1 + 0x41) == '\0') {
          cVar4 = *(char *)(*piVar1 + 0x41);
          piVar10 = piVar1;
          piVar1 = (int *)*piVar1;
          while (cVar4 == '\0') {
            cVar4 = *(char *)(*piVar1 + 0x41);
            piVar10 = piVar1;
            piVar1 = (int *)*piVar1;
          }
        }
        else {
          cVar4 = *(char *)(piVar10[1] + 0x41);
          piVar2 = (int *)piVar10[1];
          piVar1 = piVar10;
          while ((piVar10 = piVar2, cVar4 == '\0' && (piVar1 == (int *)piVar10[2]))) {
            cVar4 = *(char *)(piVar10[1] + 0x41);
            piVar2 = (int *)piVar10[1];
            piVar1 = piVar10;
          }
        }
      }
    } while (piVar10 != *(int **)(param_1 + 0x8c));
    local_44 = iVar11;
    if (iVar11 == 0) goto LAB_004f6e87;
    puVar9 = (undefined4 *)FUN_004f6810(&local_44);
    local_3c = *puVar9;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (local_38,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)(puVar9 + 1));
    local_1c = puVar9[8];
    local_18 = puVar9[9];
    local_14 = puVar9[10];
    local_10 = *(undefined1 *)(puVar9 + 0xb);
LAB_004f7023:
    alSourcei(*(undefined4 *)(local_40 + 0x2c),0x1009,local_3c);
    local_4 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
    uVar8 = 1;
  }
  ExceptionList = pvStack_c;
  return uVar8;
}




/* Function: FUN_004f7140 */

void __thiscall FUN_004f7140(int param_1,undefined4 param_2)

{
  char cVar1;
  int local_8;
  undefined4 local_4;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    local_8 = 0;
    alGetSourcei(*(undefined4 *)(param_1 + 0x2c),0x1016,&local_8);
    do {
      while( true ) {
        if (local_8 == 0) {
          return;
        }
        local_8 = local_8 + -1;
        alSourceUnqueueBuffers(*(undefined4 *)(param_1 + 0x2c),1,&local_4);
        cVar1 = FUN_004f58e0();
        if (cVar1 == '\0') {
          return;
        }
        cVar1 = FUN_004f7070(param_2,local_4,0x8000);
        if (cVar1 != '\0') break;
        ov_pcm_seek(*(undefined4 *)(param_1 + 0x30),0,0);
        alSourceQueueBuffers(*(undefined4 *)(param_1 + 0x2c),1,&local_4);
        cVar1 = FUN_004f58e0();
        if (cVar1 == '\0') {
          return;
        }
        if (*(char *)(param_1 + 0x1c) == '\0') {
          FUN_004f5c00();
        }
      }
      alSourceQueueBuffers(*(undefined4 *)(param_1 + 0x2c),1,&local_4);
      cVar1 = FUN_004f58e0();
    } while (cVar1 != '\0');
  }
  return;
}




/* Function: FUN_004f7240 */

void __thiscall FUN_004f7240(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0057e770;
  local_10 = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004520c0(iVar1,param_2,param_3,param_1,param_3);
  *(int *)(param_1 + 8) = iVar1 + param_2 * 4;
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004f72c0 */

void __thiscall FUN_004f72c0(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057e780;
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
      FUN_004f5eb0();
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




/* Function: FUN_004f79d0 */

void __fastcall FUN_004f79d0(int param_1)

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
  FUN_004f67b0(&local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 8));
}




/* Function: FUN_004f7a30 */

void __thiscall FUN_004f7a30(int param_1,uint param_2)

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
    FUN_004f72c0(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 2))) {
    FUN_00409930(&param_2,*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_004f7ab0 */

void __fastcall FUN_004f7ab0(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_004f69a0(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_004f7ae0 */

void __fastcall FUN_004f7ae0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iStack_4;
  
  iStack_4 = param_1;
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
  FUN_004f67b0(&iStack_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 8));
}




/* Function: FUN_004f7af0 */

undefined1 __thiscall
FUN_004f7af0(int param_1,undefined4 param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
            undefined1 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  char *pcVar5;
  char *pcVar6;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_164 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_148 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_12c [28];
  char local_110 [260];
  void *local_c;
  undefined *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_0057e7d4;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)(param_1 + 0x2c);
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x1c) = param_4;
  alGenSources(1,puVar1);
  cVar2 = FUN_004f58e0();
  uVar4 = 0;
  if (cVar2 != '\0') {
    alSourcef(*puVar1,0x1003,0x3f800000);
    alSourcef(*puVar1,0x100a,0x3f800000);
    alSourcefv(*puVar1,0x1004,param_1 + 0x10);
    alSourcefv(*puVar1,0x1006,param_1 + 4);
    alSourcei(*puVar1,0x1007,*(undefined1 *)(param_1 + 0x1c));
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_164,param_3);
    local_4 = 0;
    this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_004f56e0(local_12c,local_164);
    local_4._0_1_ = 1;
    pcVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::data
                       (this);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_148,pcVar5);
    local_4._0_1_ = 3;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_12c);
    bVar3 = std::operator==(local_148,(char *)&PTR_LAB_00590d1c);
    if (bVar3) {
      cVar2 = FUN_004f6dc0(param_2,local_164);
      if (cVar2 != '\0') {
        local_4 = (uint)local_4._1_3_ << 8;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_148);
        local_4 = 0xffffffff;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_164);
        ExceptionList = local_c;
        return 1;
      }
      pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(param_3);
      pcVar5 = local_110;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        *pcVar5 = cVar2;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      pcVar5 = local_110;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (4 < (uint)((int)pcVar5 - (int)(local_110 + 1))) {
        pcVar5 = local_110;
        do {
          pcVar6 = pcVar5;
          pcVar5 = pcVar6 + 1;
        } while (*pcVar6 != '\0');
        builtin_strncpy(pcVar6 + -0xffffffff00000003,"ogg",4);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                  (local_164,local_110);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                  (local_148,"OGG");
      }
    }
    bVar3 = std::operator==(local_148,"OGG");
    if (bVar3) {
      *(char *)(param_1 + 0x40) = (char)param_5;
      uVar4 = FUN_004f76f0(param_2,local_164,param_5);
      local_4 = (uint)local_4._1_3_ << 8;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_148);
      local_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_164);
    }
    else {
      local_4 = (uint)local_4._1_3_ << 8;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_148);
      local_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_164);
      uVar4 = 0;
    }
  }
  ExceptionList = local_c;
  return uVar4;
}




/* Function: FUN_004f7d60 */

undefined1 * __thiscall FUN_004f7d60(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e7eb;
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
  FUN_004f7240(9,&param_2);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_004f7e00 */

/* WARNING: Removing unreachable block (ram,0x004f7f17) */

void __thiscall
FUN_004f7e00(int param_1,int *param_2,
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
      FUN_004f7a30(iVar6 * 2 + -1,*(undefined4 *)(param_1 + 8));
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
  iVar10 = FUN_004f5fc0(puVar13,puVar13[1],param_3);
  FUN_004f6050(1);
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




/* Function: FUN_004f8090 */

int FUN_004f8090(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
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
  puStack_8 = &LAB_0057e808;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c,param_1);
  local_10 = 0;
  local_4 = 0;
  piVar2 = (int *)FUN_004f7e00(local_34,local_2c);
  iVar1 = *piVar2;
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
  ExceptionList = local_c;
  return iVar1 + 0x24;
}




/* Function: FUN_004f8100 */

/* WARNING: Removing unreachable block (ram,0x004f813c) */

void __fastcall FUN_004f8100(int param_1)

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
  FUN_004f72c0(*(undefined4 *)(param_1 + 0x14),9,&local_4);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}




/* Function: FUN_004f8860 */

undefined4 * __fastcall FUN_004f8860(undefined4 *param_1)

{
  int iVar1;
  undefined1 local_11;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e866;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00590db8;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x22) = local_11;
  iVar1 = FUN_004f6380();
  param_1[0x23] = iVar1;
  *(undefined1 *)(iVar1 + 0x41) = 1;
  *(undefined4 *)(param_1[0x23] + 4) = param_1[0x23];
  *(undefined4 *)param_1[0x23] = param_1[0x23];
  *(undefined4 *)(param_1[0x23] + 8) = param_1[0x23];
  param_1[0x24] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004f7d60(&local_11,&local_11);
  param_1[0x21] = 0x3f800000;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  DAT_005b7ec0 = param_1;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_004f8930 */

void __fastcall FUN_004f8930(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057e894;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00590db8;
  local_4 = 2;
  if ((undefined4 *)param_1[0x27] == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)param_1[0x27];
  }
  if (piVar3 != (int *)param_1[0x27]) {
    do {
      if ((undefined4 *)piVar3[9] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar3[9])(1);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)param_1[0x27]);
  }
  FUN_004f60f0();
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((void *)param_1[0x2a] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x2a]);
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  puVar1 = (undefined4 *)param_1[0x27];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_004f67b0(auStack_10,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_1[0x27]);
}




/* Function: FUN_004f8af0 */

void * __thiscall FUN_004f8af0(void *param_1,byte param_2)

{
  FUN_004f8930();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004f8b10 */

undefined4 __fastcall FUN_004f8b10(int *param_1)

{
  undefined1 local_18 [8];
  undefined4 uStack_10;
  
  param_1 = (int *)*param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x34))(param_1,local_18);
    return uStack_10;
  }
  return 0;
}




/* Function: FUN_004f8b40 */

void __fastcall FUN_004f8b40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  return;
}




/* Function: FUN_004f8b70 */

void __thiscall FUN_004f8b70(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != *(int *)(param_1 + 8)) {
    do {
      iVar1 = FUN_004f8b10(param_2);
      iVar3 = iVar3 + iVar1;
      iVar4 = iVar4 + 4;
    } while (iVar4 != *(int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  uVar2 = FUN_0041e5b0("CVBManager stat: VB pages: %d, used VRAM: %dKb",iVar4,
                       (int)(iVar3 + (iVar3 >> 0x1f & 0x3ffU)) >> 10);
  FUN_0040a410(uVar2);
  return;
}




/* Function: FUN_004f8be0 */

void __fastcall FUN_004f8be0(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057e8a8;
  local_c = ExceptionList;
  puVar2 = *(undefined4 **)(param_1 + 4);
  local_4 = 0;
  if (puVar2 != *(undefined4 **)(param_1 + 8)) {
    do {
      pvVar1 = (void *)*puVar2;
      if (pvVar1 != (void *)0x0) {
        ExceptionList = &local_c;
        FUN_004f8b40();
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(param_1 + 8));
  }
  if (*(void **)(param_1 + 4) == (void *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_004f8c60 */

void __fastcall FUN_004f8c60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00582aa4;
  return;
}




/* Function: FUN_004f8c70 */

void __fastcall FUN_004f8c70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00582aa4;
  return;
}




/* Function: FUN_004f8c80 */

undefined4 * __fastcall FUN_004f8c80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e8c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f8c60();
  local_4 = 0;
  *param_1 = &PTR_FUN_00590e6c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 1));
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_004f8cd0 */

undefined4 * __thiscall
FUN_004f8cd0(undefined4 *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e8c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f8c60();
  local_4 = 0;
  *param_1 = &PTR_FUN_00590e6c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 1),param_2);
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_004f8d30 */

undefined4 * __thiscall FUN_004f8d30(undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e8c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f8c60();
  local_4 = 0;
  *param_1 = &PTR_FUN_00590e6c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 1),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 4));
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_004f8d90 */

void __fastcall FUN_004f8d90(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057e8c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00590e6c;
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 1));
  FUN_004f8c70();
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004f8de0 */

undefined4 * __thiscall
FUN_004f8de0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar1;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var2;
  basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_8c [128]
  ;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e8f7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f8c80();
  local_4 = 0;
  *param_1 = &PTR_FUN_00590e70;
  std::basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_8c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(param_1 + 1),2);
  local_4._0_1_ = 1;
  p_Var2 = endl_exref;
  pbVar1 = std::operator<<((basic_ostream<char,struct_std::char_traits<char>_> *)local_8c,
                           "File name..: ");
  pbVar1 = (basic_ostream<char,struct_std::char_traits<char>_> *)FUN_004111b0(pbVar1,param_3);
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar1,p_Var2);
  p_Var2 = endl_exref;
  pbVar1 = std::operator<<((basic_ostream<char,struct_std::char_traits<char>_> *)local_8c,
                           "Line number: ");
  pbVar1 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar1,param_4);
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar1,p_Var2);
  p_Var2 = endl_exref;
  pbVar1 = std::operator<<((basic_ostream<char,struct_std::char_traits<char>_> *)local_8c,
                           "Message....: ");
  pbVar1 = (basic_ostream<char,struct_std::char_traits<char>_> *)FUN_004111b0(pbVar1,param_2);
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar1,p_Var2);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _vbase_destructor_(local_8c);
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_004f8f20 */

void __fastcall FUN_004f8f20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00590e70;
  FUN_004f8d90();
  return;
}




/* Function: FUN_004f8f30 */

undefined4 * __thiscall
FUN_004f8f30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar1;
  char *pcVar2;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var3;
  basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_8c [128]
  ;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e8f7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f8c80();
  local_4 = 0;
  *param_1 = &PTR_FUN_00590ea4;
  param_1[8] = param_2;
  std::basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_8c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(param_1 + 1),2);
  local_4._0_1_ = 1;
  p_Var3 = endl_exref;
  pbVar1 = std::operator<<((basic_ostream<char,struct_std::char_traits<char>_> *)local_8c,
                           "File name..: ");
  pbVar1 = (basic_ostream<char,struct_std::char_traits<char>_> *)FUN_004111b0(pbVar1,param_3);
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar1,p_Var3);
  p_Var3 = endl_exref;
  pbVar1 = std::operator<<((basic_ostream<char,struct_std::char_traits<char>_> *)local_8c,
                           "Line number: ");
  pbVar1 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar1,param_4);
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar1,p_Var3);
  pcVar2 = (char *)FUN_00411180(param_2);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "Unknown error";
  }
  p_Var3 = endl_exref;
  pbVar1 = std::operator<<((basic_ostream<char,struct_std::char_traits<char>_> *)local_8c,
                           "Message....: ");
  pbVar1 = std::operator<<(pbVar1,pcVar2);
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar1,p_Var3);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _vbase_destructor_(local_8c);
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_004f90a0 */

void __fastcall FUN_004f90a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00590ea4;
  FUN_004f8d90();
  return;
}




/* Function: FUN_004f90b0 */

void * __thiscall FUN_004f90b0(void *param_1,byte param_2)

{
  FUN_004f8d90();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004f90d0 */

void * __thiscall FUN_004f90d0(void *param_1,byte param_2)

{
  FUN_004f8f20();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004f90f0 */

void * __thiscall FUN_004f90f0(void *param_1,byte param_2)

{
  FUN_004f90a0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004f9110 */

void __fastcall FUN_004f9110(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00590ea8;
  return;
}




/* Function: FUN_004f9120 */

int __thiscall FUN_004f9120(int param_1,int param_2)

{
  return param_2 * 0x10 + 4 + param_1;
}




/* Function: FUN_004f9130 */

void __thiscall FUN_004f9130(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * 0x10 + 4 + param_1);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  puVar1[3] = param_3[3];
  return;
}




/* Function: FUN_004f9160 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004f9160(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  local_24 = *param_2;
  local_20 = param_2[1];
  local_1c = param_2[2];
  local_18 = *param_1;
  local_14 = param_1[1];
  local_10 = param_1[2];
  pfVar5 = (float *)FUN_0041d5e0(local_c,&local_18,&local_24);
  if (pfVar5 != param_3) {
    *param_3 = *pfVar5;
    param_3[1] = pfVar5[1];
    param_3[2] = pfVar5[2];
  }
  FUN_0046a530(&local_24,param_3,param_3);
  fVar4 = _DAT_00583354;
  if (((local_1c <= local_20) || (local_1c <= local_24)) || (local_1c <= _DAT_00590eac)) {
    if ((local_20 <= local_24) || (local_20 <= _DAT_00590eac)) {
      if (local_24 <= _DAT_00590eac) {
        return 0;
      }
      fVar1 = *param_3;
      *param_4 = 0.0;
      param_4[1] = param_1[2] * param_2[3] - param_2[2] * param_1[3];
      fVar3 = param_2[1] * param_1[3];
      fVar2 = param_1[1];
    }
    else {
      fVar1 = param_3[1];
      *param_4 = param_1[2] * param_2[3] - param_2[2] * param_1[3];
      param_4[1] = 0.0;
      fVar3 = *param_2 * param_1[3];
      fVar2 = *param_1;
    }
    param_4[2] = fVar3 - fVar2 * param_2[3];
  }
  else {
    fVar1 = param_3[2];
    *param_4 = param_1[1] * param_2[3] - param_2[1] * param_1[3];
    param_4[1] = *param_2 * param_1[3] - *param_1 * param_2[3];
    param_4[2] = 0.0;
  }
  fVar4 = fVar4 / fVar1;
  *param_4 = fVar4 * *param_4;
  param_4[1] = fVar4 * param_4[1];
  param_4[2] = fVar4 * param_4[2];
  fVar4 = _DAT_00583354 / SQRT(local_24 + local_20 + local_1c);
  *param_3 = fVar4 * *param_3;
  param_3[1] = fVar4 * param_3[1];
  param_3[2] = fVar4 * param_3[2];
  return 1;
}




/* Function: FUN_004f9330 */

void __fastcall FUN_004f9330(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00590ea8;
  return;
}




/* Function: FUN_004f9340 */

void * __thiscall FUN_004f9340(void *param_1,byte param_2)

{
  FUN_004f9110();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004f9360 */

void __thiscall FUN_004f9360(int param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  
  pfVar1 = (float *)(param_1 + 0x24);
  pfVar5 = (float *)(param_1 + 0x34);
  pfVar2 = (float *)(param_1 + 0x44);
  pfVar3 = (float *)(param_1 + 0x54);
  *pfVar1 = *param_2 + param_2[3];
  *(float *)(param_1 + 0x28) = param_2[4] + param_2[7];
  *(float *)(param_1 + 0x2c) = param_2[8] + param_2[0xb];
  *(float *)(param_1 + 0x30) = param_2[0xc] + param_2[0xf];
  *pfVar5 = param_2[3] - *param_2;
  *(float *)(param_1 + 0x38) = param_2[7] - param_2[4];
  *(float *)(param_1 + 0x3c) = param_2[0xb] - param_2[8];
  *(float *)(param_1 + 0x40) = param_2[0xf] - param_2[0xc];
  *pfVar2 = param_2[3] - param_2[1];
  *(float *)(param_1 + 0x48) = param_2[7] - param_2[5];
  *(float *)(param_1 + 0x4c) = param_2[0xb] - param_2[9];
  *(float *)(param_1 + 0x50) = param_2[0xf] - param_2[0xd];
  *pfVar3 = param_2[1] + param_2[3];
  *(float *)(param_1 + 0x58) = param_2[5] + param_2[7];
  *(float *)(param_1 + 0x5c) = param_2[9] + param_2[0xb];
  *(float *)(param_1 + 0x60) = param_2[0xf] + param_2[0xd];
  *(float *)(param_1 + 4) = param_2[2] + param_2[3];
  pfVar4 = (float *)(param_1 + 0x14);
  *(float *)(param_1 + 8) = param_2[6] + param_2[7];
  *(float *)(param_1 + 0xc) = param_2[10] + param_2[0xb];
  *(float *)(param_1 + 0x10) = param_2[0xf] + param_2[0xe];
  *pfVar4 = param_2[3] - param_2[2];
  *(float *)(param_1 + 0x18) = param_2[7] - param_2[6];
  *(float *)(param_1 + 0x1c) = param_2[0xb] - param_2[10];
  *(float *)(param_1 + 0x20) = param_2[0xf] - param_2[0xe];
  thunk_FUN_004979fb(pfVar1,pfVar1);
  thunk_FUN_004979fb(pfVar5,pfVar5);
  thunk_FUN_004979fb(pfVar2,pfVar2);
  thunk_FUN_004979fb(pfVar3,pfVar3);
  thunk_FUN_004979fb(pfVar5,pfVar5);
  thunk_FUN_004979fb(pfVar4,pfVar4);
  return;
}




/* Function: FUN_004f9490 */

undefined4 __thiscall FUN_004f9490(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  
  iVar3 = 0;
  pfVar2 = (float *)(param_1 + 8);
  while( true ) {
    fVar1 = -(param_2[1] * *pfVar2 + *param_2 * pfVar2[-1] + param_2[2] * pfVar2[1] + pfVar2[2]);
    if (param_3 < fVar1) {
      return 2;
    }
    fVar1 = ABS(fVar1);
    if (fVar1 < param_3 != (fVar1 == param_3)) break;
    iVar3 = iVar3 + 1;
    pfVar2 = pfVar2 + 4;
    if (5 < iVar3) {
      return 0;
    }
  }
  return 1;
}




/* Function: FUN_004f9510 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004f9510(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  
  cVar4 = '\0';
  iVar9 = 0;
  pfVar8 = (float *)(param_1 + 8);
  while( true ) {
    if (pfVar8[-1] < _DAT_00582ad8) {
      fVar1 = *param_2;
      fVar5 = *param_3;
    }
    else {
      fVar1 = *param_3;
      fVar5 = *param_2;
    }
    if (*pfVar8 < _DAT_00582ad8) {
      fVar2 = param_2[1];
      fVar6 = param_3[1];
    }
    else {
      fVar2 = param_3[1];
      fVar6 = param_2[1];
    }
    if (pfVar8[1] < _DAT_00582ad8) {
      fVar3 = param_2[2];
      fVar7 = param_3[2];
    }
    else {
      fVar3 = param_3[2];
      fVar7 = param_2[2];
    }
    if (fVar2 * *pfVar8 + fVar1 * pfVar8[-1] + fVar3 * pfVar8[1] + pfVar8[2] < _DAT_00582ad8) break;
    fVar1 = fVar6 * *pfVar8 + fVar5 * pfVar8[-1] + fVar7 * pfVar8[1] + pfVar8[2];
    if (fVar1 < _DAT_00582ad8 != (fVar1 == _DAT_00582ad8)) {
      cVar4 = '\x01';
    }
    iVar9 = iVar9 + 1;
    pfVar8 = pfVar8 + 4;
    if (5 < iVar9) {
      cVar4 = cVar4 + '\x01';
LAB_004f95e9:
      if (cVar4 != '\0') {
        if (cVar4 == '\x01') {
          return 0;
        }
        if (cVar4 == '\x02') {
          return 1;
        }
      }
      return 2;
    }
  }
  cVar4 = '\0';
  goto LAB_004f95e9;
}




/* Function: FUN_004f9620 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f9620(float *param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float *pfVar4;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  pfVar4 = &local_18;
  fVar1 = param_3[2] * param_2[2] + param_2[1] * param_3[1] + *param_2 * *param_3 + param_2[3];
  FUN_0041d580(local_c,param_4,param_3,pfVar4);
  FUN_0041d510(pfVar4);
  fVar2 = local_10 * param_2[2] + local_18 * *param_2 + local_14 * param_2[1];
  if (_DAT_00582ad8 == fVar2) {
    if (_DAT_00582ad8 == fVar1) {
      if (param_3 != param_1) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
        return;
      }
    }
    else if (param_3 != param_1) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      return;
    }
  }
  else {
    uVar3 = FUN_0041d5b0(local_c,&local_18,-(fVar1 / fVar2));
    pfVar4 = (float *)FUN_0041d550(&local_18,param_3,uVar3);
    if (pfVar4 != param_1) {
      *param_1 = *pfVar4;
      param_1[1] = pfVar4[1];
      param_1[2] = pfVar4[2];
    }
  }
  return;
}




/* Function: FUN_004f9730 */

void FUN_004f9730(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  _eh_vector_constructor_iterator_
            (&local_60,0xc,8,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  uVar1 = FUN_004f9120(4);
  uVar2 = FUN_004f9120(2);
  FUN_004f9160(uVar2,uVar1,&local_60,&local_54);
  uVar3 = FUN_004f9120(5);
  FUN_004f9160(uVar2,uVar3,&local_48,&local_3c);
  uVar2 = FUN_004f9120(3);
  FUN_004f9160(uVar2,uVar1,&local_30,&local_24);
  FUN_004f9160(uVar2,uVar3,&local_18,&local_c);
  uVar1 = FUN_0041d5b0(&local_6c,&local_60,0x42c80000);
  puVar4 = (undefined4 *)FUN_0041d550(&local_78,&local_54,uVar1);
  if (puVar4 != &local_60) {
    local_60 = *puVar4;
    local_5c = puVar4[1];
    local_58 = puVar4[2];
  }
  uVar1 = FUN_0041d5b0(&local_6c,&local_48,0x42c80000);
  puVar4 = (undefined4 *)FUN_0041d550(&local_78,&local_3c,uVar1);
  if (puVar4 != &local_48) {
    local_48 = *puVar4;
    local_44 = puVar4[1];
    local_40 = puVar4[2];
  }
  uVar1 = FUN_0041d5b0(&local_6c,&local_30,0x42c80000);
  puVar4 = (undefined4 *)FUN_0041d550(&local_78,&local_24,uVar1);
  if (puVar4 != &local_30) {
    local_30 = *puVar4;
    local_2c = puVar4[1];
    local_28 = puVar4[2];
  }
  uVar1 = FUN_0041d5b0(&local_6c,&local_18,0x42c80000);
  puVar4 = (undefined4 *)FUN_0041d550(&local_78,&local_c,uVar1);
  if (puVar4 != &local_18) {
    local_18 = *puVar4;
    local_14 = puVar4[1];
    local_10 = puVar4[2];
  }
  local_74 = local_50;
  local_78 = local_54;
  local_70 = local_4c;
  local_68 = local_5c;
  local_6c = local_60;
  local_64 = local_58;
  uVar1 = FUN_004f9120(0);
  FUN_004f9620(param_1,uVar1,&local_6c,&local_78);
  local_64 = local_4c;
  local_6c = local_54;
  local_68 = local_50;
  local_70 = local_58;
  local_78 = local_60;
  local_74 = local_5c;
  uVar2 = FUN_004f9120(1);
  FUN_004f9620(param_1 + 0xc,uVar2,&local_78,&local_6c);
  local_6c = local_3c;
  local_68 = local_38;
  local_64 = local_34;
  local_78 = local_48;
  local_74 = local_44;
  local_70 = local_40;
  FUN_004f9620(param_1 + 0x18,uVar1,&local_78,&local_6c);
  local_6c = local_3c;
  local_68 = local_38;
  local_64 = local_34;
  local_78 = local_48;
  local_74 = local_44;
  local_70 = local_40;
  FUN_004f9620(param_1 + 0x24,uVar2,&local_78,&local_6c);
  local_6c = local_24;
  local_68 = local_20;
  local_64 = local_1c;
  local_78 = local_30;
  local_74 = local_2c;
  local_70 = local_28;
  FUN_004f9620(param_1 + 0x30,uVar1,&local_78,&local_6c);
  local_6c = local_24;
  local_68 = local_20;
  local_64 = local_1c;
  local_78 = local_30;
  local_74 = local_2c;
  local_70 = local_28;
  FUN_004f9620(param_1 + 0x3c,uVar2,&local_78,&local_6c);
  local_6c = local_c;
  local_68 = local_8;
  local_64 = local_4;
  local_78 = local_18;
  local_74 = local_14;
  local_70 = local_10;
  FUN_004f9620(param_1 + 0x48,uVar1,&local_78,&local_6c);
  local_6c = local_c;
  local_68 = local_8;
  local_64 = local_4;
  local_78 = local_18;
  local_74 = local_14;
  local_70 = local_10;
  FUN_004f9620(param_1 + 0x54,uVar2,&local_78,&local_6c);
  _eh_vector_destructor_iterator_(&local_60,0xc,8,FUN_00407150);
  return;
}




/* Function: FUN_004f9b90 */

void FUN_004f9b90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_c4 [12];
  undefined1 local_b8 [12];
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined1 local_70 [112];
  
  FUN_004f9330();
  FUN_004f9360(param_2);
  _eh_vector_constructor_iterator_(local_c4,0xc,8,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150)
  ;
  FUN_004f9730(local_c4);
  iVar1 = 8;
  do {
    FUN_00548748(param_3);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_0053f0a0(param_1,local_c4,local_b8,0xff00ff00);
  FUN_0053f0a0(param_1,local_ac,local_a0,0xff00ff00);
  FUN_0053f0a0(param_1,local_94,local_88,0xff00ff00);
  FUN_0053f0a0(param_1,local_7c,local_70,0xff00ff00);
  FUN_0053f0a0(param_1,local_c4,local_ac,0xff00ff00);
  FUN_0053f0a0(param_1,local_ac,local_7c,0xff00ff00);
  FUN_0053f0a0(param_1,local_7c,local_94,0xff00ff00);
  FUN_0053f0a0(param_1,local_94,local_c4,0xff00ff00);
  FUN_0053f0a0(param_1,local_b8,local_a0,0xff00ff00);
  FUN_0053f0a0(param_1,local_a0,local_70,0xff00ff00);
  FUN_0053f0a0(param_1,local_70,local_88,0xff00ff00);
  FUN_0053f0a0(param_1,local_88,local_b8,0xff00ff00);
  _eh_vector_destructor_iterator_(local_c4,0xc,8,FUN_00407150);
  return;
}




/* Function: FUN_004f9d30 */

undefined1 __fastcall FUN_004f9d30(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 == '\0') {
    return 0;
  }
  bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                    ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(param_1 + 0x21));
  if (!bVar2) {
    iVar3 = FUN_004222d0((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *)(param_1 + 0x21));
    param_1[0x28] = iVar3;
  }
  return 1;
}




/* Function: FUN_004f9d80 */

void __thiscall FUN_004f9d80(int param_1,undefined4 param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::clear
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x84));
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  return;
}




/* Function: FUN_004f9da0 */

int __thiscall FUN_004f9da0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  
  iVar1 = FUN_0041cf30();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = (**(code **)(*param_2 + 0x130))(param_2,0x12);
  if (iVar2 < 0) {
    return -1;
  }
  iVar3 = FUN_0041cf40();
  iVar2 = 0;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (((*(int *)(param_1 + 0x1f0) < 0) ||
        (iVar4 = FUN_004ffb90(), iVar4 != *(int *)(param_1 + 0x1f0))) &&
       (iVar4 = FUN_004ffef0(unaff_EBX,param_3,iVar3 + 4,param_1 + 0x18c), 0 < iVar4)) {
      iVar2 = iVar2 + iVar4;
    }
    iVar3 = iVar3 + 0x44;
  }
  return iVar2;
}




/* Function: FUN_004f9e40 */

void __thiscall FUN_004f9e40(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1f0) = param_2;
  return;
}




/* Function: FUN_004f9e50 */

void __thiscall FUN_004f9e50(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_c0 [64];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  if (param_2 == 0) {
    FUN_0041d670(param_3);
    FUN_00434b40(local_c0);
    uVar1 = FUN_0041d7a0(local_40,local_c0,param_1 + 0xe4);
    FUN_0041d670(uVar1);
    FUN_00407300();
    FUN_004f9360(param_1 + 0x124);
    *(undefined1 *)(param_1 + 0x164) = 1;
    FUN_00407300();
  }
  else if (param_2 == 1) {
    FUN_0041d670(param_3);
    FUN_00434b40(local_c0);
    uVar1 = FUN_0041d7a0(local_80,local_c0,param_1 + 0xe4);
    FUN_0041d670(uVar1);
    FUN_00407300();
    FUN_004f9360(param_1 + 0x124);
    *(undefined1 *)(param_1 + 0x164) = 1;
    FUN_00407300();
    return;
  }
  return;
}




/* Function: FUN_004f9f60 */

void FUN_004f9f60(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e922;
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




/* Function: FUN_004fa050 */

undefined4 __thiscall FUN_004fa050(int param_1,uint param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0x3fffffff < param_2) {
    FUN_004f9f60();
    return 1;
  }
  iVar1 = FUN_00493c27(param_2 * 4);
  *(uint *)(param_1 + 0xc) = param_2 * 4 + iVar1;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  return 1;
}




/* Function: FUN_004fa0b0 */

int __thiscall FUN_004fa0b0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 unaff_retaddr;
  
  if (((*(int *)(param_1 + 0x16c) == 0) ||
      (*(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x16c) >> 2 == 0)) &&
     ((*(int *)(param_1 + 0x180) == 0 ||
      (*(int *)(param_1 + 0x184) - *(int *)(param_1 + 0x180) >> 2 == 0)))) {
    return 0;
  }
  uVar2 = FUN_00407f80(0x3f800000);
  FUN_0041e330(0,uVar2);
  FUN_00407300();
  FUN_0041da10(param_2);
  iVar3 = (**(code **)(*param_2 + 0x130))(param_2,0x212);
  if (-1 < iVar3) {
    iVar3 = 0;
    FUN_0041c940();
    FUN_0041cf80();
    iVar4 = FUN_0053f0e0();
    for (piVar5 = *(int **)(param_1 + 0x16c); piVar5 != *(int **)(param_1 + 0x170);
        piVar5 = piVar5 + 1) {
      iVar1 = *piVar5;
      iVar6 = (**(code **)(*param_2 + 0x14c))
                        (param_2,0,*(undefined4 *)(*(int *)(iVar4 + 4) + *(int *)(iVar1 + 0x60) * 4)
                         ,0x28);
      if ((-1 < iVar6) &&
         (iVar6 = *(int *)(iVar1 + 0x50), param_3 = unaff_retaddr, iVar6 != *(int *)(iVar1 + 0x54)))
      {
        do {
          iVar7 = FUN_0053f0f0(param_2,iVar6);
          if (0 < iVar7) {
            iVar3 = iVar3 + iVar7;
          }
          iVar6 = iVar6 + 0x24;
        } while (iVar6 != *(int *)(iVar1 + 0x54));
      }
    }
    uVar2 = FUN_0041cb90();
    FUN_0041cba0(0);
    puVar8 = *(undefined4 **)(param_1 + 0x180);
    if (puVar8 != *(undefined4 **)(param_1 + 0x184)) {
      do {
        (**(code **)(*(int *)*puVar8 + 0x24))(param_2,param_3);
        puVar8 = puVar8 + 1;
      } while (puVar8 != *(undefined4 **)(param_1 + 0x184));
    }
    FUN_0041cba0(uVar2);
    return iVar3;
  }
  return -1;
}




/* Function: FUN_004fa230 */

int __thiscall FUN_004fa230(int param_1,int ***param_2)

{
  int **ppiVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  int **ppiStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  int **ppiStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  int **ppiStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  int **ppiStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  int **ppiStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  int **ppiStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  int **ppiStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  int ***pppiStack_200;
  int ***pppiStack_1fc;
  int iStack_1f8;
  int ***pppiStack_1f4;
  int **ppiStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  int **ppiStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  int **ppiStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  int **ppiStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  int **ppiStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int **ppiStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int **ppiStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int **ppiStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int **ppiStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  int **ppiStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int **ppiStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int **ppiStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  int **ppiStack_134;
  int **ppiStack_130;
  int **ppiStack_12c;
  int iStack_118;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    return -1;
  }
  iVar2 = *(int *)(param_1 + 0x200);
  if (iVar2 == 0) {
    (*(code *)(*param_2)[0x32])();
    ppiStack_12c = (int **)0x4fa2c4;
    (*(code *)(*param_2)[0x32])();
  }
  else if (iVar2 == 1) {
    (*(code *)(*param_2)[0x32])();
    ppiStack_12c = (int **)0x4fa2a8;
    (*(code *)(*param_2)[0x32])();
  }
  else if (iVar2 == 2) {
    (*(code *)(*param_2)[0x32])();
    ppiStack_12c = (int **)0x4fa28c;
    (*(code *)(*param_2)[0x32])();
  }
  iStack_118 = 0x3c;
  (*(code *)(*param_2)[0x32])();
  (**(code **)(*(int *)(param_1 + 0xa0) + 4))();
  iVar2 = FUN_004fb910();
  if (iVar2 == 0) {
    iVar2 = FUN_004fb920();
    if (iVar2 != 0) {
      ppiStack_12c = (int **)0x1;
      ppiStack_130 = (int **)param_2;
      ppiStack_134 = (int **)0x4fa69f;
      (*(code *)(*param_2)[0x3d])();
      ppiStack_134 = (int **)0x20000;
      uStack_138 = 0xb;
      uStack_13c = 0;
      ppiStack_140 = (int **)param_2;
      uStack_144 = 0x4fa6b1;
      (*(code *)(*param_2)[0x3f])();
      uStack_144 = 0x104;
      uStack_148 = 0x18;
      uStack_14c = 0;
      ppiStack_150 = (int **)param_2;
      uStack_154 = 0x4fa6c3;
      (*(code *)(*param_2)[0x3f])();
      uStack_154 = 1;
      uStack_158 = 0xb;
      uStack_15c = 1;
      ppiStack_160 = (int **)param_2;
      uStack_164 = 0x4fa6d2;
      (*(code *)(*param_2)[0x3f])();
      uStack_164 = 0;
      uStack_168 = 0x18;
      uStack_16c = 1;
      ppiStack_170 = (int **)param_2;
      uStack_174 = 0x4fa6e1;
      (*(code *)(*param_2)[0x3f])();
      uStack_174 = 4;
      uStack_178 = 1;
      uStack_17c = 0;
      ppiStack_180 = (int **)param_2;
      uStack_184 = 0x4fa6f0;
      (*(code *)(*param_2)[0x3f])();
      uStack_184 = 2;
      uStack_188 = 2;
      uStack_18c = 0;
      ppiStack_190 = (int **)param_2;
      uStack_194 = 0x4fa6ff;
      (*(code *)(*param_2)[0x3f])();
      uStack_194 = 3;
      uStack_198 = 3;
      uStack_19c = 0;
      ppiStack_1a0 = (int **)param_2;
      uStack_1a4 = 0x4fa70e;
      (*(code *)(*param_2)[0x3f])();
      uStack_1a4 = 2;
      uStack_1a8 = 4;
      uStack_1ac = 0;
      ppiStack_1b0 = (int **)param_2;
      uStack_1b4 = 0x4fa71d;
      (*(code *)(*param_2)[0x3f])();
      uStack_1b4 = 2;
      uStack_1b8 = 5;
      uStack_1bc = 0;
      ppiStack_1c0 = (int **)param_2;
      uStack_1c4 = 0x4fa72c;
      (*(code *)(*param_2)[0x3f])();
      uStack_1c4 = 3;
      uStack_1c8 = 6;
      uStack_1cc = 0;
      ppiStack_1d0 = (int **)param_2;
      uStack_1d4 = 0x4fa73b;
      (*(code *)(*param_2)[0x3f])();
      uStack_1d4 = 1;
      uStack_1d8 = 1;
      uStack_1dc = 1;
      ppiStack_1e0 = (int **)param_2;
      uStack_1e4 = 0x4fa74a;
      (*(code *)(*param_2)[0x3f])();
      uStack_1e4 = 1;
      uStack_1e8 = 4;
      uStack_1ec = 1;
      ppiStack_1f0 = (int **)param_2;
      pppiStack_1f4 = (int ***)0x4fa759;
      (*(code *)(*param_2)[0x3f])();
      pppiStack_1f4 = (int ***)0x3f800000;
      iStack_1f8 = 0x4fa767;
      FUN_00407f80();
      uStack_168 = 0x3f800000;
      pppiStack_1f4 = &ppiStack_1a0;
      iStack_1f8 = param_1 + 0x124;
      pppiStack_1fc = (int ***)0x2;
      pppiStack_200 = (int ***)0x4fa787;
      pppiStack_1fc = (int ***)FUN_0041e470();
      pppiStack_200 = &ppiStack_160;
      uStack_204 = 0x4fa795;
      iStack_1f8 = FUN_0041d7a0();
      pppiStack_1fc = &ppiStack_1e0;
      pppiStack_200 = (int ***)0x4fa7a3;
      FUN_0041d7a0();
      pppiStack_1f4 = (int ***)0x4fa7b2;
      FUN_00407300();
      pppiStack_1f4 = &ppiStack_1e0;
      iStack_1f8 = 0x10;
      pppiStack_1fc = param_2;
      pppiStack_200 = (int ***)0x4fa7c2;
      (*(code *)(*param_2)[0x25])();
      FUN_00407300();
      FUN_00407300();
    }
  }
  else {
    ppiStack_12c = (int **)0x4fa304;
    iVar2 = FUN_0041cf60();
    if (iVar2 == 0) {
      ppiStack_12c = (int **)0x0;
      ppiStack_130 = (int **)0x1;
      ppiStack_134 = (int **)param_2;
      uStack_138 = 0x4fa331;
      (*(code *)(*param_2)[0x3d])();
    }
    else {
      ppiVar1 = *param_2;
      ppiStack_12c = (int **)0x4fa311;
      FUN_0041cf60();
      ppiStack_12c = (int **)0x4fa318;
      ppiStack_12c = (int **)FUN_00434f40();
      ppiStack_130 = (int **)0x1;
      ppiStack_134 = (int **)param_2;
      uStack_138 = 0x4fa322;
      (*(code *)ppiVar1[0x3d])();
    }
    uStack_138 = 0;
    uStack_13c = 2;
    ppiStack_140 = (int **)param_2;
    uStack_144 = 0x4fa33e;
    (*(code *)(*param_2)[0x3d])();
    uStack_144 = 0x20000;
    uStack_148 = 0xb;
    uStack_14c = 0;
    ppiStack_150 = (int **)param_2;
    uStack_154 = 0x4fa350;
    (*(code *)(*param_2)[0x3f])();
    uStack_154 = 2;
    uStack_158 = 0x18;
    uStack_15c = 0;
    ppiStack_160 = (int **)param_2;
    uStack_164 = 0x4fa35f;
    (*(code *)(*param_2)[0x3f])();
    uStack_164 = 0x20001;
    uStack_168 = 0xb;
    uStack_16c = 1;
    ppiStack_170 = (int **)param_2;
    uStack_174 = 0x4fa371;
    (*(code *)(*param_2)[0x3f])();
    uStack_174 = 2;
    uStack_178 = 0x18;
    uStack_17c = 1;
    ppiStack_180 = (int **)param_2;
    uStack_184 = 0x4fa380;
    (*(code *)(*param_2)[0x3f])();
    uStack_184 = 4;
    uStack_188 = 1;
    uStack_18c = 0;
    ppiStack_190 = (int **)param_2;
    uStack_194 = 0x4fa38f;
    (*(code *)(*param_2)[0x3f])();
    uStack_194 = 2;
    uStack_198 = 2;
    uStack_19c = 0;
    ppiStack_1a0 = (int **)param_2;
    uStack_1a4 = 0x4fa39e;
    (*(code *)(*param_2)[0x3f])();
    uStack_1a4 = 3;
    uStack_1a8 = 3;
    uStack_1ac = 0;
    ppiStack_1b0 = (int **)param_2;
    uStack_1b4 = 0x4fa3ad;
    (*(code *)(*param_2)[0x3f])();
    uStack_1b4 = 4;
    uStack_1b8 = 4;
    uStack_1bc = 0;
    ppiStack_1c0 = (int **)param_2;
    uStack_1c4 = 0x4fa3bc;
    (*(code *)(*param_2)[0x3f])();
    uStack_1c4 = 2;
    uStack_1c8 = 5;
    uStack_1cc = 0;
    ppiStack_1d0 = (int **)param_2;
    uStack_1d4 = 0x4fa3cb;
    (*(code *)(*param_2)[0x3f])();
    uStack_1d4 = 3;
    uStack_1d8 = 6;
    uStack_1dc = 0;
    ppiStack_1e0 = (int **)param_2;
    uStack_1e4 = 0x4fa3da;
    (*(code *)(*param_2)[0x3f])();
    uStack_1e4 = 4;
    uStack_1e8 = 1;
    uStack_1ec = 1;
    ppiStack_1f0 = (int **)param_2;
    pppiStack_1f4 = (int ***)0x4fa3e9;
    (*(code *)(*param_2)[0x3f])();
    pppiStack_1f4 = (int ***)0x1;
    iStack_1f8 = 2;
    pppiStack_1fc = (int ***)0x1;
    pppiStack_200 = param_2;
    uStack_204 = 0x4fa3f8;
    (*(code *)(*param_2)[0x3f])();
    uStack_204 = 2;
    uStack_208 = 3;
    uStack_20c = 1;
    ppiStack_210 = (int **)param_2;
    uStack_214 = 0x4fa407;
    (*(code *)(*param_2)[0x3f])();
    uStack_214 = 4;
    uStack_218 = 4;
    uStack_21c = 1;
    ppiStack_220 = (int **)param_2;
    uStack_224 = 0x4fa416;
    (*(code *)(*param_2)[0x3f])();
    uStack_224 = 1;
    uStack_228 = 5;
    uStack_22c = 1;
    ppiStack_230 = (int **)param_2;
    uStack_234 = 0x4fa425;
    (*(code *)(*param_2)[0x3f])();
    uStack_234 = 2;
    uStack_238 = 6;
    uStack_23c = 1;
    ppiStack_240 = (int **)param_2;
    uStack_244 = 0x4fa434;
    (*(code *)(*param_2)[0x3f])();
    uStack_244 = 1;
    uStack_248 = 0x11;
    uStack_24c = 1;
    ppiStack_250 = (int **)param_2;
    uStack_254 = 0x4fa443;
    (*(code *)(*param_2)[0x3f])();
    uStack_254 = 1;
    uStack_258 = 0x10;
    uStack_25c = 1;
    ppiStack_260 = (int **)param_2;
    uStack_264 = 0x4fa452;
    (*(code *)(*param_2)[0x3f])();
    uStack_264 = 1;
    uStack_268 = 0x12;
    uStack_26c = 1;
    ppiStack_270 = (int **)param_2;
    uStack_274 = 0x4fa461;
    (*(code *)(*param_2)[0x3f])();
    uStack_274 = 1;
    uStack_278 = 1;
    uStack_27c = 2;
    (*(code *)(*param_2)[0x3f])();
    (*(code *)(*param_2)[0x3f])(param_2,2);
    FUN_00407f80(0x3f800000);
    FUN_00407f80(0x3f800000);
    puVar4 = &uStack_27c;
    param_1 = param_1 + 0x124;
    uStack_27c = 0x3f000000;
    uStack_278 = 0;
    uStack_274 = 0;
    ppiStack_270 = (int **)0x0;
    uStack_26c = 0;
    uStack_268 = 0xbf000000;
    uStack_264 = 0;
    ppiStack_260 = (int **)0x0;
    uStack_25c = 0;
    uStack_258 = 0;
    uStack_254 = 0;
    ppiStack_250 = (int **)0x0;
    uStack_24c = 0x3f000000;
    uStack_248 = 0x3f000000;
    uStack_244 = 0;
    ppiStack_240 = (int **)0x0;
    uVar3 = FUN_0041e470(2);
    uVar3 = FUN_0041d7a0(&pppiStack_1fc,uVar3,param_1,puVar4);
    uVar3 = FUN_0041d7a0(&uStack_1bc,uVar3);
    FUN_0041d670(uVar3);
    FUN_00407300();
    FUN_00407300();
    (*(code *)(*param_2)[0x25])(param_2,0x10,&uStack_23c);
    uStack_27c = 0;
    uStack_278 = 0;
    uStack_274 = 0;
    ppiStack_270 = (int **)0x0;
    uStack_26c = 0;
    uStack_268 = 0x3f000000;
    uStack_264 = 0;
    ppiStack_260 = (int **)0x0;
    uStack_25c = 0;
    uStack_258 = 0x3f000000;
    uStack_254 = 0x3f000000;
    ppiStack_250 = (int **)0x0;
    uStack_24c = 0;
    uVar3 = FUN_0041e470(2);
    uVar3 = FUN_0041d7a0(&uStack_1c8,uVar3);
    uVar3 = FUN_0041d7a0(&uStack_208,uVar3);
    FUN_0041d670(uVar3);
    FUN_00407300();
    FUN_00407300();
    (*(code *)(*param_2)[0x25])(param_2,0x11,&uStack_248);
    ppiStack_12c = (int **)0x4fa670;
    FUN_00407300();
    ppiStack_12c = (int **)0x4fa679;
    FUN_00407300();
  }
  ppiStack_12c = (int **)param_2;
  ppiStack_130 = (int **)0x4fa7dd;
  iVar2 = FUN_004fa0b0();
  if (0 < iVar2) {
    iStack_118 = iVar2;
  }
  ppiStack_12c = (int **)param_2;
  ppiStack_130 = (int **)0x4fa7ee;
  iVar2 = FUN_004f9da0();
  if (0 < iVar2) {
    iStack_118 = iStack_118 + iVar2;
  }
  return iStack_118;
}




/* Function: FUN_004fa810 */

void FUN_004fa810(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return;
}




/* Function: FUN_004fa840 */

void __thiscall FUN_004fa840(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057e930;
  local_10 = ExceptionList;
  if (param_2 < 0x40000000) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
    }
    if (uVar2 < param_2) {
      iVar1 = param_2 * 4;
      ExceptionList = &local_10;
      iVar3 = FUN_00493c27(iVar1);
      local_8 = 0;
      FUN_00543360(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar3,param_1,iVar1);
      if (*(void **)(param_1 + 4) == (void *)0x0) {
        *(int *)(param_1 + 8) = iVar3;
        *(int *)(param_1 + 4) = iVar3;
        *(int *)(param_1 + 0xc) = iVar1 + iVar3;
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)(param_1 + 4));
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_0042f100();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004fa930 */

void __thiscall
FUN_004fa930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00543360(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_004fa950 */

int __thiscall FUN_004fa950(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057e940;
  local_10 = ExceptionList;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
  }
  ExceptionList = &local_10;
  cVar1 = FUN_004fa050(iVar2);
  if (cVar1 != '\0') {
    local_8 = 0;
    uVar3 = FUN_00543360(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(param_1 + 4),param_1,param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_004fa9f0 */

void __thiscall FUN_004fa9f0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057e950;
  local_10 = ExceptionList;
  if (param_2 < 0x40000000) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
    }
    if (uVar2 < param_2) {
      iVar1 = param_2 * 4;
      ExceptionList = &local_10;
      iVar3 = FUN_00493c27(iVar1);
      local_8 = 0;
      FUN_00543360(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar3,param_1,iVar1);
      if (*(void **)(param_1 + 4) == (void *)0x0) {
        *(int *)(param_1 + 8) = iVar3;
        *(int *)(param_1 + 4) = iVar3;
        *(int *)(param_1 + 0xc) = iVar1 + iVar3;
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)(param_1 + 4));
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_004f9f60();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004faae0 */

void __thiscall FUN_004faae0(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057e960;
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
      FUN_004f9f60();
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




/* Function: FUN_004fad80 */

int __thiscall FUN_004fad80(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 != 0) {
    uVar6 = *(int *)(param_2 + 8) - iVar1 >> 2;
    if (uVar6 != 0) {
      pvVar2 = *(void **)(param_1 + 4);
      if (pvVar2 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)(param_1 + 8) - (int)pvVar2 >> 2;
      }
      if (uVar6 <= uVar4) {
        FUN_004fa810(iVar1,*(int *)(param_2 + 8),pvVar2);
        if (*(int *)(param_2 + 4) == 0) {
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
          return param_1;
        }
        *(int *)(param_1 + 8) =
             *(int *)(param_1 + 4) + (*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2) * 4;
        return param_1;
      }
      if (pvVar2 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)(param_1 + 0xc) - (int)pvVar2 >> 2;
      }
      if (uVar6 <= uVar4) {
        if (pvVar2 == (void *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - (int)pvVar2 >> 2;
        }
        iVar5 = iVar1 + iVar5 * 4;
        FUN_004fa810(iVar1,iVar5,pvVar2);
        uVar3 = FUN_00543360(iVar5,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8),param_1
                             ,param_2);
        *(undefined4 *)(param_1 + 8) = uVar3;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return param_1;
}




/* Function: FUN_004faec0 */

void __thiscall FUN_004faec0(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057e970;
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
      FUN_0042f100();
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




/* Function: FUN_004fb160 */

void __thiscall FUN_004fb160(int param_1,uint param_2)

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
    FUN_004faec0(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 2))) {
    FUN_00409930(&param_2,*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_004fb1e0 */

undefined4 __thiscall FUN_004fb1e0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined1 local_15;
  int iStack_14;
  undefined1 local_10 [4];
  void *local_c;
  int local_8;
  int local_4;
  
  iVar1 = 0;
  local_c = (void *)0x0;
  local_8 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    iVar1 = *(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xf0) >> 3;
  }
  FUN_004fa9f0(iVar1);
  puVar2 = *(undefined4 **)(param_1 + 0xf0);
  iVar1 = local_8;
  pvVar3 = local_c;
  if (puVar2 != *(undefined4 **)(param_1 + 0xf4)) {
    do {
      iStack_14 = (**(code **)(*(int *)*puVar2 + 0x5c))(&local_15);
      if (iStack_14 != 0) {
        if ((pvVar3 == (void *)0x0) ||
           ((uint)(local_4 - (int)pvVar3 >> 2) <= (uint)(iVar1 - (int)pvVar3 >> 2))) {
          FUN_004faae0(iVar1,1,&iStack_14);
          iVar1 = local_8;
          pvVar3 = local_c;
        }
        else {
          FUN_004520c0(iVar1,1,&iStack_14,local_10,param_2);
          local_8 = iVar1 + 4;
          iVar1 = local_8;
        }
      }
      puVar2 = puVar2 + 2;
    } while (puVar2 != *(undefined4 **)(param_1 + 0xf4));
  }
  FUN_004fa950(local_10);
  if (pvVar3 == (void *)0x0) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar3);
}




/* Function: FUN_004fb2d0 */

undefined4 __fastcall FUN_004fb2d0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_10 [4];
  void *local_c;
  
  if (*(char *)(param_1 + 0x164) != '\0') {
    iVar3 = param_1 + 0x168;
    FUN_004fb160(0,0);
    iVar1 = FUN_0041c940();
    if (iVar1 != 0) {
      FUN_0041c940();
      iVar1 = FUN_0041cf80();
      if (iVar1 != 0) {
        iVar1 = param_1 + 0x18c;
        FUN_0041c940(iVar3,iVar1);
        FUN_0041cf80();
        FUN_0053f260(iVar3,iVar1);
      }
    }
    if (*(int *)(param_1 + 0x16c) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x16c) >> 2;
    }
    if (*(uint *)(param_1 + 0x178) < uVar2) {
      if (*(int *)(param_1 + 0x16c) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x16c) >> 2;
      }
      *(int *)(param_1 + 0x178) = iVar3 + 0x10;
      FUN_004fa840(iVar3 + 0x10);
    }
    FUN_0041c940();
    iVar3 = FUN_0041cfb0();
    if (iVar3 != *(int *)(param_1 + 0x1f8)) {
      puVar5 = local_10;
      *(int *)(param_1 + 0x1f8) = iVar3;
      FUN_0041c940(puVar5);
      uVar4 = FUN_004fb1e0(puVar5);
      FUN_004fad80(uVar4);
      if (local_c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_c);
      }
    }
  }
  return 1;
}




/* Function: FUN_004fb3d0 */

undefined4 * __fastcall FUN_004fb3d0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00590eb8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x21));
  param_1[0x28] = 0;
  FUN_00407f80(0x3f800000);
  FUN_00407f80(0x3f800000);
  FUN_00407f80(0x3f800000);
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  FUN_004f9330();
  param_1[0x7c] = 0xffffffff;
  param_1[0x7e] = 0xffffffff;
  param_1[0x7f] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x80] = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_44 = 0x3f800000;
  local_58 = 0x3f800000;
  local_6c = 0x3f800000;
  local_80 = 0x3f800000;
  uVar1 = FUN_0041d620(&local_80);
  FUN_004f9e50(0,uVar1);
  FUN_00407300();
  FUN_00496fb1(&local_80,0x3fc90fdb,0x3f800000,0x41200000,0x461c4000);
  uVar1 = FUN_0041d620(&local_80);
  FUN_004f9e50(1,uVar1);
  FUN_00407300();
  return param_1;
}




/* Function: FUN_004fb550 */

void __fastcall FUN_004fb550(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00590eb8;
  param_1[0x28] = 0;
  FUN_004f9110();
  if ((void *)param_1[0x60] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x60]);
  }
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  if ((void *)param_1[0x5b] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x5b]);
  }
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  FUN_00407300();
  FUN_00407300();
  FUN_00407300();
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x21));
  FUN_0040da90();
  return;
}




/* Function: FUN_004fb5f0 */

void * __thiscall FUN_004fb5f0(void *param_1,byte param_2)

{
  FUN_004fb550();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004fb610 */

bool __fastcall FUN_004fb610(int param_1)

{
  return *(int *)(param_1 + 0x48) == 0;
}




/* Function: FUN_004fb820 */

undefined4 __fastcall FUN_004fb820(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  *(undefined1 **)(param_1 + 4) = &LAB_004fbde0;
  return 1;
}




/* Function: FUN_004fb910 */

undefined4 __fastcall FUN_004fb910(int param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}




/* Function: FUN_004fb920 */

undefined4 __fastcall FUN_004fb920(int param_1)

{
  return *(undefined4 *)(param_1 + 100);
}




/* Function: FUN_004fb930 */

int __fastcall FUN_004fb930(int param_1)

{
  return param_1 + 0x24;
}




/* Function: FUN_004fb940 */

undefined4 * __thiscall FUN_004fb940(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_00590f40;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 2),"");
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 9),"");
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = param_2;
  param_1[0x19] = 0;
  param_1[0x29] = 1;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
    (**(code **)(*(int *)param_1[0x18] + 0x38))((int *)param_1[0x18],0,param_1 + 0x21);
    uVar1 = (**(code **)(*(int *)param_1[0x18] + 0x34))((int *)param_1[0x18]);
    param_1[0x29] = uVar1;
    param_1[0x15] = param_1[0x28];
    param_1[0x14] = param_1[0x27];
  }
  param_1[1] = &LAB_004fb870;
  return param_1;
}




/* Function: FUN_004fb9e0 */

void __fastcall FUN_004fb9e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00590f40;
  FUN_004fb820();
  operator_delete__((void *)param_1[0x12]);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[1] = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 9));
                    /* WARNING: Could not recover jumptable at 0x004fba12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 2));
  return;
}




/* Function: FUN_004fbb70 */

undefined4 __fastcall FUN_004fbb70(int param_1)

{
  int *piVar1;
  size_t *psVar2;
  char cVar3;
  char *pcVar4;
  FILE *_File;
  int iVar5;
  uint uVar6;
  void *_DstBuf;
  size_t sVar7;
  int *piVar8;
  char *_Mode;
  size_t *psVar9;
  uint local_3c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c [28];
  
  cVar3 = FUN_004fb820();
  if (cVar3 != '\0') {
    piVar1 = (int *)(param_1 + 0x48);
    operator_delete__(*(void **)(param_1 + 0x48));
    psVar2 = (size_t *)(param_1 + 0x4c);
    *piVar1 = 0;
    *psVar2 = 0;
    FUN_00411e6c(local_1c,param_1 + 8,param_1 + 0x24);
    local_3c = 0;
    do {
      FUN_00411994(local_38,local_1c,*(undefined4 *)((int)&PTR_DAT_005b25e0 + local_3c));
      _Mode = "rb";
      pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(local_38);
      _File = fopen(pcVar4,_Mode);
      if (_File == (FILE *)0x0) {
        piVar8 = piVar1;
        psVar9 = psVar2;
        pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                 c_str(local_38);
        cVar3 = FUN_004103c0(pcVar4,piVar8,psVar9);
        if (cVar3 != '\0') {
LAB_004fbcfa:
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
          break;
        }
      }
      else {
        iVar5 = fseek(_File,0,2);
        if (iVar5 == 0) {
          uVar6 = ftell(_File);
          if ((int)uVar6 < 0) {
            fclose(_File);
          }
          else {
            iVar5 = fseek(_File,0,0);
            if (iVar5 == 0) {
              *psVar2 = uVar6;
              _DstBuf = operator_new(uVar6,(nothrow_t *)&DAT_005b6164);
              *piVar1 = (int)_DstBuf;
              if (_DstBuf == (void *)0x0) {
                fclose(_File);
              }
              else {
                sVar7 = fread(_DstBuf,*psVar2,1,_File);
                if (sVar7 == 1) {
                  fclose(_File);
                  goto LAB_004fbcfa;
                }
                operator_delete__((void *)*piVar1);
                *piVar1 = 0;
                *psVar2 = 0;
                fclose(_File);
              }
            }
            else {
              fclose(_File);
            }
          }
        }
        else {
          fclose(_File);
        }
      }
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
      local_3c = local_3c + 4;
    } while (local_3c < 0x18);
    if (*piVar1 != 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
      return 1;
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  }
  return 0;
}




/* Function: FUN_004fbd30 */

char __thiscall FUN_004fbd30(int param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  cVar1 = FUN_004fb820();
  if (cVar1 == '\0') {
    return '\0';
  }
  iVar3 = FUN_0041ce80();
  if (iVar3 == 0) {
    return '\0';
  }
  SetLastError(0);
  if (*(char *)(param_1 + 0x5c) == '\0') {
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)(param_1 + 0x24));
    if (bVar2) {
      cVar1 = '\x01';
      goto LAB_004fbd73;
    }
    uVar4 = FUN_00423420();
    cVar1 = FUN_004fba20(iVar3,param_2,*(undefined4 *)(param_1 + 0xa4),0,uVar4);
  }
  else {
    cVar1 = FUN_004fb620(iVar3,param_2);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined1 **)(param_1 + 4) = &LAB_004fb860;
    return '\0';
  }
LAB_004fbd73:
  if (*(int *)(param_1 + 100) != 0) {
    *(undefined1 **)(param_1 + 4) = &LAB_004fb8c0;
    return cVar1;
  }
  *(undefined1 **)(param_1 + 4) = &LAB_004fb870;
  return cVar1;
}




/* Function: FUN_004fbe10 */

undefined4 * __thiscall
FUN_004fbe10(undefined4 *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
            undefined4 param_4)

{
  *param_1 = &PTR_FUN_00590f40;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 2),param_2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 9),param_3);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x29] = param_4;
  FUN_004fbb70();
  param_1[1] = &LAB_004fbde0;
  return param_1;
}




/* Function: FUN_004fbe80 */

void * __thiscall FUN_004fbe80(void *param_1,byte param_2)

{
  FUN_004fb9e0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004fbea0 */

float10 __fastcall FUN_004fbea0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x580);
}




/* Function: FUN_004fbed0 */

int __fastcall FUN_004fbed0(int param_1)

{
  return param_1 + 0x59c;
}




/* Function: FUN_004fbee0 */

void FUN_004fbee0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = param_3;
  if (param_3 < *param_2) {
    fVar2 = *param_2;
  }
  fVar3 = param_3;
  if (param_3 < param_2[1]) {
    fVar3 = param_2[1];
  }
  fVar4 = param_3;
  if (param_3 < param_2[2]) {
    fVar4 = param_2[2];
  }
  if (param_2[3] <= param_3) {
    *param_1 = fVar2;
    param_1[1] = fVar3;
    param_1[2] = fVar4;
    param_1[3] = param_3;
    return;
  }
  fVar1 = param_2[3];
  *param_1 = fVar2;
  param_1[1] = fVar3;
  param_1[2] = fVar4;
  param_1[3] = fVar1;
  return;
}




/* Function: FUN_004fbfd0 */

undefined4 __thiscall FUN_004fbfd0(int param_1,int param_2,int *param_3,char param_4)

{
  int iVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  undefined8 uVar8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1e4 [28];
  float local_1c8 [27];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_15c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_140 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_124 [28];
  undefined1 local_108 [260];
  
  iVar1 = FUN_0041c940();
  if (((iVar1 != 0) && ((*(char *)(param_2 + 0x18ef) == '\0' || (param_4 != '\0')))) &&
     ((*(char *)(param_2 + 0x18ed) == '\0' || (param_4 == '\0')))) {
    FUN_0041c940();
    this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0041cfa0();
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(this);
    FUN_0050f460(pcVar2);
    uVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      (local_124,"_FilterLight");
    uVar8 = CONCAT44(uVar3,local_108);
    uVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      (local_15c,"_");
    uVar3 = FUN_00411994(local_140,uVar3,uVar8);
    FUN_00411e6c(local_1e4,uVar3);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_140);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_15c);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_124);
    pfVar5 = (float *)(param_1 + 0x59c);
    pfVar6 = local_1c8;
    for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
    FUN_0041cae0();
    iVar1 = FUN_0042dbb0();
    if (iVar1 != 0) {
      pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(local_1e4);
      FUN_00412e58(iVar1,pcVar2);
      FUN_00412cfc(iVar1,(double)(param_4 != '\0'));
      FUN_00412cfc(iVar1,(double)local_1c8[1]);
      FUN_00412cfc(iVar1,(double)local_1c8[2]);
      FUN_00412cfc(iVar1,(double)local_1c8[3]);
      iVar4 = FUN_00412798(iVar1,4,3);
      if (iVar4 == 0) {
        fVar7 = (float10)FUN_00412c00(iVar1,0xfffffffd);
        local_1c8[1] = (float)fVar7;
        fVar7 = (float10)FUN_00412c00(iVar1,0xfffffffe);
        local_1c8[2] = (float)fVar7;
        fVar7 = (float10)FUN_00412c00(iVar1,0xffffffff);
        local_1c8[3] = (float)fVar7;
        FUN_00412950(iVar1,0xfffffffc);
      }
      (**(code **)(*param_3 + 0xb0))(param_3,0,local_1c8);
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1e4);
    return 1;
  }
  return 0;
}




/* Function: FUN_004fc1b0 */

undefined4 __thiscall FUN_004fc1b0(int param_1,undefined4 param_2)

{
  FUN_0053f780(param_2,*(undefined4 *)(param_1 + 0x58c),*(undefined4 *)(param_1 + 0x598));
  return param_2;
}




/* Function: FUN_004fc1e0 */

undefined4 __thiscall FUN_004fc1e0(int param_1,undefined4 param_2)

{
  FUN_005405f0(param_2,*(undefined4 *)(param_1 + 0x598));
  return param_2;
}




/* Function: FUN_004fc210 */

void FUN_004fc210(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e992;
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




/* Function: FUN_004fc290 */

void FUN_004fc290(undefined4 *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *param_3,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  
  if (param_2 != param_3) {
    pbVar1 = param_3 + 0x3c;
    pbVar2 = param_4 + 0x3c;
    do {
      param_3 = param_3 + -0x40;
      param_4 = param_4 + -0x40;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                (param_4,param_3);
      *(undefined4 *)(pbVar2 + -0x60) = *(undefined4 *)(pbVar1 + -0x60);
      *(undefined4 *)(pbVar2 + -0x5c) = *(undefined4 *)(pbVar1 + -0x5c);
      *(undefined4 *)(pbVar2 + -0x58) = *(undefined4 *)(pbVar1 + -0x58);
      *(undefined4 *)(pbVar2 + -0x54) = *(undefined4 *)(pbVar1 + -0x54);
      *(undefined4 *)(pbVar2 + -0x50) = *(undefined4 *)(pbVar1 + -0x50);
      *(undefined4 *)(pbVar2 + -0x4c) = *(undefined4 *)(pbVar1 + -0x4c);
      if (pbVar1 + -0x48 != pbVar2 + -0x48) {
        *(undefined4 *)(pbVar2 + -0x48) = *(undefined4 *)(pbVar1 + -0x48);
        *(undefined4 *)(pbVar2 + -0x44) = *(undefined4 *)(pbVar1 + -0x44);
        *(undefined4 *)(pbVar2 + -0x40) = *(undefined4 *)(pbVar1 + -0x40);
      }
      pbVar1 = pbVar1 + -0x40;
      pbVar2 = pbVar2 + -0x40;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return;
  }
  *param_1 = param_4;
  return;
}




/* Function: FUN_004fc320 */

void FUN_004fc320(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *param_3)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  
  if (param_1 != param_2) {
    pbVar1 = param_1 + 0x3c;
    do {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                (param_1,param_3);
      *(undefined4 *)(pbVar1 + -0x20) = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(pbVar1 + -0x1c) = *(undefined4 *)(param_3 + 0x20);
      *(undefined4 *)(pbVar1 + -0x18) = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(pbVar1 + -0x14) = *(undefined4 *)(param_3 + 0x28);
      *(undefined4 *)(pbVar1 + -0x10) = *(undefined4 *)(param_3 + 0x2c);
      *(undefined4 *)(pbVar1 + -0xc) = *(undefined4 *)(param_3 + 0x30);
      if (param_3 + 0x34 != pbVar1 + -8) {
        *(undefined4 *)(pbVar1 + -8) = *(undefined4 *)(param_3 + 0x34);
        *(undefined4 *)(pbVar1 + -4) = *(undefined4 *)(param_3 + 0x38);
        *(undefined4 *)pbVar1 = *(undefined4 *)(param_3 + 0x3c);
      }
      param_1 = param_1 + 0x40;
      pbVar1 = pbVar1 + 0x40;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_004fc3a0 */

undefined4 FUN_004fc3a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004fc290(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_004fc3e0 */

void __fastcall FUN_004fc3e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar6 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x564);
  *(undefined4 *)(param_1 + 0x564) = 0x3f800000;
  if (*(int *)(param_1 + 0x53c) != 0) {
    iVar5 = 0;
    do {
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0x548) + iVar5);
      iVar2 = *(int *)(param_1 + 0x558);
      local_8 = puVar3[1];
      local_c = *puVar3;
      local_4 = puVar3[2];
      uVar4 = FUN_005404e0(&local_c,uVar1,param_1 + 0x564);
      *(undefined4 *)(iVar2 + uVar6 * 4) = uVar4;
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0xc;
    } while (uVar6 < *(uint *)(param_1 + 0x53c));
  }
  return;
}




/* Function: FUN_004fc470 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004fc470(int param_1)

{
  float fVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  double dVar9;
  undefined8 uVar10;
  int iStack_124;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined1 auStack_d4 [4];
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_b8 [12];
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [12];
  undefined1 auStack_94 [60];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined1 auStack_48 [68];
  
  if (*(char *)(param_1 + 0x6b0) == '\0') {
    return 0;
  }
  if (((*(HANDLE *)(param_1 + 0x6cc) != (HANDLE)0x0) && (*(int *)(param_1 + 0x6d0) != 0)) &&
     (DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x6cc),0), DVar2 == 0)) {
    *(int *)(param_1 + 0x570) = *(int *)(param_1 + 0x570) + 1;
    if (*(char *)(param_1 + 4) != '\0') {
      local_110 = 0.0;
      iVar3 = (**(code **)(**(int **)(param_1 + 0x534) + 0x2c))
                        (*(int **)(param_1 + 0x534),0,0,&local_110);
      if (iVar3 < 0) {
        ReleaseSemaphore(*(HANDLE *)(param_1 + 0x6cc),1,(LPLONG)0x0);
        return 0;
      }
      uVar4 = 0;
      if (*(int *)(param_1 + 0x53c) != 0) {
        iVar3 = 0;
        do {
          iVar7 = uVar4 * 4;
          uVar4 = uVar4 + 1;
          *(undefined4 *)(iVar3 + 0xc + iStack_124) =
               *(undefined4 *)(*(int *)(param_1 + 0x558) + iVar7);
          iVar3 = iVar3 + 0x10;
        } while (uVar4 < *(uint *)(param_1 + 0x53c));
      }
      (**(code **)(**(int **)(param_1 + 0x534) + 0x30))(*(int **)(param_1 + 0x534));
    }
    fVar1 = *(float *)(param_1 + 0x578) + *(float *)(param_1 + 0x57c);
    *(undefined4 *)(param_1 + 0x574) = 0;
    *(float *)(param_1 + 0x578) = fVar1;
    *(float *)(param_1 + 0x580) = fVar1;
    FUN_0053f4d0(0x41f00000,0x42340000,0,0xaf,fVar1,(undefined4 *)(param_1 + 0x584));
    FUN_0053f4d0(0x41f00000,0x42340000,0,0xaf,
                 *(float *)(param_1 + 0x578) + *(float *)(param_1 + 0x57c),param_1 + 0x588);
    *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_1 + 0x590);
    *(undefined4 *)(param_1 + 0x58c) = *(undefined4 *)(param_1 + 0x584);
    if (*(HANDLE *)(param_1 + 0x568) != (HANDLE)0x0) {
      TerminateThread(*(HANDLE *)(param_1 + 0x568),0);
      CloseHandle(*(HANDLE *)(param_1 + 0x568));
      *(undefined4 *)(param_1 + 0x568) = 0;
    }
    if (*(HANDLE *)(param_1 + 0x6cc) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x6cc));
      *(undefined4 *)(param_1 + 0x6cc) = 0;
    }
    if (*(HANDLE *)(param_1 + 0x6d0) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x6d0));
      *(undefined4 *)(param_1 + 0x6d0) = 0;
    }
  }
  fVar1 = *(float *)(param_1 + 0x574) * *(float *)(param_1 + 0x57c) + *(float *)(param_1 + 0x578);
  *(float *)(param_1 + 0x580) = fVar1;
  if (_DAT_00590fb4 <= fVar1) {
    fVar1 = *(float *)(param_1 + 0x580);
    do {
      fVar1 = fVar1 - _DAT_00590fb4;
    } while (_DAT_00590fb4 <= fVar1);
    *(float *)(param_1 + 0x580) = fVar1;
  }
  iVar3 = *(int *)(param_1 + 0x6bc);
  *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(param_1 + 0x580);
  *(float *)(param_1 + 0x58c) =
       (*(float *)(param_1 + 0x588) - *(float *)(param_1 + 0x584)) * *(float *)(param_1 + 0x574) +
       *(float *)(param_1 + 0x584);
  *(float *)(param_1 + 0x598) =
       (*(float *)(param_1 + 0x594) - *(float *)(param_1 + 0x590)) * *(float *)(param_1 + 0x574) +
       *(float *)(param_1 + 0x590);
  if (iVar3 != *(int *)(param_1 + 0x6c0)) {
    do {
      fVar8 = (float10)FUN_0041ce10();
      fVar1 = (float)((fVar8 * (float10)*(float *)(iVar3 + 0x30) + (float10)*(float *)(iVar3 + 0x2c)
                      ) / ((float10)_DAT_005b9004 + (float10)_DAT_005b9004));
      dVar9 = floor((double)fVar1);
      local_110 = _DAT_005b9004 + _DAT_005b9004;
      fVar1 = (fVar1 - (float)dVar9) * local_110;
      if (fVar1 < _DAT_00582ad8) {
        fVar1 = fVar1 + local_110;
      }
      *(float *)(iVar3 + 0x2c) = fVar1;
      fVar8 = (float10)FUN_0041ce10();
      fVar1 = (float)((fVar8 * (float10)*(float *)(iVar3 + 0x28) + (float10)*(float *)(iVar3 + 0x24)
                      ) / ((float10)_DAT_005b9004 + (float10)_DAT_005b9004));
      dVar9 = floor((double)fVar1);
      local_110 = _DAT_005b9004 + _DAT_005b9004;
      fVar1 = (fVar1 - (float)dVar9) * local_110;
      if (fVar1 < _DAT_00582ad8) {
        fVar1 = fVar1 + local_110;
      }
      *(float *)(iVar3 + 0x24) = fVar1;
      iVar3 = iVar3 + 0x40;
    } while (iVar3 != *(int *)(param_1 + 0x6c0));
  }
  if (*(char *)(param_1 + 4) != '\0') {
    if (*(int **)(param_1 + 0x528) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x528) + 0x20))();
    }
    if (*(int **)(param_1 + 0x52c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x52c) + 0x20))();
    }
  }
  uVar5 = FUN_004fc1e0(auStack_d4);
  FUN_004fbee0(&fStack_10c,uVar5);
  FUN_0053f780(&fStack_e0,*(undefined4 *)(param_1 + 0x58c),*(undefined4 *)(param_1 + 0x598),
               &fStack_11c);
  FUN_0041d410();
  if (_DAT_00582ad8 < fStack_118) {
    fStack_118 = -fStack_118;
  }
  FUN_0041e470();
  FUN_00407260();
  iVar3 = *(int *)(param_1 + 0x6bc);
  if (iVar3 != *(int *)(param_1 + 0x6c0)) {
    iVar7 = iVar3 + 0x34;
    do {
      FUN_005469b0(auStack_48,iVar7,*(undefined4 *)(iVar7 + -8));
      uVar10 = CONCAT44(&fStack_e0,auStack_48);
      uVar5 = FUN_0041ddb0(auStack_b8);
      FUN_005488cc(auStack_a0,uVar5,uVar10);
      FUN_0041d510();
      fStack_ec = fStack_e0 * _DAT_00590fd4 + fStack_58;
      fStack_e8 = fStack_dc * _DAT_00590fd4 + fStack_54;
      fStack_e4 = fStack_d8 * _DAT_00590fd4 + fStack_50;
      FUN_0041d510(auStack_ac);
      pfVar6 = (float *)FUN_0041d410();
      if (pfVar6 != &fStack_ec) {
        fStack_ec = *pfVar6;
        fStack_e8 = pfVar6[1];
        fStack_e4 = pfVar6[2];
      }
      fVar1 = -((fStack_118 + _DAT_00583354) * fStack_e8);
      if (fStack_e8 < _DAT_00582ad8) {
        fStack_d0 = _DAT_0058a658 * fVar1;
        fStack_cc = fVar1 * _DAT_00590fd0;
        fStack_10c = fStack_d0 + fStack_10c;
        fStack_108 = fStack_108 + fStack_d0;
        fStack_104 = fStack_104 + fStack_cc;
        if (_DAT_00583354 < fStack_10c) {
          fStack_10c = 1.0;
        }
        if (_DAT_00583354 < fStack_108) {
          fStack_108 = 1.0;
        }
        if (_DAT_00583354 < fStack_104) {
          fStack_104 = 1.0;
        }
        if (_DAT_00583354 < fStack_100) {
          fStack_100 = 1.0;
        }
        FUN_0041d5b0(auStack_94,&fStack_ec,fStack_118 + _DAT_00583354);
        pfVar6 = (float *)FUN_0041d5b0(&fStack_fc);
        fStack_11c = fStack_11c + *pfVar6;
        fStack_118 = fStack_118 + pfVar6[1];
        fStack_114 = fStack_114 + pfVar6[2];
      }
      FUN_00407300();
      iVar3 = iVar3 + 0x40;
      iVar7 = iVar7 + 0x40;
    } while (iVar3 != *(int *)(param_1 + 0x6c0));
  }
  fVar1 = SQRT(fStack_114 * fStack_114 + fStack_11c * fStack_11c + fStack_118 * fStack_118);
  if ((float)_DAT_00587c48 <= fVar1) {
    fVar1 = _DAT_00583354 / fVar1;
    fStack_11c = fStack_11c * fVar1;
    fStack_118 = fStack_118 * fVar1;
    fStack_114 = fStack_114 * fVar1;
  }
  else {
    fStack_11c = 0.0;
    fStack_118 = 1.0;
    fStack_114 = 0.0;
  }
  *(float *)(param_1 + 0x5dc) = fStack_11c;
  *(float *)(param_1 + 0x5e0) = fStack_118;
  *(float *)(param_1 + 0x5e4) = fStack_114;
  *(float *)(param_1 + 0x644) = fStack_11c;
  *(float *)(param_1 + 0x648) = fStack_118;
  *(float *)(param_1 + 0x64c) = fStack_114;
  FUN_0041cb40();
  fVar8 = (float10)FUN_00447000();
  fVar1 = (float)((float10)fStack_100 * fVar8);
  *(float *)(param_1 + 0x5a0) = (float)((float10)fStack_10c * fVar8);
  *(float *)(param_1 + 0x5a4) = (float)((float10)fStack_108 * fVar8);
  fStack_fc = fVar1 * _DAT_00590fcc;
  *(float *)(param_1 + 0x5a8) = (float)((float10)fStack_104 * fVar8);
  *(float *)(param_1 + 0x5ac) = fVar1;
  *(float *)(param_1 + 0x5b0) = (float)((float10)fStack_10c * fVar8);
  *(float *)(param_1 + 0x5b4) = (float)((float10)fStack_108 * fVar8);
  *(float *)(param_1 + 0x5c0) = fStack_fc;
  *(float *)(param_1 + 0x5b8) = (float)((float10)fStack_104 * fVar8);
  *(float *)(param_1 + 0x5c4) = fStack_fc;
  *(float *)(param_1 + 0x5bc) = fVar1;
  *(float *)(param_1 + 0x5c8) = fStack_fc;
  *(float *)(param_1 + 0x5cc) = fStack_fc;
  fStack_f8 = fStack_fc;
  fStack_f4 = fStack_fc;
  fStack_f0 = fStack_fc;
  FUN_00407300();
  return 1;
}




/* Function: FUN_004fd710 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004fd710(LPVOID param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  HANDLE pvVar3;
  
  bVar2 = param_2 < _DAT_00582ad8;
  *(float *)((int)param_1 + 0x578) = param_2;
  if (bVar2) {
    fVar1 = *(float *)((int)param_1 + 0x578);
    do {
      fVar1 = fVar1 + _DAT_00590fb4;
    } while (fVar1 < _DAT_00582ad8);
    *(float *)((int)param_1 + 0x578) = fVar1;
  }
  if (_DAT_00590fb4 <= *(float *)((int)param_1 + 0x578)) {
    fVar1 = *(float *)((int)param_1 + 0x578);
    do {
      fVar1 = fVar1 - _DAT_00590fb4;
    } while (_DAT_00590fb4 <= fVar1);
    *(float *)((int)param_1 + 0x578) = fVar1;
  }
  if (((*(int *)((int)param_1 + 0x6cc) == 0) || (*(int *)((int)param_1 + 0x6d0) == 0)) ||
     (*(int *)((int)param_1 + 0x568) == 0)) {
    pvVar3 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
    *(HANDLE *)((int)param_1 + 0x6cc) = pvVar3;
    pvVar3 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
    *(HANDLE *)((int)param_1 + 0x6d0) = pvVar3;
    pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_004fd5a0,param_1
                          ,4,(LPDWORD)&param_2);
    *(HANDLE *)((int)param_1 + 0x568) = pvVar3;
    SetThreadPriority(pvVar3,0);
    ResumeThread(*(HANDLE *)((int)param_1 + 0x568));
  }
  return;
}




/* Function: FUN_004fd800 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_004fd800(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057e9b1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    local_8 = 1;
    if (param_3 !=
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_3,param_1);
      *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    }
    param_3 = param_3 + 0x40;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}




/* Function: FUN_004fd8d0 */

void FUN_004fd8d0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,int param_2,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057e9d1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 !=
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,param_3);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x20);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x28);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 0x30);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_3 + 0x34);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_3 + 0x38);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_3 + 0x3c);
    }
    param_1 = param_1 + 0x40;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}




/* Function: FUN_004fd9a0 */

void __thiscall
FUN_004fd9a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004fd800(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_004fd9d0 */

int __thiscall FUN_004fd9d0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_004fd8d0(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x40 + param_2;
}




/* Function: FUN_004fda00 */

void FUN_004fda00(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
  }
  return;
}




/* Function: FUN_004fda30 */

void __thiscall
FUN_004fda30(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            uint param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  uint uVar1;
  int iVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined4 uVar4;
  int iVar5;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_74;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_70;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_5c [28];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_1c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057e9e8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  local_70 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             0x4fda63;
  ExceptionList = &local_10;
  local_18 = param_1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_5c,param_4);
  local_40 = *(undefined4 *)(param_4 + 0x1c);
  local_3c = *(undefined4 *)(param_4 + 0x20);
  local_38 = *(undefined4 *)(param_4 + 0x24);
  local_34 = *(undefined4 *)(param_4 + 0x28);
  local_30 = *(undefined4 *)(param_4 + 0x2c);
  local_2c = *(undefined4 *)(param_4 + 0x30);
  local_28 = *(undefined4 *)(param_4 + 0x34);
  local_24 = *(undefined4 *)(param_4 + 0x38);
  local_20 = *(undefined4 *)(param_4 + 0x3c);
  iVar2 = *(int *)(param_1 + 4);
  iVar5 = 0;
  local_8 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0xc) - iVar2 >> 6;
  }
  if (param_3 != 0) {
    if (iVar2 != 0) {
      iVar5 = *(int *)(param_1 + 8) - iVar2 >> 6;
    }
    if (0x3ffffffU - iVar5 < param_3) {
      FUN_004fc210();
    }
    else {
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar2 >> 6;
      }
      if (uVar1 < iVar5 + param_3) {
        if (0x3ffffff - (uVar1 >> 1) < uVar1) {
          uVar1 = 0;
        }
        else {
          uVar1 = uVar1 + (uVar1 >> 1);
        }
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar2 >> 6;
        }
        if (uVar1 < iVar5 + param_3) {
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 8) - iVar2 >> 6;
          }
          uVar1 = iVar2 + param_3;
        }
        local_70 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x4fdb42;
        pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        local_74 = pbVar3;
        local_70 = param_1;
        local_1c = pbVar3;
        iVar2 = FUN_004fd800(*(undefined4 *)(param_1 + 4));
        local_74 = local_5c;
        local_70 = param_1;
        FUN_004fd8d0(iVar2);
        local_74 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (iVar2 + param_3 * 0x40);
        local_70 = param_1;
        FUN_004fd800(param_2);
        iVar2 = *(int *)(param_1 + 4);
        local_8 = 0;
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar2 >> 6;
        }
        if (iVar2 != 0) {
          local_74 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )0x4fdbdc;
          local_70 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )iVar2;
          FUN_004fda00();
                    /* WARNING: Subroutine does not return */
          local_70 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&UNK_004fdbe5;
          operator_delete(*(void **)(param_1 + 4));
        }
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 4) = pbVar3;
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 0xc) = pbVar3 + uVar1 * 0x40;
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 8) = pbVar3 + (param_3 + iVar5) * 0x40;
      }
      else {
        local_70 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(param_1 + 8);
        if ((uint)((int)local_70 - (int)param_2 >> 6) < param_3) {
          local_1c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&local_74;
          local_74 = param_2;
          FUN_004fd9a0();
          local_74 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)(param_1 + 8);
          local_70 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(param_3 - ((int)local_74 - (int)param_2 >> 6));
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_004fd9d0();
          iVar2 = *(int *)(param_1 + 8) + param_3 * 0x40;
          *(int *)(param_1 + 8) = iVar2;
          local_70 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(iVar2 + param_3 * -0x40);
          local_8 = 0;
        }
        else {
          pbVar3 = local_70 + param_3 * -0x40;
          local_74 = pbVar3;
          local_1c = local_70;
          uVar4 = FUN_004fd9a0();
          *(undefined4 *)(param_1 + 8) = uVar4;
          local_74 = param_2;
          local_70 = pbVar3;
          FUN_004fc3a0();
          local_70 = param_2 + param_3 * 0x40;
        }
        local_74 = param_2;
        FUN_004fc320();
      }
    }
  }
  local_8 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_5c);
  ExceptionList = local_10;
  return;
}





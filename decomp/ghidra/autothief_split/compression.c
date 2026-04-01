/* compression functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_00417f98 */

void FUN_00417f98(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (*(int *)(param_2 + 4) < *(int *)(iVar1 + 0xc)) {
    iVar3 = *(int *)(iVar1 + 8);
    if (param_2 == *(int *)(iVar3 + *(int *)(param_2 + 4) * 4)) {
      return;
    }
  }
  else {
    iVar3 = *(int *)(iVar1 + 8);
  }
  iVar2 = FUN_00419e0c(param_1[3],iVar3,*(int *)(iVar1 + 0xc),1,4,"constant table overflow",
                       0x3ffffff);
  *(int *)(iVar1 + 8) = iVar2;
  iVar3 = *(int *)(iVar1 + 0xc);
  *(int *)(iVar1 + 0xc) = iVar3 + 1;
  *(int *)(iVar2 + iVar3 * 4) = param_2;
  *(int *)(param_2 + 4) = iVar3;
  return;
}




/* Function: FUN_00418b6c */

void FUN_00418b6c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x28);
  iVar1 = *piVar6;
  if (0 < *(short *)(param_2 + 8)) {
    puVar4 = param_2 + 0xb;
    iVar5 = 0;
    do {
      FUN_0041b19c(param_1,puVar4,1,piVar6);
      puVar4 = puVar4 + 3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(short *)(param_2 + 8));
  }
  iVar3 = FUN_00419e0c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(iVar1 + 0x10),
                       *(undefined4 *)(iVar1 + 0x14),1,4,"constant table overflow",0x1ffff);
  *(int *)(iVar1 + 0x10) = iVar3;
  uVar2 = *param_2;
  iVar5 = *(int *)(iVar1 + 0x14);
  *(int *)(iVar1 + 0x14) = iVar5 + 1;
  *(undefined4 *)(iVar3 + iVar5 * 4) = uVar2;
  FUN_0041aae4(piVar6,0x30,*(int *)(iVar1 + 0x14) + -1,(int)*(short *)(param_2 + 8));
  return;
}




/* Function: FUN_0041af58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0041af58(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xffffff80) != 0) {
      piVar1 = (int *)*param_1;
      iVar2 = piVar1[1];
      iVar3 = iVar2 + -1;
      iVar4 = 0x14;
      if (0x14 < iVar2) {
        iVar4 = iVar2;
      }
      if (iVar3 < iVar4 + -0x14) {
        iVar5 = *piVar1;
      }
      else {
        iVar5 = *piVar1;
        do {
          if ((double)CONCAT44(param_3,param_2) == *(double *)(iVar5 + iVar3 * 8)) {
            return iVar3;
          }
          iVar3 = iVar3 + -1;
        } while (iVar4 + -0x14 <= iVar3);
      }
      iVar2 = FUN_00419e0c(param_1[3],iVar5,iVar2,1,8,"constant table overflow",0x3ffffff);
      *piVar1 = iVar2;
      iVar3 = piVar1[1];
      piVar1[1] = iVar3 + 1;
      *(ulonglong *)(iVar2 + iVar3 * 8) = CONCAT44(param_3,param_2);
      return iVar3;
    }
    if (_DAT_005b71d0 != 0) break;
    FUN_004d34fc();
  }
  piVar1 = (int *)*param_1;
  iVar3 = piVar1[1];
  iVar2 = 0x14;
  if (0x14 < iVar3) {
    iVar2 = iVar3;
  }
  iVar4 = iVar3 + -1;
  if (iVar4 < iVar2 + -0x14) {
    iVar5 = *piVar1;
  }
  else {
    iVar5 = *piVar1;
    do {
      if (*(double *)(iVar5 + iVar4 * 8) == (double)CONCAT44(param_3,param_2)) {
        return iVar4;
      }
      iVar4 = iVar4 + -1;
    } while (iVar2 + -0x14 <= iVar4);
  }
  iVar2 = FUN_00419e0c(param_1[3],iVar5,iVar3,1,8,"constant table overflow",0x3ffffff);
  *piVar1 = iVar2;
  iVar3 = piVar1[1];
  piVar1[1] = iVar3 + 1;
  *(undefined4 *)(iVar2 + iVar3 * 8) = param_2;
  *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = param_3;
  return iVar3;
}




/* Function: FUN_004b350e */

int FUN_004b350e(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  iVar1 = FUN_004ba842(1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = setjmp3(iVar1,0);
  if (iVar2 != 0) {
    FUN_004ba8c7(iVar1,*(undefined4 *)(iVar1 + 0x9c));
    FUN_004ba884(iVar1);
    return 0;
  }
  FUN_004b3477(iVar1,param_2,param_3,param_4);
  if ((param_1 == (char *)0x0) || (*param_1 != '1')) {
    FUN_004b3491(iVar1,"Incompatible libpng version in application and library");
  }
  *(undefined4 *)(iVar1 + 0xa0) = 0x2000;
  uVar3 = FUN_004ba891(iVar1,0x2000);
  *(undefined4 *)(iVar1 + 0x9c) = uVar3;
  *(code **)(iVar1 + 0x84) = FUN_004b58a8;
  *(code **)(iVar1 + 0x88) = thunk_FUN_004ba8c7;
  *(int *)(iVar1 + 0x8c) = iVar1;
  iVar2 = FUN_004ba4c4(iVar1 + 100,"1.1.3",0x38);
  if (iVar2 == -6) {
    pcVar4 = "zlib version error";
  }
  else if ((iVar2 == -4) || (iVar2 == -2)) {
    pcVar4 = "zlib memory error";
  }
  else {
    if (iVar2 == 0) goto LAB_004b35ed;
    pcVar4 = "Unknown zlib error";
  }
  FUN_004b3491(iVar1,pcVar4);
LAB_004b35ed:
  *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(iVar1 + 0x9c);
  *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar1 + 0xa0);
  FUN_004b5821(iVar1,0,0);
  return iVar1;
}




/* Function: FUN_004b54c6 */

void FUN_004b54c6(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xdc) == 0) {
    FUN_004b3491(param_1,"NULL row buffer");
  }
  if ((*(byte *)(param_1 + 0x61) & 0x10) != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x03') {
      FUN_004b4a42(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1,*(undefined4 *)(param_1 + 0x104),
                   *(undefined4 *)(param_1 + 0x15c),*(undefined2 *)(param_1 + 0x10a));
    }
    else {
      if (*(short *)(param_1 + 0x10a) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_1 + 0x160;
      }
      FUN_004b4c4a(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1,iVar1);
    }
  }
  if (((*(byte *)(param_1 + 0x61) & 0x20) != 0) && (*(char *)(param_1 + 0x116) != '\x03')) {
    FUN_004b46f4(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1,*(undefined4 *)(param_1 + 0x138),
                 *(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 300));
  }
  if ((*(byte *)(param_1 + 0x61) & 4) != 0) {
    FUN_004b4478(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1);
  }
  if ((*(byte *)(param_1 + 0x60) & 0x40) != 0) {
    FUN_004b4f9c(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1,*(undefined4 *)(param_1 + 0x174),
                 *(undefined4 *)(param_1 + 0x178));
    if (*(int *)(param_1 + 0xf4) == 0) {
      FUN_004b3491(param_1,"png_do_dither returned rowbytes=0");
    }
  }
  if ((*(byte *)(param_1 + 0x60) & 8) != 0) {
    FUN_004b4301(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1,param_1 + 0x155);
  }
  if ((*(byte *)(param_1 + 0x60) & 4) != 0) {
    FUN_004b41f1(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1);
  }
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    FUN_004b4008(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1);
  }
  if ((*(byte *)(param_1 + 0x61) & 0x80) != 0) {
    FUN_004b44bc(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1,*(undefined2 *)(param_1 + 0x11e),
                 *(undefined4 *)(param_1 + 0x5c));
  }
  if ((*(byte *)(param_1 + 0x60) & 0x10) != 0) {
    FUN_004b3fdb(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1);
  }
  return;
}




/* Function: FUN_004ca151 */

void FUN_004ca151(uint *param_1,int *param_2,byte *param_3)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint *puVar5;
  byte *pbVar6;
  undefined4 uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 uStack_38;
  undefined4 uStack_34;
  byte *pbStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  byte *pbStack_1c;
  byte *local_18;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  uint local_8;
  
  puVar5 = param_1;
  local_c = (byte *)param_2[1];
  local_8 = param_1[8];
  local_10 = (byte *)param_1[0xd];
  if (local_10 < (byte *)param_1[0xc]) {
    local_14 = (byte *)param_1[0xc] + (-1 - (int)local_10);
  }
  else {
    local_14 = (byte *)(param_1[0xb] - (int)local_10);
  }
  uVar8 = *param_1;
  param_1 = (uint *)param_1[7];
  pbVar9 = (byte *)*param_2;
  while (local_18 = pbVar9, uVar8 < 10) {
    switch((&PTR_LAB_004ca8c4)[uVar8]) {
    case (undefined *)0x4ca1f8:
      for (; pbVar9 = local_18, param_1 < (byte *)0x3; param_1 = (uint *)((int)param_1 + 8)) {
        if (local_c == (byte *)0x0) goto LAB_004ca7f1;
        param_3 = (byte *)0x0;
        local_c = local_c + -1;
        local_8 = local_8 | (uint)*local_18 << ((byte)param_1 & 0x1f);
        local_18 = local_18 + 1;
      }
      uVar8 = (local_8 & 7) >> 1;
      puVar5[6] = local_8 & 1;
      if (uVar8 == 0) {
        uVar8 = (uint)((int)param_1 + -3) & 7;
        local_8 = (local_8 >> 3) >> (sbyte)uVar8;
        param_1 = (uint *)((byte *)((int)param_1 + -3) + -uVar8);
        *puVar5 = 1;
      }
      else if (uVar8 == 1) {
        FUN_004ccf71(&uStack_2c,&uStack_28,&uStack_24,&uStack_20,param_2);
        uVar8 = FUN_004cc4c1(uStack_2c,uStack_28,uStack_24,uStack_20,param_2);
        puVar5[1] = uVar8;
        if (uVar8 == 0) goto LAB_004ca865;
        local_8 = local_8 >> 3;
        param_1 = (uint *)((int)param_1 + -3);
        *puVar5 = 6;
      }
      else {
        if (uVar8 == 2) {
          local_8 = local_8 >> 3;
          uVar8 = 3;
          param_1 = (uint *)((int)param_1 + -3);
          goto LAB_004ca253;
        }
        if (uVar8 == 3) {
          *puVar5 = 9;
          param_2[6] = (int)"invalid block type";
          puVar5[8] = local_8 >> 3;
          param_1 = (uint *)((int)param_1 + -3);
          param_3 = (byte *)0xfffffffd;
          goto LAB_004ca1a3;
        }
      }
      break;
    case (undefined *)0x4ca2c2:
      for (; pbVar9 = local_18, param_1 < (byte *)0x20; param_1 = (uint *)((int)param_1 + 8)) {
        if (local_c == (byte *)0x0) goto LAB_004ca7f1;
        param_3 = (byte *)0x0;
        local_c = local_c + -1;
        local_8 = local_8 | (uint)*local_18 << ((byte)param_1 & 0x1f);
        local_18 = local_18 + 1;
      }
      if (~local_8 >> 0x10 != (local_8 & 0xffff)) {
        *puVar5 = 9;
        param_2[6] = (int)"invalid stored block lengths";
        goto LAB_004ca7a9;
      }
      puVar5[1] = local_8 & 0xffff;
      param_1 = (uint *)0x0;
      local_8 = 0;
      if (puVar5[1] == 0) goto LAB_004ca404;
      uVar8 = 2;
LAB_004ca253:
      *puVar5 = uVar8;
      break;
    case (undefined *)0x4ca323:
      if (local_c == (byte *)0x0) {
LAB_004ca7f1:
        puVar5[8] = local_8;
        puVar5[7] = (uint)param_1;
        param_2[1] = 0;
        goto LAB_004ca1ac;
      }
      if (local_14 == (byte *)0x0) {
        local_14 = (byte *)0x0;
        if (local_10 == (byte *)puVar5[0xb]) {
          pbVar6 = (byte *)puVar5[0xc];
          pbVar3 = (byte *)puVar5[10];
          if (pbVar3 != pbVar6) {
            if (pbVar3 < pbVar6) {
              local_14 = pbVar6 + (-1 - (int)pbVar3);
            }
            else {
              local_14 = (byte *)puVar5[0xb] + -(int)pbVar3;
            }
            local_10 = pbVar3;
            if (local_14 != (byte *)0x0) goto LAB_004ca3c4;
          }
        }
        puVar5[0xd] = (uint)local_10;
        param_3 = (byte *)FUN_004ccfa0(puVar5,param_2,param_3);
        pbStack_1c = (byte *)puVar5[0xc];
        local_10 = (byte *)puVar5[0xd];
        if (local_10 < pbStack_1c) {
          local_14 = pbStack_1c + (-1 - (int)local_10);
        }
        else {
          local_14 = (byte *)(puVar5[0xb] - (int)local_10);
        }
        pbStack_30 = (byte *)puVar5[0xb];
        if (local_10 == pbStack_30) {
          pbVar6 = (byte *)puVar5[10];
          if (pbVar6 != pbStack_1c) {
            local_10 = pbVar6;
            if (pbVar6 < pbStack_1c) {
              local_14 = pbStack_1c + (-1 - (int)pbVar6);
            }
            else {
              local_14 = pbStack_30 + -(int)pbVar6;
            }
          }
        }
        if (local_14 == (byte *)0x0) {
          puVar5[8] = local_8;
          puVar5[7] = (uint)param_1;
          param_2[1] = (int)local_c;
          param_2[2] = (int)(pbVar9 + (param_2[2] - *param_2));
          goto LAB_004ca1b6;
        }
      }
LAB_004ca3c4:
      param_3 = (byte *)0x0;
      pbVar9 = (byte *)puVar5[1];
      if (local_c < (byte *)puVar5[1]) {
        pbVar9 = local_c;
      }
      if (local_14 < pbVar9) {
        pbVar9 = local_14;
      }
      pbVar6 = local_18 + (int)pbVar9;
      local_c = local_c + -(int)pbVar9;
      pbVar3 = local_10 + (int)pbVar9;
      local_14 = local_14 + -(int)pbVar9;
      for (uVar8 = (uint)pbVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)local_10 = *(undefined4 *)local_18;
        local_18 = local_18 + 4;
        local_10 = local_10 + 4;
      }
      for (uVar8 = (uint)pbVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *local_10 = *local_18;
        local_18 = local_18 + 1;
        local_10 = local_10 + 1;
      }
      puVar1 = puVar5 + 1;
      *puVar1 = *puVar1 - (int)pbVar9;
      local_18 = pbVar6;
      local_10 = pbVar3;
      if (*puVar1 == 0) {
LAB_004ca404:
        uVar8 = -(uint)(puVar5[6] != 0) & 7;
        goto LAB_004ca253;
      }
      break;
    case (undefined *)0x4ca413:
      for (; param_1 < (byte *)0xe; param_1 = (uint *)((int)param_1 + 8)) {
        if (local_c == (byte *)0x0) goto LAB_004ca7f1;
        param_3 = (byte *)0x0;
        local_c = local_c + -1;
        local_8 = local_8 | (uint)*pbVar9 << ((byte)param_1 & 0x1f);
        pbVar9 = pbVar9 + 1;
      }
      puVar5[1] = local_8 & 0x3fff;
      if ((0x1d < (local_8 & 0x1f)) || (uVar8 = (local_8 & 0x3fff) >> 5 & 0x1f, 0x1d < uVar8)) {
        *puVar5 = 9;
        param_2[6] = (int)"too many length or distance symbols";
        goto LAB_004ca7a9;
      }
      uVar8 = (*(code *)param_2[8])(param_2[10],uVar8 + 0x102 + (local_8 & 0x1f),4);
      puVar5[3] = uVar8;
      if (uVar8 != 0) {
        local_8 = local_8 >> 0xe;
        param_1 = (uint *)((int)param_1 + -0xe);
        puVar5[2] = 0;
        *puVar5 = 4;
        goto LAB_004ca4e2;
      }
LAB_004ca865:
      param_3 = (byte *)0xfffffffc;
      goto LAB_004ca19a;
    case (undefined *)0x4ca4e2:
LAB_004ca4e2:
      while (puVar5[2] < (puVar5[1] >> 10) + 4) {
        for (; param_1 < (byte *)0x3; param_1 = (uint *)((int)param_1 + 8)) {
          if (local_c == (byte *)0x0) goto LAB_004ca7f1;
          param_3 = (byte *)0x0;
          local_c = local_c + -1;
          local_8 = local_8 | (uint)*pbVar9 << ((byte)param_1 & 0x1f);
          pbVar9 = pbVar9 + 1;
        }
        *(uint *)(puVar5[3] + *(int *)(&DAT_0058eeb0 + puVar5[2] * 4) * 4) = local_8 & 7;
        puVar5[2] = puVar5[2] + 1;
        param_1 = (uint *)((int)param_1 + -3);
        local_8 = local_8 >> 3;
      }
      while (puVar5[2] < 0x13) {
        *(undefined4 *)(puVar5[3] + *(int *)(&DAT_0058eeb0 + puVar5[2] * 4) * 4) = 0;
        puVar5[2] = puVar5[2] + 1;
      }
      puVar5[4] = 7;
      local_14 = (byte *)FUN_004ccdef(puVar5[3],puVar5 + 4,puVar5 + 5,puVar5[9],param_2);
      if (local_14 == (byte *)0x0) {
        puVar5[2] = 0;
        *puVar5 = 5;
        goto LAB_004ca660;
      }
      (*(code *)param_2[9])(param_2[10],puVar5[3]);
      goto LAB_004ca855;
    case (undefined *)0x4ca660:
LAB_004ca660:
      while (puVar5[2] < (puVar5[1] >> 5 & 0x1f) + 0x102 + (puVar5[1] & 0x1f)) {
        for (; param_1 < (byte *)puVar5[4]; param_1 = (uint *)((int)param_1 + 8)) {
          if (local_c == (byte *)0x0) goto LAB_004ca7f1;
          param_3 = (byte *)0x0;
          local_c = local_c + -1;
          local_8 = local_8 | (uint)*pbVar9 << ((byte)param_1 & 0x1f);
          pbVar9 = pbVar9 + 1;
        }
        iVar4 = puVar5[5] + (*(uint *)(&DAT_005b1260 + (int)puVar5[4] * 4) & local_8) * 8;
        bVar2 = *(byte *)(iVar4 + 1);
        local_14 = (byte *)(uint)bVar2;
        pbStack_30 = *(byte **)(iVar4 + 4);
        if (pbStack_30 < (byte *)0x10) {
          local_8 = local_8 >> (bVar2 & 0x1f);
          param_1 = (uint *)((int)param_1 + -(int)local_14);
          *(byte **)(puVar5[3] + puVar5[2] * 4) = pbStack_30;
          puVar5[2] = puVar5[2] + 1;
        }
        else {
          if (pbStack_30 == (byte *)0x12) {
            pbVar6 = (byte *)0x7;
          }
          else {
            pbVar6 = pbStack_30 + -0xe;
          }
          local_18 = (byte *)((uint)(pbStack_30 == (byte *)0x12) * 8 + 3);
          for (; param_1 < pbVar6 + (int)local_14; param_1 = (uint *)((int)param_1 + 8)) {
            if (local_c == (byte *)0x0) goto LAB_004ca7f1;
            param_3 = (byte *)0x0;
            local_c = local_c + -1;
            local_8 = local_8 | (uint)*pbVar9 << ((byte)param_1 & 0x1f);
            pbVar9 = pbVar9 + 1;
          }
          local_8 = local_8 >> (bVar2 & 0x1f);
          local_18 = local_18 + (*(uint *)(&DAT_005b1260 + (int)pbVar6 * 4) & local_8);
          local_8 = local_8 >> ((byte)pbVar6 & 0x1f);
          param_1 = (uint *)((int)param_1 + -(int)(pbVar6 + (int)local_14));
          uVar8 = puVar5[2];
          if ((byte *)((puVar5[1] >> 5 & 0x1f) + 0x102 + (puVar5[1] & 0x1f)) < local_18 + uVar8) {
LAB_004ca809:
            (*(code *)param_2[9])(param_2[10],puVar5[3]);
            *puVar5 = 9;
            param_2[6] = (int)"invalid bit length repeat";
            puVar5[8] = local_8;
            puVar5[7] = (uint)param_1;
            param_2[1] = (int)local_c;
            param_2[2] = (int)(pbVar9 + (param_2[2] - *param_2));
            *param_2 = (int)pbVar9;
            puVar5[0xd] = (uint)local_10;
            FUN_004ccfa0(puVar5,param_2,0xfffffffd);
            return;
          }
          if (pbStack_30 == (byte *)0x10) {
            if (uVar8 == 0) goto LAB_004ca809;
            uVar7 = *(undefined4 *)((puVar5[3] - 4) + uVar8 * 4);
          }
          else {
            uVar7 = 0;
          }
          do {
            *(undefined4 *)(puVar5[3] + uVar8 * 4) = uVar7;
            uVar8 = uVar8 + 1;
            local_18 = local_18 + -1;
          } while (local_18 != (byte *)0x0);
          puVar5[2] = uVar8;
          local_18 = (byte *)0x0;
        }
      }
      puVar5[5] = 0;
      pbStack_1c = (byte *)0x9;
      local_18 = (byte *)0x6;
      local_14 = (byte *)FUN_004cce6e((puVar5[1] & 0x1f) + 0x101,(puVar5[1] >> 5 & 0x1f) + 1,
                                      puVar5[3],&pbStack_1c,&local_18,&uStack_38,&uStack_34,
                                      puVar5[9],param_2);
      (*(code *)param_2[9])(param_2[10],puVar5[3]);
      if (local_14 == (byte *)0x0) {
        uVar8 = FUN_004cc4c1(pbStack_1c,local_18,uStack_38,uStack_34,param_2);
        if (uVar8 == 0) goto LAB_004ca865;
        puVar5[1] = uVar8;
        *puVar5 = 6;
        goto LAB_004ca701;
      }
LAB_004ca855:
      param_3 = local_14;
      if (local_14 == (byte *)0xfffffffd) {
        *puVar5 = 9;
      }
      goto LAB_004ca19a;
    case (undefined *)0x4ca701:
LAB_004ca701:
      puVar5[8] = local_8;
      puVar5[7] = (uint)param_1;
      param_2[1] = (int)local_c;
      param_2[2] = (int)(pbVar9 + (param_2[2] - *param_2));
      *param_2 = (int)pbVar9;
      puVar5[0xd] = (uint)local_10;
      param_3 = (byte *)FUN_004cc4f5(puVar5,param_2,param_3);
      if (param_3 != (byte *)0x1) goto LAB_004ca1bb;
      param_3 = (byte *)0x0;
      FUN_004cca59(puVar5[1],param_2);
      local_c = (byte *)param_2[1];
      local_18 = (byte *)*param_2;
      local_8 = puVar5[8];
      param_1 = (uint *)puVar5[7];
      local_10 = (byte *)puVar5[0xd];
      if (local_10 < (byte *)puVar5[0xc]) {
        local_14 = (byte *)puVar5[0xc] + (-1 - (int)local_10);
      }
      else {
        local_14 = (byte *)(puVar5[0xb] - (int)local_10);
      }
      if (puVar5[6] != 0) {
        *puVar5 = 7;
        goto LAB_004ca872;
      }
      *puVar5 = 0;
      break;
    case (undefined *)0x4ca7a9:
LAB_004ca7a9:
      param_3 = (byte *)0xfffffffd;
      goto LAB_004ca19a;
    case (undefined *)0x4ca872:
LAB_004ca872:
      pbVar9 = local_18;
      puVar5[0xd] = (uint)local_10;
      param_3 = (byte *)FUN_004ccfa0(puVar5,param_2,param_3);
      local_10 = (byte *)puVar5[0xd];
      if ((byte *)puVar5[0xc] == local_10) {
        *puVar5 = 8;
        goto LAB_004ca8bd;
      }
      puVar5[8] = local_8;
      puVar5[7] = (uint)param_1;
      param_2[1] = (int)local_c;
      iVar4 = *param_2;
      *param_2 = (int)pbVar9;
      param_2[2] = (int)(pbVar9 + (param_2[2] - iVar4));
      puVar5[0xd] = (uint)local_10;
      goto LAB_004ca1bb;
    case (undefined *)0x4ca8bd:
LAB_004ca8bd:
      param_3 = (byte *)0x1;
      goto LAB_004ca19a;
    }
    pbVar9 = local_18;
    uVar8 = *puVar5;
  }
  param_3 = (byte *)0xfffffffe;
LAB_004ca19a:
  puVar5[8] = local_8;
LAB_004ca1a3:
  puVar5[7] = (uint)param_1;
  param_2[1] = (int)local_c;
LAB_004ca1ac:
  param_2[2] = (int)(pbVar9 + (param_2[2] - *param_2));
LAB_004ca1b6:
  *param_2 = (int)pbVar9;
  puVar5[0xd] = (uint)local_10;
LAB_004ca1bb:
  FUN_004ccfa0(puVar5,param_2,param_3);
  return;
}




/* Function: FUN_004cc4f5 */

void FUN_004cc4f5(uint param_1,int *param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puStack_18;
  undefined1 *local_10;
  uint local_c;
  byte *local_8;
  
  piVar5 = param_2;
  iVar4 = param_1;
  local_8 = (byte *)*param_2;
  local_c = param_2[1];
  puVar10 = *(undefined1 **)(param_1 + 0x34);
  piVar2 = *(int **)(param_1 + 4);
  param_2 = *(int **)(param_1 + 0x20);
  if (puVar10 < *(undefined1 **)(param_1 + 0x30)) {
    local_10 = *(undefined1 **)(param_1 + 0x30) + (-1 - (int)puVar10);
    param_1 = *(uint *)(param_1 + 0x1c);
  }
  else {
    local_10 = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)puVar10);
    param_1 = *(uint *)(param_1 + 0x1c);
  }
  do {
    puVar9 = puVar10;
    switch(*piVar2) {
    case 0:
      if (((undefined1 *)0x101 < local_10) && (9 < local_c)) {
        *(int **)(iVar4 + 0x20) = param_2;
        *(uint *)(iVar4 + 0x1c) = param_1;
        piVar5[1] = local_c;
        piVar5[2] = (int)(local_8 + (piVar5[2] - *piVar5));
        *piVar5 = (int)local_8;
        *(undefined1 **)(iVar4 + 0x34) = puVar10;
        param_3 = FUN_004cecfd((char)piVar2[4],*(undefined1 *)((int)piVar2 + 0x11),piVar2[5],
                               piVar2[6],iVar4,piVar5);
        puVar10 = *(undefined1 **)(iVar4 + 0x34);
        local_8 = (byte *)*piVar5;
        local_c = piVar5[1];
        param_2 = *(int **)(iVar4 + 0x20);
        param_1 = *(uint *)(iVar4 + 0x1c);
        if (puVar10 < *(undefined1 **)(iVar4 + 0x30)) {
          local_10 = *(undefined1 **)(iVar4 + 0x30) + (-1 - (int)puVar10);
        }
        else {
          local_10 = (undefined1 *)(*(int *)(iVar4 + 0x2c) - (int)puVar10);
        }
        if (param_3 != 0) {
          *piVar2 = (uint)(param_3 != 1) * 2 + 7;
          break;
        }
      }
      piVar2[3] = (uint)*(byte *)(piVar2 + 4);
      piVar2[2] = piVar2[5];
      *piVar2 = 1;
    case 1:
      for (; param_1 < (uint)piVar2[3]; param_1 = param_1 + 8) {
        if (local_c == 0) goto code_r0x004cc9be;
        param_3 = 0;
        local_c = local_c - 1;
        param_2 = (int *)((uint)param_2 | (uint)*local_8 << ((byte)param_1 & 0x1f));
        local_8 = local_8 + 1;
      }
      pbVar6 = (byte *)(piVar2[2] + (*(uint *)(&DAT_005b1260 + piVar2[3] * 4) & (uint)param_2) * 8);
      param_2 = (int *)((uint)param_2 >> (pbVar6[1] & 0x1f));
      param_1 = param_1 - pbVar6[1];
      bVar1 = *pbVar6;
      uVar8 = (uint)bVar1;
      if (uVar8 == 0) {
        pbVar6 = *(byte **)(pbVar6 + 4);
        *piVar2 = 6;
      }
      else {
        if ((bVar1 & 0x10) != 0) {
          piVar2[2] = uVar8 & 0xf;
          piVar2[1] = *(int *)(pbVar6 + 4);
          *piVar2 = 2;
          break;
        }
        if ((bVar1 & 0x40) != 0) {
          if ((bVar1 & 0x20) == 0) {
            *piVar2 = 9;
            piVar5[6] = (int)"invalid literal/length code";
code_r0x004cc9ab:
            param_3 = -3;
            puVar9 = puVar10;
            goto code_r0x004cc96e;
          }
          *piVar2 = 7;
          break;
        }
        piVar2[3] = uVar8;
        pbVar6 = pbVar6 + *(int *)(pbVar6 + 4) * 8;
      }
code_r0x004cc77a:
      piVar2[2] = (int)pbVar6;
      break;
    case 2:
      for (; param_1 < (uint)piVar2[2]; param_1 = param_1 + 8) {
        if (local_c == 0) goto code_r0x004cc9be;
        param_3 = 0;
        local_c = local_c - 1;
        param_2 = (int *)((uint)param_2 | (uint)*local_8 << ((byte)param_1 & 0x1f));
        local_8 = local_8 + 1;
      }
      piVar2[1] = piVar2[1] + (*(uint *)(&DAT_005b1260 + piVar2[2] * 4) & (uint)param_2);
      param_2 = (int *)((uint)param_2 >> ((byte)piVar2[2] & 0x1f));
      param_1 = param_1 - piVar2[2];
      piVar2[3] = (uint)*(byte *)((int)piVar2 + 0x11);
      piVar2[2] = piVar2[6];
      *piVar2 = 3;
    case 3:
      for (; param_1 < (uint)piVar2[3]; param_1 = param_1 + 8) {
        if (local_c == 0) goto code_r0x004cc9be;
        param_3 = 0;
        local_c = local_c - 1;
        param_2 = (int *)((uint)param_2 | (uint)*local_8 << ((byte)param_1 & 0x1f));
        local_8 = local_8 + 1;
      }
      pbVar6 = (byte *)(piVar2[2] + (*(uint *)(&DAT_005b1260 + piVar2[3] * 4) & (uint)param_2) * 8);
      param_2 = (int *)((uint)param_2 >> (pbVar6[1] & 0x1f));
      param_1 = param_1 - pbVar6[1];
      bVar1 = *pbVar6;
      if ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) != 0) {
          *piVar2 = 9;
          piVar5[6] = (int)"invalid distance code";
          goto code_r0x004cc9ab;
        }
        piVar2[3] = (uint)bVar1;
        pbVar6 = pbVar6 + *(int *)(pbVar6 + 4) * 8;
        goto code_r0x004cc77a;
      }
      piVar2[2] = bVar1 & 0xf;
      piVar2[3] = *(int *)(pbVar6 + 4);
      *piVar2 = 4;
      break;
    case 4:
      for (; param_1 < (uint)piVar2[2]; param_1 = param_1 + 8) {
        if (local_c == 0) goto code_r0x004cc9be;
        param_3 = 0;
        local_c = local_c - 1;
        param_2 = (int *)((uint)param_2 | (uint)*local_8 << ((byte)param_1 & 0x1f));
        local_8 = local_8 + 1;
      }
      piVar2[3] = piVar2[3] + (*(uint *)(&DAT_005b1260 + piVar2[2] * 4) & (uint)param_2);
      param_2 = (int *)((uint)param_2 >> ((byte)piVar2[2] & 0x1f));
      param_1 = param_1 - piVar2[2];
      *piVar2 = 5;
    case 5:
      if ((uint)((int)puVar10 - *(int *)(iVar4 + 0x28)) < (uint)piVar2[3]) {
        iVar7 = (*(int *)(iVar4 + 0x2c) - *(int *)(iVar4 + 0x28)) - piVar2[3];
      }
      else {
        iVar7 = -piVar2[3];
      }
      puStack_18 = puVar10 + iVar7;
      while (piVar2[1] != 0) {
        puVar9 = puVar10;
        if (local_10 == (undefined1 *)0x0) {
          if (puVar10 == *(undefined1 **)(iVar4 + 0x2c)) {
            local_10 = *(undefined1 **)(iVar4 + 0x30);
            puVar9 = *(undefined1 **)(iVar4 + 0x28);
            if (local_10 != puVar9) {
              if (puVar9 < local_10) {
                local_10 = local_10 + (-1 - (int)puVar9);
              }
              else {
                local_10 = *(undefined1 **)(iVar4 + 0x2c) + -(int)puVar9;
              }
              puVar10 = puVar9;
              if (local_10 != (undefined1 *)0x0) goto code_r0x004cc891;
            }
          }
          *(undefined1 **)(iVar4 + 0x34) = puVar10;
          param_3 = FUN_004ccfa0(iVar4,piVar5,param_3);
          puVar9 = *(undefined1 **)(iVar4 + 0x34);
          puVar10 = *(undefined1 **)(iVar4 + 0x30);
          if (puVar9 < puVar10) {
            local_10 = puVar10 + (-1 - (int)puVar9);
          }
          else {
            local_10 = (undefined1 *)(*(int *)(iVar4 + 0x2c) - (int)puVar9);
          }
          if ((puVar9 == *(undefined1 **)(iVar4 + 0x2c)) &&
             (puVar3 = *(undefined1 **)(iVar4 + 0x28), puVar10 != puVar3)) {
            puVar9 = puVar3;
            if (puVar3 < puVar10) {
              local_10 = puVar10 + (-1 - (int)puVar3);
            }
            else {
              local_10 = *(undefined1 **)(iVar4 + 0x2c) + -(int)puVar3;
            }
          }
          if (local_10 == (undefined1 *)0x0) goto code_r0x004cc96e;
        }
code_r0x004cc891:
        param_3 = 0;
        *puVar9 = *puStack_18;
        puVar10 = puVar9 + 1;
        puStack_18 = puStack_18 + 1;
        local_10 = local_10 + -1;
        if (puStack_18 == *(undefined1 **)(iVar4 + 0x2c)) {
          puStack_18 = *(undefined1 **)(iVar4 + 0x28);
        }
        piVar2[1] = piVar2[1] + -1;
      }
      *piVar2 = 0;
      break;
    case 6:
      if (local_10 != (undefined1 *)0x0) goto code_r0x004cc950;
      if (puVar10 == *(undefined1 **)(iVar4 + 0x2c)) {
        local_10 = *(undefined1 **)(iVar4 + 0x30);
        puVar9 = *(undefined1 **)(iVar4 + 0x28);
        if (local_10 != puVar9) {
          if (puVar9 < local_10) {
            local_10 = local_10 + (-1 - (int)puVar9);
          }
          else {
            local_10 = *(undefined1 **)(iVar4 + 0x2c) + -(int)puVar9;
          }
          puVar10 = puVar9;
          if (local_10 != (undefined1 *)0x0) goto code_r0x004cc950;
        }
      }
      *(undefined1 **)(iVar4 + 0x34) = puVar10;
      param_3 = FUN_004ccfa0(iVar4,piVar5,param_3);
      puVar9 = *(undefined1 **)(iVar4 + 0x34);
      puVar10 = *(undefined1 **)(iVar4 + 0x30);
      if (puVar9 < puVar10) {
        local_10 = puVar10 + (-1 - (int)puVar9);
      }
      else {
        local_10 = (undefined1 *)(*(int *)(iVar4 + 0x2c) - (int)puVar9);
      }
      if ((puVar9 == *(undefined1 **)(iVar4 + 0x2c)) &&
         (puVar3 = *(undefined1 **)(iVar4 + 0x28), puVar10 != puVar3)) {
        puVar9 = puVar3;
        if (puVar3 < puVar10) {
          local_10 = puVar10 + (-1 - (int)puVar3);
        }
        else {
          local_10 = *(undefined1 **)(iVar4 + 0x2c) + -(int)puVar3;
        }
      }
      if (local_10 == (undefined1 *)0x0) goto code_r0x004cc96e;
code_r0x004cc950:
      param_3 = 0;
      *puVar9 = (char)piVar2[2];
      puVar10 = puVar9 + 1;
      local_10 = local_10 + -1;
      *piVar2 = 0;
      break;
    case 7:
      if (7 < param_1) {
        param_1 = param_1 - 8;
        local_c = local_c + 1;
        local_8 = local_8 + -1;
      }
      *(undefined1 **)(iVar4 + 0x34) = puVar10;
      param_3 = FUN_004ccfa0(iVar4,piVar5,param_3);
      puVar10 = *(undefined1 **)(iVar4 + 0x34);
      if (*(undefined1 **)(iVar4 + 0x30) == puVar10) {
        *piVar2 = 8;
code_r0x004cca2a:
        param_3 = 1;
        puVar9 = puVar10;
code_r0x004cc96e:
        *(int **)(iVar4 + 0x20) = param_2;
        *(uint *)(iVar4 + 0x1c) = param_1;
        piVar5[1] = local_c;
        puVar10 = puVar9;
code_r0x004cc980:
        iVar7 = *piVar5;
        *piVar5 = (int)local_8;
        piVar5[2] = (int)(local_8 + (piVar5[2] - iVar7));
      }
      else {
        *(int **)(iVar4 + 0x20) = param_2;
        *(uint *)(iVar4 + 0x1c) = param_1;
        piVar5[1] = local_c;
        iVar7 = *piVar5;
        *piVar5 = (int)local_8;
        piVar5[2] = (int)(local_8 + (piVar5[2] - iVar7));
      }
      *(undefined1 **)(iVar4 + 0x34) = puVar10;
      FUN_004ccfa0(iVar4,piVar5,param_3);
      return;
    case 8:
      goto code_r0x004cca2a;
    case 9:
      goto code_r0x004cc9ab;
    default:
      param_3 = -2;
      goto code_r0x004cc96e;
    }
  } while( true );
code_r0x004cc9be:
  *(int **)(iVar4 + 0x20) = param_2;
  *(uint *)(iVar4 + 0x1c) = param_1;
  piVar5[1] = 0;
  goto code_r0x004cc980;
}




/* Function: FUN_004cecfd */

undefined4 FUN_004cecfd(uint param_1,uint param_2,int param_3,int param_4,int param_5,byte *param_6)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *local_14;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  piVar3 = (int *)param_6;
  local_c = *(byte **)param_6;
  local_8 = *(uint *)((int)param_6 + 4);
  param_6 = *(byte **)(param_5 + 0x34);
  uVar9 = *(uint *)(param_5 + 0x1c);
  if (param_6 < *(byte **)(param_5 + 0x30)) {
    local_14 = *(byte **)(param_5 + 0x30) + (-1 - (int)param_6);
  }
  else {
    local_14 = (byte *)(*(int *)(param_5 + 0x2c) - (int)param_6);
  }
  uVar8 = *(uint *)(&DAT_005b1260 + param_1 * 4);
  uVar6 = *(uint *)(&DAT_005b1260 + param_2 * 4);
  param_1 = *(uint *)(param_5 + 0x20);
  do {
    for (; uVar9 < 0x14; uVar9 = uVar9 + 8) {
      local_8 = local_8 - 1;
      param_1 = param_1 | (uint)*local_c << ((byte)uVar9 & 0x1f);
      local_c = local_c + 1;
    }
    pbVar4 = (byte *)(param_3 + (uVar8 & param_1) * 8);
    bVar1 = *pbVar4;
LAB_004ceda2:
    uVar7 = (uint)bVar1;
    if (uVar7 != 0) {
      param_1 = param_1 >> (pbVar4[1] & 0x1f);
      uVar9 = uVar9 - pbVar4[1];
      if ((bVar1 & 0x10) != 0) {
        uVar7 = uVar7 & 0xf;
        local_10 = (*(uint *)(&DAT_005b1260 + uVar7 * 4) & param_1) + *(int *)(pbVar4 + 4);
        param_1 = param_1 >> (sbyte)uVar7;
        for (uVar9 = uVar9 - uVar7; uVar9 < 0xf; uVar9 = uVar9 + 8) {
          local_8 = local_8 - 1;
          param_1 = param_1 | (uint)*local_c << ((byte)uVar9 & 0x1f);
          local_c = local_c + 1;
        }
        pbVar4 = (byte *)(param_4 + (uVar6 & param_1) * 8);
        param_1 = param_1 >> (pbVar4[1] & 0x1f);
        uVar9 = uVar9 - pbVar4[1];
        while( true ) {
          bVar1 = *pbVar4;
          if ((bVar1 & 0x10) != 0) {
            uVar7 = bVar1 & 0xf;
            for (; uVar9 < uVar7; uVar9 = uVar9 + 8) {
              local_8 = local_8 - 1;
              param_1 = param_1 | (uint)*local_c << ((byte)uVar9 & 0x1f);
              local_c = local_c + 1;
            }
            param_2 = (*(uint *)(&DAT_005b1260 + uVar7 * 4) & param_1) + *(int *)(pbVar4 + 4);
            local_14 = local_14 + -local_10;
            param_1 = param_1 >> (sbyte)uVar7;
            uVar9 = uVar9 - uVar7;
            if ((uint)((int)param_6 - *(int *)(param_5 + 0x28)) < param_2) {
              param_2 = (*(int *)(param_5 + 0x28) - (int)param_6) + param_2;
              pbVar5 = (byte *)(*(int *)(param_5 + 0x2c) - param_2);
              pbVar4 = param_6;
              if (param_2 < local_10) {
                local_10 = local_10 - param_2;
                do {
                  bVar1 = *pbVar5;
                  pbVar4 = param_6 + 1;
                  pbVar5 = pbVar5 + 1;
                  param_2 = param_2 - 1;
                  *param_6 = bVar1;
                  param_6 = pbVar4;
                } while (param_2 != 0);
                pbVar5 = *(byte **)(param_5 + 0x28);
              }
            }
            else {
              pbVar5 = param_6 + -param_2;
              *param_6 = *pbVar5;
              param_6[1] = pbVar5[1];
              pbVar5 = pbVar5 + 2;
              local_10 = local_10 - 2;
              pbVar4 = param_6 + 2;
            }
            do {
              *pbVar4 = *pbVar5;
              param_6 = pbVar4 + 1;
              pbVar5 = pbVar5 + 1;
              local_10 = local_10 - 1;
              pbVar4 = param_6;
            } while (local_10 != 0);
            goto LAB_004cef01;
          }
          if ((bVar1 & 0x40) != 0) break;
          pbVar4 = pbVar4 + ((*(uint *)(&DAT_005b1260 + (uint)bVar1 * 4) & param_1) +
                            *(int *)(pbVar4 + 4)) * 8;
          param_1 = param_1 >> (pbVar4[1] & 0x1f);
          uVar9 = uVar9 - pbVar4[1];
        }
        piVar3[6] = (int)"invalid distance code";
        uVar8 = piVar3[1] - local_8;
        if (uVar9 >> 3 < piVar3[1] - local_8) {
          uVar8 = uVar9 >> 3;
        }
LAB_004cef7a:
        param_2 = 0xfffffffd;
        goto LAB_004cef81;
      }
      if ((bVar1 & 0x40) == 0) break;
      uVar6 = uVar9 >> 3;
      if ((bVar1 & 0x20) == 0) {
        uVar8 = piVar3[1] - local_8;
        piVar3[6] = (int)"invalid literal/length code";
        if (uVar6 < uVar8) {
          uVar8 = uVar6;
        }
        goto LAB_004cef7a;
      }
      uVar8 = piVar3[1] - local_8;
      if (uVar6 < uVar8) {
        uVar8 = uVar6;
      }
      param_2 = 1;
      goto LAB_004cef81;
    }
    param_1 = param_1 >> (pbVar4[1] & 0x1f);
    uVar9 = uVar9 - pbVar4[1];
    local_14 = local_14 + -1;
    *param_6 = pbVar4[4];
    param_6 = param_6 + 1;
LAB_004cef01:
    if ((local_14 < (byte *)0x102) || (local_8 < 10)) {
      uVar8 = piVar3[1] - local_8;
      if (uVar9 >> 3 < piVar3[1] - local_8) {
        uVar8 = uVar9 >> 3;
      }
      param_2 = 0;
LAB_004cef81:
      *(uint *)(param_5 + 0x20) = param_1;
      *(uint *)(param_5 + 0x1c) = uVar9 + uVar8 * -8;
      piVar3[1] = uVar8 + local_8;
      iVar2 = *piVar3;
      *piVar3 = (int)local_c - uVar8;
      piVar3[2] = piVar3[2] + (((int)local_c - uVar8) - iVar2);
      *(byte **)(param_5 + 0x34) = param_6;
      return param_2;
    }
  } while( true );
  pbVar4 = pbVar4 + ((*(uint *)(&DAT_005b1260 + uVar7 * 4) & param_1) + *(int *)(pbVar4 + 4)) * 8;
  bVar1 = *pbVar4;
  goto LAB_004ceda2;
}




/* Function: FUN_004d13c0 */

void FUN_004d13c0(uint *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  byte *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte *local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  pbVar6 = (byte *)param_1[7];
  local_34 = (byte *)param_2[1];
  local_30 = (byte *)param_1[0xd];
  if (local_30 < (byte *)param_1[0xc]) {
    local_2c = (byte *)param_1[0xc] + (-1 - (int)local_30);
  }
  else {
    local_2c = (byte *)(param_1[0xb] - (int)local_30);
  }
  uVar8 = *param_1;
  param_1 = (uint *)param_1[8];
  pbVar10 = (byte *)*param_2;
  do {
    local_28 = pbVar10;
    if (9 < uVar8) {
      param_3 = -2;
LAB_004d140b:
      puVar1[8] = (uint)param_1;
      puVar1[7] = (uint)pbVar6;
      param_2[1] = (int)local_34;
      iVar2 = (int)pbVar10 - *param_2;
LAB_004d1422:
      pbVar6 = (byte *)(param_2[2] + iVar2);
LAB_004d1427:
      param_2[2] = (int)pbVar6;
      *param_2 = (int)pbVar10;
      puVar1[0xd] = (uint)local_30;
      FUN_004d2fa0(puVar1,param_2,param_3);
      return;
    }
    switch((&switchD_004d144d::switchdataD_004d1ee4)[uVar8]) {
    case (undefined *)0x4d1454:
      for (; local_28 = pbVar10, pbVar6 < (byte *)0x3; pbVar6 = pbVar6 + 8) {
        if (local_34 == (byte *)0x0) {
          puVar1[8] = (uint)param_1;
          puVar1[7] = (uint)pbVar6;
          param_2[2] = (int)(pbVar10 + (param_2[2] - *param_2));
          param_2[1] = 0;
          *param_2 = (int)pbVar10;
          puVar1[0xd] = (uint)local_30;
          FUN_004d2fa0(puVar1,param_2,param_3);
          return;
        }
        local_34 = local_34 + -1;
        param_3 = 0;
        param_1 = (uint *)((uint)param_1 | (uint)*pbVar10 << ((byte)pbVar6 & 0x1f));
        pbVar10 = pbVar10 + 1;
      }
      puVar1[6] = (uint)param_1 & 1;
      switch(((uint)param_1 & 7) >> 1) {
      case 0:
        uVar8 = (uint)(pbVar6 + -3) & 7;
        param_1 = (uint *)(((uint)param_1 >> 3) >> (sbyte)uVar8);
        pbVar6 = pbVar6 + -3 + -uVar8;
        *puVar1 = 1;
        break;
      case 1:
        FUN_004d2f70(&local_14,&local_18,&local_1c,&local_20,param_2);
        uVar8 = FUN_004d20c0(local_14,local_18,local_1c,local_20,param_2);
        puVar1[1] = uVar8;
        if (uVar8 == 0) goto LAB_004d1ddc;
        param_1 = (uint *)((uint)param_1 >> 3);
        pbVar6 = pbVar6 + -3;
        *puVar1 = 6;
        break;
      case 2:
        param_1 = (uint *)((uint)param_1 >> 3);
        pbVar6 = pbVar6 + -3;
        *puVar1 = 3;
        break;
      case 3:
        *puVar1 = 9;
        param_2[6] = (int)"invalid block type";
        puVar1[8] = (uint)param_1 >> 3;
        pbVar6 = pbVar6 + -3;
LAB_004d1c3b:
        puVar1[7] = (uint)pbVar6;
        param_2[1] = (int)local_34;
        param_2[2] = (int)(pbVar10 + (param_2[2] - *param_2));
        *param_2 = (int)pbVar10;
        puVar1[0xd] = (uint)local_30;
        FUN_004d2fa0(puVar1,param_2,0xfffffffd);
        return;
      }
      break;
    case (undefined *)0x4d153c:
      for (; local_28 = pbVar10, pbVar6 < (byte *)0x20; pbVar6 = pbVar6 + 8) {
        if (local_34 == (byte *)0x0) goto LAB_004d1cef;
        local_34 = local_34 + -1;
        param_3 = 0;
        param_1 = (uint *)((uint)param_1 | (uint)*pbVar10 << ((byte)pbVar6 & 0x1f));
        pbVar10 = pbVar10 + 1;
      }
      uVar8 = (uint)param_1 & 0xffff;
      if (~(uint)param_1 >> 0x10 != uVar8) {
        *puVar1 = 9;
        param_2[6] = (int)"invalid stored block lengths";
        param_3 = -3;
        goto LAB_004d140b;
      }
      pbVar6 = (byte *)0x0;
      puVar1[1] = uVar8;
      param_1 = (uint *)0x0;
      if (uVar8 == 0) goto LAB_004d16cc;
      *puVar1 = 2;
      break;
    case (undefined *)0x4d15aa:
      if (local_34 == (byte *)0x0) {
LAB_004d1cce:
        puVar1[8] = (uint)param_1;
        puVar1[7] = (uint)pbVar6;
        iVar2 = (int)pbVar10 - *param_2;
        param_2[1] = 0;
        goto LAB_004d1422;
      }
      if (local_2c == (byte *)0x0) {
        if (local_30 == (byte *)puVar1[0xb]) {
          local_2c = (byte *)puVar1[0xc];
          pbVar7 = (byte *)puVar1[10];
          if (pbVar7 != local_2c) {
            if (pbVar7 < local_2c) {
              local_2c = local_2c + (-1 - (int)pbVar7);
            }
            else {
              local_2c = (byte *)puVar1[0xb] + -(int)pbVar7;
            }
            local_30 = pbVar7;
            if (local_2c != (byte *)0x0) goto LAB_004d1663;
          }
        }
        puVar1[0xd] = (uint)local_30;
        uVar4 = FUN_004d2fa0(puVar1,param_2,param_3);
        local_24 = (byte *)puVar1[0xc];
        local_30 = (byte *)puVar1[0xd];
        if (local_30 < local_24) {
          local_2c = local_24 + (-1 - (int)local_30);
        }
        else {
          local_2c = (byte *)(puVar1[0xb] - (int)local_30);
        }
        local_10 = (byte *)puVar1[0xb];
        if (local_30 == local_10) {
          pbVar7 = (byte *)puVar1[10];
          if (pbVar7 != local_24) {
            local_30 = pbVar7;
            if (pbVar7 < local_24) {
              local_2c = local_24 + (-1 - (int)pbVar7);
            }
            else {
              local_2c = local_10 + -(int)pbVar7;
            }
          }
        }
        if (local_2c == (byte *)0x0) {
          puVar1[8] = (uint)param_1;
          puVar1[7] = (uint)pbVar6;
          param_2[1] = (int)local_34;
          param_2[2] = (int)(pbVar10 + (param_2[2] - *param_2));
          *param_2 = (int)pbVar10;
          puVar1[0xd] = (uint)local_30;
          FUN_004d2fa0(puVar1,param_2,uVar4);
          return;
        }
      }
LAB_004d1663:
      param_3 = 0;
      pbVar10 = (byte *)puVar1[1];
      if (local_34 < (byte *)puVar1[1]) {
        pbVar10 = local_34;
      }
      if (local_2c < pbVar10) {
        pbVar10 = local_2c;
      }
      pbVar7 = local_28;
      pbVar9 = local_30;
      for (uVar8 = (uint)pbVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar7;
        pbVar7 = pbVar7 + 4;
        pbVar9 = pbVar9 + 4;
      }
      for (uVar8 = (uint)pbVar10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar9 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        pbVar9 = pbVar9 + 1;
      }
      local_28 = local_28 + (int)pbVar10;
      uVar8 = puVar1[1];
      local_34 = local_34 + -(int)pbVar10;
      local_30 = local_30 + (int)pbVar10;
      local_2c = local_2c + -(int)pbVar10;
      puVar1[1] = uVar8 - (int)pbVar10;
      if (uVar8 - (int)pbVar10 == 0) {
LAB_004d16cc:
        *puVar1 = -(uint)(puVar1[6] != 0) & 7;
      }
      break;
    case (undefined *)0x4d16dd:
      for (; pbVar6 < (byte *)0xe; pbVar6 = pbVar6 + 8) {
        if (local_34 == (byte *)0x0) goto LAB_004d1cef;
        local_34 = local_34 + -1;
        param_3 = 0;
        param_1 = (uint *)((uint)param_1 | (uint)*pbVar10 << ((byte)pbVar6 & 0x1f));
        pbVar10 = pbVar10 + 1;
      }
      puVar1[1] = (uint)param_1 & 0x3fff;
      if ((0x1d < ((uint)param_1 & 0x1f)) ||
         (uVar8 = ((uint)param_1 & 0x3fff) >> 5 & 0x1f, 0x1d < uVar8)) {
        *puVar1 = 9;
        param_2[6] = (int)"too many length or distance symbols";
        puVar1[8] = (uint)param_1;
        goto LAB_004d1c3b;
      }
      uVar8 = (*(code *)param_2[8])(param_2[10],uVar8 + 0x102 + ((uint)param_1 & 0x1f),4);
      puVar1[3] = uVar8;
      if (uVar8 != 0) {
        param_1 = (uint *)((uint)param_1 >> 0xe);
        pbVar6 = pbVar6 + -0xe;
        puVar1[2] = 0;
        *puVar1 = 4;
        goto switchD_004d144d_caseD_4d1774;
      }
      param_3 = -4;
      goto LAB_004d140b;
    case (undefined *)0x4d1774:
switchD_004d144d_caseD_4d1774:
      if (puVar1[2] < (puVar1[1] >> 10) + 4) {
        do {
          for (; pbVar6 < (byte *)0x3; pbVar6 = pbVar6 + 8) {
            if (local_34 == (byte *)0x0) goto LAB_004d1cef;
            local_34 = local_34 + -1;
            param_3 = 0;
            param_1 = (uint *)((uint)param_1 | (uint)*pbVar10 << ((byte)pbVar6 & 0x1f));
            pbVar10 = pbVar10 + 1;
          }
          *(uint *)(puVar1[3] + *(int *)(&DAT_0058f538 + puVar1[2] * 4) * 4) = (uint)param_1 & 7;
          puVar1[2] = puVar1[2] + 1;
          param_1 = (uint *)((uint)param_1 >> 3);
          pbVar6 = pbVar6 + -3;
        } while (puVar1[2] < (puVar1[1] >> 10) + 4);
      }
      uVar8 = puVar1[2];
      while (uVar8 < 0x13) {
        *(undefined4 *)(puVar1[3] + *(int *)(&DAT_0058f538 + puVar1[2] * 4) * 4) = 0;
        uVar8 = puVar1[2] + 1;
        puVar1[2] = uVar8;
      }
      puVar1[4] = 7;
      local_2c = (byte *)FUN_004d2d30(puVar1[3],puVar1 + 4,puVar1 + 5,puVar1[9],param_2);
      if (local_2c != (byte *)0x0) {
        if (local_2c == (byte *)0xfffffffd) {
          (*(code *)param_2[9])(param_2[10],puVar1[3]);
          puVar1[8] = (uint)param_1;
          *puVar1 = 9;
          puVar1[7] = (uint)pbVar6;
          param_2[1] = (int)local_34;
          param_2[2] = (int)(pbVar10 + (param_2[2] - *param_2));
          *param_2 = (int)pbVar10;
          puVar1[0xd] = (uint)local_30;
          FUN_004d2fa0(puVar1,param_2,0xfffffffd);
          return;
        }
LAB_004d1d9d:
        puVar1[8] = (uint)param_1;
        puVar1[7] = (uint)pbVar6;
        param_2[1] = (int)local_34;
        param_2[2] = (int)(pbVar10 + (param_2[2] - *param_2));
        *param_2 = (int)pbVar10;
        puVar1[0xd] = (uint)local_30;
        FUN_004d2fa0(puVar1,param_2,local_2c);
        return;
      }
      puVar1[2] = 0;
      *puVar1 = 5;
switchD_004d144d_caseD_4d1869:
      if (puVar1[2] < (puVar1[1] >> 5 & 0x1f) + 0x102 + (puVar1[1] & 0x1f)) {
        do {
          pbVar7 = (byte *)puVar1[4];
          if (pbVar6 < pbVar7) {
            do {
              if (local_34 == (byte *)0x0) goto LAB_004d1cce;
              local_34 = local_34 + -1;
              bVar5 = (byte)pbVar6;
              pbVar7 = (byte *)puVar1[4];
              pbVar6 = pbVar6 + 8;
              param_3 = 0;
              param_1 = (uint *)((uint)param_1 | (uint)*pbVar10 << (bVar5 & 0x1f));
              pbVar10 = pbVar10 + 1;
            } while (pbVar6 < pbVar7);
          }
          iVar2 = puVar1[5] + (*(uint *)(&DAT_005b2408 + (int)pbVar7 * 4) & (uint)param_1) * 8;
          bVar5 = *(byte *)(iVar2 + 1);
          uVar8 = (uint)bVar5;
          local_c = *(uint *)(iVar2 + 4);
          if (local_c < 0x10) {
            param_1 = (uint *)((uint)param_1 >> (bVar5 & 0x1f));
            pbVar6 = pbVar6 + -uVar8;
            *(uint *)(puVar1[3] + puVar1[2] * 4) = local_c;
            puVar1[2] = puVar1[2] + 1;
          }
          else {
            if (local_c == 0x12) {
              local_24 = (byte *)0x7;
            }
            else {
              local_24 = (byte *)(local_c - 0xe);
            }
            local_28 = (byte *)((uint)(local_c == 0x12) * 8 + 3);
            local_10 = local_24 + uVar8;
            for (; pbVar6 < local_10; pbVar6 = pbVar6 + 8) {
              if (local_34 == (byte *)0x0) goto LAB_004d1cef;
              local_34 = local_34 + -1;
              param_3 = 0;
              param_1 = (uint *)((uint)param_1 | (uint)*pbVar10 << ((byte)pbVar6 & 0x1f));
              pbVar10 = pbVar10 + 1;
            }
            uVar3 = (uint)param_1 >> (bVar5 & 0x1f);
            local_28 = local_28 + (*(uint *)(&DAT_005b2408 + (int)local_24 * 4) & uVar3);
            param_1 = (uint *)(uVar3 >> ((byte)local_24 & 0x1f));
            pbVar6 = pbVar6 + -(int)(local_24 + uVar8);
            uVar8 = puVar1[2];
            if ((byte *)((puVar1[1] >> 5 & 0x1f) + 0x102 + (puVar1[1] & 0x1f)) < local_28 + uVar8) {
LAB_004d1d2e:
              (*(code *)param_2[9])(param_2[10],puVar1[3]);
              *puVar1 = 9;
              param_2[6] = (int)"invalid bit length repeat";
              puVar1[8] = (uint)param_1;
              puVar1[7] = (uint)pbVar6;
              param_2[1] = (int)local_34;
              param_2[2] = (int)(pbVar10 + (param_2[2] - *param_2));
              *param_2 = (int)pbVar10;
              puVar1[0xd] = (uint)local_30;
              FUN_004d2fa0(puVar1,param_2,0xfffffffd);
              return;
            }
            if (local_c == 0x10) {
              if (uVar8 == 0) goto LAB_004d1d2e;
              uVar4 = *(undefined4 *)((puVar1[3] - 4) + uVar8 * 4);
            }
            else {
              uVar4 = 0;
            }
            do {
              *(undefined4 *)(puVar1[3] + uVar8 * 4) = uVar4;
              uVar8 = uVar8 + 1;
              local_28 = local_28 + -1;
            } while (local_28 != (byte *)0x0);
            puVar1[2] = uVar8;
            local_28 = (byte *)0x0;
          }
        } while (puVar1[2] < (puVar1[1] >> 5 & 0x1f) + 0x102 + (puVar1[1] & 0x1f));
      }
      puVar1[5] = 0;
      local_28 = (byte *)0x9;
      local_24 = (byte *)0x6;
      local_2c = (byte *)FUN_004d2de0((puVar1[1] & 0x1f) + 0x101,(puVar1[1] >> 5 & 0x1f) + 1,
                                      puVar1[3],&local_28,&local_24,&local_4,&local_8,puVar1[9],
                                      param_2);
      if (local_2c != (byte *)0x0) {
        if (local_2c == (byte *)0xfffffffd) {
          (*(code *)param_2[9])(param_2[10],puVar1[3]);
          *puVar1 = 9;
        }
        goto LAB_004d1d9d;
      }
      uVar8 = FUN_004d20c0(local_28,local_24,local_4,local_8,param_2);
      if (uVar8 == 0) {
LAB_004d1ddc:
        puVar1[8] = (uint)param_1;
        puVar1[7] = (uint)pbVar6;
        param_2[1] = (int)local_34;
        param_2[2] = (int)(pbVar10 + (param_2[2] - *param_2));
        *param_2 = (int)pbVar10;
        puVar1[0xd] = (uint)local_30;
        FUN_004d2fa0(puVar1,param_2,0xfffffffc);
        return;
      }
      puVar1[1] = uVar8;
      (*(code *)param_2[9])(param_2[10],puVar1[3]);
      *puVar1 = 6;
switchD_004d144d_caseD_4d1ac1:
      puVar1[8] = (uint)param_1;
      puVar1[7] = (uint)pbVar6;
      param_2[1] = (int)local_34;
      param_2[2] = (int)(pbVar10 + (param_2[2] - *param_2));
      *param_2 = (int)pbVar10;
      puVar1[0xd] = (uint)local_30;
      param_3 = FUN_004d2100(puVar1,param_2,param_3);
      if (param_3 != 1) goto LAB_004d1d1b;
      param_3 = 0;
      FUN_004d2820(puVar1[1],param_2);
      param_1 = (uint *)puVar1[8];
      local_30 = (byte *)puVar1[0xd];
      local_28 = (byte *)*param_2;
      local_34 = (byte *)param_2[1];
      pbVar6 = (byte *)puVar1[7];
      if (local_30 < (byte *)puVar1[0xc]) {
        local_2c = (byte *)puVar1[0xc] + (-1 - (int)local_30);
      }
      else {
        local_2c = (byte *)(puVar1[0xb] - (int)local_30);
      }
      if (puVar1[6] != 0) {
        *puVar1 = 7;
switchD_004d144d_caseD_4d1e1e:
        pbVar10 = local_28;
        puVar1[0xd] = (uint)local_30;
        param_3 = FUN_004d2fa0(puVar1,param_2,param_3);
        local_30 = (byte *)puVar1[0xd];
        if ((byte *)puVar1[0xc] == local_30) {
          *puVar1 = 8;
switchD_004d144d_caseD_4d1e6a:
          puVar1[8] = (uint)param_1;
          puVar1[7] = (uint)pbVar6;
          param_2[1] = (int)local_34;
          param_2[2] = (int)(pbVar10 + (param_2[2] - *param_2));
          *param_2 = (int)pbVar10;
          puVar1[0xd] = (uint)local_30;
          FUN_004d2fa0(puVar1,param_2,1);
          return;
        }
        puVar1[8] = (uint)param_1;
        puVar1[7] = (uint)pbVar6;
        param_2[1] = (int)local_34;
        pbVar6 = pbVar10 + (param_2[2] - *param_2);
        goto LAB_004d1427;
      }
      *puVar1 = 0;
      break;
    case (undefined *)0x4d1869:
      goto switchD_004d144d_caseD_4d1869;
    case (undefined *)0x4d1ac1:
      goto switchD_004d144d_caseD_4d1ac1;
    case (undefined *)0x4d1e1e:
      goto switchD_004d144d_caseD_4d1e1e;
    case (undefined *)0x4d1e6a:
      goto switchD_004d144d_caseD_4d1e6a;
    case (undefined *)0x4d1ea6:
      puVar1[8] = (uint)param_1;
      puVar1[7] = (uint)pbVar6;
      param_2[1] = (int)local_34;
      param_2[2] = (int)(pbVar10 + (param_2[2] - *param_2));
      *param_2 = (int)pbVar10;
      puVar1[0xd] = (uint)local_30;
      FUN_004d2fa0(puVar1,param_2,0xfffffffd);
      return;
    }
    uVar8 = *puVar1;
    pbVar10 = local_28;
  } while( true );
LAB_004d1cef:
  puVar1[8] = (uint)param_1;
  puVar1[7] = (uint)pbVar6;
  param_2[2] = (int)(pbVar10 + (param_2[2] - *param_2));
  param_2[1] = 0;
  *param_2 = (int)pbVar10;
  puVar1[0xd] = (uint)local_30;
LAB_004d1d1b:
  FUN_004d2fa0(puVar1,param_2,param_3);
  return;
}




/* Function: FUN_004d2100 */

void FUN_004d2100(uint param_1,int *param_2,int param_3)

{
  byte bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  byte *pbVar10;
  undefined1 *local_10;
  byte *local_c;
  undefined1 *local_8;
  
  piVar5 = param_2;
  iVar4 = param_1;
  puVar2 = *(uint **)(param_1 + 4);
  uVar9 = *(uint *)(param_1 + 0x1c);
  pbVar10 = (byte *)*param_2;
  puVar8 = *(undefined1 **)(param_1 + 0x34);
  if (puVar8 < *(undefined1 **)(param_1 + 0x30)) {
    local_10 = *(undefined1 **)(param_1 + 0x30) + (-1 - (int)puVar8);
  }
  else {
    local_10 = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)puVar8);
  }
  uVar6 = *puVar2;
  param_1 = *(uint *)(param_1 + 0x20);
  param_2 = (int *)param_2[1];
  while (uVar6 < 10) {
    puVar7 = puVar8;
    switch(uVar6) {
    case 0:
      if ((local_10 < (undefined1 *)0x102) || (param_2 < 10)) {
LAB_004d21ff:
        puVar2[3] = (uint)(byte)puVar2[4];
        puVar2[2] = puVar2[5];
        *puVar2 = 1;
        goto switchD_004d2150_caseD_1;
      }
      *(uint *)(iVar4 + 0x20) = param_1;
      *(uint *)(iVar4 + 0x1c) = uVar9;
      piVar5[1] = (int)param_2;
      piVar5[2] = (int)(pbVar10 + (piVar5[2] - *piVar5));
      *piVar5 = (int)pbVar10;
      *(undefined1 **)(iVar4 + 0x34) = puVar8;
      param_3 = FUN_004d30d0((char)puVar2[4],*(undefined1 *)((int)puVar2 + 0x11),puVar2[5],puVar2[6]
                             ,iVar4,piVar5);
      param_2 = (int *)piVar5[1];
      param_1 = *(uint *)(iVar4 + 0x20);
      pbVar10 = (byte *)*piVar5;
      uVar9 = *(uint *)(iVar4 + 0x1c);
      puVar8 = *(undefined1 **)(iVar4 + 0x34);
      if (puVar8 < *(undefined1 **)(iVar4 + 0x30)) {
        local_10 = *(undefined1 **)(iVar4 + 0x30) + (-1 - (int)puVar8);
      }
      else {
        local_10 = (undefined1 *)(*(int *)(iVar4 + 0x2c) - (int)puVar8);
      }
      if (param_3 == 0) goto LAB_004d21ff;
      *puVar2 = (uint)(param_3 != 1) * 2 + 7;
      goto LAB_004d2694;
    case 1:
switchD_004d2150_caseD_1:
      for (; uVar9 < puVar2[3]; uVar9 = uVar9 + 8) {
        if (param_2 == (int *)0x0) {
LAB_004d2701:
          *(uint *)(iVar4 + 0x20) = param_1;
          *(uint *)(iVar4 + 0x1c) = uVar9;
          piVar5[1] = 0;
          piVar5[2] = (int)(pbVar10 + (piVar5[2] - *piVar5));
          *piVar5 = (int)pbVar10;
          *(undefined1 **)(iVar4 + 0x34) = puVar8;
          FUN_004d2fa0(iVar4,piVar5,param_3);
          return;
        }
        param_2 = (int *)((int)param_2 - 1);
        param_3 = 0;
        param_1 = param_1 | (uint)*pbVar10 << ((byte)uVar9 & 0x1f);
        pbVar10 = pbVar10 + 1;
      }
      local_c = (byte *)(puVar2[2] + (*(uint *)(&DAT_005b2408 + puVar2[3] * 4) & param_1) * 8);
      param_1 = param_1 >> (local_c[1] & 0x1f);
      uVar9 = uVar9 - local_c[1];
      bVar1 = *local_c;
      uVar6 = (uint)bVar1;
      if (uVar6 == 0) {
        puVar2[2] = *(uint *)(local_c + 4);
        *puVar2 = 6;
        goto LAB_004d2694;
      }
      if ((bVar1 & 0x10) != 0) {
        puVar2[2] = uVar6 & 0xf;
        puVar2[1] = *(uint *)(local_c + 4);
        *puVar2 = 2;
        goto LAB_004d2694;
      }
      if ((bVar1 & 0x40) == 0) goto LAB_004d2424;
      if ((bVar1 & 0x20) != 0) {
        *puVar2 = 7;
        goto LAB_004d2694;
      }
      *puVar2 = 9;
      piVar5[6] = (int)"invalid literal/length code";
      param_3 = 0xfffffffd;
      goto LAB_004d26a5;
    case 2:
      uVar6 = puVar2[2];
      for (; uVar9 < uVar6; uVar9 = uVar9 + 8) {
        if (param_2 == (int *)0x0) goto LAB_004d2701;
        param_2 = (int *)((int)param_2 - 1);
        param_3 = 0;
        param_1 = param_1 | (uint)*pbVar10 << ((byte)uVar9 & 0x1f);
        pbVar10 = pbVar10 + 1;
      }
      puVar2[1] = puVar2[1] + (*(uint *)(&DAT_005b2408 + uVar6 * 4) & param_1);
      param_1 = param_1 >> ((byte)uVar6 & 0x1f);
      uVar9 = uVar9 - uVar6;
      puVar2[3] = (uint)*(byte *)((int)puVar2 + 0x11);
      puVar2[2] = puVar2[6];
      *puVar2 = 3;
      break;
    case 3:
      break;
    case 4:
      uVar6 = puVar2[2];
      for (; uVar9 < uVar6; uVar9 = uVar9 + 8) {
        if (param_2 == (int *)0x0) goto LAB_004d2701;
        param_2 = (int *)((int)param_2 - 1);
        param_3 = 0;
        param_1 = param_1 | (uint)*pbVar10 << ((byte)uVar9 & 0x1f);
        pbVar10 = pbVar10 + 1;
      }
      puVar2[3] = puVar2[3] + (*(uint *)(&DAT_005b2408 + uVar6 * 4) & param_1);
      param_1 = param_1 >> ((byte)uVar6 & 0x1f);
      uVar9 = uVar9 - uVar6;
      *puVar2 = 5;
    case 5:
      local_8 = puVar8 + -puVar2[3];
      if (local_8 < *(undefined1 **)(iVar4 + 0x28)) {
        do {
          local_8 = local_8 + (*(int *)(iVar4 + 0x2c) - (int)*(undefined1 **)(iVar4 + 0x28));
        } while (local_8 < *(undefined1 **)(iVar4 + 0x28));
      }
      uVar6 = puVar2[1];
      while (uVar6 != 0) {
        puVar7 = puVar8;
        if (local_10 == (undefined1 *)0x0) {
          if (puVar8 == *(undefined1 **)(iVar4 + 0x2c)) {
            local_10 = *(undefined1 **)(iVar4 + 0x30);
            puVar7 = *(undefined1 **)(iVar4 + 0x28);
            if (local_10 != puVar7) {
              if (puVar7 < local_10) {
                local_10 = local_10 + (-1 - (int)puVar7);
              }
              else {
                local_10 = *(undefined1 **)(iVar4 + 0x2c) + -(int)puVar7;
              }
              puVar8 = puVar7;
              if (local_10 != (undefined1 *)0x0) goto LAB_004d2599;
            }
          }
          *(undefined1 **)(iVar4 + 0x34) = puVar8;
          param_3 = FUN_004d2fa0(iVar4,piVar5,param_3);
          puVar7 = *(undefined1 **)(iVar4 + 0x34);
          puVar8 = *(undefined1 **)(iVar4 + 0x30);
          if (puVar7 < puVar8) {
            local_10 = puVar8 + (-1 - (int)puVar7);
          }
          else {
            local_10 = (undefined1 *)(*(int *)(iVar4 + 0x2c) - (int)puVar7);
          }
          if ((puVar7 == *(undefined1 **)(iVar4 + 0x2c)) &&
             (puVar3 = *(undefined1 **)(iVar4 + 0x28), puVar8 != puVar3)) {
            puVar7 = puVar3;
            if (puVar3 < puVar8) {
              local_10 = puVar8 + (-1 - (int)puVar3);
            }
            else {
              local_10 = *(undefined1 **)(iVar4 + 0x2c) + -(int)puVar3;
            }
          }
          if (local_10 == (undefined1 *)0x0) goto LAB_004d273c;
        }
LAB_004d2599:
        *puVar7 = *local_8;
        puVar8 = puVar7 + 1;
        local_8 = local_8 + 1;
        local_10 = local_10 + -1;
        param_3 = 0;
        if (local_8 == *(undefined1 **)(iVar4 + 0x2c)) {
          local_8 = *(undefined1 **)(iVar4 + 0x28);
        }
        puVar2[1] = puVar2[1] - 1;
        uVar6 = puVar2[1];
      }
LAB_004d268e:
      *puVar2 = 0;
      goto LAB_004d2694;
    case 6:
      if (local_10 == (undefined1 *)0x0) {
        if (puVar8 == *(undefined1 **)(iVar4 + 0x2c)) {
          local_10 = *(undefined1 **)(iVar4 + 0x30);
          puVar7 = *(undefined1 **)(iVar4 + 0x28);
          if (local_10 != puVar7) {
            if (puVar7 < local_10) {
              local_10 = local_10 + (-1 - (int)puVar7);
            }
            else {
              local_10 = *(undefined1 **)(iVar4 + 0x2c) + -(int)puVar7;
            }
            puVar8 = puVar7;
            if (local_10 != (undefined1 *)0x0) goto LAB_004d2673;
          }
        }
        *(undefined1 **)(iVar4 + 0x34) = puVar8;
        param_3 = FUN_004d2fa0(iVar4,piVar5,param_3);
        puVar7 = *(undefined1 **)(iVar4 + 0x34);
        puVar8 = *(undefined1 **)(iVar4 + 0x30);
        if (puVar7 < puVar8) {
          local_10 = puVar8 + (-1 - (int)puVar7);
        }
        else {
          local_10 = (undefined1 *)(*(int *)(iVar4 + 0x2c) - (int)puVar7);
        }
        if ((puVar7 == *(undefined1 **)(iVar4 + 0x2c)) &&
           (puVar3 = *(undefined1 **)(iVar4 + 0x28), puVar8 != puVar3)) {
          puVar7 = puVar3;
          if (puVar3 < puVar8) {
            local_10 = puVar8 + (-1 - (int)puVar3);
          }
          else {
            local_10 = *(undefined1 **)(iVar4 + 0x2c) + -(int)puVar3;
          }
        }
        if (local_10 == (undefined1 *)0x0) {
LAB_004d273c:
          *(uint *)(iVar4 + 0x20) = param_1;
          *(uint *)(iVar4 + 0x1c) = uVar9;
          piVar5[1] = (int)param_2;
          piVar5[2] = (int)(pbVar10 + (piVar5[2] - *piVar5));
          goto LAB_004d26c4;
        }
      }
LAB_004d2673:
      *puVar7 = (char)puVar2[2];
      puVar8 = puVar7 + 1;
      local_10 = local_10 + -1;
      param_3 = 0;
      goto LAB_004d268e;
    case 7:
      if (7 < uVar9) {
        uVar9 = uVar9 - 8;
        param_2 = (int *)((int)param_2 + 1);
        pbVar10 = pbVar10 + -1;
      }
      *(undefined1 **)(iVar4 + 0x34) = puVar8;
      param_3 = FUN_004d2fa0(iVar4,piVar5,param_3);
      puVar8 = *(undefined1 **)(iVar4 + 0x34);
      if (*(undefined1 **)(iVar4 + 0x30) == puVar8) {
        *puVar2 = 8;
        goto switchD_004d2150_caseD_8;
      }
      *(uint *)(iVar4 + 0x20) = param_1;
      *(uint *)(iVar4 + 0x1c) = uVar9;
      piVar5[1] = (int)param_2;
      piVar5[2] = (int)(pbVar10 + (piVar5[2] - *piVar5));
      puVar7 = puVar8;
      goto LAB_004d26c4;
    case 8:
switchD_004d2150_caseD_8:
      param_3 = 1;
      goto LAB_004d26a5;
    case 9:
      *(uint *)(iVar4 + 0x20) = param_1;
      *(uint *)(iVar4 + 0x1c) = uVar9;
      piVar5[1] = (int)param_2;
      piVar5[2] = (int)(pbVar10 + (piVar5[2] - *piVar5));
      param_3 = 0xfffffffd;
      goto LAB_004d26c4;
    }
    for (; uVar9 < puVar2[3]; uVar9 = uVar9 + 8) {
      if (param_2 == (int *)0x0) goto LAB_004d2701;
      param_2 = (int *)((int)param_2 - 1);
      param_3 = 0;
      param_1 = param_1 | (uint)*pbVar10 << ((byte)uVar9 & 0x1f);
      pbVar10 = pbVar10 + 1;
    }
    local_c = (byte *)(puVar2[2] + (*(uint *)(&DAT_005b2408 + puVar2[3] * 4) & param_1) * 8);
    param_1 = param_1 >> (local_c[1] & 0x1f);
    bVar1 = *local_c;
    uVar6 = (uint)bVar1;
    uVar9 = uVar9 - local_c[1];
    if ((bVar1 & 0x10) == 0) {
      if ((bVar1 & 0x40) != 0) {
        *puVar2 = 9;
        piVar5[6] = (int)"invalid distance code";
        param_3 = 0xfffffffd;
        goto LAB_004d26a5;
      }
LAB_004d2424:
      puVar2[3] = uVar6;
      puVar2[2] = (uint)(local_c + *(int *)(local_c + 4) * 8);
    }
    else {
      puVar2[2] = uVar6 & 0xf;
      puVar2[3] = *(uint *)(local_c + 4);
      *puVar2 = 4;
    }
LAB_004d2694:
    uVar6 = *puVar2;
  }
  param_3 = 0xfffffffe;
LAB_004d26a5:
  *(uint *)(iVar4 + 0x20) = param_1;
  *(uint *)(iVar4 + 0x1c) = uVar9;
  piVar5[1] = (int)param_2;
  piVar5[2] = (int)(pbVar10 + (piVar5[2] - *piVar5));
  puVar7 = puVar8;
LAB_004d26c4:
  *piVar5 = (int)pbVar10;
  *(undefined1 **)(iVar4 + 0x34) = puVar7;
  FUN_004d2fa0(iVar4,piVar5,param_3);
  return;
}




/* Function: FUN_004d30d0 */

undefined4 FUN_004d30d0(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  uint local_14;
  undefined1 *local_10;
  byte *local_c;
  
  uVar9 = *(uint *)(param_5 + 0x20);
  pbVar12 = (byte *)*param_6;
  local_14 = param_6[1];
  puVar16 = *(undefined1 **)(param_5 + 0x34);
  uVar4 = *(uint *)(param_5 + 0x1c);
  if (puVar16 < *(undefined1 **)(param_5 + 0x30)) {
    local_10 = *(undefined1 **)(param_5 + 0x30) + (-1 - (int)puVar16);
  }
  else {
    local_10 = (undefined1 *)(*(int *)(param_5 + 0x2c) - (int)puVar16);
  }
  uVar8 = *(uint *)(&DAT_005b2408 + param_1 * 4);
  uVar3 = *(uint *)(&DAT_005b2408 + param_2 * 4);
  local_c = pbVar12;
  do {
    for (; uVar4 < 0x14; uVar4 = uVar4 + 8) {
      local_14 = local_14 - 1;
      uVar9 = uVar9 | (uint)*pbVar12 << ((byte)uVar4 & 0x1f);
      pbVar12 = pbVar12 + 1;
      local_c = pbVar12;
    }
    bVar1 = *(byte *)(param_3 + (uVar8 & uVar9) * 8);
    uVar11 = (uint)bVar1;
    iVar7 = param_3 + (uVar8 & uVar9) * 8;
    bVar2 = *(byte *)(iVar7 + 1);
    uVar9 = uVar9 >> (bVar2 & 0x1f);
    if (uVar11 == 0) {
LAB_004d331f:
      uVar4 = uVar4 - bVar2;
      *puVar16 = *(undefined1 *)(iVar7 + 4);
      puVar16 = puVar16 + 1;
      local_10 = local_10 + -1;
    }
    else {
      uVar4 = uVar4 - *(byte *)(iVar7 + 1);
      while ((bVar1 & 0x10) == 0) {
        if ((uVar11 & 0x40) != 0) {
          if ((uVar11 & 0x20) != 0) {
            uVar8 = param_6[1] - local_14;
            if (uVar4 >> 3 < param_6[1] - local_14) {
              uVar8 = uVar4 >> 3;
            }
            *(uint *)(param_5 + 0x20) = uVar9;
            *(uint *)(param_5 + 0x1c) = uVar4 + uVar8 * -8;
            param_6[1] = uVar8 + local_14;
            param_6[2] = param_6[2] + (((int)pbVar12 - uVar8) - *param_6);
            *param_6 = (int)pbVar12 - uVar8;
            *(undefined1 **)(param_5 + 0x34) = puVar16;
            return 1;
          }
          param_6[6] = (int)"invalid literal/length code";
          goto LAB_004d340f;
        }
        iVar5 = (*(uint *)(&DAT_005b2408 + uVar11 * 4) & uVar9) + *(int *)(iVar7 + 4);
        bVar1 = *(byte *)(iVar7 + iVar5 * 8);
        uVar11 = (uint)bVar1;
        iVar7 = iVar7 + iVar5 * 8;
        bVar2 = *(byte *)(iVar7 + 1);
        uVar9 = uVar9 >> (bVar2 & 0x1f);
        if (uVar11 == 0) goto LAB_004d331f;
        uVar4 = uVar4 - *(byte *)(iVar7 + 1);
      }
      uVar11 = uVar11 & 0xf;
      uVar6 = (*(uint *)(&DAT_005b2408 + uVar11 * 4) & uVar9) + *(int *)(iVar7 + 4);
      uVar10 = uVar9 >> (sbyte)uVar11;
      for (uVar4 = uVar4 - uVar11; uVar4 < 0xf; uVar4 = uVar4 + 8) {
        local_14 = local_14 - 1;
        uVar10 = uVar10 | (uint)*pbVar12 << ((byte)uVar4 & 0x1f);
        pbVar12 = pbVar12 + 1;
        local_c = pbVar12;
      }
      iVar7 = param_4 + (uVar3 & uVar10) * 8;
      uVar9 = uVar10 >> (*(byte *)(iVar7 + 1) & 0x1f);
      uVar4 = uVar4 - *(byte *)(iVar7 + 1);
      bVar1 = *(byte *)(param_4 + (uVar3 & uVar10) * 8);
      while ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) != 0) {
          param_6[6] = (int)"invalid distance code";
LAB_004d340f:
          uVar8 = uVar4 >> 3;
          if (param_6[1] - local_14 <= uVar4 >> 3) {
            uVar8 = param_6[1] - local_14;
          }
          *(uint *)(param_5 + 0x20) = uVar9;
          *(uint *)(param_5 + 0x1c) = uVar4 + uVar8 * -8;
          param_6[1] = uVar8 + local_14;
          iVar7 = *param_6;
          *param_6 = (int)pbVar12 - uVar8;
          param_6[2] = param_6[2] + (((int)pbVar12 - uVar8) - iVar7);
          *(undefined1 **)(param_5 + 0x34) = puVar16;
          return 0xfffffffd;
        }
        iVar5 = (*(uint *)(&DAT_005b2408 + (uint)bVar1 * 4) & uVar9) + *(int *)(iVar7 + 4);
        pbVar13 = (byte *)(iVar7 + iVar5 * 8);
        iVar7 = iVar7 + iVar5 * 8;
        uVar9 = uVar9 >> (*(byte *)(iVar7 + 1) & 0x1f);
        uVar4 = uVar4 - *(byte *)(iVar7 + 1);
        bVar1 = *pbVar13;
      }
      uVar11 = bVar1 & 0xf;
      pbVar13 = pbVar12;
      pbVar12 = local_c;
      for (; uVar4 < uVar11; uVar4 = uVar4 + 8) {
        local_14 = local_14 - 1;
        uVar9 = uVar9 | (uint)*pbVar13 << ((byte)uVar4 & 0x1f);
        pbVar13 = pbVar12 + 1;
        pbVar12 = pbVar13;
      }
      uVar10 = *(uint *)(&DAT_005b2408 + uVar11 * 4) & uVar9;
      uVar9 = uVar9 >> (sbyte)uVar11;
      local_10 = local_10 + -uVar6;
      puVar14 = puVar16 + -(uVar10 + *(int *)(iVar7 + 4));
      uVar4 = uVar4 - uVar11;
      puVar15 = *(undefined1 **)(param_5 + 0x28);
      local_c = pbVar12;
      if (puVar14 < puVar15) {
        do {
          puVar14 = puVar14 + (*(int *)(param_5 + 0x2c) - (int)puVar15);
        } while (puVar14 < puVar15);
        uVar11 = *(int *)(param_5 + 0x2c) - (int)puVar14;
        if (uVar11 < uVar6) {
          iVar7 = uVar6 - uVar11;
          do {
            *puVar16 = *puVar14;
            puVar16 = puVar16 + 1;
            puVar14 = puVar14 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
          puVar15 = *(undefined1 **)(param_5 + 0x28);
          do {
            *puVar16 = *puVar15;
            puVar16 = puVar16 + 1;
            puVar15 = puVar15 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        else {
          *puVar16 = *puVar14;
          puVar16[1] = puVar14[1];
          puVar16 = puVar16 + 2;
          puVar14 = puVar14 + 2;
          iVar7 = uVar6 - 2;
          do {
            *puVar16 = *puVar14;
            puVar16 = puVar16 + 1;
            puVar14 = puVar14 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      else {
        *puVar16 = *puVar14;
        puVar16[1] = puVar14[1];
        puVar16 = puVar16 + 2;
        puVar14 = puVar14 + 2;
        iVar7 = uVar6 - 2;
        do {
          *puVar16 = *puVar14;
          puVar16 = puVar16 + 1;
          puVar14 = puVar14 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    if ((local_10 < (undefined1 *)0x102) || (local_14 < 10)) {
      uVar8 = param_6[1] - local_14;
      if (uVar4 >> 3 < param_6[1] - local_14) {
        uVar8 = uVar4 >> 3;
      }
      *(uint *)(param_5 + 0x20) = uVar9;
      *(uint *)(param_5 + 0x1c) = uVar4 + uVar8 * -8;
      param_6[1] = uVar8 + local_14;
      param_6[2] = param_6[2] + (((int)pbVar12 - uVar8) - *param_6);
      *param_6 = (int)pbVar12 - uVar8;
      *(undefined1 **)(param_5 + 0x34) = puVar16;
      return 0;
    }
  } while( true );
}





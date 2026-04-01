/* globals_01 functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_004178d4 */

void FUN_004178d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 local_10 [2];
  undefined4 local_8;
  
  local_10[0] = 3;
  local_8 = param_3;
  puVar1 = (undefined4 *)FUN_004174a4(param_1,param_2,local_10);
  *puVar1 = 2;
  *(undefined8 *)(puVar1 + 2) = param_4;
  return;
}




/* Function: FUN_00417908 */

void FUN_00417908(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041a5a8(param_1,param_2);
  FUN_004171c0(*(undefined4 *)(param_1 + 0x44),uVar1);
  return;
}




/* Function: FUN_00417928 */

undefined4 FUN_00417928(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 local_514 [8];
  int local_50c;
  undefined4 local_4d4 [307];
  
  uVar1 = FUN_0041a5a8(param_1,*(undefined4 *)(param_2 + 0x10));
  FUN_0041b8cc(param_1,local_514,param_2,uVar1);
  FUN_004179b0(local_514,local_4d4);
  FUN_0041871c(local_514);
  FUN_00417a10(local_514);
  FUN_0041864c(local_514,local_50c == 0x11c,"<eof> expected");
  FUN_00418a3c(local_514);
  return local_4d4[0];
}




/* Function: FUN_004179b0 */

void FUN_004179b0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041a78c(*(undefined4 *)(param_1 + 0x2c));
  param_2[1] = *(int *)(param_1 + 0x28);
  param_2[2] = param_1;
  param_2[3] = *(int *)(param_1 + 0x2c);
  *(int **)(param_1 + 0x28) = param_2;
  *(undefined2 *)(param_2 + 7) = 0;
  *(undefined2 *)((int)param_2 + 0x1e) = 0;
  *(undefined2 *)(param_2 + 8) = 0;
  param_2[10] = 0;
  *param_2 = iVar1;
  *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[9] = 0;
  param_2[6] = -1;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined2 *)(iVar1 + 0x24) = 0;
  *(undefined2 *)(iVar1 + 0x20) = 0;
  *(undefined2 *)(iVar1 + 0x22) = 0;
  return;
}




/* Function: FUN_00417a10 */

void FUN_00417a10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00419404(*(undefined4 *)(param_1 + 8));
  while( true ) {
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_00417a4c(param_1);
    FUN_00418958(param_1,0x3b);
    if (iVar1 != 0) break;
    iVar1 = FUN_00419404(*(undefined4 *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_00417a4c */

undefined4 FUN_00417a4c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0x109) {
    FUN_004192f8(param_1,uVar1);
    return 0;
  }
  if (iVar2 == 0x112) {
    FUN_00419270(param_1,uVar1);
    return 0;
  }
  if (iVar2 == 0x103) {
    FUN_0041871c(param_1);
    FUN_00418fbc(param_1);
    FUN_00418668(param_1,0x106,0x103,uVar1);
    return 0;
  }
  if (iVar2 == 0x107) {
    FUN_00419040(param_1,uVar1);
    return 0;
  }
  if (iVar2 == 0x10e) {
    FUN_00418f34(param_1,uVar1);
    return 0;
  }
  if (iVar2 == 0x108) {
    FUN_00418e98(param_1,uVar1);
    return 0;
  }
  if (iVar2 == 0x10a) {
    FUN_00418e3c(param_1);
    return 0;
  }
  if ((iVar2 != 0x25) && (iVar2 != 0x113)) {
    if (iVar2 == 0x10f) {
      FUN_00417bd0(param_1);
      return 1;
    }
    if (iVar2 == 0x102) {
      FUN_00417b70(param_1);
      return 1;
    }
    FUN_0041b8b4(param_1,"<statement> expected");
    return 0;
  }
  FUN_00418ccc(param_1);
  return 0;
}




/* Function: FUN_00417b70 */

void FUN_00417b70(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sVar1 = *(short *)(iVar2 + 0x1c);
  iVar3 = *(int *)(iVar2 + 0x28);
  if (iVar3 == 0) {
    FUN_0041b8b4(param_1,"no loop to break");
  }
  FUN_0041871c(param_1);
  FUN_0041b528(iVar2,(int)sVar1 - *(int *)(iVar3 + 8));
  uVar4 = FUN_0041a93c(iVar2);
  FUN_0041b854(iVar2,iVar3 + 4,uVar4);
  FUN_0041b528(iVar2,*(int *)(iVar3 + 8) - (int)sVar1);
  return;
}




/* Function: FUN_00417bd0 */

void FUN_00417bd0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  FUN_0041871c(param_1);
  iVar2 = FUN_00419404(*(undefined4 *)(param_1 + 8));
  if ((iVar2 == 0) && (*(int *)(param_1 + 8) != 0x3b)) {
    FUN_00417c1c(param_1);
  }
  FUN_0041aacc(iVar1,1,(int)*(short *)(*(int *)(param_1 + 0x28) + 0x1e));
  *(undefined2 *)(iVar1 + 0x1c) = *(undefined2 *)(iVar1 + 0x1e);
  return;
}




/* Function: FUN_00417c1c */

int FUN_00417c1c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_14 [12];
  
  iVar2 = 1;
  FUN_00417c7c(param_1,local_14);
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 == 0x2c) {
    FUN_0041b19c(param_1,local_14,1);
    FUN_0041871c(param_1);
    FUN_00417c7c(param_1,local_14);
    iVar2 = iVar2 + 1;
    iVar1 = *(int *)(param_1 + 8);
  }
  FUN_0041b19c(param_1,local_14,0);
  return iVar2;
}




/* Function: FUN_00417c7c */

void FUN_00417c7c(undefined4 param_1,undefined4 param_2)

{
  FUN_00417c90(param_1,param_2,0xffffffff);
  return;
}




/* Function: FUN_00417c90 */

int FUN_00417c90(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_1c [12];
  
  iVar1 = FUN_00417d44(*(undefined4 *)(param_1 + 8));
  if (iVar1 == 2) {
    FUN_00417d64(param_1,param_2);
  }
  else {
    FUN_0041871c(param_1);
    FUN_00417c90(param_1,param_2,7);
    FUN_0041b0cc(param_1,iVar1,param_2);
  }
  iVar1 = FUN_00418c0c(*(undefined4 *)(param_1 + 8));
  while ((iVar1 != 0xe && (param_3 < (char)(&DAT_005a2320)[iVar1 * 2]))) {
    FUN_0041871c(param_1);
    FUN_0041b63c(param_1,iVar1,param_2);
    iVar2 = FUN_00417c90(param_1,local_1c,(int)(char)(&DAT_005a2321)[iVar1 * 2]);
    FUN_0041b790(param_1,iVar1,param_2,local_1c);
    iVar1 = iVar2;
  }
  return iVar1;
}




/* Function: FUN_00417d44 */

undefined4 FUN_00417d44(int param_1)

{
  if (param_1 == 0x10c) {
    return 1;
  }
  if (param_1 == 0x2d) {
    return 0;
  }
  return 2;
}




/* Function: FUN_00417d64 */

void FUN_00417d64(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0x11a) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    FUN_0041871c(param_1);
    FUN_0041a98c(uVar2,uVar1);
  }
  else if (iVar3 == 0x11b) {
    FUN_00418298(param_1,*(undefined4 *)(param_1 + 0x10));
    FUN_0041871c(param_1);
  }
  else if (iVar3 == 0x10b) {
    FUN_0041b528(uVar2,0xffffffff);
    FUN_0041871c(param_1);
  }
  else if (iVar3 == 0x7b) {
    FUN_004182b8(param_1);
  }
  else {
    if (iVar3 != 0x108) {
      if (iVar3 == 0x28) {
        FUN_0041871c(param_1);
        FUN_00417c7c(param_1,param_2);
        FUN_004186f8(param_1,0x29);
        return;
      }
      if ((iVar3 != 0x25) && (iVar3 != 0x113)) {
        FUN_0041b8b4(param_1,"<expression> expected");
        return;
      }
      FUN_00417e78(param_1,param_2);
      return;
    }
    FUN_0041871c(param_1);
    FUN_00418784(param_1,0,*(undefined4 *)(param_1 + 0x34));
  }
  *param_2 = 3;
  param_2[2] = 0xffffffff;
  param_2[1] = 0xffffffff;
  return;
}




/* Function: FUN_00417e78 */

void FUN_00417e78(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00418958(param_1,0x25);
  if (iVar1 == 0) {
    uVar2 = FUN_00418894(param_1);
    FUN_00417ed4(param_1,uVar2,param_2);
  }
  else {
    uVar2 = FUN_00418894(param_1);
    FUN_00417ff0(param_1,uVar2);
    *param_2 = 3;
    param_2[2] = 0xffffffff;
    param_2[1] = 0xffffffff;
  }
  FUN_00418100(param_1,param_2);
  return;
}




/* Function: FUN_00417ed4 */

void FUN_00417ed4(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00417f24(param_1,param_2,param_3);
  if (0 < iVar1) {
    FUN_0041c8a4(param_1,"cannot access a variable in outer scope",param_2 + 0x14);
    return;
  }
  if (iVar1 != -1) {
    return;
  }
  uVar2 = FUN_00417f98(*(undefined4 *)(param_1 + 0x28),param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  return;
}




/* Function: FUN_00417f24 */

int FUN_00417f24(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  piVar1 = *(int **)(param_1 + 0x28);
  do {
    if (piVar1 == (int *)0x0) {
      *param_3 = 0;
      return -1;
    }
    iVar3 = *(short *)((int)piVar1 + 0x1e) + -1;
    if (-1 < iVar3) {
      do {
        if (param_2 == *(int *)(piVar1[iVar3 + 0x6b] * 0xc + *(int *)(*piVar1 + 0x38))) {
          *param_3 = 1;
          param_3[1] = iVar3;
          return iVar2;
        }
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    iVar2 = iVar2 + 1;
    piVar1 = (int *)piVar1[1];
  } while( true );
}




/* Function: FUN_00417ff0 */

void FUN_00417ff0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_18 [4];
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = FUN_00417f24(param_1,param_2,local_18);
  if (iVar2 == -1) {
    iVar2 = *(int *)(iVar1 + 4);
    if (iVar2 == 0) {
      FUN_0041c8a4(param_1,"cannot access upvalue in main",param_2 + 0x14);
      iVar2 = *(int *)(iVar1 + 4);
    }
    local_14 = FUN_00417f98(iVar2,param_2);
  }
  else if (iVar2 != 1) {
    FUN_0041c8a4(param_1,"upvalue must be global or local to immediately outer scope",param_2 + 0x14
                );
  }
  uVar3 = FUN_00418074(param_1,local_18);
  FUN_0041aacc(iVar1,10,uVar3);
  return;
}




/* Function: FUN_00418074 */

int FUN_00418074(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x28);
  iVar5 = 0;
  iVar4 = (int)*(short *)(iVar2 + 0x20);
  if (0 < iVar4) {
    iVar3 = 0;
    do {
      if ((*param_2 == *(int *)(iVar3 + 0x2c + iVar2)) &&
         (*(int *)(iVar3 + 0x30 + iVar2) == param_2[1])) {
        return iVar5;
      }
      iVar3 = iVar3 + 0xc;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  FUN_0041bdfc(param_1,iVar4 + 1,0x20,"upvalues");
  iVar4 = *(short *)(iVar2 + 0x20) * 0xc;
  *(int *)(iVar4 + 0x2c + iVar2) = *param_2;
  *(int *)(iVar4 + 0x30 + iVar2) = param_2[1];
  *(int *)(iVar4 + 0x34 + iVar2) = param_2[2];
  sVar1 = *(short *)(iVar2 + 0x20);
  *(short *)(iVar2 + 0x20) = sVar1 + 1;
  return (int)sVar1;
}




/* Function: FUN_00418100 */

void FUN_00418100(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  while( true ) {
    while( true ) {
      while( true ) {
        while (iVar1 = *(int *)(param_1 + 8), iVar1 == 0x2e) {
          FUN_0041871c(param_1);
          FUN_0041b19c(param_1,param_2,1);
          uVar2 = FUN_00418768(param_1);
          FUN_0041a974(param_1,uVar2);
          *param_2 = 2;
        }
        if (iVar1 != 0x5b) break;
        FUN_0041871c(param_1);
        FUN_0041b19c(param_1,param_2,1);
        *param_2 = 2;
        FUN_004184e8(param_1);
        FUN_004186f8(param_1,0x5d);
      }
      if (iVar1 != 0x3a) break;
      FUN_0041871c(param_1);
      uVar2 = FUN_00418768(param_1);
      FUN_0041b19c(param_1,param_2,1);
      FUN_0041aacc(*(undefined4 *)(param_1 + 0x28),0x10,uVar2);
      FUN_00418200(param_1,1);
      *param_2 = 3;
      param_2[2] = 0xffffffff;
      param_2[1] = 0xffffffff;
    }
    if (((iVar1 != 0x28) && (iVar1 != 0x7b)) && (iVar1 != 0x11b)) break;
    FUN_0041b19c(param_1,param_2,1);
    FUN_00418200(param_1,0);
    *param_2 = 3;
    param_2[2] = 0xffffffff;
    param_2[1] = 0xffffffff;
  }
  return;
}




/* Function: FUN_00418200 */

void FUN_00418200(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 8);
  iVar4 = (*(short *)(iVar1 + 0x1c) - param_2) + -1;
  if (iVar2 == 0x28) {
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    FUN_0041871c(param_1);
    if (*(int *)(param_1 + 8) != 0x29) {
      FUN_00417c1c(param_1);
    }
    FUN_00418668(param_1,0x29,0x28,uVar3);
  }
  else if (iVar2 == 0x7b) {
    FUN_004182b8(param_1);
  }
  else if (iVar2 == 0x11b) {
    FUN_00418298(param_1,*(undefined4 *)(param_1 + 0x10));
    FUN_0041871c(param_1);
  }
  else {
    FUN_0041b8b4(param_1,"function arguments expected");
  }
  *(short *)(iVar1 + 0x1c) = (short)iVar4;
  FUN_0041aae4(iVar1,2,iVar4,0xff);
  return;
}




/* Function: FUN_00418298 */

void FUN_00418298(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00417f98(*(undefined4 *)(param_1 + 0x28),param_2);
  FUN_0041a974(param_1,uVar1);
  return;
}




/* Function: FUN_004182b8 */

void FUN_004182b8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  piVar1 = *(int **)(param_1 + 0x28);
  local_14 = *(undefined4 *)(param_1 + 0x34);
  iVar2 = FUN_0041aacc(piVar1,0x11,0);
  FUN_004186f8(param_1,0x7b);
  FUN_00418368(param_1,&local_24);
  iVar3 = FUN_00418958(param_1,0x3b);
  iVar4 = local_24;
  if (iVar3 != 0) {
    FUN_00418368(param_1,&local_1c);
    FUN_0041864c(param_1,local_20 != local_18,"invalid constructor syntax");
    iVar4 = local_24 + local_1c;
  }
  FUN_00418668(param_1,0x7d,0x7b,local_14);
  FUN_0041bdfc(param_1,iVar4,0x3ffffff,"elements in a table constructor");
  iVar3 = *(int *)(*piVar1 + 0x18);
  *(uint *)(iVar3 + iVar2 * 4) = *(uint *)(iVar3 + iVar2 * 4) & 0x3f | iVar4 << 6;
  return;
}




/* Function: FUN_00418368 */

void FUN_00418368(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 == 0x3b) || (iVar1 == 0x7d)) {
    *param_2 = 0;
    param_2[1] = *(undefined4 *)(param_1 + 8);
    return;
  }
  if (iVar1 == 0x113) {
    FUN_00418634(param_1);
    if (*(int *)(param_1 + 0x18) != 0x3d) {
LAB_004183af:
      uVar2 = FUN_004183d4(param_1);
      *param_2 = uVar2;
      param_2[1] = 0;
      return;
    }
  }
  else if (iVar1 != 0x5b) goto LAB_004183af;
  uVar2 = FUN_0041850c(param_1);
  *param_2 = uVar2;
  param_2[1] = 1;
  return;
}




/* Function: FUN_004183d4 */

int FUN_004183d4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  iVar2 = 1;
  FUN_004184e8(param_1);
  if (*(int *)(param_1 + 8) == 0x2c) {
    do {
      FUN_0041871c(param_1,uVar4);
      if (*(int *)(param_1 + 8) == 0x3b) {
        iVar1 = iVar2 / 0x3e;
        iVar3 = iVar2 % 0x3e;
        break;
      }
      if (*(int *)(param_1 + 8) == 0x7d) {
        iVar1 = iVar2 / 0x3e;
        iVar3 = iVar2 % 0x3e;
        break;
      }
      FUN_004184e8(param_1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar2 / 0x3e;
      FUN_0041bdfc(param_1,iVar1,0x1ffff,"`item groups\' in a list initializer");
      iVar3 = iVar2 % 0x3e;
      if (iVar3 == 0) {
        FUN_0041aae4(uVar4,0x15,iVar1 + -1,0x3e);
      }
    } while (*(int *)(param_1 + 8) == 0x2c);
  }
  else {
    iVar1 = 0;
    iVar3 = 1;
  }
  FUN_0041aae4(uVar4,0x15,iVar1,iVar3);
  return iVar2;
}




/* Function: FUN_004184e8 */

void FUN_004184e8(undefined4 param_1)

{
  undefined1 local_10 [12];
  
  FUN_00417c7c(param_1,local_10);
  FUN_0041b19c(param_1,local_10,1);
  return;
}




/* Function: FUN_0041850c */

int FUN_0041850c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  iVar2 = 1;
  FUN_004185d4(param_1);
  if (*(int *)(param_1 + 8) == 0x2c) {
    do {
      FUN_0041871c(param_1);
      if (*(int *)(param_1 + 8) == 0x3b) {
        iVar3 = iVar2 % 0x1f;
        break;
      }
      if (*(int *)(param_1 + 8) == 0x7d) {
        iVar3 = iVar2 % 0x1f;
        break;
      }
      FUN_004185d4(param_1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar2 % 0x1f;
      if (iVar3 == 0) {
        FUN_0041aacc(uVar1,0x16,0x1f);
      }
    } while (*(int *)(param_1 + 8) == 0x2c);
  }
  else {
    iVar3 = 1;
  }
  FUN_0041aacc(uVar1,0x16,iVar3);
  return iVar2;
}




/* Function: FUN_004185d4 */

void FUN_004185d4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0x113) {
    uVar1 = FUN_00418768(param_1);
    FUN_0041a974(param_1,uVar1);
  }
  else if (*(int *)(param_1 + 8) == 0x5b) {
    FUN_0041871c(param_1);
    FUN_004184e8(param_1);
    FUN_004186f8(param_1,0x5d);
  }
  else {
    FUN_0041b8b4(param_1,"<name> or `[\' expected");
  }
  FUN_004186f8(param_1,0x3d);
  FUN_004184e8(param_1);
  return;
}




/* Function: FUN_00418634 */

void FUN_00418634(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041b960(param_1,param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}




/* Function: FUN_0041864c */

void FUN_0041864c(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    FUN_0041b8b4(param_1,param_3);
  }
  return;
}




/* Function: FUN_00418668 */

void FUN_00418668(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  char local_6c [100];
  
  if (param_2 != *(int *)(param_1 + 8)) {
    if (param_4 == *(int *)(param_1 + 0x34)) {
      FUN_00419430(param_1,param_2);
    }
    else {
      FUN_0041c7f4(param_2,local_8c);
      FUN_0041c7f4(param_3,local_7c);
      sprintf(local_6c,"`%.20s\' expected (to close `%.20s\' at line %d)",local_8c,local_7c,param_4)
      ;
      FUN_0041b8b4(param_1,local_6c);
    }
  }
  FUN_0041871c(param_1);
  return;
}




/* Function: FUN_004186f8 */

void FUN_004186f8(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 8)) {
    FUN_00419430(param_1,param_2);
  }
  FUN_0041871c(param_1);
  return;
}




/* Function: FUN_0041871c */

void FUN_0041871c(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x18) != 0x11c) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x18) = 0x11c;
    return;
  }
  uVar1 = FUN_0041b960(param_1,param_1 + 0x10);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}




/* Function: FUN_00418768 */

void FUN_00418768(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00418894(param_1);
  FUN_00417f98(*(undefined4 *)(param_1 + 0x28),uVar1);
  return;
}




/* Function: FUN_00418784 */

void FUN_00418784(undefined4 param_1,int param_2,undefined4 param_3)

{
  int local_4d4 [307];
  
  FUN_004179b0(param_1,local_4d4);
  *(undefined4 *)(local_4d4[0] + 0x3c) = param_3;
  FUN_004186f8(param_1,0x28);
  if (param_2 != 0) {
    FUN_0041924c(param_1,&DAT_0058776c,0);
    FUN_004189e4(param_1,1);
  }
  FUN_00418818(param_1);
  FUN_004186f8(param_1,0x29);
  FUN_00417a10(param_1);
  FUN_00418668(param_1,0x106,0x108,param_3);
  FUN_00418a3c(param_1);
  FUN_00418b6c(param_1,local_4d4);
  return;
}




/* Function: FUN_00418818 */

void FUN_00418818(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = 0;
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != 0x29) {
    uVar1 = 0;
    while (iVar3 != 0x115) {
      if (iVar3 == 0x113) {
        uVar2 = FUN_00418894(param_1);
        FUN_004188c4(param_1,uVar2,iVar4);
        iVar4 = iVar4 + 1;
      }
      else {
        FUN_0041b8b4(param_1,"<name> or `...\' expected");
      }
      iVar3 = FUN_00418958(param_1,0x2c);
      if (iVar3 == 0) goto LAB_00418846;
      iVar3 = *(int *)(param_1 + 8);
    }
    FUN_0041871c(param_1);
    uVar1 = 1;
  }
LAB_00418846:
  FUN_00418978(param_1,iVar4,uVar1);
  return;
}




/* Function: FUN_00418894 */

undefined4 FUN_00418894(int param_1)

{
  undefined4 uVar1;
  
  FUN_0041864c(param_1,*(int *)(param_1 + 8) == 0x113,"<name> expected");
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  FUN_0041871c(param_1);
  return uVar1;
}




/* Function: FUN_004188c4 */

void FUN_004188c4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  FUN_0041bdfc(param_1,param_3 + 1 + (int)*(short *)(iVar1 + 0x1e),200,"local variables");
  uVar2 = FUN_0041890c(param_1,param_2);
  *(undefined4 *)(iVar1 + 0x1ac + (param_3 + *(short *)(iVar1 + 0x1e)) * 4) = uVar2;
  return;
}




/* Function: FUN_0041890c */

int FUN_0041890c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x28);
  iVar2 = FUN_00419e0c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(iVar1 + 0x38),
                       *(undefined4 *)(iVar1 + 0x34),1,0xc,&DAT_00582ad8,0x7ffffffd);
  *(int *)(iVar1 + 0x38) = iVar2;
  *(undefined4 *)(*(int *)(iVar1 + 0x34) * 0xc + iVar2) = param_2;
  iVar2 = *(int *)(iVar1 + 0x34);
  *(int *)(iVar1 + 0x34) = iVar2 + 1;
  return iVar2;
}




/* Function: FUN_00418958 */

undefined4 FUN_00418958(int param_1,int param_2)

{
  if (*(int *)(param_1 + 8) == param_2) {
    FUN_0041871c(param_1);
    return 1;
  }
  return 0;
}




/* Function: FUN_00418978 */

void FUN_00418978(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x28);
  FUN_004189e4(param_1,param_2);
  FUN_0041bdfc(param_1,(int)*(short *)((int)piVar1 + 0x1e),100,"parameters");
  *(undefined2 *)(*piVar1 + 0x20) = *(undefined2 *)((int)piVar1 + 0x1e);
  *(short *)(*piVar1 + 0x22) = (short)param_3;
  if (param_3 != 0) {
    FUN_0041924c(param_1,&DAT_0058a2d8,0);
    FUN_004189e4(param_1,1);
  }
  FUN_0041ae84(piVar1,(int)*(short *)((int)piVar1 + 0x1e));
  return;
}




/* Function: FUN_004189e4 */

void FUN_004189e4(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x28);
  iVar3 = param_2 + -1;
  if (param_2 != 0) {
    do {
      sVar1 = *(short *)((int)piVar2 + 0x1e);
      *(short *)((int)piVar2 + 0x1e) = sVar1 + 1;
      iVar3 = iVar3 + -1;
      *(int *)(*(int *)(*piVar2 + 0x38) + 4 + piVar2[sVar1 + 0x6b] * 0xc) = piVar2[4];
    } while (iVar3 != -1);
  }
  return;
}




/* Function: FUN_00418a3c */

void FUN_00418a3c(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  piVar2 = *(int **)(param_1 + 0x28);
  puVar3 = (undefined4 *)*piVar2;
  FUN_0041b624(piVar2,0);
  FUN_0041b584(piVar2);
  uVar5 = FUN_00419e70(uVar1,puVar3[6],piVar2[4] * 4);
  puVar3[6] = uVar5;
  uVar5 = FUN_00419e70(uVar1,puVar3[2],puVar3[3] * 4);
  puVar3[2] = uVar5;
  uVar5 = FUN_00419e70(uVar1,*puVar3,puVar3[1] * 8);
  *puVar3 = uVar5;
  uVar5 = FUN_00419e70(uVar1,puVar3[4],puVar3[5] * 4);
  puVar3[4] = uVar5;
  FUN_00418b10(param_1,(int)*(short *)((int)piVar2 + 0x1e));
  uVar5 = FUN_00419e70(uVar1,puVar3[0xe],puVar3[0xd] * 0xc);
  puVar3[0xe] = uVar5;
  iVar6 = FUN_00419e70(uVar1,puVar3[0xb],puVar3[0xc] * 4 + 4);
  puVar3[0xb] = iVar6;
  iVar4 = puVar3[0xc];
  puVar3[0xc] = iVar4 + 1;
  *(undefined4 *)(iVar6 + iVar4 * 4) = 0x7ffffffd;
  FUN_0041a7e4(uVar1,puVar3,piVar2[4]);
  *(int *)(param_1 + 0x28) = piVar2[1];
  return;
}




/* Function: FUN_00418b10 */

void FUN_00418b10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  
  piVar1 = *(int **)(param_1 + 0x28);
  iVar2 = param_2 + -1;
  if (param_2 != 0) {
    do {
      sVar3 = *(short *)((int)piVar1 + 0x1e) + -1;
      *(short *)((int)piVar1 + 0x1e) = sVar3;
      *(int *)(*(int *)(*piVar1 + 0x38) + 8 + piVar1[sVar3 + 0x6b] * 0xc) = piVar1[4];
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}




/* Function: FUN_00418c0c */

undefined4 FUN_00418c0c(int param_1)

{
  if (param_1 == 0x2b) {
    return 0;
  }
  if (param_1 == 0x2d) {
    return 1;
  }
  if (param_1 == 0x2a) {
    return 2;
  }
  if (param_1 == 0x2f) {
    return 3;
  }
  if (param_1 == 0x5e) {
    return 4;
  }
  if (param_1 == 0x114) {
    return 5;
  }
  if (param_1 == 0x119) {
    return 6;
  }
  if (param_1 != 0x116) {
    if (param_1 == 0x3c) {
      return 8;
    }
    if (param_1 == 0x118) {
      return 9;
    }
    if (param_1 == 0x3e) {
      return 10;
    }
    if (param_1 != 0x117) {
      if (param_1 == 0x101) {
        return 0xc;
      }
      if (param_1 == 0x10d) {
        return 0xd;
      }
      return 0xe;
    }
    return 0xb;
  }
  return 7;
}




/* Function: FUN_00418ccc */

void FUN_00418ccc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int local_14 [3];
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  FUN_00417e78(param_1,local_14);
  if (local_14[0] != 3) {
    uVar2 = FUN_00418d2c(param_1,local_14,1);
    FUN_0041b528(uVar1,uVar2);
    return;
  }
  uVar2 = FUN_0041b5f8(uVar1);
  FUN_0041864c(param_1,uVar2,"syntax error");
  FUN_0041b5b4(uVar1,0);
  return;
}




/* Function: FUN_00418d2c */

int FUN_00418d2c(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int local_1c [3];
  
  iVar2 = 0;
  FUN_0041bdfc(param_1,param_3,0xfe,"variables in a multiple assignment");
  if (*(int *)(param_1 + 8) == 0x2c) {
    FUN_0041871c(param_1);
    FUN_00417e78(param_1,local_1c);
    FUN_0041864c(param_1,local_1c[0] != 3,"syntax error");
    iVar2 = FUN_00418d2c(param_1,local_1c,param_3 + 1);
  }
  else {
    FUN_004186f8(param_1,0x3d);
    uVar1 = FUN_00417c1c(param_1);
    FUN_00418de8(param_1,param_3,uVar1);
  }
  if (*param_2 == 2) {
    FUN_0041aae4(*(undefined4 *)(param_1 + 0x28),0x14,param_3 + 2 + iVar2,1);
    iVar2 = iVar2 + 2;
  }
  else {
    FUN_0041b080(param_1,param_2);
  }
  return iVar2;
}




/* Function: FUN_00418de8 */

void FUN_00418de8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  param_2 = param_3 - param_2;
  if (0 < param_3) {
    iVar2 = FUN_0041b5f8(uVar1);
    if (iVar2 != 0) {
      param_2 = param_2 + -1;
      if (param_2 < 1) {
        FUN_0041b5b4(uVar1,-param_2);
        param_2 = 0;
      }
      else {
        FUN_0041b5b4(uVar1,0);
      }
    }
  }
  FUN_0041b528(uVar1,param_2);
  return;
}




/* Function: FUN_00418e3c */

void FUN_00418e3c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    FUN_0041871c(param_1);
    uVar1 = FUN_00418894(param_1);
    iVar3 = iVar2 + 1;
    FUN_004188c4(param_1,uVar1,iVar2);
    iVar2 = iVar3;
  } while (*(int *)(param_1 + 8) == 0x2c);
  iVar2 = FUN_00418958(param_1,0x3d);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00417c1c(param_1);
  }
  FUN_00418de8(param_1,iVar3,uVar1);
  FUN_004189e4(param_1,iVar3);
  return;
}




/* Function: FUN_00418e98 */

void FUN_00418e98(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_10 [12];
  
  FUN_0041871c(param_1);
  uVar1 = FUN_00418ecc(param_1,local_10);
  FUN_00418784(param_1,uVar1,param_2);
  FUN_0041b080(param_1,local_10);
  return;
}




/* Function: FUN_00418ecc */

bool FUN_00418ecc(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = false;
  uVar2 = FUN_00418894(param_1);
  FUN_00417ed4(param_1,uVar2,param_2);
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 == 0x3a) || (iVar1 == 0x2e)) {
    bVar3 = iVar1 == 0x3a;
    FUN_0041871c(param_1);
    FUN_0041b19c(param_1,param_2,1);
    uVar2 = FUN_00418768(param_1);
    FUN_0041a974(param_1,uVar2);
    *param_2 = 2;
  }
  return bVar3;
}




/* Function: FUN_00418f34 */

void FUN_00418f34(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_24 [12];
  undefined1 local_18 [8];
  undefined4 local_10;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = FUN_0041b584(uVar1);
  FUN_00418f9c(uVar1,local_24);
  FUN_0041871c(param_1);
  FUN_00418fbc(param_1);
  FUN_00418668(param_1,0x111,0x10e,param_2);
  FUN_00418ff4(param_1,local_18);
  FUN_0041b550(uVar1,local_10,uVar2);
  FUN_00419018(uVar1,local_24);
  return;
}




/* Function: FUN_00418f9c */

void FUN_00418f9c(int param_1,undefined4 *param_2)

{
  param_2[2] = (int)*(short *)(param_1 + 0x1c);
  param_2[1] = 0xffffffff;
  *param_2 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 **)(param_1 + 0x28) = param_2;
  return;
}




/* Function: FUN_00418fbc */

void FUN_00418fbc(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sVar1 = *(short *)(iVar2 + 0x1e);
  FUN_00417a10(param_1);
  FUN_0041b528(iVar2,(int)*(short *)(iVar2 + 0x1e) - (int)sVar1);
  FUN_00418b10(param_1,(int)*(short *)(iVar2 + 0x1e) - (int)sVar1);
  return;
}




/* Function: FUN_00418ff4 */

void FUN_00418ff4(int param_1,undefined4 param_2)

{
  FUN_00417c7c(param_1,param_2);
  FUN_0041b768(*(undefined4 *)(param_1 + 0x28),param_2,0);
  return;
}




/* Function: FUN_00419018 */

void FUN_00419018(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x28) = *param_2;
  uVar1 = FUN_0041b584(param_1);
  FUN_0041b550(param_1,param_2[1],uVar1);
  return;
}




/* Function: FUN_00419040 */

void FUN_00419040(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_14 [12];
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  FUN_00418f9c(uVar1,local_14);
  FUN_0041871c(param_1);
  uVar2 = FUN_00418894(param_1);
  if (*(int *)(param_1 + 8) == 0x3d) {
    FUN_004191c8(param_1,uVar2);
  }
  else if (*(int *)(param_1 + 8) == 0x2c) {
    FUN_004190c0(param_1,uVar2);
  }
  else {
    FUN_0041b8b4(param_1,"`=\' or `,\' expected");
  }
  FUN_00418668(param_1,0x106,0x107,param_2);
  FUN_00419018(uVar1,local_14);
  return;
}




/* Function: FUN_004190c0 */

void FUN_004190c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_004186f8(param_1,0x2c);
  uVar1 = FUN_00418894(param_1);
  if (*(int *)(param_1 + 8) == 0x113) {
    iVar2 = FUN_0041a5a8(*(undefined4 *)(param_1 + 0x2c),&DAT_005876f4);
    if (iVar2 == *(int *)(param_1 + 0x10)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  FUN_0041864c(param_1,uVar3,"`in\' expected");
  FUN_0041871c(param_1);
  FUN_004184e8(param_1);
  FUN_0041924c(param_1,"(table)",0);
  FUN_004188c4(param_1,param_2,1);
  FUN_004188c4(param_1,uVar1,2);
  FUN_00419154(param_1,3,0x2e,0x2f);
  return;
}




/* Function: FUN_00419154 */

void FUN_00419154(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = FUN_0041aacc(uVar1,param_3,0xffffffff);
  uVar3 = FUN_0041b584(uVar1);
  FUN_004186f8(param_1,0x103);
  FUN_004189e4(param_1,param_2);
  FUN_00418fbc(param_1);
  uVar4 = FUN_0041aacc(uVar1,param_4,0xffffffff);
  FUN_0041b550(uVar1,uVar4,uVar3);
  uVar3 = FUN_0041b584(uVar1);
  FUN_0041b550(uVar1,uVar2,uVar3);
  FUN_00418b10(param_1,param_2);
  return;
}




/* Function: FUN_004191c8 */

void FUN_004191c8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  FUN_004186f8(param_1,0x3d);
  FUN_004184e8(param_1);
  FUN_004186f8(param_1,0x2c);
  FUN_004184e8(param_1);
  iVar2 = FUN_00418958(param_1,0x2c);
  if (iVar2 == 0) {
    FUN_0041aacc(uVar1,6,1);
  }
  else {
    FUN_004184e8(param_1);
  }
  FUN_004188c4(param_1,param_2,0);
  FUN_0041924c(param_1,"(limit)",1);
  FUN_0041924c(param_1,"(step)",2);
  FUN_00419154(param_1,3,0x2c,0x2d);
  return;
}




/* Function: FUN_0041924c */

void FUN_0041924c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041a588(*(undefined4 *)(param_1 + 0x2c),param_2);
  FUN_004188c4(param_1,uVar1,param_3);
  return;
}




/* Function: FUN_00419270 */

void FUN_00419270(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_24 [12];
  undefined1 local_18 [8];
  undefined4 local_10;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = FUN_0041b584(uVar1);
  FUN_00418f9c(uVar1,local_24);
  FUN_0041871c(param_1);
  FUN_00418ff4(param_1,local_18);
  FUN_004186f8(param_1,0x103);
  FUN_00418fbc(param_1);
  uVar3 = FUN_0041a93c(uVar1);
  FUN_0041b550(uVar1,uVar3,uVar2);
  uVar2 = FUN_0041b584(uVar1);
  FUN_0041b550(uVar1,local_10,uVar2);
  FUN_00418668(param_1,0x106,0x112,param_2);
  FUN_00419018(uVar1,local_24);
  return;
}




/* Function: FUN_004192f8 */

void FUN_004192f8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined4 local_c;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  local_18 = 0xffffffff;
  FUN_004193d8(param_1,local_14);
  iVar2 = *(int *)(param_1 + 8);
  while (iVar2 == 0x105) {
    uVar3 = FUN_0041a93c(uVar1);
    FUN_0041b854(uVar1,&local_18,uVar3);
    uVar3 = FUN_0041b584(uVar1);
    FUN_0041b550(uVar1,local_c,uVar3);
    FUN_004193d8(param_1,local_14);
    iVar2 = *(int *)(param_1 + 8);
  }
  if (iVar2 == 0x104) {
    uVar3 = FUN_0041a93c(uVar1);
    FUN_0041b854(uVar1,&local_18,uVar3);
    uVar3 = FUN_0041b584(uVar1);
    FUN_0041b550(uVar1,local_c,uVar3);
    FUN_0041871c(param_1);
    FUN_00418fbc(param_1);
  }
  else {
    FUN_0041b854(uVar1,&local_18,local_c);
  }
  uVar3 = FUN_0041b584(uVar1);
  FUN_0041b550(uVar1,local_18,uVar3);
  FUN_00418668(param_1,0x106,0x109,param_2);
  return;
}




/* Function: FUN_004193d8 */

void FUN_004193d8(undefined4 param_1,undefined4 param_2)

{
  FUN_0041871c(param_1);
  FUN_00418ff4(param_1,param_2);
  FUN_004186f8(param_1,0x110);
  FUN_00418fbc(param_1);
  return;
}




/* Function: FUN_00419404 */

undefined4 FUN_00419404(int param_1)

{
  if ((0x103 < param_1) && (((param_1 < 0x107 || (param_1 == 0x111)) || (param_1 == 0x11c)))) {
    return 1;
  }
  return 0;
}




/* Function: FUN_00419430 */

void FUN_00419430(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_74 [16];
  char local_64 [100];
  
  FUN_0041c7f4(param_2,local_74);
  sprintf(local_64,"`%.20s\' expected",local_74);
  FUN_0041b8b4(param_1,local_64);
  return;
}




/* Function: FUN_00419470 */

undefined4 FUN_00419470(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_ESI;
  
  FUN_00419490(param_1,&stack0xfffffffc,4,param_2,param_3);
  return unaff_ESI;
}




/* Function: FUN_00419490 */

void FUN_00419490(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (param_5 == 0) {
    FUN_00419500(param_1,param_4,param_2,param_3);
  }
  else {
    puVar2 = (undefined1 *)(param_2 + -1 + param_3);
    iVar3 = param_3 + -1;
    if (param_3 != 0) {
      do {
        uVar1 = FUN_004199c0(param_1,param_4);
        *puVar2 = uVar1;
        puVar2 = puVar2 + -1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
  }
  return;
}




/* Function: FUN_00419500 */

void FUN_00419500(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00419d90(param_2,param_3,param_4);
  if (iVar1 != 0) {
    FUN_0041952c(param_1,param_2);
  }
  return;
}




/* Function: FUN_0041952c */

void FUN_0041952c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00419c30(param_2);
  FUN_0041a1c0(param_1,"unexpected end of file in `%.99s\'",uVar1);
  return;
}




/* Function: FUN_00419548 */

float10 FUN_00419548(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  double local_8;
  
  FUN_00419490(param_1,&local_8,8,param_2,param_3);
  return (float10)local_8;
}




/* Function: FUN_0041956c */

void FUN_0041956c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00419470(param_1,param_3,param_4);
  uVar2 = FUN_00419e70(param_1,0,iVar1 * 4);
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  FUN_004195e0(param_1,uVar2,iVar1,4,param_3,param_4);
  if (*(int *)(*(int *)(param_2 + 0x18) + -4 + iVar1 * 4) != 0) {
    uVar2 = FUN_00419c30(param_3);
    FUN_0041a1c0(param_1,"bad code in `%.99s\'",uVar2);
  }
  FUN_0041a7e4(param_1,param_2,iVar1);
  return;
}




/* Function: FUN_004195e0 */

void FUN_004195e0(undefined4 param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_6 == 0) {
    FUN_00419500(param_1,param_5,param_2,param_3 * param_4);
  }
  else {
    iVar3 = param_3 + -1;
    if (param_3 != 0) {
      do {
        param_2 = param_2 + param_4;
        iVar3 = iVar3 + -1;
        iVar4 = param_4 + -1;
        puVar1 = param_2;
        if (param_4 != 0) {
          do {
            uVar2 = FUN_004199c0(param_1,param_5);
            puVar1[-1] = uVar2;
            iVar4 = iVar4 + -1;
            puVar1 = puVar1 + -1;
          } while (iVar4 != -1);
        }
      } while (iVar3 != -1);
    }
  }
  return;
}




/* Function: FUN_00419698 */

void FUN_00419698(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00419470(param_1,param_3,param_4);
  *(int *)(param_2 + 0x34) = iVar1;
  uVar2 = FUN_00419e70(param_1,0,iVar1 * 0xc);
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  if (0 < iVar1) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      uVar2 = FUN_00419750(param_1,param_3,param_4);
      *(undefined4 *)(iVar3 + *(int *)(param_2 + 0x38)) = uVar2;
      uVar2 = FUN_00419470(param_1,param_3,param_4);
      *(undefined4 *)(iVar3 + 4 + *(int *)(param_2 + 0x38)) = uVar2;
      uVar2 = FUN_00419470(param_1,param_3,param_4);
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar3 + 8 + *(int *)(param_2 + 0x38)) = uVar2;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 < iVar1);
  }
  return;
}




/* Function: FUN_00419750 */

undefined4 FUN_00419750(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00419470(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00419ff8(param_1,iVar1);
  FUN_00419490(param_1,uVar2,iVar1,param_2,0);
  uVar2 = FUN_0041a5d0(param_1,uVar2,iVar1 + -1);
  return uVar2;
}




/* Function: FUN_0041979c */

void FUN_0041979c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00419470(param_1,param_3,param_4);
  *(int *)(param_2 + 0x30) = iVar1;
  uVar2 = FUN_00419e70(param_1,0,iVar1 * 4);
  *(undefined4 *)(param_2 + 0x2c) = uVar2;
  FUN_004195e0(param_1,uVar2,iVar1,4,param_3,param_4);
  return;
}




/* Function: FUN_004197e8 */

void FUN_004197e8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00419470(param_1,param_3,param_4);
  param_2[3] = iVar1;
  uVar2 = FUN_00419e70(param_1,0,iVar1 * 4);
  param_2[2] = uVar2;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      uVar2 = FUN_00419750(param_1,param_3,param_4);
      *(undefined4 *)(param_2[2] + iVar3 * 4) = uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar1 = FUN_00419470(param_1,param_3,param_4);
  param_2[1] = iVar1;
  uVar2 = FUN_00419e70(param_1,0,iVar1 * 8);
  *param_2 = uVar2;
  FUN_004195e0(param_1,uVar2,iVar1,8,param_3,param_4);
  iVar1 = FUN_00419470(param_1,param_3,param_4);
  param_2[5] = iVar1;
  uVar2 = FUN_00419e70(param_1,0,iVar1 * 4);
  param_2[4] = uVar2;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      uVar2 = FUN_004198d4(param_1,param_3,param_4);
      *(undefined4 *)(param_2[4] + iVar3 * 4) = uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}




/* Function: FUN_004198d4 */

int FUN_004198d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0041a78c(param_1);
  uVar3 = FUN_00419750(param_1,param_2,param_3);
  *(undefined4 *)(iVar2 + 0x40) = uVar3;
  uVar3 = FUN_00419470(param_1,param_2,param_3);
  *(undefined4 *)(iVar2 + 0x3c) = uVar3;
  uVar1 = FUN_00419470(param_1,param_2,param_3);
  *(undefined2 *)(iVar2 + 0x20) = uVar1;
  uVar1 = FUN_004199c0(param_1,param_2);
  *(undefined2 *)(iVar2 + 0x22) = uVar1;
  uVar1 = FUN_00419470(param_1,param_2,param_3);
  *(undefined2 *)(iVar2 + 0x24) = uVar1;
  FUN_00419698(param_1,iVar2,param_2,param_3);
  FUN_0041979c(param_1,iVar2,param_2,param_3);
  FUN_004197e8(param_1,iVar2,param_2,param_3);
  FUN_0041956c(param_1,iVar2,param_2,param_3);
  return iVar2;
}




/* Function: FUN_00419954 */

void FUN_00419954(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  
  pcVar5 = "Lua";
  iVar4 = 0;
  if (DAT_005872bc != '\0') {
    iVar2 = FUN_004199c0(param_1,param_2);
    iVar4 = (int)DAT_005872bc;
    if (iVar2 == iVar4) {
      puVar6 = &DAT_005872bc;
      do {
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        iVar4 = 0;
        if (*pcVar1 == '\0') break;
        iVar2 = FUN_004199c0(param_1,param_2,puVar6);
        iVar4 = (int)*pcVar5;
      } while (iVar2 == iVar4);
    }
  }
  if (iVar4 != 0) {
    uVar3 = FUN_00419c30(param_2);
    FUN_0041a1c0(param_1,"bad signature in `%.99s\'",uVar3);
  }
  return;
}




/* Function: FUN_004199c0 */

uint FUN_004199c0(undefined4 param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar3 = (*(code *)param_2[2])(param_2);
  }
  else {
    pbVar2 = (byte *)param_2[1];
    param_2[1] = (int)(pbVar2 + 1);
    uVar3 = (uint)*pbVar2;
  }
  if (uVar3 == 0xffffffff) {
    FUN_0041952c(param_1,param_2);
  }
  return uVar3;
}




/* Function: FUN_00419a00 */

void FUN_00419a00(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004199c0(param_1,param_4);
  if (iVar1 != param_2) {
    uVar2 = FUN_00419c30(param_4);
    FUN_0041a1c0(param_1,"virtual machine mismatch in `%.99s\':\n  %.20s is %d but read %d",uVar2,
                 param_3,param_2,iVar1);
  }
  return;
}




/* Function: FUN_00419a40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00419a40(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  uint local_38;
  uint uStack_34;
  uint local_30;
  
  FUN_00419954(param_1,param_2);
  uVar2 = FUN_004199c0(param_1,param_2);
  uVar6 = (int)uVar2 >> 0x1f;
  if ((int)uVar2 < 0x41) {
    if ((int)uVar2 < 0x40) {
      uVar3 = FUN_00419c30(param_2);
      FUN_0041a1c0(param_1,"`%.99s\' too old:\n  read version %d.%d; expected at least %d.%d",uVar3,
                   (int)(((uint)((int)uVar2 >> 3) >> 0x1c) + uVar2) >> 4,
                   ((uVar2 ^ uVar6) - uVar6 & 0xf ^ uVar6) - uVar6,4,0);
    }
  }
  else {
    uVar3 = FUN_00419c30(param_2);
    FUN_0041a1c0(param_1,"`%.99s\' too new:\n  read version %d.%d; expected at most %d.%d",uVar3,
                 (int)(((uint)((int)uVar2 >> 3) >> 0x1c) + uVar2) >> 4,
                 ((uVar2 ^ uVar6) - uVar6 & 0xf ^ uVar6) - uVar6,4,0);
  }
  iVar4 = FUN_00419c20();
  iVar5 = FUN_004199c0(param_1,param_2);
  FUN_00419a00(param_1,4,"sizeof(int)",param_2);
  FUN_00419a00(param_1,4,"sizeof(size_t)",param_2);
  FUN_00419a00(param_1,4,"sizeof(Instruction)",param_2);
  FUN_00419a00(param_1,0x20,"SIZE_INSTRUCTION",param_2);
  FUN_00419a00(param_1,6,"SIZE_OP",param_2);
  FUN_00419a00(param_1,9,"SIZE_B",param_2);
  FUN_00419a00(param_1,8,"sizeof(Number)",param_2);
  fVar7 = (float10)FUN_00419548(param_1,param_2,iVar4 != iVar5);
  dVar1 = (double)fVar7;
  local_38 = SUB84(dVar1,0);
  uStack_34 = (uint)((ulonglong)dVar1 >> 0x20);
  uVar2 = uStack_34 >> 0x14 & 0x7ff;
  if (uVar2 < 0x3ff) {
    local_30 = 0;
  }
  else {
    local_30 = (uStack_34 << 0xb | local_38 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar2 & 0x1f);
    if ((longlong)dVar1 < 0) {
      local_30 = -local_30;
    }
  }
  if (local_30 != 0x12b9b0a1) {
    uVar3 = FUN_00419c30(param_2);
    FUN_0041a1c0(param_1,"unknown number format in `%.99s\':\n  read %.16g; expected %.16g",uVar3,
                 dVar1,_DAT_005b94a0);
  }
  return iVar4 != iVar5;
}




/* Function: FUN_00419c20 */

undefined4 FUN_00419c20(void)

{
  return 1;
}




/* Function: FUN_00419c30 */

char * FUN_00419c30(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x10);
  if (*pcVar1 != '@') {
    return pcVar1;
  }
  return pcVar1 + 1;
}




/* Function: FUN_00419c40 */

void FUN_00419c40(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00419a40(param_1,param_2);
  FUN_004198d4(param_1,param_2,uVar1);
  return;
}




/* Function: FUN_00419c60 */

undefined4 FUN_00419c60(undefined4 param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar1 = *param_2;
  *param_2 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar3 = (*(code *)param_2[2])(param_2);
  }
  else {
    pbVar2 = (byte *)param_2[1];
    param_2[1] = (int)(pbVar2 + 1);
    uVar3 = (uint)*pbVar2;
  }
  if (uVar3 == 0x1b) {
    uVar5 = FUN_00419c40(param_1,param_2);
  }
  iVar1 = *param_2;
  *param_2 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar3 = (*(code *)param_2[2])(param_2);
  }
  else {
    pbVar2 = (byte *)param_2[1];
    param_2[1] = (int)(pbVar2 + 1);
    uVar3 = (uint)*pbVar2;
  }
  if (uVar3 != 0xffffffff) {
    uVar4 = FUN_00419c30(param_2);
    FUN_0041a1c0(param_1,"`%.99s\' apparently contains more than one chunk",uVar4);
  }
  return uVar5;
}




/* Function: FUN_00419ce8 */

undefined4 * FUN_00419ce8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 != 0) {
    *param_1 = param_3;
    param_1[1] = param_2;
    param_1[2] = &LAB_00419ce0;
    param_1[3] = 0;
    param_1[4] = param_4;
    return param_1;
  }
  return (undefined4 *)0x0;
}




/* Function: FUN_00419d18 */

uint FUN_00419d18(int *param_1)

{
  size_t sVar1;
  
  if ((((FILE *)param_1[3])->_flag & 0x10U) != 0) {
    return 0xffffffff;
  }
  sVar1 = fread(param_1 + 5,1,0x100,(FILE *)param_1[3]);
  if (sVar1 == 0) {
    return 0xffffffff;
  }
  *param_1 = sVar1 - 1;
  param_1[1] = (int)param_1 + 0x15;
  return (uint)*(byte *)(param_1 + 5);
}




/* Function: FUN_00419d60 */

undefined4 * FUN_00419d60(undefined4 *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    *param_1 = 0;
    param_1[1] = param_1 + 5;
    param_1[2] = FUN_00419d18;
    param_1[3] = param_2;
    param_1[4] = param_3;
    return param_1;
  }
  return (undefined4 *)0x0;
}




/* Function: FUN_00419d90 */

uint FUN_00419d90(uint *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_3 != 0) {
    uVar3 = *param_1;
    do {
      if (uVar3 == 0) {
        iVar1 = (*(code *)param_1[2])(param_1);
        if (iVar1 == -1) {
          return param_3;
        }
        uVar3 = *param_1 + 1;
        *param_1 = uVar3;
        puVar4 = (undefined4 *)(param_1[1] - 1);
        param_1[1] = (uint)puVar4;
      }
      else {
        puVar4 = (undefined4 *)param_1[1];
      }
      uVar2 = uVar3;
      if (param_3 <= uVar3) {
        uVar2 = param_3;
      }
      puVar5 = param_2;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      uVar3 = *param_1 - uVar2;
      *param_1 = uVar3;
      param_2 = (undefined4 *)((int)param_2 + uVar2);
      param_1[1] = param_1[1] + uVar2;
      param_3 = param_3 - uVar2;
    } while (param_3 != 0);
  }
  return 0;
}




/* Function: FUN_00419e0c */

undefined4
FUN_00419e0c(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
            undefined4 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = param_3 + param_4;
  if ((uint)(param_7 - param_4) <= param_3) {
    FUN_00412884(param_1,param_6);
  }
  if ((param_3 < (uVar1 ^ param_3)) && ((param_3 == 0 || (3 < uVar1)))) {
    iVar2 = FUN_00419ed0(uVar1);
    uVar3 = FUN_00419e70(param_1,param_2,param_5 * iVar2);
    return uVar3;
  }
  return param_2;
}




/* Function: FUN_00419e70 */

void * FUN_00419e70(int param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  
  if (param_3 == 0) {
    free(param_2);
    return (void *)0x0;
  }
  if (0xfffffffc < param_3) {
    FUN_00412884(param_1,"memory allocation error: block too big");
  }
  pvVar1 = realloc(param_2,param_3);
  if (pvVar1 == (void *)0x0) {
    if (param_1 == 0) {
      return (void *)0x0;
    }
    FUN_004122e4(param_1,4);
  }
  return pvVar1;
}




/* Function: FUN_00419ed0 */

uint FUN_00419ed0(uint param_1)

{
  uint uVar1;
  
  uVar1 = 4;
  if (3 < param_1) {
    do {
      uVar1 = uVar1 * 2;
    } while (uVar1 <= param_1);
  }
  return uVar1;
}




/* Function: FUN_00419ee8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00419ee8(int *param_1,int *param_2)

{
  int iVar1;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xffffff80) != 0) {
      iVar1 = *param_1;
      if (iVar1 != *param_2) {
        return false;
      }
      if (iVar1 == 2) {
        return *(double *)(param_1 + 2) == *(double *)(param_2 + 2);
      }
      if ((iVar1 == 0) || (iVar1 == 3)) {
        return param_1[2] == param_2[2];
      }
      if (iVar1 == 4) {
        return param_1[2] == param_2[2];
      }
      if (iVar1 == 5) {
        return param_1[2] == param_2[2];
      }
      return true;
    }
    if (_DAT_005b71d0 != 0) break;
    FUN_004d34fc();
  }
  iVar1 = *param_1;
  if (iVar1 != *param_2) {
    return false;
  }
  if (iVar1 == 2) {
    return *(double *)(param_1 + 2) == *(double *)(param_2 + 2);
  }
  if ((iVar1 == 0) || (iVar1 == 3)) {
    return param_1[2] == param_2[2];
  }
  if (iVar1 == 4) {
    return param_1[2] == param_2[2];
  }
  if (iVar1 == 5) {
    return param_1[2] == param_2[2];
  }
  return true;
}




/* Function: FUN_00419ff8 */

undefined4 FUN_00419ff8(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 <= *(uint *)(param_1 + 0x1c)) {
    return *(undefined4 *)(param_1 + 0x18);
  }
  uVar1 = FUN_00419e70(param_1,*(undefined4 *)(param_1 + 0x18),param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(uint *)(param_1 + 0x60) = (*(int *)(param_1 + 0x60) + param_2) - *(int *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x1c) = param_2;
  return uVar1;
}




/* Function: FUN_0041a030 */

undefined4 FUN_0041a030(byte *param_1,double *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *local_10;
  double local_c;
  
  local_c = strtod((char *)param_1,(char **)&local_10);
  if (local_10 != param_1) {
    iVar2 = isspace((uint)*local_10);
    pbVar1 = local_10;
    while (iVar2 != 0) {
      local_10 = pbVar1 + 1;
      iVar2 = isspace((uint)pbVar1[1]);
      pbVar1 = local_10;
    }
    if (*pbVar1 == 0) {
      *param_2 = local_c;
      return 1;
    }
  }
  return 0;
}




/* Function: FUN_0041a0a0 */

void FUN_0041a0a0(char *param_1,char *param_2,size_t param_3)

{
  char cVar1;
  int iVar2;
  size_t _Count;
  char *pcVar3;
  char *pcVar4;
  
  if (*param_2 == '=') {
    strncpy(param_1,param_2 + 1,param_3);
    param_1[param_3 - 1] = '\0';
    return;
  }
  if (*param_2 == '@') {
    param_2 = param_2 + 1;
    iVar2 = 0;
    cVar1 = *param_2;
    pcVar3 = param_2;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      iVar2 = iVar2 + 1;
      cVar1 = *pcVar3;
    }
    if ((int)(param_3 - 0xd) < iVar2) {
      sprintf(param_1,"file `...%.99s\'",param_2 + (iVar2 - (param_3 - 0xd)));
      return;
    }
    sprintf(param_1,"file `%.99s\'",param_2);
    return;
  }
  _Count = strcspn(param_2,"\n");
  if ((int)(param_3 - 0x11) < (int)_Count) {
    _Count = param_3 - 0x11;
  }
  if (param_2[_Count] != '\0') {
    pcVar4 = "string \"";
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar2 = 0;
    cVar1 = *param_1;
    pcVar3 = param_1;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      iVar2 = iVar2 + 1;
      cVar1 = *pcVar3;
    }
    strncpy(param_1 + iVar2,param_2,_Count);
    pcVar3 = param_1 + iVar2 + _Count;
    pcVar4 = "...\"";
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    return;
  }
  sprintf(param_1,"string \"%.99s\"",param_2);
  return;
}




/* Function: FUN_0041a1c0 */

void FUN_0041a1c0(undefined4 param_1,char *param_2)

{
  char local_118 [280];
  
  vsprintf(local_118,param_2,&stack0x0000000c);
  FUN_00412884(param_1,local_118);
  return;
}




/* Function: FUN_0041a1f8 */

void FUN_0041a1f8(int param_1)

{
  *(int *)(param_1 + 0x60) =
       *(int *)(param_1 + 0x60) + (*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x38)) * -4;
  FUN_00419e70(param_1,*(undefined4 *)(param_1 + 0x34),0);
  FUN_00419e70(param_1,*(undefined4 *)(param_1 + 0x40),0);
  return;
}




/* Function: FUN_0041a228 */

void FUN_0041a228(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x40) + (param_2 >> 3 & *(int *)(param_1 + 0x38) - 1U) * 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_0041a27c(param_1,0,param_2);
      if (param_3 != -1) {
        *piVar1 = param_3;
      }
      return;
    }
    if ((param_2 == piVar1[1]) && ((param_3 == *piVar1 || (param_3 == -1)))) break;
    piVar1 = (int *)piVar1[3];
  }
  return;
}




/* Function: FUN_0041a27c */

undefined4 * FUN_0041a27c(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00419e70(param_1,0,param_2 + 0x18);
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = param_2;
  *puVar1 = 0;
  if (param_2 != 0) {
    param_3 = puVar1 + 6;
  }
  puVar1[1] = param_3;
  *(int *)(param_1 + 0x60) = param_2 + 0x15 + *(int *)(param_1 + 0x60);
  FUN_0041a2e0(param_1,param_1 + 0x38,puVar1,(uint)puVar1[1] >> 3 & *(int *)(param_1 + 0x38) - 1U);
  return puVar1;
}




/* Function: FUN_0041a2e0 */

void FUN_0041a2e0(undefined4 param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2[2] + param_4 * 4);
  *(int *)(param_2[2] + param_4 * 4) = param_3;
  uVar1 = param_2[1];
  param_2[1] = uVar1 + 1;
  uVar2 = *param_2;
  if ((uVar2 < uVar1 + 1) && ((int)uVar2 < 0x3ffffffe)) {
    FUN_0041a324(param_1,param_2,uVar2 * 2);
  }
  return;
}




/* Function: FUN_0041a324 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041a324(int param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  while ((_DAT_005b71d0 & 0xffffff80) == 0) {
    if (_DAT_005b71d0 != 0) {
      uVar4 = FUN_00419e70(param_1,0,param_3 * 4);
      iVar5 = 0;
      if (0 < (int)param_3) {
        if (5 < (int)param_3) {
          do {
            *(undefined4 *)(uVar4 + iVar5 * 4) = 0;
            *(undefined4 *)(uVar4 + 4 + iVar5 * 4) = 0;
            *(undefined4 *)(uVar4 + 8 + iVar5 * 4) = 0;
            *(undefined4 *)(uVar4 + 0xc + iVar5 * 4) = 0;
            *(undefined4 *)(uVar4 + 0x10 + iVar5 * 4) = 0;
            iVar5 = iVar5 + 5;
          } while (iVar5 <= (int)(param_3 - 6));
        }
        do {
          *(undefined4 *)(uVar4 + iVar5 * 4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)param_3);
      }
      iVar5 = 0;
      uVar8 = *param_2;
      if ((int)uVar8 < 1) {
        uVar9 = param_2[2];
      }
      else {
        uVar9 = param_2[2];
        do {
          puVar7 = *(uint **)(uVar9 + iVar5 * 4);
          if (puVar7 != (uint *)0x0) {
            do {
              puVar1 = (uint *)puVar7[3];
              if (param_2 == (uint *)(param_1 + 0x2c)) {
                uVar8 = *puVar7;
              }
              else {
                uVar8 = puVar7[1] >> 3;
              }
              uVar8 = uVar8 & param_3 - 1;
              puVar7[3] = *(uint *)(uVar4 + uVar8 * 4);
              *(uint **)(uVar4 + uVar8 * 4) = puVar7;
              puVar7 = puVar1;
            } while (puVar1 != (uint *)0x0);
            uVar8 = *param_2;
            uVar9 = param_2[2];
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar8);
      }
      FUN_00419e70(param_1,uVar9,0);
      *(uint *)(param_1 + 0x60) = param_3 * 4 + *(int *)(param_1 + 0x60) + *param_2 * -4;
      *param_2 = param_3;
      param_2[2] = uVar4;
      return;
    }
    FUN_004d34fc();
  }
  iVar5 = param_3 * 4;
  puVar3 = (undefined4 *)FUN_00419e70(param_1,0,iVar5);
  if ((int)param_3 < 1) goto LAB_0041a3d4;
  uVar8 = 0;
  bVar2 = false;
  uVar4 = param_3;
  if (((uint)puVar3 & 7) == 0) {
LAB_0041a391:
    if (1 < (int)uVar4) {
      if (bVar2) {
        *puVar3 = 0;
      }
      uVar8 = (uint)bVar2;
      do {
        *(undefined8 *)(puVar3 + uVar8) = 0;
        uVar8 = uVar8 + 2;
      } while ((int)uVar8 < (int)(param_3 - (uVar4 & 1)));
      if ((int)param_3 <= (int)uVar8) goto LAB_0041a3d4;
    }
  }
  else if (((uint)puVar3 & 3) == 0) {
    bVar2 = true;
    uVar4 = param_3 - 1;
    goto LAB_0041a391;
  }
  do {
    puVar3[uVar8] = 0;
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < (int)param_3);
LAB_0041a3d4:
  iVar6 = 0;
  uVar4 = *param_2;
  if ((int)uVar4 < 1) {
    uVar8 = param_2[2];
  }
  else {
    uVar8 = param_2[2];
    do {
      puVar7 = *(uint **)(uVar8 + iVar6 * 4);
      if (puVar7 != (uint *)0x0) {
        do {
          puVar1 = (uint *)puVar7[3];
          if (param_2 == (uint *)(param_1 + 0x2c)) {
            uVar4 = *puVar7;
          }
          else {
            uVar4 = puVar7[1] >> 3;
          }
          uVar4 = uVar4 & param_3 - 1;
          puVar7[3] = puVar3[uVar4];
          puVar3[uVar4] = puVar7;
          puVar7 = puVar1;
        } while (puVar1 != (uint *)0x0);
        uVar4 = *param_2;
        uVar8 = param_2[2];
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar4);
  }
  FUN_00419e70(param_1,uVar8,0);
  *(uint *)(param_1 + 0x60) = iVar5 + *(int *)(param_1 + 0x60) + *param_2 * -4;
  *param_2 = param_3;
  param_2[2] = (uint)puVar3;
  return;
}




/* Function: FUN_0041a588 */

void FUN_0041a588(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041a5a8(param_1,param_2);
  if (*(int *)(iVar1 + 0x10) == 0) {
    *(undefined4 *)(iVar1 + 0x10) = 2;
  }
  return;
}




/* Function: FUN_0041a5a8 */

void FUN_0041a5a8(undefined4 param_1,char *param_2)

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
  FUN_0041a5d0(param_1,param_2,iVar2);
  return;
}




/* Function: FUN_0041a5d0 */

uint * FUN_0041a5d0(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  bool bVar8;
  
  uVar1 = FUN_0041a6b4(param_2,param_3);
  uVar4 = *(int *)(param_1 + 0x2c) - 1U & uVar1;
  puVar6 = *(uint **)(*(int *)(param_1 + 0x34) + uVar4 * 4);
  do {
    if (puVar6 == (uint *)0x0) {
      puVar5 = (uint *)FUN_00419e70(param_1,0,param_3 + 0x15,uVar1,uVar4);
      puVar5[4] = 0;
      puVar5[3] = 0;
      puVar5[2] = param_3;
      *puVar5 = uVar1;
      puVar5[1] = 0;
      puVar6 = puVar5 + 5;
      for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar6 = *param_2;
        param_2 = param_2 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(byte *)puVar6 = (byte)*param_2;
        param_2 = (uint *)((int)param_2 + 1);
        puVar6 = (uint *)((int)puVar6 + 1);
      }
      *(undefined1 *)((int)puVar5 + param_3 + 0x14) = 0;
      *(uint *)(param_1 + 0x60) = param_3 + 0x15 + *(int *)(param_1 + 0x60);
      FUN_0041a2e0(param_1,param_1 + 0x2c,puVar5,uVar4);
      return puVar5;
    }
    if (param_3 == puVar6[2]) {
      puVar5 = puVar6 + 5;
      bVar7 = false;
      puVar3 = param_2;
      for (uVar2 = param_3; bVar8 = uVar2 == 0, !bVar8; uVar2 = uVar2 - 1) {
        bVar7 = (byte)*puVar3 < (byte)*puVar5;
        bVar8 = (byte)*puVar3 == (byte)*puVar5;
        if (!bVar8) break;
        puVar3 = (uint *)((int)puVar3 + 1);
        puVar5 = (uint *)((int)puVar5 + 1);
        bVar7 = uVar2 == 0;
      }
      if ((!bVar7 && !bVar8) == bVar7) {
        return puVar6;
      }
    }
    puVar6 = (uint *)puVar6[3];
  } while( true );
}




/* Function: FUN_0041a6b4 */

uint FUN_0041a6b4(byte *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 >> 5 | 1;
  for (uVar2 = param_2; uVar1 <= uVar2; uVar2 = uVar2 - uVar1) {
    param_2 = param_2 ^ (uint)*param_1 + param_2 * 0x20 + (param_2 >> 2);
    param_1 = param_1 + 1;
  }
  return param_2;
}




/* Function: FUN_0041a708 */

void FUN_0041a708(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00419e70(param_1,0,4);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  puVar2 = (undefined4 *)FUN_00419e70(param_1,0,4);
  *(undefined4 **)(param_1 + 0x40) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 8;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *puVar2 = 0;
  **(undefined4 **)(param_1 + 0x34) = 0;
  return;
}




/* Function: FUN_0041a750 */

void FUN_0041a750(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 * 0x10 + 0x10;
  iVar2 = FUN_00419e70(param_1,0,iVar1);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  *(short *)(iVar2 + 0xe) = (short)param_2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar1;
  return;
}




/* Function: FUN_0041a78c */

void FUN_0041a78c(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00419e70(param_1,0,0x44);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined2 *)(puVar1 + 8) = 0;
  *(undefined2 *)((int)puVar1 + 0x22) = 0;
  *(undefined2 *)(puVar1 + 9) = 0;
  *(undefined2 *)((int)puVar1 + 0x26) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[10] = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 **)(param_1 + 0x20) = puVar1;
  return;
}




/* Function: FUN_0041a7e4 */

void FUN_0041a7e4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_2 + 0x1c) = param_3;
  iVar1 = FUN_0041a800(param_2);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar1;
  return;
}




/* Function: FUN_0041a800 */

int FUN_0041a800(int param_1)

{
  return *(int *)(param_1 + 4) * 8 + *(int *)(param_1 + 0xc) * 4 + *(int *)(param_1 + 0x14) * 4 +
         *(int *)(param_1 + 0x1c) * 4 + *(int *)(param_1 + 0x34) * 0xc +
         *(int *)(param_1 + 0x30) * 4 + 0x44;
}




/* Function: FUN_0041a848 */

void FUN_0041a848(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (0 < (int)param_2[7]) {
    iVar1 = FUN_0041a800(param_2);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - iVar1;
  }
  FUN_00419e70(param_1,param_2[6],0);
  FUN_00419e70(param_1,param_2[0xe],0);
  FUN_00419e70(param_1,param_2[2],0);
  FUN_00419e70(param_1,*param_2,0);
  FUN_00419e70(param_1,param_2[4],0);
  FUN_00419e70(param_1,param_2[0xb],0);
  FUN_00419e70(param_1,param_2,0);
  return;
}




/* Function: FUN_0041a8bc */

void FUN_0041a8bc(int param_1,int param_2)

{
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -0x10 + *(short *)(param_2 + 0xe) * -0x10;
  FUN_00419e70(param_1,param_2,0);
  return;
}




/* Function: FUN_0041a8ec */

int FUN_0041a8ec(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    iVar1 = *(int *)(param_1 + 0x38);
    do {
      iVar2 = iVar3 * 0xc;
      if (param_3 < *(int *)(iVar2 + 4 + iVar1)) {
        return 0;
      }
      if ((param_3 < *(int *)(iVar2 + 8 + iVar1)) && (param_2 = param_2 + -1, param_2 == 0)) {
        return *(int *)(iVar2 + iVar1) + 0x14;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x34));
  }
  return 0;
}




/* Function: FUN_0041a93c */

int FUN_0041a93c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041aacc(param_1,0x2a,0xffffffff);
  if (iVar1 == *(int *)(param_1 + 0x14)) {
    FUN_0041b854(param_1,&stack0xfffffff8,*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  return iVar1;
}




/* Function: FUN_0041a974 */

void FUN_0041a974(int param_1,undefined4 param_2)

{
  FUN_0041aacc(*(undefined4 *)(param_1 + 0x28),7,param_2);
  return;
}




/* Function: FUN_0041a98c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041a98c(undefined4 param_1,uint param_2,uint param_3)

{
  double dVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ushort in_FPUControlWord;
  
  while ((_DAT_005b71d0 & 0xffffff80) == 0) {
    if (_DAT_005b71d0 != 0) {
      dVar1 = (double)CONCAT44(param_3,param_2);
      if (dVar1 <= _DAT_005b94d0) {
        if ((double)(int)ROUND(dVar1) == dVar1) {
          FUN_0041aacc(param_1,6,(int)ROUND(dVar1),in_FPUControlWord,in_FPUControlWord | 0xc00);
          return;
        }
      }
      uVar2 = FUN_0041af58(param_1,param_2,param_3);
      FUN_0041aacc(param_1,8,uVar2);
      return;
    }
    FUN_004d34fc();
  }
  dVar1 = (double)CONCAT44(param_3,param_2);
  if (dVar1 <= _DAT_005b94c0) {
    uVar3 = param_3 >> 0x14 & 0x7ff;
    if (uVar3 < 0x3ff) {
      uVar3 = 0;
    }
    else {
      uVar4 = (param_3 << 0xb | param_2 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar3 & 0x1f);
      uVar3 = -uVar4;
      if (-1 < (int)param_3) {
        uVar3 = uVar4;
      }
    }
    if ((double)(int)uVar3 == dVar1) {
      FUN_0041aacc(param_1,6,uVar3);
      return;
    }
  }
  uVar2 = FUN_0041af58(param_1,dVar1);
  FUN_0041aacc(param_1,8,uVar2);
  return;
}




/* Function: FUN_0041aacc */

void FUN_0041aacc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0041aae4(param_1,param_2,param_3,0);
  return;
}




/* Function: FUN_0041aae4 */

int FUN_0041aae4(int *param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = FUN_0041aec8(param_1);
  iVar6 = (uint)(byte)(&DAT_005a23c1)[param_2 * 3] - (uint)(byte)(&DAT_005a23c2)[param_2 * 3];
  bVar2 = false;
  switch(param_2) {
  case 1:
    if (((uVar3 & 0x3f) == 2) && ((uVar3 >> 6 & 0x1ff) == 0xff)) {
      uVar3 = uVar3 & 0xffff8000 | 3 | param_3 << 6;
      bVar2 = true;
    }
    break;
  case 4:
    if (param_3 == 0) {
      return -1;
    }
    iVar6 = param_3;
    if ((uVar3 & 0x3f) == 4) {
      bVar2 = true;
      uVar3 = ((uVar3 >> 6) + param_3) * 0x40 | 4;
    }
    break;
  case 5:
    if (param_3 == 0) {
      return -1;
    }
    iVar6 = -param_3;
    if ((uVar3 & 0x3f) == 0x14) {
      bVar2 = true;
      uVar3 = ((uVar3 >> 6 & 0x1ff) + param_3) * 0x40 | uVar3 & 0xffff803f;
    }
    break;
  case 0xd:
    if ((uVar3 & 0x3f) == 7) {
      uVar3 = uVar3 & 0xffffffc0 | 0xe;
      bVar2 = true;
    }
    else if ((uVar3 & 0x3f) == 0xb) {
      uVar3 = uVar3 & 0xffffffc0 | 0xf;
      bVar2 = true;
    }
    break;
  case 0x14:
    iVar6 = -param_4;
    break;
  case 0x15:
    if (param_4 == 0) {
      return -1;
    }
    iVar6 = -param_4;
    break;
  case 0x16:
    if (param_3 == 0) {
      return -1;
    }
    iVar6 = param_3 * -2;
    break;
  case 0x17:
    if ((uVar3 & 0x3f) == 6) {
      uVar3 = uVar3 & 0xffffffc0 | 0x18;
      bVar2 = true;
    }
    break;
  case 0x19:
    if ((uVar3 & 0x3f) == 6) {
      uVar3 = (0x3fffffe - (uVar3 >> 6)) * 0x40 | 0x18;
      bVar2 = true;
    }
    break;
  case 0x1d:
    iVar6 = 1 - param_3;
    if ((uVar3 & 0x3f) == 0x1d) {
      uVar3 = (uVar3 & 0xffffffc0) + 0x40 | 0x1d;
      bVar2 = true;
    }
    break;
  case 0x1e:
    if ((uVar3 & 0x3f) == 6) {
      uVar3 = (0x3fffffe - (uVar3 >> 6)) * 0x40 | 6;
      bVar2 = true;
    }
    else if ((uVar3 & 0x3f) == 8) {
      uVar3 = uVar3 & 0xffffffc0 | 9;
      bVar2 = true;
    }
    break;
  case 0x20:
    if (uVar3 == 0x44) {
      uVar3 = 0x7fffffa6;
      bVar2 = true;
    }
    break;
  case 0x21:
    if (uVar3 == 0x44) {
      uVar3 = 0x1f;
      bVar2 = true;
      iVar6 = -1;
    }
    break;
  case 0x26:
  case 0x28:
    uVar5 = uVar3 & 0x3f;
    if (uVar5 == 0x1f) {
      uVar3 = 0x7fffffa7;
      bVar2 = true;
    }
    else if (uVar5 == 6) {
      if (param_2 == 0x26) {
        uVar3 = 0x7fffffaa;
        bVar2 = true;
      }
    }
    else if ((uVar5 == 4) && ((uVar3 & 0xffffffc0) == 0x40)) {
      param_1[4] = param_1[4] + -1;
      FUN_0041ae84(param_1,0xffffffff);
      return -1;
    }
    break;
  case 0x27:
  case 0x29:
    uVar5 = uVar3 & 0x3f;
    if (uVar5 == 0x1f) {
      uVar3 = 0x7fffffa6;
      bVar2 = true;
    }
    else {
      if (uVar5 == 6) {
        param_1[4] = param_1[4] + -1;
        FUN_0041ae84(param_1,0xffffffff);
        return -1;
      }
      if ((uVar5 == 4) && ((uVar3 & 0xffffffc0) == 0x40)) {
        uVar3 = 0x7fffffaa;
        bVar2 = true;
      }
    }
    break;
  case 0x30:
    iVar6 = 1 - param_4;
  }
  FUN_0041ae84(param_1,iVar6);
  if (bVar2) {
    *(uint *)(*(int *)(*param_1 + 0x18) + -4 + param_1[4] * 4) = uVar3;
    return param_1[4] + -1;
  }
  cVar1 = (&DAT_005a23c0)[param_2 * 3];
  uVar5 = param_2;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar5 = param_3 << 6 | param_2;
    }
    else if (cVar1 == '\x02') {
      uVar5 = (param_3 + 0x1ffffff) * 0x40 | param_2;
    }
    else {
      uVar5 = uVar3;
      if (cVar1 == '\x03') {
        uVar5 = param_2 | param_3 << 0xf | param_4 << 6;
      }
    }
  }
  FUN_0041aee4(param_1);
  uVar4 = FUN_00419e0c(param_1[3],*(undefined4 *)(*param_1 + 0x18),param_1[4],1,4,
                       "code size overflow",0x7ffffffd);
  *(undefined4 *)(*param_1 + 0x18) = uVar4;
  *(uint *)(*(int *)(*param_1 + 0x18) + param_1[4] * 4) = uVar5;
  iVar6 = param_1[4];
  param_1[4] = iVar6 + 1;
  return iVar6;
}




/* Function: FUN_0041ae84 */

void FUN_0041ae84(int *param_1,short param_2)

{
  int iVar1;
  
  param_2 = (short)param_1[7] + param_2;
  iVar1 = *param_1;
  *(short *)(param_1 + 7) = param_2;
  if (*(short *)(iVar1 + 0x24) < param_2) {
    if (0xfa < param_2) {
      FUN_0041b8b4(param_1[2],"function or expression too complex");
      param_2 = (short)param_1[7];
      iVar1 = *param_1;
    }
    *(short *)(iVar1 + 0x24) = param_2;
  }
  return;
}




/* Function: FUN_0041aec8 */

undefined4 FUN_0041aec8(int *param_1)

{
  if (param_1[5] < param_1[4]) {
    return *(undefined4 *)(*(int *)(*param_1 + 0x18) + -4 + param_1[4] * 4);
  }
  return 0;
}




/* Function: FUN_0041aee4 */

void FUN_0041aee4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *param_1;
  iVar2 = param_1[2];
  if (param_1[9] < *(int *)(iVar2 + 0x38)) {
    iVar6 = FUN_00419e0c(param_1[3],*(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(iVar1 + 0x30),2,4,
                         "line info overflow",0x7ffffffd);
    *(int *)(iVar1 + 0x2c) = iVar6;
    iVar3 = *(int *)(iVar2 + 0x38);
    iVar4 = param_1[9];
    if (iVar4 + 1 < iVar3) {
      iVar5 = *(int *)(iVar1 + 0x30);
      *(int *)(iVar1 + 0x30) = iVar5 + 1;
      *(int *)(iVar6 + iVar5 * 4) = 1 - (iVar3 - iVar4);
      iVar6 = *(int *)(iVar1 + 0x2c);
    }
    iVar3 = param_1[4];
    iVar4 = *(int *)(iVar1 + 0x30);
    *(int *)(iVar1 + 0x30) = iVar4 + 1;
    *(int *)(iVar6 + iVar4 * 4) = iVar3;
    param_1[9] = *(int *)(iVar2 + 0x38);
  }
  return;
}




/* Function: FUN_0041b080 */

void FUN_0041b080(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  iVar2 = *param_2;
  if (iVar2 == 1) {
    FUN_0041aacc(uVar1,0x12,param_2[1]);
  }
  else {
    if (iVar2 == 0) {
      FUN_0041aacc(uVar1,0x13,param_2[1]);
      return;
    }
    if (iVar2 == 2) {
      FUN_0041aae4(uVar1,0x14,3,3);
      return;
    }
  }
  return;
}




/* Function: FUN_0041b0cc */

void FUN_0041b0cc(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (param_2 == 0) {
    FUN_0041b19c(param_1,param_3,1);
    FUN_0041b624(piVar1,0x1e);
    return;
  }
  FUN_0041b81c(piVar1,param_3);
  iVar2 = piVar1[4];
  iVar3 = *(int *)(*piVar1 + 0x18);
  uVar5 = *(uint *)(iVar3 + -4 + iVar2 * 4) & 0x3f;
  if ((uVar5 < 0x20) || (0x2a < uVar5)) {
    FUN_0041b624(piVar1,0x1f);
  }
  else {
    uVar5 = FUN_0041b154(uVar5);
    *(uint *)(iVar3 + -4 + iVar2 * 4) = *(uint *)(iVar3 + -4 + iVar2 * 4) & 0xffffffc0 | uVar5;
  }
  uVar4 = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_3 + 4) = uVar4;
  return;
}




/* Function: FUN_0041b154 */

undefined4 FUN_0041b154(undefined4 param_1)

{
  switch(param_1) {
  case 0x20:
    return 0x21;
  case 0x21:
    return 0x20;
  case 0x22:
    return 0x25;
  case 0x23:
    return 0x24;
  case 0x24:
    return 0x23;
  case 0x25:
    return 0x22;
  case 0x26:
  case 0x28:
    return 0x27;
  case 0x27:
  case 0x29:
    return 0x26;
  default:
    return 0;
  }
}




/* Function: FUN_0041b19c */

void FUN_0041b19c(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = *(int **)(param_1 + 0x28);
  iVar2 = FUN_0041b4c0(piVar1,param_2);
  if (iVar2 != 0) {
    return;
  }
  iVar2 = piVar1[4];
  uVar5 = *(uint *)(*(int *)(*piVar1 + 0x18) + -4 + iVar2 * 4) & 0x3f;
  if ((((uVar5 < 0x20) || (0x2a < uVar5)) && (*(int *)(param_2 + 8) == -1)) &&
     (*(int *)(param_2 + 4) == -1)) {
    if (param_3 == 0) {
      return;
    }
    FUN_0041b5b4(piVar1,1);
    return;
  }
  uVar4 = 0xffffffff;
  uVar7 = 0xffffffff;
  uVar6 = 0xffffffff;
  if ((uVar5 < 0x20) || (0x2a < uVar5)) {
    iVar2 = FUN_0041b484(piVar1,*(undefined4 *)(param_2 + 8),0x29);
    if ((iVar2 == 0) && (iVar2 = FUN_0041b484(piVar1,*(undefined4 *)(param_2 + 4),0x28), iVar2 == 0)
       ) goto LAB_0041b28c;
    if ((0x1f < uVar5) && (uVar5 < 0x2b)) {
      iVar2 = piVar1[4];
      goto LAB_0041b250;
    }
    uVar4 = FUN_0041b464(piVar1,0x2a,0xffffffff);
    FUN_0041b528(piVar1,1);
  }
  else {
LAB_0041b250:
    FUN_0041b854(piVar1,param_2 + 4,iVar2 + -1);
  }
  uVar7 = FUN_0041b464(piVar1,0x2b,0);
  uVar6 = FUN_0041b464(piVar1,6,1);
  uVar3 = FUN_0041b584(piVar1);
  FUN_0041b550(piVar1,uVar4,uVar3);
LAB_0041b28c:
  uVar4 = FUN_0041b584(piVar1);
  FUN_0041b310(piVar1,*(undefined4 *)(param_2 + 8),uVar7,0x29,uVar4);
  FUN_0041b310(piVar1,*(undefined4 *)(param_2 + 4),uVar6,0x28,uVar4);
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  return;
}




/* Function: FUN_0041b310 */

void FUN_0041b310(int *param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(*param_1 + 0x18);
  while (iVar2 = param_2, iVar2 != -1) {
    param_2 = FUN_0041b438(param_1,iVar2);
    uVar3 = *(uint *)(iVar1 + iVar2 * 4) & 0x3f;
    if (uVar3 == param_4) {
      FUN_0041b3d0(param_1,iVar2,param_5);
    }
    else {
      FUN_0041b3d0(param_1,iVar2,param_3);
      if (uVar3 == 0x28) {
        *(uint *)(iVar1 + iVar2 * 4) = *(uint *)(iVar1 + iVar2 * 4) & 0xffffffc0 | 0x26;
      }
      else if (uVar3 == 0x29) {
        *(uint *)(iVar1 + iVar2 * 4) = *(uint *)(iVar1 + iVar2 * 4) & 0xffffffc0 | 0x27;
      }
    }
  }
  return;
}




/* Function: FUN_0041b3d0 */

void FUN_0041b3d0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(*param_1 + 0x18);
  if (param_3 != -1) {
    uVar1 = (param_3 - param_2) - 1;
    uVar3 = (int)uVar1 >> 0x1f;
    if (0x1ffffff < (int)((uVar1 ^ uVar3) - uVar3)) {
      FUN_0041b8b4(param_1[2],"control structure too long");
    }
    *(uint *)(iVar2 + param_2 * 4) =
         *(uint *)(iVar2 + param_2 * 4) & 0x3f | ((param_3 - param_2) + 0x1fffffe) * 0x40;
    return;
  }
  *(uint *)(iVar2 + param_2 * 4) = *(uint *)(iVar2 + param_2 * 4) & 0x3f | 0x7fffff80;
  return;
}




/* Function: FUN_0041b438 */

int FUN_0041b438(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(*param_1 + 0x18) + param_2 * 4) >> 6;
  if (uVar1 != 0x1fffffe) {
    return param_2 + -0x1fffffe + uVar1;
  }
  return -1;
}




/* Function: FUN_0041b464 */

void FUN_0041b464(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0041b584(param_1);
  FUN_0041aacc(param_1,param_2,param_3);
  return;
}




/* Function: FUN_0041b484 */

undefined4 FUN_0041b484(int *param_1,int param_2,uint param_3)

{
  while( true ) {
    if (param_2 == -1) {
      return 0;
    }
    if ((*(uint *)(*(int *)(*param_1 + 0x18) + param_2 * 4) & 0x3f) != param_3) break;
    param_2 = FUN_0041b438(param_1,param_2);
  }
  return 1;
}




/* Function: FUN_0041b4c0 */

undefined4 FUN_0041b4c0(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    FUN_0041aacc(param_1,0xb,param_2[1]);
  }
  else if (iVar1 == 0) {
    FUN_0041aacc(param_1,0xc,param_2[1]);
  }
  else if (iVar1 == 2) {
    FUN_0041b624(param_1,0xd);
  }
  else if (iVar1 == 3) {
    return 0;
  }
  *param_2 = 3;
  param_2[2] = -1;
  param_2[1] = -1;
  return 1;
}




/* Function: FUN_0041b528 */

void FUN_0041b528(undefined4 param_1,int param_2)

{
  if (0 < param_2) {
    FUN_0041aacc(param_1,5,param_2);
    return;
  }
  FUN_0041aacc(param_1,4,-param_2);
  return;
}




/* Function: FUN_0041b550 */

void FUN_0041b550(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == *(int *)(param_1 + 0x14)) {
    FUN_0041b854(param_1,param_1 + 0x18,param_2);
    return;
  }
  FUN_0041b310(param_1,param_2,param_3,0,0);
  return;
}




/* Function: FUN_0041b584 */

int FUN_0041b584(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar2 != iVar1) {
    *(int *)(param_1 + 0x14) = iVar2;
    FUN_0041b550(param_1,*(undefined4 *)(param_1 + 0x18),iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    iVar2 = *(int *)(param_1 + 0x10);
  }
  return iVar2;
}




/* Function: FUN_0041b5b4 */

void FUN_0041b5b4(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041b5f8(param_1);
  if (iVar1 != 0) {
    *(uint *)(*(int *)(*param_1 + 0x18) + -4 + param_1[4] * 4) =
         *(uint *)(*(int *)(*param_1 + 0x18) + -4 + param_1[4] * 4) & 0xffff803f | param_2 << 6;
    FUN_0041ae84(param_1,param_2);
  }
  return;
}




/* Function: FUN_0041b5f8 */

undefined4 FUN_0041b5f8(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0041aec8(param_1);
  if (((uVar1 & 0x3f) == 2) && ((uVar1 >> 6 & 0x1ff) == 0xff)) {
    return 1;
  }
  return 0;
}




/* Function: FUN_0041b624 */

void FUN_0041b624(undefined4 param_1,undefined4 param_2)

{
  FUN_0041aae4(param_1,param_2,0,0);
  return;
}




/* Function: FUN_0041b63c */

void FUN_0041b63c(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0xc) {
    FUN_0041b768(*(undefined4 *)(param_1 + 0x28),param_3,1);
    return;
  }
  if (param_2 == 0xd) {
    FUN_0041b684(*(undefined4 *)(param_1 + 0x28),param_3,1);
    return;
  }
  FUN_0041b19c(param_1,param_3,1);
  return;
}




/* Function: FUN_0041b684 */

void FUN_0041b684(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x26;
  }
  else {
    uVar1 = 0x28;
  }
  FUN_0041b6ac(param_1,param_2,0,uVar1);
  return;
}




/* Function: FUN_0041b6ac */

void FUN_0041b6ac(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar8 = (undefined4 *)(param_2 + 4);
  puVar7 = (undefined4 *)(param_2 + 8);
  if (param_3 == 0) {
    puVar7 = puVar8;
    puVar8 = (undefined4 *)(param_2 + 8);
  }
  FUN_0041b81c(param_1,param_2);
  iVar2 = param_1[4];
  iVar4 = iVar2 + -1;
  iVar1 = iVar2 * 2 + -2;
  iVar3 = *(int *)(*param_1 + 0x18);
  uVar6 = *(uint *)(iVar3 + -4 + iVar2 * 4) & 0x3f;
  if ((uVar6 < 0x20) || (0x2a < uVar6)) {
    iVar4 = FUN_0041aacc(param_1,param_4,0xffffffff);
  }
  else if (param_3 != 0) {
    uVar6 = FUN_0041b154(uVar6);
    *(uint *)(iVar3 + iVar1 * 2) = *(uint *)(iVar3 + iVar1 * 2) & 0xffffffc0 | uVar6;
  }
  FUN_0041b854(param_1,puVar7,iVar4);
  uVar5 = FUN_0041b584(param_1);
  FUN_0041b550(param_1,*puVar8,uVar5);
  *puVar8 = 0xffffffff;
  return;
}




/* Function: FUN_0041b768 */

void FUN_0041b768(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x27;
  }
  else {
    uVar1 = 0x29;
  }
  FUN_0041b6ac(param_1,param_2,1,uVar1);
  return;
}




/* Function: FUN_0041b790 */

void FUN_0041b790(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  if (param_2 == 0xc) {
    FUN_0041b81c(uVar1,param_4);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_4 + 4);
    FUN_0041b854(uVar1,param_3 + 8,*(undefined4 *)(param_4 + 8));
    return;
  }
  if (param_2 == 0xd) {
    FUN_0041b81c(uVar1,param_4);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_4 + 8);
    FUN_0041b854(uVar1,param_3 + 4,*(undefined4 *)(param_4 + 4));
    return;
  }
  FUN_0041b19c(param_1,param_4,1);
  FUN_0041aacc(uVar1,*(undefined4 *)(&DAT_005a2360 + param_2 * 8),
               *(undefined4 *)(&DAT_005a2364 + param_2 * 8));
  return;
}




/* Function: FUN_0041b81c */

void FUN_0041b81c(undefined4 param_1,int param_2)

{
  FUN_0041b4c0(param_1,param_2);
  if ((*(int *)(param_2 + 4) == -1) && (*(int *)(param_2 + 8) == -1)) {
    FUN_0041b5b4(param_1,1);
    return;
  }
  return;
}




/* Function: FUN_0041b854 */

void FUN_0041b854(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  if (*param_2 == -1) {
    *param_2 = param_3;
    return;
  }
  do {
    iVar2 = iVar1;
    iVar1 = FUN_0041b438(param_1,iVar2);
  } while (iVar1 != -1);
  FUN_0041b3d0(param_1,iVar2,param_3);
  return;
}




/* Function: FUN_0041b8b4 */

void FUN_0041b8b4(int param_1,undefined4 param_2)

{
  FUN_0041c854(param_1,param_2,*(undefined4 *)(param_1 + 8));
  return;
}




/* Function: FUN_0041b8cc */

void FUN_0041b8cc(uint param_1,uint *param_2,int *param_3,uint param_4)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  param_2[0xb] = param_1;
  param_2[6] = 0x11c;
  param_2[0xc] = (uint)param_3;
  param_2[10] = 0;
  param_2[0xd] = 1;
  param_2[0xe] = 1;
  param_2[0xf] = param_4;
  iVar1 = *param_3;
  *param_3 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar3 = (**(code **)(param_2[0xc] + 8))(param_2[0xc]);
  }
  else {
    pbVar2 = *(byte **)(param_2[0xc] + 4);
    *(byte **)(param_2[0xc] + 4) = pbVar2 + 1;
    uVar3 = (uint)*pbVar2;
  }
  *param_2 = uVar3;
  if (uVar3 == 0x23) {
    do {
      iVar1 = *(int *)param_2[0xc];
      *(int *)param_2[0xc] = iVar1 + -1;
      if (iVar1 == 0) {
        uVar3 = (**(code **)(param_2[0xc] + 8))(param_2[0xc]);
      }
      else {
        pbVar2 = *(byte **)(param_2[0xc] + 4);
        *(byte **)(param_2[0xc] + 4) = pbVar2 + 1;
        uVar3 = (uint)*pbVar2;
      }
      *param_2 = uVar3;
    } while ((uVar3 != 10) && (uVar3 != 0xffffffff));
  }
  return;
}




/* Function: FUN_0041b960 */

uint FUN_0041b960(uint *param_1,int *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar2 = *param_1;
  do {
    switch(uVar2) {
    default:
      iVar3 = isalpha(uVar2);
      if (iVar3 == 0) {
        uVar2 = *param_1;
        iVar3 = iscntrl(uVar2);
        if (iVar3 != 0) {
          FUN_0041c824(param_1,uVar2);
        }
        iVar3 = *(int *)param_1[0xc];
        *(int *)param_1[0xc] = iVar3 + -1;
        if (iVar3 == 0) {
          uVar4 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
        }
        else {
          pbVar1 = *(byte **)(param_1[0xc] + 4);
          *(byte **)(param_1[0xc] + 4) = pbVar1 + 1;
          uVar4 = (uint)*pbVar1;
        }
        *param_1 = uVar4;
        return uVar2;
      }
    case 0x5f:
      uVar5 = FUN_0041c75c(param_1);
      iVar3 = FUN_0041a5a8(param_1[0xb],uVar5);
      if (2 < *(int *)(iVar3 + 0x10)) {
        return *(int *)(iVar3 + 0x10) + 0xfe;
      }
      *param_2 = iVar3;
      return 0x113;
    case 9:
    case 0xd:
    case 0x20:
      iVar3 = *(int *)param_1[0xc];
      *(int *)param_1[0xc] = iVar3 + -1;
      if (iVar3 == 0) {
        uVar2 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar1 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar1 + 1;
        uVar2 = (uint)*pbVar1;
      }
      *param_1 = uVar2;
      break;
    case 10:
      FUN_0041bdb0(param_1);
      uVar2 = *param_1;
      break;
    case 0x22:
    case 0x27:
      FUN_0041c334(param_1,uVar2,param_2);
      return 0x11b;
    case 0x24:
      FUN_0041c854(param_1,"unexpected `$\' (pragmas are no longer supported)",0x24);
      uVar2 = *param_1;
      break;
    case 0x2d:
      iVar3 = *(int *)param_1[0xc];
      *(int *)param_1[0xc] = iVar3 + -1;
      if (iVar3 == 0) {
        uVar2 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar1 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar1 + 1;
        uVar2 = (uint)*pbVar1;
      }
      *param_1 = uVar2;
      if (uVar2 != 0x2d) {
        return 0x2d;
      }
      do {
        iVar3 = *(int *)param_1[0xc];
        *(int *)param_1[0xc] = iVar3 + -1;
        if (iVar3 == 0) {
          uVar2 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
        }
        else {
          pbVar1 = *(byte **)(param_1[0xc] + 4);
          *(byte **)(param_1[0xc] + 4) = pbVar1 + 1;
          uVar2 = (uint)*pbVar1;
        }
        *param_1 = uVar2;
      } while ((uVar2 != 10) && (uVar2 != 0xffffffff));
      break;
    case 0x2e:
      iVar3 = *(int *)param_1[0xc];
      *(int *)param_1[0xc] = iVar3 + -1;
      if (iVar3 == 0) {
        uVar2 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar1 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar1 + 1;
        uVar2 = (uint)*pbVar1;
      }
      *param_1 = uVar2;
      if (uVar2 != 0x2e) {
        iVar3 = isdigit(uVar2);
        if (iVar3 == 0) {
          return 0x2e;
        }
        FUN_0041be38(param_1,1,param_2);
        return 0x11a;
      }
      iVar3 = *(int *)param_1[0xc];
      *(int *)param_1[0xc] = iVar3 + -1;
      if (iVar3 == 0) {
        uVar2 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar1 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar1 + 1;
        uVar2 = (uint)*pbVar1;
      }
      *param_1 = uVar2;
      if (uVar2 == 0x2e) {
        iVar3 = *(int *)param_1[0xc];
        *(int *)param_1[0xc] = iVar3 + -1;
        if (iVar3 == 0) {
          uVar2 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
        }
        else {
          pbVar1 = *(byte **)(param_1[0xc] + 4);
          *(byte **)(param_1[0xc] + 4) = pbVar1 + 1;
          uVar2 = (uint)*pbVar1;
        }
        *param_1 = uVar2;
        return 0x115;
      }
      return 0x114;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      FUN_0041be38(param_1,0,param_2);
      return 0x11a;
    case 0x3c:
      iVar3 = *(int *)param_1[0xc];
      *(int *)param_1[0xc] = iVar3 + -1;
      if (iVar3 == 0) {
        uVar2 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar1 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar1 + 1;
        uVar2 = (uint)*pbVar1;
      }
      *param_1 = uVar2;
      if (uVar2 != 0x3d) {
        return 0x3c;
      }
      iVar3 = *(int *)param_1[0xc];
      *(int *)param_1[0xc] = iVar3 + -1;
      if (iVar3 == 0) {
        uVar2 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar1 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar1 + 1;
        uVar2 = (uint)*pbVar1;
      }
      *param_1 = uVar2;
      return 0x118;
    case 0x3d:
      iVar3 = *(int *)param_1[0xc];
      *(int *)param_1[0xc] = iVar3 + -1;
      if (iVar3 == 0) {
        uVar2 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar1 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar1 + 1;
        uVar2 = (uint)*pbVar1;
      }
      *param_1 = uVar2;
      if (uVar2 != 0x3d) {
        return 0x3d;
      }
      iVar3 = *(int *)param_1[0xc];
      *(int *)param_1[0xc] = iVar3 + -1;
      if (iVar3 == 0) {
        uVar2 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar1 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar1 + 1;
        uVar2 = (uint)*pbVar1;
      }
      *param_1 = uVar2;
      return 0x116;
    case 0x3e:
      iVar3 = *(int *)param_1[0xc];
      *(int *)param_1[0xc] = iVar3 + -1;
      if (iVar3 == 0) {
        uVar2 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar1 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar1 + 1;
        uVar2 = (uint)*pbVar1;
      }
      *param_1 = uVar2;
      if (uVar2 != 0x3d) {
        return 0x3e;
      }
      iVar3 = *(int *)param_1[0xc];
      *(int *)param_1[0xc] = iVar3 + -1;
      if (iVar3 == 0) {
        uVar2 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar1 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar1 + 1;
        uVar2 = (uint)*pbVar1;
      }
      *param_1 = uVar2;
      return 0x117;
    case 0x5b:
      iVar3 = *(int *)param_1[0xc];
      *(int *)param_1[0xc] = iVar3 + -1;
      if (iVar3 == 0) {
        uVar2 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar1 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar1 + 1;
        uVar2 = (uint)*pbVar1;
      }
      *param_1 = uVar2;
      if (uVar2 != 0x5b) {
        return 0x5b;
      }
      FUN_0041c0f0(param_1,param_2);
      return 0x11b;
    case 0x7e:
      iVar3 = *(int *)param_1[0xc];
      *(int *)param_1[0xc] = iVar3 + -1;
      if (iVar3 == 0) {
        uVar2 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar1 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar1 + 1;
        uVar2 = (uint)*pbVar1;
      }
      *param_1 = uVar2;
      if (uVar2 != 0x3d) {
        return 0x7e;
      }
      iVar3 = *(int *)param_1[0xc];
      *(int *)param_1[0xc] = iVar3 + -1;
      if (iVar3 == 0) {
        uVar2 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar1 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar1 + 1;
        uVar2 = (uint)*pbVar1;
      }
      *param_1 = uVar2;
      return 0x119;
    case 0xffffffff:
      return 0x11c;
    }
  } while( true );
}




/* Function: FUN_0041bdb0 */

void FUN_0041bdb0(uint *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  iVar1 = *(int *)param_1[0xc];
  *(int *)param_1[0xc] = iVar1 + -1;
  if (iVar1 == 0) {
    uVar3 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
  }
  else {
    pbVar2 = *(byte **)(param_1[0xc] + 4);
    *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
    uVar3 = (uint)*pbVar2;
  }
  *param_1 = uVar3;
  uVar3 = param_1[0xd];
  param_1[0xd] = uVar3 + 1;
  FUN_0041bdfc(param_1,uVar3 + 1,0x7ffffffd,"lines in a chunk");
  return;
}




/* Function: FUN_0041bdfc */

void FUN_0041bdfc(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char local_64 [100];
  
  if (param_3 < param_2) {
    sprintf(local_64,"too many %.50s (limit=%d)",param_4,param_3);
    FUN_0041c854(param_1,local_64,*(undefined4 *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_0041be38 */

void FUN_0041be38(uint *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_1[0xb];
  if (*(uint *)(uVar1 + 0x1c) < 10) {
    FUN_00419ff8(uVar1,0x8a);
  }
  if (param_2 != 0) {
    **(undefined1 **)(uVar1 + 0x18) = 0x2e;
  }
  uVar6 = (uint)(param_2 != 0);
  iVar3 = isdigit(*param_1);
  uVar5 = uVar6;
  while (iVar3 != 0) {
    if (*(uint *)(uVar1 + 0x1c) < uVar6 + 10) {
      FUN_00419ff8(uVar1,uVar6 + 0x8a,uVar5);
    }
    *(char *)(uVar6 + *(int *)(uVar1 + 0x18)) = (char)*param_1;
    iVar3 = *(int *)param_1[0xc];
    uVar6 = uVar6 + 1;
    *(int *)param_1[0xc] = iVar3 + -1;
    if (iVar3 == 0) {
      uVar4 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
    }
    else {
      pbVar2 = *(byte **)(param_1[0xc] + 4);
      *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
      uVar4 = (uint)*pbVar2;
    }
    *param_1 = uVar4;
    iVar3 = isdigit(uVar4);
  }
  uVar5 = *param_1;
  uVar4 = uVar6;
  if (uVar5 == 0x2e) {
    *(undefined1 *)(uVar6 + *(int *)(uVar1 + 0x18)) = 0x2e;
    iVar3 = *(int *)param_1[0xc];
    uVar4 = uVar6 + 1;
    *(int *)param_1[0xc] = iVar3 + -1;
    if (iVar3 == 0) {
      uVar5 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
    }
    else {
      pbVar2 = *(byte **)(param_1[0xc] + 4);
      *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
      uVar5 = (uint)*pbVar2;
    }
    *param_1 = uVar5;
    if (uVar5 == 0x2e) {
      *(undefined1 *)(uVar4 + *(int *)(uVar1 + 0x18)) = 0x2e;
      iVar3 = *(int *)param_1[0xc];
      *(int *)param_1[0xc] = iVar3 + -1;
      if (iVar3 == 0) {
        uVar5 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar2 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
        uVar5 = (uint)*pbVar2;
      }
      *param_1 = uVar5;
      uVar4 = uVar6 + 3;
      *(undefined1 *)(uVar6 + 2 + *(int *)(uVar1 + 0x18)) = 0;
      FUN_0041c854(param_1,"ambiguous syntax (decimal point x string concatenation)",0x11a);
      uVar5 = *param_1;
    }
  }
  iVar3 = isdigit(uVar5);
  while (iVar3 != 0) {
    if (*(uint *)(uVar1 + 0x1c) < uVar4 + 10) {
      FUN_00419ff8(uVar1,uVar4 + 0x8a);
    }
    *(char *)(uVar4 + *(int *)(uVar1 + 0x18)) = (char)*param_1;
    iVar3 = *(int *)param_1[0xc];
    uVar4 = uVar4 + 1;
    *(int *)param_1[0xc] = iVar3 + -1;
    if (iVar3 == 0) {
      uVar6 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
    }
    else {
      pbVar2 = *(byte **)(param_1[0xc] + 4);
      *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
      uVar6 = (uint)*pbVar2;
    }
    *param_1 = uVar6;
    iVar3 = isdigit(uVar6);
  }
  uVar6 = *param_1;
  if ((uVar6 == 0x65) || (uVar6 == 0x45)) {
    *(char *)(uVar4 + *(int *)(uVar1 + 0x18)) = (char)uVar6;
    iVar3 = *(int *)param_1[0xc];
    *(int *)param_1[0xc] = iVar3 + -1;
    uVar6 = uVar4 + 1;
    if (iVar3 == 0) {
      uVar5 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
    }
    else {
      pbVar2 = *(byte **)(param_1[0xc] + 4);
      *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
      uVar5 = (uint)*pbVar2;
    }
    *param_1 = uVar5;
    if ((uVar5 == 0x2b) || (uVar5 == 0x2d)) {
      *(char *)(uVar6 + *(int *)(uVar1 + 0x18)) = (char)uVar5;
      iVar3 = *(int *)param_1[0xc];
      uVar6 = uVar4 + 2;
      *(int *)param_1[0xc] = iVar3 + -1;
      if (iVar3 == 0) {
        uVar5 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar2 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
        uVar5 = (uint)*pbVar2;
      }
      *param_1 = uVar5;
    }
    iVar3 = isdigit(uVar5);
    uVar4 = uVar6;
    while (iVar3 != 0) {
      if (*(uint *)(uVar1 + 0x1c) < uVar4 + 10) {
        FUN_00419ff8(uVar1,uVar4 + 0x8a);
      }
      *(char *)(uVar4 + *(int *)(uVar1 + 0x18)) = (char)*param_1;
      iVar3 = *(int *)param_1[0xc];
      uVar4 = uVar4 + 1;
      *(int *)param_1[0xc] = iVar3 + -1;
      if (iVar3 == 0) {
        uVar6 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar2 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
        uVar6 = (uint)*pbVar2;
      }
      *param_1 = uVar6;
      iVar3 = isdigit(uVar6);
    }
  }
  *(undefined1 *)(uVar4 + *(int *)(uVar1 + 0x18)) = 0;
  iVar3 = FUN_0041a030(*(undefined4 *)(uVar1 + 0x18),param_3);
  if (iVar3 == 0) {
    FUN_0041c854(param_1,"malformed number",0x11a);
  }
  return;
}




/* Function: FUN_0041c0f0 */

void FUN_0041c0f0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = param_1[0xb];
  iVar8 = 0;
  if (*(uint *)(uVar1 + 0x1c) < 10) {
    FUN_00419ff8(uVar1,0x8a);
  }
  **(undefined1 **)(uVar1 + 0x18) = 0x5b;
  *(char *)(*(int *)(uVar1 + 0x18) + 1) = (char)*param_1;
  iVar7 = *(int *)param_1[0xc];
  *(int *)param_1[0xc] = iVar7 + -1;
  if (iVar7 == 0) {
    uVar4 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
  }
  else {
    pbVar2 = *(byte **)(param_1[0xc] + 4);
    *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
    uVar4 = (uint)*pbVar2;
  }
  *param_1 = uVar4;
  iVar7 = 2;
  while( true ) {
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar6 = iVar7;
            if (*(uint *)(uVar1 + 0x1c) < iVar6 + 10U) {
              FUN_00419ff8(uVar1,iVar6 + 0x8a);
            }
            uVar4 = *param_1;
            if (uVar4 != 0xffffffff) break;
            *(undefined1 *)(iVar6 + *(int *)(uVar1 + 0x18)) = 0;
            FUN_0041c854(param_1,"unfinished long string",0x11b);
            iVar7 = iVar6 + 1;
          }
          if (uVar4 != 0x5b) break;
          *(undefined1 *)(iVar6 + *(int *)(uVar1 + 0x18)) = 0x5b;
          iVar7 = *(int *)param_1[0xc];
          *(int *)param_1[0xc] = iVar7 + -1;
          if (iVar7 == 0) {
            uVar4 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
          }
          else {
            pbVar2 = *(byte **)(param_1[0xc] + 4);
            *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
            uVar4 = (uint)*pbVar2;
          }
          *param_1 = uVar4;
          iVar7 = iVar6 + 1;
          if (uVar4 == 0x5b) {
            iVar8 = iVar8 + 1;
            *(undefined1 *)(iVar6 + 1 + *(int *)(uVar1 + 0x18)) = 0x5b;
            iVar7 = *(int *)param_1[0xc];
            *(int *)param_1[0xc] = iVar7 + -1;
            if (iVar7 == 0) {
              uVar4 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
            }
            else {
              pbVar2 = *(byte **)(param_1[0xc] + 4);
              *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
              uVar4 = (uint)*pbVar2;
            }
            *param_1 = uVar4;
            iVar7 = iVar6 + 2;
          }
        }
        if (uVar4 == 0x5d) break;
        if (uVar4 == 10) {
          *(undefined1 *)(iVar6 + *(int *)(uVar1 + 0x18)) = 10;
          FUN_0041bdb0(param_1);
          iVar7 = iVar6 + 1;
        }
        else {
          *(char *)(iVar6 + *(int *)(uVar1 + 0x18)) = (char)uVar4;
          iVar7 = *(int *)param_1[0xc];
          *(int *)param_1[0xc] = iVar7 + -1;
          if (iVar7 == 0) {
            uVar4 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
          }
          else {
            pbVar2 = *(byte **)(param_1[0xc] + 4);
            *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
            uVar4 = (uint)*pbVar2;
          }
          *param_1 = uVar4;
          iVar7 = iVar6 + 1;
        }
      }
      *(undefined1 *)(iVar6 + *(int *)(uVar1 + 0x18)) = 0x5d;
      iVar3 = *(int *)param_1[0xc];
      *(int *)param_1[0xc] = iVar3 + -1;
      iVar7 = iVar6 + 1;
      if (iVar3 == 0) {
        uVar4 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar2 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
        uVar4 = (uint)*pbVar2;
      }
      *param_1 = uVar4;
    } while (uVar4 != 0x5d);
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    *(undefined1 *)(iVar7 + *(int *)(uVar1 + 0x18)) = 0x5d;
    iVar7 = *(int *)param_1[0xc];
    *(int *)param_1[0xc] = iVar7 + -1;
    if (iVar7 == 0) {
      uVar4 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
    }
    else {
      pbVar2 = *(byte **)(param_1[0xc] + 4);
      *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
      uVar4 = (uint)*pbVar2;
    }
    *param_1 = uVar4;
    iVar7 = iVar6 + 2;
  }
  *(undefined1 *)(iVar7 + *(int *)(uVar1 + 0x18)) = 0x5d;
  iVar8 = *(int *)param_1[0xc];
  *(int *)param_1[0xc] = iVar8 + -1;
  if (iVar8 == 0) {
    uVar4 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
  }
  else {
    pbVar2 = *(byte **)(param_1[0xc] + 4);
    *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
    uVar4 = (uint)*pbVar2;
  }
  *param_1 = uVar4;
  *(undefined1 *)(iVar6 + 2 + *(int *)(uVar1 + 0x18)) = 0;
  uVar5 = FUN_0041a5d0(uVar1,*(int *)(uVar1 + 0x18) + 2,iVar6 + -2);
  *param_2 = uVar5;
  return;
}




/* Function: FUN_0041c334 */

void FUN_0041c334(uint *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint _C;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_20;
  uint local_14;
  
  uVar1 = param_1[0xb];
  if (*(uint *)(uVar1 + 0x1c) < 10) {
    FUN_00419ff8(uVar1,0x8a);
  }
  local_20 = 1;
  **(undefined1 **)(uVar1 + 0x18) = (char)*param_1;
  iVar6 = *(int *)param_1[0xc];
  *(int *)param_1[0xc] = iVar6 + -1;
  if (iVar6 == 0) {
    uVar3 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
  }
  else {
    pbVar2 = *(byte **)(param_1[0xc] + 4);
    *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
    uVar3 = (uint)*pbVar2;
  }
  *param_1 = uVar3;
  if (uVar3 != param_2) {
    iVar6 = 1;
    do {
      if (*(uint *)(uVar1 + 0x1c) < iVar6 + 10U) {
        FUN_00419ff8(uVar1,iVar6 + 0x8a);
        uVar3 = *param_1;
      }
      if ((uVar3 == 0xffffffff) || (uVar3 == 10)) {
        *(undefined1 *)(iVar6 + *(int *)(uVar1 + 0x18)) = 0;
        local_20 = iVar6 + 1;
        FUN_0041c854(param_1,"unfinished string",0x11b);
        uVar3 = *param_1;
      }
      else if (uVar3 == 0x5c) {
        iVar7 = *(int *)param_1[0xc];
        *(int *)param_1[0xc] = iVar7 + -1;
        if (iVar7 == 0) {
          local_14 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
        }
        else {
          pbVar2 = *(byte **)(param_1[0xc] + 4);
          *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
          local_14 = (uint)*pbVar2;
        }
        *param_1 = local_14;
        switch(local_14) {
        case 10:
          *(undefined1 *)(iVar6 + *(int *)(uVar1 + 0x18)) = 10;
          local_20 = iVar6 + 1;
          FUN_0041bdb0(param_1);
          uVar3 = *param_1;
          break;
        default:
          *(char *)(iVar6 + *(int *)(uVar1 + 0x18)) = (char)local_14;
          iVar7 = *(int *)param_1[0xc];
          local_20 = iVar6 + 1;
          *(int *)param_1[0xc] = iVar7 + -1;
          if (iVar7 == 0) {
            uVar3 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
          }
          else {
            pbVar2 = *(byte **)(param_1[0xc] + 4);
            *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
            uVar3 = (uint)*pbVar2;
          }
          *param_1 = uVar3;
          break;
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          iVar7 = 0;
          uVar3 = 0;
          while( true ) {
            uVar3 = (local_14 - 0x30) + uVar3 * 10;
            iVar4 = *(int *)param_1[0xc];
            *(int *)param_1[0xc] = iVar4 + -1;
            if (iVar4 == 0) {
              _C = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
            }
            else {
              pbVar2 = *(byte **)(param_1[0xc] + 4);
              *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
              _C = (uint)*pbVar2;
            }
            *param_1 = _C;
            iVar7 = iVar7 + 1;
            if ((2 < iVar7) || (iVar4 = isdigit(_C), iVar4 == 0)) break;
            local_14 = *param_1;
          }
          if (uVar3 != (uVar3 & 0xff)) {
            *(undefined1 *)(iVar6 + *(int *)(uVar1 + 0x18)) = 0;
            iVar6 = iVar6 + 1;
            FUN_0041c854(param_1,"escape sequence too large",0x11b);
          }
          local_20 = iVar6 + 1;
          *(char *)(iVar6 + *(int *)(uVar1 + 0x18)) = (char)uVar3;
          uVar3 = *param_1;
          break;
        case 0x61:
          *(undefined1 *)(iVar6 + *(int *)(uVar1 + 0x18)) = 7;
          iVar7 = *(int *)param_1[0xc];
          *(int *)param_1[0xc] = iVar7 + -1;
          local_20 = iVar6 + 1;
          if (iVar7 == 0) {
            uVar3 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
          }
          else {
            pbVar2 = *(byte **)(param_1[0xc] + 4);
            *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
            uVar3 = (uint)*pbVar2;
          }
          *param_1 = uVar3;
          break;
        case 0x62:
          *(undefined1 *)(iVar6 + *(int *)(uVar1 + 0x18)) = 8;
          iVar7 = *(int *)param_1[0xc];
          *(int *)param_1[0xc] = iVar7 + -1;
          local_20 = iVar6 + 1;
          if (iVar7 == 0) {
            uVar3 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
          }
          else {
            pbVar2 = *(byte **)(param_1[0xc] + 4);
            *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
            uVar3 = (uint)*pbVar2;
          }
          *param_1 = uVar3;
          break;
        case 0x66:
          *(undefined1 *)(iVar6 + *(int *)(uVar1 + 0x18)) = 0xc;
          iVar7 = *(int *)param_1[0xc];
          *(int *)param_1[0xc] = iVar7 + -1;
          local_20 = iVar6 + 1;
          if (iVar7 == 0) {
            uVar3 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
          }
          else {
            pbVar2 = *(byte **)(param_1[0xc] + 4);
            *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
            uVar3 = (uint)*pbVar2;
          }
          *param_1 = uVar3;
          break;
        case 0x6e:
          *(undefined1 *)(iVar6 + *(int *)(uVar1 + 0x18)) = 10;
          iVar7 = *(int *)param_1[0xc];
          *(int *)param_1[0xc] = iVar7 + -1;
          local_20 = iVar6 + 1;
          if (iVar7 == 0) {
            uVar3 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
          }
          else {
            pbVar2 = *(byte **)(param_1[0xc] + 4);
            *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
            uVar3 = (uint)*pbVar2;
          }
          *param_1 = uVar3;
          break;
        case 0x72:
          *(undefined1 *)(iVar6 + *(int *)(uVar1 + 0x18)) = 0xd;
          iVar7 = *(int *)param_1[0xc];
          *(int *)param_1[0xc] = iVar7 + -1;
          local_20 = iVar6 + 1;
          if (iVar7 == 0) {
            uVar3 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
          }
          else {
            pbVar2 = *(byte **)(param_1[0xc] + 4);
            *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
            uVar3 = (uint)*pbVar2;
          }
          *param_1 = uVar3;
          break;
        case 0x74:
          *(undefined1 *)(iVar6 + *(int *)(uVar1 + 0x18)) = 9;
          iVar7 = *(int *)param_1[0xc];
          *(int *)param_1[0xc] = iVar7 + -1;
          local_20 = iVar6 + 1;
          if (iVar7 == 0) {
            uVar3 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
          }
          else {
            pbVar2 = *(byte **)(param_1[0xc] + 4);
            *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
            uVar3 = (uint)*pbVar2;
          }
          *param_1 = uVar3;
          break;
        case 0x76:
          *(undefined1 *)(iVar6 + *(int *)(uVar1 + 0x18)) = 0xb;
          iVar7 = *(int *)param_1[0xc];
          *(int *)param_1[0xc] = iVar7 + -1;
          local_20 = iVar6 + 1;
          if (iVar7 == 0) {
            uVar3 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
          }
          else {
            pbVar2 = *(byte **)(param_1[0xc] + 4);
            *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
            uVar3 = (uint)*pbVar2;
          }
          *param_1 = uVar3;
        }
      }
      else {
        *(char *)(iVar6 + *(int *)(uVar1 + 0x18)) = (char)uVar3;
        iVar7 = *(int *)param_1[0xc];
        local_20 = iVar6 + 1;
        *(int *)param_1[0xc] = iVar7 + -1;
        if (iVar7 == 0) {
          uVar3 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
        }
        else {
          pbVar2 = *(byte **)(param_1[0xc] + 4);
          *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
          uVar3 = (uint)*pbVar2;
        }
        *param_1 = uVar3;
      }
      iVar6 = local_20;
    } while (uVar3 != param_2);
  }
  *(char *)(local_20 + *(int *)(uVar1 + 0x18)) = (char)uVar3;
  iVar6 = *(int *)param_1[0xc];
  *(int *)param_1[0xc] = iVar6 + -1;
  if (iVar6 == 0) {
    uVar3 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
  }
  else {
    pbVar2 = *(byte **)(param_1[0xc] + 4);
    *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
    uVar3 = (uint)*pbVar2;
  }
  *param_1 = uVar3;
  *(undefined1 *)(local_20 + 1 + *(int *)(uVar1 + 0x18)) = 0;
  uVar5 = FUN_0041a5d0(uVar1,*(int *)(uVar1 + 0x18) + 1,local_20 + -1);
  *param_3 = uVar5;
  return;
}




/* Function: FUN_0041c75c */

undefined4 FUN_0041c75c(uint *param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_1[0xb];
  iVar5 = 0;
  uVar3 = *(uint *)(uVar1 + 0x1c);
  if (uVar3 < 10) {
    FUN_00419ff8(uVar1,0x8a);
    uVar3 = *(uint *)(uVar1 + 0x1c);
  }
  while( true ) {
    while( true ) {
      if (uVar3 < iVar5 + 10U) {
        FUN_00419ff8(uVar1,iVar5 + 0x8a);
      }
      *(char *)(iVar5 + *(int *)(uVar1 + 0x18)) = (char)*param_1;
      iVar4 = *(int *)param_1[0xc];
      iVar5 = iVar5 + 1;
      *(int *)param_1[0xc] = iVar4 + -1;
      if (iVar4 == 0) {
        uVar3 = (**(code **)(param_1[0xc] + 8))(param_1[0xc]);
      }
      else {
        pbVar2 = *(byte **)(param_1[0xc] + 4);
        *(byte **)(param_1[0xc] + 4) = pbVar2 + 1;
        uVar3 = (uint)*pbVar2;
      }
      *param_1 = uVar3;
      iVar4 = isalnum(uVar3);
      if (iVar4 == 0) break;
      uVar3 = *(uint *)(uVar1 + 0x1c);
    }
    if (*param_1 != 0x5f) break;
    uVar3 = *(uint *)(uVar1 + 0x1c);
  }
  *(undefined1 *)(iVar5 + *(int *)(uVar1 + 0x18)) = 0;
  return *(undefined4 *)(uVar1 + 0x18);
}




/* Function: FUN_0041c7f4 */

void FUN_0041c7f4(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 < 0x100) {
    *param_2 = (char)param_1;
    param_2[1] = '\0';
    return;
  }
  pcVar2 = (&PTR_LAB_005a205c)[param_1];
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *param_2 = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}




/* Function: FUN_0041c824 */

void FUN_0041c824(undefined4 param_1,undefined4 param_2)

{
  char local_8 [8];
  
  sprintf(local_8,"0x%02X",param_2);
  FUN_0041c8a4(param_1,"invalid control char",local_8);
  return;
}




/* Function: FUN_0041c854 */

void FUN_0041c854(int param_1,undefined4 param_2,undefined4 param_3)

{
  char local_14 [16];
  
  FUN_0041c7f4(param_3,local_14);
  if (local_14[0] != '\0') {
    FUN_0041c8a4(param_1,param_2,local_14);
    return;
  }
  FUN_0041c8a4(param_1,param_2,*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x18));
  return;
}




/* Function: FUN_0041c8a4 */

void FUN_0041c8a4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_54 [80];
  
  FUN_0041a0a0(local_54,*(int *)(param_1 + 0x3c) + 0x14,0x50);
  FUN_0041a1c0(*(undefined4 *)(param_1 + 0x2c),
               "%.99s;\n  last token read: `%.30s\' at line %d in %.80s",param_2,param_3,
               *(undefined4 *)(param_1 + 0x34),local_54);
  return;
}




/* Function: FUN_0041c8e0 */

void FUN_0041c8e0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar3 = 3;
  do {
    iVar1 = FUN_0041a5a8(param_1,*(undefined4 *)((int)&PTR_DAT_005a2460 + iVar4));
    uVar2 = uVar3 & 0xff;
    uVar3 = uVar3 + 1;
    iVar4 = iVar4 + 4;
    *(uint *)(iVar1 + 0x10) = uVar2;
  } while (iVar4 < 0x48);
  return;
}




/* Function: FUN_0041c920 */

int __fastcall FUN_0041c920(int param_1)

{
  return param_1 + 0x1914;
}




/* Function: FUN_0041c930 */

undefined4 __fastcall FUN_0041c930(int param_1)

{
  return *(undefined4 *)(param_1 + 0x17d0);
}




/* Function: FUN_0041c940 */

undefined4 __fastcall FUN_0041c940(int param_1)

{
  return *(undefined4 *)(param_1 + 0x130);
}




/* Function: FUN_0041c950 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_0041c950(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            undefined2 param_2,undefined2 param_3)

{
  uint unaff_retaddr;
  char local_204 [512];
  uint local_4;
  
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  _snprintf(local_204,0x200,"Mtl-lmap#%08X",CONCAT22(param_2,param_3));
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,local_204);
  return param_1;
}




/* Function: FUN_0041c9d0 */

void __thiscall FUN_0041c9d0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  char *pcVar4;
  
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = pcVar2 + (1 - (int)(param_2 + 1));
    pvVar3 = operator_new((uint)pcVar2,(nothrow_t *)&DAT_005b6164);
    *(void **)(param_1 + 0x128) = pvVar3;
    pcVar4 = (char *)0x0;
    if (pcVar2 != (char *)0x0) {
      do {
        pcVar4[*(int *)(param_1 + 0x128)] = param_2[(int)pcVar4];
        pcVar4 = pcVar4 + 1;
      } while (pcVar4 < pcVar2);
    }
  }
  return;
}




/* Function: FUN_0041ca30 */

void __thiscall FUN_0041ca30(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  char *pcVar4;
  
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = pcVar2 + (1 - (int)(param_2 + 1));
    pvVar3 = operator_new((uint)pcVar2,(nothrow_t *)&DAT_005b6164);
    *(void **)(param_1 + 300) = pvVar3;
    pcVar4 = (char *)0x0;
    if (pcVar2 != (char *)0x0) {
      do {
        pcVar4[*(int *)(param_1 + 300)] = param_2[(int)pcVar4];
        pcVar4 = pcVar4 + 1;
      } while (pcVar4 < pcVar2);
    }
  }
  return;
}




/* Function: FUN_0041ca90 */

int __fastcall FUN_0041ca90(int param_1)

{
  return param_1 + 0x2f4;
}




/* Function: FUN_0041caa0 */

int __fastcall FUN_0041caa0(int param_1)

{
  return param_1 + 0x2e8;
}




/* Function: FUN_0041cab0 */

undefined4 __fastcall FUN_0041cab0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1704);
}




/* Function: FUN_0041cac0 */

int __fastcall FUN_0041cac0(int param_1)

{
  return param_1 + 0x14c0;
}




/* Function: FUN_0041cad0 */

int __fastcall FUN_0041cad0(int param_1)

{
  return param_1 + 0x158c;
}




/* Function: FUN_0041cae0 */

int __fastcall FUN_0041cae0(int param_1)

{
  return param_1 + 0x167c;
}




/* Function: FUN_0041caf0 */

int __fastcall FUN_0041caf0(int param_1)

{
  return param_1 + 0x1498;
}




/* Function: FUN_0041cb00 */

int __fastcall FUN_0041cb00(int param_1)

{
  return param_1 + 0x14ac;
}




/* Function: FUN_0041cb10 */

undefined4 __fastcall FUN_0041cb10(int param_1)

{
  if (*(int *)(param_1 + 0x130) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xe8);
  }
  return 0;
}




/* Function: FUN_0041cb30 */

int __fastcall FUN_0041cb30(int param_1)

{
  return param_1 + 0x1b10;
}




/* Function: FUN_0041cb40 */

undefined4 __fastcall FUN_0041cb40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x21e8);
}




/* Function: FUN_0041cb60 */

void __thiscall FUN_0041cb60(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x21ec) = param_2;
  return;
}




/* Function: FUN_0041cb70 */

undefined1 __fastcall FUN_0041cb70(int param_1)

{
  return *(undefined1 *)(param_1 + 0x21e4);
}




/* Function: FUN_0041cb80 */

float10 __fastcall FUN_0041cb80(int param_1)

{
  return (float10)*(float *)(param_1 + 0xac);
}




/* Function: FUN_0041cb90 */

undefined4 __fastcall FUN_0041cb90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2218);
}




/* Function: FUN_0041cba0 */

void __thiscall FUN_0041cba0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2218) = param_2;
  return;
}




/* Function: FUN_0041cbb0 */

int __thiscall FUN_0041cbb0(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(*(int *)(param_1 + 0xd8) * 0x20 + *(int *)(param_1 + 0xd0)) =
       *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(*(int *)(param_1 + 0xd8) * 0x20 + 0x10 + *(int *)(param_1 + 0xd0)) = param_4;
  *(undefined4 *)(*(int *)(param_1 + 0xd8) * 0x20 + 0x14 + *(int *)(param_1 + 0xd0)) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xd8) * 0x20 + 0x1c + *(int *)(param_1 + 0xd0)) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0xd8) * 0x20 + 0x18 + *(int *)(param_1 + 0xd0)) = param_3;
  return *(int *)(param_1 + 0xc4) + *(int *)(param_1 + 0xcc) * 0x28;
}




/* Function: FUN_0041cc40 */

int __thiscall FUN_0041cc40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(*(int *)(param_1 + 0xd8) * 0x20 + *(int *)(param_1 + 0xd0)) =
       *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(*(int *)(param_1 + 0xd8) * 0x20 + 0x10 + *(int *)(param_1 + 0xd0)) = param_4;
  *(undefined4 *)(*(int *)(param_1 + 0xd8) * 0x20 + 0x14 + *(int *)(param_1 + 0xd0)) = param_2;
  *(undefined2 *)(*(int *)(param_1 + 0xd8) * 0x20 + 0x1c + *(int *)(param_1 + 0xd0)) = 0xffff;
  *(undefined4 *)(*(int *)(param_1 + 0xd8) * 0x20 + 0x18 + *(int *)(param_1 + 0xd0)) = param_3;
  return *(int *)(param_1 + 0xc4) + *(int *)(param_1 + 0xcc) * 0x28;
}




/* Function: FUN_0041ccd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall FUN_0041ccd0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint unaff_retaddr;
  undefined4 local_610 [126];
  undefined2 auStack_418 [256];
  undefined2 auStack_218 [262];
  uint local_c;
  
  local_c = DAT_005b12c0 ^ unaff_retaddr;
  piVar1 = *(int **)(param_1 + 0x17d0);
  if (piVar1 != (int *)0x0) {
    puVar6 = local_610;
    for (iVar2 = 0x180; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    (**(code **)(*piVar1 + 0x4c))(piVar1,local_610);
    iVar5 = 0;
    iVar2 = FUN_004cf110();
    iVar3 = 0;
    do {
      uVar4 = (undefined2)iVar5;
      *(undefined2 *)((int)local_610 + iVar3 * 2 + -8) = uVar4;
      auStack_418[iVar3] = uVar4;
      auStack_218[iVar3] = uVar4;
      iVar5 = iVar5 + iVar2;
      if (0xffff < iVar5) {
        iVar5 = 0xffff;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    (**(code **)(*piVar1 + 0x48))(piVar1,1,&stack0xfffff9e8);
  }
  return;
}




/* Function: FUN_0041cd90 */

void __thiscall FUN_0041cd90(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x94) = param_2;
  return;
}




/* Function: FUN_0041cda0 */

undefined4 __fastcall FUN_0041cda0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x94);
}




/* Function: FUN_0041cdb0 */

void __thiscall FUN_0041cdb0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x98) = *param_2;
  *(undefined4 *)(param_1 + 0x9c) = param_2[1];
  return;
}




/* Function: FUN_0041cdd0 */

int __fastcall FUN_0041cdd0(int param_1)

{
  return param_1 + 0x98;
}




/* Function: FUN_0041cde0 */

void __thiscall FUN_0041cde0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xa0) = *param_2;
  *(undefined4 *)(param_1 + 0xa4) = param_2[1];
  return;
}




/* Function: FUN_0041ce00 */

int __fastcall FUN_0041ce00(int param_1)

{
  return param_1 + 0xa0;
}




/* Function: FUN_0041ce10 */

float10 __fastcall FUN_0041ce10(int param_1)

{
  return (float10)*(float *)(param_1 + 0xa8);
}




/* Function: FUN_0041ce20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041ce20(int param_1,float param_2)

{
  *(float *)(param_1 + 0xa8) =
       (param_2 - *(float *)(param_1 + 0xa8)) * _DAT_00587c40 + *(float *)(param_1 + 0xa8);
  return;
}




/* Function: FUN_0041ce40 */

int __fastcall FUN_0041ce40(int param_1)

{
  return param_1 + 0x1708;
}




/* Function: FUN_0041ce50 */

int __fastcall FUN_0041ce50(int param_1)

{
  return param_1 + 0x1718;
}




/* Function: FUN_0041ce60 */

undefined1 __fastcall FUN_0041ce60(int param_1)

{
  return *(undefined1 *)(param_1 + 0x18f3);
}




/* Function: FUN_0041ce70 */

void __thiscall FUN_0041ce70(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18f3) = param_2;
  return;
}




/* Function: FUN_0041ce80 */

undefined4 FUN_0041ce80(void)

{
  return DAT_005b5f2c;
}




/* Function: FUN_0041ce90 */

void __thiscall FUN_0041ce90(int param_1,undefined4 param_2)

{
  void *pvVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x118);
  if (*(uint *)(param_1 + 0x114) <= uVar2) {
    pvVar1 = operator_new(uVar2 * 4 + 0x40,(nothrow_t *)&DAT_005b6164);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x118) != 0) {
      do {
        *(undefined4 *)((int)pvVar1 + uVar2 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x110) + uVar2 * 4);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x118));
    }
    operator_delete__(*(void **)(param_1 + 0x110));
    uVar2 = *(uint *)(param_1 + 0x118);
    *(void **)(param_1 + 0x110) = pvVar1;
    *(uint *)(param_1 + 0x114) = uVar2 + 0x10;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x110) + uVar2 * 4) = param_2;
  *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
  return;
}




/* Function: FUN_0041cf30 */

undefined4 __fastcall FUN_0041cf30(int param_1)

{
  return *(undefined4 *)(param_1 + 0x124);
}




/* Function: FUN_0041cf40 */

undefined4 __fastcall FUN_0041cf40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x11c);
}




/* Function: FUN_0041cf50 */

undefined4 __fastcall FUN_0041cf50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1490);
}




/* Function: FUN_0041cf60 */

undefined4 __fastcall FUN_0041cf60(int param_1)

{
  return *(undefined4 *)(param_1 + 0x17c4);
}




/* Function: FUN_0041cf70 */

undefined4 __fastcall FUN_0041cf70(int param_1)

{
  return *(undefined4 *)(param_1 + 0x17c8);
}




/* Function: FUN_0041cf80 */

undefined4 __fastcall FUN_0041cf80(int param_1)

{
  return *(undefined4 *)(param_1 + 0xe0);
}




/* Function: FUN_0041cf90 */

int __fastcall FUN_0041cf90(int param_1)

{
  return param_1 + 0xa8;
}




/* Function: FUN_0041cfa0 */

int __fastcall FUN_0041cfa0(int param_1)

{
  return param_1 + 0xc4;
}




/* Function: FUN_0041cfb0 */

undefined4 __fastcall FUN_0041cfb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x138);
}




/* Function: FUN_0041cfc0 */

undefined4 * __thiscall
FUN_0041cfc0(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,int param_5)

{
  param_1[10] = param_1 + 8;
  param_1[8] = param_3;
  param_1[9] = param_5;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  param_1[3] = 100;
  param_1[7] = param_5 * 0xc;
  param_1[4] = 6;
  param_1[6] = 0;
  param_1[5] = param_4 | 8;
  (**(code **)(*param_2 + 0x5c))(param_2,param_5 * 0xc,param_4 | 8,param_3,0,param_1);
  return param_1;
}




/* Function: FUN_0041d030 */

undefined4 * __thiscall
FUN_0041d030(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,int param_5)

{
  param_1[10] = param_1 + 8;
  param_1[8] = param_3;
  param_1[9] = param_5;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  param_1[3] = 100;
  param_1[7] = param_5 * 0x28;
  param_1[4] = 6;
  param_1[6] = 0;
  param_1[5] = param_4 | 8;
  (**(code **)(*param_2 + 0x5c))(param_2,param_5 * 0x28,param_4 | 8,param_3,0,param_1);
  return param_1;
}




/* Function: FUN_0041d0a0 */

undefined4 __thiscall FUN_0041d0a0(int *param_1,uint param_2,int *param_3)

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
      iVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1,param_1[1] * 0x28,param_2 * 0x28,&param_3,uVar4);
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




/* Function: FUN_0041d130 */

void __fastcall FUN_0041d130(int *param_1)

{
  int *piVar1;
  
  if (((char)param_1[2] != '\0') && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}




/* Function: FUN_0041d150 */

undefined4 * __thiscall
FUN_0041d150(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,int param_5)

{
  param_1[10] = param_1 + 8;
  param_1[8] = param_3;
  param_1[9] = param_5;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  param_1[3] = 100;
  param_1[7] = param_5 * 0x18;
  param_1[4] = 6;
  param_1[6] = 0;
  param_1[5] = param_4 | 8;
  (**(code **)(*param_2 + 0x5c))(param_2,param_5 * 0x18,param_4 | 8,param_3,0,param_1);
  return param_1;
}




/* Function: FUN_0041d1c0 */

undefined4 * __thiscall
FUN_0041d1c0(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,int param_5)

{
  param_1[10] = param_1 + 8;
  param_1[8] = param_3;
  param_1[9] = param_5;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  param_1[3] = 100;
  param_1[7] = param_5 << 5;
  param_1[4] = 6;
  param_1[6] = 0;
  param_1[5] = param_4 | 8;
  (**(code **)(*param_2 + 0x5c))(param_2,param_5 << 5,param_4 | 8,param_3,0,param_1);
  return param_1;
}




/* Function: FUN_0041d230 */

undefined4 * __thiscall
FUN_0041d230(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,int param_5)

{
  param_1[10] = param_1 + 8;
  param_1[8] = param_3;
  param_1[9] = param_5;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  param_1[3] = 100;
  param_1[7] = param_5 * 0x24;
  param_1[4] = 6;
  param_1[6] = 0;
  param_1[5] = param_4 | 8;
  (**(code **)(*param_2 + 0x5c))(param_2,param_5 * 0x24,param_4 | 8,param_3,0,param_1);
  return param_1;
}




/* Function: FUN_0041d2a0 */

int __fastcall FUN_0041d2a0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
}




/* Function: FUN_0041d2d0 */

void FUN_0041d2d0(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ac82;
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




/* Function: FUN_0041d350 */

undefined4 __fastcall FUN_0041d350(undefined4 param_1)

{
  return param_1;
}




/* Function: FUN_0041d360 */

LPCRITICAL_SECTION __fastcall FUN_0041d360(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return param_1;
}




/* Function: FUN_0041d370 */

void __fastcall FUN_0041d370(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}




/* Function: FUN_0041d380 */

void __fastcall FUN_0041d380(undefined4 *param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  return;
}




/* Function: FUN_0041d3a0 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
FUN_0041d3a0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ac99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,param_2);
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (param_1 + 0x1c,param_2 + 0x1c);
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0041d410 */

void __thiscall FUN_0041d410(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[2];
  fVar2 = param_1[1];
  *param_2 = -*param_1;
  param_2[1] = -fVar2;
  param_2[2] = -fVar1;
  return;
}




/* Function: FUN_0041d430 */

void __thiscall FUN_0041d430(undefined4 *param_1,undefined4 *param_2)

{
  if (param_2 != param_1) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}




/* Function: FUN_0041d450 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041d450(float *param_1,float param_2)

{
  param_2 = _DAT_00583354 / param_2;
  *param_1 = param_2 * *param_1;
  param_1[1] = param_2 * param_1[1];
  param_1[2] = param_2 * param_1[2];
  return;
}




/* Function: FUN_0041d480 */

float10 __fastcall FUN_0041d480(float *param_1)

{
  return SQRT((float10)param_1[2] * (float10)param_1[2] +
              (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
}




/* Function: FUN_0041d4b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041d4b0(float *param_1)

{
  float fVar1;
  
  fVar1 = SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  if (fVar1 < (float)_DAT_00587c48) {
    *param_1 = 0.0;
    param_1[1] = 1.0;
    param_1[2] = 0.0;
    return;
  }
  fVar1 = _DAT_00583354 / fVar1;
  *param_1 = fVar1 * *param_1;
  param_1[1] = fVar1 * param_1[1];
  param_1[2] = fVar1 * param_1[2];
  return;
}




/* Function: FUN_0041d510 */

void __thiscall FUN_0041d510(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  FUN_0041d4b0();
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return;
}




/* Function: FUN_0041d550 */

void FUN_0041d550(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[2];
  fVar2 = param_3[2];
  fVar3 = param_2[1];
  fVar4 = param_3[1];
  *param_1 = *param_2 + *param_3;
  param_1[1] = fVar3 + fVar4;
  param_1[2] = fVar1 + fVar2;
  return;
}




/* Function: FUN_0041d580 */

void FUN_0041d580(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[2];
  fVar2 = param_3[2];
  fVar3 = param_2[1];
  fVar4 = param_3[1];
  *param_1 = *param_2 - *param_3;
  param_1[1] = fVar3 - fVar4;
  param_1[2] = fVar1 - fVar2;
  return;
}




/* Function: FUN_0041d5b0 */

void FUN_0041d5b0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  *param_1 = param_3 * *param_2;
  param_1[1] = param_3 * fVar2;
  param_1[2] = param_3 * fVar1;
  return;
}




/* Function: FUN_0041d5e0 */

void FUN_0041d5e0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar2 = param_3[1];
  fVar3 = param_2[1];
  fVar4 = *param_3;
  fVar5 = param_2[2];
  fVar6 = *param_3;
  fVar7 = param_3[2];
  fVar8 = *param_2;
  *param_1 = param_2[1] * param_3[2] - param_2[2] * param_3[1];
  param_1[1] = fVar5 * fVar6 - fVar7 * fVar8;
  param_1[2] = fVar1 * fVar2 - fVar3 * fVar4;
  return;
}




/* Function: FUN_0041d620 */

void * __thiscall FUN_0041d620(void *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  _eh_vector_constructor_iterator_(param_1,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150)
  ;
  puVar1 = (undefined4 *)(param_2 + 8);
  puVar2 = (undefined4 *)((int)param_1 + 8);
  iVar3 = 4;
  do {
    puVar2[-2] = puVar1[-2];
    puVar2[-1] = puVar1[-1];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1;
}




/* Function: FUN_0041d670 */

void __thiscall FUN_0041d670(undefined4 *param_1,undefined4 *param_2)

{
  if (param_2 != param_1) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
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
  }
  return;
}




/* Function: FUN_0041d700 */

float * __thiscall FUN_0041d700(float *param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float local_40 [16];
  
  FUN_00407260(param_1);
  pfVar5 = local_40 + 1;
  iVar6 = 4;
  pfVar2 = param_1;
  do {
    iVar7 = 4;
    pfVar3 = pfVar2;
    pfVar4 = (float *)(param_2 + 0x20);
    do {
      *pfVar3 = 0.0;
      pfVar2 = pfVar3 + 1;
      iVar7 = iVar7 + -1;
      fVar1 = pfVar4[-8] * pfVar5[-1] + *pfVar3;
      *pfVar3 = fVar1;
      fVar1 = pfVar4[-4] * *pfVar5 + fVar1;
      *pfVar3 = fVar1;
      fVar1 = *pfVar4 * pfVar5[1] + fVar1;
      *pfVar3 = fVar1;
      *pfVar3 = pfVar4[4] * pfVar5[2] + fVar1;
      pfVar3 = pfVar2;
      pfVar4 = pfVar4 + 1;
    } while (iVar7 != 0);
    pfVar5 = pfVar5 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_00407300();
  return param_1;
}




/* Function: FUN_0041d7a0 */

undefined4 FUN_0041d7a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_00407260(param_2);
  uVar1 = FUN_0041d700(param_3);
  FUN_00407260(uVar1);
  FUN_00407300();
  return param_1;
}




/* Function: FUN_0041d7e0 */

undefined1 * __fastcall FUN_0041d7e0(undefined1 *param_1)

{
  float fVar1;
  
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  fVar1 = std::numeric_limits<float>::max();
  *(float *)(param_1 + 4) = fVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0xffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return param_1;
}




/* Function: FUN_0041d830 */

void __thiscall FUN_0041d830(undefined1 *param_1,undefined1 *param_2)

{
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    if (param_2 + 8 != param_1 + 8) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    }
    if (param_2 + 0x14 != param_1 + 0x14) {
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  }
  return;
}




/* Function: FUN_0041d8b0 */

void __fastcall FUN_0041d8b0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041d8b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}




/* Function: FUN_0041d8c0 */

ushort __thiscall FUN_0041d8c0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  
  fVar1 = *param_1;
  fVar2 = param_2[3];
  uVar3 = (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
          (ushort)(fVar1 == fVar2) << 0xe;
  if (fVar1 < fVar2 || (fVar1 == fVar2) != 0) {
    fVar1 = param_1[3];
    fVar2 = *param_2;
    uVar3 = (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
            (ushort)(fVar1 == fVar2) << 0xe;
    if (fVar1 >= fVar2) {
      fVar1 = param_1[1];
      fVar2 = param_2[4];
      uVar3 = (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
              (ushort)(fVar1 == fVar2) << 0xe;
      if (fVar1 < fVar2 || (fVar1 == fVar2) != 0) {
        fVar1 = param_1[4];
        fVar2 = param_2[1];
        uVar3 = (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                (ushort)(fVar1 == fVar2) << 0xe;
        if (fVar1 >= fVar2) {
          fVar1 = param_1[2];
          fVar2 = param_2[5];
          uVar3 = (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                  (ushort)(fVar1 == fVar2) << 0xe;
          if (fVar1 < fVar2 || (fVar1 == fVar2) != 0) {
            fVar1 = param_1[5];
            fVar2 = param_2[2];
            uVar3 = (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                    (ushort)(fVar1 == fVar2) << 0xe;
            if (fVar1 >= fVar2) {
              return CONCAT11((char)(uVar3 >> 8),1);
            }
          }
        }
      }
    }
  }
  return uVar3;
}




/* Function: FUN_0041d920 */

void __fastcall FUN_0041d920(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::clear
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x11));
  param_1[0x26] = 0xffffffff;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0xb9) = 0;
  return;
}




/* Function: FUN_0041d970 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
FUN_0041d970(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            char *param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ac99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
  local_4 = 0;
  if (param_2 != (char *)0x0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (param_1,param_2);
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    ExceptionList = local_c;
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0041d9f0 */

undefined4 __fastcall FUN_0041d9f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x19b8);
}




/* Function: FUN_0041da00 */

undefined4 __fastcall FUN_0041da00(int param_1)

{
  return *(undefined4 *)(param_1 + 0x19bc);
}




/* Function: FUN_0041db70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0041db70(int param_1)

{
  if (*(int *)(param_1 + 0x130) != 0) {
    return (float10)*(float *)(*(int *)(param_1 + 0x130) + 0x134);
  }
  return (float10)_DAT_00582ad8;
}




/* Function: FUN_0041db90 */

void __fastcall FUN_0041db90(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_4c [12];
  undefined1 local_40 [64];
  
  uVar1 = FUN_0041d7a0(local_40,param_1 + 0x1f0,param_1 + 0x270);
  FUN_004f9360(uVar1);
  FUN_00407300();
  puVar2 = (undefined4 *)FUN_00547ab0(local_4c);
  if (puVar2 != (undefined4 *)(param_1 + 0x2e8)) {
    *(undefined4 *)(param_1 + 0x2e8) = *puVar2;
    *(undefined4 *)(param_1 + 0x2ec) = puVar2[1];
    *(undefined4 *)(param_1 + 0x2f0) = puVar2[2];
  }
  return;
}




/* Function: FUN_0041dc00 */

void __fastcall FUN_0041dc00(int param_1)

{
  *(undefined1 *)(param_1 + 0xb0) = 1;
  if (*(int *)(param_1 + 0x130) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x130) + 0x28) = 1;
  }
  return;
}




/* Function: FUN_0041dc20 */

void __fastcall FUN_0041dc20(int param_1)

{
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_0040e950(0xffffffff);
  if (*(int *)(param_1 + 0x130) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x130) + 0x28) = 1;
  }
  return;
}




/* Function: FUN_0041dc50 */

void __thiscall FUN_0041dc50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  do {
    iVar5 = param_2 * 0x20;
    iVar1 = *(int *)(iVar5 + 4 + *(int *)(param_1 + 0xd0));
    if (iVar1 != -1) {
      FUN_0041dc50(iVar1);
    }
    *(int *)(*(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xe4) * 4) = param_2;
    iVar1 = *(int *)(param_1 + 0xe8);
    iVar3 = *(int *)(param_1 + 0xe4) + 1;
    *(int *)(param_1 + 0xe4) = iVar3;
    iVar4 = *(int *)(param_1 + 0xf0);
    if (*(int *)(iVar1 + iVar4 * 4) == 0) {
LAB_0041dd05:
      *(undefined4 *)(iVar1 + iVar4 * 4) = 1;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xd0);
      iVar3 = *(int *)(*(int *)(param_1 + 0xdc) + -8 + iVar3 * 4) * 0x20 + iVar2;
      if ((((*(int *)(iVar2 + 0x10 + iVar5) != *(int *)(iVar3 + 0x10)) ||
           (*(int *)(iVar2 + 0x14 + iVar5) != *(int *)(iVar3 + 0x14))) ||
          (*(int *)(iVar2 + 0x18 + iVar5) != *(int *)(iVar3 + 0x18))) ||
         ((*(short *)(iVar2 + 0x1c + iVar5) != *(short *)(iVar3 + 0x1c) ||
          (iVar3 = *(int *)(iVar1 + iVar4 * 4),
          *(uint *)(*(int *)(param_1 + 0x2d0) + 0x24) <= (uint)(iVar3 * 3))))) {
        iVar4 = iVar4 + 1;
        *(int *)(param_1 + 0xf0) = iVar4;
        goto LAB_0041dd05;
      }
      *(int *)(iVar1 + iVar4 * 4) = iVar3 + 1;
    }
    param_2 = *(int *)(iVar5 + 8 + *(int *)(param_1 + 0xd0));
    if (param_2 == -1) {
      return;
    }
  } while( true );
}




/* Function: FUN_0041dd30 */

void __fastcall FUN_0041dd30(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0057acf8;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x7c));
  local_4 = local_4 & 0xffffff00;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x60));
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x44));
  ExceptionList = local_c;
  return;
}




/* Function: FUN_0041dd90 */

int __fastcall FUN_0041dd90(int param_1)

{
  if (*(int *)(param_1 + 0xf0) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xf0) >> 3;
}




/* Function: FUN_0041ddb0 */

undefined4 __thiscall FUN_0041ddb0(float *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x3f800000;
  if (param_1[1] <= *param_1) {
    if (param_1[2] <= param_1[1]) goto LAB_0041de1a;
    local_18 = 0;
    local_14 = 0x3f800000;
  }
  else {
    if (param_1[2] <= *param_1) goto LAB_0041de1a;
    local_18 = 0x3f800000;
    local_14 = 0;
  }
  local_10 = 0;
LAB_0041de1a:
  uVar1 = param_2;
  FUN_0041d5e0(local_c,param_1,&local_18,param_2);
  FUN_0041d510(uVar1);
  return param_2;
}




/* Function: FUN_0041de50 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_0041de50(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  undefined4 in_stack_00000024;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0057ad30;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (param_1,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&stack0x00000008);
  *(undefined4 *)(param_1 + 0x1c) = in_stack_00000024;
  local_4 = local_4 & 0xffffff00;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000008);
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0041dec0 */

void FUN_0041dec0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    do {
      if (param_3 != param_1) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
      }
      param_1[3] = param_3[3];
      param_1[4] = param_3[4];
      param_1[5] = param_3[5];
      if (param_1 + 6 != param_3 + 6) {
        param_1[6] = param_3[6];
        param_1[7] = param_3[7];
      }
      param_1[8] = param_3[8];
      param_1 = param_1 + 9;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_0041df20 */

void FUN_0041df20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}




/* Function: FUN_0041df50 */

void FUN_0041df50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    *param_4 = *param_2;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_4 + 1),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_2 + 1));
    param_2 = param_2 + 8;
    param_4 = param_4 + 8;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return;
}




/* Function: FUN_0041dfa0 */

void FUN_0041dfa0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    if (param_1 != param_3) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_3[3] = param_1[3];
    param_3[4] = param_1[4];
    param_3[5] = param_1[5];
    if (param_3 + 6 != param_1 + 6) {
      param_3[6] = param_1[6];
      param_3[7] = param_1[7];
    }
    param_3[8] = param_1[8];
    param_3 = param_3 + 9;
  }
  return;
}




/* Function: FUN_0041e000 */

void FUN_0041e000(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  while (param_2 != param_3) {
    puVar1 = param_3 + -9;
    puVar2 = param_4 + -9;
    if (puVar1 != puVar2) {
      *puVar2 = *puVar1;
      param_4[-8] = param_3[-8];
      param_4[-7] = param_3[-7];
    }
    param_4[-6] = param_3[-6];
    param_4[-5] = param_3[-5];
    param_4[-4] = param_3[-4];
    if (param_4 + -3 != param_3 + -3) {
      param_4[-3] = param_3[-3];
      param_4[-2] = param_3[-2];
    }
    param_4[-1] = param_3[-1];
    param_3 = puVar1;
    param_4 = puVar2;
  }
  *param_1 = param_4;
  return;
}




/* Function: FUN_0041e070 */

void FUN_0041e070(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    iVar1 = param_3 + -0x20;
    puVar2 = param_4 + -8;
    *puVar2 = *(undefined4 *)(param_3 + -0x20);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_4 + -7),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_3 + -0x1c));
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return;
}




/* Function: FUN_0041e0c0 */

void FUN_0041e0c0(int *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *param_3,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  
  if (param_2 == param_3) {
    *param_1 = (int)param_4;
    return;
  }
  do {
    pbVar1 = param_3 + -0x20;
    this = param_4 + -0x20;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (this,pbVar1);
    *(undefined4 *)(param_4 + -4) = *(undefined4 *)(param_3 + -4);
    param_3 = pbVar1;
    param_4 = this;
  } while (pbVar1 != param_2);
  *param_1 = (int)this;
  return;
}




/* Function: FUN_0041e110 */

void FUN_0041e110(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_3 = param_3 + 2;
  }
  return;
}




/* Function: FUN_0041e140 */

undefined4 * __fastcall FUN_0041e140(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x11));
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x18));
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x1f));
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  puVar2 = param_1;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::clear
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x11));
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0xb9) = 0;
  param_1[0x26] = 0xffffffff;
  return param_1;
}




/* Function: FUN_0041e1d9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0041e1d9(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  int unaff_EDI;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  
  param_2 = 1e+20;
  FUN_0041d7e0();
  uVar2 = in_stack_0000004c;
  piVar4 = *(int **)(*(int *)(unaff_EDI + 0x130) + 0xe0);
  uVar6 = 0;
  if ((piVar4 != (int *)0x0) &&
     (cVar3 = (**(code **)(*piVar4 + 0x38))(&stack0x00000018,in_stack_0000004c,in_stack_00000050),
     cVar3 != '\0')) {
    FUN_0041d580(&param_3,&stack0x00000020,uVar2);
    fVar1 = SQRT(param_3 * param_3 + param_4 * param_4 + param_5 * param_5);
    if (fVar1 < _DAT_00587c64) {
      param_2 = fVar1;
      FUN_0041d830(&stack0x00000018);
      uVar6 = 1;
    }
  }
  puVar5 = *(undefined4 **)(unaff_EDI + 0x130);
  puVar7 = (undefined4 *)puVar5[0x3c];
  if (puVar7 != (undefined4 *)puVar5[0x3d]) {
    do {
      piVar4 = (int *)(**(code **)(*(int *)*puVar7 + 0x58))
                                ((undefined1 *)((int)register0x00000010 + 7));
      if ((piVar4 != (int *)0x0) &&
         (cVar3 = (**(code **)(*piVar4 + 0x38))(&stack0x00000018,uVar2,in_stack_00000050),
         cVar3 != '\0')) {
        FUN_0041d580(&param_3,&stack0x00000020,uVar2);
        fVar1 = SQRT(param_3 * param_3 + param_4 * param_4 + param_5 * param_5);
        if (fVar1 < param_2) {
          param_2 = fVar1;
          FUN_0041d830(&stack0x00000018);
          uVar6 = 1;
        }
      }
      puVar5 = *(undefined4 **)(*(int *)(unaff_EDI + 0x130) + 0xf4);
      puVar7 = puVar7 + 2;
    } while (puVar7 != puVar5);
  }
  return CONCAT31((int3)((uint)puVar5 >> 8),uVar6);
}




/* Function: FUN_0041e5b0 */

int __fastcall FUN_0041e5b0(int param_1)

{
  if ((DAT_005b5f94 & 1) == 0) {
    DAT_005b5f94 = DAT_005b5f94 | 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_005b5f7c);
    _atexit((_func_4879 *)&LAB_00580c50);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005b5f7c);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005b5f7c);
  return param_1 + 0x358;
}




/* Function: FUN_0041e610 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041e610(int param_1,float *param_2,float *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [64];
  undefined1 local_58 [64];
  undefined4 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0057ad8f;
  local_14 = ExceptionList;
  if (*(char *)(param_1 + 0x1adc) == '\0') {
    local_114 = *param_2;
    local_110 = param_2[1];
    local_10c = param_2[2];
    local_108 = *param_3;
    local_104 = param_3[1];
    local_100 = param_3[2];
    ExceptionList = &local_14;
    iVar1 = FUN_0042dbb0();
    if (iVar1 != 0) {
      FUN_00412e58(iVar1,"LookAt_modifier");
      FUN_00412cfc(iVar1,(double)local_114);
      FUN_00412cfc(iVar1,(double)local_110);
      FUN_00412cfc(iVar1,(double)local_10c);
      FUN_00412cfc(iVar1,(double)local_108);
      FUN_00412cfc(iVar1,(double)local_104);
      FUN_00412cfc(iVar1,(double)local_100);
      iVar2 = FUN_00412798(iVar1,6,6);
      if (iVar2 == 0) {
        fVar4 = (float10)FUN_00412c00(iVar1);
        local_114 = (float)fVar4;
        fVar4 = (float10)FUN_00412c00(iVar1,0xfffffffb);
        local_110 = (float)fVar4;
        fVar4 = (float10)FUN_00412c00(iVar1,0xfffffffc);
        local_10c = (float)fVar4;
        fVar4 = (float10)FUN_00412c00(iVar1,0xfffffffd);
        local_108 = (float)fVar4;
        fVar4 = (float10)FUN_00412c00(iVar1,0xfffffffe);
        local_104 = (float)fVar4;
        fVar4 = (float10)FUN_00412c00(iVar1,0xffffffff);
        local_100 = (float)fVar4;
        FUN_00412950(iVar1,0xfffffff9);
      }
    }
    local_e4 = local_114;
    local_e0 = local_110;
    local_fc = local_108;
    local_dc = local_10c;
    local_f8 = local_104;
    local_f4 = local_100;
    local_f0 = 0;
    local_ec = 0x3f800000;
    local_e8 = 0;
    FUN_00496e69(local_58,&local_e4,&local_fc,&local_f0);
    FUN_0041d620();
    FUN_0041d670();
    thunk_FUN_00496475(param_1 + 0x230,0);
    if (*(char *)(param_1 + 0x18f3) == '\0') {
      FUN_0041db90();
    }
    uStack_18 = 0xffffffff;
    _eh_vector_destructor_iterator_(&local_e4,0x10,4,FUN_00407150);
    uVar3 = FUN_00546cfc(&local_e4,param_4);
    uStack_18 = 3;
    if ((_DAT_005b5f78 & 1) == 0) {
      _DAT_005b5f78 = _DAT_005b5f78 | 1;
      uStack_18 = 4;
      _eh_vector_constructor_iterator_
                (&DAT_005b5f38,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
      FUN_00407310(0x3f800000);
      _atexit((_func_4879 *)&LAB_00580c40);
    }
    FUN_0041d7a0(auStack_a4,param_1 + 0x1f0,uVar3);
    uStack_18 = CONCAT31(uStack_18._1_3_,8);
    _eh_vector_destructor_iterator_(&local_e4,0x10,4,FUN_00407150);
    FUN_0041d670(auStack_a4);
    thunk_FUN_00496475(param_1 + 0x230,0,param_1 + 0x1f0);
    if (*(char *)(param_1 + 0x18f3) == '\0') {
      FUN_0041db90();
    }
    uStack_c = 0xffffffff;
    _eh_vector_destructor_iterator_(auStack_98,0x10,4,FUN_00407150);
  }
  ExceptionList = local_14;
  return;
}




/* Function: FUN_0041e920 */

void __thiscall FUN_0041e920(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *local_4;
  
  if ((uint)(*(int *)(param_1 + 200) - *(int *)(param_1 + 0xcc)) < (uint)((int)param_2 * 3)) {
    uVar5 = *(int *)(param_1 + 0xcc) + 0x10 + (int)param_2 * 3 & 0xfffffff0;
    local_4 = operator_new(uVar5 * 0x28,(nothrow_t *)&DAT_005b6164);
    if (local_4 == (void *)0x0) {
      local_4 = (void *)0x0;
    }
    else {
      FUN_00406f40(local_4,0x28,uVar5,FUN_0041d350);
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0xcc) != 0) {
      iVar1 = 0;
      do {
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc4) + iVar1);
        puVar6 = (undefined4 *)(iVar1 + (int)local_4);
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        uVar4 = uVar4 + 1;
        iVar1 = iVar1 + 0x28;
      } while (uVar4 < *(uint *)(param_1 + 0xcc));
    }
    operator_delete__(*(void **)(param_1 + 0xc4));
    *(void **)(param_1 + 0xc4) = local_4;
    *(uint *)(param_1 + 200) = uVar5;
  }
  if ((uint)(*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd8)) < param_2) {
    uVar5 = (int)param_2 + 0x10U + *(int *)(param_1 + 0xd8) & 0xfffffff0;
    param_2 = operator_new(uVar5 << 5,(nothrow_t *)&DAT_005b6164);
    if (param_2 == (void *)0x0) {
      param_2 = (void *)0x0;
    }
    else if (-1 < (int)(uVar5 - 1)) {
      puVar3 = (undefined4 *)((int)param_2 + 8);
      uVar4 = uVar5;
      do {
        puVar3[-2] = 0;
        puVar3[-1] = 0xffffffff;
        *puVar3 = 0xffffffff;
        puVar3[1] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        *(undefined2 *)(puVar3 + 5) = 0xffff;
        puVar3 = puVar3 + 8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0xd8) != 0) {
      iVar1 = 0;
      do {
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0xd0) + iVar1);
        puVar6 = (undefined4 *)(iVar1 + (int)param_2);
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        uVar4 = uVar4 + 1;
        iVar1 = iVar1 + 0x20;
      } while (uVar4 < *(uint *)(param_1 + 0xd8));
    }
    operator_delete__(*(void **)(param_1 + 0xd0));
    *(void **)(param_1 + 0xd0) = param_2;
    *(uint *)(param_1 + 0xd4) = uVar5;
  }
  return;
}




/* Function: FUN_0041eac0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041eac0(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0xc4) + *(int *)(param_1 + 0xcc) * 0x28;
  fVar3 = (*(float *)(iVar1 + 8) + *(float *)(iVar1 + 0x30) + *(float *)(iVar1 + 0x58)) *
          _DAT_00587c8c;
  uVar4 = FUN_0041e470(1);
  FUN_00548748(uVar4);
  *(float *)(*(int *)(param_1 + 0xd8) * 0x20 + 0xc + *(int *)(param_1 + 0xd0)) = fVar3;
  *(undefined4 *)(*(int *)(param_1 + 0xd8) * 0x20 + 4 + *(int *)(param_1 + 0xd0)) = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0xd8) * 0x20 + 8 + *(int *)(param_1 + 0xd0)) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0xd8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xd0);
    iVar6 = 0;
    do {
      while (iVar5 = iVar6, iVar6 = iVar5 * 0x20 + iVar2,
            *(float *)(iVar1 * 0x20 + 0xc + iVar2) <= *(float *)(iVar5 * 0x20 + 0xc + iVar2)) {
        iVar6 = *(int *)(iVar6 + 8);
        if (iVar6 == -1) {
          *(int *)(iVar5 * 0x20 + 8 + iVar2) = iVar1;
          goto LAB_0041ec1d;
        }
      }
      iVar6 = *(int *)(iVar6 + 4);
    } while (iVar6 != -1);
    *(int *)(iVar5 * 0x20 + 4 + iVar2) = iVar1;
  }
LAB_0041ec1d:
  *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 3;
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  return;
}




/* Function: FUN_0041ec50 */

undefined1 __fastcall FUN_0041ec50(int param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 local_c [12];
  
  puVar5 = local_c;
  bVar4 = *(char *)(param_1 + 0x1adc) == '\0';
  *(bool *)(param_1 + 0x1adc) = bVar4;
  if (bVar4) {
    *(undefined4 *)(param_1 + 0x1ae0) = 0;
    *(undefined4 *)(param_1 + 0x1ae4) = 0;
    FUN_0041e470(2);
    pfVar1 = (float *)FUN_00547ab0(puVar5);
    puVar5 = local_c;
    *(float *)(param_1 + 0x1ae8) = -*pfVar1;
    FUN_0041e470(2);
    iVar2 = FUN_00547ab0(puVar5);
    puVar5 = local_c;
    *(float *)(param_1 + 0x1aec) = -*(float *)(iVar2 + 4);
    FUN_0041e470(2);
    iVar2 = FUN_00547ab0(puVar5);
    *(float *)(param_1 + 0x1af0) = -*(float *)(iVar2 + 8);
    pcVar6 = "Free fly enabled";
  }
  else {
    pcVar6 = "Free fly disabled";
  }
  uVar3 = FUN_0041e5b0(pcVar6);
  FUN_0040a410(uVar3);
  return *(undefined1 *)(param_1 + 0x1adc);
}




/* Function: FUN_0041ed00 */

undefined4 __thiscall FUN_0041ed00(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uStack_1c4;
  int *piStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  int *piStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int *piStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int *piStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int *piStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 *puStack_174;
  int *piStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  int **ppiStack_164;
  int *piStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 *puStack_154;
  int *piStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int *piStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int *piStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int *piStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int *piStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int *piStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int *piStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int *piStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int *piStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int *piStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = 0;
  uStack_20 = 0xe;
  piStack_24 = param_2;
  uStack_28 = 0x41ed19;
  (**(code **)(*param_2 + 200))();
  uStack_28 = 1;
  uStack_2c = 0x1b;
  piStack_30 = param_2;
  uStack_34 = 0x41ed26;
  (**(code **)(*param_2 + 200))();
  uStack_34 = 0;
  uStack_38 = 0xf;
  piStack_3c = param_2;
  uStack_40 = 0x41ed33;
  (**(code **)(*param_2 + 200))();
  uStack_40 = 6;
  uStack_44 = 0x19;
  piStack_48 = param_2;
  uStack_4c = 0x41ed40;
  (**(code **)(*param_2 + 200))();
  uStack_4c = 0;
  uStack_50 = 0x18;
  piStack_54 = param_2;
  uStack_58 = 0x41ed4d;
  (**(code **)(*param_2 + 200))();
  uStack_58 = 0;
  uStack_5c = 0x89;
  piStack_60 = param_2;
  uStack_64 = 0x41ed5d;
  (**(code **)(*param_2 + 200))();
  uStack_64 = 0;
  uStack_68 = 0x1d;
  piStack_6c = param_2;
  uStack_70 = 0x41ed6a;
  (**(code **)(*param_2 + 200))();
  uStack_70 = 0;
  uStack_74 = 0;
  piStack_78 = param_2;
  uStack_7c = 0x41ed77;
  (**(code **)(*param_2 + 0xf4))();
  uStack_7c = 0;
  uStack_80 = 1;
  piStack_84 = param_2;
  uStack_88 = 0x41ed84;
  (**(code **)(*param_2 + 0xf4))();
  uStack_88 = 0;
  uStack_8c = 2;
  piStack_90 = param_2;
  uStack_94 = 0x41ed91;
  (**(code **)(*param_2 + 0xf4))();
  uStack_94 = 0;
  uStack_98 = 0xf;
  uStack_9c = 0;
  piStack_a0 = param_2;
  uStack_a4 = 0x41eda0;
  (**(code **)(*param_2 + 0xfc))();
  uStack_a4 = 0;
  uStack_a8 = 0xf;
  uStack_ac = 1;
  piStack_b0 = param_2;
  uStack_b4 = 0x41edaf;
  (**(code **)(*param_2 + 0xfc))();
  uStack_b4 = 3;
  uStack_b8 = 0xd;
  uStack_bc = 0;
  piStack_c0 = param_2;
  uStack_c4 = 0x41edbe;
  (**(code **)(*param_2 + 0xfc))();
  uStack_c4 = 3;
  uStack_c8 = 0xe;
  uStack_cc = 0;
  piStack_d0 = param_2;
  uStack_d4 = 0x41edcd;
  (**(code **)(*param_2 + 0xfc))();
  uStack_d4 = 3;
  uStack_d8 = 0x19;
  uStack_dc = 0;
  piStack_e0 = param_2;
  uStack_e4 = 0x41eddc;
  (**(code **)(*param_2 + 0xfc))();
  uStack_e4 = 3;
  uStack_e8 = 0xd;
  uStack_ec = 1;
  piStack_f0 = param_2;
  uStack_f4 = 0x41edeb;
  (**(code **)(*param_2 + 0xfc))();
  uStack_f4 = 3;
  uStack_f8 = 0xe;
  uStack_fc = 1;
  piStack_100 = param_2;
  uStack_104 = 0x41edfa;
  (**(code **)(*param_2 + 0xfc))();
  uStack_104 = 3;
  uStack_108 = 0x19;
  uStack_10c = 1;
  piStack_110 = param_2;
  uStack_114 = 0x41ee09;
  (**(code **)(*param_2 + 0xfc))();
  uStack_114 = 1;
  uStack_118 = 1;
  uStack_11c = 0;
  piStack_120 = param_2;
  uStack_124 = 0x41ee18;
  (**(code **)(*param_2 + 0xfc))();
  uStack_124 = 1;
  uStack_128 = 4;
  uStack_12c = 0;
  piStack_130 = param_2;
  uStack_134 = 0x41ee27;
  (**(code **)(*param_2 + 0xfc))();
  uStack_134 = 1;
  uStack_138 = 1;
  uStack_13c = 1;
  piStack_140 = param_2;
  uStack_144 = 0x41ee36;
  (**(code **)(*param_2 + 0xfc))();
  uStack_144 = 1;
  uStack_148 = 4;
  uStack_14c = 1;
  piStack_150 = param_2;
  puStack_154 = (undefined4 *)0x41ee45;
  (**(code **)(*param_2 + 0xfc))();
  puStack_154 = &uStack_144;
  uStack_158 = 0x11;
  uStack_15c = 1;
  piStack_160 = param_2;
  ppiStack_164 = (int **)0x41ee57;
  (**(code **)(*param_2 + 0xf8))();
  ppiStack_164 = &piStack_150;
  uStack_168 = 0x10;
  uStack_16c = 1;
  piStack_170 = param_2;
  puStack_174 = (undefined4 *)0x41ee69;
  (**(code **)(*param_2 + 0xf8))();
  puStack_174 = &uStack_15c;
  uStack_178 = 0x12;
  uStack_17c = 1;
  piStack_180 = param_2;
  uStack_184 = 0x41ee7b;
  (**(code **)(*param_2 + 0xf8))();
  uStack_184 = 0;
  uStack_188 = 0x14;
  uStack_18c = 0;
  piStack_190 = param_2;
  uStack_194 = 0x41ee8a;
  (**(code **)(*param_2 + 0xfc))();
  puStack_174 = (undefined4 *)0x0;
  uStack_194 = 0;
  uStack_198 = 0x13;
  uStack_19c = 0;
  piStack_1a0 = param_2;
  uStack_1a4 = 0x41eea4;
  (**(code **)(*param_2 + 0xfc))();
  uStack_1a4 = 2;
  uStack_1a8 = 0x12;
  uStack_1ac = 0;
  piStack_1b0 = param_2;
  uStack_1b4 = 0x41eeb3;
  (**(code **)(*param_2 + 0xfc))();
  uStack_1b4 = 0;
  uStack_1b8 = 0x14;
  uStack_1bc = 1;
  piStack_1c0 = param_2;
  uStack_1c4 = 0x41eec2;
  (**(code **)(*param_2 + 0xfc))();
  uStack_1a4 = 0;
  uStack_1c4 = 0;
  (**(code **)(*param_2 + 0xfc))(param_2,1,0x13);
  uVar5 = 2;
  piVar4 = param_2;
  (**(code **)(*param_2 + 0xfc))(param_2,1,0x12,2);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x118) != 0) {
    do {
      iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x110) + uVar2 * 4) + 0x60))(&uStack_1c4);
      if (iVar1 != 0) {
        FUN_004fa230(param_2,param_1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x118));
  }
  uVar3 = 1;
  (**(code **)(*param_2 + 0xfc))(param_2,1,0x11,uVar5);
  (**(code **)(*param_2 + 0xfc))(param_2,1,0x10,piVar4);
  (**(code **)(*param_2 + 0xfc))(param_2,1,0x12,uVar3);
  (**(code **)(*param_2 + 0xfc))(param_2,0,0xb,0);
  (**(code **)(*param_2 + 0xfc))(param_2,0,0x18,0);
  (**(code **)(*param_2 + 0xfc))(param_2,1,0xb,1);
  (**(code **)(*param_2 + 0xfc))(param_2,1,0x18,0);
  (**(code **)(*param_2 + 0xfc))(param_2,0,0xd,1);
  (**(code **)(*param_2 + 0xfc))(param_2,0,0xe,1);
  (**(code **)(*param_2 + 0xfc))(param_2,0,0x19,1);
  (**(code **)(*param_2 + 0xfc))(param_2,1,0xd,1);
  (**(code **)(*param_2 + 0xfc))(param_2,1,0xe,1);
  (**(code **)(*param_2 + 0xfc))(param_2,1,0x19,1);
  (**(code **)(*param_2 + 200))(param_2,0xf,0);
  (**(code **)(*param_2 + 200))(param_2,0x1b,0);
  (**(code **)(*param_2 + 200))(param_2,0xe,1);
  return 0;
}




/* Function: FUN_0041f030 */

undefined4 __fastcall FUN_0041f030(undefined4 param_1)

{
  FUN_00407f80(0x3f800000);
  return param_1;
}




/* Function: FUN_0041f050 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041f050(undefined4 param_1,float param_2,float param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  float *pfVar2;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  FUN_0041e470(1);
  pfVar2 = &local_18;
  FUN_0054778c(&local_24);
  FUN_0041d510(pfVar2);
  local_40 = param_2 * _DAT_00583340;
  local_38 = param_3 * _DAT_00583340;
  local_48 = -local_10 * local_40;
  local_44 = local_40 * _DAT_00582ad8;
  local_40 = local_18 * local_40;
  local_3c = _DAT_00582ad8 * local_38;
  local_34 = local_3c;
  uVar1 = FUN_0041d580(&local_18,param_1,&local_48,&local_3c);
  FUN_0041d580(&local_24,uVar1);
  uVar1 = FUN_0041d550(&local_30,param_1,&local_48,&local_3c);
  FUN_0041d580(&local_18,uVar1);
  uVar1 = FUN_0041d550(local_c,param_1,&local_48,&local_3c);
  FUN_0041d550(&local_30,uVar1);
  uVar1 = FUN_0041d580(local_c,param_1,&local_48,&local_3c);
  FUN_0041d550(&local_48,uVar1);
  FUN_0041e920(2);
  pfVar2 = (float *)FUN_0041cc40(param_4,param_5,param_6);
  *pfVar2 = local_48;
  pfVar2[2] = local_40;
  pfVar2[1] = local_44;
  pfVar2[0xb] = local_20;
  pfVar2[10] = local_24;
  pfVar2[0x14] = local_30;
  pfVar2[0xc] = local_1c;
  pfVar2[0x16] = local_28;
  pfVar2[3] = 0.0;
  pfVar2[4] = 1.0;
  pfVar2[5] = 0.0;
  pfVar2[6] = 0.0;
  pfVar2[7] = 0.0;
  pfVar2[0xd] = 0.0;
  pfVar2[0xe] = 1.0;
  pfVar2[0xf] = 0.0;
  pfVar2[0x10] = 0.0;
  pfVar2[0x11] = 1.0;
  pfVar2[0x15] = local_2c;
  pfVar2[0x17] = 0.0;
  pfVar2[0x18] = 1.0;
  pfVar2[0x19] = 0.0;
  pfVar2[0x1a] = 1.0;
  pfVar2[0x1b] = 0.0;
  FUN_0041eac0();
  pfVar2 = (float *)FUN_0041cc40(param_4,param_5,param_6);
  *pfVar2 = local_30;
  pfVar2[1] = local_2c;
  pfVar2[2] = local_28;
  pfVar2[3] = 0.0;
  pfVar2[4] = 1.0;
  pfVar2[5] = 0.0;
  pfVar2[6] = 1.0;
  pfVar2[0xb] = local_20;
  pfVar2[10] = local_24;
  pfVar2[0x14] = local_18;
  pfVar2[0xc] = local_1c;
  pfVar2[0x16] = local_10;
  pfVar2[7] = 0.0;
  pfVar2[0xd] = 0.0;
  pfVar2[0xe] = 1.0;
  pfVar2[0xf] = 0.0;
  pfVar2[0x10] = 0.0;
  pfVar2[0x11] = 1.0;
  pfVar2[0x15] = local_14;
  pfVar2[0x17] = 0.0;
  pfVar2[0x18] = 0.0;
  pfVar2[0x19] = 0.0;
  pfVar2[0x1a] = 1.0;
  pfVar2[0x1b] = 1.0;
  FUN_0041eac0();
  return;
}




/* Function: FUN_0041f2a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0041f2a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,float *param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_84;
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
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_0041e470(1);
  puVar5 = &local_78;
  FUN_0041d580(&local_84,param_2,param_1 + 0x2e8,puVar5);
  FUN_0041d510(puVar5);
  FUN_0041ddb0(local_54);
  FUN_0041d5e0(&local_84,&local_78,local_54);
  uVar6 = 0x3f000000;
  puVar5 = &local_84;
  uVar4 = param_3;
  uVar3 = FUN_0041d410(&local_78);
  uVar4 = FUN_0041d580(&local_6c,uVar3,puVar5,uVar4,uVar6);
  uVar4 = FUN_0041d5b0(local_24,uVar4);
  uVar4 = FUN_0041d5b0(local_48,uVar4);
  FUN_0041d550(&local_60,param_2,uVar4);
  uVar4 = FUN_0041d580(local_48,local_54,&local_84,param_3,0x3f000000);
  uVar4 = FUN_0041d5b0(local_24,uVar4);
  uVar4 = FUN_0041d5b0(local_3c,uVar4);
  FUN_0041d550(&local_78,param_2,uVar4);
  uVar4 = FUN_0041d550(local_3c,local_54,&local_84,param_3,0x3f000000);
  uVar4 = FUN_0041d5b0(local_48,uVar4);
  uVar4 = FUN_0041d5b0(local_30,uVar4);
  FUN_0041d550(&local_6c,param_2,uVar4);
  uVar3 = 0x3f000000;
  puVar5 = &local_84;
  uVar4 = FUN_0041d410(local_30);
  uVar4 = FUN_0041d550(local_3c,uVar4,puVar5,param_3,uVar3);
  uVar4 = FUN_0041d5b0(local_18,uVar4);
  uVar4 = FUN_0041d5b0(local_c,uVar4);
  FUN_0041d550(&local_84,param_2,uVar4);
  FUN_0041e920(2);
  puVar5 = (undefined4 *)FUN_0041cc40(param_4,param_5,param_7);
  *puVar5 = local_84;
  puVar5[1] = local_80;
  puVar5[2] = local_7c;
  puVar5[3] = 0;
  puVar5[4] = 0x3f800000;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  fVar2 = (float)*(int *)(param_1 + 0x1900);
  if (*(int *)(param_1 + 0x1900) < 0) {
    fVar2 = fVar2 + _DAT_00582b04;
  }
  puVar5[8] = *param_6 - _DAT_00583340 / fVar2;
  fVar2 = (float)*(int *)(param_1 + 0x1904);
  if (*(int *)(param_1 + 0x1904) < 0) {
    fVar2 = fVar2 + _DAT_00582b04;
  }
  fVar2 = _DAT_00583340 / fVar2;
  fVar1 = param_6[1];
  puVar5[10] = local_60;
  puVar5[0xb] = local_5c;
  puVar5[9] = fVar1 - fVar2;
  puVar5[0xc] = local_58;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0x3f800000;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0x3f800000;
  fVar2 = (float)*(int *)(param_1 + 0x1900);
  if (*(int *)(param_1 + 0x1900) < 0) {
    fVar2 = fVar2 + _DAT_00582b04;
  }
  puVar5[0x12] = *param_6 - _DAT_00583340 / fVar2;
  fVar2 = (float)*(int *)(param_1 + 0x1904);
  if (*(int *)(param_1 + 0x1904) < 0) {
    fVar2 = fVar2 + _DAT_00582b04;
  }
  fVar2 = _DAT_00583340 / fVar2;
  fVar1 = param_6[1];
  puVar5[0x14] = local_6c;
  puVar5[0x15] = local_68;
  puVar5[0x13] = fVar2 + fVar1;
  puVar5[0x16] = local_64;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0x3f800000;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0x3f800000;
  puVar5[0x1b] = 0;
  fVar2 = (float)*(int *)(param_1 + 0x1900);
  if (*(int *)(param_1 + 0x1900) < 0) {
    fVar2 = fVar2 + _DAT_00582b04;
  }
  puVar5[0x1c] = _DAT_00583340 / fVar2 + *param_6;
  fVar2 = (float)*(int *)(param_1 + 0x1904);
  if (*(int *)(param_1 + 0x1904) < 0) {
    fVar2 = fVar2 + _DAT_00582b04;
  }
  puVar5[0x1d] = param_6[1] - _DAT_00583340 / fVar2;
  FUN_0041eac0();
  puVar5 = (undefined4 *)FUN_0041cc40(param_4,param_5,param_7);
  *puVar5 = local_6c;
  puVar5[1] = local_68;
  puVar5[2] = local_64;
  puVar5[3] = 0;
  puVar5[4] = 0x3f800000;
  puVar5[5] = 0;
  puVar5[6] = 0x3f800000;
  puVar5[7] = 0;
  fVar2 = (float)*(int *)(param_1 + 0x1900);
  if (*(int *)(param_1 + 0x1900) < 0) {
    fVar2 = fVar2 + _DAT_00582b04;
  }
  puVar5[8] = _DAT_00583340 / fVar2 + *param_6;
  fVar2 = (float)*(int *)(param_1 + 0x1904);
  if (*(int *)(param_1 + 0x1904) < 0) {
    fVar2 = fVar2 + _DAT_00582b04;
  }
  fVar2 = _DAT_00583340 / fVar2;
  fVar1 = param_6[1];
  puVar5[10] = local_60;
  puVar5[0xb] = local_5c;
  puVar5[9] = fVar1 - fVar2;
  puVar5[0xc] = local_58;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0x3f800000;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0x3f800000;
  fVar2 = (float)*(int *)(param_1 + 0x1900);
  if (*(int *)(param_1 + 0x1900) < 0) {
    fVar2 = fVar2 + _DAT_00582b04;
  }
  puVar5[0x12] = *param_6 - _DAT_00583340 / fVar2;
  fVar2 = (float)*(int *)(param_1 + 0x1904);
  if (*(int *)(param_1 + 0x1904) < 0) {
    fVar2 = fVar2 + _DAT_00582b04;
  }
  fVar2 = _DAT_00583340 / fVar2;
  fVar1 = param_6[1];
  puVar5[0x14] = local_78;
  puVar5[0x15] = local_74;
  puVar5[0x13] = fVar2 + fVar1;
  puVar5[0x16] = local_70;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0x3f800000;
  puVar5[0x1b] = 0x3f800000;
  fVar2 = (float)*(int *)(param_1 + 0x1900);
  if (*(int *)(param_1 + 0x1900) < 0) {
    fVar2 = fVar2 + _DAT_00582b04;
  }
  puVar5[0x1c] = _DAT_00583340 / fVar2 + *param_6;
  fVar2 = (float)*(int *)(param_1 + 0x1904);
  if (*(int *)(param_1 + 0x1904) < 0) {
    fVar2 = fVar2 + _DAT_00582b04;
  }
  puVar5[0x1d] = _DAT_00583340 / fVar2 + param_6[1];
  FUN_0041eac0();
  return;
}




/* Function: FUN_0041f720 */

uint __thiscall FUN_0041f720(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint in_EAX;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *param_3;
  puVar2 = *(undefined4 **)(param_1 + 0x90);
  local_8 = param_3[1];
  local_4 = param_3[2];
  local_18 = *param_4;
  local_14 = param_4[1];
  local_10 = param_4[2];
  uVar1 = in_EAX & 0xffffff00;
  if (puVar2 != *(undefined4 **)(param_1 + 0x94)) {
    do {
      uVar1 = (**(code **)(*(int *)*puVar2 + 0x38))(param_2,&local_c,&local_18);
      if (((char)uVar1 != '\0') && ((undefined4 *)(param_2 + 8) != &local_18)) {
        local_18 = *(undefined4 *)(param_2 + 8);
        local_14 = *(undefined4 *)(param_2 + 0xc);
        local_10 = *(undefined4 *)(param_2 + 0x10);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(param_1 + 0x94));
  }
  return uVar1;
}




/* Function: FUN_0041f7c0 */

void __thiscall FUN_0041f7c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x90);
  if (puVar1 != *(undefined4 **)(param_1 + 0x94)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x40))(param_2,param_3);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(param_1 + 0x94));
  }
  return;
}




/* Function: FUN_0041f800 */

void __thiscall
FUN_0041f800(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x90);
  if (puVar1 != *(undefined4 **)(param_1 + 0x94)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x30))(param_2,param_3,param_4,param_5);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(param_1 + 0x94));
  }
  return;
}




/* Function: FUN_0041f850 */

undefined4 __fastcall FUN_0041f850(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  if ((DAT_005b5fb0 & 1) == 0) {
    DAT_005b5fb0 = DAT_005b5fb0 | 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_005b5f98);
    _atexit((_func_4879 *)&LAB_00580c60);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005b5f98);
  if (*(HANDLE *)(param_1 + 0xa0) == (HANDLE)0x0) {
    iVar1 = *(int *)(param_1 + 0x10c);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005b5f98);
    if (iVar1 == 0) {
      return 3;
    }
    if (iVar1 != 1) {
      return 0;
    }
  }
  else {
    DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 0xa0),0);
    if (DVar2 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005b5f98);
      return 2;
    }
    GetExitCodeThread(*(HANDLE *)(param_1 + 0xa0),(LPDWORD)(param_1 + 0x10c));
    CloseHandle(*(HANDLE *)(param_1 + 0xa0));
    DVar2 = *(LPDWORD)(param_1 + 0x10c);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005b5f98);
    if (DVar2 == 0) {
      return 3;
    }
    if (DVar2 != 1) {
      return 0;
    }
  }
  return 1;
}




/* Function: FUN_0041f930 */

undefined4 __thiscall FUN_0041f930(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0xf0) + param_2 * 8);
}




/* Function: FUN_0041f940 */

undefined4 __thiscall FUN_0041f940(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x1c + param_2 * 0x20);
}




/* Function: FUN_0041f960 */

undefined4 __thiscall
FUN_0041f960(int param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  bool bVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  
  pbVar2 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
            (param_1 + 0x100);
  if (pbVar2 != *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                 (param_1 + 0x104)) {
    do {
      bVar1 = std::operator==(param_2,pbVar2);
      if (bVar1) {
        return *(undefined4 *)(pbVar2 + 0x1c);
      }
      pbVar2 = pbVar2 + 0x20;
    } while (pbVar2 != *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         **)(param_1 + 0x104));
  }
  return 0;
}




/* Function: FUN_0041f9b0 */

ushort __thiscall
FUN_0041f9b0(int param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar3 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x100) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_1 + 0x104) - *(int *)(param_1 + 0x100) >> 5;
    }
    if (uVar2 <= uVar3) break;
    bVar1 = std::operator==(param_2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)((uint)uVar3 * 0x20 + *(int *)(param_1 + 0x100)));
    if (bVar1) {
      return uVar3;
    }
    uVar3 = uVar3 + 1;
  }
  return 0xffff;
}




/* Function: FUN_0041fa10 */

void FUN_0041fa10(void)

{
  int iVar1;
  
  iVar1 = FUN_00493c27(0x10);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}




/* Function: FUN_0041fa30 */

undefined4 * FUN_0041fa30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057adb1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00493c27(0x40);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    FUN_0041d3a0(param_3);
  }
  ExceptionList = local_10;
  return puVar1;
}




/* Function: FUN_0041fac0 */

void __thiscall FUN_0041fac0(int param_1,uint param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ac82;
  local_c = ExceptionList;
  if (0x4924924U - *(int *)(param_1 + 8) < param_2) {
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




/* Function: FUN_0041fb60 */

undefined4 *
FUN_0041fb60(undefined4 param_1,undefined4 param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057add1;
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




/* Function: FUN_0041fbf0 */

void __thiscall FUN_0041fbf0(int param_1,uint param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ac82;
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




/* Function: FUN_0041fc90 */

void FUN_0041fc90(undefined2 *param_1,int *param_2,int *param_3,undefined2 param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    if ((undefined4 *)param_2[9] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_2[9])(1);
    }
    param_2 = (int *)*param_2;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return;
}




/* Function: FUN_0041fce0 */

void FUN_0041fce0(undefined2 *param_1,int *param_2,int *param_3,undefined2 param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    if ((int *)param_2[9] != (int *)0x0) {
      (**(code **)(*(int *)param_2[9] + 0xc))(1);
    }
    param_2 = (int *)*param_2;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return;
}




/* Function: FUN_0041fd30 */

undefined4 FUN_0041fd30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0041e000(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_0041fd70 */

void FUN_0041fd70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    do {
      *param_1 = *param_3;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_1 + 1),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_3 + 1));
      param_1 = param_1 + 8;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_0041fdb0 */

undefined4 FUN_0041fdb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0041e070(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_0041fdf0 */

void FUN_0041fdf0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (param_1,param_3);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  }
  return;
}




/* Function: FUN_0041fe20 */

undefined4 FUN_0041fe20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0041e0c0(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_0041fe60 */

void FUN_0041fe60(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
    }
    param_1 = param_1 + 2;
  }
  return;
}




/* Function: FUN_0041fe90 */

void FUN_0041fe90(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,int param_2,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057adf1;
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
    }
    param_1 = param_1 + 0x20;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}




/* Function: FUN_0041ff30 */

undefined4 * FUN_0041ff30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057ae11;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_3 + 1),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_1 + 1));
    }
    param_3 = param_3 + 8;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}




/* Function: FUN_0041ffd0 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_0041ffd0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057ae31;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    local_8 = 1;
    if (param_3 !=
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_3,param_1);
      *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    }
    param_3 = param_3 + 0x20;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}




/* Function: FUN_00420070 */

undefined4 __thiscall FUN_00420070(int param_1,uint param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0x1fffffff < param_2) {
    FUN_0041d2d0();
    return 1;
  }
  iVar1 = FUN_00493c27(param_2 * 8);
  *(uint *)(param_1 + 0xc) = param_2 * 8 + iVar1;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  return 1;
}




/* Function: FUN_004200d0 */

undefined4
FUN_004200d0(int *param_1,short param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_2 == -1) {
    (**(code **)(*param_1 + 0xf4))(param_1,0,0);
    (**(code **)(*param_1 + 0xfc))(param_1,0,1,1);
    (**(code **)(*param_1 + 0xfc))(param_1,0,4,1);
    (**(code **)(*param_1 + 0xf4))(param_1,1,0);
    (**(code **)(*param_1 + 0xfc))(param_1,1,1,1);
    (**(code **)(*param_1 + 0xfc))(param_1,1,4,1);
    return 1;
  }
  if (param_3 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    if (param_3 != 1) {
      (**(code **)(*param_1 + 0xf4))(param_1,0,0);
      (**(code **)(*param_1 + 0xfc))(param_1,0,1,1);
      (**(code **)(*param_1 + 0xfc))(param_1,0,4,1);
      return 1;
    }
    uVar1 = 1;
  }
  FUN_00410af0(param_1,uVar1,param_4,param_5);
  return 1;
}




/* Function: FUN_004201c0 */

undefined4 __fastcall FUN_004201c0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[0x2e];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  puVar2 = (undefined4 *)param_1[0x5a];
  param_1[0x2e] = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)*puVar2;
  }
  for (; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
    FUN_0041d8b0();
  }
  if ((undefined4 *)param_1[100] == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)param_1[100];
  }
  if (piVar3 != (int *)param_1[100]) {
    do {
      puVar2 = *(undefined4 **)(piVar3[9] + 0xf0);
      if (puVar2 != *(undefined4 **)(piVar3[9] + 0xf4)) {
        do {
          (**(code **)(*(int *)*puVar2 + 0x10))();
          puVar2 = puVar2 + 2;
        } while (puVar2 != *(undefined4 **)(piVar3[9] + 0xf4));
      }
      if (*(int **)(piVar3[9] + 0xe8) != (int *)0x0) {
        (**(code **)(**(int **)(piVar3[9] + 0xe8) + 0x10))();
      }
      if (*(int **)(piVar3[9] + 0xe4) != (int *)0x0) {
        (**(code **)(**(int **)(piVar3[9] + 0xe4) + 0x10))();
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)param_1[100]);
  }
  if ((int *)param_1[0x5f1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5f1] + 0xc))(1);
  }
  param_1[0x5f1] = 0;
  if ((int *)param_1[0x5f2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5f2] + 0xc))(1);
  }
  param_1[0x5f2] = 0;
  if ((int *)param_1[0x5f3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5f3] + 0xc))(1);
  }
  param_1[0x5f3] = 0;
  (**(code **)(*param_1 + 0x10))();
  *(undefined1 *)(param_1 + 0x63b) = 0;
  return 1;
}




/* Function: FUN_004202d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004202d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  float local_bc;
  float local_b8;
  float local_b4;
  int local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [64];
  
  iVar1 = FUN_0042ead0();
  uVar2 = FUN_0042eae0();
  local_a4 = (float)*(int *)(iVar1 + 7) * _DAT_00587cbc;
  local_a8 = 0.0;
  local_ac = (float)*(int *)(iVar1 + 3) * _DAT_00587cbc;
  local_98 = (float)*(int *)(iVar1 + 7) * _DAT_00583340;
  local_9c = 0.0;
  local_a0 = (float)*(int *)(iVar1 + 3) * _DAT_00587cbc;
  local_8c = (float)*(int *)(iVar1 + 7) * _DAT_00583340;
  local_90 = 0.0;
  local_94 = (float)*(int *)(iVar1 + 3) * _DAT_00583340;
  local_80 = (float)*(int *)(iVar1 + 7) * _DAT_00587cbc;
  local_84 = 0.0;
  local_88 = (float)*(int *)(iVar1 + 3) * _DAT_00583340;
  uVar3 = FUN_0053f0e0();
  FUN_005488cc(local_7c,&local_ac,uVar3);
  uVar3 = FUN_0053f0e0();
  FUN_005488cc(local_58,&local_a0,uVar3);
  uVar3 = FUN_0053f0e0();
  FUN_005488cc(local_70,&local_94,uVar3);
  uVar3 = FUN_0053f0e0();
  FUN_00407260(uVar3);
  local_b0 = 4;
  do {
    FUN_00548748(local_40);
    local_b0 = local_b0 + -1;
  } while (local_b0 != 0);
  uVar3 = FUN_0041d580(local_4c,local_58,local_7c);
  uVar3 = FUN_0041d580(local_64,local_70,local_7c,uVar3);
  FUN_0041d5e0(&local_bc,uVar3);
  pfVar4 = (float *)FUN_0041d580(local_64,param_1 + 0x2e8,local_7c);
  if (local_bc * *pfVar4 + local_b4 * pfVar4[2] + local_b8 * pfVar4[1] < _DAT_00582ad8) {
    local_bc = local_bc * _DAT_00587cb8;
    local_b8 = local_b8 * _DAT_00587cb8;
    local_b4 = local_b4 * _DAT_00587cb8;
  }
  FUN_0041e920(2);
  pfVar4 = (float *)FUN_0041cbb0(uVar2,0,0xffffffff);
  *pfVar4 = local_a0;
  pfVar4[1] = local_9c;
  pfVar4[3] = local_bc;
  pfVar4[2] = local_98;
  pfVar4[5] = local_b4;
  pfVar4[4] = local_b8;
  pfVar4[6] = *(float *)(iVar1 + 0xb) * *(float *)(iVar1 + 0x13);
  pfVar4[7] = (*(float *)(iVar1 + 0x17) + _DAT_00583354) * *(float *)(iVar1 + 0xf);
  pfVar4[10] = local_ac;
  pfVar4[0xb] = local_a8;
  pfVar4[0xd] = local_bc;
  pfVar4[0xc] = local_a4;
  pfVar4[0xf] = local_b4;
  pfVar4[0xe] = local_b8;
  pfVar4[0x10] = *(float *)(iVar1 + 0xb) * *(float *)(iVar1 + 0x13);
  pfVar4[0x11] = *(float *)(iVar1 + 0x17) * *(float *)(iVar1 + 0xf);
  pfVar4[0x14] = local_94;
  pfVar4[0x15] = local_90;
  pfVar4[0x17] = local_bc;
  pfVar4[0x16] = local_8c;
  pfVar4[0x19] = local_b4;
  pfVar4[0x18] = local_b8;
  pfVar4[0x1a] = (*(float *)(iVar1 + 0x13) + _DAT_00583354) * *(float *)(iVar1 + 0xb);
  pfVar4[0x1b] = (*(float *)(iVar1 + 0x17) + _DAT_00583354) * *(float *)(iVar1 + 0xf);
  FUN_0041eac0();
  pfVar4 = (float *)FUN_0041cbb0(uVar2,0,0xffffffff);
  *pfVar4 = local_94;
  pfVar4[1] = local_90;
  pfVar4[2] = local_8c;
  pfVar4[3] = local_bc;
  pfVar4[5] = local_b4;
  pfVar4[4] = local_b8;
  pfVar4[6] = (*(float *)(iVar1 + 0x13) + _DAT_00583354) * *(float *)(iVar1 + 0xb);
  pfVar4[7] = (*(float *)(iVar1 + 0x17) + _DAT_00583354) * *(float *)(iVar1 + 0xf);
  pfVar4[10] = local_ac;
  pfVar4[0xb] = local_a8;
  pfVar4[0xd] = local_bc;
  pfVar4[0xc] = local_a4;
  pfVar4[0xf] = local_b4;
  pfVar4[0xe] = local_b8;
  pfVar4[0x10] = *(float *)(iVar1 + 0xb) * *(float *)(iVar1 + 0x13);
  pfVar4[0x11] = *(float *)(iVar1 + 0x17) * *(float *)(iVar1 + 0xf);
  pfVar4[0x14] = local_88;
  pfVar4[0x15] = local_84;
  pfVar4[0x17] = local_bc;
  pfVar4[0x16] = local_80;
  pfVar4[0x19] = local_b4;
  pfVar4[0x18] = local_b8;
  pfVar4[0x1a] = (*(float *)(iVar1 + 0x13) + _DAT_00583354) * *(float *)(iVar1 + 0xb);
  pfVar4[0x1b] = *(float *)(iVar1 + 0x17) * *(float *)(iVar1 + 0xf);
  FUN_0041eac0();
  FUN_00407300();
  return 0;
}




/* Function: FUN_00420710 */

void __thiscall FUN_00420710(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 0x124);
  if (*(uint *)(param_1 + 0x120) <= uVar5) {
    iVar6 = uVar5 + 0x10;
    piVar3 = operator_new(iVar6 * 0x44 + 4,(nothrow_t *)&DAT_005b6164);
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar6;
      _eh_vector_constructor_iterator_(piVar4,0x44,iVar6,FUN_0041f030,FUN_005173d0);
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0x124) != 0) {
      iVar6 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x11c);
        *(undefined4 *)(iVar6 + (int)piVar4) = *(undefined4 *)(iVar1 + iVar6);
        FUN_0041d670(iVar1 + iVar6 + 4);
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 0x44;
      } while (uVar5 < *(uint *)(param_1 + 0x124));
    }
    pvVar2 = *(void **)(param_1 + 0x11c);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar2,0x44,*(int *)((int)pvVar2 + -4),FUN_005173d0);
      operator_delete__((void *)((int)pvVar2 + -4));
    }
    uVar5 = *(uint *)(param_1 + 0x124);
    *(int **)(param_1 + 0x11c) = piVar4;
    *(uint *)(param_1 + 0x120) = uVar5 + 0x10;
  }
  *(undefined4 *)(uVar5 * 0x44 + *(int *)(param_1 + 0x11c)) = param_2;
  FUN_0041d670(param_3);
  *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
  return;
}




/* Function: FUN_00420810 */

void FUN_00420810(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057ae51;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_1 + 1),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_3 + 1));
    }
    param_1 = param_1 + 8;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}




/* Function: FUN_004208b0 */

void FUN_004208b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
      param_3[6] = param_1[6];
      param_3[7] = param_1[7];
      param_3[8] = param_1[8];
    }
    param_3 = param_3 + 9;
  }
  return;
}




/* Function: FUN_00420910 */

undefined4 __thiscall FUN_00420910(int param_1,char *param_2)

{
  char *_Str2;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ae68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_005b5fcc & 1) == 0) {
    DAT_005b5fcc = DAT_005b5fcc | 1;
    ExceptionList = &local_c;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_005b5fb4);
    _atexit((_func_4879 *)&LAB_00580bf0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005b5fb4);
  piVar3 = *(int **)(param_1 + 4);
  local_4 = 0;
  if (piVar3 != *(int **)(param_1 + 8)) {
    do {
      if (param_2 != (char *)0x0) {
        _Str2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)*piVar3);
        iVar1 = _stricmp(param_2,_Str2);
        if (iVar1 == 0) {
          if (*(code **)(*piVar3 + 0x1c) != (code *)0x0) {
            uVar2 = (**(code **)(*piVar3 + 0x1c))();
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005b5fb4);
            ExceptionList = local_c;
            return uVar2;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005b5fb4);
          ExceptionList = local_c;
          return 0;
        }
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(param_1 + 8));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005b5fb4);
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_00420a10 */

void __thiscall
FUN_00420a10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0041df20(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00420ca0 */

void __thiscall
FUN_00420ca0(int param_1,undefined4 *param_2,
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




/* Function: FUN_00420d60 */

int __thiscall FUN_00420d60(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_0041fe60(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 8;
}




/* Function: FUN_00420d90 */

int __thiscall FUN_00420d90(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_0041fe90(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x20 + param_2;
}




/* Function: FUN_00420dc0 */

void __thiscall FUN_00420dc0(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057ae80;
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
      FUN_0041d2d0();
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
      uVar4 = FUN_0041df20(*(undefined4 *)(param_1 + 4));
      FUN_004520c0(uVar4);
      FUN_0041df20(param_2);
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
      *(uint *)(param_1 + 0xc) = uVar2 * 4 + iVar3;
      *(uint *)(param_1 + 8) = iVar3 + (param_3 + iVar5) * 4;
      *(int *)(param_1 + 4) = iVar3;
      ExceptionList = local_10;
      return;
    }
    if ((uint)(*(int *)(param_1 + 8) - param_2 >> 2) < param_3) {
      ExceptionList = &local_10;
      FUN_00420a10();
      local_8 = 2;
      FUN_00532ad0();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 4;
    }
    else {
      ExceptionList = &local_10;
      uVar4 = FUN_00420a10();
      *(undefined4 *)(param_1 + 8) = uVar4;
      FUN_0046c120();
    }
    FUN_00450650();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00421060 */

void __thiscall FUN_00421060(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057aee0;
  local_10 = ExceptionList;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - iVar3 >> 3;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 3;
    }
    if (0x1fffffffU - iVar5 < param_3) {
      ExceptionList = &local_10;
      FUN_0041d2d0();
      ExceptionList = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 3;
    }
    if (uVar2 < iVar5 + param_3) {
      if (0x1fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar3 >> 3;
      }
      if (uVar2 < iVar5 + param_3) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) - iVar3 >> 3;
        }
        uVar2 = iVar3 + param_3;
      }
      ExceptionList = &local_10;
      iVar3 = FUN_00493c27();
      local_8 = 0;
      uVar4 = FUN_0041e110(*(undefined4 *)(param_1 + 4));
      FUN_0041fe60(uVar4);
      FUN_0041e110(param_2);
      pvVar1 = *(void **)(param_1 + 4);
      if (pvVar1 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - (int)pvVar1 >> 3;
      }
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      *(uint *)(param_1 + 0xc) = uVar2 * 8 + iVar3;
      *(uint *)(param_1 + 8) = iVar3 + (param_3 + iVar5) * 8;
      *(int *)(param_1 + 4) = iVar3;
      ExceptionList = local_10;
      return;
    }
    if ((uint)(*(int *)(param_1 + 8) - param_2 >> 3) < param_3) {
      ExceptionList = &local_10;
      FUN_00436510();
      local_8 = 2;
      FUN_00420d60();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 8;
    }
    else {
      ExceptionList = &local_10;
      uVar4 = FUN_00436510();
      *(undefined4 *)(param_1 + 8) = uVar4;
      FUN_0045bdd0();
    }
    FUN_0045b490();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00421310 */

void __thiscall FUN_00421310(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057aef0;
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
      uVar4 = FUN_0041df20(*(undefined4 *)(param_1 + 4));
      FUN_004520c0(uVar4);
      FUN_0041df20(param_2);
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
      *(uint *)(param_1 + 0xc) = uVar2 * 4 + iVar3;
      *(uint *)(param_1 + 8) = iVar3 + (param_3 + iVar5) * 4;
      *(int *)(param_1 + 4) = iVar3;
      ExceptionList = local_10;
      return;
    }
    if ((uint)(*(int *)(param_1 + 8) - param_2 >> 2) < param_3) {
      ExceptionList = &local_10;
      FUN_00420a10();
      local_8 = 2;
      FUN_00532ad0();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 4;
    }
    else {
      ExceptionList = &local_10;
      uVar4 = FUN_00420a10();
      *(undefined4 *)(param_1 + 8) = uVar4;
      FUN_0046c120();
    }
    FUN_00450650();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004215b0 */

void __thiscall
FUN_004215b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0041ff30(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_004215e0 */

void __thiscall
FUN_004215e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0041ffd0(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00421610 */

void FUN_00421610(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      param_1[4] = param_3[4];
      param_1[5] = param_3[5];
      param_1[6] = param_3[6];
      param_1[7] = param_3[7];
      param_1[8] = param_3[8];
    }
    param_1 = param_1 + 9;
  }
  return;
}




/* Function: FUN_00421670 */

void FUN_00421670(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
  }
  return;
}




/* Function: FUN_004216a0 */

void __thiscall FUN_004216a0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  
  piVar8 = *(int **)(param_3 + 0x298);
  if (piVar8 != *(int **)(param_3 + 0x29c)) {
    do {
      piVar5 = *(int **)(param_1 + 0x80);
      if (piVar5 != *(int **)(param_1 + 0x84)) {
LAB_004216d2:
        if (*piVar8 != *piVar5) goto code_r0x004216d6;
        piVar1 = *(int **)(param_1 + 0x84);
        piVar3 = piVar5 + 1;
        if (piVar3 != piVar1) {
          iVar7 = (int)piVar5 - (int)piVar3;
          do {
            *(int *)(iVar7 + (int)piVar3) = *piVar3;
            piVar3 = piVar3 + 1;
          } while (piVar3 != piVar1);
        }
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -4;
      }
LAB_00421703:
      while( true ) {
        puVar6 = *(undefined4 **)(param_1 + 0x70);
        if (puVar6 == *(undefined4 **)(param_1 + 0x74)) break;
        while ((*piVar8 != *(int *)*puVar6 && (*piVar8 != ((int *)*puVar6)[1]))) {
          puVar6 = puVar6 + 1;
          if (puVar6 == *(undefined4 **)(param_1 + 0x74)) goto LAB_00421722;
        }
        puVar2 = *(undefined4 **)(param_1 + 0x74);
        puVar4 = puVar6 + 1;
        if (puVar4 != puVar2) {
          iVar7 = (int)puVar6 - (int)puVar4;
          do {
            *(undefined4 *)(iVar7 + (int)puVar4) = *puVar4;
            puVar4 = puVar4 + 1;
          } while (puVar4 != puVar2);
        }
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -4;
      }
LAB_00421722:
      piVar8 = piVar8 + 1;
    } while (piVar8 != *(int **)(param_3 + 0x29c));
  }
  return;
code_r0x004216d6:
  piVar5 = piVar5 + 1;
  if (piVar5 == *(int **)(param_1 + 0x84)) goto LAB_00421703;
  goto LAB_004216d2;
}




/* Function: FUN_00421760 */

int __thiscall FUN_00421760(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057af10;
  local_10 = ExceptionList;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 3;
  }
  ExceptionList = &local_10;
  cVar1 = FUN_00420070(iVar2);
  if (cVar1 != '\0') {
    local_8 = 0;
    uVar3 = FUN_0041e110(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(param_1 + 4),param_1,param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_00421800 */

void __thiscall FUN_00421800(int param_1,uint param_2)

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
    FUN_00420dc0(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 2))) {
    FUN_004366e0(&param_2,*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_00421880 */

void FUN_00421880(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_0050f5a0();
  }
  return;
}




/* Function: FUN_004218b0 */

void __fastcall FUN_004218b0(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x20) {
    FUN_0050f5a0();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00421900 */

int __thiscall FUN_00421900(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00420810(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x20 + param_2;
}




/* Function: FUN_00421930 */

void __thiscall FUN_00421930(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - iVar2 >> 3;
  }
  if (uVar1 < param_2) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar2 >> 3;
    }
    FUN_00421060(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 3))) {
    FUN_004366a0(&param_2,*(int *)(param_1 + 4) + param_2 * 8,*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_004219b0 */

void __thiscall FUN_004219b0(int param_1,int *param_2,int param_3,int param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  
  if (param_3 != param_4) {
    pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_00408730(param_4);
    pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              (param_1 + 8);
    for (this = pbVar2; this != pbVar1; this = this + 0x1c) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
    }
    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)(param_1 + 8)
         = pbVar2;
  }
  *param_2 = param_3;
  return;
}




/* Function: FUN_00421a10 */

void __thiscall FUN_00421a10(int param_1,uint param_2)

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
    FUN_00421310(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 2))) {
    FUN_004366e0(&param_2,*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_00421a90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUN_00421a90(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint unaff_retaddr;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 local_40;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_3c [28];
  undefined4 *local_20;
  undefined4 *local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057af28;
  local_10 = ExceptionList;
  local_18 = DAT_005b12c0 ^ unaff_retaddr;
  local_40 = *param_4;
  local_14 = &stack0xffffffb4;
  local_54 = (undefined4 *)0x421ad6;
  ExceptionList = &local_10;
  local_1c = param_1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_3c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(param_4 + 1));
  iVar2 = param_1[1];
  iVar5 = 0;
  local_8 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1[3] - iVar2 >> 5;
  }
  if (param_3 != 0) {
    if (iVar2 != 0) {
      iVar5 = param_1[2] - iVar2 >> 5;
    }
    if (0x7ffffffU - iVar5 < param_3) {
      FUN_0041d2d0();
    }
    else {
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = param_1[2] - iVar2 >> 5;
      }
      if (uVar1 < iVar5 + param_3) {
        if (0x7ffffff - (uVar1 >> 1) < uVar1) {
          uVar1 = 0;
        }
        else {
          uVar1 = uVar1 + (uVar1 >> 1);
        }
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = param_1[2] - iVar2 >> 5;
        }
        if (uVar1 < iVar5 + param_3) {
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = param_1[2] - iVar2 >> 5;
          }
          uVar1 = iVar2 + param_3;
        }
        local_54 = (undefined4 *)0x421b7f;
        puVar3 = (undefined4 *)FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        local_58 = puVar3;
        local_54 = param_1;
        local_20 = puVar3;
        iVar2 = FUN_0041ff30(param_1[1]);
        local_58 = &local_40;
        local_54 = param_1;
        FUN_00420810(iVar2);
        local_58 = (undefined4 *)(iVar2 + param_3 * 0x20);
        local_54 = param_1;
        FUN_0041ff30(param_2);
        iVar2 = param_1[1];
        local_8 = 0;
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = param_1[2] - iVar2 >> 5;
        }
        if (iVar2 != 0) {
          local_58 = (undefined4 *)0x421c19;
          local_54 = (undefined4 *)iVar2;
          FUN_00421880();
                    /* WARNING: Subroutine does not return */
          local_54 = (undefined4 *)&UNK_00421c22;
          operator_delete((void *)param_1[1]);
        }
        param_1[3] = puVar3 + uVar1 * 8;
        param_1[2] = puVar3 + (param_3 + iVar5) * 8;
        param_1[1] = puVar3;
      }
      else {
        local_54 = (undefined4 *)param_1[2];
        if ((uint)((int)local_54 - (int)param_2 >> 5) < param_3) {
          local_20 = &local_58;
          local_58 = param_2;
          FUN_004215b0();
          local_58 = (undefined4 *)param_1[2];
          local_54 = (undefined4 *)(param_3 - ((int)local_58 - (int)param_2 >> 5));
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_00421900();
          iVar2 = param_1[2] + param_3 * 0x20;
          param_1[2] = iVar2;
          local_54 = (undefined4 *)(iVar2 + param_3 * -0x20);
          local_8 = 0;
        }
        else {
          puVar3 = local_54 + param_3 * -8;
          local_58 = puVar3;
          local_20 = local_54;
          uVar4 = FUN_004215b0();
          param_1[2] = uVar4;
          local_58 = param_2;
          local_54 = puVar3;
          FUN_0041fdb0();
          local_54 = param_2 + param_3 * 8;
        }
        local_58 = param_2;
        FUN_0041fd70();
      }
    }
  }
  local_8 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_3c);
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00421da0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUN_00421da0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
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
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_58;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_54;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_40 [28];
  undefined4 local_24;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_20;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057af48;
  local_10 = ExceptionList;
  local_18 = DAT_005b12c0 ^ unaff_retaddr;
  local_14 = &stack0xffffffb4;
  local_54 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             0x421dde;
  ExceptionList = &local_10;
  local_1c = param_1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_40,param_4);
  local_24 = *(undefined4 *)(param_4 + 0x1c);
  iVar2 = *(int *)(param_1 + 4);
  iVar5 = 0;
  local_8 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0xc) - iVar2 >> 5;
  }
  if (param_3 != 0) {
    if (iVar2 != 0) {
      iVar5 = *(int *)(param_1 + 8) - iVar2 >> 5;
    }
    if (0x7ffffffU - iVar5 < param_3) {
      FUN_0041d2d0();
    }
    else {
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar2 >> 5;
      }
      if (uVar1 < iVar5 + param_3) {
        if (0x7ffffff - (uVar1 >> 1) < uVar1) {
          uVar1 = 0;
        }
        else {
          uVar1 = uVar1 + (uVar1 >> 1);
        }
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar2 >> 5;
        }
        if (uVar1 < iVar5 + param_3) {
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 8) - iVar2 >> 5;
          }
          uVar1 = iVar2 + param_3;
        }
        local_54 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x421e8d;
        pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        local_58 = pbVar3;
        local_54 = param_1;
        local_20 = pbVar3;
        iVar2 = FUN_0041ffd0(*(undefined4 *)(param_1 + 4));
        local_58 = local_40;
        local_54 = param_1;
        FUN_0041fe90(iVar2);
        local_58 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (iVar2 + param_3 * 0x20);
        local_54 = param_1;
        FUN_0041ffd0(param_2);
        iVar2 = *(int *)(param_1 + 4);
        local_8 = 0;
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar2 >> 5;
        }
        if (iVar2 != 0) {
          local_58 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )0x421f27;
          local_54 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )iVar2;
          FUN_00421670();
                    /* WARNING: Subroutine does not return */
          local_54 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&UNK_00421f30;
          operator_delete(*(void **)(param_1 + 4));
        }
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 0xc) = pbVar3 + uVar1 * 0x20;
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 8) = pbVar3 + (param_3 + iVar5) * 0x20;
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 4) = pbVar3;
      }
      else {
        local_54 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(param_1 + 8);
        if ((uint)((int)local_54 - (int)param_2 >> 5) < param_3) {
          local_20 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&local_58;
          local_58 = param_2;
          FUN_004215e0();
          local_58 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)(param_1 + 8);
          local_54 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(param_3 - ((int)local_58 - (int)param_2 >> 5));
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_00420d90();
          iVar2 = *(int *)(param_1 + 8) + param_3 * 0x20;
          *(int *)(param_1 + 8) = iVar2;
          local_54 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(iVar2 + param_3 * -0x20);
          local_8 = 0;
        }
        else {
          pbVar3 = local_54 + param_3 * -0x20;
          local_58 = pbVar3;
          local_20 = local_54;
          uVar4 = FUN_004215e0();
          *(undefined4 *)(param_1 + 8) = uVar4;
          local_58 = param_2;
          local_54 = pbVar3;
          FUN_0041fe20();
          local_54 = param_2 + param_3 * 0x20;
        }
        local_58 = param_2;
        FUN_0041fdf0();
      }
    }
  }
  local_8 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_40);
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004220b0 */

void __thiscall FUN_004220b0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0057af00;
  local_10 = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004520c0(iVar1,param_2,param_3,param_1,param_3);
  *(int *)(param_1 + 8) = iVar1 + param_2 * 4;
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00422130 */

void __thiscall
FUN_00422130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004208b0(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00422160 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FUN_00422160(int param_1,char *param_2)

{
  undefined4 uVar1;
  uint unaff_retaddr;
  char *pcVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_20 [28];
  uint local_4;
  
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_20);
  pcVar2 = param_2;
  if (param_2 == (char *)0x0) {
    pcVar2 = "";
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_20,pcVar2);
  FUN_00420ca0(&param_2,local_20);
  if ((*(char **)(param_1 + 400) != param_2) && (*(int *)(param_2 + 0x24) != 0)) {
    uVar1 = FUN_0041f850();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_20);
    return uVar1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_20);
  return 0;
}




/* Function: FUN_00422210 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FUN_00422210(int param_1,char *param_2)

{
  HANDLE hHandle;
  DWORD DVar1;
  uint unaff_retaddr;
  char *pcVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_20 [28];
  uint local_4;
  
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_20);
  pcVar2 = param_2;
  if (param_2 == (char *)0x0) {
    pcVar2 = "";
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_20,pcVar2);
  FUN_00420ca0(&param_2,local_20);
  if ((*(char **)(param_1 + 400) != param_2) && (*(int *)(param_2 + 0x24) != 0)) {
    hHandle = *(HANDLE *)(*(int *)(param_2 + 0x24) + 0xa0);
    if (hHandle != (HANDLE)0x0) {
      DVar1 = WaitForSingleObject(hHandle,0xffffffff);
      if (DVar1 != 0) goto LAB_004222ad;
      FUN_0041f850();
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_20);
    return 1;
  }
LAB_004222ad:
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_20);
  return 0;
}




/* Function: FUN_004222d0 */

undefined4 __thiscall FUN_004222d0(int param_1,int param_2)

{
  FUN_00420ca0(&param_2,param_2);
  if (*(int *)(param_1 + 0x140) != param_2) {
    return *(undefined4 *)(param_2 + 0x24);
  }
  return 0;
}




/* Function: FUN_00422310 */

int __thiscall FUN_00422310(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  bool bVar8;
  int local_2c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_0057af69;
  local_c = ExceptionList;
  iVar4 = 7;
  bVar8 = true;
  pcVar7 = param_2;
  pcVar2 = "OpenAL";
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar8 = *pcVar7 == *pcVar2;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar8);
  if (bVar8) {
    return DAT_005b7ec0;
  }
  iVar4 = 6;
  bVar8 = true;
  pcVar7 = param_2;
  pcVar2 = "Water";
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar8 = *pcVar7 == *pcVar2;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar8);
  if (bVar8) {
    if (*(int *)(param_1 + 0x130) != 0) {
      return *(int *)(*(int *)(param_1 + 0x130) + 0xe8);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x130);
    if (iVar4 != 0) {
      ExceptionList = &local_c;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,param_2)
      ;
      local_4 = 0;
      FUN_00420ca0(&local_2c,local_28);
      local_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
      if (local_2c != *(int *)(iVar4 + 0x44)) {
        ExceptionList = local_c;
        return *(int *)(local_2c + 0x24);
      }
      if (*(int *)(iVar4 + 0xf0) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)(iVar4 + 0xf4) - *(int *)(iVar4 + 0xf0) >> 3;
      }
      uVar5 = 0;
      if (uVar6 != 0) {
        do {
          iVar1 = *(int *)(*(int *)(iVar4 + 0xf0) + uVar5 * 8);
          pcVar7 = param_2;
          pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   ::c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            *)(iVar1 + 0x10));
          iVar3 = _stricmp(pcVar2,pcVar7);
          if (iVar3 == 0) {
            ExceptionList = local_c;
            return iVar1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      ExceptionList = local_c;
      return 0;
    }
  }
  return 0;
}




/* Function: FUN_00422480 */

undefined4 __thiscall FUN_00422480(int param_1,int param_2)

{
  FUN_00420ca0(&param_2,param_2);
  if (*(int *)(param_1 + 0x21f8) != param_2) {
    return *(undefined4 *)(param_2 + 0x24);
  }
  return 0;
}




/* Function: FUN_004224c0 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
FUN_004224c0(int param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            int param_3)

{
  FUN_00420ca0(&param_3,param_3);
  if (*(int *)(param_1 + 0x38) == param_3) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_2);
    return param_2;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (param_2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(param_3 + 0x24));
  return param_2;
}




/* Function: FUN_00422510 */

int __thiscall FUN_00422510(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057af80;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)(param_2 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x1c;
  }
  cVar1 = FUN_004089f0(iVar3);
  if (cVar1 != '\0') {
    local_8 = 0;
    uVar2 = FUN_00408870(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(param_1 + 4),param_1,param_2);
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}




/* Function: FUN_004225c0 */

void __thiscall FUN_004225c0(int param_1,undefined4 param_2)

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
  FUN_00420dc0(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_00422630 */

void __thiscall FUN_00422630(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_3;
  FUN_0041df50(&param_3,param_3 + 0x20,*(undefined4 *)(param_1 + 8),param_3,param_3);
  iVar1 = *(int *)(param_1 + 8);
  for (iVar3 = iVar1 + -0x20; iVar3 != iVar1; iVar3 = iVar3 + 0x20) {
    FUN_0050f5a0();
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x20;
  *param_2 = iVar2;
  return;
}




/* Function: FUN_00422690 */

void __thiscall FUN_00422690(int param_1,int *param_2,int *param_3)

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




/* Function: FUN_00422720 */

void __thiscall FUN_00422720(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 3) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 3))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_0041fe60(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 8;
    return;
  }
  FUN_00421060(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_00422790 */

void __thiscall FUN_00422790(int param_1,undefined4 **param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *local_28;
  int local_24;
  undefined1 *local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057af99;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  local_4 = 0;
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = (undefined1 *)((*(int *)(param_1 + 8) - iVar1) / 0x1c);
  }
  if (puVar2 < param_2) {
    if (iVar1 == 0) {
      local_24 = 0;
    }
    else {
      local_24 = (*(int *)(param_1 + 8) - iVar1) / 0x1c;
    }
    local_20 = &stack0x00000008;
    local_24 = (int)param_2 - local_24;
    local_28 = *(undefined4 **)(param_1 + 8);
    param_2 = &local_28;
    ExceptionList = &local_c;
    FUN_004095a0();
  }
  else {
    ExceptionList = &local_c;
    if (iVar1 != 0) {
      local_20 = *(undefined1 **)(param_1 + 8);
      ExceptionList = &local_c;
      if (param_2 < (undefined1 *)(((int)local_20 - iVar1) / 0x1c)) {
        local_24 = (int)param_2 * 0x1c;
        param_2 = (undefined4 **)&local_24;
        local_24 = local_24 + *(int *)(param_1 + 4);
        local_28 = &param_2;
        ExceptionList = &local_c;
        FUN_004219b0();
      }
    }
  }
  local_4 = 0xffffffff;
  local_20 = (undefined1 *)0x42286f;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000008);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00422890 */

void __fastcall FUN_00422890(int param_1)

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
  FUN_00452ff0(&local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_004228d0 */

void __thiscall FUN_004228d0(int param_1,undefined4 *param_2,int *param_3,int *param_4)

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
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar1);
}




/* Function: FUN_00422920 */

/* WARNING: Removing unreachable block (ram,0x0042293c) */
/* WARNING: Removing unreachable block (ram,0x00422940) */

void __thiscall FUN_00422920(int param_1,undefined4 param_2,undefined4 *param_3)

{
  param_3 = (undefined4 *)*param_3;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
  }
  FUN_00420dc0(*(undefined4 *)(param_1 + 4),param_2,&param_3);
  return;
}




/* Function: FUN_00422970 */

int __thiscall FUN_00422970(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00421610(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0x24;
}




/* Function: FUN_004229a0 */

void __thiscall
FUN_004229a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  *param_1 = &PTR_FUN_00587cfc;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = param_4;
  param_1[6] = param_3;
  param_1[8] = param_5;
  param_1[9] = param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}




/* Function: FUN_004229e0 */

void * __thiscall FUN_004229e0(void *param_1,byte param_2)

{
  FUN_00422a00();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00422a00 */

void __fastcall FUN_00422a00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00587cfc;
  FUN_00532a60();
  if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[2]);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}




/* Function: FUN_00422a40 */

void __fastcall FUN_00422a40(int param_1)

{
  int iVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057afb8;
  local_c = ExceptionList;
  local_4 = 0;
  iVar3 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar1 >> 2;
    }
    if (iVar2 <= iVar3) break;
    this = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
            (iVar1 + iVar3 * 4);
    if (this != (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0)
    {
      ExceptionList = &local_c;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
                    /* WARNING: Subroutine does not return */
      operator_delete(this);
    }
    iVar3 = iVar3 + 1;
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}




/* Function: FUN_00422ad0 */

undefined4 __fastcall FUN_00422ad0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  
  if (*(int **)(param_1 + 0x1704) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1704) + 0x10))();
  }
  (**(code **)(*(int *)(param_1 + 0x1b10) + 0x10))();
  (**(code **)(*(int *)(param_1 + 0x14c0) + 0x10))();
  if (*(int **)(param_1 + 0x21e8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x21e8) + 0x10))();
  }
  (**(code **)(*(int *)(param_1 + 0x358) + 0x10))();
  puVar1 = *(undefined4 **)(param_1 + 0x140);
  if (puVar1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)*puVar1;
  }
  for (; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
    FUN_004fb820();
  }
  piVar2 = *(int **)(param_1 + 0x2c4);
  if (piVar2 == (int *)0x0) {
    piVar2 = *(int **)(param_1 + 0x2c8);
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    if (piVar2 == (int *)0x0) {
      piVar2 = *(int **)(param_1 + 0x2cc);
      *(undefined4 *)(param_1 + 0x2c8) = 0;
      if (piVar2 == (int *)0x0) {
        piVar2 = *(int **)(param_1 + 0x2d0);
        *(undefined4 *)(param_1 + 0x2cc) = 0;
        if (piVar2 == (int *)0x0) {
          piVar2 = *(int **)(param_1 + 0x2d4);
          *(undefined4 *)(param_1 + 0x2d0) = 0;
          if (piVar2 == (int *)0x0) {
            piVar2 = *(int **)(param_1 + 0x2d8);
            *(undefined4 *)(param_1 + 0x2d4) = 0;
            if (piVar2 == (int *)0x0) {
              piVar2 = *(int **)(param_1 + 0x2dc);
              *(undefined4 *)(param_1 + 0x2d8) = 0;
              if (piVar2 == (int *)0x0) {
                piVar2 = *(int **)(param_1 + 0x2e0);
                *(undefined4 *)(param_1 + 0x2dc) = 0;
                if (piVar2 == (int *)0x0) {
                  piVar2 = *(int **)(param_1 + 0x2e4);
                  *(undefined4 *)(param_1 + 0x2e0) = 0;
                  if (piVar2 == (int *)0x0) {
                    *(undefined4 *)(param_1 + 0x2e4) = 0;
                    if (*(int *)(param_1 + 0x1930) != 0) {
                      (**(code **)(**(int **)(param_1 + 0x17d0) + 0x138))
                                (*(int **)(param_1 + 0x17d0),*(int *)(param_1 + 0x1930));
                      *(undefined4 *)(param_1 + 0x1930) = 0;
                    }
                    if (*(int *)(param_1 + 0x1934) != 0) {
                      (**(code **)(**(int **)(param_1 + 0x17d0) + 0x138))
                                (*(int **)(param_1 + 0x17d0),*(int *)(param_1 + 0x1934));
                      *(undefined4 *)(param_1 + 0x1934) = 0;
                    }
                    operator_delete__(*(void **)(param_1 + 0xc4));
                    *(undefined4 *)(param_1 + 0xc4) = 0;
                    *(undefined4 *)(param_1 + 200) = 0;
                    *(undefined4 *)(param_1 + 0xcc) = 0;
                    operator_delete__(*(void **)(param_1 + 0xd0));
                    *(undefined4 *)(param_1 + 0xd0) = 0;
                    *(undefined4 *)(param_1 + 0xd4) = 0;
                    *(undefined4 *)(param_1 + 0xd8) = 0;
                    operator_delete__(*(void **)(param_1 + 0xdc));
                    *(undefined4 *)(param_1 + 0xdc) = 0;
                    *(undefined4 *)(param_1 + 0xe0) = 0;
                    *(undefined4 *)(param_1 + 0xe4) = 0;
                    operator_delete__(*(void **)(param_1 + 0xe8));
                    pvVar5 = *(void **)(param_1 + 0xf4);
                    *(undefined4 *)(param_1 + 0xe8) = 0;
                    *(undefined4 *)(param_1 + 0xec) = 0;
                    *(undefined4 *)(param_1 + 0xf0) = 0;
                    if (pvVar5 != (void *)0x0) {
                      _eh_vector_destructor_iterator_
                                (pvVar5,0x10,*(int *)((int)pvVar5 + -4),FUN_00407150);
                      operator_delete__((void *)((int)pvVar5 + -4));
                    }
                    *(undefined4 *)(param_1 + 0xf4) = 0;
                    *(undefined4 *)(param_1 + 0xf8) = 0;
                    *(undefined4 *)(param_1 + 0xfc) = 0;
                    operator_delete__(*(void **)(param_1 + 0x110));
                    pvVar5 = *(void **)(param_1 + 0x11c);
                    *(undefined4 *)(param_1 + 0x110) = 0;
                    *(undefined4 *)(param_1 + 0x114) = 0;
                    *(undefined4 *)(param_1 + 0x118) = 0;
                    if (pvVar5 != (void *)0x0) {
                      _eh_vector_destructor_iterator_
                                (pvVar5,0x44,*(int *)((int)pvVar5 + -4),FUN_005173d0);
                      operator_delete__((void *)((int)pvVar5 + -4));
                    }
                    *(undefined4 *)(param_1 + 0x11c) = 0;
                    *(undefined4 *)(param_1 + 0x120) = 0;
                    *(undefined4 *)(param_1 + 0x124) = 0;
                    piVar2 = *(int **)(param_1 + 0x18f8);
                    if (piVar2 != (int *)0x0) {
                      (**(code **)(*piVar2 + 8))(piVar2);
                      *(undefined4 *)(param_1 + 0x18f8) = 0;
                    }
                    piVar2 = *(int **)(param_1 + 0x18fc);
                    if (piVar2 != (int *)0x0) {
                      (**(code **)(*piVar2 + 8))(piVar2);
                      *(undefined4 *)(param_1 + 0x18fc) = 0;
                    }
                    piVar2 = *(int **)(param_1 + 0x1910);
                    if (piVar2 != (int *)0x0) {
                      (**(code **)(*piVar2 + 8))(piVar2);
                      *(undefined4 *)(param_1 + 0x1910) = 0;
                    }
                    piVar2 = *(int **)(param_1 + 0x192c);
                    if (piVar2 != (int *)0x0) {
                      (**(code **)(*piVar2 + 8))(piVar2);
                      *(undefined4 *)(param_1 + 0x192c) = 0;
                    }
                    piVar2 = *(int **)(param_1 + 0x1908);
                    if (piVar2 != (int *)0x0) {
                      (**(code **)(*piVar2 + 8))(piVar2);
                      *(undefined4 *)(param_1 + 0x1908) = 0;
                    }
                    piVar2 = *(int **)(param_1 + 0x190c);
                    if (piVar2 != (int *)0x0) {
                      (**(code **)(*piVar2 + 8))(piVar2);
                      *(undefined4 *)(param_1 + 0x190c) = 0;
                    }
                    piVar2 = *(int **)(param_1 + 0x19b8);
                    if (piVar2 != (int *)0x0) {
                      (**(code **)(*piVar2 + 8))(piVar2);
                      *(undefined4 *)(param_1 + 0x19b8) = 0;
                    }
                    piVar2 = *(int **)(param_1 + 0x19bc);
                    if (piVar2 != (int *)0x0) {
                      (**(code **)(*piVar2 + 8))(piVar2);
                      *(undefined4 *)(param_1 + 0x19bc) = 0;
                    }
                    pvVar5 = *(void **)(param_1 + 0x17c0);
                    if (pvVar5 == (void *)0x0) {
                      pvVar5 = operator_new(0x10,(nothrow_t *)&DAT_005b6164);
                      if (pvVar5 == (void *)0x0) {
                        *(undefined4 *)(param_1 + 0x17c0) = 0;
                        return 1;
                      }
                      uVar6 = FUN_004ff070();
                      *(undefined4 *)(param_1 + 0x17c0) = uVar6;
                      return 1;
                    }
                    FUN_004f8be0();
                    /* WARNING: Subroutine does not return */
                    operator_delete(pvVar5);
                  }
                  if ((char)piVar2[2] != '\0') {
                    piVar3 = (int *)*piVar2;
                    if (piVar3 == (int *)0x0) goto LAB_00422d52;
                    (**(code **)(*piVar3 + 0x30))(piVar3);
                    *(undefined1 *)(piVar2 + 2) = 0;
                  }
                  piVar3 = (int *)*piVar2;
                  if (piVar3 != (int *)0x0) {
                    (**(code **)(*piVar3 + 8))(piVar3);
                    *piVar2 = 0;
                  }
LAB_00422d52:
                    /* WARNING: Subroutine does not return */
                  operator_delete(piVar2);
                }
                if ((char)piVar2[2] != '\0') {
                  piVar3 = (int *)*piVar2;
                  if (piVar3 == (int *)0x0) goto LAB_00422d17;
                  (**(code **)(*piVar3 + 0x30))(piVar3);
                  *(undefined1 *)(piVar2 + 2) = 0;
                }
                piVar3 = (int *)*piVar2;
                if (piVar3 != (int *)0x0) {
                  (**(code **)(*piVar3 + 8))(piVar3);
                  *piVar2 = 0;
                }
LAB_00422d17:
                    /* WARNING: Subroutine does not return */
                operator_delete(piVar2);
              }
              if ((char)piVar2[2] != '\0') {
                piVar3 = (int *)*piVar2;
                if (piVar3 == (int *)0x0) goto LAB_00422cdc;
                (**(code **)(*piVar3 + 0x30))(piVar3);
                *(undefined1 *)(piVar2 + 2) = 0;
              }
              piVar3 = (int *)*piVar2;
              if (piVar3 != (int *)0x0) {
                (**(code **)(*piVar3 + 8))(piVar3);
                *piVar2 = 0;
              }
LAB_00422cdc:
                    /* WARNING: Subroutine does not return */
              operator_delete(piVar2);
            }
            if ((char)piVar2[2] != '\0') {
              piVar3 = (int *)*piVar2;
              if (piVar3 == (int *)0x0) goto LAB_00422ca1;
              (**(code **)(*piVar3 + 0x30))(piVar3);
              *(undefined1 *)(piVar2 + 2) = 0;
            }
            piVar3 = (int *)*piVar2;
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 8))(piVar3);
              *piVar2 = 0;
            }
LAB_00422ca1:
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar2);
          }
          if ((char)piVar2[2] != '\0') {
            piVar3 = (int *)*piVar2;
            if (piVar3 == (int *)0x0) goto LAB_00422c66;
            (**(code **)(*piVar3 + 0x30))(piVar3);
            *(undefined1 *)(piVar2 + 2) = 0;
          }
          piVar3 = (int *)*piVar2;
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(piVar3);
            *piVar2 = 0;
          }
LAB_00422c66:
                    /* WARNING: Subroutine does not return */
          operator_delete(piVar2);
        }
        if ((char)piVar2[2] != '\0') {
          piVar3 = (int *)*piVar2;
          if (piVar3 == (int *)0x0) goto LAB_00422c2b;
          (**(code **)(*piVar3 + 0x30))(piVar3);
          *(undefined1 *)(piVar2 + 2) = 0;
        }
        piVar3 = (int *)*piVar2;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
          *piVar2 = 0;
        }
LAB_00422c2b:
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar2);
      }
      if ((char)piVar2[2] != '\0') {
        piVar3 = (int *)*piVar2;
        if (piVar3 == (int *)0x0) goto LAB_00422bf0;
        (**(code **)(*piVar3 + 0x30))(piVar3);
        *(undefined1 *)(piVar2 + 2) = 0;
      }
      piVar3 = (int *)*piVar2;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *piVar2 = 0;
      }
LAB_00422bf0:
                    /* WARNING: Subroutine does not return */
      operator_delete(piVar2);
    }
    if ((char)piVar2[2] != '\0') {
      piVar3 = (int *)*piVar2;
      if (piVar3 == (int *)0x0) goto LAB_00422bb5;
      (**(code **)(*piVar3 + 0x30))(piVar3);
      *(undefined1 *)(piVar2 + 2) = 0;
    }
    piVar3 = (int *)*piVar2;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      *piVar2 = 0;
    }
LAB_00422bb5:
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar2);
  }
  if ((char)piVar2[2] != '\0') {
    piVar3 = (int *)*piVar2;
    if (piVar3 == (int *)0x0) goto LAB_00422b7a;
    (**(code **)(*piVar3 + 0x30))(piVar3);
    *(undefined1 *)(piVar2 + 2) = 0;
  }
  piVar3 = (int *)*piVar2;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *piVar2 = 0;
  }
LAB_00422b7a:
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar2);
}




/* Function: FUN_00423250 */

undefined4 FUN_00423250(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 local_8;
  undefined1 local_4;
  
  local_4 = param_3;
  local_8 = param_1;
  FUN_00422720(&local_8);
  return 1;
}




/* Function: FUN_00423280 */

undefined4 FUN_00423280(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int local_8;
  undefined1 local_4;
  
  piVar2 = *(int **)(param_2 + 0xf0);
  piVar1 = *(int **)(param_2 + 0xf4);
  if (piVar2 == piVar1) {
    return 0;
  }
  do {
    if (*piVar2 == param_1) break;
    piVar2 = piVar2 + 2;
  } while (piVar2 != piVar1);
  if (piVar2 == piVar1) {
    return 0;
  }
  if (param_3 == 0) {
    local_8 = *piVar2;
    local_4 = (undefined1)piVar2[1];
  }
  else if (param_3 == 1) {
    local_8 = *piVar2;
    local_4 = 1;
  }
  else {
    if (param_3 != 2) {
      return 1;
    }
    local_8 = *piVar2;
    local_4 = 0;
  }
  FUN_00422720(&local_8);
  return 1;
}




/* Function: FUN_00423310 */

void __thiscall FUN_00423310(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x2224) == 0) {
      return;
    }
    if ((uint)(*(int *)(param_1 + 0x2228) - *(int *)(param_1 + 0x2224) >> 5) <= uVar1) break;
    if (*(int *)(iVar2 + *(int *)(param_1 + 0x2224)) == param_2) {
      FUN_00422630(&param_2,uVar1 * 0x20 + *(int *)(param_1 + 0x2224));
      return;
    }
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 0x20;
  }
  return;
}




/* Function: FUN_00423380 */

uint __fastcall FUN_00423380(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b019;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44,"DynamicVB")
  ;
  local_4 = 0;
  uVar2 = FUN_004224c0(local_28,local_44);
  cVar1 = FUN_0040e560(uVar2,1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
  uVar3 = 0;
  if (cVar1 != '\0') {
    uVar3 = 0x200;
  }
  if (((*(uint *)(param_1 + 0x1814) & 0x40) == 0) && ((*(uint *)(param_1 + 0x1814) & 0x20) != 0)) {
    uVar3 = uVar3 | 0x10;
  }
  ExceptionList = local_c;
  return uVar3;
}




/* Function: FUN_00423420 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00423420(void)

{
  bool bVar1;
  undefined4 uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  int iVar4;
  uint unaff_retaddr;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_80 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_64 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_48 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b054;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_64,"OptimizeFor");
  local_4 = 0;
  uVar2 = FUN_004224c0(local_48,local_64);
  FUN_00408950(local_80,uVar2);
  local_4._0_1_ = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_48);
  local_4._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_64);
  bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                    (local_80);
  if (bVar1) {
    local_4 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_80);
  }
  else {
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (local_2c,"perfomance");
    local_4._0_1_ = 3;
    iVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            compare(pbVar3,local_80);
    local_4._0_1_ = 2;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
    if (iVar4 != 0) {
      pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         (local_2c,"compatibility");
      local_4._0_1_ = 4;
      iVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              compare(pbVar3,local_80);
      local_4 = CONCAT31(local_4._1_3_,2);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
      if (iVar4 == 0) {
        local_4 = 0xffffffff;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_80);
        ExceptionList = local_c;
        return 1;
      }
    }
    local_4 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_80);
  }
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_004238d0 */

undefined4 __thiscall FUN_004238d0(int param_1,int *param_2)

{
  ushort uVar1;
  int *piVar2;
  ushort uVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 uVar13;
  char cVar14;
  char cStack_175;
  int iStack_174;
  uint uVar15;
  uint uVar16;
  int iStack_164;
  uint uStack_160;
  int *piStack_15c;
  undefined4 uStack_158;
  uint uStack_154;
  undefined4 uStack_150;
  int *piStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  int *piStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  int *piStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int *piStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  int *piStack_114;
  undefined4 uStack_110;
  undefined4 *puStack_10c;
  int *piStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int *piStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int *piStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int *piStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int *piStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  
  if (*(int *)(param_1 + 0xd8) == 0) {
    return 0;
  }
  if (*(uint *)(param_1 + 0xe0) < *(uint *)(param_1 + 0xd4)) {
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xd4) + 0x10 & 0xfffffff0;
    operator_delete__(*(void **)(param_1 + 0xdc));
    *(undefined4 *)(param_1 + 0xdc) = 0;
    uStack_b4 = 0x423933;
    pvVar4 = operator_new(*(int *)(param_1 + 0xe0) << 2,(nothrow_t *)&DAT_005b6164);
    *(void **)(param_1 + 0xdc) = pvVar4;
  }
  if (*(uint *)(param_1 + 0xec) < *(uint *)(param_1 + 0xd4)) {
    *(uint *)(param_1 + 0xec) = *(uint *)(param_1 + 0xd4) + 0x10 & 0xfffffff0;
    operator_delete__(*(void **)(param_1 + 0xe8));
    *(undefined4 *)(param_1 + 0xe8) = 0;
    uStack_b4 = 0x42397c;
    pvVar4 = operator_new(*(int *)(param_1 + 0xec) << 2,(nothrow_t *)&DAT_005b6164);
    *(void **)(param_1 + 0xe8) = pvVar4;
  }
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  **(undefined4 **)(param_1 + 0xe8) = 0;
  FUN_0041dc50();
  if (*(int *)(*(int *)(param_1 + 0xe8) + *(int *)(param_1 + 0xf0) * 4) != 0) {
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
  }
  FUN_00407f80();
  uStack_b4 = 0x4239d1;
  FUN_0041e330();
  FUN_00407300();
  FUN_0041da10();
  uStack_b4 = 0x4239f8;
  iVar5 = (**(code **)(*param_2 + 0x130))();
  if (iVar5 < 0) {
    return 0xffffffff;
  }
  uStack_b8 = **(undefined4 **)(param_1 + 0x2d0);
  uStack_b4 = 0x28;
  uStack_bc = 0;
  piStack_c0 = param_2;
  uStack_c4 = 0x423a21;
  (**(code **)(*param_2 + 0x14c))();
  uStack_c4 = 0;
  uStack_c8 = 0xe;
  piStack_cc = param_2;
  uStack_d0 = 0x423a2e;
  (**(code **)(*param_2 + 200))();
  uStack_d0 = 1;
  uStack_d4 = 0x16;
  piStack_d8 = param_2;
  uStack_dc = 0x423a3c;
  (**(code **)(*param_2 + 200))();
  uStack_dc = 1;
  uStack_e0 = 0x1b;
  piStack_e4 = param_2;
  uStack_e8 = 0x423a4a;
  (**(code **)(*param_2 + 200))();
  uStack_e8 = 1;
  uStack_ec = 0xf;
  piStack_f0 = param_2;
  uStack_f4 = 0x423a58;
  (**(code **)(*param_2 + 200))();
  uStack_f4 = 7;
  uStack_f8 = 0x19;
  piStack_fc = param_2;
  uStack_100 = 0x423a66;
  (**(code **)(*param_2 + 200))();
  uStack_100 = 1;
  uStack_104 = 0x18;
  piStack_108 = param_2;
  puStack_10c = (undefined4 *)0x423a74;
  (**(code **)(*param_2 + 200))();
  puStack_10c = &uStack_dc;
  uStack_110 = 0x1c;
  piStack_114 = param_2;
  uStack_dc = 0;
  uStack_118 = 0x423a89;
  (**(code **)(*param_2 + 0xcc))();
  uStack_118 = 0;
  uStack_11c = 1;
  piStack_120 = param_2;
  uStack_124 = 0x423a96;
  (**(code **)(*param_2 + 0xf4))();
  uStack_124 = 0;
  uStack_128 = 2;
  piStack_12c = param_2;
  uStack_130 = 0x423aa3;
  (**(code **)(*param_2 + 0xf4))();
  uStack_130 = 1;
  uStack_134 = 1;
  uStack_138 = 1;
  piStack_13c = param_2;
  uStack_140 = 0x423ab3;
  (**(code **)(*param_2 + 0xfc))();
  uStack_140 = 1;
  uStack_144 = 4;
  uStack_148 = 1;
  piStack_14c = param_2;
  uStack_150 = 0x423ac3;
  (**(code **)(*param_2 + 0xfc))();
  uStack_150 = 1;
  uStack_154 = 1;
  uStack_158 = 2;
  piStack_15c = param_2;
  uStack_160 = 0x423ad3;
  (**(code **)(*param_2 + 0xfc))();
  uStack_160 = 1;
  iStack_164 = 4;
  (**(code **)(*param_2 + 0xfc))(param_2,2);
  uStack_158 = 0xffff;
  piStack_15c = (int *)0x2;
  bVar12 = *(char *)(param_1 + 0x21e4) == '\0';
  piStack_14c = (int *)0x12;
  uStack_160 = uStack_160 & 0xffffff;
  if (bVar12) {
    cStack_175 = (char)((uint)param_2 >> 0x18);
    (**(code **)(*param_2 + 200))();
  }
  else {
    (**(code **)(*param_2 + 200))();
    (**(code **)(*param_2 + 0xb8))(param_2,0,1);
    cStack_175 = '\x01';
  }
  uVar3 = (ushort)!bVar12;
  iStack_174 = 0x89;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &uStack_138,"default");
  FUN_00420ca0(&uStack_160,&uStack_138);
  if (*(uint *)(param_1 + 0x21f8) == uStack_160) {
    piStack_15c = (int *)0x0;
  }
  else {
    piStack_15c = *(int **)(uStack_160 + 0x24);
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &uStack_138);
  uVar15 = 0;
  iVar5 = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    do {
      iVar9 = *(int *)(*(int *)(param_1 + 0xdc) + iVar5 * 4) * 0x20;
      iVar10 = iVar9 + *(int *)(param_1 + 0xd0);
      if ((*(int *)(iVar9 + 0x18 + *(int *)(param_1 + 0xd0)) != iStack_164) &&
         ((iStack_164 == 8 || (iStack_164 == 9)))) {
        (**(code **)(*param_2 + 200))(param_2,0x1c,uStack_158);
      }
      iVar9 = *(int *)(iVar10 + 0x18);
      switch(iVar9) {
      case 0:
      case 1:
        uVar1 = *(ushort *)(iVar10 + 0x1c);
        if (uVar3 != uVar1) {
          if (uVar1 == 0xffff) {
            (**(code **)(*param_2 + 200))(param_2,0x13,5);
            (**(code **)(*param_2 + 200))(param_2,0x14,6);
          }
          else {
            iVar9 = FUN_00410ae0();
            iVar9 = *(int *)(iVar9 + 0xb4);
            if (iStack_174 != iVar9) {
              iStack_174 = iVar9;
              if (iVar9 == 0) {
                (**(code **)(*param_2 + 200))(param_2,0x13,5);
                (**(code **)(*param_2 + 200))(param_2,0x14,6);
              }
              else if (iVar9 == 1) {
                (**(code **)(*param_2 + 200))(param_2,0x13,2);
                (**(code **)(*param_2 + 200))(param_2,0x14,2);
              }
            }
          }
          FUN_004200d0(param_2,uVar1,1,0,0);
          (**(code **)(*param_2 + 0xfc))(param_2,0,4,2);
          uVar3 = uVar1;
        }
        break;
      case 2:
      case 3:
        if ((iVar9 != iStack_164) && (uVar3 = 0xffff, iStack_174 != 0)) {
LAB_00423d7b:
          iStack_174 = 0;
          (**(code **)(*param_2 + 200))(param_2,0x13,5);
          (**(code **)(*param_2 + 200))(param_2,0x14,6);
          uVar3 = 0xffff;
        }
        break;
      case 4:
      case 5:
      case 0xc:
      case 0xd:
        if (iVar9 != iStack_164) {
          iStack_174 = 2;
          (**(code **)(*param_2 + 200))(param_2,0xf,0);
          (**(code **)(*param_2 + 200))(param_2,0x13,3);
          (**(code **)(*param_2 + 200))(param_2,0x14,4);
          uVar3 = 0xffff;
        }
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        if ((iVar9 != iStack_164) && (uVar3 = 0xffff, iStack_174 != 1)) {
          iStack_174 = 1;
          (**(code **)(*param_2 + 200))(param_2,0xf,1);
          (**(code **)(*param_2 + 200))(param_2,0x13,5);
          (**(code **)(*param_2 + 200))(param_2,0x14,2);
        }
        break;
      case 10:
      case 0xb:
        if ((iVar9 != iStack_164) && (uVar3 = 0xffff, iStack_174 != 0)) {
          (**(code **)(*param_2 + 200))(param_2,0xf,1);
          goto LAB_00423d7b;
        }
        break;
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
        if ((iVar9 != iStack_164) && (uVar3 = 0xffff, iStack_174 != 1)) {
          iStack_174 = 1;
          (**(code **)(*param_2 + 200))(param_2,0xf,0);
          (**(code **)(*param_2 + 200))(param_2,0x13,2);
          (**(code **)(*param_2 + 200))(param_2,0x14,2);
        }
      }
      iVar9 = *(int *)(iVar10 + 0x18);
      switch(iVar9) {
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        if (iVar9 != iStack_164) {
          uStack_140 = 0;
          (**(code **)(*param_2 + 0xfc))(param_2,0,0x13,0);
          piVar6 = param_2;
          (**(code **)(*param_2 + 0xfc))(param_2,0,0x14,0);
          cVar14 = (char)((uint)piVar6 >> 0x18);
          (**(code **)(*param_2 + 0xfc))(param_2,0,0x12,2);
          if (cVar14 == '\0') {
            (**(code **)(*param_2 + 0xfc))(param_2,0,1,4);
            (**(code **)(*param_2 + 0xfc))(param_2,0,2,2);
            (**(code **)(*param_2 + 0xfc))(param_2,0,3,3);
            (**(code **)(*param_2 + 0xfc))(param_2,0,4,4);
            (**(code **)(*param_2 + 0xfc))(param_2,0,5,2);
            (**(code **)(*param_2 + 0xfc))(param_2,0,6,3);
            (**(code **)(*param_2 + 0xfc))(param_2,1,1,1);
            (**(code **)(*param_2 + 0xfc))(param_2,1,4,1);
            uVar13 = 1;
          }
          else {
            (**(code **)(*param_2 + 0xfc))();
            (**(code **)(*param_2 + 0xfc))(param_2,0,2,2);
            (**(code **)(*param_2 + 0xfc))(param_2,0,3,1);
            (**(code **)(*param_2 + 0xfc))(param_2,0,4,2);
            (**(code **)(*param_2 + 0xfc))(param_2,0,5,2);
            (**(code **)(*param_2 + 0xfc))(param_2,0,6,2);
            (**(code **)(*param_2 + 0xfc))(param_2,1,1,4);
            (**(code **)(*param_2 + 0xfc))(param_2,1,2,1);
            (**(code **)(*param_2 + 0xfc))(param_2,1,3,3);
            (**(code **)(*param_2 + 0xfc))(param_2,1,4,4);
            (**(code **)(*param_2 + 0xfc))(param_2,1,5,1);
            (**(code **)(*param_2 + 0xfc))(param_2,1,6,3);
            (**(code **)(*param_2 + 0xfc))(param_2,2,1,1);
            (**(code **)(*param_2 + 0xfc))(param_2,2,4,1);
            uVar13 = 1;
          }
LAB_00424511:
          uVar3 = 0xffff;
          (**(code **)(*param_2 + 0xf4))(param_2,uVar13,0);
        }
        break;
      case 8:
      case 9:
        if (iVar9 != iStack_164) {
          uStack_148 = 0;
          uVar3 = 0xffff;
          (**(code **)(*param_2 + 0xfc))(param_2,0,0x13,0);
          (**(code **)(*param_2 + 0xfc))(param_2,0,0x14,0);
          (**(code **)(*param_2 + 0xfc))(param_2,0,0x12,2);
          iVar5 = 0;
          (**(code **)(*param_2 + 0xfc))(param_2,1,0x13,0);
          (**(code **)(*param_2 + 0xfc))(param_2,1,0x14,0);
          (**(code **)(*param_2 + 0xfc))(param_2,1,0x12,2);
          (**(code **)(*param_2 + 0xfc))(param_2,0,1,4);
          (**(code **)(*param_2 + 0xfc))(param_2,0,2,2);
          (**(code **)(*param_2 + 0xfc))(param_2,0,3,3);
          (**(code **)(*param_2 + 0xfc))(param_2,0,4,4);
          (**(code **)(*param_2 + 0xfc))(param_2,0,5,2);
          (**(code **)(*param_2 + 0xfc))(param_2,0,6,3);
          (**(code **)(*param_2 + 0xfc))(param_2,1,1,4);
          (**(code **)(*param_2 + 0xfc))(param_2,1,2,1);
          (**(code **)(*param_2 + 0xfc))(param_2,1,3,2);
          (**(code **)(*param_2 + 0xfc))(param_2,1,4,2);
          (**(code **)(*param_2 + 0xfc))(param_2,1,5,1);
          (**(code **)(*param_2 + 0xfc))(param_2,1,6,2);
          (**(code **)(*param_2 + 0xfc))(param_2,1,0xd,3);
          (**(code **)(*param_2 + 0xfc))(param_2,1,0xe,3);
          (**(code **)(*param_2 + 0xfc))(param_2,2,1,1);
          (**(code **)(*param_2 + 0xfc))(param_2,2,4,1);
          (**(code **)(*param_2 + 0xf4))(param_2,1,0);
          (**(code **)(*param_2 + 0xf4))(param_2,2,0);
          (**(code **)(*param_2 + 200))(param_2,0x1c,0);
        }
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        if (iVar9 != iStack_164) {
          uStack_150 = 0;
          (**(code **)(*param_2 + 0xfc))(param_2,0,0x13,0);
          iVar9 = 0;
          (**(code **)(*param_2 + 0xfc))(param_2,0,0x14,0);
          (**(code **)(*param_2 + 0xfc))(param_2,0,0x12,2);
          if (iVar9 == 1) {
            (**(code **)(*param_2 + 0xfc))(param_2,0,1,7);
            (**(code **)(*param_2 + 0xfc))(param_2,0,2,2);
            (**(code **)(*param_2 + 0xfc))(param_2,0,3,3);
            (**(code **)(*param_2 + 0xfc))(param_2,0,4,7);
            (**(code **)(*param_2 + 0xfc))(param_2,0,5,2);
            (**(code **)(*param_2 + 0xfc))(param_2,0,6,3);
            (**(code **)(*param_2 + 0xfc))(param_2,1,1,1);
            (**(code **)(*param_2 + 0xfc))(param_2,1,4,1);
            uVar13 = 1;
          }
          else {
            (**(code **)(*param_2 + 0xfc))(param_2,0,1,4);
            (**(code **)(*param_2 + 0xfc))(param_2,0,2,2);
            (**(code **)(*param_2 + 0xfc))(param_2,0,3,1);
            (**(code **)(*param_2 + 0xfc))(param_2,0,4,2);
            (**(code **)(*param_2 + 0xfc))(param_2,0,5,2);
            (**(code **)(*param_2 + 0xfc))(param_2,0,6,2);
            (**(code **)(*param_2 + 0xfc))(param_2,1,1,7);
            (**(code **)(*param_2 + 0xfc))(param_2,1,2,1);
            (**(code **)(*param_2 + 0xfc))(param_2,1,3,3);
            (**(code **)(*param_2 + 0xfc))(param_2,1,4,7);
            (**(code **)(*param_2 + 0xfc))(param_2,1,5,1);
            (**(code **)(*param_2 + 0xfc))(param_2,1,6,3);
            (**(code **)(*param_2 + 0xfc))(param_2,2,1,1);
            (**(code **)(*param_2 + 0xfc))(param_2,2,4,1);
            uVar13 = 1;
          }
          goto LAB_00424511;
        }
        break;
      case 0x10:
      case 0x11:
        if (iVar9 != iStack_164) {
          piStack_14c = (int *)0x0;
          (**(code **)(*param_2 + 0xfc))(param_2,0,0x13,0);
          (**(code **)(*param_2 + 0xfc))(param_2,0,0x14,0);
          (**(code **)(*param_2 + 0xfc))(param_2,0,0x12,2);
          iStack_174 = 0;
          (**(code **)(*param_2 + 0xfc))(param_2,1,0x13,0);
          (**(code **)(*param_2 + 0xfc))(param_2,1,0x14,0);
          (**(code **)(*param_2 + 0xfc))(param_2,1,0x12,2);
          (**(code **)(*param_2 + 0xfc))(param_2,0,1,7);
          (**(code **)(*param_2 + 0xfc))(param_2,0,2,2);
          (**(code **)(*param_2 + 0xfc))(param_2,0,3,3);
          (**(code **)(*param_2 + 0xfc))(param_2,0,4,7);
          (**(code **)(*param_2 + 0xfc))(param_2,0,5,2);
          (**(code **)(*param_2 + 0xfc))(param_2,0,6,3);
          (**(code **)(*param_2 + 0xfc))(param_2,1,1,4);
          (**(code **)(*param_2 + 0xfc))(param_2,1,2,1);
          (**(code **)(*param_2 + 0xfc))(param_2,1,3,2);
          (**(code **)(*param_2 + 0xfc))(param_2,1,4,2);
          (**(code **)(*param_2 + 0xfc))(param_2,1,5,1);
          (**(code **)(*param_2 + 0xfc))(param_2,1,6,2);
          (**(code **)(*param_2 + 0xfc))(param_2,1,0xd,3);
          (**(code **)(*param_2 + 0xfc))(param_2,1,0xe,3);
          (**(code **)(*param_2 + 0xfc))(param_2,2,1,1);
          (**(code **)(*param_2 + 0xfc))(param_2,2,4,1);
          (**(code **)(*param_2 + 0xf4))(param_2,1,*(undefined4 *)(param_1 + 0x18fc));
          uVar13 = 2;
          goto LAB_00424511;
        }
      }
      if ((1 < *(int *)(iVar10 + 0x18)) && (*(int *)(iVar10 + 0x18) < 0x12)) {
        iVar9 = *(int *)(iVar10 + 0x14);
        if (iVar9 == 0) {
          if (*(short *)(iVar10 + 0x1c) != -1) {
            iVar9 = FUN_00410a40(0);
            goto LAB_00424546;
          }
          (**(code **)(*param_2 + 0xa8))(param_2,piStack_15c);
LAB_0042458e:
          (**(code **)(*param_2 + 0xf4))(param_2,0,0);
        }
        else {
          (**(code **)(*param_2 + 0xa8))(param_2,piStack_15c);
LAB_00424546:
          if (iVar9 == 0) goto LAB_0042458e;
          (**(code **)(iVar9 + 4))(param_2,0);
        }
        (**(code **)(*param_2 + 200))(param_2,0x3c,*(undefined4 *)(iVar10 + 0x10));
      }
      switch(*(undefined4 *)(iVar10 + 0x18)) {
      case 0:
      case 2:
      case 4:
      case 6:
      case 8:
      case 10:
      case 0xc:
      case 0xe:
      case 0x10:
        (**(code **)(*param_2 + 200))(param_2,7,1);
        break;
      case 1:
      case 3:
      case 5:
      case 7:
      case 9:
      case 0xb:
      case 0xd:
      case 0xf:
      case 0x11:
        (**(code **)(*param_2 + 200))(param_2,7,0);
      }
      iStack_164 = *(int *)(iVar10 + 0x18);
      uStack_160 = 0;
      uVar16 = uVar15;
      iVar9 = FUN_0041d0a0(*(int *)(*(int *)(param_1 + 0xe8) + uVar15 * 4) * 3,&uStack_160);
      uStack_154 = 0;
      if (*(int *)(*(int *)(param_1 + 0xe8) + uVar15 * 4) != 0) {
        puVar7 = (undefined4 *)(iVar9 + 0x50);
        do {
          iVar9 = *(int *)(*(int *)(param_1 + 0xdc) + iVar5 * 4) * 0x20;
          piVar6 = (int *)(iVar9 + *(int *)(param_1 + 0xd0));
          puVar8 = (undefined4 *)
                   (*(int *)(param_1 + 0xc4) + *(int *)(iVar9 + *(int *)(param_1 + 0xd0)) * 0x28);
          puVar11 = puVar7 + -0x14;
          for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar8 = (undefined4 *)(*(int *)(param_1 + 0xc4) + (*piVar6 + 1) * 0x28);
          puVar11 = puVar7 + -10;
          for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar8 = (undefined4 *)(*(int *)(param_1 + 0xc4) + (*piVar6 + 2) * 0x28);
          puVar11 = puVar7;
          for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          uStack_154 = uStack_154 + 1;
          puVar7 = puVar7 + 0x1e;
          iVar5 = iVar5 + 1;
        } while (uStack_154 < *(uint *)(*(int *)(param_1 + 0xe8) + uVar16 * 4));
      }
      piVar6 = *(int **)(param_1 + 0x2d0);
      if (((char)piVar6[2] != '\0') && (piVar2 = (int *)*piVar6, piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x30))(piVar2);
        *(undefined1 *)(piVar6 + 2) = 0;
      }
      if ((iStack_174 == 1) || (cStack_175 == '\0')) {
        (**(code **)(*param_2 + 200))(param_2,0x89,0);
      }
      else {
        (**(code **)(*param_2 + 200))(param_2,0x89,1);
      }
      (**(code **)(*param_2 + 0x118))
                (param_2,4,iVar5,*(undefined4 *)(*(int *)(param_1 + 0xe8) + iStack_174 * 4));
      uVar15 = iStack_174 + 1;
    } while (uVar15 < *(uint *)(param_1 + 0xf0));
  }
  if ((*(char *)(param_1 + 0x21e4) != '\0') && (cStack_175 != '\0')) {
    (**(code **)(*param_2 + 0xb8))(param_2,0,0);
    (**(code **)(*param_2 + 200))(param_2,0x89,0);
    (**(code **)(*param_2 + 200))(param_2,0x1d,0);
    (**(code **)(*param_2 + 200))(param_2,0x8e,0);
  }
  (**(code **)(*param_2 + 200))(param_2,0x1c,uStack_158);
  (**(code **)(*param_2 + 0xfc))(param_2,1,0xd,1);
  (**(code **)(*param_2 + 0xfc))(param_2,1,0xe,1);
  (**(code **)(*param_2 + 200))(param_2,7,1);
  (**(code **)(*param_2 + 200))(param_2,0xf,0);
  (**(code **)(*param_2 + 200))(param_2,0x1b,0);
  (**(code **)(*param_2 + 200))(param_2,0x16,3);
  (**(code **)(*param_2 + 200))(param_2,0xe,1);
  return *(undefined4 *)(param_1 + 0xe4);
}




/* Function: FUN_00424880 */

void __thiscall FUN_00424880(int param_1,int param_2)

{
  bool bVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  
  this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
         (param_2 + 0x10);
  bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                    (this);
  if ((!bVar1) && (FUN_00420ca0(&param_2,this), param_2 != *(int *)(param_1 + 0x44))) {
    FUN_00422690(&param_2,param_2);
  }
  return;
}




/* Function: FUN_004248d0 */

void __fastcall FUN_004248d0(int param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  undefined4 *puVar2;
  int *piVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  
  puVar2 = *(undefined4 **)(param_1 + 0xf0);
  if (puVar2 != *(undefined4 **)(param_1 + 0xf4)) {
    do {
      (**(code **)(*(int *)*puVar2 + 0x10))();
      puVar2 = puVar2 + 2;
    } while (puVar2 != *(undefined4 **)(param_1 + 0xf4));
  }
  if (*(int **)(param_1 + 0xe8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xe8) + 0x10))();
  }
  if (*(int **)(param_1 + 0xe4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xe4) + 0x10))();
  }
  piVar3 = *(int **)(param_1 + 0xf0);
  if (piVar3 != *(int **)(param_1 + 0xf4)) {
    do {
      (**(code **)(*(int *)*piVar3 + 0x34))(DAT_005b5f2c);
      if (((char)piVar3[1] != '\0') && ((int *)*piVar3 != (int *)0x0)) {
        (**(code **)(*(int *)*piVar3 + 0xc))(1);
      }
      *piVar3 = 0;
      piVar3 = piVar3 + 2;
    } while (piVar3 != *(int **)(param_1 + 0xf4));
  }
  if (*(int **)(param_1 + 0xe8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xe8) + 0xc))(1);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int **)(param_1 + 0xe4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xe4) + 0xc))(1);
  }
  *(undefined4 *)(param_1 + 0xe4) = 0;
  if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0xf0));
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  this = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
          (param_1 + 0x100);
  if (this != (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
    pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              (param_1 + 0x104);
    for (; this != pbVar1; this = this + 0x20) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x100));
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  return;
}




/* Function: FUN_00424b10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00424b10(int param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int *local_5c;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057b095;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0052be00();
  local_5c = (int *)0x0;
  if (*(int **)(param_1 + 0xe0) != (int *)0x0) {
    local_5c = (int *)(**(code **)(**(int **)(param_1 + 0xe0) + 0x8c))();
  }
  piVar8 = *(int **)(param_1 + 0x70);
  if (piVar8 != *(int **)(param_1 + 0x74)) {
    do {
      if (((*(int *)(*piVar8 + 4) == 0) ||
          ((iVar5 = *(int *)(*(int *)(*piVar8 + 4) + 0xbc), iVar5 != 0 &&
           (iVar5 = FUN_004e4644(iVar5), iVar5 != 0)))) &&
         ((*(int *)*piVar8 == 0 ||
          ((iVar5 = *(int *)(*(int *)*piVar8 + 0xbc), iVar5 != 0 &&
           (iVar5 = FUN_004e4644(iVar5), iVar5 != 0)))))) {
        piVar1 = (int *)*piVar8;
        iVar5 = piVar1[1];
        if (iVar5 == 0) {
          iVar5 = *piVar1;
          if (iVar5 == 0) {
LAB_00424c5f:
            piVar2 = (int *)*piVar1;
            piVar1 = (int *)piVar1[1];
            FUN_0052be00();
            FUN_0052be00();
            (**(code **)(*piVar2 + 0x14))(&fStack_54);
            (**(code **)(*piVar1 + 0x14))(&fStack_40);
            if (((((fStack_54 <= fStack_30) && (fStack_3c <= fStack_48)) && (fStack_50 <= fStack_2c)
                 ) && ((fStack_38 <= fStack_44 && (fStack_4c <= fStack_28)))) &&
               (fStack_34 <= fStack_40)) {
              puVar6 = operator_new(0x28,(nothrow_t *)&DAT_005b6164);
              puVar7 = (undefined4 *)0x0;
              if (puVar6 != (undefined4 *)0x0) {
                uVar3 = *(undefined4 *)(param_1 + 100);
                uVar4 = *(undefined4 *)(param_1 + 0x68);
                *puVar6 = &PTR_FUN_00587cfc;
                puVar6[2] = 0;
                puVar6[3] = 0;
                puVar6[4] = 0;
                puVar6[7] = 10;
                puVar6[6] = uVar4;
                puVar6[8] = 0x3c23d70a;
                puVar6[9] = uVar3;
                *(undefined1 *)(puVar6 + 5) = 0;
                puVar7 = puVar6;
              }
              uStack_4 = 0xffffffff;
              iVar5 = (**(code **)(*piVar2 + 8))(piVar1,puVar7);
              if (iVar5 != 0) {
                (**(code **)(*piVar2 + 0x10))(param_2,piVar1,puVar7);
                (**(code **)(*piVar1 + 0x10))(puStack_8,piVar2,puVar7);
                if (((piVar2[0x2f] != 0) && (iVar5 = FUN_004e4644(piVar2[0x2f]), iVar5 != 0)) &&
                   ((piVar1[0x2f] != 0 && (iVar5 = FUN_004e4644(piVar1[0x2f]), iVar5 != 0)))) {
                  if ((char)piVar2[2] == '\0') {
LAB_00424de0:
                    if ((char)piVar1[2] == '\0') goto LAB_00424df7;
                    iVar9 = piVar1[0x2f];
                    iVar5 = 0;
                  }
                  else if ((char)piVar1[2] == '\0') {
                    if ((char)piVar2[2] == '\0') goto LAB_00424de0;
                    iVar9 = piVar2[0x2f];
                    iVar5 = 0;
                  }
                  else {
                    iVar5 = piVar1[0x2f];
                    iVar9 = piVar2[0x2f];
                  }
                  FUN_00431890(iVar9,iVar5);
                }
              }
LAB_00424df7:
              if (puVar7 != (undefined4 *)0x0) {
                (**(code **)*puVar7)(1);
              }
            }
          }
          else {
            if (local_5c != (int *)0x0) {
              (**(code **)(*local_5c + 0x2c))(param_2,iVar5);
            }
            puVar7 = *(undefined4 **)(param_1 + 0x90);
            if (puVar7 != *(undefined4 **)(param_1 + 0x94)) {
              do {
                (**(code **)(*(int *)*puVar7 + 0x2c))(param_2,iVar5);
                puVar7 = puVar7 + 1;
              } while (puVar7 != *(undefined4 **)(param_1 + 0x94));
            }
          }
        }
        else {
          if (*piVar1 != 0) goto LAB_00424c5f;
          if (local_5c != (int *)0x0) {
            (**(code **)(*local_5c + 0x2c))(param_2,iVar5);
          }
          puVar7 = *(undefined4 **)(param_1 + 0x90);
          if (puVar7 != *(undefined4 **)(param_1 + 0x94)) {
            do {
              (**(code **)(*(int *)*puVar7 + 0x2c))(param_2,iVar5);
              puVar7 = puVar7 + 1;
            } while (puVar7 != *(undefined4 **)(param_1 + 0x94));
          }
        }
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != *(int **)(param_1 + 0x74));
  }
  param_2 = *(float *)((int)param_2 + 0xa8);
  if ((float)_DAT_00587db8 < param_2) {
    param_2 = 0.1;
  }
  if (param_2 < (float)_DAT_00587db0) {
    param_2 = 0.02;
  }
  FUN_004e3f90(*(undefined4 *)(param_1 + 100),param_2);
  FUN_004e42b8(*(undefined4 *)(param_1 + 0x68));
  ExceptionList = pvStack_c;
  return 1;
}




/* Function: FUN_00424e90 */

void FUN_00424e90(undefined4 param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_24 [28];
  
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_24);
  FUN_00422790(param_1);
  return;
}




/* Function: FUN_00424ec0 */

void __thiscall FUN_00424ec0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 5) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 5))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00420810(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x20;
    return;
  }
  FUN_00421a90(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_00424f30 */

void __thiscall FUN_00424f30(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 5) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 5))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_0041fe90(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x20;
    return;
  }
  FUN_00421da0(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_00424fa0 */

void __thiscall
FUN_00424fa0(undefined4 *param_1,undefined4 **param_2,undefined1 *param_3,undefined4 **param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_3;
  puVar1 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057b0a0;
  local_10 = ExceptionList;
  local_34 = param_4[1];
  local_38 = *param_4;
  local_30 = param_4[2];
  local_2c = param_4[3];
  local_28 = param_4[4];
  local_24 = param_4[5];
  local_20 = param_4[6];
  local_1c = param_4[7];
  local_18 = param_4[8];
  iVar5 = param_1[1];
  local_14 = &stack0xffffffbc;
  if (iVar5 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = (undefined1 *)((param_1[3] - iVar5) / 0x24);
  }
  if (param_3 != (undefined1 *)0x0) {
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (param_1[2] - iVar5) / 0x24;
    }
    if ((undefined1 *)(0x71c71c7U - iVar4) < param_3) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffbc;
      FUN_0041d2d0();
      ExceptionList = local_10;
      return;
    }
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (param_1[2] - iVar5) / 0x24;
    }
    if (puVar6 < param_3 + iVar4) {
      if ((undefined1 *)(0x71c71c7 - ((uint)puVar6 >> 1)) < puVar6) {
        puVar6 = (undefined1 *)0x0;
      }
      else {
        puVar6 = puVar6 + ((uint)puVar6 >> 1);
      }
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (param_1[2] - iVar5) / 0x24;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xffffffbc;
      if (puVar6 < param_3 + iVar5) {
        ExceptionList = &local_10;
        local_14 = &stack0xffffffbc;
        iVar5 = FUN_0041d2a0();
        puVar6 = puVar2 + iVar5;
      }
      local_4c = (undefined4 *)0x4250e4;
      param_4 = (undefined4 **)FUN_00493c27();
      local_8 = 0;
      local_50 = param_4;
      local_4c = param_1;
      param_3 = (undefined1 *)FUN_004208b0(param_1[1],param_2);
      local_50 = &local_38;
      local_4c = param_1;
      FUN_00421610(param_3,puVar2);
      local_50 = (undefined4 *)((int)param_3 + (int)puVar2 * 0x24);
      local_4c = param_1;
      FUN_004208b0(param_2,param_1[2]);
      if (param_1[1] == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(param_1[2] - param_1[1]) / 0x24;
      }
      iVar4 = param_1[1];
      if (iVar4 != 0) {
        for (; iVar4 != param_1[2]; iVar4 = iVar4 + 0x24) {
        }
                    /* WARNING: Subroutine does not return */
        local_4c = (undefined4 *)&UNK_00425190;
        operator_delete((void *)param_1[1]);
      }
      param_1[3] = param_4 + (int)puVar6 * 9;
      param_1[2] = param_4 + (int)(puVar2 + iVar5) * 9;
      param_1[1] = param_4;
      ExceptionList = local_10;
      return;
    }
    param_4 = (undefined4 **)param_1[2];
    local_4c = param_4;
    if ((undefined1 *)(((int)param_4 - (int)param_2) / 0x24) < param_3) {
      local_50 = param_2;
      ExceptionList = &local_10;
      param_2 = (undefined4 **)((int)param_3 * 0x24);
      param_4 = &local_50;
      local_14 = &stack0xffffffbc;
      FUN_00422130();
      local_50 = (undefined4 *)param_1[2];
      local_4c = (undefined4 *)(puVar2 + -(((int)local_50 - (int)puVar1) / 0x24));
      local_8 = 2;
      FUN_00422970();
      iVar5 = param_1[2];
      param_1[2] = iVar5 + (int)param_2;
      local_4c = (undefined4 *)((iVar5 + (int)param_2) - (int)param_2);
    }
    else {
      param_2 = param_4 + (int)param_3 * -9;
      ExceptionList = &local_10;
      local_50 = param_2;
      uVar3 = FUN_00422130();
      param_1[2] = uVar3;
      param_3 = &stack0xffffffb8;
      param_4 = &local_4c;
      local_4c = param_2;
      local_50 = puVar1;
      param_2 = &local_50;
      FUN_0041fd30(&param_2);
      local_4c = puVar1 + (int)puVar2 * 9;
    }
    param_2 = &local_50;
    local_50 = puVar1;
    FUN_0041dec0();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004252f0 */

void __thiscall FUN_004252f0(int param_1,char *param_2,undefined4 param_3)

{
  void **ppvVar1;
  char *_Str2;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b0bb;
  local_c = ExceptionList;
  piVar3 = *(int **)(param_1 + 4);
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (piVar3 != *(int **)(param_1 + 8)) {
    do {
      ExceptionList = ppvVar1;
      if (param_2 != (char *)0x0) {
        _Str2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)*piVar3);
        iVar2 = _stricmp(param_2,_Str2);
        if (iVar2 == 0) {
          *(undefined4 *)(*piVar3 + 0x1c) = param_3;
          ExceptionList = local_c;
          return;
        }
      }
      piVar3 = piVar3 + 1;
      ppvVar1 = ExceptionList;
    } while (piVar3 != *(int **)(param_1 + 8));
  }
  iVar2 = FUN_00493c27(0x20);
  local_4 = 0;
  if (iVar2 == 0) {
    param_3 = 0;
  }
  else {
    param_3 = FUN_0041d970(param_2,param_3);
  }
  iVar2 = *(int *)(param_1 + 4);
  local_4 = 0xffffffff;
  if ((iVar2 == 0) ||
     ((uint)(*(int *)(param_1 + 0xc) - iVar2 >> 2) <= (uint)(*(int *)(param_1 + 8) - iVar2 >> 2))) {
    FUN_00420dc0(*(undefined4 *)(param_1 + 8),1,&param_3);
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
    FUN_004520c0(iVar2,1,&param_3,param_1,param_3);
    *(int *)(param_1 + 8) = iVar2 + 4;
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00425400 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FUN_00425400(int param_1,undefined4 param_2,undefined4 param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_retaddr;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_78 [20];
  undefined4 uStack_64;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_60;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_40 [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_20 [28];
  uint local_4;
  
  pbVar1 = param_4;
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  pbStack_60 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               0x425426;
  iVar2 = FUN_0041f960();
  if (iVar2 == 0) {
    pbStack_60 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 0x42544e;
    FUN_00422720();
    param_4 = abStack_78;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_78,pbVar1);
    FUN_0041de50(local_40);
    pbStack_60 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 0x42547b;
    FUN_00424f30();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_40);
    pbStack_60 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 0x42548d;
    FUN_00410a50();
    pbStack_60 = local_20;
    uStack_64 = 0x425498;
    FUN_00408950();
    pbStack_60 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &param_4;
    uStack_64 = 0x4254b2;
    FUN_00420ca0();
    if (((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
         *(undefined1 **)(param_1 + 0x21f8) == param_4) || (*(int *)(param_4 + 0x24) == 0)) {
      pbStack_60 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x4254d4;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_40,"default");
      pbStack_60 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &param_4;
      uStack_64 = 0x4254e5;
      FUN_00420ca0();
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_40);
    }
    pbStack_60 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 0x42550a;
    FUN_00410a70();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_20);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




/* Function: FUN_00425530 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00425530(char *param_1,undefined4 param_2)

{
  uint unaff_retaddr;
  undefined4 local_30;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b0d8;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_2c,param_1);
  local_30 = param_2;
  FUN_00424ec0(&local_30);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004273b0 */

undefined4 __thiscall FUN_004273b0(int param_1,undefined4 param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  int *piVar3;
  undefined1 local_10 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_8;
  undefined4 local_4;
  
  piVar3 = (int *)0x0;
  local_c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  local_8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  local_4 = 0;
  FUN_00409340(*(undefined4 *)(param_1 + 0x3c));
  if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) {
    piVar3 = (int *)**(undefined4 **)(param_1 + 0x38);
  }
  if (piVar3 != *(int **)(param_1 + 0x38)) {
    do {
      FUN_0040ae90(piVar3 + 2);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 0x38));
  }
  FUN_00422510(local_10);
  pbVar2 = local_8;
  pbVar1 = local_c;
  this = local_c;
  if (local_c != (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0
     ) {
    for (; this != pbVar2; this = this + 0x1c) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(pbVar1);
  }
  return param_2;
}




/* Function: FUN_00427440 */

void __thiscall FUN_00427440(int param_1,int param_2)

{
  float10 fVar1;
  undefined4 uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c [28];
  
  if (*(char *)(param_2 + 0xb0) == '\0') {
    *(float *)(param_1 + 0x134) = *(float *)(param_2 + 0xa8) + *(float *)(param_1 + 0x134);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_1c,"G_GRAVITY");
    uVar2 = 0;
    fVar1 = (float10)FUN_0042dc70(local_1c);
    FUN_004e421c(*(undefined4 *)(param_1 + 100),0,(float)fVar1,uVar2);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
    FUN_00424b10(param_2);
  }
  return;
}




/* Function: FUN_004274c0 */

void __fastcall FUN_004274c0(int param_1)

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
  FUN_00452ff0(&local_4,uVar2,puVar1);
  local_4 = *(int *)(param_1 + 8);
  FUN_00422920(9,&local_4);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}




/* Function: FUN_00427510 */

void __thiscall FUN_00427510(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(param_1 + 8) - iVar1) / 0x24;
  }
  if (uVar4 < param_2) {
    FUN_00424fa0();
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(param_1 + 8), param_2 < (uint)((iVar2 - iVar1) / 0x24))) &&
     (iVar1 + param_2 * 0x24 != iVar2)) {
    uVar3 = FUN_0041dfa0(iVar2);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  return;
}




/* Function: FUN_004275d0 */

/* WARNING: Removing unreachable block (ram,0x004276e8) */

void __thiscall
FUN_004275d0(int param_1,int *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  int *piVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined4 *puVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar9;
  int iVar10;
  uint uVar11;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar12;
  undefined4 *puVar13;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_4;
  
  uVar11 = *(uint *)(param_1 + 0x24);
  if (uVar11 <= *(uint *)(param_1 + 0xc) >> 2) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
    }
    if (uVar11 < iVar7 - 1U) {
      if (*(uint *)(param_1 + 0x20) < uVar11) {
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) * 2 + 1;
      }
    }
    else {
      if (*(int *)(param_1 + 0x14) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
      }
      *(int *)(param_1 + 0x20) = iVar7 * 2 + -3;
      FUN_00421800(iVar7 * 2 + -1,*(undefined4 *)(param_1 + 8));
    }
    uVar11 = (*(int *)(param_1 + 0x24) - (*(uint *)(param_1 + 0x20) >> 1)) - 1;
    pbVar9 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              (*(int *)(param_1 + 0x14) + uVar11 * 4);
    if (pbVar9 != *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   (*(int *)(param_1 + 0x14) + 4 + uVar11 * 4)) {
      do {
        uVar8 = FUN_00408900(pbVar9 + 8);
        if ((uVar8 & *(uint *)(param_1 + 0x20)) == uVar11) {
          pbVar12 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)pbVar9;
        }
        else {
          for (uVar8 = *(uint *)(param_1 + 0x24);
              (uVar11 < uVar8 &&
              (piVar1 = (int *)(*(int *)(param_1 + 0x14) + uVar8 * 4),
              *piVar1 == *(int *)(param_1 + 8))); uVar8 = uVar8 - 1) {
            *piVar1 = (int)pbVar9;
          }
          pbVar12 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)pbVar9;
          local_4 = pbVar12;
          if (pbVar12 ==
              *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
               (param_1 + 8)) break;
          pbVar2 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(*(int *)(param_1 + 0x14) + uVar11 * 4);
          for (uVar8 = uVar11;
              (pbVar9 == pbVar2 &&
              (*(undefined4 *)(*(int *)(param_1 + 0x14) + uVar8 * 4) =
                    **(undefined4 **)(*(int *)(param_1 + 0x14) + uVar8 * 4), uVar8 != 0));
              uVar8 = uVar8 - 1) {
            pbVar2 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)(*(int *)(param_1 + 0x14) + -4 + uVar8 * 4);
          }
          pbVar2 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(param_1 + 8);
          if (((pbVar9 != *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            **)(param_1 + 8)) && (pbVar2 != pbVar9)) &&
             (pbVar4 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         **)pbVar9, pbVar2 != pbVar4)) {
            **(undefined4 **)(pbVar9 + 4) = pbVar4;
            **(undefined4 **)(pbVar4 + 4) = pbVar2;
            **(undefined4 **)(pbVar2 + 4) = pbVar9;
            uVar5 = *(undefined4 *)(pbVar2 + 4);
            *(undefined4 *)(pbVar2 + 4) = *(undefined4 *)(pbVar4 + 4);
            *(undefined4 *)(pbVar4 + 4) = *(undefined4 *)(pbVar9 + 4);
            *(undefined4 *)(pbVar9 + 4) = uVar5;
          }
          *(undefined4 *)(*(int *)(param_1 + 0x14) + 4 + *(int *)(param_1 + 0x24) * 4) =
               *(undefined4 *)(param_1 + 8);
        }
        pbVar9 = pbVar12;
      } while (pbVar12 !=
               *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (*(int *)(param_1 + 0x14) + 4 + uVar11 * 4));
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  uVar11 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::begin(param_3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::end(param_3);
  for (pbVar9 = param_3; pbVar9 != local_4; pbVar9 = pbVar9 + 1) {
    uVar11 = uVar11 * 2 ^ (int)(char)*pbVar9;
  }
  uVar11 = *(uint *)(param_1 + 0x20) & uVar11;
  if (*(uint *)(param_1 + 0x24) <= uVar11) {
    uVar11 = uVar11 + (-1 - (*(uint *)(param_1 + 0x20) >> 1));
  }
  iVar7 = uVar11 * 4;
  puVar13 = *(undefined4 **)(*(int *)(param_1 + 0x14) + 4 + iVar7);
  if (puVar13 != *(undefined4 **)(*(int *)(param_1 + 0x14) + iVar7)) {
    do {
      puVar13 = (undefined4 *)puVar13[1];
      bVar6 = std::operator<(param_3,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                      *)(puVar13 + 2));
      if (!bVar6) {
        bVar6 = std::operator<((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                *)(puVar13 + 2),param_3);
        if (!bVar6) {
          *param_2 = (int)puVar13;
          *(undefined1 *)(param_2 + 1) = 0;
          return;
        }
        puVar13 = (undefined4 *)*puVar13;
        break;
      }
    } while (puVar13 != *(undefined4 **)(iVar7 + *(int *)(param_1 + 0x14)));
  }
  iVar10 = FUN_0041fb60(puVar13,puVar13[1],param_3);
  FUN_0041fbf0(1);
  puVar13[1] = iVar10;
  **(int **)(iVar10 + 4) = iVar10;
  puVar3 = *(undefined4 **)(iVar7 + *(int *)(param_1 + 0x14));
  iVar10 = puVar13[1];
  while ((puVar13 == puVar3 && (*(int *)(iVar7 + *(int *)(param_1 + 0x14)) = iVar10, uVar11 != 0)))
  {
    uVar11 = uVar11 - 1;
    iVar7 = uVar11 * 4;
    puVar3 = *(undefined4 **)(iVar7 + *(int *)(param_1 + 0x14));
  }
  *param_2 = iVar10;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}




/* Function: FUN_00428b00 */

void FUN_00428b00(undefined4 param_1)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)&local_28;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_00427510(param_1);
  return;
}




/* Function: FUN_00428b30 */

int FUN_00428b30(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
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
  puStack_8 = &LAB_0057b6d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c,param_1);
  local_10 = 0;
  local_4 = 0;
  piVar2 = (int *)FUN_004275d0(local_34,local_2c);
  iVar1 = *piVar2;
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
  ExceptionList = local_c;
  return iVar1 + 0x24;
}




/* Function: FUN_00428ba0 */

undefined1 * __thiscall FUN_00428ba0(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b66b;
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
  FUN_004220b0(9,&param_2);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00429210 */

undefined4 FUN_00429210(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((DAT_005b5fe8 & 1) == 0) {
    DAT_005b5fe8 = DAT_005b5fe8 | 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_005b5fd0);
    _atexit((_func_4879 *)&LAB_00580c10);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005b5fd0);
  uVar1 = FUN_004fb930();
  puVar2 = (undefined4 *)FUN_00428b30(uVar1);
  *puVar2 = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005b5fd0);
  return 1;
}




/* Function: FUN_00429280 */

undefined4 __thiscall
FUN_00429280(int *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  char cVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int *local_24;
  undefined1 local_20;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c [28];
  
  local_24 = param_1;
  if ((DAT_005b6004 & 1) == 0) {
    DAT_005b6004 = DAT_005b6004 | 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_005b5fec);
    _atexit((_func_4879 *)&LAB_00580c20);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005b5fec);
  this = param_2;
  FUN_00420ca0(&param_2,param_2);
  if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)param_1[0x5a]
      == param_2) {
    pvVar2 = operator_new(0x2d0,(nothrow_t *)&DAT_005b6164);
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_00445ff0(this);
    }
    *(undefined1 *)(piVar3 + 0xaa) = (undefined1)param_6;
    iVar4 = FUN_0042dbb0();
    if (iVar4 != 0) {
      FUN_00412e58(iVar4,"template_OnLoad");
      pcVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(this);
      FUN_00412d30(iVar4,pcVar5);
      FUN_00412798(iVar4,1,0);
    }
    uVar7 = param_4;
    uVar11 = param_5;
    uVar6 = FUN_00411994(local_1c,this,&DAT_00587e74,param_1,param_4,param_5);
    cVar1 = FUN_00446bd0(param_3,uVar6,param_1,uVar7,uVar11);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
    if (cVar1 == '\0') {
      pcVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(this);
      uVar7 = FUN_0041e5b0("Warning: Can\'t load template [%s]",pcVar5);
      FUN_0040a410(uVar7);
      (**(code **)(*piVar3 + 0xc))(1);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005b5fec);
      return 0;
    }
    puVar8 = (undefined4 *)FUN_00428b30(this);
    *puVar8 = piVar3;
    local_20 = 0;
    local_24 = piVar3;
    FUN_00422720(&local_24);
  }
  else {
    if (*(int *)(param_3 + 0xf0) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(int *)(param_3 + 0xf4) - *(int *)(param_3 + 0xf0) >> 3;
    }
    uVar10 = 0;
    if (uVar9 != 0) {
      piVar3 = *(int **)(param_3 + 0xf0);
      do {
        if (*(int *)(param_2 + 0x24) == *piVar3) goto LAB_00429498;
        uVar10 = uVar10 + 1;
        piVar3 = piVar3 + 2;
      } while (uVar10 < uVar9);
    }
    local_24 = *(int **)(param_2 + 0x24);
    local_20 = 0;
    FUN_00422720(&local_24);
    iVar4 = FUN_0042dbb0();
    if (iVar4 != 0) {
      FUN_00412e58(iVar4,"template_OnLoad");
      pcVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(this);
      FUN_00412d30(iVar4,pcVar5);
      FUN_00412798(iVar4,1,0);
    }
  }
LAB_00429498:
  FUN_00420ca0(&param_6,this);
  uVar7 = *(undefined4 *)(param_6 + 0x24);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005b5fec);
  return uVar7;
}




/* Function: FUN_004294d0 */

/* WARNING: Removing unreachable block (ram,0x0042955d) */
/* WARNING: Removing unreachable block (ram,0x00429560) */

void __fastcall FUN_004294d0(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_4;
  
  if (*(undefined4 **)(param_1 + 0x21f8) == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)**(undefined4 **)(param_1 + 0x21f8);
  }
  local_4 = param_1;
  if (piVar4 != *(int **)(param_1 + 0x21f8)) {
    do {
      pvVar1 = (void *)piVar4[9];
      if (pvVar1 != (void *)0x0) {
        FUN_0041dd30();
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      piVar4[9] = 0;
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 0x21f8));
  }
  puVar2 = *(undefined4 **)(param_1 + 0x21f8);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  FUN_00452ff0(&local_4,uVar3,puVar2);
  local_4 = *(int *)(param_1 + 0x21f8);
  if (*(int *)(param_1 + 0x2204) != *(int *)(param_1 + 0x2208)) {
    *(int *)(param_1 + 0x2208) = *(int *)(param_1 + 0x2204);
  }
  FUN_00420dc0(*(undefined4 *)(param_1 + 0x2204),9,&local_4);
  *(undefined4 *)(param_1 + 0x2210) = 1;
  *(undefined4 *)(param_1 + 0x2214) = 1;
  return;
}




/* Function: FUN_004295a0 */

int __thiscall FUN_004295a0(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = param_2;
  FUN_00420ca0(&param_2,param_2);
  if ((*(int *)(param_1 + 0x21f8) == param_2) || (iVar5 = *(int *)(param_2 + 0x24), iVar5 == 0)) {
    pvVar2 = operator_new(0xbc,(nothrow_t *)&DAT_005b6164);
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0041e140();
    }
    puVar4 = (undefined4 *)FUN_00428b30(iVar1);
    *puVar4 = uVar3;
    FUN_00420ca0(&param_2,iVar1);
    if (*(int *)(param_1 + 0x21f8) != param_2) {
      return *(int *)(param_2 + 0x24);
    }
    iVar5 = 0;
  }
  return iVar5;
}




/* Function: FUN_00429630 */

/* WARNING: Removing unreachable block (ram,0x00429748) */

void __thiscall
FUN_00429630(int param_1,int *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  int *piVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined4 *puVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar9;
  int iVar10;
  uint uVar11;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar12;
  undefined4 *puVar13;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_4;
  
  uVar11 = *(uint *)(param_1 + 0x24);
  if (uVar11 <= *(uint *)(param_1 + 0xc) >> 2) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
    }
    if (uVar11 < iVar7 - 1U) {
      if (*(uint *)(param_1 + 0x20) < uVar11) {
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) * 2 + 1;
      }
    }
    else {
      if (*(int *)(param_1 + 0x14) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
      }
      *(int *)(param_1 + 0x20) = iVar7 * 2 + -3;
      FUN_00421a10(iVar7 * 2 + -1,*(undefined4 *)(param_1 + 8));
    }
    uVar11 = (*(int *)(param_1 + 0x24) - (*(uint *)(param_1 + 0x20) >> 1)) - 1;
    pbVar9 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              (*(int *)(param_1 + 0x14) + uVar11 * 4);
    if (pbVar9 != *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   (*(int *)(param_1 + 0x14) + 4 + uVar11 * 4)) {
      do {
        uVar8 = FUN_00408900(pbVar9 + 8);
        if ((uVar8 & *(uint *)(param_1 + 0x20)) == uVar11) {
          pbVar12 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)pbVar9;
        }
        else {
          for (uVar8 = *(uint *)(param_1 + 0x24);
              (uVar11 < uVar8 &&
              (piVar1 = (int *)(*(int *)(param_1 + 0x14) + uVar8 * 4),
              *piVar1 == *(int *)(param_1 + 8))); uVar8 = uVar8 - 1) {
            *piVar1 = (int)pbVar9;
          }
          pbVar12 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)pbVar9;
          local_4 = pbVar12;
          if (pbVar12 ==
              *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
               (param_1 + 8)) break;
          pbVar2 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(*(int *)(param_1 + 0x14) + uVar11 * 4);
          for (uVar8 = uVar11;
              (pbVar9 == pbVar2 &&
              (*(undefined4 *)(*(int *)(param_1 + 0x14) + uVar8 * 4) =
                    **(undefined4 **)(*(int *)(param_1 + 0x14) + uVar8 * 4), uVar8 != 0));
              uVar8 = uVar8 - 1) {
            pbVar2 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)(*(int *)(param_1 + 0x14) + -4 + uVar8 * 4);
          }
          pbVar2 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(param_1 + 8);
          if (((pbVar9 != *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            **)(param_1 + 8)) && (pbVar2 != pbVar9)) &&
             (pbVar4 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         **)pbVar9, pbVar2 != pbVar4)) {
            **(undefined4 **)(pbVar9 + 4) = pbVar4;
            **(undefined4 **)(pbVar4 + 4) = pbVar2;
            **(undefined4 **)(pbVar2 + 4) = pbVar9;
            uVar5 = *(undefined4 *)(pbVar2 + 4);
            *(undefined4 *)(pbVar2 + 4) = *(undefined4 *)(pbVar4 + 4);
            *(undefined4 *)(pbVar4 + 4) = *(undefined4 *)(pbVar9 + 4);
            *(undefined4 *)(pbVar9 + 4) = uVar5;
          }
          *(undefined4 *)(*(int *)(param_1 + 0x14) + 4 + *(int *)(param_1 + 0x24) * 4) =
               *(undefined4 *)(param_1 + 8);
        }
        pbVar9 = pbVar12;
      } while (pbVar12 !=
               *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (*(int *)(param_1 + 0x14) + 4 + uVar11 * 4));
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  uVar11 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::begin(param_3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::end(param_3);
  for (pbVar9 = param_3; pbVar9 != local_4; pbVar9 = pbVar9 + 1) {
    uVar11 = uVar11 * 2 ^ (int)(char)*pbVar9;
  }
  uVar11 = *(uint *)(param_1 + 0x20) & uVar11;
  if (*(uint *)(param_1 + 0x24) <= uVar11) {
    uVar11 = uVar11 + (-1 - (*(uint *)(param_1 + 0x20) >> 1));
  }
  iVar7 = uVar11 * 4;
  puVar13 = *(undefined4 **)(*(int *)(param_1 + 0x14) + 4 + iVar7);
  if (puVar13 != *(undefined4 **)(*(int *)(param_1 + 0x14) + iVar7)) {
    do {
      puVar13 = (undefined4 *)puVar13[1];
      bVar6 = std::operator<(param_3,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                      *)(puVar13 + 2));
      if (!bVar6) {
        bVar6 = std::operator<((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                *)(puVar13 + 2),param_3);
        if (!bVar6) {
          *param_2 = (int)puVar13;
          *(undefined1 *)(param_2 + 1) = 0;
          return;
        }
        puVar13 = (undefined4 *)*puVar13;
        break;
      }
    } while (puVar13 != *(undefined4 **)(iVar7 + *(int *)(param_1 + 0x14)));
  }
  iVar10 = FUN_0041fa30(puVar13,puVar13[1],param_3);
  FUN_0041fac0(1);
  puVar13[1] = iVar10;
  **(int **)(iVar10 + 4) = iVar10;
  puVar3 = *(undefined4 **)(iVar7 + *(int *)(param_1 + 0x14));
  iVar10 = puVar13[1];
  while ((puVar13 == puVar3 && (*(int *)(iVar7 + *(int *)(param_1 + 0x14)) = iVar10, uVar11 != 0)))
  {
    uVar11 = uVar11 - 1;
    iVar7 = uVar11 * 4;
    puVar3 = *(undefined4 **)(iVar7 + *(int *)(param_1 + 0x14));
  }
  *param_2 = iVar10;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}




/* Function: FUN_004298c0 */

undefined4 __fastcall FUN_004298c0(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_00428ba0((int)&uStack_4 + 3,(int)&uStack_4 + 3);
  return param_1;
}




/* Function: FUN_00429a60 */

undefined4 __thiscall
FUN_00429a60(int param_1,undefined4 param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
            undefined4 param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  undefined4 *puVar5;
  
  if ((DAT_005b6020 & 1) == 0) {
    DAT_005b6020 = DAT_005b6020 | 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_005b6008);
    _atexit((_func_4879 *)&LAB_00580c00);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005b6008);
  pbVar1 = param_3;
  bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                    (param_3);
  if (bVar2) {
LAB_00429b18:
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005b6008);
    return 0;
  }
  FUN_00420ca0(&param_3,pbVar1);
  if ((*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
        (param_1 + 0x140) == param_3) || (*(int *)(param_3 + 0x24) == 0)) {
    pvVar4 = operator_new(0xa8,(nothrow_t *)&DAT_005b6164);
    if (pvVar4 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_004fbe10(param_2,pbVar1,param_4);
    }
    cVar3 = FUN_004fb610();
    if (cVar3 != '\0') {
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(1);
      }
      goto LAB_00429b18;
    }
    FUN_00429210(puVar5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005b6008);
  return 1;
}




/* Function: FUN_00429b50 */

undefined4 * __thiscall
FUN_00429b50(undefined4 *param_1,undefined4 param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  undefined4 uVar1;
  float10 fVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c [28];
  
  *param_1 = &PTR_LAB_00587ebc;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_004298c0();
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = param_2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x2a),param_3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x31),param_4);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0xffffffff;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  DAT_005b5f30 = freopen("stderr.txt","w",(FILE *)(_iob_exref + 0x40));
  uVar1 = FUN_004e3f58();
  param_1[0x19] = uVar1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,"CFM");
  fVar2 = (float10)FUN_0042dc70(local_1c);
  FUN_004e4204(param_1[0x19],(float)fVar2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,"ERP");
  fVar2 = (float10)FUN_0042dc70(local_1c);
  FUN_004e4210(param_1[0x19],(float)fVar2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  uVar1 = FUN_004e4574(0);
  param_1[0x1a] = uVar1;
  return param_1;
}




/* Function: FUN_00429d20 */

void __fastcall FUN_00429d20(undefined4 *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  
  *param_1 = &PTR_LAB_00587ebc;
  if ((HANDLE)param_1[0x28] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x28]);
    param_1[0x28] = 0;
  }
  FUN_004248d0();
  if ((undefined4 *)param_1[0x1c] != (undefined4 *)param_1[0x1d]) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)param_1[0x1c]);
  }
  if ((void *)param_1[0x1c] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x1c]);
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  if ((void *)param_1[0x20] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x20]);
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  FUN_004e4238(param_1[0x19]);
  FUN_004e4448(param_1[0x1a]);
  fclose(DAT_005b5f30);
  if ((void *)param_1[0x4a] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x4a]);
  }
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  if ((void *)param_1[0x46] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x46]);
  }
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
         param_1[0x40];
  if (this != (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
    pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             param_1[0x41];
    for (; this != pbVar1; this = this + 0x20) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x40]);
  }
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  if ((void *)param_1[0x3c] == (void *)0x0) {
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_1 + 0x31));
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_1 + 0x2a));
    if ((void *)param_1[0x24] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_1[0x24]);
    }
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    if ((void *)param_1[0x20] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_1[0x20]);
    }
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    if ((void *)param_1[0x1c] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_1[0x1c]);
    }
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    FUN_00469910();
    if ((void *)param_1[0xc] == (void *)0x0) {
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      if ((void *)param_1[7] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)param_1[7]);
      }
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      if ((void *)param_1[2] == (void *)0x0) {
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        return;
      }
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_1[2]);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0xc]);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_1[0x3c]);
}




/* Function: FUN_00429f50 */

int FUN_00429f50(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_1)

{
  int iVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  int *piVar3;
  undefined1 local_68 [8];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_60 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b6c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
           basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_60);
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44,param_1);
  local_4._0_1_ = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,pbVar2);
  local_4._0_1_ = 2;
  piVar3 = (int *)FUN_00429630(local_68,local_44);
  iVar1 = *piVar3;
  local_4._0_1_ = 3;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_60);
  ExceptionList = local_c;
  return iVar1 + 0x24;
}




/* Function: FUN_0042a4a0 */

void FUN_0042a4a0(undefined4 param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  
  this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
         FUN_00429f50(param_1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (this,param_2);
  return;
}




/* Function: FUN_0042a4c0 */

void FUN_0042a4c0(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                    ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(param_1 + 0x10));
  if (!bVar1) {
    piVar2 = (int *)FUN_00428b30((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                  *)(param_1 + 0x10));
    *piVar2 = param_1;
  }
  return;
}




/* Function: FUN_0042a4f0 */

void __fastcall FUN_0042a4f0(int param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_retaddr;
  undefined4 uStack_14;
  uint local_10;
  undefined1 auStack_c [8];
  uint local_4;
  
  if ((*(int *)(param_1 + 0x118) != 0) &&
     (*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118) >> 3 != 0)) {
    for (local_10 = 0;
        (*(int *)(param_1 + 0x118) != 0 &&
        (local_10 < (uint)(*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118) >> 3)));
        local_10 = local_10 + 1) {
      iVar7 = local_10 * 8;
      FUN_00422720(*(int *)(param_1 + 0x118) + iVar7);
      *(int *)(*(int *)(iVar7 + *(int *)(param_1 + 0x118)) + 8) = param_1;
      bVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              empty((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    (*(int *)(iVar7 + *(int *)(param_1 + 0x118)) + 0x10));
      if (!bVar3) {
        iVar7 = *(int *)(iVar7 + *(int *)(param_1 + 0x118));
        pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (iVar7 + 0x10);
        bVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                empty(pbVar1);
        if (!bVar3) {
          piVar4 = (int *)FUN_00428b30(pbVar1);
          *piVar4 = iVar7;
        }
      }
    }
    local_4 = local_4 & 0xffffff00;
    FUN_00421930(0,0,local_4);
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
    *(undefined1 *)(param_1 + 0x14) = 1;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if ((*(int *)(param_1 + 0x128) != 0) &&
     (*(int *)(param_1 + 300) - *(int *)(param_1 + 0x128) >> 3 != 0)) {
    for (uVar8 = 0;
        (local_10 = uVar8, *(int *)(param_1 + 0x128) != 0 &&
        (uVar8 < (uint)(*(int *)(param_1 + 300) - *(int *)(param_1 + 0x128) >> 3)));
        uVar8 = uVar8 + 1) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x128) + uVar8 * 8) + 8) = 0;
LAB_0042a620:
      piVar4 = *(int **)(param_1 + 0x90);
      if (piVar4 != *(int **)(param_1 + 0x94)) {
LAB_0042a637:
        if (*piVar4 != *(int *)(*(int *)(param_1 + 0x128) + uVar8 * 8)) goto code_r0x0042a63b;
        piVar6 = *(int **)(param_1 + 0x94);
        piVar5 = piVar4 + 1;
        if (piVar5 != piVar6) {
          iVar7 = (int)piVar4 - (int)piVar5;
          do {
            *(int *)((int)piVar5 + iVar7) = *piVar5;
            piVar5 = piVar5 + 1;
          } while (piVar5 != piVar6);
        }
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -4;
      }
LAB_0042a673:
      piVar4 = *(int **)(param_1 + 0xf0);
      if (piVar4 != *(int **)(param_1 + 0xf4)) {
        while (piVar5 = (int *)*piVar4, piVar5 != *(int **)(*(int *)(param_1 + 0x128) + uVar8 * 8))
        {
          piVar4 = piVar4 + 2;
          if (piVar4 == *(int **)(param_1 + 0xf4)) goto LAB_0042a6a3;
        }
        uStack_14._0_3_ = CONCAT12((char)piVar4[1],(undefined2)uStack_14);
        piVar2 = *(int **)(param_1 + 0xf4);
        piVar6 = piVar4 + 2;
        if (piVar6 != piVar2) {
          iVar7 = (int)piVar4 - (int)piVar6;
          do {
            *(int *)((int)piVar6 + iVar7) = *piVar6;
            *(int *)((int)piVar6 + iVar7 + 4) = piVar6[1];
            piVar6 = piVar6 + 2;
          } while (piVar6 != piVar2);
        }
        *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + -8;
        iVar7 = (**(code **)(*piVar5 + 0x7c))((int)&uStack_14 + 3);
        if (iVar7 != 0) {
          FUN_004216a0(unaff_retaddr,iVar7);
        }
        pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (piVar5 + 4);
        bVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                empty(pbVar1);
        if (((!bVar3) &&
            (bVar3 = std::
                     basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                     empty(pbVar1), !bVar3)) &&
           (FUN_00420ca0(&local_10,pbVar1), uVar8 = uStack_14, local_10 != *(uint *)(param_1 + 0x44)
           )) {
          FUN_00422690(auStack_c,local_10);
          uVar8 = uStack_14;
        }
        (**(code **)(*piVar5 + 0x34))(unaff_retaddr);
        (**(code **)(*piVar5 + 0x10))();
        if (uStack_14._2_1_ != '\0') {
          (**(code **)(*piVar5 + 0xc))(1);
        }
        goto LAB_0042a620;
      }
LAB_0042a6a3:
    }
    local_4 = local_4 & 0xffffff00;
    FUN_00421930(0,0,local_4);
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
    *(undefined1 *)(param_1 + 0x14) = 1;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
code_r0x0042a63b:
  piVar4 = piVar4 + 1;
  if (piVar4 == *(int **)(param_1 + 0x94)) goto LAB_0042a673;
  goto LAB_0042a637;
}




/* Function: FUN_0042a7a0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0042a9c1) */
/* WARNING: Removing unreachable block (ram,0x0042a9bb) */
/* WARNING: Removing unreachable block (ram,0x0042a9d0) */

undefined4
FUN_0042a7a0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  uchar uVar1;
  char *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  char *lpAppName;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar6;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this_00;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar8;
  uint unaff_retaddr;
  LPCSTR pCVar9;
  LPCSTR lpDefault;
  uchar *puVar10;
  CHAR *lpReturnedString;
  CHAR *pCVar11;
  DWORD DVar12;
  LPSTR *lpFilePart;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_6058 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_6054;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_6050;
  undefined4 local_604c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_603c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_6020 [28];
  CHAR local_6004 [4096];
  CHAR local_5004 [4096];
  uchar local_4004 [16384];
  uint local_4;
  
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  lpFilePart = (LPSTR *)0x0;
  pCVar11 = local_6004;
  DVar12 = 0x1000;
  pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (param_1);
  DVar12 = GetFullPathNameA(pcVar2,DVar12,pCVar11,lpFilePart);
  if (DVar12 == 0) {
    uVar3 = 0;
  }
  else {
    DVar12 = GetPrivateProfileSectionNamesA((LPSTR)local_4004,0x4000,local_6004);
    if (DVar12 != 0) {
      puVar10 = local_4004;
      uVar1 = local_4004[0];
      while (uVar1 != '\0') {
        uVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          (local_6058,(char *)puVar10);
        FUN_0040ae90(uVar3);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_6058);
        sVar4 = _mbslen(puVar10);
        puVar10 = puVar10 + sVar4 + 1;
        uVar1 = *puVar10;
      }
    }
    for (this_00 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x0;
        this_00 !=
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
        this_00 = this_00 + 0x1c) {
      pCVar11 = local_6004;
      DVar12 = 0x4000;
      puVar10 = local_4004;
      pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
      lpDefault = "";
      pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
      pCVar9 = (LPCSTR)0x0;
      local_6054 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x0;
      local_6050 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x0;
      local_604c = 0;
      pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(this_00);
      DVar12 = GetPrivateProfileStringA(pcVar2,pCVar9,lpDefault,(LPSTR)puVar10,DVar12,pCVar11);
      pbVar7 = pbVar6;
      if (DVar12 != 0) {
        puVar10 = local_4004;
        uVar1 = local_4004[0];
        while (pbVar7 = pbVar6, uVar1 != '\0') {
          uVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            (local_603c,(char *)puVar10);
          FUN_0040ae90(uVar3);
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_603c);
          sVar4 = _mbslen(puVar10);
          puVar10 = puVar10 + sVar4 + 1;
          pbVar8 = local_6050;
          pbVar6 = local_6054;
          uVar1 = *puVar10;
        }
      }
      for (; pbVar6 != pbVar8; pbVar6 = pbVar6 + 0x1c) {
        pCVar11 = local_6004;
        DVar12 = 0x1000;
        lpReturnedString = local_5004;
        pCVar9 = "";
        pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                 c_str(pbVar6);
        lpAppName = std::
                    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                    c_str(this_00);
        DVar12 = GetPrivateProfileStringA(lpAppName,pcVar2,pCVar9,lpReturnedString,DVar12,pCVar11);
        if (DVar12 != 0) {
          pbVar5 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   ::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             (local_6020,local_5004);
          this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 FUN_00429f50(pbVar6);
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          operator=(this,pbVar5);
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_6020);
        }
      }
      pbVar6 = pbVar7;
      if (pbVar7 != (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x0) {
        for (; pbVar6 != pbVar8; pbVar6 = pbVar6 + 0x1c) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(pbVar6);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete(pbVar7);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}




/* Function: FUN_0042b180 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FUN_0042b180(int param_1,char *param_2)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  uint extraout_EAX;
  undefined4 *puVar5;
  uint unaff_retaddr;
  char *pcVar6;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_20 [28];
  uint local_4;
  
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_20);
  pcVar6 = param_2;
  if (param_2 == (char *)0x0) {
    pcVar6 = "";
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_20,pcVar6);
  FUN_00420ca0(&param_2,local_20);
  if ((*(char **)(param_1 + 400) != param_2) &&
     (pvVar1 = *(void **)(param_2 + 0x24), pvVar1 != (void *)0x0)) {
    pvVar2 = *(void **)(param_1 + 0x130);
    *(void **)(param_1 + 0x130) = pvVar1;
    FUN_0042a4f0(param_1);
    iVar3 = *(int *)(param_1 + 0x130);
    if (iVar3 != 0) {
      puVar5 = *(undefined4 **)(iVar3 + 0xf0);
      if (puVar5 != *(undefined4 **)(iVar3 + 0xf4)) {
        do {
          (**(code **)(*(int *)*puVar5 + 0x10))();
          puVar5 = puVar5 + 2;
        } while (puVar5 != *(undefined4 **)(*(int *)(param_1 + 0x130) + 0xf4));
      }
      piVar4 = *(int **)(*(int *)(param_1 + 0x130) + 0xe8);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x10))();
      }
      piVar4 = *(int **)(*(int *)(param_1 + 0x130) + 0xe4);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x10))();
      }
    }
    *(void **)(param_1 + 0x130) = pvVar2;
    if (pvVar2 == pvVar1) {
      *(undefined4 *)(param_1 + 0x130) = 0;
    }
    FUN_00429d20();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_20);
  return extraout_EAX & 0xffffff00;
}




/* Function: FUN_0042d4f0 */

void FUN_0042d4f0(undefined2 *param_1,int *param_2,int *param_3,undefined2 param_4)

{
  void *pvVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    pvVar1 = (void *)param_2[9];
    if (pvVar1 != (void *)0x0) {
      FUN_00429d20();
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    param_2 = (int *)*param_2;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return;
}




/* Function: FUN_0042d540 */

void __fastcall FUN_0042d540(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  *param_1 = &PTR_LAB_00588160;
  local_4 = param_1;
  FUN_00422fb0(0);
  FUN_0042d000(0);
  FUN_004201c0();
  local_4._0_2_ = CONCAT11((undefined1)local_4,(undefined1)local_4);
  puVar1 = (undefined4 *)param_1[100];
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  FUN_0042d4f0(&local_4,uVar3,puVar1,local_4);
  puVar1 = (undefined4 *)param_1[100];
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  FUN_00452ff0(&local_4,uVar3,puVar1);
  local_4 = (undefined4 *)param_1[100];
  FUN_00422920(9,&local_4);
  param_1[0x6a] = 1;
  param_1[0x6b] = 1;
  puVar1 = (undefined4 *)param_1[0x50];
  local_4._0_2_ = CONCAT11((undefined1)local_4,(undefined1)local_4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  FUN_0041fc90(&local_4,uVar3,puVar1,local_4);
  puVar1 = (undefined4 *)param_1[0x50];
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  FUN_00452ff0(&local_4,uVar3,puVar1);
  local_4 = (undefined4 *)param_1[0x50];
  FUN_00422920(9,&local_4);
  param_1[0x56] = 1;
  param_1[0x57] = 1;
  puVar1 = (undefined4 *)param_1[0x5a];
  local_4._0_2_ = CONCAT11((undefined1)local_4,(undefined1)local_4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  FUN_0041fce0(&local_4,uVar3,puVar1,local_4);
  puVar1 = (undefined4 *)param_1[0x5a];
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  FUN_00452ff0(&local_4,uVar3,puVar1);
  local_4 = (undefined4 *)param_1[0x5a];
  FUN_00422920(9,&local_4);
  param_1[0x60] = 1;
  param_1[0x61] = 1;
  puVar1 = (undefined4 *)param_1[0xae];
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  FUN_004228d0(&local_4,uVar3,puVar1);
  param_1[0xb0] = 0;
  FUN_004294d0();
  piVar2 = (int *)param_1[0x5f4];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x5f4] = 0;
  }
  FUN_00409a60(param_1[0x524]);
  (**(code **)(*(int *)param_1[0x5c1] + 0x34))(param_1);
  (**(code **)(param_1[0x530] + 0x34))(param_1);
  if ((undefined4 *)param_1[0x524] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x524])(1);
  }
  param_1[0x524] = 0;
  if ((int *)param_1[0x5c1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5c1] + 0xc))(1);
  }
  param_1[0x5c1] = 0;
  DAT_005b5f2c = 0;
  FUN_004218b0();
  FUN_00469910();
  FUN_004feaf0();
  piVar2 = (int *)param_1[0x66f];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x66f] = 0;
  }
  piVar2 = (int *)param_1[0x66e];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x66e] = 0;
  }
  piVar2 = (int *)param_1[0x64b];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x64b] = 0;
  }
  piVar2 = (int *)param_1[0x644];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x644] = 0;
  }
  piVar2 = (int *)param_1[0x643];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x643] = 0;
  }
  piVar2 = (int *)param_1[0x642];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x642] = 0;
  }
  piVar2 = (int *)param_1[0x63f];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x63f] = 0;
  }
  piVar2 = (int *)param_1[0x63e];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x63e] = 0;
  }
  FUN_0052c840();
  FUN_004ff080();
  FUN_0042e100();
  FUN_00407150();
  FUN_0045ee50();
  FUN_00532a60();
  FUN_0054a0b0();
  FUN_0040e370();
  FUN_004f9110();
  puVar1 = (undefined4 *)param_1[0xae];
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  FUN_004228d0(&stack0xfffffff4,uVar3,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_1[0xae]);
}




/* Function: FUN_0042d970 */

char __fastcall FUN_0042d970(int param_1)

{
  char cVar1;
  
  cVar1 = '\x01';
  if (*(int *)(param_1 + 300) != 0) {
    FUN_0042b180(*(int *)(param_1 + 300));
    operator_delete__(*(void **)(param_1 + 300));
    *(undefined4 *)(param_1 + 300) = 0;
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    FUN_0042d000(*(int *)(param_1 + 0x128));
    cVar1 = *(char *)(param_1 + 0x18ec);
    if (cVar1 != '\0') {
      operator_delete__(*(void **)(param_1 + 0x128));
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
  }
  return cVar1;
}




/* Function: FUN_0042d9e0 */

void * __thiscall FUN_0042d9e0(void *param_1,byte param_2)

{
  FUN_0042d540();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0042da20 */

void __fastcall FUN_0042da20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_005882dc;
  return;
}




/* Function: FUN_0042da40 */

void __thiscall FUN_0042da40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_005882e4;
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}




/* Function: FUN_0042daf0 */

void * __thiscall FUN_0042daf0(void *param_1,byte param_2)

{
  FUN_0042db10();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0042db10 */

void __fastcall FUN_0042db10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_005882d4;
  return;
}




/* Function: FUN_0042db20 */

int __fastcall FUN_0042db20(int *param_1)

{
  BOOL BVar1;
  int iVar2;
  LARGE_INTEGER local_8;
  
  if (*param_1 == 0) {
    BVar1 = QueryPerformanceFrequency(&local_8);
    if (BVar1 == 0) {
      iVar2 = FUN_00493c27(4);
      if (iVar2 != 0) {
        iVar2 = FUN_0042da20();
        *param_1 = iVar2;
        return iVar2;
      }
    }
    else {
      iVar2 = FUN_00493c27(0x28);
      if (iVar2 != 0) {
        iVar2 = FUN_0042da40(local_8.s.LowPart,local_8.s.HighPart);
        *param_1 = iVar2;
        return iVar2;
      }
    }
    *param_1 = 0;
  }
  return *param_1;
}




/* Function: FUN_0042db90 */

void FUN_0042db90(void)

{
  FUN_0042db20();
  return;
}




/* Function: FUN_0042dba0 */

int FUN_0042dba0(int param_1,int param_2)

{
  return param_2 - param_1;
}




/* Function: FUN_0042dbb0 */

undefined4 __fastcall FUN_0042dbb0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x84) == (undefined4 *)0x0) {
    return 0;
  }
  return **(undefined4 **)(param_1 + 0x84);
}




/* Function: FUN_0042dbc0 */

void __thiscall
FUN_0042dbc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = FUN_00412800(**(undefined4 **)(param_1 + 0x84),param_3,param_4,param_5);
  if (param_5 != 0) {
    if (iVar1 == 0) {
      pcVar3 = "%s: executed ok";
    }
    else if (iVar1 == 1) {
      pcVar3 = "%s: unable to run";
    }
    else {
      if (iVar1 != 3) {
        return;
      }
      pcVar3 = "%s: syntax error";
    }
    uVar2 = FUN_0041e5b0(pcVar3,param_5);
    FUN_0040a410(uVar2);
  }
  return;
}




/* Function: FUN_0042dc20 */

void __thiscall
FUN_0042dc20(int param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            float param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(undefined4 **)(param_1 + 0x84) != (undefined4 *)0x0) {
    uVar2 = **(undefined4 **)(param_1 + 0x84);
  }
  FUN_00412cfc(uVar2,(double)param_3);
  if (*(undefined4 **)(param_1 + 0x84) == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined4 **)(param_1 + 0x84);
  }
  pcVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (param_2);
  FUN_004130c0(uVar2,pcVar1);
  return;
}




/* Function: FUN_0042dc70 */

float10 __thiscall
FUN_0042dc70(int param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(undefined4 **)(param_1 + 0x84) == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined4 **)(param_1 + 0x84);
  }
  pcVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (param_2);
  FUN_00412e58(uVar2,pcVar1);
  uVar2 = 0;
  if (*(undefined4 **)(param_1 + 0x84) != (undefined4 *)0x0) {
    uVar2 = **(undefined4 **)(param_1 + 0x84);
  }
  fVar3 = (float10)FUN_00412c00(uVar2,0xffffffff);
  if (*(undefined4 **)(param_1 + 0x84) == (undefined4 *)0x0) {
    FUN_00412950(0,0xfffffffe);
    return (float10)(float)fVar3;
  }
  FUN_00412950(**(undefined4 **)(param_1 + 0x84),0xfffffffe);
  return (float10)(float)fVar3;
}




/* Function: FUN_0042dcf0 */

undefined4 __thiscall
FUN_0042dcf0(int param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (*(undefined4 **)(param_1 + 0x84) == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined4 **)(param_1 + 0x84);
  }
  pcVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (param_2);
  FUN_00412e58(uVar2,pcVar1);
  uVar2 = 0;
  if (*(undefined4 **)(param_1 + 0x84) != (undefined4 *)0x0) {
    uVar2 = **(undefined4 **)(param_1 + 0x84);
  }
  uVar2 = FUN_00412c34(uVar2,0xffffffff);
  if (*(undefined4 **)(param_1 + 0x84) == (undefined4 *)0x0) {
    FUN_00412950(0,0xfffffffe);
    return uVar2;
  }
  FUN_00412950(**(undefined4 **)(param_1 + 0x84),0xfffffffe);
  return uVar2;
}




/* Function: FUN_0042e090 */

undefined4 * __fastcall FUN_0042e090(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00588358;
  puVar1 = operator_new(4,(nothrow_t *)&DAT_005b6164);
  param_1[0x21] = puVar1;
  *puVar1 = 0;
  puVar1 = (undefined4 *)param_1[0x21];
  uVar2 = FUN_0054fb74(0x1000);
  *puVar1 = uVar2;
  FUN_0054f994(uVar2);
  FUN_0054e7e4(*puVar1);
  FUN_0054cfd4(*puVar1);
  FUN_0054c114(*puVar1);
  FUN_0054b354(*puVar1);
  FUN_0044ab50(*puVar1);
  return param_1;
}




/* Function: FUN_0042e100 */

void __fastcall FUN_0042e100(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00588358;
  FUN_0054fc10(*(undefined4 *)param_1[0x21]);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_1[0x21]);
}




/* Function: FUN_0042e130 */

void * __thiscall FUN_0042e130(void *param_1,byte param_2)

{
  FUN_0042e100();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0042e150 */

void __fastcall FUN_0042e150(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    AVIStreamRelease(*(int *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    AVIStreamRelease(*(int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    AVIFileRelease(*(int *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  AVIFileExit();
  return;
}




/* Function: FUN_0042e1a0 */

void __thiscall FUN_0042e1a0(int param_1,undefined4 param_2)

{
  AVIStreamWrite(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x34),1,param_2,
                 *(undefined4 *)(param_1 + 0x1c),0x10,0,0);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return;
}




/* Function: FUN_0042e1d0 */

undefined4 * __thiscall FUN_0042e1d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b72b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_00493c27(0xc);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 1;
    uVar2 = FUN_004d3660(param_2);
    *puVar1 = uVar2;
  }
  local_4 = 0xffffffff;
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_004d3810(0x8007000e);
  }
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0042e260 */

int * __thiscall FUN_0042e260(int *param_1,int *param_2,int *param_3)

{
  UINT UVar1;
  BSTR pOVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  UINT local_4;
  
  param_1[1] = 0;
  param_1[2] = 1;
  if (((undefined4 *)*param_2 == (undefined4 *)0x0) ||
     (pOVar2 = *(BSTR *)*param_2, pOVar2 == (BSTR)0x0)) {
    local_4 = 0;
  }
  else {
    local_4 = SysStringLen(pOVar2);
  }
  if (((undefined4 *)*param_3 == (undefined4 *)0x0) ||
     (pOVar2 = *(BSTR *)*param_3, pOVar2 == (BSTR)0x0)) {
    UVar1 = 0;
  }
  else {
    UVar1 = SysStringLen(pOVar2);
  }
  pOVar2 = SysAllocStringByteLen((LPCSTR)0x0,(local_4 + UVar1) * 2);
  *param_1 = (int)pOVar2;
  if (pOVar2 == (BSTR)0x0) {
    if (local_4 + UVar1 == 0) {
      return param_1;
    }
    FUN_004d3810(0x8007000e);
  }
  if (((undefined4 *)*param_2 != (undefined4 *)0x0) &&
     (puVar5 = *(undefined4 **)*param_2, puVar5 != (undefined4 *)0x0)) {
    uVar4 = local_4 * 2 + 2;
    puVar6 = (undefined4 *)*param_1;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  if (((undefined4 *)*param_3 != (undefined4 *)0x0) &&
     (puVar5 = *(undefined4 **)*param_3, puVar5 != (undefined4 *)0x0)) {
    uVar4 = UVar1 * 2 + 2;
    puVar6 = (undefined4 *)(*param_1 + local_4 * 2);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  return param_1;
}




/* Function: FUN_0042e340 */

LONG __fastcall FUN_0042e340(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 2);
  if (LVar1 != 0) {
    return param_1[2];
  }
  if (param_1 != (undefined4 *)0x0) {
    if ((BSTR)*param_1 != (BSTR)0x0) {
      SysFreeString((BSTR)*param_1);
    }
    if ((void *)param_1[1] != (void *)0x0) {
      operator_delete__((void *)param_1[1]);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return 0;
}




/* Function: FUN_0042e390 */

void __fastcall FUN_0042e390(int *param_1)

{
  if (*param_1 != 0) {
    FUN_0042e340();
    *param_1 = 0;
  }
  return;
}




/* Function: FUN_0042e3b0 */

int * __thiscall FUN_0042e3b0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b72b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*param_1 != 0) {
    ExceptionList = &local_c;
    FUN_0042e340();
    *param_1 = 0;
  }
  puVar1 = (undefined4 *)FUN_00493c27(0xc);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 1;
    uVar2 = FUN_004d3660(param_2);
    *puVar1 = uVar2;
  }
  *param_1 = (int)puVar1;
  local_4 = 0xffffffff;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_004d3810(0x8007000e);
  }
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0042e450 */

int * __thiscall FUN_0042e450(int *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b72b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00493c27(0xc);
  local_4 = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0042e260(param_1,param_2);
  }
  local_4 = 0xffffffff;
  if (iVar1 == 0) {
    FUN_004d3810(0x8007000e);
  }
  if (*param_1 != 0) {
    FUN_0042e340();
    *param_1 = 0;
  }
  *param_1 = iVar1;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0042e4e0 */

void __fastcall FUN_0042e4e0(int *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_0042e340();
    param_1[0xc] = 0;
  }
  if (*param_1 != 0) {
    FUN_0042e340();
    *param_1 = 0;
  }
  return;
}




/* Function: FUN_0042e910 */

void __fastcall FUN_0042e910(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uchar *puVar3;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b7b8;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)*param_1;
  local_10 = param_1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (uchar *)0x0;
    ExceptionList = &local_c;
  }
  else {
    ExceptionList = &local_c;
    if (puVar1[1] == 0) {
      ExceptionList = &local_c;
      uVar2 = FUN_004d3720(*puVar1);
      puVar1[1] = uVar2;
    }
    puVar3 = (uchar *)puVar1[1];
  }
  puVar3 = _mbsstr(puVar3,"avi");
  if (puVar3 == (uchar *)0x0) {
    FUN_0042e1d0(&DAT_00588764);
    local_4 = 0;
    FUN_0042e450(&local_10);
    if (local_10 != (int *)0x0) {
      FUN_0042e340();
    }
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_0042e9a0 */

int __thiscall FUN_0042e9a0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b7e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0042e1d0(param_2);
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_4 = 1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_0042e910();
  puVar2 = (undefined4 *)(param_1 + 8);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0042ead0 */

undefined4 __fastcall FUN_0042ead0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}




/* Function: FUN_0042eae0 */

undefined2 __fastcall FUN_0042eae0(int param_1)

{
  return *(undefined2 *)(param_1 + 0xd8);
}




/* Function: FUN_0042eaf0 */

uint * __thiscall FUN_0042eaf0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  
  if (param_2 != param_1) {
    uVar1 = param_2[1];
    if (uVar1 < *param_1) {
      uVar2 = 0;
      param_1[1] = uVar1;
      if (uVar1 != 0) {
        do {
          *(undefined4 *)(param_1[2] + uVar2 * 4) = *(undefined4 *)(param_2[2] + uVar2 * 4);
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_1[1]);
        return param_1;
      }
    }
    else {
      uVar1 = *param_2;
      *param_1 = uVar1;
      pvVar3 = operator_new(uVar1 * 4,(nothrow_t *)&DAT_005b6164);
      uVar1 = param_2[1];
      uVar2 = 0;
      param_1[1] = uVar1;
      if (uVar1 != 0) {
        do {
          *(undefined4 *)((int)pvVar3 + uVar2 * 4) = *(undefined4 *)(param_2[2] + uVar2 * 4);
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_1[1]);
      }
      operator_delete__((void *)param_1[2]);
      param_1[2] = (uint)pvVar3;
    }
  }
  return param_1;
}




/* Function: FUN_0042ede0 */

void __thiscall FUN_0042ede0(int param_1,undefined4 param_2)

{
  FUN_0041d670(param_2);
  *(undefined4 *)(param_1 + 0x100) = 0;
  return;
}




/* Function: FUN_0042ee10 */

undefined4 * __thiscall FUN_0042ee10(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  if (param_2 != 0) {
    pvVar1 = operator_new(param_2 * 0xc,(nothrow_t *)&DAT_005b6164);
    if (pvVar1 != (void *)0x0) {
      FUN_00406f40(pvVar1,0xc,param_2,FUN_0041d350);
      *param_1 = pvVar1;
      return param_1;
    }
    *param_1 = 0;
  }
  return param_1;
}




/* Function: FUN_0042ee70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0042ee70(float *param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  bool bVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  float local_408;
  float local_400 [256];
  
  if ((DAT_005b6050 & 1) == 0) {
    DAT_005b6050 = DAT_005b6050 | 1;
    _DAT_005b6044 = 0x100;
    DAT_005b6048 = 0;
    DAT_005b604c = (void *)0x0;
    DAT_005b604c = operator_new(0x400,(nothrow_t *)&DAT_005b6164);
    _atexit((_func_4879 *)&LAB_00580cb0);
  }
  DAT_005b6048 = 0;
  uVar10 = *(uint *)(param_2 + 4);
  bVar5 = true;
  uVar8 = 0;
  bVar7 = true;
  if (uVar10 != 0) {
    iVar3 = *(int *)(param_2 + 8);
    fVar6 = -_DAT_0058876c;
    do {
      pfVar9 = *(float **)(iVar3 + uVar8 * 4);
      fVar2 = *pfVar9 * *param_1 + pfVar9[1] * param_1[1] + pfVar9[2] * param_1[2] + param_1[3];
      local_400[uVar8] = fVar2;
      if (fVar2 < fVar6) {
        bVar5 = false;
      }
      if (_DAT_0058876c <= fVar2) {
        bVar7 = false;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar10);
    if (!bVar5) {
      if (bVar7) {
        return 0;
      }
      bVar5 = _DAT_00582ad8 <= local_400[0];
      pfVar9 = (float *)**(undefined4 **)(param_2 + 8);
      local_408 = local_400[0];
      uVar8 = 1;
      if (uVar10 != 0) {
        do {
          pfVar4 = *(float **)(*(int *)(param_2 + 8) + (uVar8 % uVar10) * 4);
          fVar2 = local_400[uVar8 % uVar10];
          if (bVar5) {
            if (fVar2 < _DAT_00582ad8) {
              if (fVar6 <= fVar2) goto LAB_0042f0d0;
              bVar5 = false;
              local_408 = local_408 / (local_408 - fVar2);
              pfVar1 = (float *)(DAT_005b6064 + DAT_005b606c * 0xc);
              DAT_005b606c = DAT_005b606c + 1;
              *pfVar1 = (*pfVar4 - *pfVar9) * local_408 + *pfVar9;
              pfVar1[1] = (pfVar4[1] - pfVar9[1]) * local_408 + pfVar9[1];
              pfVar1[2] = (pfVar4[2] - pfVar9[2]) * local_408 + pfVar9[2];
              *(float **)((int)DAT_005b604c + DAT_005b6048 * 4) = pfVar1;
            }
            else {
              *(float **)((int)DAT_005b604c + DAT_005b6048 * 4) = pfVar4;
            }
LAB_0042f0ca:
            DAT_005b6048 = DAT_005b6048 + 1;
          }
          else if (_DAT_0058876c <= fVar2) {
            local_408 = local_408 / (local_408 - fVar2);
            pfVar1 = (float *)(DAT_005b6064 + DAT_005b606c * 0xc);
            bVar5 = true;
            DAT_005b606c = DAT_005b606c + 1;
            *pfVar1 = (*pfVar4 - *pfVar9) * local_408 + *pfVar9;
            pfVar1[1] = (pfVar4[1] - pfVar9[1]) * local_408 + pfVar9[1];
            pfVar1[2] = (pfVar4[2] - pfVar9[2]) * local_408 + pfVar9[2];
            *(float **)((int)DAT_005b604c + DAT_005b6048 * 4) = pfVar1;
            DAT_005b6048 = DAT_005b6048 + 1;
            *(float **)((int)DAT_005b604c + DAT_005b6048 * 4) = pfVar4;
            goto LAB_0042f0ca;
          }
LAB_0042f0d0:
          uVar10 = *(uint *)(param_2 + 4);
          uVar8 = uVar8 + 1;
          pfVar9 = pfVar4;
          local_408 = fVar2;
          if (uVar10 < uVar8) {
            return ~-(uint)(DAT_005b6048 < 3) & 0x5b6044;
          }
        } while( true );
      }
    }
  }
  return param_2;
}




/* Function: FUN_0042f100 */

void FUN_0042f100(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b802;
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




/* Function: FUN_0042f180 */

void FUN_0042f180(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 9;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 9; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}




/* Function: FUN_0042f1b0 */

void FUN_0042f1b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    param_3 = param_3 + -9;
    param_4 = param_4 + -9;
    puVar2 = param_3;
    puVar3 = param_4;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  } while (param_3 != param_2);
  *param_1 = param_4;
  return;
}




/* Function: FUN_0042f1f0 */

void __thiscall FUN_0042f1f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_14c [12];
  undefined1 local_140 [64];
  undefined1 local_100 [128];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  uVar1 = FUN_005463f0(local_40,param_2);
  uVar2 = FUN_005485e8(param_4);
  uVar1 = FUN_00545edc(local_100,param_3,uVar2,uVar1);
  uVar1 = FUN_0041d7a0(local_140,uVar1);
  uVar1 = FUN_0041d7a0(local_80,uVar1);
  FUN_0041d670(uVar1);
  *(undefined4 *)(param_1 + 0x100) = 0;
  FUN_00407300();
  FUN_00407300();
  FUN_00407300();
  FUN_00407300();
  FUN_00407300();
  puVar3 = (undefined4 *)FUN_00547a54(local_14c);
  if (puVar3 != (undefined4 *)(param_1 + 0xcc)) {
    *(undefined4 *)(param_1 + 0xcc) = *puVar3;
    *(undefined4 *)(param_1 + 0xd0) = puVar3[1];
    *(undefined4 *)(param_1 + 0xd4) = puVar3[2];
  }
  return;
}




/* Function: FUN_0042f2e0 */

undefined4 FUN_0042f2e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0042f1b0(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_0042f320 */

void FUN_0042f320(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 9;
  }
  return;
}




/* Function: FUN_0042f350 */

void FUN_0042f350(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = param_3;
      puVar3 = param_1;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = param_1 + 9;
  }
  return;
}




/* Function: FUN_0042f380 */

void __thiscall
FUN_0042f380(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

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
      puVar3 = param_4 + 9;
      puVar5 = puVar2 + 9;
      puVar6 = param_4;
      puVar7 = puVar2;
      for (iVar4 = 9; param_4 = puVar3, puVar2 = puVar5, iVar4 != 0; iVar4 = iVar4 + -1) {
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




/* Function: FUN_0042f3d0 */

void __thiscall
FUN_0042f3d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0042f320(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_0042f400 */

void __thiscall FUN_0042f400(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057b810;
  local_10 = ExceptionList;
  if (param_2 < 0x71c71c8) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x24;
    }
    if (uVar2 < param_2) {
      iVar3 = param_2 * 0x24;
      ExceptionList = &local_10;
      iVar1 = FUN_00493c27(iVar3);
      local_8 = 0;
      FUN_0042f320(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar1,param_1,iVar1);
      if (*(int *)(param_1 + 4) == 0) {
        param_2 = 0;
      }
      else {
        param_2 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
      }
      if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)(param_1 + 4));
      }
      *(int *)(param_1 + 0xc) = iVar3 + iVar1;
      *(int *)(param_1 + 4) = iVar1;
      *(uint *)(param_1 + 8) = iVar1 + param_2 * 0x24;
      ExceptionList = local_10;
      return;
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_0042f100();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_0042f520 */

int __thiscall FUN_0042f520(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_0042f350(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0x24;
}




/* Function: FUN_0042f550 */

void __thiscall
FUN_0042f550(undefined4 *param_1,undefined4 **param_2,undefined1 *param_3,undefined4 **param_4)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 local_38 [9];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_3;
  puVar2 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057b820;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  puVar8 = param_4;
  puVar9 = local_38;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar5 = param_1[1];
  if (iVar5 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = (undefined1 *)((param_1[3] - iVar5) / 0x24);
  }
  if (param_3 != (undefined1 *)0x0) {
    if (iVar5 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (param_1[2] - iVar5) / 0x24;
    }
    if ((undefined1 *)(0x71c71c7U - iVar7) < param_3) {
      ExceptionList = &local_10;
      FUN_0042f100();
      ExceptionList = local_10;
      return;
    }
    if (iVar5 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (param_1[2] - iVar5) / 0x24;
    }
    if (puVar6 < param_3 + iVar7) {
      if ((undefined1 *)(0x71c71c7 - ((uint)puVar6 >> 1)) < puVar6) {
        puVar6 = (undefined1 *)0x0;
      }
      else {
        puVar6 = puVar6 + ((uint)puVar6 >> 1);
      }
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (param_1[2] - iVar5) / 0x24;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xffffffbc;
      if (puVar6 < param_3 + iVar5) {
        ExceptionList = &local_10;
        local_14 = &stack0xffffffbc;
        iVar5 = FUN_0041d2a0();
        puVar6 = puVar3 + iVar5;
      }
      local_4c = (undefined4 *)0x42f669;
      param_4 = (undefined4 **)FUN_00493c27();
      local_8 = 0;
      local_50 = param_4;
      local_4c = param_1;
      param_3 = (undefined1 *)FUN_0042f320(param_1[1],param_2);
      local_50 = local_38;
      local_4c = param_1;
      FUN_0042f350(param_3,puVar3);
      local_50 = (undefined4 *)((int)param_3 + (int)puVar3 * 0x24);
      local_4c = param_1;
      FUN_0042f320(param_2,param_1[2]);
      pvVar1 = (void *)param_1[1];
      if (pvVar1 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (param_1[2] - (int)pvVar1) / 0x24;
      }
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        local_4c = (undefined4 *)&UNK_0042f6fe;
        operator_delete(pvVar1);
      }
      param_1[3] = param_4 + (int)puVar6 * 9;
      param_1[2] = param_4 + (int)(puVar3 + iVar5) * 9;
      param_1[1] = param_4;
      ExceptionList = local_10;
      return;
    }
    param_4 = (undefined4 **)param_1[2];
    local_4c = param_4;
    if ((undefined1 *)(((int)param_4 - (int)param_2) / 0x24) < param_3) {
      local_50 = param_2;
      ExceptionList = &local_10;
      param_2 = (undefined4 **)((int)param_3 * 0x24);
      param_4 = &local_50;
      local_14 = &stack0xffffffbc;
      FUN_0042f3d0();
      local_50 = (undefined4 *)param_1[2];
      local_4c = (undefined4 *)(puVar3 + -(((int)local_50 - (int)puVar2) / 0x24));
      local_8 = 2;
      FUN_0042f520();
      iVar5 = param_1[2];
      param_1[2] = iVar5 + (int)param_2;
      local_4c = (undefined4 *)((iVar5 + (int)param_2) - (int)param_2);
    }
    else {
      param_2 = param_4 + (int)param_3 * -9;
      ExceptionList = &local_10;
      local_50 = param_2;
      local_14 = &stack0xffffffbc;
      uVar4 = FUN_0042f3d0();
      param_1[2] = uVar4;
      param_3 = &stack0xffffffb8;
      param_4 = &local_4c;
      local_4c = param_2;
      local_50 = puVar2;
      param_2 = &local_50;
      FUN_0042f2e0(&param_2);
      local_4c = puVar2 + (int)puVar3 * 9;
    }
    param_2 = &local_50;
    local_50 = puVar2;
    FUN_0042f180();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_0042f850 */

void __thiscall FUN_0042f850(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(param_1 + 8) - iVar2) / 0x24;
  }
  if (uVar1 < param_2) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar2) / 0x24;
    }
    FUN_0042f550(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if (iVar2 != 0) {
    if (param_2 < (uint)((*(int *)(param_1 + 8) - iVar2) / 0x24)) {
      FUN_0042f380(&param_2,*(int *)(param_1 + 4) + param_2 * 0x24,*(int *)(param_1 + 8));
    }
  }
  return;
}




/* Function: FUN_0042f900 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_0042f900(int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  float fVar9;
  void ***pppvVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 auStack_a6c [4];
  undefined4 uStack_a5c;
  float *pfStack_a58;
  void **appvStack_a14 [4];
  float *pfStack_a04;
  undefined1 *puStack_a00;
  undefined1 *puStack_9fc;
  undefined1 *puStack_9f8;
  undefined1 *puStack_9f4;
  undefined1 *puStack_9f0;
  float *pfStack_9ec;
  undefined1 *puStack_9e8;
  float *pfStack_9e4;
  float *pfStack_9e0;
  float *pfStack_9dc;
  void *pvStack_9c8;
  float fStack_9c4;
  float fStack_9c0;
  undefined1 auStack_9bc [4];
  undefined1 auStack_9b8 [20];
  float local_9a4;
  float local_9a0;
  float local_99c;
  float local_998;
  float local_994;
  float local_990;
  float local_98c;
  float local_988;
  float local_984;
  float local_980;
  float local_97c;
  float local_978;
  undefined1 auStack_96c [4];
  undefined1 auStack_968 [4];
  undefined1 auStack_964 [4];
  undefined1 auStack_960 [12];
  undefined1 auStack_954 [4];
  float fStack_950;
  float fStack_94c;
  float fStack_948;
  float fStack_944;
  float fStack_940;
  float fStack_93c;
  float fStack_938;
  float fStack_934;
  float fStack_930;
  float fStack_92c;
  float fStack_928;
  float fStack_924;
  float local_914;
  undefined1 auStack_904 [140];
  float afStack_878 [14];
  undefined4 local_840 [528];
  
  fVar9 = *(float *)(param_1 + 0x88);
  local_99c = (float)*(int *)((int)fVar9 + 7) * _DAT_00587cbc;
  local_9a0 = 0.0;
  local_9a4 = (float)*(int *)((int)fVar9 + 3) * _DAT_00587cbc;
  local_990 = (float)*(int *)((int)fVar9 + 7) * _DAT_00583340;
  local_994 = 0.0;
  local_998 = (float)*(int *)((int)fVar9 + 3) * _DAT_00587cbc;
  local_984 = (float)*(int *)((int)fVar9 + 7) * _DAT_00583340;
  local_988 = 0.0;
  local_98c = (float)*(int *)((int)fVar9 + 3) * _DAT_00583340;
  local_978 = (float)*(int *)((int)fVar9 + 7) * _DAT_00587cbc;
  iVar13 = *(int *)((int)fVar9 + 3);
  puVar11 = (undefined4 *)(param_1 + 0x8c);
  puVar8 = local_840;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar8 = puVar8 + 1;
  }
  local_980 = (float)iVar13 * _DAT_00583340;
  local_97c = 0.0;
  pfVar5 = &local_9a4;
  iVar13 = 4;
  local_914 = fVar9;
  do {
    pfStack_9dc = (float *)local_840;
    puStack_9e8 = (undefined1 *)0x42f9cf;
    pfStack_9e4 = pfVar5;
    pfStack_9e0 = pfVar5;
    thunk_FUN_00495964();
    pfVar5 = pfVar5 + 3;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  pvStack_9c8 = (void *)*param_2;
  fStack_9c4 = param_2[1];
  fStack_9c0 = param_2[2];
  fStack_950 = local_9a4 + (float)pvStack_9c8;
  fStack_94c = local_9a0 + fStack_9c4;
  fStack_948 = local_99c + fStack_9c0;
  fStack_944 = local_998 + (float)pvStack_9c8;
  fStack_940 = local_994 + fStack_9c4;
  fStack_93c = local_990 + fStack_9c0;
  pfStack_9dc = &local_9a4;
  pfStack_9e0 = &local_998;
  pfStack_9e4 = &local_98c;
  fStack_938 = local_98c + (float)pvStack_9c8;
  puStack_9e8 = auStack_904;
  fStack_934 = local_988 + fStack_9c4;
  fStack_930 = local_984 + fStack_9c0;
  fStack_92c = local_980 + (float)pvStack_9c8;
  fStack_928 = local_97c + fStack_9c4;
  fStack_924 = local_978 + fStack_9c0;
  pfStack_9ec = (float *)0x42fb5c;
  thunk_FUN_00497bb2();
  pfStack_9ec = &fStack_948;
  puStack_9f0 = auStack_954;
  puStack_9f4 = auStack_960;
  puStack_9f8 = auStack_904;
  puStack_9fc = (undefined1 *)0x42fb81;
  thunk_FUN_00497bb2();
  puStack_9fc = auStack_964;
  puStack_a00 = auStack_9b8;
  pfStack_a04 = &fStack_9c4;
  appvStack_a14[3] = (void **)auStack_904;
  appvStack_a14[2] = (void **)0x42fba0;
  thunk_FUN_00497bb2();
  appvStack_a14[2] = (void **)auStack_968;
  appvStack_a14[1] = (void **)auStack_9bc;
  appvStack_a14[0] = &pvStack_9c8;
  thunk_FUN_00497bb2();
  thunk_FUN_00497bb2();
  thunk_FUN_00497bb2();
  FUN_004f9330();
  FUN_004f9130();
  FUN_004f9130();
  FUN_004f9130();
  FUN_004f9130();
  FUN_004f9130();
  FUN_004f9130();
  appvStack_a14[1] = (void **)((float)pfStack_a04 - (float)puStack_9f8);
  appvStack_a14[2] = (void **)((float)puStack_a00 - (float)puStack_9f4);
  appvStack_a14[3] = (void **)((float)puStack_9fc - (float)puStack_9f0);
  thunk_FUN_0049565a();
  thunk_FUN_0049565a();
  FUN_0041caa0();
  if ((DAT_005b6060 & 1) == 0) {
    DAT_005b6060 = DAT_005b6060 | 1;
    _DAT_005b6054 = 0x100;
    DAT_005b6058 = 0;
    DAT_005b605c = (int *)0x0;
    DAT_005b605c = operator_new(0x400,(nothrow_t *)&DAT_005b6164);
    pfStack_a58 = (float *)0x42fdb4;
    _atexit((_func_4879 *)&LAB_00580cd0);
  }
  pppvVar10 = appvStack_a14;
  puVar11 = auStack_a6c;
  for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar11 = *pppvVar10;
    pppvVar10 = pppvVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  FUN_0042f850(0);
  FUN_0041c940();
  FUN_0041f7c0();
  if ((*(int *)(param_1 + 0x11c) == 0) ||
     (pvStack_9c8 = (void *)((*(int *)(param_1 + 0x120) - *(int *)(param_1 + 0x11c)) / 0x24),
     pvStack_9c8 == (void *)0x0)) {
    FUN_004f9110();
    return false;
  }
  if (*(int *)(param_1 + 0x11c) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)(param_1 + 0x120) - *(int *)(param_1 + 0x11c)) / 0x24;
  }
  if (*(uint *)(param_1 + 0x128) < uVar7) {
    if (*(int *)(param_1 + 0x11c) == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = (*(int *)(param_1 + 0x120) - *(int *)(param_1 + 0x11c)) / 0x24;
    }
    *(int *)(param_1 + 0x128) = iVar13 + 0x10;
    FUN_0042f400();
  }
  iVar13 = *(int *)(param_1 + 0x11c);
  fStack_9c4 = 0.0;
  do {
    if ((iVar13 == *(int *)(param_1 + 0x120)) || (0xff < *(uint *)(param_1 + 0x100))) {
      FUN_004f9110();
      return 0 < (int)fStack_9c4;
    }
    DAT_005b606c = 0;
    uVar7 = 0;
    DAT_005b6058 = 3;
    pfVar5 = (float *)(iVar13 + 8);
    do {
      iVar4 = DAT_005b606c * 0xc;
      DAT_005b606c = DAT_005b606c + 1;
      DAT_005b605c[uVar7] = DAT_005b6064 + iVar4;
      local_990 = pfVar5[-2];
      local_98c = pfVar5[-1];
      local_988 = *pfVar5;
      pfVar1 = (float *)DAT_005b605c[uVar7];
      *pfVar1 = local_990;
      pfVar1[1] = local_98c;
      pfVar1[2] = local_988;
      uVar7 = uVar7 + 1;
      pfVar5 = pfVar5 + 3;
    } while (uVar7 < DAT_005b6058);
    uVar7 = 0;
    do {
      iVar4 = FUN_0042ee70();
      if (iVar4 == 0) goto LAB_004302d4;
      FUN_0042eaf0();
      uVar7 = uVar7 + 1;
    } while (uVar7 < 6);
    fStack_9c4 = (float)((int)fStack_9c4 + 1);
    uVar7 = 0;
    if (DAT_005b6058 != 0) {
      do {
        pfStack_a58 = &local_980;
        uStack_a5c = 0x42fffe;
        thunk_FUN_00497ab2();
        uVar7 = uVar7 + 1;
        afStack_878[uVar7 * 2] =
             (((local_980 - (float)appvStack_a14[0]) * (float)pfStack_9e4 +
              (local_97c - (float)appvStack_a14[1]) * (float)pfStack_9e0 +
              (float)pfStack_9dc * (local_978 - (float)appvStack_a14[2])) /
              (float)*(int *)((int)fVar9 + 3) + *(float *)((int)fVar9 + 0x13)) *
             *(float *)((int)fVar9 + 0xb);
        afStack_878[uVar7 * 2 + 1] =
             (((local_980 - (float)appvStack_a14[0]) * (float)&fStack_9c0 +
              (local_97c - (float)appvStack_a14[1]) * (float)auStack_96c +
              (local_978 - (float)appvStack_a14[2]) * (float)auStack_904) /
              (float)*(int *)((int)fVar9 + 7) + *(float *)((int)fVar9 + 0x17)) *
             *(float *)((int)fVar9 + 0xf);
      } while (uVar7 < DAT_005b6058);
    }
    uVar7 = (DAT_005b6058 - 2) + *(int *)(param_1 + 0x100);
    if (*(uint *)(param_1 + 0xfc) <= uVar7) {
      uVar7 = uVar7 + 8 & 0xfffffff8;
      *(uint *)(param_1 + 0xfc) = uVar7;
      pvStack_9c8 = operator_new(uVar7 * 0x60,(nothrow_t *)&DAT_005b6164);
      uVar7 = 0;
      if (*(int *)(param_1 + 0x100) != 0) {
        iVar4 = 0;
        do {
          puVar11 = (undefined4 *)(*(int *)(param_1 + 0xf8) + iVar4);
          puVar8 = (undefined4 *)(iVar4 + (int)pvStack_9c8);
          for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar8 = puVar8 + 1;
          }
          uVar7 = uVar7 + 1;
          iVar4 = iVar4 + 0x60;
        } while (uVar7 < *(uint *)(param_1 + 0x100));
      }
      operator_delete__(*(void **)(param_1 + 0xf8));
      *(void **)(param_1 + 0xf8) = pvStack_9c8;
    }
    uVar7 = 2;
    if (2 < DAT_005b6058) {
      iVar6 = 8;
      iVar4 = 4;
      do {
        puVar11 = (undefined4 *)*DAT_005b605c;
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x100) * 0x60 + *(int *)(param_1 + 0xf8));
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        puVar8[2] = puVar11[2];
        puVar11 = (undefined4 *)(*(int *)(param_1 + 0x100) * 0x60 + 0xc + *(int *)(param_1 + 0xf8));
        puVar8 = *(undefined4 **)(iVar4 + (int)DAT_005b605c);
        *puVar11 = *puVar8;
        puVar11[1] = puVar8[1];
        puVar11[2] = puVar8[2];
        puVar11 = (undefined4 *)(*(int *)(param_1 + 0x100) * 0x60 + 0x18 + *(int *)(param_1 + 0xf8))
        ;
        iVar4 = uVar7 * 4;
        puVar8 = (undefined4 *)DAT_005b605c[uVar7];
        *puVar11 = *puVar8;
        puVar11[1] = puVar8[1];
        puVar11[2] = puVar8[2];
        puVar11 = (undefined4 *)(*(int *)(param_1 + 0x100) * 0x60 + 0x24 + *(int *)(param_1 + 0xf8))
        ;
        *puVar11 = 0;
        puVar11[1] = 0x3f800000;
        puVar11[2] = 0;
        puVar11 = (undefined4 *)(*(int *)(param_1 + 0x100) * 0x60 + 0x30 + *(int *)(param_1 + 0xf8))
        ;
        *puVar11 = 0;
        puVar11[1] = 0x3f800000;
        puVar11[2] = 0;
        puVar11 = (undefined4 *)(*(int *)(param_1 + 0x100) * 0x60 + 0x3c + *(int *)(param_1 + 0xf8))
        ;
        *puVar11 = 0;
        puVar11[1] = 0x3f800000;
        puVar11[2] = 0;
        iVar2 = *(int *)(param_1 + 0xf8);
        iVar12 = *(int *)(param_1 + 0x100) * 0x60;
        *(float *)(iVar12 + 0x48 + iVar2) = afStack_878[2];
        *(float *)(iVar12 + 0x4c + iVar2) = afStack_878[3];
        iVar2 = *(int *)(param_1 + 0xf8);
        uVar3 = *(undefined4 *)((int)afStack_878 + iVar6 + 0xc);
        iVar12 = *(int *)(param_1 + 0x100) * 0x60;
        *(undefined4 *)(iVar12 + 0x50 + iVar2) = *(undefined4 *)((int)afStack_878 + iVar6 + 8);
        *(undefined4 *)(iVar12 + 0x54 + iVar2) = uVar3;
        iVar2 = *(int *)(param_1 + 0xf8);
        iVar6 = uVar7 * 8;
        iVar12 = *(int *)(param_1 + 0x100) * 0x60;
        *(float *)(iVar12 + 0x58 + iVar2) = afStack_878[uVar7 * 2 + 2];
        *(float *)(iVar12 + 0x5c + iVar2) = afStack_878[uVar7 * 2 + 3];
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
        uVar7 = uVar7 + 1;
        fVar9 = local_984;
      } while (uVar7 < DAT_005b6058);
    }
LAB_004302d4:
    iVar13 = iVar13 + 0x24;
  } while( true );
}




/* Function: FUN_00430310 */

undefined4 * __thiscall
FUN_00430310(undefined4 *param_1,undefined4 param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00588778;
  *(undefined1 *)(param_1 + 0x21) = 1;
  param_1[0x22] = param_2;
  FUN_00407f80(0x3f800000);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined2 *)(param_1 + 0x36) = 0xffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x37),param_3);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  FUN_00407310(0x3f800000);
  return param_1;
}




/* Function: FUN_004303c0 */

void __fastcall FUN_004303c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00588778;
  *(undefined2 *)(param_1 + 0x36) = 0xffff;
  operator_delete__((void *)param_1[0x3e]);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  if ((void *)param_1[0x47] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x47]);
  }
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  if ((void *)param_1[0x42] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x42]);
  }
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x37));
  FUN_00407300();
  FUN_0040da90();
  return;
}




/* Function: FUN_00430460 */

void * __thiscall FUN_00430460(void *param_1,byte param_2)

{
  FUN_004303c0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00430480 */

void __thiscall FUN_00430480(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = *param_3;
  param_1[4] = param_3[1];
  param_1[5] = param_3[2];
  return;
}




/* Function: FUN_004304b0 */

void __fastcall FUN_004304b0(float *param_1)

{
  float fVar1;
  
  if (param_1[3] < *param_1) {
    fVar1 = param_1[3];
    param_1[3] = *param_1;
    *param_1 = fVar1;
  }
  if (param_1[4] < param_1[1]) {
    fVar1 = param_1[4];
    param_1[4] = param_1[1];
    param_1[1] = fVar1;
  }
  if (param_1[5] < param_1[2]) {
    fVar1 = param_1[5];
    param_1[5] = param_1[2];
    param_1[2] = fVar1;
  }
  return;
}




/* Function: FUN_00430500 */

void __thiscall FUN_00430500(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_2[2] = param_1[2];
  param_2[1] = param_1[1];
  param_2[3] = param_1[3];
  param_2[5] = param_1[2];
  param_2[4] = param_1[1];
  param_2[6] = param_1[3];
  param_2[8] = param_1[5];
  param_2[7] = param_1[1];
  param_2[9] = *param_1;
  param_2[0xb] = param_1[5];
  param_2[10] = param_1[1];
  param_2[0xc] = *param_1;
  param_2[0xe] = param_1[2];
  param_2[0xd] = param_1[4];
  param_2[0xf] = param_1[3];
  param_2[0x11] = param_1[2];
  param_2[0x10] = param_1[4];
  param_2[0x12] = param_1[3];
  param_2[0x14] = param_1[5];
  param_2[0x13] = param_1[4];
  param_2[0x15] = *param_1;
  param_2[0x17] = param_1[5];
  param_2[0x16] = param_1[4];
  return;
}




/* Function: FUN_004305a0 */

float10 __fastcall FUN_004305a0(int param_1)

{
  return (float10)**(float **)(param_1 + 0xc);
}




/* Function: FUN_004305c0 */

int __fastcall FUN_004305c0(int param_1)

{
  return param_1 + 0x34;
}




/* Function: FUN_004305d0 */

int __fastcall FUN_004305d0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x6c;
}




/* Function: FUN_00430600 */

void __thiscall FUN_00430600(float *param_1,float *param_2)

{
  *param_1 = *param_2 + *param_1;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = param_2[2] + param_1[2];
  return;
}




/* Function: FUN_00430630 */

void __thiscall FUN_00430630(float *param_1,float *param_2)

{
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (param_1[3] < param_2[3]) {
    param_1[3] = param_2[3];
  }
  if (param_2[1] < param_1[1]) {
    param_1[1] = param_2[1];
  }
  if (param_1[4] < param_2[4]) {
    param_1[4] = param_2[4];
  }
  if (param_2[2] < param_1[2]) {
    param_1[2] = param_2[2];
  }
  if (param_1[5] < param_2[5]) {
    param_1[5] = param_2[5];
  }
  return;
}




/* Function: FUN_004306b0 */

void __thiscall FUN_004306b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return;
}




/* Function: FUN_004306e0 */

float * __thiscall FUN_004306e0(float *param_1,float *param_2,float *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [4];
  undefined4 local_5c [23];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = *param_3;
  param_1[4] = param_3[1];
  param_1[5] = param_3[2];
  local_84 = -1e+20;
  local_80 = -1e+20;
  local_7c = -1e+20;
  local_78 = 1e+20;
  local_74 = 1e+20;
  local_70 = 1e+20;
  FUN_00430500(local_60);
  puVar2 = local_5c;
  iVar1 = 8;
  do {
    local_6c = puVar2[-1];
    local_64 = puVar2[1];
    local_68 = *puVar2;
    FUN_00548704(&local_90,param_4,&local_6c);
    if (local_84 < local_90) {
      local_84 = local_90;
    }
    if (local_80 < local_8c) {
      local_80 = local_8c;
    }
    if (local_7c < local_88) {
      local_7c = local_88;
    }
    if (local_90 < local_78) {
      local_78 = local_90;
    }
    if (local_8c < local_74) {
      local_74 = local_8c;
    }
    if (local_88 < local_70) {
      local_70 = local_88;
    }
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *param_1 = local_78;
  param_1[1] = local_74;
  param_1[2] = local_70;
  param_1[3] = local_84;
  param_1[4] = local_80;
  param_1[5] = local_7c;
  return param_1;
}




/* Function: FUN_00430860 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00430860(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  double dVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint local_48 [4];
  undefined8 local_38;
  double local_30;
  double local_28;
  double adStack_20 [3];
  
  iVar5 = param_1 - (int)param_2;
  iVar8 = 0;
  iVar10 = (param_1 + 0xc) - (int)param_2;
  bVar3 = true;
  pfVar7 = param_2;
  do {
    if (*(float *)(iVar5 + (int)pfVar7) <= *pfVar7) {
      if (*pfVar7 <= *(float *)(iVar10 + (int)pfVar7)) {
        *(undefined1 *)((int)local_48 + iVar8) = 2;
      }
      else {
        fVar1 = *(float *)(iVar10 + (int)pfVar7);
        *(undefined1 *)((int)local_48 + iVar8) = 0;
        adStack_20[iVar8] = (double)fVar1;
        bVar3 = false;
      }
    }
    else {
      fVar1 = *(float *)(iVar5 + (int)pfVar7);
      *(undefined1 *)((int)local_48 + iVar8) = 1;
      adStack_20[iVar8] = (double)fVar1;
      bVar3 = false;
    }
    iVar8 = iVar8 + 1;
    pfVar7 = pfVar7 + 1;
  } while (iVar8 < 3);
  if (bVar3) {
    *param_4 = *param_2;
    fVar1 = param_2[1];
    param_4[1] = fVar1;
    param_4[2] = param_2[2];
    return CONCAT31((int3)((uint)fVar1 >> 8),1);
  }
  iVar8 = 0;
  pfVar7 = param_3;
  do {
    if ((*(char *)((int)local_48 + iVar8) == '\x02') || (*pfVar7 == (float)_DAT_00582ae8)) {
      *(undefined4 *)(&local_38 + iVar8) = 0;
      *(undefined4 *)((int)&local_38 + iVar8 * 8 + 4) = 0xbff00000;
    }
    else {
      (&local_38)[iVar8] =
           (double)(((float)adStack_20[iVar8] -
                    *(float *)(((int)param_2 - (int)param_3) + (int)pfVar7)) / *pfVar7);
    }
    iVar8 = iVar8 + 1;
    pfVar7 = pfVar7 + 1;
  } while (iVar8 < 3);
  local_48[0] = 0;
  if (local_38 < local_30) {
    local_48[0] = 1;
  }
  local_48[0] = (uint)(local_38 < local_30);
  if ((double)(&local_38)[local_48[0]] < local_28) {
    local_48[0] = 2;
  }
  dVar2 = (double)(&local_38)[local_48[0]];
  if (dVar2 < _DAT_00582ae8) {
    return (uint)(ushort)((ushort)(dVar2 < _DAT_00582ae8) << 8 |
                          (ushort)(NAN(dVar2) || NAN(_DAT_00582ae8)) << 10 |
                         (ushort)(dVar2 == _DAT_00582ae8) << 0xe);
  }
  uVar9 = 0;
  iVar8 = (int)param_3 - (int)param_2;
  iVar11 = (int)param_4 - (int)param_2;
  do {
    if (local_48[0] == uVar9) {
      *(float *)(iVar11 + (int)param_2) = (float)adStack_20[uVar9];
      uVar6 = local_48[0];
    }
    else {
      fVar4 = *(float *)(iVar8 + (int)param_2) * (float)(double)(&local_38)[local_48[0]] + *param_2;
      *(float *)(iVar11 + (int)param_2) = fVar4;
      fVar1 = *(float *)((int)param_2 + iVar5);
      if (fVar4 < fVar1) {
        return CONCAT22((short)((uint)iVar5 >> 0x10),
                        (ushort)(fVar4 < fVar1) << 8 | (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                        (ushort)(fVar4 == fVar1) << 0xe);
      }
      fVar1 = *(float *)((int)param_2 + iVar10);
      uVar6 = CONCAT22((short)((uint)iVar10 >> 0x10),
                       (ushort)(fVar4 < fVar1) << 8 | (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                       (ushort)(fVar4 == fVar1) << 0xe);
      if (fVar4 >= fVar1 && (fVar4 == fVar1) == 0) {
        return uVar6;
      }
    }
    uVar9 = uVar9 + 1;
    param_2 = param_2 + 1;
    if (2 < (int)uVar9) {
      return CONCAT31((int3)(uVar6 >> 8),1);
    }
  } while( true );
}




/* Function: FUN_00430a10 */

void __thiscall FUN_00430a10(int param_1,float param_2,undefined4 param_3)

{
  undefined1 local_44 [68];
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_004e4998(local_44);
    FUN_004e49c4(local_44,0x3f800000,param_2 + param_2);
    FUN_004e48a4(local_44,param_3);
    FUN_004e46e8(*(undefined4 *)(param_1 + 0xbc),local_44);
  }
  return;
}




/* Function: FUN_00430a70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00430a70(int param_1,float *param_2,float *param_3,undefined4 param_4)

{
  undefined1 local_44 [68];
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_004e4998(local_44);
    FUN_004e48ec(local_44,0x3f800000,(*param_3 - *param_2) * _DAT_00583334,
                 (param_3[1] - param_2[1]) * _DAT_0058334c,(param_3[2] - param_2[2]) * _DAT_0058334c
                );
    FUN_004e48a4(local_44,param_4);
    FUN_004e46e8(*(undefined4 *)(param_1 + 0xbc),local_44);
  }
  return;
}




/* Function: FUN_00430b00 */

void __fastcall FUN_00430b00(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar7 = (undefined4 *)FUN_0043f940();
  puVar8 = (undefined4 *)FUN_0043f930();
  uVar1 = puVar8[1];
  uVar2 = puVar8[2];
  uVar3 = *puVar7;
  uVar4 = puVar7[1];
  uVar5 = puVar7[2];
  iVar6 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar6 + 0xc) = *puVar8;
  *(undefined4 *)(iVar6 + 0x10) = uVar1;
  *(undefined4 *)(iVar6 + 0x14) = uVar2;
  *(undefined4 *)(iVar6 + 0x18) = uVar3;
  *(undefined4 *)(iVar6 + 0x1c) = uVar4;
  *(undefined4 *)(iVar6 + 0x20) = uVar5;
  return;
}




/* Function: FUN_00430b70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00430b70(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (*(float *)(param_2 + 0x218) - *(float *)(param_2 + 0x20c)) * *(float *)(param_1 + 0x18);
  fVar4 = (*(float *)(param_2 + 0x21c) - *(float *)(param_2 + 0x210)) * *(float *)(param_1 + 0x1c);
  fVar3 = (*(float *)(param_2 + 0x220) - *(float *)(param_2 + 0x214)) * *(float *)(param_1 + 0x20);
  fVar3 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) * (float)_DAT_00587c38;
  fVar4 = fVar3 * _DAT_0058334c;
  FUN_00430a10(fVar4,param_3);
  iVar1 = *(int *)(param_1 + 0xc);
  fVar2 = -fVar3;
  *(float *)(iVar1 + 0x10) = fVar2;
  *(float *)(iVar1 + 0x14) = fVar2;
  *(float *)(iVar1 + 0xc) = fVar2;
  *(float *)(iVar1 + 0x1c) = fVar3;
  *(float *)(iVar1 + 0x18) = fVar3;
  *(float *)(iVar1 + 0x20) = fVar3;
  **(float **)(param_1 + 0xc) = fVar4;
  return;
}




/* Function: FUN_00430c40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00430c40(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = ABS(*(float *)(param_2 + 0x21c) - *(float *)(param_2 + 0x210)) * _DAT_00583340;
  fVar4 = fVar3 * _DAT_0058334c;
  FUN_00430a10(fVar4,param_3);
  iVar1 = *(int *)(param_1 + 0xc);
  fVar2 = -fVar3;
  *(float *)(iVar1 + 0x10) = fVar2;
  *(float *)(iVar1 + 0x14) = fVar2;
  *(float *)(iVar1 + 0xc) = fVar2;
  *(float *)(iVar1 + 0x18) = fVar3;
  *(float *)(iVar1 + 0x1c) = fVar3;
  *(float *)(iVar1 + 0x20) = fVar3;
  **(float **)(param_1 + 0xc) = fVar4;
  (*(undefined4 **)(param_1 + 0xc))[1] = **(undefined4 **)(param_1 + 0xc);
  return;
}




/* Function: FUN_00430cd0 */

void __thiscall FUN_00430cd0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *param_2 = *(undefined4 *)(iVar1 + 0x80);
  param_2[1] = *(undefined4 *)(iVar1 + 0x84);
  param_2[2] = *(undefined4 *)(iVar1 + 0x88);
  return;
}




/* Function: FUN_00430d00 */

void __thiscall FUN_00430d00(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar5 = FUN_0043f940();
  uVar6 = FUN_0043f930();
  FUN_00430a70(uVar6,uVar5,param_3);
  puVar7 = (undefined4 *)FUN_0043f940();
  puVar8 = (undefined4 *)FUN_0043f930();
  uVar6 = puVar8[2];
  uVar5 = puVar8[1];
  uVar1 = *puVar7;
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  iVar4 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar4 + 0xc) = *puVar8;
  *(undefined4 *)(iVar4 + 0x10) = uVar5;
  *(undefined4 *)(iVar4 + 0x14) = uVar6;
  *(undefined4 *)(iVar4 + 0x18) = uVar1;
  *(undefined4 *)(iVar4 + 0x1c) = uVar2;
  *(undefined4 *)(iVar4 + 0x20) = uVar3;
  iVar4 = *(int *)(param_1 + 0xc);
  *(float *)(iVar4 + 0x48) =
       (*(float *)(iVar4 + 0x18) - *(float *)(iVar4 + 0xc)) *
       (*(float *)(iVar4 + 0x1c) - *(float *)(iVar4 + 0x10)) *
       (*(float *)(iVar4 + 0x20) - *(float *)(iVar4 + 0x14));
  return;
}




/* Function: FUN_00430e60 */

void FUN_00430e60(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b842;
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




/* Function: FUN_00430ee0 */

void FUN_00430ee0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 0x1b;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 0x1b; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}




/* Function: FUN_00430f10 */

void FUN_00430f10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    param_3 = param_3 + -0x1b;
    param_4 = param_4 + -0x1b;
    puVar2 = param_3;
    puVar3 = param_4;
    for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  } while (param_3 != param_2);
  *param_1 = param_4;
  return;
}




/* Function: FUN_00430f50 */

void FUN_00430f50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = param_3 + 6;
    puVar2 = param_4 + 6;
    do {
      param_3 = param_3 + -10;
      param_4 = param_4 + -10;
      if (param_3 != param_4) {
        *param_4 = *param_3;
        puVar2[-0xf] = puVar1[-0xf];
        puVar2[-0xe] = puVar1[-0xe];
      }
      puVar2[-0xd] = puVar1[-0xd];
      if (puVar1 + -0xc != puVar2 + -0xc) {
        puVar2[-0xc] = puVar1[-0xc];
        puVar2[-0xb] = puVar1[-0xb];
        puVar2[-10] = puVar1[-10];
      }
      if (puVar1 + -9 != puVar2 + -9) {
        puVar2[-9] = puVar1[-9];
        puVar2[-8] = puVar1[-8];
        puVar2[-7] = puVar1[-7];
      }
      puVar1 = puVar1 + -10;
      puVar2 = puVar2 + -10;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return;
  }
  *param_1 = param_4;
  return;
}




/* Function: FUN_00430ff0 */

undefined4 FUN_00430ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00430f10(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00431030 */

void FUN_00431030(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_1 + 6;
    do {
      if (param_3 != param_1) {
        *param_1 = *param_3;
        puVar1[-5] = param_3[1];
        puVar1[-4] = param_3[2];
      }
      puVar1[-3] = param_3[3];
      if (param_3 + 4 != puVar1 + -2) {
        puVar1[-2] = param_3[4];
        puVar1[-1] = param_3[5];
        *puVar1 = param_3[6];
      }
      if (param_3 + 7 != puVar1 + 1) {
        puVar1[1] = param_3[7];
        puVar1[2] = param_3[8];
        puVar1[3] = param_3[9];
      }
      param_1 = param_1 + 10;
      puVar1 = puVar1 + 10;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_004310b0 */

undefined4 FUN_004310b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00430f50(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_004310f0 */

void FUN_004310f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1b) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 0x1b;
  }
  return;
}




/* Function: FUN_00431120 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00431120(int param_1)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int *piVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint local_b8;
  int local_b4;
  float local_b0 [3];
  undefined1 local_a4 [12];
  undefined1 local_98 [24];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  uVar12 = 0;
  pfVar1 = (float *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0xbc) == 0) {
    FUN_0041d670(param_1 + 0x7c);
  }
  else {
    if (*(int *)(param_1 + 0x10) == 4) {
      local_b8 = 0;
      while( true ) {
        iVar9 = *(int *)(param_1 + 0xc);
        if ((*(int *)(iVar9 + 0x50) == 0) ||
           ((uint)((*(int *)(iVar9 + 0x54) - *(int *)(iVar9 + 0x50)) / 0x28) <= uVar12)) break;
        iVar9 = *(int *)(iVar9 + 0x50) + local_b8;
        if ((undefined4 *)(iVar9 + 0x10) != (undefined4 *)(iVar9 + 0x1c)) {
          *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(iVar9 + 0x10);
          *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(iVar9 + 0x14);
          *(undefined4 *)(iVar9 + 0x24) = *(undefined4 *)(iVar9 + 0x18);
        }
        uVar12 = uVar12 + 1;
        local_b8 = local_b8 + 0x28;
      }
    }
    uVar4 = 0x3c23d70a;
    uVar3 = FUN_00547ab0(local_98);
    puVar6 = (undefined4 *)FUN_0041d5b0(local_b0,uVar3,uVar4);
    iVar9 = *(int *)(param_1 + 0xc);
    if (puVar6 != (undefined4 *)(iVar9 + 0x3c)) {
      *(undefined4 *)(iVar9 + 0x3c) = *puVar6;
      *(undefined4 *)(iVar9 + 0x40) = puVar6[1];
      *(undefined4 *)(iVar9 + 0x44) = puVar6[2];
    }
    FUN_0041d670(pfVar1);
    pfVar10 = (float *)FUN_004e4748(*(undefined4 *)(param_1 + 0xbc));
    pfVar7 = (float *)FUN_004e473c(*(undefined4 *)(param_1 + 0xbc));
    FUN_00407310(0x3f800000);
    *pfVar1 = *(float *)(param_1 + 0x18) * *pfVar7;
    *(float *)(param_1 + 0x38) = pfVar7[4] * *(float *)(param_1 + 0x18);
    fVar2 = pfVar7[8];
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(float *)(param_1 + 0x3c) = fVar2 * *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x44) = pfVar7[1] * *(float *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x48) = pfVar7[5] * *(float *)(param_1 + 0x1c);
    fVar2 = pfVar7[9];
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(float *)(param_1 + 0x4c) = fVar2 * *(float *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x54) = pfVar7[2] * *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x58) = pfVar7[6] * *(float *)(param_1 + 0x20);
    fVar2 = pfVar7[10];
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(float *)(param_1 + 0x5c) = fVar2 * *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 100) = *pfVar10;
    *(float *)(param_1 + 0x68) = pfVar10[1];
    *(float *)(param_1 + 0x6c) = pfVar10[2];
    *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
    if (*(int *)(param_1 + 0x10) == 4) {
      local_b8 = 0;
      local_b4 = 0;
      while( true ) {
        iVar9 = *(int *)(param_1 + 0xc);
        if ((*(int *)(iVar9 + 0x50) == 0) ||
           ((uint)((*(int *)(iVar9 + 0x54) - *(int *)(iVar9 + 0x50)) / 0x28) <= local_b8)) break;
        iVar9 = *(int *)(iVar9 + 0x50) + local_b4;
        uVar3 = FUN_0041d5b0(local_b0,iVar9,0x3c23d70a);
        puVar6 = (undefined4 *)FUN_00548704(local_98,pfVar1,uVar3);
        if (puVar6 != (undefined4 *)(iVar9 + 0x10)) {
          *(undefined4 *)(iVar9 + 0x10) = *puVar6;
          *(undefined4 *)(iVar9 + 0x14) = puVar6[1];
          *(undefined4 *)(iVar9 + 0x18) = puVar6[2];
        }
        local_b8 = local_b8 + 1;
        local_b4 = local_b4 + 0x28;
      }
    }
    *(float *)(param_1 + 100) = *pfVar10 * _DAT_00588808;
    *(float *)(param_1 + 0x68) = pfVar10[1] * _DAT_00588808;
    *(float *)(param_1 + 0x6c) = pfVar10[2] * _DAT_00588808;
    if (*(char *)(param_1 + 0x30) != '\0') {
      _eh_vector_constructor_iterator_
                (local_80,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
      FUN_00407310(0x3f800000);
      FUN_00545c38(param_1 + 0x24);
      uVar3 = FUN_0041d7a0(local_40,local_80,pfVar1);
      FUN_0041d670(uVar3);
      _eh_vector_destructor_iterator_(local_40,0x10,4,FUN_00407150);
      _eh_vector_destructor_iterator_(local_80,0x10,4,FUN_00407150);
    }
  }
  iVar9 = *(int *)(param_1 + 0xc);
  pfVar10 = (float *)(iVar9 + 0xc);
  if (*(int *)(param_1 + 0x10) == 3) {
    pfVar7 = (float *)FUN_00547ab0(local_b0);
    *(float *)(*(int *)(param_1 + 0xc) + 0x24) = *pfVar10 + *pfVar7;
    iVar8 = FUN_00547ab0(local_b0);
    *(float *)(*(int *)(param_1 + 0xc) + 0x28) = *(float *)(iVar8 + 4) + *(float *)(iVar9 + 0x10);
    iVar8 = FUN_00547ab0(local_b0);
    *(float *)(*(int *)(param_1 + 0xc) + 0x2c) = *(float *)(iVar8 + 8) + *(float *)(iVar9 + 0x14);
    pfVar10 = (float *)FUN_00547ab0(local_b0);
    *(float *)(*(int *)(param_1 + 0xc) + 0x30) = *(float *)(iVar9 + 0x18) + *pfVar10;
    iVar8 = FUN_00547ab0(local_b0);
    *(float *)(*(int *)(param_1 + 0xc) + 0x34) = *(float *)(iVar8 + 4) + *(float *)(iVar9 + 0x1c);
    iVar8 = FUN_00547ab0(local_b0);
    *(float *)(*(int *)(param_1 + 0xc) + 0x38) = *(float *)(iVar8 + 8) + *(float *)(iVar9 + 0x20);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x14);
    if ((iVar8 == 0) || (*(char *)(param_1 + 0x79) == '\0')) {
      puVar13 = (undefined1 *)(iVar9 + 0x18);
    }
    else {
      pfVar7 = local_b0;
      for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
        *pfVar7 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        pfVar7 = pfVar7 + 1;
      }
      piVar11 = *(int **)(iVar8 + 0x1b4);
      if (piVar11 != *(int **)(iVar8 + 0x1b8)) {
        do {
          if ((*(char *)(*piVar11 + 4) != '\0') && (*(char *)(*piVar11 + 0x27e) != '\0')) {
            FUN_004ffac0();
            uVar3 = FUN_0043f940();
            FUN_004ffac0();
            uVar4 = FUN_0043f930();
            uVar5 = FUN_004ffa70();
            FUN_004306e0(uVar4,uVar3,uVar5);
            FUN_00430630(local_98);
          }
          piVar11 = piVar11 + 1;
        } while (piVar11 != *(int **)(iVar8 + 0x1b8));
      }
      puVar13 = local_a4;
      pfVar10 = local_b0;
    }
    puVar6 = (undefined4 *)FUN_004306e0(pfVar10,puVar13,pfVar1);
    iVar9 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(iVar9 + 0x24) = *puVar6;
    *(undefined4 *)(iVar9 + 0x28) = puVar6[1];
    *(undefined4 *)(iVar9 + 0x2c) = puVar6[2];
    *(undefined4 *)(iVar9 + 0x30) = puVar6[3];
    *(undefined4 *)(iVar9 + 0x34) = puVar6[4];
    *(undefined4 *)(iVar9 + 0x38) = puVar6[5];
  }
  iVar9 = *(int *)(param_1 + 0xc);
  *(float *)(iVar9 + 0x5c) = *pfVar1;
  *(undefined4 *)(iVar9 + 0x68) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(iVar9 + 0x74) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(iVar9 + 0x60) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(iVar9 + 0x6c) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(iVar9 + 0x78) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(iVar9 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(iVar9 + 0x70) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(iVar9 + 0x7c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(iVar9 + 0x80) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(iVar9 + 0x84) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(iVar9 + 0x88) = *(undefined4 *)(param_1 + 0x6c);
  *(float *)(*(int *)(param_1 + 0xc) + 0x5c) =
       *(float *)(*(int *)(param_1 + 0xc) + 0x5c) / *(float *)(param_1 + 0x18);
  *(float *)(*(int *)(param_1 + 0xc) + 0x68) =
       *(float *)(*(int *)(param_1 + 0xc) + 0x68) / *(float *)(param_1 + 0x18);
  *(float *)(*(int *)(param_1 + 0xc) + 0x74) =
       *(float *)(*(int *)(param_1 + 0xc) + 0x74) / *(float *)(param_1 + 0x18);
  *(float *)(*(int *)(param_1 + 0xc) + 0x60) =
       *(float *)(*(int *)(param_1 + 0xc) + 0x60) / *(float *)(param_1 + 0x1c);
  *(float *)(*(int *)(param_1 + 0xc) + 0x6c) =
       *(float *)(*(int *)(param_1 + 0xc) + 0x6c) / *(float *)(param_1 + 0x1c);
  *(float *)(*(int *)(param_1 + 0xc) + 0x78) =
       *(float *)(*(int *)(param_1 + 0xc) + 0x78) / *(float *)(param_1 + 0x1c);
  *(float *)(*(int *)(param_1 + 0xc) + 100) =
       *(float *)(*(int *)(param_1 + 0xc) + 100) / *(float *)(param_1 + 0x20);
  *(float *)(*(int *)(param_1 + 0xc) + 0x70) =
       *(float *)(*(int *)(param_1 + 0xc) + 0x70) / *(float *)(param_1 + 0x20);
  *(float *)(*(int *)(param_1 + 0xc) + 0x7c) =
       *(float *)(*(int *)(param_1 + 0xc) + 0x7c) / *(float *)(param_1 + 0x20);
  *(float *)(*(int *)(param_1 + 0xc) + 0x80) =
       *(float *)(*(int *)(param_1 + 0xc) + 0x80) * _DAT_0058334c;
  *(float *)(*(int *)(param_1 + 0xc) + 0x84) =
       *(float *)(*(int *)(param_1 + 0xc) + 0x84) * _DAT_0058334c;
  *(float *)(*(int *)(param_1 + 0xc) + 0x88) =
       *(float *)(*(int *)(param_1 + 0xc) + 0x88) * _DAT_0058334c;
  return;
}




/* Function: FUN_00431650 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00431650(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e4 [12];
  undefined1 local_d8 [64];
  undefined1 local_98 [12];
  undefined1 local_8c [64];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b866;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00407260(param_2);
  iVar4 = param_1 + 0x24;
  local_4 = 0;
  uVar2 = FUN_00547ab0(local_98);
  uVar2 = FUN_0041d580(local_e4,uVar2,iVar4);
  FUN_00545c38(uVar2);
  FUN_0041d670(local_d8);
  FUN_0041d670(local_d8);
  FUN_00431120();
  puVar3 = (undefined4 *)FUN_00547a54(local_e4);
  puVar1 = (undefined4 *)(param_1 + 0x18);
  if (puVar3 != puVar1) {
    *puVar1 = *puVar3;
    *(undefined4 *)(param_1 + 0x1c) = puVar3[1];
    *(undefined4 *)(param_1 + 0x20) = puVar3[2];
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    _eh_vector_constructor_iterator_
              (local_8c,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
    FUN_00407310(0x3f800000);
    local_4._0_1_ = 1;
    uVar2 = FUN_00547224(local_4c,0x40490fdb);
    FUN_0041d670(uVar2);
    _eh_vector_destructor_iterator_(local_4c,0x10,4,FUN_00407150);
    FUN_005489a8(local_8c);
    local_f0 = local_100;
    local_ec = local_fc;
    local_f4 = local_104;
    local_e8 = local_f8;
    FUN_004e479c(*(undefined4 *)(param_1 + 0xbc),&local_f4);
    FUN_00547ab0(&local_110);
    FUN_004e4804(*(undefined4 *)(param_1 + 0xbc),local_110 * _DAT_0058334c,local_10c * _DAT_0058334c
                 ,local_108 * _DAT_0058334c);
    puVar3 = (undefined4 *)FUN_00547a54(local_e4);
    if (puVar3 != puVar1) {
      *puVar1 = *puVar3;
      *(undefined4 *)(param_1 + 0x1c) = puVar3[1];
      *(undefined4 *)(param_1 + 0x20) = puVar3[2];
    }
    FUN_00431120();
    local_4 = (uint)local_4._1_3_ << 8;
    _eh_vector_destructor_iterator_(local_8c,0x10,4,FUN_00407150);
  }
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_d8,0x10,4,FUN_00407150);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00431890 */

void __thiscall FUN_00431890(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((param_2 != 0) || (param_3 != 0)) &&
     (iVar2 = *(int *)(param_1 + 8), iVar2 != *(int *)(param_1 + 0xc))) {
    do {
      uVar1 = FUN_004e4618(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x18),iVar2);
      iVar3 = param_3;
      iVar4 = param_2;
      if (*(char *)(iVar2 + 0x68) == '\0') {
        iVar3 = param_2;
        iVar4 = param_3;
      }
      FUN_004e3cc0(uVar1,iVar3,iVar4);
      iVar2 = iVar2 + 0x6c;
    } while (iVar2 != *(int *)(param_1 + 0xc));
  }
  return;
}




/* Function: FUN_004318f0 */

void FUN_004318f0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = param_3;
      puVar3 = param_1;
      for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = param_1 + 0x1b;
  }
  return;
}




/* Function: FUN_00431920 */

void FUN_00431920(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = param_3 + 6;
    puVar2 = param_1 + 6;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *param_1;
        puVar1[-5] = puVar2[-5];
        puVar1[-4] = puVar2[-4];
        puVar1[-3] = puVar2[-3];
        puVar1[-2] = puVar2[-2];
        puVar1[-1] = puVar2[-1];
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        puVar1[3] = puVar2[3];
      }
      param_1 = param_1 + 10;
      param_3 = param_3 + 10;
      puVar1 = puVar1 + 10;
      puVar2 = puVar2 + 10;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_00431990 */

void __thiscall FUN_00431990(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  
  *(char *)(param_1 + 9) = param_4;
  if (param_4 == '\0') {
    uVar1 = FUN_004fb920();
    uVar1 = FUN_004e3e0c(uVar1);
    *(undefined4 *)(param_1 + 0xbc) = uVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  *(undefined1 *)(param_1 + 0xc0) = 1;
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_004e4668(*(int *)(param_1 + 0xbc));
  }
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  FUN_00431650(param_3);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x43960000;
  return;
}




/* Function: FUN_00431a00 */

void __thiscall
FUN_00431a00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004310f0(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00431a30 */

void FUN_00431a30(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = param_1 + 6;
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        puVar1[-5] = param_3[1];
        puVar1[-4] = param_3[2];
        puVar1[-3] = param_3[3];
        puVar1[-2] = param_3[4];
        puVar1[-1] = param_3[5];
        *puVar1 = param_3[6];
        puVar1[1] = param_3[7];
        puVar1[2] = param_3[8];
        puVar1[3] = param_3[9];
      }
      param_1 = param_1 + 10;
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}




/* Function: FUN_00431a90 */

int __thiscall FUN_00431a90(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_004318f0(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x6c + param_2;
}




/* Function: FUN_00431ac0 */

void __thiscall FUN_00431ac0(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_80 [27];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057b870;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff74;
  puVar6 = local_80;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x6c;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x6c;
    }
    if (0x25ed097U - iVar4 < param_3) {
      ExceptionList = &local_10;
      FUN_0041d2d0();
      ExceptionList = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x6c;
    }
    if (uVar5 < iVar4 + param_3) {
      if (0x25ed097 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x6c;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xffffff74;
      if (uVar5 < iVar3 + param_3) {
        ExceptionList = &local_10;
        local_14 = &stack0xffffff74;
        iVar3 = FUN_004305d0();
        uVar5 = iVar3 + param_3;
      }
      iVar3 = FUN_00493c27();
      local_8 = 0;
      uVar2 = FUN_004310f0(*(undefined4 *)(param_1 + 4));
      FUN_004318f0(uVar2);
      FUN_004310f0(param_2);
      pvVar1 = *(void **)(param_1 + 4);
      if (pvVar1 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_1 + 8) - (int)pvVar1) / 0x6c;
      }
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      *(uint *)(param_1 + 0xc) = uVar5 * 0x6c + iVar3;
      *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x6c + iVar3;
      *(int *)(param_1 + 4) = iVar3;
      ExceptionList = local_10;
      return;
    }
    if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x6c) < param_3) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffff74;
      FUN_00431a00();
      local_8 = 2;
      FUN_00431a90();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x6c;
    }
    else {
      ExceptionList = &local_10;
      local_14 = &stack0xffffff74;
      uVar2 = FUN_00431a00();
      *(undefined4 *)(param_1 + 8) = uVar2;
      FUN_00430ff0();
    }
    FUN_00430ee0();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00431dc0 */

void __thiscall
FUN_00431dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00431920(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00431df0 */

void __thiscall FUN_00431df0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x6c != 0) {
      iVar1 = (param_3 - iVar1) / 0x6c;
      goto LAB_00431e37;
    }
  }
  iVar1 = 0;
LAB_00431e37:
  FUN_00431ac0(param_3,1,param_4);
  *param_2 = iVar1 * 0x6c + *(int *)(param_1 + 4);
  return;
}




/* Function: FUN_00431e60 */

int __thiscall FUN_00431e60(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00431a30(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0x28;
}




/* Function: FUN_00431e90 */

void __thiscall
FUN_00431e90(undefined4 *param_1,undefined4 **param_2,undefined1 *param_3,undefined4 **param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *local_54;
  undefined4 *local_50;
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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_3;
  puVar1 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057b880;
  local_10 = ExceptionList;
  local_38 = param_4[1];
  local_3c = *param_4;
  local_34 = param_4[2];
  local_2c = param_4[4];
  local_30 = param_4[3];
  local_24 = param_4[6];
  local_28 = param_4[5];
  local_1c = param_4[8];
  local_20 = param_4[7];
  iVar5 = param_1[1];
  local_18 = param_4[9];
  local_14 = &stack0xffffffb8;
  if (iVar5 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = (undefined1 *)((param_1[3] - iVar5) / 0x28);
  }
  if (param_3 != (undefined1 *)0x0) {
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (param_1[2] - iVar5) / 0x28;
    }
    if ((undefined1 *)(0x6666666U - iVar4) < param_3) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffb8;
      FUN_00430e60();
      ExceptionList = local_10;
      return;
    }
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (param_1[2] - iVar5) / 0x28;
    }
    if (puVar6 < param_3 + iVar4) {
      if ((undefined1 *)(0x6666666 - ((uint)puVar6 >> 1)) < puVar6) {
        puVar6 = (undefined1 *)0x0;
      }
      else {
        puVar6 = puVar6 + ((uint)puVar6 >> 1);
      }
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (param_1[2] - iVar5) / 0x28;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xffffffb8;
      if (puVar6 < param_3 + iVar5) {
        ExceptionList = &local_10;
        local_14 = &stack0xffffffb8;
        iVar5 = FUN_00480400();
        puVar6 = puVar2 + iVar5;
      }
      local_50 = (undefined4 *)0x431fda;
      param_4 = (undefined4 **)FUN_00493c27();
      local_8 = 0;
      local_54 = param_4;
      local_50 = param_1;
      param_3 = (undefined1 *)FUN_00431920(param_1[1],param_2);
      local_54 = &local_3c;
      local_50 = param_1;
      FUN_00431a30(param_3,puVar2);
      local_54 = (undefined4 *)((int)param_3 + (int)puVar2 * 0x28);
      local_50 = param_1;
      FUN_00431920(param_2,param_1[2]);
      if (param_1[1] == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(param_1[2] - param_1[1]) / 0x28;
      }
      iVar4 = param_1[1];
      if (iVar4 == 0) {
        param_1[3] = param_4 + (int)puVar6 * 10;
        param_1[2] = param_4 + (int)(puVar2 + iVar5) * 10;
        param_1[1] = param_4;
        ExceptionList = local_10;
        return;
      }
      for (; iVar4 != param_1[2]; iVar4 = iVar4 + 0x28) {
      }
                    /* WARNING: Subroutine does not return */
      local_50 = (undefined4 *)&UNK_00432083;
      operator_delete((void *)param_1[1]);
    }
    param_4 = (undefined4 **)param_1[2];
    local_50 = param_4;
    if ((undefined1 *)(((int)param_4 - (int)param_2) / 0x28) < param_3) {
      local_54 = param_2;
      ExceptionList = &local_10;
      param_2 = (undefined4 **)((int)param_3 * 0x28);
      param_4 = &local_54;
      local_14 = &stack0xffffffb8;
      FUN_00431dc0();
      local_54 = (undefined4 *)param_1[2];
      local_50 = (undefined4 *)(puVar2 + -(((int)local_54 - (int)puVar1) / 0x28));
      local_8 = 2;
      FUN_00431e60();
      iVar5 = param_1[2];
      param_1[2] = iVar5 + (int)param_2;
      local_50 = (undefined4 *)((iVar5 + (int)param_2) - (int)param_2);
    }
    else {
      param_2 = param_4 + (int)param_3 * -10;
      ExceptionList = &local_10;
      local_54 = param_2;
      uVar3 = FUN_00431dc0();
      param_1[2] = uVar3;
      param_3 = &stack0xffffffb4;
      param_4 = &local_50;
      local_50 = param_2;
      local_54 = puVar1;
      param_2 = &local_54;
      FUN_004310b0(&param_2);
      local_50 = puVar1 + (int)puVar2 * 10;
    }
    param_2 = &local_54;
    local_54 = puVar1;
    FUN_00431030();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004321e0 */

void __thiscall FUN_004321e0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x6c) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x6c))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_004318f0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x6c;
    return;
  }
  FUN_00431df0(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_00432270 */

void __thiscall FUN_00432270(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x28 != 0) {
      iVar1 = (param_3 - iVar1) / 0x28;
      goto LAB_004322b7;
    }
  }
  iVar1 = 0;
LAB_004322b7:
  FUN_00431e90(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x28;
  return;
}




/* Function: FUN_004322e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004322e0(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_6c [26];
  undefined1 local_4;
  
  uVar1 = *(undefined1 *)(param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20);
  puVar7 = param_2;
  puVar8 = local_6c;
  for (iVar6 = 0x1a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar6 = *(int *)(param_1 + 8);
  while( true ) {
    if (iVar6 == *(int *)(param_1 + 0xc)) {
      local_4 = uVar1;
      FUN_004321e0(local_6c);
      return;
    }
    fVar3 = (float)param_2[0xd] - *(float *)(iVar6 + 0x34);
    fVar4 = (float)param_2[0xc] - *(float *)(iVar6 + 0x30);
    fVar5 = (float)param_2[0xb] - *(float *)(iVar6 + 0x2c);
    fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
    if (fVar3 < fVar2 != (fVar3 == fVar2)) break;
    iVar6 = iVar6 + 0x6c;
  }
  *(float *)(iVar6 + 0x2c) = ((float)param_2[0xb] + *(float *)(iVar6 + 0x2c)) * _DAT_00583340;
  *(float *)(iVar6 + 0x30) = (*(float *)(iVar6 + 0x30) + (float)param_2[0xc]) * _DAT_00583340;
  *(float *)(iVar6 + 0x34) = (*(float *)(iVar6 + 0x34) + (float)param_2[0xd]) * _DAT_00583340;
  *(float *)(iVar6 + 0x3c) = ((float)param_2[0xf] + *(float *)(iVar6 + 0x3c)) * _DAT_00583340;
  *(float *)(iVar6 + 0x40) = ((float)param_2[0x10] + *(float *)(iVar6 + 0x40)) * _DAT_00583340;
  *(float *)(iVar6 + 0x44) = ((float)param_2[0x11] + *(float *)(iVar6 + 0x44)) * _DAT_00583340;
  if (*(float *)(iVar6 + 0x4c) <= (float)param_2[0x13]) {
    *(float *)(iVar6 + 0x4c) =
         *(float *)(iVar6 + 0x4c) * (float)_DAT_00588818 +
         (float)param_2[0x13] * (float)_DAT_00588810;
    return;
  }
  *(float *)(iVar6 + 0x4c) =
       *(float *)(iVar6 + 0x4c) * (float)_DAT_00588810 + (float)param_2[0x13] * (float)_DAT_00588818
  ;
  return;
}




/* Function: FUN_00432410 */

void __thiscall FUN_00432410(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x28) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x28))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00431a30(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x28;
    return;
  }
  FUN_00432270(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_004324a0 */

int __fastcall FUN_004324a0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_00407f80(0x3f800000);
  *(undefined4 *)(param_1 + 0x48) = 0;
  return param_1;
}




/* Function: FUN_00432500 */

void __fastcall FUN_00432500(int param_1)

{
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x8c),0x10,4,FUN_00407150);
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x50));
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}




/* Function: FUN_00432be0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00432be0(undefined4 *param_1,undefined4 param_2,float param_3,undefined4 param_4,
            undefined4 param_5)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b8a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00588840;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 0xd,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310(0x3f800000);
  local_4 = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 0x1f,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310(0x3f800000);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  pvVar3 = operator_new(0xcc,(nothrow_t *)&DAT_005b6164);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004324a0();
  }
  param_1[3] = uVar4;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)((int)param_1 + 9) = 0;
  uVar4 = FUN_004fb920();
  iVar5 = FUN_004e3e0c(uVar4);
  param_1[0x2f] = iVar5;
  *(undefined1 *)(param_1 + 0x30) = 1;
  if (iVar5 != 0) {
    FUN_004e4668(iVar5);
  }
  *(undefined1 *)((int)param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x79) = 0;
  FUN_00431650(param_4);
  fVar2 = param_3 * _DAT_0058334c;
  param_1[0x1d] = 0x43960000;
  param_1[1] = 0;
  FUN_00430a10(fVar2,param_5);
  fVar1 = -param_3;
  *(float *)param_1[3] = fVar2;
  ((undefined4 *)param_1[3])[1] = *(undefined4 *)param_1[3];
  iVar5 = param_1[3];
  param_1[4] = 3;
  *(float *)(iVar5 + 0xc) = fVar1;
  *(float *)(iVar5 + 0x10) = fVar1;
  *(float *)(iVar5 + 0x14) = fVar1;
  *(float *)(iVar5 + 0x18) = param_3;
  *(float *)(iVar5 + 0x20) = param_3;
  *(float *)(iVar5 + 0x1c) = param_3;
  iVar5 = param_1[3];
  *(float *)(iVar5 + 0x48) =
       (*(float *)(iVar5 + 0x18) - *(float *)(iVar5 + 0xc)) *
       (*(float *)(iVar5 + 0x1c) - *(float *)(iVar5 + 0x10)) *
       (*(float *)(iVar5 + 0x20) - *(float *)(iVar5 + 0x14));
  FUN_00431120();
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00432dc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00432dc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6)

{
  undefined4 *puVar1;
  float fVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  uint unaff_retaddr;
  undefined1 local_111;
  float local_110 [9];
  int local_ec;
  float local_e8 [3];
  int local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_74 [8];
  float local_6c;
  undefined4 *local_68;
  undefined1 local_64 [16];
  int local_54 [17];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b8c6;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00588840;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar1 = param_1 + 9;
  *puVar1 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_68 = param_1;
  _eh_vector_constructor_iterator_
            (param_1 + 0xd,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310(0x3f800000);
  local_4 = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 0x1f,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310(0x3f800000);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  pvVar3 = operator_new(0xcc,(nothrow_t *)&DAT_005b6164);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004324a0();
  }
  param_1[3] = uVar4;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  if (param_6 != (undefined4 *)0x0) {
    if (param_6 != puVar1) {
      *puVar1 = *param_6;
      param_1[10] = param_6[1];
      param_1[0xb] = param_6[2];
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  *(undefined1 *)((int)param_1 + 9) = 0;
  uVar4 = FUN_004fb920();
  iVar5 = FUN_004e3e0c(uVar4);
  param_1[0x2f] = iVar5;
  *(undefined1 *)(param_1 + 0x30) = 1;
  if (iVar5 != 0) {
    FUN_004e4668(iVar5);
  }
  *(undefined1 *)((int)param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x79) = 0;
  FUN_00431650(param_4);
  param_1[0x1d] = 0x43960000;
  param_1[1] = 0;
  param_1[4] = 4;
  iVar5 = FUN_00410660(param_3,&DAT_00582818);
  if (iVar5 != 0) {
    FUN_0040f000(local_54,1,0x44,iVar5);
    local_110[3] = 1e+20;
    local_110[4] = 1e+20;
    local_110[5] = 1e+20;
    local_110[0] = -1e+20;
    local_110[1] = -1e+20;
    local_110[2] = -1e+20;
    local_ec = 0;
    if (0 < local_54[0]) {
      do {
        FUN_0040f000(&local_dc,1,0x24,iVar5);
        local_a8 = 0;
        local_a4 = 0;
        local_a0 = 0;
        local_9c = 0;
        local_98 = 0;
        local_94 = 0;
        iVar7 = 0;
        local_6c = (local_c4 + local_d0) * _DAT_00583340;
        local_b8 = (local_cc + local_d8) * _DAT_00583340 + (float)param_1[9];
        local_b4 = (local_c8 + local_d4) * _DAT_00583340 + (float)param_1[10];
        local_b0 = local_6c + (float)param_1[0xb];
        local_ac = SQRT((local_cc - local_d8) * (local_cc - local_d8) +
                        (local_c8 - local_d4) * (local_c8 - local_d4) +
                        (local_c4 - local_d0) * (local_c4 - local_d0)) * (float)_DAT_00587c38;
        fVar2 = _DAT_00583340 * local_ac;
        local_110[6] = local_b8 - fVar2;
        local_110[7] = local_b4 - fVar2;
        local_110[8] = local_b0 - fVar2;
        local_e8[0] = local_b8 + fVar2;
        local_e8[1] = local_b4 + fVar2;
        local_e8[2] = fVar2 + local_b0;
        do {
          if (*(float *)((int)local_110 + iVar7 + 0x18) < *(float *)((int)local_110 + iVar7 + 0xc))
          {
            *(undefined4 *)((int)local_110 + iVar7 + 0xc) =
                 *(undefined4 *)((int)local_110 + iVar7 + 0x18);
          }
          if (*(float *)((int)local_110 + iVar7) < *(float *)((int)local_e8 + iVar7)) {
            *(undefined4 *)((int)local_110 + iVar7) = *(undefined4 *)((int)local_e8 + iVar7);
          }
          iVar7 = iVar7 + 4;
        } while (iVar7 < 0xc);
        local_ac = local_ac * _DAT_0058334c;
        FUN_00432410(&local_b8);
        iVar7 = 0;
        if (0 < local_dc) {
          do {
            FUN_0040f000(local_64,1,0x10,iVar5);
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_dc);
        }
        iVar7 = 0;
        if (0 < local_dc) {
          do {
            local_111 = 0;
            FUN_0040f000(&local_111,1,1,iVar5);
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_dc);
        }
        local_ec = local_ec + 1;
      } while (local_ec < local_54[0]);
    }
    FUN_0040efb0(iVar5);
    iVar5 = param_1[3];
    local_110[4] = local_110[4] - _DAT_00588860;
    *(float *)(iVar5 + 0xc) = local_110[3];
    *(float *)(iVar5 + 0x10) = local_110[4];
    *(float *)(iVar5 + 0x14) = local_110[5];
    *(float *)(iVar5 + 0x18) = local_110[0];
    *(float *)(iVar5 + 0x1c) = local_110[1];
    *(float *)(iVar5 + 0x20) = local_110[2];
    local_e8[0] = local_110[3];
    local_e8[2] = local_110[5];
    local_110[6] = local_110[0];
    local_110[7] = local_110[1];
    local_110[8] = local_110[2];
    local_e8[1] = local_110[4];
    pfVar6 = (float *)FUN_0041d580(auStack_74,local_110 + 6,local_e8);
    *(float *)param_1[3] =
         SQRT(pfVar6[2] * pfVar6[2] + pfVar6[1] * pfVar6[1] + *pfVar6 * *pfVar6) * _DAT_0058885c;
    iVar5 = param_1[3];
    *(float *)(iVar5 + 0x48) =
         (*(float *)(iVar5 + 0x18) - *(float *)(iVar5 + 0xc)) *
         (*(float *)(iVar5 + 0x1c) - *(float *)(iVar5 + 0x10)) *
         (*(float *)(iVar5 + 0x20) - *(float *)(iVar5 + 0x14));
    FUN_00431120();
    if (param_1[0x2f] != 0) {
      FUN_004e4998(&local_b8);
      FUN_004e48ec(&local_b8,0x3f800000,(local_110[0] - local_110[3]) * _DAT_00583334,
                   (local_110[1] - local_110[4]) * _DAT_0058334c,
                   (local_110[2] - local_110[5]) * _DAT_0058334c);
      FUN_004e48a4(&local_b8,param_5);
      FUN_004e46e8(param_1[0x2f],&local_b8);
    }
  }
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00433320 */

undefined4 * __thiscall
FUN_00433320(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  void *pvVar1;
  undefined4 uVar2;
  
  *param_1 = &PTR_FUN_00588840;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_00407f80(0x3f800000);
  FUN_00407f80(0x3f800000);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  pvVar1 = operator_new(0xcc,(nothrow_t *)&DAT_005b6164);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004324a0();
  }
  param_1[3] = uVar2;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  FUN_00431990(param_2,param_4,param_6 == 5);
  switch(param_6) {
  case 0:
  case 1:
  case 5:
    FUN_00430b00(param_3,param_5);
    param_1[4] = 1;
    FUN_00431120();
    return param_1;
  case 2:
    FUN_00430d00(param_3,param_5);
    param_1[4] = 1;
    FUN_00431120();
    return param_1;
  case 3:
    FUN_00430b70(param_3,param_5);
    break;
  case 4:
    FUN_00430c40(param_3,param_5);
    break;
  default:
    goto switchD_004333e0_default;
  }
  param_1[4] = 3;
switchD_004333e0_default:
  FUN_00431120();
  return param_1;
}




/* Function: FUN_00433490 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00433490(int param_1,int param_2,int param_3,float *param_4,int param_5,undefined4 param_6,
            int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  int local_c8;
  float *local_c4;
  float *local_a8;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  undefined4 local_74;
  undefined4 local_70;
  float local_54;
  float local_50;
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  undefined1 local_14 [16];
  
  if (*(int *)(param_1 + 0x10) == 4) {
    uVar6 = 0;
    local_c4 = (float *)0x0;
    while( true ) {
      iVar12 = *(int *)(param_1 + 0xc);
      if ((*(int *)(iVar12 + 0x50) == 0) ||
         ((uint)((*(int *)(iVar12 + 0x54) - *(int *)(iVar12 + 0x50)) / 0x28) <= uVar6)) break;
      iVar12 = *(int *)(iVar12 + 0x50) + (int)local_c4;
      fVar2 = *(float *)(iVar12 + 0xc);
      local_c8 = 0;
      if (0 < param_5) {
        local_a8 = param_4;
        iVar7 = (int)param_4 - param_3;
        pfVar11 = (float *)(param_3 + 8);
        do {
          if (((param_7 == 0) || (*(char *)(local_c8 + param_7) != '\0')) &&
             ((float)_DAT_00582ae8 <=
              fVar2 - (*(float *)(iVar7 + 4 + (int)pfVar11) * _DAT_0058334c +
                      ((-(*local_a8 * *(float *)(iVar12 + 0x1c)) -
                       *(float *)(iVar7 + -4 + (int)pfVar11) * *(float *)(iVar12 + 0x20)) -
                      *(float *)(iVar12 + 0x24) * *(float *)(iVar7 + (int)pfVar11))))) {
            fVar15 = (float10)fVar2 -
                     ((float10)pfVar11[1] * (float10)_DAT_0058334c +
                     ((-((float10)pfVar11[-2] * (float10)*(float *)(iVar12 + 0x10)) -
                      (float10)*(float *)(iVar12 + 0x14) * (float10)pfVar11[-1]) -
                     (float10)*pfVar11 * (float10)*(float *)(iVar12 + 0x18)));
            if ((float10)_DAT_00582ae8 <= fVar15) {
              fVar13 = (float10)fVar2 - fVar15;
              if (fVar13 < (float10)_DAT_00582ad8) {
                fVar13 = (float10)_DAT_00582ad8;
              }
              pfVar9 = (float *)(param_3 + 8);
              fVar14 = (float10)fsin((fVar15 * (float10)_DAT_00588838) / (float10)fVar2);
              local_54 = fVar2 * pfVar11[-2] + *(float *)(iVar12 + 0x10);
              local_50 = fVar2 * pfVar11[-1] + *(float *)(iVar12 + 0x14);
              local_4c = fVar2 * *pfVar11 + *(float *)(iVar12 + 0x18);
              iVar8 = 0;
              do {
                if ((local_c8 != iVar8) &&
                   (fVar1 = pfVar9[1] * _DAT_0058334c +
                            ((-((float)(fVar13 * (float10)pfVar11[-2] +
                                       (float10)*(float *)(iVar12 + 0x10)) * pfVar9[-2]) -
                             (float)(fVar13 * (float10)pfVar11[-1] +
                                    (float10)*(float *)(iVar12 + 0x14)) * pfVar9[-1]) -
                            (float)(fVar13 * (float10)*pfVar11 + (float10)*(float *)(iVar12 + 0x18))
                            * *pfVar9),
                   fVar3 = (float)(fVar14 * (float10)fVar2) * (float)_DAT_00588830,
                   fVar3 < fVar1 != (fVar3 == fVar1))) goto LAB_00433827;
                iVar8 = iVar8 + 1;
                pfVar9 = pfVar9 + 4;
              } while (iVar8 < param_5);
              local_80 = 4;
              fVar13 = (float10)fVar2 + (float10)fVar2;
              local_7c = 0.0;
              local_74 = 0x3f000000;
              local_70 = 0x3c23d70a;
              fVar1 = (float)fVar13;
              fVar3 = (float)fVar15;
              if (fVar13 < fVar15) {
                fVar15 = (float10)fVar1;
                fVar3 = fVar1;
              }
              local_34 = (float)fVar15;
              local_44 = -pfVar11[-2];
              local_40 = -pfVar11[-1];
              local_3c = -*pfVar11;
              if ((float)_DAT_00587c38 < local_40) {
                *(undefined1 *)(param_1 + 0x7a) = 1;
              }
              if ((float10)*(float *)(param_1 + 0xd0) < fVar15) {
                local_8c = local_54;
                local_88 = local_50;
                local_84 = local_4c;
                puVar4 = (undefined4 *)FUN_0041d5b0(local_14,&local_8c,0x42c80000);
                puVar5 = (undefined4 *)(param_1 + 0xc4);
                if (puVar4 != puVar5) {
                  *puVar5 = *puVar4;
                  *(undefined4 *)(param_1 + 200) = puVar4[1];
                  *(undefined4 *)(param_1 + 0xcc) = puVar4[2];
                }
                if (puVar5 != (undefined4 *)(param_2 + 0xc4)) {
                  *(undefined4 *)(param_2 + 0xc4) = *puVar5;
                  *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_1 + 200);
                  *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
                }
                fVar1 = (float)_DAT_00588868;
                *(float *)(param_1 + 0xd0) = fVar3 * fVar1;
                *(float *)(param_2 + 0xd0) = fVar3 * fVar1;
              }
              if ((*(char *)(param_1 + 0x78) != '\0') && ((float)_DAT_00587c38 < local_40)) {
                local_44 = 0.0;
                local_40 = 1.0;
                local_3c = 0.0;
              }
              *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0x14);
              *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_1 + 0x14);
              FUN_004322e0(&local_80);
            }
          }
LAB_00433827:
          local_a8 = local_a8 + 4;
          local_c8 = local_c8 + 1;
          pfVar11 = pfVar11 + 4;
        } while (local_c8 < param_5);
      }
      uVar6 = uVar6 + 1;
      local_c4 = (float *)((int)local_c4 + 0x28);
    }
  }
  else {
    pfVar11 = *(float **)(param_1 + 0xc);
    fVar2 = *pfVar11;
    iVar12 = 0;
    if (0 < param_5) {
      iVar7 = (int)param_4 - param_3;
      local_c4 = param_4;
      pfVar9 = (float *)(param_3 + 8);
      do {
        if (((param_7 == 0) || (*(char *)(iVar12 + param_7) != '\0')) &&
           ((float)_DAT_00582ae8 <=
            fVar2 - (*(float *)(iVar7 + 4 + (int)pfVar9) * _DAT_0058334c +
                    ((-(pfVar11[0xf] * *local_c4) -
                     *(float *)(iVar7 + -4 + (int)pfVar9) * pfVar11[0x10]) -
                    pfVar11[0x11] * *(float *)(iVar7 + (int)pfVar9))))) {
          fVar15 = (float10)fVar2 -
                   ((float10)pfVar9[1] * (float10)_DAT_0058334c +
                   ((-((float10)pfVar9[-2] * (float10)pfVar11[0x20]) -
                    (float10)pfVar9[-1] * (float10)pfVar11[0x21]) -
                   (float10)pfVar11[0x22] * (float10)*pfVar9));
          if ((float10)_DAT_00582ae8 <= fVar15) {
            fVar13 = (float10)fVar2 - fVar15;
            if (fVar13 < (float10)_DAT_00582ad8) {
              fVar13 = (float10)_DAT_00582ad8;
            }
            iVar8 = 0;
            fVar14 = (float10)fsin((fVar15 * (float10)_DAT_00588838) / (float10)fVar2);
            local_54 = fVar2 * pfVar9[-2] + pfVar11[0x20];
            local_50 = fVar2 * pfVar9[-1] + pfVar11[0x21];
            local_4c = fVar2 * *pfVar9 + pfVar11[0x22];
            pfVar10 = (float *)(param_3 + 8);
            do {
              if ((iVar12 != iVar8) &&
                 (fVar1 = pfVar10[1] * _DAT_0058334c +
                          ((-((float)(fVar13 * (float10)pfVar9[-2] + (float10)pfVar11[0x20]) *
                             pfVar10[-2]) -
                           (float)(fVar13 * (float10)pfVar9[-1] + (float10)pfVar11[0x21]) *
                           pfVar10[-1]) -
                          (float)(fVar13 * (float10)*pfVar9 + (float10)pfVar11[0x22]) * *pfVar10),
                 fVar3 = (float)(fVar14 * (float10)fVar2) * (float)_DAT_00588830,
                 fVar3 < fVar1 != (fVar3 == fVar1))) goto LAB_00433b88;
              iVar8 = iVar8 + 1;
              pfVar10 = pfVar10 + 4;
            } while (iVar8 < param_5);
            local_80 = 4;
            local_7c = ABS(pfVar9[-1]) * *(float *)(param_1 + 0x74);
            local_74 = 0x3e99999a;
            local_70 = 0x3c23d70a;
            fVar13 = (float10)fVar2 + (float10)fVar2;
            fVar1 = (float)fVar13;
            fVar3 = (float)fVar15;
            if (fVar13 < fVar15) {
              fVar15 = (float10)fVar1;
              fVar3 = fVar1;
            }
            local_34 = (float)fVar15;
            local_44 = -pfVar9[-2];
            local_40 = -pfVar9[-1];
            local_3c = -*pfVar9;
            if ((float)_DAT_00587c38 < local_40) {
              *(undefined1 *)(param_1 + 0x7a) = 1;
            }
            if ((float10)*(float *)(param_1 + 0xd0) < fVar15) {
              local_8c = local_54;
              local_88 = local_50;
              local_84 = local_4c;
              puVar5 = (undefined4 *)FUN_0041d5b0(local_14,&local_8c,0x42c80000);
              if (puVar5 != (undefined4 *)(param_1 + 0xc4)) {
                *(undefined4 *)(param_1 + 0xc4) = *puVar5;
                *(undefined4 *)(param_1 + 200) = puVar5[1];
                *(undefined4 *)(param_1 + 0xcc) = puVar5[2];
              }
              *(float *)(param_1 + 0xd0) = fVar3 * (float)_DAT_00588868;
            }
            if ((*(char *)(param_1 + 0x78) != '\0') && ((float)_DAT_00587c38 < local_40)) {
              local_44 = 0.0;
              local_40 = 1.0;
              local_3c = 0.0;
            }
            *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0x14);
            FUN_004322e0(&local_80);
          }
        }
LAB_00433b88:
        local_c4 = local_c4 + 4;
        iVar12 = iVar12 + 1;
        pfVar9 = pfVar9 + 4;
      } while (iVar12 < param_5);
    }
  }
  return 0;
}




/* Function: FUN_00433bb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00433bb0(int param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint unaff_retaddr;
  int in_stack_00000014;
  int in_stack_00000018;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  int local_204;
  undefined4 local_200;
  ushort local_1fc;
  int local_1f8;
  float local_1f4 [27];
  float local_188;
  float local_184;
  float local_180;
  undefined1 local_17c [12];
  undefined1 local_170 [64];
  undefined1 local_130 [64];
  undefined1 local_f0 [64];
  undefined1 local_b0 [64];
  float local_70 [24];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b8fc;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  if (*(int *)(in_stack_00000018 + 8) == 0) {
    local_204 = 0;
  }
  else {
    local_204 = (*(int *)(in_stack_00000018 + 0xc) - *(int *)(in_stack_00000018 + 8)) / 0x6c;
  }
  ExceptionList = &local_c;
  local_1f8 = param_1;
  FUN_00407260(in_stack_00000014 + 0x34);
  local_4 = 0;
  FUN_00407260(local_130);
  local_210 = 0;
  local_20c = 0;
  local_208 = 0;
  FUN_00545c38(&local_210);
  FUN_00407260(*(int *)(in_stack_00000014 + 0xc) + 0x8c);
  FUN_00407260(local_f0);
  local_4 = CONCAT31(local_4._1_3_,3);
  local_210 = 0;
  local_20c = 0;
  local_208 = 0;
  FUN_00545c38(&local_210);
  pfVar2 = local_1f4 + 1;
  iVar3 = 6;
  do {
    pfVar2[1] = 0.0;
    *pfVar2 = 0.0;
    pfVar2[-1] = 0.0;
    pfVar2[2] = 1.0;
    pfVar2 = pfVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pfVar2 = local_70 + 1;
  iVar3 = 6;
  do {
    pfVar2[1] = 0.0;
    *pfVar2 = 0.0;
    pfVar2[-1] = 0.0;
    pfVar2[2] = 1.0;
    pfVar2 = pfVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  fVar1 = _DAT_00588878;
  if (*(int *)(param_1 + 0x10) == 3) {
    fVar1 = _DAT_00587fa8;
  }
  local_1f4[3] = -param_2[4];
  local_200 = 0x1010101;
  local_1f4[0] = 0.0;
  local_1f4[1] = -1.0;
  local_1f4[2] = 0.0;
  local_1f4[4] = 1.0;
  local_1f4[7] = *param_2 - fVar1;
  local_1f4[5] = 0.0;
  local_1f4[6] = 0.0;
  local_1f4[8] = -1.0;
  local_1f4[9] = 0.0;
  local_1f4[10] = 0.0;
  local_1f4[0xc] = 0.0;
  local_1f4[0xb] = -param_2[3] - fVar1;
  local_1f4[0xd] = 0.0;
  local_1f4[0xe] = 1.0;
  local_1f4[0x10] = 0.0;
  local_1f4[0x11] = 0.0;
  local_1f4[0x12] = -1.0;
  local_1f4[0x14] = 0.0;
  local_1f4[0x15] = 1.0;
  local_1f4[0x16] = 0.0;
  local_1f4[0xf] = param_2[2] - fVar1 * (float)_DAT_00588870;
  local_1f4[0x17] = param_2[1];
  local_1fc = 0x101;
  local_1f4[0x13] = -param_2[5] - fVar1 * (float)_DAT_00588870;
  iVar3 = 0;
  do {
    local_208 = *(undefined4 *)((int)local_1f4 + iVar3 + 8);
    local_210 = *(undefined4 *)((int)local_1f4 + iVar3);
    local_20c = *(undefined4 *)((int)local_1f4 + iVar3 + 4);
    FUN_0041d5b0(local_17c,&local_210,*(undefined4 *)((int)local_1f4 + iVar3 + 0xc));
    FUN_005488cc(&local_228,&local_210,local_170);
    fVar1 = SQRT(local_228 * local_228 + local_224 * local_224 + local_220 * local_220);
    if ((float)_DAT_00587c48 <= fVar1) {
      fVar1 = _DAT_00583354 / fVar1;
      local_228 = local_228 * fVar1;
      local_224 = local_224 * fVar1;
      local_220 = local_220 * fVar1;
    }
    else {
      local_228 = 0.0;
      local_224 = 1.0;
      local_220 = 0.0;
    }
    FUN_005488cc(&local_188,local_17c,local_130);
    *(float *)((int)local_1f4 + iVar3) = local_228;
    *(float *)((int)local_1f4 + iVar3 + 4) = local_224;
    *(float *)((int)local_1f4 + iVar3 + 8) = local_220;
    *(float *)((int)local_1f4 + iVar3 + 0xc) =
         local_188 * local_228 + local_184 * local_224 + local_180 * local_220;
    FUN_005488cc(&local_21c,&local_210,local_b0);
    fVar1 = SQRT(local_21c * local_21c + local_218 * local_218 + local_214 * local_214);
    if ((float)_DAT_00587c48 <= fVar1) {
      fVar1 = _DAT_00583354 / fVar1;
      local_21c = local_21c * fVar1;
      local_218 = local_218 * fVar1;
      local_214 = local_214 * fVar1;
    }
    else {
      local_21c = 0.0;
      local_218 = 1.0;
      local_214 = 0.0;
    }
    FUN_005488cc(local_1f4 + 0x18,local_17c,local_f0);
    *(float *)((int)local_70 + iVar3) = local_21c;
    iVar4 = iVar3 + 0x10;
    *(float *)((int)local_70 + iVar3 + 4) = local_218;
    *(float *)((int)local_70 + iVar3 + 8) = local_214;
    *(float *)((int)local_70 + iVar3 + 0xc) =
         local_1f4[0x18] * local_21c + local_1f4[0x19] * local_218 + local_1f4[0x1a] * local_214;
    iVar3 = iVar4;
  } while (iVar4 < 0x60);
  local_1fc = local_1fc & 0xff;
  FUN_00433490(local_1f8,in_stack_00000014,local_1f4,local_70,6,in_stack_00000018,&local_200);
  if (*(int *)(in_stack_00000018 + 8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)(in_stack_00000018 + 0xc) - *(int *)(in_stack_00000018 + 8)) / 0x6c;
  }
  iVar3 = iVar3 - local_204;
  local_4._0_1_ = 2;
  _eh_vector_destructor_iterator_(local_b0,0x10,4,FUN_00407150);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(local_f0,0x10,4,FUN_00407150);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(local_170,0x10,4,FUN_00407150);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_130,0x10,4,FUN_00407150);
  ExceptionList = local_c;
  return iVar3;
}




/* Function: FUN_00434860 */

void __fastcall FUN_00434860(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_00588840;
  if (pvVar1 != (void *)0x0) {
    FUN_00432500();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  FUN_00407300();
  FUN_00407300();
  return;
}




/* Function: FUN_004348a0 */

void * __thiscall FUN_004348a0(void *param_1,byte param_2)

{
  FUN_00434860();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004348e0 */

void __fastcall FUN_004348e0(undefined2 *param_1)

{
  *param_1 = 0xffff;
  *(undefined4 *)((int)param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 7) = 0;
  *(undefined4 *)((int)param_1 + 0xb) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xf) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x13) = 0;
  *(undefined4 *)((int)param_1 + 0x17) = 0;
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0xc))(1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(undefined4 **)(param_1 + 0x16) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x16))(1);
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  return;
}




/* Function: FUN_00434930 */

void __fastcall FUN_00434930(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0xc))(1);
  }
  *param_1 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  param_1[1] = 0;
  return;
}




/* Function: FUN_00434980 */

int __fastcall FUN_00434980(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x30;
}




/* Function: FUN_004349b0 */

bool __fastcall FUN_004349b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    return true;
  }
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  iVar1 = iVar2 >> 0x1f;
  return iVar2 / 0x30 + iVar1 == iVar1;
}




/* Function: FUN_004349e0 */

undefined4 __fastcall FUN_004349e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  return CONCAT31((int3)(iVar1 >> 0xb),iVar1 >> 3 == 0);
}




/* Function: FUN_00434a10 */

int __fastcall FUN_00434a10(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38;
}




/* Function: FUN_00434a40 */

undefined4 FUN_00434a40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0041d5b0(param_1,param_3,param_2);
  return param_1;
}





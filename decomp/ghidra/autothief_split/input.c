/* input functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_0040aba0 */

void __thiscall FUN_0040aba0(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint local_4;
  
  if (*(char *)(param_1 + 0x1090) == '\0') {
    piVar1 = *(int **)(param_1 + 0x1118);
    *(undefined1 *)(param_1 + 0x1110) = 1;
    local_4._1_3_ = (undefined3)((uint)param_1 >> 8);
    local_4 = CONCAT31(local_4._1_3_,(char)(param_3 >> 0x18)) & 0xffffff01;
    piVar2 = (int *)*piVar1;
    while (piVar2 != piVar1) {
      (**(code **)(*(int *)piVar2[3] + 4))(param_2,param_3 & 0xffff,param_3 >> 0x10 & 0xff,local_4);
      FUN_00407dc0();
      piVar1 = *(int **)(param_1 + 0x1118);
    }
    FUN_0041cae0();
    iVar3 = FUN_0042dbb0();
    if (iVar3 != 0) {
      FUN_00412e58(iVar3,"OnKeyUp");
      FUN_00412cfc(iVar3,(double)param_2);
      FUN_00412798(iVar3,1,0);
    }
    FUN_00409ac0();
  }
  return;
}




/* Function: FUN_0040ac60 */

void __thiscall FUN_0040ac60(int param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_4;
  
  if (*(char *)(param_1 + 0x1090) == '\0') {
    piVar1 = *(int **)(param_1 + 0x1118);
    *(undefined1 *)(param_1 + 0x1110) = 1;
    local_4._1_3_ = (undefined3)((uint)param_1 >> 8);
    local_4 = CONCAT31(local_4._1_3_,(char)(param_3 >> 0x18)) & 0xffffff01;
    uVar3 = local_4;
    piVar2 = (int *)*piVar1;
    while (piVar2 != piVar1) {
      (**(code **)(*(int *)piVar2[3] + 8))(param_2,param_3 & 0xffff,param_3 >> 0x10 & 0xff,uVar3);
      FUN_00407dc0();
      piVar1 = *(int **)(param_1 + 0x1118);
    }
    FUN_0041cae0();
    iVar4 = FUN_0042dbb0();
    if (iVar4 != 0) {
      FUN_00412e58(iVar4,"OnKeyDn");
      FUN_00412cfc(iVar4,(double)(int)param_2);
      FUN_00412798(iVar4,1,0);
    }
    local_4 = param_2;
    (**(code **)(*param_4 + 0x44))(param_4,0xfffffffd,&local_4);
    FUN_00409ac0();
  }
  return;
}





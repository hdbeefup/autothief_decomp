/* entry_point functions - AutoThief.exe Ghidra decompilation */

/* Function: entry */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int entry(void)

{
  HMODULE pHVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  byte *pbVar7;
  _STARTUPINFOA local_7c;
  byte *local_38;
  int local_34;
  int local_30;
  char **local_2c;
  char **local_28;
  _startupinfo local_24;
  uint local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0058f470;
  uStack_c = 0x4cf24f;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar1->unused == 0x5a4d) &&
     (piVar5 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused), *piVar5 == 0x4550)) {
    if ((short)piVar5[6] == 0x10b) {
      if (0xe < (uint)piVar5[0x1d]) {
        iVar4 = piVar5[0x3a];
        goto LAB_004cf2a6;
      }
    }
    else if (((short)piVar5[6] == 0x20b) && (0xe < (uint)piVar5[0x21])) {
      iVar4 = piVar5[0x3e];
LAB_004cf2a6:
      local_20 = (uint)(iVar4 != 0);
      goto LAB_004cf2ac;
    }
  }
  local_20 = 0;
LAB_004cf2ac:
  local_8 = (undefined *)0x0;
  __set_app_type(2);
  _DAT_005b81c8 = 0xffffffff;
  DAT_005b81cc = 0xffffffff;
  puVar2 = (undefined4 *)__p__fmode();
  *puVar2 = DAT_005b6dcc;
  puVar2 = (undefined4 *)__p__commode();
  *puVar2 = DAT_005b6dc8;
  _DAT_005b81c4 = *(undefined4 *)_adjust_fdiv_exref;
  FUN_004cf70c();
  FUN_004c5013();
  if (DAT_005b12d0 == 0) {
    __setusermatherr(FUN_004c5013);
  }
  FUN_004cf79a();
  initterm(&DAT_005a20a4,&DAT_005a20a8);
  _atexit((_func_4879 *)&LAB_004cf750);
  local_24.newmode = DAT_005b6dc4;
  local_34 = __getmainargs(&local_30,&local_2c,&local_28,DAT_005b6dc0,&local_24);
  if (local_34 < 0) {
    _amsg_exit(8);
  }
  initterm(&DAT_005a2000,&DAT_005a20a0);
  local_38 = *(byte **)_acmdln_exref;
  if (*local_38 != 0x22) {
    do {
      if (*local_38 < 0x21) goto LAB_004cf397;
      local_38 = local_38 + 1;
    } while( true );
  }
  do {
    local_38 = local_38 + 1;
    if (*local_38 == 0) break;
  } while (*local_38 != 0x22);
  if (*local_38 != 0x22) goto LAB_004cf397;
  do {
    local_38 = local_38 + 1;
LAB_004cf397:
    pbVar7 = local_38;
  } while ((*local_38 != 0) && (*local_38 < 0x21));
  local_7c.dwFlags = 0;
  GetStartupInfoA(&local_7c);
  if ((local_7c.dwFlags & 1) == 0) {
    uVar3 = 10;
  }
  else {
    uVar3 = (uint)local_7c.wShowWindow;
  }
  uVar6 = 0;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  iVar4 = FUN_004042a0(pHVar1,uVar6,pbVar7,uVar3);
  if (local_20 == 0) {
                    /* WARNING: Subroutine does not return */
    exit(iVar4);
  }
  _cexit();
  return iVar4;
}





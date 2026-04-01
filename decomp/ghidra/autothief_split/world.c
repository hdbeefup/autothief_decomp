/* world functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_0042a1f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FUN_0042a1f0(int *param_1,char *param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint unaff_retaddr;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_58 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_3c [28];
  undefined *local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057b713;
  local_10 = ExceptionList;
  local_18 = DAT_005b12c0 ^ unaff_retaddr;
  local_1c = 0;
  local_14 = &stack0xffffff9c;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffff9c;
  if ((DAT_005b603c & 1) == 0) {
    DAT_005b603c = DAT_005b603c | 1;
    ExceptionList = &local_10;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_005b6024);
    _atexit((_func_4879 *)&LAB_00580c30);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  local_20 = &DAT_005b6024;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005b6024);
  local_8 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_3c);
  local_8._0_1_ = 1;
  pcVar2 = param_2;
  if (param_2 == (char *)0x0) {
    pcVar2 = "";
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_3c,pcVar2);
  FUN_00420ca0(&param_2,local_3c);
  if (((char *)param_1[100] == param_2) || (*(int *)(param_2 + 0x24) == 0)) {
    param_2 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
    local_8._0_1_ = 2;
    if (param_2 == (void *)0x0) {
      pcVar2 = (char *)0x0;
    }
    else {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_58,"");
      local_1c = 1;
      pcVar2 = (char *)FUN_00429b50(param_1,local_58,local_3c);
    }
    local_8._0_1_ = 1;
    param_2 = pcVar2;
    if ((local_1c & 1) != 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_58);
    }
    piVar3 = (int *)FUN_00428b30(local_3c);
    *piVar3 = (int)pcVar2;
    SetLastError(0);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_004248d0();
    *(int *)(pcVar2 + 0x110) = *(int *)(pcVar2 + 0x110) + 5;
    pcVar2[0x10c] = '\x01';
    pcVar2[0x10d] = '\0';
    pcVar2[0x10e] = '\0';
    pcVar2[0x10f] = '\0';
    pcVar2[0xa0] = '\0';
    pcVar2[0xa1] = '\0';
    pcVar2[0xa2] = '\0';
    pcVar2[0xa3] = '\0';
    pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (pcVar2 + 0xc4));
    uVar5 = FUN_0041e5b0("Loading empty level [%s]",pcVar4);
    FUN_0040a410(uVar5);
    FUN_004fec80(param_1,pcVar2);
    uVar5 = FUN_0041e5b0("Initializing loaded objects");
    FUN_0040a410(uVar5);
    pvVar6 = operator_new(400,(nothrow_t *)&DAT_005b6164);
    if (pvVar6 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_0050f170(0,1);
    }
    *(int **)(pcVar2 + 0xe8) = piVar3;
    (**(code **)(*piVar3 + 8))(0);
    (**(code **)(*param_1 + 0x1c))(param_1,pcVar2);
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (pcVar2 + 0xc4));
    uVar5 = FUN_0041e5b0("Empty level [%s] successfully loaded",pcVar2);
    FUN_0040a410(uVar5);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_3c);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005b6024);
  ExceptionList = local_10;
  return 1;
}




/* Function: FUN_0042d000 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FUN_0042d000(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint unaff_retaddr;
  undefined1 *puVar9;
  int local_194;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_190 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_174 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_158 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_13c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_120 [28];
  undefined1 local_104 [256];
  uint local_4;
  
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_174);
  pcVar4 = param_2;
  if (param_2 == (char *)0x0) {
    pcVar4 = "";
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_174,pcVar4);
  FUN_00420ca0(&local_194,local_174);
  iVar6 = 0;
  if ((*(int *)(param_1 + 400) != local_194) && (iVar6 = *(int *)(local_194 + 0x24), iVar6 != 0)) {
    iVar2 = FUN_00422160(param_2);
    if (iVar2 == 2) {
      uVar3 = FUN_0041e5b0("Waiting for end of level [%s] loading",param_2);
      FUN_0040a410(uVar3);
      FUN_00422210(param_2);
    }
    iVar2 = FUN_00422160(param_2);
    if (iVar2 == 0) {
      uVar3 = FUN_0041e5b0("Level [%s] not loaded",param_2);
      FUN_0040a410(uVar3);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_174);
      return 0;
    }
    if (iVar2 == 2) {
      uVar3 = FUN_0041e5b0("Level [%s] not yet loaded",param_2);
      FUN_0040a410(uVar3);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_174);
      return 0;
    }
    if (iVar2 == 3) {
      uVar3 = FUN_0041e5b0("Can\'t load level [%s]",param_2);
      FUN_0040a410(uVar3);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_174);
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_0042a4f0(param_1);
    iVar2 = FUN_0042dbb0();
    if (iVar2 != 0) {
      puVar9 = local_104;
      pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(*(int *)(param_1 + 0x130) + 0xc4));
      FUN_0050f460(pcVar4,puVar9);
      uVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_13c,"_SwitchLevel");
      puVar9 = local_104;
      uVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_120,"_");
      uVar3 = FUN_00411994(local_158,uVar5,puVar9,uVar3);
      FUN_00411e6c(local_190,uVar3);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_158);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_120);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_13c);
      pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(local_190);
      FUN_00412e58(iVar2,pcVar4);
      FUN_00412cfc(iVar2,0,0);
      FUN_00412798(iVar2,1,0);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_190);
    }
    puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x130) + 0xf0);
    if (puVar8 != *(undefined4 **)(*(int *)(param_1 + 0x130) + 0xf4)) {
      do {
        (**(code **)(*(int *)*puVar8 + 0x28))(param_1,0);
        puVar8 = puVar8 + 2;
      } while (puVar8 != *(undefined4 **)(*(int *)(param_1 + 0x130) + 0xf4));
    }
  }
  *(int *)(param_1 + 0x130) = iVar6;
  if (iVar6 != 0) {
    if (*(int **)(param_1 + 0x1704) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x1704) + 0x1c))(param_1,iVar6);
      (**(code **)(**(int **)(param_1 + 0x1704) + 0x90))(param_1);
      FUN_0042a4f0(param_1);
    }
    iVar6 = FUN_0042dbb0();
    if (iVar6 != 0) {
      puVar9 = local_104;
      pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(*(int *)(param_1 + 0x130) + 0xc4));
      FUN_0050f460(pcVar4,puVar9);
      uVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_158,"_InitialUpdate");
      puVar9 = local_104;
      uVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_120,"_");
      uVar3 = FUN_00411994(local_13c,uVar5,puVar9,uVar3);
      FUN_00411e6c(local_190,uVar3);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_13c);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_120);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_158);
      pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(local_190);
      FUN_00412e58(iVar6,pcVar4);
      FUN_00412798(iVar6,0,0);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_190);
    }
    if (*(undefined4 **)(param_1 + 0x168) == (undefined4 *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)**(undefined4 **)(param_1 + 0x168);
    }
    if (piVar7 != *(int **)(param_1 + 0x168)) {
      do {
        (**(code **)(*(int *)piVar7[9] + 0x1c))(param_1,*(undefined4 *)(param_1 + 0x130));
        piVar7 = (int *)*piVar7;
      } while (piVar7 != (int *)*(int *)(param_1 + 0x168));
    }
    FUN_0042a4f0(param_1);
  }
  FUN_004201c0();
  uVar3 = 0;
  FUN_0041e5b0(0);
  FUN_0040ad40(uVar3);
  cVar1 = FUN_0042b2d0();
  if (cVar1 == '\0') {
    FUN_004201c0();
  }
  if (*(int *)(param_1 + 0x130) != 0) {
    iVar6 = FUN_0042dbb0();
    if (iVar6 != 0) {
      puVar9 = local_104;
      pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(*(int *)(param_1 + 0x130) + 0xc4));
      FUN_0050f460(pcVar4,puVar9);
      uVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_158,"_SwitchLevel");
      puVar9 = local_104;
      uVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_120,"_");
      uVar3 = FUN_00411994(local_13c,uVar5,puVar9,uVar3);
      FUN_00411e6c(local_190,uVar3);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_13c);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_120);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_158);
      pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(local_190);
      FUN_00412e58(iVar6,pcVar4);
      FUN_00412cfc(iVar6,0,0x3ff00000);
      FUN_00412798(iVar6,1,0);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_190);
    }
    puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x130) + 0xf0);
    if (puVar8 != *(undefined4 **)(*(int *)(param_1 + 0x130) + 0xf4)) {
      do {
        (**(code **)(*(int *)*puVar8 + 0x28))(param_1,1);
        puVar8 = puVar8 + 2;
      } while (puVar8 != *(undefined4 **)(*(int *)(param_1 + 0x130) + 0xf4));
    }
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_174);
  return 1;
}





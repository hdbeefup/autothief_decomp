/* scripting functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_004298e0 */

void __fastcall FUN_004298e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EDI;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_6c [4];
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057b688;
  pvStack_c = ExceptionList;
  local_34 = 0;
  local_4 = 0;
  local_2c = 1;
  local_30 = 0;
  ExceptionList = &pvStack_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_6c);
  FUN_00422790(2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0,
             "run");
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x1c,
             "scripts\\Materials.lua");
  (**(code **)(*(int *)(param_1 + 0x167c) + 0x44))();
  puStack_64 = (undefined1 *)0x429978;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_34,"default");
  puStack_64 = &stack0xffffffb0;
  uStack_68 = 0x42998d;
  FUN_00420ca0();
  if (*(int *)(param_1 + 0x21f8) == unaff_EDI) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(unaff_EDI + 0x24);
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_34);
  if (iVar3 == 0) {
    puStack_64 = (undefined1 *)0x4299bf;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &local_34,"default");
    puStack_64 = (undefined1 *)0x4299cb;
    puVar1 = (undefined4 *)FUN_004295a0();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &local_34);
    puVar1[7] = 0x3e19999a;
    puVar1[4] = 0x3e19999a;
    puVar1[5] = 0x3e19999a;
    puVar1[6] = 0x3e19999a;
    puVar1[3] = 0x3f800000;
    *puVar1 = 0x3f800000;
    puVar1[1] = 0x3f800000;
    puVar1[2] = 0x3f800000;
    puVar1[0xb] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xf] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0x10] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined1 *)(puVar1 + 0x2e) = 0;
  }
  uStack_10 = 0xffffffff;
  FUN_00409200();
  puStack_64 = (undefined1 *)0x429a42;
  uVar2 = FUN_004d4c00();
  *(undefined4 *)(param_1 + 0x1704) = uVar2;
  ExceptionList = pvStack_18;
  return;
}




/* Function: FUN_0050f650 */

undefined4 __thiscall FUN_0050f650(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  int local_1b8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1b4 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_198 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_17c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_160 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_144 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_128 [28];
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f14c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_0041c940();
  if (iVar3 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  FUN_0041c940();
  pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0041cfa0();
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_128,pbVar4);
  pcVar11 = local_10c;
  local_4 = 0;
  pcVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (local_128);
  FUN_0050f460(pcVar5,pcVar11);
  iVar3 = FUN_0041c940();
  if (*(char *)(iVar3 + 0x9c) == '\0') {
    uVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      (local_160,".lua");
    local_4._0_1_ = 1;
    uVar7 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      (local_17c,local_10c);
    local_4._0_1_ = 2;
    uVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      (local_198,"run scripts\\");
    local_4._0_1_ = 3;
    uVar7 = FUN_00411e6c(local_1b4,uVar8,uVar7);
    local_4._0_1_ = 4;
    uVar7 = FUN_00411e6c(local_144,uVar7,uVar6);
    uVar8 = 1;
    uVar6 = param_2;
    FUN_0041e5b0(uVar7,1,param_2);
    FUN_0040bef0(uVar7,uVar8,uVar6);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_144);
    local_4._0_1_ = 3;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1b4);
    local_4._0_1_ = 2;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_198);
    local_4._0_1_ = 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_17c);
    local_4 = (uint)local_4._1_3_ << 8;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_160);
    iVar3 = FUN_0041c940();
    *(undefined1 *)(iVar3 + 0x9c) = 1;
  }
  FUN_0041c940();
  uVar10 = 0;
  iVar3 = FUN_0041dd90();
  if (iVar3 != 0) {
    do {
      uVar6 = FUN_0041f930(uVar10);
      iVar3 = FUN_00500570(uVar6);
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x9c) = iVar3;
        break;
      }
      uVar10 = uVar10 + 1;
      uVar9 = FUN_0041dd90();
    } while (uVar10 < uVar9);
  }
  piVar1 = *(int **)(param_1 + 0x9c);
  if ((((piVar1 == (int *)0x0) || (piVar2 = *(int **)(param_1 + 0x98), piVar2 == (int *)0x0)) ||
      (*(int *)(param_1 + 0x94) == 0)) || (piVar2 == piVar1)) goto LAB_0050f8eb;
  (**(code **)(*piVar2 + 0xf0))(piVar1);
  uVar10 = 0;
  local_1b8 = 0;
  iVar3 = FUN_0041dd90();
  if (iVar3 == 0) {
LAB_0050f8b6:
    iVar3 = *(int *)(*(int *)(param_1 + 0x94) + 0xf4);
    uVar6 = FUN_0041e5b0("WARNING: Target teleport %d could not be located in %s level",
                         (int)*(char *)(iVar3 + 0x4b),iVar3);
    FUN_0040a410(uVar6);
  }
  else {
    do {
      iVar3 = FUN_0041f930(uVar10);
      if (((iVar3 != 0) && (*(int *)(iVar3 + 0x80) == 5)) &&
         (local_1b8 = iVar3,
         *(char *)(*(int *)(iVar3 + 0xf4) + 0x4a) ==
         *(char *)(*(int *)(*(int *)(param_1 + 0x94) + 0xf4) + 0x4b))) {
        FUN_004ff520(param_2,*(undefined4 *)(param_1 + 0x9c));
        break;
      }
      uVar10 = uVar10 + 1;
      uVar9 = FUN_0041dd90();
    } while (uVar10 < uVar9);
    if (local_1b8 == 0) goto LAB_0050f8b6;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
LAB_0050f8eb:
  uVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_144,"_s.lua");
  local_4._0_1_ = 5;
  uVar7 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_1b4,local_10c);
  local_4._0_1_ = 6;
  uVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_198,"run scripts\\");
  local_4._0_1_ = 7;
  uVar7 = FUN_00411e6c(local_17c,uVar8,uVar7);
  local_4._0_1_ = 8;
  uVar6 = FUN_00411e6c(local_160,uVar7,uVar6);
  uVar7 = 1;
  FUN_0041e5b0(uVar6,1,param_2);
  FUN_0040bef0(uVar6,uVar7,param_2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_160);
  local_4._0_1_ = 7;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_17c);
  local_4._0_1_ = 6;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_198);
  local_4._0_1_ = 5;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1b4);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_144);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_128);
  ExceptionList = local_c;
  return 1;
}





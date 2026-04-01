/* pbe_scene functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_0041da10 */

void __thiscall FUN_0041da10(int param_1,int *param_2)

{
  int iVar1;
  int *piStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [36];
  void *pvStack_30;
  undefined4 uStack_28;
  undefined4 uStack_1c;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057acd1;
  pvStack_c = ExceptionList;
  iStack_9c = param_1 + 0x1b0;
  uStack_a0 = 0x100;
  piStack_a4 = param_2;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(*param_2 + 0x94))();
  if (iVar1 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xffffff68,"Src\\pbeScene.cpp");
    uStack_10 = 0;
    FUN_004f8f30(iVar1,&stack0xffffff68,0xe38);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(auStack_60,(ThrowInfo *)&DAT_005958a4);
  }
  iVar1 = (**(code **)(*param_2 + 0x94))(param_2,2,param_1 + 0x1f0);
  if (iVar1 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_a4,"Src\\pbeScene.cpp");
    uStack_1c = 1;
    FUN_004f8f30(iVar1,&piStack_a4,0xe3b);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(auStack_6c,(ThrowInfo *)&DAT_005958a4);
  }
  iVar1 = (**(code **)(*param_2 + 0x94))(param_2,3,param_1 + 0x270);
  if (iVar1 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xffffff6c,"Src\\pbeScene.cpp");
    uStack_28 = 2;
    FUN_004f8f30(iVar1,&stack0xffffff6c,0xe3e);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(auStack_54,(ThrowInfo *)&DAT_005958a4);
  }
  ExceptionList = pvStack_30;
  return;
}




/* Function: FUN_0041e330 */

void __thiscall FUN_0041e330(int param_1,undefined4 param_2,undefined4 param_3)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_64 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_48 [28];
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ad52;
  local_c = ExceptionList;
  switch(param_2) {
  case 0:
    break;
  case 1:
    ExceptionList = &local_c;
    FUN_0041d670(param_3);
    thunk_FUN_00496475(param_1 + 0x230,0,param_1 + 0x1f0);
    if (*(char *)(param_1 + 0x18f3) != '\0') {
      ExceptionList = local_c;
      return;
    }
    FUN_0041db90();
    ExceptionList = local_c;
    return;
  case 2:
    break;
  case 3:
    ExceptionList = &local_c;
    FUN_0041d670(param_3);
    if (*(char *)(param_1 + 0x18f3) != '\0') {
      ExceptionList = local_c;
      return;
    }
    FUN_0041db90();
    ExceptionList = local_c;
    return;
  default:
    ExceptionList = &local_c;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_64,"Src\\pbeScene.cpp");
    local_4 = 0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_48,"Invalid matrix type");
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004f8de0(local_48,local_64,0xe0c);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_2c,(ThrowInfo *)&DAT_0059596c);
  }
  ExceptionList = &local_c;
  FUN_0041d670(param_3);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_0041e470 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0041e470(int param_1,undefined4 param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_64 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_48 [28];
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ad52;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((_DAT_005b5f78 & 1) == 0) {
    _DAT_005b5f78 = _DAT_005b5f78 | 1;
    ExceptionList = &local_c;
    _eh_vector_constructor_iterator_
              (&DAT_005b5f38,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
    FUN_00407310(0x3f800000);
    _atexit((_func_4879 *)&LAB_00580c40);
  }
  switch(param_2) {
  case 0:
    ExceptionList = local_c;
    return param_1 + 0x1b0;
  case 1:
    ExceptionList = local_c;
    return param_1 + 0x1f0;
  case 2:
    ExceptionList = local_c;
    return param_1 + 0x230;
  case 3:
    ExceptionList = local_c;
    return param_1 + 0x270;
  default:
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_64,"Src\\pbeScene.cpp");
    local_4 = 0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_48,"Invalid matrix type");
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004f8de0(local_48,local_64,0xe2a);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_2c,(ThrowInfo *)&DAT_0059596c);
  }
}




/* Function: FUN_00420a40 */

undefined1 __thiscall
FUN_00420a40(int param_1,int *param_2,undefined4 *param_3,uint param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 local_11c [36];
  undefined1 local_f8 [36];
  undefined1 local_d4 [36];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_70 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_54 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [28];
  int local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057aecf;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffed8;
  local_15 = 1;
  ExceptionList = &local_10;
  local_1c = param_1;
  FUN_004201c0();
  piVar1 = *(int **)(param_1 + 0x17d0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x17d0) = 0;
    if (iVar2 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_38,"Src\\pbeScene.cpp");
      local_8 = 0;
      FUN_004f8f30(iVar2,local_38,0x242);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_d4,(ThrowInfo *)&DAT_005958a4);
    }
  }
  if (param_2 == (int *)0x0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_38,"Src\\pbeScene.cpp");
    local_8 = 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_54,"PDIRECT3D8 == 0");
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004f8de0(local_54,local_38,0x245);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_90,(ThrowInfo *)&DAT_0059596c);
  }
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2);
  if (uVar3 <= param_4) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_54,"Src\\pbeScene.cpp");
    local_8 = 3;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_38,"Adapter number is too large");
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_004f8de0(local_38,local_54,0x249);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b0,(ThrowInfo *)&DAT_0059596c);
  }
  puVar4 = (undefined4 *)(param_1 + 0x17d4);
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x17f4) = 0;
  *(undefined4 *)(param_1 + 0x17f8) = 0;
  local_8 = 5;
  iVar2 = (**(code **)(*param_2 + 0x3c))
                    (param_2,param_4,1,*(undefined4 *)(param_1 + 0x17ec),param_5,
                     (undefined4 *)(param_1 + 0x17d4),(undefined4 *)(param_1 + 0x17d0));
  if (iVar2 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_54,"Src\\pbeScene.cpp");
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_004f8f30(iVar2,local_54,0x25a);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_f8,(ThrowInfo *)&DAT_005958a4);
  }
  piVar1 = *(int **)(param_1 + 0x17d0);
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,param_1 + 0x1808);
  if (iVar2 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_70,"Src\\pbeScene.cpp");
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_004f8f30(iVar2,local_70,0x25d);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_11c,(ThrowInfo *)&DAT_005958a4);
  }
  ExceptionList = local_10;
  return local_15;
}




/* Function: FUN_004255d0 */

void __fastcall FUN_004255d0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  int *piStack_420;
  int *piStack_414;
  int *piStack_408;
  int *piStack_3fc;
  int *piStack_3f0;
  int *piStack_3e4;
  int *piStack_3d8;
  int *piStack_3cc;
  int *piStack_3c0;
  int *piStack_3b4;
  int *piStack_3a8;
  int *piStack_39c;
  int *piStack_390;
  int *piStack_384;
  int *piStack_378;
  int *piStack_36c;
  int *piStack_360;
  int *piStack_354;
  int *piStack_348;
  int *piStack_33c;
  int *piStack_330;
  int *piStack_324;
  int *piStack_318;
  int *piStack_30c;
  int *piStack_300;
  int *piStack_2f4;
  int *piStack_2e8;
  int *piStack_2dc;
  int *piStack_2d0;
  int *piStack_2c4;
  int *piStack_2b8;
  int *piStack_2ac;
  int *piStack_2a0;
  int *piStack_294;
  int *piStack_288;
  int *piStack_27c;
  int *piStack_270;
  int *piStack_264;
  int *piStack_258;
  int *piStack_24c;
  int *piStack_240;
  int *piStack_234;
  int *piStack_228;
  int *piStack_21c;
  int *piStack_210;
  int *piStack_204;
  int *piStack_1f8;
  int *piStack_1ec;
  int *piStack_1e0;
  int *piStack_1d4;
  int *piStack_1c8;
  int *piStack_1bc;
  int *piStack_1b0;
  int *piStack_1a4;
  int *piStack_198;
  int *piStack_18c;
  int *piStack_180;
  int *piStack_174;
  int *piStack_154;
  int *piStack_148;
  int *piStack_13c;
  int *piStack_130;
  int *piStack_124;
  int *piStack_118;
  int *piStack_10c;
  int iVar5;
  int *piStack_100;
  int *piStack_f4;
  int *piStack_e8;
  int *piStack_dc;
  int *piStack_d0;
  int *piStack_c4;
  undefined4 local_b0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_ac [4];
  undefined4 uStack_a8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_a0 [4];
  undefined4 uStack_9c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_94 [4];
  undefined4 uStack_90;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_88 [4];
  undefined4 uStack_84;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_7c [4];
  undefined4 uStack_78;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_70 [4];
  undefined4 uStack_6c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_54;
  undefined4 uStack_48;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_24;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b450;
  pvStack_c = ExceptionList;
  piStack_c4 = *(int **)(param_1 + 0x17d0);
  if (piStack_c4 == (int *)0x0) {
    ExceptionList = &pvStack_c;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_68,"Src\\pbeScene.cpp");
    piStack_c4 = (int *)0x8876086b;
    local_4 = 0;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_c4 = (int *)0x425639;
    _CxxThrowException(&local_b0,(ThrowInfo *)&DAT_005958a4);
  }
  ExceptionList = &pvStack_c;
  piStack_d0 = (int *)(**(code **)(*piStack_c4 + 0x1c))();
  if ((int)piStack_d0 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_70,"Src\\pbeScene.cpp");
    pvStack_c = (void *)0x1;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_d0 = (int *)0x42568a;
    _CxxThrowException(&stack0xffffff48,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_d0 = *(int **)(param_1 + 0x17d0);
  piStack_dc = (int *)(**(code **)(*piStack_d0 + 200))();
  if ((int)piStack_dc < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_7c,"Src\\pbeScene.cpp");
    uStack_18 = 2;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_dc = (int *)0x4256e0;
    _CxxThrowException(&piStack_c4,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_dc = *(int **)(param_1 + 0x17d0);
  piStack_e8 = (int *)(**(code **)(*piStack_dc + 200))();
  if ((int)piStack_e8 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_88,"Src\\pbeScene.cpp");
    uStack_24 = 3;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_e8 = (int *)0x425736;
    _CxxThrowException(&piStack_d0,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_e8 = *(int **)(param_1 + 0x17d0);
  piStack_f4 = (int *)(**(code **)(*piStack_e8 + 200))();
  if ((int)piStack_f4 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_94,"Src\\pbeScene.cpp");
    uStack_30 = 4;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_f4 = (int *)0x42578c;
    _CxxThrowException(&piStack_dc,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_f4 = *(int **)(param_1 + 0x17d0);
  piStack_100 = (int *)(**(code **)(*piStack_f4 + 200))();
  if ((int)piStack_100 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_a0,"Src\\pbeScene.cpp");
    uStack_3c = 5;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_100 = (int *)0x4257e2;
    _CxxThrowException(&piStack_e8,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_100 = *(int **)(param_1 + 0x17d0);
  piStack_10c = (int *)(**(code **)(*piStack_100 + 200))();
  if ((int)piStack_10c < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_ac,"Src\\pbeScene.cpp");
    uStack_48 = 6;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_10c = (int *)0x425838;
    _CxxThrowException(&piStack_f4,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_10c = *(int **)(param_1 + 0x17d0);
  iVar5 = 0xf;
  piStack_118 = (int *)(**(code **)(*piStack_10c + 200))();
  if ((int)piStack_118 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xffffff48,"Src\\pbeScene.cpp");
    uStack_54 = 7;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_118 = (int *)0x42588e;
    _CxxThrowException(&piStack_100,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_118 = *(int **)(param_1 + 0x17d0);
  piStack_124 = (int *)(**(code **)(*piStack_118 + 200))();
  if ((int)piStack_124 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_c4,"Src\\pbeScene.cpp");
    uStack_60 = 8;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_124 = (int *)0x4258e4;
    _CxxThrowException(&piStack_10c,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_124 = *(int **)(param_1 + 0x17d0);
  piStack_130 = (int *)(**(code **)(*piStack_124 + 200))();
  if ((int)piStack_130 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_d0,"Src\\pbeScene.cpp");
    uStack_6c = 9;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_130 = (int *)0x42593a;
    _CxxThrowException(&piStack_118,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_130 = *(int **)(param_1 + 0x17d0);
  piStack_13c = (int *)(**(code **)(*piStack_130 + 200))();
  if ((int)piStack_13c < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_dc,"Src\\pbeScene.cpp");
    uStack_78 = 10;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_13c = (int *)0x425990;
    _CxxThrowException(&piStack_124,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_13c = *(int **)(param_1 + 0x17d0);
  piStack_148 = (int *)(**(code **)(*piStack_13c + 200))();
  if ((int)piStack_148 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_e8,"Src\\pbeScene.cpp");
    uStack_84 = 0xb;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_148 = (int *)0x4259e6;
    _CxxThrowException(&piStack_130,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_148 = *(int **)(param_1 + 0x17d0);
  piStack_154 = (int *)(**(code **)(*piStack_148 + 200))();
  if ((int)piStack_154 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_f4,"Src\\pbeScene.cpp");
    uStack_90 = 0xc;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_154 = (int *)0x425a3c;
    _CxxThrowException(&piStack_13c,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_154 = *(int **)(param_1 + 0x17d0);
  iVar1 = (**(code **)(*piStack_154 + 200))();
  if (iVar1 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_100,"Src\\pbeScene.cpp");
    uStack_9c = 0xd;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&piStack_148,(ThrowInfo *)&DAT_005958a4);
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x17d0) + 200))();
  if (iVar1 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_10c,"Src\\pbeScene.cpp");
    uStack_a8 = 0xe;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&piStack_154,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_174 = (int *)(**(code **)(**(int **)(param_1 + 0x17d0) + 0x20))();
  if ((int)piStack_174 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xfffffea4,"Src\\pbeScene.cpp");
    local_b0 = 0xf;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_174 = (int *)0x425b3c;
    _CxxThrowException(&stack0xfffffec8,(ThrowInfo *)&DAT_005958a4);
  }
  if (((iVar5 == 0x18) || (iVar5 == 0x17)) && ((*(byte *)(param_1 + 0x183c) & 1) != 0)) {
    piStack_174 = *(int **)(param_1 + 0x17d0);
    piVar2 = (int *)(**(code **)(*piStack_174 + 200))();
  }
  else {
    piStack_174 = *(int **)(param_1 + 0x17d0);
    piVar2 = (int *)(**(code **)(*piStack_174 + 200))();
  }
  if ((int)piVar2 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xfffffe98,"Src\\pbeScene.cpp");
    piStack_180 = piVar2;
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_180 = (int *)0x425bbe;
    _CxxThrowException(&stack0xfffffebc,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_180 = *(int **)(param_1 + 0x17d0);
  piStack_18c = (int *)(**(code **)(*piStack_180 + 200))();
  if ((int)piStack_18c < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_174,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_18c = (int *)0x425c14;
    _CxxThrowException(&stack0xfffffeb0,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_18c = *(int **)(param_1 + 0x17d0);
  piStack_198 = (int *)(**(code **)(*piStack_18c + 200))();
  if ((int)piStack_198 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_180,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_198 = (int *)0x425c6a;
    _CxxThrowException(&stack0xfffffea4,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_198 = *(int **)(param_1 + 0x17d0);
  piStack_1a4 = (int *)(**(code **)(*piStack_198 + 200))();
  if ((int)piStack_1a4 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_18c,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_1a4 = (int *)0x425cc0;
    _CxxThrowException(&stack0xfffffe98,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_1a4 = *(int **)(param_1 + 0x17d0);
  piStack_1b0 = (int *)(**(code **)(*piStack_1a4 + 200))();
  if ((int)piStack_1b0 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_198,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_1b0 = (int *)0x425d16;
    _CxxThrowException(&piStack_174,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_1b0 = *(int **)(param_1 + 0x17d0);
  piStack_1bc = (int *)(**(code **)(*piStack_1b0 + 200))();
  if ((int)piStack_1bc < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_1a4,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_1bc = (int *)0x425d6c;
    _CxxThrowException(&piStack_180,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_1bc = *(int **)(param_1 + 0x17d0);
  piStack_1c8 = (int *)(**(code **)(*piStack_1bc + 200))();
  if ((int)piStack_1c8 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_1b0,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_1c8 = (int *)0x425dcd;
    _CxxThrowException(&piStack_18c,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_1c8 = *(int **)(param_1 + 0x17d0);
  piStack_1d4 = (int *)(**(code **)(*piStack_1c8 + 200))();
  if ((int)piStack_1d4 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_1bc,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_1d4 = (int *)0x425e2e;
    _CxxThrowException(&piStack_198,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_1d4 = *(int **)(param_1 + 0x17d0);
  piStack_1e0 = (int *)(**(code **)(*piStack_1d4 + 200))();
  if ((int)piStack_1e0 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_1c8,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_1e0 = (int *)0x425e8f;
    _CxxThrowException(&piStack_1a4,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_1e0 = *(int **)(param_1 + 0x17d0);
  piStack_1ec = (int *)(**(code **)(*piStack_1e0 + 200))();
  if ((int)piStack_1ec < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_1d4,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_1ec = (int *)0x425ee5;
    _CxxThrowException(&piStack_1b0,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_1ec = *(int **)(param_1 + 0x17d0);
  piStack_1f8 = (int *)(**(code **)(*piStack_1ec + 200))();
  if ((int)piStack_1f8 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_1e0,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_1f8 = (int *)0x425f3b;
    _CxxThrowException(&piStack_1bc,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_1f8 = *(int **)(param_1 + 0x17d0);
  piStack_204 = (int *)(**(code **)(*piStack_1f8 + 200))();
  if ((int)piStack_204 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_1ec,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_204 = (int *)0x425f91;
    _CxxThrowException(&piStack_1c8,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_204 = *(int **)(param_1 + 0x17d0);
  piStack_210 = (int *)(**(code **)(*piStack_204 + 200))();
  if ((int)piStack_210 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_1f8,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_210 = (int *)0x425fe7;
    _CxxThrowException(&piStack_1d4,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_210 = *(int **)(param_1 + 0x17d0);
  piStack_21c = (int *)(**(code **)(*piStack_210 + 200))();
  if ((int)piStack_21c < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_204,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_21c = (int *)0x42603d;
    _CxxThrowException(&piStack_1e0,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_21c = *(int **)(param_1 + 0x17d0);
  piStack_228 = (int *)(**(code **)(*piStack_21c + 200))();
  if ((int)piStack_228 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_210,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_228 = (int *)0x426093;
    _CxxThrowException(&piStack_1ec,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_228 = *(int **)(param_1 + 0x17d0);
  piStack_234 = (int *)(**(code **)(*piStack_228 + 200))();
  if ((int)piStack_234 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_21c,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_234 = (int *)0x4260e9;
    _CxxThrowException(&piStack_1f8,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_234 = *(int **)(param_1 + 0x17d0);
  piStack_240 = (int *)(**(code **)(*piStack_234 + 200))();
  if ((int)piStack_240 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_228,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_240 = (int *)0x42613f;
    _CxxThrowException(&piStack_204,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_240 = *(int **)(param_1 + 0x17d0);
  piStack_24c = (int *)(**(code **)(*piStack_240 + 200))();
  if ((int)piStack_24c < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_234,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_24c = (int *)0x426195;
    _CxxThrowException(&piStack_210,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_24c = *(int **)(param_1 + 0x17d0);
  piStack_258 = (int *)(**(code **)(*piStack_24c + 200))();
  if ((int)piStack_258 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_240,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_258 = (int *)0x4261eb;
    _CxxThrowException(&piStack_21c,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_258 = *(int **)(param_1 + 0x17d0);
  piStack_264 = (int *)(**(code **)(*piStack_258 + 200))();
  if ((int)piStack_264 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_24c,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_264 = (int *)0x426241;
    _CxxThrowException(&piStack_228,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_264 = *(int **)(param_1 + 0x17d0);
  piStack_270 = (int *)(**(code **)(*piStack_264 + 200))();
  if ((int)piStack_270 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_258,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_270 = (int *)0x426297;
    _CxxThrowException(&piStack_234,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_270 = *(int **)(param_1 + 0x17d0);
  piStack_27c = (int *)(**(code **)(*piStack_270 + 200))();
  if ((int)piStack_27c < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_264,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_27c = (int *)0x4262f0;
    _CxxThrowException(&piStack_240,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_27c = *(int **)(param_1 + 0x17d0);
  piStack_288 = (int *)(**(code **)(*piStack_27c + 200))();
  if ((int)piStack_288 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_270,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_288 = (int *)0x426349;
    _CxxThrowException(&piStack_24c,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_288 = *(int **)(param_1 + 0x17d0);
  piStack_294 = (int *)(**(code **)(*piStack_288 + 200))();
  if ((int)piStack_294 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_27c,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_294 = (int *)0x4263a2;
    _CxxThrowException(&piStack_258,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_294 = *(int **)(param_1 + 0x17d0);
  piStack_2a0 = (int *)(**(code **)(*piStack_294 + 200))();
  if ((int)piStack_2a0 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_288,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_2a0 = (int *)0x4263fb;
    _CxxThrowException(&piStack_264,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_2a0 = *(int **)(param_1 + 0x17d0);
  piStack_2ac = (int *)(**(code **)(*piStack_2a0 + 200))();
  if ((int)piStack_2ac < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_294,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_2ac = (int *)0x426454;
    _CxxThrowException(&piStack_270,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_2ac = *(int **)(param_1 + 0x17d0);
  piStack_2b8 = (int *)(**(code **)(*piStack_2ac + 200))();
  if ((int)piStack_2b8 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_2a0,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_2b8 = (int *)0x4264ad;
    _CxxThrowException(&piStack_27c,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_2b8 = *(int **)(param_1 + 0x17d0);
  piStack_2c4 = (int *)(**(code **)(*piStack_2b8 + 200))();
  if ((int)piStack_2c4 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_2ac,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_2c4 = (int *)0x426506;
    _CxxThrowException(&piStack_288,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_2c4 = *(int **)(param_1 + 0x17d0);
  piStack_2d0 = (int *)(**(code **)(*piStack_2c4 + 200))();
  if ((int)piStack_2d0 < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_2b8,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_2d0 = (int *)0x42655f;
    _CxxThrowException(&piStack_294,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_2d0 = *(int **)(param_1 + 0x17d0);
  piStack_2dc = (int *)(**(code **)(*piStack_2d0 + 200))();
  if ((int)piStack_2dc < 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_2c4,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_2dc = (int *)0x4265b8;
    _CxxThrowException(&piStack_2a0,(ThrowInfo *)&DAT_005958a4);
  }
  piStack_2dc = *(int **)(param_1 + 0x17d0);
  piStack_2e8 = (int *)(**(code **)(*piStack_2dc + 200))();
  if (-1 < (int)piStack_2e8) {
    piStack_2e8 = *(int **)(param_1 + 0x17d0);
    piStack_2f4 = (int *)(**(code **)(*piStack_2e8 + 200))();
    if ((int)piStack_2f4 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_2dc,"Src\\pbeScene.cpp");
      FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
      piStack_2f4 = (int *)0x42666a;
      _CxxThrowException(&piStack_2b8,(ThrowInfo *)&DAT_005958a4);
    }
    piStack_2f4 = *(int **)(param_1 + 0x17d0);
    piStack_300 = (int *)(**(code **)(*piStack_2f4 + 200))();
    if ((int)piStack_300 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_2e8,"Src\\pbeScene.cpp");
      FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
      piStack_300 = (int *)0x4266c3;
      _CxxThrowException(&piStack_2c4,(ThrowInfo *)&DAT_005958a4);
    }
    piStack_300 = *(int **)(param_1 + 0x17d0);
    piStack_30c = (int *)(**(code **)(*piStack_300 + 200))();
    if ((int)piStack_30c < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_2f4,"Src\\pbeScene.cpp");
      FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
      piStack_30c = (int *)0x42671c;
      _CxxThrowException(&piStack_2d0,(ThrowInfo *)&DAT_005958a4);
    }
    piStack_30c = *(int **)(param_1 + 0x17d0);
    piStack_318 = (int *)(**(code **)(*piStack_30c + 200))();
    if ((int)piStack_318 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_300,"Src\\pbeScene.cpp");
      FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
      piStack_318 = (int *)0x426775;
      _CxxThrowException(&piStack_2dc,(ThrowInfo *)&DAT_005958a4);
    }
    piStack_318 = *(int **)(param_1 + 0x17d0);
    piStack_324 = (int *)(**(code **)(*piStack_318 + 200))();
    if ((int)piStack_324 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_30c,"Src\\pbeScene.cpp");
      FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
      piStack_324 = (int *)0x4267ce;
      _CxxThrowException(&piStack_2e8,(ThrowInfo *)&DAT_005958a4);
    }
    piStack_324 = *(int **)(param_1 + 0x17d0);
    piStack_330 = (int *)(**(code **)(*piStack_324 + 200))();
    if ((int)piStack_330 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_318,"Src\\pbeScene.cpp");
      FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
      piStack_330 = (int *)0x426827;
      _CxxThrowException(&piStack_2f4,(ThrowInfo *)&DAT_005958a4);
    }
    piStack_330 = *(int **)(param_1 + 0x17d0);
    piStack_33c = (int *)(**(code **)(*piStack_330 + 200))();
    if ((int)piStack_33c < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_324,"Src\\pbeScene.cpp");
      FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
      piStack_33c = (int *)0x426880;
      _CxxThrowException(&piStack_300,(ThrowInfo *)&DAT_005958a4);
    }
    piStack_33c = *(int **)(param_1 + 0x17d0);
    piStack_348 = (int *)(**(code **)(*piStack_33c + 200))();
    if ((int)piStack_348 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_330,"Src\\pbeScene.cpp");
      FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
      piStack_348 = (int *)0x4268d9;
      _CxxThrowException(&piStack_30c,(ThrowInfo *)&DAT_005958a4);
    }
    piStack_348 = *(int **)(param_1 + 0x17d0);
    piStack_354 = (int *)(**(code **)(*piStack_348 + 200))();
    if ((int)piStack_354 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_33c,"Src\\pbeScene.cpp");
      FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
      piStack_354 = (int *)0x426932;
      _CxxThrowException(&piStack_318,(ThrowInfo *)&DAT_005958a4);
    }
    piStack_354 = *(int **)(param_1 + 0x17d0);
    piStack_360 = (int *)(**(code **)(*piStack_354 + 200))();
    if ((int)piStack_360 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_348,"Src\\pbeScene.cpp");
      FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
      piStack_360 = (int *)0x42698b;
      _CxxThrowException(&piStack_324,(ThrowInfo *)&DAT_005958a4);
    }
    piStack_360 = *(int **)(param_1 + 0x17d0);
    piStack_36c = (int *)(**(code **)(*piStack_360 + 200))();
    if ((int)piStack_36c < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_354,"Src\\pbeScene.cpp");
      FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
      piStack_36c = (int *)0x4269e4;
      _CxxThrowException(&piStack_330,(ThrowInfo *)&DAT_005958a4);
    }
    piStack_36c = *(int **)(param_1 + 0x17d0);
    if ((*(byte *)(param_1 + 0x1814) & 0x20) == 0) {
      piVar2 = (int *)(**(code **)(*piStack_36c + 200))();
    }
    else {
      piVar2 = (int *)(**(code **)(*piStack_36c + 200))();
    }
    if ((int)piVar2 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_360,"Src\\pbeScene.cpp");
      piStack_378 = piVar2;
      FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
      piStack_378 = (int *)0x426a58;
      _CxxThrowException(&piStack_33c,(ThrowInfo *)&DAT_005958a4);
    }
    piStack_378 = *(int **)(param_1 + 0x17d0);
    piStack_384 = (int *)(**(code **)(*piStack_378 + 200))();
    if ((int)piStack_384 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_36c,"Src\\pbeScene.cpp");
      FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
      piStack_384 = (int *)0x426abc;
      _CxxThrowException(&piStack_348,(ThrowInfo *)&DAT_005958a4);
    }
    piStack_384 = *(int **)(param_1 + 0x17d0);
    piStack_390 = (int *)(**(code **)(*piStack_384 + 200))();
    if ((int)piStack_390 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_378,"Src\\pbeScene.cpp");
      FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
      piStack_390 = (int *)0x426b20;
      _CxxThrowException(&piStack_354,(ThrowInfo *)&DAT_005958a4);
    }
    piStack_390 = *(int **)(param_1 + 0x17d0);
    piStack_39c = (int *)(**(code **)(*piStack_390 + 200))();
    if ((int)piStack_39c < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_384,"Src\\pbeScene.cpp");
      FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
      piStack_39c = (int *)0x426b82;
      _CxxThrowException(&piStack_360,(ThrowInfo *)&DAT_005958a4);
    }
    piStack_39c = *(int **)(param_1 + 0x17d0);
    piStack_3a8 = (int *)(**(code **)(*piStack_39c + 200))();
    if (-1 < (int)piStack_3a8) {
      piStack_3a8 = *(int **)(param_1 + 0x17d0);
      piStack_3b4 = (int *)(**(code **)(*piStack_3a8 + 200))();
      if ((int)piStack_3b4 < 0) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &piStack_39c,"Src\\pbeScene.cpp");
        FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
        piStack_3b4 = (int *)0x426c34;
        _CxxThrowException(&piStack_378,(ThrowInfo *)&DAT_005958a4);
      }
      piStack_3b4 = *(int **)(param_1 + 0x17d0);
      piStack_3c0 = (int *)(**(code **)(*piStack_3b4 + 200))();
      if ((int)piStack_3c0 < 0) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &piStack_3a8,"Src\\pbeScene.cpp");
        FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
        piStack_3c0 = (int *)0x426c98;
        _CxxThrowException(&piStack_384,(ThrowInfo *)&DAT_005958a4);
      }
      piStack_3c0 = *(int **)(param_1 + 0x17d0);
      piStack_3cc = (int *)(**(code **)(*piStack_3c0 + 200))();
      if ((int)piStack_3cc < 0) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &piStack_3b4,"Src\\pbeScene.cpp");
        FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
        piStack_3cc = (int *)0x426cfc;
        _CxxThrowException(&piStack_390,(ThrowInfo *)&DAT_005958a4);
      }
      piStack_3cc = *(int **)(param_1 + 0x17d0);
      piStack_3d8 = (int *)(**(code **)(*piStack_3cc + 200))();
      if ((int)piStack_3d8 < 0) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &piStack_3c0,"Src\\pbeScene.cpp");
        FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
        piStack_3d8 = (int *)0x426d60;
        _CxxThrowException(&piStack_39c,(ThrowInfo *)&DAT_005958a4);
      }
      piStack_3d8 = *(int **)(param_1 + 0x17d0);
      piStack_3e4 = (int *)(**(code **)(*piStack_3d8 + 200))();
      if ((int)piStack_3e4 < 0) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &piStack_3cc,"Src\\pbeScene.cpp");
        FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
        piStack_3e4 = (int *)0x426db9;
        _CxxThrowException(&piStack_3a8,(ThrowInfo *)&DAT_005958a4);
      }
      piStack_3e4 = *(int **)(param_1 + 0x17d0);
      piStack_3f0 = (int *)(**(code **)(*piStack_3e4 + 200))();
      if ((int)piStack_3f0 < 0) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &piStack_3d8,"Src\\pbeScene.cpp");
        FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
        piStack_3f0 = (int *)0x426e12;
        _CxxThrowException(&piStack_3b4,(ThrowInfo *)&DAT_005958a4);
      }
      piStack_3f0 = *(int **)(param_1 + 0x17d0);
      piStack_3fc = (int *)(**(code **)(*piStack_3f0 + 200))();
      if ((int)piStack_3fc < 0) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &piStack_3e4,"Src\\pbeScene.cpp");
        FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
        piStack_3fc = (int *)0x426e6b;
        _CxxThrowException(&piStack_3c0,(ThrowInfo *)&DAT_005958a4);
      }
      piStack_3fc = *(int **)(param_1 + 0x17d0);
      piStack_408 = (int *)(**(code **)(*piStack_3fc + 200))();
      if (-1 < (int)piStack_408) {
        piStack_408 = *(int **)(param_1 + 0x17d0);
        piStack_414 = (int *)(**(code **)(*piStack_408 + 200))();
        if ((int)piStack_414 < 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&piStack_3fc,"Src\\pbeScene.cpp");
          FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
          piStack_414 = (int *)0x426f1d;
          _CxxThrowException(&piStack_3d8,(ThrowInfo *)&DAT_005958a4);
        }
        piStack_414 = *(int **)(param_1 + 0x17d0);
        piStack_420 = (int *)(**(code **)(*piStack_414 + 200))();
        if ((int)piStack_420 < 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&piStack_408,"Src\\pbeScene.cpp");
          FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
          piStack_420 = (int *)0x426f76;
          _CxxThrowException(&piStack_3e4,(ThrowInfo *)&DAT_005958a4);
        }
        piStack_420 = *(int **)(param_1 + 0x17d0);
        iVar5 = (**(code **)(*piStack_420 + 200))();
        if (iVar5 < 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&piStack_414,"Src\\pbeScene.cpp");
          FUN_004f8f30(iVar5,&piStack_414,0x110e);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&piStack_3f0,(ThrowInfo *)&DAT_005958a4);
        }
        iVar5 = (**(code **)(**(int **)(param_1 + 0x17d0) + 200))
                          (*(int **)(param_1 + 0x17d0),0xaa,0);
        if (-1 < iVar5) {
          iVar5 = (**(code **)(**(int **)(param_1 + 0x17d0) + 200))
                            (*(int **)(param_1 + 0x17d0),0xab,1);
          if (-1 < iVar5) {
            uVar3 = 0;
            if (*(int *)(param_1 + 0x18ac) != 0) {
              do {
                (**(code **)(**(int **)(param_1 + 0x17d0) + 0xf4))
                          (*(int **)(param_1 + 0x17d0),uVar3,0);
                uVar3 = uVar3 + 1;
              } while (uVar3 < *(uint *)(param_1 + 0x18ac));
            }
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))(*(int **)(param_1 + 0x17d0),0,1,2);
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))(*(int **)(param_1 + 0x17d0),0,2,2);
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))(*(int **)(param_1 + 0x17d0),0,3,1);
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))(*(int **)(param_1 + 0x17d0),0,4,2);
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))(*(int **)(param_1 + 0x17d0),0,5,2);
            pvVar4 = (void *)0x6;
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))(*(int **)(param_1 + 0x17d0),0,6,1);
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))(*(int **)(param_1 + 0x17d0),0,0x11,2)
            ;
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))(*(int **)(param_1 + 0x17d0),0,0x10,2)
            ;
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))(*(int **)(param_1 + 0x17d0),0,0x12,2)
            ;
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))(*(int **)(param_1 + 0x17d0),0,0xd,1);
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))(*(int **)(param_1 + 0x17d0),0,0xe,1);
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))(*(int **)(param_1 + 0x17d0),0,0x19,1)
            ;
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))(*(int **)(param_1 + 0x17d0),0,0xb,0);
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))(*(int **)(param_1 + 0x17d0),0,0x18,0)
            ;
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))(*(int **)(param_1 + 0x17d0),0,0x13,0)
            ;
            uVar3 = 1;
            if (1 < *(uint *)(param_1 + 0x18ac)) {
              do {
                (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))
                          (*(int **)(param_1 + 0x17d0),uVar3,1,1);
                (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))
                          (*(int **)(param_1 + 0x17d0),uVar3,2,2);
                (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))
                          (*(int **)(param_1 + 0x17d0),uVar3,3,1);
                (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))
                          (*(int **)(param_1 + 0x17d0),uVar3,4,1);
                (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))
                          (*(int **)(param_1 + 0x17d0),uVar3,5,0);
                (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))
                          (*(int **)(param_1 + 0x17d0),uVar3,6,1);
                (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))
                          (*(int **)(param_1 + 0x17d0),uVar3,0x11,2);
                (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))
                          (*(int **)(param_1 + 0x17d0),uVar3,0x10,2);
                (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))
                          (*(int **)(param_1 + 0x17d0),uVar3,0x12,2);
                (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))
                          (*(int **)(param_1 + 0x17d0),uVar3,0xd,1);
                (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))
                          (*(int **)(param_1 + 0x17d0),uVar3,0xe,1);
                (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))
                          (*(int **)(param_1 + 0x17d0),uVar3,0x19,1);
                (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))
                          (*(int **)(param_1 + 0x17d0),uVar3,0xb,uVar3);
                (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))
                          (*(int **)(param_1 + 0x17d0),uVar3,0x18,0);
                (**(code **)(**(int **)(param_1 + 0x17d0) + 0xfc))
                          (*(int **)(param_1 + 0x17d0),uVar3,0x13,0);
                uVar3 = uVar3 + 1;
              } while (uVar3 < *(uint *)(param_1 + 0x18ac));
            }
            FUN_004235b0(*(undefined4 *)(param_1 + 0x19c0),*(undefined4 *)(param_1 + 0x19c4),
                         *(undefined4 *)(param_1 + 0x19c8));
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0x30))(*(int **)(param_1 + 0x17d0),0);
            (**(code **)(**(int **)(param_1 + 0x17d0) + 0x28))(*(int **)(param_1 + 0x17d0),0,0,0);
            ExceptionList = pvVar4;
            return;
          }
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&stack0xfffffc38,"Src\\pbeScene.cpp");
          FUN_004f8f30(iVar5,&stack0xfffffc38,0x1114);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&stack0xfffffc54,(ThrowInfo *)&DAT_005958a4);
        }
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &piStack_420,"Src\\pbeScene.cpp");
        FUN_004f8f30(iVar5,&piStack_420,0x1111);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&piStack_3fc,(ThrowInfo *)&DAT_005958a4);
      }
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_3f0,"Src\\pbeScene.cpp");
      FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
      piStack_408 = (int *)0x426ec4;
      _CxxThrowException(&piStack_3cc,(ThrowInfo *)&DAT_005958a4);
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &piStack_390,"Src\\pbeScene.cpp");
    FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
    piStack_3a8 = (int *)0x426bdb;
    _CxxThrowException(&piStack_36c,(ThrowInfo *)&DAT_005958a4);
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &piStack_2d0,"Src\\pbeScene.cpp");
  FUN_004f8f30();
                    /* WARNING: Subroutine does not return */
  piStack_2e8 = (int *)0x426611;
  _CxxThrowException(&piStack_2ac,(ThrowInfo *)&DAT_005958a4);
}




/* Function: FUN_00427860 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_00427860(int *param_1,int *param_2,float *param_3)

{
  int *piVar1;
  bool bVar2;
  float fVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  float fVar11;
  int *piVar12;
  float10 fVar13;
  undefined1 local_474 [36];
  undefined1 local_450 [36];
  undefined1 local_42c [36];
  undefined1 local_408 [36];
  undefined1 local_3e4 [36];
  undefined1 local_3c0 [36];
  undefined1 local_39c [36];
  undefined1 local_378 [36];
  undefined1 local_354 [36];
  undefined1 local_330 [36];
  undefined1 local_30c [36];
  undefined1 local_2e8 [36];
  undefined1 local_2c4 [36];
  undefined1 local_2a0 [36];
  undefined1 local_27c [36];
  undefined1 local_258 [36];
  undefined1 local_234 [36];
  undefined1 local_210 [36];
  undefined1 local_1ec [36];
  undefined1 local_1c8 [36];
  undefined1 local_1a4 [36];
  undefined1 local_180 [36];
  undefined1 local_15c [36];
  undefined1 local_138 [36];
  undefined1 local_114 [36];
  undefined1 local_f0 [36];
  undefined4 local_cc;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_c8 [20];
  float local_b4;
  int *local_b0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_ac [12];
  undefined1 local_a0 [12];
  undefined4 local_94;
  int *local_90;
  undefined4 local_8c [6];
  float local_74;
  int *local_70;
  undefined4 local_6c;
  float local_68 [3];
  int *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_48 [28];
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_1d;
  float local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057b64d;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffb80;
  ExceptionList = &local_10;
  local_90 = param_1;
  cVar4 = (**(code **)(*param_1 + 0x10))();
  if ((cVar4 != '\0') && (param_2 != (int *)0x0)) {
    local_1d = 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               local_68,"StencilShadows");
    local_8 = 0;
    uVar6 = FUN_004224c0(local_ac,local_68);
    uVar5 = FUN_0040e560(uVar6,1);
    *(undefined1 *)((int)param_1 + 0x18f2) = uVar5;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_ac);
    local_8 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               local_68);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               local_68,"MotionBlur");
    local_8 = 1;
    uVar6 = FUN_004224c0(local_ac,local_68);
    uVar5 = FUN_0040e560(uVar6,0);
    *(undefined1 *)((int)param_1 + 0x18f1) = uVar5;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_ac);
    local_8 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               local_68);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               local_68,"WaterReflectCity");
    local_8 = 2;
    uVar6 = FUN_004224c0(local_ac,local_68);
    uVar5 = FUN_0040e560(uVar6,0);
    *(undefined1 *)(param_1 + 0x63c) = uVar5;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_ac);
    local_8 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               local_68);
    local_8 = 3;
    uVar7 = (**(code **)(*param_2 + 0x10))(param_2);
    uVar6 = FUN_0041e5b0("There is %uKb of video memory",uVar7 >> 10);
    FUN_0040a410(uVar6);
    local_18 = (int *)0x0;
    iVar8 = (**(code **)(*param_2 + 0x80))(param_2,&local_18);
    if (iVar8 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 local_68,"Src\\pbeScene.cpp");
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004f8f30(iVar8,local_68,0x291);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_330,(ThrowInfo *)&DAT_005958a4);
    }
    iVar8 = (**(code **)(*local_18 + 0x20))(local_18,local_8c);
    (**(code **)(*local_18 + 8))(local_18);
    if (iVar8 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 local_68,"Src\\pbeScene.cpp");
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_004f8f30(iVar8,local_68,0x295);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_138,(ThrowInfo *)&DAT_005958a4);
    }
    param_1[0x647] = (int)local_74;
    param_1[0x645] = 0;
    param_1[0x646] = 0;
    param_1[0x648] = (int)local_70;
    param_1[0x649] = 0;
    param_1[0x64a] = 0x3f800000;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               local_68,(char *)&PTR_LAB_00582b08);
    local_8._0_1_ = 6;
    fVar13 = (float10)FUN_0042dc70(local_68);
    param_3 = (float *)(float)fVar13;
    param_3 = (float *)FUN_004cf110();
    if (((float)(int)param_3 == _DAT_00582ad8) || (800 < (uint)local_74)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    local_8._0_1_ = 3;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               local_68);
    if (bVar2) {
      *(undefined1 *)((int)param_1 + 0x18f1) = 0;
    }
    uVar7 = 0;
    local_28 = 0.0;
    param_3 = (float *)0x0;
    local_8._0_1_ = 0xd;
    iVar8 = (**(code **)(*(int *)param_1[0x5f4] + 0x18))((int *)param_1[0x5f4],&param_3);
    if (iVar8 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 local_68,"Src\\pbeScene.cpp");
      local_8 = CONCAT31(local_8._1_3_,0xe);
      FUN_004f8f30(iVar8,local_68,0x2e9);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_2e8,(ThrowInfo *)&DAT_005958a4);
    }
    iVar8 = (**(code **)((int)*param_3 + 0x20))(param_3,param_1[0x602],local_a0);
    if (iVar8 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 local_68,"Src\\pbeScene.cpp");
      local_8 = CONCAT31(local_8._1_3_,0xf);
      FUN_004f8f30(iVar8,local_68,0x2ed);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_180,(ThrowInfo *)&DAT_005958a4);
    }
    local_68[0] = 1.05097e-43;
    local_68[1] = 9.94922e-44;
    local_68[2] = 1.079e-43;
    local_5c = (int *)0x4b;
    local_58 = 0x4f;
    local_54 = 0x50;
    local_50 = 0x49;
    for (; uVar7 < 7; uVar7 = uVar7 + 1) {
      if ((uVar7 != 0) || (*(char *)((int)param_1 + 0x18f2) != '\0')) {
        fVar11 = local_68[uVar7];
        iVar8 = (**(code **)((int)*param_3 + 0x28))
                          (param_3,param_1[0x602],param_1[0x603],local_94,2,1,fVar11);
        if (-1 < iVar8) {
          iVar8 = (**(code **)((int)*param_3 + 0x30))
                            (param_3,param_1[0x602],param_1[0x603],local_94,param_1[0x5f7],fVar11);
          if (-1 < iVar8) {
            local_28 = local_68[uVar7];
            break;
          }
        }
      }
    }
    if (param_3 != (float *)0x0) {
      (**(code **)((int)*param_3 + 8))(param_3);
      param_3 = (float *)0x0;
    }
    piVar12 = local_70;
    fVar11 = local_74;
    if (local_28 == 0.0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 local_68,"Src\\pbeScene.cpp");
      local_8 = CONCAT31(local_8._1_3_,0x10);
      FUN_004f8f30(0x88760866,local_68,0x317);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_3c0,(ThrowInfo *)&DAT_005958a4);
    }
    piVar1 = (int *)param_1[0x63f];
    if (piVar1 != (int *)0x0) {
      local_24 = (float)(**(code **)(*piVar1 + 0x38))(piVar1,0,&local_cc);
      if ((int)local_24 < 0) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   local_68,"Src\\pbeScene.cpp");
        local_8 = CONCAT31(local_8._1_3_,0x11);
        FUN_004f8f30(local_24,local_68,0x322);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_1c8,(ThrowInfo *)&DAT_005958a4);
      }
      if ((uint)fVar11 < (uint)local_b4) {
        fVar11 = local_b4;
      }
      if (piVar12 < local_b0) {
        piVar12 = local_b0;
      }
      piVar1 = (int *)param_1[0x643];
      if (piVar1 != (int *)0x0) {
        local_24 = (float)(**(code **)(*piVar1 + 0x10))(piVar1,local_68 + 2);
        if ((int)local_24 < 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_48,"Src\\pbeScene.cpp");
          local_8 = CONCAT31(local_8._1_3_,0x12);
          FUN_004f8f30(local_24,local_48,0x32b);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_f0,(ThrowInfo *)&DAT_005958a4);
        }
        if (local_68[2] != 0.0) {
          fVar11 = local_68[2];
        }
        if (local_5c != (int *)0x0) {
          piVar12 = local_5c;
        }
      }
    }
    local_18 = (int *)0x0;
    local_8._0_1_ = 0x13;
    iVar8 = (**(code **)(*(int *)param_1[0x5f4] + 0x68))
                      ((int *)param_1[0x5f4],fVar11,piVar12,local_28,param_1[0x5f9],&local_18);
    if (iVar8 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_48,"Src\\pbeScene.cpp");
      local_8 = CONCAT31(local_8._1_3_,0x14);
      FUN_004f8f30(iVar8,local_48,0x339);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_210,(ThrowInfo *)&DAT_005958a4);
    }
    local_1c = 0.0;
    local_8._0_1_ = 0x15;
    iVar8 = (**(code **)(*(int *)param_1[0x5f4] + 0x80))((int *)param_1[0x5f4],&local_1c);
    if (iVar8 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_48,"Src\\pbeScene.cpp");
      local_8 = CONCAT31(local_8._1_3_,0x16);
      FUN_004f8f30(iVar8,local_48,0x33e);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_450,(ThrowInfo *)&DAT_005958a4);
    }
    iVar8 = (**(code **)(*(int *)param_1[0x5f4] + 0x7c))((int *)param_1[0x5f4],local_1c,local_18);
    if (iVar8 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_48,"Src\\pbeScene.cpp");
      local_8 = CONCAT31(local_8._1_3_,0x17);
      FUN_004f8f30(iVar8,local_48,0x341);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_258,(ThrowInfo *)&DAT_005958a4);
    }
    FUN_00407060();
    FUN_00407060();
    FUN_00407060();
    FUN_00407060();
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00407060();
    if (*(char *)((int)param_1 + 0x18f1) == '\0') goto LAB_004282e4;
    uVar6 = 1;
    local_1c = local_74;
    local_18 = local_70;
    local_28 = 2.94273e-44;
    iVar8 = FUN_004942e0(param_2,&local_1c,&local_18,0,1,&local_28,0);
    if (iVar8 < 0) {
      uVar6 = 0;
      iVar8 = FUN_004942e0(param_2,&local_1c,&local_18,0,0,&local_28,0);
      if (iVar8 < 0) goto LAB_00427f52;
    }
    iVar8 = FUN_00494308(param_2,local_1c,local_18,1,uVar6,local_28,0,param_1 + 0x63e);
    if (iVar8 < 0) {
LAB_00427f52:
      (**(code **)(*param_1 + 0x10))();
      ExceptionList = local_10;
      return 0;
    }
    piVar12 = (int *)param_1[0x63e];
    (**(code **)(*piVar12 + 0x38))(piVar12,0,local_8c);
    if (((uint)param_1[0x647] <= (uint)local_74) && ((int *)param_1[0x648] <= local_70)) {
      param_3 = (float *)0x0;
      local_8._0_1_ = 0x18;
      iVar8 = (**(code **)(*(int *)param_1[0x5f4] + 0x84))((int *)param_1[0x5f4],&param_3);
      if (iVar8 < 0) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  (local_48,"Src\\pbeScene.cpp");
        local_8 = CONCAT31(local_8._1_3_,0x19);
        FUN_004f8f30(iVar8,local_48,899);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_378,(ThrowInfo *)&DAT_005958a4);
      }
      iVar8 = (**(code **)((int)*param_3 + 0x20))(param_3,&local_6c);
      if (iVar8 < 0) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  (local_48,"Src\\pbeScene.cpp");
        local_8 = CONCAT31(local_8._1_3_,0x1a);
        FUN_004f8f30(iVar8,local_48,0x387);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_2a0,(ThrowInfo *)&DAT_005958a4);
      }
      FUN_00407060();
      iVar8 = FUN_0049537a(param_1[0x5f4],local_1c,local_18,local_8c[0],1,local_6c,param_1 + 0x643);
      if (iVar8 < 0) {
        (**(code **)(*param_1 + 0x10))();
        FUN_00407060();
        ExceptionList = local_10;
        return 0;
      }
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_00407060();
      if (*(char *)((int)param_1 + 0x18f1) == '\0') {
LAB_004282e4:
        param_3 = (float *)0x0;
        local_8._0_1_ = 0x1b;
        iVar8 = (**(code **)(*(int *)param_1[0x5f4] + 0x84))((int *)param_1[0x5f4],&param_3);
        if (iVar8 < 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_48,"Src\\pbeScene.cpp");
          local_8 = CONCAT31(local_8._1_3_,0x1c);
          FUN_004f8f30(iVar8,local_48,0x3d4);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_408,(ThrowInfo *)&DAT_005958a4);
        }
        iVar8 = (**(code **)((int)*param_3 + 0x20))(param_3,&local_cc);
        if (iVar8 < 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_48,"Src\\pbeScene.cpp");
          local_8 = CONCAT31(local_8._1_3_,0x1d);
          FUN_004f8f30(iVar8,local_48,0x3d8);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_114,(ThrowInfo *)&DAT_005958a4);
        }
        FUN_00407060();
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   local_68,"TempRSWidth");
        local_8._0_1_ = 0x1e;
        uVar6 = FUN_004224c0(local_48,local_68);
        local_4c = (float)FUN_0040e4b0(uVar6,0x100);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_48);
        local_8._0_1_ = 0x1b;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   local_68);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   local_68,"TempRSHeight");
        local_8._0_1_ = 0x1f;
        uVar6 = FUN_004224c0(local_48,local_68);
        uVar6 = FUN_0040e4b0(uVar6,0x100);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_48);
        local_8._0_1_ = 0x1b;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   local_68);
        iVar8 = FUN_0049537a(param_1[0x5f4],local_4c,uVar6,local_8c[0],1,local_cc,param_1 + 0x66e);
        if (iVar8 < 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_48,"Src\\pbeScene.cpp");
          local_8 = CONCAT31(local_8._1_3_,0x20);
          FUN_004f8f30(iVar8,local_48,0x3e6);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_15c,(ThrowInfo *)&DAT_005958a4);
        }
        iVar8 = FUN_0049537a(param_1[0x5f4],local_4c,uVar6,local_8c[0],0,0,param_1 + 0x66f);
        if (iVar8 < 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_48,"Src\\pbeScene.cpp");
          local_8 = CONCAT31(local_8._1_3_,0x21);
          FUN_004f8f30(iVar8,local_48,0x3ef);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_1a4,(ThrowInfo *)&DAT_005958a4);
        }
        local_8._0_1_ = 3;
        FUN_00407060();
        piVar12 = param_1 + 0x64b;
        iVar8 = FUN_00498e5f(param_1[0x5f4],0x3f800000,8,8,piVar12,0);
        if (iVar8 < 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_48,"Src\\pbeScene.cpp");
          local_8 = CONCAT31(local_8._1_3_,0x22);
          FUN_004f8f30(iVar8,local_48,0x3f5);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_1ec,(ThrowInfo *)&DAT_005958a4);
        }
        uVar7 = (**(code **)(*(int *)*piVar12 + 0x10))((int *)*piVar12);
        param_3 = (float *)0x0;
        (**(code **)(*(int *)*piVar12 + 0x58))((int *)*piVar12,0,&param_3);
        for (uVar9 = 0; uVar9 < uVar7; uVar9 = uVar9 + 1) {
          *(undefined4 *)((int)param_3 + uVar9 * 4) = 0;
        }
        (**(code **)(*(int *)param_1[0x64b] + 0x5c))((int *)param_1[0x64b]);
        param_3 = operator_new(0x2c,(nothrow_t *)&DAT_005b6164);
        local_8._0_1_ = 0x23;
        if (param_3 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          uVar6 = FUN_00423380();
          iVar8 = FUN_0041cfc0(param_2,2,uVar6,0xc00);
        }
        local_8._0_1_ = 3;
        uVar5 = (undefined1)local_8;
        local_8._0_1_ = 3;
        param_1[0xb1] = iVar8;
        if (iVar8 == 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_48,"Src\\pbeScene.cpp");
          local_8 = CONCAT31(local_8._1_3_,0x24);
          FUN_004f8f30(0x8876086c,local_48,0x407);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_234,(ThrowInfo *)&DAT_005958a4);
        }
        local_8._0_1_ = uVar5;
        pvVar10 = operator_new(0x2c,(nothrow_t *)&DAT_005b6164);
        local_8._0_1_ = 0x25;
        if (pvVar10 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          uVar6 = FUN_00423380();
          iVar8 = FUN_0041d150(param_2,0x12,uVar6,0xc00);
        }
        local_8._0_1_ = 3;
        uVar5 = (undefined1)local_8;
        local_8._0_1_ = 3;
        param_1[0xb2] = iVar8;
        if (iVar8 == 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_48,"Src\\pbeScene.cpp");
          local_8 = CONCAT31(local_8._1_3_,0x26);
          FUN_004f8f30(0x8876086c,local_48,0x40a);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_27c,(ThrowInfo *)&DAT_005958a4);
        }
        local_8._0_1_ = uVar5;
        pvVar10 = operator_new(0x2c,(nothrow_t *)&DAT_005b6164);
        local_8._0_1_ = 0x27;
        if (pvVar10 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          uVar6 = FUN_00423380();
          iVar8 = FUN_0041d1c0(param_2,0x112,uVar6,0xc00);
        }
        local_8._0_1_ = 3;
        uVar5 = (undefined1)local_8;
        local_8._0_1_ = 3;
        param_1[0xb3] = iVar8;
        if (iVar8 == 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_48,"Src\\pbeScene.cpp");
          local_8 = CONCAT31(local_8._1_3_,0x28);
          FUN_004f8f30(0x8876086c,local_48,0x40d);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_2c4,(ThrowInfo *)&DAT_005958a4);
        }
        local_8._0_1_ = uVar5;
        pvVar10 = operator_new(0x2c,(nothrow_t *)&DAT_005b6164);
        local_8._0_1_ = 0x29;
        if (pvVar10 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          uVar6 = FUN_00423380();
          iVar8 = FUN_0041d030(param_2,0x212,uVar6,0xc00);
        }
        local_8._0_1_ = 3;
        uVar5 = (undefined1)local_8;
        local_8._0_1_ = 3;
        param_1[0xb4] = iVar8;
        if (iVar8 == 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_48,"Src\\pbeScene.cpp");
          local_8 = CONCAT31(local_8._1_3_,0x2a);
          FUN_004f8f30(0x8876086c,local_48,0x410);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_30c,(ThrowInfo *)&DAT_005958a4);
        }
        local_8._0_1_ = uVar5;
        pvVar10 = operator_new(0x2c,(nothrow_t *)&DAT_005b6164);
        local_8._0_1_ = 0x2b;
        if (pvVar10 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          uVar6 = FUN_00423380();
          iVar8 = FUN_0041d150(param_2,0x142,uVar6,0xc00);
        }
        local_8._0_1_ = 3;
        uVar5 = (undefined1)local_8;
        local_8._0_1_ = 3;
        param_1[0xb5] = iVar8;
        if (iVar8 == 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_48,"Src\\pbeScene.cpp");
          local_8 = CONCAT31(local_8._1_3_,0x2c);
          FUN_004f8f30(0x8876086c,local_48,0x413);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_354,(ThrowInfo *)&DAT_005958a4);
        }
        local_8._0_1_ = uVar5;
        pvVar10 = operator_new(0x2c,(nothrow_t *)&DAT_005b6164);
        local_8._0_1_ = 0x2d;
        if (pvVar10 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          uVar6 = FUN_00423380();
          iVar8 = FUN_0041d150(param_2,0x182,uVar6,0xc00);
        }
        local_8._0_1_ = 3;
        uVar5 = (undefined1)local_8;
        local_8._0_1_ = 3;
        param_1[0xb6] = iVar8;
        if (iVar8 == 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_48,"Src\\pbeScene.cpp");
          local_8 = CONCAT31(local_8._1_3_,0x2e);
          FUN_004f8f30(0x8876086c,local_48,0x416);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_39c,(ThrowInfo *)&DAT_005958a4);
        }
        local_8._0_1_ = uVar5;
        pvVar10 = operator_new(0x2c,(nothrow_t *)&DAT_005b6164);
        local_8._0_1_ = 0x2f;
        if (pvVar10 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          uVar6 = FUN_00423380();
          iVar8 = FUN_0041d1c0(param_2,0x242,uVar6,0xc00);
        }
        local_8._0_1_ = 3;
        uVar5 = (undefined1)local_8;
        local_8._0_1_ = 3;
        param_1[0xb7] = iVar8;
        if (iVar8 == 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_48,"Src\\pbeScene.cpp");
          local_8 = CONCAT31(local_8._1_3_,0x30);
          FUN_004f8f30(0x8876086c,local_48,0x419);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_3e4,(ThrowInfo *)&DAT_005958a4);
        }
        local_8._0_1_ = uVar5;
        pvVar10 = operator_new(0x2c,(nothrow_t *)&DAT_005b6164);
        local_8._0_1_ = 0x31;
        if (pvVar10 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          uVar6 = FUN_00423380();
          iVar8 = FUN_0041d230(param_2,0x152,uVar6,0xc00);
        }
        local_8._0_1_ = 3;
        uVar5 = (undefined1)local_8;
        local_8._0_1_ = 3;
        param_1[0xb8] = iVar8;
        if (iVar8 == 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_48,"Src\\pbeScene.cpp");
          local_8 = CONCAT31(local_8._1_3_,0x32);
          FUN_004f8f30(0x8876086c,local_48,0x41c);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_42c,(ThrowInfo *)&DAT_005958a4);
        }
        local_8._0_1_ = uVar5;
        pvVar10 = operator_new(0x2c,(nothrow_t *)&DAT_005b6164);
        local_8._0_1_ = 0x33;
        if (pvVar10 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          uVar6 = FUN_00423380();
          iVar8 = FUN_0041d230(param_2,0x192,uVar6,0xc00);
        }
        local_8._0_1_ = 3;
        uVar5 = (undefined1)local_8;
        local_8._0_1_ = 3;
        param_1[0xb9] = iVar8;
        if (iVar8 == 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_c8,"Src\\pbeScene.cpp");
          local_8 = CONCAT31(local_8._1_3_,0x34);
          FUN_004f8f30(0x8876086c,local_c8,0x41f);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_474,(ThrowInfo *)&DAT_005958a4);
        }
        local_8._0_1_ = uVar5;
        (**(code **)(param_1[0xd6] + 0x14))(param_2,param_1);
        if ((int *)param_1[0x5f1] != (int *)0x0) {
          (**(code **)(*(int *)param_1[0x5f1] + 0x14))(param_1[0x5f4],param_1);
        }
        if ((int *)param_1[0x5f2] != (int *)0x0) {
          (**(code **)(*(int *)param_1[0x5f2] + 0x14))(param_1[0x5f4],param_1);
        }
        if ((char)param_1[0x879] != '\0') {
          (**(code **)(param_1[0x6c4] + 0x14))(param_2,param_1);
        }
        if (((char)param_1[0x87b] != '\0') && ((int *)param_1[0x87a] != (int *)0x0)) {
          (**(code **)(*(int *)param_1[0x87a] + 0x14))(param_2,param_1);
        }
        FUN_004255d0();
        if ((int *)param_1[0x5c1] != (int *)0x0) {
          (**(code **)(*(int *)param_1[0x5c1] + 0x14))(param_2,param_1);
        }
        ExceptionList = local_10;
        return local_1d;
      }
      uVar7 = FUN_00423380();
      piVar12 = param_1 + 0x644;
      iVar8 = (**(code **)(*param_2 + 0x5c))(param_2,0x50,uVar7 | 8,0x102,0,piVar12);
      if (-1 < iVar8) {
        fVar11 = (float)(int)local_74;
        param_3 = (float *)0x0;
        if ((int)local_74 < 0) {
          fVar11 = fVar11 + _DAT_00582b04;
        }
        fVar3 = (float)(param_1[0x647] + 1);
        if (param_1[0x647] + 1 < 0) {
          fVar3 = fVar3 + _DAT_00582b04;
        }
        local_28 = (float)(int)local_70;
        if ((int)local_70 < 0) {
          local_28 = local_28 + _DAT_00582b04;
        }
        local_2c = (float)(param_1[0x648] + 1);
        if (param_1[0x648] + 1 < 0) {
          local_2c = local_2c + _DAT_00582b04;
        }
        local_2c = local_2c / local_28;
        local_18 = (int *)((_DAT_00583354 / fVar11) * _DAT_00587cbc);
        local_28 = _DAT_00583354 / local_28;
        local_4c = local_28 * _DAT_00587cbc;
        local_1c = fVar3 / fVar11 - (_DAT_00583354 / fVar11) * _DAT_00583340;
        local_24 = local_2c - local_28 * _DAT_00583340;
        (**(code **)(*(int *)*piVar12 + 0x2c))((int *)*piVar12,0,0,&param_3,0);
        fVar11 = (float)param_1[0x647];
        if (param_1[0x647] < 0) {
          fVar11 = fVar11 + _DAT_00582b04;
        }
        *param_3 = _DAT_00587cb8 - _DAT_00587de8 / fVar11;
        param_3[1] = -1.0;
        param_3[2] = 0.5;
        param_3[3] = (float)local_18;
        param_3[4] = local_24;
        fVar11 = (float)param_1[0x647];
        if (param_1[0x647] < 0) {
          fVar11 = fVar11 + _DAT_00582b04;
        }
        param_3[5] = _DAT_00587cb8 - _DAT_00587de8 / fVar11;
        fVar11 = (float)param_1[0x648];
        if (param_1[0x648] < 0) {
          fVar11 = fVar11 + _DAT_00582b04;
        }
        param_3[6] = _DAT_00587de8 / fVar11 + _DAT_00583354;
        param_3[7] = 0.5;
        param_3[8] = (float)local_18;
        param_3[9] = local_4c;
        param_3[10] = 1.0;
        param_3[0xb] = -1.0;
        param_3[0xc] = 0.5;
        param_3[0xd] = local_1c;
        param_3[0xe] = local_24;
        param_3[0xf] = 1.0;
        fVar11 = (float)param_1[0x648];
        if (param_1[0x648] < 0) {
          fVar11 = fVar11 + _DAT_00582b04;
        }
        param_3[0x10] = _DAT_00587de8 / fVar11 + _DAT_00583354;
        param_3[0x11] = 0.5;
        param_3[0x12] = local_1c;
        param_3[0x13] = local_4c;
        (**(code **)(*(int *)*piVar12 + 0x30))((int *)*piVar12);
        goto LAB_004282e4;
      }
    }
    (**(code **)(*param_1 + 0x10))();
  }
  ExceptionList = local_10;
  return 0;
}





/* globals_06 functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_004fdd50 */

void __thiscall FUN_004fdd50(int param_1,uint param_2)

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
    FUN_0043b080(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 2))) {
    FUN_00409930(&param_2,*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_004fddd0 */

void __thiscall FUN_004fddd0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(int *)(param_1 + 8) - iVar1 >> 6 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_3 - iVar1 >> 6;
  }
  FUN_004fda30(param_3,1,param_4);
  *param_2 = iVar1 * 0x40 + *(int *)(param_1 + 4);
  return;
}




/* Function: FUN_004fde20 */

void __fastcall FUN_004fde20(int param_1)

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




/* Function: FUN_004fde70 */

void __thiscall FUN_004fde70(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 6) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 6))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_004fd8d0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x40;
    return;
  }
  FUN_004fddd0(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_004fe5c0 */

void FUN_004fe5c0(void)

{
  FUN_004fde20();
  return;
}




/* Function: FUN_004fe5d0 */

undefined4 __fastcall FUN_004fe5d0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x538);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x538) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x534);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x534) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x6c8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x6c8) = 0;
  }
  if (*(int **)(param_1 + 0x528) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x528) + 0x10))();
  }
  if (*(int **)(param_1 + 0x52c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x52c) + 0x10))();
  }
  if (*(int **)(param_1 + 0x530) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x530) + 4))();
  }
  *(undefined1 *)(param_1 + 0x6b0) = 0;
  FUN_004fe5c0();
  return 1;
}




/* Function: FUN_004fe660 */

undefined4 * __fastcall FUN_004fe660(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  HANDLE pvVar3;
  float fVar4;
  DWORD local_20 [8];
  
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00591020;
  _eh_vector_constructor_iterator_(param_1 + 0x21,0x18,1,FUN_0041d360,FUN_0041d370);
  FUN_00540bc0();
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0x3f800000;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0x9c4;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0x41400000;
  param_1[0x15f] = 0x3c888889;
  param_1[0x160] = 0x41400000;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 0;
  param_1[0x1ad] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b4] = 0;
  param_1[0x168] = 0;
  param_1[0x167] = 3;
  local_20[7] = 0;
  local_20[4] = 0;
  param_1[0x169] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  local_20[1] = 0;
  local_20[2] = 0x3f800000;
  param_1[0x174] = 0;
  local_20[3] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0x3f800000;
  param_1[0x179] = 0;
  fVar4 = std::numeric_limits<float>::max();
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x17b] = 0x3f800000;
  param_1[0x182] = 0x3f400000;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  param_1[0x183] = 0x3f400000;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  param_1[0x184] = 0x3f400000;
  param_1[0x180] = 0;
  param_1[0x181] = 3;
  param_1[0x185] = 0x3f400000;
  local_20[7] = 0;
  param_1[0x186] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  param_1[0x187] = 0;
  local_20[1] = 0;
  local_20[2] = 0x3f800000;
  local_20[3] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0x3f800000;
  param_1[0x193] = 0;
  param_1[0x17a] = SQRT(fVar4);
  fVar4 = std::numeric_limits<float>::max();
  param_1[0x19b] = 0x3f800000;
  param_1[0x19c] = 0x3f800000;
  local_20[4] = 0x3c23d70a;
  param_1[0x19d] = 0x3f800000;
  local_20[5] = 0x3c23d70a;
  param_1[0x19e] = 0x3f800000;
  param_1[0x19f] = 0;
  local_20[6] = 0x3c23d70a;
  param_1[0x1a0] = 0;
  local_20[7] = 0x3c23d70a;
  param_1[0x1a1] = 0;
  param_1[0x195] = 0x3f800000;
  param_1[0x1a2] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[0x1a3] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0x3c23d70a;
  param_1[0x1a8] = 0x3c23d70a;
  param_1[0x1a9] = 0x3c23d70a;
  param_1[0x1aa] = 0x3c23d70a;
  param_1[0x194] = SQRT(fVar4);
  pvVar1 = operator_new(0x90,(nothrow_t *)&DAT_005b6164);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00542210();
  }
  param_1[0x14a] = uVar2;
  pvVar1 = operator_new(0x90,(nothrow_t *)&DAT_005b6164);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00541a30(param_1);
  }
  param_1[0x14b] = uVar2;
  pvVar1 = operator_new(0x14,(nothrow_t *)&DAT_005b6164);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00540f00();
  }
  param_1[0x14c] = uVar2;
  pvVar3 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
  param_1[0x1b3] = pvVar3;
  pvVar3 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
  param_1[0x1b4] = pvVar3;
  pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_004fd5a0,param_1,4
                        ,local_20);
  param_1[0x15a] = pvVar3;
  SetThreadPriority(pvVar3,0);
  ResumeThread((HANDLE)param_1[0x15a]);
  return param_1;
}




/* Function: FUN_004feaf0 */

void __fastcall FUN_004feaf0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_00591020;
  FUN_004fe5d0();
  if ((int *)param_1[0x14a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14a] + 0xc))(1);
  }
  param_1[0x14a] = 0;
  if ((int *)param_1[0x14b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14b] + 0xc))(1);
  }
  param_1[0x14b] = 0;
  if ((undefined4 *)param_1[0x14c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x14c])(1);
  }
  param_1[0x14c] = 0;
  if ((HANDLE)param_1[0x15a] != (HANDLE)0x0) {
    TerminateThread((HANDLE)param_1[0x15a],0);
    CloseHandle((HANDLE)param_1[0x15a]);
    param_1[0x15a] = 0;
  }
  if ((HANDLE)param_1[0x1b3] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x1b3]);
    param_1[0x1b3] = 0;
  }
  if ((HANDLE)param_1[0x1b4] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x1b4]);
    param_1[0x1b4] = 0;
  }
  piVar1 = (int *)param_1[0x1b2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1b2] = 0;
  }
  FUN_004fde20();
  if ((void *)param_1[0x156] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x156]);
  }
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  if ((void *)param_1[0x152] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x152]);
  }
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  piVar1 = (int *)param_1[0x14e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x14e] = 0;
  }
  piVar1 = (int *)param_1[0x14d];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x14d] = 0;
  }
  FUN_00540c00();
  _eh_vector_destructor_iterator_(param_1 + 0x21,0x18,1,FUN_0041d370);
  FUN_0040da90();
  return;
}




/* Function: FUN_004fec60 */

void * __thiscall FUN_004fec60(void *param_1,byte param_2)

{
  FUN_004feaf0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004fec80 */

undefined4 FUN_004fec80(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  void *unaff_EBX;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ea12;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0x88,(nothrow_t *)&DAT_005b6164);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    piVar2 = (int *)FUN_00542990();
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x1c))(param_1,param_2);
  FUN_00423250(piVar2,param_2,1);
  ExceptionList = unaff_EBX;
  return 1;
}




/* Function: FUN_004fed00 */

void FUN_004fed00(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ea32;
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




/* Function: FUN_004fed80 */

void __thiscall
FUN_004fed80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  for (uVar3 = 0;
      (iVar1 = *(int *)(param_1 + 4), iVar1 != 0 &&
      (uVar3 < (uint)(*(int *)(param_1 + 8) - iVar1 >> 2))); uVar3 = uVar3 + 1) {
    piVar2 = *(int **)(iVar1 + uVar3 * 4);
    if (piVar2[1] == param_6) {
      (**(code **)(*piVar2 + 8))(param_3,param_4,param_5);
    }
  }
  return;
}




/* Function: FUN_004fedd0 */

void __thiscall FUN_004fedd0(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057ea40;
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
      FUN_004fed00();
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




/* Function: FUN_004ff070 */

void __fastcall FUN_004ff070(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}




/* Function: FUN_004ff080 */

void __fastcall FUN_004ff080(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057ea58;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  for (uVar3 = 0;
      (iVar1 = *(int *)(param_1 + 4), iVar1 != 0 &&
      (uVar3 < (uint)(*(int *)(param_1 + 8) - iVar1 >> 2))); uVar3 = uVar3 + 1) {
    puVar2 = *(undefined4 **)(iVar1 + uVar3 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = pvStack_c;
  return;
}




/* Function: FUN_004ff100 */

void __thiscall FUN_004ff100(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined1 local_c [12];
  
  puVar7 = local_c;
  FUN_0041e470(1);
  FUN_00547ab0(puVar7);
  piVar5 = *(int **)(param_1 + 4);
  piVar6 = piVar5;
  if (piVar5 != *(int **)(param_1 + 8)) {
    do {
      piVar6 = piVar6 + 1;
      piVar1 = (int *)*piVar5;
      (**(code **)(*piVar1 + 4))(param_2);
      if (((float)piVar1[3] < (float)piVar1[2]) || (cVar3 = FUN_00542a90(local_c), cVar3 != '\0')) {
        piVar2 = *(int **)(param_1 + 8);
        if (piVar6 != piVar2) {
          piVar4 = piVar6;
          do {
            *(int *)(((int)piVar5 - (int)piVar6) + (int)piVar4) = *piVar4;
            piVar4 = piVar4 + 1;
          } while (piVar4 != piVar2);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
        (**(code **)*piVar1)(1);
      }
    } while ((piVar5 != *(int **)(param_1 + 8)) &&
            (piVar5 = piVar5 + 1, piVar5 != *(int **)(param_1 + 8)));
  }
  return;
}




/* Function: FUN_004ff1b0 */

void __thiscall FUN_004ff1b0(int param_1,undefined4 param_2)

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
  FUN_004fedd0(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_004ff220 */

int __thiscall FUN_004ff220(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ea94;
  local_c = ExceptionList;
  local_10 = 0;
  if (*(int *)(param_2 + 4) == 1) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x58,(nothrow_t *)&DAT_005b6164);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      local_10 = FUN_00542c60(param_2);
      goto LAB_004ff2b1;
    }
  }
  else {
    ExceptionList = &local_c;
    if (*(int *)(param_2 + 4) != 5) goto LAB_004ff2b1;
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x40,(nothrow_t *)&DAT_005b6164);
    local_4 = 1;
    if (pvVar1 != (void *)0x0) {
      local_10 = FUN_00542e60(param_2);
      goto LAB_004ff2b1;
    }
  }
  local_10 = 0;
LAB_004ff2b1:
  local_4 = 0xffffffff;
  iVar2 = -1;
  if (local_10 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
    }
    FUN_004ff1b0(&local_10);
  }
  ExceptionList = local_c;
  return iVar2;
}




/* Function: FUN_004ff2f0 */

void __thiscall FUN_004ff2f0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057eaa0;
  local_10 = ExceptionList;
  if (param_2 < 0x15555556) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0xc;
    }
    if (uVar3 < param_2) {
      ExceptionList = &local_10;
      iVar1 = FUN_00493c27(param_2 * 0xc);
      local_8 = 0;
      FUN_0046c370(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar1,param_1,param_2);
      iVar2 = *(int *)(param_1 + 4);
      if (iVar2 != 0) {
        for (; iVar2 != *(int *)(param_1 + 8); iVar2 = iVar2 + 0xc) {
        }
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)(param_1 + 4));
      }
      *(int *)(param_1 + 4) = iVar1;
      *(uint *)(param_1 + 0xc) = iVar1 + param_2 * 0xc;
      *(int *)(param_1 + 8) = iVar1;
      ExceptionList = local_10;
      return;
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_0046a4b0();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004ff420 */

void __thiscall FUN_004ff420(undefined4 *param_1,undefined4 *param_2)

{
  if (param_2 != param_1) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}




/* Function: FUN_004ff450 */

void __fastcall FUN_004ff450(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_140 [64];
  undefined1 local_100 [128];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  if (*(char *)(param_1 + 0xf0) != '\0') {
    uVar1 = FUN_005463f0(local_40,param_1 + 0x88);
    uVar2 = FUN_005485e8(param_1 + 0xa0);
    uVar1 = FUN_00545edc(local_140,param_1 + 0x94,uVar2,uVar1);
    uVar1 = FUN_0041d7a0(local_80,uVar1);
    uVar1 = FUN_0041d7a0(local_100,uVar1);
    FUN_0041d670(uVar1);
    FUN_00407300();
    FUN_00407300();
    FUN_00407300();
    FUN_00407300();
    FUN_00407300();
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  return;
}




/* Function: FUN_004ff520 */

undefined4 __thiscall FUN_004ff520(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [12];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [52];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057eab8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004ff450();
  FUN_00407260(param_1 + 0xb0);
  local_4 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00545c38(&local_7c);
  local_7c = 0;
  local_78 = 0x3f800000;
  local_74 = 0;
  FUN_005488cc(local_88,&local_7c,local_4c);
  local_84 = 0;
  FUN_0041d4b0();
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_64 = 7;
  uVar1 = FUN_0041d5b0(&local_7c,local_88,0x42700000);
  puVar2 = (undefined4 *)FUN_0041d550(local_70,param_1 + 0x88,uVar1);
  if (puVar2 != &local_60) {
    local_60 = *puVar2;
    local_5c = puVar2[1];
    local_58 = puVar2[2];
  }
  local_54 = 0;
  (**(code **)(*param_3 + 0x44))(param_2,1,&local_64);
  iVar3 = FUN_0041cab0();
  if (param_3 == *(int **)(iVar3 + 0x9c)) {
    FUN_0041cab0();
    uVar4 = 1;
    uVar1 = FUN_0041d5b0(&local_7c,&stack0xffffff6c,0x428c0000,1);
    uVar1 = FUN_0041d550(local_88,param_1 + 0x88,uVar1);
    FUN_00526460(uVar1,uVar4);
  }
  uStack_10 = 0xffffffff;
  _eh_vector_destructor_iterator_(&local_58,0x10,4,FUN_00407150);
  ExceptionList = pvStack_18;
  return 1;
}




/* Function: FUN_004ff6c0 */

void __fastcall FUN_004ff6c0(int param_1)

{
  if (*(void **)(param_1 + 0x238) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x238));
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  return;
}




/* Function: FUN_004ff6f0 */

void __thiscall FUN_004ff6f0(int param_1,char param_2)

{
  *(char *)(param_1 + 0x274) = param_2;
  if ((*(int *)(param_1 + 0x228) != 0) && (param_2 != '\0')) {
    FUN_0045ef60();
    return;
  }
  return;
}




/* Function: FUN_004ff8a0 */

undefined4 __thiscall FUN_004ff8a0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x84))(param_2,"InitialUpdate",0);
  return 1;
}




/* Function: FUN_004ff8c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004ff8c0(int param_1,int param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  uint local_48 [4];
  undefined8 local_38;
  double local_30;
  double local_28;
  double adStack_20 [3];
  
  iVar3 = 0;
  param_1 = param_1 - (int)param_3;
  param_2 = param_2 - (int)param_3;
  bVar2 = true;
  pfVar4 = param_3;
  do {
    if (*(float *)(param_1 + (int)pfVar4) <= *pfVar4) {
      if (*pfVar4 <= *(float *)(param_2 + (int)pfVar4)) {
        *(undefined1 *)((int)local_48 + iVar3) = 2;
      }
      else {
        *(undefined1 *)((int)local_48 + iVar3) = 0;
        bVar2 = false;
        adStack_20[iVar3] = (double)*(float *)(param_2 + (int)pfVar4);
      }
    }
    else {
      fVar1 = *(float *)(param_1 + (int)pfVar4);
      *(undefined1 *)((int)local_48 + iVar3) = 1;
      bVar2 = false;
      adStack_20[iVar3] = (double)fVar1;
    }
    iVar3 = iVar3 + 1;
    pfVar4 = pfVar4 + 1;
  } while (iVar3 < 3);
  if (!bVar2) {
    iVar3 = 0;
    pfVar4 = param_4;
    do {
      if ((*(char *)((int)local_48 + iVar3) == '\x02') || (*pfVar4 == (float)_DAT_00582ae8)) {
        *(undefined4 *)(&local_38 + iVar3) = 0;
        *(undefined4 *)((int)&local_38 + iVar3 * 8 + 4) = 0xbff00000;
      }
      else {
        (&local_38)[iVar3] =
             (double)(((float)adStack_20[iVar3] -
                      *(float *)(((int)param_3 - (int)param_4) + (int)pfVar4)) / *pfVar4);
      }
      iVar3 = iVar3 + 1;
      pfVar4 = pfVar4 + 1;
    } while (iVar3 < 3);
    local_48[0] = 0;
    if (local_38 < local_30) {
      local_48[0] = 1;
    }
    local_48[0] = (uint)(local_38 < local_30);
    if ((double)(&local_38)[local_48[0]] < local_28) {
      local_48[0] = 2;
    }
    if ((double)(&local_38)[local_48[0]] < _DAT_00582ae8) {
      return 0;
    }
    uVar5 = 0;
    iVar3 = (int)param_4 - (int)param_3;
    param_5 = param_5 - (int)param_3;
    do {
      if (local_48[0] == uVar5) {
        *(float *)(param_5 + (int)param_3) = (float)adStack_20[uVar5];
      }
      else {
        fVar1 = *(float *)(iVar3 + (int)param_3) * (float)(double)(&local_38)[local_48[0]] +
                *param_3;
        *(float *)(param_5 + (int)param_3) = fVar1;
        if (fVar1 < *(float *)((int)param_3 + param_1)) {
          return 0;
        }
        if (*(float *)((int)param_3 + param_2) < fVar1) {
          return 0;
        }
      }
      uVar5 = uVar5 + 1;
      param_3 = param_3 + 1;
    } while ((int)uVar5 < 3);
  }
  return 1;
}




/* Function: FUN_004ffa50 */

int __fastcall FUN_004ffa50(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x100;
  if (*(int *)(param_1 + 0x1ac) != 0) {
    iVar1 = param_1 + 0x140;
  }
  return iVar1;
}




/* Function: FUN_004ffa70 */

int __fastcall FUN_004ffa70(int param_1)

{
  return param_1 + 0x100;
}




/* Function: FUN_004ffa80 */

void __thiscall FUN_004ffa80(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20c) = param_2;
  return;
}




/* Function: FUN_004ffa90 */

undefined4 __fastcall FUN_004ffa90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20c);
}




/* Function: FUN_004ffaa0 */

float10 __fastcall FUN_004ffaa0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x214);
}




/* Function: FUN_004ffab0 */

float10 __fastcall FUN_004ffab0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x224);
}




/* Function: FUN_004ffac0 */

undefined4 __fastcall FUN_004ffac0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x228);
}




/* Function: FUN_004ffad0 */

void __thiscall FUN_004ffad0(int param_1,char *param_2)

{
  if (param_2 != (char *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004ffae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_1 + 0x1f0),param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004ffaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x1f0),"");
  return;
}




/* Function: FUN_004ffb00 */

void __fastcall FUN_004ffb00(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ffb06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x1f0));
  return;
}




/* Function: FUN_004ffb10 */

void __thiscall FUN_004ffb10(int param_1,undefined4 param_2)

{
  int iVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  char *pcVar2;
  undefined1 local_104 [260];
  
  *(undefined4 *)(param_1 + 0x228) = param_2;
  iVar1 = FUN_004ffac0();
  if (iVar1 != 0) {
    FUN_004ffac0(local_104);
    this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(this);
    FUN_004f5290(pcVar2);
    FUN_004ffad0(local_104);
    return;
  }
  FUN_004ffad0(&DAT_005831e1);
  return;
}




/* Function: FUN_004ffb80 */

void __thiscall FUN_004ffb80(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1e8) = param_2;
  return;
}




/* Function: FUN_004ffb90 */

undefined4 __fastcall FUN_004ffb90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x26c);
}




/* Function: FUN_004ffba0 */

void __thiscall FUN_004ffba0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x26c) = param_2;
  return;
}




/* Function: FUN_004ffbb0 */

undefined4 __fastcall FUN_004ffbb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x270);
}




/* Function: FUN_004ffbc0 */

int __fastcall FUN_004ffbc0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x2c;
}




/* Function: FUN_004ffbf0 */

int __fastcall FUN_004ffbf0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x74;
}




/* Function: FUN_004ffc20 */

void __fastcall
FUN_004ffc20(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  _eh_vector_destructor_iterator_(param_1 + 0x34,0x10,4,FUN_00407150);
                    /* WARNING: Could not recover jumptable at 0x004ffc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
  return;
}




/* Function: FUN_004ffc40 */

undefined1 __thiscall FUN_004ffc40(int param_1,uint param_2)

{
  uint uVar1;
  
  if (-1 < (int)param_2) {
    FUN_004ffac0();
    uVar1 = FUN_0043f8b0();
    if (param_2 < uVar1) {
      if (*(int *)(param_1 + 0x238) == 0) {
        return 0;
      }
      return *(undefined1 *)(*(int *)(param_1 + 0x238) + param_2);
    }
  }
  return 1;
}




/* Function: FUN_004ffc80 */

void __thiscall FUN_004ffc80(int param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 *puVar4;
  nothrow_t *pnVar5;
  
  if (-1 < (int)param_2) {
    FUN_004ffac0();
    uVar1 = FUN_0043f8b0();
    if (param_2 < uVar1) {
      if (*(int *)(param_1 + 0x238) == 0) {
        pnVar5 = (nothrow_t *)&DAT_005b6164;
        uVar1 = FUN_0043f8b0();
        pvVar2 = operator_new(uVar1,pnVar5);
        *(void **)(param_1 + 0x238) = pvVar2;
        uVar1 = FUN_0043f8b0();
        puVar4 = *(undefined4 **)(param_1 + 0x238);
        for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
      }
      *(undefined1 *)(param_2 + *(int *)(param_1 + 0x238)) = param_3;
    }
  }
  return;
}




/* Function: FUN_004ffd00 */

undefined4 __thiscall FUN_004ffd00(int *param_1,undefined4 param_2)

{
  if ((param_1[0x6b] != 0) && (*(char *)(param_1[0x6b] + 5) == '\0')) {
    return 0;
  }
  (**(code **)(*param_1 + 0x84))(param_2,"Update",0);
  return 1;
}




/* Function: FUN_004ffd30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004ffd30(int *param_1,int *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  iVar2 = param_3;
  iVar4 = param_1[0x6b];
  if ((iVar4 != 0) && ((*(char *)(iVar4 + 4) == '\0' || (*(char *)(iVar4 + 6) == '\0')))) {
    return 0;
  }
  if (param_1[0x88] < 1) {
    if (param_1[0x88] < 0) {
      fVar6 = (float10)FUN_0041ce10();
      fVar1 = (float)param_1[0x87];
      param_1[0x87] = (int)(float)((float10)fVar1 - fVar6);
      if ((float10)fVar1 - fVar6 < (float10)_DAT_00582ad8) {
        param_1[0x87] = 0;
      }
    }
  }
  else {
    fVar6 = (float10)FUN_0041ce10();
    fVar1 = (float)param_1[0x87];
    param_1[0x87] = (int)(float)(fVar6 + (float10)fVar1);
    if ((float10)_DAT_00583354 < fVar6 + (float10)fVar1) {
      param_1[0x87] = 0x3f800000;
    }
  }
  if ((float)param_1[0x87] < _DAT_00582ad8 == ((float)param_1[0x87] == _DAT_00582ad8)) {
    if (((*(char *)(iVar2 + 0x18ed) != '\0') &&
        (iVar4 = FUN_0041cb10(), *(char *)(iVar4 + 0x98) != '\0')) && ((char)param_1[0x9e] == '\0'))
    {
      return 0;
    }
    param_3 = 0;
    if (*(char *)((int)param_1 + 0x276) != '\0') {
      uVar3 = (**(code **)(*param_1 + 0x84))(iVar2,"Render",0);
      *(undefined1 *)((int)param_1 + 0x276) = uVar3;
    }
    if (param_1[0x6b] != 0) {
      *(undefined1 *)((int)param_1 + 0x277) = *(undefined1 *)(param_1[0x6b] + 0x277);
    }
    if (*(char *)((int)param_1 + 0x277) != '\0') {
      (**(code **)(*param_2 + 0xcc))(param_2,0x16,&param_3);
      if (param_3 == 2) {
        (**(code **)(*param_2 + 200))(param_2,0x16,3);
      }
      else if (param_3 == 3) {
        (**(code **)(*param_2 + 200))(param_2,0x16,2);
      }
    }
    iVar4 = FUN_00440000(param_2,iVar2,param_1);
    if (0 < iVar4) {
      uVar5 = (**(code **)(*param_1 + 0x88))();
      FUN_00420710(param_1,uVar5);
    }
    if (*(char *)((int)param_1 + 0x277) != '\0') {
      (**(code **)(*param_2 + 200))(param_2,0x16,param_3);
    }
    iVar2 = param_1[0x21];
    param_1[0x21] = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      param_1[0x21] = 8;
    }
    return iVar4;
  }
  return 0;
}




/* Function: FUN_004ffef0 */

undefined4 __thiscall
FUN_004ffef0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0043a0d0(*(undefined4 *)(param_1 + 600),*(undefined4 *)(param_1 + 0x25c),
                       *(undefined4 *)(param_1 + 0x260),*(undefined4 *)(param_1 + 0x264));
  if (iVar1 == 2) {
    return 0;
  }
  FUN_0041e330(0,param_4);
  FUN_0041da10(param_2);
  uVar2 = FUN_0045f340(param_2,param_3,param_1,0);
  return uVar2;
}




/* Function: FUN_004fff60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_004fff60(int *param_1,int param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  undefined1 local_d1;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [8];
  float fStack_44;
  undefined1 auStack_40 [12];
  float fStack_34;
  float fStack_28;
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  if ((*(char *)(param_2 + 2) == '\0') && ((char)param_1[1] != '\0')) {
    FUN_0041d580(&local_d0,param_4,param_3);
    local_b4 = local_d0 * local_d0 + local_cc * local_cc + local_c8 * local_c8;
    FUN_0041d4b0();
    local_a0 = param_3[1];
    local_a4 = *param_3;
    local_9c = param_3[2];
    local_94 = local_cc;
    local_d1 = 0;
    local_98 = local_d0;
    local_90 = local_c8;
    FUN_004ffac0();
    uVar2 = FUN_0043f940();
    FUN_004ffac0();
    uVar3 = FUN_0043f930();
    uVar4 = (**(code **)(*param_1 + 0x90))();
    FUN_004306e0(uVar3,uVar2,uVar4);
    iVar5 = FUN_004ff8c0(auStack_24,auStack_18,&local_a4,&local_98,auStack_4c);
    if (iVar5 != 0) {
      iVar6 = FUN_0043f8c0();
      iVar5 = param_1[0x8b];
      uVar10 = 0;
      iVar7 = FUN_0043f8b0();
      if (iVar7 != 0) {
        puVar11 = (ushort *)(iVar6 + 4);
        do {
          if ((param_1[0x8e] == 0) || (*(char *)(param_1[0x8e] + uVar10) == '\0')) {
            pfVar8 = (float *)((uint)puVar11[-2] * 0x10 + iVar5);
            local_d0 = *pfVar8;
            local_cc = pfVar8[1];
            local_c8 = pfVar8[2];
            fStack_34 = local_c8;
            uVar2 = (**(code **)(*param_1 + 0x90))();
            FUN_00548748(uVar2);
            fStack_c0 = local_d0;
            fStack_bc = local_cc;
            fStack_b8 = local_c8;
            pfVar8 = (float *)((uint)puVar11[-1] * 0x10 + iVar5);
            local_d0 = *pfVar8;
            local_cc = pfVar8[1];
            local_c8 = pfVar8[2];
            fStack_28 = local_c8;
            uVar2 = (**(code **)(*param_1 + 0x90))();
            FUN_00548748(uVar2);
            fStack_80 = local_d0;
            fStack_7c = local_cc;
            fStack_78 = local_c8;
            pfVar8 = (float *)((uint)*puVar11 * 0x10 + iVar5);
            local_d0 = *pfVar8;
            local_cc = pfVar8[1];
            local_c8 = pfVar8[2];
            fStack_44 = local_c8;
            uVar2 = (**(code **)(*param_1 + 0x90))();
            FUN_00548748(uVar2);
            fStack_8c = local_d0;
            fStack_88 = local_cc;
            fStack_84 = local_c8;
            iVar6 = FUN_00469bf0(&local_a4,&local_98,&fStack_8c,&fStack_80,&fStack_c0,&fStack_c4,
                                 auStack_40,auStack_50);
            if ((iVar6 != 0) && (_DAT_00582ad8 <= fStack_c4)) {
              fStack_b0 = fStack_c4 * local_98 + local_a4;
              fStack_ac = fStack_c4 * local_94 + local_a0;
              fStack_a8 = fStack_c4 * local_90 + local_9c;
              FUN_0041d580(&fStack_74,&fStack_b0,param_3);
              fVar1 = fStack_74 * fStack_74 + fStack_70 * fStack_70 + fStack_6c * fStack_6c;
              if (fVar1 < local_b4 != (fVar1 == local_b4)) {
                fStack_68 = fStack_80 - fStack_c0;
                fStack_64 = fStack_7c - fStack_bc;
                fStack_60 = fStack_78 - fStack_b8;
                fStack_5c = fStack_8c - fStack_c0;
                fStack_58 = fStack_88 - fStack_bc;
                fStack_54 = fStack_84 - fStack_b8;
                local_b4 = fVar1;
                uVar2 = FUN_0041d5e0(auStack_c,&fStack_68,&fStack_5c);
                FUN_0041d430(uVar2);
                FUN_0041d4b0();
                if (&fStack_b0 != (float *)(param_2 + 8)) {
                  *(float *)(param_2 + 8) = fStack_b0;
                  *(float *)(param_2 + 0xc) = fStack_ac;
                  *(float *)(param_2 + 0x10) = fStack_a8;
                }
                *(uint *)(param_2 + 0x24) = uVar10;
                local_d1 = 1;
              }
            }
          }
          uVar10 = uVar10 + 1;
          puVar11 = puVar11 + 0x16;
          uVar9 = FUN_0043f8b0();
        } while (uVar10 < uVar9);
      }
      return local_d1;
    }
    return 0;
  }
  return 0;
}




/* Function: FUN_005003a0 */

uint __thiscall FUN_005003a0(int *param_1,char *param_2,undefined4 *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined3 uVar5;
  undefined4 uVar4;
  undefined3 extraout_var;
  uint uVar6;
  char *_Str2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_004ffac0();
  if (iVar1 == 0) {
    return 0;
  }
  uVar6 = 0;
  iVar1 = FUN_0043f900();
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      _Str2 = param_2;
      iVar2 = FUN_0043f910();
      iVar2 = _stricmp((char *)(iVar2 + iVar1),_Str2);
      if (iVar2 == 0) {
        iVar1 = FUN_0043f910();
        local_8 = *(undefined4 *)(iVar1 + 0x44 + uVar6 * 0x4c);
        local_4 = *(undefined4 *)(iVar1 + uVar6 * 0x4c + 0x48);
        if (&local_c != param_3) {
          *param_3 = *(undefined4 *)(iVar1 + 0x40 + uVar6 * 0x4c);
          param_3[1] = local_8;
          param_3[2] = local_4;
        }
        uVar5 = (undefined3)((uint)&local_c >> 8);
        if (param_4 == '\0') {
          uVar4 = (**(code **)(*param_1 + 0x90))();
          FUN_00548748(uVar4);
          uVar5 = extraout_var;
        }
        return CONCAT31(uVar5,1);
      }
      uVar6 = uVar6 + 1;
      iVar1 = iVar1 + 0x4c;
      uVar3 = FUN_0043f900();
    } while (uVar6 < uVar3);
  }
  return uVar3 & 0xffffff00;
}




/* Function: FUN_00500470 */

void __fastcall
FUN_00500470(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  _eh_vector_destructor_iterator_(param_1 + 0x1c,0x10,4,FUN_00407150);
                    /* WARNING: Could not recover jumptable at 0x00500488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
  return;
}




/* Function: FUN_00500490 */

void FUN_00500490(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057eae2;
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




/* Function: FUN_00500510 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
FUN_00500510(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,param_2);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  return param_1;
}




/* Function: FUN_00500570 */

void FUN_00500570(int *param_1)

{
  (**(code **)(*param_1 + 100))(&param_1);
  return;
}




/* Function: FUN_00500580 */

void FUN_00500580(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (param_1,param_3);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  }
  return;
}




/* Function: FUN_005005c0 */

void FUN_005005c0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (param_1,param_3);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  }
  return;
}




/* Function: FUN_00500600 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
FUN_00500600(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (param_1,param_2);
  if (param_2 + 0x1c != param_1 + 0x1c) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  }
  if (param_2 + 0x28 != param_1 + 0x28) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  }
  if (param_2 + 0x34 != param_1 + 0x34) {
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  return param_1;
}




/* Function: FUN_00500680 */

void __fastcall FUN_00500680(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057eaf9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x24),0x10,4,FUN_00407150);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 8));
  ExceptionList = local_c;
  return;
}




/* Function: FUN_005006e0 */

void FUN_005006e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = param_3 + 5;
    puVar2 = param_1 + 5;
    do {
      if (param_1 != param_3) {
        *param_3 = *param_1;
        puVar1[-4] = puVar2[-4];
        puVar1[-3] = puVar2[-3];
      }
      if (puVar2 + -2 != puVar1 + -2) {
        puVar1[-2] = puVar2[-2];
        puVar1[-1] = puVar2[-1];
        *puVar1 = *puVar2;
      }
      param_1 = param_1 + 8;
      puVar1[1] = puVar2[1];
      *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(puVar2 + 2);
      param_3 = param_3 + 8;
      puVar1 = puVar1 + 8;
      puVar2 = puVar2 + 8;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_00500750 */

void FUN_00500750(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    param_3 = param_3 + -0x4c;
    param_4 = param_4 + -0x4c;
    FUN_00500600(param_3);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return;
}




/* Function: FUN_00500790 */

void FUN_00500790(int *param_1,
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
    pbVar1 = param_3 + -0x28;
    this = param_4 + -0x28;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (this,pbVar1);
    *(undefined4 *)(param_4 + -0xc) = *(undefined4 *)(param_3 + -0xc);
    *(undefined4 *)(param_4 + -8) = *(undefined4 *)(param_3 + -8);
    *(undefined4 *)(param_4 + -4) = *(undefined4 *)(param_3 + -4);
    param_3 = pbVar1;
    param_4 = this;
  } while (pbVar1 != param_2);
  *param_1 = (int)this;
  return;
}




/* Function: FUN_005007e0 */

void FUN_005007e0(int *param_1,
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
    pbVar1 = param_3 + -0x2c;
    this = param_4 + -0x2c;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (this,pbVar1);
    *(undefined4 *)(param_4 + -0x10) = *(undefined4 *)(param_3 + -0x10);
    *(undefined4 *)(param_4 + -0xc) = *(undefined4 *)(param_3 + -0xc);
    *(undefined4 *)(param_4 + -8) = *(undefined4 *)(param_3 + -8);
    *(undefined4 *)(param_4 + -4) = *(undefined4 *)(param_3 + -4);
    param_3 = pbVar1;
    param_4 = this;
  } while (pbVar1 != param_2);
  *param_1 = (int)this;
  return;
}




/* Function: FUN_00500840 */

void FUN_00500840(int *param_1,
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
    pbVar1 = param_3 + -0x74;
    this = param_4 + -0x74;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (this,pbVar1);
    *(undefined4 *)(param_4 + -0x58) = *(undefined4 *)(param_3 + -0x58);
    *(undefined4 *)(param_4 + -0x54) = *(undefined4 *)(param_3 + -0x54);
    *(undefined4 *)(param_4 + -0x50) = *(undefined4 *)(param_3 + -0x50);
    *(undefined4 *)(param_4 + -0x4c) = *(undefined4 *)(param_3 + -0x4c);
    *(undefined4 *)(param_4 + -0x48) = *(undefined4 *)(param_3 + -0x48);
    *(undefined4 *)(param_4 + -0x44) = *(undefined4 *)(param_3 + -0x44);
    FUN_0041d670(param_3 + -0x40);
    param_3 = pbVar1;
    param_4 = this;
  } while (pbVar1 != param_2);
  *param_1 = (int)this;
  return;
}




/* Function: FUN_005008b0 */

void FUN_005008b0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 != param_3) {
    puVar2 = (undefined4 *)(param_3 + 0x10);
    puVar3 = param_4 + 4;
    do {
      puVar1 = (undefined4 *)(param_3 + -0x14);
      param_3 = param_3 + -0x14;
      param_4 = param_4 + -5;
      *param_4 = *puVar1;
      puVar3[-8] = puVar2[-8];
      if (puVar2 + -7 != puVar3 + -7) {
        puVar3[-7] = puVar2[-7];
        puVar3[-6] = puVar2[-6];
        puVar3[-5] = puVar2[-5];
      }
      puVar2 = puVar2 + -5;
      puVar3 = puVar3 + -5;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return;
  }
  *param_1 = param_4;
  return;
}




/* Function: FUN_00500920 */

void __thiscall FUN_00500920(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  iVar1 = *(int *)(param_1 + 0x3c) + param_2 * 0x74;
  FUN_00407310(0x3f800000);
  if ((((*(int *)(iVar1 + 0x1c) != -1) && (*(int *)(iVar1 + 0x20) != -1)) &&
      (iVar2 = *(int *)(iVar1 + 0x28), iVar2 != -1)) && (*(int *)(iVar1 + 0x2c) != -1)) {
    iVar3 = *(int *)(param_1 + 0xc);
    FUN_0041d580(&local_24,iVar3 + 0x1c + *(int *)(iVar1 + 0x20) * 0x4c,
                 iVar3 + 0x1c + *(int *)(iVar1 + 0x1c) * 0x4c);
    FUN_0041d580(&local_30,iVar3 + 0x1c + iVar2 * 0x4c,iVar3 + 0x1c + *(int *)(iVar1 + 0x24) * 0x4c)
    ;
    FUN_0041d4b0();
    FUN_0041d4b0();
    FUN_0041d5e0(&local_18,&local_24,&local_30);
    FUN_0041d4b0();
    uVar4 = FUN_0041d5e0(local_c,&local_18,&local_24);
    FUN_0041d430(uVar4);
    FUN_0041d4b0();
    *(undefined4 *)(iVar1 + 0x34) = local_18;
    *(undefined4 *)(iVar1 + 0x38) = local_14;
    *(undefined4 *)(iVar1 + 0x3c) = local_10;
    *(undefined4 *)(iVar1 + 0x44) = local_24;
    *(undefined4 *)(iVar1 + 0x48) = local_20;
    *(undefined4 *)(iVar1 + 0x4c) = local_1c;
    *(undefined4 *)(iVar1 + 0x54) = local_30;
    *(undefined4 *)(iVar1 + 0x58) = local_2c;
    *(undefined4 *)(iVar1 + 0x5c) = local_28;
    FUN_00545c38(*(int *)(param_1 + 0xc) + 0x1c + *(int *)(iVar1 + 0x2c) * 0x4c);
  }
  return;
}




/* Function: FUN_00500a90 */

void __fastcall FUN_00500a90(int param_1)

{
  void *pvVar1;
  uint uVar2;
  
  operator_delete__(*(void **)(param_1 + 0x22c));
  pvVar1 = *(void **)(param_1 + 0x23c);
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0xc,*(int *)((int)pvVar1 + -4),FUN_00407150);
    operator_delete__((void *)((int)pvVar1 + -4));
  }
  pvVar1 = *(void **)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x23c) = 0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0xc,*(int *)((int)pvVar1 + -4),FUN_00407150);
    operator_delete__((void *)((int)pvVar1 + -4));
  }
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(int *)(param_1 + 0x248) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x244) != 0) {
      do {
        pvVar1 = *(void **)(*(int *)(param_1 + 0x248) + uVar2 * 4);
        if (pvVar1 != (void *)0x0) {
          operator_delete__(pvVar1);
          *(undefined4 *)(*(int *)(param_1 + 0x248) + uVar2 * 4) = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x244));
    }
    operator_delete__(*(void **)(param_1 + 0x248));
    *(undefined4 *)(param_1 + 0x248) = 0;
  }
  operator_delete__(*(void **)(param_1 + 0x24c));
  *(undefined4 *)(param_1 + 0x24c) = 0;
  operator_delete__(*(void **)(param_1 + 0x250));
  *(undefined4 *)(param_1 + 0x26c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x218) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x88) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  return;
}




/* Function: FUN_00500bd0 */

undefined1 __fastcall FUN_00500bd0(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  uint uStack_8;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 != '\0') {
    if (param_1[0x8a] != 0) {
      uVar2 = FUN_0043f890();
      iVar3 = FUN_0043f8b0();
      if (uVar2 != 0) {
        puVar4 = operator_new(uVar2 * 0xc + 4,(nothrow_t *)&DAT_005b6164);
        if (puVar4 == (uint *)0x0) {
          puVar10 = (uint *)0x0;
        }
        else {
          puVar10 = puVar4 + 1;
          *puVar4 = uVar2;
          _eh_vector_constructor_iterator_
                    (puVar10,0xc,uVar2,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
        }
        param_1[0x90] = (int)puVar10;
      }
      if (iVar3 != 0) {
        piVar5 = operator_new(iVar3 * 0xc + 4,(nothrow_t *)&DAT_005b6164);
        if (piVar5 == (int *)0x0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = piVar5 + 1;
          *piVar5 = iVar3;
          _eh_vector_constructor_iterator_
                    (piVar11,0xc,iVar3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
        }
        param_1[0x8f] = (int)piVar11;
      }
      param_1[0x8c] = uVar2;
      pvVar6 = operator_new(uVar2 << 4,(nothrow_t *)&DAT_005b6164);
      param_1[0x8b] = (int)pvVar6;
      iVar3 = FUN_0043f8a0();
      uVar9 = 0;
      if (3 < (int)uVar2) {
        uStack_8 = 3;
        iVar8 = 0;
        puVar7 = (undefined4 *)(iVar3 + 8);
        do {
          uVar9 = uVar9 + 4;
          *(undefined4 *)(iVar8 + param_1[0x8b]) = puVar7[-2];
          *(undefined4 *)(iVar8 + 4 + param_1[0x8b]) = puVar7[-1];
          *(undefined4 *)(iVar8 + 8 + param_1[0x8b]) = *puVar7;
          *(undefined4 *)(iVar8 + 0xc + param_1[0x8b]) = 0x3f800000;
          *(undefined4 *)(iVar8 + 0x10 + param_1[0x8b]) = puVar7[1];
          *(undefined4 *)(iVar8 + 0x14 + param_1[0x8b]) = puVar7[2];
          *(undefined4 *)(iVar8 + 0x18 + param_1[0x8b]) = puVar7[3];
          *(undefined4 *)(iVar8 + 0x1c + param_1[0x8b]) = 0x3f800000;
          *(undefined4 *)(param_1[0x8b] + 0x20 + iVar8) = puVar7[4];
          *(undefined4 *)(iVar8 + 0x24 + param_1[0x8b]) = puVar7[5];
          *(undefined4 *)(iVar8 + 0x28 + param_1[0x8b]) = puVar7[6];
          *(undefined4 *)(iVar8 + 0x2c + param_1[0x8b]) = 0x3f800000;
          *(undefined4 *)(iVar8 + 0x30 + param_1[0x8b]) = puVar7[7];
          *(undefined4 *)(iVar8 + 0x34 + param_1[0x8b]) = puVar7[8];
          *(undefined4 *)(iVar8 + 0x38 + param_1[0x8b]) = puVar7[9];
          *(undefined4 *)(iVar8 + 0x3c + param_1[0x8b]) = 0x3f800000;
          uStack_8 = uStack_8 + 4;
          iVar8 = iVar8 + 0x40;
          puVar7 = puVar7 + 0xc;
        } while (uStack_8 < uVar2);
      }
      if (uVar9 < uVar2) {
        iVar8 = uVar9 << 4;
        iVar12 = uVar2 - uVar9;
        puVar7 = (undefined4 *)(iVar3 + 8 + uVar9 * 0xc);
        do {
          *(undefined4 *)(iVar8 + param_1[0x8b]) = puVar7[-2];
          *(undefined4 *)(param_1[0x8b] + 4 + iVar8) = puVar7[-1];
          *(undefined4 *)(param_1[0x8b] + 8 + iVar8) = *puVar7;
          *(undefined4 *)(param_1[0x8b] + 0xc + iVar8) = 0x3f800000;
          iVar8 = iVar8 + 0x10;
          iVar12 = iVar12 + -1;
          puVar7 = puVar7 + 3;
        } while (iVar12 != 0);
      }
      iVar3 = FUN_0043f8f0();
      param_1[0x91] = iVar3;
      if (iVar3 != 0) {
        pvVar6 = operator_new(iVar3 << 2,(nothrow_t *)&DAT_005b6164);
        param_1[0x92] = (int)pvVar6;
        pvVar6 = operator_new(param_1[0x91] << 2,(nothrow_t *)&DAT_005b6164);
        param_1[0x93] = (int)pvVar6;
        pvVar6 = operator_new(param_1[0x91] << 2,(nothrow_t *)&DAT_005b6164);
        param_1[0x94] = (int)pvVar6;
        uVar2 = 0;
        if (param_1[0x91] != 0) {
          do {
            uVar2 = uVar2 + 1;
            *(undefined4 *)(param_1[0x92] + -4 + uVar2 * 4) = 0;
            *(undefined4 *)(param_1[0x93] + -4 + uVar2 * 4) = 0;
            *(undefined4 *)(param_1[0x94] + -4 + uVar2 * 4) = 0;
          } while (uVar2 < (uint)param_1[0x91]);
        }
      }
      param_1[0x95] = 0;
      iVar3 = FUN_0041cf70();
      if (iVar3 != 0) {
        iVar3 = FUN_00500570(param_1);
        if (iVar3 != 0) {
          FUN_0041cf70();
          iVar3 = FUN_00519230();
          param_1[0x9c] = iVar3;
        }
      }
      if ((param_1[0x8a] != 0) && ((char)param_1[0x9d] != '\0')) {
        FUN_0045ef60(param_1);
      }
      param_1[0x86] = -1;
    }
    return 1;
  }
  return 0;
}




/* Function: FUN_00500f30 */

void __fastcall FUN_00500f30(int param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 local_c0 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  if ((*(int *)(param_1 + 0x1ac) != 0) && (*(char *)(param_1 + 0x1a8) != '\0')) {
    FUN_00500f30();
    this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           (param_1 + 0x1c0);
    bVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (this);
    if (bVar1) {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x1ac) + 0x90))();
      uVar2 = FUN_0041d7a0(local_c0,param_1 + 0x100,uVar2);
      FUN_0041d670(uVar2);
      FUN_00407300();
      *(undefined1 *)(param_1 + 0x1a8) = 0;
      return;
    }
    iVar3 = FUN_004ffa90();
    FUN_004ffac0();
    if ((*(int *)(param_1 + 0x1dc) == -1) || (*(int *)(param_1 + 0x1e0) != iVar3)) {
      pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(this);
      iVar5 = FUN_00444820(iVar3,pcVar4);
      *(int *)(param_1 + 0x1dc) = iVar5;
      if (iVar5 == -1) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                  (this,"");
      }
      else {
        *(int *)(param_1 + 0x1e0) = iVar3;
      }
    }
    if (*(int *)(param_1 + 0x1dc) < 0) {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x1ac) + 0x90))(param_1 + 0x100);
      uVar2 = FUN_0041d7a0(auStack_80,uVar2);
      FUN_0041d670(uVar2);
    }
    else {
      FUN_00407f80(0x3f800000);
      puVar6 = local_c0;
      FUN_004ffaa0(puVar6);
      uVar2 = FUN_004cf110();
      FUN_004448b0(iVar3,*(undefined4 *)(param_1 + 0x1dc),uVar2,puVar6);
      uVar2 = (**(code **)(**(int **)(param_1 + 0x1ac) + 0x90))();
      uVar2 = FUN_0041d7a0(auStack_80,param_1 + 0x100,local_c0,uVar2);
      uVar2 = FUN_0041d7a0(auStack_40,uVar2);
      FUN_0041d670(uVar2);
      FUN_00407300();
      FUN_00407300();
    }
    FUN_00407300();
    *(undefined1 *)(param_1 + 0x1a8) = 0;
  }
  return;
}




/* Function: FUN_00501100 */

void __thiscall FUN_00501100(int param_1,uint param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057eae2;
  local_c = ExceptionList;
  if (0x2c8590bU - *(int *)(param_1 + 8) < param_2) {
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




/* Function: FUN_005011a0 */

void FUN_005011a0(int param_1,int param_2,undefined4 param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x4c) {
    FUN_00500600(param_3);
  }
  return;
}




/* Function: FUN_005011d0 */

undefined4 FUN_005011d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00500750(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00501210 */

undefined4 FUN_00501210(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00500790(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00501250 */

undefined4 FUN_00501250(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_005007e0(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00501290 */

void FUN_00501290(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *param_3)

{
  if (param_1 != param_2) {
    do {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                (param_1,param_3);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x20);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x28);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 0x30);
      FUN_0041d670(param_3 + 0x34);
      param_1 = param_1 + 0x74;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_005012f0 */

undefined4 FUN_005012f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00500840(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00501330 */

void FUN_00501330(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_1 + 4;
    do {
      *param_1 = *param_3;
      puVar1[-3] = param_3[1];
      if (param_3 + 2 != puVar1 + -2) {
        puVar1[-2] = param_3[2];
        puVar1[-1] = param_3[3];
        *puVar1 = param_3[4];
      }
      param_1 = param_1 + 5;
      puVar1 = puVar1 + 5;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_00501380 */

undefined4 FUN_00501380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_005008b0(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_005013c0 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_005013c0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057eb21;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    local_8 = 1;
    if (param_3 !=
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_3,param_1);
      *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    }
    param_3 = param_3 + 0x28;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}




/* Function: FUN_00501460 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_00501460(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057eb41;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    local_8 = 1;
    if (param_3 !=
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_3,param_1);
      *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    }
    param_3 = param_3 + 0x2c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}




/* Function: FUN_00501510 */

int __thiscall FUN_00501510(int param_1,char *param_2)

{
  char *_Str1;
  int iVar1;
  int iVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  char *_Str2;
  
  if (param_2 == (char *)0x0) {
    return -1;
  }
  this = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
          (param_1 + 0xc);
  iVar2 = 0;
  if (this != *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
               (param_1 + 0x10)) {
    do {
      _Str2 = param_2;
      _Str1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              c_str(this);
      iVar1 = _stricmp(_Str1,_Str2);
      if (iVar1 == 0) {
        return iVar2;
      }
      this = this + 0x4c;
      iVar2 = iVar2 + 1;
    } while (this != *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)(param_1 + 0x10));
  }
  return -1;
}




/* Function: FUN_00501570 */

int __thiscall FUN_00501570(int param_1,char *param_2)

{
  char *_Str1;
  int iVar1;
  int iVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  char *_Str2;
  
  iVar2 = 0;
  this = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
          (param_1 + 0x3c);
  if (this != *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
               (param_1 + 0x40)) {
    do {
      _Str2 = param_2;
      _Str1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              c_str(this);
      iVar1 = _stricmp(_Str1,_Str2);
      if (iVar1 == 0) {
        return iVar2;
      }
      this = this + 0x74;
      iVar2 = iVar2 + 1;
    } while (this != *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)(param_1 + 0x40));
  }
  return -1;
}




/* Function: FUN_005015c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005015c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined1 local_c [12];
  
  iVar1 = FUN_00501510(param_2);
  if (iVar1 != -1) {
    iVar2 = FUN_00501510(param_3);
    if (iVar2 != -1) {
      pfVar3 = (float *)FUN_0041d580(local_c,*(int *)(param_1 + 0xc) + 0x1c + iVar2 * 0x4c,
                                     *(int *)(param_1 + 0xc) + 0x1c + iVar1 * 0x4c);
      return SQRT((float10)pfVar3[2] * (float10)pfVar3[2] +
                  (float10)pfVar3[1] * (float10)pfVar3[1] + (float10)*pfVar3 * (float10)*pfVar3);
    }
  }
  return (float10)_DAT_00582ad8;
}




/* Function: FUN_00501650 */

void __thiscall FUN_00501650(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  pfVar5 = &local_c;
  iVar1 = 0;
  (**(code **)(*param_4 + 0x90))(pfVar5);
  FUN_00547ab0(pfVar5);
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 != *(int *)(param_1 + 0x40)) {
    do {
      FUN_00500920(iVar1);
      iVar2 = iVar2 + 0x74;
      iVar1 = iVar1 + 1;
    } while (iVar2 != *(int *)(param_1 + 0x40));
  }
  piVar3 = *(int **)(param_1 + 0x4c);
  if (piVar3 != *(int **)(param_1 + 0x50)) {
    do {
      FUN_005488cc(&fStack_18,piVar3 + 2,*(int *)(param_1 + 0x3c) + 0x34 + piVar3[1] * 0x74);
      fStack_18 = fStack_18 - local_c;
      piVar4 = piVar3 + 5;
      fStack_14 = fStack_14 - fStack_8;
      fStack_10 = fStack_10 - fStack_4;
      *(float *)(*piVar3 * 0x10 + param_2) = fStack_18;
      *(float *)(*piVar3 * 0x10 + 4 + param_2) = fStack_14;
      *(float *)(*piVar3 * 0x10 + 8 + param_2) = fStack_10;
      piVar3 = piVar4;
    } while (piVar4 != *(int **)(param_1 + 0x50));
  }
  return;
}




/* Function: FUN_00501720 */

void __thiscall FUN_00501720(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00501510(param_2);
  if (iVar1 != -1) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x40 + iVar1 * 0x4c) = param_3;
  }
  return;
}




/* Function: FUN_00501750 */

void __thiscall FUN_00501750(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00501510(param_2);
  if (iVar1 != -1) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x48 + iVar1 * 0x4c) = param_3;
  }
  return;
}




/* Function: FUN_00501780 */

void __thiscall FUN_00501780(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_c [3];
  
  iVar3 = FUN_00501510(param_2);
  if (iVar3 != -1) {
    iVar3 = iVar3 * 0x4c;
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x28 + iVar3);
    if (param_3 != puVar1) {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1[2] = param_3[2];
    }
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c + iVar3);
    if (puVar1 != puVar2) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
    }
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x34 + iVar3);
    if (local_c != puVar1) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
  }
  return;
}




/* Function: FUN_00501800 */

void __thiscall FUN_00501800(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_00501510(param_2);
  if (iVar2 != -1) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c + iVar2 * 0x4c);
    if (puVar1 != param_3) {
      *param_3 = *puVar1;
      param_3[1] = puVar1[1];
      param_3[2] = puVar1[2];
    }
  }
  return;
}




/* Function: FUN_00501840 */

void __thiscall FUN_00501840(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_00501510(param_2);
  if (iVar2 != -1) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x34 + iVar2 * 0x4c);
    if (param_3 != puVar1) {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1[2] = param_3[2];
    }
  }
  return;
}




/* Function: FUN_00501880 */

void __fastcall FUN_00501880(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_c [12];
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 != *(int *)(param_1 + 0x10)) {
    puVar2 = (undefined4 *)(iVar3 + 0x34);
    do {
      puVar1 = (undefined4 *)FUN_0041d5b0(local_c,puVar2,0x3f000000);
      if (puVar1 != puVar2) {
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
      }
      iVar3 = iVar3 + 0x4c;
      puVar2 = puVar2 + 0x13;
    } while (iVar3 != *(int *)(param_1 + 0x10));
  }
  return;
}




/* Function: FUN_005018d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005018d0(int param_1,float param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float local_48;
  float local_44;
  float local_40;
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 != *(int *)(param_1 + 0x10)) {
    pfVar5 = (float *)(iVar4 + 0x24);
    do {
      local_48 = pfVar5[-2];
      pfVar1 = pfVar5 + -2;
      local_44 = pfVar5[-1];
      local_40 = *pfVar5;
      if (pfVar5[7] != _DAT_00582ad8) {
        uVar2 = FUN_0041d550(local_3c,pfVar5 + 4,param_1 + 0x68,param_2 * param_2,
                             _DAT_00583354 / pfVar5[7]);
        uVar2 = FUN_0041d5b0(local_30,uVar2);
        uVar2 = FUN_0041d5b0(local_24,uVar2);
        uVar2 = FUN_0041d580(local_18,pfVar1,pfVar5 + 1,uVar2);
        pfVar3 = (float *)FUN_0041d550(local_c,uVar2);
        *pfVar1 = *pfVar3 + *pfVar1;
        pfVar5[-1] = pfVar3[1] + pfVar5[-1];
        *pfVar5 = pfVar3[2] + *pfVar5;
      }
      if (&local_48 != pfVar5 + 1) {
        pfVar5[1] = local_48;
        pfVar5[2] = local_44;
        pfVar5[3] = local_40;
      }
      iVar4 = iVar4 + 0x4c;
      pfVar5 = pfVar5 + 0x13;
    } while (iVar4 != *(int *)(param_1 + 0x10));
  }
  return;
}




/* Function: FUN_005019e0 */

void FUN_005019e0(void)

{
  return;
}




/* Function: FUN_00501a10 */

void __fastcall FUN_00501a10(int param_1)

{
  int *piVar1;
  
  FUN_00500f30();
  piVar1 = *(int **)(param_1 + 0x1b4);
  if (piVar1 != *(int **)(param_1 + 0x1b8)) {
    do {
      *(undefined1 *)(*piVar1 + 0x1a8) = 1;
      FUN_00501a10();
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x1b8));
  }
  return;
}




/* Function: FUN_00501a80 */

void __thiscall FUN_00501a80(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x214);
  *(undefined4 *)(param_1 + 0x214) = param_2;
  if ((*(int *)(param_1 + 0x1b4) != 0) &&
     (*(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b4) >> 2 != 0)) {
    *(undefined1 *)(param_1 + 0x1a8) = 1;
    FUN_00501a10();
  }
  return;
}




/* Function: FUN_00501ac0 */

void FUN_00501ac0(void)

{
  int iVar1;
  
  iVar1 = FUN_00493c27(100);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}




/* Function: FUN_00501ae0 */

undefined4 *
FUN_00501ae0(undefined4 param_1,undefined4 param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057eb71;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00493c27(100);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (puVar1 + 2),param_3);
    FUN_00407260(param_3 + 0x1c);
  }
  ExceptionList = local_10;
  return puVar1;
}




/* Function: FUN_00501b80 */

void FUN_00501b80(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,int param_2,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057eb91;
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
    }
    param_1 = param_1 + 0x28;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}




/* Function: FUN_00501c20 */

void FUN_00501c20(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,int param_2,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057ebb1;
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
    }
    param_1 = param_1 + 0x2c;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}




/* Function: FUN_00501cd0 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_00501cd0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057ebd1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x4c) {
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
      *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_3 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    }
    param_3 = param_3 + 0x4c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}




/* Function: FUN_00501db0 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_00501db0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057ebfa;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x74) {
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
      FUN_00407260(param_1 + 0x34);
    }
    param_3 = param_3 + 0x74;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}




/* Function: FUN_00501e90 */

void FUN_00501e90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = param_3 + 4;
    puVar2 = param_1 + 4;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *param_1;
        puVar1[-3] = puVar2[-3];
        puVar1[-2] = puVar2[-2];
        puVar1[-1] = puVar2[-1];
        *puVar1 = *puVar2;
      }
      param_1 = param_1 + 5;
      param_3 = param_3 + 5;
      puVar1 = puVar1 + 5;
      puVar2 = puVar2 + 5;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_00501ee0 */

void __thiscall FUN_00501ee0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_140 [64];
  undefined1 local_100 [128];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  uVar1 = FUN_005463f0(local_40,param_2);
  uVar2 = FUN_005485e8(param_4);
  uVar1 = FUN_00545edc(local_140,param_3,uVar2,uVar1);
  uVar1 = FUN_0041d7a0(local_80,uVar1);
  uVar1 = FUN_0041d7a0(local_100,uVar1);
  FUN_0041d670(uVar1);
  FUN_00407300();
  FUN_00407300();
  FUN_00407300();
  FUN_00407300();
  FUN_00407300();
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  FUN_00501a10();
  return;
}




/* Function: FUN_00501fb0 */

void __thiscall
FUN_00501fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_005013c0(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00501fe0 */

void __thiscall
FUN_00501fe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00501460(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00502010 */

void FUN_00502010(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,int param_2,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057ec21;
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
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_3 + 0x40);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_3 + 0x44);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_3 + 0x48);
    }
    param_1 = param_1 + 0x4c;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}




/* Function: FUN_005020f0 */

void FUN_005020f0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,int param_2,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057ec4a;
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
      FUN_00407260(param_3 + 0x34);
    }
    param_1 = param_1 + 0x74;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}




/* Function: FUN_005021d0 */

void FUN_005021d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = param_1 + 4;
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        puVar1[-3] = param_3[1];
        puVar1[-2] = param_3[2];
        puVar1[-1] = param_3[3];
        *puVar1 = param_3[4];
      }
      param_1 = param_1 + 5;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}




/* Function: FUN_00502210 */

int __thiscall FUN_00502210(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00501b80(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0x28;
}




/* Function: FUN_00502240 */

int __thiscall FUN_00502240(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00501c20(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0x2c;
}




/* Function: FUN_00502270 */

void FUN_00502270(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
  }
  return;
}




/* Function: FUN_005022a0 */

void __thiscall
FUN_005022a0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined4 uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  int iVar5;
  int iVar6;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_5c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_58;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [28];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pbVar4 = param_4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057ec68;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_58 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             0x5022d3;
  ExceptionList = &local_10;
  local_18 = param_1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44,param_4);
  pbVar2 = param_3;
  pbVar1 = param_2;
  local_28 = *(undefined4 *)(pbVar4 + 0x1c);
  local_24 = *(undefined4 *)(pbVar4 + 0x20);
  local_20 = *(undefined4 *)(pbVar4 + 0x24);
  iVar6 = *(int *)(param_1 + 4);
  pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  local_8 = 0;
  if (iVar6 != 0) {
    pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((*(int *)(param_1 + 0xc) - iVar6) / 0x28);
  }
  if (param_3 != (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0
     ) {
    if (iVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 8) - iVar6) / 0x28;
    }
    if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
        (0x6666666U - iVar5) < param_3) {
      FUN_00500490();
    }
    else {
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*(int *)(param_1 + 8) - iVar6) / 0x28;
      }
      if (pbVar4 < param_3 + iVar5) {
        if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            (0x6666666 - ((uint)pbVar4 >> 1)) < pbVar4) {
          pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x0;
        }
        else {
          pbVar4 = pbVar4 + ((uint)pbVar4 >> 1);
        }
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (*(int *)(param_1 + 8) - iVar6) / 0x28;
        }
        if (pbVar4 < param_3 + iVar6) {
          iVar6 = FUN_00480400();
          pbVar4 = pbVar2 + iVar6;
        }
        local_58 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x5023c1;
        param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        param_4 = param_3;
        local_5c = param_3;
        local_58 = param_1;
        param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_005013c0(*(undefined4 *)(param_1 + 4),param_2);
        local_5c = local_44;
        local_58 = param_1;
        FUN_00501b80(param_3,pbVar2);
        param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  ((int)param_3 + (int)pbVar2 * 0x28);
        local_5c = param_3;
        local_58 = param_1;
        FUN_005013c0(param_2,*(undefined4 *)(param_1 + 8));
        iVar6 = *(int *)(param_1 + 4);
        iVar5 = 0;
        local_8 = 0;
        if (iVar6 != 0) {
          iVar5 = (*(int *)(param_1 + 8) - iVar6) / 0x28;
        }
        if (iVar6 != 0) {
          local_5c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )0x502460;
          local_58 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )iVar6;
          FUN_00502270();
                    /* WARNING: Subroutine does not return */
          local_58 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&UNK_00502469;
          operator_delete(*(void **)(param_1 + 4));
        }
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 4) = param_4;
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 0xc) = param_4 + (int)pbVar4 * 0x28;
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 8) = param_4 + (int)(pbVar2 + iVar5) * 0x28;
      }
      else {
        param_4 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   (param_1 + 8);
        local_58 = param_4;
        if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            (((int)param_4 - (int)param_2) / 0x28) < param_3) {
          local_1c = (undefined1 *)&local_5c;
          local_5c = param_2;
          param_4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    ((int)param_3 * 0x28);
          FUN_00501fb0();
          local_5c = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)(param_1 + 8);
          local_8 = CONCAT31(local_8._1_3_,3);
          local_58 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )((int)pbVar2 - ((int)local_5c - (int)pbVar1) / 0x28);
          FUN_00502210();
          iVar6 = *(int *)(param_1 + 8);
          local_8 = 0;
          *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           (param_1 + 8) = param_4 + iVar6;
          local_58 = param_4 + iVar6 + -(int)param_4;
        }
        else {
          iVar6 = (int)param_3 * 0x28;
          param_2 = param_4 + (int)param_3 * -0x28;
          local_5c = param_2;
          uVar3 = FUN_00501fb0();
          *(undefined4 *)(param_1 + 8) = uVar3;
          param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    &local_58;
          local_58 = param_2;
          local_5c = pbVar1;
          param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    &local_5c;
          FUN_00501210(&param_2);
          local_58 = pbVar1 + iVar6;
        }
        param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  &local_5c;
        local_5c = pbVar1;
        FUN_00500580();
      }
    }
  }
  local_8 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00502600 */

void FUN_00502600(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
  }
  return;
}




/* Function: FUN_00502630 */

void __thiscall
FUN_00502630(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined4 uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  int iVar5;
  int iVar6;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_60;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_5c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_48 [28];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pbVar4 = param_4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057ec88;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  local_5c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             0x502663;
  ExceptionList = &local_10;
  local_18 = param_1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_48,param_4);
  pbVar2 = param_3;
  pbVar1 = param_2;
  local_2c = *(undefined4 *)(pbVar4 + 0x1c);
  local_28 = *(undefined4 *)(pbVar4 + 0x20);
  local_24 = *(undefined4 *)(pbVar4 + 0x24);
  local_20 = *(undefined4 *)(pbVar4 + 0x28);
  iVar6 = *(int *)(param_1 + 4);
  pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  local_8 = 0;
  if (iVar6 != 0) {
    pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((*(int *)(param_1 + 0xc) - iVar6) / 0x2c);
  }
  if (param_3 != (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0
     ) {
    if (iVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 8) - iVar6) / 0x2c;
    }
    if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
        (0x5d1745dU - iVar5) < param_3) {
      FUN_00500490();
    }
    else {
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*(int *)(param_1 + 8) - iVar6) / 0x2c;
      }
      if (pbVar4 < param_3 + iVar5) {
        if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            (0x5d1745d - ((uint)pbVar4 >> 1)) < pbVar4) {
          pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x0;
        }
        else {
          pbVar4 = pbVar4 + ((uint)pbVar4 >> 1);
        }
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (*(int *)(param_1 + 8) - iVar6) / 0x2c;
        }
        if (pbVar4 < param_3 + iVar6) {
          iVar6 = FUN_004ffbc0();
          pbVar4 = pbVar2 + iVar6;
        }
        local_5c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x50275a;
        param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        param_4 = param_3;
        local_60 = param_3;
        local_5c = param_1;
        param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_00501460(*(undefined4 *)(param_1 + 4),param_2);
        local_60 = local_48;
        local_5c = param_1;
        FUN_00501c20(param_3,pbVar2);
        param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  ((int)param_3 + (int)pbVar2 * 0x2c);
        local_60 = param_3;
        local_5c = param_1;
        FUN_00501460(param_2,*(undefined4 *)(param_1 + 8));
        iVar6 = *(int *)(param_1 + 4);
        iVar5 = 0;
        local_8 = 0;
        if (iVar6 != 0) {
          iVar5 = (*(int *)(param_1 + 8) - iVar6) / 0x2c;
        }
        if (iVar6 != 0) {
          local_60 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )0x5027fc;
          local_5c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )iVar6;
          FUN_00502600();
                    /* WARNING: Subroutine does not return */
          local_5c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&UNK_00502805;
          operator_delete(*(void **)(param_1 + 4));
        }
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 4) = param_4;
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 0xc) = param_4 + (int)pbVar4 * 0x2c;
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 8) = param_4 + (int)(pbVar2 + iVar5) * 0x2c;
      }
      else {
        param_4 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   (param_1 + 8);
        local_5c = param_4;
        if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            (((int)param_4 - (int)param_2) / 0x2c) < param_3) {
          local_1c = (undefined1 *)&local_60;
          local_60 = param_2;
          param_4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    ((int)param_3 * 0x2c);
          FUN_00501fe0();
          local_60 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)(param_1 + 8);
          local_8 = CONCAT31(local_8._1_3_,3);
          local_5c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )((int)pbVar2 - ((int)local_60 - (int)pbVar1) / 0x2c);
          FUN_00502240();
          iVar6 = *(int *)(param_1 + 8);
          local_8 = 0;
          *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           (param_1 + 8) = param_4 + iVar6;
          local_5c = param_4 + iVar6 + -(int)param_4;
        }
        else {
          iVar6 = (int)param_3 * 0x2c;
          param_2 = param_4 + (int)param_3 * -0x2c;
          local_60 = param_2;
          uVar3 = FUN_00501fe0();
          *(undefined4 *)(param_1 + 8) = uVar3;
          param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    &local_5c;
          local_5c = param_2;
          local_60 = pbVar1;
          param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    &local_60;
          FUN_00501250(&param_2);
          local_5c = pbVar1 + iVar6;
        }
        param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  &local_60;
        local_60 = pbVar1;
        FUN_005005c0();
      }
    }
  }
  local_8 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_48);
  ExceptionList = local_10;
  return;
}




/* Function: FUN_005029a0 */

void __thiscall
FUN_005029a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00501cd0(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_005029d0 */

void __thiscall
FUN_005029d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00501db0(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00502a00 */

void __thiscall
FUN_00502a00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00501e90(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00502a30 */

void __thiscall FUN_00502a30(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x1b4);
  if (piVar3 != *(int **)(param_1 + 0x1b8)) {
    while (*piVar3 != param_2) {
      piVar3 = piVar3 + 1;
      if (piVar3 == *(int **)(param_1 + 0x1b8)) {
        return;
      }
    }
    piVar1 = *(int **)(param_1 + 0x1b8);
    piVar2 = piVar3 + 1;
    if (piVar2 != piVar1) {
      iVar4 = (int)piVar3 - (int)piVar2;
      do {
        *(int *)(iVar4 + (int)piVar2) = *piVar2;
        piVar2 = piVar2 + 1;
      } while (piVar2 != piVar1);
    }
    *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + -4;
  }
  return;
}




/* Function: FUN_00502a80 */

int __thiscall FUN_00502a80(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00502010(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0x4c;
}




/* Function: FUN_00502ab0 */

void __thiscall FUN_00502ab0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x28 != 0) {
      iVar1 = (param_3 - iVar1) / 0x28;
      goto LAB_00502af7;
    }
  }
  iVar1 = 0;
LAB_00502af7:
  FUN_005022a0(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x28;
  return;
}




/* Function: FUN_00502b20 */

void __fastcall FUN_00502b20(int param_1)

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
  for (; this != pbVar1; this = this + 0x28) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00502b70 */

void __thiscall FUN_00502b70(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x2c != 0) {
      iVar1 = (param_3 - iVar1) / 0x2c;
      goto LAB_00502bb7;
    }
  }
  iVar1 = 0;
LAB_00502bb7:
  FUN_00502630(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x2c;
  return;
}




/* Function: FUN_00502bf0 */

void __fastcall FUN_00502bf0(int param_1)

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
  for (; this != pbVar1; this = this + 0x2c) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00502c40 */

int __thiscall FUN_00502c40(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_005020f0(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0x74;
}




/* Function: FUN_00502c80 */

int __thiscall FUN_00502c80(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_005021d0(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0x14;
}




/* Function: FUN_00502cb0 */

void FUN_00502cb0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x4c) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
  }
  return;
}




/* Function: FUN_00502ce0 */

void __thiscall
FUN_00502ce0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined4 uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  int iVar5;
  int iVar6;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_80;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_7c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_68 [76];
  undefined1 *local_1c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057eca8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  local_7c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             0x502d12;
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_00500510();
  pbVar2 = param_3;
  pbVar1 = param_2;
  iVar6 = *(int *)(param_1 + 4);
  pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  local_8 = 0;
  if (iVar6 != 0) {
    pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((*(int *)(param_1 + 0xc) - iVar6) / 0x4c);
  }
  if (param_3 != (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0
     ) {
    if (iVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 8) - iVar6) / 0x4c;
    }
    if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
        (0x35e50d7U - iVar5) < param_3) {
      FUN_00500490();
    }
    else {
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*(int *)(param_1 + 8) - iVar6) / 0x4c;
      }
      if (pbVar4 < param_3 + iVar5) {
        if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            (0x35e50d7 - ((uint)pbVar4 >> 1)) < pbVar4) {
          pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x0;
        }
        else {
          pbVar4 = pbVar4 + ((uint)pbVar4 >> 1);
        }
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (*(int *)(param_1 + 8) - iVar6) / 0x4c;
        }
        if (pbVar4 < param_3 + iVar6) {
          iVar6 = FUN_0044aba0();
          pbVar4 = pbVar2 + iVar6;
        }
        local_7c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x502df1;
        param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        param_4 = param_3;
        local_80 = param_3;
        local_7c = param_1;
        param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_00501cd0(*(undefined4 *)(param_1 + 4),param_2);
        local_80 = local_68;
        local_7c = param_1;
        FUN_00502010(param_3,pbVar2);
        param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  ((int)param_3 + (int)pbVar2 * 0x4c);
        local_80 = param_3;
        local_7c = param_1;
        FUN_00501cd0(param_2,*(undefined4 *)(param_1 + 8));
        iVar6 = *(int *)(param_1 + 4);
        iVar5 = 0;
        local_8 = 0;
        if (iVar6 != 0) {
          iVar5 = (*(int *)(param_1 + 8) - iVar6) / 0x4c;
        }
        if (iVar6 != 0) {
          local_80 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )0x502e93;
          local_7c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )iVar6;
          FUN_00502cb0();
                    /* WARNING: Subroutine does not return */
          local_7c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&UNK_00502e9c;
          operator_delete(*(void **)(param_1 + 4));
        }
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 4) = param_4;
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 0xc) = param_4 + (int)pbVar4 * 0x4c;
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 8) = param_4 + (int)(pbVar2 + iVar5) * 0x4c;
      }
      else {
        param_4 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   (param_1 + 8);
        local_7c = param_4;
        if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            (((int)param_4 - (int)param_2) / 0x4c) < param_3) {
          local_1c = (undefined1 *)&local_80;
          local_80 = param_2;
          param_4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    ((int)param_3 * 0x4c);
          FUN_005029a0();
          local_80 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)(param_1 + 8);
          local_8 = CONCAT31(local_8._1_3_,3);
          local_7c = pbVar2 + -(((int)local_80 - (int)pbVar1) / 0x4c);
          FUN_00502a80();
          iVar6 = *(int *)(param_1 + 8);
          local_8 = 0;
          *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           (param_1 + 8) = param_4 + iVar6;
          local_7c = param_4 + iVar6 + -(int)param_4;
        }
        else {
          iVar6 = (int)param_3 * 0x4c;
          param_2 = param_4 + (int)param_3 * -0x4c;
          local_80 = param_2;
          uVar3 = FUN_005029a0();
          *(undefined4 *)(param_1 + 8) = uVar3;
          param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    &local_7c;
          local_7c = param_2;
          local_80 = pbVar1;
          param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    &local_80;
          FUN_005011d0(&param_2);
          local_7c = pbVar1 + iVar6;
        }
        param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  &local_80;
        local_80 = pbVar1;
        FUN_005011a0();
      }
    }
  }
  local_8 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_68);
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00503040 */

void FUN_00503040(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x74) {
    FUN_004ffc20();
  }
  return;
}




/* Function: FUN_00503070 */

void __thiscall
FUN_00503070(int param_1,undefined1 *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  undefined1 *puVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_90 [28];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [64];
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pbVar2 = param_4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057ecd7;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff64;
  ExceptionList = &local_10;
  local_18 = param_1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_90,param_4);
  local_74 = *(undefined4 *)(pbVar2 + 0x1c);
  local_70 = *(undefined4 *)(pbVar2 + 0x20);
  local_6c = *(undefined4 *)(pbVar2 + 0x24);
  local_68 = *(undefined4 *)(pbVar2 + 0x28);
  local_64 = *(undefined4 *)(pbVar2 + 0x2c);
  local_60 = *(undefined4 *)(pbVar2 + 0x30);
  FUN_00407260();
  puVar1 = param_3;
  iVar5 = *(int *)(param_1 + 4);
  puVar4 = (undefined1 *)0x0;
  local_8 = 0;
  if (iVar5 != 0) {
    puVar4 = (undefined1 *)((*(int *)(param_1 + 0xc) - iVar5) / 0x74);
  }
  if (param_3 != (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0
     ) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x74;
    }
    if ((undefined1 *)(0x234f72cU - iVar5) < param_3) {
      FUN_00500490();
    }
    else {
      if (*(int *)(param_1 + 4) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x74;
      }
      if (puVar4 < param_3 + iVar5) {
        if ((undefined1 *)(0x234f72c - ((uint)puVar4 >> 1)) < puVar4) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          puVar4 = puVar4 + ((uint)puVar4 >> 1);
        }
        if (*(int *)(param_1 + 4) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x74;
        }
        if (puVar4 < param_3 + iVar5) {
          iVar5 = FUN_004ffbf0();
          puVar4 = puVar1 + iVar5;
        }
        param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        param_4 = param_3;
        param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_00501db0(*(undefined4 *)(param_1 + 4),param_2);
        param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_00502c40();
        FUN_00501db0(param_2,*(undefined4 *)(param_1 + 8));
        iVar5 = 0;
        local_8 = 0;
        if (*(int *)(param_1 + 4) != 0) {
          iVar5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x74;
        }
        if (*(int *)(param_1 + 4) != 0) {
          FUN_00503040();
                    /* WARNING: Subroutine does not return */
          operator_delete(*(void **)(param_1 + 4));
        }
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 0xc) = param_4 + (int)puVar4 * 0x74;
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 4) = param_4;
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 8) = param_4 + (int)(puVar1 + iVar5) * 0x74;
      }
      else {
        local_1c = *(undefined1 **)(param_1 + 8);
        param_4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  (local_1c + -(int)param_2);
        if ((undefined1 *)((int)param_4 / 0x74) < param_3) {
          param_4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    ((int)param_3 * 0x74);
          local_1c = &stack0xffffff58;
          FUN_005029d0();
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_00502c40();
          local_8 = 0;
          *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           (param_1 + 8) = param_4 + *(int *)(param_1 + 8);
        }
        else {
          param_2 = local_1c + (int)param_3 * -0x74;
          uVar3 = FUN_005029d0();
          *(undefined4 *)(param_1 + 8) = uVar3;
          param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    &stack0xffffff5c;
          param_2 = &stack0xffffff58;
          FUN_005012f0(&param_2);
        }
        param_2 = &stack0xffffff58;
        FUN_00501290();
      }
    }
  }
  local_8 = 5;
  _eh_vector_destructor_iterator_(local_5c,0x10,4,FUN_00407150);
  local_8 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_90);
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00503450 */

void __thiscall
FUN_00503450(undefined4 *param_1,undefined4 **param_2,undefined1 *param_3,undefined4 **param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *local_40;
  undefined4 *local_3c;
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
  puStack_c = &LAB_0057ecf0;
  local_10 = ExceptionList;
  local_28 = *param_4;
  local_24 = param_4[1];
  local_20 = param_4[2];
  local_1c = param_4[3];
  local_18 = param_4[4];
  iVar5 = param_1[1];
  local_14 = &stack0xffffffcc;
  if (iVar5 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = (undefined1 *)((param_1[3] - iVar5) / 0x14);
  }
  if (param_3 != (undefined1 *)0x0) {
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (param_1[2] - iVar5) / 0x14;
    }
    if ((undefined1 *)(0xcccccccU - iVar4) < param_3) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffcc;
      FUN_00500490();
      ExceptionList = local_10;
      return;
    }
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (param_1[2] - iVar5) / 0x14;
    }
    if (puVar6 < param_3 + iVar4) {
      if ((undefined1 *)(0xccccccc - ((uint)puVar6 >> 1)) < puVar6) {
        puVar6 = (undefined1 *)0x0;
      }
      else {
        puVar6 = puVar6 + ((uint)puVar6 >> 1);
      }
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (param_1[2] - iVar5) / 0x14;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xffffffcc;
      if (puVar6 < param_3 + iVar5) {
        ExceptionList = &local_10;
        local_14 = &stack0xffffffcc;
        iVar5 = FUN_005373d0();
        puVar6 = puVar2 + iVar5;
      }
      local_3c = (undefined4 *)0x50357c;
      param_4 = (undefined4 **)FUN_00493c27();
      local_8 = 0;
      local_40 = param_4;
      local_3c = param_1;
      param_3 = (undefined1 *)FUN_00501e90(param_1[1],param_2);
      local_40 = &local_28;
      local_3c = param_1;
      FUN_005021d0(param_3,puVar2);
      local_40 = (undefined4 *)((int)param_3 + (int)puVar2 * 0x14);
      local_3c = param_1;
      FUN_00501e90(param_2,param_1[2]);
      if (param_1[1] == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(param_1[2] - param_1[1]) / 0x14;
      }
      iVar4 = param_1[1];
      if (iVar4 == 0) {
        param_1[1] = param_4;
        param_1[3] = param_4 + (int)puVar6 * 5;
        param_1[2] = param_4 + (int)(puVar2 + iVar5) * 5;
        ExceptionList = local_10;
        return;
      }
      for (; iVar4 != param_1[2]; iVar4 = iVar4 + 0x14) {
      }
                    /* WARNING: Subroutine does not return */
      local_3c = (undefined4 *)&UNK_00503625;
      operator_delete((void *)param_1[1]);
    }
    param_4 = (undefined4 **)param_1[2];
    local_3c = param_4;
    if ((undefined1 *)(((int)param_4 - (int)param_2) / 0x14) < param_3) {
      local_40 = param_2;
      ExceptionList = &local_10;
      param_2 = (undefined4 **)((int)param_3 * 0x14);
      param_4 = &local_40;
      local_14 = &stack0xffffffcc;
      FUN_00502a00();
      local_40 = (undefined4 *)param_1[2];
      local_8 = 2;
      local_3c = (undefined4 *)(puVar2 + -(((int)local_40 - (int)puVar1) / 0x14));
      FUN_00502c80();
      iVar5 = param_1[2];
      param_1[2] = iVar5 + (int)param_2;
      local_3c = (undefined4 *)((iVar5 + (int)param_2) - (int)param_2);
    }
    else {
      param_2 = param_4 + (int)param_3 * -5;
      ExceptionList = &local_10;
      local_40 = param_2;
      uVar3 = FUN_00502a00();
      param_3 = &stack0xffffffc8;
      param_1[2] = uVar3;
      param_4 = &local_3c;
      local_3c = param_2;
      local_40 = puVar1;
      param_2 = &local_40;
      FUN_00501380(&param_2);
      local_3c = puVar1 + (int)puVar2 * 5;
    }
    param_2 = &local_40;
    local_40 = puVar1;
    FUN_00501330();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00503780 */

void __thiscall FUN_00503780(int param_1,undefined4 *param_2,int *param_3,int *param_4)

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
  FUN_00500680();
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar1);
}




/* Function: FUN_005037e0 */

void __thiscall FUN_005037e0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0057ed00;
  local_10 = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004520c0(iVar1,param_2,param_3,param_1,param_3);
  *(int *)(param_1 + 8) = iVar1 + param_2 * 4;
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00503860 */

void __thiscall FUN_00503860(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057ed10;
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
      FUN_00500490();
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




/* Function: FUN_00503b10 */

void __thiscall FUN_00503b10(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x28) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x28))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00501b80(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x28;
    return;
  }
  FUN_00502ab0(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_00503bb0 */

void __thiscall FUN_00503bb0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x2c) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x2c))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00501c20(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x2c;
    return;
  }
  FUN_00502b70(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_00503c40 */

void __thiscall FUN_00503c40(int param_1,uint param_2)

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
    uVar4 = *(int *)(param_1 + 8) - iVar1 >> 5;
  }
  if (uVar4 < param_2) {
    FUN_00464bd0();
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(param_1 + 8), param_2 < (uint)(iVar2 - iVar1 >> 5))) &&
     (param_2 * 0x20 + iVar1 != iVar2)) {
    uVar3 = FUN_005006e0(iVar2);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  return;
}




/* Function: FUN_00503cd0 */

void __thiscall FUN_00503cd0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x4c != 0) {
      iVar1 = (param_3 - iVar1) / 0x4c;
      goto LAB_00503d17;
    }
  }
  iVar1 = 0;
LAB_00503d17:
  FUN_00502ce0(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x4c;
  return;
}




/* Function: FUN_00503d50 */

void __fastcall FUN_00503d50(int param_1)

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
  for (; this != pbVar1; this = this + 0x4c) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00503da0 */

void __thiscall FUN_00503da0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x74 != 0) {
      iVar1 = (param_3 - iVar1) / 0x74;
      goto LAB_00503deb;
    }
  }
  iVar1 = 0;
LAB_00503deb:
  FUN_00503070(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x74;
  return;
}




/* Function: FUN_00503e20 */

void __fastcall FUN_00503e20(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x74) {
    FUN_004ffc20();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00503e70 */

void __thiscall FUN_00503e70(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x14 != 0) {
      iVar1 = (param_3 - iVar1) / 0x14;
      goto LAB_00503eb7;
    }
  }
  iVar1 = 0;
LAB_00503eb7:
  FUN_00503450(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x14;
  return;
}




/* Function: FUN_00503ee0 */

void __thiscall FUN_00503ee0(int param_1,uint param_2)

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
    FUN_00503860(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 2))) {
    FUN_00409930(&param_2,*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_00503f60 */

void FUN_00503f60(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_34 [28];
  int local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ed28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_34,param_1);
  local_18 = FUN_00501510(param_2);
  local_14 = FUN_00501510(param_3);
  local_10 = param_4;
  if ((local_18 != -1) && (local_14 != -1)) {
    FUN_00503b10(local_34);
  }
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00504010 */

void FUN_00504010(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [28];
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ed48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_38,param_1);
  local_1c = FUN_00501510(param_2);
  local_18 = FUN_00501510(param_3);
  local_14 = param_4;
  local_10 = param_5;
  if ((local_1c != -1) && (local_18 != -1)) {
    FUN_00503bb0(local_38);
  }
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_005040c0 */

void FUN_005040c0(void)

{
  FUN_004225c0(&stack0x00000004);
  return;
}




/* Function: FUN_005040d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005040d0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  float10 extraout_ST0;
  float10 fVar16;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar6 = (**(code **)(*param_1 + 0x88))();
  iVar7 = FUN_004ffac0(uVar6);
  piVar8 = (int *)FUN_005488cc(auStack_30,iVar7 + 0x224);
  piVar1 = param_1 + 0x96;
  if (piVar8 != piVar1) {
    *piVar1 = *piVar8;
    param_1[0x97] = piVar8[1];
    param_1[0x98] = piVar8[2];
  }
  FUN_00547a54(auStack_30);
  iVar7 = FUN_004ffac0();
  fVar16 = extraout_ST0 * (float10)*(float *)(iVar7 + 0x230);
  param_1[0x99] = (int)(float)fVar16;
  iVar7 = FUN_0043a0d0(*piVar1,param_1[0x97],param_1[0x98],(float)fVar16);
  if (iVar7 != 2) {
    iVar9 = FUN_0043f8c0();
    iVar7 = param_1[0x8b];
    uVar14 = 0;
    iVar10 = FUN_0043f8b0();
    if (iVar10 != 0) {
      puVar15 = (ushort *)(iVar9 + 4);
      do {
        puVar11 = (undefined4 *)((uint)puVar15[-2] * 0x10 + iVar7);
        uVar6 = *puVar11;
        uVar2 = puVar11[1];
        uVar4 = puVar11[2];
        uVar12 = (**(code **)(*param_1 + 0x90))();
        FUN_00548748(uVar12);
        puVar11 = (undefined4 *)((uint)puVar15[-1] * 0x10 + iVar7);
        uVar12 = *puVar11;
        uVar3 = puVar11[1];
        uVar5 = puVar11[2];
        uStack_24 = uVar6;
        uStack_20 = uVar2;
        uStack_1c = uVar4;
        uVar6 = (**(code **)(*param_1 + 0x90))();
        FUN_00548748(uVar6);
        puVar11 = (undefined4 *)((uint)*puVar15 * 0x10 + iVar7);
        uVar6 = *puVar11;
        uVar2 = puVar11[1];
        uVar4 = puVar11[2];
        uStack_28 = uVar4;
        uStack_18 = uVar12;
        uStack_14 = uVar3;
        uStack_10 = uVar5;
        uVar12 = (**(code **)(*param_1 + 0x90))();
        FUN_00548748(uVar12);
        uStack_c = uVar6;
        uStack_8 = uVar2;
        uStack_4 = uVar4;
        FUN_00474870(&uStack_24);
        uVar14 = uVar14 + 1;
        puVar15 = puVar15 + 0x16;
        uVar13 = FUN_0043f8b0();
      } while (uVar14 < uVar13);
    }
  }
  return;
}




/* Function: FUN_00504310 */

void FUN_00504310(void)

{
  FUN_00478810(&stack0x00000004);
  return;
}




/* Function: FUN_00504330 */

void __thiscall FUN_00504330(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_00502a30(param_1);
  }
  *(int *)(param_1 + 0x1ac) = param_2;
  if (param_2 != 0) {
    FUN_00504310(param_1);
  }
  return;
}




/* Function: FUN_00504360 */

void __fastcall FUN_00504360(int param_1)

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
  for (; this != pbVar1; this = this + 0x4c) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00504370 */

void __thiscall FUN_00504370(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x4c) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x4c))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00502010(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x4c;
    return;
  }
  FUN_00503cd0(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_00504400 */

void __fastcall FUN_00504400(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x74) {
    FUN_004ffc20();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00504410 */

void __thiscall FUN_00504410(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x74) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x74))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_005020f0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x74;
    return;
  }
  FUN_00503da0(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_005044a0 */

void __thiscall FUN_005044a0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x14) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x14))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_005021d0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x14;
    return;
  }
  FUN_00503e70(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_00504530 */

void __fastcall FUN_00504530(int param_1)

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
  FUN_00503780(&local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00504570 */

void __fastcall FUN_00504570(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_18 [6];
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar1 = param_1 + 0x1a;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *puVar1 = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *param_1 = 3;
  *(undefined1 *)(param_1 + 1) = 0;
  if (local_18 != puVar1) {
    *puVar1 = 0;
    param_1[0x1b] = 0xc2480000;
    param_1[0x1c] = 0;
  }
  return;
}




/* Function: FUN_00504600 */

void __thiscall FUN_00504600(int param_1,char param_2)

{
  if (*(char *)(param_1 + 4) != param_2) {
    if (param_2 != '\0') {
      FUN_00503d50();
      FUN_00502b20();
      FUN_00502bf0();
      FUN_00503e20();
      if (*(void **)(param_1 + 0x4c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)(param_1 + 0x4c));
      }
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      if (*(void **)(param_1 + 0x5c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)(param_1 + 0x5c));
      }
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    *(char *)(param_1 + 4) = param_2;
  }
  return;
}




/* Function: FUN_00504680 */

void FUN_00504680(char *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_58 [28];
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
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057edb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_58);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_58,param_1);
  local_18 = param_4;
  local_14 = param_3;
  if (param_2 != &local_3c) {
    local_3c = *param_2;
    local_38 = param_2[1];
    local_34 = param_2[2];
  }
  local_30 = local_3c;
  local_2c = local_38;
  local_28 = local_34;
  local_10 = 0;
  FUN_00504370(local_58);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_58);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00504790 */

void FUN_00504790(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_80 [28];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057edea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_80);
  local_4 = 0;
  _eh_vector_constructor_iterator_
            (local_4c,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310(0x3f800000);
  local_4 = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_80,param_1);
  local_64 = FUN_00501510(param_3);
  local_60 = FUN_00501510(param_4);
  local_5c = FUN_00501510(param_5);
  local_58 = FUN_00501510(param_6);
  local_54 = FUN_00501510(param_2);
  local_50 = param_7;
  FUN_00504410(local_80);
  local_4 = 2;
  _eh_vector_destructor_iterator_(local_4c,0x10,4,FUN_00407150);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_80);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_005048d0 */

void __thiscall FUN_005048d0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iStack_b4;
  int iStack_b0;
  int iStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float fStack_90;
  float fStack_8c;
  uint local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_74 [20];
  float fStack_60;
  undefined1 auStack_58 [12];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ee08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00501570(param_2);
  if (iVar2 != -1) {
    FUN_004ffac0();
    uVar3 = FUN_004ffa90(param_3);
    local_84 = FUN_00444820(uVar3,param_3);
    if (local_84 != 0xffffffff) {
      FUN_00500920(iVar2);
      FUN_00407260(*(int *)(param_1 + 0x3c) + iVar2 * 0x74 + 0x34);
      local_4 = 0;
      FUN_00547ad0();
      uVar3 = FUN_004ffa90();
      iVar4 = FUN_004449a0(uVar3);
      FUN_004ffaa0();
      iVar5 = FUN_004cf110();
      uVar8 = iVar5 % (int)*(short *)(*(int *)(iVar4 + 0x44) + 0x40);
      uVar9 = (int)uVar8 >> 0x1f;
      iStack_b4 = 0;
      if (*(short *)(iVar4 + 0x40) != 0) {
        iStack_b0 = 0;
        do {
          pfVar6 = (float *)(iStack_b0 + *(int *)(iVar4 + 0x48));
          if (*(byte *)(pfVar6 + 3) == local_84) {
            fVar1 = *pfVar6;
            fStack_90 = pfVar6[1];
            fStack_8c = pfVar6[2];
            pfVar6 = (float *)(*(int *)(*(int *)(iVar4 + 0x44) + (uint)*(byte *)(pfVar6 + 3) * 0x48
                                       + 0x44) + ((uVar8 ^ uVar9) - uVar9) * 0x40);
            fStack_80 = fVar1 * *pfVar6 + fStack_90 * pfVar6[1] + fStack_8c * pfVar6[2] + pfVar6[3];
            fStack_7c = fVar1 * pfVar6[4] + fStack_90 * pfVar6[5] + fStack_8c * pfVar6[6] +
                        pfVar6[7];
            fStack_78 = fVar1 * pfVar6[8] + fStack_90 * pfVar6[9] + fStack_8c * pfVar6[10] +
                        pfVar6[0xb];
            fStack_60 = fStack_78;
            uVar3 = (**(code **)(*param_4 + 0x90))(&fStack_80);
            FUN_00548704(auStack_74,uVar3);
            uStack_a0 = 0;
            uStack_9c = 0;
            uStack_98 = 0;
            puVar7 = (undefined4 *)FUN_005488cc(auStack_58,auStack_74,local_4c);
            if (puVar7 != &uStack_a0) {
              uStack_a0 = *puVar7;
              uStack_9c = puVar7[1];
              uStack_98 = puVar7[2];
            }
            iStack_a8 = iStack_b4;
            iStack_a4 = iVar2;
            FUN_005044a0(&iStack_a8);
          }
          iStack_b0 = iStack_b0 + 0x10;
          iStack_b4 = iStack_b4 + 1;
        } while (iStack_b4 < (int)(uint)*(ushort *)(iVar4 + 0x40));
      }
      local_4 = 0xffffffff;
      _eh_vector_destructor_iterator_(local_4c,0x10,4,FUN_00407150);
    }
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00504b50 */

/* WARNING: Removing unreachable block (ram,0x0050513e) */
/* WARNING: Removing unreachable block (ram,0x0050514e) */
/* WARNING: Removing unreachable block (ram,0x00504ecd) */
/* WARNING: Removing unreachable block (ram,0x00504f26) */
/* WARNING: Removing unreachable block (ram,0x00504f35) */
/* WARNING: Removing unreachable block (ram,0x00504edc) */
/* WARNING: Removing unreachable block (ram,0x00505136) */
/* WARNING: Removing unreachable block (ram,0x00505152) */
/* WARNING: Removing unreachable block (ram,0x00505028) */
/* WARNING: Removing unreachable block (ram,0x0050507b) */
/* WARNING: Removing unreachable block (ram,0x00505086) */
/* WARNING: Removing unreachable block (ram,0x005050f4) */
/* WARNING: Removing unreachable block (ram,0x00505039) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00504b50(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ee2b;
  local_c = ExceptionList;
  local_c4 = 0;
  ExceptionList = &local_c;
  if (0 < *param_1) {
    do {
      iVar5 = param_1[0xb];
      if (iVar5 != param_1[0xc]) {
        do {
          iVar1 = param_1[3] + *(int *)(iVar5 + 0x1c) * 0x4c;
          iVar2 = param_1[3] + *(int *)(iVar5 + 0x20) * 0x4c;
          FUN_0041d580();
          fVar3 = SQRT(local_bc * local_bc + local_b8 * local_b8 + local_c0 * local_c0);
          if (ABS(fVar3) < (float)_DAT_00588800) {
            fVar3 = _DAT_0058334c;
          }
          if (fVar3 < *(float *)(iVar5 + 0x24)) {
            FUN_00434a40();
            pfVar4 = (float *)FUN_0041d5b0();
            *(float *)(iVar1 + 0x1c) = *pfVar4 + *(float *)(iVar1 + 0x1c);
            *(float *)(iVar1 + 0x20) = pfVar4[1] + *(float *)(iVar1 + 0x20);
            *(float *)(iVar1 + 0x24) = pfVar4[2] + *(float *)(iVar1 + 0x24);
            FUN_00434a40();
            pfVar4 = (float *)FUN_0041d5b0();
            *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) - *pfVar4;
            *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) - pfVar4[1];
            *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) - pfVar4[2];
          }
          iVar5 = iVar5 + 0x2c;
        } while (iVar5 != param_1[0xc]);
      }
      std::numeric_limits<float>::max();
      iVar5 = param_1[7];
      if (iVar5 != param_1[8]) {
        do {
          iVar1 = param_1[3] + *(int *)(iVar5 + 0x1c) * 0x4c;
          iVar2 = param_1[3] + *(int *)(iVar5 + 0x20) * 0x4c;
          FUN_0041d580();
          FUN_00434a40();
          pfVar4 = (float *)FUN_0041d5b0();
          *(float *)(iVar1 + 0x1c) = *pfVar4 + *(float *)(iVar1 + 0x1c);
          *(float *)(iVar1 + 0x20) = pfVar4[1] + *(float *)(iVar1 + 0x20);
          *(float *)(iVar1 + 0x24) = pfVar4[2] + *(float *)(iVar1 + 0x24);
          FUN_00434a40();
          pfVar4 = (float *)FUN_0041d5b0();
          *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) - *pfVar4;
          *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) - pfVar4[1];
          *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) - pfVar4[2];
          local_4 = 2;
          FUN_0041c940();
          FUN_0041f800();
          FUN_00503c40(0);
          FUN_0041c940();
          FUN_0041f800();
          FUN_00503c40(0);
          local_4 = 0xffffffff;
          iVar5 = iVar5 + 0x28;
        } while (iVar5 != param_1[8]);
      }
      local_c4 = local_c4 + 1;
    } while (local_c4 < *param_1);
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_005051b0 */

void __thiscall FUN_005051b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_00501880();
    FUN_005018d0(param_3);
    FUN_00504b50(param_2);
  }
  return;
}




/* Function: FUN_005051e0 */

void __fastcall FUN_005051e0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0057ee61;
  local_c = ExceptionList;
  local_4 = 2;
  if (*(void **)(param_1 + 0x5c) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x5c));
  }
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(void **)(param_1 + 0x4c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x4c));
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_00503e20();
  local_4._0_1_ = 1;
  FUN_00502bf0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00502b20();
  local_4 = 0xffffffff;
  FUN_00503d50();
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00505280 */

void __fastcall FUN_00505280(int param_1)

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
  FUN_00503780(&local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 8));
}




/* Function: FUN_005052e0 */

undefined1 * __thiscall FUN_005052e0(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ee7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  uVar1 = FUN_00501ac0();
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
  FUN_005037e0(9,&param_2);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00505380 */

/* WARNING: Removing unreachable block (ram,0x00505497) */

void __thiscall
FUN_00505380(int param_1,int *param_2,
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
      FUN_00503ee0(iVar6 * 2 + -1,*(undefined4 *)(param_1 + 8));
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
  iVar10 = FUN_00501ae0(puVar13,puVar13[1],param_3);
  FUN_00501100(1);
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




/* Function: FUN_00505620 */

undefined4 __fastcall FUN_00505620(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_005052e0((int)&uStack_4 + 3,(int)&uStack_4 + 3);
  return param_1;
}




/* Function: FUN_00505640 */

int FUN_00505640(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_b0 [8];
  undefined1 local_a8 [64];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_68 [28];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057eeac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _eh_vector_constructor_iterator_
            (local_a8,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310(0x3f800000);
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_68,param_1);
  FUN_00407260(local_a8);
  local_4._0_1_ = 1;
  piVar2 = (int *)FUN_00505380(local_b0,local_68);
  iVar1 = *piVar2;
  local_4._0_1_ = 2;
  _eh_vector_destructor_iterator_(local_4c,0x10,4,FUN_00407150);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_68);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_a8,0x10,4,FUN_00407150);
  ExceptionList = local_c;
  return iVar1 + 0x24;
}




/* Function: FUN_00505730 */

void FUN_00505730(char *param_1)

{
  undefined1 *puVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0057eed1;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,param_1);
  puVar1 = &stack0x00000008;
  local_4._0_1_ = 1;
  FUN_00505640(local_28);
  FUN_0041d670(puVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(&stack0x00000008,0x10,4,FUN_00407150);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_005057c0 */

undefined4 * __fastcall FUN_005057c0(undefined4 *param_1)

{
  uint uVar1;
  
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_005910c8;
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000007;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
  }
  param_1[0x21] = uVar1;
  param_1[0x22] = 0xbf800000;
  FUN_00504570();
  FUN_00407f80(0x3f800000);
  FUN_00407f80(0x3f800000);
  FUN_00505620();
  *(undefined1 *)(param_1 + 0x6a) = 1;
  param_1[0x6b] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x70));
  param_1[0x77] = 0xffffffff;
  param_1[0x78] = 0xffffffff;
  param_1[0x79] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 1;
  param_1[0x7b] = 0x41a00000;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x7c));
  param_1[0x83] = 0;
  param_1[0x84] = 0xffffffff;
  param_1[0x85] = 0;
  param_1[0x86] = 0xffffffff;
  param_1[0x87] = 0x3f800000;
  param_1[0x88] = 1;
  param_1[0x89] = 0xbf800000;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0xffffffff;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0xa0] = 0x3f800000;
  param_1[0xa1] = 0x3f800000;
  param_1[0x9b] = 0xffffffff;
  param_1[0x9c] = 0xffffffff;
  param_1[0xa2] = 0x3f800000;
  param_1[0x9a] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  *(undefined1 *)((int)param_1 + 0x275) = 0;
  param_1[0xa3] = 0x3f800000;
  *(undefined1 *)((int)param_1 + 0x276) = 1;
  *(undefined1 *)((int)param_1 + 0x277) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  *(undefined1 *)((int)param_1 + 0x27a) = 1;
  *(undefined1 *)((int)param_1 + 0x27b) = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  *(undefined1 *)((int)param_1 + 0x27d) = 0;
  *(undefined1 *)((int)param_1 + 0x279) = 1;
  *(undefined1 *)((int)param_1 + 0x27e) = 0;
  return param_1;
}




/* Function: FUN_005059c0 */

void __fastcall FUN_005059c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_005910c8;
  FUN_00500a90();
  if (param_1[0x8e] == 0) {
    operator_delete__((void *)0x0);
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x7c));
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x70));
  if ((void *)param_1[0x6d] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x6d]);
  }
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  thunk_FUN_00505280();
  FUN_00407300();
  FUN_00407300();
  FUN_005051e0();
  FUN_0040da90();
  return;
}




/* Function: FUN_00505a60 */

void * __thiscall FUN_00505a60(void *param_1,byte param_2)

{
  FUN_005059c0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00505a80 */

void __thiscall FUN_00505a80(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057eee0;
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
      FUN_0041df20(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar3,param_1,iVar1);
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
    FUN_0043adb0();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00505b70 */

/* WARNING: Removing unreachable block (ram,0x00505dc1) */
/* WARNING: Removing unreachable block (ram,0x00505e07) */

int * FUN_00505b70(undefined4 param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  char cVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  int *piVar14;
  int *piStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  char *pcStack_84;
  uint uStack_70;
  char *pcStack_64;
  char *pcStack_60;
  uint uStack_5c;
  char *pcStack_58;
  char *pcStack_54;
  int aiStack_44 [7];
  uint uStack_28;
  uint uStack_24;
  char local_20 [8];
  int *piStack_18;
  
  pcStack_84 = local_20;
  uStack_88 = 0;
  piStack_8c = param_2;
  uStack_90 = 0x505b8b;
  (**(code **)(*param_2 + 0x38))();
  uStack_90 = 0;
  piStack_98 = aiStack_44;
  uStack_94 = 0;
  (**(code **)(*param_2 + 0x40))(param_2);
  uVar4 = uStack_28;
  uStack_5c = uStack_24;
  pcVar9 = pcStack_54 + (uStack_24 - 1) * (int)pcStack_58;
  pcStack_64 = pcStack_54;
  piStack_8c = (int *)pcStack_54;
  pcStack_60 = pcVar9;
  pcVar6 = operator_new(uStack_24 * uStack_28 * 2,(nothrow_t *)&DAT_005b6164);
  uStack_70 = 0;
  if (uStack_24 != 0) {
    do {
      pcVar11 = pcStack_64;
      if (uStack_70 != uStack_24 - 1) {
        pcVar11 = (char *)((int)piStack_8c + (int)pcStack_58);
      }
      pcStack_84 = pcVar9;
      if (uStack_70 != 0) {
        pcStack_84 = (char *)((int)piStack_8c + -(int)pcStack_58);
      }
      uVar13 = 0;
      if (uStack_28 != 0) {
        pcVar10 = (char *)((int)piStack_8c + -4);
        pcVar12 = pcVar6;
        do {
          if (uVar13 == uStack_28 - 1) {
            cVar8 = (char)*piStack_8c;
          }
          else {
            cVar8 = pcVar10[8];
          }
          if (uVar13 == 0) {
            cVar5 = *(char *)((int)piStack_8c + uStack_28 * 4 + -4);
          }
          else {
            cVar5 = *pcVar10;
          }
          cVar1 = *pcStack_84;
          cVar2 = *pcVar11;
          *pcVar12 = cVar5 - cVar8;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
          pcStack_84 = pcStack_84 + 4;
          pcVar12[1] = cVar1 - cVar2;
          pcVar12 = pcVar12 + 2;
          uVar13 = uVar13 + 1;
          pcVar9 = pcStack_60;
        } while (uVar13 < uStack_28);
      }
      piStack_8c = (int *)((int)piStack_8c + (int)pcStack_58);
      pcVar6 = pcVar6 + uVar4 * 2;
      uStack_70 = uStack_70 + 1;
      param_2 = piStack_18;
    } while (uStack_70 < uStack_24);
  }
  piVar14 = (int *)0x0;
  (**(code **)(*param_2 + 0x44))(param_2);
  pcVar9 = pcStack_64;
  piStack_98 = (int *)0x0;
  iVar7 = FUN_00494308(uStack_24,uVar4,pcStack_64,1,0,0x3c,0,&piStack_98);
  if (iVar7 < 0) {
    operator_delete__(pcStack_58);
    return (int *)0x0;
  }
  uStack_90 = 0;
  iVar7 = (**(code **)(*piStack_98 + 0x3c))(piStack_98,0,&uStack_90);
  piVar3 = piStack_8c;
  if (iVar7 < 0) {
    if (piVar14 != (int *)0x0) {
      (**(code **)(*piVar14 + 8))(piVar14);
    }
    operator_delete__(piStack_8c);
    return (int *)0x0;
  }
  uStack_5c = uVar4;
  pcStack_64 = (char *)0x0;
  pcStack_60 = (char *)0x0;
  pcStack_58 = pcVar9;
  iVar7 = FUN_00493e04(0,0,0,piStack_8c,0x3c,uVar4 * 2,0,&pcStack_64,3,0);
  if (iVar7 < 0) {
    if (piVar14 != (int *)0x0) {
      (**(code **)(*piVar14 + 8))(piVar14);
    }
    operator_delete__(piVar3);
    return (int *)0x0;
  }
  FUN_0049459a(piVar14,0,0xffffffff,5);
  operator_delete__(piVar3);
  return piVar14;
}




/* Function: FUN_00505e30 */

void __thiscall FUN_00505e30(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  return;
}




/* Function: FUN_00505e40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00505e40(float param_1,float param_2)

{
  int iVar1;
  
  iVar1 = rand();
  return ((float10)param_2 - (float10)param_1) * (float10)iVar1 * (float10)_DAT_00588d4c +
         (float10)param_1;
}




/* Function: FUN_00505e70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00505e70(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  if (DAT_005b2600 == '\0') {
    DAT_005b2600 = 1;
    return (float10)_DAT_005b7ec4;
  }
  DAT_005b2600 = 0;
  do {
    fVar1 = (float10)FUN_00505e40(0,0x3f800000,param_1);
    param_1 = (float)((fVar1 + fVar1) - (float10)_DAT_00583354);
    fVar1 = (float10)FUN_00505e40(0,0x3f800000);
    fVar1 = (fVar1 + fVar1) - (float10)_DAT_00583354;
    fVar2 = (float10)param_1 * (float10)param_1 + fVar1 * fVar1;
  } while ((float10)_DAT_00583354 <= fVar2);
  fVar2 = SQRT(((float10)0.6931471805599453 * fVar2 * (float10)_DAT_00591178) / fVar2);
  _DAT_005b7ec8 = (float)((float10)param_1 * fVar2);
  _DAT_005b7ec4 = (float)(fVar2 * fVar1);
  return (float10)_DAT_005b7ec8;
}




/* Function: FUN_00505f20 */

void __thiscall
FUN_00505f20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + param_2 * 8) = *param_5;
  *(undefined4 *)(iVar1 + 4 + param_2 * 8) = param_5[1];
  return;
}




/* Function: FUN_00505fb0 */

undefined4 __fastcall FUN_00505fb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




/* Function: FUN_00505fc0 */

undefined4 __fastcall FUN_00505fc0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}




/* Function: FUN_00506100 */

void __thiscall FUN_00506100(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  void *pvVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint local_10;
  undefined1 *local_c;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1];
  pvVar4 = operator_new(uVar1 * uVar2 * 3,(nothrow_t *)&DAT_005b6164);
  local_10 = 0;
  if (uVar1 != 0) {
    local_c = (undefined1 *)((int)pvVar4 + 2);
    do {
      uVar6 = 0;
      puVar5 = local_c;
      if (uVar2 != 0) {
        do {
          std::_Complex_base<float>::real
                    ((_Complex_base<float> *)(*param_1 + (param_1[1] * local_10 + uVar6) * 8));
          uVar3 = FUN_004cf110();
          puVar5[-2] = uVar3;
          puVar5[-1] = uVar3;
          *puVar5 = uVar3;
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 3;
        } while (uVar6 < uVar2);
      }
      local_10 = local_10 + 1;
      local_c = local_c + uVar2 * 3;
    } while (local_10 < uVar1);
  }
  FUN_004f5140(param_2,uVar2,uVar1,pvVar4);
  operator_delete__(pvVar4);
  return;
}




/* Function: FUN_005061d0 */

void FUN_005061d0(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[3];
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  param_1[5] = param_2[3];
  return;
}




/* Function: FUN_00506210 */

void __thiscall FUN_00506210(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}




/* Function: FUN_00506270 */

void __fastcall FUN_00506270(undefined4 *param_1)

{
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
  }
  *param_1 = 0;
  return;
}




/* Function: FUN_005062f0 */

undefined4 __fastcall FUN_005062f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




/* Function: FUN_00506300 */

int FUN_00506300(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00401790();
  *(undefined4 *)((ulonglong)uVar2 >> 0x20) = (int)uVar2;
  uVar2 = FUN_00505fb0();
  *(int *)((int)((ulonglong)uVar2 >> 0x20) + 4) = (int)uVar2;
  uVar2 = FUN_00505fc0();
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  *(int *)(iVar1 + 8) = (int)uVar2;
  *(undefined4 *)(iVar1 + 0xc) = 0xc2a00000;
  *(undefined4 *)(iVar1 + 0x10) = 0x43200000;
  return iVar1;
}




/* Function: FUN_00506330 */

undefined4 __fastcall FUN_00506330(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0xa4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  piVar3 = *(int **)(param_1 + 0xa8);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  piVar3 = *(int **)(param_1 + 0xac);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  piVar3 = *(int **)(param_1 + 0xb0);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  piVar3 = *(int **)(param_1 + 0xb4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  piVar3 = *(int **)(param_1 + 0x178);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  piVar3 = *(int **)(param_1 + 0x17c);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *(undefined4 *)(param_1 + 0x17c) = 0;
  }
  piVar3 = *(int **)(param_1 + 0xbc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  piVar3 = *(int **)(param_1 + 0xa0);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  piVar3 = (int *)(param_1 + 0x110);
  iVar2 = 0x1a;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 1;
}




/* Function: FUN_00506430 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00506430(undefined4 param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  unkbyte10 extraout_ST0;
  float10 extraout_ST0_00;
  int *local_ec;
  uint local_e8;
  uint local_e4;
  int *local_e0;
  void *local_dc;
  float local_d8;
  float local_d4;
  uint local_d0;
  float local_cc;
  undefined4 local_c8;
  float local_c4;
  float local_c0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_bc [28];
  uint local_a0;
  undefined4 uStack_9c;
  uint local_98;
  undefined4 uStack_94;
  uint local_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  uint uStack_70;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_6c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057ef29;
  local_14 = ExceptionList;
  local_e8 = param_2;
  local_e4 = param_3;
  local_c8 = 0x3c;
  ExceptionList = &local_14;
  iVar4 = FUN_004942e0(param_1,&local_e8,&local_e4,0,0,&local_c8,0);
  if (-1 < iVar4) {
    local_dc = operator_new(local_e4 * local_e8 * 2,(nothrow_t *)&DAT_005b6164);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_bc,"WaterBumpS1");
    local_c = 0;
    uVar5 = FUN_004224c0(local_6c,local_bc);
    fVar10 = (float10)FUN_0040e530(uVar5,0x42800000);
    local_d4 = (float)fVar10;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_6c);
    local_c = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_bc);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_bc,"WaterBumpS2");
    local_c = 1;
    uVar5 = FUN_004224c0(local_6c,local_bc);
    fVar10 = (float10)FUN_0040e530(uVar5,0x42000000);
    local_d8 = (float)fVar10;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_6c);
    local_c = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_bc);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_bc,"WaterBumpS3");
    local_c = 2;
    uVar5 = FUN_004224c0(local_6c,local_bc);
    FUN_0040e530(uVar5,0x3f59999a);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_6c);
    local_c = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_bc);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_bc,"WaterBumpR1");
    local_c = 3;
    uVar5 = FUN_004224c0(local_6c,local_bc);
    fVar10 = (float10)FUN_0040e530(uVar5,0x42960000);
    local_c0 = (float)fVar10;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_6c);
    local_c = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_bc);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_50,"WaterBumpR2");
    local_c = 4;
    uVar5 = FUN_004224c0(local_34,local_50);
    fVar10 = (float10)FUN_0040e530(uVar5,0x42960000);
    local_c4 = (float)fVar10;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
    local_c = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_50);
    local_d0 = 0;
    uVar6 = local_e8;
    uVar7 = local_e4;
    if (local_e4 != 0) {
      do {
        pcVar8 = (char *)((int)local_dc + local_d0 * uVar6 * 2);
        uVar9 = 0;
        if (uVar6 != 0) {
          uStack_84 = 0;
          fVar10 = (float10)local_d0;
          local_88 = local_d0;
          do {
            uStack_94 = 0;
            uStack_8c = 0;
            uStack_9c = 0;
            fVar11 = (float10)uVar9 / (float10)uVar6 - (float10)_DAT_00583340;
            fVar10 = fVar10 / (float10)uVar7 - (float10)_DAT_00583340;
            local_cc = (float)((fVar11 * (float10)_DAT_00591180 - fVar10) * (float10)local_c4);
            fcos((fVar10 + fVar11) * (float10)local_c0);
            local_a0 = uVar7;
            local_98 = uVar9;
            local_90 = uVar6;
            cVar2 = FUN_004cf110();
            fcos((float10)local_cc);
            cVar3 = FUN_004cf110();
            fsin(extraout_ST0);
            *pcVar8 = cVar2 + cVar3;
            cVar2 = FUN_004cf110();
            fsin((float10)local_cc);
            cVar3 = FUN_004cf110();
            pcVar8[1] = cVar2 + cVar3;
            pcVar8 = pcVar8 + 2;
            uVar9 = uVar9 + 1;
            uVar6 = local_e8;
            uVar7 = local_e4;
            fVar10 = extraout_ST0_00;
          } while (uVar9 < local_e8);
        }
        local_d0 = local_d0 + 1;
      } while (local_d0 < uVar7);
    }
    local_ec = (int *)0x0;
    iVar4 = FUN_00494308(param_1,uVar6,uVar7,1,0,local_c8,0,&local_ec);
    if (iVar4 < 0) {
      operator_delete__(local_dc);
      ExceptionList = local_14;
      return (int *)0x0;
    }
    local_e0 = (int *)0x0;
    iVar4 = (**(code **)(*local_ec + 0x3c))(local_ec,0,&local_e0);
    pvVar1 = local_dc;
    if (iVar4 < 0) {
      if (local_ec != (int *)0x0) {
        (**(code **)(*local_ec + 8))(local_ec);
        local_ec = (int *)0x0;
      }
      operator_delete__(local_dc);
      ExceptionList = local_14;
      return (int *)0x0;
    }
    uStack_74 = local_e8;
    uStack_70 = local_e4;
    uStack_7c = 0;
    uStack_78 = 0;
    iVar4 = FUN_00493e04(local_e0,0,0,local_dc,0x3c,local_e8 * 2,0,&uStack_7c,3,0);
    if (-1 < iVar4) {
      FUN_0049459a(local_ec,0,0xffffffff,5);
      if (local_e0 != (int *)0x0) {
        (**(code **)(*local_e0 + 8))(local_e0);
        local_e0 = (int *)0x0;
      }
      operator_delete__(pvVar1);
      ExceptionList = local_14;
      return local_ec;
    }
    if (local_e0 != (int *)0x0) {
      (**(code **)(*local_e0 + 8))(local_e0);
      local_e0 = (int *)0x0;
    }
    if (local_ec != (int *)0x0) {
      (**(code **)(*local_ec + 8))(local_ec);
      local_ec = (int *)0x0;
    }
    operator_delete__(pvVar1);
  }
  ExceptionList = local_14;
  return (int *)0x0;
}




/* Function: FUN_005068f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005068f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  if (iVar1 == 0) {
    return (float10)_DAT_00582ad8;
  }
  iVar2 = FUN_00505fb0();
  iVar3 = FUN_00505fc0();
  uVar4 = FUN_004cf110();
  uVar5 = FUN_004cf110();
  return (float10)*(float *)(iVar1 + ((iVar3 - 1U & uVar4) * iVar2 + (uVar5 & iVar2 - 1U)) * 4);
}




/* Function: FUN_00506980 */

void __thiscall FUN_00506980(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x104);
  if (iVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return;
  }
  iVar2 = FUN_00505fb0();
  iVar3 = FUN_00505fc0();
  uVar4 = FUN_004cf110();
  uVar5 = FUN_004cf110();
  iVar2 = (iVar3 - 1U & uVar4) * iVar2 + (uVar5 & iVar2 - 1U);
  *param_2 = *(undefined4 *)(iVar1 + iVar2 * 8);
  param_2[1] = *(undefined4 *)(iVar1 + 4 + iVar2 * 8);
  return;
}




/* Function: FUN_00506a20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00506a20(float param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar2 = (float10)param_2[1] * (float10)param_2[1] + (float10)*param_2 * (float10)*param_2;
  if (fVar2 == (float10)_DAT_00582ad8) {
    return (float10)_DAT_00582ad8;
  }
  fVar3 = (float10)param_3[1] * (float10)param_3[1] + (float10)*param_3 * (float10)*param_3;
  fVar1 = fVar3 / (float10)_DAT_00591168;
  fVar4 = (float10)param_3[1] * (float10)param_2[1] + (float10)*param_2 * (float10)*param_3;
  fVar5 = (float10)1.4426950408889634 * ((float10)_DAT_00587cb8 / (fVar1 * fVar1 * fVar2));
  fVar1 = ROUND(fVar5);
  fVar5 = (float10)f2xm1(fVar5 - fVar1);
  fVar1 = (float10)fscale((float10)1 + fVar5,fVar1);
  return (float10)param_1 * ((fVar4 * fVar4) / (fVar3 * fVar2)) * (fVar1 / (fVar2 * fVar2));
}




/* Function: FUN_00506ac0 */

void __fastcall FUN_00506ac0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_005911c4;
  operator_delete__((void *)param_1[1]);
  operator_delete__((void *)param_1[2]);
  FUN_005497ac();
  return;
}




/* Function: FUN_00506af0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00506af0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  uint local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  uint local_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  uint local_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined4 uStack_24;
  float local_20;
  float local_1c;
  complex<float> local_18 [8];
  float local_10 [3];
  
  local_54 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x28);
    do {
      uVar4 = 0;
      if (uVar3 != 0) {
        uStack_3c = 0;
        local_48 = (float)local_54;
        iVar5 = uVar3 * local_54 * 8;
        local_40 = local_54;
        do {
          fVar6 = (float10)FUN_00505e70();
          local_50 = (float)fVar6;
          fVar6 = (float10)FUN_00505e70();
          local_4c = (float)fVar6;
          std::complex<float>::complex<float>(local_18,&local_4c,&local_50);
          uStack_34 = 0;
          uStack_2c = 0;
          local_30 = *(uint *)(param_1 + 0x28) >> 1;
          local_28 = *(uint *)(param_1 + 0x2c) >> 1;
          uStack_24 = 0;
          local_20 = (float)(((float10)uVar4 - (float10)local_30) *
                            (float10)*(float *)(param_1 + 0x18));
          local_1c = (local_48 - (float)local_28) * *(float *)(param_1 + 0x1c);
          local_38 = uVar4;
          fVar6 = (float10)FUN_00506a20(*(undefined4 *)(param_1 + 0xc),&local_20,param_1 + 0x10);
          local_44 = (float)(SQRT(fVar6) * (float10)_DAT_005b9000);
          puVar2 = (undefined4 *)std::operator*(local_10,(complex<float> *)&local_44);
          iVar1 = *(int *)(param_1 + 4);
          uVar4 = uVar4 + 1;
          *(undefined4 *)(iVar5 + iVar1) = *puVar2;
          *(undefined4 *)(iVar5 + 4 + iVar1) = puVar2[1];
          uVar3 = *(uint *)(param_1 + 0x28);
          iVar5 = iVar5 + 8;
        } while (uVar4 < uVar3);
      }
      local_54 = local_54 + 1;
    } while (local_54 < *(uint *)(param_1 + 0x2c));
  }
  return;
}




/* Function: FUN_00506c20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00506c20(float *param_1,float param_2)

{
  float fVar1;
  undefined4 *puVar2;
  complex<float> *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 *local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  int local_74;
  float local_70;
  int local_6c;
  uint local_68;
  undefined4 uStack_64;
  uint local_60;
  undefined4 uStack_5c;
  float local_58;
  undefined4 uStack_54;
  float local_50;
  undefined4 uStack_4c;
  complex<float> local_48 [8];
  complex<float> local_40 [8];
  complex<float> local_38 [8];
  complex<float> local_30 [8];
  complex<float> local_28 [8];
  complex<float> acStack_20 [8];
  complex<float> local_18 [8];
  undefined1 auStack_10 [12];
  
  local_a8 = 0.0;
  local_ac = 0.0;
  std::complex<float>::complex<float>((complex<float> *)&local_90,&local_ac,&local_a8);
  local_a8 = 0.0;
  local_ac = 0.0;
  std::complex<float>::complex<float>((complex<float> *)&local_80,&local_ac,&local_a8);
  local_a8 = 0.0;
  local_ac = 0.0;
  std::complex<float>::complex<float>((complex<float> *)&local_88,&local_ac,&local_a8);
  local_a8 = (float)(((uint)param_1[0xb] >> 1) + 1);
  local_98 = 0.0;
  local_94 = 0.0;
  local_a4 = 0.0;
  if (local_a8 != 0.0) {
    do {
      fVar1 = param_1[10];
      local_6c = (int)fVar1 * (int)local_a4;
      fVar6 = 0.0;
      local_74 = ((int)param_1[0xb] - (int)local_a4 & (int)param_1[0xb] - 1U) * (int)fVar1;
      if (fVar1 != 0.0) {
        uStack_4c = 0;
        local_50 = local_a4;
        local_ac = (float)(local_6c * 8);
        local_78 = (float)(uint)local_a4;
        do {
          uStack_54 = 0;
          local_60 = (uint)fVar1 >> 1;
          uStack_5c = 0;
          uStack_64 = 0;
          local_68 = (uint)param_1[0xb] >> 1;
          fVar8 = ((float10)(uint)fVar6 - (float10)local_60) * (float10)param_1[6];
          fVar9 = ((float10)local_78 - (float10)local_68) * (float10)param_1[7];
          local_98 = (float)fVar8;
          local_94 = (float)fVar9;
          local_9c = (float)SQRT(fVar8 * fVar8 + fVar9 * fVar9);
          fVar8 = SQRT((float10)_DAT_00591168 * (float10)local_9c) * (float10)param_2;
          fVar9 = (float10)fsin(fVar8);
          local_70 = (float)fVar9;
          fVar8 = (float10)fcos(fVar8);
          local_a0 = (undefined4 *)(float)fVar8;
          local_58 = fVar6;
          puVar2 = (undefined4 *)
                   std::complex<float>::complex<float>(local_18,(float *)&local_a0,&local_70);
          local_90 = *puVar2;
          local_8c = puVar2[1];
          puVar2 = (undefined4 *)std::conj(local_38);
          local_80 = *puVar2;
          local_7c = puVar2[1];
          iVar7 = ((int)param_1[10] - (int)fVar6 & (int)param_1[10] - 1U) + local_74;
          pcVar3 = (complex<float> *)std::conj(local_48);
          std::operator*(local_28,pcVar3);
          pcVar3 = (complex<float> *)
                   std::operator*(local_40,(complex<float> *)((int)param_1[1] + (int)local_ac));
          puVar2 = (undefined4 *)std::operator+(local_30,pcVar3);
          local_88 = *puVar2;
          local_84 = puVar2[1];
          (**(code **)*param_1)((int)fVar6 + local_6c,&local_98,local_9c,&local_88);
          if (local_a4 != (float)((int)local_a8 - 1U)) {
            local_a0 = (undefined4 *)*param_1;
            uVar4 = std::conj(acStack_20);
            fVar1 = local_9c;
            uVar5 = FUN_0048e7b0(auStack_10);
            (*(code *)*local_a0)(iVar7,uVar5,fVar1,uVar4);
          }
          fVar1 = param_1[10];
          local_ac = (float)((int)local_ac + 8);
          fVar6 = (float)((int)fVar6 + 1);
        } while ((uint)fVar6 < (uint)fVar1);
      }
      local_a4 = (float)((int)local_a4 + 1);
    } while ((uint)local_a4 < (uint)local_a8);
  }
  (**(code **)((int)*param_1 + 4))();
  return;
}




/* Function: FUN_00506ef0 */

void __fastcall FUN_00506ef0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_005911cc;
  operator_delete__((void *)param_1[0xd]);
  operator_delete__((void *)param_1[0xe]);
  operator_delete__((void *)param_1[0xf]);
  operator_delete__((void *)param_1[0x10]);
  FUN_00506ac0();
  return;
}




/* Function: FUN_00507070 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00507070(int *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  undefined4 *puVar15;
  float *pfVar16;
  float *pfVar17;
  uint local_28;
  float *local_24;
  float *local_20;
  float *local_1c;
  float *local_18;
  uint local_14;
  
  puVar15 = (undefined4 *)param_1[2];
  for (uVar5 = *param_1 * *param_1 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  local_14 = 2;
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar15 = 0;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
  }
  iVar6 = *param_1;
  uVar5 = iVar6 - 2;
  if (2 < uVar5) {
    local_1c = (float *)(param_1[4] + 8 + iVar6 * 8);
    local_24 = (float *)(param_1[2] + 8 + iVar6 * 8);
    local_18 = (float *)(param_1[4] + 4 + iVar6 * 0xc);
    local_20 = (float *)(param_1[2] + 4 + iVar6 * 0xc);
    pfVar16 = (float *)(param_1[2] + 0xc + iVar6 * 4);
    pfVar11 = (float *)(param_1[4] + 0xc + iVar6 * 4);
    do {
      local_28 = 2;
      pfVar3 = local_24;
      pfVar7 = local_1c;
      pfVar9 = local_20;
      pfVar12 = pfVar11;
      pfVar13 = pfVar16;
      pfVar17 = local_18;
      if (2 < uVar5) {
        do {
          fVar1 = *pfVar7;
          fVar2 = pfVar7[-1];
          pfVar10 = pfVar9 + 1;
          pfVar4 = pfVar3 + 1;
          *pfVar3 = *pfVar3 - (fVar1 - fVar2);
          pfVar3[-1] = (fVar1 - fVar2) + pfVar3[-1];
          fVar1 = *pfVar7;
          fVar2 = pfVar12[-1];
          *pfVar3 = *pfVar3 - (fVar1 - fVar2);
          pfVar13[-1] = (fVar1 - fVar2) + pfVar13[-1];
          fVar1 = *pfVar7 - pfVar7[1];
          *pfVar3 = *pfVar3 - fVar1;
          *pfVar4 = fVar1 + *pfVar4;
          fVar1 = *pfVar7 - pfVar17[1];
          *pfVar3 = *pfVar3 - fVar1;
          *pfVar10 = fVar1 + *pfVar10;
          fVar1 = (*pfVar7 - pfVar17[2]) * _DAT_00591170;
          *pfVar3 = *pfVar3 - fVar1;
          pfVar9[2] = fVar1 + pfVar9[2];
          fVar1 = (*pfVar7 - pfVar12[-2]) * _DAT_00591170;
          *pfVar3 = *pfVar3 - fVar1;
          pfVar13[-2] = fVar1 + pfVar13[-2];
          fVar1 = (*pfVar7 - *pfVar17) * _DAT_00591170;
          *pfVar3 = *pfVar3 - fVar1;
          *pfVar9 = fVar1 + *pfVar9;
          local_28 = local_28 + 1;
          fVar1 = (*pfVar7 - *pfVar12) * _DAT_00591170;
          pfVar12 = pfVar12 + 1;
          *pfVar3 = *pfVar3 - fVar1;
          *pfVar13 = fVar1 + *pfVar13;
          pfVar3 = pfVar4;
          pfVar7 = pfVar7 + 1;
          pfVar9 = pfVar10;
          pfVar13 = pfVar13 + 1;
          pfVar17 = pfVar17 + 1;
        } while (local_28 < *param_1 - 2U);
      }
      local_24 = local_24 + iVar6;
      local_20 = local_20 + iVar6;
      local_18 = local_18 + iVar6;
      local_1c = local_1c + iVar6;
      local_14 = local_14 + 1;
      uVar5 = *param_1 - 2;
      pfVar16 = pfVar16 + iVar6;
      pfVar11 = pfVar11 + iVar6;
    } while (local_14 < uVar5);
  }
  iVar6 = *param_1;
  uVar14 = 1;
  uVar5 = iVar6 - 1;
  if (1 < uVar5) {
    do {
      uVar8 = 1;
      if (1 < uVar5) {
        do {
          iVar6 = iVar6 * uVar14 + uVar8;
          uVar8 = uVar8 + 1;
          pfVar16 = (float *)(param_1[3] + iVar6 * 4);
          *pfVar16 = *(float *)(param_1[2] + iVar6 * 4) * (float)param_1[1] + *pfVar16;
          *(float *)(param_1[4] + iVar6 * 4) =
               (*(float *)(param_1[3] + iVar6 * 4) + *(float *)(param_1[4] + iVar6 * 4)) *
               _DAT_0059116c;
          iVar6 = *param_1;
        } while (uVar8 < iVar6 - 1U);
      }
      iVar6 = *param_1;
      uVar14 = uVar14 + 1;
      uVar5 = iVar6 - 1;
    } while (uVar14 < uVar5);
  }
  return;
}




/* Function: FUN_005072d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005072d0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  
  puVar8 = (undefined4 *)param_1[2];
  for (uVar5 = *param_1 * *param_1 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  puVar8 = (undefined4 *)param_1[3];
  for (uVar5 = *param_1 * *param_1 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  uVar5 = 0;
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  uVar1 = *param_1;
  uVar2 = param_1[4];
  uVar7 = uVar1;
  if (uVar1 != 0) {
    do {
      uVar9 = 0;
      if (uVar7 != 0) {
        do {
          if ((((uVar5 == 0) || (uVar9 == 0)) || (uVar5 == uVar7 - 1)) || (uVar9 == uVar7 - 1)) {
LAB_00507617:
            *(undefined4 *)(uVar2 + (uVar1 * uVar5 + uVar9) * 4) = 0;
            goto LAB_00507625;
          }
          switch(param_2) {
          case 0:
            goto LAB_00507617;
          case 1:
            if ((uVar5 == uVar9) && (uVar5 == uVar7 >> 1)) {
              *(float *)(uVar2 + (uVar1 * uVar5 + uVar9) * 4) =
                   (float)((float10)uVar7 * (float10)_DAT_00588870);
            }
            else {
LAB_0050753d:
              *(float *)(uVar2 + (uVar1 * uVar5 + uVar9) * 4) = (float)_DAT_00582ae8;
            }
            break;
          case 2:
            if ((((uVar7 / 3 < uVar5) && (uVar7 / 3 < uVar9)) &&
                (uVar4 = (uVar7 * 2) / 3, uVar5 < uVar4)) && (uVar9 < uVar4)) {
LAB_005074e9:
              fVar3 = (float)_DAT_00582ae8;
            }
            else {
              fVar3 = (float)(uVar7 >> 2);
            }
            goto LAB_005074ef;
          case 3:
            if ((2 < (uVar7 - uVar9) - uVar5) || (uVar7 - uVar9 == uVar5)) goto LAB_0050753d;
            *(float *)(uVar2 + (uVar1 * uVar5 + uVar9) * 4) = (float)(uVar7 / 6);
            break;
          case 4:
            if (uVar5 == 1) {
              *(float *)(uVar2 + (uVar1 + uVar9) * 4) = (float)(uVar7 >> 2);
            }
            else {
              *(float *)(uVar2 + (uVar1 * uVar5 + uVar9) * 4) = (float)_DAT_00582ae8;
            }
            break;
          case 5:
            if (2 < (uVar7 - uVar9) - uVar5) goto LAB_0050753d;
            *(float *)(uVar2 + (uVar1 * uVar5 + uVar9) * 4) = (float)(uVar7 / 6);
            break;
          case 6:
            if (((uVar5 <= uVar7 / 3) || (uVar9 <= uVar7 / 3)) ||
               ((uVar4 = (uVar7 * 2) / 3, uVar4 <= uVar5 || (uVar4 <= uVar9)))) goto LAB_005074e9;
            fVar3 = (float)(uVar7 >> 2);
LAB_005074ef:
            *(float *)(uVar2 + (uVar1 * uVar5 + uVar9) * 4) = fVar3;
            break;
          case 7:
            uVar4 = uVar7 * 3 >> 2;
            if ((uVar5 <= uVar4) || (uVar9 <= uVar4)) goto LAB_0050753d;
            *(float *)(uVar2 + (uVar1 * uVar5 + uVar9) * 4) = (float)(uVar7 >> 2);
            break;
          case 8:
            fVar10 = (float10)fsin(((float10)uVar9 / (float10)uVar7) * (float10)_DAT_00589ee8);
            fVar11 = (float10)fsin(((float10)uVar5 / (float10)uVar7) * (float10)_DAT_00589ee8);
            *(float *)(uVar2 + (uVar1 * uVar5 + uVar9) * 4) =
                 (float)((float10)uVar7 * (fVar11 + fVar10) * (float10)_DAT_005911d8);
            break;
          case 9:
            fVar10 = (float10)fsin(((float10)uVar9 / (float10)uVar7) * (float10)_DAT_00588d6c);
            fVar11 = (float10)fsin(((float10)uVar5 / (float10)uVar7) * (float10)_DAT_00588d6c);
            *(float *)(uVar2 + (uVar1 * uVar5 + uVar9) * 4) =
                 (float)((float10)uVar7 * (fVar11 + fVar10) * (float10)_DAT_005911d8);
          }
LAB_00507625:
          uVar9 = uVar9 + 1;
          uVar7 = *param_1;
        } while (uVar9 < uVar7);
      }
      uVar5 = uVar5 + 1;
      uVar7 = *param_1;
    } while (uVar5 < uVar7);
  }
  return;
}




/* Function: FUN_00507680 */

void FUN_00507680(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ef52;
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




/* Function: FUN_00509db0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00509db0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,float param_6,float param_7)

{
  int iVar1;
  complex<float> *pcVar2;
  int iVar3;
  complex<float> *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ef8f;
  local_c = ExceptionList;
  param_6 = _DAT_00588d6c / param_6;
  ExceptionList = &local_c;
  param_1[3] = param_4;
  *param_1 = &PTR_FUN_005911c4;
  param_1[4] = *param_5;
  param_1[5] = param_5[1];
  param_1[8] = param_2;
  param_1[9] = param_3;
  param_1[6] = param_6;
  param_1[7] = _DAT_00588d6c / param_7;
  FUN_005497b8(param_2,param_3,1);
  iVar3 = 1 << ((byte)param_2 & 0x1f);
  iVar1 = 1 << ((byte)param_3 & 0x1f);
  local_4 = 0;
  param_1[10] = iVar3;
  param_1[0xb] = iVar1;
  iVar1 = iVar1 * iVar3;
  pcVar2 = operator_new(iVar1 * 8,(nothrow_t *)&DAT_005b6164);
  local_4._0_1_ = 1;
  if (pcVar2 == (complex<float> *)0x0) {
    pcVar2 = (complex<float> *)0x0;
  }
  else {
    pcVar4 = pcVar2;
    if (-1 < iVar1 + -1) {
      do {
        std::complex<float>::_default_constructor_closure_(pcVar4);
        iVar1 = iVar1 + -1;
        pcVar4 = pcVar4 + 8;
      } while (iVar1 != 0);
    }
  }
  iVar1 = param_1[10] * param_1[0xb];
  param_1[1] = pcVar2;
  pcVar2 = operator_new(iVar1 * 8,(nothrow_t *)&DAT_005b6164);
  local_4._0_1_ = 2;
  if (pcVar2 == (complex<float> *)0x0) {
    pcVar2 = (complex<float> *)0x0;
  }
  else {
    pcVar4 = pcVar2;
    if (-1 < iVar1 + -1) {
      do {
        std::complex<float>::_default_constructor_closure_(pcVar4);
        iVar1 = iVar1 + -1;
        pcVar4 = pcVar4 + 8;
      } while (iVar1 != 0);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[2] = pcVar2;
  FUN_00506af0();
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00509f00 */

undefined4 * __thiscall
FUN_00509f00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  complex<float> *pcVar3;
  complex<float> *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057eff0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00509db0(param_3,param_4,param_5,param_6,param_7,param_8);
  local_4 = 0;
  *param_1 = &PTR_LAB_005911cc;
  param_1[0x11] = param_2;
  iVar1 = FUN_00505fb0();
  iVar2 = FUN_00505fc0();
  iVar1 = iVar1 * iVar2;
  pcVar3 = operator_new(iVar1 * 8,(nothrow_t *)&DAT_005b6164);
  local_4._0_1_ = 1;
  if (pcVar3 == (complex<float> *)0x0) {
    pcVar3 = (complex<float> *)0x0;
  }
  else {
    pcVar4 = pcVar3;
    if (-1 < iVar1 + -1) {
      do {
        std::complex<float>::_default_constructor_closure_(pcVar4);
        iVar1 = iVar1 + -1;
        pcVar4 = pcVar4 + 8;
      } while (iVar1 != 0);
    }
  }
  param_1[0xd] = pcVar3;
  iVar1 = FUN_00505fb0();
  iVar2 = FUN_00505fc0();
  iVar1 = iVar1 * iVar2;
  pcVar3 = operator_new(iVar1 * 8,(nothrow_t *)&DAT_005b6164);
  local_4._0_1_ = 2;
  if (pcVar3 == (complex<float> *)0x0) {
    pcVar3 = (complex<float> *)0x0;
  }
  else {
    pcVar4 = pcVar3;
    if (-1 < iVar1 + -1) {
      do {
        std::complex<float>::_default_constructor_closure_(pcVar4);
        iVar1 = iVar1 + -1;
        pcVar4 = pcVar4 + 8;
      } while (iVar1 != 0);
    }
  }
  param_1[0xe] = pcVar3;
  iVar1 = FUN_00505fb0();
  iVar2 = FUN_00505fc0();
  iVar1 = iVar1 * iVar2;
  pcVar3 = operator_new(iVar1 * 8,(nothrow_t *)&DAT_005b6164);
  local_4._0_1_ = 3;
  if (pcVar3 == (complex<float> *)0x0) {
    pcVar3 = (complex<float> *)0x0;
  }
  else {
    pcVar4 = pcVar3;
    if (-1 < iVar1 + -1) {
      do {
        std::complex<float>::_default_constructor_closure_(pcVar4);
        iVar1 = iVar1 + -1;
        pcVar4 = pcVar4 + 8;
      } while (iVar1 != 0);
    }
  }
  param_1[0xf] = pcVar3;
  iVar1 = FUN_00505fb0();
  iVar2 = FUN_00505fc0();
  iVar1 = iVar1 * iVar2;
  pcVar3 = operator_new(iVar1 * 8,(nothrow_t *)&DAT_005b6164);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (pcVar3 == (complex<float> *)0x0) {
    param_1[0x10] = 0;
  }
  else {
    pcVar4 = pcVar3;
    if (-1 < iVar1 + -1) {
      do {
        std::complex<float>::_default_constructor_closure_(pcVar4);
        iVar1 = iVar1 + -1;
        pcVar4 = pcVar4 + 8;
      } while (iVar1 != 0);
    }
    param_1[0x10] = pcVar3;
  }
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0050a0c0 */

/* WARNING: Removing unreachable block (ram,0x0050aed2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0050a0c0(char *param_1,int *param_2,int param_3,int param_4,int param_5,int *param_6,
            int *param_7,int *param_8,int *param_9,int *param_10,float param_11,float param_12,
            float param_13,int param_14,int param_15,int param_16)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int *piVar14;
  void *pvVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  double *pdVar22;
  int iVar23;
  undefined4 *puVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  ulonglong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint local_1b0;
  float local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  float local_194;
  int local_18c;
  uint local_188;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  double local_170 [2];
  uint local_160;
  float local_15c;
  float local_158;
  uint local_154;
  int local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  float local_140;
  uint local_13c;
  uint local_138 [4];
  uint local_128 [5];
  float local_114;
  float local_110;
  undefined4 local_10c;
  uint local_108;
  uint uStack_104;
  uint local_100;
  float local_f4;
  float local_f0;
  float local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_c4 [28];
  float local_a8 [3];
  float local_9c [3];
  float local_90 [3];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [24];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [16];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057f046;
  local_14 = ExceptionList;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  iVar27 = uVar3 * uVar2;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  ExceptionList = &local_14;
  *param_6 = iVar27;
  if (*param_1 != '\0') {
    piVar14 = operator_new(iVar27 * 0xc + 4,(nothrow_t *)&DAT_005b6164);
    if (piVar14 == (int *)0x0) {
      piVar14 = (int *)0x0;
    }
    else {
      *piVar14 = iVar27;
      piVar14 = piVar14 + 1;
      _eh_vector_constructor_iterator_
                (piVar14,0xc,iVar27,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
    }
    *param_7 = (int)piVar14;
    if (param_8 != (int *)0x0) {
      iVar27 = *param_6;
      piVar14 = operator_new(iVar27 * 0xc + 4,(nothrow_t *)&DAT_005b6164);
      if (piVar14 == (int *)0x0) {
        piVar14 = (int *)0x0;
      }
      else {
        *piVar14 = iVar27;
        piVar14 = piVar14 + 1;
        _eh_vector_constructor_iterator_
                  (piVar14,0xc,iVar27,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
      }
      *param_8 = (int)piVar14;
    }
    if (param_10 != (int *)0x0) {
      iVar27 = *param_6;
      piVar14 = operator_new(iVar27 * 8 + 4,(nothrow_t *)&DAT_005b6164);
      if (piVar14 == (int *)0x0) {
        piVar14 = (int *)0x0;
      }
      else {
        *piVar14 = iVar27;
        piVar14 = piVar14 + 1;
        _eh_vector_constructor_iterator_
                  (piVar14,8,iVar27,(_func_void_void_ptr *)&LAB_0041d390,FUN_00407150);
      }
      *param_10 = (int)piVar14;
    }
    if (param_9 != (int *)0x0) {
      pvVar15 = operator_new(*param_6 << 2,(nothrow_t *)&DAT_005b6164);
      *param_9 = (int)pvVar15;
    }
  }
  FUN_0041ce80();
  pfVar16 = (float *)FUN_0041caa0();
  local_194 = *pfVar16;
  FUN_0041ce80();
  iVar27 = FUN_0041caa0();
  local_170[0] = (double)(ulonglong)uVar2;
  fVar4 = *(float *)(iVar27 + 8);
  fVar33 = (float)(longlong)local_170[0];
  fVar5 = (param_13 * _DAT_005911c0) / fVar33;
  fVar6 = (float)(uVar2 - 1) * fVar5;
  local_170[0] = (double)fVar5;
  fVar29 = (float10)_CIfmod();
  fVar30 = (float10)_CIfmod();
  local_170[0] = (double)(ulonglong)uVar3;
  local_194 = local_194 - (fVar33 * fVar5 * _DAT_00583340 + (float)fVar29);
  local_1a4 = (float)((float10)fVar4 -
                     ((float10)(longlong)local_170[0] * (float10)fVar5 * (float10)_DAT_00583340 +
                     fVar30));
  local_158 = local_194;
  uVar17 = FUN_004cf110();
  local_160 = FUN_004cf110();
  fVar4 = (param_12 - param_11) * _DAT_0058334c;
  local_13c = 0;
  uVar32 = 0;
  if (param_16 != 0) {
    uVar32 = FUN_005062f0();
  }
  local_180 = (uint)(uVar32 >> 0x20);
  if (local_180 < uVar3) {
    local_18c = uVar2 * 0xc;
    local_170[0] = (double)CONCAT44(local_170[0]._4_4_,local_18c);
    local_174 = local_180;
    local_154 = local_180;
    do {
      local_198 = (uint)(uVar32 >> 0x20);
      local_13c = (uint)uVar32;
      local_14c = 0;
      if (uVar2 != 0) {
        local_15c = (float)(local_180 + local_160 & uVar3 - 1);
        local_140 = (float)((int)local_15c * uVar2);
        local_144 = local_154;
        local_188 = local_174;
        local_150 = local_198;
        local_148 = uVar17;
        do {
          uVar26 = uVar2 - 1 & local_148;
          iVar27 = (int)local_140 + uVar26;
          fVar33 = std::_Complex_base<float>::real
                             ((_Complex_base<float> *)(*(int *)(param_3 + 0xc) + iVar27 * 8));
          local_a8[0] = std::_Complex_base<float>::real
                                  ((_Complex_base<float> *)(*(int *)(param_3 + 8) + iVar27 * 8));
          uVar18 = local_13c;
          if ((param_4 != 0) && (param_9 != (int *)0x0)) {
            *(undefined4 *)(local_150 + *param_9) = *(undefined4 *)(param_4 + iVar27 * 4);
          }
          if (local_13c == 0) {
            fVar34 = std::_Complex_base<float>::real
                               ((_Complex_base<float> *)
                                (*param_2 + (param_2[1] * (int)local_15c + uVar26) * 8));
            local_9c[0] = local_a8[0] + local_194;
            pfVar16 = (float *)(*param_7 + local_188);
            if (local_9c != pfVar16) {
              pfVar16[1] = fVar34 * fVar4;
              *pfVar16 = local_9c[0];
              pfVar16[2] = local_1a4 - fVar33;
            }
          }
          else {
            fVar35 = std::_Complex_base<float>::real
                               ((_Complex_base<float> *)
                                (*param_2 + (param_2[1] * (int)local_15c + uVar26) * 8));
            fVar34 = *(float *)(uVar18 + iVar27 * 4) * _DAT_00587e3c;
            pfVar16 = (float *)(*param_7 + local_188);
            if (local_90 != pfVar16) {
              *pfVar16 = local_a8[0] + local_194;
              pfVar16[1] = fVar35 * fVar4 + fVar34;
              pfVar16[2] = local_1a4 - fVar33;
            }
          }
          if (param_10 != (int *)0x0) {
            local_138[1] = 0;
            local_138[0] = local_14c;
            local_108 = local_180;
            uStack_104 = 0;
            local_128[0] = uVar3 - 1;
            local_128[1] = 0;
            pfVar16 = (float *)(*param_10 + local_144);
            local_110 = (float)((float10)local_180 / (float10)local_128[0]);
            if (pfVar16 != &local_114) {
              *pfVar16 = (float)local_14c / (float)(uVar2 - 1);
              pfVar16[1] = local_110;
            }
          }
          local_194 = fVar5 + local_194;
          local_14c = local_14c + 1;
          local_150 = local_150 + 4;
          local_188 = local_188 + 0xc;
          local_144 = local_144 + 8;
          local_148 = local_148 + 1;
        } while (local_14c < uVar2);
      }
      puVar21 = (undefined4 *)(*param_7 + local_174);
      puVar24 = (undefined4 *)(*param_7 + -0xc + local_18c);
      if (puVar21 != puVar24) {
        *puVar24 = *puVar21;
        puVar24[1] = puVar21[1];
        puVar24[2] = puVar21[2];
      }
      local_194 = local_158;
      local_154 = local_154 + uVar2 * 8;
      *(float *)(local_18c + -0xc + *param_7) = fVar6 + *(float *)(local_18c + -0xc + *param_7);
      local_1a4 = fVar5 + local_1a4;
      uVar32 = CONCAT44(local_198 + uVar2 * 4,local_13c);
      local_18c = local_18c + local_170[0]._0_4_;
      local_180 = local_180 + 1;
      local_174 = local_174 + local_170[0]._0_4_;
    } while (local_180 < uVar3);
    uVar32 = (ulonglong)local_13c;
  }
  local_178 = (uint)(uVar32 >> 0x20);
  local_13c = (uint)uVar32;
  if (3 < (int)uVar2) {
    iVar23 = 0;
    local_17c = 3;
    iVar27 = (uVar3 - 1) * uVar2 * 0xc;
    do {
      puVar21 = (undefined4 *)(iVar23 + *param_7);
      puVar24 = (undefined4 *)(*param_7 + iVar27);
      if (puVar21 != puVar24) {
        *puVar24 = *puVar21;
        puVar24[1] = puVar21[1];
        puVar24[2] = puVar21[2];
      }
      *(float *)(iVar27 + 8 + *param_7) = fVar6 + *(float *)(iVar27 + 8 + *param_7);
      puVar21 = (undefined4 *)(iVar23 + 0xc + *param_7);
      puVar24 = (undefined4 *)(iVar27 + 0xc + *param_7);
      if (puVar21 != puVar24) {
        *puVar24 = *puVar21;
        puVar24[1] = puVar21[1];
        puVar24[2] = puVar21[2];
      }
      *(float *)(iVar27 + 0x14 + *param_7) = fVar6 + *(float *)(iVar27 + 0x14 + *param_7);
      puVar21 = (undefined4 *)(*param_7 + 0x18 + iVar23);
      puVar24 = (undefined4 *)(*param_7 + 0x18 + iVar27);
      if (puVar21 != puVar24) {
        *puVar24 = *puVar21;
        puVar24[1] = puVar21[1];
        puVar24[2] = puVar21[2];
      }
      *(float *)(iVar27 + 0x20 + *param_7) = fVar6 + *(float *)(iVar27 + 0x20 + *param_7);
      puVar21 = (undefined4 *)(*param_7 + 0x24 + iVar23);
      puVar24 = (undefined4 *)(*param_7 + 0x24 + iVar27);
      if (puVar21 != puVar24) {
        *puVar24 = *puVar21;
        puVar24[1] = puVar21[1];
        puVar24[2] = puVar21[2];
      }
      iVar28 = iVar27 + 0x2c;
      iVar25 = iVar27 + 0x2c;
      local_17c = local_17c + 4;
      iVar23 = iVar23 + 0x30;
      iVar27 = iVar27 + 0x30;
      *(float *)(iVar25 + *param_7) = fVar6 + *(float *)(iVar28 + *param_7);
      local_178 = local_178 + 4;
    } while (local_17c < uVar2);
  }
  if (local_178 < uVar2) {
    iVar23 = local_178 * 0xc;
    iVar27 = ((uVar3 - 1) * uVar2 + local_178) * 0xc;
    local_18c = uVar2 - local_178;
    do {
      puVar21 = (undefined4 *)(*param_7 + iVar23);
      puVar24 = (undefined4 *)(*param_7 + iVar27);
      if (puVar21 != puVar24) {
        *puVar24 = *puVar21;
        puVar24[1] = puVar21[1];
        puVar24[2] = puVar21[2];
      }
      iVar23 = iVar23 + 0xc;
      pfVar16 = (float *)(*param_7 + 8 + iVar27);
      pfVar1 = (float *)(*param_7 + 8 + iVar27);
      iVar27 = iVar27 + 0xc;
      *pfVar1 = fVar6 + *pfVar16;
      local_18c = local_18c + -1;
    } while (local_18c != 0);
  }
  if (param_14 != 0) {
    local_1a4 = 0.0;
    local_19c = 0;
    if (uVar3 != 0) {
      do {
        local_194 = 0.0;
        if (3 < (int)uVar2) {
          local_188 = 3;
          iVar27 = (int)local_1a4 * 0xc;
          do {
            iVar23 = *param_7;
            uVar18 = FUN_004cf110();
            uVar26 = FUN_004cf110();
            iVar28 = (uVar18 & uVar3 - 1) * uVar2 + (uVar26 & uVar2 - 1);
            *(undefined4 *)(param_14 + iVar28 * 4) = *(undefined4 *)(iVar23 + iVar27 + 4);
            if (param_15 != 0) {
              *(float *)(param_15 + iVar28 * 8) = local_194;
              *(uint *)(param_15 + 4 + iVar28 * 8) = local_19c;
            }
            iVar23 = *param_7;
            uVar18 = FUN_004cf110();
            uVar26 = FUN_004cf110();
            iVar28 = (uVar18 & uVar3 - 1) * uVar2 + (uVar26 & uVar2 - 1);
            *(undefined4 *)(param_14 + iVar28 * 4) = *(undefined4 *)(iVar23 + iVar27 + 0x10);
            if (param_15 != 0) {
              *(uint *)(param_15 + 4 + iVar28 * 8) = local_19c;
              *(uint *)(param_15 + iVar28 * 8) = local_188 - 2;
            }
            iVar23 = *param_7;
            uVar18 = FUN_004cf110();
            uVar26 = FUN_004cf110();
            iVar28 = (uVar18 & uVar3 - 1) * uVar2 + (uVar26 & uVar2 - 1);
            *(undefined4 *)(param_14 + iVar28 * 4) = *(undefined4 *)(iVar23 + iVar27 + 0x1c);
            if (param_15 != 0) {
              *(uint *)(param_15 + iVar28 * 8) = local_188 - 1;
              *(uint *)(param_15 + 4 + iVar28 * 8) = local_19c;
            }
            iVar23 = *param_7;
            uVar18 = FUN_004cf110();
            local_170[0] = (double)CONCAT44(local_170[0]._4_4_,uVar18 & uVar2 - 1);
            uVar18 = FUN_004cf110();
            iVar28 = (uVar18 & uVar3 - 1) * uVar2 + local_170[0]._0_4_;
            *(undefined4 *)(param_14 + iVar28 * 4) = *(undefined4 *)(iVar23 + iVar27 + 0x28);
            if (param_15 != 0) {
              *(uint *)(param_15 + iVar28 * 8) = local_188;
              *(uint *)(param_15 + 4 + iVar28 * 8) = local_19c;
            }
            local_1a4 = (float)((int)local_1a4 + 4);
            local_188 = local_188 + 4;
            iVar27 = iVar27 + 0x30;
            local_194 = (float)((int)local_194 + 4);
          } while (local_188 < uVar2);
        }
        if ((uint)local_194 < uVar2) {
          local_198 = (int)local_1a4 * 0xc;
          local_1a4 = (float)((int)local_1a4 + (uVar2 - (int)local_194));
          do {
            iVar27 = *param_7;
            uVar18 = FUN_004cf110();
            uVar26 = FUN_004cf110();
            iVar23 = (uVar26 & uVar3 - 1) * uVar2 + (uVar18 & uVar2 - 1);
            *(undefined4 *)(param_14 + iVar23 * 4) = *(undefined4 *)(iVar27 + local_198 + 4);
            if (param_15 != 0) {
              *(float *)(param_15 + iVar23 * 8) = local_194;
              *(uint *)(param_15 + 4 + iVar23 * 8) = local_19c;
            }
            local_194 = (float)((int)local_194 + 1);
            local_198 = local_198 + 0xc;
          } while ((uint)local_194 < uVar2);
        }
        local_19c = local_19c + 1;
      } while (local_19c < uVar3);
    }
  }
  FUN_0041ce80();
  fVar29 = (float10)FUN_0041ce10();
  _eh_vector_constructor_iterator_
            (&local_f4,0xc,4,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  local_c = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_c4,"FOAM_NORMALY");
  local_c._0_1_ = 1;
  FUN_0041ce80();
  FUN_0041cae0();
  fVar30 = (float10)FUN_0042dc70();
  local_c._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_c4);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_c4,"FOAM_WHIP")
  ;
  local_c._0_1_ = 2;
  FUN_0041ce80();
  FUN_0041cae0();
  fVar31 = (float10)FUN_0042dc70();
  local_140 = (float)fVar31;
  local_c._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_c4);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_c4,"FOAM_FADEOUT");
  local_c._0_1_ = 3;
  FUN_0041ce80();
  FUN_0041cae0();
  fVar31 = (float10)FUN_0042dc70();
  local_15c = (float)fVar31;
  local_c._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_c4);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_c4,"FOAM_BUBBLES");
  local_c._0_1_ = 4;
  FUN_0041ce80();
  FUN_0041cae0();
  FUN_0042dc70();
  local_c = (uint)local_c._1_3_ << 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_c4);
  if (param_8 != (int *)0x0) {
    local_1b0 = 0;
    if (uVar3 != 0) {
      do {
        local_198 = 0;
        if (uVar2 != 0) {
          iVar27 = local_1b0 * uVar2;
          local_158 = (float)((local_160 + local_1b0 & uVar3 - 1) * uVar2);
          do {
            if (local_198 == uVar2 - 1) {
              bVar7 = true;
              local_114 = 0.0;
              local_110 = 0.0;
              local_10c = 0;
              pfVar16 = &local_114;
LAB_0050acce:
              local_f4 = *pfVar16;
              local_f0 = pfVar16[1];
              local_ec = pfVar16[2];
            }
            else {
              bVar8 = true;
              pfVar16 = (float *)FUN_0041d580(local_90,*param_7 + (iVar27 + local_198) * 0xc + 0xc);
              if (pfVar16 != &local_f4) goto LAB_0050acce;
            }
            if (bVar8) {
              bVar8 = false;
            }
            if (bVar7) {
              bVar7 = false;
            }
            local_170[0] = (double)CONCAT44(local_170[0]._4_4_,uVar3 - 1);
            if (local_1b0 == uVar3 - 1) {
              bVar10 = true;
              local_128[0] = 0;
              local_128[1] = 0;
              local_128[2] = 0;
              puVar19 = local_128;
LAB_0050ad7e:
              local_e8 = *puVar19;
              local_e4 = puVar19[1];
              local_e0 = puVar19[2];
            }
            else {
              bVar9 = true;
              puVar19 = (uint *)FUN_0041d580(local_9c,*param_7 +
                                                      ((local_1b0 + 1) * uVar2 + local_198) * 0xc);
              if (puVar19 != &local_e8) goto LAB_0050ad7e;
            }
            if (bVar9) {
              bVar9 = false;
            }
            if (bVar10) {
              bVar10 = false;
            }
            if (local_198 == 0) {
              bVar12 = true;
              local_108 = local_198;
              uStack_104 = local_198;
              local_100 = local_198;
              puVar19 = &local_108;
LAB_0050ae06:
              local_dc = *puVar19;
              local_d8 = puVar19[1];
              local_d4 = puVar19[2];
            }
            else {
              bVar11 = true;
              puVar19 = (uint *)FUN_0041d580(local_a8,*param_7 + (iVar27 + local_198) * 0xc + -0xc);
              if (puVar19 != &local_dc) goto LAB_0050ae06;
            }
            if (bVar11) {
              bVar11 = false;
            }
            if (bVar12) {
              bVar12 = false;
            }
            if (local_1b0 == 0) {
              bVar13 = true;
              local_138[0] = 0;
              local_138[1] = 0;
              local_138[2] = 0;
              puVar19 = local_138;
LAB_0050aeb1:
              local_d0 = *puVar19;
              local_cc = puVar19[1];
              local_c8 = puVar19[2];
            }
            else {
              puVar19 = (uint *)FUN_0041d580(local_30,*param_7 +
                                                      ((local_1b0 - 1) * uVar2 + local_198) * 0xc);
              if (puVar19 != &local_d0) goto LAB_0050aeb1;
            }
            if (bVar13) {
              bVar13 = false;
            }
            FUN_0041d5e0(local_3c,&local_d0);
            uVar20 = FUN_0041d5e0(local_24,&local_dc,&local_d0);
            uVar20 = FUN_0041d5e0(local_48,&local_e8,&local_dc,uVar20);
            uVar20 = FUN_0041d5e0(local_60,&local_e8,&local_f4,uVar20);
            uVar20 = FUN_0041d550(local_84,uVar20);
            uVar20 = FUN_0041d550(local_78,uVar20);
            puVar21 = (undefined4 *)FUN_0041d550(local_6c,uVar20);
            iVar23 = (iVar27 + local_198) * 0xc;
            puVar24 = (undefined4 *)(*param_8 + iVar23);
            if (puVar21 != puVar24) {
              *puVar24 = *puVar21;
              puVar24[1] = puVar21[1];
              puVar24[2] = puVar21[2];
            }
            puVar21 = (undefined4 *)(*param_8 + iVar23);
            puVar24 = (undefined4 *)FUN_0041d410();
            if (puVar24 != puVar21) {
              *puVar21 = *puVar24;
              puVar21[1] = puVar24[1];
              puVar21[2] = puVar24[2];
            }
            pfVar16 = (float *)(*param_8 + iVar23);
            fVar4 = SQRT(pfVar16[2] * pfVar16[2] + pfVar16[1] * pfVar16[1] + *pfVar16 * *pfVar16);
            if ((float)_DAT_00587c48 <= fVar4) {
              fVar4 = _DAT_00583354 / fVar4;
              *pfVar16 = fVar4 * *pfVar16;
              pfVar16[1] = fVar4 * pfVar16[1];
              pfVar16[2] = fVar4 * pfVar16[2];
            }
            else {
              *pfVar16 = 0.0;
              pfVar16[1] = 1.0;
              pfVar16[2] = 0.0;
            }
            if (((((local_198 == 0) || (uVar2 - 1 < local_198)) || (local_1b0 == 0)) ||
                (local_170[0]._0_4_ < local_1b0)) &&
               (pdVar22 = (double *)(*param_8 + iVar23), local_170 != pdVar22)) {
              *(undefined4 *)pdVar22 = 0;
              *(undefined4 *)((int)pdVar22 + 4) = 0x3f800000;
              *(undefined4 *)(pdVar22 + 1) = 0;
            }
            fVar4 = *(float *)(*param_8 + 4 + iVar23);
            iVar23 = (local_198 + uVar17 & uVar2 - 1) + (int)local_158;
            if (_DAT_00582ad8 < *(float *)(param_5 + iVar23 * 4)) {
              FUN_0041ce80();
              FUN_0041cae0();
              iVar28 = FUN_0042dbb0();
              if (iVar28 != 0) {
                FUN_00412e58(iVar28,"SpawnFoamBubbles");
                iVar25 = iVar23 * 0xc;
                FUN_00412cfc(iVar28,(double)*(float *)(*param_7 + iVar25));
                FUN_00412cfc(iVar28,(double)*(float *)(*param_7 + 4 + iVar25));
                FUN_00412cfc(iVar28,(double)*(float *)(*param_7 + 8 + iVar25));
                FUN_00412cfc(iVar28,(double)*(float *)(param_5 + iVar23 * 4));
                iVar25 = FUN_00412798(iVar28,4,1);
                if (iVar25 == 0) {
                  fVar31 = (float10)FUN_00412c00(iVar28);
                  if ((float10)_DAT_00582ae8 < fVar31) {
                    *(undefined4 *)(param_5 + iVar23 * 4) = 0;
                  }
                  FUN_00412950(iVar28);
                }
              }
            }
            if ((float)fVar30 <= fVar4) {
              fVar4 = *(float *)(param_4 + iVar23 * 4) - local_15c * (float)fVar29;
              *(float *)(param_4 + iVar23 * 4) = fVar4;
              if (fVar4 < _DAT_00582ad8) {
                *(undefined4 *)(param_4 + iVar23 * 4) = 0;
              }
            }
            else {
              fVar4 = ((float)fVar30 - fVar4) * local_140 * (float)fVar29 +
                      *(float *)(param_4 + iVar23 * 4);
              *(float *)(param_4 + iVar23 * 4) = fVar4;
              if (_DAT_00583354 < fVar4) {
                *(undefined4 *)(param_4 + iVar23 * 4) = 0x3f800000;
              }
            }
            local_198 = local_198 + 1;
          } while (local_198 < uVar2);
        }
        puVar21 = (undefined4 *)(*param_8 + local_1b0 * uVar2 * 0xc);
        puVar24 = (undefined4 *)(*param_8 + -0xc + (local_1b0 + 1) * uVar2 * 0xc);
        if (puVar21 != puVar24) {
          *puVar24 = *puVar21;
          puVar24[1] = puVar21[1];
          puVar24[2] = puVar21[2];
        }
        local_1b0 = local_1b0 + 1;
      } while (local_1b0 < uVar3);
    }
    uVar17 = 0;
    local_1a0 = 0;
    if (3 < (int)uVar2) {
      iVar23 = 0;
      local_160 = 3;
      iVar27 = (uVar3 - 1) * uVar2 * 0xc;
      do {
        puVar21 = (undefined4 *)(iVar23 + *param_8);
        puVar24 = (undefined4 *)(*param_8 + iVar27);
        if (puVar21 != puVar24) {
          *puVar24 = *puVar21;
          puVar24[1] = puVar21[1];
          puVar24[2] = puVar21[2];
        }
        puVar21 = (undefined4 *)(iVar23 + 0xc + *param_8);
        puVar24 = (undefined4 *)(iVar27 + 0xc + *param_8);
        if (puVar21 != puVar24) {
          *puVar24 = *puVar21;
          puVar24[1] = puVar21[1];
          puVar24[2] = puVar21[2];
        }
        puVar21 = (undefined4 *)(iVar23 + 0x18 + *param_8);
        puVar24 = (undefined4 *)(iVar27 + 0x18 + *param_8);
        if (puVar21 != puVar24) {
          *puVar24 = *puVar21;
          puVar24[1] = puVar21[1];
          puVar24[2] = puVar21[2];
        }
        puVar21 = (undefined4 *)(iVar23 + 0x24 + *param_8);
        puVar24 = (undefined4 *)(iVar27 + 0x24 + *param_8);
        if (puVar21 != puVar24) {
          *puVar24 = *puVar21;
          puVar24[1] = puVar21[1];
          puVar24[2] = puVar21[2];
        }
        local_160 = local_160 + 4;
        uVar17 = local_1a0 + 4;
        iVar23 = iVar23 + 0x30;
        iVar27 = iVar27 + 0x30;
        local_1a0 = uVar17;
      } while (local_160 < uVar2);
    }
    if (uVar17 < uVar2) {
      iVar23 = uVar17 * 0xc;
      iVar27 = ((uVar3 - 1) * uVar2 + uVar17) * 0xc;
      local_1a0 = uVar2 - uVar17;
      do {
        puVar21 = (undefined4 *)(iVar23 + *param_8);
        puVar24 = (undefined4 *)(*param_8 + iVar27);
        if (puVar21 != puVar24) {
          *puVar24 = *puVar21;
          puVar24[1] = puVar21[1];
          puVar24[2] = puVar21[2];
        }
        iVar23 = iVar23 + 0xc;
        iVar27 = iVar27 + 0xc;
        local_1a0 = local_1a0 + -1;
      } while (local_1a0 != 0);
    }
  }
  local_c = 0xffffffff;
  _eh_vector_destructor_iterator_(&local_f4,0xc,4,FUN_00407150);
  ExceptionList = local_14;
  return;
}




/* Function: FUN_0050b3a0 */

undefined4 FUN_0050b3a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0040e840(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_0050b5b0 */

void __thiscall FUN_0050b5b0(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057f070;
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
      FUN_00507680();
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




/* Function: FUN_0050b860 */

void __thiscall FUN_0050b860(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 8) - iVar4 >> 4;
  }
  if (uVar3 < param_2) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8) - iVar4 >> 4;
    }
    FUN_0050b5b0(*(undefined4 *)(param_1 + 8),param_2 - iVar4,&stack0x00000008);
    return;
  }
  if (((iVar4 != 0) && (iVar1 = *(int *)(param_1 + 8), param_2 < (uint)(iVar1 - iVar4 >> 4))) &&
     (iVar4 = param_2 * 0x10 + iVar4, iVar4 != iVar1)) {
    uVar2 = FUN_00517460(iVar1,iVar1,iVar4,param_2);
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  return;
}




/* Function: FUN_0050b8f0 */

void __thiscall FUN_0050b8f0(char *param_1,uint param_2,uint *param_3,int *param_4,int param_5)

{
  short sVar1;
  short sVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  int local_48;
  ushort *local_44;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f088;
  pvStack_c = ExceptionList;
  iVar12 = *(int *)(param_2 + 4);
  uVar8 = iVar12 - 1;
  uVar5 = *(int *)(param_2 + 8) - 1;
  ExceptionList = &pvStack_c;
  *param_3 = uVar8 * uVar5 * 6;
  if (*param_1 != '\0') {
    pvVar3 = operator_new(uVar8 * uVar5 * 0xc,(nothrow_t *)&DAT_005b6164);
    *param_4 = (int)pvVar3;
  }
  iVar11 = 0;
  param_2 = 0;
  if (uVar5 != 0) {
    do {
      uVar10 = 0;
      if (uVar8 != 0) {
        sVar1 = (short)iVar12;
        do {
          sVar2 = sVar1 * (short)param_2 + (short)uVar10;
          local_5c = CONCAT22(sVar2 + 1,sVar2);
          sVar2 = sVar2 + 1 + sVar1;
          local_58 = CONCAT22(sVar2 + -1,sVar2);
          FUN_005061d0(*param_4 + iVar11 * 2,&local_5c);
          iVar11 = iVar11 + 6;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar8);
      }
      param_2 = param_2 + 1;
    } while (param_2 < uVar5);
  }
  local_38 = 0;
  local_34 = *param_4;
  local_3c = *param_3 / 3;
  local_30 = 0x1010001;
  FUN_005502f0();
  local_4 = 0;
  FUN_00550690(&local_3c);
  FUN_00550ad0(&local_4c);
  FUN_0041ce80("STRIPERRESULT: %d ",local_4c);
  uVar4 = FUN_0041e5b0();
  FUN_0040a410(uVar4);
  uVar8 = *param_3;
  uVar5 = 0;
  *param_3 = 0;
  if (local_4c != 0) {
    do {
      iVar12 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *param_3 = *param_3 + *(int *)(local_48 + iVar12);
    } while (uVar5 < local_4c);
  }
  FUN_0041ce80("indexcount: %d (unstipped %d)",*param_3,uVar8);
  uVar4 = FUN_0041e5b0();
  FUN_0040a410(uVar4);
  if (*param_1 != '\0') {
    operator_delete__((void *)*param_4);
    puVar6 = operator_new(*param_3 * 2,(nothrow_t *)&DAT_005b6164);
    *param_4 = (int)puVar6;
    uVar8 = *param_3;
    puVar9 = local_44;
    for (uVar5 = uVar8 * 2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = *(undefined4 *)puVar9;
      puVar9 = puVar9 + 2;
      puVar6 = puVar6 + 1;
    }
    for (uVar8 = uVar8 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar6 = (char)*puVar9;
      puVar9 = (ushort *)((int)puVar9 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  FUN_0050b860(0,local_3c,local_38,local_34,local_30);
  uVar8 = 0;
  param_4 = (int *)0x0;
  puVar9 = local_44;
  if (local_4c != 0) {
    do {
      uVar5 = 0xffffffff;
      iVar12 = *(int *)(local_48 + (int)param_4 * 4);
      local_54 = uVar8 & 0xffff;
      uVar10 = 0;
      local_50 = iVar12 + -2;
      local_5c = 0xffffffff;
      if (iVar12 != 0) {
        uVar8 = uVar8 + iVar12;
        do {
          uVar7 = (uint)*puVar9;
          if (uVar7 < uVar5) {
            uVar5 = uVar7;
          }
          if (uVar10 < uVar7) {
            uVar10 = uVar7;
          }
          puVar9 = puVar9 + 1;
          iVar12 = iVar12 + -1;
          local_5c = uVar5;
        } while (iVar12 != 0);
      }
      iVar12 = *(int *)(param_5 + 4);
      local_58 = uVar10 + (1 - local_5c);
      if ((iVar12 == 0) ||
         ((uint)(*(int *)(param_5 + 0xc) - iVar12 >> 4) <=
          (uint)(*(int *)(param_5 + 8) - iVar12 >> 4))) {
        FUN_0050b5b0(*(undefined4 *)(param_5 + 8),1,&local_5c);
      }
      else {
        iVar12 = *(int *)(param_5 + 8);
        FUN_0040ea80(iVar12,1,&local_5c,param_5,param_4);
        *(int *)(param_5 + 8) = iVar12 + 0x10;
      }
      param_4 = (int *)((int)param_4 + 1);
    } while (param_4 < local_4c);
  }
  local_4 = 0xffffffff;
  FUN_00550ac0();
  ExceptionList = pvStack_c;
  return;
}




/* Function: FUN_0050bc30 */

void FUN_0050bc30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,int param_10,int param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18)

{
  FUN_0050a0c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_13,
               param_14,param_15,param_16,param_17,param_18);
  if ((param_11 != 0) && (param_10 != 0)) {
    FUN_0050b8f0(param_1,param_10,param_11,param_12);
  }
  return;
}




/* Function: FUN_0050f170 */

undefined4 * __thiscall FUN_0050f170(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_005913f0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = param_2;
  param_1[0x25] = param_3;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0x43960000;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  puVar2 = param_1 + 0x44;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* Function: FUN_0050f290 */

void __fastcall FUN_0050f290(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_LAB_005913f0;
  FUN_00506330();
  pvVar1 = (void *)param_1[0x38];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0xc,*(int *)((int)pvVar1 + -4),FUN_00407150);
    operator_delete__((void *)((int)pvVar1 + -4));
  }
  pvVar1 = (void *)param_1[0x3b];
  param_1[0x38] = 0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0xc,*(int *)((int)pvVar1 + -4),FUN_00407150);
    operator_delete__((void *)((int)pvVar1 + -4));
  }
  param_1[0x3b] = 0;
  operator_delete__((void *)param_1[0x3d]);
  pvVar1 = (void *)param_1[0x36];
  param_1[0x3d] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00506ef0();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  param_1[0x36] = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_1[0x37]);
}




/* Function: FUN_0050f440 */

void * __thiscall FUN_0050f440(void *param_1,byte param_2)

{
  FUN_0050f290();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0050f460 */

void FUN_0050f460(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)pcVar2 - (int)(param_1 + 1);
  do {
    iVar3 = iVar3 + -1;
    iVar4 = iVar3;
    if (iVar3 < 0) break;
  } while (param_1[iVar3] != '.');
  for (; ((-1 < iVar4 && (param_1[iVar4] != '\\')) && (param_1[iVar4] != '/')); iVar4 = iVar4 + -1)
  {
  }
  iVar4 = iVar4 + 1;
  if (iVar4 <= iVar3) {
    uVar6 = iVar3 - iVar4;
    pcVar2 = param_1 + iVar4;
    pcVar7 = param_2;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    param_2[uVar6] = '\0';
    return;
  }
  iVar3 = (int)param_2 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar3] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}




/* Function: FUN_0050f4e0 */

undefined4 FUN_0050f4e0(undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *unaff_ESI;
  int *piVar4;
  undefined4 uVar5;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_0057f0d2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0041c940();
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  pvVar2 = operator_new(0xf0,(nothrow_t *)&DAT_005b6164);
  piVar4 = (int *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    piVar4 = (int *)FUN_00543f30();
  }
  iVar1 = *piVar4;
  local_4 = 0xffffffff;
  uVar3 = FUN_0041c940();
  (**(code **)(iVar1 + 0x1c))(param_1,uVar3);
  uVar5 = 1;
  uVar3 = FUN_0041c940(1);
  FUN_00423250(piVar4,uVar3,uVar5);
  FUN_0041c940(param_1);
  FUN_0042a4f0(param_1);
  ExceptionList = unaff_ESI;
  return 1;
}




/* Function: FUN_0050f5a0 */

void __fastcall FUN_0050f5a0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0050f5a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4));
  return;
}




/* Function: FUN_0050f5b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0050f5b0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar1 = *param_1;
  fVar2 = param_1[2];
  fVar3 = _DAT_00583354 / SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  fVar1 = fVar3 * fVar1;
  fVar2 = fVar2 * fVar3;
  if (ABS(fVar2) <= ABS(fVar1)) {
    fVar4 = (float10)fpatan((float10)fVar2 / (float10)fVar1,(float10)1);
    fVar4 = -fVar4 - (float10)_DAT_00588838;
    if (_DAT_00582ad8 < fVar1) {
      fVar4 = fVar4 + (float10)_DAT_00589ee8;
    }
  }
  else {
    fVar4 = (float10)fpatan((float10)fVar1 / (float10)fVar2,(float10)1);
    if (fVar2 < _DAT_00582ad8) {
      return fVar4 + (float10)_DAT_00589ee8;
    }
  }
  return fVar4;
}




/* Function: FUN_0050fa00 */

void __thiscall FUN_0050fa00(int param_1,undefined4 param_2)

{
  void *pvVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar4 = FUN_0041c940();
  piVar6 = *(int **)(param_1 + 0xa4);
  if (piVar6 == *(int **)(param_1 + 0xa8)) {
    return;
  }
  while ((((undefined4 *)*piVar6)[9] != iVar4 ||
         (cVar3 = (*(code *)**(undefined4 **)*piVar6)(param_2), cVar3 != '\0'))) {
    piVar6 = piVar6 + 1;
    if (piVar6 == *(int **)(param_1 + 0xa8)) {
      return;
    }
  }
  pvVar1 = (void *)*piVar6;
  if (pvVar1 == (void *)0x0) {
    piVar2 = *(int **)(param_1 + 0xa8);
    piVar5 = piVar6 + 1;
    if (piVar5 != piVar2) {
      iVar4 = (int)piVar6 - (int)piVar5;
      do {
        *(int *)(iVar4 + (int)piVar5) = *piVar5;
        piVar5 = piVar5 + 1;
      } while (piVar5 != piVar2);
    }
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -4;
    return;
  }
  FUN_0050f5a0();
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar1);
}




/* Function: FUN_0050fa90 */

undefined4 FUN_0050fa90(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041c940();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0050fa00(param_1);
  return 1;
}




/* Function: FUN_0050fac0 */

undefined4 * __fastcall FUN_0050fac0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057f176;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_005914e0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0050fb30 */

void __fastcall FUN_0050fb30(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057f188;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_005914e0;
  local_4 = 0;
  if ((void *)param_1[0x29] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x29]);
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_00409200();
  local_4 = 0xffffffff;
  *param_1 = &PTR_LAB_00583740;
  FUN_004f79d0();
  FUN_0040cf00();
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4));
  ExceptionList = pvStack_c;
  return;
}




/* Function: FUN_0050fbd0 */

void * __thiscall FUN_0050fbd0(void *param_1,byte param_2)

{
  FUN_0050fb30();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0050fbf0 */

void __fastcall FUN_0050fbf0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_005915c0;
  return;
}




/* Function: FUN_0050fc00 */

void __fastcall FUN_0050fc00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_005915c0;
  return;
}




/* Function: FUN_0050fc10 */

undefined4 __fastcall FUN_0050fc10(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x54);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return 1;
}




/* Function: FUN_00510100 */

undefined4 __fastcall FUN_00510100(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x54) + 0xc))(*(int **)(param_1 + 0x54),0);
  return *(undefined4 *)(param_1 + 0x50);
}




/* Function: FUN_00510120 */

void __fastcall FUN_00510120(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_005915e0;
  operator_delete__((void *)param_1[2]);
  operator_delete__((void *)param_1[4]);
  FUN_0050fc00();
  return;
}




/* Function: FUN_00510150 */

undefined4 __fastcall FUN_00510150(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return 1;
}




/* Function: FUN_00510460 */

undefined4 __fastcall FUN_00510460(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xc))(*(int **)(param_1 + 0x1c),0);
  return *(undefined4 *)(param_1 + 0x18);
}




/* Function: FUN_00510480 */

int __fastcall FUN_00510480(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x54;
}




/* Function: FUN_005104b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005104b0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar4 = param_2;
  param_2 = (float *)(param_3[3] * param_2[3] +
                     param_2[1] * param_3[1] + param_2[2] * param_3[2] + *param_2 * *param_3);
  if (_DAT_00582ad8 <= (float)param_2) {
    local_4 = *param_3;
    local_8 = param_3[1];
    local_c = param_3[2];
    local_10 = param_3[3];
  }
  else {
    param_2 = (float *)-(float)param_2;
    local_4 = -*param_3;
    local_8 = -param_3[1];
    local_c = -param_3[2];
    local_10 = -param_3[3];
  }
  if (_DAT_00583354 - (float)param_2 <= (float)_DAT_00587c48) {
    fVar7 = (float10)_DAT_00583354 - (float10)param_4;
    fVar5 = (float10)param_4;
  }
  else {
    fVar5 = (float10)_CIacos();
    fVar6 = (float10)fsin(fVar5);
    fVar7 = (float10)fsin(((float10)_DAT_00583354 - (float10)param_4) * (float10)(float)fVar5);
    fVar7 = fVar7 * (float10)(float)((float10)_DAT_00583354 / fVar6);
    fVar5 = (float10)fsin((float10)(float)fVar5 * (float10)param_4);
    fVar5 = fVar5 * (float10)(float)((float10)_DAT_00583354 / fVar6);
  }
  fVar1 = pfVar4[3];
  fVar2 = pfVar4[1];
  fVar3 = *pfVar4;
  param_1[2] = (float)(fVar5 * (float10)local_c + fVar7 * (float10)pfVar4[2]);
  param_1[1] = (float)(fVar5 * (float10)local_8 + fVar7 * (float10)fVar2);
  param_1[3] = (float)(fVar7 * (float10)fVar1 + (float10)local_10 * fVar5);
  *param_1 = (float)(fVar5 * (float10)local_4 + fVar7 * (float10)fVar3);
  return;
}




/* Function: FUN_00510600 */

void FUN_00510600(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[2];
  fVar2 = param_2[2];
  fVar3 = param_2[2];
  fVar4 = param_3[1];
  fVar5 = param_2[1];
  fVar6 = param_2[1];
  *param_1 = (*param_3 - *param_2) * param_4 + *param_2;
  param_1[1] = (fVar4 - fVar5) * param_4 + fVar6;
  param_1[2] = (fVar1 - fVar2) * param_4 + fVar3;
  return;
}




/* Function: FUN_00510640 */

void FUN_00510640(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2[3];
  fVar2 = param_3[3];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  fVar5 = param_2[1];
  fVar6 = param_3[1];
  *param_1 = *param_2 + *param_3;
  param_1[1] = fVar5 + fVar6;
  param_1[2] = fVar3 + fVar4;
  param_1[3] = fVar1 + fVar2;
  return;
}




/* Function: FUN_00510670 */

void FUN_00510670(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2[3];
  fVar2 = param_3[3];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  fVar5 = param_2[1];
  fVar6 = param_3[1];
  *param_1 = *param_2 - *param_3;
  param_1[1] = fVar5 - fVar6;
  param_1[2] = fVar3 - fVar4;
  param_1[3] = fVar1 - fVar2;
  return;
}




/* Function: FUN_005106a0 */

void FUN_005106a0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[3];
  fVar2 = param_2[2];
  fVar3 = param_2[1];
  *param_1 = param_3 * *param_2;
  param_1[1] = param_3 * fVar3;
  param_1[2] = param_3 * fVar2;
  param_1[3] = param_3 * fVar1;
  return;
}




/* Function: FUN_005106d0 */

undefined4 FUN_005106d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_005106a0(param_1,param_3,param_2);
  return param_1;
}




/* Function: FUN_005106f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005106f0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_3 = _DAT_00583354 / param_3;
  fVar1 = param_2[3];
  fVar2 = param_2[2];
  fVar3 = param_2[1];
  *param_1 = param_3 * *param_2;
  param_1[1] = param_3 * fVar3;
  param_1[2] = param_3 * fVar2;
  param_1[3] = param_3 * fVar1;
  return;
}




/* Function: FUN_00510730 */

undefined4 * __thiscall FUN_00510730(undefined4 *param_1,undefined4 *param_2)

{
  _eh_vector_constructor_iterator_(param_1,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  if (param_2 != param_1) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  if (param_2 + 3 != param_1 + 3) {
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  if (param_2 + 6 != param_1 + 6) {
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
  }
  return param_1;
}




/* Function: FUN_005107a0 */

float * __thiscall FUN_005107a0(float *param_1,float *param_2)

{
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00510730(param_1);
  if (param_2 != param_1) {
    *param_1 = local_1c * param_2[6] + local_20 * param_2[3] + local_24 * *param_2;
    param_1[1] = local_1c * param_2[7] + local_20 * param_2[4] + local_24 * param_2[1];
    param_1[2] = local_1c * param_2[8] + local_20 * param_2[5] + local_24 * param_2[2];
    param_1[3] = local_10 * param_2[6] + local_14 * param_2[3] + local_18 * *param_2;
    param_1[4] = local_10 * param_2[7] + local_14 * param_2[4] + local_18 * param_2[1];
    param_1[5] = local_10 * param_2[8] + local_14 * param_2[5] + local_18 * param_2[2];
    param_1[6] = local_4 * param_2[6] + local_8 * param_2[3] + local_c * *param_2;
    param_1[7] = local_4 * param_2[7] + local_8 * param_2[4] + local_c * param_2[1];
    param_1[8] = local_4 * param_2[8] + local_8 * param_2[5] + local_c * param_2[2];
    FUN_0043a0c0();
    return param_1;
  }
  *param_1 = local_24 * local_24 + local_18 * local_20 + local_c * local_1c;
  param_1[1] = local_8 * local_1c + local_20 * (local_14 + local_24);
  param_1[2] = local_10 * local_20 + (local_4 + local_24) * local_1c;
  param_1[3] = local_c * local_10 + (local_14 + local_24) * local_18;
  param_1[4] = local_14 * local_14 + local_8 * local_10 + local_18 * local_20;
  param_1[5] = local_18 * local_1c + local_10 * (local_4 + local_14);
  param_1[6] = local_8 * local_18 + (local_4 + local_24) * local_c;
  param_1[7] = local_c * local_20 + (local_4 + local_14) * local_8;
  param_1[8] = local_4 * local_4 + local_8 * local_10 + local_c * local_1c;
  FUN_0043a0c0();
  return param_1;
}




/* Function: FUN_005109c0 */

void __thiscall
FUN_005109c0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = param_5;
  param_1[6] = param_6;
  return;
}




/* Function: FUN_00510a00 */

void * __thiscall FUN_00510a00(void *param_1,byte param_2)

{
  FUN_0050fc00();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00510a20 */

void __fastcall FUN_00510a20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_005915d0;
  FUN_0050fc10();
  operator_delete__((void *)param_1[2]);
  param_1[2] = 0;
  operator_delete__((void *)param_1[4]);
  param_1[4] = 0;
  operator_delete__((void *)param_1[7]);
  param_1[7] = 0;
  operator_delete__((void *)param_1[10]);
  param_1[10] = 0;
  operator_delete__((void *)param_1[0xc]);
  param_1[0xc] = 0;
  operator_delete__((void *)param_1[0xe]);
  param_1[0xe] = 0;
  operator_delete__((void *)param_1[0x10]);
  param_1[0x10] = 0;
  operator_delete__((void *)param_1[0x12]);
  param_1[0x12] = 0;
  FUN_0050fc00();
  return;
}




/* Function: FUN_00510aa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00510aa0(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST0;
  
  FUN_0050fbf0();
  *param_1 = &PTR_FUN_005915e0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[1] = 10;
  uVar1 = thunk_FUN_00493c27(0xa0);
  uVar7 = 0;
  param_1[2] = uVar1;
  uVar6 = 0;
  do {
    fVar9 = (float10)uVar7;
    *(undefined4 *)(uVar6 + 0x10 + param_1[2]) = 0;
    fVar10 = (float10)fcos((float10)_DAT_005b9004 * fVar9 * (float10)_DAT_005915b4 *
                           (float10)_DAT_005915f4);
    *(float *)(uVar6 + 0x14 + param_1[2]) =
         (float)(fVar10 * fVar9 * (float10)_DAT_005915b0 * (float10)_DAT_00587c8c);
    fVar10 = (float10)fsin((float10)_DAT_005b9004 * fVar9 * (float10)_DAT_005915b4 *
                           (float10)_DAT_005915f4);
    *(float *)(uVar6 + 0x18 + param_1[2]) =
         (float)(fVar10 * fVar9 * (float10)_DAT_005915b0 * (float10)_DAT_00587c8c);
    uVar2 = FUN_004cf110();
    iVar3 = FUN_004cf110();
    uVar4 = FUN_004cf110();
    uVar5 = FUN_004cf110();
    *(uint *)(uVar6 + 0x1c + param_1[2]) =
         ((uVar2 & 0xff | iVar3 << 8) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
    *(float *)(uVar6 + param_1[2]) =
         ((float *)(uVar6 + param_1[2]))[4] - _DAT_005915b8 * (float)(3 - uVar7) * _DAT_0058af88;
    *(undefined4 *)(param_1[2] + uVar6 + 4) = *(undefined4 *)(param_1[2] + uVar6 + 0x14);
    *(float *)(uVar6 + param_1[2] + 8) =
         *(float *)(uVar6 + param_1[2] + 0x18) - _DAT_005915b8 * (float)(3 - uVar7) * _DAT_005915f0;
    uVar2 = FUN_004cf110();
    iVar3 = FUN_004cf110();
    uVar4 = FUN_004cf110();
    uVar5 = FUN_004cf110();
    *(uint *)(uVar6 + 0xc + param_1[2]) =
         ((uVar2 & 0xff | iVar3 << 8) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
    *(float *)(uVar6 + param_1[2] + 0x20) =
         (float)((float10)_DAT_005915b8 * extraout_ST0 * (float10)_DAT_0058af88 +
                (float10)*(float *)(uVar6 + param_1[2] + 0x10));
    *(undefined4 *)(uVar6 + param_1[2] + 0x24) = *(undefined4 *)(uVar6 + 0x14 + param_1[2]);
    *(float *)(uVar6 + param_1[2] + 0x28) =
         (float)((float10)*(float *)(uVar6 + param_1[2] + 0x18) -
                extraout_ST0 * (float10)_DAT_005915b8 * (float10)_DAT_005915f0);
    uVar2 = FUN_004cf110();
    iVar3 = FUN_004cf110();
    uVar4 = FUN_004cf110();
    uVar5 = FUN_004cf110();
    uVar8 = uVar6 + 0x30;
    uVar7 = uVar7 + 1;
    *(uint *)(uVar6 + 0x2c + param_1[2]) =
         ((uVar2 & 0xff | iVar3 << 8) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
    uVar6 = uVar8;
  } while (uVar8 < 0x90);
  *(undefined4 *)(param_1[1] * 0x10 + -0x10 + param_1[2]) = 0;
  fVar9 = (float10)fcos((float10)_DAT_005b9004 * (float10)_DAT_005915b4 * (float10)_DAT_00587fb8);
  *(float *)(param_1[1] * 0x10 + -0xc + param_1[2]) = (float)(fVar9 * (float10)_DAT_005915b0);
  fVar9 = (float10)fsin((float10)_DAT_005b9004 * (float10)_DAT_005915b4 * (float10)_DAT_00587fb8);
  *(float *)(param_1[1] * 0x10 + -8 + param_1[2]) = (float)(fVar9 * (float10)_DAT_005915b0);
  uVar6 = FUN_004cf110();
  iVar3 = FUN_004cf110();
  uVar7 = FUN_004cf110();
  uVar2 = FUN_004cf110();
  *(uint *)(param_1[1] * 0x10 + -4 + param_1[2]) =
       ((uVar6 & 0xff | iVar3 << 8) << 8 | uVar7 & 0xff) << 8 | uVar2 & 0xff;
  param_1[3] = 10;
  uVar1 = thunk_FUN_00493c27(0x78);
  param_1[4] = uVar1;
  iVar3 = 0;
  uVar6 = 1;
  do {
    *(uint *)(iVar3 + param_1[4]) = uVar6 - 1;
    *(uint *)(param_1[4] + 4 + iVar3) = uVar6;
    *(uint *)(param_1[4] + 8 + iVar3) = uVar6 + 2;
    *(uint *)(param_1[4] + 0xc + iVar3) = uVar6 + 2;
    *(uint *)(param_1[4] + 0x10 + iVar3) = uVar6;
    uVar7 = uVar6 + 3;
    *(uint *)(param_1[4] + 0x14 + iVar3) = uVar7;
    *(uint *)(param_1[4] + 0x18 + iVar3) = uVar6;
    *(uint *)(param_1[4] + 0x1c + iVar3) = uVar6 + 1;
    *(uint *)(param_1[4] + 0x20 + iVar3) = uVar7;
    *(uint *)(param_1[4] + 0x24 + iVar3) = uVar7;
    *(uint *)(param_1[4] + 0x28 + iVar3) = uVar6 + 1;
    *(uint *)(param_1[4] + 0x2c + iVar3) = uVar6 + 4;
    iVar3 = iVar3 + 0x30;
    uVar6 = uVar7;
  } while (uVar7 < 7);
  *(int *)(param_1[4] + (param_1[3] + -2) * 0xc) = param_1[1] + -1;
  *(int *)(param_1[4] + -0x14 + param_1[3] * 0xc) = param_1[1] + -4;
  *(int *)(param_1[4] + -0x10 + param_1[3] * 0xc) = param_1[1] + -3;
  *(int *)(param_1[4] + -0xc + param_1[3] * 0xc) = param_1[1] + -1;
  *(int *)(param_1[4] + -8 + param_1[3] * 0xc) = param_1[1] + -2;
  *(int *)(param_1[4] + -4 + param_1[3] * 0xc) = param_1[1] + -3;
  return param_1;
}




/* Function: FUN_00510f10 */

void * __thiscall FUN_00510f10(void *param_1,byte param_2)

{
  FUN_00510120();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00510f30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00510f30(int param_1,float *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *in_EAX;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  pfVar3 = (float *)((uint)*in_EAX * 0x20 + *(int *)(param_1 + 8));
  local_24 = *pfVar3 - pfVar3[8];
  local_20 = pfVar3[1] - pfVar3[9];
  local_1c = pfVar3[2] - pfVar3[10];
  local_30 = *(float *)((*in_EAX + 2) * 0x20 + *(int *)(param_1 + 8)) - pfVar3[8];
  puVar7 = &local_18;
  local_2c = pfVar3[0x11] - pfVar3[9];
  local_28 = pfVar3[0x12] - pfVar3[10];
  FUN_0041d5e0(local_c,&local_24,&local_30,puVar7);
  pfVar3 = (float *)FUN_0041d510(puVar7);
  if (pfVar3 != param_2) {
    *param_2 = *pfVar3;
    param_2[1] = pfVar3[1];
    param_2[2] = pfVar3[2];
  }
  iVar4 = 0;
  uVar6 = (uint)in_EAX[1];
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  if (uVar6 != 0) {
    iVar2 = *(int *)(param_1 + 8);
    uVar1 = *in_EAX;
    puVar7 = (undefined4 *)((uint)uVar1 * 0x20 + 8 + iVar2);
    do {
      iVar4 = iVar4 + 1;
      iVar5 = (iVar4 % (int)uVar6 + (uint)uVar1) * 0x20;
      local_20 = *(float *)(iVar5 + 4 + iVar2);
      pfVar3 = (float *)(iVar5 + iVar2);
      local_18 = puVar7[-2];
      local_24 = *pfVar3;
      local_1c = pfVar3[2];
      local_10 = *puVar7;
      local_14 = puVar7[-1];
      pfVar3 = (float *)FUN_0041d5e0(local_c,&local_18,&local_24);
      local_30 = local_30 + *pfVar3;
      puVar7 = puVar7 + 8;
      local_2c = local_2c + pfVar3[1];
      local_28 = local_28 + pfVar3[2];
    } while (iVar4 < (int)uVar6);
  }
  return ABS(((float10)local_30 * (float10)*param_2 +
             (float10)local_2c * (float10)param_2[1] + (float10)local_28 * (float10)param_2[2]) *
             (float10)_DAT_00583340);
}




/* Function: FUN_005110b0 */

void FUN_005110b0(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f1b2;
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




/* Function: FUN_00511130 */

void FUN_00511130(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    if (param_1 != param_3) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_3[3] = param_1[3];
    param_3[4] = param_1[4];
    param_3[5] = param_1[5];
    param_3[6] = param_1[6];
    param_3 = param_3 + 7;
  }
  return;
}




/* Function: FUN_00511180 */

void FUN_00511180(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  while (param_2 != param_3) {
    puVar1 = param_3 + -7;
    puVar2 = param_4 + -7;
    if (puVar1 != puVar2) {
      *puVar2 = *puVar1;
      param_4[-6] = param_3[-6];
      param_4[-5] = param_3[-5];
    }
    param_4[-4] = param_3[-4];
    param_4[-3] = param_3[-3];
    param_4[-2] = param_3[-2];
    param_4[-1] = param_3[-1];
    param_3 = puVar1;
    param_4 = puVar2;
  }
  *param_1 = param_4;
  return;
}




/* Function: FUN_005111d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_005111d0(undefined4 *param_1)

{
  float fVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  float10 fVar17;
  float10 fVar18;
  undefined4 *local_260;
  uint local_25c;
  uint local_258;
  int local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  undefined4 *local_220;
  undefined4 uStack_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  uint local_200;
  undefined4 uStack_1fc;
  undefined4 *local_1f8;
  undefined4 uStack_1f4;
  undefined4 *local_1f0;
  undefined4 uStack_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  undefined1 local_1dc [16];
  undefined4 local_1cc [3];
  undefined1 local_1c0 [4];
  undefined4 local_1bc [5];
  undefined1 local_1a8 [12];
  undefined1 local_19c [16];
  undefined1 local_18c [16];
  undefined1 local_17c [16];
  undefined1 local_16c [12];
  undefined1 local_160 [12];
  undefined1 local_154 [12];
  undefined1 local_148 [64];
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  undefined1 local_48 [68];
  
  FUN_0050fbf0();
  *param_1 = &PTR_FUN_005915d0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  _eh_vector_constructor_iterator_
            (local_1cc,0xc,4,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  local_1cc[0] = 0;
  local_1cc[1] = 0;
  local_1cc[2] = 0;
  local_208 = 1.0;
  puVar11 = local_1bc;
  local_260 = (undefined4 *)0x3;
  do {
    iVar5 = rand();
    local_20c = ((float)iVar5 * _DAT_0059160c - _DAT_00583354) * _DAT_00588b48;
    iVar5 = rand();
    local_204 = ((float)iVar5 * _DAT_0059160c - _DAT_00583354) * _DAT_00588b48;
    FUN_0041d510(&local_250);
    uVar6 = FUN_0041d5b0(&local_1e8,&local_250,DAT_00591574,0x40800000);
    uVar6 = FUN_0043fa40(&local_218,uVar6);
    puVar7 = (undefined4 *)FUN_0041d550(&local_238,puVar11 + -4,uVar6);
    if (puVar7 != puVar11 + -1) {
      puVar11[-1] = *puVar7;
      *puVar11 = puVar7[1];
      puVar11[1] = puVar7[2];
    }
    puVar11 = puVar11 + 3;
    local_260 = (undefined4 *)((int)local_260 + -1);
  } while (local_260 != (undefined4 *)0x0);
  param_1[1] = 0xc;
  uVar6 = thunk_FUN_00493c27(0xc0);
  local_260 = local_1cc;
  param_1[2] = uVar6;
  local_220 = (undefined4 *)0x0;
  local_208 = 0.0;
  uVar15 = 0;
  do {
    uVar16 = 0;
    uStack_1f4 = 0;
    local_1f8 = local_220;
    uVar2 = ZEXT48(local_220);
    fVar3 = (_DAT_0059157c - _DAT_00591578) * (float)uVar2 * _DAT_00587c8c + _DAT_00591578;
    uVar6 = FUN_00510670(local_19c,&DAT_005b2614,&DAT_005b2604,0x40400000);
    uVar6 = FUN_005106d0(local_17c,(float)uVar2,uVar6);
    uVar6 = FUN_005106f0(local_18c,uVar6);
    FUN_00510640(local_1dc,&DAT_005b2604,uVar6);
    uVar8 = FUN_004cf110();
    iVar5 = FUN_004cf110();
    uVar9 = FUN_004cf110();
    uVar10 = FUN_004cf110();
    do {
      uStack_1ec = 0;
      fVar17 = (float10)uVar16 * (float10)_DAT_005b9004 * (float10)_DAT_0058b0c8;
      fVar18 = (float10)fcos(fVar17);
      local_20c = (float)fVar18;
      fVar17 = (float10)fsin(fVar17);
      local_204 = (float)fVar17;
      local_1f0 = (undefined4 *)uVar16;
      uVar6 = FUN_00434a40(&local_250,fVar3,&local_20c);
      puVar11 = (undefined4 *)FUN_0041d550(&local_1e8,local_260,uVar6);
      puVar7 = (undefined4 *)(param_1[2] + uVar15);
      uVar16 = uVar16 + 1;
      uVar15 = uVar15 + 0x10;
      *puVar7 = *puVar11;
      puVar7[1] = puVar11[1];
      puVar7[2] = puVar11[2];
      *(uint *)(param_1[2] + -4 + uVar15) =
           ((uVar8 & 0xff | iVar5 << 8) << 8 | uVar9 & 0xff) << 8 | uVar10 & 0xff;
    } while (uVar16 < 3);
    local_220 = (undefined4 *)((int)local_220 + 1);
    local_260 = local_260 + 3;
  } while (uVar15 < 0xc0);
  param_1[3] = 0x12;
  uVar6 = thunk_FUN_00493c27(0xd8);
  param_1[4] = uVar6;
  local_260 = (undefined4 *)0x0;
  uVar15 = 0;
  do {
    uVar9 = 1;
    local_254 = 3;
    uVar8 = uVar15;
    iVar5 = (int)local_260 + 3;
    do {
      uVar15 = uVar8 + 0x18;
      iVar12 = (int)local_260 + uVar9 % 3;
      uVar9 = uVar9 + 1;
      *(int *)(uVar8 + param_1[4]) = iVar12;
      *(int *)(uVar8 + 4 + param_1[4]) = iVar5 + -3;
      *(int *)(param_1[4] + -0x10 + uVar15) = iVar5;
      *(int *)(uVar8 + 0xc + param_1[4]) = iVar12 + 3;
      *(int *)(param_1[4] + -8 + uVar15) = iVar12;
      *(int *)(param_1[4] + -4 + uVar15) = iVar5;
      iVar5 = iVar5 + 1;
      local_254 = local_254 + -1;
      uVar8 = uVar15;
    } while (local_254 != 0);
    local_260 = (undefined4 *)((int)local_260 + 3);
  } while (uVar15 < 0xd8);
  param_1[5] = 6;
  param_1[6] = 0x12;
  uVar6 = thunk_FUN_00493c27(0x120);
  iVar5 = 0;
  param_1[7] = uVar6;
  local_1e4 = 0.0;
  local_1f0 = (undefined4 *)FUN_0041d350();
  local_258 = 0x10;
  do {
    uVar15 = rand();
    iVar12 = rand();
    fVar3 = (float)iVar12 * _DAT_00588d4c;
    uVar6 = FUN_0041d580(local_16c,local_1c0 + (uVar15 & 1) * 0xc,local_1cc + (uVar15 & 1) * 3);
    uVar6 = FUN_00434a40(local_154,fVar3,uVar6);
    FUN_0041d550(&local_20c,local_1cc + (uVar15 & 1) * 3,uVar6);
    fVar3 = ((_DAT_00591594 - _DAT_00591590) / DAT_00591574) * local_208 + _DAT_00591590;
    local_220 = (undefined4 *)(fVar3 * _DAT_0058a2f4);
    iVar12 = rand();
    local_1e8 = (float)iVar12 * _DAT_0059160c - _DAT_00583354;
    iVar12 = rand();
    local_1e0 = (float)iVar12 * _DAT_0059160c - _DAT_00583354;
    FUN_0041d510(&local_218);
    iVar12 = rand();
    local_214 = (float)iVar12 * _DAT_00591608 + _DAT_00590fcc;
    fVar1 = SQRT(local_218 * local_218 + local_214 * local_214 + local_210 * local_210);
    if ((float)_DAT_00587c48 <= fVar1) {
      fVar1 = _DAT_00583354 / fVar1;
      local_218 = local_218 * fVar1;
      local_214 = local_214 * fVar1;
      local_210 = local_210 * fVar1;
    }
    else {
      local_218 = 0.0;
      local_214 = 1.0;
      local_210 = 0.0;
    }
    uVar6 = FUN_00549210(local_108,_DAT_005b9004 * _DAT_00591604);
    FUN_00548964(&local_244,&local_218,uVar6);
    FUN_0043a0c0();
    fVar1 = SQRT(local_244 * local_244 + local_240 * local_240 + local_23c * local_23c);
    if ((float)_DAT_00587c48 <= fVar1) {
      fVar1 = _DAT_00583354 / fVar1;
      local_244 = local_244 * fVar1;
      local_240 = local_240 * fVar1;
      local_23c = local_23c * fVar1;
    }
    else {
      local_244 = 0.0;
      local_240 = 1.0;
      local_23c = 0.0;
    }
    uVar6 = FUN_00549210(local_148,_DAT_005b9004 * _DAT_00591600);
    FUN_00548964(&local_22c,&local_218,uVar6);
    FUN_0043a0c0();
    fVar1 = SQRT(local_22c * local_22c + local_228 * local_228 + local_224 * local_224);
    if ((float)_DAT_00587c48 <= fVar1) {
      fVar1 = _DAT_00583354 / fVar1;
      local_22c = local_22c * fVar1;
      local_228 = local_228 * fVar1;
      local_224 = local_224 * fVar1;
    }
    else {
      local_22c = 0.0;
      local_228 = 1.0;
      local_224 = 0.0;
    }
    puVar11 = (undefined4 *)(param_1[5] * iVar5 * 0x10 + param_1[7]);
    *puVar11 = *local_1f0;
    puVar11[1] = local_1f0[1];
    puVar11[2] = local_1f0[2];
    uVar15 = FUN_004cf110();
    iVar12 = FUN_004cf110();
    uVar8 = FUN_004cf110();
    uVar9 = FUN_004cf110();
    fVar1 = fVar3 - (float)local_220;
    *(uint *)(param_1[5] * iVar5 * 0x10 + 0xc + param_1[7]) =
         ((uVar15 & 0xff | iVar12 << 8) << 8 | uVar8 & 0xff) << 8 | uVar9 & 0xff;
    uVar6 = FUN_0041d5b0(local_160,&local_22c,fVar1);
    puVar11 = (undefined4 *)FUN_0041d550(local_18c,&local_20c,uVar6);
    puVar7 = (undefined4 *)((param_1[5] * iVar5 + 1) * 0x10 + param_1[7]);
    *puVar7 = *puVar11;
    puVar7[1] = puVar11[1];
    puVar7[2] = puVar11[2];
    uVar15 = FUN_004cf110();
    iVar12 = FUN_004cf110();
    uVar8 = FUN_004cf110();
    uVar9 = FUN_004cf110();
    *(uint *)(param_1[5] * iVar5 * 0x10 + 0x1c + param_1[7]) =
         ((uVar15 & 0xff | iVar12 << 8) << 8 | uVar8 & 0xff) << 8 | uVar9 & 0xff;
    uVar15 = 2;
    if (2 < param_1[5] - 1) {
      local_1f8 = (undefined4 *)FUN_0041d350();
      do {
        uVar8 = uVar15 - 1;
        uStack_1fc = 0;
        local_200 = uVar8;
        FUN_00510600(&local_238,&local_22c,&local_244,(float)uVar8 * _DAT_0058a2f4);
        fVar4 = SQRT(local_238 * local_238 + local_234 * local_234 + local_230 * local_230);
        if ((float)_DAT_00587c48 <= fVar4) {
          fVar4 = _DAT_00583354 / fVar4;
          local_238 = local_238 * fVar4;
          local_234 = local_234 * fVar4;
          local_230 = local_230 * fVar4;
        }
        else {
          local_238 = 0.0;
          local_234 = 1.0;
          local_230 = 0.0;
        }
        fVar17 = (float10)fsin((float10)uVar8 * (float10)_DAT_005b9004 * (float10)_DAT_0058a2f4);
        uVar6 = FUN_0041d5b0(local_17c,&local_238,
                             fVar3 - (_DAT_00583354 - (float)fVar17) * (float)local_220);
        FUN_0041d550(&local_250,&local_20c,uVar6);
        local_24c = local_24c - (float)fVar17 * (float)local_220 * _DAT_00583340;
        puVar11 = (undefined4 *)((param_1[5] * iVar5 + uVar15) * 0x10 + param_1[7]);
        *puVar11 = *local_1f8;
        puVar11[1] = local_1f8[1];
        puVar11[2] = local_1f8[2];
        uVar8 = FUN_004cf110();
        iVar12 = FUN_004cf110();
        uVar9 = FUN_004cf110();
        uVar10 = FUN_004cf110();
        iVar14 = param_1[5] * iVar5 + uVar15;
        uVar15 = uVar15 + 1;
        *(uint *)(iVar14 * 0x10 + 0xc + param_1[7]) =
             ((uVar8 & 0xff | iVar12 << 8) << 8 | uVar9 & 0xff) << 8 | uVar10 & 0xff;
      } while (uVar15 < param_1[5] - 1);
    }
    uVar6 = FUN_0041d5b0(local_19c,&local_244,fVar1);
    puVar7 = (undefined4 *)FUN_0041d550(local_1dc,&local_20c,uVar6);
    puVar11 = (undefined4 *)(param_1[5] * local_258 + -0x10 + param_1[7]);
    *puVar11 = *puVar7;
    puVar11[1] = puVar7[1];
    puVar11[2] = puVar7[2];
    uVar15 = FUN_004cf110();
    iVar12 = FUN_004cf110();
    uVar8 = FUN_004cf110();
    uVar9 = FUN_004cf110();
    iVar14 = param_1[5] * local_258;
    local_258 = local_258 + 0x10;
    iVar5 = iVar5 + 1;
    *(uint *)(iVar14 + -4 + param_1[7]) =
         ((uVar15 & 0xff | iVar12 << 8) << 8 | uVar8 & 0xff) << 8 | uVar9 & 0xff;
  } while (local_258 < 0x40);
  iVar5 = param_1[5] + -2;
  param_1[8] = iVar5;
  param_1[9] = iVar5 * 3;
  uVar6 = thunk_FUN_00493c27(iVar5 * 0x24);
  param_1[10] = uVar6;
  local_260 = (undefined4 *)0x0;
  do {
    uVar15 = 0;
    iVar5 = param_1[5] * (int)local_260 + 1;
    iVar12 = param_1[5] * (int)local_260 + 2;
    if (param_1[8] != 0) {
      do {
        iVar14 = (param_1[8] * (int)local_260 + uVar15) * 0xc;
        *(int *)(iVar14 + param_1[10]) = param_1[5] * (int)local_260;
        *(int *)(param_1[10] + 4 + iVar14) = iVar12;
        *(int *)(param_1[10] + 8 + iVar14) = iVar5;
        uVar15 = uVar15 + 1;
        iVar5 = iVar12;
        iVar12 = iVar12 + 1;
      } while (uVar15 < (uint)param_1[8]);
    }
    local_260 = (undefined4 *)((int)local_260 + 1);
  } while (local_260 < 3);
  param_1[0xb] = 9;
  puVar11 = (undefined4 *)thunk_FUN_00493c27(0x90);
  param_1[0xc] = puVar11;
  local_24c = DAT_00591598 * _DAT_0058a2f4;
  local_250 = 0.0;
  local_248 = 0.0;
  puVar7 = (undefined4 *)FUN_0041d550(local_1dc,local_1a8,&local_250);
  *puVar11 = *puVar7;
  puVar11[1] = puVar7[1];
  puVar11[2] = puVar7[2];
  uVar15 = FUN_004cf110();
  iVar5 = FUN_004cf110();
  uVar8 = FUN_004cf110();
  uVar9 = FUN_004cf110();
  *(uint *)(param_1[0xc] + 0xc) =
       ((uVar15 & 0xff | iVar5 << 8) << 8 | uVar8 & 0xff) << 8 | uVar9 & 0xff;
  if (1 < (uint)param_1[0xb]) {
    local_24c = 0.0;
    iVar5 = 0x10;
    uVar15 = 0;
    do {
      uStack_1fc = 0;
      fVar17 = (float10)uVar15 * (float10)_DAT_005b9004 * (float10)_DAT_0058a2f4;
      fVar18 = (float10)fcos(fVar17);
      local_250 = (float)fVar18;
      fVar17 = (float10)fsin(fVar17);
      local_248 = (float)fVar17;
      local_200 = uVar15;
      uVar6 = FUN_00434a40(local_1dc,DAT_00591598,&local_250);
      puVar11 = (undefined4 *)FUN_0041d550(local_19c,local_1a8,uVar6);
      puVar7 = (undefined4 *)(param_1[0xc] + iVar5);
      *puVar7 = *puVar11;
      puVar7[1] = puVar11[1];
      puVar7[2] = puVar11[2];
      uVar8 = FUN_004cf110();
      iVar12 = FUN_004cf110();
      uVar9 = FUN_004cf110();
      uVar10 = FUN_004cf110();
      *(uint *)(iVar5 + 0xc + param_1[0xc]) =
           ((uVar8 & 0xff | iVar12 << 8) << 8 | uVar9 & 0xff) << 8 | uVar10 & 0xff;
      uVar8 = uVar15 + 2;
      iVar5 = iVar5 + 0x10;
      uVar15 = uVar15 + 1;
    } while (uVar8 < (uint)param_1[0xb]);
  }
  param_1[0xd] = 8;
  uVar6 = thunk_FUN_00493c27(0x60);
  param_1[0xe] = uVar6;
  if (param_1[0xd] != 0) {
    iVar5 = 0;
    uVar15 = 2;
    uVar8 = 1;
    do {
      uVar9 = uVar15;
      *(undefined4 *)(iVar5 + param_1[0xe]) = 0;
      uVar15 = uVar9;
      if ((uint)param_1[0xb] <= uVar9) {
        uVar15 = uVar9 % (uint)param_1[0xb] + 1;
      }
      *(uint *)(param_1[0xe] + 4 + iVar5) = uVar15;
      if ((uint)param_1[0xb] <= uVar8) {
        uVar8 = uVar8 % (uint)param_1[0xb] + 1;
      }
      *(uint *)(param_1[0xe] + 8 + iVar5) = uVar8;
      iVar5 = iVar5 + 0xc;
      uVar15 = uVar9 + 1;
      uVar8 = uVar9;
    } while (uVar9 - 1 < (uint)param_1[0xd]);
  }
  param_1[0xf] = 0x3f;
  uVar6 = thunk_FUN_00493c27(0x3f0);
  param_1[0x10] = uVar6;
  local_260 = (undefined4 *)0x0;
  local_1f8 = (undefined4 *)FUN_0041d350();
  local_1f0 = (undefined4 *)FUN_0041d350();
  uVar6 = FUN_0041d350();
  local_25c = 0;
  do {
    local_24c = _DAT_005915ac * _DAT_005915fc;
    local_250 = 0.0;
    local_248 = 0.0;
    puVar11 = (undefined4 *)(param_1[0x10] + local_25c);
    *puVar11 = *local_1f8;
    puVar11[1] = local_1f8[1];
    puVar11[2] = local_1f8[2];
    uVar15 = FUN_004cf110();
    iVar5 = FUN_004cf110();
    uVar8 = FUN_004cf110();
    uVar9 = FUN_004cf110();
    local_258 = 8;
    *(uint *)(local_25c + 0xc + param_1[0x10]) =
         ((uVar15 & 0xff | iVar5 << 8) << 8 | uVar8 & 0xff) << 8 | uVar9 & 0xff;
    uVar8 = 0;
    uVar15 = local_25c;
    do {
      uStack_1fc = 0;
      puVar11 = (undefined4 *)(param_1[0x10] + uVar15 + 0x10);
      fVar17 = (float10)uVar8 * (float10)_DAT_005b9004 * (float10)_DAT_0058a2f4;
      fVar18 = (float10)fcos(fVar17);
      local_1e8 = (float)((float10)_DAT_005915a8 * fVar18);
      local_1e4 = (float)ABS(fVar18 * (float10)_DAT_005915ac * (float10)_DAT_0058aa44);
      fVar17 = (float10)fsin(fVar17);
      local_1e0 = (float)(fVar17 * (float10)_DAT_005915ac);
      *puVar11 = *local_1f0;
      puVar11[1] = local_1f0[1];
      puVar11[2] = local_1f0[2];
      local_200 = uVar8;
      uVar9 = FUN_004cf110();
      iVar5 = FUN_004cf110();
      uVar10 = FUN_004cf110();
      uVar16 = FUN_004cf110();
      *(uint *)(uVar15 + 0x1c + param_1[0x10]) =
           ((uVar9 & 0xff | iVar5 << 8) << 8 | uVar10 & 0xff) << 8 | uVar16 & 0xff;
      uVar8 = uVar8 + 1;
      local_258 = local_258 + -1;
      uVar15 = uVar15 + 0x10;
    } while (local_258 != 0);
    uVar13 = FUN_005463f0(local_48,local_1a8);
    uStack_21c = 0;
    local_220 = local_260;
    uVar13 = FUN_00546f8c(local_88,(float)local_260 * _DAT_005b9004 * _DAT_005915f8,uVar13);
    uVar13 = FUN_00546168(local_c8,0,0,DAT_00591598 * _DAT_00583340 + _DAT_005915ac,uVar13);
    uVar13 = FUN_0041d7a0(local_108,uVar13);
    FUN_0041d7a0(local_148,uVar13);
    FUN_00407300();
    FUN_00407300();
    FUN_00407300();
    FUN_00407300();
    iVar5 = 9;
    uVar15 = local_25c;
    do {
      thunk_FUN_00495964(uVar15 + param_1[0x10],uVar15 + param_1[0x10],uVar6);
      uVar15 = uVar15 + 0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    FUN_00407300();
    local_25c = local_25c + 0x90;
    local_260 = (undefined4 *)((int)local_260 + 1);
  } while (local_25c < 0x3f0);
  param_1[0x11] = 0x38;
  uVar6 = thunk_FUN_00493c27(0x2a0);
  iVar5 = 0;
  param_1[0x12] = uVar6;
  uVar15 = 0;
  do {
    local_258 = 1;
    local_25c = 8;
    uVar8 = 2;
    do {
      uVar9 = uVar8;
      *(uint *)(iVar5 + param_1[0x12]) = uVar15;
      uVar8 = uVar9;
      if (8 < uVar9) {
        uVar8 = uVar9 % 9 + 1;
      }
      *(uint *)(iVar5 + 4 + param_1[0x12]) = uVar8 + uVar15;
      if (8 < local_258) {
        local_258 = local_258 % 9 + 1;
      }
      *(uint *)(param_1[0x12] + 8 + iVar5) = uVar15 + local_258;
      iVar5 = iVar5 + 0xc;
      local_25c = local_25c + -1;
      uVar8 = uVar9 + 1;
      local_258 = uVar9;
    } while (local_25c != 0);
    uVar15 = uVar15 + 9;
  } while (uVar15 < 0x3f);
  _eh_vector_destructor_iterator_(local_1cc,0xc,4,FUN_00407150);
  return param_1;
}




/* Function: FUN_005122f0 */

void * __thiscall FUN_005122f0(void *param_1,byte param_2)

{
  FUN_00510a20();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00512310 */

undefined4 __thiscall FUN_00512310(int param_1,uint param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0xfffffff < param_2) {
    FUN_005110b0();
    return 1;
  }
  iVar1 = FUN_00493c27(param_2 * 0x10);
  *(uint *)(param_1 + 0xc) = param_2 * 0x10 + iVar1;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  return 1;
}




/* Function: FUN_00512370 */

void FUN_00512370(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    if (param_3 != param_1) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
    }
    param_1[3] = param_3[3];
    param_1[4] = param_3[4];
    param_1[5] = param_3[5];
    param_1[6] = param_3[6];
  }
  return;
}




/* Function: FUN_005123c0 */

undefined4 FUN_005123c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00511180(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00512400 */

void FUN_00512400(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  for (; param_2 != param_3; param_3 = param_3 + -8) {
    param_4[-2] = *(undefined4 *)(param_3 + -8);
    param_4[-1] = *(undefined4 *)(param_3 + -4);
    param_4 = param_4 + -2;
  }
  *param_1 = param_4;
  return;
}




/* Function: FUN_00512430 */

void FUN_00512430(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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




/* Function: FUN_00512460 */

undefined4 FUN_00512460(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  float *unaff_ESI;
  bool local_5;
  
  uVar6 = 0;
  local_5 = false;
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 8) - iVar2 >> 3;
  }
  iVar3 = iVar3 * 8 + -8;
  pfVar5 = (float *)(iVar2 + 4);
  do {
    uVar4 = -iVar2 - 4U;
    if ((iVar2 == 0) || (uVar4 = *(int *)(param_1 + 8) - iVar2 >> 3, uVar4 <= uVar6)) {
      return CONCAT31((int3)(uVar4 >> 8),local_5);
    }
    pfVar1 = (float *)(iVar3 + 4 + iVar2);
    if (*(float *)(iVar3 + 4 + iVar2) <= unaff_ESI[1]) {
      if ((unaff_ESI[1] < *pfVar5) &&
         ((unaff_ESI[1] - *pfVar5) * (*(float *)(iVar3 + iVar2) - pfVar5[-1]) <
          (*unaff_ESI - pfVar5[-1]) * (*pfVar1 - *pfVar5))) goto LAB_00512523;
    }
    else if ((*pfVar5 < unaff_ESI[1] != (*pfVar5 == unaff_ESI[1])) &&
            ((*unaff_ESI - pfVar5[-1]) * (*pfVar1 - *pfVar5) <
             (unaff_ESI[1] - *pfVar5) * (*(float *)(iVar3 + iVar2) - pfVar5[-1]))) {
LAB_00512523:
      local_5 = local_5 == false;
    }
    uVar6 = uVar6 + 1;
    iVar3 = (-iVar2 - 4U) + (int)pfVar5;
    pfVar5 = pfVar5 + 2;
  } while( true );
}




/* Function: FUN_00512550 */

undefined4 __thiscall
FUN_00512550(int param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  int iVar1;
  char *_Filename;
  FILE *_File;
  size_t sVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  char *_Mode;
  uint local_18;
  uint local_14;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  _Mode = "wb";
  _Filename = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              c_str(param_2);
  _File = fopen(_Filename,_Mode);
  param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x1;
  sVar2 = fwrite(&param_2,4,1,_File);
  if (sVar2 != 1) {
    fclose(_File);
    return 0;
  }
  iVar6 = 0;
  if (*(int *)(param_1 + 0x88) == 0) {
    param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  }
  else {
    param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88)) / 0x1c);
  }
  sVar2 = fwrite(&param_2,4,1,_File);
  if (sVar2 == 1) {
    for (uVar8 = 0;
        (pcVar7 = fwrite_exref, *(int *)(param_1 + 0x88) != 0 &&
        (uVar8 < (uint)((*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88)) / 0x1c)));
        uVar8 = uVar8 + 1) {
      local_c = *(undefined4 *)(*(int *)(param_1 + 0x88) + iVar6);
      iVar3 = *(int *)(param_1 + 0x88) + iVar6;
      local_8 = *(undefined4 *)(iVar3 + 4);
      local_4 = *(undefined4 *)(iVar3 + 8);
      sVar2 = fwrite(&local_c,4,3,_File);
      if (sVar2 != 3) goto LAB_005125ed;
      iVar6 = iVar6 + 0x1c;
    }
    if (*(int *)(param_1 + 0x98) == 0) {
      param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
    }
    else {
      param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                ((*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98)) / 0x54);
    }
    sVar2 = fwrite(&param_2,4,1,_File);
    if (sVar2 == 1) {
      iVar6 = 0;
      local_14 = 0;
      while( true ) {
        if ((*(int *)(param_1 + 0x98) == 0) ||
           ((uint)((*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98)) / 0x54) <= local_14)) {
          fclose(_File);
          return 1;
        }
        local_c = *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x98));
        iVar3 = iVar6 + *(int *)(param_1 + 0x98);
        local_8 = *(undefined4 *)(iVar3 + 4);
        local_4 = *(undefined4 *)(iVar3 + 8);
        iVar3 = (*pcVar7)(&local_c,4,3,_File);
        if (iVar3 != 3) break;
        iVar3 = *(int *)(iVar6 + 0x10 + *(int *)(param_1 + 0x98));
        if (iVar3 == 0) {
          param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x0;
        }
        else {
          param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    (*(int *)(iVar6 + *(int *)(param_1 + 0x98) + 0x14) - iVar3 >> 4);
        }
        iVar3 = (*pcVar7)(&param_2,4,1,_File);
        if (iVar3 != 1) break;
        iVar3 = 0;
        local_18 = 0;
        while( true ) {
          iVar4 = *(int *)(param_1 + 0x98) + iVar6;
          if ((*(int *)(iVar4 + 0x10) == 0) ||
             ((uint)(*(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x10) >> 4) <= local_18)) break;
          iVar1 = *(int *)(*(int *)(iVar4 + 0x10) + 4 + iVar3);
          if (iVar1 == 0) {
            param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)0x0;
          }
          else {
            param_2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(*(int *)(*(int *)(iVar4 + 0x10) + iVar3 + 8) - iVar1 >> 2);
          }
          fwrite(&param_2,4,1,_File);
          iVar4 = *(int *)(iVar6 + 0x10 + *(int *)(param_1 + 0x98));
          iVar1 = *(int *)(iVar4 + 4 + iVar3);
          iVar4 = iVar4 + iVar3;
          if (iVar1 == 0) {
            sVar2 = 0;
          }
          else {
            sVar2 = *(int *)(iVar4 + 8) - iVar1 >> 2;
          }
          if (*(int *)(iVar4 + 4) == 0) {
            sVar5 = 0;
          }
          else {
            sVar5 = *(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) >> 2;
          }
          sVar5 = fwrite(*(void **)(iVar4 + 4),4,sVar5,_File);
          if (sVar2 != sVar5) goto LAB_005125ed;
          local_18 = local_18 + 1;
          iVar3 = iVar3 + 0x10;
        }
        local_14 = local_14 + 1;
        iVar6 = iVar6 + 0x54;
        pcVar7 = fwrite_exref;
      }
    }
  }
LAB_005125ed:
  fclose(_File);
  return 0;
}




/* Function: FUN_00513210 */

void FUN_00513210(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
      param_3[6] = param_1[6];
    }
    param_3 = param_3 + 7;
  }
  return;
}




/* Function: FUN_00513260 */

void FUN_00513260(undefined4 *param_1,int param_2,undefined4 *param_3)

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
    }
    param_1 = param_1 + 7;
  }
  return;
}




/* Function: FUN_005132b0 */

void __thiscall FUN_005132b0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057f1c0;
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
    FUN_00407e10();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_005133a0 */

int __thiscall FUN_005133a0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057f1d0;
  local_10 = ExceptionList;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
  }
  ExceptionList = &local_10;
  cVar1 = FUN_00407fb0(iVar2);
  if (cVar1 != '\0') {
    local_8 = 0;
    uVar3 = FUN_00543360(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(param_1 + 4),param_1,param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_00513440 */

int __thiscall FUN_00513440(int param_1,int param_2)

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




/* Function: FUN_00513580 */

void __fastcall FUN_00513580(int param_1)

{
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}




/* Function: FUN_005135b0 */

void __thiscall FUN_005135b0(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057f1e0;
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
      FUN_005110b0();
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
      uVar4 = FUN_00512430(*(undefined4 *)(param_1 + 4));
      FUN_0041fe60(uVar4);
      FUN_00512430(param_2);
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
      *(uint *)(param_1 + 8) = iVar3 + (param_3 + iVar5) * 8;
      *(uint *)(param_1 + 0xc) = uVar2 * 8 + iVar3;
      *(int *)(param_1 + 4) = iVar3;
      ExceptionList = local_10;
      return;
    }
    if ((uint)(*(int *)(param_1 + 8) - param_2 >> 3) < param_3) {
      ExceptionList = &local_10;
      FUN_00530be0();
      local_8 = 2;
      FUN_00420d60();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 8;
    }
    else {
      ExceptionList = &local_10;
      uVar4 = FUN_00530be0();
      *(undefined4 *)(param_1 + 8) = uVar4;
      FUN_00512400();
    }
    FUN_0045b490();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00513860 */

void __thiscall
FUN_00513860(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00513210(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00513890 */

void FUN_00513890(int param_1,int param_2,undefined4 param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_00513440(param_3);
  }
  return;
}




/* Function: FUN_005138c0 */

void FUN_005138c0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    param_3 = param_3 + -0x10;
    param_4 = param_4 + -0x10;
    FUN_00513440(param_3);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return;
}




/* Function: FUN_00513900 */

void FUN_00513900(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    puVar1 = param_3 + -7;
    puVar2 = param_4 + -7;
    if (puVar1 != puVar2) {
      *puVar2 = *puVar1;
      param_4[-6] = param_3[-6];
      param_4[-5] = param_3[-5];
    }
    FUN_00513440(param_3 + -4);
    param_3 = puVar1;
    param_4 = puVar2;
  } while (puVar1 != param_2);
  *param_1 = puVar2;
  return;
}




/* Function: FUN_00513960 */

int FUN_00513960(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00513440(param_1);
    param_1 = param_1 + 0x10;
    param_3 = param_3 + 0x10;
  } while (param_1 != param_2);
  return param_3;
}




/* Function: FUN_005139a0 */

int __thiscall FUN_005139a0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00513260(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0x1c;
}




/* Function: FUN_005139d0 */

int __thiscall
FUN_005139d0(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 **param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057f1f0;
  local_10 = ExceptionList;
  local_30 = *param_4;
  local_2c = param_4[1];
  iVar1 = param_1[1];
  local_28 = param_4[2];
  local_24 = param_4[3];
  local_20 = param_4[4];
  local_1c = param_4[5];
  local_18 = (int)param_4[6];
  local_14 = &stack0xffffffc4;
  if (iVar1 == 0) {
    param_4 = (undefined4 **)0x0;
    iVar4 = local_18;
  }
  else {
    iVar4 = (param_1[3] - iVar1) * -0x6db6db6d;
    param_4 = (undefined4 **)((param_1[3] - iVar1) / 0x1c);
  }
  if (param_3 != 0) {
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (param_1[2] - iVar1) / 0x1c;
    }
    if (0x9249249U - iVar4 < param_3) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc4;
      iVar1 = FUN_005110b0();
      ExceptionList = local_10;
      return iVar1;
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (param_1[2] - iVar1) / 0x1c;
    }
    if (param_4 < iVar4 + param_3) {
      if (0x9249249 - ((uint)param_4 >> 1) < param_4) {
        param_4 = (undefined4 **)0x0;
      }
      else {
        param_4 = (undefined4 **)((int)param_4 + ((uint)param_4 >> 1));
      }
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (param_1[2] - iVar1) / 0x1c;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc4;
      if (param_4 < iVar1 + param_3) {
        ExceptionList = &local_10;
        local_14 = &stack0xffffffc4;
        iVar1 = FUN_004e1e80();
        param_4 = (undefined4 **)(iVar1 + param_3);
      }
      local_44 = (undefined4 *)0x513b2a;
      puVar2 = (undefined4 *)FUN_00493c27();
      local_8 = 0;
      local_48 = puVar2;
      local_44 = param_1;
      iVar1 = FUN_00513210(param_1[1],param_2);
      local_48 = &local_30;
      local_44 = param_1;
      FUN_00513260(iVar1,param_3);
      local_48 = (undefined4 *)(iVar1 + param_3 * 0x1c);
      local_44 = param_1;
      FUN_00513210(param_2,param_1[2]);
      iVar1 = param_1[1];
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (param_1[2] - iVar1) / 0x1c;
      }
      if (iVar1 == 0) {
        param_1[1] = puVar2;
        param_1[3] = puVar2 + (int)param_4 * 7;
        param_1[2] = puVar2 + (param_3 + iVar4) * 7;
        ExceptionList = local_10;
        return (int)puVar2;
      }
      for (; iVar1 != param_1[2]; iVar1 = iVar1 + 0x1c) {
      }
                    /* WARNING: Subroutine does not return */
      local_44 = (undefined4 *)&UNK_00513bd6;
      operator_delete((void *)param_1[1]);
    }
    param_4 = (undefined4 **)param_1[2];
    local_44 = param_4;
    if ((uint)(((int)param_4 - (int)param_2) / 0x1c) < param_3) {
      local_48 = param_2;
      ExceptionList = &local_10;
      param_4 = &local_48;
      local_14 = &stack0xffffffc4;
      FUN_00513860();
      local_8 = 2;
      local_48 = (undefined4 *)param_1[2];
      local_44 = (undefined4 *)(param_3 - (param_1[2] - (int)param_2) / 0x1c);
      FUN_005139a0();
      iVar1 = param_1[2] + param_3 * 0x1c;
      param_1[2] = iVar1;
      local_44 = (undefined4 *)(iVar1 + param_3 * -0x1c);
    }
    else {
      puVar2 = param_4 + param_3 * -7;
      ExceptionList = &local_10;
      local_48 = puVar2;
      uVar3 = FUN_00513860();
      param_1[2] = uVar3;
      param_4 = &local_48;
      local_48 = param_2;
      local_44 = puVar2;
      FUN_005123c0(&param_4);
      param_4 = &local_44;
      local_44 = param_2 + param_3 * 7;
    }
    local_48 = param_2;
    iVar4 = FUN_00512370();
  }
  ExceptionList = local_10;
  return iVar4;
}




/* Function: FUN_00513d50 */

undefined4 *
FUN_00513d50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,void *param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057f208;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = param_2;
  param_1[2] = param_4;
  local_4 = 0;
  param_1[1] = param_3;
  FUN_005133a0(&param_5);
  if (param_6 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_6);
  }
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00513dc0 */

undefined4 FUN_00513dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_005138c0(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00513e00 */

void FUN_00513e00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    do {
      if (param_3 != param_1) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
      }
      FUN_00513440(param_3 + 3);
      param_1 = param_1 + 7;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_00513e40 */

undefined4 FUN_00513e40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00513900(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00513e80 */

void __thiscall FUN_00513e80(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057f220;
  local_10 = ExceptionList;
  if (param_2 < 0x924924a) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x1c;
    }
    if (uVar3 < param_2) {
      ExceptionList = &local_10;
      iVar1 = FUN_00493c27(param_2 * 0x1c);
      local_8 = 0;
      FUN_00513210(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar1,param_1,param_2);
      iVar2 = *(int *)(param_1 + 4);
      if (iVar2 != 0) {
        for (; iVar2 != *(int *)(param_1 + 8); iVar2 = iVar2 + 0x1c) {
        }
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)(param_1 + 4));
      }
      *(int *)(param_1 + 4) = iVar1;
      *(uint *)(param_1 + 0xc) = iVar1 + param_2 * 0x1c;
      *(int *)(param_1 + 8) = iVar1;
      ExceptionList = local_10;
      return;
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_005110b0();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00513fd0 */

void __thiscall FUN_00513fd0(int param_1,undefined4 param_2)

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
  FUN_005135b0(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_00514040 */

void __thiscall FUN_00514040(int param_1,uint param_2)

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
    uVar4 = (*(int *)(param_1 + 8) - iVar1) / 0x1c;
  }
  if (uVar4 < param_2) {
    FUN_005139d0();
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(param_1 + 8), param_2 < (uint)((iVar2 - iVar1) / 0x1c))) &&
     (iVar1 + param_2 * 0x1c != iVar2)) {
    uVar3 = FUN_00511130(iVar2);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  return;
}




/* Function: FUN_00514110 */

void __thiscall FUN_00514110(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x1c != 0) {
      iVar1 = (param_3 - iVar1) / 0x1c;
      goto LAB_0051415b;
    }
  }
  iVar1 = 0;
LAB_0051415b:
  FUN_005139d0(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x1c;
  return;
}




/* Function: FUN_00514190 */

void FUN_00514190(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}




/* Function: FUN_005141c0 */

int FUN_005141c0(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057f261;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_005133a0(param_1);
    }
    param_3 = param_3 + 0x10;
  }
  ExceptionList = local_10;
  return param_3;
}




/* Function: FUN_00514250 */

undefined4 * FUN_00514250(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057f241;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      FUN_005133a0(param_1 + 3);
    }
    param_3 = param_3 + 7;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}




/* Function: FUN_00514310 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00514310(undefined4 param_1)

{
  float10 fVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  fVar1 = (float10)fsin((float10)_DAT_00582ae8);
  local_4 = (undefined1 *)&local_20;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3f800000;
  local_8 = 0;
  local_10 = (float)fVar1;
  fVar1 = (float10)fcos((float10)_DAT_00582ae8);
  local_c = (float)fVar1;
  FUN_00514040(param_1);
  return;
}




/* Function: FUN_00514360 */

void __thiscall FUN_00514360(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x1c) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x1c))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00513260(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x1c;
    return;
  }
  FUN_00514110(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_005143f0 */

void FUN_005143f0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057f281;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      FUN_005133a0(param_3 + 3);
    }
    param_1 = param_1 + 7;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}




/* Function: FUN_005144b0 */

void FUN_005144b0(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if (*(void **)(param_1 + 4) != (void *)0x0) break;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1 = param_1 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_005144f0 */

void FUN_005144f0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057f2a1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_005133a0(param_3);
    }
    param_1 = param_1 + 0x10;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}




/* Function: FUN_00514580 */

void __thiscall
FUN_00514580(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_005141c0(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_005145b0 */

void __thiscall
FUN_005145b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00514250(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_005145e0 */

void __thiscall
FUN_005145e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_005141c0(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00514600 */

int __thiscall FUN_00514600(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_005143f0(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0x1c;
}




/* Function: FUN_00514630 */

void FUN_00514630(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_00513580();
  }
  return;
}




/* Function: FUN_00514660 */

void __thiscall
FUN_00514660(int param_1,undefined4 **param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_28;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057f2b8;
  local_10 = ExceptionList;
  local_38 = *param_4;
  local_34 = param_4[1];
  local_30 = param_4[2];
  local_14 = &stack0xffffffbc;
  local_4c = (undefined4 *)0x5146a6;
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_005133a0();
  puVar5 = param_3;
  puVar1 = param_2;
  iVar4 = *(int *)(param_1 + 4);
  puVar3 = (undefined1 *)0x0;
  local_8 = 0;
  if (iVar4 != 0) {
    puVar3 = (undefined1 *)((*(int *)(param_1 + 0xc) - iVar4) / 0x1c);
  }
  if (param_3 != (undefined4 *)0x0) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
    }
    if ((undefined4 *)(0x9249249U - iVar4) < param_3) {
      FUN_005110b0();
    }
    else {
      if (*(int *)(param_1 + 4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
      }
      if (puVar3 < (undefined1 *)((int)param_3 + iVar4)) {
        if ((undefined1 *)(0x9249249 - ((uint)puVar3 >> 1)) < puVar3) {
          puVar3 = (undefined1 *)0x0;
        }
        else {
          puVar3 = puVar3 + ((uint)puVar3 >> 1);
        }
        if (*(int *)(param_1 + 4) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
        }
        if (puVar3 < (undefined1 *)((int)param_3 + iVar4)) {
          iVar4 = FUN_004e1e80();
          puVar3 = (undefined1 *)((int)puVar5 + iVar4);
        }
        local_4c = (undefined4 *)0x51479f;
        param_3 = (undefined4 *)FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        param_4 = param_3;
        local_50 = param_3;
        local_4c = (undefined4 *)param_1;
        param_3 = (undefined4 *)FUN_00514250(*(undefined4 *)(param_1 + 4),param_2);
        local_50 = &local_38;
        local_4c = (undefined4 *)param_1;
        FUN_005143f0(param_3,puVar5);
        param_3 = (undefined4 *)((int)param_3 + (int)puVar5 * 0x1c);
        local_50 = param_3;
        local_4c = (undefined4 *)param_1;
        FUN_00514250(param_2,*(undefined4 *)(param_1 + 8));
        if (*(int *)(param_1 + 4) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
        }
        local_4c = *(undefined4 **)(param_1 + 4);
        if (local_4c != (undefined4 *)0x0) {
          local_50 = (undefined4 *)0x514848;
          FUN_00514630();
                    /* WARNING: Subroutine does not return */
          local_4c = (undefined4 *)&UNK_00514851;
          operator_delete(*(void **)(param_1 + 4));
        }
        *(undefined4 **)(param_1 + 0xc) = param_4 + (int)puVar3 * 7;
        *(undefined4 **)(param_1 + 4) = param_4;
        *(undefined4 **)(param_1 + 8) = param_4 + (int)((int)puVar5 + iVar4) * 7;
      }
      else {
        local_4c = *(undefined4 **)(param_1 + 8);
        if ((undefined4 *)(((int)local_4c - (int)param_2) / 0x1c) < param_3) {
          param_4 = (undefined4 *)((int)param_3 * 0x1c);
          local_1c = (undefined1 *)&local_50;
          local_50 = param_2;
          FUN_005145b0();
          local_8 = CONCAT31(local_8._1_3_,3);
          local_50 = *(undefined4 **)(param_1 + 8);
          local_4c = (undefined4 *)((int)puVar5 - (*(int *)(param_1 + 8) - (int)puVar1) / 0x1c);
          FUN_00514600();
          iVar4 = *(int *)(param_1 + 8) + (int)param_4;
          local_8 = 0;
          *(int *)(param_1 + 8) = iVar4;
          local_4c = (undefined4 *)(iVar4 - (int)param_4);
        }
        else {
          param_2 = &local_50;
          param_4 = (undefined4 *)((int)param_3 * 0x1c);
          puVar5 = (undefined4 *)((int)local_4c + (int)param_3 * -0x1c);
          local_50 = puVar5;
          local_1c = (undefined1 *)local_4c;
          uVar2 = FUN_005145b0();
          *(undefined4 *)(param_1 + 8) = uVar2;
          param_2 = &local_50;
          local_50 = puVar1;
          local_4c = puVar5;
          FUN_00513e40(&param_2);
          local_4c = (undefined4 *)((int)param_4 + (int)puVar1);
        }
        param_2 = &local_50;
        local_50 = puVar1;
        FUN_00513e00();
      }
    }
  }
  if (local_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    local_4c = (undefined4 *)0x5149eb;
    operator_delete(local_28);
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00514a10 */

void __thiscall FUN_00514a10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_005144b0(param_2,param_3,param_1,param_3);
  return;
}




/* Function: FUN_00514a30 */

int __thiscall FUN_00514a30(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_005144f0(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x10 + param_2;
}




/* Function: FUN_00514a60 */

void __thiscall FUN_00514a60(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x1c != 0) {
      iVar1 = (param_3 - iVar1) / 0x1c;
      goto LAB_00514aab;
    }
  }
  iVar1 = 0;
LAB_00514aab:
  FUN_00514660(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x1c;
  return;
}




/* Function: FUN_00514ae0 */

void __thiscall FUN_00514ae0(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_3 != param_4) {
    uVar1 = FUN_00513960(param_4);
    FUN_005144b0(uVar1,*(undefined4 *)(param_1 + 8),param_1,param_2);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  *param_2 = param_3;
  return;
}




/* Function: FUN_00514b30 */

void __fastcall FUN_00514b30(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005144b0(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_1,param_1);
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}




/* Function: FUN_00514b70 */

void __thiscall FUN_00514b70(int param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 local_2c [4];
  void *local_28;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057f2d8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_40 = (undefined1 *)0x514ba2;
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_005133a0();
  iVar2 = *(int *)(param_1 + 4);
  iVar5 = 0;
  local_8 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0xc) - iVar2 >> 4;
  }
  if (param_3 != 0) {
    if (iVar2 != 0) {
      iVar5 = *(int *)(param_1 + 8) - iVar2 >> 4;
    }
    if (0xfffffffU - iVar5 < param_3) {
      FUN_005110b0();
    }
    else {
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar2 >> 4;
      }
      if (uVar1 < iVar5 + param_3) {
        if (0xfffffff - (uVar1 >> 1) < uVar1) {
          uVar1 = 0;
        }
        else {
          uVar1 = uVar1 + (uVar1 >> 1);
        }
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar2 >> 4;
        }
        if (uVar1 < iVar5 + param_3) {
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 8) - iVar2 >> 4;
          }
          uVar1 = iVar2 + param_3;
        }
        local_40 = (undefined1 *)0x514c4b;
        puVar3 = (undefined1 *)FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        local_44 = puVar3;
        local_40 = (undefined1 *)param_1;
        local_1c = puVar3;
        iVar2 = FUN_005141c0(*(undefined4 *)(param_1 + 4));
        local_44 = local_2c;
        local_40 = (undefined1 *)param_1;
        FUN_005144f0(iVar2);
        local_44 = (undefined1 *)(iVar2 + param_3 * 0x10);
        local_40 = (undefined1 *)param_1;
        FUN_005141c0(param_2);
        iVar2 = *(int *)(param_1 + 4);
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar2 >> 4;
        }
        if (iVar2 != 0) {
          local_44 = *(undefined1 **)(param_1 + 8);
          local_40 = (undefined1 *)param_1;
          FUN_005144b0();
                    /* WARNING: Subroutine does not return */
          operator_delete(*(void **)(param_1 + 4));
        }
        *(undefined1 **)(param_1 + 4) = puVar3;
        *(undefined1 **)(param_1 + 0xc) = puVar3 + uVar1 * 0x10;
        *(undefined1 **)(param_1 + 8) = puVar3 + (param_3 + iVar5) * 0x10;
      }
      else {
        local_40 = *(undefined1 **)(param_1 + 8);
        if ((uint)((int)local_40 - (int)param_2 >> 4) < param_3) {
          local_1c = (undefined1 *)&local_44;
          local_44 = param_2;
          FUN_00514580();
          local_44 = *(undefined1 **)(param_1 + 8);
          local_8 = CONCAT31(local_8._1_3_,3);
          local_40 = (undefined1 *)(param_3 - ((int)local_44 - (int)param_2 >> 4));
          FUN_00514a30();
          iVar2 = *(int *)(param_1 + 8) + param_3 * 0x10;
          local_8 = 0;
          *(int *)(param_1 + 8) = iVar2;
          local_40 = (undefined1 *)(iVar2 + param_3 * -0x10);
        }
        else {
          puVar3 = local_40 + param_3 * -0x10;
          local_44 = puVar3;
          local_1c = local_40;
          uVar4 = FUN_00514580();
          *(undefined4 *)(param_1 + 8) = uVar4;
          local_44 = param_2;
          local_40 = puVar3;
          FUN_00513dc0();
          local_40 = param_2 + param_3 * 0x10;
        }
        local_44 = param_2;
        FUN_00513890();
      }
    }
  }
  if (local_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    local_40 = (undefined1 *)0x514e3e;
    operator_delete(local_28);
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00514e60 */

int __thiscall FUN_00514e60(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057f2f0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 4;
  }
  cVar1 = FUN_00512310(iVar2);
  if (cVar1 != '\0') {
    local_8 = 0;
    uVar3 = FUN_005141c0(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(param_1 + 4),param_1,param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}




/* Function: FUN_00514f00 */

void __thiscall FUN_00514f00(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x1c) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x1c))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_005143f0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x1c;
    return;
  }
  FUN_00514a60(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_00514f90 */

void __thiscall FUN_00514f90(int param_1,undefined4 **param_2,undefined4 param_3,void *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057f308;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 4);
  local_4 = 0;
  if (iVar2 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = (undefined1 *)(*(int *)(param_1 + 8) - iVar2 >> 4);
  }
  if (puVar1 < param_2) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar2 >> 4;
    }
    local_1c = (undefined1 *)((int)param_2 + -iVar2);
    local_20 = *(undefined4 **)(param_1 + 8);
    param_2 = &local_20;
    ExceptionList = &local_c;
    FUN_00514b70();
  }
  else {
    ExceptionList = &local_c;
    if ((iVar2 != 0) &&
       (ExceptionList = &local_c, param_2 < (undefined1 *)(*(int *)(param_1 + 8) - iVar2 >> 4))) {
      local_1c = (undefined1 *)((int)param_2 * 0x10 + *(int *)(param_1 + 4));
      local_20 = &param_2;
      ExceptionList = &local_c;
      param_2 = (undefined4 **)&local_1c;
      FUN_00514ae0();
    }
  }
  if (param_4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    local_1c = &UNK_00515039;
    operator_delete(param_4);
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00515050 */

undefined4 * __thiscall FUN_00515050(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  FUN_00514e60(param_2 + 3);
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  return param_1;
}




/* Function: FUN_005150d0 */

int __thiscall FUN_005150d0(int param_1,int param_2)

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
    uVar6 = *(int *)(param_2 + 8) - iVar1 >> 4;
    if (uVar6 != 0) {
      iVar2 = *(int *)(param_1 + 4);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)(param_1 + 8) - iVar2 >> 4;
      }
      if (uVar6 <= uVar3) {
        uVar4 = FUN_00513960(iVar1,*(int *)(param_2 + 8),iVar2,param_2);
        FUN_005144b0(uVar4,*(undefined4 *)(param_1 + 8),param_1,param_2);
        if (*(int *)(param_2 + 4) == 0) {
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
          return param_1;
        }
        *(int *)(param_1 + 8) =
             (*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 4) * 0x10 + *(int *)(param_1 + 4);
        return param_1;
      }
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)(param_1 + 0xc) - iVar2 >> 4;
      }
      if (uVar6 <= uVar3) {
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar2 >> 4;
        }
        iVar5 = iVar5 * 0x10 + iVar1;
        FUN_00513960(iVar1,iVar5,iVar2,param_2);
        uVar4 = FUN_005141c0(iVar5,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8),param_1
                             ,param_2);
        *(undefined4 *)(param_1 + 8) = uVar4;
        return param_1;
      }
      FUN_005144b0(iVar2,*(undefined4 *)(param_1 + 8),param_1,param_2);
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)(param_1 + 4));
    }
  }
  FUN_00514b30();
  return param_1;
}




/* Function: FUN_00515230 */

void FUN_00515230(undefined4 param_1)

{
  undefined1 auStack_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  local_4 = auStack_14;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  FUN_00514f90(param_1);
  return;
}




/* Function: FUN_00515260 */

void __fastcall FUN_00515260(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_005144b0(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),param_1 + 0xc,param_1);
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}




/* Function: FUN_005152a0 */

undefined4 * __thiscall FUN_005152a0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_2 != param_1) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  FUN_005150d0(param_2 + 3);
  if (param_2 + 7 != param_1 + 7) {
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
  }
  if (param_2 + 0xb != param_1 + 0xb) {
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
  }
  if (param_2 + 0xf != param_1 + 0xf) {
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
  }
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  return param_1;
}




/* Function: FUN_00515340 */

int FUN_00515340(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_005152a0(param_1);
    param_1 = param_1 + 0x54;
    param_3 = param_3 + 0x54;
  } while (param_1 != param_2);
  return param_3;
}




/* Function: FUN_00515380 */

void FUN_00515380(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    param_3 = param_3 + -0x54;
    param_4 = param_4 + -0x54;
    FUN_005152a0(param_3);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return;
}




/* Function: FUN_005153c0 */

void FUN_005153c0(int param_1,int param_2,undefined4 param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x54) {
    FUN_005152a0(param_3);
  }
  return;
}




/* Function: FUN_005153f0 */

undefined4 FUN_005153f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00515380(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00515430 */

int FUN_00515430(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057f331;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x54) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_00515050(param_1);
    }
    param_3 = param_3 + 0x54;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}




/* Function: FUN_00515510 */

void FUN_00515510(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057f351;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_00515050(param_3);
    }
    param_1 = param_1 + 0x54;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}




/* Function: FUN_005155e0 */

void __thiscall
FUN_005155e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00515430(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00515610 */

void FUN_00515610(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x54) {
    FUN_00515260();
  }
  return;
}




/* Function: FUN_00515640 */

int __thiscall FUN_00515640(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00515510(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0x54;
}




/* Function: FUN_00515680 */

void __fastcall FUN_00515680(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x54) {
    FUN_00515260();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_005156d0 */

void __thiscall FUN_005156d0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != param_4) {
    iVar2 = FUN_00515340(param_4);
    iVar1 = *(int *)(param_1 + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x54) {
      FUN_00515260();
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  *param_2 = param_3;
  return;
}




/* Function: FUN_00515730 */

undefined1 * __thiscall
FUN_00515730(undefined1 *param_1,undefined1 **param_2,undefined1 **param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *local_88;
  undefined1 *local_84;
  undefined1 local_64 [4];
  void *local_60;
  undefined1 *local_5c;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057f368;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff84;
  local_84 = (undefined1 *)0x515762;
  ExceptionList = &local_10;
  local_18 = param_1;
  puVar3 = (undefined1 *)FUN_00515050();
  puVar2 = (undefined1 *)param_3;
  puVar1 = (undefined1 *)param_2;
  iVar7 = *(int *)(param_1 + 4);
  puVar5 = (undefined1 *)0x0;
  local_8 = 0;
  if (iVar7 != 0) {
    puVar3 = (undefined1 *)((*(int *)(param_1 + 0xc) - iVar7) * 0x30c30c31);
    puVar5 = (undefined1 *)((*(int *)(param_1 + 0xc) - iVar7) / 0x54);
  }
  if (param_3 != (undefined1 **)0x0) {
    if (iVar7 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)(param_1 + 8) - iVar7) / 0x54;
    }
    if ((undefined1 *)(0x30c30c3U - iVar6) < param_3) {
      puVar3 = (undefined1 *)FUN_005110b0();
    }
    else {
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (*(int *)(param_1 + 8) - iVar7) / 0x54;
      }
      if (puVar5 < (undefined1 *)((int)param_3 + iVar6)) {
        if ((undefined1 *)(0x30c30c3 - ((uint)puVar5 >> 1)) < puVar5) {
          puVar5 = (undefined1 *)0x0;
        }
        else {
          puVar5 = puVar5 + ((uint)puVar5 >> 1);
        }
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (*(int *)(param_1 + 8) - iVar7) / 0x54;
        }
        if (puVar5 < (undefined1 *)((int)param_3 + iVar7)) {
          iVar7 = FUN_00510480();
          puVar5 = puVar2 + iVar7;
        }
        local_84 = (undefined1 *)0x515847;
        param_3 = (undefined1 **)FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        param_4 = (undefined1 *)param_3;
        local_88 = (undefined1 *)param_3;
        local_84 = param_1;
        param_3 = (undefined1 **)FUN_00515430(*(undefined4 *)(param_1 + 4),param_2);
        local_84 = puVar2;
        local_88 = (undefined1 *)param_3;
        param_3 = (undefined1 **)FUN_00515640();
        local_88 = (undefined1 *)param_3;
        local_84 = param_1;
        FUN_00515430(param_2,*(undefined4 *)(param_1 + 8));
        local_84 = *(undefined1 **)(param_1 + 4);
        if (local_84 == (undefined1 *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (*(int *)(param_1 + 8) - (int)local_84) / 0x54;
        }
        if (local_84 != (undefined1 *)0x0) {
          local_88 = (undefined1 *)0x5158d6;
          FUN_00515610();
                    /* WARNING: Subroutine does not return */
          local_84 = &UNK_005158df;
          operator_delete(*(void **)(param_1 + 4));
        }
        *(undefined1 **)(param_1 + 0xc) = param_4 + (int)puVar5 * 0x54;
        *(undefined1 **)(param_1 + 4) = param_4;
        puVar3 = param_4 + (int)(puVar2 + iVar7) * 0x54;
        *(undefined1 **)(param_1 + 8) = puVar3;
      }
      else {
        param_4 = *(undefined1 **)(param_1 + 8);
        local_84 = param_4;
        if ((undefined1 *)(((int)param_4 - (int)param_2) / 0x54) < param_3) {
          local_1c = (undefined1 *)&local_88;
          local_88 = (undefined1 *)param_2;
          param_4 = (undefined1 *)((int)param_3 * 0x54);
          FUN_005155e0();
          local_88 = *(undefined1 **)(param_1 + 8);
          local_8 = CONCAT31(local_8._1_3_,3);
          local_84 = puVar2 + -(((int)local_88 - (int)puVar1) / 0x54);
          FUN_00515640();
          iVar7 = *(int *)(param_1 + 8);
          local_8 = 0;
          *(undefined1 **)(param_1 + 8) = param_4 + iVar7;
          local_84 = param_4 + iVar7 + -(int)param_4;
        }
        else {
          iVar7 = (int)param_3 * 0x54;
          param_2 = (undefined1 **)(param_4 + (int)param_3 * -0x54);
          local_88 = (undefined1 *)param_2;
          uVar4 = FUN_005155e0();
          *(undefined4 *)(param_1 + 8) = uVar4;
          param_3 = &local_84;
          local_84 = (undefined1 *)param_2;
          local_88 = puVar1;
          param_2 = &local_88;
          FUN_005153f0(&param_2);
          local_84 = puVar1 + iVar7;
        }
        param_2 = &local_88;
        local_88 = puVar1;
        puVar3 = (undefined1 *)FUN_005153c0();
      }
    }
  }
  if (local_60 != (void *)0x0) {
    local_84 = local_64;
    local_88 = local_5c;
    FUN_005144b0(local_60);
                    /* WARNING: Subroutine does not return */
    operator_delete(local_60);
  }
  ExceptionList = local_10;
  return puVar3;
}




/* Function: FUN_00515ab0 */

void __thiscall FUN_00515ab0(int param_1,undefined4 **param_2)

{
  void *pvVar1;
  undefined1 *puVar2;
  int iVar3;
  void *in_stack_00000018;
  undefined4 *in_stack_0000001c;
  undefined4 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057f388;
  local_c = ExceptionList;
  iVar3 = *(int *)(param_1 + 4);
  local_4 = 0;
  if (iVar3 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = (undefined1 *)((*(int *)(param_1 + 8) - iVar3) / 0x54);
  }
  if (puVar2 < param_2) {
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x54;
    }
    local_1c = &stack0x00000008;
    local_20 = (undefined1 *)((int)param_2 + -iVar3);
    local_24 = *(undefined4 **)(param_1 + 8);
    param_2 = &local_24;
    ExceptionList = &local_c;
    FUN_00515730();
  }
  else {
    ExceptionList = &local_c;
    if (iVar3 != 0) {
      local_1c = *(undefined1 **)(param_1 + 8);
      ExceptionList = &local_c;
      if (param_2 < (undefined1 *)(((int)local_1c - iVar3) / 0x54)) {
        local_20 = (undefined1 *)(*(int *)(param_1 + 4) + (int)param_2 * 0x54);
        local_24 = &param_2;
        ExceptionList = &local_c;
        param_2 = (undefined4 **)&local_20;
        FUN_005156d0();
      }
    }
  }
  pvVar1 = in_stack_00000018;
  if (in_stack_00000018 != (void *)0x0) {
    local_20 = &stack0x00000014;
    local_1c = (undefined1 *)param_2;
    local_24 = in_stack_0000001c;
    FUN_005144b0(in_stack_00000018);
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00515bc0 */

undefined4 * __fastcall FUN_00515bc0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00591628;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  param_1[0x2f] = 0;
  iVar1 = FUN_00493c27(0x58);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005111d0();
  }
  param_1[0x29] = uVar2;
  iVar1 = FUN_00493c27(0x20);
  if (iVar1 != 0) {
    uVar2 = FUN_00510aa0();
    param_1[0x2a] = uVar2;
    return param_1;
  }
  param_1[0x2a] = 0;
  return param_1;
}




/* Function: FUN_00515c60 */

undefined4 __fastcall FUN_00515c60(int param_1)

{
  if (*(int **)(param_1 + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xa4) + 4))();
  }
  if (*(int **)(param_1 + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xa8) + 4))();
  }
  operator_delete__(*(void **)(param_1 + 0xac));
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  FUN_00515680();
  return 1;
}




/* Function: FUN_00515cc0 */

void FUN_00515cc0(undefined4 param_1)

{
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
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
  undefined1 *local_4;
  
  local_4 = (undefined1 *)&local_58;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0x3f800000;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0x3f800000;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x3f800000;
  FUN_00515ab0(param_1);
  return;
}




/* Function: FUN_00515d20 */

void __fastcall FUN_00515d20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00591628;
  FUN_00515c60();
  if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x29])(1);
  }
  param_1[0x29] = 0;
  if ((undefined4 *)param_1[0x2a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a])(1);
  }
  param_1[0x2a] = 0;
  FUN_00515680();
  if ((void *)param_1[0x22] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x22]);
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FUN_0040da90();
  return;
}




/* Function: FUN_00515da0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00515da0(int param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  int iVar1;
  char *_Filename;
  FILE *_File;
  size_t sVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  float10 fVar10;
  char *_Mode;
  int local_2c;
  uint local_28;
  float local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c [2];
  undefined4 local_4;
  
  if (*(void **)(param_1 + 0x88) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_00515680();
  _Mode = "rb";
  _Filename = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              c_str(param_2);
  _File = fopen(_Filename,_Mode);
  if (_File == (FILE *)0x0) {
    return 0;
  }
  sVar2 = fread(&local_2c,4,1,_File);
  if (sVar2 == 1) {
    if (local_2c != 1) {
LAB_005161c9:
      fclose(_File);
      return 0;
    }
    sVar2 = fread(&local_2c,4,1,_File);
    if (sVar2 == 1) {
      FUN_00514310(local_2c);
      uVar7 = 0;
      local_28 = 0;
      while ((*(int *)(param_1 + 0x88) != 0 &&
             (uVar7 < (uint)((*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88)) / 0x1c)))) {
        sVar2 = fread(&local_18,4,3,_File);
        if (sVar2 != 3) goto LAB_00516198;
        local_4 = local_10;
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x88) + local_28);
        if (local_c == puVar3) {
          uVar7 = uVar7 + 1;
          local_28 = local_28 + 0x1c;
        }
        else {
          puVar3[1] = local_14;
          *puVar3 = local_18;
          puVar3[2] = local_10;
          uVar7 = uVar7 + 1;
          local_28 = local_28 + 0x1c;
        }
      }
      iVar8 = 0;
      local_28 = 0;
      while ((pcVar9 = fread_exref, *(int *)(param_1 + 0x88) != 0 &&
             (local_28 < (uint)((*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88)) / 0x1c)))) {
        iVar4 = rand();
        if (_DAT_005916b4 <= (float)iVar4 * _DAT_00588d4c) {
          local_20 = *(undefined4 *)(param_1 + 0xa4);
        }
        else {
          local_20 = *(undefined4 *)(param_1 + 0xa8);
        }
        iVar5 = rand();
        iVar4 = *(int *)(param_1 + 0x88);
        local_24 = (float)iVar5 * _DAT_00588d4c * _DAT_005b9004;
        local_24 = local_24 + local_24;
        local_1c = rand();
        *(float *)(iVar8 + 0xc + iVar4) = (float)local_1c * _DAT_005916b0 + _DAT_005916ac;
        fVar10 = (float10)fsin((float10)local_24);
        *(float *)(iVar8 + 0x10 + *(int *)(param_1 + 0x88)) = (float)fVar10;
        fVar10 = (float10)fcos((float10)local_24);
        *(float *)(iVar8 + 0x14 + *(int *)(param_1 + 0x88)) = (float)fVar10;
        local_28 = local_28 + 1;
        *(undefined4 *)(iVar8 + 0x18 + *(int *)(param_1 + 0x88)) = local_20;
        iVar8 = iVar8 + 0x1c;
      }
      sVar2 = fread(&local_2c,4,1,_File);
      if (sVar2 == 1) {
        FUN_00515cc0(local_2c);
        iVar8 = 0;
        local_24 = 0.0;
        while( true ) {
          if ((*(int *)(param_1 + 0x98) == 0) ||
             ((uint)((*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98)) / 0x54) <= (uint)local_24
             )) {
            fclose(_File);
            return 1;
          }
          iVar4 = (*pcVar9)(&local_18,4,3,_File);
          if (iVar4 != 3) break;
          puVar3 = (undefined4 *)(*(int *)(param_1 + 0x98) + iVar8);
          local_4 = local_10;
          if (local_c != puVar3) {
            puVar3[1] = local_14;
            *puVar3 = local_18;
            puVar3[2] = local_10;
          }
          iVar4 = (*pcVar9)(&local_2c,4,1,_File);
          if (iVar4 != 1) break;
          FUN_00515230(local_2c);
          iVar4 = 0;
          local_28 = 0;
          while( true ) {
            iVar5 = *(int *)(iVar8 + 0x10 + *(int *)(param_1 + 0x98));
            if ((iVar5 == 0) ||
               ((uint)(*(int *)(iVar8 + *(int *)(param_1 + 0x98) + 0x14) - iVar5 >> 4) <= local_28))
            break;
            sVar2 = fread(&local_2c,4,1,_File);
            if (sVar2 != 1) {
              fclose(_File);
              return 0;
            }
            FUN_0040af20(local_2c,0);
            iVar1 = *(int *)(iVar8 + 0x10 + *(int *)(param_1 + 0x98));
            iVar5 = iVar1 + iVar4;
            iVar1 = *(int *)(iVar1 + 4 + iVar4);
            if (iVar1 == 0) {
              sVar2 = 0;
            }
            else {
              sVar2 = *(int *)(iVar5 + 8) - iVar1 >> 2;
            }
            if (*(int *)(iVar5 + 4) == 0) {
              sVar6 = 0;
            }
            else {
              sVar6 = *(int *)(iVar5 + 8) - *(int *)(iVar5 + 4) >> 2;
            }
            sVar6 = fread(*(void **)(iVar5 + 4),4,sVar6,_File);
            if (sVar2 != sVar6) goto LAB_005161c9;
            local_28 = local_28 + 1;
            iVar4 = iVar4 + 0x10;
          }
          local_24 = (float)((int)local_24 + 1);
          iVar8 = iVar8 + 0x54;
          pcVar9 = fread_exref;
        }
      }
    }
  }
LAB_00516198:
  fclose(_File);
  return 0;
}




/* Function: FUN_00516200 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00516200(int param_1,int param_2)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  void *pvVar6;
  void *pvVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  float10 fVar20;
  float10 fVar21;
  uint local_12c;
  uint local_124;
  uint local_120;
  undefined4 *local_118;
  float local_114;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_108 [4];
  int *local_104;
  int *local_100;
  int local_fc;
  float local_ec [4];
  void *local_dc;
  void *local_d8;
  undefined4 local_d4;
  int local_d0;
  float local_cc;
  uint local_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 *local_a0;
  int local_9c;
  undefined4 local_98;
  int iStack_94;
  float fStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_80 [28];
  int iStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  puVar16 = (undefined4 *)0x0;
  local_a0 = (undefined4 *)0x0;
  local_9c = 0;
  local_98 = 0;
  local_118 = (undefined4 *)0x0;
  if (*(int *)(param_2 + 0x14) != 0) {
    local_124 = 0;
    do {
      iVar18 = *(int *)(param_2 + 0x10) + local_124;
      if (((2 < *(ushort *)(iVar18 + 2)) && (uVar1 = *(ushort *)(iVar18 + 8), uVar1 != 0xffff)) &&
         ((int)(uint)uVar1 < *(int *)(param_2 + 0x3c))) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  (local_108,(char *)(*(int *)(param_2 + 0x38) + (uint)uVar1 * 0xc4));
        FUN_00408950();
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_108);
        uVar9 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                find(local_80,"grass",0);
        if (uVar9 == 0xffffffff) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_80);
        }
        else {
          local_ec[0] = 0.0;
          local_ec[1] = 0.0;
          local_ec[2] = 0.0;
          fVar20 = (float10)FUN_00510f30();
          if ((float10)_DAT_005916b8 <= fVar20) {
            fVar2 = (local_ec[0] + local_ec[2]) * _DAT_00582ad8 + local_ec[1];
            fVar21 = (float10)_CIacos();
            if ((fVar21 / (float10)_DAT_005b9004) * (float10)_DAT_00583344 <= (float10)_DAT_005900c4
               ) {
              fVar2 = fVar2 * (float)fVar20;
              if (_DAT_005916b8 <= fVar2) {
                local_d0 = iVar18;
                local_cc = fVar2;
                FUN_00513fd0();
                std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          (local_80);
                puVar16 = local_a0;
              }
              else {
                std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          (local_80);
              }
            }
            else {
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_80);
            }
          }
          else {
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_80);
          }
        }
      }
      local_118 = (undefined4 *)((int)local_118 + 1);
      local_124 = local_124 + 0x16;
    } while (local_118 < *(uint *)(param_2 + 0x14));
  }
  if (*(void **)(param_1 + 0x88) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  for (uVar9 = 0; (puVar16 != (undefined4 *)0x0 && (uVar9 < (uint)(local_9c - (int)puVar16 >> 3)));
      uVar9 = uVar9 + 1) {
    FUN_004cf110();
  }
  FUN_00513e80();
  local_118 = puVar16;
  for (local_120 = 0;
      (puVar16 != (undefined4 *)0x0 && (local_120 < (uint)(local_9c - (int)puVar16 >> 3)));
      local_120 = local_120 + 1) {
    iVar18 = FUN_004cf110();
    if (0 < iVar18) {
      iVar10 = *(int *)(param_2 + 8);
      puVar16 = (undefined4 *)((*(ushort *)*local_118 + 2) * 0x20 + iVar10);
      local_50 = *puVar16;
      local_4c = puVar16[1];
      local_48 = puVar16[2];
      puVar16 = (undefined4 *)((*(ushort *)*local_118 + 1) * 0x20 + iVar10);
      local_38 = *puVar16;
      local_34 = puVar16[1];
      local_30 = puVar16[2];
      puVar16 = (undefined4 *)((uint)*(ushort *)*local_118 * 0x20 + iVar10);
      local_44 = *puVar16;
      local_40 = puVar16[1];
      local_3c = puVar16[2];
      thunk_FUN_00497bb2();
      piVar19 = (int *)0x0;
      uVar9 = (uint)*(ushort *)*local_118;
      piVar17 = (void *)0x0;
      local_104 = (void *)0x0;
      local_100 = (int *)0x0;
      local_fc = 0;
      if (uVar9 < ((ushort *)*local_118)[1] + uVar9) {
        iVar10 = uVar9 << 5;
        do {
          piVar11 = (int *)(iVar10 + *(int *)(param_2 + 8));
          iVar15 = *piVar11;
          fVar2 = (float)piVar11[2];
          if ((piVar17 == (void *)0x0) || (uVar12 = (int)piVar19 - (int)piVar17 >> 3, uVar12 == 0))
          {
            local_d0 = iVar15;
            local_cc = fVar2;
            if ((piVar17 != (void *)0x0) &&
               ((uint)((int)piVar19 - (int)piVar17 >> 3) < (uint)(local_fc - (int)piVar17 >> 3)))
            goto LAB_00516636;
LAB_0051668e:
            FUN_0048f470();
            piVar17 = local_104;
            piVar19 = local_100;
          }
          else {
            iStack_64 = iVar15;
            fStack_60 = fVar2;
            pfVar13 = (float *)FUN_0048e7d0();
            if (_DAT_00583354 < pfVar13[1] * pfVar13[1] + *pfVar13 * *pfVar13) {
              iStack_94 = iVar15;
              fStack_90 = fVar2;
              if ((uint)(local_fc - (int)piVar17 >> 3) <= uVar12) goto LAB_0051668e;
LAB_00516636:
              FUN_0041fe60();
              local_100 = (int *)((int)piVar19 + 8);
              piVar19 = local_100;
            }
          }
          iVar10 = iVar10 + 0x20;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (uint)((ushort *)*local_118)[1] + (uint)*(ushort *)*local_118);
        uVar9 = 0;
        if (piVar17 != (void *)0x0) {
          uVar12 = (int)piVar19 - (int)piVar17 >> 3;
          if (2 < uVar12) {
            fStack_ac = _DAT_00582ad8;
            fStack_a8 = _DAT_00582ad8;
            for (uVar14 = 0; uVar14 < uVar12; uVar14 = uVar14 + 1) {
              fStack_ac = fStack_ac + *(float *)((int)piVar17 + uVar14 * 8);
              fStack_a8 = fStack_a8 + *(float *)((int)piVar17 + uVar14 * 8 + 4);
            }
            uStack_c4 = 0;
            local_114 = 0.0;
            fStack_ac = (_DAT_00583354 / (float)uVar12) * fStack_ac;
            fStack_a8 = (_DAT_00583354 / (float)uVar12) * fStack_a8;
            local_c8 = uVar12;
            while (uVar9 < uVar12) {
              pfVar13 = (float *)FUN_0048e7d0();
              fVar2 = pfVar13[1] * pfVar13[1] + *pfVar13 * *pfVar13;
              if (fVar2 <= local_114) {
                uVar9 = uVar9 + 1;
              }
              else {
                uVar9 = uVar9 + 1;
                local_114 = fVar2;
              }
            }
            for (; iVar18 != 0; iVar18 = iVar18 + -1) {
              iVar10 = 0;
              do {
                iVar15 = rand();
                fVar2 = ((float)iVar15 * _DAT_0059160c - _DAT_00583354) * SQRT(local_114) +
                        fStack_ac;
                iVar15 = rand();
                fVar5 = ((float)iVar15 * _DAT_0059160c - _DAT_00583354) * SQRT(local_114) +
                        fStack_a8;
                local_c0 = fVar2;
                fStack_bc = fVar5;
                cVar8 = FUN_00512460();
                iVar15 = iVar10;
                if (cVar8 != '\0') break;
                iVar15 = iVar10 + 1;
                bVar4 = iVar10 < 100;
                iVar10 = iVar15;
              } while (bVar4);
              if (iVar15 < 100) {
                local_dc = (void *)0xc2c80000;
                uStack_58 = 0x42c80000;
                local_ec[3] = fVar2;
                local_d8 = (void *)fVar5;
                fStack_5c = fVar2;
                fStack_54 = fVar5;
                thunk_FUN_00497ab2();
                rand();
                iVar10 = rand();
                fVar2 = (float)iVar10 * _DAT_00588d4c * _DAT_005b9004;
                fVar2 = fVar2 + fVar2;
                rand();
                fcos((float10)fVar2);
                local_b8 = local_8c;
                local_b4 = uStack_88;
                local_b0 = uStack_84;
                fsin((float10)fVar2);
                FUN_005109c0();
                FUN_00514360();
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          operator_delete(piVar17);
        }
      }
      local_104 = (int *)0x0;
      local_100 = (int *)0x0;
      local_fc = 0;
    }
    local_118 = local_118 + 2;
    puVar16 = local_a0;
  }
  local_104 = (int *)0x0;
  local_100 = (int *)0x0;
  local_fc = 0;
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar18 = 0;
  }
  else {
    iVar18 = (*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88)) / 0x1c;
  }
  if (iVar18 != 0) {
    FUN_0040a080();
  }
  for (uVar9 = 0;
      (local_104 != (int *)0x0 && (uVar9 < (uint)((int)local_100 - (int)local_104 >> 2)));
      uVar9 = uVar9 + 1) {
    local_104[uVar9] = uVar9;
  }
  iVar18 = *(int *)(param_1 + 0x98);
  if (iVar18 != 0) {
    iVar10 = *(int *)(param_1 + 0x9c);
    for (; iVar18 != iVar10; iVar18 = iVar18 + 0x54) {
      FUN_00515260();
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x98));
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  local_dc = (void *)0x0;
  local_d8 = (void *)0x0;
  local_d4 = 0;
  local_124 = 1;
  piVar17 = local_104;
LAB_00516a98:
  if ((piVar17 == (int *)0x0) || (uVar9 = (int)local_100 - (int)piVar17 >> 2, uVar9 == 0)) {
    FUN_00515cc0();
    iVar18 = 0;
    piVar17 = (int *)((int)local_dc + 0x10);
    for (local_120 = 0;
        (pvVar7 = local_d8, *(int *)(param_1 + 0x98) != 0 &&
        (local_120 < (uint)((*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98)) / 0x54)));
        local_120 = local_120 + 1) {
      piVar19 = (int *)(*(int *)(param_1 + 0x98) + iVar18);
      if (piVar17 + -4 != piVar19) {
        *piVar19 = piVar17[-4];
        piVar19[1] = piVar17[-3];
        piVar19[2] = piVar17[-2];
      }
      FUN_00515230();
      iVar10 = *piVar17;
      if (iVar10 == 0) {
        local_c0 = 0.0;
      }
      else {
        local_c0 = (float)(piVar17[1] - iVar10 >> 2);
      }
      fStack_bc = 0.0;
      local_ec[0] = (float)FUN_004cf110();
      if (iVar10 == 0) {
        local_c8 = 0;
      }
      else {
        local_c8 = piVar17[1] - iVar10 >> 2;
      }
      uStack_c4 = 0;
      local_ec[1] = (float)FUN_004cf110();
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = piVar17[1] - iVar10 >> 2;
      }
      local_ec[2] = (float)((iVar10 - (int)local_ec[1]) - (int)local_ec[0]);
      iVar10 = 0;
      local_118 = (undefined4 *)0x0;
      local_114 = 0.0;
      while( true ) {
        iVar15 = *(int *)(iVar18 + 0x10 + *(int *)(param_1 + 0x98));
        if ((iVar15 == 0) ||
           ((uint)(*(int *)(iVar18 + 0x14 + *(int *)(param_1 + 0x98)) - iVar15 >> 4) <=
            (uint)local_114)) break;
        FUN_005132b0();
        fVar2 = local_ec[(int)local_114];
        for (; local_118 < (uint)fVar2; local_118 = (undefined4 *)((int)local_118 + 1)) {
          iVar3 = *(int *)(iVar18 + 0x10 + *(int *)(param_1 + 0x98));
          iVar15 = iVar10 + iVar3;
          iVar3 = *(int *)(iVar10 + 4 + iVar3);
          if ((iVar3 == 0) ||
             ((uint)(*(int *)(iVar15 + 0xc) - iVar3 >> 2) <=
              (uint)(*(int *)(iVar15 + 8) - iVar3 >> 2))) {
            FUN_0040a080();
          }
          else {
            iVar3 = *(int *)(iVar15 + 8);
            FUN_004520c0();
            *(int *)(iVar15 + 8) = iVar3 + 4;
          }
        }
        local_114 = (float)((int)local_114 + 1);
        iVar10 = iVar10 + 0x10;
      }
      piVar17 = piVar17 + 7;
      iVar18 = iVar18 + 0x54;
    }
    pvVar6 = local_dc;
    if (local_dc != (void *)0x0) {
      for (; pvVar6 != pvVar7; pvVar6 = (void *)((int)pvVar6 + 0x1c)) {
        FUN_00513580();
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(local_dc);
    }
    if (local_104 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_104);
    }
    if (local_a0 == (undefined4 *)0x0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(local_a0);
  }
  local_12c = 0;
  FUN_00513d50(local_80);
  FUN_00514f00();
  FUN_00513580();
  FUN_005132b0();
  local_120 = 0;
  local_b8 = *(undefined4 *)(*(int *)(param_1 + 0x88) + *piVar17 * 0x1c);
  iVar18 = *(int *)(param_1 + 0x88) + *piVar17 * 0x1c;
  local_b4 = *(undefined4 *)(iVar18 + 4);
  local_b0 = *(undefined4 *)(iVar18 + 8);
  piVar19 = piVar17;
  for (; local_120 < uVar9; local_120 = local_120 + 1) {
    pfVar13 = (float *)FUN_0041d580();
    pvVar7 = local_d8;
    if (pfVar13[2] * pfVar13[2] + pfVar13[1] * pfVar13[1] + *pfVar13 * *pfVar13 < _DAT_0059161c) {
      iVar18 = *(int *)((int)local_d8 + -0xc);
      if ((iVar18 == 0) ||
         ((uint)(*(int *)((int)local_d8 + -4) - iVar18 >> 2) <=
          (uint)(*(int *)((int)local_d8 + -8) - iVar18 >> 2))) {
        FUN_0040a080();
      }
      else {
        iVar18 = *(int *)((int)local_d8 + -8);
        FUN_004520c0();
        *(int *)((int)pvVar7 + -8) = iVar18 + 4;
        piVar19 = local_104;
      }
      local_12c = local_12c + 1;
      *piVar17 = -1;
    }
    piVar17 = piVar17 + 1;
  }
  piVar11 = piVar19;
  if (local_124 < local_12c) {
    local_124 = local_12c;
  }
  for (; piVar17 = piVar19, piVar11 != local_100; piVar11 = piVar11 + 1) {
    if (*piVar11 == -1) {
      piVar19 = piVar11;
      if (piVar11 != local_100) goto joined_r0x00516c8b;
      goto LAB_00516a98;
    }
  }
  goto LAB_00516cac;
joined_r0x00516c8b:
  while (piVar19 = piVar19 + 1, piVar19 != local_100) {
    if (*piVar19 != -1) {
      *piVar11 = *piVar19;
      piVar11 = piVar11 + 1;
    }
  }
LAB_00516cac:
  if (piVar11 != local_100) {
    local_100 = piVar11;
  }
  goto LAB_00516a98;
}




/* Function: FUN_005172c0 */

void * __thiscall FUN_005172c0(void *param_1,byte param_2)

{
  FUN_00515d20();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00517300 */

undefined4 FUN_00517300(int *param_1)

{
  (**(code **)(*param_1 + 200))(param_1,0x89,0);
  (**(code **)(*param_1 + 0xb8))(param_1,3,0);
  (**(code **)(*param_1 + 0xb8))(param_1,4,0);
  (**(code **)(*param_1 + 0xb8))(param_1,5,0);
  (**(code **)(*param_1 + 0xb8))(param_1,6,0);
  (**(code **)(*param_1 + 0xb8))(param_1,7,0);
  (**(code **)(*param_1 + 0xb8))(param_1,8,0);
  return 1;
}




/* Function: FUN_00517370 */

int __fastcall FUN_00517370(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc4;
}




/* Function: FUN_005173a0 */

int __fastcall FUN_005173a0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x44;
}




/* Function: FUN_005173d0 */

void FUN_005173d0(void)

{
  FUN_00407300();
  return;
}




/* Function: FUN_005173e0 */

void FUN_005173e0(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f3b2;
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




/* Function: FUN_00517460 */

void FUN_00517460(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    param_3 = param_3 + 4;
  }
  return;
}




/* Function: FUN_005174a0 */

void FUN_005174a0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    iVar1 = param_3 + -0x44;
    param_4 = param_4 + -0x11;
    *param_4 = *(undefined4 *)(param_3 + -0x44);
    FUN_0041d670(param_3 + -0x40);
    param_3 = iVar1;
  } while (iVar1 != param_2);
  *param_1 = param_4;
  return;
}




/* Function: FUN_005174f0 */

undefined4 __thiscall FUN_005174f0(int param_1,uint param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0xfffffff < param_2) {
    FUN_005173e0();
    return 1;
  }
  iVar1 = FUN_00493c27(param_2 * 0x10);
  *(uint *)(param_1 + 0xc) = param_2 * 0x10 + iVar1;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  return 1;
}




/* Function: FUN_00517550 */

undefined4 __thiscall FUN_00517550(int param_1,uint param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0x3c3c3c3 < param_2) {
    FUN_005173e0();
    return 1;
  }
  iVar1 = FUN_00493c27(param_2 * 0x44);
  *(uint *)(param_1 + 0xc) = param_2 * 0x44 + iVar1;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  return 1;
}




/* Function: FUN_005175b0 */

undefined4 FUN_005175b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_005174a0(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_005175f0 */

void FUN_005175f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
    param_3 = param_3 + 4;
  }
  return;
}




/* Function: FUN_00517630 */

void __thiscall
FUN_00517630(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_005175f0(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00517650 */

int __thiscall FUN_00517650(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057f3c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 4;
  }
  cVar1 = FUN_005174f0(iVar2);
  if (cVar1 != '\0') {
    local_8 = 0;
    uVar3 = FUN_005175f0(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(param_1 + 4),param_1,param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}




/* Function: FUN_00517710 */

void __fastcall FUN_00517710(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




/* Function: FUN_00517730 */

void __fastcall FUN_00517730(int param_1)

{
  if (*(void **)(param_1 + 0xb8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0xb8));
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(void **)(param_1 + 0x98) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x98));
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(void **)(param_1 + 0x78) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x38));
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}




/* Function: FUN_005177f0 */

int __thiscall FUN_005177f0(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 != 0) {
    uVar6 = *(int *)(param_2 + 8) - iVar1 >> 4;
    if (uVar6 != 0) {
      pvVar2 = *(void **)(param_1 + 4);
      if (pvVar2 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)(param_1 + 8) - (int)pvVar2 >> 4;
      }
      if (uVar6 <= uVar3) {
        FUN_00517460(iVar1,*(int *)(param_2 + 8),pvVar2,param_2);
        if (*(int *)(param_2 + 4) == 0) {
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
          return param_1;
        }
        *(int *)(param_1 + 8) =
             (*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 4) * 0x10 + *(int *)(param_1 + 4);
        return param_1;
      }
      if (pvVar2 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)(param_1 + 0xc) - (int)pvVar2 >> 4;
      }
      if (uVar6 <= uVar3) {
        if (pvVar2 == (void *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 8) - (int)pvVar2 >> 4;
        }
        iVar4 = iVar4 * 0x10 + iVar1;
        FUN_00517460(iVar1,iVar4,pvVar2,param_2);
        uVar5 = FUN_005175f0(iVar4,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8),param_1
                             ,param_2);
        *(undefined4 *)(param_1 + 8) = uVar5;
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




/* Function: FUN_00517940 */

int __thiscall FUN_00517940(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00436610(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0x44;
}




/* Function: FUN_00517970 */

void FUN_00517970(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x44) {
    FUN_005173d0();
  }
  return;
}




/* Function: FUN_005179a0 */

undefined4 * __fastcall FUN_005179a0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  FUN_00517710();
  FUN_00517710();
  FUN_00517710();
  FUN_00517710();
  FUN_00517710();
  FUN_00517710();
  return param_1;
}




/* Function: FUN_00517b90 */

void __thiscall FUN_00517b90(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != param_4) {
    iVar2 = FUN_00435110(param_4);
    iVar1 = *(int *)(param_1 + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x44) {
      FUN_005173d0();
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  *param_2 = param_3;
  return;
}




/* Function: FUN_00517bf0 */

void __fastcall FUN_00517bf0(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x44) {
    FUN_005173d0();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00517c40 */

void __thiscall
FUN_00517c40(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 local_58 [64];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057f3d8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_00407260();
  puVar1 = param_3;
  iVar5 = *(int *)(param_1 + 4);
  puVar3 = (undefined1 *)0x0;
  local_8 = 0;
  if (iVar5 != 0) {
    puVar3 = (undefined1 *)((*(int *)(param_1 + 0xc) - iVar5) / 0x44);
  }
  if (param_3 != (undefined1 *)0x0) {
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_1 + 8) - iVar5) / 0x44;
    }
    if ((undefined1 *)(0x3c3c3c3U - iVar4) < param_3) {
      FUN_005173e0();
    }
    else {
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_1 + 8) - iVar5) / 0x44;
      }
      if (puVar3 < param_3 + iVar4) {
        if ((undefined1 *)(0x3c3c3c3 - ((uint)puVar3 >> 1)) < puVar3) {
          puVar3 = (undefined1 *)0x0;
        }
        else {
          puVar3 = puVar3 + ((uint)puVar3 >> 1);
        }
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (*(int *)(param_1 + 8) - iVar5) / 0x44;
        }
        if (puVar3 < param_3 + iVar5) {
          iVar5 = FUN_005173a0();
          puVar3 = puVar1 + iVar5;
        }
        param_3 = (undefined1 *)FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        param_4 = param_3;
        param_3 = (undefined1 *)FUN_00436470(*(undefined4 *)(param_1 + 4),param_2);
        FUN_00436610(param_3,puVar1);
        param_3 = (undefined1 *)((int)param_3 + (int)puVar1 * 0x44);
        FUN_00436470(param_2,*(undefined4 *)(param_1 + 8));
        iVar5 = *(int *)(param_1 + 4);
        if (iVar5 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar5) / 0x44;
        }
        if (iVar5 != 0) {
          FUN_00517970();
                    /* WARNING: Subroutine does not return */
          operator_delete(*(void **)(param_1 + 4));
        }
        *(undefined1 **)(param_1 + 0xc) = param_4 + (int)puVar3 * 0x44;
        *(undefined1 **)(param_1 + 4) = param_4;
        *(undefined1 **)(param_1 + 8) = param_4 + (int)(puVar1 + iVar4) * 0x44;
      }
      else {
        param_4 = *(undefined1 **)(param_1 + 8);
        iVar5 = (int)param_3 * 0x44;
        if ((undefined1 *)(((int)param_4 - (int)param_2) / 0x44) < param_3) {
          param_4 = &stack0xffffff8c;
          FUN_00436aa0();
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_00517940();
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar5;
          param_3 = &stack0xffffff8c;
        }
        else {
          param_3 = &stack0xffffff8c;
          uVar2 = FUN_00436aa0();
          *(undefined4 *)(param_1 + 8) = uVar2;
          param_3 = &stack0xffffff8c;
          FUN_005175b0(&param_2);
          param_2 = &stack0xffffff8c;
        }
        FUN_004354a0();
      }
    }
  }
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_58,0x10,4,FUN_00407150);
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00517fb0 */

undefined4 * __thiscall FUN_00517fb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f42a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  FUN_00517650(param_2 + 5);
  param_1[9] = param_2[9];
  local_4 = 0;
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  FUN_00517650(param_2 + 0xd);
  param_1[0x11] = param_2[0x11];
  local_4._0_1_ = 1;
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  FUN_00517650(param_2 + 0x15);
  param_1[0x19] = param_2[0x19];
  local_4._0_1_ = 2;
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  FUN_00517650(param_2 + 0x1d);
  local_4._0_1_ = 3;
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  FUN_00517650(param_2 + 0x25);
  param_1[0x29] = param_2[0x29];
  local_4 = CONCAT31(local_4._1_3_,4);
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  FUN_00517650(param_2 + 0x2d);
  *unaff_FS_OFFSET = local_c;
  return param_1;
}




/* Function: FUN_00518120 */

int __thiscall FUN_00518120(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057f440;
  local_10 = ExceptionList;
  if (*(int *)(param_2 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x44;
  }
  ExceptionList = &local_10;
  cVar1 = FUN_00517550(iVar3);
  if (cVar1 != '\0') {
    local_8 = 0;
    uVar2 = FUN_00436470(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(param_1 + 4),param_1,param_2);
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_005181c0 */

undefined4 * __thiscall FUN_005181c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  FUN_005177f0(param_2 + 5);
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  FUN_005177f0(param_2 + 0xd);
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  FUN_005177f0(param_2 + 0x15);
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  FUN_005177f0(param_2 + 0x1d);
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  FUN_005177f0(param_2 + 0x25);
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  FUN_005177f0(param_2 + 0x2d);
  return param_1;
}




/* Function: FUN_005182f0 */

void __thiscall FUN_005182f0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057f458;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  local_4 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(int *)(param_1 + 8) - iVar1) / 0x44;
  }
  if (uVar2 < param_2) {
    ExceptionList = &local_c;
    FUN_00517c40();
  }
  else {
    ExceptionList = &local_c;
    if ((iVar1 != 0) &&
       (ExceptionList = &local_c, param_2 < (uint)((*(int *)(param_1 + 8) - iVar1) / 0x44))) {
      ExceptionList = &local_c;
      FUN_00517b90();
    }
  }
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(&stack0x0000000c,0x10,4,FUN_00407150);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_005183f0 */

void FUN_005183f0(int param_1,int param_2,undefined4 param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc4) {
    FUN_005181c0(param_3);
  }
  return;
}




/* Function: FUN_00518420 */

int __thiscall FUN_00518420(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 != 0) {
    iVar4 = *(int *)(param_2 + 8) - iVar1;
    iVar2 = iVar4 >> 0x1f;
    iVar4 = iVar4 / 0x44 + iVar2;
    uVar5 = iVar4 - iVar2;
    if (iVar4 != iVar2) {
      iVar2 = *(int *)(param_1 + 4);
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(param_1 + 8) - iVar2) / 0x44;
      }
      if (uVar5 <= uVar6) {
        uVar3 = FUN_00435110(iVar1,*(undefined4 *)(param_2 + 8),iVar2,param_2);
        FUN_00517970(uVar3,*(undefined4 *)(param_1 + 8));
        if (*(int *)(param_2 + 4) == 0) {
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
          return param_1;
        }
        *(int *)(param_1 + 8) =
             *(int *)(param_1 + 4) + ((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x44) * 0x44
        ;
        return param_1;
      }
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(param_1 + 0xc) - iVar2) / 0x44;
      }
      if (uVar5 <= uVar6) {
        iVar4 = FUN_005173a0();
        iVar4 = iVar1 + iVar4 * 0x44;
        FUN_00435110(iVar1,iVar4,iVar2,iVar4);
        uVar3 = FUN_00436470(iVar4,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8),param_1
                             ,iVar4);
        *(undefined4 *)(param_1 + 8) = uVar3;
        return param_1;
      }
      FUN_00517970(iVar2,*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)(param_1 + 4));
    }
  }
  FUN_00517bf0();
  return param_1;
}




/* Function: FUN_005185b0 */

int FUN_005185b0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_005181c0(param_1);
    param_1 = param_1 + 0xc4;
    param_3 = param_3 + 0xc4;
  } while (param_1 != param_2);
  return param_3;
}




/* Function: FUN_005185f0 */

void FUN_005185f0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    param_3 = param_3 + -0xc4;
    param_4 = param_4 + -0xc4;
    FUN_005181c0(param_3);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return;
}




/* Function: FUN_00518640 */

int FUN_00518640(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057f481;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0xc4) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_00517fb0(param_1);
    }
    param_3 = param_3 + 0xc4;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}




/* Function: FUN_005186e0 */

void FUN_005186e0(undefined4 param_1)

{
  undefined1 local_4c [64];
  
  _eh_vector_constructor_iterator_
            (local_4c,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310(0x3f800000);
  FUN_005182f0(param_1);
  return;
}




/* Function: FUN_00518730 */

void __fastcall FUN_00518730(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x44) {
    FUN_005173d0();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00518740 */

undefined4 FUN_00518740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_005185f0(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00518780 */

int FUN_00518780(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = (undefined4 *)(param_3 + 0x10);
    puVar2 = (undefined4 *)(param_1 + 0x10);
    do {
      FUN_00518420(param_1);
      if (puVar2 != puVar1) {
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
      }
      param_1 = param_1 + 0x20;
      puVar1[3] = puVar2[3];
      param_3 = param_3 + 0x20;
      puVar1 = puVar1 + 8;
      puVar2 = puVar2 + 8;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}




/* Function: FUN_005187e0 */

void FUN_005187e0(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_2 != param_3) {
    puVar1 = (undefined4 *)(param_3 + 0x10);
    puVar3 = (undefined4 *)(param_4 + 0x10);
    do {
      param_3 = param_3 + -0x20;
      param_4 = param_4 + -0x20;
      puVar2 = puVar1 + -8;
      puVar4 = puVar3 + -8;
      FUN_00518420(param_3);
      if (puVar2 != puVar4) {
        *puVar4 = *puVar2;
        puVar3[-7] = puVar1[-7];
        puVar3[-6] = puVar1[-6];
      }
      puVar3[-5] = puVar1[-5];
      puVar1 = puVar2;
      puVar3 = puVar4;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return;
  }
  *param_1 = param_4;
  return;
}




/* Function: FUN_00518850 */

void FUN_00518850(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057f4a1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_00517fb0(param_3);
    }
    param_1 = param_1 + 0xc4;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}




/* Function: FUN_005188e0 */

undefined4 __fastcall FUN_005188e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xe4);
  iVar1 = *(int *)(param_1 + 0xe8);
  if (iVar2 != iVar1) {
    do {
      FUN_005186e0(0);
      iVar1 = *(int *)(param_1 + 0xe8);
      iVar2 = iVar2 + 0x20;
    } while (iVar2 != iVar1);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}




/* Function: FUN_00518920 */

void __thiscall
FUN_00518920(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00518640(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00518950 */

void FUN_00518950(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x10);
    do {
      FUN_00518420(param_3);
      if ((undefined4 *)(param_3 + 0x10) != puVar1) {
        *puVar1 = *(undefined4 *)(param_3 + 0x10);
        puVar1[1] = *(undefined4 *)(param_3 + 0x14);
        puVar1[2] = *(undefined4 *)(param_3 + 0x18);
      }
      param_1 = param_1 + 0x20;
      puVar1[3] = *(undefined4 *)(param_3 + 0x1c);
      puVar1 = puVar1 + 8;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_005189a0 */

undefined4 FUN_005189a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_005187e0(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_005189e0 */

void FUN_005189e0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc4) {
    FUN_00517730();
  }
  return;
}




/* Function: FUN_00518a10 */

int __thiscall FUN_00518a10(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00518850(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0xc4;
}




/* Function: FUN_00518a40 */

int FUN_00518a40(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057f4c1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_00518120(param_1);
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    }
    param_3 = param_3 + 0x20;
  }
  ExceptionList = local_10;
  return param_3;
}




/* Function: FUN_00518af0 */

void __fastcall FUN_00518af0(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc4) {
    FUN_00517730();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00518b40 */

void __thiscall FUN_00518b40(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != param_4) {
    iVar2 = FUN_005185b0(param_4);
    iVar1 = *(int *)(param_1 + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0xc4) {
      FUN_00517730();
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  *param_2 = param_3;
  return;
}




/* Function: FUN_00518ba0 */

void __thiscall
FUN_00518ba0(undefined1 *param_1,undefined1 **param_2,undefined1 **param_3,undefined1 **param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *local_f4;
  undefined1 *local_f0;
  undefined1 local_dc [196];
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057f4db;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff18;
  local_f0 = (undefined1 *)0x518bd8;
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_00517fb0();
  puVar5 = (undefined1 *)param_3;
  iVar4 = *(int *)(param_1 + 4);
  puVar2 = (undefined1 *)0x0;
  local_8 = 0;
  if (iVar4 != 0) {
    puVar2 = (undefined1 *)((*(int *)(param_1 + 0xc) - iVar4) / 0xc4);
  }
  if (param_3 != (undefined1 **)0x0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0xc4;
    }
    if ((undefined1 *)(0x14e5e0aU - iVar3) < param_3) {
      FUN_005173e0();
    }
    else {
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0xc4;
      }
      if (puVar2 < (undefined1 *)((int)param_3 + iVar3)) {
        if ((undefined1 *)(0x14e5e0a - ((uint)puVar2 >> 1)) < puVar2) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar2 = puVar2 + ((uint)puVar2 >> 1);
        }
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar4) / 0xc4;
        }
        if (puVar2 < (undefined1 *)((int)param_3 + iVar4)) {
          iVar4 = FUN_00517370();
          puVar2 = puVar5 + iVar4;
        }
        local_f0 = (undefined1 *)0x518cb9;
        param_3 = (undefined1 **)FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        param_4 = param_3;
        local_f4 = (undefined1 *)param_3;
        local_f0 = param_1;
        param_3 = (undefined1 **)FUN_00518640(*(undefined4 *)(param_1 + 4),param_2);
        local_f4 = local_dc;
        local_f0 = param_1;
        FUN_00518850(param_3,puVar5);
        param_3 = (undefined1 **)((int)param_3 + (int)puVar5 * 0xc4);
        local_f4 = (undefined1 *)param_3;
        local_f0 = param_1;
        FUN_00518640(param_2,*(undefined4 *)(param_1 + 8));
        iVar4 = *(int *)(param_1 + 4);
        if (iVar4 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0xc4;
        }
        if (iVar4 != 0) {
          local_f4 = (undefined1 *)0x518d5f;
          local_f0 = (undefined1 *)iVar4;
          FUN_005189e0();
                    /* WARNING: Subroutine does not return */
          local_f0 = &UNK_00518d68;
          operator_delete(*(void **)(param_1 + 4));
        }
        *(undefined1 **)(param_1 + 0xc) = (undefined1 *)((int)param_4 + (int)puVar2 * 0xc4);
        *(undefined1 ***)(param_1 + 4) = param_4;
        *(undefined1 **)(param_1 + 8) = (undefined1 *)((int)param_4 + (int)(puVar5 + iVar3) * 0xc4);
      }
      else {
        param_4 = *(undefined1 ***)(param_1 + 8);
        iVar4 = (int)param_3 * 0xc4;
        local_f0 = (undefined1 *)param_4;
        if ((undefined1 *)(((int)param_4 - (int)param_2) / 0xc4) < param_3) {
          local_f4 = (undefined1 *)param_2;
          param_4 = &local_f4;
          FUN_00518920();
          local_f4 = *(undefined1 **)(param_1 + 8);
          local_8 = CONCAT31(local_8._1_3_,3);
          local_f0 = (undefined1 *)((int)puVar5 - ((int)local_f4 - (int)param_2) / 0xc4);
          FUN_00518a10();
          iVar4 = *(int *)(param_1 + 8) + iVar4;
          local_8 = 0;
          *(int *)(param_1 + 8) = iVar4;
          local_f0 = (undefined1 *)(iVar4 + (int)puVar5 * -0xc4);
          param_3 = &local_f4;
          local_f4 = (undefined1 *)param_2;
        }
        else {
          puVar5 = (undefined1 *)((int)param_4 + (int)param_3 * -0xc4);
          param_3 = &local_f4;
          local_f4 = puVar5;
          uVar1 = FUN_00518920();
          puVar2 = (undefined1 *)param_2;
          *(undefined4 *)(param_1 + 8) = uVar1;
          param_3 = &local_f4;
          local_f4 = (undefined1 *)param_2;
          local_f0 = puVar5;
          FUN_00518740(&param_2);
          local_f0 = puVar2 + iVar4;
          param_2 = &local_f4;
          local_f4 = puVar2;
        }
        FUN_005183f0();
      }
    }
  }
  FUN_00517730();
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00518f20 */

void FUN_00518f20(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057f501;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_00518120(param_3);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 0x14);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
    }
    param_1 = param_1 + 0x20;
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00518fd0 */

void __thiscall FUN_00518fd0(int param_1,undefined4 **param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057f518;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  local_4 = 0;
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = (undefined1 *)((*(int *)(param_1 + 8) - iVar1) / 0xc4);
  }
  if (puVar2 < param_2) {
    if (iVar1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = (*(int *)(param_1 + 8) - iVar1) / 0xc4;
    }
    local_1c = &stack0x00000008;
    local_20 = (int)param_2 - local_20;
    local_24 = *(undefined4 **)(param_1 + 8);
    param_2 = &local_24;
    ExceptionList = &local_c;
    FUN_00518ba0();
  }
  else {
    ExceptionList = &local_c;
    if (iVar1 != 0) {
      local_1c = *(undefined1 **)(param_1 + 8);
      ExceptionList = &local_c;
      if (param_2 < (undefined1 *)(((int)local_1c - iVar1) / 0xc4)) {
        local_20 = *(int *)(param_1 + 4) + (int)param_2 * 0xc4;
        local_24 = &param_2;
        ExceptionList = &local_c;
        param_2 = (undefined4 **)&local_20;
        FUN_00518b40();
      }
    }
  }
  local_1c = (undefined1 *)0x5190a5;
  FUN_00517730();
  ExceptionList = local_c;
  return;
}




/* Function: FUN_005190c0 */

void __thiscall
FUN_005190c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00518a40(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_005190f0 */

void FUN_005190f0(undefined4 param_1)

{
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)&local_c8;
  local_c8 = 0xffffffff;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_98 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_78 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_58 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_38 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_18 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_00518fd0(param_1);
  return;
}




/* Function: FUN_005191d0 */

void FUN_005191d0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_00518730();
  }
  return;
}




/* Function: FUN_00519200 */

int __thiscall FUN_00519200(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00518f20(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x20 + param_2;
}




/* Function: FUN_00519230 */

int __fastcall FUN_00519230(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_c4 [49];
  
  if (*(int *)(param_1 + 0xcc) < 0) {
    return -1;
  }
  FUN_005179a0();
  local_c4[0] = *(int *)(param_1 + 0xcc);
  uVar1 = local_c4[0] + 1;
  *(uint *)(param_1 + 0xcc) = uVar1;
  if (*(int *)(param_1 + 0xd4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4)) / 0xc4;
  }
  if (uVar3 < uVar1) {
    FUN_005190f0(uVar1);
  }
  FUN_005181c0(local_c4);
  iVar2 = local_c4[0];
  FUN_00517730();
  return iVar2;
}




/* Function: FUN_005192e0 */

void __fastcall FUN_005192e0(int param_1)

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
    FUN_00518730();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00519330 */

void __thiscall FUN_00519330(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != param_4) {
    iVar2 = FUN_00518780(param_4);
    iVar1 = *(int *)(param_1 + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x20) {
      FUN_00518730();
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  *param_2 = param_3;
  return;
}




/* Function: FUN_00519390 */

void __thiscall FUN_00519390(undefined1 *param_1,undefined1 *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057f538;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_50 = (undefined1 *)0x5193c2;
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_00518120();
  local_2c = *(undefined4 *)(param_4 + 0x10);
  local_28 = *(undefined4 *)(param_4 + 0x14);
  local_24 = *(undefined4 *)(param_4 + 0x18);
  local_20 = *(undefined4 *)(param_4 + 0x1c);
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
      FUN_005173e0();
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
        local_50 = (undefined1 *)0x519483;
        puVar3 = (undefined1 *)FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        local_54 = puVar3;
        local_50 = param_1;
        local_1c = puVar3;
        iVar2 = FUN_00518a40(*(undefined4 *)(param_1 + 4));
        local_54 = local_3c;
        local_50 = param_1;
        FUN_00518f20(iVar2);
        local_54 = (undefined1 *)(iVar2 + param_3 * 0x20);
        local_50 = param_1;
        FUN_00518a40(param_2);
        iVar2 = *(int *)(param_1 + 4);
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar2 >> 5;
        }
        if (iVar2 != 0) {
          local_54 = (undefined1 *)0x519516;
          local_50 = (undefined1 *)iVar2;
          FUN_005191d0();
                    /* WARNING: Subroutine does not return */
          local_50 = &UNK_0051951f;
          operator_delete(*(void **)(param_1 + 4));
        }
        *(undefined1 **)(param_1 + 4) = puVar3;
        *(undefined1 **)(param_1 + 0xc) = puVar3 + uVar1 * 0x20;
        *(undefined1 **)(param_1 + 8) = puVar3 + (param_3 + iVar5) * 0x20;
      }
      else {
        local_50 = *(undefined1 **)(param_1 + 8);
        if ((uint)((int)local_50 - (int)param_2 >> 5) < param_3) {
          local_1c = (undefined1 *)&local_54;
          local_54 = param_2;
          FUN_005190c0();
          local_54 = *(undefined1 **)(param_1 + 8);
          local_8 = CONCAT31(local_8._1_3_,3);
          local_50 = (undefined1 *)(param_3 - ((int)local_54 - (int)param_2 >> 5));
          FUN_00519200();
          iVar2 = *(int *)(param_1 + 8) + param_3 * 0x20;
          local_8 = 0;
          *(int *)(param_1 + 8) = iVar2;
          local_50 = (undefined1 *)(iVar2 + param_3 * -0x20);
        }
        else {
          puVar3 = local_50 + param_3 * -0x20;
          local_54 = puVar3;
          local_1c = local_50;
          uVar4 = FUN_005190c0();
          *(undefined4 *)(param_1 + 8) = uVar4;
          local_54 = param_2;
          local_50 = puVar3;
          FUN_005189a0();
          local_50 = param_2 + param_3 * 0x20;
        }
        local_54 = param_2;
        FUN_00518950();
      }
    }
  }
  FUN_00517bf0();
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00519690 */

void __thiscall FUN_00519690(int param_1,undefined4 **param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *local_20;
  int local_1c;
  undefined1 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057f558;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  local_4 = 0;
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = (undefined1 *)(*(int *)(param_1 + 8) - iVar1 >> 5);
  }
  if (puVar2 < param_2) {
    if (iVar1 == 0) {
      local_1c = 0;
    }
    else {
      local_1c = *(int *)(param_1 + 8) - iVar1 >> 5;
    }
    local_18 = &stack0x00000008;
    local_1c = (int)param_2 - local_1c;
    local_20 = *(undefined4 **)(param_1 + 8);
    param_2 = &local_20;
    ExceptionList = &local_c;
    FUN_00519390();
  }
  else {
    ExceptionList = &local_c;
    if ((iVar1 != 0) &&
       (local_18 = *(undefined1 **)(param_1 + 8), ExceptionList = &local_c,
       param_2 < (undefined1 *)((int)local_18 - iVar1 >> 5))) {
      local_1c = (int)param_2 * 0x20 + *(int *)(param_1 + 4);
      local_20 = &param_2;
      ExceptionList = &local_c;
      param_2 = (undefined4 **)&local_1c;
      FUN_00519330();
    }
  }
  local_18 = (undefined1 *)0x519734;
  FUN_00517bf0();
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00519750 */

undefined4 * __fastcall FUN_00519750(undefined4 *param_1)

{
  float fVar1;
  
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00591710;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x3f800000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0xbf800000;
  param_1[0x27] = 0xbf800000;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x3f800000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x3f800000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0xbf800000;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x43] = 3;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0xbf800000;
  fVar1 = std::numeric_limits<float>::max();
  param_1[0x66] = 0;
  param_1[0x57] = 0x3f800000;
  param_1[0x67] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x68] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 3;
  param_1[0x69] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0x3f800000;
  param_1[0x56] = SQRT(fVar1);
  fVar1 = std::numeric_limits<float>::max();
  param_1[0x71] = 0x3f800000;
  param_1[0x72] = 0;
  param_1[0x80] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x81] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 3;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x70] = SQRT(fVar1);
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0x3f800000;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  fVar1 = std::numeric_limits<float>::max();
  param_1[0x9a] = 0;
  param_1[0x8b] = 0x3f800000;
  param_1[0x9b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x9c] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 3;
  param_1[0x9d] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0xbf800000;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0x8a] = SQRT(fVar1);
  fVar1 = std::numeric_limits<float>::max();
  param_1[0xa5] = 0x3f800000;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 3;
  param_1[0xb4] = 0;
  param_1[0xa4] = SQRT(fVar1);
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0xbf800000;
  param_1[0xbd] = 0;
  fVar1 = std::numeric_limits<float>::max();
  param_1[0xce] = 0;
  param_1[0xbf] = 0x3f800000;
  param_1[0xcf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xd0] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 3;
  param_1[0xd1] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0x3f800000;
  param_1[0xd7] = 0;
  param_1[0xbe] = SQRT(fVar1);
  fVar1 = std::numeric_limits<float>::max();
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xd9] = 0x3f800000;
  param_1[0xd8] = SQRT(fVar1);
  return param_1;
}




/* Function: FUN_00519ce0 */

undefined1 __fastcall FUN_00519ce0(int param_1)

{
  *(undefined4 *)(param_1 + 0xcc) = 0;
  FUN_005192e0();
  return 1;
}




/* Function: FUN_00519d00 */

void FUN_00519d00(undefined4 param_1)

{
  undefined1 auStack_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_4;
  
  local_4 = auStack_24;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_00519690(param_1);
  return;
}




/* Function: FUN_00519d30 */

void __fastcall FUN_00519d30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00591710;
  FUN_00519ce0();
  if ((void *)param_1[0xe0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0xe0]);
  }
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  FUN_005192e0();
  FUN_00518af0();
  FUN_0040da90();
  return;
}




/* Function: FUN_00519d90 */

void __fastcall FUN_00519d90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0xd4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4)) / 0xc4;
  }
  FUN_00519d00(iVar2);
  *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  uVar1 = FUN_0041e5b0("Light manager successfully initialized");
  FUN_0040a410(uVar1);
  if (*(int *)(param_1 + 0xd4) != 0) {
    if ((*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4)) / 0xc4 != 0) {
      if ((*(int *)(param_1 + 0xd4) == 0) ||
         ((uint)((*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4)) / 0xc4) < 2)) {
        if (*(int *)(param_1 + 0xd4) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4)) / 0xc4;
        }
        pcVar3 = "There is [%u] light were allocated by objects";
      }
      else if (*(int *)(param_1 + 0xd4) == 0) {
        iVar2 = 0;
        pcVar3 = "There are [%u] lights were allocated by objects";
      }
      else {
        iVar2 = (*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4)) / 0xc4;
        pcVar3 = "There are [%u] lights were allocated by objects";
      }
      uVar1 = FUN_0041e5b0(pcVar3,iVar2);
      FUN_0040a410(uVar1);
      return;
    }
  }
  uVar1 = FUN_0041e5b0("There is no lights were allocated by objects");
  FUN_0040a410(uVar1);
  return;
}




/* Function: FUN_00519ed0 */

void * __thiscall FUN_00519ed0(void *param_1,byte param_2)

{
  FUN_00519d30();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00519ef0 */

void __fastcall FUN_00519ef0(int param_1)

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
  FUN_004f67b0(&local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00519f30 */

void __thiscall FUN_00519f30(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0057f570;
  local_10 = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004520c0(iVar1,param_2,param_3,param_1,param_3);
  *(int *)(param_1 + 8) = iVar1 + param_2 * 4;
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00519fb0 */

undefined1 * __thiscall FUN_00519fb0(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f58b;
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
  FUN_00519f30(9,&param_2);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0051a050 */

undefined4 __fastcall FUN_0051a050(undefined4 param_1)

{
  undefined1 local_11;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f5a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_00519fb0(&local_11,&local_11);
  local_4 = 0;
  FUN_00519fb0(&local_11,&local_11);
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0051a0b0 */

void __thiscall FUN_0051a0b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  FUN_0054aa40(param_2);
  return;
}




/* Function: FUN_0051a0d0 */

void FUN_0051a0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char local_100 [256];
  
  piVar1 = DAT_005b7ec0;
  if (DAT_005b7ec0 != (int *)0x0) {
    _snprintf(local_100,0xff,"Close %s%d",param_2,param_3);
    (**(code **)(*piVar1 + 0x44))(param_1,0xffffffff,local_100);
  }
  return;
}




/* Function: FUN_0051a130 */

void FUN_0051a130(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  int *piVar1;
  char local_100 [256];
  
  piVar1 = DAT_005b7ec0;
  if (DAT_005b7ec0 != (int *)0x0) {
    _snprintf(local_100,0xff,"Pitch %s%d %f",param_2,param_4,(double)param_3);
    (**(code **)(*piVar1 + 0x44))(param_1,0xffffffff,local_100);
  }
  return;
}




/* Function: FUN_0051a1a0 */

void FUN_0051a1a0(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  int *piVar1;
  char local_100 [256];
  
  piVar1 = DAT_005b7ec0;
  if (DAT_005b7ec0 != (int *)0x0) {
    _snprintf(local_100,0xff,"Gain %s%d %f 0 1",param_2,param_4,(double)param_3);
    (**(code **)(*piVar1 + 0x44))(param_1,0xffffffff,local_100);
  }
  return;
}




/* Function: FUN_0051a210 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_0051a210(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 in_EAX;
  uint uVar3;
  
  if (*(float *)(param_1 + 0x74) < *(float *)(param_1 + 0x70)) {
    fVar1 = *(float *)(param_1 + 0x78);
    fVar2 = (*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x74)) * (float)_DAT_00588830 +
            *(float *)(param_1 + 0x74);
    uVar3 = CONCAT22((short)((uint)in_EAX >> 0x10),
                     (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                     (ushort)(fVar2 == fVar1) << 0xe);
    if (fVar2 < fVar1) goto LAB_0051a266;
  }
  fVar1 = *(float *)(param_1 + 0x74);
  fVar2 = *(float *)(param_1 + 0x70);
  uVar3 = (uint)(ushort)((ushort)(fVar1 < fVar2) << 8 | (ushort)(fVar1 == fVar2) << 0xe);
  if ((fVar1 < fVar2 || (fVar1 == fVar2) != 0) ||
     (fVar1 = *(float *)(param_1 + 0x78),
     fVar2 = *(float *)(param_1 + 0x74) -
             (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x70)) * (float)_DAT_00588830,
     uVar3 = (uint)(ushort)((ushort)(fVar2 < fVar1) << 8 | (ushort)(fVar2 == fVar1) << 0xe),
     fVar2 < fVar1 || (fVar2 == fVar1) != 0)) {
    return uVar3;
  }
LAB_0051a266:
  return CONCAT31((int3)(uVar3 >> 8),1);
}




/* Function: FUN_0051a270 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __fastcall FUN_0051a270(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = _DAT_00582ad8;
  if (*(float *)(param_1 + 0x74) < *(float *)(param_1 + 0x70)) {
    fVar3 = (*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x74)) * _DAT_0058b9b0;
  }
  fVar1 = *(float *)(param_1 + 0x70);
  fVar2 = *(float *)(param_1 + 0x74);
  if (fVar1 < fVar2) {
    fVar3 = (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x70)) * _DAT_0059187c;
  }
  *(float *)(param_1 + 0x7c) = fVar3;
  return CONCAT11(fVar1 < fVar2 | (byte)((ushort)((ushort)(NAN(fVar1) || NAN(fVar2)) << 10) >> 8) |
                  (byte)((ushort)((ushort)(fVar1 == fVar2) << 0xe) >> 8),1);
}




/* Function: FUN_0051a2c0 */

void __fastcall FUN_0051a2c0(int param_1)

{
  *(undefined1 *)(param_1 + 0x83) = 1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}




/* Function: FUN_0051a2d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051a2d0(int param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x448) != 0) {
    fVar3 = (float10)FUN_004eaa4c(*(int *)(param_1 + 0x448));
    fVar1 = *(float *)(param_1 + 0x3fc);
    fVar2 = (float10)_DAT_0058aa18;
    FUN_004eaa6c(*(undefined4 *)(param_1 + 0x448),1,*(undefined4 *)(param_1 + 0x5b0));
    FUN_004eaa6c(*(undefined4 *)(param_1 + 0x448),0,-*(float *)(param_1 + 0x5b0));
    FUN_004eaa6c(*(undefined4 *)(param_1 + 0x448),2,(float)(((float10)fVar1 - fVar3) * fVar2));
  }
  if (*(int *)(param_1 + 0x44c) != 0) {
    fVar3 = (float10)FUN_004eaa4c(*(int *)(param_1 + 0x44c));
    fVar1 = *(float *)(param_1 + 0x3fc);
    fVar2 = (float10)_DAT_0058aa18;
    FUN_004eaa6c(*(undefined4 *)(param_1 + 0x44c),1,*(undefined4 *)(param_1 + 0x5b0));
    FUN_004eaa6c(*(undefined4 *)(param_1 + 0x44c),0,-*(float *)(param_1 + 0x5b0));
    FUN_004eaa6c(*(undefined4 *)(param_1 + 0x44c),2,(float)(((float10)fVar1 - fVar3) * fVar2));
  }
  return;
}




/* Function: FUN_0051a3c0 */

undefined4 __fastcall FUN_0051a3c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x430);
}




/* Function: FUN_0051a3d0 */

undefined4 __fastcall FUN_0051a3d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x434);
}




/* Function: FUN_0051a3e0 */

void __thiscall FUN_0051a3e0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x430) != param_2) {
    *(int *)(param_1 + 0x434) = *(int *)(param_1 + 0x430);
    *(int *)(param_1 + 0x430) = param_2;
  }
  return;
}




/* Function: FUN_0051a400 */

void __thiscall FUN_0051a400(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x438) = param_2;
  return;
}




/* Function: FUN_0051a410 */

undefined4 __fastcall FUN_0051a410(int param_1)

{
  return *(undefined4 *)(param_1 + 0x438);
}




/* Function: FUN_0051a420 */

void __fastcall FUN_0051a420(int param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  
  srand(DAT_005b7ed0);
  pcVar3 = (char *)(param_1 + 0x54a);
  iVar4 = 5;
  do {
    iVar1 = rand();
    cVar2 = (char)(iVar1 % 10) + '0';
    pcVar3[-6] = cVar2;
    *pcVar3 = cVar2;
    pcVar3 = pcVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined1 *)(param_1 + 0x549) = 0;
  *(undefined1 *)(param_1 + 0x54f) = 0;
  return;
}




/* Function: FUN_0051a470 */

undefined1 __fastcall FUN_0051a470(int param_1)

{
  return *(undefined1 *)(param_1 + 0x4f8);
}




/* Function: FUN_0051a480 */

void __thiscall FUN_0051a480(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x4e3) = 0;
  *(undefined4 *)(param_1 + 0x524) = 0x41200000;
  FUN_0051a0d0(param_2,"Engine",*(undefined4 *)(param_1 + 0x43c));
  return;
}




/* Function: FUN_0051a4b0 */

undefined1 __fastcall FUN_0051a4b0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x4e6);
}




/* Function: FUN_0051a4d0 */

int __fastcall FUN_0051a4d0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}




/* Function: FUN_0051a500 */

undefined4 __thiscall FUN_0051a500(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_40 [64];
  
  FUN_00407260(param_1);
  FUN_00547ad0();
  FUN_00407260(local_40);
  FUN_00407300();
  return param_2;
}




/* Function: FUN_0051a540 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051a540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6)

{
  int *piVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined4 uStack_134;
  undefined4 uStack_124;
  char *pcStack_120;
  char local_10c [12];
  char local_100 [252];
  undefined4 uStack_4;
  
  piVar1 = DAT_005b7ec0;
  if (DAT_005b7ec0 != (int *)0x0) {
    if (param_5 == 0) {
      FUN_0041caa0();
      pcStack_120 = local_10c;
      uStack_124 = 0x51a582;
      pfVar2 = (float *)FUN_0041d580();
      if (_DAT_0058ac30 < SQRT(pfVar2[2] * pfVar2[2] + pfVar2[1] * pfVar2[1] + *pfVar2 * *pfVar2)) {
        return;
      }
    }
    pcStack_120 = (char *)param_6;
    uStack_124 = param_3;
    uStack_134 = 0x51a5df;
    _snprintf(local_100,0xff,"Close %s%d");
    pcStack_120 = local_100;
    uStack_124 = 0xffffffff;
    (**(code **)(*piVar1 + 0x44))();
    uStack_134 = param_4;
    puStack_138 = (undefined1 *)param_2;
    uStack_13c = uStack_4;
    _snprintf(local_10c,0xff,"Open %s %d %d %s%d");
    uStack_134 = param_1;
    puStack_138 = (undefined1 *)0x51a632;
    (**(code **)(*piVar1 + 0x44))();
    puStack_138 = (undefined1 *)param_6;
    uStack_13c = param_3;
    _snprintf(&stack0xfffffee8,0xff,"Gain %s%d 1 0 1");
    puStack_138 = &stack0xfffffee8;
    uStack_13c = 0xffffffff;
    (**(code **)(*piVar1 + 0x44))(param_1);
    _snprintf((char *)&uStack_124,0xff,"Dist %s%d 3000 1000",param_3,param_6);
    (**(code **)(*piVar1 + 0x44))(param_1,0xffffffff,&uStack_124);
    uVar3 = FUN_004cf110();
    uVar3 = FUN_004cf110(uVar3);
    uVar3 = FUN_004cf110(uVar3);
    _snprintf(&stack0xfffffed0,0xff,"Move %s%d %d %d %d",param_3,param_6,uVar3);
    (**(code **)(*piVar1 + 0x44))(param_1,0xffffffff,&stack0xfffffed0);
    _snprintf((char *)&uStack_13c,0xff,"Play %s%d",param_3,param_6);
    (**(code **)(*piVar1 + 0x44))(param_1,0xffffffff,&uStack_13c);
  }
  return;
}




/* Function: FUN_0051a710 */

void FUN_0051a710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  char local_100 [256];
  
  piVar1 = DAT_005b7ec0;
  if (DAT_005b7ec0 != (int *)0x0) {
    uVar2 = FUN_004cf110();
    uVar2 = FUN_004cf110(uVar2);
    uVar2 = FUN_004cf110(uVar2);
    _snprintf(local_100,0xff,"Move %s%d %d %d %d",param_2,param_4,uVar2);
    (**(code **)(*piVar1 + 0x44))(param_1,0xffffffff,local_100);
  }
  return;
}




/* Function: FUN_0051a880 */

void __fastcall FUN_0051a880(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}




/* Function: FUN_0051a8a0 */

void __thiscall FUN_0051a8a0(int param_1,undefined4 param_2,float param_3)

{
  *(float *)(param_1 + 0x3fc) = param_3;
  if (*(float *)(param_1 + 0x5b0) < param_3) {
    *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_1 + 0x5b0);
  }
  if (*(float *)(param_1 + 0x3fc) < -*(float *)(param_1 + 0x5b0)) {
    *(float *)(param_1 + 0x3fc) = -*(float *)(param_1 + 0x5b0);
    FUN_0051a2d0(param_2);
    return;
  }
  FUN_0051a2d0(param_2);
  return;
}




/* Function: FUN_0051a910 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0051a910(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  
  param_3 = param_3 + *(float *)(param_1 + 0x3fc);
  *(float *)(param_1 + 0x3fc) = param_3;
  fVar1 = *(float *)(param_1 + 0x4dc) / *(float *)(param_1 + 0x5b8);
  if ((float)_DAT_00582af0 < fVar1) {
    fVar1 = _DAT_00583354;
  }
  if (fVar1 < (float)_DAT_00582ae8) {
    fVar1 = _DAT_00582ad8;
  }
  fVar1 = ((float)_DAT_00582af0 - fVar1 * (float)_DAT_0058ac20) * *(float *)(param_1 + 0x5b0) *
          (float)_DAT_0058a9f0;
  if (fVar1 < param_3) {
    *(float *)(param_1 + 0x3fc) = fVar1;
  }
  if (*(float *)(param_1 + 0x3fc) < -fVar1) {
    *(float *)(param_1 + 0x3fc) = -fVar1;
  }
  if (ABS(*(float *)(param_1 + 0x3fc)) < (float)_DAT_00588800) {
    *(undefined4 *)(param_1 + 0x3fc) = 0x3c23d70a;
  }
  FUN_0051a2d0(param_2);
  return;
}




/* Function: FUN_0051ac70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051ac70(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float local_c [2];
  float fStack_4;
  
  uVar1 = FUN_0041d550(local_c,param_1 + 0x121,param_1 + 0x11e,0x40000000);
  FUN_0043fa40(&local_18,uVar1);
  uVar1 = (**(code **)(*param_1 + 0x88))(&local_18);
  puVar2 = (undefined4 *)FUN_00548704(local_c,uVar1);
  if (puVar2 != &local_18) {
    local_18 = *puVar2;
    uStack_14 = puVar2[1];
    uStack_10 = puVar2[2];
  }
  FUN_0041d580(local_c,param_1 + 0x178,&local_18);
  param_1[0x10b] = (int)SQRT(local_c[0] * local_c[0] + fStack_4 * fStack_4 + _DAT_00582ad8);
  return;
}




/* Function: FUN_0051ada0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0051ada0(int *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int local_18;
  int local_14;
  float local_10;
  undefined1 local_c [12];
  
  *(undefined1 *)((int)param_1 + 0x4e6) = param_2;
  uVar1 = FUN_0041d550(local_c,param_1 + 0x121,param_1 + 0x11e,0x40000000);
  FUN_0043fa40(&local_18,uVar1);
  local_10 = local_10 - _DAT_00588860;
  uVar1 = (**(code **)(*param_1 + 0x88))(&local_18);
  piVar2 = (int *)FUN_00548704(local_c,uVar1);
  if (piVar2 != &local_18) {
    local_18 = *piVar2;
    local_14 = piVar2[1];
    local_10 = (float)piVar2[2];
  }
  if (&local_18 == param_1 + 0x134) {
    return;
  }
  param_1[0x136] = (int)local_10;
  param_1[0x134] = local_18;
  param_1[0x135] = local_14;
  return;
}




/* Function: FUN_0051b5a0 */

bool __fastcall FUN_0051b5a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    return true;
  }
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  iVar1 = iVar2 >> 0x1f;
  return iVar2 / 0x18 + iVar1 == iVar1;
}




/* Function: FUN_0051b5d0 */

void FUN_0051b5d0(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f632;
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




/* Function: FUN_0051b650 */

void FUN_0051b650(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  while (param_2 != param_3) {
    puVar1 = param_3 + -6;
    puVar2 = param_4 + -6;
    if (puVar1 != puVar2) {
      *puVar2 = *puVar1;
      param_4[-5] = param_3[-5];
      param_4[-4] = param_3[-4];
    }
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




/* Function: FUN_0051b6b0 */

void __thiscall FUN_0051b6b0(int param_1,uint param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f632;
  local_c = ExceptionList;
  if (0x1d41d41U - *(int *)(param_1 + 8) < param_2) {
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




/* Function: FUN_0051b750 */

void FUN_0051b750(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    do {
      if (param_3 != param_1) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
      }
      if (param_1 + 3 != param_3 + 3) {
        param_1[3] = param_3[3];
        param_1[4] = param_3[4];
      }
      param_1[5] = param_3[5];
      param_1 = param_1 + 6;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_0051b7a0 */

undefined4 FUN_0051b7a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0051b650(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_0051bed0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0051bed0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 extraout_ST1;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int local_6c;
  uint uStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [64];
  
  iVar3 = thunk_FUN_004ffd30(param_2,param_3);
  if ((*(char *)((int)param_1 + 6) != '\0') &&
     (local_7c = (float)param_1[0x87], local_7c < _DAT_00582ad8 == (local_7c == _DAT_00582ad8))) {
    if (_DAT_00583354 < local_7c) {
      local_7c = 1.0;
    }
    local_6c = iVar3;
    if ((int *)param_1[0xab] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0xab] + 0x24))(param_2,param_3);
    }
    if ((int *)param_1[0xac] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0xac] + 0x24))(param_2,param_3);
    }
    if (0 < iVar3) {
      uVar4 = (**(code **)(*param_1 + 0x88))();
      FUN_00407260(uVar4);
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      FUN_00545c38(&uStack_78);
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0x3f800000;
      FUN_005488cc(&fStack_64,&uStack_78,auStack_40);
      FUN_0041d4b0();
      if (param_1[0xd6] != 0) {
        if (*(char *)((int)param_1 + 0x3cf) != '\0') {
          if (param_1[0xb6] != 1) {
            uVar2 = FUN_0051b5a0();
            *(undefined1 *)((int)param_1 + 0x279) = uVar2;
          }
          iVar8 = param_1[0xd3];
          if (iVar8 != param_1[0xd4]) {
            iVar7 = iVar8 + 0xc;
            do {
              uVar4 = (**(code **)(*param_1 + 0x88))();
              FUN_005488cc(&uStack_78,iVar8,uVar4);
              uVar4 = FUN_0041caa0();
              FUN_0041d580(&fStack_90,&uStack_78,uVar4);
              fVar1 = _DAT_00583354 /
                      SQRT(fStack_90 * fStack_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88);
              fStack_90 = fStack_90 * fVar1;
              fStack_8c = fStack_8c * fVar1;
              fStack_88 = fStack_88 * fVar1;
              if ((float)_DAT_00591250 <
                  fStack_64 * fStack_90 + fStack_60 * fStack_8c + fStack_5c * fStack_88) {
                fStack_80 = (float)(uint)*(byte *)(param_1 + 0xf4);
                uVar5 = FUN_004cf110();
                uVar5 = ((uVar5 & 0xffffffc0 | 0xffffff00) << 8 | uVar5 & 0xc0) << 8 | uVar5 & 0xc0;
                if ((float10)_DAT_00587d94 <= extraout_ST1) {
                  FUN_0041f2a0(&uStack_78,0x43480000,param_1[0xd6],8,iVar7,uVar5);
                }
                else {
                  FUN_0041f2a0(&uStack_78,0x43480000,param_1[0xd6],9,iVar7,uVar5);
                }
              }
              iVar8 = iVar8 + 0x18;
              iVar7 = iVar7 + 0x18;
              iVar3 = local_6c;
            } while (iVar8 != param_1[0xd4]);
          }
        }
        if ((param_1[0xd6] != 0) && (*(char *)((int)param_1 + 0x3d3) != '\0')) {
          iVar8 = param_1[0xe1];
          fStack_80 = 0.0;
          if (iVar8 != param_1[0xe2]) {
            iVar7 = iVar8 + 0xc;
            do {
              uVar4 = (**(code **)(*param_1 + 0x88))();
              FUN_005488cc(&uStack_78,iVar8,uVar4);
              uVar4 = FUN_0041caa0();
              FUN_0041d580(&fStack_90,&uStack_78,uVar4);
              fStack_84 = SQRT(fStack_8c * fStack_8c + fStack_88 * fStack_88 + fStack_90 * fStack_90
                              );
              fVar1 = _DAT_00583354 / fStack_84;
              fStack_90 = fStack_90 * fVar1;
              fStack_8c = fStack_8c * fVar1;
              fStack_88 = fStack_88 * fVar1;
              fVar9 = (float10)FUN_0041cb80();
              fVar9 = (float10)fsin(fVar9 * (float10)_DAT_00588be0 + (float10)fStack_80);
              if (fVar9 <= (float10)_DAT_00582ad8) {
                uStack_68 = (uint)*(byte *)(param_1 + 0xf4);
                uVar5 = FUN_004cf110();
                uVar5 = uVar5 & 0xf0 | 0xff000000;
                if (fStack_84 < _DAT_00587d94) {
                  uVar4 = 9;
                  goto LAB_0051c35b;
                }
                iVar3 = param_1[0xd6];
                uVar4 = 8;
              }
              else {
                uStack_68 = (uint)*(byte *)(param_1 + 0xf4);
                uVar5 = FUN_004cf110();
                uVar5 = (uVar5 & 0xfffffff0 | 0xffffff00) << 0x10;
                if (_DAT_00587d94 <= fStack_84) {
                  uVar4 = 8;
LAB_0051c35b:
                  iVar3 = param_1[0xd6];
                }
                else {
                  iVar3 = param_1[0xd6];
                  uVar4 = 9;
                }
              }
              FUN_0041f2a0(&uStack_78,0x43160000,iVar3,uVar4,iVar7,uVar5);
              fStack_80 = fStack_80 + _DAT_00591a5c;
              iVar8 = iVar8 + 0x18;
              iVar7 = iVar7 + 0x18;
              iVar3 = local_6c;
            } while (iVar8 != param_1[0xe2]);
          }
        }
      }
      if ((param_1[0xdb] != 0) &&
         (((_DAT_00582ad8 < (float)param_1[0xe9] || (*(char *)((int)param_1 + 0x3cf) != '\0')) &&
          (iVar8 = param_1[0xd8], iVar3 = local_6c, iVar8 != param_1[0xd9])))) {
        fStack_84 = (float)(iVar8 + 0xc);
        do {
          uVar4 = (**(code **)(*param_1 + 0x88))();
          FUN_005488cc(auStack_58,iVar8,uVar4);
          uVar4 = FUN_0041caa0();
          FUN_0041d580(&fStack_90,auStack_58,uVar4);
          fStack_80 = SQRT(fStack_8c * fStack_8c + fStack_88 * fStack_88 + fStack_90 * fStack_90);
          fVar1 = _DAT_00583354 / fStack_80;
          fStack_90 = fStack_90 * fVar1;
          fStack_8c = fStack_8c * fVar1;
          fStack_88 = fStack_88 * fVar1;
          pfVar6 = (float *)FUN_0041d410(auStack_4c);
          if ((float)_DAT_00591250 <
              fStack_90 * *pfVar6 + fStack_8c * pfVar6[1] + fStack_88 * pfVar6[2]) {
            uVar5 = FUN_004cf110();
            uVar5 = uVar5 & 0xffffffc0;
            if ((float)param_1[0xe9] <= _DAT_00582ad8) {
              uVar5 = (int)uVar5 >> 1;
            }
            iVar3 = (((-(uint)((char)param_1[0xf4] != '\0') & 0x7f) + 0x80) * 0x100 | uVar5 & 0xff)
                    << 0x10;
            uVar4 = (**(code **)(*param_1 + 0x88))();
            FUN_005488cc(&uStack_78,iVar8,uVar4);
            if (_DAT_00587d94 <= fStack_80) {
              FUN_0041f2a0(&uStack_78,0x42b40000,param_1[0xdb],8,fStack_84,iVar3);
            }
            else {
              FUN_0041f2a0(&uStack_78,0x42b40000,param_1[0xdb],9,fStack_84,iVar3);
            }
          }
          iVar8 = iVar8 + 0x18;
          fStack_84 = (float)((int)fStack_84 + 0x18);
          iVar3 = local_6c;
        } while (iVar8 != param_1[0xd9]);
      }
      FUN_00407300();
    }
  }
  return iVar3;
}




/* Function: FUN_0051d020 */

void __fastcall FUN_0051d020(int param_1)

{
  int extraout_EDX;
  
  if (*(int *)(param_1 + 0x5fc) != *(int *)(param_1 + 0x600)) {
    do {
      FUN_0051a2c0();
    } while (extraout_EDX + 4 != *(int *)(param_1 + 0x600));
  }
  return;
}




/* Function: FUN_0051d050 */

void __thiscall FUN_0051d050(int param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x5fc);
  if (piVar2 != *(int **)(param_1 + 0x600)) {
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      *(undefined1 *)(iVar1 + 0x3d4) = param_2;
    } while (piVar2 != *(int **)(param_1 + 0x600));
  }
  return;
}




/* Function: FUN_0051d080 */

undefined4 __thiscall FUN_0051d080(int param_1,int param_2)

{
  **(undefined4 **)(*(int *)(*(int *)(param_1 + 0x298) + 4 + param_2 * 4) + 0xc) = 0x3dcccccd;
  return *(undefined4 *)(param_1 + 0x450 + param_2 * 4);
}




/* Function: FUN_0051d0b0 */

void __fastcall FUN_0051d0b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  
  iVar2 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x4c0);
  do {
    iVar2 = iVar2 + 4;
    puVar1 = *(undefined4 **)(*(int *)(iVar2 + *(int *)(param_1 + 0x298)) + 0xc);
    *puVar1 = puVar1[1];
    *puVar3 = 10;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 0x10);
  piVar4 = *(int **)(param_1 + 0x5fc);
  if (*(int **)(param_1 + 0x5fc) != *(int **)(param_1 + 0x600)) {
    do {
      FUN_004ff6c0();
      *(undefined1 *)(*piVar4 + 0x27a) = 1;
      *(undefined1 *)(*piVar4 + 0x279) = 1;
      *(undefined1 *)(*piVar4 + 0x27b) = 0;
      *(undefined4 *)(*piVar4 + 0x220) = 0;
      piVar5 = (int *)*piVar4;
      if (piVar5[0xc1] != 0) {
        (**(code **)(*piVar5 + 0x8c))(piVar5 + 0xc2);
        FUN_00504330(*(undefined4 *)(*piVar4 + 0x304));
      }
      piVar5 = piVar4 + 1;
      *(undefined1 *)(*piVar4 + 0x3c9) = 1;
      *(undefined4 *)(*piVar4 + 0x3dc) = 10;
      piVar4 = piVar5;
    } while (piVar5 != *(int **)(param_1 + 0x600));
  }
  *(undefined4 *)(param_1 + 0x220) = 1;
  *(undefined4 *)(param_1 + 0x524) = 0x41200000;
  *(undefined4 *)(param_1 + 0x2c) = 0x42c80000;
  return;
}




/* Function: FUN_0051d940 */

void FUN_0051d940(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)FUN_00493c27(0x94);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    puVar3 = param_3;
    puVar4 = puVar1 + 2;
    for (iVar2 = 0x1e; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar1[0x20] = param_3[0x1e];
    puVar1[0x21] = param_3[0x1f];
    puVar1[0x22] = param_3[0x20];
    puVar1[0x23] = param_3[0x21];
    puVar1[0x24] = param_3[0x22];
  }
  return;
}




/* Function: FUN_0051d9b0 */

void FUN_0051d9b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
    }
    param_3 = param_3 + 6;
  }
  return;
}




/* Function: FUN_0051da00 */

void FUN_0051da00(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      param_1[4] = param_3[4];
      param_1[5] = param_3[5];
    }
    param_1 = param_1 + 6;
  }
  return;
}




/* Function: FUN_0051da50 */

void __thiscall FUN_0051da50(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057f640;
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
      FUN_0051b5d0();
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




/* Function: FUN_0051dcf0 */

void __thiscall
FUN_0051dcf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0051d9b0(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_0051dd20 */

void __thiscall FUN_0051dd20(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x88);
  iVar2 = FUN_0051d940(iVar1,*(undefined4 *)(iVar1 + 4),param_2);
  FUN_0051b6b0(1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}




/* Function: FUN_0051dd60 */

int __thiscall FUN_0051dd60(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_0051da00(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0x18;
}




/* Function: FUN_0051dd90 */

void __thiscall
FUN_0051dd90(undefined4 *param_1,undefined4 **param_2,undefined1 *param_3,undefined4 **param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *local_44;
  undefined4 *local_40;
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
  puStack_c = &LAB_0057f650;
  local_10 = ExceptionList;
  local_2c = *param_4;
  local_28 = param_4[1];
  local_24 = param_4[2];
  local_1c = param_4[4];
  local_20 = param_4[3];
  iVar5 = param_1[1];
  local_18 = param_4[5];
  local_14 = &stack0xffffffc8;
  if (iVar5 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = (undefined1 *)((param_1[3] - iVar5) / 0x18);
  }
  if (param_3 != (undefined1 *)0x0) {
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (param_1[2] - iVar5) / 0x18;
    }
    if ((undefined1 *)(0xaaaaaaaU - iVar4) < param_3) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc8;
      FUN_0051b5d0();
      ExceptionList = local_10;
      return;
    }
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (param_1[2] - iVar5) / 0x18;
    }
    if (puVar6 < param_3 + iVar4) {
      if ((undefined1 *)(0xaaaaaaa - ((uint)puVar6 >> 1)) < puVar6) {
        puVar6 = (undefined1 *)0x0;
      }
      else {
        puVar6 = puVar6 + ((uint)puVar6 >> 1);
      }
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (param_1[2] - iVar5) / 0x18;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc8;
      if (puVar6 < param_3 + iVar5) {
        ExceptionList = &local_10;
        local_14 = &stack0xffffffc8;
        iVar5 = FUN_0051a4d0();
        puVar6 = puVar2 + iVar5;
      }
      local_40 = (undefined4 *)0x51dec2;
      param_4 = (undefined4 **)FUN_00493c27();
      local_8 = 0;
      local_44 = param_4;
      local_40 = param_1;
      param_3 = (undefined1 *)FUN_0051d9b0(param_1[1],param_2);
      local_44 = &local_2c;
      local_40 = param_1;
      FUN_0051da00(param_3,puVar2);
      local_44 = (undefined4 *)((int)param_3 + (int)puVar2 * 0x18);
      local_40 = param_1;
      FUN_0051d9b0(param_2,param_1[2]);
      if (param_1[1] == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(param_1[2] - param_1[1]) / 0x18;
      }
      iVar4 = param_1[1];
      if (iVar4 == 0) {
        param_1[1] = param_4;
        param_1[3] = param_4 + (int)puVar6 * 6;
        param_1[2] = param_4 + (int)(puVar2 + iVar5) * 6;
        ExceptionList = local_10;
        return;
      }
      for (; iVar4 != param_1[2]; iVar4 = iVar4 + 0x18) {
      }
                    /* WARNING: Subroutine does not return */
      local_40 = (undefined4 *)&UNK_0051df6b;
      operator_delete((void *)param_1[1]);
    }
    param_4 = (undefined4 **)param_1[2];
    local_40 = param_4;
    if ((undefined1 *)(((int)param_4 - (int)param_2) / 0x18) < param_3) {
      local_44 = param_2;
      ExceptionList = &local_10;
      param_2 = (undefined4 **)((int)param_3 * 0x18);
      param_4 = &local_44;
      local_14 = &stack0xffffffc8;
      FUN_0051dcf0();
      local_44 = (undefined4 *)param_1[2];
      local_8 = 2;
      local_40 = (undefined4 *)(puVar2 + -(((int)local_44 - (int)puVar1) / 0x18));
      FUN_0051dd60();
      iVar5 = param_1[2];
      param_1[2] = iVar5 + (int)param_2;
      local_40 = (undefined4 *)((iVar5 + (int)param_2) - (int)param_2);
    }
    else {
      param_2 = param_4 + (int)param_3 * -6;
      ExceptionList = &local_10;
      local_44 = param_2;
      uVar3 = FUN_0051dcf0();
      param_3 = &stack0xffffffc4;
      param_1[2] = uVar3;
      param_4 = &local_40;
      local_40 = param_2;
      local_44 = puVar1;
      param_2 = &local_44;
      FUN_0051b7a0(&param_2);
      local_40 = puVar1 + (int)puVar2 * 6;
    }
    param_2 = &local_44;
    local_44 = puVar1;
    FUN_0051b750();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_0051e0c0 */

void __thiscall FUN_0051e0c0(int param_1,undefined4 param_2)

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
  FUN_0051da50(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_0051e130 */

void __thiscall FUN_0051e130(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x18 != 0) {
      iVar1 = (param_3 - iVar1) / 0x18;
      goto LAB_0051e177;
    }
  }
  iVar1 = 0;
LAB_0051e177:
  FUN_0051dd90(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x18;
  return;
}




/* Function: FUN_0051e1a0 */

void __thiscall FUN_0051e1a0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x18) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x18))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_0051da00(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x18;
    return;
  }
  FUN_0051e130(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_0051e230 */

void __fastcall FUN_0051e230(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(undefined1 *)(param_1 + 0x81) = 1;
  *(undefined1 *)(param_1 + 0x82) = 1;
  *(undefined1 *)(param_1 + 0x83) = 1;
  *(undefined1 *)(param_1 + 0x84) = 1;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x94) = 10;
  return;
}




/* Function: FUN_0051e2f0 */

void __fastcall FUN_0051e2f0(int param_1)

{
  if (*(void **)(param_1 + 0x4c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x4c));
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(void **)(param_1 + 0x3c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x3c));
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (*(void **)(param_1 + 0x2c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x2c));
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}




/* Function: FUN_0051e380 */

void __fastcall FUN_0051e380(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057f708;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_0051e2f0();
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x308),0x10,4,FUN_00407150);
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x2b4),0xc,2,FUN_00407150);
  FUN_0053eb40();
  ExceptionList = pvStack_c;
  return;
}




/* Function: FUN_00521140 */

void __fastcall FUN_00521140(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0057f6f5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00591b50;
  local_4 = 4;
  if ((int *)param_1[0x15e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x15e] + 0xc))(1);
  }
  if ((void *)param_1[0x15d] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x15d]);
  }
  if ((int *)param_1[0x161] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x161] + 0xc))(1);
  }
  if ((void *)param_1[0x160] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x160]);
  }
  if ((void *)param_1[0x17f] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x17f]);
  }
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  local_4._0_1_ = 2;
  _eh_vector_destructor_iterator_(param_1 + 0x124,0xc,4,FUN_00407150);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(param_1 + 0x118,0xc,4,FUN_00407150);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xf8));
  local_4 = 0xffffffff;
  FUN_0051e380();
  ExceptionList = pvStack_c;
  return;
}




/* Function: FUN_005212e0 */

undefined4 * __fastcall FUN_005212e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f708;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053eae0();
  local_4 = 0;
  *param_1 = &PTR_LAB_00591c28;
  _eh_vector_constructor_iterator_
            (param_1 + 0xad,0xc,2,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0x3f800000;
  _eh_vector_constructor_iterator_
            (param_1 + 0xc2,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310(0x3f800000);
  FUN_0051e230();
  *(undefined1 *)(param_1 + 0xb3) = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xc1] = 0;
  param_1[0xb7] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  *(undefined1 *)(param_1 + 0xb9) = 1;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_005213e0 */

void * __thiscall FUN_005213e0(void *param_1,byte param_2)

{
  FUN_0051e380();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00521400 */

undefined4 * __fastcall FUN_00521400(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f767;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005212e0();
  local_4 = 0;
  *param_1 = &PTR_LAB_00591b50;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xf8));
  local_4._0_1_ = 1;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 0x118,0xc,4,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  local_4 = CONCAT31(local_4._1_3_,2);
  _eh_vector_constructor_iterator_
            (param_1 + 0x124,0xc,4,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  param_1[0x15d] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x160] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x155] = 0;
  param_1[0x137] = 0;
  param_1[0x10c] = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  param_1[0x154] = 0;
  *(undefined1 *)((int)param_1 + 0x521) = 0;
  param_1[0x10d] = 0;
  param_1[0x156] = 0;
  *(undefined1 *)((int)param_1 + 0x4e2) = 0;
  *(undefined1 *)((int)param_1 + 0x522) = 0;
  param_1[0x10e] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x10b] = 0;
  *(undefined1 *)((int)param_1 + 0x531) = 0;
  param_1[0x14d] = 0;
  *(undefined1 *)(param_1 + 0x14e) = 0;
  param_1[0x14b] = 0;
  *(undefined1 *)((int)param_1 + 0x539) = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  *(undefined1 *)(param_1 + 0x14c) = 1;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x13e) = 0;
  param_1[0x163] = 2;
  param_1[0x20] = 0x14d;
  *(undefined1 *)((int)param_1 + 0x4e1) = 0;
  *(undefined1 *)((int)param_1 + 0x4e3) = 0;
  param_1[0x13a] = 0;
  *(undefined1 *)(param_1 + 0x139) = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  *(undefined1 *)((int)param_1 + 0x4e6) = 0;
  param_1[0x10f] = DAT_005b7ed0;
  DAT_005b7ed0 = DAT_005b7ed0 + 1;
  param_1[0x104] = 0;
  *(undefined1 *)((int)param_1 + 0x4e5) = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0x3f800000;
  param_1[0x13d] = 0x3f800000;
  param_1[0x149] = 0x41200000;
  param_1[0x14a] = 0;
  FUN_0051a420();
  param_1[0xb] = 0x42c80000;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_005216f0 */

void * __thiscall FUN_005216f0(void *param_1,byte param_2)

{
  FUN_00521140();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00521710 */

undefined4 FUN_00521710(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f792;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x608,(nothrow_t *)&DAT_005b6164);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00521400(pvVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_00521770 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00521770(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *_Str1;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  double dVar6;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  float local_7c;
  int local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_58 [36];
  undefined4 local_34;
  undefined4 uStack_28;
  undefined4 local_1c;
  undefined4 uStack_10;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_58,"sprite\\flare");
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_90,".\\textures\\");
  FUN_00429a60(&local_90,local_58,0xffffffff);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_90);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_58);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_58,"sprite\\flare");
  uVar1 = FUN_004222d0(local_58);
  *(undefined4 *)(param_1 + 0x36c) = uVar1;
  *(undefined4 *)(param_1 + 0x358) = uVar1;
  *(undefined4 *)(param_1 + 0x3a0) = uVar1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_58);
  FUN_004ffac0();
  iVar2 = FUN_0043f910();
  FUN_004ffac0();
  iVar3 = FUN_0043f900();
  if (iVar3 != 0) {
    puVar5 = (undefined4 *)(iVar2 + 0x48);
    local_74 = iVar3;
    do {
      FUN_0051a880();
      _Str1 = (char *)(puVar5 + -0x12);
      iVar2 = _strnicmp(_Str1,"Headlight",9);
      if (iVar2 == 0) {
        dVar6 = atof((char *)((int)puVar5 + -0x3f));
        local_7c = (float)dVar6;
        if (dVar6 < (double)_DAT_00582ad8 != (dVar6 == (double)_DAT_00582ad8)) {
          local_7c = 1.0;
        }
        local_90 = puVar5[-2];
        local_8c = puVar5[-1];
        local_88 = *puVar5;
        local_1c = local_88;
        FUN_0051e1a0(&local_90);
      }
      iVar2 = _strnicmp(_Str1,"Backlight",9);
      if (iVar2 == 0) {
        dVar6 = atof((char *)((int)puVar5 + -0x3f));
        local_7c = (float)dVar6;
        if (dVar6 < (double)_DAT_00582ad8 != (dVar6 == (double)_DAT_00582ad8)) {
          local_7c = 1.0;
        }
        local_90 = puVar5[-2];
        local_8c = puVar5[-1];
        local_88 = *puVar5;
        local_34 = local_88;
        FUN_0051e1a0(&local_90);
      }
      iVar2 = _strnicmp(_Str1,"Leftblinker",0xb);
      if (iVar2 == 0) {
        dVar6 = atof((char *)((int)puVar5 + -0x3d));
        local_7c = (float)dVar6;
        if (dVar6 < (double)_DAT_00582ad8 != (dVar6 == (double)_DAT_00582ad8)) {
          local_7c = 1.0;
        }
        local_90 = puVar5[-2];
        local_8c = puVar5[-1];
        local_88 = *puVar5;
        local_4 = local_88;
        FUN_0051e1a0(&local_90);
      }
      iVar2 = _strnicmp(_Str1,"Exhaust",7);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x2ac) == 0) {
          pvVar4 = operator_new(0x2a0,(nothrow_t *)&DAT_005b6164);
          if (pvVar4 == (void *)0x0) {
            uVar1 = 0;
          }
          else {
            uVar1 = FUN_004573b0();
          }
          *(undefined4 *)(param_1 + 0x2ac) = uVar1;
          FUN_004699e0(param_2,"ParticleSystems\\exhaust.psf");
          *(undefined4 *)(*(int *)(param_1 + 0x2ac) + 0x264) = 0x32828282;
          iVar2 = **(int **)(param_1 + 0x2ac);
          uVar1 = FUN_0041c940();
          (**(code **)(iVar2 + 0x1c))(param_2,uVar1);
          *(undefined1 *)(*(int *)(param_1 + 0x2ac) + 200) = 0;
          uStack_60 = puVar5[-1];
          uStack_5c = *puVar5;
          if (&uStack_64 != (undefined4 *)(param_1 + 0x2b4)) {
            *(undefined4 *)(param_1 + 0x2b4) = puVar5[-2];
            *(undefined4 *)(param_1 + 0x2b8) = uStack_60;
            *(undefined4 *)(param_1 + 700) = uStack_5c;
          }
        }
        else if (*(int *)(param_1 + 0x2b0) == 0) {
          pvVar4 = operator_new(0x2a0,(nothrow_t *)&DAT_005b6164);
          if (pvVar4 == (void *)0x0) {
            uVar1 = 0;
          }
          else {
            uVar1 = FUN_004573b0();
          }
          *(undefined4 *)(param_1 + 0x2b0) = uVar1;
          FUN_004699e0(param_2,"ParticleSystems\\exhaust.psf");
          *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x264) = 0x32828282;
          iVar2 = **(int **)(param_1 + 0x2b0);
          uVar1 = FUN_0041c940();
          (**(code **)(iVar2 + 0x1c))(param_2,uVar1);
          *(undefined1 *)(*(int *)(param_1 + 0x2b0) + 200) = 0;
          uStack_6c = puVar5[-1];
          uStack_68 = *puVar5;
          if (&uStack_70 != (undefined4 *)(param_1 + 0x2c0)) {
            *(undefined4 *)(param_1 + 0x2c0) = puVar5[-2];
            *(undefined4 *)(param_1 + 0x2c4) = uStack_6c;
            *(undefined4 *)(param_1 + 0x2c8) = uStack_68;
          }
        }
      }
      iVar2 = _strnicmp((char *)(puVar5 + -0x12),"Siren",5);
      if (iVar2 == 0) {
        dVar6 = atof((char *)((int)puVar5 + -0x43));
        local_7c = (float)dVar6;
        if (dVar6 < (double)_DAT_00582ad8 != (dVar6 == (double)_DAT_00582ad8)) {
          local_7c = 1.0;
        }
        local_90 = puVar5[-2];
        local_8c = puVar5[-1];
        local_88 = *puVar5;
        uStack_10 = local_88;
        FUN_0051e1a0(&local_90);
      }
      iVar2 = _strnicmp((char *)(puVar5 + -0x12),"Rightblinker",0xc);
      if (iVar2 == 0) {
        dVar6 = atof((char *)(puVar5 + -0xf));
        local_7c = (float)dVar6;
        if (dVar6 < (double)_DAT_00582ad8 != (dVar6 == (double)_DAT_00582ad8)) {
          local_7c = 1.0;
        }
        local_90 = puVar5[-2];
        local_8c = puVar5[-1];
        local_88 = *puVar5;
        uStack_28 = local_88;
        FUN_0051e1a0(&local_90);
      }
      puVar5 = puVar5 + 0x13;
      local_74 = local_74 + -1;
    } while (local_74 != 0);
  }
  FUN_0053e690(param_2,param_3);
  return 1;
}




/* Function: FUN_00525860 */

int __thiscall FUN_00525860(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return *(int *)(param_1 + 0x39c);
  }
  iVar3 = *(int *)(param_1 + 0x39c);
  iVar2 = FUN_0046a3d0();
  bVar1 = *(int *)(param_1 + 0x39c) < iVar2 / 2;
  if ((*(int *)(param_2 + 8) == *(int *)(*(int *)(param_1 + 0x344) + 8)) ||
     (*(int *)(param_2 + 4) == *(int *)(*(int *)(param_1 + 0x344) + 4))) {
    bVar1 = !bVar1;
    iVar2 = FUN_0046a3d0();
    iVar3 = (iVar2 - iVar3) + -1;
  }
  iVar2 = FUN_0046a3d0();
  iVar4 = FUN_0046a3d0();
  if (iVar4 != iVar2) {
    iVar2 = FUN_0046a3d0();
    iVar3 = rand();
    iVar3 = iVar3 % (iVar2 / 2);
    if (!bVar1) {
      iVar2 = FUN_0046a3d0();
      iVar3 = iVar3 + iVar2 / 2;
    }
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar2 = FUN_0046a3d0();
  if (iVar2 + -1 < iVar3) {
    iVar3 = FUN_0046a3d0();
    iVar3 = iVar3 + -1;
  }
  return iVar3;
}




/* Function: FUN_00525940 */

void __thiscall FUN_00525940(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar2 = FUN_0046a3d0();
    bVar1 = *(int *)(param_1 + 0x39c) < iVar2 / 2;
    if ((*(int *)(param_2 + 8) == *(int *)(*(int *)(param_1 + 0x344) + 8)) ||
       (*(int *)(param_2 + 4) == *(int *)(*(int *)(param_1 + 0x344) + 4))) {
      bVar1 = !bVar1;
      *(bool *)(param_1 + 0x354) = *(char *)(param_1 + 0x354) == '\0';
      iVar2 = FUN_0046a3d0();
      *(int *)(param_1 + 0x39c) = (iVar2 - *(int *)(param_1 + 0x39c)) + -1;
    }
    iVar2 = FUN_0046a3d0();
    iVar3 = FUN_0046a3d0();
    if (iVar2 != iVar3) {
      iVar2 = FUN_0046a3d0();
      iVar3 = rand();
      *(int *)(param_1 + 0x39c) = iVar3 % (iVar2 / 2);
      if (!bVar1) {
        iVar2 = FUN_0046a3d0();
        *(int *)(param_1 + 0x39c) = *(int *)(param_1 + 0x39c) + iVar2 / 2;
      }
    }
    *(int *)(param_1 + 0x344) = param_2;
  }
  return;
}




/* Function: FUN_00525a10 */

undefined1 __thiscall FUN_00525a10(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_00500bd0(param_2,param_3);
  (**(code **)(*param_1 + 0xcc))(param_3);
  return uVar1;
}




/* Function: FUN_00525a40 */

void __fastcall FUN_00525a40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0041cf60();
  if (iVar1 != 0) {
    uVar2 = FUN_00438d60();
    *(undefined4 *)(param_1 + 0x26c) = uVar2;
  }
  return;
}




/* Function: FUN_00525a80 */

void __thiscall FUN_00525a80(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 0x2e4) = param_2;
  *(undefined1 *)(param_1 + 0x2ec) = param_3;
  return;
}




/* Function: FUN_00525aa0 */

undefined4 __fastcall FUN_00525aa0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2e4);
}




/* Function: FUN_00525ab0 */

void __thiscall FUN_00525ab0(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_004e4754(*(int *)(param_1 + 0xbc),*param_2,param_2[1],param_2[2]);
  }
  return;
}




/* Function: FUN_00525ae0 */

void __thiscall FUN_00525ae0(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_004e4804(*(int *)(param_1 + 0xbc),*param_2,param_2[1],param_2[2]);
  }
  return;
}




/* Function: FUN_00525b10 */

void __thiscall FUN_00525b10(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_004e4778(*(int *)(param_1 + 0xbc),*param_2,param_2[1],param_2[2]);
  }
  return;
}




/* Function: FUN_00525b40 */

uint __thiscall FUN_00525b40(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((*(uint *)(param_1 + 0x2d0) != param_2) &&
     ((param_2 != 0 ||
      ((*(char *)(param_1 + 0x3c0) == '\0' && (*(char *)(param_1 + 0x32c) == '\0')))))) {
    if ((*(int *)(param_1 + 0x1ac) != 0) && ((param_2 == 3 || (param_2 == 1)))) {
      param_2 = 0;
    }
    if (((*(int *)(param_1 + 0x2c8) == 0) || (param_2 == 0)) || (param_2 == 1)) {
      *(uint *)(param_1 + 0x2d0) = param_2;
      *(undefined1 *)(param_1 + 0x3dc) = 0;
      *(undefined4 *)(param_1 + 0x3bc) = 0x41f00000;
      switch(param_2) {
      case 0:
        *(undefined4 *)(param_1 + 0x2d4) = 0;
        break;
      case 1:
        *(undefined4 *)(param_1 + 0x2d4) = 5;
        break;
      case 2:
        *(undefined4 *)(param_1 + 0x2d4) = 6;
        break;
      case 3:
        *(undefined4 *)(param_1 + 0x2d4) = 7;
        if (*(int *)(*(int *)(param_1 + 0x2b0) + 0x38) == *(int *)(*(int *)(param_1 + 0x2b0) + 0x30)
           ) {
          *(undefined4 *)(param_1 + 0x3bc) = 0x42700000;
        }
        break;
      case 4:
        *(undefined4 *)(param_1 + 0x2d4) = 8;
        break;
      case 5:
        *(undefined4 *)(param_1 + 0x2d4) = 9;
        *(undefined1 *)(param_1 + 0x3dc) = 1;
        break;
      case 6:
        *(undefined4 *)(param_1 + 0x2d4) = 10;
        break;
      case 7:
      case 8:
        *(undefined4 *)(param_1 + 0x2d4) = 0xb;
        break;
      case 9:
        *(undefined4 *)(param_1 + 0x2d4) = 0xc;
        break;
      case 10:
        *(undefined4 *)(param_1 + 0x2d4) = 0xd;
        break;
      case 0xb:
        *(undefined4 *)(param_1 + 0x2d4) = 0xe;
        *(undefined1 *)(param_1 + 0x3c0) = 0;
        break;
      case 0xc:
        *(undefined4 *)(param_1 + 0x2d4) = 0x10;
        break;
      case 0xd:
        *(undefined4 *)(param_1 + 0x2d4) = 0x11;
        break;
      case 0xe:
        *(undefined4 *)(param_1 + 0x2d4) = 0x12;
        break;
      case 0xf:
        *(undefined4 *)(param_1 + 0x2d4) = 0x13;
        break;
      case 0x10:
        *(undefined4 *)(param_1 + 0x2d4) = 0x14;
        *(undefined4 *)(param_1 + 0x3bc) = 0x41700000;
        break;
      case 0x11:
        *(undefined4 *)(param_1 + 0x2d4) = 0x15;
        *(undefined1 *)(param_1 + 0x3dc) = 1;
        *(undefined4 *)(param_1 + 0x3bc) = 0x41700000;
        break;
      case 0x12:
        iVar1 = *(int *)(param_1 + 0x2b0);
        if ((*(int *)(iVar1 + 0x78) == -1) || (*(int *)(iVar1 + 0x74) == -1)) {
          *(uint *)(param_1 + 0x2d4) = (*(int *)(iVar1 + 0x74) == -1) + 0x16;
        }
        else {
          uVar2 = rand();
          uVar2 = uVar2 & 0x80000001;
          if ((int)uVar2 < 0) {
            uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
          }
          *(uint *)(param_1 + 0x2d4) = (uVar2 != 0) + 0x16;
        }
        break;
      case 0x13:
        *(undefined4 *)(param_1 + 0x2d4) = 0xf;
      }
      param_2 = *(uint *)(param_1 + 0x2d4);
      iVar1 = *(int *)(*(int *)(param_1 + 0x2b0) + 0x19c + param_2 * 4);
      *(undefined4 *)(param_1 + 0x2d8) = 0xbf800000;
      *(undefined1 *)(param_1 + 0x2ed) = 0;
      *(float *)(param_1 + 0x2dc) = (float)iVar1;
    }
  }
  return param_2 & 0xffffff00;
}




/* Function: FUN_00525e90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_00525e90(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  float10 fVar5;
  int *piVar6;
  undefined4 uVar7;
  float fVar8;
  float local_210 [3];
  undefined1 auStack_204 [64];
  undefined1 auStack_1c4 [64];
  undefined1 auStack_184 [64];
  undefined1 auStack_144 [64];
  undefined1 auStack_104 [64];
  undefined1 auStack_c4 [64];
  undefined1 auStack_84 [64];
  undefined1 auStack_44 [68];
  
  if ((param_1[0xba] != 0) && (*(char *)((int)param_1 + 0x3df) != '\0')) {
    if (param_1[0xb9] != 0) goto LAB_00525f0b;
    fVar5 = (float10)FUN_0041ce10();
    fVar8 = (float)param_1[0xed];
    param_1[0xed] = (int)(float)(fVar5 + (float10)fVar8);
    if ((float10)_DAT_00583354 < fVar5 + (float10)fVar8) {
      FUN_0051a270(param_2,param_1[0xba]);
      param_1[0xba] = 0;
      param_1[0xed] = 0;
      *(undefined1 *)((int)param_1 + 0x3df) = 0;
    }
  }
  if (param_1[0xb9] != 0) {
LAB_00525f0b:
    (**(code **)(*param_1 + 0xdc))(param_2);
    if ((param_1[0xb3] == 4) && (*(char *)((int)param_1 + 0x3de) == '\0')) {
      (**(code **)(*param_1 + 0xbc))(param_2);
    }
    uVar3 = FUN_004ffd00(param_2);
    return uVar3;
  }
  local_210[0] = (float)param_1[0xb];
  if ((_DAT_00582ad8 < local_210[0]) && (param_1[0x6b] == 0)) {
    uVar7 = 1;
    piVar6 = param_1;
    FUN_0041ce50(param_1,1);
    FUN_0052c640(piVar6,uVar7);
  }
  if ((*(char *)((int)param_1 + 0x372) == '\0') &&
     (local_210[0] < _DAT_00582ad8 != (local_210[0] == _DAT_00582ad8))) {
    (**(code **)(*param_1 + 0xa4))();
    uVar7 = (**(code **)(*param_1 + 0x88))();
    FUN_0041d670(uVar7);
    uVar3 = FUN_004ffd00(param_2);
    return uVar3;
  }
  param_1[0xb6] = param_1[0xb7];
  fVar5 = (float10)FUN_0041ce10();
  iVar4 = param_1[0xac];
  iVar2 = param_1[0xb5];
  fVar5 = fVar5 * (float10)(float)param_1[0xef] + (float10)(float)param_1[0xb7];
  param_1[0xb7] = (int)(float)fVar5;
  if ((float)param_1[0xef] <= _DAT_00582ad8) {
    iVar1 = *(int *)(iVar4 + 0x19c + iVar2 * 4);
    local_210[0] = (float)iVar1;
    if (fVar5 < (float10)iVar1) {
      if (*(char *)(iVar4 + 1 + iVar2) == '\0') {
        *(undefined1 *)((int)param_1 + 0x2ed) = 1;
        param_1[0xb7] = (int)local_210[0];
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xdc + iVar2 * 4);
        *(undefined1 *)((int)param_1 + 0x2ed) = 1;
        local_210[0] = (float)(iVar4 + -1);
        param_1[0xb7] = (int)(float)(int)local_210[0];
      }
      goto LAB_005260b5;
    }
  }
  else {
    local_210[0] = *(float *)(iVar4 + 0xdc + iVar2 * 4);
    if ((float10)(int)local_210[0] <= fVar5) {
      if (*(char *)(iVar4 + 1 + iVar2) == '\0') {
        local_210[0] = (float)((int)local_210[0] + -1);
        *(undefined1 *)((int)param_1 + 0x2ed) = 1;
        param_1[0xb7] = (int)(float)(int)local_210[0];
      }
      else {
        iVar4 = *(int *)(iVar4 + 0x19c + iVar2 * 4);
        *(undefined1 *)((int)param_1 + 0x2ed) = 1;
        param_1[0xb7] = (int)(float)iVar4;
      }
      goto LAB_005260b5;
    }
  }
  *(undefined1 *)((int)param_1 + 0x2ed) = 0;
LAB_005260b5:
  if (param_1[0xb3] == 4) {
    (**(code **)(*param_1 + 0xbc))(param_2);
  }
  (**(code **)(*param_1 + 0xe4))(param_2);
  if (param_1[0x6b] != 0) {
    if (*(char *)((int)param_1 + 0x2ed) != '\0') {
      (**(code **)(*param_1 + 0xd4))(param_2);
    }
    FUN_004ffa80(*(undefined4 *)(param_1[0xac] + 0x1c + param_1[0xb5] * 4));
    iVar4 = FUN_004cf110();
    FUN_00501a80((float)iVar4);
    uVar7 = FUN_004ffa70();
    FUN_00407260(uVar7);
    FUN_00547ab0(local_210);
    if (*(char *)((int)param_1 + 0x277) == '\0') {
      fVar8 = (float)param_1[0xf5];
    }
    else {
      fVar8 = -(float)param_1[0xf5];
    }
    uVar7 = FUN_00546f8c(auStack_44,
                         *(float *)(param_1[0xac] + 0x1fc + param_1[0xb5] * 4) +
                         (float)param_1[0xc5] + (float)param_1[0xbd]);
    uVar7 = FUN_00546cfc(auStack_c4,param_1[0xc4],uVar7);
    uVar7 = FUN_00547224(auStack_144,param_1[0xc6],uVar7);
    uVar7 = FUN_00545c50(auStack_184,fVar8,param_1[0xf5],param_1[0xf5],uVar7);
    uVar7 = FUN_0041d7a0(auStack_104,uVar7);
    uVar7 = FUN_0041d7a0(auStack_1c4,uVar7);
    uVar7 = FUN_0041d7a0(auStack_84,uVar7);
    FUN_0041d670(uVar7);
    FUN_00407300();
    FUN_00407300();
    FUN_00407300();
    FUN_00407300();
    FUN_00407300();
    FUN_00407300();
    FUN_00407300();
    FUN_00545c38(local_210);
    (**(code **)(*param_1 + 0x8c))(auStack_204);
    uVar3 = FUN_004ffd00(param_2);
    FUN_00407300();
    return uVar3;
  }
  (**(code **)(*param_1 + 0xc0))(param_2);
  (**(code **)(*param_1 + 0xd0))(param_2);
  if (*(char *)((int)param_1 + 0x2ed) != '\0') {
    (**(code **)(*param_1 + 0xd4))(param_2);
  }
  uVar3 = FUN_0053e920(param_2);
  return uVar3;
}




/* Function: FUN_00526300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00526300(int *param_1)

{
  undefined4 uStack00000004;
  
  switch(param_1[0xb4]) {
  case 1:
    uStack00000004 = 0;
                    /* WARNING: Could not recover jumptable at 0x005263ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))();
    return;
  case 2:
    uStack00000004 = 0;
                    /* WARNING: Could not recover jumptable at 0x005263bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))();
    return;
  case 3:
    uStack00000004 = 0;
                    /* WARNING: Could not recover jumptable at 0x0052638d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))();
    return;
  case 4:
    uStack00000004 = 0;
                    /* WARNING: Could not recover jumptable at 0x0052639d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))();
    return;
  case 5:
    uStack00000004 = 0;
                    /* WARNING: Could not recover jumptable at 0x005263dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))();
    return;
  case 6:
    uStack00000004 = 0;
                    /* WARNING: Could not recover jumptable at 0x005263cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))();
    return;
  case 7:
    uStack00000004 = 10;
                    /* WARNING: Could not recover jumptable at 0x005263ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))();
    return;
  case 8:
    uStack00000004 = 10;
                    /* WARNING: Could not recover jumptable at 0x005263fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))();
    return;
  case 9:
    uStack00000004 = 0;
                    /* WARNING: Could not recover jumptable at 0x0052640d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))();
    return;
  case 0xe:
    if (_DAT_00582ad8 < (float)param_1[0xb]) {
      uStack00000004 = 0;
                    /* WARNING: Could not recover jumptable at 0x00526357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb8))();
      return;
    }
    break;
  case 0xf:
    if (_DAT_00582ad8 < (float)param_1[0xb]) {
      uStack00000004 = 0;
                    /* WARNING: Could not recover jumptable at 0x0052637d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb8))();
      return;
    }
    break;
  case 0x10:
    uStack00000004 = 0;
                    /* WARNING: Could not recover jumptable at 0x00526321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))();
    return;
  case 0x11:
    uStack00000004 = 0;
                    /* WARNING: Could not recover jumptable at 0x00526331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))();
    return;
  }
  return;
}




/* Function: FUN_00526460 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00526460(int *param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  undefined1 *puVar5;
  float afStack_70 [2];
  float fStack_68;
  undefined1 local_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [64];
  
  puVar5 = local_64;
  (**(code **)(*param_1 + 0x88))(puVar5);
  uVar1 = FUN_00547ab0(puVar5);
  FUN_0041d580(afStack_70,param_2,uVar1);
  if ((int *)param_1[0x6b] != (int *)0x0) {
    uVar1 = (**(code **)(*(int *)param_1[0x6b] + 0x88))();
    FUN_00407260(uVar1);
    FUN_00547ad0();
    FUN_005488cc(local_64,param_2,auStack_40);
    puVar5 = auStack_58;
    FUN_004ffa70(puVar5);
    uVar1 = FUN_00547ab0(puVar5);
    pfVar2 = (float *)FUN_0041d580(auStack_4c,local_64,uVar1);
    if (pfVar2 != afStack_70) {
      afStack_70[0] = *pfVar2;
      fStack_68 = pfVar2[2];
    }
    _eh_vector_destructor_iterator_(auStack_40,0x10,4,FUN_00407150);
  }
  fVar3 = (float10)_DAT_00583354 /
          SQRT((float10)afStack_70[0] * (float10)afStack_70[0] +
               (float10)fStack_68 * (float10)fStack_68);
  afStack_70[0] = (float)((float10)afStack_70[0] * fVar3);
  fVar3 = fVar3 * (float10)fStack_68;
  if (ABS(fVar3) <= ABS((float10)afStack_70[0])) {
    fVar4 = (float10)fpatan(fVar3 / (float10)afStack_70[0],(float10)1);
    fVar3 = (float10)_DAT_00588838;
    param_1[0xbe] = (int)(float)(-fVar4 - fVar3);
    if (_DAT_00582ad8 < afStack_70[0]) {
      param_1[0xbe] = (int)(float)((-fVar4 - fVar3) + (float10)_DAT_00589ee8);
    }
  }
  else {
    fVar4 = (float10)fpatan((float10)afStack_70[0] / fVar3,(float10)1);
    param_1[0xbe] = (int)(float)fVar4;
    if (fVar3 < (float10)_DAT_00582ad8) {
      param_1[0xbe] = (int)((float)fVar4 + _DAT_00589ee8);
    }
  }
  if (param_3 == '\0') {
    param_1[0xbe] = (int)((float)param_1[0xbe] + _DAT_00589ee8);
  }
  if ((float)param_1[0xbe] <= _DAT_00582ad8) {
    fVar3 = (float10)_CIfmod();
    param_1[0xbe] = (int)(float)((float10)_DAT_00591a50 - fVar3);
    return;
  }
  fVar3 = (float10)_CIfmod();
  param_1[0xbe] = (int)(float)fVar3;
  return;
}




/* Function: FUN_00526640 */

int * __fastcall FUN_00526640(int *param_1)

{
  int *piVar1;
  
  if (param_1[0x6b] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0052664c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar1 = (int *)(**(code **)(*param_1 + 0x88))();
    return piVar1;
  }
  return param_1 + 0xfc;
}




/* Function: FUN_005267a0 */

undefined4 __fastcall FUN_005267a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  return CONCAT31((int3)(iVar1 >> 10),iVar1 >> 2 == 0);
}




/* Function: FUN_005267d0 */

void FUN_005267d0(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f8e2;
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




/* Function: FUN_00526850 */

void __fastcall FUN_00526850(undefined4 *param_1)

{
  void *pvVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0057f914;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_0058f968;
  pvVar1 = (void *)param_1[0xac];
  local_4 = 2;
  if (pvVar1 != (void *)0x0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               ((int)pvVar1 + 700));
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  param_1[0xac] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  _eh_vector_destructor_iterator_(param_1 + 0xfc,0x10,4,FUN_00407150);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00530a50();
  FUN_0053eb40();
  ExceptionList = pvStack_c;
  return;
}




/* Function: FUN_00526b90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00526b90(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  undefined1 *puVar5;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float local_10;
  undefined1 local_c [12];
  
  if ((param_1[0xb4] != 0xe) && (param_1[0xb4] != 0xf)) {
    if ((float)param_1[0xb] < _DAT_00582ad8 == ((float)param_1[0xb] == _DAT_00582ad8)) {
      if ((*(int *)(param_1[0xac] + 100) != -1) && (*(int *)(param_1[0xac] + 0x68) != -1)) {
        fVar4 = (float10)fsin((float10)(float)param_1[0xbd]);
        puVar5 = local_c;
        local_18 = (float)fVar4;
        fVar4 = (float10)fcos((float10)(float)param_1[0xbd]);
        local_10 = (float)fVar4;
        (**(code **)(*param_1 + 0x88))(puVar5);
        FUN_00547ab0(puVar5);
        FUN_0041d580(&fStack_24,local_c,param_4);
        fStack_20 = 0.0;
        FUN_0041d4b0();
        bVar3 = fStack_20 * _DAT_00582ad8 + fStack_24 * local_18 + fStack_1c * local_10 <=
                _DAT_00582ad8;
        if (bVar3) {
          (**(code **)(*param_1 + 0xb8))(0xe);
        }
        else {
          (**(code **)(*param_1 + 0xb8))(0xf);
        }
        FUN_00526460(param_4,bVar3);
        param_1[0xbd] = param_1[0xbe];
      }
      fVar1 = (float)param_1[0xb];
      param_1[0xb] = (int)(fVar1 - (float)param_3);
      if (fVar1 - (float)param_3 <= _DAT_00582ad8) {
        (**(code **)(*param_1 + 0x84))(param_2,&DAT_00591f70,0);
        *(undefined1 *)(param_1 + 0xf8) = 0;
      }
      else {
        (**(code **)(*param_1 + 0x84))(param_2,"Damage");
      }
      iVar2 = param_1[0xac];
      if ((*(int *)(iVar2 + 100) != -1) && (*(int *)(iVar2 + 0x68) != -1)) {
        if ((float)param_1[0xb] < _DAT_00582ad8 != ((float)param_1[0xb] == _DAT_00582ad8)) {
          *(int *)(iVar2 + 0x124) = *(int *)(iVar2 + 0x184) + 1;
          *(int *)(param_1[0xac] + 0x128) = *(int *)(param_1[0xac] + 0x188) + 1;
          param_1[0xb] = 0;
        }
      }
      return 1;
    }
  }
  return 0;
}




/* Function: FUN_00526d30 */

void __fastcall FUN_00526d30(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float local_25c;
  undefined1 local_258 [4];
  float local_254;
  undefined1 local_24c [64];
  undefined1 local_20c [64];
  undefined1 local_1cc [64];
  undefined1 local_18c [64];
  undefined1 local_14c [64];
  undefined1 local_10c [64];
  undefined1 local_cc [64];
  undefined1 local_8c [64];
  undefined1 local_4c [64];
  void *local_c;
  undefined *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_0057f956;
  local_c = ExceptionList;
  if (param_1[0xb9] == 0) {
    ExceptionList = &local_c;
    uVar1 = FUN_004ffa70();
    FUN_00407260(uVar1);
    local_4 = 0;
    FUN_00547ab0(local_258);
    if (param_1[0x6b] == 0) {
      local_254 = local_254 - (float)param_1[0xbc];
    }
    *(char *)((int)param_1 + 0x277) = (char)param_1[0xf7];
    _eh_vector_constructor_iterator_
              (local_24c,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
    FUN_00407310(0x3f800000);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (*(char *)((int)param_1 + 0x3b9) == '\0') {
      if (param_1[0x6b] == 0) {
        local_254 = local_254 + *(float *)(param_1[0xac] + 0x25c + param_1[0xb5] * 4);
      }
      if (*(char *)((int)param_1 + 0x277) == '\0') {
        local_25c = (float)param_1[0xf5];
      }
      else {
        local_25c = -(float)param_1[0xf5];
      }
      uVar1 = FUN_00546f8c(local_4c,*(float *)(param_1[0xac] + 0x1fc + param_1[0xb5] * 4) +
                                    (float)param_1[0xc5] + (float)param_1[0xbd]);
      uVar2 = FUN_00546cfc(local_cc,param_1[0xc4]);
      uVar3 = FUN_00547224(local_14c,param_1[0xc6]);
      uVar4 = FUN_00545c50(local_18c,local_25c,param_1[0xf5],param_1[0xf5]);
      uVar3 = FUN_0041d7a0(local_10c,uVar4,uVar3);
      uVar2 = FUN_0041d7a0(local_1cc,uVar3,uVar2);
      uVar1 = FUN_0041d7a0(local_8c,uVar2,uVar1);
      FUN_0041d670(uVar1);
      _eh_vector_destructor_iterator_(local_8c,0x10,4,FUN_00407150);
      _eh_vector_destructor_iterator_(local_1cc,0x10,4,FUN_00407150);
      _eh_vector_destructor_iterator_(local_10c,0x10,4,FUN_00407150);
      _eh_vector_destructor_iterator_(local_18c,0x10,4,FUN_00407150);
      _eh_vector_destructor_iterator_(local_14c,0x10,4,FUN_00407150);
      _eh_vector_destructor_iterator_(local_cc,0x10,4,FUN_00407150);
      _eh_vector_destructor_iterator_(local_4c,0x10,4,FUN_00407150);
    }
    FUN_00545c38(local_258);
    if (param_1[0x6b] == 0) {
      FUN_0041d670(local_24c);
    }
    else {
      (**(code **)(*param_1 + 0x8c))(local_24c);
    }
    if ((param_1[0xb2] == 0) ||
       (iVar5 = *(int *)(param_1[0xac] + 0x7c + param_1[0xb5] * 4), iVar5 == -1)) {
      iVar5 = *(int *)(param_1[0xac] + 0x1c + param_1[0xb5] * 4);
    }
    FUN_004ffa80(iVar5);
    iVar5 = FUN_004cf110();
    FUN_00501a80((float)iVar5);
    local_4 = local_4 & 0xffffff00;
    _eh_vector_destructor_iterator_(local_24c,0x10,4,FUN_00407150);
    local_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(local_20c,0x10,4,FUN_00407150);
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00527060 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00527060(int *param_1)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_54;
  float local_50;
  float local_4c;
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
  
  piVar2 = (int *)param_1[0xa6];
  if (piVar2 == (int *)0x0) {
    return;
  }
  if (param_1[0xa7] - (int)piVar2 >> 2 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(*piVar2 + 0x7a);
  *(undefined1 *)(*piVar2 + 0x7a) = 0;
  if (_DAT_00589ee8 <= (float)param_1[0xcc]) {
    param_1[0xbd] = param_1[0xbe];
  }
  if ((float)param_1[0xcc] < ABS((float)param_1[0xbd] - (float)param_1[0xbe])) {
    fVar1 = (float)param_1[0xbd];
    if (_DAT_00589ee8 <= ABS((float)param_1[0xbd] - (float)param_1[0xbe])) {
      if ((float)param_1[0xbe] <= (float)param_1[0xbd]) {
        fVar1 = fVar1 + (float)param_1[0xcc];
      }
      else {
        fVar1 = fVar1 - (float)param_1[0xcc];
      }
      param_1[0xbd] = (int)fVar1;
    }
    else if ((float)param_1[0xbe] <= (float)param_1[0xbd]) {
      param_1[0xbd] = (int)(fVar1 - (float)param_1[0xcc]);
      if (fVar1 - (float)param_1[0xcc] < (float)param_1[0xbe]) {
        param_1[0xbd] = param_1[0xbe];
      }
    }
    else {
      param_1[0xbd] = (int)(fVar1 + (float)param_1[0xcc]);
      if ((float)param_1[0xbe] < fVar1 + (float)param_1[0xcc]) {
        param_1[0xbd] = param_1[0xbe];
      }
    }
    if ((float)param_1[0xbd] <= _DAT_00582ad8) {
      fVar7 = (float10)_CIfmod();
      param_1[0xbd] = (int)(float)((float10)_DAT_00591a50 - fVar7);
    }
    else {
      fVar7 = (float10)_CIfmod();
      param_1[0xbd] = (int)(float)fVar7;
    }
  }
  if (param_1[0x6b] != 0) {
    return;
  }
  fVar7 = (float10)FUN_0041cb80();
  fVar7 = (float10)fsin(fVar7 * (float10)_DAT_0058a65c);
  local_38 = 0.0;
  local_2c = 0.0;
  fVar7 = fVar7 * (float10)_DAT_00587db8 + (float10)(float)param_1[0xbd];
  fVar8 = (float10)fsin(fVar7);
  local_3c = (float)fVar8;
  fVar8 = (float10)fcos(fVar7);
  local_34 = (float)fVar8;
  fVar8 = (float10)fsin(fVar7 + (float10)_DAT_0058a9dc);
  local_30 = (float)fVar8;
  fVar7 = (float10)fcos(fVar7 + (float10)_DAT_0058a9dc);
  local_28 = (float)fVar7;
  uVar4 = FUN_0041d5b0(&local_18,&local_3c,0x42700000,param_1[0xe2]);
  FUN_0041d5b0(&local_54,uVar4);
  uVar4 = FUN_0041d5b0(&local_18,&local_3c,0x41c80000,param_1[0xe2]);
  FUN_0041d5b0(&local_24,uVar4);
  uVar4 = FUN_0041d5b0(&local_48,&local_3c,0x42200000,param_1[0xe2]);
  FUN_0041d5b0(&local_18,uVar4);
  uVar4 = FUN_0041d5b0(&local_3c,&local_30,0x41f00000,param_1[0xe2]);
  FUN_0041d5b0(&local_48,uVar4);
  uVar4 = FUN_0041d5b0(local_c,&local_30,0x42c80000,param_1[0xe2]);
  FUN_0041d5b0(&local_3c,uVar4);
  *(undefined1 *)(*(int *)param_1[0xa6] + 0x78) = 0;
  switch(param_1[0xb4]) {
  case 0:
    *(undefined1 *)(*(int *)param_1[0xa6] + 0x78) = 1;
    break;
  case 1:
    if ((char)param_1[0xf8] != '\0') {
      local_2c = local_20;
      local_30 = local_24;
      local_28 = local_1c;
      FUN_004d51a0(&local_30);
    }
    break;
  case 2:
    if ((char)param_1[0xf8] != '\0') {
      local_24 = -local_18;
      local_20 = -local_14;
      local_1c = -local_10;
      FUN_004d51a0(&local_24);
    }
    break;
  case 3:
    if ((char)param_1[0xf8] != '\0') {
      local_2c = local_50;
      local_30 = local_54;
      local_28 = local_4c;
      FUN_004d51a0(&local_30);
    }
    break;
  case 4:
    if ((char)param_1[0xf8] != '\0') {
      local_24 = -local_54;
      local_20 = -local_50;
      local_1c = -local_4c;
      FUN_004d51a0(&local_24);
    }
    break;
  case 5:
    if ((char)param_1[0xf8] != '\0') {
      local_18 = -local_48;
      local_14 = -local_44;
      local_10 = -local_40;
      FUN_004d51a0(&local_18);
    }
    break;
  case 6:
    if ((char)param_1[0xf8] == '\0') break;
    local_18 = local_48;
    local_14 = local_44;
    local_10 = local_40;
    goto LAB_005275f8;
  case 7:
    if (((char)param_1[0xf8] != '\0') && (iVar5 = FUN_004cf110(), iVar5 == 5)) {
      local_18 = 0.0;
      local_14 = 100.0;
      local_10 = 0.0;
      FUN_004d51a0(&local_18);
    }
    break;
  case 8:
    if ((char)param_1[0xf8] == '\0') {
      return;
    }
    iVar5 = FUN_004cf110();
    if (iVar5 != 5) {
      return;
    }
    local_18 = 0.0;
    local_14 = 100.0;
    local_10 = 0.0;
    FUN_004d51a0(&local_18);
    return;
  case 10:
    if ((char)param_1[0xf8] == '\0') {
      return;
    }
    (**(code **)(*param_1 + 0xb8))(9);
    return;
  case 0xc:
  case 0xd:
    if ((char)param_1[0xf8] == '\0') break;
    local_18 = local_54 * (float)param_1[0xdd];
    local_14 = local_50 * (float)param_1[0xdd];
    local_10 = local_4c * (float)param_1[0xdd];
    goto LAB_005275f8;
  case 0xe:
    iVar5 = FUN_004cf110();
    bVar3 = *(int *)(param_1[0xac] + 0x13c + param_1[0xb5] * 4) <= iVar5;
    iVar6 = FUN_004cf110();
    if ((iVar6 < 1) && (0 < iVar5)) {
      local_18 = local_54 * _DAT_00588be4;
      local_14 = local_50 * _DAT_00588be4;
      local_10 = local_4c * _DAT_00588be4;
LAB_0052766f:
      FUN_004d51a0(&local_18);
    }
    goto LAB_00527674;
  case 0xf:
    iVar5 = FUN_004cf110();
    bVar3 = *(int *)(param_1[0xac] + 0x13c + param_1[0xb5] * 4) <= iVar5;
    iVar6 = FUN_004cf110();
    if ((iVar6 < 1) && (0 < iVar5)) {
      local_18 = local_54 + local_54;
      local_14 = local_50 + local_50;
      local_10 = local_4c + local_4c;
      goto LAB_0052766f;
    }
LAB_00527674:
    if (!bVar3) {
      return;
    }
    break;
  case 0x10:
    iVar5 = FUN_004cf110();
    if (9 < iVar5) break;
    local_18 = -local_3c;
    local_14 = -local_38;
    local_10 = -local_34;
LAB_005275f8:
    FUN_004d51a0(&local_18);
    break;
  case 0x11:
    iVar5 = FUN_004cf110();
    if (iVar5 < 10) {
      local_14 = local_38;
      local_18 = local_3c;
      local_10 = local_34;
      FUN_004d51a0(&local_18);
    }
  }
  FUN_004d51d0(&local_18);
  fVar7 = (float10)FUN_0041ce10();
  fVar7 = (float10)_DAT_00582af0 - fVar7 * (float10)_DAT_00591d40;
  if (fVar7 < (float10)_DAT_00582ad8) {
    fVar7 = (float10)_DAT_00582ad8;
  }
  local_38 = local_14;
  local_3c = (float)((float10)local_18 * fVar7);
  local_34 = (float)((float10)local_10 * fVar7);
  if (*(int *)(*(int *)param_1[0xa6] + 0xbc) != 0) {
    FUN_004e4778(*(int *)(*(int *)param_1[0xa6] + 0xbc),local_3c,local_14,local_34);
  }
  return;
}




/* Function: FUN_00527ac0 */

void __thiscall
FUN_00527ac0(int param_1,int param_2,char param_3,int *param_4,undefined4 *param_5,char param_6)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_3 == '\0') {
    iVar9 = *(int *)(param_2 + 8);
  }
  else {
    iVar9 = *(int *)(param_2 + 4);
  }
  if (param_6 == '\0') {
    _param_6 = std::numeric_limits<float>::max();
    iVar10 = *(int *)(iVar9 + 4);
    uVar8 = 0;
    iVar4 = 0;
    do {
      while( true ) {
        if ((iVar10 == 0) || ((uint)(*(int *)(iVar9 + 8) - iVar10 >> 2) <= uVar8))
        goto LAB_00527c57;
        iVar1 = *(int *)(iVar10 + uVar8 * 4);
        if (iVar1 != param_2) break;
LAB_00527c4a:
        uVar8 = uVar8 + 1;
      }
      if (iVar1 == *(int *)(param_1 + 0x328)) goto LAB_00527c54;
      iVar5 = *(int *)(iVar1 + 4);
      if (iVar5 == iVar9) {
        iVar5 = *(int *)(iVar1 + 8);
      }
      FUN_0041d580(&local_c,iVar5 + 0x10,param_1 + 0x31c);
      fVar2 = local_c * local_c + local_8 * local_8 + local_4 * local_4;
      if (_param_6 <= fVar2) goto LAB_00527c4a;
      uVar8 = uVar8 + 1;
      iVar4 = iVar1;
      _param_6 = fVar2;
    } while( true );
  }
  piVar7 = *(int **)(iVar9 + 4);
  if (piVar7 == (int *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(iVar9 + 8) - (int)piVar7 >> 2;
  }
  uVar3 = 0;
  uVar8 = 0;
  if (0 < iVar10) {
    do {
      uVar8 = uVar3;
      if (*piVar7 == param_2) break;
      uVar3 = uVar3 + 1;
      piVar7 = piVar7 + 1;
      uVar8 = 0;
    } while ((int)uVar3 < iVar10);
  }
  iVar4 = FUN_0046a3d0();
  if (((iVar4 == 4) && (0 < *(int *)(param_1 + 0x39c))) && (*(int *)(param_1 + 0x39c) < 3)) {
    if (iVar10 == 4) {
      iVar4 = rand();
      uVar3 = uVar8 + 1;
      if (iVar4 % 100 < 0x33) {
        uVar3 = uVar8 + 2;
      }
      uVar3 = uVar3 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
    }
    else {
      if (iVar10 != 3) goto LAB_00527b8c;
      uVar3 = (int)(uVar8 + 1) % 3;
    }
    if (uVar3 == 0xffffffff) goto LAB_00527b8c;
  }
  else {
LAB_00527b8c:
    do {
      iVar4 = rand();
      uVar3 = iVar4 % iVar10;
    } while (uVar3 == uVar8);
  }
  *param_4 = *(int *)(*(int *)(iVar9 + 4) + uVar3 * 4);
LAB_00527c5e:
  uVar6 = FUN_00525860(*param_4);
  *param_5 = uVar6;
  return;
LAB_00527c54:
  iVar4 = *(int *)(iVar10 + uVar8 * 4);
LAB_00527c57:
  *param_4 = iVar4;
  goto LAB_00527c5e;
}




/* Function: FUN_005289f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005289f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  float unaff_EBX;
  float unaff_EBP;
  float *pfVar7;
  float *pfVar8;
  undefined4 unaff_retaddr;
  float fStack_ac;
  undefined4 uStack_9c;
  float afStack_98 [10];
  float afStack_70 [11];
  undefined1 auStack_44 [68];
  
  *(undefined4 *)(*(int *)param_1[0xa6] + 0xd4) = 0;
  *(undefined4 *)(*(int *)param_1[0xa6] + 0xd8) = 0;
  if (param_1[0xb9] != 0) {
    uVar4 = FUN_004ffd30(param_2,param_3);
    return uVar4;
  }
  if (param_1[0x6b] != 0) {
    uVar4 = FUN_004ffd30(param_2,param_3);
    return uVar4;
  }
  uVar4 = (**(code **)(*param_1 + 0x88))();
  FUN_00407260(uVar4);
  (**(code **)(*param_1 + 0x8c))(param_1 + 0xfc);
  afStack_98[0] = (float)thunk_FUN_004ffd30(unaff_retaddr,param_2);
  (**(code **)(*param_1 + 0x8c))(auStack_44);
  if ((param_1[0x10c] != 0) && ((char)param_1[0xf8] != '\0')) {
    FUN_00547ab0(&stack0xffffff4c);
    FUN_0041e920(2);
    pfVar5 = (float *)FUN_0041cc40(param_1[0x10c],2,0x80000000);
    fVar1 = unaff_EBP - _DAT_0058a79c;
    fVar2 = unaff_EBX + _DAT_00588c00;
    fVar3 = fStack_ac - _DAT_0058a79c;
    pfVar5[3] = 0.0;
    pfVar5[4] = 1.0;
    pfVar5[5] = 0.0;
    pfVar5[6] = 0.0;
    pfVar5[7] = 0.0;
    pfVar5[8] = 0.0;
    *pfVar5 = fVar1;
    pfVar5[2] = fVar3;
    pfVar5[9] = 0.0;
    pfVar5[1] = fVar2;
    fVar1 = unaff_EBP + _DAT_0058a79c;
    fVar2 = unaff_EBX + _DAT_00588c00;
    fVar3 = fStack_ac - _DAT_0058a79c;
    pfVar5[0xd] = 0.0;
    pfVar7 = pfVar5;
    pfVar8 = afStack_98;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    pfVar5[10] = fVar1;
    pfVar5[0xb] = fVar2;
    pfVar5[0xe] = 1.0;
    pfVar5[0xc] = fVar3;
    pfVar5[0xf] = 0.0;
    pfVar5[0x10] = 1.0;
    pfVar5[0x11] = 0.0;
    pfVar5[0x12] = 0.0;
    pfVar5[0x13] = 0.0;
    fVar1 = unaff_EBP + _DAT_0058a79c;
    fVar2 = unaff_EBX + _DAT_00588c00;
    fVar3 = fStack_ac + _DAT_0058a79c;
    pfVar5[0x17] = 0.0;
    pfVar5[0x18] = 1.0;
    pfVar5[0x19] = 0.0;
    pfVar5[0x1a] = 1.0;
    pfVar5[0x1b] = 1.0;
    pfVar5[0x14] = fVar1;
    pfVar5[0x16] = fVar3;
    pfVar5[0x15] = fVar2;
    pfVar5[0x1c] = 0.0;
    pfVar5[0x1d] = 0.0;
    pfVar7 = pfVar5 + 0x14;
    pfVar8 = afStack_70;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    FUN_0041eac0();
    pfVar5 = (float *)FUN_0041cc40(param_1[0x10c],2,0x80000000);
    fVar1 = unaff_EBP - _DAT_0058a79c;
    fVar2 = unaff_EBX + _DAT_00588c00;
    fVar3 = fStack_ac + _DAT_0058a79c;
    pfVar5[3] = 0.0;
    pfVar5[5] = 0.0;
    pfVar5[6] = 0.0;
    pfVar5[8] = 0.0;
    pfVar5[9] = 0.0;
    pfVar5[2] = fVar3;
    pfVar5[4] = 1.0;
    pfVar5[7] = 1.0;
    pfVar7 = afStack_98;
    pfVar8 = pfVar5 + 10;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    *pfVar5 = fVar1;
    pfVar5[1] = fVar2;
    pfVar7 = afStack_70;
    pfVar8 = pfVar5 + 0x14;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    FUN_0041eac0();
  }
  FUN_00407300();
  return uStack_9c;
}




/* Function: FUN_00528cb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00528cb0(int *param_1)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  undefined1 *puVar4;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float local_1c;
  undefined1 local_18 [12];
  undefined1 auStack_c [12];
  
  piVar1 = (int *)param_1[0xa6];
  if (((piVar1 != (int *)0x0) && (param_1[0xa7] - (int)piVar1 >> 2 != 0)) &&
     (*(int *)(*piVar1 + 0xd4) != 0)) {
    fVar2 = (float10)fsin((float10)(float)param_1[0xbd]);
    puVar4 = local_18;
    local_24 = (float)fVar2;
    fVar2 = (float10)fcos((float10)(float)param_1[0xbd]);
    local_1c = (float)fVar2;
    (**(code **)(*param_1 + 0x88))(puVar4);
    FUN_00547ab0(puVar4);
    puVar4 = auStack_c;
    (**(code **)(**(int **)(*(int *)param_1[0xa6] + 0xd4) + 0x88))(puVar4);
    FUN_00547ab0(puVar4);
    FUN_0041d580(&fStack_30,auStack_c,local_18);
    if ((float)_DAT_00588818 <
        fStack_2c * _DAT_00582ad8 + fStack_30 * local_24 + fStack_28 * local_1c) {
      FUN_004ffac0();
      fVar2 = (float10)FUN_0043f960();
      FUN_004ffac0();
      fVar3 = (float10)FUN_0043f960();
      if ((float10)SQRT(fStack_30 * fStack_30 + fStack_2c * fStack_2c + fStack_28 * fStack_28) <
          fVar3 + (float10)(float)fVar2) {
        return *(undefined4 *)(*(int *)param_1[0xa6] + 0xd4);
      }
    }
  }
  return 0;
}




/* Function: FUN_00528e00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00528e00(int *param_1,undefined4 param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f9c2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0xdc,(nothrow_t *)&DAT_005b6164);
  iVar2 = 0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    fVar4 = (float)param_1[0xe3] * _DAT_00583340;
    uVar3 = (**(code **)(*param_1 + 0x88))(fVar4);
    iVar2 = FUN_00432be0(param_3,param_1[0xbc],uVar3,fVar4);
  }
  *(int **)(iVar2 + 0x14) = param_1;
  local_4 = 0xffffffff;
  param_3 = iVar2;
  FUN_004225c0(&param_3);
  ExceptionList = pvStack_c;
  return 1;
}




/* Function: FUN_0052bd10 */

undefined4 FUN_0052bd10(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f9c2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x438,(nothrow_t *)&DAT_005b6164);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_004d3e50(pvVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_0052bd80 */

undefined4 * __fastcall FUN_0052bd80(undefined4 *param_1)

{
  FUN_0053eae0();
  *param_1 = &PTR_LAB_00592398;
  return param_1;
}




/* Function: FUN_0052bdc0 */

void * __thiscall FUN_0052bdc0(void *param_1,byte param_2)

{
  thunk_FUN_0053eb40();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0052be00 */

void __fastcall FUN_0052be00(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}




/* Function: FUN_0052be20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0052be20(int param_1,float *param_2,float param_3)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 uVar6;
  uint uVar7;
  ushort uVar8;
  float10 fVar9;
  float10 fVar10;
  undefined1 *puVar11;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  puVar11 = local_18;
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0.0;
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  FUN_0041d580(local_c,param_2,param_1,puVar11);
  pfVar5 = (float *)FUN_0041d510(puVar11);
  if (pfVar5 != &local_30) {
    local_30 = *pfVar5;
    local_2c = pfVar5[1];
    local_28 = pfVar5[2];
  }
  uVar6 = FUN_0041d5b0(local_c,&local_30,*(undefined4 *)(param_1 + 0x1c));
  pfVar5 = (float *)FUN_0041d550(local_18,param_1,uVar6);
  fVar1 = local_24;
  fVar3 = local_1c;
  fVar4 = local_20;
  if (pfVar5 != &local_24) {
    fVar1 = *pfVar5;
    fVar3 = pfVar5[2];
    fVar4 = pfVar5[1];
  }
  fVar1 = local_30 * *param_2 +
          local_2c * param_2[1] +
          local_28 * param_2[2] + -(local_30 * fVar1 + local_2c * fVar4 + local_28 * fVar3);
  uVar7 = (uint)(ushort)((ushort)(fVar1 < param_3) << 8 | (ushort)(fVar1 == param_3) << 0xe);
  if (fVar1 < param_3 || (fVar1 == param_3) != 0) {
    fVar9 = (float10)fsin((float10)*(float *)(param_1 + 0x18));
    fVar1 = (float)fVar9;
    FUN_0041d580(&local_30,param_2,param_1);
    pfVar5 = (float *)(param_1 + 0xc);
    uVar6 = FUN_00434a40(local_c,(_DAT_00583354 / fVar1) * param_3,pfVar5);
    FUN_0041d550(&local_24,&local_30,uVar6);
    fVar10 = (float10)local_24 * (float10)*pfVar5 +
             (float10)local_20 * (float10)*(float *)(param_1 + 0x10) +
             (float10)local_1c * (float10)*(float *)(param_1 + 0x14);
    fVar9 = (float10)_DAT_00582ad8;
    uVar7 = (uint)(ushort)((ushort)(fVar10 < fVar9) << 8 | (ushort)(fVar10 == fVar9) << 0xe);
    if (fVar10 >= fVar9 && (fVar10 == fVar9) == 0) {
      fVar10 = fVar10 * fVar10;
      fVar9 = (float10)fcos((float10)*(float *)(param_1 + 0x18));
      fVar9 = ((float10)local_24 * (float10)local_24 +
              (float10)local_20 * (float10)local_20 + (float10)local_1c * (float10)local_1c) * fVar9
      ;
      uVar7 = (uint)(ushort)((ushort)(fVar9 < fVar10) << 8 |
                             (ushort)(NAN(fVar9) || NAN(fVar10)) << 10 |
                            (ushort)(fVar9 == fVar10) << 0xe);
      if (fVar9 < fVar10 != (fVar9 == fVar10)) {
        fVar3 = local_30 * local_30 + local_2c * local_2c + local_28 * local_28;
        fVar4 = -(local_30 * *pfVar5 +
                 local_2c * *(float *)(param_1 + 0x10) + local_28 * *(float *)(param_1 + 0x14));
        bVar2 = fVar4 < _DAT_00582ad8;
        if ((fVar4 <= _DAT_00582ad8) ||
           (fVar1 = fVar1 * fVar1 * fVar3, bVar2 = fVar1 < fVar4 * fVar4,
           bVar2 == (fVar1 == fVar4 * fVar4))) {
          return CONCAT31((uint3)bVar2,1);
        }
        param_3 = param_3 * param_3;
        uVar8 = (ushort)(fVar3 < param_3) << 8 | (ushort)(NAN(fVar3) || NAN(param_3)) << 10 |
                (ushort)(fVar3 == param_3) << 0xe;
        uVar7 = (uint)uVar8;
        if (fVar3 < param_3 != (fVar3 == param_3)) {
          return CONCAT31((uint3)(byte)(uVar8 >> 8),1);
        }
      }
    }
  }
  return uVar7;
}




/* Function: FUN_0052c060 */

void FUN_0052c060(int *param_1,undefined4 *param_2,float *param_3)

{
  undefined4 *puVar1;
  float10 fVar2;
  undefined1 *puVar3;
  undefined1 local_c [12];
  
  puVar3 = local_c;
  (**(code **)(*param_1 + 0x90))(local_c);
  puVar1 = (undefined4 *)FUN_00547ab0(puVar3);
  if (puVar1 != param_2) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
  }
  FUN_004ffac0();
  fVar2 = (float10)FUN_0043f960();
  *param_3 = (float)fVar2;
  return;
}




/* Function: FUN_0052c0c0 */

uint __thiscall FUN_0052c0c0(int param_1,float param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 in_EAX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c [2];
  float local_4;
  
  fVar4 = param_2;
  uVar5 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)(param_1 + 0xa4));
  iVar7 = param_1 + 0x94;
  if (*(char *)(param_1 + 0xa4) == '\0') {
    iVar7 = param_1 + 0x84;
  }
  param_4 = param_4 * param_4;
  for (uVar6 = 0;
      (iVar1 = *(int *)(iVar7 + 4), iVar1 != 0 &&
      (uVar5 = *(int *)(iVar7 + 8) - iVar1 >> 2, uVar6 < uVar5)); uVar6 = uVar6 + 1) {
    fVar2 = *(float *)(iVar1 + uVar6 * 4);
    if (fVar4 != fVar2) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      FUN_0052c060(fVar2,&local_18,&param_2);
      param_2 = param_2 * param_2;
      FUN_0041d580(local_c,&local_18,param_3);
      fVar2 = local_c[0] * local_c[0] + local_4 * local_4;
      fVar3 = param_2 - param_4;
      uVar5 = (uint)(ushort)((ushort)(fVar3 < fVar2) << 8 | (ushort)(fVar3 == fVar2) << 0xe);
      if (fVar3 >= fVar2 && (fVar3 == fVar2) == 0) {
        return uVar5;
      }
    }
  }
  return CONCAT31((int3)(uVar5 >> 8),1);
}




/* Function: FUN_0052c1b0 */

void __thiscall FUN_0052c1b0(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057f9d0;
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
      FUN_005267d0();
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




/* Function: FUN_0052c450 */

void __thiscall FUN_0052c450(int param_1,uint param_2)

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
    FUN_0052c1b0(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 2))) {
    FUN_00409930(&param_2,*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_0052c4d0 */

undefined4 __fastcall FUN_0052c4d0(int param_1)

{
  *(undefined1 *)(param_1 + 0xa4) = 1;
  if (*(void **)(param_1 + 0x98) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x98));
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(void **)(param_1 + 0x88) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return 1;
}




/* Function: FUN_0052c530 */

undefined4 __fastcall FUN_0052c530(int param_1)

{
  if (*(char *)(param_1 + 0xa4) == '\0') {
    if (*(void **)(param_1 + 0x88) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)(param_1 + 0x88));
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  else {
    if (*(void **)(param_1 + 0x98) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)(param_1 + 0x98));
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  *(bool *)(param_1 + 0xa4) = *(char *)(param_1 + 0xa4) == '\0';
  return 1;
}




/* Function: FUN_0052c5a0 */

void __thiscall FUN_0052c5a0(int param_1,undefined4 param_2)

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
  FUN_0052c1b0(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_0052c610 */

undefined1 __fastcall FUN_0052c610(int param_1)

{
  *(undefined1 *)(param_1 + 0xa4) = 1;
  FUN_0052c450(0,0);
  FUN_0052c450(0,0);
  return 1;
}




/* Function: FUN_0052c640 */

undefined4 __thiscall FUN_0052c640(int param_1,undefined4 param_2,char param_3)

{
  if (param_3 == '\0') {
    if (*(char *)(param_1 + 0xa4) != '\0') {
      FUN_0052c5a0(&param_2);
      return 1;
    }
    FUN_0052c5a0(&param_2);
    return 1;
  }
  if (*(char *)(param_1 + 0xa4) != '\0') {
    FUN_0052c5a0(&param_2);
    return 1;
  }
  FUN_0052c5a0(&param_2);
  return 1;
}




/* Function: FUN_0052c6b0 */

/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_0052c6b0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int local_10 [4];
  
  iVar2 = param_2;
  iVar4 = param_1 + 0x94;
  if (*(char *)(param_1 + 0xa4) == '\0') {
    iVar4 = param_1 + 0x84;
  }
  for (uVar5 = 0;
      (iVar1 = *(int *)(iVar4 + 4), iVar1 != 0 && (uVar5 < (uint)(*(int *)(iVar4 + 8) - iVar1 >> 2))
      ); uVar5 = uVar5 + 1) {
    local_10[0] = *(int *)(iVar1 + uVar5 * 4);
    if (iVar2 != local_10[0]) {
      local_10[1] = 0;
      local_10[2] = 0;
      local_10[3] = 0;
      FUN_0052c060(local_10[0],local_10 + 1,&param_2);
      cVar3 = FUN_0052be20(param_3,local_10 + 1,param_2);
      if (cVar3 != '\0') {
        FUN_0052c5a0(local_10);
      }
    }
  }
  if (*(int *)(param_4 + 4) == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_4 + 8) - *(int *)(param_4 + 4);
  return CONCAT31((int3)(iVar4 >> 10),iVar4 >> 2 != 0);
}




/* Function: FUN_0052c780 */

void FUN_0052c780(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0052be00();
  local_8 = param_5;
  if (param_3 != &local_14) {
    local_14 = *param_3;
    local_10 = param_3[1];
    local_c = param_3[2];
  }
  if (param_2 != &local_20) {
    local_20 = *param_2;
    local_1c = param_2[1];
    local_18 = param_2[2];
  }
  local_4 = param_4;
  FUN_0052c6b0(param_1,&local_20,param_6);
  return;
}




/* Function: FUN_0052c800 */

undefined4 * __fastcall FUN_0052c800(undefined4 *param_1)

{
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00592450;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  return param_1;
}




/* Function: FUN_0052c840 */

void __fastcall FUN_0052c840(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00592450;
  if ((void *)param_1[0x26] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x26]);
  }
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  if ((void *)param_1[0x22] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x22]);
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FUN_0040da90();
  return;
}




/* Function: FUN_0052c8a0 */

void * __thiscall FUN_0052c8a0(void *param_1,byte param_2)

{
  FUN_0052c840();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0052c8c0 */

void __fastcall FUN_0052c8c0(undefined2 *param_1)

{
  *(undefined4 *)(param_1 + 0x6f) = 0;
  *param_1 = 0;
  return;
}




/* Function: FUN_0052c8e0 */

undefined2 FUN_0052c8e0(void)

{
  return 1;
}




/* Function: FUN_0052c8f0 */

undefined2 FUN_0052c8f0(void)

{
  return 0;
}




/* Function: FUN_0052c900 */

undefined4 FUN_0052c900(void)

{
  return 1;
}




/* Function: FUN_0052c910 */

void __thiscall FUN_0052c910(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}




/* Function: FUN_0052c920 */

void __thiscall
FUN_0052c920(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x20) = param_5;
  return;
}




/* Function: FUN_0052c940 */

void __fastcall FUN_0052c940(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_005924d4;
  param_1[1] = 0;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  param_1[4] = 0x3f800000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}




/* Function: FUN_0052c970 */

void __fastcall FUN_0052c970(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_005924d4;
  return;
}




/* Function: FUN_0052c980 */

void __thiscall FUN_0052c980(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 8) = *param_2;
    *(undefined4 *)(param_1 + 0xc) = param_2[1];
    *(undefined4 *)(param_1 + 0x10) = param_2[2];
  }
  return;
}




/* Function: FUN_0052c9a0 */

void * __thiscall FUN_0052c9a0(void *param_1,byte param_2)

{
  FUN_0052c970();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0052c9c0 */

int __thiscall FUN_0052c9c0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057f9e0;
  local_10 = ExceptionList;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
  }
  ExceptionList = &local_10;
  cVar1 = FUN_00464310(iVar2);
  if (cVar1 != '\0') {
    local_8 = 0;
    uVar3 = FUN_00543360(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(param_1 + 4),param_1,param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  ExceptionList = local_10;
  return param_1;
}





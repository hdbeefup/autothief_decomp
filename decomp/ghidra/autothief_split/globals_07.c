/* globals_07 functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_0052ca60 */

int __thiscall FUN_0052ca60(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057f9f0;
  local_10 = ExceptionList;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 3;
  }
  ExceptionList = &local_10;
  cVar1 = FUN_0045bd70(iVar2);
  if (cVar1 != '\0') {
    local_8 = 0;
    uVar3 = FUN_00512430(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(param_1 + 4),param_1,param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_0052cb00 */

undefined4 __thiscall FUN_0052cb00(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_10 [4];
  void *local_c;
  int local_8;
  int local_4;
  
  local_c = (void *)0x0;
  local_8 = 0;
  local_4 = 0;
  FUN_00505a80((*(int *)(param_1 + 0x14) + 2) * *(int *)(param_1 + 0x20) * 2 + -2);
  pvVar5 = local_c;
  if (param_3 == 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        local_1c = *(int *)(param_1 + 0x14) * iVar2;
        local_14 = iVar2 + 1;
        param_3 = local_14 * *(int *)(param_1 + 0x14);
        if (0 < iVar2) {
          FUN_0043b9c0(local_8 + -4);
          FUN_0043b9c0(&param_3);
        }
        FUN_0043b9c0(&param_3);
        FUN_0043b9c0(&local_1c);
        iVar2 = *(int *)(param_1 + 0x14);
        pvVar5 = local_c;
        if (0 < iVar2) {
          iVar4 = 1;
          do {
            iVar3 = local_8;
            local_18 = iVar4 % iVar2 + param_3;
            if ((pvVar5 == (void *)0x0) ||
               ((uint)(local_4 - (int)pvVar5 >> 2) <= (uint)(local_8 - (int)pvVar5 >> 2))) {
              FUN_0043b080(local_8,1,&local_18);
              pvVar5 = local_c;
            }
            else {
              FUN_004520c0(local_8,1,&local_18,local_10,param_3);
              local_8 = iVar3 + 4;
            }
            iVar2 = local_8;
            local_18 = iVar4 % *(int *)(param_1 + 0x14) + local_1c;
            if ((pvVar5 == (void *)0x0) ||
               ((uint)(local_4 - (int)pvVar5 >> 2) <= (uint)(local_8 - (int)pvVar5 >> 2))) {
              FUN_0043b080(local_8,1,&local_18);
              pvVar5 = local_c;
            }
            else {
              FUN_004520c0(local_8,1,&local_18,local_10,param_3);
              local_8 = iVar2 + 4;
            }
            iVar2 = *(int *)(param_1 + 0x14);
            bVar1 = iVar4 < iVar2;
            iVar4 = iVar4 + 1;
          } while (bVar1);
        }
        iVar2 = local_14;
      } while (local_14 < *(int *)(param_1 + 0x20));
    }
  }
  else if ((param_3 == 1) && (iVar2 = 0, 0 < *(int *)(param_1 + 0x20))) {
    do {
      iVar4 = iVar2 + 1;
      param_3 = *(int *)(param_1 + 0x14) * iVar2;
      local_18 = iVar4 * *(int *)(param_1 + 0x14);
      local_14 = iVar4;
      FUN_0043b9c0(&param_3);
      FUN_0043b9c0(&local_18);
      iVar3 = *(int *)(param_1 + 0x14);
      pvVar5 = local_c;
      iVar2 = iVar4;
      if (0 < iVar3) {
        iVar4 = 1;
        do {
          iVar2 = local_8;
          local_1c = iVar4 % iVar3 + param_3;
          if ((pvVar5 == (void *)0x0) ||
             ((uint)(local_4 - (int)pvVar5 >> 2) <= (uint)(local_8 - (int)pvVar5 >> 2))) {
            FUN_0043b080(local_8,1,&local_1c);
            pvVar5 = local_c;
          }
          else {
            FUN_004520c0(local_8,1,&local_1c,local_10,param_3);
            local_8 = iVar2 + 4;
          }
          iVar2 = local_8;
          local_1c = iVar4 % *(int *)(param_1 + 0x14) + local_18;
          if ((pvVar5 == (void *)0x0) ||
             ((uint)(local_4 - (int)pvVar5 >> 2) <= (uint)(local_8 - (int)pvVar5 >> 2))) {
            FUN_0043b080(local_8,1,&local_1c);
            pvVar5 = local_c;
          }
          else {
            FUN_004520c0(local_8,1,&local_1c,local_10,param_3);
            local_8 = iVar2 + 4;
          }
          iVar3 = *(int *)(param_1 + 0x14);
          bVar1 = iVar4 < iVar3;
          iVar4 = iVar4 + 1;
          iVar2 = local_14;
        } while (bVar1);
      }
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  FUN_0052c9c0(local_10);
  if (pvVar5 == (void *)0x0) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar5);
}




/* Function: FUN_0052ce30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0052ce30(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float local_40;
  float local_3c;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [12];
  undefined1 local_10 [4];
  void *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar6 = 0;
  local_c = (void *)0x0;
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  fVar2 = _DAT_005b9004 / (float)*(int *)(param_1 + 0x18);
  local_4 = 0;
  fVar3 = _DAT_005b9004 + _DAT_005b9004;
  local_3c = (float)*(int *)(param_1 + 0x1c) * fVar2;
  FUN_004ff2f0((*(int *)(param_1 + 0x20) + 1) * iVar1);
  if (-1 < *(int *)(param_1 + 0x20)) {
    iVar5 = *(int *)(param_1 + 0x14);
    do {
      fVar8 = (float10)fcos((float10)local_3c);
      iVar7 = 0;
      local_40 = 0.0;
      fVar9 = (float10)fsin((float10)local_3c);
      if (0 < iVar5) {
        do {
          fVar10 = (float10)fsin((float10)local_40);
          local_28 = (float)(fVar10 * (float10)(float)fVar9 * (float10)*(float *)(param_1 + 4));
          local_24 = (float)fVar8 * *(float *)(param_1 + 4);
          fVar10 = (float10)fcos((float10)local_40);
          local_20 = (float)(-(fVar10 * (float10)(float)fVar9) * (float10)*(float *)(param_1 + 4));
          uVar4 = FUN_0046a530(local_1c,&local_28,param_1 + 8);
          FUN_00478780(uVar4);
          local_40 = local_40 + fVar3 / (float)iVar1;
          iVar5 = *(int *)(param_1 + 0x14);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar5);
      }
      local_3c = local_3c + fVar2;
      iVar6 = iVar6 + 1;
    } while (iVar6 <= *(int *)(param_1 + 0x20));
  }
  FUN_004e2cf0(local_10);
  if (local_c == (void *)0x0) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_c);
}




/* Function: FUN_0052cf60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0052cf60(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  undefined1 *puVar10;
  float local_48;
  float local_44;
  float local_34;
  float local_30;
  float local_2c;
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [4];
  void *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar6 = 0;
  local_c = (void *)0x0;
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  fVar2 = _DAT_005b9004 / (float)*(int *)(param_1 + 0x18);
  local_4 = 0;
  fVar3 = _DAT_005b9004 + _DAT_005b9004;
  local_44 = (float)*(int *)(param_1 + 0x1c) * fVar2;
  FUN_004ff2f0((*(int *)(param_1 + 0x20) + 1) * iVar1);
  if (-1 < *(int *)(param_1 + 0x20)) {
    iVar5 = *(int *)(param_1 + 0x14);
    do {
      fVar8 = (float10)fcos((float10)local_44);
      iVar7 = 0;
      local_48 = 0.0;
      fVar9 = (float10)fsin((float10)local_44);
      if (0 < iVar5) {
        local_30 = (float)fVar8;
        do {
          fVar8 = (float10)fsin((float10)local_48);
          puVar10 = local_28;
          local_34 = (float)(fVar8 * (float10)(float)fVar9);
          fVar8 = (float10)fcos((float10)local_48);
          local_2c = (float)-(fVar8 * (float10)(float)fVar9);
          FUN_0046a530(local_1c,&local_34,param_1 + 8,puVar10);
          uVar4 = FUN_0041d510(puVar10);
          FUN_00478780(uVar4);
          local_48 = local_48 + fVar3 / (float)iVar1;
          iVar5 = *(int *)(param_1 + 0x14);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar5);
      }
      local_44 = local_44 + fVar2;
      iVar6 = iVar6 + 1;
    } while (iVar6 <= *(int *)(param_1 + 0x20));
  }
  FUN_004e2cf0(local_10);
  if (local_c == (void *)0x0) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_c);
}




/* Function: FUN_0052d090 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0052d090(int param_1,undefined4 param_2,char param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  void *pvVar4;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  float local_20;
  float local_1c;
  undefined1 local_18 [4];
  void *local_14;
  int local_10;
  int local_c;
  
  if (param_3 == '\0') {
    local_38 = 0.0;
    local_30 = _DAT_005b9004 / (float)*(int *)(param_1 + 0x20);
  }
  else {
    local_30 = _DAT_005b9004 / (float)*(int *)(param_1 + 0x18);
    local_38 = (float)*(int *)(param_1 + 0x1c) * local_30;
  }
  local_14 = (void *)0x0;
  fVar1 = (_DAT_005b9004 + _DAT_005b9004) / (float)*(int *)(param_1 + 0x14);
  local_10 = 0;
  local_c = 0;
  FUN_0045d0d0((*(int *)(param_1 + 0x20) + 1) * *(int *)(param_1 + 0x14));
  local_28 = 0;
  iVar3 = local_10;
  pvVar4 = local_14;
  if (-1 < *(int *)(param_1 + 0x20)) {
    do {
      local_34 = 0.0;
      local_2c = 0;
      fVar2 = local_38 / _DAT_005b9004;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          local_1c = fVar2;
          local_20 = local_34 / (_DAT_005b9004 + _DAT_005b9004);
          if ((pvVar4 == (void *)0x0) ||
             ((uint)(local_c - (int)pvVar4 >> 3) <= (uint)(iVar3 - (int)pvVar4 >> 3))) {
            FUN_0048f470(iVar3,1,&local_20);
            pvVar4 = local_14;
          }
          else {
            FUN_0041fe60(iVar3,1,&local_20,local_18,fVar1);
            local_10 = iVar3 + 8;
          }
          local_34 = local_34 + fVar1;
          local_2c = local_2c + 1;
          iVar3 = local_10;
          fVar2 = local_1c;
        } while (local_2c < *(int *)(param_1 + 0x14));
      }
      local_38 = local_38 + local_30;
      local_28 = local_28 + 1;
    } while (local_28 <= *(int *)(param_1 + 0x20));
  }
  FUN_0052ca60(local_18);
  if (pvVar4 == (void *)0x0) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar4);
}




/* Function: FUN_0052d440 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0052d440(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float *param_5,
            int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  float *pfVar10;
  float10 fVar11;
  float10 fVar12;
  
  FUN_0041cae0();
  iVar5 = FUN_0042dbb0();
  if (iVar5 != 0) {
    bVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)(param_1 + 0x14));
    if (!bVar4) {
      pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(param_1 + 0x14));
      FUN_00412e58(iVar5,pcVar6);
      uVar7 = FUN_0044ab40(param_4);
      FUN_00412cfc(iVar5,(double)uVar7);
      FUN_00412cfc(iVar5,(double)*(float *)(param_1 + 4));
      FUN_00412cfc(iVar5,(double)*(float *)(param_1 + 8));
      FUN_00412cfc(iVar5,(double)*(float *)(param_1 + 0xc));
      FUN_00412cfc(iVar5,(double)*(int *)(param_1 + 0x10));
      iVar8 = FUN_00412798(iVar5,5,4);
      if (iVar8 == 0) {
        fVar11 = (float10)FUN_00412c00(iVar5,0xfffffffc);
        *(float *)(param_1 + 4) = (float)fVar11;
        fVar11 = (float10)FUN_00412c00(iVar5,0xfffffffd);
        *(float *)(param_1 + 8) = (float)fVar11;
        fVar11 = (float10)FUN_00412c00(iVar5,0xfffffffe);
        *(float *)(param_1 + 0xc) = (float)fVar11;
        FUN_00412c00(iVar5,0xffffffff);
        uVar9 = FUN_004cf110();
        *(undefined4 *)(param_1 + 0x10) = uVar9;
        FUN_00412950(iVar5,0xfffffffb);
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    iVar5 = FUN_0043f940();
    iVar8 = FUN_0043f930();
    fVar1 = *(float *)(iVar5 + 8);
    fVar2 = *(float *)(iVar8 + 8);
    iVar5 = FUN_0043f930();
    fVar3 = *(float *)(iVar5 + 8);
    if (0 < param_6) {
      fVar11 = (float10)_DAT_00583354;
      do {
        param_6 = param_6 + -1;
        fVar12 = (float10)fsin(((float10)param_5[2] / (float10)*(float *)(param_1 + 8)) *
                               (float10)_DAT_00588d6c + (float10)*(float *)(param_1 + 0xc));
        *param_5 = (float)(((float10)_DAT_00583354 -
                           ((float10)param_5[2] - (float10)fVar3) *
                           (fVar11 / (float10)(fVar1 - fVar2))) * fVar12 *
                           (float10)*(float *)(param_1 + 4) + (float10)*param_5);
        param_5 = param_5 + 4;
      } while (param_6 != 0);
      return;
    }
  }
  else if (iVar5 == 1) {
    iVar5 = FUN_0043f940();
    iVar8 = FUN_0043f930();
    fVar1 = *(float *)(iVar5 + 4);
    fVar2 = *(float *)(iVar8 + 4);
    iVar5 = FUN_0043f930();
    fVar3 = *(float *)(iVar5 + 4);
    if (0 < param_6) {
      fVar11 = (float10)_DAT_00583354;
      do {
        param_6 = param_6 + -1;
        fVar12 = (float10)fsin(((float10)param_5[1] / (float10)*(float *)(param_1 + 8)) *
                               (float10)_DAT_00588d6c + (float10)*(float *)(param_1 + 0xc));
        *param_5 = (float)(((float10)param_5[1] - (float10)fVar3) *
                           (fVar11 / (float10)(fVar1 - fVar2)) * fVar12 *
                           (float10)*(float *)(param_1 + 4) + (float10)*param_5);
        param_5 = param_5 + 4;
      } while (param_6 != 0);
      return;
    }
  }
  else if (iVar5 == 2) {
    iVar5 = FUN_0043f940();
    iVar8 = FUN_0043f930();
    fVar1 = *(float *)(iVar5 + 8);
    fVar2 = *(float *)(iVar8 + 8);
    iVar5 = FUN_0043f930();
    fVar3 = *(float *)(iVar5 + 8);
    if (0 < param_6) {
      pfVar10 = param_5 + 1;
      do {
        param_6 = param_6 + -1;
        fVar11 = (float10)fsin(((float10)pfVar10[1] / (float10)*(float *)(param_1 + 8)) *
                               (float10)_DAT_00588d6c + (float10)*(float *)(param_1 + 0xc));
        *pfVar10 = (float)(((float10)_DAT_00582af0 -
                           (((float10)pfVar10[1] - (float10)fVar3) * (float10)_DAT_00588818) /
                           (float10)(fVar1 - fVar2)) * fVar11 * (float10)*(float *)(param_1 + 4) +
                          (float10)*pfVar10);
        pfVar10 = pfVar10 + 4;
      } while (param_6 != 0);
    }
  }
  return;
}




/* Function: FUN_0052d950 */

void __thiscall FUN_0052d950(undefined4 *param_1,DWORD param_2,undefined4 param_3)

{
  tMIXERCONTROLDETAILS local_18;
  
  local_18.paDetails = &param_3;
  local_18.dwControlID = param_2;
  local_18.cbStruct = 0x18;
  local_18.u.hwndOwner = (HWND)0x0;
  local_18.cChannels = 1;
  local_18.cbDetails = 4;
  mixerSetControlDetails((HMIXEROBJ)*param_1,&local_18,0);
  return;
}




/* Function: FUN_0052d9b0 */

void FUN_0052d9b0(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057fa12;
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




/* Function: FUN_0052da30 */

void __fastcall FUN_0052da30(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0;
      (*(int *)(param_1 + 0x1c) != 0 &&
      (uVar1 < (uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2))); uVar1 = uVar1 + 1
      ) {
    FUN_0052d950(*(undefined4 *)(*(int *)(param_1 + 0x1c) + uVar1 * 4),
                 *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar1 * 4));
  }
  return;
}




/* Function: FUN_0052da70 */

void __fastcall FUN_0052da70(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  for (uVar2 = 0;
      (*(int *)(param_1 + 0x1c) != 0 &&
      (uVar2 < (uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2))); uVar2 = uVar2 + 1
      ) {
    uVar1 = FUN_004cf110();
    FUN_0052d950(*(undefined4 *)(*(int *)(param_1 + 0x1c) + uVar2 * 4),uVar1);
  }
  return;
}




/* Function: FUN_0052dad0 */

void __thiscall FUN_0052dad0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != *(int *)(param_1 + 0x18)) {
    do {
      FUN_0052da70(param_2);
      iVar1 = iVar1 + 4;
    } while (iVar1 != *(int *)(param_1 + 0x18));
  }
  return;
}




/* Function: FUN_0052db00 */

void __thiscall FUN_0052db00(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    do {
      FUN_0052da70(param_2);
      iVar1 = iVar1 + 4;
    } while (iVar1 != *(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_0052db30 */

void __thiscall FUN_0052db30(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057fa20;
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
      FUN_0052d9b0();
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




/* Function: FUN_0052ddd0 */

void __thiscall FUN_0052ddd0(int param_1,undefined4 param_2)

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
  FUN_0052db30(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_0052de40 */

void __fastcall FUN_0052de40(undefined4 *param_1)

{
  LPMIXERCONTROLA hMem;
  uint uVar1;
  DWORD *pDVar2;
  undefined1 local_e0 [4];
  LPMIXERCONTROLA local_dc;
  tagMIXERLINECONTROLSA local_d8;
  tMIXERCONTROLDETAILS local_c0;
  tagMIXERLINEA local_a8;
  
  local_a8.dwLineID = param_1[1];
  local_a8.cbStruct = 0xa8;
  mixerGetLineInfoA((HMIXEROBJ)*param_1,&local_a8,2);
  if ((local_a8.cControls != 0) &&
     (hMem = LocalAlloc(0x40,local_a8.cControls * 0x94), hMem != (LPMIXERCONTROLA)0x0)) {
    local_d8.dwLineID = param_1[1];
    local_d8.cbStruct = 0x18;
    local_d8.cControls = local_a8.cControls;
    local_d8.cbmxctrl = 0x94;
    local_dc = hMem;
    local_d8.pamxctrl = hMem;
    mixerGetLineControlsA((HMIXEROBJ)*param_1,&local_d8,0);
    uVar1 = 0;
    if (local_d8.cControls != 0) {
      pDVar2 = &hMem->dwControlID;
      do {
        if (pDVar2[1] == 0x50030001) {
          FUN_0043b9c0(pDVar2);
          local_c0.dwControlID = *pDVar2;
          local_c0.paDetails = local_e0;
          local_c0.cbStruct = 0x18;
          local_c0.u.hwndOwner = (HWND)0x0;
          local_c0.cChannels = 1;
          local_c0.cbDetails = 4;
          mixerGetControlDetailsA((HMIXEROBJ)*param_1,&local_c0,0);
          FUN_0043b9c0(local_e0);
        }
        uVar1 = uVar1 + 1;
        pDVar2 = pDVar2 + 0x25;
        hMem = local_dc;
      } while (uVar1 < local_d8.cControls);
    }
    LocalFree(hMem);
  }
  return;
}




/* Function: FUN_0052df60 */

void __fastcall FUN_0052df60(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  if (puVar2 != *(undefined4 **)(param_1 + 0x18)) {
    do {
      pvVar1 = (void *)*puVar2;
      if (pvVar1 != (void *)0x0) {
        FUN_0052da30();
        if (*(void **)((int)pvVar1 + 0x1c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(*(void **)((int)pvVar1 + 0x1c));
        }
        *(undefined4 *)((int)pvVar1 + 0x1c) = 0;
        *(undefined4 *)((int)pvVar1 + 0x20) = 0;
        *(undefined4 *)((int)pvVar1 + 0x24) = 0;
        if (*(void **)((int)pvVar1 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(*(void **)((int)pvVar1 + 0xc));
        }
        *(undefined4 *)((int)pvVar1 + 0xc) = 0;
        *(undefined4 *)((int)pvVar1 + 0x10) = 0;
        *(undefined4 *)((int)pvVar1 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(param_1 + 0x18));
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != *(undefined4 **)(param_1 + 8)) {
    do {
      pvVar1 = (void *)*puVar2;
      if (pvVar1 != (void *)0x0) {
        FUN_0052da30();
        if (*(void **)((int)pvVar1 + 0x1c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(*(void **)((int)pvVar1 + 0x1c));
        }
        *(undefined4 *)((int)pvVar1 + 0x1c) = 0;
        *(undefined4 *)((int)pvVar1 + 0x20) = 0;
        *(undefined4 *)((int)pvVar1 + 0x24) = 0;
        if (*(void **)((int)pvVar1 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(*(void **)((int)pvVar1 + 0xc));
        }
        *(undefined4 *)((int)pvVar1 + 0xc) = 0;
        *(undefined4 *)((int)pvVar1 + 0x10) = 0;
        *(undefined4 *)((int)pvVar1 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(param_1 + 8));
  }
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}




/* Function: FUN_0052e060 */

undefined4 * __thiscall FUN_0052e060(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057fa46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[1] = param_3;
  local_4 = 1;
  *param_1 = param_2;
  FUN_0052de40();
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0052e0d0 */

void FUN_0052e0d0(undefined4 param_1,int param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057fa66;
  local_c = ExceptionList;
  if (*(int *)(param_2 + 0x10) < 0) {
    if (*(int *)(param_2 + 0x18) != 0x1005) {
      return;
    }
    ExceptionList = &local_c;
    param_2 = FUN_00493c27(0x28);
    local_4 = 1;
    if (param_2 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = FUN_0052e060(param_1,*(undefined4 *)(iVar1 + 0xc));
    }
  }
  else {
    if (*(int *)(param_2 + 0x18) != 4) {
      return;
    }
    ExceptionList = &local_c;
    param_2 = FUN_00493c27(0x28);
    local_4 = 0;
    if (param_2 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = FUN_0052e060(param_1,*(undefined4 *)(iVar1 + 0xc));
    }
  }
  local_4 = 0xffffffff;
  FUN_0052ddd0(&param_1);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_0052e1a0 */

void FUN_0052e1a0(void)

{
  DWORD DVar1;
  UINT UVar2;
  HMIXEROBJ pHVar3;
  uint uVar4;
  uint uVar5;
  HMIXEROBJ hmxobj;
  tagMIXERCAPSA local_d8;
  tagMIXERLINEA local_a8;
  
  hmxobj = (HMIXEROBJ)0x0;
  UVar2 = mixerGetNumDevs();
  if (UVar2 != 0) {
    do {
      mixerGetDevCapsA((UINT_PTR)hmxobj,&local_d8,0x30);
      uVar4 = 0;
      if (local_d8.cDestinations != 0) {
        do {
          local_a8.cbStruct = 0xa8;
          local_a8.dwDestination = uVar4;
          mixerGetLineInfoA(hmxobj,&local_a8,0);
          FUN_0052e0d0(hmxobj,&local_a8);
          DVar1 = local_a8.cConnections;
          uVar5 = 0;
          if (local_a8.cConnections != 0) {
            do {
              local_a8.cbStruct = 0xa8;
              local_a8.dwDestination = uVar4;
              local_a8.dwSource = uVar5;
              mixerGetLineInfoA(hmxobj,&local_a8,1);
              FUN_0052e0d0(hmxobj,&local_a8);
              uVar5 = uVar5 + 1;
            } while (uVar5 < DVar1);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_d8.cDestinations);
      }
      hmxobj = (HMIXEROBJ)((int)&hmxobj->unused + 1);
      pHVar3 = (HMIXEROBJ)mixerGetNumDevs();
    } while (hmxobj < pHVar3);
  }
  return;
}




/* Function: FUN_0052e260 */

int __fastcall FUN_0052e260(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057fa83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_4 = 1;
  FUN_0052e1a0();
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0052e2c0 */

void FUN_0052e2c0(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057faa2;
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




/* Function: FUN_0052e340 */

void FUN_0052e340(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 7;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 7; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}




/* Function: FUN_0052e370 */

void FUN_0052e370(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    param_3 = param_3 + -7;
    param_4 = param_4 + -7;
    puVar2 = param_3;
    puVar3 = param_4;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  } while (param_3 != param_2);
  *param_1 = param_4;
  return;
}




/* Function: FUN_0052e3b0 */

undefined4 FUN_0052e3b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0052e370(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_0052e3f0 */

void FUN_0052e3f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_1c [7];
  
  uVar4 = 2;
  puVar1 = param_1;
  do {
    puVar1 = puVar1 + 7;
    if (puVar1 == param_2) {
      return;
    }
    uVar5 = 0x7fff;
    uVar2 = rand();
    uVar2 = uVar2 & 0x7fff;
    if (0x7fff < uVar4) {
      do {
        if (uVar5 == 0xffffffff) break;
        uVar5 = uVar5 << 0xf | 0x7fff;
        uVar2 = uVar2 << 0xf | 0x7fff;
      } while (uVar5 < uVar4);
    }
    uVar2 = uVar2 % uVar4;
    uVar4 = uVar4 + 1;
    puVar6 = puVar1;
    puVar7 = local_1c;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar6 = param_1 + uVar2 * 7;
    puVar7 = puVar1;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar6 = local_1c;
    puVar7 = param_1 + uVar2 * 7;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  } while( true );
}




/* Function: FUN_0052e490 */

void FUN_0052e490(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 7;
  }
  return;
}




/* Function: FUN_0052e4c0 */

void FUN_0052e4c0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = param_3;
      puVar3 = param_1;
      for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = param_1 + 7;
  }
  return;
}




/* Function: FUN_0052e4f0 */

void __thiscall
FUN_0052e4f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0052e490(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_0052e520 */

int __thiscall FUN_0052e520(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_0052e4c0(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0x1c;
}




/* Function: FUN_0052e550 */

void __thiscall
FUN_0052e550(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 **param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 local_30 [7];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057fab0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  puVar4 = param_4;
  puVar5 = local_30;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (param_1[3] - iVar2) / 0x1c;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(param_1[2] - param_1[1]) / 0x1c;
    }
    if (0x9249249U - iVar2 < param_3) {
      ExceptionList = &local_10;
      FUN_0052e2c0();
      ExceptionList = local_10;
      return;
    }
    if (param_1[1] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(param_1[2] - param_1[1]) / 0x1c;
    }
    if (uVar3 < iVar2 + param_3) {
      if (0x9249249 - (uVar3 >> 1) < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      if (param_1[1] == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (int)(param_1[2] - param_1[1]) / 0x1c;
      }
      ExceptionList = &local_10;
      if (uVar3 < iVar2 + param_3) {
        ExceptionList = &local_10;
        iVar2 = FUN_004e1e80();
        uVar3 = iVar2 + param_3;
      }
      local_44 = (undefined4 *)0x52e686;
      param_4 = (undefined4 **)FUN_00493c27();
      local_8 = 0;
      local_48 = param_4;
      local_44 = param_1;
      iVar2 = FUN_0052e490(param_1[1],param_2);
      local_48 = local_30;
      local_44 = param_1;
      FUN_0052e4c0(iVar2,param_3);
      local_48 = (undefined4 *)(iVar2 + param_3 * 0x1c);
      local_44 = param_1;
      FUN_0052e490(param_2,param_1[2]);
      if (param_1[1] == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (int)(param_1[2] - param_1[1]) / 0x1c;
      }
      if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        local_44 = (undefined4 *)&UNK_0052e726;
        operator_delete((void *)param_1[1]);
      }
      param_1[3] = param_4 + uVar3 * 7;
      param_1[1] = param_4;
      param_1[2] = param_4 + (param_3 + iVar2) * 7;
      ExceptionList = local_10;
      return;
    }
    param_4 = (undefined4 **)param_1[2];
    local_44 = param_4;
    if ((uint)(((int)param_4 - (int)param_2) / 0x1c) < param_3) {
      local_48 = param_2;
      ExceptionList = &local_10;
      param_4 = &local_48;
      FUN_0052e4f0();
      local_8 = 2;
      local_48 = (undefined4 *)param_1[2];
      local_44 = (undefined4 *)(param_3 - (param_1[2] - (int)param_2) / 0x1c);
      FUN_0052e520();
      iVar2 = param_1[2] + param_3 * 0x1c;
      param_1[2] = iVar2;
      local_44 = (undefined4 *)(iVar2 + param_3 * -0x1c);
    }
    else {
      puVar4 = param_4 + param_3 * -7;
      ExceptionList = &local_10;
      local_48 = puVar4;
      uVar1 = FUN_0052e4f0();
      param_1[2] = uVar1;
      param_4 = &local_48;
      local_48 = param_2;
      local_44 = puVar4;
      FUN_0052e3b0(&param_4);
      param_4 = &local_44;
      local_44 = param_2 + param_3 * 7;
    }
    local_48 = param_2;
    FUN_0052e340();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_0052e8a0 */

void __thiscall FUN_0052e8a0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x1c != 0) {
      iVar1 = (param_3 - iVar1) / 0x1c;
      goto LAB_0052e8eb;
    }
  }
  iVar1 = 0;
LAB_0052e8eb:
  FUN_0052e550(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x1c;
  return;
}




/* Function: FUN_0052e920 */

void __thiscall FUN_0052e920(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x1c) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x1c))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_0052e4c0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x1c;
    return;
  }
  FUN_0052e8a0(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_005306e0 */

void __fastcall FUN_005306e0(int param_1)

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
    FUN_00453870();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00530730 */

undefined4 * __fastcall FUN_00530730(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057fb26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00592540;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x21] = 0;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_005307a0 */

void __fastcall FUN_005307a0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057fb46;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00592540;
  local_4 = 1;
  FUN_005306e0();
  if ((void *)param_1[0x23] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x23]);
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
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




/* Function: FUN_00530840 */

void * __thiscall FUN_00530840(void *param_1,byte param_2)

{
  FUN_005307a0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00530860 */

void __fastcall FUN_00530860(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  return;
}




/* Function: FUN_00530870 */

undefined4 __thiscall FUN_00530870(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char *_Str1;
  int iVar3;
  undefined4 *puVar4;
  char *_Str2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057fb59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"name");
  pcVar2 = param_2;
  puVar4 = *(undefined4 **)(param_1 + 8);
  local_4 = 0;
  if (puVar4 != *(undefined4 **)(param_1 + 0xc)) {
    do {
      if ((*(int *)*puVar4 != 0) &&
         (FUN_00420ca0(&param_2,local_28), param_2 != *(char **)(*(int *)*puVar4 + 8))) {
        _Str2 = pcVar2;
        _Str1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(param_2 + 0x24));
        iVar3 = _stricmp(_Str1,_Str2);
        if (iVar3 == 0) {
          uVar1 = *puVar4;
          local_4 = 0xffffffff;
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
          ExceptionList = local_c;
          return uVar1;
        }
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined4 **)(param_1 + 0xc));
  }
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_00530940 */

undefined4 __thiscall FUN_00530940(int param_1,char *param_2,undefined1 *param_3)

{
  void *pvVar1;
  int iVar2;
  char *_Str1;
  int iVar3;
  int *piVar4;
  char *_Str2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057fb59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"name");
  iVar2 = (int)param_3;
  piVar4 = *(int **)(param_1 + 8);
  local_4 = 0;
  if (piVar4 != *(int **)(param_1 + 0xc)) {
    do {
      if ((*(int *)*piVar4 != 0) &&
         (FUN_00420ca0(&param_3), param_3 != (undefined1 *)*(int *)(*(int *)*piVar4 + 8))) {
        _Str2 = param_2;
        _Str1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)((int)param_3 + 0x24));
        iVar3 = _stricmp(_Str1,_Str2);
        if ((iVar3 == 0) &&
           (*(int *)(*piVar4 + 4) = *(int *)(*piVar4 + 4) - iVar2, *(int *)(*piVar4 + 4) < 1)) {
          pvVar1 = (void *)*piVar4;
          if (pvVar1 == (void *)0x0) {
            param_3 = &stack0xffffffc4;
            FUN_00532a90(&param_3);
            local_4 = 0xffffffff;
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
            ExceptionList = local_c;
            return 1;
          }
          FUN_0040cf00();
                    /* WARNING: Subroutine does not return */
          operator_delete(pvVar1);
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int **)(param_1 + 0xc));
  }
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_00530a50 */

/* WARNING: Removing unreachable block (ram,0x00530b35) */

void __fastcall FUN_00530a50(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057fb7b;
  local_c = ExceptionList;
  piVar2 = *(int **)(param_1 + 8);
  local_4 = 0;
  if (piVar2 != *(int **)(param_1 + 0xc)) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        if (*(void **)(iVar1 + 0x1c) != (void *)0x0) {
          ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
          operator_delete(*(void **)(iVar1 + 0x1c));
        }
        ExceptionList = &local_c;
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        *(undefined4 *)(iVar1 + 0x20) = 0;
        *(undefined4 *)(iVar1 + 0x24) = 0;
        FUN_004073f0(*(undefined4 *)(iVar1 + 0x10));
        if (*(undefined4 **)(iVar1 + 0x10) == (undefined4 *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = **(undefined4 **)(iVar1 + 0x10);
        }
        FUN_004073f0(uVar3);
        FUN_0040a340(local_10,local_18,local_1c);
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)(iVar1 + 0x10));
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 0xc));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}




/* Function: FUN_00530b60 */

void FUN_00530b60(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057fba2;
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




/* Function: FUN_00530be0 */

void __thiscall
FUN_00530be0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00512430(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00530c10 */

void __thiscall FUN_00530c10(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057fbb0;
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
      FUN_00530b60();
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




/* Function: FUN_00530ec0 */

void __thiscall FUN_00530ec0(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x140;
  }
  FUN_0041e5b0(param_1);
  FUN_00409a60(param_1);
  FUN_004596b0(param_2);
  return;
}




/* Function: FUN_00530f00 */

void __thiscall FUN_00530f00(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  FUN_0041cf50();
  cVar1 = FUN_0040e910(0x87e);
  if (cVar1 != '\0') {
    if (param_1[0x5d] != 0) {
      (**(code **)(*param_1 + 0x20))(param_2);
      (**(code **)(*(int *)param_1[0x5d] + 0x28))(param_2);
    }
    FUN_0040e950(0xffffffff);
  }
  FUN_0045d010(param_2);
  return;
}




/* Function: FUN_00530f60 */

void FUN_00530f60(char *param_1,void *param_2)

{
  FILE *_File;
  
  _File = fopen(param_1,"rb");
  fread(param_2,1,0x14,_File);
  fclose(_File);
  return;
}




/* Function: FUN_00530fa0 */

undefined4 * FUN_00530fa0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char local_11c [19];
  char cStack_109;
  char local_108 [4];
  char local_104 [4];
  char local_100 [252];
  
  pcVar2 = local_108;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  local_108 = (char  [4])s_editormaps__005925c4._0_4_;
  local_100._0_4_ = s_editormaps__005925c4._8_4_;
  local_104 = (char  [4])s_editormaps__005925c4._4_4_;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar7 = &cStack_109;
  do {
    pcVar6 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = param_1;
  for (uVar5 = (uint)((int)pcVar2 - (int)param_1) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = (int)pcVar2 - (int)param_1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_00530f60(local_108,local_11c);
  puVar3 = (undefined4 *)FUN_00493c27(0x114);
  puVar8 = puVar3;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar3[0x40] = 0;
  puVar3[0x41] = 0;
  puVar3[0x42] = 0;
  puVar3[0x43] = 0;
  puVar3[0x44] = 0;
  pcVar2 = local_108;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)puVar3 - (int)local_108] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = local_11c;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(puVar3 + 0x40) - (int)local_11c] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return puVar3;
}




/* Function: FUN_00531080 */

void __thiscall FUN_00531080(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  FUN_0041cf50();
  cVar1 = FUN_0040e910(0x87e);
  if (cVar1 != '\0') {
    if (param_1[0x67] != 0) {
      (**(code **)(*param_1 + 0x20))(param_2);
      (**(code **)(*(int *)param_1[0x67] + 0x28))(param_2);
    }
    FUN_0040e950(0xffffffff);
  }
  FUN_0045d010(param_2);
  return;
}




/* Function: FUN_005310e0 */

void __thiscall FUN_005310e0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x290) = param_2;
  return;
}




/* Function: FUN_00531160 */

undefined4 * __fastcall FUN_00531160(undefined4 *param_1)

{
  FUN_005057c0();
  *param_1 = &PTR_LAB_005925d0;
  return param_1;
}




/* Function: FUN_00531180 */

void __thiscall FUN_00531180(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x140;
  }
  FUN_0041e5b0(param_1);
  FUN_00409a00(param_1);
  FUN_004596f0(param_2);
  return;
}




/* Function: FUN_005311c0 */

void __fastcall FUN_005311c0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057fbc9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x68),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000004);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000004);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00531210 */

void __fastcall FUN_00531210(int *param_1)

{
  undefined4 uStack_30;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_30 = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  FUN_004ffa80();
  uStack_30 = 0;
  FUN_00501a80();
  uStack_30 = 0;
  (**(code **)(*param_1 + 8))();
  (**(code **)(*param_1 + 4))(0);
  FUN_004ffb80(0);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0x3f800000;
  uStack_30 = 0x3f800000;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  FUN_00501ee0(&uStack_24,&uStack_30,&uStack_18);
  return;
}




/* Function: FUN_00531370 */

void __thiscall FUN_00531370(int param_1,int param_2)

{
  int iVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_24 [20];
  undefined4 uStack_10;
  
  uStack_10 = 0x53137f;
  iVar1 = isalnum(param_2);
  if ((iVar1 != 0) && (*(uint *)(param_1 + 0x4c) < 0x14)) {
    uStack_10 = 0x531393;
    iVar1 = toupper(param_2);
    uStack_10 = 0x5313aa;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_1 + 0x38),(char)iVar1);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_24,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_1 + 0x38));
    FUN_005311c0();
  }
  return;
}




/* Function: FUN_005313d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __thiscall FUN_005313d0(int param_1,float *param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float *pfVar2;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_14 = *(float *)(param_1 + 0x1e8) + _DAT_0058ab44;
  local_18 = *(undefined4 *)(param_1 + 0x1e4);
  local_10 = *(undefined4 *)(param_1 + 0x1ec);
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0.0;
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  pfVar2 = (float *)FUN_0041d580(local_c,param_2,&local_18);
  if (pfVar2 != &local_24) {
    local_24 = *pfVar2;
    local_20 = pfVar2[1];
    local_1c = pfVar2[2];
  }
  pfVar2 = (float *)FUN_0041d580(local_c,param_2,param_3);
  if (pfVar2 != &local_30) {
    local_30 = *pfVar2;
    local_2c = pfVar2[1];
    local_28 = pfVar2[2];
  }
  fVar1 = (local_24 * *(float *)(param_1 + 0x260) +
          local_20 * *(float *)(param_1 + 0x264) + local_1c * *(float *)(param_1 + 0x268)) /
          (local_30 * *(float *)(param_1 + 0x260) +
          local_2c * *(float *)(param_1 + 0x264) + local_28 * *(float *)(param_1 + 0x268));
  if (_DAT_00582ad8 < fVar1 != (_DAT_00582ad8 == fVar1)) {
    if (fVar1 < _DAT_00583354 != (fVar1 == _DAT_00583354)) {
      *param_4 = *param_2 - local_30 * fVar1;
      param_4[1] = param_2[1] - local_2c * fVar1;
      param_4[2] = param_2[2] - local_28 * fVar1;
      return 1;
    }
  }
  return 0;
}




/* Function: FUN_00531550 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00531550(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 auStack_4c [60];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057ffd8;
  pvStack_c = ExceptionList;
  fVar1 = _DAT_005b9004 * _DAT_00583340 + *(float *)(param_1 + 0x1dc);
  ExceptionList = &pvStack_c;
  *(float *)(param_1 + 0x1dc) = fVar1;
  if (_DAT_005b9004 + _DAT_005b9004 <= fVar1) {
    *(float *)(param_1 + 0x1dc) = fVar1 - (_DAT_005b9004 + _DAT_005b9004);
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 0x218) + 0x88))();
  FUN_00407260(uVar2);
  uStack_4 = 0;
  FUN_005475f4(_DAT_005b9004 * _DAT_00583340);
  (**(code **)(**(int **)(param_1 + 0x218) + 0x8c))(auStack_4c);
  puStack_8 = (undefined1 *)0xffffffff;
  _eh_vector_destructor_iterator_(&stack0xffffffb0,0x10,4,FUN_00407150);
  ExceptionList = pvStack_10;
  return;
}




/* Function: FUN_00531630 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00531630(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  ushort uVar4;
  
  fVar2 = *(float *)(param_1 + 0x1e4) - _DAT_0058abb4;
  fVar1 = *param_2;
  uVar3 = (uint)(ushort)((ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                        (ushort)(fVar2 == fVar1) << 0xe);
  if ((fVar2 < fVar1) &&
     (fVar2 = (float)*(int *)(param_1 + 0x240) * *(float *)(param_1 + 0x1f0) +
              *(float *)(param_1 + 0x1e4) + _DAT_0058abb4, fVar1 = *param_2,
     uVar3 = (uint)(ushort)((ushort)(fVar2 < fVar1) << 8 | (ushort)(fVar2 == fVar1) << 0xe),
     fVar2 >= fVar1 && (fVar2 == fVar1) == 0)) {
    fVar2 = *(float *)(param_1 + 0x1ec) - _DAT_0058abb4;
    fVar1 = param_2[2];
    uVar3 = (uint)(ushort)((ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                          (ushort)(fVar2 == fVar1) << 0xe);
    if ((fVar2 < fVar1) &&
       (fVar2 = (float)*(int *)(param_1 + 0x244) * *(float *)(param_1 + 0x1f0) +
                *(float *)(param_1 + 0x1ec) + _DAT_0058abb4, fVar1 = param_2[2],
       uVar4 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(fVar2 == fVar1) << 0xe, uVar3 = (uint)uVar4,
       fVar2 >= fVar1 && (fVar2 == fVar1) == 0)) {
      return CONCAT31((uint3)(byte)(uVar4 >> 8),1);
    }
  }
  return uVar3;
}




/* Function: FUN_005316b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005316b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  SHORT SVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18 [3];
  undefined1 local_c [12];
  
  SVar5 = GetKeyState(0x25);
  if (SVar5 < 0) {
    local_30 = *(undefined4 *)(param_1 + 0x254);
    local_28 = *(undefined4 *)(param_1 + 0x25c);
    local_24 = *(undefined4 *)(param_1 + 0x248);
    local_1c = *(undefined4 *)(param_1 + 0x250);
    local_2c = 0;
    local_20 = 0;
    pfVar6 = (float *)FUN_0041d580(local_18,&local_30,&local_24);
    fVar1 = pfVar6[2];
    fVar2 = pfVar6[1];
    fVar3 = *pfVar6;
    pfVar6 = local_18;
    FUN_0041d580(local_c,&local_30,&local_24,pfVar6);
    FUN_0041d510(pfVar6);
    fVar9 = (float10)_CIacos();
    if (local_18[0] < _DAT_00582ad8) {
      fVar9 = ((float10)_DAT_005b9004 + (float10)_DAT_005b9004) - fVar9;
    }
    fVar9 = fVar9 - (float10)_DAT_005b9004 * (float10)_DAT_00592668;
    if (fVar9 < (float10)_DAT_00582ad8) {
      fVar9 = (float10)_DAT_005b9004 + (float10)_DAT_005b9004 + fVar9;
    }
    fVar10 = (float10)fsin(fVar9);
    local_18[1] = 0.0;
    local_18[0] = (float)fVar10;
    fVar9 = (float10)fcos(fVar9);
    local_18[2] = (float)fVar9;
    uVar7 = FUN_0041d5b0(local_c,local_18,SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3));
    puVar8 = (undefined4 *)FUN_0041d550(local_18,&local_24,uVar7);
    uVar7 = local_30;
    uVar4 = local_28;
    if (puVar8 != &local_30) {
      uVar7 = *puVar8;
      uVar4 = puVar8[2];
    }
    *(undefined4 *)(param_1 + 0x254) = uVar7;
    *(undefined4 *)(param_1 + 0x25c) = uVar4;
  }
  SVar5 = GetKeyState(0x27);
  if (SVar5 < 0) {
    local_30 = *(undefined4 *)(param_1 + 0x254);
    local_28 = *(undefined4 *)(param_1 + 0x25c);
    local_24 = *(undefined4 *)(param_1 + 0x248);
    local_1c = *(undefined4 *)(param_1 + 0x250);
    local_2c = 0;
    local_20 = 0;
    pfVar6 = (float *)FUN_0041d580(local_c,&local_30,&local_24);
    fVar1 = pfVar6[2];
    fVar2 = pfVar6[1];
    fVar3 = *pfVar6;
    pfVar6 = local_18;
    FUN_0041d580(local_c,&local_30,&local_24,pfVar6);
    FUN_0041d510(pfVar6);
    fVar9 = (float10)_CIacos();
    if (local_18[0] < _DAT_00582ad8) {
      fVar9 = ((float10)_DAT_005b9004 + (float10)_DAT_005b9004) - fVar9;
    }
    fVar9 = (float10)_DAT_005b9004 * (float10)_DAT_00592668 + fVar9;
    fVar10 = (float10)_DAT_005b9004 + (float10)_DAT_005b9004;
    if (fVar10 <= fVar9) {
      fVar9 = fVar9 - fVar10;
    }
    fVar10 = (float10)fsin(fVar9);
    local_18[1] = 0.0;
    local_18[0] = (float)fVar10;
    fVar9 = (float10)fcos(fVar9);
    local_18[2] = (float)fVar9;
    uVar7 = FUN_0041d5b0(local_c,local_18,SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3));
    puVar8 = (undefined4 *)FUN_0041d550(local_18,&local_24,uVar7);
    if (puVar8 != &local_30) {
      local_30 = *puVar8;
      local_28 = puVar8[2];
    }
    *(undefined4 *)(param_1 + 0x254) = local_30;
    *(undefined4 *)(param_1 + 0x25c) = local_28;
  }
  return;
}




/* Function: FUN_00531980 */

uint __thiscall FUN_00531980(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = (int *)(param_1 + 0x18c);
  do {
    iVar1 = *piVar3;
    if ((((*(int *)(iVar1 + 0x3c) <= param_2) &&
         (param_2 < *(int *)(iVar1 + 0x44) + *(int *)(iVar1 + 0x3c))) &&
        (*(int *)(iVar1 + 0x40) <= param_3)) &&
       (uVar2 = *(int *)(iVar1 + 0x48) + *(int *)(iVar1 + 0x40), param_3 < (int)uVar2))
    goto LAB_00531a9b;
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 10);
  iVar4 = *(int *)(param_1 + 0x180);
  if (((param_2 < *(int *)(iVar4 + 0x3c)) ||
      (*(int *)(iVar4 + 0x44) + *(int *)(iVar4 + 0x3c) <= param_2)) ||
     ((param_3 < *(int *)(iVar4 + 0x40) ||
      (uVar2 = *(int *)(iVar4 + 0x48) + *(int *)(iVar4 + 0x40), (int)uVar2 <= param_3)))) {
    iVar4 = *(int *)(param_1 + 0x184);
    if (((param_2 < *(int *)(iVar4 + 0x3c)) ||
        (*(int *)(iVar4 + 0x44) + *(int *)(iVar4 + 0x3c) <= param_2)) ||
       ((param_3 < *(int *)(iVar4 + 0x40) ||
        (uVar2 = *(int *)(iVar4 + 0x48) + *(int *)(iVar4 + 0x40), (int)uVar2 <= param_3)))) {
      iVar4 = *(int *)(param_1 + 0x17c);
      if ((((param_2 < *(int *)(iVar4 + 0x3c)) ||
           (*(int *)(iVar4 + 0x44) + *(int *)(iVar4 + 0x3c) <= param_2)) ||
          (param_3 < *(int *)(iVar4 + 0x40))) ||
         (uVar2 = *(int *)(iVar4 + 0x48) + *(int *)(iVar4 + 0x40), (int)uVar2 <= param_3)) {
        iVar4 = *(int *)(param_1 + 0x174);
        if (((param_2 < *(int *)(iVar4 + 0x3c)) ||
            (*(int *)(iVar4 + 0x44) + *(int *)(iVar4 + 0x3c) <= param_2)) ||
           ((param_3 < *(int *)(iVar4 + 0x40) ||
            (uVar2 = *(int *)(iVar4 + 0x48) + *(int *)(iVar4 + 0x40), (int)uVar2 <= param_3)))) {
          iVar4 = *(int *)(param_1 + 0x178);
          uVar2 = iVar4 + 0x3c;
          if (((param_2 < *(int *)(iVar4 + 0x3c)) ||
              (*(int *)(iVar4 + 0x44) + *(int *)(iVar4 + 0x3c) <= param_2)) ||
             ((param_3 < *(int *)(iVar4 + 0x40) ||
              (*(int *)(iVar4 + 0x48) + *(int *)(iVar4 + 0x40) <= param_3)))) {
            return uVar2 & 0xffffff00;
          }
        }
      }
    }
  }
LAB_00531a9b:
  return CONCAT31((int3)(uVar2 >> 8),1);
}




/* Function: FUN_00531ab0 */

int * FUN_00531ab0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  undefined4 uVar4;
  
  iVar1 = FUN_00493c27(0x294);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00531160();
  }
  uVar3 = FUN_004ffac0();
  FUN_004ffb10(uVar3);
  FUN_00531210();
  (**(code **)(*piVar2 + 8))(1);
  iVar1 = *piVar2;
  uVar3 = (**(code **)(*param_2 + 0x88))();
  (**(code **)(iVar1 + 0x8c))(uVar3);
  iVar1 = *piVar2;
  uVar3 = FUN_0041c940();
  (**(code **)(iVar1 + 0x1c))(unaff_EBX,uVar3);
  uVar3 = 1;
  FUN_004ffac0(1);
  FUN_0043fb40(uVar3);
  *(undefined1 *)((int)piVar2 + 0x275) = 1;
  iVar1 = FUN_004ffac0();
  *(undefined4 *)(iVar1 + 0x2cc) = 100;
  piVar2[0x7b] = 0x41200000;
  FUN_004ff6f0(1);
  uVar4 = 1;
  *(undefined1 *)(piVar2 + 0x9e) = 0;
  uVar3 = FUN_0041c940(1);
  FUN_00423250(piVar2,uVar3,uVar4);
  iVar1 = *piVar2;
  uVar3 = FUN_0041c930(unaff_EBX);
  (**(code **)(iVar1 + 0x14))(uVar3);
  return piVar2;
}




/* Function: FUN_00531b90 */

void FUN_00531b90(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = param_1[2];
  fVar3 = param_1[1];
  fVar1 = *param_1;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  if (*param_2 < fVar1) {
    *param_1 = *param_2;
    *param_2 = fVar1;
  }
  if (fVar4 < fVar3) {
    param_1[1] = fVar4;
    param_2[1] = fVar3;
  }
  if (fVar5 < fVar2) {
    param_1[2] = fVar5;
    param_2[2] = fVar2;
  }
  return;
}




/* Function: FUN_00531c20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00531c20(int param_1,int *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 uVar5;
  int iVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float local_10;
  undefined1 auStack_c [12];
  
  pfVar4 = param_5;
  pfVar3 = param_4;
  local_10 = param_4[2];
  FUN_004ffac0();
  uVar5 = FUN_0043f950();
  uVar5 = (**(code **)(*param_2 + 0x88))(uVar5);
  FUN_00548704(auStack_c,uVar5);
  if (local_10 < *(float *)(param_1 + 0x1ec)) {
    local_10 = *(float *)(param_1 + 0x1ec);
  }
  fVar2 = _DAT_00583354 / *(float *)(param_1 + 0x1f0);
  fVar1 = *(float *)(param_1 + 0x1ec);
  param_4 = (float *)FUN_004cf110();
  param_5 = (float *)FUN_004cf110();
  if ((float10)_DAT_00583340 < extraout_ST0 - (float10)(int)param_4) {
    param_4 = (float *)((int)param_4 + 1);
  }
  if (_DAT_00583340 < (local_10 - fVar1) * fVar2 - (float)(int)param_5) {
    param_5 = (float *)((int)param_5 + 1);
  }
  iVar6 = FUN_004cf110();
  if ((float10)_DAT_00588b48 < extraout_ST0_00 - (float10)iVar6) {
    iVar6 = iVar6 + 1;
  }
  if (*(int *)(param_1 + 0x240) <= iVar6) {
    param_4 = (float *)((int)param_4 + (*(int *)(param_1 + 0x240) - iVar6));
  }
  iVar6 = FUN_004cf110();
  if ((float10)_DAT_00588b48 < extraout_ST0_01 - (float10)iVar6) {
    iVar6 = iVar6 + 1;
  }
  if (*(int *)(param_1 + 0x244) <= iVar6) {
    param_5 = (float *)((int)param_5 + (*(int *)(param_1 + 0x244) - iVar6));
  }
  fVar1 = (((float)(int)param_4 * *(float *)(param_1 + 0x1f0) + *(float *)(param_1 + 0x1e4)) -
          *pfVar3) + _DAT_00590eb0;
  fVar2 = (((float)(int)param_5 * *(float *)(param_1 + 0x1f0) + *(float *)(param_1 + 0x1ec)) -
          pfVar3[2]) + _DAT_00590eb0;
  *pfVar3 = fVar1 + *pfVar3;
  pfVar3[2] = fVar2 + pfVar3[2];
  *param_3 = fVar1 + *param_3;
  param_3[2] = fVar2 + param_3[2];
  *pfVar4 = fVar1 + *pfVar4;
  pfVar4[2] = fVar2 + pfVar4[2];
  return;
}




/* Function: FUN_00531e20 */

void FUN_00531e20(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057fc12;
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




/* Function: FUN_00531ea0 */

float10 __thiscall FUN_00531ea0(int param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  float unaff_EBX;
  undefined4 *puVar5;
  float10 fVar6;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  if ((((*param_2 < *(float *)(param_1 + 0x1e4)) ||
       ((float)*(int *)(param_1 + 0x240) * *(float *)(param_1 + 0x1f0) + *(float *)(param_1 + 0x1e4)
        < *param_2)) || (param_2[2] < *(float *)(param_1 + 0x1ec))) ||
     ((float)*(int *)(param_1 + 0x244) * *(float *)(param_1 + 0x1f0) + *(float *)(param_1 + 0x1ec) <
      param_2[2])) {
    return (float10)*(float *)(param_1 + 0x1e8);
  }
  puVar5 = *(undefined4 **)(param_1 + 0x208);
  if (puVar5 != *(undefined4 **)(param_1 + 0x20c)) {
    do {
      piVar1 = (int *)*puVar5;
      FUN_004ffac0();
      pfVar3 = (float *)FUN_0043f930();
      local_24 = *pfVar3;
      local_20 = pfVar3[1];
      local_1c = pfVar3[2];
      FUN_004ffac0();
      pfVar3 = (float *)FUN_0043f940();
      local_30 = *pfVar3;
      local_2c = pfVar3[1];
      local_28 = pfVar3[2];
      uVar4 = (**(code **)(*piVar1 + 0x88))(&local_24);
      pfVar3 = (float *)FUN_00548704(auStack_18,uVar4);
      if (pfVar3 != &local_24) {
        local_24 = *pfVar3;
        local_20 = pfVar3[1];
        local_1c = pfVar3[2];
      }
      uVar4 = (**(code **)(*piVar1 + 0x88))(&local_30);
      pfVar3 = (float *)FUN_00548704(auStack_c,uVar4);
      if (pfVar3 != &local_30) {
        local_30 = *pfVar3;
        local_2c = pfVar3[1];
        local_28 = pfVar3[2];
      }
      FUN_00531b90(&local_24,&local_30);
      if (((local_24 < *param_2) && (*param_2 < local_30)) &&
         ((local_1c < param_2[2] && (param_2[2] < local_28)))) {
        iVar2 = **(int **)(param_1 + 0x1e0);
        uVar4 = FUN_004cf110();
        uVar4 = FUN_004cf110(uVar4);
        fVar6 = (float10)(**(code **)(iVar2 + 0x90))(uVar4);
        return ((float10)unaff_EBX - (float10)local_28) + fVar6;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(undefined4 **)(param_1 + 0x20c));
  }
  iVar2 = **(int **)(param_1 + 0x1e0);
  uVar4 = FUN_004cf110();
  uVar4 = FUN_004cf110(uVar4);
  fVar6 = (float10)(**(code **)(iVar2 + 0x90))(uVar4);
  return fVar6;
}




/* Function: FUN_005320f0 */

void FUN_005320f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined4 *puStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  undefined1 *puStack_a0;
  undefined4 *puStack_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84 [24];
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
  int *piStack_20;
  undefined1 **ppuStack_1c;
  
  local_8c = param_3;
  puStack_9c = (undefined4 *)0x1;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  local_30 = 0x3f800000;
  local_44 = 0x3f800000;
  local_58 = 0x3f800000;
  local_6c = 0x3f800000;
  local_90 = param_2;
  local_88 = 0;
  puStack_a0 = (undefined1 *)0x5321a6;
  uVar1 = FUN_0041e470();
  puStack_9c = (undefined4 *)0x3;
  puStack_a0 = (undefined1 *)0x5321b1;
  puStack_a4 = (undefined1 *)FUN_0041e470();
  puStack_9c = &local_6c;
  puStack_a8 = (undefined1 *)0x5321bf;
  puStack_a0 = (undefined1 *)uVar1;
  puStack_a8 = (undefined1 *)FUN_0041c920();
  puStack_ac = &local_90;
  puStack_b0 = local_84;
  puStack_b4 = (undefined1 *)0x5321cf;
  thunk_FUN_004959fb();
  puStack_b4 = (undefined1 *)0x1;
  puStack_a0 = (undefined1 *)0x3f800000;
  uStack_b8 = 0x5321e0;
  uVar1 = FUN_0041e470();
  puStack_b4 = (undefined1 *)0x3;
  uStack_b8 = 0x5321eb;
  uStack_bc = FUN_0041e470();
  puStack_b4 = local_84;
  iStack_c0 = 0x5321f9;
  uStack_b8 = uVar1;
  iStack_c0 = FUN_0041c920();
  thunk_FUN_004959fb(&local_90,&puStack_a8);
  FUN_0041d7e0();
  if (&iStack_c0 != piStack_20) {
    *piStack_20 = (int)puStack_b4;
    piStack_20[1] = (int)puStack_b0;
    piStack_20[2] = (int)puStack_ac;
  }
  if (&puStack_b4 != ppuStack_1c) {
    *ppuStack_1c = puStack_a8;
    ppuStack_1c[1] = puStack_a4;
    ppuStack_1c[2] = puStack_a0;
  }
  return;
}




/* Function: FUN_00532270 */

void __fastcall FUN_00532270(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057fc32;
  pvStack_c = ExceptionList;
  iVar2 = 0;
  piVar4 = (int *)(param_1 + 0x184);
  ExceptionList = &pvStack_c;
  for (uVar3 = *(uint *)(param_1 + 0x180);
      (iVar1 = *(int *)(param_1 + 0x174), iVar1 != 0 &&
      (uVar3 < (uint)(*(int *)(param_1 + 0x178) - iVar1 >> 2))); uVar3 = uVar3 + 1) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_44,(char *)(*(int *)(iVar1 + uVar3 * 4) + 0x100));
    local_4 = 0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (*piVar4 + 0x68),local_44);
    local_4 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
    (**(code **)(*(int *)*piVar4 + 0x24))();
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 1;
    if (iVar2 == 4) {
      ExceptionList = pvStack_c;
      return;
    }
  }
  if (iVar2 < 4) {
    piVar4 = (int *)(param_1 + 0x184 + iVar2 * 4);
    iVar2 = 4 - iVar2;
    do {
      (**(code **)(*(int *)*piVar4 + 0x1c))();
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_28,"");
      local_4 = 1;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (*piVar4 + 0x68),abStack_28);
      local_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_28);
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  ExceptionList = pvStack_c;
  return;
}




/* Function: FUN_00532380 */

undefined4 __fastcall FUN_00532380(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x234);
  if (iVar1 != -1) {
    return CONCAT31((int3)((uint)iVar1 >> 8),
                    *(int *)(*(int *)(*(int *)(param_1 + 0x1f8) + iVar1 * 4) + 0x90) != -1);
  }
  return 0xffffff00;
}




/* Function: FUN_005323b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005323b0(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00531ea0(param_1 + 0x248);
  if (*(float *)(param_1 + 0x24c) < (float)((float10)_DAT_00588860 + fVar2)) {
    fVar1 = (float)((float10)_DAT_00588860 + fVar2) - *(float *)(param_1 + 0x24c);
    *(float *)(param_1 + 0x24c) = fVar1 + *(float *)(param_1 + 0x24c);
    *(float *)(param_1 + 600) = fVar1 + *(float *)(param_1 + 600);
    return;
  }
  if (fVar2 + (float10)_DAT_00588d8c < (float10)*(float *)(param_1 + 0x24c)) {
    fVar2 = (float10)*(float *)(param_1 + 0x24c) - (fVar2 + (float10)_DAT_00588d8c);
    *(float *)(param_1 + 0x24c) = (float)((float10)*(float *)(param_1 + 0x24c) - fVar2);
    *(float *)(param_1 + 600) = (float)((float10)*(float *)(param_1 + 600) - fVar2);
  }
  return;
}




/* Function: FUN_00532440 */

undefined4 __thiscall
FUN_00532440(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  char cVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_24 = *param_3;
  local_20 = param_3[1];
  local_1c = param_3[2];
  local_18 = *param_4;
  local_14 = param_4[1];
  local_10 = param_4[2];
  local_4 = 0;
  FUN_005320f0(param_2,*(undefined4 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x23c),&local_24,
               &local_18);
  cVar1 = FUN_005313d0(&local_24,&local_18,&local_c);
  if (cVar1 != '\0') {
    if (&local_24 != param_3) {
      *param_3 = local_24;
      param_3[1] = local_20;
      param_3[2] = local_1c;
    }
    if (&local_18 != param_4) {
      *param_4 = local_18;
      param_4[1] = local_14;
      param_4[2] = local_10;
    }
    if (&local_c != param_5) {
      *param_5 = local_c;
      param_5[1] = local_8;
      param_5[2] = local_4;
    }
    return 1;
  }
  return 0;
}




/* Function: FUN_00532540 */

void FUN_00532540(undefined4 *param_1,float param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  iVar4 = (int)param_2;
  puStack_28 = (undefined4 *)**(undefined4 **)((int)param_2 + 4);
  piVar2 = (int *)*puStack_28;
  FUN_004ffac0();
  uVar5 = FUN_0043f950();
  uVar5 = (**(code **)(*piVar2 + 0x88))(uVar5);
  FUN_00548704(&uStack_24,uVar5);
  pfVar6 = (float *)FUN_0041d580(auStack_18,&uStack_24,param_3);
  puVar1 = (undefined4 *)((int)param_2 + 8);
  puVar8 = (undefined4 *)(*(int *)((int)param_2 + 4) + 4);
  param_2 = SQRT(pfVar6[2] * pfVar6[2] + pfVar6[1] * pfVar6[1] + *pfVar6 * *pfVar6);
  if (puVar8 == (undefined4 *)*puVar1) {
    *param_1 = puStack_28;
    return;
  }
  do {
    puVar1 = (undefined4 *)*puVar8;
    piVar2 = (int *)*puVar1;
    FUN_004ffac0();
    uVar5 = FUN_0043f950();
    uVar5 = (**(code **)(*piVar2 + 0x88))(uVar5);
    puVar7 = (undefined4 *)FUN_00548704(auStack_18,uVar5);
    if (puVar7 != &uStack_24) {
      uStack_24 = *puVar7;
      uStack_20 = puVar7[1];
      uStack_1c = puVar7[2];
    }
    pfVar6 = (float *)FUN_0041d580(auStack_c,&uStack_24,param_3);
    fVar3 = SQRT(*pfVar6 * *pfVar6 + pfVar6[2] * pfVar6[2] + pfVar6[1] * pfVar6[1]);
    if (fVar3 < param_2) {
      param_2 = fVar3;
      puStack_28 = puVar1;
    }
    puVar8 = puVar8 + 1;
  } while (puVar8 != *(undefined4 **)(iVar4 + 8));
  *param_1 = puStack_28;
  return;
}




/* Function: FUN_00532690 */

void __thiscall FUN_00532690(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    iVar1 = *(int *)(param_2 + 4);
    if ((iVar1 == 0) || ((uint)(*(int *)(param_2 + 8) - iVar1 >> 3) <= uVar3)) break;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x1e0) + 0x98))
                      (*(undefined4 *)(iVar1 + uVar3 * 8),*(undefined4 *)(iVar1 + 4 + uVar3 * 8));
    (**(code **)(**(int **)(param_1 + 0x1e0) + 0x9c))
              (*(undefined4 *)(iVar1 + uVar3 * 8),*(undefined4 *)(iVar1 + 4 + uVar3 * 8),
               uVar2 | param_3);
    uVar3 = uVar3 + 1;
  }
  return;
}




/* Function: FUN_005326f0 */

void __thiscall FUN_005326f0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    iVar1 = *(int *)(param_2 + 4);
    if ((iVar1 == 0) || ((uint)(*(int *)(param_2 + 8) - iVar1 >> 3) <= uVar3)) break;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x1e0) + 0x98))
                      (*(undefined4 *)(iVar1 + uVar3 * 8),*(undefined4 *)(iVar1 + 4 + uVar3 * 8));
    (**(code **)(**(int **)(param_1 + 0x1e0) + 0x9c))
              (*(undefined4 *)(iVar1 + uVar3 * 8),*(undefined4 *)(iVar1 + 4 + uVar3 * 8),
               uVar2 & ~param_3);
    uVar3 = uVar3 + 1;
  }
  return;
}




/* Function: FUN_00532760 */

void __thiscall FUN_00532760(int param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*(int *)(param_1 + 0x234) == -1) {
    return;
  }
  pcVar1 = *(char **)(*(int *)(param_1 + 0x1f8) + *(int *)(param_1 + 0x234) * 4);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_30,pcVar1);
  FUN_005311c0();
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x18c);
  while ((iVar2 = *(int *)(pcVar1 + 0x84), iVar2 != 0 &&
         (uVar3 < (uint)(*(int *)(pcVar1 + 0x88) - iVar2 >> 2)))) {
    uStack_18 = *(undefined4 *)(iVar2 + (-0x18c - param_1) + (int)piVar4);
    uStack_1c = 0x5327d5;
    FUN_0045a300();
    uStack_18 = param_2;
    uStack_1c = 0x5327e1;
    (**(code **)(*(int *)*piVar4 + 0x28))();
    if (uVar3 == *(uint *)(pcVar1 + 0x90)) {
      iVar2 = *piVar4;
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
      *(undefined4 *)(iVar2 + 0x78) = 0x64ff0000;
    }
    else {
      iVar2 = *piVar4;
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
      *(undefined4 *)(iVar2 + 0x78) = 0x6400ffa6;
    }
  }
  if (*(int *)(pcVar1 + 0x84) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(pcVar1 + 0x88) - *(int *)(pcVar1 + 0x84) >> 2;
    if (9 < iVar2) goto LAB_0053284d;
  }
  puVar5 = (undefined4 *)(param_1 + 0x18c + iVar2 * 4);
  iVar2 = 10 - iVar2;
  do {
    uStack_18 = param_2;
    uStack_1c = 0x532847;
    (**(code **)(*(int *)*puVar5 + 0x20))();
    puVar5 = puVar5 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
LAB_0053284d:
  if (*(int *)(pcVar1 + 0x90) == -1) {
    uStack_18 = 0;
    uStack_1c = 0x5328b1;
    FUN_0045a300();
    return;
  }
  uStack_18 = *(undefined4 *)(*(int *)(pcVar1 + 0x84) + *(int *)(pcVar1 + 0x90) * 4);
  uStack_1c = 0x53286d;
  FUN_0045a300();
  uStack_18 = 0x532874;
  uStack_18 = FUN_004ffac0();
  uStack_1c = 0x532880;
  FUN_004ffb10();
  uStack_18 = param_2;
  iVar2 = **(int **)(param_1 + 0x218);
  uStack_1c = 0x532892;
  uStack_1c = FUN_0041c930();
  uStack_20 = 0x53289c;
  (**(code **)(iVar2 + 0x14))();
  return;
}




/* Function: FUN_005328c0 */

undefined4 __thiscall
FUN_005328c0(int param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  uint uVar6;
  uint uVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar8;
  
  uVar6 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x1f8);
    if ((iVar1 == 0) || ((uint)(*(int *)(param_1 + 0x1fc) - iVar1 >> 2) <= uVar6)) break;
    iVar1 = *(int *)(iVar1 + uVar6 * 4);
    for (uVar7 = 0;
        (iVar2 = *(int *)(iVar1 + 0x84), iVar2 != 0 &&
        (uVar7 < (uint)(*(int *)(iVar1 + 0x88) - iVar2 >> 2))); uVar7 = uVar7 + 1) {
      uVar3 = *(undefined4 *)(iVar2 + uVar7 * 4);
      pbVar8 = param_2;
      FUN_004ffac0();
      pbVar5 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_0043f920();
      bVar4 = std::operator==(pbVar5,pbVar8);
      if (bVar4) {
        return uVar3;
      }
    }
    uVar6 = uVar6 + 1;
  }
  return 0;
}




/* Function: FUN_00532950 */

uint __thiscall FUN_00532950(int param_1,undefined4 param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  while( true ) {
    uVar3 = *(uint *)(param_1 + 0x1f8);
    if ((uVar3 == 0) || (in_EAX = (int)(*(int *)(param_1 + 0x1fc) - uVar3) >> 2, in_EAX <= uVar5))
    break;
    iVar1 = *(int *)(uVar3 + uVar5 * 4);
    for (uVar6 = 0;
        (iVar2 = *(int *)(iVar1 + 0x84), iVar2 != 0 &&
        (uVar3 = *(int *)(iVar1 + 0x88) - iVar2 >> 2, uVar6 < uVar3)); uVar6 = uVar6 + 1) {
      uVar4 = FUN_004ffac0();
      uVar3 = FUN_004ffac0();
      if (uVar4 == uVar3) {
        *param_3 = uVar5;
        *param_4 = uVar6;
        return CONCAT31((int3)(uVar5 >> 8),1);
      }
    }
    uVar5 = uVar5 + 1;
    in_EAX = uVar3;
  }
  return in_EAX & 0xffffff00;
}




/* Function: FUN_005329e0 */

void __fastcall FUN_005329e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041ce80();
  if (*(int *)(param_1 + 0x234) != -1) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1f8) + *(int *)(param_1 + 0x234) * 4) + 0x90) =
         0xffffffff;
    FUN_00532760(uVar1);
    *(undefined1 *)(param_1 + 0x215) = 0;
    (**(code **)(**(int **)(param_1 + 0x218) + 8))(0);
  }
  return;
}




/* Function: FUN_00532a30 */

void __thiscall
FUN_00532a30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00543360(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00532a60 */

void __fastcall FUN_00532a60(int param_1)

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




/* Function: FUN_00532a90 */

void __thiscall FUN_00532a90(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar2 = (undefined4 *)(param_3 + 4);
  if (puVar2 != puVar1) {
    iVar3 = param_3 - (int)puVar2;
    do {
      *(undefined4 *)(iVar3 + (int)puVar2) = *puVar2;
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
  *param_2 = param_3;
  return;
}




/* Function: FUN_00532ad0 */

int __thiscall FUN_00532ad0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_004520c0(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 4;
}




/* Function: FUN_00532b00 */

void __thiscall FUN_00532b00(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057fc40;
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
      FUN_00531e20();
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




/* Function: FUN_00532da0 */

void __fastcall FUN_00532da0(int param_1)

{
  if (*(void **)(param_1 + 0x84) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x84));
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return;
}




/* Function: FUN_00532de0 */

void __thiscall FUN_00532de0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0;
      (iVar1 = *(int *)(param_1 + 0x208), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)(param_1 + 0x20c) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    FUN_00423280(*(undefined4 *)(iVar1 + uVar2 * 4),param_3,0);
  }
  if (*(void **)(param_1 + 0x208) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x208));
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  return;
}




/* Function: FUN_005330c0 */

void __fastcall FUN_005330c0(int param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  *(undefined1 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if (*(int **)(param_1 + 0x174) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x174) + 0x18))(1);
  }
  if (*(int **)(param_1 + 0x178) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x178) + 0x18))(1);
  }
  if (*(int **)(param_1 + 0x17c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x17c) + 0x18))(1);
  }
  if (*(int **)(param_1 + 0x184) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x184) + 0x18))(1);
  }
  if (*(int **)(param_1 + 0x180) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x180) + 0x18))(1);
  }
  if (*(int **)(param_1 + 0x188) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x188) + 0x18))(1);
  }
  piVar4 = (int *)(param_1 + 0x18c);
  iVar2 = 10;
  do {
    if ((int *)*piVar4 != (int *)0x0) {
      (**(code **)(*(int *)*piVar4 + 0x18))(1);
    }
    piVar4 = piVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int **)(param_1 + 0x1b4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1b4) + 0x18))(1);
  }
  if (*(void **)(param_1 + 0x208) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x208));
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  for (uVar3 = 0;
      (iVar2 = *(int *)(param_1 + 0x1f8), iVar2 != 0 &&
      (uVar3 < (uint)(*(int *)(param_1 + 0x1fc) - iVar2 >> 2))); uVar3 = uVar3 + 1) {
    pvVar1 = *(void **)(iVar2 + uVar3 * 4);
    if (pvVar1 != (void *)0x0) {
      FUN_00532da0();
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
  }
  if (*(void **)(param_1 + 0x1f8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x1f8));
  }
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  return;
}




/* Function: FUN_005331f0 */

void __thiscall FUN_005331f0(int param_1,undefined4 param_2)

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
  FUN_00532b00(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_00533260 */

void __fastcall FUN_00533260(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057fc90;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_005926b8;
  param_1[0x50] = &PTR_LAB_005926a8;
  local_4 = 2;
  if ((int *)param_1[0x5b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5b] + 0x18))(1);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x5e));
  FUN_0040ad90();
  local_4 = 0xffffffff;
  FUN_0045c850();
  ExceptionList = pvStack_c;
  return;
}




/* Function: FUN_00533890 */

void __fastcall FUN_00533890(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057fd7f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00592768;
  param_1[0x50] = &PTR_LAB_00592758;
  local_4 = 2;
  piVar2 = param_1 + 0x61;
  iVar1 = 4;
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 0x18))(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((int *)param_1[0x5b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5b] + 0x18))(1);
  }
  if ((int *)param_1[0x65] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x65] + 0x18))(1);
  }
  if ((int *)param_1[0x66] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x66] + 0x18))(1);
  }
  if ((void *)param_1[0x5d] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x5d]);
  }
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  FUN_0040ad90();
  local_4 = 0xffffffff;
  FUN_0045c850();
  ExceptionList = pvStack_c;
  return;
}




/* Function: FUN_00533980 */

void __fastcall FUN_00533980(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_124;
  undefined4 local_120 [5];
  undefined1 local_10c [264];
  
  puVar3 = local_120;
  for (iVar2 = 0x46; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar2 = findfirst("editormaps/*.pbem",local_120);
  if (iVar2 != -1) {
    local_124 = FUN_00530fa0(local_10c);
    FUN_005331f0(&local_124);
    iVar1 = findnext(iVar2,local_120);
    while (iVar1 != -1) {
      local_124 = FUN_00530fa0(local_10c);
      iVar1 = *(int *)(param_1 + 0x174);
      if ((iVar1 == 0) ||
         ((uint)(*(int *)(param_1 + 0x17c) - iVar1 >> 2) <=
          (uint)(*(int *)(param_1 + 0x178) - iVar1 >> 2))) {
        FUN_00532b00(*(undefined4 *)(param_1 + 0x178),1,&local_124);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x178);
        FUN_004520c0(iVar1,1,&local_124,param_1 + 0x170,local_124);
        *(int *)(param_1 + 0x178) = iVar1 + 4;
      }
      iVar1 = findnext(iVar2,local_120);
    }
    _findclose(iVar2);
    return;
  }
  _findclose(-1);
  return;
}




/* Function: FUN_00533aa0 */

void __fastcall FUN_00533aa0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057fddd;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00592808;
  param_1[0x50] = &PTR_LAB_005927f8;
  local_4 = 3;
  FUN_005330c0();
  if ((void *)param_1[0x82] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x82]);
  }
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  if ((void *)param_1[0x7e] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x7e]);
  }
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  FUN_0040ad90();
  local_4 = 0xffffffff;
  FUN_0045c850();
  ExceptionList = pvStack_c;
  return;
}




/* Function: FUN_00533b80 */

void __thiscall FUN_00533b80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 *local_7c;
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
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [36];
  
  puVar5 = *(undefined4 **)(param_1 + 0x208);
  if (puVar5 != *(undefined4 **)(param_1 + 0x20c)) {
    do {
      piVar1 = (int *)*puVar5;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0;
      local_78 = 0;
      local_74 = 0;
      local_70 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      local_7c = puVar5;
      FUN_004ffac0();
      puVar3 = (undefined4 *)FUN_0043f930();
      if (puVar3 != &local_6c) {
        local_6c = *puVar3;
        local_68 = puVar3[1];
        local_64 = puVar3[2];
      }
      FUN_004ffac0();
      puVar3 = (undefined4 *)FUN_0043f940();
      if (puVar3 != &local_78) {
        local_78 = *puVar3;
        local_74 = puVar3[1];
        local_70 = puVar3[2];
      }
      uVar4 = (**(code **)(*piVar1 + 0x88))(&local_6c);
      puVar3 = (undefined4 *)FUN_00548704(auStack_48,uVar4);
      if (puVar3 != &local_6c) {
        local_6c = *puVar3;
        local_68 = puVar3[1];
        local_64 = puVar3[2];
      }
      uVar4 = (**(code **)(*piVar1 + 0x88))(&local_78);
      puVar3 = (undefined4 *)FUN_00548704(auStack_3c,uVar4);
      if (puVar3 != &local_78) {
        local_78 = *puVar3;
        local_74 = puVar3[1];
        local_70 = puVar3[2];
      }
      FUN_00531b90(&local_6c,&local_78);
      puVar6 = auStack_30;
      FUN_0041d580(auStack_24,param_4,param_3,puVar6);
      puVar3 = (undefined4 *)FUN_0041d510(puVar6);
      if (puVar3 != &local_60) {
        local_60 = *puVar3;
        local_5c = puVar3[1];
        local_58 = puVar3[2];
      }
      FUN_00430480(&local_6c,&local_78);
      cVar2 = FUN_00430860(param_3,&local_60,&local_54);
      if (cVar2 != '\0') {
        FUN_005331f0(&local_7c);
        puVar5 = local_7c;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(undefined4 **)(param_1 + 0x20c));
  }
  return;
}




/* Function: FUN_00533d90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00533d90(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  int local_10;
  int local_c;
  
  iVar5 = FUN_004cf110();
  iVar6 = FUN_004cf110();
  fVar1 = *(float *)(param_2 + 8);
  fVar2 = *(float *)(param_1 + 8);
  iVar7 = FUN_004cf110();
  iVar8 = FUN_004cf110();
  if ((float10)_DAT_00588b48 < extraout_ST0_00 - (float10)iVar7) {
    iVar7 = iVar7 + 1;
  }
  if (_DAT_00588b48 < (float)(((float10)fVar1 - (float10)fVar2) * extraout_ST0) - (float)iVar8) {
    iVar8 = iVar8 + 1;
  }
  if (iVar5 < iVar7 + iVar5) {
    iVar4 = iVar6;
    local_10 = iVar5;
    iVar9 = iVar5;
    do {
      for (; iVar4 < iVar8 + iVar6; iVar4 = iVar4 + 1) {
        iVar3 = *(int *)(param_3 + 4);
        local_c = iVar4;
        if ((iVar3 == 0) ||
           ((uint)(*(int *)(param_3 + 0xc) - iVar3 >> 3) <=
            (uint)(*(int *)(param_3 + 8) - iVar3 >> 3))) {
          FUN_00530c10(*(undefined4 *)(param_3 + 8),1,&local_10);
        }
        else {
          iVar3 = *(int *)(param_3 + 8);
          FUN_0041fe60(iVar3,1,&local_10,param_3,iVar6);
          *(int *)(param_3 + 8) = iVar3 + 8;
        }
      }
      local_10 = iVar9 + 1;
      iVar4 = iVar6;
      iVar9 = local_10;
    } while (local_10 < iVar7 + iVar5);
  }
  return;
}




/* Function: FUN_00533ef0 */

float10 __thiscall FUN_00533ef0(int param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float local_20;
  undefined1 local_1c [4];
  void *local_18;
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057fdf8;
  pvStack_c = ExceptionList;
  uVar3 = 0;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  local_20 = -100000.0;
  ExceptionList = &pvStack_c;
  FUN_00533d90(param_2,param_3,local_1c);
  iVar2 = local_14;
  pvVar1 = local_18;
  do {
    if (pvVar1 == (void *)0x0) {
LAB_00533f92:
      ExceptionList = pvStack_c;
      return (float10)local_20;
    }
    if ((uint)(iVar2 - (int)pvVar1 >> 3) <= uVar3) {
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      goto LAB_00533f92;
    }
    fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0x1e0) + 0x90))
                               (*(undefined4 *)((int)pvVar1 + uVar3 * 8),
                                *(undefined4 *)((int)pvVar1 + uVar3 * 8 + 4));
    if (fVar4 <= (float10)local_20) {
      uVar3 = uVar3 + 1;
    }
    else {
      local_20 = (float)fVar4;
      uVar3 = uVar3 + 1;
    }
  } while( true );
}




/* Function: FUN_00533fb0 */

void __thiscall FUN_00533fb0(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057fe1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  local_10 = (undefined4 *)FUN_00493c27(0x94);
  if (local_10 == (undefined4 *)0x0) {
    local_10 = (undefined4 *)0x0;
  }
  else {
    local_10[0x21] = 0;
    local_10[0x22] = 0;
    local_10[0x23] = 0;
    puVar3 = local_10;
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_10[0x24] = 0xffffffff;
  }
  local_4 = 0xffffffff;
  iVar2 = (int)local_10 - (int)param_3;
  do {
    cVar1 = *param_3;
    param_3[iVar2] = cVar1;
    param_3 = param_3 + 1;
  } while (cVar1 != '\0');
  FUN_005331f0(&local_10);
  if ((param_1[0x7e] != 0) && ((int)(param_1[0x7f] - param_1[0x7e]) >> 2 == 1)) {
    param_1[0x8d] = 0;
  }
  FUN_00532760(param_2);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00534070 */

void __thiscall FUN_00534070(int param_1,int *param_2,byte *param_3,char *param_4)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  undefined4 uVar10;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c [28];
  
  piVar2 = param_2;
  uVar7 = 0;
  do {
    iVar4 = *(int *)(param_1 + 0x1f8);
    if ((iVar4 == 0) || ((uint)(*(int *)(param_1 + 0x1fc) - iVar4 >> 2) <= uVar7))
    goto LAB_005341db;
    pbVar3 = *(byte **)(iVar4 + uVar7 * 4);
    pbVar8 = param_3;
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_005340d5:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_005340da;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_005340d5;
      pbVar3 = pbVar3 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_005340da:
    if (iVar4 == 0) {
      FUN_0041ce80();
      uVar5 = FUN_0041c940();
      piVar6 = (int *)FUN_00493c27(0x294);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        FUN_005057c0();
        *piVar6 = (int)&PTR_LAB_005925d0;
      }
      param_2 = piVar6;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,param_4)
      ;
      iVar4 = FUN_00429280(local_1c,uVar5,0,1,1);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
      if (iVar4 == 0) {
        return;
      }
      *(undefined1 *)(iVar4 + 0x2a8) = 1;
      FUN_004ffb10(iVar4);
      *(undefined1 *)(piVar6 + 0x9e) = 0;
      iVar4 = *piVar6;
      uVar5 = FUN_0041c940();
      (**(code **)(iVar4 + 0x1c))(piVar2,uVar5);
      uVar5 = 1;
      FUN_004ffac0(1);
      FUN_0043fb40(uVar5);
      *(undefined1 *)((int)piVar6 + 0x275) = 1;
      FUN_004ff6f0(1);
      uVar10 = 1;
      piVar6[0x7b] = 0x41200000;
      uVar5 = FUN_0041c940(1);
      FUN_00423250(piVar6,uVar5,uVar10);
      piVar6 = piVar2;
      FUN_0041c940(piVar2);
      FUN_0042a4f0(piVar6);
      FUN_00531210();
      FUN_005331f0(&param_2);
LAB_005341db:
      FUN_00532760(piVar2);
      return;
    }
    uVar7 = uVar7 + 1;
  } while( true );
}




/* Function: FUN_005341f0 */

undefined4 __thiscall FUN_005341f0(int param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  char *pcVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  undefined4 uVar6;
  FILE *_File;
  void *_Str;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar10;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar14;
  float10 fVar15;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_24c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_248;
  uint local_244;
  float local_240;
  void *local_23c;
  int local_238;
  int local_234;
  int local_230;
  int aiStack_22c [2];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_224;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_220;
  undefined1 local_21c [4];
  char local_218 [4];
  char local_214 [4];
  char local_210 [248];
  char acStack_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057fe3b;
  local_14 = ExceptionList;
  pcVar4 = local_218;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  local_218 = (char  [4])s_EditorMaps__0059288c._0_4_;
  local_210._0_4_ = s_EditorMaps__0059288c._8_4_;
  local_214 = (char  [4])s_EditorMaps__0059288c._4_4_;
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar12 = local_21c + 3;
  do {
    pcVar9 = pcVar12 + 1;
    pcVar12 = pcVar12 + 1;
  } while (*pcVar9 != '\0');
  pcVar9 = param_2;
  for (uVar8 = (uint)((int)pcVar4 - (int)param_2) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar8 = (int)pcVar4 - (int)param_2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar12 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar12 = pcVar12 + 1;
  }
  puVar2 = (undefined4 *)(local_21c + 3);
  do {
    puVar13 = puVar2;
    puVar2 = (undefined4 *)((int)puVar13 + 1);
  } while (*(char *)((int)puVar13 + 1) != '\0');
  *(undefined4 *)((int)puVar13 + 1) = DAT_00592884;
  iVar7 = 0;
  pbVar10 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  local_21c = (undefined1  [4])0x0;
  *(undefined2 *)((int)puVar13 + 5) = DAT_00592888;
  pbVar14 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  local_224 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  local_220 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  local_c = 0;
  if (*(int *)(param_1 + 0x208) != 0) {
    iVar7 = *(int *)(param_1 + 0x20c) - *(int *)(param_1 + 0x208) >> 2;
  }
  ExceptionList = &local_14;
  local_23c = (void *)thunk_FUN_00493c27(iVar7 * 4);
  local_248 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  do {
    iVar7 = *(int *)(param_1 + 0x208);
    if ((iVar7 == 0) || ((uint)(*(int *)(param_1 + 0x20c) - iVar7 >> 2) <= local_248)) {
      _File = fopen(local_218,"wb");
      if (_File == (FILE *)0x0) {
        local_c = 0xffffffff;
        pbVar5 = pbVar10;
        if (pbVar10 ==
            (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
          ExceptionList = local_14;
          return 0;
        }
        for (; pbVar5 != pbVar14; pbVar5 = pbVar5 + 0x1c) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(pbVar5);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete(pbVar10);
      }
      fwrite(param_2,1,0x14,_File);
      local_238 = FUN_00539ab0();
      local_234 = FUN_0041cda0();
      fwrite(&local_238,1,4,_File);
      fwrite(&local_234,1,4,_File);
      local_24c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x0;
      iVar7 = local_234;
      local_248 = pbVar10;
      if (0 < local_238) {
        do {
          iVar11 = 0;
          if (0 < iVar7) {
            do {
              fVar15 = (float10)(**(code **)(**(int **)(param_1 + 0x1e0) + 0x90))(local_24c,iVar11);
              local_240 = (float)fVar15;
              fwrite(&local_240,1,4,_File);
              iVar11 = iVar11 + 1;
              iVar7 = local_234;
            } while (iVar11 < local_234);
          }
          local_24c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)((int)local_24c + 1);
          local_248 = local_224;
        } while ((int)local_24c < local_238);
      }
      if (local_248 ==
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
        local_230 = 0;
      }
      else {
        local_230 = ((int)local_220 - (int)local_248) / 0x1c;
      }
      fwrite(&local_230,1,4,_File);
      pbVar10 = local_248;
      for (local_24c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)0x0;
          (pbVar10 !=
           (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0 &&
          (local_24c < (uint)(((int)local_220 - (int)pbVar10) / 0x1c)));
          local_24c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)((int)local_24c + 1)) {
        pcVar4 = acStack_118;
        for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + 4;
        }
        pcVar12 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ::c_str(local_248);
        pcVar4 = acStack_118;
        do {
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        fwrite(acStack_118,1,0x100,_File);
        local_248 = local_248 + 0x1c;
        pbVar10 = local_224;
      }
      if (*(int *)(param_1 + 0x208) == 0) {
        aiStack_22c[0] = 0;
      }
      else {
        aiStack_22c[0] = *(int *)(param_1 + 0x20c) - *(int *)(param_1 + 0x208) >> 2;
      }
      fwrite(aiStack_22c,1,4,_File);
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x20c) - *(int *)(param_1 + 0x208) >> 2;
      }
      fwrite(local_23c,1,iVar7 * 4,_File);
      for (local_244 = 0;
          (iVar7 = *(int *)(param_1 + 0x208), iVar7 != 0 &&
          (local_244 < (uint)(*(int *)(param_1 + 0x20c) - iVar7 >> 2))); local_244 = local_244 + 1)
      {
        _Str = (void *)(**(code **)(**(int **)(iVar7 + local_244 * 4) + 0x88))();
        fwrite(_Str,1,0x40,_File);
      }
      fclose(_File);
      operator_delete__(local_23c);
      pbVar5 = local_220;
      local_c = 0xffffffff;
      pbVar14 = pbVar10;
      if (pbVar10 ==
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
        ExceptionList = local_14;
        return 1;
      }
      for (; pbVar14 != pbVar5; pbVar14 = pbVar14 + 0x1c) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(pbVar14);
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(pbVar10);
    }
    uVar8 = 0;
    local_240 = *(float *)(iVar7 + (int)local_248 * 4);
    local_24c = pbVar10;
    while (pbVar10 !=
           (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      if ((uint)(((int)pbVar14 - (int)pbVar10) / 0x1c) <= uVar8) {
        iVar7 = ((int)pbVar14 - (int)pbVar10) / 0x1c;
        goto LAB_0053437c;
      }
      FUN_004ffac0();
      pbVar5 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_0043f920();
      bVar3 = std::operator==(local_24c,pbVar5);
      if (bVar3) {
        *(uint *)((int)local_23c + (int)local_248 * 4) = uVar8;
        goto LAB_005343a9;
      }
      uVar8 = uVar8 + 1;
      local_24c = local_24c + 0x1c;
    }
    iVar7 = 0;
LAB_0053437c:
    *(int *)((int)local_23c + (int)local_248 * 4) = iVar7;
    FUN_004ffac0();
    uVar6 = FUN_0043f920();
    FUN_0040ae90(uVar6);
    pbVar10 = local_224;
    pbVar14 = local_220;
LAB_005343a9:
    local_248 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                ((int)local_248 + 1);
  } while( true );
}




/* Function: FUN_00534a30 */

void * __thiscall FUN_00534a30(void *param_1,byte param_2)

{
  FUN_00533260();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00534af0 */

void * __thiscall FUN_00534af0(void *param_1,byte param_2)

{
  FUN_00533890();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00534b10 */

void __thiscall FUN_00534b10(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  *(undefined4 *)(param_1 + 0x180) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x174);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(param_1 + 0x178) - (int)puVar1 >> 2 != 0)) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar1);
  }
  if (*(void **)(param_1 + 0x174) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x174));
  }
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  FUN_00533980();
  FUN_00532270();
  param_1 = param_1 + 0x140;
  FUN_0041e5b0(param_1);
  FUN_00409a00(param_1);
  FUN_004596f0(param_2);
  return;
}




/* Function: FUN_00535820 */

void * __thiscall FUN_00535820(void *param_1,byte param_2)

{
  FUN_00533aa0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00535840 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00535840(int param_1)

{
  void *pvVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  float10 fVar6;
  float fStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [4];
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057fdf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = FUN_00532380();
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0x215) != '\0')) {
    FUN_004ffac0();
    puVar3 = (undefined4 *)FUN_0043f930();
    local_34 = *puVar3;
    local_30 = puVar3[1];
    local_2c = puVar3[2];
    FUN_004ffac0();
    puVar3 = (undefined4 *)FUN_0043f940();
    local_40 = *puVar3;
    local_3c = puVar3[1];
    local_38 = puVar3[2];
    uVar4 = (**(code **)(**(int **)(param_1 + 0x218) + 0x88))(&local_40);
    puVar3 = (undefined4 *)FUN_00548704(auStack_28,uVar4);
    if (puVar3 != &local_40) {
      local_40 = *puVar3;
      local_3c = puVar3[1];
      local_38 = puVar3[2];
    }
    uVar4 = (**(code **)(**(int **)(param_1 + 0x218) + 0x88))(&local_34);
    puVar3 = (undefined4 *)FUN_00548704(auStack_1c,uVar4);
    if (puVar3 != &local_34) {
      local_34 = *puVar3;
      local_30 = puVar3[1];
      local_2c = puVar3[2];
    }
    FUN_00531b90(&local_34,&local_40);
    pvStack_18 = (void *)0x0;
    iStack_14 = 0;
    uStack_10 = 0;
    uStack_4 = 0;
    FUN_00533d90(&local_34,&local_40,auStack_1c);
    fStack_44 = std::numeric_limits<float>::max();
    pvVar1 = pvStack_18;
    uVar5 = 0;
    while ((pvVar1 != (void *)0x0 && (uVar5 < (uint)(iStack_14 - (int)pvVar1 >> 3)))) {
      fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x1e0) + 0x88))
                                 (*(undefined4 *)((int)pvVar1 + uVar5 * 8),
                                  *(undefined4 *)((int)pvVar1 + uVar5 * 8 + 4));
      if ((float10)fStack_44 <= fVar6) {
        uVar5 = uVar5 + 1;
      }
      else {
        fStack_44 = (float)fVar6;
        uVar5 = uVar5 + 1;
      }
    }
    for (uVar5 = 0; (pvVar1 != (void *)0x0 && (uVar5 < (uint)(iStack_14 - (int)pvVar1 >> 3)));
        uVar5 = uVar5 + 1) {
      (**(code **)(**(int **)(param_1 + 0x1e0) + 0x8c))
                (*(undefined4 *)((int)pvVar1 + uVar5 * 8),
                 *(undefined4 *)((int)pvVar1 + uVar5 * 8 + 4),fStack_44);
    }
    uVar5 = 0;
    while (pvVar1 != (void *)0x0) {
      if ((uint)(iStack_14 - (int)pvVar1 >> 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x1e0) + 0x88))
                                 (*(undefined4 *)((int)pvVar1 + uVar5 * 8),
                                  *(undefined4 *)((int)pvVar1 + uVar5 * 8 + 4));
      fVar6 = fVar6 + (float10)_DAT_00588808;
      if (fVar6 < (float10)_DAT_0058af34 != (fVar6 == (float10)_DAT_0058af34)) {
        (**(code **)(**(int **)(param_1 + 0x1e0) + 0x8c))
                  (*(undefined4 *)((int)pvVar1 + uVar5 * 8),
                   *(undefined4 *)((int)pvVar1 + uVar5 * 8 + 4),(float)fVar6);
      }
      uVar5 = uVar5 + 1;
    }
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00535a80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00535a80(int param_1)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  float10 fVar4;
  float local_20;
  undefined1 local_1c [4];
  void *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057fdf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = FUN_00532380();
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0x215) != '\0')) {
    local_18 = (void *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    FUN_00533d90(param_1 + 0x21c,param_1 + 0x228,local_1c);
    local_20 = std::numeric_limits<float>::max();
    pvVar1 = local_18;
    uVar3 = 0;
    while ((pvVar1 != (void *)0x0 && (uVar3 < (uint)(local_14 - (int)pvVar1 >> 3)))) {
      fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0x1e0) + 0x88))
                                 (*(undefined4 *)((int)pvVar1 + uVar3 * 8),
                                  *(undefined4 *)((int)pvVar1 + uVar3 * 8 + 4));
      if ((float10)local_20 <= fVar4) {
        uVar3 = uVar3 + 1;
      }
      else {
        local_20 = (float)fVar4;
        uVar3 = uVar3 + 1;
      }
    }
    for (uVar3 = 0; (pvVar1 != (void *)0x0 && (uVar3 < (uint)(local_14 - (int)pvVar1 >> 3)));
        uVar3 = uVar3 + 1) {
      (**(code **)(**(int **)(param_1 + 0x1e0) + 0x8c))
                (*(undefined4 *)((int)pvVar1 + uVar3 * 8),
                 *(undefined4 *)((int)pvVar1 + uVar3 * 8 + 4),local_20);
    }
    uVar3 = 0;
    while (pvVar1 != (void *)0x0) {
      if ((uint)(local_14 - (int)pvVar1 >> 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0x1e0) + 0x88))
                                 (*(undefined4 *)((int)pvVar1 + uVar3 * 8),
                                  *(undefined4 *)((int)pvVar1 + uVar3 * 8 + 4));
      if ((float10)_DAT_0059290c <= fVar4 - (float10)_DAT_00588808) {
        (**(code **)(**(int **)(param_1 + 0x1e0) + 0x8c))
                  (*(undefined4 *)((int)pvVar1 + uVar3 * 8),
                   *(undefined4 *)((int)pvVar1 + uVar3 * 8 + 4),
                   (float)(fVar4 - (float10)_DAT_00588808));
      }
      uVar3 = uVar3 + 1;
    }
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00535bf0 */

void __thiscall FUN_00535bf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_1c [4];
  void *local_18;
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057fdf8;
  pvStack_c = ExceptionList;
  uVar4 = 0;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00533d90(param_3,param_4,local_1c);
  iVar2 = local_14;
  pvVar1 = local_18;
  while( true ) {
    if (pvVar1 == (void *)0x0) {
      ExceptionList = pvStack_c;
      return;
    }
    if ((uint)(iVar2 - (int)pvVar1 >> 3) <= uVar4) break;
    uVar3 = (**(code **)(**(int **)(param_1 + 0x1e0) + 0x98))
                      (*(undefined4 *)((int)pvVar1 + uVar4 * 8),
                       *(undefined4 *)((int)pvVar1 + uVar4 * 8 + 4));
    if ((uVar3 & 1) != 0) {
      FUN_005310e0(1);
      *(undefined1 *)(param_1 + 0x215) = 0;
      break;
    }
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar1);
}




/* Function: FUN_00535ca0 */

void FUN_00535ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057fdf8;
  local_c = ExceptionList;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00533d90(param_1,param_2,local_1c);
  FUN_00532690(local_1c,param_3);
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_18);
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00535d20 */

void FUN_00535d20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057fdf8;
  local_c = ExceptionList;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00533d90(param_1,param_2,local_1c);
  FUN_005326f0(local_1c,param_3);
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_18);
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00535da0 */

void __thiscall FUN_00535da0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  float10 fVar5;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [60];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057ffd8;
  local_c = ExceptionList;
  iVar1 = param_1 + 0x1d0;
  ExceptionList = &local_c;
  cVar2 = FUN_00532440(param_2,param_1 + 0x1b8,param_1 + 0x1c4,iVar1);
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x214) = 1;
    uVar3 = (**(code **)(**(int **)(param_1 + 0x218) + 0x88))();
    FUN_00407260(uVar3);
    uStack_4 = 0;
    FUN_00545c38(iVar1);
    FUN_004ffac0();
    puVar4 = (undefined4 *)FUN_0043f930();
    uStack_70 = *puVar4;
    uStack_6c = puVar4[1];
    uStack_68 = puVar4[2];
    FUN_004ffac0();
    puVar4 = (undefined4 *)FUN_0043f940();
    uStack_64 = *puVar4;
    uStack_60 = puVar4[1];
    uStack_5c = puVar4[2];
    puVar4 = (undefined4 *)FUN_00548704(auStack_58,auStack_4c,&uStack_70);
    if (puVar4 != &uStack_70) {
      uStack_70 = *puVar4;
      uStack_6c = puVar4[1];
      uStack_68 = puVar4[2];
    }
    puVar4 = (undefined4 *)FUN_00548704(auStack_58,auStack_4c,&uStack_64);
    if (puVar4 != &uStack_64) {
      uStack_64 = *puVar4;
      uStack_60 = puVar4[1];
      uStack_5c = puVar4[2];
    }
    FUN_00531b90(&uStack_70,&uStack_64);
    FUN_00531c20(param_3,iVar1,&uStack_70,&uStack_64);
    fVar5 = (float10)FUN_00533ef0(&uStack_70,&uStack_64);
    *(float *)(param_1 + 0x1d4) = (float)fVar5;
    FUN_00545c38(iVar1);
    (**(code **)(**(int **)(param_1 + 0x218) + 0x8c))(auStack_4c);
    if ((undefined4 *)&stack0xffffff8c != param_3) {
      *param_3 = unaff_ESI;
      param_3[1] = uStack_70;
      param_3[2] = uStack_6c;
    }
    if (&uStack_68 != param_4) {
      *param_4 = uStack_68;
      param_4[1] = uStack_64;
      param_4[2] = uStack_60;
    }
    puStack_8 = (undefined1 *)0xffffffff;
    _eh_vector_destructor_iterator_(auStack_50,0x10,4,FUN_00407150);
    ExceptionList = pvStack_10;
    return;
  }
  *(undefined1 *)(param_1 + 0x214) = 0;
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00535fc0 */

void __fastcall FUN_00535fc0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined1 *)(param_1 + 0x215) = 1;
  cVar1 = FUN_00532380();
  if (cVar1 != '\0') {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    FUN_005310e0(0);
    uVar2 = FUN_0041ce80();
    FUN_00535da0(uVar2,*(undefined4 *)(param_1 + 0x218),&local_18,&local_c);
    FUN_00535bf0(uVar2,&local_18,&local_c);
    FUN_0040da70(uVar2,&local_18,&local_c);
    if (&local_18 != (undefined4 *)(param_1 + 0x21c)) {
      *(undefined4 *)(param_1 + 0x21c) = local_18;
      *(undefined4 *)(param_1 + 0x220) = local_14;
      *(undefined4 *)(param_1 + 0x224) = local_10;
    }
    if (&local_c != (undefined4 *)(param_1 + 0x228)) {
      *(undefined4 *)(param_1 + 0x228) = local_c;
      *(undefined4 *)(param_1 + 0x22c) = local_8;
      *(undefined4 *)(param_1 + 0x230) = local_4;
    }
  }
  return;
}




/* Function: FUN_005360b0 */

void __thiscall FUN_005360b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *local_a0;
  undefined4 *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74 [4];
  void *local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [12];
  undefined1 auStack_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00580000;
  local_c = ExceptionList;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  ExceptionList = &local_c;
  cVar2 = FUN_00532440(param_2,&local_80,&local_64);
  if (cVar2 != '\0') {
    local_70 = (void *)0x0;
    local_6c = 0;
    local_68 = 0;
    local_4 = 0;
    FUN_00533b80(local_74,&local_80);
    if (local_70 != (void *)0x0) {
      local_a0 = (undefined1 *)(local_6c - (int)local_70 >> 2);
      if (local_a0 != (undefined1 *)0x0) {
        FUN_00532540(&local_9c,local_74);
        piVar1 = (int *)*local_9c;
        cVar2 = FUN_00532950(piVar1,&local_9c);
        if (cVar2 != '\0') {
          FUN_004ffac0();
          puVar3 = (undefined4 *)FUN_0043f930();
          local_8c = *puVar3;
          local_88 = puVar3[1];
          local_84 = puVar3[2];
          FUN_004ffac0();
          puVar3 = (undefined4 *)FUN_0043f940();
          local_98 = *puVar3;
          local_94 = puVar3[1];
          local_90 = puVar3[2];
          uVar4 = (**(code **)(*piVar1 + 0x88))();
          puVar3 = (undefined4 *)FUN_00548704(local_58,uVar4);
          if (puVar3 != &local_98) {
            local_98 = *puVar3;
            local_94 = puVar3[1];
            local_90 = puVar3[2];
          }
          uVar4 = (**(code **)(*piVar1 + 0x88))();
          puVar3 = (undefined4 *)FUN_00548704(local_58,uVar4);
          if (puVar3 != &local_8c) {
            local_8c = *puVar3;
            local_88 = puVar3[1];
            local_84 = puVar3[2];
          }
          FUN_00531b90(&local_8c);
          FUN_00535d20(&local_8c,&local_98);
          *(undefined4 **)(param_1 + 0x234) = local_9c;
          *(undefined1 **)(*(int *)(*(int *)(param_1 + 0x1f8) + (int)local_9c * 4) + 0x90) =
               local_a0;
          (**(code **)(*piVar1 + 0x88))();
          FUN_00407260();
          local_4._0_1_ = 1;
          FUN_004ffac0();
          FUN_004ffb10();
          (**(code **)(**(int **)(param_1 + 0x218) + 0x8c))();
          uVar4 = FUN_0041c940();
          FUN_00423280(piVar1,uVar4);
          local_a0 = &stack0xffffff4c;
          FUN_00532a90(&local_a0);
          FUN_00532760();
          FUN_00535fc0();
          local_4 = (uint)local_4._1_3_ << 8;
          _eh_vector_destructor_iterator_(auStack_4c,0x10,4,FUN_00407150);
        }
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(local_70);
    }
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00536360 */

void __thiscall FUN_00536360(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[0x8d];
  if (iVar2 != -1) {
    iVar1 = *(int *)(param_1[0x7e] + iVar2 * 4);
    if ((param_3[1] == 1) && (*param_3 == param_1[0x60])) {
      param_1[0x8d] = iVar2 + 1U;
      if ((param_1[0x7e] == 0) || ((uint)(param_1[0x7f] - param_1[0x7e] >> 2) <= iVar2 + 1U)) {
        param_1[0x8d] = 0;
      }
      FUN_00532760(param_2);
    }
    if (param_3[1] == 1) {
      if (*param_3 == param_1[0x61]) {
        iVar2 = param_1[0x8d];
        param_1[0x8d] = iVar2 + -1;
        if (iVar2 + -1 < 0) {
          if (param_1[0x7e] == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = param_1[0x7f] - param_1[0x7e] >> 2;
          }
          param_1[0x8d] = iVar2 + -1;
        }
        FUN_00532760(param_2);
      }
      if (param_3[1] == 1) {
        if (*param_3 == param_1[0x5d]) {
          (**(code **)(*param_1 + 0x20))(param_2);
          (**(code **)(*(int *)param_1[0x5b] + 0x28))(param_2);
        }
        if ((param_3[1] == 1) && (*param_3 == param_1[0x5e])) {
          (**(code **)(*param_1 + 0x20))(param_2);
          (**(code **)(*(int *)param_1[0x5c] + 0x28))(param_2);
        }
      }
    }
    uVar3 = 0;
    param_1 = param_1 + 99;
    while( true ) {
      if ((*(int *)(iVar1 + 0x84) == 0) ||
         ((uint)(*(int *)(iVar1 + 0x88) - *(int *)(iVar1 + 0x84) >> 2) <= uVar3)) goto LAB_005364bb;
      if ((param_3[1] == 1) && (*param_3 == *param_1)) break;
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 1;
    }
    *(uint *)(iVar1 + 0x90) = uVar3;
    FUN_00532760(param_2);
    FUN_00535fc0();
  }
LAB_005364bb:
  FUN_0045bcc0(param_2,param_3);
  return;
}




/* Function: FUN_005364d0 */

undefined4 __thiscall FUN_005364d0(int param_1,undefined4 param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar12;
  undefined4 *puVar13;
  void *local_220;
  int iStack_21c;
  int local_218;
  int iStack_214;
  int local_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  int *piStack_1f4;
  int local_1f0;
  undefined4 local_1ec;
  int local_1e8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_1e0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_1dc;
  undefined4 local_1d8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_1d4 [28];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [12];
  undefined1 auStack_1a4 [4];
  undefined4 auStack_1a0 [16];
  undefined1 local_160 [20];
  undefined4 auStack_14c [16];
  char acStack_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00580032;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_0041ce80();
  local_1ec = uVar2;
  uVar3 = FUN_0041c940();
  FUN_00532de0(uVar2,uVar3);
  iVar4 = FUN_00410660(param_2,&DAT_00582818);
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  else {
    local_1e8 = iVar4;
    FUN_0040f000(local_160,1,0x14,iVar4);
    FUN_0040f000(&local_218,1,4,iVar4);
    FUN_0040f000(&local_210,1,4,iVar4);
    FUN_0053b400(local_218,local_210);
    iVar8 = 0;
    iVar9 = local_210;
    if (0 < local_218) {
      do {
        iVar10 = 0;
        if (0 < iVar9) {
          do {
            FUN_0040f000(&local_220,1,4,iVar4);
            (**(code **)(**(int **)(param_1 + 0x1e0) + 0x94))(iVar8,iVar10,local_220);
            (**(code **)(**(int **)(param_1 + 0x1e0) + 0x9c))(iVar8,iVar10,0);
            iVar10 = iVar10 + 1;
            iVar9 = local_210;
          } while (iVar10 < local_210);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_218);
    }
    iVar9 = 0;
    local_1e0 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
    local_1dc = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
    local_1d8 = 0;
    local_4 = 0;
    FUN_0040f000(&local_1f0,1,4,iVar4);
    pbVar12 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
    if (0 < local_1f0) {
      do {
        FUN_0040f000(acStack_10c,1,0x100,iVar4);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  (abStack_1d4,acStack_10c);
        local_4._0_1_ = 1;
        FUN_0040ae90(abStack_1d4);
        local_4 = (uint)local_4._1_3_ << 8;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_1d4);
        iVar9 = iVar9 + 1;
        pbVar12 = local_1e0;
      } while (iVar9 < local_1f0);
    }
    FUN_0040f000(&iStack_21c,1,4,iVar4);
    pvVar5 = (void *)thunk_FUN_00493c27(iStack_21c * 4);
    local_220 = pvVar5;
    FUN_0040f000(pvVar5,1,iStack_21c * 4,iVar4);
    iStack_214 = 0;
    if (0 < iStack_21c) {
      do {
        FUN_0040f000(auStack_14c,1,0x40,iVar4);
        iVar9 = FUN_005328c0(pbVar12 + *(int *)((int)pvVar5 + iStack_214 * 4) * 0x1c);
        if (iVar9 != 0) {
          piVar6 = (int *)FUN_00531ab0(local_1ec,iVar9);
          piStack_1f4 = piVar6;
          _eh_vector_constructor_iterator_
                    (auStack_1a0,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
          puVar11 = auStack_14c;
          puVar13 = auStack_1a0;
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          local_4 = CONCAT31(local_4._1_3_,2);
          (**(code **)(*piVar6 + 0x8c))(auStack_1a0);
          puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
          _eh_vector_destructor_iterator_(auStack_1a4,0x10,4,FUN_00407150);
          FUN_004ffac0();
          piVar7 = (int *)FUN_0043f930();
          iStack_204 = *piVar7;
          iStack_200 = piVar7[1];
          iStack_1fc = piVar7[2];
          FUN_004ffac0();
          piVar7 = (int *)FUN_0043f940();
          local_210 = *piVar7;
          iStack_20c = piVar7[1];
          iStack_208 = piVar7[2];
          uVar2 = (**(code **)(*piVar6 + 0x88))(&iStack_204);
          piVar7 = (int *)FUN_00548704(auStack_1b0,uVar2);
          if (piVar7 != &iStack_204) {
            iStack_204 = *piVar7;
            iStack_200 = piVar7[1];
            iStack_1fc = piVar7[2];
          }
          uVar2 = (**(code **)(*piVar6 + 0x88))(&local_210);
          piVar6 = (int *)FUN_00548704(auStack_1b8,uVar2);
          if (piVar6 != &iStack_20c) {
            iStack_20c = *piVar6;
            iStack_208 = piVar6[1];
            iStack_204 = piVar6[2];
          }
          FUN_00531b90(&iStack_200,&iStack_20c);
          FUN_00535ca0(&iStack_200,&iStack_20c,1);
          iVar4 = *(int *)(param_1 + 0x208);
          if ((iVar4 == 0) ||
             ((uint)(*(int *)(param_1 + 0x210) - iVar4 >> 2) <=
              (uint)(*(int *)(param_1 + 0x20c) - iVar4 >> 2))) {
            FUN_00532b00(*(undefined4 *)(param_1 + 0x20c),1,&piStack_1f4);
            pbVar12 = local_1e0;
            iVar4 = local_1e8;
          }
          else {
            iVar4 = *(int *)(param_1 + 0x20c);
            FUN_004520c0(iVar4,1,&piStack_1f4,param_1 + 0x204,local_1ec);
            *(int *)(param_1 + 0x20c) = iVar4 + 4;
            pbVar12 = local_1e0;
            iVar4 = local_1e8;
          }
        }
        iStack_214 = iStack_214 + 1;
        pvVar5 = local_220;
      } while (iStack_214 < iStack_21c);
    }
    FUN_0040efb0(iVar4);
    operator_delete__(pvVar5);
    FUN_00535fc0();
    FUN_005323b0();
    pbVar1 = local_1dc;
    local_4 = 0xffffffff;
    this = pbVar12;
    if (pbVar12 !=
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      for (; this != pbVar1; this = this + 0x1c) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(pbVar12);
    }
    uVar2 = 1;
  }
  ExceptionList = local_c;
  return uVar2;
}




/* Function: FUN_00536950 */

void __thiscall FUN_00536950(int *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  if (param_3[1] == 1) {
    if (*param_3 == param_1[0x65]) {
      if (0 < param_1[0x60]) {
        param_1[0x60] = param_1[0x60] + -1;
      }
      FUN_00532270();
    }
    if ((param_3[1] == 1) && (*param_3 == param_1[0x66])) {
      iVar2 = param_1[0x5d];
      if ((iVar2 != 0) && (4 < (uint)(param_1[0x5e] - iVar2 >> 2))) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = param_1[0x5e] - iVar2 >> 2;
        }
        if ((uint)param_1[0x60] < iVar2 - 4U) {
          param_1[0x60] = param_1[0x60] + 1;
        }
      }
      FUN_00532270();
    }
  }
  iVar2 = 0;
  piVar3 = param_1 + 0x61;
  do {
    if ((((param_3[1] == 1) && (*param_3 == *piVar3)) && (param_1[0x67] != 0)) &&
       (*(char *)(*piVar3 + 0x35) != '\0')) {
      cVar1 = FUN_005364d0(*(undefined4 *)(param_1[0x5d] + (param_1[0x60] + iVar2) * 4));
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x20))(param_2);
        (**(code **)(*(int *)param_1[0x67] + 0x28))(param_2);
      }
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 4);
  FUN_0045bcc0(param_2,param_3);
  return;
}




/* Function: FUN_00536a60 */

void FUN_00536a60(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041ce80();
  if (param_1 == 0x6b) {
    FUN_00535840(uVar1);
    FUN_00535fc0();
    return;
  }
  if (param_1 == 0x6d) {
    FUN_00535a80(uVar1);
    FUN_00535fc0();
    return;
  }
  if (param_1 == 0x20) {
    FUN_00531550(uVar1);
    FUN_00535fc0();
  }
  return;
}




/* Function: FUN_00536b00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00536b00(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  char cVar4;
  SHORT SVar5;
  float *pfVar6;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  bVar3 = false;
  if ((*(float *)(param_1 + 0x23c) < _DAT_00583354) || (SVar5 = GetKeyState(0x26), SVar5 < 0)) {
    pfVar6 = &local_18;
    pfVar1 = (float *)(param_1 + 0x248);
    pfVar2 = (float *)(param_1 + 0x254);
    FUN_0041d580(&local_c,pfVar2,pfVar1,pfVar6);
    FUN_0041d510(pfVar6);
    local_14 = 0;
    FUN_0041d4b0();
    FUN_0041d5b0(&local_c,&local_18,0x42340000);
    FUN_0041d550(&local_18,pfVar1,&local_c);
    cVar4 = FUN_00531630(&local_18);
    if (cVar4 != '\0') {
      if (&local_18 != pfVar1) {
        *pfVar1 = local_18;
        *(undefined4 *)(param_1 + 0x24c) = local_14;
        *(float *)(param_1 + 0x250) = local_10;
      }
      bVar3 = true;
      *pfVar2 = local_c + *pfVar2;
      *(float *)(param_1 + 600) = local_8 + *(float *)(param_1 + 600);
      *(float *)(param_1 + 0x25c) = local_4 + *(float *)(param_1 + 0x25c);
    }
  }
  SVar5 = GetKeyState(0x28);
  if (SVar5 < 0) {
    pfVar6 = &local_c;
    pfVar1 = (float *)(param_1 + 0x248);
    pfVar2 = (float *)(param_1 + 0x254);
    FUN_0041d580(&local_18,pfVar2,pfVar1,pfVar6);
    FUN_0041d510(pfVar6);
    local_8 = 0.0;
    FUN_0041d4b0();
    local_18 = -local_c;
    local_10 = -local_4;
    local_14 = 0;
    FUN_0041d5b0(&local_c,&local_18,0x42340000);
    FUN_0041d550(&local_18,pfVar1,&local_c);
    cVar4 = FUN_00531630(&local_18);
    if (cVar4 != '\0') {
      if (&local_18 != pfVar1) {
        *pfVar1 = local_18;
        *(undefined4 *)(param_1 + 0x24c) = local_14;
        *(float *)(param_1 + 0x250) = local_10;
      }
      bVar3 = true;
      *pfVar2 = local_c + *pfVar2;
      *(float *)(param_1 + 600) = local_8 + *(float *)(param_1 + 600);
      *(float *)(param_1 + 0x25c) = local_4 + *(float *)(param_1 + 0x25c);
    }
  }
  SVar5 = GetKeyState(0x21);
  if (SVar5 < 0) {
    bVar3 = true;
    *(float *)(param_1 + 0x24c) = *(float *)(param_1 + 0x24c) + _DAT_00591d40;
    *(float *)(param_1 + 600) = *(float *)(param_1 + 600) + _DAT_00591d40;
  }
  SVar5 = GetKeyState(0x22);
  if ((-1 < SVar5) || (*(float *)(param_1 + 0x24c) - _DAT_00591d40 < _DAT_0059290c)) {
    if (!bVar3) {
      return;
    }
  }
  else {
    *(float *)(param_1 + 0x24c) = *(float *)(param_1 + 0x24c) - _DAT_00591d40;
    *(float *)(param_1 + 600) = *(float *)(param_1 + 600) - _DAT_00591d40;
  }
  FUN_005323b0();
  FUN_00535fc0();
  return;
}




/* Function: FUN_00536de0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00536de0(int param_1,undefined4 param_2,char *param_3)

{
  float *pfVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  size_t _MaxCount;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  double dVar11;
  int *local_5b4;
  int local_5b0;
  int local_5ac;
  float local_5a8;
  int iStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  int local_588;
  undefined4 uStack_584;
  int local_580;
  int local_57c;
  float local_578;
  undefined4 local_574;
  undefined1 auStack_570 [64];
  undefined1 auStack_530 [12];
  float afStack_524 [3];
  undefined1 auStack_518 [12];
  char local_50c [256];
  char local_40c [256];
  undefined1 local_30c [256];
  undefined1 local_20c;
  undefined1 local_10c [256];
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0058004b;
  local_c = ExceptionList;
  if (param_3 != (char *)0x0) {
    local_50c[0] = '\0';
    local_40c[0] = '\0';
    local_10c[0] = 0;
    local_30c[0] = 0;
    local_20c = 0;
    pcVar6 = param_3;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    _MaxCount = (int)pcVar6 - (int)(param_3 + 1);
    if (0xfe < (int)_MaxCount) {
      _MaxCount = 0xfe;
    }
    ExceptionList = &local_c;
    _snscanf(param_3,_MaxCount,"%s %s %s %s %s",local_50c,local_40c,local_10c,local_30c);
    iVar7 = _stricmp(local_50c,"Save");
    if (iVar7 == 0) {
      FUN_005341f0();
    }
    else {
      iVar7 = _stricmp(local_50c,"Load");
      if (iVar7 == 0) {
        FUN_005364d0();
        FUN_0041c940();
        FUN_0042a4f0();
      }
      else {
        iVar7 = _stricmp(local_50c,"Finalize");
        if (iVar7 == 0) {
          FUN_0041cae0();
          iVar7 = FUN_0042dbb0();
          puVar9 = *(undefined4 **)(param_1 + 0x208);
          if (puVar9 != *(undefined4 **)(param_1 + 0x20c)) {
            do {
              uVar3 = *puVar9;
              if (iVar7 != 0) {
                FUN_00412e58(iVar7,"tile_Finalize");
                local_588 = FUN_0044ab40(uVar3);
                uStack_584 = 0;
                FUN_00412cfc(iVar7);
                FUN_00412798(iVar7,1,0);
              }
              puVar9 = puVar9 + 1;
            } while (puVar9 != *(undefined4 **)(param_1 + 0x20c));
          }
        }
        else {
          iVar7 = _stricmp(local_50c,"Fill");
          if (iVar7 == 0) {
            local_574 = **(undefined4 **)(**(int **)(param_1 + 0x1f8) + 0x84);
            iVar7 = FUN_00539ab0();
            local_588 = iVar7;
            local_580 = FUN_0041cda0();
            dVar11 = atof(local_40c);
            local_5a8 = (float)dVar11;
            local_5ac = 0;
            if (0 < iVar7) {
              do {
                local_5b0 = 0;
                if (0 < local_580) {
                  local_5b4 = (int *)(local_5ac + 2);
                  local_57c = local_5ac + 4;
                  local_578 = (float)(int)local_5b4;
                  do {
                    if (local_5ac < local_57c) {
                      iVar7 = local_5b0 + 4;
                      iVar4 = local_5b0;
                      iVar5 = local_5b0;
                      iVar10 = local_5ac;
                      do {
                        for (; iVar4 < iVar7; iVar4 = iVar4 + 1) {
                          (**(code **)(**(int **)(param_1 + 0x1e0) + 0x94))(iVar10,iVar4);
                          (**(code **)(**(int **)(param_1 + 0x1e0) + 0x9c))(iVar10,iVar4,1);
                          iVar5 = local_5b0;
                        }
                        iVar10 = iVar10 + 1;
                        iVar4 = iVar5;
                      } while (iVar10 < local_57c);
                    }
                    piVar8 = (int *)FUN_00531ab0(param_2,local_574);
                    local_5b4 = piVar8;
                    _eh_vector_constructor_iterator_
                              (auStack_570,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150)
                    ;
                    FUN_00407310();
                    uStack_4 = 0;
                    iStack_5a4 = rand();
                    iStack_5a4 = iStack_5a4 % 3;
                    FUN_005475f4();
                    iVar7 = local_5b0;
                    pfVar1 = (float *)(param_1 + 0x1d0);
                    iStack_5a4 = local_5b0 + 2;
                    if (afStack_524 != pfVar1) {
                      *pfVar1 = local_578 * *(float *)(param_1 + 0x1f0);
                      *(float *)(param_1 + 0x1d8) = (float)iStack_5a4 * *(float *)(param_1 + 0x1f0);
                      *(float *)(param_1 + 0x1d4) = local_5a8;
                    }
                    FUN_00545c38();
                    FUN_004ffac0();
                    puVar9 = (undefined4 *)FUN_0043f930();
                    uStack_594 = *puVar9;
                    uStack_590 = puVar9[1];
                    uStack_58c = puVar9[2];
                    FUN_004ffac0();
                    puVar9 = (undefined4 *)FUN_0043f940();
                    uStack_5a0 = *puVar9;
                    uStack_59c = puVar9[1];
                    uStack_598 = puVar9[2];
                    puVar9 = (undefined4 *)FUN_00548704(auStack_530,auStack_570);
                    if (puVar9 != &uStack_594) {
                      uStack_594 = *puVar9;
                      uStack_590 = puVar9[1];
                      uStack_58c = puVar9[2];
                    }
                    puVar9 = (undefined4 *)FUN_00548704(auStack_518,auStack_570);
                    if (puVar9 != &uStack_5a0) {
                      uStack_5a0 = *puVar9;
                      uStack_59c = puVar9[1];
                      uStack_598 = puVar9[2];
                    }
                    FUN_00531b90(&uStack_594,&uStack_5a0);
                    FUN_00531c20(piVar8,pfVar1,&uStack_594,&uStack_5a0);
                    *(float *)(param_1 + 0x1d4) = local_5a8;
                    FUN_00545c38();
                    (**(code **)(*piVar8 + 0x8c))();
                    iVar4 = *(int *)(param_1 + 0x208);
                    if ((iVar4 == 0) ||
                       ((uint)(*(int *)(param_1 + 0x210) - iVar4 >> 2) <=
                        (uint)(*(int *)(param_1 + 0x20c) - iVar4 >> 2))) {
                      FUN_00532b00(*(undefined4 *)(param_1 + 0x20c),1,&local_5b4);
                    }
                    else {
                      iVar4 = *(int *)(param_1 + 0x20c);
                      FUN_004520c0(iVar4,1,&local_5b4,param_1 + 0x204);
                      *(int *)(param_1 + 0x20c) = iVar4 + 4;
                    }
                    uStack_4 = 0xffffffff;
                    _eh_vector_destructor_iterator_(auStack_570,0x10,4,FUN_00407150);
                    local_5b0 = iVar7 + 4;
                    iVar7 = local_588;
                  } while (local_5b0 < local_580);
                }
                local_5ac = local_5ac + 4;
              } while (local_5ac < iVar7);
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_005372f0 */

void __thiscall FUN_005372f0(int param_1,undefined4 param_2)

{
  FUN_00536b00(param_2);
  FUN_005316b0(param_2);
  FUN_0041e610(param_1 + 0x248,param_1 + 0x254,0);
  return;
}




/* Function: FUN_00537330 */

void __thiscall FUN_00537330(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x35) != '\0') {
    cVar1 = FUN_00532380();
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(param_1 + 0x218) + 8))(0);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x218) + 8))(1);
    }
    FUN_005372f0(param_2);
  }
  FUN_0045d010(param_2);
  return;
}




/* Function: FUN_00537390 */

int __fastcall FUN_00537390(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 1;
}




/* Function: FUN_005373b0 */

int __fastcall FUN_005373b0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
}




/* Function: FUN_005373d0 */

int __fastcall FUN_005373d0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x14;
}




/* Function: FUN_00537400 */

undefined4 __fastcall FUN_00537400(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xb4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xb8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  return 1;
}




/* Function: FUN_00537440 */

void FUN_00537440(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00580072;
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




/* Function: FUN_005374c0 */

void FUN_005374c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 5;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 5; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}




/* Function: FUN_005374f0 */

void FUN_005374f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    param_3 = param_3 + -5;
    param_4 = param_4 + -5;
    puVar2 = param_3;
    puVar3 = param_4;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  } while (param_3 != param_2);
  *param_1 = param_4;
  return;
}




/* Function: FUN_00537530 */

void FUN_00537530(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  while (puVar2 = param_4, puVar1 = param_3, param_2 != puVar1) {
    param_3 = puVar1 + -4;
    param_4 = puVar2 + -4;
    if (param_3 != param_4) {
      *param_4 = *param_3;
      puVar2[-3] = puVar1[-3];
      puVar2[-2] = puVar1[-2];
      puVar2[-1] = puVar1[-1];
    }
  }
  *param_1 = puVar2;
  return;
}




/* Function: FUN_00537580 */

void FUN_00537580(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}




/* Function: FUN_005375a0 */

void FUN_005375a0(undefined4 *param_1,int param_2,int param_3,undefined2 *param_4)

{
  for (; param_2 != param_3; param_3 = param_3 + -2) {
    param_4 = param_4 + -1;
    *param_4 = *(undefined2 *)(param_3 + -2);
  }
  *param_1 = param_4;
  return;
}




/* Function: FUN_005375d0 */

undefined4 FUN_005375d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_005374f0(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00537610 */

void FUN_00537610(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_3 != param_1) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
    }
  }
  return;
}




/* Function: FUN_00537650 */

undefined4 FUN_00537650(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00537530(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00537690 */

void FUN_00537690(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}




/* Function: FUN_005376c0 */

void FUN_005376c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 5;
  }
  return;
}




/* Function: FUN_005376f0 */

void FUN_005376f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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




/* Function: FUN_00537b30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00537b30(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iStack00000008;
  float *pfVar8;
  int local_5c;
  float fStack_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined1 local_44 [12];
  undefined1 auStack_38 [12];
  undefined1 local_2c [8];
  undefined1 auStack_24 [36];
  
  pfVar8 = &local_50;
  FUN_0041cb30(pfVar8);
  FUN_004fc1b0(pfVar8);
  local_50 = local_50 * _DAT_00588d8c;
  local_4c = local_4c * _DAT_00588d8c;
  local_48 = local_48 * _DAT_00588d8c;
  if (*(int *)(param_1 + 0x98) == 0) {
    local_5c = 0;
  }
  else {
    local_5c = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 4;
  }
  fStack_58 = 0.0;
  uVar3 = FUN_004cf110();
  if (*(int *)(param_1 + 0x98) == 0) {
    local_5c = 0;
  }
  else {
    local_5c = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 4;
  }
  fStack_58 = 0.0;
  uVar4 = FUN_004cf110();
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 4;
  }
  if (iVar5 - 1U < uVar3) {
    if (*(int *)(param_1 + 0x98) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 4;
    }
    uVar3 = iVar5 - 1;
  }
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 4;
  }
  if (iVar5 - 1U < uVar4) {
    if (*(int *)(param_1 + 0x98) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 4;
    }
    uVar4 = iVar5 - 1;
  }
  uVar7 = uVar3;
  if ((int)uVar4 < (int)uVar3) {
    uVar7 = uVar4;
    uVar4 = uVar3;
  }
  FUN_0041d7e0();
  if ((int)uVar7 <= (int)uVar4) {
    iVar5 = uVar7 << 4;
    iStack00000008 = (uVar4 - uVar7) + 1;
    do {
      local_5c = *(int *)(iVar5 + *(int *)(param_1 + 0x98));
      iVar1 = iVar5 + *(int *)(param_1 + 0x98);
      fStack_58 = *(float *)(iVar1 + 4) + _DAT_00587fa8;
      local_54 = *(undefined4 *)(iVar1 + 8);
      FUN_0041d550(local_44,&local_5c,&local_50);
      cVar2 = (**(code **)(*param_2 + 0x38))(local_2c,&local_5c,local_44);
      if (cVar2 != '\0') {
        FUN_0041d580(auStack_38,&local_5c,auStack_24);
        iVar6 = FUN_004cf110();
        iVar6 = 0x7f - iVar6;
        iVar1 = iVar5 + *(int *)(param_1 + 0x98);
        *(uint *)(iVar1 + 0xc) =
             (((int)((uint)*(byte *)(iVar5 + 0xe + *(int *)(param_1 + 0x98)) + iVar6) / 2 & 0xffU |
              (int)((uint)*(byte *)(iVar1 + 0xf) + iVar6) / 2 << 8) << 8 |
             (int)((uint)*(byte *)(iVar1 + 0xd) + iVar6) / 2 & 0xffU) << 8 |
             (int)((*(uint *)(iVar1 + 0xc) & 0xff) + iVar6) / 2 & 0xffU;
      }
      iVar5 = iVar5 + 0x10;
      iStack00000008 = iStack00000008 + -1;
    } while (iStack00000008 != 0);
  }
  return;
}




/* Function: FUN_00537dd0 */

void FUN_00537dd0(undefined2 *param_1,int param_2,undefined2 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}




/* Function: FUN_00537e00 */

void FUN_00537e00(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = param_3;
      puVar3 = param_1;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = param_1 + 5;
  }
  return;
}




/* Function: FUN_00537e30 */

void FUN_00537e30(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
    }
    param_1 = param_1 + 4;
  }
  return;
}




/* Function: FUN_00538670 */

void __thiscall
FUN_00538670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00537690(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_005386a0 */

void __thiscall
FUN_005386a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_005376c0(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_005386d0 */

void __thiscall
FUN_005386d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_005376f0(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00538700 */

int __thiscall FUN_00538700(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00537dd0(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 2;
}




/* Function: FUN_00538730 */

int __thiscall FUN_00538730(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00537e00(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0x14;
}




/* Function: FUN_00538760 */

int __thiscall FUN_00538760(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00537e30(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x10 + param_2;
}




/* Function: FUN_00538790 */

void __thiscall FUN_00538790(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_00580080;
  local_10 = ExceptionList;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - iVar3 >> 1;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 1;
    }
    if (0x7fffffffU - iVar5 < param_3) {
      ExceptionList = &local_10;
      FUN_00537440();
      ExceptionList = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 1;
    }
    if (uVar2 < iVar5 + param_3) {
      if (0x7fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar3 >> 1;
      }
      if (uVar2 < iVar5 + param_3) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) - iVar3 >> 1;
        }
        uVar2 = iVar3 + param_3;
      }
      ExceptionList = &local_10;
      iVar3 = FUN_00493c27();
      local_8 = 0;
      uVar4 = FUN_00537690(*(undefined4 *)(param_1 + 4));
      FUN_00537dd0(uVar4);
      FUN_00537690(param_2);
      pvVar1 = *(void **)(param_1 + 4);
      if (pvVar1 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - (int)pvVar1 >> 1;
      }
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      *(uint *)(param_1 + 8) = iVar3 + (param_3 + iVar5) * 2;
      *(uint *)(param_1 + 0xc) = uVar2 * 2 + iVar3;
      *(int *)(param_1 + 4) = iVar3;
      ExceptionList = local_10;
      return;
    }
    if ((uint)(*(int *)(param_1 + 8) - param_2 >> 1) < param_3) {
      ExceptionList = &local_10;
      FUN_00538670();
      local_8 = 2;
      FUN_00538700();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 2;
    }
    else {
      ExceptionList = &local_10;
      uVar4 = FUN_00538670();
      *(undefined4 *)(param_1 + 8) = uVar4;
      FUN_005375a0();
    }
    FUN_00537580();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00538a20 */

void __thiscall
FUN_00538a20(undefined4 *param_1,undefined4 **param_2,undefined1 *param_3,undefined4 **param_4)

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
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 local_28 [5];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_3;
  puVar2 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00580090;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  puVar8 = param_4;
  puVar9 = local_28;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar5 = param_1[1];
  if (iVar5 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = (undefined1 *)((param_1[3] - iVar5) / 0x14);
  }
  if (param_3 != (undefined1 *)0x0) {
    if (iVar5 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (param_1[2] - iVar5) / 0x14;
    }
    if ((undefined1 *)(0xcccccccU - iVar7) < param_3) {
      ExceptionList = &local_10;
      FUN_00537440();
      ExceptionList = local_10;
      return;
    }
    if (iVar5 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (param_1[2] - iVar5) / 0x14;
    }
    if (puVar6 < param_3 + iVar7) {
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
      if (puVar6 < param_3 + iVar5) {
        ExceptionList = &local_10;
        iVar5 = FUN_005373d0();
        puVar6 = puVar3 + iVar5;
      }
      local_3c = (undefined4 *)0x538b39;
      param_4 = (undefined4 **)FUN_00493c27();
      local_8 = 0;
      local_40 = param_4;
      local_3c = param_1;
      param_3 = (undefined1 *)FUN_005376c0(param_1[1],param_2);
      local_40 = local_28;
      local_3c = param_1;
      FUN_00537e00(param_3,puVar3);
      local_40 = (undefined4 *)((int)param_3 + (int)puVar3 * 0x14);
      local_3c = param_1;
      FUN_005376c0(param_2,param_1[2]);
      pvVar1 = (void *)param_1[1];
      if (pvVar1 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (param_1[2] - (int)pvVar1) / 0x14;
      }
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        local_3c = (undefined4 *)&UNK_00538bce;
        operator_delete(pvVar1);
      }
      param_1[1] = param_4;
      param_1[3] = param_4 + (int)puVar6 * 5;
      param_1[2] = param_4 + (int)(puVar3 + iVar5) * 5;
      ExceptionList = local_10;
      return;
    }
    param_4 = (undefined4 **)param_1[2];
    local_3c = param_4;
    if ((undefined1 *)(((int)param_4 - (int)param_2) / 0x14) < param_3) {
      local_40 = param_2;
      ExceptionList = &local_10;
      param_2 = (undefined4 **)((int)param_3 * 0x14);
      param_4 = &local_40;
      FUN_005386a0();
      local_40 = (undefined4 *)param_1[2];
      local_8 = 2;
      local_3c = (undefined4 *)(puVar3 + -(((int)local_40 - (int)puVar2) / 0x14));
      FUN_00538730();
      iVar5 = param_1[2];
      param_1[2] = iVar5 + (int)param_2;
      local_3c = (undefined4 *)((iVar5 + (int)param_2) - (int)param_2);
    }
    else {
      param_2 = param_4 + (int)param_3 * -5;
      ExceptionList = &local_10;
      local_40 = param_2;
      uVar4 = FUN_005386a0();
      param_3 = &stack0xffffffc8;
      param_1[2] = uVar4;
      param_4 = &local_3c;
      local_3c = param_2;
      local_40 = puVar2;
      param_2 = &local_40;
      FUN_005375d0(&param_2);
      local_3c = puVar2 + (int)puVar3 * 5;
    }
    param_2 = &local_40;
    local_40 = puVar2;
    FUN_005374c0();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00538d20 */

void __thiscall FUN_00538d20(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005800a0;
  local_10 = ExceptionList;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(param_1 + 0xc) - iVar3 >> 4;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar3 >> 4;
    }
    if (0xfffffffU - iVar2 < param_3) {
      ExceptionList = &local_10;
      FUN_00537440();
      ExceptionList = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar3 >> 4;
    }
    if (uVar5 < iVar2 + param_3) {
      if (0xfffffff - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 8) - iVar3 >> 4;
      }
      if (uVar5 < iVar2 + param_3) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) - iVar3 >> 4;
        }
        uVar5 = iVar3 + param_3;
      }
      ExceptionList = &local_10;
      iVar2 = FUN_00493c27();
      local_8 = 0;
      uVar1 = FUN_005376f0(*(undefined4 *)(param_1 + 4));
      FUN_00537e30(uVar1);
      FUN_005376f0(param_2);
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 8) - iVar3 >> 4;
      }
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0xc) = uVar5 * 0x10 + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x10 + iVar2;
        *(int *)(param_1 + 4) = iVar2;
        ExceptionList = local_10;
        return;
      }
      for (; iVar3 != *(int *)(param_1 + 8); iVar3 = iVar3 + 0x10) {
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)(param_1 + 4));
    }
    if ((uint)(*(int *)(param_1 + 8) - param_2 >> 4) < param_3) {
      ExceptionList = &local_10;
      FUN_005386d0();
      local_8 = 2;
      FUN_00538760();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
    }
    else {
      ExceptionList = &local_10;
      uVar1 = FUN_005386d0();
      *(undefined4 *)(param_1 + 8) = uVar1;
      FUN_00537650();
    }
    FUN_00537610();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00538ff0 */

void __thiscall FUN_00538ff0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x14 != 0) {
      iVar1 = (param_3 - iVar1) / 0x14;
      goto LAB_00539037;
    }
  }
  iVar1 = 0;
LAB_00539037:
  FUN_00538a20(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x14;
  return;
}




/* Function: FUN_00539060 */

void __thiscall FUN_00539060(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_005800b0;
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
      FUN_00537440();
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




/* Function: FUN_00539300 */

void __thiscall FUN_00539300(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x14) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x14))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00537e00(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x14;
    return;
  }
  FUN_00538ff0(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_00539390 */

void __thiscall FUN_00539390(int param_1,uint param_2)

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
    FUN_00539060(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 2))) {
    FUN_00409930(&param_2,*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_00539410 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00539410(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int extraout_EDX;
  int extraout_EDX_00;
  void *pvVar8;
  uint uVar9;
  undefined4 *puVar10;
  byte *local_90;
  uint local_8c;
  ushort *local_88;
  undefined4 uStack_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  int *local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_4c;
  void *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005800d9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_004ffac0();
  iVar2 = FUN_0043f8c0();
  local_4c = FUN_0043f8a0();
  pcVar3 = (char *)FUN_0043f8d0();
  local_34 = (void *)0x0;
  local_30 = 0;
  local_2c = 0;
  local_4 = 0;
  uVar4 = FUN_0043f8e0();
  FUN_00539390(uVar4,0);
  uVar9 = 0;
  iVar5 = FUN_0043f8e0();
  if (iVar5 != 0) {
    do {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &local_68,pcVar3);
      FUN_00408950(&local_28,&local_68);
      local_4._0_1_ = 1;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &local_68);
      puVar10 = &local_28;
      FUN_0041ce80(puVar10);
      uVar4 = FUN_00422480(puVar10);
      local_4 = (uint)local_4._1_3_ << 8;
      *(undefined4 *)((int)local_34 + uVar9 * 4) = uVar4;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &local_28);
      uVar9 = uVar9 + 1;
      pcVar3 = pcVar3 + 0x50;
      uVar6 = FUN_0043f8e0();
    } while (uVar9 < uVar6);
  }
  local_44 = (void *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar4 = FUN_0043f890();
  FUN_004fdd50(uVar4,0);
  uVar9 = 0;
  iVar5 = FUN_0043f890();
  if (iVar5 != 0) {
    do {
      *(undefined4 *)((int)local_44 + uVar9 * 4) = 0xffffffff;
      uVar9 = uVar9 + 1;
      uVar6 = FUN_0043f890();
    } while (uVar9 < uVar6);
  }
  local_68 = param_2;
  local_60 = 0;
  if (*(int *)(local_7c + 0x98) == 0) {
    local_5c = 0;
  }
  else {
    local_5c = *(int *)(local_7c + 0x9c) - *(int *)(local_7c + 0x98) >> 4;
  }
  if (*(int *)(local_7c + 0xa8) == 0) {
    local_64 = 0;
  }
  else {
    local_64 = *(int *)(local_7c + 0xac) - *(int *)(local_7c + 0xa8) >> 1;
  }
  local_58 = 0;
  local_8c = 0;
  iVar5 = FUN_0043f8b0();
  if (iVar5 != 0) {
    local_90 = (byte *)(iVar2 + 0x28);
    do {
      iVar2 = *(int *)((int)local_34 + (uint)*local_90 * 4);
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0xb9) != '\0')) {
        local_88 = (ushort *)(local_90 + -0x24);
        local_78 = 3;
        do {
          pvVar8 = local_44;
          uVar7 = (undefined2)((uint)iVar2 >> 0x10);
          uVar9 = (uint)*local_88;
          if (*(int *)((int)local_44 + uVar9 * 4) == -1) {
            local_74 = *(undefined4 *)(local_4c + uVar9 * 0xc);
            iVar2 = local_4c + uVar9 * 0xc;
            local_70 = *(float *)(iVar2 + 4);
            local_6c = *(undefined4 *)(iVar2 + 8);
            uVar4 = (**(code **)(*param_2 + 0x88))();
            FUN_00548748(uVar4);
            fStack_24 = local_70 + _DAT_00583354;
            local_28 = local_74;
            iVar2 = *(int *)(local_7c + 0x98);
            uStack_1c = 0xffffffff;
            uStack_20 = local_6c;
            if ((iVar2 == 0) ||
               ((uint)(*(int *)(local_7c + 0xa0) - iVar2 >> 4) <=
                (uint)(*(int *)(local_7c + 0x9c) - iVar2 >> 4))) {
              FUN_00538d20(*(undefined4 *)(local_7c + 0x9c),1,&local_28);
              uVar7 = extraout_var_00;
            }
            else {
              iVar2 = *(int *)(local_7c + 0x9c);
              FUN_00537e30(iVar2,1,&local_28,local_7c + 0x94,uVar1);
              *(int *)(local_7c + 0x9c) = iVar2 + 0x10;
              pvVar8 = local_44;
              uVar7 = extraout_var;
            }
            if (*(int *)(local_7c + 0x98) == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(local_7c + 0x9c) - *(int *)(local_7c + 0x98) >> 4;
            }
            *(int *)((int)pvVar8 + uVar9 * 4) = iVar2 + -1;
            local_60 = local_60 + 1;
          }
          iVar2 = *(int *)(local_7c + 0xa8);
          uStack_80 = CONCAT22(uVar7,*(undefined2 *)((int)pvVar8 + uVar9 * 4));
          if ((iVar2 == 0) ||
             ((uint)(*(int *)(local_7c + 0xb0) - iVar2 >> 1) <=
              (uint)(*(int *)(local_7c + 0xac) - iVar2 >> 1))) {
            FUN_00538790(*(undefined4 *)(local_7c + 0xac),1,&uStack_80);
            iVar2 = extraout_EDX_00;
          }
          else {
            iVar2 = *(int *)(local_7c + 0xac);
            FUN_00537dd0(iVar2,1,&uStack_80,local_7c + 0xa4,uVar1);
            *(int *)(local_7c + 0xac) = iVar2 + 2;
            iVar2 = extraout_EDX;
          }
          local_88 = local_88 + -1;
          local_78 = local_78 + -1;
        } while (local_78 != 0);
        local_58 = local_58 + 1;
        local_78 = 0;
      }
      local_90 = local_90 + 0x2c;
      local_8c = local_8c + 1;
      uVar9 = FUN_0043f8b0();
    } while (local_8c < uVar9);
    if (local_58 != 0) {
      FUN_00539300(&local_68);
    }
  }
  if (local_44 == (void *)0x0) {
    if (local_34 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_34);
    }
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_44);
}




/* Function: FUN_005398c0 */

undefined4 * __fastcall FUN_005398c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00580114;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00592a18;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00539940 */

void __fastcall FUN_00539940(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_00592a18;
  piVar1 = (int *)param_1[0x2e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x2e] = 0;
  }
  piVar1 = (int *)param_1[0x2d];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x2d] = 0;
  }
  if ((void *)param_1[0x2a] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x2a]);
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
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
  *param_1 = &PTR_LAB_00583740;
  FUN_004f79d0();
  FUN_0040cf00();
                    /* WARNING: Could not recover jumptable at 0x00539a02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4));
  return;
}




/* Function: FUN_00539a10 */

void * __thiscall FUN_00539a10(void *param_1,byte param_2)

{
  FUN_00539940();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00539a30 */

undefined4 __fastcall FUN_00539a30(int param_1)

{
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  return 1;
}




/* Function: FUN_00539a50 */

float10 __thiscall FUN_00539a50(int param_1,int param_2,int param_3)

{
  return (float10)*(float *)(*(int *)(*(int *)(param_1 + 0x98) + param_3 * 4) + param_2 * 4);
}




/* Function: FUN_00539a70 */

undefined4 __thiscall FUN_00539a70(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xa4) + param_3 * 4) + param_2 * 4);
}




/* Function: FUN_00539a90 */

void __thiscall FUN_00539a90(int param_1,int param_2,int param_3,undefined4 param_4)

{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xa4) + param_3 * 4) + param_2 * 4) = param_4;
  return;
}




/* Function: FUN_00539ab0 */

undefined4 __fastcall FUN_00539ab0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}




/* Function: FUN_00539ac0 */

float10 __fastcall FUN_00539ac0(int param_1)

{
  return (float10)*(float *)(param_1 + 0xa0);
}




/* Function: FUN_00539ad0 */

int __fastcall FUN_00539ad0(int param_1)

{
  return param_1 + 0x84;
}




/* Function: FUN_00539b70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00539b70(int param_1,uint param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  float local_c [3];
  
  fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0x98) + param_3 * 4) + param_2 * 4);
  fVar5 = (float)param_2;
  iVar9 = param_2 * 0x60;
  pfVar10 = (float *)(*(int *)(*(int *)(param_1 + 0xf0) + param_3 * 4) + iVar9);
  fVar2 = *(float *)(param_1 + 0x88);
  fVar6 = (float)param_3;
  fVar3 = *(float *)(param_1 + 0xa0);
  fVar4 = *(float *)(param_1 + 0x8c);
  if (local_c != pfVar10) {
    *pfVar10 = fVar5 * *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x84);
    pfVar10[1] = fVar1 + fVar2;
    pfVar10[2] = fVar6 * fVar3 + fVar4;
  }
  fVar2 = *(float *)(param_1 + 0x88);
  fVar7 = (float)(param_3 + 1);
  pfVar10 = (float *)(*(int *)(*(int *)(param_1 + 0xf0) + param_3 * 4) + 0xc + iVar9);
  fVar3 = *(float *)(param_1 + 0xa0);
  fVar4 = *(float *)(param_1 + 0x8c);
  if (local_c != pfVar10) {
    *pfVar10 = fVar5 * *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x84);
    pfVar10[1] = fVar1 + fVar2;
    pfVar10[2] = fVar7 * fVar3 + fVar4;
  }
  fVar8 = (float)(param_2 + 1);
  pfVar10 = (float *)(*(int *)(*(int *)(param_1 + 0xf0) + param_3 * 4) + 0x18 + iVar9);
  fVar2 = *(float *)(param_1 + 0x88);
  fVar3 = *(float *)(param_1 + 0xa0);
  fVar4 = *(float *)(param_1 + 0x8c);
  if (local_c != pfVar10) {
    *pfVar10 = fVar8 * *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x84);
    pfVar10[1] = fVar1 + fVar2;
    pfVar10[2] = fVar7 * fVar3 + fVar4;
  }
  fVar2 = *(float *)(param_1 + 0x88);
  fVar3 = *(float *)(param_1 + 0xa0);
  pfVar10 = (float *)(*(int *)(*(int *)(param_1 + 0xf0) + param_3 * 4) + 0x24 + iVar9);
  fVar4 = *(float *)(param_1 + 0x8c);
  if (local_c != pfVar10) {
    *pfVar10 = fVar8 * *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x84);
    pfVar10[1] = fVar1 + fVar2;
    pfVar10[2] = fVar6 * fVar3 + fVar4;
  }
  fVar4 = (fVar1 + *(float *)(param_1 + 0x88)) - _DAT_0058a9e0;
  pfVar10 = (float *)(*(int *)(*(int *)(param_1 + 0xf0) + param_3 * 4) + 0x30 + iVar9);
  fVar2 = *(float *)(param_1 + 0xa0);
  fVar3 = *(float *)(param_1 + 0x8c);
  if (local_c != pfVar10) {
    *pfVar10 = fVar5 * *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x84);
    pfVar10[1] = fVar4;
    pfVar10[2] = fVar6 * fVar2 + fVar3;
  }
  fVar4 = (fVar1 + *(float *)(param_1 + 0x88)) - _DAT_0058a9e0;
  pfVar10 = (float *)(*(int *)(*(int *)(param_1 + 0xf0) + param_3 * 4) + 0x3c + iVar9);
  fVar2 = *(float *)(param_1 + 0xa0);
  fVar3 = *(float *)(param_1 + 0x8c);
  if (local_c != pfVar10) {
    *pfVar10 = fVar5 * *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x84);
    pfVar10[1] = fVar4;
    pfVar10[2] = fVar7 * fVar2 + fVar3;
  }
  fVar4 = (fVar1 + *(float *)(param_1 + 0x88)) - _DAT_0058a9e0;
  pfVar10 = (float *)(*(int *)(*(int *)(param_1 + 0xf0) + param_3 * 4) + 0x48 + iVar9);
  fVar2 = *(float *)(param_1 + 0xa0);
  fVar3 = *(float *)(param_1 + 0x8c);
  if (local_c != pfVar10) {
    *pfVar10 = fVar8 * *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x84);
    pfVar10[1] = fVar4;
    pfVar10[2] = fVar7 * fVar2 + fVar3;
  }
  fVar3 = (fVar1 + *(float *)(param_1 + 0x88)) - _DAT_0058a9e0;
  fVar1 = *(float *)(param_1 + 0xa0);
  fVar2 = *(float *)(param_1 + 0x8c);
  pfVar10 = (float *)(*(int *)(*(int *)(param_1 + 0xf0) + param_3 * 4) + 0x54 + iVar9);
  if (local_c == pfVar10) {
    return;
  }
  *pfVar10 = fVar8 * *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x84);
  pfVar10[1] = fVar3;
  pfVar10[2] = fVar6 * fVar1 + fVar2;
  return;
}




/* Function: FUN_00539ec0 */

void __thiscall FUN_00539ec0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x98) + param_3 * 4) + param_2 * 4) = param_4;
  FUN_00539b70(param_2,param_3);
  return;
}




/* Function: FUN_00539ef0 */

float10 __thiscall FUN_00539ef0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*param_1 + 0x88))(param_2,param_3);
  return fVar1 + (float10)(float)param_1[0x22];
}




/* Function: FUN_00539f20 */

void __thiscall FUN_00539f20(int *param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  (**(code **)(*param_1 + 0x8c))(param_2,param_3,param_4 - (float)param_1[0x22]);
  FUN_00539b70(param_2,param_3);
  return;
}




/* Function: FUN_0053a000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0053a000(int param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int *piVar9;
  float fVar10;
  int **ppiVar11;
  float fStack_ac;
  int *piStack_a8;
  float fStack_a4;
  int *piStack_a0;
  int iStack_9c;
  float fStack_98;
  int *piStack_94;
  float local_90;
  float fStack_8c;
  int *piStack_88;
  float fStack_84;
  int *piStack_80;
  int local_7c;
  int *piStack_78;
  undefined4 uStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  int *local_68;
  undefined4 uStack_64;
  int local_58;
  uint local_54;
  int *piStack_50;
  undefined4 uStack_4c;
  
  local_58 = param_1;
  uVar2 = FUN_00407f80(0x3f800000);
  FUN_0041e330(0,uVar2);
  FUN_00407300();
  FUN_0041da10(param_2);
  local_90 = (float)FUN_0041cb90();
  local_54 = (uint)local_90 & 2;
  local_7c = 0;
  if ((local_54 != 0) && (cVar1 = FUN_0041cb70(), cVar1 != '\0')) {
    (**(code **)(*param_2 + 200))(param_2,0x89,1);
    (**(code **)(*param_2 + 0xb8))(param_2,0,1);
  }
  ppiVar11 = &local_68;
  FUN_0041e470(1);
  FUN_0054778c(ppiVar11);
  if (*(int *)(param_1 + 0xe0) != 0) {
    if (((uint)local_90 & 1) != 0) {
      if (*(int *)(param_1 + 0xe8) != 0) {
        (**(code **)(*param_2 + 0xa8))(param_2,*(int *)(param_1 + 0xe8));
        if (*(float *)(*(int *)(param_1 + 0xe8) + 0x40) <= _DAT_00582ad8) {
          (**(code **)(*param_2 + 200))(param_2,0x1d,0);
          (**(code **)(*param_2 + 200))(param_2,0x8e,0);
        }
        else {
          (**(code **)(*param_2 + 200))(param_2,0x1d,1);
          (**(code **)(*param_2 + 200))(param_2,0x8e,1);
        }
        (**(code **)(*param_2 + 0xfc))
                  (param_2,0,0x14,*(undefined4 *)(*(int *)(param_1 + 0xe8) + 0xb0));
      }
      piStack_88 = DAT_005b5f28;
      (**(code **)(*param_2 + 0xfc))(param_2,0,0x13,DAT_005b5f28);
      (**(code **)(*param_2 + 0xfc))(param_2,0,0x12,2);
      (**(code **)(*param_2 + 0xfc))(param_2,0,1,4);
      (**(code **)(*param_2 + 0xfc))(param_2,0,2,2);
      (**(code **)(*param_2 + 0xfc))(param_2,0,3,1);
      (**(code **)(*param_2 + 0xfc))(param_2,0,4,4);
      (**(code **)(*param_2 + 0xfc))(param_2,0,5,2);
      (**(code **)(*param_2 + 0xfc))(param_2,0,6,1);
      (**(code **)(*param_2 + 0xfc))(param_2,1,1,1);
      (**(code **)(*param_2 + 0xfc))(param_2,1,4,1);
      if (*(int *)(param_1 + 0xe0) == 0) {
        (**(code **)(*param_2 + 0xf4))(param_2,0,0);
      }
      else {
        (**(code **)(*(int *)(param_1 + 0xe0) + 4))(param_2);
      }
      (**(code **)(*param_2 + 0xf4))(param_2,1,0);
    }
    piVar5 = *(int **)(param_3 + 0x2cc);
    piStack_a8 = piVar5;
    (**(code **)(*param_2 + 0x130))(param_2,*(undefined4 *)piVar5[10]);
    (**(code **)(*param_2 + 0x14c))(param_2,0,*piVar5,0x20);
    piVar9 = (int *)0x0;
    piStack_88 = (int *)(((uint)piVar5[9] / 3) * 3);
    fStack_ac = 0.0;
    iVar3 = FUN_0043f970(piStack_88,&fStack_ac);
    piVar5 = (int *)0x0;
    if (*(int *)(param_1 + 0x94) != 0) {
      do {
        uStack_4c = 0;
        uStack_74 = 0;
        iStack_9c = *(int *)(*(int *)(param_1 + 0x98) + (int)piVar5 * 4);
        piStack_94 = (int *)((int)piVar5 + 1);
        fStack_98 = (float)piVar5 * *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x8c);
        fStack_84 = (float)piStack_94 * *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x8c);
        piVar6 = (int *)0x0;
        piStack_78 = piStack_94;
        piStack_50 = piVar5;
        if (*(int *)(param_1 + 0x90) != 0) {
          do {
            uStack_6c = 0;
            uStack_64 = 0;
            fStack_a4 = *(float *)(iStack_9c + (int)piVar6 * 4) + *(float *)(param_1 + 0x88);
            piStack_a0 = (int *)((int)piVar6 + 1);
            puVar7 = (undefined4 *)((int)piVar9 * 0x20 + iVar3);
            piStack_80 = (int *)((float)piVar6 * *(float *)(param_1 + 0xa0) +
                                *(float *)(param_1 + 0x84));
            fStack_8c = (float)piStack_a0 * *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x84);
            *puVar7 = piStack_80;
            puVar7[1] = fStack_a4;
            puVar7[2] = fStack_98;
            puVar7[3] = 0;
            puVar7[4] = 0x3f800000;
            puVar7[5] = 0;
            puVar7[6] = 0;
            puVar7[7] = 0x3f800000;
            puVar7 = (undefined4 *)(((int)piVar9 + 1) * 0x20 + iVar3);
            *puVar7 = piStack_80;
            puVar7[1] = fStack_a4;
            puVar7[2] = fStack_84;
            puVar7[3] = 0;
            puVar7[4] = 0x3f800000;
            puVar7[5] = 0;
            puVar7[6] = 0;
            puVar7[7] = 0;
            pfVar8 = (float *)(((int)piVar9 + 2) * 0x20 + iVar3);
            piVar9 = (int *)((int)piVar9 + 3);
            *pfVar8 = fStack_8c;
            pfVar8[1] = fStack_a4;
            pfVar8[2] = fStack_98;
            pfVar8[3] = 0.0;
            pfVar8[4] = 1.0;
            pfVar8[5] = 0.0;
            pfVar8[6] = 1.0;
            pfVar8[7] = 1.0;
            piStack_70 = piVar6;
            local_68 = piStack_a0;
            if (piStack_88 <= piVar9) {
              if (((char)piStack_a8[2] != '\0') &&
                 (piVar5 = (int *)*piStack_a8, piVar5 != (int *)0x0)) {
                (**(code **)(*piVar5 + 0x30))(piVar5);
                *(undefined1 *)(piStack_a8 + 2) = 0;
              }
              (**(code **)(*param_2 + 0x118))(param_2,4,fStack_ac,(uint)piVar9 / 3);
              local_7c = local_7c + (uint)piVar9 / 3;
              piVar9 = (int *)0x0;
              iVar3 = FUN_0043f970(piStack_88,&fStack_ac);
            }
            puVar7 = (undefined4 *)((int)piVar9 * 0x20 + iVar3);
            *puVar7 = piStack_80;
            puVar7[1] = fStack_a4;
            puVar7[2] = fStack_84;
            puVar7[3] = 0;
            puVar7[4] = 0x3f800000;
            puVar7[5] = 0;
            puVar7[6] = 0;
            puVar7[7] = 0;
            pfVar8 = (float *)(((int)piVar9 + 1) * 0x20 + iVar3);
            *pfVar8 = fStack_8c;
            pfVar8[1] = fStack_a4;
            pfVar8[2] = fStack_84;
            pfVar8[3] = 0.0;
            pfVar8[4] = 1.0;
            pfVar8[5] = 0.0;
            pfVar8[6] = 1.0;
            pfVar8[7] = 0.0;
            pfVar8 = (float *)(((int)piVar9 + 2) * 0x20 + iVar3);
            piVar9 = (int *)((int)piVar9 + 3);
            *pfVar8 = fStack_8c;
            pfVar8[1] = fStack_a4;
            pfVar8[2] = fStack_98;
            pfVar8[3] = 0.0;
            pfVar8[4] = 1.0;
            pfVar8[5] = 0.0;
            pfVar8[6] = 1.0;
            pfVar8[7] = 1.0;
            if (piStack_88 <= piVar9) {
              if (((char)piStack_a8[2] != '\0') &&
                 (piVar5 = (int *)*piStack_a8, piVar5 != (int *)0x0)) {
                (**(code **)(*piVar5 + 0x30))(piVar5);
                *(undefined1 *)(piStack_a8 + 2) = 0;
              }
              (**(code **)(*param_2 + 0x118))(param_2,4,fStack_ac,(uint)piVar9 / 3);
              local_7c = local_7c + (uint)piVar9 / 3;
              piVar9 = (int *)0x0;
              iVar3 = FUN_0043f970(piStack_88,&fStack_ac);
            }
            piVar6 = piStack_a0;
          } while (piStack_a0 < *(int **)(param_1 + 0x90));
        }
        piVar5 = piStack_94;
      } while (piStack_94 < *(int **)(param_1 + 0x94));
    }
    if (iVar3 != 0) {
      if (((char)piStack_a8[2] != '\0') && (piVar5 = (int *)*piStack_a8, piVar5 != (int *)0x0)) {
        (**(code **)(*piVar5 + 0x30))(piVar5);
        *(undefined1 *)(piStack_a8 + 2) = 0;
      }
      (**(code **)(*param_2 + 0x118))(param_2,4,fStack_ac,(uint)piVar9 / 3);
      local_7c = local_7c + (uint)piVar9 / 3;
    }
  }
  if (*(int *)(param_1 + 0xe4) != 0) {
    if (((uint)local_90 & 1) != 0) {
      if (*(int *)(param_1 + 0xec) != 0) {
        (**(code **)(*param_2 + 0xa8))(param_2,*(int *)(param_1 + 0xec));
        if (*(float *)(*(int *)(param_1 + 0xec) + 0x40) <= _DAT_00582ad8) {
          (**(code **)(*param_2 + 200))(param_2,0x1d,0);
          (**(code **)(*param_2 + 200))(param_2,0x8e,0);
        }
        else {
          (**(code **)(*param_2 + 200))(param_2,0x1d,1);
          (**(code **)(*param_2 + 200))(param_2,0x8e,1);
        }
        (**(code **)(*param_2 + 0xfc))
                  (param_2,0,0x14,*(undefined4 *)(*(int *)(param_1 + 0xec) + 0xb0));
      }
      piStack_94 = DAT_005b5f28;
      (**(code **)(*param_2 + 0xfc))(param_2,0,0x13,DAT_005b5f28);
      (**(code **)(*param_2 + 0xfc))(param_2,0,0x12,2);
      (**(code **)(*param_2 + 0xfc))(param_2,0,1,4);
      (**(code **)(*param_2 + 0xfc))(param_2,0,2,2);
      (**(code **)(*param_2 + 0xfc))(param_2,0,3,1);
      (**(code **)(*param_2 + 0xfc))(param_2,0,4,4);
      (**(code **)(*param_2 + 0xfc))(param_2,0,5,2);
      (**(code **)(*param_2 + 0xfc))(param_2,0,6,1);
      (**(code **)(*param_2 + 0xfc))(param_2,1,1,1);
      (**(code **)(*param_2 + 0xfc))(param_2,1,4,1);
      if (*(int *)(param_1 + 0xe4) == 0) {
        (**(code **)(*param_2 + 0xf4))(param_2,0,0);
      }
      else {
        (**(code **)(*(int *)(param_1 + 0xe4) + 4))(param_2);
      }
      (**(code **)(*param_2 + 0xf4))(param_2,1,0);
    }
    piVar5 = *(int **)(param_3 + 0x2cc);
    piStack_a0 = piVar5;
    (**(code **)(*param_2 + 0x130))(param_2,*(undefined4 *)piVar5[10]);
    (**(code **)(*param_2 + 0x14c))(param_2,0,*piVar5,0x20);
    fVar10 = 0.0;
    fStack_98 = (float)(((uint)piVar5[9] / 3) * 3);
    iStack_9c = 0;
    iVar3 = FUN_0043f970(fStack_98,&iStack_9c);
    uVar4 = 0;
    if (*(int *)(param_1 + 0x90) != 0) {
      do {
        uVar4 = uVar4 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x9c) + -4 + uVar4 * 4) = 0;
      } while (uVar4 < *(uint *)(param_1 + 0x90));
    }
    piStack_80 = (int *)0x0;
    if (*(int *)(param_1 + 0x94) != -1) {
      do {
        uStack_64 = 0;
        piStack_88 = (int *)0x0;
        fStack_ac = (float)piStack_80 * *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x8c);
        local_68 = piStack_80;
        if (*(int *)(param_1 + 0x90) != 0) {
          do {
            piStack_a8 = (int *)(*(float *)(*(int *)(param_1 + 0x9c) + (int)piStack_88 * 4) +
                                *(float *)(param_1 + 0x88));
            if (piStack_80 < *(int **)(param_1 + 0x94)) {
              fStack_a4 = *(float *)(*(int *)(*(int *)(param_1 + 0x98) + (int)piStack_80 * 4) +
                                    (int)piStack_88 * 4) + *(float *)(param_1 + 0x88);
            }
            else {
              fStack_a4 = *(float *)(param_1 + 0x88);
            }
            if ((float)piStack_a8 != fStack_a4) {
              uStack_6c = 0;
              piStack_78 = (int *)((int)piStack_88 + 1);
              uStack_74 = 0;
              fStack_84 = (float)piStack_88 * *(float *)(param_1 + 0xa0) +
                          *(float *)(param_1 + 0x84);
              fStack_8c = (float)piStack_78 * *(float *)(param_1 + 0xa0) +
                          *(float *)(param_1 + 0x84);
              piStack_70 = piStack_88;
              if (fStack_a4 <= (float)piStack_a8) {
                local_90 = (float)piStack_a8 - fStack_a4;
                pfVar8 = (float *)((int)fVar10 * 0x20 + iVar3);
                *pfVar8 = fStack_84;
                pfVar8[1] = fStack_a4;
                pfVar8[2] = fStack_ac;
                pfVar8[3] = 0.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 1.0;
                pfVar8[6] = 0.0;
                pfVar8[7] = local_90 / *(float *)(param_1 + 0xa0);
                pfVar8 = (float *)(((int)fVar10 + 1) * 0x20 + iVar3);
                *pfVar8 = fStack_8c;
                pfVar8[1] = fStack_a4;
                pfVar8[2] = fStack_ac;
                pfVar8[3] = 0.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 1.0;
                pfVar8[6] = 1.0;
                pfVar8[7] = local_90 / *(float *)(param_1 + 0xa0);
                pfVar8 = (float *)(((int)fVar10 + 2) * 0x20 + iVar3);
                fVar10 = (float)((int)fVar10 + 3);
                *pfVar8 = fStack_84;
                pfVar8[1] = (float)piStack_a8;
                pfVar8[2] = fStack_ac;
                pfVar8[3] = 0.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 1.0;
                pfVar8[6] = 0.0;
                pfVar8[7] = 0.0;
                if ((uint)fStack_98 <= (uint)fVar10) {
                  if (((char)piStack_a0[2] != '\0') &&
                     (piVar5 = (int *)*piStack_a0, piVar5 != (int *)0x0)) {
                    (**(code **)(*piVar5 + 0x30))(piVar5);
                    *(undefined1 *)(piStack_a0 + 2) = 0;
                  }
                  piStack_94 = (int *)*param_2;
                  (*(code *)piStack_94[0x46])(param_2,4,iStack_9c,(uint)fVar10 / 3);
                  fVar10 = 0.0;
                  iVar3 = FUN_0043f970(fStack_98,&iStack_9c);
                }
                pfVar8 = (float *)((int)fVar10 * 0x20 + iVar3);
                *pfVar8 = fStack_8c;
                pfVar8[1] = fStack_a4;
                pfVar8[2] = fStack_ac;
                pfVar8[3] = 0.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 1.0;
                pfVar8[6] = 1.0;
                pfVar8[7] = local_90 / *(float *)(param_1 + 0xa0);
                pfVar8 = (float *)(((int)fVar10 + 1) * 0x20 + iVar3);
                *pfVar8 = fStack_8c;
                pfVar8[1] = (float)piStack_a8;
                pfVar8[2] = fStack_ac;
                pfVar8[3] = 0.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 1.0;
                pfVar8[6] = 1.0;
                pfVar8[7] = 0.0;
                pfVar8 = (float *)(((int)fVar10 + 2) * 0x20 + iVar3);
                fVar10 = (float)((int)fVar10 + 3);
                *pfVar8 = fStack_84;
                pfVar8[1] = (float)piStack_a8;
                pfVar8[2] = fStack_ac;
                pfVar8[3] = 0.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 1.0;
                pfVar8[6] = 0.0;
                pfVar8[7] = 0.0;
                if ((uint)fStack_98 <= (uint)fVar10) {
                  if (((char)piStack_a0[2] != '\0') &&
                     (piVar5 = (int *)*piStack_a0, piVar5 != (int *)0x0)) {
                    (**(code **)(*piVar5 + 0x30))(piVar5);
                    *(undefined1 *)(piStack_a0 + 2) = 0;
                  }
                  piStack_94 = (int *)*param_2;
                  goto LAB_0053abdc;
                }
              }
              else {
                local_90 = fStack_a4 - (float)piStack_a8;
                pfVar8 = (float *)((int)fVar10 * 0x20 + iVar3);
                *pfVar8 = fStack_84;
                pfVar8[1] = (float)piStack_a8;
                pfVar8[2] = fStack_ac;
                pfVar8[3] = 0.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = -1.0;
                pfVar8[6] = 0.0;
                pfVar8[7] = local_90 / *(float *)(param_1 + 0xa0);
                pfVar8 = (float *)(((int)fVar10 + 1) * 0x20 + iVar3);
                *pfVar8 = fStack_84;
                pfVar8[1] = fStack_a4;
                pfVar8[2] = fStack_ac;
                pfVar8[3] = 0.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = -1.0;
                pfVar8[6] = 0.0;
                pfVar8[7] = 0.0;
                pfVar8 = (float *)(((int)fVar10 + 2) * 0x20 + iVar3);
                fVar10 = (float)((int)fVar10 + 3);
                *pfVar8 = fStack_8c;
                pfVar8[1] = (float)piStack_a8;
                pfVar8[2] = fStack_ac;
                pfVar8[3] = 0.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = -1.0;
                pfVar8[6] = 1.0;
                pfVar8[7] = local_90 / *(float *)(param_1 + 0xa0);
                if ((uint)fStack_98 <= (uint)fVar10) {
                  if (((char)piStack_a0[2] != '\0') &&
                     (piVar5 = (int *)*piStack_a0, piVar5 != (int *)0x0)) {
                    (**(code **)(*piVar5 + 0x30))(piVar5);
                    *(undefined1 *)(piStack_a0 + 2) = 0;
                  }
                  piStack_94 = (int *)*param_2;
                  (*(code *)piStack_94[0x46])(param_2,4,iStack_9c,(uint)fVar10 / 3);
                  fVar10 = 0.0;
                  iVar3 = FUN_0043f970(fStack_98,&iStack_9c);
                }
                pfVar8 = (float *)((int)fVar10 * 0x20 + iVar3);
                *pfVar8 = fStack_8c;
                pfVar8[1] = (float)piStack_a8;
                pfVar8[2] = fStack_ac;
                pfVar8[3] = 0.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = -1.0;
                pfVar8[6] = 1.0;
                pfVar8[7] = local_90 / *(float *)(param_1 + 0xa0);
                pfVar8 = (float *)(((int)fVar10 + 1) * 0x20 + iVar3);
                *pfVar8 = fStack_84;
                pfVar8[1] = fStack_a4;
                pfVar8[2] = fStack_ac;
                pfVar8[3] = 0.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = -1.0;
                pfVar8[6] = 0.0;
                pfVar8[7] = 0.0;
                pfVar8 = (float *)(((int)fVar10 + 2) * 0x20 + iVar3);
                fVar10 = (float)((int)fVar10 + 3);
                *pfVar8 = fStack_8c;
                pfVar8[1] = fStack_a4;
                pfVar8[2] = fStack_ac;
                pfVar8[3] = 0.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = -1.0;
                pfVar8[6] = 1.0;
                pfVar8[7] = 0.0;
                if ((uint)fStack_98 <= (uint)fVar10) {
                  if (((char)piStack_a0[2] != '\0') &&
                     (piVar5 = (int *)*piStack_a0, piVar5 != (int *)0x0)) {
                    (**(code **)(*piVar5 + 0x30))(piVar5);
                    *(undefined1 *)(piStack_a0 + 2) = 0;
                  }
                  piStack_94 = (int *)*param_2;
LAB_0053abdc:
                  (*(code *)piStack_94[0x46])(param_2,4,iStack_9c,(uint)fVar10 / 3);
                  fVar10 = 0.0;
                  iVar3 = FUN_0043f970(fStack_98,&iStack_9c);
                }
              }
              if (piStack_80 < *(int **)(param_1 + 0x94)) {
                *(undefined4 *)(*(int *)(param_1 + 0x9c) + (int)piStack_88 * 4) =
                     *(undefined4 *)
                      (*(int *)(*(int *)(param_1 + 0x98) + (int)piStack_80 * 4) +
                      (int)piStack_88 * 4);
                param_1 = local_58;
              }
            }
            piStack_88 = (int *)((int)piStack_88 + 1);
          } while (piStack_88 < *(int **)(param_1 + 0x90));
        }
        piStack_80 = (int *)((int)piStack_80 + 1);
      } while (piStack_80 < (int *)(*(int *)(param_1 + 0x94) + 1));
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x94) != 0) {
      do {
        uVar4 = uVar4 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x9c) + -4 + uVar4 * 4) = 0;
      } while (uVar4 < *(uint *)(param_1 + 0x94));
    }
    piStack_80 = (int *)0x0;
    if (*(int *)(param_1 + 0x90) != -1) {
      do {
        uStack_64 = 0;
        piStack_88 = (int *)0x0;
        fStack_ac = (float)piStack_80 * *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x84);
        local_68 = piStack_80;
        if (*(int *)(param_1 + 0x94) != 0) {
          do {
            piStack_a8 = (int *)(*(float *)(*(int *)(param_1 + 0x9c) + (int)piStack_88 * 4) +
                                *(float *)(param_1 + 0x88));
            if (piStack_80 < *(int **)(param_1 + 0x90)) {
              fStack_a4 = *(float *)(*(int *)(*(int *)(param_1 + 0x98) + (int)piStack_88 * 4) +
                                    (int)piStack_80 * 4) + *(float *)(param_1 + 0x88);
            }
            else {
              fStack_a4 = *(float *)(param_1 + 0x88);
            }
            if ((float)piStack_a8 != fStack_a4) {
              uStack_6c = 0;
              piStack_78 = (int *)((int)piStack_88 + 1);
              uStack_74 = 0;
              fStack_84 = (float)piStack_88 * *(float *)(param_1 + 0xa0) +
                          *(float *)(param_1 + 0x8c);
              fStack_8c = (float)piStack_78 * *(float *)(param_1 + 0xa0) +
                          *(float *)(param_1 + 0x8c);
              piStack_70 = piStack_88;
              if (fStack_a4 <= (float)piStack_a8) {
                local_90 = (float)piStack_a8 - fStack_a4;
                pfVar8 = (float *)((int)fVar10 * 0x20 + iVar3);
                *pfVar8 = fStack_ac;
                pfVar8[1] = fStack_a4;
                pfVar8[2] = fStack_84;
                pfVar8[3] = 1.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 0.0;
                pfVar8[6] = 0.0;
                pfVar8[7] = local_90 / *(float *)(param_1 + 0xa0);
                pfVar8 = (float *)(((int)fVar10 + 1) * 0x20 + iVar3);
                *pfVar8 = fStack_ac;
                pfVar8[1] = (float)piStack_a8;
                pfVar8[2] = fStack_84;
                pfVar8[3] = 1.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 0.0;
                pfVar8[6] = 0.0;
                pfVar8[7] = 0.0;
                pfVar8 = (float *)(((int)fVar10 + 2) * 0x20 + iVar3);
                fVar10 = (float)((int)fVar10 + 3);
                *pfVar8 = fStack_ac;
                pfVar8[1] = fStack_a4;
                pfVar8[2] = fStack_8c;
                pfVar8[3] = 1.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 0.0;
                pfVar8[6] = 1.0;
                pfVar8[7] = local_90 / *(float *)(param_1 + 0xa0);
                if ((uint)fStack_98 <= (uint)fVar10) {
                  if (((char)piStack_a0[2] != '\0') &&
                     (piVar5 = (int *)*piStack_a0, piVar5 != (int *)0x0)) {
                    (**(code **)(*piVar5 + 0x30))(piVar5);
                    *(undefined1 *)(piStack_a0 + 2) = 0;
                  }
                  piStack_94 = (int *)*param_2;
                  (*(code *)piStack_94[0x46])(param_2,4,iStack_9c,(uint)fVar10 / 3);
                  fVar10 = 0.0;
                  iVar3 = FUN_0043f970(fStack_98,&iStack_9c);
                }
                pfVar8 = (float *)((int)fVar10 * 0x20 + iVar3);
                *pfVar8 = fStack_ac;
                pfVar8[1] = fStack_a4;
                pfVar8[2] = fStack_8c;
                pfVar8[3] = 1.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 0.0;
                pfVar8[6] = 1.0;
                pfVar8[7] = local_90 / *(float *)(param_1 + 0xa0);
                pfVar8 = (float *)(((int)fVar10 + 1) * 0x20 + iVar3);
                *pfVar8 = fStack_ac;
                pfVar8[1] = (float)piStack_a8;
                pfVar8[2] = fStack_84;
                pfVar8[3] = 1.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 0.0;
                pfVar8[6] = 0.0;
                pfVar8[7] = 0.0;
                pfVar8 = (float *)(((int)fVar10 + 2) * 0x20 + iVar3);
                fVar10 = (float)((int)fVar10 + 3);
                *pfVar8 = fStack_ac;
                pfVar8[1] = (float)piStack_a8;
                pfVar8[2] = fStack_8c;
                pfVar8[3] = 1.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 0.0;
                pfVar8[6] = 1.0;
                pfVar8[7] = 0.0;
                if ((uint)fStack_98 <= (uint)fVar10) {
                  if (((char)piStack_a0[2] != '\0') &&
                     (piVar5 = (int *)*piStack_a0, piVar5 != (int *)0x0)) {
                    (**(code **)(*piVar5 + 0x30))(piVar5);
                    *(undefined1 *)(piStack_a0 + 2) = 0;
                  }
                  piStack_94 = (int *)*param_2;
                  goto LAB_0053b135;
                }
              }
              else {
                local_90 = fStack_a4 - (float)piStack_a8;
                pfVar8 = (float *)((int)fVar10 * 0x20 + iVar3);
                *pfVar8 = fStack_ac;
                pfVar8[1] = (float)piStack_a8;
                pfVar8[2] = fStack_84;
                pfVar8[3] = -1.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 0.0;
                pfVar8[6] = 0.0;
                pfVar8[7] = local_90 / *(float *)(param_1 + 0xa0);
                pfVar8 = (float *)(((int)fVar10 + 1) * 0x20 + iVar3);
                *pfVar8 = fStack_ac;
                pfVar8[1] = (float)piStack_a8;
                pfVar8[2] = fStack_8c;
                pfVar8[3] = -1.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 0.0;
                pfVar8[6] = 1.0;
                pfVar8[7] = local_90 / *(float *)(param_1 + 0xa0);
                pfVar8 = (float *)(((int)fVar10 + 2) * 0x20 + iVar3);
                fVar10 = (float)((int)fVar10 + 3);
                *pfVar8 = fStack_ac;
                pfVar8[1] = fStack_a4;
                pfVar8[2] = fStack_84;
                pfVar8[3] = -1.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 0.0;
                pfVar8[6] = 0.0;
                pfVar8[7] = 0.0;
                if ((uint)fStack_98 <= (uint)fVar10) {
                  if (((char)piStack_a0[2] != '\0') &&
                     (piVar5 = (int *)*piStack_a0, piVar5 != (int *)0x0)) {
                    (**(code **)(*piVar5 + 0x30))(piVar5);
                    *(undefined1 *)(piStack_a0 + 2) = 0;
                  }
                  piStack_94 = (int *)*param_2;
                  (*(code *)piStack_94[0x46])(param_2,4,iStack_9c,(uint)fVar10 / 3);
                  fVar10 = 0.0;
                  iVar3 = FUN_0043f970(fStack_98,&iStack_9c);
                }
                pfVar8 = (float *)((int)fVar10 * 0x20 + iVar3);
                *pfVar8 = fStack_ac;
                pfVar8[1] = (float)piStack_a8;
                pfVar8[2] = fStack_8c;
                pfVar8[3] = -1.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 0.0;
                pfVar8[6] = 1.0;
                pfVar8[7] = local_90 / *(float *)(param_1 + 0xa0);
                pfVar8 = (float *)(((int)fVar10 + 1) * 0x20 + iVar3);
                *pfVar8 = fStack_ac;
                pfVar8[1] = fStack_a4;
                pfVar8[2] = fStack_8c;
                pfVar8[3] = -1.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 0.0;
                pfVar8[6] = 1.0;
                pfVar8[7] = 0.0;
                pfVar8 = (float *)(((int)fVar10 + 2) * 0x20 + iVar3);
                fVar10 = (float)((int)fVar10 + 3);
                *pfVar8 = fStack_ac;
                pfVar8[1] = fStack_a4;
                pfVar8[2] = fStack_84;
                pfVar8[3] = -1.0;
                pfVar8[4] = 0.0;
                pfVar8[5] = 0.0;
                pfVar8[6] = 0.0;
                pfVar8[7] = 0.0;
                if ((uint)fStack_98 <= (uint)fVar10) {
                  if (((char)piStack_a0[2] != '\0') &&
                     (piVar5 = (int *)*piStack_a0, piVar5 != (int *)0x0)) {
                    (**(code **)(*piVar5 + 0x30))(piVar5);
                    *(undefined1 *)(piStack_a0 + 2) = 0;
                  }
                  piStack_94 = (int *)*param_2;
LAB_0053b135:
                  (*(code *)piStack_94[0x46])(param_2,4,iStack_9c,(uint)fVar10 / 3);
                  fVar10 = 0.0;
                  iVar3 = FUN_0043f970(fStack_98,&iStack_9c);
                }
              }
              if (piStack_80 < *(int **)(param_1 + 0x90)) {
                *(undefined4 *)(*(int *)(param_1 + 0x9c) + (int)piStack_88 * 4) =
                     *(undefined4 *)
                      (*(int *)(*(int *)(param_1 + 0x98) + (int)piStack_88 * 4) +
                      (int)piStack_80 * 4);
                param_1 = local_58;
              }
            }
            piStack_88 = (int *)((int)piStack_88 + 1);
          } while (piStack_88 < *(int **)(param_1 + 0x94));
        }
        piStack_80 = (int *)((int)piStack_80 + 1);
      } while (piStack_80 < (int *)(*(int *)(param_1 + 0x90) + 1));
    }
    if (iVar3 != 0) {
      if (((char)piStack_a0[2] != '\0') && (piVar5 = (int *)*piStack_a0, piVar5 != (int *)0x0)) {
        (**(code **)(*piVar5 + 0x30))(piVar5);
        *(undefined1 *)(piStack_a0 + 2) = 0;
      }
      (**(code **)(*param_2 + 0x118))(param_2,4,iStack_9c,(uint)fVar10 / 3);
    }
  }
  if ((local_54 != 0) && (cVar1 = FUN_0041cb70(), cVar1 != '\0')) {
    (**(code **)(*param_2 + 0xb8))(param_2,0,0);
    (**(code **)(*param_2 + 200))(param_2,0x89,0);
  }
  return local_7c;
}




/* Function: FUN_0053b240 */

void __thiscall FUN_0053b240(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    uVar1 = *(uint *)(param_1 + 0x90);
    do {
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x98) + uVar2 * 4) + uVar3 * 4) = param_2;
          FUN_00539b70(uVar3,uVar2);
          uVar1 = *(uint *)(param_1 + 0x90);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x94));
  }
  return;
}




/* Function: FUN_0053b400 */

void __thiscall FUN_0053b400(int param_1,int param_2,uint param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x94) != 0) {
      do {
        operator_delete__(*(void **)(*(int *)(param_1 + 0x98) + uVar6 * 4));
        *(undefined4 *)(*(int *)(param_1 + 0x98) + uVar6 * 4) = 0;
        operator_delete__(*(void **)(*(int *)(param_1 + 0xa4) + uVar6 * 4));
        *(undefined4 *)(*(int *)(param_1 + 0xa4) + uVar6 * 4) = 0;
        pvVar1 = *(void **)(*(int *)(param_1 + 0xf0) + uVar6 * 4);
        if (pvVar1 != (void *)0x0) {
          _eh_vector_destructor_iterator_(pvVar1,0xc,*(int *)((int)pvVar1 + -4),FUN_00407150);
          operator_delete__((void *)((int)pvVar1 + -4));
        }
        *(undefined4 *)(*(int *)(param_1 + 0xf0) + uVar6 * 4) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x94));
    }
    operator_delete__(*(void **)(param_1 + 0x98));
    *(undefined4 *)(param_1 + 0x98) = 0;
    operator_delete__(*(void **)(param_1 + 0xa4));
    *(undefined4 *)(param_1 + 0xa4) = 0;
    operator_delete__(*(void **)(param_1 + 0xf0));
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  uVar6 = 0;
  operator_delete__(*(void **)(param_1 + 0x9c));
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(int *)(param_1 + 0x90) = param_2;
  *(uint *)(param_1 + 0x94) = param_3;
  if (param_3 != 0) {
    iVar7 = param_3 * 4;
    uVar2 = thunk_FUN_00493c27(iVar7);
    *(undefined4 *)(param_1 + 0x98) = uVar2;
    uVar2 = thunk_FUN_00493c27(iVar7);
    *(undefined4 *)(param_1 + 0xa4) = uVar2;
    uVar2 = thunk_FUN_00493c27(iVar7);
    *(undefined4 *)(param_1 + 0xf0) = uVar2;
    if (*(int *)(param_1 + 0x94) != 0) {
      do {
        uVar2 = thunk_FUN_00493c27(*(int *)(param_1 + 0x90) << 2);
        *(undefined4 *)(*(int *)(param_1 + 0x98) + uVar6 * 4) = uVar2;
        uVar2 = thunk_FUN_00493c27(param_2 * 4);
        *(undefined4 *)(*(int *)(param_1 + 0xa4) + uVar6 * 4) = uVar2;
        iVar7 = *(int *)(param_1 + 0x90) * 8;
        piVar3 = (int *)thunk_FUN_00493c27(*(int *)(param_1 + 0x90) * 0x60 + 4);
        if (piVar3 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = piVar3 + 1;
          *piVar3 = iVar7;
          _eh_vector_constructor_iterator_
                    (piVar4,0xc,iVar7,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
        }
        *(int **)(*(int *)(param_1 + 0xf0) + uVar6 * 4) = piVar4;
        uVar5 = 0;
        if (*(int *)(param_1 + 0x90) != 0) {
          do {
            uVar5 = uVar5 + 1;
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xa4) + uVar6 * 4) + -4 + uVar5 * 4) = 0;
          } while (uVar5 < *(uint *)(param_1 + 0x90));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x94));
    }
    uVar6 = *(uint *)(param_1 + 0x90);
    if (*(uint *)(param_1 + 0x90) < param_3) {
      uVar6 = param_3;
    }
    uVar2 = thunk_FUN_00493c27(uVar6 * 4);
    *(undefined4 *)(param_1 + 0x9c) = uVar2;
  }
  FUN_0053b240(0);
  return;
}




/* Function: FUN_0053b630 */

undefined4 * __thiscall
FUN_0053b630(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_6,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_7)

{
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00592aa0;
  param_1[0x21] = *param_2;
  param_1[0x22] = param_2[1];
  param_1[0x23] = param_2[2];
  param_1[0x24] = param_3;
  param_1[0x25] = param_4;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = param_5;
  param_1[0x29] = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x2a),param_6);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x31),param_7);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x20] = 7;
  FUN_0053b400(param_1[0x24],param_1[0x25]);
  return param_1;
}




/* Function: FUN_0053b700 */

void __fastcall FUN_0053b700(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00592aa0;
  FUN_00539a30();
  FUN_0053b400(0,0);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x31));
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x2a));
  FUN_0040da90();
  return;
}




/* Function: FUN_0053b740 */

undefined4 * __thiscall
FUN_0053b740(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_0053b630(param_2,param_3,param_4,param_5,param_6,param_7);
  *param_1 = &PTR_LAB_00592b40;
  return param_1;
}




/* Function: FUN_0053b780 */

void __fastcall FUN_0053b780(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00592b40;
  FUN_0053b700();
  return;
}




/* Function: FUN_0053b790 */

void * __thiscall FUN_0053b790(void *param_1,byte param_2)

{
  FUN_0053b700();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0053b7b0 */

void * __thiscall FUN_0053b7b0(void *param_1,byte param_2)

{
  FUN_0053b780();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0053b7d0 */

void FUN_0053b7d0(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00580132;
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




/* Function: FUN_0053b850 */

undefined4 * __thiscall FUN_0053b850(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 local_c [12];
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar3 = param_1 + 0x10;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar1 = param_1 + 0x16;
  *puVar3 = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *puVar1 = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x1f] = 0x3dcccccd;
  puVar4 = local_c;
  (**(code **)(*param_2 + 0x88))(puVar4);
  puVar2 = (undefined4 *)FUN_00547a54(puVar4);
  if (puVar2 != puVar3) {
    *puVar3 = *puVar2;
    param_1[0x11] = puVar2[1];
    param_1[0x12] = puVar2[2];
  }
  puVar4 = local_c;
  (**(code **)(*param_2 + 0x88))(puVar4);
  puVar3 = (undefined4 *)FUN_00547ab0(puVar4);
  if (puVar3 != puVar1) {
    *puVar1 = *puVar3;
    param_1[0x17] = puVar3[1];
    param_1[0x18] = puVar3[2];
  }
  param_1[0x20] = param_2;
  return param_1;
}




/* Function: FUN_0053b930 */

void __thiscall FUN_0053b930(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_00580140;
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
      FUN_0053b7d0();
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




/* Function: FUN_0053bbd0 */

void __thiscall FUN_0053bbd0(int param_1,undefined4 param_2)

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
  FUN_0053b930(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_0053bc40 */

void FUN_0053bc40(undefined4 param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  size_t _MaxCount;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  void *pvVar7;
  undefined1 local_529;
  void *pvStack_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  float fStack_514;
  float fStack_510;
  undefined1 local_50c [256];
  char local_40c [256];
  undefined1 local_30c [256];
  undefined1 local_20c [256];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00580165;
  local_c = ExceptionList;
  if ((param_3 != (char *)0x0) && (param_2 == -1)) {
    local_40c[0] = '\0';
    local_50c[0] = 0;
    local_10c[0] = 0;
    local_20c[0] = 0;
    local_30c[0] = 0;
    pcVar2 = param_3;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    _MaxCount = (int)pcVar2 - (int)(param_3 + 1);
    if (0xfe < (int)_MaxCount) {
      _MaxCount = 0xfe;
    }
    ExceptionList = &local_c;
    _snscanf(param_3,_MaxCount,"%s %s %s %s %s",local_40c,local_50c,local_10c,local_20c,local_30c);
    iVar3 = _stricmp(local_40c,"Add");
    if (iVar3 == 0) {
      FUN_0041cae0();
      iVar3 = FUN_0042dbb0();
      if (iVar3 != 0) {
        FUN_00412e58(iVar3,local_50c);
        iVar4 = FUN_00412798(iVar3,0,1);
        if (iVar4 == 0) {
          FUN_00412c00(iVar3,0xffffffff);
          uVar5 = FUN_004cf110();
          FUN_00412950(iVar3,0xfffffffe);
          piVar6 = (int *)FUN_0044ab40(uVar5);
          if ((piVar6 != (int *)0x0) &&
             (iVar3 = (**(code **)(*piVar6 + 0x58))(&local_529), iVar3 != 0)) {
            pvStack_528 = operator_new(0x84,(nothrow_t *)&DAT_005b6164);
            uStack_4 = 0;
            if (pvStack_528 == (void *)0x0) {
              pvVar7 = (void *)0x0;
            }
            else {
              pvVar7 = (void *)FUN_0053b850(iVar3);
            }
            uStack_4 = 0xffffffff;
            pvStack_528 = pvVar7;
            iVar3 = rand();
            fStack_514 = (float)(iVar3 % 0xff + -0x80);
            iVar3 = rand();
            fStack_510 = (float)(iVar3 % 0xff + -0x80);
            iVar3 = rand();
            fStack_51c = fStack_514;
            fStack_524 = (float)(iVar3 % 0xff + -0x80);
            fStack_520 = fStack_510;
            FUN_0041d4b0();
            if (&fStack_524 != (float *)((int)pvVar7 + 0x70)) {
              *(float *)((int)pvVar7 + 0x70) = fStack_524;
              *(float *)((int)pvVar7 + 0x74) = fStack_520;
              *(float *)((int)pvVar7 + 0x78) = fStack_51c;
            }
            FUN_0053bbd0(&pvStack_528);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_0053cd30 */

undefined4 * __fastcall FUN_0053cd30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00580178;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00592c20;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0053cd80 */

void __fastcall FUN_0053cd80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00592c20;
  if ((void *)param_1[0x22] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x22]);
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *param_1 = &PTR_LAB_00583740;
  FUN_004f79d0();
  FUN_0040cf00();
                    /* WARNING: Could not recover jumptable at 0x0053cdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4));
  return;
}




/* Function: FUN_0053cde0 */

void * __thiscall FUN_0053cde0(void *param_1,byte param_2)

{
  FUN_0053cd80();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0053cf20 */

void FUN_0053cf20(void)

{
  int iVar1;
  
  iVar1 = FUN_00493c27(0x94);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}




/* Function: FUN_0053cf40 */

void __thiscall FUN_0053cf40(int param_1,undefined4 *param_2,int *param_3,int *param_4)

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




/* Function: FUN_0053d0b0 */

undefined4 * __fastcall FUN_0053d0b0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00580198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040d9f0();
  local_4 = 0;
  *param_1 = &PTR_LAB_00592ca8;
  uVar1 = FUN_0053cf20();
  param_1[0x22] = uVar1;
  param_1[0x23] = 0;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0053d110 */

void __fastcall FUN_0053d110(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *local_4;
  
  *param_1 = &PTR_LAB_00592ca8;
  puVar1 = (undefined4 *)param_1[0x22];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  local_4 = param_1;
  FUN_0053cf40(&local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_1[0x22]);
}




/* Function: FUN_0053d180 */

void * __thiscall FUN_0053d180(void *param_1,byte param_2)

{
  FUN_0053d110();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0053d260 */

void FUN_0053d260(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005801c2;
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




/* Function: FUN_0053d2e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0053d2e0(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  uint local_7c;
  float *local_78;
  int local_74;
  undefined1 local_70 [12];
  undefined1 local_64 [24];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005801d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_74 = param_1;
  FUN_00407260(param_2);
  iVar5 = 0;
  local_4 = 0;
  local_88 = 0.0;
  local_84 = 0.0;
  local_80 = 0.0;
  FUN_00545c38(&local_88);
  local_7c = 0;
  while ((iVar1 = *(int *)(param_1 + 4), iVar1 != 0 &&
         (local_7c < (uint)(*(int *)(param_1 + 8) - iVar1 >> 4)))) {
    local_8c = *(float *)(iVar5 + 8 + iVar1);
    local_90 = *(float *)(iVar5 + 4 + iVar1);
    local_94 = *(float *)(iVar5 + iVar1);
    local_78 = (float *)(iVar5 + 0xc + iVar1);
    FUN_0041d5b0(&local_88,&local_94,*local_78);
    pfVar3 = (float *)FUN_005488cc(local_70,&local_94,local_4c);
    if (pfVar3 != &local_94) {
      local_94 = *pfVar3;
      local_90 = pfVar3[1];
      local_8c = pfVar3[2];
    }
    fVar2 = SQRT(local_94 * local_94 + local_90 * local_90 + local_8c * local_8c);
    if ((float)_DAT_00587c48 <= fVar2) {
      fVar2 = _DAT_00583354 / fVar2;
      local_94 = local_94 * fVar2;
      local_90 = local_90 * fVar2;
      local_8c = local_8c * fVar2;
    }
    else {
      local_94 = 0.0;
      local_90 = 1.0;
      local_8c = 0.0;
    }
    pfVar3 = (float *)FUN_005488cc(local_64,&local_88,param_2);
    if (pfVar3 != &local_88) {
      local_88 = *pfVar3;
      local_84 = pfVar3[1];
      local_80 = pfVar3[2];
    }
    *(float *)(iVar5 + iVar1) = local_94;
    *(float *)(iVar5 + 4 + iVar1) = local_90;
    *(float *)(iVar5 + 8 + iVar1) = local_8c;
    local_7c = local_7c + 1;
    iVar5 = iVar5 + 0x10;
    *local_78 = local_88 * local_94 + local_84 * local_90 + local_80 * local_8c;
    param_1 = local_74;
  }
  puVar4 = (undefined4 *)FUN_004306e0((undefined4 *)(param_1 + 0x24),param_1 + 0x30,param_2);
  *(undefined4 *)(param_1 + 0x24) = *puVar4;
  *(undefined4 *)(param_1 + 0x28) = puVar4[1];
  *(undefined4 *)(param_1 + 0x2c) = puVar4[2];
  *(undefined4 *)(param_1 + 0x30) = puVar4[3];
  *(undefined4 *)(param_1 + 0x34) = puVar4[4];
  *(undefined4 *)(param_1 + 0x38) = puVar4[5];
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_4c,0x10,4,FUN_00407150);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_0053d530 */

void __thiscall FUN_0053d530(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_005801f0;
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
      FUN_0053d260();
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




/* Function: FUN_0053d7d0 */

int __fastcall FUN_0053d7d0(int param_1)

{
  undefined4 *puVar1;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00580213;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_4 = 1;
  FUN_0052be00();
  local_30 = std::numeric_limits<float>::max();
  local_3c = -local_30;
  local_38 = local_3c;
  local_34 = local_3c;
  local_2c = local_30;
  local_28 = local_30;
  puVar1 = (undefined4 *)FUN_00430480(&local_30,&local_3c);
  *(undefined4 *)(param_1 + 0x24) = *puVar1;
  *(undefined4 *)(param_1 + 0x28) = puVar1[1];
  *(undefined4 *)(param_1 + 0x2c) = puVar1[2];
  *(undefined4 *)(param_1 + 0x30) = puVar1[3];
  *(undefined4 *)(param_1 + 0x34) = puVar1[4];
  *(undefined4 *)(param_1 + 0x38) = puVar1[5];
  *(undefined4 *)(param_1 + 0x20) = 0;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0053d890 */

void __thiscall FUN_0053d890(int param_1,undefined4 param_2)

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
  FUN_0053d530(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_0053d900 */

undefined4 FUN_0053d900(undefined4 *param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = *param_1;
  local_c = param_1[1];
  local_8 = param_1[2];
  local_4 = param_1[3];
  FUN_0048f740(&local_10);
  FUN_00474c10(&stack0x00000008);
  return 1;
}




/* Function: FUN_0053d950 */

undefined4 FUN_0053d950(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_cd;
  void *local_cc;
  int local_c8;
  int local_c4;
  void *local_c0;
  undefined1 local_bc [4];
  void *local_b8;
  int local_b4;
  int local_b0;
  undefined1 local_ac [4];
  void *local_a8;
  int local_a4;
  int local_a0;
  undefined1 local_9c [16];
  int local_8c;
  undefined1 local_88 [12];
  undefined1 local_7c [20];
  int local_68 [23];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0058024b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00410660(param_1,&DAT_00582818);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_c4 = iVar1;
    FUN_0040f000(local_68,1,0x44,iVar1);
    local_c8 = 0;
    if (0 < local_68[0]) {
      do {
        pvVar5 = (void *)0x0;
        local_c0 = operator_new(0x3c,(nothrow_t *)&DAT_005b6164);
        local_4 = 0;
        if (local_c0 == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = (void *)FUN_0053d7d0();
        }
        local_4 = 0xffffffff;
        local_c0 = pvVar3;
        FUN_0040f000(&local_8c,1,0x24,iVar1);
        local_a8 = (void *)0x0;
        local_a4 = 0;
        local_a0 = 0;
        local_b8 = (void *)0x0;
        local_b4 = 0;
        local_b0 = 0;
        local_4 = 2;
        puVar4 = (undefined4 *)FUN_00430480(local_88,local_7c);
        local_cc = (void *)0x0;
        *(undefined4 *)((int)pvVar3 + 0x24) = *puVar4;
        *(undefined4 *)((int)pvVar3 + 0x28) = puVar4[1];
        *(undefined4 *)((int)pvVar3 + 0x2c) = puVar4[2];
        *(undefined4 *)((int)pvVar3 + 0x30) = puVar4[3];
        *(undefined4 *)((int)pvVar3 + 0x34) = puVar4[4];
        *(undefined4 *)((int)pvVar3 + 0x38) = puVar4[5];
        iVar1 = 0;
        if (0 < local_8c) {
          do {
            FUN_0040f000(local_9c,1,0x10,local_c4);
            if ((pvVar5 == (void *)0x0) ||
               ((uint)(local_a0 - (int)pvVar5 >> 4) <= (uint)(iVar1 - (int)pvVar5 >> 4))) {
              FUN_00473ca0(iVar1,1,local_9c);
              pvVar5 = local_a8;
            }
            else {
              FUN_0048f180(iVar1,1,local_9c,local_ac,local_c8);
              local_a4 = iVar1 + 0x10;
            }
            local_cc = (void *)((int)local_cc + 1);
            iVar1 = local_a4;
          } while ((int)local_cc < local_8c);
        }
        local_cc = (void *)0x0;
        iVar6 = 0;
        if (0 < local_8c) {
          do {
            local_cd = 0;
            FUN_0040f000(&local_cd,1,1,local_c4);
            if ((local_b8 == (void *)0x0) ||
               ((uint)(local_b0 - (int)local_b8) <= (uint)(iVar6 - (int)local_b8))) {
              FUN_00473770(iVar6,1,&local_cd);
            }
            else {
              FUN_0046c300(iVar6,1,&local_cd,local_bc,local_c8);
              local_b4 = iVar6 + 1;
            }
            local_cc = (void *)((int)local_cc + 1);
            iVar6 = local_b4;
          } while ((int)local_cc < local_8c);
        }
        local_cc = pvVar5;
        for (uVar7 = 0; (pvVar5 != (void *)0x0 && (uVar7 < (uint)(iVar1 - (int)pvVar5 >> 4)));
            uVar7 = uVar7 + 1) {
          FUN_0053d900(local_cc,*(undefined1 *)((int)local_b8 + uVar7));
          local_cc = (void *)((int)local_cc + 0x10);
        }
        FUN_0053d2e0(param_3);
        iVar1 = *(int *)(param_2 + 4);
        if ((iVar1 == 0) ||
           ((uint)(*(int *)(param_2 + 0xc) - iVar1 >> 2) <=
            (uint)(*(int *)(param_2 + 8) - iVar1 >> 2))) {
          FUN_0053d530(*(undefined4 *)(param_2 + 8),1,&local_c0);
        }
        else {
          iVar1 = *(int *)(param_2 + 8);
          FUN_004520c0(iVar1,1,&local_c0,param_2,local_c8);
          *(int *)(param_2 + 8) = iVar1 + 4;
        }
        if (local_b8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_b8);
        }
        local_b8 = (void *)0x0;
        local_b4 = 0;
        local_b0 = 0;
        local_4 = 0xffffffff;
        if (pvVar5 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(pvVar5);
        }
        local_c8 = local_c8 + 1;
        local_a8 = (void *)0x0;
        local_a4 = 0;
        local_a0 = 0;
        iVar1 = local_c4;
      } while (local_c8 < local_68[0]);
    }
    FUN_0040efb0(iVar1);
    uVar2 = 1;
  }
  ExceptionList = local_c;
  return uVar2;
}




/* Function: FUN_0053dcc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0053dcc0(int *param_1)

{
  float fVar1;
  int *piVar2;
  void **ppvVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  float *pfVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *local_68;
  int *local_64;
  float local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  int local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &DAT_00580268;
  local_c = ExceptionList;
  piVar8 = (int *)param_1[1];
  if (piVar8 != (int *)0x0) {
    local_5c = param_1[2] - (int)piVar8 >> 2;
    if (local_5c != 0) {
      local_18 = (int *)0x0;
      local_14 = (int *)0x0;
      local_10 = 0;
      local_4 = 0;
      ExceptionList = &local_c;
      piVar12 = (int *)0x0;
      ppvVar3 = &local_c;
      piVar11 = (int *)0x0;
      piVar4 = (int *)0x0;
      if (piVar8 != (int *)param_1[2]) {
        do {
          piVar12 = local_14;
          local_64 = piVar8;
          piVar4 = operator_new(0x38,(nothrow_t *)&DAT_005b6164);
          piVar11 = (int *)0x0;
          if (piVar4 != (int *)0x0) {
            piVar4[2] = 0;
            piVar4[3] = 0;
            piVar4[4] = 0;
            piVar4[5] = 0;
            piVar4[6] = 0;
            piVar4[7] = 0;
            piVar4[8] = 0;
            piVar4[9] = 0;
            piVar4[10] = 0;
            *piVar4 = 0;
            piVar4[1] = 0;
            piVar4[0xc] = 0;
            piVar4[0xb] = 0;
            *(undefined1 *)(piVar4 + 0xd) = 1;
            piVar11 = piVar4;
          }
          iVar10 = *piVar8;
          piVar8 = piVar11 + 2;
          piVar11[0xc] = iVar10;
          local_54 = *(int *)(iVar10 + 0x28);
          local_50 = *(int *)(iVar10 + 0x2c);
          if (&local_58 != piVar8) {
            *piVar8 = *(int *)(iVar10 + 0x24);
            piVar11[3] = local_54;
            piVar11[4] = local_50;
          }
          iVar10 = piVar11[0xc];
          piVar4 = piVar11 + 5;
          local_48 = *(int *)(iVar10 + 0x34);
          local_44 = *(int *)(iVar10 + 0x38);
          if (&local_4c != piVar4) {
            *piVar4 = *(int *)(iVar10 + 0x30);
            piVar11[6] = local_48;
            piVar11[7] = local_44;
          }
          local_68 = piVar11;
          uVar5 = FUN_0041d550(local_40,piVar8,piVar4,0x40000000);
          piVar6 = (int *)FUN_0043fa40(local_34,uVar5);
          if (piVar6 != piVar11 + 8) {
            piVar11[8] = *piVar6;
            piVar11[9] = piVar6[1];
            piVar11[10] = piVar6[2];
          }
          pfVar7 = (float *)FUN_0041d580(local_28,piVar8,piVar4);
          piVar11[0xb] = (int)(SQRT(pfVar7[2] * pfVar7[2] +
                                    pfVar7[1] * pfVar7[1] + *pfVar7 * *pfVar7) * _DAT_00583340);
          if ((local_18 == (int *)0x0) ||
             ((uint)(local_10 - (int)local_18 >> 2) <= (uint)((int)piVar12 - (int)local_18 >> 2))) {
            FUN_0053d530(piVar12,1,&local_68);
          }
          else {
            FUN_004520c0(piVar12,1,&local_68,local_1c,param_1);
            local_14 = piVar12 + 1;
          }
          piVar8 = local_64 + 1;
          piVar12 = local_18;
          ppvVar3 = ExceptionList;
          piVar11 = local_14;
          piVar4 = local_18;
        } while (piVar8 != (int *)param_1[2]);
      }
joined_r0x0053dec2:
      do {
        while (ExceptionList = ppvVar3, piVar8 = piVar4, piVar12 == piVar11) {
joined_r0x0053ded8:
          for (; piVar12 = piVar4, ppvVar3 = ExceptionList, piVar8 != piVar11; piVar8 = piVar8 + 1)
          {
            *(undefined1 *)(*piVar8 + 0x34) = 1;
          }
        }
        if (*(char *)(*piVar12 + 0x34) != '\0') {
          piVar6 = (int *)*piVar12;
          if (piVar12 == piVar11) goto joined_r0x0053ded8;
          piVar8 = piVar12 + 1;
          if (piVar8 != piVar11) {
            iVar10 = (int)piVar12 - (int)piVar8;
            do {
              *(int *)((int)piVar8 + iVar10) = *piVar8;
              piVar8 = piVar8 + 1;
            } while (piVar8 != piVar11);
          }
          piVar8 = piVar11 + -1;
          if (piVar4 == (int *)0x0) {
            ExceptionList = local_c;
            return (int)piVar6;
          }
          local_5c = (int)piVar8 - (int)piVar4 >> 2;
          local_64 = piVar6;
          local_14 = piVar8;
          if (local_5c == 0) {
            if (piVar4 == (int *)0x0) {
              ExceptionList = local_c;
              return (int)piVar6;
            }
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar4);
          }
          local_68 = piVar8;
          local_60 = std::numeric_limits<float>::max();
          piVar2 = piVar4;
          param_1 = piVar4;
          piVar12 = piVar4;
          if (piVar4 != piVar8) {
            do {
              param_1 = piVar4;
              if (*(char *)(*piVar4 + 0x34) != '\0') {
                iVar10 = *piVar4 + 0x20;
                pfVar7 = (float *)FUN_0041d580(local_28,iVar10,piVar6 + 8);
                pfVar9 = (float *)FUN_0041d580(local_34,iVar10,piVar6 + 8);
                fVar1 = *pfVar9 * *pfVar7 + pfVar9[1] * pfVar7[1] + pfVar9[2] * pfVar7[2];
                if (*(int *)(*param_1 + 0x30) == 0) {
                  fVar1 = fVar1 * _DAT_00587d94;
                }
                piVar6 = local_64;
                if (fVar1 < local_60) {
                  local_68 = param_1;
                  local_60 = fVar1;
                }
              }
              piVar4 = param_1 + 1;
            } while (piVar4 != piVar8);
            piVar2 = local_18;
            param_1 = piVar4;
            piVar12 = local_18;
            if (local_68 != piVar8) {
              piVar4 = operator_new(0x38,(nothrow_t *)&DAT_005b6164);
              piVar12 = (int *)0x0;
              if (piVar4 != (int *)0x0) {
                piVar4[2] = 0;
                piVar4[3] = 0;
                piVar4[4] = 0;
                piVar4[5] = 0;
                piVar4[6] = 0;
                piVar4[7] = 0;
                piVar4[8] = 0;
                piVar4[9] = 0;
                piVar4[10] = 0;
                *piVar4 = 0;
                piVar4[1] = 0;
                piVar4[0xc] = 0;
                piVar4[0xb] = 0;
                *(undefined1 *)(piVar4 + 0xd) = 1;
                piVar12 = piVar4;
              }
              *piVar12 = (int)piVar6;
              pfVar7 = (float *)(piVar12 + 2);
              piVar12[1] = *local_68;
              iVar10 = *local_68;
              if ((float *)(iVar10 + 8) != pfVar7) {
                *pfVar7 = *(float *)(iVar10 + 8);
                piVar12[3] = *(int *)(iVar10 + 0xc);
                piVar12[4] = *(int *)(iVar10 + 0x10);
              }
              iVar10 = *local_68;
              if ((int *)(iVar10 + 0x14) != piVar12 + 5) {
                piVar12[5] = *(int *)(iVar10 + 0x14);
                piVar12[6] = *(int *)(iVar10 + 0x18);
                piVar12[7] = *(int *)(iVar10 + 0x1c);
              }
              piVar4 = local_68 + 1;
              *(undefined1 *)(piVar12 + 0xd) = 0;
              if (piVar4 != piVar8) {
                iVar10 = (int)local_68 - (int)piVar4;
                do {
                  *(int *)((int)piVar4 + iVar10) = *piVar4;
                  piVar4 = piVar4 + 1;
                } while (piVar4 != piVar8);
              }
              piVar11 = piVar11 + -2;
              if ((float)piVar6[2] < *pfVar7) {
                *pfVar7 = (float)piVar6[2];
              }
              if ((float)piVar12[5] < (float)piVar6[5]) {
                piVar12[5] = piVar6[5];
              }
              if ((float)piVar6[3] < (float)piVar12[3]) {
                piVar12[3] = piVar6[3];
              }
              if ((float)piVar12[6] < (float)piVar6[6]) {
                piVar12[6] = piVar6[6];
              }
              if ((float)piVar6[4] < (float)piVar12[4]) {
                piVar12[4] = piVar6[4];
              }
              if ((float)piVar12[7] < (float)piVar6[7]) {
                piVar12[7] = piVar6[7];
              }
              param_1 = piVar12;
              local_14 = piVar11;
              uVar5 = FUN_0041d550(local_40,pfVar7,piVar12 + 5,0x40000000);
              piVar4 = (int *)FUN_0043fa40(&local_4c,uVar5);
              if (piVar4 != piVar12 + 8) {
                piVar12[8] = *piVar4;
                piVar12[9] = piVar4[1];
                piVar12[10] = piVar4[2];
              }
              pfVar7 = (float *)FUN_0041d580(&local_58,pfVar7,piVar12 + 5);
              piVar12[0xb] = (int)SQRT(pfVar7[2] * pfVar7[2] +
                                       pfVar7[1] * pfVar7[1] + *pfVar7 * *pfVar7);
              if ((uint)((int)piVar11 - (int)local_18 >> 2) < (uint)(local_10 - (int)local_18 >> 2))
              {
                FUN_004520c0(piVar11,1,&param_1,local_1c,param_1);
                piVar12 = local_18;
                ppvVar3 = ExceptionList;
                piVar11 = piVar8;
                piVar4 = local_18;
              }
              else {
                FUN_0053d530(piVar11,1,&param_1);
                piVar12 = local_18;
                ppvVar3 = ExceptionList;
                piVar11 = local_14;
                piVar4 = local_18;
              }
              goto joined_r0x0053dec2;
            }
          }
          for (; piVar2 != piVar8; piVar2 = piVar2 + 1) {
            *(undefined1 *)(*piVar2 + 0x34) = 1;
          }
          if (local_5c < (uint)(local_10 - (int)piVar12 >> 2)) {
            FUN_004520c0(piVar8,1,&local_64,local_1c,param_1);
            ppvVar3 = ExceptionList;
            piVar4 = piVar12;
          }
          else {
            FUN_0053d530(piVar8,1,&local_64);
            piVar12 = local_18;
            ppvVar3 = ExceptionList;
            piVar11 = local_14;
            piVar4 = local_18;
          }
          goto joined_r0x0053dec2;
        }
        piVar12 = piVar12 + 1;
        ppvVar3 = ExceptionList;
      } while( true );
    }
  }
  return 0;
}




/* Function: FUN_0053e260 */

void __thiscall FUN_0053e260(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_0046a5e0(param_1 + 2,param_1 + 5);
  if (cVar1 != '\0') {
    if (*param_1 != 0) {
      FUN_0053e260(param_2,param_3);
    }
    if (param_1[1] != 0) {
      FUN_0053e260(param_2,param_3);
    }
    if (param_1[0xc] != 0) {
      FUN_0053d890(param_1 + 0xc);
    }
  }
  return;
}




/* Function: FUN_0053e2c0 */

undefined4 __fastcall FUN_0053e2c0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  char *pcVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  undefined1 local_2c [4];
  void *local_28;
  int local_24;
  undefined4 local_20;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_1c [28];
  
  uVar8 = 0;
  iVar6 = 0;
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  uVar1 = FUN_0041dd90();
  pvVar7 = (void *)0x0;
  if (uVar1 != 0) {
    do {
      piVar2 = (int *)FUN_0041f930(uVar8);
      piVar2 = (int *)(**(code **)(*piVar2 + 0x58))(&stack0x00000008);
      if ((piVar2 != (int *)0x0) && (iVar3 = FUN_004ffac0(), iVar3 != 0)) {
        uVar4 = (**(code **)(*piVar2 + 0x88))();
        FUN_004ffac0(&DAT_0058ab48,local_2c,uVar4);
        uVar4 = FUN_0043f920();
        this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_00411994(abStack_1c,uVar4);
        pcVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                 c_str(this);
        FUN_0053d950(pcVar5);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_1c);
        iVar6 = local_24;
      }
      uVar8 = uVar8 + 1;
      pvVar7 = local_28;
    } while (uVar8 < uVar1);
  }
  uVar4 = FUN_0053dcc0(local_2c);
  *(undefined4 *)(param_1 + 0x84) = uVar4;
  if (pvVar7 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 - (int)pvVar7 >> 2;
  }
  uVar4 = FUN_0041e5b0("CTreeCollider: %d convex primitives",iVar6);
  FUN_0040a410(uVar4);
  if (pvVar7 == (void *)0x0) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar7);
}




/* Function: FUN_0053e4f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053e4f0(float *param_1,float *param_2,float param_3,int param_4,int param_5,
                 undefined4 param_6,int param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  iVar5 = 0;
  if (0 < param_5) {
    pfVar6 = (float *)(param_4 + 4);
    do {
      if ((((param_7 == 0) || (*(char *)(iVar5 + param_7) != '\0')) &&
          (-param_3 -
           (((-(pfVar6[-1] * *param_2) - param_2[1] * *pfVar6) - param_2[2] * pfVar6[1]) + pfVar6[2]
           ) < (float)_DAT_00582ae8)) &&
         (fVar1 = param_3 - (((-(*param_1 * pfVar6[-1]) - *pfVar6 * param_1[1]) -
                             pfVar6[1] * param_1[2]) + pfVar6[2]), (float)_DAT_00582ae8 <= fVar1)) {
        fVar2 = param_3 - fVar1;
        if (param_3 - fVar1 < _DAT_00582ad8) {
          fVar2 = _DAT_00582ad8;
        }
        iVar3 = 0;
        pfVar4 = (float *)(param_4 + 8);
        do {
          if ((iVar5 != iVar3) &&
             ((float)_DAT_00582ae8 <=
              ((-((fVar2 * pfVar6[-1] + *param_1) * pfVar4[-2]) -
               (fVar2 * *pfVar6 + param_1[1]) * pfVar4[-1]) -
              (fVar2 * pfVar6[1] + param_1[2]) * *pfVar4) + pfVar4[1])) goto LAB_0053e670;
          iVar3 = iVar3 + 1;
          pfVar4 = pfVar4 + 4;
        } while (iVar3 < param_5);
        FUN_00461bf0();
        local_28 = param_3 * pfVar6[-1] + *param_1;
        local_24 = param_3 * *pfVar6 + param_1[1];
        local_20 = param_3 * pfVar6[1] + param_1[2];
        local_10 = fVar1 + (float)_DAT_00582af0;
        local_1c = -pfVar6[-1];
        local_18 = -*pfVar6;
        local_14 = -pfVar6[1];
        FUN_00466620(&local_28);
      }
LAB_0053e670:
      iVar5 = iVar5 + 1;
      pfVar6 = pfVar6 + 4;
    } while (iVar5 < param_5);
  }
  return;
}




/* Function: FUN_0053e690 */

void __thiscall FUN_0053e690(int *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0xac))(param_2,param_3);
  (**(code **)(*param_1 + 0xb4))(param_2,param_3);
  (**(code **)(*param_1 + 0xb0))(param_2,param_3);
  FUN_004ff8a0(param_2,param_3);
  return;
}




/* Function: FUN_0053e730 */

void __thiscall FUN_0053e730(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  
  if ((((param_3 == 1) && (*param_4 == 0xf)) && (param_4[5] != 0)) &&
     (puVar1 = *(undefined4 **)(param_1 + 0x298), puVar1 != (undefined4 *)0x0)) {
    if (*(int *)(param_1 + 0x29c) - (int)puVar1 >> 2 != 0) {
      (**(code **)(*(int *)*puVar1 + 0x18))(param_4[5]);
    }
  }
  return;
}




/* Function: FUN_0053e770 */

undefined4 __thiscall FUN_0053e770(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_0041cf80();
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = *(int **)(param_1 + 0x29c);
  piVar3 = *(int **)(param_1 + 0x298);
  if (piVar3 != piVar2) {
    do {
      *(int *)(*piVar3 + 0x14) = param_1;
      (**(code **)(*param_3 + 4))(*piVar3);
      piVar2 = *(int **)(param_1 + 0x29c);
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar2);
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}




/* Function: FUN_0053e920 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0053e920(int *param_1,undefined4 param_2)

{
  int *piVar1;
  float10 fVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  if (*(char *)((int)param_1 + 0x2a7) != '\0') {
    fVar5 = (float10)FUN_0041ce10();
    fVar5 = (float10)(float)param_1[0xaa] - fVar5;
    fVar2 = (float10)_DAT_00583354;
    param_1[0xaa] = (int)(float)fVar5;
    if (fVar5 < fVar2 != (fVar5 == fVar2)) {
      param_1[0x88] = -1;
    }
    if (fVar5 < (float10)_DAT_00582ad8 != (fVar5 == (float10)_DAT_00582ad8)) {
      uVar6 = 0;
      uVar3 = FUN_0041c940(0);
      FUN_00423280(param_1,uVar3,uVar6);
    }
  }
  iVar4 = param_1[0xa6];
  if (iVar4 != param_1[0xa7]) {
    do {
      FUN_00431120();
      iVar4 = iVar4 + 4;
    } while (iVar4 != param_1[0xa7]);
  }
  piVar1 = (int *)param_1[0xa6];
  if (((piVar1 != (int *)0x0) && (param_1[0xa7] - (int)piVar1 >> 2 != 0)) &&
     (*(int *)(*piVar1 + 0xbc) != 0)) {
    iVar4 = FUN_004e4644(*(int *)(*piVar1 + 0xbc));
    if (iVar4 != 0) {
      iVar4 = *param_1;
      uVar3 = FUN_004305c0();
      (**(code **)(iVar4 + 0x8c))(uVar3);
    }
  }
  FUN_004ffd00(param_2);
  return;
}




/* Function: FUN_0053ea10 */

void __fastcall FUN_0053ea10(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x298);
  if (piVar1 != *(int **)(param_1 + 0x29c)) {
    do {
      if (*(int *)(*piVar1 + 0xbc) != 0) {
        FUN_004e4668(*(int *)(*piVar1 + 0xbc));
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x29c));
  }
  return;
}




/* Function: FUN_0053ea50 */

void __fastcall FUN_0053ea50(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x298);
  if (piVar1 != *(int **)(param_1 + 0x29c)) {
    do {
      if (*(int *)(*piVar1 + 0xbc) != 0) {
        FUN_004e4658(*(int *)(*piVar1 + 0xbc));
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x29c));
  }
  return;
}




/* Function: FUN_0053ea90 */

void __thiscall FUN_0053ea90(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x298);
  if (piVar1 != *(int **)(param_1 + 0x29c)) {
    do {
      if (*(int *)(*piVar1 + 0xbc) != 0) {
        FUN_004e46b0(*(int *)(*piVar1 + 0xbc),*param_2,param_2[1],param_2[2]);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x29c));
  }
  return;
}




/* Function: FUN_0053eae0 */

undefined4 * __fastcall FUN_0053eae0(undefined4 *param_1)

{
  FUN_005057c0();
  *param_1 = &PTR_LAB_00592d50;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa4] = 0;
  *(undefined1 *)((int)param_1 + 0x2a7) = 0;
  param_1[0xaa] = 0;
  param_1[0x20] = 1;
  *(undefined1 *)(param_1 + 0xa9) = 1;
  *(undefined1 *)((int)param_1 + 0x2a5) = 1;
  *(undefined1 *)((int)param_1 + 0x2a6) = 1;
  return param_1;
}




/* Function: FUN_0053eb40 */

/* WARNING: Removing unreachable block (ram,0x0053eba1) */

void __fastcall FUN_0053eb40(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0xa6];
  *param_1 = &PTR_LAB_00592d50;
  if (piVar1 != (int *)param_1[0xa7]) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)param_1[0xa7]);
  }
  if ((void *)param_1[0xa6] == (void *)0x0) {
    param_1[0xa6] = 0;
    param_1[0xa7] = 0;
    param_1[0xa8] = 0;
    param_1[0xa6] = 0;
    param_1[0xa7] = 0;
    param_1[0xa8] = 0;
    FUN_005059c0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_1[0xa6]);
}




/* Function: FUN_0053ebd0 */

undefined4 __fastcall FUN_0053ebd0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x298);
  if (piVar1 != *(int **)(param_1 + 0x29c)) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x29c));
  }
  if (*(void **)(param_1 + 0x298) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x298));
  }
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  return 1;
}




/* Function: FUN_0053ec40 */

void * __thiscall FUN_0053ec40(void *param_1,byte param_2)

{
  FUN_0053eb40();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0053ed20 */

void FUN_0053ed20(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piStack_244;
  int *piStack_240;
  int *piStack_23c;
  undefined4 uStack_238;
  int *piStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 *puStack_228;
  undefined4 uStack_224;
  int *piStack_220;
  undefined4 uStack_21c;
  int *piStack_218;
  int *piStack_214;
  undefined4 uStack_210;
  undefined4 *puStack_20c;
  int *piStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  int *piStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  int *piStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  int *piStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  int *piStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  int *piStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int *piStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int *piStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  int *piStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  int **ppiStack_17c;
  int *piStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 **ppuStack_16c;
  int *piStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 *puStack_15c;
  int *piStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 **ppuStack_14c;
  int *piStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 **ppuStack_13c;
  int *piStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 *puStack_12c;
  int *piStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 *puStack_11c;
  int *piStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  int **ppiStack_10c;
  int *piStack_108;
  undefined4 uStack_104;
  int *piStack_100;
  int **ppiStack_fc;
  int *piStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int *piStack_ec;
  undefined4 uStack_e8;
  undefined1 *puStack_e4;
  int *piStack_e0;
  undefined4 uStack_dc;
  undefined4 *puStack_d8;
  int *piStack_d4;
  undefined4 uStack_d0;
  undefined1 *puStack_cc;
  undefined1 auStack_c0 [40];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 local_40 [60];
  undefined4 uStack_4;
  
  local_94 = param_3;
  local_98 = param_2;
  local_88 = param_6;
  puStack_cc = local_40;
  local_90 = param_4;
  local_8c = param_5;
  uStack_d0 = 0x100;
  piStack_d4 = param_1;
  local_84 = param_7;
  puStack_d8 = (undefined4 *)0x53ed86;
  (**(code **)(*param_1 + 0x98))();
  puStack_d8 = &local_8c;
  uStack_dc = 0x100;
  piStack_e0 = param_1;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  local_84 = 0;
  local_88 = 0;
  uStack_50 = 0x3f800000;
  uStack_64 = 0x3f800000;
  uStack_78 = 0x3f800000;
  local_8c = 0x3f800000;
  puStack_e4 = (undefined1 *)0x53ee28;
  (**(code **)(*param_1 + 0x94))();
  puStack_e4 = auStack_c0;
  uStack_e8 = 0x3c;
  piStack_ec = param_1;
  uStack_f0 = 0x53ee38;
  (**(code **)(*param_1 + 0xcc))();
  uStack_f0 = uStack_4;
  uStack_f4 = 0x3c;
  piStack_f8 = param_1;
  ppiStack_fc = (int **)0x53ee4b;
  (**(code **)(*param_1 + 200))();
  ppiStack_fc = &piStack_e0;
  piStack_100 = param_1;
  uStack_104 = 0x53ee59;
  (**(code **)(*param_1 + 0x134))();
  uStack_104 = 2;
  piStack_108 = param_1;
  ppiStack_10c = (int **)0x53ee64;
  (**(code **)(*param_1 + 0x130))();
  ppiStack_10c = &piStack_e0;
  uStack_110 = 1;
  uStack_114 = 0;
  piStack_118 = param_1;
  puStack_11c = (undefined4 *)0x53ee76;
  (**(code **)(*param_1 + 0xf8))();
  puStack_11c = &uStack_f4;
  uStack_120 = 2;
  uStack_124 = 0;
  piStack_128 = param_1;
  puStack_12c = (undefined4 *)0x53ee88;
  (**(code **)(*param_1 + 0xf8))();
  puStack_12c = &uStack_114;
  uStack_130 = 3;
  uStack_134 = 0;
  piStack_138 = param_1;
  ppuStack_13c = (undefined4 **)0x53ee9a;
  (**(code **)(*param_1 + 0xf8))();
  ppuStack_13c = &ppiStack_10c;
  uStack_140 = 4;
  uStack_144 = 0;
  piStack_148 = param_1;
  ppuStack_14c = (undefined4 **)0x53eeac;
  (**(code **)(*param_1 + 0xf8))();
  ppuStack_14c = &puStack_12c;
  uStack_150 = 5;
  uStack_154 = 0;
  piStack_158 = param_1;
  puStack_15c = (undefined4 *)0x53eebe;
  (**(code **)(*param_1 + 0xf8))();
  puStack_15c = &uStack_150;
  uStack_160 = 5;
  uStack_164 = 0;
  piStack_168 = param_1;
  ppuStack_16c = (undefined4 **)0x53eed0;
  (**(code **)(*param_1 + 0xf8))();
  ppuStack_16c = &puStack_15c;
  uStack_170 = 1;
  uStack_174 = 1;
  piStack_178 = param_1;
  ppiStack_17c = (int **)0x53eee2;
  (**(code **)(*param_1 + 0xf8))();
  ppiStack_17c = &piStack_168;
  uStack_180 = 4;
  uStack_184 = 1;
  piStack_188 = param_1;
  uStack_18c = 0x53eef4;
  (**(code **)(*param_1 + 0xf8))();
  uStack_18c = 2;
  uStack_190 = 1;
  uStack_194 = 0;
  piStack_198 = param_1;
  uStack_19c = 0x53ef03;
  (**(code **)(*param_1 + 0xfc))();
  uStack_19c = 3;
  uStack_1a0 = 2;
  uStack_1a4 = 0;
  piStack_1a8 = param_1;
  uStack_1ac = 0x53ef12;
  (**(code **)(*param_1 + 0xfc))();
  uStack_1ac = 3;
  uStack_1b0 = 3;
  uStack_1b4 = 0;
  piStack_1b8 = param_1;
  uStack_1bc = 0x53ef21;
  (**(code **)(*param_1 + 0xfc))();
  uStack_1bc = 2;
  uStack_1c0 = 4;
  uStack_1c4 = 0;
  piStack_1c8 = param_1;
  uStack_1cc = 0x53ef30;
  (**(code **)(*param_1 + 0xfc))();
  uStack_1cc = 3;
  uStack_1d0 = 5;
  uStack_1d4 = 0;
  piStack_1d8 = param_1;
  uStack_1dc = 0x53ef3f;
  (**(code **)(*param_1 + 0xfc))();
  uStack_1dc = 3;
  uStack_1e0 = 6;
  uStack_1e4 = 0;
  piStack_1e8 = param_1;
  uStack_1ec = 0x53ef4e;
  (**(code **)(*param_1 + 0xfc))();
  uStack_1ec = 1;
  uStack_1f0 = 1;
  uStack_1f4 = 1;
  piStack_1f8 = param_1;
  uStack_1fc = 0x53ef5d;
  (**(code **)(*param_1 + 0xfc))();
  uStack_1fc = 1;
  uStack_200 = 4;
  uStack_204 = 1;
  piStack_208 = param_1;
  puStack_20c = (undefined4 *)0x53ef6c;
  (**(code **)(*param_1 + 0xfc))();
  puStack_20c = &uStack_204;
  uStack_210 = 0;
  piStack_214 = param_1;
  uStack_204 = 0;
  piStack_218 = (int *)0x53ef84;
  (**(code **)(*param_1 + 0xf0))();
  piStack_218 = (int *)0x0;
  uStack_21c = 0;
  piStack_220 = param_1;
  uStack_224 = 0x53ef91;
  (**(code **)(*param_1 + 0xf4))();
  puStack_228 = &uStack_1f0;
  uStack_224 = 0xc;
  uStack_22c = 1;
  uStack_230 = 2;
  piStack_234 = param_1;
  uStack_238 = 0x53efa5;
  (**(code **)(*param_1 + 0x120))();
  uStack_238 = uStack_230;
  piStack_23c = (int *)0x0;
  piStack_240 = param_1;
  piStack_244 = (int *)0x53efb5;
  (**(code **)(*param_1 + 0xf4))();
  if (piStack_23c != (int *)0x0) {
    piStack_244 = piStack_23c;
    (**(code **)(*piStack_23c + 8))();
    piStack_23c = (int *)0x0;
  }
  piStack_244 = piStack_218;
  uVar4 = 0;
  (**(code **)(*param_1 + 0xfc))(param_1,0,1);
  (**(code **)(*param_1 + 0xfc))(param_1,0,2,uStack_22c);
  (**(code **)(*param_1 + 0xfc))(param_1,0,3,uVar4);
  (**(code **)(*param_1 + 0xfc))(param_1,0,4,piStack_244);
  uVar3 = 5;
  (**(code **)(*param_1 + 0xfc))(param_1,0,5,uVar4);
  piVar2 = param_1;
  (**(code **)(*param_1 + 0xfc))(param_1,0,6,uVar3);
  iVar1 = 1;
  (**(code **)(*param_1 + 0xfc))(param_1,1,1,uVar3);
  (**(code **)(*param_1 + 0xfc))(param_1,1,4,piVar2);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x130))(param_1,iVar1);
  }
  (**(code **)(*param_1 + 200))(param_1,0x3c,piVar2);
  (**(code **)(*param_1 + 0x94))(param_1,0x100,&piStack_244);
  return;
}




/* Function: FUN_0053f0a0 */

void FUN_0053f0a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  FUN_0053ed20(param_1,*param_2,param_2[1],param_2[2],*param_3,param_3[1],param_3[2],param_4);
  return;
}




/* Function: FUN_0053f0e0 */

int __fastcall FUN_0053f0e0(int param_1)

{
  return param_1 + 0x8c;
}




/* Function: FUN_0053f0f0 */

undefined4 __thiscall FUN_0053f0f0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x154))(param_2,*param_3,*(int *)(param_1 + 0x5c) + param_3[1]);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_2 + 0x11c))
                      (param_2,4,param_3[2],(param_3[3] - param_3[2]) + 1,param_3[4],param_3[5]);
    if (-1 < iVar1) {
      return param_3[5];
    }
  }
  return 0xffffffff;
}




/* Function: FUN_0053f150 */

void __thiscall FUN_0053f150(int param_1,undefined4 param_2)

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
  FUN_004faec0(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_0053f1c0 */

void __thiscall FUN_0053f1c0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  
  *(char *)((int)param_1 + 0x75) = (char)param_4;
  if ((char)param_4 == '\x01') {
    iVar1 = FUN_004f9510(param_1[9],param_1[9] + 0xc);
    if (iVar1 == 0) {
      *(undefined1 *)((int)param_1 + 0x75) = 0;
    }
    else if ((iVar1 != 1) && (iVar1 == 2)) {
      return;
    }
  }
  if ((param_1[0x14] != 0) &&
     (param_4 = (int *)((param_1[0x15] - param_1[0x14]) / 0x24), param_4 != (int *)0x0)) {
    param_4 = param_1;
    FUN_0053f150(&param_4);
    return;
  }
  iVar1 = 8;
  piVar2 = param_1;
  do {
    piVar2 = piVar2 + 1;
    if (*piVar2 != 0) {
      FUN_0053f1c0(param_2,param_3,*(undefined1 *)((int)param_1 + 0x75));
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}




/* Function: FUN_0053f260 */

void FUN_0053f260(undefined4 param_1,undefined4 param_2)

{
  FUN_0053f1c0(param_1,param_2,1);
  return;
}




/* Function: FUN_0053f280 */

void FUN_0053f280(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = param_3;
  if (*param_2 < param_3) {
    fVar2 = *param_2;
  }
  fVar3 = param_3;
  if (param_2[1] < param_3) {
    fVar3 = param_2[1];
  }
  fVar4 = param_3;
  if (param_2[2] < param_3) {
    fVar4 = param_2[2];
  }
  if (param_3 <= param_2[3]) {
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




/* Function: FUN_0053f310 */

void FUN_0053f310(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_14 = param_2[3];
  puVar1 = (undefined4 *)FUN_004fbee0(local_10,&local_20,param_3);
  if (&local_20 != puVar1) {
    local_20 = *puVar1;
    local_1c = puVar1[1];
    local_18 = puVar1[2];
    local_14 = puVar1[3];
  }
  puVar1 = (undefined4 *)FUN_0053f280(local_10,&local_20,param_4);
  if (&local_20 != puVar1) {
    local_1c = puVar1[1];
    local_20 = *puVar1;
    local_18 = puVar1[2];
    local_14 = puVar1[3];
  }
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[3] = local_14;
  param_1[2] = local_18;
  return;
}




/* Function: FUN_0053f3d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053f3d0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2[2] * _DAT_00592e28;
  fVar3 = param_2[1] * _DAT_00592e24;
  fVar2 = *param_2 * _DAT_00592e20;
  fVar4 = *param_2 * _DAT_00592e1c;
  fVar6 = param_2[1] * _DAT_00592e18;
  fVar5 = param_2[2] * _DAT_00592e14;
  *param_1 = (*param_2 * _DAT_00592e10 - param_2[1] * _DAT_00592e0c) - param_2[2] * _DAT_00592e08;
  param_1[1] = (fVar3 + fVar1) - fVar2;
  param_1[2] = fVar5 + (fVar4 - fVar6);
  return;
}




/* Function: FUN_0053f440 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0053f440(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x78);
  do {
    _CIpow();
    uVar1 = FUN_004cf110();
    *puVar3 = uVar1;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar2 < 0x100);
  return;
}




/* Function: FUN_0053f4d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053f4d0(float param_1,float param_2,int param_3,int param_4,float param_5,float *param_6,
                 float *param_7)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 extraout_ST1;
  
  fVar1 = (float10)param_1;
  if (param_1 < _DAT_00582ad8) {
    do {
      fVar1 = fVar1 + (float10)_DAT_00588de4;
    } while (fVar1 < (float10)_DAT_00582ad8);
  }
  if ((float10)_DAT_00588de4 <= fVar1) {
    do {
      fVar1 = fVar1 - (float10)_DAT_00588de4;
    } while ((float10)_DAT_00588de4 <= fVar1);
  }
  for (; param_2 < _DAT_00592e4c; param_2 = param_2 + _DAT_00583344) {
  }
  for (; _DAT_00590a90 <= param_2; param_2 = param_2 - _DAT_00583344) {
  }
  if (0x16d < param_4) {
    param_4 = param_4 + ((param_4 - 0x16eU) / 0x16d + 1) * -0x16d;
  }
  if (param_4 < 0) {
    param_4 = ((-param_4 - 1U) / 0x16d) * 0x16d + param_4 + 0x16d;
  }
  for (; param_5 < _DAT_00582ad8; param_5 = param_5 + _DAT_00590fb4) {
  }
  for (; _DAT_00590fb4 <= param_5; param_5 = param_5 - _DAT_00590fb4) {
  }
  fVar2 = (float10)fsin((float10)(param_4 + -0x50) * (float10)_DAT_005b9004 * (float10)_DAT_00592e48
                       );
  fVar3 = (float10)fsin((float10)(param_4 + -8) * (float10)_DAT_005b9004 * (float10)_DAT_00592e40);
  fVar4 = (float10)fsin((float10)(param_4 + -0x51) * (float10)_DAT_005b9004 * (float10)_DAT_00592e38
                       );
  fVar1 = (float10)_DAT_005b9004 * fVar1 * (float10)_DAT_00587fb8;
  fVar5 = (float10)fsin(fVar1);
  fVar6 = (float10)fsin((float10)(float)(fVar4 * (float10)_DAT_00592e34));
  fVar1 = (float10)fcos(fVar1);
  fVar2 = (float10)_DAT_005b9004 *
          (((float10)(param_3 * 0xf) - (float10)param_2) * (float10)_DAT_0058b9a0 +
           (fVar2 * (float10)_DAT_00592e44 - fVar3 * (float10)_DAT_00592e3c) + (float10)param_5) *
          (float10)_DAT_005915f0;
  fVar3 = (float10)fcos(fVar2);
  fVar4 = (float10)fcos((float10)(float)(fVar4 * (float10)_DAT_00592e34));
  fVar2 = (float10)fsin(fVar2);
  fVar1 = (float10)fpatan(-(fVar2 * fVar4),
                          -((float10)(float)fVar1 * (float10)(float)fVar6 +
                           fVar4 * fVar3 * (float10)(float)fVar5));
  *param_6 = (float)-fVar1;
  fVar1 = (float10)_CIasin();
  *param_7 = (float)(extraout_ST1 - fVar1);
  return;
}




/* Function: FUN_0053f780 */

undefined4 FUN_0053f780(undefined4 param_1,float param_2,float param_3)

{
  fsin((float10)param_3);
  fcos((float10)param_2);
  fcos((float10)param_3);
  fsin((float10)param_2);
  FUN_0041d510(param_1);
  return param_1;
}




/* Function: FUN_0053f7d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0053f7d0(float param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = (float10)fcos((float10)param_4 - (float10)param_2);
  fVar2 = (float10)fsin((float10)param_3);
  fVar3 = (float10)fsin((float10)param_1);
  fVar4 = (float10)fcos((float10)param_1);
  fVar5 = (float10)fcos((float10)param_3);
  fVar1 = fVar5 * fVar4 + fVar3 * fVar2 * fVar1;
  if ((float10)_DAT_00582af0 < fVar1) {
    return (float10)_DAT_00582ad8;
  }
  if ((float)fVar1 < (float)_DAT_00592e50) {
    return (float10)_DAT_005b9004;
  }
  fVar1 = (float10)_CIacos();
  return fVar1;
}




/* Function: FUN_0053f850 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_0053f850(int param_1,float *param_2,float param_3,float param_4,float param_5)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar1 = (float10)fcos((float10)param_4);
  fVar2 = (float10)fcos((float10)*(float *)(param_1 + 0x20));
  fVar3 = (float10)fcos((float10)param_3);
  fVar5 = (float10)1.4426950408889634 * ((float10)param_2[1] / fVar3);
  fVar3 = ROUND(fVar5);
  fVar5 = (float10)f2xm1(fVar5 - fVar3);
  fVar3 = (float10)fscale((float10)1 + fVar5,fVar3);
  fVar6 = (float10)1.4426950408889634 * (float10)param_4 * (float10)param_2[3];
  fVar5 = ROUND(fVar6);
  fVar6 = (float10)f2xm1(fVar6 - fVar5);
  fVar5 = (float10)fscale((float10)1 + fVar6,fVar5);
  fVar7 = (float10)1.4426950408889634 * (float10)param_2[3] * (float10)*(float *)(param_1 + 0x20);
  fVar6 = ROUND(fVar7);
  fVar7 = (float10)f2xm1(fVar7 - fVar6);
  fVar6 = (float10)fscale((float10)1 + fVar7,fVar6);
  fVar7 = ROUND((float10)1.4426950408889634 * (float10)param_2[1]);
  fVar4 = (float10)f2xm1((float10)1.4426950408889634 * (float10)param_2[1] - fVar7);
  fVar7 = (float10)fscale((float10)1 + fVar4,fVar7);
  return ((((float10)(float)fVar1 * (float10)(float)fVar1 * (float10)param_2[4] +
            fVar5 * (float10)param_2[2] + (float10)_DAT_00583354) *
          (fVar3 * (float10)*param_2 + (float10)_DAT_00583354)) /
         ((fVar7 * (float10)*param_2 + (float10)_DAT_00583354) *
         ((float10)(float)fVar2 * (float10)(float)fVar2 * (float10)param_2[4] +
          fVar6 * (float10)param_2[2] + (float10)_DAT_00583354))) * (float10)param_5;
}




/* Function: FUN_0053f940 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FUN_0053f940(int param_1,float param_2,float param_3,float param_4,float param_5,float *param_6)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_10 [16];
  
  uVar8 = 0;
  local_1c = param_4;
  local_20 = param_2 * (_DAT_00583354 / param_3) * param_4;
  local_18 = ((_DAT_00583354 - param_2) - param_3) * (_DAT_00583354 / param_3) * param_4;
  uVar4 = FUN_0053f3d0(local_10,&local_20,0);
  FUN_00549800(uVar4,uVar8);
  if (((local_20 < _DAT_00582ad8) || (local_1c < _DAT_00582ad8)) || (local_18 < _DAT_00582ad8)) {
    param_3 = 1.0;
    if (_DAT_0058b1c0 < ABS(_DAT_00583354 - local_20)) {
      param_3 = _DAT_00583354 / (_DAT_00583354 - local_20);
    }
    param_4 = 1.0;
    if (_DAT_0058b1c0 < ABS(_DAT_00583354 - local_1c)) {
      param_4 = _DAT_00583354 / (_DAT_00583354 - local_1c);
    }
    param_2 = 1.0;
    if (_DAT_0058b1c0 < ABS(_DAT_00583354 - local_18)) {
      param_2 = _DAT_00583354 / (_DAT_00583354 - local_18);
    }
    fVar3 = _DAT_00583354;
    if (_DAT_00582ad8 <= param_3) {
      fVar3 = param_3;
    }
    if ((_DAT_00582ad8 <= param_4) && (param_4 < fVar3)) {
      fVar3 = param_4;
    }
    if ((_DAT_00582ad8 <= param_2) && (param_2 < fVar3)) {
      fVar3 = param_2;
    }
    local_20 = (local_20 - _DAT_00583354) * fVar3 + _DAT_00583354;
    local_1c = (local_1c - _DAT_00583354) * fVar3 + _DAT_00583354;
    local_18 = (local_18 - _DAT_00583354) * fVar3 + _DAT_00583354;
  }
  local_14 = local_1c * _DAT_00592e60 + local_18 * _DAT_00592e64;
  if (*param_6 < local_14) {
    *param_6 = local_14;
  }
  if (_DAT_00583354 < param_5) {
    fVar3 = _DAT_00583354 / (param_5 * _DAT_00592e5c);
    local_20 = local_20 * fVar3;
    local_1c = local_1c * fVar3;
    local_18 = local_18 * fVar3;
  }
  local_14 = local_14 * _DAT_00592e58;
  pfVar5 = (float *)FUN_0053f310(local_10,&local_20,0,0x3f800000);
  if (&local_20 != pfVar5) {
    local_20 = *pfVar5;
    local_1c = pfVar5[1];
    local_18 = pfVar5[2];
    local_14 = pfVar5[3];
  }
  iVar6 = FUN_004cf110();
  uVar1 = *(uint *)(param_1 + (0x1e - iVar6) * 4);
  iVar6 = FUN_004cf110();
  iVar7 = FUN_004cf110();
  uVar2 = *(uint *)(param_1 + (0x1e - iVar7) * 4);
  iVar7 = FUN_004cf110();
  return ((uVar1 & 0xff | iVar6 << 8) << 8 | uVar2 & 0xff) << 8 |
         *(uint *)(param_1 + (0x1e - iVar7) * 4) & 0xff;
}




/* Function: FUN_0053fc60 */

void __thiscall
FUN_0053fc60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)FUN_0053f7d0(param_2,param_3,*(undefined4 *)(param_1 + 0x20),
                                *(undefined4 *)(param_1 + 0x1c));
  fVar1 = (float10)FUN_0053f850(param_1 + 0x50,param_2,(float)fVar1,*(undefined4 *)(param_1 + 0x34))
  ;
  fVar2 = (float10)FUN_0053f850(param_1 + 100,param_2,extraout_EDX,*(undefined4 *)(param_1 + 0x38));
  fVar3 = (float10)FUN_0053f850(param_1 + 0x3c,param_2,extraout_EDX_00,
                                *(undefined4 *)(param_1 + 0x30));
  FUN_0053f940((float)fVar1,(float)fVar2,(float)fVar3,param_4,param_5);
  return;
}




/* Function: FUN_0053fcf0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0053fcf0(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 fVar12;
  float10 extraout_ST1_01;
  undefined1 *puVar13;
  float local_48;
  undefined1 local_2c [44];
  
  fVar2 = *(float *)(param_1 + 0x18) * _DAT_00592eb8 - _DAT_00592eb4;
  fVar5 = (float10)_CIpow();
  fVar6 = (float10)fcos((float10)param_3);
  local_48 = 350.0;
  fVar1 = (float)((float10)_DAT_00583354 / (fVar6 + fVar5 * (float10)_DAT_00592ea0));
  pfVar3 = (float *)&DAT_005b7f08;
  do {
    fVar7 = (float10)FUN_00544d60(local_48);
    fVar5 = (float10)_DAT_00592e9c;
    FUN_00544d60(local_48);
    FUN_00544d60(local_48);
    fVar8 = (float10)_CIpow();
    fVar6 = (float10)_DAT_00592e88;
    FUN_00544d60(local_48);
    FUN_00544d60(local_48);
    fVar9 = (float10)_CIpow();
    fVar11 = (float10)_DAT_00592e80;
    fVar10 = (float10)_CIpow();
    fVar12 = (float10)1.4426950408889634 * -(fVar10 * (float10)fVar1 * (float10)fVar2);
    fVar10 = ROUND(fVar12);
    fVar12 = (float10)f2xm1(fVar12 - fVar10);
    fscale((float10)1 + fVar12,fVar10);
    fVar10 = (float10)_CIpow();
    fVar12 = (float10)1.4426950408889634 * fVar10 * (float10)fVar1 * (float10)_DAT_00592e6c;
    fVar10 = ROUND(fVar12);
    fVar12 = (float10)f2xm1(fVar12 - fVar10);
    fVar10 = (float10)fscale((float10)1 + fVar12,fVar10);
    fVar12 = (float10)FUN_00544c80(local_48);
    pfVar4 = pfVar3 + 1;
    fVar9 = (float10)1.4426950408889634 *
            (float10)(float)(((float10)fVar1 / fVar9) * extraout_ST1_00 * fVar11);
    fVar11 = ROUND(fVar9);
    fVar9 = (float10)f2xm1(fVar9 - fVar11);
    fVar11 = (float10)fscale((float10)1 + fVar9,fVar11);
    fVar8 = (float10)1.4426950408889634 *
            (float10)(float)(((float10)fVar1 / fVar8) * extraout_ST1 * fVar6);
    fVar6 = ROUND(fVar8);
    fVar8 = (float10)f2xm1(fVar8 - fVar6);
    fVar6 = (float10)fscale((float10)1 + fVar8,fVar6);
    fVar7 = (float10)1.4426950408889634 * (float10)(float)(fVar7 * (float10)fVar1 * fVar5);
    fVar5 = ROUND(fVar7);
    fVar7 = (float10)f2xm1(fVar7 - fVar5);
    fVar5 = (float10)fscale((float10)1 + fVar7,fVar5);
    *pfVar3 = (float)(fVar5 * fVar6 * fVar11 * fVar12 * (float10)(float)(fVar10 * extraout_ST1_01) *
                     (float10)_DAT_00592e68);
    local_48 = local_48 + _DAT_00588c00;
    pfVar3 = pfVar4;
  } while ((int)pfVar4 < 0x5b8074);
  puVar13 = local_2c;
  FUN_00544be0(&DAT_005b7f08,0x15e,800,0x5b);
  FUN_00545020(puVar13);
  FUN_00544fe0(local_2c);
  FUN_00532a60();
  FUN_00544c50();
  return param_2;
}




/* Function: FUN_0053ff80 */

void FUN_0053ff80(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005802d2;
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




/* Function: FUN_00540000 */

void FUN_00540000(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_1 != param_3) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
    }
  }
  return;
}




/* Function: FUN_00540040 */

void FUN_00540040(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_3 != param_1) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
    param_3 = param_3 + 4;
  }
  return;
}




/* Function: FUN_00540080 */

void FUN_00540080(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  while (puVar2 = param_4, puVar1 = param_3, param_2 != puVar1) {
    param_3 = puVar1 + -4;
    param_4 = puVar2 + -4;
    if (param_4 != param_3) {
      *param_4 = *param_3;
      puVar2[-3] = puVar1[-3];
      puVar2[-2] = puVar1[-2];
      puVar2[-1] = puVar1[-1];
    }
  }
  *param_1 = puVar2;
  return;
}




/* Function: FUN_005400c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005400c0(int param_1,float param_2,float param_3,int param_4,int param_5,float param_6)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  int iVar8;
  float10 fVar9;
  undefined1 local_c [12];
  
  bVar3 = param_2 < _DAT_00582ad8;
  *(float *)(param_1 + 4) = param_2;
  *(float *)(param_1 + 8) = param_3;
  *(int *)(param_1 + 0x10) = param_5;
  *(int *)(param_1 + 0xc) = param_4 * 0xf;
  *(float *)(param_1 + 0x14) = param_6;
  if (bVar3) {
    fVar2 = *(float *)(param_1 + 4);
    do {
      fVar2 = fVar2 + _DAT_00588de4;
    } while (fVar2 < _DAT_00582ad8);
    *(float *)(param_1 + 4) = fVar2;
  }
  if (_DAT_00588de4 <= *(float *)(param_1 + 4)) {
    fVar2 = *(float *)(param_1 + 4);
    do {
      fVar2 = fVar2 - _DAT_00588de4;
    } while (_DAT_00588de4 <= fVar2);
    *(float *)(param_1 + 4) = fVar2;
  }
  if (param_3 < _DAT_00592e4c) {
    fVar2 = *(float *)(param_1 + 8);
    do {
      fVar2 = fVar2 + _DAT_00583344;
    } while (fVar2 < _DAT_00592e4c);
    *(float *)(param_1 + 8) = fVar2;
  }
  if (_DAT_00590a90 <= *(float *)(param_1 + 8)) {
    fVar2 = *(float *)(param_1 + 8);
    do {
      fVar2 = fVar2 - _DAT_00583344;
    } while (_DAT_00590a90 <= fVar2);
    *(float *)(param_1 + 8) = fVar2;
  }
  if (0x16d < param_5) {
    iVar8 = *(int *)(param_1 + 0x10);
    do {
      iVar8 = iVar8 + -0x16d;
    } while (0x16d < iVar8);
    *(int *)(param_1 + 0x10) = iVar8;
  }
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar8 < 0) {
    do {
      iVar8 = iVar8 + 0x16d;
    } while (iVar8 < 0);
    *(int *)(param_1 + 0x10) = iVar8;
  }
  if (param_6 < _DAT_00582ad8) {
    fVar2 = *(float *)(param_1 + 0x14);
    do {
      fVar2 = fVar2 + _DAT_00590fb4;
    } while (fVar2 < _DAT_00582ad8);
    *(float *)(param_1 + 0x14) = fVar2;
  }
  if (_DAT_00590fb4 <= *(float *)(param_1 + 0x14)) {
    fVar2 = *(float *)(param_1 + 0x14);
    do {
      fVar2 = fVar2 - _DAT_00590fb4;
    } while (_DAT_00590fb4 <= fVar2);
    *(float *)(param_1 + 0x14) = fVar2;
  }
  pfVar1 = (float *)(param_1 + 0x20);
  FUN_0053f4d0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_4,
               *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               (undefined4 *)(param_1 + 0x1c),pfVar1);
  puVar7 = (undefined4 *)FUN_0053f780(local_c,*(undefined4 *)(param_1 + 0x1c),*pfVar1);
  if (puVar7 != (undefined4 *)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = *puVar7;
    *(undefined4 *)(param_1 + 0x28) = puVar7[1];
    *(undefined4 *)(param_1 + 0x2c) = puVar7[2];
  }
  fVar4 = *pfVar1 * *pfVar1;
  fVar2 = *(float *)(param_1 + 0x18);
  fVar5 = fVar4 * *pfVar1;
  fVar6 = *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18);
  fVar9 = (float10)fptan(((float10)_DAT_00592fa0 - (float10)fVar2 * (float10)_DAT_00592fa4) *
                         ((float10)_DAT_005b9004 - ((float10)*pfVar1 + (float10)*pfVar1)));
  *(float *)(param_1 + 0x30) =
       (float)((((float10)fVar2 * (float10)_DAT_00592f9c - (float10)_DAT_00592f98) * fVar9 -
               (float10)fVar2 * (float10)_DAT_00592f94) * (float10)_DAT_00592f90 +
              (float10)_DAT_00592f8c);
  *(float *)(param_1 + 0x34) =
       *pfVar1 * _DAT_00592f64 + (fVar5 * _DAT_00592f6c - fVar4 * _DAT_00592f68) + _DAT_00592f60 +
       (*pfVar1 * _DAT_00592f70 + (fVar5 * _DAT_00592f78 - fVar4 * _DAT_00592f74)) * fVar6 +
       (((fVar4 * _DAT_00592f88 - fVar5 * _DAT_00592f84) - *pfVar1 * _DAT_00592f80) + _DAT_00592f7c)
       * fVar2;
  *(float *)(param_1 + 0x38) =
       *pfVar1 * _DAT_00592f38 + (fVar5 * _DAT_00592f40 - fVar4 * _DAT_00592f3c) + _DAT_00592f34 +
       (*pfVar1 * _DAT_00592f44 + (fVar5 * _DAT_00592f4c - fVar4 * _DAT_00592f48)) * fVar6 +
       (((fVar4 * _DAT_00592f5c - fVar5 * _DAT_00592f58) - *pfVar1 * _DAT_00592f54) + _DAT_00592f50)
       * fVar2;
  *(float *)(param_1 + 0x3c) = fVar2 * _DAT_00592f30 - _DAT_00592f2c;
  *(float *)(param_1 + 0x40) = _DAT_00592f24 - fVar2 * _DAT_00592f28;
  *(float *)(param_1 + 0x44) = _DAT_00592f1c - fVar2 * _DAT_00592f20;
  *(float *)(param_1 + 0x48) = fVar2 * _DAT_00592f18 - _DAT_00592f14;
  *(float *)(param_1 + 0x4c) = _DAT_00592f0c - fVar2 * _DAT_00592f10;
  *(float *)(param_1 + 0x50) = fVar2 * _DAT_00592f08 - _DAT_00592f04;
  *(float *)(param_1 + 0x54) = _DAT_00592efc - fVar2 * _DAT_00592f00;
  *(float *)(param_1 + 0x58) = _DAT_00592ef4 - fVar2 * _DAT_00592ef8;
  *(float *)(param_1 + 0x5c) = fVar2 * _DAT_00592ef0 - _DAT_00592eec;
  *(float *)(param_1 + 0x60) = _DAT_00592ee4 - fVar2 * _DAT_00592ee8;
  *(float *)(param_1 + 100) = fVar2 * _DAT_00592ee0 - _DAT_00592edc;
  *(float *)(param_1 + 0x68) = _DAT_00592ed4 - fVar2 * _DAT_00592ed8;
  *(float *)(param_1 + 0x6c) = _DAT_00592ecc - fVar2 * _DAT_00592ed0;
  *(float *)(param_1 + 0x70) = fVar2 * _DAT_00592ec8 - _DAT_00592ec4;
  *(float *)(param_1 + 0x74) = _DAT_00592ebc - fVar2 * _DAT_00592ec0;
  return;
}




/* Function: FUN_005404e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005404e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  float10 fVar2;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0041d510(&local_c);
  if ((local_8 < _DAT_00582ad8) || (local_8 < _DAT_0058b1c0)) {
    local_8 = 0.001;
    FUN_0041d4b0();
  }
  fVar1 = (float10)_CIacos();
  if ((ABS(fVar1) < (float10)_DAT_00589fe8) ||
     ((ABS(local_4) < (float)_DAT_00589fe8 && (ABS(local_c) < (float)_DAT_00589fe8)))) {
    param_1 = 0.0;
  }
  else {
    fVar2 = (float10)fpatan((float10)local_4,(float10)local_c);
    param_1 = (float)fVar2;
  }
  FUN_0053fc60((float)fVar1,param_1,param_2,param_3);
  return;
}




/* Function: FUN_005405b0 */

undefined4 FUN_005405b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00540080(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_005405f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005405f0(int param_1,undefined4 *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float10 extraout_ST1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  if ((*(int *)(param_1 + 0x480) != 0) &&
     (*(int *)(param_1 + 0x484) - *(int *)(param_1 + 0x480) >> 4 != 0)) {
    if (param_3 < _DAT_00582ad8) {
      iVar2 = FUN_004cf110();
      param_3 = param_3 - (float)(iVar2 + -1) * _DAT_005b9004;
    }
    if (_DAT_005b9004 <= param_3) {
      FUN_004cf110();
    }
    iVar2 = *(int *)(param_1 + 0x478);
    fVar5 = (float10)iVar2;
    iVar3 = FUN_004cf110();
    param_3 = (float)((fVar5 - ((float10)iVar3 * (float10)_DAT_005b9004) / extraout_ST1) *
                      extraout_ST1 * extraout_ST0);
    if (_DAT_00582ad8 <= param_3) {
      if (_DAT_00583354 < param_3) {
        param_3 = 1.0;
      }
    }
    else {
      param_3 = 0.0;
    }
    iVar1 = iVar3 * 0x10 + *(int *)(param_1 + 0x480);
    uVar4 = FUN_00510670(local_20,((iVar3 + 1) % iVar2) * 0x10 + *(int *)(param_1 + 0x480),iVar1,
                         param_3);
    uVar4 = FUN_005106a0(local_10,uVar4);
    FUN_00510640(&local_30,iVar1,uVar4);
    *param_2 = local_30;
    param_2[1] = local_2c;
    param_2[3] = local_24;
    param_2[2] = local_28;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  return;
}




/* Function: FUN_00540780 */

void FUN_00540780(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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




/* Function: FUN_005407c0 */

void FUN_005407c0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
    }
    param_1 = param_1 + 4;
  }
  return;
}




/* Function: FUN_00540800 */

void __thiscall
FUN_00540800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00540780(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00540830 */

int __thiscall FUN_00540830(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_005407c0(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x10 + param_2;
}




/* Function: FUN_00540860 */

void __thiscall FUN_00540860(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005802e0;
  local_10 = ExceptionList;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(param_1 + 0xc) - iVar3 >> 4;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar3 >> 4;
    }
    if (0xfffffffU - iVar2 < param_3) {
      ExceptionList = &local_10;
      FUN_0053ff80();
      ExceptionList = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar3 >> 4;
    }
    if (uVar5 < iVar2 + param_3) {
      if (0xfffffff - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 8) - iVar3 >> 4;
      }
      if (uVar5 < iVar2 + param_3) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) - iVar3 >> 4;
        }
        uVar5 = iVar3 + param_3;
      }
      ExceptionList = &local_10;
      iVar2 = FUN_00493c27();
      local_8 = 0;
      uVar1 = FUN_00540780(*(undefined4 *)(param_1 + 4));
      FUN_005407c0(uVar1);
      FUN_00540780(param_2);
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 8) - iVar3 >> 4;
      }
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0xc) = uVar5 * 0x10 + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x10 + iVar2;
        *(int *)(param_1 + 4) = iVar2;
        ExceptionList = local_10;
        return;
      }
      for (; iVar3 != *(int *)(param_1 + 8); iVar3 = iVar3 + 0x10) {
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)(param_1 + 4));
    }
    if ((uint)(*(int *)(param_1 + 8) - param_2 >> 4) < param_3) {
      ExceptionList = &local_10;
      FUN_00540800();
      local_8 = 2;
      FUN_00540830();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
    }
    else {
      ExceptionList = &local_10;
      uVar1 = FUN_00540800();
      *(undefined4 *)(param_1 + 8) = uVar1;
      FUN_005405b0();
    }
    FUN_00540000();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00540b30 */

void __thiscall FUN_00540b30(int param_1,uint param_2)

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
    uVar4 = *(int *)(param_1 + 8) - iVar1 >> 4;
  }
  if (uVar4 < param_2) {
    FUN_00540860();
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(param_1 + 8), param_2 < (uint)(iVar2 - iVar1 >> 4))) &&
     (param_2 * 0x10 + iVar1 != iVar2)) {
    uVar3 = FUN_00540040(iVar2);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  return;
}




/* Function: FUN_00540bc0 */

undefined4 * __fastcall FUN_00540bc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00592fa8;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  FUN_0053f440(0x3f555555);
  return param_1;
}




/* Function: FUN_00540c00 */

void __fastcall FUN_00540c00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00592fa8;
  if ((void *)param_1[0x120] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x120]);
  }
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  return;
}




/* Function: FUN_00540c40 */

void FUN_00540c40(undefined4 param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)&local_14;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  FUN_00540b30(param_1);
  return;
}




/* Function: FUN_00540c70 */

void * __thiscall FUN_00540c70(void *param_1,byte param_2)

{
  FUN_00540c00();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00540c90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00540c90(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  float local_54;
  float local_50;
  undefined1 local_48 [12];
  undefined1 local_3c [16];
  void *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  local_54 = 0.0;
  *(int *)(param_1 + 0x478) = param_2;
  fVar1 = _DAT_005b9004 / (float)param_2;
  local_50 = std::numeric_limits<float>::max();
  iVar6 = 0;
  local_50 = -local_50;
  local_2c = (void *)0x0;
  local_28 = 0;
  local_24 = 0;
  FUN_00540c40(*(undefined4 *)(param_1 + 0x478));
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x478)) {
    pfVar7 = (float *)((int)local_2c + 0xc);
    do {
      puVar9 = local_48;
      FUN_0053fcf0(local_20,local_54);
      FUN_00544e70(puVar9);
      FUN_00532a60();
      uVar10 = 0;
      uVar2 = FUN_0053f3d0(local_3c,local_48,0);
      pfVar3 = (float *)FUN_00549800(uVar2,uVar10);
      if (pfVar7 + -3 != pfVar3) {
        pfVar7[-3] = *pfVar3;
        pfVar7[-2] = pfVar3[1];
        pfVar7[-1] = pfVar3[2];
        *pfVar7 = pfVar3[3];
      }
      *pfVar7 = pfVar7[-2] * _DAT_00592e60 + pfVar7[-1] * _DAT_00592e64;
      if (local_50 < *pfVar7) {
        local_50 = *pfVar7;
      }
      local_54 = local_54 + fVar1;
      iVar5 = iVar5 + 1;
      pfVar7 = pfVar7 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x478));
  }
  FUN_00540c40(param_2);
  local_50 = _DAT_00583354 / local_50;
  if (0 < *(int *)(param_1 + 0x478)) {
    iVar5 = 0;
    do {
      puVar8 = (undefined4 *)(*(int *)(param_1 + 0x480) + iVar5);
      puVar4 = (undefined4 *)FUN_005106a0(local_10,iVar5 + (int)local_2c,local_50);
      if (puVar8 != puVar4) {
        *puVar8 = *puVar4;
        puVar8[1] = puVar4[1];
        puVar8[2] = puVar4[2];
        puVar8[3] = puVar4[3];
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar6 < *(int *)(param_1 + 0x478));
  }
  if (local_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  return;
}




/* Function: FUN_00540e40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00540e40(int param_1,float param_2)

{
  bool bVar1;
  
  bVar1 = param_2 < _DAT_00583354;
  *(float *)(param_1 + 0x18) = param_2;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  }
  FUN_00540c90();
  return;
}




/* Function: FUN_00540e70 */

undefined4 __fastcall FUN_00540e70(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 1;
}




/* Function: FUN_00540ea0 */

undefined4 __thiscall FUN_00540ea0(int param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x14c))(param_2,0,*(undefined4 *)(param_1 + 4),0x20);
  (**(code **)(*param_2 + 0x154))(param_2,*(undefined4 *)(param_1 + 8),0);
  (**(code **)(*param_2 + 0x130))(param_2,0x112);
  (**(code **)(*param_2 + 0x11c))
            (param_2,5,0,*(undefined4 *)(param_1 + 0xc),0,*(undefined4 *)(param_1 + 0x10));
  return *(undefined4 *)(param_1 + 0x10);
}




/* Function: FUN_00540f00 */

void __fastcall FUN_00540f00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00592fac;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




/* Function: FUN_00540f20 */

void __fastcall FUN_00540f20(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_00592fac;
  FUN_00540e70();
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  return;
}




/* Function: FUN_00540f60 */

void * __thiscall FUN_00540f60(void *param_1,byte param_2)

{
  FUN_00540f20();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00541390 */

undefined1 __fastcall FUN_00541390(int param_1)

{
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_004fb820();
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  return 1;
}




/* Function: FUN_00541a30 */

undefined4 * __thiscall FUN_00541a30(undefined4 *param_1,undefined4 param_2)

{
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00592fc8;
  param_1[0x21] = param_2;
  param_1[0x22] = 0;
  param_1[0x23] = 0x42c80000;
  return param_1;
}




/* Function: FUN_00541a70 */

void __fastcall FUN_00541a70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00592fc8;
  FUN_0040da90();
  return;
}




/* Function: FUN_00541a80 */

void * __thiscall FUN_00541a80(void *param_1,byte param_2)

{
  FUN_00541a70();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00541aa0 */

void FUN_00541aa0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_3;
  if (param_3 < *param_2) {
    fVar2 = *param_2;
  }
  fVar3 = param_3;
  if (param_3 < param_2[1]) {
    fVar3 = param_2[1];
  }
  if (param_2[2] <= param_3) {
    *param_1 = fVar2;
    param_1[1] = fVar3;
    param_1[2] = param_3;
    return;
  }
  fVar1 = param_2[2];
  *param_1 = fVar2;
  param_1[1] = fVar3;
  param_1[2] = fVar1;
  return;
}




/* Function: FUN_00541b10 */

void FUN_00541b10(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_3;
  if (*param_2 < param_3) {
    fVar2 = *param_2;
  }
  fVar3 = param_3;
  if (param_2[1] < param_3) {
    fVar3 = param_2[1];
  }
  if (param_3 <= param_2[2]) {
    *param_1 = fVar2;
    param_1[1] = fVar3;
    param_1[2] = param_3;
    return;
  }
  fVar1 = param_2[2];
  *param_1 = fVar2;
  param_1[1] = fVar3;
  param_1[2] = fVar1;
  return;
}




/* Function: FUN_00541b80 */

void FUN_00541b80(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_18 = *param_2;
  local_14 = param_2[1];
  local_10 = param_2[2];
  puVar1 = (undefined4 *)FUN_00541aa0(local_c,&local_18,param_3);
  if (puVar1 != &local_18) {
    local_18 = *puVar1;
    local_14 = puVar1[1];
    local_10 = puVar1[2];
  }
  puVar1 = (undefined4 *)FUN_00541b10(local_c,&local_18,param_4);
  if (puVar1 != &local_18) {
    local_18 = *puVar1;
    local_14 = puVar1[1];
    local_10 = puVar1[2];
  }
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  return;
}




/* Function: FUN_00541c20 */

undefined4 __fastcall FUN_00541c20(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x84);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return 1;
}




/* Function: FUN_00542210 */

undefined4 * __fastcall FUN_00542210(undefined4 *param_1)

{
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00593060;
  param_1[0x21] = 0;
  return param_1;
}




/* Function: FUN_00542230 */

void __fastcall FUN_00542230(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_00593060;
  piVar1 = (int *)param_1[0x21];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x21] = 0;
  }
  FUN_0040da90();
  return;
}




/* Function: FUN_00542260 */

void * __thiscall FUN_00542260(void *param_1,byte param_2)

{
  FUN_00542230();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00542990 */

undefined4 * __fastcall FUN_00542990(undefined4 *param_1)

{
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00593110;
  *(undefined1 *)(param_1 + 0x21) = 1;
  return param_1;
}




/* Function: FUN_005429b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005429b0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0041ce10();
  if (_DAT_00582ad8 < *(float *)(param_1 + 0x20)) {
    *(float *)(param_1 + 0x20) = (float)((float10)*(float *)(param_1 + 0x20) - fVar1);
  }
  *(float *)(param_1 + 8) = (float)(fVar1 + (float10)*(float *)(param_1 + 8));
  return;
}




/* Function: FUN_005429e0 */

void __fastcall FUN_005429e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_c [3];
  
  puVar1 = param_1 + 4;
  *param_1 = &PTR_FUN_00593194;
  *puVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  if (local_c != puVar1) {
    *puVar1 = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[7] = 0;
  return;
}




/* Function: FUN_00542a20 */

void __thiscall FUN_00542a20(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 4;
  *param_1 = &PTR_FUN_00593194;
  *puVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x24);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  if ((undefined4 *)(param_2 + 0x10) != puVar1) {
    *puVar1 = *(undefined4 *)(param_2 + 0x10);
    param_1[5] = *(undefined4 *)(param_2 + 0x14);
    param_1[6] = *(undefined4 *)(param_2 + 0x18);
  }
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[1] = *(undefined4 *)(param_2 + 4);
  return;
}




/* Function: FUN_00542a80 */

void __fastcall FUN_00542a80(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00593194;
  return;
}




/* Function: FUN_00542a90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00542a90(int *param_1,undefined4 param_2)

{
  float fVar1;
  undefined2 extraout_var;
  uint uVar2;
  ushort uVar3;
  float10 fVar4;
  float10 fVar5;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0041d580(&local_c,param_2,param_1 + 4);
  fVar1 = SQRT(local_c * local_c + local_8 * local_8 + local_4 * local_4);
  if ((char)param_1[9] == '\0') {
    fVar4 = (float10)(**(code **)(*param_1 + 0x14))();
    fVar5 = (float10)fVar1;
    uVar2 = CONCAT22(extraout_var,
                     (ushort)(fVar4 < fVar5) << 8 | (ushort)(NAN(fVar4) || NAN(fVar5)) << 10 |
                     (ushort)(fVar4 == fVar5) << 0xe);
    if (fVar4 < fVar5) {
      param_1[8] = 0x461c4000;
      *(undefined1 *)(param_1 + 9) = 1;
      return uVar2;
    }
  }
  else {
    fVar5 = (float10)(**(code **)(*param_1 + 0x14))();
    if (fVar5 < (float10)fVar1) {
      fVar1 = (float)param_1[8];
      uVar3 = (ushort)(fVar1 < _DAT_00582ad8) << 8 |
              (ushort)(NAN(fVar1) || NAN(_DAT_00582ad8)) << 10 |
              (ushort)(fVar1 == _DAT_00582ad8) << 0xe;
      uVar2 = (uint)uVar3;
      if (fVar1 < _DAT_00582ad8 != (fVar1 == _DAT_00582ad8)) {
        *(undefined1 *)(param_1 + 9) = 0;
        return CONCAT31((uint3)(byte)(uVar3 >> 8),1);
      }
    }
    else {
      param_1[8] = 0;
      *(undefined1 *)(param_1 + 9) = 0;
      uVar2 = 0;
    }
  }
  return uVar2;
}




/* Function: FUN_00542b60 */

void * __thiscall FUN_00542b60(void *param_1,byte param_2)

{
  FUN_00542a80();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00542ba0 */

undefined4 * __thiscall
FUN_00542ba0(undefined4 *param_1,float *param_2,undefined4 param_3,undefined4 param_4,float *param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float *pfVar1;
  float *pfVar2;
  
  FUN_005429e0();
  pfVar1 = (float *)(param_1 + 0xd);
  *param_1 = &PTR_FUN_005931ac;
  *pfVar1 = 0.0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (param_5 != pfVar1) {
    *pfVar1 = *param_5;
    param_1[0xe] = param_5[1];
    param_1[0xf] = param_5[2];
  }
  pfVar2 = (float *)(param_1 + 4);
  param_1[0x13] = param_7;
  if (param_2 != pfVar2) {
    *pfVar2 = *param_2;
    param_1[5] = param_2[1];
    param_1[6] = param_2[2];
  }
  param_1[3] = param_8;
  param_1[10] = param_3;
  param_1[0xb] = param_4;
  param_1[0xc] = param_6;
  param_1[0x14] =
       *pfVar2 * *pfVar1 +
       (float)param_1[5] * (float)param_1[0xe] + (float)param_1[6] * (float)param_1[0xf];
  param_1[1] = 1;
  param_1[0x15] =
       (float)param_1[0x10] * *pfVar2 +
       (float)param_1[5] * (float)param_1[0x11] + (float)param_1[6] * (float)param_1[0x12];
  return param_1;
}




/* Function: FUN_00542c60 */

undefined4 * __thiscall FUN_00542c60(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_00542a20(param_2);
  puVar1 = param_1 + 0xd;
  puVar2 = param_1 + 0x10;
  *param_1 = &PTR_FUN_005931ac;
  *puVar1 = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *puVar2 = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if ((undefined4 *)(param_2 + 0x34) != puVar1) {
    *puVar1 = *(undefined4 *)(param_2 + 0x34);
    param_1[0xe] = *(undefined4 *)(param_2 + 0x38);
    param_1[0xf] = *(undefined4 *)(param_2 + 0x3c);
  }
  param_1[0x13] = *(undefined4 *)(param_2 + 0x4c);
  if ((undefined4 *)(param_2 + 0x40) != puVar2) {
    *puVar2 = *(undefined4 *)(param_2 + 0x40);
    param_1[0x11] = *(undefined4 *)(param_2 + 0x44);
    param_1[0x12] = *(undefined4 *)(param_2 + 0x48);
  }
  param_1[10] = *(undefined4 *)(param_2 + 0x28);
  param_1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  param_1[0x14] = *(undefined4 *)(param_2 + 0x50);
  param_1[0x15] = *(undefined4 *)(param_2 + 0x54);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
  return param_1;
}




/* Function: FUN_00542cf0 */

void __fastcall FUN_00542cf0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_005931ac;
  FUN_00542a80();
  return;
}




/* Function: FUN_00542e40 */

void * __thiscall FUN_00542e40(void *param_1,byte param_2)

{
  FUN_00542cf0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00542e60 */

undefined4 * __thiscall FUN_00542e60(undefined4 *param_1,int param_2)

{
  FUN_00542a20(param_2);
  *param_1 = &PTR_FUN_005931c4;
  param_1[0xd] = *(undefined4 *)(param_2 + 0x34);
  param_1[0xe] = *(undefined4 *)(param_2 + 0x38);
  param_1[10] = *(undefined4 *)(param_2 + 0x28);
  param_1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
  param_1[0xf] = *(undefined4 *)(param_2 + 0x3c);
  return param_1;
}




/* Function: FUN_00542ea0 */

void __fastcall FUN_00542ea0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_005931c4;
  FUN_00542a80();
  return;
}




/* Function: FUN_00542ee0 */

void * __thiscall FUN_00542ee0(void *param_1,byte param_2)

{
  FUN_00542ea0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00542f00 */

undefined4 * __thiscall
FUN_00542f00(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  FUN_005429e0();
  param_1[0xd] = param_6;
  param_1[0xe] = param_7;
  *param_1 = &PTR_FUN_005931c4;
  if (param_2 != param_1 + 4) {
    param_1[4] = *param_2;
    param_1[5] = param_2[1];
    param_1[6] = param_2[2];
  }
  param_1[10] = param_3;
  param_1[3] = param_8;
  param_1[0xf] = param_9;
  param_1[0xb] = param_4;
  param_1[0xc] = param_5;
  param_1[1] = 5;
  return param_1;
}




/* Function: FUN_00543240 */

undefined4 __fastcall FUN_00543240(int param_1)

{
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x10))();
  }
  if (*(int **)(param_1 + 0xe8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xe8) + 0x10))();
  }
  return 1;
}




/* Function: FUN_00543270 */

undefined4 __thiscall FUN_00543270(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x14))(param_2,param_3);
  }
  if (*(int **)(param_1 + 0xe8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xe8) + 0x14))(param_2,param_3);
  }
  return 1;
}




/* Function: FUN_005432b0 */

void FUN_005432b0(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00580302;
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




/* Function: FUN_00543330 */

void FUN_00543330(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  for (; param_2 != param_3; param_3 = param_3 + -4) {
    param_4 = param_4 + -1;
    *param_4 = *(undefined4 *)(param_3 + -4);
  }
  *param_1 = param_4;
  return;
}




/* Function: FUN_00543360 */

void FUN_00543360(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}




/* Function: FUN_00543780 */

void __thiscall FUN_00543780(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_00580310;
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
      FUN_005432b0();
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




/* Function: FUN_00543a20 */

undefined4 __thiscall FUN_00543a20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  uint unaff_EBP;
  bool bVar5;
  undefined4 unaff_retaddr;
  int iVar6;
  int local_50;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_4c [4];
  void *local_48;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [20];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_30 [8];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [12];
  void *pvStack_1c;
  undefined4 uStack_14;
  int *piStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0058037a;
  piStack_c = ExceptionList;
  ExceptionList = &piStack_c;
  pvVar2 = operator_new(0x170,(nothrow_t *)&DAT_005b6164);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00411050();
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"paper_fly")
  ;
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_44,".\\Textures\\Sprite\\");
  FUN_00429a60(local_44,local_28,0xffffffff);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"paper_fly")
  ;
  FUN_00410a00(0,local_28,0);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"paper_fly")
  ;
  FUN_00425400(uVar3,param_3,local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  *(undefined4 *)(param_1 + 0x97) = 0x32;
  *(undefined4 *)(param_1 + 0x9b) = 0x32;
  *(undefined2 *)(param_1 + 0x94) = 0xffff;
  *(undefined4 *)(param_1 + 0x9f) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa3) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  local_48 = operator_new(300,(nothrow_t *)&DAT_005b6164);
  bVar5 = local_48 == (void *)0x0;
  local_4 = 1;
  if (bVar5) {
    uVar3 = 0;
  }
  else {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_28,"paper_fly");
    uVar3 = FUN_00430310((undefined2 *)(param_1 + 0x94),local_28);
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  local_4 = 0xffffffff;
  if (!bVar5) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  }
  *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0x84) = 0;
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x1c))(param_2,param_3);
  local_50 = 10;
  do {
    pvVar2 = operator_new(0xec,(nothrow_t *)&DAT_005b6164);
    piStack_c = (int *)0x2;
    if (pvVar2 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_00545970(*(undefined4 *)(param_1 + 0xbc));
    }
    piStack_c = (int *)0xffffffff;
    (**(code **)(*piVar4 + 0x1c))(param_2,unaff_retaddr);
    FUN_00545240();
    iVar6 = *(int *)(param_1 + 0x88);
    if ((iVar6 == 0) ||
       ((uint)(*(int *)(param_1 + 0x90) - iVar6 >> 2) <=
        (uint)(*(int *)(param_1 + 0x8c) - iVar6 >> 2))) {
      FUN_00543780(*(undefined4 *)(param_1 + 0x8c),1,&stack0xffffffac);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x8c);
      FUN_004520c0(iVar6,1,&stack0xffffffac,param_1 + 0x84,unaff_retaddr);
      *(int *)(param_1 + 0x8c) = iVar6 + 4;
    }
    local_50 = local_50 + -1;
  } while (local_50 != 0);
  pvVar2 = operator_new(0x170,(nothrow_t *)&DAT_005b6164);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00411050();
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (abStack_4c,"leaf_fly");
  piStack_c = (int *)0x3;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (abStack_30,".\\Textures\\Sprite\\");
  FUN_00429a60(abStack_30,abStack_4c,0xffffffff);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_30);
  piStack_c = (int *)0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_4c);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (abStack_30,"leaf_fly");
  FUN_00410a00(0,abStack_30,0);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_30);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (abStack_30,"leaf_fly");
  FUN_00425400(uVar3,unaff_retaddr,abStack_30);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_30);
  *(undefined4 *)(param_1 + 0xcb) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xcf) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xc0) = 0xffff;
  *(undefined4 *)(param_1 + 0xc3) = 100;
  *(undefined4 *)(param_1 + 199) = 0x32;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  pvVar2 = operator_new(300,(nothrow_t *)&DAT_005b6164);
  piStack_c = (int *)0x4;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_30,"leaf_fly");
    unaff_EBP = unaff_EBP | 2;
    uVar3 = FUN_00430310((undefined2 *)(param_1 + 0xc0),abStack_30);
  }
  *(undefined4 *)(param_1 + 0xe8) = uVar3;
  piStack_c = (int *)0xffffffff;
  if ((unaff_EBP & 2) != 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_30);
  }
  uVar3 = local_4;
  *(undefined1 *)(*(int *)(param_1 + 0xe8) + 0x84) = 0;
  (**(code **)(**(int **)(param_1 + 0xe8) + 0x1c))(local_4,unaff_retaddr);
  iVar6 = 5;
  do {
    piStack_c = operator_new(0xec,(nothrow_t *)&DAT_005b6164);
    uStack_14 = 5;
    if (piStack_c == (int *)0x0) {
      piStack_c = (int *)0x0;
    }
    else {
      piStack_c = (int *)FUN_00545970(*(undefined4 *)(param_1 + 0xe8));
    }
    uStack_14 = 0xffffffff;
    (**(code **)(*piStack_c + 0x1c))(uVar3,puStack_8);
    FUN_00545240();
    iVar1 = *(int *)(param_1 + 0x88);
    if ((iVar1 == 0) ||
       ((uint)(*(int *)(param_1 + 0x90) - iVar1 >> 2) <=
        (uint)(*(int *)(param_1 + 0x8c) - iVar1 >> 2))) {
      FUN_00543780(*(undefined4 *)(param_1 + 0x8c),1,&piStack_c);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x8c);
      FUN_004520c0(iVar1,1,&piStack_c,param_1 + 0x84,puStack_8);
      *(int *)(param_1 + 0x8c) = iVar1 + 4;
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  ExceptionList = pvStack_1c;
  return 1;
}




/* Function: FUN_00543f30 */

undefined4 * __fastcall FUN_00543f30(undefined4 *param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_00580398;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00593240;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0xffff;
  *(undefined1 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x97) = 0;
  *(undefined4 *)((int)param_1 + 0x9b) = 0;
  *(undefined4 *)((int)param_1 + 0x9f) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xa3) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xa7) = 0;
  *(undefined4 *)((int)param_1 + 0xab) = 0;
  *(undefined4 *)((int)param_1 + 0xaf) = 0xffffffff;
  *(undefined2 *)((int)param_1 + 0xb3) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xb5) = 0;
  *(undefined2 *)((int)param_1 + 0xb7) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0xffff;
  *(undefined1 *)((int)param_1 + 0xc2) = 0;
  *(undefined4 *)((int)param_1 + 0xc3) = 0;
  *(undefined4 *)((int)param_1 + 199) = 0;
  *(undefined4 *)((int)param_1 + 0xcb) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xcf) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xd3) = 0;
  *(undefined4 *)((int)param_1 + 0xd7) = 0;
  *(undefined4 *)((int)param_1 + 0xdb) = 0xffffffff;
  *(undefined2 *)((int)param_1 + 0xdf) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xe1) = 0;
  *(undefined2 *)((int)param_1 + 0xe3) = 0;
  param_1[0x2f] = 0;
  param_1[0x3a] = 0;
  if ((void *)param_1[0x22] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x22]);
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 1;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00544060 */

void __fastcall FUN_00544060(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005803c6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00593240;
  local_4 = 1;
  local_10 = param_1;
  for (uVar5 = 0;
      (iVar1 = param_1[0x22], iVar1 != 0 && (uVar5 < (uint)(param_1[0x23] - iVar1 >> 2)));
      uVar5 = uVar5 + 1) {
    piVar2 = *(int **)(iVar1 + uVar5 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(1);
    }
  }
  if ((void *)param_1[0x22] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x22]);
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if ((int *)param_1[0x2f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2f] + 0xc))(1);
  }
  if ((void *)param_1[0x22] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x22]);
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *param_1 = &PTR_LAB_00583740;
  local_4 = 0xffffffff;
  if ((void *)param_1[0x1b] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x1b]);
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  puVar3 = (undefined4 *)param_1[0x18];
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar3;
  }
  FUN_004f67b0(&local_10,uVar4,puVar3);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_1[0x18]);
}




/* Function: FUN_005441e0 */

void * __thiscall FUN_005441e0(void *param_1,byte param_2)

{
  FUN_00544060();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00544200 */

void FUN_00544200(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005803e2;
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




/* Function: FUN_00544280 */

void __thiscall FUN_00544280(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_005803f0;
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
      FUN_00544200();
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




/* Function: FUN_00544520 */

void __thiscall FUN_00544520(int param_1,undefined4 param_2)

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
  FUN_00544280(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_00544590 */

int __fastcall FUN_00544590(int param_1)

{
  void *pvVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  char *pcVar3;
  undefined1 local_31;
  void *local_30;
  int local_2c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005804ce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_4 = 0;
  local_2c = param_1;
  pvVar1 = operator_new(0x28,(nothrow_t *)&DAT_005b6164);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    local_30 = pvVar1;
    FUN_0040cf60(&local_31,&local_31);
  }
  local_4._0_1_ = 0;
  local_30 = pvVar1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"name");
  pcVar3 = "Pizza";
  local_4._0_1_ = 2;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,pcVar3);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"desc");
  pcVar3 = 
  "America\'s favorite thick crust pizza - crispy on the outside, soft and chewy on the inside.";
  local_4._0_1_ = 3;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,pcVar3);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"thumbnail")
  ;
  pcVar3 = "thumbnail\\pizza1";
  local_4._0_1_ = 4;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,pcVar3);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  FUN_00544520(&local_30);
  pvVar1 = operator_new(0x28,(nothrow_t *)&DAT_005b6164);
  local_4._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    local_30 = pvVar1;
    FUN_0040cf60(&local_31,&local_31);
  }
  local_4._0_1_ = 0;
  local_30 = pvVar1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"name");
  pcVar3 = "Money";
  local_4._0_1_ = 6;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,pcVar3);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"desc");
  pcVar3 = "United States Dollars";
  local_4._0_1_ = 7;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,pcVar3);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"thumbnail")
  ;
  pcVar3 = "thumbnail\\money";
  local_4._0_1_ = 8;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,pcVar3);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  FUN_00544520(&local_30);
  pvVar1 = operator_new(0x28,(nothrow_t *)&DAT_005b6164);
  local_4._0_1_ = 9;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    local_30 = pvVar1;
    FUN_0040cf60(&local_31,&local_31);
  }
  local_4._0_1_ = 0;
  local_30 = pvVar1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"name");
  pcVar3 = "Skateboard";
  local_4._0_1_ = 10;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,pcVar3);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"desc");
  pcVar3 = "Skateboard";
  local_4._0_1_ = 0xb;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,pcVar3);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"thumbnail")
  ;
  pcVar3 = "thumbnail\\skateboard";
  local_4._0_1_ = 0xc;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,pcVar3);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"icon");
  pcVar3 = "thumbnail\\skateboard";
  local_4._0_1_ = 0xd;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,pcVar3);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"speed");
  pcVar3 = "1";
  local_4._0_1_ = 0xe;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,pcVar3);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"ollie");
  pcVar3 = "1";
  local_4._0_1_ = 0xf;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,pcVar3);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"grid");
  pcVar3 = "1";
  local_4._0_1_ = 0x10;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,pcVar3);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"mobility");
  pcVar3 = "1";
  local_4._0_1_ = 0x11;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,pcVar3);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"price");
  pcVar3 = "10";
  local_4._0_1_ = 0x12;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,pcVar3);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"deck");
  pcVar3 = "0";
  local_4._0_1_ = 0x13;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,pcVar3);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  FUN_00544520(&local_30);
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00544a60 */

void __fastcall FUN_00544a60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00593874;
  return;
}




/* Function: FUN_00544a70 */

void __fastcall FUN_00544a70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00593874;
  return;
}




/* Function: FUN_00544b90 */

void FUN_00544b90(int param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  
  pfVar2 = operator_new(param_2 * 4,(nothrow_t *)&DAT_005b6164);
  if (0 < param_2) {
    fVar1 = 0.0;
    pfVar3 = pfVar2;
    do {
      fVar1 = fVar1 + *(float *)((param_1 - (int)pfVar2) + (int)pfVar3);
      param_2 = param_2 + -1;
      *pfVar3 = fVar1;
      pfVar3 = pfVar3 + 1;
    } while (param_2 != 0);
  }
  return;
}




/* Function: FUN_00544be0 */

undefined4 * __thiscall
FUN_00544be0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  FUN_00544a60();
  param_1[4] = (float)param_3;
  param_1[5] = (float)param_4;
  *param_1 = &PTR_FUN_00593884;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = param_5;
  param_1[6] = (float)(param_4 - param_3) / (float)(param_5 + -1);
  uVar1 = FUN_00544b90(param_2,param_5);
  param_1[2] = uVar1;
  return param_1;
}




/* Function: FUN_00544c50 */

void __fastcall FUN_00544c50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00593884;
  operator_delete__((void *)param_1[2]);
  param_1[2] = 0;
  param_1[1] = 0;
  FUN_00544a70();
  return;
}




/* Function: FUN_00544c80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00544c80(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 extraout_ST0;
  
  if ((*(float *)(param_1 + 0x10) <= param_2) && (param_2 <= *(float *)(param_1 + 0x14))) {
    iVar2 = FUN_004cf110();
    iVar3 = iVar2 + 1;
    if (extraout_ST0 - (float10)iVar2 <= (float10)_DAT_00593898) {
      iVar3 = iVar2;
    }
    iVar1 = *(int *)(param_1 + 4);
    return ((float10)*(float *)(iVar1 + iVar3 * 4) - (float10)*(float *)(iVar1 + iVar2 * 4)) *
           (extraout_ST0 - (float10)iVar2) + (float10)*(float *)(iVar1 + iVar2 * 4);
  }
  return (float10)_DAT_00582ad8;
}




/* Function: FUN_00544cf0 */

undefined4 * __thiscall
FUN_00544cf0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_00544a60();
  param_1[2] = param_3;
  *param_1 = &PTR_FUN_005938a0;
  param_1[1] = param_2;
  param_1[4] = param_4;
  uVar1 = FUN_00544b90(param_2,param_4);
  param_1[3] = uVar1;
  return param_1;
}




/* Function: FUN_00544d30 */

void __fastcall FUN_00544d30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_005938a0;
  operator_delete__((void *)param_1[3]);
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00544a70();
  return;
}




/* Function: FUN_00544d60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00544d60(int param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    return (float10)_DAT_00582ad8;
  }
  if (iVar2 != 1) {
    pfVar3 = *(float **)(param_1 + 8);
    if (param_2 < *pfVar3) {
      return (float10)**(float **)(param_1 + 4);
    }
    iVar4 = 1;
    pfVar1 = pfVar3;
    if (1 < iVar2) {
      do {
        if (param_2 < pfVar1[1]) {
          pfVar1 = (float *)(*(int *)(param_1 + 4) + iVar4 * 4);
          return ((float10)*pfVar1 - (float10)pfVar1[-1]) *
                 (((float10)param_2 - (float10)pfVar3[iVar4 + -1]) /
                 ((float10)pfVar3[iVar4] - (float10)pfVar3[iVar4 + -1])) + (float10)pfVar1[-1];
        }
        iVar4 = iVar4 + 1;
        pfVar1 = pfVar1 + 1;
      } while (iVar4 < iVar2);
    }
    return (float10)*(float *)(*(int *)(param_1 + 4) + -4 + iVar2 * 4);
  }
  return (float10)**(float **)(param_1 + 4);
}




/* Function: FUN_00544e00 */

void * __thiscall FUN_00544e00(void *param_1,byte param_2)

{
  FUN_00544a70();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00544e20 */

void * __thiscall FUN_00544e20(void *param_1,byte param_2)

{
  FUN_00544c50();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00544e40 */

void * __thiscall FUN_00544e40(void *param_1,byte param_2)

{
  FUN_00544d30();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00544e60 */

int __thiscall FUN_00544e60(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 4;
}




/* Function: FUN_00544e70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00544e70(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float10 fVar4;
  int local_14;
  float local_c;
  float local_8;
  float local_4;
  
  fVar2 = _DAT_005933e8 - DAT_005933e4;
  pfVar3 = *(float **)(param_1 + 4);
  local_c = 0.0;
  local_8 = 0.0;
  local_4 = 0.0;
  local_14 = 0;
  do {
    fVar1 = ((float)local_14 + _DAT_00583340) * _DAT_0058334c * fVar2 + DAT_005933e4;
    fVar4 = (float10)FUN_00544c80(fVar1);
    local_c = (float)(fVar4 * (float10)*pfVar3 + (float10)local_c);
    fVar4 = (float10)FUN_00544c80(fVar1);
    local_8 = (float)(fVar4 * (float10)*pfVar3 + (float10)local_8);
    fVar4 = (float10)FUN_00544c80(fVar1);
    fVar1 = *pfVar3;
    local_14 = local_14 + 1;
    pfVar3 = pfVar3 + 1;
    local_4 = (float)(fVar4 * (float10)fVar1 + (float10)local_4);
  } while (local_14 < 100);
  *param_2 = local_c;
  param_2[1] = local_8;
  param_2[2] = local_4;
  return;
}




/* Function: FUN_00544f40 */

int __thiscall FUN_00544f40(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005804e0;
  local_10 = ExceptionList;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
  }
  ExceptionList = &local_10;
  cVar1 = FUN_0045bd10(iVar2);
  if (cVar1 != '\0') {
    local_8 = 0;
    uVar3 = FUN_0041df20(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(param_1 + 4),param_1,param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_00544fe0 */

undefined4 __thiscall FUN_00544fe0(undefined4 param_1,undefined4 param_2)

{
  FUN_00544f40(param_2);
  return param_1;
}




/* Function: FUN_00545000 */

int __fastcall FUN_00545000(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0045c940(100,0);
  return param_1;
}




/* Function: FUN_00545020 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00545020(int *param_1,undefined4 param_2)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  int local_14;
  undefined1 local_10 [16];
  
  FUN_00545000();
  local_14 = 0;
  do {
    fVar1 = (_DAT_005933e8 - DAT_005933e4) * ((float)local_14 + _DAT_00583340) * _DAT_0058334c +
            DAT_005933e4;
    pfVar2 = (float *)FUN_00544e60(local_14);
    fVar3 = (float10)(**(code **)(*param_1 + 4))(fVar1);
    *pfVar2 = (float)fVar3;
    local_14 = local_14 + 1;
  } while (local_14 < 100);
  FUN_00544fe0(local_10);
  FUN_00532a60();
  return param_2;
}




/* Function: FUN_005450b0 */

void __fastcall FUN_005450b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_c [3];
  
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  if (local_c != puVar1) {
    *puVar1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




/* Function: FUN_005450e0 */

void __thiscall FUN_005450e0(int param_1,float param_2,float param_3,float param_4)

{
  *(float *)(param_1 + 4) = param_2 + *(float *)(param_1 + 4);
  *(float *)(param_1 + 8) = param_3 + *(float *)(param_1 + 8);
  *(float *)(param_1 + 0xc) = param_4 + *(float *)(param_1 + 0xc);
  return;
}




/* Function: FUN_00545200 */

void __thiscall FUN_00545200(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)(param_1 + 0xd8)) {
    *(undefined4 *)(param_1 + 0xd8) = *param_2;
    *(undefined4 *)(param_1 + 0xdc) = param_2[1];
    *(undefined4 *)(param_1 + 0xe0) = param_2[2];
  }
  *(undefined1 *)(param_1 + 0xe8) = 1;
  *(undefined1 *)(param_1 + 0xe9) = 1;
  return;
}




/* Function: FUN_00545240 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00545240(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 local_c [3];
  
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xe9) = 0;
  if (local_c != (undefined4 *)(param_1 + 0xd8)) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  if (local_c != (undefined4 *)(param_1 + 0xc0)) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (local_c != (undefined4 *)(param_1 + 0xa0)) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  iVar3 = rand();
  *(float *)(param_1 + 0xb0) = _DAT_005b9004 * (float)iVar3 * _DAT_005938b4 * _DAT_00587fb8;
  iVar3 = rand();
  *(float *)(param_1 + 0xb4) = _DAT_005b9004 * (float)iVar3 * _DAT_005938b4 * _DAT_00587fb8;
  iVar3 = rand();
  *(float *)(param_1 + 0xb8) = _DAT_005b9004 * (float)iVar3 * _DAT_005938b4 * _DAT_00587fb8;
  iVar3 = rand();
  fVar2 = _DAT_005b9004;
  fVar1 = (float)iVar3 * _DAT_005938b4;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(float *)(param_1 + 0xbc) = fVar2 * fVar1 * _DAT_00587fb8;
  return;
}




/* Function: FUN_00545360 */

undefined4 __fastcall FUN_00545360(int param_1)

{
  if (*(int *)(param_1 + 0xac) == -1) {
    *(undefined4 *)(param_1 + 0xac) = 10;
  }
  if (0 < *(int *)(param_1 + 0xac)) {
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + -1;
    return 1;
  }
  FUN_00545240();
  return 1;
}




/* Function: FUN_005453a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005453a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  void *pvVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float *pfVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 local_a0;
  float local_9c;
  undefined4 local_98;
  undefined1 local_94 [4];
  void *local_90;
  void *local_8c;
  undefined4 local_88;
  float local_84 [3];
  undefined1 local_78 [4];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [8];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_00580503;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0xe8) != '\0') {
    if (*(char *)(param_1 + 0xe9) == '\0') {
      ExceptionList = &local_c;
      FUN_005450b0();
      local_4 = 0;
      local_a0 = 0;
      local_9c = -9.8156;
      local_98 = 0;
      pfVar9 = (float *)(param_1 + 0xa0);
      uVar7 = FUN_0041d5b0(local_24,&local_a0,*(undefined4 *)(param_1 + 0x88),
                           *(undefined4 *)(param_1 + 0x88),0x40000000);
      uVar7 = FUN_0041d5b0(local_30,uVar7);
      uVar7 = FUN_0043fa40(local_18,uVar7);
      uVar7 = FUN_0041d5b0(local_84,pfVar9,*(undefined4 *)(param_1 + 0x88),uVar7);
      FUN_0041d550(&local_a0,uVar7);
      if (*(float *)(param_1 + 0x88) <= (float)_DAT_00582ae8) {
        if (local_84 != pfVar9) {
          *pfVar9 = 0.0;
          *(undefined4 *)(param_1 + 0xa4) = 0;
          *(undefined4 *)(param_1 + 0xa8) = 0;
        }
      }
      else {
        pfVar8 = (float *)FUN_0043fa40(local_84,&local_a0,*(undefined4 *)(param_1 + 0x88));
        if (pfVar8 != pfVar9) {
          *pfVar9 = *pfVar8;
          *(float *)(param_1 + 0xa4) = pfVar8[1];
          *(float *)(param_1 + 0xa8) = pfVar8[2];
        }
      }
      puVar13 = local_78;
      pfVar8 = (float *)(param_1 + 0xd8);
      uVar14 = 1;
      *pfVar9 = *pfVar9 - *pfVar9 * _DAT_00588b48;
      *(float *)(param_1 + 0xa4) =
           *(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0xa4) * _DAT_00591a30;
      *(float *)(param_1 + 0xa8) =
           *(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0xa8) * _DAT_00588b48;
      uVar7 = param_2;
      iVar5 = param_1;
      pfVar12 = pfVar8;
      FUN_0041ce40(param_2,param_1,pfVar8,puVar13,1);
      FUN_004fed80(uVar7,iVar5,pfVar12,puVar13,uVar14);
      puVar13 = local_78;
      uVar7 = 5;
      iVar5 = param_1;
      pfVar12 = pfVar8;
      FUN_0041ce40(param_2,param_1,pfVar8,puVar13,5);
      FUN_004fed80(param_2,iVar5,pfVar12,puVar13,uVar7);
      pfVar12 = (float *)(param_1 + 0xc0);
      *pfVar9 = local_74 + *pfVar9;
      *(float *)(param_1 + 0xa4) = local_70 + *(float *)(param_1 + 0xa4);
      *(float *)(param_1 + 0xa8) = local_6c + *(float *)(param_1 + 0xa8);
      *pfVar12 = *(float *)(param_1 + 0x8c) * *(float *)(param_1 + 0x88) * *pfVar9 * _DAT_00591d40;
      *(float *)(param_1 + 0xc4) =
           *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x88) *
           _DAT_00590a90;
      *(float *)(param_1 + 200) =
           *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0xa8) *
           _DAT_00588de8;
      fVar1 = SQRT(*(float *)(param_1 + 200) * *(float *)(param_1 + 200) +
                   *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0xc4) + *pfVar12 * *pfVar12);
      if (_DAT_00587fa8 < fVar1) {
        pfVar9 = (float *)FUN_0043fa40(local_84,pfVar12,fVar1);
        if (pfVar9 != pfVar12) {
          *pfVar12 = *pfVar9;
          *(float *)(param_1 + 0xc4) = pfVar9[1];
          *(float *)(param_1 + 200) = pfVar9[2];
        }
        *pfVar12 = *pfVar12 * _DAT_00587fa8;
        *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) * _DAT_00587fa8;
        *(float *)(param_1 + 200) = *(float *)(param_1 + 200) * _DAT_00587fa8;
      }
      uVar6 = 0;
      fVar1 = (*(float *)(param_1 + 200) * *(float *)(param_1 + 200) + *pfVar12 * *pfVar12) *
              (float)*(int *)(param_1 + 0x84) * _DAT_005938b8;
      *(float *)(param_1 + 0x98) = fVar1;
      fVar1 = fVar1 + *(float *)(param_1 + 0x9c);
      *(float *)(param_1 + 0x9c) = fVar1;
      if (_DAT_005b9004 + _DAT_005b9004 < fVar1) {
        *(undefined4 *)(param_1 + 0x9c) = 0;
      }
      local_68 = *pfVar8;
      local_64 = *(undefined4 *)(param_1 + 0xdc);
      local_60 = *(undefined4 *)(param_1 + 0xe0);
      *pfVar8 = *pfVar8 + *pfVar12;
      *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xc4) + *(float *)(param_1 + 0xdc);
      *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 200) + *(float *)(param_1 + 0xe0);
      fVar11 = (float10)FUN_0041ce10();
      *(float *)(param_1 + 0x88) = (float)fVar11;
      local_90 = (void *)0x0;
      local_8c = (void *)0x0;
      local_88 = 0;
      puVar13 = local_94;
      pfVar9 = &local_68;
      uVar7 = 0x41700000;
      local_4 = CONCAT31(local_4._1_3_,1);
      pfVar12 = pfVar8;
      FUN_0041c940(pfVar8,pfVar9,0x41700000,puVar13);
      FUN_0041f800(pfVar12,pfVar9,uVar7,puVar13);
      puVar10 = (undefined4 *)((int)local_90 + 0x14);
      for (; (local_90 != (void *)0x0 && (uVar6 < (uint)((int)local_8c - (int)local_90 >> 5)));
          uVar6 = uVar6 + 1) {
        local_9c = (float)puVar10[-1];
        local_98 = *puVar10;
        local_a0 = puVar10[-2];
        if ((float)_DAT_0058ac20 < local_9c) {
          local_a0 = 0;
          local_9c = 1.0;
          local_98 = 0;
        }
        pfVar9 = (float *)FUN_0041d5b0(local_84,&local_a0,puVar10[1]);
        puVar10 = puVar10 + 8;
        *pfVar8 = *pfVar9 + *pfVar8;
        *(float *)(param_1 + 0xdc) = pfVar9[1] + *(float *)(param_1 + 0xdc);
        *(float *)(param_1 + 0xe0) = pfVar9[2] + *(float *)(param_1 + 0xe0);
      }
      pfVar9 = (float *)FUN_0041d580(local_84,param_3,pfVar8);
      if (SQRT(pfVar9[2] * pfVar9[2] + pfVar9[1] * pfVar9[1] + *pfVar9 * *pfVar9) <= _DAT_00588d90)
      {
        if (*(int *)(param_1 + 0xac) != -1) {
          *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
        }
      }
      else {
        FUN_00545360();
      }
      pvVar3 = local_8c;
      pvVar2 = local_90;
      if (local_90 != (void *)0x0) {
        for (; pvVar2 != pvVar3; pvVar2 = (void *)((int)pvVar2 + 0x20)) {
          FUN_004506b0(0);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete(local_90);
      }
      local_90 = (void *)0x0;
      local_8c = (void *)0x0;
      local_88 = 0;
      local_4 = 0xffffffff;
      FUN_00407150();
    }
    else {
      local_9c = *(float *)(param_1 + 0xdc) - _DAT_00588d50;
      local_98 = *(undefined4 *)(param_1 + 0xe0);
      puVar10 = (undefined4 *)(param_1 + 0xd8);
      local_a0 = *puVar10;
      ExceptionList = &local_c;
      FUN_0041d7e0();
      puVar16 = &local_a0;
      puVar13 = local_5c;
      puVar15 = puVar10;
      FUN_0041c940(puVar13,puVar10,puVar16);
      cVar4 = FUN_0041f720(puVar13,puVar15,puVar16);
      if (cVar4 == '\0') {
        FUN_00545240();
      }
      else {
        if (&local_54 != puVar10) {
          *puVar10 = local_54;
          *(undefined4 *)(param_1 + 0xdc) = local_50;
          *(undefined4 *)(param_1 + 0xe0) = local_4c;
        }
        *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xdc) + _DAT_0058ae70;
        *(undefined1 *)(param_1 + 0xe9) = 0;
        iVar5 = rand();
        *(float *)(param_1 + 0x8c) = (float)iVar5 * _DAT_005938bc + _DAT_0058a658;
        iVar5 = rand();
        *(float *)(param_1 + 0x90) = (float)iVar5 * _DAT_005938bc + _DAT_0058a658;
        iVar5 = rand();
        *(float *)(param_1 + 0x94) = (float)iVar5 * _DAT_005938bc + _DAT_0058a658;
        uVar6 = rand();
        uVar6 = uVar6 & 0x80000001;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
        }
        *(uint *)(param_1 + 0x84) = uVar6;
        if (uVar6 == 0) {
          *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00545970 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00545970(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 local_c [3];
  
  FUN_0040d9f0();
  puVar1 = param_1 + 0x28;
  *param_1 = &PTR_LAB_005938c0;
  puVar2 = param_1 + 0x30;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *puVar1 = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  puVar3 = param_1 + 0x36;
  *puVar2 = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *puVar3 = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  if (local_c != puVar3) {
    *puVar3 = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
  }
  if (local_c != puVar2) {
    *puVar2 = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
  }
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)((int)param_1 + 0xe9) = 0;
  param_1[0x22] = 0;
  if (local_c != puVar1) {
    *puVar1 = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
  }
  iVar6 = rand();
  param_1[0x2c] = _DAT_005b9004 * (float)iVar6 * _DAT_005938b4 * _DAT_00587fb8;
  iVar6 = rand();
  param_1[0x2d] = _DAT_005b9004 * (float)iVar6 * _DAT_005938b4 * _DAT_00587fb8;
  iVar6 = rand();
  param_1[0x2e] = _DAT_005b9004 * (float)iVar6 * _DAT_005938b4 * _DAT_00587fb8;
  iVar6 = rand();
  fVar5 = _DAT_005b9004;
  fVar4 = (float)iVar6 * _DAT_005938b4;
  param_1[0x2b] = 0xffffffff;
  param_1[0x39] = param_2;
  param_1[0x2f] = fVar5 * fVar4 * _DAT_00587fb8;
  return param_1;
}




/* Function: FUN_00545ae0 */

void __fastcall FUN_00545ae0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00583740;
  FUN_004f79d0();
  FUN_0040cf00();
                    /* WARNING: Could not recover jumptable at 0x00545afd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4));
  return;
}




/* Function: FUN_00545b10 */

void * __thiscall FUN_00545b10(void *param_1,byte param_2)

{
  FUN_00545ae0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00545bf0 */

void __thiscall FUN_00545bf0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[4] = param_2[1];
  param_1[8] = param_2[2];
  return;
}




/* Function: FUN_00545c08 */

void __thiscall FUN_00545c08(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 0x24) = param_2[2];
  return;
}




/* Function: FUN_00545c20 */

void __thiscall FUN_00545c20(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2[1];
  *(undefined4 *)(param_1 + 0x28) = param_2[2];
  return;
}




/* Function: FUN_00545c38 */

void __thiscall FUN_00545c38(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2[1];
  *(undefined4 *)(param_1 + 0x38) = param_2[2];
  return;
}




/* Function: FUN_00545c50 */

undefined4 *
FUN_00545c50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005810e6;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff58;
  ExceptionList = &local_10;
  _eh_vector_constructor_iterator_
            (&local_94,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  local_54 = 0x3f800000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  if (&local_94 != &local_54) {
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
  }
  local_44 = 0;
  local_40 = 0x3f800000;
  local_3c = 0;
  local_38 = 0;
  if (&local_84 != &local_44) {
    local_84 = 0;
    local_7c = 0;
    local_78 = 0;
  }
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x3f800000;
  local_28 = 0;
  if (&local_74 != &local_34) {
    local_74 = 0;
    local_70 = 0;
    local_68 = 0;
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  if (&local_64 != &local_24) {
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0x3f800000;
  }
  local_8 = 0;
  local_94 = param_2;
  local_80 = param_3;
  local_6c = param_4;
  _eh_vector_constructor_iterator_(param_1,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150)
  ;
  if (param_1 != &local_94) {
    *param_1 = local_94;
    param_1[1] = local_90;
    param_1[2] = local_8c;
    param_1[3] = local_88;
  }
  if (param_1 + 4 != &local_84) {
    param_1[4] = local_84;
    param_1[5] = local_80;
    param_1[6] = local_7c;
    param_1[7] = local_78;
  }
  if (param_1 + 8 != &local_74) {
    param_1[8] = local_74;
    param_1[9] = local_70;
    param_1[10] = local_6c;
    param_1[0xb] = local_68;
  }
  if (param_1 + 0xc != &local_64) {
    param_1[0xc] = local_64;
    param_1[0xd] = local_60;
    param_1[0xe] = local_5c;
    param_1[0xf] = local_58;
  }
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(&local_94,0x10,4,FUN_00407150);
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_00545edc */

undefined4 * FUN_00545edc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00581112;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff58;
  ExceptionList = &local_10;
  _eh_vector_constructor_iterator_
            (&local_94,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  local_54 = 0x3f800000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  if (&local_94 != &local_54) {
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
  }
  local_44 = 0;
  local_40 = 0x3f800000;
  local_3c = 0;
  local_38 = 0;
  if (&local_84 != &local_44) {
    local_84 = 0;
    local_7c = 0;
    local_78 = 0;
  }
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x3f800000;
  local_28 = 0;
  if (&local_74 != &local_34) {
    local_74 = 0;
    local_70 = 0;
    local_68 = 0;
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  if (&local_64 != &local_24) {
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0x3f800000;
  }
  local_8 = 0;
  local_94 = *param_2;
  local_80 = param_2[1];
  local_6c = param_2[2];
  _eh_vector_constructor_iterator_(param_1,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150)
  ;
  if (param_1 != &local_94) {
    *param_1 = local_94;
    param_1[1] = local_90;
    param_1[2] = local_8c;
    param_1[3] = local_88;
  }
  if (param_1 + 4 != &local_84) {
    param_1[4] = local_84;
    param_1[5] = local_80;
    param_1[6] = local_7c;
    param_1[7] = local_78;
  }
  if (param_1 + 8 != &local_74) {
    param_1[8] = local_74;
    param_1[9] = local_70;
    param_1[10] = local_6c;
    param_1[0xb] = local_68;
  }
  if (param_1 + 0xc != &local_64) {
    param_1[0xc] = local_64;
    param_1[0xd] = local_60;
    param_1[0xe] = local_5c;
    param_1[0xf] = local_58;
  }
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(&local_94,0x10,4,FUN_00407150);
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_00546168 */

undefined4 *
FUN_00546168(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0058113e;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff58;
  ExceptionList = &local_10;
  _eh_vector_constructor_iterator_
            (&local_94,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  local_54 = 0x3f800000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  if (&local_94 != &local_54) {
    local_94 = 0x3f800000;
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
  }
  local_44 = 0;
  local_40 = 0x3f800000;
  local_3c = 0;
  local_38 = 0;
  if (&local_84 != &local_44) {
    local_84 = 0;
    local_80 = 0x3f800000;
    local_7c = 0;
    local_78 = 0;
  }
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x3f800000;
  local_28 = 0;
  if (&local_74 != &local_34) {
    local_74 = 0;
    local_70 = 0;
    local_6c = 0x3f800000;
    local_68 = 0;
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  if (&local_64 != &local_24) {
    local_58 = 0x3f800000;
  }
  local_8 = 0;
  local_64 = param_2;
  local_60 = param_3;
  local_5c = param_4;
  _eh_vector_constructor_iterator_(param_1,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150)
  ;
  if (param_1 != &local_94) {
    *param_1 = local_94;
    param_1[1] = local_90;
    param_1[2] = local_8c;
    param_1[3] = local_88;
  }
  if (param_1 + 4 != &local_84) {
    param_1[4] = local_84;
    param_1[5] = local_80;
    param_1[6] = local_7c;
    param_1[7] = local_78;
  }
  if (param_1 + 8 != &local_74) {
    param_1[8] = local_74;
    param_1[9] = local_70;
    param_1[10] = local_6c;
    param_1[0xb] = local_68;
  }
  if (param_1 + 0xc != &local_64) {
    param_1[0xc] = local_64;
    param_1[0xd] = local_60;
    param_1[0xe] = local_5c;
    param_1[0xf] = local_58;
  }
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(&local_94,0x10,4,FUN_00407150);
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_005463f0 */

undefined4 * FUN_005463f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0058116a;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff58;
  ExceptionList = &local_10;
  _eh_vector_constructor_iterator_
            (&local_94,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  local_54 = 0x3f800000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  if (&local_94 != &local_54) {
    local_94 = 0x3f800000;
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
  }
  local_44 = 0;
  local_40 = 0x3f800000;
  local_3c = 0;
  local_38 = 0;
  if (&local_84 != &local_44) {
    local_84 = 0;
    local_80 = 0x3f800000;
    local_7c = 0;
    local_78 = 0;
  }
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x3f800000;
  local_28 = 0;
  if (&local_74 != &local_34) {
    local_74 = 0;
    local_70 = 0;
    local_6c = 0x3f800000;
    local_68 = 0;
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  if (&local_64 != &local_24) {
    local_58 = 0x3f800000;
  }
  local_8 = 0;
  local_64 = *param_2;
  local_60 = param_2[1];
  local_5c = param_2[2];
  _eh_vector_constructor_iterator_(param_1,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150)
  ;
  if (param_1 != &local_94) {
    *param_1 = local_94;
    param_1[1] = local_90;
    param_1[2] = local_8c;
    param_1[3] = local_88;
  }
  if (param_1 + 4 != &local_84) {
    param_1[4] = local_84;
    param_1[5] = local_80;
    param_1[6] = local_7c;
    param_1[7] = local_78;
  }
  if (param_1 + 8 != &local_74) {
    param_1[8] = local_74;
    param_1[9] = local_70;
    param_1[10] = local_6c;
    param_1[0xb] = local_68;
  }
  if (param_1 + 0xc != &local_64) {
    param_1[0xc] = local_64;
    param_1[0xd] = local_60;
    param_1[0xe] = local_5c;
    param_1[0xf] = local_58;
  }
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(&local_94,0x10,4,FUN_00407150);
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_00546678 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_00546678(float *param_1,float *param_2,float *param_3)

{
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00581196;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff58;
  ExceptionList = &local_10;
  _eh_vector_constructor_iterator_
            (&local_94,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  local_54 = 0x3f800000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x3f800000;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x3f800000;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_8 = 0;
  local_8c = *param_3;
  local_94 = _DAT_005bad2c - _DAT_005bad24 * local_8c * local_8c;
  local_60 = param_3[1];
  local_84 = _DAT_005bad20 * local_8c * local_60;
  local_5c = param_3[2];
  local_74 = _DAT_005bad20 * local_8c * local_5c;
  local_64 = *param_2 * _DAT_005bad24 * local_8c;
  local_90 = _DAT_005bad20 * local_60 * local_8c;
  local_70 = _DAT_005bad20 * local_60 * local_5c;
  local_80 = _DAT_005bad2c - _DAT_005bad24 * local_60 * local_60;
  local_8c = local_8c * _DAT_005bad20 * local_5c;
  local_7c = _DAT_005bad20 * local_5c * local_60;
  local_60 = param_2[1] * _DAT_005bad24 * local_60;
  local_6c = _DAT_005bad2c - _DAT_005bad24 * local_5c * local_5c;
  local_5c = _DAT_005bad24 * param_2[2] * local_5c;
  local_88 = 0.0;
  local_78 = 0.0;
  local_68 = 0.0;
  local_58 = 1.0;
  _eh_vector_constructor_iterator_(param_1,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150)
  ;
  if (param_1 != &local_94) {
    *param_1 = local_94;
    param_1[1] = local_90;
    param_1[2] = local_8c;
    param_1[3] = local_88;
  }
  if (param_1 + 4 != &local_84) {
    param_1[4] = local_84;
    param_1[5] = local_80;
    param_1[6] = local_7c;
    param_1[7] = local_78;
  }
  if (param_1 + 8 != &local_74) {
    param_1[8] = local_74;
    param_1[9] = local_70;
    param_1[10] = local_6c;
    param_1[0xb] = local_68;
  }
  if (param_1 + 0xc != &local_64) {
    param_1[0xc] = local_64;
    param_1[0xd] = local_60;
    param_1[0xe] = local_5c;
    param_1[0xf] = local_58;
  }
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(&local_94,0x10,4,FUN_00407150);
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_005469b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_005469b0(float *param_1,float *param_2,float param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005811c2;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff50;
  ExceptionList = &local_10;
  _eh_vector_constructor_iterator_
            (&local_94,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  local_54[0] = 1.0;
  local_54[1] = 0.0;
  local_54[2] = 0.0;
  local_54[3] = 0.0;
  if (&local_94 != local_54) {
    local_88 = 0.0;
  }
  local_54[4] = 0.0;
  local_54[5] = 1.0;
  local_54[6] = 0.0;
  local_54[7] = 0.0;
  if (&local_84 != local_54 + 4) {
    local_78 = 0.0;
  }
  local_54[8] = 0.0;
  local_54[9] = 0.0;
  local_54[10] = 1.0;
  local_54[0xb] = 0.0;
  if (&local_74 != local_54 + 8) {
    local_68 = 0.0;
  }
  local_54[0xc] = 0.0;
  local_54[0xd] = 0.0;
  local_54[0xe] = 0.0;
  local_54[0xf] = 1.0;
  if (&local_64 != local_54 + 0xc) {
    local_64 = 0.0;
    local_60 = 0.0;
    local_5c = 0.0;
    local_58 = 1.0;
  }
  local_8 = 0;
  fVar1 = (float10)fcos((float10)param_3);
  fVar2 = (float10)fsin((float10)param_3);
  fVar3 = (float10)_DAT_005bad68;
  fVar4 = (float10)*param_2;
  fVar7 = fVar3 - fVar1;
  local_94 = (float)((fVar3 - fVar4 * fVar4) * fVar1 + fVar4 * fVar4);
  fVar5 = (float10)param_2[1];
  fVar8 = fVar4 * fVar5 * fVar7;
  fVar6 = (float10)param_2[2];
  fVar4 = fVar4 * fVar6 * fVar7;
  local_90 = (float)(fVar6 * fVar2 + fVar8);
  local_8c = (float)(-fVar5 * fVar2 + fVar4);
  local_84 = (float)(-fVar6 * fVar2 + fVar8);
  local_80 = (float)((fVar3 - fVar5 * fVar5) * (float10)(float)fVar1 + fVar5 * fVar5);
  fVar7 = fVar5 * fVar6 * fVar7;
  fVar3 = (float10)*param_2;
  local_7c = (float)(fVar3 * fVar2 + fVar7);
  local_74 = (float)(fVar5 * fVar2 + fVar4);
  local_70 = (float)(fVar7 + -fVar3 * fVar2);
  local_6c = (float)(((float10)_DAT_005bad68 - fVar6 * fVar6) * (float10)(float)fVar1 +
                    fVar6 * fVar6);
  _eh_vector_constructor_iterator_(param_1,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150)
  ;
  if (param_1 != &local_94) {
    *param_1 = local_94;
    param_1[1] = local_90;
    param_1[2] = local_8c;
    param_1[3] = local_88;
  }
  if (param_1 + 4 != &local_84) {
    param_1[4] = local_84;
    param_1[5] = local_80;
    param_1[6] = local_7c;
    param_1[7] = local_78;
  }
  if (param_1 + 8 != &local_74) {
    param_1[8] = local_74;
    param_1[9] = local_70;
    param_1[10] = local_6c;
    param_1[0xb] = local_68;
  }
  if (param_1 + 0xc != &local_64) {
    param_1[0xc] = local_64;
    param_1[0xd] = local_60;
    param_1[0xe] = local_5c;
    param_1[0xf] = local_58;
  }
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(&local_94,0x10,4,FUN_00407150);
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_00546cfc */

float * FUN_00546cfc(float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005811ee;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff58;
  ExceptionList = &local_10;
  _eh_vector_constructor_iterator_
            (&local_94,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  local_54[0] = 1.0;
  local_54[1] = 0.0;
  local_54[2] = 0.0;
  local_54[3] = 0.0;
  if (&local_94 != local_54) {
    local_8c = 0.0;
    local_88 = 0.0;
  }
  local_54[4] = 0.0;
  local_54[5] = 1.0;
  local_54[6] = 0.0;
  local_54[7] = 0.0;
  if (&local_84 != local_54 + 4) {
    local_7c = 0.0;
    local_78 = 0.0;
  }
  local_54[8] = 0.0;
  local_54[9] = 0.0;
  local_54[10] = 1.0;
  local_54[0xb] = 0.0;
  if (&local_74 != local_54 + 8) {
    local_74 = 0.0;
    local_70 = 0.0;
    local_6c = 1.0;
    local_68 = 0.0;
  }
  local_54[0xc] = 0.0;
  local_54[0xd] = 0.0;
  local_54[0xe] = 0.0;
  local_54[0xf] = 1.0;
  if (&local_64 != local_54 + 0xc) {
    local_64 = 0.0;
    local_60 = 0.0;
    local_5c = 0.0;
    local_58 = 1.0;
  }
  local_8 = 0;
  fVar1 = (float10)fcos((float10)param_2);
  fVar2 = (float10)fsin((float10)param_2);
  local_94 = (float)fVar1;
  local_90 = (float)fVar2;
  local_84 = (float)-fVar2;
  local_80 = (float)fVar1;
  _eh_vector_constructor_iterator_(param_1,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150)
  ;
  if (param_1 != &local_94) {
    *param_1 = local_94;
    param_1[1] = local_90;
    param_1[2] = local_8c;
    param_1[3] = local_88;
  }
  if (param_1 + 4 != &local_84) {
    param_1[4] = local_84;
    param_1[5] = local_80;
    param_1[6] = local_7c;
    param_1[7] = local_78;
  }
  if (param_1 + 8 != &local_74) {
    param_1[8] = local_74;
    param_1[9] = local_70;
    param_1[10] = local_6c;
    param_1[0xb] = local_68;
  }
  if (param_1 + 0xc != &local_64) {
    param_1[0xc] = local_64;
    param_1[0xd] = local_60;
    param_1[0xe] = local_5c;
    param_1[0xf] = local_58;
  }
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(&local_94,0x10,4,FUN_00407150);
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_00546f8c */

float * FUN_00546f8c(float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0058121a;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff58;
  ExceptionList = &local_10;
  _eh_vector_constructor_iterator_
            (&local_94,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  local_54[0] = 1.0;
  local_54[1] = 0.0;
  local_54[2] = 0.0;
  local_54[3] = 0.0;
  if (&local_94 != local_54) {
    local_90 = 0.0;
    local_88 = 0.0;
  }
  local_54[4] = 0.0;
  local_54[5] = 1.0;
  local_54[6] = 0.0;
  local_54[7] = 0.0;
  if (&local_84 != local_54 + 4) {
    local_84 = 0.0;
    local_80 = 1.0;
    local_7c = 0.0;
    local_78 = 0.0;
  }
  local_54[8] = 0.0;
  local_54[9] = 0.0;
  local_54[10] = 1.0;
  local_54[0xb] = 0.0;
  if (&local_74 != local_54 + 8) {
    local_70 = 0.0;
    local_68 = 0.0;
  }
  local_54[0xc] = 0.0;
  local_54[0xd] = 0.0;
  local_54[0xe] = 0.0;
  local_54[0xf] = 1.0;
  if (&local_64 != local_54 + 0xc) {
    local_64 = 0.0;
    local_60 = 0.0;
    local_5c = 0.0;
    local_58 = 1.0;
  }
  local_8 = 0;
  fVar1 = (float10)fcos((float10)param_2);
  fVar2 = (float10)fsin((float10)param_2);
  local_94 = (float)fVar1;
  local_8c = (float)-fVar2;
  local_74 = (float)fVar2;
  local_6c = (float)fVar1;
  _eh_vector_constructor_iterator_(param_1,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150)
  ;
  if (param_1 != &local_94) {
    *param_1 = local_94;
    param_1[1] = local_90;
    param_1[2] = local_8c;
    param_1[3] = local_88;
  }
  if (param_1 + 4 != &local_84) {
    param_1[4] = local_84;
    param_1[5] = local_80;
    param_1[6] = local_7c;
    param_1[7] = local_78;
  }
  if (param_1 + 8 != &local_74) {
    param_1[8] = local_74;
    param_1[9] = local_70;
    param_1[10] = local_6c;
    param_1[0xb] = local_68;
  }
  if (param_1 + 0xc != &local_64) {
    param_1[0xc] = local_64;
    param_1[0xd] = local_60;
    param_1[0xe] = local_5c;
    param_1[0xf] = local_58;
  }
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(&local_94,0x10,4,FUN_00407150);
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_00547224 */

undefined4 * FUN_00547224(undefined4 *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00581246;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff58;
  ExceptionList = &local_10;
  _eh_vector_constructor_iterator_
            (&local_94,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  local_54 = 0x3f800000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  if (&local_94 != &local_54) {
    local_94 = 0x3f800000;
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
  }
  local_44 = 0;
  local_40 = 0x3f800000;
  local_3c = 0;
  local_38 = 0;
  if (&local_84 != &local_44) {
    local_84 = 0;
    local_78 = 0;
  }
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x3f800000;
  local_28 = 0;
  if (&local_74 != &local_34) {
    local_74 = 0;
    local_68 = 0;
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  if (&local_64 != &local_24) {
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0x3f800000;
  }
  local_8 = 0;
  fVar1 = (float10)fcos((float10)param_2);
  fVar2 = (float10)fsin((float10)param_2);
  local_80 = (float)fVar1;
  local_7c = (float)fVar2;
  local_70 = (float)-fVar2;
  local_6c = (float)fVar1;
  _eh_vector_constructor_iterator_(param_1,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150)
  ;
  if (param_1 != &local_94) {
    *param_1 = local_94;
    param_1[1] = local_90;
    param_1[2] = local_8c;
    param_1[3] = local_88;
  }
  if (param_1 + 4 != &local_84) {
    param_1[4] = local_84;
    param_1[5] = local_80;
    param_1[6] = local_7c;
    param_1[7] = local_78;
  }
  if (param_1 + 8 != &local_74) {
    param_1[8] = local_74;
    param_1[9] = local_70;
    param_1[10] = local_6c;
    param_1[0xb] = local_68;
  }
  if (param_1 + 0xc != &local_64) {
    param_1[0xc] = local_64;
    param_1[0xd] = local_60;
    param_1[0xe] = local_5c;
    param_1[0xf] = local_58;
  }
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(&local_94,0x10,4,FUN_00407150);
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_005474b0 */

void __thiscall FUN_005474b0(int param_1,float param_2)

{
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) * param_2;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * param_2;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * param_2;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) * param_2;
  return;
}




/* Function: FUN_005474d8 */

void __thiscall FUN_005474d8(int param_1,float param_2)

{
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) * param_2;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) * param_2;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) * param_2;
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) * param_2;
  return;
}




/* Function: FUN_00547500 */

void __thiscall FUN_00547500(float *param_1,float param_2)

{
  *param_1 = *param_1 * param_2;
  param_1[1] = param_1[1] * param_2;
  param_1[2] = param_1[2] * param_2;
  param_1[3] = param_1[3] * param_2;
  return;
}




/* Function: FUN_00547528 */

void FUN_00547528(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1);
  fVar2 = (float10)fsin((float10)param_1);
  FUN_00547544((float)fVar2,(float)fVar1);
  return;
}




/* Function: FUN_00547544 */

void __thiscall FUN_00547544(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = -param_2;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[3];
  fVar4 = param_1[2];
  *param_1 = fVar1 * param_3 + param_1[4] * fVar5;
  param_1[1] = fVar2 * param_3 + param_1[5] * fVar5;
  param_1[2] = param_1[2] * param_3 + param_1[6] * fVar5;
  param_1[3] = fVar3 * param_3 + fVar5 * param_1[7];
  param_1[4] = param_1[4] * param_3 + fVar1 * param_2;
  param_1[5] = param_1[5] * param_3 + fVar2 * param_2;
  param_1[6] = param_1[6] * param_3 + fVar4 * param_2;
  param_1[7] = param_2 * fVar3 + param_1[7] * param_3;
  return;
}




/* Function: FUN_005475f4 */

void FUN_005475f4(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1);
  fVar2 = (float10)fsin((float10)param_1);
  FUN_00547610((float)fVar2,(float)fVar1);
  return;
}




/* Function: FUN_00547610 */

void __thiscall FUN_00547610(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar5 = -param_2;
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *param_1 = fVar1 * param_3 + param_1[8] * param_2;
  param_1[1] = fVar2 * param_3 + param_1[9] * param_2;
  param_1[2] = param_1[2] * param_3 + param_1[10] * param_2;
  param_1[3] = param_1[3] * param_3 + param_1[0xb] * param_2;
  param_1[8] = param_1[8] * param_3 + fVar1 * fVar5;
  param_1[9] = fVar2 * fVar5 + param_1[9] * param_3;
  param_1[10] = param_1[10] * param_3 + fVar3 * fVar5;
  param_1[0xb] = param_1[0xb] * param_3 + fVar4 * fVar5;
  return;
}




/* Function: FUN_005476c0 */

void FUN_005476c0(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1);
  fVar2 = (float10)fsin((float10)param_1);
  FUN_005476dc((float)fVar2,(float)fVar1);
  return;
}




/* Function: FUN_005476dc */

void __thiscall FUN_005476dc(int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = -param_2;
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 0x1c);
  fVar4 = *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x10) = fVar1 * param_3 + *(float *)(param_1 + 0x20) * fVar5;
  *(float *)(param_1 + 0x14) = fVar2 * param_3 + *(float *)(param_1 + 0x24) * fVar5;
  *(float *)(param_1 + 0x18) =
       *(float *)(param_1 + 0x18) * param_3 + *(float *)(param_1 + 0x28) * fVar5;
  *(float *)(param_1 + 0x1c) = fVar3 * param_3 + fVar5 * *(float *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) * param_3 + fVar1 * param_2;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * param_3 + fVar2 * param_2;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * param_3 + fVar4 * param_2;
  *(float *)(param_1 + 0x2c) = param_2 * fVar3 + *(float *)(param_1 + 0x2c) * param_3;
  return;
}




/* Function: FUN_0054778c */

undefined4 * __thiscall FUN_0054778c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  *param_2 = *(undefined4 *)(param_1 + 8);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return param_2;
}




/* Function: FUN_005477ac */

undefined4 * __thiscall FUN_005477ac(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return param_2;
}




/* Function: FUN_005477cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005477cc(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *extraout_ECX;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xfffffff4) != 0) {
      fVar1 = *param_1;
      fVar2 = param_1[4];
      fVar3 = param_1[8];
      fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      fVar4 = _DAT_005bad98;
      fVar5 = _DAT_005bad98;
      fVar7 = _DAT_005bad9c;
      if ((float)_DAT_005bad88 <= fVar6) {
        fVar6 = _DAT_005bad9c / fVar6;
        fVar4 = fVar1 * fVar6;
        fVar5 = fVar6 * fVar3;
        fVar7 = fVar2 * fVar6;
      }
      fVar1 = *param_2;
      *param_1 = fVar4 * fVar1;
      param_1[4] = fVar7 * fVar1;
      param_1[8] = fVar1 * fVar5;
      fVar1 = param_1[1];
      fVar2 = param_1[5];
      fVar3 = param_1[9];
      fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      fVar4 = _DAT_005bad98;
      fVar5 = _DAT_005bad98;
      fVar7 = _DAT_005bad9c;
      if ((float)_DAT_005bad88 <= fVar6) {
        fVar6 = _DAT_005bad9c / fVar6;
        fVar4 = fVar1 * fVar6;
        fVar5 = fVar6 * fVar3;
        fVar7 = fVar2 * fVar6;
      }
      fVar1 = param_2[1];
      param_1[1] = fVar4 * fVar1;
      param_1[5] = fVar7 * fVar1;
      param_1[9] = fVar1 * fVar5;
      fVar1 = param_1[2];
      fVar2 = param_1[6];
      fVar3 = param_1[10];
      fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      fVar4 = _DAT_005bad98;
      fVar5 = _DAT_005bad98;
      fVar7 = _DAT_005bad9c;
      if ((float)_DAT_005bad88 <= fVar6) {
        fVar6 = _DAT_005bad9c / fVar6;
        fVar4 = fVar1 * fVar6;
        fVar5 = fVar6 * fVar3;
        fVar7 = fVar2 * fVar6;
      }
      fVar1 = param_2[2];
      param_1[2] = fVar4 * fVar1;
      param_1[6] = fVar7 * fVar1;
      param_1[10] = fVar1 * fVar5;
      return;
    }
    if (_DAT_005b71d0 != 0) break;
    FUN_004d34fc();
    param_1 = extraout_ECX;
  }
  fVar1 = *param_1;
  fVar2 = param_1[4];
  fVar3 = param_1[8];
  fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar4 = _DAT_005badb0;
  fVar5 = _DAT_005badb0;
  fVar7 = _DAT_005badb4;
  if ((float)_DAT_005bada8 <= fVar6) {
    fVar6 = _DAT_005badb4 / fVar6;
    fVar4 = fVar1 * fVar6;
    fVar5 = fVar6 * fVar3;
    fVar7 = fVar2 * fVar6;
  }
  fVar1 = *param_2;
  *param_1 = fVar4 * fVar1;
  param_1[4] = fVar7 * fVar1;
  param_1[8] = fVar1 * fVar5;
  fVar1 = param_1[1];
  fVar2 = param_1[5];
  fVar3 = param_1[9];
  fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar4 = _DAT_005badb0;
  fVar5 = _DAT_005badb0;
  fVar7 = _DAT_005badb4;
  if ((float)_DAT_005bada8 <= fVar6) {
    fVar6 = _DAT_005badb4 / fVar6;
    fVar4 = fVar1 * fVar6;
    fVar5 = fVar6 * fVar3;
    fVar7 = fVar2 * fVar6;
  }
  fVar1 = param_2[1];
  param_1[1] = fVar4 * fVar1;
  param_1[5] = fVar7 * fVar1;
  param_1[9] = fVar1 * fVar5;
  fVar1 = param_1[2];
  fVar2 = param_1[6];
  fVar3 = param_1[10];
  fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar4 = _DAT_005badb0;
  fVar5 = _DAT_005badb0;
  fVar7 = _DAT_005badb4;
  if ((float)_DAT_005bada8 <= fVar6) {
    fVar6 = _DAT_005badb4 / fVar6;
    fVar4 = fVar1 * fVar6;
    fVar5 = fVar6 * fVar3;
    fVar7 = fVar2 * fVar6;
  }
  fVar1 = param_2[2];
  param_1[2] = fVar4 * fVar1;
  param_1[6] = fVar7 * fVar1;
  param_1[10] = fVar1 * fVar5;
  return;
}




/* Function: FUN_00547a54 */

void __thiscall FUN_00547a54(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[5];
  fVar3 = param_1[9];
  fVar4 = param_1[2];
  fVar5 = param_1[6];
  fVar6 = param_1[10];
  *param_2 = SQRT(param_1[8] * param_1[8] + param_1[4] * param_1[4] + *param_1 * *param_1);
  param_2[1] = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  param_2[2] = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  return;
}




/* Function: FUN_00547ab0 */

undefined4 * __thiscall FUN_00547ab0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return param_2;
}




/* Function: FUN_00547ad0 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00547ad0(undefined4 ******param_1)

{
  int iVar1;
  undefined4 ******extraout_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 ******appppppuStack_d4 [16];
  float fStack_94;
  undefined4 *****pppppuStack_90;
  float afStack_8c [16];
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_20;
  uint uStack_1c;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xfffffff4) != 0) {
      uStack_8 = 0xffffffff;
      puStack_c = &LAB_005812bc;
      pvStack_10 = ExceptionList;
      ExceptionList = &pvStack_10;
      fVar5 = (float10)FUN_00548458();
      _eh_vector_constructor_iterator_
                (appppppuStack_d4 + 2,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
      if (appppppuStack_d4 + 2 != (undefined4 *******)param_1) {
        appppppuStack_d4[2] = (undefined4 ******)*param_1;
        appppppuStack_d4[3] = (undefined4 ******)param_1[1];
        appppppuStack_d4[4] = (undefined4 ******)param_1[2];
        appppppuStack_d4[5] = (undefined4 ******)param_1[3];
      }
      if (appppppuStack_d4 + 6 != (undefined4 *******)(param_1 + 4)) {
        appppppuStack_d4[6] = (undefined4 ******)param_1[4];
        appppppuStack_d4[7] = (undefined4 ******)param_1[5];
        appppppuStack_d4[8] = (undefined4 ******)param_1[6];
        appppppuStack_d4[9] = (undefined4 ******)param_1[7];
      }
      if (appppppuStack_d4 + 10 != (undefined4 *******)(param_1 + 8)) {
        appppppuStack_d4[10] = (undefined4 ******)param_1[8];
        appppppuStack_d4[0xb] = (undefined4 ******)param_1[9];
        appppppuStack_d4[0xc] = (undefined4 ******)param_1[10];
        appppppuStack_d4[0xd] = (undefined4 ******)param_1[0xb];
      }
      if (appppppuStack_d4 + 0xe != (undefined4 *******)(param_1 + 0xc)) {
        appppppuStack_d4[0xe] = (undefined4 ******)param_1[0xc];
        appppppuStack_d4[0xf] = (undefined4 ******)param_1[0xd];
        fStack_94 = (float)param_1[0xe];
        pppppuStack_90 = param_1[0xf];
      }
      uStack_8 = 0;
      _eh_vector_constructor_iterator_
                (afStack_8c,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
      afStack_8c[9] = 1.0;
      afStack_8c[10] = 0.0;
      afStack_8c[0xb] = 0.0;
      if (afStack_8c + 9 != afStack_8c) {
        afStack_8c[0] = 1.0;
        afStack_8c[1] = 0.0;
        afStack_8c[2] = 0.0;
      }
      afStack_8c[0xc] = 0.0;
      afStack_8c[0xd] = 1.0;
      afStack_8c[0xe] = 0.0;
      if (afStack_8c + 0xc != afStack_8c + 3) {
        afStack_8c[3] = 0.0;
        afStack_8c[4] = 1.0;
        afStack_8c[5] = 0.0;
      }
      afStack_8c[0xf] = 0.0;
      iStack_4c = 0;
      uStack_48 = 0x3f800000;
      if (afStack_8c + 0xf != afStack_8c + 6) {
        afStack_8c[6] = 0.0;
        afStack_8c[7] = 0.0;
        afStack_8c[8] = 1.0;
      }
      if (ABS((float)fVar5) < _DAT_005badbc) {
        uStack_8 = 0;
        _eh_vector_destructor_iterator_(afStack_8c,0xc,3,FUN_00407150);
        uStack_8 = 0xffffffff;
        _eh_vector_destructor_iterator_(appppppuStack_d4 + 2,0x10,4,FUN_00407150);
        ExceptionList = pvStack_10;
        return;
      }
      uStack_1c = 0;
      do {
        iVar2 = 0;
        do {
          iVar3 = 0;
          do {
            if (uStack_1c != iVar3) {
              iVar1 = iVar3 + -1;
              if (iVar3 < (int)uStack_1c) {
                iVar1 = iVar3;
              }
              if (iVar2 != 0) {
                iVar4 = 0;
                if (iVar2 < 1) {
                  iVar4 = -1;
                }
                afStack_8c[iVar1 * 3 + iVar4] = (float)appppppuStack_d4[iVar3 * 4 + 2];
              }
              if (iVar2 != 1) {
                afStack_8c[iVar1 * 3 + (uint)(1 < iVar2)] = (float)appppppuStack_d4[iVar3 * 4 + 3];
              }
              if (iVar2 != 2) {
                iVar4 = 1;
                if (2 < iVar2) {
                  iVar4 = 2;
                }
                afStack_8c[iVar1 * 3 + iVar4] = (float)appppppuStack_d4[iVar3 * 4 + 4];
              }
              if (iVar2 != 3) {
                iVar4 = 2;
                if (3 < iVar2) {
                  iVar4 = 3;
                }
                afStack_8c[iVar1 * 3 + iVar4] = (float)appppppuStack_d4[iVar3 * 4 + 5];
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < 4);
          iVar3 = iVar2 + 1;
          param_1[iVar2 * 4 + uStack_1c] =
               (undefined4 *****)
               ((_DAT_005badc4 / (float)fVar5) *
               (float)(int)((uStack_1c + iVar2 & 1) * -2 + 1) *
               ((afStack_8c[7] * afStack_8c[3] - afStack_8c[4] * afStack_8c[6]) * afStack_8c[2] +
               ((afStack_8c[4] * afStack_8c[8] - afStack_8c[5] * afStack_8c[7]) * afStack_8c[0] -
               (afStack_8c[3] * afStack_8c[8] - afStack_8c[6] * afStack_8c[5]) * afStack_8c[1])));
          iVar2 = iVar3;
        } while (iVar3 < 4);
        uStack_1c = uStack_1c + 1;
      } while ((int)uStack_1c < 4);
      uStack_8 = 0;
      _eh_vector_destructor_iterator_(afStack_8c,0xc,3,FUN_00407150);
      appppppuStack_d4[1] = appppppuStack_d4 + 2;
      uStack_8 = 0xffffffff;
      _eh_vector_destructor_iterator_(appppppuStack_d4 + 2,0x10,4,FUN_00407150);
      ExceptionList = pvStack_10;
      return;
    }
    if (_DAT_005b71d0 != 0) break;
    FUN_004d34fc();
    param_1 = extraout_ECX;
  }
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00581334;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  fVar5 = (float10)FUN_00548458();
  _eh_vector_constructor_iterator_
            (appppppuStack_d4,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  if (appppppuStack_d4 != (undefined4 *******)param_1) {
    appppppuStack_d4[0] = (undefined4 ******)*param_1;
    appppppuStack_d4[1] = (undefined4 ******)param_1[1];
    appppppuStack_d4[2] = (undefined4 ******)param_1[2];
    appppppuStack_d4[3] = (undefined4 ******)param_1[3];
  }
  if (appppppuStack_d4 + 4 != (undefined4 *******)(param_1 + 4)) {
    appppppuStack_d4[4] = (undefined4 ******)param_1[4];
    appppppuStack_d4[5] = (undefined4 ******)param_1[5];
    appppppuStack_d4[6] = (undefined4 ******)param_1[6];
    appppppuStack_d4[7] = (undefined4 ******)param_1[7];
  }
  if (appppppuStack_d4 + 8 != (undefined4 *******)(param_1 + 8)) {
    appppppuStack_d4[8] = (undefined4 ******)param_1[8];
    appppppuStack_d4[9] = (undefined4 ******)param_1[9];
    appppppuStack_d4[10] = (undefined4 ******)param_1[10];
    appppppuStack_d4[0xb] = (undefined4 ******)param_1[0xb];
  }
  if (appppppuStack_d4 + 0xc != (undefined4 *******)(param_1 + 0xc)) {
    appppppuStack_d4[0xc] = (undefined4 ******)param_1[0xc];
    appppppuStack_d4[0xd] = (undefined4 ******)param_1[0xd];
    appppppuStack_d4[0xe] = (undefined4 ******)param_1[0xe];
    appppppuStack_d4[0xf] = (undefined4 ******)param_1[0xf];
  }
  uStack_8 = 0;
  _eh_vector_constructor_iterator_
            (&fStack_94,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  afStack_8c[7] = 1.0;
  afStack_8c[8] = 0.0;
  afStack_8c[9] = 0.0;
  if (afStack_8c + 7 != &fStack_94) {
    fStack_94 = 1.0;
    pppppuStack_90 = (undefined4 *****)0x0;
    afStack_8c[0] = 0.0;
  }
  afStack_8c[10] = 0.0;
  afStack_8c[0xb] = 1.0;
  afStack_8c[0xc] = 0.0;
  if (afStack_8c + 10 != afStack_8c + 1) {
    afStack_8c[1] = 0.0;
    afStack_8c[2] = 1.0;
    afStack_8c[3] = 0.0;
  }
  afStack_8c[0xd] = 0.0;
  afStack_8c[0xe] = 0.0;
  afStack_8c[0xf] = 1.0;
  if (afStack_8c + 0xd != afStack_8c + 4) {
    afStack_8c[4] = 0.0;
    afStack_8c[5] = 0.0;
    afStack_8c[6] = 1.0;
  }
  if (ABS((float)fVar5) < _DAT_005badd4) {
    uStack_8 = 0;
    _eh_vector_destructor_iterator_(&fStack_94,0xc,3,FUN_00407150);
    uStack_8 = 0xffffffff;
    _eh_vector_destructor_iterator_(appppppuStack_d4,0x10,4,FUN_00407150);
    ExceptionList = pvStack_10;
    return;
  }
  iStack_20 = 0;
  do {
    iVar2 = 0;
    do {
      iStack_4c = (iStack_20 + iVar2 & 1U) * -2 + 1;
      iVar3 = 0;
      do {
        if (iStack_20 != iVar3) {
          iVar1 = iVar3;
          if (iStack_20 <= iVar3) {
            iVar1 = iVar3 + -1;
          }
          if (iVar2 != 0) {
            if (iVar2 < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 0;
            }
            (&fStack_94)[iVar1 * 3 + iVar4] = (float)appppppuStack_d4[iVar3 * 4];
          }
          if (iVar2 != 1) {
            uStack_1c = (uint)(1 < iVar2);
            (&fStack_94)[iVar1 * 3 + uStack_1c] = (float)appppppuStack_d4[iVar3 * 4 + 1];
          }
          if (iVar2 != 2) {
            if (iVar2 < 3) {
              uStack_1c = 1;
            }
            else {
              uStack_1c = 2;
            }
            (&fStack_94)[iVar1 * 3 + uStack_1c] = (float)appppppuStack_d4[iVar3 * 4 + 2];
          }
          if (iVar2 != 3) {
            if (iVar2 < 4) {
              iVar4 = 2;
            }
            else {
              iVar4 = 3;
            }
            (&fStack_94)[iVar1 * 3 + iVar4] = (float)appppppuStack_d4[iVar3 * 4 + 3];
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      param_1[iVar2 * 4 + iStack_20] =
           (undefined4 *****)
           ((_DAT_005baddc / (float)fVar5) *
           (float)iStack_4c *
           ((afStack_8c[5] * afStack_8c[1] - afStack_8c[4] * afStack_8c[2]) * afStack_8c[0] +
           ((afStack_8c[2] * afStack_8c[6] - afStack_8c[3] * afStack_8c[5]) * fStack_94 -
           (afStack_8c[1] * afStack_8c[6] - afStack_8c[3] * afStack_8c[4]) * (float)pppppuStack_90))
           );
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  uStack_8 = 0;
  _eh_vector_destructor_iterator_(&fStack_94,0xc,3,FUN_00407150);
  uStack_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(appppppuStack_d4,0x10,4,FUN_00407150);
  ExceptionList = pvStack_10;
  return;
}




/* Function: FUN_00547af8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00547af8(float *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_cc [34];
  int local_44;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005812bc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  fVar5 = (float10)FUN_00548458();
  _eh_vector_constructor_iterator_
            (local_cc,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  if (local_cc != param_1) {
    local_cc[0] = *param_1;
    local_cc[1] = param_1[1];
    local_cc[2] = param_1[2];
    local_cc[3] = param_1[3];
  }
  if (local_cc + 4 != param_1 + 4) {
    local_cc[4] = param_1[4];
    local_cc[5] = param_1[5];
    local_cc[6] = param_1[6];
    local_cc[7] = param_1[7];
  }
  if (local_cc + 8 != param_1 + 8) {
    local_cc[8] = param_1[8];
    local_cc[9] = param_1[9];
    local_cc[10] = param_1[10];
    local_cc[0xb] = param_1[0xb];
  }
  if (local_cc + 0xc != param_1 + 0xc) {
    local_cc[0xc] = param_1[0xc];
    local_cc[0xd] = param_1[0xd];
    local_cc[0xe] = param_1[0xe];
    local_cc[0xf] = param_1[0xf];
  }
  local_8 = 0;
  _eh_vector_constructor_iterator_
            (local_cc + 0x10,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  local_cc[0x19] = 1.0;
  local_cc[0x1a] = 0.0;
  local_cc[0x1b] = 0.0;
  if (local_cc + 0x19 != local_cc + 0x10) {
    local_cc[0x10] = 1.0;
    local_cc[0x11] = 0.0;
    local_cc[0x12] = 0.0;
  }
  local_cc[0x1c] = 0.0;
  local_cc[0x1d] = 1.0;
  local_cc[0x1e] = 0.0;
  if (local_cc + 0x1c != local_cc + 0x13) {
    local_cc[0x13] = 0.0;
    local_cc[0x14] = 1.0;
    local_cc[0x15] = 0.0;
  }
  local_cc[0x1f] = 0.0;
  local_cc[0x20] = 0.0;
  local_cc[0x21] = 1.0;
  if (local_cc + 0x1f != local_cc + 0x16) {
    local_cc[0x16] = 0.0;
    local_cc[0x17] = 0.0;
    local_cc[0x18] = 1.0;
  }
  if (ABS((float)fVar5) < _DAT_005badbc) {
    local_8 = 0;
    _eh_vector_destructor_iterator_(local_cc + 0x10,0xc,3,FUN_00407150);
    local_8 = 0xffffffff;
    _eh_vector_destructor_iterator_(local_cc,0x10,4,FUN_00407150);
    ExceptionList = local_10;
    return;
  }
  local_1c = 0;
  do {
    iVar2 = 0;
    do {
      local_44 = (local_1c + iVar2 & 1U) * -2 + 1;
      iVar3 = 0;
      do {
        if (local_1c != iVar3) {
          iVar1 = iVar3 + -1;
          if (iVar3 < local_1c) {
            iVar1 = iVar3;
          }
          if (iVar2 != 0) {
            iVar4 = 0;
            if (iVar2 < 1) {
              iVar4 = -1;
            }
            local_cc[iVar1 * 3 + iVar4 + 0x10] = local_cc[iVar3 * 4];
          }
          if (iVar2 != 1) {
            local_cc[iVar1 * 3 + (1 < iVar2) + 0x10] = local_cc[iVar3 * 4 + 1];
          }
          if (iVar2 != 2) {
            iVar4 = 1;
            if (2 < iVar2) {
              iVar4 = 2;
            }
            local_cc[iVar1 * 3 + iVar4 + 0x10] = local_cc[iVar3 * 4 + 2];
          }
          if (iVar2 != 3) {
            iVar4 = 2;
            if (3 < iVar2) {
              iVar4 = 3;
            }
            local_cc[iVar1 * 3 + iVar4 + 0x10] = local_cc[iVar3 * 4 + 3];
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      iVar3 = iVar2 + 1;
      param_1[iVar2 * 4 + local_1c] =
           (_DAT_005badc4 / (float)fVar5) *
           (float)local_44 *
           ((local_cc[0x17] * local_cc[0x13] - local_cc[0x14] * local_cc[0x16]) * local_cc[0x12] +
           ((local_cc[0x14] * local_cc[0x18] - local_cc[0x15] * local_cc[0x17]) * local_cc[0x10] -
           (local_cc[0x13] * local_cc[0x18] - local_cc[0x16] * local_cc[0x15]) * local_cc[0x11]));
      iVar2 = iVar3;
    } while (iVar3 < 4);
    local_1c = local_1c + 1;
  } while (local_1c < 4);
  local_8 = 0;
  _eh_vector_destructor_iterator_(local_cc + 0x10,0xc,3,FUN_00407150);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_cc,0x10,4,FUN_00407150);
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00547fa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00547fa0(float *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_d4 [34];
  int local_4c;
  int local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00581334;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  fVar5 = (float10)FUN_00548458();
  _eh_vector_constructor_iterator_
            (local_d4,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  if (local_d4 != param_1) {
    local_d4[0] = *param_1;
    local_d4[1] = param_1[1];
    local_d4[2] = param_1[2];
    local_d4[3] = param_1[3];
  }
  if (local_d4 + 4 != param_1 + 4) {
    local_d4[4] = param_1[4];
    local_d4[5] = param_1[5];
    local_d4[6] = param_1[6];
    local_d4[7] = param_1[7];
  }
  if (local_d4 + 8 != param_1 + 8) {
    local_d4[8] = param_1[8];
    local_d4[9] = param_1[9];
    local_d4[10] = param_1[10];
    local_d4[0xb] = param_1[0xb];
  }
  if (local_d4 + 0xc != param_1 + 0xc) {
    local_d4[0xc] = param_1[0xc];
    local_d4[0xd] = param_1[0xd];
    local_d4[0xe] = param_1[0xe];
    local_d4[0xf] = param_1[0xf];
  }
  local_8 = 0;
  _eh_vector_constructor_iterator_
            (local_d4 + 0x10,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  local_d4[0x19] = 1.0;
  local_d4[0x1a] = 0.0;
  local_d4[0x1b] = 0.0;
  if (local_d4 + 0x19 != local_d4 + 0x10) {
    local_d4[0x10] = 1.0;
    local_d4[0x11] = 0.0;
    local_d4[0x12] = 0.0;
  }
  local_d4[0x1c] = 0.0;
  local_d4[0x1d] = 1.0;
  local_d4[0x1e] = 0.0;
  if (local_d4 + 0x1c != local_d4 + 0x13) {
    local_d4[0x13] = 0.0;
    local_d4[0x14] = 1.0;
    local_d4[0x15] = 0.0;
  }
  local_d4[0x1f] = 0.0;
  local_d4[0x20] = 0.0;
  local_d4[0x21] = 1.0;
  if (local_d4 + 0x1f != local_d4 + 0x16) {
    local_d4[0x16] = 0.0;
    local_d4[0x17] = 0.0;
    local_d4[0x18] = 1.0;
  }
  if (ABS((float)fVar5) < _DAT_005badd4) {
    local_8 = 0;
    _eh_vector_destructor_iterator_(local_d4 + 0x10,0xc,3,FUN_00407150);
    local_8 = 0xffffffff;
    _eh_vector_destructor_iterator_(local_d4,0x10,4,FUN_00407150);
    ExceptionList = local_10;
    return;
  }
  local_20 = 0;
  do {
    iVar2 = 0;
    do {
      local_4c = (local_20 + iVar2 & 1U) * -2 + 1;
      iVar3 = 0;
      do {
        if (local_20 != iVar3) {
          iVar1 = iVar3;
          if (local_20 <= iVar3) {
            iVar1 = iVar3 + -1;
          }
          if (iVar2 != 0) {
            if (iVar2 < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 0;
            }
            local_d4[iVar1 * 3 + iVar4 + 0x10] = local_d4[iVar3 * 4];
          }
          if (iVar2 != 1) {
            local_1c = (uint)(1 < iVar2);
            local_d4[iVar1 * 3 + local_1c + 0x10] = local_d4[iVar3 * 4 + 1];
          }
          if (iVar2 != 2) {
            if (iVar2 < 3) {
              local_1c = 1;
            }
            else {
              local_1c = 2;
            }
            local_d4[iVar1 * 3 + local_1c + 0x10] = local_d4[iVar3 * 4 + 2];
          }
          if (iVar2 != 3) {
            if (iVar2 < 4) {
              iVar4 = 2;
            }
            else {
              iVar4 = 3;
            }
            local_d4[iVar1 * 3 + iVar4 + 0x10] = local_d4[iVar3 * 4 + 3];
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      param_1[iVar2 * 4 + local_20] =
           (_DAT_005baddc / (float)fVar5) *
           (float)local_4c *
           ((local_d4[0x17] * local_d4[0x13] - local_d4[0x16] * local_d4[0x14]) * local_d4[0x12] +
           ((local_d4[0x14] * local_d4[0x18] - local_d4[0x15] * local_d4[0x17]) * local_d4[0x10] -
           (local_d4[0x13] * local_d4[0x18] - local_d4[0x15] * local_d4[0x16]) * local_d4[0x11]));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    local_20 = local_20 + 1;
  } while (local_20 < 4);
  local_8 = 0;
  _eh_vector_destructor_iterator_(local_d4 + 0x10,0xc,3,FUN_00407150);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_d4,0x10,4,FUN_00407150);
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00548458 */

float10 __fastcall FUN_00548458(float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  fVar1 = (float10)*param_1;
  fVar2 = (float10)param_1[5];
  fVar3 = (float10)param_1[6];
  fVar4 = (float10)param_1[7];
  fVar5 = (float10)param_1[1];
  fVar6 = (float10)param_1[4];
  fVar7 = (float10)param_1[2];
  fVar8 = (float10)param_1[3];
  fVar9 = (float10)param_1[10];
  fVar10 = (float10)param_1[0xb];
  fVar11 = (float10)param_1[9];
  fVar12 = (float10)param_1[8];
  return ((float10)(float)(fVar8 * fVar2) * fVar12 * (float10)param_1[0xe] -
         (float10)(float)(fVar8 * fVar2) * fVar9 * (float10)param_1[0xc]) +
         (fVar11 * (float10)(float)(fVar8 * fVar3) * (float10)param_1[0xc] -
         (float10)(float)(fVar8 * fVar3) * fVar12 * (float10)param_1[0xd]) +
         ((float10)(float)(fVar8 * fVar6) * fVar9 * (float10)param_1[0xd] -
         (float10)(float)(fVar8 * fVar6) * fVar11 * (float10)param_1[0xe]) +
         ((float10)(float)(fVar7 * fVar2) * fVar10 * (float10)param_1[0xc] -
         (float10)(float)(fVar7 * fVar2) * fVar12 * (float10)param_1[0xf]) +
         (float10)(float)(((float10)(float)(fVar5 * fVar3) * fVar12 * (float10)param_1[0xf] -
                          (float10)(float)(fVar5 * fVar3) * fVar10 * (float10)param_1[0xc]) +
                         (((float10)(float)(fVar1 * fVar4) * fVar11 * (float10)param_1[0xe] +
                          ((fVar1 * fVar3 * fVar10 * (float10)param_1[0xd] +
                           (fVar1 * fVar2 * fVar9 * (float10)param_1[0xf] -
                           fVar1 * fVar2 * fVar10 * (float10)param_1[0xe])) -
                          fVar1 * fVar3 * fVar11 * (float10)param_1[0xf])) -
                         (float10)(float)(fVar1 * fVar4) * fVar9 * (float10)param_1[0xd])) +
         ((float10)(float)(fVar5 * fVar6) * fVar10 * (float10)param_1[0xe] -
         (float10)(float)(fVar5 * fVar6) * fVar9 * (float10)param_1[0xf]) +
         ((float10)(float)(fVar5 * fVar4) * fVar9 * (float10)param_1[0xc] -
         (float10)(float)(fVar5 * fVar4) * fVar12 * (float10)param_1[0xe]) +
         ((float10)(float)(fVar7 * fVar6) * fVar11 * (float10)param_1[0xf] -
         (float10)(float)(fVar7 * fVar6) * fVar10 * (float10)param_1[0xd]) +
         (fVar7 * fVar4 * fVar12 * (float10)param_1[0xd] -
         fVar7 * fVar4 * fVar11 * (float10)param_1[0xc]);
}




/* Function: FUN_005485e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_005485e8(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  _eh_vector_constructor_iterator_(param_1,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150)
  ;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = (_DAT_005badec / (fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)) *
          _DAT_005badf0;
  fVar6 = fVar2 * fVar5;
  fVar8 = fVar5 * fVar3;
  fVar7 = fVar4 * fVar1 * fVar5;
  fVar5 = fVar1 * fVar5 * fVar1;
  *param_1 = _DAT_005badec - (fVar6 * fVar2 + fVar3 * fVar8);
  param_1[1] = fVar4 * fVar8 + fVar1 * fVar6;
  param_1[2] = fVar1 * fVar8 - fVar4 * fVar6;
  param_1[3] = 0.0;
  param_1[4] = fVar1 * fVar6 - fVar4 * fVar8;
  param_1[5] = _DAT_005badec - (fVar3 * fVar8 + fVar5);
  param_1[6] = fVar7 + fVar8 * fVar2;
  param_1[7] = 0.0;
  param_1[8] = fVar1 * fVar8 + fVar4 * fVar6;
  param_1[9] = fVar8 * fVar2 - fVar7;
  param_1[10] = _DAT_005badec - (fVar5 + fVar6 * fVar2);
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  return param_1;
}




/* Function: FUN_00548704 */

undefined4 * FUN_00548704(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00548748(param_2);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return param_1;
}




/* Function: FUN_00548748 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_00548748(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *extraout_ECX;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xfffffff4) != 0) {
      fVar1 = *param_1;
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      fVar6 = param_2[8] * fVar3 + param_2[4] * fVar2 + *param_2 * fVar1 + param_2[0xc];
      *param_1 = fVar6;
      fVar5 = param_2[9] * fVar3 + param_2[5] * fVar2 + param_2[1] * fVar1 + param_2[0xd];
      param_1[1] = fVar5;
      fVar4 = param_2[10] * fVar3 + param_2[6] * fVar2 + param_2[2] * fVar1 + param_2[0xe];
      param_1[2] = fVar4;
      fVar1 = param_2[0xb] * fVar3 + param_2[3] * fVar1 + param_2[0xf] + param_2[7] * fVar2;
      if (_DAT_005bb048 != fVar1) {
        fVar1 = _DAT_005bb048 / fVar1;
        *param_1 = fVar6 * fVar1;
        param_1[1] = fVar5 * fVar1;
        param_1[2] = fVar4 * fVar1;
      }
      return param_1;
    }
    if (_DAT_005b71d0 != 0) break;
    FUN_004d34fc();
    param_1 = extraout_ECX;
  }
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar6 = param_2[8] * fVar3 + param_2[4] * fVar2 + *param_2 * fVar1 + param_2[0xc];
  *param_1 = fVar6;
  fVar5 = param_2[9] * fVar3 + param_2[5] * fVar2 + param_2[1] * fVar1 + param_2[0xd];
  param_1[1] = fVar5;
  fVar4 = param_2[10] * fVar3 + param_2[6] * fVar2 + param_2[2] * fVar1 + param_2[0xe];
  param_1[2] = fVar4;
  fVar1 = param_2[0xb] * fVar3 + param_2[3] * fVar1 + param_2[0xf] + param_2[7] * fVar2;
  if (_DAT_005bb050 != fVar1) {
    fVar1 = _DAT_005bb050 / fVar1;
    *param_1 = fVar6 * fVar1;
    param_1[1] = fVar5 * fVar1;
    param_1[2] = fVar4 * fVar1;
  }
  return param_1;
}




/* Function: FUN_005488cc */

undefined4 * FUN_005488cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00548748(param_3);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return param_1;
}




/* Function: FUN_00548910 */

float * __thiscall FUN_00548910(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  *param_1 = param_2[6] * fVar3 + param_2[3] * fVar2 + *param_2 * fVar1;
  param_1[1] = param_2[7] * fVar3 + param_2[4] * fVar2 + param_2[1] * fVar1;
  param_1[2] = param_2[8] * fVar3 + param_2[5] * fVar2 + param_2[2] * fVar1;
  return param_1;
}




/* Function: FUN_00548964 */

undefined4 * FUN_00548964(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00548910(param_3);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return param_1;
}




/* Function: FUN_005489a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_005489a8(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *extraout_ECX;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xfffffff4) != 0) {
      fVar1 = *param_2;
      fVar2 = param_2[5];
      fVar3 = param_2[10];
      fVar4 = param_2[0xf];
      fVar5 = fVar1 + fVar2 + fVar3 + fVar4;
      if (fVar5 <= _DAT_005bb060) {
        if ((fVar1 < fVar2) || (fVar1 < fVar3)) {
          if ((fVar2 < fVar1) || (fVar2 < fVar3)) {
            fVar1 = SQRT(((fVar3 + fVar4) - fVar1) - fVar2);
            fVar1 = fVar1 + fVar1;
            *param_1 = (_DAT_005bb05c / fVar1) * (param_2[8] + param_2[2]);
            fVar1 = _DAT_005bb05c / fVar1;
            param_1[1] = (param_2[9] + param_2[6]) * fVar1;
            param_1[2] = _DAT_005bb058 * fVar1;
            param_1[3] = (param_2[4] + param_2[1]) * fVar1;
          }
          else {
            fVar1 = SQRT(((fVar2 + fVar4) - fVar1) - fVar3);
            fVar1 = fVar1 + fVar1;
            *param_1 = (_DAT_005bb05c / fVar1) * (param_2[4] + param_2[1]);
            fVar1 = _DAT_005bb05c / fVar1;
            param_1[1] = _DAT_005bb058 * fVar1;
            param_1[2] = (param_2[9] + param_2[6]) * fVar1;
            param_1[3] = (param_2[8] + param_2[2]) * fVar1;
          }
        }
        else {
          fVar1 = SQRT(((fVar1 + fVar4) - fVar2) - fVar3);
          fVar1 = fVar1 + fVar1;
          *param_1 = (_DAT_005bb05c / fVar1) * _DAT_005bb058;
          fVar1 = _DAT_005bb05c / fVar1;
          param_1[1] = (param_2[4] + param_2[1]) * fVar1;
          param_1[2] = (param_2[8] + param_2[2]) * fVar1;
          param_1[3] = (param_2[9] + param_2[6]) * fVar1;
        }
      }
      else {
        fVar1 = (_DAT_005bb05c / SQRT(fVar5)) * _DAT_005bb058;
        *param_1 = (param_2[6] - param_2[9]) * fVar1;
        param_1[1] = (param_2[8] - param_2[2]) * fVar1;
        param_1[2] = (param_2[1] - param_2[4]) * fVar1;
        param_1[3] = (_DAT_005bb05c / fVar1) * _DAT_005bb054;
      }
      return param_1;
    }
    if (_DAT_005b71d0 != 0) break;
    FUN_004d34fc();
    param_1 = extraout_ECX;
  }
  fVar1 = *param_2;
  fVar2 = param_2[5];
  fVar3 = param_2[10];
  fVar4 = param_2[0xf];
  fVar5 = fVar1 + fVar2 + fVar3 + fVar4;
  if (fVar5 <= _DAT_005bb080) {
    if ((fVar1 < fVar2) || (fVar1 < fVar3)) {
      if ((fVar2 < fVar1) || (fVar2 < fVar3)) {
        fVar1 = SQRT(((fVar3 + fVar4) - fVar1) - fVar2);
        fVar1 = fVar1 + fVar1;
        *param_1 = (_DAT_005bb07c / fVar1) * (param_2[8] + param_2[2]);
        fVar1 = _DAT_005bb07c / fVar1;
        param_1[1] = (param_2[9] + param_2[6]) * fVar1;
        param_1[2] = _DAT_005bb078 * fVar1;
        param_1[3] = (param_2[4] + param_2[1]) * fVar1;
      }
      else {
        fVar1 = SQRT(((fVar2 + fVar4) - fVar1) - fVar3);
        fVar1 = fVar1 + fVar1;
        *param_1 = (_DAT_005bb07c / fVar1) * (param_2[4] + param_2[1]);
        fVar1 = _DAT_005bb07c / fVar1;
        param_1[1] = _DAT_005bb078 * fVar1;
        param_1[2] = (param_2[9] + param_2[6]) * fVar1;
        param_1[3] = (param_2[8] + param_2[2]) * fVar1;
      }
    }
    else {
      fVar1 = SQRT(((fVar1 + fVar4) - fVar2) - fVar3);
      fVar1 = fVar1 + fVar1;
      *param_1 = (_DAT_005bb07c / fVar1) * _DAT_005bb078;
      fVar1 = _DAT_005bb07c / fVar1;
      param_1[1] = (param_2[4] + param_2[1]) * fVar1;
      param_1[2] = (param_2[8] + param_2[2]) * fVar1;
      param_1[3] = (param_2[9] + param_2[6]) * fVar1;
    }
  }
  else {
    fVar1 = (_DAT_005bb07c / SQRT(fVar5)) * _DAT_005bb078;
    *param_1 = (param_2[6] - param_2[9]) * fVar1;
    param_1[1] = (param_2[8] - param_2[2]) * fVar1;
    param_1[2] = (param_2[1] - param_2[4]) * fVar1;
    param_1[3] = (_DAT_005bb07c / fVar1) * _DAT_005bb074;
  }
  return param_1;
}




/* Function: FUN_00548cb8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_00548cb8(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *extraout_ECX;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xfffffff4) != 0) {
      fVar1 = *param_2;
      fVar2 = param_2[4];
      fVar3 = param_2[8];
      fVar4 = _DAT_005bb090 + fVar1 + fVar2 + fVar3;
      if (fVar4 <= _DAT_005bb08c) {
        if ((fVar1 < fVar2) || (fVar1 < fVar3)) {
          if ((fVar2 < fVar1) || (fVar2 < fVar3)) {
            fVar1 = SQRT(((_DAT_005bb090 + fVar3) - fVar1) - fVar2);
            fVar1 = fVar1 + fVar1;
            *param_1 = (_DAT_005bb090 / fVar1) * (param_2[6] + param_2[2]);
            fVar1 = _DAT_005bb090 / fVar1;
            param_1[1] = (param_2[7] + param_2[5]) * fVar1;
            param_1[2] = _DAT_005bb088 * fVar1;
            param_1[3] = (param_2[3] + param_2[1]) * fVar1;
          }
          else {
            fVar1 = SQRT(((_DAT_005bb090 + fVar2) - fVar1) - fVar3);
            fVar1 = fVar1 + fVar1;
            *param_1 = (_DAT_005bb090 / fVar1) * (param_2[3] + param_2[1]);
            fVar1 = _DAT_005bb090 / fVar1;
            param_1[1] = _DAT_005bb088 * fVar1;
            param_1[2] = (param_2[7] + param_2[5]) * fVar1;
            param_1[3] = (param_2[6] + param_2[2]) * fVar1;
          }
        }
        else {
          fVar1 = SQRT(((_DAT_005bb090 + fVar1) - fVar2) - fVar3);
          fVar1 = fVar1 + fVar1;
          *param_1 = (_DAT_005bb090 / fVar1) * _DAT_005bb088;
          fVar1 = _DAT_005bb090 / fVar1;
          param_1[1] = (param_2[3] + param_2[1]) * fVar1;
          param_1[2] = (param_2[6] + param_2[2]) * fVar1;
          param_1[3] = (param_2[7] + param_2[5]) * fVar1;
        }
      }
      else {
        fVar1 = (_DAT_005bb090 / SQRT(fVar4)) * _DAT_005bb088;
        *param_1 = (param_2[5] - param_2[7]) * fVar1;
        param_1[1] = (param_2[6] - param_2[2]) * fVar1;
        param_1[2] = (param_2[1] - param_2[3]) * fVar1;
        param_1[3] = (_DAT_005bb090 / fVar1) * _DAT_005bb084;
      }
      return param_1;
    }
    if (_DAT_005b71d0 != 0) break;
    FUN_004d34fc();
    param_1 = extraout_ECX;
  }
  fVar1 = *param_2;
  fVar2 = param_2[4];
  fVar3 = param_2[8];
  fVar4 = _DAT_005bb0b0 + fVar1 + fVar2 + fVar3;
  if (fVar4 <= _DAT_005bb0ac) {
    if ((fVar1 < fVar2) || (fVar1 < fVar3)) {
      if ((fVar2 < fVar1) || (fVar2 < fVar3)) {
        fVar1 = SQRT(((_DAT_005bb0b0 + fVar3) - fVar1) - fVar2);
        fVar1 = fVar1 + fVar1;
        *param_1 = (_DAT_005bb0b0 / fVar1) * (param_2[6] + param_2[2]);
        fVar1 = _DAT_005bb0b0 / fVar1;
        param_1[1] = (param_2[7] + param_2[5]) * fVar1;
        param_1[2] = _DAT_005bb0a8 * fVar1;
        param_1[3] = (param_2[3] + param_2[1]) * fVar1;
      }
      else {
        fVar1 = SQRT(((_DAT_005bb0b0 + fVar2) - fVar1) - fVar3);
        fVar1 = fVar1 + fVar1;
        *param_1 = (_DAT_005bb0b0 / fVar1) * (param_2[3] + param_2[1]);
        fVar1 = _DAT_005bb0b0 / fVar1;
        param_1[1] = _DAT_005bb0a8 * fVar1;
        param_1[2] = (param_2[7] + param_2[5]) * fVar1;
        param_1[3] = (param_2[6] + param_2[2]) * fVar1;
      }
    }
    else {
      fVar1 = SQRT(((_DAT_005bb0b0 + fVar1) - fVar2) - fVar3);
      fVar1 = fVar1 + fVar1;
      *param_1 = (_DAT_005bb0b0 / fVar1) * _DAT_005bb0a8;
      fVar1 = _DAT_005bb0b0 / fVar1;
      param_1[1] = (param_2[3] + param_2[1]) * fVar1;
      param_1[2] = (param_2[6] + param_2[2]) * fVar1;
      param_1[3] = (param_2[7] + param_2[5]) * fVar1;
    }
  }
  else {
    fVar1 = (_DAT_005bb0b0 / SQRT(fVar4)) * _DAT_005bb0a8;
    *param_1 = (param_2[5] - param_2[7]) * fVar1;
    param_1[1] = (param_2[6] - param_2[2]) * fVar1;
    param_1[2] = (param_2[1] - param_2[3]) * fVar1;
    param_1[3] = (_DAT_005bb0b0 / fVar1) * _DAT_005bb0a4;
  }
  return param_1;
}




/* Function: FUN_00548fb4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_00548fb4(float *param_1,float *param_2,float param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
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
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0058135c;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  ExceptionList = &local_10;
  _eh_vector_constructor_iterator_
            (&local_5c,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  local_38 = 0x3f800000;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_8 = 0;
  fVar1 = (float10)fcos((float10)param_3);
  fVar2 = (float10)fsin((float10)param_3);
  fVar3 = (float10)_DAT_005bb0e0;
  fVar4 = (float10)*param_2;
  fVar7 = fVar3 - fVar1;
  local_5c = (float)((fVar3 - fVar4 * fVar4) * fVar1 + fVar4 * fVar4);
  fVar5 = (float10)param_2[1];
  fVar8 = fVar4 * fVar5 * fVar7;
  fVar6 = (float10)param_2[2];
  fVar4 = fVar4 * fVar6 * fVar7;
  local_58 = (float)(fVar6 * fVar2 + fVar8);
  local_54 = (float)(-fVar5 * fVar2 + fVar4);
  local_50 = (float)(-fVar6 * fVar2 + fVar8);
  local_4c = (float)((fVar3 - fVar5 * fVar5) * (float10)(float)fVar1 + fVar5 * fVar5);
  fVar7 = fVar5 * fVar6 * fVar7;
  fVar3 = (float10)*param_2;
  local_48 = (float)(fVar3 * fVar2 + fVar7);
  local_44 = (float)(fVar5 * fVar2 + fVar4);
  local_40 = (float)(fVar7 + -fVar3 * fVar2);
  local_3c = (float)(((float10)_DAT_005bb0e0 - fVar6 * fVar6) * (float10)(float)fVar1 +
                    fVar6 * fVar6);
  _eh_vector_constructor_iterator_(param_1,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  if (&local_5c != param_1) {
    *param_1 = local_5c;
    param_1[1] = local_58;
    param_1[2] = local_54;
  }
  if (&local_50 != param_1 + 3) {
    param_1[3] = local_50;
    param_1[4] = local_4c;
    param_1[5] = local_48;
  }
  if (&local_44 != param_1 + 6) {
    param_1[6] = local_44;
    param_1[7] = local_40;
    param_1[8] = local_3c;
  }
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(&local_5c,0xc,3,FUN_00407150);
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_00549210 */

undefined4 FUN_00549210(undefined4 param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_2);
  fVar2 = (float10)fsin((float10)param_2);
  FUN_00549238(param_1,(float)fVar2,(float)fVar1);
  return param_1;
}




/* Function: FUN_00549238 */

undefined4 * FUN_00549238(undefined4 *param_1,float param_2,undefined4 param_3)

{
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20 [3];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00581384;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff90;
  ExceptionList = &local_10;
  _eh_vector_constructor_iterator_
            (&local_5c,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  local_38 = 0x3f800000;
  local_34 = 0;
  local_30 = 0;
  if (&local_38 != &local_5c) {
    local_58 = 0;
  }
  local_2c = 0;
  local_28 = 0x3f800000;
  local_24 = 0;
  if (&local_2c != &local_50) {
    local_50 = 0;
    local_4c = 0x3f800000;
    local_48 = 0;
  }
  local_20[0] = 0.0;
  local_20[1] = 0.0;
  local_20[2] = 1.0;
  if (local_20 != &local_44) {
    local_40 = 0;
  }
  local_8 = 0;
  local_5c = param_3;
  local_54 = -param_2;
  local_44 = param_2;
  local_3c = param_3;
  _eh_vector_constructor_iterator_(param_1,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  if (&local_5c != param_1) {
    *param_1 = local_5c;
    param_1[1] = local_58;
    param_1[2] = local_54;
  }
  if (&local_50 != param_1 + 3) {
    param_1[3] = local_50;
    param_1[4] = local_4c;
    param_1[5] = local_48;
  }
  if (&local_44 != (float *)(param_1 + 6)) {
    param_1[6] = local_44;
    param_1[7] = local_40;
    param_1[8] = local_3c;
  }
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(&local_5c,0xc,3,FUN_00407150);
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_005493e8 */

void __thiscall FUN_005493e8(int param_1,float param_2)

{
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * param_2;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) * param_2;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) * param_2;
  return;
}




/* Function: FUN_00549408 */

void FUN_00549408(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1);
  fVar2 = (float10)fsin((float10)param_1);
  FUN_00549424((float)fVar2,(float)fVar1);
  return;
}




/* Function: FUN_00549424 */

void __thiscall FUN_00549424(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = -param_2;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  *param_1 = fVar1 * param_3 + param_1[3] * fVar4;
  param_1[1] = fVar2 * param_3 + param_1[4] * fVar4;
  param_1[2] = fVar3 * param_3 + fVar4 * param_1[5];
  param_1[3] = param_1[3] * param_3 + fVar1 * param_2;
  param_1[4] = param_1[4] * param_3 + fVar2 * param_2;
  param_1[5] = param_1[5] * param_3 + fVar3 * param_2;
  return;
}




/* Function: FUN_005494a8 */

void FUN_005494a8(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1);
  fVar2 = (float10)fsin((float10)param_1);
  FUN_005494c4((float)fVar2,(float)fVar1);
  return;
}




/* Function: FUN_005494c4 */

void __thiscall FUN_005494c4(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar4 = -param_2;
  fVar3 = param_1[2];
  *param_1 = fVar1 * param_3 + param_1[6] * param_2;
  param_1[1] = fVar2 * param_3 + param_1[7] * param_2;
  param_1[2] = param_1[2] * param_3 + param_1[8] * param_2;
  param_1[6] = param_1[6] * param_3 + fVar1 * fVar4;
  param_1[7] = fVar2 * fVar4 + param_1[7] * param_3;
  param_1[8] = param_1[8] * param_3 + fVar3 * fVar4;
  return;
}




/* Function: FUN_0054954c */

void FUN_0054954c(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1);
  fVar2 = (float10)fsin((float10)param_1);
  FUN_00549568((float)fVar2,(float)fVar1);
  return;
}




/* Function: FUN_00549568 */

void __thiscall FUN_00549568(int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = -param_2;
  fVar1 = *(float *)(param_1 + 0xc);
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0xc) = fVar1 * param_3 + *(float *)(param_1 + 0x18) * fVar4;
  *(float *)(param_1 + 0x10) = fVar2 * param_3 + *(float *)(param_1 + 0x1c) * fVar4;
  *(float *)(param_1 + 0x14) = fVar3 * param_3 + fVar4 * *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) * param_3 + fVar1 * param_2;
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) * param_3 + fVar2 * param_2;
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) * param_3 + fVar3 * param_2;
  return;
}




/* Function: FUN_005495f0 */

undefined4 * __thiscall FUN_005495f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *param_2 = *(undefined4 *)(param_1 + 8);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return param_2;
}




/* Function: FUN_00549610 */

undefined4 * __thiscall FUN_00549610(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return param_2;
}




/* Function: FUN_00549630 */

undefined4 * __thiscall FUN_00549630(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[3];
  uVar2 = param_1[6];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return param_2;
}




/* Function: FUN_00549650 */

undefined4 * __thiscall FUN_00549650(undefined4 *param_1,undefined4 *param_2)

{
  _eh_vector_constructor_iterator_(param_1,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[4];
  param_1[4] = param_2[5];
  param_1[5] = param_2[6];
  param_1[6] = param_2[8];
  param_1[7] = param_2[9];
  param_1[8] = param_2[10];
  return param_1;
}




/* Function: FUN_005496a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_005496a8(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  _eh_vector_constructor_iterator_(param_1,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = (_DAT_005bb104 / (fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)) *
          _DAT_005bb108;
  fVar6 = fVar2 * fVar5;
  fVar8 = fVar5 * fVar3;
  fVar7 = fVar4 * fVar1 * fVar5;
  fVar5 = fVar1 * fVar5 * fVar1;
  *param_1 = _DAT_005bb104 - (fVar6 * fVar2 + fVar3 * fVar8);
  param_1[1] = fVar4 * fVar8 + fVar1 * fVar6;
  param_1[2] = fVar1 * fVar8 - fVar4 * fVar6;
  param_1[3] = fVar1 * fVar6 - fVar4 * fVar8;
  param_1[4] = _DAT_005bb104 - (fVar3 * fVar8 + fVar5);
  param_1[5] = fVar7 + fVar8 * fVar2;
  param_1[6] = fVar1 * fVar8 + fVar4 * fVar6;
  param_1[7] = fVar8 * fVar2 - fVar7;
  param_1[8] = _DAT_005bb104 - (fVar6 * fVar2 + fVar5);
  return param_1;
}




/* Function: FUN_005497ac */

void __fastcall FUN_005497ac(undefined4 *param_1)

{
  FUN_00555f10(*param_1);
  return;
}




/* Function: FUN_005497b8 */

undefined4 * __thiscall FUN_005497b8(undefined4 *param_1,byte param_2,byte param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 1;
  }
  uVar1 = FUN_00555e28(1 << (param_3 & 0x1f),1 << (param_2 & 0x1f),uVar1,8);
  *param_1 = uVar1;
  return param_1;
}




/* Function: FUN_00549800 */

void __thiscall FUN_00549800(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_3;
  return;
}




/* Function: FUN_00549820 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
FUN_00549820(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            undefined4 param_2,char *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00580519;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (param_1,param_3);
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00549880 */

void FUN_00549880(void)

{
  undefined1 local_14 [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00580538;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005537a0("STRING_T");
  local_4 = 0;
  FUN_00553820(&DAT_0058b1c4,4);
  FUN_00553860(&DAT_00593978,&DAT_0059397c);
  FUN_00553820(&DAT_0059397c,4);
  FUN_00553ba0(local_14);
  local_4 = 0xffffffff;
  FUN_00553920();
  ExceptionList = pvStack_c;
  return;
}




/* Function: FUN_00549910 */

void FUN_00549910(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00580562;
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




/* Function: FUN_00549990 */

int __thiscall FUN_00549990(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0xc)) {
      return 0;
    }
    if (*(int *)(*piVar1 + 0x1c) == param_2) break;
    piVar1 = piVar1 + 1;
  }
  return *piVar1;
}




/* Function: FUN_005499c0 */

undefined4 __thiscall FUN_005499c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  while( true ) {
    if (puVar1 == *(undefined4 **)(param_1 + 8)) {
      return 0;
    }
    if (*(int *)*puVar1 == param_2) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}




/* Function: FUN_005499f0 */

void __thiscall FUN_005499f0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_005499c0(param_2);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x10) = iVar1;
  }
  return;
}




/* Function: FUN_00549a10 */

int __thiscall FUN_00549a10(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_00549990(param_2);
    if (iVar1 != 0) {
      if (0xf < *(uint *)(iVar1 + 0x18)) {
        return *(int *)(iVar1 + 4);
      }
      return iVar1 + 4;
    }
  }
  return 0;
}




/* Function: FUN_00549a40 */

void __thiscall FUN_00549a40(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_00580570;
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
      FUN_00549910();
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




/* Function: FUN_00549ce0 */

void __thiscall FUN_00549ce0(int param_1,undefined4 param_2)

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
  FUN_00549a40(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_00549d50 */

/* WARNING: Removing unreachable block (ram,0x00549dc1) */

void __fastcall FUN_00549d50(int param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0058058b;
  local_c = ExceptionList;
  puVar1 = *(undefined4 **)(param_1 + 8);
  local_4 = 0;
  if (puVar1 != *(undefined4 **)(param_1 + 0xc)) {
    do {
      this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)*puVar1
      ;
      if (this != (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x0) {
        ExceptionList = &local_c;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
                    /* WARNING: Subroutine does not return */
        operator_delete(this);
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(param_1 + 0xc));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}




/* Function: FUN_00549df0 */

void FUN_00549df0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005805ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00493c27(0x20);
  local_4 = 0;
  if (iVar1 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_00549820(param_1,param_2);
  }
  local_4 = 0xffffffff;
  FUN_00549ce0(&param_2);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00549e70 */

void __fastcall FUN_00549e70(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}




/* Function: FUN_00549e90 */

void FUN_00549e90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005805cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_005499c0(param_1);
  if (iVar2 == 0) {
    param_1 = FUN_00493c27(0x14);
    local_4 = 0;
    if (param_1 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = FUN_0054a930(uVar1);
    }
    local_4 = 0xffffffff;
    FUN_00549ce0(&param_1);
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00549f50 */

undefined4 __thiscall FUN_00549f50(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005805e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00553ab0();
  local_4 = 0;
  iVar1 = FUN_00554200(param_2,2);
  if (iVar1 == 1) {
    FUN_00549880(local_3c);
    FUN_00553f50(&LAB_00549f10,param_1);
    puVar3 = *(undefined4 **)(param_1 + 4);
    if (puVar3 != *(undefined4 **)(param_1 + 8)) {
      do {
        FUN_005549e0((&PTR_DAT_005b29b0)[*(int *)*puVar3]);
        iVar1 = FUN_00554ad0("STRING_T",0,0);
        puVar2 = (undefined4 *)thunk_FUN_00493c27(iVar1 * 0xc);
        FUN_00554ad0("STRING_T",puVar2,iVar1);
        puVar4 = puVar2;
        if (0 < iVar1) {
          do {
            FUN_00549df0(*puVar4,puVar4[1]);
            iVar1 = iVar1 + -1;
            puVar4 = puVar4 + 3;
          } while (iVar1 != 0);
        }
        operator_delete__(puVar2);
        FUN_005549e0(&DAT_00593990);
        puVar3 = puVar3 + 1;
      } while (puVar3 != *(undefined4 **)(param_1 + 8));
    }
    FUN_00554750();
    local_4 = 0xffffffff;
    FUN_00555010();
    ExceptionList = local_c;
    return 1;
  }
  local_4 = 0xffffffff;
  FUN_00555010();
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_0054a0b0 */

void __fastcall FUN_0054a0b0(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00580608;
  local_c = ExceptionList;
  puVar2 = *(undefined4 **)(param_1 + 4);
  local_4 = 0;
  if (puVar2 != *(undefined4 **)(param_1 + 8)) {
    do {
      pvVar1 = (void *)*puVar2;
      if (pvVar1 != (void *)0x0) {
        ExceptionList = &local_c;
        FUN_00549d50();
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




/* Function: FUN_0054a130 */

void __thiscall FUN_0054a130(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = 0xffffffff;
  return;
}




/* Function: FUN_0054a290 */

void FUN_0054a290(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00580652;
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




/* Function: FUN_0054a310 */

void __thiscall FUN_0054a310(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_00580660;
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
      FUN_0054a290();
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




/* Function: FUN_0054a5b0 */

void __thiscall FUN_0054a5b0(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_00580670;
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




/* Function: FUN_0054a850 */

void __thiscall FUN_0054a850(int param_1,undefined4 param_2)

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
  FUN_0054a310(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_0054a8c0 */

void __thiscall FUN_0054a8c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[5] = param_2;
  param_1[6] = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




/* Function: FUN_0054a8f0 */

undefined4 FUN_0054a8f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00493c27(0xc);
  if (iVar1 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_0054a130(param_1,param_2);
  }
  FUN_0054a850(&param_2);
  return param_2;
}




/* Function: FUN_0054a930 */

void __thiscall FUN_0054a930(undefined4 *param_1,undefined4 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = param_2;
  return;
}




/* Function: FUN_0054a950 */

void __thiscall FUN_0054a950(int param_1,undefined4 param_2)

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
  FUN_0054a5b0(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_0054a9c0 */

void FUN_0054a9c0(char *param_1)

{
  int iVar1;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0058068b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = atoi(param_1);
  if (0 < iVar1) {
    local_10 = FUN_00493c27(0x14);
    local_4 = 0;
    if (local_10 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = FUN_0054a930(iVar1);
    }
    local_4 = 0xffffffff;
    FUN_0054a950(&local_10);
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_0054af44 */

void FUN_0054af44(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_00412d30(param_1,param_2);
  FUN_00412cfc(param_1,(double)param_3);
  FUN_004130e4(param_1,0xfffffffd);
  return;
}




/* Function: FUN_0054af80 */

void FUN_0054af80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00412d30(param_1,param_2);
  FUN_00412d30(param_1,param_3);
  FUN_004130e4(param_1,0xfffffffd);
  return;
}




/* Function: FUN_0054b1c0 */

void FUN_0054b1c0(undefined4 param_1,undefined4 *param_2)

{
  FUN_00412d30(param_1,*param_2);
  FUN_0054b1e4(param_1,&DAT_005b8134);
  return;
}




/* Function: FUN_0054b1e4 */

void FUN_0054b1e4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00413000(param_1,0);
  FUN_00412df0(param_1,param_2,0);
  FUN_00412ea8(param_1,0xfffffffe);
  iVar1 = FUN_00412b50(param_1,0xffffffff);
  if (iVar1 == 5) {
    FUN_00412a9c(param_1,1);
    FUN_004132a0(param_1,1,0);
  }
  else {
    FUN_00412950(param_1,0xfffffffe);
  }
  FUN_00412950(param_1,0xfffffffe);
  return;
}




/* Function: FUN_0054b294 */

void FUN_0054b294(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4)

{
  int iVar1;
  
  FUN_00412950(param_1,1);
  iVar1 = FUN_00412b50(param_1,1);
  if (iVar1 == 1) {
    (*param_4)(param_1,0);
  }
  else {
    iVar1 = FUN_00412b50(param_1,1);
    if (iVar1 == 5) {
      (*param_4)(param_1,param_3);
    }
    else {
      FUN_0055029c(param_1,1,"function expected");
    }
  }
  FUN_00413000(param_1,0);
  FUN_00412df0(param_1,param_2,0);
  FUN_00412a9c(param_1,0xffffffff);
  FUN_00412ea8(param_1,0xfffffffd);
  FUN_00412a9c(param_1,0xfffffffe);
  FUN_00412a9c(param_1,1);
  FUN_004130e4(param_1,0xfffffffb);
  return;
}




/* Function: FUN_0054b354 */

void FUN_0054b354(undefined4 param_1)

{
  FUN_0054ff5c(param_1,&PTR_s_getlocal_005b29cc,5);
  return;
}




/* Function: FUN_0054b3a0 */

int FUN_0054b3a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0054b3d4(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_0055029c(param_1,param_3,"invalid file handle");
  }
  return iVar1;
}




/* Function: FUN_0054b3d4 */

int FUN_0054b3d4(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00412cac(param_1,param_3);
  if (iVar1 != 0) {
    iVar2 = FUN_00412b70(param_1,param_3);
    if (iVar2 == *(int *)(param_2 + 8)) {
      return iVar1;
    }
    if (iVar2 == *(int *)(param_2 + 0xc)) {
      FUN_00412884(param_1,"cannot access a closed file");
    }
  }
  return 0;
}




/* Function: FUN_0054b424 */

bool FUN_0054b424(undefined4 param_1,int param_2,FILE *param_3)

{
  int iVar1;
  
  if (((param_3 != (FILE *)_iob_exref) && (param_3 != (FILE *)(_iob_exref + 0x20))) &&
     (param_3 != (FILE *)(_iob_exref + 0x40))) {
    FUN_00412df0(param_1,param_3,*(undefined4 *)(param_2 + 8));
    FUN_00413304(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = fclose(param_3);
    return iVar1 == 0;
  }
  return true;
}




/* Function: FUN_0054b480 */

undefined4 FUN_0054b480(undefined4 param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  
  if (param_2 != 0) {
    FUN_00412df0(param_1,0,0);
    return 1;
  }
  FUN_00412dac(param_1);
  piVar1 = _errno();
  pcVar2 = strerror(*piVar1);
  FUN_00412d30(param_1,pcVar2);
  piVar1 = _errno();
  FUN_00412cfc(param_1,(double)*piVar1);
  return 3;
}




/* Function: FUN_0054b4e4 */

undefined4 FUN_0054b4e4(undefined4 param_1)

{
  undefined4 uVar1;
  FILE *_File;
  
  uVar1 = FUN_00412cac(param_1,0xffffffff);
  _File = (FILE *)FUN_0054b3a0(param_1,uVar1,1);
  if (((_File != (FILE *)_iob_exref) && (_File != (FILE *)(_iob_exref + 0x20))) &&
     (_File != (FILE *)(_iob_exref + 0x40))) {
    fclose(_File);
  }
  return 0;
}




/* Function: FUN_0054b59c */

void FUN_0054b59c(undefined4 param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  FILE *pFVar3;
  char *_Filename;
  undefined4 uVar4;
  
  iVar1 = FUN_00412cac(param_1,0xffffffff);
  FUN_00412950(param_1,0xfffffffe);
  iVar2 = FUN_00412b50(param_1,1);
  if (iVar2 == -1) {
    uVar4 = FUN_0054b63c(param_1,iVar1,param_2);
    FUN_0054b424(param_1,iVar1,uVar4);
    pFVar3 = (FILE *)_iob_exref;
    if (param_2 != 0) {
      pFVar3 = (FILE *)(_iob_exref + 0x20);
    }
  }
  else {
    iVar2 = FUN_00412b70(param_1,1);
    if (iVar2 == *(int *)(iVar1 + 8)) {
      pFVar3 = (FILE *)FUN_00412cac(param_1,1);
    }
    else {
      _Filename = (char *)FUN_0054fe20(param_1,1,0);
      if (*_Filename == '|') {
        pFVar3 = (FILE *)0x0;
      }
      else {
        pFVar3 = fopen(_Filename,param_3);
      }
    }
  }
  FUN_0054b690(param_1,iVar1,pFVar3,param_2);
  return;
}




/* Function: FUN_0054b63c */

int FUN_0054b63c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  FUN_00412fcc(param_1);
  FUN_00413000(param_1,*(undefined4 *)(param_2 + param_3 * 4));
  FUN_00412ef8(param_1,0xfffffffe);
  iVar1 = FUN_0054b3d4(param_1,param_2,0xffffffff);
  if (iVar1 == 0) {
    FUN_00550214(param_1,"global variable `%.10s\' is not a file handle",
                 (&PTR_s__INPUT_005b2a00)[param_3]);
  }
  return iVar1;
}




/* Function: FUN_0054b690 */

undefined4 FUN_0054b690(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    FUN_0054c250(param_1,param_2,param_3,(&PTR_s__INPUT_005b2a00)[param_4]);
    FUN_00412df0(param_1,param_3,*(undefined4 *)(param_2 + 8));
    return 1;
  }
  uVar1 = FUN_0054b480(param_1,0);
  return uVar1;
}




/* Function: FUN_0054b924 */

bool FUN_0054b924(undefined4 param_1,FILE *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *local_21c [131];
  
  FUN_005501fc(param_1,local_21c);
  do {
    iVar1 = fgetc(param_2);
    iVar2 = isspace(iVar1);
  } while (iVar2 != 0);
  if (iVar1 != -1) {
    iVar2 = isspace(iVar1);
    if (iVar2 == 0) {
      do {
        if (&stack0xfffffff0 <= local_21c[0]) {
          FUN_00550048(local_21c);
        }
        *local_21c[0] = (char)iVar1;
        local_21c[0] = local_21c[0] + 1;
        iVar1 = fgetc(param_2);
        if (iVar1 == -1) break;
        iVar2 = isspace(iVar1);
      } while (iVar2 == 0);
    }
  }
  ungetc(iVar1,param_2);
  FUN_00550128(local_21c);
  iVar1 = FUN_00412c70(param_1,0xffffffff);
  return iVar1 != 0;
}




/* Function: FUN_0054b9e0 */

void FUN_0054b9e0(undefined4 param_1,FILE *param_2)

{
  void *pvVar1;
  size_t sVar2;
  uint uVar3;
  size_t _Size;
  void *_Memory;
  
  uVar3 = 0;
  _Size = 0x200;
LAB_0054b9f3:
  pvVar1 = malloc(_Size);
  if (pvVar1 != (void *)0x0) goto LAB_0054ba15;
  do {
    FUN_00412884(param_1,"not enough memory to read a file");
LAB_0054ba15:
    do {
      _Memory = pvVar1;
      sVar2 = fread((void *)(uVar3 + (int)_Memory),1,_Size - uVar3,param_2);
      uVar3 = uVar3 + sVar2;
      if (uVar3 < _Size) {
        FUN_00412d6c(param_1,_Memory,uVar3);
        if (_Memory != (void *)0x0) {
          free(_Memory);
        }
        return;
      }
      _Size = _Size * 2;
      if (_Memory == (void *)0x0) goto LAB_0054b9f3;
      pvVar1 = realloc(_Memory,_Size);
    } while (pvVar1 != (void *)0x0);
    free(_Memory);
  } while( true );
}




/* Function: FUN_0054ba84 */

bool FUN_0054ba84(undefined4 param_1,FILE *param_2)

{
  char cVar1;
  char *_Buf;
  char *pcVar2;
  int iVar3;
  int local_218 [131];
  
  iVar3 = 0;
  FUN_005501fc(param_1,local_218);
  do {
    _Buf = (char *)FUN_00550048(local_218);
    pcVar2 = fgets(_Buf,0x200,param_2);
    if (pcVar2 == (char *)0x0) {
LAB_0054baf3:
      FUN_00550128(local_218);
      return 0 < iVar3;
    }
    iVar3 = 0;
    cVar1 = *_Buf;
    pcVar2 = _Buf;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      iVar3 = iVar3 + 1;
      cVar1 = *pcVar2;
    }
    if (_Buf[iVar3 + -1] == '\n') {
      local_218[0] = local_218[0] + -1 + iVar3;
      goto LAB_0054baf3;
    }
    local_218[0] = local_218[0] + iVar3;
  } while( true );
}




/* Function: FUN_0054bb10 */

undefined4 FUN_0054bb10(undefined4 param_1,FILE *param_2)

{
  int iVar1;
  undefined8 local_8;
  
  iVar1 = fscanf(param_2,"%lf",&local_8);
  if (iVar1 != 1) {
    return 0;
  }
  FUN_00412cfc(param_1,local_8);
  return 1;
}




/* Function: FUN_0054bb54 */

undefined4 FUN_0054bb54(undefined4 param_1,FILE *param_2,uint param_3)

{
  undefined1 *_DstBuf;
  size_t sVar1;
  undefined1 local_210 [512];
  
  _DstBuf = local_210;
  if ((0x200 < param_3) && (_DstBuf = malloc(param_3), _DstBuf == (undefined1 *)0x0)) {
    FUN_00412884(param_1,"not enough memory to read a file");
  }
  sVar1 = fread(_DstBuf,1,param_3,param_2);
  FUN_00412d6c(param_1,_DstBuf,sVar1);
  if ((_DstBuf != local_210) && (_DstBuf != (undefined1 *)0x0)) {
    free(_DstBuf);
  }
  if ((sVar1 == 0) && (param_3 != 0)) {
    return 0;
  }
  return 1;
}




/* Function: FUN_0054bec4 */

void FUN_0054bec4(undefined4 param_1)

{
  char *_Filename;
  int iVar1;
  
  _Filename = (char *)FUN_0054fe20(param_1,1,0);
  iVar1 = remove(_Filename);
  FUN_0054b480(param_1,iVar1 == 0);
  return;
}




/* Function: FUN_0054bf44 */

undefined4 FUN_0054bf44(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0054fe20(param_1,1,0);
  pcVar1 = getenv(pcVar1);
  FUN_00412d30(param_1,pcVar1);
  return 1;
}




/* Function: FUN_0054c114 */

void FUN_0054c114(undefined4 param_1)

{
  FUN_0054ff5c(param_1,&PTR_s__ERRORMESSAGE_005b2a60,0xb);
  FUN_0054c134(param_1);
  return;
}




/* Function: FUN_0054c134 */

void FUN_0054c134(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)FUN_00413550(param_1,0x10);
  uVar2 = FUN_004135a0(param_1);
  puVar1[2] = uVar2;
  uVar2 = FUN_004135a0(param_1);
  puVar1[3] = uVar2;
  uVar3 = 0;
  iVar4 = 0;
  do {
    FUN_00412a9c(param_1,0xffffffff);
    FUN_00412dd8(param_1,*(undefined4 *)((int)&PTR_LAB_005b2ac4 + uVar3),1);
    FUN_004130c0(param_1,*(undefined4 *)((int)&PTR_s_appendto_005b2ac0 + iVar4));
    iVar4 = iVar4 + 8;
    uVar3 = uVar3 + 8;
  } while (uVar3 < 0x48);
  FUN_00412d30(param_1,PTR_s__INPUT_005b2a00);
  uVar2 = FUN_004131e0(param_1,1);
  *puVar1 = uVar2;
  FUN_00412d30(param_1,PTR_s__OUTPUT_005b2a04);
  uVar2 = FUN_004131e0(param_1,1);
  puVar1[1] = uVar2;
  FUN_0054c250(param_1,puVar1,_iob_exref,PTR_s__INPUT_005b2a00);
  FUN_0054c250(param_1,puVar1,_iob_exref + 0x20,PTR_s__OUTPUT_005b2a04);
  FUN_0054c250(param_1,puVar1,_iob_exref,"_STDIN");
  FUN_0054c250(param_1,puVar1,_iob_exref + 0x20,"_STDOUT");
  FUN_0054c250(param_1,puVar1,_iob_exref + 0x40,"_STDERR");
  FUN_00412dd8(param_1,FUN_0054b4e4,1);
  FUN_00413834(param_1,puVar1[2],&DAT_00587178);
  return;
}




/* Function: FUN_0054c250 */

void FUN_0054c250(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00412df0(param_1,param_3,*(undefined4 *)(param_2 + 8));
  FUN_004130c0(param_1,param_4);
  return;
}




/* Function: FUN_0054cfd4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054cfd4(undefined4 param_1)

{
  FUN_0054ff5c(param_1,&PTR_DAT_005b2b20,0x18);
  FUN_00412dd8(param_1,&LAB_0054c8cc,0);
  FUN_00413834(param_1,2,&DAT_00587164);
  FUN_00412cfc(param_1,_DAT_005bb1d8);
  FUN_004130c0(param_1,&DAT_00593e94);
  return;
}




/* Function: FUN_0054d1a0 */

int FUN_0054d1a0(int param_1,int param_2)

{
  if (-1 < param_1) {
    return param_1;
  }
  return param_1 + 1 + param_2;
}




/* Function: FUN_0054d7a8 */

undefined1 * FUN_0054d7a8(undefined4 param_1,undefined1 *param_2,char *param_3,uint *param_4)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  
LAB_0054d7b6:
  cVar1 = *param_3;
  if (cVar1 == '(') {
    puVar5 = (undefined1 *)FUN_0054de28(param_1,param_2,param_3,param_4);
    return puVar5;
  }
  if (cVar1 == ')') {
    puVar5 = (undefined1 *)FUN_0054ddac(param_1,param_2,param_3,param_4);
    return puVar5;
  }
  if (cVar1 == '%') {
    iVar4 = isdigit((uint)(byte)param_3[1]);
    if (iVar4 != 0) {
      param_2 = (undefined1 *)FUN_0054daac(param_1,param_2,(int)param_3[1],param_4);
      if (param_2 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      param_3 = param_3 + 2;
      goto LAB_0054d7b6;
    }
    if (param_3[1] == 'b') {
      param_2 = (undefined1 *)FUN_0054da44(param_1,param_2,param_3 + 2,param_4);
      if (param_2 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      param_3 = param_3 + 4;
      goto LAB_0054d7b6;
    }
  }
  else {
    if (cVar1 == '\0') {
      return param_2;
    }
    if ((cVar1 == '$') && (param_3[1] == '\0')) {
      if (param_2 != (undefined1 *)*param_4) {
        param_2 = (undefined1 *)0x0;
      }
      return param_2;
    }
  }
  pcVar3 = (char *)FUN_0054d9bc(param_1,param_3);
  if (param_2 < (undefined1 *)*param_4) {
    iVar4 = FUN_0054db8c(*param_2,param_3,pcVar3);
    if (iVar4 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
  cVar1 = *pcVar3;
  if (cVar1 == '?') {
    if (bVar2) {
      param_3 = pcVar3 + 1;
      puVar5 = (undefined1 *)FUN_0054d7a8(param_1,param_2 + 1,param_3,param_4);
      if (puVar5 != (undefined1 *)0x0) {
        return puVar5;
      }
    }
    else {
      param_3 = pcVar3 + 1;
    }
  }
  else {
    if (cVar1 == '*') {
      puVar5 = (undefined1 *)FUN_0054db10(param_1,param_2,param_3,pcVar3,param_4);
      return puVar5;
    }
    if (cVar1 == '+') {
      if (bVar2) {
        puVar5 = (undefined1 *)FUN_0054db10(param_1,param_2 + 1,param_3,pcVar3,param_4);
        return puVar5;
      }
      return (undefined1 *)0x0;
    }
    if (cVar1 == '-') {
      puVar5 = (undefined1 *)FUN_0054dd54(param_1,param_2,param_3,pcVar3,param_4);
      return puVar5;
    }
    if (!bVar2) {
      return (undefined1 *)0x0;
    }
    param_2 = param_2 + 1;
    param_3 = pcVar3;
  }
  goto LAB_0054d7b6;
}




/* Function: FUN_0054d9bc */

char * FUN_0054d9bc(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = param_2 + 1;
  if (*param_2 == '%') {
    if (param_2[1] == '\0') {
      FUN_00412884(param_1,"malformed pattern (ends with `%\')");
    }
    return param_2 + 2;
  }
  if (*param_2 != '[') {
    return pcVar2;
  }
  cVar1 = param_2[1];
  if (cVar1 == '^') {
    pcVar2 = param_2 + 2;
    cVar1 = param_2[2];
  }
  do {
    if (cVar1 == '\0') {
      FUN_00412884(param_1,"malformed pattern (missing `]\')");
    }
    pcVar3 = pcVar2 + 1;
    if (*pcVar2 == '%') {
      cVar1 = '\0';
      if (*pcVar3 != '\0') {
        pcVar3 = pcVar2 + 2;
        cVar1 = *pcVar3;
      }
    }
    else {
      cVar1 = *pcVar3;
    }
    pcVar2 = pcVar3;
  } while (cVar1 != ']');
  return pcVar3 + 1;
}




/* Function: FUN_0054da44 */

char * FUN_0054da44(undefined4 param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *param_3;
  if ((cVar2 == '\0') || (param_3[1] == '\0')) {
    FUN_00412884(param_1,"unbalanced pattern");
    cVar2 = *param_3;
  }
  if (cVar2 == *param_2) {
    iVar3 = 1;
    while (pcVar1 = param_2, param_2 = pcVar1 + 1, param_2 < (char *)*param_4) {
      if (*param_2 == param_3[1]) {
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          return pcVar1 + 2;
        }
      }
      else if (*param_2 == cVar2) {
        iVar3 = iVar3 + 1;
      }
    }
  }
  return (char *)0x0;
}




/* Function: FUN_0054daac */

byte * FUN_0054daac(undefined4 param_1,byte *param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  
  iVar2 = FUN_0054e30c(param_1,param_3,param_4);
  uVar1 = param_4[iVar2 * 2 + 3];
  if (uVar1 <= (uint)(*param_4 - (int)param_2)) {
    pbVar4 = (byte *)param_4[iVar2 * 2 + 2];
    bVar6 = false;
    pbVar5 = param_2;
    for (uVar3 = uVar1; bVar7 = uVar3 == 0, !bVar7; uVar3 = uVar3 - 1) {
      bVar6 = *pbVar4 < *pbVar5;
      bVar7 = *pbVar4 == *pbVar5;
      if (!bVar7) break;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
      bVar6 = uVar3 == 0;
    }
    if ((!bVar6 && !bVar7) == bVar6) {
      return param_2 + uVar1;
    }
  }
  return (byte *)0x0;
}




/* Function: FUN_0054db10 */

int FUN_0054db10(undefined4 param_1,undefined1 *param_2,undefined4 param_3,int param_4,uint *param_5
                )

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 < (undefined1 *)*param_5) {
    iVar1 = FUN_0054db8c(*param_2,param_3,param_4);
    while (iVar1 != 0) {
      iVar2 = iVar2 + 1;
      if ((undefined1 *)*param_5 <= param_2 + iVar2) break;
      iVar1 = FUN_0054db8c(param_2[iVar2],param_3,param_4);
    }
    if (iVar2 < 0) {
      return 0;
    }
  }
  param_2 = param_2 + iVar2;
  do {
    iVar1 = FUN_0054d7a8(param_1,param_2,param_4 + 1,param_5);
    if (iVar1 != 0) {
      return iVar1;
    }
    param_2 = param_2 + -1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return 0;
}




/* Function: FUN_0054db8c */

uint FUN_0054db8c(uint param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_2;
  if (bVar1 == 0x2e) {
    return 1;
  }
  if (bVar1 == 0x25) {
    uVar2 = FUN_0054dc90(param_1,param_2[1]);
    return uVar2;
  }
  if (bVar1 == 0x5b) {
    uVar2 = FUN_0054dbdc(param_1,param_2,param_3 + -1);
    return uVar2;
  }
  return (uint)(bVar1 == param_1);
}




/* Function: FUN_0054dbdc */

bool FUN_0054dbdc(uint param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar3 = (byte *)(param_2 + 1);
  bVar4 = *(char *)(param_2 + 1) == '^';
  if (bVar4) {
    pbVar3 = (byte *)(param_2 + 2);
  }
  bVar4 = !bVar4;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          if (param_3 <= pbVar3) {
            return !bVar4;
          }
          bVar1 = *pbVar3;
          if (bVar1 != 0x25) break;
          iVar2 = FUN_0054dc90(param_1,pbVar3[1]);
          if (iVar2 != 0) {
            return bVar4;
          }
          pbVar3 = pbVar3 + 2;
        }
        if ((pbVar3[1] == 0x2d) && (pbVar3 + 2 < param_3)) break;
        pbVar3 = pbVar3 + 1;
        if (bVar1 == param_1) {
          return bVar4;
        }
      }
      if ((int)(uint)*pbVar3 <= (int)param_1) break;
      pbVar3 = pbVar3 + 3;
    }
    if ((int)param_1 <= (int)(uint)pbVar3[2]) break;
    pbVar3 = pbVar3 + 3;
  }
  return bVar4;
}




/* Function: FUN_0054dc90 */

uint FUN_0054dc90(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = tolower(param_2);
  switch(iVar1) {
  case 0x61:
    uVar2 = isalpha(param_1);
    break;
  default:
    return (uint)(param_2 == param_1);
  case 99:
    uVar2 = iscntrl(param_1);
    break;
  case 100:
    uVar2 = isdigit(param_1);
    break;
  case 0x6c:
    uVar2 = islower(param_1);
    break;
  case 0x70:
    uVar2 = ispunct(param_1);
    break;
  case 0x73:
    uVar2 = isspace(param_1);
    break;
  case 0x75:
    uVar2 = isupper(param_1);
    break;
  case 0x77:
    uVar2 = isalnum(param_1);
    break;
  case 0x78:
    uVar2 = isxdigit(param_1);
    break;
  case 0x7a:
    if (param_1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  iVar1 = islower(param_2);
  if (iVar1 == 0) {
    uVar2 = (uint)(uVar2 == 0);
  }
  return uVar2;
}




/* Function: FUN_0054dd54 */

int FUN_0054dd54(undefined4 param_1,undefined1 *param_2,undefined4 param_3,int param_4,uint *param_5
                )

{
  int iVar1;
  
  while( true ) {
    iVar1 = FUN_0054d7a8(param_1,param_2,param_4 + 1,param_5);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (((undefined1 *)*param_5 <= param_2) ||
       (iVar1 = FUN_0054db8c(*param_2,param_3,param_4), iVar1 == 0)) break;
    param_2 = param_2 + 1;
  }
  return 0;
}




/* Function: FUN_0054ddac */

void FUN_0054ddac(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0054ddf8(param_1,param_4);
  *(int *)(param_4 + 0xc + iVar1 * 8) = param_2 - *(int *)(param_4 + 8 + iVar1 * 8);
  iVar2 = FUN_0054d7a8(param_1,param_2,param_3 + 1,param_4);
  if (iVar2 == 0) {
    *(undefined4 *)(param_4 + 0xc + iVar1 * 8) = 0xffffffff;
  }
  return;
}




/* Function: FUN_0054ddf8 */

int FUN_0054ddf8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      FUN_00412884(param_1,"invalid pattern capture");
      return 0;
    }
  } while (*(int *)(param_2 + 0xc + iVar1 * 8) != -1);
  return iVar1;
}




/* Function: FUN_0054de28 */

void FUN_0054de28(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_4 + 4);
  if (0x1f < iVar1) {
    FUN_00412884(param_1,"too many captures");
  }
  *(undefined4 *)(param_4 + 8 + iVar1 * 8) = param_2;
  *(undefined4 *)(param_4 + 0xc + iVar1 * 8) = 0xffffffff;
  *(int *)(param_4 + 4) = iVar1 + 1;
  iVar1 = FUN_0054d7a8(param_1,param_2,param_3 + 1,param_4);
  if (iVar1 == 0) {
    *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + -1;
  }
  return;
}




/* Function: FUN_0054de80 */

void FUN_0054de80(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0054fd40(param_1,*(undefined4 *)(param_2 + 4),"too many captures");
  if (0 < *(int *)(param_2 + 4)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_2 + 0xc + iVar2 * 8);
      if (iVar1 == -1) {
        FUN_00412884(param_1,"unfinished capture");
      }
      FUN_00412d6c(param_1,*(undefined4 *)(param_2 + 8 + iVar2 * 8),iVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_2 + 4));
  }
  return;
}




/* Function: FUN_0054def8 */

byte * FUN_0054def8(byte *param_1,uint param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;
  byte *_Buf;
  size_t _MaxCount;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  
  if (param_4 == 0) {
    return param_1;
  }
  if (param_4 <= param_2) {
    _MaxCount = param_2 - (param_4 - 1);
    if (_MaxCount != 0) {
      pbVar1 = memchr(param_1,(int)(char)*param_3,_MaxCount);
      while (pbVar1 != (byte *)0x0) {
        _Buf = pbVar1 + 1;
        bVar5 = false;
        pbVar3 = _Buf;
        pbVar4 = param_3;
        for (iVar2 = param_4 - 1; bVar6 = iVar2 == 0, !bVar6; iVar2 = iVar2 + -1) {
          pbVar4 = pbVar4 + 1;
          bVar5 = *pbVar3 < *pbVar4;
          bVar6 = *pbVar3 == *pbVar4;
          if (!bVar6) break;
          pbVar3 = pbVar3 + 1;
          bVar5 = iVar2 == 0;
        }
        if ((!bVar5 && !bVar6) == bVar5) {
          return pbVar1;
        }
        _MaxCount = _MaxCount - ((int)_Buf - (int)param_1);
        if (_MaxCount == 0) {
          return (byte *)0x0;
        }
        pbVar1 = memchr(_Buf,(int)(char)*param_3,_MaxCount);
        param_1 = _Buf;
      }
    }
  }
  return (byte *)0x0;
}




/* Function: FUN_0054e1d4 */

void FUN_0054e1d4(undefined4 param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  int *piVar9;
  uint uVar10;
  
  iVar4 = FUN_00412b2c(param_1,3);
  if (iVar4 == 0) {
    FUN_00412a9c(param_1,3);
    uVar6 = FUN_0054de80(param_1,param_3);
    FUN_004132a0(param_1,uVar6,1);
    iVar4 = FUN_00412b2c(param_1,0xffffffff);
    if (iVar4 == 0) {
      FUN_00412950(param_1,0xfffffffe);
    }
    else {
      FUN_00550168(param_2);
    }
  }
  else {
    iVar4 = FUN_00412c34(param_1,3);
    uVar5 = FUN_00412c70(param_1,3);
    if (uVar5 != 0) {
      uVar10 = 0;
      do {
        cVar3 = *(char *)(iVar4 + uVar10);
        if (cVar3 == '%') {
          uVar10 = uVar10 + 1;
          pbVar1 = (byte *)(iVar4 + uVar10);
          iVar7 = isdigit((uint)*pbVar1);
          if (iVar7 == 0) {
            pbVar8 = (byte *)*param_2;
            if (param_2 + 0x83 <= pbVar8) {
              FUN_00550048(param_2);
              pbVar8 = (byte *)*param_2;
            }
            bVar2 = *pbVar1;
            *param_2 = (int)(pbVar8 + 1);
            *pbVar8 = bVar2;
          }
          else {
            iVar7 = FUN_0054e30c(param_1,(int)(char)*pbVar1,param_3);
            FUN_0054ffd8(param_2,*(undefined4 *)(param_3 + 8 + iVar7 * 8),
                         *(undefined4 *)(param_3 + 0xc + iVar7 * 8));
          }
        }
        else {
          piVar9 = (int *)*param_2;
          if (param_2 + 0x83 <= piVar9) {
            FUN_00550048(param_2);
            cVar3 = *(char *)(iVar4 + uVar10);
            piVar9 = (int *)*param_2;
          }
          *param_2 = (int)piVar9 + 1;
          *(char *)piVar9 = cVar3;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar5);
    }
  }
  return;
}




/* Function: FUN_0054e30c */

int FUN_0054e30c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 + -0x31;
  if (((iVar1 < 0) || (*(int *)(param_3 + 4) <= iVar1)) ||
     (*(int *)(param_3 + -0x17c + param_2 * 8) == -1)) {
    FUN_00412884(param_1,"invalid capture index");
  }
  return iVar1;
}




/* Function: FUN_0054e6e0 */

void FUN_0054e6e0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  char cVar5;
  int local_c;
  
  pcVar3 = (char *)FUN_0054fe20(param_1,param_3,&local_c);
  piVar4 = (int *)*param_2;
  piVar2 = param_2 + 0x83;
  if (piVar2 <= piVar4) {
    FUN_00550048(param_2);
    piVar4 = (int *)*param_2;
  }
  *param_2 = (int)((int)piVar4 + 1);
  *(undefined1 *)piVar4 = 0x22;
  while (iVar1 = local_c + -1, local_c != 0) {
    cVar5 = *pcVar3;
    if (((cVar5 == '\n') || (cVar5 == '\"')) || (cVar5 == '\\')) {
      piVar4 = (int *)*param_2;
      local_c = iVar1;
      if (piVar2 <= piVar4) {
        FUN_00550048(param_2);
        piVar4 = (int *)*param_2;
      }
      *param_2 = (int)piVar4 + 1;
      *(undefined1 *)piVar4 = 0x5c;
      piVar4 = (int *)*param_2;
      if (piVar2 <= piVar4) {
        FUN_00550048(param_2);
        piVar4 = (int *)*param_2;
      }
      cVar5 = *pcVar3;
      *param_2 = (int)piVar4 + 1;
      *(char *)piVar4 = cVar5;
    }
    else if (cVar5 == '\0') {
      local_c = iVar1;
      FUN_0054ffd8(param_2,&DAT_00593ff0,4);
    }
    else {
      piVar4 = (int *)*param_2;
      local_c = iVar1;
      if (piVar2 <= piVar4) {
        FUN_00550048(param_2);
        piVar4 = (int *)*param_2;
        cVar5 = *pcVar3;
      }
      *param_2 = (int)piVar4 + 1;
      *(char *)piVar4 = cVar5;
    }
    pcVar3 = pcVar3 + 1;
  }
  piVar4 = (int *)*param_2;
  if (piVar2 <= piVar4) {
    local_c = iVar1;
    FUN_00550048(param_2);
    piVar4 = (int *)*param_2;
  }
  *param_2 = (int)piVar4 + 1;
  *(undefined1 *)piVar4 = 0x22;
  return;
}




/* Function: FUN_0054e7e4 */

void FUN_0054e7e4(undefined4 param_1)

{
  FUN_0054ff5c(param_1,&PTR_s_strlen_005b2be0,0xb);
  return;
}




/* Function: FUN_0054e7f8 */

undefined4 FUN_0054e7f8(void)

{
  return 0;
}




/* Function: FUN_0054e958 */

undefined4 FUN_0054e958(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_0054fd94(param_1,2);
  uVar1 = FUN_0054fe20(param_1,1,0);
  FUN_004130c0(param_1,uVar1);
  return 0;
}




/* Function: FUN_0054e980 */

undefined4 FUN_0054e980(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0054fe20(param_1,1,0);
  FUN_00412e58(param_1,uVar1);
  return 1;
}




/* Function: FUN_0054eb88 */

undefined4 FUN_0054eb88(undefined4 param_1)

{
  int iVar1;
  
  FUN_00412fcc(param_1);
  iVar1 = FUN_00412b50(param_1,1);
  if (iVar1 != -1) {
    FUN_0054fd68(param_1,1,4);
    FUN_00412a9c(param_1,1);
    FUN_004131cc(param_1);
  }
  return 1;
}




/* Function: FUN_0054ebc8 */

undefined4 FUN_0054ebc8(undefined4 param_1)

{
  FUN_0054fd68(param_1,1,4);
  FUN_0054fd94(param_1,2);
  FUN_00412ef8(param_1,1);
  return 1;
}




/* Function: FUN_0054ebf4 */

undefined4 FUN_0054ebf4(undefined4 param_1)

{
  FUN_0054fd68(param_1,1,4);
  FUN_0054fd94(param_1,2);
  FUN_0054fd94(param_1,3);
  FUN_00413120(param_1,1);
  return 1;
}




/* Function: FUN_0054eed0 */

undefined4 FUN_0054eed0(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_0054fd94(param_1,1);
  uVar1 = FUN_00412b50(param_1,1);
  uVar1 = FUN_00412ae4(param_1,uVar1);
  FUN_00412d30(param_1,uVar1);
  return 1;
}




/* Function: FUN_0054ef00 */

undefined4 FUN_0054ef00(undefined4 param_1)

{
  int iVar1;
  
  FUN_0054fd68(param_1,1,4);
  FUN_00412950(param_1,2);
  iVar1 = FUN_00413354(param_1,1);
  if (iVar1 != 0) {
    return 2;
  }
  FUN_00412dac(param_1);
  return 1;
}




/* Function: FUN_0054ef98 */

int FUN_0054ef98(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    FUN_00412dac(param_1);
    FUN_00412d30(param_1,(&PTR_DAT_005b2c40)[param_2]);
    return 2;
  }
  iVar1 = FUN_00412940(param_1);
  if (0 < iVar1 - param_3) {
    return iVar1 - param_3;
  }
  FUN_00412df0(param_1,0,0);
  return 1;
}




/* Function: FUN_0054f30c */

undefined4 FUN_0054f30c(undefined4 param_1)

{
  int iVar1;
  
  FUN_0054fd68(param_1,1,4);
  FUN_0054fd68(param_1,2,5);
  FUN_00412dac(param_1);
  while( true ) {
    iVar1 = FUN_00413354(param_1,1);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_00412a9c(param_1,2);
    FUN_00412a9c(param_1,0xfffffffd);
    FUN_00412a9c(param_1,0xfffffffd);
    FUN_004132a0(param_1,2,1);
    iVar1 = FUN_00412b50(param_1,0xffffffff);
    if (iVar1 != 1) break;
    FUN_00412950(param_1,0xfffffffd);
  }
  return 1;
}




/* Function: FUN_0054f388 */

undefined4 FUN_0054f388(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0054fd94(param_1,1);
  iVar1 = FUN_00412b50(param_1,1);
  if (iVar1 == 1) {
    uVar2 = FUN_0054fdc0(param_1,2,&DAT_00582ad8,0);
    FUN_00550214(param_1,"assertion failed!  %.90s",uVar2);
  }
  return 0;
}




/* Function: FUN_0054f670 */

void FUN_0054f670(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < param_3) {
    do {
      FUN_00412f4c(param_1,1,param_2);
      FUN_00412f4c(param_1,1,param_3);
      iVar1 = FUN_0054f8fc(param_1,0xffffffff,0xfffffffe);
      if (iVar1 == 0) {
        FUN_00412950(param_1,0xfffffffd);
        iVar1 = param_3;
      }
      else {
        FUN_0054f8d8(param_1,param_2,param_3);
        iVar1 = param_3;
      }
      iVar4 = iVar1 - param_2;
      if (iVar4 == 1) {
        return;
      }
      iVar5 = (int)(param_2 + iVar1 + (uint)(0x7fffffff < (uint)(param_2 + iVar1))) >> 1;
      FUN_00412f4c(param_1,1,iVar5);
      FUN_00412f4c(param_1,1,param_2);
      iVar2 = FUN_0054f8fc(param_1,0xfffffffe,0xffffffff);
      if (iVar2 == 0) {
        FUN_00412950(param_1,0xfffffffe);
        FUN_00412f4c(param_1,1,iVar1);
        iVar2 = FUN_0054f8fc(param_1,0xffffffff,0xfffffffe);
        if (iVar2 == 0) {
          FUN_00412950(param_1,0xfffffffd);
        }
        else {
          FUN_0054f8d8(param_1,iVar5,iVar1);
        }
      }
      else {
        FUN_0054f8d8(param_1,iVar5,param_2);
      }
      if (iVar4 == 2) {
        return;
      }
      FUN_00412f4c(param_1,1,iVar5);
      FUN_00412a9c(param_1,0xffffffff);
      iVar4 = iVar1 + -1;
      FUN_00412f4c(param_1,1,iVar4);
      FUN_0054f8d8(param_1,iVar5,iVar4);
      param_3 = param_2;
      iVar2 = iVar4;
      while( true ) {
        param_3 = param_3 + 1;
        FUN_00412f4c(param_1,1,param_3,iVar1,iVar2);
        iVar3 = FUN_0054f8fc(param_1,0xffffffff,0xfffffffe);
        iVar5 = iVar1;
        while (iVar3 != 0) {
          if (iVar1 < param_3) {
            FUN_00412884(param_1,"invalid order function for sorting");
          }
          FUN_00412950(param_1,0xfffffffe);
          param_3 = param_3 + 1;
          FUN_00412f4c(param_1,1,param_3);
          iVar3 = FUN_0054f8fc(param_1,0xffffffff,0xfffffffe);
        }
        iVar4 = iVar4 + -1;
        FUN_00412f4c(param_1,1,iVar4);
        iVar3 = FUN_0054f8fc(param_1,0xfffffffd,0xffffffff);
        iVar1 = iVar5;
        while (iVar3 != 0) {
          if (iVar4 < param_2) {
            FUN_00412884(param_1,"invalid order function for sorting");
          }
          FUN_00412950(param_1,0xfffffffe);
          iVar4 = iVar4 + -1;
          FUN_00412f4c(param_1,1,iVar4);
          iVar3 = FUN_0054f8fc(param_1,0xfffffffd,0xffffffff);
        }
        if (iVar4 < param_3) break;
        FUN_0054f8d8(param_1,param_3,iVar4);
      }
      FUN_00412950(param_1,0xfffffffc);
      FUN_00412f4c(param_1,1,iVar2);
      FUN_00412f4c(param_1,1,param_3);
      FUN_0054f8d8(param_1,iVar2,param_3);
      if (param_3 - param_2 < iVar1 - param_3) {
        iVar4 = param_2;
        iVar2 = param_3 + -1;
        param_2 = param_3 + 1;
        param_3 = iVar1;
      }
      else {
        iVar4 = param_3 + 1;
        param_3 = param_3 + -1;
        iVar2 = iVar1;
      }
      FUN_0054f670(param_1,iVar4,iVar2);
    } while (param_2 < param_3);
  }
  return;
}




/* Function: FUN_0054f8d8 */

void FUN_0054f8d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00413178(param_1,1,param_2);
  FUN_00413178(param_1,1,param_3);
  return;
}




/* Function: FUN_0054f8fc */

uint FUN_0054f8fc(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00412b50(param_1,2);
  if (iVar1 != 1) {
    FUN_00412a9c(param_1,2);
    FUN_00412a9c(param_1,param_2 + -1);
    FUN_00412a9c(param_1,param_3 + -2);
    FUN_004132a0(param_1,2,1);
    iVar1 = FUN_00412b50(param_1,0xffffffff);
    FUN_00412950(param_1,0xfffffffe);
    return (uint)(iVar1 != 1);
  }
  uVar2 = FUN_00412bc4(param_1,param_2,param_3);
  return uVar2;
}




/* Function: FUN_0054f974 */

undefined4 FUN_0054f974(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00412c34(param_1,0xffffffff);
  FUN_00550214(param_1,"function `%.20s\' is deprecated",uVar1);
  return 0;
}




/* Function: FUN_0054f994 */

void FUN_0054f994(undefined4 param_1)

{
  FUN_0054ff5c(param_1,&PTR_s__ALERT_005b2c60,0x20);
  FUN_00412d30(param_1,"Lua 4.0.1");
  FUN_004130c0(param_1,"_VERSION");
  FUN_0054f9c8(param_1);
  return;
}




/* Function: FUN_0054f9c8 */

void FUN_0054f9c8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    FUN_00412d30(param_1,*(undefined4 *)((int)&PTR_s_foreachvar_005b2d60 + iVar1));
    FUN_00412dd8(param_1,FUN_0054f974,1);
    FUN_004130c0(param_1,*(undefined4 *)((int)&PTR_s_foreachvar_005b2d60 + iVar2));
    iVar2 = iVar2 + 8;
    iVar1 = iVar1 + 8;
  } while (iVar1 < 0x20);
  return;
}




/* Function: FUN_0054fa10 */

undefined4 FUN_0054fa10(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0054fdc0(param_1,1,0,0);
  FUN_00412884(param_1,uVar1);
  return 0;
}




/* Function: FUN_0054fb74 */

int FUN_0054fb74(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00419e70(0,0,0x70);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    *(undefined4 *)(iVar1 + 0x58) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x60) = 0x70;
    *(undefined4 *)(iVar1 + 0x5c) = 0x7ffffffd;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 1;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    iVar2 = FUN_004126e0(iVar1,&LAB_0054fb08,&stack0x00000004);
    if (iVar2 == 0) {
      *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x60) * 2;
      return iVar1;
    }
    FUN_0054fc10(iVar1);
  }
  return 0;
}




/* Function: FUN_0054fc10 */

void FUN_0054fc10(int param_1)

{
  int iVar1;
  
  FUN_00416bf8(param_1,1);
  FUN_0041a1f8(param_1);
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x60) =
         *(int *)(param_1 + 0x60) + -0x10 + (*(int *)(param_1 + 8) - iVar1 >> 4) * -0x10;
  }
  FUN_00419e70(param_1,iVar1,0);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -0x40 + *(int *)(param_1 + 0x4c) * -0x40;
  FUN_00419e70(param_1,*(undefined4 *)(param_1 + 0x48),0);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x54) * -0x18;
  FUN_00419e70(param_1,*(undefined4 *)(param_1 + 0x50),0);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x1c);
  FUN_00419e70(param_1,*(undefined4 *)(param_1 + 0x18),0);
  FUN_00419e70(param_1,param_1,0);
  return;
}




/* Function: FUN_0054fce0 */

int FUN_0054fce0(byte *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar3 = 0;
  if (*param_2 != 0) {
    pbVar5 = (byte *)*param_2;
    pbVar4 = param_1;
LAB_0054fcfc:
    do {
      bVar1 = *pbVar5;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 == *pbVar4) {
        if (bVar1 != 0) {
          bVar1 = pbVar5[1];
          bVar6 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_0054fd1c;
          pbVar5 = pbVar5 + 2;
          pbVar4 = pbVar4 + 2;
          if (bVar1 != 0) goto LAB_0054fcfc;
        }
        uVar2 = 0;
      }
      else {
LAB_0054fd1c:
        uVar2 = -(uint)bVar6 | 1;
      }
      if (uVar2 == 0) {
        return iVar3;
      }
      pbVar5 = (byte *)param_2[iVar3 + 1];
      iVar3 = iVar3 + 1;
      pbVar4 = param_1;
    } while (pbVar5 != (byte *)0x0);
  }
  return -1;
}




/* Function: FUN_0054fd40 */

void FUN_0054fd40(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00412930(param_1);
  if (iVar1 < param_2) {
    FUN_00550214(param_1,"stack overflow (%.30s)",param_3);
  }
  return;
}




/* Function: FUN_0054fd68 */

void FUN_0054fd68(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00412b50(param_1,param_2);
  if (iVar1 != param_3) {
    FUN_0055024c(param_1,param_2,param_3);
  }
  return;
}




/* Function: FUN_0054fd94 */

void FUN_0054fd94(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00412b50(param_1,param_2);
  if (iVar1 == -1) {
    FUN_0055029c(param_1,param_2,"value expected");
  }
  return;
}




/* Function: FUN_0054fdc0 */

char * FUN_0054fdc0(undefined4 param_1,undefined4 param_2,char *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_00412b50(param_1,param_2);
  if (iVar2 != -1) {
    pcVar3 = (char *)FUN_0054fe20(param_1,param_2,param_4);
    return pcVar3;
  }
  if (param_4 != (int *)0x0) {
    if (param_3 == (char *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
      cVar1 = *param_3;
      pcVar3 = param_3;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        iVar2 = iVar2 + 1;
        cVar1 = *pcVar3;
      }
    }
    *param_4 = iVar2;
  }
  return param_3;
}




/* Function: FUN_0054fe0a */

void FUN_0054fe0a(void)

{
  FUN_0054fe20();
  return;
}




/* Function: FUN_0054fe20 */

int FUN_0054fe20(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00412c34(param_1,param_2);
  if (iVar1 == 0) {
    FUN_0055024c(param_1,param_2,3);
  }
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_00412c70(param_1,param_2);
    *param_3 = uVar2;
  }
  return iVar1;
}




/* Function: FUN_0054fe64 */

float10 FUN_0054fe64(undefined4 param_1,undefined4 param_2,double param_3)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00412b50(param_1,param_2);
  if (iVar1 != -1) {
    fVar2 = (float10)FUN_0054fe94(param_1,param_2);
    return fVar2;
  }
  return (float10)param_3;
}




/* Function: FUN_0054fe94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0054fe94(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  float10 fVar2;
  
  while( true ) {
    if ((_DAT_005b71d0 & 0xffffff80) != 0) {
      fVar2 = (float10)FUN_00412c00(param_1,param_2);
      if ((double)fVar2 == _DAT_005bb398) {
        iVar1 = FUN_00412afc(param_1,param_2);
        if (iVar1 == 0) {
          FUN_0055024c(param_1,param_2,2);
        }
      }
      return (float10)(double)fVar2;
    }
    if (_DAT_005b71d0 != 0) break;
    FUN_004d34fc();
  }
  fVar2 = (float10)FUN_00412c00(param_1,param_2);
  if ((double)fVar2 == _DAT_005bb3a8) {
    iVar1 = FUN_00412afc(param_1,param_2);
    if (iVar1 == 0) {
      FUN_0055024c(param_1,param_2,2);
    }
  }
  return (float10)(double)fVar2;
}




/* Function: FUN_0054ff5c */

void FUN_0054ff5c(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (0 < param_3) {
    puVar1 = param_2 + param_3 * 2;
    do {
      FUN_00412dd8(param_1,param_2[1],0);
      FUN_004130c0(param_1,*param_2);
      param_2 = param_2 + 2;
    } while (param_2 < puVar1);
  }
  return;
}




/* Function: FUN_0054ffb0 */

void FUN_0054ffb0(undefined4 param_1,char *param_2)

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
  FUN_0054ffd8(param_1,param_2,iVar2);
  return;
}




/* Function: FUN_0054ffd8 */

void FUN_0054ffd8(int *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_3 + -1;
  if (param_3 != 0) {
    do {
      piVar2 = (int *)*param_1;
      if (param_1 + 0x83 <= piVar2) {
        FUN_00550048(param_1);
        piVar2 = (int *)*param_1;
      }
      uVar1 = *param_2;
      iVar3 = iVar3 + -1;
      *param_1 = (int)piVar2 + 1;
      param_2 = param_2 + 1;
      *(undefined1 *)piVar2 = uVar1;
    } while (iVar3 != -1);
  }
  return;
}




/* Function: FUN_00550048 */

int FUN_00550048(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00550064(param_1);
  if (iVar1 != 0) {
    FUN_00550094(param_1);
  }
  return param_1 + 0xc;
}




/* Function: FUN_00550064 */

undefined4 FUN_00550064(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 3;
  if (*param_1 - (int)piVar1 == 0) {
    return 0;
  }
  FUN_00412d6c(param_1[2],piVar1,*param_1 - (int)piVar1);
  *param_1 = (int)piVar1;
  param_1[1] = param_1[1] + 1;
  return 1;
}




/* Function: FUN_00550094 */

void FUN_00550094(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (1 < *(int *)(param_1 + 4)) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    iVar5 = 1;
    uVar2 = FUN_00412c70(uVar1,0xffffffff);
    iVar3 = -2;
    do {
      uVar4 = FUN_00412c70(uVar1,iVar3);
      if (((*(int *)(param_1 + 4) - iVar5) + 1 < 10) && (uVar2 <= uVar4)) break;
      uVar2 = uVar2 + uVar4;
      iVar3 = iVar3 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 4));
    if (1 < iVar5) {
      FUN_00413520(uVar1,iVar5);
      *(int *)(param_1 + 4) = (*(int *)(param_1 + 4) - iVar5) + 1;
    }
  }
  return;
}




/* Function: FUN_00550128 */

void FUN_00550128(int param_1)

{
  int iVar1;
  
  FUN_00550064(param_1);
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00412d6c(*(undefined4 *)(param_1 + 8),0,0);
  }
  else if (1 < iVar1) {
    FUN_00413520(*(undefined4 *)(param_1 + 8),iVar1);
  }
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}




/* Function: FUN_00550168 */

void FUN_00550168(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar1 = param_1[2];
  uVar2 = FUN_00412c70(iVar1,0xffffffff);
  if (uVar2 <= 0x200U - (*param_1 - (int)(param_1 + 3))) {
    puVar3 = (undefined4 *)FUN_00412c34(iVar1,0xffffffff);
    puVar6 = (undefined4 *)*param_1;
    for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *param_1 = *param_1 + uVar2;
    FUN_00412950(iVar1,0xfffffffe);
    return;
  }
  iVar4 = FUN_00550064(param_1);
  if (iVar4 != 0) {
    FUN_004129c4(iVar1,0xfffffffe);
  }
  param_1[1] = param_1[1] + 1;
  FUN_00550094(param_1);
  return;
}




/* Function: FUN_005501fc */

void FUN_005501fc(int param_1,int *param_2)

{
  param_2[2] = param_1;
  *param_2 = (int)(param_2 + 3);
  param_2[1] = 0;
  return;
}




/* Function: FUN_00550214 */

void FUN_00550214(undefined4 param_1,char *param_2)

{
  char local_1f4 [500];
  
  vsprintf(local_1f4,param_2,&stack0x0000000c);
  FUN_00412884(param_1,local_1f4);
  return;
}




/* Function: FUN_0055024c */

void FUN_0055024c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char local_40 [52];
  
  uVar1 = FUN_00412ae4(param_1,param_3);
  uVar2 = FUN_00412b50(param_1,param_2);
  uVar2 = FUN_00412ae4(param_1,uVar2);
  sprintf(local_40,"%.8s expected, got %.8s",uVar1,uVar2);
  FUN_0055029c(param_1,param_2,local_40);
  return;
}




/* Function: FUN_0055029c */

void FUN_0055029c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_64 [8];
  undefined *local_5c;
  
  FUN_004139ec(param_1,0,local_64);
  FUN_00413b88(param_1,&DAT_00587124,local_64);
  if (local_5c == (undefined *)0x0) {
    local_5c = &DAT_00587088;
  }
  FUN_00550214(param_1,"bad argument #%d to `%.50s\' (%.100s)",param_2,local_5c,param_3);
  return;
}




/* Function: FUN_005502f0 */

void __fastcall FUN_005502f0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  return;
}




/* Function: FUN_00550310 */

int __thiscall
FUN_00550310(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
            uint *param_6,int param_7)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_8;
  
  *param_5 = param_3;
  param_5[1] = param_4;
  local_8 = 2;
  bVar1 = true;
  do {
    uVar2 = FUN_005511c0(param_3,param_4);
    param_5[local_8] = uVar2;
    local_8 = local_8 + 1;
    *param_6 = param_2;
    param_6 = param_6 + 1;
    *(undefined1 *)(param_2 + param_7) = 1;
    uVar3 = FUN_00551160(param_4,uVar2);
    uVar3 = *(uint *)(*(int *)(*param_1 + 0x10) + 0xc + ((uVar3 & 0xff) + param_2 * 6) * 4);
    if ((uVar3 == 0xffffffff) ||
       (param_2 = uVar3 & 0x3fffffff, *(char *)(param_2 + param_7) != '\0')) {
      bVar1 = false;
    }
    param_3 = param_4;
    param_4 = uVar2;
  } while (bVar1);
  return local_8;
}




/* Function: FUN_005503e0 */

undefined4 __thiscall FUN_005503e0(int param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar3 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005806db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_00493c27(0x1c);
  puVar6 = (uint *)0x0;
  local_4 = 0;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00550f00(0x1000,0);
  }
  local_4 = 0xffffffff;
  *(int *)(param_1 + 0x18) = iVar4;
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  puVar1 = (uint *)(param_1 + 0x14);
  *puVar1 = 0;
  if (*(char *)(param_1 + 0x1c) == '\0') {
    param_2 = (uint *)0x0;
    puVar6 = (uint *)puVar3[2];
  }
  else {
    param_2 = (uint *)param_2[2];
  }
  local_14 = 0;
  if (*puVar3 != 0) {
    do {
      if (local_14 != 0) {
        if (puVar6 == (uint *)0x0) {
          uVar7 = (uint)*(ushort *)((int)param_2 + -2);
          uVar5 = (uint)*(ushort *)param_2;
        }
        else {
          uVar7 = puVar6[-1];
          uVar5 = *puVar6;
        }
        if (*(char *)(param_1 + 0x1c) == '\0') {
          uVar8 = uVar5;
          FUN_00551050(uVar7);
          FUN_00551050(uVar8);
        }
        else {
          uVar8 = uVar5;
          FUN_00551010(uVar7);
          FUN_00551010(uVar8);
        }
        uVar7 = *puVar1;
        *puVar1 = uVar7 + 2;
        if ((*(char *)(param_1 + 0x1d) != '\0') && ((uVar7 + 2 & 1) != 0)) {
          if (puVar6 == (uint *)0x0) {
            uVar7 = (uint)*(ushort *)((int)param_2 + 2);
          }
          else {
            uVar7 = puVar6[1];
          }
          if (uVar5 == uVar7) {
            piVar2 = (int *)(puVar3[1] + local_14 * 4);
            *piVar2 = *piVar2 + -1;
            if (param_2 != (uint *)0x0) {
              param_2 = (uint *)((int)param_2 + 2);
            }
            if (puVar6 != (uint *)0x0) {
              puVar6 = puVar6 + 1;
            }
          }
          else if (*(char *)(param_1 + 0x1c) == '\0') {
            FUN_00551050(uVar5);
            *puVar1 = *puVar1 + 1;
          }
          else {
            FUN_00551010(uVar5);
            *puVar1 = *puVar1 + 1;
          }
        }
      }
      uVar7 = 0;
      if (*(int *)(puVar3[1] + local_14 * 4) != 0) {
        do {
          if (puVar6 == (uint *)0x0) {
            uVar5 = (uint)*(ushort *)((int)param_2 + uVar7 * 2);
          }
          else {
            uVar5 = puVar6[uVar7];
          }
          if (*(char *)(param_1 + 0x1c) == '\0') {
            FUN_00551050(uVar5);
          }
          else {
            FUN_00551010(uVar5);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(puVar3[1] + local_14 * 4));
      }
      if (param_2 != (uint *)0x0) {
        param_2 = (uint *)((int)param_2 + *(int *)(puVar3[1] + local_14 * 4) * 2);
      }
      if (puVar6 != (uint *)0x0) {
        puVar6 = puVar6 + *(int *)(puVar3[1] + local_14 * 4);
      }
      *puVar1 = *puVar1 + *(int *)(puVar3[1] + local_14 * 4);
      local_14 = local_14 + 1;
    } while (local_14 < *puVar3);
  }
  *puVar3 = 1;
  uVar7 = FUN_00550f60(0);
  puVar3[1] = (uint)puVar1;
  puVar3[2] = uVar7;
  ExceptionList = local_c;
  return 1;
}




/* Function: FUN_00550600 */

undefined4 * __fastcall FUN_00550600(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[6];
  if (pvVar1 != (void *)0x0) {
    FUN_00551080();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  param_1[6] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00551080();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[3];
  param_1[4] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00551080();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  param_1[3] = 0;
  if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[1]);
  }
  pvVar1 = (void *)*param_1;
  param_1[1] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_005510e0();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  *param_1 = 0;
  return param_1;
}




/* Function: FUN_00550690 */

undefined4 __thiscall FUN_00550690(int *param_1,undefined4 *param_2)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005806fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00550600();
  iVar3 = FUN_00493c27(0x14);
  local_4 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0051a880();
  }
  local_4 = 0xffffffff;
  *param_1 = iVar3;
  if (iVar3 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  local_18 = *param_2;
  local_14 = param_2[1];
  local_10 = param_2[2];
  cVar2 = FUN_00551370(&local_18);
  if (cVar2 != '\0') {
    cVar2 = FUN_00551450();
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 3);
      *(undefined1 *)((int)param_1 + 0x1d) = *(undefined1 *)((int)param_2 + 0xd);
      *(undefined1 *)((int)param_1 + 0x1e) = *(undefined1 *)((int)param_2 + 0xe);
      *(undefined1 *)((int)param_1 + 0x1f) = *(undefined1 *)((int)param_2 + 0xf);
      ExceptionList = local_c;
      return 1;
    }
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_005510e0();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  *param_1 = 0;
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_00550790 */

int __thiscall FUN_00550790(int *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint local_58;
  uint local_50;
  uint local_48 [15];
  uint auStack_c [3];
  
  local_48[7] = *(undefined4 *)(*(int *)(*param_1 + 0x10) + param_2 * 0x18);
  iVar10 = *(int *)(*param_1 + 0x10) + param_2 * 0x18;
  local_48[6] = *(undefined4 *)(iVar10 + 4);
  local_48[8] = *(undefined4 *)(iVar10 + 8);
  local_58 = 0;
  local_48[9] = local_48[7];
  local_48[10] = local_48[8];
  local_48[0xb] = local_48[6];
  while( true ) {
    puVar3 = (uint *)FUN_00493c27(*(int *)(*param_1 + 0xc) * 4 + 0x14);
    iVar10 = *(int *)(*param_1 + 0xc);
    *(uint **)((int)local_48 + local_58 + 0xc) = puVar3;
    puVar4 = (uint *)FUN_00493c27(iVar10 * 4 + 8);
    iVar10 = *(int *)(*param_1 + 0xc);
    *(uint **)((int)local_48 + local_58 + 0x30) = puVar4;
    puVar13 = puVar3;
    for (uVar9 = iVar10 * 4 + 0x14U >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar13 = 0xffffffff;
      puVar13 = puVar13 + 1;
    }
    for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined1 *)puVar13 = 0xff;
      puVar13 = (uint *)((int)puVar13 + 1);
    }
    puVar13 = puVar4;
    for (uVar9 = *(int *)(*param_1 + 0xc) * 4 + 8U >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar13 = 0xffffffff;
      puVar13 = puVar13 + 1;
    }
    for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined1 *)puVar13 = 0xff;
      puVar13 = (uint *)((int)puVar13 + 1);
    }
    puVar5 = (undefined4 *)FUN_00493c27(*(undefined4 *)(*param_1 + 0xc));
    uVar9 = *(uint *)(*param_1 + 0xc);
    puVar8 = (undefined4 *)param_1[1];
    puVar16 = puVar5;
    for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar16 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar16 = puVar16 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar16 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar16 = (undefined4 *)((int)puVar16 + 1);
    }
    uVar9 = FUN_00550310(param_2,*(undefined4 *)((int)local_48 + local_58 + 0x24),
                         *(undefined4 *)((int)local_48 + local_58 + 0x18),puVar3,puVar4,puVar5);
    *(uint *)((int)local_48 + local_58) = uVar9;
    *(uint *)((int)auStack_c + local_58) = uVar9;
    if ((uVar9 & 0xfffffffe) != 0) {
      local_50 = uVar9 >> 1;
      puVar13 = puVar3 + (uVar9 - 1);
      puVar6 = puVar3;
      do {
        *puVar6 = *puVar6 ^ *puVar13;
        *puVar13 = *puVar13 ^ *puVar6;
        *puVar6 = *puVar6 ^ *puVar13;
        puVar13 = puVar13 + -1;
        puVar6 = puVar6 + 1;
        local_50 = local_50 - 1;
      } while (local_50 != 0);
    }
    if ((uVar9 - 2 & 0xfffffffe) != 0) {
      puVar13 = puVar4 + (uVar9 - 3);
      uVar11 = *(int *)((int)local_48 + local_58) - 2U >> 1;
      puVar6 = puVar4;
      do {
        *puVar6 = *puVar6 ^ *puVar13;
        *puVar13 = *puVar13 ^ *puVar6;
        *puVar6 = *puVar6 ^ *puVar13;
        puVar13 = puVar13 + -1;
        puVar6 = puVar6 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar10 = FUN_00550310(param_2,puVar3[uVar9 - 3],puVar3[uVar9 - 2],puVar3 + (uVar9 - 3),
                          puVar4 + (uVar9 - 3),puVar5);
    *(uint *)((int)local_48 + local_58) = iVar10 + -3 + uVar9;
    if (puVar5 != (undefined4 *)0x0) break;
    local_58 = local_58 + 4;
    if (0xb < local_58) {
      uVar9 = local_48[0];
      if (local_48[0] < local_48[1]) {
        uVar9 = local_48[1];
      }
      uVar11 = (uint)(local_48[0] < local_48[1]);
      if (uVar9 < local_48[2]) {
        uVar11 = 2;
        uVar9 = local_48[2];
      }
      iVar10 = uVar9 - 2;
      if (iVar10 != 0) {
        piVar7 = (int *)local_48[uVar11 + 0xc];
        iVar12 = iVar10;
        do {
          iVar1 = *piVar7;
          piVar7 = piVar7 + 1;
          iVar12 = iVar12 + -1;
          *(undefined1 *)(iVar1 + param_1[1]) = 1;
        } while (iVar12 != 0);
      }
      if ((*(char *)((int)param_1 + 0x1d) != '\0') && ((auStack_c[uVar11] & 1) != 0)) {
        if ((uVar9 == 3) || (uVar9 == 4)) {
          uVar14 = local_48[uVar11 + 3];
          uVar15 = *(uint *)(uVar14 + 4) ^ *(uint *)(uVar14 + 8);
          *(uint *)(uVar14 + 4) = uVar15;
          uVar15 = *(uint *)(uVar14 + 8) ^ uVar15;
          *(uint *)(uVar14 + 8) = uVar15;
          *(uint *)(uVar14 + 4) = *(uint *)(uVar14 + 4) ^ uVar15;
        }
        else {
          uVar14 = uVar9 >> 1;
          if (uVar14 != 0) {
            puVar3 = (uint *)local_48[uVar11 + 3];
            puVar13 = puVar3 + (uVar9 - 1);
            do {
              *puVar3 = *puVar3 ^ *puVar13;
              *puVar13 = *puVar13 ^ *puVar3;
              *puVar3 = *puVar3 ^ *puVar13;
              puVar13 = puVar13 + -1;
              puVar3 = puVar3 + 1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          if ((uVar9 - auStack_c[uVar11] & 1) != 0) {
            if (uVar9 != 0) {
              puVar8 = (undefined4 *)(local_48[uVar11 + 3] + uVar9 * 4);
              uVar14 = uVar9;
              do {
                *puVar8 = puVar8[-1];
                puVar8 = puVar8 + -1;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            uVar9 = uVar9 + 1;
          }
        }
      }
      if (uVar9 != 0) {
        puVar8 = (undefined4 *)local_48[uVar11 + 3];
        uVar11 = uVar9;
        do {
          if ((char)param_1[7] == '\0') {
            FUN_00551050(*puVar8);
          }
          else {
            FUN_00551010(*puVar8);
          }
          puVar8 = puVar8 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      FUN_00551050(uVar9);
      uVar9 = 0;
      while( true ) {
        pvVar2 = *(void **)((int)local_48 + uVar9 + 0x30);
        if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(pvVar2);
        }
        pvVar2 = *(void **)((int)local_48 + uVar9 + 0xc);
        *(undefined4 *)((int)local_48 + uVar9 + 0x30) = 0;
        if (pvVar2 != (void *)0x0) break;
        *(undefined4 *)((int)local_48 + uVar9 + 0xc) = 0;
        uVar9 = uVar9 + 4;
        if (0xb < uVar9) {
          return iVar10;
        }
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar5);
}




/* Function: FUN_00550ac0 */

undefined4 * __fastcall FUN_00550ac0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[6];
  if (pvVar1 != (void *)0x0) {
    FUN_00551080();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  param_1[6] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00551080();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[3];
  param_1[4] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00551080();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  param_1[3] = 0;
  if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[1]);
  }
  pvVar1 = (void *)*param_1;
  param_1[1] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_005510e0();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  *param_1 = 0;
  return param_1;
}




/* Function: FUN_00550ad0 */

undefined4 __fastcall FUN_00550ad0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0058072e;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  iVar2 = FUN_00493c27(0x1c);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00550f00(0x1000,0);
  }
  local_4 = 0xffffffff;
  param_1[3] = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_00493c27(0x1c);
    local_4 = 1;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00550f00(0x1000,0);
    }
    local_4 = 0xffffffff;
    param_1[4] = iVar2;
    if (iVar2 != 0) {
      iVar2 = FUN_00493c27(*(undefined4 *)(*param_1 + 0xc));
      param_1[1] = iVar2;
      if ((iVar2 != 0) &&
         (piVar3 = (int *)FUN_00493c27(*(int *)(*param_1 + 0xc) << 2), piVar3 != (int *)0x0)) {
        uVar6 = *(uint *)(*param_1 + 0xc);
        puVar8 = (undefined4 *)param_1[1];
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar8 = 0;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        piVar7 = piVar3;
        for (uVar6 = *(uint *)(*param_1 + 0xc) & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined1 *)piVar7 = 0;
          piVar7 = (int *)((int)piVar7 + 1);
        }
        if (*(char *)((int)param_1 + 0x1e) == '\0') {
          uVar6 = 0;
          if (*(int *)(*param_1 + 0xc) != 0) {
            do {
              piVar3[uVar6] = uVar6;
              uVar6 = uVar6 + 1;
            } while (uVar6 < *(uint *)(*param_1 + 0xc));
          }
        }
        else {
          uVar6 = 0;
          if (*(int *)(*param_1 + 0xc) != 0) {
            iVar2 = 0;
            do {
              iVar4 = *(int *)(*param_1 + 0x10) + iVar2;
              if (*(int *)(*(int *)(*param_1 + 0x10) + 0xc + iVar2) != -1) {
                piVar3[uVar6] = piVar3[uVar6] + 1;
              }
              if (*(int *)(iVar4 + 0x10) != -1) {
                piVar3[uVar6] = piVar3[uVar6] + 1;
              }
              if (*(int *)(iVar4 + 0x14) != -1) {
                piVar3[uVar6] = piVar3[uVar6] + 1;
              }
              uVar6 = uVar6 + 1;
              iVar2 = iVar2 + 0x18;
            } while (uVar6 < *(uint *)(*param_1 + 0xc));
          }
          FUN_005517b0();
          local_4 = 2;
          iVar2 = FUN_005517f0(piVar3,*(undefined4 *)(*param_1 + 0xc),1);
          piVar7 = *(int **)(iVar2 + 0xc);
          piVar9 = piVar3;
          for (uVar6 = *(uint *)(*param_1 + 0xc) & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
            *piVar9 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar9 = piVar9 + 1;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(char *)piVar9 = (char)*piVar7;
            piVar7 = (int *)((int)piVar7 + 1);
            piVar9 = (int *)((int)piVar9 + 1);
          }
          local_4 = 0xffffffff;
          FUN_00551730();
        }
        param_1[2] = 0;
        iVar2 = 0;
        local_24 = 0;
        piVar7 = piVar3;
        if (*(int *)(*param_1 + 0xc) != 0) {
          do {
            cVar1 = *(char *)(*piVar7 + param_1[1]);
            while (cVar1 != '\0') {
              iVar4 = iVar2 + 1;
              iVar2 = iVar2 + 1;
              cVar1 = *(char *)(param_1[1] + piVar3[iVar4]);
            }
            iVar4 = FUN_00550790(piVar3[iVar2]);
            local_24 = local_24 + iVar4;
            param_1[2] = param_1[2] + 1;
            piVar7 = piVar3 + iVar2;
          } while (local_24 != *(int *)(*param_1 + 0xc));
        }
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar3);
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_00550d70 */

int __fastcall FUN_00550d70(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = *(undefined4 **)(param_1 + 4);
  for (puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 4); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    iVar3 = iVar3 + puVar1[2];
    puVar1 = puVar2;
  }
  return puVar1[2] + iVar3;
}




/* Function: FUN_00550da0 */

void __fastcall FUN_00550da0(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}




/* Function: FUN_00550dc0 */

undefined4 * __thiscall FUN_00550dc0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00493c27(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    param_3 = param_2[3] << 1;
  }
  puVar1[3] = param_3;
  uVar2 = FUN_00493c27(param_3);
  puVar1[1] = uVar2;
  puVar1[2] = 0;
  *param_1 = puVar1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = puVar1;
  }
  return param_1;
}




/* Function: FUN_00550e20 */

int * __thiscall FUN_00550e20(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(uint *)(iVar1 + 0xc) < (uint)(*(int *)(iVar1 + 8) + param_2)) {
    FUN_00550dc0(iVar1,0);
  }
  return param_1;
}




/* Function: FUN_00550e50 */

int * __thiscall FUN_00550e50(int *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  FUN_00550ed0();
  FUN_00550e20(1);
  puVar1 = (undefined1 *)(*(int *)(*param_1 + 8) + *(int *)(*param_1 + 4));
  *puVar1 = param_2;
  param_1[4] = (int)puVar1;
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
  return param_1;
}




/* Function: FUN_00550e80 */

int __thiscall FUN_00550e80(int param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = *(char *)(param_1 + 0x19) << 1;
  *(byte *)(param_1 + 0x19) = bVar2;
  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x19) = bVar2 | 1;
  }
  cVar1 = *(char *)(param_1 + 0x18) + '\x01';
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\b') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    FUN_00550e50(*(undefined1 *)(param_1 + 0x19));
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  return param_1;
}




/* Function: FUN_00550ed0 */

int __fastcall FUN_00550ed0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x18);
  while (cVar1 != '\0') {
    FUN_00550e80(0);
    cVar1 = *(char *)(param_1 + 0x18);
  }
  return param_1;
}




/* Function: FUN_00550f00 */

int * __thiscall FUN_00550f00(int *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  FUN_00550dc0(0,param_2);
  param_1[1] = *param_1;
  if (param_3 != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(*param_1 + 4);
    for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  param_1[4] = *(int *)(*param_1 + 4);
  return param_1;
}





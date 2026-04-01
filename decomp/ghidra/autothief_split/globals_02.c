/* globals_02 functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_00434a60 */

void __fastcall FUN_00434a60(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_4;
  
  fVar1 = -param_1[0xc];
  fVar2 = -param_1[0xd];
  fVar3 = -param_1[0xe];
  FUN_00407260(param_1);
  param_1[1] = local_30;
  param_1[4] = local_3c;
  param_1[2] = local_20;
  param_1[8] = local_38;
  param_1[6] = local_1c;
  param_1[9] = local_28;
  *param_1 = local_40;
  param_1[5] = local_2c;
  param_1[10] = local_18;
  param_1[0xf] = local_4;
  param_1[0xc] = fVar1 * *param_1 + fVar2 * param_1[4] + fVar3 * param_1[8];
  param_1[0xd] = fVar1 * param_1[1] + fVar2 * param_1[5] + fVar3 * param_1[9];
  param_1[0xe] = fVar1 * param_1[2] + fVar2 * param_1[6] + fVar3 * param_1[10];
  FUN_00407300();
  return;
}




/* Function: FUN_00434b40 */

undefined4 __thiscall FUN_00434b40(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_40 [64];
  
  FUN_00407260(param_1);
  FUN_00434a60();
  FUN_00407260(local_40);
  FUN_00407300();
  return param_2;
}




/* Function: FUN_00434b80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00434b80(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  int *piVar5;
  float fVar6;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  int *piStack_194;
  undefined4 uStack_190;
  int *piStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  int *piStack_17c;
  float fStack_178;
  int **ppiStack_174;
  int *piStack_170;
  undefined4 uStack_16c;
  undefined4 *puStack_168;
  int *piStack_164;
  undefined4 uStack_160;
  undefined4 *puStack_15c;
  int *piStack_158;
  undefined4 uStack_154;
  undefined4 *puStack_150;
  int *piStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  float fStack_140;
  int *piStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  int *piStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int *piStack_11c;
  float fStack_118;
  float fStack_114;
  undefined4 uStack_110;
  int *piStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int *piStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int *piStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int *piStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int *piStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int *piStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  int *piStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_4;
  
  uStack_98 = *(undefined4 *)(param_1 + 0x10c);
  uStack_9c = 0;
  piStack_a0 = param_2;
  uStack_a4 = 0x434ba4;
  (**(code **)(*param_2 + 0xf4))();
  uVar1 = (uint)(0x100 / (longlong)iStack_4);
  uStack_a4 = uVar1 & 0xff;
  uStack_a4 = ((uVar1 << 8 | uStack_a4) << 8 | uStack_a4) << 8 | uStack_a4;
  uStack_a8 = 0x3c;
  piStack_ac = param_2;
  iStack_b0 = 0x434bd6;
  (**(code **)(*param_2 + 200))();
  iStack_b0 = 0;
  uStack_b4 = 0x14;
  uStack_b8 = 0;
  piStack_bc = param_2;
  uStack_c0 = 0x434be5;
  (**(code **)(*param_2 + 0xfc))();
  iStack_b0 = 0;
  uStack_c0 = 0;
  uStack_c4 = 0x13;
  uStack_c8 = 0;
  piStack_cc = param_2;
  uStack_d0 = 0x434bff;
  (**(code **)(*param_2 + 0xfc))();
  uStack_d0 = 1;
  uStack_d4 = 0x12;
  uStack_d8 = 0;
  piStack_dc = param_2;
  uStack_e0 = 0x434c0e;
  (**(code **)(*param_2 + 0xfc))();
  uStack_e0 = 4;
  uStack_e4 = 1;
  uStack_e8 = 0;
  piStack_ec = param_2;
  uStack_f0 = 0x434c1d;
  (**(code **)(*param_2 + 0xfc))();
  uStack_f0 = 2;
  uStack_f4 = 2;
  uStack_f8 = 0;
  piStack_fc = param_2;
  uStack_100 = 0x434c2c;
  (**(code **)(*param_2 + 0xfc))();
  uStack_100 = 3;
  uStack_104 = 3;
  uStack_108 = 0;
  piStack_10c = param_2;
  uStack_110 = 0x434c3b;
  (**(code **)(*param_2 + 0xfc))();
  uStack_110 = 4;
  fStack_114 = 5.60519e-45;
  fStack_118 = 0.0;
  piStack_11c = param_2;
  uStack_120 = 0x434c4a;
  (**(code **)(*param_2 + 0xfc))();
  uStack_120 = 2;
  uStack_124 = 5;
  uStack_128 = 0;
  piStack_12c = param_2;
  uStack_130 = 0x434c59;
  (**(code **)(*param_2 + 0xfc))();
  uStack_130 = 3;
  uStack_134 = 6;
  uStack_138 = 0;
  piStack_13c = param_2;
  fStack_140 = 6.180388e-39;
  (**(code **)(*param_2 + 0xfc))();
  fStack_140 = 2.8026e-45;
  uStack_144 = 0x18;
  uStack_148 = 0;
  piStack_14c = param_2;
  puStack_150 = (undefined4 *)0x434c77;
  (**(code **)(*param_2 + 0xfc))();
  puStack_150 = &uStack_138;
  fStack_140 = (_DAT_005b9004 + _DAT_005b9004) / (float)iStack_b0;
  uStack_154 = 0x10;
  piStack_158 = param_2;
  uStack_100 = 0;
  uStack_104 = 0;
  uStack_108 = 0;
  piStack_10c = (int *)0x0;
  piStack_11c = (int *)0x0;
  uStack_120 = 0;
  uStack_128 = 0;
  piStack_12c = (int *)0x0;
  uStack_130 = 0;
  uStack_134 = 0;
  piStack_fc = (int *)0x3f800000;
  uStack_110 = 0x3f800000;
  uStack_124 = 0x3f800000;
  uStack_138 = 0x3f800000;
  fVar4 = (float10)fsin((float10)_DAT_00582ae8);
  fStack_118 = (float)(fVar4 * (float10)_DAT_00588880);
  fVar4 = (float10)fcos((float10)_DAT_00582ae8);
  fStack_114 = (float)(fVar4 * (float10)_DAT_00588880);
  puStack_15c = (undefined4 *)0x434d32;
  piStack_13c = (int *)fStack_140;
  (**(code **)(*param_2 + 0x94))();
  puStack_15c = &uStack_104;
  uStack_160 = 0x100;
  piStack_164 = param_2;
  piStack_cc = (int *)0x0;
  uStack_d0 = 0;
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_e4 = 0;
  uStack_e8 = 0;
  piStack_ec = (int *)0x0;
  uStack_f4 = 0;
  uStack_f8 = 0;
  piStack_fc = (int *)0x0;
  uStack_100 = 0;
  uStack_c8 = 0x3f800000;
  piStack_dc = (int *)0x3f800000;
  uStack_f0 = 0x3f800000;
  uStack_104 = 0x3f800000;
  puStack_168 = (undefined4 *)0x434ddd;
  (**(code **)(*param_2 + 0x94))();
  puStack_168 = &uStack_110;
  uStack_16c = 2;
  piStack_170 = param_2;
  ppiStack_174 = (int **)0x434ded;
  (**(code **)(*param_2 + 0x94))();
  ppiStack_174 = &piStack_11c;
  fStack_178 = 4.2039e-45;
  piStack_17c = param_2;
  uStack_180 = 0x434dfd;
  (**(code **)(*param_2 + 0x94))();
  uStack_184 = *(undefined4 *)(param_1 + 0x110);
  uStack_180 = 0x14;
  uStack_188 = 0;
  piStack_18c = param_2;
  uStack_190 = 0x434e11;
  (**(code **)(*param_2 + 0x14c))();
  uStack_190 = 0x102;
  piStack_194 = param_2;
  uStack_198 = 0x434e1f;
  (**(code **)(*param_2 + 0x130))();
  uStack_198 = 2;
  uStack_19c = 0;
  fVar6 = 7.00649e-45;
  piVar5 = param_2;
  (**(code **)(*param_2 + 0x118))(param_2,5);
  iVar3 = 2;
  (**(code **)(*param_2 + 200))(param_2,0x1b,1);
  if (1 < iStack_4) {
    iVar2 = iStack_4 + -1;
    iVar3 = iStack_4 + 1 + iVar2;
    do {
      fVar4 = (float10)fsin((float10)(float)piVar5);
      piStack_17c = (int *)(float)(fVar4 * (float10)_DAT_00588880);
      fVar4 = (float10)fcos((float10)(float)piVar5);
      fStack_178 = (float)(fVar4 * (float10)_DAT_00588880);
      piVar5 = (int *)((float)piVar5 + fVar6);
      (**(code **)(*param_2 + 0x94))(param_2,0x10,&uStack_19c);
      (**(code **)(*param_2 + 0x118))(param_2,5,0,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(*param_2 + 0xfc))(param_2,0,0x18,0);
  (**(code **)(*param_2 + 200))(param_2,0x1b,0);
  return iVar3;
}




/* Function: FUN_00434ed0 */

void __fastcall FUN_00434ed0(int param_1)

{
  undefined4 *puVar1;
  undefined1 local_c [12];
  
  puVar1 = (undefined4 *)FUN_0041d510(local_c);
  if (puVar1 != (undefined4 *)(param_1 + 0xe8)) {
    *(undefined4 *)(param_1 + 0xe8) = *puVar1;
    *(undefined4 *)(param_1 + 0xec) = puVar1[1];
    *(undefined4 *)(param_1 + 0xf0) = puVar1[2];
  }
  return;
}




/* Function: FUN_00434f10 */

void __thiscall FUN_00434f10(int param_1,undefined4 *param_2)

{
  if ((undefined4 *)(param_1 + 0xf4) != param_2) {
    *(undefined4 *)(param_1 + 0xf4) = *param_2;
    *(undefined4 *)(param_1 + 0xf8) = param_2[1];
    *(undefined4 *)(param_1 + 0xfc) = param_2[2];
    *(undefined4 *)(param_1 + 0x100) = param_2[3];
  }
  return;
}




/* Function: FUN_00434f40 */

undefined4 __fastcall FUN_00434f40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x104);
}




/* Function: FUN_00434f50 */

void FUN_00434f50(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b922;
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




/* Function: FUN_00434fd0 */

void FUN_00434fd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}




/* Function: FUN_00435010 */

void FUN_00435010(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 0xc;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 0xc; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}




/* Function: FUN_00435040 */

void FUN_00435040(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

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




/* Function: FUN_00435090 */

void FUN_00435090(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3 = param_3 + 3;
  }
  return;
}




/* Function: FUN_004350d0 */

void FUN_004350d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    param_3 = param_3 + -0xc;
    param_4 = param_4 + -0xc;
    puVar2 = param_3;
    puVar3 = param_4;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  } while (param_3 != param_2);
  *param_1 = param_4;
  return;
}




/* Function: FUN_00435110 */

undefined4 * FUN_00435110(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    *param_3 = *param_1;
    FUN_0041d670(param_1 + 1);
    param_1 = param_1 + 0x11;
    param_3 = param_3 + 0x11;
  } while (param_1 != param_2);
  return param_3;
}




/* Function: FUN_00435150 */

void FUN_00435150(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,code *param_4)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = (*param_4)(*param_2,*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  cVar2 = (*param_4)(*param_3,*param_2);
  if (cVar2 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  cVar2 = (*param_4)(*param_2,*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}




/* Function: FUN_004351c0 */

void FUN_004351c0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 **ppuVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *local_c;
  undefined4 *local_8 [2];
  
  puVar4 = param_3;
  iVar9 = (int)param_3 - param_1 >> 2;
  iVar11 = param_2 - param_1 >> 2;
  iVar7 = iVar11;
  param_2 = iVar9;
  while (iVar2 = iVar7, iVar2 != 0) {
    iVar7 = param_2 % iVar2;
    param_2 = iVar2;
  }
  if ((param_2 < iVar9) && (0 < param_2)) {
    puVar10 = (undefined4 *)(param_1 + param_2 * 4);
    do {
      uVar1 = *puVar10;
      if (puVar10 + iVar11 == puVar4) {
        puVar6 = &param_1;
      }
      else {
        param_3 = puVar10 + iVar11;
        puVar6 = &param_3;
      }
      puVar5 = (undefined4 *)*puVar6;
      puVar6 = puVar10;
      while (puVar3 = puVar5, puVar3 != puVar10) {
        *puVar6 = *puVar3;
        iVar7 = (int)puVar4 - (int)puVar3 >> 2;
        if (iVar11 < iVar7) {
          local_c = puVar3 + iVar11;
          ppuVar8 = &local_c;
        }
        else {
          local_8[0] = (undefined4 *)(param_1 + (iVar11 - iVar7) * 4);
          ppuVar8 = local_8;
        }
        puVar6 = puVar3;
        puVar5 = *ppuVar8;
      }
      puVar10 = puVar10 + -1;
      param_2 = param_2 + -1;
      *puVar6 = uVar1;
    } while (param_2 != 0);
  }
  return;
}




/* Function: FUN_00435280 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00435280(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_124;
  int *piStack_120;
  float fStack_11c;
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
  undefined4 uStack_84;
  int iStack_68;
  
  uStack_b8 = 0;
  uStack_bc = 0;
  piStack_c0 = param_1;
  uStack_c4 = 0x43529d;
  (**(code **)(*param_1 + 0xf4))();
  uStack_c4 = 2;
  uStack_c8 = 1;
  uStack_cc = 0;
  piStack_d0 = param_1;
  uStack_d4 = 0x4352ac;
  (**(code **)(*param_1 + 0xfc))();
  uStack_d4 = 3;
  uStack_d8 = 2;
  uStack_dc = 0;
  piStack_e0 = param_1;
  uStack_e4 = 0x4352bb;
  (**(code **)(*param_1 + 0xfc))();
  uStack_e4 = 3;
  uStack_e8 = 3;
  uStack_ec = 0;
  piStack_f0 = param_1;
  uStack_f4 = 0x4352ca;
  (**(code **)(*param_1 + 0xfc))();
  uStack_f4 = 2;
  uStack_f8 = 4;
  uStack_fc = 0;
  piStack_100 = param_1;
  uStack_104 = 0x4352d9;
  (**(code **)(*param_1 + 0xfc))();
  uStack_104 = 3;
  uStack_108 = 5;
  uStack_10c = 0;
  piStack_110 = param_1;
  uStack_114 = 0x4352e8;
  (**(code **)(*param_1 + 0xfc))();
  uStack_114 = 3;
  uStack_118 = 6;
  fStack_11c = 0.0;
  piStack_120 = param_1;
  uStack_124 = 0x4352f7;
  (**(code **)(*param_1 + 0xfc))();
  uStack_124 = 0x12;
  (**(code **)(*param_1 + 0x130))(param_1);
  fStack_11c = *(float *)(iStack_68 + 0x1c) + *(float *)(iStack_68 + 0x1c);
  FUN_00497045(&stack0xffffff4c,fStack_11c,fStack_11c,*(undefined4 *)(iStack_68 + 0x1c),
               *(float *)(iStack_68 + 0x1c) * _DAT_00588884);
  (**(code **)(*param_1 + 0x94))(param_1,3,&stack0xffffff4c);
  FUN_00407f80(0x3f800000);
  uVar1 = FUN_0041d5b0(&uStack_124,iStack_68 + 0x28,0x40000000,*(undefined4 *)(iStack_68 + 0x1c));
  uVar1 = FUN_0041d5b0(&uStack_10c,uVar1);
  FUN_0041d580(&uStack_118,iStack_68 + 0x10,uVar1);
  uStack_124 = 0;
  piStack_120 = (int *)0x3f800000;
  fStack_11c = 0.0;
  FUN_00496e69(&piStack_100,&uStack_118,iStack_68 + 0x10,&uStack_124);
  (**(code **)(*param_1 + 0x94))(param_1,2,&piStack_100);
  puVar3 = *(undefined4 **)(iStack_68 + 4);
  iVar7 = 0;
  if (puVar3 != *(undefined4 **)(iStack_68 + 8)) {
    do {
      (**(code **)(*param_1 + 0x94))(param_1,0x100,puVar3 + 1);
      uVar1 = *puVar3;
      uVar6 = 0;
      piVar4 = param_1;
      uVar5 = uStack_84;
      FUN_004ffac0(param_1,uStack_84,uVar1,0);
      iVar2 = FUN_0045f340(piVar4,uVar5,uVar1,uVar6);
      if (0 < iVar2) {
        iVar7 = iVar7 + iVar2;
      }
      puVar3 = puVar3 + 0x11;
    } while (puVar3 != *(undefined4 **)(iStack_68 + 8));
  }
  FUN_00407300();
  return iVar7;
}




/* Function: FUN_00435440 */

undefined4 __thiscall FUN_00435440(int param_1,uint param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0x3c3c3c3 < param_2) {
    FUN_00434f50();
    return 1;
  }
  iVar1 = FUN_00493c27(param_2 * 0x44);
  *(uint *)(param_1 + 0xc) = param_2 * 0x44 + iVar1;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  return 1;
}




/* Function: FUN_004354a0 */

void FUN_004354a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    do {
      *param_1 = *param_3;
      FUN_0041d670(param_3 + 1);
      param_1 = param_1 + 0x11;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_004354d0 */

undefined4 FUN_004354d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00435040(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00435510 */

undefined4 FUN_00435510(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004350d0(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00435550 */

void FUN_00435550(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00435150(param_1);
    FUN_00435150(param_2 + iVar1 * -4);
    FUN_00435150(param_3 + iVar1 * -8);
    FUN_00435150(iVar1 * 4 + param_1);
    return;
  }
  FUN_00435150(param_1);
  return;
}




/* Function: FUN_00435650 */

void FUN_00435650(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 0xc;
  }
  return;
}




/* Function: FUN_00435e00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00435e00(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined4 unaff_retaddr;
  int *local_16c;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154 [64];
  undefined1 local_114 [12];
  undefined1 local_108 [12];
  undefined1 local_fc [12];
  undefined1 local_f0 [12];
  undefined1 local_e4 [12];
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  undefined1 local_c0 [64];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  iVar10 = *(int *)(param_1 + 200);
  if ((iVar10 != 0) && (*(int *)(param_1 + 0xcc) - iVar10 >> 2 != 0)) {
    if (iVar10 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(int *)(param_1 + 0xcc) - iVar10 >> 2;
    }
    if (*(int *)(param_1 + 0x98) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98)) / 0x30;
    }
    if (uVar8 < uVar9) {
      if (*(int *)(param_1 + 0x98) == 0) {
        local_16c = *(int **)(param_1 + 200);
      }
      else {
        local_16c = (int *)(*(int *)(param_1 + 200) +
                           ((*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98)) / 0x30) * 4);
      }
    }
    else {
      local_16c = *(int **)(param_1 + 0xcc);
    }
    piVar11 = *(int **)(param_1 + 200);
    if (piVar11 != local_16c) {
      uVar5 = FUN_0041d350();
      do {
        FUN_00407f80(0x3f800000);
        iVar10 = *piVar11 + 0x28;
        iVar1 = *piVar11 + 0x10;
        local_160 = 0;
        local_15c = 0x3f800000;
        local_158 = 0;
        uVar6 = FUN_0041d5b0(local_cc,iVar10,0x41200000,0x42c80000);
        uVar6 = FUN_0041d5b0(local_e4,uVar6);
        uVar6 = FUN_0041d550(local_d8,iVar1,uVar6);
        uVar7 = FUN_0041d5b0(local_f0,iVar10,0x43480000);
        uVar7 = FUN_0041d580(local_114,iVar1,uVar7);
        FUN_00496e69(uVar5,uVar7,uVar6,&local_160);
        fVar3 = _DAT_005b9004 * _DAT_005888f4;
        uVar6 = FUN_00434b40(local_c0);
        uVar6 = FUN_00547224(local_40,fVar3,uVar6);
        uVar6 = FUN_0041d7a0(local_80,uVar6);
        FUN_0041d670(uVar6);
        FUN_00407300();
        FUN_00407300();
        FUN_00407300();
        iVar10 = *(int *)(*(int *)(*piVar11 + 0x24) + 8) * 0x30 + *(int *)(param_1 + 0x98);
        uVar6 = FUN_004cf110();
        *(undefined4 *)(iVar10 + 3) = uVar6;
        uVar6 = FUN_004cf110();
        *(undefined4 *)(iVar10 + 7) = uVar6;
        FUN_0042ede0(local_154);
        uVar6 = param_3;
        uVar7 = FUN_0041d5b0(local_108,*piVar11 + 0x28,0x41200000,0x42c80000,param_3);
        uVar7 = FUN_0041d5b0(local_fc,uVar7);
        cVar4 = FUN_0042f900(uVar7,uVar6);
        if (cVar4 != '\0') {
          (**(code **)(**(int **)(iVar10 + 0x28) + 0x24))(param_2,param_3);
        }
        FUN_00407300();
        piVar11 = piVar11 + 1;
      } while (piVar11 != local_16c);
    }
  }
  iVar10 = *(int *)(param_1 + 0xd8);
  if ((iVar10 != 0) && (*(int *)(param_1 + 0xdc) - iVar10 >> 2 != 0)) {
    uVar9 = 0;
    if (iVar10 != 0) {
      uVar9 = *(int *)(param_1 + 0xdc) - iVar10 >> 2;
    }
    if (*(int *)(param_1 + 0xa8) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 3;
    }
    if (uVar8 < uVar9) {
      if (*(int *)(param_1 + 0xa8) == 0) {
        local_16c = *(int **)(param_1 + 0xd8);
      }
      else {
        local_16c = (int *)(*(int *)(param_1 + 0xd8) +
                           (*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 3) * 4);
      }
    }
    else {
      local_16c = *(int **)(param_1 + 0xdc);
    }
    piVar11 = *(int **)(param_1 + 0xd8);
    if (piVar11 != local_16c) {
      uVar5 = FUN_0041d350();
      do {
        puVar2 = (undefined4 *)
                 (*(int *)(param_1 + 0xa8) + *(int *)(*(int *)(*piVar11 + 0x24) + 8) * 8);
        FUN_00407f80(0x3f800000);
        iVar10 = *piVar11 + 0x10;
        local_160 = 0;
        local_15c = 0x3f800000;
        local_158 = 0;
        uVar6 = FUN_0041d5b0(local_fc,*piVar11 + 0x28,0x41200000,0x42c80000);
        uVar6 = FUN_0041d5b0(local_108,uVar6);
        uVar6 = FUN_0041d550(local_114,iVar10,uVar6);
        FUN_00496e69(uVar5,iVar10,uVar6,&local_160);
        uVar6 = FUN_00434b40(local_c0);
        FUN_0041d670(uVar6);
        FUN_00407300();
        FUN_004f9e50(0,local_154);
        fVar3 = *(float *)(*piVar11 + 0x1c) + *(float *)(*piVar11 + 0x1c);
        FUN_00497045(uVar5,fVar3,fVar3,0,0x447a0000);
        FUN_004f9e50(1,local_154);
        FUN_004f9e40(**(undefined4 **)(*piVar11 + 0x24));
        (**(code **)(*(int *)*puVar2 + 0x20))(param_3);
        (**(code **)(*(int *)*puVar2 + 0x24))(unaff_retaddr,param_3);
        FUN_00407300();
        piVar11 = piVar11 + 1;
      } while (piVar11 != local_16c);
    }
  }
  return;
}




/* Function: FUN_00436290 */

void FUN_00436290(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,code *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00435550(param_2,puVar6,param_3 + -1,param_4);
  puVar7 = puVar6;
  while (((param_2 < puVar7 && (cVar4 = (*param_4)(puVar7[-1],*puVar7), cVar4 == '\0')) &&
         (cVar4 = (*param_4)(*puVar7,puVar7[-1]), cVar4 == '\0'))) {
    puVar7 = puVar7 + -1;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar3 = puVar6;
    puVar5 = puVar7;
    if ((param_3 <= puVar6) || (cVar4 = (*param_4)(*puVar6,*puVar7), cVar4 != '\0')) break;
    cVar4 = (*param_4)(*puVar7,*puVar6);
  } while (cVar4 == '\0');
joined_r0x00436334:
  do {
    if (param_3 <= puVar3) {
joined_r0x00436374:
      for (; param_2 < puVar5; puVar5 = puVar5 + -1) {
        cVar4 = (*param_4)(puVar5[-1],*puVar7);
        if (cVar4 == '\0') {
          cVar4 = (*param_4)(*puVar7,puVar5[-1]);
          if (cVar4 != '\0') break;
          uVar2 = puVar7[-1];
          puVar7 = puVar7 + -1;
          *puVar7 = puVar5[-1];
          puVar5[-1] = uVar2;
        }
      }
      if (puVar5 == param_2) {
        if (puVar3 == param_3) {
          *param_1 = puVar7;
          param_1[1] = puVar6;
          return;
        }
        if (puVar6 != puVar3) {
          uVar2 = *puVar7;
          *puVar7 = *puVar6;
          *puVar6 = uVar2;
        }
        uVar2 = *puVar7;
        *puVar7 = *puVar3;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
        *puVar3 = uVar2;
        puVar3 = puVar3 + 1;
      }
      else {
        puVar5 = puVar5 + -1;
        if (puVar3 == param_3) {
          puVar7 = puVar7 + -1;
          if (puVar5 != puVar7) {
            uVar2 = *puVar5;
            *puVar5 = *puVar7;
            *puVar7 = uVar2;
          }
          puVar1 = puVar6 + -1;
          uVar2 = *puVar7;
          puVar6 = puVar6 + -1;
          *puVar7 = *puVar1;
          *puVar6 = uVar2;
        }
        else {
          uVar2 = *puVar3;
          *puVar3 = *puVar5;
          *puVar5 = uVar2;
          puVar3 = puVar3 + 1;
        }
      }
      goto joined_r0x00436334;
    }
    cVar4 = (*param_4)(*puVar7,*puVar3);
    if (cVar4 == '\0') {
      cVar4 = (*param_4)(*puVar3,*puVar7);
      if (cVar4 != '\0') goto joined_r0x00436374;
      uVar2 = *puVar6;
      *puVar6 = *puVar3;
      puVar6 = puVar6 + 1;
      *puVar3 = uVar2;
    }
    puVar3 = puVar3 + 1;
  } while( true );
}




/* Function: FUN_00436440 */

void FUN_00436440(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = param_3;
      puVar3 = param_1;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = param_1 + 0xc;
  }
  return;
}




/* Function: FUN_00436470 */

undefined4 * FUN_00436470(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      FUN_00407260(param_1 + 1);
    }
    param_1 = param_1 + 0x11;
    param_3 = param_3 + 0x11;
  } while (param_1 != param_2);
  return param_3;
}




/* Function: FUN_004364b0 */

void __thiscall
FUN_004364b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004e1f70(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_004364e0 */

void __thiscall
FUN_004364e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00435650(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00436510 */

void __thiscall
FUN_00436510(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0041e110(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00436540 */

void FUN_00436540(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1 != param_2) && (puVar4 = param_1 + 1, puVar4 != param_2)) {
    puVar3 = param_1 + 2;
    do {
      cVar2 = (*param_3)(*puVar4,*param_1);
      if (cVar2 == '\0') {
        cVar2 = (*param_3)(*puVar4,puVar3[-2]);
        puVar1 = puVar3 + -2;
        if (cVar2 != '\0') {
          do {
            puVar5 = puVar1;
            cVar2 = (*param_3)(*puVar4,puVar5[-1]);
            puVar1 = puVar5 + -1;
          } while (cVar2 != '\0');
          if ((puVar5 != puVar4) && (puVar4 != puVar3)) {
            FUN_004351c0(puVar5,puVar4,puVar3,0,0);
          }
        }
      }
      else if ((param_1 != puVar4) && (puVar4 != puVar3)) {
        FUN_004351c0(param_1,puVar4,puVar3,0,0);
      }
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (puVar4 != param_2);
  }
  return;
}




/* Function: FUN_00436610 */

void FUN_00436610(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      FUN_00407260(param_3 + 1);
    }
    param_1 = param_1 + 0x11;
  }
  return;
}




/* Function: FUN_00436650 */

void __thiscall
FUN_00436650(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

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
      puVar3 = param_4 + 0xc;
      puVar5 = puVar2 + 0xc;
      puVar6 = param_4;
      puVar7 = puVar2;
      for (iVar4 = 0xc; param_4 = puVar3, puVar2 = puVar5, iVar4 != 0; iVar4 = iVar4 + -1) {
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




/* Function: FUN_004366a0 */

void __thiscall
FUN_004366a0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_3 != param_4) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    puVar2 = param_3;
    for (; param_4 != puVar1; param_4 = param_4 + 2) {
      *puVar2 = *param_4;
      puVar2[1] = param_4[1];
      puVar2 = puVar2 + 2;
    }
    *(undefined4 **)(param_1 + 8) = puVar2;
  }
  *param_2 = param_3;
  return;
}




/* Function: FUN_004366e0 */

void __thiscall
FUN_004366e0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_3 != param_4) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    puVar2 = param_3;
    for (; param_4 != puVar1; param_4 = param_4 + 1) {
      *puVar2 = *param_4;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar2;
  }
  *param_2 = param_3;
  return;
}




/* Function: FUN_00436720 */

void __thiscall FUN_00436720(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057b930;
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
      FUN_00434f50();
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




/* Function: FUN_004369c0 */

int __thiscall FUN_004369c0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_004e22a0(param_2,param_3,param_4,param_1,param_4);
  return param_2 + param_3 * 0xc;
}




/* Function: FUN_004369f0 */

int __thiscall FUN_004369f0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00436440(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x30 + param_2;
}




/* Function: FUN_00436a20 */

void FUN_00436a20(uint param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  uint local_4;
  
  uVar1 = param_3 - param_1;
  while( true ) {
    if ((int)(uVar1 & 0xfffffffc) < 0x81) {
      FUN_00436540(param_1,param_3,param_4);
      return;
    }
    FUN_00436290(&local_8,param_1,param_3,param_4);
    uVar2 = local_4;
    if ((param_2 < local_4) && (param_3 = local_8, uVar2 = param_1, local_8 <= param_2)) break;
    uVar1 = param_3 - uVar2;
    param_1 = uVar2;
  }
  return;
}




/* Function: FUN_00436aa0 */

void __thiscall
FUN_00436aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00436470(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00436ad0 */

int __thiscall FUN_00436ad0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00436610(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x44 + param_2;
}




/* Function: FUN_00436b00 */

void __thiscall FUN_00436b00(int param_1,uint param_2)

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
    FUN_00436720(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 2))) {
    FUN_004366e0(&param_2,*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_00436b80 */

int __thiscall
FUN_00436b80(undefined4 *param_1,undefined4 **param_2,undefined1 *param_3,undefined4 **param_4)

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
  puStack_c = &LAB_0057b940;
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
      iVar4 = FUN_00434f50();
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
      local_34 = (undefined4 *)0x436c9c;
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
        local_34 = (undefined4 *)&UNK_00436d30;
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




/* Function: FUN_00436e80 */

void __thiscall FUN_00436e80(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_44 [12];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057b950;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  puVar6 = local_44;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(param_1 + 0xc) - iVar3) / 0x30;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 8) - iVar3) / 0x30;
    }
    if (0x5555555U - iVar5 < param_3) {
      ExceptionList = &local_10;
      FUN_00434f50();
      ExceptionList = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 8) - iVar3) / 0x30;
    }
    if (uVar4 < iVar5 + param_3) {
      if (0x5555555 - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x30;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xffffffb0;
      if (uVar4 < iVar3 + param_3) {
        ExceptionList = &local_10;
        local_14 = &stack0xffffffb0;
        iVar3 = FUN_00434980();
        uVar4 = iVar3 + param_3;
      }
      iVar3 = FUN_00493c27();
      local_8 = 0;
      uVar2 = FUN_00435650(*(undefined4 *)(param_1 + 4));
      FUN_00436440(uVar2);
      FUN_00435650(param_2);
      pvVar1 = *(void **)(param_1 + 4);
      if (pvVar1 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*(int *)(param_1 + 8) - (int)pvVar1) / 0x30;
      }
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      *(uint *)(param_1 + 0xc) = uVar4 * 0x30 + iVar3;
      *(uint *)(param_1 + 8) = (param_3 + iVar5) * 0x30 + iVar3;
      *(int *)(param_1 + 4) = iVar3;
      ExceptionList = local_10;
      return;
    }
    if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x30) < param_3) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffb0;
      FUN_004364e0();
      local_8 = 2;
      FUN_004369f0();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x30;
    }
    else {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffb0;
      uVar2 = FUN_004364e0();
      *(undefined4 *)(param_1 + 8) = uVar2;
      FUN_00435510();
    }
    FUN_00435010();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00437180 */

void __thiscall FUN_00437180(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057b960;
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
      FUN_00434f50();
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




/* Function: FUN_00437430 */

void FUN_00437430(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x44) {
    FUN_005173d0();
  }
  return;
}




/* Function: FUN_00437460 */

void __thiscall FUN_00437460(int param_1,uint param_2)

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
    uVar3 = (*(int *)(param_1 + 8) - iVar4) / 0xc;
  }
  if (uVar3 < param_2) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_1 + 8) - iVar4) / 0xc;
    }
    FUN_00436b80(*(undefined4 *)(param_1 + 8),param_2 - iVar4,&stack0x00000008);
    return;
  }
  if (iVar4 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if ((param_2 < (uint)((iVar1 - iVar4) / 0xc)) && (iVar4 = iVar4 + param_2 * 0xc, iVar4 != iVar1)
       ) {
      uVar2 = FUN_00435090(iVar1,iVar1,iVar4,param_2);
      *(undefined4 *)(param_1 + 8) = uVar2;
    }
  }
  return;
}




/* Function: FUN_00437520 */

void __thiscall FUN_00437520(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(param_1 + 8) - iVar2) / 0x30;
  }
  if (uVar1 < param_2) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar2) / 0x30;
    }
    FUN_00436e80(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if (iVar2 != 0) {
    if (param_2 < (uint)((*(int *)(param_1 + 8) - iVar2) / 0x30)) {
      FUN_00436650(&param_2,param_2 * 0x30 + *(int *)(param_1 + 4),*(int *)(param_1 + 8));
    }
  }
  return;
}




/* Function: FUN_004375d0 */

void __thiscall FUN_004375d0(int param_1,uint param_2)

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
    FUN_00437180(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 3))) {
    FUN_004366a0(&param_2,*(int *)(param_1 + 4) + param_2 * 8,*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_00437650 */

void __thiscall FUN_00437650(int param_1,int *param_2,int param_3,int param_4)

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




/* Function: FUN_004376b0 */

void __fastcall FUN_004376b0(int param_1)

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




/* Function: FUN_00437700 */

void __thiscall FUN_00437700(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_5c [64];
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057b978;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff94;
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_00407260();
  iVar3 = *(int *)(param_1 + 4);
  uVar5 = 0;
  local_8 = 0;
  if (iVar3 != 0) {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x44;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x44;
    }
    if (0x3c3c3c3U - iVar2 < param_3) {
      FUN_00434f50();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x44;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0x3c3c3c3 - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x44;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_005173a0();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        uVar1 = FUN_00436470(*(undefined4 *)(param_1 + 4));
        FUN_00436610(uVar1);
        FUN_00436470(param_2);
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x44;
        }
        if (iVar3 != 0) {
          FUN_00437430();
                    /* WARNING: Subroutine does not return */
          operator_delete(*(void **)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x44 + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x44 + iVar2;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x44) < param_3) {
          local_1c = &stack0xffffff88;
          FUN_00436aa0();
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_00436ad0();
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x44;
        }
        else {
          uVar1 = FUN_00436aa0();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_004354d0();
        }
        FUN_004354a0();
      }
    }
  }
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_5c,0x10,4,FUN_00407150);
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00437a40 */

int __thiscall FUN_00437a40(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057b990;
  local_10 = ExceptionList;
  if (*(int *)(param_2 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x44;
  }
  ExceptionList = &local_10;
  cVar1 = FUN_00435440(iVar3);
  if (cVar1 != '\0') {
    local_8 = 0;
    uVar2 = FUN_00436470(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(param_1 + 4),param_1,param_2);
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_004389e0 */

void FUN_004389e0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_68 [12];
  undefined1 local_30 [7];
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined4 local_15;
  undefined2 local_11;
  undefined2 local_f;
  undefined2 local_d;
  undefined4 local_8;
  undefined4 local_4;
  
  local_11 = 0xffff;
  local_30._0_2_ = 0xffff;
  local_30[2] = 0;
  local_f = 0;
  local_d = 0;
  local_8 = 0;
  local_4 = 0;
  local_30._3_4_ = 0;
  local_29 = 0;
  local_1d = 0;
  local_19 = 0;
  local_15 = 0xffffffff;
  local_25 = 0x3f800000;
  local_21 = 0x3f800000;
  puVar2 = (undefined4 *)local_30;
  puVar3 = auStack_68;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00437520(param_1);
  return;
}




/* Function: FUN_00438a60 */

void __thiscall FUN_00438a60(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &DAT_0057b9a8;
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
    FUN_00437700();
  }
  else {
    ExceptionList = &local_c;
    if ((iVar1 != 0) &&
       (ExceptionList = &local_c, param_2 < (uint)((*(int *)(param_1 + 8) - iVar1) / 0x44))) {
      ExceptionList = &local_c;
      FUN_00437650();
    }
  }
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(&stack0x0000000c,0x10,4,FUN_00407150);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00438b60 */

void __thiscall FUN_00438b60(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x44 != 0) {
      iVar1 = (param_3 - iVar1) / 0x44;
      goto LAB_00438ba7;
    }
  }
  iVar1 = 0;
LAB_00438ba7:
  FUN_00437700(param_3,1,param_4);
  *param_2 = iVar1 * 0x44 + *(int *)(param_1 + 4);
  return;
}




/* Function: FUN_00438bd0 */

int __thiscall FUN_00438bd0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == param_2) {
    return param_1;
  }
  if (*(int *)(param_2 + 4) != 0) {
    uVar2 = (*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x44;
    if (uVar2 != 0) {
      iVar1 = *(int *)(param_1 + 4);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(param_1 + 8) - iVar1) / 0x44;
      }
      if (uVar2 <= uVar5) {
        uVar3 = FUN_00435110(*(undefined4 *)(param_2 + 4),*(int *)(param_2 + 8),iVar1,uVar2);
        FUN_00437430(uVar3,*(undefined4 *)(param_1 + 8));
        if (*(int *)(param_2 + 4) == 0) {
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
          return param_1;
        }
        *(int *)(param_1 + 8) =
             ((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x44) * 0x44 + *(int *)(param_1 + 4)
        ;
        return param_1;
      }
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(param_1 + 0xc) - iVar1) / 0x44;
      }
      if (uVar2 <= uVar5) {
        iVar4 = FUN_005173a0();
        iVar4 = iVar4 * 0x44 + *(int *)(param_2 + 4);
        FUN_00435110(*(int *)(param_2 + 4),iVar4,iVar1,uVar2);
        uVar3 = FUN_00436470(iVar4,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8),param_1
                             ,uVar2);
        *(undefined4 *)(param_1 + 8) = uVar3;
        return param_1;
      }
      FUN_00437430(iVar1,*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)(param_1 + 4));
    }
  }
  FUN_004376b0();
  return param_1;
}




/* Function: FUN_00438d60 */

int __fastcall FUN_00438d60(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  iVar3 = *(int *)(param_1 + 0xe4);
  if (iVar3 < 0) {
    return -1;
  }
  uVar1 = iVar3 + 1;
  *(uint *)(param_1 + 0xe4) = uVar1;
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88)) / 0xc;
  }
  if (uVar4 < uVar1) {
    FUN_00437460(uVar1,local_c,local_8,local_4);
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x88) + iVar3 * 0xc);
  *piVar2 = iVar3;
  piVar2[1] = local_8;
  piVar2[2] = -1;
  return iVar3;
}




/* Function: FUN_00438e00 */

void FUN_00438e00(undefined4 param_1)

{
  undefined1 local_4c [64];
  
  _eh_vector_constructor_iterator_
            (local_4c,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310(0x3f800000);
  FUN_00438a60(param_1);
  return;
}




/* Function: FUN_00438e50 */

void __thiscall FUN_00438e50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x44) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x44))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00436610(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x44;
    return;
  }
  FUN_00438b60(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_00438ee0 */

void __fastcall FUN_00438ee0(int param_1)

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




/* Function: FUN_00438ef0 */

int FUN_00438ef0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = (undefined4 *)(param_3 + 0x18);
    puVar2 = (undefined4 *)(param_1 + 0x18);
    do {
      FUN_00438bd0(param_1);
      if (puVar2 + -2 != puVar1 + -2) {
        puVar1[-2] = puVar2[-2];
        puVar1[-1] = puVar2[-1];
        *puVar1 = *puVar2;
      }
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      if (puVar2 + 4 != puVar1 + 4) {
        puVar1[4] = puVar2[4];
        puVar1[5] = puVar2[5];
        puVar1[6] = puVar2[6];
      }
      puVar1[7] = puVar2[7];
      param_1 = param_1 + 0x38;
      param_3 = param_3 + 0x38;
      puVar1 = puVar1 + 0xe;
      puVar2 = puVar2 + 0xe;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}




/* Function: FUN_00438f90 */

void FUN_00438f90(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = (undefined4 *)(param_3 + 0x18);
    puVar2 = (undefined4 *)(param_4 + 0x18);
    do {
      param_3 = param_3 + -0x38;
      param_4 = param_4 + -0x38;
      FUN_00438bd0(param_3);
      if (puVar1 + -0x10 != puVar2 + -0x10) {
        puVar2[-0x10] = puVar1[-0x10];
        puVar2[-0xf] = puVar1[-0xf];
        puVar2[-0xe] = puVar1[-0xe];
      }
      puVar2[-0xd] = puVar1[-0xd];
      puVar2[-0xc] = puVar1[-0xc];
      puVar2[-0xb] = puVar1[-0xb];
      if (puVar1 + -10 != puVar2 + -10) {
        puVar2[-10] = puVar1[-10];
        puVar2[-9] = puVar1[-9];
        puVar2[-8] = puVar1[-8];
      }
      puVar2[-7] = puVar1[-7];
      puVar1 = puVar1 + -0xe;
      puVar2 = puVar2 + -0xe;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return;
  }
  *param_1 = param_4;
  return;
}




/* Function: FUN_00439120 */

void __thiscall FUN_00439120(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *local_44 [17];
  
  iVar1 = *(int *)(param_1 + 0x88) + param_2 * 0xc;
  *(int *)(param_2 * 0x38 + *(int *)(param_1 + 0xb8) + 0x24) = iVar1;
  *(undefined4 *)(iVar1 + 4) = param_3;
  FUN_0041f030();
  local_44[0] = param_4;
  uVar2 = (**(code **)(*param_4 + 0x88))();
  FUN_0041d670(uVar2);
  FUN_00438e50(local_44);
  FUN_005173d0();
  return;
}




/* Function: FUN_00439190 */

void FUN_00439190(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x18);
    do {
      FUN_00438bd0(param_3);
      if ((undefined4 *)(param_3 + 0x10) != puVar1 + -2) {
        puVar1[-2] = *(undefined4 *)(param_3 + 0x10);
        puVar1[-1] = *(undefined4 *)(param_3 + 0x14);
        *puVar1 = *(undefined4 *)(param_3 + 0x18);
      }
      puVar1[1] = *(undefined4 *)(param_3 + 0x1c);
      puVar1[2] = *(undefined4 *)(param_3 + 0x20);
      puVar1[3] = *(undefined4 *)(param_3 + 0x24);
      if ((undefined4 *)(param_3 + 0x28) != puVar1 + 4) {
        puVar1[4] = *(undefined4 *)(param_3 + 0x28);
        puVar1[5] = *(undefined4 *)(param_3 + 0x2c);
        puVar1[6] = *(undefined4 *)(param_3 + 0x30);
      }
      puVar1[7] = *(undefined4 *)(param_3 + 0x34);
      param_1 = param_1 + 0x38;
      puVar1 = puVar1 + 0xe;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_00439220 */

undefined4 FUN_00439220(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00438f90(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00439260 */

int FUN_00439260(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057b9d1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_00437a40(param_1);
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    }
    param_3 = param_3 + 0x38;
  }
  ExceptionList = local_10;
  return param_3;
}




/* Function: FUN_00439330 */

void FUN_00439330(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057b9f1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_00437a40(param_3);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 0x14);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x20);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x28);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 0x30);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_3 + 0x34);
    }
    param_1 = param_1 + 0x38;
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00439400 */

void __thiscall
FUN_00439400(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00439260(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00439430 */

void FUN_00439430(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    FUN_00438ee0();
  }
  return;
}




/* Function: FUN_00439460 */

int __thiscall FUN_00439460(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00439330(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x38 + param_2;
}




/* Function: FUN_00439490 */

void __fastcall FUN_00439490(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x38) {
    FUN_00438ee0();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_004394e0 */

void __thiscall FUN_004394e0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != param_4) {
    iVar2 = FUN_00438ef0(param_4);
    iVar1 = *(int *)(param_1 + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x38) {
      FUN_00438ee0();
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  *param_2 = param_3;
  return;
}




/* Function: FUN_00439540 */

void __thiscall FUN_00439540(undefined1 *param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined1 local_54 [16];
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
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057ba08;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa0;
  local_68 = (undefined1 *)0x439572;
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_00437a40();
  local_44 = *(undefined4 *)(param_4 + 0x10);
  local_40 = *(undefined4 *)(param_4 + 0x14);
  local_3c = *(undefined4 *)(param_4 + 0x18);
  local_38 = *(undefined4 *)(param_4 + 0x1c);
  local_34 = *(undefined4 *)(param_4 + 0x20);
  local_30 = *(undefined4 *)(param_4 + 0x24);
  local_2c = *(undefined4 *)(param_4 + 0x28);
  local_28 = *(undefined4 *)(param_4 + 0x2c);
  local_24 = *(undefined4 *)(param_4 + 0x30);
  local_20 = *(undefined4 *)(param_4 + 0x34);
  iVar4 = *(int *)(param_1 + 4);
  local_8 = 0;
  if (iVar4 == 0) {
    param_4 = 0;
  }
  else {
    param_4 = (*(int *)(param_1 + 0xc) - iVar4) / 0x38;
  }
  if (param_3 != 0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x38;
    }
    if (0x4924924U - iVar3 < param_3) {
      FUN_00434f50();
    }
    else {
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x38;
      }
      if (param_4 < iVar3 + param_3) {
        if (0x4924924 - (param_4 >> 1) < param_4) {
          param_4 = 0;
        }
        else {
          param_4 = param_4 + (param_4 >> 1);
        }
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar4) / 0x38;
        }
        if (param_4 < iVar4 + param_3) {
          iVar4 = FUN_00434a10();
          param_4 = iVar4 + param_3;
        }
        local_68 = (undefined1 *)0x4396a7;
        puVar1 = (undefined1 *)FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        local_6c = puVar1;
        local_68 = param_1;
        iVar4 = FUN_00439260(*(undefined4 *)(param_1 + 4));
        local_6c = local_54;
        local_68 = param_1;
        FUN_00439330(iVar4);
        local_6c = (undefined1 *)(iVar4 + param_3 * 0x38);
        local_68 = param_1;
        FUN_00439260(param_2);
        if (*(int *)(param_1 + 4) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38;
        }
        if (*(int *)(param_1 + 4) != 0) {
          local_6c = (undefined1 *)0x43974b;
          local_68 = (undefined1 *)*(int *)(param_1 + 4);
          FUN_00439430();
                    /* WARNING: Subroutine does not return */
          local_68 = &UNK_00439754;
          operator_delete(*(void **)(param_1 + 4));
        }
        *(undefined1 **)(param_1 + 0xc) = puVar1 + param_4 * 0x38;
        *(undefined1 **)(param_1 + 8) = puVar1 + (param_3 + iVar4) * 0x38;
        *(undefined1 **)(param_1 + 4) = puVar1;
      }
      else {
        local_68 = *(undefined1 **)(param_1 + 8);
        if ((uint)(((int)local_68 - (int)param_2) / 0x38) < param_3) {
          local_1c = (undefined1 *)&local_6c;
          local_6c = param_2;
          FUN_00439400();
          local_6c = *(undefined1 **)(param_1 + 8);
          local_68 = (undefined1 *)(param_3 - (*(int *)(param_1 + 8) - (int)param_2) / 0x38);
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_00439460();
          iVar4 = *(int *)(param_1 + 8) + param_3 * 0x38;
          *(int *)(param_1 + 8) = iVar4;
          local_68 = (undefined1 *)(iVar4 + param_3 * -0x38);
          local_8 = 0;
        }
        else {
          puVar1 = local_68 + param_3 * -0x38;
          local_6c = puVar1;
          local_1c = local_68;
          uVar2 = FUN_00439400();
          *(undefined4 *)(param_1 + 8) = uVar2;
          local_6c = param_2;
          local_68 = puVar1;
          FUN_00439220();
          local_68 = param_2 + param_3 * 0x38;
        }
        local_6c = param_2;
        FUN_00439190();
      }
    }
  }
  FUN_004376b0();
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004398e0 */

void __thiscall FUN_004398e0(int param_1,undefined4 **param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *local_28;
  int local_24;
  undefined1 *local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057ba28;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  local_4 = 0;
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = (undefined1 *)((*(int *)(param_1 + 8) - iVar1) / 0x38);
  }
  if (puVar2 < param_2) {
    if (iVar1 == 0) {
      local_24 = 0;
    }
    else {
      local_24 = (*(int *)(param_1 + 8) - iVar1) / 0x38;
    }
    local_20 = &stack0x00000008;
    local_24 = (int)param_2 - local_24;
    local_28 = *(undefined4 **)(param_1 + 8);
    param_2 = &local_28;
    ExceptionList = &local_c;
    FUN_00439540();
  }
  else {
    ExceptionList = &local_c;
    if (iVar1 != 0) {
      local_20 = *(undefined1 **)(param_1 + 8);
      ExceptionList = &local_c;
      if (param_2 < (undefined1 *)(((int)local_20 - iVar1) / 0x38)) {
        local_24 = (int)param_2 * 0x38;
        param_2 = (undefined4 **)&local_24;
        local_24 = local_24 + *(int *)(param_1 + 4);
        local_28 = &param_2;
        ExceptionList = &local_c;
        FUN_004394e0();
      }
    }
  }
  local_20 = (undefined1 *)0x4399b6;
  FUN_004376b0();
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004399d0 */

undefined4 * __thiscall FUN_004399d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00588938;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
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
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x115) = 0;
  param_1[0x46] = 0;
  FUN_004389e0(param_2);
  FUN_004375d0(param_3,0,0);
  return param_1;
}




/* Function: FUN_00439ad0 */

undefined4 __fastcall FUN_00439ad0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x104);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x10c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x110);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x9c);
  iVar3 = *(int *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xe4) = 0;
  for (; iVar3 != iVar2; iVar3 = iVar3 + 0x30) {
    FUN_004348e0();
  }
  iVar2 = *(int *)(param_1 + 0xac);
  for (iVar3 = *(int *)(param_1 + 0xa8); iVar3 != iVar2; iVar3 = iVar3 + 8) {
    FUN_00434930();
  }
  FUN_00439490();
  *(undefined1 *)(param_1 + 0x108) = 0;
  return 1;
}




/* Function: FUN_00439b80 */

void FUN_00439b80(undefined4 param_1)

{
  undefined1 auStack_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_4;
  
  local_4 = auStack_3c;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_004398e0(param_1);
  return;
}




/* Function: FUN_00439bc0 */

void __fastcall FUN_00439bc0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_00588938;
  FUN_00439ad0();
  piVar1 = (int *)param_1[0x44];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x44] = 0;
  }
  piVar1 = (int *)param_1[0x43];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x43] = 0;
  }
  piVar1 = (int *)param_1[0x41];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x41] = 0;
  }
  if ((void *)param_1[0x36] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x36]);
  }
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  if ((void *)param_1[0x32] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x32]);
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_00439490();
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
  FUN_0040da90();
  return;
}




/* Function: FUN_00439ce0 */

void __fastcall FUN_00439ce0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88)) / 0xc;
  }
  FUN_00439b80(iVar2);
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  uVar1 = FUN_0041e5b0("Shadow manager successfully initialized");
  FUN_0040a410(uVar1);
  if (*(int *)(param_1 + 0x88) != 0) {
    if ((*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88)) / 0xc != 0) {
      if ((*(int *)(param_1 + 0x88) == 0) ||
         ((uint)((*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88)) / 0xc) < 2)) {
        if (*(int *)(param_1 + 0x88) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88)) / 0xc;
        }
        pcVar3 = "There is [%u] shadow were allocated by objects";
      }
      else if (*(int *)(param_1 + 0x88) == 0) {
        iVar2 = 0;
        pcVar3 = "There are [%u] shadows were allocated by objects";
      }
      else {
        iVar2 = (*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88)) / 0xc;
        pcVar3 = "There are [%u] shadows were allocated by objects";
      }
      uVar1 = FUN_0041e5b0(pcVar3,iVar2);
      FUN_0040a410(uVar1);
      return;
    }
  }
  uVar1 = FUN_0041e5b0("There is no shadows were allocated by objects");
  FUN_0040a410(uVar1);
  return;
}




/* Function: FUN_00439e20 */

void * __thiscall FUN_00439e20(void *param_1,byte param_2)

{
  FUN_00439bc0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00439f70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_00439f70(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  uint unaff_retaddr;
  int *local_8;
  uint local_4;
  
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  pvVar4 = (void *)0x0;
  uVar3 = 0;
  iVar1 = FUN_00410660(param_2,&DAT_00582818);
  if (iVar1 != 0) {
    FUN_0040f0b0(iVar1,0,2);
    uVar3 = FUN_0040f110(iVar1);
    pvVar4 = operator_new(uVar3,(nothrow_t *)&DAT_005b6164);
    FUN_0040f0b0(iVar1,0,0);
    FUN_0040f000(pvVar4,1,uVar3,iVar1);
    FUN_0040efb0(iVar1);
  }
  iVar1 = FUN_0049523b(pvVar4,uVar3,0,0,&local_8,0);
  operator_delete__(pvVar4);
  if (-1 < iVar1) {
    iVar1 = *param_1;
    uVar2 = (**(code **)(*local_8 + 0xc))(local_8,param_4,0);
    iVar1 = (**(code **)(iVar1 + 300))(param_1,param_2,uVar2);
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar1;
}




/* Function: FUN_0043a040 */

uint __thiscall FUN_0043a040(int param_1,uint param_2)

{
  uint in_EAX;
  
  if (-1 < (int)param_2) {
    in_EAX = FUN_0043f8b0();
    if (param_2 < in_EAX) {
      return (uint)(*(byte *)((uint)*(byte *)(*(int *)(param_1 + 0x1e4) + 0x28 + param_2 * 0x2c) *
                              0x50 + 0x44 + *(int *)(param_1 + 0x1d4)) >> 3 & 1);
    }
  }
  return in_EAX & 0xffffff00;
}




/* Function: FUN_0043a090 */

int __fastcall FUN_0043a090(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x50;
}




/* Function: FUN_0043a0c0 */

void __fastcall FUN_0043a0c0(void *param_1)

{
  _eh_vector_destructor_iterator_(param_1,0xc,3,FUN_00407150);
  return;
}




/* Function: FUN_0043a0d0 */

void FUN_0043a0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = param_1;
  local_8 = param_2;
  local_4 = param_3;
  FUN_004f9490(&local_c,param_4);
  return;
}




/* Function: FUN_0043a640 */

undefined2 __thiscall
FUN_0043a640(int param_1,int *param_2,float param_3,undefined4 *param_4,byte *param_5)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [36];
  
  uVar5 = (**(code **)(*param_2 + 0x88))();
  FUN_00549650(uVar5);
  iVar9 = (int)param_3 * 0x2c;
  puVar1 = (ushort *)(iVar9 + 4 + *(int *)(param_1 + 0x1e4));
  iVar8 = param_2[0x8b];
  uStack_3c = *(undefined4 *)
               ((uint)*(ushort *)(iVar9 + 4 + *(int *)(param_1 + 0x1e4)) * 0x10 + iVar8);
  uStack_38 = *(undefined4 *)((uint)*puVar1 * 0x10 + 4 + iVar8);
  uStack_34 = *(undefined4 *)((uint)*puVar1 * 0x10 + 8 + iVar8);
  FUN_00548748(uVar5);
  fStack_48 = 0.0;
  fStack_44 = 1.0;
  fStack_40 = 0.0;
  if (((char)param_2[0x9d] != '\0') &&
     (pfVar6 = (float *)FUN_00548964(auStack_30,
                                     param_2[0x90] +
                                     (uint)*(ushort *)(iVar9 + 4 + *(int *)(param_1 + 0x1e4)) * 0xc,
                                     auStack_24), pfVar6 != &fStack_48)) {
    fStack_48 = *pfVar6;
    fStack_44 = pfVar6[1];
    fStack_40 = pfVar6[2];
  }
  *param_4 = uStack_3c;
  param_4[1] = uStack_38;
  param_4[2] = uStack_34;
  param_4[4] = fStack_44;
  param_4[3] = fStack_48;
  param_4[5] = fStack_40;
  param_4[6] = *(undefined4 *)(iVar9 + 0x18 + *(int *)(param_1 + 0x1e4));
  fVar2 = *(float *)(iVar9 + 0x1c + *(int *)(param_1 + 0x1e4));
  param_4[8] = 0;
  param_4[7] = -fVar2;
  param_4[9] = 0;
  iVar8 = param_2[0x8b];
  puVar1 = (ushort *)(iVar9 + 2 + *(int *)(param_1 + 0x1e4));
  uStack_3c = *(undefined4 *)((uint)*puVar1 * 0x10 + iVar8);
  uStack_38 = *(undefined4 *)((uint)*puVar1 * 0x10 + 4 + iVar8);
  uStack_34 = *(undefined4 *)((uint)*puVar1 * 0x10 + 8 + iVar8);
  FUN_00548748(uVar5);
  if (((char)param_2[0x9d] != '\0') &&
     (pfVar6 = (float *)FUN_00548964(auStack_30,
                                     param_2[0x90] +
                                     (uint)*(ushort *)(iVar9 + 2 + *(int *)(param_1 + 0x1e4)) * 0xc,
                                     auStack_24), pfVar6 != &fStack_48)) {
    fStack_48 = *pfVar6;
    fStack_44 = pfVar6[1];
    fStack_40 = pfVar6[2];
  }
  param_4[10] = uStack_3c;
  param_4[0xb] = uStack_38;
  param_4[0xc] = uStack_34;
  param_4[0xd] = fStack_48;
  param_4[0xe] = fStack_44;
  param_4[0xf] = fStack_40;
  puVar1 = (ushort *)(iVar9 + *(int *)(param_1 + 0x1e4));
  iVar8 = param_2[0x8b];
  uStack_3c = *(undefined4 *)((uint)*(ushort *)(iVar9 + *(int *)(param_1 + 0x1e4)) * 0x10 + iVar8);
  uStack_38 = *(undefined4 *)((uint)*puVar1 * 0x10 + 4 + iVar8);
  uStack_34 = *(undefined4 *)((uint)*puVar1 * 0x10 + 8 + iVar8);
  FUN_00548748(uVar5);
  fVar2 = fStack_48;
  if (((char)param_2[0x9d] != '\0') &&
     (pfVar6 = (float *)FUN_00548964(auStack_30,
                                     param_2[0x90] +
                                     (uint)*(ushort *)(iVar9 + *(int *)(param_1 + 0x1e4)) * 0xc,
                                     auStack_24), fVar2 = fStack_48, pfVar6 != &fStack_48)) {
    fStack_44 = pfVar6[1];
    fStack_40 = pfVar6[2];
    fVar2 = *pfVar6;
  }
  param_4[0x17] = fVar2;
  param_4[0x14] = uStack_3c;
  param_4[0x15] = uStack_38;
  param_4[0x16] = uStack_34;
  param_4[0x18] = fStack_44;
  param_4[0x19] = fStack_40;
  iVar8 = 0;
  fVar2 = param_3;
  fVar3 = param_3;
  do {
    if ((*(byte *)(param_1 + 0x188) & 1) == 0) {
      iVar7 = *(int *)(param_1 + 0x1e4);
      pfVar6 = (float *)((uint)*(ushort *)(iVar7 + ((int)param_3 * 0x16 + iVar8) * 2) * 0x10 +
                        param_2[0x8b]);
      fStack_48 = *pfVar6;
      fStack_44 = pfVar6[1];
      fStack_40 = pfVar6[2];
      fVar2 = fStack_48 * *(float *)(iVar9 + 8 + iVar7) +
              fStack_44 * *(float *)(iVar9 + 0xc + iVar7) +
              fStack_40 * *(float *)(iVar9 + 0x10 + iVar7) + *(float *)(iVar9 + 0x14 + iVar7);
      fVar3 = fStack_48 * *(float *)(iVar9 + 0x18 + iVar7) +
              fStack_44 * *(float *)(iVar9 + 0x1c + iVar7) +
              fStack_40 * *(float *)(iVar9 + 0x20 + iVar7) + *(float *)(iVar9 + 0x24 + iVar7);
LAB_0043a9e6:
      fVar3 = -fVar3;
    }
    else {
      if (iVar8 == 0) {
        iVar7 = *(int *)(param_1 + 0x1e4) + iVar9;
        fVar2 = *(float *)(iVar7 + 8);
        fVar3 = *(float *)(iVar7 + 0xc);
        goto LAB_0043a9e6;
      }
      if (iVar8 == 1) {
        iVar7 = iVar9 + *(int *)(param_1 + 0x1e4);
        fVar2 = *(float *)(iVar7 + 0x10);
        fVar3 = *(float *)(iVar7 + 0x14);
        goto LAB_0043a9e6;
      }
      if (iVar8 == 2) {
        iVar7 = *(int *)(param_1 + 0x1e4) + iVar9;
        fVar2 = *(float *)(iVar7 + 0x18);
        fVar3 = *(float *)(iVar7 + 0x1c);
        goto LAB_0043a9e6;
      }
    }
    param_4[iVar8 * -10 + 0x1a] = fVar2;
    param_4[iVar8 * -10 + 0x1b] = fVar3;
    if ((*(byte *)(param_1 + 0x188) & 1) == 0) {
      iVar7 = *(int *)(param_1 + 0x1e4);
      pfVar6 = (float *)((uint)*(ushort *)(iVar7 + 2 + ((int)param_3 * 0x16 + iVar8) * 2) * 0x10 +
                        param_2[0x8b]);
      fStack_48 = *pfVar6;
      fStack_44 = pfVar6[1];
      fStack_40 = pfVar6[2];
      fVar2 = fStack_48 * *(float *)(iVar9 + 8 + iVar7) +
              fStack_44 * *(float *)(iVar9 + 0xc + iVar7) +
              fStack_40 * *(float *)(iVar9 + 0x10 + iVar7) + *(float *)(iVar9 + 0x14 + iVar7);
      fVar3 = fStack_48 * *(float *)(iVar9 + 0x18 + iVar7) +
              fStack_44 * *(float *)(iVar9 + 0x1c + iVar7) +
              fStack_40 * *(float *)(iVar9 + 0x20 + iVar7) + *(float *)(iVar9 + 0x24 + iVar7);
LAB_0043aadd:
      fVar3 = -fVar3;
    }
    else {
      if (iVar8 == -1) {
        iVar7 = *(int *)(param_1 + 0x1e4) + iVar9;
        fVar2 = *(float *)(iVar7 + 8);
        fVar3 = -*(float *)(iVar7 + 0xc);
      }
      if (iVar8 == 0) {
        iVar7 = *(int *)(param_1 + 0x1e4) + iVar9;
        fVar2 = *(float *)(iVar7 + 0x10);
        fVar3 = -*(float *)(iVar7 + 0x14);
      }
      if (iVar8 == 1) {
        iVar7 = *(int *)(param_1 + 0x1e4) + iVar9;
        fVar2 = *(float *)(iVar7 + 0x18);
        fVar3 = *(float *)(iVar7 + 0x1c);
        goto LAB_0043aadd;
      }
    }
    param_4[iVar8 * -10 + 0x10] = fVar2;
    param_4[iVar8 * -10 + 0x11] = fVar3;
    if ((*(byte *)(param_1 + 0x188) & 1) == 0) {
      iVar7 = *(int *)(param_1 + 0x1e4);
      pfVar6 = (float *)((uint)*(ushort *)(iVar7 + 4 + ((int)param_3 * 0x16 + iVar8) * 2) * 0x10 +
                        param_2[0x8b]);
      fStack_48 = *pfVar6;
      fStack_44 = pfVar6[1];
      fStack_40 = pfVar6[2];
      fVar2 = fStack_48 * *(float *)(iVar9 + 8 + iVar7) +
              fStack_44 * *(float *)(iVar9 + 0xc + iVar7) +
              fStack_40 * *(float *)(iVar9 + 0x10 + iVar7) + *(float *)(iVar9 + 0x14 + iVar7);
      fVar3 = fStack_48 * *(float *)(iVar9 + 0x18 + iVar7) +
              fStack_44 * *(float *)(iVar9 + 0x1c + iVar7) +
              fStack_40 * *(float *)(iVar9 + 0x20 + iVar7) + *(float *)(iVar9 + 0x24 + iVar7);
LAB_0043abc6:
      fVar3 = -fVar3;
    }
    else {
      if (iVar8 == -2) {
        iVar7 = *(int *)(param_1 + 0x1e4) + iVar9;
        fVar2 = *(float *)(iVar7 + 8);
        fVar3 = -*(float *)(iVar7 + 0xc);
      }
      if (iVar8 == -1) {
        iVar7 = *(int *)(param_1 + 0x1e4) + iVar9;
        fVar2 = *(float *)(iVar7 + 0x10);
        fVar3 = -*(float *)(iVar7 + 0x14);
      }
      if (iVar8 == 0) {
        iVar7 = *(int *)(param_1 + 0x1e4) + iVar9;
        fVar2 = *(float *)(iVar7 + 0x18);
        fVar3 = *(float *)(iVar7 + 0x1c);
        goto LAB_0043abc6;
      }
    }
    iVar7 = iVar8 + 3;
    param_4[iVar8 * -10 + 6] = fVar2;
    param_4[iVar8 * -10 + 7] = fVar3;
    iVar8 = iVar7;
    if (2 < iVar7) {
      *param_5 = *(byte *)((uint)*(byte *)(iVar9 + 0x28 + *(int *)(param_1 + 0x1e4)) * 0x50 + 0x44 +
                          *(int *)(param_1 + 0x1d4)) >> 3 & 1;
      uVar4 = *(undefined2 *)
               (*(int *)(param_1 + 0x204) +
               (uint)*(byte *)(iVar9 + 0x28 + *(int *)(param_1 + 0x1e4)) * 2);
      _eh_vector_destructor_iterator_(auStack_24,0xc,3,FUN_00407150);
      return uVar4;
    }
  } while( true );
}




/* Function: FUN_0043ac40 */

int __thiscall FUN_0043ac40(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x2ac);
  (**(code **)(*param_2 + 0x14c))(param_2,0);
  (**(code **)(*param_2 + 0x154))(param_2,*(undefined4 *)(param_1 + 0x2b0),0);
  (**(code **)(*param_2 + 0x130))(param_2,**(undefined4 **)(iRam000002ec + 0x28));
  iVar3 = 0;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x200) != 0) {
    iVar7 = 0;
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x1fc);
      iVar2 = *(int *)(iVar4 + 8 + iVar7);
      psVar5 = (short *)(iVar4 + iVar7);
      if (((iVar2 != 0) && (*(int *)(psVar5 + 6) != 0)) &&
         ((*(char *)(iVar1 + 0x27a) != '\0' ||
          ((*(byte *)((uint)*(byte *)(**(int **)(iVar4 + 4 + iVar7) + 0x28) * 0x50 + 0x44 +
                     *(int *)(param_1 + 0x1d4)) & 8) == 0)))) {
        iVar4 = FUN_00410a40(5);
        if (iVar4 == 0) {
          (**(code **)(*param_2 + 0xf4))(param_2,1,0);
        }
        else {
          (**(code **)(iVar4 + 4))(param_2,1);
        }
        iVar4 = FUN_00410a40(4);
        (**(code **)(iVar4 + 4))(param_2,0);
        if (*psVar5 == -0x8000) {
          (**(code **)(*param_2 + 0xf4))(param_2,1,0);
        }
        iVar3 = iVar3 + iVar2;
        (**(code **)(*param_2 + 0x11c))
                  (param_2,4,*(undefined4 *)(psVar5 + 0xc),*(int *)(psVar5 + 0xe) + 1,
                   *(undefined4 *)(psVar5 + 10),iVar2);
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0x24;
    } while (uVar6 < *(uint *)(param_1 + 0x200));
  }
  return iVar3;
}




/* Function: FUN_0043adb0 */

void FUN_0043adb0(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ba62;
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




/* Function: FUN_0043ae30 */

void FUN_0043ae30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    param_3 = param_3 + -8;
    param_4 = param_4 + -8;
    puVar2 = param_3;
    puVar3 = param_4;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  } while (param_3 != param_2);
  *param_1 = param_4;
  return;
}




/* Function: FUN_0043ae70 */

void FUN_0043ae70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    param_3 = param_3 + -0x14;
    param_4 = param_4 + -0x14;
    puVar2 = param_3;
    puVar3 = param_4;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  } while (param_3 != param_2);
  *param_1 = param_4;
  return;
}




/* Function: FUN_0043aeb0 */

undefined4 FUN_0043aeb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0043ae30(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_0043aef0 */

void FUN_0043aef0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 0x14;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 0x14; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}




/* Function: FUN_0043af20 */

undefined4 FUN_0043af20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0043ae70(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_0043af60 */

void FUN_0043af60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 0x14;
  }
  return;
}




/* Function: FUN_0043af90 */

void FUN_0043af90(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = param_3;
      puVar3 = param_1;
      for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = param_1 + 0x14;
  }
  return;
}




/* Function: FUN_0043afc0 */

void __thiscall
FUN_0043afc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00551e30(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_0043aff0 */

void __thiscall
FUN_0043aff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0043af60(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_0043b020 */

int __thiscall FUN_0043b020(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00552f30(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x20 + param_2;
}




/* Function: FUN_0043b050 */

int __thiscall FUN_0043b050(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_0043af90(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x50 + param_2;
}




/* Function: FUN_0043b080 */

void __thiscall FUN_0043b080(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057ba70;
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
      FUN_0043adb0();
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




/* Function: FUN_0043b320 */

void __thiscall FUN_0043b320(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_34 [8];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057ba80;
  local_10 = ExceptionList;
  iVar3 = *(int *)(param_1 + 4);
  local_14 = &stack0xffffffc0;
  puVar6 = local_34;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - iVar3 >> 5;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 5;
    }
    if (0x7ffffffU - iVar5 < param_3) {
      ExceptionList = &local_10;
      FUN_0043adb0();
      ExceptionList = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 5;
    }
    if (uVar2 < iVar5 + param_3) {
      if (0x7ffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar3 >> 5;
      }
      if (uVar2 < iVar5 + param_3) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) - iVar3 >> 5;
        }
        uVar2 = iVar3 + param_3;
      }
      ExceptionList = &local_10;
      iVar3 = FUN_00493c27();
      local_8 = 0;
      uVar4 = FUN_00551e30(*(undefined4 *)(param_1 + 4));
      FUN_00552f30(uVar4);
      FUN_00551e30(param_2);
      pvVar1 = *(void **)(param_1 + 4);
      if (pvVar1 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - (int)pvVar1 >> 5;
      }
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      *(uint *)(param_1 + 0xc) = uVar2 * 0x20 + iVar3;
      *(uint *)(param_1 + 8) = (param_3 + iVar5) * 0x20 + iVar3;
      *(int *)(param_1 + 4) = iVar3;
      ExceptionList = local_10;
      return;
    }
    if ((uint)(*(int *)(param_1 + 8) - param_2 >> 5) < param_3) {
      ExceptionList = &local_10;
      FUN_0043afc0();
      local_8 = 2;
      FUN_0043b020();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x20;
    }
    else {
      ExceptionList = &local_10;
      uVar4 = FUN_0043afc0();
      *(undefined4 *)(param_1 + 8) = uVar4;
      FUN_0043aeb0();
    }
    FUN_00551e00();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_0043b5c0 */

void __thiscall FUN_0043b5c0(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_64 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057ba90;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff90;
  puVar6 = local_64;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(param_1 + 0xc) - iVar3) / 0x50;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 8) - iVar3) / 0x50;
    }
    if (0x3333333U - iVar5 < param_3) {
      ExceptionList = &local_10;
      FUN_0043adb0();
      ExceptionList = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 8) - iVar3) / 0x50;
    }
    if (uVar4 < iVar5 + param_3) {
      if (0x3333333 - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x50;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xffffff90;
      if (uVar4 < iVar3 + param_3) {
        ExceptionList = &local_10;
        local_14 = &stack0xffffff90;
        iVar3 = FUN_0043a090();
        uVar4 = iVar3 + param_3;
      }
      iVar3 = FUN_00493c27();
      local_8 = 0;
      uVar2 = FUN_0043af60(*(undefined4 *)(param_1 + 4));
      FUN_0043af90(uVar2);
      FUN_0043af60(param_2);
      pvVar1 = *(void **)(param_1 + 4);
      if (pvVar1 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*(int *)(param_1 + 8) - (int)pvVar1) / 0x50;
      }
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      *(uint *)(param_1 + 0xc) = uVar4 * 0x50 + iVar3;
      *(uint *)(param_1 + 8) = (param_3 + iVar5) * 0x50 + iVar3;
      *(int *)(param_1 + 4) = iVar3;
      ExceptionList = local_10;
      return;
    }
    if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x50) < param_3) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffff90;
      FUN_0043aff0();
      local_8 = 2;
      FUN_0043b050();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x50;
    }
    else {
      ExceptionList = &local_10;
      local_14 = &stack0xffffff90;
      uVar2 = FUN_0043aff0();
      *(undefined4 *)(param_1 + 8) = uVar2;
      FUN_0043af20();
    }
    FUN_0043aef0();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_0043b8c0 */

void __thiscall FUN_0043b8c0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x50 != 0) {
      iVar1 = (param_3 - iVar1) / 0x50;
      goto LAB_0043b907;
    }
  }
  iVar1 = 0;
LAB_0043b907:
  FUN_0043b5c0(param_3,1,param_4);
  *param_2 = iVar1 * 0x50 + *(int *)(param_1 + 4);
  return;
}




/* Function: FUN_0043b980 */

void __fastcall FUN_0043b980(int param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}




/* Function: FUN_0043b9c0 */

void __thiscall FUN_0043b9c0(int param_1,undefined4 param_2)

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
  FUN_0043b080(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_0043ba30 */

void __thiscall FUN_0043ba30(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x50) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x50))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_0043af90(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x50;
    return;
  }
  FUN_0043b8c0(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_0043bec0 */

void __thiscall FUN_0043bec0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  short *local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  short *local_8;
  uint local_4;
  
  iVar7 = param_3;
  local_c = (uint)*(byte *)(param_2 * 0x2c + 0x28 + *(int *)(param_1 + 0x1e4));
  local_10 = param_1;
  if (*(void **)(param_3 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_3 + 4));
  }
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0xc) = 0;
  FUN_0043b9c0(&param_2);
LAB_0043bf10:
  local_4 = *(uint *)(param_1 + 0x1e8);
  local_18 = 0;
  if (local_4 == 0) {
    return;
  }
  local_8 = *(short **)(param_1 + 0x1e4);
  local_1c = local_8;
  do {
    if ((*(byte *)(local_1c + 0x14) == local_c) && (local_18 != param_2)) {
      iVar1 = *(int *)(iVar7 + 4);
      for (uVar4 = 0; (iVar1 != 0 && (uVar4 < (uint)(*(int *)(iVar7 + 8) - iVar1 >> 2)));
          uVar4 = uVar4 + 1) {
        if (*(uint *)(iVar1 + uVar4 * 4) == local_18) goto LAB_0043bfec;
      }
      bVar2 = false;
      for (local_14 = 0; (iVar1 != 0 && (local_14 < (uint)(*(int *)(iVar7 + 8) - iVar1 >> 2)));
          local_14 = local_14 + 1) {
        psVar6 = local_8 + *(int *)(iVar1 + local_14 * 4) * 0x16;
        iVar7 = 3;
        do {
          iVar3 = 0;
          psVar5 = local_1c;
          do {
            if (*psVar6 == *psVar5) {
              bVar2 = true;
              break;
            }
            iVar3 = iVar3 + 1;
            psVar5 = psVar5 + 1;
          } while (iVar3 < 3);
          psVar6 = psVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar7 = param_3;
      }
      if (bVar2) break;
    }
LAB_0043bfec:
    local_18 = local_18 + 1;
    local_1c = local_1c + 0x16;
    if (local_4 <= local_18) {
      return;
    }
  } while( true );
  iVar1 = *(int *)(iVar7 + 4);
  if ((iVar1 == 0) ||
     ((uint)(*(int *)(iVar7 + 0xc) - iVar1 >> 2) <= (uint)(*(int *)(iVar7 + 8) - iVar1 >> 2))) {
    FUN_0043b080(*(undefined4 *)(iVar7 + 8),1,&local_18);
    param_1 = local_10;
  }
  else {
    iVar1 = *(int *)(iVar7 + 8);
    FUN_004520c0(iVar1,1,&local_18,iVar7,param_2);
    *(int *)(iVar7 + 8) = iVar1 + 4;
    param_1 = local_10;
  }
  goto LAB_0043bf10;
}




/* Function: FUN_0043f810 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
FUN_0043f810(int param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            undefined4 param_3)

{
  char *pcVar1;
  uint unaff_retaddr;
  char local_204 [512];
  uint local_4;
  
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  pcVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(param_1 + 0x250));
  _snprintf(local_204,0x200,"Material[%s] - [%u]",pcVar1,param_3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_2,local_204);
  return param_2;
}




/* Function: FUN_0043f890 */

undefined4 __fastcall FUN_0043f890(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c0);
}




/* Function: FUN_0043f8a0 */

undefined4 __fastcall FUN_0043f8a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1bc);
}




/* Function: FUN_0043f8b0 */

undefined4 __fastcall FUN_0043f8b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1e8);
}




/* Function: FUN_0043f8c0 */

undefined4 __fastcall FUN_0043f8c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1e4);
}




/* Function: FUN_0043f8d0 */

undefined4 __fastcall FUN_0043f8d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1d4);
}




/* Function: FUN_0043f8e0 */

undefined4 __fastcall FUN_0043f8e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1d8);
}




/* Function: FUN_0043f8f0 */

undefined4 __fastcall FUN_0043f8f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x200);
}




/* Function: FUN_0043f900 */

undefined4 __fastcall FUN_0043f900(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1f0);
}




/* Function: FUN_0043f910 */

undefined4 __fastcall FUN_0043f910(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1ec);
}




/* Function: FUN_0043f920 */

int __fastcall FUN_0043f920(int param_1)

{
  return param_1 + 0x250;
}




/* Function: FUN_0043f930 */

int __fastcall FUN_0043f930(int param_1)

{
  return param_1 + 0x20c;
}




/* Function: FUN_0043f940 */

int __fastcall FUN_0043f940(int param_1)

{
  return param_1 + 0x218;
}




/* Function: FUN_0043f950 */

int __fastcall FUN_0043f950(int param_1)

{
  return param_1 + 0x224;
}




/* Function: FUN_0043f960 */

float10 __fastcall FUN_0043f960(int param_1)

{
  return (float10)*(float *)(param_1 + 0x230);
}




/* Function: FUN_0043f970 */

undefined4 __thiscall FUN_0043f970(int *param_1,uint param_2,int *param_3)

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
      iVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1,param_1[1] << 5,param_2 << 5,&param_3,uVar4);
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




/* Function: FUN_0043fa00 */

void FUN_0043fa00(int *param_1)

{
  char cVar1;
  
  param_1 = (int *)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x21);
  while (cVar1 == '\0') {
    param_1 = (int *)*param_1;
    cVar1 = *(char *)((int)param_1 + 0x21);
  }
  return;
}




/* Function: FUN_0043fa20 */

void FUN_0043fa20(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x21);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x21);
  }
  return;
}




/* Function: FUN_0043fa40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043fa40(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  param_3 = _DAT_00583354 / param_3;
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  *param_1 = param_3 * *param_2;
  param_1[1] = param_3 * fVar2;
  param_1[2] = param_3 * fVar1;
  return;
}




/* Function: FUN_0043fa70 */

void __fastcall FUN_0043fa70(int param_1)

{
  operator_delete__(*(void **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}




/* Function: FUN_0043fab0 */

void __fastcall FUN_0043fab0(undefined2 *param_1)

{
  operator_delete__(*(void **)(param_1 + 2));
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0xffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}




/* Function: FUN_0043fae0 */

void __thiscall FUN_0043fae0(int param_1,char param_2)

{
  int *piVar1;
  
  if ((*(char *)(param_1 + 0x2a6) != param_2) &&
     (*(char *)(param_1 + 0x2a6) = param_2, param_2 == '\0')) {
    piVar1 = *(int **)(param_1 + 0x2b0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x2b0) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x2ac);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x2ac) = 0;
    }
  }
  return;
}




/* Function: FUN_0043fb40 */

void __thiscall FUN_0043fb40(int param_1,char param_2)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x2a7) != param_2) {
    *(char *)(param_1 + 0x2a7) = param_2;
    piVar1 = *(int **)(param_1 + 0x2b0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x2b0) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x2ac);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x2ac) = 0;
    }
  }
  return;
}




/* Function: FUN_0043fbe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0043fbe0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  fVar8 = std::numeric_limits<float>::max();
  *(float *)(param_1 + 0x214) = fVar8;
  *(float *)(param_1 + 0x210) = fVar8;
  pfVar1 = (float *)(param_1 + 0x20c);
  *pfVar1 = fVar8;
  fVar8 = std::numeric_limits<float>::max();
  fVar8 = -fVar8;
  pfVar2 = (float *)(param_1 + 0x218);
  *(float *)(param_1 + 0x220) = fVar8;
  uVar7 = 0;
  *(float *)(param_1 + 0x21c) = fVar8;
  *pfVar2 = fVar8;
  if (*(int *)(param_1 + 0x1c0) != 0) {
    iVar6 = 0;
    do {
      if (*pfVar2 < *(float *)(iVar6 + *(int *)(param_1 + 0x1bc))) {
        *pfVar2 = *(float *)(iVar6 + *(int *)(param_1 + 0x1bc));
      }
      if (*(float *)(iVar6 + *(int *)(param_1 + 0x1bc)) < *pfVar1) {
        *pfVar1 = *(float *)(iVar6 + *(int *)(param_1 + 0x1bc));
      }
      if (*(float *)(param_1 + 0x21c) < *(float *)(iVar6 + 4 + *(int *)(param_1 + 0x1bc))) {
        *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(iVar6 + 4 + *(int *)(param_1 + 0x1bc));
      }
      if (*(float *)(iVar6 + 4 + *(int *)(param_1 + 0x1bc)) < *(float *)(param_1 + 0x210)) {
        *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(iVar6 + 4 + *(int *)(param_1 + 0x1bc));
      }
      if (*(float *)(param_1 + 0x220) < *(float *)(iVar6 + 8 + *(int *)(param_1 + 0x1bc))) {
        *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(iVar6 + 8 + *(int *)(param_1 + 0x1bc));
      }
      if (*(float *)(iVar6 + 8 + *(int *)(param_1 + 0x1bc)) < *(float *)(param_1 + 0x214)) {
        *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(iVar6 + 8 + *(int *)(param_1 + 0x1bc));
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 0xc;
    } while (uVar7 < *(uint *)(param_1 + 0x1c0));
  }
  pfVar3 = (float *)FUN_0041d580(local_18,pfVar2,pfVar1);
  *(float *)(param_1 + 0x230) =
       SQRT(pfVar3[2] * pfVar3[2] + pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3) * _DAT_00583340;
  uVar4 = FUN_0041d550(local_18,pfVar2,pfVar1,0x40000000);
  puVar5 = (undefined4 *)FUN_0043fa40(local_c,uVar4);
  if (puVar5 != (undefined4 *)(param_1 + 0x224)) {
    *(undefined4 *)(param_1 + 0x224) = *puVar5;
    *(undefined4 *)(param_1 + 0x228) = puVar5[1];
    *(undefined4 *)(param_1 + 0x22c) = puVar5[2];
  }
  return 1;
}




/* Function: FUN_0043fd90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0043fd90(int param_1,float param_2,int param_3,int param_4,ushort param_5,int *param_6)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;
  int *piVar10;
  ushort uVar11;
  
  if ((((float)_DAT_00588810 <= ABS(param_2 - *(float *)(param_3 + 0x88))) ||
      (*(int *)(param_3 + 0x84) == 0)) || (*(int *)(*(int *)(param_3 + 0x250) + param_4 * 4) == 0))
  {
    iVar7 = *(int *)(param_1 + 0x1fc) + param_4 * 0x24;
    iVar1 = *(int *)(iVar7 + 4);
    iVar7 = *(int *)(iVar7 + 8);
    param_4 = param_4 * 4;
    piVar10 = (int *)(*(int *)(param_3 + 0x248) + param_4);
    *(undefined4 *)(param_4 + *(int *)(param_3 + 0x250)) = 0;
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = *(ushort **)(iVar1 + *param_6 * 4);
      uVar8 = *puVar2;
      if (param_5 <= uVar8) {
        do {
          uVar8 = *(ushort *)(*(int *)(param_1 + 0x1dc) + (uint)uVar8 * 2);
        } while (param_5 <= uVar8);
      }
      uVar11 = puVar2[1];
      if (param_5 <= uVar11) {
        do {
          uVar11 = *(ushort *)(*(int *)(param_1 + 0x1dc) + (uint)uVar11 * 2);
        } while (param_5 <= uVar11);
      }
      uVar9 = puVar2[2];
      if (param_5 <= uVar9) {
        do {
          uVar9 = *(ushort *)(*(int *)(param_1 + 0x1dc) + (uint)uVar9 * 2);
        } while (param_5 <= uVar9);
      }
      if (((uVar8 != uVar11) && (uVar11 != uVar9)) && (uVar9 != uVar8)) {
        uVar4 = *(uint *)(param_4 + *(int *)(param_3 + 0x250));
        if (*(uint *)(param_4 + *(int *)(param_3 + 0x24c)) <= uVar4) {
          uVar4 = uVar4 + 0x10 & 0xfffffff0;
          pvVar5 = operator_new(uVar4 * 8,(nothrow_t *)&DAT_005b6164);
          uVar6 = 0;
          if (*(int *)(param_4 + *(int *)(param_3 + 0x24c)) != 0) {
            do {
              iVar3 = *piVar10;
              *(undefined4 *)((int)pvVar5 + uVar6 * 8) = *(undefined4 *)(iVar3 + uVar6 * 8);
              *(undefined4 *)((int)pvVar5 + uVar6 * 8 + 4) = *(undefined4 *)(iVar3 + 4 + uVar6 * 8);
              uVar6 = uVar6 + 1;
            } while (uVar6 < *(uint *)(param_4 + *(int *)(param_3 + 0x24c)));
          }
          operator_delete__((void *)*piVar10);
          *piVar10 = (int)pvVar5;
          *(uint *)(param_4 + *(int *)(param_3 + 0x24c)) = uVar4;
        }
        *(ushort *)(*piVar10 + *(int *)(param_4 + *(int *)(param_3 + 0x250)) * 8) = uVar9;
        *(ushort *)(*piVar10 + 2 + *(int *)(param_4 + *(int *)(param_3 + 0x250)) * 8) = uVar11;
        *(ushort *)(*piVar10 + 4 + *(int *)(param_4 + *(int *)(param_3 + 0x250)) * 8) = uVar8;
        *(short *)(*piVar10 + 6 + *(int *)(param_4 + *(int *)(param_3 + 0x250)) * 8) =
             (short)*param_6;
        *(int *)(*(int *)(param_3 + 0x250) + param_4) =
             *(int *)(*(int *)(param_3 + 0x250) + param_4) + 1;
      }
      *param_6 = *param_6 + 1;
    }
  }
  return;
}




/* Function: FUN_00440000 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
FUN_00440000(int param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            undefined4 param_3,int *param_4)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  char cVar10;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar11;
  undefined4 uVar12;
  int *piVar13;
  float *pfVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **ppbVar18;
  int *piVar19;
  undefined4 *puVar20;
  float *pfVar21;
  uint uVar22;
  int unaff_ESI;
  int **ppiVar23;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar24;
  ushort *puVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_36c;
  undefined4 uStack_368;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_364;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_360;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_35c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_358;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_354;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_350;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_34c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_348;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_344;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_340;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_33c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_338;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_334;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_330;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_32c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_328;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_324;
  undefined4 uStack_320;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_31c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_318;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_314;
  uint uStack_310;
  int *piStack_30c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_308;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_304;
  int **ppiVar29;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar30;
  int iStack_2e4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_2e0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_2dc;
  uint uStack_2d8;
  double dStack_2d4;
  int *piStack_2cc;
  uint uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  float fStack_2bc;
  undefined4 uStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  float fStack_294;
  undefined4 local_290 [5];
  undefined1 auStack_27c [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_25c [40];
  undefined1 auStack_234 [16];
  int *piStack_224;
  uint uStack_220;
  undefined4 uStack_21c;
  float fStack_214;
  undefined4 uStack_210;
  float fStack_20c;
  float fStack_204;
  undefined4 uStack_200;
  undefined4 auStack_1fc [18];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_1b4 [72];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_16c [48];
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_12c [16];
  int iStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_f8;
  float fStack_f4;
  int *piStack_f0;
  int *piStack_e0;
  int *piStack_d4;
  int *piStack_d0;
  int *piStack_c8;
  int *piStack_c0;
  int *piStack_bc;
  int *piStack_b0;
  int *piStack_a4;
  int *piStack_a0;
  int *piStack_98;
  int *piStack_90;
  int *piStack_8c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_80;
  int iStack_7c;
  int *apiStack_74 [4];
  undefined4 uStack_64;
  int *piStack_60;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_5c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_50;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_44;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_40;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_38;
  int iStack_34;
  int iStack_10;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_8;
  
  if (*(char *)(param_1 + 0x2a6) != '\0') {
    pbVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              FUN_0043c080();
    return pbVar11;
  }
  if ((char)param_4[0x7a] != '\0') {
    pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x44006b;
    (**(code **)(*param_4 + 0x88))();
    pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x440072;
    FUN_00547ab0();
    pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x44007a;
    pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_0041caa0();
    pbStack_308 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  &fStack_2b4;
    piStack_30c = (int *)0x440085;
    FUN_0041d580();
    fVar1 = (float)param_4[0x7b] * *(float *)(param_1 + 0x230);
    if (fVar1 * fVar1 < fStack_2b4 * fStack_2b4 + fStack_2b0 * fStack_2b0 + fStack_2ac * fStack_2ac)
    {
      *(undefined1 *)((int)param_4 + 6) = 0;
      *(undefined1 *)((int)param_4 + 0x27d) = 1;
      return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
    }
    *(undefined1 *)((int)param_4 + 0x27d) = 0;
  }
  uVar12 = (**(code **)(*param_4 + 0x88))();
  pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_1 + 0x224);
  pbStack_308 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                local_290;
  piStack_30c = (int *)0x4400ff;
  piVar13 = (int *)FUN_005488cc();
  if (piVar13 != param_4 + 0x96) {
    param_4[0x96] = *piVar13;
    param_4[0x97] = piVar13[1];
    param_4[0x98] = piVar13[2];
  }
  pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                0x440132;
  pfVar14 = (float *)FUN_00547a54();
  fStack_2bc = _DAT_0058887c;
  if (_DAT_0058887c < *pfVar14) {
    fStack_2bc = *pfVar14;
  }
  if (fStack_2bc < pfVar14[1]) {
    fStack_2bc = pfVar14[1];
  }
  if (fStack_2bc < pfVar14[2]) {
    fStack_2bc = pfVar14[2];
  }
  fStack_2bc = fStack_2bc * *(float *)(param_1 + 0x230);
  param_4[0x99] = (int)fStack_2bc;
  pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                param_4[0x98];
  pbStack_308 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                param_4[0x97];
  piStack_30c = (int *)param_4[0x96];
  uStack_310 = 0x44019c;
  FUN_0041ca90();
  uStack_310 = 0x4401a3;
  iVar15 = FUN_0043a0d0();
  if (iVar15 == 2) {
    *(undefined1 *)((int)param_4 + 6) = 0;
    return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  }
  *(undefined1 *)((int)param_4 + 6) = 1;
  if ((char)param_4[0x24] != '\0') {
    pbStack_304 = param_2;
    pbStack_308 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x4401dd;
    FUN_005019e0();
    pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  param_4[0x8c];
    pbStack_308 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  param_4[0x8b];
    piStack_30c = (int *)0x4401f7;
    FUN_00501650();
  }
  pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  pbStack_308 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                0x440201;
  FUN_0041e330();
  pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                0x440210;
  FUN_0041da10();
  uStack_2a8 = 0;
  if (*(char *)((int)param_4 + 0x27b) != '\0') {
    pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x440238;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &fStack_214,"misc\\black");
    pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x44024a;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_12c,".\\textures\\");
    pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  &fStack_214;
    pbStack_308 = abStack_12c;
    piStack_30c = (int *)0x440263;
    FUN_00429a60();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_12c);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &fStack_214);
    pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x44028f;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &fStack_214,"misc\\black");
    pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x44029e;
    uStack_2a8 = FUN_004222d0();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &fStack_214);
  }
  pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                0x4402bd;
  FUN_0041e470();
  pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                0x4402cc;
  FUN_00407260();
  pbStack_308 = abStack_16c;
  piStack_30c = (int *)0x4402db;
  pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                uVar12;
  FUN_0041d7a0();
  pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                0x4402e8;
  FUN_00549650();
  ppiVar29 = apiStack_74 + 3;
  pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  pbStack_308 = param_2;
  fStack_294 = SQRT(fStack_13c * fStack_13c + fStack_138 * fStack_138 + fStack_134 * fStack_134);
  piStack_30c = (int *)0x440334;
  (*(code *)(*(int **)param_2)[0x2d])();
  fVar1 = (float)param_4[0xa0];
  ppiVar23 = apiStack_74;
  piVar13 = &iStack_11c;
  for (iVar15 = 0x1a; iVar15 != 0; iVar15 = iVar15 + -1) {
    *piVar13 = (int)*ppiVar23;
    ppiVar23 = ppiVar23 + 1;
    piVar13 = piVar13 + 1;
  }
  if (fVar1 < _DAT_00583354) {
    if ((float)param_4[0xa0] < _DAT_00582ad8 == ((float)param_4[0xa0] == _DAT_00582ad8)) {
      piStack_30c = (int *)0x440391;
      uVar27 = FUN_004cf110();
    }
    else {
      uVar27 = 0;
    }
  }
  else {
    uVar27 = 0xff;
  }
  if ((float)param_4[0xa1] < _DAT_00583354) {
    if ((float)param_4[0xa1] < _DAT_00582ad8 == ((float)param_4[0xa1] == _DAT_00582ad8)) {
      piStack_30c = (int *)0x4403db;
      uVar22 = FUN_004cf110();
    }
    else {
      uVar22 = 0;
    }
  }
  else {
    uVar22 = 0;
  }
  if ((float)param_4[0xa2] < _DAT_00583354) {
    if ((float)param_4[0xa2] < _DAT_00582ad8 == ((float)param_4[0xa2] == _DAT_00582ad8)) {
      piStack_30c = (int *)0x440425;
      uVar16 = FUN_004cf110();
    }
    else {
      uVar16 = 0;
    }
  }
  else {
    uVar16 = 0;
  }
  uStack_2c8 = ((uVar16 >> 8 | uVar22) >> 8 | uVar27) & 0xff;
  if ((float)param_4[0xa1] < _DAT_00583354) {
    if ((float)param_4[0xa1] < _DAT_00582ad8 == ((float)param_4[0xa1] == _DAT_00582ad8)) {
      piStack_30c = (int *)0x440480;
      uVar27 = FUN_004cf110();
    }
    else {
      uVar27 = 0;
    }
  }
  else {
    uVar27 = 0xff;
  }
  if ((float)param_4[0xa2] < _DAT_00583354) {
    if ((float)param_4[0xa2] < _DAT_00582ad8 == ((float)param_4[0xa2] == _DAT_00582ad8)) {
      piStack_30c = (int *)0x4404ca;
      uVar22 = FUN_004cf110();
    }
    else {
      uVar22 = 0;
    }
  }
  else {
    uVar22 = 0;
  }
  if ((float)param_4[0xa2] < _DAT_00583354) {
    if ((float)param_4[0xa2] < _DAT_00582ad8 == ((float)param_4[0xa2] == _DAT_00582ad8)) {
      piStack_30c = (int *)0x440520;
      uStack_2d8 = FUN_004cf110();
    }
    else {
      uStack_2d8 = 0;
    }
  }
  else {
    uStack_2d8 = 0xff;
  }
  uStack_2d8 = uStack_2d8 & 0xff;
  fStack_118 = (float)_DAT_00588b78 * (float)(int)uStack_2c8;
  piStack_30c = &iStack_11c;
  uStack_310 = 0;
  fStack_f4 = (float)((uVar22 >> 8 | uVar27) & 0xff);
  pbStack_314 = pbStack_8;
  fStack_114 = (float)_DAT_00588b78 * fStack_f4;
  dStack_2d4 = (double)uStack_2d8;
  fStack_110 = (float)uStack_2d8 * (float)_DAT_00588b78;
  fStack_f8 = (float)(int)uStack_2c8 * (float)_DAT_00588b70;
  fStack_f4 = fStack_f4 * (float)_DAT_00588b70;
  piStack_f0 = (int *)((float)uStack_2d8 * (float)_DAT_00588b70);
  pbStack_318 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                0x4405ab;
  (*(code *)(*(int **)pbStack_8)[0x2c])();
  if ((*(char *)(iStack_10 + 0x18ed) != '\0') &&
     ((float)param_4[0x99] + (float)param_4[0x99] < fStack_2ac)) {
    pbStack_318 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x4405d8;
    FUN_0043a0c0();
    pbStack_318 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x4405e4;
    FUN_00407300();
    pbStack_318 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x4405f0;
    FUN_00407300();
    return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
  }
  fStack_2b4 = _DAT_00583354;
  if (_DAT_00582ad8 < fStack_2ac) {
    fStack_2b4 = (*(float *)(param_1 + 0x230) / fStack_2ac) * _DAT_00588c00;
  }
  fStack_2b4 = (float)param_4[0x9a] * fStack_2b4;
  if (_DAT_00583350 <= fStack_2b4) {
    if (_DAT_00583354 < fStack_2b4) {
      fStack_2b4 = 1.0;
    }
  }
  else {
    fStack_2b4 = 0.05;
  }
  dStack_2d4 = (double)CONCAT44((int)((ulonglong)dStack_2d4 >> 0x20),
                                (uint)*(ushort *)(param_1 + 400));
  pbStack_318 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                0x440691;
  fStack_2b0 = (float)FUN_004cf110();
  if ((int)fStack_2b0 < 0x1e) {
    fStack_2b0 = 4.2039e-44;
  }
  pbStack_318 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                param_4;
  pbStack_31c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                iStack_10;
  uStack_320 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               0x4406ab;
  FUN_004610b0();
  uStack_2b8 = 0;
  if ((*(int *)(param_1 + 0x1f8) == 0) || (*(int *)(param_1 + 0x1cc) == 0)) {
    pbStack_318 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  **(undefined4 **)(*(int *)(iStack_10 + 0x2cc) + 0x28);
    pbStack_31c = pbStack_8;
    uStack_320 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 0x441b46;
    iVar15 = (*(code *)(*(int **)pbStack_8)[0x4c])();
    if (iVar15 < 0) {
      uStack_320 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x441b53;
      FUN_0043a0c0();
      uStack_320 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x441b5f;
      FUN_00407300();
      uStack_320 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x441b6b;
      FUN_00407300();
      return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             0xffffffff;
    }
    pbStack_324 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  **(int **)(iStack_10 + 0x2cc);
    uStack_320 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 0x20;
    pbStack_328 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x0;
    pbStack_32c = pbStack_8;
    pbStack_330 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x441b91;
    (*(code *)(*(int **)pbStack_8)[0x53])();
    pbStack_330 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x441b98;
    cVar10 = FUN_0041cb70();
    if (cVar10 == '\0') {
      pbStack_330 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x0;
      pbStack_334 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x89;
      pbStack_338 = pbStack_8;
      pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x441bcb;
      (*(code *)(*(int **)pbStack_8)[0x32])();
    }
    else {
      pbStack_330 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x1;
      pbStack_334 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x89;
      pbStack_338 = pbStack_8;
      pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x441bac;
      (*(code *)(*(int **)pbStack_8)[0x32])();
      pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x1;
      pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x0;
      pbStack_344 = pbStack_8;
      pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x441bb9;
      (*(code *)(*(int **)pbStack_8)[0x2e])();
    }
    pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x441bdc;
    piVar13 = (int *)FUN_004cf110();
    uVar27 = (uint)piVar13 & 0xff;
    pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  ((((int)piVar13 << 8 | uVar27) << 8 | uVar27) << 8 | uVar27);
    pbStack_34c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x3c;
    pbStack_350 = pbStack_8;
    pbStack_354 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x441c04;
    pbStack_304 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  piVar13;
    (*(code *)(*(int **)pbStack_8)[0x32])();
    pbStack_354 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x7;
    pbStack_358 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x19;
    pbStack_35c = pbStack_8;
    pbStack_360 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x441c11;
    (*(code *)(*(int **)pbStack_8)[0x32])();
    pbStack_360 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x1f;
    pbStack_364 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x18;
    uStack_368 = pbStack_8;
    pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x441c1e;
    (*(code *)(*(int **)pbStack_8)[0x32])();
    pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x5;
    (*(code *)(*(int **)pbStack_8)[0x32])(pbStack_8,0x13);
    uVar12 = 6;
    (*(code *)(*(int **)pbStack_8)[0x32])(pbStack_8,0x14,6);
    if ((int)piVar13 < 0xff) {
      (*(code *)(*(int **)pbStack_8)[0x32])(pbStack_8,0x1b,1);
    }
    if ((*(byte *)(param_1 + 0x188) & 1) == 0) {
      pbStack_364 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x0;
      if (*(int *)(param_1 + 0x200) != 0) {
        pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)0x0;
        pbVar11 = pbStack_8;
        do {
          pbStack_360 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          **)(*(int *)(param_1 + 0x1fc) + 4 + (int)pbStack_33c);
          pbStack_350 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)(*(int *)(param_1 + 0x1fc) + (int)pbStack_33c);
          pbStack_358 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)((int)pbStack_364 * 4);
          piVar13 = (int *)(param_4[0x92] + (int)pbStack_358);
          pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x0;
          if (*(int **)(pbStack_350 + 8) != (int *)0x0) {
            if (*(ushort *)pbStack_350 == 0x8000) {
              if (*(char *)((int)param_4 + 0x279) != '\0') {
                FUN_0043fd90(uStack_320,param_4,pbStack_364,pbStack_31c,&pbStack_36c);
                if (*(int *)((int)pbStack_358 + param_4[0x94]) != 0) {
                  FUN_0041e920(*(int *)((int)pbStack_358 + param_4[0x94]));
                  pbStack_338 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x0;
                  pbStack_334 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x3f800000;
                  pbStack_330 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x0;
                  pbStack_35c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x0;
                  pbVar11 = pbStack_80;
                  if (*(int *)((int)pbStack_358 + param_4[0x94]) != 0) {
                    do {
                      pbVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)((int)pbStack_35c * 8);
                      pbStack_328 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)(uint)*(ushort *)(pbVar11 + *piVar13 + 6);
                      iVar15 = FUN_0041cbb0(*(undefined2 *)
                                             (*(int *)(param_1 + 0x204) +
                                             (uint)*(byte *)(*(int *)(pbStack_360 +
                                                                     (int)pbStack_328 * 4) + 0x28) *
                                             2),0,0xffffffff);
                      pbStack_350 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)0x3;
                      piVar19 = (int *)(iVar15 + 8);
                      pbStack_354 = pbVar11;
                      do {
                        pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                       *)(uint)*(ushort *)(pbStack_354 + *piVar13);
                        pbStack_314 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                        **)((int)pbStack_36c * 0x10 + param_4[0x8b]);
                        iVar15 = (int)pbStack_36c * 0x10 + param_4[0x8b];
                        piStack_30c = *(int **)(iVar15 + 8);
                        uStack_310 = *(uint *)(iVar15 + 4);
                        FUN_00548748(auStack_27c);
                        if (((char)param_4[0x9d] != '\0') &&
                           (ppbVar18 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                        **)FUN_00548964(&uStack_2a4,
                                                        param_4[0x90] + (int)pbStack_36c * 0xc,
                                                        &pbStack_308), ppbVar18 != &pbStack_338)) {
                          pbStack_338 = *ppbVar18;
                          pbStack_334 = ppbVar18[1];
                          pbStack_330 = ppbVar18[2];
                        }
                        piVar19[-2] = (int)pbStack_314;
                        *piVar19 = (int)piStack_30c;
                        piVar19[1] = (int)pbStack_338;
                        piVar19[-1] = uStack_310;
                        piVar19[3] = (int)pbStack_330;
                        piVar19[2] = (int)pbStack_334;
                        pfVar14 = (float *)(*(int *)(param_1 + 0x1bc) + (int)pbStack_36c * 0xc);
                        iVar15 = *(int *)(pbStack_360 + (int)pbStack_328 * 4);
                        fVar1 = *(float *)(iVar15 + 0x1c);
                        fVar3 = pfVar14[1];
                        pbStack_354 = pbStack_354 + 2;
                        fVar4 = *(float *)(iVar15 + 0x18);
                        fVar5 = *pfVar14;
                        fVar6 = *(float *)(iVar15 + 0x20);
                        fVar7 = pfVar14[2];
                        fVar8 = *(float *)(iVar15 + 0x24);
                        pbStack_350 = pbStack_350 + -1;
                        piVar19[4] = (int)(*(float *)(iVar15 + 0x10) * pfVar14[2] +
                                           *(float *)(iVar15 + 8) * *pfVar14 +
                                           *(float *)(iVar15 + 0xc) * pfVar14[1] +
                                          *(float *)(iVar15 + 0x14));
                        piVar19[5] = (int)-(fVar6 * fVar7 + fVar4 * fVar5 + fVar1 * fVar3 + fVar8);
                        piVar19 = piVar19 + 10;
                      } while (pbStack_350 !=
                               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                *)0x0);
                      FUN_0041eac0();
                      pbStack_35c = pbStack_35c + 1;
                      pbVar11 = pbStack_80;
                    } while (pbStack_35c <
                             *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               **)((int)pbStack_358 + param_4[0x94]));
                  }
                }
              }
            }
            else {
              FUN_0043fd90(uStack_320,param_4,pbStack_364,pbStack_31c,&pbStack_36c);
              if (*(int *)((int)pbStack_358 + param_4[0x94]) != 0) {
                FUN_004200d0(pbVar11,*(undefined2 *)
                                      (*(int *)(param_1 + 0x204) + (uint)*(ushort *)pbStack_350 * 2)
                             ,1,0,0);
                if (pbStack_32c !=
                    (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x0) {
                  (**(code **)(pbStack_32c + 4))(pbVar11,0);
                }
                if ((*(int **)(pbStack_350 + 0x10) != (int *)0x0) &&
                   (pbStack_350 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)FUN_00410a40(6),
                   pbStack_350 !=
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x0)) {
                  pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x0;
                  (*(code *)(*(int **)pbVar11)[0x3c])(pbVar11,0,&pbStack_36c);
                  (*(code *)(*(int **)pbVar11)[0x3d])(pbVar11,1,uVar12);
                  (**(code **)(uStack_368 + 4))(pbVar11,0);
                  (*(code *)(*(int **)pbVar11)[0x32])(pbVar11,0x3c,param_4[0x8d]);
                  FUN_00461690(pbVar11);
                }
                pbStack_328 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                **)((int)pbStack_358 + param_4[0x94]);
                pbStack_35c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x0;
                do {
                  pbStack_36c = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                  **)(iStack_7c + 0x2cc);
                  pbVar11 = pbStack_328;
                  if (*(int **)(pbStack_36c + 0x24) < (int *)((int)pbStack_328 * 3)) {
                    pbVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)((uint)*(int **)(pbStack_36c + 0x24) / 3);
                  }
                  pbStack_328 = pbStack_328 + -(int)pbVar11;
                  pbStack_350 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x0;
                  pbStack_354 = pbVar11;
                  pbStack_34c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)FUN_0043f970((int)pbVar11 * 3,&pbStack_350);
                  if (pbVar11 !=
                      (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)0x0) {
                    iVar15 = (int)pbStack_35c * 8;
                    piVar19 = (int *)((int)pbStack_34c + 0x28);
                    pbStack_36c = pbVar11;
                    do {
                      uVar27 = (uint)*(ushort *)(*piVar13 + 6 + (int)pbStack_35c * 8);
                      uVar22 = (uint)*(ushort *)(iVar15 + *piVar13);
                      iVar26 = uVar22 * 0x10;
                      piVar19[-10] = *(int *)(iVar26 + param_4[0x8b]);
                      piVar19[-9] = *(int *)(param_4[0x8b] + 4 + iVar26);
                      piVar19[-8] = *(int *)(param_4[0x8b] + 8 + iVar26);
                      piVar19[-6] = 0x3f800000;
                      piVar19[-7] = 0;
                      piVar19[-5] = 0;
                      pfVar14 = (float *)(*(int *)(param_1 + 0x1bc) + uVar22 * 0xc);
                      iVar26 = *(int *)(pbStack_360 + uVar27 * 4);
                      fVar1 = *(float *)(iVar26 + 0x1c);
                      fVar3 = pfVar14[1];
                      fVar4 = *(float *)(iVar26 + 0x18);
                      fVar5 = *pfVar14;
                      fVar6 = *(float *)(iVar26 + 0x20);
                      fVar7 = pfVar14[2];
                      fVar8 = *(float *)(iVar26 + 0x24);
                      piVar19[-4] = (int)(*(float *)(iVar26 + 0x10) * pfVar14[2] +
                                          *(float *)(iVar26 + 8) * *pfVar14 +
                                          *(float *)(iVar26 + 0xc) * pfVar14[1] +
                                         *(float *)(iVar26 + 0x14));
                      piVar19[-3] = (int)-(fVar6 * fVar7 + fVar4 * fVar5 + fVar1 * fVar3 + fVar8);
                      uVar22 = (uint)*(ushort *)(iVar15 + 2 + *piVar13);
                      iVar26 = uVar22 * 0x10;
                      piVar19[-2] = *(int *)(iVar26 + param_4[0x8b]);
                      piVar19[-1] = *(int *)(param_4[0x8b] + 4 + iVar26);
                      *piVar19 = *(int *)(param_4[0x8b] + 8 + iVar26);
                      piVar19[1] = 0;
                      piVar19[3] = 0;
                      piVar19[2] = 0x3f800000;
                      pfVar14 = (float *)(*(int *)(param_1 + 0x1bc) + uVar22 * 0xc);
                      iVar26 = *(int *)(pbStack_360 + uVar27 * 4);
                      fVar1 = *(float *)(iVar26 + 0x1c);
                      fVar3 = pfVar14[1];
                      fVar4 = *(float *)(iVar26 + 0x18);
                      fVar5 = *pfVar14;
                      fVar6 = *(float *)(iVar26 + 0x20);
                      fVar7 = pfVar14[2];
                      fVar8 = *(float *)(iVar26 + 0x24);
                      piVar19[4] = (int)(*(float *)(iVar26 + 0x10) * pfVar14[2] +
                                         *(float *)(iVar26 + 8) * *pfVar14 +
                                         *(float *)(iVar26 + 0xc) * pfVar14[1] +
                                        *(float *)(iVar26 + 0x14));
                      piVar19[5] = (int)-(fVar6 * fVar7 + fVar4 * fVar5 + fVar1 * fVar3 + fVar8);
                      pbStack_358 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)(uint)*(ushort *)(iVar15 + 4 + *piVar13);
                      iVar26 = (int)pbStack_358 * 0x10;
                      piVar19[6] = *(int *)(iVar26 + param_4[0x8b]);
                      piVar19[7] = *(int *)(param_4[0x8b] + 4 + iVar26);
                      piVar19[8] = *(int *)(param_4[0x8b] + 8 + iVar26);
                      piVar19[10] = 0x3f800000;
                      piVar19[9] = 0;
                      piVar19[0xb] = 0;
                      pfVar14 = (float *)(*(int *)(param_1 + 0x1bc) + (int)pbStack_358 * 0xc);
                      iVar26 = *(int *)(pbStack_360 + uVar27 * 4);
                      fVar1 = *(float *)(iVar26 + 0x1c);
                      fVar3 = pfVar14[1];
                      fVar4 = *(float *)(iVar26 + 0x18);
                      fVar5 = *pfVar14;
                      fVar6 = *(float *)(iVar26 + 0x20);
                      fVar7 = pfVar14[2];
                      fVar8 = *(float *)(iVar26 + 0x24);
                      pbStack_35c = pbStack_35c + 1;
                      iVar15 = iVar15 + 8;
                      pbStack_36c = pbStack_36c + -1;
                      piVar19[0xc] = (int)(*(float *)(iVar26 + 0x10) * pfVar14[2] +
                                           *(float *)(iVar26 + 8) * *pfVar14 +
                                           *(float *)(iVar26 + 0xc) * pfVar14[1] +
                                          *(float *)(iVar26 + 0x14));
                      piVar19[0xd] = (int)-(fVar6 * fVar7 + fVar4 * fVar5 + fVar1 * fVar3 + fVar8);
                      piVar19 = piVar19 + 0x18;
                    } while (pbStack_36c !=
                             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              *)0x0);
                    pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)0x0;
                  }
                  if (((char)param_4[0x9d] != '\0') &&
                     (pbStack_35c = pbStack_35c + -(int)pbStack_354,
                     pbStack_354 !=
                     (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )0x0)) {
                    iVar15 = (int)pbStack_35c * 8;
                    piVar19 = (int *)((int)pbStack_34c + 0x30);
                    pbStack_35c = pbStack_35c + (int)pbStack_354;
                    pbStack_36c = pbStack_354;
                    do {
                      iVar26 = (uint)*(ushort *)(iVar15 + *piVar13) * 0xc;
                      piVar19[-9] = *(int *)(iVar26 + param_4[0x90]);
                      piVar19[-8] = *(int *)(iVar26 + 4 + param_4[0x90]);
                      piVar19[-7] = *(int *)(iVar26 + 8 + param_4[0x90]);
                      iVar26 = (uint)*(ushort *)(iVar15 + 2 + *piVar13) * 0xc;
                      piVar19[-1] = *(int *)(iVar26 + param_4[0x90]);
                      *piVar19 = *(int *)(iVar26 + 4 + param_4[0x90]);
                      piVar19[1] = *(int *)(iVar26 + 8 + param_4[0x90]);
                      iVar26 = (uint)*(ushort *)(iVar15 + 4 + *piVar13) * 0xc;
                      piVar19[7] = *(int *)(iVar26 + param_4[0x90]);
                      piVar19[8] = *(int *)(iVar26 + 4 + param_4[0x90]);
                      piVar19[9] = *(int *)(iVar26 + 8 + param_4[0x90]);
                      piVar19 = piVar19 + 0x18;
                      iVar15 = iVar15 + 8;
                      pbStack_36c = pbStack_36c + -1;
                    } while (pbStack_36c !=
                             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              *)0x0);
                  }
                  piVar19 = *(int **)(iStack_7c + 0x2cc);
                  if (((char)piVar19[2] != '\0') && (piVar2 = (int *)*piVar19, piVar2 != (int *)0x0)
                     ) {
                    (**(code **)(*piVar2 + 0x30))(piVar2);
                    *(undefined1 *)(piVar19 + 2) = 0;
                  }
                  pbVar11 = pbStack_354;
                  (*(code *)(*(int **)pbStack_80)[0x46])(pbStack_80,4,pbStack_350,pbStack_354);
                  pbStack_324 = pbStack_324 + (int)pbVar11;
                  pbVar11 = pbStack_80;
                } while (pbStack_328 !=
                         (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *)0x0);
              }
            }
          }
          pbStack_364 = pbStack_364 + 1;
          pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)((int)pbStack_33c + 0x24);
        } while (pbStack_364 <
                 *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                  (param_1 + 0x200));
      }
    }
    else {
      uStack_368 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   ((uint)uStack_368 & 0xffffff);
      pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x0;
      if (*(int *)(param_1 + 0x200) != 0) {
        pbStack_354 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)0x0;
        do {
          iVar15 = *(int *)(param_1 + 0x1fc);
          pbStack_35c = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          **)(pbStack_354 + iVar15 + 8);
          piVar13 = *(int **)(pbStack_354 + iVar15 + 4);
          pbVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x0;
          if (pbStack_35c !=
              (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
            if (*(ushort *)(pbStack_354 + iVar15) == 0x8000) {
              if (*(char *)((int)param_4 + 0x279) != '\0') {
                FUN_0041e920(pbStack_35c);
                pbStack_338 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x0;
                pbStack_334 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x3f800000;
                pbStack_330 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x0;
                if (pbStack_35c !=
                    (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x0) {
                  do {
                    pbStack_364 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)FUN_0041cbb0(*(undefined2 *)
                                                   (*(int *)(param_1 + 0x204) +
                                                   (uint)*(byte *)(piVar13[(int)pbVar11] + 0x28) * 2
                                                   ),0,0xffffffff);
                    iVar15 = param_4[0x8b];
                    iVar26 = piVar13[(int)pbVar11];
                    pbStack_34c = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    **)((uint)*(ushort *)(iVar26 + 4) * 0x10 + iVar15);
                    pbStack_348 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    **)((uint)*(ushort *)(iVar26 + 4) * 0x10 + 4 + iVar15);
                    pbStack_344 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    **)((uint)*(ushort *)(iVar26 + 4) * 0x10 + 8 + iVar15);
                    FUN_00548748(auStack_27c);
                    if ((char)param_4[0x9d] != '\0') {
                      uVar12 = FUN_00548964(&uStack_2a4,
                                            param_4[0x90] +
                                            (uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0xc,
                                            &pbStack_308);
                      FUN_0041d430(uVar12);
                    }
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)pbStack_364 = pbStack_34c;
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 4) = pbStack_348;
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 8) = pbStack_344;
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 0xc) = pbStack_338;
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 0x10) = pbStack_334;
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 0x14) = pbStack_330;
                    *(int **)(pbStack_364 + 0x18) = *(int **)(piVar13[(int)pbVar11] + 0x18);
                    *(int **)(pbStack_364 + 0x1c) = (int *)-*(float *)(piVar13[(int)pbVar11] + 0x1c)
                    ;
                    iVar15 = piVar13[(int)pbVar11];
                    iVar26 = param_4[0x8b];
                    pbStack_34c = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    **)((uint)*(ushort *)(iVar15 + 2) * 0x10 + iVar26);
                    pbStack_348 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    **)((uint)*(ushort *)(iVar15 + 2) * 0x10 + 4 + iVar26);
                    pbStack_344 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    **)((uint)*(ushort *)(iVar15 + 2) * 0x10 + 8 + iVar26);
                    FUN_00548748(auStack_27c);
                    if ((char)param_4[0x9d] != '\0') {
                      uVar12 = FUN_00548964(auStack_1fc,
                                            param_4[0x90] +
                                            (uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0xc,
                                            &pbStack_308);
                      FUN_0041d430(uVar12);
                    }
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 0x28) = pbStack_34c;
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 0x2c) = pbStack_348;
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 0x30) = pbStack_344;
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 0x34) = pbStack_338;
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 0x38) = pbStack_334;
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 0x3c) = pbStack_330;
                    *(int **)(pbStack_364 + 0x40) = *(int **)(piVar13[(int)pbVar11] + 0x10);
                    *(int **)(pbStack_364 + 0x44) = (int *)-*(float *)(piVar13[(int)pbVar11] + 0x14)
                    ;
                    puVar25 = (ushort *)piVar13[(int)pbVar11];
                    iVar15 = param_4[0x8b];
                    pbStack_34c = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    **)((uint)*puVar25 * 0x10 + iVar15);
                    pbStack_348 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    **)((uint)*puVar25 * 0x10 + 4 + iVar15);
                    pbStack_344 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    **)((uint)*puVar25 * 0x10 + 8 + iVar15);
                    FUN_00548748(auStack_27c);
                    if ((char)param_4[0x9d] != '\0') {
                      uVar12 = FUN_00548964(&pbStack_314,
                                            param_4[0x90] +
                                            (uint)*(ushort *)piVar13[(int)pbVar11] * 0xc,
                                            &pbStack_308);
                      FUN_0041d430(uVar12);
                    }
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 0x50) = pbStack_34c;
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 0x54) = pbStack_348;
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 0x5c) = pbStack_338;
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 0x58) = pbStack_344;
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 100) = pbStack_330;
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_364 + 0x60) = pbStack_334;
                    *(int **)(pbStack_364 + 0x68) = *(int **)(piVar13[(int)pbVar11] + 8);
                    *(int **)(pbStack_364 + 0x6c) = (int *)-*(float *)(piVar13[(int)pbVar11] + 0xc);
                    FUN_0041eac0();
                    pbVar11 = pbVar11 + 1;
                  } while (pbVar11 < pbStack_35c);
                }
              }
            }
            else {
              pbStack_324 = pbStack_324 + (int)pbStack_35c;
              FUN_004200d0(pbStack_80,
                           *(undefined2 *)
                            (*(int *)(param_1 + 0x204) + (uint)*(ushort *)(pbStack_354 + iVar15) * 2
                            ),1,0,0);
              if (pbStack_32c !=
                  (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x0) {
                (**(code **)(pbStack_32c + 4))(pbStack_80,0);
              }
              if (uStack_368._3_1_ == '\0') {
                if ((*(byte *)((uint)*(byte *)(*piVar13 + 0x28) * 0x50 + 0x44 +
                              *(int *)(param_1 + 0x1d4)) & 8) != 0) {
                  (*(code *)(*(int **)pbStack_80)[0x32])(pbStack_80,0xe,1);
                  (**(code **)(*piStack_8c + 200))(piStack_8c,0x16,1);
                  (**(code **)(*piStack_98 + 200))(piStack_98,0x1b,1);
                  (**(code **)(*piStack_a4 + 200))(piStack_a4,0xf,1);
                  (**(code **)(*piStack_b0 + 200))(piStack_b0,0x19,7);
                  (**(code **)(*piStack_bc + 200))(piStack_bc,0x18,0x1f);
                  (**(code **)(*piStack_c8 + 200))(piStack_c8,0x13,5);
                  (**(code **)(*piStack_d4 + 200))(piStack_d4,0x14,6);
                  uStack_368 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                *)CONCAT13(1,(undefined3)uStack_368);
                }
              }
              else if ((*(byte *)((uint)*(byte *)(*piVar13 + 0x28) * 0x50 + 0x44 +
                                 *(int *)(param_1 + 0x1d4)) & 8) == 0) {
                (*(code *)(*(int **)pbStack_80)[0x32])(pbStack_80,7,1);
                (**(code **)(*piStack_8c + 200))(piStack_8c,0xf,0);
                if ((int)pbStack_358 < 0xff) {
                  (**(code **)(*piStack_98 + 200))(piStack_98,0x1b,0);
                }
                (**(code **)(*piStack_98 + 200))(piStack_98,0x16,3);
                (**(code **)(*piStack_a4 + 200))(piStack_a4,0xe,1);
                uStack_368 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              *)((uint)uStack_368 & 0xffffff);
              }
              do {
                uVar27 = *(uint *)(*(int *)(iStack_7c + 0x2cc) + 0x24);
                pbStack_360 = pbStack_35c;
                if (uVar27 < (uint)((int)pbStack_35c * 3)) {
                  pbStack_360 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)(uVar27 / 3);
                }
                pbStack_350 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x0;
                pbStack_358 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)FUN_0043f970((int)pbStack_360 * 3,&pbStack_350);
                if (*(int *)(param_1 + 0x1c4) == 0) {
                  pbStack_364 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x0;
                  if (3 < (int)pbStack_360) {
                    pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)0x3;
                    puVar20 = (undefined4 *)((int)pbStack_358 + 0x68);
                    do {
                      puVar20[-0x1a] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 + param_4[0x8b]);
                      puVar20[-0x19] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 + 4 + param_4[0x8b]
                            );
                      puVar20[-0x18] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 + 8 + param_4[0x8b]
                            );
                      puVar20[-0x14] = *(undefined4 *)(piVar13[(int)pbVar11] + 0x18);
                      puVar20[-0x13] = -*(float *)(piVar13[(int)pbVar11] + 0x1c);
                      puVar20[-0x12] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 + param_4[0x8b]);
                      puVar20[-0x11] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 + 4 + param_4[0x8b]
                            );
                      puVar20[-0x10] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 + 8 + param_4[0x8b]
                            );
                      puVar20[-0xc] = *(undefined4 *)(piVar13[(int)pbVar11] + 0x10);
                      puVar20[-0xb] = -*(float *)(piVar13[(int)pbVar11] + 0x14);
                      puVar20[-10] = *(undefined4 *)
                                      ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + param_4[0x8b]
                                      );
                      puVar20[-9] = *(undefined4 *)
                                     ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + 4 +
                                     param_4[0x8b]);
                      puVar20[-8] = *(undefined4 *)
                                     ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + 8 +
                                     param_4[0x8b]);
                      puVar20[-4] = *(undefined4 *)(piVar13[(int)pbVar11] + 8);
                      pbVar30 = pbVar11 + 1;
                      puVar20[-3] = -*(float *)(piVar13[(int)pbVar11] + 0xc);
                      puVar20[-2] = *(undefined4 *)
                                     ((uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0x10 +
                                     param_4[0x8b]);
                      puVar20[-1] = *(undefined4 *)
                                     ((uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0x10 + 4 +
                                     param_4[0x8b]);
                      *puVar20 = *(undefined4 *)
                                  ((uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0x10 + 8 +
                                  param_4[0x8b]);
                      puVar20[4] = *(undefined4 *)(piVar13[(int)pbVar30] + 0x18);
                      puVar20[5] = -*(float *)(piVar13[(int)pbVar30] + 0x1c);
                      puVar20[6] = *(undefined4 *)
                                    ((uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0x10 +
                                    param_4[0x8b]);
                      puVar20[7] = *(undefined4 *)
                                    ((uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0x10 + 4 +
                                    param_4[0x8b]);
                      puVar20[8] = *(undefined4 *)
                                    ((uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0x10 + 8 +
                                    param_4[0x8b]);
                      puVar20[0xc] = *(undefined4 *)(piVar13[(int)pbVar30] + 0x10);
                      puVar20[0xd] = -*(float *)(piVar13[(int)pbVar30] + 0x14);
                      puVar20[0xe] = *(undefined4 *)
                                      ((uint)*(ushort *)piVar13[(int)pbVar30] * 0x10 + param_4[0x8b]
                                      );
                      puVar20[0xf] = *(undefined4 *)
                                      ((uint)*(ushort *)piVar13[(int)pbVar30] * 0x10 + 4 +
                                      param_4[0x8b]);
                      puVar20[0x10] =
                           *(undefined4 *)
                            ((uint)*(ushort *)piVar13[(int)pbVar30] * 0x10 + 8 + param_4[0x8b]);
                      puVar20[0x14] = *(undefined4 *)(piVar13[(int)pbVar30] + 8);
                      pbVar24 = pbVar11 + 2;
                      puVar20[0x15] = -*(float *)(piVar13[(int)pbVar30] + 0xc);
                      puVar20[0x16] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0x10 + param_4[0x8b]);
                      puVar20[0x17] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0x10 + 4 + param_4[0x8b]
                            );
                      puVar20[0x18] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0x10 + 8 + param_4[0x8b]
                            );
                      puVar20[0x1c] = *(undefined4 *)(piVar13[(int)pbVar24] + 0x18);
                      puVar20[0x1d] = -*(float *)(piVar13[(int)pbVar24] + 0x1c);
                      puVar20[0x1e] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0x10 + param_4[0x8b]);
                      puVar20[0x1f] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0x10 + 4 + param_4[0x8b]
                            );
                      puVar20[0x20] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0x10 + 8 + param_4[0x8b]
                            );
                      puVar20[0x24] = *(undefined4 *)(piVar13[(int)pbVar24] + 0x10);
                      puVar20[0x25] = -*(float *)(piVar13[(int)pbVar24] + 0x14);
                      puVar20[0x26] =
                           *(undefined4 *)
                            ((uint)*(ushort *)piVar13[(int)pbVar24] * 0x10 + param_4[0x8b]);
                      puVar20[0x27] =
                           *(undefined4 *)
                            ((uint)*(ushort *)piVar13[(int)pbVar24] * 0x10 + 4 + param_4[0x8b]);
                      puVar20[0x28] =
                           *(undefined4 *)
                            ((uint)*(ushort *)piVar13[(int)pbVar24] * 0x10 + 8 + param_4[0x8b]);
                      puVar20[0x2c] = *(undefined4 *)(piVar13[(int)pbVar24] + 8);
                      pbVar30 = pbVar11 + 3;
                      puVar20[0x2d] = -*(float *)(piVar13[(int)pbVar24] + 0xc);
                      puVar20[0x2e] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0x10 + param_4[0x8b]);
                      puVar20[0x2f] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0x10 + 4 + param_4[0x8b]
                            );
                      puVar20[0x30] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0x10 + 8 + param_4[0x8b]
                            );
                      puVar20[0x34] = *(undefined4 *)(piVar13[(int)pbVar30] + 0x18);
                      puVar20[0x35] = -*(float *)(piVar13[(int)pbVar30] + 0x1c);
                      puVar20[0x36] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0x10 + param_4[0x8b]);
                      puVar20[0x37] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0x10 + 4 + param_4[0x8b]
                            );
                      puVar20[0x38] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0x10 + 8 + param_4[0x8b]
                            );
                      puVar20[0x3c] = *(undefined4 *)(piVar13[(int)pbVar30] + 0x10);
                      puVar20[0x3d] = -*(float *)(piVar13[(int)pbVar30] + 0x14);
                      puVar20[0x3e] =
                           *(undefined4 *)
                            ((uint)*(ushort *)piVar13[(int)pbVar30] * 0x10 + param_4[0x8b]);
                      puVar20[0x3f] =
                           *(undefined4 *)
                            ((uint)*(ushort *)piVar13[(int)pbVar30] * 0x10 + 4 + param_4[0x8b]);
                      puVar20[0x40] =
                           *(undefined4 *)
                            ((uint)*(ushort *)piVar13[(int)pbVar30] * 0x10 + 8 + param_4[0x8b]);
                      puVar20[0x44] = *(undefined4 *)(piVar13[(int)pbVar30] + 8);
                      pbStack_36c = pbStack_36c + 4;
                      pbStack_364 = pbStack_364 + 4;
                      puVar20[0x45] = -*(float *)(piVar13[(int)pbVar30] + 0xc);
                      pbVar11 = pbVar11 + 4;
                      puVar20 = puVar20 + 0x60;
                    } while (pbStack_36c < pbStack_360);
                  }
                  if (pbStack_364 < pbStack_360) {
                    pbStack_36c = pbStack_360 + -(int)pbStack_364;
                    puVar20 = (undefined4 *)((int)pbStack_364 * 0x60 + 8 + (int)pbStack_358);
                    do {
                      puVar20[-2] = *(undefined4 *)
                                     ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 +
                                     param_4[0x8b]);
                      puVar20[-1] = *(undefined4 *)
                                     ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 + 4 +
                                     param_4[0x8b]);
                      *puVar20 = *(undefined4 *)
                                  ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 + 8 +
                                  param_4[0x8b]);
                      puVar20[4] = *(undefined4 *)(piVar13[(int)pbVar11] + 0x18);
                      puVar20[5] = -*(float *)(piVar13[(int)pbVar11] + 0x1c);
                      puVar20[6] = *(undefined4 *)
                                    ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 +
                                    param_4[0x8b]);
                      puVar20[7] = *(undefined4 *)
                                    ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 + 4 +
                                    param_4[0x8b]);
                      puVar20[8] = *(undefined4 *)
                                    ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 + 8 +
                                    param_4[0x8b]);
                      puVar20[0xc] = *(undefined4 *)(piVar13[(int)pbVar11] + 0x10);
                      puVar20[0xd] = -*(float *)(piVar13[(int)pbVar11] + 0x14);
                      puVar20[0xe] = *(undefined4 *)
                                      ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + param_4[0x8b]
                                      );
                      puVar20[0xf] = *(undefined4 *)
                                      ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + 4 +
                                      param_4[0x8b]);
                      puVar20[0x10] =
                           *(undefined4 *)
                            ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + 8 + param_4[0x8b]);
                      puVar20[0x14] = *(undefined4 *)(piVar13[(int)pbVar11] + 8);
                      piVar19 = piVar13 + (int)pbVar11;
                      pbVar11 = pbVar11 + 1;
                      pbStack_36c = pbStack_36c + -1;
                      puVar20[0x15] = -*(float *)(*piVar19 + 0xc);
                      puVar20 = puVar20 + 0x18;
                    } while (pbStack_36c !=
                             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              *)0x0);
                  }
                }
                else {
                  pbStack_364 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x0;
                  if (3 < (int)pbStack_360) {
                    pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)0x3;
                    puVar20 = (undefined4 *)((int)pbStack_358 + 0x68);
                    do {
                      puVar20[-0x1a] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 + param_4[0x8b]);
                      puVar20[-0x19] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 + 4 + param_4[0x8b]
                            );
                      puVar20[-0x18] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 + 8 + param_4[0x8b]
                            );
                      puVar20[-0x17] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) +
                            (uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0xc);
                      puVar20[-0x16] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 4 +
                            (uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0xc);
                      puVar20[-0x15] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 8 +
                            (uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0xc);
                      puVar20[-0x14] = *(undefined4 *)(piVar13[(int)pbVar11] + 0x18);
                      puVar20[-0x13] = -*(float *)(piVar13[(int)pbVar11] + 0x1c);
                      puVar20[-0x12] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 + param_4[0x8b]);
                      puVar20[-0x11] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 + 4 + param_4[0x8b]
                            );
                      puVar20[-0x10] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 + 8 + param_4[0x8b]
                            );
                      puVar20[-0xf] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) +
                            (uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0xc);
                      puVar20[-0xe] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 4 +
                            (uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0xc);
                      puVar20[-0xd] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 8 +
                            (uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0xc);
                      puVar20[-0xc] = *(undefined4 *)(piVar13[(int)pbVar11] + 0x10);
                      puVar20[-0xb] = -*(float *)(piVar13[(int)pbVar11] + 0x14);
                      puVar20[-10] = *(undefined4 *)
                                      ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + param_4[0x8b]
                                      );
                      puVar20[-9] = *(undefined4 *)
                                     ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + 4 +
                                     param_4[0x8b]);
                      puVar20[-8] = *(undefined4 *)
                                     ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + 8 +
                                     param_4[0x8b]);
                      puVar20[-7] = *(undefined4 *)
                                     (*(int *)(param_1 + 0x1c4) +
                                     (uint)*(ushort *)piVar13[(int)pbVar11] * 0xc);
                      puVar20[-6] = *(undefined4 *)
                                     (*(int *)(param_1 + 0x1c4) + 4 +
                                     (uint)*(ushort *)piVar13[(int)pbVar11] * 0xc);
                      puVar20[-5] = *(undefined4 *)
                                     (*(int *)(param_1 + 0x1c4) + 8 +
                                     (uint)*(ushort *)piVar13[(int)pbVar11] * 0xc);
                      puVar20[-4] = *(undefined4 *)(piVar13[(int)pbVar11] + 8);
                      pbVar30 = pbVar11 + 1;
                      puVar20[-3] = -*(float *)(piVar13[(int)pbVar11] + 0xc);
                      puVar20[-2] = *(undefined4 *)
                                     ((uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0x10 +
                                     param_4[0x8b]);
                      puVar20[-1] = *(undefined4 *)
                                     ((uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0x10 + 4 +
                                     param_4[0x8b]);
                      *puVar20 = *(undefined4 *)
                                  ((uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0x10 + 8 +
                                  param_4[0x8b]);
                      puVar20[1] = *(undefined4 *)
                                    (*(int *)(param_1 + 0x1c4) +
                                    (uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0xc);
                      puVar20[2] = *(undefined4 *)
                                    (*(int *)(param_1 + 0x1c4) + 4 +
                                    (uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0xc);
                      puVar20[3] = *(undefined4 *)
                                    (*(int *)(param_1 + 0x1c4) + 8 +
                                    (uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0xc);
                      puVar20[4] = *(undefined4 *)(piVar13[(int)pbVar30] + 0x18);
                      puVar20[5] = -*(float *)(piVar13[(int)pbVar30] + 0x1c);
                      puVar20[6] = *(undefined4 *)
                                    ((uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0x10 +
                                    param_4[0x8b]);
                      puVar20[7] = *(undefined4 *)
                                    ((uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0x10 + 4 +
                                    param_4[0x8b]);
                      puVar20[8] = *(undefined4 *)
                                    ((uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0x10 + 8 +
                                    param_4[0x8b]);
                      puVar20[9] = *(undefined4 *)
                                    (*(int *)(param_1 + 0x1c4) +
                                    (uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0xc);
                      puVar20[10] = *(undefined4 *)
                                     (*(int *)(param_1 + 0x1c4) + 4 +
                                     (uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0xc);
                      puVar20[0xb] = *(undefined4 *)
                                      (*(int *)(param_1 + 0x1c4) + 8 +
                                      (uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0xc);
                      puVar20[0xc] = *(undefined4 *)(piVar13[(int)pbVar30] + 0x10);
                      puVar20[0xd] = -*(float *)(piVar13[(int)pbVar30] + 0x14);
                      puVar20[0xe] = *(undefined4 *)
                                      ((uint)*(ushort *)piVar13[(int)pbVar30] * 0x10 + param_4[0x8b]
                                      );
                      puVar20[0xf] = *(undefined4 *)
                                      ((uint)*(ushort *)piVar13[(int)pbVar30] * 0x10 + 4 +
                                      param_4[0x8b]);
                      puVar20[0x10] =
                           *(undefined4 *)
                            ((uint)*(ushort *)piVar13[(int)pbVar30] * 0x10 + 8 + param_4[0x8b]);
                      puVar20[0x11] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) +
                            (uint)*(ushort *)piVar13[(int)pbVar30] * 0xc);
                      puVar20[0x12] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 4 +
                            (uint)*(ushort *)piVar13[(int)pbVar30] * 0xc);
                      puVar20[0x13] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 8 +
                            (uint)*(ushort *)piVar13[(int)pbVar30] * 0xc);
                      puVar20[0x14] = *(undefined4 *)(piVar13[(int)pbVar30] + 8);
                      pbVar24 = pbVar11 + 2;
                      puVar20[0x15] = -*(float *)(piVar13[(int)pbVar30] + 0xc);
                      puVar20[0x16] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0x10 + param_4[0x8b]);
                      puVar20[0x17] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0x10 + 4 + param_4[0x8b]
                            );
                      puVar20[0x18] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0x10 + 8 + param_4[0x8b]
                            );
                      puVar20[0x19] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) +
                            (uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0xc);
                      puVar20[0x1a] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 4 +
                            (uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0xc);
                      puVar20[0x1b] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 8 +
                            (uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0xc);
                      puVar20[0x1c] = *(undefined4 *)(piVar13[(int)pbVar24] + 0x18);
                      puVar20[0x1d] = -*(float *)(piVar13[(int)pbVar24] + 0x1c);
                      puVar20[0x1e] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0x10 + param_4[0x8b]);
                      puVar20[0x1f] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0x10 + 4 + param_4[0x8b]
                            );
                      puVar20[0x20] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0x10 + 8 + param_4[0x8b]
                            );
                      puVar20[0x21] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) +
                            (uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0xc);
                      puVar20[0x22] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 4 +
                            (uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0xc);
                      puVar20[0x23] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 8 +
                            (uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0xc);
                      puVar20[0x24] = *(undefined4 *)(piVar13[(int)pbVar24] + 0x10);
                      puVar20[0x25] = -*(float *)(piVar13[(int)pbVar24] + 0x14);
                      puVar20[0x26] =
                           *(undefined4 *)
                            ((uint)*(ushort *)piVar13[(int)pbVar24] * 0x10 + param_4[0x8b]);
                      puVar20[0x27] =
                           *(undefined4 *)
                            ((uint)*(ushort *)piVar13[(int)pbVar24] * 0x10 + 4 + param_4[0x8b]);
                      puVar20[0x28] =
                           *(undefined4 *)
                            ((uint)*(ushort *)piVar13[(int)pbVar24] * 0x10 + 8 + param_4[0x8b]);
                      puVar20[0x29] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) +
                            (uint)*(ushort *)piVar13[(int)pbVar24] * 0xc);
                      puVar20[0x2a] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 4 +
                            (uint)*(ushort *)piVar13[(int)pbVar24] * 0xc);
                      puVar20[0x2b] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 8 +
                            (uint)*(ushort *)piVar13[(int)pbVar24] * 0xc);
                      puVar20[0x2c] = *(undefined4 *)(piVar13[(int)pbVar24] + 8);
                      pbVar30 = pbVar11 + 3;
                      puVar20[0x2d] = -*(float *)(piVar13[(int)pbVar24] + 0xc);
                      puVar20[0x2e] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0x10 + param_4[0x8b]);
                      puVar20[0x2f] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0x10 + 4 + param_4[0x8b]
                            );
                      puVar20[0x30] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0x10 + 8 + param_4[0x8b]
                            );
                      puVar20[0x31] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) +
                            (uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0xc);
                      puVar20[0x32] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 4 +
                            (uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0xc);
                      puVar20[0x33] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 8 +
                            (uint)*(ushort *)(piVar13[(int)pbVar30] + 4) * 0xc);
                      puVar20[0x34] = *(undefined4 *)(piVar13[(int)pbVar30] + 0x18);
                      puVar20[0x35] = -*(float *)(piVar13[(int)pbVar30] + 0x1c);
                      puVar20[0x36] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0x10 + param_4[0x8b]);
                      puVar20[0x37] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0x10 + 4 + param_4[0x8b]
                            );
                      puVar20[0x38] =
                           *(undefined4 *)
                            ((uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0x10 + 8 + param_4[0x8b]
                            );
                      puVar20[0x39] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) +
                            (uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0xc);
                      puVar20[0x3a] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 4 +
                            (uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0xc);
                      puVar20[0x3b] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 8 +
                            (uint)*(ushort *)(piVar13[(int)pbVar30] + 2) * 0xc);
                      puVar20[0x3c] = *(undefined4 *)(piVar13[(int)pbVar30] + 0x10);
                      puVar20[0x3d] = -*(float *)(piVar13[(int)pbVar30] + 0x14);
                      puVar20[0x3e] =
                           *(undefined4 *)
                            ((uint)*(ushort *)piVar13[(int)pbVar30] * 0x10 + param_4[0x8b]);
                      puVar20[0x3f] =
                           *(undefined4 *)
                            ((uint)*(ushort *)piVar13[(int)pbVar30] * 0x10 + 4 + param_4[0x8b]);
                      puVar20[0x40] =
                           *(undefined4 *)
                            ((uint)*(ushort *)piVar13[(int)pbVar30] * 0x10 + 8 + param_4[0x8b]);
                      puVar20[0x41] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) +
                            (uint)*(ushort *)piVar13[(int)pbVar30] * 0xc);
                      puVar20[0x42] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 4 +
                            (uint)*(ushort *)piVar13[(int)pbVar30] * 0xc);
                      puVar20[0x43] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 8 +
                            (uint)*(ushort *)piVar13[(int)pbVar30] * 0xc);
                      puVar20[0x44] = *(undefined4 *)(piVar13[(int)pbVar30] + 8);
                      pbStack_36c = pbStack_36c + 4;
                      pbStack_364 = pbStack_364 + 4;
                      puVar20[0x45] = -*(float *)(piVar13[(int)pbVar30] + 0xc);
                      pbVar11 = pbVar11 + 4;
                      puVar20 = puVar20 + 0x60;
                    } while (pbStack_36c < pbStack_360);
                  }
                  if (pbStack_364 < pbStack_360) {
                    pbStack_36c = pbStack_360 + -(int)pbStack_364;
                    puVar20 = (undefined4 *)((int)pbStack_364 * 0x60 + 8 + (int)pbStack_358);
                    do {
                      puVar20[-2] = *(undefined4 *)
                                     ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 +
                                     param_4[0x8b]);
                      puVar20[-1] = *(undefined4 *)
                                     ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 + 4 +
                                     param_4[0x8b]);
                      *puVar20 = *(undefined4 *)
                                  ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 + 8 +
                                  param_4[0x8b]);
                      puVar20[1] = *(undefined4 *)
                                    (*(int *)(param_1 + 0x1c4) +
                                    (uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0xc);
                      puVar20[2] = *(undefined4 *)
                                    (*(int *)(param_1 + 0x1c4) + 4 +
                                    (uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0xc);
                      puVar20[3] = *(undefined4 *)
                                    (*(int *)(param_1 + 0x1c4) + 8 +
                                    (uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0xc);
                      puVar20[4] = *(undefined4 *)(piVar13[(int)pbVar11] + 0x18);
                      puVar20[5] = -*(float *)(piVar13[(int)pbVar11] + 0x1c);
                      puVar20[6] = *(undefined4 *)
                                    ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 +
                                    param_4[0x8b]);
                      puVar20[7] = *(undefined4 *)
                                    ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 + 4 +
                                    param_4[0x8b]);
                      puVar20[8] = *(undefined4 *)
                                    ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 + 8 +
                                    param_4[0x8b]);
                      puVar20[9] = *(undefined4 *)
                                    (*(int *)(param_1 + 0x1c4) +
                                    (uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0xc);
                      puVar20[10] = *(undefined4 *)
                                     (*(int *)(param_1 + 0x1c4) + 4 +
                                     (uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0xc);
                      puVar20[0xb] = *(undefined4 *)
                                      (*(int *)(param_1 + 0x1c4) + 8 +
                                      (uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0xc);
                      puVar20[0xc] = *(undefined4 *)(piVar13[(int)pbVar11] + 0x10);
                      puVar20[0xd] = -*(float *)(piVar13[(int)pbVar11] + 0x14);
                      puVar20[0xe] = *(undefined4 *)
                                      ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + param_4[0x8b]
                                      );
                      puVar20[0xf] = *(undefined4 *)
                                      ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + 4 +
                                      param_4[0x8b]);
                      puVar20[0x10] =
                           *(undefined4 *)
                            ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + 8 + param_4[0x8b]);
                      puVar20[0x11] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) +
                            (uint)*(ushort *)piVar13[(int)pbVar11] * 0xc);
                      puVar20[0x12] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 4 +
                            (uint)*(ushort *)piVar13[(int)pbVar11] * 0xc);
                      puVar20[0x13] =
                           *(undefined4 *)
                            (*(int *)(param_1 + 0x1c4) + 8 +
                            (uint)*(ushort *)piVar13[(int)pbVar11] * 0xc);
                      puVar20[0x14] = *(undefined4 *)(piVar13[(int)pbVar11] + 8);
                      piVar19 = piVar13 + (int)pbVar11;
                      pbVar11 = pbVar11 + 1;
                      pbStack_36c = pbStack_36c + -1;
                      puVar20[0x15] = -*(float *)(*piVar19 + 0xc);
                      puVar20 = puVar20 + 0x18;
                    } while (pbStack_36c !=
                             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              *)0x0);
                  }
                }
                if ((char)param_4[0x9d] != '\0') {
                  pbVar11 = pbVar11 + -(int)pbStack_360;
                  pbStack_364 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x0;
                  if (3 < (int)pbStack_360) {
                    piVar19 = piVar13 + (int)(pbVar11 + 2);
                    pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)0x3;
                    puVar20 = (undefined4 *)((int)pbStack_358 + 0x70);
                    do {
                      puVar20[-0x19] =
                           *(undefined4 *)(param_4[0x90] + (uint)*(ushort *)(piVar19[-2] + 4) * 0xc)
                      ;
                      puVar20[-0x18] =
                           *(undefined4 *)
                            (param_4[0x90] + 4 + (uint)*(ushort *)(piVar19[-2] + 4) * 0xc);
                      puVar20[-0x17] =
                           *(undefined4 *)
                            (param_4[0x90] + 8 + (uint)*(ushort *)(piVar19[-2] + 4) * 0xc);
                      puVar20[-0x11] =
                           *(undefined4 *)(param_4[0x90] + (uint)*(ushort *)(piVar19[-2] + 2) * 0xc)
                      ;
                      puVar20[-0x10] =
                           *(undefined4 *)
                            (param_4[0x90] + 4 + (uint)*(ushort *)(piVar19[-2] + 2) * 0xc);
                      puVar20[-0xf] =
                           *(undefined4 *)
                            (param_4[0x90] + 8 + (uint)*(ushort *)(piVar19[-2] + 2) * 0xc);
                      puVar20[-9] = *(undefined4 *)
                                     (param_4[0x90] + (uint)*(ushort *)piVar19[-2] * 0xc);
                      puVar20[-8] = *(undefined4 *)
                                     (param_4[0x90] + 4 + (uint)*(ushort *)piVar19[-2] * 0xc);
                      puVar20[-7] = *(undefined4 *)
                                     (param_4[0x90] + 8 + (uint)*(ushort *)piVar19[-2] * 0xc);
                      puVar20[-1] = *(undefined4 *)
                                     (param_4[0x90] + (uint)*(ushort *)(piVar19[-1] + 4) * 0xc);
                      *puVar20 = *(undefined4 *)
                                  (param_4[0x90] + 4 + (uint)*(ushort *)(piVar19[-1] + 4) * 0xc);
                      puVar20[1] = *(undefined4 *)
                                    (param_4[0x90] + 8 + (uint)*(ushort *)(piVar19[-1] + 4) * 0xc);
                      puVar20[7] = *(undefined4 *)
                                    (param_4[0x90] + (uint)*(ushort *)(piVar19[-1] + 2) * 0xc);
                      puVar20[8] = *(undefined4 *)
                                    (param_4[0x90] + 4 + (uint)*(ushort *)(piVar19[-1] + 2) * 0xc);
                      puVar20[9] = *(undefined4 *)
                                    (param_4[0x90] + 8 + (uint)*(ushort *)(piVar19[-1] + 2) * 0xc);
                      puVar20[0xf] = *(undefined4 *)
                                      (param_4[0x90] + (uint)*(ushort *)piVar19[-1] * 0xc);
                      puVar20[0x10] =
                           *(undefined4 *)(param_4[0x90] + 4 + (uint)*(ushort *)piVar19[-1] * 0xc);
                      puVar20[0x11] =
                           *(undefined4 *)(param_4[0x90] + 8 + (uint)*(ushort *)piVar19[-1] * 0xc);
                      puVar20[0x17] =
                           *(undefined4 *)(param_4[0x90] + (uint)*(ushort *)(*piVar19 + 4) * 0xc);
                      puVar20[0x18] =
                           *(undefined4 *)
                            (param_4[0x90] + 4 + (uint)*(ushort *)(*piVar19 + 4) * 0xc);
                      puVar20[0x19] =
                           *(undefined4 *)
                            (param_4[0x90] + 8 + (uint)*(ushort *)(*piVar19 + 4) * 0xc);
                      puVar20[0x1f] =
                           *(undefined4 *)(param_4[0x90] + (uint)*(ushort *)(*piVar19 + 2) * 0xc);
                      puVar20[0x20] =
                           *(undefined4 *)
                            (param_4[0x90] + 4 + (uint)*(ushort *)(*piVar19 + 2) * 0xc);
                      puVar20[0x21] =
                           *(undefined4 *)
                            (param_4[0x90] + 8 + (uint)*(ushort *)(*piVar19 + 2) * 0xc);
                      puVar20[0x27] =
                           *(undefined4 *)(param_4[0x90] + (uint)*(ushort *)*piVar19 * 0xc);
                      puVar20[0x28] =
                           *(undefined4 *)(param_4[0x90] + 4 + (uint)*(ushort *)*piVar19 * 0xc);
                      puVar20[0x29] =
                           *(undefined4 *)(param_4[0x90] + 8 + (uint)*(ushort *)*piVar19 * 0xc);
                      puVar20[0x2f] =
                           *(undefined4 *)(param_4[0x90] + (uint)*(ushort *)(piVar19[1] + 4) * 0xc);
                      puVar20[0x30] =
                           *(undefined4 *)
                            (param_4[0x90] + 4 + (uint)*(ushort *)(piVar19[1] + 4) * 0xc);
                      puVar20[0x31] =
                           *(undefined4 *)
                            (param_4[0x90] + 8 + (uint)*(ushort *)(piVar19[1] + 4) * 0xc);
                      puVar20[0x37] =
                           *(undefined4 *)(param_4[0x90] + (uint)*(ushort *)(piVar19[1] + 2) * 0xc);
                      puVar20[0x38] =
                           *(undefined4 *)
                            (param_4[0x90] + 4 + (uint)*(ushort *)(piVar19[1] + 2) * 0xc);
                      puVar20[0x39] =
                           *(undefined4 *)
                            (param_4[0x90] + 8 + (uint)*(ushort *)(piVar19[1] + 2) * 0xc);
                      puVar20[0x3f] =
                           *(undefined4 *)(param_4[0x90] + (uint)*(ushort *)piVar19[1] * 0xc);
                      puVar20[0x40] =
                           *(undefined4 *)(param_4[0x90] + 4 + (uint)*(ushort *)piVar19[1] * 0xc);
                      puVar20[0x41] =
                           *(undefined4 *)(param_4[0x90] + 8 + (uint)*(ushort *)piVar19[1] * 0xc);
                      pbStack_364 = pbStack_364 + 4;
                      piVar19 = piVar19 + 4;
                      pbStack_36c = pbStack_36c + 4;
                      puVar20 = puVar20 + 0x60;
                      pbVar11 = pbVar11 + 4;
                    } while (pbStack_36c < pbStack_360);
                  }
                  if (pbStack_364 < pbStack_360) {
                    puVar20 = (undefined4 *)((int)pbStack_364 * 0x60 + 0x10 + (int)pbStack_358);
                    pbStack_36c = pbStack_360 + -(int)pbStack_364;
                    do {
                      puVar20[-1] = *(undefined4 *)
                                     (param_4[0x90] +
                                     (uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0xc);
                      *puVar20 = *(undefined4 *)
                                  (param_4[0x90] + 4 +
                                  (uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0xc);
                      puVar20[1] = *(undefined4 *)
                                    (param_4[0x90] + 8 +
                                    (uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0xc);
                      puVar20[7] = *(undefined4 *)
                                    (param_4[0x90] +
                                    (uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0xc);
                      puVar20[8] = *(undefined4 *)
                                    (param_4[0x90] + 4 +
                                    (uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0xc);
                      puVar20[9] = *(undefined4 *)
                                    (param_4[0x90] + 8 +
                                    (uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0xc);
                      puVar20[0xf] = *(undefined4 *)
                                      (param_4[0x90] + (uint)*(ushort *)piVar13[(int)pbVar11] * 0xc)
                      ;
                      puVar20[0x10] =
                           *(undefined4 *)
                            (param_4[0x90] + 4 + (uint)*(ushort *)piVar13[(int)pbVar11] * 0xc);
                      puVar20[0x11] =
                           *(undefined4 *)
                            (param_4[0x90] + 8 + (uint)*(ushort *)piVar13[(int)pbVar11] * 0xc);
                      pbVar11 = pbVar11 + 1;
                      puVar20 = puVar20 + 0x18;
                      pbStack_36c = pbStack_36c + -1;
                    } while (pbStack_36c !=
                             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              *)0x0);
                  }
                }
                pbStack_36c = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                **)(iStack_7c + 0x2cc);
                if ((pbStack_36c[8] !=
                     (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)
                     0x0) && (piVar19 = *(int **)pbStack_36c, piVar19 != (int *)0x0)) {
                  (**(code **)(*piVar19 + 0x30))(piVar19);
                  pbStack_36c[8] =
                       (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       )0x0;
                }
                (*(code *)(*(int **)pbStack_80)[0x46])(pbStack_80,4,pbStack_350,pbStack_360);
                pbStack_35c = pbStack_35c + -(int)pbStack_360;
              } while (pbStack_35c !=
                       (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)0x0);
            }
          }
          pbVar11 = pbStack_80;
          pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)((int)pbStack_33c + 1);
          pbStack_354 = pbStack_354 + 0x24;
        } while (pbStack_33c < *(uint *)(param_1 + 0x200));
        if (uStack_368._3_1_ != '\0') {
          (*(code *)(*(int **)pbStack_80)[0x32])(pbStack_80,7,1);
          (*(code *)(*(int **)pbVar11)[0x32])(pbVar11,0xf,0);
          (*(code *)(*(int **)pbVar11)[0x32])(pbVar11,0x1b,0);
          (*(code *)(*(int **)pbVar11)[0x32])(pbVar11,0x16,3);
          (*(code *)(*(int **)pbVar11)[0x32])(pbVar11,0xe,1);
        }
      }
    }
    (*(code *)(*(int **)pbStack_80)[0x32])(pbStack_80,0x3c,0xffffffff);
    if (unaff_ESI < 0xff) {
      pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x0;
      pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x1b;
      pbStack_344 = pbStack_38;
      pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x443f1e;
      (*(code *)(*(int **)pbStack_38)[0x32])();
    }
  }
  else {
    pbStack_318 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x0;
    pbStack_31c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x89;
    uStack_320 = pbStack_8;
    pbStack_324 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x4406df;
    (*(code *)(*(int **)pbStack_8)[0x32])();
    pbStack_324 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  **(int **)(*(int *)(iStack_10 + 0x2d0) + 0x28);
    pbStack_328 = pbStack_8;
    pbStack_32c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x4406f4;
    (*(code *)(*(int **)pbStack_8)[0x4c])();
    pbStack_330 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  **(int **)(iStack_10 + 0x2d0);
    pbStack_32c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x28;
    pbStack_334 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x0;
    pbStack_338 = pbStack_8;
    pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x44070b;
    (*(code *)(*(int **)pbStack_8)[0x53])();
    if ((*(byte *)(param_1 + 0x188) & 1) == 0) {
      pbStack_31c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x0;
      if (*(int *)(param_1 + 0x200) != 0) {
        uStack_310 = 0;
        do {
          pbStack_314 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          **)(*(int *)(param_1 + 0x1fc) + 4 + uStack_310);
          puVar25 = (ushort *)(*(int *)(param_1 + 0x1fc) + uStack_310);
          iVar15 = (int)pbStack_31c * 4;
          piStack_30c = (int *)(param_4[0x92] + iVar15);
          if (*(int *)(puVar25 + 4) != 0) {
            pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)&stack0xfffffd08;
            pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)dStack_2d4._0_4_;
            pbStack_344 = pbStack_31c;
            pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)param_4;
            pbStack_34c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)uStack_2d8;
            pbStack_350 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)0x441626;
            FUN_0043fd90();
            pbVar11 = pbStack_38;
            if (*(int *)(iVar15 + param_4[0x94]) != 0) {
              pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)(uint)*(ushort *)(*(int *)(param_1 + 0x204) + (uint)*puVar25 * 2);
              pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x0;
              pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x0;
              pbStack_344 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x1;
              pbStack_34c = pbStack_38;
              pbStack_350 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x441660;
              FUN_004200d0();
              pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x1;
              pbStack_340 = pbVar11;
              pbStack_344 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x44166c;
              (**(code **)(*(int *)(param_1 + 0x1f8) + 4))();
              pbStack_344 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x4;
              pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x1;
              pbStack_34c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x0;
              pbStack_350 = pbVar11;
              pbStack_354 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x44167b;
              (*(code *)(*(int **)pbVar11)[0x3f])();
              pbStack_354 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x2;
              pbStack_358 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x2;
              pbStack_35c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x0;
              pbStack_360 = pbVar11;
              pbStack_364 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x44168a;
              (*(code *)(*(int **)pbVar11)[0x3f])();
              pbStack_364 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x1;
              uStack_368 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            *)0x3;
              pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x0;
              (*(code *)(*(int **)pbVar11)[0x3f])(pbVar11);
              (*(code *)(*(int **)pbVar11)[0x3f])(pbVar11,0,4,4);
              (*(code *)(*(int **)pbVar11)[0x3f])(pbVar11,0,5,2);
              (*(code *)(*(int **)pbVar11)[0x3f])(pbVar11,0,6,1);
              (*(code *)(*(int **)pbVar11)[0x3f])(pbVar11,1,1,4);
              (*(code *)(*(int **)pbVar11)[0x3f])(pbVar11,1,2,2);
              (*(code *)(*(int **)pbVar11)[0x3f])(pbVar11,1,3,1);
              (*(code *)(*(int **)pbVar11)[0x3f])(pbVar11,1,4,2);
              (*(code *)(*(int **)pbVar11)[0x3f])(pbVar11,1,5,1);
              (*(code *)(*(int **)pbVar11)[0x3f])(pbVar11,1,6,1);
              pbStack_328 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              **)(iVar15 + param_4[0x94]);
              iVar26 = 0;
              iVar15 = 0;
              do {
                uVar27 = *(uint *)(*(int *)(iStack_34 + 0x2d0) + 0x24);
                pbVar11 = pbStack_328;
                if (uVar27 < (uint)((int)pbStack_328 * 3)) {
                  pbVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)(uVar27 / 3);
                }
                pbStack_328 = pbStack_328 + -(int)pbVar11;
                pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)&pbStack_324;
                pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)((int)pbVar11 * 3);
                pbStack_324 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x0;
                pbStack_344 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x441786;
                pbStack_308 = pbVar11;
                iStack_2e4 = FUN_0041d0a0();
                if (pbVar11 !=
                    (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x0) {
                  pbStack_318 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)(iVar26 * 8);
                  puVar20 = (undefined4 *)(iStack_2e4 + 0x30);
                  pbStack_2e0 = pbVar11;
                  do {
                    uVar27 = (uint)*(ushort *)(*piStack_30c + 6 + iVar26 * 8);
                    uVar9 = *(ushort *)(pbStack_318 + *piStack_30c);
                    iVar26 = (uint)uVar9 * 0x10;
                    puVar20[-0xc] = *(undefined4 *)(iVar26 + param_4[0x8b]);
                    puVar20[-0xb] = *(undefined4 *)(param_4[0x8b] + 4 + iVar26);
                    puVar20[-10] = *(undefined4 *)(param_4[0x8b] + 8 + iVar26);
                    iVar26 = *(int *)(pbStack_314 + uVar27 * 4);
                    iVar28 = (uint)uVar9 * 0xc;
                    fVar1 = *(float *)(iVar26 + 0x20);
                    pfVar14 = (float *)(*(int *)(param_1 + 0x1bc) + iVar28);
                    fVar3 = pfVar14[2];
                    fVar4 = *(float *)(iVar26 + 0x1c);
                    fVar5 = pfVar14[1];
                    fVar6 = *(float *)(iVar26 + 0x18);
                    fVar7 = *pfVar14;
                    fVar8 = *(float *)(iVar26 + 0x24);
                    puVar20[-6] = *(float *)(iVar26 + 8) * *pfVar14 +
                                  *(float *)(iVar26 + 0xc) * pfVar14[1] +
                                  *(float *)(iVar26 + 0x10) * pfVar14[2] + *(float *)(iVar26 + 0x14)
                    ;
                    puVar20[-5] = -(fVar6 * fVar7 + fVar4 * fVar5 + fVar1 * fVar3 + fVar8);
                    pfVar14 = (float *)(((*(int *)(pbStack_314 + uVar27 * 4) -
                                         *(int *)(param_1 + 0x1e4)) / 0x2c) * 0x20 +
                                       *(int *)(param_1 + 0x1cc));
                    pfVar21 = (float *)(*(int *)(param_1 + 0x1bc) + iVar28);
                    fVar1 = pfVar14[5];
                    fVar3 = pfVar21[1];
                    fVar4 = pfVar14[4];
                    fVar5 = *pfVar21;
                    fVar6 = pfVar14[6];
                    fVar7 = pfVar21[2];
                    fVar8 = pfVar14[7];
                    *(float *)(iStack_2e4 + 0x20) =
                         *pfVar14 * *pfVar21 + pfVar14[2] * pfVar21[2] + pfVar14[1] * pfVar21[1] +
                         pfVar14[3];
                    *(float *)(iStack_2e4 + 0x24) =
                         -(fVar6 * fVar7 + fVar4 * fVar5 + fVar1 * fVar3 + fVar8);
                    uVar9 = *(ushort *)(pbStack_318 + *piStack_30c + 2);
                    iVar26 = (uint)uVar9 * 0x10;
                    puVar20[-2] = *(undefined4 *)(iVar26 + param_4[0x8b]);
                    puVar20[-1] = *(undefined4 *)(param_4[0x8b] + 4 + iVar26);
                    *puVar20 = *(undefined4 *)(param_4[0x8b] + 8 + iVar26);
                    iVar26 = *(int *)(pbStack_314 + uVar27 * 4);
                    iVar28 = (uint)uVar9 * 0xc;
                    fVar1 = *(float *)(iVar26 + 0x20);
                    pfVar14 = (float *)(*(int *)(param_1 + 0x1bc) + iVar28);
                    fVar3 = pfVar14[2];
                    fVar4 = *(float *)(iVar26 + 0x1c);
                    fVar5 = pfVar14[1];
                    fVar6 = *(float *)(iVar26 + 0x18);
                    fVar7 = *pfVar14;
                    fVar8 = *(float *)(iVar26 + 0x24);
                    puVar20[4] = *(float *)(iVar26 + 8) * *pfVar14 +
                                 *(float *)(iVar26 + 0xc) * pfVar14[1] +
                                 *(float *)(iVar26 + 0x10) * pfVar14[2] + *(float *)(iVar26 + 0x14);
                    puVar20[5] = -(fVar6 * fVar7 + fVar4 * fVar5 + fVar1 * fVar3 + fVar8);
                    pfVar14 = (float *)(((*(int *)(pbStack_314 + uVar27 * 4) -
                                         *(int *)(param_1 + 0x1e4)) / 0x2c) * 0x20 +
                                       *(int *)(param_1 + 0x1cc));
                    pfVar21 = (float *)(*(int *)(param_1 + 0x1bc) + iVar28);
                    fVar1 = pfVar14[5];
                    fVar3 = pfVar21[1];
                    fVar4 = pfVar14[4];
                    fVar5 = *pfVar21;
                    fVar6 = pfVar14[6];
                    fVar7 = pfVar21[2];
                    fVar8 = pfVar14[7];
                    *(float *)(iStack_2e4 + 0x48) =
                         *pfVar14 * *pfVar21 + pfVar14[2] * pfVar21[2] + pfVar14[1] * pfVar21[1] +
                         pfVar14[3];
                    *(float *)(iStack_2e4 + 0x4c) =
                         -(fVar6 * fVar7 + fVar4 * fVar5 + fVar1 * fVar3 + fVar8);
                    uVar9 = *(ushort *)(pbStack_318 + *piStack_30c + 4);
                    iVar26 = (uint)uVar9 * 0x10;
                    puVar20[8] = *(undefined4 *)(iVar26 + param_4[0x8b]);
                    puVar20[9] = *(undefined4 *)(param_4[0x8b] + 4 + iVar26);
                    puVar20[10] = *(undefined4 *)(param_4[0x8b] + 8 + iVar26);
                    iVar26 = *(int *)(pbStack_314 + uVar27 * 4);
                    iVar28 = (uint)uVar9 * 0xc;
                    fVar1 = *(float *)(iVar26 + 0x20);
                    pfVar14 = (float *)(*(int *)(param_1 + 0x1bc) + iVar28);
                    fVar3 = pfVar14[2];
                    fVar4 = *(float *)(iVar26 + 0x1c);
                    fVar5 = pfVar14[1];
                    fVar6 = *(float *)(iVar26 + 0x18);
                    fVar7 = *pfVar14;
                    fVar8 = *(float *)(iVar26 + 0x24);
                    puVar20[0xe] = *(float *)(iVar26 + 8) * *pfVar14 +
                                   *(float *)(iVar26 + 0xc) * pfVar14[1] +
                                   *(float *)(iVar26 + 0x10) * pfVar14[2] +
                                   *(float *)(iVar26 + 0x14);
                    puVar20[0xf] = -(fVar6 * fVar7 + fVar4 * fVar5 + fVar1 * fVar3 + fVar8);
                    pfVar14 = (float *)(((*(int *)(pbStack_314 + uVar27 * 4) -
                                         *(int *)(param_1 + 0x1e4)) / 0x2c) * 0x20 +
                                       *(int *)(param_1 + 0x1cc));
                    pfVar21 = (float *)(*(int *)(param_1 + 0x1bc) + iVar28);
                    fVar1 = pfVar14[5];
                    fVar3 = pfVar21[1];
                    fVar4 = pfVar14[4];
                    fVar5 = *pfVar21;
                    fVar6 = pfVar14[6];
                    fVar7 = pfVar21[2];
                    fVar8 = pfVar14[7];
                    *(float *)(iStack_2e4 + 0x70) =
                         *pfVar14 * *pfVar21 + pfVar14[2] * pfVar21[2] + pfVar14[1] * pfVar21[1] +
                         pfVar14[3];
                    puVar20 = puVar20 + 0x1e;
                    *(float *)(iStack_2e4 + 0x74) =
                         -(fVar6 * fVar7 + fVar4 * fVar5 + fVar1 * fVar3 + fVar8);
                    iVar26 = iVar15 + 1;
                    pbStack_318 = pbStack_318 + 8;
                    pbStack_2e0 = pbStack_2e0 + -1;
                    iVar15 = iVar26;
                  } while (pbStack_2e0 !=
                           (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            *)0x0);
                  pbStack_2e0 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x0;
                  pbVar11 = pbStack_308;
                }
                piVar13 = *(int **)(iStack_34 + 0x2d0);
                if (((char)piVar13[2] != '\0') &&
                   (pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)*piVar13,
                   pbStack_33c !=
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x0)) {
                  pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x441ad4;
                  (**(code **)(*(int *)pbStack_33c + 0x30))();
                  *(undefined1 *)(piVar13 + 2) = 0;
                }
                pbStack_340 = pbStack_324;
                pbStack_344 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x4;
                pbStack_348 = pbStack_38;
                pbStack_34c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x441af4;
                pbStack_33c = pbVar11;
                (*(code *)(*(int **)pbStack_38)[0x46])();
                pbStack_2dc = pbStack_2dc + (int)pbVar11;
              } while (pbStack_328 !=
                       (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)0x0);
            }
          }
          pbStack_31c = pbStack_31c + 1;
          uStack_310 = uStack_310 + 0x24;
        } while (pbStack_31c <
                 *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                  (param_1 + 0x200));
      }
    }
    else {
      uStack_320 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   ((uint)uStack_320 & 0xffffff);
      uStack_310 = 0;
      if (*(int *)(param_1 + 0x200) != 0) {
        piStack_30c = (int *)0x0;
        do {
          iVar15 = *(int *)(param_1 + 0x1fc);
          pbStack_328 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          **)(iVar15 + 8 + (int)piStack_30c);
          piVar13 = *(int **)(iVar15 + 4 + (int)piStack_30c);
          pbVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x0;
          if (pbStack_328 !=
              (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
            if (*(ushort *)(iVar15 + (int)piStack_30c) == 0x8000) {
              if (*(char *)((int)param_4 + 0x279) != '\0') {
                pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x44078a;
                pbStack_33c = pbStack_328;
                FUN_0041e920();
                if (pbStack_328 !=
                    (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x0) {
                  do {
                    pbStack_344 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)(uint)*(ushort *)
                                            (*(int *)(param_1 + 0x204) +
                                            (uint)*(byte *)(piVar13[(int)pbVar11] + 0x28) * 2);
                    pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)0xffffffff;
                    pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)0x0;
                    pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)0x4407d4;
                    pbStack_31c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)FUN_0041cbb0();
                    iVar15 = param_4[0x8b];
                    iVar26 = piVar13[(int)pbVar11];
                    pbStack_304 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    **)((uint)*(ushort *)(iVar26 + 4) * 0x10 + iVar15);
                    piVar19 = *(int **)((uint)*(ushort *)(iVar26 + 4) * 0x10 + 4 + iVar15);
                    piVar2 = *(int **)((uint)*(ushort *)(iVar26 + 4) * 0x10 + 8 + iVar15);
                    pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)auStack_234;
                    pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)0x440836;
                    FUN_00548748();
                    if ((char)param_4[0x9d] != '\0') {
                      pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)&uStack_2c0;
                      pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)(param_4[0x90] +
                                       (uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0xc);
                      pbStack_344 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)&piStack_2cc;
                      pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)0x440863;
                      pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)FUN_00548964();
                      pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)0x440870;
                      FUN_0041d430();
                    }
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)pbStack_31c = pbStack_304;
                    *(int **)(pbStack_31c + 4) = piVar19;
                    *(int **)(pbStack_31c + 8) = piVar2;
                    *(int **)(pbStack_31c + 0xc) = (int *)0x0;
                    *(int **)(pbStack_31c + 0x10) = (int *)0x3f800000;
                    *(int **)(pbStack_31c + 0x14) = (int *)0x0;
                    *(int **)(pbStack_31c + 0x18) = *(int **)(piVar13[(int)pbVar11] + 0x18);
                    *(int **)(pbStack_31c + 0x1c) = (int *)-*(float *)(piVar13[(int)pbVar11] + 0x1c)
                    ;
                    iVar15 = piVar13[(int)pbVar11];
                    iVar26 = param_4[0x8b];
                    pbStack_304 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    **)((uint)*(ushort *)(iVar15 + 2) * 0x10 + iVar26);
                    piVar19 = *(int **)((uint)*(ushort *)(iVar15 + 2) * 0x10 + 4 + iVar26);
                    piVar2 = *(int **)((uint)*(ushort *)(iVar15 + 2) * 0x10 + 8 + iVar26);
                    pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)auStack_234;
                    pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)0x4408f7;
                    FUN_00548748();
                    if ((char)param_4[0x9d] != '\0') {
                      pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)&uStack_2c0;
                      pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)(param_4[0x90] +
                                       (uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0xc);
                      pbStack_344 = abStack_1b4;
                      pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)0x440927;
                      pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)FUN_00548964();
                      pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)0x440934;
                      FUN_0041d430();
                    }
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_31c + 0x28) = pbStack_304;
                    *(int **)(pbStack_31c + 0x2c) = piVar19;
                    *(int **)(pbStack_31c + 0x30) = piVar2;
                    *(int **)(pbStack_31c + 0x34) = (int *)0x0;
                    *(int **)(pbStack_31c + 0x38) = (int *)0x3f800000;
                    *(int **)(pbStack_31c + 0x3c) = (int *)0x0;
                    *(int **)(pbStack_31c + 0x40) = *(int **)(piVar13[(int)pbVar11] + 0x10);
                    *(int **)(pbStack_31c + 0x44) = (int *)-*(float *)(piVar13[(int)pbVar11] + 0x14)
                    ;
                    puVar25 = (ushort *)piVar13[(int)pbVar11];
                    iVar15 = param_4[0x8b];
                    pbStack_304 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    **)((uint)*puVar25 * 0x10 + iVar15);
                    ppiVar29 = *(int ***)((uint)*puVar25 * 0x10 + 4 + iVar15);
                    piVar19 = *(int **)((uint)*puVar25 * 0x10 + 8 + iVar15);
                    pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)auStack_234;
                    pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)0x4409b9;
                    FUN_00548748();
                    if ((char)param_4[0x9d] != '\0') {
                      pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)&uStack_2c0;
                      pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)(param_4[0x90] + (uint)*(ushort *)piVar13[(int)pbVar11] * 0xc
                                       );
                      pbStack_344 = abStack_25c;
                      pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)0x4409e8;
                      pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)FUN_00548964();
                      pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                     *)0x4409f5;
                      FUN_0041d430();
                    }
                    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      **)(pbStack_31c + 0x50) = pbStack_304;
                    *(int ***)(pbStack_31c + 0x54) = ppiVar29;
                    *(int **)(pbStack_31c + 0x5c) = (int *)0x0;
                    *(int **)(pbStack_31c + 0x58) = piVar19;
                    *(int **)(pbStack_31c + 100) = (int *)0x0;
                    *(int **)(pbStack_31c + 0x60) = (int *)0x3f800000;
                    *(int **)(pbStack_31c + 0x68) = *(int **)(piVar13[(int)pbVar11] + 8);
                    *(int **)(pbStack_31c + 0x6c) = (int *)-*(float *)(piVar13[(int)pbVar11] + 0xc);
                    pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)0x440a43;
                    FUN_0041eac0();
                    pbVar11 = pbVar11 + 1;
                  } while (pbVar11 < pbStack_328);
                }
              }
            }
            else {
              pbStack_2dc = pbStack_2dc + (int)pbStack_328;
              pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)(uint)*(ushort *)
                                      (*(int *)(param_1 + 0x204) +
                                      (uint)*(ushort *)(iVar15 + (int)piStack_30c) * 2);
              pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x0;
              pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x0;
              pbStack_344 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x1;
              pbStack_34c = pbStack_38;
              pbStack_350 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x440a87;
              FUN_004200d0();
              pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x1;
              pbStack_340 = pbStack_38;
              pbStack_344 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x440a9a;
              (**(code **)(*(int *)(param_1 + 0x1f8) + 4))();
              pbStack_344 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x4;
              pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x1;
              pbStack_34c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x0;
              pbStack_350 = pbStack_40;
              pbStack_354 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x440ab0;
              (*(code *)(*(int **)pbStack_40)[0x3f])();
              pbStack_354 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x2;
              pbStack_358 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x2;
              pbStack_35c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x0;
              pbStack_360 = pbStack_50;
              pbStack_364 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x440ac6;
              (*(code *)(*(int **)pbStack_50)[0x3f])();
              pbStack_364 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x1;
              uStack_368 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            *)0x3;
              pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x0;
              (**(code **)(*piStack_60 + 0xfc))(piStack_60);
              (**(code **)(*apiStack_74[1] + 0xfc))(apiStack_74[1],0,4,4);
              (*(code *)(*(int **)pbStack_80)[0x3f])(pbStack_80,0,5,2);
              (**(code **)(*piStack_90 + 0xfc))(piStack_90,0,6,1);
              (**(code **)(*piStack_a0 + 0xfc))(piStack_a0,1,1,4);
              (**(code **)(*piStack_b0 + 0xfc))(piStack_b0,1,2,2);
              (**(code **)(*piStack_c0 + 0xfc))(piStack_c0,1,3,1);
              (**(code **)(*piStack_d0 + 0xfc))(piStack_d0,1,4,2);
              (**(code **)(*piStack_e0 + 0xfc))(piStack_e0,1,5,1);
              (**(code **)(*piStack_f0 + 0xfc))(piStack_f0,1,6,1);
              if (uStack_320._3_1_ == '\0') {
                if ((*(byte *)((uint)*(byte *)(*piVar13 + 0x28) * 0x50 + 0x44 +
                              *(int *)(param_1 + 0x1d4)) & 8) != 0) {
                  pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x1;
                  pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0xe;
                  pbStack_344 = pbStack_38;
                  pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x440bdf;
                  (*(code *)(*(int **)pbStack_38)[0x32])();
                  pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x1;
                  pbStack_34c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x16;
                  pbStack_350 = pbStack_44;
                  pbStack_354 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x440bf3;
                  (*(code *)(*(int **)pbStack_44)[0x32])();
                  pbStack_354 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x1;
                  pbStack_358 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x1b;
                  pbStack_35c = pbStack_50;
                  pbStack_360 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x440c07;
                  (*(code *)(*(int **)pbStack_50)[0x32])();
                  pbStack_360 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x1;
                  pbStack_364 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0xf;
                  uStack_368 = pbStack_5c;
                  pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x440c1b;
                  (*(code *)(*(int **)pbStack_5c)[0x32])();
                  pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x7;
                  (**(code **)(*apiStack_74[3] + 200))(apiStack_74[3],0x19);
                  (**(code **)(*apiStack_74[0] + 200))(apiStack_74[0],0x18,0x1f);
                  (*(code *)(*(int **)pbStack_80)[0x32])(pbStack_80,0x13,5);
                  (**(code **)(*piStack_8c + 200))(piStack_8c,0x14,6);
                  uStack_320 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                *)CONCAT13(1,(undefined3)uStack_320);
                }
              }
              else if ((*(byte *)((uint)*(byte *)(*piVar13 + 0x28) * 0x50 + 0x44 +
                                 *(int *)(param_1 + 0x1d4)) & 8) == 0) {
                pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x1;
                pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x7;
                pbStack_344 = pbStack_38;
                pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x440c99;
                (*(code *)(*(int **)pbStack_38)[0x32])();
                pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x0;
                pbStack_34c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0xf;
                pbStack_350 = pbStack_44;
                pbStack_354 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x440cad;
                (*(code *)(*(int **)pbStack_44)[0x32])();
                pbStack_354 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x0;
                pbStack_358 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x1b;
                pbStack_35c = pbStack_50;
                pbStack_360 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x440cc1;
                (*(code *)(*(int **)pbStack_50)[0x32])();
                pbStack_360 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x3;
                pbStack_364 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x16;
                uStack_368 = pbStack_5c;
                pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x440cd5;
                (*(code *)(*(int **)pbStack_5c)[0x32])();
                pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x1;
                (**(code **)(*apiStack_74[3] + 200))(apiStack_74[3],0xe);
                uStack_320 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              *)((uint)uStack_320 & 0xffffff);
              }
              do {
                uVar27 = *(uint *)(*(int *)(iStack_34 + 0x2d0) + 0x24);
                pbStack_318 = pbStack_328;
                if (uVar27 < (uint)((int)pbStack_328 * 3)) {
                  pbStack_318 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)(uVar27 / 3);
                }
                pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)&iStack_2e4;
                pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)((int)pbStack_318 * 3);
                iStack_2e4 = 0;
                pbStack_344 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x440d36;
                pbStack_2e0 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)FUN_0041d0a0();
                pbStack_31c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x0;
                if (3 < (int)pbStack_318) {
                  pbVar30 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x3;
                  puVar20 = (undefined4 *)((int)pbStack_2e0 + 0x80);
                  do {
                    puVar20[-0x20] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 + param_4[0x8b]);
                    puVar20[-0x1f] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 + 4 + param_4[0x8b]);
                    puVar20[-0x1e] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 + 8 + param_4[0x8b]);
                    puVar20[-0x1a] = *(undefined4 *)(piVar13[(int)pbVar11] + 0x18);
                    puVar20[-0x19] = -*(float *)(piVar13[(int)pbVar11] + 0x1c);
                    puVar20[-0x16] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 + param_4[0x8b]);
                    puVar20[-0x15] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 + 4 + param_4[0x8b]);
                    puVar20[-0x14] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 + 8 + param_4[0x8b]);
                    puVar20[-0x10] = *(undefined4 *)(piVar13[(int)pbVar11] + 0x10);
                    puVar20[-0xf] = -*(float *)(piVar13[(int)pbVar11] + 0x14);
                    puVar20[-0xc] =
                         *(undefined4 *)
                          ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + param_4[0x8b]);
                    puVar20[-0xb] =
                         *(undefined4 *)
                          ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + 4 + param_4[0x8b]);
                    puVar20[-10] = *(undefined4 *)
                                    ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + 8 +
                                    param_4[0x8b]);
                    puVar20[-6] = *(undefined4 *)(piVar13[(int)pbVar11] + 8);
                    puVar20[-5] = -*(float *)(piVar13[(int)pbVar11] + 0xc);
                    puVar17 = (undefined4 *)
                              (((piVar13[(int)pbVar11] - *(int *)(param_1 + 0x1e4)) / 0x2c) * 0x20 +
                              *(int *)(param_1 + 0x1cc));
                    puVar20[-0x18] = puVar17[4];
                    pbVar24 = pbVar11 + 1;
                    puVar20[-0x17] = -(float)puVar17[5];
                    puVar20[-0xe] = puVar17[2];
                    puVar20[-0xd] = -(float)puVar17[3];
                    puVar20[-4] = *puVar17;
                    puVar20[-3] = -(float)puVar17[1];
                    puVar20[-2] = *(undefined4 *)
                                   ((uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0x10 +
                                   param_4[0x8b]);
                    puVar20[-1] = *(undefined4 *)
                                   ((uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0x10 + 4 +
                                   param_4[0x8b]);
                    *puVar20 = *(undefined4 *)
                                ((uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0x10 + 8 +
                                param_4[0x8b]);
                    puVar20[4] = *(undefined4 *)(piVar13[(int)pbVar24] + 0x18);
                    puVar20[5] = -*(float *)(piVar13[(int)pbVar24] + 0x1c);
                    puVar20[8] = *(undefined4 *)
                                  ((uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0x10 +
                                  param_4[0x8b]);
                    puVar20[9] = *(undefined4 *)
                                  ((uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0x10 + 4 +
                                  param_4[0x8b]);
                    puVar20[10] = *(undefined4 *)
                                   ((uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0x10 + 8 +
                                   param_4[0x8b]);
                    puVar20[0xe] = *(undefined4 *)(piVar13[(int)pbVar24] + 0x10);
                    puVar20[0xf] = -*(float *)(piVar13[(int)pbVar24] + 0x14);
                    puVar20[0x12] =
                         *(undefined4 *)
                          ((uint)*(ushort *)piVar13[(int)pbVar24] * 0x10 + param_4[0x8b]);
                    puVar20[0x13] =
                         *(undefined4 *)
                          ((uint)*(ushort *)piVar13[(int)pbVar24] * 0x10 + 4 + param_4[0x8b]);
                    puVar20[0x14] =
                         *(undefined4 *)
                          ((uint)*(ushort *)piVar13[(int)pbVar24] * 0x10 + 8 + param_4[0x8b]);
                    puVar20[0x18] = *(undefined4 *)(piVar13[(int)pbVar24] + 8);
                    puVar20[0x19] = -*(float *)(piVar13[(int)pbVar24] + 0xc);
                    puVar17 = (undefined4 *)
                              (((piVar13[(int)pbVar24] - *(int *)(param_1 + 0x1e4)) / 0x2c) * 0x20 +
                              *(int *)(param_1 + 0x1cc));
                    puVar20[6] = puVar17[4];
                    pbVar24 = pbVar11 + 2;
                    puVar20[7] = -(float)puVar17[5];
                    puVar20[0x10] = puVar17[2];
                    puVar20[0x11] = -(float)puVar17[3];
                    puVar20[0x1a] = *puVar17;
                    puVar20[0x1b] = -(float)puVar17[1];
                    puVar20[0x1c] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0x10 + param_4[0x8b]);
                    puVar20[0x1d] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0x10 + 4 + param_4[0x8b]);
                    puVar20[0x1e] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0x10 + 8 + param_4[0x8b]);
                    puVar20[0x22] = *(undefined4 *)(piVar13[(int)pbVar24] + 0x18);
                    puVar20[0x23] = -*(float *)(piVar13[(int)pbVar24] + 0x1c);
                    puVar20[0x26] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0x10 + param_4[0x8b]);
                    puVar20[0x27] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0x10 + 4 + param_4[0x8b]);
                    puVar20[0x28] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0x10 + 8 + param_4[0x8b]);
                    puVar20[0x2c] = *(undefined4 *)(piVar13[(int)pbVar24] + 0x10);
                    puVar20[0x2d] = -*(float *)(piVar13[(int)pbVar24] + 0x14);
                    puVar20[0x30] =
                         *(undefined4 *)
                          ((uint)*(ushort *)piVar13[(int)pbVar24] * 0x10 + param_4[0x8b]);
                    puVar20[0x31] =
                         *(undefined4 *)
                          ((uint)*(ushort *)piVar13[(int)pbVar24] * 0x10 + 4 + param_4[0x8b]);
                    puVar20[0x32] =
                         *(undefined4 *)
                          ((uint)*(ushort *)piVar13[(int)pbVar24] * 0x10 + 8 + param_4[0x8b]);
                    puVar20[0x36] = *(undefined4 *)(piVar13[(int)pbVar24] + 8);
                    puVar20[0x37] = -*(float *)(piVar13[(int)pbVar24] + 0xc);
                    puVar17 = (undefined4 *)
                              (((piVar13[(int)pbVar24] - *(int *)(param_1 + 0x1e4)) / 0x2c) * 0x20 +
                              *(int *)(param_1 + 0x1cc));
                    puVar20[0x24] = puVar17[4];
                    pbVar24 = pbVar11 + 3;
                    puVar20[0x25] = -(float)puVar17[5];
                    puVar20[0x2e] = puVar17[2];
                    puVar20[0x2f] = -(float)puVar17[3];
                    puVar20[0x38] = *puVar17;
                    puVar20[0x39] = -(float)puVar17[1];
                    puVar20[0x3a] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0x10 + param_4[0x8b]);
                    puVar20[0x3b] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0x10 + 4 + param_4[0x8b]);
                    puVar20[0x3c] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar24] + 4) * 0x10 + 8 + param_4[0x8b]);
                    puVar20[0x40] = *(undefined4 *)(piVar13[(int)pbVar24] + 0x18);
                    puVar20[0x41] = -*(float *)(piVar13[(int)pbVar24] + 0x1c);
                    puVar20[0x44] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0x10 + param_4[0x8b]);
                    puVar20[0x45] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0x10 + 4 + param_4[0x8b]);
                    puVar20[0x46] =
                         *(undefined4 *)
                          ((uint)*(ushort *)(piVar13[(int)pbVar24] + 2) * 0x10 + 8 + param_4[0x8b]);
                    puVar20[0x4a] = *(undefined4 *)(piVar13[(int)pbVar24] + 0x10);
                    puVar20[0x4b] = -*(float *)(piVar13[(int)pbVar24] + 0x14);
                    puVar20[0x4e] =
                         *(undefined4 *)
                          ((uint)*(ushort *)piVar13[(int)pbVar24] * 0x10 + param_4[0x8b]);
                    puVar20[0x4f] =
                         *(undefined4 *)
                          ((uint)*(ushort *)piVar13[(int)pbVar24] * 0x10 + 4 + param_4[0x8b]);
                    puVar20[0x50] =
                         *(undefined4 *)
                          ((uint)*(ushort *)piVar13[(int)pbVar24] * 0x10 + 8 + param_4[0x8b]);
                    puVar20[0x54] = *(undefined4 *)(piVar13[(int)pbVar24] + 8);
                    puVar20[0x55] = -*(float *)(piVar13[(int)pbVar24] + 0xc);
                    puVar17 = (undefined4 *)
                              (((piVar13[(int)pbVar24] - *(int *)(param_1 + 0x1e4)) / 0x2c) * 0x20 +
                              *(int *)(param_1 + 0x1cc));
                    puVar20[0x42] = puVar17[4];
                    puVar20[0x43] = -(float)puVar17[5];
                    puVar20[0x4c] = puVar17[2];
                    pbVar11 = pbVar11 + 4;
                    puVar20[0x4d] = -(float)puVar17[3];
                    puVar20[0x56] = *puVar17;
                    puVar20[0x57] = -(float)puVar17[1];
                    pbStack_31c = pbStack_31c + 4;
                    pbVar30 = pbVar30 + 4;
                    puVar20 = puVar20 + 0x78;
                  } while (pbVar30 < pbStack_318);
                }
                if (pbStack_31c < pbStack_318) {
                  iVar15 = (int)pbStack_318 - (int)pbStack_31c;
                  puVar20 = (undefined4 *)((int)pbStack_31c * 0x78 + 8 + (int)pbStack_2e0);
                  do {
                    puVar20[-2] = *(undefined4 *)
                                   ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 +
                                   param_4[0x8b]);
                    puVar20[-1] = *(undefined4 *)
                                   ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 + 4 +
                                   param_4[0x8b]);
                    *puVar20 = *(undefined4 *)
                                ((uint)*(ushort *)(piVar13[(int)pbVar11] + 4) * 0x10 + 8 +
                                param_4[0x8b]);
                    puVar20[4] = *(undefined4 *)(piVar13[(int)pbVar11] + 0x18);
                    puVar20[5] = -*(float *)(piVar13[(int)pbVar11] + 0x1c);
                    puVar20[8] = *(undefined4 *)
                                  ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 +
                                  param_4[0x8b]);
                    puVar20[9] = *(undefined4 *)
                                  ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 + 4 +
                                  param_4[0x8b]);
                    puVar20[10] = *(undefined4 *)
                                   ((uint)*(ushort *)(piVar13[(int)pbVar11] + 2) * 0x10 + 8 +
                                   param_4[0x8b]);
                    puVar20[0xe] = *(undefined4 *)(piVar13[(int)pbVar11] + 0x10);
                    puVar20[0xf] = -*(float *)(piVar13[(int)pbVar11] + 0x14);
                    puVar20[0x12] =
                         *(undefined4 *)
                          ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + param_4[0x8b]);
                    puVar20[0x13] =
                         *(undefined4 *)
                          ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + 4 + param_4[0x8b]);
                    puVar20[0x14] =
                         *(undefined4 *)
                          ((uint)*(ushort *)piVar13[(int)pbVar11] * 0x10 + 8 + param_4[0x8b]);
                    puVar20[0x18] = *(undefined4 *)(piVar13[(int)pbVar11] + 8);
                    puVar20[0x19] = -*(float *)(piVar13[(int)pbVar11] + 0xc);
                    puVar17 = (undefined4 *)
                              (((piVar13[(int)pbVar11] - *(int *)(param_1 + 0x1e4)) / 0x2c) * 0x20 +
                              *(int *)(param_1 + 0x1cc));
                    puVar20[6] = puVar17[4];
                    puVar20[7] = -(float)puVar17[5];
                    puVar20[0x10] = puVar17[2];
                    pbVar11 = pbVar11 + 1;
                    puVar20[0x11] = -(float)puVar17[3];
                    puVar20[0x1a] = *puVar17;
                    puVar20[0x1b] = -(float)puVar17[1];
                    iVar15 = iVar15 + -1;
                    puVar20 = puVar20 + 0x1e;
                  } while (iVar15 != 0);
                }
                piVar19 = *(int **)(iStack_34 + 0x2d0);
                if (((char)piVar19[2] != '\0') &&
                   (pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)*piVar19,
                   pbStack_33c !=
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x0)) {
                  pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)0x44150d;
                  (**(code **)(*(int *)pbStack_33c + 0x30))();
                  *(undefined1 *)(piVar19 + 2) = 0;
                }
                pbStack_33c = pbStack_318;
                pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)iStack_2e4;
                pbStack_344 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x4;
                pbStack_348 = pbStack_38;
                pbStack_34c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               *)0x441531;
                (*(code *)(*(int **)pbStack_38)[0x46])();
                pbStack_328 = pbStack_328 + -(int)pbStack_318;
              } while (pbStack_328 !=
                       (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)0x0);
            }
          }
          pbVar11 = pbStack_38;
          uStack_310 = uStack_310 + 1;
          piStack_30c = piStack_30c + 9;
        } while (uStack_310 < *(uint *)(param_1 + 0x200));
        if (uStack_320._3_1_ != '\0') {
          pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x1;
          pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x7;
          pbStack_344 = pbStack_38;
          pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x441587;
          (*(code *)(*(int **)pbStack_38)[0x32])();
          pbStack_348 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x0;
          pbStack_34c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0xf;
          pbStack_350 = pbVar11;
          pbStack_354 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x441594;
          (*(code *)(*(int **)pbVar11)[0x32])();
          pbStack_354 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x0;
          pbStack_358 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x1b;
          pbStack_35c = pbVar11;
          pbStack_360 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x4415a1;
          (*(code *)(*(int **)pbVar11)[0x32])();
          pbStack_360 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x3;
          pbStack_364 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x16;
          uStack_368 = pbVar11;
          pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x4415ae;
          (*(code *)(*(int **)pbVar11)[0x32])();
          pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x1;
          (*(code *)(*(int **)pbVar11)[0x32])(pbVar11,0xe);
        }
      }
    }
  }
  pbStack_33c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x1;
  pbStack_340 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0xb;
  pbStack_344 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x1;
  pbStack_348 = pbStack_38;
  pbStack_34c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                0x443f34;
  (*(code *)(*(int **)pbStack_38)[0x3f])();
  pbStack_34c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x1;
  pbStack_350 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x1;
  pbStack_354 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x2;
  pbStack_358 = pbStack_38;
  pbStack_35c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                0x443f43;
  (*(code *)(*(int **)pbStack_38)[0x3f])();
  pbStack_35c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x1;
  pbStack_360 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x4;
  pbStack_364 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x2;
  uStack_368 = pbStack_38;
  pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                0x443f52;
  (*(code *)(*(int **)pbStack_38)[0x3f])();
  if (((*(char *)((int)param_4 + 0x27b) == '\0') && (*(char *)(param_1 + 0x2a4) != '\0')) &&
     ((float)ppiVar29 < (float)param_4[0x99] * _DAT_00588bfc)) {
    pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  (_DAT_005b9004 * _DAT_005888f4);
    pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_00546f8c(&fStack_114);
    uVar12 = FUN_0041e470(2);
    FUN_0041d7a0(&piStack_224,uVar12);
    pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x443fd7;
    FUN_00407300();
    uStack_2c8 = uStack_220;
    uStack_2b8 = uStack_210;
    piStack_2cc = piStack_224;
    uStack_2a8 = uStack_200;
    uStack_2c4 = uStack_21c;
    pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  &piStack_2cc;
    fStack_2bc = fStack_214;
    fStack_2b4 = fStack_20c;
    fStack_2ac = fStack_204;
    uStack_2c0 = 0;
    fStack_2b0 = 0.0;
    uStack_2a4 = auStack_1fc[0];
    uStack_2a0 = 0;
    uStack_29c = 0;
    uStack_298 = 0;
    fStack_294 = 0.0;
    local_290[0] = 0x3f800000;
    (*(code *)(*(int **)pbStack_38)[0x25])(pbStack_38,0x10);
    (*(code *)(*(int **)pbStack_38)[0x32])(pbStack_38,0xe,0);
    (*(code *)(*(int **)pbStack_38)[0x32])(pbStack_38,0x1b,1);
    (*(code *)(*(int **)pbStack_38)[0x32])(pbStack_38,0x13,2);
    (*(code *)(*(int **)pbStack_38)[0x32])(pbStack_38,0x14,2);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,0x14,0);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,0x13,DAT_005b5f28);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,0x12,1);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,0xd,3);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,0xe,3);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,0xb,0x30000);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,0x18,3);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,1,4);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,2,2);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,3,1);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,4,4);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,5,2);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,6,1);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,1,1,4);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,1,2,2);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,1,3,1);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,1,4,2);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,1,5,1);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,1,6,1);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,1,0xb,1);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,1,0xd,1);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,1,0xe,1);
    (*(code *)(*(int **)pbStack_38)[0x3d])(pbStack_38,0,0);
    (*(code *)(*(int **)pbStack_38)[0x3d])(pbStack_38,1,0);
    uVar12 = (**(code **)(*param_4 + 0x88))();
    FUN_0041e330(0,uVar12);
    FUN_0041da10(pbStack_38);
    FUN_0045f340(pbStack_38,uStack_64,param_4,1);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,0xd,1);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,0xe,1);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,0xb,0);
    (*(code *)(*(int **)pbStack_38)[0x3f])(pbStack_38,0,0x18,0);
    (*(code *)(*(int **)pbStack_38)[0x32])(pbStack_38,0x1b,0);
    (*(code *)(*(int **)pbStack_38)[0x32])(pbStack_38,0xe,1);
    pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x4442ee;
    FUN_00407300();
  }
  pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                0x4442fe;
  cVar10 = FUN_0041cb70();
  if (cVar10 == '\0') {
    pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x444328;
    iVar15 = FUN_004ffbb0();
    if (iVar15 != -1) {
      pbStack_36c = pbStack_38;
      FUN_0041cf70();
      FUN_00517300();
    }
  }
  else {
    pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x0;
    (*(code *)(*(int **)pbStack_38)[0x2e])(pbStack_38,0);
    (*(code *)(*(int **)pbStack_38)[0x32])(pbStack_38,0x89,0);
  }
  param_4[0x95] = (int)pbStack_304;
  param_4[0x22] = (int)pbStack_308;
  if (*(int *)(param_1 + 0x1f8) != 0) {
    pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x0;
    (*(code *)(*(int **)pbStack_38)[0x3d])(pbStack_38,1);
  }
  pbStack_36c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                &piStack_d4;
  (*(code *)(*(int **)pbStack_38)[0x2c])(pbStack_38,0);
  FUN_0043a0c0();
  FUN_00407300();
  FUN_00407300();
  return pbStack_318;
}




/* Function: FUN_004443b0 */

void FUN_004443b0(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057bb92;
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




/* Function: FUN_00444440 */

undefined4 __thiscall FUN_00444440(int param_1,uint param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0x3fffffff < param_2) {
    FUN_004443b0();
    return 1;
  }
  iVar1 = FUN_00493c27(param_2 * 4);
  *(uint *)(param_1 + 0xc) = param_2 * 4 + iVar1;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  return 1;
}




/* Function: FUN_00444740 */

undefined4 __thiscall FUN_00444740(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int local_3c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c [28];
  
  uVar6 = 0;
  uVar5 = 0;
  if (*(int *)(param_1 + 0x208) != 0) {
    local_3c = 0;
    do {
      uVar2 = FUN_0043f810(local_38,uVar6);
      uVar1 = FUN_0041f9b0(uVar2);
      *(undefined2 *)(*(int *)(param_1 + 0x204) + uVar6 * 2) = uVar1;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
      if (*(short *)(*(int *)(param_1 + 0x204) + uVar6 * 2) == -1) {
        pvVar3 = operator_new(0x170,(nothrow_t *)&DAT_005b6164);
        if (pvVar3 == (void *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_00411050();
        }
        FUN_00410a00(0,*(int *)(param_1 + 0x298) + local_3c,0);
        uVar4 = FUN_0043f810(local_1c,uVar6);
        FUN_00425400(uVar2,param_3,uVar4);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
      }
      uVar5 = *(uint *)(param_1 + 0x208);
      uVar6 = uVar6 + 1;
      local_3c = local_3c + 0x1c;
    } while (uVar6 < uVar5);
  }
  return CONCAT31((int3)(uVar5 >> 8),1);
}




/* Function: FUN_00444820 */

int __thiscall FUN_00444820(int param_1,uint param_2,char *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((-1 < (int)param_2) && (iVar4 = *(int *)(param_1 + 0x1b0), iVar4 != 0)) &&
     (param_2 < (uint)(*(int *)(param_1 + 0x1b4) - iVar4 >> 2))) {
    piVar1 = (int *)(iVar4 + param_2 * 4);
    iVar3 = 0;
    if (*(char *)(*(int *)(iVar4 + param_2 * 4) + 0x42) != '\0') {
      iVar4 = 0;
      do {
        iVar2 = _stricmp((char *)(*(int *)(*piVar1 + 0x44) + iVar4),param_3);
        if (iVar2 == 0) {
          return iVar3;
        }
        piVar1 = (int *)(*(int *)(param_1 + 0x1b0) + param_2 * 4);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x48;
      } while (iVar3 < (int)(uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x1b0) + param_2 * 4) + 0x42
                                           ));
    }
  }
  return -1;
}




/* Function: FUN_004448b0 */

uint __thiscall FUN_004448b0(int param_1,uint param_2,uint param_3,int param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  uint in_EAX;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  
  if (((-1 < (int)param_2) && (iVar1 = *(int *)(param_1 + 0x1b0), iVar1 != 0)) &&
     (in_EAX = *(int *)(param_1 + 0x1b4) - iVar1 >> 2, param_2 < in_EAX)) {
    iVar1 = *(int *)(iVar1 + param_2 * 4);
    in_EAX = param_3;
    if ((-1 < (int)param_3) && ((int)param_3 < (int)(uint)*(byte *)(iVar1 + 0x42))) {
      iVar1 = *(int *)(iVar1 + 0x44);
      uVar4 = param_4 % (int)*(short *)(iVar1 + 0x40 + param_3 * 0x48);
      uVar5 = (int)uVar4 >> 0x1f;
      pfVar3 = (float *)(((uVar4 ^ uVar5) - uVar5) * 0x40 + *(int *)(iVar1 + param_3 * 0x48 + 0x44))
      ;
      param_5[8] = -*pfVar3;
      *param_5 = pfVar3[1];
      param_5[4] = pfVar3[2];
      param_5[0xc] = pfVar3[3];
      param_5[9] = -pfVar3[4];
      param_5[1] = pfVar3[5];
      param_5[5] = pfVar3[6];
      param_5[0xd] = pfVar3[7];
      param_5[10] = -pfVar3[8];
      param_5[2] = pfVar3[9];
      param_5[6] = pfVar3[10];
      param_5[0xe] = pfVar3[0xb];
      param_5[0xb] = -pfVar3[0xc];
      param_5[3] = pfVar3[0xd];
      param_5[7] = pfVar3[0xe];
      fVar2 = pfVar3[0xf];
      param_5[0xf] = fVar2;
      return CONCAT31((int3)((uint)fVar2 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}




/* Function: FUN_004449a0 */

undefined4 __thiscall FUN_004449a0(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x1b0) + param_2 * 4);
}




/* Function: FUN_004449b0 */

int __thiscall FUN_004449b0(int param_1,uint param_2)

{
  int iVar1;
  
  if (((-1 < (int)param_2) && (iVar1 = *(int *)(param_1 + 0x1b0), iVar1 != 0)) &&
     (param_2 < (uint)(*(int *)(param_1 + 0x1b4) - iVar1 >> 2))) {
    return (int)*(short *)(*(int *)(*(int *)(iVar1 + param_2 * 4) + 0x44) + 0x40);
  }
  return 0;
}




/* Function: FUN_004449f0 */

undefined4 __thiscall FUN_004449f0(int param_1,uint param_2)

{
  int iVar1;
  
  if (((-1 < (int)param_2) && (iVar1 = *(int *)(param_1 + 0x1b0), iVar1 != 0)) &&
     (param_2 < (uint)(*(int *)(param_1 + 0x1b4) - iVar1 >> 2))) {
    return *(undefined4 *)(iVar1 + param_2 * 4);
  }
  return 0;
}




/* Function: FUN_00444a30 */

void FUN_00444a30(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00493c27(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 8) = 1;
  *(undefined1 *)((int)puVar1 + 0x21) = 0;
  return;
}




/* Function: FUN_00444a70 */

void __thiscall FUN_00444a70(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057bb00;
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
      FUN_004443b0();
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




/* Function: FUN_00444d10 */

void __thiscall FUN_00444d10(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int *piVar17;
  int local_104;
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_9c [28];
  undefined1 local_80 [64];
  undefined1 auStack_40 [64];
  
  uVar12 = param_3 % (int)*(short *)(*(int *)(param_2 + 0x44) + 0x40);
  iVar14 = 0;
  uVar13 = (int)uVar12 >> 0x1f;
  iVar16 = (uVar12 ^ uVar13) - uVar13;
  if (*(int *)(param_5 + 0x18c) == 0) {
    local_104 = 0;
    if (*(short *)(param_2 + 0x40) != 0) {
      iVar16 = iVar16 * 0x40;
      pfVar11 = (float *)(param_4 + 8);
      do {
        iVar7 = *(int *)(param_2 + 0x48);
        uVar12 = (uint)*(byte *)(iVar7 + 0xc + iVar14);
        fVar1 = *(float *)(iVar7 + iVar14);
        fVar2 = *(float *)(iVar7 + 4 + iVar14);
        fVar3 = *(float *)(iVar7 + 8 + iVar14);
        pfVar4 = (float *)(*(int *)(*(int *)(param_2 + 0x44) + 0x44 + uVar12 * 0x48) + iVar16);
        iVar7 = *(int *)(param_2 + 0x44) + uVar12 * 0x48;
        iVar14 = iVar14 + 0x10;
        pfVar11[-2] = fVar1 * *pfVar4 + fVar2 * pfVar4[1] + fVar3 * pfVar4[2] + pfVar4[3];
        iVar5 = *(int *)(iVar7 + 0x44) + iVar16;
        pfVar11[-1] = fVar1 * *(float *)(iVar5 + 0x10) +
                      fVar2 * *(float *)(iVar5 + 0x14) + fVar3 * *(float *)(iVar5 + 0x18) +
                      *(float *)(iVar5 + 0x1c);
        iVar5 = *(int *)(iVar7 + 0x44);
        iVar7 = iVar16 + iVar5;
        local_104 = local_104 + 1;
        *pfVar11 = fVar1 * *(float *)(iVar7 + 0x20) +
                   fVar2 * *(float *)(iVar7 + 0x24) + fVar3 * *(float *)(iVar16 + 0x28 + iVar5) +
                   *(float *)(iVar7 + 0x2c);
        pfVar11 = pfVar11 + 4;
      } while (local_104 < (int)(uint)*(ushort *)(param_2 + 0x40));
      return;
    }
  }
  else {
    uVar12 = (uint)*(byte *)(param_2 + 0x42);
    puVar6 = operator_new(uVar12 * 0x40 + 4,(nothrow_t *)&DAT_005b6164);
    if (puVar6 == (uint *)0x0) {
      puVar15 = (uint *)0x0;
    }
    else {
      puVar15 = puVar6 + 1;
      *puVar6 = uVar12;
      _eh_vector_constructor_iterator_
                (puVar15,0x40,uVar12,(_func_void_void_ptr *)&LAB_00444430,FUN_00407300);
    }
    local_fc = 0;
    if (*(char *)(param_2 + 0x42) != '\0') {
      iVar14 = 0;
      do {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  (local_9c,(char *)(*(int *)(param_2 + 0x44) + iVar14));
        FUN_00420ca0(&local_b8,local_9c);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_9c);
        FUN_00407f80(0x3f800000);
        iVar7 = *(int *)(iVar14 + 0x44 + *(int *)(param_2 + 0x44));
        local_f8 = *(undefined4 *)(iVar7 + iVar16 * 0x40);
        iVar7 = iVar7 + iVar16 * 0x40;
        local_f4 = *(undefined4 *)(iVar7 + 0x10);
        local_f0 = *(undefined4 *)(iVar7 + 0x20);
        local_ec = *(undefined4 *)(iVar7 + 0x30);
        local_e8 = *(undefined4 *)(iVar7 + 4);
        local_e4 = *(undefined4 *)(iVar7 + 0x14);
        local_e0 = *(undefined4 *)(iVar7 + 0x24);
        local_dc = *(undefined4 *)(iVar7 + 0x34);
        local_d8 = *(undefined4 *)(iVar7 + 8);
        local_d4 = *(undefined4 *)(iVar7 + 0x18);
        local_d0 = *(undefined4 *)(iVar7 + 0x28);
        local_cc = *(undefined4 *)(iVar7 + 0x38);
        local_c8 = *(undefined4 *)(iVar7 + 0xc);
        local_c4 = *(undefined4 *)(iVar7 + 0x1c);
        local_c0 = *(undefined4 *)(iVar7 + 0x2c);
        local_bc = *(undefined4 *)(iVar7 + 0x3c);
        if (*(int *)(param_5 + 0x188) == local_b8) {
          FUN_0041d670(&local_f8);
        }
        else {
          uVar10 = FUN_0041d7a0(local_80,local_b8 + 0x24,&local_f8);
          FUN_0041d670(uVar10);
          FUN_00407300();
        }
        FUN_00407300();
        local_fc = local_fc + 1;
        iVar14 = iVar14 + 0x48;
      } while (local_fc < (int)(uint)*(byte *)(param_2 + 0x42));
    }
    if (*(undefined4 **)(param_1 + 0x274) == (undefined4 *)0x0) {
      piVar17 = (int *)0x0;
    }
    else {
      piVar17 = (int *)**(undefined4 **)(param_1 + 0x274);
    }
    if (piVar17 != *(int **)(param_1 + 0x274)) {
      do {
        pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                 c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)(piVar17 + 2));
        iVar14 = FUN_00444820(*(undefined4 *)(param_5 + 0x20c),pcVar8);
        pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                 c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)(piVar17 + 9));
        iVar7 = FUN_00444820(*(undefined4 *)(param_5 + 0x20c),pcVar8);
        if ((iVar14 != -1) && (iVar7 != -1)) {
          FUN_00407f80(0x3f800000);
          puVar9 = (undefined4 *)
                   (iVar16 * 0x40 + *(int *)(*(int *)(param_2 + 0x44) + 0x44 + iVar7 * 0x48));
          local_f8 = *puVar9;
          local_f4 = puVar9[4];
          local_f0 = puVar9[8];
          local_ec = puVar9[0xc];
          local_e8 = puVar9[1];
          local_e4 = puVar9[5];
          local_e0 = puVar9[9];
          local_dc = puVar9[0xd];
          local_d8 = puVar9[2];
          local_d4 = puVar9[6];
          local_d0 = puVar9[10];
          local_cc = puVar9[0xe];
          local_c8 = puVar9[3];
          local_c4 = puVar9[7];
          local_c0 = puVar9[0xb];
          local_bc = puVar9[0xf];
          FUN_00547ad0();
          FUN_0041d7a0(local_80,puVar15 + iVar14 * 0x10,&local_f8);
          uVar10 = FUN_0041d7a0(auStack_40,local_80,puVar15 + iVar7 * 0x10);
          FUN_0041d670(uVar10);
          FUN_00407300();
          FUN_00407300();
          FUN_00407300();
        }
        piVar17 = (int *)*piVar17;
      } while (piVar17 != (int *)*(int *)(param_1 + 0x274));
    }
    iVar14 = 0;
    if (*(short *)(param_2 + 0x40) != 0) {
      puVar9 = (undefined4 *)(param_4 + 8);
      do {
        iVar16 = *(int *)(param_2 + 0x48) + (-8 - param_4);
        uStack_b4 = *(undefined4 *)(iVar16 + (int)puVar9);
        uStack_b0 = *(undefined4 *)((int)puVar9 + iVar16 + 4);
        uStack_ac = *(undefined4 *)((int)puVar9 + iVar16 + 8);
        FUN_00548704(&uStack_a8,puVar15 + (uint)*(byte *)((int)puVar9 + iVar16 + 0xc) * 0x10,
                     &uStack_b4);
        puVar9[-2] = uStack_a8;
        puVar9[-1] = uStack_a4;
        *puVar9 = uStack_a0;
        iVar14 = iVar14 + 1;
        puVar9 = puVar9 + 4;
      } while (iVar14 < (int)(uint)*(ushort *)(param_2 + 0x40));
    }
    if (puVar15 != (uint *)0x0) {
      _eh_vector_destructor_iterator_(puVar15,0x40,puVar15[-1],FUN_00407300);
      operator_delete__(puVar15 + -1);
    }
  }
  return;
}




/* Function: FUN_00445200 */

undefined4 __thiscall FUN_00445200(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_1 + 0x1b0) == 0) ||
     (*(int *)(param_1 + 0x1b4) - *(int *)(param_1 + 0x1b0) >> 2 == 0)) {
    return 0;
  }
  iVar2 = *(int *)(param_2 + 0x20c);
  if ((-1 < iVar2) && (iVar1 = *(int *)(*(int *)(param_1 + 0x1b0) + iVar2 * 4), iVar1 != 0)) {
    if ((*(int *)(param_2 + 0x210) == iVar2) &&
       (iVar2 = FUN_004cf110(), *(int *)(param_2 + 0x218) == iVar2)) {
      return 0;
    }
    uVar4 = *(undefined4 *)(param_2 + 0x22c);
    iVar2 = param_2;
    uVar3 = FUN_004cf110(uVar4,param_2);
    FUN_00444d10(iVar1,uVar3,uVar4,iVar2);
    if ((*(int *)(param_2 + 0x210) != *(int *)(param_2 + 0x20c)) &&
       (*(char *)(param_2 + 0x274) != '\0')) {
      FUN_0045ef60(param_2);
    }
    *(undefined4 *)(param_2 + 0x210) = *(undefined4 *)(param_2 + 0x20c);
    uVar4 = FUN_004cf110();
    *(undefined4 *)(param_2 + 0x218) = uVar4;
    return 1;
  }
  return 0;
}




/* Function: FUN_004452d0 */

int __thiscall FUN_004452d0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057bb10;
  local_10 = ExceptionList;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
  }
  ExceptionList = &local_10;
  cVar1 = FUN_00444440(iVar2);
  if (cVar1 != '\0') {
    local_8 = 0;
    uVar3 = FUN_0041df20(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(param_1 + 4),param_1,param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  ExceptionList = local_10;
  return param_1;
}




/* Function: FUN_00445370 */

void __fastcall FUN_00445370(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}




/* Function: FUN_00445390 */

void __fastcall FUN_00445390(int param_1)

{
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 0x10));
}




/* Function: FUN_004453d0 */

void __thiscall FUN_004453d0(int param_1,undefined4 param_2)

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
  FUN_00444a70(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_00445440 */

void __fastcall FUN_00445440(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}




/* Function: FUN_00445470 */

void __fastcall FUN_00445470(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}




/* Function: FUN_004454a0 */

undefined4 __fastcall FUN_004454a0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  
  operator_delete__(*(void **)(param_1 + 0x1e4));
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  operator_delete__(*(void **)(param_1 + 0x1d4));
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  operator_delete__(*(void **)(param_1 + 0x1bc));
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  operator_delete__(*(void **)(param_1 + 0x1c4));
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  operator_delete__(*(void **)(param_1 + 0x1dc));
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  operator_delete__(*(void **)(param_1 + 0x1ec));
  pvVar2 = *(void **)(param_1 + 500);
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar2,8,*(int *)((int)pvVar2 + -4),FUN_0043fa70);
    operator_delete__((void *)((int)pvVar2 + -4));
  }
  pvVar2 = *(void **)(param_1 + 0x1fc);
  *(undefined4 *)(param_1 + 500) = 0;
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar2,0x24,*(int *)((int)pvVar2 + -4),FUN_0043fab0);
    operator_delete__((void *)((int)pvVar2 + -4));
  }
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  operator_delete__(*(void **)(param_1 + 0x204));
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  operator_delete__(*(void **)(param_1 + 0x1cc));
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x1b0);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(param_1 + 0x1b4) - (int)puVar1 >> 2 != 0)) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar1);
  }
  if (*(void **)(param_1 + 0x1b0) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x1b0));
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  pvVar2 = *(void **)(param_1 + 0x2b4);
  *(undefined1 *)(param_1 + 0x2a5) = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00445390();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  pvVar2 = operator_new(0x1c,(nothrow_t *)&DAT_005b6164);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00445370();
  }
  piVar4 = *(int **)(param_1 + 700);
  *(undefined4 *)(param_1 + 0x2b4) = uVar3;
  if (piVar4 != *(int **)(param_1 + 0x2c0)) {
    do {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 4))(1);
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int **)(param_1 + 0x2c0));
  }
  if (*(void **)(param_1 + 700) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 700));
  }
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  return 1;
}




/* Function: FUN_004456c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FUN_004456c0(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  void *pvVar5;
  uint uVar6;
  uint unaff_retaddr;
  undefined *puVar7;
  int iStack_134;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_130 [28];
  char local_114 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057bb2c;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  for (uVar6 = 0;
      (*(int *)(param_1 + 0x1b0) != 0 &&
      (uVar6 < (uint)(*(int *)(param_1 + 0x1b4) - *(int *)(param_1 + 0x1b0) >> 2)));
      uVar6 = uVar6 + 1) {
    iVar1 = _stricmp(*(char **)(*(int *)(param_1 + 0x1b0) + uVar6 * 4),param_2);
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return uVar6;
    }
  }
  if (*(int *)(param_1 + 0x248) != 0) {
    pcVar3 = local_114;
    local_114[0] = '\0';
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (param_1 + 0x234));
    FUN_004f5290(pcVar2,pcVar3);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_130);
    local_4 = 0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
              (local_130,"animations\\");
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
              (local_130,local_114);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
              (local_130,"\\");
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
              (local_130,param_2);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
              (local_130,".alf");
    puVar7 = &DAT_00582818;
    pcVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(local_130);
    iVar1 = FUN_00410660(pcVar3,puVar7);
    if (iVar1 == 0) {
      pcVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(local_130);
      FUN_0041ce80("Warning: unable to load .ALF \'%s\'\n",pcVar3);
      uVar4 = FUN_0041e5b0();
      FUN_0040a410(uVar4);
    }
    else {
      FUN_0040f0b0(iVar1,0,2);
      uVar6 = FUN_0040f110(iVar1);
      pvVar5 = operator_new(uVar6,(nothrow_t *)&DAT_005b6164);
      FUN_0040f0b0(iVar1,0,0);
      FUN_0040f000(pvVar5,1,uVar6,iVar1);
      FUN_0040efb0(iVar1);
      iVar1 = FUN_004f5530(pvVar5,uVar6);
      iStack_134 = iVar1;
      operator_delete__(pvVar5);
      if (iVar1 != 0) {
        FUN_004453d0(&iStack_134);
        if (*(int *)(param_1 + 0x1b0) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x1b4) - *(int *)(param_1 + 0x1b0) >> 2;
        }
        local_4 = 0xffffffff;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_130);
        ExceptionList = local_c;
        return iVar1 - 1;
      }
    }
    local_4 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_130);
  }
  ExceptionList = local_c;
  return 0xffffffff;
}




/* Function: FUN_004458f0 */

undefined4 *
FUN_004458f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057bb51;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00493c27(0x24);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    *(undefined2 *)(puVar1 + 3) = *param_4;
    FUN_004452d0(param_4 + 2);
    *(undefined1 *)(puVar1 + 8) = param_5;
    *(undefined1 *)((int)puVar1 + 0x21) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}




/* Function: FUN_00445990 */

void __thiscall
FUN_00445990(int param_1,undefined4 *param_2,char param_3,undefined4 *param_4,undefined4 param_5)

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
  puStack_8 = &LAB_0057bb92;
  local_c = ExceptionList;
  if (0xcccccca < *(uint *)(param_1 + 8)) {
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
  piVar5 = (int *)FUN_004458f0(*(undefined4 *)(param_1 + 4),param_4,*(undefined4 *)(param_1 + 4),
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
  cVar1 = *(char *)(piVar5[1] + 0x20);
  piVar7 = piVar5;
  while (cVar1 == '\0') {
    piVar6 = piVar7 + 1;
    piVar2 = (int *)*piVar6;
    piVar3 = *(int **)piVar2[1];
    if (piVar2 == piVar3) {
      iVar4 = ((undefined4 *)piVar2[1])[2];
      if (*(char *)(iVar4 + 0x20) == '\0') {
        *(undefined1 *)(piVar2 + 8) = 1;
        *(undefined1 *)(iVar4 + 0x20) = 1;
        *(undefined1 *)(*(int *)(*piVar6 + 4) + 0x20) = 0;
        piVar7 = *(int **)(*piVar6 + 4);
      }
      else {
        if (piVar7 == (int *)piVar2[2]) {
          FUN_00480430(piVar2);
          piVar7 = piVar2;
        }
        *(undefined1 *)(piVar7[1] + 0x20) = 1;
        *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x20) = 0;
        FUN_00480490(*(undefined4 *)(piVar7[1] + 4));
      }
    }
    else if ((char)piVar3[8] == '\0') {
      *(undefined1 *)(piVar2 + 8) = 1;
      *(undefined1 *)(piVar3 + 8) = 1;
      *(undefined1 *)(*(int *)(*piVar6 + 4) + 0x20) = 0;
      piVar7 = *(int **)(*piVar6 + 4);
    }
    else {
      if (piVar7 == (int *)*piVar2) {
        FUN_00480490(piVar2);
        piVar7 = piVar2;
      }
      *(undefined1 *)(piVar7[1] + 0x20) = 1;
      *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x20) = 0;
      FUN_00480430(*(undefined4 *)(piVar7[1] + 4));
    }
    cVar1 = *(char *)(piVar7[1] + 0x20);
  }
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x20) = 1;
  *param_2 = piVar5;
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00445b60 */

void __thiscall FUN_00445b60(int param_1,undefined4 *param_2,ushort *param_3)

{
  int *piVar1;
  ushort *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;
  
  puVar2 = param_3;
  piVar1 = *(int **)(param_1 + 4);
  bVar6 = true;
  piVar5 = piVar1;
  if (*(char *)(piVar1[1] + 0x21) == '\0') {
    piVar3 = (int *)piVar1[1];
    do {
      piVar5 = piVar3;
      bVar6 = *param_3 < *(ushort *)(piVar5 + 3);
      if (bVar6) {
        piVar3 = (int *)*piVar5;
      }
      else {
        piVar3 = (int *)piVar5[2];
      }
    } while (*(char *)((int)piVar3 + 0x21) == '\0');
  }
  param_3 = (ushort *)piVar5;
  if (bVar6) {
    if (piVar5 == (int *)*piVar1) {
      puVar4 = (undefined4 *)FUN_00445990(&param_3,1,piVar5,puVar2);
      *param_2 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return;
    }
    FUN_00480570();
  }
  if (*(ushort *)((int)param_3 + 0xc) < *puVar2) {
    puVar4 = (undefined4 *)FUN_00445990(&param_3,bVar6,piVar5,puVar2);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  *param_2 = param_3;
  *(undefined1 *)(param_2 + 1) = 0;
  return;
}




/* Function: FUN_00445c30 */

int FUN_00445c30(undefined2 *param_1)

{
  int *piVar1;
  undefined1 local_38 [8];
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20 [4];
  void *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057bb70;
  local_c = ExceptionList;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20[0] = *param_1;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004452d0(local_30);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar1 = (int *)FUN_00445b60(local_38,local_20);
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_18);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x10;
}




/* Function: FUN_00445cc0 */

/* WARNING: Removing unreachable block (ram,0x00445de5) */
/* WARNING: Removing unreachable block (ram,0x00445df7) */
/* WARNING: Removing unreachable block (ram,0x00445e01) */
/* WARNING: Removing unreachable block (ram,0x00445e04) */
/* WARNING: Removing unreachable block (ram,0x00445df3) */
/* WARNING: Removing unreachable block (ram,0x00445e11) */
/* WARNING: Removing unreachable block (ram,0x00445e22) */
/* WARNING: Removing unreachable block (ram,0x00445e2d) */
/* WARNING: Removing unreachable block (ram,0x00445e29) */
/* WARNING: Removing unreachable block (ram,0x00445e1d) */
/* WARNING: Removing unreachable block (ram,0x00445e30) */

void __thiscall FUN_00445cc0(int param_1,undefined4 param_2,int *param_3)

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
  puStack_8 = &LAB_0057bb92;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_3 + 0x21) != '\0') {
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
  FUN_0046b6b0();
  piVar5 = (int *)*param_3;
  if ((*(char *)((int)piVar5 + 0x21) != '\0') || (*(char *)(param_3[2] + 0x21) == '\0')) {
    piVar5 = (int *)param_3[2];
  }
  piVar6 = (int *)param_3[1];
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
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
    if (*(char *)((int)piVar5 + 0x21) == '\0') {
      piVar3 = (int *)FUN_0043fa00(piVar5);
    }
    *puVar1 = piVar3;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int **)(iVar2 + 8) == param_3) {
    if (*(char *)((int)piVar5 + 0x21) == '\0') {
      uVar4 = FUN_0043fa20(piVar5);
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
  if ((char)param_3[8] == '\x01') {
    if (piVar5 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        if ((char)piVar5[8] != '\x01') break;
        piVar3 = (int *)*piVar6;
        if (piVar5 == piVar3) {
          piVar3 = (int *)piVar6[2];
          if ((char)piVar3[8] == '\0') {
            *(undefined1 *)(piVar3 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            FUN_00480430(piVar6);
            piVar3 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar3 + 0x21) == '\0') {
            if ((*(char *)(*piVar3 + 0x20) != '\x01') || (*(char *)(piVar3[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar3[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar3 + 0x20) = 1;
                *(undefined1 *)(piVar3 + 8) = 0;
                FUN_00480490(piVar3);
                piVar3 = (int *)piVar6[2];
              }
              *(char *)(piVar3 + 8) = (char)piVar6[8];
              *(undefined1 *)(piVar6 + 8) = 1;
              *(undefined1 *)(piVar3[2] + 0x20) = 1;
              FUN_00480430(piVar6);
              break;
            }
LAB_00445f07:
            *(undefined1 *)(piVar3 + 8) = 0;
          }
        }
        else {
          if ((char)piVar3[8] == '\0') {
            *(undefined1 *)(piVar3 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            FUN_00480490(piVar6);
            piVar3 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar3 + 0x21) == '\0') {
            if ((*(char *)(piVar3[2] + 0x20) == '\x01') && (*(char *)(*piVar3 + 0x20) == '\x01'))
            goto LAB_00445f07;
            if (*(char *)(*piVar3 + 0x20) == '\x01') {
              *(undefined1 *)(piVar3[2] + 0x20) = 1;
              *(undefined1 *)(piVar3 + 8) = 0;
              FUN_00480430(piVar3);
              piVar3 = (int *)*piVar6;
            }
            *(char *)(piVar3 + 8) = (char)piVar6[8];
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(*piVar3 + 0x20) = 1;
            FUN_00480490(piVar6);
            break;
          }
        }
        bVar7 = piVar6 != *(int **)(*(int *)(param_1 + 4) + 4);
        piVar5 = piVar6;
        piVar6 = (int *)piVar6[1];
      } while (bVar7);
    }
    *(undefined1 *)(piVar5 + 8) = 1;
  }
  if ((void *)param_3[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_3[5]);
  }
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_3);
}




/* Function: FUN_00445fb0 */

void FUN_00445fb0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    FUN_00445fb0(*(undefined4 *)((int)param_1 + 8));
    FUN_00445470();
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return;
}




/* Function: FUN_00445ff0 */

undefined4 * __thiscall
FUN_00445ff0(undefined4 *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00588c48;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x8d),"");
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x94),param_2);
  FUN_0040d8d0();
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)((int)param_1 + 0x2a5) = 0;
  *(undefined1 *)((int)param_1 + 0x2a6) = 0;
  *(undefined1 *)((int)param_1 + 0x2a7) = 0;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  FUN_00411120(0);
  FUN_00411140(0);
  return param_1;
}




/* Function: FUN_004461b0 */

void __fastcall FUN_004461b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_00588c48;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)((int)param_1 + 0x2a5) = 0;
  piVar1 = (int *)param_1[0xac];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xac] = 0;
  }
  piVar1 = (int *)param_1[0xab];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xab] = 0;
  }
  FUN_004454a0();
  if ((void *)param_1[0xaf] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0xaf]);
  }
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  piVar1 = (int *)param_1[0xac];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xac] = 0;
  }
  FUN_00409200();
  thunk_FUN_0040cf00();
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x94));
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x8d));
  if ((void *)param_1[0x6c] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x6c]);
  }
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  FUN_0040da90();
  return;
}




/* Function: FUN_004462a0 */

void FUN_004462a0(char *param_1,char *param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057bba9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,param_1);
  local_4 = 0;
  this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
         FUN_00429f50(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (this,param_2);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00446320 */

void * __thiscall FUN_00446320(void *param_1,byte param_2)

{
  FUN_004461b0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00446340 */

void __thiscall FUN_00446340(int param_1,undefined4 *param_2,int *param_3,int *param_4)

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
    FUN_00445fb0(piVar6[1]);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    *param_2 = **(undefined4 **)(param_1 + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x21) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x21);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x21);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x21);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x21);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_00445cc0(&param_3,piVar2);
    piVar2 = piVar6;
  }
  *param_2 = piVar2;
  return;
}




/* Function: FUN_00446400 */

void __fastcall FUN_00446400(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00446340(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00446430 */

undefined1 * __fastcall FUN_00446430(undefined1 *param_1)

{
  int iVar1;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *param_1 = local_1;
  iVar1 = FUN_00444a30();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}




/* Function: FUN_00446ee0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00446ee0(int param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  undefined3 uVar4;
  int iVar3;
  
  fVar2 = _DAT_00582ad8;
  fVar1 = *(float *)(param_1 + 0xd8);
  if (fVar1 < _DAT_00583354) {
    return (uint)(ushort)((ushort)(fVar1 < _DAT_00583354) << 8 |
                          (ushort)(NAN(fVar1) || NAN(_DAT_00583354)) << 10 |
                         (ushort)(fVar1 == _DAT_00583354) << 0xe);
  }
  iVar3 = *(int *)(param_1 + 0xd0);
  if (param_2 == iVar3) goto switchD_00446f8c_default;
  *(int *)(param_1 + 0xd4) = iVar3;
  *(float *)(param_1 + 0xe0) = param_3;
  *(int *)(param_1 + 0xd0) = param_2;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if (fVar2 == param_3) {
    *(undefined4 *)(param_1 + 0xd8) = 0x3f800000;
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  iVar3 = *(int *)(param_1 + 0xd4);
  switch(iVar3) {
  case 0:
    iVar3 = *(int *)(param_1 + 0xf0);
    break;
  case 1:
    iVar3 = *(int *)(param_1 + 0xe4);
    break;
  case 2:
    iVar3 = *(int *)(param_1 + 0xe8);
    break;
  case 3:
    iVar3 = *(int *)(param_1 + 0xec);
    break;
  default:
    goto switchD_00446f5c_default;
  }
  *(int *)(param_1 + 0xf8) = iVar3;
switchD_00446f5c_default:
  uVar4 = (undefined3)((uint)iVar3 >> 8);
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xf0);
    return CONCAT31(uVar4,1);
  case 1:
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xe4);
    return CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0xe4) >> 8),1);
  case 2:
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xe8);
    return CONCAT31(uVar4,1);
  case 3:
    iVar3 = *(int *)(param_1 + 0xec);
    *(int *)(param_1 + 0xfc) = iVar3;
  }
switchD_00446f8c_default:
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}




/* Function: FUN_00447000 */

float10 __fastcall FUN_00447000(int param_1)

{
  return (float10)*(float *)(param_1 + 0xf4);
}




/* Function: FUN_00447010 */

int __fastcall FUN_00447010(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}




/* Function: FUN_00447030 */

undefined1 __fastcall FUN_00447030(undefined4 param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  return local_1;
}




/* Function: FUN_00447040 */

void __thiscall FUN_00447040(float *param_1,float *param_2)

{
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - param_2[1];
  param_1[2] = param_1[2] - param_2[2];
  return;
}




/* Function: FUN_00447070 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00447070(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [2];
  float local_10;
  undefined1 local_c [12];
  
  fVar7 = (float10)FUN_0041ce10();
  fVar1 = (float)fVar7;
  fVar8 = (float10)param_1[0x29] - (float10)fVar1;
  param_1[0x29] = (float)fVar8;
  fVar9 = (float10)fsin(fVar8 + fVar8);
  fVar7 = (float10)_DAT_00588d60;
  fVar10 = (float10)fcos(fVar8 + fVar8);
  fVar8 = (float10)_DAT_00588d60;
  param_1[0x14] = (float)(fVar9 * fVar7 + (float10)param_1[0x14]);
  param_1[0x16] = (float)(fVar10 * fVar8) + param_1[0x16];
  param_1[0x1e] = (float)(fVar9 * fVar7 + (float10)param_1[0x1e]);
  param_1[0x20] = (float)(fVar10 * fVar8) + param_1[0x20];
  param_1[0x2a] = fVar1 * param_1[0x28] + param_1[0x2a];
  pfVar4 = (float *)FUN_0041caa0();
  local_30 = *pfVar4;
  local_2c = pfVar4[1];
  local_28 = pfVar4[2];
  local_3c = *param_1 - local_30;
  local_38 = param_1[1] - local_2c;
  local_34 = param_1[2] - local_28;
  if (local_3c < _DAT_00588d58) {
    iVar5 = FUN_004cf110();
    local_3c = (float)(iVar5 * 3000) + local_3c;
  }
  if (_DAT_00588d50 < local_3c) {
    iVar5 = FUN_004cf110();
    local_3c = local_3c - (float)(iVar5 * 3000);
  }
  if (local_34 < _DAT_00588d58) {
    iVar5 = FUN_004cf110();
    local_34 = (float)(iVar5 * 3000) + local_34;
  }
  if (_DAT_00588d50 < local_34) {
    iVar5 = FUN_004cf110();
    local_34 = local_34 - (float)(iVar5 * 3000);
  }
  local_24 = *param_1;
  local_20 = param_1[1];
  local_1c = param_1[2];
  uVar6 = FUN_0041d550(local_c,&local_3c,&local_30,&local_24);
  pfVar4 = (float *)FUN_0041d580(&local_30,uVar6);
  fVar2 = local_3c;
  fVar3 = local_34;
  if (pfVar4 != &local_3c) {
    fVar2 = *pfVar4;
    fVar3 = pfVar4[2];
  }
  pfVar4 = local_18;
  *param_1 = fVar2 + *param_1;
  param_1[2] = fVar3 + param_1[2];
  param_1[10] = fVar2 + param_1[10];
  param_1[0xc] = fVar3 + param_1[0xc];
  param_1[0x14] = fVar2 + param_1[0x14];
  param_1[0x16] = fVar3 + param_1[0x16];
  param_1[0x1e] = fVar2 + param_1[0x1e];
  param_1[0x20] = fVar3 + param_1[0x20];
  FUN_0041e470(1);
  FUN_0054778c(pfVar4);
  local_10 = -local_10;
  fVar2 = SQRT(local_18[0] * local_18[0] + local_10 * local_10);
  local_3c = _DAT_00582ad8;
  local_34 = _DAT_00582ad8;
  if ((float)_DAT_00587c48 <= fVar2) {
    fVar2 = _DAT_00583354 / fVar2;
    local_3c = local_10 * fVar2;
    local_34 = local_18[0] * fVar2;
  }
  local_24 = param_1[10];
  local_20 = param_1[0xb];
  local_1c = param_1[0xc];
  local_30 = *param_1;
  local_3c = param_1[0x2b] * _DAT_00583340 * local_3c;
  local_2c = param_1[1];
  local_28 = param_1[2];
  local_34 = local_34 * param_1[0x2b] * _DAT_00583340;
  uVar6 = FUN_0041d550(local_c,&local_30,&local_24,0x40000000);
  FUN_0043fa40(&local_30,uVar6);
  *param_1 = local_30 - local_3c;
  param_1[2] = local_28 - local_34;
  param_1[10] = local_30 + local_3c;
  param_1[0xc] = local_28 + local_34;
  local_24 = param_1[0x1e];
  local_20 = param_1[0x1f];
  local_1c = param_1[0x20];
  local_30 = param_1[0x14];
  local_2c = param_1[0x15];
  local_28 = param_1[0x16];
  uVar6 = FUN_0041d550(local_c,&local_30,&local_24,0x40000000);
  FUN_0043fa40(&local_30,uVar6);
  param_1[0x14] = local_30 + local_3c;
  param_1[0x16] = local_28 + local_34;
  param_1[0x1e] = local_30 - local_3c;
  param_1[0x20] = local_28 - local_34;
  if (param_1[0x15] <= param_1[0x30]) {
    param_1[0x15] = param_1[0x30];
    param_1[0x1f] = param_1[0x30];
  }
  else {
    uVar6 = FUN_0041d5b0(local_c,param_1 + 0x32,0x459c4000,fVar1);
    FUN_0041d5b0(&local_30,uVar6);
    param_1[0x14] = local_30 + param_1[0x14];
    fVar2 = param_1[0x15];
    param_1[0x15] = local_2c + fVar2;
    param_1[0x16] = local_28 + param_1[0x16];
    if (local_2c + fVar2 < param_1[0x30]) {
      param_1[0x15] = param_1[0x30];
    }
    param_1[0x1e] = local_30 + param_1[0x1e];
    fVar2 = param_1[0x1f];
    param_1[0x1f] = local_2c + fVar2;
    param_1[0x20] = local_28 + param_1[0x20];
    if (local_2c + fVar2 < param_1[0x30]) {
      param_1[0x1f] = param_1[0x30];
    }
  }
  if (param_1[0x29] < _DAT_00583354) {
    uVar6 = FUN_0041d5b0(local_c,param_1 + 0x32,0x459c4000,fVar1);
    FUN_0041d5b0(&local_30,uVar6);
    *param_1 = local_30 + *param_1;
    fVar1 = param_1[1];
    param_1[1] = local_2c + fVar1;
    param_1[2] = local_28 + param_1[2];
    if (local_2c + fVar1 < param_1[0x30]) {
      param_1[0x29] = 0.0;
    }
    param_1[10] = local_30 + param_1[10];
    fVar1 = param_1[0xb];
    param_1[0xb] = local_2c + fVar1;
    param_1[0xc] = local_28 + param_1[0xc];
    if (local_2c + fVar1 < param_1[0x30]) {
      param_1[0x29] = 0.0;
    }
  }
  fVar1 = _DAT_00583354 / param_1[0x2b];
  fVar2 = fVar1 * param_1[1] + param_1[0x2a];
  param_1[0x11] = fVar2;
  param_1[7] = fVar2;
  fVar1 = fVar1 * param_1[0x15] + param_1[0x2a];
  param_1[0x25] = fVar1;
  param_1[0x1b] = fVar1;
  return;
}




/* Function: FUN_004475f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __thiscall FUN_004475f0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if (*(float *)(param_1 + 0xc0) < *(float *)(param_1 + 0x54)) {
    return 0;
  }
  local_3c = *(undefined4 *)(param_1 + 0x50);
  local_38 = *(undefined4 *)(param_1 + 0x54);
  local_34 = *(undefined4 *)(param_1 + 0x58);
  local_30 = *(undefined4 *)(param_1 + 0x78);
  local_2c = *(undefined4 *)(param_1 + 0x7c);
  local_28 = *(undefined4 *)(param_1 + 0x80);
  puVar3 = &local_3c;
  uVar1 = rand();
  uVar2 = FUN_0041d580(local_24,&local_30,&local_3c,(float)(uVar1 & 0xff) * _DAT_00588d68,puVar3);
  uVar2 = FUN_0041d5b0(local_18,uVar2);
  puVar3 = (undefined4 *)FUN_0041d550(local_c,uVar2);
  if (puVar3 != param_2) {
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
  }
  param_2[1] = (float)param_2[1] + _DAT_00587d94;
  return 1;
}




/* Function: FUN_004476c0 */

undefined4 __fastcall FUN_004476c0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x94);
  iVar1 = 3;
  do {
    if (*piVar2 != 0) {
      FUN_004fb820();
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar2 = *(int **)(param_1 + 0x88);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x84);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  *(undefined1 *)(param_1 + 0x100) = 0;
  return 1;
}




/* Function: FUN_00447720 */

void FUN_00447720(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057bbd2;
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




/* Function: FUN_004477a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_004477a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,float param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float local_3c;
  float local_38;
  float local_34;
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
  
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  puVar3 = param_1 + 0x32;
  *puVar3 = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x29] = param_6;
  param_1[0x28] = param_5;
  param_1[0x2b] = param_4;
  if (param_2 != param_1 + 0x2c) {
    param_1[0x2c] = *param_2;
    param_1[0x2d] = param_2[1];
    param_1[0x2e] = param_2[2];
  }
  if (param_3 != param_1 + 0x2f) {
    param_1[0x2f] = *param_3;
    param_1[0x30] = param_3[1];
    param_1[0x31] = param_3[2];
  }
  uVar1 = rand();
  fVar5 = (float10)(uVar1 & 0xff) * (float10)_DAT_00588d68 * (float10)_DAT_00588d6c;
  fVar6 = (float10)fsin(fVar5);
  fVar5 = (float10)fcos(fVar5);
  local_34 = param_4 * _DAT_00583340;
  local_3c = (float)(fVar6 * (float10)local_34);
  local_38 = local_34 * _DAT_00582ad8;
  local_34 = (float)fVar5 * local_34;
  FUN_0041d580(&local_30,param_2,&local_3c);
  FUN_0041d550(&local_24,param_2,&local_3c);
  FUN_0041d550(&local_18,param_2,&local_3c);
  FUN_0041d580(&local_c,param_2,&local_3c);
  *param_1 = local_30;
  param_1[2] = local_28;
  param_1[10] = local_24;
  param_1[0xb] = local_20;
  param_1[0xc] = local_1c;
  param_1[0x14] = local_18;
  param_1[0x10] = 0x40000000;
  param_1[0x15] = local_14;
  param_1[0x1a] = 0x40000000;
  param_1[1] = local_2c;
  param_1[0x16] = local_10;
  param_1[0x1e] = local_c;
  param_1[6] = 0;
  param_1[7] = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x1b] = 0;
  param_1[0x1f] = local_8;
  param_1[0x20] = local_4;
  param_1[0x24] = 0;
  param_1[0x25] = 0x3f800000;
  param_1[0x2a] = 0;
  puVar2 = (undefined4 *)FUN_0041d580(&local_c,param_3,param_2);
  if (puVar2 != puVar3) {
    *puVar3 = *puVar2;
    param_1[0x33] = puVar2[1];
    param_1[0x34] = puVar2[2];
  }
  FUN_0041d4b0();
  puVar3 = param_1 + 4;
  iVar4 = 4;
  do {
    puVar3[4] = puVar3[2];
    puVar3[-1] = 0;
    *puVar3 = 0x3f800000;
    puVar3[1] = 0;
    puVar3[5] = puVar3[3];
    puVar3 = puVar3 + 10;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return param_1;
}




/* Function: FUN_00448490 */

void __thiscall FUN_00448490(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057bbe0;
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
      FUN_00447720();
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




/* Function: FUN_00448730 */

void __thiscall FUN_00448730(int param_1,undefined4 param_2)

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
  FUN_00448490(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_00449110 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00449110(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00588df0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0x3f800000;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  iVar2 = 3;
  pfVar3 = (float *)(param_1 + 0x2b);
  do {
    iVar1 = rand();
    iVar2 = iVar2 + -1;
    *pfVar3 = _DAT_005b9004 / (((float)iVar1 * _DAT_00588dec + _DAT_00588de8) * _DAT_00588de4);
    pfVar3 = pfVar3 + 1;
  } while (iVar2 != 0);
  iVar2 = 3;
  param_1[0x2e] = _DAT_005b9004 * _DAT_00588de0;
  param_1[0x2f] = _DAT_005b9004 * _DAT_00588de0;
  param_1[0x30] = _DAT_005b9004 * _DAT_00588de0;
  pfVar3 = (float *)(param_1 + 0x31);
  do {
    iVar1 = rand();
    iVar2 = iVar2 + -1;
    *pfVar3 = _DAT_005b9004 / (((float)iVar1 * _DAT_00588ddc + _DAT_00588878) * _DAT_00588de4);
    pfVar3 = pfVar3 + 1;
  } while (iVar2 != 0);
  param_1[0x39] = 0x3f733333;
  param_1[0x3a] = 0x3f4ccccd;
  param_1[0x3b] = 0x3ee66666;
  param_1[0x3c] = 0x3f800000;
  param_1[0x3e] = 0;
  switch(param_1[0x34]) {
  case 0:
    param_1[0x3f] = 0x3f800000;
    param_1[0x3d] = 0x3f800000;
    return param_1;
  case 1:
    param_1[0x3f] = 0x3f733333;
    param_1[0x3d] = 0x3f733333;
    return param_1;
  case 2:
    param_1[0x3f] = 0x3f4ccccd;
    param_1[0x3d] = 0x3f4ccccd;
    return param_1;
  case 3:
    param_1[0x3f] = 0x3ee66666;
    param_1[0x3d] = 0x3ee66666;
  }
  return param_1;
}




/* Function: FUN_00449300 */

void __fastcall FUN_00449300(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[0x43];
  *param_1 = &PTR_LAB_00588df0;
  if (puVar2 != (undefined4 *)param_1[0x44]) {
    do {
      if ((void *)*puVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar2);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined4 *)param_1[0x44]);
  }
  if ((void *)param_1[0x43] == (void *)0x0) {
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    FUN_004476c0();
    if ((void *)param_1[0x43] == (void *)0x0) {
      param_1[0x43] = 0;
      param_1[0x44] = 0;
      param_1[0x45] = 0;
      piVar1 = (int *)param_1[0x22];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        param_1[0x22] = 0;
      }
      piVar1 = (int *)param_1[0x21];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        param_1[0x21] = 0;
      }
      FUN_0040da90();
      return;
    }
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x43]);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_1[0x43]);
}




/* Function: FUN_004493d0 */

void * __thiscall FUN_004493d0(void *param_1,byte param_2)

{
  FUN_00449300();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004493f0 */

void __fastcall FUN_004493f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x118) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x11c) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x120) = 0x43160000;
  *(undefined4 *)(param_1 + 0x124) = 0x43160000;
  *(undefined4 *)(param_1 + 300) = 1;
  *(undefined1 *)(param_1 + 0x14c) = 1;
  *(undefined1 *)(param_1 + 0x14d) = 1;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0x42b40000;
  *(undefined4 *)(param_1 + 0x150) = 0x43b40000;
  *(undefined4 *)(param_1 + 0x154) = DAT_00589e24;
  *(undefined1 *)(param_1 + 0x158) = DAT_00589e28;
  *(undefined4 *)(param_1 + 0x254) = 0x43480000;
  *(undefined4 *)(param_1 + 600) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x25c) = 0x42480000;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x268),"");
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x284),"");
  *(undefined1 *)(param_1 + 0xe5) = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0xe6) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 1;
  *(undefined4 *)(param_1 + 0xf0) = 0x41200000;
  *(undefined4 *)(param_1 + 0xf4) = 0x41a00000;
  return;
}




/* Function: FUN_00449520 */

void __fastcall FUN_00449520(int param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &DAT_0057bbf9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x268),
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




/* Function: FUN_00449580 */

void __fastcall FUN_00449580(int param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &DAT_0057bbf9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x284),
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




/* Function: FUN_004495e0 */

void __fastcall FUN_004495e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00589e2c;
  return;
}




/* Function: FUN_00449610 */

undefined4 * __thiscall
FUN_00449610(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char *param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057bc24;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00589e38;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 5));
  param_1[1] = param_2;
  param_1[2] = param_3;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[4] = param_4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 5),param_5);
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00449690 */

undefined4 * __thiscall
FUN_00449690(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char *param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057bc44;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00589e44;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4));
  param_1[1] = param_2;
  param_1[2] = param_3;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[3] = param_4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4),param_5);
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00449720 */

undefined4 * __thiscall
FUN_00449720(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057bc44;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00589e50;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4));
  param_1[2] = param_3;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[1] = param_2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4),param_4);
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_004497a0 */

undefined4 * __thiscall
FUN_004497a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057bc64;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00589e5c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 3));
  param_1[2] = param_3;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[1] = param_2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 3),param_4);
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00449b00 */

undefined4 FUN_00449b00(undefined4 param_1)

{
  LPCSTR lpCmdLine;
  undefined1 local_4 [4];
  
  lpCmdLine = (LPCSTR)FUN_0054fe20(param_1,1,local_4);
  WinExec(lpCmdLine,0);
  return 0;
}




/* Function: FUN_00449b30 */

undefined4 __fastcall FUN_00449b30(undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057bde2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0041ce80(param_1);
  if (iVar1 != 0) {
    FUN_0041ce80(param_1);
    iVar1 = FUN_0041c940();
    if (iVar1 != 0) {
      if (DAT_005b6070 != (int *)0x0) {
        (**(code **)(*DAT_005b6070 + 0xc))(1);
      }
      pvVar2 = operator_new(0xa8,(nothrow_t *)&DAT_005b6164);
      uStack_4 = 0;
      if (pvVar2 == (void *)0x0) {
        DAT_005b6070 = (int *)0x0;
      }
      else {
        DAT_005b6070 = (int *)FUN_00530730(pvVar2);
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_0044a5c0 */

undefined4 FUN_0044a5c0(undefined4 param_1)

{
  char *pcVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  undefined1 local_48 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057bc82;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041ce80();
  pcVar1 = (char *)FUN_0054fdc0(param_1,1,&DAT_005831e1,local_48);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44,pcVar1);
  local_4 = 0;
  this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
         FUN_004224c0(local_28,local_44);
  local_4._0_1_ = 1;
  pcVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (this);
  FUN_00412d30(param_1,pcVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
  ExceptionList = local_c;
  return 1;
}




/* Function: FUN_0044a670 */

undefined4 FUN_0044a670(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 local_48 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057bc99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041ce80();
  pcVar1 = (char *)FUN_0054fdc0(param_1,1,&DAT_005831e1,local_48);
  pcVar2 = (char *)FUN_0054fdc0(param_1,2,&DAT_005831e1,local_48);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,pcVar2);
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44,pcVar1);
  FUN_0042a4a0(local_44,local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_0044aa90 */

undefined4 FUN_0044aa90(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0054fe64(param_1,1,0,0);
  uVar1 = FUN_004cf110();
  FUN_0041ce80(uVar1);
  FUN_0041e5b0();
  iVar2 = FUN_00406fa0(uVar1);
  if (iVar2 != 0) {
    FUN_00412d30(param_1,iVar2);
    return 1;
  }
  FUN_00412dac(param_1);
  return 1;
}




/* Function: FUN_0044ab40 */

undefined4 FUN_0044ab40(undefined4 param_1)

{
  return param_1;
}




/* Function: FUN_0044ab50 */

void FUN_0044ab50(undefined4 param_1)

{
  FUN_0054ff5c(param_1,&PTR_s_print_00588e78,0xba);
  return;
}




/* Function: FUN_0044ab70 */

int __fastcall FUN_0044ab70(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x68;
}




/* Function: FUN_0044aba0 */

int __fastcall FUN_0044aba0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x4c;
}




/* Function: FUN_0044abd0 */

void __thiscall FUN_0044abd0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_c [3];
  
  if (local_c != param_1) {
    *param_1 = param_2;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (local_c != param_1 + 3) {
    param_1[3] = 0;
    param_1[4] = param_2;
    param_1[5] = 0;
  }
  if (local_c != param_1 + 6) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = param_2;
  }
  return;
}




/* Function: FUN_0044ac20 */

void __thiscall FUN_0044ac20(int param_1,char *param_2)

{
  *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x0044ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x1c0),param_2);
  return;
}




/* Function: FUN_0044ac40 */

undefined4 * __thiscall FUN_0044ac40(undefined4 *param_1)

{
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057bcc5;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xd));
  *param_1 = in_stack_00000020;
  param_1[1] = in_stack_00000024;
  param_1[3] = in_stack_0000002c;
  param_1[2] = in_stack_00000028;
  param_1[8] = in_stack_00000030;
  param_1[10] = in_stack_00000038;
  param_1[9] = in_stack_00000034;
  param_1[0xb] = in_stack_0000003c;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0xc] = in_stack_00000040;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xd),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000004);
  param_1[0x14] = in_stack_00000044;
  param_1[0x15] = in_stack_00000048;
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000004);
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0044ad00 */

undefined4 * __thiscall FUN_0044ad00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xd),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0xd));
  param_1[0x14] = param_2[0x14];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[0x15] = param_2[0x15];
  return param_1;
}




/* Function: FUN_0044ad80 */

int __fastcall FUN_0044ad80(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x58;
}




/* Function: FUN_0044adb0 */

undefined4 * __thiscall FUN_0044adb0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xd),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0xd));
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  return param_1;
}




/* Function: FUN_0044ae30 */

void __fastcall FUN_0044ae30(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0044ae33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x34));
  return;
}




/* Function: FUN_0044ae40 */

void FUN_0044ae40(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057bf12;
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




/* Function: FUN_0044aec0 */

void FUN_0044aec0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_140 [64];
  undefined1 local_100 [128];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  uVar1 = FUN_005463f0(local_40,param_1);
  uVar2 = FUN_005485e8(param_3);
  uVar1 = FUN_00545edc(local_140,param_2,uVar2,uVar1);
  uVar1 = FUN_0041d7a0(local_80,uVar1);
  uVar1 = FUN_0041d7a0(local_100,uVar1);
  FUN_0041d670(uVar1);
  FUN_00407300();
  FUN_00407300();
  FUN_00407300();
  FUN_00407300();
  FUN_00407300();
  return;
}




/* Function: FUN_0044af80 */

void * __thiscall FUN_0044af80(void *param_1,byte param_2)

{
  FUN_0044afa0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0044afa0 */

void __fastcall FUN_0044afa0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057bcd8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 5));
  *param_1 = &PTR_LAB_00589e2c;
  ExceptionList = local_c;
  return;
}




/* Function: FUN_0044aff0 */

void __fastcall FUN_0044aff0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057bcd8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4));
  *param_1 = &PTR_LAB_00589e2c;
  ExceptionList = local_c;
  return;
}




/* Function: FUN_0044b040 */

void * __thiscall FUN_0044b040(void *param_1,byte param_2)

{
  FUN_0044aff0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0044b060 */

void * __thiscall FUN_0044b060(void *param_1,byte param_2)

{
  FUN_0044b080();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0044b080 */

void __fastcall FUN_0044b080(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057bcd8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 3));
  *param_1 = &PTR_LAB_00589e2c;
  ExceptionList = local_c;
  return;
}




/* Function: FUN_0044b0d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0044b0d0(float *param_1)

{
  float10 fVar1;
  
  if (ABS(param_1[2]) <= ABS(*param_1)) {
    fVar1 = (float10)fpatan((float10)param_1[2] / (float10)*param_1,(float10)1);
    fVar1 = -fVar1 - (float10)_DAT_00588838;
    if (_DAT_00582ad8 < *param_1) {
      fVar1 = fVar1 + (float10)_DAT_00589ee8;
    }
  }
  else {
    fVar1 = (float10)fpatan((float10)*param_1 / (float10)param_1[2],(float10)1);
    if (param_1[2] < _DAT_00582ad8) {
      return (float10)_DAT_00588d6c - (fVar1 + (float10)_DAT_00589ee8);
    }
  }
  return (float10)_DAT_00588d6c - fVar1;
}




/* Function: FUN_0044b140 */

undefined4 __thiscall FUN_0044b140(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0041ce80(param_1);
  if (iVar1 != 0) {
    FUN_0054fe64(param_2,param_3,0,0x3ff00000);
    piVar2 = (int *)FUN_004cf110();
    if (piVar2 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar2 + 0x58))(&stack0xffffffff);
      return uVar3;
    }
  }
  return 0;
}




/* Function: FUN_0044b290 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044b290(void)

{
  int iVar1;
  double dVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *unaff_EBX;
  int *piVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057bde2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_0041ce80();
  pvVar4 = operator_new(0xbc,(nothrow_t *)&DAT_005b6164);
  piVar6 = (int *)0x0;
  local_4 = 0;
  if (pvVar4 != (void *)0x0) {
    piVar6 = (int *)FUN_005398c0();
  }
  iVar1 = *piVar6;
  local_4 = 0xffffffff;
  uVar5 = FUN_0041c940();
  (**(code **)(iVar1 + 0x1c))(uVar3,uVar5);
  uVar5 = 1;
  uVar3 = FUN_0041c940();
  FUN_00423250(piVar6,uVar3,uVar5);
  FUN_0041c940();
  FUN_0042a4f0();
  dVar2 = (double)(int)piVar6;
  if ((int)piVar6 < 0) {
    dVar2 = dVar2 + _DAT_00589ec0;
  }
  FUN_00412cfc(local_4,dVar2);
  ExceptionList = unaff_EBX;
  return 1;
}




/* Function: FUN_0044b3f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044b3f0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  bool *pbVar3;
  undefined4 *puVar4;
  float10 fVar5;
  bool local_24 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    iVar1 = FUN_0041ce80();
    fVar5 = (float10)FUN_0054fe64(param_1,1,0,0x3ff00000);
    local_24[0] = fVar5 != (float10)_DAT_00582ae8;
    fVar5 = (float10)FUN_0054fe64(param_1,2,0,0x40140000);
    local_20 = (float)fVar5;
    fVar5 = (float10)FUN_0054fe64(param_1,3,0,0x40d38800);
    local_1c = (float)fVar5;
    fVar5 = (float10)FUN_0054fe64(param_1,4,0,0x3ff00000);
    local_18 = (float)fVar5;
    fVar5 = (float10)FUN_0054fe64(param_1,5,0,0x406fe000);
    local_14 = (float)(fVar5 * (float10)_DAT_00589f18);
    fVar5 = (float10)FUN_0054fe64(param_1,6,0,0x406fe000);
    local_10 = (float)(fVar5 * (float10)_DAT_00589f18);
    fVar5 = (float10)FUN_0054fe64(param_1,7,0,0x406fe000);
    local_c = (float)(fVar5 * (float10)_DAT_00589f18);
    pbVar3 = local_24;
    puVar4 = (undefined4 *)(iVar1 + 0x1af4);
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *(undefined4 *)pbVar3;
      pbVar3 = pbVar3 + 4;
      puVar4 = puVar4 + 1;
    }
  }
  return 0;
}




/* Function: FUN_0044b4e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044b4e0(undefined4 param_1)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined1 local_38 [4];
  undefined4 local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057bd02;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_34 = FUN_0041ce80();
  iVar3 = FUN_0041c940();
  if (iVar3 == 0) {
    FUN_0041ce80();
    uVar4 = FUN_0041e5b0();
    FUN_0040a410(uVar4);
    FUN_00412cfc(param_1,0,0);
  }
  else {
    piVar6 = (int *)0x0;
    local_20 = FUN_0054fdc0(param_1,1,0,local_38);
    local_24 = FUN_0054fdc0(param_1,2,0,local_38);
    FUN_0054fdc0(param_1,3,0,local_38);
    local_28 = FUN_0054fdc0(param_1,4,0,local_38);
    fVar7 = (float10)FUN_0054fe64(param_1,5,0,0x40586a00);
    local_30 = (float)fVar7;
    fVar7 = (float10)FUN_0054fe64(param_1,6,0,0x40590000);
    local_2c = (float)fVar7;
    FUN_0054fe64(param_1,7,0,0x40300000);
    iVar3 = FUN_004cf110();
    local_1c = operator_new(0x2a0,(nothrow_t *)&DAT_005b6164);
    local_c = 0;
    if (local_1c != (void *)0x0) {
      piVar6 = (int *)FUN_00466750();
    }
    local_c = 0xffffffff;
    iVar5 = FUN_004cf110();
    piVar6[0x79] = iVar5;
    iVar5 = FUN_004cf110();
    piVar6[0x7e] = iVar5;
    cVar2 = FUN_00465d40(local_34,local_20,local_24,local_28);
    if (cVar2 == '\0') {
      FUN_00412cfc(param_1,0,0);
      (**(code **)(*piVar6 + 0xc))();
    }
    else {
      local_20 = *piVar6;
      piVar6[0x80] = iVar3;
      piVar6[0x7f] = iVar3;
      uVar4 = FUN_0041c940();
      (**(code **)(local_20 + 0x1c))(local_34,uVar4);
      uVar8 = 1;
      uVar4 = FUN_0041c940();
      FUN_00423250(piVar6,uVar4,uVar8);
      FUN_0041c940();
      FUN_0042a4f0();
      dVar1 = (double)(int)piVar6;
      if ((int)piVar6 < 0) {
        dVar1 = dVar1 + _DAT_00589ec0;
      }
      local_1c = piVar6;
      FUN_00412cfc(param_1,dVar1);
    }
  }
  ExceptionList = local_14;
  return 1;
}




/* Function: FUN_0044b6d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044b6d0(undefined4 param_1)

{
  double dVar1;
  void *pvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057bde2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041ce80();
  iVar3 = DAT_005b7ec0;
  if (DAT_005b7ec0 == 0) {
    pvVar2 = operator_new(200,(nothrow_t *)&DAT_005b6164);
    local_4 = iVar3;
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004f8860();
    }
    local_4 = 0xffffffff;
    FUN_004f59b0();
  }
  dVar1 = (double)iVar3;
  if (iVar3 < 0) {
    dVar1 = dVar1 + _DAT_00589ec0;
  }
  FUN_00412cfc(param_1,dVar1);
  ExceptionList = local_c;
  return 1;
}




/* Function: FUN_0044b770 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044b770(undefined4 param_1)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 local_40;
  undefined1 local_2c [4];
  int *local_28;
  float local_24;
  float local_20;
  float local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057bd22;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar3 = FUN_0041ce80();
  iVar4 = FUN_0041c940();
  if (iVar4 == 0) {
    FUN_0041ce80();
    uVar3 = FUN_0041e5b0();
    FUN_0040a410(uVar3);
    FUN_00412cfc(param_1,0,0);
    ExceptionList = local_14;
    return 1;
  }
  piVar7 = (int *)0x0;
  fVar8 = (float10)FUN_0054fe64(param_1,1,0,0);
  fVar9 = (float10)FUN_0054fe64(param_1,2,0,0);
  fVar10 = (float10)FUN_0054fe64(param_1,3,0,0);
  iVar4 = FUN_0041ce80();
  if (iVar4 == 0) {
LAB_0044b824:
    local_40 = 0;
  }
  else {
    FUN_0054fe64(param_1,4,0,0x3ff00000);
    piVar5 = (int *)FUN_004cf110();
    if (piVar5 == (int *)0x0) goto LAB_0044b824;
    local_40 = (**(code **)(*piVar5 + 0x50))();
  }
  iVar4 = FUN_0054fdc0(param_1,5,0,local_2c);
  local_28 = operator_new(0x378,(nothrow_t *)&DAT_005b6164);
  local_c = 0;
  if (local_28 != (void *)0x0) {
    piVar7 = (int *)FUN_0048e3d0();
  }
  local_c = 0xffffffff;
  uVar11 = 1;
  uVar6 = FUN_0041c940();
  FUN_00423250(piVar7,uVar6,uVar11);
  cVar2 = FUN_004803b0(uVar3,local_40);
  if (cVar2 == '\0') {
LAB_0044b8cf:
    FUN_00412cfc(param_1,0,0);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))();
    }
  }
  else {
    if (iVar4 == 0) {
      local_24 = (float)fVar8;
      local_20 = (float)fVar9;
      local_1c = (float)fVar10;
      cVar2 = FUN_00486df0(uVar3,&local_24);
      if (cVar2 == '\0') goto LAB_0044b8cf;
    }
    else {
      FUN_0047daa0(uVar3,iVar4);
    }
    iVar4 = *piVar7;
    uVar6 = FUN_0041c940();
    (**(code **)(iVar4 + 0x1c))(uVar3,uVar6);
    FUN_0041c940();
    FUN_0042a4f0();
    dVar1 = (double)(int)piVar7;
    if ((int)piVar7 < 0) {
      dVar1 = dVar1 + _DAT_00589ec0;
    }
    local_28 = piVar7;
    FUN_00412cfc(param_1,dVar1);
  }
  ExceptionList = local_14;
  return 1;
}




/* Function: FUN_0044ba50 */

undefined4 FUN_0044ba50(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  uVar1 = FUN_0041ce80();
  iVar2 = FUN_0041c940();
  if (iVar2 == 0) {
    FUN_0041ce80();
    uVar1 = FUN_0041e5b0();
    FUN_0040a410(uVar1);
    FUN_00412cfc(param_1,0,0);
    FUN_00412cfc(param_1,0,0);
    FUN_00412cfc(param_1,0,0);
    return 3;
  }
  iVar2 = FUN_0041ce80();
  if (iVar2 != 0) {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    piVar3 = (int *)FUN_004cf110();
    if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0x48))(), iVar2 != 0)) {
      fVar4 = (float10)FUN_0054fe64(param_1,4,0,0);
      fVar5 = (float10)FUN_0054fe64(param_1,3,0,0);
      fVar6 = (float10)FUN_0054fe64(param_1,2,0,0);
      fStack_14 = (float)fVar6;
      fStack_20 = 0.0;
      fStack_1c = 0.0;
      fStack_18 = 0.0;
      uStack_24 = 0;
      fStack_10 = (float)fVar5;
      fStack_c = (float)fVar4;
      FUN_0046be70(uVar1,&fStack_14,&fStack_20,&uStack_24);
      FUN_00412cfc(param_1,(double)fStack_20);
      FUN_00412cfc(param_1,(double)fStack_1c);
      FUN_00412cfc(param_1,(double)fStack_18);
      return 3;
    }
  }
  FUN_00412cfc(param_1,0);
  FUN_00412cfc(param_1,0,0);
  FUN_00412cfc(param_1,0,0);
  return 3;
}




/* Function: FUN_0044bd00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0044bd00(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  void *pvVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  uint unaff_retaddr;
  int *piVar11;
  undefined1 local_58 [4];
  float local_54;
  float local_50;
  float local_4c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_48 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057bd42;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    FUN_0041ce80();
    iVar2 = FUN_0041c940();
    if (iVar2 == 0) {
      FUN_00412cfc(param_1,0,0);
    }
    else {
      fVar8 = (float10)FUN_0054fe94(param_1,3);
      fVar9 = (float10)FUN_0054fe94(param_1,2);
      fVar10 = (float10)FUN_0054fe94(param_1,1);
      local_54 = (float)fVar10;
      local_50 = (float)fVar9;
      local_4c = (float)fVar8;
      FUN_0054fe94(param_1,4);
      uVar3 = FUN_004cf110();
      FUN_0054fe94(param_1,5);
      uVar4 = FUN_004cf110();
      fVar8 = (float10)FUN_0054fe94(param_1,6);
      pcVar5 = (char *)FUN_0054fe20(param_1,7,local_58);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c,pcVar5);
      local_4 = 0;
      pcVar5 = (char *)FUN_0054fe20(param_1,8,local_58);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_48,pcVar5);
      local_4 = CONCAT31(local_4._1_3_,1);
      pvVar6 = operator_new(0xf4,(nothrow_t *)&DAT_005b6164);
      if ((pvVar6 == (void *)0x0) ||
         (piVar7 = (int *)FUN_0053b740(&local_54,uVar3,uVar4,(float)fVar8,local_2c,local_48),
         piVar7 == (int *)0x0)) {
        uVar3 = 0;
      }
      else {
        (**(code **)(*piVar7 + 0x1c))(iVar1,iVar2);
        uVar3 = 1;
        piVar11 = piVar7;
        FUN_0041ce80(piVar7,iVar2,1);
        FUN_00423250(piVar11,iVar2,uVar3);
        FUN_0042a4f0(iVar1);
        iVar2 = *piVar7;
        uVar3 = FUN_0041c930(iVar1);
        (**(code **)(iVar2 + 0x14))(uVar3);
        uVar3 = 0x3ff00000;
      }
      FUN_00412cfc(param_1,0,uVar3);
      local_4 = local_4 & 0xffffff00;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_48);
      local_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
    }
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_0044bed0 */

undefined4 FUN_0044bed0(undefined4 param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_0054fe64(param_1,1,0,0);
    fVar3 = (float10)FUN_0054fe64(param_1,2,0,0);
    fVar4 = (float10)FUN_0054fe64(param_1,3,0,0);
    fVar5 = (float10)FUN_0054fe64(param_1,4,0,0);
    fVar6 = (float10)FUN_0054fe64(param_1,5,0,0);
    fVar7 = (float10)FUN_0054fe64(param_1,6,0,0);
    fVar8 = (float10)FUN_0054fe64(param_1,7,0,0);
    local_20 = (float)fVar5;
    local_1c = (float)fVar6;
    local_18 = (float)fVar7;
    local_14 = (float)fVar2;
    local_10 = (float)fVar3;
    local_c = (float)fVar4;
    FUN_0041e610(&local_14,&local_20,(float)fVar8);
  }
  return 0;
}




/* Function: FUN_0044c080 */

/* WARNING: Removing unreachable block (ram,0x0044c0b9) */
/* WARNING: Removing unreachable block (ram,0x0044c0f5) */

undefined4 FUN_0044c080(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar4;
  float10 fVar5;
  undefined4 *puVar6;
  float fStack_94;
  undefined1 auStack_8c [4];
  float fStack_88;
  float fStack_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined1 local_68 [24];
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
  uint local_c;
  
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    iVar1 = FUN_0041c920();
    fVar4 = (float10)FUN_0054fe64(param_1,1,(double)(*(uint *)(iVar1 + 8) >> 1));
    iVar1 = FUN_0041c920();
    local_c = *(uint *)(iVar1 + 0xc) >> 1;
    fVar5 = (float10)FUN_0054fe64(param_1,2,(double)local_c);
    local_7c = (float)fVar5;
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    local_4c = 0;
    local_14 = 0x3f800000;
    local_28 = 0x3f800000;
    local_3c = 0x3f800000;
    local_50 = 0x3f800000;
    local_78 = 0;
    local_80 = (float)fVar4;
    uVar2 = FUN_0041e470();
    uVar3 = FUN_0041e470();
    puVar6 = &local_50;
    uVar2 = FUN_0041c920(uVar3,uVar2,puVar6);
    thunk_FUN_004959fb(local_68,&local_80,uVar2);
    uVar2 = FUN_0041e470(1);
    uVar3 = FUN_0041e470(3);
    uVar2 = FUN_0041c920(uVar3,uVar2,local_68);
    thunk_FUN_004959fb(auStack_8c,&stack0xffffff68,uVar2);
    fStack_88 = fStack_94;
    fStack_84 = 1.0;
    FUN_00412cfc(param_1,(double)unaff_EBX);
    FUN_00412cfc(param_1,(double)fStack_88);
    FUN_00412cfc(param_1,(double)fStack_84);
    FUN_00412cfc(param_1,(double)(float)puVar6);
    FUN_00412cfc(param_1,(double)unaff_EDI);
    FUN_00412cfc(param_1,(double)unaff_ESI);
    return 6;
  }
  return 0;
}




/* Function: FUN_0044c620 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044c620(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int local_10;
  
  local_10 = FUN_0041ce80();
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    piVar2 = (int *)FUN_004cf110();
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x6c))((int)&uStack_18 + 1);
      local_10 = iVar1;
      iVar3 = FUN_0041ce80();
      piVar2 = (int *)0x0;
      if (iVar3 != 0) {
        FUN_0054fe64(param_1,2,0,0x3ff00000);
        piVar2 = (int *)FUN_004cf110();
      }
      piVar2 = (int *)(**(code **)(*piVar2 + 0x70))((int)&uStack_1c + 2);
      if (piVar2 == (int *)0x0) {
        if (iVar1 != 0) {
          iVar1 = FUN_0051a3c0();
          if (iVar1 != 0) {
            piVar2 = (int *)FUN_0051a3c0();
            (**(code **)(*piVar2 + 0xdc))(uStack_18);
            return 0;
          }
        }
      }
      else {
        iVar1 = FUN_0041ce80();
        piVar4 = (int *)0x0;
        if (iVar1 != 0) {
          FUN_0054fe64(param_1,3,0,0x3ff00000);
          piVar4 = (int *)FUN_004cf110();
        }
        uVar5 = 0;
        if (piVar4 != (int *)0x0) {
          uVar5 = (**(code **)(*piVar4 + 0x48))(&stack0xffffffe3);
        }
        FUN_0054fe64(param_1,4,0,0);
        fVar6 = (float10)FUN_0054fe64(param_1,5,0,0);
        uStack_1c = CONCAT31(uStack_1c._1_3_,1);
        if (fVar6 <= (float10)_DAT_00582ae8) {
          uStack_1c = (uint)uStack_1c._1_3_ << 8;
        }
        if (iStack_14 != 0) {
          (**(code **)(*piVar2 + 0xd8))(uStack_18,iStack_14,uVar5,uStack_1c);
        }
      }
    }
  }
  return 0;
}




/* Function: FUN_0044c770 */

undefined4 FUN_0044c770(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = param_1;
  piVar2 = (int *)(**(code **)(*param_1 + 0x58))(&param_1);
  iVar3 = (**(code **)(*piVar1 + 0x54))(&stack0xfffffffb);
  if (piVar2 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar2 + 0x88))();
    FUN_0041d670(uVar4);
    return 1;
  }
  if (iVar3 != 0) {
    FUN_0041d670(iVar3 + 0x84);
    return 1;
  }
  return 0;
}




/* Function: FUN_0044c7d0 */

undefined4 FUN_0044c7d0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  
  piVar1 = param_1;
  piVar2 = (int *)(**(code **)(*param_1 + 0x58))(&param_1);
  iVar3 = (**(code **)(*piVar1 + 0x54))(&stack0xfffffffb);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x8c))(unaff_retaddr);
    return 1;
  }
  if (iVar3 != 0) {
    FUN_0041d670(unaff_retaddr);
    return 1;
  }
  return 0;
}




/* Function: FUN_0044cc60 */

undefined4 FUN_0044cc60(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_12 [2];
  uint local_10;
  int *local_c;
  
  iVar2 = FUN_0041ce80();
  if (iVar2 != 0) {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    local_c = (int *)FUN_004cf110();
    if (local_c != (int *)0x0) {
      FUN_0054fe64(param_1,2,0,0x406fe000);
      uVar3 = FUN_004cf110();
      FUN_0054fe64(param_1,3,0,0x406fe000);
      uVar4 = FUN_004cf110();
      FUN_0054fe64(param_1,4,0,0x406fe000);
      local_10 = FUN_004cf110();
      FUN_0054fe64(param_1,5,0,0x406fe000);
      iVar2 = FUN_004cf110();
      piVar1 = local_c;
      uVar3 = ((iVar2 << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff) << 8 | local_10 & 0xff;
      iVar2 = (**(code **)(*local_c + 0x54))(local_12);
      if (iVar2 != 0) {
        *(uint *)(iVar2 + 0x264) = uVar3;
      }
      iVar2 = (**(code **)(*piVar1 + 0x58))(&stack0xffffffeb);
      if (iVar2 != 0) {
        *(uint *)(iVar2 + 0x234) = uVar3;
      }
    }
  }
  return 0;
}




/* Function: FUN_0044cdd0 */

undefined4 FUN_0044cdd0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uStack_14;
  int iStack_10;
  
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    piVar2 = (int *)FUN_004cf110();
    if (piVar2 != (int *)0x0) {
      iStack_10 = (**(code **)(*piVar2 + 0x48))((int)&uStack_14 + 3);
      if (iStack_10 != 0) {
        FUN_0054fe64(param_1,2,0,0x406fe000);
        uVar3 = FUN_004cf110();
        FUN_0054fe64(param_1,3,0,0x406fe000);
        uVar4 = FUN_004cf110();
        FUN_0054fe64(param_1,4,0,0x406fe000);
        uStack_14 = FUN_004cf110();
        FUN_0054fe64(param_1,5,0,0x406fe000);
        iVar1 = FUN_004cf110();
        *(uint *)(iStack_10 + 0x2e4) =
             ((iVar1 << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff) << 8 | uStack_14 & 0xff;
      }
    }
  }
  return 0;
}




/* Function: FUN_0044d390 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0044d390(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float *pfVar5;
  float unaff_EBX;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uStack_2c;
  float afStack_28 [9];
  
  iVar2 = FUN_0041ce80();
  if (iVar2 != 0) {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    piVar3 = (int *)FUN_004cf110();
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x58))((int)&uStack_2c + 3);
      if (piVar3 != (int *)0x0) {
        iVar2 = FUN_004ffac0();
        if (iVar2 != 0) {
          pfVar5 = afStack_28;
          pcVar8 = "Point01";
          uVar7 = 2;
          uVar6 = param_1;
          uVar4 = FUN_0054fdc0();
          FUN_0054fe64(param_1,3,0,0,uVar6,uVar7,pcVar8,pfVar5);
          iVar2 = FUN_004cf110();
          uStack_2c = (float)CONCAT31(uStack_2c._1_3_,iVar2 != 0);
          afStack_28[1] = 0.0;
          afStack_28[2] = 0.0;
          afStack_28[3] = 0.0;
          cVar1 = (**(code **)(*piVar3 + 0x94))(uVar4,afStack_28 + 1,uStack_2c);
          if (cVar1 == '\0') {
            (**(code **)(*piVar3 + 0x88))();
            pfVar5 = (float *)FUN_00547ab0();
            if (pfVar5 != (float *)&stack0xffffffd0) {
              unaff_EBX = *pfVar5;
              uStack_2c = pfVar5[1];
              afStack_28[0] = pfVar5[2];
            }
          }
          FUN_00412cfc(param_1,(double)unaff_EBX);
          FUN_00412cfc(param_1,(double)uStack_2c);
          FUN_00412cfc(param_1,(double)afStack_28[0]);
          return 3;
        }
      }
    }
  }
  return 0;
}




/* Function: FUN_0044d4d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044d4d0(undefined4 param_1)

{
  float fVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [20];
  
  iVar3 = FUN_0041ce80();
  if (iVar3 != 0) {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    piVar4 = (int *)FUN_004cf110();
    if (piVar4 != (int *)0x0) {
      uStack_34 = (int *)(**(code **)(*piVar4 + 0x58))((int)&uStack_34 + 3);
      if (uStack_34 != (int *)0x0) {
        iVar3 = FUN_004ffac0();
        if (iVar3 != 0) {
          FUN_0054fe64(param_1,2,0,0xbff00000);
          uVar5 = FUN_004cf110();
          FUN_0054fe64(param_1,3,0,0);
          iVar3 = FUN_004cf110();
          fStack_30 = 0.0;
          fStack_2c = 0.0;
          fStack_28 = 0.0;
          FUN_004ffac0();
          uVar6 = FUN_0043f900();
          if (uVar5 < uVar6) {
            FUN_004ffac0();
            iVar7 = FUN_0043f910();
            iVar7 = iVar7 + uVar5 * 0x4c;
            FUN_00412d30(param_1,iVar7);
            if (iVar3 == 0) {
              uStack_1c = *(undefined4 *)(iVar7 + 0x48);
              uStack_24 = *(undefined4 *)(iVar7 + 0x40);
              uStack_20 = *(undefined4 *)(iVar7 + 0x44);
              uVar8 = (**(code **)(*uStack_34 + 0x90))();
              FUN_005488cc(auStack_18,&uStack_24,uVar8);
              FUN_0041d430();
              FUN_00412cfc(param_1,(double)fStack_30);
              FUN_00412cfc(param_1,(double)fStack_2c);
              fVar1 = fStack_28;
            }
            else {
              FUN_00412cfc(param_1,(double)*(float *)(iVar7 + 0x40));
              FUN_00412cfc(param_1,(double)*(float *)(iVar7 + 0x44));
              fVar1 = *(float *)(iVar7 + 0x48);
            }
            FUN_00412cfc(param_1,(double)fVar1);
            return 4;
          }
          FUN_004ffac0();
          uStack_34 = (int *)FUN_0043f900();
          dVar2 = (double)(int)uStack_34;
          if ((int)uStack_34 < 0) {
            dVar2 = dVar2 + _DAT_00589ec0;
          }
          FUN_00412cfc(param_1,dVar2);
          return 1;
        }
      }
    }
  }
  return 0;
}




/* Function: FUN_0044dab0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044dab0(void)

{
  int iVar1;
  double dVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *unaff_EBX;
  int *piVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057bde2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_0041ce80();
  pvVar4 = operator_new(0x94,(nothrow_t *)&DAT_005b6164);
  piVar6 = (int *)0x0;
  local_4 = 0;
  if (pvVar4 != (void *)0x0) {
    piVar6 = (int *)FUN_0053cd30();
  }
  iVar1 = *piVar6;
  local_4 = 0xffffffff;
  uVar5 = FUN_0041c940();
  (**(code **)(iVar1 + 0x1c))(uVar3,uVar5);
  uVar5 = 1;
  uVar3 = FUN_0041c940();
  FUN_00423250(piVar6,uVar3,uVar5);
  FUN_0041c940();
  FUN_0042a4f0();
  dVar2 = (double)(int)piVar6;
  if ((int)piVar6 < 0) {
    dVar2 = dVar2 + _DAT_00589ec0;
  }
  FUN_00412cfc(local_4,dVar2);
  ExceptionList = unaff_EBX;
  return 1;
}




/* Function: FUN_0044db70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044db70(void)

{
  int iVar1;
  double dVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *unaff_EBX;
  int *piVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057bde2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_0041ce80();
  pvVar4 = operator_new(0x90,(nothrow_t *)&DAT_005b6164);
  piVar6 = (int *)0x0;
  local_4 = 0;
  if (pvVar4 != (void *)0x0) {
    piVar6 = (int *)FUN_0053d0b0();
  }
  iVar1 = *piVar6;
  local_4 = 0xffffffff;
  uVar5 = FUN_0041c940();
  (**(code **)(iVar1 + 0x1c))(uVar3,uVar5);
  uVar5 = 1;
  uVar3 = FUN_0041c940();
  FUN_00423250(piVar6,uVar3,uVar5);
  FUN_0041c940();
  FUN_0042a4f0();
  dVar2 = (double)(int)piVar6;
  if ((int)piVar6 < 0) {
    dVar2 = dVar2 + _DAT_00589ec0;
  }
  FUN_00412cfc(local_4,dVar2);
  ExceptionList = unaff_EBX;
  return 1;
}




/* Function: FUN_0044dea0 */

undefined4 FUN_0044dea0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float *pfVar4;
  float10 fVar5;
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_18 [20];
  
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    piVar2 = (int *)FUN_004cf110();
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x58))((int)&uStack_2c + 3);
      if (piVar2 != (int *)0x0) {
        iVar1 = FUN_004ffac0();
        if (iVar1 != 0) {
          fVar5 = (float10)FUN_0054fe64(param_1,2,0,0);
          uStack_2c = (float)fVar5;
          fVar5 = (float10)FUN_0054fe64(param_1,3,0,0);
          fStack_28 = (float)fVar5;
          fVar5 = (float10)FUN_0054fe64(param_1,4,0,0);
          fStack_1c = (float)fVar5;
          fStack_24 = uStack_2c;
          fStack_20 = fStack_28;
          uVar3 = (**(code **)(*piVar2 + 0x90))();
          pfVar4 = (float *)FUN_00548704(auStack_18,uVar3);
          if (pfVar4 != &fStack_24) {
            fStack_24 = *pfVar4;
            fStack_20 = pfVar4[1];
            fStack_1c = pfVar4[2];
          }
          FUN_00412cfc(param_1,(double)fStack_24);
          FUN_00412cfc(param_1,(double)fStack_20);
          FUN_00412cfc(param_1,(double)fStack_1c);
          return 3;
        }
      }
    }
  }
  return 0;
}




/* Function: FUN_0044dfd0 */

undefined4 FUN_0044dfd0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  float10 fVar4;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [72];
  
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    piVar2 = (int *)FUN_004cf110();
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x58))((int)&uStack_6c + 3);
      if (piVar2 != (int *)0x0) {
        iVar1 = FUN_004ffac0();
        if (iVar1 != 0) {
          fVar4 = (float10)FUN_0054fe64(param_1,2,0,0);
          uStack_6c = (float)fVar4;
          fVar4 = (float10)FUN_0054fe64(param_1,3,0,0);
          fStack_68 = (float)fVar4;
          fVar4 = (float10)FUN_0054fe64(param_1,4,0,0);
          fStack_5c = (float)fVar4;
          fStack_64 = uStack_6c;
          fStack_60 = fStack_68;
          (**(code **)(*piVar2 + 0x90))();
          FUN_00407260();
          uStack_58 = 0;
          uStack_54 = 0;
          uStack_50 = 0;
          FUN_00545c38();
          pfVar3 = (float *)FUN_00548704(&uStack_58,auStack_4c,&fStack_64);
          if (pfVar3 != &fStack_64) {
            fStack_64 = *pfVar3;
            fStack_60 = pfVar3[1];
            fStack_5c = pfVar3[2];
          }
          FUN_00412cfc(param_1,(double)fStack_64);
          FUN_00412cfc(param_1,(double)fStack_60);
          FUN_00412cfc(param_1,(double)fStack_5c);
          _eh_vector_destructor_iterator_(auStack_4c,0x10,4,FUN_00407150);
          return 3;
        }
      }
    }
  }
  return 0;
}




/* Function: FUN_0044eb00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044eb00(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_5c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_40 [28];
  undefined1 local_24 [16];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057be19;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    fVar8 = (float10)FUN_0054fe64(param_1,1,0,0);
    local_74 = (float)fVar8;
    fVar8 = (float10)FUN_0054fe64(param_1,2,0,0);
    local_78 = (float)fVar8;
    fVar8 = (float10)FUN_0054fe64(param_1,3,0,0);
    local_7c = (float)fVar8;
    fVar8 = (float10)FUN_0054fe64(param_1,4,0,0);
    local_84 = (float)fVar8;
    pcVar2 = (char *)FUN_0054fdc0(param_1,5,&DAT_005831e1,local_60);
    fVar8 = (float10)FUN_0054fe64(param_1,6,0,0);
    local_90 = (float)fVar8;
    fVar8 = (float10)FUN_0054fe64(param_1,7,0,0);
    local_88 = (float)fVar8;
    FUN_0054fe64(param_1,8,0,0x406fe000);
    local_80 = FUN_004cf110();
    FUN_0054fe64(param_1,9,0,0x406fe000);
    local_70 = FUN_004cf110();
    FUN_0054fe64(param_1,10,0,0x406fe000);
    FUN_004cf110();
    FUN_0054fe64(param_1,0xb,0,0x406fe000);
    local_6c = local_74;
    local_68 = local_78;
    local_64 = local_7c;
    uVar3 = FUN_0041caa0();
    pfVar4 = (float *)FUN_0041d580(local_24,&local_6c,uVar3);
    if (_DAT_00583354 <
        SQRT(pfVar4[2] * pfVar4[2] + pfVar4[1] * pfVar4[1] + *pfVar4 * *pfVar4) * _DAT_00589fd4) {
      ExceptionList = local_14;
      return 0;
    }
    uVar5 = FUN_004cf110();
    uVar6 = FUN_004cf110();
    uVar7 = FUN_004cf110();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_5c,pcVar2);
    local_c = 0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_40,".\\Textures\\");
    FUN_00429a60(local_40,local_5c,1);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_40);
    local_c = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_5c);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_5c,pcVar2);
    uVar3 = FUN_004222d0(local_5c);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_5c);
    local_8c = local_88;
    FUN_0041f2a0(&local_6c,local_84,uVar3,8,&local_90,
                 ((uVar5 & 0xffffffe0 | 0xffffff00) << 8 | uVar6 & 0xe0) << 8 | uVar7 & 0xe0);
  }
  ExceptionList = local_14;
  return 0;
}




/* Function: FUN_0044eff0 */

undefined4 FUN_0044eff0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 uStack_24;
  float fStack_20;
  undefined1 auStack_1c [4];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    piVar2 = (int *)FUN_004cf110();
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x58))((int)&uStack_24 + 3);
      if (iVar1 != 0) {
        uVar3 = FUN_0054fdc0(param_1,2,"Undefined",auStack_1c);
        fVar4 = (float10)FUN_0054fe64(param_1,5,0,0);
        fStack_20 = (float)fVar4;
        fVar4 = (float10)FUN_0054fe64(param_1,4,0,0);
        uStack_24 = (float)fVar4;
        fVar4 = (float10)FUN_0054fe64(param_1,3,0,0);
        fStack_18 = (float)fVar4;
        fStack_14 = uStack_24;
        fStack_10 = fStack_20;
        fVar4 = (float10)FUN_0054fe64(param_1,6,0,0x3ff00000);
        uStack_24 = (float)fVar4;
        fVar4 = (float10)FUN_0054fe64(param_1,7,0,0x3ff00000);
        fStack_20 = (float)fVar4;
        FUN_00504680(uVar3,&fStack_18,uStack_24,fStack_20);
      }
    }
  }
  return 0;
}




/* Function: FUN_0044f9d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044f9d0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  
  iVar1 = FUN_0041ce80();
  if (iVar1 == 0) {
    FUN_00412cfc(param_1,0,0);
    return 1;
  }
  FUN_0041ce80();
  iVar1 = FUN_0041c940();
  if (iVar1 != 0) {
    FUN_0054fe64(param_1,1,0,0);
    uVar2 = FUN_004cf110();
    if (((int)uVar2 < 0) || (uVar3 = FUN_0041dd90(), uVar3 <= uVar2)) {
      dVar4 = 0.0;
    }
    else {
      iVar1 = FUN_0041f930();
      dVar4 = (double)iVar1;
      if (iVar1 < 0) {
        dVar4 = dVar4 + _DAT_00589ec0;
      }
    }
    FUN_00412cfc(param_1,dVar4);
    return 1;
  }
  FUN_00412cfc(param_1);
  return 1;
}




/* Function: FUN_0044fcc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044fcc0(undefined4 param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_0054fe64(param_1,1,0,0);
  FUN_0054fe64(param_1,2,0,0);
  fVar2 = (float10)FUN_0054fe64(param_1,3,0,0);
  if (SQRT((float10)(float)fVar1 * (float10)(float)fVar1 + fVar2 * fVar2) < (float10)_DAT_00587db8)
  {
    FUN_00412cfc(param_1,0,0);
    return 1;
  }
  fVar1 = (float10)FUN_0044b0d0();
  FUN_00412cfc(param_1,(double)fVar1);
  return 1;
}




/* Function: FUN_0044fd90 */

undefined4 FUN_0044fd90(undefined4 param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)FUN_0054fe64(param_1,1,0,0);
  fVar2 = (float10)FUN_0054fe64(param_1,2,0,0);
  fVar3 = (float10)FUN_0054fe64(param_1,3,0,0);
  FUN_0041d4b0();
  FUN_00412cfc(param_1,(double)(float)fVar1);
  FUN_00412cfc(param_1,(double)(float)fVar2);
  FUN_00412cfc(param_1,(double)(float)fVar3);
  return 3;
}




/* Function: FUN_0044fe20 */

undefined4 FUN_0044fe20(undefined4 param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = (float10)FUN_0054fe64(param_1,1,0,0);
  fVar2 = (float10)FUN_0054fe64(param_1,2,0,0);
  fVar3 = (float10)FUN_0054fe64(param_1,3,0,0);
  fVar4 = (float10)FUN_0054fe64(param_1,4,0,0);
  fVar5 = (float10)FUN_0054fe64(param_1,5,0,0);
  fVar6 = (float10)FUN_0054fe64(param_1,6,0,0);
  FUN_00412cfc(param_1,(double)((float)fVar1 - (float)fVar4));
  FUN_00412cfc(param_1,(double)((float)fVar2 - (float)fVar5));
  FUN_00412cfc(param_1,(double)(float)((float10)(float)fVar3 - fVar6));
  return 3;
}




/* Function: FUN_0044fef0 */

undefined4 FUN_0044fef0(undefined4 param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = (float10)FUN_0054fe64(param_1,1,0,0);
  fVar2 = (float10)FUN_0054fe64(param_1,2,0,0);
  fVar3 = (float10)FUN_0054fe64(param_1,3,0,0);
  fVar4 = (float10)FUN_0054fe64(param_1,4,0,0);
  fVar5 = (float10)FUN_0054fe64(param_1,5,0,0);
  fVar6 = (float10)FUN_0054fe64(param_1,6,0,0);
  FUN_00412cfc(param_1,(double)((float)fVar4 + (float)fVar1));
  FUN_00412cfc(param_1,(double)((float)fVar5 + (float)fVar2));
  FUN_00412cfc(param_1,(double)(float)(fVar6 + (float10)(float)fVar3));
  return 3;
}




/* Function: FUN_0044ffc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044ffc0(undefined4 param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)FUN_0054fe64(param_1,1,0,0);
  fVar3 = (float10)FUN_0054fe64(param_1,2,0,0);
  fVar4 = (float10)FUN_0054fe64(param_1,3,0,0);
  fVar1 = (float)fVar4;
  fVar4 = (float10)FUN_0054fe64(param_1,4,0,0);
  if ((float10)_DAT_00589fe8 <= ABS(fVar4)) {
    fVar4 = (float10)_DAT_00583354 / fVar4;
    fVar1 = (float)(fVar4 * (float10)fVar1);
    FUN_00412cfc(param_1,(double)((float10)(float)fVar2 * fVar4));
    FUN_00412cfc(param_1,(double)(float)(fVar4 * (float10)(float)fVar3));
  }
  else {
    FUN_00412cfc(param_1,(double)(float)fVar2);
    FUN_00412cfc(param_1,(double)(float)fVar3);
  }
  FUN_00412cfc(param_1,(double)fVar1);
  return 3;
}




/* Function: FUN_004500a0 */

undefined4 FUN_004500a0(undefined4 param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)FUN_0054fe64(param_1,1,0,0);
  fVar2 = (float10)FUN_0054fe64(param_1,2,0,0);
  fVar3 = (float10)FUN_0054fe64(param_1,3,0,0);
  fVar4 = (float10)FUN_0054fe64(param_1,4,0,0);
  FUN_00412cfc(param_1,(double)((float10)(float)fVar1 * fVar4));
  FUN_00412cfc(param_1,(double)(float)(fVar4 * (float10)(float)fVar2));
  FUN_00412cfc(param_1,(double)(float)(fVar4 * (float10)(float)fVar3));
  return 3;
}




/* Function: FUN_00450140 */

undefined4 FUN_00450140(undefined4 param_1)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  undefined1 local_14 [16];
  
  fVar3 = (float10)FUN_0054fe64(param_1,1,0,0);
  fVar4 = (float10)FUN_0054fe64(param_1,2,0,0);
  fVar5 = (float10)FUN_0054fe64(param_1,3,0,0);
  fVar6 = (float10)FUN_0054fe64(param_1,4,0,0);
  fVar7 = (float10)FUN_0054fe64(param_1,5,0,0);
  local_2c = (float)fVar3;
  local_28 = (float)fVar4;
  local_24 = (float)fVar5;
  fVar8 = (float10)FUN_0054fe64(param_1,6,0,0);
  local_18 = (float)fVar8;
  fVar3 = (float10)(float)fVar6 * (float10)(float)fVar3 +
          (float10)(float)fVar7 * (float10)(float)fVar4 + fVar8 * (float10)(float)fVar5;
  pfVar2 = (float *)FUN_0041d5b0(local_14,&local_2c,(float)(fVar3 + fVar3));
  fVar1 = local_2c;
  if (pfVar2 != &local_2c) {
    local_28 = pfVar2[1];
    local_24 = pfVar2[2];
    fVar1 = *pfVar2;
  }
  local_1c = (float)fVar7 - local_28;
  local_18 = local_18 - local_24;
  FUN_00412cfc(param_1,(double)((float)fVar6 - fVar1));
  FUN_00412cfc(param_1,(double)local_1c);
  FUN_00412cfc(param_1,(double)local_18);
  return 3;
}




/* Function: FUN_00450270 */

undefined4 FUN_00450270(undefined4 param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = (float10)FUN_0054fe64(param_1,1,0,0);
  fVar2 = (float10)FUN_0054fe64(param_1,2,0,0);
  fVar3 = (float10)FUN_0054fe64(param_1,3,0,0);
  fVar4 = (float10)FUN_0054fe64(param_1,4,0,0);
  fVar5 = (float10)FUN_0054fe64(param_1,5,0,0);
  fVar6 = (float10)FUN_0054fe64(param_1,6,0,0);
  FUN_00412cfc(param_1,(double)((float10)(float)fVar4 * (float10)(float)fVar1 +
                               (float10)(float)fVar5 * (float10)(float)fVar2 +
                               fVar6 * (float10)(float)fVar3));
  return 1;
}




/* Function: FUN_00450310 */

undefined4 FUN_00450310(undefined4 param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  fVar1 = (float10)FUN_0054fe64(param_1,1,0,0);
  fVar2 = (float10)FUN_0054fe64(param_1,2,0,0);
  fVar3 = (float10)FUN_0054fe64(param_1,3,0,0);
  fVar4 = (float10)FUN_0054fe64(param_1,4,0,0);
  fVar5 = (float10)FUN_0054fe64(param_1,5,0,0);
  local_28 = (float)fVar5;
  local_2c = (float)fVar4;
  local_20 = (float)fVar1;
  local_1c = (float)fVar2;
  local_18 = (float)fVar3;
  fVar1 = (float10)FUN_0054fe64(param_1,6,0,0);
  local_24 = (float)fVar1;
  FUN_0041d5e0(&local_14,&local_20,&local_2c);
  FUN_00412cfc(param_1,(double)local_14);
  FUN_00412cfc(param_1,(double)local_10);
  FUN_00412cfc(param_1,(double)local_c);
  return 3;
}




/* Function: FUN_00450620 */

undefined4 __fastcall FUN_00450620(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  return CONCAT31((int3)(iVar1 >> 10),iVar1 >> 2 == 0);
}




/* Function: FUN_00450650 */

void FUN_00450650(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}




/* Function: FUN_00450670 */

void FUN_00450670(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    param_3 = param_3 + -0x1a;
    param_4 = param_4 + -0x1a;
    puVar2 = param_3;
    puVar3 = param_4;
    for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  } while (param_3 != param_2);
  *param_1 = param_4;
  return;
}




/* Function: FUN_004506b0 */

void * __thiscall FUN_004506b0(void *param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_004506d0 */

void FUN_004506d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1a) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 0x1a;
  }
  return;
}




/* Function: FUN_00450700 */

void * __thiscall FUN_00450700(void *param_1,undefined4 param_2)

{
  _eh_vector_constructor_iterator_(param_1,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  FUN_0044abd0(param_2);
  return param_1;
}




/* Function: FUN_00450730 */

void FUN_00450730(int param_1,int param_2,undefined4 param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x58) {
    FUN_0044ad00(param_3);
  }
  return;
}




/* Function: FUN_00450aa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00450aa0(undefined4 param_1)

{
  float10 fVar1;
  float10 fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [64];
  undefined1 local_a8 [68];
  undefined1 local_64 [12];
  undefined1 local_58 [68];
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057be66;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar4 = FUN_0041ce80();
  if (iVar4 != 0) {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    iVar4 = FUN_004cf110();
    if (iVar4 != 0) {
      _eh_vector_constructor_iterator_
                (local_a8,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
      FUN_00407310(0x3f800000);
      local_c = 0;
      cVar3 = FUN_0044c770(iVar4,local_a8);
      if (cVar3 != '\0') {
        fVar6 = (float10)FUN_0054fe64(param_1,2,0,0);
        fVar7 = (float10)FUN_0054fe64(param_1,3,0,0);
        fVar8 = (float10)FUN_0054fe64(param_1,4,0,0);
        fVar9 = (float10)FUN_0054fe64(param_1,5,0,0);
        fVar1 = (float10)_DAT_00582ae8;
        fVar10 = (float10)FUN_0054fe64(param_1,6,0,0);
        fVar2 = (float10)_DAT_00582ae8;
        _eh_vector_constructor_iterator_
                  (local_e8,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
        FUN_00407310(0x3f800000);
        local_c = CONCAT31(local_c._1_3_,1);
        if ((fVar1 < fVar9) || (fVar2 < fVar10)) {
          FUN_005475f4((float)fVar7);
          FUN_005476c0((float)fVar6);
          FUN_00547528((float)fVar8);
          if (fVar1 < fVar9) {
            uVar5 = FUN_0041d7a0(local_58,local_e8,local_a8);
            FUN_0041d670(uVar5);
            _eh_vector_destructor_iterator_(local_58,0x10,4,FUN_00407150);
          }
          if (fVar2 < fVar10) {
            uVar5 = FUN_0041d7a0(local_58,local_a8,local_e8);
            FUN_0041d670(uVar5);
            _eh_vector_destructor_iterator_(local_58,0x10,4,FUN_00407150);
          }
        }
        else {
          FUN_00547a54(&local_f4);
          FUN_00547500(local_f4);
          FUN_005474d8(local_f0);
          FUN_005474b0(local_ec);
          FUN_005475f4((float)fVar7);
          FUN_00547528((float)fVar8);
          FUN_005476c0((float)fVar6);
          uVar5 = FUN_00547ab0(local_64);
          FUN_00545c38(uVar5);
        }
        FUN_0044c7d0(iVar4,local_e8);
        local_c = local_c & 0xffffff00;
        _eh_vector_destructor_iterator_(local_e8,0x10,4,FUN_00407150);
      }
      local_c = 0xffffffff;
      _eh_vector_destructor_iterator_(local_a8,0x10,4,FUN_00407150);
    }
  }
  ExceptionList = local_14;
  return 0;
}




/* Function: FUN_00451250 */

undefined4 FUN_00451250(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined1 local_34 [8];
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_10;
  
  iVar2 = FUN_0041ce80();
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    piVar3 = (int *)FUN_004cf110();
  }
  fVar4 = (float10)FUN_0054fe64(param_1,4,0,0);
  fVar5 = (float10)FUN_0054fe64(param_1,3,0,0);
  fVar6 = (float10)FUN_0054fe64(param_1,2,0,0);
  local_40 = (float)fVar6;
  local_3c = (float)fVar5;
  local_38 = (float)fVar4;
  fVar4 = (float10)FUN_0054fe64(param_1,7,0,0);
  fVar5 = (float10)FUN_0054fe64(param_1,6,0,0);
  fVar6 = (float10)FUN_0054fe64(param_1,5,0,0);
  local_4c = (float)fVar6;
  local_48 = (float)fVar5;
  local_44 = (float)fVar4;
  if (piVar3 != (int *)0x0) {
    FUN_0041d7e0();
    local_24 = local_44;
    local_2c = local_4c;
    local_28 = local_48;
    cVar1 = (**(code **)(*piVar3 + 0x38))(local_34,&local_40,&local_4c);
    if (cVar1 != '\0') {
      FUN_00412cfc(param_1,(double)local_2c);
      FUN_00412cfc(param_1,(double)local_28);
      FUN_00412cfc(param_1,(double)local_24);
      FUN_00412cfc(param_1,(double)fStack_20);
      FUN_00412cfc(param_1,(double)fStack_1c);
      FUN_00412cfc(param_1,(double)fStack_18);
      FUN_00412cfc(param_1,(double)iStack_10);
      return 7;
    }
  }
  FUN_00412cfc(param_1,(double)local_4c);
  FUN_00412cfc(param_1,(double)local_48);
  FUN_00412cfc(param_1,(double)local_44);
  FUN_00412cfc(param_1,0,0);
  FUN_00412cfc(param_1,0,0x3ff00000);
  FUN_00412cfc(param_1,0,0);
  FUN_00412cfc(param_1,0,0xbff00000);
  return 7;
}




/* Function: FUN_00451440 */

undefined4 FUN_00451440(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  float10 fVar6;
  undefined1 *puVar8;
  undefined8 uVar7;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [64];
  undefined1 auStack_58 [68];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0057be7b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    FUN_0054fe64(param_1,1,0);
    piVar2 = (int *)FUN_004cf110();
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x58))();
      if (piVar2 != (int *)0x0) {
        iVar1 = FUN_004ffac0();
        if (iVar1 != 0) {
          FUN_004ffac0();
          uVar3 = FUN_0054fdc0(param_1,2,"Bip01 Head");
          fVar6 = (float10)FUN_0054fe64(param_1,5,0,0);
          fStack_b0 = (float)fVar6;
          fVar6 = (float10)FUN_0054fe64(param_1,4,0,0);
          fStack_ac = (float)fVar6;
          fVar6 = (float10)FUN_0054fe64(param_1,3,0,0);
          fStack_bc = (float)fVar6;
          fStack_b4 = fStack_b0;
          fStack_b8 = fStack_ac;
          uVar4 = FUN_004ffa90();
          iVar1 = FUN_00444820(uVar4,uVar3);
          if (iVar1 != -1) {
            _eh_vector_constructor_iterator_
                      (auStack_98,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
            FUN_00407310();
            puVar8 = auStack_98;
            uStack_c = 0;
            FUN_004ffaa0();
            uVar3 = FUN_004cf110();
            uVar7 = CONCAT44(puVar8,uVar3);
            uVar3 = FUN_004ffa90(iVar1,uVar3);
            FUN_004448b0(uVar3,iVar1,uVar7);
            (**(code **)(*piVar2 + 0x90))();
            uVar3 = FUN_0041d7a0(auStack_58,auStack_98);
            pfVar5 = (float *)FUN_00548704(auStack_a4,uVar3,&fStack_bc);
            if (pfVar5 != &fStack_bc) {
              fStack_bc = *pfVar5;
              fStack_b8 = pfVar5[1];
              fStack_b4 = pfVar5[2];
            }
            _eh_vector_destructor_iterator_(auStack_58,0x10,4,FUN_00407150);
            FUN_00412cfc(param_1,(double)fStack_bc);
            FUN_00412cfc(param_1,(double)fStack_b8);
            FUN_00412cfc(param_1,(double)fStack_b4);
            uStack_c = 0xffffffff;
            _eh_vector_destructor_iterator_(auStack_98,0x10,4,FUN_00407150);
            ExceptionList = local_14;
            return 3;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}




/* Function: FUN_00451680 */

undefined4 FUN_00451680(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [68];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0057be98;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    FUN_0054fe64();
    piVar2 = (int *)FUN_004cf110();
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x58))();
      if (iVar1 != 0) {
        iVar1 = FUN_004ffac0();
        if (iVar1 != 0) {
          uVar3 = FUN_0054fdc0();
          FUN_0054fe64();
          FUN_0054fe64();
          FUN_0054fe64();
          FUN_0054fe64();
          FUN_0054fe64();
          FUN_0054fe64();
          FUN_0054fe64();
          FUN_0054fe64();
          FUN_0054fe64();
          _eh_vector_constructor_iterator_
                    (auStack_58,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
          FUN_00407310();
          uStack_c = 0;
          FUN_00547528();
          FUN_005475f4();
          FUN_005476c0();
          FUN_00547500();
          FUN_005474d8();
          FUN_005474b0();
          FUN_00545c38();
          FUN_00407260(auStack_58);
          FUN_00505730(uVar3);
          uStack_c = 0xffffffff;
          _eh_vector_destructor_iterator_(auStack_58,0x10,4,FUN_00407150);
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}




/* Function: FUN_00451a60 */

undefined4 FUN_00451a60(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [68];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057be98;
  pvStack_14 = ExceptionList;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  ExceptionList = &pvStack_14;
  _eh_vector_constructor_iterator_
            (local_58,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310();
  local_c = 0;
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    piVar2 = (int *)FUN_004cf110();
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x50))();
      if (iVar1 != 0) {
        puVar3 = (undefined4 *)FUN_004634e0();
        if (puVar3 != &local_88) {
          local_88 = *puVar3;
          local_84 = puVar3[1];
          local_80 = puVar3[2];
        }
        puVar3 = (undefined4 *)FUN_00463500();
        if (puVar3 != &local_94) {
          local_94 = *puVar3;
          local_90 = puVar3[1];
          local_8c = puVar3[2];
        }
      }
    }
  }
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    piVar2 = (int *)FUN_004cf110();
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x58))();
      if (piVar2 != (int *)0x0) {
        iVar1 = FUN_004ffac0();
        if (iVar1 != 0) {
          FUN_004ffac0();
          puVar3 = (undefined4 *)FUN_0043f930();
          if (puVar3 != &local_88) {
            local_88 = *puVar3;
            local_84 = puVar3[1];
            local_80 = puVar3[2];
          }
          FUN_004ffac0();
          puVar3 = (undefined4 *)FUN_0043f940();
          if (puVar3 != &local_94) {
            local_94 = *puVar3;
            local_90 = puVar3[1];
            local_8c = puVar3[2];
          }
          (**(code **)(*piVar2 + 0x90))();
          FUN_0041d670();
        }
      }
    }
  }
  FUN_004306e0(&local_88,&local_94,local_58);
  FUN_00412cfc(param_1,(double)fStack_70);
  FUN_00412cfc(param_1,(double)fStack_6c);
  FUN_00412cfc(param_1,(double)fStack_68);
  FUN_00412cfc(param_1,(double)fStack_64);
  FUN_00412cfc(param_1,(double)fStack_60);
  FUN_00412cfc(param_1,(double)fStack_5c);
  local_c = 0xffffffff;
  _eh_vector_destructor_iterator_(local_58,0x10,4,FUN_00407150);
  ExceptionList = pvStack_14;
  return 6;
}




/* Function: FUN_00451cd0 */

undefined4 FUN_00451cd0(undefined4 param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  fVar1 = (float10)FUN_0054fe64(param_1,1,0);
  fVar2 = (float10)FUN_0054fe64(param_1,2,0,0);
  fVar3 = (float10)FUN_0054fe64(param_1,3,0,0);
  FUN_0054fe64(param_1,4,0,0);
  FUN_0054fe64(param_1,5,0);
  FUN_0054fe64(param_1,6,0,0);
  _eh_vector_constructor_iterator_
            (&local_2c,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
  local_2c = 0x3f800000;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0x3f800000;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x3f800000;
  FUN_005494a8();
  FUN_0054954c();
  FUN_00549408();
  FUN_00548910();
  FUN_00412cfc(param_1,(double)(float)fVar1);
  FUN_00412cfc(param_1,(double)(float)fVar2);
  FUN_00412cfc(param_1,(double)(float)fVar3);
  _eh_vector_destructor_iterator_(&local_2c,0xc,3,FUN_00407150);
  return 3;
}




/* Function: FUN_00451eb0 */

void __thiscall FUN_00451eb0(int param_1,uint param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057bf12;
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




/* Function: FUN_00451f50 */

undefined4 *
FUN_00451f50(undefined4 param_1,undefined4 param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057bef1;
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




/* Function: FUN_00451fe0 */

void FUN_00451fe0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    param_3 = param_3 + -0x58;
    param_4 = param_4 + -0x58;
    FUN_0044ad00(param_3);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return;
}




/* Function: FUN_00452020 */

void FUN_00452020(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 0x1a;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 0x1a; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}




/* Function: FUN_00452050 */

undefined4 FUN_00452050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00450670(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00452090 */

void FUN_00452090(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = param_3;
      puVar3 = param_1;
      for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = param_1 + 0x1a;
  }
  return;
}




/* Function: FUN_004520c0 */

void FUN_004520c0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}




/* Function: FUN_004520f0 */

undefined4 FUN_004520f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00451fe0(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00452130 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00452130(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    piVar2 = (int *)FUN_004cf110();
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x7c))((int)&uStack_18 + 3);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x298) != 0)) &&
         (*(int *)(iVar1 + 0x29c) - *(int *)(iVar1 + 0x298) >> 2 != 0)) {
        pfVar3 = (float *)FUN_004e4730();
        uStack_18 = *pfVar3;
        fStack_14 = pfVar3[1];
        fStack_10 = pfVar3[2];
        FUN_00412cfc(param_1,(double)(SQRT(uStack_18 * uStack_18 +
                                           fStack_14 * fStack_14 + fStack_10 * fStack_10) *
                                     _DAT_00588808));
        FUN_00412cfc(param_1,(double)uStack_18);
        FUN_00412cfc(param_1,(double)fStack_14);
        FUN_00412cfc(param_1,(double)fStack_10);
        return 4;
      }
    }
  }
  return 0;
}




/* Function: FUN_00452240 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00452240(undefined4 param_1)

{
  double dVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  iVar2 = FUN_0041ce80();
  if (iVar2 != 0) {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    piVar3 = (int *)FUN_004cf110();
    if (piVar3 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar3 + 0x7c))((int)&uStack_34 + 3);
      if (((iVar2 != 0) && (piVar3 = *(int **)(iVar2 + 0x298), piVar3 != (int *)0x0)) &&
         (*(int *)(iVar2 + 0x29c) - (int)piVar3 >> 2 != 0)) {
        FUN_00412cfc(param_1,(double)*(float *)(*piVar3 + 0xc4));
        FUN_00412cfc(param_1,(double)*(float *)(**(int **)(iVar2 + 0x298) + 200));
        FUN_00412cfc(param_1,(double)*(float *)(**(int **)(iVar2 + 0x298) + 0xcc));
        FUN_00412cfc(param_1,(double)*(float *)(**(int **)(iVar2 + 0x298) + 0xd0));
        uStack_34 = *(int *)(**(int **)(iVar2 + 0x298) + 0xd4);
        if (uStack_34 == 0) {
          if (*(int *)(**(int **)(iVar2 + 0x298) + 0xd8) == 0) {
            FUN_00412cfc(param_1,0,0);
            FUN_00412cfc(param_1,0,0);
            FUN_00412cfc(param_1,0,0);
            FUN_00412cfc(param_1,0,0);
          }
          else {
            FUN_00412cfc(param_1,0,0);
            FUN_00412cfc(param_1,0,0);
            FUN_00412cfc(param_1,0,0);
            dVar1 = (double)*(int *)(**(int **)(iVar2 + 0x298) + 0xd8);
            if (*(int *)(**(int **)(iVar2 + 0x298) + 0xd8) < 0) {
              dVar1 = dVar1 + _DAT_00589ec0;
            }
            FUN_00412cfc(param_1,dVar1);
          }
        }
        else {
          dVar1 = (double)uStack_34;
          if (uStack_34 < 0) {
            dVar1 = dVar1 + _DAT_00589ec0;
          }
          FUN_00412cfc(param_1,dVar1);
          pfVar4 = (float *)FUN_004e4730(*(undefined4 *)
                                          (**(int **)(*(int *)(**(int **)(iVar2 + 0x298) + 0xd4) +
                                                     0x298) + 0xbc));
          fStack_30 = *pfVar4;
          fStack_2c = pfVar4[1];
          fStack_28 = pfVar4[2];
          FUN_00412cfc(param_1,(double)(SQRT(fStack_30 * fStack_30 +
                                             fStack_2c * fStack_2c + fStack_28 * fStack_28) *
                                       _DAT_00588808));
          piVar3 = *(int **)(iVar2 + 0x298);
          (**(code **)(**(int **)(*piVar3 + 0xd4) + 0x88))();
          uVar5 = FUN_00547ab0();
          FUN_0041d580(&fStack_24,*piVar3 + 0xc4,uVar5);
          FUN_0041d4b0();
          pfVar4 = (float *)FUN_0041d510();
          FUN_00412cfc(param_1,(double)(fStack_24 * *pfVar4 +
                                       fStack_1c * pfVar4[2] + fStack_20 * pfVar4[1]));
          FUN_00412cfc(param_1,0,0);
        }
        *(undefined4 *)(**(int **)(iVar2 + 0x298) + 0xd0) = 0;
        return 8;
      }
    }
  }
  return 0;
}




/* Function: FUN_004524e0 */

void __thiscall
FUN_004524e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004506d0(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00452510 */

int FUN_00452510(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057bf31;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x58) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_0044adb0(param_1);
    }
    param_3 = param_3 + 0x58;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}




/* Function: FUN_004525a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004525a0(undefined4 param_1)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  void *pvVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [48];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057bf48;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar2 = FUN_0041ce80();
  iVar3 = FUN_0041c940();
  if (iVar3 == 0) {
    FUN_0041ce80();
    uVar2 = FUN_0041e5b0();
    FUN_0040a410(uVar2);
    FUN_00412cfc(param_1,0,0);
  }
  else {
    pcVar4 = (char *)FUN_0054fe20(param_1,1);
    fVar8 = (float10)FUN_0054fe64(param_1,2,0,0);
    fVar9 = (float10)FUN_0054fe64(param_1,3,0,0);
    fVar10 = (float10)FUN_0054fe64(param_1,4,0,0);
    FUN_0054fe64(param_1,5,0,0);
    FUN_0054fe64(param_1,6,0);
    FUN_0054fe64(param_1,7,0,0);
    fVar11 = (float10)FUN_0054fe64(param_1,8,0,0x3ff00000);
    fVar12 = (float10)FUN_0054fe64(param_1,9,0,0x3ff00000);
    fVar13 = (float10)FUN_0054fe64(param_1,10,0);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44,pcVar4);
    uVar15 = 1;
    uVar14 = 0;
    uVar5 = FUN_0041c940(0,1);
    iVar3 = FUN_00429280(local_44,uVar5,uVar14,uVar15);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
    piVar6 = (int *)FUN_00420910();
    if (piVar6 == (int *)0x0) {
      pvVar7 = operator_new(0x290,(nothrow_t *)&DAT_005b6164);
      if (pvVar7 == (void *)0x0) {
        ExceptionList = local_14;
        return 0;
      }
      piVar6 = (int *)FUN_005057c0();
      if (piVar6 == (int *)0x0) {
        ExceptionList = local_14;
        return 0;
      }
    }
    if (iVar3 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    FUN_004ffb10();
    FUN_004ffa80();
    FUN_00501a80();
    _eh_vector_constructor_iterator_
              (&local_84,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
    local_84 = 0x3f800000;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0x3f800000;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0x3f800000;
    local_c = 0;
    FUN_0054954c();
    FUN_005494a8();
    FUN_00549408();
    local_60 = (float)fVar11;
    local_5c = (float)fVar12;
    local_58 = (float)fVar13;
    local_54 = (float)fVar8;
    local_50 = (float)fVar9;
    local_4c = (float)fVar10;
    uVar5 = FUN_00548cb8();
    FUN_00501ee0(&local_54,&local_60,uVar5);
    iVar3 = *piVar6;
    uVar5 = FUN_0041c940();
    (**(code **)(iVar3 + 0x1c))(uVar2,uVar5);
    uVar5 = 1;
    uVar2 = FUN_0041c940();
    FUN_00423250(piVar6,uVar2,uVar5);
    FUN_0041c940();
    FUN_0042a4f0();
    dVar1 = (double)(int)piVar6;
    if ((int)piVar6 < 0) {
      dVar1 = dVar1 + _DAT_00589ec0;
    }
    FUN_00412cfc(param_1,dVar1);
    local_c = 0xffffffff;
    _eh_vector_destructor_iterator_(&local_84,0xc,3,FUN_00407150);
  }
  ExceptionList = local_14;
  return 1;
}




/* Function: FUN_004528e0 */

int __thiscall FUN_004528e0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00452090(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x68 + param_2;
}




/* Function: FUN_00452910 */

void __thiscall FUN_00452910(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057bf60;
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




/* Function: FUN_00452bb0 */

void FUN_00452bb0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057bf81;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_0044adb0(param_3);
    }
    param_1 = param_1 + 0x58;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}




/* Function: FUN_00452c40 */

void __thiscall
FUN_00452c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00452510(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00452c70 */

void __thiscall FUN_00452c70(int param_1,uint param_2)

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
    FUN_00452910(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 2))) {
    FUN_004366e0(&param_2,*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_00452cf0 */

void __thiscall FUN_00452cf0(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_7c [26];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057bf90;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff78;
  puVar6 = local_7c;
  for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x68;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x68;
    }
    if (0x2762762U - iVar4 < param_3) {
      ExceptionList = &local_10;
      FUN_0044ae40();
      ExceptionList = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x68;
    }
    if (uVar5 < iVar4 + param_3) {
      if (0x2762762 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x68;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xffffff78;
      if (uVar5 < iVar3 + param_3) {
        ExceptionList = &local_10;
        local_14 = &stack0xffffff78;
        iVar3 = FUN_0044ab70();
        uVar5 = iVar3 + param_3;
      }
      iVar3 = FUN_00493c27();
      local_8 = 0;
      uVar2 = FUN_004506d0(*(undefined4 *)(param_1 + 4));
      FUN_00452090(uVar2);
      FUN_004506d0(param_2);
      pvVar1 = *(void **)(param_1 + 4);
      if (pvVar1 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_1 + 8) - (int)pvVar1) / 0x68;
      }
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      *(uint *)(param_1 + 0xc) = uVar5 * 0x68 + iVar3;
      *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x68 + iVar3;
      *(int *)(param_1 + 4) = iVar3;
      ExceptionList = local_10;
      return;
    }
    if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x68) < param_3) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffff78;
      FUN_004524e0();
      local_8 = 2;
      FUN_004528e0();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x68;
    }
    else {
      ExceptionList = &local_10;
      local_14 = &stack0xffffff78;
      uVar2 = FUN_004524e0();
      *(undefined4 *)(param_1 + 8) = uVar2;
      FUN_00452050();
    }
    FUN_00452020();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00452ff0 */

void __thiscall FUN_00452ff0(int param_1,undefined4 *param_2,int *param_3,int *param_4)

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




/* Function: FUN_00453050 */

void __thiscall FUN_00453050(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057bfb0;
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
      FUN_0044ae40();
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




/* Function: FUN_004532f0 */

void __thiscall FUN_004532f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0057bfa0;
  local_10 = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004520c0(iVar1,param_2,param_3,param_1,param_3);
  *(int *)(param_1 + 8) = iVar1 + param_2 * 4;
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00453370 */

int __thiscall FUN_00453370(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00452bb0(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x58 + param_2;
}




/* Function: FUN_004533a0 */

void FUN_004533a0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x58) {
    FUN_0044ae30();
  }
  return;
}




/* Function: FUN_004533d0 */

void __thiscall FUN_004533d0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x68 != 0) {
      iVar1 = (param_3 - iVar1) / 0x68;
      goto LAB_00453417;
    }
  }
  iVar1 = 0;
LAB_00453417:
  FUN_00452cf0(param_3,1,param_4);
  *param_2 = iVar1 * 0x68 + *(int *)(param_1 + 4);
  return;
}




/* Function: FUN_00453440 */

void __thiscall FUN_00453440(int param_1,uint param_2)

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
    FUN_00453050(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 2))) {
    FUN_004366e0(&param_2,*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_004534c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_004534c0(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint unaff_retaddr;
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined1 local_78 [52];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [36];
  undefined1 *local_20;
  undefined1 *local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057bfc8;
  local_10 = ExceptionList;
  local_18 = DAT_005b12c0 ^ unaff_retaddr;
  local_14 = &stack0xffffff7c;
  local_8c = (undefined1 *)0x4534fd;
  ExceptionList = &local_10;
  local_1c = param_1;
  FUN_0044adb0();
  iVar4 = *(int *)(param_1 + 4);
  uVar5 = 0;
  local_8 = 0;
  if (iVar4 != 0) {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar4) / 0x58;
  }
  if (param_3 != 0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x58;
    }
    if (0x2e8ba2eU - iVar3 < param_3) {
      FUN_0044ae40();
    }
    else {
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x58;
      }
      if (uVar5 < iVar3 + param_3) {
        if (0x2e8ba2e - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar4) / 0x58;
        }
        if (uVar5 < iVar4 + param_3) {
          iVar4 = FUN_0044ad80();
          uVar5 = iVar4 + param_3;
        }
        local_8c = (undefined1 *)0x4535d6;
        puVar1 = (undefined1 *)FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        local_90 = puVar1;
        local_8c = param_1;
        iVar4 = FUN_00452510(*(undefined4 *)(param_1 + 4));
        local_90 = local_78;
        local_8c = param_1;
        FUN_00452bb0(iVar4);
        local_90 = (undefined1 *)(iVar4 + param_3 * 0x58);
        local_8c = param_1;
        FUN_00452510(param_2);
        iVar4 = *(int *)(param_1 + 4);
        iVar3 = 0;
        local_8 = 0;
        if (iVar4 != 0) {
          iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x58;
        }
        if (iVar4 != 0) {
          local_90 = (undefined1 *)0x453676;
          local_8c = (undefined1 *)iVar4;
          FUN_004533a0();
                    /* WARNING: Subroutine does not return */
          local_8c = &UNK_0045367f;
          operator_delete(*(void **)(param_1 + 4));
        }
        *(undefined1 **)(param_1 + 0xc) = puVar1 + uVar5 * 0x58;
        *(undefined1 **)(param_1 + 8) = puVar1 + (param_3 + iVar3) * 0x58;
        *(undefined1 **)(param_1 + 4) = puVar1;
      }
      else {
        local_8c = *(undefined1 **)(param_1 + 8);
        if ((uint)(((int)local_8c - (int)param_2) / 0x58) < param_3) {
          local_20 = (undefined1 *)&local_90;
          local_90 = param_2;
          FUN_00452c40();
          local_90 = *(undefined1 **)(param_1 + 8);
          local_8c = (undefined1 *)(param_3 - ((int)local_90 - (int)param_2) / 0x58);
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_00453370();
          iVar4 = *(int *)(param_1 + 8) + param_3 * 0x58;
          *(int *)(param_1 + 8) = iVar4;
          local_8c = (undefined1 *)(iVar4 + param_3 * -0x58);
          local_8 = 0;
        }
        else {
          puVar1 = (undefined1 *)((int)local_8c + param_3 * -0x58);
          local_90 = puVar1;
          uVar2 = FUN_00452c40();
          *(undefined4 *)(param_1 + 8) = uVar2;
          local_90 = param_2;
          local_8c = puVar1;
          FUN_004520f0();
          local_8c = param_2 + param_3 * 0x58;
        }
        local_90 = param_2;
        FUN_00450730();
      }
    }
  }
  local_8 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00453810 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __fastcall
FUN_00453810(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057bff4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  local_4 = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1 + 0x2c);
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00453870 */

void __fastcall
FUN_00453870(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0057bff4;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1 + 0x2c);
  local_4 = local_4 & 0xffffff00;
  FUN_00409200();
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004538d0 */

void __thiscall FUN_004538d0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x68) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x68))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00452090(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x68;
    return;
  }
  FUN_004533d0(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_00453960 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
FUN_00453960(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057bff4;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,param_2);
  local_4 = 0;
  FUN_00422510(param_2 + 0x1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (param_1 + 0x2c,param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *unaff_FS_OFFSET = local_c;
  return param_1;
}




/* Function: FUN_004539d0 */

void __thiscall FUN_004539d0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x58 != 0) {
      iVar1 = (param_3 - iVar1) / 0x58;
      goto LAB_00453a17;
    }
  }
  iVar1 = 0;
LAB_00453a17:
  FUN_004534c0(param_3,1,param_4);
  *param_2 = iVar1 * 0x58 + *(int *)(param_1 + 4);
  return;
}




/* Function: FUN_00453a40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00453a40(undefined4 param_1)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  float local_70 [4];
  undefined4 local_60;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_24;
  float local_1c;
  float local_18;
  
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    pfVar2 = local_70;
    for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar2 = 0.0;
      pfVar2 = pfVar2 + 1;
    }
    local_70[0] = 1.4013e-45;
    fVar3 = (float10)FUN_0054fe64(param_1,1,0,0);
    local_3c = (float)fVar3;
    fVar3 = (float10)FUN_0054fe64(param_1,2,0,0);
    local_38 = (float)fVar3;
    fVar3 = (float10)FUN_0054fe64(param_1,3,0,0);
    local_34 = (float)fVar3;
    fVar3 = (float10)FUN_0054fe64(param_1,4,0,0);
    local_24 = (float)fVar3;
    fVar3 = (float10)FUN_0054fe64(param_1,5,0,0x406fe000);
    local_70[1] = (float)(fVar3 * (float10)_DAT_00589f18);
    fVar3 = (float10)FUN_0054fe64(param_1,6,0,0x406fe000);
    local_70[2] = (float)(fVar3 * (float10)_DAT_00589f18);
    fVar3 = (float10)FUN_0054fe64(param_1,7,0,0x406fe000);
    local_70[3] = (float)(fVar3 * (float10)_DAT_00589f18);
    local_4c = local_70[1];
    local_48 = local_70[2];
    local_40 = local_60;
    local_44 = local_70[3];
    fVar3 = (float10)FUN_0054fe64(param_1,8,0,0x3ff00000);
    local_1c = (float)fVar3;
    fVar3 = (float10)FUN_0054fe64(param_1,9,0,0);
    local_18 = (float)fVar3;
    FUN_0041cf70();
    FUN_004538d0(local_70);
  }
  return 0;
}




/* Function: FUN_00453c10 */

void __fastcall FUN_00453c10(int param_1)

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
  FUN_00452ff0(&local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 8));
}




/* Function: FUN_00453c70 */

/* WARNING: Removing unreachable block (ram,0x00453d88) */

void __thiscall
FUN_00453c70(int param_1,int *param_2,
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
      FUN_00453440(iVar7 * 2 + -1,*(undefined4 *)(param_1 + 8));
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
  iVar10 = FUN_00451f50(puVar13,puVar13[1],param_3);
  FUN_00451eb0(1);
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




/* Function: FUN_00453f00 */

undefined1 * __thiscall FUN_00453f00(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057c00b;
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
  FUN_004532f0(9,&param_2);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00453fa0 */

void FUN_00453fa0(int *param_1,
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
    pbVar1 = param_3 + -0x4c;
    this = param_4 + -0x4c;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (this,pbVar1);
    FUN_00409db0(param_3 + -0x30);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (param_4 + -0x20,param_3 + -0x20);
    *(undefined4 *)(param_4 + -4) = *(undefined4 *)(param_3 + -4);
    param_3 = pbVar1;
    param_4 = this;
  } while (pbVar1 != param_2);
  *param_1 = (int)this;
  return;
}




/* Function: FUN_00454000 */

void __thiscall FUN_00454000(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x58) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x58))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00452bb0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x58;
    return;
  }
  FUN_004539d0(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_00454090 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00454090(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  void *pvVar3;
  void *pvVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  undefined8 uVar12;
  uint local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [4];
  void *local_24;
  void *local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057c028;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  fVar8 = (float10)FUN_0054fe64(param_1,1,0,0);
  fVar9 = (float10)FUN_0054fe64(param_1,4,0,0);
  fVar10 = (float10)FUN_0054fe64(param_1,3,0,0);
  fVar11 = (float10)FUN_0054fe64(param_1,2,0,0);
  local_64 = (float)fVar11;
  local_60 = (float)fVar10;
  local_5c = (float)fVar9;
  fVar9 = (float10)FUN_0054fe64(param_1,7,0,0);
  fVar10 = (float10)FUN_0054fe64(param_1,6,0,0);
  fVar11 = (float10)FUN_0054fe64(param_1,5,0,0);
  local_58 = (float)fVar11;
  local_24 = (void *)0x0;
  local_20 = (void *)0x0;
  local_1c = 0;
  uVar12 = CONCAT44(local_28,(float)fVar8);
  pfVar7 = &local_58;
  pfVar5 = &local_64;
  local_c = 0;
  local_54 = (float)fVar10;
  local_50 = (float)fVar9;
  FUN_0041ce80(pfVar5,pfVar7,(float)fVar8,local_28);
  FUN_0041c940();
  FUN_0041f800(pfVar5,pfVar7,uVar12);
  fVar8 = (float10)FUN_0054fe64(param_1,8,0,0x3fc00000);
  bVar1 = 0;
  bVar2 = 0;
  FUN_0041d580(local_40,&local_64,&local_58,&local_4c);
  FUN_0041d510();
  pfVar7 = (float *)((int)local_24 + 0x14);
  for (local_70 = 0;
      (local_24 != (void *)0x0 && (local_70 < (uint)((int)local_20 - (int)local_24 >> 5)));
      local_70 = local_70 + 1) {
    FUN_0041d5b0(local_40,pfVar7 + -2,pfVar7[1],(float)fVar8);
    pfVar5 = (float *)FUN_0041d5b0(local_34);
    local_64 = local_64 + *pfVar5;
    local_60 = local_60 + pfVar5[1];
    local_5c = local_5c + pfVar5[2];
    if ((float)_DAT_00587c38 < pfVar7[-1]) {
      bVar1 = 1;
    }
    if ((ABS(pfVar7[-1]) < (float)_DAT_00588830) &&
       (local_4c * pfVar7[-2] + local_44 * *pfVar7 + local_48 * pfVar7[-1] < (float)_DAT_00587c38))
    {
      bVar2 = 1;
    }
    pfVar7 = pfVar7 + 8;
  }
  FUN_00412cfc(param_1,(double)local_64);
  FUN_00412cfc(param_1,(double)local_60);
  FUN_00412cfc(param_1,(double)local_5c);
  if (local_24 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (int)local_20 - (int)local_24 >> 5;
  }
  FUN_00412cfc(param_1,(double)(iVar6 != 0));
  FUN_00412cfc(param_1,(double)bVar1);
  FUN_00412cfc(param_1,(double)bVar2);
  pvVar4 = local_20;
  pvVar3 = local_24;
  if (local_24 == (void *)0x0) {
    ExceptionList = local_14;
    return 6;
  }
  for (; pvVar3 != pvVar4; pvVar3 = (void *)((int)pvVar3 + 0x20)) {
    FUN_004506b0();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_24);
}




/* Function: FUN_004543a0 */

int FUN_004543a0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
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
  puStack_8 = &LAB_0057c048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c,param_1);
  local_10 = 0;
  local_4 = 0;
  piVar2 = (int *)FUN_00453c70(local_34,local_2c);
  iVar1 = *piVar2;
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
  ExceptionList = local_c;
  return iVar1 + 0x24;
}




/* Function: FUN_00454410 */

void FUN_00454410(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *param_3)

{
  if (param_1 != param_2) {
    do {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                (param_1,param_3);
      FUN_00409db0(param_3 + 0x1c);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                (param_1 + 0x2c,param_3 + 0x2c);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_3 + 0x48);
      param_1 = param_1 + 0x4c;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_00454470 */

undefined4 FUN_00454470(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00453fa0(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_004544b0 */

int FUN_004544b0(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057c071;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x4c) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_00453960(param_1);
    }
    param_3 = param_3 + 0x4c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}




/* Function: FUN_00454540 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00454540(undefined4 param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar6;
  undefined4 *puVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar14;
  float10 fVar15;
  uint unaff_retaddr;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar16;
  float local_234;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_230 [31];
  undefined1 local_211;
  float fStack_210;
  float fStack_20c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_208 [28];
  undefined1 local_1ec [12];
  float local_1e0;
  float fStack_1b8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_198 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_17c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_160 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_144 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_128 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_10c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_f0 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_d4 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_b8 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_9c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_80 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_64 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_48 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057c22a;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  iVar4 = FUN_0041ce80();
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  pcVar5 = (char *)FUN_0054fe20(param_1,1,local_1ec);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_208,pcVar5);
  local_4 = 0;
  pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00408950(local_198,local_208);
  local_4._0_1_ = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_208,pbVar6);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_198);
  pcVar5 = (char *)FUN_0054fe20(param_1,2,local_1ec);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_17c,pcVar5);
  pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00408950(local_198,local_17c);
  local_4._0_1_ = 3;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_17c,pbVar6);
  local_4._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_198);
  FUN_00453f00(&local_211,&local_211);
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230,"clear");
  local_4._0_1_ = 5;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 0;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230,"reset");
  local_4._0_1_ = 6;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 1;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230,"=");
  local_4._0_1_ = 7;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 2;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230,"diffuse");
  local_4._0_1_ = 8;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 3;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230,"ambient");
  local_4._0_1_ = 9;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 4;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230,"specular")
  ;
  local_4._0_1_ = 10;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 5;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230,"emissive")
  ;
  local_4._0_1_ = 0xb;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 6;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230,"power");
  local_4._0_1_ = 0xc;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 7;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_230,"envmapname");
  local_4._0_1_ = 0xd;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 8;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_230,"envmapcolor");
  local_4._0_1_ = 0xe;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 9;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_230,"mipmaplodbias");
  local_4._0_1_ = 0xf;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 10;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_230,"maxmiplevel");
  local_4._0_1_ = 0x10;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 0xb;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230,"mixmode");
  local_4._0_1_ = 0x11;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 0xc;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_230,"autolight");
  local_4._0_1_ = 0x12;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 0xd;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_230,"reflectmapname");
  local_4._0_1_ = 0x13;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 0xe;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_230,"paintmapname");
  local_4._0_1_ = 0x14;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 0xf;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_230,"receiveshadow");
  local_4._0_1_ = 0x15;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 0x10;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_230,"illumination");
  local_4._0_1_ = 0x16;
  puVar7 = (undefined4 *)FUN_004543a0(local_230);
  *puVar7 = 0x11;
  local_4._0_1_ = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
  FUN_00420ca0(&local_234,local_17c);
  fVar1 = local_234;
  if (local_1e0 == local_234) goto LAB_0045554c;
  switch(*(undefined4 *)((int)local_234 + 0x24)) {
  case 0:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (bVar2) {
      FUN_0041ce80();
      FUN_004294d0();
    }
    break;
  case 1:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (bVar2) {
      FUN_0041ce80();
      func_0x00420690();
    }
    else {
      pbVar6 = local_208;
      FUN_0041ce80(pbVar6);
      FUN_004295a0(pbVar6);
      FUN_0041d920();
    }
    break;
  case 2:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (bVar2) break;
    pcVar5 = (char *)FUN_0054fe20(param_1,3,local_1ec);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230,pcVar5);
    pbVar6 = local_230;
    local_4 = CONCAT31(local_4._1_3_,0x17);
    FUN_0041ce80(pbVar6);
    iVar4 = FUN_00422480(pbVar6);
    if (iVar4 != 0) {
      pbVar6 = local_208;
      FUN_0041ce80(pbVar6);
      FUN_004295a0(pbVar6);
      func_0x0044bbe0(iVar4);
    }
    goto code_r0x0045553b;
  case 3:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (!bVar2) {
      pbVar6 = local_208;
      FUN_0041ce80(pbVar6);
      pfVar8 = (float *)FUN_004295a0(pbVar6);
      fVar15 = (float10)FUN_0054fe94(param_1,3);
      *pfVar8 = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,4);
      pfVar8[1] = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,5);
      pfVar8[2] = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,6);
      pfVar8[3] = (float)fVar15;
    }
    break;
  case 4:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (!bVar2) {
      pbVar6 = local_208;
      FUN_0041ce80(pbVar6);
      iVar4 = FUN_004295a0(pbVar6);
      fVar15 = (float10)FUN_0054fe94(param_1,3);
      *(float *)(iVar4 + 0x10) = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,4);
      *(float *)(iVar4 + 0x14) = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,5);
      *(float *)(iVar4 + 0x18) = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,6);
      *(float *)(iVar4 + 0x1c) = (float)fVar15;
    }
    break;
  case 5:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (!bVar2) {
      pbVar6 = local_208;
      FUN_0041ce80(pbVar6);
      iVar4 = FUN_004295a0(pbVar6);
      fVar15 = (float10)FUN_0054fe94(param_1,3);
      *(float *)(iVar4 + 0x20) = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,4);
      *(float *)(iVar4 + 0x24) = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,5);
      *(float *)(iVar4 + 0x28) = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,6);
      *(float *)(iVar4 + 0x2c) = (float)fVar15;
    }
    break;
  case 6:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (!bVar2) {
      pbVar6 = local_208;
      FUN_0041ce80(pbVar6);
      iVar4 = FUN_004295a0(pbVar6);
      fVar15 = (float10)FUN_0054fe94(param_1,3);
      *(float *)(iVar4 + 0x30) = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,4);
      *(float *)(iVar4 + 0x34) = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,5);
      *(float *)(iVar4 + 0x38) = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,6);
      *(float *)(iVar4 + 0x3c) = (float)fVar15;
    }
    break;
  case 7:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (!bVar2) {
      pbVar6 = local_208;
      FUN_0041ce80(pbVar6);
      iVar4 = FUN_004295a0(pbVar6);
      fVar15 = (float10)FUN_0054fe94(param_1,3);
      *(float *)(iVar4 + 0x40) = (float)fVar15;
    }
    break;
  case 8:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (bVar2) break;
    pbVar6 = local_208;
    FUN_0041ce80(pbVar6);
    iVar4 = FUN_004295a0(pbVar6);
    pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (iVar4 + 0x44);
    pcVar5 = (char *)FUN_0054fe20(param_1,3,0);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (pbVar6,pcVar5);
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (pbVar6);
    if (bVar2) break;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_b8,".\\Textures\\");
    uVar13 = 0xffffffff;
    pbVar14 = abStack_b8;
    pbVar16 = pbVar6;
    FUN_0041ce80(pbVar14,pbVar6,0xffffffff);
    cVar3 = FUN_00429a60(pbVar14,pbVar16,uVar13);
    pbVar14 = abStack_b8;
    goto code_r0x00454e11;
  case 9:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (!bVar2) {
      pbVar6 = local_208;
      FUN_0041ce80(pbVar6);
      iVar4 = FUN_004295a0(pbVar6);
      fVar15 = (float10)FUN_0054fe94(param_1,3);
      fStack_20c = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,4);
      fStack_210 = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,5);
      local_234 = (float)fVar15;
      FUN_0054fe94(param_1,6);
      if (_DAT_00582ad8 <= fStack_20c) {
        if (_DAT_00583354 < fStack_20c) {
          fStack_20c = 1.0;
        }
      }
      else {
        fStack_20c = 0.0;
      }
      if (_DAT_00582ad8 <= fStack_210) {
        if (_DAT_00583354 < fStack_210) {
          fStack_210 = 1.0;
        }
      }
      else {
        fStack_210 = 0.0;
      }
      if (_DAT_00582ad8 <= local_234) {
        if (_DAT_00583354 < local_234) {
          local_234 = 1.0;
        }
      }
      else {
        local_234 = 0.0;
      }
      uVar9 = FUN_004cf110();
      iVar10 = FUN_004cf110();
      uVar11 = FUN_004cf110();
      uVar12 = FUN_004cf110();
      *(uint *)(iVar4 + 0x98) =
           ((uVar9 & 0xff | iVar10 << 8) << 8 | uVar11 & 0xff) << 8 | uVar12 & 0xff;
    }
    break;
  case 10:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (!bVar2) {
      pbVar6 = local_208;
      FUN_0041ce80(pbVar6);
      iVar4 = FUN_004295a0(pbVar6);
      fVar15 = (float10)FUN_0054fe94(param_1,3);
      *(float *)(iVar4 + 0xac) = (float)fVar15;
    }
    break;
  case 0xb:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (!bVar2) {
      pbVar6 = local_208;
      FUN_0041ce80(pbVar6);
      iVar4 = FUN_004295a0(pbVar6);
      FUN_0054fe94(param_1,3);
      uVar13 = FUN_004cf110();
      *(undefined4 *)(iVar4 + 0xb0) = uVar13;
    }
    break;
  case 0xc:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (bVar2) break;
    pbVar6 = local_208;
    FUN_0041ce80(pbVar6);
    iVar4 = FUN_004295a0(pbVar6);
    pcVar5 = (char *)FUN_0054fe20(param_1,3,local_1ec);
    uVar13 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (abStack_48,pcVar5);
    FUN_00408950(local_230,uVar13);
    local_4._0_1_ = 0x18;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_48);
    func_0x00454380();
    local_4._0_1_ = 0x19;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_160,"blend");
    local_4._0_1_ = 0x1a;
    puVar7 = (undefined4 *)FUN_004543a0(abStack_160);
    *puVar7 = 0;
    local_4._0_1_ = 0x19;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_160);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_128,"add");
    local_4._0_1_ = 0x1b;
    puVar7 = (undefined4 *)FUN_004543a0(abStack_128);
    *puVar7 = 1;
    local_4._0_1_ = 0x19;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_128);
    FUN_00420ca0(&local_234,local_230);
    if (fStack_1b8 != local_234) {
      if (*(int *)((int)local_234 + 0x24) == 0) {
        *(undefined4 *)(iVar4 + 0xb4) = 0;
      }
      else if (*(int *)((int)local_234 + 0x24) == 1) {
        *(undefined4 *)(iVar4 + 0xb4) = 1;
        local_4 = CONCAT31(local_4._1_3_,0x18);
        goto code_r0x0045552f;
      }
    }
    local_4 = CONCAT31(local_4._1_3_,0x18);
    goto code_r0x0045552f;
  case 0xd:
  case 0x10:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (bVar2) break;
    pbVar6 = local_208;
    FUN_0041ce80(pbVar6);
    iVar4 = FUN_004295a0(pbVar6);
    pcVar5 = (char *)FUN_0054fe20(param_1,3,local_1ec);
    uVar13 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (abStack_2c,pcVar5);
    FUN_00408950(local_230,uVar13);
    local_4._0_1_ = 0x1c;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_2c);
    func_0x00454380();
    local_4._0_1_ = 0x1d;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_80,"false")
    ;
    local_4._0_1_ = 0x1e;
    puVar7 = (undefined4 *)FUN_004543a0(abStack_80);
    *puVar7 = 0;
    local_4._0_1_ = 0x1d;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_80);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_f0,"no");
    local_4._0_1_ = 0x1f;
    puVar7 = (undefined4 *)FUN_004543a0(abStack_f0);
    *puVar7 = 0;
    local_4._0_1_ = 0x1d;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_f0);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_d4,"0");
    local_4._0_1_ = 0x20;
    puVar7 = (undefined4 *)FUN_004543a0(abStack_d4);
    *puVar7 = 0;
    local_4._0_1_ = 0x1d;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_d4);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_9c,"true");
    local_4._0_1_ = 0x21;
    puVar7 = (undefined4 *)FUN_004543a0(abStack_9c);
    *puVar7 = 1;
    local_4._0_1_ = 0x1d;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_9c);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_144,"yes");
    local_4._0_1_ = 0x22;
    puVar7 = (undefined4 *)FUN_004543a0(abStack_144);
    *puVar7 = 1;
    local_4._0_1_ = 0x1d;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_144);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_198,"1");
    local_4._0_1_ = 0x23;
    puVar7 = (undefined4 *)FUN_004543a0(local_198);
    *puVar7 = 1;
    local_4._0_1_ = 0x1d;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_198);
    FUN_00420ca0(&local_234,local_230);
    if (fStack_1b8 != local_234) {
      if (*(int *)((int)local_234 + 0x24) == 0) {
        iVar10 = *(int *)((int)fVar1 + 0x24);
        if (iVar10 == 0xd) {
          *(undefined1 *)(iVar4 + 0xb8) = 0;
        }
        else if (iVar10 == 0x10) {
          *(undefined1 *)(iVar4 + 0xb9) = 0;
        }
      }
      else if (*(int *)((int)local_234 + 0x24) == 1) {
        iVar10 = *(int *)((int)fVar1 + 0x24);
        if (iVar10 == 0xd) {
          *(undefined1 *)(iVar4 + 0xb8) = 1;
        }
        else if (iVar10 == 0x10) {
          *(undefined1 *)(iVar4 + 0xb9) = 1;
        }
      }
    }
    local_4 = CONCAT31(local_4._1_3_,0x1c);
code_r0x0045552f:
    FUN_00453c10();
code_r0x0045553b:
    local_4._0_1_ = 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_230);
    break;
  case 0xe:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (bVar2) break;
    pbVar6 = local_208;
    FUN_0041ce80(pbVar6);
    iVar4 = FUN_004295a0(pbVar6);
    pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (iVar4 + 0x60);
    pcVar5 = (char *)FUN_0054fe20(param_1,3,0);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (pbVar6,pcVar5);
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (pbVar6);
    if (bVar2) break;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_10c,".\\Textures\\");
    uVar13 = 0xffffffff;
    pbVar14 = abStack_10c;
    pbVar16 = pbVar6;
    FUN_0041ce80(pbVar14,pbVar6,0xffffffff);
    cVar3 = FUN_00429a60(pbVar14,pbVar16,uVar13);
    pbVar14 = abStack_10c;
    goto code_r0x00454e11;
  case 0xf:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (bVar2) break;
    pbVar6 = local_208;
    FUN_0041ce80(pbVar6);
    iVar4 = FUN_004295a0(pbVar6);
    pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (iVar4 + 0x7c);
    pcVar5 = (char *)FUN_0054fe20(param_1,3,0);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (pbVar6,pcVar5);
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (pbVar6);
    if (bVar2) break;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_64,".\\Textures\\");
    uVar13 = 0xffffffff;
    pbVar14 = abStack_64;
    pbVar16 = pbVar6;
    FUN_0041ce80(pbVar14,pbVar6,0xffffffff);
    cVar3 = FUN_00429a60(pbVar14,pbVar16,uVar13);
    pbVar14 = abStack_64;
code_r0x00454e11:
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(pbVar14);
    if (cVar3 == '\0') {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::clear
                (pbVar6);
    }
    break;
  case 0x11:
    bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                      (local_208);
    if (!bVar2) {
      pbVar6 = local_208;
      FUN_0041ce80(pbVar6);
      iVar4 = FUN_004295a0(pbVar6);
      fVar15 = (float10)FUN_0054fe94(param_1,3);
      *(float *)(iVar4 + 0x9c) = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,4);
      *(float *)(iVar4 + 0xa0) = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,5);
      *(float *)(iVar4 + 0xa4) = (float)fVar15;
      fVar15 = (float10)FUN_0054fe94(param_1,6);
      *(float *)(iVar4 + 0xa8) = (float)fVar15;
    }
  }
LAB_0045554c:
  local_4._0_1_ = 2;
  FUN_00453c10();
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_17c);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_208);
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_00455600 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00455600(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  uint unaff_retaddr;
  float fVar8;
  undefined1 local_79;
  float local_78;
  undefined1 local_74 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_70 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_54 [36];
  float local_30;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057c2b3;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  iVar1 = FUN_0041ce80();
  if (iVar1 == 0) {
LAB_00455a0d:
    FUN_00412cfc(param_1,0,0);
    ExceptionList = local_c;
    return 1;
  }
  FUN_0041ce80();
  iVar1 = FUN_0041cb40();
  if (iVar1 == 0) goto LAB_00455a0d;
  pcVar2 = (char *)FUN_0054fe20(param_1,1,local_74);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_70,pcVar2);
  local_4 = 0;
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00408950(local_54,local_70);
  local_4._0_1_ = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_70,pbVar3);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54);
  FUN_0040d000(&local_79,&local_79);
  local_4._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54,"enable");
  local_4._0_1_ = 3;
  puVar4 = (undefined4 *)FUN_0040ce90(local_54);
  *puVar4 = 0;
  local_4._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54,"on");
  local_4._0_1_ = 4;
  puVar4 = (undefined4 *)FUN_0040ce90(local_54);
  *puVar4 = 0;
  local_4._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54,"disable");
  local_4._0_1_ = 5;
  puVar4 = (undefined4 *)FUN_0040ce90(local_54);
  *puVar4 = 1;
  local_4._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54,"off");
  local_4._0_1_ = 6;
  puVar4 = (undefined4 *)FUN_0040ce90(local_54);
  *puVar4 = 1;
  local_4._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54,"rain");
  local_4._0_1_ = 7;
  puVar4 = (undefined4 *)FUN_0040ce90(local_54);
  *puVar4 = 2;
  local_4 = CONCAT31(local_4._1_3_,2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54);
  FUN_0040f450(&local_78,local_70);
  if (local_30 != local_78) {
    iVar1 = *(int *)((int)local_78 + 0x24);
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    else {
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          FUN_0054fe94(param_1,2);
          uVar5 = FUN_004cf110();
          FUN_0041ce80();
          iVar1 = FUN_0041cb40();
          *(undefined4 *)(iVar1 + 0x104) = uVar5;
        }
        goto LAB_00455856;
      }
      uVar5 = 0;
    }
    FUN_0041ce80(uVar5);
    FUN_0041cb60(uVar5);
  }
LAB_00455856:
  local_4 = local_4 & 0xffffff00;
  FUN_004f79d0();
  FUN_00453f00(&local_79,&local_79);
  local_4._0_1_ = 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54,"fine");
  local_4._0_1_ = 9;
  puVar4 = (undefined4 *)FUN_004543a0(local_54);
  *puVar4 = 0;
  local_4._0_1_ = 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54,"cloudy");
  local_4._0_1_ = 10;
  puVar4 = (undefined4 *)FUN_004543a0(local_54);
  *puVar4 = 1;
  local_4._0_1_ = 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54,"overcast");
  local_4._0_1_ = 0xb;
  puVar4 = (undefined4 *)FUN_004543a0(local_54);
  *puVar4 = 2;
  local_4._0_1_ = 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54,"storm");
  local_4._0_1_ = 0xc;
  puVar4 = (undefined4 *)FUN_004543a0(local_54);
  *puVar4 = 3;
  local_4 = CONCAT31(local_4._1_3_,8);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54);
  FUN_00420ca0(&local_78,local_70);
  if (local_30 != local_78) {
    fVar7 = (float10)FUN_0054fe94(param_1,2);
    fVar8 = (float)fVar7;
    uVar5 = *(undefined4 *)((int)local_78 + 0x24);
    local_78 = fVar8;
    FUN_0041ce80(uVar5,fVar8);
    FUN_0041cb40();
    uVar6 = FUN_00446ee0(uVar5,fVar8);
    local_78 = (float)(uVar6 & 0xff);
    if ((float)(int)local_78 != _DAT_00582ad8) {
      uVar5 = 0x3ff00000;
      goto LAB_004559da;
    }
  }
  uVar5 = 0;
LAB_004559da:
  FUN_00412cfc(param_1,0,uVar5);
  local_4 = local_4 & 0xffffff00;
  FUN_00453c10();
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_70);
  ExceptionList = local_c;
  return 1;
}




/* Function: FUN_00455a50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00455a50(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  undefined4 *puVar6;
  uint uVar7;
  float10 fVar8;
  uint unaff_retaddr;
  undefined4 uVar10;
  longlong lVar9;
  float fVar11;
  undefined1 local_e5;
  float local_e4;
  int *local_e0;
  float fStack_dc;
  int iStack_d8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_d4 [28];
  float local_b8;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  float fStack_90;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_8c [36];
  float local_68;
  float fStack_3c;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057c348;
  local_14 = ExceptionList;
  local_1c = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &local_14;
  iVar2 = FUN_0041ce80();
  if (iVar2 == 0) {
    FUN_00412cfc(param_1,0,0);
    ExceptionList = local_14;
    return 1;
  }
  FUN_0041ce80();
  piVar3 = (int *)FUN_0041cb10();
  local_e0 = piVar3;
  if (piVar3 == (int *)0x0) {
    FUN_00412cfc(param_1,0,0);
    ExceptionList = local_14;
    return 1;
  }
  pcVar4 = (char *)FUN_0054fe20(param_1,1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_8c,pcVar4);
  local_c = 0;
  bVar1 = std::operator==(local_8c,"level");
  if (bVar1) {
    fVar8 = (float10)FUN_0054fe64(param_1,3,0,0);
    local_e4 = (float)fVar8;
    fVar8 = (float10)FUN_0054fe64(param_1,2,0,0);
    local_b8 = (float)fVar8;
    local_b0 = local_e4;
    local_b4 = 0.0;
    fVar8 = (float10)FUN_005068f0();
    FUN_00412cfc(param_1,(double)fVar8);
    goto LAB_00456146;
  }
  pbVar5 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00408950(local_d4);
  local_c._0_1_ = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_8c,pbVar5);
  local_c._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4);
  FUN_0040d000(&local_e5,&local_e5);
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4,"enable");
  local_c._0_1_ = 3;
  puVar6 = (undefined4 *)FUN_0040ce90();
  *puVar6 = 0;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4,"on");
  local_c._0_1_ = 4;
  puVar6 = (undefined4 *)FUN_0040ce90();
  *puVar6 = 0;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4,"disable");
  local_c._0_1_ = 5;
  puVar6 = (undefined4 *)FUN_0040ce90();
  *puVar6 = 1;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4,"off");
  local_c._0_1_ = 6;
  puVar6 = (undefined4 *)FUN_0040ce90();
  *puVar6 = 1;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4,"init");
  local_c._0_1_ = 7;
  puVar6 = (undefined4 *)FUN_0040ce90();
  *puVar6 = 2;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4,"drop");
  local_c._0_1_ = 8;
  puVar6 = (undefined4 *)FUN_0040ce90();
  *puVar6 = 3;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4,"ind");
  local_c._0_1_ = 9;
  puVar6 = (undefined4 *)FUN_0040ce90();
  *puVar6 = 4;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4);
  FUN_0040f450(&local_e4,local_8c);
  if (local_68 == local_e4) goto LAB_00455db0;
  switch(*(undefined4 *)((int)local_e4 + 0x24)) {
  case 0:
    uVar10 = 1;
    (**(code **)(*piVar3 + 8))();
    iVar2 = *piVar3;
    lVar9 = CONCAT44(uVar10,1);
    goto code_r0x00455dab;
  case 1:
    uVar7 = 0;
    (**(code **)(*piVar3 + 8))();
    iVar2 = *piVar3;
    lVar9 = (ulonglong)uVar7 << 0x20;
code_r0x00455dab:
    (**(code **)(iVar2 + 4))(lVar9);
    break;
  case 2:
    FUN_0054fe64(param_1,2,0);
    uStack_98 = FUN_004cf110();
    fVar8 = (float10)FUN_0054fe64(param_1,3,0,0xc0440000);
    fStack_dc = (float)fVar8;
    fVar8 = (float10)FUN_0054fe64(param_1,4,0xeb1c432d,0x3f4a36e2);
    fStack_90 = (float)fVar8;
    fVar8 = (float10)FUN_0054fe64(param_1,5,0,0x403e0000);
    fStack_a4 = (float)fVar8;
    fVar8 = (float10)FUN_0054fe64(param_1,6,0);
    fStack_a8 = (float)fVar8;
    fVar8 = (float10)FUN_0054fe64(param_1,7,0,0x40590000);
    fStack_ac = (float)fVar8;
    fVar8 = (float10)FUN_0054fe64(param_1,8,0,0x40590000);
    fStack_9c = (float)fVar8;
    fVar8 = (float10)FUN_0054fe64(param_1,9,0,0x4072c000);
    fStack_a0 = (float)fVar8;
    fVar8 = (float10)FUN_0054fe64(param_1,10,0);
    fStack_94 = (float)fVar8;
    fVar8 = (float10)FUN_0054fe64(param_1,0xb,0,0);
    local_e0 = (int *)CONCAT31(local_e0._1_3_,1);
    if (fVar8 <= (float10)_DAT_00582ae8) {
      local_e0 = (int *)((uint)local_e0._1_3_ << 8);
    }
    fVar8 = (float10)FUN_0054fe64(param_1,0xc,0);
    local_e4 = (float)CONCAT31(local_e4._1_3_,1);
    if (fVar8 <= (float10)_DAT_00582ae8) {
      local_e4 = (float)((uint)local_e4._1_3_ << 8);
    }
    local_b8 = fStack_a4;
    local_b4 = fStack_a8;
    func_0x0050bcb0(fStack_dc,uStack_98,uStack_98,fStack_90,&local_b8,fStack_ac,fStack_9c,fStack_a0,
                    fStack_94,local_e0);
    break;
  case 3:
    if (piVar3[0x22] != 0) {
      FUN_0054fe64(param_1,2,0);
      uVar7 = FUN_004cf110();
      FUN_0054fe64(param_1,3,0,0);
      local_e4 = (float)FUN_004cf110();
      if ((int)uVar7 < 1) {
        uVar7 = 1;
      }
      if ((int)local_e4 < 1) {
        local_e4 = 1.4013e-45;
      }
      iVar2 = FUN_005538a0();
      if (iVar2 - 2U < uVar7) {
        iVar2 = FUN_005538a0();
        uVar7 = iVar2 - 2;
      }
      iVar2 = FUN_005538a0();
      if ((uint)(iVar2 + -2) < (uint)local_e4) {
        iVar2 = FUN_005538a0();
        local_e4 = (float)(iVar2 + -2);
      }
      func_0x005062b0(uVar7);
    }
    break;
  case 4:
    fVar8 = (float10)FUN_0054fe64(param_1,3,0,0);
    fVar11 = (float)fVar8;
    fVar8 = (float10)FUN_0054fe64(param_1,2,0,0,fVar11);
    FUN_00506980(&fStack_dc,(float)fVar8,fVar11);
    FUN_00412cfc(param_1,(double)(int)fStack_dc);
    FUN_00412cfc(param_1,(double)iStack_d8);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_004f79d0();
    local_c = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_8c);
    ExceptionList = local_14;
    return 2;
  }
LAB_00455db0:
  local_c = (uint)local_c._1_3_ << 8;
  FUN_004f79d0();
  FUN_0040d000(&local_e5,&local_e5);
  local_c._0_1_ = 10;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4,"level");
  local_c._0_1_ = 0xb;
  puVar6 = (undefined4 *)FUN_0040ce90();
  *puVar6 = 0;
  local_c = CONCAT31(local_c._1_3_,10);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d4);
  FUN_0040f450(&fStack_dc,local_8c);
  if (fStack_3c == fStack_dc) {
    uVar10 = 0;
  }
  else {
    fVar8 = (float10)FUN_0054fe94(param_1,2);
    fStack_dc = (float)fVar8;
    FUN_00505e30();
    uVar10 = 0x3ff00000;
  }
  FUN_00412cfc(param_1,0,uVar10);
  local_c = local_c & 0xffffff00;
  FUN_004f79d0();
LAB_00456146:
  local_c = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_8c);
  ExceptionList = local_14;
  return 1;
}




/* Function: FUN_004561a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004561a0(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  float10 fVar7;
  uint unaff_retaddr;
  uint uVar9;
  double dVar8;
  float local_140;
  undefined1 local_139;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_138 [28];
  float fStack_11c;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float local_fc;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_d0 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_b4 [36];
  float fStack_90;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_70 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_54 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_38 [28];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057c42d;
  local_14 = ExceptionList;
  local_1c = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &local_14;
  iVar1 = FUN_0041ce80();
  if (iVar1 == 0) {
    FUN_00412cfc(param_1,0,0);
    ExceptionList = local_14;
    return 1;
  }
  pcVar2 = (char *)FUN_0054fe20(param_1,1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d0,pcVar2);
  local_c = 0;
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00408950(local_b4);
  local_c._0_1_ = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_d0,pbVar3);
  local_c._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_b4);
  FUN_0040d000(&local_139,&local_139);
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138,"enable");
  local_c._0_1_ = 3;
  puVar4 = (undefined4 *)FUN_0040ce90();
  *puVar4 = 0;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138,"on");
  local_c._0_1_ = 4;
  puVar4 = (undefined4 *)FUN_0040ce90();
  *puVar4 = 0;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138,"disable");
  local_c._0_1_ = 5;
  puVar4 = (undefined4 *)FUN_0040ce90();
  *puVar4 = 1;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138,"off");
  local_c._0_1_ = 6;
  puVar4 = (undefined4 *)FUN_0040ce90();
  *puVar4 = 1;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138,"time");
  local_c._0_1_ = 7;
  puVar4 = (undefined4 *)FUN_0040ce90();
  *puVar4 = 2;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138,"planets");
  local_c._0_1_ = 8;
  puVar4 = (undefined4 *)FUN_0040ce90();
  *puVar4 = 3;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138,"disp_off")
  ;
  local_c._0_1_ = 9;
  puVar4 = (undefined4 *)FUN_0040ce90();
  *puVar4 = 4;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138,"disp_on");
  local_c._0_1_ = 10;
  puVar4 = (undefined4 *)FUN_0040ce90();
  *puVar4 = 5;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138,"get_time")
  ;
  local_c._0_1_ = 0xb;
  puVar4 = (undefined4 *)FUN_0040ce90();
  *puVar4 = 6;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138,"sunsize");
  local_c._0_1_ = 0xc;
  puVar4 = (undefined4 *)FUN_0040ce90();
  *puVar4 = 7;
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138);
  FUN_0040f450(&local_140,local_d0);
  if (local_fc == local_140) {
    uVar9 = 0;
  }
  else {
    switch(*(undefined4 *)((int)local_140 + 0x24)) {
    case 0:
      FUN_0041ce80();
      func_0x0041cb50();
      break;
    case 1:
      FUN_0041ce80();
      func_0x0041cb50();
      break;
    case 2:
      fVar7 = (float10)FUN_0054fe94(param_1,2);
      local_140 = (float)fVar7;
      FUN_0041ce80();
      FUN_0041cb30();
      FUN_004fd710();
      break;
    case 3:
      pcVar2 = (char *)FUN_0054fe20(param_1,2);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138,pcVar2)
      ;
      pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_00408950(abStack_38);
      local_c._0_1_ = 0xe;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                (local_138,pbVar3);
      local_c._0_1_ = 0xd;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_38);
      FUN_0040ce70();
      local_c._0_1_ = 0xf;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_70,"add")
      ;
      local_c._0_1_ = 0x10;
      puVar4 = (undefined4 *)FUN_0040ce90();
      *puVar4 = 0;
      local_c._0_1_ = 0xf;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_70);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (abStack_54,"clear");
      local_c._0_1_ = 0x11;
      puVar4 = (undefined4 *)FUN_0040ce90();
      *puVar4 = 1;
      local_c._0_1_ = 0xf;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_54);
      FUN_0040f450(&local_140,local_138);
      if (fStack_90 == local_140) {
        FUN_00412cfc(param_1,0,0);
        local_c._0_1_ = 0xd;
        FUN_004f79d0();
        local_c._0_1_ = 2;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138);
        goto code_r0x00456842;
      }
      if (*(int *)((int)local_140 + 0x24) == 0) {
        pcVar2 = (char *)FUN_0054fe20(param_1,3);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  (local_b4,pcVar2);
        fVar7 = (float10)FUN_0054fe94(param_1,4);
        fStack_11c = (float)fVar7;
        fVar7 = (float10)FUN_0054fe94(param_1,5);
        fStack_108 = (float)fVar7;
        fVar7 = (float10)FUN_0054fe94(param_1,6);
        fStack_10c = (float)fVar7;
        fVar7 = (float10)FUN_0054fe94(param_1,7);
        fStack_114 = (float)fVar7;
        fVar7 = (float10)FUN_0054fe94(param_1,8);
        local_140 = (float)fVar7;
        fVar7 = (float10)FUN_0054fe94(param_1,9);
        fStack_110 = (float)fVar7;
        fVar7 = (float10)FUN_0054fe94(param_1,10);
        fStack_d4 = (float)fVar7;
        fStack_dc = local_140;
        fStack_d8 = fStack_110;
        uVar5 = FUN_0041ce80(local_b4,fStack_11c,fStack_108,fStack_10c,fStack_114,&fStack_dc);
        FUN_0041ce80(uVar5);
        FUN_0041cb30();
        func_0x004fe410();
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_b4);
      }
      else if (*(int *)((int)local_140 + 0x24) == 1) {
        FUN_0041ce80();
        FUN_0041cb30();
        FUN_004fe5c0();
      }
      local_c._0_1_ = 0xd;
      FUN_004f79d0();
      local_c._0_1_ = 2;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_138);
      break;
    case 4:
      FUN_0041ce80();
      piVar6 = (int *)FUN_0041cb30();
      (**(code **)(*piVar6 + 8))();
      break;
    case 5:
      FUN_0041ce80();
      piVar6 = (int *)FUN_0041cb30();
      (**(code **)(*piVar6 + 8))();
      break;
    case 6:
      FUN_0041ce80();
      FUN_0041cb30();
      fVar7 = (float10)FUN_004fbea0();
      dVar8 = (double)fVar7;
      goto code_r0x00456839;
    case 7:
      fVar7 = (float10)FUN_0054fe94(param_1,2);
      fStack_11c = (float)fVar7;
      FUN_0041ce80();
      FUN_0041cb30();
      func_0x004fbeb0();
    }
    uVar9 = 0x3ff00000;
  }
  dVar8 = (double)((ulonglong)uVar9 << 0x20);
code_r0x00456839:
  FUN_00412cfc(param_1,dVar8);
code_r0x00456842:
  local_c = (uint)local_c._1_3_ << 8;
  FUN_004f79d0();
  local_c = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d0);
  ExceptionList = local_14;
  return 1;
}




/* Function: FUN_004568b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004568b0(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  undefined4 *puVar5;
  uint unaff_retaddr;
  uint uVar7;
  double dVar6;
  undefined1 local_a5;
  uint local_a4;
  undefined4 local_a0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_98 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_7c [36];
  uint local_58;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [28];
  uint local_1c;
  void *local_14;
  undefined *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &DAT_0057c48a;
  local_14 = ExceptionList;
  local_1c = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &local_14;
  iVar1 = FUN_0041ce80();
  if (iVar1 == 0) {
    FUN_00412cfc(param_1,0,0);
    ExceptionList = local_14;
    return 1;
  }
  local_a0 = FUN_0041ce80();
  pcVar2 = (char *)FUN_0054fe20(param_1,1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38,pcVar2);
  local_c = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str(local_38)
  ;
  FUN_0041cac0();
  piVar3 = (int *)FUN_0045b600();
  if (piVar3 == (int *)0x0) {
    FUN_00412cfc(param_1,0,0);
    goto LAB_00456b20;
  }
  pcVar2 = (char *)FUN_0054fe20(param_1,2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_7c,pcVar2);
  pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00408950(local_98);
  local_c._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (local_7c,pbVar4);
  local_c._0_1_ = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_98);
  FUN_0040d000(&local_a5,&local_a5);
  local_c._0_1_ = 3;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_98,"show");
  local_c._0_1_ = 4;
  puVar5 = (undefined4 *)FUN_0040ce90();
  *puVar5 = 0;
  local_c._0_1_ = 3;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_98);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_98,"hide");
  local_c._0_1_ = 5;
  puVar5 = (undefined4 *)FUN_0040ce90();
  *puVar5 = 1;
  local_c._0_1_ = 3;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_98);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_98,"visible");
  local_c._0_1_ = 6;
  puVar5 = (undefined4 *)FUN_0040ce90();
  *puVar5 = 2;
  local_c = CONCAT31(local_c._1_3_,3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_98);
  FUN_0040f450(&local_a4,local_7c);
  if (local_58 == local_a4) {
LAB_00456ab5:
    uVar7 = 0;
LAB_00456af2:
    dVar6 = (double)((ulonglong)uVar7 << 0x20);
  }
  else {
    iVar1 = *(int *)(local_a4 + 0x24);
    if (iVar1 == 0) {
      (**(code **)(*piVar3 + 0x28))();
LAB_00456aed:
      uVar7 = 0x3ff00000;
      goto LAB_00456af2;
    }
    if (iVar1 == 1) {
      (**(code **)(*piVar3 + 0x20))();
      goto LAB_00456aed;
    }
    if (iVar1 != 2) goto LAB_00456ab5;
    local_a4 = (uint)(*(char *)((int)piVar3 + 0x35) != '\0');
    dVar6 = (double)local_a4;
  }
  FUN_00412cfc(param_1,dVar6);
  local_c._0_1_ = 1;
  FUN_004f79d0();
  local_c = (uint)local_c._1_3_ << 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_7c);
LAB_00456b20:
  local_c = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
  ExceptionList = local_14;
  return 1;
}




/* Function: FUN_00456b70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00456b70(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  uint unaff_retaddr;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_160 [4];
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  uint uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 local_120;
  undefined1 local_d4 [4];
  undefined1 local_d0 [16];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_9c [92];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_40 [36];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057c4b3;
  local_14 = ExceptionList;
  local_1c = DAT_005b12c0 ^ unaff_retaddr;
  local_120 = (double)CONCAT44(0x456ba8,(undefined4)local_120);
  ExceptionList = &local_14;
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    local_120 = (double)CONCAT44(local_d4,&DAT_005831e1);
    fStack_124 = 1.4013e-45;
    fStack_128 = (float)param_1;
    fStack_12c = 6.375318e-39;
    pcVar2 = (char *)FUN_0054fdc0();
    fStack_12c = 0.0;
    fStack_130 = 0.0;
    uStack_134 = 2;
    uStack_138 = param_1;
    uStack_13c = 0x456bdb;
    FUN_0054fe64();
    uStack_13c = 0;
    uStack_140 = 0;
    uStack_144 = 3;
    uStack_148 = param_1;
    uStack_14c = 0x456beb;
    FUN_0054fe64();
    local_120 = (double)CONCAT44(0x456bf9,(undefined4)local_120);
    iVar1 = FUN_0041c920();
    local_120 = (double)*(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 8) < 0) {
      local_120 = local_120 + _DAT_00589ec0;
    }
    fStack_124 = 5.60519e-45;
    fStack_128 = (float)param_1;
    fStack_12c = 6.375425e-39;
    FUN_0054fe64();
    local_120 = (double)CONCAT44(0x456c25,(undefined4)local_120);
    iVar1 = FUN_0041c920();
    local_120 = (double)*(int *)(iVar1 + 0xc);
    if (*(int *)(iVar1 + 0xc) < 0) {
      local_120 = local_120 + _DAT_00589ec0;
    }
    fStack_124 = 7.00649e-45;
    fStack_128 = (float)param_1;
    fStack_12c = 6.375486e-39;
    FUN_0054fe64();
    fStack_12c = 1.875;
    fStack_130 = 0.0;
    uStack_134 = 6;
    uStack_138 = param_1;
    uStack_13c = 0x456c56;
    FUN_0054fe64();
    uStack_13c = 0x456c5b;
    uVar3 = FUN_004cf110();
    uStack_13c = 0x406fe000;
    uStack_140 = 0;
    uStack_144 = 7;
    uStack_148 = param_1;
    uStack_14c = 0x456c6e;
    FUN_0054fe64();
    uStack_14c = 0x456c73;
    uVar4 = FUN_004cf110();
    uStack_14c = 0x406fe000;
    uStack_150 = 0;
    uStack_154 = 8;
    uStack_158 = param_1;
    uStack_15c = 0x456c84;
    FUN_0054fe64();
    local_120 = (double)CONCAT44(0x456c8c,(undefined4)local_120);
    uVar5 = FUN_004cf110();
    local_120 = 255.0;
    fStack_124 = 1.26117e-44;
    fStack_128 = (float)param_1;
    fStack_12c = 6.375612e-39;
    FUN_0054fe64();
    fStack_12c = 6.37562e-39;
    uVar6 = FUN_004cf110();
    fStack_12c = 3.7480469;
    fStack_130 = 0.0;
    uStack_134 = 10;
    uStack_138 = param_1;
    uStack_13c = 0x456cb5;
    FUN_0054fe64();
    uStack_13c = 0x456cba;
    iVar1 = FUN_004cf110();
    uStack_13c = 0;
    uStack_140 = 0;
    uStack_144 = 0xb;
    uStack_148 = param_1;
    uStack_14c = 0x456cca;
    fVar7 = (float10)FUN_0054fe64();
    uStack_14c = 0;
    uStack_150 = 0;
    uStack_154 = 0xc;
    uStack_158 = param_1;
    uStack_15c = 0x456cda;
    fVar8 = (float10)FUN_0054fe64();
    local_120 = 1.0;
    fStack_124 = 1.82169e-44;
    fStack_128 = (float)param_1;
    fStack_12c = 6.375729e-39;
    fVar9 = (float10)FUN_0054fe64();
    fStack_12c = 1.875;
    fStack_130 = 0.0;
    uStack_134 = 0xe;
    uStack_138 = param_1;
    uStack_13c = 0x456d03;
    fVar10 = (float10)FUN_0054fe64();
    uStack_13c = 0;
    uStack_140 = 0;
    uStack_144 = 0xf;
    uStack_148 = param_1;
    uStack_14c = 0x456d13;
    fVar11 = (float10)FUN_0054fe64();
    local_120 = (double)CONCAT44((float)fVar11,uVar3);
    uStack_134 = ((uVar4 & 0xff | iVar1 << 8) << 8 | uVar5 & 0xff) << 8 | uVar6 & 0xff;
    uStack_138 = 0x456d6a;
    fStack_130 = (float)fVar7;
    fStack_12c = (float)fVar8;
    fStack_128 = (float)fVar9;
    fStack_124 = (float)fVar10;
    uStack_138 = FUN_004cf110();
    uStack_13c = 0x456d74;
    uStack_13c = FUN_004cf110();
    uStack_140 = 0x456d7e;
    uStack_140 = FUN_004cf110();
    uStack_144 = 0x456d88;
    uStack_144 = FUN_004cf110();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_160,pcVar2)
    ;
    uVar3 = FUN_0044ac40();
    local_c = 0;
    local_120 = (double)CONCAT44(uVar3,0x456dbe);
    FUN_0044adb0();
    local_c = CONCAT31(local_c._1_3_,2);
    local_120 = (double)CONCAT44(0x456dd3,(undefined4)local_120);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_40);
    local_c0 = DAT_005b6074;
    local_b4 = DAT_005b6080;
    local_bc = DAT_005b6078;
    local_b8 = DAT_005b607c;
    local_120 = (double)CONCAT44(0x456e03,(undefined4)local_120);
    FUN_0041cac0();
    local_120 = (double)CONCAT44(local_d0,0x456e13);
    FUN_00454000();
    local_c = 0xffffffff;
    local_120 = (double)CONCAT44(0x456e28,(undefined4)local_120);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_9c);
  }
  ExceptionList = local_14;
  return 0;
}




/* Function: FUN_00456e50 */

/* WARNING: Removing unreachable block (ram,0x00456f68) */

void __thiscall
FUN_00456e50(int param_1,int *param_2,
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
      FUN_00452c70(iVar7 * 2 + -1,*(undefined4 *)(param_1 + 8));
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
  iVar10 = FUN_00451f50(puVar13,puVar13[1],param_3);
  FUN_00451eb0(1);
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




/* Function: FUN_004570e0 */

void FUN_004570e0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0057c4d1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_00453960(param_3);
    }
    param_1 = param_1 + 0x4c;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}




/* Function: FUN_00457170 */

int FUN_00457170(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
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
  puStack_8 = &LAB_0057c048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c,param_1);
  local_10 = 0;
  local_4 = 0;
  piVar2 = (int *)FUN_00456e50(local_34,local_2c);
  iVar1 = *piVar2;
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
  ExceptionList = local_c;
  return iVar1 + 0x24;
}




/* Function: FUN_004571f0 */

void __thiscall
FUN_004571f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004544b0(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00457220 */

void * __thiscall FUN_00457220(void *param_1,byte param_2)

{
  FUN_00457240();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00457240 */

void __fastcall FUN_00457240(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057c4e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_0058a188;
  local_4 = 0;
  if (param_1[0x21] != 0) {
    FUN_004572d0(1);
    if ((void *)param_1[0x21] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_1[0x21]);
    }
  }
  param_1[0x21] = 0;
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




/* Function: FUN_004572d0 */

void __thiscall FUN_004572d0(int *param_1,undefined4 param_2)

{
  void *pvVar1;
  
  if (*param_1 != 0) {
    FUN_004572d0(param_2);
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      FUN_00407150();
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_004572d0(param_2);
    pvVar1 = (void *)param_1[1];
    if (pvVar1 != (void *)0x0) {
      FUN_00407150();
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    param_1[1] = 0;
  }
  if (((char)param_2 != '\0') && (pvVar1 = (void *)param_1[0xc], pvVar1 != (void *)0x0)) {
    FUN_00457360();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  return;
}




/* Function: FUN_00457360 */

void FUN_00457360(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057c508;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00532a60();
  local_4 = 0xffffffff;
  FUN_00532a60();
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004573b0 */

undefined4 * __fastcall FUN_004573b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057c562;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040d9f0();
  local_4 = 0;
  *param_1 = &PTR_LAB_0058a210;
  _eh_vector_constructor_iterator_
            (param_1 + 0x21,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310(0x3f800000);
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  local_4._0_1_ = 2;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x9a));
  local_4._0_1_ = 3;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xa1));
  puVar2 = param_1 + 0x46;
  for (iVar1 = 0x53; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004493f0();
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x32) = 1;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  param_1[0x36] = 0;
  fVar3 = std::numeric_limits<float>::max();
  param_1[0x37] = fVar3;
  fVar3 = std::numeric_limits<float>::max();
  param_1[0x38] = fVar3;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_004574c0 */

void * __thiscall FUN_004574c0(void *param_1,byte param_2)

{
  FUN_00469b20();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00457580 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00457580(undefined4 param_1)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_2c [24];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057c58a;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar3 = FUN_0041ce80();
  iVar4 = FUN_0041c940();
  if (iVar4 == 0) {
    FUN_0041ce80();
    uVar3 = FUN_0041e5b0();
    FUN_0040a410(uVar3);
    FUN_00412cfc(param_1,0,0);
  }
  else {
    uVar5 = FUN_0054fe20(param_1,1,local_2c);
    piVar7 = (int *)0x0;
    fVar8 = (float10)FUN_0054fe64(param_1,2,0,0);
    fVar9 = (float10)FUN_0054fe64(param_1,3,0,0);
    fVar10 = (float10)FUN_0054fe64(param_1,4,0,0);
    FUN_0054fe64(param_1,5,0,0);
    FUN_0054fe64(param_1,6,0,0);
    FUN_0054fe64(param_1,7,0,0);
    fVar11 = (float10)FUN_0054fe64(param_1,8,0,0x3ff00000);
    fVar12 = (float10)FUN_0054fe64(param_1,9,0,0x3ff00000);
    fVar13 = (float10)FUN_0054fe64(param_1,10,0,0x3ff00000);
    fVar14 = (float10)FUN_0054fe64(param_1,0xb,0,0);
    fVar17 = std::numeric_limits<float>::max();
    fVar15 = (float10)FUN_0054fe64(param_1,0xc,(double)fVar17);
    fVar17 = std::numeric_limits<float>::max();
    fVar16 = (float10)FUN_0054fe64(param_1,0xd,(double)fVar17);
    pvVar6 = operator_new(0x2a0,(nothrow_t *)&DAT_005b6164);
    local_c = 0;
    if (pvVar6 != (void *)0x0) {
      piVar7 = (int *)FUN_004573b0();
    }
    local_c = 0xffffffff;
    cVar2 = FUN_004699e0(uVar3,uVar5);
    if (cVar2 == '\0') {
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))();
      }
      FUN_0041ce80("Can\'t start %s",uVar5);
      uVar3 = FUN_0041e5b0();
      FUN_0040a410(uVar3);
      FUN_00412cfc(param_1,0,0);
    }
    else {
      _eh_vector_constructor_iterator_
                (&local_68,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
      local_68 = 0x3f800000;
      local_64 = 0;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0x3f800000;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0x3f800000;
      local_c = 1;
      FUN_0054954c();
      FUN_005494a8();
      FUN_00549408();
      local_44 = (float)fVar11;
      local_40 = (float)fVar12;
      local_3c = (float)fVar13;
      local_38 = (float)fVar8;
      local_34 = (float)fVar9;
      local_30 = (float)fVar10;
      uVar5 = FUN_00548cb8();
      FUN_0044aec0(&local_38,&local_44,uVar5);
      piVar7[0x36] = (int)(float)fVar14;
      iVar4 = *piVar7;
      piVar7[0x37] = (int)(float)fVar16;
      piVar7[0x38] = (int)(float)fVar15;
      uVar5 = FUN_0041c940();
      (**(code **)(iVar4 + 0x1c))(uVar3,uVar5);
      uVar5 = 1;
      uVar3 = FUN_0041c940();
      FUN_00423250(piVar7,uVar3,uVar5);
      dVar1 = (double)(int)piVar7;
      if ((int)piVar7 < 0) {
        dVar1 = dVar1 + _DAT_00589ec0;
      }
      FUN_00412cfc(param_1,dVar1);
      local_c = 0xffffffff;
      _eh_vector_destructor_iterator_(&local_68,0xc,3,FUN_00407150);
    }
  }
  ExceptionList = local_14;
  return 1;
}




/* Function: FUN_00457ce0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00457ce0(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  uint unaff_retaddr;
  undefined1 local_c0 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_bc [28];
  char local_a0 [132];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057c5ac;
  local_14 = ExceptionList;
  local_1c = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &local_14;
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    iVar1 = FUN_004cf110();
    if (iVar1 != 0) {
      pcVar2 = (char *)FUN_0054fdc0(param_1,2,&DAT_0058a2d8,local_c0);
      fVar3 = (float10)FUN_0054fe64(param_1,3,0,0);
      fVar4 = (float10)FUN_0054fe64(param_1,4,0,0);
      fVar5 = (float10)FUN_0054fe64(param_1,5,0,0);
      _snprintf(local_a0,0x80,"%f %f %f",(double)(float)fVar3,(double)(float)fVar4,(double)fVar5);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_bc,pcVar2);
      pcVar2 = local_a0;
      local_c = 0;
      this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_00429f50(local_bc);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                (this,pcVar2);
      local_c = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_bc);
    }
  }
  ExceptionList = local_14;
  return 0;
}




/* Function: FUN_00457f30 */

int __thiscall FUN_00457f30(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_004570e0(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x4c + param_2;
}




/* Function: FUN_00457f60 */

void FUN_00457f60(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x4c) {
    FUN_00453870();
  }
  return;
}




/* Function: FUN_00457f90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_00457f90(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint unaff_retaddr;
  undefined1 *local_84;
  undefined1 *local_80;
  undefined1 local_6c [76];
  undefined1 *local_20;
  undefined1 *local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057c5c8;
  local_10 = ExceptionList;
  local_18 = DAT_005b12c0 ^ unaff_retaddr;
  local_14 = &stack0xffffff88;
  local_80 = (undefined1 *)0x457fcd;
  ExceptionList = &local_10;
  local_1c = param_1;
  FUN_00453960();
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
      FUN_0044ae40();
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
        local_80 = (undefined1 *)0x4580a6;
        puVar1 = (undefined1 *)FUN_00493c27();
        local_8 = CONCAT31(local_8._1_3_,1);
        local_84 = puVar1;
        local_80 = param_1;
        iVar4 = FUN_004544b0(*(undefined4 *)(param_1 + 4));
        local_84 = local_6c;
        local_80 = param_1;
        FUN_004570e0(iVar4);
        local_84 = (undefined1 *)(iVar4 + param_3 * 0x4c);
        local_80 = param_1;
        FUN_004544b0(param_2);
        iVar4 = *(int *)(param_1 + 4);
        iVar3 = 0;
        local_8 = 0;
        if (iVar4 != 0) {
          iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x4c;
        }
        if (iVar4 != 0) {
          local_84 = (undefined1 *)0x458146;
          local_80 = (undefined1 *)iVar4;
          FUN_00457f60();
                    /* WARNING: Subroutine does not return */
          local_80 = &UNK_0045814f;
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
          FUN_004571f0();
          local_84 = *(undefined1 **)(param_1 + 8);
          local_80 = (undefined1 *)(param_3 - ((int)local_84 - (int)param_2) / 0x4c);
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_00457f30();
          iVar4 = *(int *)(param_1 + 8) + param_3 * 0x4c;
          *(int *)(param_1 + 8) = iVar4;
          local_80 = (undefined1 *)(iVar4 + param_3 * -0x4c);
          local_8 = 0;
        }
        else {
          puVar1 = (undefined1 *)((int)local_80 + param_3 * -0x4c);
          local_84 = puVar1;
          uVar2 = FUN_004571f0();
          *(undefined4 *)(param_1 + 8) = uVar2;
          local_84 = param_2;
          local_80 = puVar1;
          FUN_00454470();
          local_80 = param_2 + param_3 * 0x4c;
        }
        local_84 = param_2;
        FUN_00454410();
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_00453870();
  ExceptionList = local_10;
  return;
}




/* Function: FUN_004582e0 */

void __thiscall FUN_004582e0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x4c != 0) {
      iVar1 = (param_3 - iVar1) / 0x4c;
      goto LAB_00458327;
    }
  }
  iVar1 = 0;
LAB_00458327:
  FUN_00457f90(param_3,1,param_4);
  *param_2 = iVar1 * 0x4c + *(int *)(param_1 + 4);
  return;
}




/* Function: FUN_00458350 */

void __thiscall FUN_00458350(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x4c) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x4c))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_004570e0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x4c;
    return;
  }
  FUN_004582e0(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_004583e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004583e0(undefined4 param_1)

{
  int iVar1;
  char *_Str;
  undefined4 uVar2;
  int iVar3;
  uint unaff_retaddr;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_78 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_5c [44];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_30 [28];
  int local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057c5f1;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    FUN_0041ce80();
    iVar1 = FUN_0041c940();
    if ((iVar1 != 0) && (DAT_005b6070 != 0)) {
      iVar1 = FUN_00412940(param_1);
      FUN_00453810();
      local_4 = 0;
      FUN_00412e58(param_1,"tostring");
      iVar3 = 1;
      if (0 < iVar1) {
        do {
          FUN_00412a9c(param_1,0xffffffff);
          FUN_00412a9c(param_1,iVar3);
          FUN_004132a0(param_1,1,1);
          _Str = (char *)FUN_00412c34(param_1,0xffffffff);
          if (_Str != (char *)0x0) {
            if (iVar3 == 1) {
              local_14 = atoi(_Str);
            }
            else if (iVar3 == 2) {
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              operator=(local_5c,_Str);
            }
            else if (iVar3 == 3) {
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              operator=(local_30,_Str);
            }
            else {
              uVar2 = std::
                      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                (local_78,_Str);
              local_4._0_1_ = 1;
              FUN_0040ae90(uVar2);
              local_4 = (uint)local_4._1_3_ << 8;
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_78);
            }
          }
          FUN_00412950(param_1,0xfffffffe);
          iVar3 = iVar3 + 1;
        } while (iVar3 <= iVar1);
      }
      FUN_00458350(local_5c);
      local_4 = 0xffffffff;
      FUN_00453870();
    }
  }
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_00458560 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00458560(float *param_1,int param_2,float param_3,float param_4,float param_5,float *param_6
                )

{
  float fVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  bool bVar11;
  int local_10;
  int local_c;
  
  fVar1 = param_3 * *param_1 + param_4 * param_1[1];
  bVar11 = (float)_DAT_00582ae8 < fVar1 - param_5;
  iVar4 = 0;
  local_c = 0;
  pfVar6 = param_1;
  pfVar9 = param_6;
  if (3 < param_2) {
    local_10 = 2;
    do {
      iVar4 = (local_10 + -1) % param_2;
      if (bVar11 != false) {
        pfVar10 = pfVar6;
        pfVar8 = pfVar9;
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar8 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          pfVar8 = pfVar8 + 1;
        }
        pfVar9 = pfVar9 + 7;
      }
      fVar3 = param_4 * param_1[iVar4 * 7 + 1] + param_3 * param_1[iVar4 * 7];
      pfVar10 = param_1 + iVar4 * 7;
      bVar2 = (float)_DAT_00582ae8 < fVar3 - param_5;
      pfVar8 = pfVar9;
      if (bVar11 != bVar2) {
        pfVar8 = pfVar9 + 7;
        fVar1 = (param_5 - fVar1) / (fVar3 - fVar1);
        *pfVar9 = (*pfVar10 - *pfVar6) * fVar1 + *pfVar6;
        pfVar9[1] = (pfVar10[1] - pfVar6[1]) * fVar1 + pfVar6[1];
        pfVar9[4] = pfVar6[4];
        pfVar9[2] = pfVar6[2];
        pfVar9[3] = pfVar6[3];
        pfVar9[5] = (pfVar10[5] - pfVar6[5]) * fVar1 + pfVar6[5];
        pfVar9[6] = (pfVar10[6] - pfVar6[6]) * fVar1 + pfVar6[6];
      }
      iVar4 = local_10 % param_2;
      pfVar9 = pfVar6 + 7;
      if (bVar2) {
        pfVar10 = pfVar9;
        pfVar7 = pfVar8;
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar7 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          pfVar7 = pfVar7 + 1;
        }
        pfVar8 = pfVar8 + 7;
      }
      fVar1 = param_4 * param_1[iVar4 * 7 + 1] + param_3 * param_1[iVar4 * 7];
      pfVar10 = param_1 + iVar4 * 7;
      bVar11 = (float)_DAT_00582ae8 < fVar1 - param_5;
      pfVar7 = pfVar8;
      if (bVar2 != bVar11) {
        pfVar7 = pfVar8 + 7;
        fVar3 = (param_5 - fVar3) / (fVar1 - fVar3);
        *pfVar8 = (*pfVar10 - *pfVar9) * fVar3 + *pfVar9;
        pfVar8[1] = (pfVar10[1] - pfVar6[8]) * fVar3 + pfVar6[8];
        pfVar8[4] = pfVar6[0xb];
        pfVar8[2] = pfVar6[9];
        pfVar8[3] = pfVar6[10];
        pfVar8[5] = (pfVar10[5] - pfVar6[0xc]) * fVar3 + pfVar6[0xc];
        pfVar8[6] = (pfVar10[6] - pfVar6[0xd]) * fVar3 + pfVar6[0xd];
      }
      iVar4 = (local_10 + 1) % param_2;
      pfVar9 = pfVar6 + 0xe;
      if (bVar11) {
        pfVar10 = pfVar9;
        pfVar8 = pfVar7;
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar8 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          pfVar8 = pfVar8 + 1;
        }
        pfVar7 = pfVar7 + 7;
      }
      fVar3 = param_4 * param_1[iVar4 * 7 + 1] + param_3 * param_1[iVar4 * 7];
      pfVar10 = param_1 + iVar4 * 7;
      bVar2 = (float)_DAT_00582ae8 < fVar3 - param_5;
      pfVar8 = pfVar7;
      if (bVar11 != bVar2) {
        pfVar8 = pfVar7 + 7;
        fVar1 = (param_5 - fVar1) / (fVar3 - fVar1);
        *pfVar7 = (*pfVar10 - *pfVar9) * fVar1 + *pfVar9;
        pfVar7[1] = (pfVar10[1] - pfVar6[0xf]) * fVar1 + pfVar6[0xf];
        pfVar7[4] = pfVar6[0x12];
        pfVar7[2] = pfVar6[0x10];
        pfVar7[3] = pfVar6[0x11];
        pfVar7[5] = (pfVar10[5] - pfVar6[0x13]) * fVar1 + pfVar6[0x13];
        pfVar7[6] = (pfVar10[6] - pfVar6[0x14]) * fVar1 + pfVar6[0x14];
      }
      iVar4 = (local_10 + 2) % param_2;
      pfVar10 = pfVar6 + 0x15;
      if (bVar2) {
        pfVar9 = pfVar10;
        pfVar7 = pfVar8;
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar7 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          pfVar7 = pfVar7 + 1;
        }
        pfVar8 = pfVar8 + 7;
      }
      fVar1 = param_4 * param_1[iVar4 * 7 + 1] + param_3 * param_1[iVar4 * 7];
      pfVar7 = param_1 + iVar4 * 7;
      bVar11 = (float)_DAT_00582ae8 < fVar1 - param_5;
      pfVar9 = pfVar8;
      if (bVar2 != bVar11) {
        pfVar9 = pfVar8 + 7;
        fVar3 = (param_5 - fVar3) / (fVar1 - fVar3);
        *pfVar8 = (*pfVar7 - *pfVar10) * fVar3 + *pfVar10;
        pfVar8[1] = (pfVar7[1] - pfVar6[0x16]) * fVar3 + pfVar6[0x16];
        pfVar8[4] = pfVar6[0x19];
        pfVar8[2] = pfVar6[0x17];
        pfVar8[3] = pfVar6[0x18];
        pfVar8[5] = (pfVar7[5] - pfVar6[0x1a]) * fVar3 + pfVar6[0x1a];
        pfVar8[6] = (pfVar7[6] - pfVar6[0x1b]) * fVar3 + pfVar6[0x1b];
      }
      iVar4 = local_c + 4;
      iVar5 = local_10 + 5;
      pfVar6 = pfVar6 + 0x1c;
      local_10 = local_10 + 4;
      local_c = iVar4;
    } while (iVar5 < param_2);
  }
  if (iVar4 < param_2) {
    local_10 = param_2 - iVar4;
    local_c = iVar4;
    do {
      local_c = local_c + 1;
      iVar4 = local_c % param_2;
      pfVar10 = pfVar9;
      if (bVar11 != false) {
        pfVar10 = pfVar6;
        pfVar8 = pfVar9;
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar8 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          pfVar8 = pfVar8 + 1;
        }
        pfVar10 = pfVar9 + 7;
      }
      fVar3 = param_4 * param_1[iVar4 * 7 + 1] + param_3 * param_1[iVar4 * 7];
      pfVar8 = param_1 + iVar4 * 7;
      bVar2 = (float)_DAT_00582ae8 < fVar3 - param_5;
      pfVar9 = pfVar10;
      if (bVar11 != bVar2) {
        pfVar9 = pfVar10 + 7;
        fVar1 = (param_5 - fVar1) / (fVar3 - fVar1);
        *pfVar10 = (*pfVar8 - *pfVar6) * fVar1 + *pfVar6;
        pfVar10[1] = (pfVar8[1] - pfVar6[1]) * fVar1 + pfVar6[1];
        pfVar10[4] = pfVar6[4];
        pfVar10[2] = pfVar6[2];
        pfVar10[3] = pfVar6[3];
        pfVar10[5] = (pfVar8[5] - pfVar6[5]) * fVar1 + pfVar6[5];
        pfVar10[6] = (pfVar8[6] - pfVar6[6]) * fVar1 + pfVar6[6];
      }
      pfVar6 = pfVar6 + 7;
      local_10 = local_10 + -1;
      fVar1 = fVar3;
      bVar11 = bVar2;
    } while (local_10 != 0);
  }
  return ((int)pfVar9 - (int)param_6) / 0x1c;
}




/* Function: FUN_00458a00 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_00458a00(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_38000 [114688];
  undefined4 auStack_1c000 [28672];
  
  if (param_3 == (int *)0x0) {
    return param_2;
  }
  iVar1 = FUN_00458560(param_1,param_2,0x3f800000,0,(float)*param_3,auStack_38000);
  if (2 < iVar1) {
    iVar1 = FUN_00458560(auStack_38000,iVar1,0xbf800000,0,(float)-(param_3[2] + *param_3),
                         auStack_1c000);
    if (2 < iVar1) {
      iVar1 = FUN_00458560(auStack_1c000,iVar1,0,0x3f800000,(float)param_3[1],auStack_38000);
      if (2 < iVar1) {
        iVar1 = FUN_00458560(auStack_38000,iVar1,0,0xbf800000,(float)-(param_3[3] + param_3[1]),
                             auStack_1c000);
        if (2 < iVar1) {
          puVar4 = auStack_1c000;
          for (uVar2 = (uint)(iVar1 * 0x1c) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *param_1 = *puVar4;
            puVar4 = puVar4 + 1;
            param_1 = param_1 + 1;
          }
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined1 *)param_1 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            param_1 = (undefined4 *)((int)param_1 + 1);
          }
          return iVar1;
        }
      }
    }
  }
  return 0;
}




/* Function: FUN_00458b20 */

void __thiscall FUN_00458b20(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




/* Function: FUN_00458b30 */

void FUN_00458b30(int *param_1)

{
  (**(code **)(*param_1 + 0xf4))(param_1,0,0);
  (**(code **)(*param_1 + 0xf4))(param_1,1,0);
  (**(code **)(*param_1 + 200))(param_1,0x1c,0);
  (**(code **)(*param_1 + 200))(param_1,0x1d,0);
  (**(code **)(*param_1 + 0xfc))(param_1,0,1,4);
  (**(code **)(*param_1 + 0xfc))(param_1,0,2,1);
  (**(code **)(*param_1 + 0xfc))(param_1,0,3,2);
  (**(code **)(*param_1 + 0xfc))(param_1,0,4,4);
  (**(code **)(*param_1 + 0xfc))(param_1,0,5,1);
  (**(code **)(*param_1 + 0xfc))(param_1,0,6,2);
  (**(code **)(*param_1 + 0xfc))(param_1,1,1,1);
  (**(code **)(*param_1 + 0xfc))(param_1,1,4,1);
  (**(code **)(*param_1 + 200))(param_1,0x3c,0xffffffff);
  (**(code **)(*param_1 + 200))(param_1,0x1b,1);
  (**(code **)(*param_1 + 200))(param_1,0x13,5);
  (**(code **)(*param_1 + 200))(param_1,0x14,6);
  (**(code **)(*param_1 + 0xfc))(param_1,0,0xd,3);
  (**(code **)(*param_1 + 0xfc))(param_1,0,0xe,3);
  return;
}




/* Function: FUN_00458c40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00458c40(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8,char *param_9)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int unaff_EBP;
  int iVar8;
  int unaff_retaddr;
  int local_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  float fStack_378;
  float fStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_364;
  undefined4 uStack_360;
  float fStack_35c;
  float fStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  float fStack_340;
  float fStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  int iStack_8;
  int iStack_4;
  
  if ((0 < param_6) && (0 < param_7)) {
    pcVar1 = param_9 + 1;
    do {
      cVar2 = *param_9;
      param_9 = param_9 + 1;
    } while (cVar2 != '\0');
    iVar4 = (int)param_9 - (int)pcVar1;
    if (iVar4 != 0) {
      local_384 = iVar4;
      (**(code **)(*param_1 + 0x130))(param_1,0x144);
      (**(code **)(*param_1 + 0xf4))(param_1,0,unaff_retaddr);
      iVar8 = 0;
      if (0 < iVar4) {
        iVar4 = iStack_4 + param_6;
        do {
          bVar3 = *(byte *)(iVar8 + param_4);
          if (bVar3 == 0x5c) {
            if (*(char *)(iVar8 + 1 + param_4) == 'B') {
              DAT_005b6094 = '\x01';
              iVar8 = iVar8 + 1;
            }
            else if (*(char *)(iVar8 + 1 + param_4) == 'b') {
              DAT_005b6094 = '\0';
              iVar8 = iVar8 + 1;
            }
            else if (*(char *)(iVar8 + 1 + param_4) == 'I') {
              DAT_005b6098 = DAT_005b6098 + 1;
              iVar8 = iVar8 + 1;
            }
            else {
              if (*(char *)(iVar8 + 1 + param_4) != 'i') goto LAB_00458d3c;
              DAT_005b6098 = DAT_005b6098 + -1;
              iVar8 = iVar8 + 1;
            }
          }
          else {
LAB_00458d3c:
            piVar5 = &local_384;
            iVar7 = 4;
            do {
              *piVar5 = param_5;
              piVar5 = piVar5 + 7;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            fStack_340 = (float)iStack_4;
            fStack_374 = (float)unaff_retaddr;
            fStack_35c = (float)iVar4;
            fStack_358 = (float)(unaff_retaddr + param_2);
            fStack_378 = fStack_35c;
            if (DAT_005b6098 != 0) {
              fStack_378 = fStack_35c +
                           (float)DAT_005b6098 * (float)(int)param_1 * (float)_DAT_00588810;
            }
            iVar7 = (uint)bVar3 * 0x10;
            uStack_380 = *(undefined4 *)(iVar7 + iStack_8);
            puVar6 = (undefined4 *)(iVar7 + iStack_8);
            uStack_37c = puVar6[1];
            uStack_364 = puVar6[2];
            uStack_360 = puVar6[1];
            uStack_348 = puVar6[2];
            uStack_344 = puVar6[3];
            uStack_32c = *puVar6;
            uStack_328 = puVar6[3];
            uStack_36c = 0x3f800000;
            uStack_370 = 0x3f800000;
            uStack_350 = 0x3f800000;
            uStack_354 = 0x3f800000;
            uStack_334 = 0x3f800000;
            uStack_338 = 0x3f800000;
            fStack_33c = fStack_358;
            iVar7 = FUN_00458a00(&stack0xfffffc6c,4,param_6);
            iStack_4 = iStack_4 + param_3;
            iVar4 = iVar4 + param_3;
            if (iVar7 != 0) {
              (**(code **)(*param_1 + 0x120))(param_1,6,iVar7 + -2,&stack0xfffffc6c,0x1c);
              if (DAT_005b6094 != '\0') {
                fStack_378 = fStack_378 + _DAT_00583354;
                fStack_35c = fStack_35c + _DAT_00583354;
                fStack_340 = fStack_340 + _DAT_00583354;
                (**(code **)(*param_1 + 0x120))(param_1,6,iVar7 + -2,&stack0xfffffc6c,0x1c);
              }
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < unaff_EBP);
      }
      (**(code **)(*param_1 + 0xf4))(param_1,0,0);
    }
  }
  return;
}




/* Function: FUN_00458fc0 */

void __thiscall FUN_00458fc0(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + param_2;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + param_3;
  return;
}




/* Function: FUN_00459020 */

void __thiscall FUN_00459020(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x85) = param_2;
  return;
}




/* Function: FUN_00459030 */

void __thiscall FUN_00459030(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x8c) = param_2;
  *(undefined4 *)(param_1 + 0x90) = param_3;
  return;
}




/* Function: FUN_00459050 */

void __thiscall FUN_00459050(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x86) = param_2;
  return;
}




/* Function: FUN_00459060 */

void __thiscall FUN_00459060(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x87) = param_2;
  return;
}




/* Function: FUN_00459070 */

void __thiscall FUN_00459070(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x88) = param_2;
  return;
}




/* Function: FUN_00459080 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall FUN_00459080(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined2 *puVar11;
  uint unaff_retaddr;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_428;
  int iStack_424;
  uint uStack_41c;
  char *pcStack_418;
  int iStack_414;
  char *pcStack_410;
  int iStack_40c;
  undefined1 auStack_408 [4];
  char acStack_404 [1024];
  uint local_4;
  
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  local_428 = 0;
  if (param_2 != (int *)0x0) {
    if (*(int *)(param_1 + 8) == 0) {
      FUN_0041e5b0();
      local_428 = FUN_00407c10();
      (**(code **)(*param_2 + 0xf4))(param_2,0,local_428);
    }
    else {
      (**(code **)(*(int *)(param_1 + 8) + 4))(param_2,0);
      local_428 = FUN_004fb910();
      if (local_428 == 0) {
        FUN_0041e5b0();
        local_428 = FUN_00407c10();
        (**(code **)(*param_2 + 0xf4))(param_2,0,local_428);
      }
    }
  }
  FUN_0041e5b0();
  uVar3 = FUN_00407020();
  iVar8 = *(int *)(param_1 + 0x94);
  iVar6 = *(int *)(param_1 + 0x3c);
  uVar5 = *(int *)(param_1 + 0x60) * iVar8;
  uStack_41c = uVar5 >> 1;
  iStack_424 = *(int *)(param_1 + 0x40);
  iVar9 = (*(int *)(param_1 + 0x44) / 2 - uStack_41c) + iVar6;
  iStack_40c = iStack_424;
  if (*(char *)(param_1 + 0x85) != '\0') {
    if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
      if ((*(uint *)(param_1 + 0x88) & 2) != 0) {
        iVar9 = (iVar6 - uVar5) + *(int *)(param_1 + 0x44);
      }
    }
    else {
      iVar9 = iVar6 + 4;
    }
    if (param_2 != (int *)0x0) {
      uVar14 = 0x64000000;
      uVar15 = param_4;
      pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(param_1 + 0x4c));
      FUN_00458c40(param_2,local_428,uVar3,iVar9 + 2,iStack_424 + 6,*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),pcVar4,uVar14,
                   uVar15);
      uVar14 = 0xffc80000;
      uVar15 = param_4;
      pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(param_1 + 0x4c));
      FUN_00458c40(param_2,local_428,uVar3,iVar9,iStack_424 + 4,*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),pcVar4,uVar14,
                   uVar15);
    }
    iVar8 = *(int *)(param_1 + 0x94);
    iStack_424 = iStack_424 + 4 + *(int *)(param_1 + 0x90) + iVar8;
  }
  if (*(char *)(param_1 + 0x84) != '\0') {
    iVar9 = *(int *)(param_1 + 0x44) + -0x14;
    uStack_41c = 0xa0920;
    iStack_414 = iVar9;
    pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (param_1 + 0x68));
    pcStack_410 = _strdup(pcVar4);
    acStack_404[0] = '\0';
    pcStack_418 = strtok(pcStack_410,(char *)&uStack_41c);
    do {
      pcVar4 = acStack_404;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar8 = (int)pcVar4 - (int)(acStack_404 + 1);
      iVar6 = 0;
      if (pcStack_418 != (char *)0x0) {
        pcVar4 = pcStack_418;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        iVar6 = (int)pcVar4 - (int)(pcStack_418 + 1);
      }
      bVar2 = false;
      if ((iVar8 != 0) && (acStack_404[iVar8 + -2] == '|')) {
        pcVar4 = acStack_404;
        acStack_404[iVar8 + -2] = '\0';
        bVar2 = true;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        iVar8 = (int)pcVar4 - (int)(acStack_404 + 1);
      }
      if (((pcStack_418 == (char *)0x0) ||
          (iVar6 = (iVar6 + iVar8) * *(int *)(param_1 + 0x94), iVar6 - iVar9 != 0 && iVar9 <= iVar6)
          ) || (pcVar4 = pcStack_418, bVar2)) {
        if (iVar8 != 0) {
          iVar8 = *(int *)(param_1 + 0x94) * iVar8;
          iVar6 = *(int *)(param_1 + 0x3c);
          auStack_408 = (undefined1  [4])(iVar8 / 2);
          iVar9 = (*(int *)(param_1 + 0x44) / 2 - (int)auStack_408) + iVar6;
          if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
            if ((*(uint *)(param_1 + 0x88) & 2) != 0) {
              iVar9 = (iVar6 - iVar8) + *(int *)(param_1 + 0x44);
            }
          }
          else {
            iVar9 = iVar6 + 4;
          }
          if (param_2 != (int *)0x0) {
            FUN_00458c40(param_2,local_428,uVar3,iVar9 + 2,iStack_424 + 2,
                         *(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),
                         *(int *)(param_1 + 0x94),acStack_404,0x64000000,param_4);
            if (*(char *)(param_1 + 0x87) == '\0') {
              uVar15 = *(undefined4 *)(param_1 + 0x9c);
LAB_00459577:
              uVar14 = *(undefined4 *)(param_1 + 0x94);
              uVar13 = *(undefined4 *)(param_1 + 0x90);
              uVar12 = *(undefined4 *)(param_1 + 0x8c);
            }
            else {
              if (*(char *)(param_1 + 0x37) != '\0') {
                uVar15 = 0xffff0000;
                goto LAB_00459577;
              }
              uVar15 = *(undefined4 *)(param_1 + 0x9c);
              uVar14 = *(undefined4 *)(param_1 + 0x94);
              uVar13 = *(undefined4 *)(param_1 + 0x90);
              uVar12 = *(undefined4 *)(param_1 + 0x8c);
            }
            FUN_00458c40(param_2,local_428,uVar3,iVar9,iStack_424,uVar12,uVar13,uVar14,acStack_404,
                         uVar15,param_4);
          }
        }
        iStack_424 = iStack_424 + *(int *)(param_1 + 0x90);
        acStack_404[0] = '\0';
        if ((*(int *)(param_1 + 0x48) + -5 + *(int *)(param_1 + 0x40) <= iStack_424) ||
           (pcVar4 = pcStack_418, pcStack_418 == (char *)0x0)) goto LAB_00459632;
      }
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)pcStack_418;
      pcVar4 = auStack_408 + 3;
      do {
        pcVar10 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar10 != '\0');
      pcVar10 = pcStack_418;
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar4 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar4 = pcVar4 + 1;
      }
      puVar11 = (undefined2 *)(auStack_408 + 3);
      do {
        pcVar4 = (char *)((int)puVar11 + 1);
        puVar11 = (undefined2 *)((int)puVar11 + 1);
      } while (*pcVar4 != '\0');
      *puVar11 = DAT_00588334;
      pcStack_418 = strtok((char *)0x0,(char *)&uStack_41c);
      iVar9 = iStack_414;
    } while( true );
  }
  if (param_2 == (int *)0x0) goto LAB_00459658;
  iVar8 = iVar8 * *(int *)(param_1 + 0x7c);
  iVar6 = *(int *)(param_1 + 0x3c);
  uStack_41c = iVar8 / 2;
  iVar9 = (*(int *)(param_1 + 0x44) / 2 - uStack_41c) + iVar6;
  if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x88) & 2) != 0) {
      iVar9 = (iVar6 - iVar8) + *(int *)(param_1 + 0x44);
    }
  }
  else {
    iVar9 = iVar6 + 4;
  }
  this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
         (param_1 + 0x68);
  uVar14 = 0x64000000;
  uVar15 = param_4;
  pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (this);
  FUN_00458c40(param_2,local_428,uVar3,iVar9 + 2,iStack_424 + 2,*(undefined4 *)(param_1 + 0x8c),
               *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),pcVar4,uVar14,uVar15)
  ;
  if (*(char *)(param_1 + 0x87) == '\0') {
    uVar15 = *(undefined4 *)(param_1 + 0x9c);
  }
  else {
    if (*(char *)(param_1 + 0x37) == '\0') {
      uVar15 = *(undefined4 *)(param_1 + 0x9c);
      pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(this);
      FUN_00458c40(param_2,local_428,uVar3,iVar9,iStack_424,*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),pcVar4,uVar15,
                   param_4);
      goto LAB_00459640;
    }
    uVar15 = 0xffff0000;
  }
  pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (this);
  FUN_00458c40(param_2,local_428,uVar3,iVar9,iStack_424,*(undefined4 *)(param_1 + 0x8c),
               *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),pcVar4,uVar15,param_4
              );
LAB_00459640:
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xf4))(param_2,0,0);
  }
LAB_00459658:
  return iStack_424 - iStack_40c;
LAB_00459632:
  free(pcStack_410);
  goto LAB_00459640;
}




/* Function: FUN_00459690 */

void __thiscall FUN_00459690(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x9c) = param_2;
  return;
}




/* Function: FUN_004596a0 */

void __thiscall FUN_004596a0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x98) = param_2;
  return;
}




/* Function: FUN_004596b0 */

void __thiscall FUN_004596b0(int param_1,undefined4 param_2)

{
  (**(code **)(*(int *)(param_1 + 200) + 0x20))(param_2);
  *(undefined1 *)(param_1 + 0x35) = 0;
  return;
}




/* Function: FUN_004596d0 */

void __fastcall FUN_004596d0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 200) + 0x1c))();
  *(undefined1 *)(param_1 + 0x35) = 0;
  return;
}




/* Function: FUN_004596f0 */

void __thiscall FUN_004596f0(int param_1,undefined4 param_2)

{
  (**(code **)(*(int *)(param_1 + 200) + 0x28))(param_2);
  *(undefined1 *)(param_1 + 0x35) = 1;
  return;
}




/* Function: FUN_00459710 */

void __fastcall FUN_00459710(int param_1)

{
  (**(code **)(*(int *)(param_1 + 200) + 0x24))();
  *(undefined1 *)(param_1 + 0x35) = 1;
  return;
}




/* Function: FUN_00459730 */

void __thiscall FUN_00459730(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x68) = param_2;
  return;
}




/* Function: FUN_00459740 */

void __thiscall FUN_00459740(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6a) = param_2;
  return;
}




/* Function: FUN_00459750 */

void __thiscall FUN_00459750(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6c) = param_2;
  return;
}




/* Function: FUN_00459760 */

void __thiscall FUN_00459760(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6d) = param_2;
  return;
}




/* Function: FUN_00459770 */

void __thiscall FUN_00459770(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6b) = param_2;
  return;
}




/* Function: FUN_00459780 */

void __thiscall FUN_00459780(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  return;
}




/* Function: FUN_00459790 */

void __thiscall FUN_00459790(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x69) = param_2;
  *(undefined1 *)(param_1 + 0xfd) = param_2;
  return;
}




/* Function: FUN_004597a0 */

void __thiscall FUN_004597a0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x74) = param_2;
  return;
}




/* Function: FUN_004597b0 */

void __thiscall FUN_004597b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x78) = param_2;
  return;
}




/* Function: FUN_004597c0 */

void __thiscall FUN_004597c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  *(undefined4 *)(param_1 + 0xac) = param_3;
  return;
}




/* Function: FUN_004597e0 */

void __thiscall FUN_004597e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  return;
}




/* Function: FUN_004597f0 */

void __thiscall FUN_004597f0(undefined1 *param_1,char param_2)

{
  *param_1 = 1;
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}




/* Function: FUN_00459810 */

void __thiscall FUN_00459810(undefined1 *param_1,char param_2)

{
  *param_1 = 0;
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 4) = 0x3f800000;
  }
  return;
}




/* Function: FUN_00459830 */

void FUN_00459830(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  *param_1 = *param_2 + *param_3;
  param_1[1] = fVar1 + fVar2;
  return;
}




/* Function: FUN_00459850 */

uint __thiscall FUN_00459850(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (((int)uVar1 <= param_2) && (param_2 < (int)(param_1[2] + uVar1))) {
    uVar1 = param_1[1];
    if (((int)uVar1 <= param_3) && (param_3 < (int)(param_1[3] + uVar1))) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}




/* Function: FUN_00459890 */

void __thiscall FUN_00459890(int *param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    if (*param_1 < *param_2) {
      param_1[2] = param_1[2] + (*param_1 - *param_2);
      *param_1 = *param_2;
    }
    if (param_2[2] + *param_2 < param_1[2] + *param_1) {
      param_1[2] = (param_2[2] - *param_1) + *param_2;
    }
    if (param_1[1] < param_2[1]) {
      param_1[3] = param_1[3] + (param_1[1] - param_2[1]);
      param_1[1] = param_2[1];
    }
    if (param_2[3] + param_2[1] < param_1[3] + param_1[1]) {
      param_1[3] = (param_2[3] - param_1[1]) + param_2[1];
    }
  }
  return;
}




/* Function: FUN_00459900 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00459900(float *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[2];
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  *param_1 = _DAT_00583354 / (float)iVar1;
  param_1[3] = _DAT_00583354 / (float)param_2[3];
  param_1[4] = -((float)*param_2 / (float)param_2[2]);
  param_1[5] = -((float)param_2[1] / (float)param_2[3]);
  return;
}




/* Function: FUN_00459970 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
FUN_00459970(int param_1,int *param_2,float param_3,float param_4,float param_5,undefined4 param_6,
            float *param_7,float param_8,float param_9)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puStack_1c014;
  float fStack_1c010;
  int iStack_1c00c;
  float afStack_1c008 [28673];
  
  if (((*(float **)(param_1 + 0x18) != (float *)0x0) &&
      (iVar2 = *(int *)(param_1 + 0x14), iVar2 != 0)) && (iVar2 < 0x1000)) {
    pfVar1 = *(float **)(param_1 + 0x18);
    pfVar5 = afStack_1c008;
    for (uVar3 = (uint)(iVar2 * 0x1c) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pfVar5 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar5 = pfVar5 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)pfVar5 = *(undefined1 *)pfVar1;
      pfVar1 = (float *)((int)pfVar1 + 1);
      pfVar5 = (float *)((int)pfVar5 + 1);
    }
    if (0 < iVar2) {
      pfVar1 = afStack_1c008;
      iVar4 = iVar2;
      do {
        pfVar1[4] = param_5;
        puStack_1c014 = (undefined4 *)(param_8 * *pfVar1 + param_3);
        *pfVar1 = (float)puStack_1c014;
        fStack_1c010 = param_9 * pfVar1[1] + param_4;
        pfVar1[1] = fStack_1c010;
        if (param_7 == (float *)0x0) {
          pfVar1[5] = 0.0;
          pfVar1[6] = 0.0;
        }
        else {
          pfVar1[5] = (float)puStack_1c014 * *param_7 + fStack_1c010 * param_7[1] + param_7[4];
          pfVar1[6] = (float)puStack_1c014 * param_7[2] + fStack_1c010 * param_7[3] + param_7[5];
        }
        pfVar1 = pfVar1 + 7;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iStack_1c00c = param_1;
    iVar2 = FUN_00458a00(afStack_1c008,iVar2,param_6);
    if (iVar2 != 0) {
      (**(code **)(*param_2 + 0x130))(param_2,0x144);
      (**(code **)(*param_2 + 0x120))(param_2,*puStack_1c014,iVar2 + -2,&fStack_1c010,0x1c);
    }
  }
  return;
}




/* Function: FUN_00459a80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459a80(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 undefined4 param_7,float *param_8)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 local_380 [12];
  undefined4 local_374 [221];
  
  fVar3 = (float10)param_5 * (float10)_DAT_00587d90;
  puVar1 = local_374;
  iVar2 = 3;
  do {
    fVar4 = (float10)fsin(fVar3);
    puVar1[1] = param_6;
    *puVar1 = 0x3f800000;
    puVar1[-1] = 0x3f800000;
    fVar4 = fVar4 * (float10)param_4 + (float10)param_2;
    puVar1[-3] = (float)fVar4;
    fVar5 = (float10)fcos(fVar3);
    fVar5 = (float10)param_3 - fVar5 * (float10)param_4;
    puVar1[-2] = (float)fVar5;
    if (param_8 == (float *)0x0) {
      puVar1[2] = 0;
      puVar1[3] = 0;
    }
    else {
      puVar1[2] = (float)(fVar4 * (float10)*param_8 + fVar5 * (float10)param_8[1] +
                         (float10)param_8[4]);
      puVar1[3] = (float)(fVar4 * (float10)param_8[2] + fVar5 * (float10)param_8[3] +
                         (float10)param_8[5]);
    }
    puVar1 = puVar1 + 7;
    iVar2 = iVar2 + -1;
    fVar3 = fVar3 + (float10)_DAT_0058a2f0;
  } while (iVar2 != 0);
  iVar2 = FUN_00458a00(local_380,3,param_7);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x130))(param_1,0x144);
    (**(code **)(*param_1 + 0x120))(param_1,6,iVar2 + -2,&stack0xfffffc78,0x1c);
  }
  return;
}




/* Function: FUN_00459b80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459b80(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 undefined4 param_7,float *param_8,float param_9)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float local_390;
  float local_38c;
  float local_388;
  float local_384;
  float local_380;
  float local_37c;
  undefined4 local_378;
  undefined4 local_374;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  undefined4 local_35c;
  undefined4 local_358;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  undefined4 local_340;
  undefined4 local_33c;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  undefined4 local_324;
  undefined4 local_320;
  float local_318;
  float local_314;
  
  if ((0 < param_4) && (0 < param_5)) {
    local_380 = (float)param_2;
    local_37c = (float)param_3;
    local_390 = (float)(param_3 + param_5);
    local_364 = (float)(param_2 + param_4);
    local_378 = 0;
    local_374 = 0x3f800000;
    local_35c = 0;
    local_358 = 0x3f800000;
    local_340 = 0;
    local_33c = 0x3f800000;
    local_344 = (float)(int)local_390;
    local_324 = 0;
    local_320 = 0x3f800000;
    fVar4 = (float10)param_9;
    if ((float10)_DAT_00582ae8 < ABS(fVar4)) {
      fVar5 = (float10)fsin(fVar4);
      local_38c = (float)fVar5;
      fVar5 = (float10)fcos(fVar4);
      local_388 = (float)fVar5;
      local_384 = (float)((param_4 >> 1) + param_2);
      local_390 = (float)((param_5 >> 1) + param_3);
    }
    puVar2 = &local_378;
    iVar3 = 4;
    local_360 = local_37c;
    local_348 = local_364;
    local_32c = local_380;
    local_328 = local_344;
    do {
      puVar2[2] = param_6;
      *puVar2 = 0x3f800000;
      puVar2[1] = 0x3f800000;
      puVar2 = puVar2 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (param_8 == (float *)0x0) {
      local_36c = 0.0;
      local_368 = 0.0;
      local_350 = 1.0;
      local_34c = 0.0;
      local_334 = 1.0;
      local_330 = 1.0;
      local_318 = 0.0;
      local_314 = 1.0;
    }
    else {
      local_36c = local_380 * *param_8 + local_37c * param_8[1] + param_8[4];
      local_368 = local_380 * param_8[2] + local_37c * param_8[3] + param_8[5];
      local_350 = local_364 * *param_8 + local_360 * param_8[1] + param_8[4];
      local_34c = local_364 * param_8[2] + local_360 * param_8[3] + param_8[5];
      local_334 = local_348 * *param_8 + local_344 * param_8[1] + param_8[4];
      local_330 = local_348 * param_8[2] + local_344 * param_8[3] + param_8[5];
      local_318 = local_32c * *param_8 + local_328 * param_8[1] + param_8[4];
      local_314 = local_32c * param_8[2] + local_328 * param_8[3] + param_8[5];
    }
    if ((float10)_DAT_00582ae8 < ABS(fVar4)) {
      fVar1 = local_380 - local_384;
      local_380 = (local_37c - local_390) * local_38c + fVar1 * local_388 + local_384;
      local_37c = ((local_37c - local_390) * local_388 - fVar1 * local_38c) + local_390;
      fVar1 = local_364 - local_384;
      local_364 = (local_360 - local_390) * local_38c + fVar1 * local_388 + local_384;
      local_360 = ((local_360 - local_390) * local_388 - fVar1 * local_38c) + local_390;
      fVar1 = local_348 - local_384;
      local_348 = (local_344 - local_390) * local_38c + fVar1 * local_388 + local_384;
      local_344 = ((local_344 - local_390) * local_388 - fVar1 * local_38c) + local_390;
      fVar1 = local_32c - local_384;
      local_32c = (local_328 - local_390) * local_38c + fVar1 * local_388 + local_384;
      local_328 = ((local_328 - local_390) * local_388 - fVar1 * local_38c) + local_390;
    }
    iVar3 = FUN_00458a00(&local_380,4,param_7);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x130))(param_1,0x144);
      (**(code **)(*param_1 + 0x120))(param_1,6,iVar3 + -2,&local_388,0x1c);
    }
  }
  return;
}




/* Function: FUN_00459f10 */

void FUN_00459f10(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  if ((0 < param_4) && (0 < param_5)) {
    if (param_6 != 0) {
      FUN_00459b80(param_1,param_2,param_3,param_4,param_5,param_6,param_9,param_10,0);
    }
    if (param_7 != 0) {
      FUN_00459b80(param_1,param_2,param_3,param_4,1,param_7,param_9,param_10,0);
    }
    if (param_8 != 0) {
      FUN_00459b80(param_1,param_2,param_3 + -1 + param_5,param_4,1,param_8,param_9,param_10,0);
      FUN_00459b80(param_1,param_2,param_3,1,param_5,param_8,param_9,param_10,0);
    }
    if (param_7 != 0) {
      FUN_00459b80(param_1,param_4 + -1 + param_2,param_3,1,param_5,param_7,param_9,param_10,0);
    }
  }
  return;
}




/* Function: FUN_0045a0a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0045a0a0(int param_1,int *param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float fStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 auStack_104 [6];
  undefined4 auStack_ec [2];
  undefined1 auStack_e4 [84];
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [72];
  undefined4 uStack_8;
  
  if ((*(char *)(param_1 + 0x35) != '\0') && (*(int **)(param_1 + 0x70) != (int *)0x0)) {
    fVar7 = (float10)fsin((float10)*(float *)(param_1 + 0x68));
    local_138 = 0.0;
    local_134 = 0.0;
    local_130 = 0.0;
    local_12c = (float)(fVar7 * (float10)*(float *)(param_1 + 0x6c));
    local_128 = *(float *)(param_1 + 0x6c) * _DAT_0058a2f4;
    fVar7 = (float10)fcos((float10)*(float *)(param_1 + 0x68));
    local_124 = (float)(fVar7 * (float10)*(float *)(param_1 + 0x6c));
    (**(code **)(**(int **)(param_1 + 0x70) + 0x88))();
    pfVar2 = (float *)FUN_00547ab0();
    if (pfVar2 != &local_138) {
      local_138 = *pfVar2;
      local_134 = pfVar2[1];
      local_130 = pfVar2[2];
    }
    local_12c = local_138 + local_12c;
    local_128 = local_134 + local_128;
    local_124 = local_130 + local_124;
    (**(code **)(*param_2 + 0xa4))(param_2,auStack_e4);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    puVar5 = auStack_ec;
    puVar6 = auStack_104;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStack_104[2] = *(undefined4 *)(param_1 + 0x44);
    auStack_104[3] = *(undefined4 *)(param_1 + 0x48);
    auStack_104[0] = uVar3;
    auStack_104[1] = uVar1;
    (**(code **)(*param_2 + 0xa0))(param_2,auStack_104);
    fStack_120 = local_138;
    fStack_11c = local_134;
    uStack_118 = 0;
    uStack_114 = 0x3f800000;
    uStack_110 = 0;
    FUN_00496e69(auStack_50,&local_124,&local_130,&uStack_118);
    uVar3 = FUN_0041e470(1);
    FUN_00407260(uVar3);
    FUN_0041d620(auStack_50);
    FUN_0041e330(1,auStack_90);
    FUN_00407300();
    (**(code **)(*param_2 + 0x90))(param_2,0,0,2,0,0x3f800000,0);
    (**(code **)(*param_2 + 200))(param_2,7,1);
    (**(code **)(*param_2 + 200))(param_2,0xe,1);
    (**(code **)(**(int **)(param_1 + 0x70) + 0x24))(param_2,uStack_8);
    (**(code **)(*param_2 + 200))(param_2,7,0);
    (**(code **)(*param_2 + 200))(param_2,0xe,0);
    (**(code **)(*param_2 + 0xa0))(param_2,&stack0xfffffeb8);
    FUN_0041e330(1,&local_12c);
    FUN_00458b30(param_2);
    FUN_00407300();
    return 1;
  }
  return 0;
}




/* Function: FUN_0045a300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045a300(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined1 local_c [12];
  
  if (param_2 != 0) {
    FUN_004ffac0();
    uVar2 = FUN_0043f940();
    FUN_004ffac0(uVar2);
    uVar2 = FUN_0043f930();
    pfVar3 = (float *)FUN_0041d580(local_c,uVar2);
    fVar1 = SQRT(pfVar3[2] * pfVar3[2] + pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3) + _DAT_00587fa8;
    *(float *)(param_1 + 0x7c) = fVar1;
    *(float *)(param_1 + 0x6c) = fVar1;
  }
  *(int *)(param_1 + 0x70) = param_2;
  return;
}




/* Function: FUN_0045a7f0 */

void __thiscall FUN_0045a7f0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  undefined4 uVar5;
  
  (**(code **)(*param_2 + 0xf4))(param_2,0,0);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    iVar1 = *(int *)(param_1 + 0x48);
    if (*(char *)(param_1 + 0x68) == '\0') {
      FUN_00459f10(param_2,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x44),iVar1,
                   ((-(uint)(*(char *)(param_1 + 0x37) != '\0') & 0x48) + 0x80) * 0x1000000 |
                   0x808080,0x80c8c8c8,0x80000000,unaff_retaddr,0);
      return;
    }
    iVar2 = *(int *)(param_1 + 0x44);
    iVar3 = *(int *)(param_1 + 0x40);
    iVar4 = *(int *)(param_1 + 0x3c);
    if ((0 < iVar2) && (0 < iVar1)) {
      FUN_00459b80(param_2,iVar4,iVar3,iVar2,iVar1,0xa0646464,unaff_retaddr,0,0);
      FUN_00459b80(param_2,iVar4,iVar3,iVar2,1,0x80000000,unaff_retaddr,0,0);
      FUN_00459b80(param_2,iVar4,iVar3 + -1 + iVar1,iVar2,1,0x80c8c8c8,unaff_retaddr,0,0);
      FUN_00459b80(param_2,iVar4,iVar3,1,iVar1,0x80c8c8c8,unaff_retaddr,0,0);
      FUN_00459b80(param_2,iVar4 + -1 + iVar2,iVar3,1,iVar1,0x80000000,unaff_retaddr,0,0);
      return;
    }
  }
  else {
    if ((*(char *)(param_1 + 0x37) == '\0') && (*(char *)(param_1 + 0x68) == '\0')) {
      uVar5 = 0xffffb000;
    }
    else if ((*(char *)(param_1 + 0xb4) == '\0') || (*(char *)(param_1 + 0x68) == '\0')) {
      uVar5 = 0xffff0000;
    }
    else {
      uVar5 = 0xff32ff74;
    }
    FUN_00459970(param_2,(float)*(int *)(param_1 + 0x3c),(float)*(int *)(param_1 + 0x40),uVar5,
                 unaff_retaddr,0,0x3f800000,0x3f800000);
  }
  return;
}




/* Function: FUN_0045b400 */

void __thiscall FUN_0045b400(int param_1,undefined1 param_2)

{
  *(undefined2 *)(param_1 + 0x70) = 0xffff;
  *(undefined1 *)(param_1 + 0x6e) = param_2;
  return;
}




/* Function: FUN_0045b410 */

void FUN_0045b410(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057c612;
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




/* Function: FUN_0045b490 */

void FUN_0045b490(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}




/* Function: FUN_0045b4c0 */

int FUN_0045b4c0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_0044ad00(param_1);
    param_1 = param_1 + 0x58;
    param_3 = param_3 + 0x58;
  } while (param_1 != param_2);
  return param_3;
}




/* Function: FUN_0045b500 */

void __fastcall FUN_0045b500(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1[2] != 0) && ((int)(param_1[3] - param_1[2]) >> 3 != 0)) {
    if ((void *)param_1[6] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_1[6]);
    }
    if (param_1[2] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(param_1[3] - param_1[2]) >> 3;
    }
    iVar1 = thunk_FUN_00493c27(iVar1 * 0x1c);
    param_1[6] = iVar1;
    if (param_1[2] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(param_1[3] - param_1[2]) >> 3;
    }
    param_1[5] = iVar3;
    puVar2 = (undefined4 *)(iVar1 + 8);
    for (uVar4 = 0; (param_1[2] != 0 && (uVar4 < (uint)((int)(param_1[3] - param_1[2]) >> 3)));
        uVar4 = uVar4 + 1) {
      puVar2[1] = 0x3f800000;
      *puVar2 = 0x3f800000;
      puVar2[-2] = *(undefined4 *)(param_1[2] + uVar4 * 8);
      puVar2[-1] = *(undefined4 *)(param_1[2] + 4 + uVar4 * 8);
      puVar2 = puVar2 + 7;
    }
    *param_1 = 6;
  }
  return;
}




/* Function: FUN_0045b5c0 */

undefined4 __thiscall FUN_0045b5c0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xa8);
  if (puVar1 != *(undefined4 **)(param_1 + 0xac)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x5c))(param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(param_1 + 0xac));
  }
  return 1;
}




/* Function: FUN_0045b600 */

int __thiscall FUN_0045b600(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0xa8);
  if (puVar2 != *(undefined4 **)(param_1 + 0xac)) {
    do {
      iVar1 = (**(code **)(*(int *)*puVar2 + 0xc))(param_2);
      if (iVar1 != 0) {
        return iVar1;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(param_1 + 0xac));
  }
  return 0;
}




/* Function: FUN_0045b650 */

void __thiscall FUN_0045b650(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x134);
  if (puVar1 != *(undefined4 **)(param_1 + 0x138)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x5c))(param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(param_1 + 0x138));
  }
  return;
}




/* Function: FUN_0045b690 */

uint __thiscall FUN_0045b690(uint param_1,char *param_2)

{
  uint uVar1;
  char *_Str1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x134);
  if (puVar3 != *(undefined4 **)(param_1 + 0x138)) {
    do {
      uVar1 = (**(code **)(*(int *)*puVar3 + 0xc))(param_2);
      if (uVar1 != 0) {
        return uVar1;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != *(undefined4 **)(param_1 + 0x138));
  }
  _Str1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                    ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(param_1 + 0x4c));
  iVar2 = _stricmp(_Str1,param_2);
  return ~-(uint)(iVar2 != 0) & param_1;
}




/* Function: FUN_0045b6f0 */

void __thiscall FUN_0045b6f0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  (**(code **)(*(int *)(param_1 + 200) + 0x30))(param_2,param_3);
  puVar1 = *(undefined4 **)(param_1 + 0x134);
  if (puVar1 != *(undefined4 **)(param_1 + 0x138)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x30))(param_2,param_3);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(param_1 + 0x138));
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + param_2;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + param_3;
  return;
}




/* Function: FUN_0045b960 */

int __thiscall FUN_0045b960(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((((param_2 < *(int *)(param_1 + 0x3c)) ||
       (*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x3c) <= param_2)) ||
      (param_3 < *(int *)(param_1 + 0x40))) ||
     ((*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x40) <= param_3 ||
      (*(char *)(param_1 + 0x35) == '\0')))) {
    iVar2 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x68) != '\0') &&
       (cVar1 = FUN_00459850(param_2,param_3), cVar1 != '\0')) {
      return param_1;
    }
    if (((*(char *)(param_1 + 0x69) == '\0') || (*(char *)(param_1 + 0xfd) == '\0')) ||
       (iVar2 = (**(code **)(*(int *)(param_1 + 200) + 0x50))(param_2,param_3), iVar2 == 0)) {
      if (*(int *)(param_1 + 0x134) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x134) >> 2;
      }
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) {
          return -1;
        }
        iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x134) + iVar3 * 4) + 100))
                          (param_2,param_3);
      } while (iVar2 == 0);
    }
  }
  return iVar2;
}




/* Function: FUN_0045ba60 */

void __fastcall FUN_0045ba60(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0x6e) != '\0') {
    local_1c = *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x80);
    iVar4 = *(int *)(param_1 + 0x48);
    iVar6 = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x88);
    local_c = (*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x8c)) - *(int *)(param_1 + 0x88);
    iVar7 = (iVar4 - *(int *)(param_1 + 0x84)) - *(int *)(param_1 + 0x80);
    local_14 = 0;
    if ((0 < local_c) && (0 < iVar7)) {
      if (*(char *)(param_1 + 0x68) != '\0') {
        local_1c = local_1c + 0x12;
        iVar7 = iVar7 + -0x12;
      }
      if ((*(char *)(param_1 + 0x69) != '\0') && (*(char *)(param_1 + 0x6a) != '\0')) {
        local_c = local_c + -0xe;
      }
      local_18 = 0;
      if ((((*(char *)(param_1 + 0x69) != '\0') && (*(char *)(param_1 + 0x6a) != '\0')) &&
          (uVar5 = -(uint)(*(char *)(param_1 + 0x68) != '\0') & 0x12,
          (int)(*(int *)(param_1 + 0x40) + 0xe + uVar5) < *(int *)(param_1 + 0x40) + -0x1c + iVar4))
         && ((0 < (int)((*(int *)(param_1 + 0xa8) - iVar4) + uVar5) &&
             (local_18 = FUN_004cf110(), 0 < local_18)))) {
        local_18 = 0;
      }
      iVar7 = iVar7 - *(int *)(param_1 + 0xa8);
      if (0 < iVar7) {
        iVar7 = 0;
      }
      if (local_18 < iVar7) {
        local_18 = iVar7;
      }
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x78);
      cVar1 = *(char *)(param_1 + 0x70);
      local_1c = local_1c + local_18;
      piVar3 = *(int **)(param_1 + 0x134);
      local_10 = iVar6;
      if (piVar3 != *(int **)(param_1 + 0x138)) {
        do {
          piVar2 = (int *)*piVar3;
          if (*(char *)((int)piVar2 + 0x35) != '\0') {
            iVar4 = *(int *)(param_1 + 0x3c) + iVar6;
            if (cVar1 == '\x01') {
              iVar4 = *(int *)(param_1 + 0x88) + *(int *)(param_1 + 0x74);
            }
            else {
              if (cVar1 == '\x04') {
                iVar4 = *(int *)(param_1 + 0x44) / 2 - piVar2[0x11] / 2;
                iVar6 = local_10;
              }
              else {
                if (cVar1 != '\x02') goto LAB_0045bc17;
                iVar4 = (*(int *)(param_1 + 0x44) - piVar2[0x11]) - *(int *)(param_1 + 0x74);
              }
              iVar4 = iVar4 + *(int *)(param_1 + 0x3c);
            }
LAB_0045bc17:
            (**(code **)(*piVar2 + 0x34))(iVar4,*(int *)(param_1 + 0x40) + local_1c);
            iVar4 = *(int *)(*piVar3 + 0x48);
            iVar6 = iVar6 + *(int *)(*piVar3 + 0x44) + *(int *)(param_1 + 0x74);
            if (local_14 < iVar4) {
              local_14 = iVar4;
            }
            if ((local_c <= iVar6) || (local_10 = iVar6, cVar1 != -1)) {
              iVar4 = *(int *)(param_1 + 0x78);
              local_1c = local_1c + iVar4 + local_14;
              iVar6 = *(int *)(param_1 + 0x88) + *(int *)(param_1 + 0x74);
              *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + local_14 + iVar4;
              local_14 = iVar4;
              local_10 = iVar6;
            }
          }
          piVar3 = piVar3 + 1;
        } while (piVar3 != *(int **)(param_1 + 0x138));
      }
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0x78) + local_14;
    }
  }
  return;
}




/* Function: FUN_0045bcc0 */

undefined4 __thiscall FUN_0045bcc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x134);
  if (puVar2 != *(undefined4 **)(param_1 + 0x138)) {
    do {
      cVar1 = (**(code **)(*(int *)*puVar2 + 0x10))(param_2,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(param_1 + 0x138));
  }
  return 0;
}




/* Function: FUN_0045bd10 */

undefined4 __thiscall FUN_0045bd10(int param_1,uint param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0x3fffffff < param_2) {
    FUN_0045b410();
    return 1;
  }
  iVar1 = FUN_00493c27(param_2 * 4);
  *(uint *)(param_1 + 0xc) = param_2 * 4 + iVar1;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  return 1;
}




/* Function: FUN_0045bd70 */

undefined4 __thiscall FUN_0045bd70(int param_1,uint param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0x1fffffff < param_2) {
    FUN_0045b410();
    return 1;
  }
  iVar1 = FUN_00493c27(param_2 * 8);
  *(uint *)(param_1 + 0xc) = param_2 * 8 + iVar1;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  return 1;
}




/* Function: FUN_0045bdd0 */

void FUN_0045bdd0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  for (; param_2 != param_3; param_3 = param_3 + -8) {
    param_4[-2] = *(undefined4 *)(param_3 + -8);
    param_4[-1] = *(undefined4 *)(param_3 + -4);
    param_4 = param_4 + -2;
  }
  *param_1 = param_4;
  return;
}




/* Function: FUN_0045be00 */

undefined4 __thiscall
FUN_0045be00(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  
  if (*(char *)((int)param_1 + 0x35) == '\0') {
    return 0;
  }
  (**(code **)(*param_1 + 0x78))(param_2,param_3,param_4);
  FUN_00459890(param_4);
  FUN_0045ba60();
  piVar2 = (int *)param_1[0x4d];
  if (piVar2 != (int *)param_1[0x4e]) {
    do {
      piVar1 = (int *)*piVar2;
      if (*(char *)((int)piVar1 + 0x35) != '\0') {
        if ((char)piVar1[0xe] == '\0') {
          puVar3 = &stack0xffffffe4;
        }
        else {
          puVar3 = (undefined1 *)0x0;
        }
        (**(code **)(*piVar1 + 0x2c))(param_2,param_3,puVar3);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)param_1[0x4e]);
  }
  return 1;
}




/* Function: FUN_0045bec0 */

int __thiscall
FUN_0045bec0(undefined4 *param_1,undefined4 **param_2,undefined1 *param_3,undefined4 **param_4)

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
  puStack_c = &LAB_0057c620;
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
      iVar4 = FUN_0045b410();
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
      local_34 = (undefined4 *)0x45bfdc;
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
        local_34 = (undefined4 *)&UNK_0045c070;
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




/* Function: FUN_0045c1c0 */

void __thiscall FUN_0045c1c0(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057c630;
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
      FUN_0045b410();
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




/* Function: FUN_0045c470 */

void __thiscall FUN_0045c470(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057c640;
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
      FUN_0045b410();
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




/* Function: FUN_0045c710 */

void __thiscall FUN_0045c710(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0xc != 0) {
      iVar1 = (param_3 - iVar1) / 0xc;
      goto LAB_0045c755;
    }
  }
  iVar1 = 0;
LAB_0045c755:
  FUN_0045bec0(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0xc;
  return;
}




/* Function: FUN_0045c780 */

void __fastcall FUN_0045c780(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057c666;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0058a2f8;
  local_4 = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x13));
  if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[8]);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if ((void *)param_1[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[4]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  ExceptionList = local_c;
  return;
}




/* Function: FUN_0045c840 */

void __fastcall FUN_0045c840(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0058a370;
  FUN_0045c780();
  return;
}




/* Function: FUN_0045c850 */

void __fastcall FUN_0045c850(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057c686;
  local_c = ExceptionList;
  local_4 = 1;
  if (*(void **)(param_1 + 0x134) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x134));
  }
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  FUN_0045c780();
  if (*(void **)(param_1 + 0xb4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0xb4));
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  local_4 = 0xffffffff;
  FUN_0045c780();
  ExceptionList = local_c;
  return;
}




/* Function: FUN_0045c8f0 */

void __fastcall FUN_0045c8f0(int param_1)

{
  if (*(void **)(param_1 + 0x134) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x134));
  }
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  return;
}




/* Function: FUN_0045c940 */

void __thiscall FUN_0045c940(int param_1,uint param_2)

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
    FUN_0045c470(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 2))) {
    FUN_004366e0(&param_2,*(int *)(param_1 + 4) + param_2 * 4,*(int *)(param_1 + 8));
  }
  return;
}




/* Function: FUN_0045c9c0 */

void __thiscall FUN_0045c9c0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != param_4) {
    iVar2 = FUN_0045b4c0(param_4);
    iVar1 = *(int *)(param_1 + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x58) {
      FUN_0044ae30();
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  *param_2 = param_3;
  return;
}




/* Function: FUN_0045ca20 */

undefined4 * __fastcall FUN_0045ca20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057c666;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0058a2f8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_4 = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x13));
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x36) = 1;
  *(undefined1 *)((int)param_1 + 0x39) = 1;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0045cab0 */

void * __thiscall FUN_0045cab0(void *param_1,byte param_2)

{
  FUN_0045c780();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0045cad0 */

void __thiscall FUN_0045cad0(int param_1,undefined4 param_2)

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
  FUN_0045c710(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}




/* Function: FUN_0045cb60 */

void __thiscall FUN_0045cb60(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = param_1[8];
  if (iVar1 != param_1[9]) {
    do {
      FUN_0045cad0(iVar1);
      iVar1 = iVar1 + 0xc;
    } while (iVar1 != param_1[9]);
  }
  if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[8]);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar1 = param_1[4];
  if (iVar1 != param_1[5]) {
    do {
      (**(code **)(*param_1 + 0x10))(param_2,iVar1);
      iVar1 = iVar1 + 0xc;
    } while (iVar1 != param_1[5]);
  }
  if ((void *)param_1[4] == (void *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_1[4]);
}




/* Function: FUN_0045cbf0 */

undefined4 * __thiscall
FUN_0045cbf0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057c698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0045ca20();
  local_4 = 0;
  *param_1 = &PTR_LAB_0058a460;
  (*(code *)PTR_FUN_0058a490)(param_2 - param_1[0xf],param_3 - param_1[0x10]);
  param_1[0x11] = param_2;
  param_1[0x1c] = param_4;
  param_1[0x12] = param_3;
  param_1[0x1b] = param_5;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  ExceptionList = unaff_ESI;
  return param_1;
}




/* Function: FUN_0045cc80 */

void __thiscall FUN_0045cc80(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  if ((*(char *)(param_1 + 0x35) != '\0') && (*(int *)(param_1 + 0x70) != 0)) {
    if (*(char *)(param_1 + 0x74) != '\0') {
      fVar1 = (float10)FUN_0041ce10();
      *(float *)(param_1 + 0x68) = (float)(fVar1 + (float10)*(float *)(param_1 + 0x68));
    }
    FUN_0045cb60(param_2);
  }
  return;
}




/* Function: FUN_0045ccc0 */

undefined4 * __thiscall
FUN_0045ccc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_0045cbf0(param_2,param_3,param_4,param_5,param_6,param_7);
  *param_1 = &PTR_LAB_0058a370;
  param_1[0x1e] = 0x6400ffa6;
  return param_1;
}




/* Function: FUN_0045cd00 */

void * __thiscall FUN_0045cd00(void *param_1,byte param_2)

{
  FUN_0045c840();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0045cd20 */

void * __thiscall FUN_0045cd20(void *param_1,byte param_2)

{
  thunk_FUN_0045c780();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0045cd50 */

undefined4 * __thiscall FUN_0045cd50(undefined4 *param_1,int param_2,int param_3)

{
  void *unaff_EBX;
  undefined4 in_stack_00000028;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057c6c1;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0045ca20();
  param_1[0x1e] = 0x3f800000;
  param_1[0x1f] = 0x3f800000;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_LAB_0058a4d8;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0xffffffff;
  (*(code *)PTR_FUN_0058a508)(param_2 - param_1[0xf],param_3 - param_1[0x10]);
  param_1[0x11] = param_2;
  param_1[0x12] = param_3;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x13),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x0000000c);
  param_1[0x1a] = in_stack_00000028;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  local_c = (void *)0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x0000000c);
  ExceptionList = unaff_EBX;
  return param_1;
}




/* Function: FUN_0045ce10 */

void * __thiscall FUN_0045ce10(void *param_1,byte param_2)

{
  FUN_0045ce30();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0045ce30 */

void __fastcall FUN_0045ce30(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057c698;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x68));
  local_4 = 0xffffffff;
  FUN_0045c780();
  ExceptionList = local_c;
  return;
}




/* Function: FUN_0045ce80 */

int * __thiscall FUN_0045ce80(int *param_1,int param_2,int param_3)

{
  void *unaff_EBX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057c6f6;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_0045ca20();
  local_4._0_1_ = 2;
  *param_1 = (int)&PTR_LAB_0058a550;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x1a));
  local_4 = CONCAT31(local_4._1_3_,3);
  (**(code **)(*param_1 + 0x30))(param_2 - param_1[0xf],param_3 - param_1[0x10]);
  param_1[0x12] = param_3;
  param_1[0x11] = param_2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x13),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000028);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x1a),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000028);
  *(undefined1 *)((int)param_1 + 0x87) = 0;
  local_c = (void *)((uint)local_c & 0xffffff00);
  *(undefined1 *)((int)param_1 + 0x85) = 1;
  *(undefined1 *)(param_1 + 0x21) = 1;
  *(undefined1 *)((int)param_1 + 0x86) = 1;
  param_1[0x22] = 0x24;
  param_1[0x27] = -0x373738;
  param_1[0x26] = -0x1000000;
  param_1[0x23] = 8;
  param_1[0x24] = 0xc;
  param_1[0x25] = 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x0000000c);
  local_c = (void *)0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000028);
  ExceptionList = unaff_EBX;
  return param_1;
}




/* Function: FUN_0045cfa0 */

void * __thiscall FUN_0045cfa0(void *param_1,byte param_2)

{
  FUN_0045cfc0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0045cfc0 */

void __fastcall FUN_0045cfc0(int param_1)

{
  if (*(void **)(param_1 + 0x94) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x94));
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (*(void **)(param_1 + 0x78) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  FUN_0045c780();
  return;
}




/* Function: FUN_0045d010 */

void __thiscall FUN_0045d010(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x134);
  if (piVar1 != *(int **)(param_1 + 0x138)) {
    do {
      if (*(char *)(*piVar1 + 0x35) != '\0') {
        (**(code **)(*(int *)*piVar1 + 0x14))(param_2);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x138));
  }
  FUN_0045cb60(param_2);
  return;
}




/* Function: FUN_0045d060 */

void __thiscall FUN_0045d060(int param_1,undefined4 param_2)

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
  FUN_0045c470(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_0045d0d0 */

void __thiscall FUN_0045d0d0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0057c700;
  local_10 = ExceptionList;
  if (param_2 < 0x20000000) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 3;
    }
    if (uVar1 < param_2) {
      ExceptionList = &local_10;
      iVar2 = FUN_00493c27(param_2 * 8);
      local_8 = 0;
      FUN_0041e110(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar2,param_1,param_2);
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 != 0) {
        for (; iVar3 != *(int *)(param_1 + 8); iVar3 = iVar3 + 8) {
        }
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)(param_1 + 4));
      }
      *(int *)(param_1 + 4) = iVar2;
      *(uint *)(param_1 + 0xc) = iVar2 + param_2 * 8;
      *(int *)(param_1 + 8) = iVar2;
      ExceptionList = local_10;
      return;
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_0045b410();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_0045d1d0 */

void __thiscall FUN_0045d1d0(int param_1,undefined4 **param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057c718;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  local_4 = 0;
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = (undefined1 *)((*(int *)(param_1 + 8) - iVar1) / 0x58);
  }
  if (puVar2 < param_2) {
    if (iVar1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = (*(int *)(param_1 + 8) - iVar1) / 0x58;
    }
    local_1c = &stack0x00000008;
    local_20 = (int)param_2 - local_20;
    local_24 = *(undefined4 **)(param_1 + 8);
    param_2 = &local_24;
    ExceptionList = &local_c;
    FUN_004534c0();
  }
  else {
    ExceptionList = &local_c;
    if (iVar1 != 0) {
      local_1c = *(undefined1 **)(param_1 + 8);
      ExceptionList = &local_c;
      if (param_2 < (undefined1 *)(((int)local_1c - iVar1) / 0x58)) {
        local_20 = (int)param_2 * 0x58;
        param_2 = (undefined4 **)&local_20;
        local_20 = local_20 + *(int *)(param_1 + 4);
        local_24 = &param_2;
        ExceptionList = &local_c;
        FUN_0045c9c0();
      }
    }
  }
  local_4 = 0xffffffff;
  local_1c = (undefined1 *)0x45d2a8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x0000003c);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_0045d2c0 */

void __thiscall FUN_0045d2c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  local_4 = param_4;
  local_c = param_2;
  local_8 = param_3;
  FUN_0045cad0(&local_c);
  return;
}




/* Function: FUN_0045d310 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045d310(int param_1,float param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  float local_1c;
  int local_18;
  float local_10;
  float local_c;
  
  local_1c = (float)param_4 * _DAT_00587d90;
  fVar2 = ((float)param_5 * _DAT_00587d90 - local_1c) / (float)param_3;
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (-1 < param_3) {
      local_18 = param_3 + 1;
      do {
        iVar1 = *(int *)(param_1 + 8);
        fVar3 = (float10)fsin((float10)local_1c);
        local_10 = (float)(fVar3 * (float10)param_2);
        fVar3 = (float10)fcos((float10)local_1c);
        local_c = (float)-(fVar3 * (float10)param_2);
        if ((iVar1 == 0) ||
           ((uint)(*(int *)(param_1 + 0x10) - iVar1 >> 3) <=
            (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 3))) {
          FUN_0045c1c0(*(undefined4 *)(param_1 + 0xc),1,&local_10);
        }
        else {
          iVar1 = *(int *)(param_1 + 0xc);
          FUN_0041fe60(iVar1,1,&local_10,param_1 + 4,fVar2);
          *(int *)(param_1 + 0xc) = iVar1 + 8;
        }
        local_1c = fVar2 + local_1c;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 8));
}




/* Function: FUN_0045d410 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045d410(int param_1,float param_2,float param_3,float param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_1c;
  int local_18;
  float local_10;
  float local_c;
  
  fVar2 = _DAT_00588d6c / (float)param_5;
  local_1c = 0.0;
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (-1 < param_5) {
      local_18 = param_5 + 1;
      do {
        iVar4 = *(int *)(param_1 + 8);
        fVar6 = (float10)fsin((float10)local_1c);
        local_10 = (float)(fVar6 * (float10)param_4);
        fVar6 = (float10)fcos((float10)local_1c);
        local_c = (float)-(fVar6 * (float10)param_4);
        if ((iVar4 == 0) ||
           ((uint)(*(int *)(param_1 + 0x10) - iVar4 >> 3) <=
            (uint)(*(int *)(param_1 + 0xc) - iVar4 >> 3))) {
          FUN_0045c1c0(*(undefined4 *)(param_1 + 0xc),1,&local_10);
        }
        else {
          iVar4 = *(int *)(param_1 + 0xc);
          FUN_0041fe60(iVar4,1,&local_10,param_1 + 4,fVar2);
          *(int *)(param_1 + 0xc) = iVar4 + 8;
        }
        local_1c = fVar2 + local_1c;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    iVar5 = (int)(param_5 + (param_5 >> 0x1f & 3U)) >> 2;
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        *(float *)(*(int *)(param_1 + 8) + iVar4 * 8) =
             (param_2 - param_4) + *(float *)(*(int *)(param_1 + 8) + iVar4 * 8);
        pfVar1 = (float *)(*(int *)(param_1 + 8) + 4 + iVar4 * 8);
        iVar4 = iVar4 + 1;
        *pfVar1 = param_4 + *pfVar1;
      } while (iVar4 < iVar5);
    }
    iVar3 = param_5 / 2;
    if (iVar4 < iVar3) {
      do {
        *(float *)(*(int *)(param_1 + 8) + iVar4 * 8) =
             (param_2 - param_4) + *(float *)(*(int *)(param_1 + 8) + iVar4 * 8);
        pfVar1 = (float *)(*(int *)(param_1 + 8) + 4 + iVar4 * 8);
        iVar4 = iVar4 + 1;
        *pfVar1 = (param_3 - param_4) + *pfVar1;
      } while (iVar4 < iVar3);
    }
    if (iVar4 < iVar3 + iVar5) {
      do {
        *(float *)(*(int *)(param_1 + 8) + 4 + iVar4 * 8) =
             (param_3 - param_4) + *(float *)(*(int *)(param_1 + 8) + 4 + iVar4 * 8);
        pfVar1 = (float *)(*(int *)(param_1 + 8) + iVar4 * 8);
        iVar4 = iVar4 + 1;
        *pfVar1 = param_4 + *pfVar1;
      } while (iVar4 < iVar3 + iVar5);
    }
    for (; iVar4 <= param_5; iVar4 = iVar4 + 1) {
      *(float *)(*(int *)(param_1 + 8) + iVar4 * 8) =
           param_4 + *(float *)(*(int *)(param_1 + 8) + iVar4 * 8);
      pfVar1 = (float *)(*(int *)(param_1 + 8) + 4 + iVar4 * 8);
      *pfVar1 = param_4 + *pfVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 8));
}




/* Function: FUN_0045d5e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045d5e0(undefined4 *param_1,float param_2)

{
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  undefined4 *puVar11;
  float local_40;
  float local_3c;
  undefined1 local_38 [8];
  undefined1 local_30 [12];
  void *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057c738;
  local_14 = ExceptionList;
  if ((param_1[2] != 0) && ((int)(param_1[3] - param_1[2]) >> 3 != 0)) {
    if ((void *)param_1[6] != (void *)0x0) {
      ExceptionList = &local_14;
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_1[6]);
    }
    if (param_1[2] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(param_1[3] - param_1[2]) >> 3;
    }
    ExceptionList = &local_14;
    iVar6 = thunk_FUN_00493c27(iVar6 * 0x38);
    param_1[6] = iVar6;
    if (param_1[2] == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(param_1[3] - param_1[2]) >> 3;
    }
    param_1[5] = iVar7 * 2;
    local_24 = (void *)0x0;
    local_20 = 0;
    local_1c = 0;
    local_c = 0;
    if (param_1[2] == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(param_1[3] - param_1[2]) >> 3;
    }
    iVar7 = iVar7 + -1;
    if (param_1[2] == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (int)(param_1[3] - param_1[2]) >> 3;
    }
    FUN_0045d0d0(iVar8 + -1);
    iVar8 = 0;
    if (0 < iVar7) {
      do {
        pfVar9 = (float *)(param_1[2] + iVar8 * 8);
        fVar2 = *(float *)(param_1[2] + 0xc + iVar8 * 8) - pfVar9[1];
        fVar4 = -(pfVar9[2] - *pfVar9);
        fVar3 = SQRT(fVar2 * fVar2 + fVar4 * fVar4);
        if (fVar3 < (float)_DAT_00588bd8 == (fVar3 == (float)_DAT_00588bd8)) {
          fVar3 = _DAT_00583354 / fVar3;
          *(float *)((int)local_24 + iVar8 * 8) = fVar3 * fVar2;
          *(float *)((int)local_24 + iVar8 * 8 + 4) = fVar3 * fVar4;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar7);
    }
    uVar10 = 0;
    puVar11 = (undefined4 *)(iVar6 + 8);
    while ((iVar6 = param_1[2], iVar6 != 0 && (uVar10 < (uint)(param_1[3] - iVar6 >> 3)))) {
      local_40 = 0.0;
      local_3c = 0.0;
      if ((int)uVar10 < 1) {
LAB_0045d790:
        pfVar9 = (float *)FUN_00459830(local_30,local_24,(int)local_24 + iVar7 * 8 + -8);
        fVar2 = local_40;
        if (&local_40 != pfVar9) {
          local_3c = pfVar9[1];
          fVar2 = *pfVar9;
        }
      }
      else {
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = param_1[3] - iVar6 >> 3;
        }
        if (iVar6 - 1U <= uVar10) goto LAB_0045d790;
        pvVar1 = (void *)((int)local_24 + uVar10 * 8);
        pfVar9 = (float *)FUN_00459830(local_38,pvVar1,(int)pvVar1 + -8);
        fVar2 = local_40;
        if (&local_40 != pfVar9) {
          local_3c = pfVar9[1];
          fVar2 = *pfVar9;
        }
      }
      fVar4 = SQRT(fVar2 * fVar2 + local_3c * local_3c);
      fVar3 = _DAT_00582ad8;
      fVar5 = _DAT_00583354;
      if ((float)_DAT_00587c48 <= fVar4) {
        fVar4 = _DAT_00583354 / fVar4;
        fVar3 = fVar2 * fVar4;
        fVar5 = local_3c * fVar4;
      }
      puVar11[1] = 0x3f800000;
      *puVar11 = 0x3f800000;
      fVar3 = fVar3 * param_2 * _DAT_00583340;
      uVar10 = uVar10 + 1;
      puVar11[-2] = *(float *)(param_1[2] + -8 + uVar10 * 8) - fVar3;
      fVar4 = fVar5 * param_2 * _DAT_00583340;
      fVar2 = *(float *)(param_1[2] + -4 + uVar10 * 8);
      puVar11[8] = 0x3f800000;
      puVar11[7] = 0x3f800000;
      puVar11[-1] = fVar2 - fVar4;
      puVar11[5] = fVar3 + *(float *)(param_1[2] + -8 + uVar10 * 8);
      puVar11[6] = fVar4 + *(float *)(param_1[2] + -4 + uVar10 * 8);
      puVar11 = puVar11 + 0xe;
    }
    *param_1 = 5;
    if (local_24 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_24);
    }
  }
  ExceptionList = local_14;
  return;
}




/* Function: FUN_0045d8a0 */

void FUN_0045d8a0(void)

{
  FUN_0045d060(&stack0x00000004);
  return;
}




/* Function: FUN_0045d8c0 */

void __thiscall FUN_0045d8c0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0xa8);
  if (piVar3 != *(int **)(param_1 + 0xac)) {
    while (*piVar3 != param_2) {
      piVar3 = piVar3 + 1;
      if (piVar3 == *(int **)(param_1 + 0xac)) {
        return;
      }
    }
    piVar1 = *(int **)(param_1 + 0xac);
    piVar2 = piVar3 + 1;
    if (piVar2 != piVar1) {
      iVar4 = (int)piVar3 - (int)piVar2;
      do {
        *(int *)(iVar4 + (int)piVar2) = *piVar2;
        piVar2 = piVar2 + 1;
      } while (piVar2 != piVar1);
    }
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + -4;
    FUN_0045d060(&param_2);
  }
  return;
}




/* Function: FUN_0045d980 */

/* WARNING: Removing unreachable block (ram,0x0045da65) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0045d980(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057c758;
  local_c = ExceptionList;
  fVar1 = (float)*(int *)(param_1 + 0x44) * _DAT_00583340;
  local_4 = 0;
  fVar2 = (float)*(int *)(param_1 + 0x48) * _DAT_00583340;
  ExceptionList = &local_c;
  FUN_0045d310((fVar2 + fVar1) * _DAT_00583340,0x20,0,0x168);
  FUN_0045d5e0(0x3f800000);
  FUN_0045b500();
  FUN_00459970(param_2,(float)*(int *)(param_1 + 0x3c) + fVar1,
               (float)*(int *)(param_1 + 0x40) + fVar2,*(undefined4 *)(param_1 + 0x78),0,0,
               0x3f800000,0x3f800000);
  uVar3 = FUN_0045a0a0(param_2,param_3,param_4);
  ExceptionList = local_c;
  return uVar3;
}




/* Function: FUN_0045db10 */

int __thiscall FUN_0045db10(int param_1,int param_2,int param_3)

{
  if (*(char *)(param_1 + 0x35) != '\0') {
    if ((*(int *)(param_1 + 0x3c) <= param_2) &&
       (param_2 < *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x3c))) {
      if ((*(int *)(param_1 + 0x40) <= param_3) &&
         ((param_3 < *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x40) &&
          (*(char *)(param_1 + 0x36) != '\0')))) {
        FUN_0045d2c0(param_1,0,*(undefined4 *)(param_1 + 0x30));
        return param_1;
      }
    }
  }
  return 0;
}




/* Function: FUN_0045dbc0 */

int __thiscall FUN_0045dbc0(int param_1,int param_2,int param_3)

{
  if ((*(int *)(param_1 + 0x3c) <= param_2) &&
     (param_2 < *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x3c))) {
    if ((*(int *)(param_1 + 0x40) <= param_3) &&
       (param_3 < *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x40))) {
      FUN_0045d2c0(param_1,0,*(undefined4 *)(param_1 + 0x30));
      return param_1;
    }
  }
  return 0;
}




/* Function: FUN_0045dc10 */

int * __thiscall FUN_0045dc10(int *param_1,int param_2,int param_3)

{
  void *unaff_EBX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057c79a;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0045ca20();
  *param_1 = (int)&PTR_LAB_0058a5c8;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1c] = 5;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x23] = 5;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((int)param_1 + 0xb5) = 0;
  (**(code **)(*param_1 + 0x30))(param_2 - param_1[0xf],param_3 - param_1[0x10]);
  param_1[0x12] = param_3;
  param_1[0x11] = param_2;
  FUN_0045d410((float)param_2,(float)param_3,0x41800000,0x20);
  FUN_0045b500();
  param_1[0x2a] = 0x14;
  param_1[0x2b] = 0x18;
  param_1[0x2c] = 0x14;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x13),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x0000000c);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  local_c = (void *)0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x0000000c);
  ExceptionList = unaff_EBX;
  return param_1;
}




/* Function: FUN_0045e010 */

void __thiscall FUN_0045e010(int param_1,int *param_2)

{
  param_2[1] = param_1;
  (**(code **)(*param_2 + 0x30))(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
  FUN_0045d060(&stack0xfffffffc);
  return;
}




/* Function: FUN_0045e040 */

void FUN_0045e040(undefined4 param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_2c [36];
  
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
  FUN_0045d1d0(param_1);
  return;
}




/* Function: FUN_0045e080 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0045e080(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  
  piVar4 = (int *)FUN_0041cab0();
  cVar3 = (**(code **)(*piVar4 + 0x88))();
  if (cVar3 == '\0') {
    piVar4 = (int *)FUN_0041ce00();
    iVar9 = *piVar4;
    iVar5 = FUN_0041ce00();
    iVar7 = *(int *)(param_1 + 0x84);
    iVar1 = *(int *)(param_1 + 0x88);
    iVar9 = iVar7 + iVar9;
    iVar5 = *(int *)(iVar5 + 4) + iVar1;
    *(int *)(param_1 + 0x84) = iVar9;
    iVar9 = iVar9 - iVar7;
    *(int *)(param_1 + 0x88) = iVar5;
    iVar5 = iVar5 - iVar1;
  }
  else {
    piVar4 = (int *)FUN_0041cdd0();
    iVar9 = *piVar4 - *(int *)(param_1 + 0x84);
    iVar5 = FUN_0041cdd0();
    iVar5 = *(int *)(iVar5 + 4) - *(int *)(param_1 + 0x88);
    puVar6 = (undefined4 *)FUN_0041cdd0();
    *(undefined4 *)(param_1 + 0x84) = *puVar6;
    iVar7 = FUN_0041cdd0();
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar7 + 4);
  }
  if (*(int *)(param_1 + 0x84) < 0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  iVar7 = FUN_0041c920();
  if (*(uint *)(iVar7 + 8) < *(uint *)(param_1 + 0x84)) {
    iVar7 = FUN_0041c920();
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar7 + 8);
  }
  if (*(int *)(param_1 + 0x88) < 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  iVar7 = FUN_0041c920();
  if (*(uint *)(iVar7 + 0xc) < *(uint *)(param_1 + 0x88)) {
    iVar7 = FUN_0041c920();
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar7 + 0xc);
  }
  if ((iVar9 != 0) || (iVar5 != 0)) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
    }
    while (iVar7 = iVar7 + -1, -1 < iVar7) {
      piVar4 = *(int **)(*(int *)(param_1 + 0xa8) + iVar7 * 4);
      if (*(char *)((int)piVar4 + 0x35) != '\0') {
        (**(code **)(*piVar4 + 0x74))
                  (*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88));
      }
    }
  }
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + iVar9;
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + iVar5;
    (**(code **)(**(int **)(param_1 + 0x8c) + 0x30))(iVar9,iVar5);
  }
  uVar8 = FUN_0041cda0();
  if ((uVar8 & 0x20) != 0) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
    }
    do {
      do {
        iVar9 = iVar9 + -1;
        if (iVar9 < 0) goto LAB_0045e29f;
        piVar4 = *(int **)(*(int *)(param_1 + 0xa8) + iVar9 * 4);
      } while (*(char *)((int)piVar4 + 0x35) == '\0');
      piVar4 = (int *)(**(code **)(*piVar4 + 0x50))
                                (*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88));
      *(int **)(param_1 + 0x8c) = piVar4;
      if (piVar4 == (int *)0xffffffff) {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        goto LAB_0045e29f;
      }
    } while (piVar4 == (int *)0x0);
    cVar3 = (**(code **)(*piVar4 + 4))();
    if (cVar3 != '\0') {
      FUN_0045d8c0(*(undefined4 *)(param_1 + 0x8c));
    }
  }
LAB_0045e29f:
  uVar8 = FUN_0041cda0();
  if ((uVar8 & 0x10) != 0) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
    }
    while (iVar9 = iVar9 + -1, -1 < iVar9) {
      piVar4 = *(int **)(*(int *)(param_1 + 0xa8) + iVar9 * 4);
      if ((*(char *)((int)piVar4 + 0x35) != '\0') &&
         ((iVar5 = (**(code **)(*piVar4 + 100))
                             (*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88)),
          iVar5 == -1 || (iVar5 != 0)))) break;
    }
  }
  uVar8 = FUN_0041cda0();
  if (((uVar8 & 8) != 0) &&
     ((uVar8 = (int)*(uint *)(param_1 + 0x94) >> 0x1f,
      (int)((*(uint *)(param_1 + 0x94) ^ uVar8) - uVar8) < 6 &&
      (uVar8 = (int)*(uint *)(param_1 + 0x98) >> 0x1f,
      (int)((*(uint *)(param_1 + 0x98) ^ uVar8) - uVar8) < 6)))) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
    }
    do {
      iVar9 = iVar9 + -1;
      if (iVar9 < 0) break;
      piVar4 = *(int **)(*(int *)(param_1 + 0xa8) + iVar9 * 4);
    } while ((*(char *)((int)piVar4 + 0x35) == '\0') ||
            (cVar3 = (**(code **)(*piVar4 + 0x60))
                               (*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88)),
            cVar3 != '\0'));
  }
  uVar8 = FUN_0041cda0();
  if ((uVar8 & 4) != 0) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
    }
    do {
      iVar9 = iVar9 + -1;
      if (iVar9 < 0) break;
      piVar4 = *(int **)(*(int *)(param_1 + 0xa8) + iVar9 * 4);
    } while ((*(char *)((int)piVar4 + 0x35) == '\0') ||
            (cVar3 = (**(code **)(*piVar4 + 0x70))
                               (*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88)),
            cVar3 != '\0'));
  }
  uVar8 = FUN_0041cda0();
  if ((uVar8 & 0x20) != 0) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
    }
    while (iVar9 = iVar9 + -1, -1 < iVar9) {
      piVar4 = *(int **)(*(int *)(param_1 + 0xa8) + iVar9 * 4);
      if (*(char *)((int)piVar4 + 0x35) != '\0') {
        (**(code **)(*piVar4 + 0x3c))
                  (*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88));
      }
    }
  }
  uVar8 = FUN_0041cda0();
  if ((uVar8 & 0x10) != 0) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
    }
    while (iVar9 = iVar9 + -1, -1 < iVar9) {
      piVar4 = *(int **)(*(int *)(param_1 + 0xa8) + iVar9 * 4);
      if (*(char *)((int)piVar4 + 0x35) != '\0') {
        (**(code **)(*piVar4 + 0x40))
                  (*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88));
      }
    }
  }
  uVar8 = FUN_0041cda0();
  if ((uVar8 & 0x200) != 0) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
    }
    while (iVar9 = iVar9 + -1, -1 < iVar9) {
      piVar4 = *(int **)(*(int *)(param_1 + 0xa8) + iVar9 * 4);
      if (*(char *)((int)piVar4 + 0x35) != '\0') {
        (**(code **)(*piVar4 + 0x44))();
      }
    }
  }
  uVar8 = FUN_0041cda0();
  if ((uVar8 & 0x400) != 0) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
    }
    while (iVar9 = iVar9 + -1, -1 < iVar9) {
      piVar4 = *(int **)(*(int *)(param_1 + 0xa8) + iVar9 * 4);
      if (*(char *)((int)piVar4 + 0x35) != '\0') {
        (**(code **)(*piVar4 + 0x48))();
      }
    }
  }
  uVar8 = FUN_0041cda0();
  if ((uVar8 & 2) == 0) {
    uVar10 = (int)*(uint *)(param_1 + 0x94) >> 0x1f;
    uVar8 = *(uint *)(param_1 + 0x94) ^ uVar10;
    bVar2 = false;
    if ((uVar8 != uVar10 && -1 < (int)(uVar8 - uVar10)) ||
       (uVar10 = (int)*(uint *)(param_1 + 0x98) >> 0x1f, uVar8 = *(uint *)(param_1 + 0x98) ^ uVar10,
       uVar8 != uVar10 && -1 < (int)(uVar8 - uVar10))) {
      bVar2 = true;
    }
    if ((*(int **)(param_1 + 0x8c) != (int *)0x0) && (bVar2)) {
      (**(code **)(**(int **)(param_1 + 0x8c) + 0x6c))();
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(int *)(param_1 + 0x90) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x90) + 0x37) = 0;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (*(int *)(param_1 + 0xa8) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
    }
    do {
      do {
        iVar9 = iVar9 + -1;
        if (iVar9 < 0) goto LAB_0045e60f;
        piVar4 = *(int **)(*(int *)(param_1 + 0xa8) + iVar9 * 4);
      } while (*(char *)((int)piVar4 + 0x35) == '\0');
      iVar5 = (**(code **)(*piVar4 + 0x54))
                        (*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88));
      *(int *)(param_1 + 0x90) = iVar5;
      if (iVar5 == -1) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        break;
      }
    } while (iVar5 == 0);
LAB_0045e60f:
    if (*(int *)(param_1 + 0x90) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x90) + 0x37) = 1;
    }
  }
  if (((*(int *)(param_1 + 0xa0) != 0) && (*(char *)(*(int *)(param_1 + 0xa0) + 0x35) != '\0')) &&
     (*(int *)(param_1 + 0x8c) == 0)) {
    FUN_0041dc00();
    FUN_0045d8c0(*(undefined4 *)(param_1 + 0xa0));
  }
  puVar6 = *(undefined4 **)(param_1 + 0xa8);
  if (puVar6 != *(undefined4 **)(param_1 + 0xac)) {
    do {
      (**(code **)(*(int *)*puVar6 + 0x14))(param_2);
      puVar6 = puVar6 + 1;
    } while (puVar6 != *(undefined4 **)(param_1 + 0xac));
  }
  if (*(char *)(param_1 + 0xc4) == '\0') {
    fVar11 = (float10)FUN_0041ce10();
    fVar11 = fVar11 + (float10)*(float *)(param_1 + 200);
    *(float *)(param_1 + 200) = (float)fVar11;
    if ((float10)_DAT_00583354 < fVar11) {
      *(undefined4 *)(param_1 + 200) = 0x3f800000;
    }
  }
  else {
    fVar11 = (float10)FUN_0041ce10();
    fVar11 = (float10)*(float *)(param_1 + 200) - fVar11;
    *(float *)(param_1 + 200) = (float)fVar11;
    if (fVar11 < (float10)_DAT_00582ad8) {
      *(undefined4 *)(param_1 + 200) = 0;
    }
  }
  FUN_0041cae0();
  iVar9 = FUN_0042dbb0();
  uVar8 = 0;
  if (iVar9 != 0) {
    FUN_00412e58(iVar9,"gui_Update");
    uVar8 = FUN_00412798(iVar9,0,0);
  }
  return uVar8 & 0xffffff00;
}




/* Function: FUN_0045e710 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0045e710(int *param_1,int *param_2)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  int *piVar7;
  float10 fVar8;
  int *piVar9;
  float afStack_64 [2];
  int *piStack_5c;
  undefined4 *puStack_2c;
  char *pcStack_28;
  
  pcVar2 = pcStack_28;
  piStack_5c = param_2;
  afStack_64[1] = 6.419571e-39;
  FUN_00458b30();
  piStack_5c = (int *)0x1;
  afStack_64[1] = 2.38221e-44;
  afStack_64[0] = 0.0;
  (**(code **)(*param_2 + 0xfc))(param_2);
  piVar9 = param_2;
  (**(code **)(*param_2 + 0xfc))(param_2,0,0x10,2);
  (**(code **)(*param_2 + 0xfc))(param_2,0,0x12,1);
  piVar7 = (int *)param_1[0x2a];
  if (piVar7 != (int *)param_1[0x2b]) {
    do {
      piVar1 = (int *)*piVar7;
      if ((*(char *)((int)piVar1 + 0x35) != '\0') && (*(char *)((int)piVar1 + 0x39) != '\0')) {
        (**(code **)(*piVar1 + 0x2c))(param_2,pcStack_28,0);
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != (int *)param_1[0x2b]);
  }
  puStack_2c = (undefined4 *)param_1[0x2e];
  if (puStack_2c != (undefined4 *)param_1[0x2f]) {
    this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           (puStack_2c + 0xd);
    do {
      pcStack_28 = (char *)0x0;
      if (*(int *)(this + 0x14) == 0) {
LAB_0045e823:
        (**(code **)(*param_2 + 0xf4))(param_2,0,0);
      }
      else {
        pcVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                 c_str(this);
        if (*pcVar3 == '#') {
          pcVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   ::c_str(this);
          pcStack_28 = pcVar3 + 1;
          goto LAB_0045e823;
        }
        iVar4 = FUN_004222d0(this);
        if (iVar4 == 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&stack0xffffffb4,".\\Textures\\");
          FUN_00429a60(&stack0xffffffb4,this,1);
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&stack0xffffffb4);
          iVar4 = FUN_004222d0(this);
          if (iVar4 == 0) goto LAB_0045e823;
        }
        (**(code **)(iVar4 + 4))(param_2,0);
      }
      if (*(int *)(this + 0x1c) == 0) {
        (**(code **)(*param_2 + 200))();
        (**(code **)(*param_2 + 200))(param_2,0x14,2);
      }
      else {
        (**(code **)(*param_2 + 200))(param_2,0x13,5);
        (**(code **)(*param_2 + 200))(param_2,0x14,6);
      }
      if (pcStack_28 == (char *)0x0) {
        iVar4 = FUN_004cf110();
        FUN_004cf110();
        afStack_64[1] = 0.0;
        afStack_64[0] = _DAT_00583354 / (float)iVar4;
        piStack_5c = (int *)0x0;
        if ((*(float *)(this + -8) < (float)_DAT_00582af0) ||
           (*(float *)(this + -4) < (float)_DAT_00582af0)) {
          (**(code **)(*param_2 + 0xfc))(param_2,0,0xd,1);
          (**(code **)(*param_2 + 0xfc))(param_2,0,0xe,1);
        }
        else {
          (**(code **)(*param_2 + 0xfc))(param_2,0,0xd,3);
          (**(code **)(*param_2 + 0xfc))(param_2,0,0xe,3);
        }
        FUN_00459b80(param_2,*puStack_2c,*(undefined4 *)(this + -0x30),*(undefined4 *)(this + -0x2c)
                     ,*(undefined4 *)(this + -0x28),*(undefined4 *)(this + -0x14),this + -0x24,
                     afStack_64,*(undefined4 *)(this + 0x20));
      }
      else {
        FUN_0041e5b0();
        uVar5 = FUN_00407c10();
        FUN_0041e5b0();
        uVar6 = FUN_00407020();
        param_1 = piVar9;
        FUN_00458c40(param_2,uVar5,uVar6,*puStack_2c,*(undefined4 *)(this + -0x30),
                     *(undefined4 *)(this + -0x2c),*(undefined4 *)(this + -0x28),
                     *(undefined4 *)(this + -0x2c),pcStack_28,*(undefined4 *)(this + -0x14),
                     this + -0x24);
        piVar9 = param_1;
      }
      puStack_2c = puStack_2c + 0x16;
      this = this + 0x58;
    } while (puStack_2c != (undefined4 *)param_1[0x2f]);
  }
  FUN_0045e040(0);
  piVar7 = (int *)param_1[0x2a];
  if (piVar7 != (int *)param_1[0x2b]) {
    do {
      piVar9 = (int *)*piVar7;
      if ((*(char *)((int)piVar9 + 0x35) != '\0') && (*(char *)((int)piVar9 + 0x39) == '\0')) {
        (**(code **)(*piVar9 + 0x2c))(param_2,pcVar2,0);
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != (int *)param_1[0x2b]);
  }
  (**(code **)(*param_2 + 200))(param_2,0x13,5);
  (**(code **)(*param_2 + 200))(param_2,0x14,6);
  if ((float)param_1[0x32] < _DAT_00582ad8 == ((float)param_1[0x32] == _DAT_00582ad8)) {
    iVar4 = FUN_004cf110();
    (**(code **)(*param_2 + 0xf4))(param_2,0,0);
    iVar4 = FUN_0041c920(iVar4 << 0x18,0,0,0);
    iVar4 = FUN_0041c920(*(undefined4 *)(iVar4 + 0xc));
    FUN_00459b80(param_2,0,0,*(undefined4 *)(iVar4 + 8));
  }
  if (DAT_005b609c != (int *)0x0) {
    iVar4 = FUN_0041c920();
    if ((uint)DAT_005b609c[0x11] < *(uint *)(iVar4 + 8)) {
      iVar4 = FUN_0041c920();
      DAT_005b609c[0x11] = *(int *)(iVar4 + 8);
    }
    iVar4 = FUN_0041c920();
    if ((uint)DAT_005b609c[0x12] < *(uint *)(iVar4 + 0xc)) {
      iVar4 = FUN_0041c920();
      DAT_005b609c[0x12] = *(int *)(iVar4 + 0xc);
    }
    fVar8 = (float10)FUN_0041cb80();
    piVar7 = DAT_005b609c;
    if ((float10)_DAT_0058a65c <= fVar8) {
      if (DAT_005b609c != (int *)0x0) {
        (**(code **)(*DAT_005b609c + 0x18))(1);
      }
      DAT_005b609c = (int *)0x0;
    }
    else if (DAT_005b60a0 == 0) {
      iVar4 = FUN_004cf110();
      DAT_005b609c[0x1a] = iVar4 << 0x18 | 0xffffff;
      (**(code **)(*DAT_005b609c + 0x2c))(param_2,pcVar2,0);
    }
    else {
      if (DAT_005b60a0 == 1) {
        iVar4 = FUN_004cf110();
        piVar7[0x10] = iVar4;
      }
      (**(code **)(*DAT_005b609c + 0x2c))(param_2,pcVar2,0);
    }
  }
  (**(code **)(*param_2 + 0xfc))(param_2,0,0xd,1);
  (**(code **)(*param_2 + 0xfc))(param_2,0,0xe,1);
  (**(code **)(*param_2 + 0xfc))(param_2,0,0x11,2);
  (**(code **)(*param_2 + 0xfc))(param_2,0,0x10,2);
  (**(code **)(*param_2 + 0xfc))(param_2,0,0x12,2);
  return 1;
}




/* Function: FUN_0045ec30 */

int * __thiscall FUN_0045ec30(int *param_1,int param_2,int param_3)

{
  void *unaff_EBX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057c7eb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0045ca20();
  *param_1 = (int)&PTR_LAB_0058a660;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2b] = 5;
  local_4._0_1_ = 2;
  FUN_0045ca20();
  param_1[0x32] = (int)&PTR_LAB_0058a3e8;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  (**(code **)(*param_1 + 0x30))(param_2 - param_1[0xf],param_3 - param_1[0x10]);
  FUN_0045d410((float)param_2,(float)param_3,0x41800000,0x20);
  FUN_0045b500();
  param_1[0x12] = param_3;
  param_1[0x11] = param_2;
  param_1[0x2a] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x13),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x0000000c);
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  *(undefined1 *)((int)param_1 + 0x6b) = 1;
  param_1[0x1f] = 0x23;
  param_1[0x29] = -0x80000000;
  *(undefined1 *)((int)param_1 + 0x6a) = 0;
  *(undefined1 *)((int)param_1 + 0x69) = 0;
  *(undefined1 *)((int)param_1 + 0xfd) = 0;
  *(undefined1 *)((int)param_1 + 0x6d) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0xffff;
  *(undefined1 *)((int)param_1 + 0x6e) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  local_c = (void *)0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x0000000c);
  ExceptionList = unaff_EBX;
  return param_1;
}




/* Function: FUN_0045edb0 */

void * __thiscall FUN_0045edb0(void *param_1,byte param_2)

{
  FUN_0045c850();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0045edd0 */

undefined4 * __fastcall FUN_0045edd0(undefined4 *param_1)

{
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_0058a6e0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x21] = 100;
  param_1[0x22] = 100;
  return param_1;
}




/* Function: FUN_0045ee50 */

void __fastcall FUN_0045ee50(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[0x2a];
  *param_1 = &PTR_LAB_0058a6e0;
  if (piVar2 != (int *)param_1[0x2b]) {
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x18))(1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)param_1[0x2b]);
  }
  if ((void *)param_1[0x2a] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x2a]);
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  if (DAT_005b609c != (int *)0x0) {
    (**(code **)(*DAT_005b609c + 0x18))(1);
  }
  DAT_005b609c = (int *)0x0;
  iVar3 = param_1[0x2e];
  if (iVar3 != 0) {
    iVar1 = param_1[0x2f];
    for (; iVar3 != iVar1; iVar3 = iVar3 + 0x58) {
      FUN_0044ae30();
    }
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x2e]);
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  if ((void *)param_1[0x2a] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x2a]);
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  FUN_0040da90();
  return;
}




/* Function: FUN_0045ef40 */

void * __thiscall FUN_0045ef40(void *param_1,byte param_2)

{
  FUN_0045ee50();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_0045ef60 */

void __thiscall FUN_0045ef60(int param_1,int param_2)

{
  ushort *puVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  float *pfVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined4 local_c [3];
  
  iVar3 = param_2;
  if (((*(int *)(param_2 + 0x23c) != 0) && (*(int *)(param_2 + 0x22c) != 0)) &&
     (*(int *)(param_2 + 0x240) != 0)) {
    iVar6 = *(int *)(param_1 + 0x1c0);
    if ((iVar6 != 0) && (*(int *)(param_1 + 500) == 0)) {
      piVar4 = operator_new(iVar6 * 8 + 4,(nothrow_t *)&DAT_005b6164);
      if (piVar4 == (int *)0x0) {
        piVar15 = (int *)0x0;
      }
      else {
        piVar15 = piVar4 + 1;
        *piVar4 = iVar6;
        _eh_vector_constructor_iterator_
                  (piVar15,8,iVar6,(_func_void_void_ptr *)&LAB_0041d390,FUN_0043fa70);
      }
      uVar5 = 0;
      *(int **)(param_1 + 500) = piVar15;
      if (*(int *)(param_1 + 0x1c0) != 0) {
        do {
          *(undefined4 *)(*(int *)(param_1 + 500) + uVar5 * 8) = 0;
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(param_1 + 0x1c0));
      }
      uVar5 = 0;
      if (*(int *)(param_1 + 0x1e8) != 0) {
        iVar6 = 0;
        do {
          piVar4 = (int *)(*(int *)(param_1 + 500) +
                          (uint)*(ushort *)(*(int *)(param_1 + 0x1e4) + iVar6) * 8);
          *piVar4 = *piVar4 + 1;
          uVar13 = (uint)*(ushort *)(*(int *)(param_1 + 0x1e4) + 2 + iVar6);
          *(int *)(*(int *)(param_1 + 500) + uVar13 * 8) =
               *(int *)(*(int *)(param_1 + 500) + uVar13 * 8) + 1;
          piVar4 = (int *)(*(int *)(param_1 + 500) +
                          (uint)*(ushort *)(*(int *)(param_1 + 0x1e4) + 4 + iVar6) * 8);
          *piVar4 = *piVar4 + 1;
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (uVar5 < *(uint *)(param_1 + 0x1e8));
      }
      uVar5 = 0;
      if (*(int *)(param_1 + 0x1c0) != 0) {
        do {
          iVar6 = *(int *)(*(int *)(param_1 + 500) + uVar5 * 8);
          if (iVar6 != 0) {
            pvVar7 = operator_new(iVar6 << 2,(nothrow_t *)&DAT_005b6164);
            *(void **)(*(int *)(param_1 + 500) + 4 + uVar5 * 8) = pvVar7;
          }
          *(undefined4 *)(*(int *)(param_1 + 500) + uVar5 * 8) = 0;
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(param_1 + 0x1c0));
      }
      uVar5 = 0;
      if (*(int *)(param_1 + 0x1e8) != 0) {
        iVar6 = 0;
        do {
          uVar13 = (uint)*(ushort *)(iVar6 + *(int *)(param_1 + 0x1e4));
          *(uint *)(*(int *)(*(int *)(param_1 + 500) + uVar13 * 8 + 4) +
                   *(int *)(*(int *)(param_1 + 500) + uVar13 * 8) * 4) = uVar5;
          piVar4 = (int *)(*(int *)(param_1 + 500) + uVar13 * 8);
          *piVar4 = *piVar4 + 1;
          uVar13 = (uint)*(ushort *)(iVar6 + 2 + *(int *)(param_1 + 0x1e4));
          *(uint *)(*(int *)(*(int *)(param_1 + 500) + uVar13 * 8 + 4) +
                   *(int *)(*(int *)(param_1 + 500) + uVar13 * 8) * 4) = uVar5;
          *(int *)(*(int *)(param_1 + 500) + uVar13 * 8) =
               *(int *)(*(int *)(param_1 + 500) + uVar13 * 8) + 1;
          uVar13 = (uint)*(ushort *)(iVar6 + 4 + *(int *)(param_1 + 0x1e4));
          *(uint *)(*(int *)(*(int *)(param_1 + 500) + uVar13 * 8 + 4) +
                   *(int *)(*(int *)(param_1 + 500) + uVar13 * 8) * 4) = uVar5;
          piVar4 = (int *)(*(int *)(param_1 + 500) + uVar13 * 8);
          *piVar4 = *piVar4 + 1;
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (uVar5 < *(uint *)(param_1 + 0x1e8));
      }
    }
    iVar6 = 0;
    local_4c = 0;
    if (*(int *)(param_1 + 0x1e8) != 0) {
      param_2 = 0;
      do {
        iVar10 = *(int *)(iVar3 + 0x22c);
        puVar1 = (ushort *)(iVar6 + *(int *)(param_1 + 0x1e4));
        local_48 = *(undefined4 *)((uint)*puVar1 * 0x10 + iVar10);
        iVar8 = (uint)*puVar1 * 0x10 + iVar10;
        local_44 = *(undefined4 *)(iVar8 + 4);
        local_40 = *(undefined4 *)(iVar8 + 8);
        puVar9 = (undefined4 *)((uint)puVar1[1] * 0x10 + iVar10);
        local_30 = *puVar9;
        local_2c = puVar9[1];
        local_28 = puVar9[2];
        local_3c = *(undefined4 *)((uint)puVar1[2] * 0x10 + iVar10);
        iVar10 = (uint)puVar1[2] * 0x10 + iVar10;
        local_38 = *(undefined4 *)(iVar10 + 4);
        local_34 = *(undefined4 *)(iVar10 + 8);
        uVar11 = FUN_0041d580(local_24,&local_3c,&local_48);
        uVar11 = FUN_0041d580(local_18,&local_48,&local_30,uVar11);
        puVar9 = (undefined4 *)FUN_0041d5e0(local_c,uVar11);
        puVar14 = (undefined4 *)(*(int *)(iVar3 + 0x23c) + param_2);
        if (puVar9 != puVar14) {
          *puVar14 = *puVar9;
          puVar14[1] = puVar9[1];
          puVar14[2] = puVar9[2];
        }
        local_4c = local_4c + 1;
        param_2 = param_2 + 0xc;
        iVar6 = iVar6 + 0x2c;
      } while (local_4c < *(uint *)(param_1 + 0x1e8));
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0x1c0) != 0) {
      iVar6 = 0;
      do {
        puVar9 = (undefined4 *)(*(int *)(iVar3 + 0x240) + iVar6);
        if (local_c != puVar9) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
        }
        uVar13 = 0;
        if (*(int *)(*(int *)(param_1 + 500) + uVar5 * 8) != 0) {
          do {
            pfVar2 = (float *)(*(int *)(iVar3 + 0x23c) +
                              *(int *)(*(int *)(*(int *)(param_1 + 500) + 4 + uVar5 * 8) +
                                      uVar13 * 4) * 0xc);
            pfVar12 = (float *)(*(int *)(iVar3 + 0x240) + iVar6);
            uVar13 = uVar13 + 1;
            *pfVar12 = *(float *)(*(int *)(iVar3 + 0x240) + iVar6) + *pfVar2;
            pfVar12[1] = pfVar2[1] + pfVar12[1];
            pfVar12[2] = pfVar2[2] + pfVar12[2];
          } while (uVar13 < *(uint *)(*(int *)(param_1 + 500) + uVar5 * 8));
        }
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 0xc;
      } while (uVar5 < *(uint *)(param_1 + 0x1c0));
    }
  }
  return;
}




/* Function: FUN_0045f340 */

int __thiscall
FUN_0045f340(int param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  ushort uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  int unaff_ESI;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar25;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  int *piStack_14;
  int iStack_10;
  int *piStack_c;
  char cStack_8;
  char cVar24;
  
  if (*(char *)(param_1 + 0x2a6) != '\0') {
    iVar14 = FUN_0043ac40(param_2,param_3,param_4,param_5);
    return iVar14;
  }
  iVar14 = (**(code **)(*param_2 + 0x130))
                     (param_2,**(undefined4 **)(*(int *)(param_3 + 0x2d0) + 0x28));
  if (iVar14 < 0) {
    return 0;
  }
  uVar22 = **(undefined4 **)(param_3 + 0x2d0);
  uStack_30 = 0;
  (**(code **)(*param_2 + 0x14c))(param_2,0,uVar22,0x28);
  uStack_20 = 0;
  if (cStack_8 != '\0') {
    (**(code **)(*param_2 + 0xcc))(param_2,0x1c,&uStack_20);
    (**(code **)(*param_2 + 200))(param_2,0x1c,0);
  }
  piVar13 = piStack_c;
  uVar23 = 0;
  cVar24 = '\0';
  if ((*(byte *)(param_1 + 0x188) & 1) == 0) {
    uStack_30 = 0;
    if (*(int *)(param_1 + 0x200) != 0) {
      uStack_2c = 0;
      do {
        iVar14 = *(int *)(param_1 + 0x1fc);
        piVar11 = *(int **)(iVar14 + 4 + uStack_2c);
        piStack_c = (int *)(uStack_30 * 4);
        piVar19 = (int *)(piVar13[0x92] + (int)piStack_c);
        if ((*(int *)(iVar14 + 8 + uStack_2c) != 0) &&
           (((cStack_8 == '\0' || (*(int *)(iVar14 + uStack_2c + 0xc) != 0)) &&
            (*(int *)((int)piStack_c + piVar13[0x94]) != 0)))) {
          if (cStack_8 != '\0') {
            if ((char)((uint)uVar23 >> 0x18) == '\0') {
              if ((*(byte *)((uint)*(byte *)(*piVar11 + 0x28) * 0x50 + 0x44 +
                            *(int *)(param_1 + 0x1d4)) & 8) != 0) {
                (**(code **)(*piStack_14 + 200))(piStack_14,0x16,1);
                uVar23 = 0x1000000;
              }
            }
            else if ((*(byte *)((uint)*(byte *)(*piVar11 + 0x28) * 0x50 + 0x44 +
                               *(int *)(param_1 + 0x1d4)) & 8) == 0) {
              (**(code **)(*piStack_14 + 200))(piStack_14,0x16,3);
              uVar23 = 0;
            }
            iVar14 = FUN_00410a40(5);
            if (iVar14 == 0) {
              (**(code **)(*piStack_14 + 0xf4))(piStack_14,1,0);
            }
            else {
              (**(code **)(iVar14 + 4))(piStack_14,1);
            }
            if ((char)((uint)uVar22 >> 0x18) != '\0') {
              (**(code **)(*piStack_1c + 0xf4))(piStack_1c,1,0);
            }
            iVar14 = FUN_00410a40(4);
            (**(code **)(iVar14 + 4))(piStack_1c,0);
          }
          uVar17 = *(uint *)((int)piStack_c + piVar13[0x94]);
          piStack_c = (int *)0x0;
          do {
            uVar25 = *(uint *)(*(int *)(iStack_10 + 0x2d0) + 0x24);
            uVar18 = uVar17;
            if (uVar25 < uVar17 * 3) {
              uVar18 = uVar25 / 3;
            }
            uVar17 = uVar17 - uVar18;
            uStack_24 = 0;
            iVar14 = FUN_0041d0a0(uVar18 * 3,&uStack_24);
            if (uVar18 != 0) {
              iVar15 = (int)piStack_c * 8;
              puVar16 = (undefined4 *)(iVar14 + 0x30);
              uStack_28 = uVar18;
              do {
                uVar10 = *(ushort *)(*piVar19 + 6 + (int)piStack_c * 8);
                uVar25 = (uint)*(ushort *)(*piVar19 + iVar15);
                iVar20 = uVar25 * 0x10;
                puVar16[-0xc] = *(undefined4 *)(iVar20 + piVar13[0x8b]);
                puVar16[-0xb] = *(undefined4 *)(iVar20 + 4 + piVar13[0x8b]);
                puVar16[-10] = *(undefined4 *)(iVar20 + 8 + piVar13[0x8b]);
                if (cStack_8 != '\0') {
                  puVar16[-8] = 0x3f800000;
                  puVar16[-9] = 0;
                  puVar16[-7] = 0;
                  pfVar1 = (float *)(*(int *)(param_1 + 0x1bc) + uVar25 * 0xc);
                  iVar20 = piVar11[uVar10];
                  fVar2 = *(float *)(iVar20 + 0x1c);
                  fVar3 = pfVar1[1];
                  fVar4 = *(float *)(iVar20 + 0x18);
                  fVar5 = *pfVar1;
                  fVar6 = *(float *)(iVar20 + 0x20);
                  fVar7 = pfVar1[2];
                  fVar8 = *(float *)(iVar20 + 0x24);
                  puVar16[-4] = *(float *)(iVar20 + 0x10) * pfVar1[2] +
                                *(float *)(iVar20 + 8) * *pfVar1 +
                                *(float *)(iVar20 + 0xc) * pfVar1[1] + *(float *)(iVar20 + 0x14);
                  puVar16[-3] = -(fVar6 * fVar7 + fVar4 * fVar5 + fVar2 * fVar3 + fVar8);
                }
                uVar25 = (uint)*(ushort *)(*piVar19 + 2 + iVar15);
                iVar20 = uVar25 * 0x10;
                puVar16[-2] = *(undefined4 *)(iVar20 + piVar13[0x8b]);
                puVar16[-1] = *(undefined4 *)(iVar20 + 4 + piVar13[0x8b]);
                *puVar16 = *(undefined4 *)(iVar20 + 8 + piVar13[0x8b]);
                if (cStack_8 != '\0') {
                  puVar16[2] = 0x3f800000;
                  puVar16[1] = 0;
                  puVar16[3] = 0;
                  pfVar1 = (float *)(*(int *)(param_1 + 0x1bc) + uVar25 * 0xc);
                  iVar20 = piVar11[uVar10];
                  fVar2 = *(float *)(iVar20 + 0x1c);
                  fVar3 = pfVar1[1];
                  fVar4 = *(float *)(iVar20 + 0x18);
                  fVar5 = *pfVar1;
                  fVar6 = *(float *)(iVar20 + 0x20);
                  fVar7 = pfVar1[2];
                  fVar8 = *(float *)(iVar20 + 0x24);
                  puVar16[6] = *(float *)(iVar20 + 0x10) * pfVar1[2] +
                               *(float *)(iVar20 + 8) * *pfVar1 +
                               *(float *)(iVar20 + 0xc) * pfVar1[1] + *(float *)(iVar20 + 0x14);
                  puVar16[7] = -(fVar6 * fVar7 + fVar4 * fVar5 + fVar2 * fVar3 + fVar8);
                }
                uVar25 = (uint)*(ushort *)(*piVar19 + 4 + iVar15);
                iVar20 = uVar25 * 0x10;
                puVar16[8] = *(undefined4 *)(iVar20 + piVar13[0x8b]);
                puVar16[9] = *(undefined4 *)(iVar20 + 4 + piVar13[0x8b]);
                puVar16[10] = *(undefined4 *)(iVar20 + 8 + piVar13[0x8b]);
                if (cStack_8 != '\0') {
                  puVar16[0xc] = 0x3f800000;
                  puVar16[0xb] = 0;
                  puVar16[0xd] = 0;
                  pfVar1 = (float *)(*(int *)(param_1 + 0x1bc) + uVar25 * 0xc);
                  iVar20 = piVar11[uVar10];
                  fVar2 = *(float *)(iVar20 + 0x1c);
                  fVar3 = pfVar1[1];
                  fVar4 = *(float *)(iVar20 + 0x18);
                  fVar5 = *pfVar1;
                  fVar6 = *(float *)(iVar20 + 0x20);
                  fVar7 = pfVar1[2];
                  fVar8 = *(float *)(iVar20 + 0x24);
                  puVar16[0x10] =
                       *(float *)(iVar20 + 0x10) * pfVar1[2] +
                       *(float *)(iVar20 + 8) * *pfVar1 + *(float *)(iVar20 + 0xc) * pfVar1[1] +
                       *(float *)(iVar20 + 0x14);
                  puVar16[0x11] = -(fVar6 * fVar7 + fVar4 * fVar5 + fVar2 * fVar3 + fVar8);
                }
                puVar16 = puVar16 + 0x1e;
                piStack_c = (int *)((int)piStack_c + 1);
                iVar15 = iVar15 + 8;
                uStack_28 = uStack_28 - 1;
              } while (uStack_28 != 0);
              uStack_28 = 0;
            }
            if (((cStack_8 != '\0') && ((char)piVar13[0x9d] != '\0')) &&
               (piStack_c = (int *)((int)piStack_c - uVar18), uVar18 != 0)) {
              iVar15 = (int)piStack_c * 8;
              puVar16 = (undefined4 *)(iVar14 + 0x38);
              piStack_c = (int *)((int)piStack_c + uVar18);
              uStack_28 = uVar18;
              do {
                iVar14 = (uint)*(ushort *)(*piVar19 + iVar15) * 0xc;
                puVar16[-0xb] = *(undefined4 *)(iVar14 + piVar13[0x90]);
                puVar16[-10] = *(undefined4 *)(iVar14 + 4 + piVar13[0x90]);
                puVar16[-9] = *(undefined4 *)(iVar14 + 8 + piVar13[0x90]);
                iVar14 = (uint)*(ushort *)(*piVar19 + 2 + iVar15) * 0xc;
                puVar16[-1] = *(undefined4 *)(iVar14 + piVar13[0x90]);
                *puVar16 = *(undefined4 *)(iVar14 + 4 + piVar13[0x90]);
                puVar16[1] = *(undefined4 *)(iVar14 + 8 + piVar13[0x90]);
                iVar14 = (uint)*(ushort *)(*piVar19 + 4 + iVar15) * 0xc;
                puVar16[9] = *(undefined4 *)(iVar14 + piVar13[0x90]);
                puVar16[10] = *(undefined4 *)(iVar14 + 4 + piVar13[0x90]);
                puVar16[0xb] = *(undefined4 *)(iVar14 + 8 + piVar13[0x90]);
                puVar16 = puVar16 + 0x1e;
                iVar15 = iVar15 + 8;
                uStack_28 = uStack_28 - 1;
              } while (uStack_28 != 0);
              uStack_28 = 0;
            }
            piStack_1c = *(int **)(iStack_10 + 0x2d0);
            if (((char)piStack_1c[2] != '\0') &&
               (piVar12 = (int *)*piStack_1c, piVar12 != (int *)0x0)) {
              (**(code **)(*piVar12 + 0x30))(piVar12);
              *(undefined1 *)(piStack_1c + 2) = 0;
            }
            (**(code **)(*piStack_14 + 0x118))(piStack_14,4,uStack_24,uVar18);
            unaff_ESI = unaff_ESI + uVar18;
          } while (uVar17 != 0);
        }
        cVar24 = (char)((uint)uVar23 >> 0x18);
        uStack_30 = uStack_30 + 1;
        uStack_2c = uStack_2c + 0x24;
      } while (uStack_30 < *(uint *)(param_1 + 0x200));
    }
  }
  else {
    uStack_28 = 0;
    if (*(int *)(param_1 + 0x200) != 0) {
      iStack_34 = 0;
      do {
        piVar11 = *(int **)(*(int *)(param_1 + 0x1fc) + 4 + iStack_34);
        piStack_c = (int *)(*(int *)(param_1 + 0x1fc) + iStack_34);
        uVar17 = piStack_c[2];
        iVar14 = 0;
        if (uVar17 != 0) {
          if (cStack_8 != '\0') {
            if (piStack_c[3] == 0) goto LAB_00460afb;
            bVar9 = *(byte *)(*(int *)(param_1 + 0x1d4) + 0x44 +
                             (uint)*(byte *)(*piVar11 + 0x28) * 0x50);
            if ((char)((uint)uVar23 >> 0x18) == '\0') {
              if ((bVar9 & 8) != 0) {
                (**(code **)(*piStack_14 + 200))(piStack_14,0x16,1);
                uVar23 = 0x1000000;
              }
            }
            else if ((bVar9 & 8) == 0) {
              (**(code **)(*piStack_14 + 200))(piStack_14,0x16,3);
              uVar23 = 0;
            }
            iVar15 = FUN_00410a40(5);
            if (iVar15 == 0) {
              (**(code **)(*piStack_14 + 0xf4))(piStack_14,1,0);
            }
            else {
              (**(code **)(iVar15 + 4))(piStack_14,1);
            }
            iVar15 = FUN_00410a40(4);
            (**(code **)(iVar15 + 4))(piStack_1c,0);
          }
          do {
            uVar25 = *(uint *)(*(int *)(iStack_10 + 0x2d0) + 0x24);
            uVar18 = uVar17;
            if (uVar25 < uVar17 * 3) {
              uVar18 = uVar25 / 3;
            }
            uStack_30 = 0;
            iVar15 = FUN_0041d0a0(uVar18 * 3,&uStack_30);
            if (*(int *)(param_1 + 0x1c4) == 0) {
              piStack_c = (int *)0x0;
              if (3 < (int)uVar18) {
                uStack_2c = 3;
                puVar16 = (undefined4 *)(iVar15 + 0x80);
                do {
                  puVar16[-0x20] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar14] + 4) * 0x10 + piVar13[0x8b]);
                  puVar16[-0x1f] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar14] + 4) * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[-0x1e] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar14] + 4) * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[-0x18] = *(undefined4 *)(piVar11[iVar14] + 0x18);
                  puVar16[-0x17] = -*(float *)(piVar11[iVar14] + 0x1c);
                  puVar16[-0x16] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar14] + 2) * 0x10 + piVar13[0x8b]);
                  puVar16[-0x15] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar14] + 2) * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[-0x14] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar14] + 2) * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[-0xe] = *(undefined4 *)(piVar11[iVar14] + 0x10);
                  puVar16[-0xd] = -*(float *)(piVar11[iVar14] + 0x14);
                  puVar16[-0xc] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar14] * 0x10 + piVar13[0x8b]);
                  puVar16[-0xb] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar14] * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[-10] = *(undefined4 *)
                                  ((uint)*(ushort *)piVar11[iVar14] * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[-4] = *(undefined4 *)(piVar11[iVar14] + 8);
                  iVar20 = iVar14 + 1;
                  puVar16[-3] = -*(float *)(piVar11[iVar14] + 0xc);
                  puVar16[-2] = *(undefined4 *)
                                 ((uint)*(ushort *)(piVar11[iVar20] + 4) * 0x10 + piVar13[0x8b]);
                  puVar16[-1] = *(undefined4 *)
                                 ((uint)*(ushort *)(piVar11[iVar20] + 4) * 0x10 + 4 + piVar13[0x8b])
                  ;
                  *puVar16 = *(undefined4 *)
                              ((uint)*(ushort *)(piVar11[iVar20] + 4) * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[6] = *(undefined4 *)(piVar11[iVar20] + 0x18);
                  puVar16[7] = -*(float *)(piVar11[iVar20] + 0x1c);
                  puVar16[8] = *(undefined4 *)
                                ((uint)*(ushort *)(piVar11[iVar20] + 2) * 0x10 + piVar13[0x8b]);
                  puVar16[9] = *(undefined4 *)
                                ((uint)*(ushort *)(piVar11[iVar20] + 2) * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[10] = *(undefined4 *)
                                 ((uint)*(ushort *)(piVar11[iVar20] + 2) * 0x10 + 8 + piVar13[0x8b])
                  ;
                  puVar16[0x10] = *(undefined4 *)(piVar11[iVar20] + 0x10);
                  puVar16[0x11] = -*(float *)(piVar11[iVar20] + 0x14);
                  puVar16[0x12] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar20] * 0x10 + piVar13[0x8b]);
                  puVar16[0x13] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar20] * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[0x14] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar20] * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[0x1a] = *(undefined4 *)(piVar11[iVar20] + 8);
                  iVar21 = iVar14 + 2;
                  puVar16[0x1b] = -*(float *)(piVar11[iVar20] + 0xc);
                  puVar16[0x1c] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar21] + 4) * 0x10 + piVar13[0x8b]);
                  puVar16[0x1d] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar21] + 4) * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[0x1e] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar21] + 4) * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[0x24] = *(undefined4 *)(piVar11[iVar21] + 0x18);
                  puVar16[0x25] = -*(float *)(piVar11[iVar21] + 0x1c);
                  puVar16[0x26] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar21] + 2) * 0x10 + piVar13[0x8b]);
                  puVar16[0x27] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar21] + 2) * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[0x28] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar21] + 2) * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[0x2e] = *(undefined4 *)(piVar11[iVar21] + 0x10);
                  puVar16[0x2f] = -*(float *)(piVar11[iVar21] + 0x14);
                  puVar16[0x30] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar21] * 0x10 + piVar13[0x8b]);
                  puVar16[0x31] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar21] * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[0x32] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar21] * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[0x38] = *(undefined4 *)(piVar11[iVar21] + 8);
                  iVar20 = iVar14 + 3;
                  puVar16[0x39] = -*(float *)(piVar11[iVar21] + 0xc);
                  puVar16[0x3a] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar20] + 4) * 0x10 + piVar13[0x8b]);
                  puVar16[0x3b] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar20] + 4) * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[0x3c] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar20] + 4) * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[0x42] = *(undefined4 *)(piVar11[iVar20] + 0x18);
                  puVar16[0x43] = -*(float *)(piVar11[iVar20] + 0x1c);
                  puVar16[0x44] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar20] + 2) * 0x10 + piVar13[0x8b]);
                  puVar16[0x45] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar20] + 2) * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[0x46] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar20] + 2) * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[0x4c] = *(undefined4 *)(piVar11[iVar20] + 0x10);
                  puVar16[0x4d] = -*(float *)(piVar11[iVar20] + 0x14);
                  puVar16[0x4e] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar20] * 0x10 + piVar13[0x8b]);
                  puVar16[0x4f] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar20] * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[0x50] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar20] * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[0x56] = *(undefined4 *)(piVar11[iVar20] + 8);
                  uStack_2c = uStack_2c + 4;
                  piStack_c = (int *)((int)piStack_c + 4);
                  puVar16[0x57] = -*(float *)(piVar11[iVar20] + 0xc);
                  iVar14 = iVar14 + 4;
                  puVar16 = puVar16 + 0x78;
                } while (uStack_2c < uVar18);
              }
              if (piStack_c < uVar18) {
                iVar20 = (int)piStack_c * 0x78;
                piStack_c = (int *)(uVar18 - (int)piStack_c);
                puVar16 = (undefined4 *)(iVar20 + 8 + iVar15);
                do {
                  puVar16[-2] = *(undefined4 *)
                                 ((uint)*(ushort *)(piVar11[iVar14] + 4) * 0x10 + piVar13[0x8b]);
                  puVar16[-1] = *(undefined4 *)
                                 ((uint)*(ushort *)(piVar11[iVar14] + 4) * 0x10 + 4 + piVar13[0x8b])
                  ;
                  *puVar16 = *(undefined4 *)
                              ((uint)*(ushort *)(piVar11[iVar14] + 4) * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[6] = *(undefined4 *)(piVar11[iVar14] + 0x18);
                  puVar16[7] = -*(float *)(piVar11[iVar14] + 0x1c);
                  puVar16[8] = *(undefined4 *)
                                ((uint)*(ushort *)(piVar11[iVar14] + 2) * 0x10 + piVar13[0x8b]);
                  puVar16[9] = *(undefined4 *)
                                ((uint)*(ushort *)(piVar11[iVar14] + 2) * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[10] = *(undefined4 *)
                                 ((uint)*(ushort *)(piVar11[iVar14] + 2) * 0x10 + 8 + piVar13[0x8b])
                  ;
                  puVar16[0x10] = *(undefined4 *)(piVar11[iVar14] + 0x10);
                  puVar16[0x11] = -*(float *)(piVar11[iVar14] + 0x14);
                  puVar16[0x12] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar14] * 0x10 + piVar13[0x8b]);
                  puVar16[0x13] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar14] * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[0x14] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar14] * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[0x1a] = *(undefined4 *)(piVar11[iVar14] + 8);
                  piVar19 = piVar11 + iVar14;
                  iVar14 = iVar14 + 1;
                  piStack_c = (int *)((int)piStack_c + -1);
                  puVar16[0x1b] = -*(float *)(*piVar19 + 0xc);
                  puVar16 = puVar16 + 0x1e;
                } while (piStack_c != (int *)0x0);
              }
            }
            else {
              piStack_c = (int *)0x0;
              if (3 < (int)uVar18) {
                uStack_2c = 3;
                puVar16 = (undefined4 *)(iVar15 + 0x80);
                do {
                  puVar16[-0x20] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar14] + 4) * 0x10 + piVar13[0x8b]);
                  puVar16[-0x1f] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar14] + 4) * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[-0x1e] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar14] + 4) * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[-0x1d] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + (uint)*(ushort *)(piVar11[iVar14] + 4) * 0xc);
                  puVar16[-0x1c] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 4 +
                        (uint)*(ushort *)(piVar11[iVar14] + 4) * 0xc);
                  puVar16[-0x1b] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 8 +
                        (uint)*(ushort *)(piVar11[iVar14] + 4) * 0xc);
                  puVar16[-0x18] = *(undefined4 *)(piVar11[iVar14] + 0x18);
                  puVar16[-0x17] = -*(float *)(piVar11[iVar14] + 0x1c);
                  puVar16[-0x16] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar14] + 2) * 0x10 + piVar13[0x8b]);
                  puVar16[-0x15] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar14] + 2) * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[-0x14] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar14] + 2) * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[-0x13] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + (uint)*(ushort *)(piVar11[iVar14] + 2) * 0xc);
                  puVar16[-0x12] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 4 +
                        (uint)*(ushort *)(piVar11[iVar14] + 2) * 0xc);
                  puVar16[-0x11] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 8 +
                        (uint)*(ushort *)(piVar11[iVar14] + 2) * 0xc);
                  puVar16[-0xe] = *(undefined4 *)(piVar11[iVar14] + 0x10);
                  puVar16[-0xd] = -*(float *)(piVar11[iVar14] + 0x14);
                  puVar16[-0xc] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar14] * 0x10 + piVar13[0x8b]);
                  puVar16[-0xb] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar14] * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[-10] = *(undefined4 *)
                                  ((uint)*(ushort *)piVar11[iVar14] * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[-9] = *(undefined4 *)
                                 (*(int *)(param_1 + 0x1c4) + (uint)*(ushort *)piVar11[iVar14] * 0xc
                                 );
                  puVar16[-8] = *(undefined4 *)
                                 (*(int *)(param_1 + 0x1c4) + 4 +
                                 (uint)*(ushort *)piVar11[iVar14] * 0xc);
                  puVar16[-7] = *(undefined4 *)
                                 (*(int *)(param_1 + 0x1c4) + 8 +
                                 (uint)*(ushort *)piVar11[iVar14] * 0xc);
                  puVar16[-4] = *(undefined4 *)(piVar11[iVar14] + 8);
                  iVar20 = iVar14 + 1;
                  puVar16[-3] = -*(float *)(piVar11[iVar14] + 0xc);
                  puVar16[-2] = *(undefined4 *)
                                 ((uint)*(ushort *)(piVar11[iVar20] + 4) * 0x10 + piVar13[0x8b]);
                  puVar16[-1] = *(undefined4 *)
                                 ((uint)*(ushort *)(piVar11[iVar20] + 4) * 0x10 + 4 + piVar13[0x8b])
                  ;
                  *puVar16 = *(undefined4 *)
                              ((uint)*(ushort *)(piVar11[iVar20] + 4) * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[1] = *(undefined4 *)
                                (*(int *)(param_1 + 0x1c4) +
                                (uint)*(ushort *)(piVar11[iVar20] + 4) * 0xc);
                  puVar16[2] = *(undefined4 *)
                                (*(int *)(param_1 + 0x1c4) + 4 +
                                (uint)*(ushort *)(piVar11[iVar20] + 4) * 0xc);
                  puVar16[3] = *(undefined4 *)
                                (*(int *)(param_1 + 0x1c4) + 8 +
                                (uint)*(ushort *)(piVar11[iVar20] + 4) * 0xc);
                  puVar16[6] = *(undefined4 *)(piVar11[iVar20] + 0x18);
                  puVar16[7] = -*(float *)(piVar11[iVar20] + 0x1c);
                  puVar16[8] = *(undefined4 *)
                                ((uint)*(ushort *)(piVar11[iVar20] + 2) * 0x10 + piVar13[0x8b]);
                  puVar16[9] = *(undefined4 *)
                                ((uint)*(ushort *)(piVar11[iVar20] + 2) * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[10] = *(undefined4 *)
                                 ((uint)*(ushort *)(piVar11[iVar20] + 2) * 0x10 + 8 + piVar13[0x8b])
                  ;
                  puVar16[0xb] = *(undefined4 *)
                                  (*(int *)(param_1 + 0x1c4) +
                                  (uint)*(ushort *)(piVar11[iVar20] + 2) * 0xc);
                  puVar16[0xc] = *(undefined4 *)
                                  (*(int *)(param_1 + 0x1c4) + 4 +
                                  (uint)*(ushort *)(piVar11[iVar20] + 2) * 0xc);
                  puVar16[0xd] = *(undefined4 *)
                                  (*(int *)(param_1 + 0x1c4) + 8 +
                                  (uint)*(ushort *)(piVar11[iVar20] + 2) * 0xc);
                  puVar16[0x10] = *(undefined4 *)(piVar11[iVar20] + 0x10);
                  puVar16[0x11] = -*(float *)(piVar11[iVar20] + 0x14);
                  puVar16[0x12] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar20] * 0x10 + piVar13[0x8b]);
                  puVar16[0x13] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar20] * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[0x14] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar20] * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[0x15] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + (uint)*(ushort *)piVar11[iVar20] * 0xc);
                  puVar16[0x16] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 4 + (uint)*(ushort *)piVar11[iVar20] * 0xc);
                  puVar16[0x17] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 8 + (uint)*(ushort *)piVar11[iVar20] * 0xc);
                  puVar16[0x1a] = *(undefined4 *)(piVar11[iVar20] + 8);
                  iVar21 = iVar14 + 2;
                  puVar16[0x1b] = -*(float *)(piVar11[iVar20] + 0xc);
                  puVar16[0x1c] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar21] + 4) * 0x10 + piVar13[0x8b]);
                  puVar16[0x1d] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar21] + 4) * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[0x1e] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar21] + 4) * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[0x1f] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + (uint)*(ushort *)(piVar11[iVar21] + 4) * 0xc);
                  puVar16[0x20] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 4 +
                        (uint)*(ushort *)(piVar11[iVar21] + 4) * 0xc);
                  puVar16[0x21] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 8 +
                        (uint)*(ushort *)(piVar11[iVar21] + 4) * 0xc);
                  puVar16[0x24] = *(undefined4 *)(piVar11[iVar21] + 0x18);
                  puVar16[0x25] = -*(float *)(piVar11[iVar21] + 0x1c);
                  puVar16[0x26] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar21] + 2) * 0x10 + piVar13[0x8b]);
                  puVar16[0x27] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar21] + 2) * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[0x28] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar21] + 2) * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[0x29] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + (uint)*(ushort *)(piVar11[iVar21] + 2) * 0xc);
                  puVar16[0x2a] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 4 +
                        (uint)*(ushort *)(piVar11[iVar21] + 2) * 0xc);
                  puVar16[0x2b] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 8 +
                        (uint)*(ushort *)(piVar11[iVar21] + 2) * 0xc);
                  puVar16[0x2e] = *(undefined4 *)(piVar11[iVar21] + 0x10);
                  puVar16[0x2f] = -*(float *)(piVar11[iVar21] + 0x14);
                  puVar16[0x30] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar21] * 0x10 + piVar13[0x8b]);
                  puVar16[0x31] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar21] * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[0x32] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar21] * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[0x33] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + (uint)*(ushort *)piVar11[iVar21] * 0xc);
                  puVar16[0x34] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 4 + (uint)*(ushort *)piVar11[iVar21] * 0xc);
                  puVar16[0x35] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 8 + (uint)*(ushort *)piVar11[iVar21] * 0xc);
                  puVar16[0x38] = *(undefined4 *)(piVar11[iVar21] + 8);
                  iVar20 = iVar14 + 3;
                  puVar16[0x39] = -*(float *)(piVar11[iVar21] + 0xc);
                  puVar16[0x3a] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar20] + 4) * 0x10 + piVar13[0x8b]);
                  puVar16[0x3b] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar20] + 4) * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[0x3c] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar20] + 4) * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[0x3d] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + (uint)*(ushort *)(piVar11[iVar20] + 4) * 0xc);
                  puVar16[0x3e] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 4 +
                        (uint)*(ushort *)(piVar11[iVar20] + 4) * 0xc);
                  puVar16[0x3f] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 8 +
                        (uint)*(ushort *)(piVar11[iVar20] + 4) * 0xc);
                  puVar16[0x42] = *(undefined4 *)(piVar11[iVar20] + 0x18);
                  puVar16[0x43] = -*(float *)(piVar11[iVar20] + 0x1c);
                  puVar16[0x44] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar20] + 2) * 0x10 + piVar13[0x8b]);
                  puVar16[0x45] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar20] + 2) * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[0x46] =
                       *(undefined4 *)
                        ((uint)*(ushort *)(piVar11[iVar20] + 2) * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[0x47] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + (uint)*(ushort *)(piVar11[iVar20] + 2) * 0xc);
                  puVar16[0x48] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 4 +
                        (uint)*(ushort *)(piVar11[iVar20] + 2) * 0xc);
                  puVar16[0x49] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 8 +
                        (uint)*(ushort *)(piVar11[iVar20] + 2) * 0xc);
                  puVar16[0x4c] = *(undefined4 *)(piVar11[iVar20] + 0x10);
                  puVar16[0x4d] = -*(float *)(piVar11[iVar20] + 0x14);
                  puVar16[0x4e] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar20] * 0x10 + piVar13[0x8b]);
                  puVar16[0x4f] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar20] * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[0x50] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar20] * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[0x51] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + (uint)*(ushort *)piVar11[iVar20] * 0xc);
                  puVar16[0x52] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 4 + (uint)*(ushort *)piVar11[iVar20] * 0xc);
                  puVar16[0x53] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 8 + (uint)*(ushort *)piVar11[iVar20] * 0xc);
                  puVar16[0x56] = *(undefined4 *)(piVar11[iVar20] + 8);
                  uStack_2c = uStack_2c + 4;
                  piStack_c = (int *)((int)piStack_c + 4);
                  puVar16[0x57] = -*(float *)(piVar11[iVar20] + 0xc);
                  iVar14 = iVar14 + 4;
                  puVar16 = puVar16 + 0x78;
                } while (uStack_2c < uVar18);
              }
              if (piStack_c < uVar18) {
                iVar20 = (int)piStack_c * 0x78;
                piStack_c = (int *)(uVar18 - (int)piStack_c);
                puVar16 = (undefined4 *)(iVar20 + 8 + iVar15);
                do {
                  puVar16[-2] = *(undefined4 *)
                                 ((uint)*(ushort *)(piVar11[iVar14] + 4) * 0x10 + piVar13[0x8b]);
                  puVar16[-1] = *(undefined4 *)
                                 ((uint)*(ushort *)(piVar11[iVar14] + 4) * 0x10 + 4 + piVar13[0x8b])
                  ;
                  *puVar16 = *(undefined4 *)
                              ((uint)*(ushort *)(piVar11[iVar14] + 4) * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[1] = *(undefined4 *)
                                (*(int *)(param_1 + 0x1c4) +
                                (uint)*(ushort *)(piVar11[iVar14] + 4) * 0xc);
                  puVar16[2] = *(undefined4 *)
                                (*(int *)(param_1 + 0x1c4) + 4 +
                                (uint)*(ushort *)(piVar11[iVar14] + 4) * 0xc);
                  puVar16[3] = *(undefined4 *)
                                (*(int *)(param_1 + 0x1c4) + 8 +
                                (uint)*(ushort *)(piVar11[iVar14] + 4) * 0xc);
                  puVar16[6] = *(undefined4 *)(piVar11[iVar14] + 0x18);
                  puVar16[7] = -*(float *)(piVar11[iVar14] + 0x1c);
                  puVar16[8] = *(undefined4 *)
                                ((uint)*(ushort *)(piVar11[iVar14] + 2) * 0x10 + piVar13[0x8b]);
                  puVar16[9] = *(undefined4 *)
                                ((uint)*(ushort *)(piVar11[iVar14] + 2) * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[10] = *(undefined4 *)
                                 ((uint)*(ushort *)(piVar11[iVar14] + 2) * 0x10 + 8 + piVar13[0x8b])
                  ;
                  puVar16[0xb] = *(undefined4 *)
                                  (*(int *)(param_1 + 0x1c4) +
                                  (uint)*(ushort *)(piVar11[iVar14] + 2) * 0xc);
                  puVar16[0xc] = *(undefined4 *)
                                  (*(int *)(param_1 + 0x1c4) + 4 +
                                  (uint)*(ushort *)(piVar11[iVar14] + 2) * 0xc);
                  puVar16[0xd] = *(undefined4 *)
                                  (*(int *)(param_1 + 0x1c4) + 8 +
                                  (uint)*(ushort *)(piVar11[iVar14] + 2) * 0xc);
                  puVar16[0x10] = *(undefined4 *)(piVar11[iVar14] + 0x10);
                  puVar16[0x11] = -*(float *)(piVar11[iVar14] + 0x14);
                  puVar16[0x12] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar14] * 0x10 + piVar13[0x8b]);
                  puVar16[0x13] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar14] * 0x10 + 4 + piVar13[0x8b]);
                  puVar16[0x14] =
                       *(undefined4 *)((uint)*(ushort *)piVar11[iVar14] * 0x10 + 8 + piVar13[0x8b]);
                  puVar16[0x15] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + (uint)*(ushort *)piVar11[iVar14] * 0xc);
                  puVar16[0x16] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 4 + (uint)*(ushort *)piVar11[iVar14] * 0xc);
                  puVar16[0x17] =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c4) + 8 + (uint)*(ushort *)piVar11[iVar14] * 0xc);
                  puVar16[0x1a] = *(undefined4 *)(piVar11[iVar14] + 8);
                  piVar19 = piVar11 + iVar14;
                  iVar14 = iVar14 + 1;
                  piStack_c = (int *)((int)piStack_c + -1);
                  puVar16[0x1b] = -*(float *)(*piVar19 + 0xc);
                  puVar16 = puVar16 + 0x1e;
                } while (piStack_c != (int *)0x0);
              }
            }
            if ((char)piVar13[0x9d] != '\0') {
              iVar14 = iVar14 - uVar18;
              uVar25 = 0;
              if (3 < (int)uVar18) {
                piStack_c = piVar11 + iVar14 + 2;
                uStack_2c = 3;
                puVar16 = (undefined4 *)(iVar15 + 0x88);
                do {
                  puVar16[-0x1f] =
                       *(undefined4 *)(piVar13[0x90] + (uint)*(ushort *)(piStack_c[-2] + 4) * 0xc);
                  puVar16[-0x1e] =
                       *(undefined4 *)
                        (piVar13[0x90] + 4 + (uint)*(ushort *)(piStack_c[-2] + 4) * 0xc);
                  puVar16[-0x1d] =
                       *(undefined4 *)
                        (piVar13[0x90] + 8 + (uint)*(ushort *)(piStack_c[-2] + 4) * 0xc);
                  puVar16[-0x15] =
                       *(undefined4 *)(piVar13[0x90] + (uint)*(ushort *)(piStack_c[-2] + 2) * 0xc);
                  puVar16[-0x14] =
                       *(undefined4 *)
                        (piVar13[0x90] + 4 + (uint)*(ushort *)(piStack_c[-2] + 2) * 0xc);
                  puVar16[-0x13] =
                       *(undefined4 *)
                        (piVar13[0x90] + 8 + (uint)*(ushort *)(piStack_c[-2] + 2) * 0xc);
                  puVar16[-0xb] =
                       *(undefined4 *)(piVar13[0x90] + (uint)*(ushort *)piStack_c[-2] * 0xc);
                  puVar16[-10] = *(undefined4 *)
                                  (piVar13[0x90] + 4 + (uint)*(ushort *)piStack_c[-2] * 0xc);
                  puVar16[-9] = *(undefined4 *)
                                 (piVar13[0x90] + 8 + (uint)*(ushort *)piStack_c[-2] * 0xc);
                  puVar16[-1] = *(undefined4 *)
                                 (piVar13[0x90] + (uint)*(ushort *)(piStack_c[-1] + 4) * 0xc);
                  *puVar16 = *(undefined4 *)
                              (piVar13[0x90] + 4 + (uint)*(ushort *)(piStack_c[-1] + 4) * 0xc);
                  puVar16[1] = *(undefined4 *)
                                (piVar13[0x90] + 8 + (uint)*(ushort *)(piStack_c[-1] + 4) * 0xc);
                  puVar16[9] = *(undefined4 *)
                                (piVar13[0x90] + (uint)*(ushort *)(piStack_c[-1] + 2) * 0xc);
                  puVar16[10] = *(undefined4 *)
                                 (piVar13[0x90] + 4 + (uint)*(ushort *)(piStack_c[-1] + 2) * 0xc);
                  puVar16[0xb] = *(undefined4 *)
                                  (piVar13[0x90] + 8 + (uint)*(ushort *)(piStack_c[-1] + 2) * 0xc);
                  puVar16[0x13] =
                       *(undefined4 *)(piVar13[0x90] + (uint)*(ushort *)piStack_c[-1] * 0xc);
                  puVar16[0x14] =
                       *(undefined4 *)(piVar13[0x90] + 4 + (uint)*(ushort *)piStack_c[-1] * 0xc);
                  puVar16[0x15] =
                       *(undefined4 *)(piVar13[0x90] + 8 + (uint)*(ushort *)piStack_c[-1] * 0xc);
                  puVar16[0x1d] =
                       *(undefined4 *)(piVar13[0x90] + (uint)*(ushort *)(*piStack_c + 4) * 0xc);
                  puVar16[0x1e] =
                       *(undefined4 *)(piVar13[0x90] + 4 + (uint)*(ushort *)(*piStack_c + 4) * 0xc);
                  puVar16[0x1f] =
                       *(undefined4 *)(piVar13[0x90] + 8 + (uint)*(ushort *)(*piStack_c + 4) * 0xc);
                  puVar16[0x27] =
                       *(undefined4 *)(piVar13[0x90] + (uint)*(ushort *)(*piStack_c + 2) * 0xc);
                  puVar16[0x28] =
                       *(undefined4 *)(piVar13[0x90] + 4 + (uint)*(ushort *)(*piStack_c + 2) * 0xc);
                  puVar16[0x29] =
                       *(undefined4 *)(piVar13[0x90] + 8 + (uint)*(ushort *)(*piStack_c + 2) * 0xc);
                  puVar16[0x31] = *(undefined4 *)(piVar13[0x90] + (uint)*(ushort *)*piStack_c * 0xc)
                  ;
                  puVar16[0x32] =
                       *(undefined4 *)(piVar13[0x90] + 4 + (uint)*(ushort *)*piStack_c * 0xc);
                  puVar16[0x33] =
                       *(undefined4 *)(piVar13[0x90] + 8 + (uint)*(ushort *)*piStack_c * 0xc);
                  puVar16[0x3b] =
                       *(undefined4 *)(piVar13[0x90] + (uint)*(ushort *)(piStack_c[1] + 4) * 0xc);
                  puVar16[0x3c] =
                       *(undefined4 *)
                        (piVar13[0x90] + 4 + (uint)*(ushort *)(piStack_c[1] + 4) * 0xc);
                  puVar16[0x3d] =
                       *(undefined4 *)
                        (piVar13[0x90] + 8 + (uint)*(ushort *)(piStack_c[1] + 4) * 0xc);
                  puVar16[0x45] =
                       *(undefined4 *)(piVar13[0x90] + (uint)*(ushort *)(piStack_c[1] + 2) * 0xc);
                  puVar16[0x46] =
                       *(undefined4 *)
                        (piVar13[0x90] + 4 + (uint)*(ushort *)(piStack_c[1] + 2) * 0xc);
                  puVar16[0x47] =
                       *(undefined4 *)
                        (piVar13[0x90] + 8 + (uint)*(ushort *)(piStack_c[1] + 2) * 0xc);
                  puVar16[0x4f] =
                       *(undefined4 *)(piVar13[0x90] + (uint)*(ushort *)piStack_c[1] * 0xc);
                  puVar16[0x50] =
                       *(undefined4 *)(piVar13[0x90] + 4 + (uint)*(ushort *)piStack_c[1] * 0xc);
                  puVar16[0x51] =
                       *(undefined4 *)(piVar13[0x90] + 8 + (uint)*(ushort *)piStack_c[1] * 0xc);
                  uVar25 = uVar25 + 4;
                  piStack_c = piStack_c + 4;
                  uStack_2c = uStack_2c + 4;
                  puVar16 = puVar16 + 0x78;
                  iVar14 = iVar14 + 4;
                } while (uStack_2c < uVar18);
              }
              if (uVar25 < uVar18) {
                puVar16 = (undefined4 *)(uVar25 * 0x78 + 0x10 + iVar15);
                piStack_c = (int *)(uVar18 - uVar25);
                do {
                  puVar16[-1] = *(undefined4 *)
                                 (piVar13[0x90] + (uint)*(ushort *)(piVar11[iVar14] + 4) * 0xc);
                  *puVar16 = *(undefined4 *)
                              (piVar13[0x90] + 4 + (uint)*(ushort *)(piVar11[iVar14] + 4) * 0xc);
                  puVar16[1] = *(undefined4 *)
                                (piVar13[0x90] + 8 + (uint)*(ushort *)(piVar11[iVar14] + 4) * 0xc);
                  puVar16[9] = *(undefined4 *)
                                (piVar13[0x90] + (uint)*(ushort *)(piVar11[iVar14] + 2) * 0xc);
                  puVar16[10] = *(undefined4 *)
                                 (piVar13[0x90] + 4 + (uint)*(ushort *)(piVar11[iVar14] + 2) * 0xc);
                  puVar16[0xb] = *(undefined4 *)
                                  (piVar13[0x90] + 8 + (uint)*(ushort *)(piVar11[iVar14] + 2) * 0xc)
                  ;
                  puVar16[0x13] =
                       *(undefined4 *)(piVar13[0x90] + (uint)*(ushort *)piVar11[iVar14] * 0xc);
                  puVar16[0x14] =
                       *(undefined4 *)(piVar13[0x90] + 4 + (uint)*(ushort *)piVar11[iVar14] * 0xc);
                  puVar16[0x15] =
                       *(undefined4 *)(piVar13[0x90] + 8 + (uint)*(ushort *)piVar11[iVar14] * 0xc);
                  iVar14 = iVar14 + 1;
                  puVar16 = puVar16 + 0x1e;
                  piStack_c = (int *)((int)piStack_c + -1);
                } while (piStack_c != (int *)0x0);
              }
            }
            piStack_c = *(int **)(iStack_10 + 0x2d0);
            if (((char)piStack_c[2] != '\0') && (piVar19 = (int *)*piStack_c, piVar19 != (int *)0x0)
               ) {
              (**(code **)(*piVar19 + 0x30))(piVar19);
              *(undefined1 *)(piStack_c + 2) = 0;
            }
            (**(code **)(*piStack_14 + 0x118))(piStack_14,4,uStack_30,uVar18);
            unaff_ESI = unaff_ESI + uVar18;
            uVar17 = uVar17 - uVar18;
          } while (uVar17 != 0);
        }
LAB_00460afb:
        cVar24 = (char)((uint)uVar23 >> 0x18);
        uStack_28 = uStack_28 + 1;
        iStack_34 = iStack_34 + 0x24;
      } while (uStack_28 < *(uint *)(param_1 + 0x200));
    }
  }
  if (cStack_8 != '\0') {
    if (cVar24 != '\0') {
      (**(code **)(*piStack_14 + 200))(piStack_14,0x16,3);
    }
    (**(code **)(*piStack_14 + 200))(piStack_14,0x1c,uStack_20);
  }
  return unaff_ESI;
}




/* Function: FUN_004610b0 */

uint __thiscall FUN_004610b0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  char local_9;
  
  iVar1 = (int)param_3;
  FUN_0041cb80();
  uVar2 = FUN_004cf110();
  if (*(int *)(param_1 + 0x2cc) <= (int)(uVar2 - *(int *)(param_1 + 0x2c8))) {
    *(uint *)(param_1 + 0x2c8) = uVar2;
    puVar4 = (undefined4 *)CONCAT31((int3)(uVar2 >> 8),*(char *)((int)param_3 + 0x90));
    local_9 = '\0';
    if (*(char *)((int)param_3 + 0x90) == '\0') {
      if ((*(int *)(param_1 + 700) == 0) ||
         (*(int *)(param_1 + 0x2c0) - *(int *)(param_1 + 700) >> 2 == 0)) {
        puVar4 = (undefined4 *)FUN_00445200(param_3);
        local_9 = (char)puVar4;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x1b0);
        if (((iVar5 == 0) || (*(int *)(param_1 + 0x1b4) - iVar5 >> 2 == 0)) ||
           (puVar4 = *(undefined4 **)((int)param_3 + 0x20c), (int)puVar4 < 0)) {
          iVar5 = FUN_0043f8a0();
          puVar4 = (undefined4 *)FUN_0043f890();
          puVar9 = (undefined4 *)0x0;
          if (3 < (int)puVar4) {
            param_3 = (undefined4 *)0x3;
            iVar8 = 0;
            puVar7 = (undefined4 *)(iVar5 + 8);
            do {
              *(undefined4 *)(iVar8 + *(int *)(iVar1 + 0x22c)) = puVar7[-2];
              *(undefined4 *)(iVar8 + 4 + *(int *)(iVar1 + 0x22c)) = puVar7[-1];
              *(undefined4 *)(iVar8 + 8 + *(int *)(iVar1 + 0x22c)) = *puVar7;
              *(undefined4 *)(iVar8 + 0x10 + *(int *)(iVar1 + 0x22c)) = puVar7[1];
              *(undefined4 *)(iVar8 + 0x14 + *(int *)(iVar1 + 0x22c)) = puVar7[2];
              *(undefined4 *)(iVar8 + 0x18 + *(int *)(iVar1 + 0x22c)) = puVar7[3];
              *(undefined4 *)(iVar8 + 0x20 + *(int *)(iVar1 + 0x22c)) = puVar7[4];
              *(undefined4 *)(iVar8 + 0x24 + *(int *)(iVar1 + 0x22c)) = puVar7[5];
              *(undefined4 *)(iVar8 + 0x28 + *(int *)(iVar1 + 0x22c)) = puVar7[6];
              *(undefined4 *)(iVar8 + 0x30 + *(int *)(iVar1 + 0x22c)) = puVar7[7];
              *(undefined4 *)(iVar8 + 0x34 + *(int *)(iVar1 + 0x22c)) = puVar7[8];
              *(undefined4 *)(iVar8 + 0x38 + *(int *)(iVar1 + 0x22c)) = puVar7[9];
              param_3 = param_3 + 1;
              puVar9 = puVar9 + 1;
              puVar7 = puVar7 + 0xc;
              iVar8 = iVar8 + 0x40;
            } while (param_3 < puVar4);
          }
          if (puVar9 < puVar4) {
            iVar8 = (int)puVar9 << 4;
            puVar7 = (undefined4 *)(iVar5 + 8 + (int)puVar9 * 0xc);
            iVar5 = (int)puVar4 - (int)puVar9;
            do {
              *(undefined4 *)(iVar8 + *(int *)(iVar1 + 0x22c)) = puVar7[-2];
              *(undefined4 *)(iVar8 + 4 + *(int *)(iVar1 + 0x22c)) = puVar7[-1];
              *(undefined4 *)(iVar8 + 8 + *(int *)(iVar1 + 0x22c)) = *puVar7;
              puVar7 = puVar7 + 3;
              iVar8 = iVar8 + 0x10;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            puVar4 = (undefined4 *)0x0;
          }
        }
        else {
          iVar5 = *(int *)(iVar5 + (int)puVar4 * 4);
          if (iVar5 != 0) {
            uVar6 = *(undefined4 *)((int)param_3 + 0x22c);
            uVar3 = FUN_004cf110(uVar6,param_3);
            puVar4 = (undefined4 *)FUN_00444d10(iVar5,uVar3,uVar6,param_3);
          }
        }
      }
    }
    puVar9 = *(undefined4 **)(param_1 + 700);
    if (puVar9 != *(undefined4 **)(param_1 + 0x2c0)) {
      do {
        iVar5 = *(int *)*puVar9;
        uVar6 = FUN_0043f890();
        (**(code **)(iVar5 + 8))(param_2,param_1,iVar1,*(undefined4 *)(iVar1 + 0x22c),uVar6);
        puVar4 = *(undefined4 **)(param_1 + 0x2c0);
        puVar9 = puVar9 + 1;
      } while (puVar9 != puVar4);
    }
    uVar2 = CONCAT31((int3)((uint)puVar4 >> 8),local_9);
    if ((local_9 != '\0') ||
       ((uVar2 = *(uint *)(param_1 + 700), uVar2 != 0 &&
        ((int)(*(int *)(param_1 + 0x2c0) - uVar2) >> 2 != 0)))) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}




/* Function: FUN_00461340 */

void __thiscall FUN_00461340(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057c800;
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
      FUN_004443b0();
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




/* Function: FUN_004615e0 */

void __thiscall FUN_004615e0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = param_2;
  puVar4 = *(undefined4 **)(param_1 + 700);
  if (puVar4 != *(undefined4 **)(param_1 + 0x2c0)) {
    do {
      iVar2 = (*(code *)**(undefined4 **)*puVar4)();
      iVar3 = (**(code **)*puVar1)();
      if (iVar3 == iVar2) {
        return;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined4 **)(param_1 + 0x2c0));
  }
  iVar2 = *(int *)(param_1 + 700);
  if ((iVar2 != 0) &&
     ((uint)(*(int *)(param_1 + 0x2c0) - iVar2 >> 2) <
      (uint)(*(int *)(param_1 + 0x2c4) - iVar2 >> 2))) {
    iVar2 = *(int *)(param_1 + 0x2c0);
    FUN_004520c0(iVar2,1,&param_2,param_1 + 0x2b8,param_2);
    *(int *)(param_1 + 0x2c0) = iVar2 + 4;
    return;
  }
  FUN_00461340(*(undefined4 *)(param_1 + 0x2c0),1,&param_2);
  return;
}




/* Function: FUN_00461690 */

void FUN_00461690(int *param_1)

{
  (**(code **)(*param_1 + 0xfc))(param_1,0,2,2);
  (**(code **)(*param_1 + 0xfc))(param_1,0,1,7);
  (**(code **)(*param_1 + 0xfc))(param_1,0,3,3);
  (**(code **)(*param_1 + 0xfc))(param_1,0,5,2);
  (**(code **)(*param_1 + 0xfc))(param_1,0,4,2);
  (**(code **)(*param_1 + 0xfc))(param_1,1,2,2);
  (**(code **)(*param_1 + 0xfc))(param_1,1,1,4);
  (**(code **)(*param_1 + 0xfc))(param_1,1,3,1);
  (**(code **)(*param_1 + 0xfc))(param_1,1,4,1);
  (**(code **)(*param_1 + 0xfc))(param_1,1,0xb,0);
  (**(code **)(*param_1 + 0xfc))(param_1,2,2,0);
  (**(code **)(*param_1 + 0xfc))(param_1,2,1,4);
  (**(code **)(*param_1 + 0xfc))(param_1,2,3,1);
  (**(code **)(*param_1 + 0xfc))(param_1,2,4,1);
  return;
}




/* Function: FUN_00461770 */

void __thiscall FUN_00461770(int param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  byte *pbVar2;
  float unaff_ESI;
  float unaff_retaddr;
  
  *param_4 = (float)(*(int *)(param_1 + 0x1e4) * param_2);
  pbVar2 = (byte *)(**(code **)(**(int **)(param_1 + 0x88) + 8))(param_2,param_3);
  param_4[1] = (float)(int)(*(int *)(param_1 + 0x1f8) * (uint)*pbVar2);
  iVar1 = *(int *)(param_1 + 0x1e4);
  param_4[6] = unaff_ESI;
  param_4[7] = unaff_retaddr;
  param_4[3] = 0.0;
  param_4[4] = 1.0;
  param_4[2] = (float)(iVar1 * param_3);
  param_4[5] = 0.0;
  return;
}




/* Function: FUN_00461830 */

undefined4 FUN_00461830(undefined4 *param_1)

{
  int iVar1;
  SIZE_T dwBytes;
  HGLOBAL hMem;
  HDC pHVar2;
  HBITMAP h;
  HDC hdc;
  uint uVar3;
  uint uVar4;
  HANDLE unaff_EBX;
  HGDIOBJ unaff_ESI;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *unaff_retaddr;
  LPSTREAM pIStack_60;
  undefined4 *puStack_5c;
  int *piStack_58;
  int *local_50;
  undefined1 auStack_4c [4];
  HGLOBAL local_48;
  short sStack_44;
  int iStack_40;
  undefined4 *puStack_38;
  BITMAPINFO BStack_34;
  int *piStack_4;
  
  iVar1 = FUN_00410660(param_1,&DAT_00582818);
  if (iVar1 != 0) {
    FUN_0040f0b0(iVar1,0,2);
    dwBytes = FUN_0040f110(iVar1);
    hMem = GlobalAlloc(2,dwBytes);
    local_48 = hMem;
    if (hMem != (HGLOBAL)0x0) {
      local_50 = GlobalLock(hMem);
      FUN_0040f0b0(iVar1,0,0);
      FUN_0040f000(local_50,1,dwBytes,iVar1);
      GlobalUnlock(hMem);
      FUN_0040efb0(iVar1);
      pIStack_60 = (IStream *)0x0;
      CreateStreamOnHGlobal(hMem,1,&pIStack_60);
      OleLoadPicture(pIStack_60,dwBytes,0,&DAT_0058f800,auStack_4c);
      (*pIStack_60->lpVtbl->Release)(pIStack_60);
      (**(code **)(*local_50 + 0xc))(local_50,&puStack_5c);
      GetObjectA(unaff_EBX,0x18,auStack_4c);
      *piStack_4 = (int)(short)local_48;
      *unaff_retaddr = (int)sStack_44;
      pHVar2 = CreateCompatibleDC((HDC)0x0);
      BStack_34.bmiHeader.biWidth = *piStack_4;
      BStack_34.bmiHeader.biHeight = *unaff_retaddr;
      BStack_34.bmiHeader.biSize = 0x28;
      BStack_34.bmiHeader.biPlanes = 1;
      BStack_34.bmiHeader.biBitCount = 0x18;
      BStack_34.bmiHeader.biCompression = 0;
      BStack_34.bmiHeader.biSizeImage = 0;
      BStack_34.bmiHeader.biXPelsPerMeter = 0;
      BStack_34.bmiHeader.biYPelsPerMeter = 0;
      BStack_34.bmiHeader.biClrUsed = 0;
      BStack_34.bmiHeader.biClrImportant = 0;
      h = CreateDIBSection(pHVar2,&BStack_34,0,&local_50,(HANDLE)0x0,0);
      pHVar2 = CreateCompatibleDC((HDC)0x0);
      hdc = CreateCompatibleDC((HDC)0x0);
      puStack_5c = SelectObject(pHVar2,h);
      pIStack_60 = SelectObject(hdc,unaff_EBX);
      BitBlt(pHVar2,0,0,*piStack_4,*unaff_retaddr,hdc,0,0,0xcc0020);
      SelectObject(pHVar2,puStack_5c);
      SelectObject(hdc,pIStack_60);
      DeleteDC(pHVar2);
      DeleteDC(hdc);
      GetObjectA(h,0x18,auStack_4c);
      puStack_5c = operator_new(*piStack_4 * *unaff_retaddr * 3,(nothrow_t *)&DAT_005b6164);
      *param_1 = puStack_5c;
      pIStack_60 = (LPSTREAM)0x0;
      if (0 < *unaff_retaddr) {
        uVar4 = *piStack_4 * 3;
        do {
          puVar5 = puStack_38;
          puVar6 = puStack_5c;
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
          puStack_38 = (undefined4 *)((int)puStack_38 + iStack_40);
          uVar4 = *piStack_4 * 3;
          pIStack_60 = (LPSTREAM)((int)&pIStack_60->lpVtbl + 1);
          puStack_5c = (undefined4 *)((int)puStack_5c + uVar4);
        } while ((int)pIStack_60 < *unaff_retaddr);
      }
      (**(code **)(*piStack_58 + 8))(piStack_58);
      DeleteObject(unaff_ESI);
      GlobalFree(piStack_58);
      return 1;
    }
    FUN_0040efb0(iVar1);
  }
  return 0;
}




/* Function: FUN_00461ac0 */

int __thiscall FUN_00461ac0(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 8) == 0x401) {
    return param_3 * 0x401 + *(int *)(param_1 + 4) + param_2;
  }
  return *(int *)(param_1 + 8) * param_3 + *(int *)(param_1 + 4) + param_2;
}




/* Function: FUN_00461af0 */

void __fastcall FUN_00461af0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0058a774;
  operator_delete__((void *)param_1[1]);
  return;
}




/* Function: FUN_00461b50 */

undefined4 * __thiscall FUN_00461b50(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_0058a768;
  operator_delete__((void *)param_1[1]);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00461b80 */

undefined4 * __thiscall FUN_00461b80(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_0058a774;
  operator_delete__((void *)param_1[1]);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00461bb0 */

void FUN_00461bb0(int *param_1)

{
  char cVar1;
  
  param_1 = (int *)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x11);
  while (cVar1 == '\0') {
    param_1 = (int *)*param_1;
    cVar1 = *(char *)((int)param_1 + 0x11);
  }
  return;
}




/* Function: FUN_00461bd0 */

void FUN_00461bd0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x11);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x11);
  }
  return;
}




/* Function: FUN_00461bf0 */

void __fastcall FUN_00461bf0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0xffff;
  return;
}




/* Function: FUN_00461c10 */

void __thiscall FUN_00461c10(float *param_1,undefined4 param_2,float *param_3)

{
  float *pfVar1;
  undefined1 local_c [12];
  
  pfVar1 = (float *)FUN_0041d510(local_c);
  if (pfVar1 != param_1) {
    *param_1 = *pfVar1;
    param_1[1] = pfVar1[1];
    param_1[2] = pfVar1[2];
  }
  param_1[3] = *param_3 * *param_1 + param_3[1] * param_1[1] + param_3[2] * param_1[2];
  return;
}




/* Function: FUN_00461c60 */

void __thiscall FUN_00461c60(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  byte *pbVar5;
  float unaff_EDI;
  
  pfVar4 = (float *)(float)(*(int *)(param_1 + 0x1e4) * param_4);
  pbVar5 = (byte *)(**(code **)(**(int **)(param_1 + 0x88) + 8))(param_3,param_4);
  bVar1 = *pbVar5;
  iVar2 = *(int *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e4);
  pfVar4[2] = unaff_EDI;
  *pfVar4 = (float)(iVar3 * param_3);
  pfVar4[1] = (float)(int)(iVar2 * (uint)bVar1);
  return;
}




/* Function: FUN_00461cd0 */

int FUN_00461cd0(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBP;
  
  param_3 = param_3 + param_4;
  param_5 = param_5 + param_6;
  iVar1 = param_3 + param_6;
  iVar2 = param_5 - param_4;
  if ((((-1 < iVar1) && (iVar1 < param_1[2])) && (-1 < iVar2)) && (iVar2 < param_1[3])) {
    param_4 = param_5 + param_4;
    if (((-1 < param_3 - param_6) && (param_3 - param_6 < param_1[2])) &&
       ((-1 < param_4 && (param_4 < param_1[3])))) {
      (**(code **)(*param_1 + 4))(iVar1,iVar2);
      pbVar4 = (byte *)(**(code **)(*param_1 + 4))(param_1,param_4);
      bVar3 = *pbVar4;
      pbVar4 = (byte *)(**(code **)(*param_1 + 4))(param_3,param_5);
      uVar5 = (uint)*pbVar4 - (int)(unaff_EBP + (uint)bVar3) / 2;
      uVar6 = (int)uVar5 >> 0x1f;
      return (uVar5 ^ uVar6) - uVar6;
    }
  }
  return 0;
}




/* Function: FUN_00461d80 */

void FUN_00461d80(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7,int param_8)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  byte *pbVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  int local_2c;
  int local_24;
  int iStack_20;
  int iStack_1c;
  undefined1 auStack_18 [12];
  undefined4 *puStack_c;
  int *piStack_8;
  
  iVar1 = param_5 + param_6;
  param_7 = param_7 + param_8;
  if ((((-1 < iVar1) && (iVar1 < param_3[2])) && (-1 < param_7)) && (param_7 < param_3[3])) {
    pbVar4 = (byte *)(**(code **)(*param_3 + 8))(iVar1,param_7);
    bVar2 = *pbVar4;
    psVar5 = (short *)(**(code **)(*param_2 + 8))(iVar1,param_7);
    puVar11 = (undefined4 *)(uint)bVar2;
    sVar3 = *psVar5;
    if ((undefined4 *)(uint)bVar2 == (undefined4 *)0xfe) {
      FUN_00461cd0(piStack_8,param_3,param_1,param_2,param_3,param_4);
      param_4._0_2_ = 0;
      iVar10 = param_5;
      if ((char)param_6 != '\0') {
        iVar10 = param_5 / 2;
      }
      if (0 < param_5) {
        iVar6 = -param_5;
        if ((char)param_6 == '\0') {
          iVar7 = FUN_00461d80(auStack_18,piStack_8,param_3,unaff_retaddr,iVar1,param_5,unaff_ESI,
                               iVar6,iVar10,1);
          local_24 = *(int *)(iVar7 + 4);
          piVar8 = (int *)FUN_00461d80(auStack_18,piStack_8,param_3,unaff_retaddr,iVar1,param_5,
                                       unaff_ESI,param_5,iVar10,1);
          iStack_20 = *piVar8;
          iStack_1c = piVar8[1];
          iVar7 = FUN_00461d80(auStack_18,piStack_8,param_3,unaff_retaddr,iVar1,iVar6,unaff_ESI,
                               param_5,iVar10,1);
          local_2c = *(int *)(iVar7 + 4);
          iVar10 = FUN_00461d80(auStack_18,piStack_8,param_3,unaff_retaddr,iVar1,iVar6,unaff_ESI,
                                iVar6,iVar10,1);
          iVar10 = *(int *)(iVar10 + 4);
          if (param_5 == 1) {
            param_4._0_2_ = 2;
          }
          else {
            param_4._0_2_ = FUN_004cf110();
          }
        }
        else {
          iVar7 = FUN_00461d80(&iStack_20,piStack_8,param_3,unaff_retaddr,iVar1,0,unaff_ESI,iVar6,
                               iVar10,0);
          local_24 = *(int *)(iVar7 + 4);
          piVar8 = (int *)FUN_00461d80(&stack0xffffffd0,piStack_8,param_3,unaff_retaddr,iVar1,
                                       param_5,unaff_ESI,0,iVar10,0);
          iStack_20 = *piVar8;
          iStack_1c = piVar8[1];
          iVar7 = FUN_00461d80(auStack_18,piStack_8,param_3,unaff_retaddr,iVar1,0,unaff_ESI,param_5,
                               iVar10,0);
          local_2c = *(int *)(iVar7 + 4);
          iVar10 = FUN_00461d80(auStack_18,piStack_8,param_3,unaff_retaddr,iVar1,iVar6,unaff_ESI,0,
                                iVar10,0);
          iVar10 = *(int *)(iVar10 + 4);
          param_4._0_2_ = (short)param_5;
        }
        if (iVar10 < local_2c) {
          iVar10 = local_2c;
        }
        if (local_24 <= iStack_1c) {
          local_24 = iStack_1c;
        }
        if (local_24 <= iVar10) {
          local_24 = iVar10;
        }
        param_4._0_2_ = (short)param_4 + (short)local_24;
      }
      puVar9 = (undefined1 *)(**(code **)(*param_3 + 8))(iVar1,unaff_ESI);
      *puVar9 = (char)param_1;
      psVar5 = (short *)(**(code **)(*piStack_8 + 8))(iVar1,unaff_ESI);
      *psVar5 = (short)param_4;
      puVar11 = param_1;
      sVar3 = (short)param_4;
    }
    *puStack_c = puVar11;
    puStack_c[1] = (int)sVar3;
    return;
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return;
}




/* Function: FUN_004620a0 */

void __thiscall
FUN_004620a0(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  float local_14;
  undefined1 local_c [12];
  
  if (-1 < param_3) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x88) + 8);
    if ((((param_3 < iVar1) && (-1 < param_4)) &&
        (iVar2 = *(int *)(*(int *)(param_1 + 0x88) + 0xc), param_4 < iVar2)) &&
       (((param_5 = param_5 + param_3, -1 < param_5 && (param_5 < iVar1)) &&
        ((param_6 = param_6 + param_4, -1 < param_6 && (param_6 < iVar2)))))) {
      FUN_00461c60(local_18,param_3,param_4);
      FUN_00461c60(&local_24,param_5,param_6);
      FUN_0041d580(local_c,&local_24,local_18);
      local_20 = -local_14;
      local_24 = 0;
      local_1c = 0;
      FUN_0041d5e0(local_18,local_c,&local_24);
      uVar3 = FUN_0041d5e0(&local_24,local_c,local_18);
      FUN_0041d430(uVar3);
      FUN_0041d4b0();
      *param_2 = 0;
      param_2[1] = 0x3f800000;
      param_2[2] = 0;
      return;
    }
  }
  *param_2 = 0;
  param_2[1] = 0x3f800000;
  param_2[2] = 0;
  return;
}




/* Function: FUN_004621f0 */

bool __thiscall FUN_004621f0(int param_1,float *param_2,float param_3)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  
  iVar4 = 0;
  bVar2 = true;
  pfVar3 = (float *)(param_1 + 0x264);
  do {
    fVar1 = (*pfVar3 * param_2[1] + pfVar3[-1] * *param_2 + pfVar3[1] * param_2[2]) - pfVar3[2];
    if (fVar1 <= param_3) {
      if (fVar1 < -param_3) {
        return (bool)2;
      }
      bVar2 = false;
    }
    iVar4 = iVar4 + 1;
    pfVar3 = pfVar3 + 4;
  } while (iVar4 < 3);
  return !bVar2;
}




/* Function: FUN_00462260 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00462260(int param_1,int *param_2,int param_3,int *param_4)

{
  byte *pbVar1;
  int iVar2;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar3;
  float local_18 [3];
  undefined1 local_c [8];
  float fStack_4;
  
  FUN_00461c60(local_c,*param_2,param_2[1]);
  iVar2 = *(int *)(param_1 + 0x1dc);
  if (*(int *)(iVar2 + 0x404) == 0x401) {
    iVar2 = *(int *)(iVar2 + (uint)*(byte *)(param_2[1] * 0x401 + *(int *)(iVar2 + 0x400) + *param_2
                                            ) * 4);
  }
  else {
    iVar2 = *(int *)(iVar2 + (uint)*(byte *)(*(int *)(iVar2 + 0x404) * param_2[1] +
                                             *(int *)(iVar2 + 0x400) + *param_2) * 4);
  }
  if (param_3 == 0) {
    *param_4 = 0;
  }
  else {
    if (param_3 == 2) {
      fVar3 = (float10)_DAT_00587cb8;
      *param_4 = 2;
      return fVar3;
    }
    iVar2 = FUN_004621f0(local_c,(float)(*(int *)(param_1 + 0x1e4) * iVar2));
    *param_4 = iVar2;
    if (iVar2 == 2) {
      return (float10)_DAT_00588be4;
    }
  }
  FUN_0041d580(local_18,local_c,param_1 + 0x238);
  pbVar1 = (byte *)(**(code **)(**(int **)(param_1 + 0x1d8) + 8))(*param_2,param_2[1]);
  fVar3 = (float10)*pbVar1 * (float10)*(int *)(param_1 + 0x1f8) *
          (float10)*(float *)(param_1 + 0x250) + (float10)fStack_4;
  return fVar3 * fVar3 -
         ((float10)unaff_ESI * (float10)unaff_ESI +
         (float10)unaff_EBX * (float10)unaff_EBX + (float10)local_18[0] * (float10)local_18[0]);
}




/* Function: FUN_004623a0 */

void __thiscall
FUN_004623a0(int param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_00461770(param_4,param_5,*(int *)(param_1 + 0x230) * 0x60 + *(int *)(param_1 + 0x22c));
  FUN_00461770(param_6,param_7,*(int *)(param_1 + 0x230) * 0x60 + 0x20 + *(int *)(param_1 + 0x22c));
  FUN_00461770(param_8,param_9,*(int *)(param_1 + 0x230) * 0x60 + 0x40 + *(int *)(param_1 + 0x22c));
  iVar4 = *(int *)(param_1 + 0x230) + 1;
  *(int *)(param_1 + 0x230) = iVar4;
  if (*(int *)(param_1 + 0x234) <= iVar4) {
    piVar1 = *(int **)(param_3 + 0x2cc);
    if (((char)piVar1[2] != '\0') && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x30))(piVar2);
      *(undefined1 *)(piVar1 + 2) = 0;
    }
    (**(code **)(*param_2 + 0x118))(param_2,4,0,*(undefined4 *)(param_1 + 0x230));
    uVar3 = FUN_0043f970(*(int *)(param_1 + 0x234) * 3,&stack0x00000000);
    *(undefined4 *)(param_1 + 0x22c) = uVar3;
    *(undefined4 *)(param_1 + 0x230) = 0;
  }
  *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
  return;
}




/* Function: FUN_004624b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004624b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  piVar1 = *(int **)(param_1 + 0x8c);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x88) != 0)) {
    iVar2 = piVar1[2];
    iVar4 = FUN_004cf110();
    iVar3 = piVar1[3];
    iVar5 = FUN_004cf110();
    if ((-1 < iVar4) && (((iVar4 < iVar2 && (-1 < iVar5)) && (iVar5 < iVar3)))) {
      pbVar6 = (byte *)(**(code **)(*piVar1 + 8))(iVar4,iVar5);
      return (float10)*pbVar6;
    }
  }
  return (float10)_DAT_00582ad8;
}




/* Function: FUN_00462550 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00462550(int param_1,int param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  ushort uVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float *pfVar9;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
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
  
  FUN_0041d580(&local_6c,param_4,param_3);
  local_60 = *param_3;
  local_58 = param_3[2];
  local_5c = param_3[1];
  local_50 = 0.0;
  local_78 = SQRT(local_6c * local_6c + local_68 * local_68 + local_64 * local_64);
  fVar1 = _DAT_00583354 / local_78;
  local_6c = local_6c * fVar1;
  local_68 = local_68 * fVar1;
  local_64 = local_64 * fVar1;
  local_54 = local_6c;
  local_4c = local_64;
  FUN_0041d4b0();
  fVar1 = (float)*(int *)(param_1 + 0x1e4);
  local_24 = *param_3;
  local_20 = param_3[1];
  local_1c = param_3[2];
  local_54 = local_54 * fVar1;
  local_30 = local_6c;
  local_50 = local_50 * fVar1;
  local_7c = 0.0;
  local_2c = local_68;
  local_28 = local_64;
  local_4c = local_4c * fVar1;
  uVar7 = (ushort)(_DAT_00582ad8 < local_78) << 8 |
          (ushort)(NAN(_DAT_00582ad8) || NAN(local_78)) << 10 |
          (ushort)(_DAT_00582ad8 == local_78) << 0xe;
  if (_DAT_00582ad8 < local_78) {
    do {
      iVar2 = FUN_004cf110();
      iVar3 = FUN_004cf110();
      fVar8 = extraout_ST0;
      if ((((-1 < iVar2) && (iVar2 < *(int *)(*(int *)(param_1 + 0x88) + 8))) && (-1 < iVar3)) &&
         (iVar3 < *(int *)(*(int *)(param_1 + 0x88) + 0xc))) {
        FUN_00461c60(&local_48,iVar2,iVar3);
        FUN_00461c60(&local_3c,iVar2 + 1,iVar3);
        FUN_00461c60(&local_6c,iVar2 + 1,iVar3 + 1);
        iVar4 = FUN_00469bf0(&local_24,&local_30,&local_48,&local_3c,&local_6c,&local_80,local_70,
                             local_74);
        if (iVar4 != 0) {
          pfVar5 = &local_60;
          pfVar9 = &local_18;
          local_54 = local_80 * local_30 + local_24;
          local_50 = local_80 * local_2c + local_20;
          local_4c = local_80 * local_28 + local_1c;
          local_18 = local_6c - local_48;
          local_14 = local_68 - local_44;
          local_10 = local_64 - local_40;
          local_60 = local_3c - local_48;
          local_5c = local_38 - local_44;
          local_58 = local_34 - local_40;
LAB_0046292c:
          puVar6 = (undefined4 *)FUN_0041d5e0(local_c,pfVar9,pfVar5);
          if (puVar6 != (undefined4 *)(param_2 + 0x14)) {
            *(undefined4 *)(param_2 + 0x14) = *puVar6;
            *(undefined4 *)(param_2 + 0x18) = puVar6[1];
            *(undefined4 *)(param_2 + 0x1c) = puVar6[2];
          }
          FUN_0041d4b0();
          pfVar5 = (float *)(param_2 + 8);
          if (&local_54 != pfVar5) {
            *pfVar5 = local_54;
            *(float *)(param_2 + 0xc) = local_50;
            *(float *)(param_2 + 0x10) = local_4c;
          }
          return CONCAT31((int3)((uint)pfVar5 >> 8),1);
        }
        local_3c = local_6c;
        local_34 = local_64;
        local_38 = local_68;
        pfVar5 = (float *)FUN_00461c60(&local_18,iVar2,iVar3 + 1);
        if (pfVar5 != &local_6c) {
          local_6c = *pfVar5;
          local_68 = pfVar5[1];
          local_64 = pfVar5[2];
        }
        iVar2 = FUN_00469bf0(&local_24,&local_30,&local_48,&local_3c,&local_6c,&local_80,local_70,
                             local_74);
        if (iVar2 != 0) {
          pfVar5 = &local_18;
          pfVar9 = &local_60;
          local_54 = local_80 * local_30 + local_24;
          local_50 = local_80 * local_2c + local_20;
          local_4c = local_80 * local_28 + local_1c;
          local_60 = local_6c - local_48;
          local_5c = local_68 - local_44;
          local_58 = local_64 - local_40;
          local_18 = local_3c - local_48;
          local_14 = local_38 - local_44;
          local_10 = local_34 - local_40;
          goto LAB_0046292c;
        }
        fVar8 = (float10)*(int *)(param_1 + 0x1e4);
      }
      local_7c = (float)((float10)local_7c + fVar8);
      local_60 = local_54 + local_60;
      local_5c = local_50 + local_5c;
      local_58 = local_4c + local_58;
      uVar7 = (ushort)(local_7c < local_78) << 8 | (ushort)(NAN(local_7c) || NAN(local_78)) << 10 |
              (ushort)(local_7c == local_78) << 0xe;
    } while (local_7c < local_78);
  }
  return (uint)uVar7;
}




/* Function: FUN_00462990 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00462990(int param_1,int param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  float local_b4;
  float local_b0;
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
  float local_2c [3];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  uVar2 = FUN_004cf110();
  uVar7 = uVar2 & 0xfffffffc;
  uVar3 = FUN_004cf110();
  uVar4 = uVar3 & 0xfffffffc;
  if (((((int)uVar7 < 4) || (*(int *)(*(int *)(param_1 + 0x88) + 8) + -4 <= (int)uVar7)) ||
      ((int)uVar4 < 4)) || (*(int *)(*(int *)(param_1 + 0x88) + 0xc) + -4 <= (int)uVar4)) {
    fVar1 = param_3[2];
    if (&local_b0 != (float *)(param_2 + 8)) {
      *(float *)(param_2 + 8) = *param_3;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(float *)(param_2 + 0x10) = fVar1;
    }
    if (local_2c != (float *)(param_2 + 0x14)) {
      *(float *)(param_2 + 0x14) = 0.0;
      *(undefined4 *)(param_2 + 0x18) = 0x3f800000;
      *(undefined4 *)(param_2 + 0x1c) = 0;
    }
    return 1;
  }
  local_50 = *param_3;
  local_4c = param_3[1];
  local_48 = param_3[2];
  local_74 = 0.0;
  local_70 = -1.0;
  local_6c = 0.0;
  local_98 = 0.0;
  local_94 = 0.0;
  local_90 = 0.0;
  local_38 = 0.0;
  local_34 = 0.0;
  local_30 = 0.0;
  local_44 = 0.0;
  local_40 = 0.0;
  local_3c = 0.0;
  local_a4 = 0.0;
  local_a0 = 0.0;
  local_9c = 0.0;
  local_5c = 0.0;
  local_58 = 0.0;
  local_54 = 0.0;
  local_68 = 0.0;
  local_64 = 0.0;
  local_60 = 0.0;
  if ((uVar3 & 4) == 0) {
    if ((uVar2 & 4) == 0) {
      uVar5 = FUN_00461c60(local_2c,uVar7,uVar4);
      FUN_0041d430(uVar5);
      iVar6 = uVar7 + 4;
      uVar5 = FUN_00461c60(local_18,iVar6,uVar4);
      FUN_0041d430(uVar5);
      uVar5 = FUN_00461c60(local_c,iVar6,uVar4 + 4);
      FUN_0041d430(uVar5);
      uVar5 = FUN_00461c60(&local_b0,uVar7,uVar4);
      FUN_0041d430(uVar5);
      uVar5 = FUN_00461c60(&local_80,iVar6,uVar4 + 4);
      FUN_0041d430(uVar5);
      pfVar8 = &local_8c;
    }
    else {
      uVar5 = FUN_00461c60(local_2c,uVar7,uVar4);
      FUN_0041d430(uVar5);
      iVar6 = uVar7 + 4;
      uVar5 = FUN_00461c60(local_18,iVar6,uVar4);
      FUN_0041d430(uVar5);
      uVar5 = FUN_00461c60(local_c,uVar7,uVar4 + 4);
      FUN_0041d430(uVar5);
      uVar5 = FUN_00461c60(&local_b0,iVar6,uVar4);
      FUN_0041d430(uVar5);
      uVar5 = FUN_00461c60(&local_80,iVar6,uVar4 + 4);
      FUN_0041d430(uVar5);
      pfVar8 = &local_8c;
    }
  }
  else if ((uVar2 & 4) == 0) {
    uVar5 = FUN_00461c60(local_2c,uVar7,uVar4);
    FUN_0041d430(uVar5);
    iVar6 = uVar7 + 4;
    uVar5 = FUN_00461c60(local_18,iVar6,uVar4);
    FUN_0041d430(uVar5);
    uVar5 = FUN_00461c60(local_c,uVar7,uVar4 + 4);
    FUN_0041d430(uVar5);
    uVar5 = FUN_00461c60(&local_b0,iVar6,uVar4);
    FUN_0041d430(uVar5);
    uVar5 = FUN_00461c60(&local_80,iVar6,uVar4 + 4);
    FUN_0041d430(uVar5);
    pfVar8 = &local_8c;
  }
  else {
    uVar5 = FUN_00461c60(&local_b0,uVar7,uVar4);
    FUN_0041d430(uVar5);
    iVar6 = uVar7 + 4;
    uVar5 = FUN_00461c60(&local_80,iVar6,uVar4);
    FUN_0041d430(uVar5);
    uVar5 = FUN_00461c60(&local_8c,iVar6,uVar4 + 4);
    FUN_0041d430(uVar5);
    uVar5 = FUN_00461c60(local_c,uVar7,uVar4);
    FUN_0041d430(uVar5);
    uVar5 = FUN_00461c60(local_18,iVar6,uVar4 + 4);
    FUN_0041d430(uVar5);
    pfVar8 = local_2c;
  }
  uVar5 = FUN_00461c60(pfVar8,uVar7,uVar4 + 4);
  FUN_0041d430(uVar5);
  iVar6 = FUN_00469bf0(&local_50,&local_74,&local_98,&local_38,&local_44,&local_b4,local_20,local_1c
                      );
  if (iVar6 == 0) {
    iVar6 = FUN_00469bf0(&local_50,&local_74,&local_a4,&local_5c,&local_68,&local_b4,local_20,
                         local_1c);
    if (iVar6 == 0) {
      return 0;
    }
    local_8c = local_b4 * local_74 + local_50;
    local_88 = local_b4 * local_70 + local_4c;
    local_84 = local_b4 * local_6c + local_48;
    local_80 = local_68 - local_a4;
    local_7c = local_64 - local_a0;
    local_78 = local_60 - local_9c;
    local_b0 = local_5c - local_a4;
    local_ac = local_58 - local_a0;
    local_a8 = local_54 - local_9c;
    uVar5 = FUN_0041d5e0(local_2c,&local_80,&local_b0);
    FUN_0041d430(uVar5);
    FUN_0041d4b0();
    if (*(float *)(param_2 + 0x18) < _DAT_00582ad8) {
      uVar5 = FUN_0041d410(local_2c);
      FUN_0041d430(uVar5);
    }
    FUN_0041d430(&local_8c);
    return 1;
  }
  local_b0 = local_b4 * local_74 + local_50;
  local_ac = local_b4 * local_70 + local_4c;
  local_a8 = local_b4 * local_6c + local_48;
  local_80 = local_44 - local_98;
  local_7c = local_40 - local_94;
  local_78 = local_3c - local_90;
  local_8c = local_38 - local_98;
  local_88 = local_34 - local_94;
  local_84 = local_30 - local_90;
  uVar5 = FUN_0041d5e0(local_2c,&local_80,&local_8c);
  FUN_0041d430(uVar5);
  FUN_0041d4b0();
  if (*(float *)(param_2 + 0x18) < _DAT_00582ad8) {
    uVar5 = FUN_0041d410(local_2c);
    FUN_0041d430(uVar5);
  }
  FUN_0041d430(&local_b0);
  return 1;
}




/* Function: FUN_004634e0 */

void FUN_004634e0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




/* Function: FUN_00463500 */

void __thiscall FUN_00463500(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1e4);
  iVar2 = *(int *)(param_1 + 0x1f8);
  iVar3 = *(int *)(*(int *)(param_1 + 0x88) + 0xc);
  *param_2 = (float)(*(int *)(*(int *)(param_1 + 0x88) + 8) * iVar1);
  param_2[1] = (float)(iVar2 << 8);
  param_2[2] = (float)(iVar3 * iVar1);
  return;
}




/* Function: FUN_00463550 */

void __fastcall FUN_00463550(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x11);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x11);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x11);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
    *param_1 = iVar2;
  }
  return;
}




/* Function: FUN_004635b0 */

void __thiscall FUN_004635b0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x11) == '\0') {
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




/* Function: FUN_00463610 */

void __thiscall FUN_00463610(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x11) == '\0') {
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




/* Function: FUN_00463670 */

void __fastcall FUN_00463670(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x11) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x11);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x11);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x11) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x11) == '\0');
    if (*(char *)((int)piVar4 + 0x11) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}




/* Function: FUN_004636d0 */

void FUN_004636d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_1 + 5;
    do {
      if (param_3 != param_1) {
        *param_1 = *param_3;
        puVar1[-4] = param_3[1];
        puVar1[-3] = param_3[2];
      }
      if (param_3 + 3 != puVar1 + -2) {
        puVar1[-2] = param_3[3];
        puVar1[-1] = param_3[4];
        *puVar1 = param_3[5];
      }
      puVar1[1] = param_3[6];
      *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(param_3 + 7);
      param_1 = param_1 + 8;
      puVar1 = puVar1 + 8;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_00463740 */

void * __thiscall FUN_00463740(void *param_1,byte param_2)

{
  FUN_00463760();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00463760 */

void __fastcall FUN_00463760(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0058a768;
  operator_delete__((void *)param_1[1]);
  return;
}




/* Function: FUN_00463780 */

undefined4 FUN_00463780(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_40 [64];
  
  _eh_vector_constructor_iterator_
            (local_40,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310(0x3f800000);
  FUN_005475f4(param_3);
  FUN_005488cc(param_1,param_2,local_40);
  _eh_vector_destructor_iterator_(local_40,0x10,4,FUN_00407150);
  return param_1;
}




/* Function: FUN_004637f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004637f0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,float param_5,
            float param_6,float param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  puVar2 = param_3;
  if (param_2 != (undefined4 *)(param_1 + 0x238)) {
    *(undefined4 *)(param_1 + 0x238) = *param_2;
    *(undefined4 *)(param_1 + 0x23c) = param_2[1];
    *(undefined4 *)(param_1 + 0x240) = param_2[2];
  }
  puVar1 = (undefined4 *)(param_1 + 0x244);
  if (param_3 != puVar1) {
    *puVar1 = *param_3;
    *(undefined4 *)(param_1 + 0x248) = param_3[1];
    *(undefined4 *)(param_1 + 0x24c) = param_3[2];
  }
  param_3 = (undefined4 *)0x3f800000;
  if (_DAT_00582ad8 < param_7) {
    param_3 = (undefined4 *)(param_7 * _DAT_0058a794 + _DAT_00583354);
  }
  param_6 = param_5 * _DAT_00583340 * param_6;
  uVar3 = FUN_00463780(local_24,puVar1,param_6 * (float)param_3,param_4);
  FUN_0041d5e0(local_30,uVar3);
  puVar6 = local_24;
  uVar3 = FUN_00463780(local_18,puVar1,-(param_6 * (float)param_3),param_4,puVar6);
  FUN_0041d5e0(local_c,uVar3);
  FUN_0041d410(puVar6);
  FUN_00461c10(local_30,param_2);
  FUN_00461c10(local_24,param_2);
  iVar4 = FUN_0041ce80();
  uVar3 = FUN_00434a40(local_c,*(undefined4 *)(iVar4 + 0x1afc),puVar2);
  uVar3 = FUN_0041d550(local_18,param_2,uVar3);
  uVar5 = FUN_0041d410(local_24);
  FUN_00461c10(uVar5,uVar3);
  return;
}




/* Function: FUN_00463960 */

void FUN_00463960(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *param_3;
  iVar5 = (int)(short)((short)param_2[1] - (short)param_3[1]);
  iVar2 = *param_2;
  iVar3 = param_3[1];
  iVar4 = param_2[1];
  iVar6 = (int)(short)((short)*param_3 - (short)*param_2);
  *param_1 = ((iVar1 - iVar5) + iVar2) / 2;
  param_1[2] = (iVar2 + iVar1 + iVar5) / 2;
  param_1[1] = ((iVar3 + iVar4) - iVar6) / 2;
  param_1[3] = (iVar3 + iVar4 + iVar6) / 2;
  return;
}




/* Function: FUN_004639e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004639e0(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  int iVar10;
  int iVar11;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  piVar2 = param_4;
  iVar7 = param_3[1] - param_4[1];
  iVar4 = *param_4 - *param_3;
  fVar9 = (float10)FUN_00462260(param_4,param_6,&param_4);
  if (fVar9 < (float10)_DAT_00582ad8) {
    iVar11 = param_3[1];
    iVar1 = piVar2[1];
    iVar10 = *param_3;
    iVar8 = *piVar2;
    iVar5 = iVar1 - iVar4;
    iVar6 = iVar8 - iVar7;
  }
  else {
    if (1 < param_5) {
      FUN_00463960(local_10,param_3,piVar2);
      piVar3 = param_4;
      iVar4 = param_5 + -1;
      FUN_004639e0(param_1,param_2,piVar2,local_10,iVar4,param_4);
      FUN_004639e0(param_1,param_2,piVar2,local_8,iVar4,piVar3);
      return;
    }
    FUN_004623a0(param_1,param_2,*piVar2,piVar2[1],*piVar2 - iVar7,piVar2[1] - iVar4,*param_3,
                 param_3[1]);
    iVar11 = param_3[1];
    iVar5 = piVar2[1];
    iVar10 = *param_3;
    iVar8 = *piVar2;
    iVar6 = iVar8;
    iVar1 = iVar5;
  }
  FUN_004623a0(param_1,param_2,iVar8 + iVar7,iVar1 + iVar4,iVar6,iVar5,iVar10,iVar11);
  return;
}




/* Function: FUN_00463b00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00463b00(int *param_1,undefined4 param_2)

{
  float local_2c [11];
  
  if (param_1[0x22] == 0) {
    return (float10)_DAT_00582ad8;
  }
  FUN_0041d7e0();
  (**(code **)(*param_1 + 0x38))(local_2c,param_2,param_2);
  return (float10)local_2c[0];
}




/* Function: FUN_00463b50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00463b50(int param_1,int *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  float10 fVar8;
  int *piStack_2e0;
  int *piStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  int *piStack_2d0;
  int iStack_2cc;
  int iStack_2c8;
  int *piStack_2c4;
  int iStack_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int *piStack_2b4;
  int *piStack_2b0;
  int iStack_2ac;
  int *piStack_2a8;
  int *piStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  int *piStack_294;
  int *piStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  int *piStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  int *piStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  int *piStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  int *piStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  int *piStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  int *piStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  int *piStack_224;
  undefined4 uStack_220;
  undefined4 *puStack_21c;
  int *piStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
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
  int *piStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int *piStack_170;
  undefined4 uStack_16c;
  int *piStack_168;
  int *piStack_164;
  undefined4 *puStack_160;
  int *piStack_15c;
  int *piStack_158;
  int *piStack_154;
  int *piStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int *piStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  int iStack_108;
  int iStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [100];
  
  if ((*(int *)(param_1 + 0x88) == 0) || (*(char *)(param_3 + 0x18ed) != '\0')) {
    return 0;
  }
  iStack_134 = 0x463b87;
  fVar8 = (float10)FUN_0041ce10();
  iStack_134 = *(undefined4 *)(param_1 + 0x228);
  *(float *)(param_1 + 0x224) = (float)((float10)*(float *)(param_1 + 0x224) - fVar8);
  iStack_138 = 0x13;
  iStack_13c = 0;
  piStack_140 = param_2;
  uStack_144 = 0x463bb0;
  (**(code **)(*param_2 + 0xfc))();
  uStack_144 = *(undefined4 *)(param_1 + 0x228);
  uStack_148 = 0x13;
  uStack_14c = 1;
  piStack_150 = param_2;
  piStack_154 = (int *)0x463bca;
  (**(code **)(*param_2 + 0xfc))();
  piStack_154 = (int *)0x463bd1;
  iVar4 = FUN_0041c920();
  piStack_140 = *(int **)(iVar4 + 8);
  piStack_154 = (int *)0x2;
  *(undefined4 *)(param_1 + 0x208) = 0x40800000;
  fVar1 = (float)(int)piStack_140 * _DAT_0058a2f4;
  *(int **)(param_1 + 0x20c) = piStack_140;
  *(float *)(param_1 + 0x250) = fVar1;
  piStack_158 = (int *)0x463c01;
  piStack_154 = (int *)FUN_0041e470();
  piStack_158 = (int *)0x463c0e;
  FUN_00407260();
  piStack_154 = &iStack_138;
  iStack_100 = 0;
  fStack_fc = 0.0;
  uStack_f8 = 0xbf800000;
  uStack_118 = 0;
  uStack_114 = 0x3f800000;
  uStack_110 = 0;
  iStack_138 = 0;
  iStack_134 = 0;
  piStack_158 = (int *)0x463c67;
  FUN_00545c38();
  piStack_154 = (int *)auStack_a8;
  piStack_158 = (int *)0x463c78;
  FUN_00548748();
  piStack_154 = (int *)0x463c81;
  FUN_0041d4b0();
  fVar1 = fStack_fc * _DAT_0058a798;
  fStack_fc = 0.0;
  piStack_154 = (int *)0x463ca0;
  FUN_0041d4b0();
  piStack_154 = (int *)0x3f800000;
  piStack_158 = (int *)0x463cb1;
  FUN_00407f80();
  piStack_154 = (int *)auStack_68;
  piStack_158 = (int *)0x0;
  piStack_15c = (int *)0x463cc2;
  FUN_0041e330();
  piStack_154 = param_2;
  piStack_158 = (int *)0x463cca;
  FUN_0041da10();
  piStack_154 = (int *)0x463cd1;
  iVar4 = FUN_0041c920();
  piStack_140 = (int *)(float)*(int *)(iVar4 + 8);
  if (*(int *)(iVar4 + 8) < 0) {
    piStack_140 = (int *)((float)piStack_140 + _DAT_00582b04);
  }
  piStack_154 = (int *)0x463cf1;
  iVar4 = FUN_0041c920();
  fVar2 = (float)*(int *)(iVar4 + 0xc);
  if (*(int *)(iVar4 + 0xc) < 0) {
    fVar2 = fVar2 + _DAT_00582b04;
  }
  piStack_140 = (int *)((float)piStack_140 / fVar2);
  piStack_154 = (int *)0x463d10;
  piVar5 = (int *)FUN_0041caa0();
  iStack_138 = *piVar5;
  iStack_134 = piVar5[1];
  piStack_158 = piStack_140;
  piStack_15c = (int *)0x3f860a92;
  puStack_160 = &uStack_118;
  piStack_164 = &iStack_100;
  piStack_168 = &iStack_138;
  uStack_16c = 0x463d49;
  piStack_154 = (int *)fVar1;
  FUN_004637f0();
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  piStack_140 = *(int **)(*(int *)(param_1 + 0x88) + 0xc);
  iStack_108 = 8;
  iStack_13c = 8;
  if ((*(int *)(param_1 + 0x90) != 0) && (*(int *)(param_1 + 0x94) == 0)) {
    iStack_108 = 1;
    iStack_13c = 1;
  }
  iStack_108 = (*(int *)(*(int *)(param_1 + 0x88) + 8) + -1) / iStack_108;
  uStack_f4 = *(undefined4 *)(param_1 + 0x1fc);
  iStack_138 = (iStack_108 / 2) * 2;
  uStack_118 = 0;
  uStack_114 = 0;
  iStack_134 = ((((int)piStack_140 + -1) / iStack_13c) / 2) * 2;
  uStack_f0 = (uint)(*(char *)(param_1 + 0x205) != '\0');
  if (*(char *)(param_1 + 0x25c) != '\0') {
    piStack_154 = (int *)0x463e1b;
    cVar3 = FUN_0041cb70();
    if (cVar3 != '\0') {
      piStack_154 = (int *)(param_1 + 0x194);
      piStack_158 = param_2;
      piStack_15c = (int *)0x463e2f;
      (**(code **)(*param_2 + 0xa8))();
      piStack_15c = (int *)0x1;
      puStack_160 = (undefined4 *)0x89;
      piStack_164 = param_2;
      piStack_168 = (int *)0x463e3f;
      (**(code **)(*param_2 + 200))();
      piStack_168 = (int *)0x1;
      uStack_16c = 0;
      piStack_170 = param_2;
      uStack_174 = 0x463e4c;
      (**(code **)(*param_2 + 0xb8))();
      goto LAB_00463e5e;
    }
  }
  piStack_154 = (int *)0x0;
  piStack_158 = (int *)0x89;
  piStack_15c = param_2;
  puStack_160 = (undefined4 *)0x463e5e;
  (**(code **)(*param_2 + 200))();
LAB_00463e5e:
  uStack_174 = 0;
  uStack_178 = 0x1d;
  piStack_17c = param_2;
  uStack_180 = 0x463e6b;
  (**(code **)(*param_2 + 200))();
  uStack_180 = 0;
  uStack_184 = 0x1b;
  piStack_188 = param_2;
  uStack_18c = 0x463e78;
  (**(code **)(*param_2 + 200))();
  uStack_18c = 4;
  uStack_190 = 1;
  uStack_194 = 0;
  piStack_198 = param_2;
  uStack_19c = 0x463e87;
  (**(code **)(*param_2 + 0xfc))();
  uStack_19c = 1;
  uStack_1a0 = 2;
  uStack_1a4 = 0;
  piStack_1a8 = param_2;
  uStack_1ac = 0x463e96;
  (**(code **)(*param_2 + 0xfc))();
  uStack_1ac = 2;
  uStack_1b0 = 3;
  uStack_1b4 = 0;
  piStack_1b8 = param_2;
  uStack_1bc = 0x463ea5;
  (**(code **)(*param_2 + 0xfc))();
  uStack_1bc = 2;
  uStack_1c0 = 4;
  uStack_1c4 = 0;
  piStack_1c8 = param_2;
  uStack_1cc = 0x463eb4;
  (**(code **)(*param_2 + 0xfc))();
  uStack_1cc = 1;
  uStack_1d0 = 5;
  uStack_1d4 = 0;
  piStack_1d8 = param_2;
  uStack_1dc = 0x463ec3;
  (**(code **)(*param_2 + 0xfc))();
  uStack_1dc = 2;
  uStack_1e0 = 6;
  uStack_1e4 = 0;
  piStack_1e8 = param_2;
  uStack_1ec = 0x463ed2;
  (**(code **)(*param_2 + 0xfc))();
  uStack_1ec = 3;
  uStack_1f0 = 0xd;
  uStack_1f4 = 0;
  piStack_1f8 = param_2;
  uStack_1fc = 0x463ee1;
  (**(code **)(*param_2 + 0xfc))();
  uStack_1fc = 3;
  uStack_200 = 0xe;
  uStack_204 = 0;
  piStack_208 = param_2;
  uStack_20c = 0x463ef0;
  (**(code **)(*param_2 + 0xfc))();
  uStack_20c = 2;
  uStack_210 = 0x18;
  uStack_214 = 1;
  piStack_218 = param_2;
  uStack_1a0 = 0x44000000;
  uStack_19c = 0;
  piStack_198 = (int *)0x0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_18c = 0x44000000;
  piStack_188 = (int *)0x0;
  uStack_184 = 0;
  uStack_180 = 0;
  piStack_17c = (int *)0x0;
  uStack_178 = 0x44000000;
  uStack_174 = 0;
  piStack_170 = (int *)0x0;
  uStack_16c = 0;
  piStack_168 = (int *)0x0;
  piStack_164 = (int *)0x3f800000;
  puStack_21c = (undefined4 *)0x463fa9;
  (**(code **)(*param_2 + 0xfc))();
  puStack_21c = &uStack_1b0;
  uStack_220 = 0x11;
  piStack_224 = param_2;
  uStack_228 = 0x463fb9;
  (**(code **)(*param_2 + 0x94))();
  uStack_228 = 2;
  uStack_22c = 2;
  uStack_230 = 1;
  piStack_234 = param_2;
  uStack_238 = 0x463fc8;
  (**(code **)(*param_2 + 0xfc))();
  uStack_238 = 1;
  uStack_23c = 3;
  uStack_240 = 1;
  piStack_244 = param_2;
  uStack_248 = 0x463fd7;
  (**(code **)(*param_2 + 0xfc))();
  uStack_248 = 4;
  uStack_24c = 1;
  uStack_250 = 1;
  piStack_254 = param_2;
  uStack_258 = 0x463fe6;
  (**(code **)(*param_2 + 0xfc))();
  uStack_258 = 0;
  uStack_25c = 6;
  uStack_260 = 1;
  piStack_264 = param_2;
  uStack_268 = 0x463ff5;
  (**(code **)(*param_2 + 0xfc))();
  uStack_268 = 3;
  uStack_26c = 4;
  uStack_270 = 1;
  piStack_274 = param_2;
  uStack_278 = 0x464004;
  (**(code **)(*param_2 + 0xfc))();
  uStack_278 = 1;
  uStack_27c = 0xd;
  uStack_280 = 1;
  piStack_284 = param_2;
  uStack_288 = 0x464013;
  (**(code **)(*param_2 + 0xfc))();
  uStack_288 = 1;
  uStack_28c = 0xe;
  piStack_290 = (int *)0x1;
  piStack_294 = param_2;
  uStack_298 = 0x464022;
  (**(code **)(*param_2 + 0xfc))();
  uStack_298 = 0;
  uStack_29c = 0xb;
  uStack_2a0 = 1;
  piStack_2a4 = param_2;
  piStack_2a8 = (int *)0x464031;
  (**(code **)(*param_2 + 0xfc))();
  piStack_2a8 = (int *)0x1;
  iStack_2ac = 1;
  piStack_2b0 = (int *)0x2;
  piStack_2b4 = param_2;
  iStack_2b8 = 0x464040;
  (**(code **)(*param_2 + 0xfc))();
  iStack_2b8 = 1;
  iStack_2bc = 4;
  iStack_2c0 = 2;
  piStack_2c4 = param_2;
  iStack_2c8 = 0x46404f;
  (**(code **)(*param_2 + 0xfc))();
  iStack_2c8 = 0;
  iStack_2cc = 1;
  piStack_2d0 = param_2;
  uStack_2d4 = 0x46405c;
  (**(code **)(*param_2 + 0xf4))();
  uStack_2d4 = 0;
  iStack_2d8 = 2;
  piStack_2dc = param_2;
  (**(code **)(*param_2 + 0xf4))();
  *(uint *)(param_1 + 0x234) = *(uint *)(*(int *)(param_3 + 0x2cc) + 0x24) / 3;
  iVar4 = **(int **)(*(int *)(param_3 + 0x2cc) + 0x28);
  (**(code **)(*param_2 + 0x130))(param_2);
  (**(code **)(*param_2 + 0x14c))(param_2,0,**(undefined4 **)(param_3 + 0x2cc),0x20);
  if (*(int *)(param_1 + 400) != 0) {
    (**(code **)(*(int *)(param_1 + 400) + 4))(param_2,1);
  }
  if (0 < iVar4) {
    iVar6 = iStack_2ac * (int)piStack_2d0;
    piStack_2b0 = (int *)(param_1 + 0x90);
    iStack_2c8 = iVar6;
    do {
      if (0 < (int)piStack_2d0) {
        piStack_2e0 = piStack_2b0;
        piStack_290 = piStack_2d0;
        do {
          (**(code **)(*piStack_2e0 + 4))(param_2,0);
          *(int *)(param_1 + 600) = iStack_2b8;
          *(int *)(param_1 + 0x254) = iStack_2bc;
          uVar7 = FUN_0043f970(*(int *)(param_1 + 0x234) * 3,&piStack_2a8);
          *(undefined4 *)(param_1 + 0x22c) = uVar7;
          *(undefined4 *)(param_1 + 0x230) = 0;
          FUN_004639e0(param_2,param_3,&iStack_2bc,&piStack_2c4,uStack_298,piStack_294);
          FUN_004639e0(param_2,param_3,&piStack_2dc,&piStack_2c4,uStack_298,piStack_294);
          piStack_2a8 = *(int **)(param_3 + 0x2cc);
          if (((char)piStack_2a8[2] != '\0') && (piVar5 = (int *)*piStack_2a8, piVar5 != (int *)0x0)
             ) {
            (**(code **)(*piVar5 + 0x30))(piVar5);
            *(undefined1 *)(piStack_2a8 + 2) = 0;
          }
          if (0 < *(int *)(param_1 + 0x230)) {
            (**(code **)(*param_2 + 0x118))(param_2,4,0,*(int *)(param_1 + 0x230));
          }
          iStack_2bc = iStack_2bc + iStack_2ac;
          piStack_2c4 = (int *)((int)piStack_2c4 + iStack_2ac);
          piStack_2dc = (int *)((int)piStack_2dc + iStack_2ac);
          piStack_2e0 = piStack_2e0 + 8;
          piStack_290 = (int *)((int)piStack_290 + -1);
        } while (piStack_290 != (int *)0x0);
        piStack_290 = (int *)0x0;
        iVar6 = iStack_2c8;
      }
      iStack_2bc = iStack_2bc - iVar6;
      piStack_2c4 = (int *)((int)piStack_2c4 - iVar6);
      piStack_2dc = (int *)((int)piStack_2dc - iVar6);
      iStack_2b8 = iStack_2b8 + iStack_2cc;
      iStack_2c0 = iStack_2c0 + iStack_2cc;
      iStack_2d8 = iStack_2d8 + iStack_2cc;
      piStack_2b0 = piStack_2b0 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x218);
  (**(code **)(*param_2 + 0xfc))(param_2,0,0xd,1);
  (**(code **)(*param_2 + 0xfc))(param_2,0,0xe,1);
  (**(code **)(*param_2 + 0xfc))(param_2,1,0xb,1);
  (**(code **)(*param_2 + 0xfc))(param_2,1,0x18,0);
  if ((*(char *)(param_1 + 0x25c) != '\0') && (cVar3 = FUN_0041cb70(), cVar3 != '\0')) {
    (**(code **)(*param_2 + 0xb8))(param_2,0,0);
    (**(code **)(*param_2 + 200))(param_2,0x89,0);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x214);
  FUN_00407300();
  FUN_00407300();
  return uVar7;
}




/* Function: FUN_00464310 */

undefined4 __thiscall FUN_00464310(int param_1,uint param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0x3fffffff < param_2) {
    FUN_0043adb0();
    return 1;
  }
  iVar1 = FUN_00493c27(param_2 * 4);
  *(uint *)(param_1 + 0xc) = param_2 * 4 + iVar1;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  return 1;
}




/* Function: FUN_00464370 */

/* WARNING: Removing unreachable block (ram,0x00464495) */
/* WARNING: Removing unreachable block (ram,0x004644a7) */
/* WARNING: Removing unreachable block (ram,0x004644b1) */
/* WARNING: Removing unreachable block (ram,0x004644b4) */
/* WARNING: Removing unreachable block (ram,0x004644a3) */
/* WARNING: Removing unreachable block (ram,0x004644c1) */
/* WARNING: Removing unreachable block (ram,0x004644d2) */
/* WARNING: Removing unreachable block (ram,0x004644dd) */
/* WARNING: Removing unreachable block (ram,0x004644d9) */
/* WARNING: Removing unreachable block (ram,0x004644cd) */
/* WARNING: Removing unreachable block (ram,0x004644e0) */

void __thiscall FUN_00464370(int param_1,undefined4 param_2,int *param_3)

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
  puStack_8 = &LAB_0057c822;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_3 + 0x11) != '\0') {
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
  FUN_00463550();
  piVar5 = (int *)*param_3;
  if ((*(char *)((int)piVar5 + 0x11) != '\0') || (*(char *)(param_3[2] + 0x11) == '\0')) {
    piVar5 = (int *)param_3[2];
  }
  piVar6 = (int *)param_3[1];
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
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
    if (*(char *)((int)piVar5 + 0x11) == '\0') {
      piVar3 = (int *)FUN_00461bb0(piVar5);
    }
    *puVar1 = piVar3;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int **)(iVar2 + 8) == param_3) {
    if (*(char *)((int)piVar5 + 0x11) == '\0') {
      uVar4 = FUN_00461bd0(piVar5);
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
  if ((char)param_3[4] == '\x01') {
    if (piVar5 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        if ((char)piVar5[4] != '\x01') break;
        piVar3 = (int *)*piVar6;
        if (piVar5 == piVar3) {
          piVar3 = (int *)piVar6[2];
          if ((char)piVar3[4] == '\0') {
            *(undefined1 *)(piVar3 + 4) = 1;
            *(undefined1 *)(piVar6 + 4) = 0;
            FUN_004635b0(piVar6);
            piVar3 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar3 + 0x11) == '\0') {
            if ((*(char *)(*piVar3 + 0x10) != '\x01') || (*(char *)(piVar3[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar3[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar3 + 0x10) = 1;
                *(undefined1 *)(piVar3 + 4) = 0;
                FUN_00463610(piVar3);
                piVar3 = (int *)piVar6[2];
              }
              *(char *)(piVar3 + 4) = (char)piVar6[4];
              *(undefined1 *)(piVar6 + 4) = 1;
              *(undefined1 *)(piVar3[2] + 0x10) = 1;
              FUN_004635b0(piVar6);
              break;
            }
LAB_004645b7:
            *(undefined1 *)(piVar3 + 4) = 0;
          }
        }
        else {
          if ((char)piVar3[4] == '\0') {
            *(undefined1 *)(piVar3 + 4) = 1;
            *(undefined1 *)(piVar6 + 4) = 0;
            FUN_00463610(piVar6);
            piVar3 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar3 + 0x11) == '\0') {
            if ((*(char *)(piVar3[2] + 0x10) == '\x01') && (*(char *)(*piVar3 + 0x10) == '\x01'))
            goto LAB_004645b7;
            if (*(char *)(*piVar3 + 0x10) == '\x01') {
              *(undefined1 *)(piVar3[2] + 0x10) = 1;
              *(undefined1 *)(piVar3 + 4) = 0;
              FUN_004635b0(piVar3);
              piVar3 = (int *)*piVar6;
            }
            *(char *)(piVar3 + 4) = (char)piVar6[4];
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(*piVar3 + 0x10) = 1;
            FUN_00463610(piVar6);
            break;
          }
        }
        bVar7 = piVar6 != *(int **)(*(int *)(param_1 + 4) + 4);
        piVar5 = piVar6;
        piVar6 = (int *)piVar6[1];
      } while (bVar7);
    }
    *(undefined1 *)(piVar5 + 4) = 1;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_3);
}




/* Function: FUN_00464640 */

void FUN_00464640(void *param_1)

{
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    FUN_00464640(*(undefined4 *)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return;
}




/* Function: FUN_00464680 */

void FUN_00464680(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = param_3 + 5;
    puVar2 = param_4 + 5;
    do {
      param_3 = param_3 + -8;
      param_4 = param_4 + -8;
      if (param_3 != param_4) {
        *param_4 = *param_3;
        puVar2[-0xc] = puVar1[-0xc];
        puVar2[-0xb] = puVar1[-0xb];
      }
      if (puVar1 + -10 != puVar2 + -10) {
        puVar2[-10] = puVar1[-10];
        puVar2[-9] = puVar1[-9];
        puVar2[-8] = puVar1[-8];
      }
      puVar2[-7] = puVar1[-7];
      *(undefined2 *)(puVar2 + -6) = *(undefined2 *)(puVar1 + -6);
      puVar1 = puVar1 + -8;
      puVar2 = puVar2 + -8;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return;
  }
  *param_1 = param_4;
  return;
}




/* Function: FUN_00464710 */

undefined4 FUN_00464710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00464680(param_1,param_2,param_3,param_4,param_4);
  return param_1;
}




/* Function: FUN_00464750 */

void __thiscall
FUN_00464750(int param_1,undefined4 *param_2,char param_3,undefined4 *param_4,undefined4 param_5)

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
  puStack_8 = &LAB_0057c822;
  local_c = ExceptionList;
  if (0x3ffffffd < *(uint *)(param_1 + 8)) {
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
  piVar5 = (int *)FUN_00408550(*(undefined4 *)(param_1 + 4),param_4,*(undefined4 *)(param_1 + 4),
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
  cVar1 = *(char *)(piVar5[1] + 0x10);
  piVar7 = piVar5;
  while (cVar1 == '\0') {
    piVar6 = piVar7 + 1;
    piVar2 = (int *)*piVar6;
    piVar3 = *(int **)piVar2[1];
    if (piVar2 == piVar3) {
      iVar4 = ((undefined4 *)piVar2[1])[2];
      if (*(char *)(iVar4 + 0x10) == '\0') {
        *(undefined1 *)(piVar2 + 4) = 1;
        *(undefined1 *)(iVar4 + 0x10) = 1;
        *(undefined1 *)(*(int *)(*piVar6 + 4) + 0x10) = 0;
        piVar7 = *(int **)(*piVar6 + 4);
      }
      else {
        if (piVar7 == (int *)piVar2[2]) {
          FUN_004635b0(piVar2);
          piVar7 = piVar2;
        }
        *(undefined1 *)(piVar7[1] + 0x10) = 1;
        *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x10) = 0;
        FUN_00463610(*(undefined4 *)(piVar7[1] + 4));
      }
    }
    else if ((char)piVar3[4] == '\0') {
      *(undefined1 *)(piVar2 + 4) = 1;
      *(undefined1 *)(piVar3 + 4) = 1;
      *(undefined1 *)(*(int *)(*piVar6 + 4) + 0x10) = 0;
      piVar7 = *(int **)(*piVar6 + 4);
    }
    else {
      if (piVar7 == (int *)*piVar2) {
        FUN_00463610(piVar2);
        piVar7 = piVar2;
      }
      *(undefined1 *)(piVar7[1] + 0x10) = 1;
      *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x10) = 0;
      FUN_004635b0(*(undefined4 *)(piVar7[1] + 4));
    }
    cVar1 = *(char *)(piVar7[1] + 0x10);
  }
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x10) = 1;
  *param_2 = piVar5;
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00464920 */

void FUN_00464920(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = param_3 + 5;
    puVar2 = param_1 + 5;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *param_1;
        puVar1[-4] = puVar2[-4];
        puVar1[-3] = puVar2[-3];
        puVar1[-2] = puVar2[-2];
        puVar1[-1] = puVar2[-1];
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(puVar2 + 2);
      }
      param_1 = param_1 + 8;
      param_3 = param_3 + 8;
      puVar1 = puVar1 + 8;
      puVar2 = puVar2 + 8;
    } while (param_1 != param_2);
  }
  return;
}




/* Function: FUN_00464990 */

void __thiscall FUN_00464990(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  piVar3 = param_3;
  piVar1 = *(int **)(param_1 + 4);
  bVar2 = true;
  piVar6 = piVar1;
  if (*(char *)(piVar1[1] + 0x11) == '\0') {
    piVar4 = (int *)piVar1[1];
    do {
      piVar6 = piVar4;
      bVar2 = *param_3 < piVar6[3];
      if (bVar2) {
        piVar4 = (int *)*piVar6;
      }
      else {
        piVar4 = (int *)piVar6[2];
      }
    } while (*(char *)((int)piVar4 + 0x11) == '\0');
  }
  param_3 = piVar6;
  if (bVar2) {
    if (piVar6 == (int *)*piVar1) {
      puVar5 = (undefined4 *)FUN_00464750(&param_3,1,piVar6,piVar3);
      *param_2 = *puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      return;
    }
    FUN_00463670();
  }
  if (param_3[3] < *piVar3) {
    puVar5 = (undefined4 *)FUN_00464750(&param_3,bVar2,piVar6,piVar3);
    *param_2 = *puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  *param_2 = param_3;
  *(undefined1 *)(param_2 + 1) = 0;
  return;
}




/* Function: FUN_00464a50 */

void __thiscall FUN_00464a50(int param_1,undefined4 *param_2,int *param_3,int *param_4)

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
    FUN_00464640(piVar6[1]);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    *param_2 = **(undefined4 **)(param_1 + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x11) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x11);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x11);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x11);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x11);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_00464370(&param_3,piVar2);
    piVar2 = piVar6;
  }
  *param_2 = piVar2;
  return;
}




/* Function: FUN_00464b10 */

void FUN_00464b10(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = param_1 + 5;
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        puVar1[-4] = param_3[1];
        puVar1[-3] = param_3[2];
        puVar1[-2] = param_3[3];
        puVar1[-1] = param_3[4];
        *puVar1 = param_3[5];
        puVar1[1] = param_3[6];
        *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(param_3 + 7);
      }
      param_1 = param_1 + 8;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}




/* Function: FUN_00464b70 */

void __thiscall
FUN_00464b70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00464920(param_2,param_3,param_4,param_1,param_4);
  return;
}




/* Function: FUN_00464ba0 */

int __thiscall FUN_00464ba0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00464b10(param_2,param_3,param_4,param_1,param_4);
  return param_3 * 0x20 + param_2;
}




/* Function: FUN_00464bd0 */

void __thiscall FUN_00464bd0(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_0057c830;
  local_10 = ExceptionList;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(param_1 + 0xc) - iVar3 >> 5;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar3 >> 5;
    }
    if (0x7ffffffU - iVar2 < param_3) {
      ExceptionList = &local_10;
      FUN_0044ae40();
      ExceptionList = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar3 >> 5;
    }
    if (uVar5 < iVar2 + param_3) {
      if (0x7ffffff - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 8) - iVar3 >> 5;
      }
      if (uVar5 < iVar2 + param_3) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) - iVar3 >> 5;
        }
        uVar5 = iVar3 + param_3;
      }
      ExceptionList = &local_10;
      iVar2 = FUN_00493c27();
      local_8 = 0;
      uVar1 = FUN_00464920(*(undefined4 *)(param_1 + 4));
      FUN_00464b10(uVar1);
      FUN_00464920(param_2);
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 8) - iVar3 >> 5;
      }
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0xc) = uVar5 * 0x20 + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x20 + iVar2;
        *(int *)(param_1 + 4) = iVar2;
        ExceptionList = local_10;
        return;
      }
      for (; iVar3 != *(int *)(param_1 + 8); iVar3 = iVar3 + 0x20) {
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)(param_1 + 4));
    }
    if ((uint)(*(int *)(param_1 + 8) - param_2 >> 5) < param_3) {
      ExceptionList = &local_10;
      FUN_00464b70();
      local_8 = 2;
      FUN_00464ba0();
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x20;
    }
    else {
      ExceptionList = &local_10;
      uVar1 = FUN_00464b70();
      *(undefined4 *)(param_1 + 8) = uVar1;
      FUN_00464710();
    }
    FUN_004636d0();
  }
  ExceptionList = local_10;
  return;
}




/* Function: FUN_00464eb0 */

void __fastcall FUN_00464eb0(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00464a50(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: FUN_00464ee0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00464ee0(undefined4 param_1,int *param_2)

{
  float10 fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint local_130;
  undefined1 local_12c;
  undefined1 local_12b;
  undefined1 local_12a;
  undefined1 local_129;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  undefined4 local_118;
  float local_114;
  undefined4 local_110;
  undefined2 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  float local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined4 *local_e8;
  void *local_e4;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a0;
  float local_9c;
  undefined4 local_98;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_74;
  int local_70;
  undefined4 local_68;
  undefined4 local_64;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057c86a;
  local_c = ExceptionList;
  uVar10 = 0x3c23d70a;
  if (param_2[4] == 3) {
    ExceptionList = &local_c;
    uVar4 = FUN_00430cd0(&local_f4);
    FUN_0043fa40(&local_100,uVar4,uVar10);
    local_f4 = local_100;
    local_ec = local_f8;
    local_f0 = 1e+06;
    fVar8 = (float10)FUN_004305a0();
    fVar1 = (float10)_DAT_00588808;
    local_12c = 1;
    local_12b = 0;
    local_12a = 0;
    local_129 = 0;
    local_128 = std::numeric_limits<float>::max();
    local_124 = 0.0;
    local_120 = 0.0;
    local_11c = 0.0;
    local_118 = 0;
    local_114 = 0.0;
    local_110 = 0;
    local_10c = 0xffff;
    local_108 = 0xffffffff;
    local_104 = 0;
    cVar3 = FUN_00462990(&local_12c,&local_f4,&local_f4);
    if ((cVar3 != '\0') && (fVar2 = local_120 + (float)(fVar8 * fVar1), local_fc < fVar2)) {
      local_e4 = operator_new(0x28,(nothrow_t *)&DAT_005b6164);
      local_4 = 0;
      if (local_e4 == (void *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        iVar5 = FUN_0041c940();
        uVar10 = *(undefined4 *)(iVar5 + 0x68);
        uVar11 = 0x3f800000;
        uVar9 = 10;
        FUN_0041c940(uVar10,10,0x3f800000);
        uVar4 = FUN_004fb920();
        puVar6 = (undefined4 *)FUN_004229a0(uVar4,uVar10,uVar9,uVar11);
      }
      local_d8 = param_2[0x1d];
      local_9c = local_114;
      local_90 = (fVar2 - local_fc) * _DAT_0058334c;
      local_4 = 0xffffffff;
      local_dc = 4;
      local_b0 = local_124 * _DAT_0058334c;
      local_d0 = 0x3e99999a;
      local_cc = 0x3e4ccccd;
      local_8c = 0;
      local_88 = 0;
      local_a0 = local_118;
      local_ac = local_120 * _DAT_0058334c;
      local_98 = local_110;
      local_a8 = local_11c * _DAT_0058334c;
      if ((float)_DAT_00587c38 < local_114) {
        *(undefined1 *)((int)param_2 + 0x7a) = 1;
        *(undefined1 *)((int)param_2 + 0x7b) = 1;
      }
      FUN_004322e0(&local_dc);
      (**(code **)(*param_2 + 0x10))(param_1,0,puVar6);
      FUN_00431890(param_2[0x2f],0);
      if (puVar6 != (undefined4 *)0x0) {
        (**(code **)*puVar6)(1);
      }
      ExceptionList = local_c;
      return 1;
    }
  }
  else {
    ExceptionList = &local_c;
    uVar10 = FUN_00430cd0(&local_100);
    FUN_0043fa40(&local_f4,uVar10);
    local_100 = local_f4;
    local_f8 = local_ec;
    local_fc = 1e+06;
    fVar8 = (float10)FUN_004305a0();
    fVar1 = (float10)_DAT_0058a79c;
    local_12c = 1;
    local_12b = 0;
    local_12a = 0;
    local_129 = 0;
    local_128 = std::numeric_limits<float>::max();
    local_124 = 0.0;
    local_120 = 0.0;
    local_11c = 0.0;
    local_118 = 0;
    local_114 = 0.0;
    local_110 = 0;
    local_10c = 0xffff;
    local_108 = 0xffffffff;
    local_104 = 0;
    cVar3 = FUN_00462990(&local_12c,&local_100,&local_100);
    if ((cVar3 != '\0') && (local_f0 < local_120 + (float)(fVar8 * fVar1))) {
      local_e4 = operator_new(0x28,(nothrow_t *)&DAT_005b6164);
      local_4 = 1;
      if (local_e4 == (void *)0x0) {
        local_e8 = (undefined4 *)0x0;
      }
      else {
        iVar5 = FUN_0041c940();
        uVar10 = *(undefined4 *)(iVar5 + 0x68);
        uVar11 = 0x3f800000;
        uVar9 = 10;
        FUN_0041c940(uVar10,10,0x3f800000);
        uVar4 = FUN_004fb920();
        local_e8 = (undefined4 *)FUN_004229a0(uVar4,uVar10,uVar9,uVar11);
      }
      local_4 = 0xffffffff;
      local_130 = 0;
      iVar5 = 0;
      while( true ) {
        iVar7 = param_2[3];
        if ((*(int *)(iVar7 + 0x50) == 0) ||
           ((uint)((*(int *)(iVar7 + 0x54) - *(int *)(iVar7 + 0x50)) / 0x28) <= local_130)) break;
        iVar7 = *(int *)(iVar7 + 0x50) + iVar5;
        FUN_0041d5b0(&local_f4,iVar7 + 0x10,0x42c80000);
        local_e4 = (void *)(*(float *)(iVar7 + 0xc) * _DAT_00588808);
        local_100 = local_f4;
        local_f8 = local_ec;
        local_fc = 1e+06;
        local_12c = 1;
        local_12b = 0;
        local_12a = 0;
        local_129 = 0;
        local_128 = std::numeric_limits<float>::max();
        local_124 = 0.0;
        local_120 = 0.0;
        local_11c = 0.0;
        local_118 = 0;
        local_114 = 0.0;
        local_110 = 0;
        local_10c = 0xffff;
        local_108 = 0xffffffff;
        local_104 = 0;
        cVar3 = FUN_00462990(&local_12c,&local_100,&local_100);
        if ((cVar3 == '\0') || (local_120 + (float)local_e4 <= local_f0)) {
          local_130 = local_130 + 1;
          iVar5 = iVar5 + 0x28;
        }
        else {
          local_70 = param_2[0x1d];
          local_28 = ((local_120 + (float)local_e4) - local_f0) * _DAT_0058334c;
          local_30 = local_110;
          local_74 = 4;
          local_48 = local_124 * _DAT_0058334c;
          local_68 = 0x3e99999a;
          local_64 = 0x3e4ccccd;
          local_24 = 0;
          local_20 = 0;
          local_38 = local_118;
          local_44 = local_120 * _DAT_0058334c;
          local_34 = local_114;
          local_40 = local_11c * _DAT_0058334c;
          if ((float)_DAT_00587c38 < local_114) {
            *(undefined1 *)((int)param_2 + 0x7a) = 1;
          }
          FUN_004322e0(&local_74);
          local_130 = local_130 + 1;
          iVar5 = iVar5 + 0x28;
        }
      }
      (**(code **)(*param_2 + 0x10))(param_1,0,local_e8);
      puVar6 = local_e8;
      FUN_00431890(param_2[0x2f],0);
      if (puVar6 != (undefined4 *)0x0) {
        (**(code **)*puVar6)(1);
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}




/* Function: FUN_004654a0 */

void FUN_004654a0(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  int local_40;
  uint local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  short *local_30 [2];
  undefined1 local_28;
  int *local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  int local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057c890;
  pvStack_c = ExceptionList;
  uVar13 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  local_3c = uVar13;
  local_34 = operator_new(uVar13,(nothrow_t *)&DAT_005b6164);
  local_28 = (undefined1)param_1;
  local_24 = (int *)FUN_00408ea0();
  *(undefined1 *)((int)local_24 + 0x11) = 1;
  local_24[1] = (int)local_24;
  *local_24 = (int)local_24;
  local_24[2] = (int)local_24;
  local_20 = 0;
  psVar6 = *(short **)(param_1 + 4);
  local_4 = 0;
  uVar9 = uVar13;
  if (0 < (int)uVar13) {
    do {
      local_40 = (int)*psVar6;
      psVar6 = psVar6 + 1;
      FUN_00464990(local_30,&local_40);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  piVar11 = (int *)*local_24;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (piVar11 != local_24) {
    do {
      iVar7 = local_14;
      if ((puVar10 == (undefined4 *)0x0) ||
         ((uint)(local_10 - (int)puVar10 >> 2) <= (uint)(local_14 - (int)puVar10 >> 2))) {
        FUN_0043b080(local_14,1,piVar11 + 3);
        puVar10 = local_18;
      }
      else {
        FUN_004520c0(local_14,1,piVar11 + 3,local_1c,param_1);
        local_14 = iVar7 + 4;
      }
      if (*(char *)((int)piVar11 + 0x11) == '\0') {
        piVar3 = (int *)piVar11[2];
        if (*(char *)((int)piVar3 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x11);
          piVar11 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x11);
            piVar11 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar11[1] + 0x11);
          piVar5 = (int *)piVar11[1];
          piVar3 = piVar11;
          while ((piVar11 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar11[2]))) {
            cVar1 = *(char *)(piVar11[1] + 0x11);
            piVar5 = (int *)piVar11[1];
            piVar3 = piVar11;
          }
        }
      }
    } while (piVar11 != local_24);
  }
  psVar6 = *(short **)(param_1 + 4);
  local_40 = 0;
  if (0 < (int)uVar13) {
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
      iVar7 = local_14 - (int)puVar10 >> 2;
      puVar12 = puVar10;
      while (iVar4 = iVar7, 0 < iVar4) {
        iVar7 = iVar4 / 2;
        if ((int)puVar12[iVar7] < (int)sVar2) {
          puVar12 = puVar12 + iVar7 + 1;
          iVar7 = iVar4 + (-1 - iVar7);
        }
      }
      *(char *)(local_40 + (int)local_34) = (char)((int)puVar12 - (int)puVar10 >> 2);
      local_40 = local_40 + 1;
      local_30[0] = psVar6;
    } while (local_40 < (int)local_3c);
  }
  while ((iVar7 = local_14, uVar9 = local_3c, puVar10 == (undefined4 *)0x0 ||
         ((uint)(local_14 - (int)puVar10 >> 2) < 0x100))) {
    local_40 = 0;
    if ((puVar10 == (undefined4 *)0x0) ||
       ((uint)(local_10 - (int)puVar10 >> 2) <= (uint)(local_14 - (int)puVar10 >> 2))) {
      FUN_0043b080(local_14,1,&local_40);
      puVar10 = local_18;
    }
    else {
      FUN_004520c0(local_14,1,&local_40,local_1c,param_1);
      local_14 = iVar7 + 4;
    }
  }
  puVar12 = puVar10;
  puVar8 = local_38;
  for (iVar7 = 0x100; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar8 = operator_new(local_3c,(nothrow_t *)&DAT_005b6164);
  local_38[0x100] = puVar8;
  puVar12 = local_34;
  for (uVar13 = uVar9 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar8 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar12;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  operator_delete__(local_34);
  local_38[0x101] = *(undefined4 *)(param_1 + 8);
  local_38[0x102] = *(undefined4 *)(param_1 + 0xc);
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar10);
}




/* Function: FUN_004657a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004657a0(int param_1)

{
  uint *puVar1;
  float fVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int unaff_EBX;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  int local_b0;
  undefined **local_ac;
  undefined **local_a8;
  undefined4 *local_a4;
  int local_a0;
  int local_9c;
  uint *local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70 [3];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [16];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057c8ab;
  pvStack_14 = ExceptionList;
  iVar12 = *(int *)(*(int *)(param_1 + 0x88) + 0xc);
  iVar14 = *(int *)(*(int *)(param_1 + 0x88) + 8);
  local_a8 = &PTR_FUN_0058a774;
  ExceptionList = &pvStack_14;
  local_a0 = iVar14;
  local_9c = iVar12;
  local_88 = iVar14;
  local_80 = iVar12;
  local_a4 = operator_new(iVar12 * iVar14 * 2,(nothrow_t *)&DAT_005b6164);
  iVar11 = *(int *)(param_1 + 0x1d8);
  uVar9 = *(int *)(iVar11 + 0xc) * *(int *)(iVar11 + 8);
  local_c = 0;
  if (0 < (int)uVar9) {
    puVar13 = *(undefined4 **)(iVar11 + 4);
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar13 = 0xfefefefe;
      puVar13 = puVar13 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar13 = 0xfe;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
  }
  uVar9 = local_9c * local_a0;
  if (0 < (int)uVar9) {
    puVar13 = local_a4;
    for (uVar10 = uVar9 >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar13 = 0xfe00fe;
      puVar13 = puVar13 + 1;
    }
    for (uVar9 = (uint)((uVar9 & 1) != 0); uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined2 *)puVar13 = 0xfe;
      puVar13 = (undefined4 *)((int)puVar13 + 2);
    }
  }
  local_78 = iVar12 / 2;
  iVar11 = 8;
  local_90 = 8;
  local_b0 = 8;
  if ((*(int *)(param_1 + 0x90) != 0) && (*(int *)(param_1 + 0x94) == 0)) {
    local_90 = 1;
    local_b0 = 1;
    iVar11 = 1;
  }
  iVar5 = (iVar14 + -1) / iVar11;
  local_94 = (iVar14 + -1) % iVar11;
  iVar14 = 0;
  ppuVar6 = (undefined **)((iVar12 + -1) / local_b0);
  iVar12 = 0;
  local_ac = ppuVar6;
  local_84 = iVar5;
  if (local_b0 != 0) {
    local_74 = iVar5 * iVar11;
    local_94 = (int)ppuVar6 * 0x401;
    local_98 = (uint *)0x0;
    local_8c = local_b0;
    do {
      if (0 < iVar11) {
        local_70[0] = (int)ppuVar6 / 2;
        local_7c = iVar5 / 2;
        iVar5 = iVar5 + iVar14;
        local_b0 = iVar11;
        do {
          puVar7 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x1d8) + 8))(iVar14,iVar12);
          *puVar7 = 0;
          puVar7 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x1d8) + 8))(iVar5,iVar12);
          *puVar7 = 0;
          puVar7 = (undefined1 *)
                   (**(code **)(**(int **)(param_1 + 0x1d8) + 8))(iVar14,(int)fStack_bc + iVar12);
          *puVar7 = 0;
          puVar7 = (undefined1 *)
                   (**(code **)(**(int **)(param_1 + 0x1d8) + 8))(iVar5,unaff_EBX + iVar12);
          *puVar7 = 0;
          puVar1 = local_98;
          if (local_a0 != 0x401) {
            puVar1 = (uint *)(local_a0 * iVar12);
          }
          *(undefined2 *)((int)local_a4 + ((int)puVar1 + iVar14) * 2) = 0;
          puVar1 = local_98;
          if (local_a0 != 0x401) {
            puVar1 = (uint *)(local_a0 * iVar12);
          }
          *(undefined2 *)((int)local_a4 + ((int)puVar1 + iVar5) * 2) = 0;
          if (local_a0 == 0x401) {
            iVar11 = (iVar12 + (int)local_ac) * 0x401;
          }
          else {
            iVar11 = local_a0 * (iVar12 + (int)local_ac);
          }
          *(undefined2 *)((int)local_a4 + (iVar11 + iVar14) * 2) = 0;
          if (local_a0 == 0x401) {
            iVar11 = (iVar12 + (int)local_ac) * 0x401;
          }
          else {
            iVar11 = local_a0 * (iVar12 + (int)local_ac);
          }
          *(undefined2 *)((int)local_a4 + (iVar11 + iVar5) * 2) = 0;
          FUN_00461d80(&fStack_bc,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1d8),
                       &local_a8,iVar14,local_7c,iVar12,local_70[0],local_78,1);
          iVar14 = iVar14 + local_84;
          iVar5 = iVar5 + local_84;
          local_b0 = local_b0 + -1;
        } while (local_b0 != 0);
        local_b0 = 0;
        ppuVar6 = local_ac;
        iVar5 = local_84;
      }
      iVar14 = iVar14 - local_74;
      local_98 = (uint *)((int)local_98 + local_94);
      iVar12 = iVar12 + (int)ppuVar6;
      local_8c = local_8c + -1;
      iVar11 = local_90;
    } while (local_8c != 0);
  }
  FUN_004654a0(&local_a8);
  if ((*(int *)(param_1 + 0x1e0) != 0) && (iVar12 = 0, 0 < local_84)) {
    do {
      if (0 < local_8c) {
        iVar14 = 0;
        do {
          FUN_004620a0(&fStack_c0,iVar14,iVar12,0xffffffff,0);
          pfVar8 = (float *)FUN_004620a0(auStack_34,iVar14,iVar12,1,0);
          fStack_c0 = fStack_c0 + *pfVar8;
          fStack_bc = fStack_bc + pfVar8[1];
          fStack_b8 = fStack_b8 + pfVar8[2];
          pfVar8 = (float *)FUN_004620a0(auStack_28,iVar14,iVar12,0,0xffffffff);
          fStack_c0 = fStack_c0 + *pfVar8;
          fStack_bc = fStack_bc + pfVar8[1];
          fStack_b8 = fStack_b8 + pfVar8[2];
          pfVar8 = (float *)FUN_004620a0(local_70,iVar14,iVar12,0,1);
          fStack_c0 = fStack_c0 + *pfVar8;
          fStack_bc = fStack_bc + pfVar8[1];
          fStack_b8 = fStack_b8 + pfVar8[2];
          pfVar8 = (float *)FUN_004620a0(auStack_4c,iVar14,iVar12,0xffffffff,0xffffffff);
          fStack_c0 = fStack_c0 + *pfVar8;
          fStack_bc = fStack_bc + pfVar8[1];
          fStack_b8 = fStack_b8 + pfVar8[2];
          pfVar8 = (float *)FUN_004620a0(auStack_64,iVar14,iVar12,1,0xffffffff);
          fStack_c0 = fStack_c0 + *pfVar8;
          fStack_bc = fStack_bc + pfVar8[1];
          fStack_b8 = fStack_b8 + pfVar8[2];
          pfVar8 = (float *)FUN_004620a0(auStack_58,iVar14,iVar12,0xffffffff,1);
          fStack_c0 = fStack_c0 + *pfVar8;
          fStack_bc = fStack_bc + pfVar8[1];
          fStack_b8 = fStack_b8 + pfVar8[2];
          pfVar8 = (float *)FUN_004620a0(auStack_40,iVar14,iVar12,1,1);
          fStack_c0 = fStack_c0 + *pfVar8;
          fStack_bc = fStack_bc + pfVar8[1];
          fStack_b8 = fStack_b8 + pfVar8[2];
          fVar2 = SQRT(fStack_c0 * fStack_c0 + fStack_bc * fStack_bc + fStack_b8 * fStack_b8);
          if ((float)_DAT_00587c48 <= fVar2) {
            fVar2 = _DAT_00583354 / fVar2;
            fStack_c0 = fVar2 * fStack_c0;
            fStack_bc = fStack_bc * fVar2;
            fStack_b8 = fStack_b8 * fVar2;
          }
          else {
            fStack_c0 = 0.0;
            fStack_bc = 1.0;
            fStack_b8 = 0.0;
          }
          local_98 = (uint *)(**(code **)(**(int **)(param_1 + 0x1e0) + 8))(iVar14,iVar12);
          uVar3 = FUN_004cf110();
          uVar4 = FUN_004cf110();
          uVar9 = FUN_004cf110();
          iVar14 = iVar14 + 1;
          *local_98 = (uint)CONCAT11(uVar3,uVar4) << 8 | uVar9 & 0xff;
        } while (iVar14 < local_8c);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < local_84);
  }
  local_ac = &PTR_FUN_0058a774;
  operator_delete__(local_a8);
  ExceptionList = pvStack_18;
  return;
}




/* Function: FUN_00466620 */

void __thiscall FUN_00466620(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 5) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 5))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00464b10(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x20;
    return;
  }
  FUN_00464bd0(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}




/* Function: FUN_00466750 */

undefined4 * __fastcall FUN_00466750(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057c8f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_0058a878;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  local_4 = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 0x98,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0x65;
  *(undefined1 *)(param_1 + 0x97) = 1;
  puVar2 = param_1 + 0x24;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x7f] = 0x14;
  param_1[0x80] = 0x14;
  *(undefined1 *)(param_1 + 0x81) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined1 *)((int)param_1 + 0x205) = 1;
  param_1[0x82] = 0x3f800000;
  param_1[0x83] = 0x140;
  param_1[0x94] = 0x43a00000;
  param_1[0x84] = 32000;
  param_1[0x79] = 0x61;
  param_1[0x7e] = 100;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00466870 */

void __fastcall FUN_00466870(undefined4 *param_1)

{
  void *pvVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0057c930;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_0058a878;
  local_4 = 1;
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x22])(1);
  }
  if ((undefined4 *)param_1[0x23] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x23])(1);
  }
  if ((undefined4 *)param_1[0x76] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x76])(1);
  }
  if ((undefined4 *)param_1[0x78] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x78])(1);
  }
  pvVar1 = (void *)param_1[0x77];
  if (pvVar1 != (void *)0x0) {
    operator_delete__(*(void **)((int)pvVar1 + 0x400));
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 0x98,0x10,4,FUN_00407150);
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




/* Function: FUN_00466950 */

void * __thiscall FUN_00466950(void *param_1,byte param_2)

{
  FUN_00466870();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return param_1;
}




/* Function: FUN_00466970 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall FUN_00466970(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint unaff_retaddr;
  char local_108 [260];
  uint local_4;
  
  pcVar1 = (char *)(param_1 + 0x154);
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  pcVar4 = pcVar1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  for (pcVar4 = pcVar4 + (-1 - (param_1 + 0x155)); -1 < (int)pcVar4; pcVar4 = pcVar4 + -1) {
    if (pcVar1[(int)pcVar4] == '.') {
      pcVar4[param_1 + 0x154] = '\0';
      break;
    }
  }
  pcVar4 = pcVar1;
  do {
    cVar2 = *pcVar4;
    pcVar4[(int)(local_108 + -(int)pcVar1)] = cVar2;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  pcVar4 = pcVar1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  pcVar4 = pcVar4 + (-1 - (param_1 + 0x155));
  while( true ) {
    if ((int)pcVar4 < 0) goto LAB_00466a0a;
    if ((pcVar1[(int)pcVar4] == '\\') || (pcVar1[(int)pcVar4] == '/')) break;
    pcVar4 = pcVar4 + -1;
  }
  pcVar4 = pcVar4 + param_1 + 0x155;
  iVar3 = -(int)pcVar4;
  do {
    cVar2 = *pcVar4;
    pcVar4[(int)(local_108 + iVar3)] = cVar2;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
LAB_00466a0a:
  pcVar4 = local_108;
  do {
    cVar2 = *pcVar4;
    pcVar4[(int)pcVar1 - (int)local_108] = cVar2;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  return;
}




/* Function: FUN_00466a40 */

void __thiscall FUN_00466a40(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_60 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_44 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057c949;
  local_c = ExceptionList;
  if (param_3 == 0) {
    ExceptionList = &local_c;
    FUN_00466970();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_44,(char *)(param_1 + 0x154));
    uStack_4 = 0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_60,".\\Textures\\Sprite\\");
    FUN_00429a60(abStack_60,abStack_44,1);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_60);
    uStack_4 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_44);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_28,(char *)(param_1 + 0x154));
    uVar1 = FUN_004222d0(abStack_28);
    *(undefined4 *)(param_1 + 0xcc) = uVar1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_28);
    ExceptionList = local_c;
    return;
  }
  *(int *)(param_1 + 0xcc) = param_3;
  return;
}




/* Function: FUN_00466c50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00466c50(int param_1)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  double dVar10;
  
  puVar4 = operator_new(0x138,(nothrow_t *)&DAT_005b6164);
  *(undefined1 *)(puVar4 + 0x4d) = 0;
  iVar5 = rand();
  pfVar1 = (float *)(puVar4 + 0x49);
  fVar2 = *(float *)(param_1 + 0x150);
  *puVar4 = 0;
  fVar2 = fVar2 * _DAT_00587d90;
  puVar4[2] = 0;
  puVar4[1] = fVar2 * (float)(iVar5 % 0xff) * _DAT_0058a930;
  iVar5 = rand();
  *pfVar1 = (float)(iVar5 % 0xff) * _DAT_0058a930 - (float)_DAT_00587c38;
  iVar5 = rand();
  puVar4[0x4a] = (float)(iVar5 % 0xff) * _DAT_0058a930 - (float)_DAT_00587c38;
  iVar5 = rand();
  puVar4[0x4b] = (float)(iVar5 % 0xff) * _DAT_0058a930 - (float)_DAT_00587c38;
  puVar4[5] = *(undefined4 *)(param_1 + 0x10c);
  puVar4[6] = *(undefined4 *)(param_1 + 0x110);
  puVar4[7] = *(undefined4 *)(param_1 + 0x114);
  FUN_004f5310(pfVar1);
  *pfVar1 = *(float *)(param_1 + 0x140) * _DAT_00587d90 * _DAT_0058a92c * *pfVar1;
  puVar4[0x4a] = *(float *)(param_1 + 0x140) * _DAT_00587d90 * _DAT_0058a92c * (float)puVar4[0x4a];
  puVar4[0x4b] = *(float *)(param_1 + 0x140) * _DAT_00587d90 * _DAT_0058a92c * (float)puVar4[0x4b];
  *pfVar1 = *(float *)(param_1 + 0x130) + *pfVar1;
  puVar4[0x4a] = *(float *)(param_1 + 0x134) + (float)puVar4[0x4a];
  puVar4[0x4b] = *(float *)(param_1 + 0x138) + (float)puVar4[0x4b];
  FUN_004f5310(pfVar1);
  iVar5 = rand();
  *pfVar1 = ((*(float *)(param_1 + 0x25c) - *(float *)(param_1 + 600)) * (float)(iVar5 % 0xff) *
             _DAT_0058a930 + *(float *)(param_1 + 600)) * *pfVar1;
  iVar5 = rand();
  puVar4[0x4a] = ((*(float *)(param_1 + 0x25c) - *(float *)(param_1 + 600)) * (float)(iVar5 % 0xff)
                  * _DAT_0058a930 + *(float *)(param_1 + 600)) * (float)puVar4[0x4a];
  iVar5 = rand();
  puVar4[0x4b] = ((*(float *)(param_1 + 0x25c) - *(float *)(param_1 + 600)) * (float)(iVar5 % 0xff)
                  * _DAT_0058a930 + *(float *)(param_1 + 600)) * (float)puVar4[0x4b];
  iVar5 = rand();
  puVar4[3] = (*(float *)(param_1 + 0x120) - *(float *)(param_1 + 0x118)) * (float)(iVar5 % 0xff) *
              _DAT_0058a930 + *(float *)(param_1 + 0x118);
  iVar5 = rand();
  puVar4[4] = (*(float *)(param_1 + 0x124) - *(float *)(param_1 + 0x11c)) * (float)(iVar5 % 0xff) *
              _DAT_0058a930 + *(float *)(param_1 + 0x11c);
  bVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::empty
                    ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(param_1 + 0x268));
  if (!bVar3) {
    FUN_0041cae0();
    iVar5 = FUN_0042dbb0();
    if (iVar5 != 0) {
      pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(param_1 + 0x268));
      FUN_00412e58(iVar5,pcVar6);
      FUN_00412cfc(iVar5,(double)(float)puVar4[5]);
      FUN_00412cfc(iVar5,(double)(float)puVar4[6]);
      FUN_00412cfc(iVar5,(double)(float)puVar4[7]);
      FUN_00412cfc(iVar5,(double)(float)puVar4[3]);
      FUN_00412cfc(iVar5,(double)(float)puVar4[4]);
      FUN_00412cfc(iVar5,(double)(float)puVar4[1]);
      FUN_00412cfc(iVar5,(double)(float)puVar4[0x49]);
      FUN_00412cfc(iVar5,(double)(float)puVar4[0x4a]);
      FUN_00412cfc(iVar5,(double)(float)puVar4[0x4b]);
      iVar7 = FUN_0044ab40(param_1);
      dVar10 = (double)iVar7;
      if (iVar7 < 0) {
        dVar10 = dVar10 + _DAT_00589ec0;
      }
      FUN_00412cfc(iVar5,dVar10);
      if (*(int *)(param_1 + 0xd4) == 0) {
        dVar10 = 0.0;
      }
      else {
        iVar7 = FUN_0044ab40();
        dVar10 = (double)iVar7;
        if (iVar7 < 0) {
          dVar10 = dVar10 + _DAT_00589ec0;
        }
      }
      FUN_00412cfc(iVar5,dVar10);
      iVar7 = FUN_00412798(iVar5,0xb,9);
      if (iVar7 == 0) {
        fVar9 = (float10)FUN_00412c00(iVar5,0xfffffff7);
        puVar4[5] = (float)fVar9;
        fVar9 = (float10)FUN_00412c00(iVar5,0xfffffff8);
        puVar4[6] = (float)fVar9;
        fVar9 = (float10)FUN_00412c00(iVar5,0xfffffff9);
        puVar4[7] = (float)fVar9;
        fVar9 = (float10)FUN_00412c00(iVar5,0xfffffffa);
        puVar4[3] = (float)fVar9;
        fVar9 = (float10)FUN_00412c00(iVar5,0xfffffffb);
        puVar4[4] = (float)fVar9;
        fVar9 = (float10)FUN_00412c00(iVar5,0xfffffffc);
        puVar4[1] = (float)fVar9;
        fVar9 = (float10)FUN_00412c00(iVar5,0xfffffffd);
        puVar4[0x49] = (float)fVar9;
        fVar9 = (float10)FUN_00412c00(iVar5,0xfffffffe);
        puVar4[0x4a] = (float)fVar9;
        fVar9 = (float10)FUN_00412c00(iVar5,0xffffffff);
        puVar4[0x4b] = (float)fVar9;
        FUN_00412950(iVar5,0xfffffff6);
      }
    }
  }
  iVar5 = 0x10;
  puVar8 = puVar4 + 9;
  do {
    *puVar8 = puVar4[5];
    puVar8[1] = puVar4[6];
    puVar8[2] = puVar4[7];
    iVar5 = iVar5 + -1;
    puVar8[3] = puVar4[8];
    puVar8 = puVar8 + 4;
  } while (iVar5 != 0);
  return puVar4;
}




/* Function: FUN_004670d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004670d0(int param_1,undefined4 param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  if (*(char *)(param_1 + 0xe5) == '\0') {
    param_3[0x4a] = param_4 * *(float *)(param_1 + 0x144) * _DAT_00588bfc + param_3[0x4a];
  }
  else {
    pfVar5 = param_3 + 0x49;
    fVar7 = (float10)FUN_004f5310(pfVar5);
    fVar1 = (float)fVar7;
    iVar4 = rand();
    *pfVar5 = ((float)(iVar4 % 0xff) * _DAT_0058a948 - _DAT_00588b48) + *pfVar5;
    iVar4 = rand();
    param_3[0x4a] = ((float)(iVar4 % 0xff) * _DAT_0058a948 - _DAT_00588b48) + param_3[0x4a];
    iVar4 = rand();
    param_3[0x4b] = ((float)(iVar4 % 0xff) * _DAT_0058a948 - _DAT_00588b48) + param_3[0x4b];
    FUN_004f5310(pfVar5);
    *pfVar5 = fVar1 * *pfVar5;
    param_3[0x4a] = fVar1 * param_3[0x4a];
    param_3[0x4b] = fVar1 * param_3[0x4b];
    param_3[1] = fVar1 * _DAT_0058a944 + param_3[1];
  }
  fVar1 = param_4 * param_3[0x49];
  fVar3 = param_4 * param_3[0x4a];
  fVar2 = param_4 * param_3[0x4b];
  param_3[5] = fVar1 + param_3[5];
  param_3[6] = fVar3 + param_3[6];
  param_3[7] = fVar2 + param_3[7];
  iVar4 = *(int *)(param_1 + 0xe8);
  if (0 < iVar4) {
    iVar6 = 0;
    if (iVar4 != 1 && -1 < iVar4 + -1) {
      pfVar5 = param_3 + 9;
      do {
        *pfVar5 = pfVar5[4];
        pfVar5[1] = pfVar5[5];
        pfVar5[2] = pfVar5[6];
        pfVar5[3] = pfVar5[7];
        iVar6 = iVar6 + 1;
        pfVar5 = pfVar5 + 4;
      } while (iVar6 < *(int *)(param_1 + 0xe8) + -1);
    }
    pfVar5 = param_3 + *(int *)(param_1 + 0xe8) * 4 + 5;
    *pfVar5 = param_3[5];
    pfVar5[1] = param_3[6];
    pfVar5[2] = param_3[7];
    pfVar5[3] = param_3[8];
  }
  pfVar5 = param_3 + 5;
  if (*(char *)(param_1 + 0xe5) == '\0') {
    fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) + param_3[2];
    param_3[2] = fVar1;
    if (*(float *)(param_1 + 0x254) <= fVar1) {
      *(undefined1 *)(param_3 + 0x4d) = 1;
      return;
    }
  }
  else {
    iVar4 = 3;
    do {
      FUN_0041ce80();
      iVar6 = FUN_0041caa0();
      fVar1 = *(float *)((int)pfVar5 + iVar6 + (-0x14 - (int)param_3));
      fVar7 = (float10)*pfVar5;
      if ((float10)_DAT_0058a940 < fVar7 - (float10)fVar1) {
        iVar6 = FUN_004cf110();
        fVar7 = extraout_ST0 - (float10)iVar6 * (float10)_DAT_0058a938;
      }
      if (fVar7 - (float10)fVar1 < (float10)_DAT_0058a934) {
        iVar6 = FUN_004cf110();
        fVar7 = (float10)iVar6 * (float10)_DAT_0058a938 + extraout_ST0_00;
      }
      *pfVar5 = (float)fVar7;
      pfVar5 = pfVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *param_3 = param_4 * _DAT_00588bfc + *param_3;
  return;
}





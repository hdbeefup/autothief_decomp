/* camera functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_004d67c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d67c0(int *param_1)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  SHORT SVar5;
  uint uVar6;
  float *pfVar7;
  int *piVar8;
  undefined4 uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  int iVar12;
  void *pvVar13;
  float10 fVar14;
  float10 fVar15;
  undefined1 *puVar16;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar17;
  float fStack_13c;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int iStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_fc [4];
  void *pvStack_f8;
  void *pvStack_f4;
  undefined4 uStack_f0;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  int iStack_cc;
  undefined1 auStack_c8 [12];
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  undefined1 auStack_b0 [12];
  undefined1 local_a4 [12];
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [64];
  undefined1 auStack_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057e032;
  pvStack_c = ExceptionList;
  fVar14 = (float10)fsin((float10)(float)param_1[0xbe]);
  local_dc = 0;
  local_b8 = 0;
  fVar15 = (float10)fcos((float10)(float)param_1[0xbe]);
  local_e0 = (float)fVar14;
  local_d8 = (float)fVar15;
  fVar14 = (float10)fsin((float10)(float)param_1[0xbe] + (float10)_DAT_0058a9dc);
  fVar15 = (float10)fcos((float10)(float)param_1[0xbe] + (float10)_DAT_0058a9dc);
  local_bc = -(float)fVar14;
  local_b4 = (float)-fVar15;
  ExceptionList = &pvStack_c;
  FUN_0041d5e0(local_a4,&local_e0,&local_bc);
  pfVar7 = &local_d4;
  (**(code **)(*param_1 + 0x90))(pfVar7);
  FUN_00547ab0(pfVar7);
  fStack_d0 = fStack_d0 + _DAT_00583348;
  fStack_100 = (float)iStack_cc;
  pfVar7 = (float *)(param_1 + 0x139);
  if (&fStack_108 != pfVar7) {
    param_1[0x13a] =
         (int)((fStack_d0 - (float)param_1[0x13a]) * (float)_DAT_00588830 + (float)param_1[0x13a]);
    *pfVar7 = local_d4;
    param_1[0x13b] = iStack_cc;
  }
  fStack_124 = *pfVar7;
  fStack_120 = (float)param_1[0x13a];
  iStack_11c = param_1[0x13b];
  _eh_vector_constructor_iterator_
            (auStack_8c,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310(0x3f800000);
  iStack_4 = 0;
  FUN_00545bf0(&local_bc);
  FUN_00545c20(&local_e0);
  FUN_00545c08(local_a4);
  FUN_00545c38(&fStack_124);
  if ((float)param_1[0x134] < _DAT_005900d0) {
    param_1[0x134] = -0x415f2684;
  }
  if (_DAT_005900cc < (float)param_1[0x134]) {
    param_1[0x134] = 0x3fa0d97c;
  }
  fStack_130 = 0.0;
  fStack_12c = 0.0;
  fStack_128 = 0.0;
  _eh_vector_constructor_iterator_
            (auStack_4c,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310(0x3f800000);
  iStack_4._0_1_ = 1;
  uVar6 = FUN_0041cda0();
  if ((uVar6 & 0x40) != 0) {
    FUN_005475f4(_DAT_00589ee8 - (float)param_1[0x135]);
  }
  FUN_005476c0(param_1[0x134]);
  fVar1 = (float)param_1[0x133];
  SVar5 = GetAsyncKeyState(0x21);
  if (((SVar5 < 0) || (SVar5 = GetAsyncKeyState(0x6d), SVar5 < 0)) ||
     (uVar6 = FUN_0041cda0(), (uVar6 & 0x200) != 0)) {
    param_1[0x133] = (int)((float)param_1[0x133] - _DAT_0058a79c);
    FUN_004ffac0();
    fVar14 = (float10)FUN_0043f960();
    if ((float10)(float)param_1[0x133] < fVar14) {
      FUN_004ffac0();
      fVar14 = (float10)FUN_0043f960();
      param_1[0x133] = (int)(float)fVar14;
    }
  }
  SVar5 = GetAsyncKeyState(0x22);
  if (((SVar5 < 0) || (SVar5 = GetAsyncKeyState(0x6b), SVar5 < 0)) ||
     (uVar6 = FUN_0041cda0(), (uVar6 & 0x400) != 0)) {
    param_1[0x133] = (int)((float)param_1[0x133] + _DAT_0058a79c);
    FUN_004ffac0();
    fVar14 = (float10)FUN_0043f960();
    if (fVar14 * (float10)_DAT_00588884 < (float10)(float)param_1[0x133]) {
      FUN_004ffac0();
      fVar14 = (float10)FUN_0043f960();
      param_1[0x133] = (int)(float)(fVar14 * (float10)_DAT_00588884);
    }
  }
  fStack_100 = -fVar1;
  fStack_108 = 0.0;
  fStack_104 = 0.0;
  pfVar7 = (float *)FUN_005488cc(auStack_b0,&fStack_108,auStack_4c);
  if (pfVar7 != &fStack_130) {
    fStack_130 = *pfVar7;
    fStack_12c = pfVar7[1];
    fStack_128 = pfVar7[2];
  }
  FUN_00548748(auStack_8c);
  piVar8 = (int *)FUN_0041ce00();
  iVar12 = *piVar8;
  iVar2 = piVar8[1];
  bVar3 = true;
  uVar6 = FUN_0041cda0();
  if ((uVar6 & 0x40) == 0) {
    bVar3 = (float)param_1[0x119] == _DAT_00582ad8;
    fVar14 = (float10)FUN_0041ce10();
    fVar1 = (float)param_1[0x119];
    param_1[0x119] = (int)(float)(fVar14 + (float10)fVar1);
    if ((float10)_DAT_00583354 < fVar14 + (float10)fVar1) {
      param_1[0x135] = (int)((float)param_1[0x135] * (float)_DAT_0058ac20);
    }
  }
  else {
    param_1[0x135] = (int)((float)param_1[0x135] - (float)iVar12 * _DAT_005900c8);
    if ((float)param_1[0x119] != _DAT_00582ad8) {
      bVar3 = false;
      param_1[0x119] = 0;
    }
  }
  param_1[0x134] = (int)((float)iVar2 * _DAT_005900c8 + (float)param_1[0x134]);
  FUN_0041d580(&fStack_118,&fStack_130,&fStack_124);
  fStack_13c = SQRT(fStack_114 * fStack_114 + fStack_110 * fStack_110 + fStack_118 * fStack_118);
  if ((float)_DAT_00587db8 < fStack_13c) {
    fVar1 = _DAT_00583354 / fStack_13c;
    fStack_118 = fStack_118 * fVar1;
    fStack_114 = fStack_114 * fVar1;
    fStack_110 = fStack_110 * fVar1;
    FUN_004ffac0();
    fVar14 = (float10)FUN_0043f960();
    if ((float10)fStack_13c < fVar14) {
      fStack_13c = (float)fVar14;
    }
    if ((float10)_DAT_00588884 * fVar14 < (float10)fStack_13c) {
      fStack_13c = (float)((float10)_DAT_00588884 * fVar14);
    }
    fVar14 = fVar14 * (float10)_DAT_00583340;
    iVar12 = 0;
    fStack_10c = (float)fVar14;
    if (fVar14 < (float10)fStack_13c != (fVar14 == (float10)fStack_13c)) {
      do {
        uVar9 = FUN_00434a40(auStack_98,fStack_10c,&fStack_118,&fStack_124);
        FUN_0041d550(&fStack_108,uVar9);
        fVar1 = fStack_10c + _DAT_005900c4;
        fStack_130 = fStack_108;
        fStack_12c = fStack_104;
        fStack_128 = fStack_100;
        uVar9 = FUN_00434a40(auStack_c8,fVar1,&fStack_118,&fStack_124);
        FUN_0041d550(auStack_b0,uVar9);
        pvStack_f8 = (void *)0x0;
        pvStack_f4 = (void *)0x0;
        uStack_f0 = 0;
        pbVar17 = abStack_fc;
        uVar9 = 0x42200000;
        pfVar7 = &fStack_108;
        puVar16 = auStack_b0;
        iStack_4._0_1_ = 2;
        FUN_0041c940(puVar16,pfVar7,0x42200000,pbVar17);
        FUN_0041f800(puVar16,pfVar7,uVar9,pbVar17);
        pvVar4 = pvStack_f4;
        if ((pvStack_f8 != (void *)0x0) && ((int)pvStack_f4 - (int)pvStack_f8 >> 5 != 0)) {
          iStack_4._0_1_ = 1;
          for (pvVar13 = pvStack_f8; pvVar13 != pvVar4; pvVar13 = (void *)((int)pvVar13 + 0x20)) {
            FUN_004506b0(0);
          }
          goto LAB_004d6e76;
        }
        iVar12 = iVar12 + 1;
        iStack_4._0_1_ = 1;
        fStack_10c = fVar1;
        if (0x14 < iVar12) {
          pvVar13 = pvStack_f8;
          if (pvStack_f8 != (void *)0x0) {
            for (; pvVar13 != pvVar4; pvVar13 = (void *)((int)pvVar13 + 0x20)) {
              FUN_004506b0(0);
            }
LAB_004d6e76:
                    /* WARNING: Subroutine does not return */
            operator_delete(pvStack_f8);
          }
          break;
        }
        pvVar13 = pvStack_f8;
        if (pvStack_f8 != (void *)0x0) {
          for (; pvVar13 != pvVar4; pvVar13 = (void *)((int)pvVar13 + 0x20)) {
            FUN_004506b0(0);
          }
                    /* WARNING: Subroutine does not return */
          operator_delete(pvStack_f8);
        }
        pvStack_f8 = (void *)0x0;
        pvStack_f4 = (void *)0x0;
        uStack_f0 = 0;
      } while (fVar1 < fStack_13c != (fVar1 == fStack_13c));
    }
  }
  pfVar7 = (float *)(param_1 + 0x13c);
  uVar9 = FUN_0041d580(auStack_c8,&fStack_130,pfVar7,0x40800000);
  pfVar10 = (float *)FUN_0043fa40(auStack_98,uVar9);
  *pfVar7 = *pfVar7 + *pfVar10;
  param_1[0x13d] = (int)(pfVar10[1] + (float)param_1[0x13d]);
  param_1[0x13e] = (int)(pfVar10[2] + (float)param_1[0x13e]);
  uVar6 = FUN_0041cda0();
  if (((((uVar6 & 0x40) != 0) && (!bVar3)) ||
      ((uVar6 = FUN_0041cda0(), (uVar6 & 0x40) == 0 && (bVar3)))) && (&fStack_130 != pfVar7)) {
    *pfVar7 = fStack_130;
    param_1[0x13d] = (int)fStack_12c;
    param_1[0x13e] = (int)fStack_128;
  }
  if (((((char)param_1[0x10f] == '\0') || (param_1[0x12f] != 0)) ||
      (*(char *)((int)param_1 + 0x469) != '\0')) ||
     ((param_1[0xb9] != 0 || ((float)param_1[0xb] <= _DAT_00582ad8)))) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_fc,"firstperson");
    iStack_4._0_1_ = 5;
    puVar11 = (undefined4 *)FUN_00457170(abStack_fc);
    *puVar11 = 0;
    iStack_4._0_1_ = 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_fc);
  }
  else {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_fc,"firstperson");
    iStack_4._0_1_ = 3;
    pfVar10 = (float *)FUN_00457170(abStack_fc);
    bVar3 = *pfVar10 == _DAT_00582ad8;
    iStack_4._0_1_ = 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_fc);
    if (bVar3) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (abStack_fc,"firstperson");
      iStack_4._0_1_ = 4;
      puVar11 = (undefined4 *)FUN_00457170(abStack_fc);
      *puVar11 = 0x3f800000;
      iStack_4._0_1_ = 1;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_fc);
      param_1[0x138] = 0;
    }
    puVar16 = auStack_c8;
    (**(code **)(*param_1 + 0x88))(puVar16);
    uVar9 = FUN_00547ab0(puVar16);
    FUN_0041d430(uVar9);
    fStack_120 = fStack_120 + _DAT_005900c0;
    uVar9 = FUN_0041d5b0(auStack_c8,&local_e0,0x41200000);
    FUN_00430600(uVar9);
    FUN_0041d430(&fStack_124);
    FUN_0041d430(&fStack_130);
    uVar9 = FUN_0041d5b0(auStack_c8,&local_e0,0x428c0000);
    FUN_00430600(uVar9);
    fVar1 = (float)param_1[0x138];
    if ((float)param_1[0x138] < _DAT_005900bc) {
      fVar1 = _DAT_005900bc;
    }
    fStack_120 = fStack_120 + fVar1;
  }
  FUN_0041e610(pfVar7,&fStack_124,0);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(auStack_4c,0x10,4,FUN_00407150);
  iStack_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(auStack_8c,0x10,4,FUN_00407150);
  ExceptionList = pvStack_c;
  return;
}




/* Function: FUN_0051e400 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051e400(int *param_1)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  void *pvVar4;
  SHORT SVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  float *pfVar12;
  void *pvVar13;
  float10 fVar14;
  float10 fVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  undefined1 auStack_14c [4];
  void *pvStack_148;
  void *pvStack_144;
  undefined4 uStack_140;
  undefined1 local_13c [4];
  float fStack_138;
  undefined1 auStack_130 [12];
  undefined1 auStack_124 [12];
  undefined1 auStack_118 [12];
  undefined1 auStack_10c [64];
  undefined1 auStack_cc [64];
  undefined1 auStack_8c [64];
  undefined1 auStack_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057f68c;
  pvStack_c = ExceptionList;
  puVar17 = local_13c;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x88))(puVar17);
  FUN_00547ab0(puVar17);
  FUN_004ffac0();
  fVar14 = (float10)FUN_0043f960();
  fVar15 = (float10)_DAT_00588884;
  fVar1 = (float)param_1[0x174];
  FUN_004ffac0();
  iVar6 = FUN_0043f940();
  FUN_004ffac0();
  iVar7 = FUN_0043f930();
  fStack_138 = ((float)((float10)fVar1 / (fVar14 * fVar15)) + (float)_DAT_00587c38) *
               (*(float *)(iVar6 + 4) - *(float *)(iVar7 + 4)) + fStack_138;
  if ((float)param_1[0x106] < _DAT_005900d0) {
    param_1[0x106] = -0x415f2684;
  }
  if (_DAT_005900cc < (float)param_1[0x106]) {
    param_1[0x106] = 0x3fa0d97c;
  }
  fStack_174 = 0.0;
  fStack_170 = 0.0;
  fStack_16c = 0.0;
  _eh_vector_constructor_iterator_
            (auStack_cc,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310(0x3f800000);
  iStack_4._0_1_ = 0;
  iStack_4._1_3_ = 0;
  uVar8 = FUN_0041cda0();
  if (((uVar8 & 0x40) != 0) || (0 < param_1[0x164])) {
    FUN_005475f4(_DAT_00589ee8 - (float)param_1[0x105]);
  }
  FUN_005476c0(param_1[0x106]);
  fVar1 = (float)param_1[0x174];
  if (param_1[0x164] == 0) {
    SVar5 = GetAsyncKeyState(0x21);
    if (((SVar5 < 0) || (SVar5 = GetAsyncKeyState(0x6d), SVar5 < 0)) ||
       (uVar8 = FUN_0041cda0(), (uVar8 & 0x200) != 0)) {
      param_1[0x174] = (int)((float)param_1[0x174] - _DAT_0058a79c);
      FUN_004ffac0();
      fVar15 = (float10)FUN_0043f960();
      if ((float10)(float)param_1[0x174] < fVar15 + (float10)_DAT_005900c4) {
        FUN_004ffac0();
        fVar15 = (float10)FUN_0043f960();
        param_1[0x174] = (int)(float)(fVar15 + (float10)_DAT_005900c4);
      }
    }
    SVar5 = GetAsyncKeyState(0x22);
    if (((SVar5 < 0) || (SVar5 = GetAsyncKeyState(0x6b), SVar5 < 0)) ||
       (uVar8 = FUN_0041cda0(), (uVar8 & 0x400) != 0)) {
      fVar3 = (float)param_1[0x174] + _DAT_0058a79c;
      param_1[0x174] = (int)fVar3;
      uStack_158 = (double)fVar3;
      FUN_004ffac0();
      fVar15 = (float10)FUN_0043f960();
      if (fVar15 * (float10)_DAT_0058ab88 < (float10)uStack_158) {
        FUN_004ffac0();
        fVar15 = (float10)FUN_0043f960();
        param_1[0x174] = (int)(float)(fVar15 * (float10)_DAT_0058ab88);
      }
    }
  }
  fStack_164 = 0.0;
  fStack_160 = 0.0;
  fStack_15c = fVar1;
  pfVar9 = (float *)FUN_005488cc(auStack_130,&fStack_164,auStack_cc);
  if (pfVar9 != &fStack_174) {
    fStack_174 = *pfVar9;
    fStack_170 = pfVar9[1];
    fStack_16c = pfVar9[2];
  }
  fStack_170 = fStack_170 + _DAT_0058a79c;
  uVar10 = (**(code **)(*param_1 + 0x90))();
  FUN_00548748(uVar10);
  puVar11 = (undefined8 *)FUN_0041ce00();
  uStack_158 = (double)*puVar11;
  bVar2 = true;
  if (param_1[0x164] == 0) {
    uVar8 = FUN_0041cda0();
    if ((uVar8 & 0x40) == 0) {
      bVar2 = (float)param_1[0x14b] == _DAT_00582ad8;
      fVar15 = (float10)FUN_0041ce10();
      fVar1 = (float)param_1[0x14b];
      param_1[0x14b] = (int)(float)(fVar15 + (float10)fVar1);
      if ((float10)_DAT_00583354 < fVar15 + (float10)fVar1) {
        param_1[0x105] = (int)((float)param_1[0x105] * (float)_DAT_0058ac20);
      }
    }
    else {
      param_1[0x105] = (int)((float)(int)uStack_158 * _DAT_00591ab4 + (float)param_1[0x105]);
      if ((float)param_1[0x14b] != _DAT_00582ad8) {
        bVar2 = false;
        param_1[0x14b] = 0;
      }
    }
    param_1[0x106] = (int)((float)uStack_158._4_4_ * _DAT_00591ab4 + (float)param_1[0x106]);
  }
  else {
    fVar14 = (float10)FUN_0041ce10();
    fVar14 = (float10)(float)param_1[0x165] - fVar14;
    fVar15 = (float10)_DAT_00582ad8;
    param_1[0x165] = (int)(float)fVar14;
    if (fVar14 < fVar15 == (fVar14 == fVar15)) {
      fVar15 = (float10)_DAT_00583354 - fVar14 / (float10)(float)param_1[0x166];
      param_1[0x106] =
           (int)(float)(((float10)(float)param_1[0x16a] - (float10)(float)param_1[0x169]) * fVar15 +
                       (float10)(float)param_1[0x169]);
      param_1[0x105] =
           (int)(float)(((float10)(float)param_1[0x168] - (float10)(float)param_1[0x167]) * fVar15 +
                       (float10)(float)param_1[0x167]);
      FUN_004ffac0();
      fVar15 = (float10)FUN_0043f960();
      param_1[0x174] = (int)(float)(fVar15 + fVar15);
    }
    else {
      param_1[0x164] = 0;
    }
  }
  FUN_0041d580(&fStack_180,&fStack_174,local_13c);
  fStack_184 = SQRT(fStack_17c * fStack_17c + fStack_178 * fStack_178 + fStack_180 * fStack_180);
  if ((float)_DAT_00587db8 < fStack_184) {
    fVar1 = _DAT_00583354 / fStack_184;
    fStack_180 = fStack_180 * fVar1;
    fStack_17c = fStack_17c * fVar1;
    fStack_178 = fStack_178 * fVar1;
    FUN_004ffac0();
    fVar15 = (float10)FUN_0043f960();
    if ((float10)fStack_184 < fVar15) {
      fStack_184 = (float)((float10)_DAT_00588884 * fVar15);
    }
    if ((float10)_DAT_00588884 * fVar15 < (float10)fStack_184) {
      fStack_184 = (float)((float10)_DAT_00588884 * fVar15);
    }
    fVar15 = fVar15 + (float10)_DAT_0058ac2c;
    iVar6 = 0;
    fStack_168 = (float)fVar15;
    if (fVar15 < (float10)fStack_184 != (fVar15 == (float10)fStack_184)) {
      do {
        uVar10 = FUN_00434a40(auStack_118,fStack_168,&fStack_180,local_13c);
        FUN_0041d550(&fStack_164,uVar10);
        fVar1 = fStack_168 + _DAT_00588d98;
        fStack_174 = fStack_164;
        fStack_170 = fStack_160;
        fStack_16c = fStack_15c;
        uVar10 = FUN_00434a40(auStack_124,fVar1,&fStack_180,local_13c);
        FUN_0041d550(auStack_130,uVar10);
        pvStack_148 = (void *)0x0;
        pvStack_144 = (void *)0x0;
        uStack_140 = 0;
        puVar17 = auStack_14c;
        pfVar9 = &fStack_164;
        uVar10 = 0x41f00000;
        puVar16 = auStack_130;
        iStack_4._0_1_ = 1;
        FUN_0041c940(puVar16,pfVar9,0x41f00000,puVar17);
        FUN_0041f800(puVar16,pfVar9,uVar10,puVar17);
        pvVar4 = pvStack_144;
        if (pvStack_148 != (void *)0x0) {
          iVar7 = (int)pvStack_144 - (int)pvStack_148 >> 5;
          uStack_158 = (double)CONCAT44(uStack_158._4_4_,iVar7);
          if (iVar7 != 0) {
            iStack_4._0_1_ = 0;
            for (pvVar13 = pvStack_148; pvVar13 != pvVar4; pvVar13 = (void *)((int)pvVar13 + 0x20))
            {
              FUN_004506b0(0);
            }
            goto LAB_0051ea75;
          }
        }
        iVar6 = iVar6 + 1;
        iStack_4._0_1_ = 0;
        fStack_168 = fVar1;
        if (0x14 < iVar6) {
          pvVar13 = pvStack_148;
          if (pvStack_148 != (void *)0x0) {
            for (; pvVar13 != pvVar4; pvVar13 = (void *)((int)pvVar13 + 0x20)) {
              FUN_004506b0(0);
            }
LAB_0051ea75:
                    /* WARNING: Subroutine does not return */
            operator_delete(pvStack_148);
          }
          break;
        }
        pvVar13 = pvStack_148;
        if (pvStack_148 != (void *)0x0) {
          for (; pvVar13 != pvVar4; pvVar13 = (void *)((int)pvVar13 + 0x20)) {
            FUN_004506b0(0);
          }
                    /* WARNING: Subroutine does not return */
          operator_delete(pvStack_148);
        }
        pvStack_148 = (void *)0x0;
        pvStack_144 = (void *)0x0;
        uStack_140 = 0;
      } while (fVar1 < fStack_184 != (fVar1 == fStack_184));
    }
  }
  pfVar9 = (float *)(param_1 + 0x157);
  uVar10 = FUN_0041d580(auStack_124,&fStack_174,pfVar9,0x40400000);
  pfVar12 = (float *)FUN_0043fa40(auStack_118,uVar10);
  *pfVar9 = *pfVar9 + *pfVar12;
  param_1[0x158] = (int)(pfVar12[1] + (float)param_1[0x158]);
  param_1[0x159] = (int)(pfVar12[2] + (float)param_1[0x159]);
  if ((param_1[0x164] == 0) &&
     ((((uVar8 = FUN_0041cda0(), (uVar8 & 0x40) != 0 && (!bVar2)) ||
       ((uVar8 = FUN_0041cda0(), (uVar8 & 0x40) == 0 && (bVar2)))) && (&fStack_174 != pfVar9)))) {
    *pfVar9 = fStack_174;
    param_1[0x158] = (int)fStack_170;
    param_1[0x159] = (int)fStack_16c;
  }
  param_1[0x158] = (int)fStack_170;
  if (((*(char *)((int)param_1 + 0x521) == '\0') || ((float)param_1[0xb] <= _DAT_00582ad8)) ||
     (param_1[0x164] != 0)) {
    FUN_0041e610(pfVar9,local_13c,0);
  }
  else {
    uVar10 = (**(code **)(*param_1 + 0x88))();
    FUN_00407260(uVar10);
    iStack_4._0_1_ = 2;
    FUN_00547ab0(&uStack_158);
    fStack_180 = 0.0;
    fStack_17c = 0.0;
    fStack_178 = 0.0;
    FUN_00545c38(&fStack_180);
    fStack_180 = 0.0;
    fStack_17c = 0.0;
    fStack_178 = -1.0;
    FUN_005488cc(auStack_130,&fStack_180,auStack_10c);
    uVar10 = FUN_0041d5b0(auStack_124,auStack_130,param_1[0x175]);
    FUN_0041d550(&fStack_164,&uStack_158,uVar10);
    (**(code **)(*param_1 + 0x94))("fpcamera",&fStack_164,0);
    fStack_160 = fStack_160 + _DAT_00588878;
    uVar10 = FUN_00546f8c(auStack_8c,0x40490fdb);
    uVar10 = FUN_0041d7a0(auStack_4c,uVar10,auStack_10c);
    FUN_0041d670(uVar10);
    _eh_vector_destructor_iterator_(auStack_4c,0x10,4,FUN_00407150);
    _eh_vector_destructor_iterator_(auStack_8c,0x10,4,FUN_00407150);
    FUN_00545c38(&fStack_164);
    uVar10 = FUN_0051a500(auStack_8c);
    iStack_4._0_1_ = 3;
    FUN_0041e330(1,uVar10);
    iStack_4._0_1_ = 2;
    _eh_vector_destructor_iterator_(auStack_8c,0x10,4,FUN_00407150);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    _eh_vector_destructor_iterator_(auStack_10c,0x10,4,FUN_00407150);
  }
  iStack_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(auStack_cc,0x10,4,FUN_00407150);
  ExceptionList = pvStack_c;
  return;
}





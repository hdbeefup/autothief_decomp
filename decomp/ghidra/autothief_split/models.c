/* models functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_0042b540 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * __fastcall FUN_0042b540(undefined4 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  DWORD _Seed;
  undefined4 *puVar3;
  int iVar4;
  uint unaff_retaddr;
  int local_dc;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_d8 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_bc [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_a0 [28];
  char local_84 [128];
  uint local_4;
  
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  FUN_0040d9f0();
  *param_1 = &PTR_LAB_00588160;
  FUN_004ff070();
  *(undefined1 *)(param_1 + 0x2c) = 1;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
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
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  FUN_004298c0();
  FUN_004298c0();
  FUN_004298c0();
  FUN_00407f80(0x3f800000);
  FUN_00407f80(0x3f800000);
  FUN_00407f80(0x3f800000);
  FUN_00407f80(0x3f800000);
  *(undefined1 *)(param_1 + 0xac) = 0;
  uVar1 = FUN_0041fa10();
  param_1[0xae] = uVar1;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  FUN_004f9330();
  FUN_0040dae0();
  param_1[0x524] = 0;
  FUN_00549e70();
  FUN_004ff070();
  FUN_0045edd0();
  FUN_0052c8c0();
  FUN_0042e090();
  param_1[0x5c1] = 0;
  FUN_004ff070();
  FUN_0052c800();
  param_1[0x5f0] = 0;
  param_1[0x5f1] = 0;
  param_1[0x5f2] = 0;
  param_1[0x5f3] = 0;
  param_1[0x5f4] = 0;
  *(undefined1 *)(param_1 + 0x63b) = 0;
  *(undefined1 *)((int)param_1 + 0x18ed) = 0;
  *(undefined1 *)((int)param_1 + 0x18ee) = 0;
  *(undefined1 *)((int)param_1 + 0x18ef) = 0;
  *(undefined1 *)(param_1 + 0x63c) = 0;
  *(undefined1 *)((int)param_1 + 0x18f1) = 1;
  *(undefined1 *)((int)param_1 + 0x18f2) = 0;
  *(undefined1 *)((int)param_1 + 0x18f3) = 0;
  *(undefined1 *)(param_1 + 0x63d) = 0;
  param_1[0x63e] = 0;
  param_1[0x63f] = 0;
  param_1[0x640] = 0;
  param_1[0x641] = 0;
  param_1[0x642] = 0;
  param_1[0x643] = 0;
  param_1[0x644] = 0;
  param_1[0x64b] = 0;
  param_1[0x64c] = 0;
  param_1[0x64d] = 0;
  param_1[0x66e] = 0;
  param_1[0x66f] = 0;
  param_1[0x670] = 0x42700000;
  *(undefined1 *)(param_1 + 0x6b7) = 0;
  param_1[0x6b8] = 0;
  param_1[0x6b9] = 0;
  param_1[0x671] = 0x40a00000;
  param_1[0x672] = 0x469c4000;
  param_1[0x6ba] = 0;
  param_1[0x6bb] = 0;
  param_1[0x6bc] = 0;
  param_1[0x6bf] = 0x469c4000;
  param_1[0x6be] = 0x40a00000;
  *(undefined1 *)(param_1 + 0x6bd) = 0;
  param_1[0x6c0] = 0x3f800000;
  param_1[0x6c1] = 0x3f800000;
  param_1[0x6c2] = 0x3f800000;
  param_1[0x6c3] = 0x3f800000;
  FUN_004fe660();
  *(undefined1 *)(param_1 + 0x879) = 0;
  param_1[0x87a] = 0;
  *(undefined1 *)(param_1 + 0x87b) = 0;
  FUN_004298c0();
  param_1[0x886] = 0;
  param_1[0x887] = 0;
  param_1[0x889] = 0;
  param_1[0x88a] = 0;
  param_1[0x88b] = 0;
  param_1[0x6b5] = 0;
  param_1[0x6b6] = 0;
  DAT_005b5f2c = param_1;
  param_1[0x2a] = 0x3d4ccccd;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_00407310(0x3f800000);
  FUN_00407310(0x3f800000);
  FUN_00407310(0x3f800000);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)((int)param_1 + 0xbd) = 1;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_d8,"Config.ini");
  FUN_0042a7a0(local_d8);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d8);
  FUN_004252f0(&DAT_00588158,&LAB_0052bda0);
  FUN_004252f0("models\\blackguy_with_bat",FUN_0052bd10);
  FUN_004252f0("models\\concept",FUN_00521710);
  FUN_004252f0("models\\concept2",FUN_00521710);
  FUN_004252f0("models\\concept3",FUN_00521710);
  FUN_004252f0("models\\concept4",FUN_00521710);
  FUN_004252f0("models\\concept5",FUN_00521710);
  FUN_004252f0("models\\concept6",FUN_00521710);
  FUN_004252f0("models\\concept7",FUN_00521710);
  FUN_004252f0("models\\concept8",FUN_00521710);
  FUN_004252f0("models\\pikap",FUN_00521710);
  FUN_004252f0("models\\jeep",FUN_00521710);
  FUN_004252f0("models\\furgon",FUN_00521710);
  FUN_004252f0("models\\furgon1",FUN_00521710);
  FUN_004252f0("models\\bus",FUN_00521710);
  FUN_004252f0("models\\taxi",FUN_00521710);
  FUN_004252f0("models\\police",FUN_00521710);
  FUN_004252f0("models\\tcar1",FUN_00521710);
  FUN_004252f0("models\\universal",FUN_00521710);
  FUN_00549f50("text.str");
  FUN_005499f0(1);
  FUN_0051a0b0("text.dlg",param_1 + 0x526);
  param_1[0x25] = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_bc,".\\Textures\\");
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d8,"Sun");
  FUN_00429a60(local_bc,local_d8,0xffffffff);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d8);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_bc);
  pvVar2 = operator_new(0x3c,(nothrow_t *)&DAT_005b6164);
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0040ee20();
  }
  param_1[0x524] = uVar1;
  FUN_00409a00(uVar1);
  pvVar2 = operator_new(0x50,(nothrow_t *)&DAT_005b6164);
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0051a050();
  }
  param_1[0x525] = uVar1;
  _Seed = GetTickCount();
  srand(_Seed);
  param_1[0x2b] = 0;
  param_1[0x5c1] = 0;
  iVar4 = 0;
  puVar3 = param_1 + 0x64e;
  do {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_a0,".\\Textures\\Caust\\");
    sprintf(local_84,"caust%02d",iVar4);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_bc,local_84);
    FUN_00429a60(local_a0,local_bc,0xffffffff);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_bc);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d8,local_84);
    FUN_00420ca0(&local_dc,local_d8);
    if (param_1[0x50] == local_dc) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(local_dc + 0x24);
    }
    *puVar3 = uVar1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d8);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_a0);
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar4 < 0x20);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_a0,"MBALPHA");
  FUN_0042dc20(local_a0,0x3f000000);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_a0);
  pvVar2 = operator_new(0x10,(nothrow_t *)&DAT_005b6164);
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004ff070();
  }
  param_1[0x5f0] = uVar1;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  FUN_0040e950(0xffffffff);
  if (param_1[0x4c] != 0) {
    *(undefined1 *)(param_1[0x4c] + 0x28) = 1;
  }
  return param_1;
}




/* Function: FUN_00446bd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FUN_00446bd0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char param_6)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  void *pvVar7;
  uint unaff_retaddr;
  undefined *puVar8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_20 [28];
  uint local_4;
  
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  cVar3 = (**(code **)(*param_1 + 0x10))();
  if (cVar3 != '\0') {
    cVar3 = FUN_004454a0();
    if (cVar3 != '\0') {
      uVar4 = FUN_0041cf90(param_3);
      FUN_00411e6c(abStack_20,uVar4);
      pcVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(abStack_20);
      FUN_00410720("CPMTemplate::Load(%s)\n",pcVar5);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_1 + 0x8d),"");
      puVar8 = &DAT_00582818;
      pcVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(abStack_20);
      iVar6 = FUN_00410660(pcVar5,puVar8);
      if (iVar6 == 0) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_20);
        uVar4 = 0;
      }
      else {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (param_1 + 0x8d),abStack_20);
        FUN_0040f000(param_1 + 0x21,1,0x128,iVar6);
        uVar2 = *(ushort *)((int)param_1 + 0x18a);
        if (uVar2 != 0) {
          param_1[0x70] = (uint)uVar2;
          pvVar7 = operator_new((uint)uVar2 * 0xc,(nothrow_t *)&DAT_005b6164);
          param_1[0x6f] = (int)pvVar7;
          FUN_0040f000(pvVar7,0xc,param_1[0x70],iVar6);
          if ((*(byte *)(param_1 + 0x62) & 1) == 0) {
            param_1[0x78] = (uint)*(ushort *)((int)param_1 + 0x18a);
            pvVar7 = operator_new((uint)*(ushort *)((int)param_1 + 0x18a) * 2,
                                  (nothrow_t *)&DAT_005b6164);
            param_1[0x77] = (int)pvVar7;
            FUN_0040f000(pvVar7,2,param_1[0x78],iVar6);
          }
          if ((*(byte *)(param_1 + 0x62) & 2) != 0) {
            param_1[0x72] = (uint)*(ushort *)((int)param_1 + 0x18a);
            pvVar7 = operator_new((uint)*(ushort *)((int)param_1 + 0x18a) * 0xc,
                                  (nothrow_t *)&DAT_005b6164);
            param_1[0x71] = (int)pvVar7;
            FUN_0040f000(pvVar7,0xc,param_1[0x72],iVar6);
          }
        }
        uVar2 = *(ushort *)(param_1 + 99);
        if (uVar2 != 0) {
          param_1[0x7a] = (uint)uVar2;
          pvVar7 = operator_new((uint)uVar2 * 0x2c,(nothrow_t *)&DAT_005b6164);
          param_1[0x79] = (int)pvVar7;
          FUN_0040f000(pvVar7,0x2c,param_1[0x7a],iVar6);
          if ((*(byte *)(param_1 + 0x62) & 4) != 0) {
            param_1[0x74] = (uint)*(ushort *)(param_1 + 99);
            pvVar7 = operator_new((uint)*(ushort *)(param_1 + 99) << 5,(nothrow_t *)&DAT_005b6164);
            param_1[0x73] = (int)pvVar7;
            FUN_0040f000(pvVar7,0x20,param_1[0x74],iVar6);
          }
        }
        bVar1 = *(byte *)((int)param_1 + 0x192);
        if (bVar1 != 0) {
          param_1[0x7c] = (uint)bVar1;
          pvVar7 = operator_new((uint)bVar1 * 0x4c,(nothrow_t *)&DAT_005b6164);
          param_1[0x7b] = (int)pvVar7;
          FUN_0040f000(pvVar7,0x4c,param_1[0x7c],iVar6);
        }
        bVar1 = *(byte *)((int)param_1 + 0x18e);
        if (bVar1 != 0) {
          param_1[0x76] = (uint)bVar1;
          pvVar7 = operator_new((uint)bVar1 * 0x50,(nothrow_t *)&DAT_005b6164);
          param_1[0x75] = (int)pvVar7;
          FUN_0040f000(pvVar7,0x50,param_1[0x76],iVar6);
        }
        FUN_0040efb0(iVar6);
        FUN_00410720("Loaded %d vertices %d triangles %d materials %d helpers\n",
                     *(undefined2 *)((int)param_1 + 0x18a),(short)param_1[99],
                     *(undefined1 *)((int)param_1 + 0x18e),*(undefined1 *)((int)param_1 + 0x192));
        FUN_0043fbe0(param_4);
        if (param_6 != '\0') {
          FUN_00446470(param_2,param_4,param_5);
        }
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_20);
        uVar4 = 1;
      }
      return uVar4;
    }
  }
  return 0;
}




/* Function: FUN_0044b950 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044b950(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float10 fVar4;
  undefined1 local_d;
  undefined4 local_c;
  
  local_c = FUN_0041ce80();
  iVar1 = FUN_0041c940();
  if (iVar1 == 0) {
    FUN_0041ce80("Can\'t insert col file in NULL level");
    uVar2 = FUN_0041e5b0();
    FUN_0040a410(uVar2);
    FUN_00412cfc(param_1,0,0);
    return 1;
  }
  iVar1 = FUN_0041ce80();
  if (iVar1 != 0) {
    FUN_0054fe64(param_1,1,0,0x3ff00000);
    piVar3 = (int *)FUN_004cf110();
    if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 0x48))(&local_d), iVar1 != 0)) {
      iVar1 = FUN_0044b140(param_1,2);
      uVar2 = 0;
      if (iVar1 != 0) {
        fVar4 = (float10)FUN_0054fe64(param_1,3,0,0);
        if (fVar4 <= (float10)_DAT_00582ae8) {
          FUN_00474820(local_c,iVar1);
        }
        else {
          FUN_00477ac0(local_c,iVar1);
        }
        uVar2 = 0x3ff00000;
      }
      goto LAB_0044ba2d;
    }
  }
  uVar2 = 0;
LAB_0044ba2d:
  FUN_00412cfc(param_1,0,uVar2);
  return 1;
}




/* Function: FUN_00450760 */

undefined4 FUN_00450760(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined1 local_1f1;
  float fStack_1f0;
  undefined4 local_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  int iStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined1 auStack_1ac [4];
  undefined1 auStack_1a8 [80];
  undefined1 auStack_158 [64];
  undefined1 auStack_118 [64];
  undefined1 auStack_d8 [64];
  undefined1 auStack_98 [64];
  undefined1 auStack_58 [68];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0057be3b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_1ec = FUN_0041ce80();
  iVar1 = FUN_0041c940();
  if (iVar1 == 0) {
    FUN_0041ce80("Can\'t insert col file in NULL level");
    uVar2 = FUN_0041e5b0();
    FUN_0040a410(uVar2);
    FUN_00412cfc(param_1,0,0);
  }
  else {
    iVar1 = FUN_0041ce80();
    if (iVar1 != 0) {
      FUN_0054fe64(param_1,1,0,0x3ff00000);
      piVar3 = (int *)FUN_004cf110();
      if ((piVar3 != (int *)0x0) &&
         (iStack_1c8 = (**(code **)(*piVar3 + 0x48))(&local_1f1), iStack_1c8 != 0)) {
        uVar2 = FUN_0054fe20(param_1,2,auStack_1ac);
        fVar6 = (float10)FUN_0054fe64(param_1,3,0,0);
        fStack_1e0 = (float)fVar6;
        fVar6 = (float10)FUN_0054fe64(param_1,4,0,0);
        fStack_1dc = (float)fVar6;
        fVar6 = (float10)FUN_0054fe64(param_1,5,0,0);
        fStack_1f0 = (float)fVar6;
        fVar6 = (float10)FUN_0054fe64(param_1,6,0,0);
        fStack_1cc = (float)fVar6;
        fVar6 = (float10)FUN_0054fe64(param_1,7,0,0);
        fStack_1d0 = (float)fVar6;
        fVar6 = (float10)FUN_0054fe64(param_1,8,0,0);
        fStack_1d4 = (float)fVar6;
        fVar6 = (float10)FUN_0054fe64(param_1,9,0,0x3ff00000);
        fStack_1e4 = (float)fVar6;
        fVar6 = (float10)FUN_0054fe64(param_1,10,0,0x3ff00000);
        fStack_1e8 = (float)fVar6;
        fVar6 = (float10)FUN_0054fe64(param_1,0xb,0,0x3ff00000);
        fStack_1d8 = (float)fVar6;
        _eh_vector_constructor_iterator_
                  (auStack_1a8,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
        FUN_00407310(0x3f800000);
        uStack_c = 0;
        FUN_005476c0(fStack_1cc);
        FUN_005475f4(fStack_1d0);
        FUN_00547528(fStack_1d4);
        fStack_1b8 = fStack_1e0;
        fStack_1b4 = fStack_1dc;
        fStack_1b0 = fStack_1f0;
        uVar4 = FUN_005463f0(auStack_58,&fStack_1b8);
        uVar5 = FUN_005489a8(auStack_1a8);
        fStack_1f0 = (float)FUN_005485e8(uVar5);
        fStack_1c4 = fStack_1e4;
        fStack_1c0 = fStack_1e8;
        fStack_1bc = fStack_1d8;
        uVar5 = FUN_00545edc(auStack_118,&fStack_1c4);
        uVar5 = FUN_0041d7a0(auStack_158,uVar5,fStack_1f0);
        uVar4 = FUN_0041d7a0(auStack_98,uVar5,uVar4);
        FUN_0041d670(uVar4);
        _eh_vector_destructor_iterator_(auStack_98,0x10,4,FUN_00407150);
        _eh_vector_destructor_iterator_(auStack_158,0x10,4,FUN_00407150);
        _eh_vector_destructor_iterator_(auStack_118,0x10,4,FUN_00407150);
        _eh_vector_destructor_iterator_(auStack_d8,0x10,4,FUN_00407150);
        _eh_vector_destructor_iterator_(auStack_58,0x10,4,FUN_00407150);
        FUN_004781f0(local_1ec,uVar2,auStack_1a8);
        FUN_00412cfc(param_1,0,0x3ff00000);
        uStack_c = 0xffffffff;
        _eh_vector_destructor_iterator_(auStack_1a8,0x10,4,FUN_00407150);
        ExceptionList = local_14;
        return 1;
      }
    }
    FUN_00412cfc(param_1,0,0);
  }
  ExceptionList = local_14;
  return 1;
}




/* Function: FUN_00472ff0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00472ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                  undefined4 param_5,int param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  void *pvVar4;
  uint unaff_retaddr;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_bc [44];
  char local_90 [128];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057cb3b;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  if ((param_6 == -1) || (param_7 == -1)) {
    ExceptionList = &local_c;
    _snprintf(local_90,0x80,"models\\%s",param_2);
  }
  else {
    ExceptionList = &local_c;
    iVar1 = rand();
    _snprintf(local_90,0x80,"models\\%s%d",param_2,iVar1 % ((param_7 - param_6) + 1) + param_6);
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_bc,local_90);
  uVar7 = 1;
  uVar6 = 1;
  uVar5 = 0;
  uVar2 = FUN_0041c940(0,1,1);
  iVar1 = FUN_00429280(local_bc,uVar2,uVar5,uVar6,uVar7);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_bc);
  if ((iVar1 != 0) &&
     ((piVar3 = (int *)FUN_00420910(local_90), piVar3 != (int *)0x0 ||
      ((pvVar4 = operator_new(0x290,(nothrow_t *)&DAT_005b6164), pvVar4 != (void *)0x0 &&
       (piVar3 = (int *)FUN_005057c0(), piVar3 != (int *)0x0)))))) {
    FUN_004ffb10(iVar1);
    FUN_004ffa80(0);
    FUN_00501a80(0);
    _eh_vector_constructor_iterator_
              (&local_e0,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
    local_e0 = 0x3f800000;
    local_dc = 0;
    local_d8 = 0;
    local_d4 = 0;
    local_d0 = 0x3f800000;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = 0;
    local_c0 = 0x3f800000;
    local_4 = 0;
    FUN_00549408(param_4[2]);
    FUN_005494a8(param_4[1]);
    FUN_0054954c(*param_4);
    uVar2 = FUN_00548cb8(&local_e0);
    FUN_00501ee0(param_3,param_5,uVar2);
    iVar1 = *piVar3;
    uVar2 = FUN_0041c940();
    (**(code **)(iVar1 + 0x1c))(param_1,uVar2);
    uVar5 = 1;
    uVar2 = FUN_0041c940(1);
    FUN_00423250(piVar3,uVar2,uVar5);
    uVar2 = param_1;
    FUN_0041c940(param_1);
    FUN_0042a4f0(uVar2);
    iVar1 = *piVar3;
    uVar2 = FUN_0041c930(param_1);
    (**(code **)(iVar1 + 0x14))(uVar2);
    FUN_004ffb80(1);
    (**(code **)(*piVar3 + 4))(0);
    piVar3[0x7b] = (int)(_DAT_005a2594 * _DAT_00587fa8);
    FUN_004ff6f0(1);
    local_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(&local_e0,0xc,3,FUN_00407150);
    ExceptionList = local_c;
    return piVar3;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}




/* Function: FUN_004732a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004732a0(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint local_20;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c [28];
  
  iVar1 = _strnicmp(param_2,"models\\indoor",0xd);
  local_20 = (uint)(iVar1 != 0);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c,param_2);
  uVar6 = 1;
  uVar5 = 0;
  uVar2 = FUN_0041c940(0,1,local_20);
  iVar1 = FUN_00429280(local_1c,uVar2,uVar5,uVar6,local_20);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
  if (iVar1 == 0) {
    return (int *)0x0;
  }
  piVar3 = (int *)FUN_00420910(param_2);
  if ((piVar3 == (int *)0x0) &&
     ((pvVar4 = operator_new(0x290,(nothrow_t *)&DAT_005b6164), pvVar4 == (void *)0x0 ||
      (piVar3 = (int *)FUN_005057c0(), piVar3 == (int *)0x0)))) {
    return (int *)0x0;
  }
  FUN_004ffb10(iVar1);
  FUN_004ffa80(0);
  FUN_00501a80(0);
  (**(code **)(*piVar3 + 0x8c))(param_3);
  iVar1 = *piVar3;
  uVar2 = FUN_0041c940();
  (**(code **)(iVar1 + 0x1c))(param_1,uVar2);
  uVar5 = 1;
  uVar2 = FUN_0041c940(1);
  FUN_00423250(piVar3,uVar2,uVar5);
  uVar2 = param_1;
  FUN_0041c940(param_1);
  FUN_0042a4f0(uVar2);
  iVar1 = *piVar3;
  uVar2 = FUN_0041c930(param_1);
  (**(code **)(iVar1 + 0x14))(uVar2);
  FUN_004ffb80(0);
  piVar3[0x7b] = (int)(_DAT_005a2594 * _DAT_00587fa8);
  FUN_004ff6f0(1);
  iVar1 = _strnicmp(param_2,"models\\gs",9);
  if (iVar1 != 0) {
    (**(code **)(*piVar3 + 4))(0);
  }
  return piVar3;
}




/* Function: FUN_004d3aa0 */

undefined4 __thiscall
FUN_004d3aa0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_4c [28];
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
  puStack_8 = &LAB_0057ddba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0041c940();
  uVar2 = 0;
  if (iVar1 != 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_4c,"models\\rush");
    piVar4 = (int *)0x0;
    uVar7 = 0;
    uVar6 = 1;
    uVar5 = 0;
    uVar2 = FUN_0041c940(0,1,0);
    iVar1 = FUN_00429280(local_4c,uVar2,uVar5,uVar6,uVar7);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4c);
    pvVar3 = operator_new(0x518,(nothrow_t *)&DAT_005b6164);
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      piVar4 = (int *)FUN_004db9c0();
    }
    local_4 = 0xffffffff;
    if ((piVar4 == (int *)0x0) || (iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      FUN_004ffb10(iVar1);
      FUN_004ffa80(0);
      FUN_00501a80(0);
      FUN_004ff6f0(1);
      _eh_vector_constructor_iterator_
                (&local_30,0xc,3,(_func_void_void_ptr *)&LAB_0041d400,FUN_00407150);
      local_30 = 0x3f800000;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0x3f800000;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0x3f800000;
      local_68 = (float)param_3;
      local_64 = (float)param_4;
      local_4 = 1;
      local_74 = 0x3f800000;
      local_70 = 0x3f800000;
      local_6c = 0x3f800000;
      local_60 = (float)param_5;
      uVar2 = FUN_00548cb8(&local_30);
      FUN_00501ee0(&local_68,&local_74,uVar2);
      iVar1 = *piVar4;
      uVar2 = FUN_0041c940();
      (**(code **)(iVar1 + 0x1c))(param_2,uVar2);
      iVar1 = (**(code **)(*piVar4 + 0x70))(&stack0xffffff7b);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x340) = param_6;
      }
      uVar5 = 1;
      uVar2 = FUN_0041c940(1);
      FUN_00423250(piVar4,uVar2,uVar5);
      FUN_0041c940(param_2);
      FUN_0042a4f0(param_2);
      *(int **)(param_1 + 0x9c) = piVar4;
      local_4 = 0xffffffff;
      _eh_vector_destructor_iterator_(&local_30,0xc,3,FUN_00407150);
      uVar2 = 1;
    }
  }
  ExceptionList = local_c;
  return uVar2;
}




/* Function: FUN_004d3cd0 */

undefined4 __thiscall FUN_004d3cd0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_34 [2];
  undefined4 local_2c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ddfa;
  pvStack_c = ExceptionList;
  puVar5 = local_34;
  ExceptionList = &pvStack_c;
  FUN_004ffac0(puVar5);
  FUN_0043f950();
  FUN_0041d410(puVar5);
  local_34[0] = 0;
  local_2c = 0;
  pvVar1 = operator_new(0xdc,(nothrow_t *)&DAT_005b6164);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    param_3 = 0;
  }
  else {
    uVar2 = FUN_0043f920("dyn.col");
    this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00411994(local_28,uVar2);
    puVar5 = local_34;
    uVar4 = 0x3f800000;
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar2 = (**(code **)(*param_1 + 0x88))(0x3f800000,puVar5);
    pcVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(this);
    param_3 = FUN_00432dc0(param_3,pcVar3,uVar2,uVar4,puVar5);
  }
  local_4 = 0xffffffff;
  if (pvVar1 != (void *)0x0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  }
  FUN_004225c0(&param_3);
  ExceptionList = pvStack_c;
  return 1;
}




/* Function: FUN_004d46c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004d46c0(undefined4 param_1,char *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  uint unaff_retaddr;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_c9;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_c8 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_ac [28];
  char local_90 [128];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057defe;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  iVar1 = _stricmp(param_2,"cat");
  if (iVar1 == 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_c8,"models\\cat");
    uVar7 = 0;
    uVar6 = 1;
    uVar5 = 0;
    uVar2 = FUN_0041c940(0,1,0);
    uVar2 = FUN_00429280(local_c8,uVar2,uVar5,uVar6,uVar7);
    *param_3 = uVar2;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_c8);
    pvVar3 = operator_new(0x438,(nothrow_t *)&DAT_005b6164);
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      iVar1 = FUN_004d4340();
      *param_4 = iVar1;
      ExceptionList = local_c;
      return;
    }
  }
  else {
    iVar1 = _stricmp(param_2,"dog");
    if (iVar1 == 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_c8,"models\\dog");
      uVar7 = 0;
      uVar6 = 1;
      uVar5 = 0;
      uVar2 = FUN_0041c940(0,1,0);
      uVar2 = FUN_00429280(local_c8,uVar2,uVar5,uVar6,uVar7);
      *param_3 = uVar2;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_c8);
      pvVar3 = operator_new(0x438,(nothrow_t *)&DAT_005b6164);
      local_4 = 1;
      if (pvVar3 != (void *)0x0) {
        iVar1 = FUN_004d4130();
        *param_4 = iVar1;
        ExceptionList = local_c;
        return;
      }
    }
    else {
      iVar1 = _stricmp(param_2,"blackguy_with_bat");
      if (iVar1 == 0) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  (local_c8,"models\\blackguy_with_bat");
        uVar7 = 0;
        uVar6 = 1;
        uVar5 = 0;
        uVar2 = FUN_0041c940(0,1,0);
        uVar2 = FUN_00429280(local_c8,uVar2,uVar5,uVar6,uVar7);
        *param_3 = uVar2;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_c8);
        pvVar3 = operator_new(0x438,(nothrow_t *)&DAT_005b6164);
        local_4 = 2;
        if (pvVar3 != (void *)0x0) {
          iVar1 = FUN_004d41b0();
          *param_4 = iVar1;
          ExceptionList = local_c;
          return;
        }
      }
      else {
        iVar1 = _stricmp(param_2,"cop");
        if (iVar1 == 0) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_c8,"models\\cop");
          uVar7 = 0;
          uVar6 = 1;
          uVar5 = 0;
          uVar2 = FUN_0041c940(0,1,0);
          uVar2 = FUN_00429280(local_c8,uVar2,uVar5,uVar6,uVar7);
          *param_3 = uVar2;
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_c8);
          pvVar3 = operator_new(0x440,(nothrow_t *)&DAT_005b6164);
          local_4 = 3;
          if (pvVar3 != (void *)0x0) {
            iVar1 = FUN_004d4260();
            *param_4 = iVar1;
            ExceptionList = local_c;
            return;
          }
        }
        else {
          iVar1 = _stricmp(param_2,"teen");
          if (iVar1 != 0) {
            iVar1 = _stricmp(param_2,"bom1");
            if (((((iVar1 == 0) || (iVar1 = _stricmp(param_2,"bom2"), iVar1 == 0)) ||
                 (iVar1 = _stricmp(param_2,"bom3"), iVar1 == 0)) ||
                ((((iVar1 = _stricmp(param_2,"chgirl"), iVar1 == 0 ||
                   (iVar1 = _stricmp(param_2,"chboy"), iVar1 == 0)) ||
                  ((iVar1 = _stricmp(param_2,"worker"), iVar1 == 0 ||
                   ((iVar1 = _stricmp(param_2,"medic"), iVar1 == 0 ||
                    (iVar1 = _stricmp(param_2,"chinamafiose"), iVar1 == 0)))))) ||
                 (iVar1 = _stricmp(param_2,"oldsaler"), iVar1 == 0)))) ||
               (((iVar1 = _stricmp(param_2,"girl1"), iVar1 == 0 ||
                 (iVar1 = _stricmp(param_2,"cop"), iVar1 == 0)) ||
                (iVar1 = _stricmp(param_2,"girl2"), iVar1 == 0)))) {
              _snprintf(local_90,0x80,"models\\%s",param_2);
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_c8,local_90);
              uVar7 = 0;
              uVar6 = 1;
              uVar5 = 0;
              uVar2 = FUN_0041c940(0,1,0);
              uVar2 = FUN_00429280(local_c8,uVar2,uVar5,uVar6,uVar7);
              *param_3 = uVar2;
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_c8);
              pvVar3 = operator_new(0x438,(nothrow_t *)&DAT_005b6164);
              local_4 = 5;
              if (pvVar3 == (void *)0x0) {
                iVar1 = 0;
              }
              else {
                iVar1 = FUN_004d4390();
              }
            }
            else {
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_ac,param_2);
              uVar7 = 0;
              uVar6 = 1;
              uVar5 = 0;
              uVar2 = FUN_0041c940(0,1,0);
              uVar2 = FUN_00429280(local_ac,uVar2,uVar5,uVar6,uVar7);
              *param_3 = uVar2;
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_ac);
              piVar4 = (int *)FUN_00420910(param_2);
              iVar1 = (**(code **)(*piVar4 + 0x7c))(&local_c9);
              if (iVar1 == 0) {
                (**(code **)(*piVar4 + 0xc))(1);
                ExceptionList = local_c;
                return;
              }
            }
            *param_4 = iVar1;
            ExceptionList = local_c;
            return;
          }
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_c8,"models\\teen");
          uVar7 = 0;
          uVar6 = 1;
          uVar5 = 0;
          uVar2 = FUN_0041c940(0,1,0);
          uVar2 = FUN_00429280(local_c8,uVar2,uVar5,uVar6,uVar7);
          *param_3 = uVar2;
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_c8);
          pvVar3 = operator_new(0x438,(nothrow_t *)&DAT_005b6164);
          local_4 = 4;
          if (pvVar3 != (void *)0x0) {
            iVar1 = FUN_004d42e0();
            *param_4 = iVar1;
            ExceptionList = local_c;
            return;
          }
        }
      }
    }
  }
  *param_4 = 0;
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004dc170 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004dc170(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e172;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_0041ce80(param_1);
  if (iVar2 == 0) {
    FUN_0041ce80("Trying to insert splatters in non-existing scene");
    uVar3 = FUN_0041e5b0();
    FUN_0040a410(uVar3);
    FUN_00412cfc(param_2,0,0);
    ExceptionList = local_c;
    return 1;
  }
  uVar3 = FUN_0041ce80();
  iVar2 = FUN_0041c940();
  if (iVar2 == 0) {
    FUN_0041ce80("Can\'t insert splatters in NULL level");
    uVar3 = FUN_0041e5b0();
    FUN_0040a410(uVar3);
    FUN_00412cfc(param_2,0,0);
  }
  else {
    pvVar4 = operator_new(0xac,(nothrow_t *)&DAT_005b6164);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_004e3890();
    }
    iVar2 = *piVar5;
    local_4 = 0xffffffff;
    uVar6 = FUN_0041c940();
    (**(code **)(iVar2 + 0x1c))(uVar3,uVar6);
    uVar6 = 1;
    uVar3 = FUN_0041c940();
    FUN_00423250(piVar5,uVar3,uVar6);
    FUN_0041c940();
    FUN_0042a4f0();
    iVar2 = FUN_0044ab40();
    dVar1 = (double)iVar2;
    if (iVar2 < 0) {
      dVar1 = dVar1 + _DAT_00589ec0;
    }
    FUN_00412cfc(param_2,dVar1);
  }
  ExceptionList = local_c;
  return 1;
}




/* Function: FUN_00525300 */

int __fastcall FUN_00525300(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iStack00000004;
  char *pcVar7;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_0057f8bf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 700));
  iVar5 = 0;
  local_4 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x7c);
  do {
    puVar1[-0x18] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1[0x48] = 0;
    puVar1[0x60] = 0;
    *(undefined1 *)(param_1 + 1 + iVar5) = 1;
    puVar1[0x78] = 0;
    iVar5 = iVar5 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar5 < 0x18);
  uVar2 = FUN_004456c0("idle1");
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar2 = FUN_004456c0("idlecarry");
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  uVar2 = FUN_004456c0("idle2");
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar2 = FUN_004456c0("idle3");
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = FUN_004456c0("idle4");
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = FUN_004456c0("idle5");
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = FUN_004456c0(&DAT_00592190);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_004456c0("walkcarry");
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  uVar2 = FUN_004456c0("walkback");
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  iVar5 = FUN_004456c0(&DAT_00587ea0);
  *(int *)(param_1 + 0x38) = iVar5;
  if (iVar5 == -1) {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
  }
  uVar2 = FUN_004456c0("runback");
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = FUN_004456c0("stepright");
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  uVar2 = FUN_004456c0("stepright");
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  uVar2 = FUN_004456c0(&DAT_0059215c);
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  iVar5 = FUN_004456c0(&DAT_00592154);
  *(int *)(param_1 + 0x54) = iVar5;
  if (iVar5 == -1) {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x1c);
  }
  iVar5 = FUN_004456c0("attack");
  *(int *)(param_1 + 0x5c) = iVar5;
  if (iVar5 == -1) {
    uVar2 = FUN_004456c0(&DAT_00590060);
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
  }
  iVar5 = FUN_004456c0("attackclose");
  *(int *)(param_1 + 0x60) = iVar5;
  if (iVar5 == -1) {
    uVar2 = FUN_004456c0(&DAT_0059213c);
    *(undefined4 *)(param_1 + 0x60) = uVar2;
  }
  uVar2 = FUN_004456c0("fallback");
  *(undefined4 *)(param_1 + 100) = uVar2;
  uVar2 = FUN_004456c0("fallfront");
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  uVar2 = FUN_004456c0("jumpside");
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  uVar2 = FUN_004456c0("pizzawaiter");
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  uVar2 = FUN_004456c0("pizzawaiter1");
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  iStack00000004 = 0x18;
  piVar6 = (int *)(param_1 + 0xdc);
  do {
    iVar5 = FUN_004449b0(piVar6[-0x30]);
    *piVar6 = iVar5;
    piVar6[0x18] = (iVar5 - piVar6[0x30]) / 2;
    iStack00000004 = iStack00000004 + -1;
    piVar6 = piVar6 + 1;
  } while (iStack00000004 != 0);
  *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x128) + -1;
  pcVar7 = "models\\boy";
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x124) + -1;
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar3);
  iVar5 = _stricmp(pcVar4,pcVar7);
  if (iVar5 == 0) {
LAB_00525597:
    *(undefined4 *)(param_1 + 0x184) = 0x15;
    *(undefined4 *)(param_1 + 0x188) = 0x15;
    *(undefined4 *)(param_1 + 0x108) = 0x16;
    *(undefined4 *)(param_1 + 0x1fc) = 0x40490fdb;
    *(undefined4 *)(param_1 + 0x220) = 0x40490fdb;
    *(undefined4 *)(param_1 + 0x224) = 0x40490fdb;
    *(undefined4 *)(param_1 + 0x1d0) = 0x16;
    *(undefined4 *)(param_1 + 0x274) = 0;
    *(undefined4 *)(param_1 + 0x27c) = 0xc20c0000;
    *(undefined4 *)(param_1 + 0x228) = 0x3fc90fdb;
    *(undefined1 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 3;
    *(undefined4 *)(param_1 + 0x230) = 0x3fc90fdb;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x110) = 0x17;
    *(undefined4 *)(param_1 + 0x22c) = 0x3fc90fdb;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x1cc) = 0x17;
    *(undefined4 *)(param_1 + 0x10c) = 0x20;
  }
  else {
    pcVar7 = "models\\rush";
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0043f920();
    pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(pbVar3);
    iVar5 = _stricmp(pcVar4,pcVar7);
    if (iVar5 == 0) goto LAB_00525597;
  }
  pcVar7 = "models\\bom1";
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar3);
  iVar5 = _stricmp(pcVar4,pcVar7);
  if (iVar5 != 0) {
    pcVar7 = "models\\bom2";
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0043f920();
    pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(pbVar3);
    iVar5 = _stricmp(pcVar4,pcVar7);
    if (iVar5 != 0) {
      pcVar7 = "models\\bom3";
      pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_0043f920();
      pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(pbVar3);
      iVar5 = _stricmp(pcVar4,pcVar7);
      if (iVar5 != 0) goto LAB_005256a6;
    }
  }
  *(undefined4 *)(param_1 + 0x1fc) = 0x3fc90fdb;
  *(undefined4 *)(param_1 + 0x210) = 0x3fc90fdb;
  *(undefined4 *)(param_1 + 0x234) = 0x3fc90fdb;
LAB_005256a6:
  pcVar7 = "models\\skatesaler";
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar3);
  iVar5 = _stricmp(pcVar4,pcVar7);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x210) = 0x3fc90fdb;
  }
  pcVar7 = "models\\teen";
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar3);
  iVar5 = _stricmp(pcVar4,pcVar7);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x210) = 0x3fc90fdb;
    *(undefined4 *)(param_1 + 0x23c) = 0x40490fdb;
  }
  pcVar7 = "models\\toolsaler";
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar3);
  iVar5 = _stricmp(pcVar4,pcVar7);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x210) = 0x3fc90fdb;
    *(undefined4 *)(param_1 + 0x23c) = 0x40490fdb;
  }
  pcVar7 = "models\\owner";
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar3);
  iVar5 = _stricmp(pcVar4,pcVar7);
  if (iVar5 == 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_1 + 700),"Thumbnail\\owner");
  }
  pcVar7 = "models\\blackguy_with_bat";
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar3);
  iVar5 = _stricmp(pcVar4,pcVar7);
  if (iVar5 == 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_1 + 700),"Thumbnail\\blackguy_with_bat");
  }
  pcVar7 = "models\\chinamafiose";
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar3);
  iVar5 = _stricmp(pcVar4,pcVar7);
  if (iVar5 == 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_1 + 700),"Thumbnail\\chinamafiose");
  }
  pcVar7 = "models\\dog";
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar3);
  iVar5 = _stricmp(pcVar4,pcVar7);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x17c) = 5;
  }
  pcVar7 = "models\\blackguy_with_bat";
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar3);
  iVar5 = _stricmp(pcVar4,pcVar7);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x17c) = 0x19;
  }
  if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_1 + 0x210);
  }
  if (*(int *)(param_1 + 0x54) == *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x1fc);
    *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0x25c);
  }
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00528ea0 */

undefined4 __thiscall FUN_00528ea0(int *param_1,undefined4 param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_3c [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [24];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_20 [32];
  
  *(undefined1 *)(param_1 + 0xcf) = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38,"sex");
  pcVar6 = "male";
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50();
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar1,pcVar6);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
  pvVar2 = operator_new(0x2d8,(nothrow_t *)&DAT_005b6164);
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00525300(param_1[0x8a]);
  }
  pcVar7 = "models\\cop";
  param_1[0xac] = iVar3;
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar1);
  iVar3 = _stricmp(pcVar6,pcVar7);
  if (iVar3 == 0) {
LAB_00528fc7:
    param_1[0xf5] = 0x3f933333;
  }
  else {
    pcVar7 = "models\\bom1";
    pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0043f920();
    pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(pbVar1);
    iVar3 = _stricmp(pcVar6,pcVar7);
    if (iVar3 == 0) goto LAB_00528fc7;
    pcVar7 = "models\\bom2";
    pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0043f920();
    pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(pbVar1);
    iVar3 = _stricmp(pcVar6,pcVar7);
    if (iVar3 == 0) goto LAB_00528fc7;
    pcVar7 = "models\\bom3";
    pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0043f920();
    pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(pbVar1);
    iVar3 = _stricmp(pcVar6,pcVar7);
    if (iVar3 == 0) goto LAB_00528fc7;
    pcVar7 = "models\\owner";
    pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0043f920();
    pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(pbVar1);
    iVar3 = _stricmp(pcVar6,pcVar7);
    if (iVar3 == 0) goto LAB_00528fc7;
  }
  pcVar7 = "models\\worker";
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar1);
  iVar3 = _stricmp(pcVar6,pcVar7);
  if (iVar3 == 0) {
    param_1[0xf5] = 0x3f88f5c3;
  }
  pcVar7 = "models\\chboy";
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar1);
  iVar3 = _stricmp(pcVar6,pcVar7);
  if (iVar3 == 0) {
LAB_00529046:
    param_1[0xf5] = 0x3f99999a;
  }
  else {
    pcVar7 = "models\\oldsaler";
    pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0043f920();
    pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(pbVar1);
    iVar3 = _stricmp(pcVar6,pcVar7);
    if (iVar3 == 0) goto LAB_00529046;
  }
  pcVar7 = "models\\skatesaler";
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar1);
  iVar3 = _stricmp(pcVar6,pcVar7);
  if (iVar3 == 0) {
    param_1[0xf5] = 0x3f8f5c29;
  }
  pcVar7 = "models\\medic";
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar1);
  iVar3 = _stricmp(pcVar6,pcVar7);
  if (iVar3 == 0) {
    param_1[0xf5] = 0x3f0ccccd;
  }
  pcVar7 = "models\\clown";
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar1);
  iVar3 = _stricmp(pcVar6,pcVar7);
  if (iVar3 == 0) {
    param_1[0xf5] = 0x3f19999a;
  }
  pcVar7 = "models\\rush";
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar1);
  iVar3 = _stricmp(pcVar6,pcVar7);
  if (iVar3 == 0) {
    param_1[0xf5] = 0x3f99999a;
  }
  pcVar7 = "models\\chgirl";
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar1);
  iVar3 = _stricmp(pcVar6,pcVar7);
  if (iVar3 == 0) {
LAB_0052915e:
    *(undefined1 *)(param_1 + 0xcf) = 0;
    param_1[0xf5] = 0x3f99999a;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38,"sex");
    pcVar6 = "female";
    pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_00429f50();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (pbVar1,pcVar6);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
  }
  else {
    pcVar7 = "models\\girl1";
    pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0043f920();
    pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(pbVar1);
    iVar3 = _stricmp(pcVar6,pcVar7);
    if (iVar3 == 0) goto LAB_0052915e;
    pcVar7 = "models\\girl2";
    pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0043f920();
    pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(pbVar1);
    iVar3 = _stricmp(pcVar6,pcVar7);
    if (iVar3 == 0) goto LAB_0052915e;
  }
  pcVar7 = "models\\bom1";
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar1);
  iVar3 = _stricmp(pcVar6,pcVar7);
  if (iVar3 == 0) {
LAB_00529203:
    param_1[0xe2] = 0x3f000000;
  }
  else {
    pcVar7 = "models\\bom2";
    pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0043f920();
    pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(pbVar1);
    iVar3 = _stricmp(pcVar6,pcVar7);
    if (iVar3 == 0) goto LAB_00529203;
    pcVar7 = "models\\bom3";
    pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0043f920();
    pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(pbVar1);
    iVar3 = _stricmp(pcVar6,pcVar7);
    if (iVar3 == 0) goto LAB_00529203;
  }
  pcVar7 = "cat";
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar1);
  iVar3 = _stricmp(pcVar6,pcVar7);
  if (iVar3 != 0) {
    pcVar7 = "dog";
    pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0043f920();
    pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(pbVar1);
    iVar3 = _stricmp(pcVar6,pcVar7);
    if (iVar3 != 0) goto LAB_00529283;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38,"sex");
  pcVar6 = "animal";
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50();
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar1,pcVar6);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
LAB_00529283:
  (**(code **)(*param_1 + 0xc0))(param_2);
  FUN_0053e690(param_2,param_2);
  FUN_0041cae0();
  uVar4 = FUN_0042dbb0();
  FUN_00412e58(uVar4,"character_InitialUpdate");
  uVar5 = FUN_0044ab40(param_1);
  FUN_00412cfc(uVar4,(double)uVar5);
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str(pbVar1);
  FUN_00412d30(uVar4);
  FUN_00412798(uVar4,2,0);
  FUN_004ffac0();
  FUN_0043fae0();
  param_1[0xf6] = param_1[0xf5];
  pcVar7 = "models\\worker";
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar6 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar1);
  iVar3 = _stricmp(pcVar6,pcVar7);
  if (iVar3 == 0) {
    param_1[0xf6] = 0x3f666666;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (abStack_3c,"MaxDecaledShadows");
  uVar4 = FUN_004224c0(abStack_20,abStack_3c);
  iVar3 = FUN_0040e4b0(uVar4);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_20);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_3c);
  if (iVar3 < 1) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_20,"Shadow\\character");
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_3c,".\\Textures\\");
    FUN_00429a60(abStack_3c,abStack_20,1);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_3c);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_20);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_20,"Shadow\\character");
    iVar3 = FUN_004222d0();
    param_1[0x10c] = iVar3;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_20);
  }
  return 1;
}





/* rendering functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_00405070 */

undefined4 __fastcall FUN_00405070(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar6;
  char *pcVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar8;
  undefined4 uVar9;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_178 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_15c [8];
  undefined4 uStack_154;
  undefined4 uStack_144;
  uint local_140 [5];
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_fc [16];
  undefined1 auStack_ec [12];
  uint uStack_e0;
  uint uStack_6c;
  uint uStack_38;
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057a908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GetCurrentThreadId();
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_005b3b58 + 0x10);
  iVar2 = FUN_004010f0();
  if (-1 < iVar2) {
    FUN_00405030();
    LeaveCriticalSection(lpCriticalSection);
  }
  FUN_00404fd0();
  FUN_00404fd0();
  FUN_004067c0();
  *(undefined4 *)(param_1 + 0x1b4c) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x1b50) = *(undefined4 *)(param_1 + 4);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_178,(char *)&PTR_LAB_00582b08);
  pbVar8 = local_178;
  local_4 = 0;
  FUN_0041cae0(pbVar8);
  FUN_0042dc20(pbVar8);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_178);
  piVar3 = (int *)Direct3DCreate8();
  if (piVar3 == (int *)0x0) {
    uVar4 = FUN_0041e5b0();
    FUN_0040a410(uVar4);
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = FUN_0041e5b0();
    FUN_0040a410(uVar4);
    puVar6 = local_140;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_178,"FullScreen");
    local_4 = 1;
    uVar4 = FUN_004224c0(local_15c);
    cVar1 = FUN_0040e560(uVar4);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_15c);
    local_4 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_178);
    if (cVar1 == '\0') {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_178,"ScreenWidth");
      local_4 = 4;
      uVar4 = FUN_004224c0(local_15c);
      local_140[0] = FUN_0040e470(uVar4);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_15c);
      local_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_178);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_178,"ScreenHeight");
      local_4 = 5;
      uVar4 = FUN_004224c0(local_15c);
      local_140[1] = FUN_0040e470(uVar4);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_15c);
      local_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_178);
      local_124 = 1;
    }
    else {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_178,"ScreenWidth");
      local_4 = 2;
      uVar4 = FUN_004224c0(local_15c);
      local_140[0] = FUN_0040e470(uVar4);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_15c);
      local_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_178);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_178,"ScreenHeight");
      local_4 = 3;
      uVar4 = FUN_004224c0(local_15c);
      local_140[1] = FUN_0040e470(uVar4);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_15c);
      local_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_178);
      local_124 = 0;
      SetWindowLongA(*(HWND *)(param_1 + 4),-0x10,0);
    }
    if (local_140[0] < 0x280) {
      local_140[0] = 0x280;
    }
    if (local_140[1] < 0x1e0) {
      local_140[1] = 0x1e0;
    }
    (**(code **)(*piVar3 + 0x20))(piVar3,0);
    local_140[0] = 1;
    local_140[2] = 1;
    local_140[3] = *(undefined4 *)(param_1 + 4);
    uStack_144 = 0x15;
    local_140[1] = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    local_124 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    (**(code **)(*piVar3 + 0x34))(piVar3,0,1,auStack_ec);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xfffffe6c,"ForceSVP");
    uStack_20 = 6;
    uVar4 = FUN_004224c0(local_178,&stack0xfffffe6c);
    cVar1 = FUN_0040e560(uVar4,0);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_178);
    uStack_20 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xfffffe6c);
    if ((uStack_e0 & 0x10000) == 0) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = (-(uint)(cVar1 != '\0') & 0xffffffe0) + 0x40;
    }
    if ((uStack_38 & 0xff00) < 0x100) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_178,"false");
      uStack_20 = 7;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &stack0xfffffe6c,"BumpMapping");
      FUN_0042a4a0(&stack0xfffffe6c,local_178);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &stack0xfffffe6c);
      uStack_20 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_178);
    }
    if ((uStack_6c & 0x200000) == 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &stack0xfffffe6c,"false");
      uStack_20 = 8;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_178,"EMBM")
      ;
      FUN_0042a4a0(local_178,&stack0xfffffe6c);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_178);
      uStack_20 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &stack0xfffffe6c);
    }
    if ((uStack_6c & 0x18) == 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &stack0xfffffe6c,"false");
      uStack_20 = 9;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_178,"BumpMapping");
      FUN_0042a4a0(local_178,&stack0xfffffe6c);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_178);
      uStack_20 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &stack0xfffffe6c);
    }
    if ((uVar5 & 0x40) == 0) {
      pcVar7 = "Engine: Using software vertex processing";
    }
    else {
      pcVar7 = "Engine: Using hardware vertex processing";
    }
    uVar4 = FUN_0041e5b0(pcVar7);
    FUN_0040a410(uVar4);
    cVar1 = FUN_00420a40(piVar3,local_15c,0,uVar5);
    if (cVar1 == '\0') {
      uVar4 = FUN_0041e5b0("Engine: trying to create device with default format");
      FUN_0040a410(uVar4);
      uStack_154 = uStack_11c;
      cVar1 = FUN_00420a40(piVar3,local_15c,0,uVar5);
      if (cVar1 == '\0') {
        uVar4 = FUN_0041e5b0("Engine: trying to create device with 16 bit format");
        FUN_0040a410(uVar4);
        uStack_154 = 0x17;
        cVar1 = FUN_00420a40(piVar3,local_15c,0,uVar5);
        if (cVar1 == '\0') {
          uVar4 = FUN_0041e5b0("Engine: D3D device creation failed");
          FUN_0040a410(uVar4);
          (**(code **)(*piVar3 + 8))(piVar3);
          ExceptionList = local_c;
          return 0xffffffff;
        }
      }
    }
    (**(code **)(*piVar3 + 8))(piVar3);
    uVar4 = FUN_0041e5b0();
    FUN_0040a410(uVar4);
    FUN_0042b2d0();
    ShowWindow(*(HWND *)(param_1 + 4),0);
    if (local_124 == 0) {
      MoveWindow(*(HWND *)(param_1 + 4),0,0,local_140[0],local_140[1],1);
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_15c,"@console twidth  58");
    uVar4 = 1;
    pbVar8 = local_15c;
    FUN_0041e5b0(pbVar8,1);
    FUN_0040bef0(pbVar8,uVar4);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_15c);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_15c,"@console theight 30");
    uVar4 = 1;
    pbVar8 = local_15c;
    FUN_0041e5b0(pbVar8,1);
    FUN_0040bef0(pbVar8,uVar4);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_15c);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_fc,"@console cheight 30");
    uVar4 = 1;
    pbVar8 = abStack_fc;
    FUN_0041e5b0(pbVar8,1);
    FUN_0040bef0(pbVar8,uVar4);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_fc);
    EnableWindow(*(HWND *)(param_1 + 4),1);
    SetActiveWindow(*(HWND *)(param_1 + 4));
    SetFocus(*(HWND *)(param_1 + 4));
    ShowWindow(*(HWND *)(param_1 + 4),5);
    uVar9 = 0x55;
    uVar4 = 0x57;
    FUN_0041cf50(0x57,0x55);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x44;
    uVar4 = 0x53;
    FUN_0041cf50(0x53,0x44);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x4c;
    uVar4 = 0x41;
    FUN_0041cf50(0x41,0x4c);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x52;
    uVar4 = 0x44;
    FUN_0041cf50(0x44,0x52);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x4f;
    uVar4 = 0x20;
    FUN_0041cf50(0x20,0x4f);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x41;
    uVar4 = 0xd;
    FUN_0041cf50(0xd,0x41);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x7e;
    uVar4 = 0x1b;
    FUN_0041cf50(0x1b,0x7e);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x4b;
    uVar4 = 0x43;
    FUN_0041cf50(0x43,0x4b);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x47;
    uVar4 = 0x56;
    FUN_0041cf50(0x56,0x47);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x2d;
    uVar4 = 0x21;
    FUN_0041cf50(0x21,0x2d);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x2b;
    uVar4 = 0x22;
    FUN_0041cf50(0x22,0x2b);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x54;
    uVar4 = 0x54;
    FUN_0041cf50(0x54,0x54);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x4d;
    uVar4 = 0x4d;
    FUN_0041cf50(0x4d,0x4d);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x45;
    uVar4 = 0x45;
    FUN_0041cf50(0x45,0x45);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x49;
    uVar4 = 0x49;
    FUN_0041cf50(0x49,0x49);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x48;
    uVar4 = 0x48;
    FUN_0041cf50(0x48,0x48);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x42;
    uVar4 = 0x42;
    FUN_0041cf50(0x42,0x42);
    FUN_0040ef30(uVar4,uVar9);
    uVar9 = 0x53;
    uVar4 = 0x11;
    FUN_0041cf50(0x11,0x53);
    FUN_0040ef30(uVar4,uVar9);
    uVar4 = FUN_0041e5b0();
    FUN_0040a410(uVar4);
    FUN_004298e0();
    uVar4 = 0;
  }
  ExceptionList = local_c;
  return uVar4;
}




/* Function: FUN_004235b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004235b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_88;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_84 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_68 [28];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057b074;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x19c0) = param_2;
  *(int *)(param_1 + 0x1acc) = param_1 + 0x19cc;
  iVar1 = *(int *)(param_1 + 0x1920);
  *(undefined4 *)(param_1 + 0x19c4) = param_3;
  *(undefined4 *)(param_1 + 0x19c8) = param_4;
  *(int *)(param_1 + 0x1ad0) = param_1 + 0x1a4c;
  local_88 = 1.3333334;
  if (iVar1 != 0) {
    local_88 = (float)*(int *)(param_1 + 0x191c);
    if (*(int *)(param_1 + 0x191c) < 0) {
      local_88 = local_88 + _DAT_00582b04;
    }
    fVar6 = (float)iVar1;
    if (iVar1 < 0) {
      fVar6 = fVar6 + _DAT_00582b04;
    }
    local_88 = local_88 / fVar6;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_84,"WaterRefl")
  ;
  local_4 = 0;
  uVar3 = FUN_004224c0(local_68,local_84);
  cVar2 = FUN_0040e560(uVar3,0);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_68);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_84);
  iVar1 = *(int *)(param_1 + 0x130);
  if (((iVar1 == 0) || (iVar4 = *(int *)(iVar1 + 0xe8), iVar4 == 0)) || (cVar2 == '\0')) {
    FUN_00496fb1(*(undefined4 *)(param_1 + 0x1acc),*(float *)(param_1 + 0x19c0) * _DAT_00587d90,
                 local_88,*(undefined4 *)(param_1 + 0x19c4),*(undefined4 *)(param_1 + 0x19c8));
    uVar3 = *(undefined4 *)(param_1 + 0x1ad0);
    fVar6 = (*(float *)(param_1 + 0x19c8) - *(float *)(param_1 + 0x19c4)) * _DAT_00587d88;
    fVar7 = fVar6 + *(float *)(param_1 + 0x19c8);
    fVar6 = fVar6 + *(float *)(param_1 + 0x19c4);
    fVar5 = *(float *)(param_1 + 0x19c0) * _DAT_00587d90;
  }
  else {
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if ((*(char *)(iVar4 + 0x98) == '\0') || (*(char *)(param_1 + 0x18ed) != '\0')) {
      FUN_00496fb1(*(undefined4 *)(param_1 + 0x1acc),*(float *)(param_1 + 0x19c0) * _DAT_00587d90,
                   local_88,*(undefined4 *)(param_1 + 0x19c4),*(undefined4 *)(param_1 + 0x19c8));
      uVar3 = *(undefined4 *)(param_1 + 0x1ad0);
      fVar6 = (*(float *)(param_1 + 0x19c8) - *(float *)(param_1 + 0x19c4)) * _DAT_00587d88;
      fVar7 = fVar6 + *(float *)(param_1 + 0x19c8);
      fVar6 = fVar6 + *(float *)(param_1 + 0x19c4);
      fVar5 = *(float *)(param_1 + 0x19c0) * _DAT_00587d90;
    }
    else {
      FUN_00496fb1(*(undefined4 *)(param_1 + 0x1acc),*(float *)(param_1 + 0x19c0) * _DAT_00587d90,
                   local_88,*(undefined4 *)(param_1 + 0x19c4),
                   *(float *)(param_1 + 0x1afc) + _DAT_00587d94);
      fVar6 = (*(float *)(param_1 + 0x19c8) - *(float *)(param_1 + 0x19c4)) * _DAT_00587d8c;
      fVar7 = fVar6 + *(float *)(param_1 + 0x1afc) + _DAT_00587d94;
      fVar6 = fVar6 + *(float *)(param_1 + 0x19c4);
      fVar5 = *(float *)(param_1 + 0x19c0) * _DAT_00587d90;
      uVar3 = *(undefined4 *)(param_1 + 0x1ad0);
    }
  }
  FUN_00496fb1(uVar3,fVar5,local_88,fVar6,fVar7);
  FUN_0041d620(*(undefined4 *)(param_1 + 0x1acc));
  FUN_0041d670(local_4c);
  if (*(char *)(param_1 + 0x18f3) == '\0') {
    FUN_0041db90();
  }
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_4c,0x10,4,FUN_00407150);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_0042bcc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_0042bcc0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int **ppiVar9;
  undefined4 uVar10;
  void *pvVar11;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  int *unaff_EBX;
  int iVar16;
  uint uVar17;
  uint unaff_retaddr;
  int iVar18;
  int *piVar19;
  undefined4 uVar20;
  int iVar21;
  int ***pppiStack_3a8;
  int *piStack_3a4;
  int *piStack_3a0;
  int iStack_39c;
  int iStack_398;
  undefined4 uStack_394;
  int **ppiStack_390;
  undefined4 uStack_38c;
  int *piStack_388;
  int **ppiStack_384;
  int *piStack_380;
  int iVar22;
  undefined4 *puStack_360;
  int *piStack_35c;
  float fStack_358;
  int **ppiStack_354;
  int *piStack_350;
  undefined4 uStack_34c;
  undefined4 *puStack_348;
  int *piStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  int *piStack_338;
  undefined4 uStack_334;
  int iStack_330;
  int *piStack_32c;
  int iStack_328;
  int *piStack_324;
  undefined4 uStack_320;
  int *piStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  int *piStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  int *piStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  int *piStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  int *piStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  int *piStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  int *piStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  int *piStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  int *piStack_29c;
  int aiStack_298 [3];
  int *piStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  int *piStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  int *piStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  int *piStack_260;
  int *piStack_25c;
  float fStack_258;
  int *piStack_254;
  int *piStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  int *piStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  int *piStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  int *piStack_22c;
  int *piStack_228;
  float fStack_224;
  int *piStack_220;
  int *piStack_21c;
  int iStack_218;
  int *piStack_214;
  int *piStack_210;
  int iStack_20c;
  int *piStack_208;
  int *piStack_204;
  int *piStack_200;
  int *piStack_1fc;
  int *piStack_1f8;
  int *piStack_1f4;
  int *piStack_1f0;
  int *piStack_1ec;
  int *piStack_1e8;
  int iStack_1e4;
  int *piStack_1e0;
  int *piStack_1dc;
  undefined4 uStack_1d8;
  int *piStack_1d4;
  int *piStack_1d0;
  int iStack_1cc;
  int *piStack_1c8;
  int *piStack_1c4;
  int *piStack_1c0;
  int *piStack_1bc;
  int *piStack_1b8;
  int *piStack_1b4;
  int *piStack_1b0;
  int *piStack_1ac;
  int *piStack_1a8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_1a4;
  int **ppiStack_1a0;
  int *piStack_174;
  float fStack_170;
  int iStack_16c;
  undefined4 uStack_168;
  int *piStack_160;
  float fStack_15c;
  int iStack_158;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_154 [16];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_144 [32];
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 auStack_dc [144];
  int aiStack_4c [3];
  undefined1 auStack_40 [60];
  uint local_4;
  
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  if ((int *)param_1[0x5f4] == (int *)0x0) {
    return (int *)0x0;
  }
  iVar5 = (**(code **)(*(int *)param_1[0x5f4] + 0xc))();
  if (iVar5 < 0) {
    if (iVar5 == -0x7789f798) {
      Sleep(100);
      return (int *)0x0;
    }
    if (iVar5 == -0x7789f797) {
      if ((char)param_1[0x63b] == '\x01') {
        FUN_004201c0();
      }
      iVar5 = (**(code **)(*(int *)param_1[0x5f4] + 0x38))();
      if (iVar5 < 0) {
        FUN_0041e5b0();
        ppiStack_1a0 = (int **)0x42bd4f;
        FUN_0040a410();
        iVar5 = 0;
        for (uVar17 = 0;
            (iVar21 = param_1[0x889], iVar21 != 0 && (uVar17 < (uint)(param_1[0x88a] - iVar21 >> 5))
            ); uVar17 = uVar17 + 1) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                    ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(iVar21 + iVar5 + 4));
          ppiStack_1a0 = (int **)0x588224;
          pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x42bd8e;
          pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)FUN_0041e5b0();
          piStack_1a8 = (int *)0x42bd94;
          FUN_0040a410();
          iVar5 = iVar5 + 0x20;
        }
        PostQuitMessage(0);
        return (int *)0x0;
      }
      FUN_0042b2d0();
      return (int *)0x0;
    }
  }
  param_1[0x886] = 3;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_154,"wire");
  iVar5 = *(int *)param_1[0x5f4];
  FUN_004224c0();
  FUN_0040e560();
  (**(code **)(iVar5 + 200))();
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_144);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &piStack_160);
  if (param_1[0x63e] == 0) {
    if (param_1[0x4c] != 0) {
      if ((int *)param_1[0x5f1] != (int *)0x0) {
        ppiStack_1a0 = (int **)param_1[0x5f4];
        pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)0x42be68;
        (**(code **)(*(int *)param_1[0x5f1] + 0x24))();
      }
      if ((int *)param_1[0x5f2] != (int *)0x0) {
        ppiStack_1a0 = (int **)param_1[0x5f4];
        pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)0x42be7f;
        (**(code **)(*(int *)param_1[0x5f2] + 0x24))();
      }
      if ((*(int *)(param_1[0x4c] + 0xe8) != 0) && ((char)param_1[0x63d] != '\0')) {
        ppiStack_1a0 = (int **)0x42beae;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &piStack_160,"WaterRefl");
        ppiStack_1a0 = &piStack_160;
        pbStack_1a4 = abStack_144;
        piStack_1a8 = (int *)0x42bec1;
        ppiStack_1a0 = (int **)FUN_004224c0();
        pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)0x42bec7;
        cVar4 = FUN_0040e560();
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_144);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &piStack_160);
        if (cVar4 == '\0') {
          FUN_0041d7e0();
          piStack_174 = (int *)param_1[0xba];
          fStack_170 = (float)param_1[0xbb];
          iStack_16c = param_1[0xbc];
          ppiStack_1a0 = &piStack_174;
          pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)auStack_40;
          fStack_15c = fStack_170 - _DAT_00587d94;
          piStack_1a8 = (int *)0x42bf47;
          piStack_160 = piStack_174;
          iStack_158 = iStack_16c;
          cVar4 = FUN_0041f720();
          if (cVar4 != '\0') {
            ppiStack_1a0 = (int **)0x42bf64;
            FUN_00505e30();
          }
          pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)param_1[0x5f4];
          ppiStack_1a0 = (int **)0x1c;
          piStack_1a8 = (int *)0x42bf77;
          (**(code **)(*(int *)pbStack_1a4 + 200))();
          piStack_1b0 = (int *)param_1[0x5f4];
          piStack_1a8 = (int *)0xff000000;
          piStack_1ac = (int *)0x22;
          piStack_1b4 = (int *)0x42bf8d;
          (**(code **)(*piStack_1b0 + 200))();
          piStack_1bc = (int *)param_1[0x5f4];
          ppiStack_1a0 = (int **)0x3f800000;
          piStack_1b4 = (int *)0x3f800000;
          piStack_1b8 = (int *)0x26;
          piStack_1c0 = (int *)0x42bfbb;
          (**(code **)(*piStack_1bc + 200))();
          piStack_1c8 = (int *)param_1[0x5f4];
          piStack_1c0 = piStack_1a8;
          piStack_1c4 = (int *)0x24;
          iStack_1cc = 0x42bfd1;
          (**(code **)(*piStack_1c8 + 200))();
          piStack_1d4 = (int *)param_1[0x5f4];
          iStack_1cc = (int)piStack_1ac;
          piStack_1d0 = (int *)0x25;
          uStack_1d8 = 0x42bfe7;
          (**(code **)(*piStack_1d4 + 200))();
          piStack_1e0 = (int *)param_1[0x5f4];
          uStack_1d8 = 3;
          piStack_1dc = (int *)0x23;
          iStack_1e4 = 0x42bffa;
          (**(code **)(*piStack_1e0 + 200))();
        }
        else {
          ppiStack_1a0 = (int **)0x42c00f;
          FUN_00505e30();
        }
        ppiStack_1a0 = (int **)param_1[0x5f4];
        pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)0x42c028;
        FUN_00508140();
        *(undefined1 *)(param_1 + 0x63d) = 0;
      }
      ppiStack_1a0 = (int **)0x42c045;
      FUN_00428b00();
    }
    ppiStack_1a0 = (int **)0x42c054;
    (**(code **)(*(int *)param_1[0x5f4] + 0x88))();
    piStack_1a8 = (int *)param_1[0x5f4];
    ppiStack_1a0 = (int **)0x1;
    pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x7;
    piStack_1ac = (int *)0x42c067;
    (**(code **)(*piStack_1a8 + 200))();
    piStack_1b4 = (int *)param_1[0x5f4];
    piStack_1ac = (int *)0x1;
    piStack_1b0 = (int *)0xe;
    piStack_1b8 = (int *)0x42c07a;
    (**(code **)(*piStack_1b4 + 200))();
    piStack_1c0 = (int *)param_1[0x5f4];
    piStack_1b8 = (int *)0x0;
    piStack_1bc = (int *)0x1b;
    piStack_1c4 = (int *)0x42c08c;
    (**(code **)(*piStack_1c0 + 200))();
    iStack_1cc = param_1[0x887];
    piStack_1dc = (int *)param_1[0x5f4];
    piStack_1b0 = (int *)*piStack_1dc;
    piStack_1c4 = (int *)0x0;
    piStack_1c8 = (int *)0x3f800000;
    piStack_1d0 = (int *)(-(uint)(*(char *)((int)param_1 + 0x18f2) != '\0') & 4 |
                          (uint)((char)param_1[0xac] != '\0') | 2);
    piStack_1d4 = (int *)0x0;
    uStack_1d8 = 0;
    piStack_1e0 = (int *)0x42c0d0;
    (*(code *)piStack_1b0[0x24])();
    if (param_1[0x4c] != 0) {
      iStack_1e4 = param_1[0x5f4];
      piStack_1e8 = (int *)0x42c0e7;
      piStack_1e0 = param_1;
      iVar5 = (**(code **)(*param_1 + 0x24))();
      if (-1 < iVar5) {
        piStack_1c4 = (int *)((int)piStack_1c4 + iVar5);
      }
    }
    piStack_1e8 = (int *)param_1[0x5f4];
    piStack_1e0 = (int *)0x0;
    iStack_1e4 = 7;
    piStack_1ec = (int *)0x42c101;
    (**(code **)(*piStack_1e8 + 200))();
    if ((char)param_1[0x6b7] == '\0') {
      piStack_1f0 = (int *)param_1[0x5f4];
      piStack_1f4 = (int *)0x42c122;
      piStack_1ec = param_1;
      (**(code **)(param_1[0x530] + 0x24))();
    }
    piStack_1f4 = (int *)param_1[0x5f4];
    piStack_1ec = (int *)0x0;
    piStack_1f0 = (int *)0x1b;
    piStack_1f8 = (int *)0x42c134;
    (**(code **)(*piStack_1f4 + 200))();
    piStack_1f8 = (int *)0x42c13b;
    piVar6 = (int *)FUN_0041e5b0();
    piStack_1fc = (int *)param_1[0x5f4];
    piStack_200 = (int *)0x42c14a;
    piStack_1f8 = param_1;
    (**(code **)(*piVar6 + 0x24))();
  }
  else {
    if (param_1[0x4c] != 0) {
      if ((int *)param_1[0x5f1] != (int *)0x0) {
        ppiStack_1a0 = (int **)param_1[0x5f4];
        pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)0x42c16e;
        (**(code **)(*(int *)param_1[0x5f1] + 0x24))();
      }
      if ((int *)param_1[0x5f2] != (int *)0x0) {
        ppiStack_1a0 = (int **)param_1[0x5f4];
        pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)0x42c185;
        (**(code **)(*(int *)param_1[0x5f2] + 0x24))();
      }
      if ((*(int *)(param_1[0x4c] + 0xe8) != 0) && ((char)param_1[0x63d] != '\0')) {
        ppiStack_1a0 = (int **)0x42c1b4;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &piStack_160,"WaterRefl");
        ppiStack_1a0 = &piStack_160;
        pbStack_1a4 = abStack_144;
        piStack_1a8 = (int *)0x42c1c7;
        ppiStack_1a0 = (int **)FUN_004224c0();
        pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)0x42c1cd;
        cVar4 = FUN_0040e560();
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_144);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &piStack_160);
        if (cVar4 == '\0') {
          FUN_0041d7e0();
          piStack_174 = (int *)param_1[0xba];
          fStack_170 = (float)param_1[0xbb];
          iStack_16c = param_1[0xbc];
          ppiStack_1a0 = &piStack_174;
          pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)auStack_dc;
          fStack_15c = fStack_170 - _DAT_00587d94;
          piStack_1a8 = (int *)0x42c24d;
          piStack_160 = piStack_174;
          iStack_158 = iStack_16c;
          cVar4 = FUN_0041f720();
          if (cVar4 != '\0') {
            ppiStack_1a0 = (int **)0x42c26a;
            FUN_00505e30();
          }
          pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)param_1[0x5f4];
          ppiStack_1a0 = (int **)0x1c;
          piStack_1a8 = (int *)0x42c27d;
          (**(code **)(*(int *)pbStack_1a4 + 200))();
          piStack_1b0 = (int *)param_1[0x5f4];
          piStack_1a8 = (int *)0xff000000;
          piStack_1ac = (int *)0x22;
          piStack_1b4 = (int *)0x42c293;
          (**(code **)(*piStack_1b0 + 200))();
          piStack_1bc = (int *)param_1[0x5f4];
          ppiStack_1a0 = (int **)0x3f800000;
          piStack_1b4 = (int *)0x3f800000;
          piStack_1b8 = (int *)0x26;
          piStack_1c0 = (int *)0x42c2c1;
          (**(code **)(*piStack_1bc + 200))();
          piStack_1c8 = (int *)param_1[0x5f4];
          piStack_1c0 = piStack_1a8;
          piStack_1c4 = (int *)0x24;
          iStack_1cc = 0x42c2d7;
          (**(code **)(*piStack_1c8 + 200))();
          piStack_1d4 = (int *)param_1[0x5f4];
          iStack_1cc = (int)piStack_1ac;
          piStack_1d0 = (int *)0x25;
          uStack_1d8 = 0x42c2ed;
          (**(code **)(*piStack_1d4 + 200))();
          piStack_1e0 = (int *)param_1[0x5f4];
          uStack_1d8 = 3;
          piStack_1dc = (int *)0x23;
          iStack_1e4 = 0x42c300;
          (**(code **)(*piStack_1e0 + 200))();
        }
        else {
          ppiStack_1a0 = (int **)0x42c318;
          FUN_00505e30();
          pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)param_1[0x5f4];
          iVar5 = *(int *)pbStack_1a4;
          if ((char)param_1[0x6bd] == '\0') {
            ppiStack_1a0 = (int **)0x1c;
          }
          else {
            ppiStack_1a0 = (int **)0x1c;
            piStack_1a8 = (int *)0x42c339;
            (**(code **)(iVar5 + 200))();
            piVar6 = (int *)param_1[0x5f4];
            iVar5 = *piVar6;
            piStack_1a8 = (int *)0x42c352;
            uVar17 = FUN_004cf110();
            piStack_1a8 = (int *)0x42c36e;
            uVar7 = FUN_004cf110();
            piStack_1a8 = (int *)0x42c389;
            uVar8 = FUN_004cf110();
            piStack_1a8 = (int *)(((uVar17 | 0xffffff00) << 8 | uVar7 & 0xff) << 8 | uVar8 & 0xff);
            piStack_1ac = (int *)0x22;
            piStack_1b4 = (int *)0x42c39a;
            piStack_1b0 = piVar6;
            (**(code **)(iVar5 + 200))();
            piStack_1bc = (int *)param_1[0x5f4];
            piStack_1b4 = (int *)0x3;
            piStack_1b8 = (int *)0x23;
            piStack_1c0 = (int *)0x42c3ad;
            (**(code **)(*piStack_1bc + 200))();
            piStack_1c0 = (int *)param_1[0x6be];
            piStack_1c8 = (int *)param_1[0x5f4];
            piStack_1c4 = (int *)0x24;
            iStack_1cc = 0x42c3c5;
            (**(code **)(*piStack_1c8 + 200))();
            iStack_1cc = param_1[0x6bf];
            piStack_1d4 = (int *)param_1[0x5f4];
            piStack_1d0 = (int *)0x25;
            uStack_1d8 = 0x42c3dd;
            (**(code **)(*piStack_1d4 + 200))();
            pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)param_1[0x5f4];
            iVar5 = *(int *)pbStack_1a4;
            ppiStack_1a0 = (int **)0x26;
          }
          piStack_1a8 = (int *)0x42c3fb;
          (**(code **)(iVar5 + 200))();
        }
        piStack_1ec = (int *)param_1[0x5f4];
        iStack_1e4 = 2;
        piStack_1e8 = (int *)0x16;
        piStack_1f0 = (int *)0x42c40e;
        (**(code **)(*piStack_1ec + 200))();
        piStack_1f4 = (int *)param_1[0x5f4];
        piStack_1f8 = (int *)0x42c427;
        piStack_1f0 = param_1;
        piVar6 = (int *)FUN_00508140();
        if (-1 < (int)piVar6) {
          piStack_1d4 = piVar6;
        }
        piStack_1f8 = (int *)param_1[0x5f4];
        piStack_1f0 = (int *)0x3;
        piStack_1f4 = (int *)0x16;
        piStack_1fc = (int *)0x42c442;
        (**(code **)(*piStack_1f8 + 200))();
        *(undefined1 *)(param_1 + 0x63d) = 0;
      }
      ppiStack_1a0 = (int **)0x42c457;
      FUN_00428b00();
    }
    pbStack_1a4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  param_1[0x63e];
    ppiStack_1a0 = (int **)0x0;
    uStack_168 = 0;
    uStack_ec = 0;
    uStack_f0 = 0;
    uStack_f4 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_104 = 0;
    uStack_108 = 0;
    uStack_10c = 0;
    uStack_114 = 0;
    uStack_118 = 0;
    uStack_11c = 0;
    uStack_120 = 0;
    uStack_e8 = 0x3f800000;
    uStack_fc = 0x3f800000;
    uStack_110 = 0x3f800000;
    uStack_124 = 0x3f800000;
    piStack_1a8 = (int *)0x42c51a;
    (**(code **)(*(int *)pbStack_1a4 + 0x3c))();
    piStack_1a8 = aiStack_4c;
    piStack_1ac = piStack_174;
    piStack_1b0 = (int *)0x42c52c;
    (**(code **)(*piStack_174 + 0x20))();
    piStack_1b8 = (int *)param_1[0x643];
    piStack_1b0 = param_1 + 0x645;
    piStack_1bc = (int *)0x42c544;
    piStack_1b4 = unaff_EBX;
    (**(code **)(*piStack_1b8 + 0x14))();
    piStack_1c4 = (int *)param_1[0x5f4];
    piStack_1bc = (int *)0x1;
    piStack_1c0 = (int *)0x7;
    piStack_1c8 = (int *)0x42c557;
    (**(code **)(*piStack_1c4 + 200))();
    piStack_1d0 = (int *)param_1[0x5f4];
    piStack_1c8 = (int *)0x1;
    iStack_1cc = 0xe;
    piStack_1d4 = (int *)0x42c56a;
    (**(code **)(*piStack_1d0 + 200))();
    piStack_1dc = (int *)param_1[0x5f4];
    piStack_1d4 = (int *)0x0;
    uStack_1d8 = 0x1b;
    piStack_1e0 = (int *)0x42c57c;
    (**(code **)(*piStack_1dc + 200))();
    piStack_1e8 = (int *)param_1[0x887];
    piStack_1f8 = (int *)param_1[0x5f4];
    iStack_1cc = *piStack_1f8;
    piStack_1e0 = (int *)0x0;
    iStack_1e4 = 0x3f800000;
    piStack_1ec = (int *)(-(uint)(*(char *)((int)param_1 + 0x18f2) != '\0') & 4 |
                          (uint)((char)param_1[0xac] != '\0') | 2);
    piStack_1f0 = (int *)0x0;
    piStack_1f4 = (int *)0x0;
    piStack_1fc = (int *)0x42c5c1;
    (**(code **)(iStack_1cc + 0x90))();
    if (param_1[0x4c] != 0) {
      piStack_200 = (int *)param_1[0x5f4];
      piStack_204 = (int *)0x42c5d8;
      piStack_1fc = param_1;
      iVar5 = (**(code **)(*param_1 + 0x24))();
      if (-1 < iVar5) {
        piStack_1e8 = (int *)((int)piStack_1e8 + iVar5);
      }
      piStack_208 = (int *)param_1[0x5f4];
      iStack_20c = 0x42c5f7;
      piStack_204 = param_1;
      (**(code **)(param_1[0x5c6] + 0x24))();
    }
    piStack_204 = (int *)param_1[0x5f4];
    piStack_1fc = (int *)0x0;
    piStack_200 = (int *)0x7;
    piStack_208 = (int *)0x42c609;
    (**(code **)(*piStack_204 + 200))();
    if ((char)param_1[0x6b7] == '\0') {
      iStack_20c = param_1[0x5f4];
      piStack_210 = (int *)0x42c62a;
      piStack_208 = param_1;
      (**(code **)(param_1[0x530] + 0x24))();
    }
    piStack_210 = (int *)param_1[0x5f4];
    piStack_208 = (int *)0x0;
    iStack_20c = 0x1b;
    piStack_214 = (int *)0x42c63c;
    (**(code **)(*piStack_210 + 200))();
    piStack_214 = (int *)0x42c643;
    piVar6 = (int *)FUN_0041e5b0();
    iStack_218 = param_1[0x5f4];
    piStack_21c = (int *)0x42c652;
    piStack_214 = param_1;
    (**(code **)(*piVar6 + 0x24))();
    piStack_21c = (int *)param_1[0x643];
    piStack_220 = (int *)0x42c65e;
    (**(code **)(*piStack_21c + 0x18))();
    piStack_220 = piStack_1ec;
    fStack_224 = 6.132317e-39;
    (**(code **)(*piStack_1ec + 8))();
    piStack_22c = (int *)param_1[0x5f4];
    fStack_224 = 0.0;
    piStack_228 = (int *)0x7;
    piStack_1f0 = (int *)0x0;
    uStack_230 = 0x42c67e;
    (**(code **)(*piStack_22c + 200))();
    piStack_238 = (int *)param_1[0x5f4];
    uStack_230 = 0;
    uStack_234 = 0xe;
    uStack_23c = 0x42c690;
    (**(code **)(*piStack_238 + 200))();
    piStack_244 = (int *)param_1[0x5f4];
    uStack_23c = 1;
    fStack_240 = 3.78351e-44;
    uStack_248 = 0x42c6a3;
    (**(code **)(*piStack_244 + 200))();
    piStack_250 = (int *)param_1[0x5f4];
    uStack_248 = 5;
    uStack_24c = 0x13;
    piStack_254 = (int *)0x42c6b6;
    (**(code **)(*piStack_250 + 200))();
    piStack_25c = (int *)param_1[0x5f4];
    piStack_254 = (int *)0x6;
    fStack_258 = 2.8026e-44;
    piStack_260 = (int *)0x42c6c9;
    (**(code **)(*piStack_25c + 200))();
    piStack_26c = (int *)param_1[0x5f4];
    piStack_260 = (int *)0x0;
    uStack_264 = 0x14;
    uStack_268 = 0;
    fStack_270 = 6.13248e-39;
    (**(code **)(*piStack_26c + 0xfc))();
    piStack_27c = (int *)param_1[0x5f4];
    fStack_270 = DAT_005b5f28;
    fStack_274 = 2.66247e-44;
    fStack_278 = 0.0;
    piStack_25c = (int *)DAT_005b5f28;
    uStack_280 = 0x42c6f9;
    (**(code **)(*piStack_27c + 0xfc))();
    piStack_28c = (int *)param_1[0x5f4];
    uStack_280 = 1;
    uStack_284 = 0x12;
    uStack_288 = 0;
    aiStack_298[2] = 0x42c70d;
    (**(code **)(*piStack_28c + 0xfc))();
    piStack_29c = (int *)param_1[0x5f4];
    aiStack_298[2] = 2;
    aiStack_298[1] = 1;
    aiStack_298[0] = 0;
    uStack_2a0 = 0x42c721;
    (**(code **)(*piStack_29c + 0xfc))();
    piStack_2ac = (int *)param_1[0x5f4];
    uStack_2a0 = 2;
    uStack_2a4 = 2;
    uStack_2a8 = 0;
    uStack_2b0 = 0x42c735;
    (**(code **)(*piStack_2ac + 0xfc))();
    piStack_2bc = (int *)param_1[0x5f4];
    uStack_2b0 = 2;
    uStack_2b4 = 3;
    uStack_2b8 = 0;
    uStack_2c0 = 0x42c749;
    (**(code **)(*piStack_2bc + 0xfc))();
    piStack_2cc = (int *)param_1[0x5f4];
    uStack_2c0 = 2;
    uStack_2c4 = 4;
    uStack_2c8 = 0;
    uStack_2d0 = 0x42c75d;
    (**(code **)(*piStack_2cc + 0xfc))();
    piStack_2dc = (int *)param_1[0x5f4];
    uStack_2d0 = 3;
    uStack_2d4 = 5;
    uStack_2d8 = 0;
    uStack_2e0 = 0x42c771;
    (**(code **)(*piStack_2dc + 0xfc))();
    piStack_2ec = (int *)param_1[0x5f4];
    uStack_2e0 = 3;
    uStack_2e4 = 6;
    uStack_2e8 = 0;
    uStack_2f0 = 0x42c785;
    (**(code **)(*piStack_2ec + 0xfc))();
    piStack_2fc = (int *)param_1[0x5f4];
    uStack_2f0 = 0;
    uStack_2f4 = 0xb;
    uStack_2f8 = 0;
    uStack_300 = 0x42c798;
    (**(code **)(*piStack_2fc + 0xfc))();
    piStack_30c = (int *)param_1[0x5f4];
    uStack_300 = 0;
    uStack_304 = 0x18;
    uStack_308 = 0;
    uStack_310 = 0x42c7ab;
    (**(code **)(*piStack_30c + 0xfc))();
    piStack_31c = (int *)param_1[0x5f4];
    uStack_310 = 1;
    uStack_314 = 1;
    uStack_318 = 1;
    uStack_320 = 0x42c7c0;
    (**(code **)(*piStack_31c + 0xfc))();
    piStack_32c = (int *)param_1[0x5f4];
    uStack_320 = 1;
    piStack_324 = (int *)0x4;
    iStack_328 = 1;
    iStack_330 = 0x42c7d5;
    (**(code **)(*piStack_32c + 0xfc))();
    iStack_330 = param_1[0x63e];
    piStack_338 = (int *)param_1[0x5f4];
    uStack_334 = 0;
    uStack_33c = 0x42c7ec;
    (**(code **)(*piStack_338 + 0xf4))();
    piStack_344 = (int *)param_1[0x5f4];
    uStack_33c = 0;
    uStack_340 = 1;
    puStack_348 = (undefined4 *)0x42c7fe;
    (**(code **)(*piStack_344 + 0xf4))();
    aiStack_298[0] = 0;
    piStack_29c = (int *)0x0;
    uStack_2a0 = 0;
    piStack_350 = (int *)param_1[0x5f4];
    puStack_348 = &uStack_2d0;
    uStack_34c = 0x100;
    uStack_2a4 = 0;
    piStack_2ac = (int *)0x0;
    uStack_2b0 = 0;
    uStack_2b4 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2c4 = 0;
    uStack_2c8 = 0;
    piStack_2cc = (int *)0x0;
    aiStack_298[1] = 0x3f800000;
    uStack_2a8 = 0x3f800000;
    piStack_2bc = (int *)0x3f800000;
    uStack_2d0 = 0x3f800000;
    ppiStack_354 = (int **)0x42c8c4;
    (**(code **)(*piStack_350 + 0x94))();
    piStack_35c = (int *)param_1[0x5f4];
    ppiStack_354 = &piStack_2dc;
    fStack_358 = 2.8026e-45;
    puStack_360 = (undefined4 *)0x42c8da;
    (**(code **)(*piStack_35c + 0x94))();
    puStack_360 = &uStack_2e8;
    (**(code **)(*(int *)param_1[0x5f4] + 0x94))();
    iVar5 = 0xff;
    if (*(char *)((int)param_1 + 0xbd) == '\0') {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &iStack_330,"MBALPHA");
      FUN_0042dc70();
      iVar5 = FUN_004cf110();
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &iStack_330);
      (**(code **)(*(int *)param_1[0x5f4] + 200))();
    }
    else {
      (**(code **)(*(int *)param_1[0x5f4] + 200))();
      *(undefined1 *)((int)param_1 + 0xbd) = 0;
    }
    (**(code **)(*(int *)param_1[0x5f4] + 0x88))();
    if ((char)param_1[0x2f] == '\0') {
      piStack_380 = (int *)param_1[0x644];
      piStack_388 = (int *)param_1[0x5f4];
      ppiStack_384 = (int **)0x0;
      uStack_38c = 0x42c9a0;
      (**(code **)(*piStack_388 + 0x14c))();
      ppiStack_390 = (int **)param_1[0x5f4];
      uStack_38c = 0x102;
      uStack_394 = 0x42c9b4;
      (*(code *)(*ppiStack_390)[0x4c])();
      piStack_3a0 = (int *)param_1[0x5f4];
      uStack_394 = 2;
      iStack_398 = 0;
      iStack_39c = 5;
      piStack_3a4 = (int *)0x42c9c8;
      (**(code **)(*piStack_3a0 + 0x118))();
      piStack_388 = (int *)((int)piStack_388 + 2);
    }
    else {
      ppiVar9 = &piStack_27c;
      iVar21 = 4;
      do {
        ppiVar9[-1] = (int *)(iVar5 << 0x18 | 0xffffff);
        *ppiVar9 = (int *)0x0;
        ppiVar9[1] = (int *)0x0;
        ppiVar9[-3] = (int *)0x0;
        ppiVar9[-2] = (int *)0x3f800000;
        ppiVar9 = ppiVar9 + 7;
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
      fVar1 = (float)(int)piStack_208;
      if ((int)piStack_208 < 0) {
        fVar1 = fVar1 + _DAT_00582b04;
      }
      fVar2 = (float)param_1[0x647];
      if (param_1[0x647] < 0) {
        fVar2 = fVar2 + _DAT_00582b04;
      }
      fStack_358 = (float)(int)piStack_204;
      if ((int)piStack_204 < 0) {
        fStack_358 = fStack_358 + _DAT_00582b04;
      }
      fVar3 = (float)param_1[0x648];
      if (param_1[0x648] < 0) {
        fVar3 = fVar3 + _DAT_00582b04;
      }
      piStack_27c = (int *)(_DAT_00583354 / fVar1);
      fStack_278 = _DAT_00583354 / fStack_358;
      piStack_260 = (int *)(fVar2 / fVar1 - (float)piStack_27c);
      fStack_240 = fVar3 / fStack_358 - fStack_278;
      piStack_380 = (int *)0x42cad0;
      piStack_25c = (int *)fStack_278;
      piStack_244 = piStack_260;
      piStack_228 = piStack_27c;
      fStack_224 = fStack_240;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &uStack_340,"VideoWidth");
      piStack_380 = &uStack_340;
      ppiStack_384 = &piStack_324;
      piStack_388 = (int *)0x42cae6;
      piStack_380 = (int *)FUN_004224c0();
      ppiStack_384 = (int **)0x42caec;
      iVar5 = FUN_0040e470();
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_324);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &uStack_340);
      piStack_380 = (int *)0x42cb16;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &uStack_340,"VideoHeight");
      piStack_380 = &uStack_340;
      ppiStack_384 = &piStack_324;
      piStack_388 = (int *)0x42cb2c;
      piStack_380 = (int *)FUN_004224c0();
      ppiStack_384 = (int **)0x42cb32;
      iVar21 = FUN_0040e470();
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &piStack_324);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &uStack_340);
      fStack_274 = (float)iVar5;
      piStack_380 = (int *)param_1[0x5f4];
      aiStack_298[2] = 0;
      piStack_254 = (int *)(float)iVar21;
      piStack_28c = (int *)0x0;
      fStack_270 = 0.0;
      uStack_23c = 0;
      ppiStack_354 = (int **)0x10000;
      piStack_350 = (int *)0x2;
      uStack_34c = 0x30002;
      ppiStack_384 = (int **)0x42cbd8;
      fStack_258 = fStack_274;
      piStack_238 = piStack_254;
      (**(code **)(*piStack_380 + 0x130))();
      piStack_3a4 = (int *)param_1[0x5f4];
      ppiStack_384 = (int **)0x1c;
      piStack_388 = aiStack_298;
      uStack_38c = 0x65;
      ppiStack_390 = &piStack_35c;
      uStack_394 = 2;
      iStack_398 = 4;
      iStack_39c = 0;
      piStack_3a0 = (int *)0x4;
      pppiStack_3a8 = (int ***)0x42cbfe;
      (**(code **)(*piStack_3a4 + 0x124))();
    }
    piStack_3a4 = (int *)param_1[0x5f4];
    pppiStack_3a8 = (int ***)0x42cc0d;
    (**(code **)(*piStack_3a4 + 0x8c))();
    if (((char)param_1[0x2f] != '\0') && (param_1[0x2d] != 0)) {
      piVar6 = (int *)param_1[0x5f4];
      pppiStack_3a8 = &ppiStack_384;
      ppiStack_384 = (int **)0x0;
      (**(code **)(*piVar6 + 0x40))(piVar6,0,0);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &puStack_360,"VideoWidth");
      uVar20 = 0x140;
      uVar10 = FUN_004224c0(&uStack_2f8,&puStack_360);
      FUN_0040e470(uVar10,uVar20);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &uStack_2f8);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &puStack_360);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &puStack_360,"VideoHeight");
      uVar20 = 200;
      uVar10 = FUN_004224c0(&uStack_2f8,&puStack_360);
      FUN_0040e470(uVar10,uVar20);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &uStack_2f8);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &puStack_360);
      if (param_1[0x2e] == 0) {
        (**(code **)(*(int *)param_1[0x5f4] + 0x6c))
                  ((int *)param_1[0x5f4],0x200,0x200,0x15,param_1 + 0x2e);
      }
      piVar19 = (int *)param_1[0x2e];
      iVar21 = 0;
      iVar5 = (**(code **)(*(int *)param_1[0x5f4] + 0x70))
                        ((int *)param_1[0x5f4],uStack_394,&stack0xfffffc84,1);
      if (iVar5 < 0) {
        uVar10 = FUN_0041e5b0("Can\'t copy rect");
        FUN_0040a410(uVar10);
      }
      iVar5 = (**(code **)(*(int *)param_1[0x2e] + 0x24))
                        ((int *)param_1[0x2e],&pppiStack_3a8,&uStack_394,0x10);
      if (-1 < iVar5) {
        pvVar11 = operator_new(iStack_398 * iStack_39c * 3,(nothrow_t *)&DAT_005b6164);
        piStack_324 = piVar6;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &piStack_388,"VideoBrightness");
        pbVar12 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_004224c0(&uStack_320,&piStack_388);
        pcVar13 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ::c_str(pbVar12);
        atof(pcVar13);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &uStack_320);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &piStack_388);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &piStack_388,"VideoContrast");
        pbVar12 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_004224c0(&uStack_320,&piStack_388);
        pcVar13 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ::c_str(pbVar12);
        atof(pcVar13);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &uStack_320);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   &piStack_388);
        iStack_328 = FUN_004cf110();
        pppiStack_3a8 = (int ***)FUN_004cf110();
        iVar16 = 0;
        iVar5 = 0;
        iVar18 = 0;
        if (0 < iStack_398) {
          do {
            iVar22 = 0;
            if (0 < iStack_39c) {
              piVar6 = (int *)(((iStack_398 - iVar18) + -1) * iVar21 + (int)piStack_324);
              do {
                iVar15 = 0;
                do {
                  iVar14 = (int)(((uint)*(byte *)(iVar15 + (int)piVar6) + iStack_328) *
                                (int)pppiStack_3a8) >> 8;
                  if (iVar14 < 0) {
                    iVar14 = 0;
                  }
                  else if (0xff < iVar14) {
                    iVar14 = 0xff;
                  }
                  *(char *)((int)pvVar11 + iVar15 + iVar16) = (char)iVar14;
                  iVar15 = iVar15 + 1;
                } while (iVar15 < 3);
                iVar22 = iVar22 + 1;
                iVar16 = iVar5 + 3;
                piVar6 = piVar6 + 1;
                iVar5 = iVar16;
              } while (iVar22 < iStack_39c);
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < iStack_398);
        }
        (**(code **)(*(int *)param_1[0x2e] + 0x28))((int *)param_1[0x2e]);
        FUN_0042e1a0(pvVar11);
        operator_delete__(pvVar11);
      }
      (**(code **)(*piVar19 + 8))(piVar19);
    }
    pppiStack_3a8 = (int ***)0x0;
    (**(code **)(*(int *)param_1[0x5f4] + 0x3c))((int *)param_1[0x5f4],0,0,0);
    if ((char)param_1[0x2f] != '\0') goto LAB_0042cfc2;
    (**(code **)(*(int *)param_1[0x5f4] + 0x88))((int *)param_1[0x5f4]);
    (**(code **)(*(int *)param_1[0x5f4] + 0x14c))((int *)param_1[0x5f4],0,param_1[0x644],0x14);
    (**(code **)(*(int *)param_1[0x5f4] + 0x130))((int *)param_1[0x5f4],0x102);
    (**(code **)(*(int *)param_1[0x5f4] + 0x118))((int *)param_1[0x5f4],5,0,2);
    iStack_1e4 = iStack_1e4 + 2;
  }
  piStack_200 = (int *)param_1[0x5f4];
  piStack_204 = (int *)0x42cfb2;
  (**(code **)(*piStack_200 + 0x8c))();
  piStack_214 = (int *)param_1[0x5f4];
  piStack_204 = (int *)0x0;
  piStack_208 = (int *)0x0;
  iStack_20c = 0;
  piStack_210 = (int *)0x0;
  iStack_218 = 0x42cfc2;
  (**(code **)(*piStack_214 + 0x3c))();
LAB_0042cfc2:
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x3f] = 0;
  return piStack_3a0;
}




/* Function: FUN_00439e40 */

undefined4
FUN_00439e40(int *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *pvVar5;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0057ba40;
  local_10 = ExceptionList;
  pvVar5 = (void *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  pcVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (param_2);
  iVar2 = FUN_00410660(pcVar1,&DAT_00582818);
  if (iVar2 != 0) {
    FUN_0040f0b0(iVar2,0,2);
    uVar3 = FUN_0040f110(iVar2);
    pvVar5 = operator_new(uVar3,(nothrow_t *)&DAT_005b6164);
    FUN_0040f0b0(iVar2,0,0);
    FUN_0040f000(pvVar5,1,uVar3,iVar2);
    FUN_0040efb0(iVar2);
  }
  if (param_5 == 0) {
    local_18 = (**(code **)(*param_1 + 300))(param_1,param_3,pvVar5,param_6,param_4);
  }
  else if (param_5 == 1) {
    local_18 = (**(code **)(*param_1 + 0x15c))(param_1,pvVar5,param_6);
  }
  operator_delete__(pvVar5);
  if (-1 < local_18) {
    ExceptionList = local_10;
    return 0;
  }
  pcVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (param_2);
  FUN_0041ce80("Failed to create shader: hr = 0x%x \'%s\'",local_18,pcVar1);
  uVar4 = FUN_0041e5b0();
  FUN_0040a410(uVar4);
  ExceptionList = local_10;
  return 0x80004005;
}




/* Function: FUN_0043bac0 */

undefined4 FUN_0043bac0(undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 local_3c [2];
  void *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0057bad1;
  local_c = ExceptionList;
  local_4 = 0;
  local_34 = (void *)0x0;
  local_30 = 0;
  local_2c = 0;
  local_40 = 0x20000000;
  ExceptionList = &local_c;
  FUN_0043b9c0(&local_40);
  local_40 = 0x40020000;
  FUN_0043b9c0(&local_40);
  local_40 = 0x40020001;
  FUN_0043b9c0(&local_40);
  local_40 = 0x40020002;
  FUN_0043b9c0(&local_40);
  local_40 = 0x40010003;
  FUN_0043b9c0(&local_40);
  local_40 = 0x40020005;
  FUN_0043b9c0(&local_40);
  local_40 = 0x40020006;
  FUN_0043b9c0(&local_40);
  local_40 = 0x40020004;
  FUN_0043b9c0(&local_40);
  local_40 = 0xffffffff;
  FUN_0043b9c0(&local_40);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_28,"shaders\\dot3_directional.vso");
  pvVar1 = local_34;
  local_4._0_1_ = 1;
  iVar2 = FUN_00439e40(param_1,local_28,local_34,0,0,local_3c);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  if (-1 < iVar2) {
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    ExceptionList = local_c;
    return local_3c[0];
  }
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  ExceptionList = local_c;
  return 0x80004005;
}




/* Function: FUN_0043bc50 */

undefined4 FUN_0043bc50(undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20 [2];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057bae8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_24 = 0x20000000;
  ExceptionList = &pvStack_c;
  FUN_0043b9c0(&local_24);
  local_24 = 0x40020000;
  FUN_0043b9c0(&local_24);
  local_24 = 0x40020001;
  FUN_0043b9c0(&local_24);
  local_24 = 0x40010002;
  FUN_0043b9c0(&local_24);
  local_24 = 0xffffffff;
  FUN_0043b9c0(&local_24);
  pvVar1 = local_18;
  iVar2 = FUN_00439f70(param_1,"shaders\\caust2.vsh",local_18,local_20);
  if (-1 < iVar2) {
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    ExceptionList = pvStack_c;
    return local_20[0];
  }
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  ExceptionList = pvStack_c;
  return 0xffffffff;
}




/* Function: FUN_0043bd60 */

undefined4 FUN_0043bd60(undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20 [2];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057bae8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_24 = 0x20000000;
  ExceptionList = &pvStack_c;
  FUN_0043b9c0(&local_24);
  local_24 = 0x40020000;
  FUN_0043b9c0(&local_24);
  local_24 = 0x40020001;
  FUN_0043b9c0(&local_24);
  local_24 = 0x40020002;
  FUN_0043b9c0(&local_24);
  local_24 = 0x40010003;
  FUN_0043b9c0(&local_24);
  local_24 = 0x40020005;
  FUN_0043b9c0(&local_24);
  local_24 = 0x40020006;
  FUN_0043b9c0(&local_24);
  local_24 = 0x40020004;
  FUN_0043b9c0(&local_24);
  local_24 = 0xffffffff;
  FUN_0043b9c0(&local_24);
  pvVar1 = local_18;
  iVar2 = FUN_00439f70(param_1,"shaders\\caust.vsh",local_18,local_20);
  if (-1 < iVar2) {
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    ExceptionList = pvStack_c;
    return local_20[0];
  }
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  ExceptionList = pvStack_c;
  return 0xffffffff;
}




/* Function: FUN_0043c080 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0043c080(int *****param_1,int *******param_2)

{
  float fVar1;
  int ****ppppiVar2;
  int *****pppppiVar3;
  undefined1 *puVar4;
  char cVar5;
  byte bVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int ******ppppppiVar14;
  undefined4 *puVar15;
  int *******pppppppiVar16;
  uint *puVar17;
  short *psVar18;
  undefined4 uVar19;
  uint uVar20;
  int **ppiVar21;
  int *piVar22;
  ushort *puVar23;
  int ****ppppiVar24;
  float *pfVar25;
  undefined4 *puVar26;
  int *****pppppiVar27;
  bool bVar28;
  float10 fVar29;
  uint unaff_retaddr;
  undefined4 in_stack_fffff5b0;
  int in_stack_fffff5b8;
  int *******in_stack_fffff5d4;
  undefined4 in_stack_fffff5e8;
  int *******pppppppiStack_934;
  undefined4 uStack_930;
  int *******pppppppiStack_92c;
  undefined4 uStack_928;
  int *******pppppppiStack_924;
  undefined4 uStack_920;
  int *******pppppppiStack_91c;
  int ******ppppppiStack_918;
  undefined1 *puStack_914;
  float *pfStack_910;
  int *******pppppppiStack_90c;
  undefined4 *puStack_908;
  undefined1 *puStack_904;
  uint *puStack_900;
  int *******pppppppiStack_8fc;
  undefined1 *puStack_8f8;
  undefined1 *puStack_8f4;
  undefined1 *puStack_8f0;
  int *******pppppppiStack_8ec;
  float *pfStack_8e8;
  undefined1 *puStack_8e4;
  float *pfStack_8e0;
  int *******pppppppiStack_8dc;
  int ******ppppppiStack_8d8;
  int *******pppppppiStack_8d4;
  undefined4 *puStack_8d0;
  int *******pppppppiStack_8cc;
  undefined1 *puStack_8c8;
  int *******pppppppiStack_8c4;
  uint *puStack_8c0;
  int *******pppppppiStack_8bc;
  undefined4 uStack_8b8;
  int *******pppppppiStack_8b4;
  int *******pppppppiStack_8b0;
  int *******pppppppiStack_8ac;
  int *******pppppppiStack_8a8;
  int *******pppppppiStack_8a4;
  float *****pppppfStack_8a0;
  int *******pppppppiStack_89c;
  int *******pppppppiStack_898;
  undefined4 uStack_894;
  float fStack_890;
  int *******pppppppiStack_88c;
  int *******pppppppiStack_888;
  int ****ppppiStack_884;
  int *******pppppppiStack_880;
  int *******pppppppiStack_87c;
  undefined1 *puStack_878;
  int *******pppppppiStack_874;
  undefined4 uStack_870;
  int *******pppppppiStack_86c;
  undefined4 uStack_868;
  undefined4 uStack_864;
  int *******pppppppiStack_860;
  int *******pppppppiStack_85c;
  undefined1 *puStack_858;
  int *******pppppppiStack_820;
  int *******pppppppiStack_81c;
  int *******pppppppiStack_818;
  int *******pppppppiStack_814;
  undefined4 uStack_810;
  int ******ppppppiStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  int *******pppppppiStack_800;
  undefined4 uStack_7fc;
  int *******pppppppiStack_7f8;
  float fStack_7f4;
  int *******pppppppiStack_7f0;
  int iStack_7ec;
  int *******pppppppiStack_7e8;
  float fStack_7e4;
  int *******pppppppiStack_7e0;
  int ******ppppppiStack_7dc;
  int *******pppppppiStack_7d8;
  undefined4 uStack_7d4;
  int ******ppppppiStack_7d0;
  int ******ppppppiStack_7cc;
  int *******pppppppiStack_7c8;
  int ******ppppppiStack_7c4;
  int *******pppppppiStack_7c0;
  undefined4 uStack_7bc;
  int *******pppppppiStack_7b8;
  int *piStack_7b4;
  int *******pppppppiStack_7b0;
  int *******pppppppiStack_7ac;
  int *******pppppppiStack_7a8;
  float fStack_7a4;
  int *******pppppppiStack_7a0;
  undefined4 uStack_79c;
  int *******pppppppiStack_798;
  int *******pppppppiStack_794;
  int *******pppppppiStack_790;
  undefined1 *puStack_78c;
  int *******pppppppiStack_788;
  int *******pppppppiStack_784;
  int *******pppppppiStack_780;
  int *******pppppppiStack_77c;
  int *******pppppppiStack_778;
  int *******pppppppiStack_774;
  int *******pppppppiStack_770;
  undefined4 uStack_76c;
  int ******ppppppiStack_768;
  int *******pppppppiStack_764;
  undefined4 uStack_760;
  int ******ppppppiStack_75c;
  int *******apppppppiStack_758 [4];
  int *******pppppppiStack_748;
  char cStack_745;
  int ******ppppppiStack_744;
  int *******pppppppiStack_740;
  int *******pppppppiStack_73c;
  int *******pppppppiStack_738;
  int *******pppppppiStack_734;
  float fStack_730;
  int *******pppppppiStack_72c;
  int *******pppppppiStack_728;
  int *******pppppppiStack_724;
  int *******pppppppiStack_720;
  int *******pppppppiStack_71c;
  undefined4 uStack_718;
  int *******pppppppiStack_714;
  int *******pppppppiStack_710;
  undefined4 uStack_6f4;
  int ****ppppiStack_6f0;
  int *******pppppppiStack_6ec;
  undefined4 uStack_6e8;
  int *****pppppiStack_6e4;
  int *******pppppppiStack_6e0;
  int ****ppppiStack_6dc;
  float fStack_6d8;
  int *******pppppppiStack_6d4;
  int ******ppppppiStack_6d0;
  float fStack_6cc;
  int *******pppppppiStack_6c8;
  int iStack_6c4;
  int ****ppppiStack_6c0;
  int *******pppppppiStack_6bc;
  float fStack_6b8;
  float fStack_6b4;
  int ***pppiVar30;
  int ***pppiVar31;
  int ***pppiVar32;
  int ******ppppppiStack_6a0;
  int ******local_69c;
  int iStack_698;
  uint *puStack_694;
  float fStack_690;
  float fStack_68c;
  float fStack_688;
  float fStack_678;
  undefined1 auStack_668 [12];
  uint auStack_65c [5];
  uint auStack_648 [2];
  int ******appppppiStack_640 [2];
  int ***pppiStack_638;
  undefined1 auStack_634 [4];
  float fStack_630;
  float fStack_62c;
  float fStack_628;
  int ***pppiStack_624;
  int ***pppiStack_620;
  int ***pppiStack_61c;
  int ******ppppppiStack_618;
  float fStack_614;
  int ******appppppiStack_610 [10];
  int ***pppiStack_5e8;
  undefined1 auStack_5c4 [76];
  undefined1 auStack_578 [8];
  undefined1 auStack_570 [8];
  undefined1 auStack_568 [8];
  int *****pppppiStack_560;
  int ******appppppiStack_55c [8];
  int *****pppppiStack_53c;
  float fStack_538;
  float fStack_534;
  float fStack_530;
  int ***pppiStack_52c;
  int ***pppiStack_528;
  int ***pppiStack_524;
  undefined1 auStack_520 [12];
  float fStack_514;
  float fStack_510;
  undefined1 auStack_50c [28];
  undefined1 auStack_4f0 [4];
  int ******appppppiStack_4ec [3];
  undefined1 auStack_4e0 [8];
  undefined1 auStack_4d8 [12];
  undefined1 auStack_4cc [24];
  undefined1 auStack_4b4 [16];
  int *****pppppiStack_4a4;
  undefined1 auStack_4a0 [20];
  int *****apppppiStack_48c [3];
  int ******appppppiStack_480 [8];
  undefined1 auStack_460 [32];
  undefined1 auStack_440 [40];
  int ******ppppppiStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  int ******ppppppiStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  undefined1 auStack_370 [12];
  undefined1 auStack_364 [16];
  int aiStack_354 [3];
  int ******appppppiStack_348 [6];
  int ******appppppiStack_330 [6];
  undefined4 auStack_318 [26];
  undefined1 auStack_2b0 [152];
  char acStack_218 [20];
  int iStack_204;
  int aiStack_188 [3];
  int *****apppppiStack_17c [5];
  int iStack_168;
  int iStack_15c;
  int *piStack_158;
  int iStack_a0;
  int iStack_7c;
  int iStack_4c;
  int iStack_40;
  int *piStack_3c;
  int iStack_28;
  uint local_4;
  
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  fStack_6b4 = 1.4013e-45;
  fStack_6b8 = 9.80909e-45;
  pppppppiStack_6bc = param_2;
  ppppiStack_6c0 = (int ****)0x43c0b8;
  local_69c = (int ******)param_1;
  (*(code *)(*param_2)[0x32])();
  ppppiStack_6c0 = (int ****)0xffffffff;
  iStack_6c4 = 0x3c;
  pppppppiStack_6c8 = param_2;
  fStack_6cc = 6.222132e-39;
  (*(code *)(*param_2)[0x32])();
  fStack_6cc = 0.0;
  ppppppiStack_6d0 = (int ******)0xf;
  pppppppiStack_6d4 = param_2;
  fStack_6d8 = 6.222152e-39;
  (*(code *)(*param_2)[0x32])();
  fStack_6d8 = 0.0;
  ppppiStack_6dc = (int ****)0x1b;
  pppppppiStack_6e0 = param_2;
  pppppiStack_6e4 = (int *****)0x43c0e2;
  (*(code *)(*param_2)[0x32])();
  pppppiStack_6e4 = (int *****)(3 - (uint)(*(char *)(iStack_28 + 0x18ed) != '\0'));
  uStack_6e8 = 0x16;
  pppppppiStack_6ec = param_2;
  ppppiStack_6f0 = (int ****)0x43c103;
  (*(code *)(*param_2)[0x32])();
  ppppiStack_6f0 = (int ****)0x1;
  uStack_6f4 = 0xe;
  (*(code *)(*param_2)[0x32])();
  piVar22 = piStack_3c;
  pppppppiStack_6bc = (int *******)(**(code **)(*piStack_3c + 0x88))();
  if (piVar22[0x6b] == 0) {
    piVar7 = (int *)FUN_005488cc();
    if (piVar7 != piVar22 + 0x96) {
      piVar22[0x96] = *piVar7;
      piVar22[0x97] = piVar7[1];
      piVar22[0x98] = piVar7[2];
    }
    pfVar8 = (float *)FUN_00547a54();
    iVar10 = iStack_40;
    fVar1 = _DAT_0058887c;
    if (_DAT_0058887c < *pfVar8) {
      fVar1 = *pfVar8;
    }
    if (fVar1 < pfVar8[1]) {
      fVar1 = pfVar8[1];
    }
    if (fVar1 < pfVar8[2]) {
      fVar1 = pfVar8[2];
    }
    piVar22[0x99] = (int)(fVar1 * (float)param_1[0x8c]);
    iVar9 = FUN_0041cb10();
    if (*(char *)(iVar9 + 0x98) != '\0') {
      fStack_6d8 = *(float *)(iVar10 + 0x1afc);
      FUN_0041e470();
      FUN_005488cc();
      if ((fStack_6d8 < fStack_688 - (float)piVar22[0x99]) ||
         (fStack_688 - (float)piVar22[0x99] < (float)piVar22[0x99] * _DAT_00588be4))
      goto LAB_0043c286;
      if (fStack_6d8 * fStack_6d8 <
          (fStack_690 * fStack_690 + fStack_688 * fStack_688 + fStack_68c * fStack_68c) -
          (float)piVar22[0x99] * (float)piVar22[0x99] * _DAT_00588be0) {
        *(undefined1 *)((int)piVar22 + 6) = 0;
        return 0;
      }
    }
    if ((char)piVar22[0x7a] != '\0') {
      FUN_0041caa0();
      FUN_0041d580();
      if ((float)piVar22[0x7b] * (float)piVar22[0x99] * (float)piVar22[0x7b] * (float)piVar22[0x99]
          < fStack_690 * fStack_690 + fStack_68c * fStack_68c + fStack_688 * fStack_688) {
        *(undefined1 *)((int)piVar22 + 6) = 0;
        *(undefined1 *)((int)piVar22 + 0x27d) = 1;
        return 0;
      }
      if (*(char *)((int)piVar22 + 0x27d) != '\0') {
        piVar22[0x87] = 0;
      }
      *(undefined1 *)((int)piVar22 + 0x27d) = 0;
    }
    FUN_0041ca90();
    iVar10 = FUN_0043a0d0();
    if (iVar10 == 2) {
      *(undefined1 *)((int)piVar22 + 6) = 0;
      return 0;
    }
  }
  else if (*(char *)(piVar22[0x6b] + 6) == '\0') {
LAB_0043c286:
    *(undefined1 *)((int)piVar22 + 6) = 0;
    return 0;
  }
  iVar10 = iStack_40;
  pppppiVar27 = pppppiStack_6e4;
  if ((param_1[0xab] == (int ****)0x0) ||
     (pppppiVar3 = param_1 + 0xac, param_1 = pppppiStack_6e4, *pppppiVar3 == (int ****)0x0)) {
    piVar22 = (int *)0x0;
    if (param_1[0xac] != (int ****)0x0) {
      (*(code *)(*param_1[0xac])[2])();
      param_1[0xac] = (int ****)0x0;
    }
    ppppiVar24 = param_1[0x70];
    piVar7 = operator_new((int)ppppiVar24 * 0x24 + 4,(nothrow_t *)&DAT_005b6164);
    if (piVar7 != (int *)0x0) {
      piVar22 = piVar7 + 1;
      *piVar7 = (int)ppppiVar24;
      pppppppiStack_710 = (int *******)0x43c3d4;
      _eh_vector_constructor_iterator_
                (piVar22,0x24,(int)ppppiVar24,(_func_void_void_ptr *)&LAB_0043b940,FUN_0043b980);
    }
    puStack_694 = operator_new((int)param_1[0x7a] * 0x18,(nothrow_t *)&DAT_005b6164);
    pppiVar30 = (int ***)0x0;
    pppiVar31 = (int ***)0x3f800000;
    pppiVar32 = (int ***)0x0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               auStack_65c,"BumpMapping");
    FUN_004224c0();
    cVar5 = FUN_0040e560();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &fStack_630);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               auStack_65c);
    if (cVar5 == '\0') {
      *(undefined1 *)((int)param_1 + 0x2a7) = 0;
    }
    ppppiStack_6c0 = (int ****)0x0;
    if (param_1[0x7a] != (int ****)0x0) {
      fStack_6d8 = 0.0;
      iStack_6c4 = 0;
      ppppiStack_6dc = (int ****)puStack_694;
      do {
        pppppppiStack_6d4 = (int *******)0x0;
        do {
          ppppiVar24 = pppppiStack_6e4[0x71];
          ppppiVar2 = pppppiStack_6e4[0x79];
          uVar11 = (uint)*(ushort *)((int)ppppiVar2 + (iStack_6c4 + (int)pppppppiStack_6d4) * 2);
          if (*(char *)((int)pppppiStack_6e4 + 0x2a7) == '\0') {
            if (ppppiVar24 == (int ****)0x0) {
              if (((char)piStack_3c[0x9d] != '\0') &&
                 (puVar15 = (undefined4 *)(piStack_3c[0x90] + uVar11 * 0xc),
                 puVar15 != (undefined4 *)&stack0xfffff954)) {
                pppiVar30 = (int ***)*puVar15;
                pppiVar31 = (int ***)puVar15[1];
                pppiVar32 = (int ***)puVar15[2];
              }
            }
            else {
              pppiVar30 = ppppiVar24[uVar11 * 3];
              pppiVar31 = ppppiVar24[uVar11 * 3 + 1];
              pppiVar32 = ppppiVar24[uVar11 * 3 + 2];
              pppiStack_5e8 = pppiVar32;
            }
            pppiStack_624 = pppiVar30;
            pppiStack_620 = pppiVar31;
            pppiStack_61c = pppiVar32;
            pfVar8 = (float *)(uVar11 * 0x10 + piStack_3c[0x8b]);
            fStack_630 = *pfVar8;
            fStack_62c = pfVar8[1];
            fStack_688 = pfVar8[2];
            if (((uint)pppppiStack_6e4[0x62] & 1) == 0) {
              ppppppiStack_6d0 =
                   (int ******)
                   (fStack_62c * *(float *)((int)fStack_6d8 + 0xc + (int)ppppiVar2) +
                    fStack_688 * *(float *)((int)fStack_6d8 + 0x10 + (int)ppppiVar2) +
                    fStack_630 * *(float *)((int)fStack_6d8 + 8 + (int)ppppiVar2) +
                   *(float *)((int)fStack_6d8 + 0x14 + (int)ppppiVar2));
              fStack_6cc = fStack_62c * *(float *)((int)fStack_6d8 + 0x1c + (int)ppppiVar2) +
                           fStack_688 * *(float *)((int)fStack_6d8 + 0x20 + (int)ppppiVar2) +
                           fStack_630 * *(float *)((int)fStack_6d8 + 0x18 + (int)ppppiVar2) +
                           *(float *)((int)fStack_6d8 + 0x24 + (int)ppppiVar2);
LAB_0043c5ec:
              fStack_6cc = -fStack_6cc;
            }
            else {
              if (pppppppiStack_6d4 == (int *******)0x0) {
                ppppppiStack_6d0 = *(int *******)((int)fStack_6d8 + 8 + (int)ppppiVar2);
                fStack_6cc = *(float *)((int)fStack_6d8 + 0xc + (int)ppppiVar2);
                goto LAB_0043c5ec;
              }
              if (pppppppiStack_6d4 == (int *******)0x1) {
                ppppppiStack_6d0 = *(int *******)((int)fStack_6d8 + 0x10 + (int)ppppiVar2);
                fStack_6cc = *(float *)((int)fStack_6d8 + 0x14 + (int)ppppiVar2);
                goto LAB_0043c5ec;
              }
              if (pppppppiStack_6d4 == (int *******)0x2) {
                ppppppiStack_6d0 = *(int *******)((int)fStack_6d8 + 0x18 + (int)ppppiVar2);
                fStack_6cc = *(float *)((int)fStack_6d8 + 0x1c + (int)ppppiVar2);
                goto LAB_0043c5ec;
              }
            }
            fStack_628 = fStack_688;
            ppppppiStack_618 = ppppppiStack_6d0;
            auStack_65c[(int)pppppppiStack_6d4] = uVar11;
            fStack_614 = fStack_6cc;
            auStack_648[(int)pppppppiStack_6d4 + -2] = 0;
            iVar10 = 0;
            for (uVar20 = 0;
                (piVar22[uVar11 * 9 + 2] != 0 &&
                (uVar20 < (uint)(piVar22[uVar11 * 9 + 3] - piVar22[uVar11 * 9 + 2] >> 5)));
                uVar20 = uVar20 + 1) {
              if ((ABS(*(float *)(piVar22[uVar11 * 9 + 2] + 0x18 + iVar10) - (float)ppppppiStack_6d0
                      ) < (float)_DAT_00588bd8) &&
                 (ABS(*(float *)(piVar22[uVar11 * 9 + 2] + 0x1c + iVar10) - fStack_6cc) <
                  (float)_DAT_00588bd8)) goto LAB_0043c950;
              iVar10 = iVar10 + 0x20;
            }
            iVar10 = piVar22[uVar11 * 9 + 2];
            if ((iVar10 == 0) ||
               ((uint)(piVar22[uVar11 * 9 + 4] - iVar10 >> 5) <=
                (uint)(piVar22[uVar11 * 9 + 3] - iVar10 >> 5))) {
              FUN_0043b320();
            }
            else {
              iVar10 = piVar22[uVar11 * 9 + 3];
              pppppppiStack_710 = (int *******)0x43c6cc;
              FUN_00552f30();
              piVar22[uVar11 * 9 + 3] = iVar10 + 0x20;
            }
            if (piVar22[uVar11 * 9 + 2] == 0) {
              auStack_648[(int)pppppppiStack_6d4 + -2] = 0xffffffff;
            }
            else {
              auStack_648[(int)pppppppiStack_6d4 + -2] =
                   (piVar22[uVar11 * 9 + 3] - piVar22[uVar11 * 9 + 2] >> 5) - 1;
            }
          }
          else {
            if (ppppiVar24 == (int ****)0x0) {
              if (((char)piStack_3c[0x9d] != '\0') &&
                 (puVar15 = (undefined4 *)(piStack_3c[0x90] + uVar11 * 0xc),
                 puVar15 != (undefined4 *)&stack0xfffff954)) {
                pppiVar30 = (int ***)*puVar15;
                pppiVar31 = (int ***)puVar15[1];
                pppiVar32 = (int ***)puVar15[2];
              }
            }
            else {
              pppiVar30 = ppppiVar24[uVar11 * 3];
              pppiVar31 = ppppiVar24[uVar11 * 3 + 1];
              pppiVar32 = ppppiVar24[uVar11 * 3 + 2];
              pppiStack_638 = pppiVar32;
            }
            pppiStack_52c = pppiVar30;
            pppiStack_528 = pppiVar31;
            pppiStack_524 = pppiVar32;
            pfVar8 = (float *)(uVar11 * 0x10 + piStack_3c[0x8b]);
            fStack_538 = *pfVar8;
            fStack_534 = pfVar8[1];
            fStack_678 = pfVar8[2];
            if (((uint)pppppiStack_6e4[0x62] & 1) == 0) {
              fStack_6b4 = fStack_534 * *(float *)((int)fStack_6d8 + 0xc + (int)ppppiVar2) +
                           fStack_678 * *(float *)((int)fStack_6d8 + 0x10 + (int)ppppiVar2) +
                           fStack_538 * *(float *)((int)fStack_6d8 + 8 + (int)ppppiVar2) +
                           *(float *)((int)fStack_6d8 + 0x14 + (int)ppppiVar2);
              fStack_6b8 = fStack_534 * *(float *)((int)fStack_6d8 + 0x1c + (int)ppppiVar2) +
                           fStack_678 * *(float *)((int)fStack_6d8 + 0x20 + (int)ppppiVar2) +
                           fStack_538 * *(float *)((int)fStack_6d8 + 0x18 + (int)ppppiVar2) +
                           *(float *)((int)fStack_6d8 + 0x24 + (int)ppppiVar2);
LAB_0043c84b:
              fStack_6b8 = -fStack_6b8;
            }
            else {
              if (pppppppiStack_6d4 == (int *******)0x0) {
                fStack_6b4 = *(float *)((int)fStack_6d8 + 8 + (int)ppppiVar2);
                fStack_6b8 = *(float *)((int)fStack_6d8 + 0xc + (int)ppppiVar2);
                goto LAB_0043c84b;
              }
              if (pppppppiStack_6d4 == (int *******)0x1) {
                fStack_6b4 = *(float *)((int)fStack_6d8 + 0x10 + (int)ppppiVar2);
                fStack_6b8 = *(float *)((int)fStack_6d8 + 0x14 + (int)ppppiVar2);
                goto LAB_0043c84b;
              }
              if (pppppppiStack_6d4 == (int *******)0x2) {
                fStack_6b4 = *(float *)((int)fStack_6d8 + 0x18 + (int)ppppiVar2);
                fStack_6b8 = *(float *)((int)fStack_6d8 + 0x1c + (int)ppppiVar2);
                goto LAB_0043c84b;
              }
            }
            fStack_514 = fStack_6b4;
            auStack_65c[(int)pppppppiStack_6d4] = uVar11;
            auStack_648[(int)pppppppiStack_6d4 + -2] = 0;
            pppppiVar27 = (int *****)(piVar22 + uVar11 * 9);
            fStack_530 = fStack_678;
            fStack_510 = fStack_6b8;
            iStack_698 = 0;
            for (uVar11 = 0;
                (local_69c = (int ******)pppppiVar27, pppppiVar27[6] != (int ****)0x0 &&
                (uVar11 < (uint)(((int)pppppiVar27[7] - (int)pppppiVar27[6]) / 0x50)));
                uVar11 = uVar11 + 1) {
              if ((ABS(*(float *)(iStack_698 + 0x24 + (int)pppppiVar27[6]) - fStack_6b4) <
                   (float)_DAT_00588bd8) &&
                 (ABS(*(float *)(iStack_698 + 0x28 + (int)pppppiVar27[6]) - fStack_6b8) <
                  (float)_DAT_00588bd8)) {
                auStack_648[(int)pppppppiStack_6d4 + -2] = uVar11;
                goto LAB_0043c95b;
              }
              iStack_698 = iStack_698 + 0x50;
            }
            FUN_0043ba30();
            if (pppppiVar27[6] == (int ****)0x0) {
              iVar10 = 0;
            }
            else {
              iVar10 = ((int)pppppiVar27[7] - (int)pppppiVar27[6]) / 0x50;
            }
            uVar20 = iVar10 - 1;
LAB_0043c950:
            auStack_648[(int)pppppppiStack_6d4 + -2] = uVar20;
          }
LAB_0043c95b:
          pppppppiStack_6d4 = (int *******)((int)pppppppiStack_6d4 + 1);
        } while ((int)pppppppiStack_6d4 < 3);
        puVar17 = auStack_65c;
        ppppiVar24 = ppppiStack_6dc;
        for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
          *ppppiVar24 = (int ***)*puVar17;
          puVar17 = puVar17 + 1;
          ppppiVar24 = ppppiVar24 + 1;
        }
        ppppiStack_6dc = ppppiStack_6dc + 6;
        ppppiStack_6c0 = (int ****)((int)ppppiStack_6c0 + 1);
        iStack_6c4 = iStack_6c4 + 0x16;
        fStack_6d8 = (float)((int)fStack_6d8 + 0x2c);
      } while (ppppiStack_6c0 < pppppiStack_6e4[0x7a]);
    }
    iVar10 = 0;
    ppppiStack_6dc = (int ****)0x0;
    if (pppppiStack_6e4[0x70] != (int ****)0x0) {
      piVar7 = piVar22 + 2;
      do {
        piVar7[-2] = iVar10;
        if (*(char *)((int)pppppiStack_6e4 + 0x2a7) == '\0') {
          if (*piVar7 != 0) {
            iVar10 = iVar10 + (piVar7[1] - *piVar7 >> 5);
          }
        }
        else {
          if (piVar7[4] == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = (piVar7[5] - piVar7[4]) / 0x50;
          }
          iVar10 = iVar10 + iVar9;
        }
        ppppiStack_6dc = (int ****)((int)ppppiStack_6dc + 1);
        piVar7 = piVar7 + 9;
      } while (ppppiStack_6dc < pppppiStack_6e4[0x70]);
    }
    ppppiVar24 = (int ****)0x0;
    puVar17 = puStack_694;
    if (pppppiStack_6e4[0x7a] != (int ****)0x0) {
      do {
        iVar10 = 3;
        puVar12 = puVar17;
        do {
          iVar10 = iVar10 + -1;
          *puVar12 = piVar22[*puVar12 * 9] + puVar12[3];
          puVar12 = puVar12 + 1;
        } while (iVar10 != 0);
        ppppiVar24 = (int ****)((int)ppppiVar24 + 1);
        puVar17 = puVar17 + 6;
      } while (ppppiVar24 < pppppiStack_6e4[0x7a]);
    }
    iVar10 = 0;
    pppppppiStack_6d4 = (int *******)0x0;
    if (*(char *)((int)pppppiStack_6e4 + 0x2a7) == '\0') {
      if (pppppiStack_6e4[0x70] != (int ****)0x0) {
        ppppiVar24 = pppppiStack_6e4[0x70];
        piVar7 = piVar22 + 2;
        do {
          if (*piVar7 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = piVar7[1] - *piVar7 >> 5;
          }
          iVar10 = iVar10 + iVar9;
          piVar7 = piVar7 + 9;
          ppppiVar24 = (int ****)((int)ppppiVar24 + -1);
          pppppppiStack_6d4 = (int *******)iVar10;
        } while (ppppiVar24 != (int ****)0x0);
      }
    }
    else if (pppppiStack_6e4[0x70] != (int ****)0x0) {
      ppppiVar24 = pppppiStack_6e4[0x70];
      piVar7 = piVar22 + 6;
      do {
        if (*piVar7 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = (piVar7[1] - *piVar7) / 0x50;
        }
        iVar10 = iVar10 + iVar9;
        piVar7 = piVar7 + 9;
        ppppiVar24 = (int ****)((int)ppppiVar24 + -1);
        pppppppiStack_6d4 = (int *******)iVar10;
      } while (ppppiVar24 != (int ****)0x0);
    }
    fStack_6b8 = (float)FUN_00423380();
    pppppiVar27 = pppppiStack_6e4;
    if (0 < (int)pppppiStack_6e4[0xb2]) {
      fStack_6b8 = 0.0;
    }
    if ((pppppiStack_6e4[0xaf] == (int ****)0x0) ||
       ((int)pppppiStack_6e4[0xb0] - (int)pppppiStack_6e4[0xaf] >> 2 == 0)) {
      fStack_6b8 = 0.0;
    }
    ppppiStack_6c0 =
         (int ****)((-(uint)(*(char *)((int)pppppiStack_6e4 + 0x2a7) != '\0') & 0x30) + 0x20);
    if (fStack_6b8 == 0.0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 auStack_65c,"ContinuousVB");
      FUN_004224c0();
      FUN_0040e560();
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &fStack_630);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 auStack_65c);
      pppppiVar3 = pppppiStack_6e4;
      if (*(char *)((int)pppppiVar27 + 0x2a7) == '\0') {
        ppppiStack_6dc = (int ****)**(undefined4 **)(*(int *)(iStack_40 + 0x2cc) + 0x28);
      }
      else {
        ppppiStack_6dc = (int ****)0x0;
      }
      local_69c = *param_2;
      FUN_00423420();
    }
    else {
      if (*(char *)((int)pppppiStack_6e4 + 0x2a7) == '\0') {
        ppppiStack_6dc = (int ****)**(undefined4 **)(*(int *)(iStack_40 + 0x2cc) + 0x28);
      }
      else {
        ppppiStack_6dc = (int ****)0x0;
      }
      local_69c = *param_2;
      FUN_00423420();
      pppppiVar3 = pppppiVar27;
    }
    pppppppiStack_710 = param_2;
    pppppppiStack_714 = (int *******)0x43cc50;
    iVar10 = (*(code *)local_69c[0x17])();
    pppppiVar27 = pppppiStack_6e4;
    if ((iVar10 < 0) || (pppppiVar3[0xab] == (int ****)0x0)) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (pppppiStack_6e4 + 0x8d));
    }
    else {
      fStack_6b4 = (float)(0 / (longlong)(int)ppppiStack_6c0);
      pppppppiStack_6c8 = (int *******)0x0;
      pppppppiStack_710 = (int *******)0x43cc85;
      iVar10 = (*(code *)(*pppppiVar3[0xab])[0xb])();
      pppppiVar27 = pppppiStack_6e4;
      if ((-1 < iVar10) && (pppppppiStack_6c8 != (int *******)0x0)) {
        ppppiVar24 = pppppiStack_6e4[0xad];
        ppppppiStack_6d0 = (int ******)0x0;
        if (ppppiVar24[1] == (int ***)0x0) {
          ppppiVar24[1] = (int ***)0x0;
          ppppiVar24[2] = (int ***)0x0;
          ppppiVar24[3] = (int ***)0x0;
                    /* WARNING: Subroutine does not return */
          operator_delete(pppppiStack_6e4[0xad][4]);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete(ppppiVar24[1]);
      }
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (pppppiStack_6e4 + 0x8d));
    }
    FUN_0041e5b0();
    FUN_0040a410();
    if (piVar22 != (int *)0x0) {
      _eh_vector_destructor_iterator_(piVar22,0x24,piVar22[-1],FUN_0043b980);
      operator_delete__(piVar22 + -1);
    }
    operator_delete__(puStack_694);
    *(undefined1 *)((int)pppppiVar27 + 0x2a6) = 0;
    return 0;
  }
  if (((*(char *)(iStack_40 + 0x18ed) == '\0') && (*(char *)(iStack_40 + 0x18ef) == '\0')) &&
     (cVar5 = FUN_004610b0(), cVar5 != '\0')) {
    pppppppiStack_6c8 = (int *******)0x0;
    (*(code *)(*pppppiVar27[0xab])[0xd])();
    pppppppiStack_714 = (int *******)pppppiVar27[0xab];
    ppppiStack_6f0 =
         (int ****)(CONCAT13((char)(auStack_65c[0] >> 9),ppppiStack_6f0._0_3_) & 0x1ffffff);
    pppppppiStack_710 = (int *******)pppppiVar27[0xad][6];
    uStack_718 = 0x43d46b;
    iVar10 = (*(code *)(*pppppppiStack_714)[0xb])();
    if (iVar10 < 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (pppppiVar27 + 0x8d));
      FUN_0041e5b0();
      FUN_0040a410();
      iVar10 = iStack_40;
    }
    else {
      if (*(char *)((int)pppppiVar27 + 0x2a7) == '\0') {
        pppppppiVar16 = pppppppiStack_6c8;
        if (uStack_6e8._3_1_ != '\0') {
          pppppppiVar16 = (int *******)pppppiVar27[0xad][4];
        }
        ppppiVar24 = (int ****)0x0;
        if (pppppiVar27[0x70] != (int ****)0x0) {
          fStack_6d8 = 0.0;
          do {
            piVar22 = (int *)(piStack_3c[0x8b] + (int)fStack_6d8);
            ppiVar21 = pppppiVar27[0xad][1][(int)ppppiVar24];
            while (ppiVar21 != (int **)0x0) {
              *pppppppiVar16 = (int ******)*piVar22;
              pppppppiVar16[1] = (int ******)piVar22[1];
              pppppppiVar16[2] = (int ******)piVar22[2];
              pppppppiVar16 = pppppppiVar16 + 8;
              ppiVar21 = (int **)((int)ppiVar21 + -1);
              ppppiStack_6dc = (int ****)ppiVar21;
            }
            ppppiVar24 = (int ****)((int)ppppiVar24 + 1);
            fStack_6d8 = (float)((int)fStack_6d8 + 0x10);
          } while (ppppiVar24 < pppppiVar27[0x70]);
        }
      }
      else {
        pppppppiVar16 = pppppppiStack_6c8;
        if (uStack_6e8._3_1_ != '\0') {
          pppppppiVar16 = (int *******)pppppiVar27[0xad][4];
        }
        ppppiVar24 = (int ****)0x0;
        if (pppppiVar27[0x70] != (int ****)0x0) {
          fStack_6d8 = 0.0;
          do {
            piVar22 = (int *)(piStack_3c[0x8b] + (int)fStack_6d8);
            ppiVar21 = pppppiVar27[0xad][1][(int)ppppiVar24];
            while (ppiVar21 != (int **)0x0) {
              *pppppppiVar16 = (int ******)*piVar22;
              pppppppiVar16[1] = (int ******)piVar22[1];
              pppppppiVar16[2] = (int ******)piVar22[2];
              pppppppiVar16 = pppppppiVar16 + 0x14;
              ppiVar21 = (int **)((int)ppiVar21 + -1);
              ppppiStack_6dc = (int ****)ppiVar21;
            }
            ppppiVar24 = (int ****)((int)ppppiVar24 + 1);
            fStack_6d8 = (float)((int)fStack_6d8 + 0x10);
          } while (ppppiVar24 < pppppiVar27[0x70]);
        }
      }
      if (uStack_6e8._3_1_ != '\0') {
        pppiVar30 = pppppiStack_6e4[0xad][5];
        pppiVar31 = pppppiStack_6e4[0xad][4];
        pppppppiVar16 = pppppppiStack_6c8;
        for (uVar11 = (uint)pppiVar30 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pppppppiVar16 = (int ******)*pppiVar31;
          pppiVar31 = pppiVar31 + 1;
          pppppppiVar16 = pppppppiVar16 + 1;
        }
        for (uVar11 = (uint)pppiVar30 & 3; pppppiVar27 = pppppiStack_6e4, uVar11 != 0;
            uVar11 = uVar11 - 1) {
          *(undefined1 *)pppppppiVar16 = *(undefined1 *)pppiVar31;
          pppiVar31 = (int ***)((int)pppiVar31 + 1);
          pppppppiVar16 = (int *******)((int)pppppppiVar16 + 1);
        }
      }
      (*(code *)(*pppppiVar27[0xab])[0xc])();
      iVar10 = iStack_40;
    }
  }
  if (*(char *)((int)pppppiVar27 + 0x2a7) == '\0') {
LAB_0043d61b:
    uStack_6e8 = uStack_6e8 & 0xffffff;
  }
  else {
    uStack_6e8 = CONCAT13(1,(undefined3)uStack_6e8);
    if (*(char *)(iVar10 + 0x18ed) != '\0') goto LAB_0043d61b;
  }
  *(undefined1 *)((int)piStack_3c + 6) = 1;
  FUN_0041e330();
  FUN_0041da10();
  iStack_6c4 = 0;
  if (*(char *)((int)piStack_3c + 0x27b) != '\0') {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &fStack_630,"misc\\black");
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               auStack_65c,".\\textures\\");
    FUN_00429a60();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               auStack_65c);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &fStack_630);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               auStack_65c,"misc\\black");
    iStack_6c4 = FUN_004222d0();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               auStack_65c);
  }
  pppppppiStack_6bc = (int *******)FUN_0041e470();
  FUN_00407260();
  FUN_0041d7a0();
  FUN_00549650();
  pppppppiStack_6d4 = (int *******)0x0;
  if (uStack_6e8._3_1_ == '\0') {
    (*(code *)(*param_2)[0x32])();
    cVar5 = FUN_0041cb70();
    if (cVar5 == '\0') {
      pppppppiStack_710 = param_2;
      pppppppiStack_714 = (int *******)0x43dcb7;
      (*(code *)(*param_2)[0x32])();
    }
    else {
      pppppppiStack_710 = param_2;
      pppppppiStack_714 = (int *******)0x43dc96;
      (*(code *)(*param_2)[0x32])();
      pppppppiStack_714 = (int *******)0x1;
      uStack_718 = 0;
      pppppppiStack_71c = param_2;
      pppppppiStack_720 = (int *******)0x43dca4;
      (*(code *)(*param_2)[0x2e])();
    }
    if (*(char *)((int)pppppiVar27 + 0x2a7) != '\0') {
      pppppppiStack_724 = (int *******)pppppiVar27[0xab];
      pppppppiStack_720 = (int *******)0x50;
      pppppppiStack_728 = (int *******)0x0;
      pppppppiStack_72c = param_2;
      fStack_730 = 6.232199e-39;
      (*(code *)(*param_2)[0x53])();
      pppppppiStack_734 = (int *******)pppppiVar27[0xac];
      fStack_730 = 0.0;
      pppppppiStack_738 = param_2;
      pppppppiStack_73c = (int *******)0x43dcef;
      (*(code *)(*param_2)[0x55])();
      pppppppiStack_73c = (int *******)0x540452;
      pppppppiStack_740 = param_2;
      ppppppiStack_744 = (int ******)0x43dcfe;
      (*(code *)(*param_2)[0x4c])();
      goto LAB_0043dd44;
    }
    pppppppiStack_720 = (int *******)**(float **)(*(int *)(iStack_4c + 0x2cc) + 0x28);
    pppppppiStack_724 = param_2;
    pppppppiStack_728 = (int *******)0x43dd16;
    (*(code *)(*param_2)[0x4c])();
    pppppppiStack_72c = (int *******)pppppiVar27[0xab];
    pppppppiStack_728 = (int *******)0x20;
    fStack_730 = 0.0;
    pppppppiStack_734 = param_2;
    pppppppiStack_738 = (int *******)0x43dd2b;
    (*(code *)(*param_2)[0x53])();
    ppppiStack_884 = pppppiVar27[0xac];
  }
  else {
    (*(code *)(*param_2)[0x53])();
    pppppppiStack_710 = (int *******)pppppiVar27[0xac];
    pppppppiStack_714 = param_2;
    uStack_718 = 0x43d76b;
    (*(code *)(*param_2)[0x55])();
    uStack_718 = 0x540452;
    pppppppiStack_71c = param_2;
    pppppppiStack_720 = (int *******)0x43d77a;
    (*(code *)(*param_2)[0x4c])();
    pppppppiStack_720 = (int *******)0x0;
    pppppppiStack_724 = (int *******)0x8d;
    pppppppiStack_728 = param_2;
    pppppppiStack_72c = (int *******)0x43d78a;
    (*(code *)(*param_2)[0x32])();
    pppppppiStack_72c = (int *******)0x43d796;
    cVar5 = FUN_0041cb70();
    if (cVar5 != '\0') {
      pppppppiStack_72c = (int *******)0x1;
      fStack_730 = 1.91978e-43;
      pppppppiStack_734 = param_2;
      pppppppiStack_738 = (int *******)0x43d7ab;
      (*(code *)(*param_2)[0x32])();
      pppppppiStack_738 = (int *******)0x1;
      pppppppiStack_73c = (int *******)0x0;
      pppppppiStack_740 = param_2;
      ppppppiStack_744 = (int ******)0x43d7b8;
      (*(code *)(*param_2)[0x2e])();
    }
    ppppiStack_6f0 = (int ****)0x0;
    if (pppppiVar27[0x80] != (int ****)0x0) {
      iVar10 = 0;
      do {
        puVar23 = (ushort *)((int)pppppiVar27[0x7f] + iVar10);
        if (((*(int *)((int)pppppiVar27[0x7f] + iVar10 + 8) != 0) && (*puVar23 != 0x8000)) &&
           (((uint)pppppiVar27[0x75][(uint)*(byte *)(**(int **)(puVar23 + 2) + 0x28) * 0x14 + 0x11]
            & 8) == 0)) {
          pppppppiStack_738 =
               (int *******)(uint)*(ushort *)((int)pppppiVar27[0x81] + (uint)*puVar23 * 2);
          pppppppiStack_72c = (int *******)0x0;
          fStack_730 = 0.0;
          pppppppiStack_734 = (int *******)0x1;
          pppppppiStack_73c = param_2;
          pppppppiStack_740 = (int *******)0x43d844;
          FUN_004200d0();
          pppppppiStack_72c = (int *******)0x0;
          fStack_730 = 0.0;
          pppppppiStack_734 = param_2;
          pppppppiStack_738 = (int *******)0x43d852;
          (*(code *)(*param_2)[0x3d])();
          pppppppiStack_738 = (int *******)0x0;
          pppppppiStack_73c = (int *******)0x1;
          pppppppiStack_740 = param_2;
          ppppppiStack_744 = (int ******)0x43d860;
          (*(code *)(*param_2)[0x3d])();
          ppppppiStack_744 = (int ******)0x2;
          pppppppiStack_748 = (int *******)0x1;
          apppppppiStack_758[3] = (int *******)0x0;
          apppppppiStack_758[2] = param_2;
          apppppppiStack_758[1] = (int *******)0x43d870;
          (*(code *)(*param_2)[0x3f])();
          apppppppiStack_758[1] = (int *******)0x2;
          apppppppiStack_758[0] = (int *******)0x2;
          ppppppiStack_75c = (int ******)0x0;
          uStack_760 = param_2;
          pppppppiStack_764 = (int *******)0x43d880;
          (*(code *)(*param_2)[0x3f])();
          pppppppiStack_764 = (int *******)0x1;
          ppppppiStack_768 = (int ******)0x3;
          uStack_76c = 0;
          pppppppiStack_770 = param_2;
          pppppppiStack_774 = (int *******)0x43d890;
          (*(code *)(*param_2)[0x3f])();
          pppppppiStack_774 = (int *******)0x2;
          pppppppiStack_778 = (int *******)0x4;
          pppppppiStack_77c = (int *******)0x0;
          pppppppiStack_780 = param_2;
          pppppppiStack_784 = (int *******)0x43d8a0;
          (*(code *)(*param_2)[0x3f])();
          pppppppiStack_784 = (int *******)0x2;
          pppppppiStack_788 = (int *******)0x5;
          puStack_78c = (undefined1 *)0x0;
          pppppppiStack_790 = param_2;
          pppppppiStack_794 = (int *******)0x43d8b0;
          (*(code *)(*param_2)[0x3f])();
          pppppppiStack_794 = (int *******)0x1;
          pppppppiStack_798 = (int *******)0x6;
          uStack_79c = 0;
          pppppppiStack_7a0 = param_2;
          fStack_7a4 = 6.230733e-39;
          (*(code *)(*param_2)[0x3f])();
          fStack_7a4 = 1.4013e-45;
          pppppppiStack_7a8 = (int *******)0x1;
          pppppppiStack_7ac = (int *******)0x1;
          pppppppiStack_7b0 = param_2;
          piStack_7b4 = (int *)0x43d8d0;
          (*(code *)(*param_2)[0x3f])();
          piStack_7b4 = (int *)0x1;
          pppppppiStack_7b8 = (int *******)0x4;
          uStack_7bc = 1;
          pppppppiStack_7c0 = param_2;
          ppppppiStack_7c4 = (int ******)0x43d8e0;
          (*(code *)(*param_2)[0x3f])();
          pppppppiStack_7c8 = *(int ********)(puVar23 + 10);
          ppppppiStack_7c4 = (int ******)fStack_7a4;
          ppppppiStack_7cc = (int ******)(*(int *)(puVar23 + 0xe) + 1);
          ppppppiStack_7d0 = *(int *******)(puVar23 + 0xc);
          uStack_7d4 = 4;
          pppppppiStack_7d8 = param_2;
          ppppppiStack_7dc = (int ******)0x43d8fe;
          (*(code *)(*param_2)[0x47])();
        }
        ppppiStack_6f0 = (int ****)((int)ppppiStack_6f0 + 1);
        iVar10 = iVar10 + 0x24;
      } while (ppppiStack_6f0 < pppppiVar27[0x80]);
    }
    pppppppiStack_72c = appppppiStack_610;
    fStack_730 = 3.58732e-43;
    pppppppiStack_734 = param_2;
    pppppppiStack_738 = (int *******)0x43d937;
    (*(code *)(*param_2)[0x26])();
    ppppppiVar14 = *param_2;
    puVar15 = *(undefined4 **)(iStack_7c + 0x1ad0);
    puVar26 = auStack_318;
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar26 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar26 = puVar26 + 1;
    }
    pppppppiStack_738 = appppppiStack_480;
    pppppppiStack_73c = (int *******)0x2;
    pppppppiStack_740 = param_2;
    ppppppiStack_744 = (int ******)0x43d966;
    (*(code *)ppppppiVar14[0x26])();
    ppppppiStack_744 = apppppiStack_48c;
    pppppppiStack_748 = (int *******)&fStack_628;
    apppppppiStack_758[3] = (int *******)auStack_364;
    apppppppiStack_758[2] = (int *******)0x43d983;
    thunk_FUN_00495f69();
    apppppppiStack_758[2] = appppppiStack_330;
    apppppppiStack_758[1] = (int *******)auStack_370;
    apppppppiStack_758[0] = (int *******)&pppppiStack_53c;
    ppppppiStack_75c = (int ******)0x43d9a0;
    thunk_FUN_00495f69();
    ppppppiStack_75c = &pppppiStack_4a4;
    uStack_760 = (int *******)(auStack_648 + 2);
    pppppppiStack_764 = (int *******)&fStack_690;
    ppppppiStack_768 = (int ******)0x43d9bd;
    thunk_FUN_00495f69();
    ppppppiStack_768 = (int ******)&local_69c;
    uStack_76c = 0;
    pppppppiStack_770 = (int *******)auStack_4f0;
    pppppppiStack_774 = (int *******)0x43d9d4;
    thunk_FUN_00496475();
    pppppppiStack_774 = (int *******)&pppppiStack_560;
    pppppppiStack_778 = (int *******)&pppppiStack_560;
    pppppppiStack_77c = (int *******)0x43d9e9;
    thunk_FUN_004961b2();
    pppppppiStack_77c = (int *******)0x4;
    pppppppiStack_780 = (int *******)auStack_568;
    pppppppiStack_784 = (int *******)0x2;
    pppppppiStack_788 = param_2;
    puStack_78c = (undefined1 *)0x43d9ff;
    (*(code *)(*param_2)[0x4f])();
    puStack_78c = auStack_578;
    pppppppiStack_790 = (int *******)auStack_578;
    pppppppiStack_794 = (int *******)0x43da14;
    thunk_FUN_004961b2();
    pppppppiStack_794 = (int *******)&pppppppiStack_6c8;
    pppppppiStack_798 = (int *******)&pppppppiStack_6c8;
    uStack_79c = 0x43da29;
    thunk_FUN_004961b2();
    uStack_79c = 4;
    pppppppiStack_7a0 = &ppppppiStack_6d0;
    fStack_7a4 = 8.40779e-45;
    pppppppiStack_7a8 = param_2;
    pppppppiStack_7ac = (int *******)0x43da3f;
    (*(code *)(*param_2)[0x4f])();
    pppppppiStack_7ac = (int *******)&pppppppiStack_6e0;
    pppppppiStack_7b0 = (int *******)&pppppppiStack_6e0;
    piStack_7b4 = (int *)0x43da54;
    thunk_FUN_004961b2();
    piStack_7b4 = &iStack_698;
    pppppppiStack_7b8 = (int *******)&iStack_698;
    uStack_7bc = 0x43da69;
    thunk_FUN_004961b2();
    uStack_7bc = 4;
    pppppppiStack_7c0 = &ppppppiStack_6a0;
    ppppppiStack_7c4 = (int ******)0xd;
    pppppppiStack_7c8 = param_2;
    ppppppiStack_7cc = (int ******)0x43da7f;
    (*(code *)(*param_2)[0x4f])();
    ppppppiStack_7cc = (int ******)&stack0xfffff950;
    ppppppiStack_7d0 = (int ******)&stack0xfffff950;
    uStack_7d4 = 0x43da94;
    thunk_FUN_004961b2();
    uStack_7d4 = 1;
    pppppppiStack_7d8 = appppppiStack_55c;
    ppppppiStack_7dc = (int ******)0xa;
    pppppppiStack_7e0 = param_2;
    fStack_7e4 = 6.23142e-39;
    (*(code *)(*param_2)[0x4f])();
    fStack_7e4 = 1.4013e-45;
    pppppppiStack_7e8 = appppppiStack_55c;
    iStack_7ec = 0xb;
    pppppppiStack_7f0 = param_2;
    fStack_7f4 = 6.231451e-39;
    (*(code *)(*param_2)[0x4f])();
    fStack_7f4 = 1.4013e-45;
    pppppppiStack_7f8 = appppppiStack_55c;
    uStack_7fc = 1.68156e-44;
    pppppppiStack_800 = param_2;
    uStack_804 = 6.231482e-39;
    (*(code *)(*param_2)[0x4f])();
    uStack_804 = 1.4013e-45;
    uStack_808 = (int *******)&pppppppiStack_774;
    ppppppiStack_80c = (int ******)0x0;
    uStack_810 = param_2;
    pppppppiStack_774 = (int *******)0x0;
    pppppppiStack_770 = (int *******)0x0;
    uStack_76c = 0;
    ppppppiStack_768 = (int ******)0x0;
    pppppppiStack_814 = (int *******)0x43db18;
    (*(code *)(*param_2)[0x4f])();
    pppppppiStack_814 = (int *******)0x1;
    pppppppiStack_818 = (int *******)&pppppppiStack_784;
    pppppppiStack_81c = (int *******)0x1;
    pppppppiStack_820 = param_2;
    pppppppiStack_784 = (int *******)0x3f800000;
    pppppppiStack_780 = (int *******)0x3f800000;
    pppppppiStack_77c = (int *******)0x3f800000;
    pppppppiStack_778 = (int *******)0x437f0000;
    (*(code *)(*param_2)[0x4f])();
    pppppppiStack_794 = (int *******)0x3f000000;
    pppppppiStack_790 = (int *******)0x3f000000;
    puStack_78c = (undefined1 *)0x3f000000;
    pppppppiStack_788 = (int *******)0x3eb33333;
    (*(code *)(*param_2)[0x4f])();
    (*(code *)(*param_2)[0x2d])();
    ppppppiStack_6a0 = (int ******)-(float)ppppppiStack_6a0;
    local_69c = (int ******)-(float)local_69c;
    (*(code *)(*param_2)[0x4f])();
    if (DAT_005a2584 == (float *******)0xffffffff) {
      DAT_005a2584 = (float *******)FUN_0043bac0();
    }
    puStack_858 = (undefined1 *)0x43dc19;
    (*(code *)(*param_2)[0x4c])();
    puStack_858 = (undefined1 *)0x0;
    pppppppiStack_85c = (int *******)0x89;
    pppppppiStack_860 = param_2;
    uStack_864 = 0x43dc2a;
    (*(code *)(*param_2)[0x32])();
    uStack_864 = 0;
    uStack_868 = (int *******)0xe;
    pppppppiStack_86c = param_2;
    uStack_870 = 0x43dc38;
    (*(code *)(*param_2)[0x32])();
    puVar4 = puStack_858;
    pppppppiStack_874 = *(int ********)((int)puStack_858 + 0x2ac);
    uStack_870 = 0x50;
    puStack_878 = (undefined1 *)0x0;
    pppppppiStack_87c = param_2;
    pppppppiStack_880 = (int *******)0x43dc51;
    (*(code *)(*param_2)[0x53])();
    ppppiStack_884 = *(int *****)((int)puVar4 + 0x2b0);
  }
  pppppppiStack_880 = (int *******)0x0;
  pppppppiStack_888 = param_2;
  pppppppiStack_88c = (int *******)0x43dd44;
  (*(code *)(*param_2)[0x55])();
LAB_0043dd44:
  ppppppiStack_744 = (int ******)(aiStack_188 + 3);
  pppppppiStack_748 = (int *******)0x0;
  apppppppiStack_758[3] = param_2;
  apppppppiStack_758[2] = (int *******)0x43dd58;
  (*(code *)(*param_2)[0x2d])();
  fVar1 = (float)piStack_3c[0xa0];
  piVar22 = aiStack_188;
  ppppppiVar14 = (int ******)&ppppppiStack_418;
  for (iVar10 = 0x1a; iVar10 != 0; iVar10 = iVar10 + -1) {
    *ppppppiVar14 = (int *****)*piVar22;
    piVar22 = piVar22 + 1;
    ppppppiVar14 = ppppppiVar14 + 1;
  }
  if (fVar1 < _DAT_00583354) {
    if ((float)piStack_3c[0xa0] < _DAT_00582ad8 == ((float)piStack_3c[0xa0] == _DAT_00582ad8)) {
      apppppppiStack_758[2] = (int *******)0x43ddb5;
      uVar11 = FUN_004cf110();
    }
    else {
      uVar11 = 0;
    }
  }
  else {
    uVar11 = 0xff;
  }
  if ((float)piStack_3c[0xa1] < _DAT_00583354) {
    if ((float)piStack_3c[0xa1] < _DAT_00582ad8 == ((float)piStack_3c[0xa1] == _DAT_00582ad8)) {
      apppppppiStack_758[2] = (int *******)0x43ddff;
      uVar20 = FUN_004cf110();
    }
    else {
      uVar20 = 0;
    }
  }
  else {
    uVar20 = 0;
  }
  if ((float)piStack_3c[0xa2] < _DAT_00583354) {
    if ((float)piStack_3c[0xa2] < _DAT_00582ad8 == ((float)piStack_3c[0xa2] == _DAT_00582ad8)) {
      apppppppiStack_758[2] = (int *******)0x43de49;
      uVar13 = FUN_004cf110();
    }
    else {
      uVar13 = 0;
    }
  }
  else {
    uVar13 = 0;
  }
  pppppppiStack_710 = (int *******)(((uVar13 >> 8 | uVar20) >> 8 | uVar11) & 0xff);
  if ((float)piStack_3c[0xa1] < _DAT_00583354) {
    if ((float)piStack_3c[0xa1] < _DAT_00582ad8 == ((float)piStack_3c[0xa1] == _DAT_00582ad8)) {
      apppppppiStack_758[2] = (int *******)0x43dea4;
      uVar11 = FUN_004cf110();
    }
    else {
      uVar11 = 0;
    }
  }
  else {
    uVar11 = 0xff;
  }
  if ((float)piStack_3c[0xa2] < _DAT_00583354) {
    if ((float)piStack_3c[0xa2] < _DAT_00582ad8 == ((float)piStack_3c[0xa2] == _DAT_00582ad8)) {
      apppppppiStack_758[2] = (int *******)0x43deee;
      uVar20 = FUN_004cf110();
    }
    else {
      uVar20 = 0;
    }
  }
  else {
    uVar20 = 0;
  }
  ppppiStack_6f0 = (int ****)((uVar20 >> 8 | uVar11) & 0xff);
  if ((float)piStack_3c[0xa2] < _DAT_00583354) {
    if ((float)piStack_3c[0xa2] < _DAT_00582ad8 == ((float)piStack_3c[0xa2] == _DAT_00582ad8)) {
      apppppppiStack_758[2] = (int *******)0x43df44;
      bVar6 = FUN_004cf110();
    }
    else {
      bVar6 = 0;
    }
  }
  else {
    bVar6 = 0xff;
  }
  fStack_414 = (float)_DAT_00588b78 * (float)(int)pppppppiStack_710;
  apppppppiStack_758[2] = &ppppppiStack_418;
  apppppppiStack_758[1] = (int *******)0x0;
  apppppppiStack_758[0] = param_2;
  fStack_410 = (float)_DAT_00588b78 * (float)(int)ppppiStack_6f0;
  fStack_730 = (float)bVar6;
  fStack_40c = (float)bVar6 * (float)_DAT_00588b78;
  fStack_3f4 = (float)(int)pppppppiStack_710 * (float)_DAT_00588b70;
  fStack_3f0 = (float)(int)ppppiStack_6f0 * (float)_DAT_00588b70;
  fStack_3ec = fStack_730 * (float)_DAT_00588b70;
  ppppppiStack_75c = (int ******)0x43dfc9;
  (*(code *)(*param_2)[0x2c])();
  ppppppiStack_75c = (int ******)0x43dfe1;
  FUN_004cf110();
  ppppppiStack_75c = (int ******)0x43dffd;
  FUN_004cf110();
  ppppppiStack_75c = (int ******)0x43e018;
  FUN_004cf110();
  if (cStack_745 != '\0') {
    ppppppiStack_75c = (int ******)0x1;
    uStack_760 = (int *******)0x1b;
    pppppppiStack_764 = param_2;
    ppppppiStack_768 = (int ******)0x43e039;
    (*(code *)(*param_2)[0x32])();
    ppppppiStack_768 = (int ******)0x0;
    uStack_76c = 0xf;
    pppppppiStack_770 = param_2;
    pppppppiStack_774 = (int *******)0x43e047;
    (*(code *)(*param_2)[0x32])();
    pppppppiStack_774 = (int *******)0x9;
    pppppppiStack_778 = (int *******)0x13;
    pppppppiStack_77c = param_2;
    pppppppiStack_780 = (int *******)0x43e055;
    (*(code *)(*param_2)[0x32])();
    pppppppiStack_780 = (int *******)0x1;
    pppppppiStack_784 = (int *******)0x14;
    pppppppiStack_788 = param_2;
    puStack_78c = (undefined1 *)0x43e063;
    (*(code *)(*param_2)[0x32])();
    puStack_78c = (undefined1 *)0xffffffff;
    pppppppiStack_790 = (int *******)0x22;
    pppppppiStack_794 = param_2;
    pppppppiStack_798 = (int *******)0x43e071;
    (*(code *)(*param_2)[0x32])();
  }
  ppppppiStack_75c = (int ******)0x7;
  uStack_760 = (int *******)0x19;
  pppppppiStack_764 = param_2;
  pppppppiStack_740 = (int *******)((uint)pppppppiStack_740 & 0xffffff);
  ppppppiStack_768 = (int ******)0x43e084;
  (*(code *)(*param_2)[0x32])();
  ppppppiStack_768 = (int ******)0x1f;
  uStack_76c = 0x18;
  pppppppiStack_770 = param_2;
  pppppppiStack_774 = (int *******)0x43e092;
  (*(code *)(*param_2)[0x32])();
  if (uStack_760._3_1_ == '\0') {
    pppppppiStack_774 = (int *******)0x5;
    pppppppiStack_778 = (int *******)0x13;
    pppppppiStack_77c = param_2;
    pppppppiStack_780 = (int *******)0x43e0a8;
    (*(code *)(*param_2)[0x32])();
    pppppppiStack_780 = (int *******)0x6;
    pppppppiStack_784 = (int *******)0x14;
    pppppppiStack_788 = param_2;
    puStack_78c = (undefined1 *)0x43e0b6;
    (*(code *)(*param_2)[0x32])();
  }
  else {
    pppppppiStack_774 = (int *******)0x9;
    pppppppiStack_778 = (int *******)0x13;
    pppppppiStack_77c = param_2;
    pppppppiStack_780 = (int *******)0x43e0c6;
    (*(code *)(*param_2)[0x32])();
    pppppppiStack_780 = (int *******)0x1;
    pppppppiStack_784 = (int *******)0x14;
    pppppppiStack_788 = param_2;
    puStack_78c = (undefined1 *)0x43e0d4;
    (*(code *)(*param_2)[0x32])();
  }
  puStack_78c = (undefined1 *)0x2;
  pppppppiStack_790 = (int *******)0x1;
  pppppppiStack_794 = (int *******)0x0;
  pppppppiStack_798 = param_2;
  uStack_79c = 0x43e0e4;
  (*(code *)(*param_2)[0x3f])();
  uStack_79c = 2;
  pppppppiStack_7a0 = (int *******)0x2;
  fStack_7a4 = 0.0;
  pppppppiStack_7a8 = param_2;
  pppppppiStack_7ac = (int *******)0x43e0f4;
  (*(code *)(*param_2)[0x3f])();
  pppppppiStack_7ac = (int *******)0x1;
  pppppppiStack_7b0 = (int *******)0x3;
  piStack_7b4 = (int *)0x0;
  pppppppiStack_7b8 = param_2;
  uStack_7bc = 0x43e104;
  (*(code *)(*param_2)[0x3f])();
  uStack_7bc = 4;
  pppppppiStack_7c0 = (int *******)0x4;
  ppppppiStack_7c4 = (int ******)0x0;
  pppppppiStack_7c8 = param_2;
  ppppppiStack_7cc = (int ******)0x43e114;
  (*(code *)(*param_2)[0x3f])();
  ppppppiStack_7cc = (int ******)0x2;
  ppppppiStack_7d0 = (int ******)0x5;
  uStack_7d4 = 0;
  pppppppiStack_7d8 = param_2;
  ppppppiStack_7dc = (int ******)0x43e124;
  (*(code *)(*param_2)[0x3f])();
  ppppppiStack_7dc = (int ******)0x3;
  pppppppiStack_7e0 = (int *******)0x6;
  fStack_7e4 = 0.0;
  pppppppiStack_7e8 = param_2;
  iStack_7ec = 0x43e134;
  (*(code *)(*param_2)[0x3f])();
  iStack_7ec = 1;
  pppppppiStack_7f0 = (int *******)0x1;
  fStack_7f4 = 1.4013e-45;
  pppppppiStack_7f8 = param_2;
  uStack_7fc = 6.233788e-39;
  (*(code *)(*param_2)[0x3f])();
  uStack_7fc = 1.4013e-45;
  pppppppiStack_800 = (int *******)0x4;
  uStack_804 = 1.4013e-45;
  uStack_808 = param_2;
  ppppppiStack_80c = (int ******)0x43e154;
  (*(code *)(*param_2)[0x3f])();
  ppppppiStack_80c = (int ******)0x43e165;
  ppppppiVar14 = (int ******)FUN_004cf110();
  uVar11 = (uint)ppppppiVar14 & 0xff;
  ppppppiStack_80c = (int ******)((((int)ppppppiVar14 << 8 | uVar11) << 8 | uVar11) << 8 | uVar11);
  uStack_810 = (int *******)0x3c;
  pppppppiStack_814 = param_2;
  pppppppiStack_818 = (int *******)0x43e18e;
  ppppppiStack_7d0 = ppppppiVar14;
  (*(code *)(*param_2)[0x32])();
  if ((int)ppppppiVar14 < 0xff) {
    pppppppiStack_818 = (int *******)0x1;
    pppppppiStack_81c = (int *******)0x1b;
    pppppppiStack_820 = param_2;
    (*(code *)(*param_2)[0x32])();
  }
  pppppppiStack_7f8 = (int *******)0x0;
  piVar22 = piStack_3c;
  iVar10 = iStack_a0;
  if (*(int *)((int)pppppppiStack_800 + 0x200) != 0) {
    iStack_7ec = 0;
    do {
      fStack_7e4 = *(float *)(*(int *)((int)pppppppiStack_800 + 0x1fc) + 8 + iStack_7ec);
      pppppppiStack_7e8 = (int *******)(*(int *)((int)pppppppiStack_800 + 0x1fc) + iStack_7ec);
      ppppppiVar14 = pppppppiStack_7e8[1];
      fStack_7f4 = 0.0;
      if (fStack_7e4 != 0.0) {
        if (*(short *)pppppppiStack_7e8 == -0x8000) {
          if (*(char *)((int)piVar22 + 0x279) != '\0') {
            pppppppiStack_81c = (int *******)0x43e214;
            pppppppiStack_818 = (int *******)fStack_7e4;
            FUN_0041e920();
            pppppppiStack_7c8 = (int *******)0x0;
            ppppppiStack_7c4 = (int ******)0x3f800000;
            pppppppiStack_7c0 = (int *******)0x0;
            if (fStack_7e4 != 0.0) {
              do {
                iVar10 = piVar22[0x8e];
                if ((iVar10 == 0) ||
                   ((*(char *)(((int)*ppppppiVar14 - *(int *)((int)pppppppiStack_800 + 0x1e4)) /
                               0x2c + iVar10) == '\0' &&
                    (*(char *)(iVar10 + (int)fStack_7f4) == '\0')))) {
                  pppppppiStack_820 =
                       (int *******)
                       (uint)*(ushort *)
                              (*(int *)((int)pppppppiStack_800 + 0x204) +
                              (uint)*(byte *)(*ppppppiVar14 + 10) * 2);
                  pppppppiStack_818 = (int *******)0xffffffff;
                  pppppppiStack_81c = (int *******)0x0;
                  puVar15 = (undefined4 *)FUN_0041cbb0();
                  iVar10 = piVar22[0x8b];
                  pppppiVar27 = *ppppppiVar14;
                  uStack_79c = *(undefined4 *)((uint)*(ushort *)(pppppiVar27 + 1) * 0x10 + iVar10);
                  pppppppiStack_798 =
                       *(int ********)((uint)*(ushort *)(pppppiVar27 + 1) * 0x10 + 4 + iVar10);
                  pppppppiStack_794 =
                       *(int ********)((uint)*(ushort *)(pppppiVar27 + 1) * 0x10 + 8 + iVar10);
                  pppppppiStack_818 = (int *******)auStack_520;
                  pppppppiStack_81c = (int *******)0x43e30b;
                  FUN_00548748();
                  if ((char)piVar22[0x9d] != '\0') {
                    pppppppiStack_818 = (int *******)auStack_5c4;
                    pppppppiStack_81c =
                         (int *******)(piVar22[0x90] + (uint)*(ushort *)(*ppppppiVar14 + 1) * 0xc);
                    pppppppiStack_820 = &ppppppiStack_75c;
                    pppppppiVar16 = (int *******)FUN_00548964();
                    if ((int ********)pppppppiVar16 != &pppppppiStack_7c8) {
                      pppppppiStack_7c8 = (int *******)*pppppppiVar16;
                      ppppppiStack_7c4 = pppppppiVar16[1];
                      pppppppiStack_7c0 = (int *******)pppppppiVar16[2];
                    }
                  }
                  *puVar15 = uStack_79c;
                  puVar15[1] = pppppppiStack_798;
                  puVar15[2] = pppppppiStack_794;
                  puVar15[3] = pppppppiStack_7c8;
                  puVar15[4] = ppppppiStack_7c4;
                  puVar15[5] = pppppppiStack_7c0;
                  puVar15[6] = (*ppppppiVar14)[6];
                  ppppiVar24 = (*ppppppiVar14)[7];
                  puVar15[8] = 0;
                  puVar15[9] = 0;
                  puVar15[7] = -(float)ppppiVar24;
                  pppppiVar27 = *ppppppiVar14;
                  iVar10 = piVar22[0x8b];
                  uStack_79c = *(undefined4 *)
                                ((uint)*(ushort *)((int)pppppiVar27 + 2) * 0x10 + iVar10);
                  pppppppiStack_798 =
                       *(int ********)((uint)*(ushort *)((int)pppppiVar27 + 2) * 0x10 + 4 + iVar10);
                  pppppppiStack_794 =
                       *(int ********)((uint)*(ushort *)((int)pppppiVar27 + 2) * 0x10 + 8 + iVar10);
                  pppppppiStack_818 = (int *******)auStack_520;
                  pppppppiStack_81c = (int *******)0x43e3ea;
                  FUN_00548748();
                  if ((char)piVar22[0x9d] != '\0') {
                    pppppppiStack_818 = (int *******)auStack_5c4;
                    pppppppiStack_81c =
                         (int *******)
                         (piVar22[0x90] + (uint)*(ushort *)((int)*ppppppiVar14 + 2) * 0xc);
                    pppppppiStack_820 = (int *******)&stack0xfffff8f4;
                    pppppppiVar16 = (int *******)FUN_00548964();
                    if ((int ********)pppppppiVar16 != &pppppppiStack_7c8) {
                      pppppppiStack_7c8 = (int *******)*pppppppiVar16;
                      ppppppiStack_7c4 = pppppppiVar16[1];
                      pppppppiStack_7c0 = (int *******)pppppppiVar16[2];
                    }
                  }
                  puVar15[10] = uStack_79c;
                  puVar15[0xb] = pppppppiStack_798;
                  puVar15[0xc] = pppppppiStack_794;
                  puVar15[0xd] = pppppppiStack_7c8;
                  puVar15[0xe] = ppppppiStack_7c4;
                  puVar15[0xf] = pppppppiStack_7c0;
                  pppppiVar27 = *ppppppiVar14;
                  iVar10 = piVar22[0x8b];
                  uStack_79c = *(undefined4 *)((uint)*(ushort *)pppppiVar27 * 0x10 + iVar10);
                  pppppppiStack_798 =
                       *(int ********)((uint)*(ushort *)pppppiVar27 * 0x10 + 4 + iVar10);
                  pppppppiStack_794 =
                       *(int ********)((uint)*(ushort *)pppppiVar27 * 0x10 + 8 + iVar10);
                  pppppppiStack_818 = (int *******)auStack_520;
                  pppppppiStack_81c = (int *******)0x43e4ad;
                  FUN_00548748();
                  if ((char)piVar22[0x9d] != '\0') {
                    pppppppiStack_818 = (int *******)auStack_5c4;
                    pppppppiStack_81c =
                         (int *******)(piVar22[0x90] + (uint)*(ushort *)*ppppppiVar14 * 0xc);
                    pppppppiStack_820 = (int *******)&pppppppiStack_788;
                    pppppppiVar16 = (int *******)FUN_00548964();
                    if ((int ********)pppppppiVar16 != &pppppppiStack_7c8) {
                      pppppppiStack_7c8 = (int *******)*pppppppiVar16;
                      ppppppiStack_7c4 = pppppppiVar16[1];
                      pppppppiStack_7c0 = (int *******)pppppppiVar16[2];
                    }
                  }
                  puVar15[0x14] = uStack_79c;
                  puVar15[0x15] = pppppppiStack_798;
                  puVar15[0x16] = pppppppiStack_794;
                  puVar15[0x18] = ppppppiStack_7c4;
                  puVar15[0x17] = pppppppiStack_7c8;
                  puVar15[0x19] = pppppppiStack_7c0;
                  iVar10 = 0;
                  do {
                    if ((*(byte *)((int)pppppppiStack_800 + 0x188) & 1) == 0) {
                      pppppiVar27 = *ppppppiVar14;
                      pfVar8 = (float *)((uint)*(ushort *)((int)pppppiVar27 + iVar10 * 2) * 0x10 +
                                        piVar22[0x8b]);
                      pppppppiStack_7ac = (int *******)*pfVar8;
                      pppppppiStack_7a8 = (int *******)pfVar8[1];
                      fStack_7a4 = pfVar8[2];
                      pppppppiStack_7b8 =
                           (int *******)
                           ((float)pppppppiStack_7ac * (float)pppppiVar27[2] +
                            (float)pppppppiStack_7a8 * (float)pppppiVar27[3] +
                            fStack_7a4 * (float)pppppiVar27[4] + (float)pppppiVar27[5]);
                      ppppiVar24 = (int ****)
                                   ((float)pppppppiStack_7ac * (float)pppppiVar27[6] +
                                    (float)pppppppiStack_7a8 * (float)pppppiVar27[7] +
                                    fStack_7a4 * (float)pppppiVar27[8] + (float)pppppiVar27[9]);
                      piVar22 = piStack_158;
LAB_0043e5f5:
                      pppppppiStack_7d8 = (int *******)-(float)ppppiVar24;
                    }
                    else {
                      if (iVar10 == 0) {
                        pppppppiStack_7b8 = (int *******)(*ppppppiVar14)[2];
                        ppppiVar24 = (*ppppppiVar14)[3];
                        goto LAB_0043e5f5;
                      }
                      if (iVar10 == 1) {
                        pppppppiStack_7b8 = (int *******)(*ppppppiVar14)[4];
                        ppppiVar24 = (*ppppppiVar14)[5];
                        goto LAB_0043e5f5;
                      }
                      if (iVar10 == 2) {
                        pppppppiStack_7b8 = (int *******)(*ppppppiVar14)[6];
                        ppppiVar24 = (*ppppppiVar14)[7];
                        goto LAB_0043e5f5;
                      }
                    }
                    puVar15[iVar10 * -10 + 0x1a] = pppppppiStack_7b8;
                    iVar9 = iVar10 + 1;
                    puVar15[iVar10 * -10 + 0x1b] = pppppppiStack_7d8;
                    iVar10 = iVar9;
                  } while (iVar9 < 3);
                  pppppppiStack_818 = (int *******)0x43e627;
                  FUN_0041eac0();
                }
                fStack_7f4 = (float)((int)fStack_7f4 + 1);
                ppppppiVar14 = ppppppiVar14 + 1;
                iVar10 = iStack_15c;
              } while ((uint)fStack_7f4 < (uint)fStack_7e4);
            }
          }
        }
        else {
          pppppppiStack_7f0 = (int *******)((int)pppppppiStack_7f0 + (int)fStack_7e4);
          pppppppiStack_818 = (int *******)piVar22[0x79];
          pppppppiStack_81c = (int *******)0x0;
          pppppppiStack_820 = (int *******)0x1;
          FUN_004200d0();
          bVar6 = *(byte *)(*ppppppiVar14 + 10);
          if (pppppppiStack_7e0 != (int *******)0x0) {
            pppppppiStack_818 = (int *******)0x0;
            pppppppiStack_81c = param_2;
            pppppppiStack_820 = (int *******)0x43e68e;
            (**(code **)((int)pppppppiStack_7e0 + 4))();
          }
          if (uStack_7fc._3_1_ == '\0') {
            if ((*(byte *)((uint)bVar6 * 0x50 + 0x44 + *(int *)((int)pppppppiStack_800 + 0x1d4)) & 8
                ) != 0) {
              pppppppiStack_818 = (int *******)0x1;
              pppppppiStack_81c = (int *******)0xe;
              pppppppiStack_820 = param_2;
              (*(code *)(*param_2)[0x32])();
              (*(code *)(*param_2)[0x32])();
              (*(code *)(*param_2)[0x32])();
              (*(code *)(*param_2)[0x32])();
              (*(code *)(*param_2)[0x32])();
              puStack_858 = (undefined1 *)0x14;
              pppppppiStack_85c = param_2;
              pppppppiStack_860 = (int *******)0x43e709;
              (*(code *)(*param_2)[0x32])();
              if (uStack_804._3_1_ != '\0') {
                pppppppiStack_818 = (int *******)piStack_7b4;
                pppppppiStack_81c = (int *******)0x22;
                pppppppiStack_820 = param_2;
                (*(code *)(*param_2)[0x32])();
              }
              uStack_7fc = (float)CONCAT13(1,(undefined3)uStack_7fc);
            }
          }
          else if ((*(byte *)((uint)bVar6 * 0x50 + 0x44 + *(int *)((int)pppppppiStack_800 + 0x1d4))
                   & 8) == 0) {
            pppppppiStack_818 = (int *******)0x1;
            pppppppiStack_81c = (int *******)0x7;
            pppppppiStack_820 = param_2;
            (*(code *)(*param_2)[0x32])();
            (*(code *)(*param_2)[0x32])();
            (*(code *)(*param_2)[0x32])();
            if (uStack_804._3_1_ == '\0') {
              if (ppppppiStack_7dc == (int ******)0xff) {
                pppppppiStack_818 = (int *******)0x0;
                pppppppiStack_81c = (int *******)0x1b;
                pppppppiStack_820 = param_2;
                (*(code *)(*param_2)[0x32])();
              }
            }
            else {
              pppppppiStack_818 = (int *******)0xffffffff;
              pppppppiStack_81c = (int *******)0x22;
              pppppppiStack_820 = param_2;
              (*(code *)(*param_2)[0x32])();
              (*(code *)(*param_2)[0x32])();
              (*(code *)(*param_2)[0x32])();
            }
            uStack_7fc = (float)((uint)uStack_7fc & 0xffffff);
          }
          pppppppiStack_818 = (int *******)fStack_7e4;
          pppppppiStack_81c = (int *******)pppppppiStack_7e8[5];
          pppppppiStack_820 = (int *******)((int)pppppppiStack_7e8[7] + 1);
          (*(code *)(*param_2)[0x47])();
        }
      }
      pppppppiStack_7f8 = (int *******)((int)pppppppiStack_7f8 + 1);
      iStack_7ec = iStack_7ec + 0x24;
      ppppppiVar14 = ppppppiStack_7dc;
    } while (pppppppiStack_7f8 < *(uint *)((int)pppppppiStack_800 + 0x200));
  }
  pppppppiStack_818 = (int *******)0xffffffff;
  pppppppiStack_81c = (int *******)0x3c;
  pppppppiStack_820 = param_2;
  (*(code *)(*param_2)[0x32])();
  if ((int)ppppppiVar14 < 0xff) {
    (*(code *)(*param_2)[0x32])();
  }
  if (uStack_810._3_1_ != '\0') {
    (*(code *)(*param_2)[0x32])();
    (*(code *)(*param_2)[0x32])();
    (*(code *)(*param_2)[0x32])();
  }
  if (uStack_808._3_1_ != '\0') {
    (*(code *)(*param_2)[0x32])();
    (*(code *)(*param_2)[0x32])();
    (*(code *)(*param_2)[0x32])();
    (*(code *)(*param_2)[0x32])();
    puStack_858 = (undefined1 *)0xe;
    pppppppiStack_85c = param_2;
    pppppppiStack_860 = (int *******)0x43e8d0;
    (*(code *)(*param_2)[0x32])();
  }
  if ((((DAT_005a2590 != '\0') && (*(char *)((int)piVar22 + 0x275) != '\0')) &&
      (*(char *)(iVar10 + 0x18ed) == '\0')) &&
     (iVar9 = FUN_0041cb10(), pppppppiVar16 = uStack_808, *(char *)(iVar9 + 0x98) != '\0')) {
    bVar28 = *(char *)(iVar10 + 0x18dd) == '\0';
    uStack_808 = (int *******)CONCAT13(1,(undefined3)uStack_808);
    if (bVar28) {
      uStack_808 = (int *******)((uint)pppppppiVar16 & 0xffffff);
    }
    if ((*(uint *)(iVar10 + 0x1834) & 0x10000) == 0) {
      uStack_808 = (int *******)((uint)uStack_808 & 0xffffff);
    }
    else if (!bVar28) {
      if (DAT_005a2588 == -1) {
        DAT_005a2588 = FUN_0043bd60();
      }
      if (DAT_005a258c == -1) {
        DAT_005a258c = FUN_0043bc50();
      }
    }
    (*(code *)(*param_2)[0x32])();
    (*(code *)(*param_2)[0x32])();
    (*(code *)(*param_2)[0x32])();
    FUN_0041cb80();
    FUN_004cf110();
    puStack_858 = (undefined1 *)0x43e9ce;
    _snprintf(acStack_218,0x80,"caust%02ld");
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &pppppppiStack_77c,acStack_218);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &pppppppiStack_7a8,".\\textures\\caust\\");
    FUN_00429a60();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &pppppppiStack_7a8);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &pppppppiStack_77c);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &pppppppiStack_7a8,acStack_218);
    iVar9 = FUN_004222d0();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &pppppppiStack_7a8);
    (**(code **)(iVar9 + 4))();
    puStack_858 = (undefined1 *)0x16;
    pppppppiStack_85c = param_2;
    pppppppiStack_800 = (int *******)0x0;
    uStack_7fc = 0.0;
    pppppppiStack_7f8 = (int *******)0x0;
    fStack_7f4 = 0.0;
    pppppppiStack_860 = (int *******)0x43ea99;
    (*(code *)(*param_2)[0x4f])();
    pppppppiStack_860 = (int *******)&pppppppiStack_820;
    uStack_864 = 0x22;
    uStack_868 = param_2;
    pppppppiStack_86c = (int *******)0x43eaaa;
    (*(code *)(*param_2)[0x33])();
    pppppppiStack_86c = &ppppppiStack_80c;
    uStack_870 = 0x1c;
    pppppppiStack_874 = param_2;
    puStack_878 = (undefined1 *)0x43eabb;
    (*(code *)(*param_2)[0x33])();
    puStack_878 = (undefined1 *)0x0;
    pppppppiStack_87c = (int *******)0x22;
    pppppppiStack_880 = param_2;
    ppppiStack_884 = (int ****)0x43eac9;
    (*(code *)(*param_2)[0x32])();
    if (uStack_868._3_1_ == '\0') {
      ppppiStack_884 = (int ****)0x1;
      pppppppiStack_888 = (int *******)0x89;
      pppppppiStack_88c = param_2;
      fStack_890 = 6.239143e-39;
      (*(code *)(*param_2)[0x32])();
      uStack_894 = *(undefined4 *)((int)puStack_878 + 0x2ac);
      fStack_890 = 4.48416e-44;
      pppppppiStack_898 = (int *******)0x0;
      pppppppiStack_89c = param_2;
      pppppfStack_8a0 = (float *****)0x43f04f;
      (*(code *)(*param_2)[0x53])();
      pppppfStack_8a0 = (float *****)0x112;
      pppppppiStack_8a4 = param_2;
      pppppppiStack_8a8 = (int *******)0x43f05e;
      (*(code *)(*param_2)[0x4c])();
      pppppppiStack_8a8 = (int *******)(aiStack_354 + 3);
      pppppppiStack_8ac = (int *******)0x0;
      pppppppiStack_8b0 = param_2;
      pppppppiStack_8b4 = (int *******)0x43f072;
      (*(code *)(*param_2)[0x2d])();
      ppppppiVar14 = *param_2;
      piVar7 = aiStack_354;
      pppppppiVar16 = (int *******)apppppppiStack_758;
      for (iVar10 = 0x1a; iVar10 != 0; iVar10 = iVar10 + -1) {
        *pppppppiVar16 = (int ******)*piVar7;
        piVar7 = piVar7 + 1;
        pppppppiVar16 = pppppppiVar16 + 1;
      }
      pppppppiStack_8b4 = (int *******)apppppppiStack_758;
      uStack_8b8 = 0;
      apppppppiStack_758[1] =
           (int *******)
           (((float)apppppppiStack_758[3] + (float)apppppppiStack_758[2] +
            (float)apppppppiStack_758[1]) * (float)_DAT_00588b38);
      pppppppiStack_8bc = param_2;
      pppppppiStack_734 = (int *******)0x0;
      fStack_730 = 0.0;
      pppppppiStack_72c = (int *******)0x0;
      pppppppiStack_728 = (int *******)0x0;
      ppppppiStack_744 = (int ******)0x0;
      pppppppiStack_740 = (int *******)0x0;
      pppppppiStack_73c = (int *******)0x0;
      pppppppiStack_738 = (int *******)0x0;
      puStack_8c0 = (uint *)0x43f12a;
      apppppppiStack_758[2] = apppppppiStack_758[1];
      apppppppiStack_758[3] = apppppppiStack_758[1];
      pppppppiStack_748 = apppppppiStack_758[1];
      (*(code *)ppppppiVar14[0x2c])();
      ppppppiVar14 = *param_2;
      puVar15 = (undefined4 *)&stack0xfffff904;
      for (iVar10 = 0x11; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      puStack_8c0 = (uint *)&stack0xfffff904;
      pppppppiStack_8c4 = param_2;
      uStack_6f4 = 0x3f4ccccd;
      puStack_8c8 = (undefined1 *)0x43f16d;
      (*(code *)ppppppiVar14[0x2a])();
    }
    else {
      ppppiStack_884 = (int ****)0x0;
      pppppppiStack_888 = (int *******)0x1c;
      pppppppiStack_88c = param_2;
      fStack_890 = 6.23724e-39;
      (*(code *)(*param_2)[0x32])();
      fStack_890 = 0.0;
      uStack_894 = 0x89;
      pppppppiStack_898 = param_2;
      pppppppiStack_89c = (int *******)0x43eaf4;
      (*(code *)(*param_2)[0x32])();
      if (*(char *)((int)ppppiStack_884 + 0x2a7) == '\0') {
        pppppfStack_8a0 = (float *****)ppppiStack_884[0xab];
        pppppppiStack_89c = (int *******)0x20;
        pppppppiStack_8a4 = (int *******)0x0;
        pppppppiStack_8a8 = param_2;
        pppppppiStack_8ac = (int *******)0x43eb3c;
        (*(code *)(*param_2)[0x53])();
        pppppppiStack_8ac = (int *******)DAT_005a258c;
        pppppppiStack_8b0 = param_2;
        pppppppiStack_8b4 = (int *******)0x43eb4d;
        (*(code *)(*param_2)[0x4c])();
      }
      else {
        pppppfStack_8a0 = (float *****)ppppiStack_884[0xab];
        pppppppiStack_89c = (int *******)0x50;
        pppppppiStack_8a4 = (int *******)0x0;
        pppppppiStack_8a8 = param_2;
        pppppppiStack_8ac = (int *******)0x43eb18;
        (*(code *)(*param_2)[0x53])();
        pppppppiStack_8ac = (int *******)DAT_005a2588;
        pppppppiStack_8b0 = param_2;
        pppppppiStack_8b4 = (int *******)0x43eb29;
        (*(code *)(*param_2)[0x4c])();
      }
      fStack_7e4 = *(float *)(iVar10 + 0x1afc);
      pppppppiStack_8b4 = (int *******)apppppppiStack_758;
      uStack_8b8 = 0;
      pppppppiStack_8bc = param_2;
      pppppppiStack_7e0 = (int *******)(_DAT_00583354 / (fStack_7e4 - _DAT_00583354));
      pppppppiStack_7f8 = (int *******)0x0;
      fStack_7f4 = 1.0;
      pppppppiStack_7f0 = (int *******)0x0;
      iStack_7ec = 0;
      pppppppiStack_820 = (int *******)0x3f800000;
      pppppppiStack_81c = (int *******)0x3f800000;
      pppppppiStack_818 = (int *******)0x3f800000;
      pppppppiStack_7e8 = (int *******)0x3f000000;
      ppppppiStack_7dc = (int ******)0x3b000000;
      pppppppiStack_814 = (int *******)0x3a378034;
      uStack_810 = (int *******)0x3a378034;
      pppppppiStack_7a8 = (int *******)0x0;
      fStack_7a4 = 1.0;
      pppppppiStack_7a0 = (int *******)0x0;
      uStack_79c = 0;
      fVar29 = (float10)fsin((float10)fStack_890);
      ppppppiStack_80c = (int ******)(float)(fVar29 * (float10)_DAT_00587c40);
      fVar29 = (float10)fcos((float10)fStack_890);
      uStack_808 = (int *******)(float)(fVar29 * (float10)_DAT_00588b48);
      puStack_8c0 = (uint *)0x43eca6;
      (*(code *)(*param_2)[0x2d])();
      uStack_804 = -(float)pppppppiStack_724;
      pppppppiStack_800 = (int *******)-(float)pppppppiStack_720;
      uStack_7fc = -(float)pppppppiStack_71c;
      puStack_8c0 = (uint *)0x0;
      pppppppiStack_8c4 = (int *******)0x43ed6c;
      puVar17 = (uint *)FUN_0041e470();
      puVar12 = auStack_648;
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar12 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar12 = puVar12 + 1;
      }
      pfVar8 = *(float **)(iStack_204 + 0x1ad0);
      pfVar25 = &fStack_7a4;
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        *pfVar25 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar25 = pfVar25 + 1;
      }
      puStack_8c0 = (uint *)0x1;
      pppppppiStack_8c4 = (int *******)0x43eda0;
      puVar15 = (undefined4 *)FUN_0041e470();
      puVar26 = (undefined4 *)&stack0xfffff954;
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar26 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar26 = puVar26 + 1;
      }
      puStack_8c0 = auStack_648;
      pppppppiStack_8c4 = (int *******)0x0;
      puStack_8c8 = auStack_4e0;
      pppppppiStack_8cc = (int *******)0x43edc7;
      thunk_FUN_00496475();
      pppppppiStack_8cc = appppppiStack_4ec;
      puStack_8d0 = &uStack_810;
      pppppppiStack_8d4 = (int *******)&pppppppiStack_7c0;
      ppppppiStack_8d8 = (int ******)0x43ede4;
      thunk_FUN_00495de0();
      ppppppiStack_8d8 = (int ******)&ppppppiStack_7cc;
      pppppppiStack_8dc = &ppppppiStack_7cc;
      pfStack_8e0 = (float *)0x43edf9;
      thunk_FUN_00495b0f();
      pfStack_8e0 = &fStack_6cc;
      puStack_8e4 = auStack_668;
      pfStack_8e8 = &fStack_628;
      pppppppiStack_8ec = (int *******)0x43ee16;
      thunk_FUN_00495f69();
      pppppppiStack_8ec = &ppppppiStack_7d0;
      puStack_8f0 = auStack_634;
      puStack_8f4 = auStack_4cc;
      puStack_8f8 = (undefined1 *)0x43ee33;
      thunk_FUN_00495f69();
      puStack_8f8 = auStack_4d8;
      pppppppiStack_8fc = &ppppppiStack_418;
      puStack_900 = (uint *)0x43ee48;
      thunk_FUN_004961b2();
      puStack_900 = auStack_648;
      puStack_904 = auStack_4a0;
      puStack_908 = (undefined4 *)0x43ee5d;
      thunk_FUN_004961b2();
      puStack_908 = &uStack_6f4;
      pppppppiStack_90c = &ppppppiStack_744;
      pfStack_910 = (float *)0x43ee72;
      thunk_FUN_004961b2();
      pfStack_910 = &fStack_7f4;
      puStack_914 = auStack_570;
      ppppppiStack_918 = (int ******)0x43ee87;
      thunk_FUN_004961b2();
      ppppppiStack_918 = (int ******)&ppppppiStack_6a0;
      pppppppiStack_91c = &ppppppiStack_3f8;
      uStack_920 = 0x43ee9c;
      thunk_FUN_004961b2();
      uStack_920 = 1;
      pppppppiStack_924 = (int *******)&pppppppiStack_8b4;
      uStack_928 = 0;
      pppppppiStack_92c = param_2;
      uStack_930 = 0x43eeaf;
      (*(code *)(*param_2)[0x4f])();
      uStack_930 = 1;
      pppppppiStack_934 = (int *******)&pppppppiStack_8b4;
      (*(code *)(*param_2)[0x4f])(param_2,1);
      (*(code *)(*param_2)[0x4f])(param_2,4,auStack_460,4);
      (*(code *)(*param_2)[0x4f])(param_2,8,auStack_4f0,4);
      (*(code *)(*param_2)[0x4f])(param_2,0xc,auStack_440,4);
      (*(code *)(*param_2)[0x4f])(param_2,0x13,&uStack_864,1);
      (*(code *)(*param_2)[0x4f])(param_2,0x14,&pppppppiStack_8c4,1);
      (*(code *)(*param_2)[0x4f])(param_2,0x15,&puStack_900,1);
      (*(code *)(*param_2)[0x4f])(param_2,0x16,&pppppppiStack_934,1);
      (*(code *)(*param_2)[0x4f])(param_2,0x17,&puStack_8e4,1);
      (*(code *)(*param_2)[0x4f])(param_2,0x18,&uStack_920,1);
      (*(code *)(*param_2)[0x4f])(param_2,0x1c,&fStack_630,4);
      (*(code *)(*param_2)[0x3f])(param_2,0,1,4);
      (*(code *)(*param_2)[0x3f])(param_2,0,2,2);
      (*(code *)(*param_2)[0x3f])(param_2,0,3,1);
      in_stack_fffff5e8 = 0;
      (*(code *)(*param_2)[0x3f])(param_2,0,4,2);
      in_stack_fffff5d4 = param_2;
      (*(code *)(*param_2)[0x3f])(param_2,0,5,2);
      (*(code *)(*param_2)[0x3f])(param_2,0,6,1);
      in_stack_fffff5b8 = 1;
      (*(code *)(*param_2)[0x3f])(param_2,1,1,1);
      in_stack_fffff5b0 = 0;
      (*(code *)(*param_2)[0x3f])(param_2,1,4);
    }
    (*(code *)(*param_2)[0x55])(param_2,*(undefined4 *)(in_stack_fffff5b8 + 0x2b0),0);
    cVar5 = (char)((uint)in_stack_fffff5b0 >> 0x18);
    uVar11 = 0;
    if (*(int *)(in_stack_fffff5b8 + 0x200) != 0) {
      iVar10 = 0;
      do {
        iVar9 = *(int *)(*(int *)(in_stack_fffff5b8 + 0x1fc) + 8 + iVar10);
        psVar18 = (short *)(*(int *)(in_stack_fffff5b8 + 0x1fc) + iVar10);
        if (((iVar9 != 0) && (*psVar18 != -0x8000)) &&
           ((*(byte *)((uint)*(byte *)(**(int **)(psVar18 + 2) + 0x28) * 0x50 + 0x44 +
                      *(int *)(in_stack_fffff5b8 + 0x1d4)) & 8) == 0)) {
          (*(code *)(*param_2)[0x47])
                    (param_2,4,*(undefined4 *)(psVar18 + 0xc),*(int *)(psVar18 + 0xe) + 1,
                     *(undefined4 *)(psVar18 + 10),iVar9);
        }
        cVar5 = (char)((uint)in_stack_fffff5b0 >> 0x18);
        uVar11 = uVar11 + 1;
        iVar10 = iVar10 + 0x24;
      } while (uVar11 < *(uint *)(in_stack_fffff5b8 + 0x200));
    }
    if (cVar5 == '\0') {
      (*(code *)(*param_2)[0x2c])(param_2,0,auStack_50c);
    }
    (*(code *)(*param_2)[0x32])(param_2,0x22,in_stack_fffff5d4);
    (*(code *)(*param_2)[0x32])(param_2,0x1c,in_stack_fffff5e8);
    (*(code *)(*param_2)[0x32])(param_2,0x1b,0);
    (*(code *)(*param_2)[0x32])(param_2,0x89,0);
    iVar10 = iStack_168;
  }
  (*(code *)(*param_2)[0x3f])();
  (*(code *)(*param_2)[0x3f])();
  (*(code *)(*param_2)[0x3f])();
  if (((*(char *)((int)piVar22 + 0x27b) == '\0') && (cRam000002a6 != '\0')) &&
     (*(char *)(iVar10 + 0x18ed) == '\0')) {
    puStack_858 = auStack_4b4;
    pppppppiStack_85c = (int *******)0x43f2f8;
    FUN_00546f8c();
    puStack_858 = (undefined1 *)0x2;
    pppppppiStack_85c = (int *******)0x43f305;
    puStack_858 = (undefined1 *)FUN_0041e470();
    pppppppiStack_85c = (int *******)&pppppppiStack_738;
    pppppppiStack_860 = (int *******)0x43f313;
    FUN_0041d7a0();
    FUN_00407300();
    pppppppiStack_784 = pppppppiStack_734;
    pppppppiStack_774 = pppppppiStack_724;
    pppppppiStack_788 = pppppppiStack_738;
    pppppppiStack_764 = pppppppiStack_714;
    pppppppiStack_780 = (int *******)fStack_730;
    pppppppiStack_778 = pppppppiStack_728;
    pppppppiStack_770 = pppppppiStack_720;
    puStack_858 = (undefined1 *)0x10;
    ppppppiStack_768 = (int ******)uStack_718;
    pppppppiStack_85c = param_2;
    pppppppiStack_77c = (int *******)0x0;
    uStack_76c = 0;
    uStack_760 = pppppppiStack_710;
    ppppppiStack_75c = (int ******)0x0;
    apppppppiStack_758[0] = (int *******)0x0;
    apppppppiStack_758[1] = (int *******)0x0;
    apppppppiStack_758[2] = (int *******)0x0;
    apppppppiStack_758[3] = (int *******)0x3f800000;
    pppppppiStack_860 = (int *******)0x43f401;
    (*(code *)(*param_2)[0x25])();
    pppppppiStack_860 = (int *******)0x0;
    uStack_864 = 0xe;
    uStack_868 = param_2;
    pppppppiStack_86c = (int *******)0x43f40f;
    (*(code *)(*param_2)[0x32])();
    pppppppiStack_86c = (int *******)0x1;
    uStack_870 = 0x1b;
    pppppppiStack_874 = param_2;
    puStack_878 = (undefined1 *)0x43f41d;
    (*(code *)(*param_2)[0x32])();
    puStack_878 = (undefined1 *)0x2;
    pppppppiStack_87c = (int *******)0x13;
    pppppppiStack_880 = param_2;
    ppppiStack_884 = (int ****)0x43f42b;
    (*(code *)(*param_2)[0x32])();
    ppppiStack_884 = (int ****)0x2;
    pppppppiStack_888 = (int *******)0x14;
    pppppppiStack_88c = param_2;
    fStack_890 = 6.240589e-39;
    (*(code *)(*param_2)[0x32])();
    fStack_890 = 0.0;
    uStack_894 = 0x14;
    pppppppiStack_898 = (int *******)0x0;
    pppppppiStack_89c = param_2;
    pppppfStack_8a0 = (float *****)0x43f449;
    (*(code *)(*param_2)[0x3f])();
    pppppppiStack_860 = (int *******)DAT_005b5f28;
    pppppfStack_8a0 = DAT_005b5f28;
    pppppppiStack_8a4 = (int *******)0x13;
    pppppppiStack_8a8 = (int *******)0x0;
    pppppppiStack_8ac = param_2;
    pppppppiStack_8b0 = (int *******)0x43f463;
    (*(code *)(*param_2)[0x3f])();
    pppppppiStack_8b0 = (int *******)0x1;
    pppppppiStack_8b4 = (int *******)0x12;
    uStack_8b8 = 0;
    pppppppiStack_8bc = param_2;
    puStack_8c0 = (uint *)0x43f473;
    (*(code *)(*param_2)[0x3f])();
    puStack_8c0 = (uint *)0x1;
    pppppppiStack_8c4 = (int *******)0xd;
    puStack_8c8 = (undefined1 *)0x0;
    pppppppiStack_8cc = param_2;
    puStack_8d0 = (undefined4 *)0x43f483;
    (*(code *)(*param_2)[0x3f])();
    puStack_8d0 = (undefined4 *)0x1;
    pppppppiStack_8d4 = (int *******)0xe;
    ppppppiStack_8d8 = (int ******)0x0;
    pppppppiStack_8dc = param_2;
    pfStack_8e0 = (float *)0x43f493;
    (*(code *)(*param_2)[0x3f])();
    pfStack_8e0 = (float *)0x30000;
    puStack_8e4 = (undefined1 *)0xb;
    pfStack_8e8 = (float *)0x0;
    pppppppiStack_8ec = param_2;
    puStack_8f0 = (undefined1 *)0x43f4a6;
    (*(code *)(*param_2)[0x3f])();
    puStack_8f0 = (undefined1 *)0x3;
    puStack_8f4 = (undefined1 *)0x18;
    puStack_8f8 = (undefined1 *)0x0;
    pppppppiStack_8fc = param_2;
    puStack_900 = (uint *)0x43f4b6;
    (*(code *)(*param_2)[0x3f])();
    puStack_900 = (uint *)0x4;
    puStack_904 = (undefined1 *)0x1;
    puStack_908 = (undefined4 *)0x0;
    pppppppiStack_90c = param_2;
    pfStack_910 = (float *)0x43f4c6;
    (*(code *)(*param_2)[0x3f])();
    pfStack_910 = (float *)0x2;
    puStack_914 = (undefined1 *)0x2;
    ppppppiStack_918 = (int ******)0x0;
    pppppppiStack_91c = param_2;
    uStack_920 = 0x43f4d6;
    (*(code *)(*param_2)[0x3f])();
    uStack_920 = 1;
    pppppppiStack_924 = (int *******)0x3;
    uStack_928 = 0;
    pppppppiStack_92c = param_2;
    uStack_930 = 0x43f4e6;
    (*(code *)(*param_2)[0x3f])();
    uStack_930 = 4;
    pppppppiStack_934 = (int *******)0x4;
    (*(code *)(*param_2)[0x3f])(param_2,0);
    (*(code *)(*param_2)[0x3f])(param_2,0,5,2);
    (*(code *)(*param_2)[0x3f])(param_2,0,6,1);
    (*(code *)(*param_2)[0x3f])(param_2,1,1,4);
    (*(code *)(*param_2)[0x3f])(param_2,1,2,2);
    (*(code *)(*param_2)[0x3f])(param_2,1,3,1);
    (*(code *)(*param_2)[0x3f])(param_2,1,4,2);
    (*(code *)(*param_2)[0x3f])(param_2,1,5,1);
    (*(code *)(*param_2)[0x3f])(param_2,1,6,1);
    (*(code *)(*param_2)[0x3f])(param_2,1,0xb,0);
    (*(code *)(*param_2)[0x3f])(param_2,1,0xd,1);
    (*(code *)(*param_2)[0x3f])(param_2,1,0xe,1);
    (*(code *)(*param_2)[0x3d])(param_2,0,0);
    (*(code *)(*param_2)[0x3d])(param_2,1,0);
    uVar19 = (**(code **)(*piVar22 + 0x88))();
    FUN_0041e330(0,uVar19);
    FUN_0045f340(param_2,iVar10,piVar22,1);
    (*(code *)(*param_2)[0x3f])(param_2,0,0xd,1);
    (*(code *)(*param_2)[0x3f])(param_2,0,0xe,1);
    (*(code *)(*param_2)[0x3f])(param_2,0,0xb,0);
    (*(code *)(*param_2)[0x3f])(param_2,0,0x18,0);
    (*(code *)(*param_2)[0x3f])(param_2,1,0xb,1);
    (*(code *)(*param_2)[0x32])(param_2,0x1b,0);
    (*(code *)(*param_2)[0x32])(param_2,0xe,1);
    FUN_00407300();
  }
  puStack_858 = (undefined1 *)0xe;
  pppppppiStack_85c = param_2;
  pppppppiStack_860 = (int *******)0x43f670;
  (*(code *)(*param_2)[0x32])();
  pppppppiStack_860 = (int *******)0x43f677;
  cVar5 = FUN_0041cb70();
  pppppppiStack_860 = (int *******)0x0;
  if (cVar5 == '\0') {
    uStack_864 = 0x89;
    uStack_868 = param_2;
    pppppppiStack_86c = (int *******)0x43f6ab;
    (*(code *)(*param_2)[0x32])();
  }
  else {
    uStack_864 = 0;
    uStack_868 = param_2;
    pppppppiStack_86c = (int *******)0x43f689;
    (*(code *)(*param_2)[0x2e])();
    pppppppiStack_86c = (int *******)0x0;
    uStack_870 = 0x89;
    pppppppiStack_874 = param_2;
    puStack_878 = (undefined1 *)0x43f69a;
    (*(code *)(*param_2)[0x32])();
  }
  puStack_878 = auStack_2b0;
  pppppppiStack_87c = (int *******)0x0;
  pppppppiStack_880 = param_2;
  ppppiStack_884 = (int ****)0x43f6bf;
  (*(code *)(*param_2)[0x2c])();
  ppppiStack_884 = (int ****)0x0;
  pppppppiStack_888 = (int *******)0x1b;
  piVar22[0x22] = 0x3f800000;
  pppppppiStack_88c = param_2;
  fStack_890 = 6.241528e-39;
  (*(code *)(*param_2)[0x32])();
  fStack_890 = 0.0;
  uStack_894 = 0xf;
  pppppppiStack_898 = param_2;
  pppppppiStack_89c = (int *******)0x43f6e5;
  (*(code *)(*param_2)[0x32])();
  pppppppiStack_89c = (int *******)0x1;
  pppppfStack_8a0 = (float *****)0xe;
  pppppppiStack_8a4 = param_2;
  pppppppiStack_8a8 = (int *******)0x43f6f3;
  (*(code *)(*param_2)[0x32])();
  FUN_0043a0c0();
  FUN_00407300();
  FUN_00407300();
  return pppppppiStack_6d4;
}




/* Function: FUN_00446470 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FUN_00446470(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  int *piVar18;
  uint unaff_retaddr;
  undefined4 uVar19;
  undefined4 uVar20;
  uint local_254;
  uint local_24e;
  char local_24a;
  char local_249;
  uint local_248;
  int *local_240;
  int local_23c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_238 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_21c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_200 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1e4 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c8 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1ac [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_190 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_174 [28];
  char local_158 [68];
  byte local_114;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_005b12c0 ^ unaff_retaddr;
  if (*(int *)(param_1 + 0x1d8) != 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_238,"BumpMapping");
    uVar19 = 1;
    uVar7 = FUN_004224c0(local_200,local_238);
    local_24a = FUN_0040e560(uVar7,uVar19);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_200);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_238);
    *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x1d8);
    pvVar8 = operator_new(*(int *)(param_1 + 0x1d8) * 2,(nothrow_t *)&DAT_005b6164);
    *(void **)(param_1 + 0x204) = pvVar8;
    FUN_00424e90(*(undefined4 *)(param_1 + 0x208));
    uVar7 = FUN_0041cf90("Textures\\");
    FUN_00411994(local_21c,uVar7);
    local_254 = 0;
    if (*(int *)(param_1 + 0x1d8) != 0) {
      iVar16 = 0;
      local_248 = 0;
      do {
        puVar17 = (undefined4 *)(*(int *)(param_1 + 0x1d4) + local_248);
        pcVar11 = local_158;
        for (iVar14 = 0x14; iVar14 != 0; iVar14 = iVar14 + -1) {
          *(undefined4 *)pcVar11 = *puVar17;
          puVar17 = puVar17 + 1;
          pcVar11 = pcVar11 + 4;
        }
        pvVar8 = operator_new(0x170,(nothrow_t *)&DAT_005b6164);
        if (pvVar8 == (void *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_00411050();
        }
        iVar14 = *(int *)(param_1 + 0x298);
        pbVar9 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           (local_200,local_158);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                  ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (iVar16 + iVar14),pbVar9);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_200);
        FUN_00429a60(local_21c,*(int *)(param_1 + 0x298) + iVar16,0xffffffff);
        FUN_00410a00(0,*(int *)(param_1 + 0x298) + iVar16,0);
        if (local_24a != '\0') {
          uVar20 = 0xffffffff;
          uVar19 = FUN_00411994(local_238,*(int *)(param_1 + 0x298) + iVar16,"_normal",0xffffffff);
          local_249 = FUN_00429a60(local_21c,uVar19,uVar20);
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_238);
          if (local_249 != '\0') {
            uVar20 = 0;
            uVar19 = FUN_00411994(local_190,*(int *)(param_1 + 0x298) + iVar16,"_normal",0);
            FUN_00410a00(2,uVar19,uVar20);
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_190)
            ;
          }
        }
        uVar15 = local_254;
        uVar19 = FUN_0043f810(local_174,local_254);
        FUN_00425400(uVar7,param_2,uVar19);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_174);
        if (*(char *)(param_1 + 0x2a8) == '\0') {
          if ((local_114 & 8) == 0) {
            uVar7 = FUN_0043f810(local_1c8,uVar15);
            uVar6 = FUN_0041f9b0(uVar7);
            *(undefined2 *)(*(int *)(param_1 + 0x204) + uVar15 * 2) = uVar6;
            pbVar9 = local_1c8;
          }
          else {
            uVar7 = FUN_0043f810(local_1e4,uVar15);
            uVar5 = FUN_0041f9b0(uVar7);
            *(ushort *)(*(int *)(param_1 + 0x204) + uVar15 * 2) = uVar5 | 0x8000;
            pbVar9 = local_1e4;
          }
        }
        else {
          uVar7 = FUN_0043f810(local_1ac,uVar15);
          uVar6 = FUN_0041f9b0(uVar7);
          *(undefined2 *)(*(int *)(param_1 + 0x204) + uVar15 * 2) = uVar6;
          pbVar9 = local_1ac;
        }
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(pbVar9);
        local_254 = uVar15 + 1;
        local_248 = local_248 + 0x50;
        iVar16 = iVar16 + 0x1c;
      } while (local_254 < *(uint *)(param_1 + 0x1d8));
    }
    if (((*(byte *)(param_1 + 0x188) & 4) != 0) && (*(int *)(param_1 + 0x1cc) != 0)) {
      pcVar11 = local_108;
      local_108[0] = '\0';
      pcVar10 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(param_1 + 0x234));
      FUN_004f5290(pcVar10,pcVar11);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_238);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
                (local_238,local_108);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
                (local_238,"\\lightmap");
      pcVar11 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                c_str(local_238);
      pcVar10 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                c_str(local_21c);
      uVar7 = FUN_0041e5b0("using %s%s lightmap",pcVar10,pcVar11);
      FUN_0040a410(uVar7);
      FUN_00429a60(local_21c,local_238,1);
      uVar7 = FUN_004222d0(local_238);
      *(undefined4 *)(param_1 + 0x1f8) = uVar7;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_238);
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_21c);
  }
  FUN_00446430();
  iVar16 = 0;
  local_248 = 0;
  if (*(int *)(param_1 + 0x1e8) != 0) {
    do {
      local_254 = iVar16 + *(int *)(param_1 + 0x1e4);
      bVar2 = *(byte *)(local_254 + 0x28);
      uVar6 = (undefined2)(local_254 >> 0x10);
      if (*(char *)(param_1 + 0x2a8) == '\0') {
        if ((*(ushort *)(*(int *)(param_1 + 0x204) + (uint)bVar2 * 2) & 0x8000) == 0) {
          local_24e = CONCAT22(uVar6,(ushort)bVar2);
          iVar12 = FUN_00445c30(&local_24e);
          iVar14 = *(int *)(iVar12 + 4);
          if (iVar14 == 0) {
            uVar15 = 0;
          }
          else {
LAB_00446969:
            uVar15 = *(int *)(iVar12 + 8) - iVar14 >> 2;
          }
LAB_00446971:
          if ((iVar14 == 0) || ((uint)(*(int *)(iVar12 + 0xc) - iVar14 >> 2) <= uVar15))
          goto LAB_004469e1;
        }
        else {
          local_24e = 0x8000;
          iVar12 = FUN_00445c30(&local_24e);
          iVar14 = *(int *)(iVar12 + 4);
          if ((iVar14 == 0) ||
             ((uint)(*(int *)(iVar12 + 0xc) - iVar14 >> 2) <=
              (uint)(*(int *)(iVar12 + 8) - iVar14 >> 2))) goto LAB_004469e1;
        }
LAB_004468e8:
        iVar14 = *(int *)(iVar12 + 8);
        FUN_004520c0(iVar14,1,&local_254,iVar12,local_24e);
        *(int *)(iVar12 + 8) = iVar14 + 4;
      }
      else {
        if ((*(byte *)((uint)bVar2 * 0x50 + 0x44 + *(int *)(param_1 + 0x1d4)) & 8) != 0) {
          local_24e = CONCAT22(uVar6,(ushort)bVar2) + 0x400;
          iVar12 = FUN_00445c30(&local_24e);
          iVar14 = *(int *)(iVar12 + 4);
          if (iVar14 != 0) goto LAB_00446969;
          uVar15 = 0;
          goto LAB_00446971;
        }
        local_24e = (uint)bVar2;
        iVar12 = FUN_00445c30(&local_24e);
        iVar14 = *(int *)(iVar12 + 4);
        if ((iVar14 != 0) &&
           ((uint)(*(int *)(iVar12 + 8) - iVar14 >> 2) <
            (uint)(*(int *)(iVar12 + 0xc) - iVar14 >> 2))) goto LAB_004468e8;
LAB_004469e1:
        FUN_00444a70(*(undefined4 *)(iVar12 + 8),1,&local_254);
      }
      local_248 = local_248 + 1;
      iVar16 = iVar16 + 0x2c;
    } while (local_248 < *(uint *)(param_1 + 0x1e8));
  }
  *(int *)(param_1 + 0x200) = local_23c;
  piVar13 = operator_new(local_23c * 0x24 + 4,(nothrow_t *)&DAT_005b6164);
  if (piVar13 == (int *)0x0) {
    piVar18 = (int *)0x0;
  }
  else {
    piVar18 = piVar13 + 1;
    *piVar13 = local_23c;
    _eh_vector_constructor_iterator_
              (piVar18,0x24,local_23c,(_func_void_void_ptr *)&LAB_0043fa90,FUN_0043fab0);
  }
  *(int **)(param_1 + 0x1fc) = piVar18;
  piVar13 = (int *)*local_240;
  if (piVar13 != local_240) {
    iVar16 = 0;
    do {
      if ((short)piVar13[3] == -0x8000) {
        uVar5 = 0x8000;
      }
      else {
        bVar2 = *(byte *)(*(int *)piVar13[5] + 0x28);
        uVar5 = (ushort)bVar2;
        if (0x3ff < bVar2) {
          uVar5 = bVar2 - 0x400;
        }
      }
      *(ushort *)(iVar16 + *(int *)(param_1 + 0x1fc)) = uVar5;
      if (piVar13[5] == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = piVar13[6] - piVar13[5] >> 2;
      }
      *(int *)(*(int *)(param_1 + 0x1fc) + 8 + iVar16) = iVar14;
      iVar14 = *(int *)(*(int *)(param_1 + 0x1fc) + 8 + iVar16);
      if (iVar14 != 0) {
        pvVar8 = operator_new(iVar14 * 4,(nothrow_t *)&DAT_005b6164);
        *(void **)(*(int *)(param_1 + 0x1fc) + 4 + iVar16) = pvVar8;
        for (uVar15 = 0;
            (iVar14 = piVar13[5], iVar14 != 0 && (uVar15 < (uint)(piVar13[6] - iVar14 >> 2)));
            uVar15 = uVar15 + 1) {
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1fc) + 4 + iVar16) + uVar15 * 4) =
               *(undefined4 *)(iVar14 + uVar15 * 4);
        }
      }
      if (*(char *)((int)piVar13 + 0x21) == '\0') {
        piVar18 = (int *)piVar13[2];
        if (*(char *)((int)piVar18 + 0x21) == '\0') {
          cVar3 = *(char *)(*piVar18 + 0x21);
          piVar13 = piVar18;
          piVar18 = (int *)*piVar18;
          while (cVar3 == '\0') {
            cVar3 = *(char *)(*piVar18 + 0x21);
            piVar13 = piVar18;
            piVar18 = (int *)*piVar18;
          }
        }
        else {
          cVar3 = *(char *)(piVar13[1] + 0x21);
          piVar4 = (int *)piVar13[1];
          piVar18 = piVar13;
          while ((piVar13 = piVar4, cVar3 == '\0' && (piVar18 == (int *)piVar13[2]))) {
            cVar3 = *(char *)(piVar13[1] + 0x21);
            piVar4 = (int *)piVar13[1];
            piVar18 = piVar13;
          }
        }
      }
      iVar16 = iVar16 + 0x24;
    } while (piVar13 != local_240);
  }
  uVar15 = 0;
  if (*(int *)(param_1 + 0x208) != 0) {
    do {
      pbVar1 = (byte *)(*(int *)(param_1 + 0x204) + 1 + uVar15 * 2);
      *pbVar1 = *pbVar1 & 0x7f;
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_1 + 0x208));
  }
  if (*(char *)(param_1 + 0x2a6) != '\x01') {
    *(undefined1 *)(param_1 + 0x2a6) = 1;
  }
  FUN_00446400();
  return 1;
}




/* Function: FUN_0046ffe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046ffe0(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar5 = FUN_0046a3d0();
    FUN_0041d580(&local_3c,*(int *)(iVar1 + 0x14) + 0x40,*(int *)(iVar1 + 0x14) + 4);
    iVar1 = *(int *)(iVar1 + 0x14);
    fVar3 = _DAT_00583354 / (float)iVar5;
    local_3c = local_3c * fVar3;
    local_38 = local_38 * fVar3;
    local_34 = local_34 * fVar3;
    uVar4 = FUN_0043fa40(local_30,&local_3c,0x40000000);
    uVar4 = FUN_0041d5b0(local_24,&local_3c,(float)(param_2 % iVar5),uVar4);
    uVar4 = FUN_0041d550(local_18,iVar1 + 4,uVar4);
    puVar6 = (undefined4 *)FUN_0041d550(local_c,uVar4);
    if (puVar6 != param_3) {
      *param_3 = *puVar6;
      param_3[1] = puVar6[1];
      param_3[2] = puVar6[2];
    }
    iVar1 = *param_1;
    iVar2 = *(int *)(iVar1 + 0x14);
    pfVar7 = (float *)FUN_0041d580(local_c,iVar2 + 0x7c,iVar2 + 0xb8);
    if (pfVar7 != &local_3c) {
      local_38 = pfVar7[1];
      local_3c = *pfVar7;
      local_34 = pfVar7[2];
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    local_3c = fVar3 * local_3c;
    local_38 = local_38 * fVar3;
    local_34 = local_34 * fVar3;
    uVar4 = FUN_0043fa40(local_c,&local_3c,0x40000000);
    uVar4 = FUN_0041d5b0(local_18,&local_3c,(float)(param_2 % iVar5),uVar4);
    uVar4 = FUN_0041d550(local_24,iVar1 + 0xb8,uVar4);
    puVar6 = (undefined4 *)FUN_0041d550(local_30,uVar4);
    if (puVar6 != param_4) {
      *param_4 = *puVar6;
      param_4[1] = puVar6[1];
      param_4[2] = puVar6[2];
    }
    return;
  }
  FUN_0041ce80("Error! No render info!");
  uVar4 = FUN_0041e5b0();
  FUN_0040a410(uVar4);
  return;
}




/* Function: FUN_00489620 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00489620(int param_1,undefined4 param_2)

{
  int *piVar1;
  float fVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  undefined4 **ppuVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  bool bVar22;
  float10 fVar23;
  float10 extraout_ST0;
  float fVar24;
  uint unaff_retaddr;
  undefined4 **ppuStack_934;
  float *local_918;
  int local_914;
  undefined4 *local_910;
  uint local_908;
  int local_904;
  uint uStack_900;
  undefined4 *puStack_8fc;
  int *local_8ec;
  undefined4 *local_8e8;
  undefined4 *local_8e4;
  undefined4 *local_8e0;
  int local_8dc;
  undefined1 auStack_8d8 [4];
  void *local_8d4;
  undefined4 local_8d0;
  undefined4 local_8cc;
  undefined4 *local_8c8;
  undefined1 auStack_8c4 [4];
  void *local_8c0;
  int local_8bc;
  undefined4 local_8b8;
  char local_8b1;
  int local_8b0;
  void *local_8ac;
  undefined4 *puStack_8a8;
  float fStack_8a4;
  float fStack_8a0;
  undefined4 *puStack_89c;
  float fStack_898;
  float fStack_894;
  undefined4 *puStack_890;
  undefined4 uStack_88c;
  undefined4 *puStack_888;
  undefined4 *puStack_884;
  float fStack_880;
  float fStack_87c;
  undefined1 *puStack_878;
  undefined4 *local_874;
  float fStack_870;
  float fStack_86c;
  float fStack_868;
  undefined4 *puStack_864;
  float fStack_860;
  float fStack_85c;
  undefined4 *puStack_858;
  float fStack_854;
  undefined4 *puStack_850;
  undefined4 *puStack_84c;
  float fStack_848;
  undefined4 *puStack_844;
  undefined4 *local_840;
  undefined4 *puStack_83c;
  float fStack_838;
  int iStack_834;
  undefined4 *puStack_830;
  undefined4 *puStack_82c;
  undefined4 *puStack_828;
  undefined4 uStack_824;
  float fStack_820;
  undefined4 uStack_81c;
  undefined4 *puStack_818;
  float fStack_814;
  float fStack_810;
  undefined4 *puStack_80c;
  float fStack_808;
  float fStack_804;
  undefined1 auStack_800 [12];
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7ec;
  int iStack_7e8;
  float fStack_7e4;
  void *local_7e0;
  undefined4 uStack_7dc;
  float fStack_7d8;
  float fStack_7d4;
  float fStack_7d0;
  undefined4 uStack_7cc;
  float fStack_7c8;
  undefined4 uStack_7c4;
  undefined4 *puStack_7c0;
  float fStack_7bc;
  float fStack_7b8;
  undefined4 *puStack_7b4;
  float fStack_7b0;
  float fStack_7ac;
  undefined4 *puStack_7a8;
  float fStack_7a4;
  float fStack_7a0;
  float fStack_79c;
  float fStack_798;
  undefined4 *puStack_794;
  undefined4 *puStack_790;
  float fStack_78c;
  undefined4 uStack_788;
  undefined4 *puStack_784;
  undefined4 *puStack_780;
  undefined4 *puStack_77c;
  undefined4 *puStack_778;
  void *pvStack_774;
  void *pvStack_770;
  float fStack_76c;
  float fStack_768;
  undefined4 *puStack_764;
  undefined4 **ppuStack_760;
  float fStack_75c;
  undefined4 uStack_758;
  undefined4 *puStack_754;
  float fStack_750;
  undefined4 uStack_74c;
  undefined4 *puStack_748;
  undefined4 **ppuStack_744;
  undefined4 **ppuStack_740;
  undefined4 **ppuStack_73c;
  undefined4 **ppuStack_738;
  undefined4 *puStack_734;
  undefined4 uStack_730;
  float fStack_72c;
  undefined4 **ppuStack_728;
  undefined4 **ppuStack_724;
  undefined4 **ppuStack_720;
  undefined4 *puStack_71c;
  undefined4 uStack_718;
  float fStack_714;
  undefined4 **ppuStack_710;
  undefined4 **ppuStack_70c;
  void *local_704;
  int local_700;
  undefined4 local_6fc;
  undefined4 *puStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  float fStack_6ec;
  float fStack_6e8;
  float fStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 *puStack_6c8;
  undefined4 *puStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 *puStack_6b8;
  undefined4 uStack_6b4;
  float fStack_6ac;
  float fStack_6a8;
  float fStack_6a4;
  undefined4 uStack_6a0;
  float fStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  float fStack_690;
  undefined4 uStack_68c;
  undefined4 *apuStack_688 [2];
  float fStack_680;
  undefined4 *apuStack_67c [2];
  float fStack_674;
  undefined4 *apuStack_670 [3];
  undefined4 **ppuStack_664;
  undefined4 *apuStack_660 [3];
  undefined1 auStack_654 [12];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_648 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_62c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_610 [28];
  undefined1 auStack_5f4 [12];
  undefined4 *apuStack_5e8 [3];
  undefined4 *apuStack_5dc [3];
  undefined1 auStack_5d0 [12];
  undefined4 *apuStack_5c4 [3];
  undefined4 *apuStack_5b8 [3];
  undefined1 auStack_5ac [12];
  undefined1 auStack_5a0 [12];
  undefined4 *apuStack_594 [3];
  undefined4 *apuStack_588 [3];
  undefined1 auStack_57c [12];
  undefined1 auStack_570 [12];
  undefined4 *apuStack_564 [3];
  undefined1 auStack_558 [12];
  undefined1 auStack_54c [12];
  undefined4 *apuStack_540 [3];
  undefined4 *apuStack_534 [3];
  undefined1 auStack_528 [12];
  undefined1 auStack_51c [12];
  undefined1 auStack_510 [12];
  undefined4 *apuStack_504 [3];
  undefined4 *apuStack_4f8 [3];
  undefined4 *apuStack_4ec [3];
  undefined1 auStack_4e0 [12];
  undefined4 *apuStack_4d4 [3];
  undefined1 auStack_4c8 [12];
  undefined4 *apuStack_4bc [3];
  undefined4 *apuStack_4b0 [3];
  undefined1 auStack_4a4 [12];
  undefined1 auStack_498 [12];
  undefined1 auStack_48c [12];
  undefined1 auStack_480 [12];
  undefined1 auStack_474 [12];
  undefined4 *apuStack_468 [3];
  undefined4 *apuStack_45c [3];
  undefined4 *apuStack_450 [3];
  undefined4 *apuStack_444 [6];
  undefined1 auStack_42c [12];
  undefined4 *apuStack_420 [3];
  undefined1 auStack_414 [12];
  undefined1 auStack_408 [12];
  undefined4 *apuStack_3fc [3];
  undefined4 *apuStack_3f0 [3];
  undefined1 auStack_3e4 [12];
  undefined1 auStack_3d8 [12];
  undefined4 *apuStack_3cc [3];
  undefined4 *apuStack_3c0 [3];
  undefined1 auStack_3b4 [12];
  undefined4 *apuStack_3a8 [3];
  undefined1 auStack_39c [24];
  undefined1 auStack_384 [12];
  undefined4 *apuStack_378 [3];
  undefined1 auStack_36c [12];
  undefined4 *apuStack_360 [3];
  undefined1 auStack_354 [12];
  undefined4 *apuStack_348 [3];
  undefined4 *apuStack_33c [3];
  undefined1 auStack_330 [12];
  undefined1 auStack_324 [12];
  undefined4 *apuStack_318 [3];
  undefined4 *apuStack_30c [3];
  undefined4 *apuStack_300 [3];
  undefined4 *apuStack_2f4 [3];
  undefined1 auStack_2e8 [12];
  undefined1 auStack_2dc [12];
  undefined1 auStack_2d0 [12];
  undefined4 *apuStack_2c4 [3];
  undefined1 auStack_2b8 [12];
  undefined1 auStack_2ac [12];
  undefined4 *apuStack_2a0 [3];
  undefined4 *apuStack_294 [3];
  undefined1 auStack_288 [12];
  undefined1 auStack_27c [12];
  undefined1 auStack_270 [12];
  undefined1 auStack_264 [12];
  undefined4 *apuStack_258 [3];
  undefined4 *apuStack_24c [3];
  undefined1 auStack_240 [12];
  undefined4 *apuStack_234 [3];
  undefined4 *apuStack_228 [3];
  undefined4 *apuStack_21c [3];
  undefined1 auStack_210 [12];
  undefined1 auStack_204 [12];
  undefined1 auStack_1f8 [12];
  undefined4 *apuStack_1ec [3];
  undefined4 *apuStack_1e0 [3];
  undefined4 *apuStack_1d4 [3];
  undefined4 *apuStack_1c8 [3];
  undefined1 auStack_1bc [12];
  undefined1 auStack_1b0 [12];
  undefined1 auStack_1a4 [12];
  undefined1 auStack_198 [12];
  undefined1 auStack_18c [12];
  undefined4 *apuStack_180 [3];
  undefined4 *apuStack_174 [3];
  undefined1 auStack_168 [12];
  undefined1 auStack_15c [12];
  undefined4 *apuStack_150 [3];
  undefined1 auStack_144 [12];
  undefined1 auStack_138 [12];
  undefined4 *apuStack_12c [3];
  undefined1 auStack_120 [12];
  undefined4 *apuStack_114 [3];
  undefined4 *apuStack_108 [3];
  undefined1 auStack_fc [12];
  undefined1 auStack_f0 [12];
  undefined4 *apuStack_e4 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_d8 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_bc [28];
  char acStack_a0 [132];
  uint local_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057d3d8;
  pvStack_14 = ExceptionList;
  local_1c = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_14;
  local_8dc = param_1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_648,"EnvMapping");
  local_c = 0;
  ppuStack_934 = (undefined4 **)0x48968c;
  FUN_004224c0();
  ppuStack_934 = (undefined4 **)0x489694;
  FUN_0040e560();
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d8);
  local_c = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_648);
  local_8c0 = (void *)0x0;
  local_8bc = 0;
  local_8b8 = 0;
  local_c = 1;
  local_8d4 = (void *)0x0;
  local_8d0 = 0;
  local_8cc = 0;
  piVar17 = *(int **)(param_1 + 0x16c);
  if (piVar17 != *(int **)(param_1 + 0x170)) {
    do {
      local_840 = (undefined4 *)*piVar17;
      if (local_840 != (undefined4 *)0x0) {
        *local_840 = &PTR_FUN_0058a968;
        if ((void *)local_840[5] != (void *)0x0) {
          operator_delete__((void *)local_840[5]);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete(local_840);
      }
      piVar17 = piVar17 + 1;
      local_840 = (undefined4 *)0x0;
    } while (piVar17 != *(int **)(param_1 + 0x170));
  }
  if (*(void **)(param_1 + 0x16c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x16c));
  }
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  local_704 = (void *)0x0;
  local_700 = 0;
  local_6fc = 0;
  piVar17 = *(int **)(param_1 + 0x18c);
  local_c._0_1_ = 3;
  local_c._1_3_ = 0;
  pvVar6 = local_8ac;
  if (piVar17 != *(int **)(param_1 + 400)) {
    do {
      FUN_00475570();
      local_8ac = (void *)*piVar17;
      if (local_8ac != (void *)0x0) {
        FUN_0047fcc0();
                    /* WARNING: Subroutine does not return */
        operator_delete(local_8ac);
      }
      piVar17 = piVar17 + 1;
      local_8ac = (void *)0x0;
      pvVar6 = (void *)0;
    } while (piVar17 != *(int **)(param_1 + 400));
  }
  local_8ac = pvVar6;
  local_840 = (undefined4 *)(param_1 + 0x188);
  if (*(void **)(param_1 + 0x18c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x18c));
  }
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_610,"HighDetail");
  local_c._0_1_ = 4;
  ppuStack_934 = (undefined4 **)0x489814;
  FUN_004224c0();
  ppuStack_934 = (undefined4 **)0x48981c;
  local_8b1 = FUN_0040e560();
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_bc);
  local_c = CONCAT31(local_c._1_3_,3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_610);
  local_8ec = *(int **)(param_1 + 0xd8);
  if (local_8ec != *(int **)(param_1 + 0xdc)) {
    do {
      ppuStack_934 = (undefined4 **)0x48986c;
      local_7e0 = operator_new(0x68,(nothrow_t *)&DAT_005b6164);
      local_c._0_1_ = 5;
      if (local_7e0 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_00475500();
      }
      local_c._0_1_ = 3;
      local_8b0 = iVar5;
      local_7e0 = (void *)iVar5;
      srand(*(uint *)(*local_8ec + 0xcc));
      local_8e8 = (undefined4 *)0x0;
      local_8c8 = (undefined4 *)0x0;
      FUN_0046fa10();
      iVar19 = *local_8ec;
      if ((SQRT((*(float *)(iVar19 + 0x94) - *(float *)(iVar19 + 0x88)) *
                (*(float *)(iVar19 + 0x9c) - *(float *)(iVar19 + 0x90))) < _DAT_0058ac30) &&
         (*(char *)(iVar19 + 0x87) == '\x01')) {
        *(undefined1 *)(iVar19 + 0x87) = 0;
      }
      if (*(char *)(*local_8ec + 0x87) == '\x01') {
        ppuStack_934 = (undefined4 **)0x489927;
        pvVar6 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
        local_c._0_1_ = 6;
        if (pvVar6 == (void *)0x0) {
          local_8e8 = (undefined4 *)0x0;
        }
        else {
          iVar19 = *local_8ec;
          ppuStack_934 = (undefined4 **)(iVar19 + 0x50);
          local_8e8 = (undefined4 *)FUN_00484d40(iVar19 + 4,iVar19 + 0x14,iVar19 + 0x44);
        }
        local_c = CONCAT31(local_c._1_3_,3);
        local_8e4 = local_8e8;
        FUN_0046f920();
        ppuStack_934 = (undefined4 **)0x0;
        uVar7 = FUN_00469f00(param_2,"t1_bottom",1,3,0,0);
        local_8e8[0x49] = uVar7;
        ppuStack_934 = (undefined4 **)0x4899c0;
        FUN_00475c40();
        ppuStack_934 = (undefined4 **)0x0;
        uVar7 = FUN_00469f00(param_2,&DAT_0058b110,0xffffffff,0xffffffff,0,0);
        local_8e8[0x48] = uVar7;
        local_8e8[0x14] = (float)local_8e8[0x14] * _DAT_00587e3c;
        local_8e8[0x15] = (float)local_8e8[0x15] * _DAT_00587e3c;
        local_8e8[0x16] = (float)local_8e8[0x16] * _DAT_00587e3c;
        *(undefined1 *)((int)local_8e8 + 0x86) = 1;
        iVar19 = *(int *)(iVar5 + 4);
        if ((iVar19 == 0) ||
           ((uint)(*(int *)(iVar5 + 0xc) - iVar19 >> 2) <= (uint)(*(int *)(iVar5 + 8) - iVar19 >> 2)
           )) {
          ppuStack_934 = *(undefined4 ***)(iVar5 + 8);
          ppuStack_710 = ppuStack_934;
          FUN_00473a00();
        }
        else {
          iVar19 = *(int *)(iVar5 + 8);
          ppuStack_934 = &local_8e4;
          FUN_004520c0(iVar19,1);
          *(int *)(iVar5 + 8) = iVar19 + 4;
        }
        ppuStack_934 = (undefined4 **)0x489a84;
        pvVar6 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
        local_c._0_1_ = 7;
        if (pvVar6 == (void *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8 = (undefined4 *)FUN_00484aa0();
        }
        local_c = CONCAT31(local_c._1_3_,3);
        *(undefined1 *)((int)puVar8 + 0x85) = 0;
        local_8e4 = puVar8;
        FUN_0046f6a0();
        FUN_004624b0();
        rand();
        FUN_0046f920();
        puStack_778 = (undefined4 *)0x0;
        ppuStack_934 = &puStack_778;
        uVar7 = FUN_00469f00(param_2,"t1_middle",1,0xb,puVar8 + 0x4a,0);
        puVar8[0x49] = uVar7;
        *(undefined1 *)(puVar8 + 0x34) = 0;
        ppuStack_934 = (undefined4 **)0x489baf;
        FUN_00475c40();
        FUN_00475780();
        *(undefined1 *)((int)puVar8 + 0x86) = 1;
        puVar8[0x3b] = local_8e8;
        iVar19 = *(int *)(iVar5 + 4);
        local_8c8 = puVar8;
        if ((iVar19 == 0) ||
           ((uint)(*(int *)(iVar5 + 0xc) - iVar19 >> 2) <= (uint)(*(int *)(iVar5 + 8) - iVar19 >> 2)
           )) {
          ppuStack_934 = *(undefined4 ***)(iVar5 + 8);
          ppuStack_728 = ppuStack_934;
          FUN_00473a00();
        }
        else {
          iVar19 = *(int *)(iVar5 + 8);
          ppuStack_934 = &local_8e4;
          FUN_004520c0(iVar19,1);
          *(int *)(iVar5 + 8) = iVar19 + 4;
        }
        uVar9 = rand();
        uVar9 = uVar9 & 0x80000001;
        bVar22 = uVar9 == 0;
        if ((int)uVar9 < 0) {
          bVar22 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar22) {
          FUN_0046f6a0();
          *(undefined1 *)((int)local_8e8 + 0x85) = 0;
          ppuStack_934 = (undefined4 **)0x489c6f;
          FUN_00475c40();
          FUN_0046f6a0();
          ppuStack_934 = (undefined4 **)0x489c8c;
          FUN_00475c40();
          ppuStack_934 = (undefined4 **)0x489c9b;
          pvVar6 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
          local_c._0_1_ = 8;
          if (pvVar6 == (void *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            puVar10 = (undefined4 *)FUN_00484aa0();
          }
          local_c = CONCAT31(local_c._1_3_,3);
          ppuStack_934 = (undefined4 **)0x0;
          local_8e4 = puVar10;
          FUN_0046f990();
          FUN_0046f920();
          FUN_00475b30();
          FUN_00484320();
          ppuStack_934 = (undefined4 **)0x0;
          *(undefined1 *)(puVar10 + 0x34) = 1;
          uVar7 = FUN_00469f00(param_2,"concrete",0xffffffff,0xffffffff,0,0);
          puVar10[0x49] = uVar7;
          puVar10[0x48] = uVar7;
          *(undefined1 *)((int)puVar10 + 0xba) = 0;
          *(undefined1 *)((int)puVar10 + 0xbb) = 0;
          *(undefined1 *)(puVar10 + 0x21) = 1;
          *(undefined1 *)((int)puVar10 + 0x85) = 0;
          ppuStack_934 = (undefined4 **)0x489d61;
          FUN_00475c40();
          puVar10[0x3b] = local_8e8;
          iVar19 = *(int *)(iVar5 + 4);
          if ((iVar19 == 0) ||
             ((uint)(*(int *)(iVar5 + 0xc) - iVar19 >> 2) <=
              (uint)(*(int *)(iVar5 + 8) - iVar19 >> 2))) {
            ppuStack_934 = *(undefined4 ***)(iVar5 + 8);
            ppuStack_720 = ppuStack_934;
            FUN_00473a00();
          }
          else {
            iVar19 = *(int *)(iVar5 + 8);
            ppuStack_934 = &local_8e4;
            FUN_004520c0(iVar19,1);
            *(int *)(iVar5 + 8) = iVar19 + 4;
          }
          uVar9 = 0;
          local_908 = 0;
          while ((puVar8[2] != 0 && (uVar9 < (uint)((int)(puVar8[3] - puVar8[2]) / 0xc)))) {
            uVar9 = uVar9 + 1;
            iVar19 = puVar8[2];
            ppuStack_934 = &puStack_84c;
            FUN_0041d580();
            fStack_848 = 0.0;
            fVar24 = SQRT((float)puStack_84c * (float)puStack_84c +
                          (float)puStack_844 * (float)puStack_844);
            if (_DAT_0058b0e4 <= fVar24) {
              uStack_730 = 0;
              fVar24 = _DAT_00583354 / fVar24;
              puStack_84c = (undefined4 *)((float)puStack_84c * fVar24);
              fStack_848 = _DAT_00582ad8 * fVar24;
              puStack_844 = (undefined4 *)(fVar24 * (float)puStack_844);
              fStack_72c = -(float)puStack_84c;
              puStack_734 = puStack_844;
              local_918 = (float *)FUN_004cf110();
              ppuStack_934 = apuStack_564;
              FUN_0041d5b0();
              ppuStack_934 = &puStack_734;
              uVar7 = FUN_0041d5b0(auStack_1b0);
              FUN_0041d550(auStack_198,iVar19 + local_908,uVar7);
              ppuStack_934 = &puStack_7c0;
              FUN_0041d550();
              if ((int)local_918 < 1) goto LAB_0048a263;
              do {
                ppuStack_934 = (undefined4 **)0x0;
                FUN_00483a40(0);
                ppuStack_934 = (undefined4 **)0x0;
                FUN_00483a40(0);
                ppuStack_934 = apuStack_180;
                uVar7 = FUN_0041d5b0();
                FUN_0041d550(auStack_168,&puStack_7c0,uVar7);
                FUN_00478780();
                ppuStack_934 = apuStack_150;
                FUN_0041d5b0();
                ppuStack_934 = &puStack_84c;
                uVar7 = FUN_0041d5b0(auStack_138);
                FUN_0041d550(auStack_120,&puStack_7c0,uVar7);
                ppuStack_934 = apuStack_108;
                FUN_0041d550();
                FUN_00478780();
                ppuStack_934 = apuStack_5dc;
                uVar7 = FUN_0041d5b0();
                FUN_0041d550(auStack_204,&puStack_7c0,uVar7);
                FUN_00478780();
                FUN_00478780();
                FUN_00484320();
                ppuStack_934 = apuStack_5c4;
                pfVar11 = (float *)FUN_0041d5b0();
                puStack_7c0 = (undefined4 *)((float)puStack_7c0 + *pfVar11);
                fStack_7bc = fStack_7bc + pfVar11[1];
                fStack_7b8 = fStack_7b8 + pfVar11[2];
                pfVar11 = (float *)((int)local_8d4 + 4);
                for (uVar20 = 0;
                    (local_8c0 != (void *)0x0 &&
                    (uVar20 < (uint)((local_8bc - (int)local_8c0) / 0xc))); uVar20 = uVar20 + 1) {
                  *pfVar11 = *pfVar11 - _DAT_0058b0dc;
                  pfVar11 = pfVar11 + 3;
                }
                ppuStack_934 = (undefined4 **)0x48a14c;
                pvVar6 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
                local_c._0_1_ = 9;
                if (pvVar6 == (void *)0x0) {
                  puVar10 = (undefined4 *)0x0;
                }
                else {
                  ppuStack_934 = (undefined4 **)(*local_8ec + 0x50);
                  puVar10 = (undefined4 *)FUN_00484d40(auStack_8d8,auStack_8c4,*local_8ec + 0x44);
                }
                ppuStack_934 = (undefined4 **)0x0;
                local_c = CONCAT31(local_c._1_3_,3);
                *(undefined1 *)(puVar10 + 0x34) = 1;
                local_8e4 = puVar10;
                uVar7 = FUN_00469f00(param_2,"concrete",0xffffffff,0xffffffff,0,0);
                puVar10[0x49] = uVar7;
                puVar10[0x3b] = local_8e8;
                ppuStack_934 = (undefined4 **)0x48a1db;
                FUN_00475c40();
                iVar19 = *(int *)(iVar5 + 4);
                if ((iVar19 == 0) ||
                   ((uint)(*(int *)(iVar5 + 0xc) - iVar19 >> 2) <=
                    (uint)(*(int *)(iVar5 + 8) - iVar19 >> 2))) {
                  ppuStack_934 = *(undefined4 ***)(iVar5 + 8);
                  ppuStack_760 = ppuStack_934;
                  FUN_00473a00();
                }
                else {
                  iVar19 = *(int *)(iVar5 + 8);
                  ppuStack_934 = &local_8e4;
                  FUN_004520c0(iVar19,1);
                  *(int *)(iVar5 + 8) = iVar19 + 4;
                }
                local_918 = (float *)((int)local_918 + -1);
              } while (local_918 != (float *)0x0);
              local_908 = local_908 + 0xc;
            }
            else {
LAB_0048a263:
              local_908 = local_908 + 0xc;
            }
          }
        }
        ppuStack_934 = (undefined4 **)0x48a286;
        pvVar6 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
        local_c._0_1_ = 10;
        if (pvVar6 == (void *)0x0) {
          puStack_8fc = (undefined4 *)0x0;
        }
        else {
          puStack_8fc = (undefined4 *)FUN_00484aa0();
        }
        local_c = CONCAT31(local_c._1_3_,3);
        local_8e4 = puStack_8fc;
        FUN_0046f920();
        *(undefined1 *)((int)puStack_8fc + 0x85) = 1;
        ppuStack_934 = (undefined4 **)0x0;
        uVar7 = FUN_00469f00(param_2,"t1_top",puStack_778,0xffffffff,puStack_8fc + 0x4a,0);
        puStack_8fc[0x49] = uVar7;
        *(undefined1 *)(puStack_8fc + 0x34) = 0;
        uVar7 = FUN_00469f00(param_2,&DAT_0058b110,0xffffffff,0xffffffff,0,0,0,0,0);
        puStack_8fc[0x48] = uVar7;
        *(undefined1 *)(puStack_8fc + 0x21) = 0;
        *(undefined1 *)((int)puStack_8fc + 0xba) = 0;
        *(undefined1 *)((int)puStack_8fc + 0xbb) = 0;
        ppuStack_934 = (undefined4 **)0x48a358;
        FUN_00475c40();
        FUN_00475850();
        puStack_8fc[0x3b] = local_8e8;
        iVar19 = *(int *)(iVar5 + 4);
        if ((iVar19 == 0) ||
           ((uint)(*(int *)(iVar5 + 0xc) - iVar19 >> 2) <= (uint)(*(int *)(iVar5 + 8) - iVar19 >> 2)
           )) {
          ppuStack_934 = *(undefined4 ***)(iVar5 + 8);
          ppuStack_73c = ppuStack_934;
          FUN_00473a00();
        }
        else {
          iVar19 = *(int *)(iVar5 + 8);
          ppuStack_934 = &local_8e4;
          FUN_004520c0(iVar19,1);
          *(int *)(iVar5 + 8) = iVar19 + 4;
        }
        iVar5 = rand();
        if ((undefined4 **)(iVar5 % 3) == (undefined4 **)0x0) {
          ppuStack_934 = (undefined4 **)(iVar5 % 3);
          uVar7 = FUN_00469f00(param_2,"antenna",1,3,0,0);
          iVar5 = rand();
          fVar24 = ((float)(iVar5 % 0xff) * _DAT_0058a930 + (float)_DAT_00582af0) *
                   (float)_DAT_00587c38;
          puStack_83c = (undefined4 *)(_DAT_0058abb4 * fVar24);
          fVar24 = fVar24 * _DAT_0058ac30;
          iVar5 = rand();
          fStack_870 = 0.0;
          fStack_86c = 0.0;
          fStack_868 = 0.0;
          iVar19 = 0;
          ppuVar16 = (undefined4 **)((float)(iVar5 % 0xff) * _DAT_0058ac28);
          for (uVar9 = 0;
              (puStack_8fc[6] != 0 && (uVar9 < (uint)((int)(puStack_8fc[7] - puStack_8fc[6]) / 0xc))
              ); uVar9 = uVar9 + 1) {
            fStack_870 = fStack_870 + *(float *)(puStack_8fc[6] + iVar19);
            iVar5 = puStack_8fc[6] + iVar19;
            iVar19 = iVar19 + 0xc;
            fStack_86c = fStack_86c + *(float *)(iVar5 + 4);
            fStack_868 = fStack_868 + *(float *)(iVar5 + 8);
          }
          if (puStack_8fc[6] == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = (int)(puStack_8fc[7] - puStack_8fc[6]) / 0xc;
          }
          fVar2 = (float)iVar5;
          if (iVar5 < 0) {
            fVar2 = fVar2 + _DAT_00582b04;
          }
          fVar2 = _DAT_00583354 / fVar2;
          fStack_870 = fStack_870 * fVar2;
          fStack_86c = fStack_86c * fVar2;
          fStack_868 = fStack_868 * fVar2;
          ppuStack_934 = (undefined4 **)0x48a564;
          puVar8 = operator_new(0x54,(nothrow_t *)&DAT_005b6164);
          local_c._0_1_ = 0xb;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            ppuStack_934 = ppuVar16;
            FUN_0046a770(uVar7,&fStack_870,puStack_83c,fVar24);
            *puVar8 = &PTR_LAB_0058ade0;
            puVar8[0x10] = 0;
            puVar8[0x11] = 0;
            puVar8[0x12] = 0;
            puVar8[0x13] = 0;
            puVar8[0x14] = 0;
            puVar8[0xb] = 0;
            puVar8[0xf] = 0;
            puVar8[0xc] = 0x3f800000;
            puVar8[0xd] = 0;
            puVar8[0xe] = 0;
          }
          local_c = CONCAT31(local_c._1_3_,3);
          iVar5 = rand();
          puVar8[0xc] = (float)(iVar5 % 0xff) * _DAT_0058aa68 + (float)_DAT_00587c38;
          iVar5 = rand();
          puVar8[0xd] = (float)(iVar5 % 0xff) * _DAT_0058aa68 + (float)_DAT_00587c38;
          iVar5 = rand();
          ppuStack_934 = apuStack_33c;
          puVar8[3] = puStack_8fc;
          uStack_6a0 = 0;
          uStack_698 = 0;
          puVar8[0xe] = (float)(iVar5 % 0xff) * _DAT_0058aa68 + (float)_DAT_00587c38;
          fStack_69c = fVar24 * _DAT_0058b0c8;
          puVar10 = (undefined4 *)FUN_0041d550();
          iVar5 = local_8dc;
          if (puVar10 != puVar8 + 0x10) {
            puVar8[0x10] = *puVar10;
            puVar8[0x11] = puVar10[1];
            puVar8[0x12] = puVar10[2];
          }
          iVar19 = *(int *)(local_8dc + 0x16c);
          puStack_83c = puVar8;
          if ((iVar19 == 0) ||
             ((uint)(*(int *)(local_8dc + 0x174) - iVar19 >> 2) <=
              (uint)(*(int *)(local_8dc + 0x170) - iVar19 >> 2))) {
            ppuStack_934 = *(undefined4 ***)(local_8dc + 0x170);
            ppuStack_724 = ppuStack_934;
            FUN_00473a00();
          }
          else {
            iVar19 = *(int *)(local_8dc + 0x170);
            ppuStack_934 = &puStack_83c;
            FUN_004520c0(iVar19,1);
            *(int *)(iVar5 + 0x170) = iVar19 + 4;
          }
        }
LAB_0048b726:
        if (local_8e8 != (undefined4 *)0x0) {
          if (local_8e8[2] == 0) {
            local_904 = 0;
          }
          else {
            local_904 = (int)(local_8e8[3] - local_8e8[2]) / 0xc;
          }
          if (*(char *)((int)local_8e8 + 0xb1) != '\0') {
            local_904 = local_904 + -3;
          }
          local_910 = (undefined4 *)std::numeric_limits<float>::max();
          fVar24 = std::numeric_limits<float>::max();
          local_918 = (float *)-fVar24;
          uVar9 = 0;
          fStack_7e4 = 0.0;
          iVar5 = 0;
          while ((local_8e8[2] != 0 && (uVar9 < (uint)((int)(local_8e8[3] - local_8e8[2]) / 0xc))))
          {
            fVar23 = (float10)FUN_00463b00();
            if (fVar23 < (float10)(float)local_910) {
              local_910 = (undefined4 *)(float)fVar23;
            }
            if ((float10)(float)local_918 < fVar23) {
              local_918 = (float *)(float)fVar23;
            }
            fVar23 = (float10)*(float *)(local_8e8[2] + 4 + iVar5) - fVar23;
            if (fVar23 <= (float10)fStack_7e4) {
              uVar9 = uVar9 + 1;
              iVar5 = iVar5 + 0xc;
            }
            else {
              uVar9 = uVar9 + 1;
              fStack_7e4 = (float)fVar23;
              iVar5 = iVar5 + 0xc;
            }
          }
          if ((((float)local_918 - (float)local_910 < _DAT_0058a940) && (fStack_7e4 < _DAT_0058ab44)
              ) && (iVar5 = 0, 0 < local_904)) {
            local_910 = (undefined4 *)0x0;
            do {
              iVar5 = iVar5 + 1;
              iVar19 = local_8e8[2];
              ppuStack_934 = &puStack_8a8;
              FUN_0041d580();
              FUN_0041d510();
              puStack_818 = *(undefined4 **)(iVar19 + (int)local_910);
              fStack_814 = *(float *)(iVar19 + 4 + (int)local_910);
              fStack_810 = *(float *)(iVar19 + 8 + (int)local_910);
              if ((_DAT_0058a938 <
                   SQRT(fStack_8a4 * fStack_8a4 +
                        fStack_8a0 * fStack_8a0 + (float)puStack_8a8 * (float)puStack_8a8)) &&
                 (iVar19 = rand(), iVar19 % 100 < 0x32)) {
                puStack_890 = (undefined4 *)-fStack_8a0;
                uStack_88c = 0;
                puStack_888 = puStack_8a8;
                FUN_0041d4b0();
                local_918 = (float *)FUN_004cf110();
                if ((float10)_DAT_00587c38 < (float10)(int)local_918 - extraout_ST0) {
                  local_918 = (float *)((int)local_918 + 1);
                }
                fVar24 = _DAT_00583354 / (float)(int)local_918;
                puStack_8a8 = (undefined4 *)((float)puStack_8a8 * fVar24);
                fStack_8a4 = fStack_8a4 * fVar24;
                fStack_8a0 = fVar24 * fStack_8a0;
                if (0 < (int)local_918) {
                  do {
                    puStack_878 = (undefined1 *)&ppuStack_934;
                    ppuStack_934 = (undefined4 **)0x0;
                    FUN_00483a40(0);
                    puStack_878 = (undefined1 *)&ppuStack_934;
                    ppuStack_934 = (undefined4 **)0x0;
                    FUN_00483a40(0);
                    rand();
                    ppuStack_934 = apuStack_504;
                    uVar7 = FUN_0041d5b0();
                    FUN_0041d550(auStack_2dc,&puStack_818,uVar7);
                    FUN_00478780();
                    ppuStack_934 = apuStack_4ec;
                    FUN_0041d5b0();
                    ppuStack_934 = &puStack_818;
                    FUN_0041d550(auStack_144);
                    ppuStack_934 = apuStack_4d4;
                    FUN_0041d550();
                    FUN_00478780();
                    ppuStack_934 = apuStack_2c4;
                    FUN_0041d550();
                    FUN_00478780();
                    FUN_00478780();
                    FUN_00484320();
                    pvVar6 = local_8c0;
                    pfVar11 = (float *)((int)local_8c0 + 4);
                    for (uVar9 = 0;
                        (local_8c0 != (void *)0x0 &&
                        (uVar9 < (uint)((local_8bc - (int)local_8c0) / 0xc))); uVar9 = uVar9 + 1) {
                      *pfVar11 = *pfVar11 + _DAT_00588d88;
                      pfVar11 = pfVar11 + 3;
                    }
                    ppuStack_934 = (undefined4 **)0x48bb84;
                    puStack_878 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
                    local_c._0_1_ = 0x14;
                    if (puStack_878 == (void *)0x0) {
                      iVar19 = 0;
                    }
                    else {
                      ppuStack_934 = (undefined4 **)(*local_8ec + 0x50);
                      iVar19 = FUN_00484d40(auStack_8d8,auStack_8c4,*local_8ec + 0x44);
                    }
                    local_c = CONCAT31(local_c._1_3_,3);
                    puStack_77c = (undefined4 *)0x0;
                    ppuStack_934 = &puStack_77c;
                    iStack_7e8 = iVar19;
                    uVar7 = FUN_00469f00(param_2,&DAT_0058b084,1,9,iVar19 + 0x128,0);
                    *(undefined4 *)(iVar19 + 0x124) = uVar7;
                    *(undefined1 *)(iVar19 + 0xb8) = 1;
                    _snprintf(acStack_a0,0x80,"city\\shop%d",puStack_77c);
                    std::
                    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              (abStack_62c,acStack_a0);
                    iVar12 = FUN_004295a0();
                    std::
                    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              (abStack_62c);
                    if ((iVar12 != 0) && (_DAT_00582ad8 < *(float *)(iVar12 + 0xa8))) {
                      *(undefined1 *)(iVar19 + 0x100) = 1;
                      if ((undefined4 *)(iVar19 + 0x110) != (undefined4 *)(iVar12 + 0x9c)) {
                        *(undefined4 *)(iVar19 + 0x110) = *(undefined4 *)(iVar12 + 0x9c);
                        *(undefined4 *)(iVar19 + 0x114) = *(undefined4 *)(iVar12 + 0xa0);
                        *(undefined4 *)(iVar19 + 0x118) = *(undefined4 *)(iVar12 + 0xa4);
                        *(undefined4 *)(iVar19 + 0x11c) = *(undefined4 *)(iVar12 + 0xa8);
                      }
                      ppuStack_934 = apuStack_4bc;
                      iVar12 = (int)local_8d4 + 0xc;
                      FUN_0041d5b0();
                      ppuStack_934 = (undefined4 **)0x40000000;
                      uVar7 = FUN_0041d550(auStack_1bc,local_8d4,iVar12);
                      ppuStack_934 = (undefined4 **)FUN_0043fa40(auStack_4a4,uVar7);
                      uVar7 = FUN_0041d550(auStack_2ac,pvVar6,(int)pvVar6 + 0xc,0x40000000);
                      uVar7 = FUN_0043fa40(auStack_48c,uVar7);
                      ppuStack_934 = (undefined4 **)FUN_0041d550(auStack_fc,uVar7);
                      FUN_0043fa40(auStack_474);
                      ppuStack_934 = apuStack_294;
                      puVar8 = (undefined4 *)FUN_0041d550();
                      if (puVar8 != (undefined4 *)(iVar19 + 0x104)) {
                        *(undefined4 *)(iVar19 + 0x104) = *puVar8;
                        *(undefined4 *)(iVar19 + 0x108) = puVar8[1];
                        *(undefined4 *)(iVar19 + 0x10c) = puVar8[2];
                      }
                    }
                    *(undefined1 *)(iVar19 + 0xba) = 0;
                    ppuStack_934 = (undefined4 **)0x48bdb0;
                    FUN_00475c40();
                    ppuStack_934 = (undefined4 **)0x0;
                    uVar7 = FUN_00469f00(param_2,"brick",0xffffffff,0xffffffff,0,0);
                    *(undefined4 *)(iVar19 + 0x134) = uVar7;
                    FUN_00475850();
                    *(bool *)(iVar19 + 0xb1) = *(int *)(iVar19 + 0x134) != 0;
                    *(undefined4 **)(iVar19 + 0xec) = local_8e8;
                    FUN_00478810();
                    ppuStack_934 = (undefined4 **)0x48be17;
                    puStack_878 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
                    iVar19 = iStack_7e8;
                    local_c._0_1_ = 0x15;
                    if (puStack_878 == (void *)0x0) {
                      iVar12 = 0;
                    }
                    else {
                      iVar12 = FUN_00484aa0();
                    }
                    *(undefined1 *)(iVar12 + 0xba) = 0;
                    *(undefined1 *)(iVar12 + 0xb8) = 1;
                    *(undefined1 *)(iVar12 + 0xb1) = 0;
                    *(undefined4 **)(iVar12 + 0xec) = local_8e8;
                    *(undefined1 *)(iVar12 + 0xbb) = 0;
                    *(undefined4 *)(iVar12 + 0x7c) = 0;
                    local_c = CONCAT31(local_c._1_3_,3);
                    *(undefined4 *)(iVar12 + 0x80) = 0x3dcccccd;
                    puStack_878 = (undefined1 *)iVar12;
                    iVar13 = rand();
                    piVar17 = (int *)(iVar12 + 8);
                    if (iVar13 % 100 < 0x32) {
                      pfVar11 = (float *)*piVar17;
                      ppuStack_934 = apuStack_45c;
                      FUN_0041d5b0();
                      ppuStack_934 = &puStack_890;
                      FUN_0041d5b0(auStack_1a4);
                      ppuStack_934 = apuStack_444;
                      pfVar14 = (float *)FUN_0041d580();
                      *pfVar11 = *pfVar11 + *pfVar14;
                      pfVar11[1] = pfVar14[1] + pfVar11[1];
                      pfVar11[2] = pfVar14[2] + pfVar11[2];
                      iVar19 = *piVar17;
                      FUN_0041d5b0(auStack_27c,auStack_800,0x41a00000);
                      ppuStack_934 = &puStack_890;
                      FUN_0041d5b0(auStack_42c);
                      ppuStack_934 = apuStack_12c;
                      pfVar11 = (float *)FUN_0041d550();
                      *(float *)(iVar19 + 0xc) = *(float *)(iVar19 + 0xc) + *pfVar11;
                      *(float *)(iVar19 + 0x10) = pfVar11[1] + *(float *)(iVar19 + 0x10);
                      *(float *)(iVar19 + 0x14) = pfVar11[2] + *(float *)(iVar19 + 0x14);
                      pfVar11 = *(float **)(iVar12 + 0x18);
                      FUN_0041d5b0(auStack_414,auStack_800,0x41a00000);
                      ppuStack_934 = &puStack_890;
                      FUN_0041d5b0(auStack_264);
                      ppuStack_934 = apuStack_3fc;
                      pfVar14 = (float *)FUN_0041d580();
                      *pfVar11 = *pfVar11 + *pfVar14;
                      pfVar11[1] = pfVar14[1] + pfVar11[1];
                      pfVar11[2] = pfVar14[2] + pfVar11[2];
                      iVar19 = *(int *)(iVar12 + 0x18);
                      FUN_0041d5b0(auStack_18c,auStack_800,0x41a00000);
                      ppuStack_934 = &puStack_890;
                      FUN_0041d5b0(auStack_3e4);
                      ppuStack_934 = apuStack_24c;
                      pfVar11 = (float *)FUN_0041d550();
                      *(float *)(iVar19 + 0xc) = *(float *)(iVar19 + 0xc) + *pfVar11;
                      *(float *)(iVar19 + 0x10) = pfVar11[1] + *(float *)(iVar19 + 0x10);
                      *(float *)(iVar19 + 0x14) = pfVar11[2] + *(float *)(iVar19 + 0x14);
                      *(undefined1 *)(iVar12 + 0x84) = 1;
                      *(undefined1 *)(iVar12 + 0x85) = 1;
                      *(undefined4 *)(iVar12 + 0x124) = *(undefined4 *)(iStack_7e8 + 0x124);
                      *(undefined4 *)(iVar12 + 0x128) = *(undefined4 *)(iStack_7e8 + 0x128);
                      *(undefined4 *)(iVar12 + 0x130) = *(undefined4 *)(iStack_7e8 + 0x130);
                      FUN_00475850();
                      ppuStack_934 = (undefined4 **)0x0;
                      uVar7 = FUN_00469f00(param_2,&DAT_0058b110,0xffffffff,0xffffffff,0,0);
                      *(undefined4 *)(iVar12 + 0x120) = uVar7;
                    }
                    else {
                      *(undefined1 *)(iVar19 + 0x85) = 1;
                      iVar19 = *piVar17;
                      if ((undefined4 *)(iVar19 + 0xc) != (undefined4 *)(iVar19 + 0x18)) {
                        *(undefined4 *)(iVar19 + 0x18) = *(undefined4 *)(iVar19 + 0xc);
                        *(undefined4 *)(iVar19 + 0x1c) = *(undefined4 *)(iVar19 + 0x10);
                        *(undefined4 *)(iVar19 + 0x20) = *(undefined4 *)(iVar19 + 0x14);
                      }
                      puVar8 = (undefined4 *)*piVar17;
                      if (puVar8 != puVar8 + 9) {
                        puVar8[9] = *puVar8;
                        puVar8[10] = puVar8[1];
                        puVar8[0xb] = puVar8[2];
                      }
                      iVar19 = *(int *)(iVar12 + 0x18);
                      if ((undefined4 *)(iVar19 + 0xc) != (undefined4 *)(iVar19 + 0x18)) {
                        *(undefined4 *)(iVar19 + 0x18) = *(undefined4 *)(iVar19 + 0xc);
                        *(undefined4 *)(iVar19 + 0x1c) = *(undefined4 *)(iVar19 + 0x10);
                        *(undefined4 *)(iVar19 + 0x20) = *(undefined4 *)(iVar19 + 0x14);
                      }
                      puVar8 = *(undefined4 **)(iVar12 + 0x18);
                      if (puVar8 != puVar8 + 9) {
                        puVar8[9] = *puVar8;
                        puVar8[10] = puVar8[1];
                        puVar8[0xb] = puVar8[2];
                      }
                      iVar19 = *piVar17;
                      ppuStack_934 = apuStack_3cc;
                      FUN_0041d5b0();
                      ppuStack_934 = apuStack_e4;
                      ppuStack_934 = (undefined4 **)FUN_0041d410();
                      FUN_0041d5b0(auStack_3b4);
                      ppuStack_934 = apuStack_234;
                      pfVar11 = (float *)FUN_0041d580();
                      *(float *)(iVar19 + 0x18) = *(float *)(iVar19 + 0x18) + *pfVar11;
                      *(float *)(iVar19 + 0x1c) = pfVar11[1] + *(float *)(iVar19 + 0x1c);
                      *(float *)(iVar19 + 0x20) = pfVar11[2] + *(float *)(iVar19 + 0x20);
                      iVar19 = *piVar17;
                      FUN_0041d5b0(auStack_39c,auStack_800,0x41a00000);
                      ppuStack_934 = apuStack_174;
                      ppuStack_934 = (undefined4 **)FUN_0041d410();
                      FUN_0041d5b0(auStack_384);
                      ppuStack_934 = apuStack_21c;
                      pfVar11 = (float *)FUN_0041d550();
                      *(float *)(iVar19 + 0x24) = *(float *)(iVar19 + 0x24) + *pfVar11;
                      *(float *)(iVar19 + 0x28) = pfVar11[1] + *(float *)(iVar19 + 0x28);
                      *(float *)(iVar19 + 0x2c) = pfVar11[2] + *(float *)(iVar19 + 0x2c);
                      iVar19 = *(int *)(iVar12 + 0x18);
                      FUN_0041d5b0(auStack_36c,auStack_800,0x41a00000);
                      ppuStack_934 = apuStack_114;
                      ppuStack_934 = (undefined4 **)FUN_0041d410();
                      FUN_0041d5b0(auStack_354);
                      ppuStack_934 = apuStack_5e8;
                      pfVar11 = (float *)FUN_0041d580();
                      *(float *)(iVar19 + 0x18) = *(float *)(iVar19 + 0x18) + *pfVar11;
                      *(float *)(iVar19 + 0x1c) = pfVar11[1] + *(float *)(iVar19 + 0x1c);
                      *(float *)(iVar19 + 0x20) = pfVar11[2] + *(float *)(iVar19 + 0x20);
                      iVar19 = *(int *)(iVar12 + 0x18);
                      FUN_0041d5b0(auStack_5d0,auStack_800,0x41a00000);
                      ppuStack_934 = apuStack_5b8;
                      ppuStack_934 = (undefined4 **)FUN_0041d410();
                      FUN_0041d5b0(auStack_5a0);
                      ppuStack_934 = apuStack_588;
                      pfVar11 = (float *)FUN_0041d550();
                      *(float *)(iVar19 + 0x24) = *(float *)(iVar19 + 0x24) + *pfVar11;
                      *(float *)(iVar19 + 0x28) = pfVar11[1] + *(float *)(iVar19 + 0x28);
                      *(float *)(iVar19 + 0x2c) = pfVar11[2] + *(float *)(iVar19 + 0x2c);
                      pfVar11 = (float *)*piVar17;
                      FUN_0041d5b0(auStack_570,auStack_800,0x41a00000);
                      ppuStack_934 = &puStack_890;
                      FUN_0041d5b0(auStack_558);
                      ppuStack_934 = apuStack_540;
                      pfVar14 = (float *)FUN_0041d550();
                      *pfVar11 = *pfVar11 + *pfVar14;
                      pfVar11[1] = pfVar14[1] + pfVar11[1];
                      pfVar11[2] = pfVar14[2] + pfVar11[2];
                      iVar19 = *piVar17;
                      FUN_0041d5b0(auStack_528,auStack_800,0x41a00000);
                      ppuStack_934 = &puStack_890;
                      FUN_0041d5b0(auStack_510);
                      ppuStack_934 = apuStack_4f8;
                      pfVar11 = (float *)FUN_0041d580();
                      *(float *)(iVar19 + 0xc) = *(float *)(iVar19 + 0xc) + *pfVar11;
                      *(float *)(iVar19 + 0x10) = pfVar11[1] + *(float *)(iVar19 + 0x10);
                      *(float *)(iVar19 + 0x14) = pfVar11[2] + *(float *)(iVar19 + 0x14);
                      pfVar11 = *(float **)(iVar12 + 0x18);
                      FUN_0041d5b0(auStack_4e0,auStack_800,0x41a00000);
                      ppuStack_934 = &puStack_890;
                      FUN_0041d5b0(auStack_4c8);
                      ppuStack_934 = apuStack_4b0;
                      pfVar14 = (float *)FUN_0041d550();
                      *pfVar11 = *pfVar11 + *pfVar14;
                      pfVar11[1] = pfVar14[1] + pfVar11[1];
                      pfVar11[2] = pfVar14[2] + pfVar11[2];
                      iVar19 = *(int *)(iVar12 + 0x18);
                      FUN_0041d5b0(auStack_498,auStack_800,0x41a00000);
                      ppuStack_934 = &puStack_890;
                      FUN_0041d5b0(auStack_480);
                      ppuStack_934 = apuStack_468;
                      pfVar11 = (float *)FUN_0041d580();
                      *(float *)(iVar19 + 0xc) = *(float *)(iVar19 + 0xc) + *pfVar11;
                      *(float *)(iVar19 + 0x10) = pfVar11[1] + *(float *)(iVar19 + 0x10);
                      *(float *)(iVar19 + 0x14) = pfVar11[2] + *(float *)(iVar19 + 0x14);
                      *(float *)(*piVar17 + 4) = *(float *)(*piVar17 + 4) - _DAT_00588d98;
                      *(float *)(*piVar17 + 0x10) = *(float *)(*piVar17 + 0x10) - _DAT_00588d98;
                      *(float *)(*(int *)(iVar12 + 0x18) + 4) =
                           *(float *)(*(int *)(iVar12 + 0x18) + 4) - _DAT_00588bfc;
                      *(float *)(*(int *)(iVar12 + 0x18) + 0x10) =
                           *(float *)(*(int *)(iVar12 + 0x18) + 0x10) - _DAT_00588bfc;
                      iVar19 = *(int *)(iVar12 + 0x18);
                      if ((undefined4 *)(iVar19 + 0x18) != (undefined4 *)(iVar12 + 0x44)) {
                        *(undefined4 *)(iVar12 + 0x44) = *(undefined4 *)(iVar19 + 0x18);
                        *(undefined4 *)(iVar12 + 0x48) = *(undefined4 *)(iVar19 + 0x1c);
                        *(undefined4 *)(iVar12 + 0x4c) = *(undefined4 *)(iVar19 + 0x20);
                      }
                      ppuStack_934 = apuStack_450;
                      puVar8 = (undefined4 *)FUN_0041d580();
                      if (puVar8 != (undefined4 *)(iVar12 + 0x50)) {
                        *(undefined4 *)(iVar12 + 0x50) = *puVar8;
                        *(undefined4 *)(iVar12 + 0x54) = puVar8[1];
                        *(undefined4 *)(iVar12 + 0x58) = puVar8[2];
                      }
                      ppuStack_934 = (undefined4 **)0x0;
                      *(undefined1 *)(iVar12 + 0x84) = 0;
                      *(undefined1 *)(iVar12 + 0x85) = 1;
                      *(undefined1 *)(iVar12 + 0xb0) = 1;
                      uVar7 = FUN_00469f00(param_2,"awning",1,4,0,0);
                      *(undefined4 *)(iVar12 + 0x120) = uVar7;
                      *(undefined4 *)(iVar12 + 0x124) = uVar7;
                      ppuStack_934 = (undefined4 **)0x48c549;
                      FUN_00475c40();
                    }
                    iVar19 = *(int *)(iVar12 + 8);
                    iVar13 = 0;
                    for (uVar9 = 0;
                        (iVar19 != 0 && (uVar9 < (uint)((*(int *)(iVar12 + 0xc) - iVar19) / 0xc)));
                        uVar9 = uVar9 + 1) {
                      pfVar11 = (float *)(*piVar17 + 4 + iVar13);
                      pfVar14 = (float *)(*piVar17 + 4 + iVar13);
                      iVar13 = iVar13 + 0xc;
                      *pfVar14 = *pfVar11 - _DAT_00588bfc;
                    }
                    FUN_00478810();
                    puStack_818 = (undefined4 *)((float)puStack_8a8 + (float)puStack_818);
                    local_918 = (float *)((int)local_918 + -1);
                    fStack_814 = fStack_8a4 + fStack_814;
                    fStack_810 = fStack_8a0 + fStack_810;
                  } while (local_918 != (float *)0x0);
                }
              }
              local_910 = (undefined4 *)((int)local_910 + 0xc);
            } while (iVar5 < local_904);
          }
        }
        if (local_8c8 != (undefined4 *)0x0) {
          if (local_8c8[2] == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = (int)(local_8c8[3] - local_8c8[2]) / 0xc;
          }
          if (*(char *)((int)local_8c8 + 0xb1) != '\0') {
            iVar5 = iVar5 + -3;
          }
          iVar19 = 0;
          if (0 < iVar5) {
            iVar12 = local_8c8[2];
            iVar13 = 0;
            do {
              iVar19 = iVar19 + 1;
              ppuStack_934 = &puStack_884;
              FUN_0041d580();
              FUN_0041d510();
              puStack_790 = *(undefined4 **)(iVar12 + iVar13);
              uStack_788 = *(undefined4 *)(iVar12 + 8 + iVar13);
              fStack_78c = *(float *)(iVar12 + 4 + iVar13) + _DAT_00588808;
              if ((_DAT_0058a938 <
                   SQRT(fStack_880 * fStack_880 +
                        fStack_87c * fStack_87c + (float)puStack_884 * (float)puStack_884)) &&
                 (iVar15 = rand(), iVar15 % 100 < 0x1e)) {
                fStack_75c = -fStack_87c;
                uStack_758 = 0;
                puStack_754 = puStack_884;
                FUN_0041d4b0();
                FUN_0041d4b0();
                puStack_884 = (undefined4 *)((float)puStack_884 * _DAT_0058ac2c);
                fStack_880 = fStack_880 * _DAT_0058ac2c;
                fStack_87c = fStack_87c * _DAT_0058ac2c;
                ppuStack_934 = (undefined4 **)0x0;
                FUN_00483a40(0);
                ppuStack_934 = (undefined4 **)0x0;
                FUN_00483a40(0);
                fStack_838 = 1600.0;
                if (*(float *)(local_8c8[6] + 4) - _DAT_0058a79c < fStack_78c + _DAT_0058b064) {
                  fStack_838 = (*(float *)(local_8c8[6] + 4) - fStack_78c) - _DAT_0058a79c;
                }
                FUN_00478780();
                ppuStack_934 = apuStack_420;
                uVar7 = FUN_0041d5b0();
                FUN_0041d550(auStack_408,&puStack_790,uVar7);
                FUN_00478780();
                ppuStack_934 = apuStack_3f0;
                FUN_0041d5b0();
                ppuStack_934 = &puStack_790;
                FUN_0041d550(auStack_3d8);
                ppuStack_934 = apuStack_3c0;
                FUN_0041d550();
                FUN_00478780();
                ppuStack_934 = apuStack_3a8;
                FUN_0041d550();
                FUN_00478780();
                FUN_00484320();
                pfVar11 = (float *)((int)local_8c0 + 4);
                for (uVar9 = 0;
                    (local_8c0 != (void *)0x0 &&
                    (uVar9 < (uint)((local_8bc - (int)local_8c0) / 0xc))); uVar9 = uVar9 + 1) {
                  *pfVar11 = fStack_838 + *pfVar11;
                  pfVar11 = pfVar11 + 3;
                }
                ppuStack_934 = (undefined4 **)0x48c9a3;
                pvStack_770 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
                local_c._0_1_ = 0x16;
                if (pvStack_770 == (void *)0x0) {
                  iVar15 = 0;
                }
                else {
                  ppuStack_934 = (undefined4 **)(*local_8ec + 0x50);
                  iVar15 = FUN_00484d40(auStack_8d8,auStack_8c4,*local_8ec + 0x44);
                }
                ppuStack_934 = (undefined4 **)0x0;
                local_c = CONCAT31(local_c._1_3_,3);
                pvStack_770 = (void *)iVar15;
                uVar7 = FUN_00469f00(param_2,"vadvert",1,3,iVar15 + 0x128,0);
                *(undefined4 *)(iVar15 + 0x124) = uVar7;
                *(undefined1 *)(iVar15 + 0x84) = 1;
                *(undefined1 *)(iVar15 + 0x85) = 1;
                *(undefined1 *)(iVar15 + 0xba) = 0;
                *(undefined1 *)(iVar15 + 0xbb) = 0;
                ppuStack_934 = (undefined4 **)0x48ca59;
                FUN_00475c40();
                FUN_00475850();
                ppuStack_934 = (undefined4 **)0x0;
                *(undefined1 *)(iVar15 + 0xb1) = 0;
                uVar7 = FUN_00469f00(param_2,&DAT_0058b110,0xffffffff,0xffffffff,0,0);
                *(undefined4 *)(iVar15 + 0x120) = uVar7;
                *(undefined4 **)(iVar15 + 0xec) = local_8e8;
                FUN_00478810();
              }
              iVar13 = iVar13 + 0xc;
            } while (iVar19 < iVar5);
          }
        }
        if ((puStack_8fc != (undefined4 *)0x0) && (local_8e8 != (undefined4 *)0x0)) {
          uVar9 = rand();
          uVar9 = uVar9 & 0x80000001;
          bVar22 = uVar9 == 0;
          if ((int)uVar9 < 0) {
            bVar22 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar22) {
            puStack_8fc = local_8e8;
          }
          if (puStack_8fc[6] == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = (int)(puStack_8fc[7] - puStack_8fc[6]) / 0xc;
          }
          if (*(char *)((int)puStack_8fc + 0xb1) != '\0') {
            iVar5 = iVar5 + -3;
          }
          iVar19 = 0;
          if (0 < iVar5) {
            iVar12 = 0;
            do {
              iVar19 = iVar19 + 1;
              iVar13 = puStack_8fc[6];
              ppuStack_934 = &puStack_89c;
              FUN_0041d580();
              FUN_0041d510();
              puStack_80c = *(undefined4 **)(iVar13 + iVar12);
              fStack_808 = *(float *)(iVar13 + 4 + iVar12);
              fStack_804 = *(float *)(iVar13 + 8 + iVar12);
              if ((_DAT_00588d50 <
                   SQRT(fStack_898 * fStack_898 +
                        fStack_894 * fStack_894 + (float)puStack_89c * (float)puStack_89c)) &&
                 (iVar13 = rand(), iVar13 % 100 < 0x14)) {
                fStack_750 = -fStack_894;
                uStack_74c = 0;
                puStack_748 = puStack_89c;
                FUN_0041d4b0();
                iVar13 = rand();
                fVar24 = (float)(iVar13 % 0xff) * _DAT_0058b058 + _DAT_0058b0e4;
                rand();
                FUN_0041d4b0();
                ppuStack_934 = apuStack_378;
                pfVar11 = (float *)FUN_0041d5b0();
                puStack_80c = (undefined4 *)((float)puStack_80c + *pfVar11);
                fStack_808 = fStack_808 + pfVar11[1];
                fStack_804 = fStack_804 + pfVar11[2];
                puStack_89c = (undefined4 *)((float)puStack_89c * fVar24);
                fStack_898 = fStack_898 * fVar24;
                fStack_894 = fStack_894 * fVar24;
                ppuStack_934 = (undefined4 **)0x0;
                FUN_00483a40(0);
                ppuStack_934 = (undefined4 **)0x0;
                FUN_00483a40(0);
                fVar2 = (float)_DAT_0058b050;
                FUN_00478780();
                ppuStack_934 = apuStack_360;
                FUN_0041d550();
                FUN_00478780();
                ppuStack_934 = apuStack_348;
                FUN_0041d5b0();
                ppuStack_934 = &puStack_80c;
                FUN_0041d550(auStack_330);
                ppuStack_934 = apuStack_318;
                FUN_0041d580();
                FUN_00478780();
                ppuStack_934 = apuStack_300;
                uVar7 = FUN_0041d5b0();
                FUN_0041d580(auStack_2e8,&puStack_80c,uVar7);
                FUN_00478780();
                FUN_00484320();
                pfVar11 = (float *)((int)local_8c0 + 4);
                for (uVar9 = 0;
                    (local_8c0 != (void *)0x0 &&
                    (uVar9 < (uint)((local_8bc - (int)local_8c0) / 0xc))); uVar9 = uVar9 + 1) {
                  *pfVar11 = fVar24 * fVar2 + *pfVar11;
                  pfVar11 = pfVar11 + 3;
                }
                ppuStack_934 = (undefined4 **)0x48cea7;
                pvStack_774 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
                local_c._0_1_ = 0x17;
                if (pvStack_774 == (void *)0x0) {
                  iVar13 = 0;
                }
                else {
                  ppuStack_934 = (undefined4 **)(*local_8ec + 0x50);
                  iVar13 = FUN_00484d40(auStack_8d8,auStack_8c4,*local_8ec + 0x44);
                }
                ppuStack_934 = (undefined4 **)0x0;
                local_c = CONCAT31(local_c._1_3_,3);
                pvStack_774 = (void *)iVar13;
                uVar7 = FUN_00469f00(param_2,"advert",1,3,iVar13 + 0x128,0);
                *(undefined4 *)(iVar13 + 0x124) = uVar7;
                *(undefined1 *)(iVar13 + 0x84) = 1;
                *(undefined1 *)(iVar13 + 0x85) = 1;
                ppuStack_934 = (undefined4 **)0x48cf4c;
                FUN_00475c40();
                FUN_00475850();
                ppuStack_934 = (undefined4 **)0x0;
                *(undefined1 *)(iVar13 + 0xba) = 0;
                *(undefined1 *)(iVar13 + 0xbb) = 0;
                uVar7 = FUN_00469f00(param_2,"advert_back",0xffffffff,0xffffffff,0,0);
                *(undefined4 *)(iVar13 + 0x120) = uVar7;
                uVar7 = FUN_00469f00(param_2,"advert_back",0xffffffff,0xffffffff,0,0,0,0,0);
                *(undefined4 *)(iVar13 + 0x134) = uVar7;
                FUN_00475850();
                *(undefined4 **)(iVar13 + 0xec) = local_8e8;
                *(bool *)(iVar13 + 0xb1) = *(int *)(iVar13 + 0x134) != 0;
                FUN_00478810();
              }
              iVar12 = iVar12 + 0xc;
            } while (iVar19 < iVar5);
          }
        }
      }
      else {
        if (*(char *)(*local_8ec + 0x87) != '\x03') {
          ppuStack_934 = (undefined4 **)0x48ad53;
          pvVar6 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
          local_c._0_1_ = 0xf;
          if (pvVar6 == (void *)0x0) {
            local_8e8 = (undefined4 *)0x0;
          }
          else {
            iVar19 = *local_8ec;
            ppuStack_934 = (undefined4 **)(iVar19 + 0x50);
            local_8e8 = (undefined4 *)FUN_00484d40(iVar19 + 4,iVar19 + 0x14,iVar19 + 0x44);
          }
          local_c = CONCAT31(local_c._1_3_,3);
          local_8e0 = local_8e8;
          iVar19 = rand();
          FUN_0046f920();
          ppuStack_934 = (undefined4 **)0x0;
          uVar7 = FUN_00469f00(param_2,"t2_bottom",1,4,0,local_8e8 + 0x4d);
          local_8e8[0x49] = uVar7;
          ppuStack_934 = (undefined4 **)0x48ae11;
          FUN_00475c40();
          ppuStack_934 = (undefined4 **)0x0;
          uVar7 = FUN_00469f00(param_2,&DAT_0058b110,0xffffffff,0xffffffff,0,0);
          local_8e8[0x48] = uVar7;
          if ((*(char *)(*local_8ec + 0xb1) == '\0') || (local_8e8[0x4d] == 0)) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
          }
          *(undefined1 *)((int)local_8e8 + 0xb1) = uVar3;
          *(undefined1 *)((int)local_8e8 + 0x86) = 1;
          iVar12 = *(int *)(iVar5 + 4);
          if ((iVar12 == 0) ||
             ((uint)(*(int *)(iVar5 + 0xc) - iVar12 >> 2) <=
              (uint)(*(int *)(iVar5 + 8) - iVar12 >> 2))) {
            ppuStack_934 = *(undefined4 ***)(iVar5 + 8);
            ppuStack_664 = ppuStack_934;
            FUN_00473a00();
          }
          else {
            iVar12 = *(int *)(iVar5 + 8);
            ppuStack_934 = &local_8e0;
            FUN_004520c0(iVar12,1);
            *(int *)(iVar5 + 8) = iVar12 + 4;
          }
          ppuStack_934 = (undefined4 **)0x48aed6;
          pvVar6 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
          local_c._0_1_ = 0x10;
          if (pvVar6 == (void *)0x0) {
            puStack_8fc = (undefined4 *)0x0;
          }
          else {
            puStack_8fc = (undefined4 *)FUN_00484aa0();
          }
          local_c._0_1_ = 3;
          local_8e0 = puStack_8fc;
          FUN_0046f6a0();
          FUN_004624b0();
          rand();
          FUN_0046f920();
          ppuStack_934 = (undefined4 **)0x0;
          uVar7 = FUN_00469f00(param_2,"t2_middle",1,7,puStack_8fc + 0x4a,puStack_8fc + 0x4d);
          puStack_8fc[0x49] = uVar7;
          *(undefined1 *)((int)puStack_8fc + 0xbb) = 0;
          *(undefined1 *)((int)puStack_8fc + 0x85) = 0;
          *(undefined1 *)(puStack_8fc + 0x21) = 0;
          *(undefined1 *)((int)puStack_8fc + 0x86) = 1;
          local_8c8 = puStack_8fc;
          FUN_00475780();
          if ((*(char *)(*local_8ec + 0xb1) == '\0') || (puStack_8fc[0x4d] == 0)) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
          }
          *(undefined1 *)((int)puStack_8fc + 0xb1) = uVar3;
          ppuStack_934 = (undefined4 **)0x48b002;
          FUN_00475c40();
          puStack_8fc[0x3b] = local_8e8;
          FUN_00478810();
          iVar5 = rand();
          if (iVar5 % 3 == 0) {
            FUN_0046f6a0();
            ppuStack_934 = (undefined4 **)0x48b04b;
            FUN_00475c40();
            *(undefined1 *)((int)local_8e8 + 0x85) = 0;
            FUN_0046f6a0();
            ppuStack_934 = (undefined4 **)0x48b06f;
            FUN_00475c40();
            ppuStack_934 = (undefined4 **)0x48b07e;
            pvVar6 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
            local_c._0_1_ = 0x11;
            if (pvVar6 == (void *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              puVar8 = (undefined4 *)FUN_00484aa0();
            }
            local_c._0_1_ = 3;
            ppuStack_934 = (undefined4 **)0x0;
            local_8e0 = puVar8;
            FUN_0046f990();
            FUN_0046f6a0();
            puVar8[0x14] = (float)puVar8[0x14] * _DAT_00587e3c;
            puVar8[0x15] = (float)puVar8[0x15] * _DAT_00587e3c;
            puVar8[0x16] = (float)puVar8[0x16] * _DAT_00587e3c;
            FUN_0046f920();
            FUN_00475b30();
            ppuStack_934 = (undefined4 **)0x0;
            *(undefined1 *)(puVar8 + 0x34) = 1;
            uVar7 = FUN_00469f00(param_2,"concrete",0xffffffff,0xffffffff,0,0);
            puVar8[0x48] = uVar7;
            puVar8[0x49] = puStack_8fc[0x49];
            puVar8[0x4c] = 0;
            puVar8[0x4a] = 0;
            *(undefined1 *)(puVar8 + 0x21) = 1;
            *(undefined1 *)((int)puVar8 + 0x85) = 1;
            ppuStack_934 = (undefined4 **)0x48b16e;
            FUN_00475c40();
            puVar8[0x20] = 0x3dcccccd;
            puVar8[0x1f] = 0;
            *(undefined1 *)((int)puVar8 + 0xbb) = 0;
            *(undefined1 *)((int)puVar8 + 0xba) = 0;
            puVar8[0x3b] = local_8e8;
            FUN_00478810();
            uVar9 = 0;
            local_904 = 0;
            while ((puStack_8fc[2] != 0 &&
                   (uVar9 < (uint)((int)(puStack_8fc[3] - puStack_8fc[2]) / 0xc)))) {
              uVar9 = uVar9 + 1;
              iVar5 = puStack_8fc[2];
              ppuStack_934 = &puStack_858;
              FUN_0041d580();
              fStack_854 = 0.0;
              fVar24 = SQRT((float)puStack_858 * (float)puStack_858 +
                            (float)puStack_850 * (float)puStack_850);
              if (_DAT_0058b0e4 <= fVar24) {
                uStack_718 = 0;
                fVar24 = _DAT_00583354 / fVar24;
                puStack_858 = (undefined4 *)((float)puStack_858 * fVar24);
                fStack_854 = _DAT_00582ad8 * fVar24;
                puStack_850 = (undefined4 *)(fVar24 * (float)puStack_850);
                fStack_714 = -(float)puStack_858;
                puStack_71c = puStack_850;
                uStack_900 = FUN_004cf110();
                ppuStack_934 = apuStack_594;
                FUN_0041d5b0();
                ppuStack_934 = &puStack_71c;
                uVar7 = FUN_0041d5b0(auStack_324);
                FUN_0041d550(auStack_57c,iVar5 + local_904,uVar7);
                ppuStack_934 = &puStack_7a8;
                FUN_0041d550();
                if ((int)uStack_900 < 1) goto LAB_0048b5f3;
                do {
                  ppuStack_934 = (undefined4 **)0x0;
                  FUN_00483a40(0);
                  ppuStack_934 = (undefined4 **)0x0;
                  FUN_00483a40(0);
                  ppuStack_934 = apuStack_1ec;
                  uVar7 = FUN_0041d5b0();
                  FUN_0041d550(auStack_5f4,&puStack_7a8,uVar7);
                  FUN_00478780();
                  ppuStack_934 = apuStack_30c;
                  FUN_0041d5b0();
                  ppuStack_934 = &puStack_858;
                  uVar7 = FUN_0041d5b0(auStack_54c);
                  FUN_0041d550(auStack_f0,&puStack_7a8,uVar7);
                  ppuStack_934 = apuStack_534;
                  FUN_0041d550();
                  FUN_00478780();
                  ppuStack_934 = apuStack_2f4;
                  uVar7 = FUN_0041d5b0();
                  FUN_0041d550(auStack_51c,&puStack_7a8,uVar7);
                  FUN_00478780();
                  FUN_00478780();
                  FUN_00484320();
                  ppuStack_934 = apuStack_1d4;
                  pfVar11 = (float *)FUN_0041d5b0();
                  puStack_7a8 = (undefined4 *)((float)puStack_7a8 + *pfVar11);
                  fStack_7a4 = fStack_7a4 + pfVar11[1];
                  fStack_7a0 = fStack_7a0 + pfVar11[2];
                  local_918 = (float *)((int)local_8d4 + 4);
                  for (uVar20 = 0;
                      (local_8c0 != (void *)0x0 &&
                      (uVar20 < (uint)((local_8bc - (int)local_8c0) / 0xc))); uVar20 = uVar20 + 1) {
                    *local_918 = *local_918 - ((float)(iVar19 % 200 + 600) + _DAT_0058a79c);
                    local_918 = local_918 + 3;
                  }
                  ppuStack_934 = (undefined4 **)0x48b538;
                  pvVar6 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
                  local_c._0_1_ = 0x12;
                  if (pvVar6 == (void *)0x0) {
                    puVar8 = (undefined4 *)0x0;
                  }
                  else {
                    ppuStack_934 = (undefined4 **)(*local_8ec + 0x50);
                    puVar8 = (undefined4 *)FUN_00484d40(auStack_8d8,auStack_8c4,*local_8ec + 0x44);
                  }
                  ppuStack_934 = (undefined4 **)0x0;
                  local_c._0_1_ = 3;
                  *(undefined1 *)(puVar8 + 0x34) = 1;
                  local_8e0 = puVar8;
                  uVar7 = FUN_00469f00(param_2,"concrete",0xffffffff,0xffffffff,0,0);
                  puVar8[0x49] = uVar7;
                  puVar8[0x3b] = local_8e8;
                  ppuStack_934 = (undefined4 **)0x48b5c7;
                  FUN_00475c40();
                  FUN_00478810();
                  uStack_900 = uStack_900 + -1;
                } while (uStack_900 != 0);
                local_904 = local_904 + 0xc;
              }
              else {
LAB_0048b5f3:
                local_904 = local_904 + 0xc;
              }
            }
          }
          ppuStack_934 = (undefined4 **)0x48b616;
          pvVar6 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
          local_c._0_1_ = 0x13;
          if (pvVar6 == (void *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            puVar8 = (undefined4 *)FUN_00484aa0();
          }
          ppuStack_934 = (undefined4 **)0x0;
          local_c = CONCAT31(local_c._1_3_,3);
          local_8e0 = puVar8;
          FUN_0046f990();
          FUN_0046f6a0();
          puVar8[0x14] = (float)puVar8[0x14] * _DAT_00587e3c;
          puVar8[0x15] = (float)puVar8[0x15] * _DAT_00587e3c;
          puVar8[0x16] = (float)puVar8[0x16] * _DAT_00587e3c;
          FUN_0046f920();
          FUN_00475b30();
          ppuStack_934 = (undefined4 **)0x0;
          *(undefined1 *)(puVar8 + 0x34) = 1;
          uVar7 = FUN_00469f00(param_2,"concrete",0xffffffff,0xffffffff,0,0);
          puVar8[0x48] = uVar7;
          puVar8[0x49] = puStack_8fc[0x49];
          puVar8[0x4a] = 0;
          *(undefined1 *)(puVar8 + 0x21) = 1;
          *(undefined1 *)((int)puVar8 + 0x85) = 1;
          *(undefined1 *)((int)puVar8 + 0xbb) = 0;
          ppuStack_934 = (undefined4 **)0x48b6fc;
          FUN_00475c40();
          puVar8[0x20] = 0x3dcccccd;
          puVar8[0x1f] = 0;
          *(undefined1 *)((int)puVar8 + 0xba) = 0;
          puVar8[0x3b] = local_8e8;
          FUN_00478810();
          goto LAB_0048b726;
        }
        ppuStack_934 = (undefined4 **)0x48a734;
        pvVar6 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
        local_c._0_1_ = 0xc;
        if (pvVar6 == (void *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          iVar19 = *local_8ec;
          ppuStack_934 = (undefined4 **)(iVar19 + 0x50);
          puVar8 = (undefined4 *)FUN_00484d40(iVar19 + 4,iVar19 + 0x14,iVar19 + 0x44);
        }
        local_c = CONCAT31(local_c._1_3_,3);
        local_874 = puVar8;
        FUN_0046f920();
        ppuStack_934 = (undefined4 **)0x0;
        *(undefined1 *)(puVar8 + 0x2c) = 1;
        uVar7 = FUN_00469f00(param_2,"fence",0xffffffff,0xffffffff,0,0);
        puVar8[0x49] = uVar7;
        ppuStack_934 = (undefined4 **)0x48a7c2;
        FUN_00475c40();
        FUN_00475b30();
        *(undefined1 *)((int)puVar8 + 0x86) = 1;
        *(undefined1 *)((int)puVar8 + 0xbb) = 1;
        iVar19 = *(int *)(iVar5 + 4);
        if ((iVar19 == 0) ||
           ((uint)(*(int *)(iVar5 + 0xc) - iVar19 >> 2) <= (uint)(*(int *)(iVar5 + 8) - iVar19 >> 2)
           )) {
          ppuStack_934 = *(undefined4 ***)(iVar5 + 8);
          ppuStack_744 = ppuStack_934;
          FUN_00473a00();
        }
        else {
          iVar19 = *(int *)(iVar5 + 8);
          ppuStack_934 = &local_874;
          FUN_004520c0(iVar19,1);
          *(int *)(iVar5 + 8) = iVar19 + 4;
        }
        if (puVar8[2] == 0) {
          local_918 = (float *)0x0;
        }
        else {
          local_918 = (float *)((int)(puVar8[3] - puVar8[2]) / 0xc);
        }
        uVar9 = rand();
        puStack_6f8 = *(undefined4 **)(puVar8[2] + (uVar9 % (uint)local_918) * 0xc);
        iVar19 = puVar8[2] + (uVar9 % (uint)local_918) * 0xc;
        uStack_6f4 = *(undefined4 *)(iVar19 + 4);
        uStack_6f0 = *(undefined4 *)(iVar19 + 8);
        ppuStack_934 = &puStack_6f8;
        ppuStack_934 = (undefined4 **)FUN_0041d580(auStack_5ac,puVar8 + 0x28);
        FUN_0043fa40(auStack_15c);
        ppuStack_934 = &puStack_6b8;
        FUN_0041d550();
        uStack_6b4 = *(undefined4 *)(puVar8[2] + 4);
        iVar19 = rand();
        uStack_694 = 0;
        uStack_68c = 0;
        fStack_690 = (float)(iVar19 % 0xff) * _DAT_0058ac28;
        iVar19 = rand();
        fStack_6ac = (float)(iVar19 % 0xff) * _DAT_0058a930 + _DAT_00583354;
        fStack_6ac = fStack_6ac + fStack_6ac;
        uStack_6b4 = *(undefined4 *)(puVar8[2] + 4);
        fStack_6a8 = fStack_6ac;
        fStack_6a4 = fStack_6ac;
        puStack_780 = (undefined4 *)
                      FUN_00472ff0(param_2,&DAT_0058b0b8,&puStack_6b8,&uStack_694,&fStack_6ac,
                                   0xffffffff,0xffffffff);
        iVar19 = *(int *)(iVar5 + 0x5c);
        if ((iVar19 == 0) ||
           ((uint)(*(int *)(iVar5 + 100) - iVar19 >> 2) <=
            (uint)(*(int *)(iVar5 + 0x60) - iVar19 >> 2))) {
          ppuStack_934 = *(undefined4 ***)(iVar5 + 0x60);
          ppuStack_740 = ppuStack_934;
          FUN_00473a00();
        }
        else {
          iVar19 = *(int *)(iVar5 + 0x60);
          ppuStack_934 = &puStack_780;
          FUN_004520c0(iVar19,1);
          *(int *)(iVar5 + 0x60) = iVar19 + 4;
        }
        iVar19 = rand();
        local_910 = (undefined4 *)0x0;
        uStack_900 = iVar19 % 3 + 2;
        if (0 < (int)uStack_900) {
          do {
            ppuStack_934 = (undefined4 **)0x48aa4f;
            pvVar6 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
            local_c._0_1_ = 0xd;
            if (pvVar6 == (void *)0x0) {
              local_910 = (undefined4 *)0x0;
            }
            else {
              iVar19 = *local_8ec;
              ppuStack_934 = (undefined4 **)(iVar19 + 0x50);
              local_910 = (undefined4 *)FUN_00484d40(iVar19 + 4,iVar19 + 0x14,iVar19 + 0x44);
            }
            local_c = CONCAT31(local_c._1_3_,3);
            local_874 = local_910;
            FUN_0046f920();
            ppuStack_934 = (undefined4 **)0x0;
            FUN_0046f990();
            FUN_0046f6a0();
            ppuStack_934 = (undefined4 **)0x0;
            uVar7 = FUN_00469f00(param_2,"concrete",0xffffffff,0xffffffff,0,0);
            local_910[0x49] = uVar7;
            local_910[0x48] = uVar7;
            *(undefined1 *)(local_910 + 0x21) = 1;
            *(undefined1 *)((int)local_910 + 0xbb) = 0;
            *(undefined1 *)((int)local_910 + 0x85) = 1;
            ppuStack_934 = (undefined4 **)0x48ab14;
            FUN_00475c40();
            FUN_00475b30();
            iVar19 = *(int *)(iVar5 + 4);
            if ((iVar19 == 0) ||
               ((uint)(*(int *)(iVar5 + 0xc) - iVar19 >> 2) <=
                (uint)(*(int *)(iVar5 + 8) - iVar19 >> 2))) {
              ppuStack_934 = *(undefined4 ***)(iVar5 + 8);
              ppuStack_738 = ppuStack_934;
              FUN_00473a00();
            }
            else {
              iVar19 = *(int *)(iVar5 + 8);
              ppuStack_934 = &local_874;
              FUN_004520c0(iVar19,1);
              *(int *)(iVar5 + 8) = iVar19 + 4;
            }
            uStack_900 = uStack_900 + -1;
          } while (uStack_900 != 0);
        }
        iVar5 = 0;
        for (local_918 = (float *)0x0;
            (local_910[2] != 0 && (local_918 < (uint)((int)(local_910[3] - local_910[2]) / 0xc)));
            local_918 = (float *)((int)local_918 + 1)) {
          rand();
          ppuStack_934 = (undefined4 **)0x48ac36;
          pvVar6 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
          local_c._0_1_ = 0xe;
          if (pvVar6 == (void *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            ppuStack_934 = (undefined4 **)0x42480000;
            puVar8 = (undefined4 *)FUN_00484790(local_910[2] + iVar5);
          }
          ppuStack_934 = (undefined4 **)0x0;
          local_c = CONCAT31(local_c._1_3_,3);
          puStack_784 = puVar8;
          uVar7 = FUN_00469f00(param_2,"concrete",0xffffffff,0xffffffff,0,0);
          puVar8[0x49] = uVar7;
          puVar8[0x48] = uVar7;
          *(undefined1 *)((int)puVar8 + 0xbb) = 0;
          *(undefined1 *)((int)puVar8 + 0x85) = 1;
          ppuStack_934 = (undefined4 **)0x48acc4;
          FUN_00475c40();
          FUN_00475b30();
          iVar12 = local_8b0;
          iVar19 = *(int *)(local_8b0 + 4);
          if ((iVar19 == 0) ||
             ((uint)(*(int *)(local_8b0 + 0xc) - iVar19 >> 2) <=
              (uint)(*(int *)(local_8b0 + 8) - iVar19 >> 2))) {
            ppuStack_934 = *(undefined4 ***)(local_8b0 + 8);
            ppuStack_70c = ppuStack_934;
            FUN_00473a00();
          }
          else {
            iVar19 = *(int *)(local_8b0 + 8);
            ppuStack_934 = &puStack_784;
            FUN_004520c0(iVar19,1);
            *(int *)(iVar12 + 8) = iVar19 + 4;
          }
          iVar5 = iVar5 + 0xc;
        }
      }
      if ((*(char *)(*local_8ec + 0x87) == '\x01') && (local_8e8 != (undefined4 *)0x0)) {
        local_918 = (float *)0x0;
        for (local_908 = 1;
            (local_8e8[6] != 0 && (local_908 - 1 < (uint)((int)(local_8e8[7] - local_8e8[6]) / 0xc))
            ); local_908 = local_908 + 1) {
          iVar5 = rand();
          if ((0x1e < iVar5 % 100) &&
             ((local_8e8[0xe] == 0 || ((uint)((int)(local_8e8[0xf] - local_8e8[0xe]) / 0x1c) < 2))))
          {
            puStack_830 = (undefined4 *)0x0;
            puStack_82c = (undefined4 *)0x0;
            puStack_828 = (undefined4 *)0x0;
            uStack_824 = 0;
            fStack_820 = 0.0;
            uStack_81c = 0;
            iStack_834 = 0;
            rand();
            iVar5 = local_8e8[6];
            ppuStack_934 = (undefined4 **)(iVar5 + (int)local_918);
            if (iVar5 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = (local_8e8[7] - iVar5) / 0xc;
            }
            ppuStack_934 = (undefined4 **)
                           FUN_0041d580(auStack_2d0,iVar5 + (local_908 % uVar9) * 0xc);
            FUN_0041d5b0(auStack_2b8);
            ppuStack_934 = apuStack_2a0;
            ppuVar16 = (undefined4 **)FUN_0041d550();
            if (ppuVar16 != &puStack_830) {
              puStack_830 = *ppuVar16;
              puStack_82c = ppuVar16[1];
              puStack_828 = ppuVar16[2];
            }
            puStack_82c = (undefined4 *)((float)puStack_82c - _DAT_00583348);
            ppuStack_934 = apuStack_67c;
            FUN_0041d580();
            fStack_79c = -fStack_674;
            fStack_798 = 0.0;
            puStack_794 = apuStack_67c[0];
            FUN_0041d4b0();
            piVar17 = *(int **)(local_8dc + 0xd8);
            if (piVar17 != *(int **)(local_8dc + 0xdc)) {
              do {
                iVar5 = *piVar17;
                if ((iVar5 != *local_8ec) && (*(char *)(iVar5 + 0x87) == '\x01')) {
                  uStack_900 = 1;
                  local_904 = 0;
                  for (local_910 = (undefined4 *)0x0;
                      (*(int *)(iVar5 + 8) != 0 &&
                      (local_910 < (uint)((*(int *)(iVar5 + 0xc) - *(int *)(iVar5 + 8)) / 0xc)));
                      local_910 = (undefined4 *)((int)local_910 + 1)) {
                    ppuStack_934 = (undefined4 **)(*(int *)(iVar5 + 8) + local_904);
                    if (*(int *)(iVar5 + 8) == 0) {
                      uVar9 = 0;
                    }
                    else {
                      uVar9 = (*(int *)(iVar5 + 0xc) - *(int *)(iVar5 + 8)) / 0xc;
                    }
                    ppuStack_934 = (undefined4 **)
                                   FUN_0041d580(auStack_288,
                                                *(int *)(iVar5 + 8) + (uStack_900 % uVar9) * 0xc);
                    FUN_0041d5b0(auStack_270);
                    ppuStack_934 = apuStack_670;
                    FUN_0041d550();
                    FUN_0041d580(&fStack_7f4,apuStack_670,&puStack_830);
                    fStack_7f0 = 0.0;
                    if (((fStack_7f4 * fStack_7f4 + fStack_7ec * fStack_7ec < _DAT_0058aaf0) &&
                        (iVar19 = rand(), 0x1e < iVar19 % 100)) &&
                       (FUN_0041d4b0(),
                       (float)_DAT_00588818 <
                       fStack_79c * fStack_7f4 +
                       fStack_7f0 * fStack_798 + fStack_7ec * (float)puStack_794)) {
                      ppuStack_934 = apuStack_688;
                      FUN_0041d580();
                      fStack_76c = -fStack_680;
                      puStack_764 = apuStack_688[0];
                      fStack_768 = 0.0;
                      FUN_0041d4b0();
                      if (fStack_79c * fStack_76c +
                          fStack_768 * fStack_798 + (float)puStack_764 * (float)puStack_794 <
                          (float)_DAT_0058b030) {
                        ppuStack_934 = apuStack_258;
                        uVar7 = FUN_0041d5b0();
                        puVar8 = (undefined4 *)FUN_0041d580(auStack_240,apuStack_670,uVar7);
                        if (puVar8 != &uStack_824) {
                          uStack_824 = *puVar8;
                          fStack_820 = (float)puVar8[1];
                          uStack_81c = puVar8[2];
                        }
                        ppuStack_934 = apuStack_228;
                        pfVar11 = (float *)FUN_0041d5b0();
                        puStack_830 = (undefined4 *)((float)puStack_830 + *pfVar11);
                        puStack_82c = (undefined4 *)((float)puStack_82c + pfVar11[1]);
                        puStack_828 = (undefined4 *)((float)puStack_828 + pfVar11[2]);
                        fStack_820 = (float)puStack_82c -
                                     (*(float *)(*(int *)(*local_8ec + 8) + 4 + (int)local_918) -
                                     *(float *)(*(int *)(iVar5 + 8) + 4 + (int)local_910 * 0xc));
                        iStack_834 = rand();
                        iStack_834 = iStack_834 % 3;
                        puVar8 = (undefined4 *)((int)local_704 + 4);
                        uVar9 = 0;
                        goto LAB_0048d5b0;
                      }
                    }
                    local_904 = local_904 + 0xc;
                    uStack_900 = uStack_900 + 1;
                  }
                }
LAB_0048d695:
                piVar17 = piVar17 + 1;
              } while (piVar17 != *(int **)(local_8dc + 0xdc));
            }
          }
LAB_0048d6e0:
          local_918 = (float *)((int)local_918 + 0xc);
        }
      }
      if (((local_8b1 != '\0') && (*(char *)(*local_8ec + 0x87) == '\0')) &&
         (local_8c8 != (undefined4 *)0x0)) {
        iVar5 = 0;
        uVar9 = 0xffffffff;
LAB_0048d72a:
        do {
          puVar8 = local_8c8;
          if ((local_8c8[6] == 0) ||
             (uVar20 = uVar9 + 1, (uint)((int)(local_8c8[7] - local_8c8[6]) / 0xc) <= uVar20))
          break;
          iVar19 = rand();
          if ((0x46 < iVar19 % 100) &&
             ((puVar8[10] == 0 || ((uint)((int)(puVar8[0xb] - puVar8[10]) / 0x1c) < 4)))) {
            fStack_7d8 = 0.0;
            fStack_7d4 = 0.0;
            fStack_7d0 = 0.0;
            uStack_7cc = 0;
            fStack_7c8 = 0.0;
            uStack_7c4 = 0;
            uStack_7dc = 0;
            iVar19 = puVar8[6];
            pfVar11 = (float *)(iVar5 + iVar19);
            if (pfVar11 != &fStack_7d8) {
              fStack_7d8 = *pfVar11;
              fStack_7d4 = pfVar11[1];
              fStack_7d0 = pfVar11[2];
            }
            iVar12 = rand();
            fStack_7d4 = fStack_7d4 - ((float)(iVar12 % 0xff) * _DAT_0058b028 + _DAT_00588808);
            if (local_8c8[6] == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = (int)(local_8c8[7] - local_8c8[6]) / 0xc;
            }
            ppuStack_934 = apuStack_660;
            FUN_0041d580();
            FUN_0041d580(auStack_654,iVar19 + ((uVar9 + 2) % uVar18) * 0xc,pfVar11);
            FUN_0041d550(&fStack_6ec,apuStack_660,auStack_654);
            FUN_0041d4b0();
            piVar17 = *(int **)(local_8dc + 0xd8);
            if (piVar17 != *(int **)(local_8dc + 0xdc)) {
              do {
                iVar19 = *piVar17;
                if (iVar19 != *local_8ec) {
                  uVar9 = 0;
LAB_0048d934:
                  if ((*(int *)(iVar19 + 8) != 0) &&
                     (uVar9 < (uint)((*(int *)(iVar19 + 0xc) - *(int *)(iVar19 + 8)) / 0xc))) {
                    ppuStack_934 = &puStack_7b4;
                    FUN_0041d580();
                    fStack_7b0 = 0.0;
                    if ((_DAT_0058aad8 <=
                         fStack_7ac * fStack_7ac + (float)puStack_7b4 * (float)puStack_7b4) ||
                       ((iVar12 = rand(), iVar12 % 100 < 0x47 ||
                        (FUN_0041d4b0(),
                        fStack_6e8 * fStack_7b0 +
                        fStack_6e4 * fStack_7ac + (float)puStack_7b4 * fStack_6ec <=
                        (float)_DAT_00588818)))) goto LAB_0048da0c;
                    puStack_864 = (undefined4 *)0x0;
                    fStack_860 = 0.0;
                    fStack_85c = 0.0;
                    iVar19 = *piVar17;
                    local_914 = 0;
                    for (uVar18 = 0;
                        (*(int *)(iVar19 + 8) != 0 &&
                        (uVar18 < (uint)((*(int *)(iVar19 + 0xc) - *(int *)(iVar19 + 8)) / 0xc)));
                        uVar18 = uVar18 + 1) {
                      puStack_864 = (undefined4 *)
                                    ((float)puStack_864 +
                                    *(float *)(*(int *)(iVar19 + 8) + local_914));
                      iVar12 = *(int *)(iVar19 + 8) + local_914;
                      local_914 = local_914 + 0xc;
                      fStack_860 = fStack_860 + *(float *)(iVar12 + 4);
                      fStack_85c = fStack_85c + *(float *)(iVar12 + 8);
                    }
                    if (*(int *)(iVar19 + 8) == 0) {
                      iVar12 = 0;
                    }
                    else {
                      iVar12 = (*(int *)(iVar19 + 0xc) - *(int *)(iVar19 + 8)) / 0xc;
                    }
                    fVar24 = (float)iVar12;
                    if (iVar12 < 0) {
                      fVar24 = fVar24 + _DAT_00582b04;
                    }
                    fVar24 = _DAT_00583354 / fVar24;
                    ppuStack_934 = &puStack_864;
                    puStack_864 = (undefined4 *)((float)puStack_864 * fVar24);
                    fStack_860 = fStack_860 * fVar24;
                    fStack_85c = fStack_85c * fVar24;
                    ppuStack_934 = (undefined4 **)
                                   FUN_0041d580(auStack_210,*(int *)(iVar19 + 8) + uVar9 * 0xc);
                    FUN_0041d5b0(auStack_1f8);
                    ppuStack_934 = apuStack_1e0;
                    puVar8 = (undefined4 *)FUN_0041d550();
                    if (puVar8 != &uStack_7cc) {
                      uStack_7cc = *puVar8;
                      fStack_7c8 = (float)puVar8[1];
                      uStack_7c4 = puVar8[2];
                    }
                    ppuStack_934 = apuStack_1c8;
                    pfVar11 = (float *)FUN_0041d5b0();
                    fStack_7d8 = fStack_7d8 - *pfVar11;
                    fStack_7d4 = fStack_7d4 - pfVar11[1];
                    fStack_7d0 = fStack_7d0 - pfVar11[2];
                    iVar12 = *(int *)(*local_8ec + 8);
                    iVar19 = *(int *)(iVar19 + 8);
                    iVar13 = rand();
                    fStack_7c8 = ((fStack_7d4 - (float)(iVar13 % 0xff) * _DAT_0058af28) -
                                 (*(float *)(iVar12 + iVar5 + 4) -
                                 *(float *)(uVar9 * 0xc + 4 + iVar19))) - _DAT_00583348;
                    FUN_004844a0();
                    goto LAB_0048dc6c;
                  }
                }
                piVar17 = piVar17 + 1;
              } while (piVar17 != *(int **)(local_8dc + 0xdc));
              iVar5 = iVar5 + 0xc;
              uVar9 = uVar20;
              goto LAB_0048d72a;
            }
          }
LAB_0048dc6c:
          iVar5 = iVar5 + 0xc;
          uVar9 = uVar20;
        } while( true );
      }
      FUN_00478a40();
      FUN_00481310();
      local_8ec = local_8ec + 1;
    } while (local_8ec != *(int **)(local_8dc + 0xdc));
  }
  iVar5 = local_8dc;
  piVar17 = *(int **)(local_8dc + 0x18c);
  if (piVar17 != *(int **)(local_8dc + 400)) {
    do {
      piVar1 = *(int **)(*piVar17 + 8);
      for (piVar21 = *(int **)(*piVar17 + 4); piVar21 != piVar1; piVar21 = piVar21 + 1) {
        if (*(int *)(*piVar21 + 0x124) != 0) {
          ppuStack_934 = (undefined4 **)0x48dd00;
          FUN_00489590();
          FUN_00478810();
        }
      }
      piVar17 = piVar17 + 1;
    } while (piVar17 != *(int **)(iVar5 + 400));
  }
  local_8ac = (void *)**(int **)(iVar5 + 0x1fc);
  if (local_8ac != *(int **)(iVar5 + 0x1fc)) {
    do {
      piVar17 = *(int **)((int)local_8ac + 0x18);
      iVar19 = (int)local_8ac + 0x10;
      for (piVar21 = *(int **)((int)local_8ac + 0x14); piVar21 != piVar17; piVar21 = piVar21 + 1) {
        *(int *)(*piVar21 + 0x138) = iVar19;
        FUN_00478810();
      }
      ppuStack_934 = (undefined4 **)0x48dd6e;
      FUN_00474110();
      FUN_0046b6b0();
    } while (local_8ac != (void *)*(int *)(iVar5 + 0x1fc));
  }
  FUN_00481060();
  FUN_00481060();
  ppuStack_934 = (undefined4 **)0x48ddfb;
  ppuStack_934 = (undefined4 **)FUN_0041e5b0();
  FUN_0040a410();
  if (local_704 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_704);
  }
  if (local_8d4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_8d4);
  }
  if (local_8c0 == (void *)0x0) {
    ExceptionList = pvStack_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_8c0);
LAB_0048d5b0:
  if ((local_704 == (void *)0x0) || ((uint)((local_700 - (int)local_704) / 0x1c) <= uVar9)) {
    FUN_004844a0();
    FUN_004844a0();
    goto LAB_0048d6e0;
  }
  uStack_6d0 = *puVar8;
  uStack_6cc = puVar8[2];
  uStack_6d4 = puVar8[5];
  uStack_6d8 = puVar8[3];
  puStack_6c4 = puStack_828;
  puStack_6c8 = puStack_830;
  uStack_6e0 = uStack_824;
  uStack_6dc = uStack_81c;
  ppuStack_934 = &puStack_6c8;
  uStack_6c0 = 0;
  uStack_6bc = 0;
  cVar4 = FUN_0048e840(&uStack_6d0,&uStack_6d8);
  if (cVar4 != '\0') goto LAB_0048d695;
  uVar9 = uVar9 + 1;
  puVar8 = puVar8 + 7;
  goto LAB_0048d5b0;
LAB_0048da0c:
  uVar9 = uVar9 + 1;
  goto LAB_0048d934;
}




/* Function: FUN_00498fa5 */

void FUN_00498fa5(undefined4 param_1)

{
  HMODULE pHVar1;
  
  if (DAT_005b616c == (FARPROC)0x0) {
    if (DAT_005b6168 != (FARPROC)0x0) goto LAB_0049902e;
    pHVar1 = GetModuleHandleA("d3d8.dll");
    if (pHVar1 != (HMODULE)0x0) {
      pHVar1 = LoadLibraryA("d3d8.dll");
      if (pHVar1 != (HMODULE)0x0) {
        DAT_005b616c = GetProcAddress(pHVar1,"DebugSetMute");
      }
    }
    pHVar1 = GetModuleHandleA("d3d8d.dll");
    if (pHVar1 != (HMODULE)0x0) {
      pHVar1 = LoadLibraryA("d3d8d.dll");
      if (pHVar1 != (HMODULE)0x0) {
        DAT_005b6168 = GetProcAddress(pHVar1,"DebugSetMute");
      }
    }
    if (DAT_005b616c != (FARPROC)0x0) goto LAB_0049901a;
  }
  else {
LAB_0049901a:
    (*DAT_005b616c)(param_1);
  }
  if (DAT_005b6168 == (FARPROC)0x0) {
    return;
  }
LAB_0049902e:
                    /* WARNING: Could not recover jumptable at 0x0049902e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_005b6168)();
  return;
}




/* Function: FUN_004a5396 */

void FUN_004a5396(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  char *pcVar5;
  char local_204 [255];
  undefined1 local_105;
  char local_104 [255];
  undefined1 local_5;
  
  _vsnprintf(local_204,0x100,param_2,&stack0x0000000c);
  local_105 = 0;
  if (*(int *)(param_1 + 0x3d8) != 0) {
    iVar1 = 0xd;
    bVar4 = true;
    pcVar5 = local_204;
    pcVar3 = "syntax error";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar5 == *pcVar3;
      pcVar5 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      iVar1 = *(int *)(param_1 + 0x3dc);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x1d0);
        pcVar5 = "%s(%d) : (Assembly Error) shader version expected";
      }
      else {
        if (*(int *)(param_1 + 0xa0) != 0) {
          iVar2 = 4;
          bVar4 = true;
          pcVar5 = (char *)(param_1 + 200);
          pcVar3 = "def";
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar4 = *pcVar5 == *pcVar3;
            pcVar5 = pcVar5 + 1;
            pcVar3 = pcVar3 + 1;
          } while (bVar4);
          if (bVar4) {
            iVar1 = *(int *)(param_1 + 0x1d0);
            pcVar5 = "%s(%d) : (Assembly Error) constant definition in shader body";
            goto LAB_004a5436;
          }
        }
        pcVar5 = "%s(%d) : (Assembly Error) statement incomplete";
      }
LAB_004a5436:
      _snprintf(local_104,0x100,pcVar5,param_1 + 0x1d4,iVar1);
      goto LAB_004a54a1;
    }
  }
  if (*(int *)(param_1 + 0x3e0) == 0) {
    iVar1 = *(int *)(param_1 + 0x1d0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x3e4);
  }
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  _snprintf(local_104,0x100,"%s(%d) : (Assembly Error) %s",param_1 + 0x1d4,iVar1,local_204);
LAB_004a54a1:
  local_5 = 0;
  FUN_004b807d(local_104);
  *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
  *(undefined4 *)(param_1 + 0x98) = 1;
  return;
}




/* Function: FUN_004a68dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a68dc(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  uint uStack_20;
  uint uStack_1c;
  float fStack_18;
  void *pvStack_14;
  uint uStack_10;
  uint uStack_c;
  float fStack_8;
  
  switch(param_2) {
  case 5.60519e-45:
    FUN_004b8005(&uStack_10);
    FUN_004b8005(&param_2);
    if ((((uint)param_2 | uStack_10) & 0xffffff00) == 0) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      uVar1 = (uint)param_2 | 0xfffffe00;
LAB_004a694b:
      *(uint *)(param_1 + 0xb4) = uVar1 << 8 | uStack_10;
      goto LAB_004a6957;
    }
    goto LAB_004a692d;
  case 7.00649e-45:
    FUN_004b8005(&uStack_10);
    FUN_004b8005(&param_2);
    if ((((uint)param_2 | uStack_10) & 0xffffff00) == 0) {
      *(undefined4 *)(param_1 + 0xac) = 1;
      uVar1 = (uint)param_2 | 0xffffff00;
      goto LAB_004a694b;
    }
LAB_004a692d:
    pcVar4 = "invalid version";
LAB_004a6932:
    FUN_004a5396(param_1,pcVar4);
  case 8.40779e-45:
  case 9.80909e-45:
  case 1.12104e-44:
  case 1.26117e-44:
  case 1.54143e-44:
  case 1.68156e-44:
  case 6.30584e-44:
  case 6.44597e-44:
    goto LAB_004a7107;
  case 1.4013e-44:
    FUN_004b8005(&param_2);
    FUN_004b8005(auStack_28);
    FUN_004b8005(auStack_2c);
    FUN_004b8005(auStack_30);
    FUN_004b8005(auStack_34);
    FUN_004a60ce(param_2,auStack_34);
    goto LAB_004a7107;
  case 1.82169e-44:
    FUN_004b8005(&uStack_1c);
    FUN_004b8005(&uStack_c);
    FUN_004b7f97(uStack_c);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 4;
    goto LAB_004a7107;
  case 1.96182e-44:
    FUN_004b8005(&param_2);
    FUN_004b8005(&uStack_1c);
    FUN_004b8005(&uStack_c);
    FUN_004b7f97(uStack_c);
    FUN_004b7f97(uStack_1c | (uint)param_2);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 8;
    goto LAB_004a7107;
  case 2.10195e-44:
    FUN_004b8005(&uStack_10);
    FUN_004b8005(&param_2);
    FUN_004b8005(&uStack_1c);
    FUN_004b8005(&uStack_c);
    FUN_004b7f97(uStack_c);
    FUN_004b7f97(uStack_1c | (uint)param_2);
    FUN_004b7f97(uStack_10);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 0xc;
    goto LAB_004a7107;
  case 2.24208e-44:
    FUN_004b8005(&uStack_20);
    FUN_004b8005(&uStack_10);
    FUN_004b8005(&param_2);
    FUN_004b8005(&uStack_1c);
    FUN_004b8005(&uStack_c);
    if ((*(int *)(param_1 + 0xac) == 0) && ((uStack_c & 0xffff) == 3)) {
      uStack_c = uStack_c & 0xffff0002 | 2;
      uStack_20 = uStack_20 ^ 0x1000000;
    }
    FUN_004b7f97(uStack_c);
    FUN_004b7f97(uStack_1c | (uint)param_2);
    FUN_004b7f97(uStack_10);
    FUN_004b7f97(uStack_20);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 0x10;
    goto LAB_004a7107;
  case 2.38221e-44:
    FUN_004b8005(&uStack_24);
    FUN_004b8005(&uStack_20);
    FUN_004b8005(&uStack_10);
    FUN_004b8005(&param_2);
    FUN_004b8005(&uStack_1c);
    FUN_004b8005(&uStack_c);
    FUN_004b7f97(uStack_c);
    FUN_004b7f97(uStack_1c | (uint)param_2);
    FUN_004b7f97(uStack_10);
    FUN_004b7f97(uStack_20);
    FUN_004b7f97(uStack_24);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 0x14;
    goto LAB_004a7107;
  case 2.52234e-44:
    FUN_004b8005(&param_2);
    param_2 = (float)((uint)param_2 | 0xf0000);
    fVar2 = param_2;
    break;
  case 2.66247e-44:
    FUN_004b8005(&pvStack_14);
    FUN_004b8005(param_1 + 0x3e4);
    *(undefined4 *)(param_1 + 0x3e0) = 1;
    FUN_004b8005(&param_2);
    uVar1 = FUN_004a5be3(pvStack_14);
    fVar2 = (float)(uVar1 | (uint)param_2 & 0xfff0ffff);
    param_2 = fVar2;
    goto LAB_004a6c61;
  case 2.8026e-44:
    FUN_004b8005(&param_2);
    FUN_004b7f97(param_2);
    if (((*(int *)(param_1 + 0xb4) != -0xfefc) || (((uint)param_2 & 0x70000000) != 0x20000000)) ||
       (((uint)param_2 & 0xf000000) == 0)) goto LAB_004a7107;
    pcVar4 = "constant modifiers not supported in ps.1.4";
    goto LAB_004a6932;
  case 2.94273e-44:
    FUN_004b8005(&param_2);
    if ((*(int *)(param_1 + 0xb4) == -0xfefc) && (((uint)param_2 & 0x70000000) == 0x20000000)) {
      pcVar4 = "constant modifiers not supported in ps.1.4";
LAB_004a6cfd:
      FUN_004a5396(param_1,pcVar4);
      fVar2 = param_2;
    }
    else {
      uVar1 = (uint)param_2 & 0xf000000;
      if (uVar1 == 0) {
        param_2 = (float)((uint)param_2 & 0xf1ffffff | 0x1000000);
        fVar2 = param_2;
      }
      else if (uVar1 == 0x2000000) {
        param_2 = (float)((uint)param_2 & 0xf3ffffff | 0x3000000);
        fVar2 = param_2;
      }
      else if (uVar1 == 0x4000000) {
        param_2 = (float)((uint)param_2 & 0xf5ffffff | 0x5000000);
        fVar2 = param_2;
      }
      else if (uVar1 == 0x7000000) {
        param_2 = (float)((uint)param_2 & 0xf8ffffff | 0x8000000);
        fVar2 = param_2;
      }
      else if ((uVar1 == 0x9000000) || (fVar2 = param_2, uVar1 == 0xa000000)) {
        pcVar4 = "negate and divide modifiers cannot be combined";
        goto LAB_004a6cfd;
      }
    }
    break;
  case 3.08286e-44:
    FUN_004b8005(&fStack_8);
    FUN_004b8005(&param_2);
    if (*(int *)(param_1 + 0xac) == 0) {
      pcVar4 = "complement not supported in vertex shaders";
LAB_004a6dd6:
      FUN_004a5396(param_1,pcVar4);
    }
    else {
      if ((*(int *)(param_1 + 0xb4) == -0xfefc) && (((uint)param_2 & 0x70000000) == 0x20000000)) {
        pcVar4 = "constant modifiers not supported in ps.1.4";
        goto LAB_004a6dd6;
      }
      if (((uint)param_2 & 0xf000000) != 0) {
        pcVar4 = "complement cannot be used with other modifiers";
        goto LAB_004a6dd6;
      }
    }
    param_2 = (float)((uint)param_2 & 0xf6ffffff | 0x6000000);
    fVar2 = param_2;
    break;
  case 3.22299e-44:
    FUN_004b8005(&param_2);
    fVar2 = (float)((uint)param_2 & 0xffe4ffff | 0xe40000);
    break;
  case 3.36312e-44:
    FUN_004b8005(&pvStack_14);
    FUN_004b8005(param_1 + 0x3e4);
    *(undefined4 *)(param_1 + 0x3e0) = 1;
    FUN_004b8005(&param_2);
    uVar1 = FUN_004a5c8c(pvStack_14);
    fVar2 = (float)(uVar1 | (uint)param_2 & 0xff00ffff);
    goto LAB_004a6c61;
  case 3.50325e-44:
    FUN_004b8005(&pvStack_14);
    FUN_004b8005(param_1 + 0x3e4);
    *(undefined4 *)(param_1 + 0x3e0) = 1;
    uVar1 = FUN_004a5d2d(pvStack_14,0,0);
    FUN_004b7f97(uVar1 | 0x80000000);
                    /* WARNING: Subroutine does not return */
    operator_delete(pvStack_14);
  case 3.64338e-44:
    FUN_004b8005(&pvStack_14);
    FUN_004b8005(param_1 + 0x3e4);
    *(undefined4 *)(param_1 + 0x3e0) = 1;
    FUN_004b8005(&fStack_8);
    uVar1 = FUN_004a5d2d(pvStack_14,fStack_8,1);
    fVar2 = (float)(uVar1 | 0x80000000);
LAB_004a6c61:
    FUN_004b7f97(fVar2);
                    /* WARNING: Subroutine does not return */
    operator_delete(pvStack_14);
  case 3.78351e-44:
    FUN_004b8005(&fStack_8);
    if (*(int *)(param_1 + 0xac) == 0) {
      if (fStack_8 != -4.656613e-10) {
        pcVar4 = "illegal register in index expression";
        goto LAB_004a6f26;
      }
    }
    else {
      pcVar4 = "syntax error";
LAB_004a6f26:
      FUN_004a5396(param_1,pcVar4);
    }
    fVar2 = 1.14794e-41;
    break;
  case 3.92364e-44:
    FUN_004b8005(&fStack_8);
    fVar2 = fStack_8;
    if (((uint)fStack_8 & 0xffffe000) != 0) {
      FUN_004a5396(param_1,"illegal register number");
      fVar2 = fStack_8;
    }
    break;
  case 4.06377e-44:
    FUN_004b8005(&param_2);
    FUN_004b8005(&fStack_8);
    if (*(int *)(param_1 + 0xac) == 0) {
      if (fStack_8 != -4.656613e-10) {
        pcVar4 = "illegal register in index expression";
        goto LAB_004a6faf;
      }
      if (((uint)param_2 & 0x2000) != 0) {
        pcVar4 = "a0.x can only appear once in an index expression";
        goto LAB_004a6faf;
      }
    }
    else {
      pcVar4 = "syntax error";
LAB_004a6faf:
      FUN_004a5396(param_1,pcVar4);
    }
    fVar2 = (float)((uint)param_2 | 0x2000);
    break;
  case 4.2039e-44:
    FUN_004b8005(&fStack_8);
    FUN_004b8005(&param_2);
    if ((((uint)param_2 & 0x1fff) + (int)fStack_8 & 0xffffe000) != 0) {
      FUN_004a5396(param_1,"illegal register number");
    }
    fVar2 = (float)(((int)fStack_8 + (int)param_2 ^ (uint)param_2) & 0x1fff ^ (uint)param_2);
    break;
  case 4.34403e-44:
LAB_004a6957:
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x1d0);
    goto LAB_004a7107;
  case 4.48416e-44:
  case 4.76441e-44:
  case 5.04467e-44:
  case 5.32493e-44:
  case 5.60519e-44:
    uVar1 = *(uint *)(param_1 + 0x1c8);
    goto LAB_004a7016;
  case 4.62428e-44:
  case 4.90454e-44:
  case 5.1848e-44:
  case 5.46506e-44:
  case 5.74532e-44:
    if (*(int *)(param_1 + 0xac) == 0) {
      FUN_004a5396(param_1,"coissue not supported in vertex shaders");
    }
    uVar1 = *(uint *)(param_1 + 0x1c8) | 0x40000000;
LAB_004a7016:
    FUN_004b7f97(uVar1);
    FUN_004b7f97(*(undefined4 *)(param_1 + 0x1cc));
    FUN_004a624d();
    goto LAB_004a7107;
  case 5.88545e-44:
  case 6.02558e-44:
    FUN_004b8005(&fStack_8);
    fVar2 = (float)(int)fStack_8;
    fStack_18 = fVar2;
    if ((int)fStack_8 < 0) {
      fVar2 = fVar2 + _DAT_00582b04;
      fStack_18 = fVar2;
    }
    break;
  case 6.16571e-44:
    FUN_004b8005(&fStack_8);
    fVar2 = (float)(int)fStack_8;
    if ((int)fStack_8 < 0) {
      fVar2 = fVar2 + _DAT_00582b04;
    }
    fVar2 = -fVar2;
    fStack_18 = fVar2;
    break;
  case 6.5861e-44:
    FUN_004b8005(&fStack_18);
    fVar2 = -fStack_18;
    fStack_18 = -fStack_18;
    break;
  case 6.72623e-44:
    FUN_004b807d(param_1 + 200);
    fVar2 = *(float *)(param_1 + 0x1d0);
    break;
  case 6.86636e-44:
    fVar2 = (float)atoi((char *)(param_1 + 200));
    break;
  case 7.00649e-44:
    sscanf((char *)(param_1 + 200),"%f",&fStack_18);
    fVar2 = fStack_18;
    break;
  default:
    goto LAB_004a7108;
  }
  FUN_004b7f97(fVar2);
LAB_004a7107:
LAB_004a7108:
  iVar3 = FUN_004b8130();
  if (((iVar3 < 0) || (iVar3 = FUN_004b8130(), iVar3 < 0)) ||
     ((iVar3 = FUN_004b8130(), iVar3 < 0 ||
      (((iVar3 = FUN_004b8130(), iVar3 < 0 || (iVar3 = FUN_004b8130(), iVar3 < 0)) ||
       (iVar3 = FUN_004b8130(), iVar3 < 0)))))) {
    FUN_004a5396(param_1,"Internal assembler error! %d",0x3bb);
  }
  return;
}




/* Function: FUN_004a76cc */

uint FUN_004a76cc(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  LSTATUS LVar9;
  HMODULE hModule;
  FARPROC pFVar10;
  HANDLE hHeap;
  int extraout_ECX;
  int iVar11;
  int unaff_EBP;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  bool bVar15;
  DWORD dwFlags;
  LPVOID lpMem;
  
  FUN_004cf66c();
  if (*(undefined4 **)(unaff_EBP + 0x1c) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x1c) = 0;
  }
  if (*(undefined4 **)(unaff_EBP + 0x20) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x20) = 0;
  }
  if (*(undefined4 **)(unaff_EBP + 0x24) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x24) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  if ((iVar2 == 0) || (iVar5 = *(int *)(unaff_EBP + 0xc), iVar5 == 0)) {
    uVar7 = 0x8876086c;
    goto LAB_004a7b7e;
  }
  *(int *)(extraout_ECX + 0xb8) = iVar2;
  *(int *)(extraout_ECX + 0xbc) = iVar2;
  *(int *)(extraout_ECX + 0xc0) = iVar2;
  *(int *)(extraout_ECX + 0xc4) = iVar2 + iVar5;
  iVar2 = *(int *)(unaff_EBP + 0x14);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  *(int *)(extraout_ECX + 0x1d0) = iVar2;
  *(uint *)(extraout_ECX + 0xb0) = *(uint *)(unaff_EBP + 0x18) & 1;
  pcVar3 = *(char **)(unaff_EBP + 0x10);
  *(undefined4 *)(extraout_ECX + 0x3d8) = 0;
  *(undefined4 *)(extraout_ECX + 0x3dc) = 0;
  *(undefined4 *)(extraout_ECX + 0x3e0) = 0;
  *(undefined4 *)(extraout_ECX + 0x3e4) = 0;
  *(undefined4 *)(extraout_ECX + 0xac) = 0;
  *(undefined4 *)(extraout_ECX + 0xb4) = 0;
  if (pcVar3 == (char *)0x0) {
    *(undefined1 *)(extraout_ECX + 0x1d4) = 0;
    FUN_004a6177();
  }
  else {
    iVar2 = (extraout_ECX + 0x1d4) - (int)pcVar3;
    do {
      cVar1 = *pcVar3;
      pcVar3[iVar2] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  *(undefined1 *)(extraout_ECX + 0x2d8) = 0;
  *(undefined4 *)(extraout_ECX + 0x2d4) = 0;
  pcVar3 = setlocale(4,(char *)0x0);
  pcVar3 = _strdup(pcVar3);
  *(char **)(unaff_EBP + 8) = pcVar3;
  if (pcVar3 == (char *)0x0) {
LAB_004a77cb:
    setlocale(4,"C");
  }
  else {
    iVar2 = 2;
    bVar15 = true;
    pcVar13 = "C";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar15 = *pcVar3 == *pcVar13;
      pcVar3 = pcVar3 + 1;
      pcVar13 = pcVar13 + 1;
    } while (bVar15);
    if (!bVar15) goto LAB_004a77cb;
  }
  iVar2 = FUN_004a7213();
  if (iVar2 != 0) {
    *(undefined4 *)(extraout_ECX + 0x98) = 1;
  }
  if (*(int *)(unaff_EBP + 8) != 0) {
    iVar2 = 2;
    bVar15 = true;
    pcVar3 = *(char **)(unaff_EBP + 8);
    pcVar13 = "C";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar15 = *pcVar3 == *pcVar13;
      pcVar3 = pcVar3 + 1;
      pcVar13 = pcVar13 + 1;
    } while (bVar15);
    if (!bVar15) {
      setlocale(4,*(char **)(unaff_EBP + 8));
    }
    free(*(void **)(unaff_EBP + 8));
  }
  if (*(int *)(extraout_ECX + 0x98) != 0) goto LAB_004a7b49;
  if ((*(int *)(unaff_EBP + 0x1c) != 0) && (*(int *)(extraout_ECX + 0xac) == 0)) {
    iVar2 = FUN_00493c27(0x10);
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_004b82ff();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar4 != (int *)0x0) {
      iVar5 = (**(code **)(*piVar4 + 0x18))(*(undefined4 *)(extraout_ECX + 0x9c));
      *(int *)(unaff_EBP + 8) = iVar5;
      iVar2 = *piVar4;
      if (-1 < iVar5) {
        uVar6 = (**(code **)(iVar2 + 0xc))(piVar4);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
        while (*(int *)(extraout_ECX + 0x9c) != 0) {
          *(int *)(extraout_ECX + 0x9c) = *(int *)(extraout_ECX + 0x9c) + -4;
          FUN_004b8005(*(int *)(extraout_ECX + 0x9c) + *(int *)(unaff_EBP + 0xc));
        }
        **(undefined4 **)(unaff_EBP + 0x1c) = piVar4;
        goto LAB_004a78b5;
      }
LAB_004a793e:
      (**(code **)(iVar2 + 0x14))(1);
    }
LAB_004a7941:
    uVar7 = 0x8007000e;
    goto LAB_004a7b7e;
  }
LAB_004a78b5:
  if (*(int *)(extraout_ECX + 0x98) == 0) {
    if (*(int *)(unaff_EBP + 0x20) != 0) {
      iVar2 = *(int *)(extraout_ECX + 0xa0);
      *(int *)(unaff_EBP + 0xc) = iVar2;
      iVar2 = iVar2 + 0x30;
      iVar5 = *(int *)(extraout_ECX + 0xac);
      pcVar3 = "D3DX8 Shader Assembler Version 0.91";
      puVar12 = (undefined4 *)(unaff_EBP + -0x30);
      for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar12 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        puVar12 = puVar12 + 1;
      }
      *(int *)(unaff_EBP + 0x1c) = iVar2;
      if (iVar5 != 0) {
        *(int *)(unaff_EBP + 0x1c) = iVar2 + *(int *)(extraout_ECX + 0x9c);
      }
      iVar2 = FUN_00493c27(0x10);
      *(int *)(unaff_EBP + 8) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar2 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_004b82ff();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(int **)(unaff_EBP + 0x14) = piVar4;
      *(int **)(unaff_EBP + 0x10) = piVar4;
      if (piVar4 == (int *)0x0) goto LAB_004a7941;
      iVar2 = (**(code **)(*piVar4 + 0x18))(*(undefined4 *)(unaff_EBP + 0x1c));
      *(int *)(unaff_EBP + 8) = iVar2;
      if (iVar2 < 0) {
        iVar2 = *piVar4;
        goto LAB_004a793e;
      }
      puVar8 = (undefined4 *)
               (**(code **)(**(int **)(unaff_EBP + 0x14) + 0xc))(*(int **)(unaff_EBP + 0x14));
      *puVar8 = *(undefined4 *)(extraout_ECX + 0xb4);
      puVar8[1] = 0x9fffe;
      puVar12 = puVar8 + 2;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      iVar5 = *(int *)(unaff_EBP + 0x1c);
      iVar2 = *(int *)(unaff_EBP + 0xc);
      puVar12 = (undefined4 *)(unaff_EBP + -0x30);
      puVar14 = puVar8 + 2;
      for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      *(undefined4 *)((int)puVar8 + iVar5 + -4) = 0xffff;
      iVar5 = (int)puVar8 + iVar5 + -8;
      while (iVar2 != 0) {
        FUN_004b8005(iVar5);
        iVar5 = iVar5 + -4;
        piVar4 = (int *)(unaff_EBP + 0xc);
        *piVar4 = *piVar4 + -4;
        iVar2 = *piVar4;
      }
      if (*(int *)(extraout_ECX + 0xac) != 0) {
        piVar4 = (int *)(extraout_ECX + 0x9c);
        while (*piVar4 != 0) {
          FUN_004b8005(iVar5);
          iVar5 = iVar5 + -4;
          *piVar4 = *piVar4 + -4;
        }
      }
      **(undefined4 **)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + 0x14);
    }
    if ((*(int *)(extraout_ECX + 0x98) == 0) && ((*(byte *)(unaff_EBP + 0x18) & 2) == 0)) {
      if (*(int *)(extraout_ECX + 0xa0) == 0) {
        FUN_004a5396(extraout_ECX,"statement expected");
      }
      else {
        bVar15 = false;
        LVar9 = RegOpenKeyA((HKEY)0x80000002,"SOFTWARE\\Microsoft\\Direct3D",
                            (PHKEY)(unaff_EBP + 0x20));
        if (LVar9 == 0) {
          *(undefined4 *)(unaff_EBP + 0x1c) = 4;
          LVar9 = RegQueryValueExA(*(HKEY *)(unaff_EBP + 0x20),"LoadDebugRuntime",(LPDWORD)0x0,
                                   (LPDWORD)(unaff_EBP + 0x18),(LPBYTE)(unaff_EBP + 0xc),
                                   (LPDWORD)(unaff_EBP + 0x1c));
          if (((LVar9 == 0) && (*(int *)(unaff_EBP + 0x18) == 4)) &&
             (*(int *)(unaff_EBP + 0x1c) == 4)) {
            bVar15 = *(int *)(unaff_EBP + 0xc) != 0;
          }
          RegCloseKey(*(HKEY *)(unaff_EBP + 0x20));
          if ((!bVar15) ||
             ((hModule = GetModuleHandleA("d3d8d.dll"), hModule == (HMODULE)0x0 &&
              (hModule = LoadLibraryA("d3d8d.dll"), hModule == (HMODULE)0x0)))) goto LAB_004a7a70;
        }
        else {
LAB_004a7a70:
          hModule = GetModuleHandleA("d3d8.dll");
          if ((hModule == (HMODULE)0x0) &&
             (hModule = LoadLibraryA("d3d8.dll"), hModule == (HMODULE)0x0)) goto LAB_004a7b49;
        }
        uVar7 = -(uint)(*(int *)(unaff_EBP + 0x24) != 0) & unaff_EBP + 0x1cU;
        *(undefined4 *)(unaff_EBP + 0x1c) = 0;
        iVar2 = *(int *)(extraout_ECX + 0xac);
        *(uint *)(unaff_EBP + 0x18) = (uint)(*(int *)(unaff_EBP + 0x24) != 0);
        if (iVar2 == 0) {
          pFVar10 = GetProcAddress(hModule,"ValidateVertexShader");
          *(FARPROC *)(unaff_EBP + 0xc) = pFVar10;
          if (pFVar10 != (FARPROC)0x0) {
            uVar6 = (**(code **)(**(int **)(unaff_EBP + 0x10) + 0xc))
                              (*(int **)(unaff_EBP + 0x10),0,0,*(undefined4 *)(unaff_EBP + 0x18),
                               uVar7);
            uVar6 = (**(code **)(unaff_EBP + 0xc))(uVar6);
            goto LAB_004a7afe;
          }
        }
        else {
          pFVar10 = GetProcAddress(hModule,"ValidatePixelShader");
          *(FARPROC *)(unaff_EBP + 0xc) = pFVar10;
          if (pFVar10 != (FARPROC)0x0) {
            uVar6 = (**(code **)(**(int **)(unaff_EBP + 0x10) + 0xc))
                              (*(int **)(unaff_EBP + 0x10),0,*(undefined4 *)(unaff_EBP + 0x18),uVar7
                              );
            uVar6 = (**(code **)(unaff_EBP + 0xc))(uVar6);
LAB_004a7afe:
            *(undefined4 *)(unaff_EBP + 8) = uVar6;
          }
        }
        if (*(int *)(unaff_EBP + 8) < 0) {
          *(undefined4 *)(extraout_ECX + 0x98) = 1;
        }
        if (*(int *)(unaff_EBP + 0x1c) != 0) {
          FUN_004b807d(*(undefined4 *)(unaff_EBP + 0x1c));
          lpMem = *(LPVOID *)(unaff_EBP + 0x1c);
          *(int *)(extraout_ECX + 0xa4) = *(int *)(extraout_ECX + 0xa4) + 1;
          dwFlags = 0;
          hHeap = GetProcessHeap();
          HeapFree(hHeap,dwFlags,lpMem);
        }
      }
    }
  }
LAB_004a7b49:
  if (((*(int *)(extraout_ECX + 0xa4) == 0) || (*(int *)(unaff_EBP + 0x24) == 0)) ||
     (uVar7 = FUN_004b8138(*(undefined4 *)(unaff_EBP + 0x24)), -1 < (int)uVar7)) {
    uVar7 = -(uint)(*(int *)(extraout_ECX + 0x98) != 0) & 0x88760b59;
  }
LAB_004a7b7e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar7;
}




/* Function: FUN_004a7b8f */

undefined4 FUN_004a7b8f(DWORD param_1,LPCSTR param_2,LPBYTE param_3)

{
  LSTATUS LVar1;
  DWORD local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  LVar1 = RegOpenKeyA((HKEY)0x80000002,"Software\\Microsoft\\Direct3D",&local_8);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_8,param_2,(LPDWORD)0x0,&local_c,param_3,(LPDWORD)&stack0x00000010
                            );
    RegCloseKey(local_8);
    if ((LVar1 == 0) && (local_c == param_1)) {
      return 1;
    }
  }
  return 0;
}




/* Function: FUN_004a7c10 */

int FUN_004a7c10(void)

{
  LSTATUS LVar1;
  int iVar2;
  int local_14;
  DWORD local_10 [2];
  HKEY local_8;
  
  LVar1 = RegOpenKeyA((HKEY)0x80000002,"Software\\Microsoft\\Direct3D",&local_8);
  if (LVar1 == 0) {
    local_10[1] = 4;
    LVar1 = RegQueryValueExA(local_8,"DisableMMX",(LPDWORD)0x0,local_10,(LPBYTE)&local_14,
                             local_10 + 1);
    if (((LVar1 == 0) && (local_10[0] == 4)) && (local_14 != 0)) {
      RegCloseKey(local_8);
      DAT_005ada10 = 0;
      return 0;
    }
    RegCloseKey(local_8);
  }
  if (DAT_005ada10 < 0) {
    DAT_005ada10 = 0;
    iVar2 = FUN_004a7beb();
    if (iVar2 != 0) {
      DAT_005ada10 = 1;
    }
  }
  return DAT_005ada10;
}




/* Function: FUN_004a7e3a */

int FUN_004a7e3a(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  if (param_1 == 0) {
    DAT_005ada14 = 0xffff;
    ppuVar2 = &PTR_FUN_005a2688;
    ppuVar3 = &PTR_LAB_005a25a0;
    for (iVar1 = 0x39; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppuVar3 = *ppuVar2;
      ppuVar2 = ppuVar2 + 1;
      ppuVar3 = ppuVar3 + 1;
    }
  }
  else if (DAT_005ada14 == 0xffff) {
    DAT_005ada14 = 0;
    ppuVar2 = &PTR_FUN_005a2688;
    ppuVar3 = &PTR_LAB_005a25a0;
    for (iVar1 = 0x39; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppuVar3 = *ppuVar2;
      ppuVar2 = ppuVar2 + 1;
      ppuVar3 = ppuVar3 + 1;
    }
    FUN_004b8c97(&PTR_LAB_005a25a0);
    iVar1 = FUN_004a7b8f(4,"DisableD3DXPSGP",&param_1,4);
    if (iVar1 == 0) {
      param_1 = 0;
    }
    if (param_1 != 1) {
      iVar1 = FUN_004a7d86(7);
      if (iVar1 == 0) {
        iVar1 = FUN_004a7d86(10);
        if (iVar1 == 0) {
          iVar1 = FUN_004a7d86(6);
          if (iVar1 != 0) {
            FUN_004b8320(&PTR_LAB_005a25a0);
            DAT_005ada14 = 3;
          }
        }
        else {
          FUN_004b8430(&PTR_LAB_005a25a0);
          DAT_005ada14 = 2;
        }
      }
      else {
        FUN_004b8615(&PTR_LAB_005a25a0);
        DAT_005ada14 = 1;
      }
    }
  }
  return DAT_005ada14;
}




/* Function: FUN_004ac0c3 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_004ac0c3(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  char acStack_130 [236];
  undefined4 uStack_44;
  size_t local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  undefined4 *local_10;
  uint local_c;
  int local_8;
  
  local_10 = (undefined4 *)0x0;
  local_8 = 0;
  if ((param_5 == 0) || (*(int *)(param_1 + 0x50) == 0)) {
    iVar8 = FUN_004a8b7c();
    if (iVar8 < 0) goto LAB_004ac3f6;
    uStack_44 = 0x4ac158;
    qsort((void *)0x0,local_24,4,(_PtFuncCompare *)&LAB_004a81d5);
  }
  else {
    local_24 = *(uint *)(param_1 + 0x54);
    local_8 = FUN_00493c27();
    if (local_8 == 0) goto LAB_004ac3f6;
    uVar4 = 0;
    if (local_24 != 0) {
      iVar8 = 0;
      do {
        *(undefined4 *)(local_8 + uVar4 * 4) = *(undefined4 *)(iVar8 + *(int *)(param_1 + 0x50));
        uVar4 = uVar4 + 1;
        iVar8 = iVar8 + 0x14;
      } while (uVar4 < local_24);
    }
  }
  local_10 = (undefined4 *)FUN_00493c27();
  puVar7 = local_10;
  uVar4 = local_24;
  if (local_10 != (undefined4 *)0x0) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7[2] = 0;
      puVar7 = puVar7 + 4;
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      do {
        *(undefined4 *)(param_4 + uVar4 * 4) = 0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x30));
    }
    local_18 = 0;
    local_1c = 0;
    if (local_24 != 0) {
      do {
        if (*(int *)(local_8 + local_18 * 4) == 0) break;
        local_18 = local_18 + 1;
      } while (local_18 < local_24);
    }
    local_c = 0;
    if (*(int *)(param_1 + 0x58) != 0) {
      do {
        iVar8 = *(int *)(param_3 + local_c * 4);
        if (iVar8 != -1) {
          iVar5 = *(int *)(*(int *)(param_1 + 0x48) + iVar8 * 4);
          if ((iVar5 != local_1c) && (local_18 = 0, local_1c = iVar5, local_24 != 0)) {
            do {
              if (*(int *)(local_8 + local_18 * 4) == iVar5) break;
              local_18 = local_18 + 1;
            } while (local_18 < local_24);
          }
          iVar8 = iVar8 * 0xc;
          local_20 = 3;
          do {
            puVar1 = (uint *)(param_4 + *(int *)(iVar8 + *(int *)(param_1 + 0x40)) * 4);
            if (*puVar1 == 0xffffffff) {
              *puVar1 = local_18;
              local_10[local_18 * 4 + 2] = local_10[local_18 * 4 + 2] + 1;
            }
            iVar8 = iVar8 + 4;
            local_20 = local_20 + -1;
          } while (local_20 != 0);
          local_10[local_18 * 4] = local_10[local_18 * 4] + 1;
        }
        local_c = local_c + 1;
      } while (local_c < *(uint *)(param_1 + 0x58));
    }
    iVar8 = *(int *)(param_1 + 0x50);
    *(size_t *)(param_1 + 0x54) = local_24;
    iVar5 = FUN_00493c27();
    *(int *)(param_1 + 0x50) = iVar5;
    if (iVar5 != 0) {
      local_18 = 0;
      local_c = 0;
      local_1c = 0;
      uVar4 = 0;
      if (local_24 != 0) {
        piVar6 = local_10 + 2;
        iVar5 = 0;
        do {
          piVar6[-1] = local_18;
          *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x50)) =
               *(undefined4 *)(local_8 + local_1c * 4);
          *(uint *)(iVar5 + 4 + *(int *)(param_1 + 0x50)) = local_18;
          *(int *)(iVar5 + 8 + *(int *)(param_1 + 0x50)) = piVar6[-2];
          local_18 = local_18 + piVar6[-2];
          piVar6[1] = local_c;
          *(uint *)(iVar5 + 0xc + *(int *)(param_1 + 0x50)) = local_c;
          *(int *)(iVar5 + 0x10 + *(int *)(param_1 + 0x50)) = *piVar6;
          local_c = local_c + *piVar6;
          local_1c = local_1c + 1;
          piVar6 = piVar6 + 4;
          iVar5 = iVar5 + 0x14;
          uVar4 = local_24;
        } while (local_1c < local_24);
      }
      if (((param_5 != 0) && (iVar8 != 0)) && (uVar4 != 0)) {
        iVar5 = 0;
        puVar7 = (undefined4 *)(iVar8 + 0x10);
        local_24 = uVar4;
        do {
          *(undefined4 *)(*(int *)(param_1 + 0x50) + 0xc + iVar5) = puVar7[-1];
          *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x10 + iVar5) = *puVar7;
          iVar5 = iVar5 + 0x14;
          puVar7 = puVar7 + 5;
          local_24 = local_24 - 1;
        } while (local_24 != 0);
      }
      local_18 = 0;
      local_1c = 0;
      if (uVar4 != 0) {
        do {
          if (*(int *)(local_8 + local_18 * 4) == 0) break;
          local_18 = local_18 + 1;
        } while (local_18 < uVar4);
      }
      local_c = 0;
      if (*(int *)(param_1 + 0x58) != 0) {
        do {
          iVar8 = *(int *)(param_3 + local_c * 4);
          if (iVar8 != -1) {
            iVar8 = iVar8 * 4;
            iVar5 = *(int *)(iVar8 + *(int *)(param_1 + 0x48));
            if ((iVar5 != local_1c) && (local_18 = 0, local_1c = iVar5, uVar4 != 0)) {
              do {
                if (*(int *)(local_8 + local_18 * 4) == iVar5) break;
                local_18 = local_18 + 1;
              } while (local_18 < uVar4);
            }
            piVar6 = local_10 + local_18 * 4 + 1;
            *(int *)(iVar8 + param_2) = *piVar6;
            *piVar6 = *piVar6 + 1;
          }
          local_c = local_c + 1;
        } while (local_c < *(uint *)(param_1 + 0x58));
      }
      if (param_5 == 0) {
        uVar4 = 0;
        if (*(int *)(param_1 + 0x30) != 0) {
          do {
            piVar6 = (int *)(param_4 + uVar4 * 4);
            iVar8 = *piVar6;
            if (iVar8 != -1) {
              piVar2 = local_10 + iVar8 * 4 + 3;
              *piVar6 = *piVar2;
              *piVar2 = *piVar2 + 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_1 + 0x30));
        }
      }
      else {
        uVar4 = 0;
        if (*(int *)(param_1 + 0x30) != 0) {
          do {
            puVar1 = (uint *)(param_4 + uVar4 * 4);
            uVar3 = *puVar1;
            if (uVar3 != 0xffffffff) {
              iVar8 = *(int *)(param_1 + 0x50) + uVar3 * 0x14;
              uVar3 = *(uint *)(iVar8 + 0xc);
              if ((uVar4 < uVar3) || (*(int *)(iVar8 + 0x10) + uVar3 <= uVar4)) {
                sprintf(acStack_130,
                        "ID3DXMeshOptimize: Cannot do AttributeSort because %d vertex needs to be moved and either IgnoreVerts or ShareVB is set\n"
                        ,uVar4);
                goto LAB_004ac3f6;
              }
              *puVar1 = uVar4;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_1 + 0x30));
        }
      }
      uVar4 = 0;
      if (*(int *)(param_1 + 0x58) != 0) {
        do {
          *(undefined4 *)(param_3 + uVar4 * 4) = 0xffffffff;
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x58));
      }
      uVar4 = 0;
      if (*(int *)(param_1 + 0x58) != 0) {
        do {
          iVar8 = *(int *)(param_2 + uVar4 * 4);
          if (iVar8 != -1) {
            *(uint *)(param_3 + iVar8 * 4) = uVar4;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x58));
      }
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10;
    }
  }
LAB_004ac3f6:
                    /* WARNING: Subroutine does not return */
  operator_delete(local_10);
}




/* Function: FUN_004ac8ef */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_004ac8ef(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  char acStack_130 [236];
  undefined4 uStack_44;
  size_t local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_10;
  undefined4 *local_c;
  int local_8;
  
  local_c = (undefined4 *)0x0;
  local_8 = 0;
  if ((param_5 == 0) || (*(int *)(param_1 + 0x50) == 0)) {
    iVar9 = FUN_004a8e12();
    if (iVar9 < 0) goto LAB_004acc44;
    uStack_44 = 0x4ac984;
    qsort((void *)0x0,local_24,4,(_PtFuncCompare *)&LAB_004a81d5);
  }
  else {
    local_24 = *(uint *)(param_1 + 0x54);
    local_8 = FUN_00493c27();
    if (local_8 == 0) goto LAB_004acc44;
    uVar4 = 0;
    if (local_24 != 0) {
      iVar9 = 0;
      do {
        *(undefined4 *)(local_8 + uVar4 * 4) = *(undefined4 *)(iVar9 + *(int *)(param_1 + 0x50));
        uVar4 = uVar4 + 1;
        iVar9 = iVar9 + 0x14;
      } while (uVar4 < local_24);
    }
  }
  local_c = (undefined4 *)FUN_00493c27();
  puVar7 = local_c;
  uVar4 = local_24;
  if (local_c != (undefined4 *)0x0) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7[2] = 0;
      puVar7 = puVar7 + 4;
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      do {
        *(undefined4 *)(param_4 + uVar4 * 4) = 0xffff;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x30));
    }
    local_18 = 0;
    local_1c = 0;
    if (local_24 != 0) {
      do {
        if (*(int *)(local_8 + local_18 * 4) == 0) break;
        local_18 = local_18 + 1;
      } while (local_18 < local_24);
    }
    local_10 = 0;
    if (*(int *)(param_1 + 0x58) != 0) {
      uVar4 = 0;
      do {
        uVar3 = *(ushort *)(param_3 + uVar4 * 4);
        if (uVar3 != 0xffff) {
          iVar9 = *(int *)(*(int *)(param_1 + 0x48) + (uint)uVar3 * 4);
          if ((iVar9 != local_1c) && (local_18 = 0, local_1c = iVar9, local_24 != 0)) {
            do {
              if (*(int *)(local_8 + local_18 * 4) == iVar9) break;
              local_18 = local_18 + 1;
            } while (local_18 < local_24);
          }
          iVar9 = (uint)uVar3 * 6;
          local_20 = 3;
          do {
            puVar1 = (uint *)(param_4 + (uint)*(ushort *)(iVar9 + *(int *)(param_1 + 0x40)) * 4);
            if (*puVar1 == 0xffff) {
              *puVar1 = local_18;
              local_c[local_18 * 4 + 2] = local_c[local_18 * 4 + 2] + 1;
            }
            iVar9 = iVar9 + 2;
            local_20 = local_20 + -1;
          } while (local_20 != 0);
          local_c[local_18 * 4] = local_c[local_18 * 4] + 1;
        }
        local_10 = local_10 + 1;
        uVar4 = local_10 & 0xffff;
      } while (uVar4 < *(uint *)(param_1 + 0x58));
    }
    iVar9 = *(int *)(param_1 + 0x50);
    *(size_t *)(param_1 + 0x54) = local_24;
    iVar5 = FUN_00493c27();
    *(int *)(param_1 + 0x50) = iVar5;
    if (iVar5 != 0) {
      local_18 = 0;
      local_10 = 0;
      local_1c = 0;
      uVar4 = 0;
      if (local_24 != 0) {
        piVar6 = local_c + 2;
        iVar5 = 0;
        do {
          piVar6[-1] = local_18;
          *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x50)) =
               *(undefined4 *)(local_8 + local_1c * 4);
          *(uint *)(iVar5 + 4 + *(int *)(param_1 + 0x50)) = local_18;
          *(int *)(iVar5 + 8 + *(int *)(param_1 + 0x50)) = piVar6[-2];
          local_18 = local_18 + piVar6[-2];
          piVar6[1] = local_10;
          *(uint *)(iVar5 + 0xc + *(int *)(param_1 + 0x50)) = local_10;
          *(int *)(iVar5 + 0x10 + *(int *)(param_1 + 0x50)) = *piVar6;
          local_10 = local_10 + *piVar6;
          local_1c = local_1c + 1;
          piVar6 = piVar6 + 4;
          iVar5 = iVar5 + 0x14;
          uVar4 = local_24;
        } while (local_1c < local_24);
      }
      if (((param_5 != 0) && (iVar9 != 0)) && (uVar4 != 0)) {
        iVar5 = 0;
        puVar7 = (undefined4 *)(iVar9 + 0x10);
        local_24 = uVar4;
        do {
          *(undefined4 *)(*(int *)(param_1 + 0x50) + 0xc + iVar5) = puVar7[-1];
          *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x10 + iVar5) = *puVar7;
          iVar5 = iVar5 + 0x14;
          puVar7 = puVar7 + 5;
          local_24 = local_24 - 1;
        } while (local_24 != 0);
      }
      local_18 = 0;
      local_1c = 0;
      if (uVar4 != 0) {
        do {
          if (*(int *)(local_8 + local_18 * 4) == 0) break;
          local_18 = local_18 + 1;
        } while (local_18 < uVar4);
      }
      local_10 = 0;
      if (*(int *)(param_1 + 0x58) != 0) {
        uVar8 = 0;
        do {
          uVar3 = *(ushort *)(param_3 + uVar8 * 4);
          if (uVar3 != 0xffff) {
            iVar5 = (uint)uVar3 * 4;
            iVar9 = *(int *)(iVar5 + *(int *)(param_1 + 0x48));
            if ((iVar9 != local_1c) && (local_18 = 0, local_1c = iVar9, uVar4 != 0)) {
              do {
                if (*(int *)(local_8 + local_18 * 4) == iVar9) break;
                local_18 = local_18 + 1;
              } while (local_18 < uVar4);
            }
            piVar6 = local_c + local_18 * 4 + 1;
            *(int *)(iVar5 + param_2) = *piVar6;
            *piVar6 = *piVar6 + 1;
          }
          local_10 = local_10 + 1;
          uVar8 = local_10 & 0xffff;
        } while (uVar8 < *(uint *)(param_1 + 0x58));
      }
      if (param_5 == 0) {
        uVar4 = 0;
        if (*(int *)(param_1 + 0x30) != 0) {
          do {
            piVar6 = (int *)(param_4 + uVar4 * 4);
            iVar9 = *piVar6;
            if (iVar9 != 0xffff) {
              piVar2 = local_c + iVar9 * 4 + 3;
              *piVar6 = *piVar2;
              *piVar2 = *piVar2 + 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_1 + 0x30));
        }
      }
      else {
        uVar4 = 0;
        if (*(int *)(param_1 + 0x30) != 0) {
          do {
            puVar1 = (uint *)(param_4 + uVar4 * 4);
            uVar8 = *puVar1;
            if (uVar8 != 0xffff) {
              iVar9 = *(int *)(param_1 + 0x50) + uVar8 * 0x14;
              uVar8 = *(uint *)(iVar9 + 0xc);
              if ((uVar4 < uVar8) || (*(int *)(iVar9 + 0x10) + uVar8 <= uVar4)) {
                sprintf(acStack_130,
                        "ID3DXMeshOptimize: Cannot do AttributeSort because %d vertex needs to be moved and either IgnoreVerts or ShareVB is set\n"
                        ,uVar4);
                goto LAB_004acc44;
              }
              *puVar1 = uVar4;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_1 + 0x30));
        }
      }
      uVar4 = 0;
      if (*(int *)(param_1 + 0x58) != 0) {
        uVar8 = 0;
        do {
          uVar4 = uVar4 + 1;
          *(undefined4 *)(param_3 + uVar8 * 4) = 0xffff;
          uVar8 = uVar4 & 0xffff;
        } while (uVar8 < *(uint *)(param_1 + 0x58));
      }
      uVar4 = 0;
      if (*(int *)(param_1 + 0x58) != 0) {
        uVar8 = 0;
        do {
          uVar3 = *(ushort *)(param_2 + uVar8 * 4);
          if (uVar3 != 0xffff) {
            *(uint *)(param_3 + (uint)uVar3 * 4) = uVar8;
          }
          uVar4 = uVar4 + 1;
          uVar8 = uVar4 & 0xffff;
        } while (uVar8 < *(uint *)(param_1 + 0x58));
      }
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10;
    }
  }
LAB_004acc44:
                    /* WARNING: Subroutine does not return */
  operator_delete(local_c);
}




/* Function: FUN_004b8430 */

void FUN_004b8430(undefined4 *param_1)

{
  param_1[0x1c] = &LAB_004bdd50;
  *param_1 = FUN_004bbd50;
  param_1[0xd] = &LAB_004bdad0;
  param_1[0x1b] = &LAB_004bdbc0;
  param_1[0xb] = &LAB_004bda00;
  param_1[0x30] = &LAB_004bc970;
  param_1[0x2f] = &LAB_004bc590;
  param_1[0x11] = &LAB_004bc830;
  param_1[0x36] = &LAB_004bc920;
  param_1[0x35] = &LAB_004bc620;
  param_1[0x34] = &LAB_004bc790;
  param_1[0x33] = &LAB_004bc8c0;
  param_1[0x32] = &LAB_004bc4d0;
  param_1[0x31] = &LAB_004bc6d0;
  param_1[0x12] = &LAB_004bd580;
  param_1[0x16] = &LAB_004bc9d0;
  param_1[0x19] = &LAB_004bdf50;
  param_1[0x18] = &LAB_004bde30;
  param_1[0x1f] = &LAB_004bd970;
  param_1[0x1e] = &LAB_004bd8f0;
  param_1[0x13] = &LAB_004bcdf0;
  param_1[0x14] = &LAB_004bce80;
  param_1[0x10] = &LAB_004bd840;
  param_1[0x15] = &LAB_004bd4a0;
  param_1[8] = &LAB_004bc430;
  param_1[7] = &LAB_004bd3d0;
  param_1[10] = &LAB_004bd180;
  param_1[9] = FUN_004bbd90;
  param_1[6] = &LAB_004bbe30;
  param_1[5] = &LAB_004bbdf0;
  param_1[4] = &LAB_004bc220;
  param_1[3] = &LAB_004bd280;
  param_1[2] = &LAB_004bbfb0;
  param_1[1] = &LAB_004bbef0;
  return;
}




/* Function: FUN_004d3de0 */

void FUN_004d3de0(undefined4 param_1)

{
  undefined4 *puVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057de19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"felony");
  local_4 = 0;
  puVar1 = (undefined4 *)FUN_00457170(local_28);
  *puVar1 = param_1;
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004d3e50 */

undefined4 * __fastcall FUN_004d3e50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057de54;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053eae0();
  local_4 = 0;
  *param_1 = &PTR_LAB_0058f968;
  FUN_00530860();
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  local_4._0_1_ = 1;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 0xfc,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
  FUN_00407310(0x3f800000);
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0xba] = 0;
  *(undefined1 *)((int)param_1 + 0x3df) = 0;
  param_1[0xab] = 0;
  *(undefined1 *)((int)param_1 + 0x3c1) = 1;
  param_1[0x10c] = 0;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  param_1[0xcd] = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x3b9) = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  *(undefined1 *)(param_1 + 0xee) = 1;
  *(undefined1 *)((int)param_1 + 0x3de) = 0;
  *(undefined1 *)((int)param_1 + 0x32d) = 0;
  param_1[0xce] = 0xffffffff;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xcf) = 1;
  *(undefined1 *)(param_1 + 0xcb) = 0;
  *(undefined1 *)((int)param_1 + 0x371) = 0;
  *(undefined1 *)(param_1 + 0xdc) = 1;
  param_1[0xb3] = 4;
  param_1[0xb7] = 0;
  param_1[0xf4] = 0x3fc00000;
  param_1[0xb8] = 0;
  param_1[0xb6] = 0;
  *(undefined1 *)((int)param_1 + 0x3dd) = 1;
  param_1[0xef] = 0x41f00000;
  param_1[0xbc] = 0x42200000;
  param_1[0xac] = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  *(undefined1 *)(param_1 + 0xf7) = 0;
  param_1[0xeb] = 0;
  *(undefined1 *)((int)param_1 + 0x3a9) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xd3] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  *(undefined1 *)((int)param_1 + 0x2ed) = 0;
  *(undefined1 *)((int)param_1 + 0x372) = 0;
  param_1[0x20] = 4;
  param_1[0xb] = 0x42c80000;
  FUN_004d3de0(0);
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xcc] = 0x3dd67750;
  param_1[0xdd] = 0;
  param_1[0xe5] = 0;
  param_1[0xe2] = 0x3f800000;
  param_1[0xe3] = 0x3f800000;
  param_1[0xf1] = 0;
  param_1[0xf5] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd4] = 0;
  param_1[0xe7] = 0;
  param_1[0xe9] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  FUN_00525a80(0,0);
  param_1[0xdf] = 0x42c80000;
  param_1[0xe1] = 0x42c80000;
  param_1[0xde] = 0x43fa0000;
  param_1[0xe0] = 0x43fa0000;
  param_1[0xb2] = 0;
  param_1[0xe6] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00508140 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00508140(int param_1,int *param_2,int *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uStack_31c;
  int *piStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  int *piStack_30c;
  undefined4 uStack_308;
  int *piStack_304;
  int *piStack_300;
  float fStack_2fc;
  int **ppiStack_2f8;
  int *piStack_2f4;
  undefined4 uStack_2f0;
  int *piStack_2ec;
  int *piStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  int *piStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  int *piStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  int *piStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  int *piStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  int *piStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  int iStack_294;
  int *piStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  int *piStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  float fStack_274;
  int *piStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  int *piStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  int *piStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  int *piStack_244;
  int *piStack_240;
  int **ppiStack_23c;
  int *piStack_238;
  undefined4 uStack_234;
  int *piStack_230;
  int *piStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  int *piStack_220;
  int *piStack_21c;
  int *piStack_218;
  int *piStack_214;
  int *piStack_210;
  int *piStack_20c;
  int *piStack_208;
  undefined4 uStack_204;
  int *piStack_200;
  int *piStack_1fc;
  undefined4 uStack_1f8;
  undefined4 *puStack_1f4;
  int **ppiStack_1f0;
  undefined4 *puStack_1ec;
  int **ppiStack_1e8;
  undefined4 uStack_1e4;
  int *piStack_1e0;
  undefined4 uStack_1dc;
  undefined4 *puStack_1d8;
  int *piStack_1d4;
  undefined4 uStack_1d0;
  undefined4 *puStack_1cc;
  int *piStack_1c8;
  undefined4 uStack_1c4;
  undefined4 *puStack_1c0;
  int *piStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  int *piStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  int *piStack_1a4;
  int *piStack_1a0;
  undefined4 *puStack_19c;
  undefined4 *puStack_198;
  int *piStack_194;
  int *piStack_190;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_18c;
  undefined4 *puStack_188;
  undefined4 *puVar9;
  undefined4 local_170 [2];
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e4 [36];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int aiStack_b8 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_ac [8];
  undefined1 auStack_a4 [164];
  
  local_14c = 0;
  puStack_188 = (undefined4 *)0x508161;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_148,"WaterRefl");
  puStack_188 = &local_148;
  pbStack_18c = local_ac;
  piStack_190 = (int *)0x50817d;
  puStack_188 = (undefined4 *)FUN_004224c0();
  pbStack_18c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                0x508183;
  uVar1 = FUN_0040e560();
  uStack_154 = CONCAT13(uVar1,(undefined3)uStack_154);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_ac);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_148);
  iVar3 = *(int *)(param_1 + 0x8c);
  if (uStack_154._3_1_ == '\0') {
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x8c) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x84) <= iVar3 + 1U) {
        *(undefined4 *)(param_1 + 0x8c) = 0;
      }
      return 0;
    }
    *(undefined4 *)(param_1 + 0x8c) = 1;
    pbStack_18c = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   (param_1 + 0xa4);
    if (pbStack_18c !=
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      puVar9 = local_170;
      local_170[0] = 0;
      puStack_188 = (undefined4 *)0x0;
      piStack_190 = (int *)0x508e15;
      (**(code **)(*(int *)pbStack_18c + 0x3c))();
      piStack_190 = (int *)0x508e1c;
      piStack_194 = (int *)FUN_0041d9f0();
      piStack_190 = aiStack_b8;
      puStack_198 = (undefined4 *)0x508e2a;
      (**(code **)(*piStack_194 + 0x10))();
      uStack_15c = 0;
      uStack_158 = 0;
      uStack_154 = uStack_c0;
      uStack_150 = uStack_bc;
      local_14c = 0;
      local_148 = 0x3f800000;
      puStack_198 = (undefined4 *)0x508e5f;
      puStack_19c = puVar9;
      piStack_1a0 = (int *)FUN_0041d9f0();
      puStack_198 = &uStack_15c;
      piStack_1a4 = (int *)0x508e6f;
      (**(code **)(*piStack_1a0 + 0x14))();
      piStack_1a4 = piStack_190;
      uStack_1a8 = 0x508e79;
      (**(code **)(*piStack_190 + 8))();
      uStack_1a8 = 1;
      uStack_1ac = 7;
      piStack_1b0 = param_2;
      piStack_194 = (int *)0x0;
      uStack_1b4 = 0x508e8a;
      (**(code **)(*param_2 + 200))();
      uStack_1b4 = 1;
      uStack_1b8 = 0xe;
      piStack_1bc = param_2;
      puStack_1c0 = (undefined4 *)0x508e97;
      (**(code **)(*param_2 + 200))();
      puStack_1c0 = (undefined4 *)0x0;
      uStack_1c4 = 0x1b;
      piStack_1c8 = param_2;
      puStack_1cc = (undefined4 *)0x508ea3;
      (**(code **)(*param_2 + 200))();
      puStack_1cc = (undefined4 *)0x0;
      uStack_1d0 = 0x3f800000;
      piStack_1d4 = (int *)0x5;
      puStack_1d8 = (undefined4 *)0x3;
      uStack_1dc = 0;
      piStack_1e0 = (int *)0x0;
      uStack_1e4 = param_2;
      ppiStack_1e8 = (int **)0x508eb8;
      (**(code **)(*param_2 + 0x90))();
      ppiStack_1e8 = (int **)0x1;
      puStack_1ec = (undefined4 *)0x508ec1;
      ppiStack_1e8 = (int **)FUN_0041e470();
      puStack_1ec = (undefined4 *)0x508ece;
      FUN_00407260();
      puStack_1cc = *(undefined4 **)(param_1 + 0xc0);
      ppiStack_1e8 = (int **)&uStack_150;
      puStack_1ec = &uStack_1c4;
      ppiStack_1f0 = (int **)&uStack_1d0;
      puStack_1f4 = (undefined4 *)auStack_e4;
      uStack_1c4 = 0;
      puStack_1c0 = (undefined4 *)0x3f800000;
      piStack_1bc = (int *)0x0;
      uStack_1d0 = 0;
      piStack_1c8 = (int *)0x0;
      uStack_1f8 = 0x508f1f;
      puStack_1ec = (undefined4 *)FUN_00546678();
      ppiStack_1f0 = &piStack_190;
      puStack_1f4 = (undefined4 *)0x508f2d;
      FUN_0041d7a0();
      ppiStack_1e8 = (int **)0x508f3c;
      FUN_00407300();
      ppiStack_1e8 = &piStack_190;
      puStack_1ec = (undefined4 *)0x1;
      ppiStack_1f0 = (int **)0x508f4a;
      FUN_0041e330();
      ppiStack_1e8 = (int **)param_2;
      puStack_1ec = (undefined4 *)0x508f52;
      FUN_0041da10();
      puStack_1cc = *(undefined4 **)(param_1 + 0xc0);
      ppiStack_1e8 = (int **)&uStack_1c4;
      puStack_1ec = &uStack_1d0;
      ppiStack_1f0 = (int **)&uStack_f4;
      uStack_1c4 = 0;
      puStack_1c0 = (undefined4 *)0x3f800000;
      piStack_1bc = (int *)0x0;
      uStack_1d0 = 0;
      piStack_1c8 = (int *)0x0;
      puStack_1f4 = (undefined4 *)0x508f9b;
      thunk_FUN_00497b67();
      puStack_1f4 = &uStack_100;
      uStack_1f8 = 0;
      piStack_1fc = param_2;
      piStack_200 = (int *)0x508fad;
      (**(code **)(*param_2 + 0xc0))();
      piStack_200 = (int *)0x1;
      uStack_204 = 0x98;
      piStack_208 = param_2;
      piStack_20c = (int *)0x508fbd;
      (**(code **)(*param_2 + 200))();
      piStack_20c = (int *)0x2;
      piStack_210 = (int *)0x16;
      piStack_214 = param_2;
      piStack_218 = (int *)0x508fca;
      (**(code **)(*param_2 + 200))();
      piStack_218 = param_3;
      piStack_21c = param_2;
      *(undefined1 *)((int)param_3 + 0x18ed) = 1;
      piStack_220 = (int *)0x508fda;
      (**(code **)(*param_3 + 0x24))();
      *(undefined1 *)((int)param_3 + 0x18ed) = 0;
      piStack_220 = (int *)0x508fe7;
      piStack_220 = (int *)FUN_0041d9f0();
      uStack_224 = 0x508fed;
      (**(code **)(*piStack_220 + 0x18))();
      uStack_224 = 3;
      uStack_228 = 0x16;
      piStack_22c = param_2;
      piStack_230 = (int *)0x508ffa;
      (**(code **)(*param_2 + 200))();
      piStack_230 = (int *)0x0;
      uStack_234 = 0x98;
      piStack_238 = param_2;
      ppiStack_23c = (int **)0x509009;
      (**(code **)(*param_2 + 200))();
      ppiStack_23c = &piStack_1a4;
      piStack_240 = (int *)0x1;
      piStack_244 = (int *)0x50901a;
      FUN_0041e330();
      ppiStack_23c = (int **)0x4;
      piStack_240 = (int *)0x17;
      piStack_244 = param_2;
      uStack_248 = 0x509027;
      (**(code **)(*param_2 + 200))();
      FUN_00407300();
      FUN_00407300();
    }
    pbStack_18c = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   (param_1 + 0xa8);
    if (pbStack_18c ==
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      return local_14c;
    }
    puVar9 = local_170;
    local_170[0] = 0;
    puStack_188 = (undefined4 *)0x0;
    piStack_190 = (int *)0x50905a;
    (**(code **)(*(int *)pbStack_18c + 0x3c))();
    piStack_190 = (int *)0x509061;
    piStack_194 = (int *)FUN_0041da00();
    piStack_190 = aiStack_b8;
    puStack_198 = (undefined4 *)0x50906f;
    (**(code **)(*piStack_194 + 0x10))();
    uStack_150 = uStack_bc;
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_154 = uStack_c0;
    local_14c = 0;
    local_148 = 0x3f800000;
    puStack_198 = (undefined4 *)0x5090a4;
    piStack_1a0 = (int *)FUN_0041da00();
    puStack_19c = puVar9;
    puStack_198 = &uStack_15c;
    piStack_1a4 = (int *)0x5090b4;
    (**(code **)(*piStack_1a0 + 0x14))();
    piStack_1a4 = piStack_190;
    uStack_1a8 = 0x5090be;
    (**(code **)(*piStack_190 + 8))();
    uStack_1a8 = 0;
    uStack_1ac = 7;
    piStack_1b0 = param_2;
    piStack_194 = (int *)0x0;
    uStack_1b4 = 0x5090ce;
    (**(code **)(*param_2 + 200))();
    uStack_1b4 = 0;
    uStack_1b8 = 0xe;
    piStack_1bc = param_2;
    puStack_1c0 = (undefined4 *)0x5090da;
    (**(code **)(*param_2 + 200))();
    puStack_1c0 = &uStack_128;
    uStack_1c4 = 0x100;
    piStack_1c8 = param_2;
    uStack_f0 = 0;
    uStack_f4 = 0;
    uStack_f8 = 0;
    uStack_fc = 0;
    uStack_104 = 0;
    uStack_108 = 0;
    uStack_10c = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_11c = 0;
    uStack_120 = 0;
    uStack_124 = 0;
    uStack_ec = 0x3f800000;
    uStack_100 = 0x3f800000;
    uStack_114 = 0x3f800000;
    uStack_128 = 0x3f800000;
    puStack_1cc = (undefined4 *)0x5091a0;
    (**(code **)(*param_2 + 0x94))();
    puStack_1cc = &uStack_134;
    uStack_1d0 = 2;
    piStack_1d4 = param_2;
    puStack_1d8 = (undefined4 *)0x5091b3;
    (**(code **)(*param_2 + 0x94))();
    puStack_1d8 = &uStack_140;
    uStack_1dc = 3;
    piStack_1e0 = param_2;
    uStack_1e4 = (int *)0x5091c6;
    (**(code **)(*param_2 + 0x94))();
    uStack_1e4 = (int *)0x0;
    ppiStack_1e8 = (int **)0x14;
    puStack_1ec = (undefined4 *)0x0;
    ppiStack_1f0 = (int **)param_2;
    puStack_1f4 = (undefined4 *)0x5091d3;
    (**(code **)(*param_2 + 0xfc))();
    puStack_1c0 = (undefined4 *)0x0;
    puStack_1f4 = (undefined4 *)0x0;
    uStack_1f8 = 0x13;
    piStack_1fc = (int *)0x0;
    piStack_200 = param_2;
    uStack_204 = 0x5091ec;
    (**(code **)(*param_2 + 0xfc))();
    uStack_204 = 2;
    piStack_208 = (int *)0x12;
    piStack_20c = (int *)0x0;
    piStack_210 = param_2;
    piStack_214 = (int *)0x5091fa;
    (**(code **)(*param_2 + 0xfc))();
    piStack_214 = (int *)0x3;
    piStack_218 = (int *)0xd;
    piStack_21c = (int *)0x0;
    piStack_220 = param_2;
    uStack_224 = 0x509208;
    (**(code **)(*param_2 + 0xfc))();
    uStack_224 = 3;
    uStack_228 = 0xe;
    piStack_22c = (int *)0x0;
    piStack_230 = param_2;
    uStack_234 = 0x509216;
    (**(code **)(*param_2 + 0xfc))();
    uStack_234 = 0;
    piStack_238 = (int *)0xb;
    ppiStack_23c = (int **)0x0;
    piStack_240 = param_2;
    piStack_244 = (int *)0x509223;
    (**(code **)(*param_2 + 0xfc))();
    piStack_244 = (int *)0x2;
    uStack_248 = 0x18;
    uStack_24c = 0;
    piStack_250 = param_2;
    uStack_254 = 0x509231;
    (**(code **)(*param_2 + 0xfc))();
    uStack_254 = 4;
    uStack_258 = 1;
    uStack_25c = 0;
    piStack_260 = param_2;
    uStack_264 = 0x50923f;
    (**(code **)(*param_2 + 0xfc))();
    uStack_264 = 2;
    uStack_268 = 2;
    uStack_26c = 0;
    piStack_270 = param_2;
    fStack_274 = 7.399323e-39;
    (**(code **)(*param_2 + 0xfc))();
    fStack_274 = 4.2039e-45;
    uStack_278 = 3;
    uStack_27c = 0;
    piStack_280 = param_2;
    uStack_284 = 0x50925b;
    (**(code **)(*param_2 + 0xfc))();
    uStack_284 = 2;
    uStack_288 = 4;
    uStack_28c = 0;
    piStack_290 = param_2;
    iStack_294 = 0x509269;
    (**(code **)(*param_2 + 0xfc))();
    iStack_294 = 3;
    uStack_298 = 5;
    uStack_29c = 0;
    piStack_2a0 = param_2;
    uStack_2a4 = 0x509277;
    (**(code **)(*param_2 + 0xfc))();
    uStack_2a4 = 3;
    uStack_2a8 = 6;
    uStack_2ac = 0;
    piStack_2b0 = param_2;
    uStack_2b4 = 0x509285;
    (**(code **)(*param_2 + 0xfc))();
    uStack_2b4 = 1;
    uStack_2b8 = 1;
    uStack_2bc = 1;
    piStack_2c0 = param_2;
    uStack_2c4 = 0x509294;
    (**(code **)(*param_2 + 0xfc))();
    uStack_2c4 = 1;
    uStack_2c8 = 4;
    uStack_2cc = 1;
    piStack_2d0 = param_2;
    uStack_2d4 = 0x5092a3;
    (**(code **)(*param_2 + 0xfc))();
    uStack_2d4 = *(undefined4 *)(param_1 + 0xa4);
    uStack_2d8 = 0;
    piStack_2dc = param_2;
    uStack_2e0 = 0x5092b4;
    (**(code **)(*param_2 + 0xf4))();
    uStack_2e0 = 0;
    uStack_2e4 = 1;
    piStack_2e8 = param_2;
    piStack_2ec = (int *)0x5092c0;
    (**(code **)(*param_2 + 0xf4))();
    fVar5 = (float10)fsin((float10)_DAT_00582ae8);
    piStack_2ec = &iStack_294;
    uStack_2f0 = 0x10;
    piStack_2f4 = param_2;
    uStack_25c = 0;
    piStack_260 = (int *)0x0;
    uStack_264 = 0;
    uStack_268 = 0;
    uStack_278 = 0;
    uStack_27c = 0;
    uStack_284 = 0;
    uStack_288 = 0;
    uStack_28c = 0;
    piStack_290 = (int *)0x0;
    uStack_258 = 0x3f800000;
    uStack_26c = 0x3f800000;
    piStack_280 = (int *)0x3f800000;
    iStack_294 = 0x3f800000;
    fVar6 = (float10)fcos((float10)_DAT_005b7ecc);
    fStack_274 = (float)(fVar5 / (fVar6 * (float10)_DAT_00588878 + (float10)_DAT_00583348));
    fVar5 = (float10)fcos((float10)_DAT_00582ae8);
    fVar6 = (float10)fsin((float10)_DAT_005b7ecc);
    piStack_270 = (int *)(float)(fVar5 / (fVar6 * (float10)_DAT_00588878 + (float10)_DAT_00583348));
    ppiStack_2f8 = (int **)0x5093a4;
    (**(code **)(*param_2 + 0x94))();
    fStack_2fc = *(float *)(param_1 + 0xbc);
    ppiStack_2f8 = (int **)0x14;
    piStack_300 = (int *)0x0;
    piStack_304 = param_2;
    uStack_2c4 = 0x3f490fda;
    uStack_308 = 0x5093bf;
    (**(code **)(*param_2 + 0x14c))();
    uStack_308 = 0x102;
    piStack_30c = param_2;
    uStack_310 = 0x5093cd;
    (**(code **)(*param_2 + 0x130))();
    uStack_310 = 1;
    uStack_314 = 0x1b;
    piStack_318 = param_2;
    uStack_31c = 0x5093da;
    (**(code **)(*param_2 + 200))();
    uStack_31c = 5;
    (**(code **)(*param_2 + 200))(param_2,0x13);
    (**(code **)(*param_2 + 200))(param_2,0x14,6);
    (**(code **)(*param_2 + 200))(param_2,0x3c,0x80ffffff);
    fVar8 = 2.8026e-45;
    (**(code **)(*param_2 + 0x118))(param_2,5,0,2);
    (**(code **)(*param_2 + 200))(param_2,0x13,2);
    (**(code **)(*param_2 + 200))(param_2,0x14,2);
    (**(code **)(*param_2 + 200))(param_2,0x3c,0xff202020);
    iVar3 = 7;
    do {
      fVar5 = (float10)fsin((float10)fVar8);
      fVar6 = (float10)fcos((float10)_DAT_005b7ecc);
      fStack_2fc = (float)(fVar5 / (fVar6 * (float10)_DAT_00588878 + (float10)_DAT_00583348));
      fVar5 = (float10)fcos((float10)fVar8);
      fVar6 = (float10)fsin((float10)_DAT_005b7ecc);
      ppiStack_2f8 = (int **)(float)(fVar5 / (fVar6 * (float10)_DAT_00588878 +
                                             (float10)_DAT_00583348));
      (**(code **)(*param_2 + 0x94))(param_2,0x10,&uStack_31c);
      (**(code **)(*param_2 + 0x118))(param_2,5,0,2);
      fVar8 = fVar8 + _DAT_00591268;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    piVar4 = (int *)FUN_0041da00();
    (**(code **)(*piVar4 + 0x18))(piVar4);
    (**(code **)(*param_2 + 0xfc))(param_2,0,0xd,1);
    (**(code **)(*param_2 + 0xfc))(param_2,0,0xe,1);
    uVar7 = 0;
  }
  else {
    pbStack_18c = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   (param_1 + 0xac);
    uVar2 = iVar3 - 1U & 1;
    *(uint *)(param_1 + 0x8c) = uVar2;
    if (((pbStack_18c !=
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) &&
        (uVar2 == 0)) && (*(char *)(param_1 + 0x98) == '\0')) {
      puVar9 = local_170;
      local_170[0] = 0;
      puStack_188 = (undefined4 *)0x0;
      piStack_190 = (int *)0x5081f6;
      (**(code **)(*(int *)pbStack_18c + 0x3c))();
      piStack_190 = (int *)0x5081fd;
      piStack_194 = (int *)FUN_0041d9f0();
      piStack_190 = aiStack_b8;
      puStack_198 = (undefined4 *)0x50820b;
      (**(code **)(*piStack_194 + 0x10))();
      uStack_150 = uStack_bc;
      uStack_15c = 0;
      uStack_158 = 0;
      uStack_154 = uStack_c0;
      local_14c = 0;
      local_148 = 0x3f800000;
      puStack_198 = (undefined4 *)0x50823c;
      puStack_19c = puVar9;
      piStack_1a0 = (int *)FUN_0041d9f0();
      puStack_198 = &uStack_15c;
      piStack_1a4 = (int *)0x50824c;
      (**(code **)(*piStack_1a0 + 0x14))();
      piStack_1a4 = piStack_190;
      uStack_1a8 = 0x508256;
      (**(code **)(*piStack_190 + 8))();
      uStack_1a8 = 1;
      uStack_1ac = 7;
      piStack_1b0 = param_2;
      piStack_194 = (int *)0x0;
      uStack_1b4 = 0x508267;
      (**(code **)(*param_2 + 200))();
      uStack_1b4 = 1;
      uStack_1b8 = 0xe;
      piStack_1bc = param_2;
      puStack_1c0 = (undefined4 *)0x508274;
      (**(code **)(*param_2 + 200))();
      puStack_1c0 = (undefined4 *)0x0;
      uStack_1c4 = 0x1b;
      piStack_1c8 = param_2;
      puStack_1cc = (undefined4 *)0x508280;
      (**(code **)(*param_2 + 200))();
      piStack_1d4 = (int *)param_3[0x887];
      puStack_1cc = (undefined4 *)0x0;
      uStack_1d0 = 0x3f800000;
      puStack_1d8 = (undefined4 *)0x3;
      uStack_1dc = 0;
      piStack_1e0 = (int *)0x0;
      uStack_1e4 = param_2;
      ppiStack_1e8 = (int **)0x50829a;
      (**(code **)(*param_2 + 0x90))();
      ppiStack_1f0 = (int **)&uStack_f4;
      piStack_1bc = (int *)0x0;
      uStack_1c4 = 0;
      piStack_1c8 = (int *)0x0;
      uStack_1d0 = 0;
      if (*(char *)(param_1 + 0x98) == '\0') {
        puStack_1cc = (undefined4 *)0xbf800000;
        ppiStack_1e8 = (int **)&uStack_1d0;
        puStack_1ec = &uStack_1c4;
        puStack_1c0 = (undefined4 *)*(undefined4 *)(param_1 + 0xc0);
      }
      else {
        puStack_1c0 = (undefined4 *)0x3f800000;
        ppiStack_1e8 = (int **)&uStack_1c4;
        puStack_1ec = &uStack_1d0;
        puStack_1cc = (undefined4 *)*(undefined4 *)(param_1 + 0xc0);
      }
      puStack_1f4 = (undefined4 *)0x5082f3;
      thunk_FUN_00497b67();
      puStack_1f4 = &uStack_100;
      uStack_1f8 = 0;
      piStack_1fc = param_2;
      piStack_200 = (int *)0x508305;
      (**(code **)(*param_2 + 0xc0))();
      piStack_200 = (int *)0x1;
      uStack_204 = 0x98;
      piStack_208 = param_2;
      piStack_20c = (int *)0x508315;
      (**(code **)(*param_2 + 200))();
      piStack_20c = param_3;
      uStack_1dc = CONCAT13(*(char *)(param_1 + 0x98),(undefined3)uStack_1dc);
      *(bool *)(param_1 + 0x98) = *(char *)(param_1 + 0x98) == '\0';
      piStack_210 = param_2;
      *(undefined1 *)((int)param_3 + 0x18ef) = 1;
      piStack_214 = (int *)0x50833a;
      uStack_1dc = (**(code **)(*param_3 + 0x24))();
      *(undefined1 *)((int)param_3 + 0x18ef) = 0;
      *(undefined1 *)(param_1 + 0x98) = uStack_1e4._3_1_;
      piStack_214 = (int *)0x508355;
      piStack_214 = (int *)FUN_0041d9f0();
      piStack_218 = (int *)0x50835b;
      (**(code **)(*piStack_214 + 0x18))();
      piStack_218 = (int *)0x0;
      piStack_21c = (int *)0x98;
      piStack_220 = param_2;
      uStack_224 = 0x50836a;
      (**(code **)(*param_2 + 200))();
      uStack_224 = 4;
      uStack_228 = 0x17;
      piStack_22c = param_2;
      piStack_230 = (int *)0x508377;
      (**(code **)(*param_2 + 200))();
    }
    pbStack_18c = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   (param_1 + 0xb0);
    if (((pbStack_18c !=
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) &&
        (*(int *)(param_1 + 0x8c) == 0)) && (*(char *)(param_1 + 0x98) == '\0')) {
      puVar9 = local_170;
      local_170[0] = 0;
      puStack_188 = (undefined4 *)0x0;
      piStack_190 = (int *)0x5083ad;
      (**(code **)(*(int *)pbStack_18c + 0x3c))();
      piStack_190 = (int *)0x5083b4;
      piStack_194 = (int *)FUN_0041d9f0();
      piStack_190 = aiStack_b8;
      puStack_198 = (undefined4 *)0x5083c2;
      (**(code **)(*piStack_194 + 0x10))();
      uStack_15c = 0;
      uStack_158 = 0;
      uStack_154 = uStack_c0;
      uStack_150 = uStack_bc;
      local_14c = 0;
      local_148 = 0x3f800000;
      puStack_198 = (undefined4 *)0x5083f7;
      piStack_1a0 = (int *)FUN_0041d9f0();
      puStack_19c = puVar9;
      puStack_198 = &uStack_15c;
      piStack_1a4 = (int *)0x508407;
      (**(code **)(*piStack_1a0 + 0x14))();
      piStack_1a4 = piStack_190;
      uStack_1a8 = 0x508411;
      (**(code **)(*piStack_190 + 8))();
      uStack_1a8 = 1;
      uStack_1ac = 7;
      piStack_1b0 = param_2;
      piStack_194 = (int *)0x0;
      uStack_1b4 = 0x508422;
      (**(code **)(*param_2 + 200))();
      uStack_1b4 = 1;
      uStack_1b8 = 0xe;
      piStack_1bc = param_2;
      puStack_1c0 = (undefined4 *)0x50842f;
      (**(code **)(*param_2 + 200))();
      puStack_1c0 = (undefined4 *)0x0;
      uStack_1c4 = 0x1b;
      piStack_1c8 = param_2;
      puStack_1cc = (undefined4 *)0x50843b;
      (**(code **)(*param_2 + 200))();
      puStack_1cc = (undefined4 *)0x0;
      uStack_1d0 = 0x3f800000;
      piStack_1d4 = (int *)0x0;
      puStack_1d8 = (undefined4 *)0x3;
      uStack_1dc = 0;
      piStack_1e0 = (int *)0x0;
      uStack_1e4 = param_2;
      ppiStack_1e8 = (int **)0x50844f;
      (**(code **)(*param_2 + 0x90))();
      ppiStack_1e8 = (int **)0x1;
      puStack_1ec = (undefined4 *)0x508458;
      ppiStack_1e8 = (int **)FUN_0041e470();
      puStack_1ec = (undefined4 *)0x508462;
      FUN_00407260();
      ppiStack_1e8 = (int **)0x3f800000;
      puStack_1ec = (undefined4 *)0x508473;
      FUN_00407f80();
      ppiStack_1e8 = &piStack_190;
      puStack_1cc = *(undefined4 **)(param_1 + 0xc0);
      puStack_1ec = &uStack_1c4;
      piStack_1c8 = (int *)0x0;
      uStack_1d0 = 0;
      piStack_1bc = (int *)0x0;
      uStack_1c4 = 0;
      ppiStack_1f0 = (int **)&uStack_1d0;
      if (*(char *)(param_1 + 0x98) == '\0') {
        puStack_1f4 = (undefined4 *)auStack_a4;
        puStack_1c0 = (undefined4 *)0x3f800000;
        uStack_1f8 = 0x508516;
        puStack_1ec = (undefined4 *)FUN_00546678();
        ppiStack_1f0 = (int **)auStack_e4;
        puStack_1f4 = (undefined4 *)0x508527;
        ppiStack_1e8 = (int **)FUN_0041d7a0();
        puStack_1ec = (undefined4 *)0x508537;
        FUN_0041d670();
        ppiStack_1e8 = (int **)0x508543;
        FUN_00407300();
      }
      else {
        puStack_1f4 = (undefined4 *)auStack_e4;
        puStack_1c0 = (undefined4 *)0xbf800000;
        uStack_1f8 = 0x5084cb;
        puStack_1ec = (undefined4 *)FUN_00546678();
        ppiStack_1f0 = (int **)auStack_a4;
        puStack_1f4 = (undefined4 *)0x5084dc;
        ppiStack_1e8 = (int **)FUN_0041d7a0();
        puStack_1ec = (undefined4 *)0x5084ec;
        FUN_0041d670();
        ppiStack_1e8 = (int **)0x5084f8;
        FUN_00407300();
      }
      ppiStack_1e8 = (int **)0x50854f;
      FUN_00407300();
      ppiStack_1e8 = (int **)&uStack_150;
      puStack_1ec = (undefined4 *)0x1;
      ppiStack_1f0 = (int **)0x508560;
      FUN_0041e330();
      ppiStack_1e8 = (int **)param_2;
      puStack_1ec = (undefined4 *)0x508568;
      FUN_0041da10();
      piStack_1c8 = (int *)0x0;
      uStack_1d0 = 0;
      piStack_1bc = (int *)0x0;
      uStack_1c4 = 0;
      if (*(char *)(param_1 + 0x98) == '\0') {
        puStack_1cc = *(undefined4 **)(param_1 + 0xc0);
        puStack_1c0 = (undefined4 *)0x3f800000;
      }
      else {
        puStack_1cc = *(undefined4 **)(param_1 + 0xc0);
        puStack_1c0 = (undefined4 *)0xbf800000;
      }
      ppiStack_1e8 = (int **)&uStack_1c4;
      puStack_1ec = &uStack_1d0;
      ppiStack_1f0 = (int **)&uStack_f4;
      puStack_1f4 = (undefined4 *)0x5085e1;
      thunk_FUN_00497b67();
      puStack_1f4 = &uStack_100;
      uStack_1f8 = 0;
      piStack_1fc = param_2;
      piStack_200 = (int *)0x5085f3;
      (**(code **)(*param_2 + 0xc0))();
      piStack_200 = (int *)0x1;
      uStack_204 = 0x98;
      piStack_208 = param_2;
      piStack_20c = (int *)0x508603;
      (**(code **)(*param_2 + 200))();
      piStack_20c = (int *)0x2;
      piStack_210 = (int *)0x16;
      piStack_214 = param_2;
      piStack_218 = (int *)0x508610;
      (**(code **)(*param_2 + 200))();
      piStack_218 = param_3;
      piStack_21c = param_2;
      *(undefined1 *)((int)param_3 + 0x18ed) = 1;
      *(undefined1 *)((int)param_3 + 0x18ee) = 1;
      piStack_220 = (int *)0x508627;
      iVar3 = (**(code **)(*param_3 + 0x24))();
      if (-1 < iVar3) {
        ppiStack_1e8 = (int **)((int)ppiStack_1e8 + iVar3);
      }
      *(undefined1 *)((int)param_3 + 0x18ee) = 0;
      *(undefined1 *)((int)param_3 + 0x18ed) = 0;
      piStack_220 = (int *)0x508642;
      piStack_220 = (int *)FUN_0041d9f0();
      uStack_224 = 0x508648;
      (**(code **)(*piStack_220 + 0x18))();
      uStack_224 = 3;
      uStack_228 = 0x16;
      piStack_22c = param_2;
      piStack_230 = (int *)0x508655;
      (**(code **)(*param_2 + 200))();
      piStack_230 = (int *)0x0;
      uStack_234 = 0x98;
      piStack_238 = param_2;
      ppiStack_23c = (int **)0x508664;
      (**(code **)(*param_2 + 200))();
      ppiStack_23c = (int **)&uStack_1e4;
      piStack_240 = (int *)0x1;
      piStack_244 = (int *)0x508672;
      FUN_0041e330();
      ppiStack_23c = (int **)0x4;
      piStack_240 = (int *)0x17;
      piStack_244 = param_2;
      uStack_248 = 0x50867f;
      (**(code **)(*param_2 + 200))();
      FUN_00407300();
      FUN_00407300();
    }
    pbStack_18c = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   (param_1 + 0xa4);
    if ((pbStack_18c !=
         (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) &&
       (*(int *)(param_1 + 0x8c) == 1)) {
      puVar9 = local_170;
      local_170[0] = 0;
      puStack_188 = (undefined4 *)0x0;
      piStack_190 = (int *)0x5086bf;
      (**(code **)(*(int *)pbStack_18c + 0x3c))();
      piStack_190 = (int *)0x5086c6;
      piStack_194 = (int *)FUN_0041d9f0();
      piStack_190 = aiStack_b8;
      puStack_198 = (undefined4 *)0x5086d4;
      (**(code **)(*piStack_194 + 0x10))();
      uStack_150 = uStack_bc;
      uStack_15c = 0;
      uStack_158 = 0;
      uStack_154 = uStack_c0;
      local_14c = 0;
      local_148 = 0x3f800000;
      puStack_198 = (undefined4 *)0x508709;
      piStack_1a0 = (int *)FUN_0041d9f0();
      puStack_19c = puVar9;
      puStack_198 = &uStack_15c;
      piStack_1a4 = (int *)0x508719;
      (**(code **)(*piStack_1a0 + 0x14))();
      piStack_1a4 = piStack_190;
      uStack_1a8 = 0x508723;
      (**(code **)(*piStack_190 + 8))();
      uStack_1a8 = 1;
      uStack_1ac = 7;
      piStack_1b0 = param_2;
      piStack_194 = (int *)0x0;
      uStack_1b4 = 0x508734;
      (**(code **)(*param_2 + 200))();
      uStack_1b4 = 1;
      uStack_1b8 = 0xe;
      piStack_1bc = param_2;
      puStack_1c0 = (undefined4 *)0x508741;
      (**(code **)(*param_2 + 200))();
      puStack_1c0 = (undefined4 *)0x0;
      uStack_1c4 = 0x1b;
      piStack_1c8 = param_2;
      puStack_1cc = (undefined4 *)0x50874d;
      (**(code **)(*param_2 + 200))();
      piStack_1d4 = (int *)param_3[0x887];
      puStack_1cc = (undefined4 *)0x0;
      uStack_1d0 = 0x3f800000;
      puStack_1d8 = (undefined4 *)0x3;
      uStack_1dc = 0;
      piStack_1e0 = (int *)0x0;
      uStack_1e4 = param_2;
      ppiStack_1e8 = (int **)0x508767;
      (**(code **)(*param_2 + 0x90))();
      ppiStack_1e8 = (int **)0x1;
      puStack_1ec = (undefined4 *)0x508770;
      ppiStack_1e8 = (int **)FUN_0041e470();
      puStack_1ec = (undefined4 *)0x50877a;
      FUN_00407260();
      ppiStack_1e8 = (int **)0x3f800000;
      puStack_1ec = (undefined4 *)0x50878b;
      FUN_00407f80();
      puStack_1cc = *(undefined4 **)(param_1 + 0xc0);
      puStack_1ec = &uStack_1c4;
      piStack_1c8 = (int *)0x0;
      uStack_1d0 = 0;
      piStack_1bc = (int *)0x0;
      uStack_1c4 = 0;
      ppiStack_1f0 = (int **)&uStack_1d0;
      ppiStack_1e8 = &piStack_190;
      puStack_1f4 = (undefined4 *)auStack_a4;
      puStack_1c0 = (undefined4 *)0xbf800000;
      if (*(char *)(param_1 + 0x98) == '\0') {
        puStack_1c0 = (undefined4 *)0x3f800000;
      }
      uStack_1f8 = 0x5087eb;
      puStack_1ec = (undefined4 *)FUN_00546678();
      ppiStack_1f0 = (int **)auStack_e4;
      puStack_1f4 = (undefined4 *)0x5087fc;
      ppiStack_1e8 = (int **)FUN_0041d7a0();
      puStack_1ec = (undefined4 *)0x50880c;
      FUN_0041d670();
      ppiStack_1e8 = (int **)0x508818;
      FUN_00407300();
      ppiStack_1e8 = (int **)0x508824;
      FUN_00407300();
      ppiStack_1e8 = (int **)&uStack_150;
      puStack_1ec = (undefined4 *)0x1;
      ppiStack_1f0 = (int **)0x508835;
      FUN_0041e330();
      ppiStack_1e8 = (int **)param_2;
      puStack_1ec = (undefined4 *)0x50883d;
      FUN_0041da10();
      piStack_1c8 = (int *)0x0;
      uStack_1d0 = 0;
      piStack_1bc = (int *)0x0;
      uStack_1c4 = 0;
      if (*(char *)(param_1 + 0x98) == '\0') {
        puStack_1cc = *(undefined4 **)(param_1 + 0xc0);
        puStack_1c0 = (undefined4 *)0x3f800000;
      }
      else {
        puStack_1cc = *(undefined4 **)(param_1 + 0xc0);
        puStack_1c0 = (undefined4 *)0xbf800000;
      }
      ppiStack_1e8 = (int **)&uStack_1c4;
      puStack_1ec = &uStack_1d0;
      ppiStack_1f0 = (int **)&uStack_f4;
      puStack_1f4 = (undefined4 *)0x5088b6;
      thunk_FUN_00497b67();
      puStack_1f4 = &uStack_100;
      uStack_1f8 = 0;
      piStack_1fc = param_2;
      piStack_200 = (int *)0x5088c8;
      (**(code **)(*param_2 + 0xc0))();
      piStack_200 = (int *)0x1;
      uStack_204 = 0x98;
      piStack_208 = param_2;
      piStack_20c = (int *)0x5088d8;
      (**(code **)(*param_2 + 200))();
      piStack_20c = (int *)0x2;
      piStack_210 = (int *)0x16;
      piStack_214 = param_2;
      piStack_218 = (int *)0x5088e5;
      (**(code **)(*param_2 + 200))();
      piStack_218 = param_3;
      piStack_21c = param_2;
      *(undefined1 *)((int)param_3 + 0x18ed) = 1;
      piStack_220 = (int *)0x5088f5;
      iVar3 = (**(code **)(*param_3 + 0x24))();
      if (-1 < iVar3) {
        ppiStack_1e8 = (int **)((int)ppiStack_1e8 + iVar3);
      }
      *(undefined1 *)((int)param_3 + 0x18ed) = 0;
      piStack_220 = (int *)0x50890a;
      piStack_220 = (int *)FUN_0041d9f0();
      uStack_224 = 0x508910;
      (**(code **)(*piStack_220 + 0x18))();
      uStack_224 = 3;
      uStack_228 = 0x16;
      piStack_22c = param_2;
      piStack_230 = (int *)0x50891d;
      (**(code **)(*param_2 + 200))();
      piStack_230 = (int *)0x0;
      uStack_234 = 0x98;
      piStack_238 = param_2;
      ppiStack_23c = (int **)0x50892c;
      (**(code **)(*param_2 + 200))();
      ppiStack_23c = (int **)&uStack_1e4;
      piStack_240 = (int *)0x1;
      piStack_244 = (int *)0x50893a;
      FUN_0041e330();
      ppiStack_23c = (int **)0x4;
      piStack_240 = (int *)0x17;
      piStack_244 = param_2;
      uStack_248 = 0x508947;
      (**(code **)(*param_2 + 200))();
      FUN_00407300();
      FUN_00407300();
    }
    pbStack_18c = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   (param_1 + 0xb4);
    if (pbStack_18c ==
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      return local_14c;
    }
    if (*(int *)(param_1 + 0x8c) != 1) {
      return local_14c;
    }
    puVar9 = local_170;
    local_170[0] = 0;
    puStack_188 = (undefined4 *)0x0;
    piStack_190 = (int *)0x508987;
    (**(code **)(*(int *)pbStack_18c + 0x3c))();
    piStack_190 = (int *)0x50898e;
    piStack_194 = (int *)FUN_0041da00();
    piStack_190 = aiStack_b8;
    puStack_198 = (undefined4 *)0x50899c;
    (**(code **)(*piStack_194 + 0x10))();
    uStack_150 = uStack_bc;
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_154 = uStack_c0;
    local_14c = 0;
    local_148 = 0x3f800000;
    puStack_198 = (undefined4 *)0x5089d1;
    piStack_1a0 = (int *)FUN_0041da00();
    puStack_19c = puVar9;
    puStack_198 = &uStack_15c;
    piStack_1a4 = (int *)0x5089e1;
    (**(code **)(*piStack_1a0 + 0x14))();
    piStack_1a4 = piStack_190;
    uStack_1a8 = 0x5089eb;
    (**(code **)(*piStack_190 + 8))();
    uStack_1a8 = 0;
    uStack_1ac = 7;
    piStack_1b0 = param_2;
    piStack_194 = (int *)0x0;
    uStack_1b4 = 0x5089fb;
    (**(code **)(*param_2 + 200))();
    uStack_1b4 = 0;
    uStack_1b8 = 0xe;
    piStack_1bc = param_2;
    puStack_1c0 = (undefined4 *)0x508a07;
    (**(code **)(*param_2 + 200))();
    puStack_1c0 = &uStack_168;
    uStack_1c4 = 0x100;
    piStack_1c8 = param_2;
    uStack_130 = 0;
    uStack_134 = 0;
    uStack_138 = 0;
    uStack_13c = 0;
    uStack_144 = 0;
    local_148 = 0;
    local_14c = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_15c = 0;
    uStack_160 = 0;
    uStack_164 = 0;
    uStack_12c = 0x3f800000;
    uStack_140 = 0x3f800000;
    uStack_154 = 0x3f800000;
    uStack_168 = 0x3f800000;
    puStack_1cc = (undefined4 *)0x508ab2;
    (**(code **)(*param_2 + 0x94))();
    puStack_1cc = (undefined4 *)&stack0xfffffe8c;
    uStack_1d0 = 2;
    piStack_1d4 = param_2;
    puStack_1d8 = (undefined4 *)0x508ac2;
    (**(code **)(*param_2 + 0x94))();
    puStack_1d8 = (undefined4 *)&stack0xfffffe80;
    uStack_1dc = 3;
    piStack_1e0 = param_2;
    uStack_1e4 = (int *)0x508ad2;
    (**(code **)(*param_2 + 0x94))();
    uStack_1e4 = (int *)0x0;
    ppiStack_1e8 = (int **)0x14;
    puStack_1ec = (undefined4 *)0x0;
    ppiStack_1f0 = (int **)param_2;
    puStack_1f4 = (undefined4 *)0x508adf;
    (**(code **)(*param_2 + 0xfc))();
    puStack_1c0 = (undefined4 *)0x0;
    puStack_1f4 = (undefined4 *)0x0;
    uStack_1f8 = 0x13;
    piStack_1fc = (int *)0x0;
    piStack_200 = param_2;
    uStack_204 = 0x508af8;
    (**(code **)(*param_2 + 0xfc))();
    uStack_204 = 2;
    piStack_208 = (int *)0x12;
    piStack_20c = (int *)0x0;
    piStack_210 = param_2;
    piStack_214 = (int *)0x508b06;
    (**(code **)(*param_2 + 0xfc))();
    piStack_214 = (int *)0x3;
    piStack_218 = (int *)0xd;
    piStack_21c = (int *)0x0;
    piStack_220 = param_2;
    uStack_224 = 0x508b14;
    (**(code **)(*param_2 + 0xfc))();
    uStack_224 = 3;
    uStack_228 = 0xe;
    piStack_22c = (int *)0x0;
    piStack_230 = param_2;
    uStack_234 = 0x508b22;
    (**(code **)(*param_2 + 0xfc))();
    uStack_234 = 0;
    piStack_238 = (int *)0xb;
    ppiStack_23c = (int **)0x0;
    piStack_240 = param_2;
    piStack_244 = (int *)0x508b2f;
    (**(code **)(*param_2 + 0xfc))();
    piStack_244 = (int *)0x2;
    uStack_248 = 0x18;
    uStack_24c = 0;
    piStack_250 = param_2;
    uStack_254 = 0x508b3d;
    (**(code **)(*param_2 + 0xfc))();
    uStack_254 = 2;
    uStack_258 = 1;
    uStack_25c = 0;
    piStack_260 = param_2;
    uStack_264 = 0x508b4b;
    (**(code **)(*param_2 + 0xfc))();
    uStack_264 = 2;
    uStack_268 = 2;
    uStack_26c = 0;
    piStack_270 = param_2;
    fStack_274 = 7.396828e-39;
    (**(code **)(*param_2 + 0xfc))();
    fStack_274 = 1.4013e-45;
    uStack_278 = 3;
    uStack_27c = 0;
    piStack_280 = param_2;
    uStack_284 = 0x508b67;
    (**(code **)(*param_2 + 0xfc))();
    uStack_284 = 2;
    uStack_288 = 4;
    uStack_28c = 0;
    piStack_290 = param_2;
    iStack_294 = 0x508b75;
    (**(code **)(*param_2 + 0xfc))();
    iStack_294 = 2;
    uStack_298 = 5;
    uStack_29c = 0;
    piStack_2a0 = param_2;
    uStack_2a4 = 0x508b83;
    (**(code **)(*param_2 + 0xfc))();
    uStack_2a4 = 1;
    uStack_2a8 = 6;
    uStack_2ac = 0;
    piStack_2b0 = param_2;
    uStack_2b4 = 0x508b91;
    (**(code **)(*param_2 + 0xfc))();
    uStack_2b4 = 1;
    uStack_2b8 = 1;
    uStack_2bc = 1;
    piStack_2c0 = param_2;
    uStack_2c4 = 0x508ba0;
    (**(code **)(*param_2 + 0xfc))();
    uStack_2c4 = 1;
    uStack_2c8 = 4;
    uStack_2cc = 1;
    piStack_2d0 = param_2;
    uStack_2d4 = 0x508baf;
    (**(code **)(*param_2 + 0xfc))();
    uStack_2d4 = 0;
    uStack_2d8 = 1;
    piStack_2dc = param_2;
    uStack_2e0 = 0x508bbb;
    (**(code **)(*param_2 + 0xf4))();
    uStack_2e4 = *(undefined4 *)(param_1 + 0xbc);
    uStack_2e0 = 0x14;
    piStack_2e8 = (int *)0x0;
    piStack_2ec = param_2;
    uStack_2f0 = 0x508bce;
    (**(code **)(*param_2 + 0x14c))();
    uStack_2f0 = 0x102;
    piStack_2f4 = param_2;
    ppiStack_2f8 = (int **)0x508bdc;
    (**(code **)(*param_2 + 0x130))();
    ppiStack_2f8 = &piStack_260;
    fStack_2fc = 2.24208e-44;
    piStack_300 = param_2;
    uStack_228 = 0;
    piStack_22c = (int *)0x0;
    piStack_230 = (int *)0x0;
    uStack_234 = 0;
    ppiStack_23c = (int **)0x0;
    piStack_240 = (int *)0x0;
    piStack_244 = (int *)0x0;
    uStack_248 = 0;
    piStack_250 = (int *)0x0;
    uStack_254 = 0;
    uStack_258 = 0;
    uStack_25c = 0;
    uStack_224 = 0x3f800000;
    piStack_238 = (int *)0x3f800000;
    uStack_24c = 0x3f800000;
    piStack_260 = (int *)0x3f800000;
    piStack_304 = (int *)0x508c9f;
    (**(code **)(*param_2 + 0x94))();
    piStack_304 = (int *)0x0;
    uStack_308 = 0x1b;
    piStack_30c = param_2;
    uStack_310 = 0x508cab;
    (**(code **)(*param_2 + 200))();
    uStack_310 = *(undefined4 *)(param_1 + 0xac);
    uStack_314 = 0;
    piStack_318 = param_2;
    uStack_31c = 0x508cbc;
    (**(code **)(*param_2 + 0xf4))();
    uStack_31c = 2;
    (**(code **)(*param_2 + 0x118))(param_2,5,0);
    (**(code **)(*param_2 + 200))(param_2,0x1b,1);
    (**(code **)(*param_2 + 200))(param_2,0x13,3);
    (**(code **)(*param_2 + 200))(param_2,0x14,9);
    (**(code **)(*param_2 + 0xf4))(param_2,0,*(undefined4 *)(param_1 + 0xa4));
    (**(code **)(*param_2 + 0x118))(param_2,5,0,2);
    (**(code **)(*param_2 + 200))(param_2,0x1b,1);
    (**(code **)(*param_2 + 200))(param_2,0x13,3);
    (**(code **)(*param_2 + 200))(param_2,0x14,2);
    (**(code **)(*param_2 + 0xf4))(param_2,0,*(undefined4 *)(param_1 + 0xb0));
    (**(code **)(*param_2 + 0x118))(param_2,5,0,2);
    piVar4 = (int *)FUN_0041da00();
    (**(code **)(*piVar4 + 0x18))(piVar4);
    (**(code **)(*param_2 + 0xfc))(param_2,0,0xd,1);
    (**(code **)(*param_2 + 0xfc))(param_2,0,0xe,1);
    (**(code **)(*param_2 + 0xfc))(param_2,0,0x18,0);
    (**(code **)(*param_2 + 0xfc))(param_2,1,0xd,1);
    (**(code **)(*param_2 + 0xfc))(param_2,1,0xe,1);
    uVar7 = 1;
  }
  (**(code **)(*param_2 + 0xfc))(param_2,uVar7,0x18,0);
  (**(code **)(*param_2 + 200))(param_2,0x1b,0);
  (**(code **)(*param_2 + 200))(param_2,7,1);
  (**(code **)(*param_2 + 200))(param_2,0xe,1);
  return local_14c;
}




/* Function: FUN_00551e60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00551e60(int *param_1,undefined4 param_2,int *********param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *********pppppppppiVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint unaff_retaddr;
  undefined4 uVar7;
  undefined4 uStack_418;
  int ********ppppppppiStack_414;
  undefined4 uStack_410;
  int ********ppppppppiStack_40c;
  int ********ppppppppiStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  int ********ppppppppiStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  int ********ppppppppiStack_3f0;
  int ********ppppppppiStack_3ec;
  undefined4 uStack_3e8;
  int ********ppppppppiStack_3e4;
  int ********ppppppppiStack_3e0;
  int ********ppppppppiStack_3dc;
  int ********ppppppppiStack_3d8;
  int ********ppppppppiStack_3d4;
  int ********ppppppppiStack_3d0;
  int ********ppppppppiStack_3cc;
  int ********ppppppppiStack_3c8;
  int ********ppppppppiStack_3c4;
  int ********ppppppppiStack_3c0;
  int ********ppppppppiStack_3bc;
  int ********ppppppppiStack_3b8;
  int iStack_3b4;
  int ********ppppppppiStack_3b0;
  int ********ppppppppiStack_3ac;
  int ********ppppppppiStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  int ********ppppppppiStack_39c;
  int ********ppppppppiStack_398;
  undefined4 uStack_394;
  int ********ppppppppiStack_390;
  int ********ppppppppiStack_38c;
  int ********ppppppppiStack_388;
  int iStack_384;
  int ********ppppppppiStack_380;
  int ********ppppppppiStack_37c;
  int ********ppppppppiStack_378;
  int ********ppppppppiStack_374;
  undefined4 uStack_370;
  int ********ppppppppiStack_36c;
  int ********ppppppppiStack_368;
  undefined4 uStack_364;
  int ********ppppppppiStack_360;
  int ********ppppppppiStack_35c;
  int ********ppppppppiStack_358;
  int ********ppppppppiStack_354;
  int ********ppppppppiStack_350;
  int ********ppppppppiStack_34c;
  int ********ppppppppiStack_348;
  int ********ppppppppiStack_344;
  int ********ppppppppiStack_340;
  int ********ppppppppiStack_33c;
  int ********ppppppppiStack_338;
  int ********ppppppppiStack_334;
  int ********ppppppppiStack_330;
  undefined4 uStack_32c;
  int ********ppppppppiStack_328;
  int ********ppppppppiStack_324;
  int ********ppppppppiStack_320;
  int ********ppppppppiStack_31c;
  int ********ppppppppiStack_318;
  float *pfVar8;
  int *piStack_2fc;
  int iStack_2f4;
  float fStack_2e4;
  int ********ppppppppiStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  int ********ppppppppiStack_2d4;
  int iStack_2d0;
  undefined4 uStack_2cc;
  int ********ppppppppiStack_2c8;
  float fStack_2c4;
  int iStack_2c0;
  undefined4 uStack_2bc;
  int ********ppppppppiStack_2b8;
  undefined4 uStack_2b4;
  int ********ppppppppiStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  int ********ppppppppiStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  int ********ppppppppiStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  int ********ppppppppiStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  int ********ppppppppiStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  int ********ppppppppiStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  int ********ppppppppiStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  int ********ppppppppiStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  int ********ppppppppiStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  int ********ppppppppiStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  int ********ppppppppiStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  int ********ppppppppiStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  int ********ppppppppiStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  int ********ppppppppiStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  int ********ppppppppiStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  int ********ppppppppiStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  int ********ppppppppiStack_1c0;
  undefined4 uStack_1bc;
  int iStack_1b8;
  int ********ppppppppiStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int ********ppppppppiStack_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  int ********ppppppppiStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  int ********ppppppppiStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  int ********ppppppppiStack_184;
  undefined4 uStack_180;
  undefined1 auStack_50 [12];
  int iStack_44;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0058079f;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  pppppppppiVar3 = (int *********)0x0;
  if ((*param_1 != 0) && (param_1[3] != 0)) {
    ExceptionList = &local_c;
    (*(code *)(*param_3)[0x32])();
    uStack_180 = 0x8e;
    ppppppppiStack_184 = (int ********)param_3;
    uStack_188 = 0x551ed5;
    (*(code *)(*param_3)[0x32])();
    uStack_188 = 1;
    uStack_18c = 7;
    ppppppppiStack_190 = (int ********)param_3;
    uStack_194 = 0x551ee2;
    (*(code *)(*param_3)[0x32])();
    uStack_194 = 0;
    iStack_198 = 0xf;
    ppppppppiStack_19c = (int ********)param_3;
    iStack_1a0 = 0x551eee;
    (*(code *)(*param_3)[0x32])();
    iStack_1a0 = 0;
    uStack_1a4 = 0x34;
    ppppppppiStack_1a8 = (int ********)param_3;
    uStack_1ac = 0x551efa;
    (*(code *)(*param_3)[0x32])();
    uStack_1ac = 0;
    uStack_1b0 = 0x1b;
    ppppppppiStack_1b4 = (int ********)param_3;
    iStack_1b8 = 0x551f06;
    (*(code *)(*param_3)[0x32])();
    iStack_1b8 = 3 - (uint)(*(char *)(iStack_44 + 0x18ed) != '\0');
    uStack_1bc = 0x16;
    ppppppppiStack_1c0 = (int ********)param_3;
    uStack_1c4 = 0x551f26;
    (*(code *)(*param_3)[0x32])();
    uStack_1c4 = 1;
    uStack_1c8 = 0xe;
    ppppppppiStack_1cc = (int ********)param_3;
    uStack_1d0 = 0x551f33;
    (*(code *)(*param_3)[0x32])();
    uStack_1d0 = 4;
    uStack_1d4 = 1;
    uStack_1d8 = 0;
    ppppppppiStack_1dc = (int ********)param_3;
    uStack_1e0 = 0x551f41;
    (*(code *)(*param_3)[0x3f])();
    uStack_1e0 = 1;
    uStack_1e4 = 2;
    uStack_1e8 = 0;
    ppppppppiStack_1ec = (int ********)param_3;
    uStack_1f0 = 0x551f4f;
    (*(code *)(*param_3)[0x3f])();
    uStack_1f0 = 2;
    uStack_1f4 = 3;
    uStack_1f8 = 0;
    ppppppppiStack_1fc = (int ********)param_3;
    uStack_200 = 0x551f5d;
    (*(code *)(*param_3)[0x3f])();
    uStack_200 = 2;
    uStack_204 = 4;
    uStack_208 = 0;
    ppppppppiStack_20c = (int ********)param_3;
    uStack_210 = 0x551f6b;
    (*(code *)(*param_3)[0x3f])();
    uStack_210 = 2;
    uStack_214 = 5;
    uStack_218 = 0;
    ppppppppiStack_21c = (int ********)param_3;
    uStack_220 = 0x551f79;
    (*(code *)(*param_3)[0x3f])();
    uStack_220 = 1;
    uStack_224 = 6;
    uStack_228 = 0;
    ppppppppiStack_22c = (int ********)param_3;
    uStack_230 = 0x551f87;
    (*(code *)(*param_3)[0x3f])();
    uStack_230 = 1;
    uStack_234 = 0xd;
    uStack_238 = 0;
    ppppppppiStack_23c = (int ********)param_3;
    uStack_240 = 0x551f95;
    (*(code *)(*param_3)[0x3f])();
    uStack_240 = 1;
    uStack_244 = 0xe;
    uStack_248 = 0;
    ppppppppiStack_24c = (int ********)param_3;
    uStack_250 = 0x551fa3;
    (*(code *)(*param_3)[0x3f])();
    uStack_250 = 1;
    uStack_254 = 1;
    uStack_258 = 1;
    ppppppppiStack_25c = (int ********)param_3;
    uStack_260 = 0x551fb2;
    (*(code *)(*param_3)[0x3f])();
    uStack_260 = 1;
    uStack_264 = 4;
    uStack_268 = 1;
    ppppppppiStack_26c = (int ********)param_3;
    uStack_270 = 0x551fc1;
    (*(code *)(*param_3)[0x3f])();
    uStack_270 = 1;
    uStack_274 = 1;
    uStack_278 = 2;
    ppppppppiStack_27c = (int ********)param_3;
    uStack_280 = 0x551fd0;
    (*(code *)(*param_3)[0x3f])();
    uStack_280 = 1;
    uStack_284 = 4;
    uStack_288 = 2;
    ppppppppiStack_28c = (int ********)param_3;
    uStack_290 = 0x551fdf;
    (*(code *)(*param_3)[0x3f])();
    uStack_290 = 0;
    uStack_294 = 1;
    ppppppppiStack_298 = (int ********)param_3;
    uStack_29c = 0x551feb;
    (*(code *)(*param_3)[0x3d])();
    uStack_29c = 1;
    uStack_2a0 = 0x89;
    ppppppppiStack_2a4 = (int ********)param_3;
    uStack_2a8 = 0x551ffb;
    (*(code *)(*param_3)[0x32])();
    uStack_2a8 = 1;
    uStack_2ac = 0;
    ppppppppiStack_2b0 = (int ********)param_3;
    uStack_2b4 = 0x552007;
    (*(code *)(*param_3)[0x2e])();
    uStack_2b4 = 0x212;
    ppppppppiStack_2b8 = (int ********)param_3;
    uStack_2bc = 0x552015;
    (*(code *)(*param_3)[0x4c])();
    iStack_2c0 = *param_1;
    uStack_2bc = 0x28;
    fStack_2c4 = 0.0;
    ppppppppiStack_2c8 = (int ********)param_3;
    uStack_2cc = 0x552024;
    (*(code *)(*param_3)[0x53])();
    iStack_2d0 = param_1[3];
    uStack_2cc = 0;
    ppppppppiStack_2d4 = (int ********)param_3;
    uStack_2d8 = 0x552032;
    (*(code *)(*param_3)[0x55])();
    uStack_2d8 = 7;
    uStack_2dc = 0x19;
    ppppppppiStack_2e0 = (int ********)param_3;
    fStack_2c4 = -NAN;
    fStack_2e4 = 7.817596e-39;
    (*(code *)(*param_3)[0x32])();
    fStack_2e4 = 4.34403e-44;
    (*(code *)(*param_3)[0x32])();
    iStack_2f4 = 0x13;
    (*(code *)(*param_3)[0x32])();
    piStack_2fc = (int *)((int)&pcRam00000005 + 1);
    (*(code *)(*param_3)[0x32])();
    ppppppppiStack_2e0 = (int ********)0x0;
    FUN_00546f8c();
    ppppppppiStack_19c = (int ********)0x0;
    FUN_0041e470();
    FUN_0041d7a0();
    ppppppppiStack_19c._0_1_ = 2;
    ppppppppiStack_318 = (int ********)0x5520d2;
    _eh_vector_destructor_iterator_(&uStack_228,0x10,4,FUN_00407150);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &uStack_260,"Sky\\skatemadness\\SkyEnv");
    ppppppppiStack_19c._0_1_ = 3;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &uStack_244,".\\textures\\");
    FUN_00429a60();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &uStack_244);
    ppppppppiStack_19c = (int ********)CONCAT31(ppppppppiStack_19c._1_3_,2);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &uStack_260);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &uStack_260,"Sky\\skatemadness\\SkyEnv");
    FUN_004222d0();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &uStack_260);
    pfVar8 = &fStack_2e4;
    fStack_2e4 = 0.0;
    (*(code *)(*param_3)[0x33])();
    if (iStack_198 == 2) {
      ppppppppiStack_318 = (int ********)0x7;
      ppppppppiStack_31c = (int ********)param_3;
      ppppppppiStack_320 = (int ********)0x552d56;
      (*(code *)(*param_3)[0x32])();
      ppppppppiStack_320 = (int ********)0x0;
      ppppppppiStack_324 = (int ********)0xe;
      ppppppppiStack_328 = (int ********)param_3;
      uStack_32c = 0x552d62;
      (*(code *)(*param_3)[0x32])();
      uStack_32c = 1;
      ppppppppiStack_330 = (int ********)0x1b;
      ppppppppiStack_334 = (int ********)param_3;
      ppppppppiStack_338 = (int ********)0x552d6f;
      (*(code *)(*param_3)[0x32])();
      ppppppppiStack_338 = (int ********)0x0;
      ppppppppiStack_33c = (int ********)&pcRam00000005;
      ppppppppiStack_340 = (int ********)0x0;
      ppppppppiStack_344 = (int ********)param_3;
      ppppppppiStack_348 = (int ********)0x552d7c;
      (*(code *)(*param_3)[0x3f])();
      ppppppppiStack_348 = (int ********)0x0;
      ppppppppiStack_34c = (int ********)0x0;
      ppppppppiStack_350 = (int ********)param_3;
      ppppppppiStack_354 = (int ********)0x552d87;
      (*(code *)(*param_3)[0x3d])();
      puVar1 = (undefined4 *)&stack0xfffffcf8;
      iVar6 = 4;
      do {
        puVar1[-1] = 0x40000000;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[-3] = 0;
        puVar1[-2] = 0x3f800000;
        puVar1 = puVar1 + 7;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      ppppppppiStack_354 = (int ********)0x552dbf;
      iVar6 = FUN_0041c920();
      ppppppppiStack_334 = *(int *********)(iVar6 + 8);
      ppppppppiStack_354 = (int ********)0x552dcd;
      iVar6 = FUN_0041c920();
      fStack_2e4 = (float)(int)ppppppppiStack_334;
      ppppppppiStack_340 = *(int *********)(iVar6 + 0xc);
      ppppppppiStack_2e0 = (int ********)(float)(int)ppppppppiStack_340;
      ppppppppiStack_354 = (int ********)0x2;
      ppppppppiStack_358 = (int ********)0x38;
      ppppppppiStack_35c = (int ********)param_3;
      ppppppppiStack_31c = (int ********)0x0;
      ppppppppiStack_318 = (int ********)0x0;
      ppppppppiStack_2c8 = (int ********)0x0;
      ppppppppiStack_328 = (int ********)0x10000;
      ppppppppiStack_324 = (int ********)0x2;
      ppppppppiStack_320 = (int ********)0x30002;
      ppppppppiStack_360 = (int ********)0x552e45;
      fStack_2c4 = (float)ppppppppiStack_2e0;
      (*(code *)(*param_3)[0x32])();
      ppppppppiStack_360 = (int ********)0x1;
      uStack_364 = 0x37;
      ppppppppiStack_368 = (int ********)param_3;
      ppppppppiStack_36c = (int ********)0x552e52;
      (*(code *)(*param_3)[0x32])();
      ppppppppiStack_36c = (int ********)0x0;
      uStack_370 = 0x39;
      ppppppppiStack_374 = (int ********)param_3;
      ppppppppiStack_378 = (int ********)0x552e5e;
      (*(code *)(*param_3)[0x32])();
      ppppppppiStack_378 = (int ********)0x1;
      ppppppppiStack_37c = (int ********)0x34;
      ppppppppiStack_380 = (int ********)param_3;
      iStack_384 = 0x552e6b;
      (*(code *)(*param_3)[0x32])();
      iStack_384 = 0x144;
      ppppppppiStack_388 = (int ********)param_3;
      ppppppppiStack_38c = (int ********)0x552e79;
      (*(code *)(*param_3)[0x4c])();
      ppppppppiStack_38c = (int ********)0x1c;
      ppppppppiStack_390 = (int ********)&ppppppppiStack_354;
      uStack_394 = 0x65;
      ppppppppiStack_398 = (int ********)&ppppppppiStack_360;
      ppppppppiStack_39c = (int ********)0x2;
      uStack_3a0 = 4;
      uStack_3a4 = 0;
      ppppppppiStack_3a8 = (int ********)0x4;
      ppppppppiStack_3ac = (int ********)param_3;
      ppppppppiStack_3b0 = (int ********)0x552e96;
      (*(code *)(*param_3)[0x49])();
      ppppppppiStack_3b0 = (int ********)0x0;
      iStack_3b4 = 0x34;
      ppppppppiStack_3b8 = (int ********)param_3;
      ppppppppiStack_3bc = (int ********)0x552ea2;
      (*(code *)(*param_3)[0x32])();
      ppppppppiStack_3bc = (int ********)0x1;
      ppppppppiStack_3c0 = (int ********)0x37;
      ppppppppiStack_3c4 = (int ********)param_3;
      ppppppppiStack_3c8 = (int ********)0x552eaf;
      (*(code *)(*param_3)[0x32])();
      ppppppppiStack_3c8 = (int ********)0x1;
      ppppppppiStack_3cc = (int ********)0xe;
      ppppppppiStack_3d0 = (int ********)param_3;
      ppppppppiStack_3d4 = (int ********)0x552ebc;
      (*(code *)(*param_3)[0x32])();
      ppppppppiStack_3d4 = (int ********)0x1;
      ppppppppiStack_3d8 = (int ********)((int)&pcRam00000005 + 2);
      ppppppppiStack_3dc = (int ********)param_3;
      ppppppppiStack_3e0 = (int ********)0x552ec9;
      (*(code *)(*param_3)[0x32])();
    }
    else {
      piVar5 = (int *)param_1[8];
      iVar6 = iStack_198;
      iVar4 = iStack_44;
      if (piVar5 != piRam0000002a) {
        do {
          if (piVar5[7] != 3) {
            if (iVar6 == 0) goto LAB_005521bd;
LAB_005521b5:
            iVar2 = piVar5[4];
            goto LAB_00552985;
          }
          if (iVar6 != 1) goto LAB_005521b5;
LAB_005521bd:
          if (piVar5[1] == 0) {
            ppppppppiStack_318 = (int ********)0x0;
            ppppppppiStack_31c = (int ********)param_3;
            ppppppppiStack_320 = (int ********)0x5521d7;
            (*(code *)(*param_3)[0x3d])();
          }
          else {
            ppppppppiStack_318 = (int ********)param_3;
            ppppppppiStack_31c = (int ********)0x5521ca;
            (**(code **)(piVar5[1] + 4))();
          }
          ppppppppiStack_31c = (int ********)*piVar5;
          if ((ppppppppiStack_31c != (int ********)0x0) &&
             ((int ********)iStack_2f4 != ppppppppiStack_31c)) {
            ppppppppiStack_320 = (int ********)param_3;
            ppppppppiStack_324 = (int ********)0x5521ed;
            (*(code *)(*param_3)[0x2a])();
            iStack_2f4 = *piVar5;
          }
          if (pfVar8 == (float *)piVar5[7]) goto LAB_005527ee;
          switch(pfVar8) {
          case (float *)0x0:
          case (float *)0x1:
            ppppppppiStack_31c = (int ********)0x4;
            ppppppppiStack_320 = (int ********)0x1;
            ppppppppiStack_324 = (int ********)0x0;
            ppppppppiStack_328 = (int ********)param_3;
            uStack_32c = 0x552310;
            (*(code *)(*param_3)[0x3f])();
            uStack_32c = 1;
            ppppppppiStack_330 = (int ********)0x2;
            ppppppppiStack_334 = (int ********)0x0;
            ppppppppiStack_338 = (int ********)param_3;
            ppppppppiStack_33c = (int ********)0x55231f;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_33c = (int ********)0x2;
            ppppppppiStack_340 = (int ********)0x3;
            ppppppppiStack_344 = (int ********)0x0;
            ppppppppiStack_348 = (int ********)param_3;
            ppppppppiStack_34c = (int ********)0x55232e;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_34c = (int ********)0x2;
            ppppppppiStack_350 = (int ********)0x4;
            ppppppppiStack_354 = (int ********)0x0;
            ppppppppiStack_358 = (int ********)param_3;
            ppppppppiStack_35c = (int ********)0x55233d;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_35c = (int ********)0x2;
            ppppppppiStack_360 = (int ********)&pcRam00000005;
            uStack_364 = 0;
            ppppppppiStack_368 = (int ********)param_3;
            ppppppppiStack_36c = (int ********)0x55234c;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_36c = (int ********)0x1;
            uStack_370 = 6;
            ppppppppiStack_374 = (int ********)0x0;
            ppppppppiStack_378 = (int ********)param_3;
            ppppppppiStack_37c = (int ********)0x55235b;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_37c = (int ********)0x1;
            ppppppppiStack_380 = (int ********)0xd;
            iStack_384 = 0;
            ppppppppiStack_388 = (int ********)param_3;
            ppppppppiStack_38c = (int ********)0x55236a;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_38c = (int ********)0x1;
            ppppppppiStack_390 = (int ********)0xe;
            uStack_394 = 0;
            ppppppppiStack_398 = (int ********)param_3;
            ppppppppiStack_39c = (int ********)0x552379;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_39c = (int ********)0x1;
            uStack_3a0 = 1;
            uStack_3a4 = 1;
            ppppppppiStack_3a8 = (int ********)param_3;
            ppppppppiStack_3ac = (int ********)0x552388;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3ac = (int ********)0x1;
            ppppppppiStack_3b0 = (int ********)0x4;
            iStack_3b4 = 1;
            ppppppppiStack_3b8 = (int ********)param_3;
            ppppppppiStack_3bc = (int ********)0x552397;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3bc = (int ********)0x0;
            ppppppppiStack_3c0 = (int ********)0x1;
            ppppppppiStack_3c4 = (int ********)param_3;
            ppppppppiStack_3c8 = (int ********)0x5523a4;
            (*(code *)(*param_3)[0x3d])();
            break;
          case (float *)0x4:
            ppppppppiStack_31c = (int ********)0x0;
            ppppppppiStack_320 = (int ********)0xf;
            ppppppppiStack_324 = (int ********)param_3;
            ppppppppiStack_328 = (int ********)0x55221d;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_328 = (int ********)(3 - (uint)(*(char *)(iVar4 + 0x18ed) != '\0'));
            uStack_32c = 0x16;
            ppppppppiStack_330 = (int ********)param_3;
            ppppppppiStack_334 = (int ********)0x552236;
            (*(code *)(*param_3)[0x32])();
            break;
          case (float *)0x5:
            ppppppppiStack_31c = (int ********)0x4;
            ppppppppiStack_320 = (int ********)0x1;
            ppppppppiStack_324 = (int ********)0x0;
            ppppppppiStack_328 = (int ********)param_3;
            uStack_32c = 0x55224a;
            (*(code *)(*param_3)[0x3f])();
            uStack_32c = 1;
            ppppppppiStack_330 = (int ********)0x2;
            ppppppppiStack_334 = (int ********)0x0;
            ppppppppiStack_338 = (int ********)param_3;
            ppppppppiStack_33c = (int ********)0x552259;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_33c = (int ********)0x2;
            ppppppppiStack_340 = (int ********)0x3;
            ppppppppiStack_344 = (int ********)0x0;
            ppppppppiStack_348 = (int ********)param_3;
            ppppppppiStack_34c = (int ********)0x552268;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_34c = (int ********)0x2;
            ppppppppiStack_350 = (int ********)0x4;
            ppppppppiStack_354 = (int ********)0x0;
            ppppppppiStack_358 = (int ********)param_3;
            ppppppppiStack_35c = (int ********)0x552277;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_35c = (int ********)0x2;
            ppppppppiStack_360 = (int ********)&pcRam00000005;
            uStack_364 = 0;
            ppppppppiStack_368 = (int ********)param_3;
            ppppppppiStack_36c = (int ********)0x552286;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_36c = (int ********)0x1;
            uStack_370 = 6;
            ppppppppiStack_374 = (int ********)0x0;
            ppppppppiStack_378 = (int ********)param_3;
            ppppppppiStack_37c = (int ********)0x552295;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_37c = (int ********)0x1;
            ppppppppiStack_380 = (int ********)0xd;
            iStack_384 = 0;
            ppppppppiStack_388 = (int ********)param_3;
            ppppppppiStack_38c = (int ********)0x5522a4;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_38c = (int ********)0x1;
            ppppppppiStack_390 = (int ********)0xe;
            uStack_394 = 0;
            ppppppppiStack_398 = (int ********)param_3;
            ppppppppiStack_39c = (int ********)0x5522b3;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_39c = (int ********)0x1;
            uStack_3a0 = 1;
            uStack_3a4 = 1;
            ppppppppiStack_3a8 = (int ********)param_3;
            ppppppppiStack_3ac = (int ********)0x5522c2;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3ac = (int ********)0x1;
            ppppppppiStack_3b0 = (int ********)0x4;
            iStack_3b4 = 1;
            ppppppppiStack_3b8 = (int ********)param_3;
            ppppppppiStack_3bc = (int ********)0x5522d1;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3bc = (int ********)0x1;
            ppppppppiStack_3c0 = (int ********)0xb;
            ppppppppiStack_3c4 = (int ********)0x1;
            ppppppppiStack_3c8 = (int ********)param_3;
            ppppppppiStack_3cc = (int ********)0x5522e0;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3cc = (int ********)0x0;
            ppppppppiStack_3d0 = (int ********)0x18;
            ppppppppiStack_3d4 = (int ********)0x1;
            ppppppppiStack_3d8 = (int ********)param_3;
            ppppppppiStack_3dc = (int ********)0x5522ef;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3dc = (int ********)0x0;
            ppppppppiStack_3e0 = (int ********)0x1;
            ppppppppiStack_3e4 = (int ********)param_3;
            uStack_3e8 = 0x5522fc;
            (*(code *)(*param_3)[0x3d])();
          }
          switch(piVar5[7]) {
          case 0:
            ppppppppiStack_31c = (int ********)0x1;
            ppppppppiStack_320 = (int ********)0xe;
            ppppppppiStack_324 = (int ********)param_3;
            ppppppppiStack_328 = (int ********)0x5523c4;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_328 = (int ********)0x1;
            uStack_32c = 0x89;
            ppppppppiStack_330 = (int ********)param_3;
            ppppppppiStack_334 = (int ********)0x5523d4;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_334 = (int ********)0x0;
            ppppppppiStack_338 = (int ********)0x1b;
            ppppppppiStack_33c = (int ********)param_3;
            ppppppppiStack_340 = (int ********)0x5523e1;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_340 = (int ********)0x4;
            ppppppppiStack_344 = (int ********)0x1;
            ppppppppiStack_348 = (int ********)0x0;
            ppppppppiStack_34c = (int ********)param_3;
            ppppppppiStack_350 = (int ********)0x5523f0;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_350 = (int ********)0x1;
            ppppppppiStack_354 = (int ********)0x2;
            ppppppppiStack_358 = (int ********)0x0;
            ppppppppiStack_35c = (int ********)param_3;
            ppppppppiStack_360 = (int ********)0x5523ff;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_360 = (int ********)0x2;
            uStack_364 = 3;
            ppppppppiStack_368 = (int ********)0x0;
            ppppppppiStack_36c = (int ********)param_3;
            uStack_370 = 0x55240e;
            (*(code *)(*param_3)[0x3f])();
            uStack_370 = 2;
            ppppppppiStack_374 = (int ********)0x4;
            ppppppppiStack_378 = (int ********)0x0;
            ppppppppiStack_37c = (int ********)param_3;
            ppppppppiStack_380 = (int ********)0x55241d;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_380 = (int ********)0x1;
            iStack_384 = 5;
            ppppppppiStack_388 = (int ********)0x0;
            ppppppppiStack_38c = (int ********)param_3;
            ppppppppiStack_390 = (int ********)0x55242c;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_390 = (int ********)0x2;
            uStack_394 = 6;
            ppppppppiStack_398 = (int ********)0x0;
            ppppppppiStack_39c = (int ********)param_3;
            uStack_3a0 = 0x55243b;
            (*(code *)(*param_3)[0x3f])();
            uStack_3a0 = 4;
            uStack_3a4 = 1;
            ppppppppiStack_3a8 = (int ********)0x1;
            ppppppppiStack_3ac = (int ********)param_3;
            ppppppppiStack_3b0 = (int ********)0x55244a;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3b0 = (int ********)0x2;
            iStack_3b4 = 2;
            ppppppppiStack_3b8 = (int ********)0x1;
            ppppppppiStack_3bc = (int ********)param_3;
            ppppppppiStack_3c0 = (int ********)0x552459;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3c0 = (int ********)0x1;
            ppppppppiStack_3c4 = (int ********)0x3;
            ppppppppiStack_3c8 = (int ********)0x1;
            ppppppppiStack_3cc = (int ********)param_3;
            ppppppppiStack_3d0 = (int ********)0x552468;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3d0 = (int ********)0x0;
            ppppppppiStack_3d4 = (int ********)((int)&pcRam00000005 + 1);
            ppppppppiStack_3d8 = (int ********)0x1;
            ppppppppiStack_3dc = (int ********)param_3;
            ppppppppiStack_3e0 = (int ********)0x552477;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3e0 = (int ********)0x3;
            ppppppppiStack_3e4 = (int ********)0x4;
            uStack_3e8 = 1;
            ppppppppiStack_3ec = (int ********)param_3;
            ppppppppiStack_3f0 = (int ********)0x552486;
            (*(code *)(*param_3)[0x3f])();
            goto LAB_0055255a;
          case 1:
            ppppppppiStack_31c = (int ********)0x4;
            ppppppppiStack_320 = (int ********)0x1;
            ppppppppiStack_324 = (int ********)0x0;
            ppppppppiStack_328 = (int ********)param_3;
            uStack_32c = 0x55249a;
            (*(code *)(*param_3)[0x3f])();
            uStack_32c = 1;
            ppppppppiStack_330 = (int ********)0x2;
            ppppppppiStack_334 = (int ********)0x0;
            ppppppppiStack_338 = (int ********)param_3;
            ppppppppiStack_33c = (int ********)0x5524a9;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_33c = (int ********)0x2;
            ppppppppiStack_340 = (int ********)0x3;
            ppppppppiStack_344 = (int ********)0x0;
            ppppppppiStack_348 = (int ********)param_3;
            ppppppppiStack_34c = (int ********)0x5524b8;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_34c = (int ********)0x2;
            ppppppppiStack_350 = (int ********)0x4;
            ppppppppiStack_354 = (int ********)0x0;
            ppppppppiStack_358 = (int ********)param_3;
            ppppppppiStack_35c = (int ********)0x5524c7;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_35c = (int ********)0x2;
            ppppppppiStack_360 = (int ********)&pcRam00000005;
            uStack_364 = 0;
            ppppppppiStack_368 = (int ********)param_3;
            ppppppppiStack_36c = (int ********)0x5524d6;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_36c = (int ********)0x1;
            uStack_370 = 6;
            ppppppppiStack_374 = (int ********)0x0;
            ppppppppiStack_378 = (int ********)param_3;
            ppppppppiStack_37c = (int ********)0x5524e5;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_37c = (int ********)0x4;
            ppppppppiStack_380 = (int ********)0x1;
            iStack_384 = 1;
            ppppppppiStack_388 = (int ********)param_3;
            ppppppppiStack_38c = (int ********)0x5524f4;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_38c = (int ********)0x2;
            ppppppppiStack_390 = (int ********)0x2;
            uStack_394 = 1;
            ppppppppiStack_398 = (int ********)param_3;
            ppppppppiStack_39c = (int ********)0x552503;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_39c = (int ********)0x1;
            uStack_3a0 = 3;
            uStack_3a4 = 1;
            ppppppppiStack_3a8 = (int ********)param_3;
            ppppppppiStack_3ac = (int ********)0x552512;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3ac = (int ********)0x0;
            ppppppppiStack_3b0 = (int ********)((int)&pcRam00000005 + 1);
            iStack_3b4 = 1;
            ppppppppiStack_3b8 = (int ********)param_3;
            ppppppppiStack_3bc = (int ********)0x552521;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3bc = (int ********)0x2;
            ppppppppiStack_3c0 = (int ********)0x4;
            ppppppppiStack_3c4 = (int ********)0x1;
            ppppppppiStack_3c8 = (int ********)param_3;
            ppppppppiStack_3cc = (int ********)0x552530;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3cc = (int ********)0x0;
            ppppppppiStack_3d0 = (int ********)0xe;
            ppppppppiStack_3d4 = (int ********)param_3;
            ppppppppiStack_3d8 = (int ********)0x55253d;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_3d8 = (int ********)0x1;
            ppppppppiStack_3dc = (int ********)0x89;
            ppppppppiStack_3e0 = (int ********)param_3;
            ppppppppiStack_3e4 = (int ********)0x55254d;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_3e4 = (int ********)0x1;
            uStack_3e8 = 0x1b;
            ppppppppiStack_3ec = (int ********)param_3;
            ppppppppiStack_3f0 = (int ********)&LAB_0055255a;
            (*(code *)(*param_3)[0x32])();
LAB_0055255a:
            iVar6 = piVar5[2];
            if (iVar6 == 0) {
              ppppppppiStack_31c = (int ********)0x0;
              ppppppppiStack_320 = (int ********)0x1;
              ppppppppiStack_324 = (int ********)param_3;
              ppppppppiStack_328 = (int ********)0x552572;
              (*(code *)(*param_3)[0x3d])();
            }
            else {
LAB_005527e1:
              ppppppppiStack_31c = (int ********)0x1;
              ppppppppiStack_320 = (int ********)param_3;
              ppppppppiStack_324 = (int ********)0x5527e7;
              (**(code **)(iVar6 + 4))();
            }
            break;
          case 2:
            ppppppppiStack_31c = (int ********)0x0;
            ppppppppiStack_320 = (int ********)0xe;
            ppppppppiStack_324 = (int ********)param_3;
            ppppppppiStack_328 = (int ********)0x552584;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_328 = (int ********)0x0;
            uStack_32c = 0x89;
            ppppppppiStack_330 = (int ********)param_3;
            ppppppppiStack_334 = (int ********)0x552594;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_334 = (int ********)0x1;
            ppppppppiStack_338 = (int ********)0x1b;
            ppppppppiStack_33c = (int ********)param_3;
            ppppppppiStack_340 = (int ********)0x5525a1;
            (*(code *)(*param_3)[0x32])();
            break;
          case 3:
            ppppppppiStack_31c = (int ********)0x0;
            ppppppppiStack_320 = (int ********)0xe;
            ppppppppiStack_324 = (int ********)param_3;
            ppppppppiStack_328 = (int ********)0x5525b3;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_328 = (int ********)0x0;
            uStack_32c = 0x89;
            ppppppppiStack_330 = (int ********)param_3;
            ppppppppiStack_334 = (int ********)0x5525c3;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_334 = (int ********)0x0;
            ppppppppiStack_338 = (int ********)0x1b;
            ppppppppiStack_33c = (int ********)param_3;
            ppppppppiStack_340 = (int ********)0x5525d0;
            (*(code *)(*param_3)[0x32])();
            break;
          case 4:
            ppppppppiStack_31c = (int ********)0x1;
            ppppppppiStack_320 = (int ********)0xf;
            ppppppppiStack_324 = (int ********)param_3;
            ppppppppiStack_328 = (int ********)0x5525e2;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_328 = (int ********)0x1;
            uStack_32c = 0x16;
            ppppppppiStack_330 = (int ********)param_3;
            ppppppppiStack_334 = (int ********)0x5525ef;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_334 = (int ********)0x1;
            ppppppppiStack_338 = (int ********)0xe;
            ppppppppiStack_33c = (int ********)param_3;
            ppppppppiStack_340 = (int ********)0x5525fc;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_340 = (int ********)0x1;
            ppppppppiStack_344 = (int ********)0x89;
            ppppppppiStack_348 = (int ********)param_3;
            ppppppppiStack_34c = (int ********)0x55260c;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_34c = (int ********)0x1;
            ppppppppiStack_350 = (int ********)0x1b;
            ppppppppiStack_354 = (int ********)param_3;
            ppppppppiStack_358 = (int ********)0x552619;
            (*(code *)(*param_3)[0x32])();
            break;
          case 5:
            ppppppppiStack_31c = (int ********)0x1;
            ppppppppiStack_320 = (int ********)0xe;
            ppppppppiStack_324 = (int ********)param_3;
            ppppppppiStack_328 = (int ********)0x55262b;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_328 = (int ********)0x1;
            uStack_32c = 0x89;
            ppppppppiStack_330 = (int ********)param_3;
            ppppppppiStack_334 = (int ********)0x55263b;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_334 = (int ********)0x0;
            ppppppppiStack_338 = (int ********)0x1b;
            ppppppppiStack_33c = (int ********)param_3;
            ppppppppiStack_340 = (int ********)0x552648;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_340 = (int ********)0x4;
            ppppppppiStack_344 = (int ********)0x1;
            ppppppppiStack_348 = (int ********)0x0;
            ppppppppiStack_34c = (int ********)param_3;
            ppppppppiStack_350 = (int ********)0x552657;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_350 = (int ********)0x1;
            ppppppppiStack_354 = (int ********)0x2;
            ppppppppiStack_358 = (int ********)0x0;
            ppppppppiStack_35c = (int ********)param_3;
            ppppppppiStack_360 = (int ********)0x552666;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_360 = (int ********)0x2;
            uStack_364 = 3;
            ppppppppiStack_368 = (int ********)0x0;
            ppppppppiStack_36c = (int ********)param_3;
            uStack_370 = 0x552675;
            (*(code *)(*param_3)[0x3f])();
            uStack_370 = 2;
            ppppppppiStack_374 = (int ********)0x4;
            ppppppppiStack_378 = (int ********)0x0;
            ppppppppiStack_37c = (int ********)param_3;
            ppppppppiStack_380 = (int ********)0x552684;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_380 = (int ********)0x1;
            iStack_384 = 5;
            ppppppppiStack_388 = (int ********)0x0;
            ppppppppiStack_38c = (int ********)param_3;
            ppppppppiStack_390 = (int ********)0x552693;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_390 = (int ********)0x2;
            uStack_394 = 6;
            ppppppppiStack_398 = (int ********)0x0;
            ppppppppiStack_39c = (int ********)param_3;
            uStack_3a0 = 0x5526a2;
            (*(code *)(*param_3)[0x3f])();
            uStack_3a0 = 3;
            uStack_3a4 = 0xd;
            ppppppppiStack_3a8 = (int ********)0x0;
            ppppppppiStack_3ac = (int ********)param_3;
            ppppppppiStack_3b0 = (int ********)0x5526b1;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3b0 = (int ********)0x3;
            iStack_3b4 = 0xe;
            ppppppppiStack_3b8 = (int ********)0x0;
            ppppppppiStack_3bc = (int ********)param_3;
            ppppppppiStack_3c0 = (int ********)0x5526c0;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3c0 = (int ********)0x2;
            ppppppppiStack_3c4 = (int ********)0x2;
            ppppppppiStack_3c8 = (int ********)0x1;
            ppppppppiStack_3cc = (int ********)param_3;
            ppppppppiStack_3d0 = (int ********)0x5526cf;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3d0 = (int ********)0x1;
            ppppppppiStack_3d4 = (int ********)0x3;
            ppppppppiStack_3d8 = (int ********)0x1;
            ppppppppiStack_3dc = (int ********)param_3;
            ppppppppiStack_3e0 = (int ********)0x5526de;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3e0 = (int ********)0x4;
            ppppppppiStack_3e4 = (int ********)0x1;
            uStack_3e8 = 1;
            ppppppppiStack_3ec = (int ********)param_3;
            ppppppppiStack_3f0 = (int ********)0x5526ed;
            (*(code *)(*param_3)[0x3f])();
            ppppppppiStack_3f0 = (int ********)0x0;
            uStack_3f4 = 6;
            uStack_3f8 = 1;
            ppppppppiStack_3fc = (int ********)param_3;
            uStack_400 = 0x5526fc;
            (*(code *)(*param_3)[0x3f])();
            uStack_400 = 3;
            uStack_404 = 4;
            ppppppppiStack_408 = (int ********)0x1;
            ppppppppiStack_40c = (int ********)param_3;
            uStack_410 = 0x55270b;
            (*(code *)(*param_3)[0x3f])();
            uStack_410 = 1;
            ppppppppiStack_414 = (int ********)0xd;
            uStack_418 = 1;
            (*(code *)(*param_3)[0x3f])(param_3);
            (*(code *)(*param_3)[0x3f])(param_3,1,0xe,1);
            (*(code *)(*param_3)[0x3f])(param_3,1,0xb,0);
            ppppppppiStack_408 = (int ********)0x44000000;
            uStack_404 = 0;
            uStack_400 = 0;
            ppppppppiStack_3fc = (int ********)0x0;
            uStack_3f8 = 0;
            uStack_3f4 = 0x44000000;
            ppppppppiStack_3f0 = (int ********)0x0;
            ppppppppiStack_3ec = (int ********)0x0;
            uStack_3e8 = 0;
            ppppppppiStack_3e4 = (int ********)0x0;
            ppppppppiStack_3e0 = (int ********)0x44000000;
            ppppppppiStack_3dc = (int ********)0x0;
            ppppppppiStack_3d8 = (int ********)0x0;
            ppppppppiStack_3d4 = (int ********)0x0;
            ppppppppiStack_3d0 = (int ********)0x0;
            ppppppppiStack_3cc = (int ********)0x3f800000;
            (*(code *)(*param_3)[0x3f])(param_3,1,0x18,2);
            (*(code *)(*param_3)[0x25])(param_3,0x11,&uStack_418);
            iVar6 = piVar5[2];
            if (iVar6 == 0) break;
            goto LAB_005527e1;
          }
          pfVar8 = (float *)piVar5[7];
LAB_005527ee:
          if (iStack_1a0 == 1) {
            ppppppppiStack_31c = (int ********)0x2;
            ppppppppiStack_320 = (int ********)0x17;
            ppppppppiStack_324 = (int ********)param_3;
            ppppppppiStack_328 = (int ********)0x552809;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_328 = (int ********)0x1;
            uStack_32c = 0x34;
            ppppppppiStack_330 = (int ********)param_3;
            ppppppppiStack_334 = (int ********)0x552816;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_334 = (int ********)((int)&pcRam00000005 + 3);
            ppppppppiStack_338 = (int ********)0x38;
            ppppppppiStack_33c = (int ********)param_3;
            ppppppppiStack_340 = (int ********)0x552823;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_340 = (int ********)0x1;
            ppppppppiStack_344 = (int ********)0x37;
            ppppppppiStack_348 = (int ********)param_3;
            ppppppppiStack_34c = (int ********)0x552830;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_34c = (int ********)((int)&pcRam00000005 + 2);
            ppppppppiStack_350 = (int ********)0x36;
            ppppppppiStack_354 = (int ********)param_3;
            ppppppppiStack_358 = (int ********)0x55283d;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_358 = (int ********)0x1;
            ppppppppiStack_35c = (int ********)0x9;
            ppppppppiStack_360 = (int ********)param_3;
            uStack_364 = 0x55284a;
            (*(code *)(*param_3)[0x32])();
            uStack_364 = 0;
            ppppppppiStack_368 = (int ********)0xa8;
            ppppppppiStack_36c = (int ********)param_3;
            uStack_370 = 0x55285a;
            (*(code *)(*param_3)[0x32])();
            uStack_370 = 2;
            ppppppppiStack_374 = (int ********)0x16;
            ppppppppiStack_378 = (int ********)param_3;
            ppppppppiStack_37c = (int ********)0x552867;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_388 = (int ********)piVar5[5];
            ppppppppiStack_37c = (int ********)(piVar5[4] / 3);
            iStack_384 = (piVar5[6] - (int)ppppppppiStack_388) + 1;
            ppppppppiStack_38c = (int ********)0x4;
            ppppppppiStack_390 = (int ********)param_3;
            uStack_394 = 0x552890;
            ppppppppiStack_380 = (int ********)pppppppppiVar3;
            (*(code *)(*param_3)[0x47])();
            uStack_394 = 8;
            ppppppppiStack_398 = (int ********)0x36;
            ppppppppiStack_39c = (int ********)param_3;
            uStack_3a0 = 0x55289d;
            (*(code *)(*param_3)[0x32])();
            uStack_3a0 = 3;
            uStack_3a4 = 0x16;
            ppppppppiStack_3a8 = (int ********)param_3;
            ppppppppiStack_3ac = (int ********)0x5528aa;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_3b8 = (int ********)piVar5[5];
            ppppppppiStack_3ac = (int ********)(piVar5[4] / 3);
            iStack_3b4 = (piVar5[6] - (int)ppppppppiStack_3b8) + 1;
            ppppppppiStack_3bc = (int ********)0x4;
            ppppppppiStack_3c0 = (int ********)param_3;
            ppppppppiStack_3c4 = (int ********)0x5528d3;
            ppppppppiStack_3b0 = (int ********)pppppppppiVar3;
            (*(code *)(*param_3)[0x47])();
            ppppppppiStack_3c4 = (int ********)0x3;
            ppppppppiStack_3c8 = (int ********)0x16;
            ppppppppiStack_3cc = (int ********)param_3;
            ppppppppiStack_3d0 = (int ********)0x5528e0;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_3d0 = (int ********)0x2;
            ppppppppiStack_3d4 = (int ********)0x9;
            ppppppppiStack_3d8 = (int ********)param_3;
            ppppppppiStack_3dc = (int ********)0x5528ed;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_3dc = (int ********)0xf;
            ppppppppiStack_3e0 = (int ********)0xa8;
            ppppppppiStack_3e4 = (int ********)param_3;
            uStack_3e8 = 0x5528fd;
            (*(code *)(*param_3)[0x32])();
            uStack_3e8 = 1;
            ppppppppiStack_3ec = (int ********)0x37;
            ppppppppiStack_3f0 = (int ********)param_3;
            uStack_3f4 = 0x55290a;
            (*(code *)(*param_3)[0x32])();
            uStack_3f4 = 1;
            uStack_3f8 = 0x36;
            ppppppppiStack_3fc = (int ********)param_3;
            uStack_400 = 0x552917;
            (*(code *)(*param_3)[0x32])();
            uStack_400 = 0;
            uStack_404 = 0x34;
            ppppppppiStack_408 = (int ********)param_3;
            ppppppppiStack_40c = (int ********)0x552924;
            (*(code *)(*param_3)[0x32])();
            ppppppppiStack_40c = (int ********)0x4;
            uStack_410 = 0x17;
            ppppppppiStack_414 = (int ********)param_3;
            uStack_418 = 0x552931;
            (*(code *)(*param_3)[0x32])();
          }
          else {
            ppppppppiStack_328 = (int ********)piVar5[5];
            ppppppppiStack_31c = (int ********)(piVar5[4] / 3);
            ppppppppiStack_324 = (int ********)((piVar5[6] - (int)ppppppppiStack_328) + 1);
            uStack_32c = 4;
            ppppppppiStack_330 = (int ********)param_3;
            ppppppppiStack_334 = (int ********)0x55295c;
            ppppppppiStack_320 = (int ********)pppppppppiVar3;
            (*(code *)(*param_3)[0x47])();
          }
          iVar2 = piVar5[4];
          iVar6 = iStack_198;
          iVar4 = iStack_1a0;
LAB_00552985:
          pppppppppiVar3 = (int *********)((int)pppppppppiVar3 + iVar2);
          piVar5 = piVar5 + 8;
        } while (piVar5 != piRam0000002a);
      }
      param_1 = piStack_2fc;
      if (iVar6 != 1) {
        ppppppppiStack_318 = (int ********)0x22;
        ppppppppiStack_31c = (int ********)param_3;
        ppppppppiStack_320 = (int ********)0x5529af;
        (*(code *)(*param_3)[0x32])();
        ppppppppiStack_320 = (int ********)0x0;
        ppppppppiStack_324 = (int ********)0xe;
        ppppppppiStack_328 = (int ********)param_3;
        uStack_32c = 0x5529bc;
        (*(code *)(*param_3)[0x32])();
        uStack_32c = 1;
        ppppppppiStack_330 = (int ********)0x1b;
        ppppppppiStack_334 = (int ********)param_3;
        ppppppppiStack_338 = (int ********)0x5529c9;
        (*(code *)(*param_3)[0x32])();
        ppppppppiStack_338 = (int ********)0x2;
        ppppppppiStack_33c = (int ********)0x13;
        ppppppppiStack_340 = (int ********)param_3;
        ppppppppiStack_344 = (int ********)0x5529d6;
        (*(code *)(*param_3)[0x32])();
        ppppppppiStack_344 = (int ********)0x2;
        ppppppppiStack_348 = (int ********)0x14;
        ppppppppiStack_34c = (int ********)param_3;
        ppppppppiStack_350 = (int ********)0x5529e3;
        (*(code *)(*param_3)[0x32])();
        ppppppppiStack_350 = (int ********)0x0;
        ppppppppiStack_354 = (int ********)0x14;
        ppppppppiStack_358 = (int ********)0x0;
        ppppppppiStack_35c = (int ********)param_3;
        ppppppppiStack_360 = (int ********)0x5529f2;
        (*(code *)(*param_3)[0x3f])();
        ppppppppiStack_360 = (int ********)DAT_005b5f28;
        uStack_364 = 0x13;
        ppppppppiStack_368 = (int ********)0x0;
        ppppppppiStack_36c = (int ********)param_3;
        ppppppppiStack_34c = (int ********)DAT_005b5f28;
        uStack_370 = 0x552a0c;
        (*(code *)(*param_3)[0x3f])();
        uStack_370 = 1;
        ppppppppiStack_374 = (int ********)0x12;
        ppppppppiStack_378 = (int ********)0x0;
        ppppppppiStack_37c = (int ********)param_3;
        ppppppppiStack_380 = (int ********)0x552a1b;
        (*(code *)(*param_3)[0x3f])();
        ppppppppiStack_380 = (int ********)0x3;
        iStack_384 = 0xd;
        ppppppppiStack_388 = (int ********)0x0;
        ppppppppiStack_38c = (int ********)param_3;
        ppppppppiStack_390 = (int ********)0x552a2a;
        (*(code *)(*param_3)[0x3f])();
        ppppppppiStack_390 = (int ********)0x3;
        uStack_394 = 0xe;
        ppppppppiStack_398 = (int ********)0x0;
        ppppppppiStack_39c = (int ********)param_3;
        uStack_3a0 = 0x552a39;
        (*(code *)(*param_3)[0x3f])();
        uStack_3a0 = 0x30000;
        uStack_3a4 = 0xb;
        ppppppppiStack_3a8 = (int ********)0x0;
        ppppppppiStack_3ac = (int ********)param_3;
        ppppppppiStack_3b0 = (int ********)0x552a4b;
        (*(code *)(*param_3)[0x3f])();
        ppppppppiStack_3b0 = (int ********)0x3;
        iStack_3b4 = 0x18;
        ppppppppiStack_3b8 = (int ********)0x0;
        ppppppppiStack_3bc = (int ********)param_3;
        ppppppppiStack_3c0 = (int ********)0x552a5a;
        (*(code *)(*param_3)[0x3f])();
        ppppppppiStack_3c0 = (int ********)0x4;
        ppppppppiStack_3c4 = (int ********)0x1;
        ppppppppiStack_3c8 = (int ********)0x0;
        ppppppppiStack_3cc = (int ********)param_3;
        ppppppppiStack_3d0 = (int ********)0x552a69;
        (*(code *)(*param_3)[0x3f])();
        ppppppppiStack_3d0 = (int ********)0x2;
        ppppppppiStack_3d4 = (int ********)0x2;
        ppppppppiStack_3d8 = (int ********)0x0;
        ppppppppiStack_3dc = (int ********)param_3;
        ppppppppiStack_3e0 = (int ********)0x552a78;
        (*(code *)(*param_3)[0x3f])();
        ppppppppiStack_3e0 = (int ********)0x1;
        ppppppppiStack_3e4 = (int ********)0x3;
        uStack_3e8 = 0;
        ppppppppiStack_3ec = (int ********)param_3;
        ppppppppiStack_3f0 = (int ********)0x552a87;
        (*(code *)(*param_3)[0x3f])();
        ppppppppiStack_3f0 = (int ********)0x4;
        uStack_3f4 = 4;
        uStack_3f8 = 0;
        ppppppppiStack_3fc = (int ********)param_3;
        uStack_400 = 0x552a96;
        (*(code *)(*param_3)[0x3f])();
        uStack_400 = 2;
        uStack_404 = 5;
        ppppppppiStack_408 = (int ********)0x0;
        ppppppppiStack_40c = (int ********)param_3;
        uStack_410 = 0x552aa5;
        (*(code *)(*param_3)[0x3f])();
        uStack_410 = 1;
        ppppppppiStack_414 = (int ********)((int)&pcRam00000005 + 1);
        uStack_418 = 0;
        (*(code *)(*param_3)[0x3f])(param_3);
        (*(code *)(*param_3)[0x3f])(param_3,0,0x18,0);
        (*(code *)(*param_3)[0x3f])(param_3,1,1,4);
        (*(code *)(*param_3)[0x3f])(param_3,1,2,2);
        (*(code *)(*param_3)[0x3f])(param_3,1,3,1);
        (*(code *)(*param_3)[0x3f])(param_3,1,4,2);
        (*(code *)(*param_3)[0x3f])(param_3,1,5,1);
        (*(code *)(*param_3)[0x3f])(param_3,1,6,1);
        (*(code *)(*param_3)[0x3f])(param_3,1,0xb,0);
        (*(code *)(*param_3)[0x3f])(param_3,1,0x18,0);
        (*(code *)(*param_3)[0x3f])(param_3,1,0xd);
        (*(code *)(*param_3)[0x3f])(param_3,1,0xe);
        (*pcRam00000005)(param_3,0);
        iVar4 = 0;
        iVar6 = iRam00000021;
        if (iRam00000021 != iRam00000025) {
          do {
            if ((*(int *)(iVar6 + 0x1c) == 0) && (*(int *)(iVar6 + 0xc) != 0)) {
              (**(code **)(*(int *)(iVar6 + 0xc) + 4))(param_3,1);
              (*(code *)(*param_3)[0x47])
                        (param_3,4,*(int *)(iVar6 + 0x14),
                         (*(int *)(iVar6 + 0x18) - *(int *)(iVar6 + 0x14)) + 1,iVar4,
                         *(int *)(iVar6 + 0x10) / 3);
              iVar2 = *(int *)(iVar6 + 0x10);
            }
            else {
              iVar2 = *(int *)(iVar6 + 0x10);
            }
            iVar4 = iVar4 + iVar2;
            iVar6 = iVar6 + 0x20;
          } while (iVar6 != iRam00000025);
        }
        (*(code *)(*param_3)[0x3f])(param_3,0,1,4);
        (*(code *)(*param_3)[0x3f])(param_3,0,2,1);
        (*(code *)(*param_3)[0x3f])(param_3,0,3,2);
        (*(code *)(*param_3)[0x3f])(param_3,0,4,2);
        (*(code *)(*param_3)[0x3f])(param_3,0,5,2);
        (*(code *)(*param_3)[0x3f])(param_3,0,6,1);
        (*(code *)(*param_3)[0x3f])(param_3,0,0xd,1);
        (*(code *)(*param_3)[0x3f])(param_3,0,0xe,1);
        (*(code *)(*param_3)[0x3f])(param_3,0,0xb,0);
        (*(code *)(*param_3)[0x3f])(param_3,0,0x18,0);
        (*(code *)(*param_3)[0x3f])(param_3,1,1,1);
        (*(code *)(*param_3)[0x3f])(param_3,1,4,1);
        (*(code *)(*param_3)[0x3f])(param_3,1,0xb,1);
        uVar7 = 0x18;
        (*(code *)(*param_3)[0x3f])(param_3,1,0x18,0);
        (*(code *)(*param_3)[0x32])(param_3,0x1b,0);
        (*(code *)(*param_3)[0x32])(param_3,0xe,1);
        (*(code *)(*param_3)[0x32])(param_3,0x22,uVar7);
        (*(code *)(*param_3)[0x32])(param_3,0x13,5);
        (*(code *)(*param_3)[0x32])(param_3,0x14,6);
      }
    }
    ppppppppiStack_318 = (int ********)0xb;
    ppppppppiStack_31c = (int ********)0x1;
    ppppppppiStack_320 = (int ********)param_3;
    ppppppppiStack_324 = (int ********)0x552d0b;
    (*(code *)(*param_3)[0x3f])();
    ppppppppiStack_324 = (int ********)0x0;
    ppppppppiStack_328 = (int ********)0x18;
    uStack_32c = 1;
    ppppppppiStack_330 = (int ********)param_3;
    ppppppppiStack_334 = (int ********)0x552d19;
    (*(code *)(*param_3)[0x3f])();
    param_1[6] = 0;
    uStack_4 = 0xffffffff;
    uStack_180 = 0x552d3d;
    _eh_vector_destructor_iterator_(auStack_50,0x10,4,FUN_00407150);
  }
  ExceptionList = local_c;
  return 0;
}





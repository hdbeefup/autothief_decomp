/* config functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_00401f60 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00401f60(int *param_1,LPCSTR param_2,int param_3,undefined1 **param_4)

{
  int *piVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  UINT CodePage;
  DWORD DVar5;
  short *psVar6;
  undefined1 **ppuVar7;
  undefined1 *puStack_550;
  short local_540 [520];
  CHAR local_130 [260];
  undefined1 local_2c [40];
  
  puStack_550 = (undefined1 *)0x401f74;
  FUN_004025d0();
  if (param_4 != (undefined1 **)0x0) {
    iVar4 = (int)*param_4;
    while (iVar4 != 0) {
      puStack_550 = param_4[1];
      FUN_00402330(local_2c,iVar4);
      piVar1 = (int *)(param_4 + 2);
      param_4 = param_4 + 2;
      iVar4 = *piVar1;
    }
  }
  puStack_550 = local_2c;
  iVar4 = (**(code **)(*param_1 + 0x10))();
  if (iVar4 < 0) goto LAB_00402146;
  CodePage = (*(code *)PTR_FUN_005a20d0)();
  DVar5 = GetModuleFileNameA(DAT_005b612c,local_130,0x104);
  if (DVar5 == 0) {
    iVar4 = FUN_00402160();
    goto LAB_00402146;
  }
  if (DVar5 == 0x104) {
    FUN_00402180();
    return -0x7ff8ff86;
  }
  iVar4 = lstrlenA(local_130);
  if (&stack0x00000000 != (undefined1 *)0x550) {
    puStack_550 = (undefined1 *)((uint)puStack_550 & 0xffff0000);
    MultiByteToWideChar(CodePage,0,local_130,-1,(LPWSTR)&puStack_550,iVar4 + 1);
  }
  param_4 = &puStack_550;
  psVar3 = local_540;
  ppuVar7 = param_4;
  sVar2 = (short)puStack_550;
  while (sVar2 != 0) {
    *psVar3 = *(short *)ppuVar7;
    psVar6 = psVar3 + 1;
    if (*(short *)ppuVar7 == 0x27) {
      *psVar6 = 0x27;
      psVar6 = psVar3 + 2;
    }
    ppuVar7 = (undefined1 **)((int)ppuVar7 + 2);
    psVar3 = psVar6;
    sVar2 = *(short *)ppuVar7;
  }
  *psVar3 = 0;
  FUN_00402330(local_2c,L"Module",local_540);
  if (param_3 == 0) {
    if (param_2 == (LPCSTR)0x0) {
LAB_004020f9:
      ppuVar7 = (undefined1 **)0x0;
    }
    else {
      iVar4 = lstrlenA(param_2);
      ppuVar7 = &puStack_550;
      if (&stack0x00000000 == (undefined1 *)0x550) goto LAB_004020f9;
      puStack_550 = (undefined1 *)((uint)puStack_550 & 0xffff0000);
      MultiByteToWideChar(CodePage,0,param_2,-1,(LPWSTR)&puStack_550,iVar4 + 1);
    }
    iVar4 = FUN_00403d70(local_2c,param_4,ppuVar7,L"REGISTRY");
    goto LAB_00402146;
  }
  if (param_2 == (LPCSTR)0x0) {
LAB_004020a8:
    ppuVar7 = (undefined1 **)0x0;
  }
  else {
    iVar4 = lstrlenA(param_2);
    ppuVar7 = &puStack_550;
    if (&stack0x00000000 == (undefined1 *)0x550) goto LAB_004020a8;
    puStack_550 = (undefined1 *)((uint)puStack_550 & 0xffff0000);
    MultiByteToWideChar(CodePage,0,param_2,-1,(LPWSTR)&puStack_550,iVar4 + 1);
  }
  iVar4 = FUN_00402650(local_2c,param_4,ppuVar7,L"REGISTRY");
LAB_00402146:
  FUN_00402180();
  return iVar4;
}




/* Function: FUN_00403e50 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_00403e50(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  int iVar4;
  UINT CodePage;
  DWORD DVar5;
  WCHAR *pWVar6;
  WCHAR *pWVar7;
  undefined4 uStack_550;
  WCHAR local_540 [520];
  CHAR local_130 [260];
  undefined1 local_2c [40];
  
  uStack_550 = (undefined1 *)0x403e64;
  FUN_004025d0();
  if (param_4 != (int *)0x0) {
    iVar4 = *param_4;
    while (iVar4 != 0) {
      uStack_550 = (undefined1 *)param_4[1];
      FUN_00402330(local_2c,iVar4);
      piVar1 = param_4 + 2;
      param_4 = param_4 + 2;
      iVar4 = *piVar1;
    }
  }
  uStack_550 = local_2c;
  iVar4 = (**(code **)(*param_1 + 0x10))();
  if (-1 < iVar4) {
    CodePage = (*(code *)PTR_FUN_005a20d0)();
    DVar5 = GetModuleFileNameA(DAT_005b612c,local_130,0x104);
    if (DVar5 == 0) {
      iVar4 = FUN_00402160();
    }
    else {
      if (DVar5 == 0x104) {
        FUN_00402180();
        return -0x7ff8ff86;
      }
      iVar4 = lstrlenA(local_130);
      pWVar7 = (WCHAR *)&uStack_550;
      if (&stack0x00000000 != (undefined1 *)0x550) {
        uStack_550 = (undefined1 *)((uint)uStack_550 & 0xffff0000);
        MultiByteToWideChar(CodePage,0,local_130,-1,(LPWSTR)&uStack_550,iVar4 + 1);
      }
      pWVar3 = local_540;
      WVar2 = (WCHAR)uStack_550;
      while (WVar2 != L'\0') {
        *pWVar3 = *pWVar7;
        pWVar6 = pWVar3 + 1;
        if (*pWVar7 == L'\'') {
          *pWVar6 = L'\'';
          pWVar6 = pWVar3 + 2;
        }
        pWVar7 = pWVar7 + 1;
        pWVar3 = pWVar6;
        WVar2 = *pWVar7;
      }
      *pWVar3 = L'\0';
      FUN_00402330(local_2c,L"Module",local_540);
      if (param_3 == 0) {
        iVar4 = FUN_00404040(local_2c,&uStack_550,param_2,L"REGISTRY");
      }
      else {
        iVar4 = FUN_00403fc0(local_2c,&uStack_550,param_2,L"REGISTRY");
      }
    }
  }
  FUN_00402180();
  return iVar4;
}




/* Function: FUN_00405940 */

undefined4 * __thiscall FUN_00405940(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar1 = DefWindowProcA_exref;
  puStack_8 = &LAB_0057a93e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = pcVar1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_4 = 0;
  FUN_00404f40();
  param_1[0xd] = &PTR_LAB_00582aa4;
  param_1[0xe] = &PTR_LAB_00582aa4;
  param_1[0xf] = &PTR_LAB_00582aa8;
  *param_1 = &PTR_LAB_00582d14;
  param_1[0xd] = &PTR_LAB_00582d10;
  param_1[0xe] = &PTR_FUN_00582d0c;
  param_1[0xf] = &PTR_FUN_00582d04;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0x437a0000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_0042b540();
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0x8aa] = 0;
  param_1[0x8ab] = 0;
  param_1[0x8ac] = 0;
  param_1[0x8ad] = 0;
  param_1[0x8ae] = 0;
  param_1[0x8af] = 0;
  param_1[0x8b0] = 0;
  *(undefined1 *)(param_1 + 0x8b1) = 0;
  param_1[0x8b2] = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (abStack_28,"Config.ini");
  FUN_0042a7a0(abStack_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_28);
  uVar2 = FUN_0042db90();
  param_1[0x8aa] = uVar2;
  param_1[0x16] = param_2;
  ExceptionList = pvStack_c;
  return param_1;
}




/* Function: FUN_0042b2d0 */

undefined1 __fastcall FUN_0042b2d0(int *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  char cVar1;
  bool bVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_70 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_54 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_38 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_1c [28];
  
  if ((int *)param_1[0x5f1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5f1] + 0xc))(1);
  }
  param_1[0x5f1] = 0;
  if ((int *)param_1[0x5f2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5f2] + 0xc))(1);
  }
  param_1[0x5f2] = 0;
  pvVar3 = operator_new(0x11c,(nothrow_t *)&DAT_005b6164);
  if (pvVar3 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_54,"MaxProjectedShadows");
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_70,"MaxDecaledShadows");
    uVar9 = 0;
    uVar4 = FUN_004224c0(abStack_1c,abStack_54);
    uVar4 = FUN_0040e4b0(uVar4,uVar9);
    uVar8 = 0;
    uVar9 = FUN_004224c0(abStack_38,abStack_70);
    uVar9 = FUN_0040e4b0(uVar9,uVar8,uVar4);
    iVar5 = FUN_004399d0(uVar9,uVar4);
  }
  param_1[0x5f1] = iVar5;
  if (pvVar3 != (void *)0x0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_38);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_1c);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_70);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_54);
  }
  pvVar3 = operator_new(0x38c,(nothrow_t *)&DAT_005b6164);
  if (pvVar3 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00519750();
  }
  param_1[0x5f2] = iVar5;
  cVar1 = (**(code **)(*param_1 + 0x14))(param_1[0x5f4],param_1);
  if (cVar1 != '\0') {
    if (param_1[0x4c] != 0) {
      FUN_004274c0();
      piVar7 = *(int **)(param_1[0x4c] + 0xf0);
      if (piVar7 != *(int **)(param_1[0x4c] + 0xf4)) {
        do {
          (**(code **)(*(int *)*piVar7 + 0x14))(param_1[0x5f4],param_1);
          iVar5 = *piVar7;
          this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (iVar5 + 0x10);
          bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ::empty(this);
          if (!bVar2) {
            piVar6 = (int *)FUN_00428b30(this);
            *piVar6 = iVar5;
          }
          piVar7 = piVar7 + 2;
        } while (piVar7 != *(int **)(param_1[0x4c] + 0xf4));
      }
      if (*(int **)(param_1[0x4c] + 0xe8) != (int *)0x0) {
        (**(code **)(**(int **)(param_1[0x4c] + 0xe8) + 0x14))(param_1[0x5f4],param_1);
      }
      if (*(int **)(param_1[0x4c] + 0xe4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1[0x4c] + 0xe4) + 0x14))(param_1[0x5f4],param_1);
      }
      if (param_1[0x5f1] != 0) {
        FUN_00439ce0(param_1);
      }
      if (param_1[0x5f2] != 0) {
        FUN_00519d90(param_1);
      }
      pvVar3 = operator_new(0xc0,(nothrow_t *)&DAT_005b6164);
      if (pvVar3 == (void *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)FUN_00515bc0();
      }
      param_1[0x5f3] = (int)piVar7;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x14))(param_1[0x5f4],param_1);
      }
    }
    *(undefined1 *)(param_1 + 0x63b) = 1;
    return 1;
  }
  return 0;
}




/* Function: FUN_0051ae70 */

undefined1 __thiscall FUN_0051ae70(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  uint unaff_EBP;
  bool bVar7;
  undefined4 unaff_retaddr;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_18c [16];
  undefined4 uStack_17c;
  void *pvStack_178;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_174 [4];
  undefined4 uStack_170;
  void *pvStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
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
  char acStack_118 [12];
  char acStack_10c [244];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057f60e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int **)(param_1 + 0x578) != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)(param_1 + 0x578) + 0xc))(1);
  }
  *(undefined4 *)(param_1 + 0x578) = 0;
  if (*(void **)(param_1 + 0x574) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x574));
  }
  *(undefined4 *)(param_1 + 0x574) = 0;
  iVar3 = DAT_005b7ed4;
  DAT_005b7ed4 = DAT_005b7ed4 + 1;
  _snprintf(acStack_10c,0x100,"lightcone#%d",iVar3);
  uStack_170 = FUN_0041c940();
  uVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (abStack_18c,acStack_10c);
  iVar3 = FUN_0041f960(uVar2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_18c);
  if (iVar3 == 0) {
    pvVar4 = operator_new(0x170,(nothrow_t *)&DAT_005b6164);
    if (pvVar4 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00411050();
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_18c,"sprite\\lightcone");
    uStack_4 = 0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &uStack_168,".\\textures\\");
    FUN_00429a60(&uStack_168,abStack_18c,0xffffffff);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &uStack_168);
    uStack_4 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_18c);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_18c,"sprite\\lightcone");
    uVar5 = FUN_004222d0(abStack_18c);
    *(undefined4 *)(param_1 + 0x57c) = uVar5;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_18c);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_18c,"lightcone");
    FUN_00410a00(0,abStack_18c,*(undefined4 *)(param_1 + 0x57c));
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_18c);
    uVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      (abStack_18c,acStack_10c);
    FUN_00425400(uVar2,uStack_170,uVar5);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_18c);
  }
  puVar6 = operator_new(0x25,(nothrow_t *)&DAT_005b6164);
  if (puVar6 == (undefined2 *)0x0) {
    puVar6 = (undefined2 *)0x0;
  }
  else {
    *puVar6 = 0xffff;
    *(undefined1 *)(puVar6 + 1) = 0;
    *(undefined4 *)((int)puVar6 + 3) = 0;
    *(undefined4 *)((int)puVar6 + 7) = 0;
    *(undefined4 *)((int)puVar6 + 0xb) = 0x3f800000;
    *(undefined4 *)((int)puVar6 + 0xf) = 0x3f800000;
    *(undefined4 *)((int)puVar6 + 0x13) = 0;
    *(undefined4 *)((int)puVar6 + 0x17) = 0;
    *(undefined4 *)((int)puVar6 + 0x1b) = 0xffffffff;
    *(undefined2 *)((int)puVar6 + 0x1f) = 0xffff;
    *(undefined2 *)((int)puVar6 + 0x21) = 0;
    *(undefined2 *)((int)puVar6 + 0x23) = 0;
  }
  *(undefined2 **)(param_1 + 0x574) = puVar6;
  *puVar6 = 0xffff;
  *(undefined4 *)(*(int *)(param_1 + 0x574) + 3) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x574) + 7) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x574) + 0xb) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 0x574) + 0xf) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 0x574) + 0x13) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x574) + 0x17) = 0;
  pvStack_16c = operator_new(300,(nothrow_t *)&DAT_005b6164);
  bVar7 = pvStack_16c == (void *)0x0;
  uStack_4 = 1;
  if (bVar7) {
    uVar2 = 0;
  }
  else {
    uVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      (abStack_18c,acStack_10c);
    uVar2 = FUN_00430310(*(undefined4 *)(param_1 + 0x574),uVar2);
  }
  *(undefined4 *)(param_1 + 0x578) = uVar2;
  uStack_4 = 0xffffffff;
  if (!bVar7) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_18c);
  }
  (**(code **)(**(int **)(param_1 + 0x578) + 8))(0);
  pvStack_16c = (void *)0x0;
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_160 = 0x3f800000;
  uStack_144 = 0x3f800000;
  uStack_140 = 0x3f800000;
  uStack_13c = 0x3f800000;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  FUN_0042f1f0(&uStack_150,&uStack_144,&pvStack_16c);
  (**(code **)(**(int **)(param_1 + 0x578) + 0x14))(unaff_retaddr,param_3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0xfffffe68,"MaxDecaledShadows");
  uStack_10 = 2;
  uVar2 = FUN_004224c0(abStack_174,&stack0xfffffe68);
  iVar3 = FUN_0040e4b0(uVar2,0);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_174);
  uStack_10 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0xfffffe68);
  if (iVar3 < 1) {
    if (*(int **)(param_1 + 0x584) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x584) + 0xc))(1);
    }
    *(undefined4 *)(param_1 + 0x584) = 0;
    if (*(void **)(param_1 + 0x580) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)(param_1 + 0x580));
    }
    *(undefined4 *)(param_1 + 0x580) = 0;
    _snprintf(acStack_118,0x100,"carshadow#%d",DAT_005b7ed4);
    uVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)&stack0xfffffe68,acStack_118);
    iVar3 = FUN_0041f960(uVar2);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xfffffe68);
    if (iVar3 == 0) {
      pvVar4 = operator_new(0x170,(nothrow_t *)&DAT_005b6164);
      if (pvVar4 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00411050();
      }
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (abStack_174,"shadow\\car");
      uStack_10 = 3;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &stack0xfffffe68,".\\textures\\");
      FUN_00429a60(&stack0xfffffe68,abStack_174,0xffffffff);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &stack0xfffffe68);
      uStack_10 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_174);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &stack0xfffffe68,"shadow\\car");
      uVar5 = FUN_004222d0(&stack0xfffffe68);
      *(undefined4 *)(param_1 + 0x588) = uVar5;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &stack0xfffffe68);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &stack0xfffffe68,"carshadow");
      FUN_00410a00(0,&stack0xfffffe68,*(undefined4 *)(param_1 + 0x588));
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &stack0xfffffe68);
      uVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *)&stack0xfffffe68,acStack_118);
      FUN_00425400(uVar2,uStack_17c,uVar5);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &stack0xfffffe68);
    }
    puVar6 = operator_new(0x25,(nothrow_t *)&DAT_005b6164);
    if (puVar6 == (undefined2 *)0x0) {
      puVar6 = (undefined2 *)0x0;
    }
    else {
      *puVar6 = 0xffff;
      *(undefined1 *)(puVar6 + 1) = 0;
      *(undefined4 *)((int)puVar6 + 3) = 0;
      *(undefined4 *)((int)puVar6 + 7) = 0;
      *(undefined4 *)((int)puVar6 + 0xb) = 0x3f800000;
      *(undefined4 *)((int)puVar6 + 0xf) = 0x3f800000;
      *(undefined4 *)((int)puVar6 + 0x13) = 0;
      *(undefined4 *)((int)puVar6 + 0x17) = 0;
      *(undefined4 *)((int)puVar6 + 0x1b) = 0xffffffff;
      *(undefined2 *)((int)puVar6 + 0x1f) = 0xffff;
      *(undefined2 *)((int)puVar6 + 0x21) = 0;
      *(undefined2 *)((int)puVar6 + 0x23) = 0;
    }
    *(undefined2 **)(param_1 + 0x580) = puVar6;
    *puVar6 = 0xffff;
    *(undefined4 *)(*(int *)(param_1 + 0x580) + 3) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x580) + 7) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x580) + 0xb) = 0x3f800000;
    *(undefined4 *)(*(int *)(param_1 + 0x580) + 0xf) = 0x3f800000;
    *(undefined4 *)(*(int *)(param_1 + 0x580) + 0x13) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x580) + 0x17) = 0;
    pvStack_178 = operator_new(300,(nothrow_t *)&DAT_005b6164);
    uStack_10 = 4;
    if (pvStack_178 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *)&stack0xfffffe68,acStack_118);
      unaff_EBP = unaff_EBP | 2;
      uVar2 = FUN_00430310(*(undefined4 *)(param_1 + 0x580),uVar2);
    }
    *(undefined4 *)(param_1 + 0x584) = uVar2;
    uStack_10 = 0xffffffff;
    if ((unaff_EBP & 2) != 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &stack0xfffffe68);
    }
    (**(code **)(**(int **)(param_1 + 0x584) + 8))(0);
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0x3f800000;
    uStack_144 = 0x3f800000;
    uStack_140 = 0x3f800000;
    uStack_13c = 0x3f800000;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    FUN_0042f1f0(&uStack_138,&uStack_144,&uStack_12c);
    (**(code **)(**(int **)(param_1 + 0x584) + 0x14))(pvStack_c,param_3);
  }
  uVar1 = FUN_00500bd0(puStack_8,param_3);
  iVar3 = FUN_0041cf60();
  if (iVar3 != 0) {
    uVar2 = FUN_00438d60();
    *(undefined4 *)(param_1 + 0x26c) = uVar2;
  }
  ExceptionList = pvStack_18;
  return uVar1;
}




/* Function: FUN_0052eea0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0052eea0(float param_1,undefined4 param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  float fVar12;
  undefined1 uVar13;
  float fVar14;
  undefined4 unaff_ESI;
  int *piVar15;
  float *pfVar16;
  bool bVar17;
  bool bVar18;
  float10 fVar19;
  float10 fVar20;
  double dVar21;
  int *piVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  undefined1 uVar25;
  bool bStack_19e;
  undefined1 uStack_19d;
  float fStack_19c;
  undefined1 uStack_195;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float local_170;
  float local_16c;
  float fStack_168;
  float afStack_164 [9];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  float local_124;
  float local_120;
  float local_11c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined1 uStack_115;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined2 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 auStack_ec [12];
  float afStack_e0 [3];
  undefined1 local_d4 [12];
  undefined1 auStack_c8 [12];
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  undefined1 local_b0 [12];
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [76];
  undefined1 local_4c [60];
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057fb03;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_170 = param_1;
  FUN_0041e470();
  FUN_00407260();
  fVar14 = 0.0;
  local_4 = 0;
  FUN_00547ab0();
  afStack_164[6] = 0.0;
  afStack_164[7] = 0.0;
  afStack_164[8] = 0.0;
  local_bc = 0.0;
  local_b8 = 0;
  local_b4 = 1.0;
  FUN_0041cab0();
  afStack_164[3] = 0.0;
  afStack_164[4] = 0.0;
  afStack_164[5] = 0.0;
  FUN_00545c38();
  FUN_00548748();
  afStack_164[8] = local_b4;
  local_190 = 0.0;
  local_18c = 0.0;
  local_188 = 0.0;
  afStack_164[6] = local_bc;
  afStack_164[7] = 0.0;
  FUN_0041d4b0();
  local_120 = 0.0;
  local_124 = 0.0;
  local_16c = 0.0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_140,"TrafficDensity");
  pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_004224c0(&local_118,&local_140);
  local_4._0_1_ = 2;
  pcVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar4);
  dVar21 = atof(pcVar5);
  local_194 = (float)dVar21;
  local_4._0_1_ = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(&local_118);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_140);
  local_194 = (float)FUN_004cf110();
  piVar15 = *(int **)((int)param_1 + 0x8c);
  fVar12 = local_16c;
  local_11c = local_194;
  if (piVar15 != *(int **)((int)param_1 + 0x90)) {
    do {
      if (*(char *)(*piVar15 + 4) != '\0') {
        if (piVar15[4] == 0) {
          local_124 = (float)((int)local_124 + 1);
        }
        else {
          local_120 = (float)((int)local_120 + 1);
          iVar6 = FUN_0051a3c0();
          if (iVar6 == 0) {
            fVar14 = (float)((int)fVar14 + 1);
          }
        }
      }
      piVar15 = piVar15 + 7;
      fVar12 = fVar14;
    } while (piVar15 != *(int **)((int)param_1 + 0x90));
  }
  local_16c = fVar12;
  FUN_0041cb30();
  FUN_004fbea0();
  fVar19 = (float10)_CIfmod();
  if (fVar19 < (float10)_DAT_00588c00) {
    local_11c = (float)((uint)local_11c >> 1);
    local_194 = (float)((uint)local_194 >> 1);
  }
  pfVar16 = *(float **)((int)param_1 + 0x8c);
  if (pfVar16 != *(float **)((int)param_1 + 0x90)) {
    do {
      (**(code **)(*(int *)*pfVar16 + 0x88))();
      FUN_00547ab0();
      FUN_0041d580(&fStack_17c,local_d4);
      bVar18 = *(char *)((int)*pfVar16 + 4) == '\0';
      fStack_180 = SQRT(fStack_17c * fStack_17c + fStack_174 * fStack_174);
      fStack_19c = pfVar16[5];
      if ((((pfVar16[4] != 0.0) && (iVar6 = FUN_0051a3c0(), iVar6 != 0)) &&
          (*(char *)((int)pfVar16[4] + 0x4e5) != '\0')) &&
         ((iVar6 = FUN_0051a3c0(), -0x65 < *(int *)(iVar6 + 0x2b4) &&
          (iVar6 = FUN_0051a3c0(), *(int *)(iVar6 + 0x2b4) < 0)))) {
        fStack_19c = fStack_19c + fStack_19c;
      }
      if ((char)((int *)*pfVar16)[1] != '\0') {
        (**(code **)(*(int *)*pfVar16 + 0x88))(auStack_c8);
        uVar7 = FUN_00547ab0();
        pfVar8 = (float *)FUN_0041d580(auStack_a4,uVar7);
        if (pfVar8 != &local_190) {
          local_190 = *pfVar8;
          local_188 = pfVar8[2];
        }
        fVar12 = SQRT(local_190 * local_190 + local_188 * local_188);
        if ((float)_DAT_00587c48 <= fVar12) {
          fVar12 = _DAT_00583354 / fVar12;
          local_190 = fVar12 * local_190;
          fVar14 = fVar12 * _DAT_00582ad8;
          local_188 = local_188 * fVar12;
        }
        else {
          local_190 = 0.0;
          local_188 = 0.0;
          fVar14 = _DAT_00583354;
        }
        fStack_184 = local_190 * afStack_164[6] +
                     fVar14 * afStack_164[7] + local_188 * afStack_164[8];
        if ((pfVar16[4] == 0.0) || (iVar6 = FUN_0051a3c0(), iVar6 != 0)) {
          fVar12 = _DAT_0058ac30;
          if (fStack_184 < _DAT_00582ad8) goto LAB_0052f280;
        }
        else {
          fVar12 = _DAT_00588d50;
          if (fStack_184 < _DAT_00582ad8) {
LAB_0052f280:
            if (fStack_19c * fVar12 < fStack_180) {
              fVar19 = (float10)FUN_0041ce10();
              pfVar16[6] = (float)(fVar19 + (float10)pfVar16[6]);
              if (_DAT_00587de8 < pfVar16[6]) {
                bVar18 = true;
              }
              goto LAB_0052f2b9;
            }
          }
        }
        pfVar16[6] = 0.0;
      }
LAB_0052f2b9:
      if ((*(char *)((int)*pfVar16 + 4) != '\0') &&
         ((((*(int *)(**(int **)((int)*pfVar16 + 0x298) + 0xbc) == 0 ||
            (iVar6 = FUN_004e4644(), iVar6 == 0)) && (*(char *)((int)*pfVar16 + 0x90) == '\0')) &&
          (fStack_19c * _DAT_00588d50 < fStack_180)))) {
        bVar18 = true;
      }
      if (fStack_19c * _DAT_0058ff44 < fStack_180) {
        bVar18 = true;
      }
      if (*(int *)((int)*pfVar16 + 0x1ac) == 0) {
        if (bVar18) {
          if (((pfVar16[4] != 0.0) && (iVar6 = FUN_0051a3c0(), iVar6 == 0)) &&
             ((piVar15 = (int *)pfVar16[3], piVar15 != (int *)0x0 && ((char)piVar15[1] != '\0')))) {
            (**(code **)(*piVar15 + 0x88))();
            FUN_00547ab0();
            FUN_0041d580(afStack_e0,local_d4);
            fStack_184 = SQRT(afStack_e0[0] * afStack_e0[0] + afStack_e0[2] * afStack_e0[2]);
            (**(code **)(*(int *)pfVar16[3] + 0x88))(&local_140);
            uVar7 = FUN_00547ab0();
            pfVar8 = (float *)FUN_0041d580(auStack_ec,uVar7);
            if (pfVar8 != &local_190) {
              local_190 = *pfVar8;
              local_188 = pfVar8[2];
            }
            local_18c = 0.0;
            FUN_0041d4b0();
            if (fStack_184 < fStack_19c * _DAT_00588d8c) {
              bVar18 = false;
            }
            if ((local_190 * afStack_164[6] +
                 local_18c * afStack_164[7] + local_188 * afStack_164[8] < _DAT_00582ad8) &&
               (fStack_184 < fStack_19c * _DAT_0058ff78)) {
              bVar18 = false;
              goto LAB_0052f6b5;
            }
          }
          if (bVar18) {
            (**(code **)(*(int *)*pfVar16 + 8))();
            (**(code **)(*(int *)*pfVar16 + 4))(0);
            (**(code **)(*(int *)*pfVar16 + 0xa4))();
            pfVar16[6] = 0.0;
            if (pfVar16[4] != 0.0) {
              FUN_0051a480();
              FUN_0051ab80(param_2,0);
              FUN_0051d0b0();
              *(undefined4 *)((int)pfVar16[4] + 0x2c) = 0x42c80000;
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (&local_118,"fuel");
              local_4._0_1_ = 3;
              pfVar8 = (float *)FUN_00457170();
              iVar6 = rand();
              local_4._0_1_ = 0;
              fStack_184 = (float)(iVar6 % 0xff);
              *pfVar8 = (float)(int)fStack_184 * _DAT_0059252c + _DAT_00588b48;
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (&local_118);
              if (pfVar16[3] != 0.0) {
                afStack_164[3] = 0.0;
                afStack_164[4] = 0.0;
                afStack_164[5] = 0.0;
                (**(code **)(*(int *)pfVar16[4] + 0x94))("Driver",afStack_164 + 3);
                _eh_vector_constructor_iterator_
                          (auStack_a4,0x10,4,(_func_void_void_ptr *)&LAB_00407250,FUN_00407150);
                FUN_00407310(0x3f800000);
                local_170 = *(float *)((int)pfVar16[3] + 0x3d4);
                uStack_10 = 4;
                local_16c = local_170;
                fStack_168 = local_170;
                FUN_005477cc(&local_170);
                FUN_00545c38(afStack_164);
                (**(code **)(*(int *)pfVar16[3] + 0x8c))(auStack_a4);
                FUN_00504330(pfVar16[4]);
                pcVar5 = "driver";
                FUN_004ffac0("driver");
                uVar7 = FUN_004456c0(pcVar5);
                FUN_004ffa80(uVar7);
                FUN_00501a80(0);
                FUN_004ffb80(1);
                FUN_00504600(0);
                *(undefined4 *)((int)pfVar16[3] + 0x2c) = 0x42c80000;
                *(undefined4 *)((int)pfVar16[3] + 0x2b4) = *(undefined4 *)((int)pfVar16[3] + 0x2b8);
                *(undefined4 *)((int)pfVar16[3] + 0x378) = *(undefined4 *)((int)pfVar16[3] + 0x380);
                FUN_00525a80(pfVar16[4],0);
                (**(code **)(*(int *)pfVar16[3] + 8))(1);
                (**(code **)(*(int *)pfVar16[3] + 4))(1);
                FUN_0051a3e0();
                local_4._0_1_ = 0;
                _eh_vector_destructor_iterator_(auStack_98,0x10,4,FUN_00407150);
              }
            }
          }
        }
      }
      else {
        bVar18 = false;
      }
LAB_0052f6b5:
      if (pfVar16[4] == 0.0) {
        bVar17 = (uint)local_124 < (uint)local_194;
      }
      else {
        bVar17 = (uint)local_120 < (uint)local_11c;
      }
      if ((bVar17) && (bVar18)) {
        uVar9 = rand();
        uVar9 = uVar9 & 0x80000001;
        bVar18 = uVar9 == 0;
        if ((int)uVar9 < 0) {
          bVar18 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (!bVar18) {
          if (*(int *)((int)local_170 + 0x84) == 0) {
            iVar6 = 0;
            goto LAB_0053034a;
          }
          piVar15 = (int *)pfVar16[2];
          piVar1 = (int *)pfVar16[4];
          iVar6 = rand();
          local_190 = 0.0;
          local_18c = 0.0;
          local_188 = 0.0;
          uStack_195 = 0;
          fStack_180 = 0.0;
          fStack_184 = 0.0;
          bStack_19e = false;
          local_194 = ((float)iVar6 * _DAT_00592528 + _DAT_00592524) * fStack_19c;
          if (piVar1 == (int *)0x0) {
            lVar2 = 0;
LAB_0052f833:
            uVar23 = lVar2 << 0x20;
            uVar7 = 1;
          }
          else {
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      (&local_118,"ParkedChance");
            local_4._0_1_ = 5;
            FUN_0041cae0();
            FUN_0042dc70();
            iVar6 = FUN_004cf110();
            local_4._0_1_ = 0;
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      (&local_118);
            iVar10 = rand();
            FUN_004ffac0();
            fVar19 = (float10)FUN_0043f960();
            bStack_19e = fVar19 <= (float10)_DAT_0058ab44 && iVar10 % 100 < iVar6;
            if ((int)local_16c < 3) {
              if (bStack_19e) {
                lVar2 = 1;
                goto LAB_0052f833;
              }
              uVar23 = ZEXT48(&fStack_184);
              uVar7 = 0;
            }
            else {
              uVar23 = ZEXT48(&fStack_184);
              bStack_19e = false;
              uVar7 = 0;
            }
          }
          pfVar8 = (float *)FUN_0047dff0(auStack_ec,&fStack_180,&uStack_195,local_194,local_d4,
                                         afStack_164 + 6,uVar7,uVar23);
          uVar25 = (undefined1)((uint)unaff_ESI >> 0x18);
          if (pfVar8 != &local_190) {
            local_190 = *pfVar8;
            local_18c = pfVar8[1];
            local_188 = pfVar8[2];
          }
          bVar18 = false;
          pfVar8 = *(float **)((int)local_170 + 0x8c);
          fVar12 = local_170;
          if (pfVar8 != *(float **)((int)local_170 + 0x90)) goto LAB_0052f8a1;
          goto LAB_0052f987;
        }
      }
      pfVar16 = pfVar16 + 7;
    } while (pfVar16 != *(float **)((int)local_170 + 0x90));
  }
  goto LAB_00530679;
  while (iVar6 = iVar6 + 1, iVar6 < 0xb) {
LAB_0053034a:
    local_16c = (float)rand();
    local_194 = (float)(int)local_16c * _DAT_00588d4c;
    local_16c = (float)rand();
    fVar12 = (float)(int)local_16c * _DAT_005924e4 - _DAT_00583c74;
    afStack_164[0] = local_194 * _DAT_00587e40 - _DAT_00583c74;
    fStack_174 = SQRT(fVar12 * fVar12 + afStack_164[0] * afStack_164[0]);
    if ((float)_DAT_00587c48 <= fStack_174) {
      fStack_174 = _DAT_00583354 / fStack_174;
      fStack_17c = afStack_164[0] * fStack_174;
      fStack_178 = _DAT_00582ad8 * fStack_174;
      fStack_174 = fStack_174 * fVar12;
    }
    else {
      fStack_17c = 0.0;
      fStack_178 = 1.0;
      fStack_174 = _DAT_00582ad8;
    }
    afStack_164[3] = fStack_17c;
    afStack_164[5] = fStack_174;
    local_16c = (float)rand();
    fVar12 = (float)(int)local_16c * _DAT_005924e0 + _DAT_0058ac30;
    fStack_17c = fStack_17c * fVar12;
    fStack_174 = fStack_174 * fVar12;
    if (_DAT_00591a90 <
        afStack_164[3] * afStack_164[6] +
        fStack_178 * afStack_164[7] + afStack_164[5] * afStack_164[8]) {
      if (iVar6 < 0xb) {
        local_118 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)
                    0x1;
        uStack_117 = 0;
        uStack_116 = 0;
        uStack_115 = 0;
        fStack_114 = std::numeric_limits<float>::max();
        afStack_164[0] = fStack_17c;
        afStack_164[2] = fStack_174;
        fStack_110 = 0.0;
        fStack_10c = 0.0;
        fStack_108 = 0.0;
        uStack_104 = 0;
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_f8 = 0xffff;
        uStack_f4 = 0xffffffff;
        uStack_f0 = 0;
        uStack_116 = 1;
        afStack_164[1] = 5000.0;
        FUN_0041d550(auStack_c8,local_d4,afStack_164);
        afStack_164[0] = 0.0;
        afStack_164[1] = -20000.0;
        afStack_164[2] = 0.0;
        FUN_0041d550(local_b0,auStack_c8,afStack_164);
        pbVar4 = &local_118;
        uVar24 = CONCAT44(local_b0,auStack_c8);
        FUN_0041c940(pbVar4,auStack_c8,local_b0);
        cVar3 = FUN_0041f720(pbVar4,uVar24);
        if (cVar3 != '\0') {
          uStack_13c = 0;
          uStack_138 = 0;
          uStack_134 = 0;
          fStack_130 = 0.0;
          uStack_12c = 0;
          local_140 = 7;
          afStack_164[0] = 0.0;
          afStack_164[1] = 10.0;
          afStack_164[2] = 0.0;
          puVar11 = (undefined4 *)FUN_0041d550(auStack_ec,&fStack_110,afStack_164);
          if (puVar11 != &uStack_13c) {
            uStack_13c = *puVar11;
            uStack_138 = puVar11[1];
            uStack_134 = puVar11[2];
          }
          local_16c = (float)rand();
          fStack_130 = (float)(int)local_16c * _DAT_005924dc * _DAT_005b9004 * _DAT_00587fb8;
          (**(code **)(*(int *)*pfVar16 + 0x44))(param_2,1,&local_140);
          (**(code **)(*(int *)*pfVar16 + 8))(1);
          (**(code **)(*(int *)*pfVar16 + 4))(1);
          (**(code **)(*(int *)*pfVar16 + 0xa0))();
        }
      }
      break;
    }
  }
  goto LAB_00530679;
LAB_0052f8a1:
  do {
    if (((pfVar16 != pfVar8) && (local_16c = *pfVar8, *(char *)((int)local_16c + 4) != '\0')) &&
       (*(int *)((int)local_16c + 0x80) == *(int *)((int)*pfVar16 + 0x80))) {
      FUN_004ffac0();
      fVar19 = (float10)FUN_0043f960();
      local_194 = (float)fVar19;
      FUN_004ffac0();
      fVar19 = (float10)FUN_0043f960();
      fVar19 = (fVar19 + (float10)local_194) * (float10)_DAT_0058a7d0;
      local_16c = (float)(fVar19 * fVar19);
      (**(code **)(*(int *)*pfVar8 + 0x88))(auStack_ec,&local_190);
      FUN_00547ab0();
      FUN_0041d580(&fStack_17c);
      uVar25 = (undefined1)((uint)unaff_ESI >> 0x18);
      fVar12 = local_170;
      if (fStack_19c * fStack_19c *
          (fStack_17c * fStack_17c + fStack_178 * fStack_178 + fStack_174 * fStack_174) <
          local_16c * _DAT_00587e3c) {
        bVar18 = true;
        break;
      }
    }
    uVar25 = (undefined1)((uint)unaff_ESI >> 0x18);
    pfVar8 = pfVar8 + 7;
  } while (pfVar8 != *(float **)((int)fVar12 + 0x90));
LAB_0052f987:
  if ((piVar1 != (int *)0x0) && (bStack_19e)) {
    FUN_004ffac0();
    fVar19 = (float10)FUN_0043f960();
    cVar3 = FUN_00472a30(&local_190,(float)(fVar19 * (float10)_DAT_0058a7d0));
    if (cVar3 != '\0') {
      bVar18 = true;
    }
  }
  if (piVar15 != (int *)0x0) {
    uVar24 = CONCAT44(0x41f00000,&local_190);
    piVar22 = piVar15;
    FUN_0041ce50(piVar15,&local_190,0x41f00000);
    cVar3 = FUN_0052c0c0(piVar22,uVar24);
    if (cVar3 == '\0') goto LAB_00530679;
  }
  if ((!bVar18) && (fStack_180 != 0.0)) {
    local_118 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x1;
    uStack_117 = 0;
    uStack_116 = 0;
    uStack_115 = 0;
    fStack_114 = std::numeric_limits<float>::max();
    fStack_110 = 0.0;
    fStack_10c = 0.0;
    fStack_108 = 0.0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0xffff;
    uStack_f4 = 0xffffffff;
    uStack_f0 = 0;
    uStack_116 = 1;
    afStack_164[0] = 0.0;
    afStack_164[1] = 10000.0;
    afStack_164[2] = 0.0;
    FUN_0041d550(auStack_a4,&local_190,afStack_164);
    afStack_164[0] = 0.0;
    afStack_164[1] = -20000.0;
    afStack_164[2] = 0.0;
    FUN_0041d550(local_b0,auStack_a4,afStack_164);
    cVar3 = (**(code **)(**(int **)((int)local_170 + 0x84) + 0x38))(&local_118,auStack_a4,local_b0);
    if (cVar3 != '\0') {
      local_190 = fStack_110;
      local_18c = fStack_10c;
      local_188 = fStack_108;
    }
    if (piVar15 != (int *)0x0) {
      FUN_0041cae0();
      uVar7 = FUN_0042dbb0();
      FUN_00412e58(uVar7,"character_TrafficSpawn");
      local_16c = (float)FUN_0044ab40(piVar15);
      fStack_168 = 0.0;
      FUN_00412cfc(uVar7,(double)(uint)local_16c);
      FUN_004ffac0();
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_0043f920();
      pcVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(pbVar4);
      FUN_00412d30(uVar7,pcVar5);
      FUN_00412cfc(uVar7,(double)local_190);
      FUN_00412cfc(uVar7,(double)local_18c);
      FUN_00412cfc(uVar7,(double)local_188);
      iVar6 = FUN_00412798(uVar7,5,1);
      if (iVar6 == 0) {
        fVar20 = (float10)FUN_00412c00(uVar7,0xffffffff);
        fVar19 = (float10)_DAT_00582ae8;
        FUN_00412950(uVar7,0xfffffffe);
        if (fVar20 <= fVar19) goto LAB_00530679;
      }
      FUN_0041d580(afStack_164 + 3,*(int *)((int)fStack_180 + 8) + 0x10,
                   *(int *)((int)fStack_180 + 4) + 0x10);
      FUN_0041d4b0();
      uVar13 = 1;
      fVar19 = (float10)FUN_0044b0d0();
      fStack_19c = (float)fVar19;
      uVar9 = rand();
      uVar9 = uVar9 & 0x80000001;
      bVar18 = uVar9 == 0;
      if ((int)uVar9 < 0) {
        bVar18 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (!bVar18) {
        if (fStack_19c <= _DAT_00589ee8) {
          fStack_19c = fStack_19c + _DAT_00589ee8;
        }
        else {
          fStack_19c = fStack_19c - _DAT_00589ee8;
        }
        uVar13 = 0;
      }
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      fStack_130 = 0.0;
      uStack_12c = 0;
      local_140 = 7;
      afStack_164[0] = 0.0;
      afStack_164[1] = 100.0;
      afStack_164[2] = 0.0;
      puVar11 = (undefined4 *)FUN_0041d550(auStack_ec,&local_190,afStack_164);
      if (puVar11 != &uStack_13c) {
        uStack_13c = *puVar11;
        uStack_138 = puVar11[1];
        uStack_134 = puVar11[2];
      }
      fStack_130 = fStack_19c;
      (**(code **)(*piVar15 + 0x44))(param_2,1,&local_140);
      (**(code **)(*piVar15 + 8))(1);
      (**(code **)(*piVar15 + 4))(1);
      piVar15[0xd0] = *(int *)((int)fStack_184 + 0x84);
      piVar15[0xd2] = (int)local_194;
      piVar15[0xd1] = (int)local_194;
      *(undefined1 *)(piVar15 + 0xd5) = uVar13;
      *(undefined1 *)(piVar15 + 0xd7) = uVar25;
      piVar15[0x87] = -0x40800000;
      FUN_00504600(0);
      piVar15[0xb] = 0x42c80000;
      piVar15[0xad] = 0;
      (**(code **)(*piVar15 + 0xa0))();
    }
    if (piVar1 != (int *)0x0) {
      FUN_0041d580(auStack_c8,*(int *)((int)fStack_180 + 8) + 0x10,
                   *(int *)((int)fStack_180 + 4) + 0x10);
      FUN_0041d4b0();
      uStack_19d = 1;
      fVar19 = (float10)FUN_0044b0d0();
      fStack_19c = (float)fVar19;
      uVar9 = 4;
      if (*(float *)((int)fStack_180 + 0x20) < _DAT_00588d50) {
        uVar9 = 2;
      }
      if ((int)fStack_184 < (int)(uVar9 / 2)) {
        if (fStack_19c <= _DAT_00589ee8) {
          fStack_19c = fStack_19c + _DAT_00589ee8;
        }
        else {
          fStack_19c = fStack_19c - _DAT_00589ee8;
        }
        uStack_19d = 0;
      }
      fStack_17c = 0.0;
      fStack_178 = 0.0;
      fStack_174 = 0.0;
      afStack_164[3] = 0.0;
      afStack_164[4] = 0.0;
      afStack_164[5] = 0.0;
      afStack_e0[0] = 0.0;
      afStack_e0[1] = 0.0;
      afStack_e0[2] = 0.0;
      FUN_0046ffe0(fStack_184,afStack_164 + 3,afStack_e0);
      pfVar8 = (float *)FUN_0041d580(auStack_ec,&local_190,afStack_164 + 3);
      if (pfVar8 != &fStack_17c) {
        fStack_17c = *pfVar8;
        fStack_178 = pfVar8[1];
        fStack_174 = pfVar8[2];
      }
      local_194 = fStack_17c * fStack_17c + fStack_178 * fStack_178 + fStack_174 * fStack_174;
      FUN_004ffac0();
      fVar19 = (float10)FUN_0043f960();
      local_16c = (float)fVar19;
      FUN_004ffac0();
      fVar19 = (float10)FUN_0043f960();
      if (fVar19 * (float10)local_16c + fVar19 * (float10)local_16c <= (float10)local_194) {
        if (((bStack_19e) || (fStack_184 != *(float *)(*(int *)((int)local_170 + 0x84) + 600))) ||
           (*(float *)(*(int *)((int)local_170 + 0x84) + 0x254) != fStack_180)) {
          pfVar8 = (float *)FUN_0041d580(auStack_ec,&local_190,afStack_e0);
          fVar12 = fStack_17c;
          fVar14 = fStack_174;
          if (pfVar8 != &fStack_17c) {
            fStack_178 = pfVar8[1];
            fVar12 = *pfVar8;
            fVar14 = pfVar8[2];
          }
          local_194 = fVar12 * fVar12 + fStack_178 * fStack_178 + fVar14 * fVar14;
          FUN_004ffac0();
          fVar19 = (float10)FUN_0043f960();
          local_16c = (float)fVar19;
          FUN_004ffac0();
          fVar19 = (float10)FUN_0043f960();
          if (fVar19 * (float10)local_16c + fVar19 * (float10)local_16c <= (float10)local_194) {
            FUN_0041cae0();
            uVar7 = FUN_0042dbb0();
            FUN_00412e58(uVar7,"car_TrafficSpawn");
            local_16c = (float)FUN_0044ab40(piVar1);
            fStack_168 = 0.0;
            FUN_00412cfc(uVar7,(double)(uint)local_16c);
            FUN_004ffac0();
            pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )FUN_0043f920();
            pcVar5 = std::
                     basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                     c_str(pbVar4);
            FUN_00412d30(uVar7,pcVar5);
            local_16c = (float)(uint)bStack_19e;
            FUN_00412cfc(uVar7,(double)(int)local_16c);
            FUN_00412cfc(uVar7,(double)local_190);
            FUN_00412cfc(uVar7,(double)local_18c);
            FUN_00412cfc(uVar7,(double)local_188);
            iVar6 = FUN_00412798(uVar7,6,1);
            if (iVar6 == 0) {
              fVar20 = (float10)FUN_00412c00(uVar7,0xffffffff);
              fVar19 = (float10)_DAT_00582ae8;
              FUN_00412950(uVar7,0xfffffffe);
              if (fVar20 <= fVar19) goto LAB_00530679;
            }
            uStack_13c = 0;
            uStack_138 = 0;
            uStack_134 = 0;
            fStack_130 = 0.0;
            uStack_12c = 0;
            local_140 = 7;
            afStack_164[0] = 0.0;
            afStack_164[1] = 50.0;
            afStack_164[2] = 0.0;
            puVar11 = (undefined4 *)FUN_0041d550(auStack_ec,&local_190,afStack_164);
            if (puVar11 != &uStack_13c) {
              uStack_13c = *puVar11;
              uStack_138 = puVar11[1];
              uStack_134 = puVar11[2];
            }
            fStack_130 = -fStack_19c;
            (**(code **)(*piVar1 + 0xa0))();
            (**(code **)(*piVar1 + 0x44))(param_2,1,&local_140);
            (**(code **)(*piVar1 + 8))(1);
            (**(code **)(*piVar1 + 4))(1);
            *(undefined1 *)((int)piVar1 + 0x4e3) = 1;
            FUN_0051ada0();
            FUN_0051d020();
            piVar1[0x87] = -0x40800000;
            if (bStack_19e) {
              piVar1[0x107] = 0x41f00000;
              *(undefined1 *)((int)piVar1 + 0x539) = 1;
              piVar1[0x14f] = 0;
              *(undefined1 *)(piVar1 + 0x14e) = 0;
            }
            piVar15 = (int *)pfVar16[3];
            if (piVar15 != (int *)0x0) {
              piVar15[0xd0] = *(int *)((int)local_170 + 0x84);
              *(undefined1 *)(piVar15 + 0xd5) = uStack_19d;
              piVar15[0xd2] = (int)fStack_180;
              piVar15[0xd1] = (int)fStack_180;
              *(undefined1 *)(piVar15 + 0xd7) = uStack_195;
              piVar15[0xe7] = (int)fStack_184;
              FUN_00525a80(piVar1,0);
              piVar15[0xad] = 0;
              FUN_0051a3e0();
            }
            FUN_0041cb30();
            FUN_004fbea0();
            fVar19 = (float10)_CIfmod();
            if (((fVar19 < (float10)_DAT_00588be0) || ((float10)_DAT_0058aa08 < fVar19)) ||
               (((float10)_DAT_0058aba4 < fVar19 && (iVar6 = rand(), 0x32 < iVar6 % 100)))) {
              *(undefined1 *)((int)piVar1 + 0x4e1) = 1;
            }
            else {
              *(undefined1 *)((int)piVar1 + 0x4e1) = 0;
            }
            if (bStack_19e) {
              (**(code **)(*piVar15 + 4))();
              (**(code **)(*piVar15 + 8))(0);
              *(undefined1 *)((int)piVar1 + 0x4e1) = 0;
              piVar1[0x163] = 2;
              piVar1[0x100] = 0;
              *(undefined1 *)((int)piVar1 + 0x4e3) = 0;
              FUN_0051a3e0();
            }
            FUN_0051d050();
          }
        }
      }
    }
  }
LAB_00530679:
  iVar6 = *(int *)((int)local_170 + 0x84);
  if (iVar6 != 0) {
    *(undefined4 *)(iVar6 + 0x254) = 0;
    *(undefined4 *)(iVar6 + 600) = 0xffffffff;
  }
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_4c,0x10,4,FUN_00407150);
  ExceptionList = pvStack_c;
  return 1;
}





/* vehicle functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_00401310 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00401310(void)

{
  char cVar1;
  LPCSTR lpRootPathName;
  int iVar2;
  UINT UVar3;
  LPCSTR pCVar4;
  char *pcVar5;
  FILE *_File;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  UINT *pUVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  DWORD local_298;
  int local_294;
  char *local_28c [3];
  UINT local_280 [31];
  char cStack_201;
  char local_200 [128];
  undefined4 auStack_180 [31];
  char acStack_101 [257];
  
  local_298 = GetLogicalDriveStringsA(0x100,acStack_101 + 1);
  iVar7 = 0;
  local_294 = 0;
  if (0 < (int)local_298) {
    iVar11 = 1;
    do {
      if (acStack_101[iVar11] == '\0') {
        iVar2 = iVar7 + 1;
        UVar3 = GetDriveTypeA(acStack_101 + iVar2);
        local_280[local_294] = UVar3;
        iVar7 = iVar11;
        if (UVar3 == 5) {
          auStack_180[local_294] = acStack_101 + iVar2;
          local_294 = local_294 + 1;
        }
      }
      iVar11 = iVar11 + 1;
      local_298 = local_298 - 1;
    } while (local_298 != 0);
  }
  local_298 = 0;
  if (0 < local_294) {
    local_28c[0] = "setup.exe";
    local_28c[1] = "autorun.inf";
    local_28c[2] = "cj.ico";
    do {
      lpRootPathName = (LPCSTR)auStack_180[local_298];
      iVar7 = 0;
      pCVar4 = lpRootPathName;
      do {
        do {
          cVar1 = *pCVar4;
          pCVar4[(int)(local_200 + -(int)lpRootPathName)] = cVar1;
          pCVar4 = pCVar4 + 1;
        } while (cVar1 != '\0');
        pcVar13 = local_28c[iVar7];
        pcVar5 = pcVar13;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        pcVar12 = &cStack_201;
        do {
          pcVar9 = pcVar12 + 1;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar9 != '\0');
        pcVar9 = pcVar13;
        for (uVar8 = (uint)((int)pcVar5 - (int)pcVar13) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar8 = (int)pcVar5 - (int)pcVar13 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar12 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar12 = pcVar12 + 1;
        }
        _File = fopen(local_200,"rb");
        if (_File == (FILE *)0x0) goto LAB_0040146b;
        fclose(_File);
        iVar7 = iVar7 + 1;
        pCVar4 = lpRootPathName;
      } while (iVar7 < 3);
      BVar6 = GetVolumeInformationA
                        (lpRootPathName,(LPSTR)local_280,0x80,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0
                         ,(LPSTR)0x0,0);
      if (BVar6 != 0) {
        iVar7 = 10;
        bVar14 = true;
        pUVar10 = local_280;
        pcVar13 = "CARJACKER";
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar14 = (char)*pUVar10 == *pcVar13;
          pUVar10 = (UINT *)((int)pUVar10 + 1);
          pcVar13 = pcVar13 + 1;
        } while (bVar14);
        if (bVar14) {
          return 1;
        }
      }
LAB_0040146b:
      local_298 = local_298 + 1;
    } while ((int)local_298 < local_294);
  }
  return 0;
}




/* Function: FUN_004042a0 */

undefined4 FUN_004042a0(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 unaff_retaddr;
  INITCOMMONCONTROLSEX local_210;
  CHAR local_208 [259];
  char cStack_105;
  CHAR local_104 [260];
  
  iVar2 = FUN_00401310();
  if (iVar2 != 0) {
    do {
      iVar2 = MessageBoxA((HWND)0x0,
                          "Please insert the disc with the Crazy drive Away into drive and click OK"
                          ,"CarJacker",0x11);
      if (iVar2 == 2) {
        return 0;
      }
      iVar2 = FUN_00401310();
    } while (iVar2 == 0);
  }
  GetCurrentDirectoryA(0x104,local_104);
  pcVar1 = &cStack_105;
  do {
    pcVar4 = pcVar1;
    pcVar1 = pcVar4 + 1;
  } while (pcVar4[1] != '\0');
  *(undefined4 *)(pcVar4 + 1) = s__config_ini_00582a3c._0_4_;
  *(undefined4 *)(pcVar4 + 5) = s__config_ini_00582a3c._4_4_;
  *(undefined4 *)(pcVar4 + 9) = s__config_ini_00582a3c._8_4_;
  local_208[0] = '\0';
  GetPrivateProfileStringA("OPTIONS","FullScreen","true",local_208,0x104,local_104);
  iVar2 = _stricmp(local_208,"1");
  if ((iVar2 == 0) || (iVar2 = _stricmp(local_208,"true"), iVar2 == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  FUN_00406ea0("video\\intro.avi",param_1,uVar3);
  OutputDebugStringA("Engine: Programm started\n");
  CoInitialize((LPVOID)0x0);
  DefWindowProcA((HWND)0x0,0,0,0);
  local_210.dwSize = 8;
  local_210.dwICC = 4;
  InitCommonControlsEx(&local_210);
  FUN_00401650(0,param_1,0);
  uVar3 = FUN_004040c0(param_1,unaff_retaddr,param_1);
  FUN_00401d90();
  CoUninitialize();
  return uVar3;
}




/* Function: FUN_004d55d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d55d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x504) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x504) = param_2;
  *(undefined4 *)(param_1 + 0x4d8) = 0x41500000;
  *(undefined4 *)(param_1 + 0x4dc) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x3bc) = 0x41f00000;
  *(undefined1 *)(param_1 + 0x3dc) = 0;
  switch(param_2) {
  case 1:
    pcVar3 = "shot";
    goto LAB_004d5bbf;
  case 2:
    pcVar3 = "driver";
    goto LAB_004d5bbf;
  case 3:
    uVar2 = FUN_004456c0("shotuzi");
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x1d8) = 0;
    uVar2 = FUN_004449b0(*(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58));
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x118) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x2b0) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x238) = 0x40490fdb;
    *(undefined4 *)(param_1 + 0x3bc) = 0x420c0000;
    break;
  case 4:
    uVar2 = FUN_004456c0("hitassemble");
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x1d8) = 0;
    uVar2 = FUN_004449b0(*(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58));
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x118) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x2b0) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x238) = 0x40490fdb;
    *(undefined4 *)(param_1 + 0x3bc) = 0x41c80000;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x298) = 0;
    *(undefined4 *)(param_1 + 0x4d8) = 0x41000000;
    *(undefined4 *)(param_1 + 0x4dc) = 0x41a00000;
    goto switchD_004d561c_caseD_9;
  case 5:
    uVar2 = FUN_004456c0("usetool");
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x1d8) = 0;
    uVar2 = FUN_004449b0(*(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58));
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x118) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x2b0) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x238) = 0x40490fdb;
    *(undefined4 *)(param_1 + 0x3bc) = 0x41c80000;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x298) = 0;
    *(undefined4 *)(param_1 + 0x4d8) = 0x41500000;
    *(undefined4 *)(param_1 + 0x4dc) = 0x41980000;
    *(undefined1 *)(param_1 + 0x469) = 1;
    goto switchD_004d561c_caseD_9;
  case 6:
    uVar2 = FUN_004456c0("usepicklock");
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x1d8) = 0;
    uVar2 = FUN_004449b0(*(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58));
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x118) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x2b0) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x238) = 0x40490fdb;
    *(undefined4 *)(param_1 + 0x3bc) = 0x41c80000;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x298) = 0;
    *(undefined4 *)(param_1 + 0x4d8) = 0x41400000;
    *(undefined4 *)(param_1 + 0x4dc) = 0x41a00000;
    *(undefined1 *)(param_1 + 0x469) = 1;
    goto switchD_004d561c_caseD_9;
  case 7:
    uVar2 = FUN_004456c0("taxiwaiter");
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x1d8) = 0;
    uVar2 = FUN_004449b0(*(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58));
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x118) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x2b0) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x238) = 0;
    *(undefined4 *)(param_1 + 0x3bc) = 0x41c80000;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x298) = 0;
    *(undefined4 *)(param_1 + 0x4d8) = 0x41400000;
    *(undefined4 *)(param_1 + 0x4dc) = 0x41a00000;
    goto switchD_004d561c_caseD_9;
  case 8:
    uVar2 = FUN_004456c0("opencardoor");
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x1d8) = 0;
    uVar2 = FUN_004449b0(*(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58));
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x118) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x2b0) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x238) = 0x40490fdb;
    *(undefined4 *)(param_1 + 0x3bc) = 0x42200000;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x298) = 0;
    *(undefined4 *)(param_1 + 0x4d8) = 0x41400000;
    *(undefined4 *)(param_1 + 0x4dc) = 0x41a00000;
    *(undefined1 *)(param_1 + 0x469) = 1;
    if ((*(int *)(param_1 + 0x448) != 0) && (*(int *)(*(int *)(param_1 + 0x448) + 0x2d8) == 5)) {
      *(undefined1 *)(param_1 + 0x3dc) = 1;
    }
  default:
    goto switchD_004d561c_caseD_9;
  case 10:
    uVar2 = FUN_004456c0("putmarker");
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x1d8) = 0;
    uVar2 = FUN_004449b0(*(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58));
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x118) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x2b0) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x238) = 0x40490fdb;
    *(undefined4 *)(param_1 + 0x3bc) = 0x41c80000;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x298) = 0;
    *(undefined4 *)(param_1 + 0x4d8) = 0x41600000;
    *(undefined4 *)(param_1 + 0x4dc) = 0x41880000;
    *(undefined1 *)(param_1 + 0x469) = 1;
    goto switchD_004d561c_caseD_9;
  case 0xb:
    uVar2 = FUN_004456c0("idle2fight");
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x1d8) = 0;
    uVar2 = FUN_004449b0(*(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58));
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x118) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x2b0) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x238) = 0x40490fdb;
    *(undefined4 *)(param_1 + 0x3bc) = 0x41c80000;
    break;
  case 0xc:
    uVar2 = FUN_004456c0("idle2fight");
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x1d8) = 0;
    uVar2 = FUN_004449b0(*(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58));
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x118) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x2b0) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x238) = 0x40490fdb;
    *(undefined4 *)(param_1 + 0x3bc) = 0xc1c80000;
    break;
  case 0xd:
    uVar2 = FUN_004456c0("idlefight");
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x1d8) = 0;
    uVar2 = FUN_004449b0(*(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58));
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x118) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x2b0) + 0x10) = 1;
    goto LAB_004d5c09;
  case 0xe:
    pcVar3 = "fightpunch";
LAB_004d5bbf:
    uVar2 = FUN_004456c0(pcVar3);
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x1d8) = 0;
    uVar2 = FUN_004449b0(*(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58));
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x118) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x2b0) + 0x10) = 0;
LAB_004d5c09:
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x238) = 0x40490fdb;
    *(undefined4 *)(param_1 + 0x3bc) = 0x41c80000;
    break;
  case 0xf:
    uVar2 = FUN_004456c0("fightbacklegkick");
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x1d8) = 0;
    uVar2 = FUN_004449b0(*(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58));
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x118) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x2b0) + 0x10) = 0;
    *(float *)(*(int *)(param_1 + 0x2b0) + 0x238) = _DAT_005b9004 * _DAT_0058ffb8;
    *(undefined4 *)(param_1 + 0x3bc) = 0x41f00000;
    break;
  case 0x10:
    uVar2 = FUN_004456c0("idle2run");
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x1d8) = 0;
    uVar2 = FUN_004449b0(*(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58));
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x118) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x2b0) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x238) = 0;
    *(undefined4 *)(param_1 + 0x3bc) = 0x41c80000;
    break;
  case 0x11:
    uVar2 = FUN_004456c0("run2idle");
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x1d8) = 0;
    uVar2 = FUN_004449b0(*(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x58));
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x118) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x2b0) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x238) = 0;
    *(undefined4 *)(param_1 + 0x3bc) = 0x41c80000;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x2b0) + 0x298) = 0;
switchD_004d561c_caseD_9:
  if (*(float *)(param_1 + 0x3bc) <= _DAT_00582ad8) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2b0) + 0x118);
    *(undefined1 *)(param_1 + 0x2ed) = 0;
    *(float *)(param_1 + 0x2dc) = (float)(iVar1 + -1);
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x2b0) + 0x1d8);
  *(undefined1 *)(param_1 + 0x2ed) = 0;
  *(float *)(param_1 + 0x2dc) = (float)iVar1;
  return;
}




/* Function: FUN_004d5db0 */

void __thiscall FUN_004d5db0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_0057df3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041cab0();
  if (*(int *)(param_3 + 0x80) == 4) {
    puVar3 = &DAT_00590074;
    FUN_0041cac0(&DAT_00590074);
    piVar1 = (int *)FUN_0045b600(puVar3);
    if (piVar1 == (int *)0x0) {
      iVar2 = FUN_00493c27(0x15c);
      if (iVar2 != 0) {
        local_4 = piVar1;
        piVar1 = (int *)FUN_004df180(param_2);
      }
      local_4 = (int *)0xffffffff;
      piVar4 = piVar1;
      FUN_0041cac0(piVar1);
      FUN_0045d8a0(piVar4);
      if (piVar1 == (int *)0x0) {
        ExceptionList = local_c;
        return;
      }
    }
    (**(code **)(*piVar1 + 0x28))(param_2);
    FUN_004de560(param_3);
    pcVar5 = "SpeedMeter";
    FUN_0041cac0("SpeedMeter");
    piVar1 = (int *)FUN_0045b600(pcVar5);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(param_2);
    }
    *(undefined4 *)(param_1 + 0x2cc) = 2;
  }
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004daea0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_004daea0(int *param_1,undefined4 param_2,int param_3,char *param_4)

{
  int iVar1;
  void **ppvVar2;
  bool bVar3;
  char cVar4;
  char *pcVar5;
  size_t _MaxCount;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  undefined4 *puVar9;
  code *pcVar10;
  code *pcVar11;
  uint unaff_retaddr;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1ec [16];
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined1 auStack_1d0 [12];
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  char local_1b8 [64];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_178 [28];
  undefined1 auStack_15c [12];
  char local_150 [64];
  undefined1 local_110 [64];
  undefined1 local_d0 [64];
  undefined1 local_90 [64];
  undefined1 local_50 [64];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar10 = operator==_exref;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e0ef;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  if (param_3 == -1) {
    ppvVar2 = &local_c;
    if (param_4 != (char *)0x0) {
      local_150[0] = '\0';
      local_1b8[0] = '\0';
      local_50[0] = 0;
      local_d0[0] = 0;
      local_90[0] = 0;
      local_110[0] = 0;
      pcVar5 = param_4;
      do {
        cVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
      _MaxCount = (int)pcVar5 - (int)(param_4 + 1);
      if (0xfe < (int)_MaxCount) {
        _MaxCount = 0xfe;
      }
      ExceptionList = &local_c;
      _snscanf(param_4,_MaxCount,"%s %s %s %s %s %s",local_150,local_1b8,local_50,local_d0,local_90,
               local_110);
      iVar6 = _stricmp(local_150,"CanOutOfCar");
      if (iVar6 == 0) {
        iVar6 = atoi(local_1b8);
        *(bool *)((int)param_1 + 0x43e) = 0 < iVar6;
        ppvVar2 = ExceptionList;
      }
      else {
        iVar6 = _stricmp(local_150,"code");
        ppvVar2 = ExceptionList;
        if (iVar6 == 0) {
          pcVar5 = local_1b8;
          do {
            cVar4 = *pcVar5;
            pcVar5[(int)param_1 + (0x47a - (int)local_1b8)] = cVar4;
            pcVar5 = pcVar5 + 1;
          } while (cVar4 != '\0');
          if ((char)param_1[0x11c] == '\0') {
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      (local_1ec,"scanner");
            local_4 = 0;
            piVar7 = (int *)FUN_00457170(local_1ec);
            iVar6 = *piVar7;
            local_4 = 0xffffffff;
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1ec)
            ;
            ppvVar2 = ExceptionList;
            if (iVar6 == 0x3f800000) {
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_1ec,"HELP6");
              pbVar12 = local_1ec;
              local_4 = 1;
              FUN_0041cae0(pbVar12,0xff,0xb4,0xb4,0xff,0xff,0xff);
              uVar8 = FUN_0042dcf0(pbVar12);
              FUN_004df3a0("GUI\\info",uVar8);
              local_4 = 0xffffffff;
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_1ec);
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_1ec,"HELP6A");
              pbVar12 = local_1ec;
              local_4 = 2;
              FUN_0041cae0(pbVar12,0xff,0xb4,0xb4,0xff,0xff,0xff);
              uVar8 = FUN_0042dcf0(pbVar12);
              FUN_004df3a0("GUI\\info",uVar8);
              local_4 = 0xffffffff;
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (local_1ec);
              *(undefined1 *)(param_1 + 0x11c) = 1;
              ppvVar2 = ExceptionList;
            }
          }
        }
      }
    }
LAB_004dafb4:
    ExceptionList = ppvVar2;
    FUN_00527c80(param_2,param_3,param_4);
    ExceptionList = local_c;
    return;
  }
  ppvVar2 = &local_c;
  if (param_3 != -2) goto LAB_004dafb4;
  if (param_4 == (char *)0x0) {
    return;
  }
  pbVar12 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            (param_4 + 0xc);
  ExceptionList = &local_c;
  bVar3 = std::operator==(pbVar12,"OnGetInCar");
  if (((bVar3) && (iVar6 = *(int *)(param_4 + 4), iVar6 != 0)) && (*(int *)(iVar6 + 0x80) == 0x14d))
  {
    (**(code **)(*param_1 + 0xd8))(param_2,iVar6,param_1[0xd0],0);
  }
  bVar3 = std::operator==(pbVar12,"OnGetInCarPassenger");
  if (((bVar3) && (iVar6 = *(int *)(param_4 + 4), iVar6 != 0)) && (*(int *)(iVar6 + 0x80) == 0x14d))
  {
    FUN_00525a80(iVar6,1);
    FUN_0051a400(param_1);
    puVar13 = &DAT_0058ff48;
    FUN_0041cac0(&DAT_0058ff48);
    iVar6 = FUN_0045b600(puVar13);
    if ((iVar6 != 0) && (iVar6 = FUN_0051a3c0(), iVar6 != 0)) {
      uVar8 = FUN_0051a3c0();
      FUN_004dccd0(1,uVar8);
    }
    *(undefined1 *)(param_1[0xb9] + 0x4e0) = 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_1ec,"emotions");
    pcVar5 = "neutral";
    local_4 = 3;
    this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_00429f50(local_1ec);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (this,pcVar5);
    local_4 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1ec);
    pcVar5 = "passenger";
    FUN_004ffac0("passenger");
    uVar8 = FUN_004456c0(pcVar5);
    FUN_004ffa80(uVar8);
    FUN_00501a80(0);
    (**(code **)(*param_1 + 0xa4))();
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    (**(code **)(*(int *)param_1[0xb9] + 0x94))("Passenger",&uStack_1c4,1);
    FUN_00407f80(0x3f800000);
    local_10 = 4;
    uStack_1dc = 0x3f8ccccd;
    uStack_1d8 = 0x3f8ccccd;
    uStack_1d4 = 0x3f8ccccd;
    FUN_005477cc(&uStack_1dc);
    FUN_00545c38(auStack_1d0);
    (**(code **)(*param_1 + 0x8c))(&uStack_1c4);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_1ec,"firstperson");
    local_4._0_1_ = 5;
    puVar9 = (undefined4 *)FUN_00457170(local_1ec);
    *puVar9 = 0;
    local_4 = CONCAT31(local_4._1_3_,4);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1ec);
    FUN_0041d430(param_1 + 0x13c);
    FUN_00504330(param_1[0xb9]);
    local_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(local_1b8,0x10,4,FUN_00407150);
    pcVar10 = operator==_exref;
  }
  pcVar11 = operator==_exref;
  if (param_1[0xb9] != 0) {
    cVar4 = (*pcVar10)(pbVar12,"OnOutOffCar");
    if ((((cVar4 != '\0') && (iVar6 = *(int *)(param_4 + 4), iVar6 != 0)) &&
        (*(int *)(iVar6 + 0x80) == 0x14d)) && (iVar6 == param_1[0xb9])) {
      (**(code **)(*param_1 + 0xdc))(param_2);
    }
    pcVar11 = operator==_exref;
    if (param_1[0xb9] != 0) {
      cVar4 = (*pcVar10)(pbVar12,"OnHide");
      if (cVar4 != '\0') {
        *(undefined1 *)((int)param_1 + 0x43d) = 1;
      }
      pcVar11 = operator==_exref;
      if (param_1[0xb9] != 0) {
        bVar3 = std::operator==(pbVar12,"OnStartCarEngine");
        if (((bVar3) && (iVar6 = *(int *)(param_4 + 4), iVar6 != 0)) &&
           ((*(int *)(iVar6 + 0x80) == 0x14d && (iVar6 == param_1[0xb9])))) {
          *(undefined1 *)((int)param_1 + 0x4ba) = 1;
          (**(code **)(*param_1 + 0x84))(param_2,"selectWeapon",0xffffffff);
          pcVar5 = "ActiveItem";
          FUN_0041cac0("ActiveItem");
          iVar6 = FUN_0045b600(pcVar5);
          if ((iVar6 != 0) && (*(char *)(iVar6 + 0x35) != '\0')) {
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      (abStack_178,"");
            local_4 = 6;
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      (local_1ec,"thumbnail\\icon6");
            local_4._0_1_ = 7;
            FUN_004df760(param_2,local_1ec,abStack_178);
            local_4 = CONCAT31(local_4._1_3_,6);
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1ec)
            ;
            local_4 = 0xffffffff;
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      (abStack_178);
          }
        }
        pcVar11 = operator==_exref;
        if ((((param_1[0xb9] != 0) &&
             (bVar3 = std::operator==((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                       *)(param_4 + 0xc),"OnStopCarEngine"), bVar3)) &&
            (iVar6 = *(int *)(param_4 + 4), iVar6 != 0)) &&
           ((*(int *)(iVar6 + 0x80) == 0x14d && (iVar6 == param_1[0xb9])))) {
          FUN_0051a480(param_2);
        }
      }
    }
  }
  if (param_1[0xb9] == 0) {
    cVar4 = (*pcVar11)(param_4 + 0xc,"OnRemoveWheel");
    if (((cVar4 != '\0') && (*(int *)(param_4 + 4) != 0)) &&
       (*(int *)(*(int *)(param_4 + 4) + 0x80) == 0x14d)) {
      (**(code **)(*param_1 + 0xb8))(0x13);
      FUN_004d55d0(5);
      param_1[0x111] = *(int *)(param_4 + 4);
      param_1[0x110] = *(int *)(param_4 + 8);
    }
    if (param_1[0xb9] == 0) {
      cVar4 = (*pcVar11)(param_4 + 0xc,"OnCallTaxi");
      if (cVar4 != '\0') {
        (**(code **)(*param_1 + 0xb8))(0x13);
        FUN_004d55d0(7);
      }
      if (param_1[0xb9] == 0) {
        cVar4 = (*pcVar11)(param_4 + 0xc,"OnScan");
        if (cVar4 != '\0') {
          (**(code **)(*param_1 + 0xb8))(0);
          *(undefined1 *)(param_1 + 0x11e) = 1;
          *(undefined1 *)((int)param_1 + 0x47a) = 0;
        }
        if (param_1[0xb9] == 0) goto LAB_004db710;
      }
    }
  }
  cVar4 = (*pcVar11)(param_4 + 0xc,"OnToggleIllumination");
  if ((((cVar4 != '\0') && (iVar6 = *(int *)(param_4 + 4), iVar6 != 0)) &&
      (*(int *)(iVar6 + 0x80) == 0x14d)) && (iVar1 = param_1[0xb9], iVar6 == iVar1)) {
    *(bool *)(iVar1 + 0x4e1) = *(char *)(iVar1 + 0x4e1) == '\0';
  }
  if (((param_1[0xb9] != 0) && (cVar4 = (*pcVar11)(param_4 + 0xc,"OnToggleSiren"), cVar4 != '\0'))
     && ((iVar6 = *(int *)(param_4 + 4), iVar6 != 0 &&
         ((*(int *)(iVar6 + 0x80) == 0x14d && (iVar6 == param_1[0xb9])))))) {
    FUN_0051ab80(param_2,CONCAT31((int3)((uint)iVar6 >> 8),*(char *)(param_1[0xb9] + 0x4e5) == '\0')
                );
  }
LAB_004db710:
  pbVar12 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            (param_4 + 0xc);
  cVar4 = (*pcVar11)(pbVar12,"OnCloseDoor");
  if ((cVar4 != '\0') && (*(int *)(param_4 + 4) != 0)) {
    FUN_0051a270(param_2,*(int *)(param_4 + 4));
  }
  cVar4 = (*pcVar11)(pbVar12,"OnEnterCar");
  if (((cVar4 != '\0') && (*(int *)(param_4 + 4) != 0)) &&
     (*(int *)(*(int *)(param_4 + 4) + 0x80) == 0x14d)) {
    FUN_00526460(param_1 + 0xf9,1);
    param_1[0x111] = *(int *)(param_4 + 4);
    (**(code **)(*param_1 + 0xb8))(3);
    *(undefined1 *)((int)param_1 + 0x32d) = 1;
    param_1[0xf1] = 0;
    *(undefined1 *)(param_1 + 0xcb) = 1;
    param_1[0x12f] = param_1[0x130];
    param_1[0xb3] = 4;
    param_1[0xcc] = 0x40c90fdb;
  }
  cVar4 = (*pcVar11)(pbVar12,"OnLoadWheel");
  if (((cVar4 != '\0') && (piVar7 = *(int **)(param_4 + 4), piVar7 != (int *)0x0)) &&
     ((piVar7[0x20] == 0x14d && (param_1[0xb2] != 0)))) {
    (**(code **)(*piVar7 + 0x84))(param_2,"OnLoadWheel",0);
    FUN_00504330(0);
    (**(code **)(*(int *)param_1[0xb2] + 8))(0);
    param_1[0xb2] = 0;
    (**(code **)(*param_1 + 0x84))(local_c,"selectWeapon",2);
  }
  cVar4 = (*pcVar11)(pbVar12,"OnBribe");
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0x84))(param_2,"OnBribe",0);
  }
  cVar4 = (*pcVar11)(pbVar12,"OnOpenDoor");
  if (((cVar4 != '\0') && (iVar6 = *(int *)(param_4 + 4), iVar6 != 0)) && (param_1[0x111] != 0)) {
    if (param_1[0xb9] == 0) {
      puVar14 = auStack_1d0;
      (**(code **)(*param_1 + 0x88))(puVar14);
      uVar8 = FUN_00547ab0(puVar14);
      FUN_0041d430(uVar8);
      uVar8 = 0x13;
      param_1[0x112] = iVar6;
      (**(code **)(*param_1 + 0xb8))(0x13);
      FUN_004d55d0(8);
      (**(code **)(*(int *)param_1[0x111] + 0x88))(&uStack_1d4);
      uVar8 = FUN_00547ab0(uVar8);
      FUN_0041d430(uVar8);
    }
    else {
      *(undefined1 *)(iVar6 + 0x3d4) = 0;
      *(undefined1 *)(iVar6 + 0x3cb) = 0;
      FUN_0051a790(param_2,iVar6);
    }
  }
  bVar3 = std::operator==(pbVar12,"OnPutMarker");
  if ((bVar3) && (*(int *)(param_4 + 4) != 0)) {
    puVar14 = auStack_15c;
    (**(code **)(*param_1 + 0x88))(puVar14);
    uVar8 = FUN_00547ab0(puVar14);
    FUN_0041d430(uVar8);
    (**(code **)(*param_1 + 0xb8))(0x13);
    FUN_004d55d0(10);
    param_1[0x111] = *(int *)(param_4 + 4);
    param_1[0x144] = 0;
  }
  bVar3 = std::operator==(pbVar12,"OnTalk");
  if (!bVar3) {
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(param_4 + 4) == 0) {
    ExceptionList = local_c;
    return;
  }
  FUN_004d5db0(param_2,*(int *)(param_4 + 4));
  ExceptionList = local_c;
  return;
}




/* Function: FUN_004de590 */

void __thiscall FUN_004de590(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  if (((int *)param_1[0x56] != (int *)0x0) &&
     (iVar1 = (**(code **)(*(int *)param_1[0x56] + 0xec))(param_2,param_3), iVar1 != -1)) {
    return;
  }
  pcVar3 = "SpeedMeter";
  FUN_0041cac0("SpeedMeter");
  piVar2 = (int *)FUN_0045b600(pcVar3);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x28))(param_2);
  }
  (**(code **)(*param_1 + 0x1c))();
  return;
}




/* Function: FUN_004e1690 */

undefined4 * __fastcall FUN_004e1690(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e4e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0045ca20();
  local_4 = 0;
  *param_1 = &PTR_LAB_00590a18;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x13),"SpeedMeter");
  iVar1 = FUN_0041c920();
  iVar1 = *(int *)(iVar1 + 0xc);
  iVar2 = FUN_0041c920();
  param_1[0xf] = *(int *)(iVar2 + 8) + -0xc1;
  param_1[0x10] = iVar1 + -0xac;
  param_1[0x11] = 0x100;
  param_1[0x12] = 0x100;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_28,"speedmeter");
  local_4._0_1_ = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_44,".\\Textures\\GUI\\");
  FUN_00429a60(local_44,local_28,1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_28,"speedmeter");
  uVar3 = FUN_004222d0(local_28);
  param_1[0x1e] = uVar3;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_44,"speedarrow");
  local_4._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_28,".\\Textures\\GUI\\");
  FUN_00429a60(local_28,local_44,1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  local_4._0_1_ = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_28,"speedarrow");
  uVar3 = FUN_004222d0(local_28);
  param_1[0x1d] = uVar3;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44,"fuelempty")
  ;
  local_4._0_1_ = 3;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_28,".\\Textures\\GUI\\");
  FUN_00429a60(local_28,local_44,1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"fuelempty")
  ;
  uVar3 = FUN_004222d0(local_28);
  param_1[0x1f] = uVar3;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_0051a790 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0051a790(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  float local_10;
  undefined1 local_c [12];
  
  local_10 = 0.0;
  if (*(float *)(param_1 + 0x74) < *(float *)(param_1 + 0x70)) {
    local_10 = (*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x74)) * _DAT_0058b9b0;
  }
  if (*(float *)(param_1 + 0x70) < *(float *)(param_1 + 0x74)) {
    local_10 = (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x70)) * _DAT_0059187c;
  }
  cVar1 = FUN_0051a210();
  if (cVar1 == '\0') goto LAB_0051a867;
  if ((*(float *)(param_1 + 0x7c) < _DAT_00582ad8) || (local_10 <= _DAT_00582ad8)) {
    if (*(float *)(param_1 + 0x7c) < _DAT_00582ad8 == (*(float *)(param_1 + 0x7c) == _DAT_00582ad8))
    goto LAB_0051a867;
    if (_DAT_00582ad8 <= local_10) goto LAB_0051a867;
  }
  puVar2 = local_c;
  (**(code **)(*param_3 + 0x90))(puVar2);
  FUN_00547ab0(puVar2);
  FUN_0051a540(param_2,"Sounds\\car\\cardooropen.wav","channel1",local_c,0,0,0);
LAB_0051a867:
  *(float *)(param_1 + 0x7c) = -local_10;
  return 1;
}




/* Function: FUN_0051a9e0 */

void __thiscall FUN_0051a9e0(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 local_c [12];
  
  puVar3 = local_c;
  if (param_3 == *(char *)((int)param_1 + 0x531)) {
    return;
  }
  *(char *)((int)param_1 + 0x531) = param_3;
  if (param_3 == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x90))(local_c);
  FUN_00547ab0(puVar3);
  iVar1 = rand();
  iVar1 = iVar1 % 3;
  if (iVar1 == 0) {
    pcVar2 = "Sounds\\car\\carskid.wav";
  }
  else if (iVar1 == 1) {
    pcVar2 = "Sounds\\car\\carskid1.wav";
  }
  else {
    if (iVar1 != 2) goto LAB_0051aa84;
    pcVar2 = "Sounds\\car\\carskid2.wav";
  }
  FUN_0051a540(param_2,pcVar2,"CarSkid",local_c,1,0,0);
LAB_0051aa84:
  FUN_0051a1a0(param_2,"CarSkid",0,0);
  param_1[0x14d] = 0;
  return;
}




/* Function: FUN_0051aab0 */

void __thiscall FUN_0051aab0(int *param_1,undefined4 param_2,char param_3)

{
  undefined1 *puVar1;
  undefined1 local_c [12];
  
  if (param_3 != (char)param_1[0x14e]) {
    *(char *)(param_1 + 0x14e) = param_3;
    if (param_3 != '\0') {
      puVar1 = local_c;
      (**(code **)(*param_1 + 0x90))(puVar1);
      FUN_00547ab0(puVar1);
      FUN_0051a540(param_2,"Sounds\\Car\\alarm.wav","Engine",local_c,1,param_1[0x10f],0);
      FUN_0051a130(param_2,"Engine",0x3f800000,param_1[0x10f]);
      (**(code **)(*param_1 + 0x84))(param_2,"AlarmOn",0);
      return;
    }
    FUN_0051a0d0(param_2,"Engine",param_1[0x10f]);
    (**(code **)(*param_1 + 0x84))(param_2,"AlarmOff",0);
  }
  return;
}




/* Function: FUN_0051ab80 */

void __thiscall FUN_0051ab80(int *param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 local_c [12];
  
  if (((char)param_1[0x13e] != '\0') && (param_3 != *(char *)((int)param_1 + 0x4e5))) {
    if (param_3 != '\0') {
      puVar4 = local_c;
      (**(code **)(*param_1 + 0x90))(puVar4);
      FUN_00547ab0(puVar4);
      FUN_0051a540(param_2,"Sounds\\car\\police.wav","Engine",local_c,1,param_1[0x10f],0);
      *(char *)((int)param_1 + 0x4e5) = param_3;
      return;
    }
    FUN_0051a0d0(param_2,"Engine",param_1[0x10f]);
    if (*(char *)((int)param_1 + 0x4e3) != '\0') {
      puVar4 = local_c;
      (**(code **)(*param_1 + 0x88))(puVar4,1,param_1[0x10f],0);
      uVar1 = FUN_00547ab0(puVar4);
      pcVar3 = "Engine";
      pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(param_1 + 0xf8));
      FUN_0051a540(param_2,pcVar2,pcVar3,uVar1);
    }
    *(undefined1 *)((int)param_1 + 0x4e5) = 0;
  }
  return;
}




/* Function: FUN_0051ad20 */

void __thiscall FUN_0051ad20(int *param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 local_c [12];
  
  puVar3 = local_c;
  (**(code **)(*param_1 + 0x90))(local_c);
  FUN_00547ab0(puVar3);
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    FUN_0051a540(param_2,"Sounds\\car\\horn1.wav","channel1",local_c,0,0,0);
    return;
  }
  FUN_0051a540(param_2,"Sounds\\car\\horn2.wav","channel1",local_c,0,0,0);
  return;
}




/* Function: FUN_0051b7e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0051b7e0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  float *pfVar11;
  uint unaff_EBX;
  float10 fVar12;
  float *pfVar13;
  undefined1 *puVar14;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  int local_90;
  undefined1 local_8c [12];
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  fVar12 = (float10)FUN_0041ce10();
  param_1[0xe9] = (int)(float)((float10)(float)param_1[0xe9] - fVar12);
  bVar6 = FUN_0053e920(param_2);
  if ((char)param_1[0xf4] == '\0') {
    iVar10 = param_1[0xab];
    if (((iVar10 != 0) && (*(int *)(iVar10 + 0x100) != 0)) &&
       (local_90 = *(int *)(iVar10 + 0x104) - *(int *)(iVar10 + 0x100) >> 2, local_90 != 0)) {
      *(undefined4 *)(iVar10 + 300) = 0;
      (**(code **)(*(int *)param_1[0xab] + 0x20))(param_2);
    }
    iVar10 = param_1[0xac];
    if (((iVar10 != 0) && (*(int *)(iVar10 + 0x100) != 0)) &&
       (local_90 = *(int *)(iVar10 + 0x104) - *(int *)(iVar10 + 0x100) >> 2, local_90 != 0)) {
      *(undefined4 *)(iVar10 + 300) = 0;
      (**(code **)(*(int *)param_1[0xac] + 0x20))(param_2);
    }
  }
  else {
    puVar14 = local_8c;
    (**(code **)(*param_1 + 0x88))(puVar14);
    uVar7 = FUN_00547ab0(puVar14);
    uVar7 = FUN_0041caa0(uVar7);
    FUN_0041d580(&fStack_a8,uVar7);
    bVar3 = _DAT_00591a58 <= fStack_a8 * fStack_a8 + fStack_a4 * fStack_a4 + fStack_a0 * fStack_a0;
    iVar10 = param_1[0xab];
    if (iVar10 != 0) {
      if (bVar3) {
        *(undefined4 *)(iVar10 + 300) = 0;
      }
      else {
        iVar8 = FUN_004cf110();
        *(int *)(iVar10 + 300) = 0x14 - iVar8;
        if (*(int *)(param_1[0xab] + 300) < 1) {
          *(undefined4 *)(param_1[0xab] + 300) = 0;
        }
      }
      uVar7 = (**(code **)(*param_1 + 0x88))(param_1 + 0xad);
      puVar9 = (undefined4 *)FUN_00548704(local_8c,uVar7);
      iVar10 = param_1[0xab];
      if (puVar9 != (undefined4 *)(iVar10 + 0x10c)) {
        *(undefined4 *)(iVar10 + 0x10c) = *puVar9;
        *(undefined4 *)(iVar10 + 0x110) = puVar9[1];
        *(undefined4 *)(iVar10 + 0x114) = puVar9[2];
      }
      (**(code **)(*(int *)param_1[0xab] + 0x20))(param_2);
    }
    iVar10 = param_1[0xac];
    if (iVar10 != 0) {
      if (bVar3) {
        *(undefined4 *)(iVar10 + 300) = 0;
      }
      else {
        iVar8 = FUN_004cf110();
        *(int *)(iVar10 + 300) = 0x14 - iVar8;
        if (*(int *)(param_1[0xac] + 300) < 1) {
          *(undefined4 *)(param_1[0xac] + 300) = 0;
        }
      }
      uVar7 = (**(code **)(*param_1 + 0x88))(param_1 + 0xb0);
      puVar9 = (undefined4 *)FUN_00548704(local_8c,uVar7);
      iVar10 = param_1[0xac];
      if (puVar9 != (undefined4 *)(iVar10 + 0x10c)) {
        *(undefined4 *)(iVar10 + 0x10c) = *puVar9;
        *(undefined4 *)(iVar10 + 0x110) = puVar9[1];
        *(undefined4 *)(iVar10 + 0x114) = puVar9[2];
      }
      (**(code **)(*(int *)param_1[0xac] + 0x20))(param_2);
    }
  }
  if (((param_1[0x6b] == 0) || (*(int *)(param_1[0x6b] + 0x80) != 0x14d)) ||
     ((piVar2 = (int *)param_1[0xa6], piVar2 != (int *)0x0 &&
      (((local_90 = param_1[0xa7] - (int)piVar2 >> 2, local_90 != 0 &&
        (*(int *)(*piVar2 + 0xbc) != 0)) &&
       (iVar10 = FUN_004e4644(*(int *)(*piVar2 + 0xbc)), iVar10 != 0)))))) {
    return (uint)bVar6;
  }
  FUN_00407f80(0x3f800000);
  if (*(char *)((int)param_1 + 0x3d1) == '\0') {
    if (*(char *)((int)param_1 + 0x3cd) == '\0') {
      uVar7 = FUN_00547224(auStack_80,param_1[0xf0]);
    }
    else {
      uVar7 = FUN_00546f8c(auStack_80,param_1[0xf0]);
    }
  }
  else {
    if ((float)param_1[0xef] <= (float)param_1[0xee]) {
      fVar4 = _DAT_00582ad8;
      if ((float)param_1[0xef] < (float)param_1[0xee]) {
        fVar5 = (float)param_1[0xf0] - (float)param_1[0xef];
        fVar4 = (float)param_1[0xee] - (float)param_1[0xef];
        goto LAB_0051bb5c;
      }
    }
    else {
      fVar5 = (float)param_1[0xf0] - (float)param_1[0xee];
      fVar4 = (float)param_1[0xef] - (float)param_1[0xee];
LAB_0051bb5c:
      fVar4 = fVar5 / fVar4;
    }
    uVar7 = FUN_00545c50(auStack_80,0x3f800000,0x3f800000,_DAT_00583354 - fVar4);
  }
  FUN_0041d670(uVar7);
  FUN_00407300();
  puVar14 = local_8c;
  FUN_004ffa70(puVar14);
  FUN_00547ab0(puVar14);
  FUN_00545c38(local_8c);
  cVar1 = *(char *)((int)param_1 + 0x3cb);
  if (cVar1 == '\0') {
    fVar12 = (float10)_CIfmod();
    param_1[0xf0] = (int)(float)fVar12;
  }
  if ((float)param_1[0xee] <= (float)param_1[0xef]) {
    if ((float)param_1[0xef] < (float)param_1[0xf0]) {
      param_1[0xf1] = 0;
      param_1[0xf0] = param_1[0xef];
    }
    if ((float)param_1[0xee] <= (float)param_1[0xf0]) goto LAB_0051bcce;
  }
  else {
    if ((float)param_1[0xf0] < (float)param_1[0xef]) {
      param_1[0xf1] = 0;
      param_1[0xf0] = param_1[0xef];
    }
    if ((float)param_1[0xf0] <= (float)param_1[0xee]) goto LAB_0051bcce;
  }
  param_1[0xf0] = param_1[0xee];
  if (((*(char *)((int)param_1 + 0x3c9) != '\0') && (*(char *)((int)param_1 + 0x3ca) != '\0')) &&
     (cVar1 == '\0')) {
    pfVar11 = &fStack_a8;
    *(undefined1 *)((int)param_1 + 0x3cb) = 1;
    (**(code **)(*param_1 + 0x90))(pfVar11);
    FUN_00547ab0(pfVar11);
    FUN_0051a540(param_2,"Sounds\\car\\cardoorclose.wav","channel1",&fStack_a8,0,0,0);
  }
  param_1[0xf1] = 0;
LAB_0051bcce:
  pfVar11 = &fStack_a8;
  pfVar13 = &fStack_9c;
  (**(code **)(*param_1 + 0x88))(pfVar13,pfVar11);
  FUN_005477ac(pfVar13);
  FUN_0041d410(pfVar11);
  if (*(char *)((int)param_1 + 0x3cd) != '\0') {
    pfVar11 = &fStack_9c;
    puVar14 = auStack_80;
    (**(code **)(*param_1 + 0x88))(puVar14,pfVar11);
    FUN_0051a500(puVar14);
    pfVar11 = (float *)FUN_0054778c(pfVar11);
    if (pfVar11 != &fStack_a8) {
      fStack_a8 = *pfVar11;
      fStack_a4 = pfVar11[1];
      fStack_a0 = pfVar11[2];
    }
    FUN_00407300();
  }
  if ((*(char *)((int)param_1 + 0x3ce) != '\0') &&
     (pfVar11 = (float *)FUN_0041d410(&fStack_9c), pfVar11 != &fStack_a8)) {
    fStack_a8 = *pfVar11;
    fStack_a4 = pfVar11[1];
    fStack_a0 = pfVar11[2];
  }
  FUN_0041d410(&fStack_9c);
  if ((char)param_1[0xf3] != '\0') {
    if (*(char *)((int)param_1 + 0x3cd) == '\0') {
      fStack_98 = fStack_98 + _DAT_00591a30;
    }
    else {
      fStack_98 = fStack_98 - _DAT_00591a30;
    }
  }
  *(undefined1 *)((int)param_1 + 0x27e) = 0;
  if (*(char *)((int)param_1 + 0x3d2) == '\0') {
    if (*(char *)((int)param_1 + 0x3cb) == '\0') {
      fVar4 = fStack_98 * fStack_a4 + fStack_94 * fStack_a0 + fStack_9c * fStack_a8;
      if ((char)param_1[0xf2] == '\0') {
        fVar4 = -fVar4;
      }
      if ((float)_DAT_00588828 < ABS(fVar4 * _DAT_0058b9b0)) {
        param_1[0xf1] = (int)(fVar4 * _DAT_0058b9b0 + (float)param_1[0xf1]);
      }
      fVar4 = (float)_DAT_00591a28;
      *(char *)((int)param_1 + 0x27e) = (char)param_1[0xb9];
      if (ABS((float)param_1[0xf1]) < fVar4 != (ABS((float)param_1[0xf1]) == fVar4)) {
        param_1[0xf1] = 0;
      }
    }
  }
  else if (*(char *)((int)param_1 + 0x3cf) == '\0') {
    param_1[0xf1] = (int)(float)_DAT_00591a18;
  }
  else {
    param_1[0xf1] = (int)(float)_DAT_00591a20;
  }
  (**(code **)(*param_1 + 0x8c))(auStack_40);
  FUN_00407300();
  return unaff_EBX >> 0x18;
}




/* Function: FUN_0051c5b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0051c5b0(int *param_1,float param_2,int param_3)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  float *pfVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  float10 fVar14;
  float10 extraout_ST0;
  float10 fVar15;
  float10 fVar16;
  float10 extraout_ST1;
  char *pcVar17;
  undefined8 *puVar18;
  double *pdVar19;
  int iVar20;
  float fStack_68;
  double local_64;
  undefined8 uStack_58;
  float fStack_50;
  undefined1 auStack_4c [4];
  float fStack_48;
  undefined1 auStack_40 [64];
  
  uVar10 = param_2;
  if (((*(char *)((int)param_1 + 0x4e3) != '\0') || ((char)param_1[0x14e] != '\0')) ||
     (*(char *)((int)param_1 + 0x4e5) != '\0')) {
    uVar6 = FUN_0041caa0();
    pdVar19 = &local_64;
    (**(code **)(*param_1 + 0x88))(pdVar19,uVar6);
    uVar6 = FUN_00547ab0(pdVar19);
    FUN_0041d580(&uStack_58,uVar6);
    fVar1 = uStack_58._4_4_ * uStack_58._4_4_ +
            fStack_50 * fStack_50 + (float)uStack_58 * (float)uStack_58;
    if (((char)param_1[0x14e] == '\0') && (fVar1 < _DAT_00591a58 != (fVar1 == _DAT_00591a58))) {
      if (*(char *)((int)param_1 + 0x4e5) == '\0') {
        pfVar8 = (float *)FUN_004e4730(*(undefined4 *)(*(int *)param_1[0xa6] + 0xbc));
        fVar3 = SQRT(pfVar8[2] * pfVar8[2] + *pfVar8 * *pfVar8);
        uStack_58 = (double)(fVar3 + fVar3);
        local_64 = (double)((float)param_1[0x16e] * _DAT_00587c8c);
        fVar14 = (float10)_CIfmod();
        local_64 = (double)CONCAT44(local_64._4_4_,(float)(fVar14 / (float10)local_64));
        iVar7 = FUN_004cf110();
        if (iVar7 == 1) {
          fVar15 = (float10)_DAT_00591a8c;
          fVar14 = (float10)_DAT_00591a90;
        }
        else if (iVar7 == 2) {
          fVar15 = (float10)_DAT_005916ac;
          fVar14 = (float10)_DAT_0058aa44;
        }
        else {
          fVar14 = extraout_ST0;
          fVar15 = extraout_ST1;
          if (2 < iVar7) {
            fVar15 = (float10)_DAT_00591a88;
            fVar14 = (float10)_DAT_0058a658;
          }
        }
        fVar16 = (float10)local_64._0_4_ * fVar14;
        if ((float)param_1[0x100] < (float)param_1[0x101]) {
          fVar16 = (ABS((float10)uStack_58) * fVar14) / (float10)(float)param_1[0x16e];
        }
        param_2 = (float)(fVar15 + fVar16);
        if ((float10)param_2 < fVar15) {
          param_2 = (float)fVar15;
        }
        FUN_0051a130(uVar10,"Engine",param_2,param_1[0x10f]);
      }
      else {
        fVar3 = (float)param_1[0x13b];
        fVar14 = (float10)FUN_0041ce10();
        param_1[0x13b] = (int)(float)((float10)fVar3 - fVar14);
        fVar3 = ((float)param_1[0x13d] - (float)param_1[0x13c]) * _DAT_0058b9b0 +
                (float)param_1[0x13c];
        param_1[0x13c] = (int)fVar3;
        FUN_0051a130(param_2,"Engine",fVar3,param_1[0x10f]);
        if ((float)param_1[0x13b] < _DAT_00582ad8) {
          iVar7 = rand();
          param_1[0x13b] = (int)((float)(iVar7 % 0xff) * _DAT_0058a930 + _DAT_00583354);
          iVar7 = rand();
          param_1[0x13d] = (int)((float)(iVar7 % 0xff) * _DAT_00591a94 + _DAT_005916ac);
        }
      }
      param_2 = 0.5;
      fStack_68 = 0.4;
      fVar3 = _DAT_00582ad8;
      if (((float)param_1[0x100] != _DAT_00582ad8) &&
         (fVar3 = ABS((float)param_1[0x137] / ABS((float)param_1[0x100])), _DAT_00583354 < fVar3)) {
        fVar3 = _DAT_00583354;
      }
      if (param_1[0x163] == 0) {
        param_2 = 0.3;
        fStack_68 = 0.6;
      }
      else {
        fVar3 = fVar3 * (float)_DAT_00587c38;
      }
      FUN_0051a1a0(uVar10,"Engine",param_2 * fVar3 + fStack_68,param_1[0x10f]);
    }
    if (((float)param_1[0x104] <= _DAT_00591a58) ||
       (fVar1 < _DAT_00591a58 == (fVar1 == _DAT_00591a58))) {
      if (((float)param_1[0x104] < _DAT_00591a58 != ((float)param_1[0x104] == _DAT_00591a58)) &&
         (_DAT_00591a58 < fVar1)) {
        FUN_0051a0d0(uVar10,"Engine",param_1[0x10f]);
      }
    }
    else {
      puVar18 = &uStack_58;
      if ((char)param_1[0x14e] == '\0') {
        if (*(char *)((int)param_1 + 0x4e5) == '\0') {
          (**(code **)(*param_1 + 0x88))();
          uVar6 = FUN_00547ab0(puVar18);
          pcVar17 = "Engine";
          pcVar9 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   ::c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            *)(param_1 + 0xf8));
          FUN_0051a540(uVar10,pcVar9,pcVar17,uVar6);
        }
        else {
          (**(code **)(*param_1 + 0x88))(puVar18,1,param_1[0x10f],0);
          uVar6 = FUN_00547ab0(puVar18);
          FUN_0051a540(uVar10,"Sounds\\Car\\police.wav","Engine",uVar6);
        }
      }
      else {
        (**(code **)(*param_1 + 0x88))();
        uVar6 = FUN_00547ab0(puVar18);
        FUN_0051a540(uVar10,"Sounds\\Car\\alarm.wav","Engine",uVar6);
      }
    }
    param_1[0x104] = (int)fVar1;
  }
  uVar10 = (**(code **)(*param_1 + 0x90))();
  FUN_00407260(uVar10);
  FUN_005477ac(auStack_4c);
  if ((param_1[0x163] == 0) || (*(char *)((int)param_1 + 0x522) != '\0')) {
    iVar7 = param_1[0xa6];
    bVar13 = false;
    cVar2 = *(char *)(*(int *)(iVar7 + 4) + 0x7a);
    if (((cVar2 == '\0') || (bVar13 = *(char *)(*(int *)(iVar7 + 8) + 0x7a) == '\0', cVar2 == '\0'))
       && (*(char *)(*(int *)(iVar7 + 8) + 0x7a) != '\0')) {
      bVar13 = true;
    }
    cVar2 = *(char *)(*(int *)(iVar7 + 0xc) + 0x7a);
    if (cVar2 == '\0') {
LAB_0051ca71:
      if (*(char *)(*(int *)(iVar7 + 0x10) + 0x7a) == '\0') goto LAB_0051ca7b;
    }
    else {
      if (*(char *)(*(int *)(iVar7 + 0x10) + 0x7a) == '\0') {
        bVar13 = true;
      }
      if (cVar2 == '\0') goto LAB_0051ca71;
LAB_0051ca7b:
      if (!bVar13) goto LAB_0051cab2;
    }
    iVar7 = 0;
    do {
      iVar11 = *(int *)(iVar7 + 4 + param_1[0xa6]);
      if (*(char *)(iVar11 + 0x7a) == '\0') {
        FUN_004e46b0(*(undefined4 *)(iVar11 + 0xbc),0,0xc3480000,0);
      }
      iVar7 = iVar7 + 4;
    } while (iVar7 < 0x10);
  }
LAB_0051cab2:
  if (fStack_48 <= (float)_DAT_00587c38) {
    *(undefined4 *)(*(int *)param_1[0xa6] + 0x74) = 0x42c80000;
  }
  else {
    *(undefined4 *)(*(int *)param_1[0xa6] + 0x74) = 0;
  }
  if ((param_3 == 1) || (fStack_48 < (float)_DAT_00587c38)) {
    param_1 = param_1 + 0x110;
    iVar7 = 4;
    do {
      if (*param_1 != 0) {
        FUN_004eaa6c(*param_1,0x103,0);
      }
      param_1 = param_1 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    goto LAB_0051d001;
  }
  if (param_3 != 2) goto LAB_0051d001;
  FUN_00547ab0(&uStack_58);
  if (ABS((float)param_1[0x100]) <= (float)_DAT_00591a68) {
    if (param_1[0x163] == 0) {
      if ((float)param_1[0x101] <= _DAT_00582ad8) {
        if ((float)param_1[0x101] < _DAT_00582ad8) {
          fVar14 = (float10)FUN_0041ce10();
          fVar14 = fVar14 * (float10)_DAT_00587fa8 + (float10)(float)param_1[0x101];
          param_1[0x101] = (int)(float)fVar14;
          if ((float10)_DAT_00582ad8 < fVar14) goto LAB_0051cdc8;
        }
      }
      else {
        fVar1 = (float)param_1[0x101];
        fVar14 = (float10)FUN_0041ce10();
        fVar14 = (float10)fVar1 - fVar14 * (float10)_DAT_00587fa8;
        param_1[0x101] = (int)(float)fVar14;
        if (fVar14 < (float10)_DAT_00582ad8) {
LAB_0051cdc8:
          param_1[0x101] = 0;
        }
      }
      param_1[0x102] = param_1[0x16d];
      fVar1 = (float)param_1[0x16d] - (float)param_1[0x103];
      if ((char)param_1[0x139] != '\0') goto LAB_0051cd29;
      param_1[0x103] = (int)(fVar1 * _DAT_0058a2f4 + (float)param_1[0x103]);
    }
    else {
      param_1[0x103] =
           (int)(((float)param_1[0x102] - (float)param_1[0x103]) * _DAT_00587c40 +
                (float)param_1[0x103]);
      fVar1 = _DAT_00588880;
      if ((float)param_1[0x100] < (float)param_1[0x101]) {
        fVar1 = _DAT_00591a64;
      }
      fVar1 = ((float)param_1[0x100] - (float)param_1[0x101]) * fVar1;
      if ((((fVar1 < _DAT_00582ad8) || (fVar3 = _DAT_00583340, _DAT_00583340 <= fVar1)) &&
          (fVar3 = fVar1, fVar1 < _DAT_00582ad8)) && (_DAT_00587cbc < fVar1)) {
        fVar3 = _DAT_00587cbc;
      }
      fVar1 = (float)param_1[0x101];
      param_1[0x101] = (int)(fVar3 + fVar1);
      if (ABS((fVar3 + fVar1) - (float)param_1[0x100]) < (float)_DAT_00582af0) {
        param_1[0x101] = param_1[0x100];
      }
      param_1[0x102] = (int)((float)param_1[0x16d] + (float)param_1[0x16d]);
    }
  }
  else if (param_1[0x163] == 0) {
    param_1[0x101] =
         (int)(((float)param_1[0x100] - (float)param_1[0x101]) * _DAT_0058dbdc +
              (float)param_1[0x101]);
    param_1[0x102] = param_1[0x16d];
    fVar1 = (float)param_1[0x16d] - (float)param_1[0x103];
LAB_0051cd29:
    param_1[0x103] = (int)(fVar1 * _DAT_00583340 + (float)param_1[0x103]);
  }
  else {
    fVar1 = (float)param_1[0x100];
    if (((float)_DAT_0058aa88 < ABS((float)param_1[0xff]) / (float)param_1[0x16c]) &&
       ((float)param_1[0x16e] * _DAT_00583340 < (float)param_1[0x101])) {
      param_1[0x100] =
           (int)((_DAT_00583354 -
                 (ABS((float)param_1[0xff]) / (float)param_1[0x16c]) * _DAT_0058a2f4) *
                (float)param_1[0x100]);
    }
    fVar3 = _DAT_00588880;
    if (fVar1 < (float)param_1[0x101]) {
      fVar3 = _DAT_0058b9b0;
    }
    fVar3 = (fVar1 - (float)param_1[0x101]) * fVar3;
    if (((fVar3 < _DAT_00582ad8) || (fVar4 = _DAT_00583340, _DAT_00583340 <= fVar3)) &&
       ((fVar4 = fVar3, fVar3 < _DAT_00582ad8 && (_DAT_00587cbc < fVar3)))) {
      fVar4 = _DAT_00587cbc;
    }
    fVar3 = (float)param_1[0x101];
    param_1[0x101] = (int)(fVar4 + fVar3);
    if (ABS((fVar4 + fVar3) - fVar1) < (float)_DAT_00582af0) {
      param_1[0x101] = (int)fVar1;
    }
    if ((float)param_1[0x101] <= fVar1) {
      param_1[0x102] = param_1[0x16d];
    }
    else {
      param_1[0x102] = (int)((float)param_1[0x16d] * _DAT_00587fa8);
    }
    fVar1 = _DAT_00587de8;
    if (*(char *)(*(int *)(param_1[0xa6] + 0xc) + 0x7a) != '\0') {
      fVar1 = _DAT_00588884;
    }
    if (*(char *)(*(int *)(param_1[0xa6] + 0x10) + 0x7a) != '\0') {
      fVar1 = fVar1 + _DAT_00583354;
    }
    fVar1 = fVar1 * _DAT_0058b9b0;
    fVar4 = (float)_DAT_0058aa88;
    fVar3 = (float)param_1[0x101] * _DAT_00583350;
    if ((float)_DAT_00582af0 < (float)param_1[0x101] * _DAT_00583350) {
      fVar3 = _DAT_00583354;
    }
    fVar5 = _DAT_00583354 - fVar3;
    param_1[0x103] = param_1[0x102];
    param_1[0x101] = (int)((fVar5 + fVar3 * (fVar1 + fVar4)) * (float)param_1[0x101]);
  }
  if ((float)param_1[0x16e] < (float)param_1[0x101]) {
    param_1[0x101] = param_1[0x16e];
  }
  if ((float)param_1[0x101] < -(float)param_1[0x16e]) {
    param_1[0x101] = (int)-(float)param_1[0x16e];
  }
  iVar7 = 0;
  piVar12 = param_1 + 0x110;
  do {
    iVar11 = *piVar12;
    if ((char)param_1[0x139] == '\0') {
      if (iVar11 != 0) {
        FUN_004eaa6c(iVar11,0x102,param_1[0x101]);
        iVar11 = *piVar12;
        if (iVar11 != 0) {
          iVar20 = param_1[0x103];
          goto LAB_0051cfbd;
        }
      }
    }
    else if (iVar7 < 2) {
      if (iVar11 != 0) {
        FUN_004eaa6c(iVar11,0x102,param_1[0x101]);
        iVar11 = *piVar12;
        if (iVar11 != 0) {
          iVar20 = param_1[0x103];
LAB_0051cfbd:
          FUN_004eaa6c(iVar11,0x103,iVar20);
        }
      }
    }
    else if (iVar11 != 0) {
      FUN_004eaa6c(iVar11,0x102,(float)param_1[0x101] * (float)_DAT_00588810);
      iVar11 = *piVar12;
      if (iVar11 != 0) {
        iVar20 = param_1[0x16d];
        goto LAB_0051cfbd;
      }
    }
    iVar7 = iVar7 + 1;
    piVar12 = piVar12 + 1;
  } while (iVar7 < 4);
LAB_0051d001:
  _eh_vector_destructor_iterator_(auStack_40,0x10,4,FUN_00407150);
  return;
}




/* Function: FUN_0051ed50 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0051ed50(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  bool bVar6;
  float fVar7;
  uint3 uVar8;
  int3 iVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  char cVar13;
  undefined1 uVar14;
  int iVar15;
  undefined4 uVar16;
  float *pfVar17;
  int *piVar18;
  uint uVar19;
  int **ppiVar20;
  undefined4 *puVar21;
  int *piVar22;
  int iVar23;
  double *pdVar24;
  uint uVar25;
  bool bVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  undefined8 uVar31;
  undefined8 *puVar32;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar33;
  float fVar34;
  float fStack_344;
  float fStack_340;
  undefined4 uStack_33c;
  float fStack_338;
  int *piStack_334;
  undefined8 uStack_330;
  float fStack_328;
  float fStack_324;
  uint uStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  undefined4 uStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  undefined8 uStack_300;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float afStack_2e8 [4];
  undefined8 uStack_2d8;
  float fStack_2d0;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_298 [4];
  int iStack_294;
  int iStack_290;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_27c [4];
  int iStack_278;
  int iStack_274;
  undefined1 auStack_260 [64];
  undefined1 auStack_220 [4];
  undefined1 auStack_21c [8];
  undefined1 auStack_214 [68];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [4];
  undefined1 auStack_1c4 [8];
  undefined1 auStack_1bc [64];
  undefined1 auStack_17c [16];
  undefined1 auStack_16c [8];
  undefined1 auStack_164 [12];
  undefined1 auStack_158 [15];
  undefined1 uStack_149;
  undefined4 uStack_148;
  undefined2 uStack_144;
  undefined1 auStack_cc [68];
  undefined1 auStack_88 [60];
  undefined1 auStack_4c [72];
  
  *(undefined1 *)(param_1 + 0xa9) = 0;
  if (((char)param_1[1] != '\0') &&
     ((*(int *)(*(int *)param_1[0xa6] + 0xbc) == 0 || (iVar15 = FUN_004e4644(), iVar15 == 0)))) {
    (**(code **)(*param_1 + 0x88))();
    FUN_00547ab0();
    uVar16 = FUN_0041caa0();
    FUN_0041d580(&fStack_31c,uVar16);
    if (fStack_31c * fStack_31c + fStack_318 * fStack_318 + fStack_314 * fStack_314 < _DAT_0058aa20)
    {
      (**(code **)(*param_1 + 0xa0))();
    }
  }
  pfVar17 = (float *)FUN_004e4730();
  fStack_31c = *pfVar17;
  fStack_314 = pfVar17[2];
  fStack_318 = pfVar17[1];
  uStack_300 = (double)CONCAT44(uStack_300._4_4_,param_1[0xb]);
  fStack_338 = SQRT(fStack_31c * fStack_31c + fStack_318 * fStack_318 + fStack_314 * fStack_314);
  param_1[0x137] = (int)fStack_338;
  fStack_338 = _DAT_00583354 / fStack_338;
  fStack_31c = fStack_338 * fStack_31c;
  fStack_318 = fStack_318 * fStack_338;
  fStack_314 = fStack_314 * fStack_338;
  iVar15 = FUN_0051a3c0();
  if (iVar15 == 0) {
    fVar27 = (float10)FUN_0041ce10();
    fVar34 = (float)param_1[0x107];
    param_1[0x107] = (int)(float)(fVar27 + (float10)fVar34);
    if ((float10)_DAT_00588bfc < fVar27 + (float10)fVar34) {
      param_1[0x10d] = 0;
    }
  }
  else {
    param_1[0x107] = 0;
  }
  if ((param_1[0x14f] != 0) && (_DAT_00582ad8 < (float)uStack_300)) {
    fVar27 = (float10)FUN_0041ce10();
    fStack_338 = (float)(fVar27 + (float10)(float)param_1[0x150]);
    fVar34 = (float)_DAT_00587c38;
    param_1[0x150] = (int)fStack_338;
    if ((fVar34 <= fStack_338) &&
       (fVar27 = (float10)FUN_0041ce10(), (float10)fStack_338 - fVar27 < (float10)_DAT_00587c38)) {
      pfVar17 = afStack_2e8 + 1;
      (**(code **)(*param_1 + 0x88))(pfVar17,0,0);
      uVar16 = FUN_00547ab0(pfVar17);
      FUN_0051a540(param_2,"Sounds\\car\\chirp.wav","channel1",uVar16);
    }
    if (_DAT_00583354 < (float)param_1[0x150]) {
      uStack_148 = DAT_00591b2c;
      uStack_144 = DAT_00591b30;
      if (param_1[0x14f] < 1) {
        piVar22 = (int *)((int)param_1 + 0x54a);
        *(undefined1 *)((int)param_1 + 0x539) = 0;
        piVar18 = piVar22;
        do {
          iVar15 = *piVar18;
          piVar18 = (int *)((int)piVar18 + 1);
        } while ((char)iVar15 != '\0');
        uVar19 = (int)piVar18 - (int)piVar22;
        piVar18 = (int *)&uStack_149;
        do {
          pcVar1 = (char *)((int)piVar18 + 1);
          piVar18 = (int *)((int)piVar18 + 1);
        } while (*pcVar1 != '\0');
      }
      else {
        piVar22 = param_1 + 0x151;
        *(undefined1 *)((int)param_1 + 0x539) = 1;
        piVar18 = piVar22;
        do {
          iVar15 = *piVar18;
          piVar18 = (int *)((int)piVar18 + 1);
        } while ((char)iVar15 != '\0');
        uVar19 = (int)piVar18 - (int)piVar22;
        piVar18 = (int *)&uStack_149;
        do {
          pcVar1 = (char *)((int)piVar18 + 1);
          piVar18 = (int *)((int)piVar18 + 1);
        } while (*pcVar1 != '\0');
      }
      for (uVar25 = uVar19 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *piVar18 = *piVar22;
        piVar22 = piVar22 + 1;
        piVar18 = piVar18 + 1;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(char *)piVar18 = (char)*piVar22;
        piVar22 = (int *)((int)piVar22 + 1);
        piVar18 = (int *)((int)piVar18 + 1);
      }
      iVar15 = FUN_0041cab0();
      piVar22 = *(int **)(iVar15 + 0x9c);
      (**(code **)(*param_1 + 0x88))();
      FUN_00547ab0();
      (**(code **)(*piVar22 + 0x88))(&uStack_2b0);
      uVar16 = FUN_00547ab0();
      FUN_0041d580(&fStack_30c,uVar16);
      if (fStack_308 * fStack_308 + fStack_304 * fStack_304 + fStack_30c * fStack_30c <
          _DAT_00591b28) {
        (**(code **)(*piVar22 + 0x44))(param_2,0xffffffff);
      }
      param_1[0x150] = 0;
      param_1[0x14f] = 0;
      FUN_0051aab0(param_2,0);
    }
  }
  if (param_1[0x163] == 0) {
    iVar15 = FUN_0041cb40();
    if (*(int *)(iVar15 + 0x104) < 0x33) {
      *(float *)(*(int *)(param_1[0xa6] + 4) + 0x74) = (float)param_1[0x176] * _DAT_00587e3c;
      *(float *)(*(int *)(param_1[0xa6] + 8) + 0x74) = (float)param_1[0x176] * _DAT_00587e3c;
      *(float *)(*(int *)(param_1[0xa6] + 0xc) + 0x74) = (float)param_1[0x176] * _DAT_00587e3c;
      *(float *)(*(int *)(param_1[0xa6] + 0x10) + 0x74) = (float)param_1[0x176] * _DAT_00587e3c;
    }
    else {
      *(float *)(*(int *)(param_1[0xa6] + 4) + 0x74) = (float)param_1[0x176] * _DAT_00587e3c;
      *(float *)(*(int *)(param_1[0xa6] + 8) + 0x74) = (float)param_1[0x176] * _DAT_00587e3c;
      *(float *)(*(int *)(param_1[0xa6] + 0xc) + 0x74) = (float)param_1[0x176] * _DAT_00587e3c;
      *(float *)(*(int *)(param_1[0xa6] + 0x10) + 0x74) = (float)param_1[0x176] * _DAT_00587e3c;
    }
  }
  else {
    if ((*(int *)(*(int *)param_1[0xa6] + 0xd4) != 0) && ((char)param_1[0x14c] != '\0')) {
      param_1[0x14a] = 0x3f000000;
    }
    piStack_334 = (int *)param_1[0x14a];
    fVar27 = (float10)FUN_0041ce10();
    param_1[0x14a] = (int)(float)((float10)(float)piStack_334 - fVar27);
    dVar2 = _DAT_00582af0;
    if ((char)param_1[0x139] != '\0') {
      dVar2 = _DAT_0058aba8;
    }
    fVar34 = (float)dVar2;
    if ((float10)(float)piStack_334 - fVar27 <= (float10)_DAT_00582ad8) {
      *(float *)(*(int *)(param_1[0xa6] + 4) + 0x74) = fVar34 * (float)param_1[0x176];
      *(float *)(*(int *)(param_1[0xa6] + 8) + 0x74) = fVar34 * (float)param_1[0x176];
      *(float *)(*(int *)(param_1[0xa6] + 0xc) + 0x74) = fVar34 * (float)param_1[0x176];
      *(float *)(*(int *)(param_1[0xa6] + 0x10) + 0x74) = fVar34 * (float)param_1[0x176];
    }
    else {
      *(undefined4 *)(*(int *)(param_1[0xa6] + 4) + 0x74) = 0;
      *(undefined4 *)(*(int *)(param_1[0xa6] + 8) + 0x74) = 0;
      *(undefined4 *)(*(int *)(param_1[0xa6] + 0xc) + 0x74) = 0;
      *(undefined4 *)(*(int *)(param_1[0xa6] + 0x10) + 0x74) = 0;
    }
  }
  uVar11 = FUN_0051b7e0();
  bVar26 = (float)uStack_300 < _DAT_00582ad8;
  bVar6 = (float)uStack_300 == _DAT_00582ad8;
  uStack_310 = (float)CONCAT13(uVar11,(undefined3)uStack_310);
  *(undefined4 *)(*(int *)param_1[0xa6] + 0xd4) = 0;
  if (bVar26 != bVar6) {
    FUN_0051a9e0(param_2,0);
    FUN_0051aab0(param_2,0);
    if ((char)param_1[0x138] != '\0') {
      FUN_0051e400();
    }
    piVar22 = (int *)param_1[0x17f];
    if (piVar22 != (int *)param_1[0x180]) {
      do {
        *(undefined1 *)(*piVar22 + 0x3cf) = 0;
        *(undefined4 *)(*piVar22 + 0x3a4) = 0;
        uStack_300 = (double)CONCAT44(uStack_300._4_4_,(int *)*piVar22);
        if ((int *)*piVar22 != param_1) {
          fVar27 = (float10)FUN_0041ce10();
          *(float *)((int)(float)uStack_300 + 0x2dc) =
               (float)(fVar27 + (float10)*(float *)((int)(float)uStack_300 + 0x2dc));
          if (_DAT_00587de8 < *(float *)(*piVar22 + 0x2dc)) {
            *(undefined4 *)(*piVar22 + 0x220) = 0xffffffff;
          }
          FUN_004ff070();
          (**(code **)(*(int *)*piVar22 + 0x88))();
          FUN_00407260();
          FUN_00547ab0();
          fStack_2bc = fStack_328;
          iVar15 = *piVar22;
          fStack_2c4 = (float)uStack_330;
          fStack_2c0 = uStack_330._4_4_;
          uStack_330 = (double)CONCAT44(uStack_330._4_4_ + *(float *)(iVar15 + 0x2ec),
                                        (float)uStack_330 + *(float *)(iVar15 + 0x2e8));
          fStack_328 = fStack_328 + *(float *)(iVar15 + 0x2f0);
          fVar34 = *(float *)(iVar15 + 0x2ec) - _DAT_00587fa8;
          *(undefined4 *)(iVar15 + 0x2e8) = *(undefined4 *)(iVar15 + 0x2e8);
          *(undefined4 *)(iVar15 + 0x2f0) = *(undefined4 *)(iVar15 + 0x2f0);
          *(float *)(iVar15 + 0x2ec) = fVar34;
          pbVar33 = abStack_298;
          FUN_004ffac0();
          fVar27 = (float10)FUN_0043f960();
          pfVar17 = &fStack_2c4;
          puVar32 = &uStack_330;
          uVar31 = CONCAT44(pbVar33,(float)(fVar27 * (float10)_DAT_00583340));
          FUN_0041c940(puVar32,pfVar17,(float)(fVar27 * (float10)_DAT_00583340));
          FUN_0041f800(puVar32,pfVar17,uVar31);
          if ((iStack_294 != 0) &&
             (afStack_2e8[0] = (float)(iStack_290 - iStack_294 >> 5), afStack_2e8[0] != 0.0)) {
            iVar15 = *piVar22;
            *(float *)(iVar15 + 0x2e8) = *(float *)(iVar15 + 0x2e8) * _DAT_00587c40;
            *(float *)(iVar15 + 0x2ec) = *(float *)(iVar15 + 0x2ec) * _DAT_00587c40;
            *(float *)(iVar15 + 0x2f0) = *(float *)(iVar15 + 0x2f0) * _DAT_00587c40;
            *(float *)(*piVar22 + 0x2ec) = -*(float *)(*piVar22 + 0x2ec);
          }
          fStack_340 = (float)(iStack_294 + 0xc);
          for (fStack_338 = 0.0;
              (iStack_294 != 0 && ((uint)fStack_338 < (uint)(iStack_290 - iStack_294 >> 5)));
              fStack_338 = (float)((int)fStack_338 + 1)) {
            pfVar17 = (float *)FUN_0041d5b0(afStack_2e8 + 1,fStack_340);
            uStack_330 = (double)CONCAT44(uStack_330._4_4_ + pfVar17[1],(float)uStack_330 + *pfVar17
                                         );
            fStack_328 = fStack_328 + pfVar17[2];
            fStack_340 = (float)((int)fStack_340 + 0x20);
          }
          FUN_00545c38();
          iVar15 = *piVar22;
          *(float *)(iVar15 + 0x2f4) = *(float *)(iVar15 + 0x2e8) + *(float *)(iVar15 + 0x2f4);
          iVar15 = *piVar22;
          *(float *)(iVar15 + 0x2f8) = *(float *)(iVar15 + 0x2ec) + *(float *)(iVar15 + 0x2f8);
          iVar15 = *piVar22;
          *(float *)(iVar15 + 0x2fc) = *(float *)(iVar15 + 0x2f0) + *(float *)(iVar15 + 0x2fc);
          iVar15 = *piVar22;
          *(float *)(iVar15 + 0x300) = *(float *)(iVar15 + 0x2e8) + *(float *)(iVar15 + 0x300);
          FUN_005485e8();
          FUN_0041d670();
          FUN_00407300();
          FUN_00545c38();
          (**(code **)(*(int *)*piVar22 + 0x8c))();
          FUN_00407300();
          FUN_00532a60();
        }
        piVar22 = piVar22 + 1;
      } while (piVar22 != (int *)param_1[0x180]);
      return (uint)uStack_310 >> 0x18;
    }
    goto LAB_0052111a;
  }
  uVar31 = CONCAT44(1,param_1);
  FUN_0041ce50(param_1);
  FUN_0052c640(uVar31);
  (**(code **)(*param_1 + 0x88))();
  FUN_00547ab0();
  if ((*(char *)((int)param_1 + 0x4e3) != '\0') || ((char)param_1[0x14e] != '\0')) {
    FUN_0051a710(param_2,"Engine",auStack_1d0);
  }
  iVar15 = (**(code **)(*param_1 + 0x88))();
  fStack_30c = -*(float *)(iVar15 + 0x10);
  fStack_308 = -*(float *)(iVar15 + 0x14);
  piStack_334 = (int *)param_1[0x13a];
  fStack_304 = -*(float *)(iVar15 + 0x18);
  fVar27 = (float10)FUN_0041ce10();
  param_1[0x13a] = (int)(float)((float10)(float)piStack_334 - fVar27);
  (**(code **)(*param_1 + 0x88))();
  FUN_00407260();
  fStack_2c4 = 0.0;
  fStack_2c0 = 0.0;
  fStack_2bc = 0.0;
  FUN_00545c38();
  fStack_2c4 = 1.0;
  fStack_2c0 = 0.0;
  fStack_2bc = 0.0;
  FUN_005488cc(auStack_21c,&fStack_2c4);
  FUN_0051a500();
  FUN_0041d670();
  FUN_00407300();
  piStack_334 = param_1 + 0x118;
  afStack_2e8[0] = (float)(-0x450 - (int)param_1);
  fStack_2b8 = 0.0;
  piVar22 = param_1 + 0x114;
  do {
    if ((*(char *)(*piVar22 + 4) != '\0') && (*(int *)(*piVar22 + 0x1ac) == 0)) {
      if (piVar22[0x1c] < 1) {
        uStack_320 = *piVar22;
        fVar27 = (float10)FUN_0041ce10();
        *(float *)(uStack_320 + 0x2dc) = (float)(fVar27 + (float10)*(float *)(uStack_320 + 0x2dc));
        if (_DAT_00587de8 < *(float *)(*piVar22 + 0x2dc)) {
          *(undefined4 *)(*piVar22 + 0x220) = 0xffffffff;
        }
        FUN_004ff070();
        (**(code **)(*(int *)*piVar22 + 0x88))();
        FUN_00407260();
        FUN_00547ab0();
        fStack_29c = fStack_2d0;
        iVar15 = *piVar22;
        fStack_2a4 = (float)uStack_2d8;
        fStack_2a0 = uStack_2d8._4_4_;
        uStack_2d8 = (double)CONCAT44(uStack_2d8._4_4_ + *(float *)(iVar15 + 0x2ec),
                                      (float)uStack_2d8 + *(float *)(iVar15 + 0x2e8));
        fStack_2d0 = fStack_2d0 + *(float *)(iVar15 + 0x2f0);
        fVar34 = *(float *)(iVar15 + 0x2ec) - _DAT_00587fa8;
        *(undefined4 *)(iVar15 + 0x2e8) = *(undefined4 *)(iVar15 + 0x2e8);
        *(undefined4 *)(iVar15 + 0x2f0) = *(undefined4 *)(iVar15 + 0x2f0);
        *(float *)(iVar15 + 0x2ec) = fVar34;
        pbVar33 = abStack_27c;
        FUN_004ffac0();
        fVar27 = (float10)FUN_0043f960();
        pfVar17 = &fStack_2a4;
        puVar32 = &uStack_2d8;
        uVar31 = CONCAT44(pbVar33,(float)(fVar27 * (float10)_DAT_00583340));
        FUN_0041c940(puVar32,pfVar17,(float)(fVar27 * (float10)_DAT_00583340));
        FUN_0041f800(puVar32,pfVar17,uVar31);
        if ((iStack_278 != 0) && (iStack_274 - iStack_278 >> 5 != 0)) {
          iVar15 = *piVar22;
          *(float *)(iVar15 + 0x2e8) = *(float *)(iVar15 + 0x2e8) * _DAT_00587c40;
          *(float *)(iVar15 + 0x2ec) = *(float *)(iVar15 + 0x2ec) * _DAT_00587c40;
          *(float *)(iVar15 + 0x2f0) = *(float *)(iVar15 + 0x2f0) * _DAT_00587c40;
          *(float *)(*piVar22 + 0x2ec) = -*(float *)(*piVar22 + 0x2ec);
        }
        uStack_320 = iStack_278 + 0xc;
        for (fStack_340 = 0.0;
            (iStack_278 != 0 && ((uint)fStack_340 < (uint)(iStack_274 - iStack_278 >> 5)));
            fStack_340 = (float)((int)fStack_340 + 1)) {
          pfVar17 = (float *)FUN_0041d5b0(auStack_16c,uStack_320);
          uStack_2d8 = (double)CONCAT44(uStack_2d8._4_4_ + pfVar17[1],(float)uStack_2d8 + *pfVar17);
          fStack_2d0 = fStack_2d0 + pfVar17[2];
          uStack_320 = uStack_320 + 0x20;
        }
        FUN_00545c38();
        FUN_00545c38();
        (**(code **)(*(int *)*piVar22 + 0x8c))();
        FUN_00407300();
        FUN_00532a60();
        goto LAB_0051fda1;
      }
      iVar15 = *(int *)*piVar22;
      FUN_004305c0();
      (**(code **)(iVar15 + 0x8c))();
      (**(code **)(*(int *)*piVar22 + 0x88))(&piStack_334);
      FUN_00547ab0();
      uVar16 = (**(code **)(*param_1 + 0x88))();
      FUN_005488cc(&fStack_2c8,fStack_338,uVar16);
      fStack_344 = ((float)uStack_330 * fStack_30c +
                   uStack_330._4_4_ * fStack_308 + (float)piStack_334 * uStack_310) -
                   (fStack_2c4 * fStack_30c + fStack_2c0 * fStack_308 + fStack_2c8 * uStack_310);
      if (fStack_344 < _DAT_00582ad8) {
        fStack_344 = 0.0;
      }
      if ((float)param_1[0x171] < fStack_344) {
        fStack_344 = (float)param_1[0x171];
      }
      uVar16 = FUN_0041d5b0(auStack_158,&uStack_310,fStack_344);
      ppiVar20 = (int **)FUN_0041d550(auStack_17c,&fStack_2c8,uVar16);
      if (ppiVar20 != &piStack_334) {
        piStack_334 = *ppiVar20;
        uStack_330 = *(double *)(ppiVar20 + 1);
      }
      uVar16 = (**(code **)(*(int *)*piVar22 + 0x88))();
      FUN_00407260(uVar16);
      fVar34 = fStack_2bc;
      if ((int)fStack_2bc < 2) {
        uStack_2b4 = 0;
        uStack_2b0 = 0;
        uStack_2ac = 0;
        FUN_00545c38(&uStack_2b4);
        afStack_2e8[0] = 0.0;
        afStack_2e8[1] = 0.0;
        afStack_2e8[2] = 1.0;
        FUN_005488cc((int)&uStack_300 + 4,afStack_2e8,auStack_214);
        puVar21 = (undefined4 *)FUN_005488cc(auStack_164,(int)&uStack_300 + 4,auStack_1bc);
        if (puVar21 != (undefined4 *)((int)&uStack_300 + 4)) {
          uStack_300 = (double)CONCAT44(*puVar21,(float)uStack_300);
          fStack_2f8 = (float)puVar21[1];
          fStack_2f4 = (float)puVar21[2];
        }
        if (fStack_2f8 < _DAT_00582ad8) {
          fVar27 = (float10)_CIacos();
          fVar27 = (float10)_DAT_00591a50 - fVar27;
        }
        else {
          fVar27 = (float10)_CIacos();
        }
        fStack_324 = (float)fVar27;
        uVar16 = (**(code **)(*param_1 + 0x88))();
        uVar16 = FUN_00547224(auStack_4c,-fStack_324,uVar16);
        uVar16 = FUN_0041d7a0(auStack_cc,uVar16);
        FUN_0041d670(uVar16);
        FUN_00407300();
        FUN_00407300();
      }
      switch(fVar34) {
      case 0.0:
      case 2.8026e-45:
        pfVar17 = (float *)FUN_0041d5b0(auStack_1c8,auStack_220,param_1[0x177]);
        piStack_334 = (int *)((float)piStack_334 - *pfVar17);
        uStack_330._4_4_ = uStack_330._4_4_ - pfVar17[2];
        uStack_330._0_4_ = (float)uStack_330 - pfVar17[1];
        break;
      case 1.4013e-45:
      case 4.2039e-45:
        pfVar17 = (float *)FUN_0041d5b0(&fStack_29c,auStack_220,param_1[0x177]);
        piStack_334 = (int *)((float)piStack_334 + *pfVar17);
        uStack_330._4_4_ = uStack_330._4_4_ + pfVar17[2];
        uStack_330._0_4_ = (float)uStack_330 + pfVar17[1];
        break;
      default:
        goto LAB_0051fd05;
      }
LAB_0051fd05:
      FUN_00545c38(&piStack_334);
      (**(code **)(*(int *)*piVar22 + 0x8c))(auStack_214);
      if ((fVar34 == 4.2039e-45) || (fVar34 == 1.4013e-45)) {
        iVar15 = *(int *)*piVar22;
        (**(code **)(iVar15 + 0x88))();
        uVar16 = FUN_00546f8c(&uStack_148,0x40490fdb);
        FUN_0041d7a0(auStack_88,uVar16);
        (**(code **)(iVar15 + 0x8c))();
        FUN_00407300();
        FUN_00407300();
      }
      FUN_00407300();
    }
LAB_0051fda1:
    fStack_2b8 = (float)((int)fStack_2b8 + 1);
    piVar22 = piVar22 + 1;
    piStack_334 = piStack_334 + 3;
  } while ((int)fStack_2b8 < 4);
  uStack_320 = uStack_320 & 0xffffff00;
  if (((char)param_1[0x148] != '\0') && (param_1[0x164] == 0)) {
    iVar15 = 0;
    FUN_0041cab0();
    uVar31 = FUN_0051a410();
    if ((int)uVar31 == *(int *)((int)((ulonglong)uVar31 >> 0x20) + 0x9c)) {
      piVar22 = (int *)param_1[0x17f];
      if (piVar22 != (int *)param_1[0x180]) {
        do {
          if (*(int *)(*piVar22 + 0x2d8) == 5) {
            iVar15 = *piVar22;
            goto LAB_0051fe34;
          }
          piVar22 = piVar22 + 1;
        } while (piVar22 != (int *)param_1[0x180]);
      }
      iVar15 = 0;
    }
LAB_0051fe34:
    FUN_0041cab0();
    uVar31 = FUN_0051a3c0();
    if ((int)uVar31 == *(int *)((int)((ulonglong)uVar31 >> 0x20) + 0x9c)) {
      piVar22 = (int *)param_1[0x17f];
      if (piVar22 != (int *)param_1[0x180]) {
        do {
          if (*(int *)(*piVar22 + 0x2d8) == 4) {
            iVar15 = *piVar22;
            goto LAB_0051fe7d;
          }
          piVar22 = piVar22 + 1;
        } while (piVar22 != (int *)param_1[0x180]);
      }
      iVar15 = 0;
    }
LAB_0051fe7d:
    pfVar17 = (float *)FUN_004e4730();
    if ((SQRT(pfVar17[1] * pfVar17[1] + pfVar17[2] * pfVar17[2] + *pfVar17 * *pfVar17) <
         _DAT_00583354) && (iVar15 != 0)) {
      piStack_334 = (int *)(iVar15 + 0x348);
      cVar12 = FUN_0051a210();
      if (cVar12 == '\0') {
        iVar23 = FUN_0041cab0();
        (**(code **)(**(int **)(iVar23 + 0x9c) + 0xdc))();
        *(undefined1 *)(param_1 + 0x148) = 0;
        FUN_0051a270(param_2,iVar15);
        FUN_00407300();
        return 0;
      }
      if (*(float *)(iVar15 + 0x3c4) == _DAT_00582ad8) {
        *(undefined1 *)(iVar15 + 0x3d4) = 0;
        *(undefined1 *)(iVar15 + 0x3cb) = 0;
        FUN_0051a790(param_2,iVar15);
      }
    }
  }
  if (param_1[0x163] == 0) {
    *(undefined1 *)(*(int *)param_1[0xa6] + 0x79) = 1;
    afStack_2e8[0] = (float)FUN_0041cf50();
    cVar12 = FUN_0040e910();
    bVar26 = false;
    cVar13 = FUN_0040e910();
    fVar4 = _DAT_00583354;
    iVar15 = param_1[0xa6];
    fVar34 = (float)uStack_300 * (float)_DAT_00591b20 + (float)_DAT_00587c38;
    fVar3 = _DAT_00582ad8;
    if (*(char *)(*(int *)(iVar15 + 4) + 0x7b) != '\0') {
      fVar3 = _DAT_0058a2f4;
    }
    if (*(char *)(*(int *)(iVar15 + 8) + 0x7b) != '\0') {
      fVar3 = fVar3 + (float)_DAT_0058aa60;
    }
    if (*(char *)(*(int *)(iVar15 + 0xc) + 0x7b) != '\0') {
      fVar3 = fVar3 + (float)_DAT_0058aa60;
    }
    if (*(char *)(*(int *)(iVar15 + 0x10) + 0x7b) != '\0') {
      fVar3 = fVar3 + (float)_DAT_0058aa60;
    }
    *(undefined1 *)(*(int *)(iVar15 + 4) + 0x7b) = 0;
    *(undefined1 *)(*(int *)(param_1[0xa6] + 8) + 0x7b) = 0;
    fVar7 = (float)_DAT_00588818;
    *(undefined1 *)(*(int *)(param_1[0xa6] + 0xc) + 0x7b) = 0;
    fVar3 = (fVar4 - fVar3) * fVar7 + (float)_DAT_00588810;
    *(undefined1 *)(*(int *)(param_1[0xa6] + 0x10) + 0x7b) = 0;
    cVar5 = *(char *)((int)param_1 + 0x4e3);
    uStack_300 = (double)CONCAT44(uStack_300._4_4_,fVar3);
    if (cVar5 == '\0') {
      cVar12 = '\0';
    }
    if (param_1[0x164] == 0) {
      if ((((cVar12 == '\0') || (cVar5 == '\0')) || ((char)param_1[0x148] != '\0')) ||
         (*(char *)((int)param_1 + 0x4e2) == '\0')) {
        if (((cVar13 != '\0') && (cVar5 != '\0')) &&
           (((char)param_1[0x148] == '\0' && (*(char *)((int)param_1 + 0x4e2) != '\0')))) {
          fVar34 = -(float)param_1[0x16e] * fVar3 * fVar34 * (float)_DAT_00587c38;
          goto LAB_005200c5;
        }
      }
      else {
        fVar34 = fVar3 * (float)param_1[0x16e] * fVar34;
LAB_005200c5:
        param_1[0x100] = (int)fVar34;
        bVar26 = true;
      }
      if (cVar12 == '\0') goto LAB_005200d4;
    }
    else {
      cVar13 = '\0';
LAB_005200d4:
      if (_DAT_00582ad8 < (float)param_1[0x100]) {
        param_1[0x100] = 0;
      }
    }
    if ((cVar13 == '\0') && ((float)param_1[0x100] < _DAT_00582ad8)) {
      param_1[0x100] = 0;
    }
    piStack_334 = param_1 + 0x114;
    fStack_340 = 0.0;
    do {
      piVar22 = (int *)*piStack_334;
      if (((piVar22[0x6b] == 0) && ((char)piVar22[1] != '\0')) &&
         (*(char *)(*(int *)(param_1[0xa6] + 4 + (int)fStack_340 * 4) + 0x7a) != '\0')) {
        (**(code **)(*piVar22 + 0x88))();
        FUN_00407260();
        FUN_00547ab0();
        afStack_2e8[1] = 0.0;
        afStack_2e8[2] = 0.0;
        afStack_2e8[3] = 0.0;
        fStack_308 = fStack_308 -
                     *(float *)(*(int *)(*(int *)(param_1[0xa6] + 4 + (int)fStack_340 * 4) + 0xc) +
                               4) * _DAT_00588808;
        FUN_00545c38();
        uStack_2b0 = 0x3f800000;
        uStack_2ac = 0;
        uStack_2a8 = 0;
        FUN_005488cc(&fStack_2a4,&uStack_2b0);
        bVar6 = false;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  (abStack_27c,"skid");
        FUN_0041cae0();
        fVar27 = (float10)FUN_0042dc70();
        fVar34 = (float)fVar27;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_27c);
        iVar15 = FUN_0041cb40();
        if (0x32 < *(int *)(iVar15 + 0x104)) {
          fVar34 = fVar34 * (float)_DAT_0058ac20;
        }
        fVar3 = (float)param_1[0xff];
        fVar4 = (float)param_1[0x16c];
        fVar7 = (float)_DAT_00582af0;
        if (_DAT_00587fa8 < (float)param_1[0x137]) {
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (abStack_298,"skid1");
          uStack_330 = (double)ABS(fStack_2a0 * fStack_318 +
                                   fStack_29c * fStack_314 + fStack_2a4 * fStack_31c);
          uStack_300 = (double)((fVar7 - ABS(fVar3) / fVar4) * fVar34);
          FUN_0041cae0();
          fVar27 = (float10)FUN_0042dc70();
          if (((float10)uStack_300 -
               fVar27 * (float10)(float)param_1[0x137] * (float10)_DAT_00591b08 <
               (float10)uStack_330) || (bVar10 = false, (char)param_1[0x139] != '\0')) {
            bVar10 = true;
          }
          bVar6 = false;
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_298)
          ;
          if (bVar10) {
            bVar6 = true;
          }
        }
        if (((bVar26) && (ABS((float)param_1[0x137]) < (float)_DAT_00588d60)) &&
           ((ABS((float)param_1[0x137]) < ABS((float)param_1[0x100]) &&
            (_DAT_0058a79c <= (float)param_1[0x16e])))) {
          bVar6 = true;
        }
        dVar2 = _DAT_00582af0;
        if ((char)param_1[0x139] != '\0') {
          dVar2 = _DAT_00587db8;
        }
        uStack_300 = (double)CONCAT44(uStack_300._4_4_,(float)dVar2);
        iVar15 = FUN_0041cb40();
        if (*(int *)(iVar15 + 0x104) < 0x33) {
          *(float *)(*(int *)(param_1[0xa6] + 4 + (int)fStack_340 * 4) + 0x74) =
               (float)param_1[0x176] * (float)uStack_300 * (float)_DAT_00588818;
        }
        else {
          *(float *)(*(int *)(param_1[0xa6] + 4 + (int)fStack_340 * 4) + 0x74) =
               (float)param_1[0x176] * (float)uStack_300 * (float)_DAT_00588830;
        }
        if (bVar6) {
          uStack_320 = CONCAT31(uStack_320._1_3_,1);
          *(float *)(*(int *)(param_1[0xa6] + 4 + (int)fStack_340 * 4) + 0x74) =
               (float)param_1[0x176] * (float)uStack_300 * (float)_DAT_0058ade8;
          if (*(char *)((int)param_1 + 0x531) == '\0') {
            FUN_0041cae0();
            uVar16 = FUN_0042dbb0();
            FUN_00412e58(uVar16,"wheel_SkidOn");
            fStack_2b8 = (float)FUN_0044ab40(param_1);
            uStack_2b4 = 0;
            FUN_00412cfc(uVar16,(double)(uint)fStack_2b8);
            FUN_00412cfc(uVar16,(double)(int)fStack_340);
            FUN_00412cfc(uVar16,(double)fStack_30c);
            FUN_00412cfc(uVar16,(double)fStack_308);
            FUN_00412cfc(uVar16,(double)fStack_304);
            FUN_00412798(uVar16,5,0);
          }
          FUN_0041cae0();
          uVar16 = FUN_0042dbb0();
          FUN_00412e58(uVar16,"wheel_Skid");
          fStack_2f8 = (float)FUN_0044ab40(param_1);
          fStack_2f4 = 0.0;
          dVar2 = (double)(ulonglong)(uint)fStack_2f8;
LAB_00520527:
          FUN_00412cfc(uVar16,(double)(longlong)dVar2);
          FUN_00412cfc(uVar16,(double)(int)fStack_340);
          FUN_00412cfc(uVar16,(double)fStack_30c);
          FUN_00412cfc(uVar16,(double)fStack_308);
          FUN_00412cfc(uVar16,(double)fStack_304);
          FUN_00412798(uVar16,5,0);
        }
        else if (*(char *)((int)param_1 + 0x531) != '\0') {
          FUN_0041cae0();
          uVar16 = FUN_0042dbb0();
          FUN_00412e58(uVar16,"wheel_SkidOff");
          uVar19 = FUN_0044ab40(param_1);
          uStack_2d8 = (double)(ulonglong)uVar19;
          dVar2 = uStack_2d8;
          goto LAB_00520527;
        }
        FUN_00407300();
      }
      fStack_340 = (float)((int)fStack_340 + 1);
      piStack_334 = piStack_334 + 1;
    } while ((int)fStack_340 < 2);
    cVar12 = FUN_0040e910();
    if ((cVar12 == '\0') && ((char)param_1[0x148] == '\0')) {
      *(undefined1 *)(param_1 + 0x139) = 0;
    }
    else {
      if (!bVar26) {
        param_1[0x103] = param_1[0x16d];
        param_1[0x102] = param_1[0x16d];
        param_1[0x100] = 0;
        param_1[0x101] = 0;
      }
      *(undefined1 *)(param_1 + 0x139) = 1;
    }
    FUN_0051c5b0(param_2,2);
    uVar11 = FUN_0040e910();
    uVar14 = FUN_0040e910();
    uStack_33c._0_3_ = (uint3)CONCAT11(uVar14,uVar11) << 8;
    if ((*(char *)((int)param_1 + 0x4e2) == '\0') || (param_1[0x164] != 0)) {
      uStack_33c._0_3_ = 0;
    }
    uStack_330 = (double)(float)param_1[0x155];
    fVar27 = (float10)FUN_0041ce10();
    fVar28 = (float10)uStack_330 - fVar27 * (float10)_DAT_00587c38;
    fVar27 = (float10)_DAT_00583354;
    param_1[0x155] = (int)(float)fVar28;
    if (fVar28 <= fVar27) {
      if (fVar28 < (float10)_DAT_00582ad8) {
        param_1[0x155] = 0;
      }
    }
    else {
      param_1[0x155] = 0x3f800000;
    }
    fVar28 = (float10)FUN_0041ce10();
    fVar27 = (float10)_DAT_00591ad0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_27c,"steer");
    FUN_0041cae0();
    fVar29 = (float10)FUN_0042dc70();
    fStack_340 = (float)(fVar29 * (float10)(float)(fVar28 * fVar27));
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_27c);
    uVar8 = (uint3)uStack_33c;
    if ((float)param_1[0x155] <= _DAT_00582ad8) {
LAB_0052073a:
      uStack_33c = (uint)uVar8;
      uVar19 = uStack_33c;
      uStack_33c._1_1_ = (char)(uVar8 >> 8);
      bVar26 = uStack_33c._1_1_ != '\0';
      uStack_33c = uVar19;
      if (bVar26) goto LAB_005207db;
      uStack_33c._2_1_ = (char)(uVar8 >> 0x10);
      bVar26 = uStack_33c._2_1_ == '\0';
      if (bVar26) {
        if ((_DAT_00582ad8 < (float)param_1[0xff]) &&
           (fVar34 = (float)param_1[0xff], param_1[0xff] = (int)(fVar34 - fStack_340),
           fVar34 - fStack_340 < _DAT_00582ad8)) {
          param_1[0xff] = 0;
        }
        if (((float)param_1[0xff] < _DAT_00582ad8) &&
           (fVar34 = (float)param_1[0xff], param_1[0xff] = (int)(fStack_340 + fVar34),
           _DAT_00582ad8 < fStack_340 + fVar34)) {
          param_1[0xff] = 0;
        }
        FUN_0051a8a0(param_2,param_1[0xff]);
        goto LAB_00520cee;
      }
LAB_005207e3:
      FUN_0051a910(param_2,fStack_340);
    }
    else {
      fStack_340 = fStack_340 * (float)param_1[0x155] * _DAT_0058a65c;
      fVar27 = (float10)fsin((float10)(float)param_1[0x155] * (float10)_DAT_00591ac4);
      if ((float10)_DAT_00582ae8 < fVar27) {
        uStack_33c._0_3_ = CONCAT12(1,(undefined2)(uint3)uStack_33c);
        uVar8 = (uint3)uStack_33c;
        goto LAB_0052073a;
      }
      uVar8 = (uint3)uStack_33c >> 0x10;
      uStack_33c = CONCAT22((ushort)(byte)uVar8,0x100);
LAB_005207db:
      if (uStack_33c._2_1_ != '\0') goto LAB_005207e3;
    }
    if (uStack_33c._1_1_ != '\0') {
      FUN_0051a910(param_2,-fStack_340);
    }
  }
  else {
    iVar15 = FUN_0041cab0();
    piVar22 = *(int **)(iVar15 + 0x9c);
    if (piVar22 != (int *)0x0) {
      (**(code **)(*param_1 + 0x88))();
      uVar16 = FUN_00547ab0();
      (**(code **)(*piVar22 + 0x88))(auStack_1c4,uVar16);
      uVar16 = FUN_00547ab0();
      FUN_0041d580(&fStack_31c,uVar16);
      if (_DAT_00591ac0 <=
          fStack_318 * fStack_318 + fStack_314 * fStack_314 + fStack_31c * fStack_31c) {
        *(undefined1 *)(*(int *)param_1[0xa6] + 0x79) = 0;
      }
      else {
        *(undefined1 *)(*(int *)param_1[0xa6] + 0x79) = 1;
      }
    }
    *(undefined1 *)(param_1 + 0x139) = 0;
    if (param_1[0x163] == 2) {
      pfVar17 = (float *)FUN_004e4730();
      fStack_314 = pfVar17[2];
      fStack_31c = *pfVar17;
      fStack_2b8 = fStack_314 * fStack_314;
      piStack_334 = (int *)(fStack_31c * fStack_31c);
      fVar34 = SQRT(pfVar17[1] * pfVar17[1] + (float)piStack_334 + fStack_2b8);
      uStack_300 = (double)CONCAT44(uStack_300._4_4_,fVar34 / (float)param_1[0x16e]);
      if (_DAT_00588878 <= fVar34) {
        fVar3 = _DAT_00588884;
        if (_DAT_0058ac2c < fVar34) {
          fVar3 = _DAT_00588c00;
        }
        fStack_340 = _DAT_00583354 - (fVar34 / (float)param_1[0x16e]) * fVar3;
        if (fStack_340 < _DAT_00582ad8) {
          fStack_340 = 0.0;
        }
      }
      else {
        fStack_340 = 1.0;
      }
      uVar16 = FUN_0041d550(abStack_298,param_1 + 0x121,param_1 + 0x11e,0x40000000);
      FUN_0043fa40(&uStack_330,uVar16);
      fStack_328 = fStack_328 + (float)param_1[0x154];
      uVar16 = (**(code **)(*param_1 + 0x88))();
      pdVar24 = (double *)FUN_00548704(abStack_298,uVar16);
      if (pdVar24 != (double *)&uStack_330) {
        uStack_330 = *pdVar24;
        fStack_328 = *(float *)(pdVar24 + 1);
      }
      FUN_0041d580(&fStack_2f8,param_1 + 0x178,&uStack_330);
      fStack_318 = 0.0;
      fStack_2f4 = 0.0;
      fVar34 = SQRT(fStack_2f8 * fStack_2f8 + fStack_2f0 * fStack_2f0 + _DAT_00582ad8);
      param_1[0x10b] = (int)fVar34;
      if ((fVar34 <= _DAT_00582ad8) ||
         (SQRT((float)piStack_334 + fStack_2b8) <= (float)_DAT_00587db8)) goto LAB_00520cd5;
      FUN_0041d4b0();
      FUN_0041d4b0();
      pfVar17 = (float *)(param_1 + 0x17b);
      fVar34 = (float)uStack_330 * *pfVar17 +
               uStack_330._4_4_ * (float)param_1[0x17c] + fStack_328 * (float)param_1[0x17d];
      fVar4 = *pfVar17 * (float)param_1[0x178] +
              (float)param_1[0x179] * (float)param_1[0x17c] +
              (float)param_1[0x17a] * (float)param_1[0x17d];
      fVar3 = (float)param_1[0x134] * *pfVar17 +
              (float)param_1[0x135] * (float)param_1[0x17c] +
              (float)param_1[0x136] * (float)param_1[0x17d];
      if (&fStack_2f8 != pfVar17) {
        *pfVar17 = fStack_2f8;
        param_1[0x17c] = (int)fStack_2f4;
        param_1[0x17d] = (int)fStack_2f0;
      }
      if ((fVar3 < fVar4 != (fVar3 == fVar4)) && (fVar4 <= fVar34)) {
        *(undefined1 *)((int)param_1 + 0x4e6) = 1;
      }
      if ((fVar4 <= fVar3) && (fVar34 < fVar4 != (fVar34 == fVar4))) {
        *(undefined1 *)((int)param_1 + 0x4e6) = 1;
      }
      (**(code **)(*param_1 + 0x88))();
      FUN_00407260();
      afStack_2e8[1] = 0.0;
      afStack_2e8[2] = 0.0;
      afStack_2e8[3] = 0.0;
      FUN_00545c38();
      afStack_2e8[1] = 0.0;
      afStack_2e8[2] = 0.0;
      afStack_2e8[3] = -1.0;
      FUN_00548704(&fStack_30c,auStack_260,afStack_2e8 + 1);
      fStack_308 = 0.0;
      FUN_0041d4b0();
      afStack_2e8[0] = fStack_30c * fStack_2f8 + fStack_308 * fStack_2f4 + fStack_304 * fStack_2f0;
      uStack_2d8 = (double)afStack_2e8[0];
      if ((float)_DAT_00591ab8 <= afStack_2e8[0]) {
        fVar34 = 0.0;
LAB_00520cbf:
        FUN_0051a8a0(param_2,fVar34);
        FUN_00407300();
      }
      else {
        FUN_0041d5e0(afStack_2e8 + 1,&fStack_2f8,&fStack_31c);
        if (_DAT_00582ad8 < afStack_2e8[0]) {
          if (_DAT_00582ad8 <= afStack_2e8[2]) {
            fVar27 = (float10)_CIacos();
            fVar34 = (float)-(fVar27 * (float10)fStack_340);
          }
          else {
            fVar27 = (float10)_CIacos();
            fVar34 = (float)(fVar27 * (float10)fStack_340);
          }
          goto LAB_00520cbf;
        }
        if (_DAT_00582ad8 <= afStack_2e8[2]) {
          FUN_0051a8a0(param_2,-(fStack_340 * (float)param_1[0x16c]) * (float)_DAT_00587c38);
          FUN_00407300();
        }
        else {
          FUN_0051a8a0(param_2,fStack_340 * (float)param_1[0x16c] * (float)_DAT_00587c38);
          FUN_00407300();
        }
      }
    }
    else {
LAB_00520cd5:
      FUN_0051a8a0(param_2,0);
    }
    FUN_0051c5b0(param_2,param_1[0x163]);
  }
LAB_00520cee:
  FUN_0051a9e0(param_2,uStack_320);
  if (*(char *)((int)param_1 + 0x531) == '\0') {
    fVar29 = (float10)FUN_0041ce10();
    fVar28 = (float10)_DAT_00587fa8;
    fVar30 = (float10)(float)param_1[0x14d] - fVar29 * fVar28;
    fVar27 = (float10)_DAT_00582ad8;
    param_1[0x14d] = (int)(float)fVar30;
    if ((fVar30 < fVar27 != (fVar30 == fVar27)) &&
       ((float10)_DAT_00582ad8 < fVar29 * fVar28 + fVar30)) {
      FUN_0051a0d0(param_2,"CarSkid",0);
    }
    if (_DAT_00582ad8 < (float)param_1[0x14d]) {
      iVar15 = param_1[0x14d];
      goto LAB_00520dde;
    }
  }
  else {
    (**(code **)(*param_1 + 0x90))();
    FUN_00547ab0();
    FUN_0051a710(param_2,"CarSkid",afStack_2e8 + 1,0);
    fVar27 = (float10)FUN_0041ce10();
    fVar27 = fVar27 * (float10)_DAT_00588884 + (float10)(float)param_1[0x14d];
    param_1[0x14d] = (int)(float)fVar27;
    if ((float10)_DAT_00583354 < fVar27) {
      param_1[0x14d] = 0x3f800000;
    }
    iVar15 = param_1[0x14d];
LAB_00520dde:
    FUN_0051a1a0(param_2,"CarSkid",iVar15);
  }
  FUN_004d51d0();
  pfVar17 = (float *)(param_1 + 0x108);
  FUN_0041d580(&fStack_2c4,&fStack_31c,pfVar17);
  if (&fStack_31c != pfVar17) {
    *pfVar17 = fStack_31c;
    param_1[0x109] = (int)fStack_318;
    param_1[0x10a] = (int)fStack_314;
  }
  uStack_300 = (double)CONCAT44(uStack_300._4_4_,param_1[0x8d]);
  afStack_2e8[0] = (float)FUN_0041cf60();
  iVar9 = (uint3)*(byte *)(param_1 + 0x139) << 8;
  if (*(byte *)(param_1 + 0x139) == 0) {
    if (((_DAT_00582ad8 < (float)param_1[0x101]) &&
        ((float)param_1[0x100] < (float)param_1[0x101] - _DAT_00587de8)) ||
       (((float)param_1[0x101] < _DAT_00582ad8 &&
        ((float)param_1[0x101] + _DAT_00587de8 < (float)param_1[0x100])))) {
      iVar9 = 0x100;
    }
    if (param_1[0x163] == 0) {
      FUN_0041cf50();
      cVar12 = FUN_0040e910();
      if (cVar12 == '\0') {
        iVar9 = 0;
      }
    }
  }
  FUN_0041cb80();
  uVar11 = FUN_004cf110();
  fVar34 = afStack_2e8[0];
  uStack_33c = CONCAT13(uVar11,iVar9) & 0x1ffffff;
  iVar15 = param_1[0x87];
  if (*(char *)(param_1[0x114] + 4) != '\0') {
    *(int *)(param_1[0x114] + 0x21c) = iVar15;
  }
  if (*(char *)(param_1[0x115] + 4) != '\0') {
    *(int *)(param_1[0x115] + 0x21c) = iVar15;
  }
  if (*(char *)(param_1[0x116] + 4) != '\0') {
    *(int *)(param_1[0x116] + 0x21c) = iVar15;
  }
  if (*(char *)(param_1[0x117] + 4) != '\0') {
    *(int *)(param_1[0x117] + 0x21c) = iVar15;
  }
  piVar22 = (int *)param_1[0x17f];
  if (piVar22 != (int *)param_1[0x180]) {
    do {
      *(int *)(*piVar22 + 0x21c) = iVar15;
      *(int *)(*piVar22 + 0x2e0) = param_1[0x137];
      if (((char)param_1[0x14e] == '\0') && (param_1[0x14f] == 0)) {
        *(undefined1 *)(*piVar22 + 0x3cf) = *(undefined1 *)((int)param_1 + 0x4e1);
      }
      else {
        *(undefined1 *)(*piVar22 + 0x3cf) = uStack_33c._3_1_;
      }
      *(undefined1 *)(*piVar22 + 0x3d3) = *(undefined1 *)((int)param_1 + 0x4e5);
      *(undefined1 *)(*piVar22 + 0x3d0) = *(undefined1 *)((int)param_1 + 0x4e3);
      *(float *)(*piVar22 + 0x234) = (float)uStack_300;
      if (uStack_33c._1_1_ != '\0') {
        *(undefined4 *)(*piVar22 + 0x3a4) = 0x3f000000;
      }
      if ((float)param_1[0xff] <= _DAT_005b9004 * _DAT_0058ffb8) {
        *(undefined1 *)(*piVar22 + 0x3a9) = 0;
      }
      else {
        *(undefined1 *)(*piVar22 + 0x3a9) = 1;
      }
      if (_DAT_005b9004 * _DAT_0058ffb8 <= (float)param_1[0xff]) {
        *(undefined1 *)(*piVar22 + 0x3a8) = 0;
      }
      else {
        *(undefined1 *)(*piVar22 + 0x3a8) = 1;
      }
      iVar23 = *piVar22;
      if (&fStack_2c4 != (float *)(iVar23 + 0x3ac)) {
        *(float *)(iVar23 + 0x3ac) = fStack_2c4;
        *(float *)(iVar23 + 0x3b0) = fStack_2c0;
        *(float *)(iVar23 + 0x3b4) = fStack_2bc;
      }
      FUN_004ffb90();
      FUN_004ffba0();
      if ((-1 < param_1[0x9b]) && (fVar34 != 0.0)) {
        FUN_00439120(param_1[0x9b],0,*piVar22);
      }
      piVar22 = piVar22 + 1;
    } while (piVar22 != (int *)param_1[0x180]);
  }
  if ((char)param_1[0x138] != '\0') {
    FUN_0051e400();
  }
  *(undefined1 *)(*(int *)(param_1[0xa6] + 4) + 0x7a) = 0;
  *(undefined1 *)(*(int *)(param_1[0xa6] + 8) + 0x7a) = 0;
  *(undefined1 *)(*(int *)(param_1[0xa6] + 0xc) + 0x7a) = 0;
  *(undefined1 *)(*(int *)(param_1[0xa6] + 0x10) + 0x7a) = 0;
  FUN_00407300();
LAB_0052111a:
  return (uint)uStack_310 >> 0x18;
}




/* Function: FUN_00521c00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00521c00(int *param_1,undefined4 param_2,undefined4 param_3)

{
  void **ppvVar1;
  bool bVar2;
  void *pvVar3;
  uint3 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar11;
  uint uVar12;
  int *piVar13;
  float *pfVar14;
  undefined4 uVar15;
  uint unaff_EBX;
  int iVar16;
  uint uVar17;
  float10 fVar18;
  undefined4 unaff_retaddr;
  float fVar19;
  char *pcVar21;
  ulonglong uVar20;
  char cVar23;
  ushort uVar22;
  undefined1 uVar24;
  undefined4 uStack_138;
  int local_134;
  int iStack_130;
  undefined4 local_12c;
  int iStack_128;
  uint uStack_124;
  int *local_120;
  void *local_11c;
  float fStack_118;
  float fStack_114;
  int *piStack_110;
  float fStack_10c;
  float local_108 [7];
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_e0 [24];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_c8 [4];
  undefined1 local_c4 [24];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_ac [4];
  undefined1 local_a8 [24];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_90 [4];
  undefined1 local_8c [24];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_74 [4];
  undefined1 local_70 [24];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_58 [4];
  undefined1 local_54 [24];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_3c [4];
  undefined1 local_38 [40];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar4 = (uint3)uStack_138;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f85d;
  pvStack_c = ExceptionList;
  local_120 = (int *)0x0;
  ExceptionList = &pvStack_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_e0,"fuel");
  local_4 = 0;
  puVar5 = (undefined4 *)FUN_00457170();
  *puVar5 = 0x3f800000;
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_e0);
  pbVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            (param_1 + 0xf8);
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x101] = 0;
  param_1[0x106] = 0x3e490fdb;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar11,"Sounds\\car\\med.wav");
  *(undefined1 *)((int)param_1 + 0x2a5) = 1;
  FUN_0043f930();
  FUN_0043f940();
  FUN_0043f930();
  FUN_0043f940();
  FUN_0043f930();
  FUN_0043f940();
  uVar6 = FUN_0043f920();
  FUN_00411994(local_54,uVar6);
  local_4 = 1;
  uVar6 = FUN_0043f920();
  FUN_00411994(local_38,uVar6);
  local_4._0_1_ = 2;
  uVar6 = FUN_0043f920();
  FUN_00411994(local_70,uVar6);
  local_4._0_1_ = 3;
  uVar6 = FUN_0043f920();
  FUN_00411994(local_a8,uVar6);
  local_4._0_1_ = 4;
  uVar6 = FUN_0043f920();
  FUN_00411994(local_c4,uVar6);
  local_4._0_1_ = 5;
  uVar6 = FUN_0043f920();
  FUN_00411994(local_8c,uVar6);
  param_1[0x173] = 0x3f800000;
  param_1[0x16b] = 0x3f800000;
  local_4 = CONCAT31(local_4._1_3_,6);
  uStack_138 = (uint)(uint3)uStack_138;
  param_1[0x16d] = 0x41a00000;
  param_1[0x16e] = 0x42340000;
  param_1[0x172] = 0x3f000000;
  param_1[0x16c] = 0x3f333333;
  param_1[0x170] = 0x41a00000;
  param_1[0x171] = 0x41f00000;
  param_1[0x174] = 0x43fa0000;
  FUN_004ffac0();
  fVar18 = (float10)FUN_0043f960();
  param_1[0x175] = (int)(float)fVar18;
  param_1[0x176] = 0x442f0000;
  FUN_004ffac0();
  fVar18 = (float10)FUN_0043f960();
  param_1[0x175] = (int)(float)(fVar18 - (float10)_DAT_00588860);
  pcVar21 = "models\\pikap";
  pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar7);
  iVar9 = _stricmp(pcVar8,pcVar21);
  if (iVar9 == 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (pbVar11,"Sounds\\car\\diesel.wav");
    param_1[0x16d] = 0x41a00000;
    param_1[0x170] = 0x41a00000;
    param_1[0x16e] = 0x42340000;
    param_1[0x173] = 0x3f800000;
    param_1[0x172] = 0x3f000000;
    param_1[0x16b] = 0x3f800000;
    param_1[0x16c] = 0x3f333333;
    param_1[0x171] = 0x41f00000;
    param_1[0x174] = 0x43fa0000;
    FUN_004ffac0();
    fVar18 = (float10)FUN_0043f960();
    param_1[0x175] = (int)(float)fVar18;
  }
  pcVar21 = "models\\furgon";
  pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar7);
  iVar9 = _stricmp(pcVar8,pcVar21);
  if (iVar9 != 0) {
    pcVar21 = "models\\furgon1";
    pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0043f920();
    pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(pbVar7);
    iVar9 = _stricmp(pcVar8,pcVar21);
    if (iVar9 != 0) goto LAB_00521fc9;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar11,"Sounds\\car\\diesel.wav");
  param_1[0x173] = 0x3f800000;
  param_1[0x16b] = 0x3f800000;
  param_1[0x16d] = 0x41a00000;
  param_1[0x16e] = 0x420c0000;
  param_1[0x172] = 0x3f000000;
  param_1[0x16c] = 0x3f333333;
  param_1[0x170] = 0x41a00000;
  param_1[0x171] = 0x41f00000;
  param_1[0x174] = 0x43fa0000;
  FUN_004ffac0();
  fVar18 = (float10)FUN_0043f960();
  param_1[0x175] = (int)(float)fVar18;
LAB_00521fc9:
  pcVar21 = "models\\universal";
  pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar7);
  iVar9 = _stricmp(pcVar8,pcVar21);
  if (iVar9 == 0) {
    param_1[0x16d] = 0x41a00000;
    param_1[0x16e] = 0x41a00000;
    param_1[0x172] = 0x3f333333;
    param_1[0x173] = 0x3f800000;
    param_1[0x16b] = 0x3f800000;
    param_1[0x16c] = 0x3f333333;
    param_1[0x170] = 0x41700000;
    param_1[0x171] = 0x41f00000;
    param_1[0x174] = 0x43fa0000;
  }
  pcVar21 = "models\\bus";
  pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar7);
  iVar9 = _stricmp(pcVar8,pcVar21);
  if (iVar9 == 0) {
    param_1[0x16d] = 0x42200000;
    param_1[0x16e] = 0x41f00000;
    param_1[0x173] = 0x3f800000;
    param_1[0x172] = 0x40400000;
    param_1[0x16b] = 0x3f800000;
    param_1[0x16c] = 0x3f333333;
    param_1[0x170] = 0x41700000;
    param_1[0x171] = 0x41f00000;
    param_1[0x174] = 0x44bb8000;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (pbVar11,"Sounds\\car\\diesel.wav");
    FUN_004ffac0();
    fVar18 = (float10)FUN_0043f960();
    param_1[0x175] = (int)(float)fVar18;
  }
  pcVar21 = "models\\jeep";
  pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar7);
  iVar9 = _stricmp(pcVar8,pcVar21);
  if (iVar9 == 0) {
    param_1[0x16d] = 0x41700000;
    param_1[0x16e] = 0x41200000;
    param_1[0x173] = 0x3f800000;
    param_1[0x172] = 0x3f800000;
    param_1[0x16b] = 0x3f800000;
    param_1[0x16c] = 0x3f333333;
    param_1[0x170] = 0x41700000;
    param_1[0x171] = 0x41f00000;
    param_1[0x174] = 0x43fa0000;
  }
  pcVar21 = "models\\taxi";
  pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar7);
  iVar9 = _stricmp(pcVar8,pcVar21);
  if (iVar9 == 0) {
    param_1[0x16d] = 0x41a00000;
    param_1[0x170] = 0x41a00000;
    param_1[0x16e] = 0x41f00000;
    param_1[0x173] = 0x3f800000;
    param_1[0x172] = 0x3f000000;
    param_1[0x16b] = 0x3f800000;
    param_1[0x16c] = 0x3f333333;
    param_1[0x171] = 0x41f00000;
    param_1[0x174] = 0x43fa0000;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (pbVar11,"Sounds\\car\\low.wav");
  }
  pcVar21 = "models\\tcar1";
  pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar7);
  iVar9 = _stricmp(pcVar8,pcVar21);
  if (iVar9 == 0) {
    param_1[0x16d] = 0x41a00000;
    param_1[0x16e] = 0x42200000;
    param_1[0x173] = 0x3f800000;
    param_1[0x172] = 0x3f000000;
    param_1[0x16b] = 0x3f800000;
    param_1[0x16c] = 0x3f333333;
    param_1[0x170] = 0x41a00000;
    param_1[0x171] = 0x41f00000;
    param_1[0x174] = 0x43fa0000;
  }
  pcVar21 = "models\\police";
  pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar7);
  iVar9 = _stricmp(pcVar8,pcVar21);
  if (iVar9 == 0) {
    param_1[0x16d] = 0x41a00000;
    param_1[0x170] = 0x41a00000;
    param_1[0x16e] = 0x42340000;
    param_1[0x173] = 0x3f800000;
    param_1[0x172] = 0x3f000000;
    param_1[0x16b] = 0x3f800000;
    param_1[0x16c] = 0x3f333333;
    param_1[0x171] = 0x41f00000;
    param_1[0x174] = 0x43fa0000;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (pbVar11,"Sounds\\car\\low.wav");
  }
  pcVar21 = "models\\concept2";
  pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar7);
  iVar9 = _stricmp(pcVar8,pcVar21);
  if (iVar9 == 0) {
    param_1[0x16d] = 0x41f00000;
    param_1[0x16e] = 0x42480000;
    param_1[0x173] = 0x3f800000;
    param_1[0x172] = 0x3f000000;
    param_1[0x16b] = 0x3f800000;
    param_1[0x16c] = 0x3f333333;
    param_1[0x170] = 0x41200000;
    param_1[0x171] = 0x41a00000;
    param_1[0x174] = 0x43fa0000;
  }
  pcVar21 = "models\\concept";
  pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar7);
  iVar9 = _stricmp(pcVar8,pcVar21);
  if (iVar9 == 0) {
    param_1[0x16d] = 0x41f00000;
    param_1[0x16e] = 0x42700000;
    param_1[0x173] = 0x3f800000;
    param_1[0x172] = 0x42480000;
    param_1[0x16b] = 0x3f800000;
    param_1[0x16c] = 0x3f333333;
    param_1[0x170] = 0x41a00000;
    param_1[0x171] = 0x41f00000;
    param_1[0x174] = 0x43fa0000;
  }
  pcVar21 = "models\\concept3";
  pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar7);
  iVar9 = _stricmp(pcVar8,pcVar21);
  if (iVar9 == 0) {
    param_1[0x16d] = 0x41f00000;
    param_1[0x16e] = 0x42700000;
    param_1[0x173] = 0x3f800000;
    param_1[0x172] = 0x3ecccccd;
    param_1[0x16b] = 0x3f800000;
    param_1[0x16c] = 0x3f333333;
    param_1[0x170] = 0x40a00000;
    param_1[0x171] = 0x41a00000;
    param_1[0x174] = 0x43fa0000;
  }
  pcVar21 = "models\\concept4";
  pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar7);
  iVar9 = _stricmp(pcVar8,pcVar21);
  if (iVar9 == 0) {
    param_1[0x16d] = 0x41f00000;
    param_1[0x16e] = 0x42700000;
    param_1[0x173] = 0x3f800000;
    param_1[0x172] = 0x3f000000;
    param_1[0x16b] = 0x3f800000;
    param_1[0x16c] = 0x3f333333;
    param_1[0x170] = 0;
    param_1[0x171] = 0x41f00000;
    param_1[0x174] = 0x43fa0000;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (pbVar11,"Sounds\\car\\sport.wav");
  }
  pcVar21 = "models\\concept5";
  pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar7);
  iVar9 = _stricmp(pcVar8,pcVar21);
  if (iVar9 == 0) {
    param_1[0x16d] = 0x41f00000;
    param_1[0x16e] = 0x42700000;
    param_1[0x173] = 0x3f800000;
    param_1[0x172] = 0x3f000000;
    param_1[0x16b] = 0x3f800000;
    param_1[0x16c] = 0x3f333333;
    param_1[0x170] = 0;
    param_1[0x171] = 0x41f00000;
    param_1[0x174] = 0x43fa0000;
  }
  pcVar21 = "models\\concept6";
  pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar7);
  iVar9 = _stricmp(pcVar8,pcVar21);
  if (iVar9 == 0) {
    param_1[0x16d] = 0x41f00000;
    param_1[0x16e] = 0x42700000;
    param_1[0x173] = 0x3f800000;
    param_1[0x172] = 0x3f000000;
    param_1[0x16b] = 0x3f800000;
    param_1[0x16c] = 0x3f333333;
    param_1[0x170] = 0;
    param_1[0x171] = 0x41f00000;
    param_1[0x174] = 0x43fa0000;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (pbVar11,"Sounds\\car\\sport.wav");
  }
  pcVar21 = "models\\concept7";
  pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar7);
  iVar9 = _stricmp(pcVar8,pcVar21);
  if (iVar9 == 0) {
    param_1[0x16d] = 0x41f00000;
    param_1[0x16e] = 0x42700000;
    param_1[0x173] = 0x3f800000;
    param_1[0x172] = 0x3f000000;
    param_1[0x16b] = 0x3f800000;
    param_1[0x16c] = 0x3f333333;
    param_1[0x170] = 0;
    param_1[0x171] = 0x41f00000;
    param_1[0x174] = 0x43fa0000;
    uStack_138 = CONCAT13(1,uVar4);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (pbVar11,"Sounds\\car\\sport.wav");
  }
  pcVar21 = "models\\concept8";
  pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0043f920();
  pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (pbVar7);
  iVar9 = _stricmp(pcVar8,pcVar21);
  if (iVar9 == 0) {
    param_1[0x16d] = 0x41f00000;
    param_1[0x16e] = 0x42700000;
    param_1[0x173] = 0x3f800000;
    param_1[0x172] = 0x3f000000;
    param_1[0x16b] = 0x3f800000;
    param_1[0x16c] = 0x3f333333;
    param_1[0x170] = 0;
    param_1[0x171] = 0x41f00000;
    param_1[0x174] = 0x43fa0000;
    uStack_138 = CONCAT13(1,(uint3)uStack_138);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (pbVar11,"Sounds\\car\\sport.wav");
  }
  FUN_004ffac0();
  fVar18 = (float10)FUN_0043f960();
  local_108[0] = 1.0;
  param_1[0x174] = (int)(float)(fVar18 + fVar18);
  FUN_0041cae0();
  iVar9 = FUN_0042dbb0();
  if (iVar9 != 0) {
    FUN_00412e58(iVar9,"CarSettings");
    pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0043f920();
    pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(pbVar7);
    FUN_00412d30(iVar9,pcVar8);
    FUN_00412cfc(iVar9,(double)(float)param_1[0x16d]);
    FUN_00412cfc(iVar9,(double)(float)param_1[0x16e]);
    FUN_00412cfc(iVar9,(double)(float)param_1[0x173]);
    FUN_00412cfc(iVar9,(double)(float)param_1[0x172]);
    FUN_00412cfc(iVar9,(double)(float)param_1[0x16b]);
    FUN_00412cfc(iVar9,(double)(float)param_1[0x16c]);
    FUN_00412cfc(iVar9,(double)(float)param_1[0x170]);
    FUN_00412cfc(iVar9,(double)(float)param_1[0x171]);
    FUN_00412cfc(iVar9,0,0x3ff00000);
    FUN_00412cfc(iVar9,(double)(float)param_1[0x176]);
    FUN_00412cfc(iVar9,(double)(float)param_1[0x177]);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
              (pbVar11);
    FUN_00412d30(iVar9);
    iVar10 = FUN_00412798(iVar9,0xd,0xc);
    if (iVar10 == 0) {
      fVar18 = (float10)FUN_00412c00(iVar9);
      param_1[0x16d] = (int)(float)fVar18;
      fVar18 = (float10)FUN_00412c00(iVar9,0xfffffff5);
      param_1[0x16e] = (int)(float)fVar18;
      fVar18 = (float10)FUN_00412c00(iVar9,0xfffffff6);
      param_1[0x173] = (int)(float)fVar18;
      fVar18 = (float10)FUN_00412c00(iVar9,0xfffffff7);
      param_1[0x172] = (int)(float)fVar18;
      fVar18 = (float10)FUN_00412c00(iVar9,0xfffffff8);
      param_1[0x16b] = (int)(float)fVar18;
      fVar18 = (float10)FUN_00412c00(iVar9,0xfffffff9);
      param_1[0x16c] = (int)(float)fVar18;
      fVar18 = (float10)FUN_00412c00(iVar9,0xfffffffa);
      param_1[0x170] = (int)(float)fVar18;
      fVar18 = (float10)FUN_00412c00(iVar9,0xfffffffb);
      param_1[0x171] = (int)(float)fVar18;
      fVar18 = (float10)FUN_00412c00(iVar9);
      local_108[0] = (float)fVar18;
      fVar18 = (float10)FUN_00412c00(iVar9,0xfffffffd);
      param_1[0x176] = (int)(float)fVar18;
      fVar18 = (float10)FUN_00412c00(iVar9,0xfffffffe);
      param_1[0x177] = (int)(float)fVar18;
      pcVar8 = (char *)FUN_00412c34(iVar9,0xffffffff);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                (pbVar11,pcVar8);
      FUN_00412950(iVar9);
    }
  }
  param_1[0x16f] = param_1[0x16e];
  local_11c = operator_new(0xdc,(nothrow_t *)&DAT_005b6164);
  local_4._0_1_ = 7;
  if (local_11c == (void *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar6 = FUN_0043f920();
    pbVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              FUN_00411994(local_e0,uVar6);
    uVar20 = (ulonglong)(uint)param_1[0x172];
    local_4 = CONCAT31(local_4._1_3_,8);
    local_120 = (int *)0x1;
    uVar6 = (**(code **)(*param_1 + 0x88))(param_1[0x172]);
    pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(pbVar11);
    uVar12 = FUN_00432dc0(param_3,pcVar8,uVar6,uVar20);
  }
  local_4 = 6;
  local_12c = uVar12;
  if (((uint)local_120 & 1) != 0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_e0);
  }
  *(undefined4 *)(uVar12 + 0x74) = 0;
  *(undefined1 *)(uVar12 + 0x79) = 0;
  *(int **)(uVar12 + 0x14) = param_1;
  *(undefined1 *)(uVar12 + 8) = 1;
  FUN_004225c0();
  iVar9 = *param_1;
  FUN_004305c0();
  (**(code **)(iVar9 + 0x8c))();
  local_120 = (int *)FUN_00429280(abStack_58,param_3,0,1,0);
  uStack_124 = 0;
  iVar9 = FUN_0043f900();
  if (iVar9 != 0) {
    local_134 = 0;
    do {
      iVar10 = 0;
      pcVar8 = "PHYS_WHEEL_FR_LINK";
      iStack_130 = 4;
      bVar2 = false;
      iVar16 = 0;
      iStack_128 = 0;
      cVar23 = (char)(unaff_EBX >> 0x18);
      unaff_EBX = CONCAT13(cVar23,0x100);
      local_12c = local_12c & 0xffff;
      iVar9 = FUN_0043f910();
      iVar9 = _stricmp((char *)(iVar9 + local_134),pcVar8);
      if (iVar9 == 0) {
        iStack_130 = 3;
      }
      else {
        pcVar8 = "PHYS_WHEEL_FL_LINK";
        iVar9 = FUN_0043f910();
        iVar9 = _stricmp((char *)(iVar9 + local_134),pcVar8);
        if (iVar9 == 0) {
          iStack_130 = 2;
        }
        else {
          pcVar8 = "PHYS_WHEEL_BL_LINK";
          iVar9 = FUN_0043f910();
          iVar9 = _stricmp((char *)(iVar9 + local_134),pcVar8);
          if (iVar9 == 0) {
            iStack_130 = 0;
          }
          else {
            pcVar8 = "PHYS_WHEEL_BR_LINK";
            iVar9 = FUN_0043f910();
            iVar9 = _stricmp((char *)(iVar9 + local_134),pcVar8);
            if (iVar9 == 0) {
              iStack_130 = 1;
            }
          }
        }
      }
      pcVar8 = "hood";
      iVar9 = FUN_0043f910();
      iVar9 = _stricmp((char *)(iVar9 + local_134),pcVar8);
      if (iVar9 == 0) {
        bVar2 = true;
        iVar10 = FUN_00429280(abStack_ac,param_2,0,1,0);
        iStack_128 = 0x3f860a92;
        iVar16 = 2;
        if (cVar23 != '\0') {
          iStack_128 = -0x4079f56e;
          unaff_EBX = unaff_EBX & 0xffff0000;
        }
      }
      pcVar8 = "frontlights";
      iVar9 = FUN_0043f910();
      iVar9 = _stricmp((char *)(iVar9 + local_134),pcVar8);
      if (iVar9 == 0) {
        bVar2 = true;
        iVar10 = FUN_00429280(abStack_c8,param_2,0,1,0);
        iStack_128 = 0x3ebba866;
        iVar16 = 2;
        local_12c._0_3_ = CONCAT12(1,(undefined2)local_12c);
      }
      pcVar8 = "boot";
      iVar9 = FUN_0043f910();
      iVar9 = _stricmp((char *)(iVar9 + local_134),pcVar8);
      if (iVar9 == 0) {
        bVar2 = true;
        iVar10 = FUN_00429280(abStack_90,param_2,0,1,0);
        uVar12 = unaff_EBX >> 0x18;
        iStack_128 = -0x4079f56e;
        uVar22 = (ushort)(unaff_EBX >> 0x10);
        unaff_EBX = (uint)uVar22 << 0x10;
        iVar16 = 3;
        if ((char)uVar12 != '\0') {
          iStack_128 = 0x3f860a92;
          unaff_EBX = CONCAT22(uVar22,0x100);
        }
      }
      pcVar8 = "doorright";
      iVar9 = FUN_0043f910();
      iVar9 = _stricmp((char *)(iVar9 + local_134),pcVar8);
      if (iVar9 == 0) {
        bVar2 = true;
        iVar10 = FUN_00429280(abStack_74,param_2,0,1,0);
        pcVar21 = "models\\concept8";
        iStack_128 = -0x4079f56e;
        uVar24 = (undefined1)(unaff_EBX >> 0x18);
        unaff_EBX = CONCAT13(uVar24,0x10100);
        iVar16 = 5;
        pbVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_0043f920();
        pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                 c_str(pbVar11);
        iVar9 = _stricmp(pcVar8,pcVar21);
        if (iVar9 == 0) {
          unaff_EBX = CONCAT13(uVar24,0x100);
          iStack_128 = -0x4079f56e;
        }
      }
      pcVar8 = "doorleft";
      iVar9 = FUN_0043f910();
      iVar9 = _stricmp((char *)(iVar9 + local_134),pcVar8);
      if (iVar9 == 0) {
        iVar10 = FUN_00429280(abStack_3c,param_2,0,1,0);
        pcVar21 = "models\\concept8";
        iStack_128 = 0x3f860a92;
        local_12c = CONCAT13(1,(undefined3)local_12c);
        uVar24 = (undefined1)(unaff_EBX >> 0x18);
        unaff_EBX = CONCAT13(uVar24,0x10100);
        iVar16 = 4;
        pbVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  FUN_0043f920();
        pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                 c_str(pbVar11);
        iVar9 = _stricmp(pcVar8,pcVar21);
        if (iVar9 == 0) {
          unaff_EBX = CONCAT13(uVar24,0x100);
          iStack_128 = -0x4079f56e;
        }
LAB_00522d33:
        if (iVar10 != 0) {
          iVar9 = FUN_0043f910();
          local_108[6] = *(float *)(iVar9 + 0x40 + local_134);
          iVar9 = iVar9 + 0x40 + local_134;
          uStack_ec = *(undefined4 *)(iVar9 + 4);
          uStack_e8 = *(undefined4 *)(iVar9 + 8);
          piStack_110 = operator_new(0x3e0,(nothrow_t *)&DAT_005b6164);
          puStack_8._0_1_ = 10;
          if (piStack_110 == (int *)0x0) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13 = (int *)FUN_005212e0();
          }
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
          piVar13[0x9a] = 0x40a00000;
          piStack_110 = piVar13;
          FUN_004ff6f0(1);
          FUN_004ffb80(0);
          FUN_004ffb10(iVar10);
          FUN_004ffa80(0);
          FUN_00501a80(0);
          local_108[3] = 1.0;
          local_108[4] = 1.0;
          local_108[5] = 1.0;
          uVar6 = (**(code **)(*param_1 + 0x88))();
          uVar6 = FUN_005489a8(uVar6);
          FUN_00501ee0(local_108 + 6,local_108 + 3,uVar6);
          FUN_00504330(param_1);
          *(undefined1 *)((int)piVar13 + 0x2a5) = 0;
          *(undefined1 *)((int)piVar13 + 0x2a6) = 0;
          *(char *)(piVar13 + 0xf2) = (char)(unaff_EBX >> 8);
          piVar13[0xee] = 0;
          piVar13[0xef] = iStack_128;
          *(char *)((int)piVar13 + 0x3cd) = (char)(unaff_EBX >> 0x10);
          *(undefined1 *)((int)piVar13 + 0x3ce) = local_12c._3_1_;
          *(char *)((int)piVar13 + 0x3d2) = local_12c._2_1_;
          if (local_12c._2_1_ != '\0') {
            *(undefined1 *)(piVar13 + 0xf3) = 0;
            *(undefined1 *)((int)piVar13 + 0x3c9) = 0;
            *(undefined1 *)((int)piVar13 + 0x3cb) = 0;
            *(undefined1 *)(piVar13 + 0xf5) = 0;
          }
          pcVar21 = "models\\bus";
          pbVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    FUN_0043f920();
          pcVar8 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   ::c_str(pbVar11);
          iVar9 = _stricmp(pcVar8,pcVar21);
          if (iVar9 == 0) {
            *(undefined1 *)((int)piVar13 + 0x3d1) = 1;
          }
          piVar13[0xb6] = iVar16;
          FUN_00423250(piVar13,param_2,1);
          (**(code **)(*piVar13 + 0x1c))(unaff_retaddr,param_2);
          (**(code **)(*piVar13 + 0xa4))();
          FUN_0051e0c0(&piStack_110);
        }
      }
      else if (bVar2) goto LAB_00522d33;
      iVar9 = iStack_130;
      if (iStack_130 != 4) {
        iVar10 = FUN_0043f910();
        local_11c = *(void **)(iVar10 + 0x40 + local_134);
        iVar10 = iVar10 + 0x40 + local_134;
        fStack_118 = *(float *)(iVar10 + 4);
        fStack_114 = *(float *)(iVar10 + 8);
        ppvVar1 = (void **)(param_1 + iVar9 * 3 + 0x124);
        if (&local_11c != ppvVar1) {
          *ppvVar1 = local_11c;
          param_1[iVar9 * 3 + 0x125] = (int)fStack_118;
          param_1[iVar9 * 3 + 0x126] = (int)fStack_114;
        }
        switch(iVar9) {
        case 0:
        case 2:
          local_11c = (void *)((float)local_11c + (float)param_1[0x177]);
          pfVar14 = (float *)FUN_0043f940();
          pvVar3 = (void *)(*pfVar14 + _DAT_0058ac2c);
          break;
        case 1:
        case 3:
          local_11c = (void *)((float)local_11c - (float)param_1[0x177]);
          pfVar14 = (float *)FUN_0043f930();
          pvVar3 = (void *)(*pfVar14 - _DAT_0058ac2c);
          break;
        default:
          goto LAB_00522fa7;
        }
        *ppvVar1 = pvVar3;
LAB_00522fa7:
        if (&local_11c != (void **)(param_1 + iVar9 * 3 + 0x118)) {
          param_1[iVar9 * 3 + 0x118] = (int)local_11c;
          param_1[iVar9 * 3 + 0x119] = (int)fStack_118;
          param_1[iVar9 * 3 + 0x11a] = (int)fStack_114;
        }
        fStack_118 = fStack_118 - (float)param_1[0x170];
        uVar6 = (**(code **)(*param_1 + 0x88))();
        FUN_00548748(uVar6);
        piStack_110 = operator_new(0x3e0,(nothrow_t *)&DAT_005b6164);
        puStack_8._0_1_ = 0xb;
        if (piStack_110 == (int *)0x0) {
          piVar13 = (int *)0x0;
        }
        else {
          piVar13 = (int *)FUN_005212e0();
        }
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
        piVar13[0x9a] = 0x40a00000;
        piStack_110 = piVar13;
        FUN_004ff6f0(1);
        FUN_004ffb80(0);
        FUN_004ffb10(local_120);
        FUN_004ffa80(0);
        FUN_00501a80(0);
        local_108[0] = 1.0;
        local_108[1] = 1.0;
        local_108[2] = 1.0;
        uVar6 = (**(code **)(*param_1 + 0x88))();
        uVar6 = FUN_005489a8(uVar6);
        FUN_00501ee0(&local_11c,local_108,uVar6);
        uStack_138 = uStack_138 - 1;
        param_1[iStack_130 + 0x114] = (int)piVar13;
        FUN_00423250(piVar13,param_2,1);
        (**(code **)(*piVar13 + 0x1c))(unaff_retaddr,param_2);
        FUN_0051e0c0(&piStack_110);
      }
      uVar17 = uStack_124 + 1;
      local_134 = local_134 + 0x4c;
      uStack_124 = uVar17;
      uVar12 = FUN_0043f900();
    } while (uVar17 < uVar12);
  }
  FUN_0042a4f0(unaff_retaddr);
  param_1[0xb6] = 1;
  local_120 = param_1;
  FUN_0051e0c0(&local_120);
  piVar13 = (int *)param_1[0x17f];
  *(undefined1 *)(param_1 + 0x13e) = 0;
  if (piVar13 != (int *)param_1[0x180]) {
    do {
      iVar9 = *(int *)(*piVar13 + 900);
      if ((iVar9 != 0) &&
         (local_120 = (int *)((*(int *)(*piVar13 + 0x388) - iVar9) / 0x18), local_120 != (int *)0x0)
         ) {
        *(undefined1 *)(param_1 + 0x13e) = 1;
        break;
      }
      piVar13 = piVar13 + 1;
    } while (piVar13 != (int *)param_1[0x180]);
  }
  if (uStack_138 == 0) {
    piVar13 = param_1 + 0x114;
    uStack_124 = 0;
    do {
      uVar12 = uStack_124;
      local_120 = operator_new(0xdc,(nothrow_t *)&DAT_005b6164);
      puStack_8._0_1_ = 0xc;
      if (local_120 == (int *)0x0) {
        iStack_130 = 0;
      }
      else {
        fVar19 = fStack_10c;
        uVar6 = (**(code **)(*(int *)*piVar13 + 0x88))(fStack_10c,4);
        uVar15 = FUN_004ffac0(uVar6);
        iStack_130 = FUN_00433320(param_2,uVar15,uVar6,fVar19);
      }
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
      *(undefined1 *)(iStack_130 + 8) = 0;
      if ((int)uVar12 < 2) {
        *(int *)(iStack_130 + 0x74) = param_1[0x176];
      }
      else {
        *(int *)(iStack_130 + 0x74) = param_1[0x176];
      }
      iVar9 = param_1[0xa6];
      if ((iVar9 == 0) || ((uint)(param_1[0xa8] - iVar9 >> 2) <= (uint)(param_1[0xa7] - iVar9 >> 2))
         ) {
        FUN_00420dc0(param_1[0xa7],1,&iStack_130);
      }
      else {
        iVar9 = param_1[0xa7];
        FUN_004520c0(iVar9,1,&iStack_130,param_1 + 0xa5,local_120);
        param_1[0xa7] = iVar9 + 4;
        uVar12 = uStack_124;
      }
      uStack_124 = uVar12 + 1;
      piVar13 = piVar13 + 1;
    } while ((int)uStack_124 < 4);
    piVar13 = param_1 + 0x110;
    fStack_10c = 5.60519e-45;
    do {
      uVar6 = FUN_004fb920(0);
      iVar9 = FUN_004e45fc(uVar6);
      *piVar13 = iVar9;
      FUN_004e3cc0(iVar9,*(undefined4 *)(*(int *)param_1[0xa6] + 0xbc),
                   *(undefined4 *)
                    (*(int *)(param_1[0xa6] + (int)piVar13 + -(int)param_1 + -0x43c) + 0xbc));
      puVar5 = (undefined4 *)
               FUN_004e4748(*(undefined4 *)
                             (*(int *)((int)piVar13 + param_1[0xa6] + -(int)param_1 + -0x43c) + 0xbc
                             ));
      FUN_004eb48c(*piVar13,*puVar5,puVar5[1],puVar5[2]);
      FUN_004eaa6c(*piVar13,3,param_1[0x16d]);
      FUN_004eb298(*piVar13,0,0xbf800000,0);
      FUN_004eaacc(*piVar13,0x3f800000,0,0);
      FUN_004eaa6c(*piVar13,9,(float)param_1[0x173] * (float)_DAT_0058aa60);
      FUN_004eaa6c(*piVar13,10,(float)_DAT_00591d48 / (float)param_1[0x173]);
      piVar13[0x20] = 10;
      piVar13 = piVar13 + 1;
      fStack_10c = (float)((int)fStack_10c + -1);
    } while (fStack_10c != 0.0);
    piVar13 = param_1 + 0x110;
    iVar9 = 2;
    fStack_10c = 0.0;
    do {
      if (*piVar13 != 0) {
        FUN_004eaa6c(*piVar13,0,0);
        FUN_004eaa6c(*piVar13,1,0);
        FUN_004eaa6c(*piVar13,2,0x60ad78ec);
      }
      piVar13 = piVar13 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    param_1[0xff] = 0;
    piVar13 = param_1 + 0x112;
    iVar9 = 2;
    do {
      if (*piVar13 != 0) {
        FUN_004eaa6c(*piVar13,0,param_1[0xff]);
        FUN_004eaa6c(*piVar13,1,param_1[0xff]);
      }
      piVar13 = piVar13 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    (**(code **)(*param_1 + 0x88))(local_108);
    piVar13 = (int *)FUN_00547ab0();
    if (piVar13 != param_1 + 0x157) {
      param_1[0x157] = *piVar13;
      param_1[0x158] = piVar13[1];
      param_1[0x159] = piVar13[2];
    }
    (**(code **)(*param_1 + 0x94))("Driver_outpt",param_1 + 0x142,1);
    piVar13 = (int *)param_1[0x17f];
    if (piVar13 != (int *)param_1[0x180]) {
      do {
        if (*(int *)(*piVar13 + 0x2d8) == 4) {
          if (*piVar13 != 0) {
            uVar6 = FUN_004ffa70();
            FUN_004ffac0(uVar6);
            uVar6 = FUN_0043f940();
            FUN_005488cc(&fStack_114,uVar6);
            param_1[0x144] = (int)(fStack_10c + _DAT_00591d40);
            param_1[0x142] = (int)(fStack_114 + _DAT_0058a79c);
          }
          break;
        }
        piVar13 = piVar13 + 1;
      } while (piVar13 != (int *)param_1[0x180]);
    }
    (**(code **)(*param_1 + 0x94))("Passenger_outpt",param_1 + 0x145,1);
    piVar13 = (int *)param_1[0x17f];
    if (piVar13 != (int *)param_1[0x180]) {
      do {
        if (*(int *)(*piVar13 + 0x2d8) == 5) {
          if (*piVar13 != 0) {
            uVar6 = FUN_004ffa70();
            FUN_004ffac0(uVar6);
            uVar6 = FUN_0043f940();
            FUN_005488cc(local_108,uVar6);
            param_1[0x147] = (int)(local_108[2] + _DAT_0058ac2c);
            param_1[0x145] = (int)(local_108[0] - _DAT_00588808);
          }
          break;
        }
        piVar13 = piVar13 + 1;
      } while (piVar13 != (int *)param_1[0x180]);
    }
    FUN_004ff6f0(1);
    puStack_8._0_1_ = 5;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_90);
    puStack_8._0_1_ = 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_c8);
    puStack_8._0_1_ = 3;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_ac);
    puStack_8._0_1_ = 2;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_74);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_3c);
    puStack_8 = (undefined1 *)0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_58);
    uVar6 = 1;
  }
  else {
    uVar6 = FUN_0041e5b0(
                        "WARNING: some helpers could not be located, not enough helpers to build full car"
                        );
    FUN_0040a410(uVar6);
    puStack_8._0_1_ = 5;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_90);
    puStack_8._0_1_ = 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_c8);
    puStack_8._0_1_ = 3;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_ac);
    puStack_8._0_1_ = 2;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_74);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_3c);
    puStack_8 = (undefined1 *)0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_58);
    uVar6 = 0;
  }
  ExceptionList = pvStack_10;
  return uVar6;
}




/* Function: FUN_005236c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005236c0(int *param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [16];
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057f879;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"fuel");
  local_4 = 0;
  pfVar3 = (float *)FUN_00457170(local_28);
  bVar1 = *pfVar3 < _DAT_00582ad8;
  bVar2 = *pfVar3 == _DAT_00582ad8;
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  if (bVar1 != bVar2) {
    puVar6 = local_34;
    (**(code **)(*param_1 + 0x90))(puVar6);
    FUN_00547ab0(puVar6);
    FUN_0051a540(param_2,"Sounds\\car\\EngineWillNotStart.wav","channel1",local_34,0,0,0);
    param_1[0x149] = 0x41200000;
    (**(code **)(*param_1 + 0x84))(param_2,"OutOfFuel",0);
    ExceptionList = pvStack_18;
    return;
  }
  puVar6 = local_40;
  *(undefined1 *)((int)param_1 + 0x4e3) = 1;
  param_1[0x149] = 0;
  (**(code **)(*param_1 + 0x90))(puVar6);
  FUN_00547ab0(puVar6);
  FUN_0051a540(param_2,"Sounds\\car\\StartEngine.wav","channel1",local_40,0,0,0);
  iVar8 = param_1[0x10f];
  puVar6 = local_40;
  uVar9 = 0;
  uVar7 = 1;
  pcVar5 = "Engine";
  pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(param_1 + 0xf8));
  FUN_0051a540(param_2,pcVar4,pcVar5,puVar6,uVar7,iVar8,uVar9);
  FUN_0051a130(param_2,"Engine",0x3ecccccd,param_1[0x10f]);
  FUN_0051a1a0(param_2,"Engine",0,param_1[0x10f]);
  ExceptionList = pvStack_c;
  return;
}




/* Function: FUN_00527c80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00527c80(int *param_1,undefined4 param_2,int param_3,char *param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  size_t _MaxCount;
  int iVar6;
  int iVar7;
  bool bVar8;
  float10 fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float *pfVar13;
  float *pfVar14;
  undefined4 uVar15;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  int local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  char local_1a4 [8];
  undefined1 local_19c [56];
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  char local_14c [60];
  char acStack_110 [4];
  char local_10c [60];
  char acStack_d0 [4];
  char local_cc [60];
  char acStack_90 [4];
  char local_8c [64];
  undefined1 local_4c [8];
  char acStack_44 [4];
  char local_40 [64];
  
  if (param_3 == -1) {
    bVar8 = false;
    if (param_4 != (char *)0x0) {
      local_1a4[0] = '\0';
      local_14c[0] = '\0';
      local_cc[0] = '\0';
      local_10c[0] = '\0';
      local_8c[0] = '\0';
      local_40[0] = '\0';
      pcVar5 = param_4;
      do {
        cVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      _MaxCount = (int)pcVar5 - (int)(param_4 + 1);
      if (0xfe < (int)_MaxCount) {
        _MaxCount = 0xfe;
      }
      _snscanf(param_4,_MaxCount,"%s %s %s %s %s %s",local_1a4,local_14c,local_cc,local_10c,local_8c
               ,local_40);
      iVar6 = _stricmp(local_1a4,"Damage");
      if (iVar6 == 0) {
        local_1d8 = atoi(local_8c);
        fVar1 = (float)local_1d8;
        local_1d8 = atoi(local_10c);
        fVar2 = (float)local_1d8;
        local_1d8 = atoi(local_cc);
        iVar6 = *param_1;
        local_1d4 = (float)local_1d8;
        pfVar13 = &local_1d4;
        uVar15 = 0;
        local_1d0 = fVar2;
        local_1cc = fVar1;
        iVar7 = atoi(local_14c);
        (**(code **)(iVar6 + 0xc4))(param_2,iVar7,pfVar13,uVar15);
        return;
      }
      iVar6 = _stricmp(local_1a4,"OutOfCar");
      if (iVar6 == 0) {
        pcVar5 = local_14c;
        *(undefined1 *)((int)param_1 + 0x3de) = 1;
        do {
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar3 != '\0');
        if (pcVar5 != local_14c + 1) {
          iVar6 = atoi(local_14c);
          bVar8 = 0 < iVar6;
        }
        *(bool *)((int)param_1 + 0x3df) = bVar8;
        return;
      }
      iVar6 = _stricmp(local_1a4,"autoappear");
      if (iVar6 == 0) {
        iVar6 = atoi(local_14c);
        param_1[0x88] = iVar6;
        return;
      }
      iVar6 = _stricmp(local_1a4,"checkfelony");
      if (iVar6 == 0) {
        iVar6 = atoi(local_14c);
        *(bool *)(param_1 + 0xee) = iVar6 != 0;
        return;
      }
      iVar6 = _stricmp(local_1a4,"idlewalk");
      if (iVar6 == 0) {
        iVar6 = atoi(local_14c);
        *(bool *)((int)param_1 + 0x3dd) = iVar6 != 0;
        return;
      }
      iVar6 = _stricmp(local_1a4,"target");
      if (iVar6 == 0) {
        dVar10 = atof(local_10c);
        dVar11 = atof(local_cc);
        dVar12 = atof(local_14c);
        local_1d4 = (float)dVar12;
        local_1d0 = (float)dVar11;
        local_1cc = (float)dVar10;
        FUN_0041d430(&local_1d4);
        if (param_1[0xb9] != 0) {
          FUN_0041d430(param_1 + 199);
          return;
        }
      }
      else {
        iVar6 = _stricmp(local_1a4,"move");
        if (iVar6 == 0) {
          FUN_004d5230();
          local_1c8 = 1.4013e-45;
          dVar10 = atof(local_10c);
          dVar11 = atof(local_cc);
          dVar12 = atof(local_14c);
          local_1e4 = (float)dVar12;
          local_1e0 = (float)dVar11;
          local_1dc = (float)dVar10;
          FUN_0041d430(&local_1e4);
          iVar6 = atoi(local_8c);
          local_1b8 = (float)iVar6;
          if (param_1[0xb9] != 0) {
            pcVar5 = local_40;
            do {
              cVar3 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar3 != '\0');
            if (pcVar5 != local_40 + 1) {
              iVar6 = atoi(local_40);
              *(bool *)(param_1 + 0xd5) = 0 < iVar6;
            }
          }
          (**(code **)(*param_1 + 0x44))(param_2,1,&local_1c8);
          return;
        }
        iVar6 = _stricmp(local_1a4,"attackrange");
        if (iVar6 == 0) {
          dVar10 = atof(local_14c);
          param_1[0xde] = (int)(float)dVar10;
          param_1[0xe0] = (int)(float)dVar10;
          return;
        }
        iVar6 = _stricmp(local_1a4,"afraid");
        if (iVar6 == 0) {
          param_1[0xad] = -0x65;
          return;
        }
        iVar6 = _stricmp(local_1a4,"speedscale");
        if (iVar6 == 0) {
          dVar10 = atof(local_14c);
          param_1[0xf4] = (int)(float)dVar10;
          return;
        }
        iVar6 = _stricmp(local_1a4,"movementscale");
        if (iVar6 == 0) {
          dVar10 = atof(local_14c);
          param_1[0xe2] = (int)(float)dVar10;
          return;
        }
        iVar6 = _stricmp(local_1a4,"hate");
        if (iVar6 == 0) {
          param_1[0xad] = -0x14;
          return;
        }
        iVar6 = _stricmp(local_1a4,"neutral");
        if (iVar6 == 0) {
          param_1[0xad] = 0;
          return;
        }
        iVar6 = _stricmp(local_1a4,"enable");
        if (iVar6 == 0) {
          iVar6 = atoi(local_14c);
          if (0 < iVar6) {
            (**(code **)(*param_1 + 0xa0))();
            (**(code **)(*param_1 + 8))(1);
            (**(code **)(*param_1 + 4))(1);
            return;
          }
          (**(code **)(*param_1 + 0xa4))();
          (**(code **)(*param_1 + 8))(0);
          (**(code **)(*param_1 + 4))(0);
          return;
        }
        iVar6 = _stricmp(local_1a4,"AutoOutOfCar");
        if (iVar6 == 0) {
          iVar6 = atoi(local_14c);
          *(bool *)((int)param_1 + 0x3c1) = 0 < iVar6;
          return;
        }
        iVar6 = _stricmp(local_1a4,"courage");
        if (iVar6 == 0) {
          iVar6 = atoi(local_14c);
          param_1[0xe6] = iVar6;
          return;
        }
        iVar6 = _stricmp(local_1a4,"reset");
        if (iVar6 == 0) {
          param_1[0xeb] = 0;
          param_1[0xec] = 0;
          *(undefined1 *)(param_1 + 0xea) = 0;
          if ((param_1[0xd0] != 0) && ((int *)param_1[0xb9] != (int *)0x0)) {
            pfVar13 = &local_1c8;
            (**(code **)(*(int *)param_1[0xb9] + 0x88))(pfVar13);
            FUN_00547ab0(pfVar13);
            local_1e4 = 0.0;
            local_1e0 = 0.0;
            local_1dc = 0.0;
            FUN_0046be70(param_2,&local_1c8,&local_1e4,param_1 + 0xd1);
            param_1[0xd2] = param_1[0xd1];
            return;
          }
        }
        else {
          iVar6 = _stricmp(local_1a4,"spawn");
          if (iVar6 == 0) {
            FUN_004d5230();
            local_1c8 = 9.80909e-45;
            dVar10 = atof(local_10c);
            dVar11 = atof(local_cc);
            dVar12 = atof(local_14c);
            local_1e4 = (float)dVar12;
            local_1e0 = (float)dVar11;
            local_1dc = (float)dVar10;
            FUN_0041d430(&local_1e4);
            iVar6 = atoi(local_8c);
            local_1b8 = (float)iVar6;
            (**(code **)(*param_1 + 0x44))(param_2,1,&local_1c8);
            return;
          }
          iVar6 = _stricmp(local_1a4,"angle0");
          if (iVar6 == 0) {
            iVar6 = atoi(local_14c);
            *(bool *)((int)param_1 + 0x3b9) = iVar6 != 0;
            return;
          }
          iVar6 = _stricmp(local_1a4,"turn");
          if (iVar6 == 0) {
            dVar10 = atof(local_10c);
            dVar11 = atof(local_cc);
            dVar12 = atof(local_14c);
            local_164 = (float)dVar12;
            local_160 = (float)dVar11;
            local_15c = (float)dVar10;
            iVar6 = atoi(local_8c);
            FUN_00526460(&local_164,0 < iVar6);
            return;
          }
          iVar6 = _stricmp(local_1a4,"anim");
          if (iVar6 == 0) {
            *(undefined1 *)(param_1 + 0xcb) = 0;
            iVar6 = _stricmp(local_14c,"idle");
            if (iVar6 == 0) {
              (**(code **)(*param_1 + 0xb8))(0);
              return;
            }
            (**(code **)(*param_1 + 0xb8))(0x13);
            uVar15 = FUN_004456c0(&local_150);
            *(undefined4 *)(param_1[0xac] + 0x58) = uVar15;
            *(undefined4 *)(param_1[0xac] + 0x1d8) = 0;
            uVar15 = FUN_004449b0(*(undefined4 *)(param_1[0xac] + 0x58));
            *(undefined4 *)(param_1[0xac] + 0x118) = uVar15;
            iVar6 = atoi(acStack_d0);
            *(bool *)(param_1[0xac] + 0x10) = 0 < iVar6;
            dVar10 = atof(acStack_110);
            *(float *)(param_1[0xac] + 0x238) = (float)dVar10;
            dVar10 = atof(acStack_90);
            param_1[0xef] = (int)(float)dVar10;
            dVar10 = atof(acStack_44);
            *(float *)(param_1[0xac] + 0x298) = (float)dVar10;
            return;
          }
          iVar6 = _stricmp(local_1a4,"StartEngine");
          if ((iVar6 == 0) && (param_1[0xb9] != 0)) {
            FUN_005236c0(param_2);
          }
        }
      }
    }
  }
  else if (param_3 == 1) {
    switch(*(undefined4 *)param_4) {
    case 1:
      *(undefined1 *)(param_1 + 0xcb) = 1;
      *(undefined1 *)(param_1 + 0xf0) = 0;
      bVar8 = _DAT_00582ad8 < *(float *)(param_4 + 0x10);
      *(bool *)(param_1 + 0xe4) = bVar8;
      *(bool *)((int)param_1 + 0x32d) = bVar8;
      FUN_0046be70(param_2,param_4 + 4,param_1 + 199,param_1 + 0xca);
      if (param_1[0xb9] == 0) {
        FUN_0041d430(param_4 + 4);
        if (*(char *)((int)param_1 + 0x32d) != '\0') {
          (**(code **)(*param_1 + 0xb8))(3);
          return;
        }
        (**(code **)(*param_1 + 0xb8))(1);
        return;
      }
      break;
    case 2:
      fVar1 = *(float *)(param_4 + 0x10);
      param_1[0xb3] = 4;
      *(double *)(param_1 + 0xb0) = (double)fVar1;
      return;
    case 3:
      cVar3 = FUN_00450620();
      if (cVar3 == '\0') {
        *(float *)(param_4 + 0x10) = (float)*(double *)(param_1 + 0xb0);
        uVar15 = FUN_004d51d0(local_4c);
        FUN_0041d430(uVar15);
        fVar9 = (float10)FUN_0041d480();
        *(float *)(param_4 + 0x10) = (float)fVar9;
        return;
      }
      break;
    case 7:
      cVar3 = FUN_00450620();
      if (cVar3 == '\0') {
        FUN_0041d7e0();
        local_1c4 = *(float *)(param_4 + 8) + _DAT_0058ab44;
        local_1ac = *(float *)(param_4 + 8);
        local_1c0 = *(float *)(param_4 + 0xc);
        local_1c8 = *(float *)(param_4 + 4);
        local_154 = *(float *)(param_4 + 8) - _DAT_0058ab44;
        pfVar14 = &local_158;
        pfVar13 = &local_1c8;
        pcVar5 = local_1a4;
        local_1b0 = local_1c8;
        local_1a8 = local_1c0;
        local_158 = local_1c8;
        local_150 = local_1c0;
        FUN_0041c940(pcVar5,pfVar13,pfVar14);
        cVar3 = FUN_0041f720(pcVar5,pfVar13,pfVar14);
        if (cVar3 != '\0') {
          FUN_0041d430(local_19c);
        }
        iVar6 = *(int *)(param_4 + 0x10);
        param_1[0xbe] = iVar6;
        param_1[0xbd] = iVar6;
        local_1e4 = local_1b0 * _DAT_0058334c;
        local_1e0 = (local_1ac + (float)param_1[0xbc]) * _DAT_0058334c;
        local_1dc = local_1a8 * _DAT_0058334c;
        FUN_00525ae0(&local_1e4);
        local_1e4 = 0.0;
        local_1e0 = 0.0;
        local_1dc = 0.0;
        FUN_00525b10(&local_1e4);
        local_1e4 = 0.0;
        local_1e0 = 0.0;
        local_1dc = 0.0;
        FUN_00525ab0(&local_1e4);
        FUN_00431120();
        iVar6 = *param_1;
        uVar15 = FUN_004305c0();
        (**(code **)(iVar6 + 0x8c))(uVar15);
        (**(code **)(*param_1 + 0xc0))(param_2);
      }
      *(undefined1 *)(param_1 + 0xf0) = 0;
      *(undefined1 *)((int)param_1 + 0x3b9) = 0;
      *(undefined1 *)((int)param_1 + 0x371) = 0;
      *(undefined1 *)(param_1 + 0xdc) = 1;
      *(undefined1 *)(param_1 + 0xcb) = 0;
      (**(code **)(*param_1 + 0xb8))(0);
      (**(code **)(*param_1 + 0x84))(param_2,"Spawn",0);
      return;
    case 0x11:
      if (((*(int *)(param_1[0xac] + 0x70) != -1) && (param_1[0xb4] != 0x10)) &&
         (param_1[0xb4] != 0x11)) {
        FUN_00526460(param_4 + 4,1);
        param_1[0xbd] = param_1[0xbe];
        uVar4 = rand();
        uVar4 = uVar4 & 0x80000001;
        bVar8 = uVar4 == 0;
        if ((int)uVar4 < 0) {
          bVar8 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (!bVar8) {
          (**(code **)(*param_1 + 0xb8))(0x10);
          *(undefined1 *)((int)param_1 + 0x2ed) = 0;
          *(undefined1 *)(param_1 + 0xf0) = 0;
          return;
        }
        (**(code **)(*param_1 + 0xb8))(0x11);
        *(undefined1 *)((int)param_1 + 0x2ed) = 0;
        *(undefined1 *)(param_1 + 0xf0) = 0;
        return;
      }
    }
  }
  return;
}





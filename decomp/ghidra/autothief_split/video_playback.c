/* video_playback functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_00406bb0 */

bool FUN_00406bb0(undefined4 param_1)

{
  ATOM AVar1;
  int iVar2;
  HINSTANCE unaff_ESI;
  code **ppcVar3;
  UINT local_12c;
  code *local_128 [3];
  CHAR local_104 [260];
  
  local_12c = 0;
  ppcVar3 = local_128;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppcVar3 = (code *)0x0;
    ppcVar3 = ppcVar3 + 1;
  }
  local_128[0] = FUN_004069c0;
  AVar1 = RegisterClassA((WNDCLASSA *)&local_12c);
  if (AVar1 == 0) {
    return false;
  }
  wsprintfA(local_104,"%s: %s","Cutscene Player Sample",param_1);
  DAT_005b3e0c = CreateWindowExA(0,"Cutscene Player Sample",local_104,0,0,0,0,0,(HWND)0x0,(HMENU)0x0
                                 ,unaff_ESI,(LPVOID)0x0);
  return DAT_005b3e0c != (HWND)0x0;
}




/* Function: FUN_00406ea0 */

int FUN_00406ea0(undefined4 param_1,HINSTANCE param_2,undefined4 param_3)

{
  int iVar1;
  
  DAT_005b3e14 = GetActiveWindow();
  iVar1 = FUN_00406bb0(param_1);
  if (iVar1 == 0) {
    return -0x7fffbffb;
  }
  iVar1 = CoInitialize((LPVOID)0x0);
  if (-1 < iVar1) {
    iVar1 = FUN_00406a10();
    if (iVar1 < 0) {
      CoUninitialize();
      return iVar1;
    }
    iVar1 = FUN_00406c60(param_1,param_2,param_3);
    if ((iVar1 == 0) && (DAT_005b3e10 != 0)) {
      iVar1 = 1;
    }
    SetForegroundWindow(DAT_005b3e14);
    FUN_00406900();
    CoUninitialize();
    UnregisterClassA("Cutscene Player Sample",param_2);
  }
  return iVar1;
}




/* Function: FUN_0042e510 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __fastcall FUN_0042e510(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint unaff_retaddr;
  int *local_4e4;
  undefined4 *local_4e0;
  undefined4 local_4dc [11];
  undefined4 local_4b0 [5];
  undefined4 local_49c;
  int local_498;
  int local_488;
  tagRECT local_47c [5];
  char local_420 [1028];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057b7a3;
  local_14 = ExceptionList;
  local_1c = DAT_005b12c0 ^ unaff_retaddr;
  local_4e4 = param_1 + 0xc;
  local_4e0 = local_4dc;
  ExceptionList = &local_14;
  FUN_0042e3b0(&DAT_00588760);
  uVar2 = VideoForWindowsVersion();
  if (uVar2 >> 0x10 < 0x10a) {
    FUN_0042e3b0("Version of Video for Windows too old. Come on, join the 21th century!");
    ExceptionList = local_14;
    return 1;
  }
  AVIFileInit();
  puVar6 = (undefined4 *)*param_1;
  if (puVar6 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    if (puVar6[1] == 0) {
      uVar3 = FUN_004d3720(*puVar6);
      puVar6[1] = uVar3;
    }
    uVar3 = puVar6[1];
  }
  iVar4 = AVIFileOpenA(param_1 + 0xe,uVar3,0x1001,0);
  if (iVar4 == 0) {
    iVar4 = param_1[7];
    puVar6 = local_4b0;
    for (iVar5 = 0x23; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_498 = param_1[1];
    local_4b0[1] = 0;
    local_4b0[0] = 0x73646976;
    local_49c = 1;
    local_488 = iVar4;
    SetRect(local_47c,0,0,param_1[3],param_1[4]);
    piVar1 = param_1 + 0xf;
    iVar4 = AVIFileCreateStreamA(param_1[0xe],piVar1,local_4b0);
    if (iVar4 == 0) {
      puVar6 = local_4dc;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      iVar4 = AVISaveOptions(0,0,1,piVar1,&local_4e0);
      if (iVar4 == 0) {
        AVISaveOptionsFree(1,&local_4e0);
        ExceptionList = local_14;
        return 1;
      }
      iVar4 = AVIMakeCompressedStream(param_1 + 0x10,*piVar1,local_4dc,0);
      if (iVar4 != 0) {
        FUN_0042e3b0("AVI Compressed Stream creation failed.");
        if (iVar4 == -0x7ffbbf9b) {
          FUN_0042e1d0(
                      "Compression is not supported for this type of data. This error might be returned if you try to compress data that is not audio or video."
                      );
          local_c = 8;
        }
        else if (iVar4 == -0x7ffbbf99) {
          FUN_0042e1d0(" There is not enough memory to complete the operation.");
          local_c = 7;
        }
        else {
          if (iVar4 != -0x7ffbbf8f) {
            ExceptionList = local_14;
            return iVar4;
          }
          FUN_0042e1d0(" A suitable compressor cannot be found.");
          local_c = 6;
        }
        FUN_0042e450(&local_4e4);
        FUN_0042e390();
        ExceptionList = local_14;
        return iVar4;
      }
      iVar4 = AVISaveOptionsFree(1,&local_4e0);
      if (iVar4 != 0) {
        FUN_0042e3b0("Error releasing memory");
        ExceptionList = local_14;
        return iVar4;
      }
      iVar4 = AVIStreamSetFormat(param_1[0x10],0,param_1 + 2,param_1[2] + param_1[10] * 4);
      if (iVar4 != 0) {
        FUN_0042e3b0("AVI Compressed Stream format setting failed.");
        ExceptionList = local_14;
        return iVar4;
      }
      param_1[0xd] = 0;
      ExceptionList = local_14;
      return 0;
    }
    FUN_0042e3b0("AVI Stream creation failed. Check Bitmap info.");
    if (iVar4 != -0x7ffbbf8e) {
      ExceptionList = local_14;
      return iVar4;
    }
    FUN_0042e1d0(" Read only file.");
    local_c = 5;
    iVar4 = -0x7ffbbf8e;
  }
  else {
    printf(local_420,"AVI Engine failed to initialize. Check filename %s.",*param_1);
    FUN_0042e3b0(local_420);
    if (iVar4 < -0x7ffbbf98) {
      if (iVar4 != -0x7ffbbf99) {
        if (iVar4 == -0x7ffbfeac) {
          FUN_0042e1d0(
                      "According to the registry, the type of file specified in AVIFileOpen does not have a handler to process it"
                      );
          local_c = 4;
        }
        else {
          if (iVar4 != -0x7ffbbf9a) {
            ExceptionList = local_14;
            return iVar4;
          }
          FUN_0042e1d0(
                      "The file couldn\'t be read, indicating a corrupt file or an unrecognized format."
                      );
          local_c = 0;
        }
LAB_0042e64c:
        FUN_0042e450(&local_4e4);
        FUN_0042e390();
        ExceptionList = local_14;
        return iVar4;
      }
      FUN_0042e1d0("The file could not be opened because of insufficient memory.");
      local_c = 1;
    }
    else {
      if (iVar4 != -0x7ffbbf93) {
        if (iVar4 != -0x7ffbbf91) {
          ExceptionList = local_14;
          return iVar4;
        }
        FUN_0042e1d0("A disk error occurred while opening the file.");
        local_c = 3;
        goto LAB_0042e64c;
      }
      FUN_0042e1d0("A disk error occurred while reading the file.");
      local_c = 2;
    }
  }
  FUN_0042e450(&local_4e4);
  if (local_4e4 != (int *)0x0) {
    FUN_0042e340();
  }
  ExceptionList = local_14;
  return iVar4;
}





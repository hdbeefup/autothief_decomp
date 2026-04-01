/* gui functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_004049d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004049d0(int param_1)

{
  HWND pHVar1;
  int iVar2;
  char cVar3;
  BOOL BVar4;
  HWND pHVar5;
  int *piVar6;
  LONG LVar7;
  HCURSOR pHVar8;
  int iVar9;
  DWORD dwMilliseconds;
  uint uVar10;
  WPARAM wParam;
  WINDOWPLACEMENT *pWVar11;
  float10 fVar12;
  undefined4 uVar13;
  int *piVar14;
  float fVar15;
  char cStack_b5;
  tagPOINT tStack_b4;
  int iStack_a8;
  undefined8 uStack_a4;
  LARGE_INTEGER LStack_9c;
  uint uStack_94;
  LARGE_INTEGER local_90;
  undefined1 auStack_88 [4];
  int local_84;
  int iStack_80;
  int iStack_7c;
  LARGE_INTEGER LStack_6c;
  WINDOWPLACEMENT WStack_64;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_38 [32];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0057a862;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if ((DAT_005b3df8 & 1) == 0) {
    DAT_005b3df8 = DAT_005b3df8 | 1;
    ExceptionList = &pvStack_14;
    FUN_00404430();
  }
  if (*(char *)(param_1 + 0x22c4) == '\0') {
    *(undefined1 *)(param_1 + 0x22c4) = 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &local_84,"autoexec.cfg");
    iVar9 = param_1 + 0x78;
    uVar13 = 0;
    piVar6 = &local_84;
    FUN_0041e5b0(piVar6,0,iVar9);
    FUN_0040c2d0(piVar6,uVar13,iVar9);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &local_84);
  }
  tStack_b4.x = (LONG)(uint3)tStack_b4.x;
  BVar4 = QueryPerformanceCounter(&local_90);
  if (BVar4 != 0) {
    tStack_b4.x._3_1_ = 1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_84,(char *)&PTR_LAB_00582b08);
  uVar13 = 0x3f800000;
  piVar14 = &local_84;
  piVar6 = (int *)(param_1 + 0x78);
  local_c = 0;
  FUN_0041cae0(piVar14,0x3f800000);
  FUN_0042dc20(piVar14,uVar13);
  local_c = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_84);
  cVar3 = (**(code **)(*piVar6 + 0x20))(piVar6);
  if (cVar3 != '\0') {
    (**(code **)(*piVar6 + 0x84))();
    DAT_005b3bc8 = 0;
    DAT_005b3bc4 = FUN_0042bcc0();
    DAT_005b3bc0 = DAT_005b3bc8;
    local_90.s.HighPart = DAT_005b3bc4;
    cVar3 = FUN_004049c0();
    if ((cVar3 == '\0') ||
       (pHVar1 = *(HWND *)(param_1 + 4), pHVar5 = GetActiveWindow(), pHVar5 != pHVar1)) {
      ShowCursor(1);
      piVar6 = (int *)FUN_0041cab0();
      pHVar8 = (HCURSOR)(**(code **)(*piVar6 + 0x8c))();
      SetCursor(pHVar8);
    }
    else {
      piVar6 = (int *)FUN_0041cab0();
      cVar3 = (**(code **)(*piVar6 + 0x88))();
      if (cVar3 == '\0') {
        GetCursorPos(&tStack_b4);
        piVar6 = (int *)FUN_0041cdd0();
        tStack_b4.y = tStack_b4.y - piVar6[1];
        tStack_b4.x = tStack_b4.x - *piVar6;
        FUN_0041cde0(&tStack_b4);
        pWVar11 = &WStack_64;
        for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
          pWVar11->length = 0;
          pWVar11 = (WINDOWPLACEMENT *)&pWVar11->flags;
        }
        WStack_64.length = 0x2c;
        GetWindowPlacement(*(HWND *)(param_1 + 4),&WStack_64);
        SetCursorPos((WStack_64.rcNormalPosition.left + WStack_64.rcNormalPosition.right) / 2,
                     (WStack_64.rcNormalPosition.bottom + WStack_64.rcNormalPosition.top) / 2);
        GetCursorPos(&tStack_b4);
        FUN_0041cdb0(&tStack_b4);
        ShowCursor(0);
      }
      else {
        GetClientRect(*(HWND *)(param_1 + 4),(LPRECT)auStack_88);
        GetCursorPos(&tStack_b4);
        ScreenToClient(*(HWND *)(param_1 + 4),&tStack_b4);
        FUN_0041c920();
        iStack_a8 = iStack_80 - (int)auStack_88;
        LVar7 = FUN_004cf110();
        tStack_b4.x = LVar7;
        FUN_0041c920();
        iStack_a8 = iStack_7c - local_84;
        LVar7 = FUN_004cf110();
        tStack_b4.y = LVar7;
        piVar6 = (int *)FUN_0041cdd0();
        iVar9 = *piVar6;
        iVar2 = piVar6[1];
        FUN_0041cdb0(&tStack_b4);
        uStack_a4 = (double)CONCAT44(tStack_b4.y - iVar2,tStack_b4.x - iVar9);
        FUN_0041cde0(&uStack_a4);
        piVar6 = (int *)FUN_0041cab0();
        pHVar8 = (HCURSOR)(**(code **)(*piVar6 + 0x8c))();
        SetCursor(pHVar8);
        ShowCursor(1);
      }
    }
    if (((cStack_b5 == '\0') || (BVar4 = QueryPerformanceCounter(&LStack_9c), BVar4 == 0)) ||
       (BVar4 = QueryPerformanceFrequency(&LStack_6c), BVar4 == 0)) {
      fVar15 = 0.33333334;
    }
    else {
      uStack_a4 = (double)CONCAT44((LStack_9c.s.HighPart - local_90._0_4_) -
                                   (uint)(LStack_9c.s.LowPart < uStack_94),
                                   LStack_9c.s.LowPart - uStack_94);
      uStack_a4 = (double)(longlong)uStack_a4 / (double)(longlong)LStack_6c;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (abStack_38,"LimitFPS");
      puStack_10 = (undefined1 *)0x1;
      uVar13 = FUN_004224c0(&WStack_64,abStack_38);
      iVar9 = FUN_0040e4b0(uVar13,0);
      iStack_a8 = iVar9;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &WStack_64);
      puStack_10 = (undefined1 *)0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_38);
      tStack_b4 = (tagPOINT)(_DAT_00582af0 / (double)iStack_a8);
      uStack_a4 = ((double)tStack_b4 - uStack_a4) - (double)*(float *)(param_1 + 0x22c8);
      if ((iVar9 != 0) && (_DAT_00582ae8 < uStack_a4)) {
        dwMilliseconds = FUN_004cf110();
        Sleep(dwMilliseconds);
      }
      QueryPerformanceCounter(&LStack_9c);
      uStack_a4 = (double)CONCAT44((LStack_9c.s.HighPart - local_90._0_4_) -
                                   (uint)(LStack_9c.s.LowPart < uStack_94),
                                   LStack_9c.s.LowPart - uStack_94);
      fVar12 = (float10)(longlong)uStack_a4 / (float10)(longlong)LStack_6c;
      *(float *)(param_1 + 0x22c8) = (float)(fVar12 - (float10)(double)tStack_b4);
      if (fVar12 - (float10)(double)tStack_b4 < (float10)_DAT_00582ad8) {
        *(undefined4 *)(param_1 + 0x22c8) = 0;
      }
      if ((float10)_DAT_00582ad0 < fVar12) {
        fVar12 = (float10)_DAT_00582ad0;
      }
      fVar15 = (float)fVar12;
    }
    FUN_0041ce20(fVar15);
    FUN_00404490();
    uVar13 = (**(code **)(**(int **)(param_1 + 0x22a8) + 4))();
    *(undefined4 *)(param_1 + 0x22bc) = uVar13;
    uVar10 = FUN_0042dba0(*(undefined4 *)(param_1 + 0x22c0),uVar13);
    *(uint *)(param_1 + 0x22b8) = uVar10;
    if (1000 < uVar10) {
      *(undefined4 *)(param_1 + 0x22c0) = *(undefined4 *)(param_1 + 0x22bc);
      uVar13 = local_90.s.HighPart;
      wParam = FUN_004cf110();
      PostMessageA(*(HWND *)(param_1 + 4),0x401,wParam,uVar13);
    }
  }
  ExceptionList = pvStack_18;
  return;
}




/* Function: FUN_00406ae0 */

int FUN_00406ae0(void)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_005b3e04 == (int *)0x0) {
    return 1;
  }
  iVar1 = (**(code **)(*DAT_005b3e04 + 0x8c))(DAT_005b3e04);
  if (iVar1 < 0) {
    FUN_00406990("FAILED(hr=0x%x) in pVW->get_FullScreenMode(&lMode)\n",iVar1);
    return iVar1;
  }
  if (&stack0x00000000 == (undefined1 *)0x4) {
    iVar1 = (**(code **)(*DAT_005b3e04 + 0x80))(DAT_005b3e04,&DAT_005b3e18);
    if (iVar1 < 0) {
      FUN_00406990("FAILED(hr=0x%x) in pVW->get_MessageDrain((OAHWND *) &hDrain)\n",iVar1);
      return iVar1;
    }
    piVar2 = DAT_005b3e04;
    iVar1 = (**(code **)(*DAT_005b3e04 + 0x7c))(DAT_005b3e04,DAT_005b3e0c);
    if (iVar1 < 0) {
      FUN_00406990("FAILED(hr=0x%x) in pVW->put_MessageDrain((OAHWND) g_hwndMain)\n",iVar1);
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_005b3e04 + 0x90))(DAT_005b3e04,0xffffffff,piVar2,0xffffffff);
    if (iVar1 < 0) {
      FUN_00406990("FAILED(hr=0x%x) in pVW->put_FullScreenMode(lMode)\n",iVar1);
    }
  }
  return iVar1;
}




/* Function: FUN_00406c60 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_00406c60(LPCSTR param_1,undefined4 param_2,int param_3)

{
  UINT CodePage;
  int iVar1;
  wchar_t *_Source;
  wchar_t local_238 [260];
  tagMSG local_30;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  CodePage = (*(code *)PTR_FUN_005a20d0)();
  if (param_1 == (LPCSTR)0x0) {
    _Source = (wchar_t *)0x0;
  }
  else {
    iVar1 = lstrlenA(param_1);
    _Source = (wchar_t *)&stack0xfffffdbc;
    if (&stack0x00000000 != (undefined1 *)0x244) {
      MultiByteToWideChar(CodePage,0,param_1,-1,(LPWSTR)&stack0xfffffdbc,iVar1 + 1);
      _Source = (wchar_t *)&stack0xfffffdbc;
    }
  }
  wcscpy(local_238,_Source);
  iVar1 = (**(code **)(*DAT_005b3dfc + 0x34))(DAT_005b3dfc,local_238,0);
  if (iVar1 < 0) {
    FUN_00406990("Failed(0x%08lx) in RenderFile(%s)!\r\n",iVar1,param_1);
    return iVar1;
  }
  iVar1 = (**(code **)(*DAT_005b3e04 + 0x7c))(DAT_005b3e04,DAT_005b3e0c);
  if (iVar1 < 0) {
    FUN_00406990("Failed(0x%08lx) to set message drain for %s.\r\n\r\nThis sample is designed to play videos, but the file selected has no video component."
                 ,iVar1,param_1);
    return iVar1;
  }
  if ((param_3 != 0) && (iVar1 = FUN_00406ae0(), iVar1 < 0)) {
    FUN_00406990("Failed(%08lx) to set fullscreen!\r\n",iVar1);
    return iVar1;
  }
  iVar1 = (**(code **)(*DAT_005b3e00 + 0x20))(DAT_005b3e00);
  if (iVar1 < 0) {
    FUN_00406990("Failed(%08lx) in Pause()!\r\n",iVar1);
    return iVar1;
  }
  iVar1 = (**(code **)(*DAT_005b3e00 + 0x1c))(DAT_005b3e00);
  local_c = iVar1;
  if (iVar1 < 0) {
    FUN_00406990("Failed(%08lx) in Run()!\r\n",iVar1);
    return iVar1;
  }
  DAT_005a214c = 1;
  do {
    iVar1 = (**(code **)(*DAT_005b3e08 + 0x20))(DAT_005b3e08,&local_8,&local_14,&local_10,0);
    if (iVar1 == -0x7fffbffc) {
LAB_00406e40:
      Sleep(100);
    }
    else {
      local_c = (**(code **)(*DAT_005b3e08 + 0x30))(DAT_005b3e08,local_8,local_14,local_10);
      if (local_c < 0) {
        FUN_00406990("Failed(%08lx) to free event params (%s)!\r\n",local_c,param_1);
      }
      if (local_8 != 1) goto LAB_00406e40;
      DAT_005a214c = 0;
    }
    iVar1 = PeekMessageA(&local_30,DAT_005b3e0c,0,0,1);
    while (iVar1 != 0) {
      TranslateMessage(&local_30);
      DispatchMessageA(&local_30);
      iVar1 = PeekMessageA(&local_30,DAT_005b3e0c,0,0,1);
    }
    if (DAT_005a214c == 0) {
      return local_c;
    }
  } while( true );
}




/* Function: FUN_0040c830 */

void __thiscall FUN_0040c830(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  uint uVar5;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  uint local_98;
  int local_94;
  undefined1 local_90 [4];
  int local_8c;
  int *local_7c;
  int local_78;
  undefined4 local_74;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_70 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_54 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1c [28];
  
  switch(param_2) {
  case 8:
    if ((*(char *)(param_1 + 0x1090) != '\0') && (*(int *)(param_1 + 0x10b0) != 0)) {
      pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_004081c0();
      bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              empty(pbVar6);
      if (!bVar2) {
        iVar9 = *(int *)(param_1 + 0x10d4);
        if (iVar9 == -1) {
          uVar11 = 1;
          pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   FUN_004081c0();
          uVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ::size(pbVar6);
          uVar5 = uVar5 - 1;
          pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   FUN_004081c0();
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::erase
                    (pbVar6,uVar5,uVar11);
        }
        else if (0 < iVar9) {
          uVar5 = iVar9 - 1;
          uVar11 = 1;
          pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   FUN_004081c0();
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::erase
                    (pbVar6,uVar5,uVar11);
          FUN_0040c830(0x25,param_3);
        }
        pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 FUN_004081c0();
        bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                empty(pbVar6);
        if (bVar2) {
          *(undefined4 *)(param_1 + 0x10d4) = 0xffffffff;
          return;
        }
      }
    }
    break;
  case 9:
    if (*(char *)(param_1 + 0x1090) != '\0') {
      local_94 = param_1 + 0x10a0;
      pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_004081c0();
      bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              empty(pbVar6);
      if (!bVar2) {
        FUN_004273b0(local_90);
        uVar3 = FUN_004081c0();
        FUN_00408950(local_70,uVar3);
        uVar5 = 0;
        piVar8 = (int *)0x0;
        local_7c = (int *)0x0;
        local_78 = 0;
        local_74 = 0;
        local_98 = 0;
        iVar7 = FUN_004e1e80();
        iVar9 = 0;
        if (iVar7 != 0) {
          do {
            pbVar6 = local_70;
            uVar11 = 0;
            pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )FUN_00408950(local_1c,local_8c + uVar5 * 0x1c);
            uVar11 = std::
                     basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                     find(pbVar4,pbVar6,uVar11);
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_1c);
            if (uVar11 == 0) {
              FUN_0040ae20(&local_98);
              piVar8 = local_7c;
              uVar5 = local_98;
            }
            uVar5 = uVar5 + 1;
            local_98 = uVar5;
            uVar11 = FUN_004e1e80();
            iVar9 = local_78;
          } while (uVar5 < uVar11);
        }
        cVar1 = FUN_005267a0();
        if (cVar1 == '\0') {
          if ((piVar8 == (int *)0x0) || (uVar5 = iVar9 - (int)piVar8 >> 2, uVar5 < 2)) {
            pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(local_8c + *piVar8 * 0x1c);
            pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )FUN_004081c0();
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            operator=(pbVar4,pbVar6);
          }
          else {
            FUN_0040a410(param_1,"Matches:");
            for (uVar11 = 0; uVar11 < uVar5; uVar11 = uVar11 + 1) {
              pcVar12 = std::
                        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        ::c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)(local_8c + piVar8[uVar11] * 0x1c));
              FUN_0040a410(param_1,&DAT_00583380,pcVar12);
            }
          }
        }
        if (piVar8 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(piVar8);
        }
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_70);
        FUN_00409200();
      }
    }
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
    break;
  case 0x1b:
    if (*(char *)(param_1 + 0x1090) != '\0') {
      pcVar12 = "";
      *(undefined4 *)(param_1 + 0x10c8) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x10d4) = 0xffffffff;
      pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_004081c0();
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                (pbVar6,pcVar12);
      return;
    }
    break;
  case 0x25:
    if ((*(char *)(param_1 + 0x1090) != '\0') && (*(int *)(param_1 + 0x10b0) != 0)) {
      pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_004081c0();
      bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              empty(pbVar6);
      if (!bVar2) {
        uVar5 = *(uint *)(param_1 + 0x10d4);
        if (0 < (int)uVar5) {
LAB_0040c9ec:
          *(uint *)(param_1 + 0x10d4) = uVar5 - 1;
          return;
        }
        if (uVar5 == 0xffffffff) {
          pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   FUN_004081c0();
          uVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ::size(pbVar6);
          goto LAB_0040c9ec;
        }
      }
    }
    break;
  case 0x26:
    if ((*(char *)(param_1 + 0x1090) != '\0') && (uVar11 = *(uint *)(param_1 + 0x10c4), uVar11 != 0)
       ) {
      *(undefined4 *)(param_1 + 0x10d4) = 0xffffffff;
      uVar5 = *(int *)(param_1 + 0x10c8) + 1;
      *(uint *)(param_1 + 0x10c8) = uVar5;
      if (((int)uVar5 < 0) || (uVar11 <= uVar5)) {
        *(uint *)(param_1 + 0x10c8) = uVar11 - 1;
        return;
      }
LAB_0040c903:
      pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_00408180(uVar5);
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_004081c0();
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                (pbVar4,pbVar6);
      return;
    }
    break;
  case 0x27:
    if ((*(char *)(param_1 + 0x1090) != '\0') && (*(int *)(param_1 + 0x10b0) != 0)) {
      pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_004081c0();
      bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              empty(pbVar6);
      if ((!bVar2) && (-1 < *(int *)(param_1 + 0x10d4))) {
        *(int *)(param_1 + 0x10d4) = *(int *)(param_1 + 0x10d4) + 1;
LAB_0040ca4d:
        pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 FUN_004081c0();
        uVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                size(pbVar6);
        if (uVar5 <= *(uint *)(param_1 + 0x10d4)) {
          *(undefined4 *)(param_1 + 0x10d4) = 0xffffffff;
          return;
        }
      }
    }
    break;
  case 0x28:
    if ((*(char *)(param_1 + 0x1090) != '\0') && (*(uint *)(param_1 + 0x10c4) != 0)) {
      *(undefined4 *)(param_1 + 0x10d4) = 0xffffffff;
      uVar5 = *(int *)(param_1 + 0x10c8) - 1;
      *(uint *)(param_1 + 0x10c8) = uVar5;
      if (((int)uVar5 < 0) || (*(uint *)(param_1 + 0x10c4) <= uVar5)) {
        *(undefined4 *)(param_1 + 0x10c8) = 0;
        return;
      }
      goto LAB_0040c903;
    }
    break;
  case 0x2e:
    FUN_0040c690(0x2e,1,param_3);
    if ((*(char *)(param_1 + 0x1090) != '\0') && (*(int *)(param_1 + 0x10b0) != 0)) {
      pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_004081c0();
      bVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              empty(pbVar6);
      if (!bVar2) {
        uVar5 = *(uint *)(param_1 + 0x10d4);
        if (-1 < (int)uVar5) {
          uVar11 = 1;
          pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   FUN_004081c0();
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::erase
                    (pbVar6,uVar5,uVar11);
        }
        goto LAB_0040ca4d;
      }
    }
    break;
  case 0xc0:
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_54,"ShowConsole");
    uVar10 = 0;
    uVar3 = FUN_004224c0(local_38,local_54);
    cVar1 = FUN_0040e560(uVar3,uVar10);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_54);
    if (cVar1 != '\0') {
      cVar1 = FUN_00407030();
      FUN_0040ad40(cVar1 == '\0');
      return;
    }
    break;
  default:
    goto switchD_0040c855_default;
  }
switchD_0040c855_default:
  return;
}




/* Function: FUN_00422fb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FUN_00422fb0(int param_1,char param_2)

{
  void *pvVar1;
  undefined3 uVar5;
  undefined4 uVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  undefined3 extraout_var_00;
  int iVar6;
  int *piVar7;
  uint unaff_retaddr;
  int local_12c [3];
  undefined2 local_120;
  undefined2 local_11e;
  undefined4 local_11c;
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  void *local_104;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_100 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_e4 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_c8 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_ac [28];
  char local_90 [128];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057affd;
  local_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  uVar5 = (undefined3)(local_10 >> 8);
  if (*(char *)(param_1 + 0xbc) != param_2) {
    if (param_2 == '\0') {
      ExceptionList = &local_c;
      if (*(int *)(param_1 + 0xb4) != 0) {
        ExceptionList = &local_c;
        FUN_0042e150();
      }
      pvVar1 = *(void **)(param_1 + 0xb4);
      if (pvVar1 != (void *)0x0) {
        FUN_0042e4e0();
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      *(undefined4 *)(param_1 + 0xb4) = 0;
      uVar2 = FUN_0041e5b0("AVI recording stopped");
      FUN_0040a410(uVar2);
      uVar5 = extraout_var;
    }
    else if ((*(char *)(param_1 + 0xbc) != param_2) && (param_2 == '\x01')) {
      piVar7 = local_12c;
      for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar7 = 0;
        piVar7 = piVar7 + 1;
      }
      local_12c[0] = 0x28;
      ExceptionList = &local_c;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_100,"VideoWidth");
      local_4 = 0;
      uVar2 = FUN_004224c0(local_c8,local_100);
      iVar3 = FUN_0040e470(uVar2,0x140);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_c8);
      local_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_100);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_e4,"VideoHeight");
      local_4 = 1;
      uVar2 = FUN_004224c0(local_ac,local_e4);
      iVar4 = FUN_0040e470(uVar2,200);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_ac);
      local_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_e4);
      iVar6 = iVar3 * 0x18 + 0x1f;
      local_118 = ((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * iVar4 * 4;
      iVar6 = *(int *)(param_1 + 0xc0) + 1;
      local_114 = 0x400;
      local_110 = 0x400;
      local_120 = 1;
      local_11e = 0x18;
      local_11c = 0;
      *(int *)(param_1 + 0xc0) = iVar6;
      local_12c[1] = iVar3;
      local_12c[2] = iVar4;
      _snprintf(local_90,0x80,"video%02d.avi",iVar6);
      local_104 = operator_new(0x44,(nothrow_t *)&DAT_005b6164);
      local_4 = 2;
      if (local_104 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0042e9a0(local_90,local_12c,0x19);
      }
      local_4 = 0xffffffff;
      *(undefined4 *)(param_1 + 0xb4) = uVar2;
      FUN_0042e510();
      uVar2 = FUN_0041e5b0("Recording AVI: %s",local_90);
      FUN_0040a410(uVar2);
      uVar5 = extraout_var_00;
    }
  }
  *(char *)(param_1 + 0xbc) = param_2;
  ExceptionList = local_c;
  return CONCAT31(uVar5,1);
}




/* Function: FUN_00449f60 */

undefined4 FUN_00449f60(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int local_4;
  
  uVar1 = FUN_0054fe20(param_1,1,&local_4);
  if ((local_4 != 0) && (iVar2 = FUN_0041ce80(), iVar2 != 0)) {
    uVar3 = FUN_0041ce80();
    pcVar4 = "EDITOR WINDOW";
    FUN_0041cac0("EDITOR WINDOW");
    iVar2 = FUN_0045b600(pcVar4);
    if (iVar2 != 0) {
      FUN_00533fb0(uVar3,uVar1);
    }
  }
  return 0;
}




/* Function: FUN_0044a050 */

undefined4 FUN_0044a050(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int local_4;
  
  local_4 = 0;
  uVar1 = FUN_0054fe20(param_1,1,&local_4);
  if (local_4 != 0) {
    local_4 = 0;
    iVar2 = FUN_0041ce80();
    if (iVar2 != 0) {
      uVar3 = FUN_0041ce80();
      pcVar4 = "EDITOR WINDOW";
      FUN_0041cac0("EDITOR WINDOW");
      iVar2 = FUN_0045b600(pcVar4);
      if (iVar2 != 0) {
        FUN_00536de0(uVar3,uVar1);
      }
    }
  }
  return 0;
}




/* Function: FUN_004d4570 */

undefined4 * __fastcall FUN_004d4570(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057de71;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0050fac0();
  local_4 = 0;
  *param_1 = &PTR_LAB_0058f8b8;
  param_1[0x27] = 0;
  puVar2 = operator_new(0xc,(nothrow_t *)&DAT_005b6164);
  param_1[0x2d] = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  FUN_0041cae0();
  uVar3 = FUN_0042dbb0();
  FUN_004dc9c0(uVar3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_44,"ShowCursor");
  local_4._0_1_ = 1;
  uVar3 = FUN_004224c0(local_28,local_44);
  uVar1 = FUN_0040e560(uVar3,0);
  *(undefined1 *)(param_1 + 0x2c) = uVar1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
  FUN_004252f0("models\\blackguy_with_bat",FUN_004d43b0);
  FUN_004252f0("models\\toolsaler",FUN_004d44b0);
  FUN_004252f0("models\\rgirl",FUN_004d4410);
  FUN_004252f0("models\\rgirl",FUN_004d4410);
  FUN_004252f0("models\\girl1",FUN_004d4510);
  FUN_004252f0("models\\tree",&LAB_004d3a40);
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_004e1560 */

undefined4 * __fastcall FUN_004e1560(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e4ac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0045ca20();
  local_4 = 0;
  *param_1 = &PTR_LAB_00590980;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x1a));
  local_4._0_1_ = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x21));
  local_4._0_1_ = 2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x13),"ActiveItem");
  iVar1 = FUN_0041c920();
  param_1[0xf] = *(int *)(iVar1 + 8) + -200;
  param_1[0x10] = 0;
  param_1[0x11] = 0x100;
  param_1[0x12] = 0x80;
  param_1[0x2b] = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_28,"activetimer");
  local_4._0_1_ = 3;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_44,".\\Textures\\GUI\\");
  FUN_00429a60(local_44,local_28,1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_44);
  local_4 = CONCAT31(local_4._1_3_,2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_28,"activetimer");
  uVar2 = FUN_004222d0(local_28);
  param_1[0x2c] = uVar2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  ExceptionList = local_c;
  return param_1;
}




/* Function: FUN_00532e50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00532e50(int *param_1,undefined4 param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  float10 fVar9;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar10;
  undefined4 uVar11;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_20 [32];
  
  *(undefined1 *)((int)param_1 + 0x215) = 0;
  uVar4 = FUN_0041c940();
  FUN_00532de0(param_2,uVar4);
  if (param_1[0x78] == 0) {
    uVar5 = FUN_0041dd90();
    uVar8 = 0;
    if (uVar5 != 0) {
      do {
        iVar6 = FUN_0041f930(uVar8);
        if (*(int *)(iVar6 + 0x80) == 7) {
          param_1[0x78] = iVar6;
          break;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
    }
  }
  if (param_1[0x78] != 0) {
    FUN_0053b240(0x43fa0000);
    fVar9 = (float10)FUN_00539ac0();
    param_1[0x7c] = (int)(float)fVar9;
    pfVar7 = (float *)FUN_00539ad0();
    pfVar1 = (float *)(param_1 + 0x79);
    if (pfVar7 != pfVar1) {
      *pfVar1 = *pfVar7;
      param_1[0x7a] = (int)pfVar7[1];
      param_1[0x7b] = (int)pfVar7[2];
    }
    iVar6 = FUN_00539ab0();
    param_1[0x90] = iVar6;
    iVar6 = FUN_0041cda0();
    param_1[0x91] = iVar6;
    param_1[0x99] = 0x3f800000;
    param_1[0x8d] = -1;
    param_1[0x77] = 0;
    *(undefined1 *)(param_1 + 0x85) = 0;
    *(undefined1 *)(param_1 + 0x9b) = 1;
    (**(code **)(*(int *)param_1[0x5b] + 0x20))(param_2);
    FUN_00532760(param_2);
    FUN_0041dc00();
    fVar3 = (float)param_1[0x7a] + _DAT_0058ac30;
    pfVar7 = (float *)(param_1 + 0x92);
    if ((float *)&stack0xffffffd4 != pfVar7) {
      *pfVar7 = *pfVar1;
      param_1[0x93] = (int)fVar3;
      param_1[0x94] = param_1[0x7b];
    }
    pfVar2 = (float *)(param_1 + 0x95);
    fVar3 = (float)param_1[0x91] * (float)param_1[0x7c] * _DAT_00583340;
    if ((float *)&stack0xffffffd4 != pfVar2) {
      *pfVar2 = (float)param_1[0x90] * (float)param_1[0x7c] * _DAT_00583340 + *pfVar1;
      param_1[0x96] = param_1[0x7a];
      param_1[0x97] = (int)(fVar3 + (float)param_1[0x7b]);
    }
    FUN_0041e610(pfVar7,pfVar2,0);
    iVar6 = FUN_0041cab0();
    if (*(int *)(iVar6 + 0x9c) != 0) {
      iVar6 = FUN_0041cab0();
      (**(code **)(**(int **)(iVar6 + 0x9c) + 8))(0);
      iVar6 = FUN_0041cab0();
      (**(code **)(**(int **)(iVar6 + 0x9c) + 4))(0);
      iVar6 = FUN_0041cab0();
      (**(code **)(**(int **)(iVar6 + 0x9c) + 0xa4))();
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (abStack_20,"run scripts\\guihide.lua");
      pbVar10 = abStack_20;
      uVar11 = 1;
      uVar4 = param_2;
      FUN_0041e5b0(pbVar10,1,param_2);
      FUN_0040bef0(pbVar10,uVar11,uVar4);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_20);
    }
    (**(code **)(*param_1 + 0x28))(param_2);
    return;
  }
  MessageBoxA((HWND)0x0,"Not found floor grid class!","ERROR",0);
  return;
}




/* Function: FUN_005346c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_005346c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            float param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_5c [12];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 *local_2c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [20];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057feb8;
  pvStack_c = ExceptionList;
  local_2c = abStack_5c;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (abStack_5c,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000018);
  uStack_68 = param_4;
  uStack_6c = param_3;
  uStack_70 = 0x534719;
  FUN_0045ec30();
  FUN_0040ad60();
  local_4._0_1_ = 2;
  *param_1 = &PTR_LAB_005926b8;
  param_1[0x50] = &PTR_LAB_005926a8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x5e));
  local_4._0_1_ = 3;
  FUN_00459730();
  FUN_00459780();
  param_5 = (float)param_6 * _DAT_00592750;
  param_6 = FUN_00493c27();
  local_4._0_1_ = 4;
  if (param_6 == 0) {
    uVar1 = 0;
  }
  else {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_5c,"ENTER MAP NAME:");
    local_2c = abStack_78;
    local_4._0_1_ = 5;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_78,"");
    local_4._0_1_ = 4;
    uVar3 = 400;
    uVar1 = FUN_004cf110(400);
    uVar2 = FUN_004cf110(uVar1);
    uVar1 = FUN_0045ce80(uVar2,uVar1,uVar3);
  }
  local_4._0_1_ = 3;
  param_1[0x5b] = uVar1;
  FUN_00459020();
  FUN_00459050();
  FUN_004596a0();
  FUN_00459070();
  uStack_4c = 0x53484c;
  FUN_00459030();
  FUN_0041cd90();
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,"font_01");
  local_4._0_1_ = 6;
  FUN_004222d0();
  FUN_00458b20();
  local_4 = CONCAT31(local_4._1_3_,3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  FUN_00459690();
  (**(code **)(*(int *)param_1[0x5b] + 0x28))();
  uStack_4c = 0x5348c1;
  FUN_0045e010();
  uStack_4c = 0x5348cb;
  param_5 = (float)FUN_00493c27();
  puStack_8._0_1_ = 7;
  if (param_5 == 0.0) {
    uVar1 = 0;
  }
  else {
    uStack_68 = 0x5348f1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xffffffa0,"");
    puStack_8._0_1_ = 8;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xffffff84,"");
    uVar4 = 0x23;
    puStack_8._0_1_ = 7;
    uVar3 = 400;
    uVar1 = FUN_004cf110(400,0x23);
    uVar2 = FUN_004cf110(uVar1);
    uVar1 = FUN_0045ce80(uVar2,uVar1,uVar3,uVar4);
  }
  puStack_8._0_1_ = 3;
  param_1[0x5c] = uVar1;
  uStack_4c = 0x53495a;
  FUN_00459020();
  uStack_4c = 0x534967;
  FUN_00459050();
  uStack_4c = 0x534977;
  FUN_004596a0();
  uStack_4c = 0x534984;
  FUN_00459070();
  uStack_4c = 0x19;
  uStack_50 = 0x534993;
  FUN_00459030();
  uStack_4c = 0x5349a0;
  FUN_0041cd90();
  uStack_4c = 0x5349af;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_2c,"font_01");
  puStack_8._0_1_ = 9;
  uStack_4c = 0x5349c0;
  FUN_004222d0();
  uStack_4c = 0x5349cc;
  FUN_00458b20();
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_2c);
  uStack_4c = 0x5349ea;
  FUN_00459690();
  uStack_4c = 0x5349f6;
  (**(code **)(*(int *)param_1[0x5c] + 0x28))();
  uStack_4c = param_1[0x5c];
  uStack_50 = 0x534a04;
  FUN_0045e010();
  pvStack_c = (void *)0xffffffff;
  uStack_4c = 0x534a16;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &param_5);
  ExceptionList = pvStack_14;
  return param_1;
}




/* Function: FUN_00534bb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00534bb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 **ppuStack_cc;
  float fVar12;
  float local_88;
  undefined1 *puStack_84;
  undefined1 *puStack_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  undefined1 *local_74;
  undefined4 *local_70;
  undefined4 uStack_6c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_50 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_4c [8];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_44 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_40 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_3c [4];
  void *pvStack_38;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_34 [4];
  undefined4 uStack_30;
  undefined1 uStack_28;
  undefined1 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1c;
  undefined1 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_0057ffb8;
  pvStack_14 = ExceptionList;
  local_74 = &stack0xffffff4c;
  local_c = 0;
  ExceptionList = &pvStack_14;
  local_70 = param_1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0xffffff4c,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000018);
  FUN_0045ec30();
  FUN_0040ad60();
  *param_1 = &PTR_LAB_00592808;
  param_1[0x50] = &PTR_LAB_005927f8;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x62] = 0;
  puVar6 = param_1 + 99;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_c._0_1_ = 4;
  param_1[0x6d] = 0;
  param_1[0x5b] = 0;
  local_78 = (undefined1 *)FUN_0041c940();
  local_88 = (float)param_5 * _DAT_00592754;
  local_7c = (undefined1 *)FUN_00493c27();
  local_c._0_1_ = 5;
  if (local_7c == (undefined1 *)0x0) {
    uVar1 = 0;
  }
  else {
    local_74 = &stack0xffffff4c;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xffffff4c,"SAVE");
    FUN_004cf110();
    FUN_004cf110();
    FUN_004cf110();
    FUN_004cf110();
    uVar1 = FUN_0045dc10();
  }
  local_c._0_1_ = 4;
  param_1[0x5d] = uVar1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34,"font_01");
  local_c._0_1_ = 6;
  FUN_004222d0();
  FUN_00458b20();
  local_c = CONCAT31(local_c._1_3_,4);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
  FUN_004597c0();
  FUN_004597e0();
  *(undefined1 *)(param_1[0x5d] + 0x2c) = 1;
  (**(code **)(*(int *)param_1[0x5d] + 0x28))();
  FUN_0045e010();
  puStack_80 = (undefined1 *)FUN_00493c27();
  puStack_10._0_1_ = 7;
  if (puStack_80 == (undefined1 *)0x0) {
    uVar1 = 0;
  }
  else {
    local_78 = &stack0xffffff48;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xffffff48,"LOAD");
    FUN_004cf110();
    FUN_004cf110();
    FUN_004cf110();
    FUN_004cf110();
    ppuStack_cc = (undefined4 **)0x534eeb;
    uVar1 = FUN_0045dc10();
  }
  puStack_10._0_1_ = 4;
  param_1[0x5e] = uVar1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &pvStack_38,"font_01");
  puStack_10._0_1_ = 8;
  FUN_004222d0();
  FUN_00458b20();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &pvStack_38);
  FUN_004597c0();
  FUN_004597e0();
  *(undefined1 *)(param_1[0x5e] + 0x2c) = 1;
  (**(code **)(*(int *)param_1[0x5e] + 0x28))();
  FUN_0045e010();
  puStack_84 = (undefined1 *)FUN_00493c27();
  pvStack_14._0_1_ = 9;
  if (puStack_84 == (undefined1 *)0x0) {
    uVar1 = 0;
  }
  else {
    local_7c = &stack0xffffff44;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xffffff44,">");
    FUN_004cf110();
    FUN_004cf110();
    FUN_004cf110();
    ppuStack_cc = (undefined4 **)0x534fee;
    ppuStack_cc = (undefined4 **)FUN_004cf110();
    uVar1 = FUN_0045dc10();
  }
  pvStack_14._0_1_ = 4;
  param_1[0x60] = uVar1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_3c,"font_01")
  ;
  pvStack_14._0_1_ = 10;
  FUN_004222d0();
  FUN_00458b20();
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,4);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_3c);
  FUN_004597c0();
  FUN_004597e0();
  *(undefined1 *)(param_1[0x60] + 0x2c) = 1;
  (**(code **)(*(int *)param_1[0x60] + 0x28))();
  FUN_0045e010();
  local_88 = (float)FUN_00493c27();
  uStack_18 = 0xb;
  if (local_88 == 0.0) {
    uVar1 = 0;
  }
  else {
    puStack_80 = &stack0xffffff40;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xffffff40,"<");
    FUN_004cf110();
    FUN_004cf110();
    ppuStack_cc = (undefined4 **)0x5350eb;
    ppuStack_cc = (undefined4 **)FUN_004cf110();
    FUN_004cf110();
    uVar1 = FUN_0045dc10();
  }
  uStack_18 = 4;
  param_1[0x61] = uVar1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_40,"font_01")
  ;
  uStack_18 = 0xc;
  FUN_004222d0();
  FUN_00458b20();
  uStack_18 = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_40);
  FUN_004597c0();
  FUN_004597e0();
  *(undefined1 *)(param_1[0x61] + 0x2c) = 1;
  (**(code **)(*(int *)param_1[0x61] + 0x28))();
  FUN_0045e010();
  iVar7 = FUN_00493c27();
  uStack_1c = 0xd;
  if (iVar7 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_84 = &stack0xffffff3c;
    ppuStack_cc = (undefined4 **)0x5351c9;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xffffff3c,"PLAY");
    FUN_004cf110();
    ppuStack_cc = (undefined4 **)0x5351e8;
    ppuStack_cc = (undefined4 **)FUN_004cf110();
    FUN_004cf110();
    FUN_004cf110();
    iStack_d8 = 0x535212;
    uVar1 = FUN_0045dc10();
  }
  uStack_1c = 4;
  param_1[0x5f] = uVar1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_44,"font_01")
  ;
  uStack_1c = 0xe;
  FUN_004222d0();
  FUN_00458b20();
  uStack_1c = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_44);
  FUN_004597c0();
  FUN_004597e0();
  *(undefined1 *)(param_1[0x5f] + 0x2c) = 1;
  (**(code **)(*(int *)param_1[0x5f] + 0x28))();
  FUN_0045e010();
  FUN_0041cab0();
  iVar7 = FUN_00493c27();
  uStack_20 = 0xf;
  if (iVar7 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004cf110();
    FUN_004cf110();
    FUN_004cf110();
    FUN_004cf110();
    piVar2 = (int *)FUN_0045ccc0();
  }
  param_1[0x62] = piVar2;
  uStack_20 = 4;
  (**(code **)(*piVar2 + 0x28))();
  FUN_0045e010();
  iVar7 = FUN_00493c27();
  uStack_24 = 0x10;
  if (iVar7 == 0) {
    uVar1 = 0;
  }
  else {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &ppuStack_cc,"");
    uStack_24 = 0x11;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &uStack_e8,"");
    uVar11 = 0x23;
    uStack_24 = 0x10;
    uVar10 = 0x1c2;
    uVar1 = FUN_004cf110(0x1c2,0x23);
    uVar3 = FUN_004cf110(uVar1);
    uVar1 = FUN_0045ce80(uVar3,uVar1,uVar10,uVar11);
  }
  uStack_24 = 4;
  param_1[0x6d] = uVar1;
  FUN_00459020();
  FUN_00459050();
  FUN_004596a0();
  FUN_00459070();
  FUN_00459030();
  FUN_0041cd90();
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_4c,"font_01")
  ;
  uStack_24 = 0x12;
  FUN_004222d0();
  FUN_00458b20();
  uStack_24 = 4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_4c);
  FUN_00459690();
  (**(code **)(*(int *)param_1[0x6d] + 0x28))();
  FUN_0045e010();
  iVar7 = FUN_00493c27();
  uStack_28 = 0x13;
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iStack_d8 = 0x5354c0;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xffffff30,"EDITOR_SAVE_DLG");
    iStack_d8 = param_5;
    uStack_dc = 0;
    uStack_e0 = 0;
    uStack_e4 = param_2;
    uStack_e8 = 0x5354d4;
    iVar7 = FUN_005346c0();
  }
  param_1[0x5b] = iVar7;
  *(undefined4 **)(iVar7 + 0x174) = param_1;
  uStack_28 = 4;
  FUN_0041cac0();
  FUN_0045d8a0();
  iVar7 = FUN_00493c27();
  uStack_28 = 0x14;
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iStack_d8 = 0x535532;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xffffff30,"EDITOR_LOAD_DLG");
    iStack_d8 = param_5;
    uStack_dc = 0;
    uStack_e0 = 0;
    uStack_e4 = param_2;
    uStack_e8 = 0x535546;
    iVar7 = FUN_00533300();
  }
  param_1[0x5c] = iVar7;
  *(undefined4 **)(iVar7 + 0x19c) = param_1;
  uStack_28 = 4;
  FUN_0041cac0();
  FUN_0045d8a0();
  puVar6 = param_1 + 99;
  fVar12 = 270.0;
  local_70 = (undefined4 *)0x42a00000;
  uStack_6c = 0x42a00000;
  puStack_80 = (undefined1 *)0x41700000;
  local_7c = (undefined1 *)0x41700000;
  iVar7 = 10;
  do {
    fVar8 = (float10)fVar12 * (float10)_DAT_005b9004 * (float10)_DAT_00587fb8;
    local_88 = 0.0;
    fVar9 = (float10)fsin(fVar8);
    puStack_84 = (undefined1 *)0x0;
    local_78 = (undefined1 *)(float)fVar9;
    fVar8 = (float10)fcos(fVar8);
    local_74 = (undefined1 *)(float)-fVar8;
    FUN_0048e7f0();
    ppuStack_cc = &local_70;
    FUN_00459830();
    pfVar4 = (float *)FUN_0048e7d0();
    if (&local_88 != pfVar4) {
      local_88 = *pfVar4;
      puStack_84 = (undefined1 *)pfVar4[1];
    }
    iVar5 = FUN_00493c27();
    uStack_28 = 0x15;
    if (iVar5 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      FUN_004cf110();
      FUN_004cf110();
      FUN_004cf110();
      ppuStack_cc = (undefined4 **)0x53568a;
      ppuStack_cc = (undefined4 **)FUN_004cf110();
      piVar2 = (int *)FUN_0045ccc0();
    }
    uStack_28 = 4;
    *puVar6 = piVar2;
    (**(code **)(*piVar2 + 0x20))();
    FUN_0045e010();
    fVar12 = fVar12 + _DAT_00588de8;
    if (_DAT_00588de4 <= fVar12) {
      fVar12 = fVar12 - _DAT_00588de4;
    }
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  param_1[0x78] = 0;
  puVar6 = (undefined4 *)FUN_00493c27();
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_005057c0();
    *puVar6 = &PTR_LAB_005925d0;
  }
  param_1[0x86] = puVar6;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (abStack_50,"models\\pizza");
  FUN_0041c940();
  ppuStack_cc = (undefined4 **)0x53575e;
  FUN_00429280();
  FUN_004ffb10();
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_50);
  (**(code **)(*(int *)param_1[0x86] + 8))();
  (**(code **)(*(int *)param_1[0x86] + 4))();
  *(undefined4 *)(param_1[0x86] + 0x1ec) = 0x41200000;
  ppuStack_cc = (undefined4 **)0x5357b1;
  FUN_00423250();
  FUN_0042a4f0();
  FUN_00459730();
  FUN_00459780();
  FUN_00530ec0();
  ppuStack_cc = (undefined4 **)param_3;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  FUN_00532e50();
  uStack_30 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000018);
  ExceptionList = pvStack_38;
  return param_1;
}




/* Function: FUN_0054a150 */

void FUN_0054a150(void)

{
  undefined1 local_28 [8];
  undefined1 auStack_20 [12];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00580630;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_005537a0("DIALOG_REPLIC_T");
  local_c = 0;
  FUN_00553820(&DAT_005939f0,4);
  FUN_00553820(&DAT_005939ec,4);
  FUN_00553820(&DAT_00587eb8,4);
  FUN_00553820(&DAT_005939e8,4);
  FUN_00553820("bSelected",1);
  FUN_00553820(&DAT_005939d8,4);
  FUN_00553820("mQuestionID",4);
  FUN_00553ba0(local_28);
  local_c = 0xffffffff;
  FUN_00553920();
  FUN_005537a0("DIALOG_ANSWER_T");
  local_c = 1;
  FUN_00553820("mNextReplicID",4);
  FUN_00553820("mAnswerID",4);
  FUN_00553820("mResultID",4);
  FUN_00553ba0(auStack_20);
  local_c = 0xffffffff;
  FUN_00553920();
  ExceptionList = pvStack_14;
  return;
}




/* Function: FUN_0054aa40 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 __thiscall FUN_0054aa40(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *local_1050;
  int *local_104c;
  int local_1048;
  int local_1044;
  undefined4 *local_1040;
  char local_100c [4092];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005806b9;
  local_c = ExceptionList;
  uStack_10 = 0x54aa5f;
  ExceptionList = &local_c;
  local_1044 = param_1;
  FUN_00553ab0();
  local_4 = 0;
  iVar2 = FUN_00554200(param_2,2);
  if (iVar2 == 1) {
    FUN_0054a150();
    FUN_00553f50(FUN_0054a9c0,param_1);
    piVar1 = *(int **)(param_1 + 4);
    local_104c = piVar1;
    if (piVar1 != *(int **)(param_1 + 8)) {
      sprintf(local_100c,"%d",*(undefined4 *)*piVar1);
      FUN_005549e0(local_100c);
      iVar2 = FUN_00554ad0("DIALOG_REPLIC_T",0,0);
      puVar4 = (undefined4 *)thunk_FUN_00493c27(iVar2 * 0x19);
      local_1040 = puVar4;
      FUN_00554ad0("DIALOG_REPLIC_T",puVar4,iVar2);
      if (0 < iVar2) {
        local_1048 = iVar2;
        local_1050 = (undefined4 *)FUN_00493c27(0x2c);
        local_4._0_1_ = 1;
        if (local_1050 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = (undefined4 *)
                   FUN_0054a8c0(*(undefined4 *)((int)puVar4 + 0x11),
                                *(undefined4 *)((int)puVar4 + 0x15));
        }
        *(undefined1 *)(puVar5 + 4) = *(undefined1 *)(puVar4 + 4);
        puVar5[2] = puVar4[2];
        puVar5[3] = puVar4[3];
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[1];
        iVar2 = *piVar1;
        iVar6 = *(int *)(iVar2 + 8);
        local_4 = (uint)local_4._1_3_ << 8;
        local_1050 = puVar5;
        if ((iVar6 == 0) ||
           ((uint)(*(int *)(iVar2 + 0x10) - iVar6 >> 2) <=
            (uint)(*(int *)(iVar2 + 0xc) - iVar6 >> 2))) {
          FUN_0054a310(*(undefined4 *)(iVar2 + 0xc),1,&local_1050);
        }
        else {
          iVar6 = *(int *)(iVar2 + 0xc);
          FUN_004520c0(iVar6,1,&local_1050,iVar2 + 4,local_1044);
          *(int *)(iVar2 + 0xc) = iVar6 + 4;
        }
        sprintf(local_100c,"ANSWERS_%d",puVar5[5]);
        FUN_005549e0(local_100c);
        iVar2 = FUN_00554ad0("DIALOG_ANSWER_T",0,0);
        puVar4 = (undefined4 *)thunk_FUN_00493c27(iVar2 * 0xc);
        local_1050 = puVar4;
        FUN_00554ad0("DIALOG_ANSWER_T",puVar4,iVar2);
        if (0 < iVar2) {
          puVar5 = puVar4 + 2;
          do {
            iVar6 = FUN_0054a8f0(puVar5[-1],puVar5[-2]);
            uVar3 = *puVar5;
            puVar5 = puVar5 + 3;
            iVar2 = iVar2 + -1;
            *(undefined4 *)(iVar6 + 8) = uVar3;
            puVar4 = local_1050;
          } while (iVar2 != 0);
        }
        FUN_005549e0(&DAT_00593990);
                    /* WARNING: Subroutine does not return */
        operator_delete(puVar4);
      }
      FUN_005549e0(&DAT_00593990);
                    /* WARNING: Subroutine does not return */
      operator_delete(puVar4);
    }
    FUN_00554750();
    local_4 = 0xffffffff;
    FUN_00555010();
    uVar3 = 1;
  }
  else {
    local_4 = 0xffffffff;
    FUN_00555010();
    uVar3 = 0;
  }
  ExceptionList = local_c;
  return uVar3;
}





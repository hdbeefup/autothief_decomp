/* terrain functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_00465d40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FUN_00465d40(int param_1,undefined4 param_2,char *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 uVar1;
  float fVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  undefined4 *puVar18;
  uint unaff_retaddr;
  uint uStack_2a0;
  uint uStack_29c;
  void *pvStack_298;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_294 [28];
  int *piStack_278;
  int iStack_274;
  int iStack_270;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_26c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_250 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_234 [28];
  char acStack_218 [260];
  char acStack_114 [260];
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057c8e4;
  pvStack_c = ExceptionList;
  local_10 = DAT_005b12c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(param_1 + 0x1d8) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(param_1 + 0x1d8))(1);
  }
  pvVar4 = *(void **)(param_1 + 0x1dc);
  if (pvVar4 != (void *)0x0) {
    operator_delete__(*(void **)((int)pvVar4 + 0x400));
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar4);
  }
  if (*(undefined4 **)(param_1 + 0x1e0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1e0))(1);
  }
  if (*(undefined4 **)(param_1 + 0x88) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x88))(1);
  }
  if (*(undefined4 **)(param_1 + 0x8c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x8c))(1);
  }
  piStack_278 = (int *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  piVar16 = piStack_278;
  for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
    *piVar16 = 0;
    piVar16 = piVar16 + 1;
  }
  pvStack_298 = (void *)0x0;
  uStack_29c = 0;
  uStack_2a0 = 0;
  iVar12 = FUN_00461830(param_4,&uStack_29c,&uStack_2a0,&pvStack_298);
  if (iVar12 != 0) {
    puVar3 = operator_new(0x10,(nothrow_t *)&DAT_005b6164);
    uVar15 = uStack_29c;
    uVar6 = uStack_2a0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[2] = uStack_29c + 1;
      *puVar3 = &PTR_FUN_0058a768;
      puVar3[3] = uStack_2a0 + 1;
      pvVar4 = operator_new((uStack_29c + 1) * (uStack_2a0 + 1),(nothrow_t *)&DAT_005b6164);
      puVar3[1] = pvVar4;
      *puVar3 = &PTR_FUN_0058a788;
    }
    *(undefined4 **)(param_1 + 0x88) = puVar3;
    if ((uVar15 != 0x400) || (uVar6 != 0x400)) {
      uVar5 = FUN_0041e5b0("CTerrain: Bad terrain size %dx%d",uVar15,uVar6);
      uVar6 = FUN_0040a410(uVar5);
      ExceptionList = pvStack_c;
      return uVar6 & 0xffffff00;
    }
    uVar6 = 0;
    puVar7 = (undefined1 *)((int)pvStack_298 + 1);
    do {
      uVar15 = 0;
      do {
        puVar8 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x88) + 8))(uVar15,uVar6);
        uVar1 = *puVar7;
        uVar15 = uVar15 + 1;
        puVar7 = puVar7 + 3;
        *puVar8 = uVar1;
      } while (uVar15 < 0x400);
      puVar8 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x88) + 8))(0x3ff,uVar6);
      puVar9 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x88) + 8))(0x400,uVar6);
      uVar6 = uVar6 + 1;
      *puVar9 = *puVar8;
    } while (uVar6 < 0x400);
    uVar6 = 0;
    uVar15 = 0;
    do {
      puVar7 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x88) + 8))(uVar15,0x3ff);
      puVar8 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x88) + 8))(uVar15,0x400);
      uVar15 = uVar15 + 1;
      *puVar8 = *puVar7;
    } while (uVar15 < 0x401);
    operator_delete__(pvStack_298);
    pvStack_298 = (void *)0x0;
    iVar12 = FUN_00461830(param_5,&uStack_29c,&uStack_2a0,&pvStack_298);
    if (iVar12 != 0) {
      puVar3 = operator_new(0x10,(nothrow_t *)&DAT_005b6164);
      uVar15 = uStack_2a0;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = &PTR_FUN_0058a768;
        puVar3[2] = uStack_29c;
        puVar3[3] = uStack_2a0;
        pvVar4 = operator_new(uStack_2a0 * uStack_29c,(nothrow_t *)&DAT_005b6164);
        puVar3[1] = pvVar4;
        *puVar3 = &PTR_FUN_0058a788;
      }
      *(undefined4 **)(param_1 + 0x8c) = puVar3;
      iStack_270 = 0;
      if (uVar15 != 0) {
        iStack_274 = uStack_29c * 3;
        uVar10 = uStack_29c;
        do {
          uVar13 = 0;
          if (uVar10 != 0) {
            puVar7 = (undefined1 *)(iStack_270 + 1 + (int)pvStack_298);
            do {
              puVar8 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x8c) + 8))(uVar13,uVar6);
              *puVar8 = *puVar7;
              uVar13 = uVar13 + 1;
              puVar7 = puVar7 + 3;
              uVar10 = uStack_29c;
              uVar15 = uStack_2a0;
            } while (uVar13 < uStack_29c);
          }
          uVar6 = uVar6 + 1;
          iStack_270 = iStack_270 + iStack_274;
        } while (uVar6 < uVar15);
      }
      operator_delete__(pvStack_298);
      puVar3 = operator_new(0x10,(nothrow_t *)&DAT_005b6164);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar12 = *(int *)(*(int *)(param_1 + 0x88) + 0xc);
        iVar11 = *(int *)(*(int *)(param_1 + 0x88) + 8);
        puVar3[2] = iVar11;
        *puVar3 = &PTR_FUN_0058a768;
        puVar3[3] = iVar12;
        pvVar4 = operator_new(iVar11 * iVar12,(nothrow_t *)&DAT_005b6164);
        puVar3[1] = pvVar4;
        *puVar3 = &PTR_FUN_0058a788;
      }
      *(undefined4 **)(param_1 + 0x1d8) = puVar3;
      pvVar4 = operator_new(0x40c,(nothrow_t *)&DAT_005b6164);
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        *(undefined4 *)((int)pvVar4 + 0x400) = 0;
      }
      *(void **)(param_1 + 0x1dc) = pvVar4;
      _snprintf(acStack_218,0x104,".\\Textures\\Terrain\\%s\\",param_3);
      uVar5 = FUN_0041e5b0("CTerrain: using textures folder \'%s\'",acStack_218);
      FUN_0040a410(uVar5);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (abStack_26c,"detail");
      uStack_4 = 0;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (abStack_294,acStack_218);
      FUN_00429a60(abStack_294,abStack_26c,0);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_294);
      uStack_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_26c);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (abStack_26c,"detail");
      uVar5 = FUN_004222d0(abStack_26c);
      *(undefined4 *)(param_1 + 400) = uVar5;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_26c);
      piVar16 = piStack_278;
      for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
        *piVar16 = 0;
        piVar16 = piVar16 + 1;
      }
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (abStack_294,param_3);
      uStack_4 = 1;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (abStack_26c,acStack_218);
      FUN_00429a60(abStack_26c,abStack_294,1);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_26c);
      uStack_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_294);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (abStack_26c,param_3);
      iVar12 = FUN_004222d0(abStack_26c);
      piVar16 = piStack_278;
      *piStack_278 = iVar12;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_26c);
      if ((*piVar16 == 0) || (piVar17 = piVar16, *(int *)(param_1 + 0x94) != 0)) {
        uStack_2a0 = 0;
        do {
          _snprintf(acStack_114,0x80,"_%s_%d",param_3,uStack_2a0);
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (abStack_294,acStack_114);
          uStack_4 = 2;
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (abStack_26c,acStack_218);
          FUN_00429a60(abStack_26c,abStack_294,1);
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_26c)
          ;
          uStack_4 = 0xffffffff;
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_294)
          ;
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (abStack_250,acStack_114);
          iVar12 = FUN_004222d0(abStack_250);
          *piVar16 = iVar12;
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_250)
          ;
          if (*piVar16 == 0) {
            uVar5 = FUN_0041e5b0("CTerrain: \'%s\\%s\' texture is not available ",acStack_218,
                                 acStack_114);
            FUN_0040a410(uVar5);
            if (*(undefined4 **)(param_1 + 0x1d8) != (undefined4 *)0x0) {
              (**(code **)**(undefined4 **)(param_1 + 0x1d8))(1);
            }
            pvVar4 = *(void **)(param_1 + 0x1dc);
            if (pvVar4 == (void *)0x0) {
              if (*(undefined4 **)(param_1 + 0x1e0) != (undefined4 *)0x0) {
                (**(code **)**(undefined4 **)(param_1 + 0x1e0))(1);
              }
              if (*(undefined4 **)(param_1 + 0x88) != (undefined4 *)0x0) {
                (**(code **)**(undefined4 **)(param_1 + 0x88))(1);
              }
              *(undefined4 *)(param_1 + 0x1d8) = 0;
              *(undefined4 *)(param_1 + 0x1dc) = 0;
              *(undefined4 *)(param_1 + 0x1e0) = 0;
              *(undefined4 *)(param_1 + 0x88) = 0;
              for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
                *piStack_278 = 0;
                piStack_278 = piStack_278 + 1;
              }
              ExceptionList = pvStack_c;
              return 0;
            }
            operator_delete__(*(void **)((int)pvVar4 + 0x400));
                    /* WARNING: Subroutine does not return */
            operator_delete(pvVar4);
          }
          uStack_2a0 = uStack_2a0 + 1;
          piVar16 = piVar16 + 1;
          piVar17 = piStack_278;
        } while ((int)uStack_2a0 < 0x40);
      }
      if ((*piVar17 == 0) || (*(int *)(param_1 + 0x94) != 0)) {
        *(float *)(param_1 + 0x1f0) = _DAT_00588be0 / (float)*(int *)(*(int *)(param_1 + 0x88) + 8);
        fVar2 = _DAT_00588be0 / (float)*(int *)(*(int *)(param_1 + 0x88) + 0xc);
      }
      else {
        *(float *)(param_1 + 0x1f0) = _DAT_00583354 / (float)*(int *)(*(int *)(param_1 + 0x88) + 8);
        fVar2 = _DAT_00583354 / (float)*(int *)(*(int *)(param_1 + 0x88) + 0xc);
      }
      *(float *)(param_1 + 500) = fVar2;
      iVar12 = FUN_0041c920();
      iVar12 = *(int *)(iVar12 + 8);
      iVar11 = FUN_0041c920();
      if (*(int *)(iVar11 + 0xc) <= iVar12) {
        iVar12 = *(int *)(iVar11 + 0xc);
      }
      iStack_274 = 0;
      for (iVar11 = iVar12; 0 < iVar11; iVar11 = iVar11 >> 1) {
        iStack_274 = iStack_274 + 1;
      }
      iStack_274 = iStack_274 + -1;
      uVar5 = FUN_004cf110();
      *(undefined4 *)(param_1 + 0x200) = uVar5;
      *(undefined4 *)(param_1 + 0x1fc) = uVar5;
      if ((*piVar17 != 0) && (*(int *)(param_1 + 0x94) == 0)) {
        iVar11 = 0;
        for (; 0 < iVar12; iVar12 = iVar12 >> 1) {
          iVar11 = iVar11 + 1;
        }
        iVar12 = iVar11 * 2 + -2;
        *(int *)(param_1 + 0x200) = iVar12;
        *(int *)(param_1 + 0x1fc) = iVar12;
      }
      FUN_004657a0();
      uVar5 = FUN_0041e5b0("CTerrain: Initialized ok, subdivLevel = %d",
                           *(undefined4 *)(param_1 + 0x200));
      FUN_0040a410(uVar5);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (abStack_234,"default");
      puVar3 = (undefined4 *)FUN_004295a0(abStack_234);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_234);
      uVar5 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x194) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x198) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x19c) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x1a0) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x1a4) = 0x3e800000;
        *(undefined4 *)(param_1 + 0x1a8) = 0x3e800000;
        *(undefined4 *)(param_1 + 0x1ac) = 0x3e800000;
        *(undefined4 *)(param_1 + 0x1b0) = 0x3e800000;
        *(undefined4 *)(param_1 + 0x1b4) = 0;
        *(undefined4 *)(param_1 + 0x1b8) = 0;
        *(undefined4 *)(param_1 + 0x1bc) = 0;
        *(undefined4 *)(param_1 + 0x1c0) = 0;
        *(undefined4 *)(param_1 + 0x1c4) = 0x3c23d70a;
        *(undefined4 *)(param_1 + 0x1c8) = 0x3c23d70a;
        *(undefined4 *)(param_1 + 0x1cc) = 0x3c23d70a;
        *(undefined4 *)(param_1 + 0x1d0) = 0x3c23d70a;
        *(undefined4 *)(param_1 + 0x1d4) = 0;
      }
      else {
        puVar14 = puVar3;
        puVar18 = (undefined4 *)(param_1 + 0x194);
        for (iVar12 = 0x11; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar18 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar18 = puVar18 + 1;
        }
        uVar5 = puVar3[0x2b];
      }
      *(undefined4 *)(param_1 + 0x228) = uVar5;
      ExceptionList = pvStack_c;
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}




/* Function: FUN_00476b60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00476b60(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  float *pfVar8;
  float *pfVar9;
  int *piVar10;
  int iVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int *piVar14;
  int **ppiVar15;
  int *local_78;
  int local_74;
  int *local_70;
  int *piStack_6c;
  int *piStack_68;
  uint uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48 [5];
  int *local_34;
  undefined1 auStack_30 [12];
  int iStack_24;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057cc38;
  pvStack_c = ExceptionList;
  puVar13 = *(undefined4 **)(param_1 + 0x120);
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 300) = 0;
  local_74 = param_1;
  if (puVar13 != *(undefined4 **)(param_1 + 0x124)) {
    do {
      if ((void *)*puVar13 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar13);
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != *(undefined4 **)(param_1 + 0x124));
  }
  if (*(void **)(param_1 + 0x120) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x120));
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  piVar14 = *(int **)(param_1 + 0x1dc);
  if (piVar14 != *(int **)(param_1 + 0x1e0)) {
    do {
      if (*(int *)(*piVar14 + 0xec) == 0) {
        local_70 = operator_new(0x44,(nothrow_t *)&DAT_005b6164);
        if (local_70 == (int *)0x0) {
          local_70 = (int *)0x0;
        }
        else {
          local_70[4] = 0;
          local_70[5] = 0;
          local_70[6] = 0;
          local_70[7] = 0;
          local_70[8] = 0;
          local_70[9] = 0;
          local_70[10] = 0;
          local_70[0xb] = 0;
          local_70[0xc] = 0;
          *local_70 = 0;
          local_70[1] = 0;
          local_70[2] = 0;
          local_70[3] = 0;
          local_70[0xe] = 0;
          local_70[0xd] = 0;
          *(undefined1 *)(local_70 + 0x10) = 1;
          local_70[0xf] = 0;
          *(undefined1 *)((int)local_70 + 0x41) = 1;
          *(undefined1 *)((int)local_70 + 0x42) = 0;
        }
        local_70[3] = *piVar14;
        iVar11 = *piVar14;
        if ((int *)(iVar11 + 0x88) != local_70 + 4) {
          local_70[4] = *(int *)(iVar11 + 0x88);
          local_70[5] = *(int *)(iVar11 + 0x8c);
          local_70[6] = *(int *)(iVar11 + 0x90);
        }
        iVar11 = *piVar14;
        if ((int *)(iVar11 + 0x94) != local_70 + 7) {
          local_70[7] = *(int *)(iVar11 + 0x94);
          local_70[8] = *(int *)(iVar11 + 0x98);
          local_70[9] = *(int *)(iVar11 + 0x9c);
        }
        iVar11 = *piVar14;
        if ((int *)(iVar11 + 0xa0) != local_70 + 10) {
          local_70[10] = *(int *)(iVar11 + 0xa0);
          local_70[0xb] = *(int *)(iVar11 + 0xa4);
          local_70[0xc] = *(int *)(iVar11 + 0xa8);
        }
        local_70[0xd] = *(int *)(*piVar14 + 0xac);
        iVar11 = *(int *)(param_1 + 0x120);
        if ((iVar11 == 0) ||
           ((uint)(*(int *)(param_1 + 0x128) - iVar11 >> 2) <=
            (uint)(*(int *)(param_1 + 0x124) - iVar11 >> 2))) {
          FUN_00473a00(*(undefined4 *)(param_1 + 0x124),1,&local_70);
        }
        else {
          iVar11 = *(int *)(param_1 + 0x124);
          FUN_004520c0(iVar11,1,&local_70,param_1 + 0x11c,param_2);
          *(int *)(param_1 + 0x124) = iVar11 + 4;
          param_1 = local_74;
        }
      }
      piVar14 = piVar14 + 1;
    } while (piVar14 != *(int **)(param_1 + 0x1e0));
  }
  local_70 = *(int **)(param_1 + 0x2ec);
  if (local_70 != *(int **)(param_1 + 0x2f0)) {
    do {
      piVar3 = operator_new(0x44,(nothrow_t *)&DAT_005b6164);
      piVar14 = (int *)0x0;
      if (piVar3 != (int *)0x0) {
        piVar3[4] = 0;
        piVar3[5] = 0;
        piVar3[6] = 0;
        piVar3[7] = 0;
        piVar3[8] = 0;
        piVar3[9] = 0;
        piVar3[10] = 0;
        piVar3[0xb] = 0;
        piVar3[0xc] = 0;
        *piVar3 = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[0xe] = 0;
        piVar3[0xd] = 0;
        piVar3[0xf] = 0;
        *(undefined1 *)(piVar3 + 0x10) = 1;
        *(undefined1 *)((int)piVar3 + 0x41) = 1;
        *(undefined1 *)((int)piVar3 + 0x42) = 0;
        piVar14 = piVar3;
      }
      piVar14[0xf] = *local_70;
      piVar3 = (int *)*local_70;
      local_78 = piVar14;
      FUN_004ffac0();
      uVar4 = FUN_0043f940();
      FUN_004ffac0();
      uVar5 = FUN_0043f930();
      uVar6 = (**(code **)(*piVar3 + 0x88))();
      FUN_004306e0(uVar5,uVar4,uVar6);
      piVar3 = piVar14 + 4;
      local_34 = piStack_1c;
      if (local_48 + 3 != piVar3) {
        piVar14[5] = (int)piStack_20;
        *piVar3 = iStack_24;
        piVar14[6] = (int)piStack_1c;
      }
      piVar1 = piVar14 + 7;
      local_48[2] = iStack_10;
      if (local_48 != piVar1) {
        piVar14[8] = iStack_14;
        *piVar1 = iStack_18;
        piVar14[9] = iStack_10;
      }
      uVar4 = FUN_0041d550(&iStack_54,piVar3,piVar1,0x40000000);
      piVar7 = (int *)FUN_0043fa40(&iStack_60,uVar4);
      if (piVar7 != piVar14 + 10) {
        piVar14[10] = *piVar7;
        piVar14[0xb] = piVar7[1];
        piVar14[0xc] = piVar7[2];
      }
      pfVar8 = (float *)FUN_0041d580(auStack_30,piVar1,piVar3);
      iVar2 = local_74;
      piVar14[0xd] = (int)(SQRT(pfVar8[2] * pfVar8[2] + pfVar8[1] * pfVar8[1] + *pfVar8 * *pfVar8) *
                          _DAT_00583340);
      iVar11 = *(int *)(local_74 + 0x120);
      if ((iVar11 == 0) ||
         ((uint)(*(int *)(local_74 + 0x128) - iVar11 >> 2) <=
          (uint)(*(int *)(local_74 + 0x124) - iVar11 >> 2))) {
        FUN_00473a00(*(undefined4 *)(local_74 + 0x124),1,&local_78);
      }
      else {
        iVar11 = *(int *)(local_74 + 0x124);
        FUN_004520c0(iVar11,1,&local_78,local_74 + 0x11c,param_2);
        *(int *)(iVar2 + 0x124) = iVar11 + 4;
      }
      local_70 = local_70 + 1;
    } while (local_70 != *(int **)(iVar2 + 0x2f0));
  }
  piVar14 = *(int **)(local_74 + 0x17c);
  if (piVar14 != *(int **)(local_74 + 0x180)) {
    local_48[0] = 0;
    local_48[1] = 0x42c80000;
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[4] = 0x43fa0000;
    local_34 = (int *)0x0;
    do {
      iVar2 = local_74;
      iVar11 = *piVar14;
      FUN_0041d580(&iStack_60,iVar11 + 0x2c,local_48);
      FUN_0041d550(&iStack_54,iVar11 + 0x38,local_48 + 3);
      local_70 = operator_new(0x44,(nothrow_t *)&DAT_005b6164);
      if (local_70 == (int *)0x0) {
        local_70 = (int *)0x0;
      }
      else {
        local_70[4] = 0;
        local_70[5] = 0;
        local_70[6] = 0;
        local_70[7] = 0;
        local_70[8] = 0;
        local_70[9] = 0;
        local_70[10] = 0;
        local_70[0xb] = 0;
        local_70[0xc] = 0;
        *local_70 = 0;
        local_70[1] = 0;
        local_70[2] = 0;
        local_70[3] = 0;
        local_70[0xe] = 0;
        local_70[0xd] = 0;
        *(undefined1 *)(local_70 + 0x10) = 1;
        local_70[0xf] = 0;
        *(undefined1 *)((int)local_70 + 0x41) = 1;
        *(undefined1 *)((int)local_70 + 0x42) = 0;
      }
      local_70[2] = *piVar14;
      if (&iStack_60 != local_70 + 4) {
        local_70[4] = iStack_60;
        local_70[5] = iStack_5c;
        local_70[6] = iStack_58;
      }
      if (&iStack_54 != local_70 + 7) {
        local_70[7] = iStack_54;
        local_70[8] = iStack_50;
        local_70[9] = iStack_4c;
      }
      iVar11 = *piVar14;
      if ((int *)(iVar11 + 0x44) != local_70 + 10) {
        local_70[10] = *(int *)(iVar11 + 0x44);
        local_70[0xb] = *(int *)(iVar11 + 0x48);
        local_70[0xc] = *(int *)(iVar11 + 0x4c);
      }
      local_70[0xd] = *(int *)(*piVar14 + 0x50);
      iVar11 = *(int *)(iVar2 + 0x120);
      if ((iVar11 == 0) ||
         ((uint)(*(int *)(iVar2 + 0x128) - iVar11 >> 2) <=
          (uint)(*(int *)(iVar2 + 0x124) - iVar11 >> 2))) {
        FUN_00473a00(*(undefined4 *)(iVar2 + 0x124),1,&local_70);
      }
      else {
        iVar11 = *(int *)(iVar2 + 0x124);
        FUN_004520c0(iVar11,1,&local_70,iVar2 + 0x11c,param_2);
        *(int *)(iVar2 + 0x124) = iVar11 + 4;
      }
      piVar14 = piVar14 + 1;
    } while (piVar14 != *(int **)(local_74 + 0x180));
  }
  FUN_00474070(local_74 + 0x11c);
  uStack_4 = 0;
  piVar14 = piStack_20;
  piVar3 = piStack_1c;
joined_r0x004770f7:
  do {
    piVar1 = piStack_20;
    if (piVar14 != piVar3) {
      if (*(char *)(*piVar14 + 0x40) == '\0') {
        piVar14 = piVar14 + 1;
        goto joined_r0x004770f7;
      }
      local_78 = (int *)*piVar14;
      if (piVar14 != piVar3) {
        piVar7 = piVar14 + 1;
        if (piVar7 != piVar3) {
          iVar11 = (int)piVar14 - (int)piVar7;
          do {
            *(int *)((int)piVar7 + iVar11) = *piVar7;
            piVar7 = piVar7 + 1;
          } while (piVar7 != piVar3);
        }
        piVar7 = piVar3 + -1;
        piStack_1c = piVar7;
        if ((piStack_20 == (int *)0x0) ||
           (uStack_64 = (int)piVar7 - (int)piStack_20 >> 2, uStack_64 == 0)) {
          *(int **)(local_74 + 300) = local_78;
          if (*(int *)(local_74 + 0x120) == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = *(int *)(local_74 + 0x124) - *(int *)(local_74 + 0x120) >> 2;
          }
          uVar4 = FUN_0041e5b0("CRoadNetwork::BuildTreeRenderable () - %d leafs in tree root = %p",
                               iVar11,*(undefined4 *)(local_74 + 0x104));
          FUN_0040a410(uVar4);
          if (piStack_20 == (int *)0x0) {
            ExceptionList = pvStack_c;
            return;
          }
                    /* WARNING: Subroutine does not return */
          operator_delete(piStack_20);
        }
        piStack_68 = piVar7;
        piStack_6c = (int *)std::numeric_limits<float>::max();
        local_70 = piVar1;
        piVar14 = piStack_20;
        if (piVar1 == piVar7) {
joined_r0x004773cd:
          for (; piVar14 != piVar7; piVar14 = piVar14 + 1) {
            *(undefined1 *)(*piVar14 + 0x40) = 1;
          }
          if ((uint)(iStack_18 - (int)piStack_20 >> 2) <= uStack_64) {
            ppiVar15 = &local_78;
LAB_0047741a:
            FUN_00473a00(piVar7,1,ppiVar15);
            piVar14 = piStack_20;
            piVar3 = piStack_1c;
            goto joined_r0x004770f7;
          }
          ppiVar15 = &local_78;
        }
        else {
          do {
            iVar11 = *local_70;
            if (*(char *)(iVar11 + 0x40) != '\0') {
              piVar14 = local_78 + 10;
              pfVar8 = (float *)FUN_0041d580(auStack_30,iVar11 + 0x28,piVar14);
              pfVar9 = (float *)FUN_0041d580(local_48 + 3,iVar11 + 0x28,piVar14);
              piVar14 = (int *)(*pfVar9 * *pfVar8 + pfVar9[1] * pfVar8[1] + pfVar9[2] * pfVar8[2]);
              if (((*(int *)(iVar11 + 8) == 0) && (*(int *)(iVar11 + 0xc) == 0)) &&
                 (*(int *)(iVar11 + 0x38) == 0)) {
                piVar14 = (int *)((float)piVar14 * _DAT_00587d94);
              }
              if ((float)piVar14 < (float)piStack_6c) {
                piStack_68 = local_70;
                piStack_6c = piVar14;
              }
            }
            piVar1 = piStack_68;
            local_70 = local_70 + 1;
          } while (local_70 != piVar7);
          piVar14 = piStack_20;
          if (piStack_68 == piVar7) goto joined_r0x004773cd;
          piVar10 = operator_new(0x44,(nothrow_t *)&DAT_005b6164);
          piVar14 = (int *)0x0;
          if (piVar10 != (int *)0x0) {
            piVar10[4] = 0;
            piVar10[5] = 0;
            piVar10[6] = 0;
            piVar10[7] = 0;
            piVar10[8] = 0;
            piVar10[9] = 0;
            piVar10[10] = 0;
            piVar10[0xb] = 0;
            piVar10[0xc] = 0;
            *piVar10 = 0;
            piVar10[1] = 0;
            piVar10[2] = 0;
            piVar10[3] = 0;
            piVar10[0xe] = 0;
            piVar10[0xd] = 0;
            piVar10[0xf] = 0;
            *(undefined1 *)(piVar10 + 0x10) = 1;
            *(undefined1 *)((int)piVar10 + 0x41) = 1;
            *(undefined1 *)((int)piVar10 + 0x42) = 0;
            piVar14 = piVar10;
          }
          *piVar14 = (int)local_78;
          piVar14[1] = *piVar1;
          iVar11 = *piVar1;
          pfVar8 = (float *)(piVar14 + 4);
          if ((float *)(iVar11 + 0x10) != pfVar8) {
            *pfVar8 = *(float *)(iVar11 + 0x10);
            piVar14[5] = *(int *)(iVar11 + 0x14);
            piVar14[6] = *(int *)(iVar11 + 0x18);
          }
          iVar11 = *piVar1;
          if ((int *)(iVar11 + 0x1c) != piVar14 + 7) {
            piVar14[7] = *(int *)(iVar11 + 0x1c);
            piVar14[8] = *(int *)(iVar11 + 0x20);
            piVar14[9] = *(int *)(iVar11 + 0x24);
          }
          piVar10 = piVar1 + 1;
          *(undefined1 *)(piVar14 + 0x10) = 0;
          if (piVar10 != piVar7) {
            iVar11 = (int)piVar1 - (int)piVar10;
            do {
              *(int *)((int)piVar10 + iVar11) = *piVar10;
              piVar10 = piVar10 + 1;
            } while (piVar10 != piVar7);
          }
          piVar7 = piVar3 + -2;
          pfVar12 = (float *)(local_78 + 7);
          piStack_68 = (int *)0x3;
          pfVar9 = pfVar8;
          do {
            if (*(float *)(((int)local_78 - (int)piVar14) + (int)pfVar9) < *pfVar9) {
              *pfVar9 = *(float *)(((int)local_78 - (int)piVar14) + (int)pfVar9);
            }
            if (pfVar9[3] < *pfVar12) {
              pfVar9[3] = *pfVar12;
            }
            pfVar9 = pfVar9 + 1;
            pfVar12 = pfVar12 + 1;
            piStack_68 = (int *)((int)piStack_68 + -1);
          } while (piStack_68 != (int *)0x0);
          piStack_6c = piVar14;
          piStack_1c = piVar7;
          uVar4 = FUN_0041d550(local_48,pfVar8,piVar14 + 7,0x40000000);
          piVar3 = (int *)FUN_0043fa40(&iStack_54,uVar4);
          if (piVar3 != piVar14 + 10) {
            piVar14[10] = *piVar3;
            piVar14[0xb] = piVar3[1];
            piVar14[0xc] = piVar3[2];
          }
          pfVar8 = (float *)FUN_0041d580(&iStack_60,pfVar8,piVar14 + 7);
          piVar14[0xd] = (int)SQRT(pfVar8[2] * pfVar8[2] + pfVar8[1] * pfVar8[1] + *pfVar8 * *pfVar8
                                  );
          if ((uint)(iStack_18 - (int)piStack_20 >> 2) <= (uint)((int)piVar7 - (int)piStack_20 >> 2)
             ) {
            ppiVar15 = &piStack_6c;
            goto LAB_0047741a;
          }
          ppiVar15 = &piStack_6c;
        }
        FUN_004520c0(piVar7,1,ppiVar15,&iStack_24,param_2);
        piVar14 = piStack_20;
        piVar3 = piVar7 + 1;
        goto joined_r0x004770f7;
      }
    }
    for (; piVar14 = piStack_20, piVar1 != piVar3; piVar1 = piVar1 + 1) {
      *(undefined1 *)(*piVar1 + 0x40) = 1;
    }
  } while( true );
}




/* Function: FUN_00479450 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00479450(int param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  float *pfVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  int **ppiVar14;
  int *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
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
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057cd08;
  local_c = ExceptionList;
  puVar11 = *(undefined4 **)(param_1 + 0x110);
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x104) = 0;
  if (puVar11 != *(undefined4 **)(param_1 + 0x114)) {
    do {
      pvVar1 = (void *)*puVar11;
      if ((*(char *)((int)pvVar1 + 0x41) != '\0') && (pvVar1 != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != *(undefined4 **)(param_1 + 0x114));
  }
  if (*(void **)(param_1 + 0x110) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x110));
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  iVar12 = *(int *)(param_1 + 0x218);
  if (iVar12 != *(int *)(param_1 + 0x21c)) {
    do {
      iVar2 = *(int *)(param_1 + 0x110);
      if ((iVar2 == 0) ||
         ((uint)(*(int *)(param_1 + 0x118) - iVar2 >> 2) <=
          (uint)(*(int *)(param_1 + 0x114) - iVar2 >> 2))) {
        FUN_00473a00(*(undefined4 *)(param_1 + 0x114),1,iVar12);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x114);
        FUN_004520c0(iVar2,1,iVar12,param_1 + 0x10c,param_2);
        *(int *)(param_1 + 0x114) = iVar2 + 4;
      }
      iVar12 = iVar12 + 4;
    } while (iVar12 != *(int *)(param_1 + 0x21c));
  }
  piVar13 = *(int **)(param_1 + 0x1dc);
  if (piVar13 != *(int **)(param_1 + 0x1e0)) {
    do {
      if (*(char *)(*piVar13 + 0xbb) != '\0') {
        local_68 = operator_new(0x44,(nothrow_t *)&DAT_005b6164);
        if (local_68 == (int *)0x0) {
          local_68 = (int *)0x0;
        }
        else {
          local_68[4] = 0;
          local_68[5] = 0;
          local_68[6] = 0;
          local_68[7] = 0;
          local_68[8] = 0;
          local_68[9] = 0;
          local_68[10] = 0;
          local_68[0xb] = 0;
          local_68[0xc] = 0;
          *local_68 = 0;
          local_68[1] = 0;
          local_68[2] = 0;
          local_68[3] = 0;
          local_68[0xe] = 0;
          local_68[0xd] = 0;
          *(undefined1 *)(local_68 + 0x10) = 1;
          local_68[0xf] = 0;
          *(undefined1 *)((int)local_68 + 0x41) = 1;
          *(undefined1 *)((int)local_68 + 0x42) = 0;
        }
        local_68[3] = *piVar13;
        iVar12 = *piVar13;
        if ((int *)(iVar12 + 0x88) != local_68 + 4) {
          local_68[4] = *(int *)(iVar12 + 0x88);
          local_68[5] = *(int *)(iVar12 + 0x8c);
          local_68[6] = *(int *)(iVar12 + 0x90);
        }
        iVar12 = *piVar13;
        if ((int *)(iVar12 + 0x94) != local_68 + 7) {
          local_68[7] = *(int *)(iVar12 + 0x94);
          local_68[8] = *(int *)(iVar12 + 0x98);
          local_68[9] = *(int *)(iVar12 + 0x9c);
        }
        iVar12 = *piVar13;
        if ((int *)(iVar12 + 0xa0) != local_68 + 10) {
          local_68[10] = *(int *)(iVar12 + 0xa0);
          local_68[0xb] = *(int *)(iVar12 + 0xa4);
          local_68[0xc] = *(int *)(iVar12 + 0xa8);
        }
        local_68[0xd] = *(int *)(*piVar13 + 0xac);
        iVar12 = *(int *)(param_1 + 0x110);
        if ((iVar12 == 0) ||
           ((uint)(*(int *)(param_1 + 0x118) - iVar12 >> 2) <=
            (uint)(*(int *)(param_1 + 0x114) - iVar12 >> 2))) {
          FUN_00473a00(*(undefined4 *)(param_1 + 0x114),1,&local_68);
        }
        else {
          iVar12 = *(int *)(param_1 + 0x114);
          FUN_004520c0(iVar12,1,&local_68,param_1 + 0x10c,param_2);
          *(int *)(param_1 + 0x114) = iVar12 + 4;
        }
      }
      piVar13 = piVar13 + 1;
    } while (piVar13 != *(int **)(param_1 + 0x1e0));
  }
  piVar13 = *(int **)(param_1 + 0x17c);
  if (piVar13 != *(int **)(param_1 + 0x180)) {
    do {
      iVar12 = *piVar13;
      local_58 = *(int *)(iVar12 + 0x2c);
      local_54 = *(int *)(iVar12 + 0x30);
      local_50 = *(int *)(iVar12 + 0x34);
      local_4c = *(int *)(iVar12 + 0x38);
      local_48 = *(int *)(iVar12 + 0x3c);
      local_44 = *(int *)(iVar12 + 0x40);
      local_68 = operator_new(0x44,(nothrow_t *)&DAT_005b6164);
      if (local_68 == (int *)0x0) {
        local_68 = (int *)0x0;
      }
      else {
        local_68[4] = 0;
        local_68[5] = 0;
        local_68[6] = 0;
        local_68[7] = 0;
        local_68[8] = 0;
        local_68[9] = 0;
        local_68[10] = 0;
        local_68[0xb] = 0;
        local_68[0xc] = 0;
        *local_68 = 0;
        local_68[1] = 0;
        local_68[2] = 0;
        local_68[3] = 0;
        local_68[0xe] = 0;
        local_68[0xd] = 0;
        *(undefined1 *)(local_68 + 0x10) = 1;
        local_68[0xf] = 0;
        *(undefined1 *)((int)local_68 + 0x41) = 1;
        *(undefined1 *)((int)local_68 + 0x42) = 0;
      }
      local_68[2] = *piVar13;
      if (&local_58 != local_68 + 4) {
        local_68[4] = local_58;
        local_68[5] = local_54;
        local_68[6] = local_50;
      }
      if (&local_4c != local_68 + 7) {
        local_68[7] = local_4c;
        local_68[8] = local_48;
        local_68[9] = local_44;
      }
      iVar12 = *piVar13;
      if ((int *)(iVar12 + 0x44) != local_68 + 10) {
        local_68[10] = *(int *)(iVar12 + 0x44);
        local_68[0xb] = *(int *)(iVar12 + 0x48);
        local_68[0xc] = *(int *)(iVar12 + 0x4c);
      }
      local_68[0xd] = *(int *)(*piVar13 + 0x50);
      iVar12 = *(int *)(param_1 + 0x110);
      if ((iVar12 == 0) ||
         ((uint)(*(int *)(param_1 + 0x118) - iVar12 >> 2) <=
          (uint)(*(int *)(param_1 + 0x114) - iVar12 >> 2))) {
        FUN_00473a00(*(undefined4 *)(param_1 + 0x114),1,&local_68);
      }
      else {
        iVar12 = *(int *)(param_1 + 0x114);
        FUN_004520c0(iVar12,1,&local_68,param_1 + 0x10c,param_2);
        *(int *)(param_1 + 0x114) = iVar12 + 4;
      }
      piVar13 = piVar13 + 1;
    } while (piVar13 != *(int **)(param_1 + 0x180));
  }
  FUN_00474070(param_1 + 0x10c);
  local_4 = 0;
  piVar13 = local_18;
  piVar9 = local_14;
joined_r0x00479859:
  do {
    piVar3 = local_18;
    if (piVar13 != piVar9) {
      if (*(char *)(*piVar13 + 0x40) == '\0') {
        piVar13 = piVar13 + 1;
        goto joined_r0x00479859;
      }
      local_6c = (int *)*piVar13;
      if (piVar13 != piVar9) {
        piVar4 = piVar13 + 1;
        if (piVar4 != piVar9) {
          iVar12 = (int)piVar13 - (int)piVar4;
          do {
            *(int *)(iVar12 + (int)piVar4) = *piVar4;
            piVar4 = piVar4 + 1;
          } while (piVar4 != piVar9);
        }
        piVar4 = piVar9 + -1;
        local_14 = piVar4;
        if ((local_18 == (int *)0x0) || (local_5c = (int)piVar4 - (int)local_18 >> 2, local_5c == 0)
           ) {
          *(int **)(param_1 + 0x104) = local_6c;
          if (*(int *)(param_1 + 0x110) == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = *(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110) >> 2;
          }
          uVar8 = FUN_0041e5b0("CRoadNetwork::BuildTree () - %d leafs in tree root = %p",iVar12,
                               local_6c);
          FUN_0040a410(uVar8);
          FUN_00476b60(param_2);
          if (local_18 == (int *)0x0) {
            ExceptionList = local_c;
            return;
          }
                    /* WARNING: Subroutine does not return */
          operator_delete(local_18);
        }
        local_60 = piVar4;
        local_64 = (int *)std::numeric_limits<float>::max();
        local_68 = piVar3;
        piVar13 = local_18;
        if (piVar3 == piVar4) {
joined_r0x00479b2d:
          for (; piVar13 != piVar4; piVar13 = piVar13 + 1) {
            *(undefined1 *)(*piVar13 + 0x40) = 1;
          }
          if ((uint)(local_10 - (int)local_18 >> 2) <= local_5c) {
            ppiVar14 = &local_6c;
LAB_00479b7a:
            FUN_00473a00(piVar4,1,ppiVar14);
            piVar13 = local_18;
            piVar9 = local_14;
            goto joined_r0x00479859;
          }
          ppiVar14 = &local_6c;
        }
        else {
          do {
            iVar12 = *local_68;
            if (*(char *)(iVar12 + 0x40) != '\0') {
              piVar13 = local_6c + 10;
              pfVar5 = (float *)FUN_0041d580(&local_4c,iVar12 + 0x28,piVar13);
              pfVar6 = (float *)FUN_0041d580(&local_58,iVar12 + 0x28,piVar13);
              piVar13 = (int *)(*pfVar6 * *pfVar5 + pfVar6[1] * pfVar5[1] + pfVar6[2] * pfVar5[2]);
              if (((*(int *)(iVar12 + 8) == 0) && (*(int *)(iVar12 + 0xc) == 0)) &&
                 (*(int *)(iVar12 + 0x38) == 0)) {
                piVar13 = (int *)((float)piVar13 * _DAT_00587d94);
              }
              if ((float)piVar13 < (float)local_64) {
                local_60 = local_68;
                local_64 = piVar13;
              }
            }
            piVar3 = local_60;
            local_68 = local_68 + 1;
          } while (local_68 != piVar4);
          piVar13 = local_18;
          if (local_60 == piVar4) goto joined_r0x00479b2d;
          piVar7 = operator_new(0x44,(nothrow_t *)&DAT_005b6164);
          piVar13 = (int *)0x0;
          if (piVar7 != (int *)0x0) {
            piVar7[4] = 0;
            piVar7[5] = 0;
            piVar7[6] = 0;
            piVar7[7] = 0;
            piVar7[8] = 0;
            piVar7[9] = 0;
            piVar7[10] = 0;
            piVar7[0xb] = 0;
            piVar7[0xc] = 0;
            *piVar7 = 0;
            piVar7[1] = 0;
            piVar7[2] = 0;
            piVar7[3] = 0;
            piVar7[0xe] = 0;
            piVar7[0xd] = 0;
            piVar7[0xf] = 0;
            *(undefined1 *)(piVar7 + 0x10) = 1;
            *(undefined1 *)((int)piVar7 + 0x41) = 1;
            *(undefined1 *)((int)piVar7 + 0x42) = 0;
            piVar13 = piVar7;
          }
          *piVar13 = (int)local_6c;
          piVar13[1] = *piVar3;
          iVar12 = *piVar3;
          pfVar5 = (float *)(piVar13 + 4);
          if ((float *)(iVar12 + 0x10) != pfVar5) {
            *pfVar5 = *(float *)(iVar12 + 0x10);
            piVar13[5] = *(int *)(iVar12 + 0x14);
            piVar13[6] = *(int *)(iVar12 + 0x18);
          }
          iVar12 = *piVar3;
          if ((int *)(iVar12 + 0x1c) != piVar13 + 7) {
            piVar13[7] = *(int *)(iVar12 + 0x1c);
            piVar13[8] = *(int *)(iVar12 + 0x20);
            piVar13[9] = *(int *)(iVar12 + 0x24);
          }
          piVar7 = piVar3 + 1;
          *(undefined1 *)(piVar13 + 0x10) = 0;
          if (piVar7 != piVar4) {
            iVar12 = (int)piVar3 - (int)piVar7;
            do {
              *(int *)(iVar12 + (int)piVar7) = *piVar7;
              piVar7 = piVar7 + 1;
            } while (piVar7 != piVar4);
          }
          piVar4 = piVar9 + -2;
          pfVar10 = (float *)(local_6c + 7);
          local_60 = (int *)0x3;
          pfVar6 = pfVar5;
          do {
            if (*(float *)(((int)local_6c - (int)piVar13) + (int)pfVar6) < *pfVar6) {
              *pfVar6 = *(float *)(((int)local_6c - (int)piVar13) + (int)pfVar6);
            }
            if (pfVar6[3] < *pfVar10) {
              pfVar6[3] = *pfVar10;
            }
            pfVar6 = pfVar6 + 1;
            pfVar10 = pfVar10 + 1;
            local_60 = (int *)((int)local_60 + -1);
          } while (local_60 != (int *)0x0);
          local_64 = piVar13;
          local_14 = piVar4;
          uVar8 = FUN_0041d550(local_40,pfVar5,piVar13 + 7,0x40000000);
          piVar9 = (int *)FUN_0043fa40(local_34,uVar8);
          if (piVar9 != piVar13 + 10) {
            piVar13[10] = *piVar9;
            piVar13[0xb] = piVar9[1];
            piVar13[0xc] = piVar9[2];
          }
          pfVar5 = (float *)FUN_0041d580(local_28,pfVar5,piVar13 + 7);
          piVar13[0xd] = (int)SQRT(pfVar5[2] * pfVar5[2] + pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5
                                  );
          if ((uint)(local_10 - (int)local_18 >> 2) <= (uint)((int)piVar4 - (int)local_18 >> 2)) {
            ppiVar14 = &local_64;
            goto LAB_00479b7a;
          }
          ppiVar14 = &local_64;
        }
        FUN_004520c0(piVar4,1,ppiVar14,local_1c,param_2);
        piVar13 = local_18;
        piVar9 = piVar4 + 1;
        goto joined_r0x00479859;
      }
    }
    for (; piVar13 = local_18, piVar3 != piVar9; piVar3 = piVar3 + 1) {
      *(undefined1 *)(*piVar3 + 0x40) = 1;
    }
  } while( true );
}




/* Function: FUN_004803b0 */

undefined4 __thiscall FUN_004803b0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x88) = param_3;
  if (((param_3 != 0) && (*(int *)(param_3 + 0x8c) != 0)) && (*(int *)(param_3 + 0x88) != 0)) {
    return 1;
  }
  uVar1 = FUN_0041e5b0("CRoadNetwork: terrain missed information");
  FUN_0040a410(uVar1);
  return 0;
}




/* Function: FUN_00483c80 */

void __thiscall FUN_00483c80(int param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int *local_30;
  undefined4 *local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057cf75;
  local_c = ExceptionList;
  puVar4 = *(undefined4 **)(param_1 + 0x1ac);
  local_20 = param_1;
  if (puVar4 != *(undefined4 **)(param_1 + 0x1b0)) {
    do {
      if ((void *)*puVar4 != (void *)0x0) {
        ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar4);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined4 **)(param_1 + 0x1b0));
  }
  if (*(void **)(param_1 + 0x1ac) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x1ac));
  }
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  puVar4 = *(undefined4 **)(param_1 + 200);
  if (puVar4 != *(undefined4 **)(param_1 + 0xcc)) {
    do {
      pvVar1 = (void *)*puVar4;
      if (pvVar1 != (void *)0x0) {
        if (*(void **)((int)pvVar1 + 0xc) == (void *)0x0) {
          *(undefined4 *)((int)pvVar1 + 0xc) = 0;
          *(undefined4 *)((int)pvVar1 + 0x10) = 0;
          *(undefined4 *)((int)pvVar1 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
          operator_delete(pvVar1);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)((int)pvVar1 + 0xc));
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined4 **)(param_1 + 0xcc));
  }
  local_28 = param_1 + 0xc4;
  if (*(void **)(param_1 + 200) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 200));
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  puVar4 = *(undefined4 **)(param_1 + 0xe8);
  if (puVar4 != *(undefined4 **)(param_1 + 0xec)) {
    do {
      pvVar1 = (void *)*puVar4;
      if (pvVar1 != (void *)0x0) {
        if (*(void **)((int)pvVar1 + 0xc) == (void *)0x0) {
          *(undefined4 *)((int)pvVar1 + 0xc) = 0;
          *(undefined4 *)((int)pvVar1 + 0x10) = 0;
          *(undefined4 *)((int)pvVar1 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
          operator_delete(pvVar1);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)((int)pvVar1 + 0xc));
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined4 **)(param_1 + 0xec));
  }
  if (*(void **)(param_1 + 0xe8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0xe8));
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  for (uVar8 = 0;
      (iVar10 = *(int *)(param_1 + 0x98), iVar10 != 0 &&
      (uVar8 < (uint)(*(int *)(param_1 + 0x9c) - iVar10 >> 2))); uVar8 = uVar8 + 1) {
    *(undefined4 *)(*(int *)(iVar10 + uVar8 * 4) + 0x24) = 0;
  }
LAB_00483df4:
  puVar4 = operator_new(0x44,(nothrow_t *)&DAT_005b6164);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    *(undefined1 *)(puVar4 + 0x10) = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  local_4 = 0xffffffff;
  uVar8 = 0;
  do {
    iVar10 = local_20;
    local_2c = puVar4;
    local_24 = puVar4;
    if ((*(int *)(local_20 + 0x98) == 0) ||
       ((uint)(*(int *)(local_20 + 0x9c) - *(int *)(local_20 + 0x98) >> 2) <= uVar8))
    goto LAB_00484150;
    iVar13 = *(int *)(*(int *)(*(int *)(local_20 + 0x98) + uVar8 * 4) + 8);
    iVar2 = *(int *)(iVar13 + 4);
    if ((iVar2 != 0) && (1 < (uint)(*(int *)(iVar13 + 8) - iVar2 >> 2))) {
      iVar13 = *(int *)(*(int *)(local_20 + 0x98) + uVar8 * 4);
      if ((*(byte *)(iVar13 + 0x24) & 1) == 0) {
        *(undefined1 *)(puVar4 + 0x10) = 1;
        iVar13 = *(int *)(uVar8 * 4 + *(int *)(local_20 + 0x98));
        uVar11 = *(uint *)(iVar13 + 0x24) | 1;
        goto LAB_00483ede;
      }
      if ((*(byte *)(iVar13 + 0x24) & 2) == 0) break;
    }
    uVar8 = uVar8 + 1;
  } while( true );
  *(undefined1 *)(puVar4 + 0x10) = 0;
  iVar13 = *(int *)(uVar8 * 4 + *(int *)(local_20 + 0x98));
  uVar11 = *(uint *)(iVar13 + 0x24) | 2;
LAB_00483ede:
  *(uint *)(iVar13 + 0x24) = uVar11;
  piVar6 = *(int **)(uVar8 * 4 + *(int *)(local_20 + 0x98));
  local_30 = piVar6;
  if (piVar6 == (int *)0x0) goto LAB_00484150;
  do {
    piVar14 = piVar6;
    if (*(char *)(puVar4 + 0x10) == '\0') {
      iVar10 = piVar6[1];
      for (piVar12 = *(int **)(iVar10 + 4); piVar12 != *(int **)(iVar10 + 8); piVar12 = piVar12 + 1)
      {
        if ((int *)*piVar12 == piVar6) {
          if (piVar12 == *(int **)(iVar10 + 4)) {
            piVar12 = *(int **)(iVar10 + 8);
          }
          iVar10 = puVar4[3];
          if ((iVar10 == 0) || ((uint)(puVar4[5] - iVar10 >> 2) <= (uint)(puVar4[4] - iVar10 >> 2)))
          {
            FUN_00473a00(puVar4[4],1,&local_30);
          }
          else {
            iVar10 = puVar4[4];
            FUN_004520c0(iVar10,1,&local_30,puVar4 + 2,param_2);
            puVar4[4] = iVar10 + 4;
            puVar4 = local_2c;
          }
          piVar14 = (int *)piVar12[-1];
          piVar14[9] = piVar14[9] | 2;
          local_30 = piVar14;
          if (piVar14[1] == piVar6[1]) {
            iVar10 = piVar14[2];
            piVar14[2] = piVar14[1];
            piVar14[1] = iVar10;
          }
          break;
        }
      }
    }
    else {
      iVar10 = piVar6[2];
      for (piVar12 = *(int **)(iVar10 + 4); piVar12 != *(int **)(iVar10 + 8); piVar12 = piVar12 + 1)
      {
        if ((int *)*piVar12 == piVar6) {
          if (piVar12 == *(int **)(iVar10 + 4)) {
            piVar12 = *(int **)(iVar10 + 8);
          }
          iVar10 = puVar4[3];
          if ((iVar10 == 0) || ((uint)(puVar4[5] - iVar10 >> 2) <= (uint)(puVar4[4] - iVar10 >> 2)))
          {
            FUN_00473a00(puVar4[4],1,&local_30);
          }
          else {
            iVar10 = puVar4[4];
            FUN_004520c0(iVar10,1,&local_30,puVar4 + 2,param_2);
            puVar4[4] = iVar10 + 4;
            puVar4 = local_2c;
          }
          piVar14 = (int *)piVar12[-1];
          piVar14[9] = piVar14[9] | 1;
          iVar10 = piVar14[2];
          local_30 = piVar14;
          if (iVar10 == piVar6[2]) {
            piVar14[2] = piVar14[1];
            piVar14[1] = iVar10;
          }
          break;
        }
      }
    }
    piVar12 = (int *)puVar4[3];
    piVar6 = piVar14;
  } while (piVar14 != (int *)*piVar12);
  if ((piVar12 == (int *)0x0) || ((uint)(puVar4[4] - (int)piVar12 >> 2) < 3)) {
    if ((void *)puVar4[3] == (void *)0x0) {
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
                    /* WARNING: Subroutine does not return */
      operator_delete(puVar4);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)puVar4[3]);
  }
  FUN_00479090();
  cVar3 = FUN_0046ba80();
  iVar10 = local_28;
  if (cVar3 != '\0') {
    iVar13 = *(int *)(local_28 + 4);
    if ((iVar13 == 0) ||
       ((uint)(*(int *)(local_28 + 0xc) - iVar13 >> 2) <=
        (uint)(*(int *)(local_28 + 8) - iVar13 >> 2))) {
      FUN_00480d10(*(undefined4 *)(local_28 + 8),1,&local_24);
    }
    else {
      iVar13 = *(int *)(local_28 + 8);
      FUN_004520c0(iVar13,1,&local_24,local_28,param_2);
      *(int *)(iVar10 + 8) = iVar13 + 4;
    }
  }
  goto LAB_00483df4;
LAB_004841b0:
  do {
    if (local_18 != piVar12) {
      piVar9 = local_18;
LAB_004841b8:
      if (*piVar9 != *piVar6) goto code_r0x004841bc;
      piVar5 = piVar9 + 1;
      if (piVar5 != piVar12) {
        iVar13 = (int)piVar9 - (int)piVar5;
        do {
          *(int *)((int)piVar5 + iVar13) = *piVar5;
          piVar5 = piVar5 + 1;
          iVar10 = local_20;
        } while (piVar5 != piVar12);
      }
      piVar12 = piVar12 + -1;
    }
LAB_004841e3:
    piVar6 = piVar6 + 1;
  } while (piVar6 != *(int **)(*piVar14 + 0x10));
LAB_004841ef:
  if ((local_18 != (int *)0x0) && ((int)piVar12 - (int)local_18 >> 2 != 0)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_18);
  }
  pvVar1 = (void *)*local_30;
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((int)pvVar1 + 0xc) == (void *)0x0) {
      *(undefined4 *)((int)pvVar1 + 0xc) = 0;
      *(undefined4 *)((int)pvVar1 + 0x10) = 0;
      *(undefined4 *)((int)pvVar1 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)pvVar1 + 0xc));
  }
  piVar14 = *(int **)(local_28 + 8);
  piVar6 = local_30 + 1;
  if (piVar6 != piVar14) {
    iVar13 = (int)local_30 - (int)piVar6;
    do {
      *(int *)((int)piVar6 + iVar13) = *piVar6;
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar14);
  }
  *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + -4;
  if (local_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_18);
  }
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  goto LAB_00484150;
code_r0x004841bc:
  piVar9 = piVar9 + 1;
  if (piVar9 == piVar12) goto LAB_004841e3;
  goto LAB_004841b8;
LAB_00484150:
  local_30 = *(int **)(iVar10 + 200);
  piVar6 = *(int **)(iVar10 + 0xcc);
  if (local_30 != piVar6) {
    do {
      piVar14 = *(int **)(iVar10 + 200);
      if (piVar14 != piVar6) {
        do {
          if (local_30 != piVar14) {
            FUN_00480c70(*local_30 + 8);
            piVar6 = *(int **)(*piVar14 + 0xc);
            piVar12 = local_14;
            if (piVar6 == *(int **)(*piVar14 + 0x10)) goto LAB_004841ef;
            goto LAB_004841b0;
          }
          piVar14 = piVar14 + 1;
        } while (piVar14 != *(int **)(iVar10 + 0xcc));
      }
      piVar6 = *(int **)(iVar10 + 0xcc);
      local_30 = local_30 + 1;
    } while (local_30 != piVar6);
  }
  if (*(int *)(iVar10 + 0xe8) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(iVar10 + 0xec) - *(int *)(iVar10 + 0xe8) >> 2;
  }
  if (*(int *)(local_28 + 4) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(local_28 + 8) - *(int *)(local_28 + 4) >> 2;
  }
  uVar7 = FUN_0041e5b0("CRoadNetwork: allotments (%d convex %d concave)",iVar13,iVar10);
  FUN_0040a410(uVar7);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00484f60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00484f60(int param_1)

{
  uint uVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  float10 fVar13;
  void *local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  char local_16d;
  int local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  void *local_14c;
  undefined4 *local_148;
  float local_144;
  int local_140;
  int local_13c;
  undefined1 local_138 [4];
  undefined4 *local_134;
  int local_130;
  undefined4 local_12c;
  undefined1 local_128 [4];
  float *local_124;
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined1 local_f4 [4];
  void *local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  float local_e4;
  undefined1 local_e0 [4];
  void *local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [4];
  void *local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057d0d6;
  local_c = ExceptionList;
  puVar11 = *(undefined4 **)(param_1 + 0xd8);
  local_140 = param_1;
  if (puVar11 != *(undefined4 **)(param_1 + 0xdc)) {
    do {
      pvVar5 = (void *)*puVar11;
      if (pvVar5 != (void *)0x0) {
        ExceptionList = &local_c;
        FUN_0047d330();
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar5);
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != *(undefined4 **)(param_1 + 0xdc));
  }
  local_16c = param_1 + 0xd4;
  local_13c = 0;
  if (*(void **)(param_1 + 0xd8) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0xd8));
  }
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  puVar11 = *(undefined4 **)(param_1 + 200);
  local_148 = puVar11;
  if (puVar11 != *(undefined4 **)(param_1 + 0xcc)) {
    do {
      if (*(int *)*puVar11 != 0) {
        local_148 = puVar11;
        fVar13 = (float10)FUN_00479210(0x3f666666);
        local_198 = (float)fVar13;
        if ((float10)_DAT_0058a9e0 <= fVar13) {
          if (_DAT_0058af3c <= local_198) {
            if (local_198 < _DAT_0058af34) {
              iVar8 = rand();
              iVar8 = iVar8 % 5;
              if ((iVar8 == 0) && (local_13c < 3)) {
                local_f0 = (void *)0x0;
                local_ec = 0;
                local_e8 = 0;
                local_4 = 2;
                local_a8 = iVar8;
                local_a4 = iVar8;
                local_a0 = iVar8;
                FUN_00478ca0(local_f4,&local_a8,0x3f4ccccd);
                FUN_0041d580(&local_100,(int)local_f0 + 0xc,local_f0);
                FUN_0041d4b0();
                fVar2 = _DAT_00583354 / local_198;
                local_100 = local_100 * fVar2;
                local_fc = local_fc * fVar2;
                local_f8 = local_f8 * fVar2;
                local_14c = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
                local_4._0_1_ = 3;
                if (local_14c == (void *)0x0) {
                  pvVar5 = (void *)0x0;
                }
                else {
                  pvVar5 = (void *)FUN_00484d40(local_f4,local_f4,local_f0,&local_100,0,0);
                }
                local_4 = CONCAT31(local_4._1_3_,2);
                *(undefined1 *)((int)pvVar5 + 0x87) = 3;
                local_1a0 = pvVar5;
                FUN_004758d0(0x43480000);
                if ((((*(int *)((int)pvVar5 + 8) == 0) ||
                     ((uint)((*(int *)((int)pvVar5 + 0xc) - *(int *)((int)pvVar5 + 8)) / 0xc) < 3))
                    || (*(int *)((int)pvVar5 + 0x18) == 0)) ||
                   ((uint)((*(int *)((int)pvVar5 + 0x1c) - *(int *)((int)pvVar5 + 0x18)) / 0xc) < 3)
                   ) {
                  FUN_0047d330();
                    /* WARNING: Subroutine does not return */
                  operator_delete(pvVar5);
                }
                FUN_00478810(&local_1a0);
                local_13c = local_13c + 1;
                local_4 = 0xffffffff;
                if (local_f0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  operator_delete(local_f0);
                }
                local_f0 = (void *)0x0;
                local_ec = 0;
                local_e8 = 0;
                goto LAB_00485e35;
              }
            }
            local_cc = (void *)0x0;
            local_c8 = 0;
            local_c4 = 0;
            local_4 = 4;
            local_b4 = 0;
            local_b0 = 0;
            local_ac = 0;
            FUN_00478ca0(local_d0,&local_b4,0x3f733333);
            local_168 = 0.0;
            if (_DAT_00582ad8 < local_198) {
              do {
                iVar12 = 0;
                local_134 = (undefined4 *)0x0;
                local_130 = 0;
                local_12c = 0;
                local_124 = (float *)0x0;
                local_120 = 0;
                local_11c = 0;
                local_4 = CONCAT31(local_4._1_3_,6);
                iVar8 = rand();
                local_1a0 = (void *)(iVar8 % 0xff);
                local_144 = (float)(int)local_1a0 * _DAT_0058af30 + _DAT_0058abb4;
                iVar8 = rand();
                local_1a0 = (void *)(iVar8 % 0xff);
                local_e4 = (float)(int)local_1a0 * _DAT_0058af30 + _DAT_0058ac30;
                iVar8 = rand();
                local_1a0 = (void *)(iVar8 % 0xff);
                local_14c = (void *)((float)(int)local_1a0 * _DAT_0058af2c + _DAT_00583348);
                iVar8 = rand();
                local_1a0 = (void *)((float)(iVar8 % 0xff) * _DAT_0058af28);
                local_19c = local_144 + local_168;
                if (local_198 <= local_19c) {
                  local_19c = local_198 - _DAT_00583354;
                }
                FUN_0047d470(local_168,local_19c,local_138,local_128,0x3f666666);
                pvVar5 = local_1a0;
                for (uVar10 = 0;
                    (pfVar7 = local_124, iVar8 = local_130, local_134 != (undefined4 *)0x0 &&
                    (uVar10 < (uint)((local_130 - (int)local_134) / 0xc))); uVar10 = uVar10 + 1) {
                  pfVar7 = (float *)((int)local_134 + iVar12);
                  pfVar6 = (float *)FUN_0041d5b0(local_84,(int)local_124 + iVar12,pvVar5);
                  iVar12 = iVar12 + 0xc;
                  *pfVar7 = *pfVar6 + *pfVar7;
                  pfVar7[1] = pfVar6[1] + pfVar7[1];
                  pfVar7[2] = pfVar6[2] + pfVar7[2];
                }
                local_118 = *local_134;
                local_114 = local_134[1];
                local_110 = local_134[2];
                uVar9 = FUN_0041d5b0(local_78,local_124,0x461c4000);
                FUN_0041d580(&local_188,&local_118,uVar9);
                iVar12 = local_120;
                local_10c = *(undefined4 *)(iVar8 + -0xc);
                local_108 = *(undefined4 *)(iVar8 + -8);
                local_104 = *(undefined4 *)(iVar8 + -4);
                pfVar6 = (float *)(local_120 + -0xc);
                uVar9 = FUN_0041d5b0(local_60,pfVar6,0x461c4000);
                FUN_0041d580(&local_17c,&local_10c,uVar9);
                local_194 = 0.0;
                local_190 = 0.0;
                local_18c = 0.0;
                local_1a0 = (void *)(*pfVar6 * *pfVar7 +
                                    pfVar7[1] * *(float *)(iVar12 + -8) +
                                    pfVar7[2] * *(float *)(iVar12 + -4));
                local_16d = FUN_0048eb00(&local_118,&local_188,&local_10c,&local_17c,&local_194);
                if ((local_16d == '\0') ||
                   (pfVar7 = (float *)FUN_0041d580(local_48,&local_194,&local_118),
                   local_e4 <=
                   SQRT(pfVar7[2] * pfVar7[2] + pfVar7[1] * pfVar7[1] + *pfVar7 * *pfVar7))) {
                  fVar2 = local_e4;
                  uVar9 = FUN_0041d5b0(local_30,local_124,local_e4);
                  pfVar7 = (float *)FUN_0041d580(local_18,&local_118,uVar9);
                  if (pfVar7 != &local_188) {
                    local_188 = *pfVar7;
                    local_184 = pfVar7[1];
                    local_180 = pfVar7[2];
                  }
                  uVar9 = FUN_0041d5b0(local_9c,local_120 + -0xc,fVar2);
                  pfVar7 = (float *)FUN_0041d580(local_24,&local_10c,uVar9);
                  if (pfVar7 != &local_17c) {
                    local_17c = *pfVar7;
                    local_178 = pfVar7[1];
                    local_174 = pfVar7[2];
                  }
                }
                else {
                  local_188 = local_194;
                  local_184 = local_190;
                  local_180 = local_18c;
                  local_17c = local_194;
                  local_178 = local_190;
                  local_174 = local_18c;
                }
                uVar10 = 0;
                iVar8 = 0;
                while ((iVar12 = local_16c, local_cc != (void *)0x0 &&
                       (uVar1 = (local_c8 - (int)local_cc) / 0xc, uVar10 < uVar1))) {
                  uVar10 = uVar10 + 1;
                  iVar12 = (uVar10 % uVar1) * 0xc;
                  cVar4 = FUN_0048eb00(&local_118,&local_188,(int)local_cc + iVar8,
                                       (void *)((int)local_cc + iVar12),&local_194);
                  if (cVar4 != '\0') {
                    local_188 = local_194;
                    local_184 = local_190;
                    local_180 = local_18c;
                  }
                  cVar4 = FUN_0048eb00(&local_10c,&local_17c,(int)local_cc + iVar8,
                                       (void *)((int)local_cc + iVar12),&local_194);
                  if (cVar4 != '\0') {
                    local_17c = local_194;
                    local_178 = local_190;
                    local_174 = local_18c;
                  }
                  iVar8 = iVar8 + 0xc;
                }
                for (uVar10 = 0;
                    (iVar8 = *(int *)(iVar12 + 4), iVar8 != 0 &&
                    (uVar10 < (uint)(*(int *)(iVar12 + 8) - iVar8 >> 2))); uVar10 = uVar10 + 1) {
                  cVar4 = FUN_0046fbe0(&local_118,&local_188,&local_194);
                  if (cVar4 != '\0') {
                    local_188 = local_194;
                    local_184 = local_190;
                    local_180 = local_18c;
                  }
                  cVar4 = FUN_0046fbe0(&local_10c,&local_17c,&local_194);
                  if (cVar4 != '\0') {
                    local_17c = local_194;
                    local_178 = local_190;
                    local_174 = local_18c;
                  }
                }
                bVar3 = false;
                pfVar7 = (float *)FUN_0041d580(local_6c,&local_17c,&local_10c);
                if (((_DAT_00588d50 <
                      SQRT(pfVar7[2] * pfVar7[2] + pfVar7[1] * pfVar7[1] + *pfVar7 * *pfVar7)) &&
                    (pfVar7 = (float *)FUN_0041d580(local_3c,&local_188,&local_118),
                    _DAT_00588d50 <
                    SQRT(pfVar7[2] * pfVar7[2] + pfVar7[1] * pfVar7[1] + *pfVar7 * *pfVar7))) &&
                   ((float)_DAT_0058af20 < (float)local_1a0)) {
                  bVar3 = true;
                }
                if (((float)local_1a0 < (float)_DAT_0058a9f0) && (local_16d == '\0')) {
                  bVar3 = false;
                }
                if ((_DAT_00587d94 <= local_19c - local_168) && (bVar3)) {
                  pfVar7 = (float *)FUN_0041d5b0(local_54,local_124,0x42c80000);
                  local_188 = local_188 + *pfVar7;
                  local_184 = local_184 + pfVar7[1];
                  local_180 = local_180 + pfVar7[2];
                  pfVar7 = (float *)FUN_0041d5b0(local_90,local_120 + -0xc,0x42c80000);
                  local_17c = local_17c + *pfVar7;
                  local_178 = local_178 + pfVar7[1];
                  local_174 = local_174 + pfVar7[2];
                  FUN_00478780(&local_17c);
                  FUN_00478780(&local_188);
                  FUN_0041d580(&local_164,local_134 + 3,local_134);
                  fVar2 = SQRT(local_164 * local_164 + local_160 * local_160 + local_15c * local_15c
                              );
                  if ((float)_DAT_00587c48 <= fVar2) {
                    fVar2 = _DAT_00583354 / fVar2;
                    local_164 = fVar2 * local_164;
                    local_160 = local_160 * fVar2;
                    local_15c = local_15c * fVar2;
                  }
                  else {
                    local_15c = 0.0;
                    local_164 = _DAT_00582ad8;
                    local_160 = _DAT_00583354;
                  }
                  local_19c = _DAT_00583354 / local_144;
                  local_164 = local_19c * local_164;
                  local_160 = local_160 * local_19c;
                  local_15c = local_15c * local_19c;
                  local_1a0 = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
                  local_4._0_1_ = 7;
                  if (local_1a0 == (void *)0x0) {
                    pvVar5 = (void *)0x0;
                  }
                  else {
                    pvVar5 = (void *)FUN_00484d40(local_138,local_138,local_134,&local_164,0,0);
                  }
                  local_4 = CONCAT31(local_4._1_3_,6);
                  local_1a0 = pvVar5;
                  FUN_004758d0(0x43480000);
                  fVar13 = (float10)FUN_004624b0(&local_b4);
                  if (((float10)_DAT_0058af38 < fVar13) && (iVar8 = rand(), iVar8 % 3 == 0)) {
                    *(undefined1 *)((int)pvVar5 + 0x87) = 1;
                  }
                  iVar8 = local_16c;
                  if ((((*(int *)((int)pvVar5 + 8) == 0) ||
                       ((uint)((*(int *)((int)pvVar5 + 0xc) - *(int *)((int)pvVar5 + 8)) / 0xc) < 4)
                       ) || (*(int *)((int)pvVar5 + 0x18) == 0)) ||
                     ((uint)((*(int *)((int)pvVar5 + 0x1c) - *(int *)((int)pvVar5 + 0x18)) / 0xc) <
                      4)) {
                    if (pvVar5 != (void *)0x0) {
                      FUN_0047d330();
                    /* WARNING: Subroutine does not return */
                      operator_delete(pvVar5);
                    }
                  }
                  else {
                    *(undefined1 *)((int)pvVar5 + 0xb1) = 1;
                    iVar12 = *(int *)(local_16c + 4);
                    if ((iVar12 == 0) ||
                       ((uint)(*(int *)(local_16c + 0xc) - iVar12 >> 2) <=
                        (uint)(*(int *)(local_16c + 8) - iVar12 >> 2))) {
                      FUN_00473a00(*(undefined4 *)(local_16c + 8),1,&local_1a0);
                    }
                    else {
                      iVar12 = *(int *)(local_16c + 8);
                      FUN_004520c0(iVar12,1,&local_1a0,local_16c,local_14c);
                      *(int *)(iVar8 + 8) = iVar12 + 4;
                    }
                  }
                }
                local_168 = (float)local_14c + local_144 + local_168;
                if (local_124 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
                  operator_delete(local_124);
                }
                local_124 = (float *)0x0;
                local_120 = 0;
                local_11c = 0;
                if (local_134 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  operator_delete(local_134);
                }
                local_134 = (undefined4 *)0x0;
                local_130 = 0;
                local_12c = 0;
                param_1 = local_140;
                puVar11 = local_148;
              } while (local_168 < local_198);
            }
            local_4 = 0xffffffff;
            if (local_cc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_cc);
            }
            local_cc = (void *)0x0;
            local_c8 = 0;
            local_c4 = 0;
          }
          else {
            local_dc = (void *)0x0;
            local_d8 = 0;
            local_d4 = 0;
            local_4 = 0;
            local_c0 = 0;
            local_bc = 0;
            local_b8 = 0;
            FUN_00478ca0(local_e0,&local_c0,0x3f4ccccd);
            FUN_0041d580(&local_158,(int)local_dc + 0xc,local_dc);
            fVar2 = SQRT(local_158 * local_158 + local_154 * local_154 + local_150 * local_150);
            if ((float)_DAT_00587c48 <= fVar2) {
              fVar2 = _DAT_00583354 / fVar2;
              local_158 = fVar2 * local_158;
              local_154 = local_154 * fVar2;
              local_150 = local_150 * fVar2;
            }
            else {
              local_150 = 0.0;
              local_158 = _DAT_00582ad8;
              local_154 = _DAT_00583354;
            }
            local_19c = _DAT_00583354 / local_198;
            local_158 = local_19c * local_158;
            local_154 = local_154 * local_19c;
            local_150 = local_150 * local_19c;
            local_14c = operator_new(0x13c,(nothrow_t *)&DAT_005b6164);
            local_4._0_1_ = 1;
            if (local_14c == (void *)0x0) {
              pvVar5 = (void *)0x0;
            }
            else {
              pvVar5 = (void *)FUN_00484d40(local_e0,local_e0,local_dc,&local_158,0,0);
            }
            local_4 = (uint)local_4._1_3_ << 8;
            local_1a0 = pvVar5;
            fVar13 = (float10)FUN_004624b0(&local_c0);
            if ((float10)_DAT_0058af38 < fVar13) {
              *(undefined1 *)((int)pvVar5 + 0x87) = 1;
            }
            FUN_004758d0(0x43480000);
            if (((*(int *)((int)pvVar5 + 8) == 0) ||
                ((uint)((*(int *)((int)pvVar5 + 0xc) - *(int *)((int)pvVar5 + 8)) / 0xc) < 3)) ||
               ((*(int *)((int)pvVar5 + 0x18) == 0 ||
                ((uint)((*(int *)((int)pvVar5 + 0x1c) - *(int *)((int)pvVar5 + 0x18)) / 0xc) < 3))))
            {
              if (pvVar5 != (void *)0x0) {
                FUN_0047d330();
                    /* WARNING: Subroutine does not return */
                operator_delete(pvVar5);
              }
            }
            else {
              FUN_00478810(&local_1a0);
            }
            local_4 = 0xffffffff;
            if (local_dc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_dc);
            }
            local_dc = (void *)0x0;
            local_d8 = 0;
            local_d4 = 0;
          }
        }
      }
LAB_00485e35:
      puVar11 = puVar11 + 1;
      local_148 = puVar11;
    } while (puVar11 != *(undefined4 **)(param_1 + 0xcc));
  }
  if (*(int *)(local_16c + 4) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(local_16c + 8) - *(int *)(local_16c + 4) >> 2;
  }
  uVar9 = FUN_0041e5b0("CRoadNetwork: %d buildings shapes generated",iVar8);
  FUN_0040a410(uVar9);
  ExceptionList = local_c;
  return;
}




/* Function: FUN_00485ea0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00485ea0(int param_1,undefined4 param_2,char param_3)

{
  float *pfVar1;
  void *pvVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  void **ppvVar7;
  int *piVar8;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int *local_7c;
  int *local_78;
  int local_74;
  int *local_70;
  int *local_6c;
  int *local_64;
  int local_60;
  float local_5c [2];
  float local_54;
  float local_50;
  float local_48;
  float local_44 [3];
  undefined1 local_38 [12];
  undefined1 local_2c [4];
  int *local_28;
  int *local_24;
  int local_20;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057d0f0;
  local_c = ExceptionList;
  piVar14 = (int *)0x0;
  piVar15 = (int *)0x0;
  local_74 = 0;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_20 = 0;
  piVar11 = *(int **)(param_1 + 0xa8);
  piVar13 = *(int **)(param_1 + 0xac);
  local_4 = 1;
  ExceptionList = &local_c;
  ppvVar7 = &local_c;
  if (piVar11 != piVar13) {
    do {
      ExceptionList = ppvVar7;
      if (piVar15 != piVar14) {
        piVar8 = piVar15;
        do {
          if (*piVar8 == *piVar11) goto LAB_00486085;
          piVar8 = piVar8 + 1;
        } while (piVar8 != piVar14);
      }
      piVar8 = *(int **)(param_1 + 0xa8);
      if (piVar8 != piVar13) {
        do {
          iVar16 = *piVar8;
          if ((*piVar11 != iVar16) &&
             (pfVar9 = (float *)FUN_0041d580(local_44,*piVar11 + 0x10,iVar16 + 0x10),
             SQRT(pfVar9[2] * pfVar9[2] + pfVar9[1] * pfVar9[1] + *pfVar9 * *pfVar9) < _DAT_0058ac30
             )) {
            bVar5 = false;
            for (piVar13 = piVar15; piVar13 != piVar14; piVar13 = piVar13 + 1) {
              if (*piVar13 == iVar16) {
                bVar5 = true;
                break;
              }
            }
            piVar13 = *(int **)(param_1 + 0x98);
            if (piVar13 != *(int **)(param_1 + 0x9c)) {
              do {
                if (*(int *)(*piVar13 + 4) == *piVar8) {
                  *(int *)(*piVar13 + 4) = *piVar11;
                }
                if (*(int *)(*piVar13 + 8) == *piVar8) {
                  *(int *)(*piVar13 + 8) = *piVar11;
                }
                piVar13 = piVar13 + 1;
              } while (piVar13 != *(int **)(param_1 + 0x9c));
            }
            if (!bVar5) {
              if ((piVar15 == (int *)0x0) ||
                 ((uint)(local_10 - (int)piVar15 >> 2) <= (uint)((int)piVar14 - (int)piVar15 >> 2)))
              {
                FUN_00473a00(piVar14,1,piVar8);
                piVar14 = local_14;
                piVar15 = local_18;
              }
              else {
                FUN_004520c0(piVar14,1,piVar8,local_1c,local_60);
                local_14 = piVar14 + 1;
                piVar14 = local_14;
              }
            }
          }
          piVar8 = piVar8 + 1;
        } while (piVar8 != *(int **)(param_1 + 0xac));
      }
LAB_00486085:
      piVar13 = *(int **)(param_1 + 0xac);
      piVar11 = piVar11 + 1;
      ppvVar7 = ExceptionList;
    } while (piVar11 != piVar13);
  }
  while ((local_18 != (int *)0x0 && (iVar16 = (int)piVar14 - (int)local_18 >> 2, iVar16 != 0))) {
    piVar11 = *(int **)(param_1 + 0xa8);
    if (piVar11 != *(int **)(param_1 + 0xac)) {
LAB_004860e7:
      if (*piVar11 != piVar14[-1]) goto code_r0x004860eb;
      pvVar2 = (void *)*piVar11;
      if (pvVar2 != (void *)0x0) {
        if (*(void **)((int)pvVar2 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(*(void **)((int)pvVar2 + 4));
        }
        *(undefined4 *)((int)pvVar2 + 4) = 0;
        *(undefined4 *)((int)pvVar2 + 8) = 0;
        *(undefined4 *)((int)pvVar2 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar2);
      }
      piVar15 = *(int **)(param_1 + 0xac);
      piVar13 = piVar11 + 1;
      if (piVar13 != piVar15) {
        iVar17 = (int)piVar11 - (int)piVar13;
        do {
          *(int *)((int)piVar13 + iVar17) = *piVar13;
          piVar13 = piVar13 + 1;
        } while (piVar13 != piVar15);
      }
      local_74 = local_74 + 1;
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + -4;
    }
LAB_00486155:
    if (iVar16 != 0) {
      piVar14 = piVar14 + -1;
    }
  }
  local_78 = *(int **)(param_1 + 0x98);
  piVar11 = *(int **)(param_1 + 0x9c);
  piVar13 = local_24;
  piVar15 = local_28;
  local_14 = piVar14;
  if (local_78 != piVar11) {
    do {
      if (piVar15 != piVar13) {
        piVar14 = piVar15;
        do {
          if (*local_78 == *piVar14) goto LAB_00486252;
          piVar14 = piVar14 + 1;
        } while (piVar14 != piVar13);
      }
      piVar14 = *(int **)(param_1 + 0x98);
      if (piVar14 != piVar11) {
        do {
          iVar16 = *local_78;
          iVar17 = *piVar14;
          if (iVar16 != iVar17) {
            if (((*(int *)(iVar16 + 4) == *(int *)(iVar17 + 4)) &&
                (piVar15 = local_28, *(int *)(iVar16 + 8) == *(int *)(iVar17 + 8))) ||
               ((*(int *)(iVar16 + 4) == *(int *)(iVar17 + 8) &&
                (*(int *)(iVar16 + 8) == *(int *)(iVar17 + 4))))) {
              if ((piVar15 == (int *)0x0) ||
                 ((uint)(local_20 - (int)piVar15 >> 2) <= (uint)((int)piVar13 - (int)piVar15 >> 2)))
              {
                FUN_00473a00(piVar13,1,piVar14);
                piVar13 = local_24;
                piVar15 = local_28;
              }
              else {
                FUN_004520c0(piVar13,1,piVar14,local_2c,local_60);
                local_24 = piVar13 + 1;
                piVar13 = local_24;
              }
            }
          }
          piVar14 = piVar14 + 1;
        } while (piVar14 != *(int **)(param_1 + 0x9c));
      }
LAB_00486252:
      piVar11 = *(int **)(param_1 + 0x9c);
      local_78 = local_78 + 1;
    } while (local_78 != piVar11);
  }
  piVar11 = *(int **)(param_1 + 0x98);
  piVar13 = local_28;
  piVar14 = local_24;
  piVar15 = local_24;
  if (piVar11 != *(int **)(param_1 + 0x9c)) {
    do {
      iVar16 = *piVar11;
      if (((*(int *)(iVar16 + 4) == 0) || (iVar17 = *(int *)(iVar16 + 8), iVar17 == 0)) ||
         (*(int *)(iVar16 + 4) == iVar17)) {
        if ((piVar13 != (int *)0x0) &&
           ((uint)((int)piVar15 - (int)piVar13 >> 2) < (uint)(local_20 - (int)piVar13 >> 2)))
        goto LAB_00486321;
LAB_00486336:
        FUN_00473a00(piVar15,1,piVar11);
        piVar13 = local_28;
        piVar15 = local_24;
      }
      else {
        local_44[0] = 0.0;
        local_44[1] = 0.0;
        local_44[2] = 0.0;
        iVar16 = FUN_004807d0(iVar16,*(int *)(iVar16 + 4) + 0x10,iVar17 + 0x10,local_44);
        if (iVar16 != 0) {
          if ((piVar13 == (int *)0x0) ||
             ((uint)(local_20 - (int)piVar13 >> 2) <= (uint)((int)piVar15 - (int)piVar13 >> 2)))
          goto LAB_00486336;
LAB_00486321:
          FUN_004520c0(piVar15,1,piVar11,local_2c,local_60);
          local_24 = piVar15 + 1;
          piVar15 = local_24;
        }
      }
      piVar11 = piVar11 + 1;
      piVar14 = local_24;
    } while (piVar11 != *(int **)(param_1 + 0x9c));
  }
  while ((local_28 != (int *)0x0 && (iVar16 = (int)piVar14 - (int)local_28 >> 2, iVar16 != 0))) {
    for (piVar11 = *(int **)(param_1 + 0x98); piVar11 != *(int **)(param_1 + 0x9c);
        piVar11 = piVar11 + 1) {
      if (*piVar11 == piVar14[-1]) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*piVar11);
      }
    }
    if (iVar16 != 0) {
      piVar14 = piVar14 + -1;
    }
  }
  local_60 = 0x31;
  local_24 = piVar14;
  do {
    local_6c = *(int **)(param_1 + 0x98);
    piVar11 = *(int **)(param_1 + 0x9c);
    if (local_6c != piVar11) {
      do {
        if (((*(int *)(*local_6c + 4) != 0) && (*(int *)(*local_6c + 8) != 0)) &&
           (local_64 = *(int **)(param_1 + 0x98), local_64 != piVar11)) {
          do {
            iVar16 = *local_64;
            piVar11 = (int *)(iVar16 + 4);
            if (*(int *)(iVar16 + 4) != 0) {
              piVar13 = (int *)(iVar16 + 8);
              if ((*(int *)(iVar16 + 8) != 0) && (iVar17 = *local_6c, iVar17 != iVar16)) {
                iVar3 = *(int *)(iVar17 + 4);
                bVar5 = false;
                if ((iVar3 == *(int *)(iVar16 + 8)) && (*(int *)(iVar17 + 8) != *piVar11)) {
                  bVar5 = true;
                  local_7c = (int *)(iVar17 + 8);
                  local_78 = piVar11;
                  local_70 = piVar13;
                }
                iVar16 = *(int *)(iVar17 + 8);
                if ((iVar16 == *piVar13) && (iVar3 != *piVar11)) {
                  bVar5 = true;
                  local_7c = (int *)(iVar17 + 4);
                  local_78 = piVar11;
                  local_70 = piVar13;
                }
                if ((iVar16 == *piVar11) && (iVar3 != *piVar13)) {
                  bVar5 = true;
                  local_7c = (int *)(iVar17 + 4);
                  local_78 = piVar13;
                  local_70 = piVar11;
                }
                if (((iVar3 == *piVar11) && (piVar14 = (int *)(iVar17 + 8), iVar16 != *piVar13)) ||
                   (piVar14 = local_7c, piVar13 = local_78, piVar11 = local_70, bVar5)) {
                  local_70 = piVar11;
                  local_78 = piVar13;
                  local_7c = piVar14;
                  iVar16 = *local_70;
                  pfVar9 = (float *)(iVar16 + 0x10);
                  iVar17 = *local_78;
                  pfVar1 = (float *)(iVar17 + 0x10);
                  FUN_0041d580(local_5c,pfVar1,pfVar9);
                  iVar3 = *local_7c;
                  pfVar10 = (float *)(iVar3 + 0x10);
                  fVar4 = SQRT(local_54 * local_54 + local_5c[0] * local_5c[0]);
                  fVar6 = _DAT_00583354 / fVar4;
                  local_5c[0] = local_5c[0] * fVar6;
                  local_54 = local_54 * fVar6;
                  local_50 = -local_54;
                  fVar6 = (local_5c[0] * *pfVar10 +
                          _DAT_00582ad8 * fVar6 * *(float *)(iVar3 + 0x14) +
                          local_54 * *(float *)(iVar3 + 0x18)) -
                          (local_5c[0] * *pfVar9 +
                          _DAT_00582ad8 * fVar6 * *(float *)(iVar16 + 0x14) +
                          local_54 * *(float *)(iVar16 + 0x18));
                  local_48 = local_5c[0];
                  if (((fVar6 < _DAT_00582ad8) || (fVar4 <= fVar6)) ||
                     (fVar4 * _DAT_0058af88 <=
                      ABS((*(float *)(iVar3 + 0x14) * _DAT_00582ad8 +
                          local_50 * *pfVar10 + local_5c[0] * *(float *)(iVar3 + 0x18)) -
                          (local_50 * *pfVar9 +
                          *(float *)(iVar16 + 0x14) * _DAT_00582ad8 +
                          local_5c[0] * *(float *)(iVar16 + 0x18))))) {
                    pfVar10 = (float *)FUN_0041d580(local_38,pfVar10,pfVar9);
                    if (pfVar10 != local_5c) {
                      local_5c[0] = *pfVar10;
                      local_54 = pfVar10[2];
                    }
                    fVar4 = SQRT(local_54 * local_54 + local_5c[0] * local_5c[0]);
                    fVar6 = _DAT_00583354 / fVar4;
                    local_5c[0] = local_5c[0] * fVar6;
                    local_54 = local_54 * fVar6;
                    local_44[0] = -local_54;
                    fVar6 = (local_5c[0] * *pfVar1 +
                            _DAT_00582ad8 * fVar6 * *(float *)(iVar17 + 0x14) +
                            local_54 * *(float *)(iVar17 + 0x18)) -
                            (local_5c[0] * *pfVar9 +
                            _DAT_00582ad8 * fVar6 * *(float *)(iVar16 + 0x14) +
                            local_54 * *(float *)(iVar16 + 0x18));
                    local_44[2] = local_5c[0];
                    if (((_DAT_00582ad8 <= fVar6) && (fVar6 < fVar4)) &&
                       (ABS((*(float *)(iVar17 + 0x14) * _DAT_00582ad8 +
                            local_44[0] * *pfVar1 + local_5c[0] * *(float *)(iVar17 + 0x18)) -
                            (*(float *)(iVar16 + 0x14) * _DAT_00582ad8 +
                            local_44[0] * *pfVar9 + local_5c[0] * *(float *)(iVar16 + 0x18))) <
                        fVar4 * _DAT_0058a2f4)) {
                      *local_78 = iVar3;
                    }
                  }
                  else {
                    *local_7c = iVar17;
                  }
                }
              }
            }
            local_64 = local_64 + 1;
          } while (local_64 != *(int **)(param_1 + 0x9c));
        }
        piVar11 = *(int **)(param_1 + 0x9c);
        local_6c = local_6c + 1;
      } while (local_6c != piVar11);
    }
    local_60 = local_60 + -1;
  } while (local_60 != 0);
  piVar11 = *(int **)(param_1 + 0x98);
  piVar13 = local_28;
  piVar14 = local_24;
  if (piVar11 != *(int **)(param_1 + 0x9c)) {
    do {
      iVar16 = *piVar11;
      if (((*(int *)(iVar16 + 4) == 0) || (iVar17 = *(int *)(iVar16 + 8), iVar17 == 0)) ||
         (*(int *)(iVar16 + 4) == iVar17)) {
        if ((piVar13 != (int *)0x0) &&
           ((uint)((int)piVar14 - (int)piVar13 >> 2) < (uint)(local_20 - (int)piVar13 >> 2)))
        goto LAB_00486846;
LAB_0048685b:
        FUN_00473a00(piVar14,1,piVar11);
        piVar13 = local_28;
        piVar14 = local_24;
      }
      else {
        local_44[0] = 0.0;
        local_44[1] = 0.0;
        local_44[2] = 0.0;
        iVar16 = FUN_004807d0(iVar16,*(int *)(iVar16 + 4) + 0x10,iVar17 + 0x10,local_44);
        if (iVar16 != 0) {
          if ((piVar13 == (int *)0x0) ||
             ((uint)(local_20 - (int)piVar13 >> 2) <= (uint)((int)piVar14 - (int)piVar13 >> 2)))
          goto LAB_0048685b;
LAB_00486846:
          FUN_004520c0(piVar14,1,piVar11,local_2c,0);
          local_24 = piVar14 + 1;
          piVar14 = local_24;
        }
      }
      piVar11 = piVar11 + 1;
    } while (piVar11 != *(int **)(param_1 + 0x9c));
  }
  local_6c = *(int **)(param_1 + 0x98);
  piVar11 = *(int **)(param_1 + 0x9c);
  piVar13 = local_24;
  if (local_6c != piVar11) {
    do {
      if (local_28 != piVar13) {
        piVar14 = local_28;
        do {
          if (*local_6c == *piVar14) goto LAB_00486961;
          piVar14 = piVar14 + 1;
        } while (piVar14 != piVar13);
      }
      piVar14 = *(int **)(param_1 + 0x98);
      if (piVar14 != piVar11) {
        do {
          iVar16 = *local_6c;
          iVar17 = *piVar14;
          if (iVar16 != iVar17) {
            if (((*(int *)(iVar16 + 4) == *(int *)(iVar17 + 4)) &&
                (*(int *)(iVar16 + 8) == *(int *)(iVar17 + 8))) ||
               ((*(int *)(iVar16 + 4) == *(int *)(iVar17 + 8) &&
                (*(int *)(iVar16 + 8) == *(int *)(iVar17 + 4))))) {
              if ((local_28 == (int *)0x0) ||
                 ((uint)(local_20 - (int)local_28 >> 2) <= (uint)((int)piVar13 - (int)local_28 >> 2)
                 )) {
                FUN_00473a00(piVar13,1,piVar14);
                piVar13 = local_24;
              }
              else {
                FUN_004520c0(piVar13,1,piVar14,local_2c,0);
                local_24 = piVar13 + 1;
                piVar13 = local_24;
              }
            }
          }
          piVar14 = piVar14 + 1;
        } while (piVar14 != *(int **)(param_1 + 0x9c));
      }
LAB_00486961:
      piVar11 = *(int **)(param_1 + 0x9c);
      local_6c = local_6c + 1;
    } while (local_6c != piVar11);
  }
  while ((local_28 != (int *)0x0 && (iVar16 = (int)piVar13 - (int)local_28 >> 2, iVar16 != 0))) {
    for (piVar11 = *(int **)(param_1 + 0x98); piVar11 != *(int **)(param_1 + 0x9c);
        piVar11 = piVar11 + 1) {
      if (*piVar11 == piVar13[-1]) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*piVar11);
      }
    }
    if (iVar16 != 0) {
      piVar13 = piVar13 + -1;
    }
  }
  do {
    local_24 = piVar13;
    piVar11 = *(int **)(param_1 + 0xa8);
    if (piVar11 != *(int **)(param_1 + 0xac)) {
      do {
        *(undefined4 *)(*piVar11 + 0x20) = 0;
        piVar11 = piVar11 + 1;
      } while (piVar11 != *(int **)(param_1 + 0xac));
    }
    piVar11 = *(int **)(param_1 + 0x98);
    if (piVar11 != *(int **)(param_1 + 0x9c)) {
      do {
        piVar13 = (int *)(*(int *)(*piVar11 + 4) + 0x20);
        *piVar13 = *piVar13 + 1;
        piVar13 = (int *)(*(int *)(*piVar11 + 8) + 0x20);
        *piVar13 = *piVar13 + 1;
        piVar11 = piVar11 + 1;
      } while (piVar11 != *(int **)(param_1 + 0x9c));
    }
    piVar11 = *(int **)(param_1 + 0xa8);
    if (piVar11 != *(int **)(param_1 + 0xac)) {
      do {
        piVar13 = local_14;
        iVar16 = *(int *)(*piVar11 + 0x20);
        if (((iVar16 < 2) || (4 < iVar16)) ||
           ((param_3 != '\0' && (*(char *)(*piVar11 + 0x28) != '\0')))) {
          piVar14 = *(int **)(param_1 + 0x98);
          if (piVar14 != *(int **)(param_1 + 0x9c)) {
            do {
              if ((*(int *)(*piVar14 + 4) == *piVar11) || (*(int *)(*piVar14 + 8) == *piVar11)) {
                    /* WARNING: Subroutine does not return */
                operator_delete((void *)*piVar14);
              }
              piVar14 = piVar14 + 1;
            } while (piVar14 != *(int **)(param_1 + 0x9c));
          }
          if (iVar16 < 5) {
            if ((local_18 == (int *)0x0) ||
               ((uint)(local_10 - (int)local_18 >> 2) <= (uint)((int)local_14 - (int)local_18 >> 2))
               ) {
              FUN_00473a00(local_14,1,piVar11);
            }
            else {
              FUN_004520c0(local_14,1,piVar11,local_1c,0);
              local_14 = piVar13 + 1;
            }
          }
        }
        piVar11 = piVar11 + 1;
      } while (piVar11 != *(int **)(param_1 + 0xac));
    }
    if ((local_18 == (int *)0x0) || ((int)local_14 - (int)local_18 >> 2 == 0)) {
      piVar11 = *(int **)(param_1 + 0xa8);
      if (piVar11 != *(int **)(param_1 + 0xac)) {
        do {
          FUN_00475e40(param_1 + 0x94);
          piVar13 = *(int **)(*piVar11 + 4);
          if ((piVar13 != (int *)0x0) && (*(int *)(*piVar11 + 8) - (int)piVar13 >> 2 == 2)) {
            iVar16 = *piVar13;
            if (*(float *)(iVar16 + 0x20) <= *(float *)(piVar13[1] + 0x20)) {
              uVar12 = *(undefined4 *)(piVar13[1] + 0x20);
            }
            else {
              uVar12 = *(undefined4 *)(iVar16 + 0x20);
            }
            *(undefined4 *)(iVar16 + 0x20) = uVar12;
            *(undefined4 *)(*(int *)(*(int *)(*piVar11 + 4) + 4) + 0x20) = uVar12;
          }
          piVar11 = piVar11 + 1;
        } while (piVar11 != *(int **)(param_1 + 0xac));
      }
      do {
        piVar11 = *(int **)(param_1 + 0xd8);
        while( true ) {
          if (piVar11 == *(int **)(param_1 + 0xdc)) {
            uVar12 = FUN_0041e5b0("CRoadNetwork::Clean (): %d crossings removed, %d roads segments removed"
                                  ,local_74,0);
            FUN_0040a410(uVar12);
            FUN_00483c80(param_2,0);
            if (local_28 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_28);
            }
            if (local_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_18);
            }
            ExceptionList = local_c;
            return 1;
          }
          iVar16 = *(int *)(*piVar11 + 0xc0);
          if ((iVar16 != 0) && (*(int *)(*piVar11 + 0xc4) - iVar16 >> 2 != 0)) break;
          piVar11 = piVar11 + 1;
        }
        pvVar2 = (void *)*piVar11;
        if (pvVar2 != (void *)0x0) {
          FUN_0047d330();
                    /* WARNING: Subroutine does not return */
          operator_delete(pvVar2);
        }
        piVar14 = *(int **)(param_1 + 0xdc);
        piVar13 = piVar11 + 1;
        if (piVar13 != piVar14) {
          iVar16 = (int)piVar11 - (int)piVar13;
          do {
            *(int *)((int)piVar13 + iVar16) = *piVar13;
            piVar13 = piVar13 + 1;
          } while (piVar13 != piVar14);
        }
        *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + -4;
      } while( true );
    }
    while (iVar16 = (int)local_14 - (int)local_18 >> 2, piVar13 = local_24, iVar16 != 0) {
      piVar11 = *(int **)(param_1 + 0xa8);
      if (piVar11 != *(int **)(param_1 + 0xac)) {
LAB_00486bf7:
        if (*piVar11 != local_14[-1]) goto code_r0x00486bfb;
        pvVar2 = (void *)*piVar11;
        if (pvVar2 != (void *)0x0) {
          if (*(void **)((int)pvVar2 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            operator_delete(*(void **)((int)pvVar2 + 4));
          }
          *(undefined4 *)((int)pvVar2 + 4) = 0;
          *(undefined4 *)((int)pvVar2 + 8) = 0;
          *(undefined4 *)((int)pvVar2 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
          operator_delete(pvVar2);
        }
        piVar14 = *(int **)(param_1 + 0xac);
        piVar13 = piVar11 + 1;
        if (piVar13 != piVar14) {
          iVar17 = (int)piVar11 - (int)piVar13;
          do {
            *(int *)((int)piVar13 + iVar17) = *piVar13;
            piVar13 = piVar13 + 1;
          } while (piVar13 != piVar14);
        }
        local_74 = local_74 + 1;
        *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + -4;
      }
LAB_00486c64:
      if (iVar16 != 0) {
        local_14 = local_14 + -1;
      }
    }
  } while( true );
code_r0x004860eb:
  piVar11 = piVar11 + 1;
  if (piVar11 == *(int **)(param_1 + 0xac)) goto LAB_00486155;
  goto LAB_004860e7;
code_r0x00486bfb:
  piVar11 = piVar11 + 1;
  if (piVar11 == *(int **)(param_1 + 0xac)) goto LAB_00486c64;
  goto LAB_00486bf7;
}





/* font functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_00407450 */

/* WARNING: Removing unreachable block (ram,0x00407a5d) */

undefined1 __thiscall
FUN_00407450(int param_1,int ***param_2,undefined4 param_3,int ***param_4,uint param_5)

{
  undefined4 *puVar1;
  char cVar2;
  int ***pppiVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  void *pvVar15;
  undefined4 uVar16;
  int ***pppiVar17;
  int *piVar18;
  int **ppiStack_25c;
  int **ppiStack_258;
  undefined4 uStack_254;
  int **ppiStack_250;
  int **ppiStack_24c;
  int *piStack_248;
  int *piStack_244;
  int *piStack_240;
  int **ppiStack_23c;
  int **ppiStack_238;
  int **ppiStack_234;
  int **ppiStack_230;
  undefined1 *puVar19;
  int ***pppiStack_220;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_21c;
  undefined1 uStack_201;
  int *piStack_200;
  uint uStack_1fc;
  int *piStack_1f8;
  int **ppiStack_1f4;
  int *piStack_1f0;
  int *piStack_1ec;
  int *piStack_1e8;
  int **ppiStack_1e4;
  int **ppiStack_1e0;
  int local_1dc;
  int *piStack_1d8;
  undefined4 *local_1d4;
  undefined4 uStack_1d0;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  int **ppiStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 uStack_188;
  undefined1 uStack_187;
  undefined1 uStack_186;
  undefined1 uStack_185;
  undefined1 uStack_184;
  undefined1 uStack_183;
  undefined1 uStack_182;
  undefined1 uStack_181;
  char acStack_180 [52];
  undefined1 auStack_14c [8];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_144 [248];
  int **ppiStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  
  puVar1 = (undefined4 *)(param_1 + 0x84);
  local_1dc = param_1;
  local_1d4 = puVar1;
  if (*(int **)(param_1 + 0x84) != (int *)0x0) {
    pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x40747a;
    (**(code **)(**(int **)(param_1 + 0x84) + 8))();
    *puVar1 = 0;
  }
  pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                0x40748b;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_1c8,"FontFile");
  pbStack_21c = abStack_144 + 0xc;
  pppiStack_220 = (int ***)0x4074a4;
  FUN_004224c0();
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_1c8);
  pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                0x4074c0;
  pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                c_str(abStack_144 + 0xc);
  pppiStack_220 = (int ***)0x4074c6;
  pppiVar3 = (int ***)FUN_00410660();
  if (pppiVar3 != (int ***)0x0) {
    pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x0;
    pppiStack_220 = pppiVar3;
    FUN_0040f0b0();
    piVar4 = (int *)FUN_0040f110();
    ppiStack_230 = (int **)0x4074f6;
    pvVar5 = operator_new((uint)piVar4,(nothrow_t *)&DAT_005b6164);
    ppiStack_230 = (int **)0x0;
    ppiStack_234 = (int **)0x0;
    ppiStack_23c = (int **)0x407502;
    ppiStack_238 = (int **)pppiVar3;
    FUN_0040f0b0();
    piStack_244 = (int *)0x1;
    ppiStack_24c = (int **)0x40750c;
    piStack_248 = pvVar5;
    piStack_240 = piVar4;
    ppiStack_23c = (int **)pppiVar3;
    FUN_0040f000();
    ppiStack_250 = (int **)0x407512;
    ppiStack_24c = (int **)pppiVar3;
    FUN_0040efb0();
    pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x0;
    pppiStack_220 = (int ***)0x0;
    ppiStack_230 = (int **)0x0;
    ppiStack_234 = (int **)0x0;
    ppiStack_238 = (int **)0x0;
    ppiStack_23c = (int **)0x1;
    piStack_240 = (int *)0xffffffff;
    piStack_244 = (int *)0xffffffff;
    ppiStack_250 = (int **)param_2;
    uStack_254 = 0x40753d;
    ppiStack_24c = pvVar5;
    piStack_248 = piVar4;
    iVar6 = FUN_00495104();
    if (pvVar5 != (void *)0x0) {
      pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x407550;
      operator_delete__(pvVar5);
    }
    if (-1 < iVar6) {
      iVar6 = 0;
      uStack_1d0 = 0;
      local_1d4 = (undefined4 *)((int)param_4 * 0x40);
      pfVar7 = (float *)(local_1dc + 0x8c);
      do {
        uVar13 = 0;
        pfVar8 = pfVar7;
        iVar14 = 0x3f;
        do {
          local_1c8 = uVar13 >> 10;
          uStack_1c4 = iVar6 * param_5 >> 10;
          iVar10 = iVar14 + 0x40;
          pfVar7 = pfVar8 + 4;
          pfVar8[-1] = (float)local_1c8 / (float)param_4;
          uStack_1c0 = (uint)(iVar14 * (int)param_4) >> 10;
          uVar13 = uVar13 + (int)local_1d4;
          *pfVar8 = (float)uStack_1c4 / (float)param_5;
          uStack_1bc = (iVar6 + 0x3f) * param_5 >> 10;
          pfVar8[1] = (float)uStack_1c0 / (float)param_4;
          pfVar8[2] = (float)uStack_1bc / (float)param_5;
          pfVar8 = pfVar7;
          iVar14 = iVar10;
        } while (iVar10 < 0x43f);
        iVar6 = iVar6 + 0x40;
      } while (iVar6 < 0x400);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (abStack_144 + 0xc);
      return 1;
    }
  }
  pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                &ppiStack_1e0;
  ppiStack_1f4 = (int **)param_4;
  uStack_1fc = param_5;
  pppiStack_220 = (int ***)0x1;
  ppiStack_230 = (int **)param_2;
  piStack_1f8 = (int *)0x0;
  piStack_1d8 = (int *)0x0;
  piStack_1f0 = (int *)0x0;
  piStack_1ec = (int *)0x0;
  piStack_200 = (int *)0x0;
  ppiStack_1e4 = (int **)0x0;
  uStack_201 = 0;
  ppiStack_1e0 = (int **)0x15;
  ppiStack_234 = (int **)0x407695;
  iVar6 = FUN_004942e0();
  if (-1 < iVar6) {
    pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x0;
    pppiStack_220 = (int ***)ppiStack_1e0;
    ppiStack_230 = ppiStack_1f4;
    ppiStack_234 = (int **)param_2;
    ppiStack_238 = (int **)0x4076bc;
    iVar6 = FUN_00494308();
    if (-1 < iVar6) {
      iStack_198 = ((uint)ppiStack_1f4 >> 4) - 0xd;
      ppiStack_19c = (int **)(uStack_1fc >> 4);
      uStack_194 = 0;
      uStack_190 = 0;
      uStack_18c = 400;
      uStack_188 = 0;
      uStack_187 = 0;
      uStack_186 = 0;
      uStack_185 = 1;
      uStack_184 = 0;
      uStack_183 = 0;
      uStack_182 = 4;
      uStack_181 = 0x31;
      pcVar11 = acStack_180;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        pcVar11[0] = '\0';
        pcVar11[1] = '\0';
        pcVar11[2] = '\0';
        pcVar11[3] = '\0';
        pcVar11 = pcVar11 + 4;
      }
      pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    0x407755;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &local_1c8,"Font");
      pbStack_21c = abStack_144 + 0x28;
      pppiStack_220 = (int ***)0x40776e;
      this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_004224c0();
      pcVar9 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               c_str(this);
      pcVar11 = acStack_180;
      do {
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        *pcVar11 = cVar2;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (abStack_144 + 0x28);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &local_1c8);
      pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    &ppiStack_19c;
      pppiStack_220 = param_2;
      iVar6 = FUN_0049529f();
      if (-1 < iVar6) {
        pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)param_2;
        pppiStack_220 = (int ***)0x4077c5;
        (*(code *)(*param_2)[0x20])();
        pppiStack_220 = &ppiStack_1f4;
        (*(code *)(*param_2)[0x21])();
        puVar19 = &stack0xfffffdf0;
        ppiStack_230 = (int **)piStack_1e8;
        ppiStack_234 = (int **)0x4077e4;
        (**(code **)(*piStack_1e8 + 0x3c))();
        ppiStack_234 = (int **)0x0;
        ppiStack_238 = (int **)pbStack_21c;
        ppiStack_23c = (int **)param_2;
        piStack_240 = (int *)0x4077f1;
        (*(code *)(*param_2)[0x1f])();
        piStack_240 = (int *)0x0;
        piStack_244 = (int *)0x3f800000;
        piStack_248 = (int *)0x0;
        ppiStack_24c = (void *)0x1;
        ppiStack_250 = (int **)0x0;
        uStack_254 = 0;
        ppiStack_258 = (int **)param_2;
        ppiStack_25c = (int **)0x407806;
        (*(code *)(*param_2)[0x24])();
        uVar13 = 0;
        do {
          abStack_144[uVar13] = SUB41(uVar13,0);
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0x100);
        ppiStack_25c = (int **)param_2;
        (*(code *)(*param_2)[0x22])();
        (**(code **)(*piStack_240 + 0x14))(piStack_240);
        iVar6 = 0;
        puVar12 = auStack_14c;
        pfVar7 = (float *)(puVar19 + 0x8c);
        do {
          iVar14 = 0;
          do {
            uVar13 = (uint)((iVar14 + 0x3f) * (int)piStack_240) >> 10;
            piStack_1f0 = piStack_240;
            piStack_1ec = (int *)0x0;
            piStack_1f8 = piStack_248;
            ppiStack_1f4 = (int **)0x0;
            pfVar7[-1] = (float)((uint)(iVar14 * (int)piStack_240) >> 10) / (float)piStack_240;
            *pfVar7 = (float)((uint)(iVar6 * (int)piStack_248) >> 10) / (float)piStack_248;
            pfVar7[1] = (float)uVar13 / (float)piStack_240;
            pfVar7[2] = (float)((uint)((iVar6 + 0x3f) * (int)piStack_248) >> 10) /
                        (float)piStack_248;
            (**(code **)(*piStack_244 + 0x18))
                      (piStack_244,puVar12,1,&stack0xfffffdec,0x29,0xffffffff);
            pfVar7 = pfVar7 + 4;
            iVar14 = iVar14 + 0x40;
            puVar12 = puVar12 + 1;
          } while (iVar14 < 0x400);
          iVar6 = iVar6 + 0x40;
        } while (iVar6 < 0x400);
        (**(code **)(*piStack_244 + 0x20))(piStack_244);
        piVar4 = (int *)0x0;
        if (piStack_248 != (int *)0x0) {
          (**(code **)(*piStack_248 + 8))(piStack_248);
          piStack_248 = (int *)0x0;
        }
        pppiVar17 = (int ***)ppiStack_4c;
        (*(code *)(*ppiStack_4c)[0x23])(ppiStack_4c);
        piVar18 = (int *)0x1;
        pppiVar3 = (int ***)ppiStack_4c;
        (*(code *)(*ppiStack_4c)[0x14])(ppiStack_4c,uStack_48,piStack_44,1,0,0x15,2,&pppiStack_220);
        (**(code **)(*piStack_240 + 0x3c))(piStack_240,0,&ppiStack_25c);
        uVar16 = 0;
        (*(code *)(*ppiStack_4c)[0x1c])(ppiStack_4c,piStack_44,0,0,pppiVar17);
        (**(code **)(*piStack_44 + 0x20))(piStack_44,&piStack_1f0);
        iVar6 = (*(code *)(*pppiVar3)[9])(pppiVar3,&piStack_200,0,0x10);
        if (-1 < iVar6) {
          pvVar5 = operator_new((uint)piStack_1f8,(nothrow_t *)&DAT_005b6164);
          if (piStack_1ec != (int *)0x0) {
            do {
              piVar18 = (int *)0x0;
              if (piStack_1f0 != (int *)0x0) {
                do {
                  iVar14 = (int)((int)piStack_1f0 * (int)piVar4 + (int)piVar18) * 4;
                  iVar6 = (int)(((int)piStack_1ec + (-1 - (int)piVar4)) * (int)piStack_1f0 +
                               (int)piVar18) * 3;
                  piVar18 = (int *)((int)piVar18 + 1);
                  *(undefined1 *)(iVar6 + (int)pvVar5) = *(undefined1 *)(iVar14 + uVar13);
                  *(undefined1 *)((int)pvVar5 + iVar6 + 1) = *(undefined1 *)(iVar14 + 1 + uVar13);
                  *(undefined1 *)((int)pvVar5 + iVar6 + 2) = *(undefined1 *)(iVar14 + 2 + uVar13);
                } while (piVar18 < piStack_1f0);
              }
              piVar4 = (int *)((int)piVar4 + 1);
            } while (piVar4 < piStack_1ec);
          }
          piVar4 = piStack_1f0;
          piVar18 = piStack_1ec;
          pvVar15 = pvVar5;
          pcVar11 = std::
                    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                    c_str((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)&piStack_1e8);
          FUN_004f5140(pcVar11,piVar4,piVar18,pvVar15);
                    /* WARNING: Subroutine does not return */
          operator_delete(pvVar5);
        }
        if (piVar18 != (int *)0x0) {
          (**(code **)(*piVar18 + 8))(piVar18);
        }
        (*(code *)(*ppiStack_4c)[0x1f])(ppiStack_4c,uVar16,pppiVar17);
        if (piStack_200 != (int *)0x0) {
          pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x407a97;
          (**(code **)(*piStack_200 + 8))();
          piStack_200 = (int *)0x0;
        }
        if (piStack_1f0 != (int *)0x0) {
          pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x407aa9;
          (**(code **)(*piStack_1f0 + 8))();
          piStack_1f0 = (int *)0x0;
        }
        if (piStack_1ec != (int *)0x0) {
          pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x407abb;
          (**(code **)(*piStack_1ec + 8))();
          piStack_1ec = (int *)0x0;
        }
        pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)&ppiStack_1e0;
        ppiStack_1f4 = (int **)param_4;
        uStack_1fc = param_5;
        pppiStack_220 = (int ***)0x0;
        ppiStack_230 = ppiStack_4c;
        ppiStack_1e0 = (int **)0x15;
        ppiStack_234 = (int **)0x407af5;
        iVar6 = FUN_004942e0();
        puVar1 = local_1d4;
        if (-1 < iVar6) {
          pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)0x0;
          pppiStack_220 = (int ***)ppiStack_1e0;
          ppiStack_230 = ppiStack_1f4;
          ppiStack_234 = ppiStack_4c;
          ppiStack_238 = (int **)0x407b1c;
          iVar6 = FUN_00494308();
          if (-1 < iVar6) {
            pppiStack_220 = (int ***)*puVar1;
            pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)0x0;
            (*(code *)(*pppiStack_220)[0xf])();
            ppiStack_230 = (int **)0x407b3e;
            (*(code *)(*ppiStack_1e4)[0xf])();
            pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)0xffffffff;
            pppiStack_220 = (int ***)0x0;
            ppiStack_230 = (int **)0x0;
            ppiStack_234 = ppiStack_1e4;
            ppiStack_238 = (int **)0x407b54;
            FUN_0049436e();
            if ((int ***)ppiStack_1e4 != (int ***)0x0) {
              pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x407b62;
              (*(code *)(*ppiStack_1e4)[2])();
              ppiStack_1e4 = (int **)0x0;
            }
            if (piStack_200 != (int *)0x0) {
              pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)0x407b74;
              (**(code **)(*piStack_200 + 8))();
              piStack_200 = (int *)0x0;
            }
            uStack_201 = 1;
          }
        }
      }
    }
  }
  if (piStack_1f8 != (int *)0x0) {
    pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x407b8d;
    (**(code **)(*piStack_1f8 + 8))();
    piStack_1f8 = (int *)0x0;
  }
  if (piStack_1d8 != (int *)0x0) {
    pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x407b9f;
    (**(code **)(*piStack_1d8 + 8))();
    piStack_1d8 = (int *)0x0;
  }
  if (piStack_1f0 != (int *)0x0) {
    pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x407bb1;
    (**(code **)(*piStack_1f0 + 8))();
    piStack_1f0 = (int *)0x0;
  }
  if (piStack_1ec != (int *)0x0) {
    pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x407bc3;
    (**(code **)(*piStack_1ec + 8))();
    piStack_1ec = (int *)0x0;
  }
  if (piStack_200 != (int *)0x0) {
    pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x407bd5;
    (**(code **)(*piStack_200 + 8))();
    piStack_200 = (int *)0x0;
  }
  if ((int ***)ppiStack_1e4 != (int ***)0x0) {
    pbStack_21c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x407be7;
    (*(code *)(*ppiStack_1e4)[2])();
    ppiStack_1e4 = (int **)0x0;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_144 + 0xc);
  return uStack_201;
}




/* Function: FUN_00533300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00533300(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5,
            int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 *local_30;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_2c [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [16];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 uStack_8;
  undefined3 uStack_7;
  undefined4 local_4;
  
  uStack_8 = 0x2f;
  uStack_7 = 0x57fd;
  pvStack_c = ExceptionList;
  local_30 = abStack_60;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (abStack_60,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000018);
  uStack_70 = param_3;
  uStack_74 = 0x533357;
  FUN_0045ec30();
  FUN_0040ad60();
  *param_1 = &PTR_LAB_00592768;
  param_1[0x50] = &PTR_LAB_00592758;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  local_4._0_1_ = 3;
  FUN_00459730();
  FUN_00459780();
  param_4 = (float)(int)param_5 * _DAT_00592754;
  param_5 = (float)param_6 * _DAT_00592750;
  param_6 = FUN_00493c27();
  local_4._0_1_ = 4;
  if (param_6 == 0) {
    uVar1 = 0;
  }
  else {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_60,"LIST MAPS:");
    local_30 = (undefined1 *)&uStack_7c;
    local_4._0_1_ = 5;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &uStack_7c,"");
    local_4._0_1_ = 4;
    uVar5 = 400;
    uVar1 = FUN_004cf110(400);
    uVar2 = FUN_004cf110(uVar1);
    uVar1 = FUN_0045ce80(uVar2,uVar1,uVar5);
  }
  local_4._0_1_ = 3;
  param_1[0x5b] = uVar1;
  FUN_00459020();
  FUN_00459050();
  FUN_004596a0();
  FUN_00459070();
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
  FUN_0045e010();
  param_5 = 2.52234e-43;
  puVar4 = param_1 + 0x61;
  param_2 = 4;
  do {
    iVar3 = FUN_00493c27();
    uStack_8 = 7;
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &stack0xffffff9c,"");
      local_30 = &stack0xffffff80;
      uStack_8 = 8;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &stack0xffffff80,"");
      uVar6 = 0x23;
      uStack_8 = 7;
      uVar5 = 400;
      uVar1 = FUN_004cf110(400,0x23);
      uVar2 = FUN_004cf110(uVar1);
      uVar1 = FUN_0045ce80(uVar2,uVar1,uVar5,uVar6);
    }
    uStack_8 = 3;
    *puVar4 = uVar1;
    FUN_00459020();
    FUN_00459050();
    FUN_004596a0();
    FUN_00459070();
    uStack_54 = 0x5335d5;
    FUN_00459030();
    FUN_0041cd90();
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (abStack_2c,"font_01");
    uStack_8 = 9;
    FUN_004222d0();
    FUN_00458b20();
    uStack_8 = 3;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_2c);
    FUN_00459690();
    (**(code **)(*(int *)*puVar4 + 0x28))();
    FUN_00459060();
    FUN_0045e010();
    param_5 = (float)((int)param_5 + 0x2d);
    puVar4 = puVar4 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  param_5 = (float)FUN_00493c27();
  uStack_8 = 10;
  if (param_5 == 0.0) {
    uVar1 = 0;
  }
  else {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xffffff9c,">");
    FUN_004cf110();
    FUN_004cf110();
    uStack_70 = 0x5336b7;
    uStack_70 = FUN_004cf110();
    uStack_74 = 0x5336c7;
    uStack_74 = FUN_004cf110();
    uStack_78 = 0x5336cf;
    uVar1 = FUN_0045dc10();
  }
  uStack_8 = 3;
  param_1[0x65] = uVar1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_2c,"font_01")
  ;
  uStack_8 = 0xb;
  FUN_004222d0();
  FUN_00458b20();
  _uStack_8 = CONCAT31(uStack_7,3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_2c);
  uStack_54 = 0x533726;
  FUN_004597c0();
  FUN_004597e0();
  *(undefined1 *)(param_1[0x65] + 0x2c) = 1;
  (**(code **)(*(int *)param_1[0x65] + 0x28))();
  uStack_54 = 0x533757;
  FUN_0045e010();
  uStack_54 = 0x533761;
  param_4 = (float)FUN_00493c27();
  pvStack_c._0_1_ = 0xc;
  if (param_4 == 0.0) {
    uVar1 = 0;
  }
  else {
    uStack_70 = 0x533787;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0xffffff98,">");
    FUN_004cf110();
    uStack_70 = 0x5337a6;
    uStack_70 = FUN_004cf110();
    uStack_74 = 0x5337b6;
    uStack_74 = FUN_004cf110();
    uStack_78 = 0x5337c6;
    uStack_78 = FUN_004cf110();
    uStack_7c = 0x5337ce;
    uVar1 = FUN_0045dc10();
  }
  pvStack_c._0_1_ = 3;
  param_1[0x66] = uVar1;
  uStack_54 = 0x5337eb;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_30,"font_01");
  pvStack_c._0_1_ = 0xd;
  uStack_54 = 0x5337fc;
  FUN_004222d0();
  uStack_54 = 0x533808;
  FUN_00458b20();
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &local_30);
  uStack_54 = 0x28;
  uStack_58 = 0x533825;
  FUN_004597c0();
  uStack_54 = 0x533832;
  FUN_004597e0();
  *(undefined1 *)(param_1[0x66] + 0x2c) = 1;
  uStack_54 = 0x533848;
  (**(code **)(*(int *)param_1[0x66] + 0x28))();
  uStack_54 = param_1[0x66];
  uStack_58 = 0x533856;
  FUN_0045e010();
  uStack_10 = 0xffffffff;
  uStack_54 = 0x533868;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &param_4);
  ExceptionList = pvStack_18;
  return param_1;
}





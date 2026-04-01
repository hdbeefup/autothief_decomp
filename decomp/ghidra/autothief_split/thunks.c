/* thunks functions - AutoThief.exe Ghidra decompilation */

/* Function: thunk_FUN_00401560 */

void thunk_FUN_00401560(void)

{
  FUN_00401560();
  return;
}




/* Function: thunk_FUN_00401560 */

void thunk_FUN_00401560(void)

{
  FUN_00401560();
  return;
}




/* Function: thunk_FUN_00401940 */

void __fastcall thunk_FUN_00401940(undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  psVar2 = (short *)param_1[3];
  if ((psVar2 != (short *)0x0) && (iVar3 = param_1[4], iVar3 != 0)) {
    sVar1 = *psVar2;
    while (sVar1 != -1) {
      if ((*(byte *)(iVar3 + 1) & 0x20) != 0) {
        free(*(void **)(iVar3 + 4));
      }
      psVar2 = psVar2 + 2;
      iVar3 = iVar3 + 8;
      sVar1 = *psVar2;
    }
    operator_delete__((void *)param_1[4]);
  }
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




/* Function: thunk_FUN_00409200 */

void __fastcall thunk_FUN_00409200(int param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  
  this = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
          (param_1 + 4);
  if (this == (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
            (param_1 + 8);
  for (; this != pbVar1; this = this + 0x1c) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: thunk_FUN_0040cf00 */

void __fastcall thunk_FUN_0040cf00(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iStack_4;
  
  iStack_4 = param_1;
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
  FUN_0040a340(&iStack_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 8));
}




/* Function: thunk_FUN_0045c780 */

void __fastcall thunk_FUN_0045c780(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_0057c666;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_0058a2f8;
  uStack_4 = 1;
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
  ExceptionList = pvStack_c;
  return;
}




/* Function: thunk_FUN_00469dd0 */

void __fastcall thunk_FUN_00469dd0(int param_1)

{
  if (*(void **)(param_1 + 0xd4) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xd4));
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(void **)(param_1 + 0xdc) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xdc));
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(void **)(param_1 + 0xe4) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xe4));
  }
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return;
}




/* Function: thunk_FUN_0046b600 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0046b600(float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fStack_8 = param_1[1];
  fStack_c = *param_1;
  fStack_4 = param_1[2];
  fVar1 = (float10)FUN_00463b00(&fStack_c);
  fVar1 = ((float10)fStack_8 - (fVar1 + (float10)_DAT_00588808)) * (float10)_DAT_00589fd4;
  if (fVar1 < (float10)_DAT_00588830) {
    fVar1 = (float10)_DAT_00588b48;
  }
  if ((float10)_DAT_0058a9f0 < fVar1) {
    fVar1 = (float10)_DAT_0058a9e8;
  }
  fVar2 = (float10)fcos((float10)fStack_4 * (float10)_DAT_0058a9e4);
  fVar3 = (float10)fsin((float10)fStack_c * (float10)_DAT_0058a9e4);
  param_1[8] = (float)(ABS(fVar3) + ABS(fVar2));
  param_1[9] = (float)((float10)_DAT_00583354 - fVar1);
  return;
}




/* Function: thunk_FUN_00493c27 */

void thunk_FUN_00493c27(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  
  while( true ) {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) break;
    iVar1 = _callnewh(param_1);
    if (iVar1 == 0) {
      std::_Nomemory();
    }
  }
  return;
}




/* Function: thunk_FUN_0049565a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0049565a(void)

{
                    /* WARNING: Could not recover jumptable at 0x00495667. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_005a25bc)();
  return;
}




/* Function: thunk_FUN_00495964 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00495964(void)

{
                    /* WARNING: Could not recover jumptable at 0x00495971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_005a25c8)();
  return;
}




/* Function: thunk_FUN_004959fb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004959fb(void)

{
                    /* WARNING: Could not recover jumptable at 0x00495a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_005a25dc)();
  return;
}




/* Function: thunk_FUN_00495b0f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00495b0f(void)

{
                    /* WARNING: Could not recover jumptable at 0x00495b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_005a25c0)();
  return;
}




/* Function: thunk_FUN_00495de0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00495de0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00495ded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_005a25a8)();
  return;
}




/* Function: thunk_FUN_00495f69 */

void thunk_FUN_00495f69(void)

{
                    /* WARNING: Could not recover jumptable at 0x00495f76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_005a25ac)();
  return;
}




/* Function: thunk_FUN_004961b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004961b2(void)

{
                    /* WARNING: Could not recover jumptable at 0x004961bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_005a2634)();
  return;
}




/* Function: thunk_FUN_00496475 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00496475(void)

{
                    /* WARNING: Could not recover jumptable at 0x00496482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_005a25e8)();
  return;
}




/* Function: thunk_FUN_0049689f */

void thunk_FUN_0049689f(void)

{
                    /* WARNING: Could not recover jumptable at 0x004968cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_005a2608)();
  return;
}




/* Function: thunk_FUN_0049692f */

void thunk_FUN_0049692f(void)

{
                    /* WARNING: Could not recover jumptable at 0x0049694b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_005a2618)();
  return;
}




/* Function: thunk_FUN_004969cb */

void thunk_FUN_004969cb(void)

{
                    /* WARNING: Could not recover jumptable at 0x004969e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_005a261c)();
  return;
}




/* Function: thunk_FUN_00496c22 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00496c22(void)

{
                    /* WARNING: Could not recover jumptable at 0x00496c2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_005a2638)();
  return;
}




/* Function: thunk_FUN_00496d45 */

void thunk_FUN_00496d45(void)

{
                    /* WARNING: Could not recover jumptable at 0x00496d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_005a263c)();
  return;
}




/* Function: thunk_FUN_0049733a */

void thunk_FUN_0049733a(void)

{
                    /* WARNING: Could not recover jumptable at 0x00497368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_005a2604)();
  return;
}




/* Function: thunk_FUN_00497447 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00497447(void)

{
                    /* WARNING: Could not recover jumptable at 0x00497454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_005a25ec)();
  return;
}




/* Function: thunk_FUN_004975b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004975b6(void)

{
                    /* WARNING: Could not recover jumptable at 0x004975c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_005a2650)();
  return;
}




/* Function: thunk_FUN_004977a2 */

void thunk_FUN_004977a2(void)

{
                    /* WARNING: Could not recover jumptable at 0x004977c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_005a262c)();
  return;
}




/* Function: thunk_FUN_004979fb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004979fb(void)

{
                    /* WARNING: Could not recover jumptable at 0x00497a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_005a25f4)();
  return;
}




/* Function: thunk_FUN_00497ab2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00497ab2(void)

{
                    /* WARNING: Could not recover jumptable at 0x00497abf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_005a25f8)();
  return;
}




/* Function: thunk_FUN_00497b67 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00497b67(void)

{
                    /* WARNING: Could not recover jumptable at 0x00497b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_005a25d0)();
  return;
}




/* Function: thunk_FUN_00497bb2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00497bb2(void)

{
                    /* WARNING: Could not recover jumptable at 0x00497bbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_005a25d4)();
  return;
}




/* Function: thunk_FUN_0049e5c8 */

undefined4 __fastcall thunk_FUN_0049e5c8(byte *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 != (int *)0x0) || (piVar1 = *(int **)(param_1 + 4), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x28))(piVar1);
  }
  if ((((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) &&
      (piVar1 = *(int **)(param_1 + 0xc), piVar1 != (int *)0x0)) && ((*param_1 & 1) == 0)) {
    (**(code **)(*piVar1 + 0x70))(piVar1,*(int *)(param_1 + 8),0,0,*(int *)(param_1 + 4),0);
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return 0;
}




/* Function: thunk_FUN_0049e637 */

undefined4 __fastcall thunk_FUN_0049e637(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(piVar1);
  }
  *param_1 = 0;
  return 0;
}




/* Function: thunk_FUN_0049edc5 */

void __fastcall thunk_FUN_0049edc5(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0058b958;
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_1[0x413]);
}




/* Function: thunk_FUN_0049f0d2 */

void thunk_FUN_0049f0d2(void)

{
  uint uVar1;
  undefined4 *extraout_ECX;
  uint uVar2;
  int unaff_EBP;
  
  FUN_004cf66c();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_0058b968;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((extraout_ECX[0x42f] != 0) && (extraout_ECX[0x430] != 0)) {
    uVar2 = extraout_ECX[0x427];
    uVar1 = extraout_ECX[0x428];
    *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX[0x430];
    if (uVar2 < uVar1) {
      do {
        if ((uint)extraout_ECX[0x424] < (uint)extraout_ECX[0x426]) {
                    /* WARNING: Subroutine does not return */
          operator_delete(*(void **)(*(int *)(unaff_EBP + -0x10) + 4));
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)extraout_ECX[0x428]);
    }
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)extraout_ECX[0x42e]);
}




/* Function: thunk_FUN_004a37e6 */

void thunk_FUN_004a37e6(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004cf66c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0058b9c8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004a295f();
  if ((void *)extraout_ECX[0x41b] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)extraout_ECX[0x41b]);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0049edc5();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}




/* Function: thunk_FUN_004b9d15 */

void thunk_FUN_004b9d15(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x28))(param_1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}




/* Function: thunk_FUN_004ba8c7 */

void thunk_FUN_004ba8c7(int param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    free(param_2);
  }
  return;
}




/* Function: thunk_FUN_00526850 */

void __fastcall thunk_FUN_00526850(undefined4 *param_1)

{
  void *pvVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  puStack_8 = &LAB_0057f914;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_0058f968;
  pvVar1 = (void *)param_1[0xac];
  iStack_4 = 2;
  if (pvVar1 != (void *)0x0) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               ((int)pvVar1 + 700));
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  param_1[0xac] = 0;
  iStack_4._0_1_ = 1;
  iStack_4._1_3_ = 0;
  _eh_vector_destructor_iterator_(param_1 + 0xfc,0x10,4,FUN_00407150);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_00530a50();
  FUN_0053eb40();
  ExceptionList = pvStack_c;
  return;
}




/* Function: thunk_FUN_004e0fa0 */

void __fastcall thunk_FUN_004e0fa0(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x4c) {
    FUN_004d5fa0();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 4));
}




/* Function: thunk_FUN_00502b20 */

void thunk_FUN_00502b20(void)

{
  FUN_00502b20();
  return;
}




/* Function: thunk_FUN_00502bf0 */

void thunk_FUN_00502bf0(void)

{
  FUN_00502bf0();
  return;
}




/* Function: thunk_FUN_00505280 */

void __fastcall thunk_FUN_00505280(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iStack_4;
  
  iStack_4 = param_1;
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
  FUN_00503780(&iStack_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 8));
}




/* Function: thunk_FUN_0053eb40 */

/* WARNING: Removing unreachable block (ram,0x0053eba1) */

void __fastcall thunk_FUN_0053eb40(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0xa6];
  *param_1 = &PTR_LAB_00592d50;
  if (piVar1 != (int *)param_1[0xa7]) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)param_1[0xa7]);
  }
  if ((void *)param_1[0xa6] == (void *)0x0) {
    param_1[0xa6] = 0;
    param_1[0xa7] = 0;
    param_1[0xa8] = 0;
    param_1[0xa6] = 0;
    param_1[0xa7] = 0;
    param_1[0xa8] = 0;
    FUN_005059c0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_1[0xa6]);
}




/* Function: thunk_FUN_005059c0 */

void __fastcall thunk_FUN_005059c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_005910c8;
  FUN_00500a90();
  if (param_1[0x8e] == 0) {
    operator_delete__((void *)0x0);
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x7c));
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x70));
  if ((void *)param_1[0x6d] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[0x6d]);
  }
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  thunk_FUN_00505280();
  FUN_00407300();
  FUN_00407300();
  FUN_005051e0();
  FUN_0040da90();
  return;
}




/* Function: thunk_FUN_004ffd30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall thunk_FUN_004ffd30(int *param_1,int *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  iVar2 = param_3;
  iVar4 = param_1[0x6b];
  if ((iVar4 != 0) && ((*(char *)(iVar4 + 4) == '\0' || (*(char *)(iVar4 + 6) == '\0')))) {
    return 0;
  }
  if (param_1[0x88] < 1) {
    if (param_1[0x88] < 0) {
      fVar6 = (float10)FUN_0041ce10();
      fVar1 = (float)param_1[0x87];
      param_1[0x87] = (int)(float)((float10)fVar1 - fVar6);
      if ((float10)fVar1 - fVar6 < (float10)_DAT_00582ad8) {
        param_1[0x87] = 0;
      }
    }
  }
  else {
    fVar6 = (float10)FUN_0041ce10();
    fVar1 = (float)param_1[0x87];
    param_1[0x87] = (int)(float)(fVar6 + (float10)fVar1);
    if ((float10)_DAT_00583354 < fVar6 + (float10)fVar1) {
      param_1[0x87] = 0x3f800000;
    }
  }
  if ((float)param_1[0x87] < _DAT_00582ad8 == ((float)param_1[0x87] == _DAT_00582ad8)) {
    if (((*(char *)(iVar2 + 0x18ed) != '\0') &&
        (iVar4 = FUN_0041cb10(), *(char *)(iVar4 + 0x98) != '\0')) && ((char)param_1[0x9e] == '\0'))
    {
      return 0;
    }
    param_3 = 0;
    if (*(char *)((int)param_1 + 0x276) != '\0') {
      uVar3 = (**(code **)(*param_1 + 0x84))(iVar2,"Render",0);
      *(undefined1 *)((int)param_1 + 0x276) = uVar3;
    }
    if (param_1[0x6b] != 0) {
      *(undefined1 *)((int)param_1 + 0x277) = *(undefined1 *)(param_1[0x6b] + 0x277);
    }
    if (*(char *)((int)param_1 + 0x277) != '\0') {
      (**(code **)(*param_2 + 0xcc))(param_2,0x16,&param_3);
      if (param_3 == 2) {
        (**(code **)(*param_2 + 200))(param_2,0x16,3);
      }
      else if (param_3 == 3) {
        (**(code **)(*param_2 + 200))(param_2,0x16,2);
      }
    }
    iVar4 = FUN_00440000(param_2,iVar2,param_1);
    if (0 < iVar4) {
      uVar5 = (**(code **)(*param_1 + 0x88))();
      FUN_00420710(param_1,uVar5);
    }
    if (*(char *)((int)param_1 + 0x277) != '\0') {
      (**(code **)(*param_2 + 200))(param_2,0x16,param_3);
    }
    iVar2 = param_1[0x21];
    param_1[0x21] = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      param_1[0x21] = 8;
    }
    return iVar4;
  }
  return 0;
}





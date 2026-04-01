/* audio functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_004f59b0 */

undefined4 __fastcall FUN_004f59b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0xbf800000;
  local_c = 0;
  local_8 = 0x3f800000;
  local_4 = 0;
  iVar2 = alcOpenDevice(0);
  *(int *)(param_1 + 0xbc) = iVar2;
  if (iVar2 == 0) {
    FUN_0041ce80("Default sound device not present");
    uVar3 = FUN_0041e5b0();
    FUN_0040a410(uVar3);
  }
  else {
    uVar3 = alcCreateContext(iVar2,0);
    *(undefined4 *)(param_1 + 0xc0) = uVar3;
    cVar1 = FUN_004f5800();
    if (cVar1 != '\0') {
      alcMakeContextCurrent(*(undefined4 *)(param_1 + 0xc0));
      alListenerfv(0x1004,&local_30);
      alListenerfv(0x1006,&local_24);
      alListenerfv(0x100f,&local_18);
      return 1;
    }
  }
  return 0;
}




/* Function: FUN_004f5bb0 */

void __fastcall FUN_004f5bb0(int param_1)

{
  char cVar1;
  
  alSourceStop(*(undefined4 *)(param_1 + 0x2c));
  cVar1 = alIsSource(*(undefined4 *)(param_1 + 0x2c));
  if (cVar1 != '\0') {
    alDeleteSources(1,(undefined4 *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    ov_clear(*(int *)(param_1 + 0x30));
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x30));
  }
  return;
}




/* Function: FUN_004f7070 */

uint __thiscall FUN_004f7070(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint in_EAX;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 uVar7;
  
  uVar1 = param_4;
  uVar5 = 0;
  if (param_4 == 0) {
    return in_EAX & 0xffffff00;
  }
  pvVar2 = operator_new(param_4,(nothrow_t *)&DAT_005b6164);
  iVar3 = param_3;
  if (uVar1 != 0) {
    do {
      iVar3 = ov_read(*(undefined4 *)(param_1 + 0x30),uVar5 + (int)pvVar2,uVar1 - uVar5,0,2,1,
                      &param_4);
      if (iVar3 == 0) break;
      if (-1 < iVar3) {
        uVar5 = uVar5 + iVar3;
      }
    } while (uVar5 < uVar1);
    if (0 < (int)uVar5) {
      iVar4 = FUN_004f6810(&param_3);
      uVar7 = *(undefined4 *)(iVar4 + 0x20);
      pvVar6 = pvVar2;
      iVar4 = FUN_004f6810(&param_3);
      alBufferData(param_3,*(undefined4 *)(iVar4 + 0x24),pvVar6,uVar5,uVar7);
      FUN_004f58e0();
    }
  }
  operator_delete__(pvVar2);
  return (uint)(0 < iVar3);
}




/* Function: FUN_004f76f0 */

undefined4 __thiscall
FUN_004f76f0(int param_1,int param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
            char param_4)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  int local_44;
  int local_40;
  undefined4 local_3c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [28];
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  char local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057e798;
  local_c = ExceptionList;
  local_40 = 1;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
  puVar11 = &DAT_00582818;
  local_4 = 0;
  local_44 = 0;
  pcVar5 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (param_3);
  iVar6 = FUN_00410660(pcVar5,puVar11);
  *(int *)(param_1 + 0x3c) = iVar6;
  if (iVar6 != 0) {
    pvVar7 = operator_new(0x2d0,(nothrow_t *)&DAT_005b6164);
    *(void **)(param_1 + 0x30) = pvVar7;
    iVar6 = ov_open_callbacks(*(undefined4 *)(param_1 + 0x3c),pvVar7,0,0xffffffff,&LAB_004f5ab0,
                              &LAB_004f5ac0,&LAB_004f5af0,&LAB_004f5ae0);
    if (-1 < iVar6) {
      if (param_4 == '\0') {
        piVar1 = *(int **)(param_2 + 0x8c);
        piVar2 = (int *)*piVar1;
        while (piVar2 != piVar1) {
          bVar3 = std::operator==((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)(piVar2 + 5),param_3);
          if (bVar3) {
            local_44 = piVar2[3];
          }
          FUN_004f5cf0();
          piVar1 = *(int **)(param_2 + 0x8c);
        }
        iVar6 = ov_pcm_total(*(undefined4 *)(param_1 + 0x30),0xffffffff);
        iVar6 = iVar6 << 2;
      }
      else {
        iVar6 = 0x8000;
        local_40 = 4;
        alSourcei(*(undefined4 *)(param_1 + 0x2c),0x1007,0);
      }
      uVar8 = ov_comment(*(undefined4 *)(param_1 + 0x30),0xffffffff);
      *(undefined4 *)(param_1 + 0x34) = uVar8;
      iVar9 = ov_info(*(undefined4 *)(param_1 + 0x30),0xffffffff);
      *(int *)(param_1 + 0x38) = iVar9;
      local_1c = *(undefined4 *)(iVar9 + 8);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
                (local_38,param_3);
      local_10 = param_4;
      local_18 = (uint)(*(int *)(*(int *)(param_1 + 0x38) + 4) != 1) * 2 + 0x1101;
      if ((param_4 == '\0') && (local_44 != 0)) {
        puVar10 = (undefined4 *)FUN_004f6810(&local_44);
        alSourcei(*(undefined4 *)(param_1 + 0x2c),0x1009,*puVar10);
      }
      else {
        param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x0;
        if (0 < local_40) {
          do {
            alGenBuffers(1,&local_3c);
            cVar4 = FUN_004f58e0();
            if (cVar4 == '\0') goto LAB_004f7985;
            puVar10 = (undefined4 *)FUN_004f6810(&local_3c);
            *puVar10 = local_3c;
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            operator=((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(puVar10 + 1),local_38);
            puVar10[8] = local_1c;
            puVar10[9] = local_18;
            puVar10[10] = local_14;
            *(char *)(puVar10 + 0xb) = local_10;
            FUN_004f7070(param_2,local_3c,iVar6);
            cVar4 = FUN_004f58e0();
            if (cVar4 == '\0') goto LAB_004f7985;
            if (param_4 == '\0') {
              alSourcei(*(undefined4 *)(param_1 + 0x2c),0x1009,local_3c);
            }
            else {
              alSourceQueueBuffers(*(undefined4 *)(param_1 + 0x2c),1,&local_3c);
              cVar4 = FUN_004f58e0();
              if (cVar4 == '\0') goto LAB_004f7985;
            }
            param_3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)((int)param_3 + 1);
          } while ((int)param_3 < local_40);
        }
      }
      local_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
      ExceptionList = local_c;
      return 1;
    }
  }
LAB_004f7985:
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
  ExceptionList = local_c;
  return 0;
}





/* pbe_texture functions - AutoThief.exe Ghidra decompilation */

/* Function: FUN_004fb620 */

undefined4 __thiscall FUN_004fb620(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    return 0;
  }
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x6c) = local_18;
  local_20 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x68) = local_14;
  local_1c = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x70) = 0x18;
  *(undefined4 *)(param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x7c) = 3;
  *(undefined4 *)(param_1 + 0x80) = 6;
  uVar2 = FUN_00423420();
  uVar5 = param_3;
  iVar3 = FUN_004942e0(param_3,&local_14,&local_18,&local_1c,0,&local_20,uVar2);
  if (iVar3 < 0) {
    uVar5 = 0x170;
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x60);
    puVar6 = puVar1;
    uVar2 = FUN_00423420(puVar1);
    iVar3 = FUN_00494308(uVar5,local_14,local_18,local_1c,0,local_20,uVar2,puVar6);
    if (iVar3 < 0) {
      uVar5 = 0x177;
    }
    else {
      iVar3 = (**(code **)(*(int *)*puVar1 + 0x3c))((int *)*puVar1,0,&param_2);
      if (iVar3 < 0) {
        uVar5 = 0x17f;
      }
      else {
        uStack_8 = *(undefined4 *)(param_1 + 0x50);
        uStack_4 = *(undefined4 *)(param_1 + 0x54);
        uStack_c = 0;
        uStack_10 = 0;
        iVar3 = FUN_00493e04(param_2,0,0,*(undefined4 *)(param_1 + 0x48),
                             *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x58),0,
                             &uStack_10,0xffffffff,0);
        if (param_2 != (int *)0x0) {
          (**(code **)(*param_2 + 8))(param_2);
          param_2 = (int *)0x0;
        }
        if (iVar3 < 0) {
          FUN_004107e0(iVar3,"Src\\pbeTexture.cpp",0x18d,"May  9 2005","11:53:51");
          return 0;
        }
        uVar4 = (**(code **)(*(int *)*puVar1 + 0x34))((int *)*puVar1);
        if ((uVar4 < 2) || (iVar3 = FUN_0049459a(*puVar1,0,0,0xffffffff), -1 < iVar3)) {
          iVar3 = (**(code **)(*(int *)*puVar1 + 0x38))((int *)*puVar1,0,param_1 + 0x84);
          if (-1 < iVar3) {
            return 1;
          }
          uVar5 = 0x1a0;
        }
        else {
          uVar5 = 0x196;
        }
      }
    }
  }
  FUN_004107e0(iVar3,"Src\\pbeTexture.cpp",uVar5,"May  9 2005","11:53:51");
  return 0;
}




/* Function: FUN_004fba20 */

undefined4 __thiscall
FUN_004fba20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  char *pcVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar2 = FUN_00495144(param_3,*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),0xffffffff
                         ,param_4,0,param_5,param_6,0xffffffff,0xffffffff,0,param_1 + 0x68,0,
                         (undefined4 *)(param_1 + 100));
    if (iVar2 < 0) {
      iVar2 = FUN_00495104(param_3,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                           0xffffffff,0xffffffff,param_4,0,param_5,param_6,0xffffffff,0xffffffff,0,
                           param_1 + 0x68,0,(undefined4 *)(param_1 + 0x60));
      if (iVar2 < 0) {
        iVar3 = FUN_0041ce80();
        if (iVar3 != 0) {
          this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 FUN_004fb930();
          pcVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   ::c_str(this);
          uVar5 = FUN_0041e5b0("Texture [%s] creation failed!",pcVar4);
          FUN_0040a410(uVar5);
        }
        FUN_004107e0(iVar2,"Src\\pbeTexture.cpp",0x129,"May  9 2005","11:53:51");
        return 0;
      }
      piVar1 = *(int **)(param_1 + 0x60);
      iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,0,param_1 + 0x84);
      if (-1 < iVar2) {
        return 1;
      }
      uVar5 = 0x133;
    }
    else {
      piVar1 = *(int **)(param_1 + 100);
      iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,0,param_1 + 0x84);
      if (-1 < iVar2) {
        return 1;
      }
      uVar5 = 0x13e;
    }
    FUN_004107e0(iVar2,"Src\\pbeTexture.cpp",uVar5,"May  9 2005","11:53:51");
  }
  return 0;
}





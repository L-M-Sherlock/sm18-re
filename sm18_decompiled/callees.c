// === FUN_007e20ec @ 007e20ec size:1880 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e20ec(int param_1)

{
  undefined1 *puVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  uint extraout_ECX_08;
  uint extraout_ECX_09;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  int extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  uint extraout_EDX_11;
  uint extraout_EDX_12;
  uint extraout_EDX_13;
  uint extraout_EDX_14;
  uint extraout_EDX_15;
  uint extraout_EDX_16;
  int extraout_EDX_17;
  uint extraout_EDX_18;
  uint extraout_EDX_19;
  uint extraout_EDX_20;
  uint extraout_EDX_21;
  int extraout_EDX_22;
  uint extraout_EDX_23;
  uint extraout_EDX_24;
  uint extraout_EDX_25;
  uint extraout_EDX_26;
  int extraout_EDX_27;
  uint extraout_EDX_28;
  uint extraout_EDX_29;
  uint extraout_EDX_30;
  uint extraout_EDX_31;
  int extraout_EDX_32;
  uint extraout_EDX_33;
  uint extraout_EDX_34;
  uint extraout_EDX_35;
  uint extraout_EDX_36;
  int extraout_EDX_37;
  uint extraout_EDX_38;
  uint extraout_EDX_39;
  uint extraout_EDX_40;
  uint extraout_EDX_41;
  int extraout_EDX_42;
  uint extraout_EDX_43;
  uint extraout_EDX_44;
  uint extraout_EDX_45;
  uint extraout_EDX_46;
  uint extraout_EDX_47;
  uint extraout_EDX_48;
  int extraout_EDX_49;
  uint extraout_EDX_50;
  uint extraout_EDX_51;
  uint extraout_EDX_52;
  uint extraout_EDX_53;
  int extraout_EDX_54;
  int extraout_EDX_55;
  int extraout_EDX_56;
  int extraout_EDX_57;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar12;
  float10 fVar13;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  float10 fVar14;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_4c;
  undefined4 local_48 [5];
  undefined1 local_34 [8];
  undefined2 uStack_2c;
  undefined1 local_24 [8];
  undefined2 uStack_1c;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puStack_58 = &stack0xfffffffc;
  local_48[0] = 0;
  local_4c = 0;
  puStack_5c = &LAB_007e2852;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  *PTR_DAT_00baaec4 = 2;
  local_c = 1;
  local_8 = param_1;
  do {
    local_14 = 1;
    do {
      local_10 = 1;
      do {
        fVar12 = in_ST2;
        fVar13 = in_ST3;
        if (0xff < local_c) {
          uStack_64._0_2_ = 0x2139;
          uStack_64._2_2_ = 0x7e;
          thunk_FUN_004072dc();
          fVar12 = in_ST2;
          fVar13 = in_ST3;
        }
        in_ST3 = in_ST6;
        in_ST2 = in_ST5;
        uStack_64._0_2_ = 0x213e;
        uStack_64._2_2_ = 0x7e;
        FUN_0070fba8();
        in_ST5 = in_ST7;
        _local_24 = in_ST0;
        if (0xff < local_14) {
          uStack_64._0_2_ = 0x2151;
          uStack_64._2_2_ = 0x7e;
          thunk_FUN_004072dc();
        }
        uStack_64._0_2_ = 0x2156;
        uStack_64._2_2_ = 0x7e;
        FUN_0070fd68();
        fVar2 = in_ST4;
        in_ST6 = in_ST5;
        _local_34 = in_ST1;
        if (0xff < local_10) {
          uStack_64._0_2_ = 0x2169;
          uStack_64._2_2_ = 0x7e;
          thunk_FUN_004072dc();
          fVar2 = in_ST4;
        }
        in_ST4 = in_ST7;
        in_ST1 = fVar2;
        uStack_64._0_2_ = 0x216e;
        uStack_64._2_2_ = 0x7e;
        FUN_0070fd20();
        if ((local_c == 1) && (local_14 == 1)) {
          puStack_68 = &LAB_007e2204;
          uStack_6c = *in_FS_OFFSET;
          *in_FS_OFFSET = &uStack_6c;
          fVar12 = fVar12 * (float10)_DAT_007e2860;
          uStack_64 = &stack0xfffffffc;
          FUN_0042bc74(&DAT_007e2870,PTR_DAT_00baa920,local_48,SUB104(fVar12,0),
                       (int)((unkuint10)fVar12 >> 0x20),(short)((unkuint10)fVar12 >> 0x40));
          uVar7 = local_10 - 1;
          if (SBORROW4(local_10,1)) {
            uVar7 = thunk_FUN_004072dc();
          }
          iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 0x10);
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
            uVar7 = thunk_FUN_004072dc();
            iVar9 = extraout_EDX;
          }
          FUN_0040d7f4(iVar9 + uVar7 * 4,local_48[0],&LAB_007e2880);
          puVar1 = uStack_64;
          *in_FS_OFFSET = uStack_6c;
          uStack_64._0_2_ = 0x220b;
          uStack_64._2_2_ = 0x7e;
          puStack_68 = (undefined1 *)0x7e2203;
          FUN_0040c5c8(local_48,uStack_6c,puVar1);
          return;
        }
        if ((local_c == 1) && (local_10 == 1)) {
          puStack_68 = &LAB_007e228f;
          uStack_6c = *in_FS_OFFSET;
          *in_FS_OFFSET = &uStack_6c;
          uStack_64 = &stack0xfffffffc;
          FUN_0042bc74(&DAT_007e2870,PTR_DAT_00baa920,&local_4c,local_34._0_4_,local_34._4_4_,
                       uStack_2c);
          uVar7 = local_14 - 1;
          if (SBORROW4(local_14,1)) {
            uVar7 = thunk_FUN_004072dc();
          }
          iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 0x14);
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
            uVar7 = thunk_FUN_004072dc();
            iVar9 = extraout_EDX_00;
          }
          FUN_0040c9a8(iVar9 + uVar7 * 4,local_4c);
          puVar1 = uStack_64;
          *in_FS_OFFSET = uStack_6c;
          uStack_64._0_2_ = 0x2296;
          uStack_64._2_2_ = 0x7e;
          puStack_68 = (undefined1 *)0x7e228e;
          FUN_0040c5c8(&local_4c,uStack_6c,puVar1);
          return;
        }
        uStack_64._0_2_ = 0x22a7;
        uStack_64._2_2_ = 0x7e;
        in_ST7 = in_ST6;
        uVar8 = (**(code **)(**(int **)(local_8 + 0x410) + 0x124))();
        if ((char)uVar8 == '\0') {
          uVar7 = local_c - 1;
          in_ST0 = fVar13;
          if (SBORROW4(local_c,1)) {
            uStack_64._0_2_ = 0x234e;
            uStack_64._2_2_ = 0x7e;
            uVar7 = thunk_FUN_004072dc();
            in_ST0 = fVar13;
          }
          if (0x14 < uVar7) {
            uStack_64._0_2_ = 0x2358;
            uStack_64._2_2_ = 0x7e;
            uVar7 = thunk_FUN_004072dc();
          }
          iVar9 = (int)((longlong)(int)uVar7 * 0x1b9);
          if ((longlong)iVar9 != (longlong)(int)uVar7 * 0x1b9) {
            uStack_64._0_2_ = 0x2365;
            uStack_64._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
          }
          puVar10 = PTR_DAT_00baa204 + iVar9 * 8;
          uVar7 = local_14 - 1;
          if (SBORROW4(local_14,1)) {
            uStack_64._0_2_ = 0x237b;
            uStack_64._2_2_ = 0x7e;
            puVar10 = (undefined *)thunk_FUN_004072dc();
            uVar7 = extraout_EDX_06;
          }
          if (0x14 < uVar7) {
            uStack_64._0_2_ = 0x2385;
            uStack_64._2_2_ = 0x7e;
            puVar10 = (undefined *)thunk_FUN_004072dc();
            uVar7 = extraout_EDX_07;
          }
          iVar9 = (int)((longlong)(int)uVar7 * 0x15);
          if ((longlong)iVar9 != (longlong)(int)uVar7 * 0x15) {
            uStack_64._0_2_ = 0x238f;
            uStack_64._2_2_ = 0x7e;
            puVar10 = (undefined *)thunk_FUN_004072dc();
            iVar9 = extraout_EDX_08;
          }
          puVar10 = puVar10 + iVar9 * 8;
          uVar7 = local_10 - 1;
          if (SBORROW4(local_10,1)) {
            uStack_64._0_2_ = 0x239f;
            uStack_64._2_2_ = 0x7e;
            puVar10 = (undefined *)thunk_FUN_004072dc();
            uVar7 = extraout_EDX_09;
          }
          if (0x14 < uVar7) {
            uStack_64._0_2_ = 0x23a9;
            uStack_64._2_2_ = 0x7e;
            puVar10 = (undefined *)thunk_FUN_004072dc();
            uVar7 = extraout_EDX_10;
          }
          uVar11 = local_c - 1;
          if (SBORROW4(local_c,1)) {
            uStack_64._0_2_ = 0x23b6;
            uStack_64._2_2_ = 0x7e;
            puVar10 = (undefined *)thunk_FUN_004072dc();
            uVar11 = extraout_ECX;
            uVar7 = extraout_EDX_11;
          }
          iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 4);
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
            uStack_64._0_2_ = 0x23d0;
            uStack_64._2_2_ = 0x7e;
            puVar10 = (undefined *)thunk_FUN_004072dc();
            uVar11 = extraout_ECX_00;
            uVar7 = extraout_EDX_12;
          }
          iVar9 = *(int *)(iVar9 + uVar11 * 4);
          uVar11 = local_14 - 1;
          if (SBORROW4(local_14,1)) {
            uStack_64._0_2_ = 0x23e0;
            uStack_64._2_2_ = 0x7e;
            puVar10 = (undefined *)thunk_FUN_004072dc();
            iVar9 = extraout_ECX_01;
            uVar7 = extraout_EDX_13;
          }
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
            uStack_64._0_2_ = 0x23ee;
            uStack_64._2_2_ = 0x7e;
            puVar10 = (undefined *)thunk_FUN_004072dc();
            iVar9 = extraout_ECX_02;
            uVar7 = extraout_EDX_14;
          }
          iVar9 = *(int *)(iVar9 + uVar11 * 4);
          uVar11 = local_10 - 1;
          if (SBORROW4(local_10,1)) {
            uStack_64._0_2_ = 0x23fe;
            uStack_64._2_2_ = 0x7e;
            puVar10 = (undefined *)thunk_FUN_004072dc();
            iVar9 = extraout_ECX_03;
            uVar7 = extraout_EDX_15;
          }
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
            uStack_64._0_2_ = 0x240c;
            uStack_64._2_2_ = 0x7e;
            puVar10 = (undefined *)thunk_FUN_004072dc();
            iVar9 = extraout_ECX_04;
            uVar7 = extraout_EDX_16;
          }
          *(undefined4 *)(iVar9 + uVar11 * 8) = *(undefined4 *)(puVar10 + uVar7 * 8);
          *(undefined4 *)(iVar9 + 4 + uVar11 * 8) = *(undefined4 *)(puVar10 + uVar7 * 8 + 4);
        }
        else {
          uStack_64._2_2_ = (undefined2)((uint)uVar8 >> 0x10);
          uStack_64._0_2_ = uStack_1c;
          puStack_68 = (undefined1 *)local_24._4_4_;
          uStack_6c = local_24._0_4_;
          FUN_007b2e24();
          uVar7 = local_c - 1;
          in_ST0 = in_ST1;
          fVar12 = in_ST2;
          fVar2 = in_ST3;
          fVar3 = in_ST4;
          fVar4 = in_ST5;
          fVar5 = in_ST6;
          if (SBORROW4(local_c,1)) {
            uStack_64._0_2_ = 0x22e2;
            uStack_64._2_2_ = 0x7e;
            uVar7 = thunk_FUN_004072dc();
            in_ST0 = in_ST1;
            fVar12 = in_ST2;
            fVar2 = in_ST3;
            fVar3 = in_ST4;
            fVar4 = in_ST5;
            fVar5 = in_ST6;
          }
          in_ST6 = in_ST7;
          in_ST5 = fVar5;
          in_ST4 = fVar4;
          in_ST3 = fVar3;
          in_ST2 = fVar2;
          in_ST1 = fVar12;
          iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 4);
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
            uStack_64._0_2_ = 0x22fc;
            uStack_64._2_2_ = 0x7e;
            uVar7 = thunk_FUN_004072dc();
            iVar9 = extraout_EDX_01;
          }
          iVar9 = *(int *)(iVar9 + uVar7 * 4);
          uVar7 = local_14 - 1;
          if (SBORROW4(local_14,1)) {
            uStack_64._0_2_ = 0x230c;
            uStack_64._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar7 = extraout_EDX_02;
          }
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
            uStack_64._0_2_ = 0x231a;
            uStack_64._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar7 = extraout_EDX_03;
          }
          iVar9 = *(int *)(iVar9 + uVar7 * 4);
          uVar7 = local_10 - 1;
          if (SBORROW4(local_10,1)) {
            uStack_64._0_2_ = 0x232a;
            uStack_64._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar7 = extraout_EDX_04;
          }
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
            uStack_64._0_2_ = 0x2338;
            uStack_64._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar7 = extraout_EDX_05;
          }
          *(double *)(iVar9 + uVar7 * 8) = (double)fVar13;
          in_ST7 = in_ST6;
        }
        if (*(char *)(*(int *)(local_8 + 0x430) + 0x18) != '\0') {
          fVar12 = (float10)*(double *)PTR_DAT_00ba9dd8;
          uStack_6c = SUB104(fVar12,0);
          puStack_68 = (undefined1 *)((unkuint10)fVar12 >> 0x20);
          uStack_64._0_2_ = (undefined2)((unkuint10)fVar12 >> 0x40);
          fVar14 = in_ST6;
          FUN_007adf08();
          uVar7 = local_c - 1;
          fVar12 = in_ST0;
          fVar13 = in_ST1;
          fVar2 = in_ST2;
          fVar3 = in_ST3;
          fVar4 = in_ST4;
          fVar5 = in_ST5;
          fVar6 = in_ST6;
          if (SBORROW4(local_c,1)) {
            uStack_64._0_2_ = 0x2498;
            uStack_64._2_2_ = 0x7e;
            uVar7 = thunk_FUN_004072dc();
            fVar12 = in_ST0;
            fVar13 = in_ST1;
            fVar2 = in_ST2;
            fVar3 = in_ST3;
            fVar4 = in_ST4;
            fVar5 = in_ST5;
            fVar6 = in_ST6;
          }
          in_ST6 = fVar14;
          in_ST5 = fVar6;
          in_ST4 = fVar5;
          in_ST3 = fVar4;
          in_ST2 = fVar3;
          in_ST1 = fVar2;
          in_ST0 = fVar13;
          iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 8);
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
            uStack_64._0_2_ = 0x24b2;
            uStack_64._2_2_ = 0x7e;
            uVar7 = thunk_FUN_004072dc();
            iVar9 = extraout_EDX_17;
          }
          iVar9 = *(int *)(iVar9 + uVar7 * 4);
          uVar7 = local_14 - 1;
          if (SBORROW4(local_14,1)) {
            uStack_64._0_2_ = 0x24c2;
            uStack_64._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar7 = extraout_EDX_18;
          }
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
            uStack_64._0_2_ = 0x24d0;
            uStack_64._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar7 = extraout_EDX_19;
          }
          iVar9 = *(int *)(iVar9 + uVar7 * 4);
          uVar7 = local_10 - 1;
          if (SBORROW4(local_10,1)) {
            uStack_64._0_2_ = 0x24e0;
            uStack_64._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar7 = extraout_EDX_20;
          }
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
            uStack_64._0_2_ = 0x24ee;
            uStack_64._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar7 = extraout_EDX_21;
          }
          *(double *)(iVar9 + uVar7 * 8) = (double)fVar12;
          in_ST7 = in_ST6;
        }
        if (*(char *)(*(int *)(local_8 + 0x430) + 0x98) != '\0') {
          uVar7 = local_c - 1;
          if (SBORROW4(local_c,1)) {
            uStack_64._0_2_ = 0x2515;
            uStack_64._2_2_ = 0x7e;
            uVar7 = thunk_FUN_004072dc();
          }
          iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 4);
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
            uStack_64._0_2_ = 0x252f;
            uStack_64._2_2_ = 0x7e;
            uVar7 = thunk_FUN_004072dc();
            iVar9 = extraout_EDX_22;
          }
          iVar9 = *(int *)(iVar9 + uVar7 * 4);
          uVar7 = local_14 - 1;
          if (SBORROW4(local_14,1)) {
            uStack_64._0_2_ = 0x253f;
            uStack_64._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar7 = extraout_EDX_23;
          }
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
            uStack_64._0_2_ = 0x254d;
            uStack_64._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar7 = extraout_EDX_24;
          }
          iVar9 = *(int *)(iVar9 + uVar7 * 4);
          uVar7 = local_10 - 1;
          if (SBORROW4(local_10,1)) {
            uStack_64._0_2_ = 0x255d;
            uStack_64._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar7 = extraout_EDX_25;
          }
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
            uStack_64._0_2_ = 0x256b;
            uStack_64._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar7 = extraout_EDX_26;
          }
          if (*(double *)(iVar9 + uVar7 * 8) != 0.0) {
            uVar7 = local_c - 1;
            fVar12 = in_ST0;
            fVar13 = in_ST1;
            fVar2 = in_ST2;
            fVar3 = in_ST3;
            fVar4 = in_ST4;
            fVar5 = in_ST5;
            if (SBORROW4(local_c,1)) {
              uStack_64._0_2_ = 0x2587;
              uStack_64._2_2_ = 0x7e;
              uVar7 = thunk_FUN_004072dc();
              fVar12 = in_ST0;
              fVar13 = in_ST1;
              fVar2 = in_ST2;
              fVar3 = in_ST3;
              fVar4 = in_ST4;
              fVar5 = in_ST5;
            }
            in_ST5 = in_ST6;
            in_ST4 = fVar5;
            in_ST3 = fVar4;
            in_ST2 = fVar3;
            in_ST1 = fVar2;
            in_ST0 = fVar13;
            iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 4);
            if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
              uStack_64._0_2_ = 0x25a1;
              uStack_64._2_2_ = 0x7e;
              uVar7 = thunk_FUN_004072dc();
              iVar9 = extraout_EDX_27;
            }
            iVar9 = *(int *)(iVar9 + uVar7 * 4);
            uVar7 = local_14 - 1;
            if (SBORROW4(local_14,1)) {
              uStack_64._0_2_ = 0x25b1;
              uStack_64._2_2_ = 0x7e;
              iVar9 = thunk_FUN_004072dc();
              uVar7 = extraout_EDX_28;
            }
            if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
              uStack_64._0_2_ = 0x25bf;
              uStack_64._2_2_ = 0x7e;
              iVar9 = thunk_FUN_004072dc();
              uVar7 = extraout_EDX_29;
            }
            iVar9 = *(int *)(iVar9 + uVar7 * 4);
            uVar7 = local_10 - 1;
            if (SBORROW4(local_10,1)) {
              uStack_64._0_2_ = 0x25cf;
              uStack_64._2_2_ = 0x7e;
              iVar9 = thunk_FUN_004072dc();
              uVar7 = extraout_EDX_30;
            }
            if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
              uStack_64._0_2_ = 0x25dd;
              uStack_64._2_2_ = 0x7e;
              iVar9 = thunk_FUN_004072dc();
              uVar7 = extraout_EDX_31;
            }
            fVar13 = (float10)*(double *)(iVar9 + uVar7 * 8);
            uStack_6c = SUB104(fVar13,0);
            puStack_68 = (undefined1 *)((unkuint10)fVar13 >> 0x20);
            uStack_64._0_2_ = (undefined2)((unkuint10)fVar13 >> 0x40);
            in_ST6 = in_ST5;
            FUN_00407b98();
            uVar7 = local_c - 1;
            if (SBORROW4(local_c,1)) {
              uStack_64._0_2_ = 0x25f9;
              uStack_64._2_2_ = 0x7e;
              uVar7 = thunk_FUN_004072dc();
            }
            iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 4);
            if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
              uStack_64._0_2_ = 0x2613;
              uStack_64._2_2_ = 0x7e;
              uVar7 = thunk_FUN_004072dc();
              iVar9 = extraout_EDX_32;
            }
            iVar9 = *(int *)(iVar9 + uVar7 * 4);
            uVar7 = local_14 - 1;
            if (SBORROW4(local_14,1)) {
              uStack_64._0_2_ = 0x2623;
              uStack_64._2_2_ = 0x7e;
              iVar9 = thunk_FUN_004072dc();
              uVar7 = extraout_EDX_33;
            }
            if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
              uStack_64._0_2_ = 0x2631;
              uStack_64._2_2_ = 0x7e;
              iVar9 = thunk_FUN_004072dc();
              uVar7 = extraout_EDX_34;
            }
            iVar9 = *(int *)(iVar9 + uVar7 * 4);
            uVar7 = local_10 - 1;
            if (SBORROW4(local_10,1)) {
              uStack_64._0_2_ = 0x2641;
              uStack_64._2_2_ = 0x7e;
              iVar9 = thunk_FUN_004072dc();
              uVar7 = extraout_EDX_35;
            }
            if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
              uStack_64._0_2_ = 0x264f;
              uStack_64._2_2_ = 0x7e;
              iVar9 = thunk_FUN_004072dc();
              uVar7 = extraout_EDX_36;
            }
            *(double *)(iVar9 + uVar7 * 8) = (double)fVar12;
          }
          in_ST7 = in_ST6;
          if (*(char *)(*(int *)(local_8 + 0x430) + 0x18) != '\0') {
            uVar7 = local_c - 1;
            fVar12 = in_ST0;
            fVar13 = in_ST1;
            fVar2 = in_ST2;
            fVar3 = in_ST3;
            fVar4 = in_ST4;
            fVar5 = in_ST5;
            if (SBORROW4(local_c,1)) {
              uStack_64._0_2_ = 0x2673;
              uStack_64._2_2_ = 0x7e;
              uVar7 = thunk_FUN_004072dc();
              fVar12 = in_ST0;
              fVar13 = in_ST1;
              fVar2 = in_ST2;
              fVar3 = in_ST3;
              fVar4 = in_ST4;
              fVar5 = in_ST5;
            }
            in_ST5 = in_ST6;
            in_ST4 = fVar5;
            in_ST3 = fVar4;
            in_ST2 = fVar3;
            in_ST1 = fVar2;
            in_ST0 = fVar13;
            iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 8);
            if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
              uStack_64._0_2_ = 0x268d;
              uStack_64._2_2_ = 0x7e;
              uVar7 = thunk_FUN_004072dc();
              iVar9 = extraout_EDX_37;
            }
            iVar9 = *(int *)(iVar9 + uVar7 * 4);
            uVar7 = local_14 - 1;
            if (SBORROW4(local_14,1)) {
              uStack_64._0_2_ = 0x269d;
              uStack_64._2_2_ = 0x7e;
              iVar9 = thunk_FUN_004072dc();
              uVar7 = extraout_EDX_38;
            }
            if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
              uStack_64._0_2_ = 0x26ab;
              uStack_64._2_2_ = 0x7e;
              iVar9 = thunk_FUN_004072dc();
              uVar7 = extraout_EDX_39;
            }
            iVar9 = *(int *)(iVar9 + uVar7 * 4);
            uVar7 = local_10 - 1;
            if (SBORROW4(local_10,1)) {
              uStack_64._0_2_ = 0x26bb;
              uStack_64._2_2_ = 0x7e;
              iVar9 = thunk_FUN_004072dc();
              uVar7 = extraout_EDX_40;
            }
            if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
              uStack_64._0_2_ = 0x26c9;
              uStack_64._2_2_ = 0x7e;
              iVar9 = thunk_FUN_004072dc();
              uVar7 = extraout_EDX_41;
            }
            fVar13 = (float10)*(double *)(iVar9 + uVar7 * 8);
            uStack_6c = SUB104(fVar13,0);
            puStack_68 = (undefined1 *)((unkuint10)fVar13 >> 0x20);
            uStack_64._0_2_ = (undefined2)((unkuint10)fVar13 >> 0x40);
            in_ST6 = in_ST5;
            FUN_00407b98();
            uVar7 = local_c - 1;
            if (SBORROW4(local_c,1)) {
              uStack_64._0_2_ = 0x26e5;
              uStack_64._2_2_ = 0x7e;
              uVar7 = thunk_FUN_004072dc();
            }
            iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 8);
            if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
              uStack_64._0_2_ = 0x26ff;
              uStack_64._2_2_ = 0x7e;
              uVar7 = thunk_FUN_004072dc();
              iVar9 = extraout_EDX_42;
            }
            iVar9 = *(int *)(iVar9 + uVar7 * 4);
            uVar7 = local_14 - 1;
            if (SBORROW4(local_14,1)) {
              uStack_64._0_2_ = 9999;
              uStack_64._2_2_ = 0x7e;
              iVar9 = thunk_FUN_004072dc();
              uVar7 = extraout_EDX_43;
            }
            if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
              uStack_64._0_2_ = 0x271d;
              uStack_64._2_2_ = 0x7e;
              iVar9 = thunk_FUN_004072dc();
              uVar7 = extraout_EDX_44;
            }
            iVar9 = *(int *)(iVar9 + uVar7 * 4);
            uVar7 = local_10 - 1;
            if (SBORROW4(local_10,1)) {
              uStack_64._0_2_ = 0x272d;
              uStack_64._2_2_ = 0x7e;
              iVar9 = thunk_FUN_004072dc();
              uVar7 = extraout_EDX_45;
            }
            if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
              uStack_64._0_2_ = 0x273b;
              uStack_64._2_2_ = 0x7e;
              iVar9 = thunk_FUN_004072dc();
              uVar7 = extraout_EDX_46;
            }
            *(double *)(iVar9 + uVar7 * 8) = (double)fVar12;
            in_ST7 = in_ST6;
          }
        }
        uVar7 = local_c - 1;
        if (SBORROW4(local_c,1)) {
          uStack_64._0_2_ = 0x274c;
          uStack_64._2_2_ = 0x7e;
          uVar7 = thunk_FUN_004072dc();
        }
        if (0x14 < uVar7) {
          uStack_64._0_2_ = 0x2756;
          uStack_64._2_2_ = 0x7e;
          uVar7 = thunk_FUN_004072dc();
        }
        iVar9 = (int)((longlong)(int)uVar7 * 0x1b9);
        if ((longlong)iVar9 != (longlong)(int)uVar7 * 0x1b9) {
          uStack_64._0_2_ = 0x2763;
          uStack_64._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
        }
        puVar10 = PTR_DAT_00ba979c + iVar9 * 4;
        uVar7 = local_14 - 1;
        if (SBORROW4(local_14,1)) {
          uStack_64._0_2_ = 0x2779;
          uStack_64._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          uVar7 = extraout_EDX_47;
        }
        if (0x14 < uVar7) {
          uStack_64._0_2_ = 0x2783;
          uStack_64._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          uVar7 = extraout_EDX_48;
        }
        iVar9 = (int)((longlong)(int)uVar7 * 0x15);
        if ((longlong)iVar9 != (longlong)(int)uVar7 * 0x15) {
          uStack_64._0_2_ = 0x278d;
          uStack_64._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          iVar9 = extraout_EDX_49;
        }
        puVar10 = puVar10 + iVar9 * 4;
        uVar7 = local_10 - 1;
        if (SBORROW4(local_10,1)) {
          uStack_64._0_2_ = 0x279d;
          uStack_64._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          uVar7 = extraout_EDX_50;
        }
        if (0x14 < uVar7) {
          uStack_64._0_2_ = 0x27a7;
          uStack_64._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          uVar7 = extraout_EDX_51;
        }
        uVar8 = *(undefined4 *)(puVar10 + uVar7 * 4);
        uVar7 = local_c - 1;
        if (SBORROW4(local_c,1)) {
          uStack_64._0_2_ = 0x27b7;
          uStack_64._2_2_ = 0x7e;
          uVar8 = thunk_FUN_004072dc();
          uVar7 = extraout_EDX_52;
        }
        iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 0xc);
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
          uStack_64._0_2_ = 0x27d1;
          uStack_64._2_2_ = 0x7e;
          uVar8 = thunk_FUN_004072dc();
          iVar9 = extraout_ECX_05;
          uVar7 = extraout_EDX_53;
        }
        iVar9 = *(int *)(iVar9 + uVar7 * 4);
        uVar7 = local_14 - 1;
        if (SBORROW4(local_14,1)) {
          uStack_64._0_2_ = 0x27e1;
          uStack_64._2_2_ = 0x7e;
          uVar8 = thunk_FUN_004072dc();
          uVar7 = extraout_ECX_06;
          iVar9 = extraout_EDX_54;
        }
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
          uStack_64._0_2_ = 0x27ef;
          uStack_64._2_2_ = 0x7e;
          uVar8 = thunk_FUN_004072dc();
          uVar7 = extraout_ECX_07;
          iVar9 = extraout_EDX_55;
        }
        iVar9 = *(int *)(iVar9 + uVar7 * 4);
        uVar7 = local_10 - 1;
        if (SBORROW4(local_10,1)) {
          uStack_64._0_2_ = 0x27ff;
          uStack_64._2_2_ = 0x7e;
          uVar8 = thunk_FUN_004072dc();
          uVar7 = extraout_ECX_08;
          iVar9 = extraout_EDX_56;
        }
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
          uStack_64._0_2_ = 0x280d;
          uStack_64._2_2_ = 0x7e;
          uVar8 = thunk_FUN_004072dc();
          uVar7 = extraout_ECX_09;
          iVar9 = extraout_EDX_57;
        }
        puVar1 = puStack_58;
        *(undefined4 *)(iVar9 + uVar7 * 4) = uVar8;
        local_10 = local_10 + 1;
      } while (local_10 != 0x15);
      local_14 = local_14 + 1;
    } while (local_14 != 0x15);
    local_c = local_c + 1;
    if (local_c == 0x15) {
      *in_FS_OFFSET = uStack_60;
      puStack_58 = &LAB_007e2859;
      puStack_5c = (undefined1 *)0x7e2851;
      FUN_0040c628(&local_4c,2,puVar1);
      return;
    }
  } while( true );
}



// === FUN_007e3840 @ 007e3840 size:1057 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e3840(int param_1)

{
  undefined1 *puVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  uint extraout_EDX_11;
  uint extraout_EDX_12;
  uint extraout_EDX_13;
  uint extraout_EDX_14;
  int extraout_EDX_15;
  uint extraout_EDX_16;
  uint extraout_EDX_17;
  uint extraout_EDX_18;
  uint extraout_EDX_19;
  int extraout_EDX_20;
  uint extraout_EDX_21;
  uint extraout_EDX_22;
  uint extraout_EDX_23;
  uint extraout_EDX_24;
  uint uVar11;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar12;
  float10 fVar13;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  float10 fVar14;
  undefined4 local_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  double local_1c;
  double local_14;
  int local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_2c = 0;
  local_30 = 0;
  puStack_40 = &LAB_007e3c6f;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_20 = 1;
  local_8 = param_1;
  do {
    local_24 = 1;
    do {
      fVar12 = in_ST1;
      fVar13 = in_ST3;
      fVar2 = in_ST5;
      if (0xff < local_20) {
        uStack_48._0_2_ = 0x387e;
        uStack_48._2_2_ = 0x7e;
        thunk_FUN_004072dc();
        fVar12 = in_ST1;
        fVar13 = in_ST3;
        fVar2 = in_ST5;
      }
      in_ST5 = in_ST7;
      in_ST3 = fVar2;
      in_ST1 = fVar13;
      uStack_48._0_2_ = 0x3883;
      uStack_48._2_2_ = 0x7e;
      FUN_0070fbdc();
      local_14 = (double)in_ST0;
      in_ST0 = in_ST2;
      fVar13 = in_ST4;
      fVar2 = in_ST6;
      fVar14 = in_ST5;
      if (0xff < local_24) {
        uStack_48._0_2_ = 0x3896;
        uStack_48._2_2_ = 0x7e;
        thunk_FUN_004072dc();
        in_ST0 = in_ST2;
        fVar13 = in_ST4;
        fVar2 = in_ST6;
      }
      in_ST6 = fVar14;
      in_ST4 = fVar2;
      in_ST2 = fVar13;
      uStack_48._0_2_ = 0x389b;
      uStack_48._2_2_ = 0x7e;
      FUN_0070fc10();
      local_1c = (double)fVar12;
      if (local_20 == 1) {
        puStack_4c = &LAB_007e3922;
        local_50 = *in_FS_OFFSET;
        *in_FS_OFFSET = &local_50;
        uStack_48 = &stack0xfffffffc;
        FUN_0042bc74(&DAT_007e3c8c,PTR_DAT_00baa920,&local_2c,
                     SUB108((float10)local_1c * (float10)_DAT_007e3c7c,0),
                     (short)((unkuint10)((float10)local_1c * (float10)_DAT_007e3c7c) >> 0x40));
        uVar7 = local_24 - 1;
        if (SBORROW4(local_24,1)) {
          uVar7 = thunk_FUN_004072dc();
        }
        iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 0x10);
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
          uVar7 = thunk_FUN_004072dc();
          iVar9 = extraout_EDX;
        }
        FUN_0040c9a8(iVar9 + uVar7 * 4,local_2c);
        puVar1 = uStack_48;
        *in_FS_OFFSET = local_50;
        uStack_48._0_2_ = 0x3929;
        uStack_48._2_2_ = 0x7e;
        puStack_4c = (undefined1 *)0x7e3921;
        FUN_0040c5c8(&local_2c,local_50,puVar1);
        return;
      }
      if (local_24 == 1) {
        puStack_4c = &LAB_007e39ac;
        local_50 = *in_FS_OFFSET;
        *in_FS_OFFSET = &local_50;
        uStack_48 = &stack0xfffffffc;
        FUN_0042bc74(&DAT_007e3c8c,PTR_DAT_00baa920,&local_30,
                     SUB108((float10)local_14 * (float10)_DAT_007e3c7c,0),
                     (short)((unkuint10)((float10)local_14 * (float10)_DAT_007e3c7c) >> 0x40));
        uVar7 = local_20 - 1;
        if (SBORROW4(local_20,1)) {
          uVar7 = thunk_FUN_004072dc();
        }
        iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 0x14);
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
          uVar7 = thunk_FUN_004072dc();
          iVar9 = extraout_EDX_00;
        }
        FUN_0040c9a8(iVar9 + uVar7 * 4,local_30);
        puVar1 = uStack_48;
        *in_FS_OFFSET = local_50;
        uStack_48._0_2_ = 0x39b3;
        uStack_48._2_2_ = 0x7e;
        puStack_4c = (undefined1 *)0x7e39ab;
        FUN_0040c5c8(&local_30,local_50,puVar1);
        return;
      }
      if (*(char *)(*(int *)(local_8 + 0x430) + 0x18) != '\0') {
        fVar12 = (float10)*(double *)PTR_DAT_00ba9dd8;
        local_50 = SUB104(fVar12,0);
        puStack_4c = (undefined1 *)((unkuint10)fVar12 >> 0x20);
        uStack_48._0_2_ = (undefined2)((unkuint10)fVar12 >> 0x40);
        fVar12 = in_ST6;
        FUN_007afe00();
        iVar8 = 0;
        iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 8);
        if ((iVar9 == 0) ||
           (fVar13 = in_ST0, fVar2 = in_ST1, fVar14 = in_ST2, fVar3 = in_ST3, fVar4 = in_ST4,
           fVar5 = in_ST5, fVar6 = in_ST6, *(int *)(iVar9 + -4) == 0)) {
          uStack_48._0_2_ = 0x3a3b;
          uStack_48._2_2_ = 0x7e;
          iVar8 = thunk_FUN_004072dc();
          iVar9 = extraout_EDX_01;
          fVar13 = in_ST0;
          fVar2 = in_ST1;
          fVar14 = in_ST2;
          fVar3 = in_ST3;
          fVar4 = in_ST4;
          fVar5 = in_ST5;
          fVar6 = in_ST6;
        }
        in_ST6 = fVar12;
        in_ST5 = fVar6;
        in_ST4 = fVar5;
        in_ST3 = fVar4;
        in_ST2 = fVar3;
        in_ST1 = fVar14;
        in_ST0 = fVar2;
        iVar9 = *(int *)(iVar9 + iVar8 * 4);
        uVar7 = local_20 - 1;
        if (SBORROW4(local_20,1)) {
          uStack_48._0_2_ = 0x3a4b;
          uStack_48._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
          uVar7 = extraout_EDX_02;
        }
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
          uStack_48._0_2_ = 0x3a59;
          uStack_48._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
          uVar7 = extraout_EDX_03;
        }
        iVar9 = *(int *)(iVar9 + uVar7 * 4);
        uVar7 = local_24 - 1;
        if (SBORROW4(local_24,1)) {
          uStack_48._0_2_ = 0x3a69;
          uStack_48._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
          uVar7 = extraout_EDX_04;
        }
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
          uStack_48._0_2_ = 0x3a77;
          uStack_48._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
          uVar7 = extraout_EDX_05;
        }
        *(double *)(iVar9 + uVar7 * 8) = (double)fVar13;
      }
      uVar7 = local_20 - 1;
      in_ST7 = in_ST6;
      if (SBORROW4(local_20,1)) {
        uStack_48._0_2_ = 0x3a88;
        uStack_48._2_2_ = 0x7e;
        uVar7 = thunk_FUN_004072dc();
      }
      if (0x18 < uVar7) {
        uStack_48._0_2_ = 0x3a92;
        uStack_48._2_2_ = 0x7e;
        uVar7 = thunk_FUN_004072dc();
      }
      iVar9 = (int)((longlong)(int)uVar7 * 0x19);
      if ((longlong)iVar9 != (longlong)(int)uVar7 * 0x19) {
        uStack_48._0_2_ = 0x3a9c;
        uStack_48._2_2_ = 0x7e;
        iVar9 = thunk_FUN_004072dc();
      }
      puVar10 = PTR_DAT_00ba9e80 + iVar9 * 4;
      uVar7 = local_24 - 1;
      if (SBORROW4(local_24,1)) {
        uStack_48._0_2_ = 0x3ab2;
        uStack_48._2_2_ = 0x7e;
        puVar10 = (undefined *)thunk_FUN_004072dc();
        uVar7 = extraout_EDX_06;
      }
      if (0x18 < uVar7) {
        uStack_48._0_2_ = 0x3abc;
        uStack_48._2_2_ = 0x7e;
        puVar10 = (undefined *)thunk_FUN_004072dc();
        uVar7 = extraout_EDX_07;
      }
      local_28 = *(int *)(puVar10 + uVar7 * 4);
      if (local_28 < 1) {
        iVar8 = 0;
        iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 4);
        if ((iVar9 == 0) || (*(int *)(iVar9 + -4) == 0)) {
          uStack_48._0_2_ = 0x3b91;
          uStack_48._2_2_ = 0x7e;
          iVar8 = thunk_FUN_004072dc();
          iVar9 = extraout_EDX_15;
        }
        iVar9 = *(int *)(iVar9 + iVar8 * 4);
        uVar7 = local_20 - 1;
        if (SBORROW4(local_20,1)) {
          uStack_48._0_2_ = 0x3ba1;
          uStack_48._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
          uVar7 = extraout_EDX_16;
        }
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
          uStack_48._0_2_ = 0x3baf;
          uStack_48._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
          uVar7 = extraout_EDX_17;
        }
        iVar9 = *(int *)(iVar9 + uVar7 * 4);
        uVar7 = local_24 - 1;
        if (SBORROW4(local_24,1)) {
          uStack_48._0_2_ = 0x3bbf;
          uStack_48._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
          uVar7 = extraout_EDX_18;
        }
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
          uStack_48._0_2_ = 0x3bcd;
          uStack_48._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
          uVar7 = extraout_EDX_19;
        }
        *(undefined4 *)(iVar9 + uVar7 * 8) = 0x3b645a1d;
        *(undefined4 *)(iVar9 + 4 + uVar7 * 8) = 0x3fe54fdf;
      }
      else {
        uVar7 = local_20 - 1;
        if (SBORROW4(local_20,1)) {
          uStack_48._0_2_ = 0x3ad9;
          uStack_48._2_2_ = 0x7e;
          uVar7 = thunk_FUN_004072dc();
        }
        if (0x18 < uVar7) {
          uStack_48._0_2_ = 0x3ae3;
          uStack_48._2_2_ = 0x7e;
          uVar7 = thunk_FUN_004072dc();
        }
        iVar9 = (int)((longlong)(int)uVar7 * 0x19);
        if ((longlong)iVar9 != (longlong)(int)uVar7 * 0x19) {
          uStack_48._0_2_ = 0x3aed;
          uStack_48._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
        }
        puVar10 = PTR_DAT_00baa888 + iVar9 * 8;
        uVar7 = local_24 - 1;
        if (SBORROW4(local_24,1)) {
          uStack_48._0_2_ = 0x3b03;
          uStack_48._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          uVar7 = extraout_EDX_08;
        }
        if (0x18 < uVar7) {
          uStack_48._0_2_ = 0x3b0d;
          uStack_48._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          uVar7 = extraout_EDX_09;
        }
        iVar8 = 0;
        iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 4);
        if ((iVar9 == 0) || (*(int *)(iVar9 + -4) == 0)) {
          uStack_48._0_2_ = 0x3b29;
          uStack_48._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          iVar8 = extraout_ECX;
          uVar7 = extraout_EDX_10;
        }
        iVar9 = *(int *)(iVar9 + iVar8 * 4);
        uVar11 = local_20 - 1;
        if (SBORROW4(local_20,1)) {
          uStack_48._0_2_ = 0x3b39;
          uStack_48._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          iVar9 = extraout_ECX_00;
          uVar7 = extraout_EDX_11;
        }
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
          uStack_48._0_2_ = 0x3b47;
          uStack_48._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          iVar9 = extraout_ECX_01;
          uVar7 = extraout_EDX_12;
        }
        iVar9 = *(int *)(iVar9 + uVar11 * 4);
        uVar11 = local_24 - 1;
        if (SBORROW4(local_24,1)) {
          uStack_48._0_2_ = 0x3b57;
          uStack_48._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          iVar9 = extraout_ECX_02;
          uVar7 = extraout_EDX_13;
        }
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
          uStack_48._0_2_ = 0x3b65;
          uStack_48._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          iVar9 = extraout_ECX_03;
          uVar7 = extraout_EDX_14;
        }
        *(undefined4 *)(iVar9 + uVar11 * 8) = *(undefined4 *)(puVar10 + uVar7 * 8);
        *(undefined4 *)(iVar9 + 4 + uVar11 * 8) = *(undefined4 *)(puVar10 + uVar7 * 8 + 4);
      }
      iVar8 = 0;
      iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 0xc);
      if ((iVar9 == 0) || (*(int *)(iVar9 + -4) == 0)) {
        uStack_48._0_2_ = 0x3bf8;
        uStack_48._2_2_ = 0x7e;
        iVar8 = thunk_FUN_004072dc();
        iVar9 = extraout_EDX_20;
      }
      iVar9 = *(int *)(iVar9 + iVar8 * 4);
      uVar7 = local_20 - 1;
      if (SBORROW4(local_20,1)) {
        uStack_48._0_2_ = 0x3c08;
        uStack_48._2_2_ = 0x7e;
        iVar9 = thunk_FUN_004072dc();
        uVar7 = extraout_EDX_21;
      }
      if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
        uStack_48._0_2_ = 0x3c16;
        uStack_48._2_2_ = 0x7e;
        iVar9 = thunk_FUN_004072dc();
        uVar7 = extraout_EDX_22;
      }
      iVar9 = *(int *)(iVar9 + uVar7 * 4);
      uVar7 = local_24 - 1;
      if (SBORROW4(local_24,1)) {
        uStack_48._0_2_ = 0x3c26;
        uStack_48._2_2_ = 0x7e;
        iVar9 = thunk_FUN_004072dc();
        uVar7 = extraout_EDX_23;
      }
      if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar7)) {
        uStack_48._0_2_ = 0x3c34;
        uStack_48._2_2_ = 0x7e;
        iVar9 = thunk_FUN_004072dc();
        uVar7 = extraout_EDX_24;
      }
      puVar1 = puStack_3c;
      *(int *)(iVar9 + uVar7 * 4) = local_28;
      local_24 = local_24 + 1;
    } while (local_24 != 0x19);
    local_20 = local_20 + 1;
    if (local_20 == 0x19) {
      *in_FS_OFFSET = uStack_44;
      puStack_3c = &LAB_007e3c76;
      puStack_40 = (undefined1 *)0x7e3c6e;
      FUN_0040c628(&local_30,2,puVar1);
      return;
    }
  } while( true );
}



// === FUN_007e3c90 @ 007e3c90 size:783 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e3c90(int param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_EDX;
  int iVar5;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  int extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  int extraout_EDX_06;
  uint extraout_EDX_07;
  int extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  uint extraout_EDX_11;
  uint extraout_EDX_12;
  uint extraout_EDX_13;
  int extraout_EDX_14;
  uint extraout_EDX_15;
  uint extraout_EDX_16;
  uint extraout_EDX_17;
  int extraout_EDX_18;
  int extraout_EDX_19;
  int extraout_EDX_20;
  int extraout_EDX_21;
  float10 in_ST0;
  float10 fVar6;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  undefined1 local_1c [8];
  undefined8 local_14;
  byte local_b;
  byte local_a;
  byte local_9;
  int local_8;
  
  local_9 = 1;
  local_8 = param_1;
  do {
    local_a = 1;
    do {
      local_b = 1;
      do {
        if (local_b == 1) {
          FUN_008adc74(*(undefined4 *)PTR_DAT_00baa39c,1,1,(short)local_1c);
          fVar6 = in_ST0;
          in_ST0 = in_ST1;
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
        }
        else {
          FUN_008adc74(*(undefined4 *)PTR_DAT_00baa39c,local_9,local_b,(short)local_1c);
          fVar6 = in_ST0;
          in_ST0 = in_ST1;
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
        }
        in_ST5 = in_ST4;
        FUN_00407b58();
        local_14 = (double)(fVar6 * (float10)_DAT_007e3fa0);
        uVar2 = local_9 - 1;
        if (0x13 < uVar2) {
          uVar2 = thunk_FUN_004072dc();
        }
        lVar1 = (longlong)(int)(uVar2 + 1) * 0x32;
        iVar3 = (int)lVar1;
        if (iVar3 != lVar1) {
          iVar3 = thunk_FUN_004072dc();
        }
        iVar3 = *(int *)PTR_DAT_00baa39c + iVar3 * 8;
        uVar2 = local_b - 1;
        if (0x13 < uVar2) {
          iVar3 = thunk_FUN_004072dc();
          uVar2 = extraout_EDX;
        }
        lVar1 = (longlong)(int)(uVar2 + 1) * 5;
        iVar5 = (int)lVar1;
        if (iVar5 != lVar1) {
          iVar3 = thunk_FUN_004072dc();
          iVar5 = extraout_EDX_00;
        }
        iVar3 = iVar3 + iVar5 * 4;
        uVar2 = local_a - 1;
        if (0x13 < uVar2) {
          iVar3 = thunk_FUN_004072dc();
          uVar2 = extraout_EDX_01;
        }
        if (200 < *(byte *)(iVar3 + uVar2 + 0x2748)) {
          uVar2 = local_9 - 1;
          if (0x13 < uVar2) {
            uVar2 = thunk_FUN_004072dc();
          }
          lVar1 = (longlong)(int)(uVar2 + 1) * 0x32;
          iVar3 = (int)lVar1;
          if (iVar3 != lVar1) {
            iVar3 = thunk_FUN_004072dc();
          }
          iVar3 = *(int *)PTR_DAT_00baa39c + iVar3 * 8;
          uVar2 = local_b - 1;
          if (0x13 < uVar2) {
            iVar3 = thunk_FUN_004072dc();
            uVar2 = extraout_EDX_02;
          }
          lVar1 = (longlong)(int)(uVar2 + 1) * 5;
          iVar5 = (int)lVar1;
          if (iVar5 != lVar1) {
            iVar3 = thunk_FUN_004072dc();
            iVar5 = extraout_EDX_03;
          }
          iVar3 = iVar3 + iVar5 * 4;
          uVar2 = local_a - 1;
          if (0x13 < uVar2) {
            iVar3 = thunk_FUN_004072dc();
            uVar2 = extraout_EDX_04;
          }
          fVar6 = (float10)*(byte *)(iVar3 + uVar2 + 0x808);
          uVar2 = local_9 - 1;
          if (0x13 < uVar2) {
            uVar2 = thunk_FUN_004072dc();
          }
          lVar1 = (longlong)(int)(uVar2 + 1) * 0x32;
          iVar3 = (int)lVar1;
          if (iVar3 != lVar1) {
            iVar3 = thunk_FUN_004072dc();
          }
          iVar3 = *(int *)PTR_DAT_00baa39c + iVar3 * 8;
          uVar2 = local_b - 1;
          if (0x13 < uVar2) {
            iVar3 = thunk_FUN_004072dc();
            uVar2 = extraout_EDX_05;
          }
          lVar1 = (longlong)(int)(uVar2 + 1) * 5;
          iVar5 = (int)lVar1;
          if (iVar5 != lVar1) {
            iVar3 = thunk_FUN_004072dc();
            iVar5 = extraout_EDX_06;
          }
          iVar3 = iVar3 + iVar5 * 4;
          uVar2 = local_a - 1;
          if (0x13 < uVar2) {
            iVar3 = thunk_FUN_004072dc();
            uVar2 = extraout_EDX_07;
          }
          local_14 = (double)((fVar6 / (float10)*(byte *)(iVar3 + uVar2 + 0x2748)) *
                             (float10)_DAT_007e3fa0);
        }
        uVar2 = local_a - 1;
        if (SBORROW4((uint)local_a,1)) {
          uVar2 = thunk_FUN_004072dc();
        }
        iVar3 = *(int *)(*(int *)(local_8 + 0x430) + 4);
        if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar2)) {
          uVar2 = thunk_FUN_004072dc();
          iVar3 = extraout_EDX_08;
        }
        iVar3 = *(int *)(iVar3 + uVar2 * 4);
        uVar2 = local_9 - 1;
        if (SBORROW4((uint)local_9,1)) {
          iVar3 = thunk_FUN_004072dc();
          uVar2 = extraout_EDX_09;
        }
        if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar2)) {
          iVar3 = thunk_FUN_004072dc();
          uVar2 = extraout_EDX_10;
        }
        iVar3 = *(int *)(iVar3 + uVar2 * 4);
        uVar2 = local_b - 1;
        if (SBORROW4((uint)local_b,1)) {
          iVar3 = thunk_FUN_004072dc();
          uVar2 = extraout_EDX_11;
        }
        if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar2)) {
          iVar3 = thunk_FUN_004072dc();
          uVar2 = extraout_EDX_12;
        }
        *(undefined4 *)(iVar3 + uVar2 * 8) = (undefined4)local_14;
        *(undefined4 *)(iVar3 + 4 + uVar2 * 8) = local_14._4_4_;
        uVar2 = local_9 - 1;
        if (0x13 < uVar2) {
          uVar2 = thunk_FUN_004072dc();
        }
        lVar1 = (longlong)(int)(uVar2 + 1) * 0x32;
        iVar3 = (int)lVar1;
        if (iVar3 != lVar1) {
          iVar3 = thunk_FUN_004072dc();
        }
        iVar3 = *(int *)PTR_DAT_00baa39c + iVar3 * 8;
        uVar2 = local_b - 1;
        if (0x13 < uVar2) {
          iVar3 = thunk_FUN_004072dc();
          uVar2 = extraout_EDX_13;
        }
        lVar1 = (longlong)(int)(uVar2 + 1) * 5;
        iVar5 = (int)lVar1;
        if (iVar5 != lVar1) {
          iVar3 = thunk_FUN_004072dc();
          iVar5 = extraout_EDX_14;
        }
        iVar3 = iVar3 + iVar5 * 4;
        uVar2 = local_a - 1;
        if (0x13 < uVar2) {
          iVar3 = thunk_FUN_004072dc();
          uVar2 = extraout_EDX_15;
        }
        uVar4 = (uint)*(byte *)(iVar3 + uVar2 + 0x2748);
        uVar2 = local_a - 1;
        if (SBORROW4((uint)local_a,1)) {
          uVar4 = thunk_FUN_004072dc();
          uVar2 = extraout_EDX_16;
        }
        iVar3 = *(int *)(*(int *)(local_8 + 0x430) + 0xc);
        if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar2)) {
          uVar4 = thunk_FUN_004072dc();
          iVar3 = extraout_ECX;
          uVar2 = extraout_EDX_17;
        }
        iVar3 = *(int *)(iVar3 + uVar2 * 4);
        uVar2 = local_9 - 1;
        if (SBORROW4((uint)local_9,1)) {
          uVar4 = thunk_FUN_004072dc();
          uVar2 = extraout_ECX_00;
          iVar3 = extraout_EDX_18;
        }
        if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar2)) {
          uVar4 = thunk_FUN_004072dc();
          uVar2 = extraout_ECX_01;
          iVar3 = extraout_EDX_19;
        }
        iVar3 = *(int *)(iVar3 + uVar2 * 4);
        uVar2 = local_b - 1;
        if (SBORROW4((uint)local_b,1)) {
          uVar4 = thunk_FUN_004072dc();
          uVar2 = extraout_ECX_02;
          iVar3 = extraout_EDX_20;
        }
        if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar2)) {
          uVar4 = thunk_FUN_004072dc();
          uVar2 = extraout_ECX_03;
          iVar3 = extraout_EDX_21;
        }
        *(uint *)(iVar3 + uVar2 * 4) = uVar4;
        local_b = local_b + 1;
      } while (local_b != 0x15);
      local_a = local_a + 1;
    } while (local_a != 0x15);
    local_9 = local_9 + 1;
  } while (local_9 != 0x15);
  return;
}



// === FUN_007e3fa4 @ 007e3fa4 size:306 ===

void FUN_007e3fa4(int param_1)

{
  FUN_0040f468(param_1 + 4,PTR_DAT_007ddd18);
  FUN_0040f468(param_1 + 0xc,PTR_DAT_007ddd94);
  FUN_0040f468(param_1 + 8,PTR_DAT_007ddd18);
  FUN_0040f468(param_1 + 0x10,PTR_DAT_007dddc0);
  FUN_0040f468(param_1 + 0x14,PTR_DAT_007dddc0);
  FUN_0040f344(param_1 + 4,PTR_DAT_007ddd18,3,*(undefined4 *)(param_1 + 0x2a),
               *(undefined4 *)(param_1 + 0x2e),*(undefined4 *)(param_1 + 0x32));
  FUN_0040f344(param_1 + 0xc,PTR_DAT_007ddd94,3,*(undefined4 *)(param_1 + 0x2a),
               *(undefined4 *)(param_1 + 0x2e),*(undefined4 *)(param_1 + 0x32));
  FUN_0040f344(param_1 + 0x10,PTR_DAT_007dddc0,1,*(undefined4 *)(param_1 + 0x2e));
  FUN_0040f344(param_1 + 0x14,PTR_DAT_007dddc0,1,*(undefined4 *)(param_1 + 0x32));
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_0040f344(param_1 + 8,PTR_DAT_007ddd18,3,*(undefined4 *)(param_1 + 0x2a),
                 *(undefined4 *)(param_1 + 0x2e),*(undefined4 *)(param_1 + 0x32));
  }
  return;
}



// === FUN_007e44e4 @ 007e44e4 size:1713 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e44e4(int param_1)

{
  undefined1 *puVar1;
  float10 fVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  int extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  int extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  uint extraout_EDX_11;
  uint extraout_EDX_12;
  int extraout_EDX_13;
  uint extraout_EDX_14;
  uint extraout_EDX_15;
  uint extraout_EDX_16;
  uint extraout_EDX_17;
  int extraout_EDX_18;
  uint extraout_EDX_19;
  uint extraout_EDX_20;
  int extraout_EDX_21;
  uint extraout_EDX_22;
  uint extraout_EDX_23;
  uint extraout_EDX_24;
  uint extraout_EDX_25;
  uint extraout_EDX_26;
  uint extraout_EDX_27;
  int extraout_EDX_28;
  uint extraout_EDX_29;
  uint extraout_EDX_30;
  uint extraout_EDX_31;
  uint extraout_EDX_32;
  int extraout_EDX_33;
  int extraout_EDX_34;
  int extraout_EDX_35;
  int extraout_EDX_36;
  int extraout_EDX_37;
  uint extraout_EDX_38;
  uint extraout_EDX_39;
  uint extraout_EDX_40;
  uint extraout_EDX_41;
  int extraout_EDX_42;
  uint extraout_EDX_43;
  uint extraout_EDX_44;
  uint extraout_EDX_45;
  uint extraout_EDX_46;
  int extraout_EDX_47;
  uint extraout_EDX_48;
  uint extraout_EDX_49;
  uint extraout_EDX_50;
  uint extraout_EDX_51;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  float10 fVar10;
  float10 fVar11;
  undefined4 local_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  double local_34;
  double local_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  double local_1c;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puStack_40 = &stack0xfffffffc;
  local_38 = 0;
  local_3c = 0;
  puStack_44 = &LAB_007e4ba3;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  *PTR_DAT_00baaec4 = 4;
  local_c = 1;
  local_8 = param_1;
  do {
    local_10 = 1;
    do {
      local_14 = 1;
      do {
        fVar9 = in_ST1;
        fVar7 = in_ST3;
        fVar2 = in_ST5;
        if (0xff < local_14) {
          uStack_4c._0_2_ = 0x452f;
          uStack_4c._2_2_ = 0x7e;
          thunk_FUN_004072dc();
          fVar9 = in_ST1;
          fVar7 = in_ST3;
          fVar2 = in_ST5;
        }
        in_ST5 = in_ST7;
        in_ST3 = fVar2;
        in_ST1 = fVar7;
        uStack_4c._0_2_ = 0x4534;
        uStack_4c._2_2_ = 0x7e;
        FUN_0070fd68();
        local_2c = (double)in_ST0;
        in_ST0 = in_ST2;
        fVar7 = in_ST4;
        fVar2 = in_ST6;
        fVar10 = in_ST5;
        if (0xff < local_10) {
          uStack_4c._0_2_ = 0x4547;
          uStack_4c._2_2_ = 0x7e;
          thunk_FUN_004072dc();
          in_ST0 = in_ST2;
          fVar7 = in_ST4;
          fVar2 = in_ST6;
        }
        in_ST6 = fVar10;
        in_ST4 = fVar2;
        in_ST2 = fVar7;
        uStack_4c._0_2_ = 0x454c;
        uStack_4c._2_2_ = 0x7e;
        FUN_0070fd20();
        local_34 = (double)fVar9;
        if (*(char *)(*(int *)(local_8 + 0x430) + 0x18) != '\0') {
          fVar9 = in_ST6;
          if (0xff < local_c) {
            uStack_4c._0_2_ = 0x4572;
            uStack_4c._2_2_ = 0x7e;
            thunk_FUN_004072dc();
          }
          uStack_4c._0_2_ = 0x4577;
          uStack_4c._2_2_ = 0x7e;
          FUN_0070fba8();
          local_1c = (double)in_ST0;
          local_24 = 0;
          uStack_20 = 0;
          fVar7 = (float10)*(double *)PTR_DAT_00ba9dd8;
          local_54 = SUB104(fVar7,0);
          puStack_50 = (undefined1 *)((unkuint10)fVar7 >> 0x20);
          uStack_4c._0_2_ = (undefined2)((unkuint10)fVar7 >> 0x40);
          fVar11 = fVar9;
          FUN_007afe00();
          fVar8 = in_ST1 * (float10)_DAT_007e4bb0;
          uVar3 = local_c - 1;
          in_ST0 = in_ST2;
          in_ST1 = in_ST3;
          fVar7 = in_ST4;
          fVar2 = in_ST5;
          fVar10 = in_ST6;
          if (SBORROW4(local_c,1)) {
            uStack_4c._0_2_ = 0x45fb;
            uStack_4c._2_2_ = 0x7e;
            uVar3 = thunk_FUN_004072dc();
            in_ST0 = in_ST2;
            in_ST1 = in_ST3;
            fVar7 = in_ST4;
            fVar2 = in_ST5;
            fVar10 = in_ST6;
          }
          in_ST6 = fVar11;
          in_ST5 = fVar9;
          in_ST4 = fVar10;
          in_ST3 = fVar2;
          in_ST2 = fVar7;
          iVar4 = *(int *)(*(int *)(local_8 + 0x430) + 8);
          if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
            uStack_4c._0_2_ = 0x4615;
            uStack_4c._2_2_ = 0x7e;
            uVar3 = thunk_FUN_004072dc();
            iVar4 = extraout_EDX;
          }
          iVar4 = *(int *)(iVar4 + uVar3 * 4);
          uVar3 = local_14 - 1;
          if (SBORROW4(local_14,1)) {
            uStack_4c._0_2_ = 0x4625;
            uStack_4c._2_2_ = 0x7e;
            iVar4 = thunk_FUN_004072dc();
            uVar3 = extraout_EDX_00;
          }
          if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
            uStack_4c._0_2_ = 0x4633;
            uStack_4c._2_2_ = 0x7e;
            iVar4 = thunk_FUN_004072dc();
            uVar3 = extraout_EDX_01;
          }
          iVar4 = *(int *)(iVar4 + uVar3 * 4);
          uVar3 = local_10 - 1;
          if (SBORROW4(local_10,1)) {
            uStack_4c._0_2_ = 0x4643;
            uStack_4c._2_2_ = 0x7e;
            iVar4 = thunk_FUN_004072dc();
            uVar3 = extraout_EDX_02;
          }
          if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
            uStack_4c._0_2_ = 0x4651;
            uStack_4c._2_2_ = 0x7e;
            iVar4 = thunk_FUN_004072dc();
            uVar3 = extraout_EDX_03;
          }
          *(double *)(iVar4 + uVar3 * 8) = (double)fVar8;
        }
        if ((local_c == 1) && (local_14 == 1)) {
          puStack_50 = &LAB_007e46e7;
          local_54 = *in_FS_OFFSET;
          *in_FS_OFFSET = &local_54;
          uStack_4c = &stack0xfffffffc;
          FUN_0042bc74(&DAT_007e4bc0,PTR_DAT_00baa920,&local_38,
                       SUB108((float10)local_34 * (float10)_DAT_007e4bb0,0),
                       (short)((unkuint10)((float10)local_34 * (float10)_DAT_007e4bb0) >> 0x40));
          uVar3 = local_10 - 1;
          if (SBORROW4(local_10,1)) {
            uVar3 = thunk_FUN_004072dc();
          }
          iVar4 = *(int *)(*(int *)(local_8 + 0x430) + 0x10);
          if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
            uVar3 = thunk_FUN_004072dc();
            iVar4 = extraout_EDX_04;
          }
          FUN_0040d7f4(iVar4 + uVar3 * 4,local_38,&LAB_007e4bd0);
          puVar1 = uStack_4c;
          *in_FS_OFFSET = local_54;
          uStack_4c._0_2_ = 0x46ee;
          uStack_4c._2_2_ = 0x7e;
          puStack_50 = (undefined1 *)0x7e46e6;
          FUN_0040c5c8(&local_38,local_54,puVar1);
          return;
        }
        if ((local_c == 1) && (local_10 == 1)) {
          puStack_50 = &LAB_007e4771;
          local_54 = *in_FS_OFFSET;
          *in_FS_OFFSET = &local_54;
          uStack_4c = &stack0xfffffffc;
          FUN_0042bc74(&DAT_007e4bc0,PTR_DAT_00baa920,&local_3c,SUB108((float10)local_2c,0),
                       (short)((unkuint10)(float10)local_2c >> 0x40));
          uVar3 = local_14 - 1;
          if (SBORROW4(local_14,1)) {
            uVar3 = thunk_FUN_004072dc();
          }
          iVar4 = *(int *)(*(int *)(local_8 + 0x430) + 0x14);
          if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
            uVar3 = thunk_FUN_004072dc();
            iVar4 = extraout_EDX_05;
          }
          FUN_0040c9a8(iVar4 + uVar3 * 4,local_3c);
          puVar1 = uStack_4c;
          *in_FS_OFFSET = local_54;
          uStack_4c._0_2_ = 0x4778;
          uStack_4c._2_2_ = 0x7e;
          puStack_50 = (undefined1 *)0x7e4770;
          FUN_0040c5c8(&local_3c,local_54,puVar1);
          return;
        }
        uVar3 = local_c - 1;
        in_ST7 = in_ST6;
        if (SBORROW4(local_c,1)) {
          uStack_4c._0_2_ = 0x4785;
          uStack_4c._2_2_ = 0x7e;
          uVar3 = thunk_FUN_004072dc();
        }
        if (0x14 < uVar3) {
          uStack_4c._0_2_ = 0x478f;
          uStack_4c._2_2_ = 0x7e;
          uVar3 = thunk_FUN_004072dc();
        }
        iVar4 = (int)((longlong)(int)uVar3 * 0x1b9);
        if ((longlong)iVar4 != (longlong)(int)uVar3 * 0x1b9) {
          uStack_4c._0_2_ = 0x479c;
          uStack_4c._2_2_ = 0x7e;
          iVar4 = thunk_FUN_004072dc();
        }
        puVar5 = PTR_DAT_00ba9ef4 + iVar4 * 4;
        uVar3 = local_14 - 1;
        if (SBORROW4(local_14,1)) {
          uStack_4c._0_2_ = 0x47b2;
          uStack_4c._2_2_ = 0x7e;
          puVar5 = (undefined *)thunk_FUN_004072dc();
          uVar3 = extraout_EDX_06;
        }
        if (0x14 < uVar3) {
          uStack_4c._0_2_ = 0x47bc;
          uStack_4c._2_2_ = 0x7e;
          puVar5 = (undefined *)thunk_FUN_004072dc();
          uVar3 = extraout_EDX_07;
        }
        iVar4 = (int)((longlong)(int)uVar3 * 0x15);
        if ((longlong)iVar4 != (longlong)(int)uVar3 * 0x15) {
          uStack_4c._0_2_ = 0x47c6;
          uStack_4c._2_2_ = 0x7e;
          puVar5 = (undefined *)thunk_FUN_004072dc();
          iVar4 = extraout_EDX_08;
        }
        puVar5 = puVar5 + iVar4 * 4;
        uVar3 = local_10 - 1;
        if (SBORROW4(local_10,1)) {
          uStack_4c._0_2_ = 0x47d6;
          uStack_4c._2_2_ = 0x7e;
          puVar5 = (undefined *)thunk_FUN_004072dc();
          uVar3 = extraout_EDX_09;
        }
        if (0x14 < uVar3) {
          uStack_4c._0_2_ = 0x47e0;
          uStack_4c._2_2_ = 0x7e;
          puVar5 = (undefined *)thunk_FUN_004072dc();
          uVar3 = extraout_EDX_10;
        }
        if (0 < *(int *)(puVar5 + uVar3 * 4)) {
          uVar3 = local_c - 1;
          if (SBORROW4(local_c,1)) {
            uStack_4c._0_2_ = 0x47f7;
            uStack_4c._2_2_ = 0x7e;
            uVar3 = thunk_FUN_004072dc();
          }
          if (0x14 < uVar3) {
            uStack_4c._0_2_ = 0x4801;
            uStack_4c._2_2_ = 0x7e;
            uVar3 = thunk_FUN_004072dc();
          }
          iVar4 = (int)((longlong)(int)uVar3 * 0x1b9);
          if ((longlong)iVar4 != (longlong)(int)uVar3 * 0x1b9) {
            uStack_4c._0_2_ = 0x480e;
            uStack_4c._2_2_ = 0x7e;
            iVar4 = thunk_FUN_004072dc();
          }
          puVar5 = PTR_DAT_00baa8d4 + iVar4 * 4;
          uVar3 = local_14 - 1;
          if (SBORROW4(local_14,1)) {
            uStack_4c._0_2_ = 0x4824;
            uStack_4c._2_2_ = 0x7e;
            puVar5 = (undefined *)thunk_FUN_004072dc();
            uVar3 = extraout_EDX_11;
          }
          if (0x14 < uVar3) {
            uStack_4c._0_2_ = 0x482e;
            uStack_4c._2_2_ = 0x7e;
            puVar5 = (undefined *)thunk_FUN_004072dc();
            uVar3 = extraout_EDX_12;
          }
          iVar4 = (int)((longlong)(int)uVar3 * 0x15);
          if ((longlong)iVar4 != (longlong)(int)uVar3 * 0x15) {
            uStack_4c._0_2_ = 0x4838;
            uStack_4c._2_2_ = 0x7e;
            puVar5 = (undefined *)thunk_FUN_004072dc();
            iVar4 = extraout_EDX_13;
          }
          puVar5 = puVar5 + iVar4 * 4;
          uVar3 = local_10 - 1;
          if (SBORROW4(local_10,1)) {
            uStack_4c._0_2_ = 0x4848;
            uStack_4c._2_2_ = 0x7e;
            puVar5 = (undefined *)thunk_FUN_004072dc();
            uVar3 = extraout_EDX_14;
          }
          if (0x14 < uVar3) {
            uStack_4c._0_2_ = 0x4852;
            uStack_4c._2_2_ = 0x7e;
            puVar5 = (undefined *)thunk_FUN_004072dc();
            uVar3 = extraout_EDX_15;
          }
          fVar9 = (float10)*(int *)(puVar5 + uVar3 * 4);
          uVar3 = local_c - 1;
          if (SBORROW4(local_c,1)) {
            uStack_4c._0_2_ = 0x4862;
            uStack_4c._2_2_ = 0x7e;
            uVar3 = thunk_FUN_004072dc();
          }
          if (0x14 < uVar3) {
            uStack_4c._0_2_ = 0x486c;
            uStack_4c._2_2_ = 0x7e;
            uVar3 = thunk_FUN_004072dc();
          }
          iVar4 = (int)((longlong)(int)uVar3 * 0x1b9);
          if ((longlong)iVar4 != (longlong)(int)uVar3 * 0x1b9) {
            uStack_4c._0_2_ = 0x4879;
            uStack_4c._2_2_ = 0x7e;
            iVar4 = thunk_FUN_004072dc();
          }
          puVar5 = PTR_DAT_00ba9ef4 + iVar4 * 4;
          uVar3 = local_14 - 1;
          if (SBORROW4(local_14,1)) {
            uStack_4c._0_2_ = 0x488f;
            uStack_4c._2_2_ = 0x7e;
            puVar5 = (undefined *)thunk_FUN_004072dc();
            uVar3 = extraout_EDX_16;
          }
          if (0x14 < uVar3) {
            uStack_4c._0_2_ = 0x4899;
            uStack_4c._2_2_ = 0x7e;
            puVar5 = (undefined *)thunk_FUN_004072dc();
            uVar3 = extraout_EDX_17;
          }
          iVar4 = (int)((longlong)(int)uVar3 * 0x15);
          if ((longlong)iVar4 != (longlong)(int)uVar3 * 0x15) {
            uStack_4c._0_2_ = 0x48a3;
            uStack_4c._2_2_ = 0x7e;
            puVar5 = (undefined *)thunk_FUN_004072dc();
            iVar4 = extraout_EDX_18;
          }
          puVar5 = puVar5 + iVar4 * 4;
          uVar3 = local_10 - 1;
          if (SBORROW4(local_10,1)) {
            uStack_4c._0_2_ = 0x48b3;
            uStack_4c._2_2_ = 0x7e;
            puVar5 = (undefined *)thunk_FUN_004072dc();
            uVar3 = extraout_EDX_19;
          }
          if (0x14 < uVar3) {
            uStack_4c._0_2_ = 0x48bd;
            uStack_4c._2_2_ = 0x7e;
            puVar5 = (undefined *)thunk_FUN_004072dc();
            uVar3 = extraout_EDX_20;
          }
          fVar9 = (fVar9 / (float10)*(int *)(puVar5 + uVar3 * 4)) * (float10)_DAT_007e4bb0;
          uVar3 = local_c - 1;
          in_ST6 = in_ST5;
          if (SBORROW4(local_c,1)) {
            uStack_4c._0_2_ = 0x48d5;
            uStack_4c._2_2_ = 0x7e;
            uVar3 = thunk_FUN_004072dc();
          }
          iVar4 = *(int *)(*(int *)(local_8 + 0x430) + 4);
          if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
            uStack_4c._0_2_ = 0x48ef;
            uStack_4c._2_2_ = 0x7e;
            uVar3 = thunk_FUN_004072dc();
            iVar4 = extraout_EDX_21;
          }
          iVar4 = *(int *)(iVar4 + uVar3 * 4);
          uVar3 = local_14 - 1;
          if (SBORROW4(local_14,1)) {
            uStack_4c._0_2_ = 0x48ff;
            uStack_4c._2_2_ = 0x7e;
            iVar4 = thunk_FUN_004072dc();
            uVar3 = extraout_EDX_22;
          }
          if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
            uStack_4c._0_2_ = 0x490d;
            uStack_4c._2_2_ = 0x7e;
            iVar4 = thunk_FUN_004072dc();
            uVar3 = extraout_EDX_23;
          }
          iVar4 = *(int *)(iVar4 + uVar3 * 4);
          uVar3 = local_10 - 1;
          if (SBORROW4(local_10,1)) {
            uStack_4c._0_2_ = 0x491d;
            uStack_4c._2_2_ = 0x7e;
            iVar4 = thunk_FUN_004072dc();
            uVar3 = extraout_EDX_24;
          }
          if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
            uStack_4c._0_2_ = 0x492b;
            uStack_4c._2_2_ = 0x7e;
            iVar4 = thunk_FUN_004072dc();
            uVar3 = extraout_EDX_25;
          }
          *(double *)(iVar4 + uVar3 * 8) = (double)fVar9;
          in_ST7 = in_ST6;
        }
        uVar3 = local_c - 1;
        if (SBORROW4(local_c,1)) {
          uStack_4c._0_2_ = 0x493c;
          uStack_4c._2_2_ = 0x7e;
          uVar3 = thunk_FUN_004072dc();
        }
        if (0x14 < uVar3) {
          uStack_4c._0_2_ = 0x4946;
          uStack_4c._2_2_ = 0x7e;
          uVar3 = thunk_FUN_004072dc();
        }
        iVar4 = (int)((longlong)(int)uVar3 * 0x1b9);
        if ((longlong)iVar4 != (longlong)(int)uVar3 * 0x1b9) {
          uStack_4c._0_2_ = 0x4953;
          uStack_4c._2_2_ = 0x7e;
          iVar4 = thunk_FUN_004072dc();
        }
        puVar5 = PTR_DAT_00ba9ef4 + iVar4 * 4;
        uVar3 = local_14 - 1;
        if (SBORROW4(local_14,1)) {
          uStack_4c._0_2_ = 0x4969;
          uStack_4c._2_2_ = 0x7e;
          puVar5 = (undefined *)thunk_FUN_004072dc();
          uVar3 = extraout_EDX_26;
        }
        if (0x14 < uVar3) {
          uStack_4c._0_2_ = 0x4973;
          uStack_4c._2_2_ = 0x7e;
          puVar5 = (undefined *)thunk_FUN_004072dc();
          uVar3 = extraout_EDX_27;
        }
        iVar4 = (int)((longlong)(int)uVar3 * 0x15);
        if ((longlong)iVar4 != (longlong)(int)uVar3 * 0x15) {
          uStack_4c._0_2_ = 0x497d;
          uStack_4c._2_2_ = 0x7e;
          puVar5 = (undefined *)thunk_FUN_004072dc();
          iVar4 = extraout_EDX_28;
        }
        puVar5 = puVar5 + iVar4 * 4;
        uVar3 = local_10 - 1;
        if (SBORROW4(local_10,1)) {
          uStack_4c._0_2_ = 0x498d;
          uStack_4c._2_2_ = 0x7e;
          puVar5 = (undefined *)thunk_FUN_004072dc();
          uVar3 = extraout_EDX_29;
        }
        if (0x14 < uVar3) {
          uStack_4c._0_2_ = 0x4997;
          uStack_4c._2_2_ = 0x7e;
          puVar5 = (undefined *)thunk_FUN_004072dc();
          uVar3 = extraout_EDX_30;
        }
        uVar6 = *(undefined4 *)(puVar5 + uVar3 * 4);
        uVar3 = local_c - 1;
        if (SBORROW4(local_c,1)) {
          uStack_4c._0_2_ = 0x49a7;
          uStack_4c._2_2_ = 0x7e;
          uVar6 = thunk_FUN_004072dc();
          uVar3 = extraout_EDX_31;
        }
        iVar4 = *(int *)(*(int *)(local_8 + 0x430) + 0xc);
        if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
          uStack_4c._0_2_ = 0x49c1;
          uStack_4c._2_2_ = 0x7e;
          uVar6 = thunk_FUN_004072dc();
          iVar4 = extraout_ECX;
          uVar3 = extraout_EDX_32;
        }
        iVar4 = *(int *)(iVar4 + uVar3 * 4);
        uVar3 = local_14 - 1;
        if (SBORROW4(local_14,1)) {
          uStack_4c._0_2_ = 0x49d1;
          uStack_4c._2_2_ = 0x7e;
          uVar6 = thunk_FUN_004072dc();
          uVar3 = extraout_ECX_00;
          iVar4 = extraout_EDX_33;
        }
        if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
          uStack_4c._0_2_ = 0x49df;
          uStack_4c._2_2_ = 0x7e;
          uVar6 = thunk_FUN_004072dc();
          uVar3 = extraout_ECX_01;
          iVar4 = extraout_EDX_34;
        }
        iVar4 = *(int *)(iVar4 + uVar3 * 4);
        uVar3 = local_10 - 1;
        if (SBORROW4(local_10,1)) {
          uStack_4c._0_2_ = 0x49ef;
          uStack_4c._2_2_ = 0x7e;
          uVar6 = thunk_FUN_004072dc();
          uVar3 = extraout_ECX_02;
          iVar4 = extraout_EDX_35;
        }
        if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
          uStack_4c._0_2_ = 0x49fd;
          uStack_4c._2_2_ = 0x7e;
          uVar6 = thunk_FUN_004072dc();
          uVar3 = extraout_ECX_03;
          iVar4 = extraout_EDX_36;
        }
        *(undefined4 *)(iVar4 + uVar3 * 4) = uVar6;
        if (*(char *)(*(int *)(local_8 + 0x430) + 0x98) != '\0') {
          uVar3 = local_c - 1;
          if (SBORROW4(local_c,1)) {
            uStack_4c._0_2_ = 0x4a23;
            uStack_4c._2_2_ = 0x7e;
            uVar3 = thunk_FUN_004072dc();
          }
          iVar4 = *(int *)(*(int *)(local_8 + 0x430) + 4);
          if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
            uStack_4c._0_2_ = 0x4a3d;
            uStack_4c._2_2_ = 0x7e;
            uVar3 = thunk_FUN_004072dc();
            iVar4 = extraout_EDX_37;
          }
          iVar4 = *(int *)(iVar4 + uVar3 * 4);
          uVar3 = local_14 - 1;
          if (SBORROW4(local_14,1)) {
            uStack_4c._0_2_ = 0x4a4d;
            uStack_4c._2_2_ = 0x7e;
            iVar4 = thunk_FUN_004072dc();
            uVar3 = extraout_EDX_38;
          }
          if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
            uStack_4c._0_2_ = 0x4a5b;
            uStack_4c._2_2_ = 0x7e;
            iVar4 = thunk_FUN_004072dc();
            uVar3 = extraout_EDX_39;
          }
          iVar4 = *(int *)(iVar4 + uVar3 * 4);
          uVar3 = local_10 - 1;
          if (SBORROW4(local_10,1)) {
            uStack_4c._0_2_ = 0x4a6b;
            uStack_4c._2_2_ = 0x7e;
            iVar4 = thunk_FUN_004072dc();
            uVar3 = extraout_EDX_40;
          }
          if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
            uStack_4c._0_2_ = 0x4a79;
            uStack_4c._2_2_ = 0x7e;
            iVar4 = thunk_FUN_004072dc();
            uVar3 = extraout_EDX_41;
          }
          in_ST7 = in_ST6;
          if (0.0 < *(double *)(iVar4 + uVar3 * 8)) {
            uVar3 = local_c - 1;
            fVar9 = in_ST0;
            fVar7 = in_ST1;
            fVar2 = in_ST2;
            fVar10 = in_ST3;
            fVar11 = in_ST4;
            fVar8 = in_ST5;
            if (SBORROW4(local_c,1)) {
              uStack_4c._0_2_ = 0x4a95;
              uStack_4c._2_2_ = 0x7e;
              uVar3 = thunk_FUN_004072dc();
              fVar9 = in_ST0;
              fVar7 = in_ST1;
              fVar2 = in_ST2;
              fVar10 = in_ST3;
              fVar11 = in_ST4;
              fVar8 = in_ST5;
            }
            in_ST5 = in_ST6;
            in_ST4 = fVar8;
            in_ST3 = fVar11;
            in_ST2 = fVar10;
            in_ST1 = fVar2;
            in_ST0 = fVar7;
            iVar4 = *(int *)(*(int *)(local_8 + 0x430) + 4);
            if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
              uStack_4c._0_2_ = 0x4aaf;
              uStack_4c._2_2_ = 0x7e;
              uVar3 = thunk_FUN_004072dc();
              iVar4 = extraout_EDX_42;
            }
            iVar4 = *(int *)(iVar4 + uVar3 * 4);
            uVar3 = local_14 - 1;
            if (SBORROW4(local_14,1)) {
              uStack_4c._0_2_ = 0x4abf;
              uStack_4c._2_2_ = 0x7e;
              iVar4 = thunk_FUN_004072dc();
              uVar3 = extraout_EDX_43;
            }
            if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
              uStack_4c._0_2_ = 0x4acd;
              uStack_4c._2_2_ = 0x7e;
              iVar4 = thunk_FUN_004072dc();
              uVar3 = extraout_EDX_44;
            }
            iVar4 = *(int *)(iVar4 + uVar3 * 4);
            uVar3 = local_10 - 1;
            if (SBORROW4(local_10,1)) {
              uStack_4c._0_2_ = 0x4add;
              uStack_4c._2_2_ = 0x7e;
              iVar4 = thunk_FUN_004072dc();
              uVar3 = extraout_EDX_45;
            }
            if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
              uStack_4c._0_2_ = 0x4aeb;
              uStack_4c._2_2_ = 0x7e;
              iVar4 = thunk_FUN_004072dc();
              uVar3 = extraout_EDX_46;
            }
            fVar7 = (float10)*(double *)(iVar4 + uVar3 * 8);
            local_54 = SUB104(fVar7,0);
            puStack_50 = (undefined1 *)((unkuint10)fVar7 >> 0x20);
            uStack_4c._0_2_ = (undefined2)((unkuint10)fVar7 >> 0x40);
            in_ST6 = in_ST5;
            FUN_00407b98();
            uVar3 = local_c - 1;
            if (SBORROW4(local_c,1)) {
              uStack_4c._0_2_ = 0x4b07;
              uStack_4c._2_2_ = 0x7e;
              uVar3 = thunk_FUN_004072dc();
            }
            iVar4 = *(int *)(*(int *)(local_8 + 0x430) + 4);
            if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
              uStack_4c._0_2_ = 0x4b21;
              uStack_4c._2_2_ = 0x7e;
              uVar3 = thunk_FUN_004072dc();
              iVar4 = extraout_EDX_47;
            }
            iVar4 = *(int *)(iVar4 + uVar3 * 4);
            uVar3 = local_14 - 1;
            if (SBORROW4(local_14,1)) {
              uStack_4c._0_2_ = 0x4b31;
              uStack_4c._2_2_ = 0x7e;
              iVar4 = thunk_FUN_004072dc();
              uVar3 = extraout_EDX_48;
            }
            if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
              uStack_4c._0_2_ = 0x4b3f;
              uStack_4c._2_2_ = 0x7e;
              iVar4 = thunk_FUN_004072dc();
              uVar3 = extraout_EDX_49;
            }
            iVar4 = *(int *)(iVar4 + uVar3 * 4);
            uVar3 = local_10 - 1;
            if (SBORROW4(local_10,1)) {
              uStack_4c._0_2_ = 0x4b4f;
              uStack_4c._2_2_ = 0x7e;
              iVar4 = thunk_FUN_004072dc();
              uVar3 = extraout_EDX_50;
            }
            if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
              uStack_4c._0_2_ = 0x4b5d;
              uStack_4c._2_2_ = 0x7e;
              iVar4 = thunk_FUN_004072dc();
              uVar3 = extraout_EDX_51;
            }
            *(double *)(iVar4 + uVar3 * 8) = (double)fVar9;
            in_ST7 = in_ST6;
          }
        }
        puVar1 = puStack_40;
        local_14 = local_14 + 1;
      } while (local_14 != 0x15);
      local_10 = local_10 + 1;
    } while (local_10 != 0x15);
    local_c = local_c + 1;
    if (local_c == 0x15) {
      *in_FS_OFFSET = uStack_48;
      puStack_40 = &LAB_007e4baa;
      puStack_44 = (undefined1 *)0x7e4ba2;
      FUN_0040c628(&local_3c,2,puVar1);
      return;
    }
  } while( true );
}



// === FUN_007e62a8 @ 007e62a8 size:376 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e62a8(int param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  uint uVar5;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_EDX;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  float10 fVar6;
  undefined1 local_a;
  undefined1 local_9;
  
  local_9 = 1;
  do {
    local_a = 1;
    do {
      uVar2 = local_9 - 1;
      if (0x13 < uVar2) {
        uVar2 = thunk_FUN_004072dc();
      }
      lVar1 = (longlong)(int)(uVar2 + 1) * 5;
      iVar3 = (int)lVar1;
      if (iVar3 != lVar1) {
        iVar3 = thunk_FUN_004072dc();
      }
      iVar3 = *(int *)PTR_DAT_00baa39c + iVar3 * 8;
      uVar2 = local_a - 1;
      if (0x13 < uVar2) {
        iVar3 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX;
      }
      fVar6 = (float10)*(ushort *)(iVar3 + 0x2f6 + (uVar2 + 1) * 2) / (float10)_DAT_007e6420;
      iVar4 = 0;
      iVar3 = *(int *)(*(int *)(param_1 + 0x430) + 4);
      if ((iVar3 == 0) || (*(int *)(iVar3 + -4) == 0)) {
        iVar4 = thunk_FUN_004072dc();
        iVar3 = extraout_EDX_00;
      }
      iVar3 = *(int *)(iVar3 + iVar4 * 4);
      uVar2 = local_a - 1;
      if (SBORROW4((uint)local_a,1)) {
        iVar3 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX_01;
      }
      if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar2)) {
        iVar3 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX_02;
      }
      iVar3 = *(int *)(iVar3 + uVar2 * 4);
      uVar2 = local_9 - 1;
      if (SBORROW4((uint)local_9,1)) {
        iVar3 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX_03;
      }
      if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar2)) {
        iVar3 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX_04;
      }
      *(double *)(iVar3 + uVar2 * 8) = (double)fVar6;
      uVar2 = local_9 - 1;
      if (0x13 < uVar2) {
        uVar2 = thunk_FUN_004072dc();
      }
      lVar1 = (longlong)(int)(uVar2 + 1) * 5;
      iVar3 = (int)lVar1;
      if (iVar3 != lVar1) {
        iVar3 = thunk_FUN_004072dc();
      }
      iVar3 = *(int *)PTR_DAT_00baa39c + iVar3 * 8;
      uVar2 = local_a - 1;
      if (0x13 < uVar2) {
        iVar3 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX_05;
      }
      uVar2 = (uint)*(ushort *)(iVar3 + 0x616 + (uVar2 + 1) * 2);
      iVar4 = 0;
      iVar3 = *(int *)(*(int *)(param_1 + 0x430) + 0xc);
      if ((iVar3 == 0) || (*(int *)(iVar3 + -4) == 0)) {
        uVar2 = thunk_FUN_004072dc();
        iVar3 = extraout_ECX;
        iVar4 = extraout_EDX_06;
      }
      iVar3 = *(int *)(iVar3 + iVar4 * 4);
      uVar5 = local_a - 1;
      if (SBORROW4((uint)local_a,1)) {
        uVar2 = thunk_FUN_004072dc();
        uVar5 = extraout_ECX_00;
        iVar3 = extraout_EDX_07;
      }
      if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar5)) {
        uVar2 = thunk_FUN_004072dc();
        uVar5 = extraout_ECX_01;
        iVar3 = extraout_EDX_08;
      }
      iVar3 = *(int *)(iVar3 + uVar5 * 4);
      uVar5 = local_9 - 1;
      if (SBORROW4((uint)local_9,1)) {
        uVar2 = thunk_FUN_004072dc();
        uVar5 = extraout_ECX_02;
        iVar3 = extraout_EDX_09;
      }
      if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar5)) {
        uVar2 = thunk_FUN_004072dc();
        uVar5 = extraout_ECX_03;
        iVar3 = extraout_EDX_10;
      }
      *(uint *)(iVar3 + uVar5 * 4) = uVar2;
      local_a = local_a + 1;
    } while (local_a != 0x15);
    local_9 = local_9 + 1;
  } while (local_9 != 0x15);
  return;
}



// === FUN_007e6424 @ 007e6424 size:189 ===

void FUN_007e6424(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_18 = 0;
  puStack_20 = (undefined1 *)0x7e643e;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040c6ac(param_2);
  puStack_24 = &LAB_007e64e1;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  piVar2 = (int *)FUN_005feb98(*(undefined4 *)(local_8 + 0x420));
  iVar3 = (**(code **)(*piVar2 + 0x14))();
  if (0 < iVar3) {
    local_10 = 1;
    local_14 = iVar3;
    do {
      piVar2 = (int *)FUN_005feb98(*(undefined4 *)(local_8 + 0x420));
      uVar5 = local_10 + -1 == 0;
      if (SBORROW4(local_10,1)) {
        piVar2 = (int *)thunk_FUN_004072dc(piVar2,local_10 + -1,&local_18);
      }
      (**(code **)(*piVar2 + 0xc))();
      uVar4 = FUN_0040d98c(local_18,local_c);
      if ((bool)uVar5) {
        if (SBORROW4(local_10,1)) {
          thunk_FUN_004072dc(uVar4,local_10 + -1);
        }
        (**(code **)(**(int **)(local_8 + 0x420) + 0x130))();
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_007e64e8;
  puStack_24 = (undefined1 *)0x7e64d8;
  FUN_0040c5c8(&local_18,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x7e64e0;
  FUN_0040c5c8(&local_c);
  return;
}



// === FUN_007e64f0 @ 007e64f0 size:189 ===

void FUN_007e64f0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_18 = 0;
  puStack_20 = (undefined1 *)0x7e650a;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040c6ac(param_2);
  puStack_24 = &LAB_007e65ad;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  piVar2 = (int *)FUN_005feb98(*(undefined4 *)(local_8 + 0x424));
  iVar3 = (**(code **)(*piVar2 + 0x14))();
  if (0 < iVar3) {
    local_10 = 1;
    local_14 = iVar3;
    do {
      piVar2 = (int *)FUN_005feb98(*(undefined4 *)(local_8 + 0x424));
      uVar5 = local_10 + -1 == 0;
      if (SBORROW4(local_10,1)) {
        piVar2 = (int *)thunk_FUN_004072dc(piVar2,local_10 + -1,&local_18);
      }
      (**(code **)(*piVar2 + 0xc))();
      uVar4 = FUN_0040d98c(local_18,local_c);
      if ((bool)uVar5) {
        if (SBORROW4(local_10,1)) {
          thunk_FUN_004072dc(uVar4,local_10 + -1);
        }
        (**(code **)(**(int **)(local_8 + 0x424) + 0x130))();
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_007e65b4;
  puStack_24 = (undefined1 *)0x7e65a4;
  FUN_0040c5c8(&local_18,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x7e65ac;
  FUN_0040c5c8(&local_c);
  return;
}



// === FUN_007e7998 @ 007e7998 size:644 ===

void FUN_007e7998(int param_1)

{
  double dVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  int extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar6;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 fVar7;
  float10 in_ST6;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float10 local_54;
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  byte local_a;
  byte local_9;
  int local_8;
  
  puStack_64 = &stack0xfffffffc;
  local_5c = 0;
  local_60 = 0;
  puStack_68 = &LAB_007e7c2a;
  uStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_6c;
  local_54 = (float10)1;
  local_9 = 1;
  fVar6 = in_ST6;
  local_8 = param_1;
  do {
    local_a = 1;
    do {
      puStack_70 = (undefined1 *)0x7e79cd;
      FUN_0070fba8(local_9);
      local_1c = (double)in_ST0;
      puStack_70 = (undefined1 *)0x7e79d9;
      in_ST0 = in_ST3;
      in_ST3 = in_ST6;
      fVar7 = fVar6;
      FUN_0070fd68(local_a);
      dVar1 = (double)in_ST1;
      local_24 = dVar1;
      if (local_a == 1) {
        puStack_74 = &LAB_007e7a58;
        uStack_78 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_78;
        fVar6 = (float10)local_1c;
        puStack_70 = &stack0xfffffffc;
        FUN_0042bc74(L"0.##",PTR_DAT_00baa920,&local_5c,SUB104(fVar6,0),
                     (int)((unkuint10)fVar6 >> 0x20),(short)((unkuint10)fVar6 >> 0x40));
        uVar3 = local_9 - 1;
        if (SBORROW4((uint)local_9,1)) {
          uVar3 = thunk_FUN_004072dc();
        }
        iVar5 = *(int *)(*(int *)(local_8 + 0x430) + 0x10);
        if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar3)) {
          uVar3 = thunk_FUN_004072dc();
          iVar5 = extraout_EDX;
        }
        FUN_0040c9a8(iVar5 + uVar3 * 4,local_5c);
        puVar2 = puStack_70;
        *in_FS_OFFSET = uStack_78;
        puStack_70 = (undefined1 *)0x7e7a5f;
        puStack_74 = (undefined1 *)0x7e7a57;
        FUN_0040c5c8(&local_5c,uStack_78,puVar2);
        return;
      }
      if (local_9 == 1) {
        puStack_74 = &LAB_007e7ada;
        uStack_78 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_78;
        fVar6 = (float10)dVar1;
        puStack_70 = &stack0xfffffffc;
        FUN_0042bc74(&DAT_007e7c5c,PTR_DAT_00baa920,&local_60,SUB104(fVar6,0),
                     (int)((unkuint10)fVar6 >> 0x20),(short)((unkuint10)fVar6 >> 0x40));
        uVar3 = local_a - 1;
        if (SBORROW4((uint)local_a,1)) {
          uVar3 = thunk_FUN_004072dc();
        }
        iVar5 = *(int *)(*(int *)(local_8 + 0x430) + 0x14);
        if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar3)) {
          uVar3 = thunk_FUN_004072dc();
          iVar5 = extraout_EDX_00;
        }
        FUN_0040c9a8(iVar5 + uVar3 * 4,local_60);
        puVar2 = puStack_70;
        *in_FS_OFFSET = uStack_78;
        puStack_70 = (undefined1 *)0x7e7ae1;
        puStack_74 = (undefined1 *)0x7e7ad9;
        FUN_0040c5c8(&local_60,uStack_78,puVar2);
        return;
      }
      puStack_70 = (undefined1 *)local_1c._4_4_;
      puStack_74 = (undefined1 *)(undefined4)local_1c;
      local_24._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
      uStack_78 = local_24._4_4_;
      in_ST1 = in_ST4;
      in_ST4 = fVar6;
      in_ST6 = fVar7;
      FUN_00710f2c(local_2c,local_34,local_3c,&local_58,SUB82(dVar1,0));
      local_14 = (double)in_ST2;
      if (local_54 < (float10)local_14) {
        local_54 = (float10)local_14;
      }
      iVar4 = 0;
      iVar5 = *(int *)(*(int *)(local_8 + 0x430) + 4);
      fVar6 = in_ST6;
      if ((iVar5 == 0) || (in_ST2 = in_ST5, *(int *)(iVar5 + -4) == 0)) {
        puStack_70 = (undefined1 *)0x7e7b32;
        iVar4 = thunk_FUN_004072dc();
        iVar5 = extraout_EDX_01;
        in_ST2 = in_ST5;
      }
      in_ST5 = fVar7;
      iVar5 = *(int *)(iVar5 + iVar4 * 4);
      uVar3 = local_a - 1;
      if (SBORROW4((uint)local_a,1)) {
        puStack_70 = (undefined1 *)0x7e7b44;
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_02;
      }
      if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar3)) {
        puStack_70 = (undefined1 *)0x7e7b52;
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_03;
      }
      iVar5 = *(int *)(iVar5 + uVar3 * 4);
      uVar3 = local_9 - 1;
      if (SBORROW4((uint)local_9,1)) {
        puStack_70 = (undefined1 *)0x7e7b64;
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_04;
      }
      if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar3)) {
        puStack_70 = (undefined1 *)0x7e7b72;
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_05;
      }
      *(undefined4 *)(iVar5 + uVar3 * 8) = (undefined4)local_14;
      *(undefined4 *)(iVar5 + 4 + uVar3 * 8) = local_14._4_4_;
      iVar4 = 0;
      iVar5 = *(int *)(*(int *)(local_8 + 0x430) + 0xc);
      if ((iVar5 == 0) || (*(int *)(iVar5 + -4) == 0)) {
        puStack_70 = (undefined1 *)0x7e7b9b;
        iVar4 = thunk_FUN_004072dc();
        iVar5 = extraout_EDX_06;
      }
      iVar5 = *(int *)(iVar5 + iVar4 * 4);
      uVar3 = local_a - 1;
      if (SBORROW4((uint)local_a,1)) {
        puStack_70 = (undefined1 *)0x7e7bad;
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_07;
      }
      if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar3)) {
        puStack_70 = (undefined1 *)0x7e7bbb;
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_08;
      }
      iVar5 = *(int *)(iVar5 + uVar3 * 4);
      uVar3 = local_9 - 1;
      if (SBORROW4((uint)local_9,1)) {
        puStack_70 = (undefined1 *)0x7e7bcd;
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_09;
      }
      if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar3)) {
        puStack_70 = (undefined1 *)0x7e7bdb;
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_10;
      }
      *(undefined4 *)(iVar5 + uVar3 * 4) = local_58;
      local_a = local_a + 1;
    } while (local_a != 0x15);
    local_9 = local_9 + 1;
    if (local_9 == 0x15) {
      puStack_70 = (undefined1 *)0x7e7c0f;
      FUN_00690ac0(&local_54,*(int *)(local_8 + 0x430) + 0x60);
      puVar2 = puStack_64;
      *in_FS_OFFSET = uStack_6c;
      puStack_64 = &LAB_007e7c31;
      puStack_68 = (undefined1 *)0x7e7c29;
      FUN_0040c628(&local_60,2,puVar2);
      return;
    }
  } while( true );
}



// === FUN_007e84fc @ 007e84fc size:755 ===

void FUN_007e84fc(int param_1)

{
  double dVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  int extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar6;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 fVar7;
  float10 in_ST6;
  undefined4 uStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  undefined4 uStack_90;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  undefined1 local_74 [16];
  undefined1 local_64 [8];
  undefined2 uStack_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined8 local_1c;
  undefined8 local_14;
  byte local_a;
  byte local_9;
  int local_8;
  
  puStack_88 = &stack0xfffffffc;
  local_80 = 0;
  local_84 = 0;
  puStack_8c = &LAB_007e87fd;
  uStack_90 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_90;
  local_54 = 0xcccccccd;
  uStack_50 = 0xcccccccc;
  uStack_4c = 0x3ffe;
  _local_64 = (float10)1;
  local_9 = 1;
  fVar6 = in_ST6;
  local_8 = param_1;
  do {
    local_a = 1;
    do {
      puStack_94 = (undefined1 *)0x7e8545;
      FUN_0070fba8(local_9);
      local_14 = (double)in_ST0;
      puStack_94 = (undefined1 *)0x7e8551;
      in_ST0 = in_ST3;
      in_ST3 = in_ST6;
      fVar7 = fVar6;
      FUN_0070fd68(local_a);
      dVar1 = (double)in_ST1;
      local_1c = dVar1;
      if (local_a == 1) {
        puStack_98 = &LAB_007e85d0;
        uStack_9c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_9c;
        fVar6 = (float10)local_14;
        puStack_94 = &stack0xfffffffc;
        FUN_0042bc74(L"0.##",PTR_DAT_00baa920,&local_80,SUB104(fVar6,0),
                     (int)((unkuint10)fVar6 >> 0x20),(short)((unkuint10)fVar6 >> 0x40));
        uVar3 = local_9 - 1;
        if (SBORROW4((uint)local_9,1)) {
          uVar3 = thunk_FUN_004072dc();
        }
        iVar5 = *(int *)(*(int *)(local_8 + 0x430) + 0x10);
        if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar3)) {
          uVar3 = thunk_FUN_004072dc();
          iVar5 = extraout_EDX;
        }
        FUN_0040c9a8(iVar5 + uVar3 * 4,local_80);
        puVar2 = puStack_94;
        *in_FS_OFFSET = uStack_9c;
        puStack_94 = (undefined1 *)0x7e85d7;
        puStack_98 = (undefined1 *)0x7e85cf;
        FUN_0040c5c8(&local_80,uStack_9c,puVar2);
        return;
      }
      if (local_9 == 1) {
        puStack_98 = &LAB_007e8652;
        uStack_9c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_9c;
        fVar6 = (float10)dVar1;
        puStack_94 = &stack0xfffffffc;
        FUN_0042bc74(&DAT_007e882c,PTR_DAT_00baa920,&local_84,SUB104(fVar6,0),
                     (int)((unkuint10)fVar6 >> 0x20),(short)((unkuint10)fVar6 >> 0x40));
        uVar3 = local_a - 1;
        if (SBORROW4((uint)local_a,1)) {
          uVar3 = thunk_FUN_004072dc();
        }
        iVar5 = *(int *)(*(int *)(local_8 + 0x430) + 0x14);
        if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar3)) {
          uVar3 = thunk_FUN_004072dc();
          iVar5 = extraout_EDX_00;
        }
        FUN_0040c9a8(iVar5 + uVar3 * 4,local_84);
        puVar2 = puStack_94;
        *in_FS_OFFSET = uStack_9c;
        puStack_94 = (undefined1 *)0x7e8659;
        puStack_98 = (undefined1 *)0x7e8651;
        FUN_0040c5c8(&local_84,uStack_9c,puVar2);
        return;
      }
      puStack_94 = (undefined1 *)local_14._4_4_;
      puStack_98 = (undefined1 *)(undefined4)local_14;
      local_1c._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
      uStack_9c = local_1c._4_4_;
      FUN_0071151c(local_34,local_24,local_2c,&local_78,SUB82(dVar1,0));
      if ((in_ST2 < (float10)CONCAT28(uStack_4c,CONCAT44(uStack_50,local_54))) &&
         (*(int *)(*(int *)(local_8 + 0x430) + 0x62) <= local_78)) {
        local_44 = SUB104(in_ST2,0);
        local_54 = local_44;
        uStack_40 = (undefined4)((unkuint10)in_ST2 >> 0x20);
        uStack_50 = uStack_40;
        uStack_3c = (undefined2)((unkuint10)in_ST2 >> 0x40);
        uStack_4c = uStack_3c;
      }
      iVar4 = 0;
      iVar5 = *(int *)(*(int *)(local_8 + 0x430) + 4);
      in_ST6 = fVar7;
      if ((iVar5 == 0) || (in_ST1 = in_ST4, *(int *)(iVar5 + -4) == 0)) {
        puStack_94 = (undefined1 *)0x7e86cd;
        iVar4 = thunk_FUN_004072dc();
        iVar5 = extraout_EDX_01;
        in_ST1 = in_ST4;
      }
      in_ST4 = fVar6;
      iVar5 = *(int *)(iVar5 + iVar4 * 4);
      uVar3 = local_a - 1;
      if (SBORROW4((uint)local_a,1)) {
        puStack_94 = (undefined1 *)0x7e86df;
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_02;
      }
      if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar3)) {
        puStack_94 = (undefined1 *)0x7e86ed;
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_03;
      }
      iVar5 = *(int *)(iVar5 + uVar3 * 4);
      uVar3 = local_9 - 1;
      if (SBORROW4((uint)local_9,1)) {
        puStack_94 = (undefined1 *)0x7e86ff;
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_04;
      }
      if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar3)) {
        puStack_94 = (undefined1 *)0x7e870d;
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_05;
      }
      *(double *)(iVar5 + uVar3 * 8) = (double)in_ST2;
      iVar4 = 0;
      iVar5 = *(int *)(*(int *)(local_8 + 0x430) + 0xc);
      fVar6 = in_ST6;
      if ((iVar5 == 0) || (in_ST2 = in_ST5, *(int *)(iVar5 + -4) == 0)) {
        puStack_94 = (undefined1 *)0x7e872d;
        iVar4 = thunk_FUN_004072dc();
        iVar5 = extraout_EDX_06;
        in_ST2 = in_ST5;
      }
      in_ST5 = fVar7;
      iVar5 = *(int *)(iVar5 + iVar4 * 4);
      uVar3 = local_a - 1;
      if (SBORROW4((uint)local_a,1)) {
        puStack_94 = (undefined1 *)0x7e873f;
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_07;
      }
      if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar3)) {
        puStack_94 = (undefined1 *)0x7e874d;
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_08;
      }
      iVar5 = *(int *)(iVar5 + uVar3 * 4);
      uVar3 = local_9 - 1;
      if (SBORROW4((uint)local_9,1)) {
        puStack_94 = (undefined1 *)0x7e875f;
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_09;
      }
      if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar3)) {
        puStack_94 = (undefined1 *)0x7e876d;
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_10;
      }
      *(int *)(iVar5 + uVar3 * 4) = local_78;
      local_a = local_a + 1;
    } while (local_a != 0x15);
    local_9 = local_9 + 1;
    if (local_9 == 0x15) {
      local_7c = *(int *)(local_8 + 0x430);
      puStack_94 = local_74;
      puStack_98 = (undefined1 *)0x7e87b4;
      FUN_00690ec4(&local_54,local_64,*(int *)(local_8 + 0x430) + 0x60);
      puVar2 = puStack_88;
      *(undefined4 *)(local_7c + 0x42) = local_54;
      *(undefined4 *)(local_7c + 0x46) = uStack_50;
      *(undefined2 *)(local_7c + 0x4a) = uStack_4c;
      *(undefined4 *)(local_7c + 0x4c) = local_64._0_4_;
      *(undefined4 *)(local_7c + 0x50) = local_64._4_4_;
      *(undefined2 *)(local_7c + 0x54) = uStack_5c;
      *in_FS_OFFSET = uStack_90;
      puStack_88 = &LAB_007e8804;
      puStack_8c = (undefined1 *)0x7e87fc;
      FUN_0040c628(&local_84,2,puVar2);
      return;
    }
  } while( true );
}



// === FUN_007e94c4 @ 007e94c4 size:1008 ===

void FUN_007e94c4(void)

{
  double dVar1;
  undefined1 *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  int extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar7;
  float10 fVar8;
  float10 in_ST1;
  float10 in_ST2;
  float10 fVar9;
  float10 in_ST3;
  float10 fVar10;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar11;
  float10 in_ST7;
  double adStack_156dc [1826];
  undefined4 auStack_11dcc [3652];
  double local_e4bc [1826];
  double local_abac [1826];
  undefined4 local_729c [3652];
  double local_398c [1104];
  undefined4 uStack_1708;
  undefined4 local_1704;
  int *piStack_1700;
  undefined4 uStack_16fc;
  double *pdStack_16f8;
  undefined8 uStack_16f4;
  undefined4 uStack_16ec;
  undefined1 *puStack_16e8;
  undefined1 *puStack_16e4;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  double local_6c;
  double local_64;
  double local_5c;
  double local_54;
  double local_4c;
  undefined1 local_44 [8];
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  double local_14;
  byte local_a;
  byte local_9;
  int local_8;
  
  puStack_16e4 = &stack0xfffffffc;
  iVar6 = 0x15;
  do {
    local_8 = iVar6;
    iVar6 = local_8 + -1;
  } while (local_8 + -1 != 0);
  local_74 = 0;
  local_78 = 0;
  puStack_16e8 = &LAB_007e98c2;
  uStack_16ec = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_16ec;
  local_9 = 1;
  do {
    fVar10 = in_ST7;
    fVar8 = in_ST5;
    fVar7 = in_ST3;
    uStack_16f4._4_4_ = (undefined1 *)0x7e9505;
    FUN_0070fba8(local_9);
    local_2c = (double)in_ST0;
    pdStack_16f8 = &local_6c;
    uStack_16fc = &local_70;
    piStack_1700 = (int *)0x7e9525;
    in_ST0 = in_ST2;
    in_ST2 = in_ST4;
    in_ST4 = in_ST6;
    in_ST6 = fVar10;
    uStack_16f4 = local_2c;
    FUN_00710af4(&local_3c,local_44,&local_1c);
    local_14 = (double)in_ST1;
    local_398c[local_9] = (double)local_9;
    local_729c[(uint)local_9 * 2] = (undefined4)local_1c;
    local_729c[(uint)local_9 * 2 + 1] = local_1c._4_4_;
    local_abac[local_9] = (double)local_70;
    local_e4bc[local_9] = (double)local_9;
    auStack_11dcc[(uint)local_9 * 2] = (undefined4)local_3c;
    auStack_11dcc[(uint)local_9 * 2 + 1] = local_3c._4_4_;
    adStack_156dc[local_9] = (double)local_70;
    local_9 = local_9 + 1;
    in_ST1 = fVar7;
    in_ST3 = fVar8;
    in_ST5 = fVar10;
    in_ST7 = in_ST6;
  } while (local_9 != 0x15);
  uStack_16f4._4_4_ = (undefined1 *)0x14;
  uStack_16f4._0_4_ = &local_4c;
  pdStack_16f8 = &local_54;
  uStack_16fc._0_2_ = 0x95e5;
  uStack_16fc._2_2_ = 0x7e;
  fVar9 = in_ST6;
  FUN_006911c4(local_398c,local_729c,local_abac);
  uStack_16f4._4_4_ = (undefined1 *)0x14;
  uStack_16f4._0_4_ = &local_5c;
  pdStack_16f8 = &local_64;
  uStack_16fc._0_2_ = 0x9606;
  uStack_16fc._2_2_ = 0x7e;
  FUN_006911c4(local_e4bc,auStack_11dcc,adStack_156dc);
  local_9 = 1;
  bVar3 = local_a;
  do {
    local_a = bVar3;
    uStack_16f4._4_4_ = (undefined1 *)0x7e9612;
    FUN_0070fba8(local_9);
    local_2c = (double)in_ST0;
    pdStack_16f8 = &local_6c;
    uStack_16fc = &local_70;
    piStack_1700 = (int *)0x7e9632;
    in_ST0 = in_ST2;
    in_ST2 = in_ST4;
    in_ST4 = in_ST6;
    in_ST6 = fVar9;
    uStack_16f4 = local_2c;
    FUN_00710af4(&local_3c,local_44,&local_1c);
    local_14 = (double)fVar7;
    local_a = 1;
    fVar11 = in_ST6;
    do {
      uStack_16f4._4_4_ = (undefined1 *)0x7e9642;
      FUN_0070fd68(local_a);
      dVar1 = (double)in_ST0;
      local_34 = dVar1;
      if (local_a == 1) {
        uStack_16f4._0_4_ = (double *)&LAB_007e96c1;
        pdStack_16f8 = (double *)*in_FS_OFFSET;
        *in_FS_OFFSET = &pdStack_16f8;
        fVar7 = (float10)local_2c;
        local_1704 = SUB104(fVar7,0);
        piStack_1700 = (int *)((unkuint10)fVar7 >> 0x20);
        uStack_16fc._0_2_ = (undefined2)((unkuint10)fVar7 >> 0x40);
        uStack_1708 = 0x7e9677;
        uStack_16f4._4_4_ = &stack0xfffffffc;
        FUN_0042bc74(L"0.##",PTR_DAT_00baa920,&local_74);
        uVar4 = local_9 - 1;
        if (SBORROW4((uint)local_9,1)) {
          uStack_16fc._0_2_ = 0x9686;
          uStack_16fc._2_2_ = 0x7e;
          uVar4 = thunk_FUN_004072dc();
        }
        iVar6 = *(int *)(*(int *)(local_8 + 0x430) + 0x10);
        if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= uVar4)) {
          uStack_16fc._0_2_ = 0x96a0;
          uStack_16fc._2_2_ = 0x7e;
          uVar4 = thunk_FUN_004072dc();
          iVar6 = extraout_EDX;
        }
        uStack_16fc._0_2_ = 0x96ab;
        uStack_16fc._2_2_ = 0x7e;
        FUN_0040c9a8(iVar6 + uVar4 * 4,local_74);
        puVar2 = uStack_16f4._4_4_;
        *in_FS_OFFSET = pdStack_16f8;
        uStack_16f4._4_4_ = (undefined1 *)0x7e96c8;
        uStack_16f4._0_4_ = (double *)0x7e96c0;
        FUN_0040c5c8(&local_74,pdStack_16f8,puVar2);
        return;
      }
      if (local_9 == 1) {
        uStack_16f4._0_4_ = (double *)&LAB_007e9743;
        pdStack_16f8 = (double *)*in_FS_OFFSET;
        *in_FS_OFFSET = &pdStack_16f8;
        fVar7 = (float10)dVar1;
        local_1704 = SUB104(fVar7,0);
        piStack_1700 = (int *)((unkuint10)fVar7 >> 0x20);
        uStack_16fc._0_2_ = (undefined2)((unkuint10)fVar7 >> 0x40);
        uStack_1708 = 0x7e96f9;
        uStack_16f4._4_4_ = &stack0xfffffffc;
        FUN_0042bc74(&LAB_007e98f4,PTR_DAT_00baa920,&local_78);
        uVar4 = local_a - 1;
        if (SBORROW4((uint)local_a,1)) {
          uStack_16fc._0_2_ = 0x9708;
          uStack_16fc._2_2_ = 0x7e;
          uVar4 = thunk_FUN_004072dc();
        }
        iVar6 = *(int *)(*(int *)(local_8 + 0x430) + 0x14);
        if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= uVar4)) {
          uStack_16fc._0_2_ = 0x9722;
          uStack_16fc._2_2_ = 0x7e;
          uVar4 = thunk_FUN_004072dc();
          iVar6 = extraout_EDX_00;
        }
        uStack_16fc._0_2_ = 0x972d;
        uStack_16fc._2_2_ = 0x7e;
        FUN_0040c9a8(iVar6 + uVar4 * 4,local_78);
        puVar2 = uStack_16f4._4_4_;
        *in_FS_OFFSET = pdStack_16f8;
        uStack_16f4._4_4_ = (undefined1 *)0x7e974a;
        uStack_16f4._0_4_ = (double *)0x7e9742;
        FUN_0040c5c8(&local_78,pdStack_16f8,puVar2);
        return;
      }
      uStack_16f4._4_4_ = (undefined1 *)local_2c._4_4_;
      uStack_16f4._0_4_ = (double *)(undefined4)local_2c;
      local_34._4_4_ = (double *)((ulonglong)dVar1 >> 0x20);
      pdStack_16f8 = local_34._4_4_;
      uStack_16fc._0_2_ = SUB82(dVar1,0);
      uStack_16fc._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
      piStack_1700 = &local_70;
      local_1704 = 0x7e9768;
      in_ST0 = fVar10;
      fVar10 = in_ST6;
      fVar7 = fVar11;
      FUN_00710f2c(&local_3c,local_44,&local_6c);
      local_14 = (double)fVar8;
      local_1c = (double)local_9 * local_4c + local_54;
      dVar1 = (double)local_9 * local_5c + local_64;
      uStack_16f4._4_4_ = (undefined1 *)local_34._4_4_;
      uStack_16f4._0_4_ = (double *)local_34;
      local_3c._4_4_ = (double *)((ulonglong)dVar1 >> 0x20);
      pdStack_16f8 = local_3c._4_4_;
      uStack_16fc._0_2_ = SUB82(dVar1,0);
      uStack_16fc._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
      piStack_1700 = (int *)0x7e97b3;
      fVar8 = in_ST4;
      in_ST4 = fVar11;
      local_3c = dVar1;
      FUN_0044ac4c();
      local_24 = (double)((float10)1 + ((float10)local_1c - (float10)1) * in_ST2);
      iVar5 = 0;
      iVar6 = *(int *)(*(int *)(local_8 + 0x430) + 4);
      in_ST6 = fVar7;
      fVar11 = fVar7;
      if ((iVar6 == 0) || (in_ST2 = fVar9, *(int *)(iVar6 + -4) == 0)) {
        uStack_16f4._4_4_ = (undefined1 *)0x7e97de;
        iVar5 = thunk_FUN_004072dc();
        iVar6 = extraout_EDX_01;
        in_ST2 = fVar9;
      }
      fVar9 = fVar7;
      iVar6 = *(int *)(iVar6 + iVar5 * 4);
      uVar4 = local_a - 1;
      if (SBORROW4((uint)local_a,1)) {
        uStack_16f4._4_4_ = (undefined1 *)0x7e97f0;
        iVar6 = thunk_FUN_004072dc();
        uVar4 = extraout_EDX_02;
      }
      if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= uVar4)) {
        uStack_16f4._4_4_ = (undefined1 *)0x7e97fe;
        iVar6 = thunk_FUN_004072dc();
        uVar4 = extraout_EDX_03;
      }
      iVar6 = *(int *)(iVar6 + uVar4 * 4);
      uVar4 = local_9 - 1;
      if (SBORROW4((uint)local_9,1)) {
        uStack_16f4._4_4_ = (undefined1 *)0x7e9810;
        iVar6 = thunk_FUN_004072dc();
        uVar4 = extraout_EDX_04;
      }
      if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= uVar4)) {
        uStack_16f4._4_4_ = (undefined1 *)0x7e981e;
        iVar6 = thunk_FUN_004072dc();
        uVar4 = extraout_EDX_05;
      }
      *(undefined4 *)(iVar6 + uVar4 * 8) = (undefined4)local_24;
      *(undefined4 *)(iVar6 + 4 + uVar4 * 8) = local_24._4_4_;
      iVar5 = 0;
      iVar6 = *(int *)(*(int *)(local_8 + 0x430) + 0xc);
      if ((iVar6 == 0) || (*(int *)(iVar6 + -4) == 0)) {
        uStack_16f4._4_4_ = (undefined1 *)0x7e9847;
        iVar5 = thunk_FUN_004072dc();
        iVar6 = extraout_EDX_06;
      }
      iVar6 = *(int *)(iVar6 + iVar5 * 4);
      uVar4 = local_a - 1;
      if (SBORROW4((uint)local_a,1)) {
        uStack_16f4._4_4_ = (undefined1 *)0x7e9859;
        iVar6 = thunk_FUN_004072dc();
        uVar4 = extraout_EDX_07;
      }
      if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= uVar4)) {
        uStack_16f4._4_4_ = (undefined1 *)0x7e9867;
        iVar6 = thunk_FUN_004072dc();
        uVar4 = extraout_EDX_08;
      }
      iVar6 = *(int *)(iVar6 + uVar4 * 4);
      uVar4 = local_9 - 1;
      if (SBORROW4((uint)local_9,1)) {
        uStack_16f4._4_4_ = (undefined1 *)0x7e9879;
        iVar6 = thunk_FUN_004072dc();
        uVar4 = extraout_EDX_09;
      }
      if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= uVar4)) {
        uStack_16f4._4_4_ = (undefined1 *)0x7e9887;
        iVar6 = thunk_FUN_004072dc();
        uVar4 = extraout_EDX_10;
      }
      puVar2 = puStack_16e4;
      *(int *)(iVar6 + uVar4 * 4) = local_70;
      local_a = local_a + 1;
    } while (local_a != 0x15);
    local_9 = local_9 + 1;
    fVar7 = fVar8;
    fVar8 = fVar10;
    fVar10 = fVar9;
    fVar9 = fVar11;
    bVar3 = 0x15;
    if (local_9 == 0x15) {
      *in_FS_OFFSET = uStack_16ec;
      puStack_16e4 = &LAB_007e98c9;
      puStack_16e8 = (undefined1 *)0x7e98c1;
      FUN_0040c628(&local_78,2,puVar2);
      return;
    }
  } while( true );
}



// === FUN_007e9b90 @ 007e9b90 size:585 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e9b90(int param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  uint uVar6;
  int iVar7;
  int extraout_ECX;
  uint uVar8;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  int extraout_EDX;
  int iVar9;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  int extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  int extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  int extraout_EDX_14;
  int extraout_EDX_15;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar10;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar11;
  float10 in_ST7;
  undefined4 uStack_94;
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  undefined4 uStack_88;
  undefined1 *puStack_84;
  undefined1 *puStack_80;
  uint local_7c;
  undefined4 local_20;
  double local_1c;
  double local_14;
  byte local_a;
  byte local_9;
  int local_8;
  
  puStack_80 = &stack0xfffffffc;
  local_20 = 0;
  puStack_84 = &LAB_007e9de0;
  uStack_88 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_88;
  local_9 = 1;
  local_8 = param_1;
  do {
    local_a = 2;
    do {
      puStack_8c = (undefined1 *)0x7e9bbc;
      FUN_0070fba8(local_9);
      local_14 = (double)in_ST0;
      puStack_8c = (undefined1 *)0x7e9bc8;
      fVar11 = in_ST7;
      FUN_0070fd68(local_a);
      local_1c = (double)in_ST1;
      if (local_a == 1) {
        puStack_90 = &LAB_007e9c47;
        uStack_94 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_94;
        puStack_8c = &stack0xfffffffc;
        FUN_0042bc74(L"0.##",PTR_DAT_00baa920,&local_20,SUB108((float10)local_14,0),
                     (short)((unkuint10)(float10)local_14 >> 0x40));
        uVar6 = local_9 - 1;
        if (SBORROW4((uint)local_9,1)) {
          uVar6 = thunk_FUN_004072dc();
        }
        iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 0x10);
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar6)) {
          uVar6 = thunk_FUN_004072dc();
          iVar9 = extraout_EDX;
        }
        FUN_0040c9a8(iVar9 + uVar6 * 4,local_20);
        puVar2 = puStack_8c;
        *in_FS_OFFSET = uStack_94;
        puStack_8c = (undefined1 *)0x7e9c4e;
        puStack_90 = (undefined1 *)0x7e9c46;
        FUN_0040c5c8(&local_20,uStack_94,puVar2);
        return;
      }
      iVar9 = 0x15 - (uint)local_9;
      if (SBORROW4(0x15,(uint)local_9)) {
        puStack_8c = (undefined1 *)0x7e9c61;
        thunk_FUN_004072dc();
        iVar9 = extraout_EDX_00;
      }
      uVar6 = iVar9 - 1;
      if (0x13 < uVar6) {
        puStack_8c = (undefined1 *)0x7e9c6c;
        thunk_FUN_004072dc();
        uVar6 = extraout_EDX_01;
      }
      lVar1 = (longlong)(int)(uVar6 + 1) * 5;
      iVar9 = (int)lVar1;
      if (iVar9 != lVar1) {
        puStack_8c = (undefined1 *)0x7e9c77;
        iVar9 = thunk_FUN_004072dc();
      }
      iVar9 = *(int *)PTR_DAT_00baa39c + iVar9 * 8;
      uVar6 = local_a - 1;
      if (0x13 < uVar6) {
        puStack_8c = (undefined1 *)0x7e9c92;
        iVar9 = thunk_FUN_004072dc();
        uVar6 = extraout_EDX_02;
      }
      local_7c = (uint)*(ushort *)(iVar9 + -0x2a + (uVar6 + 1) * 2);
      fVar10 = (float10)local_7c / (float10)_DAT_007e9e04;
      iVar7 = 0;
      iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 4);
      if ((iVar9 == 0) ||
         (in_ST0 = in_ST2, in_ST1 = in_ST3, fVar3 = in_ST4, fVar4 = in_ST5, fVar5 = in_ST6,
         *(int *)(iVar9 + -4) == 0)) {
        puStack_8c = (undefined1 *)0x7e9cc0;
        iVar7 = thunk_FUN_004072dc();
        iVar9 = extraout_EDX_03;
        in_ST0 = in_ST2;
        in_ST1 = in_ST3;
        fVar3 = in_ST4;
        fVar4 = in_ST5;
        fVar5 = in_ST6;
      }
      in_ST6 = fVar11;
      in_ST5 = in_ST7;
      in_ST4 = fVar5;
      in_ST3 = fVar4;
      in_ST2 = fVar3;
      iVar9 = *(int *)(iVar9 + iVar7 * 4);
      uVar6 = local_a - 1;
      if (SBORROW4((uint)local_a,1)) {
        puStack_8c = (undefined1 *)0x7e9cd2;
        iVar9 = thunk_FUN_004072dc();
        uVar6 = extraout_EDX_04;
      }
      if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar6)) {
        puStack_8c = (undefined1 *)0x7e9ce0;
        iVar9 = thunk_FUN_004072dc();
        uVar6 = extraout_EDX_05;
      }
      iVar9 = *(int *)(iVar9 + uVar6 * 4);
      uVar6 = local_9 - 1;
      if (SBORROW4((uint)local_9,1)) {
        puStack_8c = (undefined1 *)0x7e9cf2;
        iVar9 = thunk_FUN_004072dc();
        uVar6 = extraout_EDX_06;
      }
      if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar6)) {
        puStack_8c = (undefined1 *)0x7e9d00;
        iVar9 = thunk_FUN_004072dc();
        uVar6 = extraout_EDX_07;
      }
      *(double *)(iVar9 + uVar6 * 8) = (double)fVar10;
      iVar9 = 0x15 - (uint)local_9;
      in_ST7 = in_ST6;
      if (SBORROW4(0x15,(uint)local_9)) {
        puStack_8c = (undefined1 *)0x7e9d17;
        thunk_FUN_004072dc();
        iVar9 = extraout_EDX_08;
      }
      uVar6 = iVar9 - 1;
      if (0x13 < uVar6) {
        puStack_8c = (undefined1 *)0x7e9d22;
        thunk_FUN_004072dc();
        uVar6 = extraout_EDX_09;
      }
      lVar1 = (longlong)(int)(uVar6 + 1) * 5;
      iVar9 = (int)lVar1;
      if (iVar9 != lVar1) {
        puStack_8c = (undefined1 *)0x7e9d2d;
        iVar9 = thunk_FUN_004072dc();
      }
      iVar9 = *(int *)PTR_DAT_00baa39c + iVar9 * 8;
      uVar6 = local_a - 1;
      if (0x13 < uVar6) {
        puStack_8c = (undefined1 *)0x7e9d48;
        iVar9 = thunk_FUN_004072dc();
        uVar6 = extraout_EDX_10;
      }
      uVar6 = (uint)*(ushort *)(iVar9 + 0x616 + (uVar6 + 1) * 2);
      iVar7 = 0;
      iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 0xc);
      if ((iVar9 == 0) || (*(int *)(iVar9 + -4) == 0)) {
        puStack_8c = (undefined1 *)0x7e9d6d;
        uVar6 = thunk_FUN_004072dc();
        iVar9 = extraout_ECX;
        iVar7 = extraout_EDX_11;
      }
      iVar9 = *(int *)(iVar9 + iVar7 * 4);
      uVar8 = local_a - 1;
      if (SBORROW4((uint)local_a,1)) {
        puStack_8c = (undefined1 *)0x7e9d7f;
        uVar6 = thunk_FUN_004072dc();
        uVar8 = extraout_ECX_00;
        iVar9 = extraout_EDX_12;
      }
      if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar8)) {
        puStack_8c = (undefined1 *)0x7e9d8d;
        uVar6 = thunk_FUN_004072dc();
        uVar8 = extraout_ECX_01;
        iVar9 = extraout_EDX_13;
      }
      iVar9 = *(int *)(iVar9 + uVar8 * 4);
      uVar8 = local_9 - 1;
      if (SBORROW4((uint)local_9,1)) {
        puStack_8c = (undefined1 *)0x7e9d9f;
        uVar6 = thunk_FUN_004072dc();
        uVar8 = extraout_ECX_02;
        iVar9 = extraout_EDX_14;
      }
      if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar8)) {
        puStack_8c = (undefined1 *)0x7e9dad;
        uVar6 = thunk_FUN_004072dc();
        uVar8 = extraout_ECX_03;
        iVar9 = extraout_EDX_15;
      }
      puVar2 = puStack_80;
      *(uint *)(iVar9 + uVar8 * 4) = uVar6;
      local_a = local_a + 1;
    } while (local_a != 0x15);
    local_9 = local_9 + 1;
  } while (local_9 != 0x15);
  *in_FS_OFFSET = uStack_88;
  puStack_80 = &LAB_007e9de7;
  puStack_84 = (undefined1 *)0x7e9ddf;
  FUN_0040c5c8(&local_20,uStack_88,puVar2);
  return;
}



// === FUN_007ee6a0 @ 007ee6a0 size:372 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ee6a0(int param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint extraout_EDX;
  uint extraout_EDX_00;
  float10 fVar5;
  undefined1 local_a;
  undefined1 local_9;
  
  iVar1 = *(int *)(param_1 + 0x4b8);
  *(undefined4 *)(iVar1 + 0xcf1) = *(undefined4 *)(param_1 + 0x434);
  *(undefined4 *)(iVar1 + 4) = _DAT_007ee814;
  *(undefined4 *)(iVar1 + 8) = s_A_Factor_007ee815._3_4_;
  *(char *)(iVar1 + 0xc) = s_A_Factor_007ee815[7];
  *(undefined4 *)(iVar1 + 0x4c) = _DAT_007ee820;
  *(undefined4 *)(iVar1 + 0x50) = s_Repetition__1__20__007ee821._3_4_;
  *(undefined4 *)(iVar1 + 0x54) = s_Repetition__1__20__007ee821._7_4_;
  *(undefined4 *)(iVar1 + 0x58) = s_Repetition__1__20__007ee821._11_4_;
  *(undefined2 *)(iVar1 + 0x5c) = s_Repetition__1__20__007ee821._15_2_;
  *(char *)(iVar1 + 0x5e) = s_Repetition__1__20__007ee821[0x11];
  *(undefined4 *)(iVar1 + 0x28) = _DAT_007ee834;
  *(undefined4 *)(iVar1 + 0x2c) = s_R_Factor_007ee835._3_4_;
  *(char *)(iVar1 + 0x30) = s_R_Factor_007ee835[7];
  *(undefined1 *)(iVar1 + 0xcf0) = 1;
  local_9 = 1;
  do {
    local_a = 1;
    do {
      uVar3 = local_9 - 1;
      if (0x13 < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      lVar2 = (longlong)(int)(uVar3 + 1) * 5;
      iVar4 = (int)lVar2;
      if (iVar4 != lVar2) {
        iVar4 = thunk_FUN_004072dc();
      }
      iVar4 = *(int *)PTR_DAT_00baa39c + iVar4 * 8;
      uVar3 = local_a - 1;
      if (0x13 < uVar3) {
        iVar4 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX;
      }
      fVar5 = (float10)*(ushort *)(iVar4 + 0x2f6 + (uVar3 + 1) * 2) / (float10)_DAT_007ee840;
      uVar3 = local_9 - 1;
      if (0x13 < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      lVar2 = (longlong)(int)(uVar3 + 1) * 0x14;
      iVar4 = (int)lVar2;
      if (iVar4 != lVar2) {
        iVar4 = thunk_FUN_004072dc();
      }
      iVar4 = iVar1 + iVar4 * 8;
      uVar3 = local_a - 1;
      if (0x13 < uVar3) {
        iVar4 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_00;
      }
      *(double *)(iVar4 + -0x38 + (uVar3 + 1) * 8) = (double)fVar5;
      local_a = local_a + 1;
    } while (local_a != 0x15);
    local_9 = local_9 + 1;
  } while (local_9 != 0x15);
  local_9 = 1;
  do {
    uVar3 = local_9 - 1;
    if (0x13 < uVar3) {
      uVar3 = thunk_FUN_004072dc();
    }
    lVar2 = (longlong)(int)(uVar3 + 1) * 0x14;
    iVar4 = (int)lVar2;
    if (iVar4 != lVar2) {
      iVar4 = thunk_FUN_004072dc();
    }
    if (_DAT_007ee844 < (float10)*(double *)(iVar1 + -0x30 + iVar4 * 8)) {
      uVar3 = local_9 - 1;
      if (0x13 < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      lVar2 = (longlong)(int)(uVar3 + 1) * 0x14;
      iVar4 = (int)lVar2;
      if (iVar4 != lVar2) {
        iVar4 = thunk_FUN_004072dc();
      }
      *(undefined4 *)(iVar1 + -0x30 + iVar4 * 8) = 0x9999999a;
      *(undefined4 *)(iVar1 + -0x2c + iVar4 * 8) = 0x401b9999;
    }
    local_9 = local_9 + 1;
  } while (local_9 != 0x15);
  return;
}



// === FUN_007ee850 @ 007ee850 size:369 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ee850(int param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint extraout_EDX;
  uint extraout_EDX_00;
  float10 fVar5;
  undefined1 local_a;
  undefined1 local_9;
  
  iVar1 = *(int *)(param_1 + 0x4b8);
  *(undefined4 *)(iVar1 + 0xcf1) = *(undefined4 *)(param_1 + 0x434);
  *(undefined4 *)(iVar1 + 4) = _DAT_007ee9c4;
  *(undefined4 *)(iVar1 + 8) = s_A_Factor_007ee9c5._3_4_;
  *(char *)(iVar1 + 0xc) = s_A_Factor_007ee9c5[7];
  *(undefined4 *)(iVar1 + 0x4c) = _DAT_007ee9d0;
  *(undefined4 *)(iVar1 + 0x50) = s_Repetition__1__20__007ee9d1._3_4_;
  *(undefined4 *)(iVar1 + 0x54) = s_Repetition__1__20__007ee9d1._7_4_;
  *(undefined4 *)(iVar1 + 0x58) = s_Repetition__1__20__007ee9d1._11_4_;
  *(undefined2 *)(iVar1 + 0x5c) = s_Repetition__1__20__007ee9d1._15_2_;
  *(char *)(iVar1 + 0x5e) = s_Repetition__1__20__007ee9d1[0x11];
  *(undefined4 *)(iVar1 + 0x28) = _DAT_007ee9e4;
  *(undefined4 *)(iVar1 + 0x2c) = s_O_Factor_007ee9e5._3_4_;
  *(char *)(iVar1 + 0x30) = s_O_Factor_007ee9e5[7];
  *(undefined1 *)(iVar1 + 0xcf0) = 1;
  local_9 = 1;
  do {
    local_a = 1;
    do {
      uVar3 = local_9 - 1;
      if (0x13 < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      lVar2 = (longlong)(int)(uVar3 + 1) * 5;
      iVar4 = (int)lVar2;
      if (iVar4 != lVar2) {
        iVar4 = thunk_FUN_004072dc();
      }
      iVar4 = *(int *)PTR_DAT_00baa39c + iVar4 * 8;
      uVar3 = local_a - 1;
      if (0x13 < uVar3) {
        iVar4 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX;
      }
      fVar5 = (float10)*(ushort *)(iVar4 + -0x2a + (uVar3 + 1) * 2) / (float10)_DAT_007ee9f0;
      uVar3 = local_9 - 1;
      if (0x13 < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      lVar2 = (longlong)(int)(uVar3 + 1) * 0x14;
      iVar4 = (int)lVar2;
      if (iVar4 != lVar2) {
        iVar4 = thunk_FUN_004072dc();
      }
      iVar4 = iVar1 + iVar4 * 8;
      uVar3 = local_a - 1;
      if (0x13 < uVar3) {
        iVar4 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_00;
      }
      *(double *)(iVar4 + -0x38 + (uVar3 + 1) * 8) = (double)fVar5;
      local_a = local_a + 1;
    } while (local_a != 0x15);
    local_9 = local_9 + 1;
  } while (local_9 != 0x15);
  local_9 = 1;
  do {
    uVar3 = local_9 - 1;
    if (0x13 < uVar3) {
      uVar3 = thunk_FUN_004072dc();
    }
    lVar2 = (longlong)(int)(uVar3 + 1) * 0x14;
    iVar4 = (int)lVar2;
    if (iVar4 != lVar2) {
      iVar4 = thunk_FUN_004072dc();
    }
    if (_DAT_007ee9f4 < (float10)*(double *)(iVar1 + -0x30 + iVar4 * 8)) {
      uVar3 = local_9 - 1;
      if (0x13 < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      lVar2 = (longlong)(int)(uVar3 + 1) * 0x14;
      iVar4 = (int)lVar2;
      if (iVar4 != lVar2) {
        iVar4 = thunk_FUN_004072dc();
      }
      *(undefined4 *)(iVar1 + -0x30 + iVar4 * 8) = 0x9999999a;
      *(undefined4 *)(iVar1 + -0x2c + iVar4 * 8) = 0x401b9999;
    }
    local_9 = local_9 + 1;
  } while (local_9 != 0x15);
  return;
}



// === FUN_007efff4 @ 007efff4 size:608 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007efff4(int param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined3 uVar6;
  uint extraout_EDX;
  int iVar5;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  int extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  int extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  float10 in_ST0;
  float10 fVar7;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  undefined1 local_1c [8];
  undefined8 local_14;
  byte local_b;
  byte local_a;
  byte local_9;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x4b8);
  *(undefined4 *)(iVar1 + 0xcf1) = *(undefined4 *)(param_1 + 0x424);
  *(undefined4 *)(iVar1 + 4) = DAT_007f0254;
  *(undefined4 *)(iVar1 + 8) = DAT_007f0258;
  *(undefined4 *)(iVar1 + 0xc) = DAT_007f025c;
  *(undefined4 *)(iVar1 + 0x10) = DAT_007f0260;
  *(undefined2 *)(iVar1 + 0x14) = DAT_007f0264;
  *(undefined4 *)(iVar1 + 0x4c) = _DAT_007f0268;
  *(undefined4 *)(iVar1 + 0x50) = s_Repetition__1__20__007f0269._3_4_;
  *(undefined4 *)(iVar1 + 0x54) = s_Repetition__1__20__007f0269._7_4_;
  *(undefined4 *)(iVar1 + 0x58) = s_Repetition__1__20__007f0269._11_4_;
  *(undefined2 *)(iVar1 + 0x5c) = s_Repetition__1__20__007f0269._15_2_;
  *(char *)(iVar1 + 0x5e) = s_Repetition__1__20__007f0269[0x11];
  *(undefined4 *)(iVar1 + 0x28) = s_Retention_007f027c._0_4_;
  *(undefined4 *)(iVar1 + 0x2c) = s_Retention_007f027c._4_4_;
  *(undefined2 *)(iVar1 + 0x30) = s_Retention_007f027c._8_2_;
  *(undefined1 *)(iVar1 + 0xcf0) = 1;
  local_a = 1;
  iVar4 = iVar1;
  local_9 = param_2;
  local_8 = param_1;
  do {
    local_b = 1;
    do {
      uVar6 = (undefined3)((uint)iVar4 >> 8);
      if (local_b == 1) {
        FUN_008adc74(*(undefined4 *)PTR_DAT_00baa39c,CONCAT31(uVar6,1),1,(short)local_1c);
        fVar7 = in_ST0;
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
      }
      else {
        FUN_008adc74(*(undefined4 *)PTR_DAT_00baa39c,CONCAT31(uVar6,local_9),local_b,(short)local_1c
                    );
        fVar7 = in_ST0;
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
      }
      in_ST5 = in_ST4;
      FUN_00407b58();
      local_14 = (double)(fVar7 * (float10)_DAT_007f0288);
      uVar3 = local_9 - 1;
      if (0x13 < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      lVar2 = (longlong)(int)(uVar3 + 1) * 0x32;
      iVar4 = (int)lVar2;
      if (iVar4 != lVar2) {
        iVar4 = thunk_FUN_004072dc();
      }
      iVar4 = *(int *)PTR_DAT_00baa39c + iVar4 * 8;
      uVar3 = local_b - 1;
      if (0x13 < uVar3) {
        iVar4 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX;
      }
      lVar2 = (longlong)(int)(uVar3 + 1) * 5;
      iVar5 = (int)lVar2;
      if (iVar5 != lVar2) {
        iVar4 = thunk_FUN_004072dc();
        iVar5 = extraout_EDX_00;
      }
      iVar4 = iVar4 + iVar5 * 4;
      uVar3 = local_a - 1;
      if (0x13 < uVar3) {
        iVar4 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_01;
      }
      if (200 < *(byte *)(iVar4 + uVar3 + 0x2748)) {
        uVar3 = local_9 - 1;
        if (0x13 < uVar3) {
          uVar3 = thunk_FUN_004072dc();
        }
        lVar2 = (longlong)(int)(uVar3 + 1) * 0x32;
        iVar4 = (int)lVar2;
        if (iVar4 != lVar2) {
          iVar4 = thunk_FUN_004072dc();
        }
        iVar4 = *(int *)PTR_DAT_00baa39c + iVar4 * 8;
        uVar3 = local_b - 1;
        if (0x13 < uVar3) {
          iVar4 = thunk_FUN_004072dc();
          uVar3 = extraout_EDX_02;
        }
        lVar2 = (longlong)(int)(uVar3 + 1) * 5;
        iVar5 = (int)lVar2;
        if (iVar5 != lVar2) {
          iVar4 = thunk_FUN_004072dc();
          iVar5 = extraout_EDX_03;
        }
        iVar4 = iVar4 + iVar5 * 4;
        uVar3 = local_a - 1;
        if (0x13 < uVar3) {
          iVar4 = thunk_FUN_004072dc();
          uVar3 = extraout_EDX_04;
        }
        fVar7 = (float10)*(byte *)(iVar4 + uVar3 + 0x808);
        uVar3 = local_9 - 1;
        if (0x13 < uVar3) {
          uVar3 = thunk_FUN_004072dc();
        }
        lVar2 = (longlong)(int)(uVar3 + 1) * 0x32;
        iVar4 = (int)lVar2;
        if (iVar4 != lVar2) {
          iVar4 = thunk_FUN_004072dc();
        }
        iVar4 = *(int *)PTR_DAT_00baa39c + iVar4 * 8;
        uVar3 = local_b - 1;
        if (0x13 < uVar3) {
          iVar4 = thunk_FUN_004072dc();
          uVar3 = extraout_EDX_05;
        }
        lVar2 = (longlong)(int)(uVar3 + 1) * 5;
        iVar5 = (int)lVar2;
        if (iVar5 != lVar2) {
          iVar4 = thunk_FUN_004072dc();
          iVar5 = extraout_EDX_06;
        }
        iVar4 = iVar4 + iVar5 * 4;
        uVar3 = local_a - 1;
        if (0x13 < uVar3) {
          iVar4 = thunk_FUN_004072dc();
          uVar3 = extraout_EDX_07;
        }
        local_14 = (double)((fVar7 / (float10)*(byte *)(iVar4 + uVar3 + 0x2748)) *
                           (float10)_DAT_007f0288);
      }
      uVar3 = local_a - 1;
      if (0x13 < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      lVar2 = (longlong)(int)(uVar3 + 1) * 0x14;
      iVar4 = (int)lVar2;
      if (iVar4 != lVar2) {
        iVar4 = thunk_FUN_004072dc();
      }
      iVar5 = iVar1 + iVar4 * 8;
      uVar3 = local_b - 1;
      if (0x13 < uVar3) {
        iVar5 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX_08;
      }
      iVar4 = uVar3 + 1;
      *(undefined4 *)(iVar5 + -0x38 + iVar4 * 8) = (undefined4)local_14;
      *(undefined4 *)(iVar5 + -0x34 + iVar4 * 8) = local_14._4_4_;
      local_b = local_b + 1;
    } while (local_b != 0x15);
    local_a = local_a + 1;
  } while (local_a != 0x15);
  return;
}



// === FUN_007f02c4 @ 007f02c4 size:146 ===

void FUN_007f02c4(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x3e4) + 0xb8))();
  (**(code **)(**(int **)(param_1 + 0x498) + 0xb8))();
  (**(code **)(**(int **)(param_1 + 0x3ec) + 0xb8))();
  (**(code **)(**(int **)(param_1 + 0x400) + 0xb8))();
  (**(code **)(**(int **)(param_1 + 0x410) + 0xb8))();
  (**(code **)(**(int **)(param_1 + 0x430) + 0xb8))();
  (**(code **)(**(int **)(param_1 + 0x424) + 0xb8))();
  (**(code **)(**(int **)(param_1 + 0x434) + 0xb8))();
  return;
}



// === FUN_007f0448 @ 007f0448 size:403 ===

void FUN_007f0448(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  short local_26;
  int local_24;
  int local_20;
  int local_1c;
  short local_16;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  puStack_40 = &LAB_007f05db;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_8 = param_1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_2c,param_3,1);
  FUN_0040d79c(&local_2c,L"\\stats\\total.dat");
  local_c = FUN_00965380(PTR_LAB_009635dc,1,local_2c);
  uVar4 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_30);
  FUN_0040d79c(&local_30,L"\\stats\\itemtotal.dat");
  local_10 = FUN_00965380(PTR_LAB_009635dc,1,local_30);
  uVar3 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_34);
  FUN_0040d79c(&local_34,L"\\stats\\topic.dat");
  local_14 = FUN_00965380(PTR_LAB_009635dc,1,local_34,uVar3);
  uVar1 = *(uint *)(local_c + 5);
  if (0xffff < uVar1) {
    uVar1 = thunk_FUN_004072dc();
  }
  if ((short)uVar1 != 0) {
    local_16 = 1;
    local_26 = (short)uVar1;
    do {
      local_1c = FUN_0096405c(local_c,local_16);
      local_20 = FUN_0096405c(local_10,local_16);
      iVar2 = local_1c - local_20;
      if (SBORROW4(local_1c,local_20)) {
        iVar2 = thunk_FUN_004072dc();
      }
      local_24 = iVar2;
      if (iVar2 < 0) {
        local_24 = 0;
      }
      FUN_00964be8(local_14,local_16,local_24);
      local_16 = local_16 + 1;
      local_26 = local_26 + -1;
    } while (local_26 != 0);
  }
  FUN_0040a7a0(local_c);
  FUN_0040a7a0(local_10);
  FUN_0040a7a0(local_14);
  FUN_007f61b4(local_8,L"topic",L"Topics and tasks");
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_38);
  FUN_0040d79c(&local_38,L"\\stats\\topic.dat");
  FUN_004294f8(local_38);
  *in_FS_OFFSET = 1;
  FUN_0040c628(&local_38,4,uVar4,&LAB_007f05e2);
  return;
}



// === FUN_007f06c8 @ 007f06c8 size:386 ===

void FUN_007f06c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  short local_22;
  int local_20;
  int local_1c;
  short local_16;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_38 = &stack0xfffffffc;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  puStack_3c = &LAB_007f084a;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_8 = param_1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_28,param_3,1);
  FUN_0040d79c(&local_28,L"\\stats\\memorized.dat");
  local_c = FUN_00965380(PTR_LAB_009635dc,1,local_28);
  uVar3 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_2c);
  FUN_0040d79c(&local_2c,L"\\stats\\itemmemorized.dat");
  local_10 = FUN_00965380(PTR_LAB_009635dc,1,local_2c);
  uVar2 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_30);
  FUN_0040d79c(&local_30,L"\\stats\\topicmemorized.dat");
  local_14 = FUN_00965380(PTR_LAB_009635dc,1,local_30,uVar2);
  uVar1 = *(uint *)(local_c + 5);
  if (0xffff < uVar1) {
    uVar1 = thunk_FUN_004072dc();
  }
  if ((short)uVar1 != 0) {
    local_16 = 1;
    local_22 = (short)uVar1;
    do {
      local_1c = FUN_0096405c(local_c,local_16);
      local_20 = FUN_0096405c(local_10,local_16);
      if (SBORROW4(local_1c,local_20)) {
        thunk_FUN_004072dc();
      }
      FUN_00964be8(local_14,local_16);
      local_16 = local_16 + 1;
      local_22 = local_22 + -1;
    } while (local_22 != 0);
  }
  FUN_0040a7a0(local_c);
  FUN_0040a7a0(local_10);
  FUN_0040a7a0(local_14);
  FUN_007f61b4(local_8,L"topicmemorized",L"Memorized topics");
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_34);
  FUN_0040d79c(&local_34,L"\\stats\\topicmemorized.dat");
  FUN_004294f8(local_34);
  *in_FS_OFFSET = 1;
  FUN_0040c628(&local_34,4,uVar3,&LAB_007f0851);
  return;
}



// === FUN_007f096c @ 007f096c size:417 ===

void FUN_007f096c(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  short local_1e;
  int local_1c;
  int local_18;
  ushort local_12;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  puStack_34 = &LAB_007f0b0d;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  uVar4 = 1;
  local_8 = param_1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_24);
  FUN_0040d79c(&local_24,L"\\stats\\itemmemorized.dat");
  local_c = FUN_00965380(PTR_LAB_009635dc,1,local_24);
  uVar3 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_28);
  FUN_0040d79c(&local_28,L"\\stats\\new.dat");
  local_10 = FUN_00965380(PTR_LAB_009635dc,1,local_28,uVar3);
  FUN_00964be8(local_10,1,0);
  uVar1 = *(uint *)(local_c + 5);
  if (0xffff < uVar1) {
    uVar1 = thunk_FUN_004072dc();
  }
  if (1 < (ushort)uVar1) {
    iVar2 = CONCAT22((short)(uVar1 >> 0x10),(ushort)uVar1 - 2) + 1;
    local_1e = (short)iVar2;
    local_12 = 2;
    do {
      if (SBORROW4((uint)local_12,1)) {
        thunk_FUN_004072dc(iVar2,local_12 - 1);
      }
      local_18 = FUN_0096405c(local_c);
      local_1c = FUN_0096405c(local_c,local_12);
      if (local_18 == 0) {
        iVar2 = FUN_00964be8(local_10,local_12,0);
      }
      else {
        iVar2 = local_1c - local_18;
        if (SBORROW4(local_1c,local_18)) {
          iVar2 = thunk_FUN_004072dc();
        }
        if (iVar2 < 1) {
          iVar2 = FUN_00964be8(local_10,local_12,0);
        }
        else {
          if (SBORROW4(local_1c,local_18)) {
            thunk_FUN_004072dc();
          }
          iVar2 = FUN_00964be8(local_10,local_12);
        }
      }
      local_12 = local_12 + 1;
      local_1e = local_1e + -1;
    } while (local_1e != 0);
  }
  FUN_0040a7a0(local_c);
  FUN_0040a7a0(local_10);
  FUN_007f61b4(local_8,&DAT_007f0bc4,L"New memorized items");
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_2c);
  FUN_0040d79c(&local_2c,L"\\stats\\new.dat");
  FUN_004294f8(local_2c);
  *in_FS_OFFSET = 1;
  FUN_0040c628(&local_2c,3,uVar4,&LAB_007f0b14);
  return;
}



// === FUN_007f0bcc @ 007f0bcc size:533 ===

void FUN_007f0bcc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  short local_22;
  int local_20;
  int local_1c;
  ushort local_16;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  puStack_40 = &LAB_007f0de1;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_8 = param_1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_28,param_3,1);
  FUN_0040d79c(&local_28,L"\\stats\\memorized.dat");
  local_c = FUN_00965380(PTR_LAB_009635dc,1,local_28);
  uVar6 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_2c);
  FUN_0040d79c(&local_2c,L"\\stats\\itemmemorized.dat");
  local_10 = FUN_00965380(PTR_LAB_009635dc,1,local_2c);
  uVar5 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_30);
  FUN_0040d79c(&local_30,L"\\stats\\new.dat");
  local_14 = FUN_00965380(PTR_LAB_009635dc,1,local_30,uVar5);
  FUN_00964be8(local_14,1,0);
  uVar1 = *(uint *)(local_c + 5);
  if (0xffff < uVar1) {
    uVar1 = thunk_FUN_004072dc();
  }
  if (1 < (ushort)uVar1) {
    iVar2 = CONCAT22((short)(uVar1 >> 0x10),(ushort)uVar1 - 2) + 1;
    local_22 = (short)iVar2;
    local_16 = 2;
    do {
      if (SBORROW4((uint)local_16,1)) {
        thunk_FUN_004072dc(iVar2,local_16 - 1);
      }
      iVar2 = FUN_0096405c(local_c);
      if (SBORROW4((uint)local_16,1)) {
        thunk_FUN_004072dc(iVar2,local_16 - 1);
      }
      iVar3 = FUN_0096405c(local_10);
      if (SBORROW4(iVar2,iVar3)) {
        thunk_FUN_004072dc();
      }
      local_1c = iVar2 - iVar3;
      iVar2 = FUN_0096405c(local_c,local_16);
      iVar3 = FUN_0096405c(local_10,local_16);
      iVar4 = iVar2 - iVar3;
      if (SBORROW4(iVar2,iVar3)) {
        thunk_FUN_004072dc();
      }
      local_20 = iVar4;
      if (local_1c == 0) {
        iVar2 = FUN_00964be8(local_14,local_16,0);
      }
      else {
        iVar2 = iVar4 - local_1c;
        if (SBORROW4(iVar4,local_1c)) {
          iVar2 = thunk_FUN_004072dc();
        }
        if (iVar2 < 1) {
          iVar2 = FUN_00964be8(local_14,local_16,0);
        }
        else {
          if (SBORROW4(local_20,local_1c)) {
            thunk_FUN_004072dc();
          }
          iVar2 = FUN_00964be8(local_14,local_16);
        }
      }
      local_16 = local_16 + 1;
      local_22 = local_22 + -1;
    } while (local_22 != 0);
  }
  FUN_0040a7a0(local_c);
  FUN_0040a7a0(local_10);
  FUN_0040a7a0(local_14);
  FUN_007f61b4(local_8,&DAT_007f0ed8,L"New memorized topics");
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_34);
  FUN_0040d79c(&local_34,L"\\stats\\new.dat");
  FUN_004294f8(local_34);
  *in_FS_OFFSET = 1;
  FUN_0040c628(&local_34,4,uVar6,&LAB_007f0de8);
  return;
}



// === FUN_007f0ee0 @ 007f0ee0 size:403 ===

void FUN_007f0ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  short local_26;
  int local_24;
  int local_20;
  int local_1c;
  short local_16;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  puStack_40 = &LAB_007f1073;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_8 = param_1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_2c,param_3,1);
  FUN_0040d79c(&local_2c,L"\\stats\\outstanding.dat");
  local_c = FUN_00965380(PTR_LAB_009635dc,1,local_2c);
  uVar4 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_30);
  FUN_0040d79c(&local_30,L"\\stats\\itemoutstanding.dat");
  local_10 = FUN_00965380(PTR_LAB_009635dc,1,local_30);
  uVar3 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_34);
  FUN_0040d79c(&local_34,L"\\stats\\otopic.dat");
  local_14 = FUN_00965380(PTR_LAB_009635dc,1,local_34,uVar3);
  uVar1 = *(uint *)(local_c + 5);
  if (0xffff < uVar1) {
    uVar1 = thunk_FUN_004072dc();
  }
  if ((short)uVar1 != 0) {
    local_16 = 1;
    local_26 = (short)uVar1;
    do {
      local_20 = FUN_0096405c(local_c,local_16);
      local_24 = FUN_0096405c(local_10,local_16);
      iVar2 = local_20 - local_24;
      if (SBORROW4(local_20,local_24)) {
        iVar2 = thunk_FUN_004072dc();
      }
      local_1c = iVar2;
      if (iVar2 < 0) {
        local_1c = 0;
      }
      FUN_00964be8(local_14,local_16,local_1c);
      local_16 = local_16 + 1;
      local_26 = local_26 + -1;
    } while (local_26 != 0);
  }
  FUN_0040a7a0(local_c);
  FUN_0040a7a0(local_10);
  FUN_0040a7a0(local_14);
  FUN_007f61b4(local_8,L"otopic",L"Outstanding topics");
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_38);
  FUN_0040d79c(&local_38,L"\\stats\\otopic.dat");
  FUN_004294f8(local_38);
  *in_FS_OFFSET = 1;
  FUN_0040c628(&local_38,4,uVar4,&LAB_007f107a);
  return;
}



// === FUN_007f1388 @ 007f1388 size:461 ===

void FUN_007f1388(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  short local_26;
  int local_24;
  int local_20;
  int local_1c;
  short local_16;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_40 = &stack0xfffffffc;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  puStack_44 = &LAB_007f1555;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_8 = param_1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_2c,param_3,1);
  FUN_0040d79c(&local_2c,L"\\stats\\outstanding.dat");
  local_c = FUN_00965380(PTR_LAB_009635dc,1,local_2c);
  uVar4 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_30);
  FUN_0040d79c(&local_30,L"\\stats\\itemoutstanding.dat");
  local_10 = FUN_00965380(PTR_LAB_009635dc,1,local_30);
  uVar3 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_34);
  FUN_0040d79c(&local_34,L"\\stats\\topicload.dat");
  local_14 = FUN_00965380(PTR_LAB_009635dc,1,local_34,uVar3);
  uVar1 = *(uint *)(local_c + 5);
  if (0xffff < uVar1) {
    uVar1 = thunk_FUN_004072dc();
  }
  if ((short)uVar1 != 0) {
    local_16 = 1;
    local_26 = (short)uVar1;
    do {
      local_20 = FUN_0096405c(local_c,local_16);
      local_24 = FUN_0096405c(local_10,local_16);
      if ((local_20 < 1) || (local_20 <= local_24)) {
        local_1c = 0;
        iVar2 = local_1c;
      }
      else {
        iVar2 = local_20 - local_24;
        if (SBORROW4(local_20,local_24)) {
          iVar2 = thunk_FUN_004072dc();
        }
        local_38 = iVar2;
        iVar2 = FUN_00407bcc();
        if (iVar2 >> 0x1f != extraout_EDX) {
          iVar2 = thunk_FUN_004072dc();
        }
      }
      local_1c = iVar2;
      FUN_00964be8(local_14,local_16,local_1c);
      local_16 = local_16 + 1;
      local_26 = local_26 + -1;
    } while (local_26 != 0);
  }
  FUN_0040a7a0(local_c);
  FUN_0040a7a0(local_10);
  FUN_0040a7a0(local_14);
  FUN_007f61b4(local_8,L"topicload",L"Topic load");
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_3c);
  FUN_0040d79c(&local_3c,L"\\stats\\topicload.dat");
  FUN_004294f8(local_3c);
  *in_FS_OFFSET = 1;
  FUN_0040c5c8(&local_3c,1,uVar4,&LAB_007f155c);
  FUN_0040c628(&local_34,3);
  return;
}



// === FUN_007f28f0 @ 007f28f0 size:514 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f28f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  short local_2e;
  double local_2c;
  int local_20;
  int local_1c;
  short local_16;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_44 = &stack0xfffffffc;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  puStack_48 = &LAB_007f2af2;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  local_8 = param_1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_34,param_3,1);
  FUN_0040d79c(&local_34,L"\\stats\\itemoutstanding.dat");
  local_c = FUN_00965380(PTR_LAB_009635dc,1,local_34);
  uVar4 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_38);
  FUN_0040d79c(&local_38,L"\\stats\\itemreps.dat");
  local_10 = FUN_00965380(PTR_LAB_009635dc,1,local_38);
  uVar3 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_3c);
  FUN_0040d79c(&local_3c,L"\\stats\\item overload.dat");
  local_14 = FUN_00965380(PTR_LAB_009635dc,1,local_3c,uVar3);
  FUN_00964be8(local_14,1,0);
  uVar1 = *(uint *)(local_10 + 5);
  if (0xffff < uVar1) {
    uVar1 = thunk_FUN_004072dc();
  }
  if (1 < (ushort)uVar1) {
    local_2e = (ushort)uVar1 - 1;
    local_16 = 2;
    do {
      local_1c = FUN_0096405c(local_c,local_16);
      local_20 = FUN_0096405c(local_10,local_16);
      if (local_20 == 0) {
        FUN_00964be8(local_14,local_16,0);
      }
      else if (local_1c == 0) {
        FUN_00964be8(local_14,local_16,0);
      }
      else {
        local_2c = (double)local_20 / (double)local_1c;
        if (1.0 < local_2c) {
          local_2c = 1.0;
        }
        local_2c = local_2c * (double)_DAT_007f2bb8 * (double)_DAT_007f2bbc;
        iVar2 = FUN_00407bcc();
        if (iVar2 >> 0x1f != extraout_EDX) {
          iVar2 = thunk_FUN_004072dc();
        }
        FUN_00964be8(local_14,local_16,iVar2);
      }
      local_16 = local_16 + 1;
      local_2e = local_2e + -1;
    } while (local_2e != 0);
  }
  FUN_0040a7a0(local_14);
  FUN_0040a7a0(local_c);
  FUN_0040a7a0(local_10);
  FUN_007f61b4(local_8,L"item overload",0);
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_40);
  FUN_0040d79c(&local_40,L"\\stats\\item overload.dat");
  FUN_004294f8(local_40);
  *in_FS_OFFSET = 1000;
  FUN_0040c628(&local_40,4,uVar4,&LAB_007f2af9);
  return;
}



// === FUN_007f2be8 @ 007f2be8 size:604 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f2be8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  short local_36;
  double local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  short local_1a;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_50 = &stack0xfffffffc;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  puStack_54 = &LAB_007f2e44;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  local_8 = param_1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_3c,param_3,1);
  FUN_0040d79c(&local_3c,L"\\stats\\outstanding.dat");
  local_c = FUN_00965380(PTR_LAB_009635dc,1,local_3c);
  uVar4 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_40);
  FUN_0040d79c(&local_40,L"\\stats\\itemoutstanding.dat");
  local_10 = FUN_00965380(PTR_LAB_009635dc,1,local_40,uVar4);
  uVar3 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_44);
  FUN_0040d79c(&local_44,L"\\stats\\topicreps.dat");
  local_14 = FUN_00965380(PTR_LAB_009635dc,1,local_44);
  uVar4 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_48);
  FUN_0040d79c(&local_48,L"\\stats\\topic overload.dat");
  local_18 = FUN_00965380(PTR_LAB_009635dc,1,local_48,uVar4);
  FUN_00964be8(local_18,1,0);
  uVar1 = *(uint *)(local_14 + 5);
  if (0xffff < uVar1) {
    uVar1 = thunk_FUN_004072dc();
  }
  if (1 < (ushort)uVar1) {
    local_36 = (ushort)uVar1 - 1;
    local_1a = 2;
    do {
      local_20 = FUN_0096405c(local_c,local_1a);
      local_24 = FUN_0096405c(local_10,local_1a);
      local_28 = FUN_0096405c(local_14,local_1a);
      iVar2 = local_20 - local_24;
      if (SBORROW4(local_20,local_24)) {
        iVar2 = thunk_FUN_004072dc();
      }
      local_2c = iVar2;
      if (local_28 == 0) {
        FUN_00964be8(local_18,local_1a,0);
      }
      else if (iVar2 == 0) {
        FUN_00964be8(local_18,local_1a,0);
      }
      else {
        local_34 = (double)local_28 / (double)iVar2;
        if (1.0 < local_34) {
          local_34 = 1.0;
        }
        local_34 = local_34 * (double)_DAT_007f2f48 * (double)_DAT_007f2f4c;
        iVar2 = FUN_00407bcc();
        if (iVar2 >> 0x1f != extraout_EDX) {
          iVar2 = thunk_FUN_004072dc();
        }
        FUN_00964be8(local_18,local_1a,iVar2);
      }
      local_1a = local_1a + 1;
      local_36 = local_36 + -1;
    } while (local_36 != 0);
  }
  FUN_0040a7a0(local_18);
  FUN_0040a7a0(local_c);
  FUN_0040a7a0(local_10);
  FUN_0040a7a0(local_14);
  FUN_007f61b4(local_8,L"topic overload",0);
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_4c);
  FUN_0040d79c(&local_4c,L"\\stats\\topic overload.dat");
  FUN_004294f8(local_4c);
  *in_FS_OFFSET = 1000;
  FUN_0040c628(&local_4c,5,uVar3,&LAB_007f2e4b);
  return;
}



// === FUN_007f2f7c @ 007f2f7c size:604 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f2f7c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  short local_36;
  double local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  short local_1a;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_50 = &stack0xfffffffc;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  puStack_54 = &LAB_007f31d8;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  local_8 = param_1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_3c,param_3,1);
  FUN_0040d79c(&local_3c,L"\\stats\\outstanding.dat");
  local_c = FUN_00965380(PTR_LAB_009635dc,1,local_3c);
  uVar4 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_40);
  FUN_0040d79c(&local_40,L"\\stats\\itemreps.dat");
  local_10 = FUN_00965380(PTR_LAB_009635dc,1,local_40,uVar4);
  uVar3 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_44);
  FUN_0040d79c(&local_44,L"\\stats\\topicreps.dat");
  local_14 = FUN_00965380(PTR_LAB_009635dc,1,local_44);
  uVar4 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_48);
  FUN_0040d79c(&local_48,L"\\stats\\element overload.dat");
  local_18 = FUN_00965380(PTR_LAB_009635dc,1,local_48,uVar4);
  FUN_00964be8(local_18,1,0);
  uVar1 = *(uint *)(local_c + 5);
  if (0xffff < uVar1) {
    uVar1 = thunk_FUN_004072dc();
  }
  if (1 < (ushort)uVar1) {
    local_36 = (ushort)uVar1 - 1;
    local_1a = 2;
    do {
      local_20 = FUN_0096405c(local_c,local_1a);
      local_24 = FUN_0096405c(local_10,local_1a);
      local_28 = FUN_0096405c(local_14,local_1a);
      iVar2 = local_24 + local_28;
      if (SCARRY4(local_24,local_28)) {
        iVar2 = thunk_FUN_004072dc();
      }
      local_2c = iVar2;
      if (iVar2 == 0) {
        FUN_00964be8(local_18,local_1a,0);
      }
      else if (local_20 == 0) {
        FUN_00964be8(local_18,local_1a,0);
      }
      else {
        local_34 = (double)iVar2 / (double)local_20;
        if (1.0 < local_34) {
          local_34 = 1.0;
        }
        local_34 = local_34 * (double)_DAT_007f32d0 * (double)_DAT_007f32d4;
        iVar2 = FUN_00407bcc();
        if (iVar2 >> 0x1f != extraout_EDX) {
          iVar2 = thunk_FUN_004072dc();
        }
        FUN_00964be8(local_18,local_1a,iVar2);
      }
      local_1a = local_1a + 1;
      local_36 = local_36 + -1;
    } while (local_36 != 0);
  }
  FUN_0040a7a0(local_18);
  FUN_0040a7a0(local_c);
  FUN_0040a7a0(local_10);
  FUN_0040a7a0(local_14);
  FUN_007f61b4(local_8,L"element overload",0);
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_4c);
  FUN_0040d79c(&local_4c,L"\\stats\\element overload.dat");
  FUN_004294f8(local_4c);
  *in_FS_OFFSET = 1000;
  FUN_0040c628(&local_4c,5,uVar3,&LAB_007f31df);
  return;
}



// === FUN_007f4180 @ 007f4180 size:132 ===

void FUN_007f4180(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_20 = &LAB_007f4204;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  FUN_004282b0(*(undefined4 *)PTR_DAT_00baae1c,&local_14);
  FUN_0040d7f4(&local_c,L"Tasklist",local_14);
  FUN_00936c04(*(undefined4 *)PTR_DAT_00ba9c04,&local_18);
  FUN_0040d7f4(&local_10,L"Tasklist: ",local_18);
  FUN_007f61b4(local_8,local_c,local_10);
  puVar1 = puStack_20;
  *in_FS_OFFSET = 1;
  puStack_20 = &LAB_007f420b;
  uStack_24 = 0x7f4203;
  FUN_0040c628(&local_18,4,puVar1);
  return;
}



// === FUN_007f4254 @ 007f4254 size:409 ===

void FUN_007f4254(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  short local_26;
  uint local_24;
  int local_20;
  int local_1c;
  short local_16;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  puStack_40 = &LAB_007f43ed;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_8 = param_1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_2c,param_3,1);
  FUN_0040d79c(&local_2c,L"\\stats\\reps.dat");
  local_c = FUN_00965380(PTR_LAB_009635dc,1,local_2c);
  uVar3 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_30);
  FUN_0040d79c(&local_30,L"\\stats\\itemreps.dat");
  local_10 = FUN_00965380(PTR_LAB_009635dc,1,local_30);
  uVar2 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_34);
  FUN_0040d79c(&local_34,L"\\stats\\topicreps.dat");
  local_14 = FUN_00965380(PTR_LAB_009635dc,1,local_34,uVar2);
  local_24 = *(uint *)(local_10 + 5);
  if ((int)local_24 < *(int *)(local_14 + 5)) {
    local_24 = *(uint *)(local_14 + 5);
  }
  uVar1 = local_24;
  if (0xffff < local_24) {
    uVar1 = thunk_FUN_004072dc();
  }
  if ((short)uVar1 != 0) {
    local_16 = 1;
    local_26 = (short)uVar1;
    do {
      local_1c = FUN_0096405c(local_10,local_16);
      local_20 = FUN_0096405c(local_14,local_16);
      if (SCARRY4(local_1c,local_20)) {
        thunk_FUN_004072dc();
      }
      FUN_00964be8(local_c,local_16);
      local_16 = local_16 + 1;
      local_26 = local_26 + -1;
    } while (local_26 != 0);
  }
  FUN_0040a7a0(local_c);
  FUN_0040a7a0(local_10);
  FUN_0040a7a0(local_14);
  FUN_007f61b4(local_8,L"reps",0);
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_38);
  FUN_0040d79c(&local_38,L"\\stats\\reps.dat");
  FUN_004294f8(local_38);
  *in_FS_OFFSET = 1;
  FUN_0040c628(&local_38,4,uVar3,&LAB_007f43f4);
  return;
}



// === FUN_007f5f68 @ 007f5f68 size:417 ===

void FUN_007f5f68(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  short local_1e;
  int local_1c;
  int local_18;
  ushort local_12;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  puStack_34 = &LAB_007f6109;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  uVar4 = 1;
  local_8 = param_1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_24);
  FUN_0040d79c(&local_24,L"\\stats\\memorized.dat");
  local_c = FUN_00965380(PTR_LAB_009635dc,1,local_24);
  uVar3 = 1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_28);
  FUN_0040d79c(&local_28,L"\\stats\\new.dat");
  local_10 = FUN_00965380(PTR_LAB_009635dc,1,local_28,uVar3);
  FUN_00964be8(local_10,1,0);
  uVar1 = *(uint *)(local_c + 5);
  if (0xffff < uVar1) {
    uVar1 = thunk_FUN_004072dc();
  }
  if (1 < (ushort)uVar1) {
    iVar2 = CONCAT22((short)(uVar1 >> 0x10),(ushort)uVar1 - 2) + 1;
    local_1e = (short)iVar2;
    local_12 = 2;
    do {
      if (SBORROW4((uint)local_12,1)) {
        thunk_FUN_004072dc(iVar2,local_12 - 1);
      }
      local_18 = FUN_0096405c(local_c);
      local_1c = FUN_0096405c(local_c,local_12);
      if (local_18 == 0) {
        iVar2 = FUN_00964be8(local_10,local_12,0);
      }
      else {
        iVar2 = local_1c - local_18;
        if (SBORROW4(local_1c,local_18)) {
          iVar2 = thunk_FUN_004072dc();
        }
        if (iVar2 < 1) {
          iVar2 = FUN_00964be8(local_10,local_12,0);
        }
        else {
          if (SBORROW4(local_1c,local_18)) {
            thunk_FUN_004072dc();
          }
          iVar2 = FUN_00964be8(local_10,local_12);
        }
      }
      local_12 = local_12 + 1;
      local_1e = local_1e + -1;
    } while (local_1e != 0);
  }
  FUN_0040a7a0(local_c);
  FUN_0040a7a0(local_10);
  FUN_007f61b4(local_8,&DAT_007f61ac,L"New memorized");
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_2c);
  FUN_0040d79c(&local_2c,L"\\stats\\new.dat");
  FUN_004294f8(local_2c);
  *in_FS_OFFSET = 1;
  FUN_0040c628(&local_2c,3,uVar4,&LAB_007f6110);
  return;
}



// === FUN_007f8234 @ 007f8234 size:121 ===

void FUN_007f8234(undefined4 param_1,byte param_2,byte param_3)

{
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  
  if ((param_2 < 0x15) && (param_3 < 0x15)) {
    FUN_007f82b0(param_1,param_2,param_3);
  }
  else {
    local_c = param_2;
    local_b = param_2;
    if (param_2 == 0x15) {
      local_b = 1;
      local_c = 0x14;
    }
    local_e = param_3;
    local_d = param_3;
    if (param_3 == 0x15) {
      local_d = 1;
      local_e = 0x14;
    }
    FUN_007f37a0(param_1,local_b,local_c,local_e,local_d);
  }
  return;
}



// === FUN_007fa2e8 @ 007fa2e8 size:495 ===

void FUN_007fa2e8(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined4 uVar5;
  int extraout_EDX;
  int iVar6;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  float10 fVar8;
  undefined4 uStack_c0;
  undefined1 *puStack_bc;
  undefined1 *puStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined4 local_78;
  undefined1 local_74 [8];
  undefined2 uStack_6c;
  int local_60;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined1 local_9;
  int local_8;
  
  puStack_9c = &stack0xfffffffc;
  local_10 = 0;
  local_78 = 0;
  puStack_a0 = &LAB_007fa959;
  uStack_a4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_a4;
  local_60 = *(int *)(param_1 + 0x48c);
  uStack_a8 = 0x7fa33f;
  local_8 = param_1;
  FUN_00516918(*(undefined4 *)(*(int *)(local_60 + 0x1c8) + 0x48),0xffffff);
  uStack_a8 = *(undefined4 *)(local_60 + 0x58);
  uStack_ac = *(undefined4 *)(local_60 + 0x5c);
  iStack_b0 = 0x7fa35f;
  (**(code **)(**(int **)(local_60 + 0x1c8) + 0x7c))(*(int **)(local_60 + 0x1c8),0,0);
  iStack_b0 = 0x7fa370;
  iVar3 = FUN_00407bcc();
  local_1c = iVar3 + -1;
  iVar6 = extraout_EDX - (uint)(iVar3 == 0);
  if (SBORROW4(extraout_EDX,(uint)(iVar3 == 0))) {
    iStack_b0 = 0x7fa37d;
    local_1c = thunk_FUN_004072dc();
    iVar6 = extraout_EDX_00;
  }
  if (local_1c >> 0x1f != iVar6) {
    iStack_b0 = 0x7fa38b;
    local_1c = thunk_FUN_004072dc();
  }
  iStack_b0 = 0x7fa39f;
  iVar3 = FUN_00407bcc();
  local_20 = iVar3 + -1;
  iVar6 = extraout_EDX_01 - (uint)(iVar3 == 0);
  if (SBORROW4(extraout_EDX_01,(uint)(iVar3 == 0))) {
    iStack_b0 = 0x7fa3ac;
    local_20 = thunk_FUN_004072dc();
    iVar6 = extraout_EDX_02;
  }
  if (local_20 >> 0x1f != iVar6) {
    iStack_b0 = 0x7fa3ba;
    local_20 = thunk_FUN_004072dc();
  }
  iStack_b0 = 0x7fa3cd;
  uVar4 = FUN_00b26e1c(L"99.99",local_1c,local_20);
  iStack_b0 = 0x7fa3e0;
  FUN_00516118(*(undefined4 *)(*(int *)(local_60 + 0x1c8) + 0x40),uVar4);
  local_9 = 1;
  iStack_b0 = local_1c >> 0x1f;
  iStack_b4 = local_1c;
  uVar7 = 0;
  fVar8 = (float10)1;
  puStack_b8 = (undefined1 *)0x7fa400;
  FUN_00407bcc();
  puStack_b8 = (undefined1 *)0x7fa405;
  local_14 = FUN_0040e98c();
  iVar6 = extraout_EDX_03;
  if ((bool)uVar7) {
    iStack_b0 = 0x7fa40c;
    local_14 = thunk_FUN_004072dc();
    iVar6 = extraout_EDX_04;
  }
  if (local_14 >> 0x1f != iVar6) {
    iStack_b0 = 0x7fa41a;
    local_14 = thunk_FUN_004072dc();
  }
  local_18 = 0;
  iStack_b0 = 0x7fa438;
  FUN_00516918(*(undefined4 *)(*(int *)(local_60 + 0x1c8) + 0x48),0xff0000);
  iStack_b0 = local_14 + local_1c;
  if (SCARRY4(local_14,local_1c)) {
    iStack_b0 = 0x7fa445;
    iStack_b0 = thunk_FUN_004072dc();
  }
  iStack_b4 = local_18 + local_20;
  if (SCARRY4(local_18,local_20)) {
    iStack_b4 = 0x7fa453;
    iStack_b4 = thunk_FUN_004072dc();
  }
  puStack_b8 = (undefined1 *)0x7fa468;
  (**(code **)(**(int **)(local_60 + 0x1c8) + 0x7c))(*(int **)(local_60 + 0x1c8),local_14,local_18);
  puStack_b8 = (undefined1 *)0x7fa47e;
  FUN_00515ce4(*(undefined4 *)(*(int *)(local_60 + 0x1c8) + 0x40),0xffffff);
  puStack_bc = &LAB_007fa4d7;
  uStack_c0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_c0;
  puStack_b8 = &stack0xfffffffc;
  FUN_0070fba8(local_9);
  uStack_6c = (undefined2)((unkuint10)fVar8 >> 0x40);
  uVar5 = CONCAT22(extraout_var,uStack_6c);
  local_74._4_4_ = (undefined4)((unkuint10)fVar8 >> 0x20);
  uVar4 = local_74._4_4_;
  local_74._0_4_ = SUB104(fVar8,0);
  uVar2 = local_74._0_4_;
  _local_74 = fVar8;
  FUN_0042bc74(L" 0.##",PTR_DAT_00baa920,&local_78,uVar2,uVar4,uVar5);
  FUN_0040c9f0(&local_10,local_78);
  puVar1 = puStack_b8;
  *in_FS_OFFSET = uStack_c0;
  puStack_b8 = &DAT_007fa4de;
  puStack_bc = (undefined1 *)0x7fa4d6;
  FUN_0040c5c8(&local_78,uStack_c0,puVar1);
  return;
}



// === FUN_007faa3c @ 007faa3c size:475 ===

void FUN_007faa3c(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_EDX;
  int iVar4;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  float10 fVar6;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 local_44;
  int local_40;
  double local_34;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined1 local_9;
  int local_8;
  
  puStack_68 = &stack0xfffffffc;
  local_10 = 0;
  local_44 = 0;
  puStack_6c = &LAB_007fb14d;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  local_40 = *(int *)(param_1 + 0x48c);
  uStack_74 = 0x7faa84;
  local_8 = param_1;
  FUN_00516918(*(undefined4 *)(*(int *)(local_40 + 0x1c8) + 0x48),0xffffff);
  uStack_74 = *(undefined4 *)(local_40 + 0x58);
  uStack_78 = *(undefined4 *)(local_40 + 0x5c);
  iStack_7c = 0x7faaa4;
  (**(code **)(**(int **)(local_40 + 0x1c8) + 0x7c))(*(int **)(local_40 + 0x1c8),0,0);
  iStack_7c = 0x7faab5;
  iVar2 = FUN_00407bcc();
  local_1c = iVar2 + -1;
  iVar4 = extraout_EDX - (uint)(iVar2 == 0);
  if (SBORROW4(extraout_EDX,(uint)(iVar2 == 0))) {
    iStack_7c = 0x7faac2;
    local_1c = thunk_FUN_004072dc();
    iVar4 = extraout_EDX_00;
  }
  if (local_1c >> 0x1f != iVar4) {
    iStack_7c = 0x7faad0;
    local_1c = thunk_FUN_004072dc();
  }
  iStack_7c = 0x7faae4;
  iVar2 = FUN_00407bcc();
  local_20 = iVar2 + -1;
  iVar4 = extraout_EDX_01 - (uint)(iVar2 == 0);
  if (SBORROW4(extraout_EDX_01,(uint)(iVar2 == 0))) {
    iStack_7c = 0x7faaf1;
    local_20 = thunk_FUN_004072dc();
    iVar4 = extraout_EDX_02;
  }
  if (local_20 >> 0x1f != iVar4) {
    iStack_7c = 0x7faaff;
    local_20 = thunk_FUN_004072dc();
  }
  iStack_7c = 0x7fab12;
  uVar3 = FUN_00b26e1c(L"99.99",local_1c,local_20);
  iStack_7c = 0x7fab25;
  FUN_00516118(*(undefined4 *)(*(int *)(local_40 + 0x1c8) + 0x40),uVar3);
  local_9 = 1;
  iStack_7c = local_1c >> 0x1f;
  iStack_80 = local_1c;
  uVar5 = 0;
  fVar6 = (float10)1;
  puStack_84 = (undefined1 *)0x7fab3f;
  FUN_00407bcc();
  puStack_84 = (undefined1 *)0x7fab44;
  local_14 = FUN_0040e98c();
  iVar4 = extraout_EDX_03;
  if ((bool)uVar5) {
    iStack_7c = 0x7fab4b;
    local_14 = thunk_FUN_004072dc();
    iVar4 = extraout_EDX_04;
  }
  if (local_14 >> 0x1f != iVar4) {
    iStack_7c = 0x7fab59;
    local_14 = thunk_FUN_004072dc();
  }
  local_18 = 0;
  iStack_7c = 0x7fab77;
  FUN_00516918(*(undefined4 *)(*(int *)(local_40 + 0x1c8) + 0x48),0xff0000);
  iStack_7c = local_14 + local_1c;
  if (SCARRY4(local_14,local_1c)) {
    iStack_7c = 0x7fab84;
    iStack_7c = thunk_FUN_004072dc();
  }
  iStack_80 = local_18 + local_20;
  if (SCARRY4(local_18,local_20)) {
    iStack_80 = 0x7fab92;
    iStack_80 = thunk_FUN_004072dc();
  }
  puStack_84 = (undefined1 *)0x7faba7;
  (**(code **)(**(int **)(local_40 + 0x1c8) + 0x7c))(*(int **)(local_40 + 0x1c8),local_14,local_18);
  puStack_84 = (undefined1 *)0x7fabbd;
  FUN_00515ce4(*(undefined4 *)(*(int *)(local_40 + 0x1c8) + 0x40),0xffffff);
  puStack_84 = (undefined1 *)0x7fabc7;
  FUN_008b0620(local_9,1);
  local_34 = (double)fVar6;
  puStack_88 = &LAB_007fac17;
  uStack_8c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8c;
  puStack_84 = &stack0xfffffffc;
  FUN_0042bc74(L" 0.##",PTR_DAT_00baa920,&local_44,SUB108((float10)local_34,0),
               (short)((unkuint10)(float10)local_34 >> 0x40));
  FUN_0040c9f0(&local_10,local_44);
  puVar1 = puStack_84;
  *in_FS_OFFSET = uStack_8c;
  puStack_84 = &DAT_007fac1e;
  puStack_88 = (undefined1 *)0x7fac16;
  FUN_0040c5c8(&local_44,uStack_8c,puVar1);
  return;
}



// === FUN_007fb1f4 @ 007fb1f4 size:489 ===

void FUN_007fb1f4(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined4 uVar5;
  int extraout_EDX;
  int iVar6;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  float10 fVar8;
  undefined4 uStack_bc;
  undefined1 *puStack_b8;
  undefined1 *puStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  undefined4 local_78;
  undefined1 local_74 [8];
  undefined2 uStack_6c;
  int local_60;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined1 local_9;
  int local_8;
  
  puStack_98 = &stack0xfffffffc;
  local_10 = 0;
  local_78 = 0;
  puStack_9c = &LAB_007fb7fa;
  uStack_a0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_a0;
  local_60 = *(int *)(param_1 + 0x48c);
  uStack_a4 = 0x7fb245;
  local_8 = param_1;
  FUN_00516918(*(undefined4 *)(*(int *)(local_60 + 0x1c8) + 0x48),0xffffff);
  uStack_a4 = *(undefined4 *)(local_60 + 0x58);
  uStack_a8 = *(undefined4 *)(local_60 + 0x5c);
  iStack_ac = 0x7fb265;
  (**(code **)(**(int **)(local_60 + 0x1c8) + 0x7c))(*(int **)(local_60 + 0x1c8),0,0);
  iStack_ac = 0x7fb276;
  iVar3 = FUN_00407bcc();
  local_1c = iVar3 + -1;
  iVar6 = extraout_EDX - (uint)(iVar3 == 0);
  if (SBORROW4(extraout_EDX,(uint)(iVar3 == 0))) {
    iStack_ac = 0x7fb283;
    local_1c = thunk_FUN_004072dc();
    iVar6 = extraout_EDX_00;
  }
  if (local_1c >> 0x1f != iVar6) {
    iStack_ac = 0x7fb291;
    local_1c = thunk_FUN_004072dc();
  }
  iStack_ac = 0x7fb2a5;
  iVar3 = FUN_00407bcc();
  local_20 = iVar3 + -1;
  iVar6 = extraout_EDX_01 - (uint)(iVar3 == 0);
  if (SBORROW4(extraout_EDX_01,(uint)(iVar3 == 0))) {
    iStack_ac = 0x7fb2b2;
    local_20 = thunk_FUN_004072dc();
    iVar6 = extraout_EDX_02;
  }
  if (local_20 >> 0x1f != iVar6) {
    iStack_ac = 0x7fb2c0;
    local_20 = thunk_FUN_004072dc();
  }
  iStack_ac = 0x7fb2d3;
  uVar4 = FUN_00b26e1c(L"99.99",local_1c,local_20);
  iStack_ac = 0x7fb2e6;
  FUN_00516118(*(undefined4 *)(*(int *)(local_60 + 0x1c8) + 0x40),uVar4);
  local_9 = 1;
  iStack_ac = local_1c >> 0x1f;
  iStack_b0 = local_1c;
  uVar7 = 0;
  fVar8 = (float10)1;
  puStack_b4 = (undefined1 *)0x7fb306;
  FUN_00407bcc();
  puStack_b4 = (undefined1 *)0x7fb30b;
  local_14 = FUN_0040e98c();
  iVar6 = extraout_EDX_03;
  if ((bool)uVar7) {
    iStack_ac = 0x7fb312;
    local_14 = thunk_FUN_004072dc();
    iVar6 = extraout_EDX_04;
  }
  if (local_14 >> 0x1f != iVar6) {
    iStack_ac = 0x7fb320;
    local_14 = thunk_FUN_004072dc();
  }
  local_18 = 0;
  iStack_ac = 0x7fb33e;
  FUN_00516918(*(undefined4 *)(*(int *)(local_60 + 0x1c8) + 0x48),0xff0000);
  iStack_ac = local_14 + local_1c;
  if (SCARRY4(local_14,local_1c)) {
    iStack_ac = 0x7fb34b;
    iStack_ac = thunk_FUN_004072dc();
  }
  iStack_b0 = local_18 + local_20;
  if (SCARRY4(local_18,local_20)) {
    iStack_b0 = 0x7fb359;
    iStack_b0 = thunk_FUN_004072dc();
  }
  puStack_b4 = (undefined1 *)0x7fb36e;
  (**(code **)(**(int **)(local_60 + 0x1c8) + 0x7c))(*(int **)(local_60 + 0x1c8),local_14,local_18);
  puStack_b4 = (undefined1 *)0x7fb384;
  FUN_00515ce4(*(undefined4 *)(*(int *)(local_60 + 0x1c8) + 0x40),0xffffff);
  puStack_b8 = &LAB_007fb3dd;
  uStack_bc = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_bc;
  puStack_b4 = &stack0xfffffffc;
  FUN_0070fba8(local_9);
  uStack_6c = (undefined2)((unkuint10)fVar8 >> 0x40);
  uVar5 = CONCAT22(extraout_var,uStack_6c);
  local_74._4_4_ = (undefined4)((unkuint10)fVar8 >> 0x20);
  uVar4 = local_74._4_4_;
  local_74._0_4_ = SUB104(fVar8,0);
  uVar2 = local_74._0_4_;
  _local_74 = fVar8;
  FUN_0042bc74(L" 0.##",PTR_DAT_00baa920,&local_78,uVar2,uVar4,uVar5);
  FUN_0040c9f0(&local_10,local_78);
  puVar1 = puStack_b4;
  *in_FS_OFFSET = uStack_bc;
  puStack_b4 = &DAT_007fb3e4;
  puStack_b8 = (undefined1 *)0x7fb3dc;
  FUN_0040c5c8(&local_78,uStack_bc,puVar1);
  return;
}



// === FUN_007fb8b4 @ 007fb8b4 size:481 ===

void FUN_007fb8b4(int param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_EDX;
  int iVar4;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  float10 fVar6;
  undefined4 uStack_17c;
  undefined1 *puStack_178;
  undefined1 *puStack_174;
  int iStack_170;
  int iStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined1 *puStack_15c;
  undefined1 *puStack_158;
  undefined4 local_3c;
  int local_38;
  double local_2c;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined1 local_a;
  undefined1 local_9;
  int local_8;
  
  puStack_158 = &stack0xfffffffc;
  local_10 = 0;
  local_3c = 0;
  puStack_15c = &LAB_007fc031;
  uStack_160 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_160;
  local_38 = *(int *)(param_1 + 0x48c);
  uStack_164 = 0x7fb902;
  local_9 = param_2;
  local_8 = param_1;
  FUN_00516918(*(undefined4 *)(*(int *)(local_38 + 0x1c8) + 0x48),0xffffff);
  uStack_164 = *(undefined4 *)(local_38 + 0x58);
  uStack_168 = *(undefined4 *)(local_38 + 0x5c);
  iStack_16c = 0x7fb922;
  (**(code **)(**(int **)(local_38 + 0x1c8) + 0x7c))(*(int **)(local_38 + 0x1c8),0,0);
  iStack_16c = 0x7fb933;
  iVar2 = FUN_00407bcc();
  local_1c = iVar2 + -1;
  iVar4 = extraout_EDX - (uint)(iVar2 == 0);
  if (SBORROW4(extraout_EDX,(uint)(iVar2 == 0))) {
    iStack_16c = 0x7fb940;
    local_1c = thunk_FUN_004072dc();
    iVar4 = extraout_EDX_00;
  }
  if (local_1c >> 0x1f != iVar4) {
    iStack_16c = 0x7fb94e;
    local_1c = thunk_FUN_004072dc();
  }
  iStack_16c = 0x7fb962;
  iVar2 = FUN_00407bcc();
  local_20 = iVar2 + -1;
  iVar4 = extraout_EDX_01 - (uint)(iVar2 == 0);
  if (SBORROW4(extraout_EDX_01,(uint)(iVar2 == 0))) {
    iStack_16c = 0x7fb96f;
    local_20 = thunk_FUN_004072dc();
    iVar4 = extraout_EDX_02;
  }
  if (local_20 >> 0x1f != iVar4) {
    iStack_16c = 0x7fb97d;
    local_20 = thunk_FUN_004072dc();
  }
  iStack_16c = 0x7fb990;
  uVar3 = FUN_00b26e1c(L"99.99",local_1c,local_20);
  iStack_16c = 0x7fb9a3;
  FUN_00516118(*(undefined4 *)(*(int *)(local_38 + 0x1c8) + 0x40),uVar3);
  local_a = 1;
  iStack_16c = local_1c >> 0x1f;
  iStack_170 = local_1c;
  uVar5 = 0;
  fVar6 = (float10)1;
  puStack_174 = (undefined1 *)0x7fb9bd;
  FUN_00407bcc();
  puStack_174 = (undefined1 *)0x7fb9c2;
  local_14 = FUN_0040e98c();
  iVar4 = extraout_EDX_03;
  if ((bool)uVar5) {
    iStack_16c = 0x7fb9c9;
    local_14 = thunk_FUN_004072dc();
    iVar4 = extraout_EDX_04;
  }
  if (local_14 >> 0x1f != iVar4) {
    iStack_16c = 0x7fb9d7;
    local_14 = thunk_FUN_004072dc();
  }
  local_18 = 0;
  iStack_16c = 0x7fb9f5;
  FUN_00516918(*(undefined4 *)(*(int *)(local_38 + 0x1c8) + 0x48),0xff0000);
  iStack_16c = local_14 + local_1c;
  if (SCARRY4(local_14,local_1c)) {
    iStack_16c = 0x7fba02;
    iStack_16c = thunk_FUN_004072dc();
  }
  iStack_170 = local_18 + local_20;
  if (SCARRY4(local_18,local_20)) {
    iStack_170 = 0x7fba10;
    iStack_170 = thunk_FUN_004072dc();
  }
  puStack_174 = (undefined1 *)0x7fba25;
  (**(code **)(**(int **)(local_38 + 0x1c8) + 0x7c))(*(int **)(local_38 + 0x1c8),local_14,local_18);
  puStack_174 = (undefined1 *)0x7fba3b;
  FUN_00515ce4(*(undefined4 *)(*(int *)(local_38 + 0x1c8) + 0x40),0xffffff);
  puStack_174 = (undefined1 *)0x7fba45;
  FUN_008b0620(local_a,1);
  local_2c = (double)fVar6;
  puStack_178 = &LAB_007fba95;
  uStack_17c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_17c;
  puStack_174 = &stack0xfffffffc;
  FUN_0042bc74(L" 0.##",PTR_DAT_00baa920,&local_3c,SUB108((float10)local_2c,0),
               (short)((unkuint10)(float10)local_2c >> 0x40));
  FUN_0040c9f0(&local_10,local_3c);
  puVar1 = puStack_174;
  *in_FS_OFFSET = uStack_17c;
  puStack_174 = &DAT_007fba9c;
  puStack_178 = (undefined1 *)0x7fba94;
  FUN_0040c5c8(&local_3c,uStack_17c,puVar1);
  return;
}



// === FUN_007fc0fc @ 007fc0fc size:495 ===

void FUN_007fc0fc(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined4 uVar5;
  int extraout_EDX;
  int iVar6;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  float10 fVar8;
  undefined4 uStack_c0;
  undefined1 *puStack_bc;
  undefined1 *puStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined4 local_78;
  undefined1 local_74 [8];
  undefined2 uStack_6c;
  int local_60;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined1 local_9;
  int local_8;
  
  puStack_9c = &stack0xfffffffc;
  local_10 = 0;
  local_78 = 0;
  puStack_a0 = &LAB_007fc76d;
  uStack_a4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_a4;
  local_60 = *(int *)(param_1 + 0x48c);
  uStack_a8 = 0x7fc153;
  local_8 = param_1;
  FUN_00516918(*(undefined4 *)(*(int *)(local_60 + 0x1c8) + 0x48),0xffffff);
  uStack_a8 = *(undefined4 *)(local_60 + 0x58);
  uStack_ac = *(undefined4 *)(local_60 + 0x5c);
  iStack_b0 = 0x7fc173;
  (**(code **)(**(int **)(local_60 + 0x1c8) + 0x7c))(*(int **)(local_60 + 0x1c8),0,0);
  iStack_b0 = 0x7fc184;
  iVar3 = FUN_00407bcc();
  local_1c = iVar3 + -1;
  iVar6 = extraout_EDX - (uint)(iVar3 == 0);
  if (SBORROW4(extraout_EDX,(uint)(iVar3 == 0))) {
    iStack_b0 = 0x7fc191;
    local_1c = thunk_FUN_004072dc();
    iVar6 = extraout_EDX_00;
  }
  if (local_1c >> 0x1f != iVar6) {
    iStack_b0 = 0x7fc19f;
    local_1c = thunk_FUN_004072dc();
  }
  iStack_b0 = 0x7fc1b3;
  iVar3 = FUN_00407bcc();
  local_20 = iVar3 + -1;
  iVar6 = extraout_EDX_01 - (uint)(iVar3 == 0);
  if (SBORROW4(extraout_EDX_01,(uint)(iVar3 == 0))) {
    iStack_b0 = 0x7fc1c0;
    local_20 = thunk_FUN_004072dc();
    iVar6 = extraout_EDX_02;
  }
  if (local_20 >> 0x1f != iVar6) {
    iStack_b0 = 0x7fc1ce;
    local_20 = thunk_FUN_004072dc();
  }
  iStack_b0 = 0x7fc1e1;
  uVar4 = FUN_00b26e1c(L"99.99",local_1c,local_20);
  iStack_b0 = 0x7fc1f4;
  FUN_00516118(*(undefined4 *)(*(int *)(local_60 + 0x1c8) + 0x40),uVar4);
  local_9 = 1;
  iStack_b0 = local_1c >> 0x1f;
  iStack_b4 = local_1c;
  uVar7 = 0;
  fVar8 = (float10)1;
  puStack_b8 = (undefined1 *)0x7fc214;
  FUN_00407bcc();
  puStack_b8 = (undefined1 *)0x7fc219;
  local_14 = FUN_0040e98c();
  iVar6 = extraout_EDX_03;
  if ((bool)uVar7) {
    iStack_b0 = 0x7fc220;
    local_14 = thunk_FUN_004072dc();
    iVar6 = extraout_EDX_04;
  }
  if (local_14 >> 0x1f != iVar6) {
    iStack_b0 = 0x7fc22e;
    local_14 = thunk_FUN_004072dc();
  }
  local_18 = 0;
  iStack_b0 = 0x7fc24c;
  FUN_00516918(*(undefined4 *)(*(int *)(local_60 + 0x1c8) + 0x48),0xff0000);
  iStack_b0 = local_14 + local_1c;
  if (SCARRY4(local_14,local_1c)) {
    iStack_b0 = 0x7fc259;
    iStack_b0 = thunk_FUN_004072dc();
  }
  iStack_b4 = local_18 + local_20;
  if (SCARRY4(local_18,local_20)) {
    iStack_b4 = 0x7fc267;
    iStack_b4 = thunk_FUN_004072dc();
  }
  puStack_b8 = (undefined1 *)0x7fc27c;
  (**(code **)(**(int **)(local_60 + 0x1c8) + 0x7c))(*(int **)(local_60 + 0x1c8),local_14,local_18);
  puStack_b8 = (undefined1 *)0x7fc292;
  FUN_00515ce4(*(undefined4 *)(*(int *)(local_60 + 0x1c8) + 0x40),0xffffff);
  puStack_bc = &LAB_007fc2eb;
  uStack_c0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_c0;
  puStack_b8 = &stack0xfffffffc;
  FUN_0070fba8(local_9);
  uStack_6c = (undefined2)((unkuint10)fVar8 >> 0x40);
  uVar5 = CONCAT22(extraout_var,uStack_6c);
  local_74._4_4_ = (undefined4)((unkuint10)fVar8 >> 0x20);
  uVar4 = local_74._4_4_;
  local_74._0_4_ = SUB104(fVar8,0);
  uVar2 = local_74._0_4_;
  _local_74 = fVar8;
  FUN_0042bc74(L" 0.##",PTR_DAT_00baa920,&local_78,uVar2,uVar4,uVar5);
  FUN_0040c9f0(&local_10,local_78);
  puVar1 = puStack_b8;
  *in_FS_OFFSET = uStack_c0;
  puStack_b8 = &DAT_007fc2f2;
  puStack_bc = (undefined1 *)0x7fc2ea;
  FUN_0040c5c8(&local_78,uStack_c0,puVar1);
  return;
}



// === FUN_007fc850 @ 007fc850 size:495 ===

void FUN_007fc850(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined4 uVar5;
  int extraout_EDX;
  int iVar6;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  float10 fVar8;
  undefined4 uStack_c0;
  undefined1 *puStack_bc;
  undefined1 *puStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined4 local_78;
  undefined1 local_74 [8];
  undefined2 uStack_6c;
  int local_60;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined1 local_9;
  int local_8;
  
  puStack_9c = &stack0xfffffffc;
  local_10 = 0;
  local_78 = 0;
  puStack_a0 = &LAB_007fced2;
  uStack_a4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_a4;
  local_60 = *(int *)(param_1 + 0x48c);
  uStack_a8 = 0x7fc8a7;
  local_8 = param_1;
  FUN_00516918(*(undefined4 *)(*(int *)(local_60 + 0x1c8) + 0x48),0xffffff);
  uStack_a8 = *(undefined4 *)(local_60 + 0x58);
  uStack_ac = *(undefined4 *)(local_60 + 0x5c);
  iStack_b0 = 0x7fc8c7;
  (**(code **)(**(int **)(local_60 + 0x1c8) + 0x7c))(*(int **)(local_60 + 0x1c8),0,0);
  iStack_b0 = 0x7fc8d8;
  iVar3 = FUN_00407bcc();
  local_1c = iVar3 + -1;
  iVar6 = extraout_EDX - (uint)(iVar3 == 0);
  if (SBORROW4(extraout_EDX,(uint)(iVar3 == 0))) {
    iStack_b0 = 0x7fc8e5;
    local_1c = thunk_FUN_004072dc();
    iVar6 = extraout_EDX_00;
  }
  if (local_1c >> 0x1f != iVar6) {
    iStack_b0 = 0x7fc8f3;
    local_1c = thunk_FUN_004072dc();
  }
  iStack_b0 = 0x7fc907;
  iVar3 = FUN_00407bcc();
  local_20 = iVar3 + -1;
  iVar6 = extraout_EDX_01 - (uint)(iVar3 == 0);
  if (SBORROW4(extraout_EDX_01,(uint)(iVar3 == 0))) {
    iStack_b0 = 0x7fc914;
    local_20 = thunk_FUN_004072dc();
    iVar6 = extraout_EDX_02;
  }
  if (local_20 >> 0x1f != iVar6) {
    iStack_b0 = 0x7fc922;
    local_20 = thunk_FUN_004072dc();
  }
  iStack_b0 = 0x7fc935;
  uVar4 = FUN_00b26e1c(L"99.99",local_1c,local_20);
  iStack_b0 = 0x7fc948;
  FUN_00516118(*(undefined4 *)(*(int *)(local_60 + 0x1c8) + 0x40),uVar4);
  local_9 = 1;
  iStack_b0 = local_1c >> 0x1f;
  iStack_b4 = local_1c;
  uVar7 = 0;
  fVar8 = (float10)1;
  puStack_b8 = (undefined1 *)0x7fc968;
  FUN_00407bcc();
  puStack_b8 = (undefined1 *)0x7fc96d;
  local_14 = FUN_0040e98c();
  iVar6 = extraout_EDX_03;
  if ((bool)uVar7) {
    iStack_b0 = 0x7fc974;
    local_14 = thunk_FUN_004072dc();
    iVar6 = extraout_EDX_04;
  }
  if (local_14 >> 0x1f != iVar6) {
    iStack_b0 = 0x7fc982;
    local_14 = thunk_FUN_004072dc();
  }
  local_18 = 0;
  iStack_b0 = 0x7fc9a0;
  FUN_00516918(*(undefined4 *)(*(int *)(local_60 + 0x1c8) + 0x48),0xff0000);
  iStack_b0 = local_14 + local_1c;
  if (SCARRY4(local_14,local_1c)) {
    iStack_b0 = 0x7fc9ad;
    iStack_b0 = thunk_FUN_004072dc();
  }
  iStack_b4 = local_18 + local_20;
  if (SCARRY4(local_18,local_20)) {
    iStack_b4 = 0x7fc9bb;
    iStack_b4 = thunk_FUN_004072dc();
  }
  puStack_b8 = (undefined1 *)0x7fc9d0;
  (**(code **)(**(int **)(local_60 + 0x1c8) + 0x7c))(*(int **)(local_60 + 0x1c8),local_14,local_18);
  puStack_b8 = (undefined1 *)0x7fc9e6;
  FUN_00515ce4(*(undefined4 *)(*(int *)(local_60 + 0x1c8) + 0x40),0xffffff);
  puStack_bc = &LAB_007fca3f;
  uStack_c0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_c0;
  puStack_b8 = &stack0xfffffffc;
  FUN_0070fba8(local_9);
  uStack_6c = (undefined2)((unkuint10)fVar8 >> 0x40);
  uVar5 = CONCAT22(extraout_var,uStack_6c);
  local_74._4_4_ = (undefined4)((unkuint10)fVar8 >> 0x20);
  uVar4 = local_74._4_4_;
  local_74._0_4_ = SUB104(fVar8,0);
  uVar2 = local_74._0_4_;
  _local_74 = fVar8;
  FUN_0042bc74(L" 0.##",PTR_DAT_00baa920,&local_78,uVar2,uVar4,uVar5);
  FUN_0040c9f0(&local_10,local_78);
  puVar1 = puStack_b8;
  *in_FS_OFFSET = uStack_c0;
  puStack_b8 = &DAT_007fca46;
  puStack_bc = (undefined1 *)0x7fca3e;
  FUN_0040c5c8(&local_78,uStack_c0,puVar1);
  return;
}



// === FUN_007ff008 @ 007ff008 size:612 ===

void FUN_007ff008(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined4 uVar5;
  int extraout_EDX;
  int iVar6;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  float10 fVar8;
  undefined4 uStack_36c;
  undefined1 *puStack_368;
  undefined1 *puStack_364;
  int iStack_360;
  int iStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined1 *puStack_34c;
  undefined1 *puStack_348;
  undefined4 local_98;
  undefined1 local_94 [8];
  undefined2 uStack_8c;
  int local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_9;
  int local_8;
  
  puStack_348 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_98 = 0;
  puStack_34c = &LAB_007ffeec;
  uStack_350 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_350;
  local_88 = *(int *)(param_1 + 0x48c);
  uStack_354 = 0x7ff07a;
  local_8 = param_1;
  FUN_00516918(*(undefined4 *)(*(int *)(local_88 + 0x1c8) + 0x48),0xffffff);
  uStack_354 = *(undefined4 *)(local_88 + 0x58);
  uStack_358 = *(undefined4 *)(local_88 + 0x5c);
  iStack_35c = 0x7ff0a3;
  (**(code **)(**(int **)(local_88 + 0x1c8) + 0x7c))(*(int **)(local_88 + 0x1c8),0,0);
  iStack_35c = 0x7ff0b7;
  iVar3 = FUN_00407bcc();
  local_24 = iVar3 + -1;
  iVar6 = extraout_EDX - (uint)(iVar3 == 0);
  if (SBORROW4(extraout_EDX,(uint)(iVar3 == 0))) {
    iStack_35c = 0x7ff0c4;
    local_24 = thunk_FUN_004072dc();
    iVar6 = extraout_EDX_00;
  }
  if (local_24 >> 0x1f != iVar6) {
    iStack_35c = 0x7ff0d2;
    local_24 = thunk_FUN_004072dc();
  }
  iStack_35c = 0x7ff0e9;
  iVar3 = FUN_00407bcc();
  local_28 = iVar3 + -1;
  iVar6 = extraout_EDX_01 - (uint)(iVar3 == 0);
  if (SBORROW4(extraout_EDX_01,(uint)(iVar3 == 0))) {
    iStack_35c = 0x7ff0f6;
    local_28 = thunk_FUN_004072dc();
    iVar6 = extraout_EDX_02;
  }
  if (local_28 >> 0x1f != iVar6) {
    iStack_35c = 0x7ff104;
    local_28 = thunk_FUN_004072dc();
  }
  iStack_35c = 0x7ff117;
  uVar4 = FUN_00b26e1c(L"999.99",local_24,local_28);
  iStack_35c = 0x7ff12d;
  FUN_00516118(*(undefined4 *)(*(int *)(local_88 + 0x1c8) + 0x40),uVar4);
  iStack_35c = 0x7ff146;
  FUN_00516918(*(undefined4 *)(*(int *)(local_88 + 0x1c8) + 0x48),0xff0000);
  iStack_35c = 0x7ff15f;
  FUN_00515ce4(*(undefined4 *)(*(int *)(local_88 + 0x1c8) + 0x40),0xffffff);
  iStack_35c = 0x7ff179;
  FUN_00516144(*(undefined4 *)(*(int *)(local_88 + 0x1c8) + 0x40),DAT_007fff18);
  local_74 = 0;
  local_70 = 0;
  local_7c = 0;
  local_78 = 0;
  local_9 = 1;
  iStack_35c = local_24 >> 0x1f;
  iStack_360 = local_24;
  uVar7 = 0;
  fVar8 = (float10)1;
  puStack_364 = (undefined1 *)0x7ff1a9;
  FUN_00407bcc();
  puStack_364 = (undefined1 *)0x7ff1ae;
  local_1c = FUN_0040e98c();
  iVar6 = extraout_EDX_03;
  if ((bool)uVar7) {
    iStack_35c = 0x7ff1b5;
    local_1c = thunk_FUN_004072dc();
    iVar6 = extraout_EDX_04;
  }
  if (local_1c >> 0x1f != iVar6) {
    iStack_35c = 0x7ff1c3;
    local_1c = thunk_FUN_004072dc();
  }
  local_20 = 0;
  iStack_35c = local_1c + local_24;
  if (SCARRY4(local_1c,local_24)) {
    iStack_35c = 0x7ff1d8;
    iStack_35c = thunk_FUN_004072dc();
  }
  iStack_360 = local_20 + local_28;
  if (SCARRY4(local_20,local_28)) {
    iStack_360 = 0x7ff1e6;
    iStack_360 = thunk_FUN_004072dc();
  }
  puStack_364 = (undefined1 *)0x7ff1fe;
  (**(code **)(**(int **)(local_88 + 0x1c8) + 0x7c))(*(int **)(local_88 + 0x1c8),local_1c,local_20);
  puStack_368 = &LAB_007ff26c;
  uStack_36c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_36c;
  puStack_364 = &stack0xfffffffc;
  FUN_0070fba8(local_9);
  uStack_8c = (undefined2)((unkuint10)fVar8 >> 0x40);
  uVar5 = CONCAT22(extraout_var,uStack_8c);
  local_94._4_4_ = (undefined4)((unkuint10)fVar8 >> 0x20);
  uVar4 = local_94._4_4_;
  local_94._0_4_ = SUB104(fVar8,0);
  uVar2 = local_94._0_4_;
  _local_94 = fVar8;
  FUN_0042bc74(L" 0.##",PTR_DAT_00baa920,&local_98,uVar2,uVar4,uVar5);
  FUN_0040c9f0(&local_14,local_98);
  puVar1 = puStack_364;
  *in_FS_OFFSET = uStack_36c;
  puStack_364 = &DAT_007ff273;
  puStack_368 = (undefined1 *)0x7ff26b;
  FUN_0040c5c8(&local_98,uStack_36c,puVar1);
  return;
}



// === FUN_008b0620 @ 008b0620 size:81 ===

void FUN_008b0620(undefined1 param_1,char param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  puStack_24 = &stack0xfffffffc;
  puStack_28 = &LAB_008b0667;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  if (param_2 == '\x01') {
    puStack_24 = &stack0xfffffffc;
    FUN_008b0520(param_1);
  }
  else {
    FUN_008b03a8(param_1);
  }
  *in_FS_OFFSET = uStack_2c;
  return;
}



// === FUN_008b0994 @ 008b0994 size:51 ===

undefined1 FUN_008b0994(char param_1)

{
  undefined1 local_6;
  
  if (param_1 == '\x01') {
    local_6 = FUN_008b06f0();
  }
  else {
    local_6 = FUN_008b0850();
  }
  return local_6;
}



// === FUN_008b1e48 @ 008b1e48 size:184 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b1e48(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  double local_1c;
  double local_14 [2];
  
  puStack_2c = &stack0xfffffffc;
  local_14[1] = 3.0;
  puStack_30 = &LAB_008b1ef4;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  FUN_008b3604(local_14,&local_1c);
  if (local_14[0] != 0.0) {
    FUN_00407b98();
  }
  *in_FS_OFFSET = uStack_34;
  return;
}



// === FUN_008b2608 @ 008b2608 size:574 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b2608(double *param_1,double *param_2)

{
  longlong lVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar13;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  byte local_1e;
  
  puStack_38 = &stack0xfffffffc;
  *(undefined4 *)param_1 = 0x8d4fdf3b;
  *(undefined4 *)((int)param_1 + 4) = 0xbf926e97;
  *(undefined4 *)param_2 = 0xae147ae1;
  *(undefined4 *)((int)param_2 + 4) = 0x3ff6e147;
  puStack_3c = &LAB_008b283f;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  iVar7 = FUN_00407180(0x3910);
  iVar8 = FUN_00407180(0x3910);
  iVar9 = FUN_00407180(0x3910);
  iVar10 = FUN_00407180(0x3910);
  local_1e = 1;
  do {
    iVar11 = local_1e + 2;
    fVar13 = in_ST0;
    fVar2 = in_ST1;
    fVar3 = in_ST2;
    fVar4 = in_ST3;
    fVar5 = in_ST4;
    fVar6 = in_ST5;
    if (SCARRY4((uint)local_1e,2)) {
      iVar11 = thunk_FUN_004072dc();
      fVar13 = in_ST0;
      fVar2 = in_ST1;
      fVar3 = in_ST2;
      fVar4 = in_ST3;
      fVar5 = in_ST4;
      fVar6 = in_ST5;
    }
    in_ST5 = in_ST6;
    in_ST4 = fVar6;
    in_ST3 = fVar5;
    in_ST2 = fVar4;
    in_ST1 = fVar3;
    in_ST0 = fVar2;
    *(double *)(iVar7 + (uint)local_1e * 8) = (double)iVar11;
    uVar12 = local_1e - 1;
    in_ST6 = in_ST5;
    if (0x1d < uVar12) {
      uVar12 = thunk_FUN_004072dc();
    }
    lVar1 = (longlong)(int)(uVar12 + 1) * 3;
    iVar11 = (int)lVar1;
    if (iVar11 != lVar1) {
      iVar11 = thunk_FUN_004072dc();
    }
    FUN_0040a340(DAT_00ca4544 + 0x48c6 + iVar11 * 2);
    *(double *)(iVar8 + (uint)local_1e * 8) = (double)fVar13;
    uVar12 = local_1e - 1;
    if (0x1d < uVar12) {
      uVar12 = thunk_FUN_004072dc();
    }
    *(double *)(iVar9 + (uint)local_1e * 8) =
         (double)*(ushort *)(DAT_00ca4544 + 0x497e + (uVar12 + 1) * 2);
    local_1e = local_1e + 1;
  } while (local_1e != 0x13);
  local_1e = 1;
  do {
    fVar13 = in_ST6;
    FUN_00407b98();
    *(double *)(iVar10 + (uint)local_1e * 8) = (double)in_ST0;
    if (*(double *)(iVar10 + (uint)local_1e * 8) < (double)_DAT_008b286c) {
      *(undefined4 *)(iVar10 + (uint)local_1e * 8) = 0;
      *(undefined4 *)(iVar10 + 4 + (uint)local_1e * 8) = 0xc0140000;
    }
    local_1e = local_1e + 1;
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = fVar13;
  } while (local_1e != 0x13);
  FUN_00690cb0(iVar7,iVar10,iVar9,param_2,param_1,0x12);
  FUN_0040719c(iVar10);
  FUN_0040719c(iVar7);
  FUN_0040719c(iVar8);
  FUN_0040719c(iVar9);
  if ((float10)*param_1 < _DAT_008b2870) {
    *(undefined4 *)param_1 = 0x9999999a;
    *(undefined4 *)((int)param_1 + 4) = 0xbfc99999;
  }
  if (_DAT_008b287c < (float10)*param_1) {
    *(undefined4 *)param_1 = 0x47ae147b;
    *(undefined4 *)((int)param_1 + 4) = 0xbf847ae1;
  }
  if ((float10)*param_2 < _DAT_008b2888) {
    *(undefined4 *)param_2 = 0x9999999a;
    *(undefined4 *)((int)param_2 + 4) = 0x3fe99999;
  }
  if (_DAT_008b2894 < (float10)*param_2) {
    *(undefined4 *)param_2 = 0xcccccccd;
    *(undefined4 *)((int)param_2 + 4) = 0x3ffccccc;
  }
  *in_FS_OFFSET = uStack_40;
  return;
}



// === FUN_008b3604 @ 008b3604 size:488 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b3604(double *param_1,undefined4 *param_2)

{
  longlong lVar1;
  float10 fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  float10 fVar9;
  float10 in_ST2;
  float10 in_ST3;
  float10 fVar10;
  float10 in_ST4;
  float10 in_ST5;
  float10 fVar11;
  float10 in_ST6;
  float10 in_ST7;
  float10 fVar12;
  float10 fVar13;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  byte local_1d;
  
  puStack_38 = &stack0xfffffffc;
  *(undefined4 *)param_1 = 0xd70a3d71;
  *(undefined4 *)((int)param_1 + 4) = 0xbfe570a3;
  *param_2 = 0x33333333;
  param_2[1] = 0x40033333;
  puStack_3c = &LAB_008b37e5;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  iVar3 = FUN_00407180(0x3910);
  iVar4 = FUN_00407180(0x3910);
  iVar5 = FUN_00407180(0x3910);
  iVar6 = FUN_00407180(0x3910);
  local_1d = 1;
  do {
    fVar11 = in_ST7;
    fVar10 = in_ST5;
    fVar9 = in_ST3;
    FUN_008b0620(local_1d,1);
    *(double *)(iVar3 + (uint)local_1d * 8) = (double)in_ST0;
    uVar7 = local_1d - 1;
    in_ST0 = in_ST2;
    fVar13 = in_ST4;
    fVar2 = in_ST6;
    fVar12 = fVar11;
    if (0x13 < uVar7) {
      uVar7 = thunk_FUN_004072dc();
      in_ST0 = in_ST2;
      fVar13 = in_ST4;
      fVar2 = in_ST6;
    }
    in_ST6 = fVar12;
    in_ST4 = fVar2;
    in_ST2 = fVar13;
    lVar1 = (longlong)(int)(uVar7 + 1) * 3;
    iVar8 = (int)lVar1;
    if (iVar8 != lVar1) {
      iVar8 = thunk_FUN_004072dc();
    }
    FUN_0040a340(DAT_00ca4544 + 0x4826 + iVar8 * 2);
    *(double *)(iVar4 + (uint)local_1d * 8) = (double)in_ST1;
    if (*(double *)(iVar4 + (uint)local_1d * 8) < 0.0) {
      *(undefined4 *)(iVar4 + (uint)local_1d * 8) = 0;
      *(undefined4 *)(iVar4 + 4 + (uint)local_1d * 8) = 0;
    }
    if ((double)_DAT_008b3814 < *(double *)(iVar4 + (uint)local_1d * 8)) {
      *(undefined4 *)(iVar4 + (uint)local_1d * 8) = 0;
      *(undefined4 *)(iVar4 + 4 + (uint)local_1d * 8) = 0x40140000;
    }
    uVar7 = local_1d - 1;
    if (0x13 < uVar7) {
      uVar7 = thunk_FUN_004072dc();
    }
    *(double *)(iVar5 + (uint)local_1d * 8) =
         (double)*(ushort *)(DAT_00ca4544 + 0x48a2 + (uVar7 + 1) * 2);
    local_1d = local_1d + 1;
    in_ST1 = fVar9;
    in_ST3 = fVar10;
    in_ST5 = fVar11;
    in_ST7 = in_ST6;
  } while (local_1d != 0x15);
  local_1d = 1;
  do {
    fVar13 = in_ST6;
    FUN_00407b98();
    *(double *)(iVar6 + (uint)local_1d * 8) = (double)in_ST0;
    local_1d = local_1d + 1;
    in_ST0 = fVar9;
    fVar9 = in_ST2;
    in_ST2 = fVar10;
    fVar10 = in_ST4;
    in_ST4 = fVar11;
    fVar11 = in_ST6;
    in_ST6 = fVar13;
  } while (local_1d != 0x15);
  FUN_00690cb0(iVar3,iVar6,iVar5,param_2,param_1,0x14);
  if (0.0 < *param_1) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
  }
  FUN_0040719c(iVar3);
  FUN_0040719c(iVar4);
  FUN_0040719c(iVar5);
  FUN_0040719c(iVar6);
  *in_FS_OFFSET = uStack_40;
  return;
}



// === FUN_008b3874 @ 008b3874 size:139 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b3874(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  puStack_24 = &stack0xfffffffc;
  puStack_28 = &LAB_008b38f3;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_00b18dac();
  *in_FS_OFFSET = uStack_2c;
  return;
}



// === FUN_008b3990 @ 008b3990 size:478 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b3990(undefined4 param_1,double *param_2,double *param_3)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  int iVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar8;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar9;
  double local_ab54 [1826];
  double local_7244 [1826];
  double local_3934;
  undefined4 local_392c;
  undefined4 local_3928;
  undefined4 uStack_1b80;
  double *pdStack_1b7c;
  double *pdStack_1b78;
  undefined4 uStack_1b74;
  undefined4 uStack_1b70;
  undefined1 *puStack_1b6c;
  undefined1 *puStack_1b68;
  byte local_12;
  
  puStack_1b68 = &stack0xfffffffc;
  iVar2 = 10;
  do {
    iVar6 = iVar2;
    iVar2 = iVar6 + -1;
  } while (iVar6 + -1 != 0);
  *(undefined4 *)param_2 = 0xd2f1a9fc;
  *(undefined4 *)((int)param_2 + 4) = 0x3f70624d;
  *(undefined4 *)param_3 = 0xf5c28f5c;
  *(undefined4 *)((int)param_3 + 4) = 0x3fef5c28;
  puStack_1b6c = &LAB_008b3b67;
  uStack_1b70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1b70;
  local_392c = 0x33333333;
  local_3928 = 0x3ff33333;
  local_7244[1] = 1.0;
  local_ab54[1] = 1.0;
  local_12 = 2;
  do {
    uStack_1b74 = 0x8b3a1e;
    fVar9 = in_ST6;
    FUN_008b0620(local_12,1);
    (&local_3934)[local_12] = (double)in_ST0;
    uVar7 = local_12 - 2;
    in_ST0 = in_ST1;
    fVar8 = in_ST2;
    fVar3 = in_ST3;
    fVar4 = in_ST4;
    fVar5 = in_ST5;
    if (0x12 < uVar7) {
      uStack_1b74 = 0x8b3a3d;
      uVar7 = thunk_FUN_004072dc();
      in_ST0 = in_ST1;
      fVar8 = in_ST2;
      fVar3 = in_ST3;
      fVar4 = in_ST4;
      fVar5 = in_ST5;
    }
    in_ST5 = in_ST6;
    in_ST4 = fVar5;
    in_ST3 = fVar4;
    in_ST2 = fVar3;
    in_ST1 = fVar8;
    local_7244[local_12] =
         (double)((float)*(ushort *)(iVar6 + 0x95c + (uVar7 + 2) * 2) / _DAT_008b3b94);
    uVar7 = local_12 - 2;
    if (0x12 < uVar7) {
      uStack_1b74 = 0x8b3a7c;
      uVar7 = thunk_FUN_004072dc();
    }
    local_ab54[local_12] = (double)*(ushort *)(iVar6 + 0x982 + (uVar7 + 2) * 2);
    local_12 = local_12 + 1;
    in_ST6 = fVar9;
  } while (local_12 != 0x15);
  uStack_1b74 = 0x14;
  uStack_1b80 = 0x8b3ad5;
  pdStack_1b7c = param_3;
  pdStack_1b78 = param_2;
  FUN_006911c4(&local_3934,local_7244,local_ab54);
  if ((*param_2 < (double)_DAT_008b3b98) || ((double)_DAT_008b3b9c < *param_2)) {
    fVar8 = _DAT_008b3ba0 * (float10)*param_2;
    dVar1 = *param_3;
    if ((double)_DAT_008b3b9c < *param_2) {
      *(undefined4 *)param_2 = 0;
      *(undefined4 *)((int)param_2 + 4) = 0x3fe00000;
    }
    if (*param_2 < (double)_DAT_008b3b98) {
      *(undefined4 *)param_2 = 0;
      *(undefined4 *)((int)param_2 + 4) = 0xbfe00000;
    }
    *param_3 = (double)((float10)(double)(fVar8 + (float10)dVar1) -
                       _DAT_008b3ba0 * (float10)*param_2);
  }
  *in_FS_OFFSET = uStack_1b70;
  return;
}



// === FUN_008b3d98 @ 008b3d98 size:101 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b3d98(void)

{
  return;
}



// === FUN_008b3fe8 @ 008b3fe8 size:296 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b3fe8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  
  puStack_40 = (undefined1 *)0x8b3ff9;
  FUN_00407bcc();
  puStack_44 = &LAB_008b4104;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_40 = &stack0xfffffffc;
  FUN_00407680();
  FUN_00407b98();
  FUN_00407680();
  *in_FS_OFFSET = uStack_48;
  return;
}



// === FUN_008b5bc8 @ 008b5bc8 size:773 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_008b5bc8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,char param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  bool bVar7;
  float10 in_ST0;
  float10 fVar8;
  float10 fVar9;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  undefined4 uStack_118;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  double local_ff;
  double local_f7;
  int local_ef;
  int local_eb;
  int local_e7;
  int local_e3;
  int local_df;
  int local_db;
  ushort local_d7;
  ushort local_d5;
  ushort local_d3;
  ushort local_d1;
  double local_cf;
  double local_c7;
  double local_bf;
  double local_b7;
  double local_af;
  double local_a7;
  byte local_9f;
  byte local_9e;
  byte local_9d;
  byte local_9c;
  byte local_9b;
  byte local_9a;
  char local_99;
  char local_98;
  char local_97;
  char local_96;
  char local_95;
  char local_94;
  char local_93;
  char local_92;
  char local_91;
  char local_90;
  char local_8f;
  byte local_8e;
  byte local_8d;
  ushort local_82;
  ushort local_80;
  ushort local_7e;
  short local_7c;
  undefined1 local_72 [6];
  undefined1 local_6c [14];
  undefined1 local_5e;
  int local_59;
  undefined1 local_27 [19];
  double local_14;
  undefined1 local_9;
  undefined4 local_8;
  
  puStack_110 = &stack0xfffffffc;
  pdVar5 = &local_ff;
  for (iVar4 = 0x1c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar5 = *param_3;
    param_3 = param_3 + 1;
    pdVar5 = (double *)((int)pdVar5 + 4);
  }
  *(undefined1 *)pdVar5 = *(undefined1 *)param_3;
  pbVar6 = &local_8e;
  for (iVar4 = 0x1d; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pbVar6 = *param_2;
    param_2 = param_2 + 1;
    pbVar6 = pbVar6 + 4;
  }
  *(undefined2 *)pbVar6 = *(undefined2 *)param_2;
  local_9 = 1;
  puStack_114 = &LAB_008b5ec1;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_4 != '\0') {
    uVar3 = local_80 + 1;
    puVar1 = &stack0xfffffffc;
    if (SCARRY4((uint)local_80,1)) {
      uVar3 = thunk_FUN_004072dc();
      puVar1 = puStack_110;
    }
    puStack_110 = puVar1;
    if (0xffff < uVar3) {
      uVar3 = thunk_FUN_004072dc();
    }
    local_80 = (ushort)uVar3;
    local_7e = 1;
    puVar1 = puStack_110;
  }
  puStack_110 = puVar1;
  FUN_008937bc(local_8);
  local_14 = (double)in_ST0;
  if (local_99 != '\0') {
    if (local_14 < local_f7) {
      local_9 = 0;
    }
    if (local_ff < local_14) {
      local_9 = 0;
    }
  }
  if (local_98 != '\0') {
    if ((int)(uint)local_82 < local_eb) {
      local_9 = 0;
    }
    if (local_ef < (int)(uint)local_82) {
      local_9 = 0;
    }
  }
  if (local_97 != '\0') {
    if ((int)(uint)local_80 < local_e3) {
      local_9 = 0;
    }
    if (local_e7 < (int)(uint)local_80) {
      local_9 = 0;
    }
  }
  if (local_95 != '\0') {
    if (local_7c < local_df) {
      local_9 = 0;
    }
    if (local_db < local_7c) {
      local_9 = 0;
    }
  }
  if (local_94 != '\0') {
    iVar4 = (int)local_7c + (uint)local_7e;
    if (SCARRY4((int)local_7c,(uint)local_7e)) {
      iVar4 = thunk_FUN_004072dc();
    }
    if (iVar4 < (int)(uint)local_d7) {
      local_9 = 0;
    }
    iVar4 = (int)local_7c + (uint)local_7e;
    if (SCARRY4((int)local_7c,(uint)local_7e)) {
      iVar4 = thunk_FUN_004072dc();
    }
    if ((int)(uint)local_d5 < iVar4) {
      local_9 = 0;
    }
  }
  if (local_96 != '\0') {
    if (local_7e < local_d1) {
      local_9 = 0;
    }
    if (local_d3 < local_7e) {
      local_9 = 0;
    }
  }
  fVar8 = in_ST2;
  if (local_8f != '\0') {
    fVar8 = in_ST4;
    in_ST4 = in_ST6;
    FUN_0040a340(local_27);
    if (in_ST1 < (float10)local_cf) {
      local_9 = 0;
    }
    in_ST1 = in_ST3;
    in_ST3 = in_ST5;
    FUN_0040a340(local_27);
    if ((float10)local_c7 < in_ST2) {
      local_9 = 0;
    }
  }
  fVar9 = fVar8;
  if (local_93 != '\0') {
    fVar9 = in_ST4;
    FUN_0040a340(local_72);
    if (_DAT_008b5ef4 + (float10)local_bf < in_ST1) {
      local_9 = 0;
    }
    in_ST1 = in_ST3;
    FUN_0040a340(local_72);
    if (fVar8 < (float10)local_b7 - _DAT_008b5ef4) {
      local_9 = 0;
    }
  }
  if (local_92 != '\0') {
    FUN_0040a340(local_6c);
    if ((float10)local_af < in_ST1) {
      local_9 = 0;
    }
    FUN_0040a340(local_6c);
    if (fVar9 < (float10)local_a7) {
      local_9 = 0;
    }
  }
  if (local_91 != '\0') {
    bVar2 = FUN_00951490(*(undefined4 *)PTR_DAT_00ba9c04,local_5e);
    if (bVar2 < local_9e) {
      local_9 = 0;
    }
    if (local_9f < bVar2) {
      local_9 = 0;
    }
  }
  if (local_90 != '\0') {
    if (local_59 < (int)(uint)local_9c) {
      local_9 = 0;
    }
    if ((int)(uint)local_9d < local_59) {
      local_9 = 0;
    }
  }
  bVar7 = local_8e < 7;
  if (local_8e < 8) {
    bVar7 = (local_9b >> (local_8e & 0x1f) & 1) != 0;
  }
  if (!bVar7) {
    local_9 = 0;
  }
  bVar7 = local_8d < 7;
  if (local_8d < 8) {
    bVar7 = (local_9a >> (local_8d & 0x1f) & 1) != 0;
  }
  if (!bVar7) {
    local_9 = 0;
  }
  *in_FS_OFFSET = uStack_118;
  return local_9;
}



// === FUN_00930c90 @ 00930c90 size:143 ===

void FUN_00930c90(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined4 local_8a [31];
  undefined1 local_d;
  int local_c;
  int local_8;
  
  puStack_9c = &stack0xfffffffc;
  puVar3 = local_8a;
  for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)param_3;
  puStack_a0 = &LAB_00930d18;
  uStack_a4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_a4;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_0094fb9c(param_1,&local_d);
  if (SBORROW4(local_c,1)) {
    thunk_FUN_004072dc(uVar1,local_c + -1);
  }
  FUN_00409060(local_8 + 0x77a);
  FUN_004072f4();
  FUN_0040924c(local_8 + 0x77a,local_8a);
  FUN_004072f4();
  FUN_00940fa8(local_8,local_d);
  *in_FS_OFFSET = uStack_a4;
  return;
}



// === FUN_00930ed0 @ 00930ed0 size:85 ===

undefined1 FUN_00930ed0(undefined4 param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_d;
  
  puStack_20 = &stack0xfffffffc;
  local_d = 1;
  puStack_24 = &LAB_00930f1b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (param_2 == 0) {
    *in_FS_OFFSET = uStack_28;
  }
  else {
    local_d = FUN_00931088(param_1,param_2,3);
    *in_FS_OFFSET = uStack_28;
  }
  return local_d;
}



// === FUN_00931064 @ 00931064 size:35 ===

undefined4 FUN_00931064(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009310b0(param_1,param_2,1);
  return uVar1;
}



// === FUN_009311f4 @ 009311f4 size:180 ===

void FUN_009311f4(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 local_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_3d [5];
  int local_38;
  int local_14;
  undefined1 local_e;
  undefined1 local_d;
  int local_c;
  int local_8;
  
  puStack_58 = &stack0xfffffffc;
  puStack_64 = &stack0xfffffffc;
  local_44 = 0;
  local_48 = 0;
  puStack_5c = &LAB_009312e7;
  local_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_60;
  local_d = 0;
  puStack_68 = &LAB_0093128d;
  uStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_6c;
  local_c = param_2;
  local_8 = param_1;
  uVar2 = FUN_00931338(param_1,&local_e);
  if (SBORROW4(local_c,1)) {
    thunk_FUN_004072dc(uVar2,local_c + -1);
  }
  FUN_00409060(local_8 + 0x52a);
  FUN_004072f4();
  local_14 = local_8 + 0x52a;
  FUN_00408400(local_14,local_3d);
  FUN_004072f4();
  local_d = 0 < local_38;
  FUN_009314a0(local_8,local_e);
  puVar1 = puStack_58;
  *in_FS_OFFSET = uStack_6c;
  *in_FS_OFFSET = local_60;
  puStack_58 = &LAB_009312ee;
  puStack_5c = (undefined1 *)0x9312e6;
  FUN_0040c628(&local_48,2,puVar1);
  return;
}



// === FUN_0093204c @ 0093204c size:210 ===

void FUN_0093204c(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 local_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_41;
  undefined4 local_40;
  int local_18;
  undefined1 local_11;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  puStack_5c = &stack0xfffffffc;
  puStack_68 = &stack0xfffffffc;
  local_48 = 0;
  local_4c = 0;
  puStack_60 = &LAB_0093215d;
  local_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_64;
  local_10 = 1;
  puStack_6c = &LAB_00932103;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == 0) {
    puStack_68 = &stack0xfffffffc;
    puStack_5c = &stack0xfffffffc;
    FUN_00b2b8f8(L"Cannot get parent of Element #0");
    *in_FS_OFFSET = uStack_70;
  }
  else {
    uVar2 = FUN_00931338(param_1,&local_11);
    if (SBORROW4(local_c,1)) {
      thunk_FUN_004072dc(uVar2,local_c + -1);
    }
    FUN_00409060(local_8 + 0x52a);
    FUN_004072f4();
    local_18 = local_8 + 0x52a;
    FUN_00408400(local_18,&local_41);
    FUN_004072f4();
    local_10 = local_40;
    FUN_009314a0(local_8,local_11);
    *in_FS_OFFSET = uStack_70;
  }
  puVar1 = puStack_5c;
  *in_FS_OFFSET = local_64;
  puStack_5c = &LAB_00932164;
  puStack_60 = (undefined1 *)0x93215c;
  FUN_0040c628(&local_4c,2,puVar1);
  return;
}



// === FUN_0093237c @ 0093237c size:214 ===

void FUN_0093237c(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18 [2];
  undefined4 local_10;
  undefined1 *local_c;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_18[0] = 0;
  local_10 = 0;
  puStack_30 = &LAB_00932486;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  puStack_38 = (undefined1 *)0x9323af;
  local_c = param_2;
  local_8 = param_1;
  FUN_0094c0b8(param_1,local_18);
  puStack_38 = (undefined1 *)0x9323bf;
  FUN_0040d7f4(&local_10,local_18[0],L"\\info\\workload.dat");
  puStack_3c = &LAB_0093242f;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  *local_c = 0;
  if (*(char *)(local_8 + 0xc25) == '\0') {
    puStack_38 = &stack0xfffffffc;
    FUN_00407fec(local_8 + 0x9ca,local_10);
    FUN_004072f4();
    FUN_00409038(local_8 + 0x9ca,8);
    FUN_004072f4();
    *(undefined1 *)(local_8 + 0xc25) = 1;
    *local_c = 1;
    *in_FS_OFFSET = uStack_40;
  }
  else {
    *in_FS_OFFSET = uStack_40;
    puStack_38 = &stack0xfffffffc;
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = local_34;
  puStack_2c = &LAB_0093248d;
  puStack_30 = (undefined1 *)0x93247d;
  FUN_0040c628(&local_1c,2,puVar1);
  puStack_30 = (undefined1 *)0x932485;
  FUN_0040c5c8(&local_10);
  return;
}



// === FUN_009324fc @ 009324fc size:112 ===

void FUN_009324fc(int param_1,char param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = &stack0xfffffffc;
  puStack_20 = &LAB_00932565;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (param_2 == '\0') {
    *in_FS_OFFSET = uStack_24;
  }
  else if (*(char *)(param_1 + 0xc25) == '\0') {
    *in_FS_OFFSET = uStack_24;
  }
  else {
    FUN_00408228(param_1 + 0x9ca);
    FUN_004072f4();
    *(undefined1 *)(param_1 + 0xc25) = 0;
    *in_FS_OFFSET = uStack_24;
  }
  return;
}



// === FUN_00932d0c @ 00932d0c size:112 ===

void FUN_00932d0c(undefined4 param_1)

{
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_9;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_1c = &LAB_00932d7c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = param_1;
  FUN_0094c0b8(DAT_00ca60d0,&local_14);
  uVar1 = local_14;
  FUN_0040d87c(&local_10,3);
  local_9 = FUN_00b08bd8(local_10,CONCAT22(extraout_var,1));
  *in_FS_OFFSET = &LAB_00932da8;
  FUN_0040c628(&local_14,2,uVar1,&LAB_00932d83);
  return;
}



// === FUN_0093488c @ 0093488c size:106 ===

void FUN_0093488c(int param_1)

{
  undefined1 *puVar1;
  HFILE hFile;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_009348f0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if ((*(int *)(param_1 + 8) == -1) && (*(int *)(param_1 + 4) == -1)) {
    *in_FS_OFFSET = uStack_20;
  }
  else {
    hFile = *(HFILE *)(param_1 + 4);
    puVar1 = &stack0xfffffffc;
    if (*(int *)(param_1 + 8) != 0) {
      hFile = thunk_FUN_004072dc();
      puVar1 = puStack_18;
    }
    puStack_18 = puVar1;
    _lclose(hFile);
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *in_FS_OFFSET = uStack_20;
  }
  return;
}



// === FUN_00935348 @ 00935348 size:92 ===

void FUN_00935348(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = 0;
  puStack_18 = &LAB_009353a4;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  FUN_0094c0b8(param_1,&local_10);
  FUN_0040d7f4(local_c,local_10,L"\\reports");
  FUN_00b14b84(*local_c,0);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_009353ab;
  puStack_18 = (undefined1 *)0x9353a3;
  FUN_0040c5c8(&local_10,uStack_1c,puVar1);
  return;
}



// === FUN_00936354 @ 00936354 size:189 ===

void FUN_00936354(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  float10 fVar2;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  
  puStack_34 = &stack0xfffffffc;
  puStack_38 = &LAB_00936407;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  iVar1 = FUN_00951558(DAT_00ca60d0);
  fVar2 = (float10)iVar1;
  iVar1 = *(int *)(param_1 + 0x2ea) + (int)*(char *)(param_1 + 0x46a);
  if (SCARRY4(*(int *)(param_1 + 0x2ea),(int)*(char *)(param_1 + 0x46a))) {
    iVar1 = thunk_FUN_004072dc();
  }
  if ((double)((float10)iVar1 / fVar2) == 0.0) {
    if (*(int *)(*(int *)(param_1 + 0x6a) + 5) == 0) {
      *in_FS_OFFSET = uStack_3c;
    }
    else {
      *in_FS_OFFSET = uStack_3c;
    }
  }
  else {
    *in_FS_OFFSET = uStack_3c;
  }
  return;
}



// === FUN_0093648c @ 0093648c size:160 ===

void FUN_0093648c(undefined4 param_1,ushort param_2,ushort param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  double local_14;
  ushort local_c;
  ushort local_a;
  undefined4 local_8;
  
  puStack_40 = &stack0xfffffffc;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_3c;
  local_14 = 0.0;
  puStack_44 = &LAB_00936511;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  if (param_2 != 0) {
    local_18 = (uint)param_2;
    local_14 = 0.0 - 1.0 / (double)local_18;
  }
  if (param_3 != 0) {
    local_18 = (uint)param_3;
    local_14 = 1.0 / (double)local_18 + local_14;
  }
  *in_FS_OFFSET = uStack_48;
  *in_FS_OFFSET = local_3c;
  puStack_34 = &LAB_0093658b;
  uStack_38 = 0x936583;
  local_c = param_3;
  local_a = param_2;
  local_8 = param_1;
  FUN_0040c628(&local_24,3,&stack0xfffffffc);
  return;
}



// === FUN_00938128 @ 00938128 size:184 ===

void FUN_00938128(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_b0;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  undefined4 local_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  char local_83;
  ushort local_74;
  short local_72;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_9c = &stack0xfffffffc;
  puStack_a8 = &stack0xfffffffc;
  local_88 = 0;
  local_8c = 0;
  puStack_a0 = &LAB_00938225;
  local_a4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_a4;
  local_d = 0;
  puStack_ac = &LAB_009381c2;
  uStack_b0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_b0;
  local_c = param_2;
  local_8 = param_1;
  FUN_0094fb9c(param_1,&local_e);
  FUN_0094da18(local_8,local_c,&local_84);
  if (local_83 == '\x01') {
    iVar2 = FUN_00951558(local_8);
    iVar3 = (int)local_72 + (uint)local_74;
    if (SCARRY4((int)local_72,(uint)local_74)) {
      iVar2 = thunk_FUN_004072dc();
      iVar3 = extraout_EDX;
    }
    if (iVar3 <= iVar2) {
      local_d = 1;
      goto LAB_009381aa;
    }
  }
  local_d = 0;
LAB_009381aa:
  FUN_00940fa8(local_8,local_e);
  puVar1 = puStack_9c;
  *in_FS_OFFSET = uStack_b0;
  *in_FS_OFFSET = local_a4;
  puStack_9c = &LAB_0093822c;
  puStack_a0 = (undefined1 *)0x938224;
  FUN_0040c628(&local_8c,2,puVar1);
  return;
}



// === FUN_00938ef0 @ 00938ef0 size:292 ===

void FUN_00938ef0(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  
  piVar1 = *(int **)(param_1 + 0x66);
  iVar3 = FUN_00407bcc();
  if (iVar3 >> 0x1f != extraout_EDX) {
    iVar3 = thunk_FUN_004072dc();
  }
  uVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Registry",&DAT_0093902c,iVar3);
  *(undefined4 *)PTR_DAT_00baa45c = uVar4;
  iVar3 = FUN_00407bcc();
  if (iVar3 >> 0x1f != extraout_EDX_00) {
    iVar3 = thunk_FUN_004072dc();
  }
  uVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Registry",&DAT_0093905c,iVar3);
  *(undefined4 *)PTR_DAT_00baa2a0 = uVar4;
  uVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Registry",&DAT_0093906c,0);
  *(undefined4 *)PTR_DAT_00ba9a64 = uVar4;
  uVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Registry",&DAT_0093907c,0);
  *(undefined4 *)PTR_DAT_00baa594 = uVar4;
  uVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Registry",L"Maximized",0);
  *PTR_DAT_00ba9c98 = uVar2;
  uVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Registry",L"MembersWidth",200);
  *(undefined4 *)PTR_DAT_00baa404 = uVar4;
  uVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Registry",L"ElementsHeight",0x96);
  *(undefined4 *)PTR_DAT_00baa744 = uVar4;
  return;
}



// === FUN_009390f4 @ 009390f4 size:206 ===

void FUN_009390f4(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x66);
  (**(code **)(*piVar1 + 0x10))(piVar1,L"Registry",&DAT_009391d0,*(undefined4 *)PTR_DAT_00baa45c);
  (**(code **)(*piVar1 + 0x10))(piVar1,L"Registry",&DAT_00939200,*(undefined4 *)PTR_DAT_00baa2a0);
  (**(code **)(*piVar1 + 0x10))(piVar1,L"Registry",&DAT_00939210,*(undefined4 *)PTR_DAT_00ba9a64);
  (**(code **)(*piVar1 + 0x10))(piVar1,L"Registry",&DAT_00939220,*(undefined4 *)PTR_DAT_00baa594);
  (**(code **)(*piVar1 + 0x18))(piVar1,L"Registry",L"Maximized",*PTR_DAT_00ba9c98);
  (**(code **)(*piVar1 + 0x10))(piVar1,L"Registry",L"MembersWidth",*(undefined4 *)PTR_DAT_00baa404);
  (**(code **)(*piVar1 + 0x10))
            (piVar1,L"Registry",L"ElementsHeight",*(undefined4 *)PTR_DAT_00baa744);
  return;
}



// === FUN_00939618 @ 00939618 size:162 ===

void FUN_00939618(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_b0;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  undefined4 local_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84 [118];
  undefined1 local_e;
  undefined1 local_d;
  int local_c;
  undefined4 local_8;
  
  puStack_9c = &stack0xfffffffc;
  puStack_a8 = &stack0xfffffffc;
  local_88 = 0;
  local_8c = 0;
  puStack_a0 = &LAB_009396ff;
  local_a4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_a4;
  local_d = 3;
  puStack_ac = &LAB_0093969c;
  uStack_b0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_b0;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == 0) {
    *in_FS_OFFSET = uStack_b0;
    puStack_a8 = &stack0xfffffffc;
    puStack_9c = &stack0xfffffffc;
  }
  else {
    FUN_0094fb9c(param_1,&local_e);
    FUN_0094da18(local_8,local_c,local_84);
    local_d = local_84[0];
    FUN_00940fa8(local_8,local_e);
    *in_FS_OFFSET = uStack_b0;
  }
  puVar1 = puStack_9c;
  *in_FS_OFFSET = local_a4;
  puStack_9c = &LAB_00939706;
  puStack_a0 = (undefined1 *)0x9396fe;
  FUN_0040c628(&local_8c,2,puVar1);
  return;
}



// === FUN_00939e64 @ 00939e64 size:370 ===

void FUN_00939e64(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_94;
  undefined4 uStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_41;
  int local_40;
  int local_18;
  undefined1 local_12;
  undefined1 local_11;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_6c = &stack0xfffffffc;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  puStack_70 = &LAB_0093a02d;
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  local_11 = 1;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_3 != 1) {
    if (param_2 == 0) {
      puStack_78 = (undefined1 *)0x939eb6;
      puStack_6c = &stack0xfffffffc;
      FUN_00b2b8f8(L"Child cannot be #0 at IsDescendant");
      local_11 = 0;
      puVar1 = puStack_6c;
    }
    else {
      local_11 = 0;
      puVar1 = &stack0xfffffffc;
      if (param_2 != 1) {
        puStack_7c = &LAB_00939fbb;
        puStack_80 = (undefined1 *)*in_FS_OFFSET;
        *in_FS_OFFSET = &puStack_80;
        puStack_78 = &stack0xfffffffc;
        FUN_00931338(param_1,&local_12);
        do {
          FUN_00408318(local_8 + 0x52a);
          iVar2 = FUN_004072f4();
          if (iVar2 < local_c) {
            FUN_004282b0(local_c,&local_4c);
            uStack_88 = local_4c;
            FUN_00408318(local_8 + 0x52a);
            uVar3 = FUN_004072f4();
            FUN_004282b0(uVar3,&local_50);
            uStack_94 = local_50;
            FUN_0040d87c(&local_48,5);
            FUN_00b2b8f8(local_48);
            break;
          }
          if (SBORROW4(local_c,1)) {
            thunk_FUN_004072dc(iVar2,local_c + -1);
          }
          FUN_00409060(local_8 + 0x52a);
          FUN_004072f4();
          local_18 = local_8 + 0x52a;
          FUN_00408400(local_18,&local_41);
          FUN_004072f4();
          if (local_40 == local_10) {
            local_11 = 1;
            break;
          }
          local_c = local_40;
        } while (local_40 != 1);
        FUN_009314a0(local_8,local_12);
        *in_FS_OFFSET = uStack_94;
        puVar1 = puStack_6c;
      }
    }
  }
  puStack_6c = puVar1;
  puVar1 = puStack_80;
  *in_FS_OFFSET = uStack_88;
  puStack_80 = &LAB_0093a034;
  FUN_0040c628(&local_5c,6,puVar1);
  return;
}



// === FUN_0093b898 @ 0093b898 size:211 ===

void FUN_0093b898(undefined4 param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_b0;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  undefined4 local_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_82;
  char local_81;
  undefined1 local_66 [90];
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_9c = &stack0xfffffffc;
  puStack_a8 = &stack0xfffffffc;
  local_88 = 0;
  local_8c = 0;
  puStack_a0 = &LAB_0093b9b0;
  local_a4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_a4;
  puStack_ac = &LAB_0093b94d;
  uStack_b0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_b0;
  local_c = param_2;
  local_8 = param_1;
  FUN_0094da18(param_1,param_2,&local_82);
  if (local_81 == '\x01') {
    FUN_00938448(local_8,&local_82,0xffffffff);
  }
  FUN_0040a340(local_66);
  if (in_ST0 != (float10)param_4) {
    FUN_0040a370(local_66);
    piVar1 = (int *)(PTR_DAT_00ba9e9c + 0x32);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar2,1)) {
      thunk_FUN_004072dc();
    }
  }
  if (local_81 == '\x01') {
    FUN_00938448(local_8,&local_82,1);
  }
  FUN_00930c90(local_8,local_c,&local_82);
  puVar3 = puStack_9c;
  *in_FS_OFFSET = uStack_b0;
  *in_FS_OFFSET = local_a4;
  puStack_9c = &LAB_0093b9b7;
  puStack_a0 = (undefined1 *)0x93b9af;
  FUN_0040c628(&local_8c,2,puVar3);
  return;
}



// === FUN_0093ce40 @ 0093ce40 size:109 ===

int FUN_0093ce40(int param_1,char param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = *(int *)(*(int *)(param_1 + 0x7a) + 5);
  puStack_24 = &LAB_0093cea3;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (param_2 != '\0') {
    iVar2 = *(char *)(param_1 + 0x46c) + local_10;
    puVar1 = &stack0xfffffffc;
    if (SCARRY4((int)*(char *)(param_1 + 0x46c),local_10)) {
      iVar2 = thunk_FUN_004072dc();
      puVar1 = puStack_20;
    }
    puStack_20 = puVar1;
    local_10 = iVar2 + *(char *)(param_1 + 0x46d);
    if (SCARRY4(iVar2,(int)*(char *)(param_1 + 0x46d))) {
      local_10 = thunk_FUN_004072dc();
    }
  }
  *in_FS_OFFSET = uStack_28;
  return local_10;
}



// === FUN_0093cf28 @ 0093cf28 size:250 ===

void FUN_0093cf28(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint extraout_EDX;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined4 local_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  undefined4 local_94;
  undefined4 local_90;
  char local_8a [16];
  ushort local_7a;
  short local_78;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_a4 = &stack0xfffffffc;
  puStack_b0 = &stack0xfffffffc;
  local_90 = 0;
  local_94 = 0;
  puStack_a8 = &LAB_0093d077;
  local_ac = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_ac;
  puStack_b4 = &LAB_0093d004;
  uStack_b8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_b8;
  local_c = param_2;
  local_8 = param_1;
  FUN_0094da18(param_1,param_2,local_8a);
  local_10 = (int)local_78 + (uint)local_7a;
  if (SCARRY4((int)local_78,(uint)local_7a)) {
    local_10 = thunk_FUN_004072dc();
  }
  FUN_00965068(*(undefined4 *)(local_8 + 0x7a),local_c);
  if (local_8a[0] == '\x01') {
    FUN_00965068(*(undefined4 *)(local_8 + 0x7e),local_c);
  }
  else {
    FUN_00965068(*(undefined4 *)(local_8 + 0x82),local_c);
  }
  FUN_009374f8(local_8,local_c,local_8a[0]);
  if ((int)local_10 < 1) {
    local_10 = 1;
  }
  uVar2 = local_10;
  if (0xffff < local_10) {
    thunk_FUN_004072dc();
    uVar2 = extraout_EDX;
  }
  FUN_0093d0e8(local_8,uVar2,local_c);
  puVar1 = puStack_a4;
  *in_FS_OFFSET = uStack_b8;
  *in_FS_OFFSET = local_ac;
  puStack_a4 = &LAB_0093d07e;
  puStack_a8 = (undefined1 *)0x93d076;
  FUN_0040c628(&local_94,2,puVar1);
  return;
}



// === FUN_007a1954 @ 007a1954 size:137 ===

void FUN_007a1954(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  double dVar3;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  double local_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_20 = 0;
  local_24 = 0;
  puStack_34 = (undefined1 *)0x7a1973;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040c6ac(param_1);
  puStack_38 = &LAB_007a1a23;
  puStack_3c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_3c;
  uStack_44._0_4_ = &LAB_007a19a5;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  uStack_44._4_4_ = &stack0xfffffffc;
  puStack_34 = &stack0xfffffffc;
  FUN_00b2104c(local_8);
  uVar1 = uStack_48;
  local_1c = (double)in_ST0;
  *in_FS_OFFSET = uStack_48;
  uStack_48 = 0x7a19fd;
  dVar3 = local_1c;
  local_10 = FUN_00950018(*(undefined4 *)PTR_DAT_00ba9c04,uVar1,uStack_44._4_4_);
  uStack_44 = dVar3;
  puVar2 = puStack_3c;
  *in_FS_OFFSET = (undefined1 *)uStack_44;
  puStack_3c = &LAB_007a1a2a;
  uStack_44._4_4_ = (undefined1 *)0x7a1a1a;
  FUN_0040c628(&local_24,2,puVar2);
  uStack_44._4_4_ = (undefined1 *)0x7a1a22;
  FUN_0040c5c8(&local_8);
  return;
}



// === FUN_007a1a80 @ 007a1a80 size:383 ===

void FUN_007a1a80(undefined4 *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 *local_8;
  
  puStack_28 = &stack0xfffffffc;
  puStack_34 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_2c = &LAB_007a1c25;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  uVar3 = 1;
  puStack_38 = &LAB_007a1be4;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_c = param_2;
  local_8 = param_1;
  FUN_00b21bcc(*param_1,&local_10,&local_14);
  FUN_0040d98c(local_10,L"TasklistName");
  if ((bool)uVar3) {
    FUN_00b21a4c(local_8,&local_10,&local_14);
    cVar2 = FUN_00b094d8(local_10,L"TasklistName");
    if (cVar2 == '\0') {
      FUN_0040c9a8(local_c + 0xa2,local_14);
      FUN_00b21a4c(local_8,&local_10,&local_14);
      cVar2 = FUN_00b094d8(local_10,L"TaskName");
      if (cVar2 == '\0') {
        FUN_0040c9a8(local_c + 0xa6,local_14);
        FUN_00b21a4c(local_8,&local_10,&local_14);
        cVar2 = FUN_00b094d8(local_10,L"TaskValue");
        if (cVar2 == '\0') {
          FUN_00b1a7ac(local_14,local_c + 0xaa,PTR_DAT_00ba9d40);
          FUN_00b21a4c(local_8,&local_10,&local_14);
          cVar2 = FUN_00b094d8(local_10,L"TaskTime");
          if (cVar2 == '\0') {
            FUN_00b1a7ac(local_14,local_c + 0xb2,PTR_DAT_00ba9d40);
            *in_FS_OFFSET = uStack_3c;
          }
          else {
            *in_FS_OFFSET = uStack_3c;
          }
        }
        else {
          *in_FS_OFFSET = uStack_3c;
        }
      }
      else {
        *in_FS_OFFSET = uStack_3c;
      }
    }
    else {
      *in_FS_OFFSET = uStack_3c;
    }
  }
  else {
    *in_FS_OFFSET = uStack_3c;
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = local_30;
  puStack_28 = &LAB_007a1c2c;
  puStack_2c = (undefined1 *)0x7a1c24;
  FUN_0040c628(&local_14,2,puVar1);
  return;
}



// === FUN_007a5624 @ 007a5624 size:117 ===

void FUN_007a5624(undefined2 param_1,undefined2 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined1 local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_9;
  undefined2 local_8;
  undefined2 local_6;
  
  local_14 = 0;
  local_10 = 0xbff00000;
  local_1c = 0;
  local_18 = 0xbff00000;
  local_24 = 0;
  local_20 = 0xbff00000;
  local_9 = param_3;
  local_8 = param_2;
  local_6 = param_1;
  FUN_007a65fc(CONCAT22((short)((uint)local_2c >> 0x10),param_1),param_2,param_3,local_2c,&local_24,
               &local_1c,param_4,&local_14,param_5,param_6,param_7,param_8,param_9,param_10,param_11
              );
  return;
}



// === FUN_007a5748 @ 007a5748 size:250 ===

void FUN_007a5748(undefined1 param_1)

{
  switch(param_1) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
  }
  switch(param_1) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
  }
  return;
}



// === FUN_007a5c2c @ 007a5c2c size:609 ===

void FUN_007a5c2c(undefined1 param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
                 int param_6,int param_7,int param_8,int param_9,int param_10)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  int extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  int extraout_EDX_11;
  uint extraout_EDX_12;
  uint extraout_EDX_13;
  uint extraout_EDX_14;
  uint extraout_EDX_15;
  int extraout_EDX_16;
  uint extraout_EDX_17;
  uint extraout_EDX_18;
  
  uVar2 = param_8 - 1;
  if (SBORROW4(param_8,1)) {
    uVar2 = thunk_FUN_004072dc();
  }
  if (0x14 < uVar2) {
    uVar2 = thunk_FUN_004072dc();
  }
  iVar3 = (int)((longlong)(int)uVar2 * 0x1b9);
  if ((longlong)iVar3 != (longlong)(int)uVar2 * 0x1b9) {
    iVar3 = thunk_FUN_004072dc();
  }
  puVar4 = PTR_DAT_00ba9ef4 + iVar3 * 4;
  uVar2 = param_7 - 1;
  if (SBORROW4(param_7,1)) {
    puVar4 = (undefined *)thunk_FUN_004072dc();
    uVar2 = extraout_EDX;
  }
  if (0x14 < uVar2) {
    puVar4 = (undefined *)thunk_FUN_004072dc();
    uVar2 = extraout_EDX_00;
  }
  iVar3 = (int)((longlong)(int)uVar2 * 0x15);
  if ((longlong)iVar3 != (longlong)(int)uVar2 * 0x15) {
    puVar4 = (undefined *)thunk_FUN_004072dc();
    iVar3 = extraout_EDX_01;
  }
  puVar4 = puVar4 + iVar3 * 4;
  uVar2 = param_6 - 1;
  if (SBORROW4(param_6,1)) {
    puVar4 = (undefined *)thunk_FUN_004072dc();
    uVar2 = extraout_EDX_02;
  }
  if (0x14 < uVar2) {
    puVar4 = (undefined *)thunk_FUN_004072dc();
    uVar2 = extraout_EDX_03;
  }
  piVar1 = (int *)(puVar4 + uVar2 * 4);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar3,1)) {
    thunk_FUN_004072dc();
  }
  uVar2 = FUN_008a71ec(param_1);
  if ((uVar2 & 2) != 0) {
    uVar2 = param_8 - 1;
    if (SBORROW4(param_8,1)) {
      uVar2 = thunk_FUN_004072dc();
    }
    if (0x14 < uVar2) {
      uVar2 = thunk_FUN_004072dc();
    }
    iVar3 = (int)((longlong)(int)uVar2 * 0x1b9);
    if ((longlong)iVar3 != (longlong)(int)uVar2 * 0x1b9) {
      iVar3 = thunk_FUN_004072dc();
    }
    puVar4 = PTR_DAT_00baa8d4 + iVar3 * 4;
    uVar2 = param_7 - 1;
    if (SBORROW4(param_7,1)) {
      puVar4 = (undefined *)thunk_FUN_004072dc();
      uVar2 = extraout_EDX_04;
    }
    if (0x14 < uVar2) {
      puVar4 = (undefined *)thunk_FUN_004072dc();
      uVar2 = extraout_EDX_05;
    }
    iVar3 = (int)((longlong)(int)uVar2 * 0x15);
    if ((longlong)iVar3 != (longlong)(int)uVar2 * 0x15) {
      puVar4 = (undefined *)thunk_FUN_004072dc();
      iVar3 = extraout_EDX_06;
    }
    puVar4 = puVar4 + iVar3 * 4;
    uVar2 = param_6 - 1;
    if (SBORROW4(param_6,1)) {
      puVar4 = (undefined *)thunk_FUN_004072dc();
      uVar2 = extraout_EDX_07;
    }
    if (0x14 < uVar2) {
      puVar4 = (undefined *)thunk_FUN_004072dc();
      uVar2 = extraout_EDX_08;
    }
    piVar1 = (int *)(puVar4 + uVar2 * 4);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar3,1)) {
      thunk_FUN_004072dc();
    }
  }
  if ((param_10 == 1) && (0 < param_3)) {
    uVar2 = param_6 - 1;
    if (SBORROW4(param_6,1)) {
      uVar2 = thunk_FUN_004072dc();
    }
    if (0x14 < uVar2) {
      uVar2 = thunk_FUN_004072dc();
    }
    iVar3 = (int)((longlong)(int)uVar2 * 0x17a);
    if ((longlong)iVar3 != (longlong)(int)uVar2 * 0x17a) {
      iVar3 = thunk_FUN_004072dc();
    }
    puVar4 = PTR_DAT_00baa1b8 + iVar3 * 8;
    uVar2 = param_4 - 1;
    if (SBORROW4(param_4,1)) {
      puVar4 = (undefined *)thunk_FUN_004072dc();
      uVar2 = extraout_EDX_09;
    }
    if (0x14 < uVar2) {
      puVar4 = (undefined *)thunk_FUN_004072dc();
      uVar2 = extraout_EDX_10;
    }
    iVar3 = (int)((longlong)(int)uVar2 * 0x12);
    if ((longlong)iVar3 != (longlong)(int)uVar2 * 0x12) {
      puVar4 = (undefined *)thunk_FUN_004072dc();
      iVar3 = extraout_EDX_11;
    }
    puVar4 = puVar4 + iVar3 * 8;
    uVar2 = param_5 - 1;
    if (SBORROW4(param_5,1)) {
      puVar4 = (undefined *)thunk_FUN_004072dc();
      uVar2 = extraout_EDX_12;
    }
    if (0x23 < uVar2) {
      puVar4 = (undefined *)thunk_FUN_004072dc();
      uVar2 = extraout_EDX_13;
    }
    piVar1 = (int *)(puVar4 + uVar2 * 4);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar3,1)) {
      thunk_FUN_004072dc();
    }
    uVar2 = FUN_008a71ec(param_1);
    if ((uVar2 & 2) != 0) {
      uVar2 = param_6 - 1;
      if (SBORROW4(param_6,1)) {
        uVar2 = thunk_FUN_004072dc();
      }
      if (0x14 < uVar2) {
        uVar2 = thunk_FUN_004072dc();
      }
      iVar3 = (int)((longlong)(int)uVar2 * 0x17a);
      if ((longlong)iVar3 != (longlong)(int)uVar2 * 0x17a) {
        iVar3 = thunk_FUN_004072dc();
      }
      puVar4 = PTR_DAT_00baaa38 + iVar3 * 8;
      uVar2 = param_4 - 1;
      if (SBORROW4(param_4,1)) {
        puVar4 = (undefined *)thunk_FUN_004072dc();
        uVar2 = extraout_EDX_14;
      }
      if (0x14 < uVar2) {
        puVar4 = (undefined *)thunk_FUN_004072dc();
        uVar2 = extraout_EDX_15;
      }
      iVar3 = (int)((longlong)(int)uVar2 * 0x12);
      if ((longlong)iVar3 != (longlong)(int)uVar2 * 0x12) {
        puVar4 = (undefined *)thunk_FUN_004072dc();
        iVar3 = extraout_EDX_16;
      }
      puVar4 = puVar4 + iVar3 * 8;
      uVar2 = param_5 - 1;
      if (SBORROW4(param_5,1)) {
        puVar4 = (undefined *)thunk_FUN_004072dc();
        uVar2 = extraout_EDX_17;
      }
      if (0x23 < uVar2) {
        puVar4 = (undefined *)thunk_FUN_004072dc();
        uVar2 = extraout_EDX_18;
      }
      piVar1 = (int *)(puVar4 + uVar2 * 4);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + 1;
      if (SCARRY4(iVar3,1)) {
        thunk_FUN_004072dc();
      }
    }
  }
  if ((param_10 == 1) && (param_9 == 0)) {
    uVar2 = param_5;
    if (0x23 < param_5) {
      uVar2 = thunk_FUN_004072dc();
    }
    piVar1 = (int *)(PTR_DAT_00ba9eb0 + uVar2 * 4);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar3,1)) {
      thunk_FUN_004072dc();
    }
    uVar2 = FUN_008a71ec(param_1);
    if ((uVar2 & 2) != 0) {
      if (0x23 < param_5) {
        param_5 = thunk_FUN_004072dc();
      }
      piVar1 = (int *)(PTR_DAT_00baa8a4 + param_5 * 4);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + 1;
      if (SCARRY4(iVar3,1)) {
        thunk_FUN_004072dc();
      }
    }
  }
  return;
}



// === FUN_007a65fc @ 007a65fc size:1169 ===

void FUN_007a65fc(undefined2 param_1,ushort param_2,char param_3,double *param_4,double *param_5,
                 double *param_6,double *param_7,double *param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 *param_13,
                 undefined4 param_14,undefined4 param_15)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  int extraout_EDX_04;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar6;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 local_4c;
  byte local_47;
  byte local_46;
  byte local_45;
  double local_44;
  double local_3c;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined8 local_24;
  double local_1c;
  undefined8 local_14;
  char local_9;
  ushort local_8;
  undefined2 local_6;
  
  puStack_68 = &stack0xfffffffc;
  puStack_6c = &LAB_007a6a84;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  local_9 = param_3;
  local_8 = param_2;
  local_6 = param_1;
  local_47 = FUN_0070fc44();
  local_46 = FUN_0070fc8c();
  local_45 = FUN_0070f9cc();
  FUN_007a4788(CONCAT31((int3)((uint)local_34 >> 8),local_45),local_46,&local_4c,local_34,local_2c);
  FUN_00b18dac();
  *param_5 = (double)in_ST0;
  FUN_0070ff58(param_5);
  FUN_007a8064(local_4c);
  *param_4 = (double)in_ST1;
  FUN_007aa958(local_9,CONCAT22(extraout_var_00,local_6),CONCAT22(extraout_var,local_8),
               *(undefined4 *)param_4,(short)*(undefined4 *)((int)param_4 + 4),*param_13,param_13[1]
              );
  local_14 = (double)in_ST2;
  local_45 = FUN_0070f9cc();
  uVar3 = (uint)local_9;
  if (5 < uVar3) {
    uVar3 = thunk_FUN_004072dc();
  }
  fVar6 = (float10)*(double *)(PTR_DAT_00baa2cc + uVar3 * 8) +
          (float10)(double)CONCAT44(param_10,param_9);
  uVar3 = (uint)local_9;
  if (5 < uVar3) {
    uVar3 = thunk_FUN_004072dc();
  }
  *(double *)(PTR_DAT_00baa2cc + uVar3 * 8) = (double)fVar6;
  uVar3 = (uint)local_9;
  if (5 < uVar3) {
    uVar3 = thunk_FUN_004072dc();
  }
  fVar6 = (float10)*(double *)(PTR_DAT_00baa5b8 + uVar3 * 8) + (float10)*param_5;
  uVar3 = (uint)local_9;
  if (5 < uVar3) {
    uVar3 = thunk_FUN_004072dc();
  }
  *(double *)(PTR_DAT_00baa5b8 + uVar3 * 8) = (double)fVar6;
  uVar3 = (uint)local_9;
  if (5 < uVar3) {
    uVar3 = thunk_FUN_004072dc();
  }
  fVar6 = (float10)*(double *)(PTR_DAT_00baa4d8 + uVar3 * 8) + (float10)*param_4;
  uVar3 = (uint)local_9;
  if (5 < uVar3) {
    uVar3 = thunk_FUN_004072dc();
  }
  *(double *)(PTR_DAT_00baa4d8 + uVar3 * 8) = (double)fVar6;
  uVar3 = (uint)local_9;
  if (5 < uVar3) {
    uVar3 = thunk_FUN_004072dc();
  }
  fVar6 = (float10)*(double *)(PTR_DAT_00baa764 + uVar3 * 8) + (float10)local_14;
  uVar3 = (uint)local_9;
  if (5 < uVar3) {
    uVar3 = thunk_FUN_004072dc();
  }
  *(double *)(PTR_DAT_00baa764 + uVar3 * 8) = (double)fVar6;
  uVar3 = (uint)local_9;
  if (5 < uVar3) {
    uVar3 = thunk_FUN_004072dc();
  }
  piVar1 = (int *)(PTR_DAT_00baa580 + uVar3 * 4);
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar4,1)) {
    thunk_FUN_004072dc();
  }
  local_3c = *param_5 - (double)CONCAT44(param_10,param_9);
  *(double *)PTR_DAT_00ba9fb8 = *(double *)PTR_DAT_00ba9fb8 + local_3c;
  iVar4 = *(int *)PTR_DAT_00ba98a4;
  *(int *)PTR_DAT_00ba98a4 = *(int *)PTR_DAT_00ba98a4 + 1;
  if (SCARRY4(iVar4,1)) {
    thunk_FUN_004072dc();
  }
  FUN_00407b98();
  local_1c = (double)((-(float10)*(double *)PTR_DAT_00baac8c *
                      (float10)(double)CONCAT44(param_15,param_14)) / in_ST3);
  FUN_0070fed4(&local_1c);
  FUN_007a5e90(local_4c,local_9);
  local_24 = (double)in_ST4;
  local_44 = local_24 / (double)CONCAT44(param_12,param_11);
  *(double *)PTR_DAT_00ba9ac0 = *(double *)PTR_DAT_00ba9ac0 + local_44;
  iVar4 = *(int *)PTR_DAT_00baac20;
  *(int *)PTR_DAT_00baac20 = *(int *)PTR_DAT_00baac20 + 1;
  if (SCARRY4(iVar4,1)) {
    thunk_FUN_004072dc();
  }
  if (*param_8 <= 0.0) {
    *(undefined4 *)param_6 = 0;
    *(undefined4 *)((int)param_6 + 4) = 0xbff00000;
  }
  else {
    *param_6 = local_24 / *param_8;
    FUN_007a5570(param_6,local_9);
  }
  uVar3 = FUN_008a71ec(local_9);
  if (((uVar3 & 2) == 0) && (local_9 != '\v')) {
    if (0xff < local_8) {
      thunk_FUN_004072dc();
    }
    FUN_007b32f8();
    *param_7 = (double)in_ST5;
    *(undefined4 *)param_6 = 0;
    *(undefined4 *)((int)param_6 + 4) = 0xbff00000;
  }
  else {
    uVar3 = local_45 - 1;
    if (SBORROW4((uint)local_45,1)) {
      uVar3 = thunk_FUN_004072dc();
    }
    if (0x14 < uVar3) {
      uVar3 = thunk_FUN_004072dc();
    }
    if ((longlong)(int)((longlong)(int)uVar3 * 0x1b9) != (longlong)(int)uVar3 * 0x1b9) {
      thunk_FUN_004072dc();
    }
    uVar3 = local_46 - 1;
    if (SBORROW4((uint)local_46,1)) {
      thunk_FUN_004072dc();
      uVar3 = extraout_EDX;
    }
    if (0x14 < uVar3) {
      thunk_FUN_004072dc();
      uVar3 = extraout_EDX_00;
    }
    if ((longlong)(int)((longlong)(int)uVar3 * 0x15) != (longlong)(int)uVar3 * 0x15) {
      thunk_FUN_004072dc();
    }
    uVar3 = local_47 - 1;
    if (SBORROW4((uint)local_47,1)) {
      thunk_FUN_004072dc();
      uVar3 = extraout_EDX_01;
    }
    if (0x14 < uVar3) {
      thunk_FUN_004072dc();
    }
    FUN_007b4778();
    uVar3 = local_45 - 1;
    if (SBORROW4((uint)local_45,1)) {
      uVar3 = thunk_FUN_004072dc();
    }
    if (0x14 < uVar3) {
      uVar3 = thunk_FUN_004072dc();
    }
    iVar4 = (int)((longlong)(int)uVar3 * 0x1b9);
    if ((longlong)iVar4 != (longlong)(int)uVar3 * 0x1b9) {
      iVar4 = thunk_FUN_004072dc();
    }
    puVar5 = PTR_DAT_00ba979c + iVar4 * 4;
    uVar3 = local_46 - 1;
    if (SBORROW4((uint)local_46,1)) {
      puVar5 = (undefined *)thunk_FUN_004072dc();
      uVar3 = extraout_EDX_02;
    }
    if (0x14 < uVar3) {
      puVar5 = (undefined *)thunk_FUN_004072dc();
      uVar3 = extraout_EDX_03;
    }
    iVar4 = (int)((longlong)(int)uVar3 * 0x15);
    if ((longlong)iVar4 != (longlong)(int)uVar3 * 0x15) {
      puVar5 = (undefined *)thunk_FUN_004072dc();
      iVar4 = extraout_EDX_04;
    }
    puVar5 = puVar5 + iVar4 * 4;
    uVar3 = local_47 - 1;
    if (SBORROW4((uint)local_47,1)) {
      puVar5 = (undefined *)thunk_FUN_004072dc();
      uVar3 = extraout_EDX_05;
    }
    if (0x14 < uVar3) {
      puVar5 = (undefined *)thunk_FUN_004072dc();
      uVar3 = extraout_EDX_06;
    }
    FUN_007a5874(*(undefined4 *)(puVar5 + uVar3 * 4));
    *param_7 = (double)in_ST6;
  }
  FUN_0070fed4(param_7);
  uVar2 = *(undefined4 *)param_7;
  FUN_007a5fe8(local_9);
  *(undefined4 *)param_8 = (undefined4)local_24;
  *(undefined4 *)((int)param_8 + 4) = local_24._4_4_;
  *param_13 = (undefined4)local_14;
  param_13[1] = local_14._4_4_;
  *in_FS_OFFSET = uVar2;
  return;
}



// === FUN_007abffc @ 007abffc size:148 ===

void FUN_007abffc(void)

{
  undefined *puVar1;
  
  *(undefined4 *)PTR_DAT_00baa138 = 0;
  puVar1 = PTR_DAT_00baa088;
  *(undefined4 *)PTR_DAT_00baa088 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1 = PTR_DAT_00baac74;
  *(undefined4 *)PTR_DAT_00baac74 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1 = PTR_DAT_00baa688;
  *(undefined4 *)PTR_DAT_00baa688 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1 = PTR_DAT_00ba9a74;
  *(undefined4 *)PTR_DAT_00ba9a74 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1 = PTR_DAT_00baa030;
  *(undefined4 *)PTR_DAT_00baa030 = 0xcccccccd;
  *(undefined4 *)(puVar1 + 4) = 0x3feccccc;
  puVar1 = PTR_DAT_00baac1c;
  *(undefined4 *)PTR_DAT_00baac1c = 0xcccccccd;
  *(undefined4 *)(puVar1 + 4) = 0x3feccccc;
  puVar1 = PTR_DAT_00baaeac;
  *(undefined4 *)PTR_DAT_00baaeac = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1 = PTR_DAT_00baa38c;
  *(undefined4 *)PTR_DAT_00baa38c = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1 = PTR_DAT_00baad54;
  *(undefined4 *)PTR_DAT_00baad54 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1 = PTR_DAT_00ba9b6c;
  *(undefined4 *)PTR_DAT_00ba9b6c = 0xcccccccd;
  *(undefined4 *)(puVar1 + 4) = 0x3feccccc;
  return;
}



// === FUN_007ac090 @ 007ac090 size:250 ===

void FUN_007ac090(void)

{
  int iVar1;
  float10 in_ST0;
  float10 in_ST1;
  double in_stack_00000004;
  double in_stack_0000000c;
  double in_stack_00000014;
  double in_stack_0000001c;
  double in_stack_00000024;
  
  iVar1 = *(int *)PTR_DAT_00baa138;
  *(int *)PTR_DAT_00baa138 = *(int *)PTR_DAT_00baa138 + 1;
  if (SCARRY4(iVar1,1)) {
    thunk_FUN_004072dc();
  }
  *(double *)PTR_DAT_00baa088 = *(double *)PTR_DAT_00baa088 + in_stack_0000001c;
  *(double *)PTR_DAT_00baac74 = *(double *)PTR_DAT_00baac74 + in_stack_00000014;
  *(double *)PTR_DAT_00baa688 = in_stack_0000000c * in_stack_0000000c + *(double *)PTR_DAT_00baa688;
  *(double *)PTR_DAT_00ba9a74 = in_stack_00000004 * in_stack_00000004 + *(double *)PTR_DAT_00ba9a74;
  *(double *)PTR_DAT_00baad54 = *(double *)PTR_DAT_00baad54 + in_stack_00000024;
  *(double *)PTR_DAT_00baa030 = *(double *)PTR_DAT_00baa088 / (double)*(int *)PTR_DAT_00baa138;
  *(double *)PTR_DAT_00baac1c = *(double *)PTR_DAT_00baac74 / (double)*(int *)PTR_DAT_00baa138;
  FUN_00407bbc();
  *(double *)PTR_DAT_00baaeac = (double)in_ST0;
  FUN_00407bbc();
  *(double *)PTR_DAT_00baa38c = (double)in_ST1;
  *(double *)PTR_DAT_00ba9b6c = *(double *)PTR_DAT_00baad54 / (double)*(int *)PTR_DAT_00baa138;
  return;
}



// === FUN_007b2d64 @ 007b2d64 size:147 ===

void FUN_007b2d64(void)

{
  FUN_00408364(PTR_DAT_00baa204,0x12168,0);
  FUN_00408364(PTR_DAT_00ba979c,0x90b4,0);
  FUN_00408364(PTR_DAT_00baa8d4,0x90b4,0);
  FUN_00408364(PTR_DAT_00ba9ef4,0x90b4,0);
  FUN_00408364(PTR_DAT_00baaa38,0xf810,0);
  FUN_00408364(PTR_DAT_00baa1b8,0xf810,0);
  FUN_00408364(PTR_DAT_00baa8a4,0x90,0);
  FUN_00408364(PTR_DAT_00ba9eb0,0x90,0);
  FUN_007b2bfc();
  FUN_007b2d50();
  return;
}



// === FUN_007b4e48 @ 007b4e48 size:313 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b4e48(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  switch(DAT_00c5ae30) {
  case 0:
    FUN_007b4d84(param_1,param_2,param_3,param_4,param_5);
    break;
  case 1:
    break;
  case 2:
    FUN_0044abc8();
    break;
  case 3:
    FUN_0044abc8();
    break;
  case 4:
    FUN_007b4a64(param_1,param_2,param_3,param_4,param_5);
    break;
  case 5:
    FUN_007b4c08(param_1,param_2,param_3,param_4,param_5);
    break;
  case 6:
    FUN_007b4dec();
    break;
  case 7:
    FUN_007b4e2c();
  }
  return;
}



// === FUN_007b568c @ 007b568c size:466 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b568c(ushort param_1,double *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  uint uVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar8;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar9;
  double in_stack_0000000c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  ushort local_e;
  
  puStack_30 = &stack0xfffffffc;
  puStack_34 = &LAB_007b5855;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  if (param_1 < 4) {
    if (param_1 == 3) {
      _DAT_00c505e4 = 6.0;
    }
    else {
      _DAT_00c505e4 = 1.0;
    }
  }
  else {
    _DAT_00c505e4 = in_stack_0000000c * *param_2;
    if (_DAT_00c505e4 < 1.0) {
      _DAT_00c505e4 = 1.0;
    }
  }
  fVar9 = in_ST6;
  FUN_00b18dac();
  _DAT_00c505ec = (double)in_ST0;
  local_e = 1;
  do {
    uVar6 = (uint)local_e;
    fVar8 = in_ST1;
    fVar1 = in_ST2;
    fVar2 = in_ST3;
    fVar3 = in_ST4;
    fVar4 = in_ST5;
    fVar5 = in_ST6;
    if (0x32 < uVar6) {
      uVar6 = thunk_FUN_004072dc();
      fVar8 = in_ST1;
      fVar1 = in_ST2;
      fVar2 = in_ST3;
      fVar3 = in_ST4;
      fVar4 = in_ST5;
      fVar5 = in_ST6;
    }
    in_ST6 = fVar9;
    in_ST5 = fVar5;
    in_ST4 = fVar4;
    in_ST3 = fVar3;
    in_ST2 = fVar2;
    in_ST1 = fVar1;
    iVar7 = (int)((longlong)(int)uVar6 * 0xd3);
    if ((longlong)iVar7 != (longlong)(int)uVar6 * 0xd3) {
      iVar7 = thunk_FUN_004072dc();
    }
    iVar7 = iVar7 * 4;
    if (param_1 < 3) {
      *(undefined4 *)(&DAT_00c505e4 + iVar7) = *(undefined4 *)(&DAT_00c505d4 + iVar7);
      *(undefined4 *)(&DAT_00c505e8 + iVar7) = *(undefined4 *)(&DAT_00c505d8 + iVar7);
    }
    else {
      *(double *)(&DAT_00c505e4 + iVar7) =
           *(double *)(&DAT_00c505e4 + iVar7) * *(double *)(&DAT_00c505dc + iVar7);
      if (*(double *)(&DAT_00c505e4 + iVar7) < 1.0) {
        *(undefined8 *)(&DAT_00c505e4 + iVar7) = 0x3ff0000000000000;
      }
    }
    fVar9 = in_ST6;
    FUN_00b18dac();
    *(double *)(&DAT_00c505ec + iVar7) = (double)fVar8;
    local_e = local_e + 1;
  } while (local_e != 0x15);
  if (param_1 < 3) {
    _DAT_00c57948 = (double)CONCAT44(DAT_00c5793c,DAT_00c57938);
  }
  else {
    _DAT_00c57948 = _DAT_00c57948 * _DAT_00c57940;
    if (_DAT_00c57948 < 1.0) {
      _DAT_00c57948 = 1.0;
    }
  }
  FUN_00b18dac();
  _DAT_00c57950 = (double)in_ST1;
  FUN_00407680();
  _DAT_00c572b8 = (double)in_ST2;
  *in_FS_OFFSET = uStack_38;
  return;
}



// === FUN_007b58e8 @ 007b58e8 size:391 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b58e8(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  float10 in_ST0;
  float10 fVar10;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  ushort local_8;
  
  _DAT_00c57604 = param_4;
  _DAT_00c57608 = param_5;
  local_8 = 0;
  do {
    uVar8 = (uint)local_8;
    if (0x32 < uVar8) {
      uVar8 = thunk_FUN_004072dc();
    }
    iVar9 = (int)((longlong)(int)uVar8 * 0xd3);
    if ((longlong)iVar9 != (longlong)(int)uVar8 * 0xd3) {
      iVar9 = thunk_FUN_004072dc();
    }
    iVar9 = iVar9 * 4;
    uVar7 = FUN_0070fc44();
    uVar7 = uVar7 & 0xff;
    FUN_007b4e48(CONCAT31((int3)((uint)(&DAT_00c505d0 + iVar9) >> 8),param_1));
    uVar8 = uVar7 - 1;
    if (0x13 < uVar8) {
      uVar8 = thunk_FUN_004072dc();
    }
    fVar10 = in_ST0 + (float10)*(double *)(iVar9 + 0xc5063c + (uVar8 + 1) * 8);
    uVar8 = uVar7 - 1;
    in_ST0 = in_ST1;
    fVar2 = in_ST2;
    fVar3 = in_ST3;
    fVar4 = in_ST4;
    fVar5 = in_ST5;
    fVar6 = in_ST6;
    if (0x13 < uVar8) {
      uVar8 = thunk_FUN_004072dc();
      in_ST0 = in_ST1;
      fVar2 = in_ST2;
      fVar3 = in_ST3;
      fVar4 = in_ST4;
      fVar5 = in_ST5;
      fVar6 = in_ST6;
    }
    in_ST6 = in_ST7;
    in_ST5 = fVar6;
    in_ST4 = fVar5;
    in_ST3 = fVar4;
    in_ST2 = fVar3;
    in_ST1 = fVar2;
    *(double *)(iVar9 + 0xc5063c + (uVar8 + 1) * 8) = (double)fVar10;
    uVar8 = uVar7 - 1;
    in_ST7 = in_ST6;
    if (0x13 < uVar8) {
      uVar8 = thunk_FUN_004072dc();
    }
    piVar1 = (int *)(&DAT_00c505f0 + (uVar8 + 1) * 4 + iVar9);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar9,1)) {
      thunk_FUN_004072dc();
    }
    local_8 = local_8 + 1;
  } while (local_8 != 0x24);
  local_8 = 0;
  do {
    uVar8 = (uint)local_8;
    if (0x32 < uVar8) {
      uVar8 = thunk_FUN_004072dc();
    }
    iVar9 = (int)((longlong)(int)uVar8 * 0xd3);
    if ((longlong)iVar9 != (longlong)(int)uVar8 * 0xd3) {
      iVar9 = thunk_FUN_004072dc();
    }
    iVar9 = iVar9 * 4;
    uVar7 = FUN_0070fc44();
    uVar7 = uVar7 & 0xff;
    FUN_007b4e48(CONCAT31((int3)((uint)(&DAT_00c505d0 + iVar9) >> 8),param_1));
    uVar8 = uVar7 - 1;
    if (0x13 < uVar8) {
      uVar8 = thunk_FUN_004072dc();
    }
    fVar10 = in_ST0 + (float10)*(double *)(iVar9 + 0xc507cc + (uVar8 + 1) * 8);
    uVar8 = uVar7 - 1;
    in_ST0 = in_ST1;
    fVar2 = in_ST2;
    fVar3 = in_ST3;
    fVar4 = in_ST4;
    fVar5 = in_ST5;
    fVar6 = in_ST6;
    if (0x13 < uVar8) {
      uVar8 = thunk_FUN_004072dc();
      in_ST0 = in_ST1;
      fVar2 = in_ST2;
      fVar3 = in_ST3;
      fVar4 = in_ST4;
      fVar5 = in_ST5;
      fVar6 = in_ST6;
    }
    in_ST6 = in_ST7;
    in_ST5 = fVar6;
    in_ST4 = fVar5;
    in_ST3 = fVar4;
    in_ST2 = fVar3;
    in_ST1 = fVar2;
    *(double *)(iVar9 + 0xc507cc + (uVar8 + 1) * 8) = (double)fVar10;
    uVar8 = uVar7 - 1;
    in_ST7 = in_ST6;
    if (0x13 < uVar8) {
      uVar8 = thunk_FUN_004072dc();
    }
    piVar1 = (int *)(iVar9 + 0xc50780 + (uVar8 + 1) * 4);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar9,1)) {
      thunk_FUN_004072dc();
    }
    local_8 = local_8 + 1;
  } while (local_8 != 0x24);
  return;
}



// === FUN_007b87b4 @ 007b87b4 size:133 ===

void FUN_007b87b4(ushort param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  double local_24;
  uint local_1c;
  undefined4 local_18;
  double local_14;
  undefined4 local_c;
  ushort local_6;
  
  puStack_28 = &stack0xfffffffc;
  puStack_34 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_007b8856;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_38 = &LAB_007b8839;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_1c = (uint)param_1;
  local_24 = (double)local_1c;
  local_c = param_2;
  local_6 = param_1;
  FUN_007b90c0();
  local_14 = (double)in_ST0;
  FUN_0042d430(L"mmm d, yyyy, ddd",PTR_DAT_00baa920,&local_18,local_14);
  FUN_0040c9a8(local_c,local_18);
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_007b8840;
  puStack_38 = (undefined1 *)0x7b8838;
  FUN_0040c5c8(&local_18,uStack_3c,puVar1);
  return;
}



// === FUN_007b8be0 @ 007b8be0 size:40 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b8be0(void)

{
  FUN_00407b28();
  return;
}



// === FUN_007b90c0 @ 007b90c0 size:33 ===

void FUN_007b90c0(void)

{
  return;
}



// === FUN_007b9844 @ 007b9844 size:150 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b9844(int param_1,byte param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_8;
  
  puStack_1c = (undefined1 *)0x7b9859;
  local_8 = param_1;
  FUN_0040f4e8(param_1);
  puStack_20 = &LAB_007b98da;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar2 = param_2 - 1;
  puStack_1c = &stack0xfffffffc;
  if (SBORROW4((uint)param_2,1)) {
    puStack_1c = &stack0xfffffffc;
    uVar2 = thunk_FUN_004072dc();
  }
  if ((local_8 == 0) || (*(uint *)(local_8 + -4) <= uVar2)) {
    thunk_FUN_004072dc();
  }
  uVar2 = param_2 - 1;
  if (SBORROW4((uint)param_2,1)) {
    thunk_FUN_004072dc();
    uVar2 = extraout_ECX;
  }
  if ((local_8 == 0) || (*(uint *)(local_8 + -4) <= uVar2)) {
    thunk_FUN_004072dc();
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_007b98e1;
  puStack_20 = (undefined1 *)0x7b98d9;
  FUN_0040f468(&local_8,PTR_DAT_007b6ba8,puVar1);
  return;
}



// === FUN_007b9a1c @ 007b9a1c size:30 ===

undefined4 FUN_007b9a1c(void)

{
  double dVar1;
  double in_stack_00000004;
  
  dVar1 = *(double *)PTR_DAT_00baa84c;
  return CONCAT31((int3)(CONCAT22((short)((uint)PTR_DAT_00baa84c >> 0x10),
                                  (ushort)(in_stack_00000004 < dVar1) << 8 |
                                  (ushort)(NAN(in_stack_00000004) || NAN(dVar1)) << 10 |
                                  (ushort)(in_stack_00000004 == dVar1) << 0xe) >> 8),
                  in_stack_00000004 < dVar1 == 0 && (in_stack_00000004 == dVar1) == 0);
}



// === FUN_007ba06c @ 007ba06c size:138 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ba06c(void)

{
  double in_stack_00000004;
  double in_stack_0000000c;
  
  if (((in_stack_0000000c != (double)_DAT_007ba0f8) && (in_stack_00000004 != (double)_DAT_007ba0f8))
     && ((*(double *)PTR_DAT_00baa84c < in_stack_0000000c ||
         (*(double *)PTR_DAT_00baa84c < in_stack_00000004)))) {
    FUN_00b2b8f8(L"Wrong overload version of GetSleepLength called");
  }
  return;
}



// === FUN_007ba294 @ 007ba294 size:242 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ba294(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_48;
  undefined4 in_stack_ffffffc0;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  double local_c;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0.0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_20 = &LAB_007ba386;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (((double)CONCAT44(param_7,param_6) == (double)_DAT_007ba398) ||
     ((double)CONCAT44(param_5,param_4) == (double)_DAT_007ba398)) {
    local_c = -1.0;
    puStack_1c = &stack0xfffffffc;
  }
  else if (((double)CONCAT44(param_7,param_6) < *(double *)PTR_DAT_00baa84c) ||
          ((double)CONCAT44(param_5,param_4) < *(double *)PTR_DAT_00baa84c)) {
    puStack_1c = &stack0xfffffffc;
    FUN_00b2b8f8(L"Wrong overload version of GetSleepLength called");
  }
  else if ((double)CONCAT44(param_7,param_6) <= (double)CONCAT44(param_5,param_4)) {
    local_c = ((double)CONCAT44(param_5,param_4) - (double)CONCAT44(param_7,param_6)) *
              (double)_DAT_007ba49c;
    puStack_1c = &stack0xfffffffc;
  }
  else {
    FUN_00b26b58(&local_14,param_2,0,param_4,param_5,L"Wake time before the retire time!\r\nWake: ")
    ;
    FUN_00b26b58(&local_18);
    uStackY_48 = local_18;
    FUN_0040d87c(&local_10,5);
    FUN_00b2b8f8(local_10);
    in_stack_ffffffc0 = param_7;
  }
  *in_FS_OFFSET = uStackY_48;
  FUN_0040c628(&local_18,3,in_stack_ffffffc0,&LAB_007ba38d);
  return;
}



// === FUN_007ba5d0 @ 007ba5d0 size:1142 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ba5d0(undefined4 param_1,char param_2,double *param_3,uint *param_4,double *param_5,
                 double *param_6,double *param_7,double *param_8,double param_9,double param_10,
                 undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  ushort uVar10;
  char cVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined2 extraout_var;
  int extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *in_FS_OFFSET;
  bool bVar20;
  byte bVar21;
  float10 in_ST0;
  float10 fVar22;
  float10 fVar23;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar24;
  float10 fVar25;
  undefined4 uStackY_8c;
  undefined4 uVar26;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 local_5c;
  undefined4 local_58;
  double local_54;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  short local_36;
  double local_34;
  double local_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  uint local_18;
  ushort local_14;
  ushort local_12;
  double *local_10;
  char local_9;
  undefined4 local_8;
  
  bVar21 = 0;
  puStack_6c = &stack0xfffffffc;
  local_58 = 0;
  local_5c = 0;
  local_18 = 0;
  puStack_70 = &LAB_007baa88;
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  puStack_78 = (undefined1 *)0x7ba609;
  local_10 = param_3;
  local_9 = param_2;
  local_8 = param_1;
  FUN_0040f468(param_4,PTR_DAT_007b6ba8);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((int)local_10 + 4) = 0xbff00000;
  *(undefined4 *)param_8 = 0;
  *(undefined4 *)((int)param_8 + 4) = 0xbff00000;
  *(undefined4 *)param_7 = 0;
  *(undefined4 *)((int)param_7 + 4) = 0xbff00000;
  *(undefined4 *)param_6 = 0;
  *(undefined4 *)((int)param_6 + 4) = 0;
  *(undefined4 *)param_5 = 0;
  *(undefined4 *)((int)param_5 + 4) = 0;
  puStack_7c = &LAB_007baa1d;
  uStack_80 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_80;
  uVar26 = param_12;
  puStack_78 = &stack0xfffffffc;
  local_12 = FUN_007bc964();
  uStackY_8c = 0x7ba670;
  cVar11 = FUN_007b7ec4(local_8,CONCAT22(extraout_var,local_12));
  if (cVar11 == '\0') {
    local_24 = param_11;
    uStack_20 = param_12;
    dVar2 = (double)CONCAT44(param_12,param_11) - param_10 / (double)_DAT_007baa98;
    fVar24 = in_ST6;
    local_2c = dVar2;
    uVar13 = FUN_007bc964();
    fVar22 = in_ST0;
    if ((int)(uVar13 & 0xffff) < *(int *)(DAT_00c5ae34 + 5)) {
      local_54 = (double)*(int *)(DAT_00c5ae34 + 5);
      fVar22 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      FUN_007b90c0();
      local_2c = (double)in_ST0;
      fVar24 = in_ST6;
    }
    while( true ) {
      uStackY_8c = (undefined4)((ulonglong)dVar2 >> 0x20);
      uVar13 = local_12 - 1;
      if (SBORROW4((uint)local_12,1)) {
        uVar13 = thunk_FUN_004072dc();
      }
      iVar14 = *(int *)(DAT_00c5ae34 + 9);
      if ((iVar14 == 0) || (*(uint *)(iVar14 + -4) <= uVar13)) {
        uVar13 = thunk_FUN_004072dc();
        iVar14 = extraout_EDX;
      }
      FUN_007b8fac(*(undefined4 *)(iVar14 + uVar13 * 4),&local_18);
      if (local_9 != '\0') {
        fVar22 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        in_ST6 = fVar24;
        FUN_007d1ed0();
        fVar24 = in_ST6;
        FUN_007b8c0c(&local_18);
      }
      local_40 = local_18;
      if (local_18 != 0) {
        local_40 = *(uint *)(local_18 - 4);
      }
      uVar13 = local_40;
      if (0xffff < local_40) {
        uVar13 = thunk_FUN_004072dc();
      }
      uVar10 = (ushort)uVar13;
      uVar12 = local_14;
      while (local_14 = uVar10, local_14 != 0) {
        if (0xff < local_14) {
          thunk_FUN_004072dc();
        }
        FUN_007b9844(local_18);
        bVar20 = (float10)param_9 <= fVar22;
        fVar22 = in_ST1;
        if (bVar20) {
          uVar13 = local_14 - 1;
          if (SBORROW4((uint)local_14,1)) {
            uVar13 = thunk_FUN_004072dc();
          }
          if ((local_18 == 0) || (uVar15 = local_18, *(uint *)(local_18 - 4) <= uVar13)) {
            uVar13 = thunk_FUN_004072dc();
            uVar15 = extraout_EDX_00;
          }
          fVar22 = in_ST1;
          if (*(double *)(uVar15 + 8 + uVar13 * 0x12) <= (double)CONCAT44(uStack_20,local_24)) {
            uVar13 = local_14 - 1;
            if (SBORROW4((uint)local_14,1)) {
              uVar13 = thunk_FUN_004072dc();
            }
            if ((local_18 == 0) || (uVar15 = local_18, *(uint *)(local_18 - 4) <= uVar13)) {
              uVar13 = thunk_FUN_004072dc();
              uVar15 = extraout_EDX_01;
            }
            fVar22 = in_ST1;
            if (local_2c < *(double *)(uVar15 + 8 + uVar13 * 0x12)) {
              local_44 = *param_4;
              if (local_44 != 0) {
                local_44 = *(uint *)(local_44 - 4);
              }
              if (SCARRY4(local_44,1)) {
                thunk_FUN_004072dc();
              }
              FUN_0040f344(param_4,PTR_DAT_007b6ba8,1);
              local_48 = *param_4;
              if (local_48 != 0) {
                local_48 = *(uint *)(local_48 - 4);
              }
              uVar13 = local_14 - 1;
              if (SBORROW4((uint)local_14,1)) {
                uVar13 = thunk_FUN_004072dc();
              }
              if ((local_18 == 0) || (uVar15 = local_18, *(uint *)(local_18 - 4) <= uVar13)) {
                uVar13 = thunk_FUN_004072dc();
                uVar15 = extraout_EDX_02;
              }
              iVar14 = uVar13 * 9;
              uVar13 = local_48 - 1;
              if (SBORROW4(local_48,1)) {
                iVar14 = thunk_FUN_004072dc();
                uVar13 = extraout_ECX;
                uVar15 = extraout_EDX_03;
              }
              uVar1 = *param_4;
              if ((uVar1 == 0) || (*(uint *)(uVar1 - 4) <= uVar13)) {
                iVar14 = thunk_FUN_004072dc();
                uVar13 = extraout_ECX_00;
                uVar15 = extraout_EDX_04;
              }
              puVar17 = (undefined4 *)(uVar15 + iVar14 * 2);
              puVar19 = (undefined4 *)(uVar1 + uVar13 * 0x12);
              puVar18 = puVar19 + (uint)bVar21 * -2 + 1;
              puVar16 = puVar17 + (uint)bVar21 * -2 + 1;
              *puVar19 = *puVar17;
              puVar19 = puVar18 + (uint)bVar21 * -2 + 1;
              puVar17 = puVar16 + (uint)bVar21 * -2 + 1;
              *puVar18 = *puVar16;
              *puVar19 = *puVar17;
              puVar19[(uint)bVar21 * -2 + 1] = puVar17[(uint)bVar21 * -2 + 1];
              *(undefined2 *)(puVar19 + (uint)bVar21 * -2 + 1 + (uint)bVar21 * -2 + 1) =
                   *(undefined2 *)(puVar17 + (uint)bVar21 * -2 + 1 + (uint)bVar21 * -2 + 1);
              if (*local_10 == (double)_DAT_007baa9c) {
                uVar13 = local_14 - 1;
                if (SBORROW4((uint)local_14,1)) {
                  uVar13 = thunk_FUN_004072dc();
                }
                if ((local_18 == 0) || (uVar15 = local_18, *(uint *)(local_18 - 4) <= uVar13)) {
                  uVar13 = thunk_FUN_004072dc();
                  uVar15 = extraout_EDX_05;
                }
                *(undefined4 *)local_10 = *(undefined4 *)(uVar15 + 8 + uVar13 * 0x12);
                *(undefined4 *)((int)local_10 + 4) = *(undefined4 *)(uVar15 + 0xc + uVar13 * 0x12);
              }
              if (*param_8 == (double)_DAT_007baa9c) {
                uVar13 = local_14 - 1;
                if (SBORROW4((uint)local_14,1)) {
                  uVar13 = thunk_FUN_004072dc();
                }
                if ((local_18 == 0) || (uVar15 = local_18, *(uint *)(local_18 - 4) <= uVar13)) {
                  uVar13 = thunk_FUN_004072dc();
                  uVar15 = extraout_EDX_06;
                }
                *(undefined4 *)param_8 = *(undefined4 *)(uVar15 + uVar13 * 0x12);
                *(undefined4 *)((int)param_8 + 4) = *(undefined4 *)(uVar15 + 4 + uVar13 * 0x12);
              }
              fVar22 = in_ST1;
              if (*param_7 == (double)_DAT_007baa9c) {
                fVar22 = in_ST2;
                fVar23 = in_ST3;
                fVar5 = in_ST4;
                fVar6 = in_ST5;
                fVar7 = in_ST6;
                fVar25 = fVar24;
                if (0xff < local_14) {
                  thunk_FUN_004072dc();
                  fVar22 = in_ST2;
                  fVar23 = in_ST3;
                  fVar5 = in_ST4;
                  fVar6 = in_ST5;
                  fVar7 = in_ST6;
                  fVar25 = fVar24;
                  fVar24 = fVar25;
                }
                in_ST6 = fVar25;
                in_ST5 = fVar7;
                in_ST4 = fVar6;
                in_ST3 = fVar5;
                in_ST2 = fVar23;
                FUN_007b9844(local_18);
                *param_7 = (double)in_ST1;
              }
            }
          }
        }
        uVar12 = local_14 - 1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        in_ST6 = fVar24;
        uVar10 = uVar12;
      }
      uVar4 = local_2c._0_4_;
      dVar3 = (double)CONCAT44(uStackY_8c,local_2c._0_4_);
      dVar2 = (double)CONCAT44(uStackY_8c,local_2c._0_4_);
      local_14 = uVar12;
      uVar12 = FUN_007bc964();
      if (local_12 <= uVar12) break;
      bVar20 = local_12 == 0;
      local_12 = local_12 - 1;
      if (bVar20) {
        thunk_FUN_004072dc();
        dVar2 = dVar3;
      }
    }
    if (local_9 != '\0') {
      fVar22 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      in_ST6 = fVar24;
      FUN_007d1ed0();
      fVar24 = in_ST6;
      FUN_007b8c0c(param_4);
    }
    local_4c = *param_4;
    if (local_4c != 0) {
      local_4c = *(uint *)(local_4c - 4);
    }
    uVar13 = local_4c;
    if (0xffff < local_4c) {
      uVar13 = thunk_FUN_004072dc();
    }
    if ((short)uVar13 != 0) {
      local_14 = 1;
      local_36 = (short)uVar13;
      do {
        fVar23 = fVar22;
        fVar5 = in_ST1;
        fVar6 = in_ST2;
        fVar7 = in_ST3;
        fVar25 = in_ST4;
        fVar8 = in_ST5;
        fVar9 = in_ST6;
        if (0xff < local_14) {
          thunk_FUN_004072dc();
          fVar23 = fVar22;
          fVar5 = in_ST1;
          fVar6 = in_ST2;
          fVar7 = in_ST3;
          fVar25 = in_ST4;
          fVar8 = in_ST5;
          fVar9 = in_ST6;
        }
        in_ST6 = fVar24;
        in_ST5 = fVar9;
        in_ST4 = fVar8;
        in_ST3 = fVar25;
        in_ST2 = fVar7;
        in_ST1 = fVar6;
        fVar22 = fVar5;
        FUN_007b9844(*param_4);
        local_34 = (double)fVar23;
        if (local_34 <= (double)_DAT_007baaa0) {
          *param_5 = *param_5 + local_34;
        }
        else {
          *param_6 = *param_6 + local_34;
        }
        local_14 = local_14 + 1;
        local_36 = local_36 + -1;
        fVar24 = in_ST6;
      } while (local_36 != 0);
    }
    *in_FS_OFFSET = uVar4;
  }
  else {
    *in_FS_OFFSET = param_11;
  }
  *in_FS_OFFSET = uStackY_8c;
  FUN_0040c628(&local_5c,2,uVar26,&LAB_007baa8f);
  FUN_0040f468(&local_18,PTR_DAT_007b6ba8);
  return;
}



// === FUN_007bbe48 @ 007bbe48 size:410 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_007bbe48(ushort param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  double dVar1;
  uint uVar2;
  undefined2 uVar4;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined4 uVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar6;
  float10 in_ST0;
  int local_30;
  undefined1 local_2c [8];
  undefined8 local_24;
  undefined8 local_1c;
  double local_14;
  ushort local_6;
  
  local_14 = 0.0;
  uVar2 = param_1 - 1;
  local_6 = param_1;
  if (SBORROW4((uint)param_1,1)) {
    uVar2 = thunk_FUN_004072dc();
  }
  iVar6 = *(int *)PTR_DAT_00baa6dc;
  if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= uVar2)) {
    uVar2 = thunk_FUN_004072dc();
    iVar6 = extraout_EDX;
  }
  uVar5 = *(undefined4 *)(iVar6 + 0xe + uVar2 * 0x92);
  local_1c = (double)CONCAT44(uVar5,*(undefined4 *)(iVar6 + 10 + uVar2 * 0x92));
  local_14 = ((double)CONCAT44(param_5,param_4) - local_1c) * (double)_DAT_007bbfe4;
  uVar4 = (undefined2)(uVar2 * 0x49 >> 0x10);
  uVar3 = CONCAT22(uVar4,(ushort)(0.0 < local_14) << 8 | (ushort)NAN(local_14) << 10 |
                         (ushort)(local_14 == 0.0) << 0xe);
  if ((local_14 == 0.0) == 0) {
    uVar3 = CONCAT22(uVar4,(ushort)(0.0 < local_14) << 8 | (ushort)NAN(local_14) << 10 |
                           (ushort)(local_14 == 0.0) << 0xe);
    if (0.0 < local_14 || (local_14 == 0.0) != 0) {
      dVar1 = (double)_DAT_007bbfe4;
      uVar3 = CONCAT22(uVar4,(ushort)(local_14 < dVar1) << 8 |
                             (ushort)(NAN(local_14) || NAN(dVar1)) << 10 |
                             (ushort)(local_14 == dVar1) << 0xe);
      if (local_14 >= dVar1) {
        local_30 = *(int *)PTR_DAT_00baa6dc;
        if (local_30 != 0) {
          local_30 = *(int *)(local_30 + -4);
        }
        if ((int)(uint)local_6 < local_30) {
          uVar2 = (uint)local_6;
          iVar6 = *(int *)PTR_DAT_00baa6dc;
          if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= uVar2)) {
            uVar2 = thunk_FUN_004072dc();
            iVar6 = extraout_EDX_00;
          }
          uVar5 = *(undefined4 *)(iVar6 + 0xe + uVar2 * 0x92);
          local_1c = (double)CONCAT44(uVar5,*(undefined4 *)(iVar6 + 10 + uVar2 * 0x92));
          local_24 = ((double)CONCAT44(param_5,param_4) - local_1c) * (double)_DAT_007bbfe4;
          if ((0.0 < local_24) && (local_24 < (double)_DAT_007bbfe4)) {
            local_24._4_4_ = (undefined4)((ulonglong)local_24 >> 0x20);
            return local_24._4_4_;
          }
        }
        FUN_007ce0f4(local_2c,0,uVar5,0,0,param_4,param_5);
        dVar1 = ((double)CONCAT44(param_5,param_4) - (double)in_ST0) * (double)_DAT_007bbfe4;
        local_24._6_2_ = extraout_var;
        if (dVar1 < local_14) {
          local_24._6_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
          local_14 = dVar1;
        }
        dVar1 = (double)_DAT_007bbfe4;
        uVar3 = CONCAT22(local_24._6_2_,
                         (ushort)(local_14 < dVar1) << 8 |
                         (ushort)(NAN(local_14) || NAN(dVar1)) << 10 |
                         (ushort)(local_14 == dVar1) << 0xe);
      }
    }
    else if (1 < local_6) {
      uVar2 = local_6 - 1;
      if (SBORROW4((uint)local_6,1)) {
        uVar2 = thunk_FUN_004072dc();
      }
      if (0xffff < uVar2) {
        thunk_FUN_004072dc();
      }
      uVar3 = FUN_007bbe48();
    }
  }
  return uVar3;
}



// === FUN_007bc964 @ 007bc964 size:154 ===

void FUN_007bc964(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  uint local_c;
  undefined2 local_6;
  
  puStack_28 = &stack0xfffffffc;
  puStack_34 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_007bca46;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  local_6 = 1;
  puStack_38 = &LAB_007bc9e3;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_c = FUN_00407bd8();
  if ((int)local_c >> 0x1f != extraout_EDX) {
    local_c = thunk_FUN_004072dc();
  }
  if ((int)local_c < 0) {
    local_c = 0;
  }
  uVar2 = local_c;
  if (0xffff < local_c) {
    uVar2 = thunk_FUN_004072dc();
  }
  puVar1 = puStack_28;
  local_6 = (undefined2)uVar2;
  *in_FS_OFFSET = uStack_3c;
  *in_FS_OFFSET = local_30;
  puStack_28 = &LAB_007bca4d;
  puStack_2c = (undefined1 *)0x7bca45;
  FUN_0040c628(&local_18,2,puVar1);
  return;
}



// === FUN_007bffcc @ 007bffcc size:316 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007bffcc(ushort param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  char cVar4;
  uint uVar5;
  undefined2 extraout_var;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  undefined4 uStack_40;
  undefined2 uStack_36;
  double local_34;
  ushort local_6;
  
  cVar4 = FUN_007bfee8();
  if (cVar4 == '\0') {
    local_6 = param_1;
    if ((int)(uint)param_1 < *(int *)(*(int *)PTR_DAT_00ba9b10 + 5)) {
      uVar5 = *(uint *)(*(int *)PTR_DAT_00ba9b10 + 5);
      if (0xffff < uVar5) {
        uVar5 = thunk_FUN_004072dc();
      }
      local_6 = (ushort)uVar5;
    }
    FUN_007bf640(local_6);
    fVar1 = (float10)_DAT_007c0108;
    uVar5 = local_6 - 1;
    if (SBORROW4((uint)local_6,1)) {
      uVar5 = thunk_FUN_004072dc();
    }
    if (0xffff < uVar5) {
      thunk_FUN_004072dc();
    }
    FUN_007bf640();
    fVar2 = (float10)_DAT_007c0108;
    uVar5 = local_6 + 1;
    if (SCARRY4((uint)local_6,1)) {
      uVar5 = thunk_FUN_004072dc();
    }
    if (0xffff < uVar5) {
      thunk_FUN_004072dc();
    }
    FUN_007bf640();
    local_34 = ABS((double)(in_ST0 + fVar1) - param_4);
    dVar3 = (param_4 + (double)_DAT_007c010c) - (double)(in_ST1 + fVar2);
    param_4 = ((double)(in_ST2 + (float10)_DAT_007c0108) + (double)_DAT_007c010c) - param_4;
    uStack_36 = extraout_var;
    if (dVar3 < local_34) {
      uStack_36 = (undefined2)((ulonglong)dVar3 >> 0x30);
      local_34 = dVar3;
    }
    uStack_40 = CONCAT22(uStack_36,
                         (ushort)(param_4 < local_34) << 8 |
                         (ushort)(NAN(param_4) || NAN(local_34)) << 10 |
                         (ushort)(param_4 == local_34) << 0xe);
    if (param_4 < local_34 != 0) {
      uStack_40 = (undefined4)((ulonglong)param_4 >> 0x20);
    }
    FUN_00b21d6c(CONCAT31((int3)((uint)uStack_40 >> 8),1));
  }
  return;
}



// === FUN_007c011c @ 007c011c size:245 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c011c(ushort param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  int extraout_EDX;
  int iVar4;
  ushort local_6;
  
  cVar1 = FUN_007bfee8();
  if (cVar1 == '\0') {
    iVar4 = *(int *)PTR_DAT_00ba9b10;
    local_6 = param_1;
    uVar3 = extraout_ECX;
    if ((int)(uint)param_1 < *(int *)(iVar4 + 5)) {
      uVar2 = *(uint *)(*(int *)PTR_DAT_00ba9b10 + 5);
      if (0xffff < uVar2) {
        uVar2 = thunk_FUN_004072dc();
        iVar4 = extraout_EDX;
        uVar3 = extraout_ECX_00;
      }
      local_6 = (ushort)uVar2;
    }
    FUN_007c1000(local_6,iVar4,uVar3,param_4,param_5);
    FUN_007c0218(CONCAT22(extraout_var,local_6));
    FUN_007bffcc(CONCAT22(extraout_var_00,local_6));
    FUN_0044ac4c();
    FUN_00b21df4();
  }
  return;
}



// === FUN_007c0218 @ 007c0218 size:884 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c0218(ushort param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 **ppuVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  bool bVar9;
  float10 in_ST0;
  float10 fVar10;
  float10 fVar11;
  float10 in_ST1;
  float10 fVar12;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 fVar13;
  float10 fVar14;
  float10 in_ST5;
  float10 fVar15;
  float10 in_ST6;
  float10 fVar16;
  undefined2 auStack_202c [1018];
  undefined4 auStack_1838 [4];
  undefined1 *apuStack_1826 [504];
  undefined4 auStack_1044 [4];
  undefined1 *apuStack_1032 [1005];
  undefined8 uStack_7c;
  undefined1 *puStack_74;
  undefined4 auStack_58 [3];
  undefined1 *local_4a;
  undefined1 *apuStack_46 [3];
  int local_38;
  byte local_31;
  int local_30;
  undefined8 local_2c;
  undefined8 local_24;
  double local_1c;
  double local_14;
  ushort local_6;
  
  bVar8 = 0;
  puStack_74 = &stack0xfffffffc;
  local_38 = 0;
  uStack_7c._4_4_ = &LAB_007c058c;
  uStack_7c._0_4_ = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7c;
  local_14 = 0.6;
  local_6 = param_1;
  cVar2 = FUN_007bfee8();
  if ((cVar2 == '\0') && (*(int *)(*(int *)PTR_DAT_00ba9b10 + 5) <= (int)(uint)local_6)) {
    local_30 = local_6 - 3;
    if (SBORROW4((uint)local_6,3)) {
      local_30 = thunk_FUN_004072dc();
    }
    if (local_30 < *(int *)(*(int *)PTR_DAT_00ba9b10 + 5)) {
      local_30 = *(int *)(*(int *)PTR_DAT_00ba9b10 + 5);
    }
    fVar13 = in_ST6;
    FUN_007b90c0();
    local_24 = (double)in_ST0;
    FUN_007b90c0();
    local_2c = (double)((float10)param_4 / (float10)_DAT_007c05a0 + in_ST1);
    fVar14 = fVar13;
    cVar2 = FUN_007baaf4(*(undefined4 *)PTR_DAT_00ba9b10);
    if (cVar2 == '\0') {
      local_14 = 0.5;
    }
    else {
      local_14 = 0.9;
    }
    while( true ) {
      iVar3 = FUN_007b7654(*(undefined4 *)PTR_DAT_00ba9b10);
      if (iVar3 < local_30) break;
      auStack_58[1] = (undefined4)local_24;
      auStack_58[2] = local_24._4_4_;
      uVar4 = local_30 - 1;
      fVar10 = in_ST3;
      if (SBORROW4(local_30,1)) {
        uVar4 = thunk_FUN_004072dc();
        fVar10 = in_ST3;
      }
      iVar3 = *(int *)(*(int *)PTR_DAT_00ba9b10 + 9);
      if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar4)) {
        uVar4 = thunk_FUN_004072dc();
        iVar3 = extraout_EDX;
      }
      FUN_007b8fac(*(undefined4 *)(iVar3 + uVar4 * 4),&local_38);
      local_31 = 1;
      while( true ) {
        iVar3 = FUN_0040efa0(local_38);
        if (iVar3 < (int)(uint)local_31) break;
        uVar4 = local_31 - 1;
        fVar11 = in_ST5;
        if (SBORROW4((uint)local_31,1)) {
          uVar4 = thunk_FUN_004072dc();
          fVar11 = in_ST5;
        }
        if ((local_38 == 0) || (iVar3 = local_38, *(uint *)(local_38 + -4) <= uVar4)) {
          uVar4 = thunk_FUN_004072dc();
          iVar3 = extraout_EDX_00;
        }
        puVar6 = (undefined4 *)(iVar3 + uVar4 * 0x12);
        puVar5 = puVar6 + (uint)bVar8 * -2 + 1;
        local_4a = (undefined1 *)*puVar6;
        ppuVar7 = apuStack_46 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1;
        puVar6 = puVar5 + (uint)bVar8 * -2 + 1;
        apuStack_46[(uint)bVar8 * -2] = (undefined1 *)*puVar5;
        *ppuVar7 = (undefined1 *)*puVar6;
        ppuVar7[(uint)bVar8 * -2 + 1] = (undefined1 *)puVar6[(uint)bVar8 * -2 + 1];
        *(undefined2 *)(ppuVar7 + (uint)bVar8 * -2 + 1 + (uint)bVar8 * -2 + 1) =
             *(undefined2 *)(puVar6 + (uint)bVar8 * -2 + 1 + (uint)bVar8 * -2 + 1);
        if (local_2c < (double)CONCAT44(apuStack_46[0],local_4a)) {
          uStack_7c._0_4_ = (undefined4)local_2c;
          FUN_007ba294();
          local_1c = (double)in_ST2;
          puStack_74 = local_14._0_4_;
          uStack_7c = local_1c;
          FUN_007bffa0();
          local_14 = (double)fVar10;
          goto LAB_007c0570;
        }
        in_ST5 = fVar14;
        FUN_007ba294();
        local_1c = (double)in_ST2;
        puStack_74 = local_14._0_4_;
        in_ST2 = in_ST6;
        in_ST6 = in_ST5;
        uStack_7c = local_1c;
        FUN_007bffa0();
        local_14 = (double)fVar10;
        fVar10 = fVar13;
        fVar13 = in_ST6;
        if ((double)CONCAT44(apuStack_46[2],apuStack_46[1]) <= local_2c) {
          puStack_74 = local_4a;
          uStack_7c._4_4_ = apuStack_46[2];
          uStack_7c._0_4_ = apuStack_46[1];
          FUN_007ba294();
          fVar15 = in_ST4;
        }
        else {
          puStack_74 = local_4a;
          uStack_7c._4_4_ = local_2c._4_4_;
          uStack_7c._0_4_ = (undefined4)local_2c;
          FUN_007ba294();
          fVar15 = in_ST4;
        }
        in_ST4 = fVar14;
        local_1c = (double)fVar15;
        fVar14 = fVar13;
        FUN_007bff6c();
        local_14 = (double)fVar11;
        if (local_2c < (double)CONCAT44(apuStack_46[2],apuStack_46[1])) goto LAB_007c0570;
        local_24 = (double)CONCAT44(apuStack_46[2],apuStack_46[1]);
        puVar6 = auStack_58 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1;
        ppuVar7 = apuStack_46 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1;
        auStack_58[(uint)bVar8 * -2] = apuStack_46[(uint)bVar8 * -2];
        *puVar6 = *ppuVar7;
        puVar6[(uint)bVar8 * -2 + 1] = ppuVar7[(uint)bVar8 * -2 + 1];
        *(undefined2 *)(puVar6 + (uint)bVar8 * -2 + 1 + (uint)bVar8 * -2 + 1) =
             *(undefined2 *)(ppuVar7 + (uint)bVar8 * -2 + 1 + (uint)bVar8 * -2 + 1);
        bVar9 = local_31 == 0xff;
        local_31 = local_31 + 1;
        if (bVar9) {
          thunk_FUN_004072dc();
        }
      }
      FUN_007b90c0();
      fVar12 = (float10)1 + in_ST2;
      in_ST2 = in_ST4;
      in_ST3 = in_ST5;
      fVar11 = in_ST6;
      fVar15 = fVar13;
      fVar16 = fVar14;
      if ((float10)(double)CONCAT44(auStack_58[2],auStack_58[1]) < fVar12) {
        in_ST2 = fVar13;
        in_ST3 = fVar14;
        FUN_007b90c0();
        fVar15 = fVar14;
        fVar13 = fVar14;
        if ((float10)1 + fVar10 <= (float10)local_2c) {
          fVar10 = in_ST6;
          FUN_00407b28();
          in_ST4 = (float10)_DAT_007c05a0 - in_ST4 * (float10)_DAT_007c05a0;
        }
        else {
          fVar10 = in_ST6;
          FUN_007ba294();
        }
        local_1c = (double)in_ST4;
        fVar16 = fVar13;
        FUN_007bffa0();
        local_14 = (double)in_ST5;
        fVar11 = fVar14;
        fVar14 = fVar13;
      }
      fVar13 = fVar16;
      in_ST6 = fVar14;
      in_ST5 = fVar15;
      in_ST4 = fVar11;
      bVar9 = SCARRY4(local_30,1);
      local_30 = local_30 + 1;
      if (bVar9) {
        thunk_FUN_004072dc();
      }
      fVar14 = fVar13;
      FUN_007b90c0();
      local_24 = (double)fVar10;
      if ((int)(uint)local_6 < local_30) goto LAB_007c0570;
    }
    uStack_7c._0_4_ = (undefined4)local_2c;
    FUN_007ba294();
    local_1c = (double)in_ST2;
    FUN_007bffa0();
    local_14 = (double)in_ST3;
  }
LAB_007c0570:
  puVar1 = puStack_74;
  *in_FS_OFFSET = (undefined4)uStack_7c;
  puStack_74 = &LAB_007c0593;
  uStack_7c._4_4_ = (undefined1 *)0x7c058b;
  FUN_0040f468(&local_38,PTR_DAT_007b6ba8,puVar1);
  return;
}



// === FUN_007c1000 @ 007c1000 size:290 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c1000(ushort param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  double dVar1;
  double dVar2;
  char cVar3;
  uint uVar4;
  undefined2 extraout_var;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  undefined4 uStack_40;
  undefined2 uStack_36;
  double local_34;
  ushort local_6;
  
  cVar3 = FUN_007bfee8();
  if (cVar3 == '\0') {
    local_6 = param_1;
    if ((int)(uint)param_1 < *(int *)(*(int *)PTR_DAT_00ba9b10 + 5)) {
      uVar4 = *(uint *)(*(int *)PTR_DAT_00ba9b10 + 5);
      if (0xffff < uVar4) {
        uVar4 = thunk_FUN_004072dc();
      }
      local_6 = (ushort)uVar4;
    }
    FUN_007bf640(local_6);
    uVar4 = local_6 - 1;
    if (SBORROW4((uint)local_6,1)) {
      uVar4 = thunk_FUN_004072dc();
    }
    if (0xffff < uVar4) {
      thunk_FUN_004072dc();
    }
    FUN_007bf640();
    uVar4 = local_6 + 1;
    if (SCARRY4((uint)local_6,1)) {
      uVar4 = thunk_FUN_004072dc();
    }
    if (0xffff < uVar4) {
      thunk_FUN_004072dc();
    }
    FUN_007bf640();
    dVar1 = (param_4 + (double)_DAT_007c1124) - (double)in_ST1;
    dVar2 = ((double)in_ST2 + (double)_DAT_007c1124) - param_4;
    local_34 = ABS((double)in_ST0 - param_4);
    uStack_36 = extraout_var;
    if (dVar1 < ABS((double)in_ST0 - param_4)) {
      uStack_36 = (undefined2)((ulonglong)dVar1 >> 0x30);
      local_34 = dVar1;
    }
    uStack_40 = CONCAT22(uStack_36,
                         (ushort)(dVar2 < local_34) << 8 |
                         (ushort)(NAN(dVar2) || NAN(local_34)) << 10 |
                         (ushort)(dVar2 == local_34) << 0xe);
    if (dVar2 < local_34 != 0) {
      uStack_40 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    FUN_00b21d6c(CONCAT31((int3)((uint)uStack_40 >> 8),1));
  }
  return;
}



// === FUN_007c15e0 @ 007c15e0 size:239 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c15e0(void)

{
  FUN_007ba16c();
  FUN_007ba16c();
  FUN_007ba06c();
  FUN_00407b58();
  FUN_00407b58();
  return;
}



// === FUN_007c2494 @ 007c2494 size:335 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c2494(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  int extraout_EDX;
  int iVar5;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  float10 fVar6;
  double in_stack_00000004;
  double in_stack_0000000c;
  double in_stack_00000014;
  char local_5;
  
  in_stack_00000004 = in_stack_00000004 - in_stack_00000014;
  if (in_stack_00000004 < 0.0) {
    in_stack_00000004 = in_stack_00000004 + (double)_DAT_007c25e4;
  }
  uVar1 = FUN_00407bcc();
  uVar2 = uVar1 + 0x80;
  iVar5 = extraout_EDX + (uint)(0xffffff7f < uVar1);
  if (iVar5 != 0 || 0xff < uVar2) {
    uVar2 = thunk_FUN_004072dc();
    iVar5 = extraout_EDX_00;
  }
  local_5 = (char)uVar2 + -0x80;
  if (local_5 < '\0') {
    local_5 = '\0';
  }
  if ('\x18' < local_5) {
    local_5 = '\x18';
  }
  uVar1 = (uint)local_5;
  if (0x721 < uVar1) {
    uVar1 = thunk_FUN_004072dc(uVar1,iVar5 + -1 + (uint)(0x7f < uVar2));
  }
  fVar6 = (float10)1 + (float10)*(double *)(&DAT_00c886f8 + uVar1 * 2);
  uVar1 = (uint)local_5;
  if (0x721 < uVar1) {
    uVar1 = thunk_FUN_004072dc();
  }
  *(double *)(&DAT_00c886f8 + uVar1 * 2) = (double)fVar6;
  while( true ) {
    in_stack_00000004 = in_stack_00000004 - 1.0;
    in_stack_0000000c = in_stack_0000000c - 1.0;
    if (in_stack_0000000c < 0.0) {
      return;
    }
    uVar1 = FUN_00407bcc();
    uVar2 = uVar1 + 0x80;
    iVar5 = extraout_EDX_01 + (uint)(0xffffff7f < uVar1);
    uVar4 = extraout_ECX;
    if (iVar5 != 0 || 0xff < uVar2) {
      uVar2 = thunk_FUN_004072dc();
      iVar5 = extraout_EDX_02;
      uVar4 = extraout_ECX_00;
    }
    local_5 = (char)uVar2 + -0x80;
    if (local_5 < '\0') {
      iVar3 = local_5 + 0x18;
      if (SCARRY4((int)local_5,0x18)) {
        iVar3 = thunk_FUN_004072dc(iVar3,iVar5 + -1 + (uint)(0x7f < uVar2),uVar4,in_stack_00000004);
      }
      uVar1 = iVar3 + 0x80;
      if (0xff < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      local_5 = (char)uVar1 + -0x80;
    }
    if (local_5 < '\0') break;
    uVar1 = (uint)local_5;
    if (0x721 < uVar1) {
      uVar1 = thunk_FUN_004072dc();
    }
    fVar6 = (float10)1 + (float10)*(double *)(&DAT_00c886f8 + uVar1 * 2);
    uVar1 = (uint)local_5;
    if (0x721 < uVar1) {
      uVar1 = thunk_FUN_004072dc();
    }
    *(double *)(&DAT_00c886f8 + uVar1 * 2) = (double)fVar6;
  }
  return;
}



// === FUN_007c25e8 @ 007c25e8 size:103 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007c25e8(undefined4 *param_1)

{
  float10 fVar1;
  undefined2 extraout_var;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 in_ST0;
  undefined4 local_2c;
  short local_28;
  short local_26;
  double local_22;
  undefined1 local_1a [6];
  char local_14;
  undefined1 local_5;
  
  puVar4 = &local_2c;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)param_1;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)param_1 + 2);
  local_5 = 0;
  FUN_0040a340(local_1a);
  fVar1 = (float10)_DAT_007c2650;
  uVar2 = CONCAT22(extraout_var,
                   (ushort)(in_ST0 < fVar1) << 8 | (ushort)(NAN(in_ST0) || NAN(fVar1)) << 10 |
                   (ushort)(in_ST0 == fVar1) << 0xe);
  if ((((in_ST0 < fVar1 != 0 || (in_ST0 == fVar1) != 0) && (local_14 < '\x06')) && (-1 < local_14))
     && (((local_28 != 1 || (local_26 != 0)) && (local_2c != 0)))) {
    uVar2 = CONCAT22(extraout_var,
                     (ushort)(0.0 < local_22) << 8 | (ushort)NAN(local_22) << 10 |
                     (ushort)(local_22 == 0.0) << 0xe);
    if ((local_22 == 0.0) == 0) {
      local_5 = 1;
    }
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),local_5);
}



// === FUN_007c54a4 @ 007c54a4 size:865 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c54a4(void)

{
  uint uVar1;
  uint uVar2;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  float10 fVar3;
  undefined1 local_1c [8];
  undefined1 local_14 [14];
  ushort local_6;
  
  local_6 = 0;
  do {
    uVar1 = (uint)local_6;
    if (0x721 < uVar1) {
      uVar1 = thunk_FUN_004072dc();
    }
    if ((double)(&DAT_00c9dd58)[uVar1] <= 0.0) {
      uVar1 = (uint)local_6;
      if (0x721 < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      *(undefined4 *)(&DAT_00c8c008 + uVar1 * 8) = 0x54000000;
      *(undefined4 *)(&DAT_00c8c00c + uVar1 * 8) = 0x419d6f34;
      uVar1 = (uint)local_6;
      if (0x721 < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      *(undefined4 *)(&DAT_00c8f918 + uVar1 * 8) = 0x54000000;
      *(undefined4 *)(&DAT_00c8f91c + uVar1 * 8) = 0x419d6f34;
      uVar1 = (uint)local_6;
      if (0x721 < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      *(undefined4 *)(&DAT_00c96b38 + uVar1 * 8) = 0x54000000;
      *(undefined4 *)(&DAT_00c96b3c + uVar1 * 8) = 0x419d6f34;
      uVar1 = (uint)local_6;
      if (0x721 < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      *(undefined4 *)(&DAT_00c93228 + uVar1 * 8) = 0x54000000;
      *(undefined4 *)(&DAT_00c9322c + uVar1 * 8) = 0x419d6f34;
      uVar1 = (uint)local_6;
      if (0x721 < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      *(undefined4 *)(&DAT_00c9a448 + uVar1 * 8) = 0x54000000;
      *(undefined4 *)(&DAT_00c9a44c + uVar1 * 8) = 0x419d6f34;
    }
    else {
      uVar1 = (uint)local_6;
      if (0x721 < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      uVar2 = (uint)local_6;
      if (0x721 < uVar2) {
        uVar1 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX;
      }
      fVar3 = (float10)(double)(&DAT_00c7a2b8)[uVar1] / (float10)(double)(&DAT_00c9dd58)[uVar2];
      uVar1 = (uint)local_6;
      if (0x721 < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      *(double *)(&DAT_00c8c008 + uVar1 * 8) = (double)fVar3;
      uVar1 = (uint)local_6;
      if (0x721 < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      uVar2 = (uint)local_6;
      if (0x721 < uVar2) {
        uVar1 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX_00;
      }
      fVar3 = (float10)*(double *)(&DAT_00c7dbc8 + uVar1 * 2) /
              (float10)(double)(&DAT_00c9dd58)[uVar2];
      uVar1 = (uint)local_6;
      if (0x721 < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      *(double *)(&DAT_00c8f918 + uVar1 * 8) = (double)fVar3;
      uVar1 = (uint)local_6;
      if (0x721 < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      uVar2 = (uint)local_6;
      if (0x721 < uVar2) {
        uVar1 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX_01;
      }
      fVar3 = (float10)*(double *)(&DAT_00c814d8 + uVar1 * 2) /
              (float10)(double)(&DAT_00c9dd58)[uVar2];
      uVar1 = (uint)local_6;
      if (0x721 < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      *(double *)(&DAT_00c93228 + uVar1 * 8) = (double)fVar3;
      uVar1 = (uint)local_6;
      if (0x721 < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      uVar2 = (uint)local_6;
      if (0x721 < uVar2) {
        uVar1 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX_02;
      }
      fVar3 = (float10)*(double *)(&DAT_00c84de8 + uVar1 * 2) /
              (float10)(double)(&DAT_00c9dd58)[uVar2];
      uVar1 = (uint)local_6;
      if (0x721 < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      *(double *)(&DAT_00c96b38 + uVar1 * 8) = (double)fVar3;
      uVar1 = (uint)local_6;
      if (0x721 < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      uVar2 = (uint)local_6;
      if (0x721 < uVar2) {
        uVar1 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX_03;
      }
      fVar3 = (float10)*(double *)(&DAT_00c886f8 + uVar1 * 2) /
              (float10)(double)(&DAT_00c9dd58)[uVar2];
      uVar1 = (uint)local_6;
      if (0x721 < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      *(double *)(&DAT_00c9a448 + uVar1 * 8) = (double)fVar3;
    }
    local_6 = local_6 + 1;
  } while (local_6 != 0x19);
  FUN_006906f4(&DAT_00c96b38,&DAT_00c9dd58,0x18,local_1c,local_14);
  FUN_00690858(&DAT_00c96b38,CONCAT22(extraout_var,0x18));
  FUN_006906f4(&DAT_00c93228,&DAT_00c9dd58,0x18,local_1c,local_14);
  FUN_00690858(&DAT_00c93228,CONCAT22(extraout_var_00,0x18));
  FUN_006906f4(&DAT_00c8f918,&DAT_00c9dd58,0x18,local_1c,local_14);
  FUN_00690858(&DAT_00c8f918,CONCAT22(extraout_var_01,0x18));
  FUN_006906f4(&DAT_00c9a448,&DAT_00c9dd58,0x18,local_1c,local_14);
  FUN_00690858(&DAT_00c9a448,CONCAT22(extraout_var_02,0x18));
  if (DAT_00c7a2b0 == '\0') {
    _DAT_00c9a448 = 0;
    _DAT_00c9a44c = 0;
    _DAT_00c9a508 = 0;
    _DAT_00c9a50c = 0;
  }
  return;
}



// === FUN_007ce0f4 @ 007ce0f4 size:128 ===

void FUN_007ce0f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int *in_FS_OFFSET;
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_38;
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_9;
  undefined4 local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_38 = 0;
  local_9 = (undefined1)param_2;
  puStack_40 = &LAB_007ce174;
  iStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_44;
  puVar2 = local_1c;
  puVar1 = &local_38;
  local_8 = param_1;
  FUN_007ba5d0(*(undefined4 *)PTR_DAT_00ba9b10,param_2,&local_2c,puVar1,local_24,puVar2,param_1,
               local_34,param_4,param_5,0,0x40480000,param_6,param_7);
  local_14 = local_2c;
  local_10 = local_28;
  *in_FS_OFFSET = (int)puVar1;
  FUN_0040f468(&local_38,PTR_DAT_007b6ba8,puVar2,&LAB_007ce17b);
  return;
}



// === FUN_007d2a90 @ 007d2a90 size:92 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007d2a90(double *param_1,double *param_2)

{
  if ((double)_DAT_007d2aec < ABS(*param_2 - *param_1)) {
    if (*param_1 <= *param_2) {
      *param_1 = *param_1 + (double)_DAT_007d2af0;
    }
    else {
      *param_2 = *param_2 + (double)_DAT_007d2af0;
    }
  }
  return;
}



// === FUN_007d8594 @ 007d8594 size:892 ===

void FUN_007d8594(undefined4 param_1,ushort param_2,double *param_3,double *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar5;
  undefined4 local_44;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  ushort local_12;
  double *local_10;
  ushort local_a;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_1c = 0;
  local_20 = 0;
  puStack_38 = &LAB_007d8910;
  puStack_3c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_3c;
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)((int)param_3 + 4) = 0xbff00000;
  *(undefined4 *)param_4 = 0;
  *(undefined4 *)((int)param_4 + 4) = 0xbff00000;
  local_18 = DAT_00ca1a78;
  if (DAT_00ca1a78 != 0) {
    local_18 = *(uint *)(DAT_00ca1a78 - 4);
  }
  uVar2 = local_18;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_a = param_2;
  local_8 = param_1;
  if (0xffff < local_18) {
    uVar2 = thunk_FUN_004072dc();
    puVar1 = puStack_34;
  }
  puStack_34 = puVar1;
  local_12 = (ushort)uVar2;
  if (local_12 != 0) {
    if ((int)(uVar2 & 0xffff) < *(int *)(*(int *)PTR_DAT_00ba9b10 + 5)) {
      FUN_007b90c0();
      local_44 = SUB84((double)in_ST0,0);
      FUN_00b26b58(&local_20);
      FUN_0040d7f4(&local_1c,L"Wrong starting day of the sleep timeline: ",local_20);
      FUN_00b2b8f8(local_1c);
      *(uint *)(*(int *)PTR_DAT_00ba9b10 + 5) = (uint)local_12;
    }
    else if ((int)(uint)local_a < *(int *)(*(int *)PTR_DAT_00ba9b10 + 5)) {
      iVar3 = *(int *)(*(int *)PTR_DAT_00ba9b10 + 5) - (uint)local_a;
      if (SBORROW4(*(int *)(*(int *)PTR_DAT_00ba9b10 + 5),(uint)local_a)) {
        iVar3 = thunk_FUN_004072dc();
      }
      fVar5 = (float10)iVar3;
      uVar2 = *(int *)(*(int *)PTR_DAT_00ba9b10 + 5) - 1;
      if (SBORROW4(*(int *)(*(int *)PTR_DAT_00ba9b10 + 5),1)) {
        uVar2 = thunk_FUN_004072dc();
      }
      if ((DAT_00ca1a78 == 0) || (uVar4 = DAT_00ca1a78, *(uint *)(DAT_00ca1a78 - 4) <= uVar2)) {
        uVar2 = thunk_FUN_004072dc();
        uVar4 = extraout_EDX;
      }
      fVar5 = fVar5 * (float10)*(double *)(uVar4 + 0x1a + uVar2 * 0x92);
      uVar2 = *(int *)(*(int *)PTR_DAT_00ba9b10 + 5) - 1;
      if (SBORROW4(*(int *)(*(int *)PTR_DAT_00ba9b10 + 5),1)) {
        uVar2 = thunk_FUN_004072dc();
      }
      if ((DAT_00ca1a78 == 0) || (uVar4 = DAT_00ca1a78, *(uint *)(DAT_00ca1a78 - 4) <= uVar2)) {
        uVar2 = thunk_FUN_004072dc();
        uVar4 = extraout_EDX_00;
      }
      *local_10 = (double)((float10)*(double *)(uVar4 + 0x42 + uVar2 * 0x92) - fVar5);
      iVar3 = *(int *)(*(int *)PTR_DAT_00ba9b10 + 5) - (uint)local_a;
      if (SBORROW4(*(int *)(*(int *)PTR_DAT_00ba9b10 + 5),(uint)local_a)) {
        iVar3 = thunk_FUN_004072dc();
      }
      fVar5 = (float10)iVar3;
      uVar2 = *(int *)(*(int *)PTR_DAT_00ba9b10 + 5) - 1;
      if (SBORROW4(*(int *)(*(int *)PTR_DAT_00ba9b10 + 5),1)) {
        uVar2 = thunk_FUN_004072dc();
      }
      if ((DAT_00ca1a78 == 0) || (uVar4 = DAT_00ca1a78, *(uint *)(DAT_00ca1a78 - 4) <= uVar2)) {
        uVar2 = thunk_FUN_004072dc();
        uVar4 = extraout_EDX_01;
      }
      fVar5 = fVar5 * (float10)*(double *)(uVar4 + 0x1a + uVar2 * 0x92);
      uVar2 = *(int *)(*(int *)PTR_DAT_00ba9b10 + 5) - 1;
      if (SBORROW4(*(int *)(*(int *)PTR_DAT_00ba9b10 + 5),1)) {
        uVar2 = thunk_FUN_004072dc();
      }
      if ((DAT_00ca1a78 == 0) || (uVar4 = DAT_00ca1a78, *(uint *)(DAT_00ca1a78 - 4) <= uVar2)) {
        uVar2 = thunk_FUN_004072dc();
        uVar4 = extraout_EDX_02;
      }
      *param_4 = (double)((float10)*(double *)(uVar4 + 0x4a + uVar2 * 0x92) - fVar5);
    }
    else if (local_12 < local_a) {
      if (local_12 < local_a) {
        iVar3 = (uint)local_a - (uVar2 & 0xffff);
        if (SBORROW4((uint)local_a,uVar2 & 0xffff)) {
          iVar3 = thunk_FUN_004072dc();
        }
        fVar5 = (float10)iVar3;
        uVar2 = local_12 - 1;
        if (SBORROW4((uint)local_12,1)) {
          uVar2 = thunk_FUN_004072dc();
        }
        if ((DAT_00ca1a78 == 0) || (uVar4 = DAT_00ca1a78, *(uint *)(DAT_00ca1a78 - 4) <= uVar2)) {
          uVar2 = thunk_FUN_004072dc();
          uVar4 = extraout_EDX_05;
        }
        fVar5 = fVar5 * (float10)*(double *)(uVar4 + 0x1a + uVar2 * 0x92);
        uVar2 = local_12 - 1;
        if (SBORROW4((uint)local_12,1)) {
          uVar2 = thunk_FUN_004072dc();
        }
        if ((DAT_00ca1a78 == 0) || (uVar4 = DAT_00ca1a78, *(uint *)(DAT_00ca1a78 - 4) <= uVar2)) {
          uVar2 = thunk_FUN_004072dc();
          uVar4 = extraout_EDX_06;
        }
        *local_10 = (double)(fVar5 + (float10)*(double *)(uVar4 + 0x42 + uVar2 * 0x92));
        iVar3 = (uint)local_a - (uint)local_12;
        if (SBORROW4((uint)local_a,(uint)local_12)) {
          iVar3 = thunk_FUN_004072dc();
        }
        fVar5 = (float10)iVar3;
        uVar2 = local_12 - 1;
        if (SBORROW4((uint)local_12,1)) {
          uVar2 = thunk_FUN_004072dc();
        }
        if ((DAT_00ca1a78 == 0) || (uVar4 = DAT_00ca1a78, *(uint *)(DAT_00ca1a78 - 4) <= uVar2)) {
          uVar2 = thunk_FUN_004072dc();
          uVar4 = extraout_EDX_07;
        }
        fVar5 = fVar5 * (float10)*(double *)(uVar4 + 0x1a + uVar2 * 0x92);
        uVar2 = local_12 - 1;
        if (SBORROW4((uint)local_12,1)) {
          uVar2 = thunk_FUN_004072dc();
        }
        if ((DAT_00ca1a78 == 0) || (uVar4 = DAT_00ca1a78, *(uint *)(DAT_00ca1a78 - 4) <= uVar2)) {
          uVar2 = thunk_FUN_004072dc();
          uVar4 = extraout_EDX_08;
        }
        *param_4 = (double)(fVar5 + (float10)*(double *)(uVar4 + 0x4a + uVar2 * 0x92));
      }
    }
    else {
      uVar2 = local_a - 1;
      if (SBORROW4((uint)local_a,1)) {
        uVar2 = thunk_FUN_004072dc();
      }
      if ((DAT_00ca1a78 == 0) || (uVar4 = DAT_00ca1a78, *(uint *)(DAT_00ca1a78 - 4) <= uVar2)) {
        uVar2 = thunk_FUN_004072dc();
        uVar4 = extraout_EDX_03;
      }
      *(undefined4 *)local_10 = *(undefined4 *)(uVar4 + 0x42 + uVar2 * 0x92);
      *(undefined4 *)((int)local_10 + 4) = *(undefined4 *)(uVar4 + 0x46 + uVar2 * 0x92);
      uVar2 = local_a - 1;
      if (SBORROW4((uint)local_a,1)) {
        uVar2 = thunk_FUN_004072dc();
      }
      if ((DAT_00ca1a78 == 0) || (uVar4 = DAT_00ca1a78, *(uint *)(DAT_00ca1a78 - 4) <= uVar2)) {
        uVar2 = thunk_FUN_004072dc();
        uVar4 = extraout_EDX_04;
      }
      *(undefined4 *)param_4 = *(undefined4 *)(uVar4 + 0x4a + uVar2 * 0x92);
      *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(uVar4 + 0x4e + uVar2 * 0x92);
    }
  }
  puVar1 = puStack_3c;
  *in_FS_OFFSET = local_44;
  puStack_3c = &LAB_007d8917;
  FUN_0040c628(&local_20,2,puVar1);
  return;
}



// === FUN_007e0098 @ 007e0098 size:1460 ===

void FUN_007e0098(int param_1)

{
  undefined1 *puVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  int extraout_ECX;
  int extraout_EDX;
  uint uVar11;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  int extraout_EDX_04;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  int extraout_EDX_09;
  uint extraout_EDX_10;
  uint extraout_EDX_11;
  int extraout_EDX_12;
  uint extraout_EDX_13;
  uint extraout_EDX_14;
  int extraout_EDX_15;
  uint extraout_EDX_16;
  uint extraout_EDX_17;
  uint extraout_EDX_18;
  uint extraout_EDX_19;
  int extraout_EDX_20;
  uint extraout_EDX_21;
  uint extraout_EDX_22;
  uint extraout_EDX_23;
  uint extraout_EDX_24;
  int extraout_EDX_25;
  uint extraout_EDX_26;
  uint extraout_EDX_27;
  uint extraout_EDX_28;
  uint extraout_EDX_29;
  int extraout_EDX_30;
  uint extraout_EDX_31;
  uint extraout_EDX_32;
  uint extraout_EDX_33;
  uint extraout_EDX_34;
  int extraout_EDX_35;
  uint extraout_EDX_36;
  uint extraout_EDX_37;
  uint extraout_EDX_38;
  uint extraout_EDX_39;
  int extraout_EDX_40;
  uint extraout_EDX_41;
  uint extraout_EDX_42;
  uint extraout_EDX_43;
  uint extraout_EDX_44;
  undefined4 *in_FS_OFFSET;
  bool bVar12;
  float10 in_ST0;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined4 local_68;
  undefined1 *puStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  double local_34;
  undefined8 local_2c;
  double local_24;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined8 local_14;
  int local_8;
  
  puStack_54 = &stack0xfffffffc;
  local_50 = 0;
  local_48 = 0;
  puStack_58 = &LAB_007e0653;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  local_1c = 0;
  uStack_18 = 0x3fe00000;
  local_38 = 1;
  local_8 = param_1;
  do {
    local_3c = 1;
    do {
      fVar13 = in_ST1;
      fVar14 = in_ST3;
      fVar15 = in_ST5;
      if (0xff < local_38) {
        uStack_60._0_2_ = 0xe0;
        uStack_60._2_2_ = 0x7e;
        thunk_FUN_004072dc();
        fVar13 = in_ST1;
        fVar14 = in_ST3;
        fVar15 = in_ST5;
      }
      in_ST5 = in_ST7;
      in_ST3 = fVar15;
      in_ST1 = fVar14;
      uStack_60._0_2_ = 0xe5;
      uStack_60._2_2_ = 0x7e;
      FUN_0070fd20();
      local_34 = (double)in_ST0;
      in_ST0 = in_ST2;
      fVar14 = in_ST4;
      if (0xff < local_3c) {
        uStack_60._0_2_ = 0xf8;
        uStack_60._2_2_ = 0x7e;
        thunk_FUN_004072dc();
        in_ST0 = in_ST2;
        fVar14 = in_ST4;
      }
      in_ST4 = in_ST6;
      in_ST2 = fVar14;
      uStack_60._0_2_ = 0xfd;
      uStack_60._2_2_ = 0x7e;
      local_4c = FUN_0070f9b8();
      local_4c = local_4c & 0xff;
      local_24 = (double)local_4c;
      local_2c = 0x3ff0000000000000;
      if (*(char *)(*(int *)(local_8 + 0x430) + 0x18) != '\0') {
        fVar14 = (float10)*(double *)PTR_DAT_00ba9dd8;
        local_68 = SUB104(fVar14,0);
        puStack_64 = (undefined1 *)((unkuint10)fVar14 >> 0x20);
        uStack_60._0_2_ = (undefined2)((unkuint10)fVar14 >> 0x40);
        fVar14 = in_ST5;
        FUN_007afe00();
        iVar8 = 0;
        iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 8);
        if ((iVar9 == 0) ||
           (fVar15 = fVar13, fVar2 = in_ST0, fVar3 = in_ST1, fVar4 = in_ST2, fVar5 = in_ST3,
           fVar6 = in_ST4, fVar7 = in_ST5, *(int *)(iVar9 + -4) == 0)) {
          uStack_60._0_2_ = 0x1a6;
          uStack_60._2_2_ = 0x7e;
          iVar8 = thunk_FUN_004072dc();
          iVar9 = extraout_EDX;
          fVar15 = fVar13;
          fVar2 = in_ST0;
          fVar3 = in_ST1;
          fVar4 = in_ST2;
          fVar5 = in_ST3;
          fVar6 = in_ST4;
          fVar7 = in_ST5;
        }
        in_ST5 = fVar14;
        in_ST4 = fVar7;
        in_ST3 = fVar6;
        in_ST2 = fVar5;
        in_ST1 = fVar4;
        in_ST0 = fVar3;
        fVar13 = fVar2;
        iVar9 = *(int *)(iVar9 + iVar8 * 4);
        uVar11 = local_3c - 1;
        if (SBORROW4(local_3c,1)) {
          uStack_60._0_2_ = 0x1b6;
          uStack_60._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
          uVar11 = extraout_EDX_00;
        }
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
          uStack_60._0_2_ = 0x1c4;
          uStack_60._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
          uVar11 = extraout_EDX_01;
        }
        iVar9 = *(int *)(iVar9 + uVar11 * 4);
        uVar11 = local_38 - 1;
        if (SBORROW4(local_38,1)) {
          uStack_60._0_2_ = 0x1d4;
          uStack_60._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
          uVar11 = extraout_EDX_02;
        }
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
          uStack_60._0_2_ = 0x1e2;
          uStack_60._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
          uVar11 = extraout_EDX_03;
        }
        *(double *)(iVar9 + uVar11 * 8) = (double)fVar15;
      }
      uStack_60._0_2_ = 0x1f1;
      uStack_60._2_2_ = 0x7e;
      in_ST6 = in_ST5;
      FUN_007b2df8(local_38,local_3c);
      local_14 = (double)fVar13;
      iVar8 = 0;
      iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 4);
      in_ST7 = in_ST6;
      if ((iVar9 == 0) || (*(int *)(iVar9 + -4) == 0)) {
        uStack_60._0_2_ = 0x211;
        uStack_60._2_2_ = 0x7e;
        iVar8 = thunk_FUN_004072dc();
        iVar9 = extraout_EDX_04;
      }
      iVar9 = *(int *)(iVar9 + iVar8 * 4);
      uVar11 = local_3c - 1;
      if (SBORROW4(local_3c,1)) {
        uStack_60._0_2_ = 0x221;
        uStack_60._2_2_ = 0x7e;
        iVar9 = thunk_FUN_004072dc();
        uVar11 = extraout_EDX_05;
      }
      if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
        uStack_60._0_2_ = 0x22f;
        uStack_60._2_2_ = 0x7e;
        iVar9 = thunk_FUN_004072dc();
        uVar11 = extraout_EDX_06;
      }
      iVar9 = *(int *)(iVar9 + uVar11 * 4);
      uVar11 = local_38 - 1;
      if (SBORROW4(local_38,1)) {
        uStack_60._0_2_ = 0x23f;
        uStack_60._2_2_ = 0x7e;
        iVar9 = thunk_FUN_004072dc();
        uVar11 = extraout_EDX_07;
      }
      if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
        uStack_60._0_2_ = 0x24d;
        uStack_60._2_2_ = 0x7e;
        iVar9 = thunk_FUN_004072dc();
        uVar11 = extraout_EDX_08;
      }
      *(undefined4 *)(iVar9 + uVar11 * 8) = (undefined4)local_14;
      *(undefined4 *)(iVar9 + 4 + uVar11 * 8) = local_14._4_4_;
      local_44 = 0;
      if (local_3c == 1) {
        puStack_64 = &LAB_007e02d8;
        local_68 = *in_FS_OFFSET;
        *in_FS_OFFSET = &local_68;
        uStack_60 = &stack0xfffffffc;
        FUN_0042bc74(L"0.00",PTR_DAT_00baa920,&local_48,SUB108((float10)local_34,0),
                     (short)((unkuint10)(float10)local_34 >> 0x40));
        uVar11 = local_38 - 1;
        if (SBORROW4(local_38,1)) {
          uVar11 = thunk_FUN_004072dc();
        }
        iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 0x10);
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
          uVar11 = thunk_FUN_004072dc();
          iVar9 = extraout_EDX_09;
        }
        FUN_0040c9a8(iVar9 + uVar11 * 4,local_48);
        puVar1 = uStack_60;
        *in_FS_OFFSET = local_68;
        uStack_60._0_2_ = 0x2df;
        uStack_60._2_2_ = 0x7e;
        puStack_64 = (undefined1 *)0x7e02d7;
        FUN_0040c5c8(&local_48,local_68,puVar1);
        return;
      }
      if (local_38 == 1) {
        uStack_60._0_2_ = 0x2f0;
        uStack_60._2_2_ = 0x7e;
        FUN_004282b0(local_3c,&local_50);
        uVar11 = local_3c - 1;
        if (SBORROW4(local_3c,1)) {
          uStack_60._0_2_ = 0x300;
          uStack_60._2_2_ = 0x7e;
          uVar11 = thunk_FUN_004072dc(uVar11,local_50);
        }
        iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 0x14);
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
          uStack_60._0_2_ = 0x31a;
          uStack_60._2_2_ = 0x7e;
          uVar11 = thunk_FUN_004072dc();
          iVar9 = extraout_ECX;
        }
        uStack_60._0_2_ = 0x322;
        uStack_60._2_2_ = 0x7e;
        FUN_0040c9a8(iVar9 + uVar11 * 4);
      }
      local_40 = 1;
      do {
        uVar11 = local_38 - 1;
        if (SBORROW4(local_38,1)) {
          uStack_60._0_2_ = 0x336;
          uStack_60._2_2_ = 0x7e;
          uVar11 = thunk_FUN_004072dc();
        }
        if (0x14 < uVar11) {
          uStack_60._0_2_ = 0x340;
          uStack_60._2_2_ = 0x7e;
          uVar11 = thunk_FUN_004072dc();
        }
        iVar9 = (int)((longlong)(int)uVar11 * 0x17a);
        if ((longlong)iVar9 != (longlong)(int)uVar11 * 0x17a) {
          uStack_60._0_2_ = 0x34d;
          uStack_60._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
        }
        puVar10 = PTR_DAT_00baa1b8 + iVar9 * 8;
        uVar11 = local_3c - 1;
        if (SBORROW4(local_3c,1)) {
          uStack_60._0_2_ = 0x363;
          uStack_60._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          uVar11 = extraout_EDX_10;
        }
        if (0x14 < uVar11) {
          uStack_60._0_2_ = 0x36d;
          uStack_60._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          uVar11 = extraout_EDX_11;
        }
        iVar9 = (int)((longlong)(int)uVar11 * 0x12);
        if ((longlong)iVar9 != (longlong)(int)uVar11 * 0x12) {
          uStack_60._0_2_ = 0x377;
          uStack_60._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          iVar9 = extraout_EDX_12;
        }
        puVar10 = puVar10 + iVar9 * 8;
        uVar11 = local_40 - 1;
        if (SBORROW4(local_40,1)) {
          uStack_60._0_2_ = 0x387;
          uStack_60._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          uVar11 = extraout_EDX_13;
        }
        if (0x23 < uVar11) {
          uStack_60._0_2_ = 0x391;
          uStack_60._2_2_ = 0x7e;
          puVar10 = (undefined *)thunk_FUN_004072dc();
          uVar11 = extraout_EDX_14;
        }
        bVar12 = SCARRY4(local_44,*(int *)(puVar10 + uVar11 * 4));
        local_44 = local_44 + *(int *)(puVar10 + uVar11 * 4);
        if (bVar12) {
          uStack_60._0_2_ = 0x39e;
          uStack_60._2_2_ = 0x7e;
          thunk_FUN_004072dc();
        }
        local_40 = local_40 + 1;
      } while (local_40 != 0x24);
      iVar8 = 0;
      iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 0xc);
      if ((iVar9 == 0) || (*(int *)(iVar9 + -4) == 0)) {
        uStack_60._0_2_ = 0x3c3;
        uStack_60._2_2_ = 0x7e;
        iVar8 = thunk_FUN_004072dc();
        iVar9 = extraout_EDX_15;
      }
      iVar9 = *(int *)(iVar9 + iVar8 * 4);
      uVar11 = local_3c - 1;
      if (SBORROW4(local_3c,1)) {
        uStack_60._0_2_ = 0x3d3;
        uStack_60._2_2_ = 0x7e;
        iVar9 = thunk_FUN_004072dc();
        uVar11 = extraout_EDX_16;
      }
      if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
        uStack_60._0_2_ = 0x3e1;
        uStack_60._2_2_ = 0x7e;
        iVar9 = thunk_FUN_004072dc();
        uVar11 = extraout_EDX_17;
      }
      iVar9 = *(int *)(iVar9 + uVar11 * 4);
      uVar11 = local_38 - 1;
      if (SBORROW4(local_38,1)) {
        uStack_60._0_2_ = 0x3f1;
        uStack_60._2_2_ = 0x7e;
        iVar9 = thunk_FUN_004072dc();
        uVar11 = extraout_EDX_18;
      }
      if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
        uStack_60._0_2_ = 0x3ff;
        uStack_60._2_2_ = 0x7e;
        iVar9 = thunk_FUN_004072dc();
        uVar11 = extraout_EDX_19;
      }
      *(int *)(iVar9 + uVar11 * 4) = local_44;
      if (*(char *)(*(int *)(local_8 + 0x430) + 0x98) != '\0') {
        iVar8 = 0;
        iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 4);
        if ((iVar9 == 0) || (*(int *)(iVar9 + -4) == 0)) {
          uStack_60._0_2_ = 0x437;
          uStack_60._2_2_ = 0x7e;
          iVar8 = thunk_FUN_004072dc();
          iVar9 = extraout_EDX_20;
        }
        iVar9 = *(int *)(iVar9 + iVar8 * 4);
        uVar11 = local_3c - 1;
        if (SBORROW4(local_3c,1)) {
          uStack_60._0_2_ = 0x447;
          uStack_60._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
          uVar11 = extraout_EDX_21;
        }
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
          uStack_60._0_2_ = 0x455;
          uStack_60._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
          uVar11 = extraout_EDX_22;
        }
        iVar9 = *(int *)(iVar9 + uVar11 * 4);
        uVar11 = local_38 - 1;
        if (SBORROW4(local_38,1)) {
          uStack_60._0_2_ = 0x465;
          uStack_60._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
          uVar11 = extraout_EDX_23;
        }
        if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
          uStack_60._0_2_ = 0x473;
          uStack_60._2_2_ = 0x7e;
          iVar9 = thunk_FUN_004072dc();
          uVar11 = extraout_EDX_24;
        }
        if (*(double *)(iVar9 + uVar11 * 8) != 0.0) {
          iVar8 = 0;
          iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 4);
          if ((iVar9 == 0) ||
             (fVar13 = in_ST0, fVar14 = in_ST1, fVar15 = in_ST2, fVar2 = in_ST3, fVar3 = in_ST4,
             fVar4 = in_ST5, *(int *)(iVar9 + -4) == 0)) {
            uStack_60._0_2_ = 0x49e;
            uStack_60._2_2_ = 0x7e;
            iVar8 = thunk_FUN_004072dc();
            iVar9 = extraout_EDX_25;
            fVar13 = in_ST0;
            fVar14 = in_ST1;
            fVar15 = in_ST2;
            fVar2 = in_ST3;
            fVar3 = in_ST4;
            fVar4 = in_ST5;
          }
          in_ST5 = in_ST6;
          in_ST4 = fVar4;
          in_ST3 = fVar3;
          in_ST2 = fVar2;
          in_ST1 = fVar15;
          in_ST0 = fVar14;
          iVar9 = *(int *)(iVar9 + iVar8 * 4);
          uVar11 = local_3c - 1;
          if (SBORROW4(local_3c,1)) {
            uStack_60._0_2_ = 0x4ae;
            uStack_60._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_26;
          }
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
            uStack_60._0_2_ = 0x4bc;
            uStack_60._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_27;
          }
          iVar9 = *(int *)(iVar9 + uVar11 * 4);
          uVar11 = local_38 - 1;
          if (SBORROW4(local_38,1)) {
            uStack_60._0_2_ = 0x4cc;
            uStack_60._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_28;
          }
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
            uStack_60._0_2_ = 0x4da;
            uStack_60._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_29;
          }
          fVar14 = (float10)*(double *)(iVar9 + uVar11 * 8);
          local_68 = SUB104(fVar14,0);
          puStack_64 = (undefined1 *)((unkuint10)fVar14 >> 0x20);
          uStack_60._0_2_ = (undefined2)((unkuint10)fVar14 >> 0x40);
          in_ST6 = in_ST5;
          FUN_00407b98();
          iVar8 = 0;
          iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 4);
          if ((iVar9 == 0) || (*(int *)(iVar9 + -4) == 0)) {
            uStack_60._0_2_ = 0x505;
            uStack_60._2_2_ = 0x7e;
            iVar8 = thunk_FUN_004072dc();
            iVar9 = extraout_EDX_30;
          }
          iVar9 = *(int *)(iVar9 + iVar8 * 4);
          uVar11 = local_3c - 1;
          if (SBORROW4(local_3c,1)) {
            uStack_60._0_2_ = 0x515;
            uStack_60._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_31;
          }
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
            uStack_60._0_2_ = 0x523;
            uStack_60._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_32;
          }
          iVar9 = *(int *)(iVar9 + uVar11 * 4);
          uVar11 = local_38 - 1;
          if (SBORROW4(local_38,1)) {
            uStack_60._0_2_ = 0x533;
            uStack_60._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_33;
          }
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
            uStack_60._0_2_ = 0x541;
            uStack_60._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_34;
          }
          *(double *)(iVar9 + uVar11 * 8) = (double)fVar13;
        }
        in_ST7 = in_ST6;
        if (*(char *)(*(int *)(local_8 + 0x430) + 0x18) != '\0') {
          iVar8 = 0;
          iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 8);
          if ((iVar9 == 0) ||
             (fVar13 = in_ST0, fVar14 = in_ST1, fVar15 = in_ST2, fVar2 = in_ST3, fVar3 = in_ST4,
             fVar4 = in_ST5, *(int *)(iVar9 + -4) == 0)) {
            uStack_60._0_2_ = 0x574;
            uStack_60._2_2_ = 0x7e;
            iVar8 = thunk_FUN_004072dc();
            iVar9 = extraout_EDX_35;
            fVar13 = in_ST0;
            fVar14 = in_ST1;
            fVar15 = in_ST2;
            fVar2 = in_ST3;
            fVar3 = in_ST4;
            fVar4 = in_ST5;
          }
          in_ST5 = in_ST6;
          in_ST4 = fVar4;
          in_ST3 = fVar3;
          in_ST2 = fVar2;
          in_ST1 = fVar15;
          in_ST0 = fVar14;
          iVar9 = *(int *)(iVar9 + iVar8 * 4);
          uVar11 = local_3c - 1;
          if (SBORROW4(local_3c,1)) {
            uStack_60._0_2_ = 0x584;
            uStack_60._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_36;
          }
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
            uStack_60._0_2_ = 0x592;
            uStack_60._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_37;
          }
          iVar9 = *(int *)(iVar9 + uVar11 * 4);
          uVar11 = local_38 - 1;
          if (SBORROW4(local_38,1)) {
            uStack_60._0_2_ = 0x5a2;
            uStack_60._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_38;
          }
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
            uStack_60._0_2_ = 0x5b0;
            uStack_60._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_39;
          }
          fVar14 = (float10)*(double *)(iVar9 + uVar11 * 8);
          local_68 = SUB104(fVar14,0);
          puStack_64 = (undefined1 *)((unkuint10)fVar14 >> 0x20);
          uStack_60._0_2_ = (undefined2)((unkuint10)fVar14 >> 0x40);
          in_ST6 = in_ST5;
          FUN_00407b98();
          iVar8 = 0;
          iVar9 = *(int *)(*(int *)(local_8 + 0x430) + 8);
          if ((iVar9 == 0) || (*(int *)(iVar9 + -4) == 0)) {
            uStack_60._0_2_ = 0x5db;
            uStack_60._2_2_ = 0x7e;
            iVar8 = thunk_FUN_004072dc();
            iVar9 = extraout_EDX_40;
          }
          iVar9 = *(int *)(iVar9 + iVar8 * 4);
          uVar11 = local_3c - 1;
          if (SBORROW4(local_3c,1)) {
            uStack_60._0_2_ = 0x5eb;
            uStack_60._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_41;
          }
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
            uStack_60._0_2_ = 0x5f9;
            uStack_60._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_42;
          }
          iVar9 = *(int *)(iVar9 + uVar11 * 4);
          uVar11 = local_38 - 1;
          if (SBORROW4(local_38,1)) {
            uStack_60._0_2_ = 0x609;
            uStack_60._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_43;
          }
          if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar11)) {
            uStack_60._0_2_ = 0x617;
            uStack_60._2_2_ = 0x7e;
            iVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_44;
          }
          *(double *)(iVar9 + uVar11 * 8) = (double)fVar13;
          in_ST7 = in_ST6;
        }
      }
      puVar1 = puStack_54;
      local_3c = local_3c + 1;
    } while (local_3c != 0x15);
    local_38 = local_38 + 1;
    if (local_38 == 0x15) {
      *in_FS_OFFSET = uStack_5c;
      puStack_54 = &LAB_007e065a;
      puStack_58 = (undefined1 *)0x7e064a;
      FUN_0040c5c8(&local_50,uStack_5c,puVar1);
      puStack_58 = (undefined1 *)0x7e0652;
      FUN_0040c5c8(&local_48);
      return;
    }
  } while( true );
}



// === FUN_00801388 @ 00801388 size:561 ===

void FUN_00801388(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  int iVar6;
  int extraout_EDX_00;
  int extraout_EDX_01;
  
  if (*(int *)(param_1 + 0x1918d) != 0) {
    FUN_008015bc(param_1);
    piVar1 = *(int **)(*(int *)(param_1 + 0x1918d) + 0x1c8);
    if (*(char *)(param_1 + 0x1912a) != '\0') {
      FUN_00516544(piVar1[0x11],0xff00000f);
      FUN_00516918(piVar1[0x12],0xff00000f);
      (**(code **)(*piVar1 + 0x7c))
                (piVar1,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1918d) + 0x5c),
                 *(undefined4 *)(*(int *)(param_1 + 0x1918d) + 0x58));
      FUN_00516918(piVar1[0x12],0xfdc9b3);
      (**(code **)(*piVar1 + 0x7c))
                (piVar1,*(undefined4 *)(param_1 + 0x19195),*(undefined4 *)(param_1 + 0x1919d),
                 *(undefined4 *)(param_1 + 0x191a1),*(undefined4 *)(param_1 + 0x19199));
      FUN_00516918(piVar1[0x12],0xff00000f);
      FUN_00800f50(param_1);
      FUN_00800e2c(param_1);
    }
    FUN_00801bd8(param_1);
    FUN_0080285c(param_1);
    if (*(char *)(param_1 + 0x19129) != '\0') {
      FUN_00802b2c(param_1,4);
    }
    if (*(char *)(param_1 + 0x19128) != '\0') {
      FUN_00802b2c(param_1,3);
    }
    if (*(char *)(param_1 + 0x19127) != '\0') {
      FUN_00802b2c(param_1,2);
    }
    if (*(char *)(param_1 + 0x19126) != '\0') {
      FUN_00802b2c(param_1,1);
    }
    FUN_0080202c(param_1);
    uVar2 = FUN_00516bc0(piVar1,*(undefined4 *)(param_1 + 0xab45));
    *(undefined4 *)PTR_DAT_00ba9d40 = uVar2;
    iVar3 = FUN_00516ba0(piVar1,*(undefined4 *)(param_1 + 0xab45));
    iVar4 = iVar3 + *(int *)(param_1 + 0x191a1);
    if (SCARRY4(iVar3,*(int *)(param_1 + 0x191a1))) {
      iVar4 = thunk_FUN_004072dc();
    }
    iVar3 = iVar4 + 0xb;
    if (SCARRY4(iVar4,0xb)) {
      iVar3 = thunk_FUN_004072dc();
    }
    iVar5 = FUN_00516bc0(piVar1,*(undefined4 *)(param_1 + 0xab45));
    iVar4 = *(int *)(param_1 + 0x19199) - iVar5;
    if (SBORROW4(*(int *)(param_1 + 0x19199),iVar5)) {
      iVar5 = thunk_FUN_004072dc();
      iVar4 = extraout_EDX;
    }
    iVar6 = iVar4 + -4;
    if (SBORROW4(iVar4,4)) {
      thunk_FUN_004072dc(iVar5,iVar6);
      iVar6 = extraout_EDX_00;
    }
    (**(code **)(*piVar1 + 0x90))(piVar1,iVar6,iVar3);
    (**(code **)(*piVar1 + 0x90))(piVar1,5,3,*(undefined4 *)(param_1 + 0xab49));
    uVar2 = *(undefined4 *)(param_1 + 0xab4d);
    iVar3 = *(int *)(param_1 + 0x19195) + 0x50;
    if (SCARRY4(*(int *)(param_1 + 0x19195),0x50)) {
      thunk_FUN_004072dc(param_1,iVar3);
      iVar3 = extraout_EDX_01;
    }
    (**(code **)(*piVar1 + 0x90))(piVar1,iVar3,3,uVar2);
  }
  return;
}



// === FUN_00801bb8 @ 00801bb8 size:30 ===

void FUN_00801bb8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00690ac0(param_2,param_3);
  return;
}



// === FUN_00803a94 @ 00803a94 size:259 ===

void FUN_00803a94(int param_1)

{
  *(undefined1 *)(param_1 + 0x19126) = 0;
  *(undefined1 *)(param_1 + 0x19127) = 0;
  *(undefined1 *)(param_1 + 0x19128) = 0;
  *(undefined1 *)(param_1 + 0x19129) = 0;
  *(undefined1 *)(param_1 + 0x1915d) = 0;
  *(undefined2 *)(param_1 + 0x1917f) = 300;
  *(undefined1 *)(param_1 + 0x19125) = 0;
  *(undefined1 *)(param_1 + 0x1912a) = 1;
  *(undefined1 *)(param_1 + 0x1915e) = 0;
  *(undefined4 *)(param_1 + 0x191a9) = 0;
  FUN_00408364(param_1 + 0x14,0x3910,0);
  FUN_00408364(param_1 + 0x3924,0x3910,0);
  FUN_00408364(param_1 + 0x7234,0x3910,0);
  *(undefined4 *)(param_1 + 0x19153) = 0x851eb852;
  *(undefined4 *)(param_1 + 0x19157) = 0xdeb851eb;
  *(undefined2 *)(param_1 + 0x1915b) = 0x3ffe;
  *(undefined4 *)(param_1 + 0x1918d) = 0;
  *(undefined4 *)(param_1 + 0x19191) = 0;
  *(undefined4 *)(param_1 + 0x1915f) = 0;
  *(undefined4 *)(param_1 + 0x19163) = 0;
  *(undefined4 *)(param_1 + 0x19167) = 0;
  *(undefined4 *)(param_1 + 0x1916b) = 0;
  return;
}



// === FUN_00804670 @ 00804670 size:169 ===

void FUN_00804670(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_18;
  int local_14;
  
  puStack_2c = &stack0xfffffffc;
  puStack_30 = &LAB_00804712;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_14 = *param_2;
  if (local_14 <= *param_3) {
    local_18 = (*param_3 - local_14) + 1;
    puStack_2c = &stack0xfffffffc;
    do {
      iVar1 = FUN_0096405c(*(undefined4 *)(param_1 + 4),local_14);
      if (iVar1 != 0) break;
      iVar1 = *param_2;
      *param_2 = *param_2 + 1;
      if (SCARRY4(iVar1,1)) {
        thunk_FUN_004072dc();
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  local_14 = *param_3;
  local_18 = *param_2 - local_14;
  if (local_18 == 0 || *param_2 < local_14) {
    local_18 = local_18 + -1;
    do {
      iVar1 = FUN_0096405c(*(undefined4 *)(param_1 + 4),local_14);
      if (iVar1 != 0) break;
      iVar1 = *param_3;
      *param_3 = *param_3 + -1;
      if (SBORROW4(iVar1,1)) {
        thunk_FUN_004072dc();
      }
      local_14 = local_14 + -1;
      local_18 = local_18 + 1;
    } while (local_18 != 0);
  }
  *in_FS_OFFSET = uStack_34;
  return;
}



// === FUN_0080545c @ 0080545c size:128 ===

void FUN_0080545c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = &stack0xfffffffc;
  puStack_24 = &LAB_008054d5;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar1 = *(int *)(param_1 + 0x3d9);
  uVar2 = FUN_0080352c(iVar1,iVar1 + 8,iVar1 + 0xc,*(undefined2 *)(iVar1 + 0x19171));
  if (0xffff < uVar2) {
    uVar2 = thunk_FUN_004072dc();
  }
  *(short *)(iVar1 + 0x19171) = (short)uVar2;
  FUN_00804788(iVar1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  *in_FS_OFFSET = uStack_28;
  return;
}



// === FUN_00805b88 @ 00805b88 size:83 ===

void FUN_00805b88(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = &stack0xfffffffc;
  puStack_20 = &LAB_00805bd4;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (*(char *)(param_1 + 0x3d8) == '\0') {
    FUN_00b23344();
    FUN_0080545c(param_1);
    FUN_00b23360();
    *in_FS_OFFSET = uStack_24;
  }
  else {
    *in_FS_OFFSET = uStack_24;
  }
  return;
}



// === FUN_00805d20 @ 00805d20 size:321 ===

void FUN_00805d20(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_00805e5b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_005759e4(*(undefined4 *)(param_1 + 0x3d0),*(undefined2 *)(*(int *)(param_1 + 0x3d9) + 0x19171)
              );
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x3d9) + 0x19171);
  uVar2 = uVar1 / 3 - 1;
  if (0x7ffe < uVar2) {
    uVar2 = thunk_FUN_004072dc(uVar2,(uint)uVar1 % 3);
  }
  *(short *)(*(int *)(param_1 + 0x3d0) + 0x2ba) = (short)uVar2 + 1;
  if (*(ushort *)(*(int *)(param_1 + 0x3d0) + 0x2ba) < 3) {
    *(undefined2 *)(*(int *)(param_1 + 0x3d0) + 0x2ba) = 3;
  }
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x3d9) + 4) + 5);
  uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x3d9) + 0x19171);
  iVar3 = iVar4 - uVar2;
  if (SBORROW4(iVar4,uVar2)) {
    iVar3 = thunk_FUN_004072dc();
  }
  iVar4 = iVar3 + 1;
  if (SCARRY4(iVar3,1)) {
    iVar4 = thunk_FUN_004072dc();
  }
  if (iVar4 < 3) {
    FUN_00575a94(*(undefined4 *)(param_1 + 0x3d0),3);
  }
  else {
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x3d9) + 4) + 5);
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x3d9) + 0x19171);
    iVar3 = iVar4 - uVar2;
    if (SBORROW4(iVar4,uVar2)) {
      uVar2 = thunk_FUN_004072dc();
      iVar3 = extraout_EDX;
    }
    if (SCARRY4(iVar3,1)) {
      thunk_FUN_004072dc(uVar2,iVar3 + 1);
    }
    FUN_00575a94(*(undefined4 *)(param_1 + 0x3d0));
  }
  FUN_00575a7c(*(undefined4 *)(param_1 + 0x3d0),1);
  *in_FS_OFFSET = uStack_20;
  return;
}



// === FUN_0080923c @ 0080923c size:194 ===

void FUN_0080923c(int param_1)

{
  FUN_0056e750(*(undefined4 *)(param_1 + 0x434),0);
  FUN_0056e750(*(undefined4 *)(param_1 + 0x438),0);
  switch(DAT_00ca3368) {
  case 0:
    FUN_0054a198(*(undefined4 *)(param_1 + 0x434),0xffffff);
    return;
  case 1:
    FUN_0054a198(*(undefined4 *)(param_1 + 0x434),0xffff00);
    return;
  case 2:
    FUN_0054a198(*(undefined4 *)(param_1 + 0x434),0xff00);
    return;
  case 3:
    FUN_0054a198(*(undefined4 *)(param_1 + 0x434),0xff9191);
    return;
  case 4:
    FUN_0054a198(*(undefined4 *)(param_1 + 0x434),&DAT_0097ff97);
    return;
  case 5:
    FUN_0054a198(*(undefined4 *)(param_1 + 0x434),0xffff00);
  }
  return;
}



// === FUN_0080c044 @ 0080c044 size:427 ===

/* WARNING: Removing unreachable block (ram,0x0080c0a2) */
/* WARNING: Removing unreachable block (ram,0x0080c0ff) */

void FUN_0080c044(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined2 extraout_var;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  char local_13;
  undefined1 local_12;
  char local_11;
  undefined4 local_10;
  byte local_b;
  ushort local_a;
  int local_8;
  
  if ((uint)*(ushort *)(param_1 + 0x47b) != *(uint *)(param_1 + 0x489)) {
    local_11 = *(int *)(*(int *)PTR_DAT_00baae28 + 0x74) == param_1;
    local_8 = param_1;
    local_10 = FUN_0061c7ac(PTR_PTR_LAB_00b279c4,1,param_1);
    FUN_00b29314(local_10,L"Updating tables");
    uVar2 = *(uint *)(local_8 + 0x489);
    if (0xffff < uVar2) {
      uVar2 = thunk_FUN_004072dc();
    }
    local_a = (ushort)uVar2;
    GetAsyncKeyState(0x1b);
    FUN_0093237c(*(undefined4 *)PTR_DAT_00ba9c04,&local_12);
    uVar2 = (uint)*(byte *)(local_8 + 0x471) * (uint)*(byte *)(local_8 + 0x472);
    if (0xff < uVar2) {
      uVar2 = thunk_FUN_004072dc();
    }
    local_13 = (char)uVar2;
    if (local_13 != '\0') {
      local_b = 1;
      do {
        fVar3 = (float10)local_b;
        uVar4 = SUB104(fVar3,0);
        uVar5 = (undefined4)((unkuint10)fVar3 >> 0x20);
        uVar6 = (undefined2)((unkuint10)fVar3 >> 0x40);
        FUN_00b2a9a4(local_10);
        cVar1 = FUN_00b2a0ec(local_10);
        if (cVar1 != '\0') break;
        (**(code **)(**(int **)(local_8 + 0x40c) + 0xc4))();
        FUN_0080cf24(local_8,local_b,CONCAT22(extraout_var,local_a),uVar4,uVar5,uVar6);
        uVar2 = local_a + 1;
        if (SCARRY4((uint)local_a,1)) {
          uVar2 = thunk_FUN_004072dc();
        }
        if (0xffff < uVar2) {
          uVar2 = thunk_FUN_004072dc();
        }
        local_a = (ushort)uVar2;
        local_b = local_b + 1;
        local_13 = local_13 + -1;
      } while (local_13 != '\0');
    }
    FUN_009324fc(*(undefined4 *)PTR_DAT_00ba9c04,local_12);
    uVar2 = *(uint *)(local_8 + 0x489);
    if (0xffff < uVar2) {
      uVar2 = thunk_FUN_004072dc();
    }
    *(short *)(local_8 + 0x47b) = (short)uVar2;
    FUN_00b2a8d8(local_10);
    if ((local_11 != '\0') &&
       (cVar1 = FUN_0040ab78(*(undefined4 *)(local_8 + 0x40c)), cVar1 != '\0')) {
      (**(code **)(**(int **)(local_8 + 0x40c) + 0x120))();
    }
  }
  return;
}



// === FUN_0080c21c @ 0080c21c size:410 ===

void FUN_0080c21c(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined2 uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar3;
  undefined4 uVar5;
  char local_f;
  undefined1 local_e;
  char local_d;
  ushort local_c;
  ushort local_a;
  int local_8;
  
  local_8 = param_1;
  FUN_00808918(param_1,*(undefined4 *)(*(int *)(param_1 + 0x408) + 0x2b8),
               *(undefined4 *)(param_1 + 0x485));
  if (((uint)*(ushort *)(local_8 + 0x477) != *(uint *)(local_8 + 0x481)) ||
     ((uint)*(ushort *)(local_8 + 0x479) != *(uint *)(local_8 + 0x47d))) {
    uVar2 = *(uint *)(local_8 + 0x481);
    if (0xffff < uVar2) {
      uVar2 = thunk_FUN_004072dc();
    }
    local_a = (ushort)uVar2;
    uVar2 = *(uint *)(local_8 + 0x47d);
    if (0xffff < uVar2) {
      uVar2 = thunk_FUN_004072dc();
    }
    local_c = (ushort)uVar2;
    uVar5 = 0x80c2b5;
    FUN_0093237c(*(undefined4 *)PTR_DAT_00ba9c04,&local_e);
    local_f = *(char *)(local_8 + 0x470);
    if (local_f != '\0') {
      local_d = '\x01';
      uVar3 = extraout_ECX;
      do {
        uVar4 = (undefined2)((uint)uVar3 >> 0x10);
        if (0xc < local_a) {
          local_a = 1;
          uVar2 = local_c + 1;
          if (SCARRY4((uint)local_c,1)) {
            uVar5 = 0x80c2e4;
            uVar2 = thunk_FUN_004072dc();
            uVar4 = extraout_var;
          }
          if (0xffff < uVar2) {
            uVar5 = 0x80c2f0;
            uVar2 = thunk_FUN_004072dc();
            uVar4 = extraout_var_00;
          }
          local_c = (ushort)uVar2;
        }
        FUN_0080cb60(local_8,local_d,CONCAT22(uVar4,local_a),uVar5,local_c);
        uVar2 = local_a + 1;
        uVar3 = extraout_ECX_00;
        if (SCARRY4((uint)local_a,1)) {
          uVar2 = thunk_FUN_004072dc();
          uVar3 = extraout_ECX_01;
        }
        if (0xffff < uVar2) {
          uVar2 = thunk_FUN_004072dc();
          uVar3 = extraout_ECX_02;
        }
        local_a = (ushort)uVar2;
        local_d = local_d + '\x01';
        local_f = local_f + -1;
      } while (local_f != '\0');
    }
    FUN_009324fc(*(undefined4 *)PTR_DAT_00ba9c04,local_e);
    uVar2 = *(uint *)(local_8 + 0x481);
    if (0xffff < uVar2) {
      uVar2 = thunk_FUN_004072dc();
    }
    *(short *)(local_8 + 0x477) = (short)uVar2;
    uVar2 = *(uint *)(local_8 + 0x47d);
    if (0xffff < uVar2) {
      uVar2 = thunk_FUN_004072dc();
    }
    *(short *)(local_8 + 0x479) = (short)uVar2;
    if (*(int *)(*(int *)PTR_DAT_00baae28 + 0x74) == local_8) {
      cVar1 = FUN_0040ab78(*(undefined4 *)(local_8 + 0x408));
      if (cVar1 != '\0') {
        (**(code **)(**(int **)(local_8 + 0x408) + 0x120))();
      }
    }
  }
  return;
}



// === FUN_00812c20 @ 00812c20 size:694 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00812c20(undefined4 param_1,byte param_2,ushort param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined4 local_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  undefined4 local_114;
  undefined4 local_110;
  uint local_10c;
  undefined1 local_104 [16];
  ushort local_f4;
  undefined1 local_e8 [90];
  byte local_8e;
  char local_8d;
  ushort local_7e;
  short local_7c;
  undefined1 local_72 [96];
  undefined2 local_12;
  int local_10;
  ushort local_c;
  byte local_9;
  undefined4 local_8;
  
  puStack_124 = &stack0xfffffffc;
  puStack_130 = &stack0xfffffffc;
  local_110 = 0;
  local_114 = 0;
  puStack_128 = &LAB_00812f21;
  local_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_12c;
  puStack_134 = &LAB_00812eb8;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  local_c = param_3;
  local_9 = param_2;
  local_8 = param_1;
  FUN_0094da18(*(undefined4 *)PTR_DAT_00ba9c04,param_1,&local_8e);
  bVar4 = local_8e < 7;
  if (local_8e < 8) {
    bVar4 = (local_9 >> (local_8e & 0x1f) & 1) != 0;
  }
  if (bVar4) {
    if (local_8d == '\x01') {
      iVar2 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
      if (iVar2 == local_7c) {
        *in_FS_OFFSET = uStack_138;
      }
      else if (local_c < local_7e) {
        FUN_00407680();
        local_10c = (uint)local_c;
        in_ST0 = (float10)local_10c * in_ST0;
        uVar3 = FUN_00407bcc();
        local_10 = uVar3 + 1;
        iVar2 = extraout_EDX + (uint)(0xfffffffe < uVar3);
        if (SCARRY4(extraout_EDX,0) != SCARRY4(extraout_EDX,(uint)(0xfffffffe < uVar3))) {
          local_10 = thunk_FUN_004072dc();
          iVar2 = extraout_EDX_00;
        }
        if (local_10 >> 0x1f != iVar2) {
          local_10 = thunk_FUN_004072dc();
        }
        if (local_8e == 1) {
          iVar2 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
          uVar3 = iVar2 + local_10;
          if (SCARRY4(iVar2,local_10)) {
            uVar3 = thunk_FUN_004072dc();
          }
          if (0xffff < uVar3) {
            uVar3 = thunk_FUN_004072dc();
          }
          local_12 = (undefined2)uVar3;
          iVar2 = (uVar3 & 0xffff) - (int)local_7c;
          if (SBORROW4(uVar3 & 0xffff,(int)local_7c)) {
            iVar2 = thunk_FUN_004072dc();
          }
          local_10 = iVar2;
          if (iVar2 < 2) {
            local_10 = 2;
          }
        }
        if (local_10 < (int)(uint)local_7e) {
          iVar2 = (uint)local_7e - local_10;
          if (SBORROW4((uint)local_7e,local_10)) {
            iVar2 = thunk_FUN_004072dc();
          }
          _DAT_00ca3398 = (double)iVar2 + _DAT_00ca3398;
          local_10c = iVar2;
          FUN_008937bc(local_8);
          _DAT_00ca33d0 = (double)(in_ST0 + (float10)_DAT_00ca33d0);
          if (local_8e == 0) {
            uStack_13c = 1;
            FUN_00944c40(*(undefined4 *)PTR_DAT_00ba9c04,local_8,local_10);
          }
          else {
            uVar3 = local_7c + local_10;
            if (SCARRY4((int)local_7c,local_10)) {
              thunk_FUN_004072dc();
              uVar3 = extraout_ECX;
            }
            if (0xffff < uVar3) {
              thunk_FUN_004072dc();
            }
            uStack_13c = 0x812e0b;
            FUN_0094168c(*(undefined4 *)PTR_DAT_00ba9c04,local_8);
          }
          FUN_0094da18(*(undefined4 *)PTR_DAT_00ba9c04,local_8,local_104);
          FUN_008937bc(local_8);
          _DAT_00ca33d8 = (double)(in_ST1 + (float10)_DAT_00ca33d8);
          bVar4 = DAT_00ca3394 == -1;
          DAT_00ca3394 = DAT_00ca3394 + 1;
          if (bVar4) {
            thunk_FUN_004072dc();
          }
          FUN_0040a340(local_72);
          _DAT_00ca33b0 = (double)(in_ST2 + (float10)_DAT_00ca33b0);
          FUN_0040a340(local_e8);
          _DAT_00ca33b8 = (double)(in_ST3 + (float10)_DAT_00ca33b8);
          _DAT_00ca33c0 = (double)local_7e + _DAT_00ca33c0;
          local_10c = (uint)local_f4;
          _DAT_00ca33c8 = (double)local_10c + _DAT_00ca33c8;
          *in_FS_OFFSET = uStack_13c;
        }
        else {
          *in_FS_OFFSET = uStack_138;
        }
      }
      else {
        *in_FS_OFFSET = uStack_138;
      }
    }
    else {
      *in_FS_OFFSET = uStack_138;
    }
  }
  else {
    *in_FS_OFFSET = uStack_138;
  }
  puVar1 = puStack_128;
  *in_FS_OFFSET = puStack_130;
  puStack_128 = &LAB_00812f28;
  local_12c = 0x812f20;
  FUN_0040c628(&local_114,2,puVar1);
  return;
}



// === FUN_008155dc @ 008155dc size:1611 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008155dc(char param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  float10 in_ST0;
  float10 fVar6;
  float10 in_ST1;
  float10 fVar7;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 fVar8;
  undefined4 uStack_a0;
  undefined4 in_stack_ffffff68;
  undefined4 uStack_94;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  undefined4 local_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  undefined4 local_64 [2];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  char local_3d;
  double local_3c;
  double local_34;
  double local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  char local_5;
  
  puStack_78 = &stack0xfffffffc;
  puStack_84 = &stack0xfffffffc;
  local_64[0] = 0;
  puStack_7c = &LAB_00815c4d;
  local_80 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_80;
  puStack_88 = &LAB_00815c11;
  uStack_8c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8c;
  local_5 = param_1;
  if (param_1 == '\0') {
    FUN_0094c204(*(undefined4 *)PTR_DAT_00ba9c04,local_64,param_3,0);
    FUN_0040d79c(local_64,L"\\review.sub");
    DAT_00ca3400 = FUN_00965380(PTR_LAB_009635dc,1,local_64[0]);
    uStack_94 = 0;
    DAT_00ca3404 = FUN_00965380(PTR_LAB_009635dc,1,0);
    in_stack_ffffff68 = 0x81568d;
    FUN_0093ef74(*(undefined4 *)PTR_DAT_00ba9c04,DAT_00ca3400,&DAT_00ca3404);
  }
  else {
    DAT_00ca3400 = *(int *)(*(int *)PTR_DAT_00ba9c04 + 0x7a);
    DAT_00ca3404 = *(undefined4 *)(*(int *)PTR_DAT_00ba9c04 + 0x7e);
    puStack_84 = &stack0xfffffffc;
    puStack_78 = &stack0xfffffffc;
  }
  if (*(int *)(DAT_00ca3400 + 5) < 2) {
    *in_FS_OFFSET = uStack_94;
  }
  else {
    FUN_00b23344();
    in_stack_ffffff68 = 0;
    local_44 = FUN_00965380(PTR_LAB_009635dc,1,0);
    local_48 = FUN_00965380(PTR_LAB_009635dc,1,0,0);
    uStack_a0 = 0;
    local_4c = FUN_00965380(PTR_LAB_009635dc,1,0);
    local_50 = FUN_00965380(PTR_LAB_009635dc,1,0,0);
    local_54 = FUN_00965380(PTR_LAB_009635dc,1,0,0);
    local_58 = FUN_00965380(PTR_LAB_009635dc,1,0);
    if (0 < *(int *)(DAT_00ca3400 + 5)) {
      local_c = 1;
      local_5c = *(int *)(DAT_00ca3400 + 5);
      do {
        local_10 = FUN_0096405c(DAT_00ca3400,local_c);
        cVar1 = FUN_00930ed0(*(undefined4 *)PTR_DAT_00ba9c04,local_10);
        if (cVar1 == '\0') {
          fVar6 = in_ST1;
          in_ST1 = in_ST2;
          fVar7 = in_ST3;
          in_ST3 = in_ST4;
          FUN_008937bc(local_10);
          local_2c = (double)in_ST0;
        }
        else {
          local_2c = 100.0;
          fVar6 = in_ST0;
          fVar7 = in_ST2;
          in_ST5 = in_ST4;
        }
        in_ST0 = ((float10)_DAT_00815c84 - (float10)local_2c) * (float10)_DAT_00815c88;
        in_ST2 = in_ST1;
        in_ST4 = in_ST3;
        iVar2 = FUN_00407bcc();
        in_ST1 = fVar6;
        in_ST3 = fVar7;
        if (iVar2 >> 0x1f != extraout_EDX) {
          iVar2 = thunk_FUN_004072dc();
          in_ST1 = fVar6;
          in_ST3 = fVar7;
        }
        local_20 = iVar2;
        iVar2 = FUN_00964030(DAT_00ca3404,local_10);
        if (iVar2 == 0) {
          FUN_00964514(local_58,local_10,1);
          FUN_00964514(local_50,local_20,1);
        }
        else {
          FUN_00964514(local_54,local_10,1);
          FUN_00964514(local_4c,local_20,1);
        }
        local_c = local_c + 1;
        local_5c = local_5c + -1;
      } while (local_5c != 0);
    }
    local_24 = *(int *)(DAT_00ca3400 + 5);
    FUN_00964ba4(DAT_00ca3400,1);
    if (1 < *(int *)(local_54 + 5)) {
      FUN_00964194(local_54,local_4c);
    }
    if (1 < *(int *)(local_58 + 5)) {
      FUN_00964194(local_58,local_50);
    }
    if (local_5 != '\0') {
      FUN_00964ba4(*(undefined4 *)(*(int *)PTR_DAT_00ba9c04 + 0x7e),0);
      FUN_00964e3c(*(undefined4 *)(*(int *)PTR_DAT_00ba9c04 + 0x7e),local_54,1);
      FUN_00964ba4(*(undefined4 *)(*(int *)PTR_DAT_00ba9c04 + 0x82),0);
      FUN_00964e3c(*(undefined4 *)(*(int *)PTR_DAT_00ba9c04 + 0x82),local_58,1);
    }
    if (0 < *(int *)(local_4c + 5)) {
      local_c = 1;
      local_5c = *(int *)(local_4c + 5);
      do {
        iVar2 = local_c + -1;
        fVar6 = in_ST1;
        fVar7 = in_ST3;
        if (SBORROW4(local_c,1)) {
          iVar2 = thunk_FUN_004072dc();
          fVar6 = in_ST1;
          fVar7 = in_ST3;
        }
        in_ST3 = in_ST5;
        in_ST1 = fVar7;
        local_34 = (double)iVar2 / (double)*(int *)(local_4c + 5);
        fVar7 = in_ST3;
        in_ST5 = in_ST3;
        FUN_0044abc8();
        local_3c = (double)in_ST0;
        in_ST0 = in_ST2;
        in_ST2 = in_ST4;
        in_ST4 = fVar7;
        fVar7 = in_ST5;
        FUN_00407680();
        if ((float10)local_3c <= fVar6) {
          local_14 = 1;
          iVar2 = local_14;
        }
        else {
          fVar8 = fVar7;
          FUN_00407680();
          FUN_0044abc8();
          local_3c = (double)in_ST1;
          FUN_00407680();
          in_ST0 = (float10)*(int *)(local_54 + 5) * (float10)local_3c * in_ST2;
          uVar3 = FUN_00407bd8();
          iVar2 = uVar3 + 1;
          iVar4 = extraout_EDX_00 + (uint)(0xfffffffe < uVar3);
          in_ST1 = in_ST3;
          in_ST2 = in_ST4;
          fVar6 = in_ST5;
          if (SCARRY4(extraout_EDX_00,0) != SCARRY4(extraout_EDX_00,(uint)(0xfffffffe < uVar3))) {
            iVar2 = thunk_FUN_004072dc();
            iVar4 = extraout_EDX_01;
            in_ST1 = in_ST3;
            in_ST2 = in_ST4;
            fVar6 = in_ST5;
          }
          in_ST5 = fVar8;
          in_ST4 = fVar7;
          in_ST3 = fVar6;
          if (iVar2 >> 0x1f != iVar4) {
            iVar2 = thunk_FUN_004072dc();
          }
        }
        local_14 = iVar2;
        local_10 = FUN_0096405c(local_54,local_14);
        FUN_00964514(local_44,local_10,1);
        FUN_009648e4(local_54,local_14);
        local_c = local_c + 1;
        local_5c = local_5c + -1;
      } while (local_5c != 0);
    }
    if (0 < *(int *)(local_50 + 5)) {
      local_c = 1;
      local_5c = *(int *)(local_50 + 5);
      do {
        iVar2 = local_c + -1;
        fVar6 = in_ST1;
        fVar7 = in_ST3;
        if (SBORROW4(local_c,1)) {
          iVar2 = thunk_FUN_004072dc();
          fVar6 = in_ST1;
          fVar7 = in_ST3;
        }
        in_ST3 = in_ST5;
        in_ST1 = fVar7;
        local_34 = (double)iVar2 / (double)*(int *)(local_50 + 5);
        fVar7 = in_ST3;
        in_ST5 = in_ST3;
        FUN_0044abc8();
        local_3c = (double)in_ST0;
        in_ST0 = in_ST2;
        in_ST2 = in_ST4;
        in_ST4 = fVar7;
        fVar7 = in_ST5;
        FUN_00407680();
        if ((float10)local_3c <= fVar6) {
          local_14 = 1;
          iVar2 = local_14;
        }
        else {
          fVar8 = fVar7;
          FUN_00407680();
          FUN_0044abc8();
          local_3c = (double)in_ST1;
          FUN_00407680();
          in_ST0 = (float10)*(int *)(local_58 + 5) * (float10)local_3c * in_ST2;
          uVar3 = FUN_00407bd8();
          iVar2 = uVar3 + 1;
          iVar4 = extraout_EDX_02 + (uint)(0xfffffffe < uVar3);
          in_ST1 = in_ST3;
          in_ST2 = in_ST4;
          fVar6 = in_ST5;
          if (SCARRY4(extraout_EDX_02,0) != SCARRY4(extraout_EDX_02,(uint)(0xfffffffe < uVar3))) {
            iVar2 = thunk_FUN_004072dc();
            iVar4 = extraout_EDX_03;
            in_ST1 = in_ST3;
            in_ST2 = in_ST4;
            fVar6 = in_ST5;
          }
          in_ST5 = fVar8;
          in_ST4 = fVar7;
          in_ST3 = fVar6;
          if (iVar2 >> 0x1f != iVar4) {
            iVar2 = thunk_FUN_004072dc();
          }
        }
        local_14 = iVar2;
        local_10 = FUN_0096405c(local_58,local_14);
        FUN_00964514(local_48,local_10,1);
        FUN_009648e4(local_58,local_14);
        local_c = local_c + 1;
        local_5c = local_5c + -1;
      } while (local_5c != 0);
    }
    local_18 = 0;
    local_1c = 0;
    if (0 < local_24) {
      local_5c = local_24;
      local_c = 1;
      do {
        fVar6 = (float10)local_18;
        iVar2 = local_18 + local_1c;
        if (SCARRY4(local_18,local_1c)) {
          iVar2 = thunk_FUN_004072dc();
        }
        iVar4 = iVar2 + 1;
        if (SCARRY4(iVar2,1)) {
          iVar4 = thunk_FUN_004072dc();
        }
        fVar7 = (float10)1 - (float10)param_4 / (float10)_DAT_00815c84;
        local_3d = fVar6 / (float10)iVar4 < fVar7;
        if (fVar7 <= fVar6 / (float10)iVar4) {
          bVar5 = SCARRY4(local_1c,1);
          local_1c = local_1c + 1;
          if (bVar5) {
            thunk_FUN_004072dc();
          }
        }
        else {
          bVar5 = SCARRY4(local_18,1);
          local_18 = local_18 + 1;
          if (bVar5) {
            thunk_FUN_004072dc();
          }
        }
        if ((local_3d != '\0') && (*(int *)(local_44 + 5) < local_18)) {
          local_3d = '\0';
          bVar5 = SCARRY4(local_1c,1);
          local_1c = local_1c + 1;
          if (bVar5) {
            thunk_FUN_004072dc();
          }
        }
        if ((local_3d == '\0') && (*(int *)(local_48 + 5) < local_1c)) {
          local_3d = '\x01';
          bVar5 = SCARRY4(local_18,1);
          local_18 = local_18 + 1;
          if (bVar5) {
            thunk_FUN_004072dc();
          }
        }
        if (local_3d == '\0') {
          local_10 = FUN_0096405c(local_48,local_1c);
        }
        else {
          local_10 = FUN_0096405c(local_44,local_18);
        }
        FUN_00964514(DAT_00ca3400,local_10,1);
        local_c = local_c + 1;
        local_5c = local_5c + -1;
      } while (local_5c != 0);
    }
    FUN_0040a7a0(local_44);
    FUN_0040a7a0(local_48);
    FUN_0040a7a0(local_4c);
    FUN_0040a7a0(local_50);
    if (local_5 == '\0') {
      FUN_00964b90(DAT_00ca3400);
      FUN_0040a7a0(DAT_00ca3400);
      FUN_0040a7a0(local_54);
      FUN_0040a7a0(local_58);
    }
    else {
      FUN_00944928(*(undefined4 *)PTR_DAT_00ba9c04);
      uVar3 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
      if (0xffff < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      *(short *)(*(int *)PTR_DAT_00ba9c04 + 0x440) = (short)uVar3;
      (**(code **)(**(int **)(*(int *)PTR_DAT_00ba9c04 + 0x66) + 0x10))
                (*(int **)(*(int *)PTR_DAT_00ba9c04 + 0x66),L"Learning",L"Last Auto-sort",
                 *(undefined2 *)(*(int *)PTR_DAT_00ba9c04 + 0x440));
    }
    FUN_00b23360();
    *in_FS_OFFSET = 0;
  }
  *in_FS_OFFSET = uStack_a0;
  FUN_0040c5c8(local_64,uStack_a0,in_stack_ffffff68,&LAB_00815c54);
  return;
}



// === FUN_008325b4 @ 008325b4 size:109 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008325b4(void)

{
  float10 in_ST0;
  float10 in_ST1;
  
  DAT_00ca36c7 = 0;
  _DAT_00ca36cb = 0;
  _DAT_00ca36d3 = 0;
  _DAT_00ca36d7 = 0;
  FUN_0040a340(*(int *)PTR_DAT_00ba9c04 + 0x93);
  _DAT_00ca36db = (double)in_ST0;
  FUN_0040a340(*(int *)PTR_DAT_00ba9c04 + 0x2ee);
  _DAT_00ca36e3 = (double)in_ST1;
  _DAT_00ca36eb = 0;
  _DAT_00ca36ef = 0;
  DAT_00ca36cf = 0;
  DAT_00ca36d1 = 0;
  return;
}



// === FUN_00833c90 @ 00833c90 size:182 ===

void FUN_00833c90(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 local_4b;
  undefined1 local_47;
  undefined1 local_46;
  undefined4 local_44;
  undefined1 local_3d;
  undefined4 *local_8;
  
  puStack_50 = (undefined1 *)0x833ca7;
  local_8 = param_1;
  FUN_0040def4(&local_4b,PTR_DAT_00830354);
  puStack_54 = &LAB_00833d46;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  local_47 = *(undefined1 *)(local_8 + 1);
  local_46 = *(undefined1 *)((int)local_8 + 5);
  local_4b = *local_8;
  puStack_50 = &stack0xfffffffc;
  FUN_0040c9f0(&local_44,*(undefined4 *)((int)local_8 + 7));
  local_3d = *(undefined1 *)((int)local_8 + 0xe);
  FUN_0040e290(local_8,&DAT_00ca3684,PTR_DAT_00830354);
  *(undefined1 *)(local_8 + 1) = local_47;
  *(undefined1 *)((int)local_8 + 5) = local_46;
  *local_8 = local_4b;
  FUN_0040c9a8((int)local_8 + 7,local_44);
  puVar1 = puStack_50;
  *(undefined1 *)((int)local_8 + 0xe) = local_3d;
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_00833d4d;
  puStack_54 = (undefined1 *)0x833d45;
  FUN_0040dfd0(&local_4b,PTR_DAT_00830354,puVar1);
  return;
}



// === FUN_00836e2c @ 00836e2c size:226 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00836e2c(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_FS_OFFSET;
  bool bVar5;
  ushort *puVar6;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 local_5f;
  char local_50;
  int local_1c;
  ushort local_16;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  puVar4 = &local_5f;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)param_2;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)param_2 + 2);
  puStack_6c = (undefined1 *)0x836e59;
  local_c = param_3;
  local_8 = param_1;
  FUN_0040e164(&local_5f,PTR_DAT_00830354);
  puStack_70 = &LAB_00836f0e;
  puStack_74 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_74;
  puVar6 = &local_16;
  puStack_6c = &stack0xfffffffc;
  cVar2 = FUN_008368d4(local_8,&local_5f,&local_14,puVar6,&local_1c);
  if (cVar2 != '\0') {
    bVar5 = SCARRY4(DAT_00ca36c7,1);
    DAT_00ca36c7 = DAT_00ca36c7 + 1;
    if (bVar5) {
      thunk_FUN_004072dc();
    }
    bVar5 = SCARRY4(_DAT_00ca36cb,local_1c);
    _DAT_00ca36cb = _DAT_00ca36cb + local_1c;
    if (bVar5) {
      thunk_FUN_004072dc();
    }
    _DAT_00ca36d3 = ((double)CONCAT44(uStack_10,local_14) - 1.0) + _DAT_00ca36d3;
    if (DAT_00ca36d1 < local_16) {
      DAT_00ca36d1 = local_16;
    }
    FUN_00964514(*local_c,local_8,1);
    if (local_50 == '\0') {
      FUN_0093ba90(*(undefined4 *)PTR_DAT_00ba9c04,local_8);
    }
  }
  puVar1 = puStack_74;
  *in_FS_OFFSET = (int)puVar6;
  puStack_74 = &LAB_00836f15;
  FUN_0040dfd0(&local_5f,PTR_DAT_00830354,puVar1);
  return;
}




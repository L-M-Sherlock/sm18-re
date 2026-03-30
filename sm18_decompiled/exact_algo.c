// === FUN_0071ced0 @ 0071ced0 size:703 ===

void FUN_0071ced0(undefined4 param_1,undefined4 param_2)

{
  FUN_0040c9a8(param_2,L"index");
  switch(param_1) {
  case 1:
    FUN_0040c9a8(param_2,L"edit");
    break;
  case 2:
    FUN_0040c9a8(param_2,L"browser");
    break;
  case 3:
    FUN_0040c9a8(param_2,L"options");
    break;
  case 4:
    FUN_0040c9a8(param_2,L"contwind");
    break;
  case 5:
    FUN_0040c9a8(param_2,L"analysis");
    break;
  case 6:
    FUN_0040c9a8(param_2,L"main");
    break;
  case 7:
    FUN_0040c9a8(param_2,L"elmenu");
    break;
  case 8:
    FUN_0040c9a8(param_2,L"compmenu");
    break;
  case 9:
    FUN_0040c9a8(param_2,L"recoveropt");
    break;
  case 10:
    FUN_0040c9a8(param_2,L"mercy");
    break;
  case 0xb:
    FUN_0040c9a8(param_2,L"categs");
    break;
  case 0xc:
    FUN_0040c9a8(param_2,L"categs");
    break;
  case 0xd:
    FUN_0040c9a8(param_2,L"addnew");
    break;
  case 0xe:
    FUN_0040c9a8(param_2,L"browsermenu");
    break;
  case 0xf:
    FUN_0040c9a8(param_2,L"eldata");
    break;
  case 0x10:
    FUN_0040c9a8(param_2,L"elparam");
    break;
  case 0x11:
    FUN_0040c9a8(param_2,L"register");
    break;
  case 0x12:
    FUN_0040c9a8(param_2,L"element");
    break;
  case 0x13:
    FUN_0040c9a8(param_2,L"statistics");
    break;
  case 0x14:
    FUN_0040c9a8(param_2,&DAT_0071d464);
    break;
  case 0x15:
    FUN_0040c9a8(param_2,L"statistics");
    break;
  case 0x16:
    FUN_0040c9a8(param_2,L"statistics");
    break;
  case 0x17:
    FUN_0040c9a8(param_2,L"taskman");
    break;
  case 0x18:
    FUN_0040c9a8(param_2,L"plan");
    break;
  case 0x19:
    FUN_0040c9a8(param_2,L"leech");
    break;
  case 0x1a:
    FUN_0040c9a8(param_2,L"postpone");
    break;
  case 0x1b:
    FUN_0040c9a8(param_2,L"reguse");
    break;
  case 0x1c:
    FUN_0040c9a8(param_2,L"contmenu");
    break;
  case 0x1d:
    FUN_0040c9a8(param_2,L"calendar");
    break;
  case 0x1e:
    FUN_0040c9a8(param_2,L"file");
    break;
  case 0x1f:
    FUN_0040c9a8(param_2,L"tools");
    break;
  case 0x20:
    FUN_0040c9a8(param_2,L"helpmenu");
    break;
  case 0x21:
    FUN_0040c9a8(param_2,L"window");
    break;
  case 0x22:
    FUN_0040c9a8(param_2,L"search");
    break;
  case 0x23:
    FUN_0040c9a8(param_2,L"view");
    break;
  case 0x24:
    FUN_0040c9a8(param_2,L"learnmenu");
    break;
  case 0x25:
    FUN_0040c9a8(param_2,L"priority");
    break;
  case 0x26:
    FUN_0040c9a8(param_2,L"webimport");
  }
  return;
}



// === FUN_0076c500 @ 0076c500 size:571 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076c500(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  wchar_t *pwVar7;
  undefined *puVar8;
  undefined4 uVar9;
  wchar_t *pwVar10;
  undefined *puVar11;
  undefined4 uVar12;
  wchar_t *pwVar13;
  undefined *puVar14;
  undefined4 uVar15;
  wchar_t *pwVar16;
  undefined *puVar17;
  undefined4 uVar18;
  undefined2 uVar19;
  double *pdStack_e4;
  double *pdStack_e0;
  double *pdStack_dc;
  undefined4 uStack_d8;
  undefined1 *puStack_d4;
  undefined1 *puStack_d0;
  char local_ca;
  char local_c9;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_d0 = &stack0xfffffffc;
  local_c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  puStack_d4 = &LAB_0076c74a;
  uStack_d8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_d8;
  pdStack_dc = (double *)0x76c546;
  local_8 = param_1;
  FUN_0094da18(*(undefined4 *)PTR_DAT_00ba9c04,param_1,&local_ca);
  if (local_ca == '\x01') {
    if (local_c9 == '\x01') {
      pdStack_dc = &local_24;
      pdStack_e0 = &local_2c;
      pdStack_e4 = &local_34;
      FUN_00955700(*(undefined4 *)PTR_DAT_00ba9c04,&local_ca,&local_1c,(short)&local_3c);
      local_14 = (double)in_ST0;
      pdStack_e0 = (double *)&LAB_0076c718;
      pdStack_e4 = (double *)*in_FS_OFFSET;
      *in_FS_OFFSET = &pdStack_e4;
      fVar3 = (float10)local_34 * (float10)_DAT_0076c7ec;
      pdStack_dc = (double *)&stack0xfffffffc;
      FUN_0042bc74(L"0.##%",PTR_DAT_00baa920,&local_40,SUB104(fVar3,0),
                   (int)((unkuint10)fVar3 >> 0x20),(short)((unkuint10)fVar3 >> 0x40));
      fVar3 = (float10)local_2c * (float10)_DAT_0076c7ec;
      FUN_0042bc74(L"0.##%",PTR_DAT_00baa920,&local_44,SUB104(fVar3,0),
                   (int)((unkuint10)fVar3 >> 0x20),(short)((unkuint10)fVar3 >> 0x40));
      fVar3 = (float10)local_24 * (float10)_DAT_0076c7ec;
      FUN_0042bc74(L"0.##%",PTR_DAT_00baa920,&local_48,SUB104(fVar3,0),
                   (int)((unkuint10)fVar3 >> 0x20),(short)((unkuint10)fVar3 >> 0x40));
      fVar3 = (float10)local_3c * (float10)_DAT_0076c7ec;
      FUN_0042bc74(L"0.##%",PTR_DAT_00baa920,&local_4c,SUB104(fVar3,0),
                   (int)((unkuint10)fVar3 >> 0x20),(short)((unkuint10)fVar3 >> 0x40));
      fVar3 = (float10)local_1c * (float10)_DAT_0076c7ec;
      FUN_0042bc74(L"0.##%",PTR_DAT_00baa920,&local_50,SUB104(fVar3,0),
                   (int)((unkuint10)fVar3 >> 0x20),(short)((unkuint10)fVar3 >> 0x40));
      fVar3 = (float10)local_14 * (float10)_DAT_0076c7ec;
      FUN_0042bc74(L"0.##%",PTR_DAT_00baa920,&local_54,SUB104(fVar3,0),
                   (int)((unkuint10)fVar3 >> 0x20),(short)((unkuint10)fVar3 >> 0x40));
      uVar2 = local_54;
      uVar19 = 0xc814;
      puVar17 = &DAT_0076c864;
      pwVar16 = L"Lapses: ";
      puVar14 = &DAT_0076c864;
      pwVar13 = L"Repetitions: ";
      puVar11 = &DAT_0076c864;
      pwVar10 = L"A-Factor: ";
      puVar8 = &DAT_0076c864;
      pwVar7 = L"First grade: ";
      puVar5 = &DAT_0076c864;
      puVar4 = &DAT_0076c864;
      uVar6 = local_50;
      uVar9 = local_4c;
      uVar12 = local_48;
      uVar15 = local_44;
      uVar18 = local_40;
      FUN_0040d87c(&local_c,0x12);
      *in_FS_OFFSET = uVar2;
      FUN_0040c5c8(&local_54,uVar2,puVar4,&DAT_0076c71f,puVar5,uVar6,pwVar7,puVar8,uVar9,pwVar10,
                   puVar11,uVar12,pwVar13,puVar14,uVar15,pwVar16,puVar17,uVar18,uVar19);
      FUN_0040c5c8(&local_50);
      FUN_0040c5c8(&local_4c);
      FUN_0040c5c8(&local_48);
      FUN_0040c5c8(&local_44);
      FUN_0040c5c8(&local_40);
      return;
    }
    pdStack_dc = (double *)0x76c571;
    FUN_00b2e42c(L"Element not memorized");
  }
  else {
    pdStack_dc = (double *)0x76c559;
    FUN_00b2e42c(L"Only items provide difficulty estimates");
  }
  puVar1 = puStack_d0;
  *in_FS_OFFSET = uStack_d8;
  puStack_d0 = &LAB_0076c751;
  puStack_d4 = (undefined1 *)0x76c741;
  FUN_0040c628(&local_54,6,puVar1);
  puStack_d4 = (undefined1 *)0x76c749;
  FUN_0040c5c8(&local_c);
  return;
}



// === FUN_0079f878 @ 0079f878 size:1288 ===

void FUN_0079f878(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_20 = &stack0xfffffffc;
  local_2c = &stack0xfffffffc;
  local_10 = 6;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_0079fdbc;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_30 = &LAB_0079fd4b;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_38 = 0x79f8bb;
  local_c = param_2;
  local_8 = param_1;
  FUN_00b21a4c(param_1,&local_10,&stack0xffffffec);
  local_38 = 0x79f8c8;
  cVar2 = FUN_00b094d8(local_10,L"Type");
  if (cVar2 == '\0') {
    local_38 = 0x79f8e1;
    uVar3 = FUN_009a6800(unaff_EBX);
    *(undefined1 *)(local_c + 0x2c) = uVar3;
    local_38 = 0x79f8f5;
    FUN_00b21a4c(local_8,&local_10,&stack0xffffffec);
    local_38 = 0x79f902;
    cVar2 = FUN_00b094d8(local_10,L"Status");
    if (cVar2 == '\0') {
      local_38 = 0x79f91b;
      uVar3 = FUN_009a666c(unaff_EBX);
      *(undefined1 *)(local_c + 0x2d) = uVar3;
      local_38 = 0x79f92f;
      FUN_00b21a4c(local_8,&local_10,&stack0xffffffec);
      local_38 = 0x79f93c;
      cVar2 = FUN_00b094d8(local_10,L"FirstGrade");
      if (cVar2 == '\0') {
        local_38 = 0x79f95b;
        uVar3 = FUN_00409148(unaff_EBX,PTR_DAT_00ba9d40);
        *(undefined1 *)(local_c + 0x99) = uVar3;
        local_38 = 0x79f972;
        FUN_00b21a4c(local_8,&local_10,&stack0xffffffec);
        local_38 = 0x79f97f;
        cVar2 = FUN_00b094d8(local_10,L"Ordinal");
        if (cVar2 == '\0') {
          local_38 = 0x79f99e;
          FUN_0040a130(unaff_EBX,PTR_DAT_00ba9d40);
          local_38 = 0x79f9ab;
          FUN_0040a370(local_c + 0x93);
          if (*(int *)PTR_DAT_00ba9d40 != 0) {
            local_38 = 0x79f9c5;
            FUN_0040d7f4(&local_20,L"Wrong ordinal: ",unaff_EBX);
            local_38 = 0x79f9cd;
            FUN_00b0ea0c(local_20);
            *(undefined4 *)(local_c + 0x93) = 0x87;
            *(undefined2 *)(local_c + 0x97) = 0x4800;
          }
          local_38 = 0x79f9f1;
          FUN_00b21a4c(local_8,&local_10,&stack0xffffffec);
          local_38 = 0x79f9fe;
          cVar2 = FUN_00b094d8(local_10,L"Repetitions");
          if (cVar2 == '\0') {
            local_38 = 0x79fa1d;
            uVar4 = FUN_00409148(unaff_EBX,PTR_DAT_00ba9d40);
            *(undefined2 *)(local_c + 0x38) = uVar4;
            local_38 = 0x79fa32;
            FUN_00b21a4c(local_8,&local_10,&stack0xffffffec);
            local_38 = 0x79fa3f;
            cVar2 = FUN_00b094d8(local_10,L"Lapses");
            if (cVar2 == '\0') {
              local_38 = 0x79fa5e;
              uVar4 = FUN_00409148(unaff_EBX,PTR_DAT_00ba9d40);
              *(undefined2 *)(local_c + 0x3a) = uVar4;
              local_38 = 0x79fa73;
              FUN_00b21a4c(local_8,&local_10,&stack0xffffffec);
              local_38 = 0x79fa80;
              cVar2 = FUN_00b094d8(local_10,L"Interval");
              if (cVar2 == '\0') {
                local_38 = 0x79fa9f;
                uVar4 = FUN_00409148(unaff_EBX,PTR_DAT_00ba9d40);
                *(undefined2 *)(local_c + 0x3c) = uVar4;
                local_38 = 0x79fab4;
                FUN_00b21a4c(local_8,&local_10,&stack0xffffffec);
                local_38 = 0x79fac1;
                cVar2 = FUN_00b094d8(local_10,L"LastRepetition");
                if (cVar2 == '\0') {
                  local_38 = 0x79fae0;
                  iVar5 = FUN_007a1954(unaff_EBX,*(undefined4 *)(local_c + 8));
                  uVar6 = iVar5 + 0x8000;
                  if (0xffff < uVar6) {
                    local_38 = 0x79faf1;
                    uVar6 = thunk_FUN_004072dc();
                  }
                  *(short *)(local_c + 0x3e) = (short)uVar6 + -0x8000;
                  local_38 = 0x79fb0b;
                  FUN_00b21a4c(local_8,&local_10,&stack0xffffffec);
                  local_38 = 0x79fb18;
                  cVar2 = FUN_00b094d8(local_10,L"AFactor");
                  if (cVar2 == '\0') {
                    local_38 = 0x79fb3a;
                    FUN_00b1a7ac(unaff_EBX,&stack0xffffffe4,PTR_DAT_00ba9d40);
                    if (*(int *)PTR_DAT_00ba9d40 != 0) {
                      local_38 = 0x79fb54;
                      FUN_0040d7f4(&local_24,L"Wrong AFactor: ",unaff_EBX);
                      local_38 = 0x79fb5c;
                      FUN_00b0ea0c(local_24);
                    }
                    local_38 = 0x79fb76;
                    FUN_0040a370(local_c + 0x48);
                    local_38 = 0x79fb84;
                    FUN_00b21a4c(local_8,&local_10,&stack0xffffffec);
                    local_38 = 0x79fb91;
                    cVar2 = FUN_00b094d8(local_10,L"UFactor");
                    if (cVar2 == '\0') {
                      local_38 = 0x79fbb3;
                      FUN_00b1a7ac(unaff_EBX,&stack0xffffffe4,PTR_DAT_00ba9d40);
                      if (*(int *)PTR_DAT_00ba9d40 != 0) {
                        local_38 = 0x79fbcd;
                        FUN_0040d7f4(&local_28,L"Wrong UFactor: ",unaff_EBX);
                        local_38 = 0x79fbd5;
                        FUN_00b0ea0c(local_28);
                      }
                      local_38 = 0x79fbef;
                      FUN_0040a370(local_c + 0x4e);
                      if (*(short *)(local_c + 0x38) == 1) {
                        local_38 = 0x79fc04;
                        FUN_0040a340(local_c + 0x4e);
                        local_38 = 0x79fc09;
                        uVar6 = FUN_00407bcc();
                        if (extraout_EDX != 0 || *(ushort *)(local_c + 0x3c) != uVar6) {
                          local_2c = (undefined1 *)(uint)*(ushort *)(local_c + 0x3c);
                          local_38 = 0x79fc39;
                          FUN_0040a370(local_c + 0x4e,uVar6);
                        }
                      }
                      local_38 = 0x79fc47;
                      FUN_00b21a4c(local_8,&local_10,&stack0xffffffec);
                      local_38 = 0x79fc54;
                      cVar2 = FUN_00b094d8(local_10,L"ForgettingIndex");
                      if (cVar2 == '\0') {
                        local_38 = 0x79fc73;
                        uVar3 = FUN_00409148(unaff_EBX,PTR_DAT_00ba9d40);
                        *(undefined1 *)(local_c + 0x5c) = uVar3;
                        local_38 = 0x79fc87;
                        FUN_00b21a4c(local_8,&local_10,&stack0xffffffec);
                        local_38 = 0x79fc94;
                        cVar2 = FUN_00b094d8(local_10,L"Reference");
                        if (cVar2 == '\0') {
                          local_38 = 0x79fcb5;
                          FUN_0040c9a8(local_c + 0xd6,unaff_EBX);
                          local_38 = 0x79fcc0;
                          FUN_007a1a80(local_8,local_c);
                          local_38 = 0x79fccb;
                          FUN_007a1d14(local_8,local_c);
                          local_38 = 0x79fcd9;
                          FUN_00b21a4c(local_8,&local_10,&stack0xffffffec);
                          local_38 = 0x79fce6;
                          cVar2 = FUN_00b094d8(local_10,L"SourceArticle");
                          if (cVar2 == '\0') {
                            local_38 = 0x79fcff;
                            uVar7 = FUN_00428648(unaff_EBX);
                            *(undefined4 *)(local_c + 0x18) = uVar7;
                            local_38 = 0x79fd13;
                            FUN_00b21a4c(local_8,&local_10,&stack0xffffffec);
                            local_38 = 0x79fd25;
                            iVar5 = FUN_0040dbd4(L"End ElementInfo #",local_10,1);
                            if (iVar5 == 0) {
                              local_38 = 0x79fd39;
                              FUN_0040d7f4(&local_30,L"Expected: End ElementInfo #\r\n   Found: ",
                                           local_10);
                              local_38 = 0x79fd41;
                              FUN_00b0ea0c(local_30);
                            }
                            *in_FS_OFFSET = uStack_34;
                          }
                          else {
                            *in_FS_OFFSET = uStack_34;
                          }
                        }
                        else {
                          *in_FS_OFFSET = uStack_34;
                        }
                      }
                      else {
                        *in_FS_OFFSET = uStack_34;
                      }
                    }
                    else {
                      *in_FS_OFFSET = uStack_34;
                    }
                  }
                  else {
                    *in_FS_OFFSET = uStack_34;
                  }
                }
                else {
                  *in_FS_OFFSET = uStack_34;
                }
              }
              else {
                *in_FS_OFFSET = uStack_34;
              }
            }
            else {
              *in_FS_OFFSET = uStack_34;
            }
          }
          else {
            *in_FS_OFFSET = uStack_34;
          }
        }
        else {
          *in_FS_OFFSET = uStack_34;
        }
      }
      else {
        *in_FS_OFFSET = uStack_34;
      }
    }
    else {
      *in_FS_OFFSET = uStack_34;
    }
  }
  else {
    *in_FS_OFFSET = uStack_34;
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_0079fdc3;
  local_24 = (undefined1 *)0x79fda1;
  FUN_0040c628(&local_38,3,puVar1);
  local_24 = (undefined1 *)0x79fdae;
  FUN_0040c628(&local_28,3);
  local_24 = (undefined1 *)0x79fdbb;
  FUN_0040c628(&stack0xffffffec,2);
  return;
}



// === FUN_007a5418 @ 007a5418 size:166 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a5418(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *in_FS_OFFSET;
  wchar_t *pwStackY_34;
  wchar_t *in_stack_ffffffd4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined8 local_14;
  char local_5;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  puStack_24 = &LAB_007a54be;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_5 = param_1;
  if ((param_1 < '\x06') && (-1 < param_1)) {
    if (param_1 < '\x03') {
      local_14 = (double)CONCAT44(param_5,param_4);
    }
    else {
      local_14 = 1.0 - (double)CONCAT44(param_5,param_4);
    }
    local_14 = local_14 * (double)_DAT_007a556c;
    puStack_20 = &stack0xfffffffc;
  }
  else {
    local_14 = 1.0;
    in_stack_ffffffd4 = L"Grade ";
    FUN_004282b0((int)param_1,&local_1c);
    pwStackY_34 = L" cannot be used in computing model estimation deviations";
    FUN_0040d87c(&local_18,3);
    FUN_00b2b8f8(local_18);
  }
  *in_FS_OFFSET = pwStackY_34;
  FUN_0040c628(&local_1c,2,in_stack_ffffffd4,&LAB_007a54c5);
  return;
}



// === FUN_007a6b08 @ 007a6b08 size:5042 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a6b08(uint param_1,int *param_2)

{
  int *piVar1;
  double dVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  uint uVar11;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int extraout_ECX_01;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  int extraout_EDX_14;
  int extraout_EDX_15;
  int extraout_EDX_16;
  int extraout_EDX_17;
  int extraout_EDX_18;
  int extraout_EDX_19;
  int extraout_EDX_20;
  int extraout_EDX_21;
  int extraout_EDX_22;
  int extraout_EDX_23;
  int extraout_EDX_24;
  int extraout_EDX_25;
  int extraout_EDX_26;
  int extraout_EDX_27;
  int extraout_EDX_28;
  int extraout_EDX_29;
  int extraout_EDX_30;
  int extraout_EDX_31;
  int extraout_EDX_32;
  int extraout_EDX_33;
  int extraout_EDX_34;
  uint extraout_EDX_35;
  uint extraout_EDX_36;
  int extraout_EDX_37;
  int extraout_EDX_38;
  int extraout_EDX_39;
  uint extraout_EDX_40;
  uint extraout_EDX_41;
  uint extraout_EDX_42;
  uint extraout_EDX_43;
  int extraout_EDX_44;
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
  uint extraout_EDX_55;
  uint extraout_EDX_56;
  uint extraout_EDX_57;
  uint extraout_EDX_58;
  int extraout_EDX_59;
  uint extraout_EDX_60;
  uint extraout_EDX_61;
  uint extraout_EDX_62;
  uint extraout_EDX_63;
  int extraout_EDX_64;
  uint extraout_EDX_65;
  uint extraout_EDX_66;
  int extraout_EDX_67;
  int extraout_EDX_68;
  int extraout_EDX_69;
  int extraout_EDX_70;
  int extraout_EDX_71;
  int extraout_EDX_72;
  int extraout_EDX_73;
  int extraout_EDX_74;
  int extraout_EDX_75;
  int extraout_EDX_76;
  int extraout_EDX_77;
  uint extraout_EDX_78;
  int extraout_EDX_79;
  int extraout_EDX_80;
  int extraout_EDX_81;
  undefined4 *in_FS_OFFSET;
  bool bVar12;
  float10 in_ST0;
  float10 fVar13;
  float10 in_ST1;
  float10 fVar14;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  float10 fVar15;
  undefined4 uStack_ec;
  undefined4 uStack_e4;
  undefined1 *puStack_e0;
  undefined1 *puStack_dc;
  undefined1 *puStack_d8;
  undefined1 *puStack_d4;
  undefined1 *puStack_d0;
  undefined4 local_c0;
  uint local_bc;
  double local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  int local_98;
  short local_94;
  undefined1 local_92;
  byte local_91;
  undefined4 local_90;
  char local_8b;
  byte local_8a;
  byte local_89;
  byte local_88;
  undefined1 local_87;
  undefined1 local_86;
  byte local_85;
  byte local_84;
  byte local_83;
  ushort local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  ushort local_78;
  ushort local_76;
  undefined4 local_74;
  undefined4 local_70;
  double local_6c;
  double local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [8];
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  double local_14;
  int *local_c;
  uint local_8;
  
  local_c0 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_90 = 0;
  puStack_d0 = (undefined1 *)0x7a6b3c;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040f4e8(param_1);
  puStack_d4 = &LAB_007a7f39;
  puStack_d8 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_d8;
  local_14 = 1000.0;
  puStack_dc = (undefined1 *)0x7a6b64;
  puStack_d0 = &stack0xfffffffc;
  FUN_0040f468(local_c,PTR_DAT_0089b408);
  puStack_e0 = &LAB_007a7e78;
  uStack_e4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_e4;
  if (local_8 == 0) {
    *in_FS_OFFSET = uStack_e4;
  }
  else {
    local_91 = DAT_00bffe80;
    local_92 = 1;
    iVar8 = 0;
    if ((local_8 == 0) ||
       (uVar9 = local_8, puStack_dc = &stack0xfffffffc, *(int *)(local_8 - 4) == 0)) {
      puStack_dc = &stack0xfffffffc;
      iVar8 = thunk_FUN_004072dc();
      uVar9 = extraout_EDX;
    }
    if (*(short *)(uVar9 + 4 + iVar8 * 0x27) == 1) {
      local_24 = DAT_00bffe68;
      local_20 = DAT_00bffe6c;
      FUN_007a6360(local_8);
      local_4c = (double)in_ST0;
      local_a0 = local_8;
      if (local_8 != 0) {
        local_a0 = *(uint *)(local_8 - 4);
      }
      local_2c = local_4c;
      FUN_0040f344(local_c,PTR_DAT_0089b408,1,local_a0);
      local_78 = 0;
      local_84 = 0;
      local_85 = 0;
      uStack_ec = local_24;
      local_83 = FUN_0070f9cc();
      local_54._0_4_ = 0;
      local_54._4_4_ = 0xbff00000;
      local_6c = 0.0;
      local_82 = 0;
      local_7a = 0;
      local_7c = 0;
      local_44 = 0;
      local_40 = 0xbff00000;
      local_a4 = local_8;
      if (local_8 != 0) {
        local_a4 = *(uint *)(local_8 - 4);
      }
      uVar9 = local_a4;
      if (0xffff < local_a4) {
        uVar9 = thunk_FUN_004072dc();
      }
      if ((short)uVar9 != 0) {
        local_76 = 1;
        local_94 = (short)uVar9;
        do {
          uVar9 = local_76 - 1;
          fVar14 = in_ST2;
          if (SBORROW4((uint)local_76,1)) {
            uVar9 = thunk_FUN_004072dc();
            fVar14 = in_ST2;
          }
          if ((local_8 == 0) || (uVar11 = local_8, *(uint *)(local_8 - 4) <= uVar9)) {
            uVar9 = thunk_FUN_004072dc();
            uVar11 = extraout_EDX_01;
          }
          local_98 = uVar11 + uVar9 * 0x27;
          if (*(char *)(local_98 + 0x21) == '\x04') {
            local_92 = 0;
          }
          FUN_0070fed4(&local_2c);
          bVar12 = local_78 == 0xffff;
          local_78 = local_78 + 1;
          if (bVar12) {
            thunk_FUN_004072dc();
          }
          local_89 = local_84;
          local_8a = local_85;
          local_88 = local_83;
          if (local_76 == 1) {
            local_1c = 0.0;
          }
          else {
            uVar9 = local_76 - 1;
            if (SBORROW4((uint)local_76,1)) {
              uVar9 = thunk_FUN_004072dc();
            }
            if ((local_8 == 0) || (uVar11 = local_8, *(uint *)(local_8 - 4) <= uVar9)) {
              uVar9 = thunk_FUN_004072dc();
              uVar11 = extraout_EDX_02;
            }
            iVar8 = uVar9 * 0x27;
            uVar9 = local_76 - 2;
            if (SBORROW4((uint)local_76,2)) {
              iVar8 = thunk_FUN_004072dc();
              uVar9 = extraout_ECX;
              uVar11 = extraout_EDX_03;
            }
            uVar6 = local_8;
            if ((local_8 == 0) || (*(uint *)(local_8 - 4) <= uVar9)) {
              iVar8 = thunk_FUN_004072dc();
              uVar9 = extraout_ECX_00;
              uVar11 = extraout_EDX_04;
            }
            local_1c = *(double *)(uVar11 + 10 + iVar8) - *(double *)(uVar6 + 10 + uVar9 * 0x27);
          }
          uVar5 = local_7a;
          uVar4 = local_7c;
          if (local_1c < 0.0) {
            local_1c = 0.0;
          }
          local_7e = local_7a;
          local_80 = local_7c;
          local_7a = *(undefined2 *)(local_98 + 4);
          local_7c = *(undefined2 *)(local_98 + 6);
          local_8b = *(char *)(local_98 + 0x18);
          cVar7 = FUN_008a5c04(uVar5,uVar4,local_7a,CONCAT11((char)((ushort)local_7c >> 8),local_8b)
                               ,local_7c);
          in_ST2 = fVar14;
          if (cVar7 == '\0') {
            if (local_1c == 0.0) {
              uVar9 = local_78 - 1;
              if (SBORROW4((uint)local_78,1)) {
                uVar9 = thunk_FUN_004072dc();
                in_ST2 = fVar14;
              }
              iVar8 = *local_c;
              if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                uVar9 = thunk_FUN_004072dc();
                iVar8 = extraout_EDX_15;
              }
              *(undefined2 *)(iVar8 + uVar9 * 0x3e) = *(undefined2 *)(local_98 + 4);
              uVar9 = local_78 - 1;
              if (SBORROW4((uint)local_78,1)) {
                uVar9 = thunk_FUN_004072dc();
              }
              iVar8 = *local_c;
              if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                uVar9 = thunk_FUN_004072dc();
                iVar8 = extraout_EDX_16;
              }
              *(undefined2 *)(iVar8 + 2 + uVar9 * 0x3e) = *(undefined2 *)(local_98 + 6);
              uVar9 = local_78 - 1;
              if (SBORROW4((uint)local_78,1)) {
                uVar9 = thunk_FUN_004072dc();
              }
              iVar8 = *local_c;
              if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                uVar9 = thunk_FUN_004072dc();
                iVar8 = extraout_EDX_17;
              }
              *(undefined4 *)(iVar8 + 4 + uVar9 * 0x3e) = *(undefined4 *)(local_98 + 10);
              *(undefined4 *)(iVar8 + 8 + uVar9 * 0x3e) = *(undefined4 *)(local_98 + 0xe);
              uVar9 = local_78 - 1;
              if (SBORROW4((uint)local_78,1)) {
                uVar9 = thunk_FUN_004072dc();
              }
              iVar8 = *local_c;
              if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                uVar9 = thunk_FUN_004072dc();
                iVar8 = extraout_EDX_18;
              }
              *(undefined4 *)(iVar8 + 0xc + uVar9 * 0x3e) = (undefined4)local_1c;
              *(undefined4 *)(iVar8 + 0x10 + uVar9 * 0x3e) = local_1c._4_4_;
              uVar9 = local_78 - 1;
              if (SBORROW4((uint)local_78,1)) {
                uVar9 = thunk_FUN_004072dc();
              }
              iVar8 = *local_c;
              if ((iVar8 == 0) || (dVar2 = local_2c, *(uint *)(iVar8 + -4) <= uVar9)) {
                uVar9 = thunk_FUN_004072dc();
                iVar8 = extraout_EDX_19;
                dVar2 = local_2c;
              }
              local_2c._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
              local_2c._0_4_ = SUB84(dVar2,0);
              *(undefined4 *)(iVar8 + 0x1c + uVar9 * 0x3e) = (undefined4)local_2c;
              *(undefined4 *)(iVar8 + 0x20 + uVar9 * 0x3e) = local_2c._4_4_;
              uVar9 = local_78 - 1;
              local_2c = dVar2;
              if (SBORROW4((uint)local_78,1)) {
                uVar9 = thunk_FUN_004072dc();
              }
              iVar8 = *local_c;
              if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                uVar9 = thunk_FUN_004072dc();
                iVar8 = extraout_EDX_20;
              }
              *(undefined4 *)(iVar8 + 0x24 + uVar9 * 0x3e) = 0;
              *(undefined4 *)(iVar8 + 0x28 + uVar9 * 0x3e) = 0xbff00000;
              uVar9 = local_78 - 1;
              if (SBORROW4((uint)local_78,1)) {
                uVar9 = thunk_FUN_004072dc();
              }
              iVar8 = *local_c;
              if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                uVar9 = thunk_FUN_004072dc();
                iVar8 = extraout_EDX_21;
              }
              *(undefined1 *)(iVar8 + 0x3c + uVar9 * 0x3e) = *(undefined1 *)(local_98 + 0x18);
              uVar9 = local_78 - 1;
              if (SBORROW4((uint)local_78,1)) {
                uVar9 = thunk_FUN_004072dc();
              }
              iVar8 = *local_c;
              if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                uVar9 = thunk_FUN_004072dc();
                iVar8 = extraout_EDX_22;
              }
              *(undefined1 *)(iVar8 + 0x3d + uVar9 * 0x3e) = local_92;
              uVar9 = local_78 - 1;
              if (SBORROW4((uint)local_78,1)) {
                uVar9 = thunk_FUN_004072dc();
              }
              iVar8 = *local_c;
              if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                uVar9 = thunk_FUN_004072dc();
                iVar8 = extraout_EDX_23;
              }
              *(undefined4 *)(iVar8 + 0x14 + uVar9 * 0x3e) = local_24;
              *(undefined4 *)(iVar8 + 0x18 + uVar9 * 0x3e) = local_20;
              uVar9 = local_78 - 1;
              if (SBORROW4((uint)local_78,1)) {
                uVar9 = thunk_FUN_004072dc();
              }
              iVar8 = *local_c;
              if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                uVar9 = thunk_FUN_004072dc();
                iVar8 = extraout_EDX_24;
              }
              *(undefined4 *)(iVar8 + 0x2c + uVar9 * 0x3e) = 0;
              *(undefined4 *)(iVar8 + 0x30 + uVar9 * 0x3e) = 0x40040000;
              local_54 = local_2c;
              local_85 = FUN_0070fc8c();
            }
            else {
              local_b8 = (-*(double *)PTR_DAT_00baac8c * local_1c) / local_2c;
              fVar13 = in_ST7;
              FUN_00b18dac();
              local_34 = (double)in_ST1;
              if (DAT_00bffe80 != 0) {
                uVar9 = local_78 - 2;
                if (SBORROW4((uint)local_78,2)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_25;
                }
                local_74 = *(undefined4 *)(iVar8 + 0x2c + uVar9 * 0x3e);
                local_70 = *(undefined4 *)(iVar8 + 0x30 + uVar9 * 0x3e);
                uVar9 = local_78 - 2;
                if (SBORROW4((uint)local_78,2)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_26;
                }
                FUN_007b568c(CONCAT22((short)(uVar9 * 0x1f >> 0x10),local_7a),&local_74,uVar9,
                             (undefined4)local_1c,local_1c._4_4_,
                             *(undefined4 *)(iVar8 + 0xc + uVar9 * 0x3e),
                             *(undefined4 *)(iVar8 + 0x10 + uVar9 * 0x3e));
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_27;
                }
                *(undefined4 *)(iVar8 + 0x2c + uVar9 * 0x3e) = local_74;
                *(undefined4 *)(iVar8 + 0x30 + uVar9 * 0x3e) = local_70;
              }
              FUN_0070ff58(&local_34);
              local_84 = FUN_0070fc44();
              local_85 = FUN_0070fc8c();
              uStack_ec = local_24;
              local_83 = FUN_0070f9cc();
              local_86 = FUN_0070f980(*(undefined2 *)(local_98 + 6));
              in_ST1 = (float10)local_1c;
              uVar9 = FUN_00407bcc();
              if (extraout_EDX_28 != 0 || 0xffff < uVar9) {
                thunk_FUN_004072dc();
              }
              local_87 = FUN_0070fdb8();
              if (local_8b == '\b') {
                local_8b = '\x03';
              }
              uVar9 = FUN_008a71ec(local_8b);
              if ((uVar9 & 8) == 0) {
                local_91 = 0;
                uVar9 = local_78 - 1;
                in_ST2 = fVar14;
                local_54 = local_2c;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                  in_ST2 = fVar14;
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_29;
                }
                *(undefined2 *)(iVar8 + uVar9 * 0x3e) = *(undefined2 *)(local_98 + 4);
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_30;
                }
                *(undefined2 *)(iVar8 + 2 + uVar9 * 0x3e) = *(undefined2 *)(local_98 + 6);
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_31;
                }
                *(undefined4 *)(iVar8 + 4 + uVar9 * 0x3e) = *(undefined4 *)(local_98 + 10);
                *(undefined4 *)(iVar8 + 8 + uVar9 * 0x3e) = *(undefined4 *)(local_98 + 0xe);
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_32;
                }
                *(undefined4 *)(iVar8 + 0xc + uVar9 * 0x3e) = (undefined4)local_1c;
                *(undefined4 *)(iVar8 + 0x10 + uVar9 * 0x3e) = local_1c._4_4_;
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_33;
                }
                *(undefined4 *)(iVar8 + 0x1c + uVar9 * 0x3e) = 0;
                *(undefined4 *)(iVar8 + 0x20 + uVar9 * 0x3e) = 0xbff00000;
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_34;
                }
                *(undefined4 *)(iVar8 + 0x24 + uVar9 * 0x3e) = 0;
                *(undefined4 *)(iVar8 + 0x28 + uVar9 * 0x3e) = 0xbff00000;
                uVar9 = FUN_008971f0(0xb,*(undefined2 *)(local_98 + 4),*(undefined2 *)(local_98 + 6)
                                    );
                uVar9 = (uVar9 & 0xff) + 0x80;
                if (0xff < uVar9) {
                  uVar9 = thunk_FUN_004072dc();
                }
                cVar7 = (char)uVar9 + -0x80;
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  cVar7 = thunk_FUN_004072dc();
                  uVar9 = extraout_EDX_35;
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  cVar7 = thunk_FUN_004072dc();
                  iVar8 = extraout_ECX_01;
                  uVar9 = extraout_EDX_36;
                }
                *(char *)(iVar8 + 0x3c + uVar9 * 0x3e) = cVar7;
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_37;
                }
                *(undefined4 *)(iVar8 + 0x34 + uVar9 * 0x3e) = 0;
                *(undefined4 *)(iVar8 + 0x38 + uVar9 * 0x3e) = 0xbff00000;
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_38;
                }
                *(undefined1 *)(iVar8 + 0x3d + uVar9 * 0x3e) = local_92;
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_39;
                }
                *(undefined4 *)(iVar8 + 0x14 + uVar9 * 0x3e) = local_24;
                *(undefined4 *)(iVar8 + 0x18 + uVar9 * 0x3e) = local_20;
              }
              else {
                in_ST2 = in_ST4;
                in_ST4 = in_ST6;
                in_ST6 = fVar13;
                FUN_007b4e48(local_8b);
                local_6c = (double)(in_ST1 + (float10)local_6c);
                bVar12 = local_82 == 0xffff;
                local_82 = local_82 + 1;
                in_ST1 = in_ST3;
                fVar13 = in_ST5;
                fVar15 = in_ST6;
                if (bVar12) {
                  thunk_FUN_004072dc();
                  in_ST1 = in_ST3;
                  fVar13 = in_ST5;
                }
                in_ST5 = in_ST7;
                in_ST3 = fVar13;
                uVar9 = local_76 - 1;
                if (SBORROW4((uint)local_76,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                if ((local_8 == 0) || (uVar11 = local_8, *(uint *)(local_8 - 4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  uVar11 = extraout_EDX_40;
                }
                *(undefined4 *)PTR_DAT_00baa5e8 = *(undefined4 *)(uVar11 + uVar9 * 0x27);
                uVar9 = local_76 - 1;
                if (SBORROW4((uint)local_76,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                if ((local_8 == 0) || (uVar11 = local_8, *(uint *)(local_8 - 4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  uVar11 = extraout_EDX_41;
                }
                puVar10 = PTR_DAT_00baa224;
                *(undefined4 *)PTR_DAT_00baa224 = *(undefined4 *)(uVar11 + 10 + uVar9 * 0x27);
                *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(uVar11 + 0xe + uVar9 * 0x27);
                if ((DAT_00bffe81 != '\0') && (local_91 == 0)) {
                  local_a8 = local_8;
                  if (local_8 != 0) {
                    local_a8 = *(uint *)(local_8 - 4);
                  }
                  if (local_76 == local_a8) {
                    local_91 = 1;
                  }
                }
                if (local_91 != 0) {
                  FUN_007a5c2c(local_8b,*(undefined2 *)(local_98 + 4),local_7c,local_86,local_87,
                               local_84,local_85,local_83,local_80,local_7e);
                }
                FUN_007a65fc(*(undefined2 *)(local_98 + 4),local_7c,local_8b,&local_44,local_3c,
                             &local_64,&local_5c,&local_54,(undefined4)local_34,local_34._4_4_,
                             local_2c,&local_24,(undefined4)local_1c,local_1c._4_4_);
                uStack_ec = local_24;
                local_83 = FUN_0070f9cc();
                local_2c._0_4_ = local_5c;
                local_2c._4_4_ = local_58;
                in_ST7 = fVar15;
                if (((local_8a != 0 & local_91) != 0) && (in_ST7 = in_ST6, 0.0 < local_64)) {
                  uVar9 = local_83 - 1;
                  if (SBORROW4((uint)local_83,1)) {
                    uVar9 = thunk_FUN_004072dc();
                  }
                  if (0x14 < uVar9) {
                    uVar9 = thunk_FUN_004072dc();
                  }
                  iVar8 = (int)((longlong)(int)uVar9 * 0x1b9);
                  if ((longlong)iVar8 != (longlong)(int)uVar9 * 0x1b9) {
                    iVar8 = thunk_FUN_004072dc();
                  }
                  puVar10 = PTR_DAT_00ba979c + iVar8 * 4;
                  uVar9 = local_8a - 1;
                  if (SBORROW4((uint)local_8a,1)) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_42;
                  }
                  if (0x14 < uVar9) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_43;
                  }
                  iVar8 = (int)((longlong)(int)uVar9 * 0x15);
                  if ((longlong)iVar8 != (longlong)(int)uVar9 * 0x15) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    iVar8 = extraout_EDX_44;
                  }
                  puVar10 = puVar10 + iVar8 * 4;
                  uVar9 = local_84 - 1;
                  if (SBORROW4((uint)local_84,1)) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_45;
                  }
                  if (0x14 < uVar9) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_46;
                  }
                  fVar13 = (float10)*(int *)(puVar10 + uVar9 * 4);
                  uVar9 = local_83 - 1;
                  if (SBORROW4((uint)local_83,1)) {
                    uVar9 = thunk_FUN_004072dc();
                  }
                  if (0x14 < uVar9) {
                    uVar9 = thunk_FUN_004072dc();
                  }
                  iVar8 = (int)((longlong)(int)uVar9 * 0x1b9);
                  if ((longlong)iVar8 != (longlong)(int)uVar9 * 0x1b9) {
                    iVar8 = thunk_FUN_004072dc();
                  }
                  puVar10 = PTR_DAT_00baa204 + iVar8 * 8;
                  uVar9 = local_8a - 1;
                  if (SBORROW4((uint)local_8a,1)) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_47;
                  }
                  if (0x14 < uVar9) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_48;
                  }
                  iVar8 = (int)((longlong)(int)uVar9 * 0x15);
                  if ((longlong)iVar8 != (longlong)(int)uVar9 * 0x15) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    iVar8 = extraout_EDX_49;
                  }
                  puVar10 = puVar10 + iVar8 * 8;
                  uVar9 = local_84 - 1;
                  if (SBORROW4((uint)local_84,1)) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_50;
                  }
                  if (0x14 < uVar9) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_51;
                  }
                  fVar13 = fVar13 * (float10)*(double *)(puVar10 + uVar9 * 8) + (float10)local_64;
                  uVar9 = local_83 - 1;
                  if (SBORROW4((uint)local_83,1)) {
                    uVar9 = thunk_FUN_004072dc();
                  }
                  if (0x14 < uVar9) {
                    uVar9 = thunk_FUN_004072dc();
                  }
                  iVar8 = (int)((longlong)(int)uVar9 * 0x1b9);
                  if ((longlong)iVar8 != (longlong)(int)uVar9 * 0x1b9) {
                    iVar8 = thunk_FUN_004072dc();
                  }
                  puVar10 = PTR_DAT_00ba979c + iVar8 * 4;
                  uVar9 = local_8a - 1;
                  if (SBORROW4((uint)local_8a,1)) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_52;
                  }
                  if (0x14 < uVar9) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_53;
                  }
                  iVar8 = (int)((longlong)(int)uVar9 * 0x15);
                  if ((longlong)iVar8 != (longlong)(int)uVar9 * 0x15) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    iVar8 = extraout_EDX_54;
                  }
                  puVar10 = puVar10 + iVar8 * 4;
                  uVar9 = local_84 - 1;
                  if (SBORROW4((uint)local_84,1)) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_55;
                  }
                  if (0x14 < uVar9) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_56;
                  }
                  uVar11 = *(int *)(puVar10 + uVar9 * 4) + 1;
                  if (SCARRY4(*(int *)(puVar10 + uVar9 * 4),1)) {
                    uVar11 = thunk_FUN_004072dc();
                  }
                  fVar13 = fVar13 / (float10)(int)uVar11;
                  uVar9 = local_83 - 1;
                  in_ST6 = in_ST5;
                  local_bc = uVar11;
                  if (SBORROW4((uint)local_83,1)) {
                    uVar9 = thunk_FUN_004072dc();
                  }
                  if (0x14 < uVar9) {
                    uVar9 = thunk_FUN_004072dc();
                  }
                  iVar8 = (int)((longlong)(int)uVar9 * 0x1b9);
                  if ((longlong)iVar8 != (longlong)(int)uVar9 * 0x1b9) {
                    iVar8 = thunk_FUN_004072dc();
                  }
                  puVar10 = PTR_DAT_00baa204 + iVar8 * 8;
                  uVar9 = local_8a - 1;
                  if (SBORROW4((uint)local_8a,1)) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_57;
                  }
                  if (0x14 < uVar9) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_58;
                  }
                  iVar8 = (int)((longlong)(int)uVar9 * 0x15);
                  if ((longlong)iVar8 != (longlong)(int)uVar9 * 0x15) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    iVar8 = extraout_EDX_59;
                  }
                  puVar10 = puVar10 + iVar8 * 8;
                  uVar9 = local_84 - 1;
                  if (SBORROW4((uint)local_84,1)) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_60;
                  }
                  if (0x14 < uVar9) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_61;
                  }
                  *(double *)(puVar10 + uVar9 * 8) = (double)fVar13;
                  uVar9 = local_83 - 1;
                  in_ST7 = in_ST6;
                  if (SBORROW4((uint)local_83,1)) {
                    uVar9 = thunk_FUN_004072dc();
                  }
                  if (0x14 < uVar9) {
                    uVar9 = thunk_FUN_004072dc();
                  }
                  iVar8 = (int)((longlong)(int)uVar9 * 0x1b9);
                  if ((longlong)iVar8 != (longlong)(int)uVar9 * 0x1b9) {
                    iVar8 = thunk_FUN_004072dc();
                  }
                  puVar10 = PTR_DAT_00ba979c + iVar8 * 4;
                  uVar9 = local_8a - 1;
                  if (SBORROW4((uint)local_8a,1)) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_62;
                  }
                  if (0x14 < uVar9) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_63;
                  }
                  iVar8 = (int)((longlong)(int)uVar9 * 0x15);
                  if ((longlong)iVar8 != (longlong)(int)uVar9 * 0x15) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    iVar8 = extraout_EDX_64;
                  }
                  puVar10 = puVar10 + iVar8 * 4;
                  uVar9 = local_84 - 1;
                  if (SBORROW4((uint)local_84,1)) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_65;
                  }
                  if (0x14 < uVar9) {
                    puVar10 = (undefined *)thunk_FUN_004072dc();
                    uVar9 = extraout_EDX_66;
                  }
                  piVar1 = (int *)(puVar10 + uVar9 * 4);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + 1;
                  if (SCARRY4(iVar8,1)) {
                    thunk_FUN_004072dc();
                  }
                }
                if (DAT_00bffe80 != 0) {
                  FUN_007b58e8(local_8b);
                }
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_67;
                }
                *(undefined2 *)(iVar8 + uVar9 * 0x3e) = *(undefined2 *)(local_98 + 4);
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_68;
                }
                *(undefined2 *)(iVar8 + 2 + uVar9 * 0x3e) = *(undefined2 *)(local_98 + 6);
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_69;
                }
                *(undefined4 *)(iVar8 + 4 + uVar9 * 0x3e) = *(undefined4 *)(local_98 + 10);
                *(undefined4 *)(iVar8 + 8 + uVar9 * 0x3e) = *(undefined4 *)(local_98 + 0xe);
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_70;
                }
                *(undefined4 *)(iVar8 + 0xc + uVar9 * 0x3e) = (undefined4)local_1c;
                *(undefined4 *)(iVar8 + 0x10 + uVar9 * 0x3e) = local_1c._4_4_;
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_71;
                }
                *(undefined4 *)(iVar8 + 0x1c + uVar9 * 0x3e) = local_5c;
                *(undefined4 *)(iVar8 + 0x20 + uVar9 * 0x3e) = local_58;
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_72;
                }
                *(undefined4 *)(iVar8 + 0x24 + uVar9 * 0x3e) = (undefined4)local_34;
                *(undefined4 *)(iVar8 + 0x28 + uVar9 * 0x3e) = local_34._4_4_;
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_73;
                }
                *(undefined4 *)(iVar8 + 0x14 + uVar9 * 0x3e) = local_24;
                *(undefined4 *)(iVar8 + 0x18 + uVar9 * 0x3e) = local_20;
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_74;
                }
                *(char *)(iVar8 + 0x3c + uVar9 * 0x3e) = local_8b;
                FUN_007b4e48(CONCAT31((int3)(uVar9 * 0x1f >> 8),local_8b),iVar8,local_8b,
                             (undefined4)local_34,local_34._4_4_);
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_75;
                }
                *(double *)(iVar8 + 0x34 + uVar9 * 0x3e) = (double)fVar14;
                uVar9 = local_78 - 1;
                if (SBORROW4((uint)local_78,1)) {
                  uVar9 = thunk_FUN_004072dc();
                }
                iVar8 = *local_c;
                if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                  uVar9 = thunk_FUN_004072dc();
                  iVar8 = extraout_EDX_76;
                }
                *(undefined1 *)(iVar8 + 0x3d + uVar9 * 0x3e) = local_92;
                if (local_78 < 2) {
                  uVar9 = local_78 - 1;
                  if (SBORROW4((uint)local_78,1)) {
                    uVar9 = thunk_FUN_004072dc();
                  }
                  iVar8 = *local_c;
                  if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                    uVar9 = thunk_FUN_004072dc();
                    iVar8 = extraout_EDX_81;
                  }
                  *(undefined4 *)(iVar8 + 0x2c + uVar9 * 0x3e) = 0;
                  *(undefined4 *)(iVar8 + 0x30 + uVar9 * 0x3e) = 0x40040000;
                }
                else {
                  iVar8 = 5 - local_8b;
                  if (SBORROW4(5,(int)local_8b)) {
                    thunk_FUN_004072dc();
                    iVar8 = extraout_EDX_77;
                  }
                  fVar14 = _DAT_007a7fa8 + _DAT_007a7f9c * (float10)iVar8;
                  local_bc = 5 - (int)local_8b;
                  if (SBORROW4(5,(int)local_8b)) {
                    local_bc = iVar8;
                    thunk_FUN_004072dc();
                    local_bc = extraout_EDX_78;
                  }
                  fVar14 = _DAT_007a7fb4 - (float10)(int)local_bc * fVar14;
                  uVar9 = local_78 - 2;
                  in_ST7 = in_ST6;
                  if (SBORROW4((uint)local_78,2)) {
                    uVar9 = thunk_FUN_004072dc();
                  }
                  iVar8 = *local_c;
                  if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                    uVar9 = thunk_FUN_004072dc();
                    iVar8 = extraout_EDX_79;
                  }
                  fVar14 = fVar14 + (float10)*(double *)(iVar8 + 0x2c + uVar9 * 0x3e);
                  uVar9 = local_78 - 1;
                  if (SBORROW4((uint)local_78,1)) {
                    uVar9 = thunk_FUN_004072dc();
                  }
                  iVar8 = *local_c;
                  if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
                    uVar9 = thunk_FUN_004072dc();
                    iVar8 = extraout_EDX_80;
                  }
                  *(double *)(iVar8 + 0x2c + uVar9 * 0x3e) = (double)fVar14;
                }
              }
            }
          }
          else {
            uVar9 = local_78 - 1;
            if (SBORROW4((uint)local_78,1)) {
              uVar9 = thunk_FUN_004072dc();
              in_ST2 = fVar14;
            }
            iVar8 = *local_c;
            if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
              uVar9 = thunk_FUN_004072dc();
              iVar8 = extraout_EDX_05;
            }
            *(undefined2 *)(iVar8 + uVar9 * 0x3e) = 1;
            uVar9 = local_78 - 1;
            if (SBORROW4((uint)local_78,1)) {
              uVar9 = thunk_FUN_004072dc();
            }
            iVar8 = *local_c;
            if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
              uVar9 = thunk_FUN_004072dc();
              iVar8 = extraout_EDX_06;
            }
            *(undefined2 *)(iVar8 + 2 + uVar9 * 0x3e) = 0;
            uVar9 = local_78 - 1;
            if (SBORROW4((uint)local_78,1)) {
              uVar9 = thunk_FUN_004072dc();
            }
            iVar8 = *local_c;
            if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
              uVar9 = thunk_FUN_004072dc();
              iVar8 = extraout_EDX_07;
            }
            *(undefined4 *)(iVar8 + 4 + uVar9 * 0x3e) = *(undefined4 *)(local_98 + 10);
            *(undefined4 *)(iVar8 + 8 + uVar9 * 0x3e) = *(undefined4 *)(local_98 + 0xe);
            uVar9 = local_78 - 1;
            if (SBORROW4((uint)local_78,1)) {
              uVar9 = thunk_FUN_004072dc();
            }
            iVar8 = *local_c;
            if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
              uVar9 = thunk_FUN_004072dc();
              iVar8 = extraout_EDX_08;
            }
            *(undefined4 *)(iVar8 + 0xc + uVar9 * 0x3e) = 0;
            *(undefined4 *)(iVar8 + 0x10 + uVar9 * 0x3e) = 0;
            uVar9 = local_78 - 1;
            if (SBORROW4((uint)local_78,1)) {
              uVar9 = thunk_FUN_004072dc();
            }
            iVar8 = *local_c;
            if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
              uVar9 = thunk_FUN_004072dc();
              iVar8 = extraout_EDX_09;
            }
            *(undefined4 *)(iVar8 + 0x1c + uVar9 * 0x3e) = (undefined4)local_4c;
            *(undefined4 *)(iVar8 + 0x20 + uVar9 * 0x3e) = local_4c._4_4_;
            uVar9 = local_78 - 1;
            if (SBORROW4((uint)local_78,1)) {
              uVar9 = thunk_FUN_004072dc();
            }
            iVar8 = *local_c;
            if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
              uVar9 = thunk_FUN_004072dc();
              iVar8 = extraout_EDX_10;
            }
            *(undefined4 *)(iVar8 + 0x24 + uVar9 * 0x3e) = 0;
            *(undefined4 *)(iVar8 + 0x28 + uVar9 * 0x3e) = 0xbff00000;
            uVar9 = local_78 - 1;
            if (SBORROW4((uint)local_78,1)) {
              uVar9 = thunk_FUN_004072dc();
            }
            iVar8 = *local_c;
            if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
              uVar9 = thunk_FUN_004072dc();
              iVar8 = extraout_EDX_11;
            }
            *(undefined1 *)(iVar8 + 0x3c + uVar9 * 0x3e) = 8;
            uVar9 = local_78 - 1;
            if (SBORROW4((uint)local_78,1)) {
              uVar9 = thunk_FUN_004072dc();
            }
            iVar8 = *local_c;
            if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
              uVar9 = thunk_FUN_004072dc();
              iVar8 = extraout_EDX_12;
            }
            *(undefined1 *)(iVar8 + 0x3d + uVar9 * 0x3e) = local_92;
            uVar9 = local_78 - 1;
            if (SBORROW4((uint)local_78,1)) {
              uVar9 = thunk_FUN_004072dc();
            }
            iVar8 = *local_c;
            if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
              uVar9 = thunk_FUN_004072dc();
              iVar8 = extraout_EDX_13;
            }
            *(undefined4 *)(iVar8 + 0x14 + uVar9 * 0x3e) = DAT_00bffe68;
            *(undefined4 *)(iVar8 + 0x18 + uVar9 * 0x3e) = DAT_00bffe6c;
            uVar9 = local_78 - 1;
            if (SBORROW4((uint)local_78,1)) {
              uVar9 = thunk_FUN_004072dc();
            }
            iVar8 = *local_c;
            if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
              uVar9 = thunk_FUN_004072dc();
              iVar8 = extraout_EDX_14;
            }
            *(undefined4 *)(iVar8 + 0x2c + uVar9 * 0x3e) = 0;
            *(undefined4 *)(iVar8 + 0x30 + uVar9 * 0x3e) = 0x40040000;
            local_54 = -1.0;
            local_2c = local_4c;
          }
          local_76 = local_76 + 1;
          local_94 = local_94 + -1;
        } while (local_94 != 0);
      }
      if (local_82 != 0) {
        local_bc = (uint)local_82;
        local_14 = local_6c / (double)local_bc;
        *(double *)PTR_DAT_00baa25c = *(double *)PTR_DAT_00baa25c + local_6c;
        iVar8 = *(int *)PTR_DAT_00ba9b04;
        *(uint *)PTR_DAT_00ba9b04 = *(int *)PTR_DAT_00ba9b04 + (uint)local_82;
        if (SCARRY4(iVar8,(uint)local_82)) {
          thunk_FUN_004072dc();
        }
      }
      if (local_91 != 0) {
        uVar9 = local_83 - 1;
        if (0x13 < uVar9) {
          uVar9 = thunk_FUN_004072dc();
        }
        piVar1 = (int *)(PTR_DAT_00ba9aa8 + (uVar9 + 1) * 4 + -4);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + 1;
        if (SCARRY4(iVar8,1)) {
          thunk_FUN_004072dc();
        }
      }
      *in_FS_OFFSET = uStack_ec;
    }
    else {
      if (*PTR_DAT_00baadd4 != '\0') {
        iVar8 = 0;
        if ((local_8 == 0) || (uVar9 = local_8, *(int *)(local_8 - 4) == 0)) {
          iVar8 = thunk_FUN_004072dc();
          uVar9 = extraout_EDX_00;
        }
        FUN_009a9aa8(*(undefined4 *)(uVar9 + iVar8 * 0x27),&local_b0);
        FUN_0040d7f4(&local_ac,L"Incomplete repetition history!\r\n",local_b0);
        FUN_00b2b8f8(local_ac);
      }
      local_92 = 0;
      *in_FS_OFFSET = uStack_e4;
    }
  }
  puVar3 = puStack_d8;
  *in_FS_OFFSET = puStack_e0;
  puStack_d8 = &LAB_007a7f40;
  puStack_dc = (undefined1 *)0x7a7f0f;
  FUN_0040c5c8(&local_c0,puStack_e0,puVar3);
  puStack_dc = (undefined1 *)0x7a7f1f;
  FUN_0040c628(&local_b0,2);
  puStack_dc = (undefined1 *)0x7a7f2a;
  FUN_0040c5c8(&local_90);
  puStack_dc = (undefined1 *)0x7a7f38;
  FUN_0040f468(&local_8,PTR_DAT_0089b2f8);
  return;
}



// === FUN_007aad64 @ 007aad64 size:219 ===

void FUN_007aad64(void)

{
  undefined4 *in_FS_OFFSET;
  undefined *puVar1;
  undefined4 uStack_268;
  undefined1 *puStack_264;
  undefined1 *puStack_260;
  undefined4 local_25c;
  undefined1 local_258 [592];
  undefined4 local_8;
  
  puStack_260 = &stack0xfffffffc;
  local_25c = 0;
  local_8 = 0;
  puStack_264 = &LAB_007aae3f;
  uStack_268 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_268;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_25c);
  puVar1 = &DAT_007aae58;
  FUN_0040d87c(&local_8,4);
  FUN_00407fec(local_258,local_8);
  FUN_004072f4();
  FUN_00409054(local_258,0x90);
  FUN_004072f4();
  FUN_0040924c(local_258,PTR_DAT_00baa8a4);
  FUN_004072f4();
  FUN_0040924c(local_258,PTR_DAT_00ba9eb0);
  FUN_004072f4();
  FUN_00408228(local_258);
  FUN_004072f4();
  *in_FS_OFFSET = L"\\ForgettingCurve.dat";
  FUN_0040c5c8(&local_25c,L"\\ForgettingCurve.dat",puVar1,&LAB_007aae46);
  FUN_0040c5c8(&local_8);
  return;
}



// === FUN_007aaeac @ 007aaeac size:305 ===

void FUN_007aaeac(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_284;
  undefined1 *puStack_280;
  undefined1 *puStack_27c;
  undefined4 uStack_278;
  undefined1 *puStack_274;
  undefined1 *puStack_270;
  undefined4 local_260;
  undefined1 local_25c [596];
  undefined4 local_8;
  
  puStack_270 = &stack0xfffffffc;
  puStack_27c = &stack0xfffffffc;
  local_260 = 0;
  local_8 = 0;
  puStack_274 = &LAB_007ab003;
  uStack_278 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_278;
  puStack_280 = &LAB_007aafbc;
  uStack_284 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_284;
  FUN_00408364(PTR_DAT_00baa8a4,0x90,0);
  FUN_00408364(PTR_DAT_00ba9eb0,0x90,0);
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_260);
  uVar2 = local_260;
  FUN_0040d87c(&local_8,4);
  cVar3 = FUN_00b0cb34(local_8);
  if (cVar3 == '\0') {
    *in_FS_OFFSET = L"\\ForgettingCurve.dat";
  }
  else {
    FUN_00407fec(local_25c,local_8);
    FUN_004072f4();
    FUN_00409038(local_25c,0x90);
    FUN_004072f4();
    FUN_00408400(local_25c,PTR_DAT_00baa8a4);
    FUN_004072f4();
    FUN_00408400(local_25c,PTR_DAT_00ba9eb0);
    FUN_004072f4();
    FUN_00408228(local_25c);
    FUN_004072f4();
    *in_FS_OFFSET = L"\\ForgettingCurve.dat";
  }
  puVar1 = puStack_280;
  *in_FS_OFFSET = uVar2;
  puStack_280 = &LAB_007ab00a;
  uStack_284 = 0x7aaffa;
  FUN_0040c5c8(&local_260,uVar2,puVar1);
  uStack_284 = 0x7ab002;
  FUN_0040c5c8(&local_8);
  return;
}



// === FUN_007ab0d8 @ 007ab0d8 size:756 ===

void FUN_007ab0d8(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar3;
  undefined4 uStack_98c;
  undefined1 *puStack_988;
  undefined1 *puStack_984;
  undefined4 uStack_980;
  undefined1 *puStack_97c;
  undefined1 *puStack_978;
  undefined4 local_968;
  undefined4 local_964;
  undefined4 local_960;
  undefined4 local_95c;
  undefined1 local_958 [592];
  undefined1 local_708 [592];
  undefined1 local_4b8 [592];
  undefined1 local_268 [596];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_978 = &stack0xfffffffc;
  puStack_984 = &stack0xfffffffc;
  local_968 = 0;
  local_964 = 0;
  local_960 = 0;
  local_95c = 0;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_97c = &LAB_007ab3f2;
  uStack_980 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_980;
  puStack_988 = &LAB_007ab3a1;
  uStack_98c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_98c;
  FUN_007b2d64();
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_95c);
  FUN_0040d87c(&local_8,4);
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_960);
  FUN_0040d87c(&local_c,4);
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_964);
  pwVar3 = L"alg17";
  FUN_0040d87c(&local_10,4);
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_968);
  uVar1 = local_968;
  FUN_0040d87c(&local_14,4);
  cVar2 = FUN_00b0cb34(local_8);
  if (cVar2 == '\0') {
    *in_FS_OFFSET = L"\\RecallCases.dat";
  }
  else {
    cVar2 = FUN_00b0cb34(local_c);
    if (cVar2 == '\0') {
      *in_FS_OFFSET = L"\\RecallCases.dat";
    }
    else {
      cVar2 = FUN_00b0cb34(local_10);
      if (cVar2 == '\0') {
        *in_FS_OFFSET = L"\\RecallCases.dat";
      }
      else {
        cVar2 = FUN_00b0cb34(local_14);
        if (cVar2 == '\0') {
          *in_FS_OFFSET = L"\\RecallCases.dat";
        }
        else {
          FUN_00407fec(local_268,local_8);
          FUN_004072f4();
          FUN_00407fec(local_4b8,local_c);
          FUN_004072f4();
          FUN_00407fec(local_708,local_10);
          FUN_004072f4();
          FUN_00407fec(local_958,local_14);
          FUN_004072f4();
          FUN_00409038(local_268,0x12168);
          FUN_004072f4();
          FUN_00409038(local_4b8,0x90b4);
          FUN_004072f4();
          FUN_00409038(local_708,0x90b4);
          FUN_004072f4();
          FUN_00409038(local_958,0x90b4);
          FUN_004072f4();
          FUN_00408400(local_268,PTR_DAT_00baa204);
          FUN_004072f4();
          FUN_00408400(local_4b8,PTR_DAT_00ba979c);
          FUN_004072f4();
          FUN_00408400(local_708,PTR_DAT_00baa8d4);
          FUN_004072f4();
          FUN_00408400(local_958,PTR_DAT_00ba9ef4);
          FUN_004072f4();
          FUN_00408228(local_268);
          FUN_004072f4();
          FUN_00408228(local_4b8);
          FUN_004072f4();
          FUN_00408228(local_708);
          FUN_004072f4();
          FUN_00408228(local_958);
          FUN_004072f4();
          *in_FS_OFFSET = L"\\RecallCases.dat";
        }
      }
    }
  }
  *in_FS_OFFSET = uVar1;
  FUN_0040c628(&local_968,4,pwVar3,&LAB_007ab3f9);
  FUN_0040c628(&local_14,4);
  return;
}



// === FUN_007ab540 @ 007ab540 size:674 ===

void FUN_007ab540(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar2;
  undefined4 uStack_98c;
  undefined1 *puStack_988;
  undefined1 *puStack_984;
  undefined4 uStack_980;
  undefined1 *puStack_97c;
  undefined1 *puStack_978;
  undefined4 local_968;
  undefined4 local_964;
  undefined4 local_960;
  undefined4 local_95c;
  undefined4 local_958;
  undefined4 local_954;
  undefined4 local_950;
  undefined4 local_94c;
  undefined1 local_948 [592];
  undefined1 local_6f8 [592];
  undefined1 local_4a8 [592];
  undefined1 local_258 [596];
  
  puStack_978 = &stack0xfffffffc;
  puStack_984 = &stack0xfffffffc;
  local_964 = 0;
  local_968 = 0;
  local_95c = 0;
  local_960 = 0;
  local_954 = 0;
  local_958 = 0;
  local_94c = 0;
  local_950 = 0;
  puStack_97c = &LAB_007ab808;
  uStack_980 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_980;
  puStack_988 = &LAB_007ab7c4;
  uStack_98c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_98c;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_950);
  FUN_0040d87c(&local_94c,4);
  FUN_00407fec(local_258,local_94c);
  FUN_004072f4();
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_958);
  FUN_0040d87c(&local_954,4);
  FUN_00407fec(local_4a8,local_954);
  FUN_004072f4();
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_960);
  pwVar2 = L"alg17";
  FUN_0040d87c(&local_95c,4);
  FUN_00407fec(local_6f8,local_95c);
  FUN_004072f4();
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_968);
  uVar1 = local_968;
  FUN_0040d87c(&local_964,4);
  FUN_00407fec(local_948,local_964);
  FUN_004072f4();
  FUN_00409054(local_258,0x12168);
  FUN_004072f4();
  FUN_00409054(local_4a8,0x90b4);
  FUN_004072f4();
  FUN_00409054(local_6f8,0x90b4);
  FUN_004072f4();
  FUN_00409054(local_948,0x90b4);
  FUN_004072f4();
  FUN_0040924c(local_258,PTR_DAT_00baa204);
  FUN_004072f4();
  FUN_0040924c(local_4a8,PTR_DAT_00ba979c);
  FUN_004072f4();
  FUN_0040924c(local_6f8,PTR_DAT_00baa8d4);
  FUN_004072f4();
  FUN_0040924c(local_948,PTR_DAT_00ba9ef4);
  FUN_004072f4();
  FUN_00408228(local_258);
  FUN_004072f4();
  FUN_00408228(local_4a8);
  FUN_004072f4();
  FUN_00408228(local_6f8);
  FUN_004072f4();
  FUN_00408228(local_948);
  FUN_004072f4();
  *in_FS_OFFSET = L"\\RecallCases.dat";
  *in_FS_OFFSET = uVar1;
  FUN_0040c628(&local_968,8,pwVar2,&LAB_007ab80f);
  return;
}



// === FUN_007b13f0 @ 007b13f0 size:247 ===

void FUN_007b13f0(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_007b150d;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puStack_2c = &LAB_007b14cb;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  cVar2 = FUN_00931064(*(undefined4 *)PTR_DAT_00ba9c04,
                       *(undefined4 *)(*(int *)PTR_DAT_00ba982c + 0xe0d));
  if (cVar2 == '\0') {
    FUN_00b2e42c(L"Only graded items can have their memory variables determined");
    *in_FS_OFFSET = uStack_30;
  }
  else {
    FUN_008aa01c(*(undefined4 *)(*(int *)PTR_DAT_00ba982c + 0xe0d),&local_8);
    FUN_008a14b0(&local_8,0);
    DAT_00c501b4 = FUN_0061c7ac(PTR_PTR_LAB_007b0a5c,1,*(undefined4 *)PTR_DAT_00ba982c);
    *(undefined4 *)(DAT_00c501b4 + 0x42e) = *(undefined4 *)(*(int *)PTR_DAT_00ba982c + 0xe0d);
    FUN_0040f4ac(DAT_00c501b4 + 0x432,local_8,PTR_DAT_0089b2f8);
    FUN_00622da0(DAT_00c501b4);
    *in_FS_OFFSET = uStack_30;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = local_24;
  puStack_1c = &LAB_007b1514;
  puStack_20 = (undefined1 *)0x7b150c;
  FUN_0040f468(&local_8,PTR_DAT_0089b2f8,puVar1);
  return;
}



// === FUN_007b3354 @ 007b3354 size:1693 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b3354(undefined4 *param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 *puVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 extraout_EDX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined4 *puVar9;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar10;
  undefined4 local_47c;
  undefined8 local_478;
  uint local_470;
  undefined1 local_46c [733];
  undefined4 local_18f;
  char local_187;
  undefined4 local_17d;
  int local_175;
  double local_16d;
  double local_fc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 local_58;
  double local_54;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar8 = 0x8f;
  do {
    local_8 = 0;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puVar9 = &local_18f;
  for (iVar8 = 0x38; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = *param_1;
    param_1 = param_1 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = *(undefined2 *)param_1;
  *(undefined1 *)((int)puVar9 + 2) = *(undefined1 *)((int)param_1 + 2);
  *in_FS_OFFSET = &local_24;
  *in_FS_OFFSET = (int)&local_34 + 4;
  bVar1 = '\x02' < local_187;
  dVar4 = 1.0 - local_fc / (double)_DAT_007b3a4c;
  local_1c = (undefined1 *)local_d0;
  local_24 = local_c0;
  uStack_20 = local_bc;
  dVar2 = ABS((double)bVar1 - dVar4);
  local_470 = (uint)bVar1;
  dVar3 = (double)local_470;
  local_478._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
  local_34._4_4_ =
       (undefined4)((ulonglong)ABS((double)bVar1 - (double)CONCAT44(local_bc,local_c0)) >> 0x20);
  local_34._0_4_ = local_478._4_4_;
  local_3c = (double)CONCAT44(SUB84(dVar3,0),(int)((ulonglong)dVar4 >> 0x20));
  uStack_40 = SUB82(dVar4,0);
  uStack_3e = (undefined2)((ulonglong)dVar4 >> 0x10);
  uStack_44 = local_bc;
  local_48 = local_c0;
  local_2c._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
  uStack_4c = local_2c._4_4_;
  local_54 = (double)CONCAT44(SUB84(dVar2,0),local_34._4_4_);
  local_58 = local_478._4_4_;
  uStack_5c = 0x34b2;
  uStack_5a = 0x7b;
  local_478 = dVar3;
  local_2c = dVar2;
  FUN_007ac090();
  local_34._0_4_ = 0x7b34c4;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_47c);
  local_34._0_4_ = 0x7b34d7;
  FUN_0040d7f4(&local_8,local_47c,L"\\stats\\SM16-v-SM17.csv");
  puVar5 = local_1c;
  if (*PTR_DAT_00baa250 == '\0') {
    *in_FS_OFFSET = local_34._4_4_;
    *in_FS_OFFSET = local_24;
    local_1c = &LAB_007b3a44;
    uStack_20 = 0x7b39d0;
    FUN_0040c5c8(&local_47c,local_24,puVar5);
    uStack_20 = 0x7b39db;
    FUN_0040c5c8(&local_a8);
    uStack_20 = 0x7b39e6;
    FUN_0040c5c8(&local_a0);
    uStack_20 = 0x7b39f1;
    FUN_0040c5c8(&local_98);
    uStack_20 = 0x7b39fc;
    FUN_0040c5c8(&local_90);
    uStack_20 = 0x7b3a07;
    FUN_0040c5c8(&local_88);
    uStack_20 = 0x7b3a0f;
    FUN_0040c5c8(&local_80);
    uStack_20 = 0x7b3a17;
    FUN_0040c5c8(&local_78);
    uStack_20 = 0x7b3a1f;
    FUN_0040c5c8(&local_70);
    uStack_20 = 0x7b3a27;
    FUN_0040c5c8(&local_68);
    uStack_20 = 0x7b3a2f;
    FUN_0040c5c8(&local_58);
    uStack_20 = 0x7b3a3c;
    FUN_0040c628(&local_c,2);
    return;
  }
  local_34._0_4_ = 0x7b34fe;
  FUN_00408068(local_46c,local_8,0);
  local_34._0_4_ = 0x7b3503;
  FUN_004072f4();
  local_34._0_4_ = 0x7b350b;
  cVar6 = FUN_00b0cb34(local_8);
  if (cVar6 == '\0') {
    local_34._0_4_ = 0x7b352c;
    FUN_00407ca0(local_46c);
    local_34._0_4_ = 0x7b3531;
    FUN_004072f4();
    local_34._0_4_ = 0x7b3541;
    FUN_004097c0(local_46c,
                 L"Date, Element No, Used interval, SM16 Interval (new), SM17 Interval (new), SM17/SM16 Interval ratio, R (SM16), R (SM17)(exp), R (SM17), Grade, Success, "
                );
    local_34._0_4_ = 0x7b3546;
    FUN_00408164();
    local_34._0_4_ = 0x7b354b;
    FUN_004072f4();
    local_34._0_4_ = 0x7b355b;
    FUN_004097c0(local_46c,
                 L"abs RM16, abs RM17 (expected), abs RM17 (predicted), abs R-Metric, sqr R-Metric, Title,"
                );
    local_34._0_4_ = 0x7b3560;
    FUN_00409a10();
    local_34 = (double)CONCAT44(local_34._4_4_,0x7b3565);
    FUN_004072f4();
  }
  else {
    local_34._0_4_ = 0x7b351a;
    FUN_00407cac(local_46c);
    local_34 = (double)CONCAT44(local_34._4_4_,0x7b351f);
    FUN_004072f4();
  }
  local_34._0_4_ = 0x7b3574;
  FUN_00549fc8(*(undefined4 *)PTR_DAT_00ba982c,&local_c);
  local_34._0_4_ = 0x7b3586;
  FUN_00b21f30(&local_c,&DAT_007b3ca4,&DAT_007b3c94);
  local_34._0_4_ = 0x7b3598;
  FUN_00b21f30(&local_c,&DAT_007b3cb4,&DAT_007b3c94);
  local_34._0_4_ = 0x7b35aa;
  FUN_00b21f30(&local_c,&DAT_007b3cc8,&DAT_007b3c94);
  local_34._0_4_ = 0x7b35bc;
  FUN_00b21f30(&local_c,&DAT_007b3cd8,&DAT_007b3c94);
  local_34._0_4_ = 0x7b35ce;
  FUN_00b21f30(&local_c,&DAT_007b3cd8,&DAT_007b3c94);
  if (local_16d < 1.0) {
    local_16d = 1.0;
  }
  if (local_175 < 1) {
    local_175 = 1;
  }
  local_34 = (double)CONCAT44(local_34._4_4_,&stack0xfffffffc);
  local_3c = (double)CONCAT44(&LAB_007b396c,*in_FS_OFFSET);
  *in_FS_OFFSET = &local_3c;
  uStack_40 = 0x360b;
  uStack_3e = 0x7b;
  FUN_0042c3e8();
  local_54 = (double)in_ST0;
  uStack_40 = (undefined2)((ulonglong)local_54 >> 0x20);
  uStack_3e = (undefined2)((ulonglong)local_54 >> 0x30);
  uStack_44 = local_54._0_4_;
  local_48 = 0x7b3628;
  FUN_0042d430(L"mmm dd yyyy hh:nn:ss",PTR_DAT_00baa920,&local_58);
  uStack_40 = 0x3633;
  uStack_3e = 0x7b;
  uStack_44 = FUN_00407bcc();
  uStack_40 = (undefined2)extraout_EDX;
  uStack_3e = (undefined2)((uint)extraout_EDX >> 0x10);
  local_48 = 0x7b3643;
  uVar7 = FUN_004097c0(local_46c,local_58);
  local_48 = 0x7b364c;
  uVar7 = FUN_004098c0(uVar7,CONCAT22(extraout_var,0x2c));
  local_48 = 0x7b3657;
  uVar7 = FUN_004095e4(uVar7,local_18f);
  local_48 = 0x7b3660;
  uVar7 = FUN_004098c0(uVar7,CONCAT22(extraout_var_00,0x2c));
  local_48 = 0x7b366b;
  uVar7 = FUN_004095e4(uVar7,local_17d);
  local_48 = 0x7b3674;
  uVar7 = FUN_004098c0(uVar7,CONCAT22(extraout_var_01,0x2c));
  local_48 = 0x7b367f;
  uVar7 = FUN_004095e4(uVar7,local_175);
  local_48 = 0x7b3688;
  FUN_004098c0(uVar7,CONCAT22(extraout_var_02,0x2c));
  local_48 = 0x7b368d;
  uVar7 = FUN_0040ed10();
  uStack_40 = 0x3696;
  uStack_3e = 0x7b;
  local_6c = FUN_004098c0(uVar7,CONCAT22(extraout_var_03,0x2c));
  fVar10 = (float10)local_16d / (float10)local_175;
  local_64 = SUB104(fVar10,0);
  uStack_60 = (undefined4)((unkuint10)fVar10 >> 0x20);
  uStack_5c = (undefined2)((unkuint10)fVar10 >> 0x40);
  uStack_3e = (undefined2)((uint)local_6c >> 0x10);
  uStack_40 = uStack_5c;
  uStack_44 = uStack_60;
  local_48 = local_64;
  uStack_4c = 0x7b36c7;
  FUN_0042bc74(L"0.##",PTR_DAT_00baa920,&local_68);
  uStack_40 = 0x36d2;
  uStack_3e = 0x7b;
  uVar7 = FUN_004097c0(local_6c,local_68);
  uStack_40 = 0x36db;
  uStack_3e = 0x7b;
  local_74 = FUN_004098c0(uVar7,CONCAT22(extraout_var_04,0x2c));
  fVar10 = (float10)dVar4;
  local_48 = SUB104(fVar10,0);
  uStack_44 = (undefined4)((unkuint10)fVar10 >> 0x20);
  uStack_40 = (undefined2)((unkuint10)fVar10 >> 0x40);
  uStack_4c = 0x7b36fb;
  FUN_0042bc74(L"0.###",PTR_DAT_00baa920,&local_70);
  uStack_40 = 0x3706;
  uStack_3e = 0x7b;
  uVar7 = FUN_004097c0(local_74,local_70);
  uStack_40 = 0x370f;
  uStack_3e = 0x7b;
  local_7c = FUN_004098c0(uVar7,CONCAT22(extraout_var_05,0x2c));
  fVar10 = (float10)(double)CONCAT44(local_cc,local_1c);
  local_48 = SUB104(fVar10,0);
  uStack_44 = (undefined4)((unkuint10)fVar10 >> 0x20);
  uStack_40 = (undefined2)((unkuint10)fVar10 >> 0x40);
  uStack_4c = 0x7b372f;
  FUN_0042bc74(L"0.###",PTR_DAT_00baa920,&local_78);
  uStack_40 = 0x373a;
  uStack_3e = 0x7b;
  uVar7 = FUN_004097c0(local_7c,local_78);
  uStack_40 = 0x3743;
  uStack_3e = 0x7b;
  local_84 = FUN_004098c0(uVar7,CONCAT22(extraout_var_06,0x2c));
  fVar10 = (float10)(double)CONCAT44(uStack_20,local_24);
  local_48 = SUB104(fVar10,0);
  uStack_44 = (undefined4)((unkuint10)fVar10 >> 0x20);
  uStack_40 = (undefined2)((unkuint10)fVar10 >> 0x40);
  uStack_4c = 0x7b3763;
  FUN_0042bc74(L"0.###",PTR_DAT_00baa920,&local_80);
  uStack_40 = 0x376e;
  uStack_3e = 0x7b;
  uVar7 = FUN_004097c0(local_84,local_80);
  uStack_40 = 0x3777;
  uStack_3e = 0x7b;
  uVar7 = FUN_004098c0(uVar7,CONCAT22(extraout_var_07,0x2c));
  uStack_40 = 0x3783;
  uStack_3e = 0x7b;
  uVar7 = FUN_004095e4(uVar7,(int)local_187);
  uStack_40 = 0x378c;
  uStack_3e = 0x7b;
  uVar7 = FUN_004098c0(uVar7,CONCAT22(extraout_var_08,0x2c));
  uStack_40 = 0x3796;
  uStack_3e = 0x7b;
  uVar7 = FUN_004095e4(uVar7,local_48 >> 0x18);
  uStack_40 = 0x379f;
  uStack_3e = 0x7b;
  local_8c = FUN_004098c0(uVar7,CONCAT22(extraout_var_09,0x2c));
  fVar10 = (float10)local_2c;
  local_48 = SUB104(fVar10,0);
  uStack_44 = (undefined4)((unkuint10)fVar10 >> 0x20);
  uStack_40 = (undefined2)((unkuint10)fVar10 >> 0x40);
  uStack_4c = 0x7b37c5;
  FUN_0042bc74(L"0.####",PTR_DAT_00baa920,&local_88);
  uStack_40 = 0x37d6;
  uStack_3e = 0x7b;
  uVar7 = FUN_004097c0(local_8c,local_88);
  uStack_40 = 0x37df;
  uStack_3e = 0x7b;
  local_94 = FUN_004098c0(uVar7,CONCAT22(extraout_var_10,0x2c));
  local_470 = local_48 >> 0x18;
  fVar10 = ABS((float10)local_470 - (float10)(double)CONCAT44(local_cc,local_1c));
  local_48 = SUB104(fVar10,0);
  uStack_44 = (undefined4)((unkuint10)fVar10 >> 0x20);
  uStack_40 = (undefined2)((unkuint10)fVar10 >> 0x40);
  uStack_4c = 0x7b3818;
  FUN_0042bc74(L"0.####",PTR_DAT_00baa920,&local_90);
  uStack_40 = 0x3829;
  uStack_3e = 0x7b;
  uVar7 = FUN_004097c0(local_94,local_90);
  uStack_40 = 0x3832;
  uStack_3e = 0x7b;
  local_9c = FUN_004098c0(uVar7,CONCAT22(extraout_var_11,0x2c));
  fVar10 = (float10)local_34;
  local_48 = SUB104(fVar10,0);
  uStack_44 = (undefined4)((unkuint10)fVar10 >> 0x20);
  uStack_40 = (undefined2)((unkuint10)fVar10 >> 0x40);
  uStack_4c = 0x7b3858;
  FUN_0042bc74(L"0.####",PTR_DAT_00baa920,&local_98);
  uStack_40 = 0x3869;
  uStack_3e = 0x7b;
  uVar7 = FUN_004097c0(local_9c,local_98);
  uStack_40 = 0x3872;
  uStack_3e = 0x7b;
  local_a4 = FUN_004098c0(uVar7,CONCAT22(extraout_var_12,0x2c));
  fVar10 = (float10)local_3c;
  local_48 = SUB104(fVar10,0);
  uStack_44 = (undefined4)((unkuint10)fVar10 >> 0x20);
  uStack_40 = (undefined2)((unkuint10)fVar10 >> 0x40);
  uStack_4c = 0x7b3898;
  FUN_0042bc74(L"0.####",PTR_DAT_00baa920,&local_a0);
  uStack_40 = 0x38a9;
  uStack_3e = 0x7b;
  uVar7 = FUN_004097c0(local_a4,local_a0);
  uStack_40 = 0x38b2;
  uStack_3e = 0x7b;
  local_ac = FUN_004098c0(uVar7,CONCAT22(extraout_var_13,0x2c));
  fVar10 = (float10)(double)CONCAT26(uStack_3e,CONCAT24(uStack_40,uStack_44));
  local_48 = SUB104(fVar10,0);
  uStack_44 = (undefined4)((unkuint10)fVar10 >> 0x20);
  uStack_40 = (undefined2)((unkuint10)fVar10 >> 0x40);
  uStack_4c = 0x7b38d8;
  FUN_0042bc74(L"0.####",PTR_DAT_00baa920,&local_a8);
  uStack_40 = 0x38e9;
  uStack_3e = 0x7b;
  uVar7 = FUN_004097c0(local_ac,local_a8);
  uStack_40 = 0x38f2;
  uStack_3e = 0x7b;
  uVar7 = FUN_004098c0(uVar7,CONCAT22(extraout_var_14,0x2c));
  uStack_40 = 0x38fa;
  uStack_3e = 0x7b;
  FUN_004097c0(uVar7,local_c);
  uStack_40 = 0x38ff;
  uStack_3e = 0x7b;
  FUN_00409a10();
  uVar7 = (undefined4)local_34;
  *in_FS_OFFSET = (undefined4)local_3c;
  local_34 = (double)CONCAT44(local_34._4_4_,&DAT_007b3973);
  local_3c = (double)CONCAT44(0x7b3917,(undefined4)local_3c);
  FUN_0040c5c8(&local_a8,(undefined4)local_3c,uVar7);
  local_3c = (double)CONCAT44(0x7b3922,(undefined4)local_3c);
  FUN_0040c5c8(&local_a0);
  local_3c = (double)CONCAT44(0x7b392d,(undefined4)local_3c);
  FUN_0040c5c8(&local_98);
  local_3c = (double)CONCAT44(0x7b3938,(undefined4)local_3c);
  FUN_0040c5c8(&local_90);
  local_3c = (double)CONCAT44(0x7b3943,(undefined4)local_3c);
  FUN_0040c5c8(&local_88);
  local_3c = (double)CONCAT44(0x7b394b,(undefined4)local_3c);
  FUN_0040c5c8(&local_80);
  local_3c = (double)CONCAT44(0x7b3953,(undefined4)local_3c);
  FUN_0040c5c8(&local_78);
  local_3c = (double)CONCAT44(0x7b395b,(undefined4)local_3c);
  FUN_0040c5c8(&local_70);
  local_3c = (double)CONCAT44(0x7b3963,(undefined4)local_3c);
  FUN_0040c5c8(&local_68);
  local_3c = (double)CONCAT44(0x7b396b,(undefined4)local_3c);
  FUN_0040c5c8(&local_58);
  return;
}



// === FUN_007b4abc @ 007b4abc size:154 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b4abc(char param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  wchar_t *pwStackY_3c;
  wchar_t *pwVar1;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  undefined4 local_20;
  double local_1c;
  double local_14;
  char local_5;
  
  puStack_28 = &stack0xfffffffc;
  local_20 = 0;
  local_24 = 0;
  puStack_2c = &LAB_007b4b56;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_5 = param_1;
  if ((param_1 < '\x06') && (-1 < param_1)) {
    pwVar1 = (wchar_t *)0x7b4b25;
    FUN_007a5748(param_1);
    local_1c = (double)in_ST0;
    local_14 = ABS(param_4 - local_1c) * (double)_DAT_007b4c04;
  }
  else {
    local_14 = 1.0;
    pwVar1 = L"Grade ";
    puStack_28 = &stack0xfffffffc;
    FUN_004282b0((int)param_1,&local_24);
    pwStackY_3c = L" cannot be used in computing model estimation deviations";
    FUN_0040d87c(&local_20,3);
    FUN_00b2b8f8(local_20);
  }
  *in_FS_OFFSET = pwStackY_3c;
  FUN_0040c628(&local_24,2,pwVar1,&LAB_007b4b5d);
  return;
}



// === FUN_007c16f4 @ 007c16f4 size:2639 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c16f4(void)

{
  double dVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 extraout_var;
  undefined4 uVar8;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined4 uVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  undefined2 extraout_var_17;
  undefined2 extraout_var_18;
  undefined2 extraout_var_19;
  undefined4 *in_FS_OFFSET;
  bool bVar10;
  float10 in_ST0;
  float10 fVar11;
  float10 fVar12;
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
  undefined4 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined4 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  undefined4 uVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  undefined *local_120;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 *puStack_10c;
  undefined1 *puStack_108;
  undefined1 *puStack_104;
  undefined1 *puStack_100;
  undefined4 *puStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  wchar_t *pwStack_e4;
  undefined4 uStack_e0;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  undefined4 uStack_d8;
  undefined1 *puStack_d4;
  undefined1 *puStack_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  double local_7c;
  undefined8 local_74;
  double local_6c;
  undefined8 local_64;
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [12];
  undefined4 local_40;
  int local_3c;
  undefined *local_28;
  double local_24;
  double local_c;
  
  puStack_d0 = &stack0xfffffffc;
  local_c8 = 0;
  local_cc = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  puStack_d4 = &LAB_007c214f;
  uStack_d8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_d8;
  puVar3 = &stack0xfffffffc;
  if (DAT_00ca1680 != '\0') {
    uStack_dc = 0x174b;
    uStack_da = 0x7c;
    FUN_0040d7f4(&DAT_00ca1704,*(undefined4 *)PTR_DAT_00ba99cc,L"\\sleep\\REM_vs_Recall.csv");
    uStack_dc = 0x175d;
    uStack_da = 0x7c;
    FUN_00408068(&DAT_00ca1708,DAT_00ca1704,0);
    uStack_dc = 0x1762;
    uStack_da = 0x7c;
    FUN_004072f4();
    uStack_dc = 0x176c;
    uStack_da = 0x7c;
    FUN_00407ca0(&DAT_00ca1708);
    uStack_dc = 0x1771;
    uStack_da = 0x7c;
    FUN_004072f4();
    puVar3 = puStack_d0;
  }
  puStack_d0 = puVar3;
  uStack_dc = 0x177b;
  uStack_da = 0x7c;
  FUN_00408318(PTR_DAT_00ba9970);
  uStack_dc = 0x1780;
  uStack_da = 0x7c;
  iVar5 = FUN_004072f4();
  if (0 < iVar5) {
    DAT_00ca16c0 = 1;
    local_90 = iVar5;
    do {
      uStack_dc = 0x17a7;
      uStack_da = 0x7c;
      FUN_00408400(PTR_DAT_00ba9970,&DAT_00ca1698);
      uStack_dc = 0x17ac;
      uStack_da = 0x7c;
      FUN_004072f4();
      uStack_dc = 0x17b6;
      uStack_da = 0x7c;
      cVar4 = FUN_007c25e8(&DAT_00ca1698);
      fVar15 = in_ST0;
      if (cVar4 != '\0') {
        uStack_dc = 0x17c8;
        uStack_da = 0x7c;
        fVar15 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        in_ST6 = in_ST7;
        FUN_0040a340(&DAT_00ca16aa);
        _DAT_00ca16d0 = (double)in_ST0;
        if ((double)_DAT_007c219c < _DAT_00ca16d0) {
          _DAT_00ca16d0 = _DAT_00ca16d0 - (double)_DAT_007c219c;
        }
        DAT_00ca16e8 = DAT_00ca16a2;
        DAT_00ca16ec = DAT_00ca16a6;
        uStack_dc = (undefined2)DAT_00ca16a6;
        uStack_da = (undefined2)((uint)DAT_00ca16a6 >> 0x10);
        uStack_d8 = DAT_00ca16a2;
        pwStack_e4 = L"ꍦᚐÊ뜏逅쨖謀ပ몛謀㬒Ղ谏ڟ";
        in_ST7 = in_ST6;
        DAT_00ca1690 = FUN_007bc964();
        if (*(int *)(*(int *)PTR_DAT_00ba9b10 + 5) <= (int)(uint)DAT_00ca1690) {
          iVar5 = DAT_00ca1690 - 2;
          if (SBORROW4((uint)DAT_00ca1690,2)) {
            pwStack_e4 = (wchar_t *)0x7c184c;
            iVar5 = thunk_FUN_004072dc();
          }
          local_94 = *(int *)PTR_DAT_00baa6dc;
          if (local_94 != 0) {
            local_94 = *(int *)(local_94 + -4);
          }
          iVar6 = local_94 + -1;
          local_98 = iVar5;
          if (SBORROW4(local_94,1)) {
            pwStack_e4 = L"蔻ｬ\xffff谏م";
            iVar6 = thunk_FUN_004072dc();
          }
          if (local_98 <= iVar6) {
            uVar7 = DAT_00ca1690 - 2;
            if (SBORROW4((uint)DAT_00ca1690,2)) {
              pwStack_e4 = (wchar_t *)0x7c18a6;
              uVar7 = thunk_FUN_004072dc();
            }
            iVar5 = *(int *)PTR_DAT_00baa6dc;
            if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar7)) {
              pwStack_e4 = (wchar_t *)0x7c18bc;
              uVar7 = thunk_FUN_004072dc();
              iVar5 = extraout_EDX;
            }
            pwStack_e4 = *(wchar_t **)(iVar5 + 0x16 + uVar7 * 0x92);
            uVar8 = *(undefined4 *)(iVar5 + 0x12 + uVar7 * 0x92);
            uStack_e8 = (undefined2)uVar8;
            uStack_e6 = (undefined2)((uint)uVar8 >> 0x10);
            uStack_ec = 0x7c18cc;
            FUN_007b8be0();
            local_64 = (double)fVar15;
            local_bc = (uint)DAT_00ca1690;
            dVar1 = (double)local_bc;
            local_c4._4_4_ = (wchar_t *)((ulonglong)dVar1 >> 0x20);
            pwStack_e4 = local_c4._4_4_;
            uStack_e8 = SUB82(dVar1,0);
            uStack_e6 = (undefined2)((ulonglong)dVar1 >> 0x10);
            uStack_ec = 0x7c18fb;
            local_c4 = dVar1;
            FUN_007b90c0();
            dVar1 = (double)((float10)_DAT_00ca16d0 / (float10)_DAT_007c219c + in_ST1);
            local_c4._4_4_ = (wchar_t *)((ulonglong)dVar1 >> 0x20);
            pwStack_e4 = local_c4._4_4_;
            uStack_e8 = SUB82(dVar1,0);
            uStack_e6 = (undefined2)((ulonglong)dVar1 >> 0x10);
            uStack_ec = 0x40380000;
            uStack_f0 = 0;
            uStack_f4 = 0x40000000;
            uStack_f8 = 0;
            puStack_fc = &local_8c;
            puStack_100 = local_4c;
            puStack_104 = local_54;
            puStack_108 = local_5c;
            puStack_10c = &local_b8;
            uStack_110 = 0x7c1955;
            fVar15 = in_ST7;
            fVar11 = in_ST7;
            local_c4 = dVar1;
            FUN_007ba5d0(*(undefined4 *)PTR_DAT_00ba9b10,1,&local_84);
            uStack_110 = local_88;
            uStack_114 = local_8c;
            uStack_11c._4_4_ = (undefined1 *)0x7c1966;
            cVar4 = FUN_007b9a1c();
            if (cVar4 == '\0') {
              local_6c = 0.0;
              fVar14 = in_ST4;
            }
            else {
              uStack_110 = local_88;
              uStack_114 = local_8c;
              uStack_11c._4_4_ = (undefined1 *)0x7c1985;
              fVar14 = in_ST7;
              FUN_007b8be0();
              local_74 = (double)in_ST2;
              uStack_110 = local_80;
              uStack_114 = local_84;
              uStack_11c._4_4_ = (undefined1 *)0x7c1994;
              in_ST2 = in_ST5;
              in_ST5 = fVar15;
              in_ST7 = fVar11;
              FUN_007b8be0();
              local_7c = (double)in_ST3;
              uStack_110 = local_74._4_4_;
              uStack_114 = (undefined4)local_74;
              local_120 = local_64._4_4_;
              in_ST3 = in_ST6;
              in_ST6 = fVar11;
              uStack_11c = local_7c;
              FUN_007c15e0();
              local_6c = (double)(in_ST4 * (float10)_DAT_007c21a0);
            }
            bVar10 = SCARRY4(DAT_00ca1684,1);
            DAT_00ca1684 = DAT_00ca1684 + 1;
            if (bVar10) {
              uStack_110 = 0x7c19c7;
              thunk_FUN_004072dc();
            }
            fVar11 = (float10)local_6c / (float10)_DAT_007c21a4;
            uStack_110 = 0x7c19d5;
            uVar7 = FUN_00407bcc();
            if (extraout_EDX_00 != 0 || 0xffff < uVar7) {
              uStack_110 = 0x7c19e6;
              uVar7 = thunk_FUN_004072dc();
            }
            DAT_00ca1700 = (ushort)uVar7;
            if (0x18 < DAT_00ca1700) {
              DAT_00ca1700 = 0x18;
            }
            if (DAT_00c7a2b1 == '\0') {
              local_bc = (uint)('\x02' < DAT_00ca16b0);
              _DAT_00ca16c8 = (double)local_bc;
            }
            else {
              uStack_110 = 0x7c1a12;
              FUN_007a5748(DAT_00ca16b0);
              _DAT_00ca16c8 = (double)fVar11;
              fVar11 = in_ST2;
              in_ST2 = in_ST3;
              in_ST3 = fVar14;
              fVar14 = in_ST5;
              in_ST5 = in_ST6;
              in_ST6 = in_ST7;
            }
            fVar12 = (float10)_DAT_00ca16c8 * (float10)_DAT_007c21a8;
            uStack_110 = 0x7c1a4e;
            iVar5 = FUN_00407bcc();
            if (iVar5 >> 0x1f != extraout_EDX_01) {
              uStack_110 = 0x7c1a5c;
              iVar5 = thunk_FUN_004072dc();
            }
            fVar13 = (float10)iVar5;
            uVar7 = (uint)DAT_00ca1700;
            fVar15 = in_ST5;
            in_ST1 = in_ST6;
            local_3c = iVar5;
            if (0x721 < uVar7) {
              uStack_110 = 0x7c1a75;
              uVar7 = thunk_FUN_004072dc();
              fVar15 = in_ST5;
              in_ST1 = in_ST6;
            }
            fVar13 = fVar13 + (float10)(double)(&DAT_00c7a2b8)[uVar7];
            uVar7 = (uint)DAT_00ca1700;
            if (0x721 < uVar7) {
              uStack_110 = 0x7c1a8f;
              uVar7 = thunk_FUN_004072dc();
            }
            (&DAT_00c7a2b8)[uVar7] = (double)fVar13;
            uStack_110 = DAT_00ca16d4;
            uStack_114 = DAT_00ca16d0;
            uStack_11c._4_4_ = (undefined1 *)0x7c1aae;
            FUN_007c011c(DAT_00ca1690);
            fVar12 = (float10)1 - fVar12;
            uVar7 = (uint)DAT_00ca1700;
            fVar13 = in_ST1;
            if (0x721 < uVar7) {
              uStack_110 = 0x7c1ac5;
              uVar7 = thunk_FUN_004072dc();
            }
            fVar12 = fVar12 + (float10)*(double *)(&DAT_00c7dbc8 + uVar7 * 2);
            uVar7 = (uint)DAT_00ca1700;
            if (0x721 < uVar7) {
              uStack_110 = 0x7c1adf;
              uVar7 = thunk_FUN_004072dc();
            }
            *(double *)(&DAT_00c7dbc8 + uVar7 * 2) = (double)fVar12;
            uStack_110 = DAT_00ca16d4;
            uStack_114 = DAT_00ca16d0;
            uStack_11c._4_4_ = (undefined1 *)0x7c1afe;
            fVar12 = fVar13;
            FUN_007c1000(DAT_00ca1690);
            local_c4 = (double)fVar11;
            uStack_110 = DAT_00ca16d4;
            uStack_114 = DAT_00ca16d0;
            uStack_11c._4_4_ = (undefined1 *)0x7c1b1c;
            FUN_007bffcc(CONCAT22(extraout_var,DAT_00ca1690));
            fVar11 = (float10)1 - (in_ST2 + (float10)local_c4);
            uVar7 = (uint)DAT_00ca1700;
            in_ST2 = fVar13;
            in_ST4 = fVar12;
            if (0x721 < uVar7) {
              uStack_110 = 0x7c1b39;
              uVar7 = thunk_FUN_004072dc();
              in_ST2 = fVar13;
            }
            fVar11 = fVar11 + (float10)*(double *)(&DAT_00c814d8 + uVar7 * 2);
            uVar7 = (uint)DAT_00ca1700;
            if (0x721 < uVar7) {
              uStack_110 = 0x7c1b53;
              uVar7 = thunk_FUN_004072dc();
            }
            *(double *)(&DAT_00c814d8 + uVar7 * 2) = (double)fVar11;
            uStack_110 = DAT_00ca16d4;
            uStack_d8 = DAT_00ca16d0;
            uStack_11c._4_4_ = (undefined1 *)0x7c1b72;
            in_ST5 = in_ST4;
            FUN_007c0218(DAT_00ca1690);
            uVar7 = (uint)DAT_00ca1700;
            if (0x721 < uVar7) {
              uStack_11c._4_4_ = (undefined1 *)0x7c1b85;
              uVar7 = thunk_FUN_004072dc();
            }
            fVar11 = in_ST3 + (float10)*(double *)(&DAT_00c84de8 + uVar7 * 2);
            uVar7 = (uint)DAT_00ca1700;
            in_ST3 = fVar12;
            if (0x721 < uVar7) {
              uStack_11c._4_4_ = (undefined1 *)0x7c1b9f;
              uVar7 = thunk_FUN_004072dc();
              in_ST3 = fVar12;
            }
            *(double *)(&DAT_00c84de8 + uVar7 * 2) = (double)fVar11;
            uStack_11c._4_4_ = (undefined1 *)DAT_00ca16e4;
            uStack_11c._0_4_ = (undefined1 *)DAT_00ca16e0;
            local_120 = local_28;
            FUN_007c2494();
            uVar7 = (uint)DAT_00ca1700;
            if (0x721 < uVar7) {
              uStack_11c._4_4_ = (undefined1 *)0x7c1bdd;
              uVar7 = thunk_FUN_004072dc();
            }
            fVar11 = (float10)1 + (float10)(double)(&DAT_00c9dd58)[uVar7];
            uVar7 = (uint)DAT_00ca1700;
            if (0x721 < uVar7) {
              uStack_11c._4_4_ = (undefined1 *)0x7c1bf9;
              uVar7 = thunk_FUN_004072dc();
            }
            (&DAT_00c9dd58)[uVar7] = (double)fVar11;
            local_bc = (uint)DAT_00ca1690;
            local_c4 = (double)local_bc;
            local_120 = (undefined *)0x7c1c2c;
            in_ST6 = in_ST5;
            uStack_11c = local_c4;
            FUN_007b90c0();
            _DAT_00ca1688 = (double)fVar14;
            in_ST7 = in_ST6;
            if (DAT_00ca1680 != '\0') {
              uStack_11c._0_4_ = &LAB_007c1ece;
              local_120 = (undefined *)*in_FS_OFFSET;
              *in_FS_OFFSET = &local_120;
              uStack_11c._4_4_ = &stack0xfffffffc;
              FUN_0042c388();
              fVar15 = (float10)local_24;
              uVar21 = SUB102(fVar15,0);
              uVar22 = (undefined4)((unkuint10)fVar15 >> 0x20);
              uVar23 = (undefined2)((unkuint10)fVar15 >> 0x40);
              fVar15 = (float10)(double)CONCAT44(DAT_00ca16e4,DAT_00ca16e0);
              uVar18 = SUB102(fVar15,0);
              uVar19 = (undefined4)((unkuint10)fVar15 >> 0x20);
              uVar20 = (undefined2)((unkuint10)fVar15 >> 0x40);
              fVar15 = (float10)_DAT_00ca16d0;
              uVar9 = SUB104(fVar15,0);
              uVar16 = (undefined4)((unkuint10)fVar15 >> 0x20);
              uVar17 = (undefined2)((unkuint10)fVar15 >> 0x40);
              uVar8 = FUN_004099cc(&DAT_00ca1708,0,1,SUB108((float10)local_c,0),
                                   (short)((unkuint10)(float10)local_c >> 0x40));
              uVar8 = FUN_004098c0(uVar8,CONCAT22(extraout_var_04,0x2c));
              uVar8 = FUN_004099cc(uVar8,0,1,uVar9,uVar16,uVar17);
              uVar8 = FUN_004098c0(uVar8,CONCAT22(extraout_var_05,0x2c));
              uVar8 = FUN_004099cc(uVar8,0,1,uVar18,uVar19,uVar20);
              uVar8 = FUN_004098c0(uVar8,CONCAT22(extraout_var_06,0x2c));
              uVar8 = FUN_004099cc(uVar8,0,1,uVar21,uVar22,uVar23);
              uVar8 = FUN_004098c0(uVar8,CONCAT22(extraout_var_07,0x2c));
              uVar8 = FUN_004095e4(uVar8,(int)DAT_00ca16b0);
              uVar8 = FUN_004098c0(uVar8,CONCAT22(extraout_var_08,0x2c));
              uVar8 = FUN_004095e4(uVar8,_DAT_00ca1698);
              FUN_004098c0(uVar8,CONCAT22(extraout_var_09,0x2c));
              uVar8 = FUN_00409a00();
              local_ac = FUN_004098c0(uVar8,CONCAT22(extraout_var_10,0x2c));
              local_a4 = DAT_00ca16a2;
              local_a0 = DAT_00ca16a6;
              FUN_0042d430(L"dd.mmm.yyyy",PTR_DAT_00baa920,&local_a8,DAT_00ca16a2,
                           (short)DAT_00ca16a6);
              uVar8 = FUN_004097c0(local_ac,local_a8);
              local_b4 = FUN_004098c0(uVar8,CONCAT22(extraout_var_11,0x2c));
              FUN_0042d430(L"dd.mmm.yyyy",PTR_DAT_00baa920,&local_b0,DAT_00ca1688,
                           (short)((ulonglong)_DAT_00ca1688 >> 0x20));
              uVar8 = DAT_00ca16d0;
              FUN_007c0218(CONCAT22(extraout_var_00,DAT_00ca1690));
              uVar22 = SUB104(in_ST1,0);
              uVar23 = (undefined2)((unkuint10)in_ST1 >> 0x20);
              uVar24 = (undefined2)((unkuint10)in_ST1 >> 0x40);
              FUN_007c1000(CONCAT22(extraout_var_01,DAT_00ca1690));
              local_c4 = (double)in_ST2;
              FUN_007bffcc(CONCAT22(extraout_var_02,DAT_00ca1690));
              fVar15 = (float10)1 - (in_ST3 + (float10)local_c4);
              uVar19 = SUB104(fVar15,0);
              uVar20 = (undefined2)((unkuint10)fVar15 >> 0x20);
              uVar21 = (undefined2)((unkuint10)fVar15 >> 0x40);
              FUN_007c011c(CONCAT22(extraout_var_03,DAT_00ca1690));
              in_ST4 = (float10)1 - in_ST4;
              uVar16 = SUB104(in_ST4,0);
              uVar17 = (undefined2)((unkuint10)in_ST4 >> 0x20);
              uVar18 = (undefined2)((unkuint10)in_ST4 >> 0x40);
              uVar9 = FUN_004097c0(local_b4,local_b0);
              uVar9 = FUN_004098c0(uVar9,CONCAT22(extraout_var_12,0x2c));
              uVar9 = FUN_004095e4(uVar9,local_3c);
              uVar9 = FUN_004098c0(uVar9,CONCAT22(extraout_var_13,0x2c));
              uVar9 = FUN_004095e4(uVar9,10);
              uVar9 = FUN_004098c0(uVar9,CONCAT22(extraout_var_14,0x2c));
              uVar9 = FUN_004095e4(uVar9,local_40);
              uVar9 = FUN_004098c0(uVar9,CONCAT22(extraout_var_15,0x2c));
              uVar9 = FUN_004099cc(uVar9,0,2,uVar16,uVar17,uVar18);
              uVar9 = FUN_004098c0(uVar9,CONCAT22(extraout_var_16,0x2c));
              uVar9 = FUN_004099cc(uVar9,0,2,uVar19,uVar20,uVar21);
              uVar9 = FUN_004098c0(uVar9,CONCAT22(extraout_var_17,0x2c));
              FUN_004099cc(uVar9,0,2,uVar22,uVar23,uVar24);
              FUN_00409a10();
              puVar2 = local_120;
              *in_FS_OFFSET = uVar8;
              local_120 = &DAT_007c1ed5;
              FUN_0040c5c8(&local_b0,uVar8,puVar2);
              FUN_0040c5c8(&local_a8);
              return;
            }
          }
        }
      }
      DAT_00ca16c0 = DAT_00ca16c0 + 1;
      local_90 = local_90 + -1;
      in_ST0 = fVar15;
    } while (local_90 != 0);
  }
  uStack_dc = 0x1ef1;
  uStack_da = 0x7c;
  FUN_007c54a4();
  if (DAT_00ca1680 != '\0') {
    uStack_dc = 0x1f08;
    uStack_da = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_dc = 0x1f0d;
    uStack_da = 0x7c;
    FUN_004072f4();
    uStack_dc = 0x1f17;
    uStack_da = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_dc = 0x1f1c;
    uStack_da = 0x7c;
    FUN_004072f4();
    uStack_dc = 0x1f2b;
    uStack_da = 0x7c;
    FUN_004097c0(&DAT_00ca1708,L"------------------- Cumulative data ---------------------");
    uStack_dc = 0x1f30;
    uStack_da = 0x7c;
    FUN_00409a10();
    uStack_dc = 0x1f35;
    uStack_da = 0x7c;
    FUN_004072f4();
    uStack_dc = 0x1f44;
    uStack_da = 0x7c;
    FUN_004097c0(&DAT_00ca1708,L"Hours of wakefulness, Average Grade, Repetition cases");
    uStack_dc = 0x1f49;
    uStack_da = 0x7c;
    FUN_00409a10();
    uStack_dc = 0x1f4e;
    uStack_da = 0x7c;
    FUN_004072f4();
    DAT_00ca1700 = 0;
    do {
      uVar7 = (uint)DAT_00ca1700;
      if (0x721 < uVar7) {
        uStack_dc = 0x1f6a;
        uStack_da = 0x7c;
        uVar7 = thunk_FUN_004072dc();
      }
      if ((double)(&DAT_00c9dd58)[uVar7] <= 0.0) {
        uStack_dc = 0x2014;
        uStack_da = 0x7c;
        uVar8 = FUN_004095e4(&DAT_00ca1708,DAT_00ca1700);
        uStack_dc = 0x201e;
        uStack_da = 0x7c;
        FUN_004097c0(uVar8,L", N/A, 0");
        uStack_dc = 0x2023;
        uStack_da = 0x7c;
        FUN_00409a10();
        uStack_dc = 0x2028;
        uStack_da = 0x7c;
        FUN_004072f4();
      }
      else {
        uVar7 = (uint)DAT_00ca1700;
        if (0x721 < uVar7) {
          uStack_dc = 0x1f90;
          uStack_da = 0x7c;
          uVar7 = thunk_FUN_004072dc();
        }
        fVar15 = (float10)(double)(&DAT_00c9dd58)[uVar7];
        pwStack_e4 = SUB104(fVar15,0);
        uStack_e0 = (undefined4)((unkuint10)fVar15 >> 0x20);
        uStack_dc = (undefined2)((unkuint10)fVar15 >> 0x40);
        uVar7 = (uint)DAT_00ca1700;
        if (0x721 < uVar7) {
          uStack_e8 = 0x1fb1;
          uStack_e6 = 0x7c;
          uVar7 = thunk_FUN_004072dc();
        }
        fVar15 = (float10)(double)(&DAT_00c7a2b8)[uVar7];
        uStack_f0 = SUB104(fVar15,0);
        uStack_ec = (undefined4)((unkuint10)fVar15 >> 0x20);
        uStack_e8 = (undefined2)((unkuint10)fVar15 >> 0x40);
        uStack_f4 = 0x7c1fd0;
        uVar8 = FUN_004095e4(&DAT_00ca1708,DAT_00ca1700);
        uStack_f4 = 0x7c1fd9;
        uVar8 = FUN_004098c0(uVar8,CONCAT22(extraout_var_18,0x2c));
        uStack_f4 = 0x7c1fe5;
        uVar8 = FUN_004099cc(uVar8,0,2);
        uStack_e8 = 0x1fee;
        uStack_e6 = 0x7c;
        uVar8 = FUN_004098c0(uVar8,CONCAT22(extraout_var_19,0x2c));
        uStack_e8 = 0x1ff7;
        uStack_e6 = 0x7c;
        FUN_004099cc(uVar8,0,0);
        uStack_dc = 0x1ffc;
        uStack_da = 0x7c;
        FUN_00409a10();
        uStack_dc = 0x2001;
        uStack_da = 0x7c;
        FUN_004072f4();
      }
      DAT_00ca1700 = DAT_00ca1700 + 1;
    } while (DAT_00ca1700 != 0x19);
    uStack_dc = 0x2047;
    uStack_da = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_dc = 0x204c;
    uStack_da = 0x7c;
    FUN_004072f4();
    uStack_dc = 0x205b;
    uStack_da = 0x7c;
    uVar8 = FUN_004097c0(&DAT_00ca1708,L"Repetition cases checked: ");
    uStack_dc = 0x2066;
    uStack_da = 0x7c;
    FUN_004095e4(uVar8,DAT_00ca1684);
    uStack_dc = 0x206b;
    uStack_da = 0x7c;
    FUN_00409a10();
    uStack_dc = 0x2070;
    uStack_da = 0x7c;
    FUN_004072f4();
    uStack_dc = 0x207a;
    uStack_da = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_dc = 0x207f;
    uStack_da = 0x7c;
    FUN_004072f4();
    uStack_dc = 0x2089;
    uStack_da = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_dc = 0x208e;
    uStack_da = 0x7c;
    FUN_004072f4();
    uStack_dc = 0x209d;
    uStack_da = 0x7c;
    FUN_004097c0(&DAT_00ca1708,
                 L"Please review data carefully and compare it with your sleep logs and repetition history"
                );
    uStack_dc = 0x20a2;
    uStack_da = 0x7c;
    FUN_00409a10();
    uStack_dc = 0x20a7;
    uStack_da = 0x7c;
    FUN_004072f4();
    uStack_dc = 0x23f4;
    uStack_da = 0x7c;
    uStack_e0 = 0x7c20bc;
    FUN_00b0eb74(L"help",&local_cc);
    uStack_e0 = local_cc;
    pwStack_e4 = L" or current SuperMemo support address";
    uStack_e8 = 0x20d7;
    uStack_e6 = 0x7c;
    FUN_0040d87c(&local_c8,3);
    uStack_e8 = 0x20e7;
    uStack_e6 = 0x7c;
    FUN_004097c0(&DAT_00ca1708,local_c8);
    uStack_e8 = 0x20ec;
    uStack_e6 = 0x7c;
    FUN_00409a10();
    uStack_e8 = 0x20f1;
    uStack_e6 = 0x7c;
    FUN_004072f4();
    uStack_e8 = 0x20fb;
    uStack_e6 = 0x7c;
    FUN_00408228(&DAT_00ca1708);
    uStack_e8 = 0x2100;
    uStack_e6 = 0x7c;
    FUN_004072f4();
    uStack_e8 = 0x210a;
    uStack_e6 = 0x7c;
    FUN_00b0e5b4(DAT_00ca1704);
  }
  puVar3 = puStack_d0;
  *in_FS_OFFSET = uStack_d8;
  puStack_d0 = &LAB_007c2156;
  puStack_d4 = (undefined1 *)0x7c2127;
  FUN_0040c628(&local_cc,2,puVar3);
  puStack_d4 = (undefined1 *)0x7c2138;
  FUN_0040f468(&local_b8,PTR_DAT_007b6ba8);
  puStack_d4 = (undefined1 *)0x7c2143;
  FUN_0040c5c8(&local_b0);
  puStack_d4 = (undefined1 *)0x7c214e;
  FUN_0040c5c8(&local_a8);
  return;
}



// === FUN_007c2654 @ 007c2654 size:2643 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c2654(void)

{
  double dVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined2 extraout_var;
  undefined4 uVar7;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined4 uVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  undefined2 extraout_var_17;
  undefined4 *in_FS_OFFSET;
  bool bVar9;
  float10 in_ST0;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined2 uVar19;
  undefined4 uVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  undefined4 uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined *local_c8;
  undefined1 *puStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined8 uStack_b4;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  wchar_t *pwStack_a8;
  undefined4 uStack_a4;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  double local_88;
  uint local_80;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  wchar_t *local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  double local_3c;
  double local_34;
  undefined1 local_2c [4];
  undefined *local_28;
  double local_24;
  undefined4 local_1c;
  undefined4 uStack_18;
  double local_14;
  double local_c;
  
  puStack_94 = &stack0xfffffffc;
  local_8c = 0;
  local_90 = 0;
  local_58 = 0;
  local_60 = 0;
  puStack_98 = &LAB_007c30b3;
  uStack_9c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_9c;
  puVar3 = &stack0xfffffffc;
  if (DAT_00ca1680 != '\0') {
    uStack_a0 = 0x269f;
    uStack_9e = 0x7c;
    FUN_0040d7f4(&DAT_00ca1704,*(undefined4 *)PTR_DAT_00ba99cc,L"\\sleep\\CircadianAlertness.csv");
    uStack_a0 = 0x26b1;
    uStack_9e = 0x7c;
    FUN_00408068(&DAT_00ca1708,DAT_00ca1704,0);
    uStack_a0 = 0x26b6;
    uStack_9e = 0x7c;
    FUN_004072f4();
    uStack_a0 = 0x26c0;
    uStack_9e = 0x7c;
    FUN_00407ca0(&DAT_00ca1708);
    uStack_a0 = 0x26c5;
    uStack_9e = 0x7c;
    FUN_004072f4();
    uStack_a0 = 0x26d4;
    uStack_9e = 0x7c;
    FUN_004097c0(&DAT_00ca1708,
                 L"Circadian phase, Repetition hour, Grade, Element No, Day No, RepDate, SleepDate, Score, Alertness, Circadian, Homeostatic"
                );
    uStack_a0 = 0x26d9;
    uStack_9e = 0x7c;
    FUN_00409a10();
    uStack_a0 = 0x26de;
    uStack_9e = 0x7c;
    FUN_004072f4();
    puVar3 = puStack_94;
  }
  puStack_94 = puVar3;
  uStack_a0 = 0x26e8;
  uStack_9e = 0x7c;
  FUN_00408318(PTR_DAT_00ba9970);
  uStack_a0 = 0x26ed;
  uStack_9e = 0x7c;
  iVar5 = FUN_004072f4();
  dVar1 = (double)CONCAT44(uStack_b4._4_4_,(undefined4)uStack_b4);
  if (0 < iVar5) {
    DAT_00ca16c0 = 1;
    local_48 = iVar5;
    do {
      uStack_a0 = 0x2711;
      uStack_9e = 0x7c;
      uStack_b4 = dVar1;
      FUN_00408400(PTR_DAT_00ba9970,&DAT_00ca1698);
      uStack_a0 = 0x2716;
      uStack_9e = 0x7c;
      FUN_004072f4();
      uStack_a0 = 0x2720;
      uStack_9e = 0x7c;
      cVar4 = FUN_007c25e8(&DAT_00ca1698);
      fVar16 = in_ST0;
      dVar1 = uStack_b4;
      if (cVar4 != '\0') {
        uStack_a0 = 0x2732;
        uStack_9e = 0x7c;
        fVar16 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        in_ST6 = in_ST7;
        FUN_0040a340(&DAT_00ca16aa);
        _DAT_00ca16d0 = (double)in_ST0;
        if ((double)_DAT_007c3208 < _DAT_00ca16d0) {
          _DAT_00ca16d0 = _DAT_00ca16d0 - (double)_DAT_007c3208;
        }
        uStack_a0 = SUB42(DAT_00ca16a6,0);
        uStack_9e = (undefined2)((uint)DAT_00ca16a6 >> 0x10);
        uStack_9c = DAT_00ca16a2;
        pwStack_a8 = L"ꍦᚐÊ뜏逅쨖謀ပ몛謀㬒Ղ谏٥";
        in_ST7 = in_ST6;
        DAT_00ca1690 = FUN_007bc964();
        dVar1 = uStack_b4;
        if (*(int *)(*(int *)PTR_DAT_00ba9b10 + 5) <= (int)(uint)DAT_00ca1690) {
          local_4c = *(int *)PTR_DAT_00baa6dc;
          if (local_4c != 0) {
            local_4c = *(int *)(local_4c + -4);
          }
          if ((int)(uint)DAT_00ca1690 <= local_4c) {
            if (DAT_00c7a2b0 == '\0') {
              pwStack_a8 = DAT_00ca16a6;
              uStack_ac = (undefined2)DAT_00ca16a2;
              uStack_aa = (undefined2)((uint)DAT_00ca16a2 >> 0x10);
              uStack_b4._4_4_ = 0x7c295d;
              FUN_007bbe48(DAT_00ca1690);
              local_c = (double)fVar16;
              fVar16 = in_ST1;
              in_ST1 = in_ST2;
              in_ST2 = in_ST3;
              in_ST3 = in_ST4;
              in_ST4 = in_ST5;
              in_ST5 = in_ST6;
              in_ST6 = in_ST7;
            }
            else {
              uVar6 = DAT_00ca1690 - 1;
              if (SBORROW4((uint)DAT_00ca1690,1)) {
                pwStack_a8 = (wchar_t *)0x7c27d6;
                uVar6 = thunk_FUN_004072dc();
              }
              iVar5 = *(int *)PTR_DAT_00baa6dc;
              if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar6)) {
                pwStack_a8 = (wchar_t *)0x7c27ec;
                uVar6 = thunk_FUN_004072dc();
                iVar5 = extraout_EDX;
              }
              pwStack_a8 = *(wchar_t **)(iVar5 + 0x16 + uVar6 * 0x92);
              uVar7 = *(undefined4 *)(iVar5 + 0x12 + uVar6 * 0x92);
              uStack_ac = (undefined2)uVar7;
              uStack_aa = (undefined2)((uint)uVar7 >> 0x10);
              uStack_b4._4_4_ = 0x7c27fc;
              FUN_007b8be0();
              local_14 = (double)fVar16;
              uVar6 = DAT_00ca1690 - 1;
              if (SBORROW4((uint)DAT_00ca1690,1)) {
                pwStack_a8 = (wchar_t *)0x7c2811;
                uVar6 = thunk_FUN_004072dc();
              }
              iVar5 = *(int *)PTR_DAT_00baa6dc;
              if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar6)) {
                pwStack_a8 = (wchar_t *)0x7c2827;
                uVar6 = thunk_FUN_004072dc();
                iVar5 = extraout_EDX_00;
              }
              local_1c = *(undefined4 *)(iVar5 + 0x5a + uVar6 * 0x92);
              uStack_18 = *(undefined4 *)(iVar5 + 0x5e + uVar6 * 0x92);
              _DAT_00ca16f0 =
                   (double)CONCAT44(uStack_18,local_1c) / (double)_DAT_007c320c + local_14;
              if ((double)_DAT_007c3208 < _DAT_00ca16f0) {
                _DAT_00ca16f0 = _DAT_00ca16f0 - (double)_DAT_007c3208;
              }
              if (_DAT_00ca16d0 <= _DAT_00ca16f0) {
                uVar6 = DAT_00ca1690 - 2;
                fVar10 = in_ST7;
                if (SBORROW4((uint)DAT_00ca1690,2)) {
                  pwStack_a8 = (wchar_t *)0x7c28a8;
                  uVar6 = thunk_FUN_004072dc();
                }
                iVar5 = *(int *)PTR_DAT_00baa6dc;
                if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar6)) {
                  pwStack_a8 = (wchar_t *)0x7c28be;
                  uVar6 = thunk_FUN_004072dc();
                  iVar5 = extraout_EDX_01;
                }
                pwStack_a8 = *(wchar_t **)(iVar5 + 0x16 + uVar6 * 0x92);
                uVar7 = *(undefined4 *)(iVar5 + 0x12 + uVar6 * 0x92);
                uStack_ac = (undefined2)uVar7;
                uStack_aa = (undefined2)((uint)uVar7 >> 0x10);
                uStack_b4._4_4_ = 0x7c28ce;
                FUN_007b8be0();
                local_14 = (double)in_ST1;
                _DAT_00ca16f0 =
                     (double)CONCAT44(uStack_18,local_1c) / (double)_DAT_007c320c + local_14;
                if ((double)_DAT_007c3208 < _DAT_00ca16f0) {
                  _DAT_00ca16f0 = _DAT_00ca16f0 - (double)_DAT_007c3208;
                }
                fVar16 = in_ST2;
                in_ST1 = in_ST3;
                in_ST2 = in_ST4;
                in_ST3 = in_ST5;
                in_ST4 = in_ST6;
                in_ST5 = in_ST7;
                in_ST6 = fVar10;
                if (_DAT_00ca16d0 <= _DAT_00ca16f0) {
                  local_c = (_DAT_00ca16d0 + (double)_DAT_007c3208) - _DAT_00ca16f0;
                }
                else {
                  local_c = _DAT_00ca16d0 - _DAT_00ca16f0;
                }
              }
              else {
                local_c = _DAT_00ca16d0 - _DAT_00ca16f0;
                fVar16 = in_ST1;
                in_ST1 = in_ST2;
                in_ST2 = in_ST3;
                in_ST3 = in_ST4;
                in_ST4 = in_ST5;
                in_ST5 = in_ST6;
                in_ST6 = in_ST7;
              }
            }
            in_ST7 = in_ST6;
            dVar1 = (double)CONCAT44(uStack_b4._4_4_,(undefined4)uStack_b4);
            if (local_c <= (double)_DAT_007c3208) {
              dVar1 = (double)CONCAT44(uStack_b4._4_4_,(undefined4)uStack_b4);
              if (0.0 < local_c) {
                fVar10 = (float10)local_c;
                pwStack_a8 = L"셐Ὸ숻瑘\xe805笛ￄ䖉菀萅쨖Āձየ쑻胿넽잢";
                uVar6 = FUN_00407bcc();
                if ((int)uVar6 >> 0x1f != extraout_EDX_02) {
                  pwStack_a8 = L"䖉菀萅쨖Āձየ쑻胿넽잢";
                  uVar6 = thunk_FUN_004072dc();
                }
                bVar9 = SCARRY4(DAT_00ca1684,1);
                DAT_00ca1684 = DAT_00ca1684 + 1;
                local_44 = uVar6;
                if (bVar9) {
                  pwStack_a8 = (wchar_t *)0x7c29aa;
                  thunk_FUN_004072dc();
                }
                if (DAT_00c7a2b1 == '\0') {
                  local_80 = (uint)('\x02' < DAT_00ca16b0);
                  _DAT_00ca16c8 = (double)local_80;
                }
                else {
                  pwStack_a8 = L"ᷝᛈÊ\xeb9b耜뀽쨖̀鴏◀ÿ";
                  FUN_007a5748(DAT_00ca16b0);
                  _DAT_00ca16c8 = (double)fVar10;
                  fVar10 = fVar16;
                  fVar16 = in_ST1;
                  in_ST1 = in_ST2;
                  in_ST2 = in_ST3;
                  in_ST3 = in_ST4;
                  in_ST4 = in_ST5;
                }
                fVar11 = (float10)_DAT_00ca16c8 * (float10)_DAT_007c3210;
                pwStack_a8 = (wchar_t *)0x7c29f3;
                iVar5 = FUN_00407bcc();
                if (iVar5 >> 0x1f != extraout_EDX_03) {
                  pwStack_a8 = (wchar_t *)0x7c2a01;
                  iVar5 = thunk_FUN_004072dc();
                }
                fVar12 = (float10)iVar5;
                uVar6 = local_44;
                fVar13 = in_ST2;
                fVar14 = in_ST3;
                fVar15 = in_ST4;
                local_40 = iVar5;
                if (0x721 < local_44) {
                  pwStack_a8 = (wchar_t *)0x7c2a16;
                  uVar6 = thunk_FUN_004072dc();
                  fVar13 = in_ST2;
                  fVar14 = in_ST3;
                  fVar15 = in_ST4;
                }
                fVar12 = fVar12 + (float10)(double)(&DAT_00c7a2b8)[uVar6];
                uVar6 = local_44;
                if (0x721 < local_44) {
                  pwStack_a8 = (wchar_t *)0x7c2a2c;
                  uVar6 = thunk_FUN_004072dc();
                }
                (&DAT_00c7a2b8)[uVar6] = (double)fVar12;
                pwStack_a8 = DAT_00ca16d4;
                uStack_ac = SUB82(_DAT_00ca16d0,0);
                uStack_aa = (undefined2)((ulonglong)_DAT_00ca16d0 >> 0x10);
                uStack_b4._4_4_ = 0x7c2a4b;
                FUN_007c011c(DAT_00ca1690);
                fVar11 = (float10)1 - fVar11;
                uVar6 = local_44;
                fVar12 = fVar15;
                if (0x721 < local_44) {
                  pwStack_a8 = (wchar_t *)0x7c2a5e;
                  uVar6 = thunk_FUN_004072dc();
                }
                fVar11 = fVar11 + (float10)*(double *)(&DAT_00c7dbc8 + uVar6 * 2);
                uVar6 = local_44;
                if (0x721 < local_44) {
                  pwStack_a8 = (wchar_t *)0x7c2a74;
                  uVar6 = thunk_FUN_004072dc();
                }
                *(double *)(&DAT_00c7dbc8 + uVar6 * 2) = (double)fVar11;
                pwStack_a8 = DAT_00ca16d4;
                uStack_ac = SUB82(_DAT_00ca16d0,0);
                uStack_aa = (undefined2)((ulonglong)_DAT_00ca16d0 >> 0x10);
                uStack_b4._4_4_ = 0x7c2a93;
                fVar11 = fVar12;
                FUN_007c1000(DAT_00ca1690);
                local_88 = (double)fVar10;
                pwStack_a8 = DAT_00ca16d4;
                uStack_ac = SUB82(_DAT_00ca16d0,0);
                uStack_aa = (undefined2)((ulonglong)_DAT_00ca16d0 >> 0x10);
                uStack_b4._4_4_ = 0x7c2ab1;
                FUN_007bffcc(CONCAT22(extraout_var,DAT_00ca1690));
                fVar10 = (float10)1 - (fVar16 + (float10)local_88);
                uVar6 = local_44;
                fVar16 = fVar12;
                in_ST2 = fVar11;
                if (0x721 < local_44) {
                  pwStack_a8 = (wchar_t *)0x7c2aca;
                  uVar6 = thunk_FUN_004072dc();
                  fVar16 = fVar12;
                }
                fVar10 = fVar10 + (float10)*(double *)(&DAT_00c814d8 + uVar6 * 2);
                uVar6 = local_44;
                if (0x721 < local_44) {
                  pwStack_a8 = (wchar_t *)0x7c2ae0;
                  uVar6 = thunk_FUN_004072dc();
                }
                *(double *)(&DAT_00c814d8 + uVar6 * 2) = (double)fVar10;
                pwStack_a8 = DAT_00ca16d4;
                uStack_ac = SUB82(_DAT_00ca16d0,0);
                uStack_aa = (undefined2)((ulonglong)_DAT_00ca16d0 >> 0x10);
                uStack_b4._4_4_ = 0x7c2aff;
                in_ST3 = in_ST2;
                FUN_007c0218(DAT_00ca1690);
                uVar6 = local_44;
                if (0x721 < local_44) {
                  uStack_b4._4_4_ = 0x7c2b0e;
                  uVar6 = thunk_FUN_004072dc();
                }
                fVar10 = in_ST1 + (float10)*(double *)(&DAT_00c84de8 + uVar6 * 2);
                uVar6 = local_44;
                in_ST1 = fVar11;
                if (0x721 < local_44) {
                  uStack_b4._4_4_ = 0x7c2b24;
                  uVar6 = thunk_FUN_004072dc();
                  in_ST1 = fVar11;
                }
                *(double *)(&DAT_00c84de8 + uVar6 * 2) = (double)fVar10;
                local_88 = _DAT_00ca16d0 / (double)_DAT_007c3208 +
                           (double)CONCAT44(DAT_00ca16a6,DAT_00ca16a2);
                uStack_b8 = 0;
                uStack_b6 = 0;
                uStack_bc = 0;
                uStack_c0._0_2_ = 0x2b5c;
                uStack_c0._2_2_ = 0x7c;
                in_ST4 = in_ST3;
                uStack_b4 = local_88;
                FUN_007ce0f4(local_2c,1);
                local_34 = (double)fVar13;
                fVar10 = (float10)local_34;
                local_c8 = SUB104(fVar10,0);
                puStack_c4 = (undefined1 *)((unkuint10)fVar10 >> 0x20);
                uStack_c0._0_2_ = (undefined2)((unkuint10)fVar10 >> 0x40);
                in_ST5 = in_ST4;
                FUN_00407b28();
                local_34 = (double)(fVar14 * (float10)_DAT_007c3208);
                uStack_c0._0_2_ = (undefined2)((ulonglong)local_34 >> 0x20);
                uStack_c0._2_2_ = (undefined2)((ulonglong)local_34 >> 0x30);
                puStack_c4 = (undefined1 *)local_34._0_4_;
                local_c8 = (undefined *)DAT_00ca16d4;
                in_ST6 = in_ST5;
                FUN_007ba06c();
                local_24 = (double)fVar15;
                uStack_c0._0_2_ = (undefined2)((ulonglong)local_24 >> 0x20);
                uStack_c0._2_2_ = (undefined2)((ulonglong)local_24 >> 0x30);
                puStack_c4 = (undefined1 *)local_24._0_4_;
                local_c8 = local_28;
                FUN_007c2494();
                uVar6 = local_44;
                if (0x721 < local_44) {
                  uStack_c0._0_2_ = 0x2bba;
                  uStack_c0._2_2_ = 0x7c;
                  uVar6 = thunk_FUN_004072dc();
                }
                fVar10 = (float10)1 + (float10)(double)(&DAT_00c9dd58)[uVar6];
                uVar6 = local_44;
                if (0x721 < local_44) {
                  uStack_c0._0_2_ = 0x2bd2;
                  uStack_c0._2_2_ = 0x7c;
                  uVar6 = thunk_FUN_004072dc();
                }
                (&DAT_00c9dd58)[uVar6] = (double)fVar10;
                in_ST7 = in_ST6;
                dVar1 = uStack_b4;
                if (DAT_00ca1680 != '\0') {
                  puStack_c4 = &LAB_007c2de6;
                  local_c8 = (undefined *)*in_FS_OFFSET;
                  *in_FS_OFFSET = &local_c8;
                  uStack_c0 = &stack0xfffffffc;
                  FUN_0042c388();
                  fVar16 = (float10)_DAT_00ca16d0;
                  uVar19 = SUB102(fVar16,0);
                  uVar8 = (undefined4)((unkuint10)fVar16 >> 0x20);
                  uVar21 = (undefined2)((unkuint10)fVar16 >> 0x40);
                  fVar16 = (float10)local_c;
                  uVar7 = FUN_004099cc(&DAT_00ca1708,0,1,SUB102(fVar16,0),
                                       (int)((unkuint10)fVar16 >> 0x20),
                                       (short)((unkuint10)fVar16 >> 0x40));
                  uVar7 = FUN_004098c0(uVar7,CONCAT22(extraout_var_04,0x2c));
                  uVar7 = FUN_004099cc(uVar7,0,1,uVar19,uVar8,uVar21);
                  uVar7 = FUN_004098c0(uVar7,CONCAT22(extraout_var_05,0x2c));
                  uVar7 = FUN_004095e4(uVar7,(int)DAT_00ca16b0);
                  uVar7 = FUN_004098c0(uVar7,CONCAT22(extraout_var_06,0x2c));
                  uVar7 = FUN_004095e4(uVar7,_DAT_00ca1698);
                  FUN_004098c0(uVar7,CONCAT22(extraout_var_07,0x2c));
                  uVar7 = FUN_00409a00();
                  local_5c = FUN_004098c0(uVar7,CONCAT22(extraout_var_08,0x2c));
                  local_54 = DAT_00ca16a2;
                  local_50 = DAT_00ca16a6;
                  FUN_0042d430(L"dd.mmm.yyyy",PTR_DAT_00baa920,&local_58,DAT_00ca16a2,
                               (short)DAT_00ca16a6);
                  uVar7 = FUN_004097c0(local_5c,local_58);
                  local_64 = FUN_004098c0(uVar7,CONCAT22(extraout_var_09,0x2c));
                  FUN_0042d430(L"dd.mmm.yyyy",PTR_DAT_00baa920,&local_60,DAT_00ca1688,
                               (short)DAT_00ca168c);
                  uVar7 = DAT_00ca16d0;
                  FUN_007c0218(CONCAT22(extraout_var_00,DAT_00ca1690));
                  uVar23 = SUB104(in_ST1,0);
                  uVar24 = (undefined2)((unkuint10)in_ST1 >> 0x20);
                  uVar25 = (undefined2)((unkuint10)in_ST1 >> 0x40);
                  FUN_007c1000(CONCAT22(extraout_var_01,DAT_00ca1690));
                  local_88 = (double)in_ST2;
                  FUN_007bffcc(CONCAT22(extraout_var_02,DAT_00ca1690));
                  fVar16 = (float10)1 - (in_ST3 + (float10)local_88);
                  uVar20 = SUB104(fVar16,0);
                  uVar21 = (undefined2)((unkuint10)fVar16 >> 0x20);
                  uVar22 = (undefined2)((unkuint10)fVar16 >> 0x40);
                  FUN_007c011c(CONCAT22(extraout_var_03,DAT_00ca1690));
                  in_ST4 = (float10)1 - in_ST4;
                  uVar17 = SUB104(in_ST4,0);
                  uVar18 = (undefined4)((unkuint10)in_ST4 >> 0x20);
                  uVar19 = (undefined2)((unkuint10)in_ST4 >> 0x40);
                  uVar8 = FUN_004097c0(local_64,local_60);
                  uVar8 = FUN_004098c0(uVar8,CONCAT22(extraout_var_10,0x2c));
                  uVar8 = FUN_004095e4(uVar8,local_40);
                  uVar8 = FUN_004098c0(uVar8,CONCAT22(extraout_var_11,0x2c));
                  uVar8 = FUN_004099cc(uVar8,0,2,uVar17,uVar18,uVar19);
                  uVar8 = FUN_004098c0(uVar8,CONCAT22(extraout_var_12,0x2c));
                  uVar8 = FUN_004099cc(uVar8,0,2,uVar20,uVar21,uVar22);
                  uVar8 = FUN_004098c0(uVar8,CONCAT22(extraout_var_13,0x2c));
                  FUN_004099cc(uVar8,0,2,uVar23,uVar24,uVar25);
                  FUN_00409a10();
                  puVar2 = local_c8;
                  *in_FS_OFFSET = uVar7;
                  local_c8 = &DAT_007c2ded;
                  FUN_0040c5c8(&local_60,uVar7,puVar2);
                  FUN_0040c5c8(&local_58);
                  return;
                }
              }
            }
          }
        }
      }
      DAT_00ca16c0 = DAT_00ca16c0 + 1;
      local_48 = local_48 + -1;
      in_ST0 = fVar16;
    } while (local_48 != 0);
  }
  uStack_a0 = 0x2e06;
  uStack_9e = 0x7c;
  uStack_b4 = dVar1;
  FUN_007c54a4();
  local_44 = 0;
  do {
    iVar5 = (int)((longlong)(int)local_44 * 2);
    if ((longlong)iVar5 != (longlong)(int)local_44 * 2) {
      uStack_a0 = 0x2e16;
      uStack_9e = 0x7c;
      iVar5 = thunk_FUN_004072dc();
    }
    uVar6 = iVar5 - 2;
    if (SCARRY4(iVar5,-2)) {
      uStack_a0 = 0x2e20;
      uStack_9e = 0x7c;
      uVar6 = thunk_FUN_004072dc();
    }
    local_3c = (double)(int)uVar6;
    if (local_3c < 0.0) {
      local_3c = local_3c + (double)_DAT_007c3208;
    }
    local_80 = uVar6;
    if (DAT_00ca1680 != '\0') {
      uVar6 = local_44;
      if (0x721 < local_44) {
        uStack_a0 = 0x2e5a;
        uStack_9e = 0x7c;
        uVar6 = thunk_FUN_004072dc();
      }
      fVar16 = (float10)(double)(&DAT_00c9dd58)[uVar6];
      pwStack_a8 = SUB104(fVar16,0);
      uStack_a4 = (undefined4)((unkuint10)fVar16 >> 0x20);
      uStack_a0 = (undefined2)((unkuint10)fVar16 >> 0x40);
      uVar6 = local_44;
      if (0x721 < local_44) {
        uStack_ac = 0x2e77;
        uStack_aa = 0x7c;
        uVar6 = thunk_FUN_004072dc();
      }
      fVar16 = (float10)(double)(&DAT_00c7a2b8)[uVar6];
      uStack_b4._0_4_ = SUB104(fVar16,0);
      uStack_b4._4_4_ = (undefined4)((unkuint10)fVar16 >> 0x20);
      uStack_ac = (undefined2)((unkuint10)fVar16 >> 0x40);
      fVar16 = (float10)local_3c;
      uStack_c0._0_2_ = SUB102(fVar16,0);
      uStack_c0._2_2_ = (undefined2)((unkuint10)fVar16 >> 0x10);
      uStack_bc = (undefined4)((unkuint10)fVar16 >> 0x20);
      uStack_b8 = (undefined2)((unkuint10)fVar16 >> 0x40);
      puStack_c4 = (undefined1 *)0x7c2e9d;
      uVar7 = FUN_004099cc(&DAT_00ca1708,0,0);
      uStack_b8 = 0x2ea6;
      uStack_b6 = 0x7c;
      uVar7 = FUN_004098c0(uVar7,CONCAT22(extraout_var_14,0x2c));
      uStack_b8 = 0x2eb2;
      uStack_b6 = 0x7c;
      uVar7 = FUN_004099cc(uVar7,0,2);
      uStack_ac = 0x2ebb;
      uStack_aa = 0x7c;
      FUN_004098c0(uVar7,CONCAT22(extraout_var_15,0x2c));
      uStack_ac = 0x2ec0;
      uStack_aa = 0x7c;
      FUN_00409a00();
      uStack_a0 = 0x2ec5;
      uStack_9e = 0x7c;
      FUN_00409a10();
      uStack_a0 = 0x2eca;
      uStack_9e = 0x7c;
      FUN_004072f4();
    }
    local_44 = local_44 + 1;
  } while (local_44 != 0x19);
  uVar6 = 0x19;
  if (DAT_00ca1680 != '\0') {
    uStack_a0 = 0x2eee;
    uStack_9e = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_a0 = 0x2ef3;
    uStack_9e = 0x7c;
    FUN_004072f4();
    uStack_a0 = 0x2efd;
    uStack_9e = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_a0 = 0x2f02;
    uStack_9e = 0x7c;
    FUN_004072f4();
    uStack_a0 = 0x2f11;
    uStack_9e = 0x7c;
    FUN_004097c0(&DAT_00ca1708,L"------------------- Cumulative data ---------------------");
    uStack_a0 = 0x2f16;
    uStack_9e = 0x7c;
    FUN_00409a10();
    uStack_a0 = 0x2f1b;
    uStack_9e = 0x7c;
    FUN_004072f4();
    uStack_a0 = 0x2f2a;
    uStack_9e = 0x7c;
    FUN_004097c0(&DAT_00ca1708,L"Circadian phase, Average Grade, Repetition cases");
    uStack_a0 = 0x2f2f;
    uStack_9e = 0x7c;
    FUN_00409a10();
    uStack_a0 = 0x2f34;
    uStack_9e = 0x7c;
    FUN_004072f4();
    local_44 = 1;
    do {
      uVar6 = local_44;
      if (0x721 < local_44) {
        uStack_a0 = 0x2f4a;
        uStack_9e = 0x7c;
        uVar6 = thunk_FUN_004072dc();
      }
      fVar16 = (float10)(double)(&DAT_00c9dd58)[uVar6];
      pwStack_a8 = SUB104(fVar16,0);
      uStack_a4 = (undefined4)((unkuint10)fVar16 >> 0x20);
      uStack_a0 = (undefined2)((unkuint10)fVar16 >> 0x40);
      uVar6 = local_44;
      if (0x721 < local_44) {
        uStack_ac = 0x2f67;
        uStack_aa = 0x7c;
        uVar6 = thunk_FUN_004072dc();
      }
      fVar16 = (float10)(double)(&DAT_00c7a2b8)[uVar6];
      uStack_b4._0_4_ = SUB104(fVar16,0);
      uStack_b4._4_4_ = (undefined4)((unkuint10)fVar16 >> 0x20);
      uStack_ac = (undefined2)((unkuint10)fVar16 >> 0x40);
      uStack_b8 = 0x2f82;
      uStack_b6 = 0x7c;
      uVar7 = FUN_004095e4(&DAT_00ca1708,local_44);
      uStack_b8 = 0x2f8b;
      uStack_b6 = 0x7c;
      uVar7 = FUN_004098c0(uVar7,CONCAT22(extraout_var_16,0x2c));
      uStack_b8 = 0x2f97;
      uStack_b6 = 0x7c;
      uVar7 = FUN_004099cc(uVar7,0,2);
      uStack_ac = 0x2fa0;
      uStack_aa = 0x7c;
      FUN_004098c0(uVar7,CONCAT22(extraout_var_17,0x2c));
      uStack_ac = 0x2fa5;
      uStack_aa = 0x7c;
      FUN_00409a00();
      uStack_a0 = 0x2faa;
      uStack_9e = 0x7c;
      FUN_00409a10();
      uStack_a0 = 0x2faf;
      uStack_9e = 0x7c;
      FUN_004072f4();
      local_44 = local_44 + 1;
    } while (local_44 != 0x19);
    uStack_a0 = 0x2fc2;
    uStack_9e = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_a0 = 0x2fc7;
    uStack_9e = 0x7c;
    FUN_004072f4();
    uStack_a0 = 0x2fd6;
    uStack_9e = 0x7c;
    uVar7 = FUN_004097c0(&DAT_00ca1708,L"Repetition cases checked: ");
    uStack_a0 = 0x2fe1;
    uStack_9e = 0x7c;
    FUN_004095e4(uVar7,DAT_00ca1684);
    uStack_a0 = 0x2fe6;
    uStack_9e = 0x7c;
    FUN_00409a10();
    uStack_a0 = 0x2feb;
    uStack_9e = 0x7c;
    FUN_004072f4();
    uStack_a0 = 0x2ff5;
    uStack_9e = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_a0 = 0x2ffa;
    uStack_9e = 0x7c;
    FUN_004072f4();
    uStack_a0 = 0x3004;
    uStack_9e = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_a0 = 0x3009;
    uStack_9e = 0x7c;
    FUN_004072f4();
    uStack_a0 = 0x3018;
    uStack_9e = 0x7c;
    FUN_004097c0(&DAT_00ca1708,
                 L"Please review data carefully and compare it with your sleep logs and repetition history"
                );
    uStack_a0 = 0x301d;
    uStack_9e = 0x7c;
    FUN_00409a10();
    uStack_a0 = 0x3022;
    uStack_9e = 0x7c;
    FUN_004072f4();
    uStack_a0 = 0x3434;
    uStack_9e = 0x7c;
    uStack_a4 = 0x7c3037;
    FUN_00b0eb74(L"help",&local_90);
    uStack_a4 = local_90;
    pwStack_a8 = L" or current SuperMemo support address";
    uStack_ac = 0x3052;
    uStack_aa = 0x7c;
    FUN_0040d87c(&local_8c,3);
    uStack_ac = 0x3062;
    uStack_aa = 0x7c;
    FUN_004097c0(&DAT_00ca1708,local_8c);
    uStack_ac = 0x3067;
    uStack_aa = 0x7c;
    FUN_00409a10();
    uStack_ac = 0x306c;
    uStack_aa = 0x7c;
    FUN_004072f4();
    uStack_ac = 0x3076;
    uStack_aa = 0x7c;
    FUN_00408228(&DAT_00ca1708);
    uStack_ac = 0x307b;
    uStack_aa = 0x7c;
    FUN_004072f4();
    uStack_ac = 0x3085;
    uStack_aa = 0x7c;
    FUN_00b0e5b4(DAT_00ca1704);
    uVar6 = local_44;
  }
  local_44 = uVar6;
  puVar3 = puStack_94;
  *in_FS_OFFSET = uStack_9c;
  puStack_94 = &LAB_007c30ba;
  puStack_98 = (undefined1 *)0x7c30a2;
  FUN_0040c628(&local_90,2,puVar3);
  puStack_98 = (undefined1 *)0x7c30aa;
  FUN_0040c5c8(&local_60);
  puStack_98 = (undefined1 *)0x7c30b2;
  FUN_0040c5c8(&local_58);
  return;
}



// === FUN_007c34d4 @ 007c34d4 size:2525 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c34d4(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  undefined2 extraout_var_17;
  undefined2 extraout_var_18;
  int *in_FS_OFFSET;
  bool bVar7;
  float10 in_ST0;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined4 uVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  undefined *puStack_f8;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  wchar_t *pwStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined2 uStack_c8;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined4 uStack_b0;
  int iStack_ac;
  wchar_t *pwStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  wchar_t *local_98;
  undefined4 uStack_94;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  int iStack_8c;
  int iStack_88;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  double local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  wchar_t *local_50;
  int local_4c;
  byte local_45;
  undefined4 local_44 [2];
  int local_3c;
  undefined2 local_36;
  double local_34;
  undefined *local_20;
  double local_1c;
  double local_14;
  double local_c;
  
  puStack_7c = &stack0xfffffffc;
  local_74 = 0;
  local_78 = 0;
  local_44[0] = 0;
  local_58 = 0;
  local_60 = 0;
  puStack_80 = &LAB_007c3ebd;
  uStack_84 = (undefined2)*in_FS_OFFSET;
  uStack_82 = (undefined2)((uint)*in_FS_OFFSET >> 0x10);
  *in_FS_OFFSET = (int)&uStack_84;
  _DAT_00ca1670 = 0;
  _DAT_00ca1674 = 0;
  _DAT_00ca1678 = 0;
  _DAT_00ca167c = 0;
  puVar2 = &stack0xfffffffc;
  if (DAT_00ca1680 != '\0') {
    iStack_88 = 0x7c3535;
    FUN_0040d7f4(&DAT_00ca1704,*(undefined4 *)PTR_DAT_00ba99cc,
                 L"\\sleep\\HomeostaticDeclineInAlertness.csv");
    iStack_88 = 0x7c3547;
    FUN_00408068(&DAT_00ca1708,DAT_00ca1704,0);
    iStack_88 = 0x7c354c;
    FUN_004072f4();
    iStack_88 = 0x7c3556;
    FUN_00407ca0(&DAT_00ca1708);
    iStack_88 = 0x7c355b;
    FUN_004072f4();
    iStack_88 = 0x7c356a;
    FUN_004097c0(&DAT_00ca1708,
                 L"Waking hour, Repetition hour, Wakefulness, Sleep length, Grade, Day No, RepDate, SleepDate, Score, eFI, Alertness, Circadian, Homeostatic, Element"
                );
    iStack_88 = 0x7c356f;
    FUN_00409a10();
    iStack_88 = 0x7c3574;
    FUN_004072f4();
    puVar2 = puStack_7c;
  }
  puStack_7c = puVar2;
  iStack_88 = 0x7c3588;
  uVar4 = FUN_0061c7ac(PTR_PTR_LAB_00b279c4,1,*(undefined4 *)PTR_DAT_00ba9944);
  *(undefined4 *)PTR_DAT_00baa8f8 = uVar4;
  iStack_88 = 0x7c359a;
  FUN_00408318(PTR_DAT_00ba9970);
  iStack_88 = 0x7c359f;
  iStack_8c = FUN_004072f4();
  iStack_88 = iStack_8c >> 0x1f;
  uStack_90 = 0x35b3;
  uStack_8e = 0x7c;
  FUN_00b29314(*(undefined4 *)PTR_DAT_00baa8f8,L"Collecting data");
  uStack_90 = 0x35bd;
  uStack_8e = 0x7c;
  FUN_00408318(PTR_DAT_00ba9970);
  uStack_90 = 0x35c2;
  uStack_8e = 0x7c;
  iVar5 = FUN_004072f4();
  if (0 < iVar5) {
    DAT_00ca16c0 = 1;
    local_4c = iVar5;
    do {
      uStack_90 = 0x35e6;
      uStack_8e = 0x7c;
      FUN_00408400(PTR_DAT_00ba9970,&DAT_00ca1698);
      uStack_90 = 0x35eb;
      uStack_8e = 0x7c;
      FUN_004072f4();
      fVar8 = in_ST1;
      fVar9 = in_ST2;
      if (DAT_00ca16c0 % 1000 == 0) {
        fVar8 = (float10)DAT_00ca16c0;
        iStack_8c = SUB104(fVar8,0);
        iStack_88 = (int)((unkuint10)fVar8 >> 0x20);
        uStack_84 = (undefined2)((unkuint10)fVar8 >> 0x40);
        uStack_9c = 0x3615;
        uStack_9a = 0x7c;
        in_ST7 = in_ST6;
        FUN_00b2a9a4(*(undefined4 *)PTR_DAT_00baa8f8);
        uStack_9c = 0x3621;
        uStack_9a = 0x7c;
        cVar3 = FUN_00b2a0ec(*(undefined4 *)PTR_DAT_00baa8f8);
        fVar8 = in_ST1;
        fVar9 = in_ST2;
        if (cVar3 != '\0') break;
      }
      uStack_90 = 0x3633;
      uStack_8e = 0x7c;
      cVar3 = FUN_007c25e8(&DAT_00ca1698);
      in_ST1 = fVar8;
      in_ST2 = fVar9;
      if (cVar3 != '\0') {
        uStack_90 = 0x3645;
        uStack_8e = 0x7c;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        in_ST6 = in_ST7;
        FUN_0040a340(&DAT_00ca16aa);
        _DAT_00ca16d0 = (double)in_ST0;
        if ((double)_DAT_007c4088 < _DAT_00ca16d0) {
          _DAT_00ca16d0 = _DAT_00ca16d0 - (double)_DAT_007c4088;
        }
        DAT_00ca16e8 = DAT_00ca16a2;
        DAT_00ca16ec = DAT_00ca16a6;
        uStack_90 = SUB42(DAT_00ca16a6,0);
        uStack_8e = (undefined2)((uint)DAT_00ca16a6 >> 0x10);
        iStack_8c = DAT_00ca16a2;
        local_98 = L"ꍦᚐÊ뜏逅쨖謀ပ몛謀㬒Ղ谏פ";
        in_ST7 = in_ST6;
        DAT_00ca1690 = FUN_007bc964();
        in_ST0 = fVar8;
        in_ST1 = fVar9;
        if (*(int *)(*(int *)PTR_DAT_00ba9b10 + 5) <= (int)(uint)DAT_00ca1690) {
          local_98 = DAT_00ca16ec;
          uStack_9c = (undefined2)DAT_00ca16e8;
          uStack_9a = (undefined2)((uint)DAT_00ca16e8 >> 0x10);
          uStack_a0 = DAT_00ca1668._4_4_;
          iStack_8c = (int)DAT_00ca1668;
          pwStack_a8 = (wchar_t *)0x7c36da;
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = in_ST6;
          in_ST6 = in_ST7;
          FUN_007ce0f4(&local_1c,CONCAT31((int3)((uint)*(int *)PTR_DAT_00ba9b10 >> 8),1));
          _DAT_00ca16f0 = (double)fVar8;
          in_ST0 = fVar9;
          in_ST7 = in_ST6;
          if ((0.0 <= _DAT_00ca16f0) &&
             (((double)CONCAT44(_DAT_00ca1674,_DAT_00ca1670) == 0.0 ||
              (local_1c <= (double)CONCAT44(_DAT_00ca1674,_DAT_00ca1670))))) {
            pwStack_a8 = DAT_00ca16ec;
            iStack_ac = DAT_00ca16e8;
            uStack_b0 = 0;
            iStack_8c = 0;
            uStack_b8 = 0x3730;
            uStack_b6 = 0x7c;
            in_ST0 = in_ST1;
            in_ST1 = in_ST2;
            in_ST2 = in_ST3;
            in_ST3 = in_ST4;
            in_ST4 = in_ST5;
            in_ST5 = in_ST6;
            FUN_007ce0f4(&DAT_00ca16d8,0);
            _DAT_00ca16f8 = (double)fVar9;
            in_ST7 = in_ST6;
            if (_DAT_00ca16f8 <= _DAT_00ca16f0) {
              fVar8 = (float10)_DAT_00ca16f0;
              uStack_c0 = SUB104(fVar8,0);
              uStack_bc = (undefined4)((unkuint10)fVar8 >> 0x20);
              uStack_b8 = (undefined2)((unkuint10)fVar8 >> 0x40);
              uStack_c4 = 0x7c375f;
              FUN_00407b28();
              local_c = (double)(in_ST0 * (float10)_DAT_007c4088);
              fVar9 = (float10)_DAT_00ca16f0;
              uStack_b8 = 0x3774;
              uStack_b6 = 0x7c;
              uVar6 = FUN_00407bd8();
              fVar8 = in_ST2;
              in_ST0 = in_ST3;
              if (extraout_EDX != 0 || 0xffff < uVar6) {
                uStack_b8 = 0x3785;
                uStack_b6 = 0x7c;
                uVar6 = thunk_FUN_004072dc();
                fVar8 = in_ST2;
                in_ST0 = in_ST3;
              }
              in_ST3 = in_ST6;
              in_ST2 = in_ST5;
              local_36 = (undefined2)uVar6;
              local_6c = (double)((float10)_DAT_00ca16f0 - _DAT_007c408c);
              uStack_b8 = (undefined2)((ulonglong)local_6c >> 0x20);
              uStack_b6 = (undefined2)((ulonglong)local_6c >> 0x30);
              uStack_bc = local_6c._0_4_;
              uStack_c0 = 0;
              uStack_c4 = 0;
              uStack_c8 = 0x37af;
              uStack_c6 = 0x7c;
              fVar11 = in_ST3;
              FUN_007ce0f4(&DAT_00ca16d8,1);
              local_34 = (double)fVar9;
              fVar9 = (float10)local_34;
              uStack_d0 = SUB104(fVar9,0);
              local_cc = (undefined4)((unkuint10)fVar9 >> 0x20);
              uStack_c8 = (undefined2)((unkuint10)fVar9 >> 0x40);
              uStack_d4 = 0x7c37c2;
              in_ST5 = fVar11;
              FUN_00407b28();
              local_14 = (double)(in_ST1 * (float10)_DAT_007c4088);
              uStack_c8 = (undefined2)((ulonglong)local_34 >> 0x20);
              uStack_c6 = (undefined2)((ulonglong)local_34 >> 0x30);
              local_cc = local_34._0_4_;
              uStack_d0 = DAT_00ca16f4;
              iStack_8c = DAT_00ca16f0;
              uStack_d8 = 0x7c37e3;
              in_ST1 = in_ST4;
              in_ST4 = fVar11;
              in_ST6 = in_ST5;
              FUN_007ba294();
              _DAT_00ca16e0 = (double)fVar8;
              if (((double)CONCAT44(_DAT_00ca167c,_DAT_00ca1678) <= 0.0) ||
                 (in_ST7 = in_ST6, (double)CONCAT44(_DAT_00ca167c,_DAT_00ca1678) <= _DAT_00ca16e0))
              {
                bVar7 = SCARRY4(DAT_00ca1684,1);
                DAT_00ca1684 = DAT_00ca1684 + 1;
                if (bVar7) {
                  uStack_d8 = 0x7c381c;
                  thunk_FUN_004072dc();
                }
                uStack_d8 = DAT_00ca16f4;
                local_dc = DAT_00ca16f0;
                pwStack_e0 = DAT_00ca16ec;
                iStack_e4 = DAT_00ca16e8;
                uStack_e8 = 0x7c3839;
                FUN_007ba294();
                _DAT_00ca16e0 = (double)in_ST0;
                if ((double)_DAT_007c4088 < _DAT_00ca16e0) {
                  _DAT_00ca16e0 = 24.0;
                }
                fVar8 = (float10)_DAT_00ca16e0;
                uStack_e8 = 0x7c386f;
                uVar6 = FUN_00407bd8();
                if (extraout_EDX_00 != 0 || 0xff < uVar6) {
                  uStack_e8 = 0x7c3880;
                  uVar6 = thunk_FUN_004072dc();
                }
                local_45 = (byte)uVar6;
                if (DAT_00c7a2b1 == '\0') {
                  local_70 = (uint)('\x02' < DAT_00ca16b0);
                  _DAT_00ca16c8 = (double)local_70;
                }
                else {
                  uStack_e8 = 0x7c3896;
                  FUN_007a5748(DAT_00ca16b0);
                  _DAT_00ca16c8 = (double)fVar8;
                  fVar8 = in_ST1;
                  in_ST1 = in_ST2;
                  in_ST2 = in_ST3;
                  in_ST3 = in_ST4;
                  in_ST4 = in_ST5;
                  in_ST5 = in_ST6;
                }
                fVar10 = (float10)_DAT_00ca16c8 * (float10)_DAT_007c4098;
                uStack_e8 = 0x7c38cc;
                iVar5 = FUN_00407bcc();
                fVar9 = in_ST2;
                fVar11 = in_ST3;
                in_ST0 = in_ST4;
                if (iVar5 >> 0x1f != extraout_EDX_01) {
                  uStack_e8 = 0x7c38da;
                  iVar5 = thunk_FUN_004072dc();
                  fVar9 = in_ST2;
                  fVar11 = in_ST3;
                  in_ST0 = in_ST4;
                }
                (&DAT_00c7a2b8)[local_45] = (double)iVar5 + (double)(&DAT_00c7a2b8)[local_45];
                uStack_e8 = DAT_00ca16d4;
                uStack_ec = DAT_00ca16d0;
                uStack_f4._4_4_ = (undefined1 *)0x7c3910;
                local_3c = iVar5;
                FUN_007c011c(DAT_00ca1690);
                *(double *)(&DAT_00c7dbc8 + (uint)local_45 * 2) =
                     (double)(((float10)1 - fVar10) +
                             (float10)*(double *)(&DAT_00c7dbc8 + (uint)local_45 * 2));
                uStack_e8 = DAT_00ca16d4;
                uStack_ec = DAT_00ca16d0;
                uStack_f4._4_4_ = (undefined1 *)0x7c3944;
                in_ST2 = in_ST5;
                in_ST3 = in_ST5;
                FUN_007c1000(DAT_00ca1690);
                local_6c = (double)fVar8;
                uStack_e8 = DAT_00ca16d4;
                uStack_ec = DAT_00ca16d0;
                uStack_f4._4_4_ = (undefined1 *)0x7c395f;
                FUN_007bffcc(CONCAT22(extraout_var,DAT_00ca1690));
                *(double *)(&DAT_00c814d8 + (uint)local_45 * 2) =
                     (double)(((float10)1 - (in_ST1 + (float10)local_6c)) +
                             (float10)*(double *)(&DAT_00c814d8 + (uint)local_45 * 2));
                uStack_e8 = DAT_00ca16d4;
                iStack_8c = DAT_00ca16d0;
                uStack_f4._4_4_ = (undefined1 *)0x7c3996;
                in_ST1 = in_ST5;
                in_ST4 = in_ST3;
                in_ST5 = in_ST3;
                FUN_007c0218(DAT_00ca1690);
                *(double *)(&DAT_00c84de8 + (uint)local_45 * 2) =
                     (double)(fVar9 + (float10)*(double *)(&DAT_00c84de8 + (uint)local_45 * 2));
                uStack_f4._4_4_ = (undefined1 *)DAT_00ca16e4;
                uStack_f4._0_4_ = (undefined1 *)DAT_00ca16e0;
                puStack_f8 = local_20;
                FUN_007c2494();
                (&DAT_00c9dd58)[local_45] = (double)(&DAT_00c9dd58)[local_45] + 1.0;
                local_70 = (uint)DAT_00ca1690;
                local_6c = (double)local_70;
                puStack_f8 = (undefined *)0x7c3a09;
                in_ST6 = in_ST5;
                uStack_f4 = local_6c;
                FUN_007b90c0();
                _DAT_00ca1688 = (double)fVar11;
                in_ST7 = in_ST6;
                if (DAT_00ca1680 != '\0') {
                  uStack_f4._4_4_ = (undefined1 *)0x7c3a2a;
                  FUN_009a9aa8(_DAT_00ca1698,local_44);
                  uStack_f4._4_4_ = (undefined1 *)0x7c3a3c;
                  FUN_00b21f30(local_44,&DAT_007c40b8,&DAT_007c40a8);
                  uStack_f4._0_4_ = &LAB_007c3c90;
                  puStack_f8 = (undefined *)*in_FS_OFFSET;
                  *in_FS_OFFSET = (int)&puStack_f8;
                  fVar8 = (float10)local_1c;
                  uVar20 = SUB102(fVar8,0);
                  uVar15 = (undefined4)((unkuint10)fVar8 >> 0x20);
                  uVar22 = (undefined2)((unkuint10)fVar8 >> 0x40);
                  fVar8 = (float10)_DAT_00ca16e0;
                  uVar17 = SUB102(fVar8,0);
                  uVar13 = (undefined4)((unkuint10)fVar8 >> 0x20);
                  uVar19 = (undefined2)((unkuint10)fVar8 >> 0x40);
                  fVar8 = (float10)_DAT_00ca16d0;
                  uVar14 = SUB102(fVar8,0);
                  uVar12 = (undefined4)((unkuint10)fVar8 >> 0x20);
                  uVar16 = (undefined2)((unkuint10)fVar8 >> 0x40);
                  fVar8 = (float10)local_c;
                  uStack_f4._4_4_ = &stack0xfffffffc;
                  uVar4 = FUN_004099cc(&DAT_00ca1708,0,1,SUB102(fVar8,0),
                                       (int)((unkuint10)fVar8 >> 0x20),
                                       (short)((unkuint10)fVar8 >> 0x40));
                  uVar4 = FUN_004098c0(uVar4,CONCAT22(extraout_var_04,0x2c));
                  uVar4 = FUN_004099cc(uVar4,0,1,uVar14,uVar12,uVar16);
                  uVar4 = FUN_004098c0(uVar4,CONCAT22(extraout_var_05,0x2c));
                  uVar4 = FUN_004099cc(uVar4,0,1,uVar17,uVar13,uVar19);
                  uVar4 = FUN_004098c0(uVar4,CONCAT22(extraout_var_06,0x2c));
                  uVar4 = FUN_004099cc(uVar4,0,1,uVar20,uVar15,uVar22);
                  uVar4 = FUN_004098c0(uVar4,CONCAT22(extraout_var_07,0x2c));
                  uVar4 = FUN_004095e4(uVar4,(int)DAT_00ca16b0);
                  uVar4 = FUN_004098c0(uVar4,CONCAT22(extraout_var_08,0x2c));
                  uVar4 = FUN_004095e4(uVar4,DAT_00ca1690);
                  local_5c = FUN_004098c0(uVar4,CONCAT22(extraout_var_09,0x2c));
                  local_54 = DAT_00ca16a2;
                  local_50 = DAT_00ca16a6;
                  FUN_0042d430(L"dd.mmm.yyyy",PTR_DAT_00baa920,&local_58,DAT_00ca16a2,
                               (short)DAT_00ca16a6);
                  uVar4 = FUN_004097c0(local_5c,local_58);
                  local_64 = FUN_004098c0(uVar4,CONCAT22(extraout_var_10,0x2c));
                  FUN_0042d430(L"dd.mmm.yyyy",PTR_DAT_00baa920,&local_60,DAT_00ca1688,
                               (short)((ulonglong)_DAT_00ca1688 >> 0x20));
                  iVar5 = DAT_00ca16d0;
                  FUN_007c0218(CONCAT22(extraout_var_00,DAT_00ca1690));
                  uVar21 = SUB104(in_ST0,0);
                  uVar22 = (undefined2)((unkuint10)in_ST0 >> 0x20);
                  uVar23 = (undefined2)((unkuint10)in_ST0 >> 0x40);
                  FUN_007c1000(CONCAT22(extraout_var_01,DAT_00ca1690));
                  local_6c = (double)in_ST1;
                  FUN_007bffcc(CONCAT22(extraout_var_02,DAT_00ca1690));
                  fVar8 = (float10)1 - (in_ST2 + (float10)local_6c);
                  uVar18 = SUB104(fVar8,0);
                  uVar19 = (undefined2)((unkuint10)fVar8 >> 0x20);
                  uVar20 = (undefined2)((unkuint10)fVar8 >> 0x40);
                  FUN_007c011c(CONCAT22(extraout_var_03,DAT_00ca1690));
                  in_ST3 = (float10)1 - in_ST3;
                  uVar15 = SUB104(in_ST3,0);
                  uVar16 = (undefined2)((unkuint10)in_ST3 >> 0x20);
                  uVar17 = (undefined2)((unkuint10)in_ST3 >> 0x40);
                  fVar8 = (float10)_DAT_00ca16c8;
                  uVar12 = SUB104(fVar8,0);
                  uVar13 = (undefined4)((unkuint10)fVar8 >> 0x20);
                  uVar14 = (undefined2)((unkuint10)fVar8 >> 0x40);
                  uVar4 = FUN_004097c0(local_64,local_60);
                  uVar4 = FUN_004098c0(uVar4,CONCAT22(extraout_var_11,0x2c));
                  uVar4 = FUN_004095e4(uVar4,local_3c);
                  uVar4 = FUN_004098c0(uVar4,CONCAT22(extraout_var_12,0x2c));
                  uVar4 = FUN_004099cc(uVar4,0,3,uVar12,uVar13,uVar14);
                  uVar4 = FUN_004098c0(uVar4,CONCAT22(extraout_var_13,0x2c));
                  uVar4 = FUN_004099cc(uVar4,0,2,uVar15,uVar16,uVar17);
                  uVar4 = FUN_004098c0(uVar4,CONCAT22(extraout_var_14,0x2c));
                  uVar4 = FUN_004099cc(uVar4,0,2,uVar18,uVar19,uVar20);
                  uVar4 = FUN_004098c0(uVar4,CONCAT22(extraout_var_15,0x2c));
                  uVar4 = FUN_004099cc(uVar4,0,2,uVar21,uVar22,uVar23);
                  uVar4 = FUN_004098c0(uVar4,CONCAT22(extraout_var_16,0x2c));
                  FUN_004097c0(uVar4,local_44[0]);
                  FUN_00409a10();
                  puVar1 = puStack_f8;
                  *in_FS_OFFSET = iVar5;
                  puStack_f8 = &DAT_007c3c97;
                  FUN_0040c5c8(&local_60,iVar5,puVar1);
                  FUN_0040c5c8(&local_58);
                  return;
                }
              }
            }
          }
        }
      }
      DAT_00ca16c0 = DAT_00ca16c0 + 1;
      local_4c = local_4c + -1;
    } while (local_4c != 0);
  }
  uStack_90 = 0x3cb0;
  uStack_8e = 0x7c;
  FUN_007c54a4();
  uStack_90 = 0x3cbc;
  uStack_8e = 0x7c;
  FUN_00b2a8d8(*(undefined4 *)PTR_DAT_00baa8f8);
  if (DAT_00ca1680 != '\0') {
    uStack_90 = 0x3cd3;
    uStack_8e = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_90 = 0x3cd8;
    uStack_8e = 0x7c;
    FUN_004072f4();
    uStack_90 = 0x3ce2;
    uStack_8e = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_90 = 0x3ce7;
    uStack_8e = 0x7c;
    FUN_004072f4();
    uStack_90 = 0x3cf6;
    uStack_8e = 0x7c;
    FUN_004097c0(&DAT_00ca1708,L"------------------- Cumulative data ---------------------");
    uStack_90 = 0x3cfb;
    uStack_8e = 0x7c;
    FUN_00409a10();
    uStack_90 = 0x3d00;
    uStack_8e = 0x7c;
    FUN_004072f4();
    uStack_90 = 0x3d0f;
    uStack_8e = 0x7c;
    FUN_004097c0(&DAT_00ca1708,L"Hours of wakefulness, Average Grade, Repetition cases");
    uStack_90 = 0x3d14;
    uStack_8e = 0x7c;
    FUN_00409a10();
    uStack_90 = 0x3d19;
    uStack_8e = 0x7c;
    FUN_004072f4();
    local_45 = 0;
    do {
      if ((double)(&DAT_00c9dd58)[local_45] <= 0.0) {
        uStack_90 = 0x3da8;
        uStack_8e = 0x7c;
        uVar4 = FUN_004095e4(&DAT_00ca1708,local_45);
        uStack_90 = 0x3db2;
        uStack_8e = 0x7c;
        FUN_004097c0(uVar4,L", N/A, 0");
        uStack_90 = 0x3db7;
        uStack_8e = 0x7c;
        FUN_00409a10();
        uStack_90 = 0x3dbc;
        uStack_8e = 0x7c;
        FUN_004072f4();
      }
      else {
        fVar8 = (float10)(double)(&DAT_00c9dd58)[local_45];
        local_98 = SUB104(fVar8,0);
        uStack_94 = (undefined4)((unkuint10)fVar8 >> 0x20);
        uStack_90 = (undefined2)((unkuint10)fVar8 >> 0x40);
        fVar8 = (float10)(double)(&DAT_00c7a2b8)[local_45];
        uStack_a4 = SUB104(fVar8,0);
        uStack_a0 = (undefined4)((unkuint10)fVar8 >> 0x20);
        uStack_9c = (undefined2)((unkuint10)fVar8 >> 0x40);
        pwStack_a8 = L"멦,凨쑛맿\x02";
        uVar4 = FUN_004095e4(&DAT_00ca1708,local_45);
        pwStack_a8 = L"ʹ";
        uVar4 = FUN_004098c0(uVar4,CONCAT22(extraout_var_17,0x2c));
        pwStack_a8 = (wchar_t *)0x7c3d7b;
        uVar4 = FUN_004099cc(uVar4,0,2);
        uStack_9c = 0x3d84;
        uStack_9a = 0x7c;
        uVar4 = FUN_004098c0(uVar4,CONCAT22(extraout_var_18,0x2c));
        uStack_9c = 0x3d8d;
        uStack_9a = 0x7c;
        FUN_004099cc(uVar4,0,0);
        uStack_90 = 0x3d92;
        uStack_8e = 0x7c;
        FUN_00409a10();
        uStack_90 = 0x3d97;
        uStack_8e = 0x7c;
        FUN_004072f4();
      }
      local_45 = local_45 + 1;
    } while (local_45 != 0x19);
    uStack_90 = 0x3dd3;
    uStack_8e = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_90 = 0x3dd8;
    uStack_8e = 0x7c;
    FUN_004072f4();
    uStack_90 = 0x3de7;
    uStack_8e = 0x7c;
    uVar4 = FUN_004097c0(&DAT_00ca1708,L"Repetition cases checked: ");
    uStack_90 = 0x3df2;
    uStack_8e = 0x7c;
    FUN_004095e4(uVar4,DAT_00ca1684);
    uStack_90 = 0x3df7;
    uStack_8e = 0x7c;
    FUN_00409a10();
    uStack_90 = 0x3dfc;
    uStack_8e = 0x7c;
    FUN_004072f4();
    uStack_90 = 0x3e06;
    uStack_8e = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_90 = 0x3e0b;
    uStack_8e = 0x7c;
    FUN_004072f4();
    uStack_90 = 0x3e15;
    uStack_8e = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_90 = 0x3e1a;
    uStack_8e = 0x7c;
    FUN_004072f4();
    uStack_90 = 0x3e29;
    uStack_8e = 0x7c;
    FUN_004097c0(&DAT_00ca1708,
                 L"Please review data carefully and compare it with your sleep logs and repetition history"
                );
    uStack_90 = 0x3e2e;
    uStack_8e = 0x7c;
    FUN_00409a10();
    uStack_90 = 0x3e33;
    uStack_8e = 0x7c;
    FUN_004072f4();
    uStack_90 = 0x4304;
    uStack_8e = 0x7c;
    uStack_94 = 0x7c3e45;
    FUN_00b0eb74(L"help",&local_78);
    uStack_94 = local_78;
    local_98 = L" or current SuperMemo support address";
    uStack_9c = 0x3e5a;
    uStack_9a = 0x7c;
    FUN_0040d87c(&local_74,3);
    uStack_9c = 0x3e67;
    uStack_9a = 0x7c;
    FUN_004097c0(&DAT_00ca1708,local_74);
    uStack_9c = 0x3e6c;
    uStack_9a = 0x7c;
    FUN_00409a10();
    uStack_9c = 0x3e71;
    uStack_9a = 0x7c;
    FUN_004072f4();
    uStack_9c = 0x3e7b;
    uStack_9a = 0x7c;
    FUN_00408228(&DAT_00ca1708);
    uStack_9c = 16000;
    uStack_9a = 0x7c;
    FUN_004072f4();
    uStack_9c = 0x3e8a;
    uStack_9a = 0x7c;
    FUN_00b0e5b4(DAT_00ca1704);
  }
  uVar4 = CONCAT22(uStack_82,uStack_84);
  *in_FS_OFFSET = iStack_8c;
  uStack_84 = 0x3ec4;
  uStack_82 = 0x7c;
  iStack_88 = 0x7c3ea4;
  FUN_0040c628(&local_78,2,uVar4);
  iStack_88 = 0x7c3eac;
  FUN_0040c5c8(&local_60);
  iStack_88 = 0x7c3eb4;
  FUN_0040c5c8(&local_58);
  iStack_88 = 0x7c3ebc;
  FUN_0040c5c8(local_44);
  return;
}



// === FUN_007c43a4 @ 007c43a4 size:3204 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c43a4(void)

{
  double dVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  int iVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  undefined2 extraout_var_17;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *in_FS_OFFSET;
  byte bVar11;
  bool bVar12;
  float10 in_ST0;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 in_ST1;
  float10 fVar18;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar19;
  float10 in_ST7;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined2 uVar22;
  undefined4 uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined4 uVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  undefined *puStack_178;
  undefined1 *puStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined2 uStack_168;
  undefined2 uStack_166;
  undefined8 uStack_164;
  undefined2 uStack_15c;
  undefined2 uStack_15a;
  wchar_t *local_158;
  undefined4 uStack_154;
  undefined2 uStack_150;
  undefined2 uStack_14e;
  int iStack_14c;
  int iStack_148;
  undefined2 uStack_144;
  undefined2 uStack_142;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  undefined4 local_130;
  undefined4 local_12c;
  int local_128;
  double local_124;
  char local_11a;
  char local_119;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  wchar_t *local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined1 local_75;
  int local_74;
  int local_70 [3];
  int local_64;
  uint local_60;
  int local_58;
  double local_54;
  undefined4 local_4c;
  undefined4 uStack_48;
  double local_44;
  double local_34;
  undefined1 local_2c [4];
  undefined *local_28;
  double local_24;
  undefined4 local_1c;
  undefined4 uStack_18;
  double local_14;
  double local_c;
  
  bVar11 = 0;
  puStack_13c = &stack0xfffffffc;
  local_12c = 0;
  local_130 = 0;
  local_70[0] = 0;
  local_74 = 0;
  local_98 = 0;
  local_a0 = 0;
  puStack_140 = &LAB_007c5034;
  uStack_144 = (undefined2)*in_FS_OFFSET;
  uStack_142 = (undefined2)((uint)*in_FS_OFFSET >> 0x10);
  *in_FS_OFFSET = (int)&uStack_144;
  puVar3 = &stack0xfffffffc;
  if (DAT_00ca1680 != '\0') {
    iStack_148 = 0x7c43fd;
    FUN_0040d7f4(&DAT_00ca1704,*(undefined4 *)PTR_DAT_00ba99cc,L"\\sleep\\CircadianAlertness.csv");
    iStack_148 = 0x7c440f;
    FUN_00408068(&DAT_00ca1708,DAT_00ca1704,0);
    iStack_148 = 0x7c4414;
    FUN_004072f4();
    iStack_148 = 0x7c441e;
    FUN_00407ca0(&DAT_00ca1708);
    iStack_148 = 0x7c4423;
    FUN_004072f4();
    iStack_148 = 0x7c4432;
    FUN_004097c0(&DAT_00ca1708,
                 L"Circadian phase, Repetition hour, Grade, Element No, Day No, RepDate, SleepDate, Score, Alertness, Circadian, Homeostatic"
                );
    iStack_148 = 0x7c4437;
    FUN_00409a10();
    iStack_148 = 0x7c443c;
    FUN_004072f4();
    puVar3 = puStack_13c;
  }
  puStack_13c = puVar3;
  iStack_148 = 0x7c444b;
  FUN_0094fb9c(*(undefined4 *)PTR_DAT_00ba9c04,&local_75);
  iStack_148 = 0x7c445f;
  uVar5 = FUN_0061c7ac(PTR_PTR_LAB_00b279c4,1,*(undefined4 *)PTR_DAT_00ba9944);
  *(undefined4 *)PTR_DAT_00baa8f8 = uVar5;
  iStack_148 = 0x7c4473;
  iStack_14c = FUN_0094f468(*(undefined4 *)PTR_DAT_00ba9c04);
  iStack_148 = iStack_14c >> 0x1f;
  uStack_150 = 0x4487;
  uStack_14e = 0x7c;
  FUN_00b29314(*(undefined4 *)PTR_DAT_00baa8f8,L"Computing circadian performance");
  uStack_150 = 0x4493;
  uStack_14e = 0x7c;
  iVar6 = FUN_0094f468(*(undefined4 *)PTR_DAT_00ba9c04);
  dVar1 = (double)CONCAT44(uStack_164._4_4_,(undefined4)uStack_164);
  if (0 < iVar6) {
    local_58 = 1;
    local_7c = iVar6;
    do {
      uStack_150 = 0x44ba;
      uStack_14e = 0x7c;
      uStack_164 = dVar1;
      FUN_0094da18(*(undefined4 *)PTR_DAT_00ba9c04,local_58,&local_11a);
      if (local_58 % 5000 == 0) {
        fVar13 = (float10)local_58;
        iStack_14c = SUB104(fVar13,0);
        iStack_148 = (int)((unkuint10)fVar13 >> 0x20);
        uStack_144 = (undefined2)((unkuint10)fVar13 >> 0x40);
        uStack_15c = 0x44df;
        uStack_15a = 0x7c;
        in_ST7 = in_ST6;
        FUN_00b2a9a4(*(undefined4 *)PTR_DAT_00baa8f8);
        uStack_15c = 0x44eb;
        uStack_15a = 0x7c;
        cVar4 = FUN_00b2a0ec(*(undefined4 *)PTR_DAT_00baa8f8);
        dVar1 = uStack_164;
        if (cVar4 != '\0') break;
        uStack_15c = 0x44f8;
        uStack_15a = 0x7c;
        FUN_007c54a4();
        uStack_15c = 0x4504;
        uStack_15a = 0x7c;
        FUN_007dbea0(*(undefined4 *)PTR_DAT_00ba9944);
      }
      dVar1 = uStack_164;
      if ((local_11a == '\x01') && (local_119 != '\x03')) {
        uStack_150 = 0x452c;
        uStack_14e = 0x7c;
        FUN_0040f468(&local_74,PTR_DAT_0089b408);
        uStack_150 = 0x4537;
        uStack_14e = 0x7c;
        FUN_008aa01c(local_58,local_70);
        local_84 = local_70[0];
        if (local_70[0] != 0) {
          local_84 = *(int *)(local_70[0] + -4);
        }
        dVar1 = uStack_164;
        if (1 < local_84) {
          iVar6 = 0;
          if ((local_70[0] == 0) || (iVar8 = local_70[0], *(int *)(local_70[0] + -4) == 0)) {
            uStack_150 = 0x456b;
            uStack_14e = 0x7c;
            iVar6 = thunk_FUN_004072dc();
            iVar8 = extraout_EDX;
            dVar1 = uStack_164;
          }
          if (*(short *)(iVar8 + 4 + iVar6 * 0x27) == 1) {
            local_88 = local_70[0];
            if (local_70[0] != 0) {
              local_88 = *(int *)(local_70[0] + -4);
            }
            if (0 < local_88) {
              local_80 = local_88;
              local_64 = 1;
              do {
                uVar7 = local_64 - 1;
                uStack_164 = dVar1;
                if (SBORROW4(local_64,1)) {
                  uStack_150 = 0x45c2;
                  uStack_14e = 0x7c;
                  uVar7 = thunk_FUN_004072dc();
                }
                if ((local_70[0] == 0) ||
                   (iVar6 = local_70[0], *(uint *)(local_70[0] + -4) <= uVar7)) {
                  uStack_150 = 0x45d3;
                  uStack_14e = 0x7c;
                  uVar7 = thunk_FUN_004072dc();
                  iVar6 = extraout_EDX_00;
                }
                puVar9 = (undefined4 *)(iVar6 + uVar7 * 0x27);
                puVar10 = (undefined4 *)&DAT_00ca1698;
                for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar10 = *puVar9;
                  puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
                  puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
                }
                *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
                *(undefined1 *)((int)puVar10 + (uint)bVar11 * -4 + 2) =
                     *(undefined1 *)((int)puVar9 + (uint)bVar11 * -4 + 2);
                uStack_150 = 0x45f2;
                uStack_14e = 0x7c;
                cVar4 = FUN_007c25e8(&DAT_00ca1698);
                dVar1 = uStack_164;
                if (cVar4 != '\0') {
                  fVar13 = in_ST0;
                  fVar15 = in_ST1;
                  fVar16 = in_ST2;
                  fVar17 = in_ST3;
                  fVar14 = in_ST4;
                  fVar19 = in_ST5;
                  fVar18 = in_ST6;
                  if (local_74 == 0) {
                    uStack_150 = 0x460b;
                    uStack_14e = 0x7c;
                    in_ST0 = in_ST1;
                    in_ST1 = in_ST2;
                    in_ST2 = in_ST3;
                    in_ST3 = in_ST4;
                    in_ST4 = in_ST5;
                    in_ST5 = in_ST6;
                    in_ST6 = in_ST7;
                    FUN_007a6b08(local_70[0],&local_74);
                    fVar13 = in_ST0;
                    fVar15 = in_ST1;
                    fVar16 = in_ST2;
                    fVar17 = in_ST3;
                    fVar14 = in_ST4;
                    fVar19 = in_ST5;
                    fVar18 = in_ST6;
                    in_ST7 = in_ST6;
                    dVar1 = uStack_164;
                    if (local_74 == 0) break;
                  }
                  in_ST6 = in_ST7;
                  in_ST5 = fVar18;
                  in_ST4 = fVar19;
                  in_ST3 = fVar14;
                  in_ST2 = fVar17;
                  in_ST1 = fVar16;
                  in_ST0 = fVar15;
                  uVar7 = local_64 - 1;
                  if (SBORROW4(local_64,1)) {
                    uStack_150 = 0x4624;
                    uStack_14e = 0x7c;
                    uVar7 = thunk_FUN_004072dc();
                  }
                  if ((local_74 == 0) || (iVar6 = local_74, *(uint *)(local_74 + -4) <= uVar7)) {
                    uStack_150 = 0x4635;
                    uStack_14e = 0x7c;
                    uVar7 = thunk_FUN_004072dc();
                    iVar6 = extraout_EDX_01;
                  }
                  local_4c = *(undefined4 *)(iVar6 + 0x24 + uVar7 * 0x3e);
                  uStack_48 = *(undefined4 *)(iVar6 + 0x28 + uVar7 * 0x3e);
                  uStack_150 = 0x4654;
                  uStack_14e = 0x7c;
                  FUN_0040a340(&DAT_00ca16aa);
                  _DAT_00ca16d0 = (double)fVar13;
                  if ((double)_DAT_007c51d8 < _DAT_00ca16d0) {
                    _DAT_00ca16d0 = _DAT_00ca16d0 - (double)_DAT_007c51d8;
                  }
                  uStack_150 = SUB42(DAT_00ca16a6,0);
                  uStack_14e = (undefined2)((uint)DAT_00ca16a6 >> 0x10);
                  iStack_14c = DAT_00ca16a2;
                  local_158 = L"ꍦᚐÊ뜏逅쨖謀ပ몛謀㬒Ղ谏ٸ";
                  in_ST7 = in_ST6;
                  DAT_00ca1690 = FUN_007bc964();
                  dVar1 = uStack_164;
                  if (*(int *)(*(int *)PTR_DAT_00ba9b10 + 5) <= (int)(uint)DAT_00ca1690) {
                    local_8c = *(int *)PTR_DAT_00baa6dc;
                    if (local_8c != 0) {
                      local_8c = *(int *)(local_8c + -4);
                    }
                    if ((int)(uint)DAT_00ca1690 <= local_8c) {
                      if (DAT_00c7a2b0 == '\0') {
                        local_158 = DAT_00ca16a6;
                        uStack_15c = (undefined2)DAT_00ca16a2;
                        uStack_15a = (undefined2)((uint)DAT_00ca16a2 >> 0x10);
                        uStack_164._4_4_ = 0x7c488e;
                        FUN_007bbe48(DAT_00ca1690);
                        local_c = (double)in_ST0;
                        in_ST0 = in_ST1;
                        in_ST1 = in_ST2;
                        in_ST2 = in_ST3;
                        in_ST3 = in_ST4;
                        in_ST4 = in_ST5;
                        in_ST5 = in_ST6;
                        in_ST6 = in_ST7;
                      }
                      else {
                        uVar7 = DAT_00ca1690 - 1;
                        if (SBORROW4((uint)DAT_00ca1690,1)) {
                          local_158 = (wchar_t *)0x7c4707;
                          uVar7 = thunk_FUN_004072dc();
                        }
                        iVar6 = *(int *)PTR_DAT_00baa6dc;
                        if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= uVar7)) {
                          local_158 = (wchar_t *)0x7c471d;
                          uVar7 = thunk_FUN_004072dc();
                          iVar6 = extraout_EDX_02;
                        }
                        local_158 = *(wchar_t **)(iVar6 + 0x16 + uVar7 * 0x92);
                        uVar5 = *(undefined4 *)(iVar6 + 0x12 + uVar7 * 0x92);
                        uStack_15c = (undefined2)uVar5;
                        uStack_15a = (undefined2)((uint)uVar5 >> 0x10);
                        uStack_164._4_4_ = 0x7c472d;
                        FUN_007b8be0();
                        local_14 = (double)in_ST0;
                        uVar7 = DAT_00ca1690 - 1;
                        if (SBORROW4((uint)DAT_00ca1690,1)) {
                          local_158 = (wchar_t *)0x7c4742;
                          uVar7 = thunk_FUN_004072dc();
                        }
                        iVar6 = *(int *)PTR_DAT_00baa6dc;
                        if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= uVar7)) {
                          local_158 = (wchar_t *)0x7c4758;
                          uVar7 = thunk_FUN_004072dc();
                          iVar6 = extraout_EDX_03;
                        }
                        local_1c = *(undefined4 *)(iVar6 + 0x5a + uVar7 * 0x92);
                        uStack_18 = *(undefined4 *)(iVar6 + 0x5e + uVar7 * 0x92);
                        _DAT_00ca16f0 =
                             (double)CONCAT44(uStack_18,local_1c) / (double)_DAT_007c51dc + local_14
                        ;
                        if ((double)_DAT_007c51d8 < _DAT_00ca16f0) {
                          _DAT_00ca16f0 = _DAT_00ca16f0 - (double)_DAT_007c51d8;
                        }
                        if (_DAT_00ca16d0 <= _DAT_00ca16f0) {
                          uVar7 = DAT_00ca1690 - 2;
                          fVar13 = in_ST7;
                          if (SBORROW4((uint)DAT_00ca1690,2)) {
                            local_158 = (wchar_t *)0x7c47d9;
                            uVar7 = thunk_FUN_004072dc();
                          }
                          iVar6 = *(int *)PTR_DAT_00baa6dc;
                          if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= uVar7)) {
                            local_158 = (wchar_t *)0x7c47ef;
                            uVar7 = thunk_FUN_004072dc();
                            iVar6 = extraout_EDX_04;
                          }
                          local_158 = *(wchar_t **)(iVar6 + 0x16 + uVar7 * 0x92);
                          uVar5 = *(undefined4 *)(iVar6 + 0x12 + uVar7 * 0x92);
                          uStack_15c = (undefined2)uVar5;
                          uStack_15a = (undefined2)((uint)uVar5 >> 0x10);
                          uStack_164._4_4_ = 0x7c47ff;
                          FUN_007b8be0();
                          local_14 = (double)in_ST1;
                          _DAT_00ca16f0 =
                               (double)CONCAT44(uStack_18,local_1c) / (double)_DAT_007c51dc +
                               local_14;
                          if ((double)_DAT_007c51d8 < _DAT_00ca16f0) {
                            _DAT_00ca16f0 = _DAT_00ca16f0 - (double)_DAT_007c51d8;
                          }
                          in_ST0 = in_ST2;
                          in_ST1 = in_ST3;
                          in_ST2 = in_ST4;
                          in_ST3 = in_ST5;
                          in_ST4 = in_ST6;
                          in_ST5 = in_ST7;
                          in_ST6 = fVar13;
                          if (_DAT_00ca16d0 <= _DAT_00ca16f0) {
                            local_c = (_DAT_00ca16d0 + (double)_DAT_007c51d8) - _DAT_00ca16f0;
                          }
                          else {
                            local_c = _DAT_00ca16d0 - _DAT_00ca16f0;
                          }
                        }
                        else {
                          local_c = _DAT_00ca16d0 - _DAT_00ca16f0;
                          in_ST0 = in_ST1;
                          in_ST1 = in_ST2;
                          in_ST2 = in_ST3;
                          in_ST3 = in_ST4;
                          in_ST4 = in_ST5;
                          in_ST5 = in_ST6;
                          in_ST6 = in_ST7;
                        }
                      }
                      in_ST7 = in_ST6;
                      dVar1 = (double)CONCAT44(uStack_164._4_4_,(undefined4)uStack_164);
                      if (local_c <= (double)_DAT_007c51d8) {
                        dVar1 = (double)CONCAT44(uStack_164._4_4_,(undefined4)uStack_164);
                        if (0.0 < local_c) {
                          fVar13 = (float10)local_c;
                          local_158 = (wchar_t *)0x7c48bc;
                          uVar7 = FUN_00407bcc();
                          if ((int)uVar7 >> 0x1f != extraout_EDX_05) {
                            local_158 = (wchar_t *)0x7c48ca;
                            uVar7 = thunk_FUN_004072dc();
                          }
                          bVar12 = SCARRY4(DAT_00ca1684,1);
                          DAT_00ca1684 = DAT_00ca1684 + 1;
                          local_60 = uVar7;
                          if (bVar12) {
                            local_158 = (wchar_t *)0x7c48db;
                            thunk_FUN_004072dc();
                          }
                          if (DAT_00ca16b0 < '\x03') {
                            local_44 = -(double)CONCAT44(uStack_48,local_4c);
                          }
                          else {
                            local_44 = 1.0 - (double)CONCAT44(uStack_48,local_4c);
                          }
                          local_44 = (double)(_DAT_007c51e0 * (float)local_44);
                          uVar7 = local_60;
                          if (0x721 < local_60) {
                            local_158 = (wchar_t *)0x7c4914;
                            uVar7 = thunk_FUN_004072dc();
                          }
                          fVar14 = (float10)(double)(&DAT_00c7a2b8)[uVar7] + (float10)local_44;
                          uVar7 = local_60;
                          fVar15 = in_ST3;
                          fVar16 = in_ST4;
                          fVar17 = in_ST5;
                          if (0x721 < local_60) {
                            local_158 = (wchar_t *)0x7c492d;
                            uVar7 = thunk_FUN_004072dc();
                            fVar15 = in_ST3;
                            fVar16 = in_ST4;
                            fVar17 = in_ST5;
                          }
                          (&DAT_00c7a2b8)[uVar7] = (double)fVar14;
                          local_158 = DAT_00ca16d4;
                          uStack_15c = SUB82(_DAT_00ca16d0,0);
                          uStack_15a = (undefined2)((ulonglong)_DAT_00ca16d0 >> 0x10);
                          uStack_164._4_4_ = 0x7c494c;
                          FUN_007c011c(DAT_00ca1690);
                          fVar13 = (float10)1 - fVar13;
                          uVar7 = local_60;
                          fVar14 = fVar17;
                          if (0x721 < local_60) {
                            local_158 = (wchar_t *)0x7c495f;
                            uVar7 = thunk_FUN_004072dc();
                          }
                          fVar13 = fVar13 + (float10)*(double *)(&DAT_00c7dbc8 + uVar7 * 2);
                          uVar7 = local_60;
                          if (0x721 < local_60) {
                            local_158 = (wchar_t *)0x7c4975;
                            uVar7 = thunk_FUN_004072dc();
                          }
                          *(double *)(&DAT_00c7dbc8 + uVar7 * 2) = (double)fVar13;
                          local_158 = DAT_00ca16d4;
                          uStack_15c = SUB82(_DAT_00ca16d0,0);
                          uStack_15a = (undefined2)((ulonglong)_DAT_00ca16d0 >> 0x10);
                          uStack_164._4_4_ = 0x7c4994;
                          fVar13 = fVar14;
                          FUN_007c1000(DAT_00ca1690);
                          local_124 = (double)in_ST0;
                          local_158 = DAT_00ca16d4;
                          uStack_15c = SUB82(_DAT_00ca16d0,0);
                          uStack_15a = (undefined2)((ulonglong)_DAT_00ca16d0 >> 0x10);
                          uStack_164._4_4_ = 0x7c49b2;
                          FUN_007bffcc(CONCAT22(extraout_var,DAT_00ca1690));
                          fVar18 = (float10)1 - (in_ST1 + (float10)local_124);
                          uVar7 = local_60;
                          in_ST0 = fVar14;
                          in_ST1 = fVar13;
                          fVar19 = fVar13;
                          if (0x721 < local_60) {
                            local_158 = (wchar_t *)0x7c49cb;
                            uVar7 = thunk_FUN_004072dc();
                            in_ST0 = fVar14;
                            in_ST1 = fVar13;
                          }
                          fVar18 = fVar18 + (float10)*(double *)(&DAT_00c814d8 + uVar7 * 2);
                          uVar7 = local_60;
                          if (0x721 < local_60) {
                            local_158 = (wchar_t *)0x7c49e1;
                            uVar7 = thunk_FUN_004072dc();
                          }
                          *(double *)(&DAT_00c814d8 + uVar7 * 2) = (double)fVar18;
                          local_158 = DAT_00ca16d4;
                          uStack_15c = SUB82(_DAT_00ca16d0,0);
                          uStack_15a = (undefined2)((ulonglong)_DAT_00ca16d0 >> 0x10);
                          uStack_164._4_4_ = 0x7c4a00;
                          in_ST3 = fVar19;
                          FUN_007c0218(DAT_00ca1690);
                          uVar7 = local_60;
                          if (0x721 < local_60) {
                            uStack_164._4_4_ = 0x7c4a0f;
                            uVar7 = thunk_FUN_004072dc();
                          }
                          fVar13 = in_ST2 + (float10)*(double *)(&DAT_00c84de8 + uVar7 * 2);
                          uVar7 = local_60;
                          in_ST2 = fVar19;
                          if (0x721 < local_60) {
                            uStack_164._4_4_ = 0x7c4a25;
                            uVar7 = thunk_FUN_004072dc();
                            in_ST2 = fVar19;
                          }
                          *(double *)(&DAT_00c84de8 + uVar7 * 2) = (double)fVar13;
                          local_124 = _DAT_00ca16d0 / (double)_DAT_007c51d8 +
                                      (double)CONCAT44(DAT_00ca16a6,DAT_00ca16a2);
                          uStack_168 = 0;
                          uStack_166 = 0;
                          uStack_16c = 0;
                          uStack_170._0_2_ = 0x4a60;
                          uStack_170._2_2_ = 0x7c;
                          in_ST4 = in_ST3;
                          uStack_164 = local_124;
                          FUN_007ce0f4(local_2c,1);
                          local_34 = (double)fVar15;
                          fVar13 = (float10)local_34;
                          puStack_178 = SUB104(fVar13,0);
                          puStack_174 = (undefined1 *)((unkuint10)fVar13 >> 0x20);
                          uStack_170._0_2_ = (undefined2)((unkuint10)fVar13 >> 0x40);
                          in_ST5 = in_ST4;
                          FUN_00407b28();
                          local_34 = (double)(fVar16 * (float10)_DAT_007c51d8);
                          uStack_170._0_2_ = (undefined2)((ulonglong)local_34 >> 0x20);
                          uStack_170._2_2_ = (undefined2)((ulonglong)local_34 >> 0x30);
                          puStack_174 = (undefined1 *)local_34._0_4_;
                          puStack_178 = (undefined *)DAT_00ca16d4;
                          in_ST6 = in_ST5;
                          FUN_007ba06c();
                          local_24 = (double)fVar17;
                          uStack_170._0_2_ = (undefined2)((ulonglong)local_24 >> 0x20);
                          uStack_170._2_2_ = (undefined2)((ulonglong)local_24 >> 0x30);
                          puStack_174 = (undefined1 *)local_24._0_4_;
                          puStack_178 = local_28;
                          FUN_007c2494();
                          uVar7 = local_60;
                          if (0x721 < local_60) {
                            uStack_170._0_2_ = 0x4abe;
                            uStack_170._2_2_ = 0x7c;
                            uVar7 = thunk_FUN_004072dc();
                          }
                          fVar13 = (float10)1 + (float10)(double)(&DAT_00c9dd58)[uVar7];
                          uVar7 = local_60;
                          if (0x721 < local_60) {
                            uStack_170._0_2_ = 0x4ad6;
                            uStack_170._2_2_ = 0x7c;
                            uVar7 = thunk_FUN_004072dc();
                          }
                          (&DAT_00c9dd58)[uVar7] = (double)fVar13;
                          in_ST7 = in_ST6;
                          dVar1 = uStack_164;
                          if (DAT_00ca1680 != '\0') {
                            puStack_174 = &LAB_007c4d1b;
                            puStack_178 = (undefined *)*in_FS_OFFSET;
                            *in_FS_OFFSET = (int)&puStack_178;
                            uStack_170 = &stack0xfffffffc;
                            FUN_0042c388();
                            fVar13 = (float10)_DAT_00ca16d0;
                            uVar22 = SUB102(fVar13,0);
                            uVar20 = (undefined4)((unkuint10)fVar13 >> 0x20);
                            uVar24 = (undefined2)((unkuint10)fVar13 >> 0x40);
                            fVar13 = (float10)local_c;
                            uVar5 = FUN_004099cc(&DAT_00ca1708,0,1,SUB102(fVar13,0),
                                                 (int)((unkuint10)fVar13 >> 0x20),
                                                 (short)((unkuint10)fVar13 >> 0x40));
                            uVar5 = FUN_004098c0(uVar5,CONCAT22(extraout_var_04,0x2c));
                            uVar5 = FUN_004099cc(uVar5,0,1,uVar22,uVar20,uVar24);
                            uVar5 = FUN_004098c0(uVar5,CONCAT22(extraout_var_05,0x2c));
                            uVar5 = FUN_004095e4(uVar5,(int)DAT_00ca16b0);
                            uVar5 = FUN_004098c0(uVar5,CONCAT22(extraout_var_06,0x2c));
                            uVar5 = FUN_004095e4(uVar5,_DAT_00ca1698);
                            FUN_004098c0(uVar5,CONCAT22(extraout_var_07,0x2c));
                            uVar5 = FUN_00409a00();
                            local_9c = FUN_004098c0(uVar5,CONCAT22(extraout_var_08,0x2c));
                            local_94 = DAT_00ca16a2;
                            local_90 = DAT_00ca16a6;
                            FUN_0042d430(L"dd.mmm.yyyy",PTR_DAT_00baa920,&local_98,DAT_00ca16a2,
                                         (short)DAT_00ca16a6);
                            uVar5 = FUN_004097c0(local_9c,local_98);
                            local_a4 = FUN_004098c0(uVar5,CONCAT22(extraout_var_09,0x2c));
                            FUN_0042d430(L"dd.mmm.yyyy",PTR_DAT_00baa920,&local_a0,DAT_00ca1688,
                                         (short)DAT_00ca168c);
                            iVar6 = DAT_00ca16d0;
                            FUN_007c0218(CONCAT22(extraout_var_00,DAT_00ca1690));
                            uVar26 = SUB104(in_ST1,0);
                            uVar27 = (undefined2)((unkuint10)in_ST1 >> 0x20);
                            uVar28 = (undefined2)((unkuint10)in_ST1 >> 0x40);
                            FUN_007c1000(CONCAT22(extraout_var_01,DAT_00ca1690));
                            local_124 = (double)in_ST2;
                            FUN_007bffcc(CONCAT22(extraout_var_02,DAT_00ca1690));
                            fVar13 = (float10)1 - (in_ST3 + (float10)local_124);
                            uVar23 = SUB104(fVar13,0);
                            uVar24 = (undefined2)((unkuint10)fVar13 >> 0x20);
                            uVar25 = (undefined2)((unkuint10)fVar13 >> 0x40);
                            FUN_007c011c(CONCAT22(extraout_var_03,DAT_00ca1690));
                            in_ST4 = (float10)1 - in_ST4;
                            uVar20 = SUB104(in_ST4,0);
                            uVar21 = (undefined4)((unkuint10)in_ST4 >> 0x20);
                            uVar22 = (undefined2)((unkuint10)in_ST4 >> 0x40);
                            uVar5 = FUN_004097c0(local_a4,local_a0);
                            FUN_004098c0(uVar5,CONCAT22(extraout_var_10,0x2c));
                            uVar5 = FUN_00409a00();
                            uVar5 = FUN_004098c0(uVar5,CONCAT22(extraout_var_11,0x2c));
                            uVar5 = FUN_004099cc(uVar5,0,2,uVar20,uVar21,uVar22);
                            uVar5 = FUN_004098c0(uVar5,CONCAT22(extraout_var_12,0x2c));
                            uVar5 = FUN_004099cc(uVar5,0,2,uVar23,uVar24,uVar25);
                            uVar5 = FUN_004098c0(uVar5,CONCAT22(extraout_var_13,0x2c));
                            FUN_004099cc(uVar5,0,2,uVar26,uVar27,uVar28);
                            FUN_00409a10();
                            puVar2 = puStack_178;
                            *in_FS_OFFSET = iVar6;
                            puStack_178 = &DAT_007c4d22;
                            FUN_0040c5c8(&local_a0,iVar6,puVar2);
                            FUN_0040c5c8(&local_98);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
                local_64 = local_64 + 1;
                local_80 = local_80 + -1;
              } while (local_80 != 0);
            }
          }
        }
      }
      local_58 = local_58 + 1;
      local_7c = local_7c + -1;
    } while (local_7c != 0);
  }
  uStack_150 = 0x4d4e;
  uStack_14e = 0x7c;
  uStack_164 = dVar1;
  FUN_00940fa8(*(undefined4 *)PTR_DAT_00ba9c04,local_75);
  uStack_150 = 0x4d5a;
  uStack_14e = 0x7c;
  FUN_00b2a8d8(*(undefined4 *)PTR_DAT_00baa8f8);
  uStack_150 = 0x4d5f;
  uStack_14e = 0x7c;
  FUN_007c54a4();
  local_60 = 0;
  do {
    iVar6 = (int)((longlong)(int)local_60 * 2);
    if ((longlong)iVar6 != (longlong)(int)local_60 * 2) {
      uStack_150 = 0x4d6f;
      uStack_14e = 0x7c;
      iVar6 = thunk_FUN_004072dc();
    }
    iVar8 = iVar6 + -2;
    if (SCARRY4(iVar6,-2)) {
      uStack_150 = 0x4d79;
      uStack_14e = 0x7c;
      iVar8 = thunk_FUN_004072dc();
    }
    local_54 = (double)iVar8;
    if (local_54 < 0.0) {
      local_54 = local_54 + (double)_DAT_007c51d8;
    }
    local_128 = iVar8;
    if (DAT_00ca1680 != '\0') {
      uVar7 = local_60;
      if (0x721 < local_60) {
        uStack_150 = 0x4db9;
        uStack_14e = 0x7c;
        uVar7 = thunk_FUN_004072dc();
      }
      fVar13 = (float10)(double)(&DAT_00c9dd58)[uVar7];
      local_158 = SUB104(fVar13,0);
      uStack_154 = (undefined4)((unkuint10)fVar13 >> 0x20);
      uStack_150 = (undefined2)((unkuint10)fVar13 >> 0x40);
      uVar7 = local_60;
      if (0x721 < local_60) {
        uStack_15c = 0x4dd6;
        uStack_15a = 0x7c;
        uVar7 = thunk_FUN_004072dc();
      }
      fVar13 = (float10)(double)(&DAT_00c7a2b8)[uVar7];
      uStack_164._0_4_ = SUB104(fVar13,0);
      uStack_164._4_4_ = (undefined4)((unkuint10)fVar13 >> 0x20);
      uStack_15c = (undefined2)((unkuint10)fVar13 >> 0x40);
      fVar13 = (float10)local_54;
      uStack_170._0_2_ = SUB102(fVar13,0);
      uStack_170._2_2_ = (undefined2)((unkuint10)fVar13 >> 0x10);
      uStack_16c = (undefined4)((unkuint10)fVar13 >> 0x20);
      uStack_168 = (undefined2)((unkuint10)fVar13 >> 0x40);
      puStack_174 = (undefined1 *)0x7c4dfc;
      uVar5 = FUN_004099cc(&DAT_00ca1708,0,0);
      uStack_168 = 0x4e05;
      uStack_166 = 0x7c;
      uVar5 = FUN_004098c0(uVar5,CONCAT22(extraout_var_14,0x2c));
      uStack_168 = 0x4e11;
      uStack_166 = 0x7c;
      uVar5 = FUN_004099cc(uVar5,0,2);
      uStack_15c = 0x4e1a;
      uStack_15a = 0x7c;
      FUN_004098c0(uVar5,CONCAT22(extraout_var_15,0x2c));
      uStack_15c = 19999;
      uStack_15a = 0x7c;
      FUN_00409a00();
      uStack_150 = 0x4e24;
      uStack_14e = 0x7c;
      FUN_00409a10();
      uStack_150 = 0x4e29;
      uStack_14e = 0x7c;
      FUN_004072f4();
    }
    local_60 = local_60 + 1;
  } while (local_60 != 0x19);
  uVar7 = 0x19;
  if (DAT_00ca1680 != '\0') {
    uStack_150 = 0x4e4d;
    uStack_14e = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_150 = 0x4e52;
    uStack_14e = 0x7c;
    FUN_004072f4();
    uStack_150 = 0x4e5c;
    uStack_14e = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_150 = 0x4e61;
    uStack_14e = 0x7c;
    FUN_004072f4();
    uStack_150 = 0x4e70;
    uStack_14e = 0x7c;
    FUN_004097c0(&DAT_00ca1708,L"------------------- Cumulative data ---------------------");
    uStack_150 = 0x4e75;
    uStack_14e = 0x7c;
    FUN_00409a10();
    uStack_150 = 0x4e7a;
    uStack_14e = 0x7c;
    FUN_004072f4();
    uStack_150 = 0x4e89;
    uStack_14e = 0x7c;
    FUN_004097c0(&DAT_00ca1708,L"Circadian phase, Average Grade, Repetition cases");
    uStack_150 = 0x4e8e;
    uStack_14e = 0x7c;
    FUN_00409a10();
    uStack_150 = 0x4e93;
    uStack_14e = 0x7c;
    FUN_004072f4();
    local_60 = 1;
    do {
      uVar7 = local_60;
      if (0x721 < local_60) {
        uStack_150 = 0x4ea9;
        uStack_14e = 0x7c;
        uVar7 = thunk_FUN_004072dc();
      }
      fVar13 = (float10)(double)(&DAT_00c9dd58)[uVar7];
      local_158 = SUB104(fVar13,0);
      uStack_154 = (undefined4)((unkuint10)fVar13 >> 0x20);
      uStack_150 = (undefined2)((unkuint10)fVar13 >> 0x40);
      uVar7 = local_60;
      if (0x721 < local_60) {
        uStack_15c = 0x4ec6;
        uStack_15a = 0x7c;
        uVar7 = thunk_FUN_004072dc();
      }
      fVar13 = (float10)(double)(&DAT_00c7a2b8)[uVar7];
      uStack_164._0_4_ = SUB104(fVar13,0);
      uStack_164._4_4_ = (undefined4)((unkuint10)fVar13 >> 0x20);
      uStack_15c = (undefined2)((unkuint10)fVar13 >> 0x40);
      uStack_168 = 0x4ee1;
      uStack_166 = 0x7c;
      uVar5 = FUN_004095e4(&DAT_00ca1708,local_60);
      uStack_168 = 0x4eea;
      uStack_166 = 0x7c;
      uVar5 = FUN_004098c0(uVar5,CONCAT22(extraout_var_16,0x2c));
      uStack_168 = 0x4ef6;
      uStack_166 = 0x7c;
      uVar5 = FUN_004099cc(uVar5,0,2);
      uStack_15c = 0x4eff;
      uStack_15a = 0x7c;
      FUN_004098c0(uVar5,CONCAT22(extraout_var_17,0x2c));
      uStack_15c = 0x4f04;
      uStack_15a = 0x7c;
      FUN_00409a00();
      uStack_150 = 0x4f09;
      uStack_14e = 0x7c;
      FUN_00409a10();
      uStack_150 = 0x4f0e;
      uStack_14e = 0x7c;
      FUN_004072f4();
      local_60 = local_60 + 1;
    } while (local_60 != 0x19);
    uStack_150 = 0x4f21;
    uStack_14e = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_150 = 0x4f26;
    uStack_14e = 0x7c;
    FUN_004072f4();
    uStack_150 = 0x4f35;
    uStack_14e = 0x7c;
    uVar5 = FUN_004097c0(&DAT_00ca1708,L"Repetition cases checked: ");
    uStack_150 = 0x4f40;
    uStack_14e = 0x7c;
    FUN_004095e4(uVar5,DAT_00ca1684);
    uStack_150 = 0x4f45;
    uStack_14e = 0x7c;
    FUN_00409a10();
    uStack_150 = 0x4f4a;
    uStack_14e = 0x7c;
    FUN_004072f4();
    uStack_150 = 0x4f54;
    uStack_14e = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_150 = 0x4f59;
    uStack_14e = 0x7c;
    FUN_004072f4();
    uStack_150 = 0x4f63;
    uStack_14e = 0x7c;
    FUN_00409a10(&DAT_00ca1708);
    uStack_150 = 0x4f68;
    uStack_14e = 0x7c;
    FUN_004072f4();
    uStack_150 = 0x4f77;
    uStack_14e = 0x7c;
    FUN_004097c0(&DAT_00ca1708,
                 L"Please review data carefully and compare it with your sleep logs and repetition history"
                );
    uStack_150 = 0x4f7c;
    uStack_14e = 0x7c;
    FUN_00409a10();
    uStack_150 = 0x4f81;
    uStack_14e = 0x7c;
    FUN_004072f4();
    uStack_150 = 0x5404;
    uStack_14e = 0x7c;
    uStack_154 = 0x7c4f96;
    FUN_00b0eb74(L"help",&local_130);
    uStack_154 = local_130;
    local_158 = L" or current SuperMemo support address";
    uStack_15c = 0x4fb1;
    uStack_15a = 0x7c;
    FUN_0040d87c(&local_12c,3);
    uStack_15c = 0x4fc1;
    uStack_15a = 0x7c;
    FUN_004097c0(&DAT_00ca1708,local_12c);
    uStack_15c = 0x4fc6;
    uStack_15a = 0x7c;
    FUN_00409a10();
    uStack_15c = 0x4fcb;
    uStack_15a = 0x7c;
    FUN_004072f4();
    uStack_15c = 0x4fd5;
    uStack_15a = 0x7c;
    FUN_00408228(&DAT_00ca1708);
    uStack_15c = 0x4fda;
    uStack_15a = 0x7c;
    FUN_004072f4();
    uStack_15c = 0x4fe4;
    uStack_15a = 0x7c;
    FUN_00b0e5b4(DAT_00ca1704);
    uVar7 = local_60;
  }
  local_60 = uVar7;
  uVar5 = CONCAT22(uStack_142,uStack_144);
  *in_FS_OFFSET = iStack_14c;
  uStack_144 = 0x503b;
  uStack_142 = 0x7c;
  iStack_148 = 0x7c5001;
  FUN_0040c628(&local_130,2,uVar5);
  iStack_148 = 0x7c500c;
  FUN_0040c5c8(&local_a0);
  iStack_148 = 0x7c5017;
  FUN_0040c5c8(&local_98);
  iStack_148 = 0x7c5025;
  FUN_0040f468(&local_74,PTR_DAT_0089b408);
  iStack_148 = 0x7c5033;
  FUN_0040f468(local_70,PTR_DAT_0089b2f8);
  return;
}



// === FUN_007d0d08 @ 007d0d08 size:1204 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007d0d08(int param_1,ushort param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 extraout_var;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar5;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  int extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  int extraout_EDX_06;
  undefined2 extraout_var_00;
  uint extraout_EDX_07;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  undefined *puStackY_b8;
  undefined4 uStackY_ac;
  undefined *in_stack_ffffff5c;
  undefined *local_8c;
  wchar_t *pwStack_88;
  undefined *local_84;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined1 **local_78;
  undefined8 local_74;
  wchar_t *local_6c;
  undefined *local_68;
  undefined8 local_64;
  undefined8 local_5c;
  wchar_t *local_54;
  undefined *local_50;
  undefined *local_4c;
  wchar_t *local_48;
  wchar_t *local_44;
  undefined4 uStack_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  undefined1 *puStack_28;
  undefined1 *local_24;
  int local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  local_24 = &stack0xfffffffc;
  local_14 = 0x10;
  do {
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  uStack_c = (uint)param_2 << 0x10;
  puStack_28 = &LAB_007d1208;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_34 = (double)CONCAT44(0x7d0d3f,(undefined4)local_34);
  local_8 = param_1;
  FUN_0040c5c8(param_4);
  local_34 = (double)CONCAT44(&stack0xfffffffc,&LAB_007d119e);
  uVar1 = *in_FS_OFFSET;
  local_3c = (double)CONCAT44(uVar1,(undefined4)local_3c);
  *in_FS_OFFSET = (int)&local_3c + 4;
  local_44 = *(wchar_t **)(*(int *)PTR_DAT_00ba9b10 + 9);
  local_48 = local_44;
  if (local_44 != (wchar_t *)0x0) {
    local_48 = *(wchar_t **)(local_44 + -2);
  }
  if ((int)local_48 < (int)(uint)uStack_c._2_2_) {
    *in_FS_OFFSET = uVar1;
  }
  else {
    uVar2 = uStack_c._2_2_ - 1;
    if (SBORROW4((uint)uStack_c._2_2_,1)) {
      local_3c = (double)CONCAT44(uVar1,0x7d0d95);
      uVar2 = thunk_FUN_004072dc();
    }
    iVar3 = *(int *)(*(int *)PTR_DAT_00ba9b10 + 9);
    if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar2)) {
      local_3c = (double)CONCAT44(local_3c._4_4_,0x7d0dae);
      uVar2 = thunk_FUN_004072dc();
      iVar3 = extraout_EDX;
    }
    local_4c = *(undefined **)(iVar3 + uVar2 * 4);
    local_50 = local_4c;
    if (local_4c != (undefined *)0x0) {
      local_50 = *(undefined **)(local_4c + -4);
    }
    if ((int)local_50 < 1) {
      *in_FS_OFFSET = local_3c._4_4_;
    }
    else {
      local_3c = (double)CONCAT44(local_3c._4_4_,L"BLOCK DATA\r\nDay=");
      iVar3 = (uStack_c >> 0x10) - *(int *)(*(int *)PTR_DAT_00ba9b10 + 5);
      if (SBORROW4(uStack_c >> 0x10,*(int *)(*(int *)PTR_DAT_00ba9b10 + 5))) {
        uStack_40 = 0x7d0df9;
        iVar3 = thunk_FUN_004072dc();
      }
      iVar4 = iVar3 + 1;
      if (SCARRY4(iVar3,1)) {
        uStack_40 = 0x7d0e03;
        iVar4 = thunk_FUN_004072dc(iVar4);
      }
      uStack_40 = 0x7d0e0b;
      FUN_004282b0(iVar4,(int)&local_5c + 4);
      uStack_40 = local_5c._4_4_;
      local_44 = L"\r\n";
      local_48 = L"Date=";
      local_4c = (undefined *)0x7d0e24;
      FUN_007b87b4(CONCAT22(extraout_var,uStack_c._2_2_),&local_5c);
      local_4c = (undefined *)local_5c;
      local_50 = &DAT_007d1254;
      local_54 = L"Block=[";
      uVar2 = (uStack_c >> 0x10) - 1;
      if (SBORROW4(uStack_c >> 0x10,1)) {
        local_5c = (double)CONCAT44(0x7d0e3f,(undefined *)local_5c);
        uVar2 = thunk_FUN_004072dc();
      }
      iVar3 = *(int *)(*(int *)PTR_DAT_00ba9b10 + 9);
      if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar2)) {
        local_5c = (double)CONCAT44(0x7d0e58,(undefined *)local_5c);
        uVar2 = thunk_FUN_004072dc();
        iVar3 = extraout_EDX_00;
      }
      iVar3 = *(int *)(iVar3 + uVar2 * 4);
      uVar5 = uStack_c >> 8 & 0xff;
      uVar2 = uVar5 - 1;
      if (SBORROW4(uVar5,1)) {
        local_5c = (double)CONCAT44(0x7d0e6a,(undefined *)local_5c);
        iVar3 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX_01;
      }
      if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar2)) {
        local_5c = (double)CONCAT44(0x7d0e78,(undefined *)local_5c);
        iVar3 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX_02;
      }
      local_5c = (double)CONCAT44(*(undefined4 *)(iVar3 + 4 + uVar2 * 0x12),
                                  *(undefined4 *)(iVar3 + uVar2 * 0x12));
      local_64 = (double)CONCAT44(0x7d0e87,(undefined4)local_64);
      FUN_007b8be0();
      local_5c = (double)in_ST0;
      local_64._4_4_ = 0x7d0e96;
      FUN_00b1c35c((int)&local_64 + 4);
      local_5c = (double)CONCAT44(local_64._4_4_,&DAT_007d129c);
      uVar2 = (uStack_c >> 0x10) - 1;
      if (SBORROW4(uStack_c >> 0x10,1)) {
        local_64._4_4_ = 0x7d0eac;
        uVar2 = thunk_FUN_004072dc();
      }
      iVar3 = *(int *)(*(int *)PTR_DAT_00ba9b10 + 9);
      if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar2)) {
        local_64._4_4_ = 0x7d0ec5;
        uVar2 = thunk_FUN_004072dc();
        iVar3 = extraout_EDX_03;
      }
      iVar3 = *(int *)(iVar3 + uVar2 * 4);
      uVar5 = uStack_c >> 8 & 0xff;
      uVar2 = uVar5 - 1;
      if (SBORROW4(uVar5,1)) {
        local_64._4_4_ = 0x7d0ed7;
        iVar3 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX_04;
      }
      if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar2)) {
        local_64 = (double)CONCAT44(0x7d0ee5,(undefined4)local_64);
        iVar3 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX_05;
      }
      local_64 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0xc + uVar2 * 0x12),
                                  *(undefined4 *)(iVar3 + 8 + uVar2 * 0x12));
      local_68 = (undefined *)0x7d0ef5;
      FUN_007b8be0();
      local_64 = (double)in_ST1;
      local_68 = (undefined *)0x7d0f04;
      FUN_00b1c35c(&local_64);
      local_64 = (double)CONCAT44(SUB84(local_64,0),&DAT_007d12b0);
      local_68 = &DAT_007d1254;
      local_6c = L"Length=";
      uVar2 = (uStack_c >> 0x10) - 1;
      if (SBORROW4(uStack_c >> 0x10,1)) {
        local_74 = (double)CONCAT44(0x7d0f24,(undefined4)local_74);
        uVar2 = thunk_FUN_004072dc();
      }
      iVar3 = *(int *)(*(int *)PTR_DAT_00ba9b10 + 9);
      if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar2)) {
        local_74 = (double)CONCAT44(0x7d0f3d,(undefined4)local_74);
        uVar2 = thunk_FUN_004072dc();
        iVar3 = extraout_EDX_06;
      }
      local_74 = (double)CONCAT44(0x7d0f48,(undefined4)local_74);
      FUN_007b9844(*(undefined4 *)(iVar3 + uVar2 * 4),uStack_c >> 8 & 0xff);
      local_74 = (double)in_ST2;
      local_78 = (undefined1 **)0x7d0f57;
      FUN_00b1c35c(&local_68);
      local_74 = (double)CONCAT44(local_68,&DAT_007d1254);
      local_78 = (undefined1 **)0x7d0f6c;
      FUN_0040d87c(param_4,0xf);
      local_78 = &local_24;
      local_7c = (undefined4 *)0x7d0f7f;
      FUN_007d8594(local_8,CONCAT22(extraout_var_00,uStack_c._2_2_),&local_14);
      local_7c = &local_2c;
      uVar2 = (uStack_c >> 0x10) + 1;
      if (SCARRY4(uStack_c >> 0x10,1)) {
        local_80 = 0x7d0f94;
        thunk_FUN_004072dc(local_7c,uVar2,&stack0xffffffe4);
        uVar2 = extraout_EDX_07;
      }
      if (0xffff < uVar2) {
        local_80 = 0x7d0fa1;
        thunk_FUN_004072dc();
      }
      local_80 = 0x7d0fa9;
      FUN_007d8594(local_8);
      if ((((0.0 <= (double)CONCAT44(uStack_10,local_14)) &&
           (0.0 <= (double)CONCAT44(unaff_EBX,unaff_ESI))) &&
          (0.0 <= (double)CONCAT44(unaff_EDI,local_24))) &&
         (0.0 <= (double)CONCAT44(puStack_28,local_2c))) {
        if (*(char *)(local_8 + 0x5fa) != '\0') {
          local_80 = *param_4;
          local_84 = &DAT_007d1254;
          pwStack_88 = L"OPTIMUM HOURS";
          local_8c = &DAT_007d1254;
          FUN_00b1c35c(&local_6c);
          FUN_00b1c35c((int)&local_74 + 4);
          in_stack_ffffff5c = &DAT_007d1254;
          FUN_00b1c35c(&local_74);
          uStackY_ac = (undefined4)local_74;
          FUN_00b1c35c(&local_78);
          puStackY_b8 = &DAT_007d12b0;
          FUN_0040d87c(param_4,0xf);
        }
        FUN_007d2a90(&local_14,&local_24);
        local_34 = (double)CONCAT44(unaff_EDI,local_24) - (double)CONCAT44(uStack_10,local_14);
        FUN_007d2a90(&stack0xffffffe4,&local_2c);
        local_3c = (double)CONCAT44(puStack_28,local_2c) - (double)CONCAT44(unaff_EBX,unaff_ESI);
        if (*(char *)(local_8 + 0x5fa) != '\0') {
          FUN_00b1c35c(&local_7c);
          FUN_0040d87c(param_4,4);
        }
        if (_DAT_007d1360 < ABS((float10)local_3c - (float10)local_34)) {
          FUN_00b1c35c(&local_80);
          FUN_0040d87c(param_4,3);
        }
        local_54 = DAT_00ca1a78;
        if (DAT_00ca1a78 != (wchar_t *)0x0) {
          local_54 = *(wchar_t **)(DAT_00ca1a78 + -2);
        }
        if ((int)(uint)uStack_c._2_2_ <= (int)local_54) {
          uVar2 = uStack_c._2_2_ - 1;
          if (SBORROW4((uint)uStack_c._2_2_,1)) {
            uVar2 = thunk_FUN_004072dc();
          }
          if ((DAT_00ca1a78 == (wchar_t *)0x0) || (*(uint *)(DAT_00ca1a78 + -2) <= uVar2)) {
            thunk_FUN_004072dc();
          }
          FUN_00b1c35c(&local_84);
          FUN_0040d87c(param_4,4);
        }
      }
      *in_FS_OFFSET = puStackY_b8;
    }
  }
  *in_FS_OFFSET = uStackY_ac;
  FUN_0040c628(&local_8c,0xe,in_stack_ffffff5c,&LAB_007d120f);
  return;
}



// === FUN_007e0678 @ 007e0678 size:2539 ===

void FUN_007e0678(int param_1)

{
  int iVar1;
  
  if (DAT_00ca25fc == '\x01') {
    iVar1 = *(int *)(param_1 + 0x430);
    FUN_0054a01c(param_1,L"Stability increase function");
    *(undefined4 *)(iVar1 + 0x9a) = 0xb851eb85;
    *(undefined4 *)(iVar1 + 0x9e) = 0x3fdb851e;
    *(undefined4 *)(iVar1 + 0xa2) = 0x51eb851f;
    *(undefined4 *)(iVar1 + 0xa6) = 0x3fd51eb8;
    *(undefined4 *)(iVar1 + 0xaa) = 0;
    *(undefined4 *)(iVar1 + 0xae) = 0;
    *(undefined4 *)(iVar1 + 0x62) = 0;
    *(undefined4 *)(iVar1 + 0x3e) = *(undefined4 *)(param_1 + 0x3d4);
    FUN_0040c9a8(iVar1 + 0x1a,L"Retrievability [%]");
    FUN_0040c9a8(iVar1 + 0x22,L"Stability [days]");
    FUN_0040c9a8(iVar1 + 0x1e,L"Stability increase (quotient)");
    *(undefined1 *)(iVar1 + 0x98) = 0;
    *(undefined1 *)(iVar1 + 0x18) = 0;
    FUN_0040c9a8(iVar1 + 0x26,L"Difficulty");
    *(undefined1 *)(iVar1 + 0x19) = 1;
    *(undefined4 *)(iVar1 + 0x2e) = 0x14;
    *(undefined4 *)(iVar1 + 0x32) = 0x14;
    *(undefined4 *)(iVar1 + 0x2a) = 0x14;
    FUN_007e3fa4(iVar1);
    FUN_007e20ec(param_1);
    FUN_007e6424(param_1,L"Stability");
  }
  if (DAT_00ca25fc == '\x02') {
    iVar1 = *(int *)(param_1 + 0x430);
    FUN_0054a01c(param_1,L"Approximation of stability increase");
    *(undefined4 *)(iVar1 + 0x9a) = 0xb851eb85;
    *(undefined4 *)(iVar1 + 0x9e) = 0x3fdb851e;
    *(undefined4 *)(iVar1 + 0xa2) = 0x51eb851f;
    *(undefined4 *)(iVar1 + 0xa6) = 0x3fd51eb8;
    *(undefined4 *)(iVar1 + 0xaa) = 0;
    *(undefined4 *)(iVar1 + 0xae) = 0;
    *(undefined4 *)(iVar1 + 0x36) = 10;
    *(undefined4 *)(iVar1 + 0x62) = 0;
    *(undefined4 *)(iVar1 + 0x3e) = *(undefined4 *)(param_1 + 0x3d4);
    FUN_0040c9a8(iVar1 + 0x1a,L"Retrievability");
    FUN_0040c9a8(iVar1 + 0x22,L"Stability");
    FUN_0040c9a8(iVar1 + 0x1e,L"SInc (fraction)");
    FUN_0040c9a8(iVar1 + 0x26,L"Difficulty");
    *(undefined1 *)(iVar1 + 0x98) = 0;
    *(undefined1 *)(iVar1 + 0x19) = 1;
    *(undefined4 *)(iVar1 + 0x2e) = 0x14;
    *(undefined4 *)(iVar1 + 0x32) = 0x14;
    *(undefined4 *)(iVar1 + 0x2a) = 0x14;
    *(undefined1 *)(iVar1 + 0x18) = 1;
    FUN_007e3fa4(iVar1);
    FUN_007e20ec(param_1);
    FUN_007e6424(param_1,L"Approximate");
  }
  if (DAT_00ca25fc == '\x04') {
    iVar1 = *(int *)(param_1 + 0x430);
    FUN_0054a01c(param_1,L"Approximation of recall");
    *(undefined4 *)(iVar1 + 0x9a) = 0xae147ae1;
    *(undefined4 *)(iVar1 + 0x9e) = 0x3fe2e147;
    *(undefined4 *)(iVar1 + 0xa2) = 0xa3d70a4;
    *(undefined4 *)(iVar1 + 0xa6) = 0x3fe0a3d7;
    *(undefined4 *)(iVar1 + 0xaa) = 0;
    *(undefined4 *)(iVar1 + 0xae) = 0;
    *(undefined4 *)(iVar1 + 0x36) = 6;
    *(undefined4 *)(iVar1 + 0x62) = 1;
    *(undefined4 *)(iVar1 + 0x3e) = *(undefined4 *)(param_1 + 0x3d4);
    FUN_0040c9a8(iVar1 + 0x1a,L"Retrievability");
    FUN_0040c9a8(iVar1 + 0x22,L"Stability");
    FUN_0040c9a8(iVar1 + 0x1e,L"Recall [%]");
    FUN_0040c9a8(iVar1 + 0x26,L"Difficulty");
    *(undefined1 *)(iVar1 + 0x98) = 0;
    *(undefined1 *)(iVar1 + 0x19) = 1;
    *(undefined4 *)(iVar1 + 0x2e) = 0x14;
    *(undefined4 *)(iVar1 + 0x32) = 0x14;
    *(undefined4 *)(iVar1 + 0x2a) = 0x14;
    *(undefined1 *)(iVar1 + 0x18) = 1;
    FUN_007e3fa4(iVar1);
    FUN_007e44e4(param_1);
    FUN_007e6424(param_1,L"Recall Approx");
  }
  if (DAT_00ca25fc == '\x03') {
    iVar1 = *(int *)(param_1 + 0x430);
    FUN_0054a01c(param_1,L"Recall");
    *(undefined4 *)(iVar1 + 0x9a) = 0xae147ae1;
    *(undefined4 *)(iVar1 + 0x9e) = 0x3fe2e147;
    *(undefined4 *)(iVar1 + 0xa2) = 0xa3d70a4;
    *(undefined4 *)(iVar1 + 0xa6) = 0x3fe0a3d7;
    *(undefined4 *)(iVar1 + 0xaa) = 0;
    *(undefined4 *)(iVar1 + 0xae) = 0;
    *(undefined4 *)(iVar1 + 0x36) = 6;
    *(undefined4 *)(iVar1 + 0x62) = 5;
    *(undefined4 *)(iVar1 + 0x3e) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined1 *)(iVar1 + 0x98) = 0;
    *(undefined1 *)(iVar1 + 0x18) = 0;
    FUN_0040c9a8(iVar1 + 0x1a,L"Retrievability");
    FUN_0040c9a8(iVar1 + 0x22,L"Stability");
    FUN_0040c9a8(iVar1 + 0x1e,L"Recall");
    FUN_0040c9a8(iVar1 + 0x26,L"Difficulty");
    *(undefined1 *)(iVar1 + 0x19) = 1;
    *(undefined4 *)(iVar1 + 0x2e) = 0x14;
    *(undefined4 *)(iVar1 + 0x32) = 0x14;
    *(undefined4 *)(iVar1 + 0x2a) = 0x14;
    FUN_007e3fa4(iVar1);
    FUN_007e44e4(param_1);
    FUN_007e6424(param_1,L"Recall");
  }
  if (DAT_00ca25fc == '\x05') {
    iVar1 = *(int *)(param_1 + 0x430);
    FUN_0054a01c(param_1,L"Post lapse stability");
    *(undefined4 *)(iVar1 + 0x9a) = 0xae147ae1;
    *(undefined4 *)(iVar1 + 0x9e) = 0x3fe2e147;
    *(undefined4 *)(iVar1 + 0xa2) = 0xa3d70a4;
    *(undefined4 *)(iVar1 + 0xa6) = 0x3fe0a3d7;
    *(undefined4 *)(iVar1 + 0xaa) = 0;
    *(undefined4 *)(iVar1 + 0xae) = 0;
    *(undefined4 *)(iVar1 + 0x36) = 1;
    *(undefined4 *)(iVar1 + 0x62) = 1;
    *(undefined4 *)(iVar1 + 0x3e) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined1 *)(iVar1 + 0x98) = 0;
    *(undefined1 *)(iVar1 + 0x18) = 0;
    FUN_0040c9a8(iVar1 + 0x1a,L"Retrievability");
    FUN_0040c9a8(iVar1 + 0x22,L"Lapses");
    FUN_0040c9a8(iVar1 + 0x1e,L"Interval [days]");
    FUN_0040c9a8(iVar1 + 0x26,&DAT_007e1398);
    *(undefined1 *)(iVar1 + 0x19) = 1;
    *(undefined4 *)(iVar1 + 0x2e) = 0x14;
    *(undefined4 *)(iVar1 + 0x32) = 0x14;
    *(undefined4 *)(iVar1 + 0x2a) = 1;
    FUN_007e3fa4(iVar1);
    FUN_007e0098(param_1);
    FUN_007e6424(param_1,L"First Interval");
  }
  if (DAT_00ca25fc == '\x06') {
    iVar1 = *(int *)(param_1 + 0x430);
    FUN_0054a01c(param_1,L"Post lapse stability approximation");
    *(undefined4 *)(iVar1 + 0x9a) = 0xae147ae1;
    *(undefined4 *)(iVar1 + 0x9e) = 0x3fe2e147;
    *(undefined4 *)(iVar1 + 0xa2) = 0xa3d70a4;
    *(undefined4 *)(iVar1 + 0xa6) = 0x3fe0a3d7;
    *(undefined4 *)(iVar1 + 0xaa) = 0;
    *(undefined4 *)(iVar1 + 0xae) = 0;
    *(undefined4 *)(iVar1 + 0x36) = 1;
    *(undefined4 *)(iVar1 + 0x62) = 1;
    *(undefined4 *)(iVar1 + 0x3e) = *(undefined4 *)(param_1 + 0x3d4);
    FUN_0040c9a8(iVar1 + 0x1a,L"Retrievability");
    FUN_0040c9a8(iVar1 + 0x22,L"Lapses");
    FUN_0040c9a8(iVar1 + 0x1e,L"Interval [days]");
    FUN_0040c9a8(iVar1 + 0x26,&DAT_007e1398);
    *(undefined1 *)(iVar1 + 0x98) = 0;
    *(undefined1 *)(iVar1 + 0x18) = 1;
    *(undefined1 *)(iVar1 + 0x19) = 1;
    *(undefined4 *)(iVar1 + 0x2e) = 0x14;
    *(undefined4 *)(iVar1 + 0x32) = 0x14;
    *(undefined4 *)(iVar1 + 0x2a) = 1;
    FUN_007e3fa4(iVar1);
    FUN_007e0098(param_1);
    FUN_007e6424(param_1,L"Int. Approx");
  }
  if (DAT_00ca25fc == '\a') {
    iVar1 = *(int *)(param_1 + 0x430);
    FUN_0054a01c(param_1,L"Recall vs. Alertness (C x H)");
    *(undefined4 *)(iVar1 + 0x9a) = 0xae147ae1;
    *(undefined4 *)(iVar1 + 0x9e) = 0x3fe2e147;
    *(undefined4 *)(iVar1 + 0xa2) = 0xa3d70a4;
    *(undefined4 *)(iVar1 + 0xa6) = 0x3fe0a3d7;
    *(undefined4 *)(iVar1 + 0xaa) = 0;
    *(undefined4 *)(iVar1 + 0xae) = 0;
    *(undefined4 *)(iVar1 + 0x36) = 1;
    *(undefined4 *)(iVar1 + 0x62) = 1;
    *(undefined4 *)(iVar1 + 0x3e) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined1 *)(iVar1 + 0x98) = 0;
    *(undefined1 *)(iVar1 + 0x18) = 0;
    FUN_0040c9a8(iVar1 + 0x1a,L"Homeostatic");
    FUN_0040c9a8(iVar1 + 0x22,L"Circadian");
    FUN_0040c9a8(iVar1 + 0x1e,L"Recall [%]");
    FUN_0040c9a8(iVar1 + 0x26,&DAT_007e1398);
    *(undefined1 *)(iVar1 + 0x19) = 1;
    *(undefined4 *)(iVar1 + 0x2e) = 0x18;
    *(undefined4 *)(iVar1 + 0x32) = 0x18;
    *(undefined4 *)(iVar1 + 0x2a) = 1;
    FUN_007e3fa4(iVar1);
    FUN_007e3840(param_1);
    FUN_007e6424(param_1,L"Sleep");
  }
  if (DAT_00ca25fc == '\b') {
    iVar1 = *(int *)(param_1 + 0x430);
    FUN_0054a01c(param_1,L"Forgetting curves");
    *(undefined4 *)(iVar1 + 0x9a) = 0xae147ae1;
    *(undefined4 *)(iVar1 + 0x9e) = 0x3fe2e147;
    *(undefined4 *)(iVar1 + 0xa2) = 0xa3d70a4;
    *(undefined4 *)(iVar1 + 0xa6) = 0x3fe0a3d7;
    *(undefined4 *)(iVar1 + 0xaa) = 0;
    *(undefined4 *)(iVar1 + 0xae) = 0;
    *(undefined4 *)(iVar1 + 0x36) = 0x13;
    *(undefined4 *)(iVar1 + 0x62) = 1;
    *(undefined4 *)(iVar1 + 0x3e) = *(undefined4 *)(param_1 + 0x3d4);
    FUN_0040c9a8(iVar1 + 0x1a,L"Time (UF=[1..20])");
    FUN_0040c9a8(iVar1 + 0x22,L"Repetition [1..20]");
    FUN_0040c9a8(iVar1 + 0x1e,L"Retention");
    FUN_0040c9a8(iVar1 + 0x26,L"AFActor");
    *(undefined1 *)(iVar1 + 0x98) = 0;
    *(undefined1 *)(iVar1 + 0x18) = 0;
    *(undefined1 *)(iVar1 + 0x19) = 1;
    *(undefined4 *)(iVar1 + 0x2e) = 0x14;
    *(undefined4 *)(iVar1 + 0x32) = 0x14;
    *(undefined4 *)(iVar1 + 0x2a) = 0x14;
    FUN_007e3fa4(iVar1);
    FUN_007e3c90(param_1);
    FUN_007e6424(param_1,L"Forgetting");
  }
  if (DAT_00ca25fc == '\t') {
    iVar1 = *(int *)(param_1 + 0x430);
    FUN_0054a01c(param_1,L"RF Matrix");
    *(undefined4 *)(iVar1 + 0x9a) = 0xae147ae1;
    *(undefined4 *)(iVar1 + 0x9e) = 0x3fe2e147;
    *(undefined4 *)(iVar1 + 0xa2) = 0xa3d70a4;
    *(undefined4 *)(iVar1 + 0xa6) = 0x3fe0a3d7;
    *(undefined4 *)(iVar1 + 0xaa) = 0;
    *(undefined4 *)(iVar1 + 0xae) = 0;
    *(undefined4 *)(iVar1 + 0x36) = 1;
    *(undefined4 *)(iVar1 + 0x62) = 0;
    *(undefined4 *)(iVar1 + 0x3e) = *(undefined4 *)(param_1 + 0x3d4);
    FUN_0040c9a8(iVar1 + 0x1a,L"A-Factor [1..20]");
    FUN_0040c9a8(iVar1 + 0x22,L"Repetition [1..20]");
    FUN_0040c9a8(iVar1 + 0x1e,L"R-Factor");
    FUN_0040c5c8(iVar1 + 0x26);
    *(undefined1 *)(iVar1 + 0x98) = 0;
    *(undefined1 *)(iVar1 + 0x18) = 0;
    *(undefined1 *)(iVar1 + 0x19) = 1;
    *(undefined4 *)(iVar1 + 0x2e) = 0x14;
    *(undefined4 *)(iVar1 + 0x32) = 0x14;
    *(undefined4 *)(iVar1 + 0x2a) = 1;
    FUN_007e3fa4(iVar1);
    FUN_007e62a8(param_1);
    FUN_007e6424(param_1,L"RF Matrix");
  }
  return;
}



// === FUN_007e40d8 @ 007e40d8 size:306 ===

void FUN_007e40d8(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 *in_FS_OFFSET;
  unkbyte10 in_ST0;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined4 local_10;
  undefined1 local_9;
  undefined4 local_8;
  
  local_30 = 0;
  local_28 = 0;
  puStack_38 = (undefined1 *)0x7e40f8;
  local_10 = param_3;
  local_9 = param_2;
  local_8 = param_1;
  FUN_0040c6ac(param_3);
  puStack_3c = &LAB_007e4216;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_44 = (undefined1 *)0x7e4118;
  puStack_38 = &stack0xfffffffc;
  iVar2 = FUN_0040dbd4(L"Stability",local_10,1);
  if (iVar2 != 0) {
    puStack_48 = &LAB_007e4197;
    uStack_4c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_4c;
    puStack_44 = &stack0xfffffffc;
    local_2c = FUN_004097c0(local_8,&DAT_007e4250);
    FUN_0070fd68(local_9);
    uStack_1c = (undefined2)((unkuint10)in_ST0 >> 0x40);
    uStack_20 = (undefined4)((unkuint10)in_ST0 >> 0x20);
    local_24 = (undefined4)in_ST0;
    FUN_0042bc74(&DAT_007e4264,PTR_DAT_00baa920,&local_28,local_24,uStack_20,
                 CONCAT22(extraout_var,uStack_1c));
    uVar3 = FUN_004097c0(local_2c,local_28);
    FUN_004098c0(uVar3,CONCAT22(extraout_var_00,0x2c));
    FUN_00408164();
    puVar1 = puStack_44;
    *in_FS_OFFSET = uStack_4c;
    puStack_44 = &DAT_007e419e;
    puStack_48 = (undefined1 *)0x7e4196;
    FUN_0040c5c8(&local_28,uStack_4c,puVar1);
    return;
  }
  puStack_44 = (undefined1 *)0x7e41b5;
  iVar2 = FUN_0040dbd4(L"Lapses",local_10,1);
  if (iVar2 != 0) {
    puStack_44 = (undefined1 *)0x7e41c6;
    FUN_004282b0(local_9,&local_30);
    puStack_44 = (undefined1 *)local_30;
    puStack_48 = (undefined1 *)0x7e41d7;
    uVar3 = FUN_004097c0(local_8,&DAT_007e4294);
    puVar1 = puStack_44;
    puStack_44 = (undefined1 *)0x7e41dd;
    uVar3 = FUN_004097c0(uVar3,puVar1);
    puStack_44 = (undefined1 *)0x7e41e6;
    FUN_004098c0(uVar3,CONCAT22(extraout_var_01,0x2c));
    puStack_44 = (undefined1 *)0x7e41eb;
    FUN_00408164();
    puStack_44 = (undefined1 *)0x7e41f0;
    FUN_004072f4();
  }
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_007e421d;
  puStack_3c = (undefined1 *)0x7e4205;
  FUN_0040c5c8(&local_30,uStack_40,puVar1);
  puStack_3c = (undefined1 *)0x7e420d;
  FUN_0040c5c8(&local_28);
  puStack_3c = (undefined1 *)0x7e4215;
  FUN_0040c5c8(&local_10);
  return;
}



// === FUN_007e429c @ 007e429c size:253 ===

void FUN_007e429c(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  unkbyte10 in_ST0;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined1 local_d;
  undefined4 local_c;
  undefined4 local_8;
  
  local_30 = 0;
  local_28 = 0;
  puStack_34 = (undefined1 *)0x7e42b8;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040c6ac(param_2);
  puStack_38 = &LAB_007e4427;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x7e42d8;
  puStack_34 = &stack0xfffffffc;
  iVar2 = FUN_0040dbd4(L"Retrievability",local_c,1);
  puVar1 = puStack_34;
  if (iVar2 != 0) {
    puStack_40 = (undefined1 *)0x7e42ed;
    FUN_004097c0(local_8,&DAT_007e446c);
    puStack_40 = (undefined1 *)0x7e42f2;
    FUN_00408164();
    puStack_40 = (undefined1 *)0x7e42f7;
    FUN_004072f4();
    local_d = 1;
    puStack_44 = &LAB_007e4373;
    uStack_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_48;
    puStack_40 = &stack0xfffffffc;
    local_2c = FUN_004097c0(local_8,&DAT_007e4480);
    FUN_0070fd20(local_d);
    uStack_1c = (undefined2)((unkuint10)in_ST0 >> 0x40);
    uStack_20 = (undefined4)((unkuint10)in_ST0 >> 0x20);
    local_24 = (undefined4)in_ST0;
    FUN_0042bc74(L"0.##",PTR_DAT_00baa920,&local_28,local_24,uStack_20,
                 CONCAT22(extraout_var,uStack_1c));
    uVar3 = FUN_004097c0(local_2c,local_28);
    FUN_004097c0(uVar3,&DAT_007e44ac);
    FUN_00408164();
    puVar1 = puStack_40;
    *in_FS_OFFSET = uStack_48;
    puStack_40 = &DAT_007e437a;
    puStack_44 = (undefined1 *)0x7e4372;
    FUN_0040c5c8(&local_28,uStack_48,puVar1);
    return;
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_007e442e;
  puStack_38 = (undefined1 *)0x7e4416;
  FUN_0040c5c8(&local_30,uStack_3c,puVar1);
  puStack_38 = (undefined1 *)0x7e441e;
  FUN_0040c5c8(&local_28);
  puStack_38 = (undefined1 *)0x7e4426;
  FUN_0040c5c8(&local_c);
  return;
}



// === FUN_007e67cc @ 007e67cc size:287 ===

void FUN_007e67cc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x430);
  FUN_0054a01c(param_1,L"Stabilization at retrievability of 90%");
  *(undefined4 *)(iVar1 + 0x9a) = 0xb851eb85;
  *(undefined4 *)(iVar1 + 0x9e) = 0x3fdb851e;
  *(undefined4 *)(iVar1 + 0xa2) = 0x51eb851f;
  *(undefined4 *)(iVar1 + 0xa6) = 0x3fd51eb8;
  *(undefined4 *)(iVar1 + 0xaa) = 0;
  *(undefined4 *)(iVar1 + 0xae) = 0;
  *(undefined4 *)(iVar1 + 0x62) = 0;
  *(undefined4 *)(iVar1 + 0x3a) = 0;
  *(undefined4 *)(iVar1 + 0x3e) = *(undefined4 *)(param_1 + 0x3d4);
  FUN_0040c9a8(iVar1 + 0x1a,L"Difficulty");
  FUN_0040c9a8(iVar1 + 0x22,L"Stability [days]");
  FUN_0040c9a8(iVar1 + 0x1e,L"Stabilization at R=0.9");
  *(undefined1 *)(iVar1 + 0x98) = 0;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  FUN_0040c5c8(iVar1 + 0x26);
  *(undefined1 *)(iVar1 + 0x19) = 1;
  *(undefined4 *)(iVar1 + 0x2e) = 0x14;
  *(undefined4 *)(iVar1 + 0x32) = 0x14;
  *(undefined4 *)(iVar1 + 0x2a) = 0x14;
  FUN_007e3fa4(iVar1);
  FUN_007e7998(param_1);
  FUN_007e6424(param_1,L"Matrices");
  FUN_007e64f0(param_1,&DAT_007e6a04);
  return;
}



// === FUN_007e6c28 @ 007e6c28 size:287 ===

void FUN_007e6c28(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x430);
  FUN_0054a01c(param_1,L"Optimum stabilization");
  *(undefined4 *)(iVar1 + 0x9a) = 0xb851eb85;
  *(undefined4 *)(iVar1 + 0x9e) = 0x3fdb851e;
  *(undefined4 *)(iVar1 + 0xa2) = 0x51eb851f;
  *(undefined4 *)(iVar1 + 0xa6) = 0x3fd51eb8;
  *(undefined4 *)(iVar1 + 0xaa) = 0;
  *(undefined4 *)(iVar1 + 0xae) = 0;
  *(undefined4 *)(iVar1 + 0x62) = 0;
  *(undefined4 *)(iVar1 + 0x3a) = 0;
  *(undefined4 *)(iVar1 + 0x3e) = *(undefined4 *)(param_1 + 0x3d4);
  FUN_0040c9a8(iVar1 + 0x1a,L"Difficulty");
  FUN_0040c9a8(iVar1 + 0x22,L"Stability [days]");
  FUN_0040c9a8(iVar1 + 0x1e,L"Stabilization");
  *(undefined1 *)(iVar1 + 0x98) = 0;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  FUN_0040c5c8(iVar1 + 0x26);
  *(undefined1 *)(iVar1 + 0x19) = 1;
  *(undefined4 *)(iVar1 + 0x2e) = 0x14;
  *(undefined4 *)(iVar1 + 0x32) = 0x14;
  *(undefined4 *)(iVar1 + 0x2a) = 0x14;
  FUN_007e3fa4(iVar1);
  FUN_007e94c4(param_1);
  FUN_007e6424(param_1,L"Matrices");
  FUN_007e64f0(param_1,&DAT_007e6e28);
  return;
}



// === FUN_007e72a0 @ 007e72a0 size:289 ===

void FUN_007e72a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x430);
  FUN_0054a01c(param_1,L"Recall for retrievability of 90%");
  *(undefined4 *)(iVar1 + 0x9a) = 0xb851eb85;
  *(undefined4 *)(iVar1 + 0x9e) = 0x3fdb851e;
  *(undefined4 *)(iVar1 + 0xa2) = 0x51eb851f;
  *(undefined4 *)(iVar1 + 0xa6) = 0x3fd51eb8;
  *(undefined4 *)(iVar1 + 0xaa) = 0;
  *(undefined4 *)(iVar1 + 0xae) = 0;
  *(undefined4 *)(iVar1 + 0x62) = 0x2d;
  *(undefined4 *)(iVar1 + 0x3a) = 0;
  *(undefined4 *)(iVar1 + 0x3e) = *(undefined4 *)(param_1 + 0x3d4);
  FUN_0040c9a8(iVar1 + 0x1a,L"Difficulty");
  FUN_0040c9a8(iVar1 + 0x22,L"Stability [days]");
  FUN_0040c9a8(iVar1 + 0x1e,L"Recall at R=0.9");
  *(undefined1 *)(iVar1 + 0x98) = 0;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  FUN_0040c5c8(iVar1 + 0x26);
  *(undefined1 *)(iVar1 + 0x19) = 1;
  *(undefined4 *)(iVar1 + 0x2e) = 0x14;
  *(undefined4 *)(iVar1 + 0x32) = 0x14;
  *(undefined4 *)(iVar1 + 0x2a) = 0x14;
  FUN_007e3fa4(iVar1);
  FUN_007e84fc(param_1);
  FUN_007e6424(param_1,L"Matrices");
  FUN_007e64f0(param_1,L"Recall");
  return;
}



// === FUN_007e997c @ 007e997c size:289 ===

void FUN_007e997c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x430);
  FUN_0054a01c(param_1,L"O-Factor matrix");
  *(undefined4 *)(iVar1 + 0x9a) = 0xb851eb85;
  *(undefined4 *)(iVar1 + 0x9e) = 0x3fdb851e;
  *(undefined4 *)(iVar1 + 0xa2) = 0x51eb851f;
  *(undefined4 *)(iVar1 + 0xa6) = 0x3fd51eb8;
  *(undefined4 *)(iVar1 + 0xaa) = 0;
  *(undefined4 *)(iVar1 + 0xae) = 0;
  *(undefined4 *)(iVar1 + 0x62) = 0x2d;
  *(undefined4 *)(iVar1 + 0x3a) = 0;
  *(undefined4 *)(iVar1 + 0x3e) = *(undefined4 *)(param_1 + 0x3d4);
  FUN_0040c9a8(iVar1 + 0x1a,L"Difficulty [A-Factor]");
  FUN_0040c9a8(iVar1 + 0x22,L"Stability [Rep categ]");
  FUN_0040c9a8(iVar1 + 0x1e,L"O-Factor");
  *(undefined1 *)(iVar1 + 0x98) = 0;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  FUN_0040c5c8(iVar1 + 0x26);
  *(undefined1 *)(iVar1 + 0x19) = 1;
  *(undefined4 *)(iVar1 + 0x2e) = 0x14;
  *(undefined4 *)(iVar1 + 0x32) = 0x14;
  *(undefined4 *)(iVar1 + 0x2a) = 0x14;
  FUN_007e3fa4(iVar1);
  FUN_007e9b90(param_1);
  FUN_007e6424(param_1,L"Matrices");
  FUN_007e64f0(param_1,&DAT_007e9b88);
  return;
}



// === FUN_007edd6c @ 007edd6c size:527 ===

void FUN_007edd6c(int param_1)

{
  uint uVar1;
  longlong lVar2;
  float10 fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float10 in_ST0;
  float10 in_ST1;
  float10 fVar7;
  float10 in_ST2;
  float10 in_ST3;
  float10 fVar8;
  float10 in_ST4;
  float10 in_ST5;
  float10 fVar9;
  float10 in_ST6;
  float10 in_ST7;
  float10 fVar10;
  float10 fVar11;
  byte local_1d;
  undefined1 local_1c [8];
  undefined1 local_14 [12];
  int local_8;
  
  uVar1 = *(uint *)(param_1 + 0x4b4);
  *(undefined4 *)(uVar1 + 0x1918d) = *(undefined4 *)(param_1 + 0x3e4);
  local_8 = param_1;
  FUN_0040c9a8(uVar1 + 0xab45,L"A-Factor");
  FUN_0040c9a8(uVar1 + 0xab49,L"Grade");
  FUN_0040c5c8(uVar1 + 0xab4d);
  *(undefined1 *)(uVar1 + 0xab44) = 0;
  *(undefined2 *)(uVar1 + 0x19171) = 0x14;
  *(undefined4 *)(uVar1 + 0x19149) = 0;
  *(undefined4 *)(uVar1 + 0x1914d) = 0xa0000000;
  *(undefined2 *)(uVar1 + 0x19151) = 0x4001;
  *(undefined4 *)(uVar1 + 0x1913f) = 0;
  *(undefined4 *)(uVar1 + 0x19143) = 0;
  *(undefined2 *)(uVar1 + 0x19147) = 0;
  *(undefined4 *)(uVar1 + 0x1912b) = 0x9999999a;
  *(undefined4 *)(uVar1 + 0x1912f) = 0x99999999;
  *(undefined2 *)(uVar1 + 0x19133) = 0x3fff;
  *(undefined4 *)(uVar1 + 0x19135) = 0xcccccccd;
  *(undefined4 *)(uVar1 + 0x19139) = 0xdccccccc;
  *(undefined2 *)(uVar1 + 0x1913d) = 0x4001;
  *(undefined2 *)(uVar1 + 0x1917b) = 0xb;
  *(undefined2 *)(uVar1 + 0x1917d) = 0x14;
  *(undefined1 *)(uVar1 + 0x1916f) = 1;
  *(undefined1 *)(uVar1 + 0x19170) = 1;
  local_1d = 1;
  uVar4 = uVar1;
  uVar6 = 0;
  do {
    fVar9 = in_ST7;
    fVar8 = in_ST5;
    fVar7 = in_ST3;
    FUN_008b0620(CONCAT31((int3)(uVar4 >> 8),local_1d),CONCAT31((int3)(uVar6 >> 8),1));
    *(double *)(uVar1 + 0x14 + (uint)local_1d * 8) = (double)in_ST0;
    uVar4 = local_1d - 1;
    in_ST0 = in_ST2;
    fVar11 = in_ST4;
    fVar3 = in_ST6;
    fVar10 = fVar9;
    if (0x13 < uVar4) {
      uVar4 = thunk_FUN_004072dc();
      in_ST0 = in_ST2;
      fVar11 = in_ST4;
      fVar3 = in_ST6;
    }
    in_ST6 = fVar10;
    in_ST4 = fVar3;
    in_ST2 = fVar11;
    lVar2 = (longlong)(int)(uVar4 + 1) * 3;
    iVar5 = (int)lVar2;
    if (iVar5 != lVar2) {
      iVar5 = thunk_FUN_004072dc();
    }
    FUN_0040a340(*(int *)PTR_DAT_00baa39c + 0x4826 + iVar5 * 2);
    *(double *)(uVar1 + 0x3924 + (uint)local_1d * 8) = (double)in_ST1;
    uVar6 = local_1d - 1;
    if (0x13 < uVar6) {
      uVar6 = thunk_FUN_004072dc();
    }
    uVar4 = (uint)local_1d;
    *(double *)(uVar1 + 0x7234 + uVar4 * 8) =
         (double)*(ushort *)(*(int *)PTR_DAT_00baa39c + 0x48a2 + (uVar6 + 1) * 2);
    local_1d = local_1d + 1;
    uVar6 = uVar1;
    in_ST1 = fVar7;
    in_ST3 = fVar8;
    in_ST5 = fVar9;
    in_ST7 = in_ST6;
  } while (local_1d != 0x15);
  *(undefined1 *)(uVar1 + 0x19126) = 1;
  *(undefined1 *)(uVar1 + 0x19125) = 1;
  fVar11 = in_ST6;
  FUN_008b3604(local_14,local_1c);
  local_1d = 1;
  do {
    FUN_008b3874();
    *(double *)(uVar1 + 0xace5 + (uint)local_1d * 8) = (double)in_ST0;
    local_1d = local_1d + 1;
    in_ST0 = fVar7;
    fVar7 = in_ST2;
    in_ST2 = fVar8;
    fVar8 = in_ST4;
    in_ST4 = fVar9;
    fVar9 = in_ST6;
    in_ST6 = fVar11;
  } while (local_1d != 0x15);
  return;
}



// === FUN_007edfb4 @ 007edfb4 size:581 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007edfb4(int param_1)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  uint uVar5;
  uint uVar6;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar7;
  float10 fVar8;
  byte local_1d;
  undefined1 local_1c [8];
  undefined1 local_14 [12];
  int local_8;
  
  uVar1 = *(uint *)(param_1 + 0x4b4);
  *(undefined4 *)(uVar1 + 0x1918d) = *(undefined4 *)(param_1 + 0x3e4);
  local_8 = param_1;
  FUN_0040c9a8(uVar1 + 0xab45,L"A-Factor");
  FUN_0040c9a8(uVar1 + 0xab49,L"D-Factor");
  FUN_0040c5c8(uVar1 + 0xab4d);
  *(undefined1 *)(uVar1 + 0xab44) = 0;
  *(undefined2 *)(uVar1 + 0x19171) = 0x14;
  *(undefined4 *)(uVar1 + 0x19149) = 0;
  *(undefined4 *)(uVar1 + 0x1914d) = 0xc0000000;
  *(undefined2 *)(uVar1 + 0x19151) = 0x4000;
  *(undefined4 *)(uVar1 + 0x1913f) = 0;
  *(undefined4 *)(uVar1 + 0x19143) = 0;
  *(undefined2 *)(uVar1 + 0x19147) = 0;
  *(undefined4 *)(uVar1 + 0x1912b) = 0x9999999a;
  *(undefined4 *)(uVar1 + 0x1912f) = 0x99999999;
  *(undefined2 *)(uVar1 + 0x19133) = 0x3fff;
  *(undefined4 *)(uVar1 + 0x19135) = 0xcccccccd;
  *(undefined4 *)(uVar1 + 0x19139) = 0xdccccccc;
  *(undefined2 *)(uVar1 + 0x1913d) = 0x4001;
  *(undefined2 *)(uVar1 + 0x1917b) = 0x10;
  *(undefined2 *)(uVar1 + 0x1917d) = 0x14;
  *(undefined1 *)(uVar1 + 0x1916f) = 1;
  *(undefined1 *)(uVar1 + 0x19170) = 1;
  *(undefined4 *)(uVar1 + 0x1c) = 0x33333333;
  *(undefined4 *)(uVar1 + 0x20) = 0x3ff33333;
  *(undefined8 *)(uVar1 + 0x392c) = 0x3ff0000000000000;
  *(undefined8 *)(uVar1 + 0x723c) = 0x3ff0000000000000;
  local_1d = 2;
  uVar5 = uVar1;
  uVar6 = 0;
  do {
    fVar7 = in_ST6;
    FUN_008b0620(CONCAT31((int3)(uVar5 >> 8),local_1d),CONCAT31((int3)(uVar6 >> 8),1));
    *(double *)(uVar1 + 0x14 + (uint)local_1d * 8) = (double)in_ST0;
    uVar5 = local_1d - 2;
    in_ST0 = in_ST1;
    fVar8 = in_ST2;
    fVar2 = in_ST3;
    fVar3 = in_ST4;
    fVar4 = in_ST5;
    if (0x12 < uVar5) {
      uVar5 = thunk_FUN_004072dc();
      in_ST0 = in_ST1;
      fVar8 = in_ST2;
      fVar2 = in_ST3;
      fVar3 = in_ST4;
      fVar4 = in_ST5;
    }
    in_ST5 = in_ST6;
    in_ST4 = fVar4;
    in_ST3 = fVar3;
    in_ST2 = fVar2;
    in_ST1 = fVar8;
    *(double *)(uVar1 + 0x3924 + (uint)local_1d * 8) =
         (double)((float)*(ushort *)(*(int *)PTR_DAT_00baa39c + 0x95c + (uVar5 + 2) * 2) /
                 _DAT_007ee23c);
    uVar6 = local_1d - 2;
    if (0x12 < uVar6) {
      uVar6 = thunk_FUN_004072dc();
    }
    uVar5 = (uint)local_1d;
    *(double *)(uVar1 + 0x7234 + uVar5 * 8) =
         (double)*(ushort *)(*(int *)PTR_DAT_00baa39c + 0x982 + (uVar6 + 2) * 2);
    local_1d = local_1d + 1;
    uVar6 = uVar1;
    in_ST6 = fVar7;
  } while (local_1d != 0x15);
  *(undefined1 *)(uVar1 + 0x19126) = 1;
  *(undefined1 *)(uVar1 + 0x19125) = 1;
  fVar8 = fVar7;
  FUN_008b3990(*(undefined4 *)PTR_DAT_00baa39c,local_14,local_1c);
  local_1d = 1;
  do {
    FUN_008ae4bc();
    *(double *)(uVar1 + 0xace5 + (uint)local_1d * 8) = (double)in_ST0;
    local_1d = local_1d + 1;
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = fVar7;
    fVar7 = fVar8;
  } while (local_1d != 0x15);
  return;
}



// === FUN_007ee398 @ 007ee398 size:677 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ee398(int param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar5;
  byte local_25;
  undefined1 local_1c [8];
  undefined1 local_14 [12];
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x4b4);
  *(undefined4 *)(iVar1 + 0x1918d) = *(undefined4 *)(param_1 + 0x3e4);
  local_8 = param_1;
  FUN_0040c9a8(iVar1 + 0xab45,L"Lapses");
  FUN_0040c9a8(iVar1 + 0xab49,L"Interval");
  FUN_0040c5c8(iVar1 + 0xab4d);
  *(undefined1 *)(iVar1 + 0xab44) = 0;
  *(undefined2 *)(iVar1 + 0x19171) = 0x14;
  *(undefined4 *)(iVar1 + 0x19149) = 0;
  *(undefined4 *)(iVar1 + 0x1914d) = 0xa0000000;
  *(undefined2 *)(iVar1 + 0x19151) = 0x4003;
  *(undefined4 *)(iVar1 + 0x1913f) = 0;
  *(undefined4 *)(iVar1 + 0x19143) = 0;
  *(undefined2 *)(iVar1 + 0x19147) = 0;
  *(undefined4 *)(iVar1 + 0x1912b) = 0;
  *(undefined4 *)(iVar1 + 0x1912f) = 0;
  *(undefined2 *)(iVar1 + 0x19133) = 0;
  *(undefined4 *)(iVar1 + 0x19135) = 0;
  *(undefined4 *)(iVar1 + 0x19139) = 0x98000000;
  *(undefined2 *)(iVar1 + 0x1913d) = 0x4003;
  *(undefined2 *)(iVar1 + 0x1917b) = 0xb;
  *(undefined2 *)(iVar1 + 0x1917d) = 0x14;
  *(undefined1 *)(iVar1 + 0x1916f) = 0;
  *(undefined1 *)(iVar1 + 0x19170) = 0;
  local_25 = 1;
  do {
    iVar3 = local_25 - 1;
    if (SBORROW4((uint)local_25,1)) {
      iVar3 = thunk_FUN_004072dc();
    }
    *(double *)(iVar1 + 0x14 + (uint)local_25 * 8) = (double)iVar3;
    uVar4 = local_25 - 1;
    if (0x13 < uVar4) {
      uVar4 = thunk_FUN_004072dc();
    }
    lVar2 = (longlong)(int)(uVar4 + 1) * 5;
    iVar3 = (int)lVar2;
    if (iVar3 != lVar2) {
      iVar3 = thunk_FUN_004072dc();
    }
    *(double *)(iVar1 + 0x3924 + (uint)local_25 * 8) =
         (double)((float)*(ushort *)(*(int *)PTR_DAT_00baa39c + 0x2f8 + iVar3 * 8) / _DAT_007ee67c);
    uVar4 = local_25 - 1;
    if (0x13 < uVar4) {
      uVar4 = thunk_FUN_004072dc();
    }
    lVar2 = (longlong)(int)(uVar4 + 1) * 5;
    iVar3 = (int)lVar2;
    if (iVar3 != lVar2) {
      iVar3 = thunk_FUN_004072dc();
    }
    uVar4 = (uint)*(ushort *)(*(int *)PTR_DAT_00baa39c + 0x618 + iVar3 * 8);
    iVar3 = uVar4 + 1;
    if (SCARRY4(uVar4,1)) {
      iVar3 = thunk_FUN_004072dc();
    }
    *(double *)(iVar1 + 0x7234 + (uint)local_25 * 8) = (double)iVar3;
    local_25 = local_25 + 1;
  } while (local_25 != 0x15);
  *(undefined1 *)(iVar1 + 0x19126) = 1;
  *(undefined1 *)(iVar1 + 0x19125) = 1;
  FUN_008af988(*(undefined4 *)PTR_DAT_00baa39c,local_14,local_1c);
  local_25 = 1;
  do {
    fVar5 = in_ST6;
    FUN_00b18dac();
    *(double *)(iVar1 + 0xace5 + (uint)local_25 * 8) = (double)in_ST0;
    if (*(float10 *)(iVar1 + 0x19149) < (float10)*(double *)(iVar1 + 0xace5 + (uint)local_25 * 8)) {
      *(double *)(iVar1 + 0xace5 + (uint)local_25 * 8) = (double)*(float10 *)(iVar1 + 0x19149);
    }
    if ((float10)*(double *)(iVar1 + 0xace5 + (uint)local_25 * 8) < *(float10 *)(iVar1 + 0x1913f)) {
      *(double *)(iVar1 + 0xace5 + (uint)local_25 * 8) = (double)*(float10 *)(iVar1 + 0x1913f);
    }
    local_25 = local_25 + 1;
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = fVar5;
  } while (local_25 != 0x15);
  return;
}



// === FUN_007ef910 @ 007ef910 size:775 ===

void FUN_007ef910(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint extraout_EDX;
  float10 fVar5;
  uint local_68 [21];
  short local_12;
  int local_10;
  ushort local_a;
  int local_8;
  
  local_a = 1;
  local_8 = param_1;
  do {
    cVar1 = *PTR_DAT_00baa820;
    if (cVar1 == '\0') {
      uVar4 = local_a - 1;
      if (0x13 < uVar4) {
        uVar4 = thunk_FUN_004072dc();
      }
      uVar2 = (uint)*(ushort *)(*(int *)PTR_DAT_00ba9c04 + 0x13a + (uVar4 + 1) * 2);
      uVar4 = local_a - 1;
      if (0x13 < uVar4) {
        uVar2 = thunk_FUN_004072dc();
        uVar4 = extraout_EDX;
      }
      uVar4 = (uint)*(ushort *)(*(int *)PTR_DAT_00ba9c04 + 0x364 + (uVar4 + 1) * 2);
      iVar3 = uVar2 + uVar4;
      if (SCARRY4(uVar2,uVar4)) {
        iVar3 = thunk_FUN_004072dc();
      }
      *(int *)PTR_DAT_00ba9d40 = iVar3;
    }
    else if (cVar1 == '\x01') {
      uVar4 = local_a - 1;
      if (0x13 < uVar4) {
        uVar4 = thunk_FUN_004072dc();
      }
      *(uint *)PTR_DAT_00ba9d40 =
           (uint)*(ushort *)(*(int *)PTR_DAT_00ba9c04 + 0x13a + (uVar4 + 1) * 2);
    }
    else if (cVar1 == '\x02') {
      uVar4 = local_a - 1;
      if (0x13 < uVar4) {
        uVar4 = thunk_FUN_004072dc();
      }
      *(uint *)PTR_DAT_00ba9d40 =
           (uint)*(ushort *)(*(int *)PTR_DAT_00ba9c04 + 0x364 + (uVar4 + 1) * 2);
    }
    uVar4 = local_a - 1;
    if (0x13 < uVar4) {
      uVar4 = thunk_FUN_004072dc();
    }
    local_68[uVar4 + 1] = *(uint *)PTR_DAT_00ba9d40;
    local_a = local_a + 1;
  } while (local_a != 0x15);
  local_10 = *(int *)(local_8 + 0x4b4);
  *(undefined4 *)(local_10 + 0x1918d) = *(undefined4 *)(local_8 + 0x410);
  FUN_0040c9a8(local_10 + 0xab45,L"Repetitions");
  FUN_0040c9a8(local_10 + 0xab49,L"No of elements");
  FUN_0040c5c8(local_10 + 0xab4d);
  *(undefined1 *)(local_10 + 0xab44) = 0;
  *(undefined2 *)(local_10 + 0x19171) = 0x14;
  *(float10 *)(local_10 + 0x19149) = (float10)1;
  if (*(short *)(local_10 + 0x19171) != 0) {
    local_12 = *(short *)(local_10 + 0x19171);
    local_a = 1;
    do {
      uVar4 = local_a - 1;
      if (0x13 < uVar4) {
        uVar4 = thunk_FUN_004072dc();
      }
      if (*(float10 *)(local_10 + 0x19149) < (float10)(int)local_68[uVar4 + 1]) {
        uVar4 = local_a - 1;
        if (0x13 < uVar4) {
          uVar4 = thunk_FUN_004072dc();
        }
        *(float10 *)(local_10 + 0x19149) = (float10)(int)local_68[uVar4 + 1];
      }
      local_a = local_a + 1;
      local_12 = local_12 + -1;
    } while (local_12 != 0);
  }
  FUN_00801bb8(local_10,local_10 + 0x19149,local_10 + 0x1917b);
  *(undefined4 *)(local_10 + 0x1913f) = 0;
  *(undefined4 *)(local_10 + 0x19143) = 0;
  *(undefined2 *)(local_10 + 0x19147) = 0;
  *(float10 *)(local_10 + 0x1912b) = (float10)1;
  *(float10 *)(local_10 + 0x19135) = (float10)*(ushort *)(local_10 + 0x19171);
  *(undefined2 *)(local_10 + 0x1917d) = *(undefined2 *)(local_10 + 0x19171);
  *(undefined1 *)(local_10 + 0x1916f) = 0;
  *(undefined1 *)(local_10 + 0x19170) = 0;
  if (*(short *)(local_10 + 0x19171) != 0) {
    local_12 = *(short *)(local_10 + 0x19171);
    local_a = 1;
    do {
      local_68[0] = (uint)local_a;
      fVar5 = (float10)local_a;
      uVar4 = (uint)local_a;
      if (0x721 < uVar4) {
        uVar4 = thunk_FUN_004072dc();
      }
      *(double *)(local_10 + 0x14 + uVar4 * 8) = (double)fVar5;
      uVar4 = local_a - 1;
      if (0x13 < uVar4) {
        uVar4 = thunk_FUN_004072dc();
      }
      fVar5 = (float10)(int)local_68[uVar4 + 1];
      uVar4 = (uint)local_a;
      if (0x721 < uVar4) {
        uVar4 = thunk_FUN_004072dc();
      }
      *(double *)(local_10 + 0x3924 + uVar4 * 8) = (double)fVar5;
      uVar4 = (uint)local_a;
      if (0x721 < uVar4) {
        uVar4 = thunk_FUN_004072dc();
      }
      *(undefined4 *)(local_10 + 0x7234 + uVar4 * 8) = 0;
      *(undefined4 *)(local_10 + 0x7238 + uVar4 * 8) = 0x40100000;
      local_a = local_a + 1;
      local_12 = local_12 + -1;
    } while (local_12 != 0);
  }
  *(undefined1 *)(local_10 + 0x19126) = 0;
  *(undefined1 *)(local_10 + 0x19125) = 1;
  return;
}



// === FUN_007efc68 @ 007efc68 size:694 ===

void FUN_007efc68(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint extraout_EDX;
  float10 fVar4;
  short local_12;
  ushort local_a;
  
  iVar1 = *(int *)(param_1 + 0x4b4);
  *(undefined4 *)(iVar1 + 0x1918d) = *(undefined4 *)(param_1 + 0x410);
  FUN_0040c9a8(iVar1 + 0xab45,L"Memory lapses");
  FUN_0040c9a8(iVar1 + 0xab49,L"No of elements");
  FUN_0040c5c8(iVar1 + 0xab4d);
  *(undefined1 *)(iVar1 + 0xab44) = 0;
  *(undefined2 *)(iVar1 + 0x19171) = 0xf;
  *(float10 *)(iVar1 + 0x19149) = (float10)1;
  local_12 = *(short *)(iVar1 + 0x19171);
  if (local_12 != 0) {
    local_a = 1;
    do {
      iVar2 = local_a - 1;
      if (SBORROW4((uint)local_a,1)) {
        iVar2 = thunk_FUN_004072dc();
      }
      fVar4 = (float10)iVar2;
      uVar3 = (uint)local_a;
      if (0x721 < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      *(double *)(iVar1 + 0x14 + uVar3 * 8) = (double)fVar4;
      if ((byte)*PTR_DAT_00baa820 < 2) {
        uVar3 = local_a - 1;
        if (0xe < uVar3) {
          uVar3 = thunk_FUN_004072dc();
        }
        fVar4 = (float10)*(ushort *)(*(int *)PTR_DAT_00ba9c04 + 0x11c + (uVar3 + 1) * 2);
        uVar3 = (uint)local_a;
        if (0x721 < uVar3) {
          uVar3 = thunk_FUN_004072dc();
        }
        *(double *)(iVar1 + 0x3924 + uVar3 * 8) = (double)fVar4;
      }
      else if (*PTR_DAT_00baa820 == 2) {
        uVar3 = (uint)local_a;
        if (0x721 < uVar3) {
          uVar3 = thunk_FUN_004072dc();
        }
        *(undefined4 *)(iVar1 + 0x3924 + uVar3 * 8) = 0;
        *(undefined4 *)(iVar1 + 0x3928 + uVar3 * 8) = 0;
      }
      if ((*PTR_DAT_00baa820 == '\0') || (*PTR_DAT_00baa820 == '\x02')) {
        uVar3 = local_a - 1;
        if (0x13 < uVar3) {
          uVar3 = thunk_FUN_004072dc();
        }
        *(double *)(iVar1 + 0x392c) =
             (double)*(ushort *)(*(int *)PTR_DAT_00ba9c04 + 0x364 + (uVar3 + 1) * 2) +
             *(double *)(iVar1 + 0x392c);
      }
      uVar3 = (uint)local_a;
      if (0x721 < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      *(undefined4 *)(iVar1 + 0x7234 + uVar3 * 8) = 0;
      *(undefined4 *)(iVar1 + 0x7238 + uVar3 * 8) = 0x40100000;
      local_a = local_a + 1;
      local_12 = local_12 + -1;
    } while (local_12 != 0);
  }
  local_12 = *(short *)(iVar1 + 0x19171);
  if (local_12 != 0) {
    local_a = 1;
    do {
      uVar3 = (uint)local_a;
      iVar2 = iVar1;
      if (0x721 < uVar3) {
        iVar2 = thunk_FUN_004072dc();
        uVar3 = extraout_EDX;
      }
      if (*(float10 *)(iVar2 + 0x19149) < (float10)*(double *)(iVar1 + 0x3924 + uVar3 * 8)) {
        uVar3 = (uint)local_a;
        if (0x721 < uVar3) {
          uVar3 = thunk_FUN_004072dc();
        }
        *(float10 *)(iVar1 + 0x19149) = (float10)*(double *)(iVar1 + 0x3924 + uVar3 * 8);
      }
      local_a = local_a + 1;
      local_12 = local_12 + -1;
    } while (local_12 != 0);
  }
  FUN_00801bb8(iVar1,iVar1 + 0x19149,iVar1 + 0x1917b);
  *(undefined4 *)(iVar1 + 0x1913f) = 0;
  *(undefined4 *)(iVar1 + 0x19143) = 0;
  *(undefined2 *)(iVar1 + 0x19147) = 0;
  *(float10 *)(iVar1 + 0x1912b) = (float10)1;
  *(float10 *)(iVar1 + 0x19135) = (float10)*(ushort *)(iVar1 + 0x19171);
  *(undefined2 *)(iVar1 + 0x1917d) = *(undefined2 *)(iVar1 + 0x19171);
  *(undefined1 *)(iVar1 + 0x1916f) = 0;
  *(undefined1 *)(iVar1 + 0x19170) = 0;
  *(undefined1 *)(iVar1 + 0x19125) = 1;
  return;
}



// === FUN_007f1918 @ 007f1918 size:1168 ===

void FUN_007f1918(int param_1)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  float10 in_ST0;
  float10 fVar11;
  float10 fVar12;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  short local_12;
  ushort local_a;
  
  iVar2 = *(int *)(param_1 + 0x4b4);
  *(undefined4 *)(iVar2 + 0x1918d) = *(undefined4 *)(param_1 + 0x410);
  FUN_0040c9a8(iVar2 + 0xab45,L"A-Factor");
  FUN_0040c9a8(iVar2 + 0xab49,L"No of elements");
  FUN_0040c5c8(iVar2 + 0xab4d);
  *(undefined1 *)(iVar2 + 0xab44) = 0;
  *(undefined2 *)(iVar2 + 0x19171) = 0x14;
  *(float10 *)(iVar2 + 0x19149) = (float10)1;
  FUN_00801bb8(iVar2,iVar2 + 0x19149,iVar2 + 0x1917b);
  *(undefined4 *)(iVar2 + 0x1913f) = 0;
  *(undefined4 *)(iVar2 + 0x19143) = 0;
  *(undefined2 *)(iVar2 + 0x19147) = 0;
  *(float10 *)(iVar2 + 0x1912b) = (float10)1;
  *(float10 *)(iVar2 + 0x19135) = (float10)*(ushort *)(iVar2 + 0x19171);
  *(undefined2 *)(iVar2 + 0x1917d) = *(undefined2 *)(iVar2 + 0x19171);
  *(undefined1 *)(iVar2 + 0x19170) = 0;
  cVar1 = *PTR_DAT_00baa820;
  if (cVar1 == '\0') {
    local_12 = *(short *)(iVar2 + 0x19171);
    if (local_12 != 0) {
      local_a = 1;
      do {
        fVar12 = (float10)local_a;
        uVar8 = (uint)local_a;
        if (0x721 < uVar8) {
          uVar8 = thunk_FUN_004072dc();
        }
        *(double *)(iVar2 + 0x14 + uVar8 * 8) = (double)fVar12;
        uVar8 = local_a - 1;
        if (0x13 < uVar8) {
          uVar8 = thunk_FUN_004072dc();
        }
        uVar10 = (uint)*(ushort *)(*(int *)PTR_DAT_00ba9c04 + 0xda + (uVar8 + 1) * 2);
        uVar8 = local_a - 1;
        if (0x13 < uVar8) {
          uVar10 = thunk_FUN_004072dc();
          uVar8 = extraout_EDX_01;
        }
        uVar8 = (uint)*(ushort *)(*(int *)PTR_DAT_00ba9c04 + 0x322 + (uVar8 + 1) * 2);
        iVar9 = uVar10 + uVar8;
        if (SCARRY4(uVar10,uVar8)) {
          iVar9 = thunk_FUN_004072dc();
        }
        fVar12 = (float10)iVar9;
        uVar8 = (uint)local_a;
        if (0x721 < uVar8) {
          uVar8 = thunk_FUN_004072dc();
        }
        *(double *)(iVar2 + 0x3924 + uVar8 * 8) = (double)fVar12;
        uVar8 = (uint)local_a;
        iVar9 = iVar2;
        if (0x721 < uVar8) {
          iVar9 = thunk_FUN_004072dc();
          uVar8 = extraout_EDX_02;
        }
        if (*(float10 *)(iVar9 + 0x19149) < (float10)*(double *)(iVar2 + 0x3924 + uVar8 * 8)) {
          uVar8 = (uint)local_a;
          if (0x721 < uVar8) {
            uVar8 = thunk_FUN_004072dc();
          }
          *(float10 *)(iVar2 + 0x19149) = (float10)*(double *)(iVar2 + 0x3924 + uVar8 * 8);
        }
        uVar8 = (uint)local_a;
        if (0x721 < uVar8) {
          uVar8 = thunk_FUN_004072dc();
        }
        *(undefined4 *)(iVar2 + 0x7234 + uVar8 * 8) = 0;
        *(undefined4 *)(iVar2 + 0x7238 + uVar8 * 8) = 0x40100000;
        *(undefined1 *)(iVar2 + 0x1916f) = 0;
        local_a = local_a + 1;
        local_12 = local_12 + -1;
      } while (local_12 != 0);
    }
  }
  else if (cVar1 == '\x01') {
    local_12 = *(short *)(iVar2 + 0x19171);
    if (local_12 != 0) {
      local_a = 1;
      fVar12 = in_ST6;
      do {
        uVar8 = (uint)local_a;
        if (0xff < uVar8) {
          uVar8 = thunk_FUN_004072dc();
        }
        FUN_008b0620(uVar8,1);
        uVar8 = (uint)local_a;
        if (0x721 < uVar8) {
          uVar8 = thunk_FUN_004072dc();
        }
        *(double *)(iVar2 + 0x14 + uVar8 * 8) = (double)in_ST0;
        uVar8 = local_a - 1;
        if (0x13 < uVar8) {
          uVar8 = thunk_FUN_004072dc();
        }
        fVar11 = (float10)*(ushort *)(*(int *)PTR_DAT_00ba9c04 + 0xda + (uVar8 + 1) * 2);
        uVar8 = (uint)local_a;
        in_ST0 = in_ST1;
        fVar3 = in_ST2;
        fVar4 = in_ST3;
        fVar5 = in_ST4;
        fVar6 = in_ST5;
        fVar7 = in_ST6;
        if (0x721 < uVar8) {
          uVar8 = thunk_FUN_004072dc();
          in_ST0 = in_ST1;
          fVar3 = in_ST2;
          fVar4 = in_ST3;
          fVar5 = in_ST4;
          fVar6 = in_ST5;
          fVar7 = in_ST6;
        }
        in_ST6 = fVar12;
        in_ST5 = fVar7;
        in_ST4 = fVar6;
        in_ST3 = fVar5;
        in_ST2 = fVar4;
        in_ST1 = fVar3;
        *(double *)(iVar2 + 0x3924 + uVar8 * 8) = (double)fVar11;
        uVar8 = (uint)local_a;
        iVar9 = iVar2;
        if (0x721 < uVar8) {
          iVar9 = thunk_FUN_004072dc();
          uVar8 = extraout_EDX;
        }
        if (*(float10 *)(iVar9 + 0x19149) < (float10)*(double *)(iVar2 + 0x3924 + uVar8 * 8)) {
          uVar8 = (uint)local_a;
          if (0x721 < uVar8) {
            uVar8 = thunk_FUN_004072dc();
          }
          *(float10 *)(iVar2 + 0x19149) = (float10)*(double *)(iVar2 + 0x3924 + uVar8 * 8);
        }
        uVar8 = (uint)local_a;
        fVar12 = in_ST6;
        if (0x721 < uVar8) {
          uVar8 = thunk_FUN_004072dc();
        }
        *(undefined4 *)(iVar2 + 0x7234 + uVar8 * 8) = 0;
        *(undefined4 *)(iVar2 + 0x7238 + uVar8 * 8) = 0x40100000;
        *(undefined1 *)(iVar2 + 0x1916f) = 1;
        local_a = local_a + 1;
        local_12 = local_12 + -1;
      } while (local_12 != 0);
    }
  }
  else if ((cVar1 == '\x02') && (local_12 = *(short *)(iVar2 + 0x19171), local_12 != 0)) {
    local_a = 1;
    fVar12 = in_ST6;
    do {
      uVar8 = (uint)local_a;
      if (0xff < uVar8) {
        uVar8 = thunk_FUN_004072dc();
      }
      FUN_008b0620(uVar8,0);
      uVar8 = (uint)local_a;
      if (0x721 < uVar8) {
        uVar8 = thunk_FUN_004072dc();
      }
      *(double *)(iVar2 + 0x14 + uVar8 * 8) = (double)in_ST0;
      uVar8 = local_a - 1;
      if (0x13 < uVar8) {
        uVar8 = thunk_FUN_004072dc();
      }
      fVar11 = (float10)*(ushort *)(*(int *)PTR_DAT_00ba9c04 + 0x322 + (uVar8 + 1) * 2);
      uVar8 = (uint)local_a;
      in_ST0 = in_ST1;
      fVar3 = in_ST2;
      fVar4 = in_ST3;
      fVar5 = in_ST4;
      fVar6 = in_ST5;
      fVar7 = in_ST6;
      if (0x721 < uVar8) {
        uVar8 = thunk_FUN_004072dc();
        in_ST0 = in_ST1;
        fVar3 = in_ST2;
        fVar4 = in_ST3;
        fVar5 = in_ST4;
        fVar6 = in_ST5;
        fVar7 = in_ST6;
      }
      in_ST6 = fVar12;
      in_ST5 = fVar7;
      in_ST4 = fVar6;
      in_ST3 = fVar5;
      in_ST2 = fVar4;
      in_ST1 = fVar3;
      *(double *)(iVar2 + 0x3924 + uVar8 * 8) = (double)fVar11;
      uVar8 = (uint)local_a;
      iVar9 = iVar2;
      if (0x721 < uVar8) {
        iVar9 = thunk_FUN_004072dc();
        uVar8 = extraout_EDX_00;
      }
      if (*(float10 *)(iVar9 + 0x19149) < (float10)*(double *)(iVar2 + 0x3924 + uVar8 * 8)) {
        uVar8 = (uint)local_a;
        if (0x721 < uVar8) {
          uVar8 = thunk_FUN_004072dc();
        }
        *(float10 *)(iVar2 + 0x19149) = (float10)*(double *)(iVar2 + 0x3924 + uVar8 * 8);
      }
      uVar8 = (uint)local_a;
      fVar12 = in_ST6;
      if (0x721 < uVar8) {
        uVar8 = thunk_FUN_004072dc();
      }
      *(undefined4 *)(iVar2 + 0x7234 + uVar8 * 8) = 0;
      *(undefined4 *)(iVar2 + 0x7238 + uVar8 * 8) = 0x40100000;
      *(undefined1 *)(iVar2 + 0x1916f) = 3;
      local_a = local_a + 1;
      local_12 = local_12 + -1;
    } while (local_12 != 0);
  }
  *(undefined1 *)(iVar2 + 0x19125) = 1;
  return;
}



// === FUN_007f1e44 @ 007f1e44 size:618 ===

void FUN_007f1e44(int param_1)

{
  longlong lVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  int iVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar9;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  wchar_t *pwVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  byte local_25;
  double local_1c;
  double local_14;
  int local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_30 = 0;
  local_34 = 0;
  puStack_40 = &LAB_007f2180;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_2c = *(int *)(param_1 + 0x4b4);
  *(undefined4 *)(local_2c + 0x1918d) = *(undefined4 *)(param_1 + 0x3e4);
  puStack_48 = (undefined1 *)0x7f1e93;
  local_8 = param_1;
  FUN_0040c9a8(local_2c + 0xab45,L"Expected forgetting index");
  puStack_48 = (undefined1 *)0x7f1ea5;
  FUN_0040c9a8(local_2c + 0xab49,L"Grade");
  *(undefined1 *)(local_2c + 0xab44) = 0;
  *(undefined2 *)(local_2c + 0x19171) = 0x12;
  *(undefined4 *)(local_2c + 0x19149) = 0;
  *(undefined4 *)(local_2c + 0x1914d) = 0xa0000000;
  *(undefined2 *)(local_2c + 0x19151) = 0x4001;
  *(undefined4 *)(local_2c + 0x1913f) = 0;
  *(undefined4 *)(local_2c + 0x19143) = 0;
  *(undefined2 *)(local_2c + 0x19147) = 0;
  *(undefined4 *)(local_2c + 0x1912b) = 0;
  *(undefined4 *)(local_2c + 0x1912f) = 0xc0000000;
  *(undefined2 *)(local_2c + 0x19133) = 0x4000;
  *(undefined4 *)(local_2c + 0x19135) = 0;
  *(undefined4 *)(local_2c + 0x19139) = 0xa0000000;
  *(undefined2 *)(local_2c + 0x1913d) = 0x4003;
  *(undefined2 *)(local_2c + 0x1917b) = 0xb;
  *(undefined2 *)(local_2c + 0x1917d) = 0x12;
  *(undefined1 *)(local_2c + 0x1916f) = 0;
  *(undefined1 *)(local_2c + 0x19170) = 1;
  local_25 = 1;
  do {
    iVar7 = local_25 + 2;
    fVar9 = in_ST0;
    fVar2 = in_ST1;
    fVar3 = in_ST2;
    fVar4 = in_ST3;
    fVar5 = in_ST4;
    fVar6 = in_ST5;
    if (SCARRY4((uint)local_25,2)) {
      puStack_48 = (undefined1 *)0x7f1f6c;
      iVar7 = thunk_FUN_004072dc();
      fVar9 = in_ST0;
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
    *(double *)(local_2c + 0x14 + (uint)local_25 * 8) = (double)iVar7;
    uVar8 = local_25 - 1;
    in_ST6 = in_ST5;
    local_38 = iVar7;
    if (0x1d < uVar8) {
      puStack_48 = (undefined1 *)0x7f1f8f;
      uVar8 = thunk_FUN_004072dc();
    }
    lVar1 = (longlong)(int)(uVar8 + 1) * 3;
    iVar7 = (int)lVar1;
    if (iVar7 != lVar1) {
      puStack_48 = (undefined1 *)0x7f1f9a;
      iVar7 = thunk_FUN_004072dc();
    }
    puStack_48 = (undefined1 *)0x7f1fae;
    FUN_0040a340(*(int *)PTR_DAT_00baa39c + 0x48c6 + iVar7 * 2);
    *(double *)(local_2c + 0x3924 + (uint)local_25 * 8) = (double)fVar9;
    uVar8 = local_25 - 1;
    if (0x1d < uVar8) {
      puStack_48 = (undefined1 *)0x7f1fce;
      uVar8 = thunk_FUN_004072dc();
    }
    local_38 = (uint)*(ushort *)(*(int *)PTR_DAT_00baa39c + 0x497e + (uVar8 + 1) * 2);
    *(double *)(local_2c + 0x7234 + (uint)local_25 * 8) = (double)local_38;
    local_25 = local_25 + 1;
  } while (local_25 != 0x13);
  *(undefined1 *)(local_2c + 0x19126) = 1;
  *(undefined1 *)(local_2c + 0x19125) = 1;
  puStack_48 = (undefined1 *)0x7f2021;
  FUN_008b2608(&local_14,&local_1c);
  puStack_4c = &LAB_007f20ae;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  fVar9 = (float10)local_14;
  puStack_48 = &stack0xfffffffc;
  FUN_0042bc74(L"0.###",PTR_DAT_00baa920,&local_30,SUB104(fVar9,0),(int)((unkuint10)fVar9 >> 0x20),
               (short)((unkuint10)fVar9 >> 0x40));
  fVar9 = (float10)local_1c;
  FUN_0042bc74(L"0.###",PTR_DAT_00baa920,&local_34,SUB104(fVar9,0),(int)((unkuint10)fVar9 >> 0x20),
               (short)((unkuint10)fVar9 >> 0x40));
  uVar12 = 0x2208;
  pwVar10 = L"   B=";
  uVar11 = local_30;
  FUN_0040d87c(local_2c + 0xab4d,5);
  *in_FS_OFFSET = L"      Grade=Exp(A*FI+B)";
  FUN_0040c5c8(&local_34,L"      Grade=Exp(A*FI+B)",pwVar10,&LAB_007f20b5,uVar11,uVar12);
  FUN_0040c5c8(&local_30);
  return;
}



// === FUN_007f5414 @ 007f5414 size:1092 ===

void FUN_007f5414(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x4bf) == '\0') {
    puStack_20 = &LAB_007f58b1;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    switch(*(undefined4 *)(*(int *)(param_1 + 0x450) + 0x2b4)) {
    case 0:
      switch(*(undefined4 *)(*(int *)(param_1 + 0x454) + 0x2b4)) {
      case 0:
        uStack_28 = 1;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"time",0);
        break;
      case 1:
        uStack_28 = 100;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"reptime",L"Repetition time");
        break;
      case 2:
        uStack_28 = 0x7f54eb;
        puStack_1c = &stack0xfffffffc;
        FUN_007f4254(param_1);
        break;
      case 3:
        uStack_28 = 1;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"itemreps",L"Item repetitions");
        break;
      case 4:
        uStack_28 = 1;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"topicreps",L"Topic reviews");
      }
      break;
    case 1:
      iVar1 = *(int *)(*(int *)(param_1 + 0x454) + 0x2b4);
      if (iVar1 == 0) {
        uStack_28 = 1;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"outstanding",0);
      }
      else if (iVar1 == 1) {
        uStack_28 = 1;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"itemoutstanding",L"Outstanding items");
      }
      else if (iVar1 == 2) {
        uStack_28 = 0x7f5577;
        puStack_1c = &stack0xfffffffc;
        FUN_007f0ee0(param_1);
      }
      break;
    case 2:
      iVar1 = *(int *)(*(int *)(param_1 + 0x454) + 0x2b4);
      if (iVar1 == 0) {
        uStack_28 = 1000;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"burden",L"Workload");
      }
      else if (iVar1 == 1) {
        uStack_28 = 1000;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"itemburden",L"Item workload");
      }
      else if (iVar1 == 2) {
        uStack_28 = 1000;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"topicburden",L"Topic workload");
      }
      break;
    case 3:
      iVar1 = *(int *)(*(int *)(param_1 + 0x454) + 0x2b4);
      if (iVar1 == 0) {
        uStack_28 = 1;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"total",L"Elements");
      }
      else if (iVar1 == 1) {
        uStack_28 = 1;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"itemtotal",L"Items");
      }
      else if (iVar1 == 2) {
        uStack_28 = 0x7f5649;
        puStack_1c = &stack0xfffffffc;
        FUN_007f0448(param_1);
      }
      else if (iVar1 == 3) {
        uStack_28 = 0x7f5656;
        puStack_1c = &stack0xfffffffc;
        FUN_007f4180(param_1);
      }
      break;
    case 4:
      iVar1 = *(int *)(*(int *)(param_1 + 0x454) + 0x2b4);
      if (iVar1 == 0) {
        uStack_28 = 1;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"memorized",0);
      }
      else if (iVar1 == 1) {
        uStack_28 = 1;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"itemmemorized",L"Memorized items");
      }
      else if (iVar1 == 2) {
        uStack_28 = 0x7f56b0;
        puStack_1c = &stack0xfffffffc;
        FUN_007f06c8(param_1);
      }
      break;
    case 5:
      iVar1 = *(int *)(*(int *)(param_1 + 0x454) + 0x2b4);
      if (iVar1 == 0) {
        uStack_28 = 0x7f56db;
        puStack_1c = &stack0xfffffffc;
        FUN_007f5f68(param_1);
      }
      else if (iVar1 == 1) {
        uStack_28 = 0x7f56e8;
        puStack_1c = &stack0xfffffffc;
        FUN_007f096c(param_1);
      }
      else if (iVar1 == 2) {
        uStack_28 = 0x7f56f5;
        puStack_1c = &stack0xfffffffc;
        FUN_007f0bcc(param_1);
      }
      break;
    case 6:
      switch(*(undefined4 *)(*(int *)(param_1 + 0x454) + 0x2b4)) {
      case 0:
        uStack_28 = 1000;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,&DAT_007f5c50,L"Forgetting index");
        break;
      case 1:
        uStack_28 = 100;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"retention",0);
        break;
      case 2:
        uStack_28 = 1000;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"Recall",L"Recall [%]");
        break;
      case 3:
        uStack_28 = 1000;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"R SM16",L"Retrievability Alg-SM16 [%]");
        break;
      case 4:
        uStack_28 = 1000;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"R SM17",L"Retrievability Alg-SM18 [%]");
        break;
      case 5:
        uStack_28 = 0x7f57cf;
        puStack_1c = &stack0xfffffffc;
        FUN_007f6710(param_1);
        break;
      case 6:
        uStack_28 = 1000;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"Metric SM16",L"Alg-SM16 R-Metric [pp]");
        break;
      case 7:
        uStack_28 = 1000;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"Metric SM17",L"Alg-SM18 R-Metric [pp]");
        break;
      case 8:
        uStack_28 = 0x7f5814;
        puStack_1c = &stack0xfffffffc;
        FUN_007f6aa0(param_1);
        break;
      case 9:
        uStack_28 = 0x7f5821;
        puStack_1c = &stack0xfffffffc;
        FUN_007f1388(param_1);
      }
      break;
    case 7:
      iVar1 = *(int *)(*(int *)(param_1 + 0x454) + 0x2b4);
      if (iVar1 == 0) {
        uStack_28 = 0x7f5849;
        puStack_1c = &stack0xfffffffc;
        FUN_007f2f7c(param_1);
      }
      else if (iVar1 == 1) {
        uStack_28 = 0x7f5853;
        puStack_1c = &stack0xfffffffc;
        FUN_007f28f0(param_1);
      }
      else if (iVar1 == 2) {
        uStack_28 = 0x7f585d;
        puStack_1c = &stack0xfffffffc;
        FUN_007f2be8(param_1);
      }
      break;
    case 8:
      iVar1 = *(int *)(*(int *)(param_1 + 0x454) + 0x2b4);
      if (iVar1 == 0) {
        uStack_28 = 100000;
        FUN_007f61b4(param_1,L"itemprioritymissed",L"Item priority protection");
      }
      else if (iVar1 == 1) {
        uStack_28 = 100000;
        puStack_1c = &stack0xfffffffc;
        FUN_007f61b4(param_1,L"topicprioritymissed",L"Topic priority protection");
      }
    }
    *in_FS_OFFSET = uStack_28;
  }
  return;
}



// === FUN_007f8ba8 @ 007f8ba8 size:1121 ===

void FUN_007f8ba8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint extraout_EDX;
  uint extraout_EDX_00;
  
  if (*(char *)(param_1 + 0x4bf) == '\0') {
    (**(code **)(**(int **)(param_1 + 0x414) + 0x90))(*(int **)(param_1 + 0x414),0);
    (**(code **)(**(int **)(param_1 + 0x42c) + 0x90))(*(int **)(param_1 + 0x42c),0);
    FUN_0054a01c(*(undefined4 *)(param_1 + 0x43c),0);
    FUN_007f02c4(param_1);
    FUN_00549ecc(*(undefined4 *)(param_1 + 0x420),*(int *)(*(int *)(param_1 + 0x3d0) + 0x308) == 5);
    FUN_00549ecc(*(undefined4 *)(param_1 + 0x438),*(int *)(*(int *)(param_1 + 0x3d0) + 0x308) == 5);
    FUN_00803a94(*(undefined4 *)(param_1 + 0x4b4));
    FUN_005e5e68(*(undefined4 *)(param_1 + 0x474),0);
    switch(*(uint *)(*(int *)(param_1 + 0x3d0) + 0x308) & 0x7f) {
    case 0:
      FUN_005e5e68(*(undefined4 *)(param_1 + 0x474),1);
      FUN_007f5414(param_1);
      FUN_0040c9a8(*(int *)(param_1 + 0x3d0) + 0x90,
                   L"Various daily statistics, e.g. retention, learning time, workload, etc.");
      (**(code **)(**(int **)(param_1 + 0x42c) + 0x90))(*(int **)(param_1 + 0x42c),1);
      break;
    case 1:
      FUN_007f981c(param_1);
      FUN_0040c9a8(*(int *)(param_1 + 0x3d0) + 0x90,
                   L"All forgetting curves collected by Algorithm SM-18");
      break;
    case 2:
      FUN_007f8234(param_1,*(undefined1 *)(param_1 + 0x4bd),*(undefined1 *)(param_1 + 0x4bc));
      FUN_0040c9a8(*(int *)(param_1 + 0x3d0) + 0x90,
                   L"All forgetting curves collected by Algorithm SM-15");
      break;
    case 3:
      FUN_007fdaa0(param_1);
      FUN_0040c9a8(*(int *)(param_1 + 0x3d0) + 0x90,
                   L"All stabilization curves computed by Algorithm SM-17");
      break;
    case 4:
      switch(*(undefined4 *)(*(int *)(param_1 + 0x3d4) + 0x2b4)) {
      case 0:
        FUN_007f2264(param_1);
        break;
      case 1:
        FUN_007ee398(param_1);
        break;
      case 2:
        FUN_007edfb4(param_1);
        break;
      case 3:
        FUN_007edd6c(param_1);
        break;
      case 4:
        FUN_007f1e44(param_1);
      }
      FUN_0040c9a8(*(int *)(param_1 + 0x3d0) + 0x90,
                   L"Various correlation graphs, e.g. how priority affects retention");
      break;
    case 5:
      uVar1 = FUN_005fdf04(*(undefined4 *)(param_1 + 0x46c));
      switch(uVar1) {
      case 0:
        FUN_007ef570(param_1);
        break;
      case 1:
        FUN_007f1918(param_1);
        break;
      case 2:
        FUN_007f64b8(param_1);
        break;
      case 3:
        FUN_007ef910(param_1);
        break;
      case 4:
        FUN_007efc68(param_1);
      }
      FUN_0040c9a8(*(int *)(param_1 + 0x3d0) + 0x90,
                   L"Distribution of intervals, repetitions, difficulty, lapses, etc.");
      break;
    case 6:
      (**(code **)(**(int **)(param_1 + 0x414) + 0x90))(*(int **)(param_1 + 0x414),1);
      FUN_007efff4(param_1,*(undefined1 *)(param_1 + 0x4be));
      FUN_0040c9a8(*(int *)(param_1 + 0x3d0) + 0x90,L"Forgetting curves as surfaces");
      break;
    case 7:
      (**(code **)(**(int **)(param_1 + 0x414) + 0x90))(*(int **)(param_1 + 0x414),1);
      iVar2 = *(int *)(*(int *)(param_1 + 0x3fc) + 0x2b4);
      if (iVar2 == 0) {
        FUN_007ee6a0(param_1);
      }
      else if (iVar2 == 1) {
        FUN_007ee850(param_1);
      }
      else if (iVar2 == 2) {
        FUN_007fb1f4(param_1);
      }
      FUN_0040c9a8(*(int *)(param_1 + 0x3d0) + 0x90,L"Optimization matrices as surfaces");
      break;
    case 8:
      iVar2 = FUN_005fdf04(*(undefined4 *)(param_1 + 0x494));
      uVar3 = iVar2 + 1;
      if (SCARRY4(iVar2,1)) {
        thunk_FUN_004072dc();
        uVar3 = extraout_EDX;
      }
      if (0xff < uVar3) {
        thunk_FUN_004072dc();
      }
      FUN_007fd46c(param_1);
      FUN_0040c9a8(*(int *)(param_1 + 0x3d0) + 0x90,L"Graphs that show how SInc slope is computed");
      break;
    case 9:
      iVar2 = *(int *)(*(int *)(param_1 + 1000) + 0x2b4);
      uVar3 = iVar2 + 1;
      if (SCARRY4(iVar2,1)) {
        thunk_FUN_004072dc();
        uVar3 = extraout_EDX_00;
      }
      if (0xff < uVar3) {
        thunk_FUN_004072dc();
      }
      FUN_007eedb4(param_1);
      FUN_0040c9a8(*(int *)(param_1 + 0x3d0) + 0x90,L"Graphs that show how D-Factors are computed");
      break;
    case 10:
      uVar3 = FUN_005fdf04(*(undefined4 *)(param_1 + 0x490));
      switch(uVar3 & 0x7f) {
      case 0:
        FUN_007fc0fc(param_1);
        break;
      case 1:
        FUN_007ff008(param_1);
        break;
      case 2:
        FUN_007fb1f4(param_1);
        break;
      case 3:
        FUN_007fa2e8(param_1);
        break;
      case 4:
        FUN_005e5e68(*(undefined4 *)(param_1 + 0x474),1);
        FUN_007fc850(param_1);
        break;
      case 5:
        FUN_007faa3c(param_1);
        break;
      case 6:
        FUN_007fb8b4(param_1,6);
        break;
      case 7:
        FUN_007fb8b4(param_1,7);
        break;
      case 8:
        FUN_007fb8b4(param_1,8);
      }
      FUN_0040c9a8(*(int *)(param_1 + 0x3d0) + 0x90,
                   L"SuperMemo Algorithm in numbers: optimization matrices");
    }
  }
  return;
}



// === FUN_007f981c @ 007f981c size:1917 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f981c(void)

{
  double dVar1;
  undefined1 *puVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  uint extraout_EDX;
  uint extraout_EDX_00;
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
  uint extraout_EDX_11;
  uint extraout_EDX_12;
  int extraout_EDX_13;
  uint extraout_EDX_14;
  uint extraout_EDX_15;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar12;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined1 local_7384 [256];
  double adStack_7284 [1826];
  undefined4 local_3974;
  undefined4 local_3970;
  undefined4 uStack_13e8;
  undefined4 uStack_13e4;
  wchar_t *pwStack_13e0;
  undefined1 *puStack_13dc;
  undefined4 uStack_13d8;
  wchar_t *pwStack_13d4;
  undefined4 uStack_13d0;
  undefined8 local_13cc;
  undefined2 uStack_13c4;
  undefined2 uStack_13c2;
  undefined4 uStack_13c0;
  wchar_t *pwStack_13bc;
  undefined4 uStack_13b8;
  undefined8 local_13b4;
  undefined2 uStack_13ac;
  undefined2 uStack_13aa;
  undefined4 uStack_13a8;
  wchar_t *pwStack_13a4;
  undefined8 local_13a0;
  undefined4 uStack_1398;
  undefined2 uStack_1394;
  undefined2 uStack_1392;
  undefined4 uStack_1390;
  undefined1 *puStack_138c;
  undefined1 *puStack_1388;
  undefined4 local_60 [7];
  int local_44;
  undefined4 local_40;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  undefined4 local_38;
  double local_34;
  double local_2c;
  double local_24;
  undefined4 local_1c;
  undefined4 uStack_18;
  double local_14;
  int local_8;
  
  puStack_1388 = &stack0xfffffffc;
  iVar10 = 7;
  do {
    local_8 = iVar10;
    iVar10 = local_8 + -1;
  } while (local_8 + -1 != 0);
  local_40 = 0;
  local_60[0] = 0;
  puStack_138c = &LAB_007f9f99;
  uStack_1390 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1390;
  uStack_1394 = 0x9861;
  uStack_1392 = 0x7f;
  FUN_005e5e68(*(undefined4 *)(local_8 + 0x474),0);
  uStack_1394 = 0x986f;
  uStack_1392 = 0x7f;
  uVar9 = FUN_005fdf04(*(undefined4 *)(local_8 + 0x484));
  if (0xff < uVar9) {
    uStack_1394 = 0x987b;
    uStack_1392 = 0x7f;
    uVar9 = thunk_FUN_004072dc();
  }
  local_3b = (byte)uVar9;
  uStack_1394 = 0x988c;
  uStack_1392 = 0x7f;
  iVar10 = FUN_005fdf04(*(undefined4 *)(local_8 + 0x488));
  uVar9 = iVar10 + 1;
  if (SCARRY4(iVar10,1)) {
    uStack_1394 = 0x9896;
    uStack_1392 = 0x7f;
    uVar9 = thunk_FUN_004072dc();
  }
  if (0xff < uVar9) {
    uStack_1394 = 0x98a2;
    uStack_1392 = 0x7f;
    uVar9 = thunk_FUN_004072dc();
  }
  local_3a = (byte)uVar9;
  if (local_3b == 0) {
    uStack_1394 = 0x98b3;
    uStack_1392 = 0x7f;
    FUN_007f458c(local_8);
    uStack_1394 = 0x98c3;
    uStack_1392 = 0x7f;
    FUN_00549ecc(*(undefined4 *)(local_8 + 0x488),0);
  }
  else {
    local_44 = *(int *)(local_8 + 0x4b4);
    *(undefined4 *)(local_44 + 0x1918d) = *(undefined4 *)(local_8 + 0x480);
    uStack_1394 = 0x98f6;
    uStack_1392 = 0x7f;
    FUN_00549ecc(*(undefined4 *)(local_8 + 0x488),CONCAT31((int3)((uint)local_44 >> 8),1));
    uStack_1394 = 0x9908;
    uStack_1392 = 0x7f;
    FUN_0040c9a8(local_44 + 0xab45,L"Retrievability [%]");
    uStack_1394 = 0x991a;
    uStack_1392 = 0x7f;
    FUN_0040c9a8(local_44 + 0xab49,L"Recall [%]");
    *(undefined2 *)(local_44 + 0x19171) = 0x14;
    *(undefined4 *)(local_44 + 0x1912b) = 0;
    *(undefined4 *)(local_44 + 0x1912f) = 0;
    *(undefined2 *)(local_44 + 0x19133) = 0;
    *(undefined4 *)(local_44 + 0x19135) = 0;
    *(undefined4 *)(local_44 + 0x19139) = 0xc8000000;
    *(undefined2 *)(local_44 + 0x1913d) = 0x4005;
    *(undefined2 *)(local_44 + 0x1917d) = 0x14;
    *(undefined4 *)(local_44 + 0x1913f) = 0;
    *(undefined4 *)(local_44 + 0x19143) = 0;
    *(undefined2 *)(local_44 + 0x19147) = 0;
    *(undefined4 *)(local_44 + 0x19149) = 0;
    *(undefined4 *)(local_44 + 0x1914d) = 0xc8000000;
    *(undefined2 *)(local_44 + 0x19151) = 0x4005;
    *(undefined2 *)(local_44 + 0x1917b) = 0xb;
    *(undefined1 *)(local_44 + 0x1916f) = 0;
    *(undefined1 *)(local_44 + 0x19170) = 0;
    *(undefined4 *)(local_44 + 0x14) = 0;
    *(undefined4 *)(local_44 + 0x18) = 0x40590000;
    local_3974 = 0;
    local_3970 = 0;
    *(undefined4 *)(local_44 + 0x392c) = 0;
    *(undefined4 *)(local_44 + 0x3930) = 0x40590000;
    *(undefined4 *)(local_44 + 0x723c) = 0;
    *(undefined4 *)(local_44 + 0x7240) = 0;
    local_39 = 1;
    do {
      uVar9 = 0x15 - local_39;
      fVar12 = in_ST0;
      fVar3 = in_ST1;
      fVar4 = in_ST2;
      fVar5 = in_ST3;
      fVar6 = in_ST4;
      fVar7 = in_ST5;
      fVar8 = in_ST6;
      if (SBORROW4(0x15,(uint)local_39)) {
        uStack_1394 = 0x9a18;
        uStack_1392 = 0x7f;
        thunk_FUN_004072dc();
        uVar9 = extraout_EDX;
        fVar12 = in_ST0;
        fVar3 = in_ST1;
        fVar4 = in_ST2;
        fVar5 = in_ST3;
        fVar6 = in_ST4;
        fVar7 = in_ST5;
        fVar8 = in_ST6;
      }
      in_ST6 = in_ST7;
      in_ST5 = fVar8;
      in_ST4 = fVar7;
      in_ST3 = fVar6;
      in_ST2 = fVar5;
      in_ST1 = fVar4;
      in_ST0 = fVar3;
      if (0xff < uVar9) {
        uStack_1394 = 0x9a25;
        uStack_1392 = 0x7f;
        thunk_FUN_004072dc();
        uVar9 = extraout_EDX_00;
      }
      local_3c = (byte)uVar9;
      uStack_1394 = 0x9a30;
      uStack_1392 = 0x7f;
      FUN_0070fd20(uVar9 & 0xff);
      *(double *)(local_44 + 0x14 + (uint)local_39 * 8) = (double)(fVar12 * (float10)_DAT_007f9ffc);
      *(double *)(&local_3974 + (uint)local_39 * 2) =
           (double)(_DAT_007f9ffc - (float)*(double *)(local_44 + 0x14 + (uint)local_39 * 8));
      uVar9 = local_3a - 1;
      if (SBORROW4((uint)local_3a,1)) {
        uStack_1394 = 0x9a71;
        uStack_1392 = 0x7f;
        uVar9 = thunk_FUN_004072dc();
      }
      if (0x14 < uVar9) {
        uStack_1394 = 0x9a7b;
        uStack_1392 = 0x7f;
        uVar9 = thunk_FUN_004072dc();
      }
      iVar10 = (int)((longlong)(int)uVar9 * 0x1b9);
      if ((longlong)iVar10 != (longlong)(int)uVar9 * 0x1b9) {
        uStack_1394 = 0x9a88;
        uStack_1392 = 0x7f;
        iVar10 = thunk_FUN_004072dc();
      }
      puVar11 = PTR_DAT_00ba9ef4 + iVar10 * 4;
      uVar9 = local_3b - 1;
      if (SBORROW4((uint)local_3b,1)) {
        uStack_1394 = 0x9aa0;
        uStack_1392 = 0x7f;
        puVar11 = (undefined *)thunk_FUN_004072dc();
        uVar9 = extraout_EDX_01;
      }
      if (0x14 < uVar9) {
        uStack_1394 = 0x9aaa;
        uStack_1392 = 0x7f;
        puVar11 = (undefined *)thunk_FUN_004072dc();
        uVar9 = extraout_EDX_02;
      }
      iVar10 = (int)((longlong)(int)uVar9 * 0x15);
      if ((longlong)iVar10 != (longlong)(int)uVar9 * 0x15) {
        uStack_1394 = 0x9ab4;
        uStack_1392 = 0x7f;
        puVar11 = (undefined *)thunk_FUN_004072dc();
        iVar10 = extraout_EDX_03;
      }
      puVar11 = puVar11 + iVar10 * 4;
      uVar9 = local_3c - 1;
      if (SBORROW4((uint)local_3c,1)) {
        uStack_1394 = 0x9ac6;
        uStack_1392 = 0x7f;
        puVar11 = (undefined *)thunk_FUN_004072dc();
        uVar9 = extraout_EDX_04;
      }
      if (0x14 < uVar9) {
        uStack_1394 = 0x9ad0;
        uStack_1392 = 0x7f;
        puVar11 = (undefined *)thunk_FUN_004072dc();
        uVar9 = extraout_EDX_05;
      }
      *(double *)(local_44 + 0x7234 + (uint)local_39 * 8) = (double)*(int *)(puVar11 + uVar9 * 4);
      if (*(double *)(local_44 + 0x7234 + (uint)local_39 * 8) == 0.0) {
        *(undefined4 *)(local_44 + 0x3924 + (uint)local_39 * 8) = 0;
        *(undefined4 *)(local_44 + 0x3928 + (uint)local_39 * 8) = 0;
      }
      else {
        uVar9 = local_3a - 1;
        if (SBORROW4((uint)local_3a,1)) {
          uStack_1394 = 0x9b0d;
          uStack_1392 = 0x7f;
          uVar9 = thunk_FUN_004072dc();
        }
        if (0x14 < uVar9) {
          uStack_1394 = 0x9b17;
          uStack_1392 = 0x7f;
          uVar9 = thunk_FUN_004072dc();
        }
        iVar10 = (int)((longlong)(int)uVar9 * 0x1b9);
        if ((longlong)iVar10 != (longlong)(int)uVar9 * 0x1b9) {
          uStack_1394 = 0x9b24;
          uStack_1392 = 0x7f;
          iVar10 = thunk_FUN_004072dc();
        }
        puVar11 = PTR_DAT_00baa8d4 + iVar10 * 4;
        uVar9 = local_3b - 1;
        if (SBORROW4((uint)local_3b,1)) {
          uStack_1394 = 0x9b3c;
          uStack_1392 = 0x7f;
          puVar11 = (undefined *)thunk_FUN_004072dc();
          uVar9 = extraout_EDX_06;
        }
        if (0x14 < uVar9) {
          uStack_1394 = 0x9b46;
          uStack_1392 = 0x7f;
          puVar11 = (undefined *)thunk_FUN_004072dc();
          uVar9 = extraout_EDX_07;
        }
        iVar10 = (int)((longlong)(int)uVar9 * 0x15);
        if ((longlong)iVar10 != (longlong)(int)uVar9 * 0x15) {
          uStack_1394 = 0x9b50;
          uStack_1392 = 0x7f;
          puVar11 = (undefined *)thunk_FUN_004072dc();
          iVar10 = extraout_EDX_08;
        }
        puVar11 = puVar11 + iVar10 * 4;
        uVar9 = local_3c - 1;
        if (SBORROW4((uint)local_3c,1)) {
          uStack_1394 = 0x9b62;
          uStack_1392 = 0x7f;
          puVar11 = (undefined *)thunk_FUN_004072dc();
          uVar9 = extraout_EDX_09;
        }
        if (0x14 < uVar9) {
          uStack_1394 = 0x9b6c;
          uStack_1392 = 0x7f;
          puVar11 = (undefined *)thunk_FUN_004072dc();
          uVar9 = extraout_EDX_10;
        }
        fVar12 = (float10)*(int *)(puVar11 + uVar9 * 4);
        uVar9 = local_3a - 1;
        if (SBORROW4((uint)local_3a,1)) {
          uStack_1394 = 0x9b7e;
          uStack_1392 = 0x7f;
          uVar9 = thunk_FUN_004072dc();
        }
        if (0x14 < uVar9) {
          uStack_1394 = 0x9b88;
          uStack_1392 = 0x7f;
          uVar9 = thunk_FUN_004072dc();
        }
        iVar10 = (int)((longlong)(int)uVar9 * 0x1b9);
        if ((longlong)iVar10 != (longlong)(int)uVar9 * 0x1b9) {
          uStack_1394 = 0x9b95;
          uStack_1392 = 0x7f;
          iVar10 = thunk_FUN_004072dc();
        }
        puVar11 = PTR_DAT_00ba9ef4 + iVar10 * 4;
        uVar9 = local_3b - 1;
        if (SBORROW4((uint)local_3b,1)) {
          uStack_1394 = 0x9bad;
          uStack_1392 = 0x7f;
          puVar11 = (undefined *)thunk_FUN_004072dc();
          uVar9 = extraout_EDX_11;
        }
        if (0x14 < uVar9) {
          uStack_1394 = 0x9bb7;
          uStack_1392 = 0x7f;
          puVar11 = (undefined *)thunk_FUN_004072dc();
          uVar9 = extraout_EDX_12;
        }
        iVar10 = (int)((longlong)(int)uVar9 * 0x15);
        if ((longlong)iVar10 != (longlong)(int)uVar9 * 0x15) {
          uStack_1394 = 0x9bc1;
          uStack_1392 = 0x7f;
          puVar11 = (undefined *)thunk_FUN_004072dc();
          iVar10 = extraout_EDX_13;
        }
        puVar11 = puVar11 + iVar10 * 4;
        uVar9 = local_3c - 1;
        if (SBORROW4((uint)local_3c,1)) {
          uStack_1394 = 0x9bd3;
          uStack_1392 = 0x7f;
          puVar11 = (undefined *)thunk_FUN_004072dc();
          uVar9 = extraout_EDX_14;
        }
        if (0x14 < uVar9) {
          uStack_1394 = 0x9bdd;
          uStack_1392 = 0x7f;
          puVar11 = (undefined *)thunk_FUN_004072dc();
          uVar9 = extraout_EDX_15;
        }
        *(double *)(local_44 + 0x3924 + (uint)local_39 * 8) =
             (double)((fVar12 / (float10)*(int *)(puVar11 + uVar9 * 4)) * (float10)_DAT_007f9ffc);
        in_ST6 = in_ST5;
      }
      adStack_7284[local_39] =
           (double)(_DAT_007f9ffc - (float)*(double *)(local_44 + 0x3924 + (uint)local_39 * 8));
      local_39 = local_39 + 1;
      in_ST7 = in_ST6;
    } while (local_39 != 0x15);
    *(undefined4 *)(local_44 + 0xb4) = 0;
    *(undefined4 *)(local_44 + 0xb8) = 0x40260000;
    *(undefined1 *)(local_44 + 0x19126) = 1;
    *(undefined1 *)(local_44 + 0x19127) = 0;
    *(undefined1 *)(local_44 + 0x19128) = 0;
    *(undefined1 *)(local_44 + 0x19125) = 0;
    local_39 = 1;
    do {
      *(undefined4 *)(local_44 + 0xe5f5 + (uint)local_39 * 8) = 0;
      *(undefined4 *)(local_44 + 0xe5f9 + (uint)local_39 * 8) = 0x40568000;
      local_39 = local_39 + 1;
    } while (local_39 != 0x16);
    uStack_1394 = 0x9caf;
    uStack_1392 = 0x7f;
    FUN_0070fba8(local_3a);
    dVar1 = (double)in_ST0;
    uStack_1398 = SUB84(dVar1,0);
    uStack_1394 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1392 = (undefined2)((ulonglong)dVar1 >> 0x30);
    local_13a0._4_4_ = 0x7f9cbe;
    FUN_0070fd68(local_3b);
    local_13a0 = (double)in_ST1;
    pwStack_13a4 = (wchar_t *)&local_38;
    uStack_13a8 = 0x7f9cd7;
    FUN_0071151c(&local_2c,&local_1c,&local_24);
    local_34 = (double)in_ST2;
    local_39 = 1;
    do {
      *(double *)(local_44 + 0xace5 + (uint)local_39 * 8) =
           (double)(_DAT_007f9ffc -
                   (_DAT_007f9ffc - (float)*(double *)(local_44 + 0x14 + (uint)local_39 * 8)) *
                   (float)local_24);
      if ((double)_DAT_007f9ffc < *(double *)(local_44 + 0xace5 + (uint)local_39 * 8)) {
        *(undefined4 *)(local_44 + 0xace5 + (uint)local_39 * 8) = 0;
        *(undefined4 *)(local_44 + 0xace9 + (uint)local_39 * 8) = 0x40590000;
      }
      if (*(double *)(local_44 + 0xace5 + (uint)local_39 * 8) < 0.0) {
        *(undefined4 *)(local_44 + 0xace5 + (uint)local_39 * 8) = 0;
        *(undefined4 *)(local_44 + 0xace9 + (uint)local_39 * 8) = 0;
      }
      local_39 = local_39 + 1;
    } while (local_39 != 0x15);
    if ((double)CONCAT44(uStack_18,local_1c) <= 0.0) {
      local_34 = 100.0;
      local_1c = 0;
      uStack_18 = 0;
      *(undefined4 *)(local_44 + 0x1915f) = 0;
      *(undefined4 *)(local_44 + 0x19163) = 0;
      *(undefined4 *)(local_44 + 0x19167) = 0;
      *(undefined4 *)(local_44 + 0x1916b) = 0;
    }
    else {
      uStack_1394 = 0x4003;
      uStack_1392 = 0;
      uStack_1398 = 0xa0000000;
      local_13a0._4_4_ = 0;
      local_13a0._0_4_ = 0x7f9d99;
      FUN_00407b98();
      in_ST3 = ((float10)(double)CONCAT44(uStack_18,local_1c) / (float10)_DAT_007f9ffc) * in_ST3;
      local_13a0._4_4_ = SUB104(in_ST3,0);
      uStack_1398 = (undefined4)((unkuint10)in_ST3 >> 0x20);
      uStack_1394 = (undefined2)((unkuint10)in_ST3 >> 0x40);
      local_13a0._0_4_ = 0x7f9db0;
      FUN_00407b58();
      local_14 = (double)((_DAT_007fa000 - (float)((double)in_ST4 - 1.0)) / _DAT_007fa000);
      *(double *)(local_44 + 0x1915f) = local_14;
      *(undefined4 *)(local_44 + 0x19167) = 0xcccccccd;
      *(undefined4 *)(local_44 + 0x1916b) = 0x3feccccc;
    }
    uStack_1394 = 0x9e41;
    uStack_1392 = 0x7f;
    FUN_0040c5c8(local_44 + 0xab4d);
    fVar12 = (float10)local_34;
    local_13a0._4_4_ = SUB104(fVar12,0);
    uStack_1398 = (undefined4)((unkuint10)fVar12 >> 0x20);
    uStack_1394 = (undefined2)((unkuint10)fVar12 >> 0x40);
    local_13a0._0_4_ = 0x7f9e5d;
    FUN_00409cb4(0,1,local_7384);
    local_13a0._0_4_ = 0x7f9e6b;
    FUN_0040d710(&local_40,local_7384);
    local_13a0._0_4_ = *(undefined4 *)(local_44 + 0xab4d);
    pwStack_13a4 = L"  Recall=";
    uStack_13a8 = local_40;
    uStack_13ac = 0x9e8e;
    uStack_13aa = 0x7f;
    FUN_0040d87c(local_44 + 0xab4d,3);
    local_13b4 = SUB108((float10)(double)CONCAT44(uStack_18,local_1c),0);
    uStack_13ac = (undefined2)((unkuint10)(float10)(double)CONCAT44(uStack_18,local_1c) >> 0x40);
    uStack_13b8 = 0x7f9eaa;
    FUN_00409cb4(0,1,local_7384);
    uStack_13b8 = 0x7f9eb8;
    FUN_0040d710(&local_40,local_7384);
    uStack_13b8 = *(undefined4 *)(local_44 + 0xab4d);
    pwStack_13bc = L"  R90=";
    uStack_13c0 = local_40;
    uStack_13c4 = 0x9edb;
    uStack_13c2 = 0x7f;
    FUN_0040d87c(local_44 + 0xab4d,3);
    local_13cc = SUB108((float10)local_2c,0);
    uStack_13c4 = (undefined2)((unkuint10)(float10)local_2c >> 0x40);
    uStack_13d0 = 0x7f9ef7;
    FUN_00409cb4(0,4,local_7384);
    uStack_13d0 = 0x7f9f05;
    FUN_0040d710(&local_40,local_7384);
    uStack_13d0 = *(undefined4 *)(local_44 + 0xab4d);
    pwStack_13d4 = L"  Metric=";
    uStack_13d8 = local_40;
    puStack_13dc = (undefined1 *)0x7f9f28;
    FUN_0040d87c(local_44 + 0xab4d,3);
    puStack_13dc = (undefined1 *)0x7f9f38;
    FUN_004090d4(local_38,0,local_7384);
    puStack_13dc = (undefined1 *)0x7f9f46;
    FUN_0040d710(&local_40,local_7384);
    puStack_13dc = *(undefined1 **)(local_44 + 0xab4d);
    pwStack_13e0 = L"  Cases=";
    uStack_13e4 = local_40;
    uStack_13e8 = 0x7f9f69;
    FUN_0040d87c(local_44 + 0xab4d,3);
    *(undefined1 *)(local_44 + 0xab44) = 0;
    uStack_13e8 = 0x7f9f7b;
    FUN_00801388(local_44);
  }
  puVar2 = puStack_13dc;
  *in_FS_OFFSET = uStack_13e4;
  puStack_13dc = &LAB_007f9fa0;
  pwStack_13e0 = L"䖍\xe8c4☰￁\xe9c3ᰊ￁\xe8eb\xe58b썝Ұ\x02\xffff\xffff\x12";
  FUN_0040c5c8(local_60,uStack_13e4,puVar2);
  pwStack_13e0 = L"\xe9c3ᰊ￁\xe8eb\xe58b썝Ұ\x02\xffff\xffff\x12";
  FUN_0040c5c8(&local_40);
  return;
}



// === FUN_007fdaa0 @ 007fdaa0 size:1896 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007fdaa0(void)

{
  double dVar1;
  undefined1 *puVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 uVar10;
  uint extraout_EDX;
  uint extraout_EDX_00;
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
  undefined4 extraout_EDX_11;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar11;
  float10 fVar12;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 fVar13;
  float10 in_ST6;
  float10 fVar14;
  float10 in_ST7;
  undefined1 local_739c [256];
  undefined8 local_729c;
  double adStack_7294 [1826];
  undefined4 local_3984;
  undefined4 local_3980;
  undefined4 uStack_1444;
  undefined4 uStack_1440;
  wchar_t *pwStack_143c;
  undefined1 *puStack_1438;
  undefined *puStack_1434;
  undefined4 uStack_1430;
  wchar_t *pwStack_142c;
  undefined4 uStack_1428;
  wchar_t *pwStack_1424;
  undefined4 uStack_1420;
  undefined4 uStack_141c;
  wchar_t *pwStack_1418;
  undefined4 uStack_1414;
  undefined4 uStack_1410;
  wchar_t *pwStack_140c;
  undefined4 uStack_1408;
  undefined8 local_1404;
  undefined2 uStack_13fc;
  undefined2 uStack_13fa;
  undefined4 uStack_13f8;
  wchar_t *pwStack_13f4;
  undefined4 uStack_13f0;
  undefined4 uStack_13ec;
  wchar_t *pwStack_13e8;
  undefined4 uStack_13e4;
  undefined8 local_13e0;
  undefined2 uStack_13d8;
  undefined2 uStack_13d6;
  undefined8 local_13d4;
  undefined2 uStack_13cc;
  undefined2 uStack_13ca;
  undefined4 local_13c8;
  undefined4 *puStack_13c4;
  undefined2 uStack_13c0;
  undefined2 uStack_13be;
  undefined4 uStack_13bc;
  undefined4 uStack_13b8;
  undefined2 uStack_13b4;
  undefined2 uStack_13b2;
  undefined4 uStack_13b0;
  undefined1 *puStack_13ac;
  undefined1 *puStack_13a8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  undefined4 local_40;
  undefined1 local_3c [8];
  double local_34;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  int local_8;
  
  puStack_13a8 = &stack0xfffffffc;
  iVar6 = 7;
  do {
    local_8 = iVar6;
    iVar6 = local_8 + -1;
  } while (local_8 + -1 != 0);
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  puStack_13ac = &LAB_007fe208;
  uStack_13b0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13b0;
  uStack_13b4 = 0xdaf0;
  uStack_13b2 = 0x7f;
  FUN_005e5e68(*(undefined4 *)(local_8 + 0x474),0);
  uStack_13b4 = 0xdafe;
  uStack_13b2 = 0x7f;
  iVar6 = FUN_005fdf04(*(undefined4 *)(local_8 + 0x4a0));
  uVar7 = iVar6 + 1;
  if (SCARRY4(iVar6,1)) {
    uStack_13b4 = 0xdb08;
    uStack_13b2 = 0x7f;
    uVar7 = thunk_FUN_004072dc();
  }
  if (0xff < uVar7) {
    uStack_13b4 = 0xdb14;
    uStack_13b2 = 0x7f;
    uVar7 = thunk_FUN_004072dc();
  }
  local_43 = (byte)uVar7;
  uStack_13b4 = 0xdb25;
  uStack_13b2 = 0x7f;
  iVar6 = FUN_005fdf04(*(undefined4 *)(local_8 + 0x4a4));
  uVar7 = iVar6 + 1;
  if (SCARRY4(iVar6,1)) {
    uStack_13b4 = 0xdb2f;
    uStack_13b2 = 0x7f;
    uVar7 = thunk_FUN_004072dc();
  }
  if (0xff < uVar7) {
    uStack_13b4 = 0xdb3b;
    uStack_13b2 = 0x7f;
    uVar7 = thunk_FUN_004072dc();
  }
  local_42 = (byte)uVar7;
  iVar6 = *(int *)(local_8 + 0x4b4);
  *(undefined4 *)(iVar6 + 0x1918d) = *(undefined4 *)(local_8 + 0x49c);
  uStack_13b4 = 0xdb6e;
  uStack_13b2 = 0x7f;
  FUN_0040c9a8(iVar6 + 0xab45,L"Retrievability [%]");
  uStack_13b4 = 0xdb80;
  uStack_13b2 = 0x7f;
  FUN_0040c9a8(iVar6 + 0xab49,L"Stabilization");
  *(undefined2 *)(iVar6 + 0x19171) = 0x14;
  *(undefined4 *)(iVar6 + 0x1912b) = 0;
  *(undefined4 *)(iVar6 + 0x1912f) = 0;
  *(undefined2 *)(iVar6 + 0x19133) = 0;
  *(undefined4 *)(iVar6 + 0x19135) = 0;
  *(undefined4 *)(iVar6 + 0x19139) = 0xc8000000;
  *(undefined2 *)(iVar6 + 0x1913d) = 0x4005;
  *(undefined2 *)(iVar6 + 0x1917d) = 0x15;
  *(undefined4 *)(iVar6 + 0x1913f) = 0;
  *(undefined4 *)(iVar6 + 0x19143) = 0;
  *(undefined2 *)(iVar6 + 0x19147) = 0;
  *(undefined4 *)(iVar6 + 0x19149) = 0;
  *(undefined4 *)(iVar6 + 0x1914d) = 0xf0000000;
  *(undefined2 *)(iVar6 + 0x19151) = 0x4002;
  *(undefined2 *)(iVar6 + 0x1917b) = 0xb;
  *(undefined1 *)(iVar6 + 0x1916f) = 0;
  *(undefined1 *)(iVar6 + 0x19170) = 0;
  *(undefined4 *)(iVar6 + 0x14) = 0;
  *(undefined4 *)(iVar6 + 0x18) = 0x40590000;
  local_3984 = 0;
  local_3980 = 0;
  *(undefined4 *)(iVar6 + 0x392c) = 0;
  *(undefined4 *)(iVar6 + 0x3930) = 0x40590000;
  *(undefined4 *)(iVar6 + 0x723c) = 0;
  *(undefined4 *)(iVar6 + 0x7240) = 0;
  local_41 = 1;
  do {
    uVar7 = 0x15 - local_41;
    fVar12 = in_ST0;
    fVar13 = in_ST1;
    fVar14 = in_ST2;
    fVar11 = in_ST3;
    fVar3 = in_ST4;
    fVar4 = in_ST5;
    fVar5 = in_ST6;
    if (SBORROW4(0x15,(uint)local_41)) {
      uStack_13b4 = 0xdc7e;
      uStack_13b2 = 0x7f;
      thunk_FUN_004072dc();
      uVar7 = extraout_EDX;
      fVar12 = in_ST0;
      fVar13 = in_ST1;
      fVar14 = in_ST2;
      fVar11 = in_ST3;
      fVar3 = in_ST4;
      fVar4 = in_ST5;
      fVar5 = in_ST6;
    }
    in_ST6 = in_ST7;
    in_ST5 = fVar5;
    in_ST4 = fVar4;
    in_ST3 = fVar3;
    in_ST2 = fVar11;
    in_ST1 = fVar14;
    in_ST0 = fVar13;
    if (0xff < uVar7) {
      uStack_13b4 = 0xdc8b;
      uStack_13b2 = 0x7f;
      thunk_FUN_004072dc();
      uVar7 = extraout_EDX_00;
    }
    local_44 = (byte)uVar7;
    uStack_13b4 = 0xdc96;
    uStack_13b2 = 0x7f;
    FUN_0070fd20(uVar7 & 0xff);
    *(double *)(iVar6 + 0x14 + (uint)local_41 * 8) = (double)(fVar12 * (float10)_DAT_007fe274);
    *(double *)(&local_3984 + (uint)local_41 * 2) =
         (double)(_DAT_007fe274 - (float)*(double *)(iVar6 + 0x14 + (uint)local_41 * 8));
    uVar7 = local_42 - 1;
    if (SBORROW4((uint)local_42,1)) {
      uStack_13b4 = 0xdcd7;
      uStack_13b2 = 0x7f;
      uVar7 = thunk_FUN_004072dc();
    }
    if (0x14 < uVar7) {
      uStack_13b4 = 0xdce1;
      uStack_13b2 = 0x7f;
      uVar7 = thunk_FUN_004072dc();
    }
    iVar8 = (int)((longlong)(int)uVar7 * 0x1b9);
    if ((longlong)iVar8 != (longlong)(int)uVar7 * 0x1b9) {
      uStack_13b4 = 0xdcee;
      uStack_13b2 = 0x7f;
      iVar8 = thunk_FUN_004072dc();
    }
    puVar9 = PTR_DAT_00ba979c + iVar8 * 4;
    uVar7 = local_43 - 1;
    if (SBORROW4((uint)local_43,1)) {
      uStack_13b4 = 0xdd06;
      uStack_13b2 = 0x7f;
      puVar9 = (undefined *)thunk_FUN_004072dc();
      uVar7 = extraout_EDX_01;
    }
    if (0x14 < uVar7) {
      uStack_13b4 = 0xdd10;
      uStack_13b2 = 0x7f;
      puVar9 = (undefined *)thunk_FUN_004072dc();
      uVar7 = extraout_EDX_02;
    }
    iVar8 = (int)((longlong)(int)uVar7 * 0x15);
    if ((longlong)iVar8 != (longlong)(int)uVar7 * 0x15) {
      uStack_13b4 = 0xdd1a;
      uStack_13b2 = 0x7f;
      puVar9 = (undefined *)thunk_FUN_004072dc();
      iVar8 = extraout_EDX_03;
    }
    puVar9 = puVar9 + iVar8 * 4;
    uVar7 = local_44 - 1;
    if (SBORROW4((uint)local_44,1)) {
      uStack_13b4 = 0xdd2c;
      uStack_13b2 = 0x7f;
      puVar9 = (undefined *)thunk_FUN_004072dc();
      uVar7 = extraout_EDX_04;
    }
    if (0x14 < uVar7) {
      uStack_13b4 = 0xdd36;
      uStack_13b2 = 0x7f;
      puVar9 = (undefined *)thunk_FUN_004072dc();
      uVar7 = extraout_EDX_05;
    }
    *(double *)(iVar6 + 0x7234 + (uint)local_41 * 8) = (double)*(int *)(puVar9 + uVar7 * 4);
    if (*(double *)(iVar6 + 0x7234 + (uint)local_41 * 8) == 0.0) {
      *(undefined8 *)(iVar6 + 0x3924 + (uint)local_41 * 8) = 0x3ff0000000000000;
    }
    else {
      uVar7 = local_42 - 1;
      if (SBORROW4((uint)local_42,1)) {
        uStack_13b4 = 0xdd73;
        uStack_13b2 = 0x7f;
        uVar7 = thunk_FUN_004072dc();
      }
      if (0x14 < uVar7) {
        uStack_13b4 = 0xdd7d;
        uStack_13b2 = 0x7f;
        uVar7 = thunk_FUN_004072dc();
      }
      iVar8 = (int)((longlong)(int)uVar7 * 0x1b9);
      if ((longlong)iVar8 != (longlong)(int)uVar7 * 0x1b9) {
        uStack_13b4 = 0xdd8a;
        uStack_13b2 = 0x7f;
        iVar8 = thunk_FUN_004072dc();
      }
      puVar9 = PTR_DAT_00baa204 + iVar8 * 8;
      uVar7 = local_43 - 1;
      if (SBORROW4((uint)local_43,1)) {
        uStack_13b4 = 0xdda2;
        uStack_13b2 = 0x7f;
        puVar9 = (undefined *)thunk_FUN_004072dc();
        uVar7 = extraout_EDX_06;
      }
      if (0x14 < uVar7) {
        uStack_13b4 = 0xddac;
        uStack_13b2 = 0x7f;
        puVar9 = (undefined *)thunk_FUN_004072dc();
        uVar7 = extraout_EDX_07;
      }
      iVar8 = (int)((longlong)(int)uVar7 * 0x15);
      if ((longlong)iVar8 != (longlong)(int)uVar7 * 0x15) {
        uStack_13b4 = 0xddb6;
        uStack_13b2 = 0x7f;
        puVar9 = (undefined *)thunk_FUN_004072dc();
        iVar8 = extraout_EDX_08;
      }
      puVar9 = puVar9 + iVar8 * 8;
      uVar7 = local_44 - 1;
      if (SBORROW4((uint)local_44,1)) {
        uStack_13b4 = 0xddc8;
        uStack_13b2 = 0x7f;
        puVar9 = (undefined *)thunk_FUN_004072dc();
        uVar7 = extraout_EDX_09;
      }
      if (0x14 < uVar7) {
        uStack_13b4 = 0xddd2;
        uStack_13b2 = 0x7f;
        puVar9 = (undefined *)thunk_FUN_004072dc();
        uVar7 = extraout_EDX_10;
      }
      *(undefined4 *)(iVar6 + 0x3924 + (uint)local_41 * 8) = *(undefined4 *)(puVar9 + uVar7 * 8);
      *(undefined4 *)(iVar6 + 0x3928 + (uint)local_41 * 8) = *(undefined4 *)(puVar9 + uVar7 * 8 + 4)
      ;
    }
    adStack_7294[local_41] = 1.0 - *(double *)(iVar6 + 0x3924 + (uint)local_41 * 8);
    local_41 = local_41 + 1;
    in_ST7 = in_ST6;
  } while (local_41 != 0x15);
  *(undefined4 *)(iVar6 + 0xb4) = 0;
  *(undefined4 *)(iVar6 + 0xb8) = 0x40260000;
  *(undefined1 *)(iVar6 + 0x19126) = 1;
  *(undefined1 *)(iVar6 + 0x19127) = 1;
  *(undefined1 *)(iVar6 + 0x19128) = 0;
  *(undefined1 *)(iVar6 + 0x19125) = 1;
  uStack_13b4 = 0xde73;
  uStack_13b2 = 0x7f;
  fVar12 = in_ST6;
  FUN_0070fba8(CONCAT31((int3)((uint)iVar6 >> 8),local_42));
  dVar1 = (double)in_ST0;
  uStack_13b8 = SUB84(dVar1,0);
  uStack_13b4 = (undefined2)((ulonglong)dVar1 >> 0x20);
  uStack_13b2 = (undefined2)((ulonglong)dVar1 >> 0x30);
  uStack_13bc = 0x7fde82;
  fVar13 = fVar12;
  FUN_0070fd68(local_43);
  dVar1 = (double)in_ST1;
  uStack_13c0 = SUB82(dVar1,0);
  uStack_13be = (undefined2)((ulonglong)dVar1 >> 0x10);
  uStack_13bc = (undefined4)((ulonglong)dVar1 >> 0x20);
  puStack_13c4 = &local_40;
  local_13c8 = 0x7fde9b;
  FUN_00710f2c(&local_14,&local_1c,local_3c);
  local_24 = (double)in_ST2;
  local_41 = 1;
  do {
    fVar11 = in_ST4;
    local_729c = (1.0 - *(double *)(iVar6 + 0x14 + (uint)local_41 * 8) / (double)_DAT_007fe274) *
                 local_14 + local_1c;
    uStack_13b4 = (undefined2)((ulonglong)local_729c >> 0x20);
    uStack_13b2 = (undefined2)((ulonglong)local_729c >> 0x30);
    uStack_13b8 = (undefined4)local_729c;
    uStack_13bc = 0x7fded7;
    fVar14 = fVar13;
    FUN_00b18dac();
    *(double *)(iVar6 + 0xace5 + (uint)local_41 * 8) = (double)in_ST3;
    if ((double)_DAT_007fe278 < *(double *)(iVar6 + 0xace5 + (uint)local_41 * 8)) {
      *(undefined4 *)(iVar6 + 0xace5 + (uint)local_41 * 8) = 0;
      *(undefined4 *)(iVar6 + 0xace9 + (uint)local_41 * 8) = 0x40490000;
    }
    if ((float10)*(double *)(iVar6 + 0xace5 + (uint)local_41 * 8) < _DAT_007fe27c) {
      *(undefined4 *)(iVar6 + 0xace5 + (uint)local_41 * 8) = 0x33333333;
      *(undefined4 *)(iVar6 + 0xace9 + (uint)local_41 * 8) = 0x3fd33333;
    }
    *(double *)(iVar6 + 0xe5f5 + (uint)local_41 * 8) =
         (*(double *)(iVar6 + 0xace5 + (uint)local_41 * 8) *
         *(double *)(iVar6 + 0x14 + (uint)local_41 * 8)) / (double)_DAT_007fe274;
    local_41 = local_41 + 1;
    in_ST3 = fVar11;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = fVar12;
    fVar12 = fVar13;
    fVar13 = fVar14;
  } while (local_41 != 0x15);
  uStack_13b4 = 0xdfa2;
  uStack_13b2 = 0x7f;
  FUN_0040c5c8(iVar6 + 0xab4d);
  fVar12 = (float10)local_14;
  uStack_13bc = SUB104(fVar12,0);
  uStack_13b8 = (undefined4)((unkuint10)fVar12 >> 0x20);
  uStack_13b4 = (undefined2)((unkuint10)fVar12 >> 0x40);
  uStack_13c0 = 0xdfbe;
  uStack_13be = 0x7f;
  FUN_00409cb4(0,2,local_739c);
  uStack_13c0 = 0xdfcc;
  uStack_13be = 0x7f;
  FUN_0040d710(&local_48,local_739c);
  fVar12 = (float10)local_1c;
  local_13c8 = SUB104(fVar12,0);
  puStack_13c4 = (undefined4 *)((unkuint10)fVar12 >> 0x20);
  uStack_13c0 = (undefined2)((unkuint10)fVar12 >> 0x40);
  uStack_13cc = 0xdfe8;
  uStack_13ca = 0x7f;
  FUN_00409cb4(0,2,local_739c);
  uStack_13cc = 0xdff6;
  uStack_13ca = 0x7f;
  FUN_0040d710(&local_4c,local_739c);
  local_13d4 = SUB108((float10)local_14 + (float10)local_1c,0);
  uStack_13cc = (undefined2)((unkuint10)((float10)local_14 + (float10)local_1c) >> 0x40);
  uStack_13d8 = 0xe008;
  uStack_13d6 = 0x7f;
  FUN_00407b58();
  local_34 = (double)fVar11;
  if ((double)_DAT_007fe278 < local_34) {
    local_34 = 50.0;
  }
  fVar12 = (float10)1 + (float10)local_34;
  uStack_13cc = 0xe031;
  uStack_13ca = 0x7f;
  uVar10 = FUN_00407bcc();
  local_729c = (double)CONCAT44(extraout_EDX_11,uVar10);
  *(float10 *)(iVar6 + 0x19149) = (float10)(longlong)local_729c;
  local_13d4 = SUB108((float10)local_34,0);
  uStack_13cc = (undefined2)((unkuint10)(float10)local_34 >> 0x40);
  uStack_13d8 = 0xe069;
  uStack_13d6 = 0x7f;
  FUN_00409cb4(0,2,local_739c);
  uStack_13d8 = 0xe077;
  uStack_13d6 = 0x7f;
  FUN_0040d710(&local_54,local_739c);
  local_13e0 = SUB108((float10)local_1c,0);
  uStack_13d8 = (undefined2)((unkuint10)(float10)local_1c >> 0x40);
  uStack_13e4 = 0x7fe086;
  FUN_00407b58();
  local_2c = (double)fVar12;
  local_13e0 = SUB108((float10)local_2c,0);
  uStack_13d8 = (undefined2)((unkuint10)(float10)local_2c >> 0x40);
  uStack_13e4 = 0x7fe0a6;
  FUN_00409cb4(0,2,local_739c);
  uStack_13e4 = 0x7fe0b4;
  FUN_0040d710(&local_50,local_739c);
  uStack_13e4 = *(undefined4 *)(iVar6 + 0xab4d);
  pwStack_13e8 = L"SIncMin=";
  uStack_13ec = local_50;
  uStack_13f0 = 0x7fe0d7;
  FUN_0040d87c(iVar6 + 0xab4d,3);
  uStack_13f0 = *(undefined4 *)(iVar6 + 0xab4d);
  pwStack_13f4 = L"   SIncMax=";
  uStack_13f8 = local_54;
  uStack_13fc = 0xe0fa;
  uStack_13fa = 0x7f;
  FUN_0040d87c(iVar6 + 0xab4d,3);
  local_1404 = SUB108((float10)local_24,0);
  uStack_13fc = (undefined2)((unkuint10)(float10)local_24 >> 0x40);
  uStack_1408 = 0x7fe116;
  FUN_00409cb4(0,2,local_739c);
  uStack_1408 = 0x7fe124;
  FUN_0040d710(&local_58,local_739c);
  uStack_1408 = *(undefined4 *)(iVar6 + 0xab4d);
  pwStack_140c = L"  Stab90=";
  uStack_1410 = local_58;
  uStack_1414 = 0x7fe147;
  FUN_0040d87c(iVar6 + 0xab4d,3);
  uStack_1414 = *(undefined4 *)(iVar6 + 0xab4d);
  pwStack_1418 = L"  Gain=";
  uStack_141c = local_48;
  uStack_1420 = 0x7fe16a;
  FUN_0040d87c(iVar6 + 0xab4d,3);
  uStack_1420 = *(undefined4 *)(iVar6 + 0xab4d);
  pwStack_1424 = L"  SInc=";
  uStack_1428 = local_54;
  pwStack_142c = L"*exp(-";
  uStack_1430 = local_48;
  puStack_1434 = &DAT_007fe34c;
  puStack_1438 = (undefined1 *)0x7fe19a;
  FUN_0040d87c(iVar6 + 0xab4d,6);
  puStack_1438 = (undefined1 *)0x7fe1aa;
  FUN_004090d4(local_40,0,local_739c);
  puStack_1438 = (undefined1 *)0x7fe1b8;
  FUN_0040d710(&local_58,local_739c);
  puStack_1438 = *(undefined1 **)(iVar6 + 0xab4d);
  pwStack_143c = L"  Cases=";
  uStack_1440 = local_58;
  uStack_1444 = 0x7fe1db;
  FUN_0040d87c(iVar6 + 0xab4d,3);
  *(undefined1 *)(iVar6 + 0xab44) = 0;
  uStack_1444 = 0x7fe1ed;
  FUN_00801388(iVar6);
  puVar2 = puStack_1438;
  *in_FS_OFFSET = uStack_1440;
  puStack_1438 = &LAB_007fe20f;
  pwStack_143c = (wchar_t *)0x7fe207;
  FUN_0040c628(&local_58,5,puVar2);
  return;
}



// === FUN_008055f4 @ 008055f4 size:975 ===

void FUN_008055f4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  
  puStack_28 = &stack0xfffffffc;
  puStack_2c = &LAB_008059d4;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  *(undefined4 *)PTR_DAT_00baac64 = 1;
  iVar1 = *(int *)((int)param_1 + 0x3d9);
  uVar2 = FUN_00965380(PTR_LAB_009635dc,1,0);
  *(undefined4 *)(iVar1 + 4) = uVar2;
  switch(*PTR_DAT_00baa820) {
  case 0:
    FUN_0040c9a8(iVar1 + 0xab49,L"Repetitions");
    FUN_00960d34(*(undefined4 *)PTR_DAT_00ba9c04,iVar1 + 4,DAT_00805a28);
    *(undefined1 *)(iVar1 + 0x1915e) = 1;
    break;
  case 1:
    FUN_0040c9a8(iVar1 + 0xab49,L"Item Repetitions");
    FUN_00960d34(*(undefined4 *)PTR_DAT_00ba9c04,iVar1 + 4,DAT_00805a5c);
    *(undefined1 *)(iVar1 + 0x1915e) = 1;
    break;
  case 2:
    FUN_0040c9a8(iVar1 + 0xab49,L"Topic Reviews");
    FUN_00960d34(*(undefined4 *)PTR_DAT_00ba9c04,iVar1 + 4,DAT_00805a88);
    *(undefined1 *)(iVar1 + 0x1915e) = 1;
    break;
  case 3:
    FUN_0040c9a8(iVar1 + 0xab49,L"Retention [%]");
    FUN_008960c4(iVar1 + 4,3,0);
    *(undefined4 *)PTR_DAT_00baac64 = 100;
    break;
  case 4:
    FUN_0040c9a8(iVar1 + 0xab49,L"Repetitions made");
    FUN_008960c4(iVar1 + 4,4,0);
    *(undefined1 *)(iVar1 + 0x1915e) = 1;
    break;
  case 5:
    FUN_0040c9a8(iVar1 + 0xab49,L"New items");
    FUN_008960c4(iVar1 + 4,5,0);
    *(undefined1 *)(iVar1 + 0x1915e) = 1;
  }
  *(int *)(iVar1 + 0x1918d) = param_1[0xf5];
  (**(code **)(*param_1 + 0x28))(param_1,L"Workload");
  FUN_0040c9a8(iVar1 + 0xab45,&DAT_00805b30);
  FUN_0040c5c8(iVar1 + 0xab4d);
  *(undefined1 *)(iVar1 + 0xab44) = 1;
  uVar3 = *(uint *)(*(int *)(iVar1 + 4) + 5);
  if (0xffff < uVar3) {
    uVar3 = thunk_FUN_004072dc();
  }
  *(short *)(iVar1 + 0x19171) = (short)uVar3;
  *(undefined4 *)(iVar1 + 0x1913f) = 0;
  *(undefined4 *)(iVar1 + 0x19143) = 0;
  *(undefined2 *)(iVar1 + 0x19147) = 0;
  *(float10 *)(iVar1 + 0x19149) = (float10)1;
  *(undefined1 *)(iVar1 + 0x1915d) = 1;
  *(undefined1 *)(iVar1 + 0x1916f) = 0;
  *(undefined1 *)(iVar1 + 0x19170) = 0;
  *(undefined4 *)(iVar1 + 0x1915f) = 0;
  *(undefined4 *)(iVar1 + 0x19163) = 0;
  *(undefined2 *)(iVar1 + 0x1917d) = 0;
  *(undefined1 *)(iVar1 + 0x19125) = 1;
  if ((byte)*PTR_DAT_00baa820 < 3) {
    *(uint *)((int)param_1 + 0x3dd) = (uint)*(ushort *)(*(int *)PTR_DAT_00ba9c04 + 0x9b);
    *(uint *)(iVar1 + 8) = (uint)*(ushort *)(*(int *)PTR_DAT_00ba9c04 + 0x9b);
    iVar4 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
    iVar5 = iVar4 + -0xe;
    if (SBORROW4(iVar4,0xe)) {
      iVar5 = thunk_FUN_004072dc();
    }
    *(int *)((int)param_1 + 0x3e1) = iVar5;
    if (*(int *)((int)param_1 + 0x3e1) < (int)(uint)*(ushort *)(*(int *)PTR_DAT_00ba9c04 + 0x9b)) {
      *(uint *)((int)param_1 + 0x3e1) = (uint)*(ushort *)(*(int *)PTR_DAT_00ba9c04 + 0x9b);
    }
    iVar4 = *(int *)((int)param_1 + 0x3e1) + 0x16d;
    if (SCARRY4(*(int *)((int)param_1 + 0x3e1),0x16d)) {
      iVar4 = thunk_FUN_004072dc();
    }
    *(int *)((int)param_1 + 0x3e5) = iVar4;
    iVar4 = *(int *)((int)param_1 + 0x3e1) + 0x16d;
    if (SCARRY4(*(int *)((int)param_1 + 0x3e1),0x16d)) {
      iVar4 = thunk_FUN_004072dc();
    }
    *(int *)(iVar1 + 0xc) = iVar4;
  }
  else if ((byte)(*PTR_DAT_00baa820 - 3) < 3) {
    *(undefined4 *)((int)param_1 + 0x3dd) = 1;
    *(undefined4 *)(iVar1 + 8) = 1;
    uVar2 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
    *(undefined4 *)((int)param_1 + 0x3e5) = uVar2;
    uVar2 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
    uVar2 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
    *(undefined4 *)((int)param_1 + 0x3e1) = uVar2;
  }
  FUN_00804670(iVar1,iVar1 + 8,iVar1 + 0xc);
  FUN_0080545c(param_1);
  FUN_00805d20(param_1);
  FUN_005759d0(param_1[0xf4],*(undefined4 *)(*(int *)((int)param_1 + 0x3d9) + 8));
  *in_FS_OFFSET = 0;
  return;
}



// === FUN_0080bd70 @ 0080bd70 size:384 ===

void FUN_0080bd70(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  local_c = 0;
  puStack_24 = &LAB_0080bf10;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  uVar2 = 1;
  puStack_30 = &LAB_0080beda;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = param_1;
  FUN_00549fc8(*(undefined4 *)(param_1 + 0x434),&local_c);
  FUN_0040d98c(local_c,L"Workload");
  if ((bool)uVar2) {
    DAT_00ca3368 = 0;
  }
  FUN_0040d98c(local_c,L"Items only");
  if ((bool)uVar2) {
    DAT_00ca3368 = 1;
  }
  FUN_0040d98c(local_c,L"Topics only");
  if ((bool)uVar2) {
    DAT_00ca3368 = 2;
  }
  FUN_0040d98c(local_c,L"Retention");
  if ((bool)uVar2) {
    DAT_00ca3368 = 3;
  }
  FUN_0040d98c(local_c,L"Repetitions");
  if ((bool)uVar2) {
    DAT_00ca3368 = 4;
  }
  FUN_0040d98c(local_c,L"New items");
  if ((bool)uVar2) {
    DAT_00ca3368 = 5;
  }
  *(undefined2 *)(local_8 + 0x477) = 0;
  *(undefined2 *)(local_8 + 0x479) = 0;
  *(undefined2 *)(local_8 + 0x47b) = 0;
  if (*(int *)(*(int *)(local_8 + 0x3d8) + 0x304) == *(int *)(local_8 + 0x3dc)) {
    FUN_0080c21c(local_8);
  }
  else if (*(int *)(*(int *)(local_8 + 0x3d8) + 0x304) == *(int *)(local_8 + 0x3e0)) {
    FUN_0080c044(local_8);
  }
  else {
    (**(code **)(**(int **)PTR_DAT_00ba9784 + 0xb8))();
    FUN_008055f4(*(undefined4 *)PTR_DAT_00ba9784);
    FUN_00805b88(*(undefined4 *)PTR_DAT_00ba9784);
  }
  FUN_0080923c(local_8);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_34;
  *in_FS_OFFSET = local_28;
  puStack_20 = &LAB_0080bf17;
  puStack_24 = (undefined1 *)0x80bf0f;
  FUN_0040c5c8(&local_c,local_28,puVar1);
  return;
}



// === FUN_00811974 @ 00811974 size:628 ===

void FUN_00811974(undefined4 *param_1,undefined4 *param_2)

{
  double dVar1;
  undefined1 *puVar2;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 local_ec;
  undefined1 local_e8 [4];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_dc [4];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [4];
  undefined4 local_cc;
  undefined4 local_c8;
  int *local_c4;
  undefined4 uStack_c0;
  undefined1 *puStack_bc;
  undefined1 *puStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  int *local_ac;
  undefined4 uStack_a8;
  int *piStack_a4;
  wchar_t *pwStack_a0;
  undefined4 uStack_9c;
  int *piStack_98;
  undefined4 uStack_94;
  int *piStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  int *piStack_84;
  wchar_t *pwStack_80;
  undefined4 uStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  int *piStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  int *piStack_64;
  wchar_t *pwStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  wchar_t *pwStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  int *local_24;
  int *local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_14 = (int *)0x20;
  do {
    local_14 = (int *)((int)local_14 + -1);
  } while (local_14 != (int *)0x0);
  LOCK();
  UNLOCK();
  local_10 = 0;
  _local_24 = (double)CONCAT44(unaff_EDI,&stack0xfffffffc);
  local_28 = &LAB_00811f4b;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_34 = &LAB_00811dff;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  uStack_3c = 0x8119c5;
  local_c = param_2;
  local_8 = param_1;
  FUN_0094da18(*(undefined4 *)PTR_DAT_00ba9c04,0,(int)&uStack_c0 + 2);
  uStack_3c = 0x8119cd;
  uStack_3c = FUN_00410d5c(&local_14);
  pwStack_40 = L"Interval";
  piStack_44 = (int *)*local_8;
  uStack_48 = 0x8119e1;
  (**(code **)(*piStack_44 + 0xbc))();
  uStack_48 = 0x8119e6;
  FUN_00412078();
  uStack_48 = 0x8119f1;
  uStack_48 = FUN_00410d5c(&local_c4);
  piStack_4c = local_14;
  piStack_50 = (int *)*local_c;
  uStack_54 = 0x811a01;
  (**(code **)(*piStack_50 + 0x54))();
  uStack_54 = 0x811a06;
  FUN_00412078();
  uStack_54 = 0x811a18;
  FUN_004282b0(local_b0._2_2_,&local_cc);
  uStack_54 = 0x811a29;
  FUN_0040d694(&local_c8,local_cc);
  uStack_54 = local_c8;
  piStack_58 = local_14;
  uStack_5c = 0x811a39;
  (**(code **)(*local_14 + 0x6c))();
  uStack_5c = 0x811a3e;
  FUN_00412078();
  uStack_5c = 0x811a46;
  uStack_5c = FUN_00410d5c(&local_14);
  pwStack_60 = L"Repetitions";
  piStack_64 = (int *)*local_8;
  uStack_68 = 0x811a5a;
  (**(code **)(*piStack_64 + 0xbc))();
  uStack_68 = 0x811a5f;
  FUN_00412078();
  uStack_68 = 0x811a6a;
  uStack_68 = FUN_00410d5c(local_d0);
  piStack_6c = local_14;
  piStack_70 = (int *)*local_c;
  uStack_74 = 0x811a7a;
  (**(code **)(*piStack_70 + 0x54))();
  uStack_74 = 0x811a7f;
  FUN_00412078();
  uStack_74 = 0x811a91;
  FUN_004282b0(uStack_b4._2_2_,&local_d8);
  uStack_74 = 0x811aa2;
  FUN_0040d694(&local_d4,local_d8);
  uStack_74 = local_d4;
  piStack_78 = local_14;
  uStack_7c = 0x811ab2;
  (**(code **)(*local_14 + 0x6c))();
  uStack_7c = 0x811ab7;
  FUN_00412078();
  uStack_7c = 0x811abf;
  uStack_7c = FUN_00410d5c(&local_14);
  pwStack_80 = L"Lapses";
  piStack_84 = (int *)*local_8;
  uStack_88 = 0x811ad3;
  (**(code **)(*piStack_84 + 0xbc))();
  uStack_88 = 0x811ad8;
  FUN_00412078();
  uStack_88 = 0x811ae3;
  uStack_88 = FUN_00410d5c(local_dc);
  piStack_8c = local_14;
  piStack_90 = (int *)*local_c;
  uStack_94 = 0x811af3;
  (**(code **)(*piStack_90 + 0x54))();
  uStack_94 = 0x811af8;
  FUN_00412078();
  uStack_94 = 0x811b0a;
  FUN_004282b0((uint)local_b0 & 0xffff,&local_e4);
  uStack_94 = 0x811b1b;
  FUN_0040d694(&local_e0,local_e4);
  uStack_94 = local_e0;
  piStack_98 = local_14;
  uStack_9c = 0x811b2b;
  (**(code **)(*local_14 + 0x6c))();
  uStack_9c = 0x811b30;
  FUN_00412078();
  uStack_9c = 0x811b38;
  uStack_9c = FUN_00410d5c(&local_14);
  pwStack_a0 = L"LastRepetition";
  piStack_a4 = (int *)*local_8;
  uStack_a8 = 0x811b4c;
  (**(code **)(*piStack_a4 + 0xbc))();
  uStack_a8 = 0x811b51;
  FUN_00412078();
  uStack_a8 = 0x811b5c;
  uStack_a8 = FUN_00410d5c(local_e8);
  local_ac = local_14;
  local_b0 = (int *)*local_c;
  uStack_b4 = (undefined1 *)0x811b6c;
  (**(code **)(*local_b0 + 0x54))();
  uStack_b4 = (undefined1 *)0x811b71;
  FUN_00412078();
  puStack_b8 = &LAB_00811be8;
  puStack_bc = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_bc;
  uStack_c0 = 0x811b92;
  uStack_b4 = &stack0xfffffffc;
  FUN_00961998(*(undefined4 *)PTR_DAT_00ba9c04,(int)(short)local_ac);
  dVar1 = (double)in_ST0;
  local_24 = SUB84(dVar1,0);
  local_c4 = local_24;
  local_c8 = 0x811baf;
  uStack_c0 = (int)((ulonglong)dVar1 >> 0x20);
  _local_24 = dVar1;
  FUN_0042d430(L"dd.mm.yyyy",PTR_DAT_00baa920,&local_28);
  uStack_c0 = 0x811bbd;
  FUN_0040d694(&local_ec,local_28);
  uStack_c0 = local_ec;
  local_c4 = local_14;
  local_c8 = 0x811bcd;
  (**(code **)(*local_14 + 0x6c))();
  local_c8 = 0x811bd2;
  FUN_00412078();
  puVar2 = puStack_bc;
  *in_FS_OFFSET = local_c4;
  puStack_bc = &LAB_00811bef;
  uStack_c0 = 0x811be7;
  FUN_0040c5c8(&local_28,local_c4,puVar2);
  return;
}



// === FUN_00812200 @ 00812200 size:1689 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00812200(undefined1 param_1,ushort param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  uint *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar5;
  float10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  wchar_t *pwVar11;
  undefined *puVar12;
  wchar_t *pwVar13;
  undefined *local_a8;
  undefined *local_a4;
  wchar_t *local_a0;
  undefined *local_9c;
  uint local_98;
  wchar_t *local_94;
  undefined *local_90;
  undefined *local_8c;
  undefined *local_88;
  int local_84;
  wchar_t *pwStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  uint local_78;
  undefined *local_74;
  uint uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined *local_68;
  wchar_t *local_64;
  undefined1 *puStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined *puStack_58;
  undefined1 *puStack_54;
  undefined *puStack_50;
  int local_4c;
  undefined2 local_48;
  undefined2 uStack_46;
  wchar_t *local_44;
  undefined *puStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  wchar_t *pwStack_38;
  uint local_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  uint local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = &stack0xfffffffc;
  local_10 = 0x14;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_8 = CONCAT13(param_1,(uint3)param_2);
  local_18 = &LAB_008128a3;
  local_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&local_1c;
  local_20 = (undefined1 *)0x812237;
  FUN_0094c204(*(undefined4 *)PTR_DAT_00ba9c04,&local_9c);
  local_20 = (undefined1 *)0x81224a;
  FUN_0040d7f4(&local_c,local_9c,L"\\advance.sub");
  local_20 = (undefined1 *)0x0;
  local_24 = 0x81225b;
  local_10 = FUN_00965380(PTR_LAB_009635dc,1,local_c);
  local_24 = 0x81226c;
  local_14 = (undefined1 *)FUN_0061c7ac(PTR_PTR_LAB_00b279c4,1,0);
  local_28 = *(uint *)(local_10 + 5);
  local_24 = (int)local_28 >> 0x1f;
  uStack_2c._0_2_ = 0x2285;
  uStack_2c._2_2_ = 0x81;
  FUN_00b29314(local_14,L"Advancing element review date");
  uStack_2c._0_2_ = 0x2295;
  uStack_2c._2_2_ = 0x81;
  FUN_00aeab20(*(undefined4 *)PTR_DAT_00ba982c,1,1);
  DAT_00ca3394 = 0;
  _DAT_00ca3398 = 0;
  _DAT_00ca339c = 0;
  _DAT_00ca33b0 = 0;
  _DAT_00ca33b4 = 0;
  _DAT_00ca33d0 = 0;
  _DAT_00ca33d4 = 0;
  _DAT_00ca33d8 = 0;
  _DAT_00ca33dc = 0;
  _DAT_00ca33b8 = 0;
  _DAT_00ca33bc = 0;
  _DAT_00ca33c0 = 0;
  _DAT_00ca33c4 = 0;
  _DAT_00ca33c8 = 0;
  _DAT_00ca33cc = 0;
  uStack_2c._0_2_ = 0x2311;
  uStack_2c._2_2_ = 0x81;
  FUN_0040a340(*(int *)PTR_DAT_00ba9c04 + 0x2ee);
  _DAT_00ca33a8 = (double)in_ST0;
  uStack_2c._0_2_ = 0x2329;
  uStack_2c._2_2_ = 0x81;
  FUN_0040a340(*(int *)PTR_DAT_00ba9c04 + 0x93);
  _DAT_00ca33a0 = (double)in_ST1;
  if (0 < *(int *)(local_10 + 5)) {
    local_18 = (undefined1 *)0x1;
    local_20 = (undefined1 *)*(int *)(local_10 + 5);
    do {
      if ((int)local_18 % 10 == 0) {
        uStack_2c._0_2_ = 0x235b;
        uStack_2c._2_2_ = 0x81;
        cVar3 = FUN_00b2a0ec(local_14);
        if (cVar3 != '\0') break;
        fVar5 = (float10)(int)local_18;
        local_34 = SUB104(fVar5,0);
        puStack_30 = (undefined1 *)((unkuint10)fVar5 >> 0x20);
        uStack_2c._0_2_ = (undefined2)((unkuint10)fVar5 >> 0x40);
        pwStack_38 = 
        L"뜏鐅쨳㌀勒멐⤬\x81䖋\xe8f0朣1喋诬\xf445죨ᔜ褀\xe845綃èུ警ﱍ喊诿\xe845瓨\b＀\xec45䷿痤ꆐ頬º\x8b邋ญ"
        ;
        FUN_00b2a9a4(local_14);
        local_28 = (uint)DAT_00ca3394;
        pwStack_38 = (wchar_t *)0x0;
        puStack_40 = (undefined *)0x812389;
        FUN_00b28aac(local_14,L"Advanced");
      }
      uStack_2c._0_2_ = 0x2394;
      uStack_2c._2_2_ = 0x81;
      local_1c = FUN_0096405c(local_10,local_18);
      if (local_1c != 0) {
        uStack_2c._0_2_ = 0x23ac;
        uStack_2c._2_2_ = 0x81;
        FUN_00812c20(local_1c,local_8 >> 0x18,CONCAT22(extraout_var_03,(undefined2)local_8));
      }
      local_18 = local_18 + 1;
      local_20 = (undefined1 *)((int)local_20 + -1);
    } while (local_20 != (undefined1 *)0x0);
  }
  uStack_2c._0_2_ = 0x23c9;
  uStack_2c._2_2_ = 0x81;
  iVar4 = FUN_00964030(local_10,*(undefined4 *)(*(int *)PTR_DAT_00ba982c + 0xe0d));
  if (iVar4 != 0) {
    uStack_2c._0_2_ = 0x23e6;
    uStack_2c._2_2_ = 0x81;
    FUN_0088f0ac(*(undefined4 *)PTR_DAT_00baabf4,*(undefined4 *)(*(int *)PTR_DAT_00ba982c + 0xe0d));
  }
  uStack_2c._0_2_ = 0x23f2;
  uStack_2c._2_2_ = 0x81;
  FUN_00944928(*(undefined4 *)PTR_DAT_00ba9c04);
  uStack_2c._0_2_ = 0x23fa;
  uStack_2c._2_2_ = 0x81;
  FUN_0040a7a0(local_10);
  uStack_2c._0_2_ = 0x2402;
  uStack_2c._2_2_ = 0x81;
  FUN_00b2a8d8(local_14);
  if (DAT_00ca3394 != 0) {
    puStack_30 = &LAB_00812828;
    local_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = (uint)&local_34;
    pwStack_38 = L"Elements advanced: ";
    uStack_3c = 0x2435;
    uStack_3a = 0x81;
    uStack_2c = &stack0xfffffffc;
    FUN_004282b0(DAT_00ca3394,&local_a0);
    uStack_3c = SUB42(local_a0,0);
    uStack_3a = (undefined2)((uint)local_a0 >> 0x10);
    puStack_40 = &DAT_00812980;
    local_44 = L"Interval change: ";
    local_48 = 0x2452;
    uStack_46 = 0x81;
    FUN_0040d87c(&local_28,4);
    local_a4 = (undefined *)(uint)DAT_00ca3394;
    fVar5 = (float10)(double)CONCAT44(_DAT_00ca33c4,_DAT_00ca33c0) / (float10)(int)local_a4;
    puStack_50 = SUB104(fVar5,0);
    local_4c = (int)((unkuint10)fVar5 >> 0x20);
    local_48 = (undefined2)((unkuint10)fVar5 >> 0x40);
    puStack_54 = (undefined1 *)0x812485;
    FUN_0042bc74(L"0.00",PTR_DAT_00baa920,&local_24);
    local_a4 = (undefined *)(uint)DAT_00ca3394;
    fVar5 = (float10)(double)CONCAT44(_DAT_00ca33cc,_DAT_00ca33c8) / (float10)(int)local_a4;
    puStack_50 = SUB104(fVar5,0);
    local_4c = (int)((unkuint10)fVar5 >> 0x20);
    local_48 = (undefined2)((unkuint10)fVar5 >> 0x40);
    puStack_54 = (undefined1 *)0x8124b8;
    FUN_0042bc74(L"0.00",PTR_DAT_00baa920,&uStack_2c);
    local_a4 = (undefined *)(uint)DAT_00ca3394;
    fVar5 = (float10)(double)CONCAT44(_DAT_00ca339c,_DAT_00ca3398) / (float10)(int)local_a4;
    puStack_50 = SUB104(fVar5,0);
    local_4c = (int)((unkuint10)fVar5 >> 0x20);
    local_48 = (undefined2)((unkuint10)fVar5 >> 0x40);
    puStack_54 = (undefined1 *)0x8124eb;
    FUN_0042bc74(L"0.00",PTR_DAT_00baa920,&puStack_30);
    fVar5 = (float10)_DAT_00ca33a0;
    puStack_50 = SUB104(fVar5,0);
    local_4c = (int)((unkuint10)fVar5 >> 0x20);
    local_48 = (undefined2)((unkuint10)fVar5 >> 0x40);
    puStack_54 = (undefined1 *)0x81250b;
    FUN_0042bc74(L"0.####",PTR_DAT_00baa920,&local_34);
    local_48 = 0x251c;
    uStack_46 = 0x81;
    FUN_0040a340(*(int *)PTR_DAT_00ba9c04 + 0x93);
    local_44 = (wchar_t *)in_ST2;
    puStack_40 = (undefined *)((unkuint10)in_ST2 >> 0x20);
    uStack_3c = (undefined2)((unkuint10)in_ST2 >> 0x40);
    local_48 = uStack_3c;
    local_4c = (int)puStack_40;
    puStack_50 = (undefined *)local_44;
    puStack_54 = (undefined1 *)0x81253e;
    uStack_46 = extraout_var;
    FUN_0042bc74(L"0.####",PTR_DAT_00baa920,&local_48);
    fVar5 = (float10)_DAT_00ca33a8;
    puStack_50 = SUB104(fVar5,0);
    local_4c = (int)((unkuint10)fVar5 >> 0x20);
    local_48 = (undefined2)((unkuint10)fVar5 >> 0x40);
    puStack_54 = (undefined1 *)0x81255e;
    FUN_0042bc74(L"0.####",PTR_DAT_00baa920,&local_4c);
    local_48 = 0x256f;
    uStack_46 = 0x81;
    FUN_0040a340(*(int *)PTR_DAT_00ba9c04 + 0x2ee);
    local_64 = (wchar_t *)in_ST3;
    puStack_60 = (undefined1 *)((unkuint10)in_ST3 >> 0x20);
    uStack_5c = (undefined2)((unkuint10)in_ST3 >> 0x40);
    local_48 = uStack_5c;
    local_4c = (int)puStack_60;
    puStack_50 = (undefined *)local_64;
    puStack_54 = (undefined1 *)0x812591;
    uStack_46 = extraout_var_00;
    FUN_0042bc74(L"0.####",PTR_DAT_00baa920,&local_68);
    local_48 = 0x25a2;
    uStack_46 = 0x81;
    FUN_0040a340(*(int *)PTR_DAT_00ba9c04 + 0x93);
    in_ST4 = in_ST4 - (float10)_DAT_00ca33a0;
    local_74 = SUB104(in_ST4,0);
    uStack_70 = (uint)((unkuint10)in_ST4 >> 0x20);
    uStack_6c = (undefined2)((unkuint10)in_ST4 >> 0x40);
    local_48 = uStack_6c;
    local_4c = uStack_70;
    puStack_50 = local_74;
    puStack_54 = (undefined1 *)0x8125ca;
    uStack_46 = extraout_var_01;
    FUN_0042bc74(L"0.####",PTR_DAT_00baa920,&local_78);
    local_48 = 0x25db;
    uStack_46 = 0x81;
    FUN_0040a340(*(int *)PTR_DAT_00ba9c04 + 0x2ee);
    in_ST5 = in_ST5 - (float10)_DAT_00ca33a8;
    local_84 = SUB104(in_ST5,0);
    pwStack_80 = (wchar_t *)((unkuint10)in_ST5 >> 0x20);
    uStack_7c = (undefined2)((unkuint10)in_ST5 >> 0x40);
    local_48 = uStack_7c;
    local_4c = (int)pwStack_80;
    puStack_50 = (undefined *)local_84;
    puStack_54 = (undefined1 *)0x812606;
    uStack_46 = extraout_var_02;
    FUN_0042bc74(L"0.####",PTR_DAT_00baa920,&local_88);
    local_a4 = (undefined *)(uint)DAT_00ca3394;
    fVar5 = (float10)(double)CONCAT44(_DAT_00ca33d4,_DAT_00ca33d0) / (float10)(int)local_a4;
    puStack_50 = SUB104(fVar5,0);
    local_4c = (int)((unkuint10)fVar5 >> 0x20);
    local_48 = (undefined2)((unkuint10)fVar5 >> 0x40);
    puStack_54 = (undefined1 *)0x81263c;
    FUN_0042bc74(L"0.####",PTR_DAT_00baa920,&local_8c);
    local_a4 = (undefined *)(uint)DAT_00ca3394;
    fVar5 = (float10)(double)CONCAT44(_DAT_00ca33dc,_DAT_00ca33d8) / (float10)(int)local_a4;
    puStack_50 = SUB104(fVar5,0);
    local_4c = (int)((unkuint10)fVar5 >> 0x20);
    local_48 = (undefined2)((unkuint10)fVar5 >> 0x40);
    puStack_54 = (undefined1 *)0x812672;
    FUN_0042bc74(L"0.00",PTR_DAT_00baa920,&local_90);
    local_a4 = (undefined *)(uint)DAT_00ca3394;
    fVar5 = (float10)(double)CONCAT44(_DAT_00ca33b4,_DAT_00ca33b0) / (float10)(int)local_a4;
    puStack_50 = SUB104(fVar5,0);
    local_4c = (int)((unkuint10)fVar5 >> 0x20);
    local_48 = (undefined2)((unkuint10)fVar5 >> 0x40);
    puStack_54 = (undefined1 *)0x8126a8;
    FUN_0042bc74(L"0.00",PTR_DAT_00baa920,&local_94);
    local_a4 = (undefined *)(uint)DAT_00ca3394;
    fVar5 = (float10)(double)CONCAT44(_DAT_00ca33bc,_DAT_00ca33b8) / (float10)(int)local_a4;
    puStack_50 = SUB104(fVar5,0);
    local_4c = (int)((unkuint10)fVar5 >> 0x20);
    local_48 = (undefined2)((unkuint10)fVar5 >> 0x40);
    puStack_54 = (undefined1 *)0x8126de;
    FUN_0042bc74(L"0.00",PTR_DAT_00baa920,&local_98);
    uVar1 = local_28;
    local_48 = (undefined2)local_28;
    uStack_46 = (undefined2)(local_28 >> 0x10);
    local_4c = local_24;
    puStack_50 = &DAT_008129f8;
    puStack_54 = uStack_2c;
    puStack_58 = &DAT_00812980;
    uStack_5c = 0x2a0c;
    uStack_5a = 0x81;
    puStack_60 = puStack_30;
    local_64 = L" days";
    local_68 = &DAT_00812980;
    uStack_6c = 0x2a5c;
    uStack_6a = 0x81;
    uStack_70 = local_34;
    local_74 = &DAT_008129f8;
    local_98 = local_28;
    uStack_7c = 0x2980;
    uStack_7a = 0x81;
    pwStack_80 = L"Topic burden change: ";
    local_84 = local_24;
    local_88 = &DAT_008129f8;
    local_8c = &DAT_00812980;
    local_90 = &DAT_00812980;
    local_94 = L"Item burden difference: ";
    local_9c = &DAT_00812980;
    local_a0 = L"Topic burden difference: ";
    local_a4 = &DAT_008129f8;
    local_a8 = &DAT_00812980;
    pwVar13 = L"Priority change: ";
    puVar12 = &DAT_00812980;
    pwVar11 = L"% ->";
    puVar10 = &DAT_00812980;
    puVar9 = &DAT_00812b94;
    puVar8 = &DAT_00812980;
    pwVar7 = L"A-Factor change: ";
    pwVar6 = L"Item burden difference: ";
    local_78 = local_98;
    FUN_0040d87c(&local_a8,0x23);
    FUN_00b2e42c(local_a8);
    *in_FS_OFFSET = uVar1;
    FUN_0040c5c8(&local_98,uVar1,pwVar6,0x81283c,pwVar7,puVar8,puVar9,puVar10,pwVar11,puVar12,
                 pwVar13);
    FUN_0040c5c8(&local_94);
    FUN_0040c5c8(&local_90);
    FUN_0040c5c8(&local_8c);
    FUN_0040c5c8(&local_88);
    FUN_0040c5c8(&local_78);
    FUN_0040c5c8(&local_68);
    FUN_0040c5c8(&local_4c);
    FUN_0040c5c8(&local_48);
    FUN_0040c5c8(&local_34);
    FUN_0040c5c8(&puStack_30);
    FUN_0040c5c8(&uStack_2c);
    FUN_0040c5c8(&local_28);
    FUN_0040c5c8(&local_24);
    return;
  }
  uStack_2c._0_2_ = 0x283c;
  uStack_2c._2_2_ = 0x81;
  FUN_00b2e42c(L"No elements qualify for advancement");
  uStack_2c._0_2_ = 0x2848;
  uStack_2c._2_2_ = 0x81;
  FUN_0085faac(*(undefined4 *)PTR_DAT_00baabf8);
  puVar2 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_008128aa;
  local_24 = 0x812860;
  FUN_0040c5c8(&local_a8,local_28,puVar2);
  local_24 = 0x812870;
  FUN_0040c628(&local_a0,7);
  local_24 = 0x812878;
  FUN_0040c5c8(&local_78);
  local_24 = 0x812880;
  FUN_0040c5c8(&local_68);
  local_24 = 0x81288d;
  FUN_0040c628(&local_4c,2);
  local_24 = 0x81289a;
  FUN_0040c628(&local_34,5);
  local_24 = 0x8128a2;
  FUN_0040c5c8(&local_c);
  return;
}



// === FUN_0081b084 @ 0081b084 size:2100 ===

void FUN_0081b084(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  HWND pHVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_10 = (undefined1 *)0x81b098;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040c6ac(param_2);
  bVar3 = true;
  puStack_14 = &LAB_0081b8b8;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0040d98c(local_c,L"Alarm: Cancel");
  if (bVar3) {
    FUN_00771224(1);
  }
  else {
    FUN_0040d98c(local_c,L"Alarm: Set");
    if (bVar3) {
      FUN_00770190();
    }
    else {
      FUN_0040d98c(local_c,L"Ancestors: Show");
      if (bVar3) {
        FUN_00ad68f8(*(undefined4 *)PTR_DAT_00ba982c,0);
      }
      else {
        FUN_0040d98c(local_c,L"Bullet");
        if (bVar3) {
          FUN_00ad19ec(*(undefined4 *)PTR_DAT_00ba982c);
          LVar6 = *(LPARAM *)(*(int *)PTR_DAT_00ba982c + 0xe0d);
          WVar5 = 0;
          UVar4 = 0x42e;
          pHVar2 = (HWND)FUN_00553458(*(undefined4 *)PTR_DAT_00ba982c);
          PostMessageW(pHVar2,UVar4,WVar5,LVar6);
        }
        else {
          FUN_0040d98c(local_c,L"Capitalize text");
          if (bVar3) {
            FUN_00ac2918(*(undefined4 *)PTR_DAT_00ba982c,0);
          }
          else {
            FUN_0040d98c(local_c,L"Compress images");
            if (bVar3) {
              FUN_00add250(*(undefined4 *)PTR_DAT_00ba982c,0);
            }
            else {
              FUN_0040d98c(local_c,L"Concept: Link");
              if (bVar3) {
                FUN_00ae6314(*(undefined4 *)PTR_DAT_00ba982c,0);
              }
              else {
                FUN_0040d98c(local_c,L"Concept: Make");
                if (bVar3) {
                  FUN_00af0be0(*(undefined4 *)PTR_DAT_00ba982c,0);
                }
                else {
                  FUN_0040d98c(local_c,L"Delete after cursor");
                  if (bVar3) {
                    FUN_00adaacc(*(undefined4 *)PTR_DAT_00ba982c);
                  }
                  else {
                    FUN_0040d98c(local_c,L"Delete before cursor");
                    if (bVar3) {
                      FUN_00adaa8c(*(undefined4 *)PTR_DAT_00ba982c);
                    }
                    else {
                      FUN_0040d98c(local_c,L"Deprecate article");
                      if (bVar3) {
                        FUN_00aea57c(*(undefined4 *)PTR_DAT_00ba982c,0);
                      }
                      else {
                        FUN_0040d98c(local_c,L"Done!");
                        if (bVar3) {
                          FUN_00ad9894(*(undefined4 *)PTR_DAT_00ba982c,0);
                        }
                        else {
                          FUN_0040d98c(local_c,L"Dismember");
                          if (bVar3) {
                            FUN_00af2744(*(undefined4 *)PTR_DAT_00ba982c,0);
                          }
                          else {
                            FUN_0040d98c(local_c,L"Duplicate element");
                            if (bVar3) {
                              FUN_00acc7c4(*(undefined4 *)PTR_DAT_00ba982c,0);
                            }
                            else {
                              FUN_0040d98c(local_c,L"E-mail: Answer");
                              if (bVar3) {
                                FUN_00aebe90(*(undefined4 *)PTR_DAT_00ba982c,0);
                              }
                              else {
                                FUN_0040d98c(local_c,L"E-mail: Paste");
                                if (bVar3) {
                                  FUN_00992264(*(undefined4 *)PTR_DAT_00ba9740,0);
                                }
                                else {
                                  FUN_0040d98c(local_c,L"Fit all pictures");
                                  if (bVar3) {
                                    FUN_00ae6454(*(undefined4 *)PTR_DAT_00ba982c,0);
                                  }
                                  else {
                                    FUN_0040d98c(local_c,L"Fit picture");
                                    if (bVar3) {
                                      FUN_00ae5bd0(*(undefined4 *)PTR_DAT_00ba982c,0);
                                    }
                                    else {
                                      FUN_0040d98c(local_c,L"Fit to component");
                                      if (bVar3) {
                                        FUN_00ad5508(*(undefined4 *)PTR_DAT_00ba982c,0);
                                      }
                                      else {
                                        FUN_0040d98c(local_c,L"Highlighter font");
                                        if (bVar3) {
                                          FUN_00acef64(*(undefined4 *)PTR_DAT_00ba982c,L"Highlight")
                                          ;
                                          LVar6 = *(LPARAM *)(*(int *)PTR_DAT_00ba982c + 0xe0d);
                                          WVar5 = 0;
                                          UVar4 = 0x42e;
                                          pHVar2 = (HWND)FUN_00553458(*(undefined4 *)
                                                                       PTR_DAT_00ba982c);
                                          PostMessageW(pHVar2,UVar4,WVar5,LVar6);
                                        }
                                        else {
                                          FUN_0040d98c(local_c,L"Highlight: Clear");
                                          if (bVar3) {
                                            FUN_00af514c(*(undefined4 *)PTR_DAT_00ba982c);
                                            FUN_0040c5c8(PTR_DAT_00baa048);
                                            FUN_0040c5c8(PTR_DAT_00baa140);
                                          }
                                          else {
                                            FUN_0040d98c(local_c,L"Highlight: Show");
                                            if (bVar3) {
                                              FUN_00af51a4(*(undefined4 *)PTR_DAT_00ba982c);
                                            }
                                            else {
                                              FUN_0040d98c(local_c,L"Horizontal line");
                                              if (bVar3) {
                                                FUN_00998670(*(undefined4 *)PTR_DAT_00ba9740,0);
                                                LVar6 = *(LPARAM *)
                                                         (*(int *)PTR_DAT_00ba982c + 0xe0d);
                                                WVar5 = 0;
                                                UVar4 = 0x42e;
                                                pHVar2 = (HWND)FUN_00553458(*(undefined4 *)
                                                                             PTR_DAT_00ba982c);
                                                PostMessageW(pHVar2,UVar4,WVar5,LVar6);
                                              }
                                              else {
                                                FUN_0040d98c(local_c,L"Hyperlink: Element");
                                                if (bVar3) {
                                                  FUN_00ad42b8(*(undefined4 *)PTR_DAT_00ba982c,0);
                                                  LVar6 = *(LPARAM *)
                                                           (*(int *)PTR_DAT_00ba982c + 0xe0d);
                                                  WVar5 = 0;
                                                  UVar4 = 0x42e;
                                                  pHVar2 = (HWND)FUN_00553458(*(undefined4 *)
                                                                               PTR_DAT_00ba982c);
                                                  PostMessageW(pHVar2,UVar4,WVar5,LVar6);
                                                }
                                                else {
                                                  FUN_0040d98c(local_c,L"Import file");
                                                  if (bVar3) {
                                                    FUN_00aed40c(*(undefined4 *)PTR_DAT_00ba982c);
                                                  }
                                                  else {
                                                    FUN_0040d98c(local_c,L"Link: Contents");
                                                    if (bVar3) {
                                                      FUN_00ae98b0(*(undefined4 *)PTR_DAT_00ba982c,0
                                                                  );
                                                    }
                                                    else {
                                                      FUN_0040d98c(local_c,L"Outstanding");
                                                      if (bVar3) {
                                                        FUN_0099fa80(*(undefined4 *)PTR_DAT_00ba9740
                                                                     ,0);
                                                      }
                                                      else {
                                                        FUN_0040d98c(local_c,L"Parse HTML");
                                                        if (bVar3) {
                                                          FUN_00ad86a4(*(undefined4 *)
                                                                        PTR_DAT_00ba982c,0);
                                                          LVar6 = *(LPARAM *)
                                                                   (*(int *)PTR_DAT_00ba982c + 0xe0d
                                                                   );
                                                          WVar5 = 0;
                                                          UVar4 = 0x42e;
                                                          pHVar2 = (HWND)FUN_00553458(*(undefined4 *
                                                                                       )
                                                  PTR_DAT_00ba982c);
                                                  PostMessageW(pHVar2,UVar4,WVar5,LVar6);
                                                  }
                                                  else {
                                                    FUN_0040d98c(local_c,L"Paste: Article");
                                                    if (bVar3) {
                                                      FUN_00990edc(*(undefined4 *)PTR_DAT_00ba9740,0
                                                                  );
                                                    }
                                                    else {
                                                      FUN_0040d98c(local_c,L"Plan");
                                                      if (bVar3) {
                                                        FUN_0099e720(*(undefined4 *)PTR_DAT_00ba9740
                                                                     ,0);
                                                      }
                                                      else {
                                                        FUN_0040d98c(local_c,L"Pronunciation: Add");
                                                        if (bVar3) {
                                                          FUN_0098e6dc(*(undefined4 *)
                                                                        PTR_DAT_00ba9740,0);
                                                        }
                                                        else {
                                                          FUN_0040d98c(local_c,L"Reference: Edit");
                                                          if (bVar3) {
                                                            FUN_00aea43c(*(undefined4 *)
                                                                          PTR_DAT_00ba982c,0);
                                                          }
                                                          else {
                                                            FUN_0040d98c(local_c,L"Reference: Show")
                                                            ;
                                                            if (bVar3) {
                                                              FUN_00ab791c(*(undefined4 *)
                                                                            PTR_DAT_00ba982c,0);
                                                            }
                                                            else {
                                                              FUN_0040d98c(local_c,
                                                  L"Remove formatting: Front");
                                                  if (bVar3) {
                                                    FUN_00af2534(*(undefined4 *)PTR_DAT_00ba982c,0);
                                                    FUN_00ada3ac(*(undefined4 *)PTR_DAT_00ba982c,
                                                                 *(undefined1 *)
                                                                  (*(int *)PTR_DAT_00ba982c + 0x1219
                                                                  ),2);
                                                  }
                                                  else {
                                                    FUN_0040d98c(local_c,
                                                  L"Remove formatting: Plain text");
                                                  if (bVar3) {
                                                    FUN_00ac7b10(*(undefined4 *)PTR_DAT_00ba982c,0);
                                                  }
                                                  else {
                                                    FUN_0040d98c(local_c,
                                                  L"Remove formatting: Selection");
                                                  if (bVar3) {
                                                    FUN_00ad86a4(*(undefined4 *)PTR_DAT_00ba982c,0);
                                                    LVar6 = *(LPARAM *)
                                                             (*(int *)PTR_DAT_00ba982c + 0xe0d);
                                                    WVar5 = 0;
                                                    UVar4 = 0x42e;
                                                    pHVar2 = (HWND)FUN_00553458(*(undefined4 *)
                                                                                 PTR_DAT_00ba982c);
                                                    PostMessageW(pHVar2,UVar4,WVar5,LVar6);
                                                  }
                                                  else {
                                                    FUN_0040d98c(local_c,L"Reopen favorite");
                                                    if (bVar3) {
                                                      FUN_00998bc4(*(undefined4 *)PTR_DAT_00ba9740,0
                                                                  );
                                                    }
                                                    else {
                                                      FUN_0040d98c(local_c,L"Save file");
                                                      if (bVar3) {
                                                        FUN_00af5ca0(*(undefined4 *)PTR_DAT_00ba982c
                                                                     ,0);
                                                      }
                                                      else {
                                                        FUN_0040d98c(local_c,L"Search web");
                                                        if (bVar3) {
                                                          FUN_00af45c4(*(undefined4 *)
                                                                        PTR_DAT_00ba982c,0);
                                                        }
                                                        else {
                                                          FUN_0040d98c(local_c,L"Sleep Chart");
                                                          if (bVar3) {
                                                            FUN_00993204(*(undefined4 *)
                                                                          PTR_DAT_00ba9740,0);
                                                          }
                                                          else {
                                                            FUN_0040d98c(local_c,L"Sort repetitions"
                                                                        );
                                                            if (bVar3) {
                                                              FUN_00994e30(*(undefined4 *)
                                                                            PTR_DAT_00ba9740,0);
                                                            }
                                                            else {
                                                              FUN_0040d98c(local_c,
                                                  L"Split: Split the article");
                                                  if (bVar3) {
                                                    FUN_00ae162c(*(undefined4 *)PTR_DAT_00ba982c,0);
                                                  }
                                                  else {
                                                    FUN_0040d98c(local_c,L"Subset: Add");
                                                    if (bVar3) {
                                                      FUN_00af6ba8(*(undefined4 *)PTR_DAT_00ba982c,0
                                                                  );
                                                    }
                                                    else {
                                                      FUN_0040d98c(local_c,L"Template: Apply");
                                                      if (bVar3) {
                                                        FUN_00abc734(*(undefined4 *)PTR_DAT_00ba982c
                                                                    );
                                                      }
                                                      else {
                                                        FUN_0040d98c(local_c,L"Template: Detach");
                                                        if (bVar3) {
                                                          FUN_00ac40f8(*(undefined4 *)
                                                                        PTR_DAT_00ba982c);
                                                        }
                                                        else {
                                                          FUN_0040d98c(local_c,L"Template: Impose");
                                                          if (bVar3) {
                                                            FUN_00abcf30(*(undefined4 *)
                                                                          PTR_DAT_00ba982c,0);
                                                          }
                                                          else {
                                                            FUN_0040d98c(local_c,L"Tile components")
                                                            ;
                                                            if (bVar3) {
                                                              FUN_00add058(*(undefined4 *)
                                                                            PTR_DAT_00ba982c,0);
                                                              LVar6 = *(LPARAM *)
                                                                       (*(int *)PTR_DAT_00ba982c +
                                                                       0xe0d);
                                                              WVar5 = 0;
                                                              UVar4 = 0x42e;
                                                              pHVar2 = (HWND)FUN_00553458(*(
                                                  undefined4 *)PTR_DAT_00ba982c);
                                                  PostMessageW(pHVar2,UVar4,WVar5,LVar6);
                                                  }
                                                  else {
                                                    FUN_0040d98c(local_c,L"Tasklist: Add task");
                                                    if (bVar3) {
                                                      FUN_0099cff0(*(undefined4 *)PTR_DAT_00ba9740,0
                                                                  );
                                                    }
                                                    else {
                                                      FUN_0040d98c(local_c,L"Undo repetition");
                                                      if (bVar3) {
                                                        FUN_008aac74(*(undefined4 *)
                                                                      (*(int *)PTR_DAT_00ba982c +
                                                                      0xe0d));
                                                      }
                                                      else {
                                                        FUN_0040d98c(local_c,L"Unit: Convert");
                                                        if (bVar3) {
                                                          FUN_00ad24c4(*(undefined4 *)
                                                                        PTR_DAT_00ba982c);
                                                        }
                                                        else {
                                                          FUN_0040d98c(local_c,L"Unzoom image");
                                                          if (bVar3) {
                                                            FUN_00ac92ec(*(undefined4 *)
                                                                          PTR_DAT_00ba982c,0);
                                                          }
                                                          else {
                                                            FUN_0040d98c(local_c,L"Zoom image mode")
                                                            ;
                                                            if (bVar3) {
                                                              FUN_00ac8ff0(*(undefined4 *)
                                                                            PTR_DAT_00ba982c,0);
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0081b8bf;
  puStack_14 = (undefined1 *)0x81b8b7;
  FUN_0040c5c8(&local_c,uStack_18,puVar1);
  return;
}



// === FUN_00834088 @ 00834088 size:1030 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00834088(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  undefined *puVar8;
  undefined *puVar9;
  uint uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  uint uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  puStack_34 = (undefined1 *)0x8340ad;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040c6ac(param_3);
  puStack_38 = &LAB_008344ae;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_3c;
  puStack_44 = &LAB_0083446b;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_48;
  puStack_40 = &stack0xfffffffc;
  puStack_34 = &stack0xfffffffc;
  FUN_00833c90(local_8);
  *local_8 = local_c;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_1c);
  FUN_0040d79c(&local_1c,L"\\postpone.ini");
  local_14 = (int *)FUN_005041f4(PTR_PTR_LAB_00502988,1,local_1c);
  puVar9 = &DAT_008344f0;
  FUN_004282b0(*local_8,&local_20);
  puVar8 = &DAT_00834500;
  uVar5 = local_10;
  uVar7 = local_20;
  FUN_0040d87c(&local_18,4);
  uVar2 = (**(code **)(*local_14 + 0x14))
                    (local_14,local_18,L"Priority",*(undefined1 *)((int)local_8 + 5),uVar5,puVar8,
                     uVar7,puVar9);
  *(undefined1 *)((int)local_8 + 5) = uVar2;
  uVar4 = (**(code **)(*local_14 + 0xc))
                    (local_14,local_18,L"Priority limit",*(undefined2 *)(local_8 + 3));
  if (0xffff < uVar4) {
    uVar4 = thunk_FUN_004072dc();
  }
  *(short *)(local_8 + 3) = (short)uVar4;
  uVar4 = (**(code **)(*local_14 + 0xc))
                    (local_14,local_18,L"Item delay",*(undefined2 *)(local_8 + 4));
  if (0xffff < uVar4) {
    uVar4 = thunk_FUN_004072dc();
  }
  *(short *)(local_8 + 4) = (short)uVar4;
  uVar4 = (**(code **)(*local_14 + 0xc))
                    (local_14,local_18,L"Topic delay",*(undefined2 *)((int)local_8 + 0x12));
  if (0xffff < uVar4) {
    uVar4 = thunk_FUN_004072dc();
  }
  *(short *)((int)local_8 + 0x12) = (short)uVar4;
  uVar4 = (**(code **)(*local_14 + 0xc))
                    (local_14,local_18,L"Item max interval",*(undefined2 *)(local_8 + 5));
  if (0xffff < uVar4) {
    uVar4 = thunk_FUN_004072dc();
  }
  *(short *)(local_8 + 5) = (short)uVar4;
  uVar4 = (**(code **)(*local_14 + 0xc))
                    (local_14,local_18,L"Topic max interval",*(undefined2 *)((int)local_8 + 0x16));
  if (0xffff < uVar4) {
    uVar4 = thunk_FUN_004072dc();
  }
  *(short *)((int)local_8 + 0x16) = (short)uVar4;
  uVar4 = (**(code **)(*local_14 + 0xc))
                    (local_14,local_18,L"Item min interval",*(undefined2 *)(local_8 + 6));
  if (0xffff < uVar4) {
    uVar4 = thunk_FUN_004072dc();
  }
  *(short *)(local_8 + 6) = (short)uVar4;
  uVar4 = (**(code **)(*local_14 + 0xc))
                    (local_14,local_18,L"Topic min interval",*(undefined2 *)((int)local_8 + 0x1a));
  if (0xffff < uVar4) {
    uVar4 = thunk_FUN_004072dc();
  }
  *(short *)((int)local_8 + 0x1a) = (short)uVar4;
  uVar2 = (**(code **)(*local_14 + 0x14))
                    (local_14,local_18,L"Skip items",*(undefined1 *)(local_8 + 7));
  *(undefined1 *)(local_8 + 7) = uVar2;
  uVar2 = (**(code **)(*local_14 + 0x14))
                    (local_14,local_18,L"Skip topics",*(undefined1 *)((int)local_8 + 0x1d));
  *(undefined1 *)((int)local_8 + 0x1d) = uVar2;
  uVar5 = (**(code **)(*local_14 + 0xc))
                    (local_14,local_18,L"Item skip interval",*(undefined4 *)((int)local_8 + 0x1e));
  *(undefined4 *)((int)local_8 + 0x1e) = uVar5;
  uVar5 = (**(code **)(*local_14 + 0xc))
                    (local_14,local_18,L"Topic skip interval",*(undefined4 *)((int)local_8 + 0x22));
  *(undefined4 *)((int)local_8 + 0x22) = uVar5;
  uVar4 = (**(code **)(*local_14 + 0xc))
                    (local_14,local_18,L"Item skip FI",*(undefined1 *)((int)local_8 + 0x26));
  if (0xff < uVar4) {
    uVar4 = thunk_FUN_004072dc();
  }
  *(char *)((int)local_8 + 0x26) = (char)uVar4;
  iVar6 = (**(code **)(*local_14 + 0xc))(local_14,local_18,L"Topic skip AF",0x3f2);
  *(double *)((int)local_8 + 0x27) = (double)((float)iVar6 / _DAT_00834764);
  uVar4 = (**(code **)(*local_14 + 0xc))
                    (local_14,local_18,L"Item skip postpone",*(undefined1 *)((int)local_8 + 0x2f));
  if (0xff < uVar4) {
    uVar4 = thunk_FUN_004072dc();
  }
  *(char *)((int)local_8 + 0x2f) = (char)uVar4;
  uVar4 = (**(code **)(*local_14 + 0xc))
                    (local_14,local_18,L"Topic skip postpone",*(undefined1 *)(local_8 + 0xc));
  if (0xff < uVar4) {
    uVar4 = thunk_FUN_004072dc();
  }
  *(char *)(local_8 + 0xc) = (char)uVar4;
  (**(code **)(*local_14 + 0x28))
            (local_14,local_18,L"Item priority",*(undefined4 *)((int)local_8 + 0x31),
             *(undefined4 *)((int)local_8 + 0x35));
  *(double *)((int)local_8 + 0x31) = (double)in_ST0;
  uVar5 = *(undefined4 *)((int)local_8 + 0x3d);
  (**(code **)(*local_14 + 0x28))
            (local_14,local_18,L"Topic priority",*(undefined4 *)((int)local_8 + 0x39));
  *(double *)((int)local_8 + 0x39) = (double)in_ST1;
  uVar2 = *(undefined1 *)((int)local_8 + 0xe);
  uVar4 = (uint)local_8 >> 8;
  uVar3 = (**(code **)(*local_14 + 0x14))(local_14,local_18,L"Dilute");
  *(undefined1 *)((int)local_8 + 0xe) = uVar3;
  uVar3 = (**(code **)(*local_14 + 0x14))
                    (local_14,local_18,L"Item modify by FI",*(undefined1 *)((int)local_8 + 0x41));
  *(undefined1 *)((int)local_8 + 0x41) = uVar3;
  uVar3 = (**(code **)(*local_14 + 0x14))
                    (local_14,local_18,L"Topic modify by AF",*(undefined1 *)((int)local_8 + 0x42));
  *(undefined1 *)((int)local_8 + 0x42) = uVar3;
  bVar1 = *(byte *)((int)local_8 + 0xb);
  uVar7 = (**(code **)(*local_14 + 0xc))(local_14,local_18,L"Sub-branch use");
  *(undefined4 *)PTR_DAT_00ba9b58 = uVar7;
  *(char *)((int)local_8 + 0xb) = (char)*(undefined4 *)PTR_DAT_00ba9b58;
  FUN_0040a7a0(local_14);
  *in_FS_OFFSET = (uint)bVar1;
  *in_FS_OFFSET = CONCAT31((int3)uVar4,uVar2);
  FUN_0040c628(&local_20,3,uVar5,&LAB_008344b5);
  FUN_0040c5c8(&local_10);
  return;
}



// === FUN_00834ca8 @ 00834ca8 size:157 ===

void FUN_00834ca8(int *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = 0;
  puStack_18 = &LAB_00834d45;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_8 = param_1;
  FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_10);
  FUN_0040d79c(&local_10,L"\\postpone.ini");
  local_c = FUN_005041f4(PTR_PTR_LAB_00502988,1,local_10);
  *(undefined1 *)(*local_8 + 0x2d) = 0;
  FUN_004bd0d8(*local_8,1);
  (**(code **)(*(int *)*local_8 + 0x48))();
  piVar2 = local_8;
  FUN_00b1b0bc(&local_c,L"Branches",&DAT_00834d84);
  FUN_0040a7a0(local_c);
  puVar1 = puStack_18;
  *in_FS_OFFSET = piVar2;
  puStack_18 = &LAB_00834d4c;
  uStack_1c = 0x834d44;
  FUN_0040c5c8(&local_10,piVar2,puVar1);
  return;
}



// === FUN_00834dac @ 00834dac size:409 ===

void FUN_00834dac(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined2 extraout_var;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_28 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_34 = &LAB_00834f45;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_8 = param_1;
  local_c = (int *)FUN_004bd1b4(PTR_PTR_FUN_00498b28,1);
  FUN_00834ca8(&local_c);
  iVar3 = (**(code **)(*local_c + 0x14))();
  if (0 < iVar3) {
    local_10 = 1;
    local_20 = iVar3;
    do {
      if (SBORROW4(local_10,1)) {
        thunk_FUN_004072dc(iVar3,local_10 + -1,&local_1c);
      }
      (**(code **)(*local_c + 0xc))();
      FUN_00b262d0(&local_1c,CONCAT22(extraout_var,0x20),&local_18);
      local_14 = FUN_00409148(local_18,PTR_DAT_00ba9d40);
      if (*(int *)PTR_DAT_00ba9d40 == 0) {
        if (local_14 != local_8) {
          cVar2 = FUN_00939e64(*(undefined4 *)PTR_DAT_00ba9c04,local_14,local_8);
          if (cVar2 == '\0') {
            iVar3 = FUN_00939e64(*(undefined4 *)PTR_DAT_00ba9c04,local_8,local_14);
            if ((char)iVar3 == '\0') goto LAB_00834f0e;
          }
        }
        local_24 = DAT_00ca36fc;
        if (DAT_00ca36fc != 0) {
          local_24 = *(int *)(DAT_00ca36fc + -4);
        }
        *(int *)PTR_DAT_00ba9b58 = local_24;
        iVar3 = *(int *)PTR_DAT_00ba9b58 + 1;
        if (SCARRY4(*(int *)PTR_DAT_00ba9b58,1)) {
          iVar3 = thunk_FUN_004072dc();
        }
        FUN_0040f344(&DAT_00ca36fc,PTR_DAT_00831898,1,iVar3);
        uVar4 = *(uint *)PTR_DAT_00ba9b58;
        if ((DAT_00ca36fc == 0) || (iVar3 = DAT_00ca36fc, *(uint *)(DAT_00ca36fc + -4) <= uVar4)) {
          uVar4 = thunk_FUN_004072dc();
          iVar3 = extraout_EDX;
        }
        iVar3 = FUN_00834088(iVar3 + uVar4 * 0x43,local_14,L"Default");
      }
      else {
        FUN_0040d7f4(&local_28,L"Error in postpone.ini\r\nDefinition: ",local_18);
        iVar3 = FUN_00b2b8f8(local_28);
      }
LAB_00834f0e:
      local_10 = local_10 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  FUN_0040a7a0(local_c);
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00834f4c;
  puStack_34 = (undefined1 *)0x834f37;
  FUN_0040c5c8(&local_28,uStack_38,puVar1);
  puStack_34 = (undefined1 *)0x834f44;
  FUN_0040c628(&local_1c,2);
  return;
}



// === FUN_008363b8 @ 008363b8 size:648 ===

void FUN_008363b8(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  undefined4 *puVar4;
  int *in_FS_OFFSET;
  bool bVar5;
  int iStackY_a8;
  undefined1 *puStack_94;
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  int iStack_88;
  undefined1 *puStack_84;
  undefined1 *puStack_80;
  undefined4 local_70;
  undefined4 local_6b;
  char local_66;
  undefined1 local_65;
  char local_60;
  ushort local_5f;
  char local_5c;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_e;
  undefined1 local_d;
  int local_c;
  int local_8;
  
  local_70 = 0;
  local_18 = 0;
  local_1c = 0;
  local_24 = 0;
  puVar4 = &local_6b;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)param_2;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)param_2 + 2);
  puStack_80 = (undefined1 *)0x8363ef;
  local_8 = param_1;
  FUN_0040e164(&local_6b,PTR_DAT_00830354);
  puStack_84 = &LAB_00836666;
  iStack_88 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_88;
  puStack_8c = (undefined1 *)0x836411;
  puStack_80 = &stack0xfffffffc;
  local_c = FUN_0061c7ac(PTR_PTR_LAB_00b279c4,1,*(undefined4 *)PTR_DAT_00ba982c);
  puStack_8c = (undefined1 *)0x836419;
  FUN_008325b4();
  puStack_90 = &LAB_008365ff;
  puStack_94 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_94;
  if (local_5c == '\0') {
    puStack_8c = &stack0xfffffffc;
    FUN_0040c9f0(&local_1c,L"Postponing repetitions");
  }
  else {
    puStack_8c = &stack0xfffffffc;
    FUN_0040c9f0(&local_1c,L"Simulating postpone");
  }
  local_20 = *(int *)(local_8 + 5);
  if (local_66 != '\0') {
    iVar2 = local_20 - (uint)local_5f;
    if (SBORROW4(local_20,(uint)local_5f)) {
      thunk_FUN_004072dc();
      iVar2 = extraout_EDX;
    }
    bVar5 = SCARRY4(local_20,iVar2);
    local_20 = local_20 + iVar2;
    if (bVar5) {
      thunk_FUN_004072dc();
    }
  }
  iVar3 = local_20 >> 0x1f;
  iVar2 = local_20;
  FUN_00b29314(local_c,local_24);
  FUN_0054a01c(local_c,L"Postpone");
  FUN_0094c204(*(undefined4 *)PTR_DAT_00ba9c04,&local_70);
  FUN_0040d7f4(&local_18,local_70,L"\\postponed.sub",iVar2,iVar3);
  FUN_004294f8(local_18);
  if (local_66 != '\0') {
    FUN_00b288a4(local_c,L"Sorting elements by priority");
    FUN_00964864(local_8);
    FUN_00b288a4(local_c,local_1c);
  }
  local_14 = FUN_00965380(PTR_LAB_009635dc,1,local_18);
  FUN_0094fb9c(*(undefined4 *)PTR_DAT_00ba9c04,&local_d);
  FUN_0093237c(*(undefined4 *)PTR_DAT_00ba9c04,&local_e);
  FUN_0040f468(&DAT_00ca36fc,PTR_DAT_00831898);
  if (local_60 != '\x01') {
    FUN_00834dac(local_6b);
  }
  local_65 = 0;
  iStackY_a8 = 0x836543;
  FUN_00836f1c(local_8,local_14,&local_6b,local_c);
  if (local_66 != '\0') {
    iVar3 = *(int *)(local_8 + 5) - DAT_00ca36c7;
    if (SBORROW4(*(int *)(local_8 + 5),DAT_00ca36c7)) {
      iStackY_a8 = 0x83655c;
      iVar3 = thunk_FUN_004072dc();
    }
    if ((int)(uint)local_5f < iVar3) {
      local_65 = 1;
      iStackY_a8 = local_c;
      FUN_00836f1c(local_8,local_14,&local_6b);
    }
  }
  iVar3 = FUN_00964030(local_14,*(undefined4 *)(*(int *)PTR_DAT_00ba982c + 0xe0d));
  if (iVar3 != 0) {
    FUN_0088f0ac(*(undefined4 *)PTR_DAT_00baabf4,*(undefined4 *)(*(int *)PTR_DAT_00ba982c + 0xe0d));
  }
  FUN_00940fa8(*(undefined4 *)PTR_DAT_00ba9c04,local_d);
  FUN_009324fc(*(undefined4 *)PTR_DAT_00ba9c04,local_e);
  FUN_00964c24(local_14,local_18);
  FUN_0040a7a0(local_14);
  FUN_00944928(*(undefined4 *)PTR_DAT_00ba9c04);
  FUN_0085faac(*(undefined4 *)PTR_DAT_00baabf8);
  *in_FS_OFFSET = iStackY_a8;
  FUN_00b2a8d8(local_c,iStackY_a8,0);
  puVar1 = puStack_94;
  *in_FS_OFFSET = iVar2;
  puStack_94 = &LAB_0083666d;
  FUN_0040c5c8(&local_70,iVar2,puVar1);
  FUN_0040dfd0(&local_6b,PTR_DAT_00830354);
  FUN_0040c5c8(&local_24);
  FUN_0040c628(&local_1c,2);
  return;
}



// === FUN_00836f1c @ 00836f1c size:446 ===

void FUN_00836f1c(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_FS_OFFSET;
  int iStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 local_60;
  undefined4 local_5b;
  char local_56;
  ushort local_4f;
  char local_4d;
  char local_4c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_60 = 0;
  puVar4 = &local_5b;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)param_3;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)param_3 + 2);
  puStack_70 = (undefined1 *)0x836f4d;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040e164(&local_5b,PTR_DAT_00830354);
  puStack_74 = &LAB_008370da;
  iStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_78;
  puStack_70 = &stack0xfffffffc;
  if (0 < *(int *)(local_8 + 5)) {
    local_10 = 1;
    puStack_70 = &stack0xfffffffc;
    local_18 = *(int *)(local_8 + 5);
    do {
      if (local_56 != '\0') {
        iVar3 = *(int *)(local_8 + 5) - DAT_00ca36c7;
        if (SBORROW4(*(int *)(local_8 + 5),DAT_00ca36c7)) {
          iVar3 = thunk_FUN_004072dc();
        }
        if (iVar3 <= (int)(uint)local_4f) {
          FUN_00964d0c(local_8,local_c);
          if (1 < *(int *)(local_8 + 5)) {
            FUN_0094c204(*(undefined4 *)PTR_DAT_00ba9c04,&local_60);
            FUN_0040d79c(&local_60,L"\\unpostponed.sub");
            FUN_00964c24(local_8,local_60);
          }
          break;
        }
      }
      local_14 = FUN_0096405c(local_8,local_10);
      if (local_10 % 0xf == 0) {
        FUN_00b2a9a4(param_4,0,0xf,SUB108((float10)local_10,0),
                     (short)((unkuint10)(float10)local_10 >> 0x40));
        iStack_78 = DAT_00ca36c7;
        FUN_00b28aac(param_4,L"Delayed:");
        FUN_0054a28c(param_4);
        cVar2 = FUN_00b2a0ec(param_4);
        if (cVar2 != '\0') break;
      }
      if ((local_4c == '\0') && (local_10 % 200 == 0)) {
        FUN_0085faac(*(undefined4 *)PTR_DAT_00baabf8);
        FUN_0054a65c(*(undefined4 *)PTR_DAT_00baabf8);
      }
      cVar2 = FUN_00930ed0(*(undefined4 *)PTR_DAT_00ba9c04,local_14);
      if (cVar2 == '\0') {
        if (local_4d == '\0') {
          cVar2 = FUN_00938128(*(undefined4 *)PTR_DAT_00ba9c04,local_14);
          if (cVar2 == '\0') goto LAB_008370aa;
        }
        iVar3 = FUN_00964030(local_c,local_14);
        if (iVar3 < 1) {
          FUN_00836e2c(local_14,&local_5b,&local_c);
        }
      }
LAB_008370aa:
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  puVar1 = puStack_70;
  *in_FS_OFFSET = iStack_78;
  puStack_70 = &LAB_008370e1;
  puStack_74 = (undefined1 *)0x8370cb;
  FUN_0040c5c8(&local_60,iStack_78,puVar1);
  puStack_74 = (undefined1 *)0x8370d9;
  FUN_0040dfd0(&local_5b,PTR_DAT_00830354);
  return;
}



// === FUN_00856684 @ 00856684 size:759 ===

void FUN_00856684(undefined1 param_1,undefined4 param_2)

{
  FUN_0040c9a8(param_2,L"#modify#");
  switch(param_1) {
  case 1:
    FUN_0040c9a8(param_2,L"dismiss");
    break;
  case 2:
    FUN_0040c9a8(param_2,L"execute Done on");
    break;
  case 3:
    FUN_0040c9a8(param_2,L"forget");
    break;
  case 4:
    FUN_0040c9a8(param_2,L"convert to concepts");
    break;
  case 5:
    FUN_0040c9a8(param_2,L"convert to items");
    break;
  case 6:
    FUN_0040c9a8(param_2,L"convert to topics");
    break;
  case 7:
    FUN_0040c9a8(param_2,L"stop ignoring");
    break;
  case 8:
    FUN_0040c9a8(param_2,L"memorize");
    break;
  case 9:
    FUN_0040c9a8(param_2,L"reset repetition history of");
    break;
  case 10:
    FUN_0040c9a8(param_2,L"spread priority within a range in");
    break;
  case 0xb:
    FUN_0040c9a8(param_2,L"adjust priority within a range in");
    break;
  case 0xc:
    FUN_0040c9a8(param_2,L"increase priority in");
    break;
  case 0xd:
    FUN_0040c9a8(param_2,L"decrease priority in");
    break;
  case 0xe:
    FUN_0040c9a8(param_2,L"change ordinals of");
    break;
  case 0xf:
    FUN_0040c9a8(param_2,L"set position ordinals of");
    break;
  case 0x10:
    FUN_0040c9a8(param_2,L"set pending ordinals of");
    break;
  case 0x11:
    FUN_0040c9a8(param_2,L"set difficulty ordinals of");
    break;
  case 0x12:
    FUN_0040c9a8(param_2,L"spread ordinals within a range in");
    break;
  case 0x13:
    FUN_0040c9a8(param_2,L"blend ordinals with a subset in");
    break;
  case 0x14:
    FUN_0040c9a8(param_2,L"modify ordinals in");
    break;
  case 0x15:
    FUN_0040c9a8(param_2,L"change topic A-Factors of");
    break;
  case 0x16:
    FUN_0040c9a8(param_2,L"modify topic A-Factors of");
    break;
  case 0x17:
    FUN_0040c9a8(param_2,L"apply a template to");
    break;
  case 0x18:
    FUN_0040c9a8(param_2,L"impose a template on");
    break;
  case 0x19:
    FUN_0040c9a8(param_2,L"detach templates from");
    break;
  case 0x1a:
    FUN_0040c9a8(param_2,L"merge a template in");
    break;
  case 0x1b:
    FUN_0040c9a8(param_2,L"add a template to");
    break;
  case 0x1c:
    FUN_0040c9a8(param_2,L"set the title for");
    break;
  case 0x1d:
    FUN_0040c9a8(param_2,L"insert a picture in");
    break;
  case 0x1e:
    FUN_0040c9a8(param_2,L"change the reference in");
    break;
  case 0x1f:
    FUN_0040c9a8(param_2,L"merge reference fields in");
    break;
  case 0x20:
    FUN_0040c9a8(param_2,L"change concept group affiliation in");
    break;
  case 0x21:
    FUN_0040c9a8(param_2,L"add to final drill");
    break;
  case 0x22:
    FUN_0040c9a8(param_2,L"add to the oustanding queue");
    break;
  case 0x23:
    FUN_0040c9a8(param_2,L"change the forgetting index of");
    break;
  case 0x24:
    FUN_0040c9a8(param_2,L"transfer");
    break;
  case 0x25:
    FUN_0040c9a8(param_2,L"reschedule");
    break;
  case 0x26:
    FUN_0040c9a8(param_2,L"collect learning statistics for");
    break;
  case 0x27:
    FUN_0040c9a8(param_2,L"export an HTML document for");
    break;
  case 0x28:
    FUN_0040c9a8(param_2,L"export questions and answer from");
    break;
  case 0x29:
    FUN_0040c9a8(param_2,L"export all texts from");
  }
  return;
}



// === FUN_0085faac @ 0085faac size:8779 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0085faac(int param_1)

{
  double dVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  char cVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar18;
  int extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  int *unaff_EBX;
  int *unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar19;
  undefined1 uVar20;
  float10 in_ST0;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  float10 fVar25;
  undefined1 local_2d8 [4];
  undefined4 local_2d4;
  undefined1 local_2d0 [4];
  undefined4 local_2cc;
  undefined1 local_2c8 [4];
  undefined4 local_2c4;
  undefined1 local_2c0 [4];
  undefined4 local_2bc;
  undefined1 *local_2b8;
  undefined4 local_2b4;
  undefined1 local_2b0 [4];
  undefined4 local_2ac;
  undefined1 local_2a8 [4];
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined1 *local_290;
  undefined4 local_28c;
  double local_288;
  undefined1 *local_280;
  undefined4 local_27c;
  int *local_278;
  undefined4 local_274;
  undefined *local_270;
  undefined4 local_26c;
  undefined4 local_268;
  float10 local_264;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  float10 local_248;
  undefined1 *local_23c;
  undefined4 local_238;
  undefined1 *local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined1 local_228 [4];
  undefined4 local_224;
  undefined1 local_220 [4];
  undefined4 local_21c;
  undefined1 local_218 [4];
  undefined4 local_214;
  undefined1 local_210 [4];
  undefined4 uStack_20c;
  int *piStack_208;
  undefined4 local_204;
  undefined1 auStack_200 [4];
  undefined4 uStack_1fc;
  undefined1 local_1f8 [4];
  undefined4 local_1f4;
  undefined1 local_1f0 [4];
  undefined4 local_1ec;
  undefined1 auStack_1e8 [4];
  undefined4 uStack_1e4;
  undefined1 local_1e0 [4];
  undefined4 uStack_1dc;
  undefined1 auStack_1d8 [4];
  undefined4 local_1d4;
  undefined1 local_1d0 [4];
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined1 local_1b8 [4];
  int local_1b4;
  undefined1 auStack_1b0 [256];
  undefined4 uStack_b0;
  undefined4 local_ac;
  int iStack_a8;
  undefined1 *puStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  double dStack_8c;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined1 auStack_74 [8];
  undefined2 uStack_6c;
  undefined4 uStack_68;
  int *local_64;
  undefined *puStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  int *piStack_58;
  int *local_54;
  int *piStack_50;
  int *piStack_4c;
  undefined1 *local_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined2 uStack_38;
  undefined1 uStack_36;
  char local_35;
  int *local_34;
  int *local_30;
  undefined8 local_2c;
  undefined8 local_24;
  int local_10;
  byte local_9;
  int local_8;
  
  local_10 = 0x5a;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = (double)CONCAT44(&stack0xfffffffc,&LAB_00861d54);
  uVar17 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_2c + 4;
  local_2c = (double)CONCAT44(uVar17,&stack0xfffffffc);
  *in_FS_OFFSET = &local_34;
  local_30 = (int *)(*(int *)PTR_DAT_00ba9c04 + 0x86);
  local_34 = *(int **)(param_1 + 0x3d0);
  local_8 = param_1;
  if (*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x10) == '\0') {
    *in_FS_OFFSET = local_34;
  }
  else {
    uStack_38 = 0xfb1e;
    uStack_36 = 0x85;
    local_35 = 0;
    FUN_0040a340(*(int *)PTR_DAT_00ba9c04 + 0x9e);
    uStack_98 = (double)(in_ST0 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x470));
    uStack_38 = (undefined2)((ulonglong)uStack_98 >> 0x20);
    uStack_36 = (undefined1)((ulonglong)uStack_98 >> 0x30);
    local_35 = (char)((ulonglong)uStack_98 >> 0x38);
    puStack_3c = (undefined1 *)(undefined4)uStack_98;
    puStack_40 = (undefined1 *)0x85fb43;
    fVar22 = in_ST7;
    FUN_008aec0c();
    local_2c = (double)(in_ST1 / (float10)_DAT_00861d68);
    uStack_38 = 0xfb55;
    uStack_36 = 0x85;
    local_35 = 0;
    fVar21 = fVar22;
    FUN_00862700(local_8);
    uStack_38 = 0xfb5f;
    uStack_36 = 0x85;
    local_35 = 0;
    FUN_00862a60(local_8,1);
    uStack_38 = 0xfb6c;
    uStack_36 = 0x85;
    local_35 = '\0';
    FUN_0070bb90(local_34,1);
    uVar13 = local_34[0xbc];
    if (0xff < uVar13) {
      uStack_38 = 0xfb81;
      uStack_36 = 0x85;
      local_35 = '\0';
      uVar13 = thunk_FUN_004072dc();
    }
    if ((char)uVar13 != '\0') {
      local_9 = 1;
      do {
        uStack_38 = SUB42(&uStack_9c,0);
        uStack_36 = (undefined1)((uint)&uStack_9c >> 0x10);
        local_35 = (char)((uint)&uStack_9c >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x85fba6;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x85fbb0;
        FUN_0070f800(local_34);
        uStack_38 = 0xfbc0;
        uStack_36 = 0x85;
        local_35 = 0;
        FUN_0040d98c(uStack_9c,L"First day");
        if ((bool)uVar19) {
          uStack_38 = SUB42(&stack0xfffffffc,0);
          uStack_36 = (undefined1)((uint)&stack0xfffffffc >> 0x10);
          local_35 = (char)((uint)&stack0xfffffffc >> 0x18);
          puStack_3c = &LAB_0085fc35;
          puStack_40 = (undefined1 *)*in_FS_OFFSET;
          *in_FS_OFFSET = &puStack_40;
          piVar14 = (int *)(local_9 - 1);
          if (SBORROW4((uint)local_9,1)) {
            uStack_44._0_2_ = 0xfbdf;
            uStack_44._2_2_ = 0x85;
            piVar14 = (int *)thunk_FUN_004072dc();
          }
          uStack_44._0_2_ = 0xfbee;
          uStack_44._2_2_ = 0x85;
          piStack_4c = piVar14;
          FUN_00b18e4c(*(undefined2 *)((int)local_30 + 0x13));
          dVar1 = (double)in_ST2;
          puStack_40 = (undefined1 *)((ulonglong)dVar1 >> 0x20);
          uStack_44._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
          uStack_44._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
          local_48 = puStack_40;
          piStack_4c = (int *)0x85fc0b;
          FUN_0042d430(&DAT_00861d98,PTR_DAT_00baa920,&local_48);
          uStack_44._0_2_ = SUB42(local_48,0);
          uStack_44._2_2_ = (undefined2)((uint)local_48 >> 0x10);
          local_48 = (undefined1 *)0x85fc1f;
          FUN_0070f880(local_34,1,piStack_4c);
          uVar17 = CONCAT13(local_35,CONCAT12(uStack_36,uStack_38));
          *in_FS_OFFSET = puStack_40;
          uStack_38 = 0xfc3c;
          uStack_36 = 0x85;
          local_35 = 0;
          puStack_3c = (undefined1 *)0x85fc34;
          FUN_0040c5c8(&local_48,puStack_40,uVar17);
          return;
        }
        uStack_38 = SUB42(&local_a0,0);
        uStack_36 = (undefined1)((uint)&local_a0 >> 0x10);
        local_35 = (char)((uint)&local_a0 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x85fc52;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x85fc5c;
        FUN_0070f800(local_34);
        uStack_38 = 0xfc6c;
        uStack_36 = 0x85;
        local_35 = 0;
        FUN_0040d98c(local_a0,L"Period");
        if ((bool)uVar19) {
          uStack_38 = 0xfc7a;
          uStack_36 = 0x85;
          local_35 = 0;
          iStack_a8 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
          uStack_98 = (double)iStack_a8;
          uStack_38 = (undefined2)((ulonglong)uStack_98 >> 0x20);
          uStack_36 = (undefined1)((ulonglong)uStack_98 >> 0x30);
          local_35 = (char)((ulonglong)uStack_98 >> 0x38);
          puStack_3c = (undefined1 *)(undefined4)uStack_98;
          puStack_40 = (undefined1 *)0x85fca4;
          fVar21 = fVar22;
          FUN_00b2e9bc(&puStack_a4);
          puStack_40 = puStack_a4;
          if (SBORROW4((uint)local_9,1)) {
            uStack_44._0_2_ = 0xfcba;
            uStack_44._2_2_ = 0x85;
            thunk_FUN_004072dc();
          }
          uStack_44._0_2_ = 0xfcc7;
          uStack_44._2_2_ = 0x85;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_ac,0);
        uStack_36 = (undefined1)((uint)&local_ac >> 0x10);
        local_35 = (char)((uint)&local_ac >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x85fcdd;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x85fce7;
        FUN_0070f800(local_34);
        uStack_38 = 0xfcf7;
        uStack_36 = 0x85;
        local_35 = 0;
        FUN_0040d98c(local_ac,L"Memorized");
        if ((bool)uVar19) {
          iVar15 = local_30[1] + (int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a);
          if (SCARRY4(local_30[1],(int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a))) {
            uStack_38 = 0xfd1b;
            uStack_36 = 0x85;
            local_35 = 0;
            iVar15 = thunk_FUN_004072dc();
          }
          fVar21 = (float10)iVar15;
          puStack_40 = SUB104(fVar21,0);
          puStack_3c = (undefined1 *)((unkuint10)fVar21 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)fVar21 >> 0x40);
          uStack_44._0_2_ = 0xfd39;
          uStack_44._2_2_ = 0x85;
          fVar21 = fVar22;
          iStack_a8 = iVar15;
          FUN_00b20c94(&uStack_b0);
          uStack_44._0_2_ = 0xfd4c;
          uStack_44._2_2_ = 0x85;
          FUN_0040d7f4(&stack0xffffffe8,uStack_b0,L" el.");
          iVar15 = local_30[1] + (int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a);
          if (SCARRY4(local_30[1],(int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a))) {
            uStack_44._0_2_ = 0xfd6a;
            uStack_44._2_2_ = 0x85;
            iVar15 = thunk_FUN_004072dc();
          }
          piVar14 = (int *)(*(int *)(*(int *)PTR_DAT_00ba9c04 + 0x6a) + 5);
          iVar16 = iVar15 + *piVar14;
          if (SCARRY4(iVar15,*piVar14)) {
            uStack_44._0_2_ = 0xfd7f;
            uStack_44._2_2_ = 0x85;
            iVar16 = thunk_FUN_004072dc();
          }
          iVar15 = iVar16 + *(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46b);
          if (SCARRY4(iVar16,(int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46b))) {
            uStack_44._0_2_ = 0xfd97;
            uStack_44._2_2_ = 0x85;
            iVar15 = thunk_FUN_004072dc();
          }
          if (iVar15 < 1) {
            uStack_44._0_2_ = 0xfe5e;
            uStack_44._2_2_ = 0x85;
            FUN_0040c9f0(&stack0xffffffec,&DAT_00861dfc);
          }
          else {
            iVar15 = local_30[1] + (int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a);
            if (SCARRY4(local_30[1],(int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a))) {
              uStack_44._0_2_ = 0xfdbd;
              uStack_44._2_2_ = 0x85;
              iVar15 = thunk_FUN_004072dc();
            }
            fVar22 = (float10)iVar15;
            iVar16 = local_30[1] + (int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a);
            iStack_a8 = iVar15;
            if (SCARRY4(local_30[1],(int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a))) {
              uStack_44._0_2_ = 64999;
              uStack_44._2_2_ = 0x85;
              iVar16 = thunk_FUN_004072dc();
            }
            piVar14 = (int *)(*(int *)(*(int *)PTR_DAT_00ba9c04 + 0x6a) + 5);
            iVar15 = iVar16 + *piVar14;
            if (SCARRY4(iVar16,*piVar14)) {
              uStack_44._0_2_ = 0xfdfc;
              uStack_44._2_2_ = 0x85;
              iVar15 = thunk_FUN_004072dc();
            }
            iVar16 = iVar15 + *(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46b);
            if (SCARRY4(iVar15,(int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46b))) {
              uStack_44._0_2_ = 0xfe14;
              uStack_44._2_2_ = 0x85;
              iVar16 = thunk_FUN_004072dc();
            }
            fVar22 = (fVar22 / (float10)iVar16) * (float10)_DAT_00861d68;
            piStack_4c = SUB104(fVar22,0);
            local_48 = (undefined1 *)((unkuint10)fVar22 >> 0x20);
            uStack_44._0_2_ = (undefined2)((unkuint10)fVar22 >> 0x40);
            piStack_50 = (int *)0x85fe41;
            fVar22 = in_ST7;
            fVar21 = in_ST7;
            local_1b4 = iVar16;
            FUN_00409cb4(0,1,auStack_1b0);
            piStack_50 = (int *)0x85fe4f;
            FUN_0040d710(&stack0xffffffec,auStack_1b0);
          }
          local_2c = (double)CONCAT44(unaff_ESI,&DAT_00861e0c);
          local_34 = (int *)&DAT_00861e20;
          uStack_38 = 0xfe7e;
          uStack_36 = 0x85;
          local_35 = 0;
          local_30 = unaff_EBX;
          FUN_0040d87c(local_1b8,4);
          uStack_38 = local_1b8._0_2_;
          uStack_36 = local_1b8[2];
          local_35 = local_1b8[3];
          if (SBORROW4((uint)local_9,1)) {
            puStack_3c = (undefined1 *)0x85fe94;
            thunk_FUN_004072dc();
          }
          puStack_3c = (undefined1 *)0x85fea1;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_1bc,0);
        uStack_36 = (undefined1)((uint)&local_1bc >> 0x10);
        local_35 = (char)((uint)&local_1bc >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x85feb7;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x85fec1;
        FUN_0070f800(local_34);
        uStack_38 = 0xfed1;
        uStack_36 = 0x85;
        local_35 = 0;
        FUN_0040d98c(local_1bc,L"Memorized items");
        uVar4 = uStack_44._2_2_;
        uVar2 = (undefined2)uStack_44;
        uStack_44._0_2_ = SUB42(unaff_ESI,0);
        uVar3 = (undefined2)uStack_44;
        uStack_44._2_2_ = (undefined2)((uint)unaff_ESI >> 0x10);
        uVar5 = uStack_44._2_2_;
        uStack_44._0_2_ = uVar2;
        uStack_44._2_2_ = uVar4;
        if ((bool)uVar19) {
          fVar21 = (float10)local_30[0x99];
          puStack_40 = SUB104(fVar21,0);
          puStack_3c = (undefined1 *)((unkuint10)fVar21 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)fVar21 >> 0x40);
          uStack_44._0_2_ = 0xfef2;
          uStack_44._2_2_ = 0x85;
          fVar21 = fVar22;
          FUN_00b20c94(&local_1c0);
          uStack_44._0_2_ = 0xff05;
          uStack_44._2_2_ = 0x85;
          FUN_0040d7f4(&stack0xffffffe8,local_1c0,L" it.");
          if (0 < local_30[1]) {
            local_48 = &LAB_0085ff8c;
            piStack_4c = (int *)*in_FS_OFFSET;
            *in_FS_OFFSET = &piStack_4c;
            fVar22 = ((float10)local_30[0x99] / (float10)local_30[1]) * (float10)_DAT_00861d68;
            local_64 = SUB104(fVar22,0);
            puStack_60 = (undefined *)((unkuint10)fVar22 >> 0x20);
            uStack_5c = (undefined2)((unkuint10)fVar22 >> 0x40);
            piStack_50 = (int *)CONCAT22((short)((uint)local_30 >> 0x10),uStack_5c);
            local_54 = (int *)puStack_60;
            piStack_58 = local_64;
            uStack_5c = 0xff59;
            uStack_5a = 0x85;
            uStack_44 = &stack0xfffffffc;
            FUN_0042bc74(&DAT_00861e78,PTR_DAT_00baa920,&uStack_68);
            local_54 = (int *)&DAT_00861e0c;
            piStack_58 = (int *)uStack_68;
            uStack_5c = 0x1e20;
            uStack_5a = 0x86;
            puStack_60 = (undefined *)0x85ff76;
            FUN_0040d87c(&stack0xffffffe8,4);
            piVar14 = local_54;
            *in_FS_OFFSET = CONCAT22(uStack_5a,uStack_5c);
            local_54 = (int *)0x85ff93;
            piStack_58 = (int *)0x85ff8b;
            FUN_0040c5c8(&uStack_68,CONCAT22(uStack_5a,uStack_5c),piVar14);
            return;
          }
          uStack_44._0_2_ = uVar3;
          uStack_44._2_2_ = uVar5;
          if (SBORROW4((uint)local_9,1)) {
            local_48 = (undefined1 *)0x85ffa6;
            thunk_FUN_004072dc();
          }
          local_48 = (undefined *)0x85ffb3;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_1c4,0);
        uStack_36 = (undefined1)((uint)&local_1c4 >> 0x10);
        local_35 = (char)((uint)&local_1c4 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x85ffc9;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x85ffd3;
        FUN_0070f800(local_34);
        uStack_38 = 0xffe3;
        uStack_36 = 0x85;
        local_35 = 0;
        FUN_0040d98c(local_1c4,L"Memorized topics");
        if ((bool)uVar19) {
          iVar15 = local_30[1] - local_30[0x99];
          if (SBORROW4(local_30[1],local_30[0x99])) {
            uStack_38 = 0xffff;
            uStack_36 = 0x85;
            local_35 = 0;
            iVar15 = thunk_FUN_004072dc();
          }
          fVar21 = (float10)iVar15;
          puStack_40 = SUB104(fVar21,0);
          puStack_3c = (undefined1 *)((unkuint10)fVar21 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)fVar21 >> 0x40);
          uStack_44._0_2_ = 0x1d;
          uStack_44._2_2_ = 0x86;
          fVar21 = fVar22;
          iStack_a8 = iVar15;
          FUN_00b20c94(&local_1c8);
          uStack_44._0_2_ = 0x30;
          uStack_44._2_2_ = 0x86;
          FUN_0040d7f4(&stack0xffffffe8,local_1c8,L" top.");
          if (0 < local_30[1]) {
            local_48 = &LAB_008600d0;
            piStack_4c = (int *)*in_FS_OFFSET;
            *in_FS_OFFSET = &piStack_4c;
            iVar15 = local_30[1] - local_30[0x99];
            uStack_44 = &stack0xfffffffc;
            if (SBORROW4(local_30[1],local_30[0x99])) {
              piStack_50 = (int *)0x860061;
              uStack_44 = &stack0xfffffffc;
              iVar15 = thunk_FUN_004072dc();
            }
            fVar22 = ((float10)iVar15 / (float10)local_30[1]) * (float10)_DAT_00861d68;
            uStack_6c = (undefined2)((unkuint10)fVar22 >> 0x40);
            piStack_50 = (int *)CONCAT22((short)((uint)local_30 >> 0x10),uStack_6c);
            auStack_74._4_4_ = (undefined4)((unkuint10)fVar22 >> 0x20);
            local_54 = (int *)auStack_74._4_4_;
            auStack_74._0_4_ = SUB104(fVar22,0);
            piStack_58 = (int *)auStack_74._0_4_;
            uStack_5c = 0x9d;
            uStack_5a = 0x86;
            iStack_a8 = iVar15;
            _auStack_74 = fVar22;
            FUN_0042bc74(&DAT_00861e78,PTR_DAT_00baa920,&uStack_78);
            local_54 = (int *)&DAT_00861e0c;
            piStack_58 = (int *)uStack_78;
            uStack_5c = 0x1e20;
            uStack_5a = 0x86;
            puStack_60 = (undefined *)0x8600ba;
            FUN_0040d87c(&stack0xffffffe8,4);
            piVar14 = local_54;
            *in_FS_OFFSET = CONCAT22(uStack_5a,uStack_5c);
            local_54 = (int *)0x8600d7;
            piStack_58 = (int *)0x8600cf;
            FUN_0040c5c8(&uStack_78,CONCAT22(uStack_5a,uStack_5c),piVar14);
            return;
          }
          uStack_44._0_2_ = uVar3;
          uStack_44._2_2_ = uVar5;
          if (SBORROW4((uint)local_9,1)) {
            local_48 = (undefined1 *)0x8600ea;
            thunk_FUN_004072dc();
          }
          local_48 = (undefined *)0x8600f7;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_1cc,0);
        uStack_36 = (undefined1)((uint)&local_1cc >> 0x10);
        local_35 = (char)((uint)&local_1cc >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x86010d;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x860117;
        FUN_0070f800(local_34);
        uStack_38 = 0x127;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_1cc,L"Memorized/Day");
        if ((bool)uVar19) {
          uStack_38 = 0x139;
          uStack_36 = 0x86;
          local_35 = 0;
          iStack_a8 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
          fVar22 = (float10)iStack_a8;
          iVar15 = local_30[0x99] + (int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a);
          if (SCARRY4(local_30[0x99],(int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a))) {
            uStack_38 = 0x166;
            uStack_36 = 0x86;
            local_35 = 0;
            iVar15 = thunk_FUN_004072dc();
          }
          fVar22 = (float10)iVar15 / fVar22;
          puStack_40 = SUB104(fVar22,0);
          puStack_3c = (undefined1 *)((unkuint10)fVar22 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)fVar22 >> 0x40);
          uStack_44._0_2_ = 0x18d;
          uStack_44._2_2_ = 0x86;
          fVar22 = in_ST7;
          fVar21 = in_ST7;
          local_1b4 = iVar15;
          FUN_00409cb4(0,4,auStack_1b0);
          uStack_44._0_2_ = 0x19b;
          uStack_44._2_2_ = 0x86;
          FUN_0040d710(&stack0xffffffec,auStack_1b0);
          uStack_44._0_2_ = 0x1ae;
          uStack_44._2_2_ = 0x86;
          FUN_0040d7f4(local_1d0,unaff_EBX,L" it/day");
          uStack_44._0_2_ = local_1d0._0_2_;
          uStack_44._2_2_ = local_1d0._2_2_;
          if (SBORROW4((uint)local_9,1)) {
            local_48 = (undefined1 *)0x8601c4;
            thunk_FUN_004072dc();
          }
          local_48 = (undefined *)0x8601d1;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_1d4,0);
        uStack_36 = (undefined1)((uint)&local_1d4 >> 0x10);
        local_35 = (char)((uint)&local_1d4 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x8601e7;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x8601f1;
        FUN_0070f800(local_34);
        uStack_38 = 0x201;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_1d4,L"Pending");
        if ((bool)uVar19) {
          iVar15 = *(int *)(*(int *)(*(int *)PTR_DAT_00ba9c04 + 0x6a) + 5);
          iVar16 = iVar15 + *(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46b);
          if (SCARRY4(iVar15,(int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46b))) {
            uStack_38 = 0x228;
            uStack_36 = 0x86;
            local_35 = 0;
            iVar16 = thunk_FUN_004072dc(iVar16);
          }
          uStack_38 = 0x233;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_004282b0(iVar16,auStack_1d8);
          uStack_38 = 0x243;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040d79c(auStack_1d8,L" el.");
          uStack_38 = auStack_1d8._0_2_;
          uStack_36 = auStack_1d8[2];
          local_35 = auStack_1d8[3];
          if (SBORROW4((uint)local_9,1)) {
            puStack_3c = (undefined1 *)0x860259;
            thunk_FUN_004072dc();
          }
          puStack_3c = (undefined1 *)0x860266;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&uStack_1dc,0);
        uStack_36 = (undefined1)((uint)&uStack_1dc >> 0x10);
        local_35 = (char)((uint)&uStack_1dc >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x86027c;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x860286;
        FUN_0070f800(local_34);
        uStack_38 = 0x296;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(uStack_1dc,L"Dismissed");
        if ((bool)uVar19) {
          iVar15 = *(int *)(*(int *)(*(int *)PTR_DAT_00ba9c04 + 0x6a) + 5);
          iVar16 = iVar15 + *(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46b);
          if (SCARRY4(iVar15,(int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46b))) {
            uStack_38 = 0x2c1;
            uStack_36 = 0x86;
            local_35 = 0;
            iVar16 = thunk_FUN_004072dc();
          }
          iVar15 = *local_30 - iVar16;
          if (SBORROW4(*local_30,iVar16)) {
            uStack_38 = 0x2cf;
            uStack_36 = 0x86;
            local_35 = 0;
            thunk_FUN_004072dc();
            iVar15 = extraout_EDX;
          }
          iVar16 = local_30[1] + (int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a);
          if (SCARRY4(local_30[1],(int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a))) {
            uStack_38 = 0x2ed;
            uStack_36 = 0x86;
            local_35 = 0;
            iVar16 = thunk_FUN_004072dc();
            iVar15 = extraout_EDX_00;
          }
          iVar18 = iVar15 - iVar16;
          if (SBORROW4(iVar15,iVar16)) {
            uStack_38 = 0x2f6;
            uStack_36 = 0x86;
            local_35 = 0;
            thunk_FUN_004072dc();
            iVar18 = extraout_EDX_01;
          }
          fVar21 = (float10)iVar18;
          puStack_40 = SUB104(fVar21,0);
          puStack_3c = (undefined1 *)((unkuint10)fVar21 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)fVar21 >> 0x40);
          uStack_44._0_2_ = 0x314;
          uStack_44._2_2_ = 0x86;
          fVar21 = fVar22;
          iStack_a8 = iVar18;
          FUN_00b20c94(local_1e0);
          uStack_44._0_2_ = 0x324;
          uStack_44._2_2_ = 0x86;
          FUN_0040d79c(local_1e0,L" el.");
          uStack_44._0_2_ = local_1e0._0_2_;
          uStack_44._2_2_ = local_1e0._2_2_;
          if (SBORROW4((uint)local_9,1)) {
            local_48 = (undefined1 *)0x86033a;
            thunk_FUN_004072dc();
          }
          local_48 = (undefined *)0x860347;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&uStack_1e4,0);
        uStack_36 = (undefined1)((uint)&uStack_1e4 >> 0x10);
        local_35 = (char)((uint)&uStack_1e4 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x86035d;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x860367;
        FUN_0070f800(local_34);
        uStack_38 = 0x377;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(uStack_1e4,L"Total");
        if ((bool)uVar19) {
          fVar21 = (float10)*local_30;
          puStack_40 = SUB104(fVar21,0);
          puStack_3c = (undefined1 *)((unkuint10)fVar21 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)fVar21 >> 0x40);
          uStack_44._0_2_ = 0x390;
          uStack_44._2_2_ = 0x86;
          fVar21 = fVar22;
          FUN_00b20c94(auStack_1e8);
          uStack_44._0_2_ = 0x3a0;
          uStack_44._2_2_ = 0x86;
          FUN_0040d79c(auStack_1e8,L" el.");
          uStack_44._0_2_ = auStack_1e8._0_2_;
          uStack_44._2_2_ = auStack_1e8._2_2_;
          if (SBORROW4((uint)local_9,1)) {
            local_48 = (undefined1 *)0x8603b6;
            thunk_FUN_004072dc();
          }
          local_48 = (undefined *)0x8603c3;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_1ec,0);
        uStack_36 = (undefined1)((uint)&local_1ec >> 0x10);
        local_35 = (char)((uint)&local_1ec >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x8603d9;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x8603e3;
        FUN_0070f800(local_34);
        uStack_38 = 0x3f3;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_1ec,L"Items");
        if ((bool)uVar19) {
          fVar21 = (float10)local_30[0x98];
          puStack_40 = SUB104(fVar21,0);
          puStack_3c = (undefined1 *)((unkuint10)fVar21 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)fVar21 >> 0x40);
          uStack_44._0_2_ = 0x410;
          uStack_44._2_2_ = 0x86;
          fVar21 = fVar22;
          FUN_00b20c94(local_1f0);
          uStack_44._0_2_ = 0x420;
          uStack_44._2_2_ = 0x86;
          FUN_0040d79c(local_1f0,L" it.");
          uStack_44._0_2_ = local_1f0._0_2_;
          uStack_44._2_2_ = local_1f0._2_2_;
          if (SBORROW4((uint)local_9,1)) {
            local_48 = (undefined1 *)0x860436;
            thunk_FUN_004072dc();
          }
          local_48 = (undefined *)0x860443;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_1f4,0);
        uStack_36 = (undefined1)((uint)&local_1f4 >> 0x10);
        local_35 = (char)((uint)&local_1f4 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x860459;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x860463;
        FUN_0070f800(local_34);
        uStack_38 = 0x473;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_1f4,L"Topics");
        if ((bool)uVar19) {
          iVar15 = *local_30 - local_30[0x98];
          if (SBORROW4(*local_30,local_30[0x98])) {
            uStack_38 = 0x48a;
            uStack_36 = 0x86;
            local_35 = 0;
            iVar15 = thunk_FUN_004072dc();
          }
          fVar21 = (float10)iVar15;
          puStack_40 = SUB104(fVar21,0);
          puStack_3c = (undefined1 *)((unkuint10)fVar21 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)fVar21 >> 0x40);
          uStack_44._0_2_ = 0x4a8;
          uStack_44._2_2_ = 0x86;
          fVar21 = fVar22;
          iStack_a8 = iVar15;
          FUN_00b20c94(local_1f8);
          uStack_44._0_2_ = 0x4b8;
          uStack_44._2_2_ = 0x86;
          FUN_0040d79c(local_1f8,L" top.");
          uStack_44._0_2_ = local_1f8._0_2_;
          uStack_44._2_2_ = local_1f8._2_2_;
          if (SBORROW4((uint)local_9,1)) {
            local_48 = (undefined1 *)0x8604ce;
            thunk_FUN_004072dc();
          }
          local_48 = (undefined *)0x8604db;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&uStack_1fc,0);
        uStack_36 = (undefined1)((uint)&uStack_1fc >> 0x10);
        local_35 = (char)((uint)&uStack_1fc >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x8604f1;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x8604fb;
        FUN_0070f800(local_34);
        uStack_38 = 0x50b;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(uStack_1fc,L"Outstanding");
        if ((bool)uVar19) {
          uStack_38 = 0x518;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_009aa044(auStack_200);
          uStack_38 = 0x528;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040d79c(auStack_200,L" el.");
          uStack_38 = auStack_200._0_2_;
          uStack_36 = auStack_200[2];
          local_35 = auStack_200[3];
          if (SBORROW4((uint)local_9,1)) {
            puStack_3c = (undefined1 *)0x86053e;
            thunk_FUN_004072dc();
          }
          puStack_3c = (undefined1 *)0x86054b;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_204,0);
        uStack_36 = (undefined1)((uint)&local_204 >> 0x10);
        local_35 = (char)((uint)&local_204 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x860561;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x86056b;
        FUN_0070f800(local_34);
        uStack_38 = 0x57b;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_204,L"Average FI");
        uVar6 = uStack_44._2_2_;
        uVar2 = (undefined2)uStack_44;
        uStack_44._0_2_ = SUB42(unaff_EBX,0);
        uVar4 = (undefined2)uStack_44;
        uStack_44._2_2_ = (undefined2)((uint)unaff_EBX >> 0x10);
        uVar7 = uStack_44._2_2_;
        uStack_44._0_2_ = uVar2;
        uStack_44._2_2_ = uVar6;
        if ((bool)uVar19) {
          uStack_38 = 0x58c;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040a340(local_30 + 0xb);
          in_ST2 = in_ST2 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x4b0);
          puStack_40 = SUB104(in_ST2,0);
          puStack_3c = (undefined1 *)((unkuint10)in_ST2 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)in_ST2 >> 0x40);
          uStack_44._0_2_ = 0x5b2;
          uStack_44._2_2_ = 0x86;
          fVar25 = fVar21;
          FUN_00409cb4(0,2,auStack_1b0);
          uStack_44._0_2_ = 0x5c0;
          uStack_44._2_2_ = 0x86;
          FUN_0040d710(&stack0xffffffec,auStack_1b0);
          uStack_44._0_2_ = 0x5cf;
          uStack_44._2_2_ = 0x86;
          FUN_004282b0(*(undefined *)((int)local_30 + 0x17),&stack0xffffffe8);
          local_48 = &DAT_00861fe8;
          piStack_50 = (int *)&DAT_00861e20;
          local_54 = (int *)0x8605ef;
          piStack_4c = unaff_ESI;
          uStack_44._0_2_ = uVar4;
          uStack_44._2_2_ = uVar7;
          FUN_0040d87c(&piStack_208,4);
          local_54 = piStack_208;
          in_ST2 = in_ST3;
          fVar23 = in_ST4;
          fVar9 = in_ST5;
          fVar24 = in_ST6;
          fVar10 = in_ST7;
          fVar11 = fVar22;
          fVar12 = fVar21;
          if (SBORROW4((uint)local_9,1)) {
            piStack_58 = (int *)0x860605;
            thunk_FUN_004072dc();
            in_ST2 = in_ST3;
            fVar23 = in_ST4;
            fVar9 = in_ST5;
            fVar24 = in_ST6;
            fVar10 = in_ST7;
            fVar11 = fVar22;
            fVar12 = fVar21;
          }
          fVar21 = fVar25;
          fVar22 = fVar12;
          in_ST7 = fVar11;
          in_ST6 = fVar10;
          in_ST5 = fVar24;
          in_ST4 = fVar9;
          in_ST3 = fVar23;
          piStack_58 = (int *)0x860612;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&uStack_20c,0);
        uStack_36 = (undefined1)((uint)&uStack_20c >> 0x10);
        local_35 = (char)((uint)&uStack_20c >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x860628;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x860632;
        FUN_0070f800(local_34);
        uStack_38 = 0x642;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(uStack_20c,L"R-Metric");
        if ((bool)uVar19) {
          if (0 < *(int *)PTR_DAT_00baa138) {
            uStack_38 = SUB42(&stack0xfffffffc,0);
            uStack_36 = (undefined1)((uint)&stack0xfffffffc >> 0x10);
            local_35 = (char)((uint)&stack0xfffffffc >> 0x18);
            puStack_3c = &LAB_00860707;
            puStack_40 = (undefined1 *)*in_FS_OFFSET;
            *in_FS_OFFSET = &puStack_40;
            iStack_80 = local_9 - 1;
            if (SBORROW4((uint)local_9,1)) {
              uStack_44._0_2_ = 0x695;
              uStack_44._2_2_ = 0x86;
              iStack_80 = thunk_FUN_004072dc();
            }
            fVar22 = ((float10)*(double *)PTR_DAT_00baaeac - (float10)*(double *)PTR_DAT_00baa38c) *
                     (float10)_DAT_00861d68;
            piStack_4c = SUB104(fVar22,0);
            local_48 = (undefined1 *)((unkuint10)fVar22 >> 0x20);
            uStack_44._0_2_ = (undefined2)((unkuint10)fVar22 >> 0x40);
            piStack_50 = (int *)0x8606c7;
            FUN_0042bc74(L"0.####",PTR_DAT_00baa920,&local_7c);
            uStack_44._0_2_ = 0x6da;
            uStack_44._2_2_ = 0x86;
            FUN_0040d7f4(local_210,local_7c,&DAT_00862048);
            uStack_44._0_2_ = local_210._0_2_;
            uStack_44._2_2_ = local_210._2_2_;
            local_48 = (undefined1 *)0x8606f1;
            FUN_0070f880(local_34,1,iStack_80);
            uVar17 = CONCAT13(local_35,CONCAT12(uStack_36,uStack_38));
            *in_FS_OFFSET = puStack_40;
            uStack_38 = 0x70e;
            uStack_36 = 0x86;
            local_35 = 0;
            puStack_3c = (undefined1 *)0x860706;
            FUN_0040c5c8(&local_7c,puStack_40,uVar17);
            return;
          }
          uStack_38 = 0x201c;
          uStack_36 = 0x86;
          local_35 = 0;
          if (SBORROW4((uint)local_9,1)) {
            puStack_3c = (undefined1 *)0x860666;
            thunk_FUN_004072dc();
          }
          puStack_3c = (undefined1 *)0x860673;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_214,0);
        uStack_36 = (undefined1)((uint)&local_214 >> 0x10);
        local_35 = (char)((uint)&local_214 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x860724;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x86072e;
        FUN_0070f800(local_34);
        uStack_38 = 0x73e;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_214,L"Measured FI");
        if ((bool)uVar19) {
          uStack_38 = 0x74f;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040a340(local_30 + 6);
          in_ST2 = in_ST2 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x470);
          puStack_40 = SUB104(in_ST2,0);
          puStack_3c = (undefined1 *)((unkuint10)in_ST2 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)in_ST2 >> 0x40);
          uStack_44._0_2_ = 0x775;
          uStack_44._2_2_ = 0x86;
          fVar25 = fVar21;
          FUN_00409cb4(0,2,auStack_1b0);
          uStack_44._0_2_ = 0x783;
          uStack_44._2_2_ = 0x86;
          FUN_0040d710(&stack0xffffffec,auStack_1b0);
          iVar15 = (uint)DAT_00ca3870 + (uint)*(byte *)(*(int *)PTR_DAT_00ba9c04 + 0x4d9);
          in_ST2 = in_ST3;
          fVar23 = in_ST4;
          fVar9 = in_ST5;
          fVar24 = in_ST6;
          fVar10 = in_ST7;
          fVar11 = fVar22;
          fVar12 = fVar21;
          if (SCARRY4((uint)DAT_00ca3870,(uint)*(byte *)(*(int *)PTR_DAT_00ba9c04 + 0x4d9))) {
            uStack_44._0_2_ = 0x7a2;
            uStack_44._2_2_ = 0x86;
            iVar15 = thunk_FUN_004072dc();
            in_ST2 = in_ST3;
            fVar23 = in_ST4;
            fVar9 = in_ST5;
            fVar24 = in_ST6;
            fVar10 = in_ST7;
            fVar11 = fVar22;
            fVar12 = fVar21;
          }
          fVar21 = fVar25;
          fVar22 = fVar12;
          in_ST7 = fVar11;
          in_ST6 = fVar10;
          in_ST5 = fVar24;
          in_ST4 = fVar9;
          in_ST3 = fVar23;
          if (iVar15 == 0) {
            uStack_44._0_2_ = 0x7fd;
            uStack_44._2_2_ = 0x86;
            FUN_0040c5c8(&stack0xffffffe8);
          }
          else {
            uStack_44._0_2_ = 0x7b2;
            uStack_44._2_2_ = 0x86;
            FUN_00941840(*(undefined4 *)PTR_DAT_00ba9c04);
            piStack_4c = SUB104(in_ST2,0);
            local_48 = (undefined1 *)((unkuint10)in_ST2 >> 0x20);
            uStack_44._0_2_ = (undefined2)((unkuint10)in_ST2 >> 0x40);
            piStack_50 = (int *)0x8607cb;
            fVar23 = fVar21;
            FUN_00409cb4(0,1,auStack_1b0);
            piStack_50 = (int *)0x8607d9;
            FUN_0040d710(&stack0xffffffe8,auStack_1b0);
            piStack_50 = (int *)&DAT_00862080;
            piStack_58 = (int *)&DAT_00861e20;
            uStack_5c = 0x7f3;
            uStack_5a = 0x86;
            local_54 = unaff_ESI;
            FUN_0040d87c(&stack0xffffffe8,3);
            in_ST2 = in_ST3;
            in_ST3 = in_ST4;
            in_ST4 = in_ST5;
            in_ST5 = in_ST6;
            in_ST6 = in_ST7;
            in_ST7 = fVar22;
            fVar22 = fVar21;
            fVar21 = fVar23;
          }
          local_2c = (double)CONCAT44(local_2c._4_4_,unaff_EBX);
          local_30 = (int *)&DAT_00862090;
          uStack_38 = 0x818;
          uStack_36 = 0x86;
          local_35 = 0;
          local_34 = unaff_ESI;
          FUN_0040d87c(local_218,3);
          uStack_38 = local_218._0_2_;
          uStack_36 = local_218[2];
          local_35 = local_218[3];
          if (SBORROW4((uint)local_9,1)) {
            puStack_3c = (undefined1 *)0x86082e;
            thunk_FUN_004072dc();
          }
          puStack_3c = (undefined1 *)0x86083b;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_21c,0);
        uStack_36 = (undefined1)((uint)&local_21c >> 0x10);
        local_35 = (char)((uint)&local_21c >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x860851;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x86085b;
        FUN_0070f800(local_34);
        uStack_38 = 0x86b;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_21c,L"Retention");
        if ((bool)uVar19) {
          fVar21 = (float10)local_2c * (float10)_DAT_00861d68;
          puStack_40 = SUB104(fVar21,0);
          puStack_3c = (undefined1 *)((unkuint10)fVar21 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)fVar21 >> 0x40);
          uStack_44._0_2_ = 0x88f;
          uStack_44._2_2_ = 0x86;
          fVar21 = fVar22;
          FUN_00409cb4(0,4,auStack_1b0);
          uStack_44._0_2_ = 0x89d;
          uStack_44._2_2_ = 0x86;
          FUN_0040d710(&stack0xffffffec,auStack_1b0);
          uStack_44._0_2_ = 0x8b0;
          uStack_44._2_2_ = 0x86;
          FUN_0040d7f4(local_220,unaff_EBX,&DAT_008620c4);
          uStack_44._0_2_ = local_220._0_2_;
          uStack_44._2_2_ = local_220._2_2_;
          if (SBORROW4((uint)local_9,1)) {
            local_48 = (undefined1 *)0x8608c6;
            thunk_FUN_004072dc();
          }
          local_48 = (undefined *)0x8608d3;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_224,0);
        uStack_36 = (undefined1)((uint)&local_224 >> 0x10);
        local_35 = (char)((uint)&local_224 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x8608e9;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x8608f3;
        FUN_0070f800(local_34);
        uStack_38 = 0x903;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_224,L"Burden");
        if ((bool)uVar19) {
          uStack_38 = 0x914;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040a340((undefined *)((int)local_30 + 0xd));
          in_ST2 = in_ST2 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x478);
          puStack_40 = SUB104(in_ST2,0);
          puStack_3c = (undefined1 *)((unkuint10)in_ST2 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)in_ST2 >> 0x40);
          uVar19 = 1;
          uStack_44._0_2_ = 0x93a;
          uStack_44._2_2_ = 0x86;
          fVar24 = fVar21;
          FUN_00409cb4(0,3,auStack_1b0);
          uStack_44._0_2_ = 0x948;
          uStack_44._2_2_ = 0x86;
          FUN_0040d710(&stack0xffffffec,auStack_1b0);
          uStack_44._0_2_ = 0x955;
          uStack_44._2_2_ = 0x86;
          FUN_0040d98c(unaff_EBX,L"0.000");
          in_ST2 = in_ST4;
          fVar23 = in_ST6;
          fVar9 = fVar22;
          if ((bool)uVar19) {
            uStack_44._0_2_ = 0x964;
            uStack_44._2_2_ = 0x86;
            FUN_0040c9f0(&stack0xffffffec,&DAT_00861dfc);
            in_ST2 = in_ST4;
            fVar23 = in_ST6;
            fVar9 = fVar22;
          }
          fVar22 = fVar24;
          in_ST6 = fVar9;
          in_ST4 = fVar23;
          uStack_44._0_2_ = 0x971;
          uStack_44._2_2_ = 0x86;
          FUN_0040a340(local_30 + 0x9a);
          in_ST3 = in_ST3 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x480);
          piStack_4c = SUB104(in_ST3,0);
          local_48 = (undefined1 *)((unkuint10)in_ST3 >> 0x20);
          uStack_44._0_2_ = (undefined2)((unkuint10)in_ST3 >> 0x40);
          uVar19 = 1;
          piStack_50 = (int *)0x860997;
          fVar24 = fVar22;
          FUN_00409cb4(0,3,auStack_1b0);
          piStack_50 = (int *)0x8609a5;
          FUN_0040d710(&stack0xffffffe8,auStack_1b0);
          piStack_50 = (int *)0x8609b2;
          FUN_0040d98c(unaff_ESI,L"0.000");
          in_ST3 = in_ST5;
          fVar23 = in_ST7;
          fVar9 = fVar21;
          if ((bool)uVar19) {
            piStack_50 = (int *)0x8609c1;
            FUN_0040c9f0(&stack0xffffffe8,&DAT_00861dfc);
            in_ST3 = in_ST5;
            fVar23 = in_ST7;
            fVar9 = fVar21;
          }
          fVar21 = fVar24;
          in_ST7 = fVar9;
          in_ST5 = fVar23;
          local_54 = (int *)&DAT_00862108;
          uStack_5c = 0x9dc;
          uStack_5a = 0x86;
          piStack_58 = unaff_ESI;
          piStack_50 = unaff_EBX;
          FUN_0040d87c(local_228,3);
          uStack_5c = local_228._0_2_;
          uStack_5a = local_228._2_2_;
          if (SBORROW4((uint)local_9,1)) {
            puStack_60 = (undefined *)0x8609f2;
            thunk_FUN_004072dc();
          }
          puStack_60 = (undefined *)0x8609ff;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_22c,0);
        uStack_36 = (undefined1)((uint)&local_22c >> 0x10);
        local_35 = (char)((uint)&local_22c >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x860a15;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x860a1f;
        FUN_0070f800(local_34);
        uStack_38 = 0xa2f;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_22c,L"Burden +/-");
        if ((bool)uVar19) {
          uStack_38 = 0xa40;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040a340((undefined *)((int)local_30 + 0xd));
          fVar23 = (in_ST2 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x478)) -
                   (float10)DAT_00ca3860;
          puStack_40 = SUB104(fVar23,0);
          puStack_3c = (undefined1 *)((unkuint10)fVar23 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)fVar23 >> 0x40);
          uVar19 = 1;
          uStack_44._0_2_ = 0xa6c;
          uStack_44._2_2_ = 0x86;
          fVar24 = fVar21;
          FUN_00409cb4(0,3,auStack_1b0);
          uStack_44._0_2_ = 0xa7a;
          uStack_44._2_2_ = 0x86;
          FUN_0040d710(&stack0xffffffec,auStack_1b0);
          uStack_44._0_2_ = 0xa87;
          uStack_44._2_2_ = 0x86;
          FUN_0040d98c(unaff_EBX,L"0.000");
          in_ST2 = in_ST4;
          fVar23 = in_ST6;
          fVar9 = fVar22;
          if ((bool)uVar19) {
            uStack_44._0_2_ = 0xa96;
            uStack_44._2_2_ = 0x86;
            FUN_0040c9f0(&stack0xffffffec,&DAT_00861dfc);
            in_ST2 = in_ST4;
            fVar23 = in_ST6;
            fVar9 = fVar22;
          }
          fVar22 = fVar24;
          in_ST6 = fVar9;
          in_ST4 = fVar23;
          uStack_44._0_2_ = 0xaa3;
          uStack_44._2_2_ = 0x86;
          FUN_0040a340(local_30 + 0x9a);
          fVar23 = (in_ST3 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x480)) -
                   (float10)DAT_00ca3868;
          piStack_4c = SUB104(fVar23,0);
          local_48 = (undefined1 *)((unkuint10)fVar23 >> 0x20);
          uStack_44._0_2_ = (undefined2)((unkuint10)fVar23 >> 0x40);
          uVar19 = 1;
          piStack_50 = (int *)0x860acf;
          fVar24 = fVar22;
          FUN_00409cb4(0,3,auStack_1b0);
          piStack_50 = (int *)0x860add;
          FUN_0040d710(&stack0xffffffe8,auStack_1b0);
          piStack_50 = (int *)0x860aea;
          FUN_0040d98c(unaff_ESI,L"0.000");
          in_ST3 = in_ST5;
          fVar23 = in_ST7;
          fVar9 = fVar21;
          if ((bool)uVar19) {
            piStack_50 = (int *)0x860af9;
            FUN_0040c9f0(&stack0xffffffe8,&DAT_00861dfc);
            in_ST3 = in_ST5;
            fVar23 = in_ST7;
            fVar9 = fVar21;
          }
          fVar21 = fVar24;
          in_ST7 = fVar9;
          in_ST5 = fVar23;
          piStack_50 = (int *)&DAT_00862080;
          piStack_58 = (int *)&DAT_0086213c;
          puStack_60 = &DAT_00862150;
          local_64 = (int *)0x860b1b;
          uStack_5c = uVar3;
          uStack_5a = uVar5;
          local_54 = unaff_EBX;
          FUN_0040d87c(&stack0xffffffe8,5);
          local_64 = (int *)0x860b28;
          FUN_0040d98c(unaff_ESI,L"(0)+(0)");
          if ((bool)uVar19) {
            local_64 = (int *)0x860b37;
            FUN_0040c9f0(&stack0xffffffe8,L"No change");
          }
          local_64 = unaff_ESI;
          if (SBORROW4((uint)local_9,1)) {
            uStack_68 = 0x860b4a;
            thunk_FUN_004072dc();
          }
          uStack_68 = 0x860b57;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_230,0);
        uStack_36 = (undefined1)((uint)&local_230 >> 0x10);
        local_35 = (char)((uint)&local_230 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x860b6d;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x860b77;
        FUN_0070f800(local_34);
        uStack_38 = 0xb87;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_230,L"Avg Workload");
        if ((bool)uVar19) {
          uStack_38 = 0xb95;
          uStack_36 = 0x86;
          local_35 = 0;
          iStack_a8 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
          uStack_98 = *(double *)((int)local_30 + 499) / (double)iStack_a8;
          uStack_38 = (undefined2)((ulonglong)uStack_98 >> 0x20);
          uStack_36 = (undefined1)((ulonglong)uStack_98 >> 0x30);
          local_35 = (char)((ulonglong)uStack_98 >> 0x38);
          puStack_3c = (undefined1 *)(undefined4)uStack_98;
          puStack_40 = (undefined1 *)0x860bc8;
          fVar21 = fVar22;
          FUN_00b1ecd4(&local_234);
          puStack_40 = local_234;
          if (SBORROW4((uint)local_9,1)) {
            uStack_44._0_2_ = 0xbde;
            uStack_44._2_2_ = 0x86;
            thunk_FUN_004072dc();
          }
          uStack_44._0_2_ = 0xbeb;
          uStack_44._2_2_ = 0x86;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_238,0);
        uStack_36 = (undefined1)((uint)&local_238 >> 0x10);
        local_35 = (char)((uint)&local_238 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x860c01;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x860c0b;
        FUN_0070f800(local_34);
        uStack_38 = 0xc1b;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_238,L"Exp Workload");
        if ((bool)uVar19) {
          uStack_38 = 0xc28;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040a340((undefined *)((int)local_30 + 0x4a));
          local_248 = (in_ST2 / (float10)_DAT_008621e0) / (float10)_DAT_008621e4;
          uStack_38 = 0xc46;
          uStack_36 = 0x86;
          local_35 = 0;
          in_ST2 = in_ST4;
          in_ST4 = in_ST6;
          in_ST6 = fVar22;
          FUN_0040a340((undefined *)((int)local_30 + 0xd));
          uStack_98 = (double)(local_248 *
                              (in_ST3 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x478)));
          uStack_38 = (undefined2)((ulonglong)uStack_98 >> 0x20);
          uStack_36 = (undefined1)((ulonglong)uStack_98 >> 0x30);
          local_35 = (char)((ulonglong)uStack_98 >> 0x38);
          puStack_3c = (undefined1 *)(undefined4)uStack_98;
          puStack_40 = (undefined1 *)0x860c79;
          fVar22 = fVar21;
          fVar24 = fVar21;
          FUN_00b1ecd4(&local_23c);
          puStack_40 = local_23c;
          in_ST3 = in_ST5;
          fVar23 = in_ST7;
          fVar9 = fVar21;
          if (SBORROW4((uint)local_9,1)) {
            uStack_44._0_2_ = 0xc8f;
            uStack_44._2_2_ = 0x86;
            thunk_FUN_004072dc();
            in_ST3 = in_ST5;
            fVar23 = in_ST7;
            fVar9 = fVar21;
          }
          fVar21 = fVar24;
          in_ST7 = fVar9;
          in_ST5 = fVar23;
          uStack_44._0_2_ = 0xc9c;
          uStack_44._2_2_ = 0x86;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_24c,0);
        uStack_36 = (undefined1)((uint)&local_24c >> 0x10);
        local_35 = (char)((uint)&local_24c >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x860cb2;
          thunk_FUN_004072dc();
        }
        uVar20 = 1;
        puStack_3c = (undefined1 *)0x860cbc;
        FUN_0070f800(local_34);
        uStack_38 = 0xccc;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_24c,L"Speed");
        uStack_36 = (undefined1)((uint)unaff_EBX >> 0x10);
        uVar19 = uStack_36;
        local_35 = (char)((uint)unaff_EBX >> 0x18);
        cVar8 = local_35;
        if ((bool)uVar20) {
          uStack_38 = 0xcde;
          uStack_36 = 0x86;
          local_35 = 0;
          iStack_a8 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
          uStack_98 = *(double *)((int)local_30 + 499) / (double)iStack_a8;
          uStack_38 = (undefined2)((ulonglong)uStack_98 >> 0x20);
          uStack_36 = (undefined1)((ulonglong)uStack_98 >> 0x30);
          local_35 = (char)((ulonglong)uStack_98 >> 0x38);
          puStack_3c = (undefined1 *)(undefined4)uStack_98;
          puStack_40 = (undefined1 *)0x860d12;
          fVar25 = fVar22;
          uVar13 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
          fVar21 = in_ST2;
          fVar23 = in_ST3;
          fVar9 = in_ST4;
          fVar24 = in_ST5;
          fVar10 = in_ST6;
          fVar11 = in_ST7;
          fVar12 = fVar22;
          if (0xffff < uVar13) {
            puStack_40 = (undefined1 *)0x860d21;
            thunk_FUN_004072dc();
            fVar21 = in_ST2;
            fVar23 = in_ST3;
            fVar9 = in_ST4;
            fVar24 = in_ST5;
            fVar10 = in_ST6;
            fVar11 = in_ST7;
            fVar12 = fVar22;
          }
          fVar22 = fVar25;
          in_ST7 = fVar12;
          in_ST6 = fVar11;
          in_ST5 = fVar10;
          in_ST4 = fVar24;
          in_ST3 = fVar9;
          in_ST2 = fVar23;
          if (SCARRY4(local_30[0x99],(int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a))) {
            puStack_40 = (undefined1 *)0x860d42;
            thunk_FUN_004072dc(local_30[0x99] + (int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a));
          }
          puStack_40 = (undefined1 *)0x860d47;
          FUN_008b3d98();
          local_24 = (double)fVar21 * local_2c;
          if (1.0 <= local_24) {
            uStack_38 = SUB42(&stack0xfffffffc,0);
            uStack_36 = (undefined1)((uint)&stack0xfffffffc >> 0x10);
            local_35 = (char)((uint)&stack0xfffffffc >> 0x18);
            puStack_3c = &LAB_00860dbb;
            puStack_40 = (undefined1 *)*in_FS_OFFSET;
            *in_FS_OFFSET = &puStack_40;
            fVar22 = (float10)local_24;
            piStack_4c = SUB104(fVar22,0);
            local_48 = (undefined1 *)((unkuint10)fVar22 >> 0x20);
            uStack_44._0_2_ = (undefined2)((unkuint10)fVar22 >> 0x40);
            piStack_50 = (int *)0x860d9a;
            FUN_0042bc74(L"0.###",PTR_DAT_00baa920,&uStack_84);
            uStack_44._0_2_ = 0xda5;
            uStack_44._2_2_ = 0x86;
            FUN_0040c9f0(&stack0xffffffec,uStack_84);
            uVar17 = CONCAT13(local_35,CONCAT12(uStack_36,uStack_38));
            *in_FS_OFFSET = puStack_40;
            uStack_38 = 0xdc2;
            uStack_36 = 0x86;
            local_35 = 0;
            puStack_3c = (undefined1 *)0x860dba;
            FUN_0040c5c8(&uStack_84,puStack_40,uVar17);
            return;
          }
          uStack_38 = 0xd6d;
          uStack_36 = 0x86;
          local_35 = 0;
          fVar21 = fVar22;
          FUN_0040c9f0(&stack0xffffffec,&DAT_0086220c);
          uStack_38 = uVar4;
          uStack_36 = uVar19;
          local_35 = cVar8;
          if (SBORROW4((uint)local_9,1)) {
            puStack_3c = (undefined1 *)0x860de2;
            thunk_FUN_004072dc();
          }
          puStack_3c = (undefined1 *)0x860def;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_250,0);
        uStack_36 = (undefined1)((uint)&local_250 >> 0x10);
        local_35 = (char)((uint)&local_250 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x860e05;
          thunk_FUN_004072dc();
        }
        uVar20 = 1;
        puStack_3c = (undefined1 *)0x860e0f;
        FUN_0070f800(local_34);
        uStack_38 = 0xe1f;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_250,L"Avg Cost");
        if ((bool)uVar20) {
          iVar15 = local_30[0x99] + (int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a);
          if (SCARRY4(local_30[0x99],(int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a))) {
            uStack_38 = 0xe46;
            uStack_36 = 0x86;
            local_35 = 0;
            iVar15 = thunk_FUN_004072dc();
          }
          if ((iVar15 < 1) || (fVar21 = fVar22, *(double *)((int)local_30 + 499) <= 0.0)) {
            uStack_38 = 0xee1;
            uStack_36 = 0x86;
            local_35 = 0;
            FUN_0040c9f0(&stack0xffffffec,&DAT_0086220c);
          }
          else {
            iVar15 = local_30[0x99] + (int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a);
            if (SCARRY4(local_30[0x99],(int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a))) {
              uStack_38 = 0xe80;
              uStack_36 = 0x86;
              local_35 = 0;
              iVar15 = thunk_FUN_004072dc();
            }
            local_24 = *(double *)((int)local_30 + 499) / (double)iVar15;
            if (0.0 < local_2c) {
              local_24 = local_24 / local_2c;
            }
            uStack_38 = (undefined2)((ulonglong)local_24 >> 0x20);
            uStack_36 = (undefined1)((ulonglong)local_24 >> 0x30);
            local_35 = (char)((ulonglong)local_24 >> 0x38);
            puStack_3c = (undefined1 *)(undefined4)local_24;
            puStack_40 = (undefined1 *)0x860ebf;
            fVar21 = fVar22;
            iStack_a8 = iVar15;
            FUN_00b1ecd4(&local_254);
            puStack_40 = (undefined1 *)0x860ed2;
            FUN_0040d7f4(&stack0xffffffec,local_254,L" (min/it)");
          }
          uStack_38 = uVar4;
          uStack_36 = uVar19;
          local_35 = cVar8;
          if (SBORROW4((uint)local_9,1)) {
            puStack_3c = (undefined1 *)0x860ef4;
            thunk_FUN_004072dc();
          }
          puStack_3c = (undefined1 *)0x860f01;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_258,0);
        uStack_36 = (undefined1)((uint)&local_258 >> 0x10);
        local_35 = (char)((uint)&local_258 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x860f17;
          thunk_FUN_004072dc();
        }
        uVar20 = 1;
        puStack_3c = (undefined1 *)0x860f21;
        FUN_0070f800(local_34);
        uStack_38 = 0xf31;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_258,L"Exp Cost");
        if ((bool)uVar20) {
          iVar15 = local_30[0x99] + (int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a);
          if (SCARRY4(local_30[0x99],(int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a))) {
            uStack_38 = 0xf58;
            uStack_36 = 0x86;
            local_35 = 0;
            iVar15 = thunk_FUN_004072dc();
          }
          if (iVar15 < 1) {
            uStack_38 = 0x1038;
            uStack_36 = 0x86;
            local_35 = 0;
            FUN_0040c9f0(&stack0xffffffec,&DAT_0086220c);
          }
          else {
            uStack_38 = 0xf6c;
            uStack_36 = 0x86;
            local_35 = 0;
            iStack_a8 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
            fVar24 = (float10)iStack_a8;
            iVar15 = local_30[0x99] + (int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a);
            fVar22 = in_ST2;
            fVar21 = in_ST3;
            fVar23 = in_ST4;
            fVar9 = in_ST5;
            if (SCARRY4(local_30[0x99],(int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a))) {
              uStack_38 = 0xf99;
              uStack_36 = 0x86;
              local_35 = 0;
              iVar15 = thunk_FUN_004072dc();
              fVar22 = in_ST2;
              fVar21 = in_ST3;
              fVar23 = in_ST4;
              fVar9 = in_ST5;
            }
            in_ST5 = in_ST7;
            in_ST4 = in_ST6;
            in_ST3 = fVar9;
            in_ST2 = fVar23;
            local_248 = (float10)iVar15 / fVar24;
            uStack_38 = 0xfb9;
            uStack_36 = 0x86;
            local_35 = 0;
            in_ST6 = in_ST5;
            in_ST7 = in_ST5;
            local_1b4 = iVar15;
            FUN_0040a340((undefined *)((int)local_30 + 0x4a));
            uStack_38 = 0xfcb;
            uStack_36 = 0x86;
            local_35 = 0;
            local_264 = fVar22;
            FUN_0040a340((undefined *)((int)local_30 + 0xd));
            local_24 = (((double)((local_264 *
                                  (fVar21 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x478)))
                                 / local_248) / (double)_DAT_008622b0) / (double)_DAT_008622b0) /
                       (double)_DAT_008621e4;
            uStack_38 = (undefined2)((ulonglong)local_24 >> 0x20);
            uStack_36 = (undefined1)((ulonglong)local_24 >> 0x30);
            local_35 = (char)((ulonglong)local_24 >> 0x38);
            puStack_3c = (undefined1 *)(undefined4)local_24;
            puStack_40 = (undefined1 *)0x861016;
            fVar22 = in_ST7;
            fVar21 = in_ST7;
            FUN_00b1ecd4(&local_268);
            puStack_40 = (undefined1 *)0x861029;
            FUN_0040d7f4(&stack0xffffffec,local_268,L" (min/it)");
          }
          uStack_38 = uVar4;
          uStack_36 = uVar19;
          local_35 = cVar8;
          if (SBORROW4((uint)local_9,1)) {
            puStack_3c = (undefined1 *)0x86104b;
            thunk_FUN_004072dc();
          }
          puStack_3c = (undefined1 *)0x861058;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_26c,0);
        uStack_36 = (undefined1)((uint)&local_26c >> 0x10);
        local_35 = (char)((uint)&local_26c >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x86106e;
          thunk_FUN_004072dc();
        }
        uVar20 = 1;
        puStack_3c = (undefined1 *)0x861078;
        FUN_0070f800(local_34);
        uStack_38 = 0x1088;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_26c,L"Repetitions");
        if ((bool)uVar20) {
          uStack_38 = 0x1099;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040a340((undefined *)((int)local_30 + 0x32));
          in_ST2 = in_ST2 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x488);
          puStack_40 = SUB104(in_ST2,0);
          puStack_3c = (undefined1 *)((unkuint10)in_ST2 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)in_ST2 >> 0x40);
          uStack_44._0_2_ = 0x10bf;
          uStack_44._2_2_ = 0x86;
          fVar23 = fVar21;
          FUN_00409cb4(0,3,auStack_1b0);
          uStack_44._0_2_ = 0x10cd;
          uStack_44._2_2_ = 0x86;
          FUN_0040d710(&stack0xffffffec,auStack_1b0);
          uStack_44._0_2_ = 0x10da;
          uStack_44._2_2_ = 0x86;
          in_ST2 = in_ST4;
          in_ST4 = in_ST6;
          in_ST6 = fVar22;
          fVar22 = fVar23;
          FUN_0040a340(local_30 + 0xa0);
          in_ST3 = in_ST3 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x4b8);
          piStack_4c = SUB104(in_ST3,0);
          local_48 = (undefined1 *)((unkuint10)in_ST3 >> 0x20);
          uStack_44._0_2_ = (undefined2)((unkuint10)in_ST3 >> 0x40);
          piStack_50 = (int *)0x861100;
          fVar24 = fVar22;
          FUN_00409cb4(0,3,auStack_1b0);
          piStack_50 = (int *)0x86110e;
          FUN_0040d710(&stack0xffffffe8,auStack_1b0);
          piStack_50 = (int *)&DAT_008622e4;
          piStack_58 = (int *)&DAT_008622f8;
          puStack_60 = (undefined *)0x86112e;
          uStack_5c = uVar3;
          uStack_5a = uVar5;
          local_54 = unaff_EBX;
          FUN_0040d87c(&local_270,4);
          puStack_60 = local_270;
          in_ST3 = in_ST5;
          fVar23 = in_ST7;
          fVar9 = fVar21;
          if (SBORROW4((uint)local_9,1)) {
            local_64 = (int *)0x861144;
            thunk_FUN_004072dc();
            in_ST3 = in_ST5;
            fVar23 = in_ST7;
            fVar9 = fVar21;
          }
          fVar21 = fVar24;
          in_ST7 = fVar9;
          in_ST5 = fVar23;
          local_64 = (int *)0x861151;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_274,0);
        uStack_36 = (undefined1)((uint)&local_274 >> 0x10);
        local_35 = (char)((uint)&local_274 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x861167;
          thunk_FUN_004072dc();
        }
        uVar20 = 1;
        puStack_3c = (undefined1 *)0x861171;
        FUN_0070f800(local_34);
        uStack_38 = 0x1181;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_274,L"Lapses");
        if ((bool)uVar20) {
          iVar15 = local_30[0x99] + (int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a);
          if (SCARRY4(local_30[0x99],(int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a))) {
            uStack_38 = 0x11a8;
            uStack_36 = 0x86;
            local_35 = 0;
            iVar15 = thunk_FUN_004072dc();
          }
          if (iVar15 < 1) {
            uStack_38 = 0x1248;
            uStack_36 = 0x86;
            local_35 = 0;
            FUN_0040c9f0(&stack0xffffffec,&DAT_0086220c);
          }
          else {
            uStack_38 = 0x11bb;
            uStack_36 = 0x86;
            local_35 = 0;
            FUN_0040a340(local_30 + 0xe);
            in_ST2 = in_ST2 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x490);
            puStack_40 = SUB104(in_ST2,0);
            puStack_3c = (undefined1 *)((unkuint10)in_ST2 >> 0x20);
            uStack_38 = (undefined2)((unkuint10)in_ST2 >> 0x40);
            uStack_44._0_2_ = 0x11e1;
            uStack_44._2_2_ = 0x86;
            fVar25 = fVar21;
            FUN_00409cb4(0,5,auStack_1b0);
            uStack_44._0_2_ = 0x11ef;
            uStack_44._2_2_ = 0x86;
            FUN_0040d710(&stack0xffffffec,auStack_1b0);
            local_48 = &DAT_00861e0c;
            iVar15 = (uint)DAT_00ca3872 + (uint)*(byte *)(*(int *)PTR_DAT_00ba9c04 + 0x4d8);
            in_ST2 = in_ST3;
            fVar23 = in_ST4;
            fVar9 = in_ST5;
            fVar24 = in_ST6;
            fVar10 = in_ST7;
            fVar11 = fVar22;
            fVar12 = fVar21;
            uStack_44._0_2_ = uVar4;
            uStack_44._2_2_ = uVar7;
            if (SCARRY4((uint)DAT_00ca3872,(uint)*(byte *)(*(int *)PTR_DAT_00ba9c04 + 0x4d8))) {
              piStack_4c = (int *)0x861216;
              iVar15 = thunk_FUN_004072dc(iVar15);
              in_ST2 = in_ST3;
              fVar23 = in_ST4;
              fVar9 = in_ST5;
              fVar24 = in_ST6;
              fVar10 = in_ST7;
              fVar11 = fVar22;
              fVar12 = fVar21;
            }
            fVar21 = fVar25;
            fVar22 = fVar12;
            in_ST7 = fVar11;
            in_ST6 = fVar10;
            in_ST5 = fVar24;
            in_ST4 = fVar9;
            in_ST3 = fVar23;
            piStack_4c = (int *)0x861221;
            FUN_004282b0(iVar15,&local_278);
            piStack_4c = local_278;
            piStack_50 = (int *)&DAT_00862150;
            local_54 = (int *)0x861239;
            FUN_0040d87c(&stack0xffffffec,4);
          }
          uStack_38 = uVar4;
          uStack_36 = uVar19;
          local_35 = cVar8;
          if (SBORROW4((uint)local_9,1)) {
            puStack_3c = (undefined1 *)0x86125b;
            thunk_FUN_004072dc();
          }
          puStack_3c = (undefined1 *)0x861268;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_27c,0);
        uStack_36 = (undefined1)((uint)&local_27c >> 0x10);
        local_35 = (char)((uint)&local_27c >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x86127e;
          thunk_FUN_004072dc();
        }
        uVar20 = 1;
        puStack_3c = (undefined1 *)0x861288;
        FUN_0070f800(local_34);
        uStack_38 = 0x1298;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_27c,L"Interval (I)");
        if ((bool)uVar20) {
          uStack_38 = 0x12a5;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040a340((undefined *)((int)local_30 + 0x3e));
          in_ST2 = in_ST2 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x498);
          uStack_38 = 0x12b7;
          uStack_36 = 0x86;
          local_35 = 0;
          uVar17 = FUN_00407bcc();
          uStack_98 = (double)CONCAT44(extraout_EDX_02,uVar17);
          local_288 = (double)(longlong)uStack_98;
          uStack_38 = (undefined2)((ulonglong)local_288 >> 0x20);
          uStack_36 = (undefined1)((ulonglong)local_288 >> 0x30);
          local_35 = (char)((ulonglong)local_288 >> 0x38);
          puStack_3c = (undefined1 *)local_288._0_4_;
          puStack_40 = (undefined1 *)0x8612e7;
          fVar21 = fVar22;
          FUN_00b2e9bc(&local_280);
          puStack_40 = local_280;
          if (SBORROW4((uint)local_9,1)) {
            uStack_44._0_2_ = 0x12fd;
            uStack_44._2_2_ = 0x86;
            thunk_FUN_004072dc();
          }
          uStack_44._0_2_ = 0x130a;
          uStack_44._2_2_ = 0x86;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_28c,0);
        uStack_36 = (undefined1)((uint)&local_28c >> 0x10);
        local_35 = (char)((uint)&local_28c >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x861320;
          thunk_FUN_004072dc();
        }
        uVar20 = 1;
        puStack_3c = (undefined1 *)0x86132a;
        FUN_0070f800(local_34);
        uStack_38 = 0x133a;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_28c,L"Interval (T)");
        if ((bool)uVar20) {
          uStack_38 = 0x1349;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040a340(local_30 + 0xa3);
          in_ST2 = in_ST2 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x4c0);
          uStack_38 = 0x135b;
          uStack_36 = 0x86;
          local_35 = 0;
          uVar17 = FUN_00407bcc();
          uStack_98 = (double)CONCAT44(extraout_EDX_03,uVar17);
          local_288 = (double)(longlong)uStack_98;
          uStack_38 = (undefined2)((ulonglong)local_288 >> 0x20);
          uStack_36 = (undefined1)((ulonglong)local_288 >> 0x30);
          local_35 = (char)((ulonglong)local_288 >> 0x38);
          puStack_3c = (undefined1 *)local_288._0_4_;
          puStack_40 = (undefined1 *)0x86138b;
          fVar21 = fVar22;
          FUN_00b2e9bc(&local_290);
          puStack_40 = local_290;
          if (SBORROW4((uint)local_9,1)) {
            uStack_44._0_2_ = 0x13a1;
            uStack_44._2_2_ = 0x86;
            thunk_FUN_004072dc();
          }
          uStack_44._0_2_ = 0x13ae;
          uStack_44._2_2_ = 0x86;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_294,0);
        uStack_36 = (undefined1)((uint)&local_294 >> 0x10);
        local_35 = (char)((uint)&local_294 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x8613c4;
          thunk_FUN_004072dc();
        }
        uVar20 = 1;
        puStack_3c = (undefined1 *)0x8613ce;
        FUN_0070f800(local_34);
        uStack_38 = 0x13de;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_294,L"Completion");
        if ((bool)uVar20) {
          uStack_38 = 0x13f0;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_00936354(*(undefined4 *)PTR_DAT_00ba9c04);
          local_24 = (double)in_ST2;
          if (0.0 <= local_24) {
            if (1.0 <= local_24) {
              uStack_38 = SUB42(&stack0xfffffffc,0);
              uStack_36 = (undefined1)((uint)&stack0xfffffffc >> 0x10);
              local_35 = (char)((uint)&stack0xfffffffc >> 0x18);
              puStack_3c = &LAB_008614ab;
              puStack_40 = (undefined1 *)*in_FS_OFFSET;
              *in_FS_OFFSET = &puStack_40;
              uStack_44._0_2_ = 0x1441;
              uStack_44._2_2_ = 0x86;
              FUN_0042c3e8();
              uStack_44._0_2_ = 0x1449;
              uStack_44._2_2_ = 0x86;
              uVar17 = FUN_00407bcc();
              uStack_98 = (double)CONCAT44(extraout_EDX_04,uVar17);
              dStack_8c = (double)(longlong)uStack_98;
              uStack_44._0_2_ = (undefined2)((ulonglong)dStack_8c >> 0x20);
              uStack_44._2_2_ = (undefined2)((ulonglong)dStack_8c >> 0x30);
              local_48 = dStack_8c._0_4_;
              piStack_4c = (int *)0x861484;
              FUN_0042d430(&DAT_00861d98,PTR_DAT_00baa920,&uStack_90);
              uStack_44._0_2_ = 0x1492;
              uStack_44._2_2_ = 0x86;
              FUN_0040c9f0(&stack0xffffffec,uStack_90);
              uVar17 = CONCAT13(local_35,CONCAT12(uStack_36,uStack_38));
              *in_FS_OFFSET = puStack_40;
              uStack_38 = 0x14b2;
              uStack_36 = 0x86;
              local_35 = 0;
              puStack_3c = (undefined1 *)0x8614aa;
              FUN_0040c5c8(&uStack_90,puStack_40,uVar17);
              return;
            }
            uStack_38 = 0x1429;
            uStack_36 = 0x86;
            local_35 = 0;
            fVar23 = fVar21;
            FUN_0040c9f0(&stack0xffffffec,L"today");
            in_ST2 = in_ST3;
            in_ST3 = in_ST4;
            in_ST4 = in_ST5;
            in_ST5 = in_ST6;
            in_ST6 = in_ST7;
            in_ST7 = fVar22;
            fVar22 = fVar21;
            fVar21 = fVar23;
          }
          else {
            uStack_38 = 0x140c;
            uStack_36 = 0x86;
            local_35 = 0;
            fVar23 = fVar21;
            FUN_0040c9f0(&stack0xffffffec,L"never");
            in_ST2 = in_ST3;
            in_ST3 = in_ST4;
            in_ST4 = in_ST5;
            in_ST5 = in_ST6;
            in_ST6 = in_ST7;
            in_ST7 = fVar22;
            fVar22 = fVar21;
            fVar21 = fVar23;
          }
          uStack_38 = uVar4;
          uStack_36 = uVar19;
          local_35 = cVar8;
          if (SBORROW4((uint)local_9,1)) {
            puStack_3c = (undefined1 *)0x8614c5;
            thunk_FUN_004072dc();
          }
          puStack_3c = (undefined1 *)0x8614d2;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_298,0);
        uStack_36 = (undefined1)((uint)&local_298 >> 0x10);
        local_35 = (char)((uint)&local_298 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x8614e8;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x8614f2;
        FUN_0070f800(local_34);
        uStack_38 = 0x1502;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_298,L"A-Factor");
        if ((bool)uVar19) {
          uStack_38 = 0x1513;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040a340(local_30 + 0x11);
          in_ST2 = in_ST2 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x4a8);
          puStack_40 = SUB104(in_ST2,0);
          puStack_3c = (undefined1 *)((unkuint10)in_ST2 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)in_ST2 >> 0x40);
          uVar19 = 1;
          uStack_44._0_2_ = 0x1539;
          uStack_44._2_2_ = 0x86;
          fVar23 = fVar21;
          FUN_00409cb4(0,2,auStack_1b0);
          uStack_44._0_2_ = 0x1547;
          uStack_44._2_2_ = 0x86;
          FUN_0040d710(&stack0xffffffec,auStack_1b0);
          uStack_44._0_2_ = 0x1554;
          uStack_44._2_2_ = 0x86;
          FUN_0040d98c(unaff_EBX,L"0.00");
          if ((bool)uVar19) {
            uStack_44._0_2_ = 0x155e;
            uStack_44._2_2_ = 0x86;
            FUN_0040c5c8(&stack0xffffffec);
            in_ST2 = in_ST4;
            in_ST4 = in_ST6;
            in_ST6 = fVar22;
            fVar22 = fVar23;
          }
          else {
            uStack_44._0_2_ = 0x1570;
            uStack_44._2_2_ = 0x86;
            FUN_0040d7f4(&stack0xffffffec,&DAT_008622e4,unaff_EBX);
            in_ST2 = in_ST4;
            in_ST4 = in_ST6;
            in_ST6 = fVar22;
            fVar22 = fVar23;
          }
          uStack_44._0_2_ = 0x157d;
          uStack_44._2_2_ = 0x86;
          FUN_0040a340((undefined *)((int)local_30 + 0x292));
          in_ST3 = in_ST3 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x4d0);
          piStack_4c = SUB104(in_ST3,0);
          local_48 = (undefined1 *)((unkuint10)in_ST3 >> 0x20);
          uStack_44._0_2_ = (undefined2)((unkuint10)in_ST3 >> 0x40);
          uVar19 = 1;
          piStack_50 = (int *)0x8615a3;
          fVar23 = fVar22;
          FUN_00409cb4(0,3,auStack_1b0);
          piStack_50 = (int *)0x8615b1;
          FUN_0040d710(&stack0xffffffe8,auStack_1b0);
          piStack_50 = (int *)0x8615be;
          FUN_0040d98c(unaff_ESI,L"0.000");
          if ((bool)uVar19) {
            piStack_50 = (int *)0x8615c8;
            FUN_0040c5c8(&stack0xffffffe8);
            in_ST3 = in_ST5;
            in_ST5 = in_ST7;
            in_ST7 = fVar21;
            fVar21 = fVar23;
          }
          else {
            piStack_50 = (int *)0x8615da;
            FUN_0040d7f4(&stack0xffffffe8,&DAT_00862404,unaff_ESI);
            in_ST3 = in_ST5;
            in_ST5 = in_ST7;
            in_ST7 = fVar21;
            fVar21 = fVar23;
          }
          local_54 = (int *)&DAT_00862418;
          uStack_5c = 0x15f2;
          uStack_5a = 0x86;
          piStack_58 = unaff_ESI;
          piStack_50 = unaff_EBX;
          FUN_0040d87c(&local_10,3);
          uStack_5c = 1;
          uStack_5a = 0;
          puStack_60 = (undefined *)0x861603;
          FUN_00b2214c(&local_10,&DAT_0086241c,1);
          if (local_10 == 0) {
            uStack_5c = 0x1616;
            uStack_5a = 0x86;
            FUN_0040c9f0(&local_10,&DAT_0086220c);
          }
          uStack_5c = (undefined2)local_10;
          uStack_5a = (undefined2)((uint)local_10 >> 0x10);
          if (SBORROW4((uint)local_9,1)) {
            puStack_60 = (undefined *)0x861629;
            thunk_FUN_004072dc();
          }
          puStack_60 = (undefined *)0x861636;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_29c,0);
        uStack_36 = (undefined1)((uint)&local_29c >> 0x10);
        local_35 = (char)((uint)&local_29c >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x86164c;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x861656;
        FUN_0070f800(local_34);
        uStack_38 = 0x1666;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_29c,L"Last Rep (I)");
        if ((bool)uVar19) {
          uStack_38 = 0x1677;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040a340((undefined *)((int)local_30 + 0x26));
          in_ST2 = in_ST2 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x4a0);
          uStack_38 = 0x1689;
          uStack_36 = 0x86;
          local_35 = 0;
          iVar15 = FUN_00407bcc();
          if (extraout_EDX_05 == 0) {
            if (iVar15 == 0) goto LAB_008616cc;
LAB_00861697:
            uStack_38 = 0x16a2;
            uStack_36 = 0x86;
            local_35 = 0;
            FUN_0040a340((undefined *)((int)local_30 + 0x26));
            in_ST2 = in_ST2 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x4a0);
            uStack_38 = 0x16b4;
            uStack_36 = 0x86;
            local_35 = 0;
            iVar15 = FUN_00407bcc();
            if (iVar15 >> 0x1f != extraout_EDX_06) {
              uStack_38 = 0x16c2;
              uStack_36 = 0x86;
              local_35 = 0;
              iVar15 = thunk_FUN_004072dc(iVar15);
            }
            uStack_38 = 0x16ca;
            uStack_36 = 0x86;
            local_35 = 0;
            FUN_009a9d24(iVar15,&local_10);
          }
          else {
            if (0 < extraout_EDX_05) goto LAB_00861697;
LAB_008616cc:
            uStack_38 = 0x16d9;
            uStack_36 = 0x86;
            local_35 = 0;
            FUN_0040c9f0(&local_10,&DAT_0086220c);
          }
          uStack_38 = (undefined2)local_10;
          uStack_36 = (undefined1)((uint)local_10 >> 0x10);
          local_35 = (char)((uint)local_10 >> 0x18);
          if (SBORROW4((uint)local_9,1)) {
            puStack_3c = (undefined1 *)0x8616ec;
            thunk_FUN_004072dc();
          }
          puStack_3c = (undefined1 *)0x8616f9;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_2a0,0);
        uStack_36 = (undefined1)((uint)&local_2a0 >> 0x10);
        local_35 = (char)((uint)&local_2a0 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x86170f;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x861719;
        FUN_0070f800(local_34);
        uStack_38 = 0x1729;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_2a0,L"Last Rep (T)");
        if ((bool)uVar19) {
          uStack_38 = 0x173c;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040a340(local_30 + 0xa6);
          in_ST2 = in_ST2 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x4c8);
          uStack_38 = 0x174e;
          uStack_36 = 0x86;
          local_35 = 0;
          iVar15 = FUN_00407bcc();
          if (extraout_EDX_07 == 0) {
            if (iVar15 == 0) goto LAB_00861793;
LAB_0086175c:
            uStack_38 = 0x1769;
            uStack_36 = 0x86;
            local_35 = 0;
            FUN_0040a340(local_30 + 0xa6);
            in_ST2 = in_ST2 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x4c8);
            uStack_38 = 0x177b;
            uStack_36 = 0x86;
            local_35 = 0;
            iVar15 = FUN_00407bcc();
            if (iVar15 >> 0x1f != extraout_EDX_08) {
              uStack_38 = 0x1789;
              uStack_36 = 0x86;
              local_35 = 0;
              iVar15 = thunk_FUN_004072dc(iVar15);
            }
            uStack_38 = 0x1791;
            uStack_36 = 0x86;
            local_35 = 0;
            FUN_009a9d24(iVar15,&local_10);
          }
          else {
            if (0 < extraout_EDX_07) goto LAB_0086175c;
LAB_00861793:
            uStack_38 = 0x17a0;
            uStack_36 = 0x86;
            local_35 = 0;
            FUN_0040c9f0(&local_10,&DAT_0086220c);
          }
          uStack_38 = (undefined2)local_10;
          uStack_36 = (undefined1)((uint)local_10 >> 0x10);
          local_35 = (char)((uint)local_10 >> 0x18);
          if (SBORROW4((uint)local_9,1)) {
            puStack_3c = (undefined1 *)0x8617b3;
            thunk_FUN_004072dc();
          }
          puStack_3c = (undefined1 *)0x8617c0;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_2a4,0);
        uStack_36 = (undefined1)((uint)&local_2a4 >> 0x10);
        local_35 = (char)((uint)&local_2a4 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x8617d6;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x8617e0;
        FUN_0070f800(local_34);
        uStack_38 = 0x17f0;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_2a4,L"Next Rep (I)");
        if ((bool)uVar19) {
          iVar15 = (int)*(char *)(*(int *)PTR_DAT_00ba9c04 + 0x46a);
          iVar16 = local_30[0x99] + iVar15;
          fVar23 = in_ST3;
          if (SCARRY4(local_30[0x99],iVar15)) {
            uStack_38 = 0x1817;
            uStack_36 = 0x86;
            local_35 = 0;
            iVar16 = thunk_FUN_004072dc();
            iVar15 = extraout_EDX_09;
            fVar23 = in_ST3;
          }
          if (iVar16 < 1) {
            uStack_38 = 0x220c;
            uStack_36 = 0x86;
            local_35 = 0;
            in_ST3 = fVar23;
            if (SBORROW4((uint)local_9,1)) {
              puStack_3c = (undefined1 *)0x8618b5;
              thunk_FUN_004072dc(iVar16,iVar15,local_9 - 1);
              in_ST3 = fVar23;
            }
            puStack_3c = (undefined1 *)0x8618c2;
            FUN_0070f880(local_34,1);
          }
          else {
            uStack_38 = 0x182a;
            uStack_36 = 0x86;
            local_35 = 0;
            in_ST3 = in_ST4;
            in_ST4 = in_ST5;
            in_ST5 = in_ST6;
            in_ST6 = in_ST7;
            in_ST7 = fVar22;
            fVar22 = fVar21;
            FUN_0040a340((undefined *)((int)local_30 + 0x26));
            local_248 = in_ST2 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x4a0);
            uStack_38 = 0x1849;
            uStack_36 = 0x86;
            local_35 = 0;
            FUN_0040a340((undefined *)((int)local_30 + 0x3e));
            in_ST2 = local_248 + fVar23 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x498);
            uStack_38 = 0x1863;
            uStack_36 = 0x86;
            local_35 = 0;
            fVar21 = fVar22;
            iVar15 = FUN_00407bcc();
            if (iVar15 >> 0x1f != extraout_EDX_10) {
              uStack_38 = 0x1871;
              uStack_36 = 0x86;
              local_35 = 0;
              iVar15 = thunk_FUN_004072dc(iVar15);
            }
            uStack_38 = 0x187c;
            uStack_36 = 0x86;
            local_35 = 0;
            FUN_009a9d24(iVar15,local_2a8);
            uStack_38 = local_2a8._0_2_;
            uStack_36 = local_2a8[2];
            local_35 = local_2a8[3];
            if (SBORROW4((uint)local_9,1)) {
              puStack_3c = (undefined1 *)0x861892;
              thunk_FUN_004072dc();
            }
            puStack_3c = (undefined1 *)0x86189f;
            FUN_0070f880(local_34,1);
          }
        }
        uStack_38 = SUB42(&local_2ac,0);
        uStack_36 = (undefined1)((uint)&local_2ac >> 0x10);
        local_35 = (char)((uint)&local_2ac >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x8618d8;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x8618e2;
        FUN_0070f800(local_34);
        uStack_38 = 0x18f2;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_2ac,L"Next Rep (T)");
        if ((bool)uVar19) {
          uStack_38 = 0x1905;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040a340(local_30 + 0xa6);
          local_248 = in_ST2 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x4c8);
          uStack_38 = 0x1926;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040a340(local_30 + 0xa3);
          in_ST2 = local_248 + in_ST3 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x4c0);
          uStack_38 = 0x1940;
          uStack_36 = 0x86;
          local_35 = 0;
          fVar23 = fVar21;
          iVar15 = FUN_00407bcc();
          if (extraout_EDX_11 == 0) {
            if (iVar15 == 0) {
LAB_008619dc:
              uStack_38 = 0x220c;
              uStack_36 = 0x86;
              local_35 = 0;
              in_ST3 = in_ST4;
              fVar9 = in_ST5;
              fVar24 = in_ST6;
              fVar10 = in_ST7;
              fVar11 = fVar22;
              fVar12 = fVar21;
              if (SBORROW4((uint)local_9,1)) {
                puStack_3c = (undefined1 *)0x8619f0;
                thunk_FUN_004072dc();
                in_ST3 = in_ST4;
                fVar9 = in_ST5;
                fVar24 = in_ST6;
                fVar10 = in_ST7;
                fVar11 = fVar22;
                fVar12 = fVar21;
              }
              fVar21 = fVar23;
              fVar22 = fVar12;
              in_ST7 = fVar11;
              in_ST6 = fVar10;
              in_ST5 = fVar24;
              in_ST4 = fVar9;
              puStack_3c = (undefined1 *)0x8619fd;
              FUN_0070f880(local_34,1);
              goto LAB_008619fd;
            }
          }
          else if (extraout_EDX_11 < 1) goto LAB_008619dc;
          uStack_38 = 0x1963;
          uStack_36 = 0x86;
          local_35 = 0;
          in_ST3 = in_ST5;
          in_ST5 = in_ST7;
          in_ST7 = fVar21;
          FUN_0040a340(local_30 + 0xa6);
          local_248 = in_ST2 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x4c8);
          uStack_38 = 0x1984;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040a340(local_30 + 0xa3);
          in_ST2 = local_248 + in_ST4 + (float10)*(double *)(*(int *)PTR_DAT_00ba9c04 + 0x4c0);
          uStack_38 = 0x199e;
          uStack_36 = 0x86;
          local_35 = 0;
          fVar21 = fVar23;
          iVar15 = FUN_00407bcc();
          in_ST4 = in_ST6;
          fVar9 = fVar22;
          if (iVar15 >> 0x1f != extraout_EDX_12) {
            uStack_38 = 0x19ac;
            uStack_36 = 0x86;
            local_35 = 0;
            iVar15 = thunk_FUN_004072dc(iVar15);
            in_ST4 = in_ST6;
            fVar9 = fVar22;
          }
          fVar22 = fVar23;
          in_ST6 = fVar9;
          uStack_38 = 0x19b7;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_009a9d24(iVar15,local_2b0);
          uStack_38 = local_2b0._0_2_;
          uStack_36 = local_2b0[2];
          local_35 = local_2b0[3];
          if (SBORROW4((uint)local_9,1)) {
            puStack_3c = (undefined1 *)0x8619cd;
            thunk_FUN_004072dc();
          }
          puStack_3c = (undefined1 *)0x8619da;
          FUN_0070f880(local_34,1);
        }
LAB_008619fd:
        uStack_38 = SUB42(&local_2b4,0);
        uStack_36 = (undefined1)((uint)&local_2b4 >> 0x10);
        local_35 = (char)((uint)&local_2b4 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x861a13;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x861a1d;
        FUN_0070f800(local_34);
        uStack_38 = 0x1a2d;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_2b4,L"Total time");
        if ((bool)uVar19) {
          fVar21 = fVar22;
          if (*(double *)((int)local_30 + 499) == 0.0) {
            uStack_38 = 0x220c;
            uStack_36 = 0x86;
            local_35 = 0;
            if (SBORROW4((uint)local_9,1)) {
              puStack_3c = (undefined1 *)0x861a54;
              thunk_FUN_004072dc();
            }
            puStack_3c = (undefined1 *)0x861a61;
            FUN_0070f880(local_34,1);
          }
          else {
            uVar17 = *(undefined4 *)((int)local_30 + 0x1f7);
            uStack_38 = (undefined2)uVar17;
            uStack_36 = (undefined1)((uint)uVar17 >> 0x10);
            local_35 = (char)((uint)uVar17 >> 0x18);
            puStack_3c = *(undefined1 **)((int)local_30 + 499);
            puStack_40 = (undefined1 *)0x861a7d;
            FUN_00b1ecd4(&local_2b8);
            puStack_40 = local_2b8;
            if (SBORROW4((uint)local_9,1)) {
              uStack_44._0_2_ = 0x1a93;
              uStack_44._2_2_ = 0x86;
              thunk_FUN_004072dc();
            }
            uStack_44._0_2_ = 0x1aa0;
            uStack_44._2_2_ = 0x86;
            FUN_0070f880(local_34,1);
          }
        }
        uStack_38 = SUB42(&local_2bc,0);
        uStack_36 = (undefined1)((uint)&local_2bc >> 0x10);
        local_35 = (char)((uint)&local_2bc >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x861ab6;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x861ac0;
        FUN_0070f800(local_34);
        uStack_38 = 0x1ad0;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_2bc,L"Avg time");
        if ((bool)uVar19) {
          uStack_38 = 0x1add;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0040a340((undefined *)((int)local_30 + 0x4a));
          puStack_40 = SUB104(in_ST2,0);
          puStack_3c = (undefined1 *)((unkuint10)in_ST2 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)in_ST2 >> 0x40);
          uStack_44._0_2_ = 0x1af6;
          uStack_44._2_2_ = 0x86;
          fVar25 = fVar21;
          FUN_00409cb4(0,3,auStack_1b0);
          uStack_44._0_2_ = 0x1b04;
          uStack_44._2_2_ = 0x86;
          FUN_0040d710(&stack0xffffffec,auStack_1b0);
          uStack_44._0_2_ = 0x1b17;
          uStack_44._2_2_ = 0x86;
          FUN_0040d7f4(local_2c0,unaff_EBX,L" sec.");
          uStack_44._0_2_ = local_2c0._0_2_;
          uStack_44._2_2_ = local_2c0._2_2_;
          in_ST2 = in_ST3;
          fVar23 = in_ST4;
          fVar9 = in_ST5;
          fVar24 = in_ST6;
          fVar10 = in_ST7;
          fVar11 = fVar22;
          fVar12 = fVar21;
          if (SBORROW4((uint)local_9,1)) {
            local_48 = (undefined1 *)0x861b2d;
            thunk_FUN_004072dc();
            in_ST2 = in_ST3;
            fVar23 = in_ST4;
            fVar9 = in_ST5;
            fVar24 = in_ST6;
            fVar10 = in_ST7;
            fVar11 = fVar22;
            fVar12 = fVar21;
          }
          fVar21 = fVar25;
          fVar22 = fVar12;
          in_ST7 = fVar11;
          in_ST6 = fVar10;
          in_ST5 = fVar24;
          in_ST4 = fVar9;
          in_ST3 = fVar23;
          local_48 = (undefined *)0x861b3a;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_2c4,0);
        uStack_36 = (undefined1)((uint)&local_2c4 >> 0x10);
        local_35 = (char)((uint)&local_2c4 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x861b50;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x861b5a;
        FUN_0070f800(local_34);
        uStack_38 = 0x1b6a;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_2c4,L"Rep count");
        if ((bool)uVar19) {
          fVar21 = (float10)*(int *)((int)local_30 + 0x1fb);
          puStack_40 = SUB104(fVar21,0);
          puStack_3c = (undefined1 *)((unkuint10)fVar21 >> 0x20);
          uStack_38 = (undefined2)((unkuint10)fVar21 >> 0x40);
          uStack_44._0_2_ = 0x1b87;
          uStack_44._2_2_ = 0x86;
          fVar21 = fVar22;
          FUN_00b20c94(local_2c8);
          uStack_44._0_2_ = local_2c8._0_2_;
          uStack_44._2_2_ = local_2c8._2_2_;
          if (SBORROW4((uint)local_9,1)) {
            local_48 = (undefined1 *)0x861b9d;
            thunk_FUN_004072dc();
          }
          local_48 = (undefined *)0x861baa;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_2cc,0);
        uStack_36 = (undefined1)((uint)&local_2cc >> 0x10);
        local_35 = (char)((uint)&local_2cc >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x861bc0;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x861bca;
        FUN_0070f800(local_34);
        uStack_38 = 0x1bda;
        uStack_36 = 0x86;
        local_35 = 0;
        FUN_0040d98c(local_2cc,L"Review");
        if ((bool)uVar19) {
          uStack_38 = 0x1bea;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_00863104(local_8,local_2d0);
          uStack_38 = local_2d0._0_2_;
          uStack_36 = local_2d0[2];
          local_35 = local_2d0[3];
          if (SBORROW4((uint)local_9,1)) {
            puStack_3c = (undefined1 *)0x861c00;
            thunk_FUN_004072dc();
          }
          puStack_3c = (undefined1 *)0x861c0d;
          FUN_0070f880(local_34,1);
        }
        uStack_38 = SUB42(&local_2d4,0);
        uStack_36 = (undefined1)((uint)&local_2d4 >> 0x10);
        local_35 = (char)((uint)&local_2d4 >> 0x18);
        if (SBORROW4((uint)local_9,1)) {
          puStack_3c = (undefined1 *)0x861c23;
          thunk_FUN_004072dc();
        }
        uVar19 = 1;
        puStack_3c = (undefined1 *)0x861c2d;
        FUN_0070f800(local_34);
        uStack_38 = 0x1c3d;
        uStack_36 = 0x86;
        local_35 = '\0';
        FUN_0040d98c(local_2d4,L"Protection");
        if ((bool)uVar19) {
          uStack_38 = 0x1c4a;
          uStack_36 = 0x86;
          local_35 = 0;
          FUN_0085f758(local_2d8);
          uStack_38 = local_2d8._0_2_;
          uStack_36 = local_2d8[2];
          local_35 = local_2d8[3];
          if (SBORROW4((uint)local_9,1)) {
            puStack_3c = (undefined1 *)0x861c60;
            thunk_FUN_004072dc();
          }
          puStack_3c = (undefined1 *)0x861c6d;
          FUN_0070f880(local_34,1);
        }
        local_9 = local_9 + 1;
        local_35 = local_35 + -1;
      } while (local_35 != '\0');
    }
    *in_FS_OFFSET = local_34;
  }
  uVar17 = local_24._4_4_;
  *in_FS_OFFSET = local_2c._4_4_;
  local_24._4_4_ = &LAB_00861d5e;
  local_24._0_4_ = 0x861cc6;
  FUN_0040c628(local_2d8,0x14,uVar17);
  local_24._0_4_ = 0x861cd6;
  FUN_0040c628(&local_280,7);
  local_24._0_4_ = 0x861ce6;
  FUN_0040c628(&local_258,4);
  local_24._0_4_ = 0x861cf6;
  FUN_0040c628(&local_23c,0x22);
  local_24._0_4_ = 0x861d06;
  FUN_0040c628(&uStack_b0,2);
  local_24._0_4_ = 0x861d16;
  FUN_0040c628(&puStack_a4,3);
  local_24._0_4_ = 0x861d21;
  FUN_0040c5c8(&uStack_90);
  local_24._0_4_ = 0x861d29;
  FUN_0040c5c8(&uStack_84);
  local_24._0_4_ = 0x861d36;
  FUN_0040c628(&local_7c,2);
  local_24._0_4_ = 0x861d3e;
  FUN_0040c5c8(&uStack_68);
  local_24._0_4_ = 0x861d46;
  FUN_0040c5c8(&local_48);
  local_24 = (double)CONCAT44(local_24._4_4_,0x861d53);
  FUN_0040c628(&stack0xffffffe8,3);
  return;
}



// === FUN_0086e57c @ 0086e57c size:2019 ===

void FUN_0086e57c(int *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int *in_FS_OFFSET;
  undefined1 *puVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *local_40;
  int local_3c;
  wchar_t *local_38;
  wchar_t *local_34;
  int local_30;
  wchar_t *local_2c;
  wchar_t *local_28;
  int local_24;
  wchar_t *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  int local_10;
  char local_9;
  int *local_8;
  
  local_14 = &stack0xfffffffc;
  local_10 = 7;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_18 = &LAB_0086ed5f;
  local_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_1c;
  local_20 = 
  L"䖊⳻琂Ⰾ琂︨瓈︕瓈\xeb2f贺\xf445確蛭\xe800\xe426ﾹ⯫䖍뫴\xedb8\x86៨매\xebff贜\xf445ﲺ蛭\xe800\xe408ﾹ෫䖍뫴\xee40\x86裡맣诿ﱕኋƹ"
  ;
  local_9 = param_2;
  local_8 = param_1;
  FUN_0040c5c8(&local_10);
  if (local_9 == '\x02') {
    local_20 = 
    L"⯫䖍뫴\xedb8\x86៨매\xebff贜\xf445ﲺ蛭\xe800\xe408ﾹ෫䖍뫴\xee40\x86裡맣诿ﱕኋƹ"
    ;
    FUN_0040c9f0(&local_10,L"https://en.wikipedia.org/");
  }
  else if (local_9 == '\x04') {
    local_20 = L"෫䖍뫴\xee40\x86裡맣诿ﱕኋƹ";
    FUN_0040c9f0(&local_10,L"https://help.supermemo.org/");
  }
  else if (local_9 == '\x05') {
    local_20 = L"ᳫ䖍뫴\xedfc\x86ࣨ매\xebff贍\xf445䂺蛮\xe800\xe3f9ﾹ喋诼뤒\x01";
    FUN_0040c9f0(&local_10,L"https://supermemopedia.com/");
  }
  else if (local_9 == '\x06') {
    local_20 = L"喋诼뤒\x01";
    FUN_0040c9f0(&local_10,L"https://supermemo.guru/");
  }
  local_20 = L"䖉菬\xec7d甀謗ﱕኋƹ";
  local_18 = (undefined1 *)FUN_0040dbd4(&DAT_0086ee7c,*local_8,1);
  if (local_18 == (undefined1 *)0x0) {
    local_20 = L"䖉菬\xec7d琀謚\xec4d\xe983焁\xe805빾ﾹ䖋뫼\x01";
    local_18 = (undefined1 *)FUN_0040dbd4(&DAT_0086ee90,*local_8,1);
  }
  if (local_18 != (undefined1 *)0x0) {
    if (SBORROW4((int)local_18,1)) {
      local_20 = L"䖋뫼\x01";
      thunk_FUN_004072dc();
    }
    local_20 = 
    L"䖋\xe8fc\xf6a5\xffff䖋맼\xeea4\x86삺蛮\xe800㱧+삄呵䖋맼\xeea4\x86\xf8ba蛮\xe800㱑+삄㹵䖋맼\xeea4\x86Ⓔ蛯\xe800㰻+삄⡵䖋맼\xef54\x86沺蛯\xe800㰥+삄ት䖋맼\xef54\x86颺蛯\xe800㰏+䖋맼\xeea4\x86좺蛯\xe800㯽+䖋맼\xeea4\x86º蛰\xe800㯫+삄蔏Ü"
    ;
    FUN_0040da0c(local_8,1);
  }
  local_20 = 
  L"䖋맼\xeea4\x86삺蛮\xe800㱧+삄呵䖋맼\xeea4\x86\xf8ba蛮\xe800㱑+삄㹵䖋맼\xeea4\x86Ⓔ蛯\xe800㰻+삄⡵䖋맼\xef54\x86沺蛯\xe800㰥+삄ት䖋맼\xef54\x86颺蛯\xe800㰏+䖋맼\xeea4\x86좺蛯\xe800㯽+䖋맼\xeea4\x86º蛰\xe800㯫+삄蔏Ü"
  ;
  FUN_0086dcf8(local_8);
  local_20 = 
  L"삄呵䖋맼\xeea4\x86\xf8ba蛮\xe800㱑+삄㹵䖋맼\xeea4\x86Ⓔ蛯\xe800㰻+삄⡵䖋맼\xef54\x86沺蛯\xe800㰥+삄ት䖋맼\xef54\x86颺蛯\xe800㰏+䖋맼\xeea4\x86좺蛯\xe800㯽+䖋맼\xeea4\x86º蛰\xe800㯫+삄蔏Ü"
  ;
  cVar1 = FUN_00b222cc(local_8,L"<div class=\"noprint\"",L"</div>");
  if (cVar1 == '\0') {
    local_20 = 
    L"삄㹵䖋맼\xeea4\x86Ⓔ蛯\xe800㰻+삄⡵䖋맼\xef54\x86沺蛯\xe800㰥+삄ት䖋맼\xef54\x86颺蛯\xe800㰏+䖋맼\xeea4\x86좺蛯\xe800㯽+䖋맼\xeea4\x86º蛰\xe800㯫+삄蔏Ü"
    ;
    cVar1 = FUN_00b222cc(local_8,L"<div id=siteSub",L"</div>");
    if (cVar1 == '\0') {
      local_20 = 
      L"삄⡵䖋맼\xef54\x86沺蛯\xe800㰥+삄ት䖋맼\xef54\x86颺蛯\xe800㰏+䖋맼\xeea4\x86좺蛯\xe800㯽+䖋맼\xeea4\x86º蛰\xe800㯫+삄蔏Ü"
      ;
      cVar1 = FUN_00b222cc(local_8,L"<div id=\"siteSub\"",L"</div>");
      if (cVar1 == '\0') {
        local_20 = 
        L"삄ት䖋맼\xef54\x86颺蛯\xe800㰏+䖋맼\xeea4\x86좺蛯\xe800㯽+䖋맼\xeea4\x86º蛰\xe800㯫+삄蔏Ü"
        ;
        cVar1 = FUN_00b222cc(local_8,L"<H3 id=siteSub>",L"</H3>");
        if (cVar1 == '\0') {
          local_20 = L"䖋맼\xeea4\x86좺蛯\xe800㯽+䖋맼\xeea4\x86º蛰\xe800㯫+삄蔏Ü";
          FUN_00b222cc(local_8,L"<H3 id=\"siteSub\">",L"</H3>");
        }
      }
    }
  }
  local_20 = L"䖋맼\xeea4\x86º蛰\xe800㯫+삄蔏Ü";
  FUN_00b222cc(local_8,L"<div class=\"toctitle\"",L"</div>");
  local_20 = L"삄蔏Ü";
  cVar1 = FUN_00b222cc(local_8,L"<div class=\"toc\"",L"</div>");
  if (cVar1 == '\0') {
    local_20 = L"삄ት䖋맼\xf030\x86粺蛰\xe800㮻+䖋맼\xf030\x86낺蛰\xe800㮩+삄蔏\x9a";
    cVar1 = FUN_00b222cc(local_8,L"<DIV id=toctitle>",L"</DIV>");
    if (cVar1 == '\0') {
      local_20 = L"䖋맼\xf030\x86낺蛰\xe800㮩+삄蔏\x9a";
      FUN_00b222cc(local_8,L"<DIV id=\"toctitle\">",L"</DIV>");
    }
    local_20 = L"삄蔏\x9a";
    cVar1 = FUN_00b222cc(local_8,L"<DIV id=toc ",L"</DIV>");
    if (cVar1 == '\0') {
      local_20 = L"삄蔏\x80";
      cVar1 = FUN_00b222cc(local_8,L"<DIV id=\"toc\"",L"</DIV>");
      if (cVar1 == '\0') {
        local_20 = (wchar_t *)0x86e757;
        cVar1 = FUN_00b222cc(local_8,L"<DIV class=toc ",L"</DIV>");
        if (cVar1 == '\0') {
          local_20 = (wchar_t *)0x86e76d;
          cVar1 = FUN_00b222cc(local_8,L"<DIV class=\"toc\"",L"</DIV>");
          if (cVar1 == '\0') {
            local_20 = (wchar_t *)0x86e783;
            cVar1 = FUN_00b222cc(local_8,L"<TABLE id=toc ",L"</TABLE>");
            if (cVar1 == '\0') {
              local_20 = (wchar_t *)0x86e799;
              cVar1 = FUN_00b222cc(local_8,L"<TABLE id=\"toc\" ",L"</TABLE>");
              if (cVar1 == '\0') {
                local_20 = (wchar_t *)0x86e7af;
                cVar1 = FUN_00b222cc(local_8,L"<TABLE class=toc ",L"</TABLE>");
                if (cVar1 == '\0') {
                  local_20 = (wchar_t *)0x86e7c5;
                  FUN_00b222cc(local_8,L"<TABLE class=\"toc\" ",L"</TABLE>");
                }
              }
            }
          }
        }
      }
    }
  }
  local_20 = (wchar_t *)0x86e7d7;
  FUN_00b222cc(local_8,L"<div class=\"patrollink\"",L"</div>");
  local_20 = (wchar_t *)0x86e7e9;
  cVar1 = FUN_00b222cc(local_8,L"<DIV id=\"contentSub\">",L"</DIV>");
  if (cVar1 == '\0') {
    local_20 = (wchar_t *)0x86e7ff;
    FUN_00b222cc(local_8,L"<DIV id=contentSub>",L"</DIV>");
  }
  local_20 = (wchar_t *)0x86e811;
  cVar1 = FUN_00b222cc(local_8,L"<a id=\"NavToggle",L"</a>");
  if (cVar1 == '\0') {
    local_20 = (wchar_t *)0x86e827;
    FUN_00b222cc(local_8,L"<a id=NavToggle",L"</a>");
  }
  local_20 = (wchar_t *)0x86e839;
  cVar1 = FUN_00b222cc(local_8,L"<a class=\"NavToggle",L"</a>");
  if (cVar1 == '\0') {
    local_20 = (wchar_t *)0x86e84f;
    FUN_00b222cc(local_8,L"<a class=NavToggle",L"</a>");
  }
  local_20 = (wchar_t *)0x86e861;
  cVar1 = FUN_00b222cc(local_8,L"<a class=\"mw-jump-link\"",L"</a>");
  if (cVar1 == '\0') {
    local_20 = (wchar_t *)0x86e877;
    cVar1 = FUN_00b222cc(local_8,L"<div class=\"mw-jump\"",L"</DIV>");
    if (cVar1 == '\0') {
      local_20 = (wchar_t *)0x86e88d;
      cVar1 = FUN_00b222cc(local_8,L"<DIV id=\"jump-to-nav\"",L"</DIV>");
      if (cVar1 == '\0') {
        local_20 = (wchar_t *)0x86e8a3;
        FUN_00b222cc(local_8,L"<DIV id=jump-to-nav",L"</DIV>");
      }
    }
  }
  local_20 = (wchar_t *)0x86e8b5;
  cVar1 = FUN_00b222cc(local_8,L"<DIV class=\"metadata\"",L"</DIV>");
  if (cVar1 == '\0') {
    local_20 = 
    L"䖋맼\xf50c\x86Ⲻ蛵\xe800㧯+䖋맼\xf55c\x86確蛵\xe800㧝+䖋맼\xf55c\x86쒺蛵\xe800㧋+䖋맼\xf55c\x86ᢺ蛶\xe800㦹+摨蛶＀\xf475聨蛶贀\xe445κ"
    ;
    FUN_00b222cc(local_8,L"<DIV class=metadata",L"</DIV>");
  }
  local_20 = 
  L"䖋맼\xf55c\x86確蛵\xe800㧝+䖋맼\xf55c\x86쒺蛵\xe800㧋+䖋맼\xf55c\x86ᢺ蛶\xe800㦹+摨蛶＀\xf475聨蛶贀\xe445κ"
  ;
  FUN_00b222cc(local_8,L"<SPAN FONT-SIZE:",&DAT_0086f50c);
  local_20 = 
  L"䖋맼\xf55c\x86쒺蛵\xe800㧋+䖋맼\xf55c\x86ᢺ蛶\xe800㦹+摨蛶＀\xf475聨蛶贀\xe445κ"
  ;
  FUN_00b222cc(local_8,L"<SPAN title=\"View this template",L"</SPAN>");
  local_20 = L"䖋맼\xf55c\x86ᢺ蛶\xe800㦹+摨蛶＀\xf475聨蛶贀\xe445κ";
  FUN_00b222cc(local_8,L"<SPAN title=\"Discuss this template",L"</SPAN>");
  local_20 = L"摨蛶＀\xf475聨蛶贀\xe445κ";
  FUN_00b222cc(local_8,L"<SPAN title=\"Edit this template",L"</SPAN>");
  local_20 = L"href=\"";
  local_24 = local_10;
  local_28 = L"wiki/";
  local_2c = L"䶋诤ﱅ颺蛶\xe800㗳+摨蛶＀\xf475쁨蛶贀\xe045κ";
  FUN_0040d87c(&local_20,3);
  local_2c = L"摨蛶＀\xf475쁨蛶贀\xe045κ";
  FUN_00b21f30(local_8,L"href=\"/wiki/",local_20);
  local_2c = L"href=\"";
  local_30 = local_10;
  local_34 = L"w/index.php?title";
  local_38 = (wchar_t *)0x86e957;
  FUN_0040d87c(&local_24,3);
  local_38 = (wchar_t *)0x86e967;
  FUN_00b21f30(local_8,L"href=\"/w/index.php?title",local_24);
  local_38 = L"src=\"";
  local_3c = local_10;
  local_40 = L"math/";
  FUN_0040d87c(&local_28,3);
  FUN_00b21f30(local_8,L"src=\"/math/",local_28);
  pwVar5 = L"src=\"";
  pwVar4 = L"skins-";
  iVar2 = local_10;
  FUN_0040d87c(&local_2c,3);
  FUN_00b21f30(local_8,L"src=\"/skins-",local_2c,pwVar4,iVar2,pwVar5);
  pwVar5 = L"src=\"";
  pwVar4 = L"static/";
  iVar2 = local_10;
  FUN_0040d87c(&local_30,3);
  FUN_00b21f30(local_8,L"src=\"/static/",local_30,pwVar4,iVar2,pwVar5);
  pwVar5 = L"src=\"";
  pwVar4 = L"images/";
  iVar2 = local_10;
  FUN_0040d87c(&local_34,3);
  FUN_00b21f30(local_8,L"src=\"/images/",local_34,pwVar4,iVar2,pwVar5);
  pwVar5 = L"src=\"";
  pwVar4 = L"w/extensions/";
  iVar2 = local_10;
  FUN_0040d87c(&local_38,3);
  FUN_00b21f30(local_8,L"src=\"/w/extensions/",local_38,pwVar4,iVar2,pwVar5);
  FUN_00b21f30(local_8,L"src=\"//upload.wikimedia.org",L"src=\"https://upload.wikimedia.org");
  FUN_00b21f30(local_8,L"href=\"//upload.wikimedia.org",L"href=\"https://upload.wikimedia.org");
  FUN_00b21f30(local_8,L"src=\"//en.wikipedia.org/static/",L"src=\"https://en.wikipedia.org/static/"
              );
  FUN_00b21f30(local_8,L"src=\"//bits.wikimedia.org",L"src=\"https://bits.wikimedia.org");
  pwVar5 = L"href=\"";
  pwVar4 = L"/index.php?title";
  iVar2 = local_10;
  FUN_0040d87c(&local_3c,3);
  FUN_00b21f30(local_8,L"href=\"/index.php?title",local_3c,pwVar4,iVar2,pwVar5);
  cVar1 = FUN_00b222cc(local_8,L"[<A id=\"collapseButton",L"</A>]");
  if (cVar1 == '\0') {
    FUN_00b222cc(local_8,L"<A id=collapseButton",L"</A>");
  }
  cVar1 = FUN_00b222cc(local_8,L"<DIV id=\"siteSub\">",L"</DIV>");
  if (cVar1 == '\0') {
    FUN_00b222cc(local_8,L"<DIV id=siteSub>",L"</DIV>");
  }
  FUN_00b222cc(local_8,L"<a title=\"Link to this section\"",L"</A>");
  FUN_00b222cc(local_8,L"<SPAN class=\"ve-tabmessage",L"</span>");
  FUN_00b222cc(local_8,L"<span class=\"mw-editsection-bracket",L"</span>");
  FUN_00b222cc(local_8,L"<span class=\"mw-editsection-divider",L"</span>");
  cVar1 = FUN_00b222cc(local_8,L"<SPAN class=\"mw-editsection",L"</SPAN>");
  if (((cVar1 == '\0') &&
      (cVar1 = FUN_00b222cc(local_8,L"<SPAN class=\"editsection",L"</SPAN>"), cVar1 == '\0')) &&
     (cVar1 = FUN_00b222cc(local_8,L"<SPAN class=mw-editsection",L"</SPAN>"), cVar1 == '\0')) {
    FUN_00b222cc(local_8,L"<SPAN class=editsection",L"</SPAN>");
  }
  cVar1 = FUN_00b222cc(local_8,L"<LI class=\"nv-view\">",L"</li>");
  if (cVar1 == '\0') {
    FUN_00b222cc(local_8,L"<LI class=nv-view>",L"</li>");
  }
  cVar1 = FUN_00b222cc(local_8,L"<LI class=\"nv-talk\">",L"</li>");
  if (cVar1 == '\0') {
    FUN_00b222cc(local_8,L"<LI class=nv-talk>",L"</li>");
  }
  cVar1 = FUN_00b222cc(local_8,L"<LI class=\"nv-edit\">",L"</li>");
  if (cVar1 == '\0') {
    FUN_00b222cc(local_8,L"<LI class=nv-edit>",L"</li>");
  }
  FUN_00b21f30(local_8,L"<SPAN><B>&#183;</B></SPAN>",0);
  local_18 = (undefined1 *)FUN_0040dbd4(L"<div class=\"printfooter\">",*local_8,1);
  if (local_18 == (undefined1 *)0x0) {
    local_18 = (undefined1 *)FUN_0040dbd4(L"<div class=printfooter>",*local_8,1);
  }
  if (local_18 == (undefined1 *)0x0) {
    local_18 = (undefined1 *)FUN_0040dbd4(L"<DIV class=printfooter>",*local_8,1);
  }
  if (local_18 == (undefined1 *)0x0) {
    local_18 = (undefined1 *)FUN_0040dbd4(L"<DIV class=\"printfooter\">",*local_8,1);
  }
  if (local_18 != (undefined1 *)0x0) {
    local_1c = *local_8;
    if (local_1c != 0) {
      local_1c = *(int *)(local_1c + -4);
    }
    iVar2 = local_1c - (int)local_18;
    if (SBORROW4(local_1c,(int)local_18)) {
      thunk_FUN_004072dc();
      iVar2 = extraout_ECX;
    }
    if (SCARRY4(iVar2,1)) {
      thunk_FUN_004072dc();
    }
    FUN_0040da0c(local_8,local_18);
  }
  FUN_00b222cc(local_8,L"<noscript>",L"</noscript>");
  FUN_00b21f30(local_8,L"display: none;",L"displayz: none;");
  FUN_0040c9a8(PTR_DAT_00baab64,L"BISC");
  FUN_00868efc(*local_8,&local_40);
  FUN_0040c9a8(local_8,local_40);
  pwVar4 = L"<b><font size=\"5\">";
  iVar2 = *local_8;
  puVar3 = local_14;
  FUN_0040d87c(local_8,4);
  *in_FS_OFFSET = iVar2;
  FUN_0040c628(&local_40,9,puVar3,&LAB_0086ed66,pwVar4);
  FUN_0040c628(&local_14,2);
  return;
}



// === FUN_00886e54 @ 00886e54 size:356 ===

void FUN_00886e54(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_a0;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_82 [14];
  ushort local_74;
  undefined2 local_72;
  undefined4 local_c;
  int local_8;
  
  puStack_98 = &stack0xfffffffc;
  local_90 = 0;
  local_94 = 0;
  local_88 = 0;
  local_8c = 0;
  puStack_9c = &LAB_00886fb8;
  uStack_a0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_a0;
  local_c = param_2;
  local_8 = param_1;
  FUN_0054a0e0(param_1,*(undefined4 *)(*(int *)PTR_DAT_00ba9740 + 0x74));
  FUN_0094da18(*(undefined4 *)PTR_DAT_00ba9c04,*(undefined4 *)(*(int *)PTR_DAT_00ba982c + 0xe0d),
               local_82);
  if (0xff < local_74) {
    local_74 = thunk_FUN_004072dc();
  }
  *(char *)(local_8 + 0x438) = (char)local_74;
  *(undefined2 *)(local_8 + 0x439) = local_72;
  uVar2 = FUN_008b5bc8(*(undefined4 *)(*(int *)PTR_DAT_00ba982c + 0xe0d),local_82,PTR_DAT_00ba99f8,0
                      );
  *(undefined1 *)(local_8 + 0x43b) = uVar2;
  FUN_004282b0(*(undefined1 *)(local_8 + 0x438),&local_8c);
  FUN_0040d7f4(&local_88,L"Lapses: ",local_8c);
  FUN_0054a01c(*(undefined4 *)(local_8 + 0x42c),local_88);
  FUN_004282b0(*(undefined2 *)(local_8 + 0x439),&local_94);
  FUN_0040d7f4(&local_90,L"Interval: ",local_94);
  FUN_0054a01c(*(undefined4 *)(local_8 + 0x434),local_90);
  puVar1 = puStack_98;
  if (0x1e < *(byte *)(local_8 + 0x438)) {
    *(undefined1 *)(local_8 + 0x438) = 0x1e;
  }
  *in_FS_OFFSET = uStack_a0;
  puStack_98 = &LAB_00886fbf;
  puStack_9c = (undefined1 *)0x886fb7;
  FUN_0040c628(&local_94,4,puVar1);
  return;
}



// === FUN_0088aa14 @ 0088aa14 size:1233 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0088aa14(char param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 extraout_EDX_06;
  undefined4 *in_FS_OFFSET;
  bool bVar8;
  float10 in_ST0;
  float10 fVar9;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 uVar10;
  undefined4 uVar11;
  short sVar12;
  short sVar13;
  undefined2 uVar14;
  undefined4 uStack_364;
  undefined2 uStack_35c;
  undefined2 uStack_35a;
  undefined1 *puStack_358;
  undefined1 *puStack_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_340;
  undefined1 local_33c [736];
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  char local_4d;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  double local_3c;
  double local_34;
  double local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  double local_14;
  char local_5;
  
  puStack_354 = &stack0xfffffffc;
  local_34c = 0;
  local_350 = 0;
  local_340 = 0;
  local_54 = 0;
  local_58 = 0;
  puStack_358 = &LAB_0088aee5;
  uStack_35c = (undefined2)*in_FS_OFFSET;
  uStack_35a = (undefined2)((uint)*in_FS_OFFSET >> 0x10);
  *in_FS_OFFSET = &uStack_35c;
  local_5 = param_1;
  if (param_1 == '\0') {
    local_14 = 4.0;
    puStack_354 = &stack0xfffffffc;
  }
  else {
    FUN_00935348(*(undefined4 *)PTR_DAT_00ba9c04,&local_340);
    FUN_0040d7f4(&local_54,local_340,L"\\optimum schedule.csv");
    FUN_00408068(local_33c,local_54,0);
    FUN_004072f4();
    FUN_00407ca0(local_33c);
    FUN_004072f4();
    FUN_004097c0(local_33c,L"Forgetting index [%], Reps, Final stability [days], Samples");
    FUN_00409a10();
    FUN_004072f4();
    local_14 = 1.0;
  }
  uVar3 = FUN_0061c7ac(PTR_PTR_LAB_00b279c4,1,*(undefined4 *)PTR_DAT_00ba982c);
  *(undefined4 *)PTR_DAT_00baa8f8 = uVar3;
  uStack_364 = 99;
  FUN_00b29314(*(undefined4 *)PTR_DAT_00baa8f8,L"Simulating repetition outcomes");
  FUN_0040c5c8(&local_58);
  do {
    local_34 = 0.0;
    local_3c = 0.0;
    if (local_5 == '\0') {
      FUN_00b21df4();
      in_ST0 = in_ST0 * (float10)_DAT_0088b000;
      iVar4 = FUN_00407bcc();
      if (iVar4 >> 0x1f != extraout_EDX_00) {
        iVar4 = thunk_FUN_004072dc();
      }
    }
    else {
      FUN_00b21df4();
      in_ST0 = in_ST0 * (float10)_DAT_0088affc;
      iVar4 = FUN_00407bcc();
      if (iVar4 >> 0x1f != extraout_EDX) {
        iVar4 = thunk_FUN_004072dc();
      }
    }
    local_48 = iVar4;
    if (0 < local_48) {
      local_5c = local_48;
      local_4c = 1;
      do {
        local_40 = 0;
        local_44 = 0x2ac6;
        local_1c = (double)CONCAT44(in_stack_00000018,in_stack_00000014);
        do {
          fVar1 = (_DAT_0088b004 - (float)local_14) / _DAT_0088b004;
          FUN_00407b98();
          fVar9 = (-in_ST0 * (float10)local_1c) / (float10)*(double *)PTR_DAT_00baac8c;
          local_348 = FUN_00407bcc();
          local_2c = (double)CONCAT44(extraout_EDX_01,local_348);
          FUN_0070fed4(&local_2c);
          if (local_2c < 1.0) {
            local_2c = 1.0;
          }
          FUN_00407680();
          if (fVar9 <= (float10)fVar1) {
            FUN_00407680();
            uVar5 = FUN_00407bcc();
            uVar6 = uVar5 + 0x80;
            if (extraout_EDX_03 + (uint)(0xffffff7f < uVar5) != 0 || 0xff < uVar6) {
              uVar6 = thunk_FUN_004072dc();
            }
            local_4d = (char)uVar6;
          }
          else {
            FUN_00407680();
            uVar5 = FUN_00407bcc();
            uVar6 = uVar5 + 0x80;
            if (extraout_EDX_02 + (uint)(0xffffff7f < uVar5) != 0 || 0xff < uVar6) {
              uVar6 = thunk_FUN_004072dc();
            }
            local_4d = (char)uVar6;
          }
          local_4d = local_4d + -0x80;
          FUN_007a5624(CONCAT22((short)((uint)&local_24 >> 0x10),1),0,local_4d,&local_24,
                       (double)fVar1,(undefined4)local_1c,(short)((ulonglong)local_1c >> 0x20),
                       &stack0x0000001c,local_2c._0_4_,(short)((ulonglong)local_2c >> 0x20));
          sVar12 = (short)((int)local_44 >> 0x1f);
          in_ST0 = (float10)local_2c;
          uVar6 = local_44;
          sVar13 = sVar12;
          uVar7 = FUN_00407bcc();
          uVar5 = uVar6 - uVar7;
          if ((int)uVar5 >> 0x1f !=
              (CONCAT22(sVar12,sVar13) - extraout_EDX_04) - (uint)(uVar6 < uVar7)) {
            uVar5 = thunk_FUN_004072dc();
          }
          bVar8 = SCARRY4(local_40,1);
          local_40 = local_40 + 1;
          local_44 = uVar5;
          if (bVar8) {
            thunk_FUN_004072dc();
          }
          local_1c = (double)CONCAT44(local_20,local_24);
          FUN_0070fed4(&local_1c);
        } while (-1 < (int)local_44);
        local_34 = (double)local_40 + local_34;
        local_3c = local_3c + local_1c;
        local_4c = local_4c + 1;
        local_5c = local_5c + -1;
      } while (local_5c != 0);
    }
    iVar4 = FUN_00407bcc();
    if (iVar4 >> 0x1f != extraout_EDX_05) {
      iVar4 = thunk_FUN_004072dc();
    }
    local_1c = local_3c / (double)local_48;
    local_40 = iVar4;
    if (local_5 == '\0') {
      if ((double)_DAT_0088b00c < local_14) {
LAB_0088ae7b:
        FUN_00b2a8d8(*(undefined4 *)PTR_DAT_00baa8f8);
        if (local_5 == '\0') {
          FUN_00b2e42c(local_58);
        }
        else {
          FUN_00408228(local_33c);
          FUN_004072f4();
          FUN_00b0e5b4(local_54);
        }
        uVar3 = CONCAT22(uStack_35a,uStack_35c);
        *in_FS_OFFSET = uStack_364;
        uStack_35c = 0xaeec;
        uStack_35a = 0x88;
        FUN_0040c628(&local_350,2,uVar3);
        FUN_0040c5c8(&local_340);
        FUN_0040c628(&local_58,2);
        return;
      }
    }
    else {
      fVar9 = (float10)local_1c;
      uVar10 = SUB104(fVar9,0);
      uVar11 = (undefined4)((unkuint10)fVar9 >> 0x20);
      uVar14 = (undefined2)((unkuint10)fVar9 >> 0x40);
      fVar9 = (float10)local_14;
      uVar3 = FUN_004099cc(local_33c,0,0,SUB104(fVar9,0),(int)((unkuint10)fVar9 >> 0x20),
                           (short)((unkuint10)fVar9 >> 0x40));
      uVar3 = FUN_004098c0(uVar3,CONCAT22(extraout_var,0x2c));
      uVar3 = FUN_004095e4(uVar3,local_40);
      uVar3 = FUN_004098c0(uVar3,CONCAT22(extraout_var_00,0x2c));
      uVar3 = FUN_004099cc(uVar3,0,0,uVar10,uVar11,uVar14);
      uVar3 = FUN_004098c0(uVar3,CONCAT22(extraout_var_01,0x2c));
      uVar3 = FUN_004095e4(uVar3,local_48);
      FUN_004098c0(uVar3,CONCAT22(extraout_var_02,0x2c));
      FUN_00409a10();
      FUN_004072f4();
    }
    if ((double)_DAT_0088b010 < local_14) {
      FUN_00407bcc();
      FUN_004282d8(&local_34c);
      FUN_004282b0(local_40,&local_350);
      FUN_0040d87c(&local_58,7);
    }
    in_ST0 = (float10)local_14;
    local_348 = FUN_00407bcc();
    uStack_364 = SUB104((float10)CONCAT44(extraout_EDX_06,local_348),0);
    uStack_35c = (undefined2)((unkuint10)(float10)CONCAT44(extraout_EDX_06,local_348) >> 0x40);
    FUN_00b2a9a4(*(undefined4 *)PTR_DAT_00baa8f8);
    cVar2 = FUN_00b2a0ec(*(undefined4 *)PTR_DAT_00baa8f8);
    if ((cVar2 != '\0') || (local_14 = local_14 + 1.0, local_14 == (double)_DAT_0088b08c))
    goto LAB_0088ae7b;
  } while( true );
}



// === FUN_0088ba14 @ 0088ba14 size:1404 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0088ba14(byte param_1,undefined4 param_2,undefined4 param_3,float10 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_EDX;
  undefined2 extraout_var;
  int extraout_EDX_00;
  int iVar6;
  int extraout_EDX_01;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  undefined4 *in_FS_OFFSET;
  float10 fVar7;
  undefined4 local_3b0;
  undefined8 local_3ac;
  undefined4 local_3a4;
  undefined1 local_3a0 [744];
  undefined1 local_b8 [4];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac [4];
  undefined4 local_a8;
  double local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined *local_70;
  undefined8 local_6c;
  undefined *puStack_64;
  int local_60;
  wchar_t *local_5c;
  undefined *local_58;
  undefined4 local_54;
  wchar_t *pwStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined1 **local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  uint uStack_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined1 *puStack_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined1 *local_14;
  int iStack_10;
  int iStack_8;
  
  local_14 = &stack0xfffffffc;
  iStack_10 = 0x75;
  do {
    iStack_10 = iStack_10 + -1;
  } while (iStack_10 != 0);
  iStack_8 = (uint)param_1 << 0x18;
  local_1c = (double)CONCAT44(&LAB_0088c075,*in_FS_OFFSET);
  *in_FS_OFFSET = &local_1c;
  puVar3 = &stack0xfffffffc;
  if (param_1 != 0) {
    local_24 = (double)CONCAT44(0x88ba4d,(undefined4)local_24);
    FUN_00935348(*(undefined4 *)PTR_DAT_00ba9c04,&local_3a4);
    local_24 = (double)CONCAT44(0x88ba60,(undefined4)local_24);
    FUN_0040d7f4(&local_58,local_3a4,L"\\stability increase.csv");
    local_24 = (double)CONCAT44(0x88ba70,(undefined4)local_24);
    FUN_00408068(local_3a0,local_58,0);
    local_24 = (double)CONCAT44(0x88ba75,(undefined4)local_24);
    FUN_004072f4();
    local_24 = (double)CONCAT44(0x88ba80,(undefined4)local_24);
    FUN_00407ca0(local_3a0);
    local_24 = (double)CONCAT44(0x88ba85,(undefined4)local_24);
    FUN_004072f4();
    local_24 = (double)CONCAT44(0x88ba95,(undefined4)local_24);
    FUN_004097c0(local_3a0,L"Days, Date, R, New S, SInc, E(S), E(SInc)");
    local_24 = (double)CONCAT44(0x88ba9a,(undefined4)local_24);
    FUN_00409a10();
    local_24 = (double)CONCAT44(0x88ba9f,(undefined4)local_24);
    FUN_004072f4();
    puVar3 = local_14;
  }
  local_14 = puVar3;
  fVar7 = (float10)(double)CONCAT44(param_6,param_5) * (float10)_DAT_0088c120;
  local_24 = (double)CONCAT44(0x88baad,(undefined4)local_24);
  local_40._0_4_ = FUN_00407bcc();
  local_24 = (double)CONCAT44(local_40._0_4_,(undefined4)local_24);
  if ((int)local_40._0_4_ >> 0x1f != extraout_EDX) {
    local_24 = (double)CONCAT44(0x88babb,(undefined4)local_24);
    local_40._0_4_ = thunk_FUN_004072dc();
  }
  if (0x2ac6 < (int)local_40._0_4_) {
    local_40._0_4_ = 0x2ac6;
  }
  local_24 = (double)CONCAT44(0x88bae2,(undefined4)local_24);
  uVar4 = FUN_0061c7ac(PTR_PTR_LAB_00b279c4,1,*(undefined4 *)PTR_DAT_00ba982c);
  *(undefined4 *)PTR_DAT_00baa8f8 = uVar4;
  local_24 = (double)(longlong)(int)local_40._0_4_;
  local_2c = (double)CONCAT44(0x88bb01,(undefined4)local_2c);
  FUN_00b29314(*(undefined4 *)PTR_DAT_00baa8f8,L"Simulating repetition outcomes");
  local_2c = (double)CONCAT44(0x88bb09,(undefined4)local_2c);
  FUN_0040c5c8(&local_5c);
  uStack_34 = 0;
  uStack_32 = 0;
  puStack_30 = (undefined1 *)0x0;
  local_48 = (undefined1 **)0x0;
  if (0 < (int)local_40._0_4_) {
    local_60 = local_40._0_4_;
    local_44._0_2_ = 1;
    local_44._2_2_ = 0;
    unique0x00005600 = (double)(param_4 + (float10)1);
    local_3ac = (-*(double *)PTR_DAT_00baac8c * unique0x00005600) /
                (double)CONCAT44(param_6,param_5);
    puStack_30 = (undefined1 *)0x88bb5e;
    local_2c = local_3ac;
    FUN_00b18dac();
    local_54 = SUB104(fVar7,0);
    pwStack_50 = (wchar_t *)((unkuint10)fVar7 >> 0x20);
    uStack_4c = (undefined2)((unkuint10)fVar7 >> 0x40);
    local_2c = stack0xffffffc4;
    puStack_30 = &stack0x00000018;
    uStack_34 = (undefined2)param_6;
    uStack_32 = (undefined2)((uint)param_6 >> 0x10);
    uStack_38 = param_5;
    local_3ac = (double)fVar7;
    local_44._2_2_ = (undefined2)((uint)&local_14 >> 0x10);
    uVar4 = CONCAT22(local_44._2_2_,1);
    local_48 = (undefined1 **)0x88bb99;
    local_40 = (undefined1  [8])local_3ac;
    local_44 = &local_14;
    FUN_007a5624(uVar4,0,4);
    local_1c = (double)((float10)CONCAT28(uStack_4c,CONCAT44(pwStack_50,local_54)) *
                       (float10)(double)CONCAT44(iStack_10,local_14));
    local_24 = local_1c / (double)CONCAT44(param_6,param_5);
    if ((double)CONCAT44(puStack_30,CONCAT22(uStack_32,uStack_34)) <
        (double)CONCAT44(iStack_10,local_14) / (double)CONCAT44(param_6,param_5)) {
      local_48 = local_44;
    }
    local_2c = (double)CONCAT44(&stack0xfffffffc,&LAB_0088bdcd);
    puStack_30 = (undefined1 *)*in_FS_OFFSET;
    *in_FS_OFFSET = &puStack_30;
    uStack_34 = 0xbbf1;
    uStack_32 = 0x88;
    uVar4 = FUN_004095e4(local_3a0,local_44);
    uStack_34 = 0xbbfa;
    uStack_32 = 0x88;
    local_74 = FUN_004098c0(uVar4,CONCAT22(extraout_var,0x2c));
    uStack_34 = 0xbc02;
    uStack_32 = 0x88;
    FUN_0042c3e8();
    uStack_34 = 0xbc07;
    uStack_32 = 0x88;
    uStack_38 = FUN_00407bcc();
    uStack_34 = (undefined2)extraout_EDX_00;
    uStack_32 = (undefined2)((uint)extraout_EDX_00 >> 0x10);
    iVar5 = (int)local_44 + uStack_38;
    iVar1 = ((int)local_44 >> 0x1f) + extraout_EDX_00;
    iVar6 = iVar1 + (uint)CARRY4((uint)local_44,uStack_38);
    if (SCARRY4((int)local_44 >> 0x1f,extraout_EDX_00) !=
        SCARRY4(iVar1,(uint)CARRY4((uint)local_44,uStack_38))) {
      local_40._4_4_ = 0x88bc1b;
      iVar5 = thunk_FUN_004072dc();
      iVar6 = extraout_EDX_01;
    }
    local_3ac = (double)CONCAT44(iVar6,iVar5);
    local_6c = (double)(longlong)local_3ac;
    uStack_34 = (undefined2)((ulonglong)local_6c >> 0x20);
    uStack_32 = (undefined2)((ulonglong)local_6c >> 0x30);
    uStack_38 = (undefined4)local_6c;
    local_40._4_4_ = 0x88bc4d;
    FUN_0042d430(L"mmm dd yyyy",PTR_DAT_00baa920,&local_70);
    uStack_34 = 0xbc58;
    uStack_32 = 0x88;
    uVar4 = FUN_004097c0(local_74,local_70);
    uStack_34 = 0xbc61;
    uStack_32 = 0x88;
    local_7c = FUN_004098c0(uVar4,CONCAT22(extraout_var_00,0x2c));
    uStack_32 = (undefined2)((uint)local_7c >> 0x10);
    uStack_34 = uStack_4c;
    uStack_38 = (uint)pwStack_50;
    local_40._4_4_ = local_54;
    local_40._0_4_ = 0x88bc82;
    FUN_0042bc74(L"0.###",PTR_DAT_00baa920,&local_78);
    uStack_34 = 0xbc8d;
    uStack_32 = 0x88;
    uVar4 = FUN_004097c0(local_7c,local_78);
    uStack_34 = 0xbc96;
    uStack_32 = 0x88;
    local_84 = FUN_004098c0(uVar4,CONCAT22(extraout_var_01,0x2c));
    fVar7 = (float10)(double)CONCAT44(iStack_10,local_14);
    local_40._4_4_ = SUB104(fVar7,0);
    uStack_38 = (uint)((unkuint10)fVar7 >> 0x20);
    uStack_34 = (undefined2)((unkuint10)fVar7 >> 0x40);
    local_40._0_4_ = 0x88bcb6;
    FUN_0042bc74(&DAT_0088c1b8,PTR_DAT_00baa920,&local_80);
    uStack_34 = 0xbcc1;
    uStack_32 = 0x88;
    uVar4 = FUN_004097c0(local_84,local_80);
    uStack_34 = 0xbcca;
    uStack_32 = 0x88;
    local_8c = FUN_004098c0(uVar4,CONCAT22(extraout_var_02,0x2c));
    fVar7 = (float10)local_2c;
    local_40._4_4_ = SUB104(fVar7,0);
    uStack_38 = (uint)((unkuint10)fVar7 >> 0x20);
    uStack_34 = (undefined2)((unkuint10)fVar7 >> 0x40);
    local_40._0_4_ = 0x88bcf0;
    FUN_0042bc74(L"0.####",PTR_DAT_00baa920,&local_88);
    uStack_34 = 0xbd01;
    uStack_32 = 0x88;
    uVar4 = FUN_004097c0(local_8c,local_88);
    uStack_34 = 0xbd0a;
    uStack_32 = 0x88;
    local_94 = FUN_004098c0(uVar4,CONCAT22(extraout_var_03,0x2c));
    fVar7 = (float10)local_1c;
    local_40._4_4_ = SUB104(fVar7,0);
    uStack_38 = (uint)((unkuint10)fVar7 >> 0x20);
    uStack_34 = (undefined2)((unkuint10)fVar7 >> 0x40);
    local_40._0_4_ = 0x88bd30;
    FUN_0042bc74(&DAT_0088c1b8,PTR_DAT_00baa920,&local_90);
    uStack_34 = 0xbd41;
    uStack_32 = 0x88;
    uVar4 = FUN_004097c0(local_94,local_90);
    uStack_34 = 0xbd4a;
    uStack_32 = 0x88;
    local_9c = FUN_004098c0(uVar4,CONCAT22(extraout_var_04,0x2c));
    fVar7 = (float10)local_24;
    local_40._4_4_ = SUB104(fVar7,0);
    uStack_38 = (uint)((unkuint10)fVar7 >> 0x20);
    uStack_34 = (undefined2)((unkuint10)fVar7 >> 0x40);
    local_40._0_4_ = 0x88bd70;
    FUN_0042bc74(L"0.####",PTR_DAT_00baa920,&local_98);
    uStack_34 = 0xbd81;
    uStack_32 = 0x88;
    FUN_004097c0(local_9c,local_98);
    uStack_34 = 0xbd86;
    uStack_32 = 0x88;
    FUN_00409a10();
    uVar4 = local_2c._4_4_;
    *in_FS_OFFSET = puStack_30;
    local_2c._4_4_ = &DAT_0088bdd4;
    local_2c._0_4_ = 0x88bd9e;
    FUN_0040c5c8(&local_98,puStack_30,uVar4);
    local_2c._0_4_ = 0x88bda9;
    FUN_0040c5c8(&local_90);
    local_2c._0_4_ = 0x88bdb4;
    FUN_0040c5c8(&local_88);
    local_2c._0_4_ = 0x88bdbc;
    FUN_0040c5c8(&local_80);
    local_2c._0_4_ = 0x88bdc4;
    FUN_0040c5c8(&local_78);
    local_2c = (double)CONCAT44(local_2c._4_4_,0x88bdcc);
    FUN_0040c5c8(&local_70);
    return;
  }
  local_2c = (double)CONCAT44(0x88be17,(undefined4)local_2c);
  FUN_00b2a8d8(*(undefined4 *)PTR_DAT_00baa8f8);
  local_2c = (double)CONCAT44(&stack0xfffffffc,&LAB_0088bfce);
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_30;
  uStack_34 = 0xc1e8;
  uStack_32 = 0x88;
  uStack_38 = 0x88be32;
  local_40._4_4_ = FUN_00407bcc();
  iVar6 = (int)local_48 + local_40._4_4_;
  iVar1 = ((int)local_48 >> 0x1f) + extraout_EDX_02;
  uStack_38 = iVar1 + (uint)CARRY4((uint)local_48,local_40._4_4_);
  if (SCARRY4((int)local_48 >> 0x1f,extraout_EDX_02) !=
      SCARRY4(iVar1,(uint)CARRY4((uint)local_48,local_40._4_4_))) {
    local_40._0_4_ = 0x88be46;
    iVar6 = thunk_FUN_004072dc();
    uStack_38 = extraout_EDX_03;
  }
  local_40._0_4_ = 0x88be56;
  local_40._4_4_ = iVar6;
  FUN_004282d8(&local_3b0);
  uStack_38 = local_3b0;
  local_40._4_4_ = &DAT_0088c25c;
  local_40._0_4_ = L"Date: ";
  local_44._0_2_ = 0xbe76;
  local_44._2_2_ = 0x88;
  FUN_0040d87c(local_ac,4);
  local_44._0_2_ = 0xbe7b;
  local_44._2_2_ = 0x88;
  FUN_0042c3e8();
  local_44._0_2_ = 0xbe80;
  local_44._2_2_ = 0x88;
  local_48 = (undefined1 **)FUN_00407bcc();
  local_44._0_2_ = (undefined2)extraout_EDX_04;
  local_44._2_2_ = (undefined2)((uint)extraout_EDX_04 >> 0x10);
  iVar6 = (int)local_48 * 2;
  iVar1 = ((int)local_48 >> 0x1f) + extraout_EDX_04;
  iVar5 = iVar1 + (uint)CARRY4((uint)local_48,(uint)local_48);
  if (SCARRY4((int)local_48 >> 0x1f,extraout_EDX_04) !=
      SCARRY4(iVar1,(uint)CARRY4((uint)local_48,(uint)local_48))) {
    uStack_4c = 0xbe94;
    uStack_4a = 0x88;
    iVar6 = thunk_FUN_004072dc();
    iVar5 = extraout_EDX_05;
  }
  local_3ac = (double)CONCAT44(iVar5,iVar6);
  local_a4 = (double)(longlong)local_3ac;
  local_44._0_2_ = (undefined2)((ulonglong)local_a4 >> 0x20);
  local_44._2_2_ = (undefined2)((ulonglong)local_a4 >> 0x30);
  local_48 = (undefined1 **)local_a4._0_4_;
  uStack_4c = 0xbed2;
  uStack_4a = 0x88;
  FUN_0042d430(L"mmm dd yyyy",PTR_DAT_00baa920,&local_a8);
  fVar7 = (float10)(double)CONCAT44(param_6,param_5);
  uStack_4c = SUB102(fVar7,0);
  uStack_4a = (undefined2)((unkuint10)fVar7 >> 0x10);
  local_48 = (undefined1 **)((unkuint10)fVar7 >> 0x20);
  local_44._0_2_ = (undefined2)((unkuint10)fVar7 >> 0x40);
  pwStack_50 = (wchar_t *)0x88bef2;
  FUN_0042bc74(L"0.##",PTR_DAT_00baa920,&local_b0);
  fVar7 = (float10)(double)CONCAT44(param_6,param_5) *
          (float10)(double)CONCAT44(puStack_30,CONCAT22(uStack_32,uStack_34));
  uStack_4c = SUB102(fVar7,0);
  uStack_4a = (undefined2)((unkuint10)fVar7 >> 0x10);
  local_48 = (undefined1 **)((unkuint10)fVar7 >> 0x20);
  local_44._0_2_ = (undefined2)((unkuint10)fVar7 >> 0x40);
  pwStack_50 = (wchar_t *)0x88bf15;
  FUN_0042bc74(L"0.##",PTR_DAT_00baa920,&local_b4);
  fVar7 = (float10)(double)CONCAT44(puStack_30,CONCAT22(uStack_32,uStack_34)) *
          (float10)_DAT_0088c298;
  uStack_4c = SUB102(fVar7,0);
  uStack_4a = (undefined2)((unkuint10)fVar7 >> 0x10);
  local_48 = (undefined1 **)((unkuint10)fVar7 >> 0x20);
  local_44._0_2_ = (undefined2)((unkuint10)fVar7 >> 0x40);
  pwStack_50 = 
  L"뗿ｘ\xffff뗿｜\xffff屨裂栀슨\x88뗿ｔ\xffff屨裂栀시\x88뗿ｐ\xffff屨裂栀쌔\x88뗿ｌ\xffff屨裃贀ꡅ಺"
  ;
  FUN_0042bc74(L"0.##",PTR_DAT_00baa920,local_b8);
  local_44._0_2_ = local_ac._0_2_;
  local_44._2_2_ = local_ac._2_2_;
  local_48 = (undefined1 **)local_a8;
  uStack_4c = 0xc25c;
  uStack_4a = 0x88;
  pwStack_50 = L"Current stability: ";
  local_54 = local_b0;
  local_58 = &DAT_0088c25c;
  local_5c = L"Expected stability: ";
  local_60 = local_b4;
  puStack_64 = &DAT_0088c25c;
  local_6c._4_4_ = L"Expected stability increase: ";
  local_70 = &DAT_0088c35c;
  local_74 = 0x88bf89;
  FUN_0040d87c(&local_5c,0xc);
  pwVar2 = local_6c._4_4_;
  *in_FS_OFFSET = local_70;
  local_6c._4_4_ = (wchar_t *)&LAB_0088bfd5;
  local_6c._0_4_ = 0x88bfa1;
  FUN_0040c5c8(local_b8,local_70,pwVar2);
  local_6c._0_4_ = 0x88bfac;
  FUN_0040c5c8(&local_b4);
  local_6c._0_4_ = 0x88bfb7;
  FUN_0040c5c8(&local_b0);
  local_6c._0_4_ = 0x88bfc2;
  FUN_0040c5c8(local_ac);
  local_6c = (double)CONCAT44(local_6c._4_4_,0x88bfcd);
  FUN_0040c5c8(&local_a8);
  return;
}



// === FUN_0088cc8c @ 0088cc8c size:171 ===

void FUN_0088cc8c(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  double local_14;
  int local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_14 = 1.1;
  puStack_2c = &LAB_0088cd2d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if (*(short *)(param_1 + 0x38) != 1) {
    puVar1 = &stack0xfffffffc;
    local_8 = param_1;
    if (*(int *)(param_1 + 0x12) < 1) {
      FUN_00b2f5c4(L"UsedInterval<1 when computing U-Factor",
                   L"UsedInterval is less than 1 in GetRepetitionData");
      *(undefined4 *)(local_8 + 0x12) = 1;
      puVar1 = puStack_28;
    }
    puStack_28 = puVar1;
    local_14 = (double)*(int *)(local_8 + 0x32) / (double)*(int *)(local_8 + 0x12);
    FUN_0088cae0(&local_14,local_8 + 0x32,local_8 + 0x12);
  }
  *in_FS_OFFSET = uStack_30;
  return;
}



// === FUN_00897254 @ 00897254 size:1106 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00897254(undefined4 param_1,ushort param_2,short param_3,int *param_4,double param_5,
                 char param_6,undefined2 param_7,double param_8,char param_9,int param_10,
                 undefined4 param_11,undefined4 param_12,uint param_13)

{
  uint uVar1;
  uint uVar2;
  undefined3 uVar4;
  undefined4 uVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar5;
  int extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  wchar_t *pwStack_110;
  undefined4 uVar6;
  undefined4 uStack_104;
  undefined1 *puStack_100;
  undefined1 *puStack_fc;
  undefined4 local_f8;
  undefined1 *puStack_f4;
  undefined1 *puStack_f0;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c5;
  ushort local_c1;
  short local_bf;
  undefined2 local_bd;
  undefined4 local_bb;
  undefined4 local_b7;
  undefined1 local_b3 [6];
  char local_ad;
  short local_ac;
  undefined4 local_aa;
  undefined2 local_a6;
  char local_a4;
  int local_a3;
  char local_9f;
  undefined1 local_9e [40];
  int local_76;
  double local_24;
  undefined4 local_1c;
  undefined1 local_15;
  undefined4 local_14;
  undefined4 local_10;
  short local_c;
  ushort local_a;
  undefined4 local_8;
  
  puStack_f0 = &stack0xfffffffc;
  puStack_fc = &stack0xfffffffc;
  local_dc = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_cc = 0;
  local_d0 = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_f4 = &LAB_008976cc;
  local_f8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_f8;
  puStack_100 = &LAB_0089767b;
  uStack_104 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_104;
  if ((int)param_13 < 0) {
    param_13 = 0;
  }
  if (0xadf2 < (int)param_13) {
    param_13 = 0xadf2;
  }
  local_c = param_3;
  local_a = param_2;
  local_8 = param_1;
  local_1c = FUN_00964030(*(undefined4 *)(*(int *)PTR_DAT_00ba9c04 + 0x72),param_1);
  if ((param_6 == '\x01') && (uVar1 = FUN_008a71ec(param_9), (uVar1 & 0x80) == 0)) {
    FUN_00b2b8f8(L"Grade is not set to Grade Auto in automatic mode");
    param_9 = '\t';
  }
  if ((param_6 == '\0') && (uVar1 = FUN_008a71ec(param_9), (uVar1 & 0x40) == 0)) {
    FUN_008a50f8(param_9,&local_d0);
    FUN_0040d7f4(&local_cc,L"Wrong grade in standard learning mode: ",local_d0);
    FUN_00b2b8f8(local_cc);
    param_9 = '\v';
  }
  if ((*param_4 == 0) && ((1 < local_a || (local_c != 0)))) {
    FUN_0094da18(*(undefined4 *)PTR_DAT_00ba9c04,local_8,local_9e);
    FUN_008a370c(local_8,local_9e);
    *param_4 = local_76;
  }
  FUN_00961998(*(undefined4 *)PTR_DAT_00ba9c04,param_10);
  local_24 = (double)(((float10)(double)CONCAT44(param_12,param_11) - in_ST0) *
                     (float10)_DAT_008977a8);
  if ((float10)local_24 < _DAT_008977ac) {
    local_24 = 255.0;
  }
  local_c5 = local_8;
  local_c1 = local_a;
  local_bf = local_c;
  uVar1 = param_13;
  if (0xffff < param_13) {
    uVar1 = thunk_FUN_004072dc();
  }
  local_bd = (undefined2)uVar1;
  local_ad = param_9;
  local_a4 = param_6;
  if (0.0 <= param_8) {
    uVar1 = FUN_00407bcc();
    uVar2 = uVar1 + 0x8000;
    if (extraout_EDX + (uint)(0xffff7fff < uVar1) != 0 || 0xffff < uVar2) {
      uVar2 = thunk_FUN_004072dc();
    }
    local_ac = (short)uVar2 + -0x8000;
  }
  else {
    local_ac = -1;
  }
  FUN_0070ff58(&param_5);
  if (param_5 == (double)_DAT_008977bc) {
    local_9f = -1;
  }
  else {
    uVar1 = FUN_00407bcc();
    uVar2 = uVar1 + 0x80;
    if (extraout_EDX_00 + (uint)(0xffffff7f < uVar1) != 0 || 0xff < uVar2) {
      uVar2 = thunk_FUN_004072dc();
    }
    local_9f = (char)uVar2 + -0x80;
  }
  local_a3 = *param_4;
  local_aa = local_1c;
  local_bb = param_11;
  local_b7 = param_12;
  FUN_0040a370(local_b3);
  local_a6 = param_7;
  uVar6 = 0x8974f9;
  FUN_0089bc6c(&local_c5,param_4);
  if (param_6 == '\0') {
    FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_d4);
    pwStack_110 = L"Ret.dat";
    uVar6 = local_d4;
    FUN_0040d87c(&local_10,3);
    FUN_0094c0b8(*(undefined4 *)PTR_DAT_00ba9c04,&local_d8);
    FUN_0040d87c(&local_14,3);
    FUN_00407fec(&DAT_00ca3bcc,local_10);
    FUN_004072f4();
    FUN_00407fec(&DAT_00ca3e1c,local_14);
    FUN_004072f4();
    FUN_00409038(&DAT_00ca3bcc,0xc);
    FUN_004072f4();
    FUN_00409038(&DAT_00ca3e1c,0xc);
    FUN_004072f4();
    uVar1 = FUN_008a71ec(param_9);
    uVar4 = (undefined3)(uVar1 >> 8);
    if ((uVar1 & 0x10) == 0) {
      uVar1 = FUN_008a71ec(CONCAT31(uVar4,param_9));
      if ((uVar1 & 0x20) == 0) {
        FUN_008a50f8(param_9,&local_e0);
        FUN_0040d7f4(&local_dc,L"Wrong grade in Retention processing: ",local_e0);
        FUN_00b2b8f8(local_dc);
      }
      else {
        if (SBORROW4(param_10,param_13)) {
          thunk_FUN_004072dc(uVar1,param_10 - param_13);
        }
        FUN_008958d8(param_10);
      }
    }
    else {
      if ((local_a == 1) && (local_c == 0)) {
        local_15 = 1;
      }
      else {
        local_15 = 0;
        uVar4 = 0;
      }
      if (param_9 == '\b') {
        local_15 = 1;
      }
      uVar3 = CONCAT31(uVar4,param_9);
      iVar5 = param_10 - param_13;
      if (SBORROW4(param_10,param_13)) {
        thunk_FUN_004072dc(uVar3,iVar5);
        iVar5 = extraout_EDX_01;
      }
      FUN_00896af4(param_10,iVar5,local_15,uVar3);
    }
    FUN_00408228(&DAT_00ca3bcc);
    FUN_004072f4();
    FUN_00408228(&DAT_00ca3e1c);
    FUN_004072f4();
    *in_FS_OFFSET = L"BackRet.dat";
  }
  else {
    *in_FS_OFFSET = uStack_104;
  }
  *in_FS_OFFSET = pwStack_110;
  FUN_0040c628(&local_e0,6,uVar6,&LAB_008976d3);
  FUN_0040c628(&local_14,2);
  return;
}



// === FUN_0089c5e8 @ 0089c5e8 size:528 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_0089c5e8(int param_1,int param_2,ushort param_3,ushort *param_4,undefined2 *param_5,
            ushort *param_6,undefined4 param_7,ushort param_8,ushort param_9,ushort param_10)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  int extraout_EDX_01;
  bool bVar6;
  ushort local_1e;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined1 local_f;
  
  local_f = 0;
  local_14 = param_2 - param_1;
  if (SBORROW4(param_2,param_1)) {
    local_14 = thunk_FUN_004072dc();
  }
  if ((int)local_14 < 0) {
    FUN_00b2b8f8(L"New last repetitions is the same as old last repetition");
  }
  else {
    if (_DAT_0089c874 < (float)*param_4 / (float)(int)local_14) {
      if ((longlong)(int)((longlong)(int)local_14 * 4) != (longlong)(int)local_14 * 4) {
        thunk_FUN_004072dc();
      }
      uVar3 = FUN_00407bd8();
      if (extraout_EDX != 0 || 0xffff < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      *param_4 = (ushort)uVar3;
    }
    FUN_0089c878(*param_4,param_10,param_7,param_6);
    iVar4 = (uint)param_8 - (uint)param_9;
    if (SBORROW4((uint)param_8,(uint)param_9)) {
      iVar4 = thunk_FUN_004072dc();
    }
    uVar3 = iVar4 + 0x80;
    if (0xff < uVar3) {
      uVar3 = thunk_FUN_004072dc();
    }
    cVar2 = (char)uVar3 + -0x80;
    if ('\x01' < cVar2) {
      iVar4 = cVar2 + -1;
      if (SBORROW4((int)cVar2,1)) {
        iVar4 = thunk_FUN_004072dc();
      }
      lVar1 = (longlong)iVar4 * (longlong)(int)(uint)*param_6;
      if ((int)lVar1 != lVar1) {
        uVar5 = thunk_FUN_004072dc((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
        lVar1 = CONCAT44(extraout_EDX_00,uVar5);
      }
      iVar4 = (int)lVar1;
      bVar6 = SBORROW4(local_14,iVar4);
      local_14 = local_14 - iVar4;
      if (bVar6) {
        thunk_FUN_004072dc(iVar4,(int)((ulonglong)lVar1 >> 0x20));
      }
    }
    if (-1 < (int)local_14) {
      local_1e = 1;
      local_18 = (uint)*param_6;
      if (1 < param_10) {
        do {
          if (local_1e == param_3) {
            uVar3 = local_1e + 1;
            if (SCARRY4((uint)local_1e,1)) {
              uVar3 = thunk_FUN_004072dc();
            }
            if (((uVar3 == param_10) && (cVar2 == '\0')) &&
               (local_18 = param_2 - param_1, SBORROW4(param_2,param_1))) {
              local_18 = thunk_FUN_004072dc();
            }
          }
          if ((('\0' < cVar2) || (param_3 <= local_1e)) &&
             (bVar6 = SBORROW4(local_14,local_18), local_14 = local_14 - local_18, bVar6)) {
            thunk_FUN_004072dc();
          }
          if ((int)local_14 < 0) {
            return 0;
          }
          if ((local_1e == param_3) && (cVar2 == '\0')) {
            uVar3 = local_18;
            if (0xffff < local_18) {
              uVar3 = thunk_FUN_004072dc();
            }
            *param_5 = (short)uVar3;
          }
          local_1c = FUN_00407bd8();
          if ((int)local_1c >> 0x1f != extraout_EDX_01) {
            local_1c = thunk_FUN_004072dc();
          }
          if ((local_1c == local_18) &&
             (bVar6 = SCARRY4(local_1c,1), local_1c = local_1c + 1, bVar6)) {
            thunk_FUN_004072dc();
          }
          local_18 = local_1c;
          bVar6 = local_1e == 0xffff;
          local_1e = local_1e + 1;
          if (bVar6) {
            thunk_FUN_004072dc();
          }
        } while (local_1e < param_10);
      }
      if ('\0' < cVar2) {
        if (0xffff < local_14) {
          local_14 = thunk_FUN_004072dc();
        }
        *param_5 = (short)local_14;
      }
      local_f = 1;
    }
  }
  return local_f;
}



// === FUN_0089f1f4 @ 0089f1f4 size:557 ===

void FUN_0089f1f4(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_5c;
  undefined4 in_stack_ffffffac;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_21;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  uint local_18;
  uint local_14;
  undefined1 local_d;
  uint local_c;
  int *local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  puStack_38 = &LAB_0089f421;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_d = 0;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 != 0) {
    uVar2 = param_2 - 1;
    puVar1 = &stack0xfffffffc;
    if (SBORROW4(param_2,1)) {
      uVar2 = thunk_FUN_004072dc();
      puVar1 = puStack_34;
    }
    puStack_34 = puVar1;
    local_18 = local_c;
    iVar5 = *local_8;
    local_14 = uVar2;
    if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar2)) {
      uVar2 = thunk_FUN_004072dc();
      iVar5 = extraout_EDX;
    }
    local_1a = *(ushort *)(iVar5 + 4 + uVar2 * 0x27);
    iVar5 = *local_8;
    if ((iVar5 == 0) || (uVar2 = local_18, *(uint *)(iVar5 + -4) <= local_18)) {
      uVar2 = thunk_FUN_004072dc();
      iVar5 = extraout_EDX_00;
    }
    local_1c = *(ushort *)(iVar5 + 4 + uVar2 * 0x27);
    iVar5 = *local_8;
    if ((iVar5 == 0) || (uVar2 = local_14, *(uint *)(iVar5 + -4) <= local_14)) {
      uVar2 = thunk_FUN_004072dc();
      iVar5 = extraout_EDX_01;
    }
    local_1e = *(ushort *)(iVar5 + 6 + uVar2 * 0x27);
    iVar5 = *local_8;
    if ((iVar5 == 0) || (uVar2 = local_18, *(uint *)(iVar5 + -4) <= local_18)) {
      uVar2 = thunk_FUN_004072dc();
      iVar5 = extraout_EDX_02;
    }
    local_20 = *(ushort *)(iVar5 + 6 + uVar2 * 0x27);
    iVar5 = *local_8;
    if ((iVar5 == 0) || (uVar2 = local_18, *(uint *)(iVar5 + -4) <= local_18)) {
      uVar2 = thunk_FUN_004072dc();
      iVar5 = extraout_EDX_03;
    }
    local_21 = *(undefined1 *)(iVar5 + 0x18 + uVar2 * 0x27);
    uVar2 = FUN_008a71ec(CONCAT31((int3)(uVar2 * 0x27 >> 8),local_21));
    if ((uVar2 & 1) == 0) {
      uVar3 = (uint)local_1c;
      uVar2 = local_1a + 1;
      if (SCARRY4((uint)local_1a,1)) {
        uVar3 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX_04;
      }
      if ((uVar3 == uVar2) && (puVar1 = puStack_34, local_1e == local_20)) goto LAB_0089f406;
    }
    uVar2 = FUN_008a71ec(local_21);
    if (((uVar2 & 1) != 0) && (local_1c <= local_1a)) {
      uVar3 = (uint)local_20;
      uVar2 = local_1e + 1;
      if (SCARRY4((uint)local_1e,1)) {
        uVar3 = thunk_FUN_004072dc();
        uVar2 = extraout_EDX_05;
      }
      puVar1 = puStack_34;
      if (uVar3 == uVar2) goto LAB_0089f406;
    }
    puVar1 = puStack_34;
    if ((((local_1a < local_1c) || (local_1c != 1)) || (local_20 != 0)) &&
       (((local_1a <= local_1c || (local_1c != 0)) || (local_20 != 0)))) {
      if (*PTR_DAT_00baadd4 != '\0') {
        iVar4 = 0;
        iVar5 = *local_8;
        if ((iVar5 == 0) || (*(int *)(iVar5 + -4) == 0)) {
          iVar4 = thunk_FUN_004072dc();
          iVar5 = extraout_EDX_06;
        }
        FUN_009a9aa8(*(undefined4 *)(iVar5 + iVar4 * 0x27),&local_2c);
        iVar5 = *local_8;
        if ((iVar5 == 0) || (uVar2 = local_18, *(uint *)(iVar5 + -4) <= local_18)) {
          uVar2 = thunk_FUN_004072dc();
          iVar5 = extraout_EDX_07;
        }
        in_stack_ffffffac = *(undefined4 *)(iVar5 + 0xe + uVar2 * 0x27);
        FUN_00b26b58(&local_30);
        uStackY_5c = local_30;
        FUN_0040d87c(&local_28,6);
        FUN_00b2b8f8(local_28);
      }
      local_d = 1;
      puVar1 = puStack_34;
    }
  }
LAB_0089f406:
  puStack_34 = puVar1;
  *in_FS_OFFSET = uStackY_5c;
  FUN_0040c628(&local_30,3,in_stack_ffffffac,&LAB_0089f428);
  return;
}



// === FUN_008a4cd8 @ 008a4cd8 size:460 ===

/* WARNING: Removing unreachable block (ram,0x008a4d7e) */

void FUN_008a4cd8(undefined4 param_1,char *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  wchar_t *local_44;
  undefined4 local_40;
  wchar_t *local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  
  local_24 = &stack0xfffffffc;
  local_30 = &stack0xfffffffc;
  iVar4 = 7;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_008a4eca;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_34 = &LAB_008a4e89;
  local_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_38;
  if ((*param_2 < -1) || (puVar1 = &stack0xfffffffc, puVar2 = &stack0xfffffffc, '\r' < *param_2)) {
    local_3c = L"Grade out of range: ";
    local_40 = 0x8a4d3b;
    FUN_004282b0((int)*param_2,&stack0xffffffe4);
    local_44 = L"\r\n   ";
    local_40 = unaff_ESI;
    FUN_009a9aa8(param_1,&stack0xffffffe0);
    FUN_0040d87c(&stack0xffffffe8,4);
    FUN_00b2b8f8(unaff_EBX);
    *param_2 = '\v';
    uStack_48 = unaff_EDI;
    puVar1 = local_30;
    puVar2 = local_24;
  }
  local_24 = puVar2;
  local_30 = puVar1;
  if (*param_2 == -1) {
    FUN_009a9aa8(param_1,&local_30);
    FUN_0040d7f4(&local_2c,L"Old style grading of automatic repetition in ",local_30);
    FUN_00b2b8f8(local_2c);
    *param_2 = '\t';
  }
  uVar3 = FUN_008a71ec(*param_2);
  if ((uVar3 & 8) != 0) {
    FUN_004282b0((int)*param_2,&local_38);
    FUN_009a9aa8(param_1,&local_3c);
    FUN_0040d87c(&local_34,4);
    FUN_00b2f5c4(local_34,L"Non-item review with a grade");
    *param_2 = '\n';
  }
  if ((*param_2 == '\x03') || (*param_2 == '\x06')) {
    FUN_009a9aa8(param_1,&local_44);
    FUN_0040d7f4(&local_40,L"Old style topic grade in ",local_44);
    FUN_00b2b8f8(local_40);
    *param_2 = '\n';
  }
  puVar1 = local_34;
  *in_FS_OFFSET = uStack_48;
  *in_FS_OFFSET = local_3c;
  local_34 = &LAB_008a4ed1;
  local_38 = 0x8a4ec9;
  FUN_0040c628(&local_44,0xc,puVar1);
  return;
}



// === FUN_008a72cc @ 008a72cc size:2252 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008a72cc(uint *param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  short sVar1;
  undefined1 *puVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint extraout_ECX;
  int iVar14;
  uint extraout_EDX;
  uint extraout_EDX_00;
  undefined2 extraout_var;
  uint extraout_EDX_01;
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
  uint extraout_EDX_15;
  uint extraout_EDX_16;
  uint extraout_EDX_17;
  uint extraout_EDX_18;
  uint extraout_EDX_19;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  uint extraout_EDX_20;
  uint extraout_EDX_21;
  uint extraout_EDX_22;
  uint extraout_EDX_23;
  uint extraout_EDX_24;
  undefined4 unaff_EBX;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint *in_FS_OFFSET;
  byte bVar17;
  bool bVar18;
  float10 in_ST0;
  float10 fVar19;
  float10 fVar20;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar21;
  undefined1 local_bc [8];
  undefined4 local_b4;
  undefined1 *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_80;
  undefined4 local_7c;
  undefined4 local_77 [9];
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 uStack_3c;
  wchar_t *local_38;
  wchar_t *pwStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 *local_24;
  wchar_t *pwVar22;
  undefined4 local_14;
  
  bVar17 = 0;
  local_24 = &stack0xfffffffc;
  uStack_30 = &stack0xfffffffc;
  iVar11 = 0x16;
  do {
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  LOCK();
  UNLOCK();
  local_2c = (double)(ulonglong)*in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&local_2c;
  *param_4 = 0;
  pwStack_34 = L"ꇩ똾ǿ";
  local_38 = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&local_38;
  if (*param_1 == 0) {
    uStack_3c._3_1_ = true;
  }
  else {
    local_38 = (wchar_t *)*param_1;
    if (local_38 != (wchar_t *)0x0) {
      local_38 = *(wchar_t **)(local_38 + -2);
    }
    uStack_3c._3_1_ = local_38 == (wchar_t *)0x0;
  }
  if ((bool)uStack_3c._3_1_ == false) {
    local_14 = (uint)(DAT_00000000 == '\x01') << 0x18;
    iVar11 = 0;
    uStack_30 = &stack0xfffffffc;
    do {
      local_14 = CONCAT13(local_14._3_1_,0x10000);
      local_24 = (undefined1 *)0x0;
      pwVar22 = (wchar_t *)0xbff00000;
      local_2c = -1.0;
      local_40 = *param_1;
      if (local_40 != 0) {
        local_40 = *(uint *)(local_40 - 4);
      }
      uVar9 = local_40;
      if (0xffff < local_40) {
        local_2c = -1.0000000020147375;
        uVar9 = thunk_FUN_004072dc();
      }
      if ((short)uVar9 != 0) {
        uStack_30 = (undefined1 *)CONCAT22((short)uVar9,(undefined2)uStack_30);
        local_14 = CONCAT22(local_14._2_2_,1);
        do {
          uVar9 = (local_14 & 0xffff) - 1;
          if (SBORROW4(local_14 & 0xffff,1)) {
            local_2c = (double)CONCAT44(local_2c._4_4_,0x8a73c4);
            uVar9 = thunk_FUN_004072dc();
          }
          uVar10 = *param_1;
          if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
            local_2c = (double)CONCAT44(local_2c._4_4_,0x8a73d7);
            uVar9 = thunk_FUN_004072dc();
            uVar10 = extraout_EDX;
          }
          if (*(int *)(uVar10 + uVar9 * 0x27) == param_2) {
            uVar9 = (local_14 & 0xffff) - 1;
            fVar19 = in_ST0;
            fVar20 = in_ST1;
            fVar3 = in_ST2;
            fVar4 = in_ST3;
            fVar5 = in_ST4;
            fVar6 = in_ST5;
            if (SBORROW4(local_14 & 0xffff,1)) {
              local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7499);
              uVar9 = thunk_FUN_004072dc();
              fVar19 = in_ST0;
              fVar20 = in_ST1;
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
            in_ST0 = fVar20;
            uVar10 = *param_1;
            if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
              local_2c = (double)CONCAT44(local_2c._4_4_,0x8a74ac);
              uVar9 = thunk_FUN_004072dc();
              uVar10 = extraout_EDX_01;
            }
            if (5 < *(byte *)(uVar10 + 0x21 + uVar9 * 0x27)) {
              local_2c = (double)CONCAT44(local_2c._4_4_,L"Wrong repetition history record type: ");
              uVar9 = (local_14 & 0xffff) - 1;
              if (SBORROW4(local_14 & 0xffff,1)) {
                uStack_30 = (undefined1 *)0x8a74ce;
                uVar9 = thunk_FUN_004072dc();
              }
              uVar10 = *param_1;
              if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
                uStack_30 = (undefined1 *)0x8a74e1;
                uVar9 = thunk_FUN_004072dc();
                uVar10 = extraout_EDX_02;
              }
              uStack_30 = (undefined1 *)0x8a74f4;
              FUN_004282b0(*(undefined1 *)(uVar10 + 0x21 + uVar9 * 0x27),&local_8c);
              uStack_30 = local_8c;
              pwStack_34 = L"\r\n   ";
              local_38 = L"뗿ｴ\xffff薍ｼ\xffffҺ";
              FUN_009a9aa8(param_2,&local_90);
              local_2c = (double)CONCAT44(local_90,(uint)local_2c);
              uStack_3c = 0x8a7523;
              FUN_0040d87c(&local_88,4);
              uStack_3c._0_3_ = 0x8a752e;
              uStack_3c._3_1_ = 0;
              FUN_00b2b8f8(local_88);
              *param_4 = 1;
              uVar9 = (local_14 & 0xffff) - 1;
              if (SBORROW4(local_14 & 0xffff,1)) {
                uStack_3c._0_3_ = 0x8a7542;
                uStack_3c._3_1_ = 0;
                uVar9 = thunk_FUN_004072dc();
              }
              uVar10 = *param_1;
              if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
                uStack_3c._0_3_ = 0x8a7555;
                uStack_3c._3_1_ = 0;
                uVar9 = thunk_FUN_004072dc();
                uVar10 = extraout_EDX_03;
              }
              *(undefined1 *)(uVar10 + 0x21 + uVar9 * 0x27) = 5;
            }
            uVar9 = (local_14 & 0xffff) - 1;
            if (SBORROW4(local_14 & 0xffff,1)) {
              local_2c = (double)CONCAT44(local_2c._4_4_,0x8a756b);
              uVar9 = thunk_FUN_004072dc();
            }
            uVar10 = *param_1;
            if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
              local_2c = (double)CONCAT44(local_2c._4_4_,0x8a757e);
              uVar9 = thunk_FUN_004072dc();
              uVar10 = extraout_EDX_04;
            }
            if (*(int *)(uVar10 + 0x1b + uVar9 * 0x27) < 1) {
              uVar9 = (local_14 & 0xffff) - 1;
              if (SBORROW4(local_14 & 0xffff,1)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a759a);
                uVar9 = thunk_FUN_004072dc();
              }
              uVar10 = *param_1;
              if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a75ad);
                uVar9 = thunk_FUN_004072dc();
                uVar10 = extraout_EDX_05;
              }
              if (*(int *)(uVar10 + 0x1b + uVar9 * 0x27) != -1) {
                local_2c._0_4_ = 0x8a75c5;
                FUN_009a9aa8(param_2,&local_98);
                local_2c._0_4_ = 0x8a75db;
                FUN_0040d7f4(&local_94,L"Negative priority in repetition history\r\n   ",local_98);
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a75e6);
                FUN_00b2b8f8(local_94);
                uVar9 = (local_14 & 0xffff) - 1;
                if (SBORROW4(local_14 & 0xffff,1)) {
                  local_2c = (double)CONCAT44(local_2c._4_4_,0x8a75f4);
                  uVar9 = thunk_FUN_004072dc();
                }
                uVar10 = *param_1;
                if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
                  local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7607);
                  uVar9 = thunk_FUN_004072dc();
                  uVar10 = extraout_EDX_06;
                }
                *(undefined4 *)(uVar10 + 0x1b + uVar9 * 0x27) = 1;
                *param_4 = 1;
              }
            }
            uVar9 = (local_14 & 0xffff) - 1;
            if (SBORROW4(local_14 & 0xffff,1)) {
              local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7626);
              uVar9 = thunk_FUN_004072dc();
            }
            uVar10 = *param_1;
            if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
              local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7639);
              uVar9 = thunk_FUN_004072dc();
              uVar10 = extraout_EDX_07;
            }
            if (*(int *)(*(int *)(*(int *)PTR_DAT_00ba9c04 + 0x72) + 5) <
                *(int *)(uVar10 + 0x1b + uVar9 * 0x27)) {
              uVar9 = (local_14 & 0xffff) - 1;
              if (SBORROW4(local_14 & 0xffff,1)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a765e);
                uVar9 = thunk_FUN_004072dc();
              }
              uVar10 = *param_1;
              if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7671);
                uVar9 = thunk_FUN_004072dc();
                uVar10 = extraout_EDX_08;
              }
              *(undefined4 *)(uVar10 + 0x1b + uVar9 * 0x27) =
                   *(undefined4 *)(*(int *)(*(int *)PTR_DAT_00ba9c04 + 0x72) + 5);
              *param_4 = 1;
            }
            uVar9 = (local_14 & 0xffff) - 1;
            if (SBORROW4(local_14 & 0xffff,1)) {
              local_2c = (double)CONCAT44(local_2c._4_4_,0x8a769a);
              uVar9 = thunk_FUN_004072dc();
            }
            uVar10 = *param_1;
            if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
              local_2c = (double)CONCAT44(local_2c._4_4_,0x8a76ad);
              uVar9 = thunk_FUN_004072dc();
              uVar10 = extraout_EDX_09;
            }
            if ((double)CONCAT44(pwVar22,local_24) < *(double *)(uVar10 + 10 + uVar9 * 0x27)) {
              uVar9 = (local_14 & 0xffff) - 1;
              fVar20 = fVar19;
              fVar3 = in_ST0;
              fVar4 = in_ST1;
              fVar5 = in_ST2;
              fVar6 = in_ST3;
              fVar21 = in_ST4;
              fVar7 = in_ST5;
              if (SBORROW4(local_14 & 0xffff,1)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a76cb);
                fVar21 = in_ST5;
                uVar9 = thunk_FUN_004072dc();
                fVar20 = fVar19;
                fVar3 = in_ST0;
                fVar4 = in_ST1;
                fVar5 = in_ST2;
                fVar6 = in_ST3;
                fVar21 = in_ST4;
                fVar7 = in_ST5;
                in_ST5 = fVar21;
              }
              in_ST4 = fVar7;
              in_ST3 = fVar21;
              in_ST2 = fVar6;
              in_ST1 = fVar5;
              in_ST0 = fVar4;
              fVar19 = fVar3;
              uVar10 = *param_1;
              if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a76de);
                uVar9 = thunk_FUN_004072dc();
                uVar10 = extraout_EDX_10;
              }
              local_24 = *(undefined1 **)(uVar10 + 10 + uVar9 * 0x27);
              pwVar22 = *(wchar_t **)(uVar10 + 0xe + uVar9 * 0x27);
              uVar9 = (local_14 & 0xffff) - 1;
              if (SBORROW4(local_14 & 0xffff,1)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a76fd);
                uVar9 = thunk_FUN_004072dc();
              }
              uVar10 = *param_1;
              if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7710);
                uVar9 = thunk_FUN_004072dc();
                uVar10 = extraout_EDX_11;
              }
              local_2c = (double)CONCAT44(local_2c._4_4_,0x8a771c);
              FUN_0040a340(uVar10 + 0x12 + uVar9 * 0x27);
              local_2c = (double)fVar20;
            }
            uVar9 = (local_14 & 0xffff) - 1;
            if (SBORROW4(local_14 & 0xffff,1)) {
              local_2c = (double)CONCAT44(local_2c._4_4_,0x8a772e);
              uVar9 = thunk_FUN_004072dc();
            }
            uVar10 = *param_1;
            if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
              local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7741);
              uVar9 = thunk_FUN_004072dc();
              uVar10 = extraout_EDX_12;
            }
            local_2c._0_4_ = 0x8a7753;
            cVar8 = FUN_008a4cd8(param_2,uVar10 + 0x18 + uVar9 * 0x27,local_14._3_1_);
            if (cVar8 != '\0') {
              *param_4 = 1;
            }
            uVar9 = (local_14 & 0xffff) - 1;
            if (SBORROW4(local_14 & 0xffff,1)) {
              local_2c._0_4_ = 0x8a776b;
              uVar9 = thunk_FUN_004072dc();
            }
            uVar10 = *param_1;
            if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
              local_2c._0_4_ = 0x8a777e;
              uVar9 = thunk_FUN_004072dc();
              uVar10 = extraout_EDX_13;
            }
            local_2c = (double)CONCAT44(local_2c._4_4_,0x8a778a);
            FUN_0040a340(uVar10 + 0x12 + uVar9 * 0x27);
            in_ST6 = in_ST5;
            if (fVar19 < _DAT_008a7d78) {
              local_2c._0_4_ = 0x8a77a6;
              FUN_009a9aa8(param_2,&local_a0);
              local_2c._0_4_ = 0x8a77bc;
              FUN_0040d7f4(&local_9c,L"Old style N/A hour setting (0 or -1)\r\n   ",local_a0);
              local_2c = (double)CONCAT44(local_2c._4_4_,0x8a77c7);
              FUN_00b2b8f8(local_9c);
              uVar9 = (local_14 & 0xffff) - 1;
              if (SBORROW4(local_14 & 0xffff,1)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a77d5);
                uVar9 = thunk_FUN_004072dc();
              }
              uVar10 = *param_1;
              if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a77e8);
                uVar9 = thunk_FUN_004072dc();
                uVar10 = extraout_EDX_14;
              }
              *(undefined4 *)(uVar10 + 0x12 + uVar9 * 0x27) = 0x88;
              *(undefined2 *)(uVar10 + 0x16 + uVar9 * 0x27) = 0x7f00;
              *param_4 = 1;
            }
            if (local_14._3_1_ == '\0') {
              uVar9 = (local_14 & 0xffff) - 1;
              if (SBORROW4(local_14 & 0xffff,1)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7818);
                uVar9 = thunk_FUN_004072dc();
              }
              uVar10 = *param_1;
              if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a782b);
                uVar9 = thunk_FUN_004072dc();
                uVar10 = extraout_EDX_15;
              }
              if ((*(short *)(uVar10 + 0x19 + uVar9 * 0x27) != -1) && (*PTR_DAT_00baadd4 != '\0')) {
                local_2c._0_4_ = 0x8a784e;
                FUN_009a9aa8(param_2,&local_a8);
                local_2c._0_4_ = 0x8a7864;
                FUN_0040d7f4(&local_a4,L"Setting non-item difficulty to indetermined\r\n   ",
                             local_a8);
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a786f);
                FUN_00b2e42c(local_a4);
                uVar9 = (local_14 & 0xffff) - 1;
                if (SBORROW4(local_14 & 0xffff,1)) {
                  local_2c = (double)CONCAT44(local_2c._4_4_,0x8a787d);
                  uVar9 = thunk_FUN_004072dc();
                }
                uVar10 = *param_1;
                if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
                  local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7890);
                  uVar9 = thunk_FUN_004072dc();
                  uVar10 = extraout_EDX_16;
                }
                *(undefined2 *)(uVar10 + 0x19 + uVar9 * 0x27) = 0xffff;
                *param_4 = 1;
              }
              uVar9 = (local_14 & 0xffff) - 1;
              if (SBORROW4(local_14 & 0xffff,1)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a78ae);
                uVar9 = thunk_FUN_004072dc();
              }
              uVar10 = *param_1;
              if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a78c1);
                uVar9 = thunk_FUN_004072dc();
                uVar10 = extraout_EDX_17;
              }
              if (*(short *)(uVar10 + 6 + uVar9 * 0x27) != 0) {
                local_2c = (double)CONCAT44(local_2c._4_4_,L"Non-item review with ");
                uVar9 = (local_14 & 0xffff) - 1;
                if (SBORROW4(local_14 & 0xffff,1)) {
                  uStack_30 = (undefined1 *)0x8a78e3;
                  uVar9 = thunk_FUN_004072dc();
                }
                uVar10 = *param_1;
                if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
                  uStack_30 = (undefined1 *)0x8a78f6;
                  uVar9 = thunk_FUN_004072dc();
                  uVar10 = extraout_EDX_18;
                }
                uStack_30 = (undefined1 *)0x8a7909;
                FUN_004282b0(*(undefined2 *)(uVar10 + 6 + uVar9 * 0x27),&local_b0);
                uStack_30 = local_b0;
                pwStack_34 = L" lapse(s)";
                local_38 = L"\r\n   ";
                uStack_3c._0_3_ = 0x8a7927;
                uStack_3c._3_1_ = 0;
                FUN_009a9aa8(param_2,&local_b4);
                local_2c = (double)CONCAT44(local_b4,(uint)local_2c);
                local_40 = 0x8a793d;
                FUN_0040d87c(&local_ac,5);
                local_40 = 0x8a7948;
                FUN_00b2b8f8(local_ac);
                uVar9 = (local_14 & 0xffff) - 1;
                if (SBORROW4(local_14 & 0xffff,1)) {
                  local_40 = 0x8a7956;
                  uVar9 = thunk_FUN_004072dc();
                }
                uVar10 = *param_1;
                if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
                  local_40 = 0x8a7969;
                  uVar9 = thunk_FUN_004072dc();
                  uVar10 = extraout_EDX_19;
                }
                *(undefined2 *)(uVar10 + 6 + uVar9 * 0x27) = 0;
                *param_4 = 1;
              }
            }
            local_48 = *param_1;
            if (local_48 != 0) {
              local_48 = *(uint *)(local_48 - 4);
            }
            if ((local_14 & 0xffff) == local_48) break;
            local_2c = (double)CONCAT44(local_2c._4_4_,0x8a79b0);
            cVar8 = FUN_0089ebe0(*param_1,local_14 & 0xffff,&stack0xffffffea);
            if (cVar8 != '\0') {
              local_2c = (double)CONCAT44(local_2c._4_4_,0x8a79c0);
              FUN_008aac10(param_1,CONCAT22(extraout_var_00,(short)((uint)unaff_EBX >> 0x10)));
              *param_4 = 1;
              local_4c = *param_1;
              if (local_4c != 0) {
                local_4c = *(uint *)(local_4c - 4);
              }
              if ((int)local_4c <= (int)(local_14 & 0xffff)) break;
            }
            local_2c = (double)CONCAT44(local_2c._4_4_,0x8a79fb);
            FUN_008a09a8(param_1,local_14 & 0xffff,&stack0xffffffe9);
            cVar8 = (char)((uint)unaff_EBX >> 8);
            if (cVar8 == '\x01') {
              uVar10 = local_14 & 0xffff;
              uVar9 = *param_1;
              if ((uVar9 == 0) || (*(uint *)(uVar9 - 4) <= uVar10)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7a5f);
                uVar10 = thunk_FUN_004072dc();
                uVar9 = extraout_EDX_21;
              }
              puVar15 = (undefined4 *)(uVar9 + uVar10 * 0x27);
              puVar16 = local_77;
              for (iVar12 = 9; iVar12 != 0; iVar12 = iVar12 + -1) {
                *puVar16 = *puVar15;
                puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
                puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
              }
              *(undefined2 *)puVar16 = *(undefined2 *)puVar15;
              *(undefined1 *)((int)puVar16 + (uint)bVar17 * -4 + 2) =
                   *(undefined1 *)((int)puVar15 + (uint)bVar17 * -4 + 2);
              uVar9 = (local_14 & 0xffff) - 1;
              if (SBORROW4(local_14 & 0xffff,1)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7a80);
                uVar9 = thunk_FUN_004072dc();
              }
              uVar10 = *param_1;
              if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7a93);
                uVar9 = thunk_FUN_004072dc();
                uVar10 = extraout_EDX_22;
              }
              iVar12 = uVar9 * 0x27;
              uVar13 = local_14 & 0xffff;
              uVar9 = *param_1;
              if ((uVar9 == 0) || (*(uint *)(uVar9 - 4) <= uVar13)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7aad);
                iVar12 = thunk_FUN_004072dc();
                uVar13 = extraout_ECX;
                uVar10 = extraout_EDX_23;
              }
              puVar15 = (undefined4 *)(uVar10 + iVar12);
              puVar16 = (undefined4 *)(uVar9 + uVar13 * 0x27);
              for (iVar14 = 9; iVar14 != 0; iVar14 = iVar14 + -1) {
                *puVar16 = *puVar15;
                puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
                puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
              }
              *(undefined2 *)puVar16 = *(undefined2 *)puVar15;
              *(undefined1 *)((int)puVar16 + (uint)bVar17 * -4 + 2) =
                   *(undefined1 *)((int)puVar15 + (uint)bVar17 * -4 + 2);
              uVar9 = (local_14 & 0xffff) - 1;
              if (SBORROW4(local_14 & 0xffff,1)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7ace);
                uVar9 = thunk_FUN_004072dc();
              }
              uVar10 = *param_1;
              if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7ae1);
                uVar9 = thunk_FUN_004072dc();
                uVar10 = extraout_EDX_24;
              }
              puVar15 = local_77;
              puVar16 = (undefined4 *)(uVar10 + uVar9 * 0x27);
              for (iVar12 = 9; iVar12 != 0; iVar12 = iVar12 + -1) {
                *puVar16 = *puVar15;
                puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
                puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
              }
              *(undefined2 *)puVar16 = *(undefined2 *)puVar15;
              *(undefined1 *)((int)puVar16 + (uint)bVar17 * -4 + 2) =
                   *(undefined1 *)((int)puVar15 + (uint)bVar17 * -4 + 2);
            }
            else if (cVar8 == '\x02') {
              local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7a1b);
              FUN_008aac10(param_1,CONCAT22(extraout_var_01,(ushort)local_14));
            }
            else if (cVar8 == '\x03') {
              uVar9 = (local_14 & 0xffff) + 1;
              if (SCARRY4(local_14 & 0xffff,1)) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7a2e);
                thunk_FUN_004072dc();
                uVar9 = extraout_EDX_20;
              }
              if (0xffff < uVar9) {
                local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7a3b);
                thunk_FUN_004072dc();
              }
              local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7a43);
              FUN_008aac10(param_1);
            }
            if (cVar8 != '\0') {
              local_14._0_3_ = (uint3)(ushort)local_14;
              *param_4 = 1;
              local_50 = *param_1;
              if (local_50 != 0) {
                local_50 = *(uint *)(local_50 - 4);
              }
              if ((int)local_50 <= (int)(uint)(uint3)local_14) break;
            }
          }
          else {
            local_2c = (double)CONCAT44(local_2c._4_4_,
                                        L"Wrong element in repetition history\r\n   Found: ");
            uVar9 = (local_14 & 0xffff) - 1;
            if (SBORROW4(local_14 & 0xffff,1)) {
              uStack_30 = (undefined1 *)0x8a73f9;
              uVar9 = thunk_FUN_004072dc();
            }
            uVar10 = *param_1;
            if ((uVar10 == 0) || (*(uint *)(uVar10 - 4) <= uVar9)) {
              uStack_30 = (undefined1 *)0x8a740c;
              uVar9 = thunk_FUN_004072dc();
              uVar10 = extraout_EDX_00;
            }
            uStack_30 = (undefined1 *)0x8a741a;
            FUN_009a9aa8(*(undefined4 *)(uVar10 + uVar9 * 0x27),&local_80);
            uStack_30 = local_80;
            pwStack_34 = L"\r\n   ";
            local_38 = L"Expected: ";
            uStack_3c._0_3_ = 0x8a7432;
            uStack_3c._3_1_ = 0;
            FUN_009a9aa8(param_2,&local_84);
            local_2c = (double)CONCAT44(local_84,(uint)local_2c);
            local_40 = 0x8a7442;
            FUN_0040d87c(&local_7c,5);
            local_40 = 0x8a744a;
            FUN_00b2b8f8(local_7c);
            local_40 = 0x8a7456;
            FUN_008aac10(param_1,CONCAT22(extraout_var,(ushort)local_14));
            local_14._0_3_ = (uint3)(ushort)local_14;
            *param_4 = 1;
            local_44 = *param_1;
            if (local_44 != 0) {
              local_44 = *(uint *)(local_44 - 4);
            }
            if ((int)local_44 <= (int)(uint)(uint3)local_14) break;
          }
          local_14 = CONCAT22(local_14._2_2_,(ushort)local_14 + 1);
          sVar1 = uStack_30._2_2_ + -1;
          uStack_30 = (undefined1 *)CONCAT22(sVar1,(undefined2)uStack_30);
        } while (sVar1 != 0);
      }
      bVar18 = SCARRY4(iVar11,1);
      iVar11 = iVar11 + 1;
      if (bVar18) {
        local_2c = (double)CONCAT44(local_2c._4_4_,0x8a7b3f);
        thunk_FUN_004072dc();
      }
    } while ((iVar11 < 0x15) && (local_14._2_1_ == '\0'));
    local_2c = (double)CONCAT44(local_2c._4_4_,pwVar22);
    uStack_30 = local_24;
    pwStack_34 = local_2c._4_4_;
    uStack_3c._0_3_ = 0x8a7b66;
    uStack_3c._3_1_ = 0;
    local_38 = pwVar22;
    cVar8 = FUN_008ab2dc(param_1,0);
    if (cVar8 != '\0') {
      *param_4 = 1;
    }
    *in_FS_OFFSET = (uint)local_38;
  }
  else {
    *in_FS_OFFSET = (uint)local_38;
  }
  puVar2 = local_24;
  *in_FS_OFFSET = (uint)local_2c;
  local_24 = &LAB_008a7c02;
  local_2c = (double)CONCAT44(0x8a7bfa,(uint)local_2c);
  FUN_0040c628(local_bc,0x11,puVar2);
  return;
}



// === FUN_008a8878 @ 008a8878 size:1218 ===

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008a8878(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined2 extraout_var;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  float10 in_ST0;
  float10 fVar8;
  float10 in_ST1;
  float10 in_ST2;
  float10 fVar9;
  float10 in_ST3;
  float10 fVar10;
  float10 in_ST4;
  float10 fVar11;
  float10 in_ST5;
  float10 fVar12;
  float10 in_ST6;
  float10 fVar13;
  float10 in_ST7;
  float10 fVar14;
  undefined *puVar15;
  int in_stack_ffffff80;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined4 local_50;
  double local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c [2];
  double local_34;
  double local_2c;
  int local_20 [5];
  undefined4 *local_c;
  int local_8;
  
  local_50 = 0;
  local_40 = 0;
  local_44 = 0;
  local_3c[0] = 0;
  local_20[4] = 0;
  local_20[3] = 0;
  local_20[2] = 0;
  local_20[1] = 0;
  puStack_60 = (undefined1 *)0x8a88a9;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040c6ac(param_1);
  puStack_64 = &LAB_008a8d92;
  uStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_68;
  puStack_6c = (undefined1 *)0x8a88bf;
  puStack_60 = &stack0xfffffffc;
  FUN_008a36b8(local_c);
  *(undefined4 *)((int)local_c + 0x12) = 0x88;
  *(undefined2 *)((int)local_c + 0x16) = 0x7f00;
  *(undefined4 *)((int)local_c + 0x1b) = 0xffffffff;
  *(undefined1 *)(local_c + 6) = 0xb;
  *(undefined1 *)((int)local_c + 0x26) = 0xff;
  puStack_70 = &LAB_008a8d02;
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  puStack_6c = &stack0xfffffffc;
  FUN_0040c9f0(local_20 + 3,L"none");
  FUN_0040c9f0(local_20 + 2,L"none");
  do {
    FUN_00b262d0(&local_8,0x20,local_20 + 2);
    FUN_00b262d0(local_20 + 2,CONCAT22(extraout_var,0x3d),local_20 + 3);
    uVar7 = local_20[3] == 0;
    if ((bool)uVar7) {
      *in_FS_OFFSET = uStack_74;
      goto LAB_008a8d5a;
    }
    FUN_00b2308c(local_20[3],local_3c);
    FUN_0040c9f0(local_20 + 3,local_3c[0]);
    FUN_0040d98c(local_20[3],&DAT_008a8dc4);
    if ((bool)uVar7) {
      uVar3 = FUN_00428648(local_20[2]);
      if (0xffff < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      *(short *)(local_c + 1) = (short)uVar3;
      fVar8 = in_ST1;
      fVar9 = in_ST2;
      fVar10 = in_ST3;
      fVar11 = in_ST4;
      fVar12 = in_ST5;
      fVar13 = in_ST6;
    }
    else {
      FUN_0040d98c(local_20[3],L"Date");
      if ((bool)uVar7) {
        FUN_0040c9f0(local_20 + 4,local_20[2]);
        fVar8 = in_ST1;
        fVar9 = in_ST2;
        fVar10 = in_ST3;
        fVar11 = in_ST4;
        fVar12 = in_ST5;
        fVar13 = in_ST6;
      }
      else {
        FUN_0040d98c(local_20[3],L"Hour");
        if ((bool)uVar7) {
          FUN_0040a130(local_20[2],local_20);
          local_2c = (double)in_ST0;
          in_ST0 = in_ST1;
          fVar8 = in_ST2;
          fVar9 = in_ST3;
          fVar10 = in_ST4;
          fVar11 = in_ST5;
          fVar12 = in_ST6;
          fVar13 = in_ST7;
          if (local_20[0] == 0) {
            in_ST0 = (float10)local_2c;
            FUN_0040a370((int)local_c + 0x12);
            fVar8 = in_ST1;
            fVar9 = in_ST2;
            fVar10 = in_ST3;
            fVar11 = in_ST4;
            fVar12 = in_ST5;
            fVar13 = in_ST6;
          }
        }
        else {
          FUN_0040d98c(local_20[3],&DAT_008a8e08);
          if ((bool)uVar7) {
            uVar3 = FUN_00428648(local_20[2]);
            if (0xffff < uVar3) {
              uVar3 = thunk_FUN_004072dc();
            }
            *(short *)(local_c + 2) = (short)uVar3;
            fVar8 = in_ST1;
            fVar9 = in_ST2;
            fVar10 = in_ST3;
            fVar11 = in_ST4;
            fVar12 = in_ST5;
            fVar13 = in_ST6;
          }
          else {
            FUN_0040d98c(local_20[3],L"Grade");
            if ((bool)uVar7) {
              uVar7 = FUN_00409148(local_20[2],local_20);
              *(undefined1 *)(local_c + 6) = uVar7;
              fVar8 = in_ST1;
              fVar9 = in_ST2;
              fVar10 = in_ST3;
              fVar11 = in_ST4;
              fVar12 = in_ST5;
              fVar13 = in_ST6;
              if (local_20[0] != 0) {
                *(undefined1 *)(local_c + 6) = 0xb;
              }
            }
            else {
              FUN_0040d98c(local_20[3],L"Laps");
              if ((bool)uVar7) {
                uVar3 = FUN_00428648(local_20[2]);
                if (0xffff < uVar3) {
                  uVar3 = thunk_FUN_004072dc();
                }
                *(short *)((int)local_c + 6) = (short)uVar3;
                fVar8 = in_ST1;
                fVar9 = in_ST2;
                fVar10 = in_ST3;
                fVar11 = in_ST4;
                fVar12 = in_ST5;
                fVar13 = in_ST6;
              }
              else {
                FUN_0040d98c(local_20[3],L"Elno");
                if ((bool)uVar7) {
                  uVar4 = FUN_00428648(local_20[2]);
                  *local_c = uVar4;
                  fVar8 = in_ST1;
                  fVar9 = in_ST2;
                  fVar10 = in_ST3;
                  fVar11 = in_ST4;
                  fVar12 = in_ST5;
                  fVar13 = in_ST6;
                }
                else {
                  FUN_0040d98c(local_20[3],L"Postpones");
                  if ((bool)uVar7) {
                    uVar3 = FUN_00428648(local_20[2]);
                    if (0xffff < uVar3) {
                      uVar3 = thunk_FUN_004072dc();
                    }
                    *(short *)((int)local_c + 0x1f) = (short)uVar3;
                    fVar8 = in_ST1;
                    fVar9 = in_ST2;
                    fVar10 = in_ST3;
                    fVar11 = in_ST4;
                    fVar12 = in_ST5;
                    fVar13 = in_ST6;
                  }
                  else {
                    FUN_0040d98c(local_20[3],L"Difficulty");
                    if ((bool)uVar7) {
                      FUN_0040a130(local_20[2],local_20);
                      local_34 = (double)in_ST0;
                      in_ST0 = in_ST1;
                      fVar8 = in_ST2;
                      fVar9 = in_ST3;
                      fVar10 = in_ST4;
                      fVar11 = in_ST5;
                      fVar12 = in_ST6;
                      fVar13 = in_ST7;
                      if (local_20[0] == 0) {
                        if (1.0 < local_34) {
                          local_34 = 1.0;
                        }
                        if (local_34 < 0.0) {
                          local_34 = 0.0;
                        }
                        in_ST0 = (float10)local_34 * (float10)_DAT_008a8e9c;
                        uVar3 = FUN_00407bcc();
                        uVar5 = uVar3 + 0x8000;
                        if (extraout_EDX + (uint)(0xffff7fff < uVar3) != 0 || 0xffff < uVar5) {
                          uVar5 = thunk_FUN_004072dc();
                        }
                        *(short *)((int)local_c + 0x19) = (short)uVar5 + -0x8000;
                        fVar8 = in_ST1;
                        fVar9 = in_ST2;
                        fVar10 = in_ST3;
                        fVar11 = in_ST4;
                        fVar12 = in_ST5;
                        fVar13 = in_ST6;
                      }
                    }
                    else {
                      FUN_0040d98c(local_20[3],L"Expfi");
                      if ((bool)uVar7) {
                        FUN_0040a130(local_20[2],local_20);
                        local_34 = (double)in_ST0;
                        in_ST0 = in_ST1;
                        fVar8 = in_ST2;
                        fVar9 = in_ST3;
                        fVar10 = in_ST4;
                        fVar11 = in_ST5;
                        fVar12 = in_ST6;
                        fVar13 = in_ST7;
                        if (local_20[0] == 0) {
                          in_ST0 = (float10)local_34;
                          uVar3 = FUN_00407bcc();
                          uVar5 = uVar3 + 0x80;
                          if (extraout_EDX_00 + (uint)(0xffffff7f < uVar3) != 0 || 0xff < uVar5) {
                            uVar5 = thunk_FUN_004072dc();
                          }
                          *(char *)((int)local_c + 0x26) = (char)uVar5 + -0x80;
                          fVar8 = in_ST1;
                          fVar9 = in_ST2;
                          fVar10 = in_ST3;
                          fVar11 = in_ST4;
                          fVar12 = in_ST5;
                          fVar13 = in_ST6;
                        }
                      }
                      else {
                        FUN_0040d98c(local_20[3],L"Priority");
                        if ((bool)uVar7) {
                          FUN_0040a130(local_20[2],local_20);
                          local_34 = (double)in_ST0;
                          in_ST0 = in_ST1;
                          fVar14 = in_ST7;
                          if ((double)_DAT_008a8ed8 < local_34) {
                            if (*(int *)PTR_DAT_00baa8f8 != 0) {
                              pwVar17 = L"Element priority is ";
                              pwVar16 = L"\r\n   ";
                              puVar15 = &DAT_008a8f38;
                              iVar6 = local_20[2];
                              FUN_009a9aa8(*local_c,&local_44);
                              uVar4 = local_44;
                              FUN_0040d87c(&local_40,5);
                              FUN_00b29da4(*(undefined4 *)PTR_DAT_00baa8f8,local_40,1,uVar4,puVar15,
                                           pwVar16,iVar6,pwVar17);
                            }
                            local_34 = 100.0;
                            in_ST0 = in_ST1;
                          }
                          in_stack_ffffff80 = 0x8a8c36;
                          uVar4 = FUN_00893b3c();
                          *(undefined4 *)((int)local_c + 0x1b) = uVar4;
                          fVar8 = in_ST2;
                          fVar9 = in_ST3;
                          fVar10 = in_ST4;
                          fVar11 = in_ST5;
                          fVar12 = in_ST6;
                          fVar13 = in_ST7;
                          in_ST7 = fVar14;
                        }
                        else {
                          uVar2 = FUN_00409148(local_20[3],local_20);
                          *(undefined2 *)(local_c + 2) = uVar2;
                          fVar8 = in_ST1;
                          fVar9 = in_ST2;
                          fVar10 = in_ST3;
                          fVar11 = in_ST4;
                          fVar12 = in_ST5;
                          fVar13 = in_ST6;
                          if (local_20[0] != 0) {
                            FUN_0040d9c4(local_8,1,8,local_20 + 2);
                            in_stack_ffffff80 = local_20[2];
                            FUN_0040d87c(local_20 + 3,3);
                            iVar6 = FUN_0095e280(*(undefined4 *)PTR_DAT_00ba9c04,local_20[3]);
                            fVar8 = in_ST1;
                            fVar9 = in_ST2;
                            fVar10 = in_ST3;
                            fVar11 = in_ST4;
                            fVar12 = in_ST5;
                            fVar13 = in_ST6;
                            if (iVar6 != 0) {
                              FUN_0040c9f0(local_20 + 4,local_20[3]);
                              FUN_00b26098(local_20[4],local_20 + 1);
                              *(double *)((int)local_c + 10) = (double)in_ST0;
                              *in_FS_OFFSET = in_stack_ffffff80;
                              goto LAB_008a8d5a;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    in_ST1 = fVar8;
    in_ST2 = fVar9;
    in_ST3 = fVar10;
    in_ST4 = fVar11;
    in_ST5 = fVar12;
    in_ST6 = fVar13;
  } while (local_8 != 0);
  if (local_20[4] != 0) {
    FUN_0040a340((int)local_c + 0x12);
    local_4c = (double)in_ST0;
    in_stack_ffffff80 = 0x8a8cf1;
    FUN_0089fb38(local_20[4]);
    *(double *)((int)local_c + 10) = (double)fVar8;
  }
  *in_FS_OFFSET = in_stack_ffffff80;
LAB_008a8d5a:
  puVar1 = puStack_6c;
  *in_FS_OFFSET = uStack_74;
  puStack_6c = &LAB_008a8d99;
  puStack_70 = (undefined1 *)0x8a8d6f;
  FUN_0040c5c8(&local_50,uStack_74,puVar1);
  puStack_70 = (undefined1 *)0x8a8d7c;
  FUN_0040c628(&local_44,3);
  puStack_70 = (undefined1 *)0x8a8d89;
  FUN_0040c628(local_20 + 1,4);
  puStack_70 = (undefined1 *)0x8a8d91;
  FUN_0040c5c8(&local_8);
  return;
}



// === FUN_008a9428 @ 008a9428 size:1368 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008a9428(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar8;
  int extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  int extraout_EDX_10;
  uint extraout_EDX_11;
  uint extraout_EDX_12;
  int extraout_EDX_13;
  int extraout_EDX_14;
  uint extraout_EDX_15;
  uint extraout_EDX_16;
  int extraout_EDX_17;
  int extraout_EDX_18;
  int extraout_EDX_19;
  int extraout_EDX_20;
  int extraout_EDX_21;
  int extraout_EDX_22;
  int extraout_EDX_23;
  int extraout_EDX_24;
  int extraout_EDX_25;
  int extraout_EDX_26;
  int extraout_EDX_27;
  int extraout_EDX_28;
  int extraout_EDX_29;
  int extraout_EDX_30;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar9;
  float10 fVar10;
  float10 in_ST1;
  float10 fVar11;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 fVar12;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar13;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_20;
  int local_18;
  uint local_14;
  int local_10;
  undefined4 local_c;
  
  puStack_34 = &stack0xfffffffc;
  puStack_38 = &LAB_008a9979;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_c = 0;
  local_20 = *param_1;
  if (local_20 != 0) {
    local_20 = *(int *)(local_20 + -4);
  }
  if (0 < local_20) {
    local_18 = local_20;
    local_10 = 1;
    do {
      uVar5 = local_10 - 1;
      fVar9 = in_ST0;
      fVar10 = in_ST1;
      fVar12 = in_ST2;
      fVar2 = in_ST3;
      fVar3 = in_ST4;
      if (SBORROW4(local_10,1)) {
        uVar5 = thunk_FUN_004072dc();
        fVar9 = in_ST0;
        fVar10 = in_ST1;
        fVar12 = in_ST2;
        fVar2 = in_ST3;
        fVar3 = in_ST4;
      }
      in_ST4 = in_ST5;
      in_ST3 = fVar3;
      in_ST2 = fVar2;
      in_ST1 = fVar12;
      in_ST0 = fVar10;
      iVar8 = *param_1;
      if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
        uVar5 = thunk_FUN_004072dc();
        iVar8 = extraout_EDX;
      }
      if (*(int *)(iVar8 + uVar5 * 0x27) == 0) {
        uVar5 = local_10 - 1;
        if (SBORROW4(local_10,1)) {
          uVar5 = thunk_FUN_004072dc();
        }
        iVar8 = *param_1;
        if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
          uVar5 = thunk_FUN_004072dc();
          iVar8 = extraout_EDX_00;
        }
        *(undefined4 *)(iVar8 + uVar5 * 0x27) = local_c;
      }
      else {
        uVar5 = local_10 - 1;
        if (SBORROW4(local_10,1)) {
          uVar5 = thunk_FUN_004072dc();
        }
        iVar8 = *param_1;
        if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
          uVar5 = thunk_FUN_004072dc();
          iVar8 = extraout_EDX_01;
        }
        local_c = *(undefined4 *)(iVar8 + uVar5 * 0x27);
      }
      uVar5 = local_10 - 1;
      if (SBORROW4(local_10,1)) {
        uVar5 = thunk_FUN_004072dc();
      }
      iVar8 = *param_1;
      if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
        uVar5 = thunk_FUN_004072dc();
        iVar8 = extraout_EDX_02;
      }
      if (*(char *)(iVar8 + 0x18 + uVar5 * 0x27) == '\v') {
        uVar5 = local_10 - 1;
        if (SBORROW4(local_10,1)) {
          uVar5 = thunk_FUN_004072dc();
        }
        iVar8 = *param_1;
        if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
          uVar5 = thunk_FUN_004072dc();
          iVar8 = extraout_EDX_03;
        }
        *(undefined1 *)(iVar8 + 0x18 + uVar5 * 0x27) = 3;
      }
      uVar5 = local_10 - 1;
      if (SBORROW4(local_10,1)) {
        uVar5 = thunk_FUN_004072dc();
      }
      iVar8 = *param_1;
      if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
        uVar5 = thunk_FUN_004072dc();
        iVar8 = extraout_EDX_04;
      }
      if (*(short *)(iVar8 + 4 + uVar5 * 0x27) == 0) {
        if (local_10 != 1) {
          uVar5 = local_10 - 1;
          if (SBORROW4(local_10,1)) {
            uVar5 = thunk_FUN_004072dc();
          }
          iVar8 = *param_1;
          if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
            uVar5 = thunk_FUN_004072dc();
            iVar8 = extraout_EDX_05;
          }
          uVar5 = FUN_008a71ec(CONCAT31((int3)(uVar5 * 0x27 >> 8),
                                        *(undefined1 *)(iVar8 + 0x18 + uVar5 * 0x27)));
          if ((uVar5 & 1) == 0) {
            uVar5 = local_10 - 2;
            if (SBORROW4(local_10,2)) {
              uVar5 = thunk_FUN_004072dc();
            }
            iVar8 = *param_1;
            if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
              uVar5 = thunk_FUN_004072dc();
              iVar8 = extraout_EDX_07;
            }
            uVar5 = (uint)*(ushort *)(iVar8 + 4 + uVar5 * 0x27);
            uVar6 = uVar5 + 1;
            if (SCARRY4(uVar5,1)) {
              uVar6 = thunk_FUN_004072dc();
            }
            if (0xffff < uVar6) {
              uVar6 = thunk_FUN_004072dc();
            }
            uVar4 = (undefined2)uVar6;
            uVar5 = local_10 - 1;
            if (SBORROW4(local_10,1)) {
              uVar4 = thunk_FUN_004072dc();
              uVar5 = extraout_EDX_08;
            }
            iVar8 = *param_1;
            if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
              uVar4 = thunk_FUN_004072dc();
              iVar8 = extraout_ECX;
              uVar5 = extraout_EDX_09;
            }
            *(undefined2 *)(iVar8 + 4 + uVar5 * 0x27) = uVar4;
            uVar5 = local_10 - 2;
            if (SBORROW4(local_10,2)) {
              uVar5 = thunk_FUN_004072dc();
            }
            iVar8 = *param_1;
            if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
              uVar5 = thunk_FUN_004072dc();
              iVar8 = extraout_EDX_10;
            }
            uVar4 = *(undefined2 *)(iVar8 + 6 + uVar5 * 0x27);
            uVar5 = local_10 - 1;
            if (SBORROW4(local_10,1)) {
              uVar4 = thunk_FUN_004072dc();
              uVar5 = extraout_EDX_11;
            }
            iVar8 = *param_1;
            if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
              uVar4 = thunk_FUN_004072dc();
              iVar8 = extraout_ECX_00;
              uVar5 = extraout_EDX_12;
            }
            *(undefined2 *)(iVar8 + 6 + uVar5 * 0x27) = uVar4;
            goto LAB_008a968e;
          }
        }
        uVar5 = local_10 - 1;
        if (SBORROW4(local_10,1)) {
          uVar5 = thunk_FUN_004072dc();
        }
        iVar8 = *param_1;
        if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
          uVar5 = thunk_FUN_004072dc();
          iVar8 = extraout_EDX_06;
        }
        *(undefined2 *)(iVar8 + 4 + uVar5 * 0x27) = 1;
      }
LAB_008a968e:
      if (1 < local_10) {
        uVar5 = local_10 - 1;
        if (SBORROW4(local_10,1)) {
          uVar5 = thunk_FUN_004072dc();
        }
        iVar8 = *param_1;
        if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
          uVar5 = thunk_FUN_004072dc();
          iVar8 = extraout_EDX_13;
        }
        uVar5 = FUN_008a71ec(CONCAT31((int3)(uVar5 * 0x27 >> 8),
                                      *(undefined1 *)(iVar8 + 0x18 + uVar5 * 0x27)));
        if ((uVar5 & 1) != 0) {
          uVar5 = local_10 - 2;
          if (SBORROW4(local_10,2)) {
            uVar5 = thunk_FUN_004072dc();
          }
          iVar8 = *param_1;
          if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
            uVar5 = thunk_FUN_004072dc();
            iVar8 = extraout_EDX_14;
          }
          uVar5 = (uint)*(ushort *)(iVar8 + 6 + uVar5 * 0x27);
          uVar6 = uVar5 + 1;
          if (SCARRY4(uVar5,1)) {
            uVar6 = thunk_FUN_004072dc();
          }
          if (0xffff < uVar6) {
            uVar6 = thunk_FUN_004072dc();
          }
          uVar4 = (undefined2)uVar6;
          uVar5 = local_10 - 1;
          if (SBORROW4(local_10,1)) {
            uVar4 = thunk_FUN_004072dc();
            uVar5 = extraout_EDX_15;
          }
          iVar8 = *param_1;
          if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
            uVar4 = thunk_FUN_004072dc();
            iVar8 = extraout_ECX_01;
            uVar5 = extraout_EDX_16;
          }
          *(undefined2 *)(iVar8 + 6 + uVar5 * 0x27) = uVar4;
          uVar5 = local_10 - 1;
          if (SBORROW4(local_10,1)) {
            uVar5 = thunk_FUN_004072dc();
          }
          iVar8 = *param_1;
          if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
            uVar5 = thunk_FUN_004072dc();
            iVar8 = extraout_EDX_17;
          }
          *(undefined2 *)(iVar8 + 4 + uVar5 * 0x27) = 1;
        }
      }
      uVar5 = local_10 - 1;
      if (SBORROW4(local_10,1)) {
        uVar5 = thunk_FUN_004072dc();
      }
      iVar8 = *param_1;
      if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
        uVar5 = thunk_FUN_004072dc();
        iVar8 = extraout_EDX_18;
      }
      in_ST5 = in_ST6;
      if ((*(double *)(iVar8 + 10 + uVar5 * 0x27) < 1.0) && (1 < local_10)) {
        uVar5 = local_10 - 1;
        if (SBORROW4(local_10,1)) {
          uVar5 = thunk_FUN_004072dc();
        }
        iVar8 = *param_1;
        if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
          uVar5 = thunk_FUN_004072dc();
          iVar8 = extraout_EDX_19;
        }
        fVar10 = (float10)*(ushort *)(iVar8 + 8 + uVar5 * 0x27);
        uVar5 = local_10 - 2;
        in_ST5 = in_ST6;
        if (SBORROW4(local_10,2)) {
          uVar5 = thunk_FUN_004072dc();
          in_ST5 = in_ST6;
        }
        iVar8 = *param_1;
        if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
          uVar5 = thunk_FUN_004072dc();
          iVar8 = extraout_EDX_20;
        }
        fVar10 = fVar10 + (float10)*(double *)(iVar8 + 10 + uVar5 * 0x27);
        uVar5 = local_10 - 1;
        if (SBORROW4(local_10,1)) {
          uVar5 = thunk_FUN_004072dc();
        }
        iVar8 = *param_1;
        if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
          uVar5 = thunk_FUN_004072dc();
          iVar8 = extraout_EDX_21;
        }
        *(double *)(iVar8 + 10 + uVar5 * 0x27) = (double)fVar10;
      }
      in_ST6 = in_ST5;
      FUN_0042c3e8();
      uVar5 = local_10 - 1;
      if (SBORROW4(local_10,1)) {
        uVar5 = thunk_FUN_004072dc();
      }
      iVar8 = *param_1;
      if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
        uVar5 = thunk_FUN_004072dc();
        iVar8 = extraout_EDX_22;
      }
      if (fVar9 <= (float10)*(double *)(iVar8 + 10 + uVar5 * 0x27)) {
        FUN_00b2b8f8(L"Repetitions could not have been made into the future");
        FUN_0042c3e8();
        fVar11 = in_ST0 - _DAT_008a9a20;
        uVar5 = local_10 - 1;
        in_ST0 = in_ST1;
        fVar9 = in_ST2;
        fVar10 = in_ST3;
        fVar12 = in_ST4;
        fVar2 = in_ST5;
        fVar3 = in_ST6;
        if (SBORROW4(local_10,1)) {
          fVar13 = in_ST6;
          uVar5 = thunk_FUN_004072dc();
          in_ST0 = in_ST1;
          fVar9 = in_ST2;
          fVar10 = in_ST3;
          fVar12 = in_ST4;
          fVar2 = in_ST5;
          fVar3 = in_ST6;
          in_ST6 = fVar13;
        }
        in_ST5 = fVar3;
        in_ST4 = fVar2;
        in_ST3 = fVar12;
        in_ST2 = fVar10;
        in_ST1 = fVar9;
        iVar8 = *param_1;
        if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
          uVar5 = thunk_FUN_004072dc();
          iVar8 = extraout_EDX_23;
        }
        *(double *)(iVar8 + 10 + uVar5 * 0x27) = (double)fVar11;
      }
      uVar5 = local_10 - 1;
      if (SBORROW4(local_10,1)) {
        uVar5 = thunk_FUN_004072dc();
      }
      iVar8 = *param_1;
      if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
        uVar5 = thunk_FUN_004072dc();
        iVar8 = extraout_EDX_24;
      }
      if ((*(short *)(iVar8 + 8 + uVar5 * 0x27) == 0) && (1 < local_10)) {
        uVar5 = local_10 - 1;
        fVar9 = in_ST0;
        fVar10 = in_ST2;
        fVar12 = in_ST4;
        if (SBORROW4(local_10,1)) {
          uVar5 = thunk_FUN_004072dc();
          fVar9 = in_ST0;
          fVar10 = in_ST2;
          fVar12 = in_ST4;
        }
        iVar8 = *param_1;
        if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
          uVar5 = thunk_FUN_004072dc();
          iVar8 = extraout_EDX_25;
        }
        iVar7 = uVar5 * 0x27;
        uVar5 = local_10 - 2;
        if (SBORROW4(local_10,2)) {
          iVar7 = thunk_FUN_004072dc();
          uVar5 = extraout_ECX_02;
          iVar8 = extraout_EDX_26;
        }
        iVar1 = *param_1;
        if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= uVar5)) {
          iVar7 = thunk_FUN_004072dc();
          uVar5 = extraout_ECX_03;
          iVar8 = extraout_EDX_27;
        }
        in_ST0 = (float10)*(double *)(iVar8 + 10 + iVar7) -
                 (float10)*(double *)(iVar1 + 10 + uVar5 * 0x27);
        in_ST2 = in_ST1;
        in_ST4 = in_ST3;
        in_ST6 = in_ST5;
        local_14 = FUN_00407bcc();
        in_ST1 = fVar9;
        in_ST3 = fVar10;
        in_ST5 = fVar12;
        if ((int)local_14 >> 0x1f != extraout_EDX_28) {
          local_14 = thunk_FUN_004072dc();
          in_ST1 = fVar9;
          in_ST3 = fVar10;
          in_ST5 = fVar12;
        }
        if ((int)local_14 < 0) {
          local_14 = 0;
        }
        uVar5 = local_10 - 1;
        if (SBORROW4(local_10,1)) {
          uVar5 = thunk_FUN_004072dc();
        }
        iVar8 = *param_1;
        if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar5)) {
          uVar5 = thunk_FUN_004072dc();
          iVar8 = extraout_EDX_29;
        }
        iVar7 = uVar5 * 0x27;
        if (0xffff < local_14) {
          iVar7 = thunk_FUN_004072dc();
          local_14 = extraout_ECX_04;
          iVar8 = extraout_EDX_30;
        }
        *(short *)(iVar8 + 8 + iVar7) = (short)local_14;
      }
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  *in_FS_OFFSET = uStack_3c;
  return;
}



// === FUN_008a9a9c @ 008a9a9c size:705 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008a9a9c(undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uStack_108;
  undefined1 *puStack_104;
  undefined1 *puStack_100;
  undefined4 local_fc;
  undefined1 *puStack_f8;
  undefined1 *puStack_f4;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc [30];
  undefined1 local_43 [4];
  short local_3f;
  char local_22;
  int local_21;
  undefined1 local_18;
  undefined1 local_17;
  ushort local_16;
  int local_14;
  char *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar6 = 0;
  puStack_f4 = &stack0xfffffffc;
  local_e0 = 0;
  local_e4 = 0;
  local_d8 = 0;
  local_dc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d0 = 0;
  local_d4 = 0;
  local_c0 = 0;
  local_c4 = 0;
  puStack_f8 = &LAB_008a9da8;
  local_fc = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_fc;
  puStack_100 = (undefined1 *)0x8a9b05;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_0089e5e4(&local_18);
  puStack_104 = &LAB_008a9d3f;
  uStack_108 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_108;
  puStack_100 = &stack0xfffffffc;
  FUN_0040f468(local_c,PTR_DAT_0089b2f8);
  FUN_0094da18(*(undefined4 *)PTR_DAT_00ba9c04,local_8,local_bc);
  puVar4 = local_bc;
  pcVar5 = local_10;
  for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
  }
  *(undefined2 *)pcVar5 = *(undefined2 *)puVar4;
  local_17 = *local_10 == '\x01';
  local_14 = *(int *)(local_10 + 0x28);
  local_16 = 0;
  FUN_00408318(&DAT_00ca42e8);
  iVar2 = FUN_004072f4();
  if (iVar2 < local_14) {
    if ((*PTR_DAT_00baa2d0 == '\0') && (*(int *)PTR_DAT_00baa8f8 != 0)) {
      FUN_009a9aa8(local_8,&local_c4);
      FUN_0040d7f4(&local_c0,L"Records beyond the end of the repetitition history file at ",local_c4
                  );
      FUN_00b29da4(*(undefined4 *)PTR_DAT_00baa8f8,local_c0,1);
    }
    iVar2 = 0;
    local_14 = 0;
  }
  do {
    if ((local_14 < 1) || (999 < local_16)) {
      FUN_008a3804(local_c,local_8,local_10);
      FUN_0089e09c(local_18);
      *in_FS_OFFSET = uStack_108;
LAB_008a9d8a:
      puVar1 = puStack_f4;
      *in_FS_OFFSET = local_fc;
      puStack_f4 = &LAB_008a9daf;
      puStack_f8 = (undefined1 *)0x8a9da7;
      FUN_0040c628(&local_e4,10,puVar1);
      return;
    }
    if (SBORROW4(local_14,1)) {
      thunk_FUN_004072dc(iVar2,local_14 + -1);
    }
    FUN_00409060(&DAT_00ca42e8);
    FUN_004072f4();
    FUN_00408400(&DAT_00ca42e8,local_43);
    FUN_004072f4();
    local_14 = local_21;
    FUN_00408318(&DAT_00ca42e8);
    uVar8 = 0x8a9c12;
    iVar2 = FUN_004072f4();
    if (iVar2 < local_14) {
      FUN_009a9aa8(local_8,&local_cc);
      FUN_004282b0(local_14,&local_d0);
      FUN_00408318(&DAT_00ca42e8);
      uVar8 = FUN_004072f4();
      FUN_004282b0(uVar8,&local_d4);
      uVar8 = local_d4;
      FUN_0040d87c(&local_c8,8);
      FUN_00b2b8f8(local_c8);
      *in_FS_OFFSET = uVar8;
      goto LAB_008a9d8a;
    }
    if (local_3f != 0) {
      if (local_22 == '\x04') {
        FUN_009a9aa8(local_8,&local_dc);
        FUN_0040d7f4(&local_d8,L"Stripping upgrade guesswork from repetition history\r\n",local_dc);
        iVar2 = FUN_00b2b8f8(local_d8);
      }
      else {
        bVar7 = SCARRY4(_DAT_00ca42cc,1);
        _DAT_00ca42cc = _DAT_00ca42cc + 1;
        uVar3 = extraout_var;
        if (bVar7) {
          uVar8 = 0x8a9cf0;
          thunk_FUN_004072dc();
          uVar3 = extraout_var_00;
        }
        bVar7 = local_16 == 0xffff;
        local_16 = local_16 + 1;
        if (bVar7) {
          uVar8 = 0x8a9cfc;
          thunk_FUN_004072dc();
          uVar3 = extraout_var_01;
        }
        uStack_108 = 0;
        iVar2 = FUN_008a810c(local_c,CONCAT22(uVar3,1),local_43,uVar8);
      }
    }
  } while( true );
}



// === FUN_008aac74 @ 008aac74 size:499 ===

void FUN_008aac74(undefined4 param_1)

{
  wchar_t *pwVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *in_FS_OFFSET;
  byte bVar7;
  undefined *puVar8;
  wchar_t *pwStack_6c;
  wchar_t *local_68;
  wchar_t *pwStack_64;
  wchar_t *local_60;
  wchar_t *local_5c;
  wchar_t *local_58;
  wchar_t *local_54;
  wchar_t *local_50;
  wchar_t *local_4c;
  undefined *local_48;
  undefined1 auStack_44 [4];
  undefined1 uStack_40;
  undefined2 local_3f;
  undefined1 local_3d;
  undefined1 uStack_3c;
  undefined2 local_3b;
  undefined1 local_39;
  undefined3 uStack_38;
  undefined4 local_35;
  undefined1 uStack_31;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iVar9;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  bVar7 = 0;
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  local_10 = 0xc;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  puStack_24 = &LAB_008aaea6;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  puStack_30 = &LAB_008aae36;
  iVar9 = *in_FS_OFFSET;
  uStack_31 = (undefined1)((uint)iVar9 >> 0x18);
  *in_FS_OFFSET = (int)&local_35 + 1;
  _local_39 = CONCAT31(0x8aacb1,local_39);
  local_35 = iVar9 << 8;
  local_8 = param_1;
  FUN_008aa01c(param_1,&local_c);
  if (local_c == 0) {
    *in_FS_OFFSET = CONCAT13(uStack_31,local_35._1_3_);
  }
  else {
    iVar9 = local_c;
    if (local_c != 0) {
      iVar9 = *(int *)(local_c + -4);
    }
    uVar2 = iVar9 - 1;
    if (SBORROW4(iVar9,1)) {
      _local_39 = CONCAT31(0x8aacee,local_39);
      local_35 = (uint)local_35._1_3_ << 8;
      uVar2 = thunk_FUN_004072dc();
    }
    if ((local_c == 0) || (iVar3 = local_c, *(uint *)(local_c + -4) <= uVar2)) {
      _local_39 = CONCAT31(0x8aacff,local_39);
      local_35 = local_35 & 0xffffff00;
      uVar2 = thunk_FUN_004072dc();
      iVar3 = extraout_EDX;
    }
    puVar5 = (undefined4 *)(iVar3 + uVar2 * 0x27);
    puVar6 = (undefined4 *)(auStack_44 + 1);
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
    *(undefined1 *)((int)puVar6 + (uint)bVar7 * -4 + 2) =
         *(undefined1 *)((int)puVar5 + (uint)bVar7 * -4 + 2);
    uVar2 = local_35;
    local_35 = local_35 & 0xffffff00;
    uStack_3c = 0;
    local_3b = (undefined2)(uVar2 >> 8);
    local_39 = (undefined1)(uVar2 >> 0x18);
    _local_39 = CONCAT31(0x8aaec0,local_39);
    uStack_40 = local_39;
    local_3f = 0xaec0;
    local_3d = 0x8a;
    auStack_44 = (undefined1  [4])0x8aad25;
    FUN_00b26b58(&local_48);
    auStack_44 = (undefined1  [4])local_48;
    local_48 = &DAT_008aaed8;
    local_4c = L"Reps=";
    local_50 = (wchar_t *)0x8aad3e;
    FUN_004282b0(local_3f,&local_4c);
    local_50 = local_4c;
    local_54 = L" Laps=";
    local_58 = (wchar_t *)0x8aad52;
    FUN_004282b0(CONCAT11(uStack_3c,local_3d),&local_50);
    local_58 = local_50;
    local_5c = L" Grade=";
    local_60 = L"痿械꼼\x8a喍ྫྷ䖷\xe8c9픷ﾷ痿趬\xf445஺";
    FUN_008a50f8((uint)puStack_2c >> 8 & 0xff,&local_54);
    local_60 = local_54;
    pwStack_64 = L" Int=";
    local_68 = L"痿趬\xf445஺";
    FUN_004282b0(local_3b,&local_58);
    local_68 = local_58;
    FUN_0040d87c(&local_10,0xb);
    pwStack_6c = L"Do you want to delete the last repetition record?\r\n";
    FUN_009a9aa8(local_8,&local_60);
    pwVar1 = local_60;
    FUN_0040d87c(&local_5c,4);
    iVar3 = FUN_00b2b424(local_5c);
    if (iVar3 == 6) {
      iVar3 = iVar9 + -1;
      puVar8 = PTR_DAT_0089b2f8;
      if (SBORROW4(iVar9,1)) {
        thunk_FUN_004072dc(PTR_DAT_0089b2f8,iVar3);
        iVar3 = extraout_EDX_00;
      }
      FUN_0040f5fc(&local_c,iVar3,1,puVar8);
      if (local_c == 0) {
        FUN_00957478(*(undefined4 *)PTR_DAT_00ba9c04,local_8,1);
        FUN_00960b08(*(undefined4 *)PTR_DAT_00ba9c04,local_8);
      }
      else {
        DAT_00ca42c6 = 1;
        FUN_008abea4(local_c);
        DAT_00ca42c6 = 0;
      }
      *in_FS_OFFSET = (int)pwVar1;
    }
    else {
      *in_FS_OFFSET = (int)pwVar1;
    }
  }
  pwVar1 = pwStack_64;
  *in_FS_OFFSET = (int)pwStack_6c;
  pwStack_64 = L"幟譛工냃Ȅ＀\xffff׿";
  local_68 = L"䖍\xe8f4ᜱﾶ䖍诸\xf815覲\xe800䗃ﾶ\xe9c3೽ﾶ헫幟譛工냃Ȅ＀\xffff׿";
  FUN_0040c628(&local_68,9,pwVar1);
  local_68 = L"䖍诸\xf815覲\xe800䗃ﾶ\xe9c3೽ﾶ헫幟譛工냃Ȅ＀\xffff׿";
  FUN_0040c5c8(&local_10);
  local_68 = L"\xe9c3೽ﾶ헫幟譛工냃Ȅ＀\xffff׿";
  FUN_0040f468(&local_c,PTR_DAT_0089b2f8);
  return;
}



// === FUN_008ac190 @ 008ac190 size:1161 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ac190(int param_1,char *param_2,int *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_EDX;
  uint uVar8;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  int extraout_EDX_02;
  int *piVar9;
  int *piVar10;
  int *in_FS_OFFSET;
  byte bVar11;
  float10 in_ST0;
  int iStackY_bc;
  int iStackY_b0;
  int iStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  int iStack_90;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  int local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4b;
  short local_47;
  short local_45;
  short local_43;
  undefined4 local_41;
  int iStack_3d;
  undefined1 local_39 [6];
  char local_33;
  int local_24;
  int local_20;
  uint local_18;
  char local_11;
  int *local_10;
  char *local_c;
  int local_8;
  
  bVar11 = 0;
  puStack_88 = &stack0xfffffffc;
  puStack_94 = &stack0xfffffffc;
  local_68 = 0;
  local_6c = 0;
  local_60 = 0;
  local_64 = 0;
  local_58 = 0;
  local_5c = 0;
  local_50 = 0;
  local_54 = 0;
  puStack_8c = &LAB_008ac63f;
  iStack_90 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_90;
  local_11 = '\0';
  puStack_98 = &LAB_008ac5fe;
  iStack_9c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_9c;
  local_20 = *param_3;
  if (local_20 != 0) {
    local_20 = *(int *)(local_20 + -4);
  }
  uVar4 = local_20 - 1;
  puVar1 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (SBORROW4(local_20,1)) {
    uVar4 = thunk_FUN_004072dc();
    puVar1 = puStack_94;
    puVar2 = puStack_88;
  }
  puStack_88 = puVar2;
  puStack_94 = puVar1;
  iVar5 = *local_10;
  if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar4)) {
    uVar4 = thunk_FUN_004072dc();
    iVar5 = extraout_EDX;
  }
  piVar9 = (int *)(iVar5 + uVar4 * 0x27);
  piVar10 = &local_4b;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar10 = *piVar9;
    piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
    piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
  }
  *(short *)piVar10 = (short)*piVar9;
  *(undefined1 *)((int)piVar10 + (uint)bVar11 * -4 + 2) =
       *(undefined1 *)((int)piVar9 + (uint)bVar11 * -4 + 2);
  if (local_4b != local_8) {
    FUN_009a9aa8(local_8,&local_54);
    FUN_0040d7f4(&local_50,L"Wrong element number in repetition history: ",local_54);
    FUN_00b2b8f8(local_50);
    local_11 = '\x01';
  }
  if ((*local_c != '\x01') && (local_45 != 0)) {
    FUN_009a9aa8(local_8,&local_5c);
    FUN_0040d7f4(&local_58,L"Lapses reported for non-item element: ",local_5c);
    FUN_00b2b8f8(local_58);
    local_11 = '\x01';
  }
  if ((local_c[1] != '\x01') && (local_47 != 0)) {
    FUN_009a9aa8(local_8,&local_64);
    FUN_0040d7f4(&local_60,L"Warning! Modifying repetition history for non-memorized element:\r\n",
                 local_64);
    FUN_00b2e42c(local_60);
  }
  if (*(short *)(local_c + 0xc) != local_47) {
    local_11 = '\x02';
  }
  if (*(short *)(local_c + 0xe) != local_45) {
    local_11 = '\x02';
  }
  uVar4 = FUN_008a71ec(CONCAT31((int3)(CONCAT22((short)((uint)local_c >> 0x10),
                                                *(short *)(local_c + 0xe)) >> 8),local_33));
  if (((uVar4 & 1) != 0) && (1 < *(ushort *)(local_c + 0xc))) {
    local_11 = '\x02';
  }
  uVar4 = FUN_008a71ec(local_33);
  if (((uVar4 & 2) != 0) && (*(ushort *)(local_c + 0xc) < 2)) {
    local_11 = '\x02';
  }
  if ((double)_DAT_008ac7b0 <
      ((double)CONCAT44(iStack_3d,local_41) - *(double *)(local_c + 0x14)) * (double)_DAT_008ac7a8 *
      (double)_DAT_008ac7ac) {
    local_11 = '\x02';
  }
  iVar5 = FUN_00950018(*(undefined4 *)PTR_DAT_00ba9c04);
  uVar4 = *(short *)(local_c + 0x12) - iVar5;
  if (SBORROW4((int)*(short *)(local_c + 0x12),iVar5)) {
    iVar5 = 0x8ac35f;
    uVar4 = thunk_FUN_004072dc();
  }
  uVar8 = (int)uVar4 >> 0x1f;
  iVar6 = (uVar4 ^ uVar8) - uVar8;
  if (SBORROW4(uVar4 ^ uVar8,uVar8)) {
    iVar5 = 0x8ac36b;
    iVar6 = thunk_FUN_004072dc();
  }
  if (1 < iVar6) {
    local_11 = '\x02';
  }
  if ((local_11 == '\x02') && (local_c[1] != '\x01')) {
    local_11 = '\x04';
  }
  if (local_11 == '\x02') {
    iVar5 = 0x8ac390;
    cVar3 = FUN_008a7f08();
    if (cVar3 == '\0') {
      local_11 = '\x03';
    }
    else {
      local_11 = '\x04';
    }
  }
  if (local_11 == '\x04') {
    if (local_c[1] == '\x01') {
      FUN_0093cf28(*(undefined4 *)PTR_DAT_00ba9c04,local_8);
    }
    *(short *)(local_c + 0xc) = local_47;
    *(short *)(local_c + 0xe) = local_45;
    if (local_43 != 0) {
      *(short *)(local_c + 0x10) = local_43;
    }
    if (((local_c[1] != '\x01') &&
        (((*(short *)(local_c + 0x10) != 0 || (*(short *)(local_c + 0xc) == 1)) &&
         (local_33 != '\f')))) && (local_33 != '\r')) {
      local_c[1] = '\x01';
      FUN_009a9aa8(local_8,&local_6c);
      FUN_0040d7f4(&local_68,L"Memorizing ",local_6c);
      FUN_00b2e42c(local_68);
    }
    *(undefined4 *)(local_c + 0x14) = local_41;
    *(int *)(local_c + 0x18) = iStack_3d;
    iVar5 = iStack_3d;
    iVar6 = FUN_00950018(*(undefined4 *)PTR_DAT_00ba9c04);
    uVar4 = iVar6 + 0x8000;
    if (0xffff < uVar4) {
      uVar4 = thunk_FUN_004072dc();
    }
    *(short *)(local_c + 0x12) = (short)uVar4 + -0x8000;
    iStackY_b0 = iStack_3d;
    FUN_0040a340(local_39);
    local_74 = SUB84((double)in_ST0,0);
    iStackY_bc = local_74;
    iVar6 = FUN_00950d94(*(undefined4 *)PTR_DAT_00ba9c04);
    uVar4 = iVar6 + 0x8000;
    if (0xffff < uVar4) {
      uVar4 = thunk_FUN_004072dc();
    }
    *(short *)(local_c + 0x12) = (short)uVar4 + -0x8000;
    local_18 = (int)*(short *)(local_c + 0x12) + (uint)*(ushort *)(local_c + 0x10);
    if (SCARRY4((int)*(short *)(local_c + 0x12),(uint)*(ushort *)(local_c + 0x10))) {
      local_18 = thunk_FUN_004072dc();
    }
    if ((int)local_18 < 1) {
      local_18 = 1;
      uVar4 = 1 - (int)*(short *)(local_c + 0x12);
      if (SBORROW4(1,(int)*(short *)(local_c + 0x12))) {
        thunk_FUN_004072dc();
        uVar4 = extraout_EDX_00;
      }
      if (0xffff < uVar4) {
        thunk_FUN_004072dc();
        uVar4 = extraout_EDX_01;
      }
      *(short *)(local_c + 0x10) = (short)uVar4;
    }
    if (*(short *)(local_c + 0xc) == 1) {
      FUN_0040a370(local_c + 0x22);
    }
    FUN_00930c90(*(undefined4 *)PTR_DAT_00ba9c04,local_8,local_c);
    if (local_c[1] == '\x01') {
      if (0xffff < local_18) {
        thunk_FUN_004072dc();
      }
      FUN_0093d5c0(*(undefined4 *)PTR_DAT_00ba9c04,local_8);
    }
  }
  if (local_11 == '\x03') {
    local_47 = *(short *)(local_c + 0xc);
    local_45 = *(short *)(local_c + 0xe);
    local_43 = *(short *)(local_c + 0x10);
    local_41 = *(undefined4 *)(local_c + 0x14);
    iStack_3d = *(int *)(local_c + 0x18);
    local_24 = *local_10;
    if (local_24 != 0) {
      local_24 = *(int *)(local_24 + -4);
    }
    uVar4 = local_24 - 1;
    if (SBORROW4(local_24,1)) {
      uVar4 = thunk_FUN_004072dc();
    }
    iVar6 = *local_10;
    if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= uVar4)) {
      uVar4 = thunk_FUN_004072dc();
      iVar6 = extraout_EDX_02;
    }
    piVar9 = &local_4b;
    piVar10 = (int *)(iVar6 + uVar4 * 0x27);
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar10 = *piVar9;
      piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
      piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
    }
    *(short *)piVar10 = (short)*piVar9;
    *(undefined1 *)((int)piVar10 + (uint)bVar11 * -4 + 2) =
         *(undefined1 *)((int)piVar9 + (uint)bVar11 * -4 + 2);
    FUN_00b2e42c(L"Repetition history updated");
  }
  *in_FS_OFFSET = iStackY_bc;
  *in_FS_OFFSET = iStackY_b0;
  FUN_0040c628(&local_6c,8,iVar5,&LAB_008ac646);
  return;
}



// === FUN_008ae9f8 @ 008ae9f8 size:297 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ae9f8(byte param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  uint extraout_EDX;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwStackY_5c;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  char local_1d;
  ushort *local_1c;
  byte local_16;
  byte local_15;
  double local_14;
  byte local_5;
  
  puStack_3c = &stack0xfffffffc;
  puStack_48 = &stack0xfffffffc;
  local_28 = 0;
  local_2c = 0;
  puStack_40 = &LAB_008aeb41;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_14 = 10.0;
  puStack_4c = &LAB_008aeb06;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  pwStackY_5c = (wchar_t *)0x8aea41;
  local_5 = param_1;
  local_15 = FUN_008b0994(1,0,param_3,param_4,param_5);
  local_1c = DAT_00ca4544;
  local_24 = (uint)*DAT_00ca4544;
  local_14 = (double)((float)local_24 / _DAT_008aeb54);
  if (0x14 < local_5) {
    FUN_004282b0(local_5,&local_2c);
    pwStackY_5c = L" in TypicalInterval";
    FUN_0040d87c(&local_28,3);
    FUN_00b2b8f8(local_28);
    local_5 = 0x14;
  }
  if (1 < local_5) {
    local_1d = local_5 - 1;
    local_16 = 2;
    do {
      uVar3 = local_15 - 1;
      if (0x13 < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      lVar1 = (longlong)(int)(uVar3 + 1) * 5;
      iVar4 = (int)lVar1;
      if (iVar4 != lVar1) {
        iVar4 = thunk_FUN_004072dc();
      }
      puVar5 = local_1c + iVar4 * 4;
      uVar3 = local_16 - 1;
      if (0x13 < uVar3) {
        puVar5 = (ushort *)thunk_FUN_004072dc();
        uVar3 = extraout_EDX;
      }
      local_24 = (uint)puVar5[uVar3 - 0x14];
      local_14 = ((double)local_24 * local_14) / (double)_DAT_008aeb54;
      local_16 = local_16 + 1;
      local_1d = local_1d + -1;
    } while (local_1d != '\0');
  }
  puVar2 = puStack_48;
  *in_FS_OFFSET = pwStackY_5c;
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_008aeb48;
  puStack_4c = (undefined1 *)0x8aeb40;
  FUN_0040c628(&local_2c,2,puVar2);
  return;
}



// === FUN_008b157c @ 008b157c size:230 ===

void FUN_008b157c(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_64;
  wchar_t *pwStackY_58;
  undefined4 in_stack_ffffffb0;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_38 = &LAB_008b1682;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_14 = param_2 - param_3;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (SBORROW4(param_2,param_3)) {
    puStack_40 = (undefined1 *)0x8b15b7;
    local_14 = thunk_FUN_004072dc();
    puVar1 = puStack_34;
  }
  puStack_34 = puVar1;
  puStack_44 = &LAB_008b1647;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_40 = &stack0xfffffffc;
  if (local_14 < -1) {
    if (local_8 == 0) {
      local_8 = 1;
    }
    puStack_40 = &stack0xfffffffc;
    FUN_00b1e928(&local_1c);
    pwStackY_58 = L"Last repetition on day #: ";
    in_stack_ffffffb0 = local_1c;
    FUN_004282b0(local_10,&local_20);
    FUN_009a9aa8(local_8,&local_24);
    uStackY_64 = local_24;
    FUN_0040d87c(&local_18,7);
    FUN_00b2f5c4(local_18,L"UsedInterval is less than 1 in GetRepetitionData");
  }
  if (local_14 < 1) {
    local_14 = 1;
  }
  *in_FS_OFFSET = uStackY_64;
  *in_FS_OFFSET = pwStackY_58;
  FUN_0040c628(&local_24,4,in_stack_ffffffb0,&LAB_008b1689);
  return;
}



// === FUN_008b1fa4 @ 008b1fa4 size:466 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b1fa4(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  
  puStack_34 = &stack0xfffffffc;
  puStack_38 = &LAB_008b216c;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  if (((0.0 <= *(double *)(param_1 + 0x9b)) && (0.0 <= *(double *)(param_1 + 0x8b))) ||
     (*(short *)(param_1 + 0x36) == 0)) {
    puVar1 = &stack0xfffffffc;
    if ((*(short *)(param_1 + 0x36) == 0) &&
       (puVar1 = &stack0xfffffffc, SBORROW4((int)*(char *)(param_1 + 8),4))) {
      thunk_FUN_004072dc();
      puVar1 = puStack_34;
    }
    puStack_34 = puVar1;
    if ((*(short *)(param_1 + 0x36) == 1) && (*(short *)(param_1 + 0x3a) == 0)) {
      FUN_008b1e48();
    }
    if (((*(short *)(param_1 + 0x36) == 1) && (*(short *)(param_1 + 0x3a) != 0)) &&
       (SBORROW4((int)*(char *)(param_1 + 8),4))) {
      thunk_FUN_004072dc();
    }
    if (1 < *(ushort *)(param_1 + 0x36)) {
      FUN_008af610(param_1);
    }
    *in_FS_OFFSET = uStack_3c;
  }
  else {
    puStack_34 = &stack0xfffffffc;
    FUN_00b2b8f8(L"Cannot compute A-Factor on uninitialized data");
    *in_FS_OFFSET = uStack_3c;
  }
  return;
}



// === FUN_008b2ef4 @ 008b2ef4 size:149 ===

void FUN_008b2ef4(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  
  puStack_28 = &stack0xfffffffc;
  puStack_2c = &LAB_008b2f7f;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if ((*(short *)(param_1 + 0x38) != 1) && (*(int *)(param_1 + 0x12) < 1)) {
    FUN_00b2f5c4(L"UsedInterval<1 in GetRepetitionData.GetNewUFactor",
                 L"UsedInterval is less than 1 in GetRepetitionData");
    *(undefined4 *)(param_1 + 0x12) = 1;
  }
  *in_FS_OFFSET = uStack_30;
  return;
}



// === FUN_008b30d8 @ 008b30d8 size:864 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b30d8(int param_1)

{
  short *psVar1;
  short sVar2;
  longlong lVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  float10 fVar7;
  unkbyte10 in_ST2;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  int local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  byte local_9;
  int local_8;
  
  puStack_64 = &stack0xfffffffc;
  puStack_70 = &stack0xfffffffc;
  local_54 = 0;
  local_50 = 0;
  local_38 = 0;
  local_48 = 0;
  puStack_68 = &LAB_008b34ce;
  local_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_6c;
  puStack_74 = &LAB_008b347d;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  local_18 = DAT_00ca4548;
  local_8 = param_1;
  if (*(short *)(param_1 + 0x36) == 0) {
    *in_FS_OFFSET = uStack_78;
    puStack_70 = &stack0xfffffffc;
    puStack_64 = &stack0xfffffffc;
  }
  else if ((*(short *)(param_1 + 0x36) == 1) && (*(short *)(param_1 + 0x3a) == 0)) {
    *in_FS_OFFSET = uStack_78;
    puStack_70 = &stack0xfffffffc;
    puStack_64 = &stack0xfffffffc;
  }
  else if (*(byte *)(param_1 + 9) < 6) {
    puStack_7c = *(undefined1 **)(param_1 + 0x53);
    puStack_80 = *(undefined1 **)(param_1 + 0x4f);
    uStack_84 = 0x8b317d;
    local_9 = FUN_008b0994(1);
    uVar5 = local_9 - 1;
    if (0x13 < uVar5) {
      puStack_7c = (undefined1 *)0x8b3190;
      uVar5 = thunk_FUN_004072dc();
    }
    psVar1 = (short *)(local_18 + 0x48a2 + (uVar5 + 1) * 2);
    sVar2 = *psVar1;
    *psVar1 = *psVar1 + 1;
    if (sVar2 == -1) {
      puStack_7c = (undefined1 *)0x8b31a4;
      thunk_FUN_004072dc();
    }
    uVar5 = local_9 - 1;
    if (0x13 < uVar5) {
      puStack_7c = (undefined1 *)0x8b31b4;
      uVar5 = thunk_FUN_004072dc();
    }
    if (60000 < *(ushort *)(local_18 + 0x48a2 + (uVar5 + 1) * 2)) {
      uVar5 = local_9 - 1;
      if (0x13 < uVar5) {
        puStack_7c = (undefined1 *)0x8b31d4;
        uVar5 = thunk_FUN_004072dc();
      }
      *(undefined2 *)(local_18 + 0x48a2 + (uVar5 + 1) * 2) = 60000;
    }
    if (*(short *)(local_8 + 0x36) == 2) {
      local_14 = 0x33333333;
      uStack_10 = 0x3fc33333;
    }
    else {
      local_14 = 0x1eb851ec;
      uStack_10 = 0x3fb1eb85;
    }
    uVar5 = local_9 - 1;
    if (0x13 < uVar5) {
      puStack_7c = (undefined1 *)0x8b321a;
      uVar5 = thunk_FUN_004072dc();
    }
    lVar3 = (longlong)(int)(uVar5 + 1) * 3;
    iVar6 = (int)lVar3;
    if (iVar6 != lVar3) {
      puStack_7c = (undefined1 *)0x8b3225;
      iVar6 = thunk_FUN_004072dc();
    }
    puStack_7c = (undefined1 *)0x8b3234;
    FUN_0040a340(local_18 + 0x4826 + iVar6 * 2);
    local_4c = (uint)*(byte *)(local_8 + 9);
    fVar7 = (float10)local_4c * (float10)(double)CONCAT44(uStack_10,local_14) +
            ((float10)1 - (float10)(double)CONCAT44(uStack_10,local_14)) * in_ST0;
    uVar5 = local_9 - 1;
    if (0x13 < uVar5) {
      puStack_7c = (undefined1 *)0x8b325d;
      uVar5 = thunk_FUN_004072dc();
    }
    lVar3 = (longlong)(int)(uVar5 + 1) * 3;
    iVar6 = (int)lVar3;
    if (iVar6 != lVar3) {
      puStack_7c = (undefined1 *)0x8b3268;
      iVar6 = thunk_FUN_004072dc();
    }
    puStack_7c = (undefined1 *)0x8b3277;
    FUN_0040a370(local_18 + 0x4826 + iVar6 * 2);
    uVar5 = local_9 - 1;
    if (0x13 < uVar5) {
      puStack_7c = (undefined1 *)0x8b3287;
      uVar5 = thunk_FUN_004072dc();
    }
    lVar3 = (longlong)(int)(uVar5 + 1) * 3;
    iVar6 = (int)lVar3;
    if (iVar6 != lVar3) {
      puStack_7c = (undefined1 *)0x8b3292;
      iVar6 = thunk_FUN_004072dc();
    }
    puStack_7c = (undefined1 *)0x8b32a1;
    FUN_0040a340(local_18 + 0x4826 + iVar6 * 2);
    if (fVar7 < (float10)0) {
      puStack_80 = &LAB_008b333c;
      uStack_84 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_84;
      uVar5 = local_9 - 1;
      puStack_7c = &stack0xfffffffc;
      if (0x13 < uVar5) {
        puStack_7c = &stack0xfffffffc;
        uVar5 = thunk_FUN_004072dc();
      }
      lVar3 = (longlong)(int)(uVar5 + 1) * 3;
      iVar6 = (int)lVar3;
      if (iVar6 != lVar3) {
        iVar6 = thunk_FUN_004072dc();
      }
      FUN_0040a340(local_18 + 0x4826 + iVar6 * 2);
      uStack_2c = (undefined2)((unkuint10)in_ST1 >> 0x40);
      uStack_30 = (undefined4)((unkuint10)in_ST1 >> 0x20);
      local_34 = SUB104(in_ST1,0);
      FUN_0042bc74(L"0.###",PTR_DAT_00baa920,&local_38,local_34,uStack_30,
                   CONCAT22(extraout_var,uStack_2c));
      FUN_0040d7f4(&local_50,L"Wrong value in the first grade graph: ",local_38);
      FUN_00b2f5c4(local_50,L"Wrong value in the first grade graph");
      puVar4 = puStack_7c;
      *in_FS_OFFSET = uStack_84;
      puStack_7c = &DAT_008b3343;
      puStack_80 = (undefined1 *)0x8b333b;
      FUN_0040c5c8(&local_38,uStack_84,puVar4);
      return;
    }
    uVar5 = local_9 - 1;
    if (0x13 < uVar5) {
      puStack_7c = (undefined1 *)0x8b3382;
      uVar5 = thunk_FUN_004072dc();
    }
    lVar3 = (longlong)(int)(uVar5 + 1) * 3;
    iVar6 = (int)lVar3;
    if (iVar6 != lVar3) {
      puStack_7c = (undefined1 *)0x8b338d;
      iVar6 = thunk_FUN_004072dc();
    }
    puStack_7c = (undefined1 *)0x8b339c;
    FUN_0040a340(local_18 + 0x4826 + iVar6 * 2);
    if ((float10)_DAT_008b35a8 < in_ST1) {
      puStack_80 = &LAB_008b3439;
      uStack_84 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_84;
      uVar5 = local_9 - 1;
      puStack_7c = &stack0xfffffffc;
      if (0x13 < uVar5) {
        puStack_7c = &stack0xfffffffc;
        uVar5 = thunk_FUN_004072dc();
      }
      lVar3 = (longlong)(int)(uVar5 + 1) * 3;
      iVar6 = (int)lVar3;
      if (iVar6 != lVar3) {
        iVar6 = thunk_FUN_004072dc();
      }
      FUN_0040a340(local_18 + 0x4826 + iVar6 * 2);
      uStack_3c = (undefined2)((unkuint10)in_ST2 >> 0x40);
      uStack_40 = (undefined4)((unkuint10)in_ST2 >> 0x20);
      local_44 = (undefined4)in_ST2;
      FUN_0042bc74(L"0.###",PTR_DAT_00baa920,&local_48,local_44,uStack_40,
                   CONCAT22(extraout_var_00,uStack_3c));
      FUN_0040d7f4(&local_54,L"Wrong value in the first grade graph: ",local_48);
      FUN_00b2f5c4(local_54,L"Wrong value in the first grade graph");
      puVar4 = puStack_7c;
      *in_FS_OFFSET = uStack_84;
      puStack_7c = &DAT_008b3440;
      puStack_80 = (undefined1 *)0x8b3438;
      FUN_0040c5c8(&local_48,uStack_84,puVar4);
      return;
    }
    *in_FS_OFFSET = uStack_78;
  }
  else {
    *in_FS_OFFSET = uStack_78;
    puStack_70 = &stack0xfffffffc;
    puStack_64 = &stack0xfffffffc;
  }
  puVar4 = puStack_64;
  *in_FS_OFFSET = local_6c;
  puStack_64 = &LAB_008b34d5;
  puStack_68 = (undefined1 *)0x8b34bd;
  FUN_0040c628(&local_54,2,puVar4);
  puStack_68 = (undefined1 *)0x8b34c5;
  FUN_0040c5c8(&local_48);
  puStack_68 = (undefined1 *)0x8b34cd;
  FUN_0040c5c8(&local_38);
  return;
}



// === FUN_008bfaec @ 008bfaec size:711 ===

void FUN_008bfaec(undefined4 param_1,undefined4 *param_2)

{
  double dVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint unaff_EDI;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  unkbyte10 in_ST0;
  float10 in_ST1;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined1 local_1c4 [256];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_9e;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  short local_8c;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined8 uStack_44;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined4 *local_24;
  undefined4 uVar6;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  iVar4 = 0x40;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  LOCK();
  UNLOCK();
  _local_24 = (double)((ulonglong)unaff_EDI << 0x20);
  local_14 = 0;
  puVar5 = &local_9e;
  for (iVar4 = 0x1d; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = local_24;
  *(undefined2 *)puVar5 = *(undefined2 *)param_2;
  local_c = puVar3;
  uVar6 = (undefined4)((ulonglong)_local_24 >> 0x20);
  _local_24 = (double)CONCAT44(uVar6,&stack0xfffffffc);
  local_28 = &LAB_008bffec;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  uStack_34 = &LAB_008bff83;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  uStack_3c = 0xfb46;
  uStack_3a = 0x8b;
  puStack_30 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_004282b0(param_1,&local_a8);
  uStack_3c = 0xfb5c;
  uStack_3a = 0x8b;
  FUN_0040d7f4(&local_a4,L"Begin ElementInfo #",local_a8);
  uStack_3c = 0xfb6c;
  uStack_3a = 0x8b;
  (**(code **)(*(int *)*local_c + 0x3c))((int *)*local_c,local_a4);
  uStack_3c = 0xfb87;
  uStack_3a = 0x8b;
  FUN_009dc9bc(*(undefined4 *)(*(int *)PTR_DAT_00ba9c04 + 0x4e2),(int)&local_9e + 2,&local_10);
  uStack_3c = 0xfb94;
  uStack_3a = 0x8b;
  FUN_00b19d38(&local_10,&DAT_008c003c);
  uStack_3c = 0xfba7;
  uStack_3a = 0x8b;
  FUN_0040d7f4(&local_ac,L"Title=",local_10);
  uStack_3c = 0xfbb7;
  uStack_3a = 0x8b;
  (**(code **)(*(int *)*local_c + 0x3c))((int *)*local_c,local_ac);
  uStack_3c = 0xfbc8;
  uStack_3a = 0x8b;
  FUN_009a6568((undefined1)local_9e,&local_b4);
  uStack_3c = 0xfbde;
  uStack_3a = 0x8b;
  FUN_0040d7f4(&local_b0,L"Type=",local_b4);
  uStack_3c = 0xfbee;
  uStack_3a = 0x8b;
  (**(code **)(*(int *)*local_c + 0x3c))((int *)*local_c,local_b0);
  uStack_3c = 0xfbff;
  uStack_3a = 0x8b;
  FUN_009a697c(local_9e._1_1_,&local_bc);
  uStack_3c = 0xfc15;
  uStack_3a = 0x8b;
  FUN_0040d7f4(&local_b8,L"Status=",local_bc);
  uStack_3c = 0xfc25;
  uStack_3a = 0x8b;
  (**(code **)(*(int *)*local_c + 0x3c))((int *)*local_c,local_b8);
  uStack_3c = 0xfc34;
  uStack_3a = 0x8b;
  FUN_004282b0((int)uStack_34._3_1_,&local_c4);
  uStack_3c = 0xfc4a;
  uStack_3a = 0x8b;
  FUN_0040d7f4(&local_c0,L"FirstGrade=",local_c4);
  uStack_3c = 0xfc5a;
  uStack_3a = 0x8b;
  (**(code **)(*(int *)*local_c + 0x3c))((int *)*local_c,local_c0);
  uStack_3c = 0xfc62;
  uStack_3a = 0x8b;
  FUN_0040a340((int)&uStack_38 + 1);
  uStack_44 = (undefined8)in_ST0;
  uStack_3c = (undefined2)((unkuint10)in_ST0 >> 0x40);
  puStack_48 = (undefined1 *)0x8bfc7b;
  FUN_00409cb4(0,6,local_1c4);
  puStack_48 = (undefined1 *)0x8bfc89;
  FUN_0040d710(&local_14,local_1c4);
  puStack_48 = (undefined1 *)0x8bfc9c;
  FUN_0040d7f4(&local_1c8,L"Ordinal=",local_14);
  puStack_48 = (undefined1 *)0x8bfcac;
  (**(code **)(*(int *)*local_c + 0x3c))((int *)*local_c,local_1c8);
  puStack_48 = (undefined1 *)0x8bfcbe;
  FUN_004282b0(local_92,&local_1d0);
  puStack_48 = (undefined1 *)0x8bfcd4;
  FUN_0040d7f4(&local_1cc,L"Repetitions=",local_1d0);
  puStack_48 = (undefined1 *)0x8bfce4;
  (**(code **)(*(int *)*local_c + 0x3c))((int *)*local_c,local_1cc);
  puStack_48 = (undefined1 *)0x8bfcf6;
  FUN_004282b0(local_90,&local_1d8);
  puStack_48 = (undefined1 *)0x8bfd0c;
  FUN_0040d7f4(&local_1d4,L"Lapses=",local_1d8);
  puStack_48 = (undefined1 *)0x8bfd1c;
  (**(code **)(*(int *)*local_c + 0x3c))((int *)*local_c,local_1d4);
  puStack_48 = (undefined1 *)0x8bfd2e;
  FUN_004282b0(local_8e,&local_1e0);
  puStack_48 = (undefined1 *)0x8bfd44;
  FUN_0040d7f4(&local_1dc,L"Interval=",local_1e0);
  puStack_48 = (undefined1 *)0x8bfd54;
  (**(code **)(*(int *)*local_c + 0x3c))((int *)*local_c,local_1dc);
  puStack_4c = &LAB_008bfdb3;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  uStack_54 = 0x8bfd75;
  puStack_48 = &stack0xfffffffc;
  FUN_00961998(*(undefined4 *)PTR_DAT_00ba9c04,(int)local_8c);
  dVar1 = (double)in_ST1;
  uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_24 = SUB84(dVar1,0);
  uStack_58 = local_24;
  uStack_5c = 0x8bfd92;
  uStack_54 = uVar6;
  _local_24 = dVar1;
  FUN_0042d430(L"dd.mm.yy",PTR_DAT_00baa920,&local_28);
  uStack_54 = 0x8bfd9d;
  FUN_0040c9f0(&local_14,local_28);
  puVar2 = puStack_48;
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_008bfdba;
  puStack_4c = (undefined1 *)0x8bfdb2;
  FUN_0040c5c8(&local_28,uStack_50,puVar2);
  return;
}



// === FUN_008c7808 @ 008c7808 size:913 ===

void FUN_008c7808(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined4 local_190;
  undefined1 local_18c [4];
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180 [4];
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174 [3];
  undefined2 local_168;
  undefined2 local_166;
  ushort local_164;
  short local_162;
  undefined1 local_158 [6];
  undefined1 local_152 [84];
  undefined4 local_fe [3];
  undefined2 local_f2;
  undefined2 local_f0;
  ushort local_ee;
  short local_ec;
  undefined1 local_e2 [6];
  undefined1 local_dc [12];
  undefined4 uStack_d0;
  wchar_t *pwStack_cc;
  undefined *puStack_c8;
  undefined *puStack_c4;
  wchar_t *pwStack_c0;
  wchar_t *pwStack_bc;
  wchar_t *pwStack_b8;
  wchar_t *pwStack_b4;
  undefined *puStack_b0;
  undefined4 uStack_ac;
  wchar_t *pwStack_a8;
  wchar_t *pwStack_a4;
  undefined *puStack_a0;
  undefined *puStack_9c;
  undefined4 uStack_98;
  wchar_t *pwStack_94;
  wchar_t *pwStack_90;
  undefined4 uStack_8c;
  undefined *local_88;
  undefined8 local_84;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  wchar_t *local_78;
  undefined *local_74;
  undefined *puStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  wchar_t *local_68;
  wchar_t *local_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 local_58;
  wchar_t *local_54;
  wchar_t *pwStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined *local_48;
  undefined8 local_44;
  wchar_t *pwStack_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined1 *puStack_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 uStack_10;
  
  iVar3 = 0x31;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  LOCK();
  UNLOCK();
  puVar4 = (undefined4 *)0x0;
  puVar5 = local_174;
  for (iVar3 = 0x1d; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
  puVar4 = local_fe;
  for (iVar3 = 0x1d; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)param_2;
  local_24 = (double)CONCAT44(&stack0xfffffffc,&LAB_008c7c06);
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_34 = (double)CONCAT44(&LAB_008c7b99,*in_FS_OFFSET);
  *in_FS_OFFSET = &local_34;
  local_38 = 0x8c786d;
  puStack_2c = &stack0xfffffffc;
  FUN_009a9aa8(param_1,&local_178);
  local_38 = local_178;
  pwStack_3c = L"\r\n   ";
  local_44._4_4_ = L"Reps: ";
  local_44._0_4_ = 0x8c788f;
  FUN_004282b0(local_f2,&local_17c);
  local_44 = (double)CONCAT44(local_44._4_4_,local_17c);
  local_48 = &DAT_008c7c58;
  uStack_4c = 0x78ac;
  uStack_4a = 0x8c;
  FUN_004282b0(local_168,local_180);
  uStack_4c = local_180._0_2_;
  uStack_4a = local_180._2_2_;
  pwStack_50 = L"\r\n   ";
  local_54 = L"Lapses: ";
  local_58 = 0x8c78ce;
  FUN_004282b0(local_f0,&local_184);
  local_58 = local_184;
  uStack_5c = 0x7c58;
  uStack_5a = 0x8c;
  uStack_60 = 0x8c78eb;
  FUN_004282b0(local_166,&local_188);
  uStack_60 = local_188;
  local_64 = L"\r\n   ";
  local_68 = L"Interval: ";
  uStack_6c = 0x790d;
  uStack_6a = 0x8c;
  FUN_004282b0(local_ee,local_18c);
  uStack_6c = local_18c._0_2_;
  uStack_6a = local_18c._2_2_;
  puStack_70 = &DAT_008c7c58;
  local_74 = (undefined *)0x8c792a;
  FUN_004282b0(local_164,&local_190);
  local_74 = (undefined *)local_190;
  local_78 = L"\r\n   ";
  uStack_7c = 0x7cb0;
  uStack_7a = 0x8c;
  local_84._4_4_ = (undefined *)0x8c7947;
  FUN_0040d87c(&stack0xffffffe4,0x12);
  local_84._4_4_ = (undefined *)0x8c795a;
  FUN_00961998(*(undefined4 *)PTR_DAT_00ba9c04,(int)local_ec);
  uStack_10 = (undefined4)((ulonglong)(double)in_ST0 >> 0x20);
  local_84._4_4_ = (undefined *)uStack_10;
  local_84._0_4_ = SUB84((double)in_ST0,0);
  local_88 = (undefined *)0x8c7977;
  FUN_0042d430(L"dd.mm.yyyy",PTR_DAT_00baa920,&stack0xffffffe8);
  local_84._4_4_ = (undefined *)0x8c798a;
  FUN_00961998(*(undefined4 *)PTR_DAT_00ba9c04,(int)local_162);
  local_24 = (double)in_ST1;
  local_88 = (undefined *)0x8c79a7;
  local_84 = local_24;
  FUN_0042d430(L"dd.mm.yyyy",PTR_DAT_00baa920,&local_28);
  uVar2 = (uint)local_ee;
  if (SCARRY4((int)local_ec,uVar2)) {
    local_84._4_4_ = (undefined *)0x8c79be;
    thunk_FUN_004072dc(uVar2,(int)local_ec + uVar2);
  }
  local_84._4_4_ = (undefined *)0x8c79ca;
  FUN_00961998(*(undefined4 *)PTR_DAT_00ba9c04);
  local_34 = (double)in_ST2;
  local_88 = (undefined *)0x8c79e7;
  local_84 = local_34;
  FUN_0042d430(L"dd.mm.yyyy",PTR_DAT_00baa920,&local_38);
  uVar2 = (uint)local_164;
  if (SCARRY4((int)local_162,uVar2)) {
    local_84._4_4_ = (undefined *)0x8c79fe;
    thunk_FUN_004072dc(uVar2,(int)local_162 + uVar2);
  }
  local_84._4_4_ = (undefined *)0x8c7a0a;
  FUN_00961998(*(undefined4 *)PTR_DAT_00ba9c04);
  local_44 = (double)in_ST3;
  local_88 = (undefined *)0x8c7a27;
  local_84 = local_44;
  FUN_0042d430(L"dd.mm.yyyy",PTR_DAT_00baa920,&local_48);
  local_84._4_4_ = (undefined *)0x8c7a32;
  FUN_0040a340(local_dc);
  local_54 = (wchar_t *)in_ST4;
  pwStack_50 = (wchar_t *)((unkuint10)in_ST4 >> 0x20);
  uStack_4c = (undefined2)((unkuint10)in_ST4 >> 0x40);
  local_84._4_4_ = (undefined *)CONCAT22(extraout_var,uStack_4c);
  local_84._0_4_ = (undefined *)pwStack_50;
  local_88 = (undefined *)local_54;
  uStack_8c = 0x8c7a54;
  FUN_0042bc74(L"0.###",PTR_DAT_00baa920,&local_58);
  local_84._4_4_ = (undefined *)0x8c7a5f;
  FUN_0040a340(local_152);
  local_64 = (wchar_t *)in_ST5;
  uStack_60 = (undefined4)((unkuint10)in_ST5 >> 0x20);
  uStack_5c = (undefined2)((unkuint10)in_ST5 >> 0x40);
  local_84._4_4_ = (undefined *)CONCAT22(extraout_var_00,uStack_5c);
  local_84._0_4_ = (undefined *)uStack_60;
  local_88 = (undefined *)local_64;
  uStack_8c = 0x8c7a81;
  FUN_0042bc74(L"0.###",PTR_DAT_00baa920,&local_68);
  local_84._4_4_ = (undefined *)0x8c7a8c;
  FUN_0040a340(local_e2);
  local_74 = (undefined *)in_ST6;
  puStack_70 = (undefined *)((unkuint10)in_ST6 >> 0x20);
  uStack_6c = (undefined2)((unkuint10)in_ST6 >> 0x40);
  local_84._4_4_ = (undefined *)CONCAT22(extraout_var_01,uStack_6c);
  local_84._0_4_ = puStack_70;
  local_88 = local_74;
  uStack_8c = 0x8c7aae;
  FUN_0042bc74(L"0.###",PTR_DAT_00baa920,&local_78);
  local_84._4_4_ = (undefined *)0x8c7ab9;
  FUN_0040a340(local_158);
  uStack_7c = (undefined2)((unkuint10)in_ST7 >> 0x40);
  local_88 = (undefined *)CONCAT22(extraout_var_02,uStack_7c);
  uStack_8c = 0x8c7ade;
  local_84._0_4_ = local_88;
  local_84._4_4_ = local_88;
  FUN_0042bc74(L"0.###",PTR_DAT_00baa920,&local_88);
  local_88 = &DAT_008c7c58;
  uStack_8c = local_28;
  pwStack_90 = L"\r\n   ";
  pwStack_94 = L"Next rep: ";
  uStack_98 = local_38;
  puStack_9c = &DAT_008c7c58;
  puStack_a0 = local_48;
  pwStack_a4 = L"\r\n   ";
  pwStack_a8 = L"UF: ";
  uStack_ac = local_58;
  puStack_b0 = &DAT_008c7c58;
  pwStack_b4 = local_68;
  pwStack_b8 = L"\r\n   ";
  pwStack_bc = L"AF: ";
  pwStack_c0 = local_78;
  puStack_c4 = &DAT_008c7c58;
  puStack_c8 = &DAT_008c7c58;
  pwStack_cc = L"\r\n   ";
  uStack_d0 = 0x8c7b40;
  FUN_0040d87c(param_4,0x14);
  puVar1 = puStack_c4;
  *in_FS_OFFSET = pwStack_cc;
  puStack_c4 = &LAB_008c7ba0;
  puStack_c8 = (undefined *)0x8c7b58;
  FUN_0040c5c8(&local_88,pwStack_cc,puVar1);
  puStack_c8 = (undefined *)0x8c7b60;
  FUN_0040c5c8(&local_78);
  puStack_c8 = (undefined *)0x8c7b68;
  FUN_0040c5c8(&local_68);
  puStack_c8 = (undefined *)0x8c7b70;
  FUN_0040c5c8(&local_58);
  puStack_c8 = (undefined *)0x8c7b78;
  FUN_0040c5c8(&local_48);
  puStack_c8 = (undefined *)0x8c7b80;
  FUN_0040c5c8(&local_38);
  puStack_c8 = (undefined *)0x8c7b88;
  FUN_0040c5c8(&local_28);
  puStack_c8 = (undefined *)0x8c7b90;
  FUN_0040c5c8(&stack0xffffffe4);
  puStack_c8 = (undefined *)0x8c7b98;
  FUN_0040c5c8(&stack0xffffffe8);
  return;
}



// === FUN_008cc814 @ 008cc814 size:823 ===

void FUN_008cc814(undefined4 param_1,undefined4 *param_2)

{
  wchar_t *pwVar1;
  uint uVar2;
  undefined2 extraout_var;
  int iVar3;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  char *pcVar4;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  uint local_e4;
  char local_de [6];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  wchar_t *local_cc;
  wchar_t *pwStack_c8;
  undefined4 uStack_c4;
  wchar_t *pwStack_c0;
  wchar_t *local_bc;
  undefined4 uStack_b8;
  wchar_t *pwStack_b4;
  wchar_t *local_b0;
  uint uStack_ac;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  wchar_t *pwStack_a4;
  wchar_t *pwStack_a0;
  undefined4 uStack_9c;
  wchar_t *pwStack_98;
  wchar_t *pwStack_94;
  undefined4 uStack_90;
  wchar_t *pwStack_8c;
  wchar_t *pwStack_88;
  undefined4 uStack_84;
  wchar_t *pwStack_80;
  wchar_t *pwStack_7c;
  undefined4 uStack_78;
  wchar_t *pwStack_74;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *local_68;
  int local_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44 [8];
  undefined4 uStack_3c;
  uint local_38;
  undefined8 local_34;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  double dVar8;
  undefined1 local_9;
  
  iVar3 = 0x1f;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  dVar8 = (double)CONCAT44(unaff_ESI,unaff_EDI);
  iVar3 = 0x1d;
  pcVar4 = local_de;
  while( true ) {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    *(undefined4 *)pcVar4 = *param_2;
    param_2 = param_2 + 1;
    pcVar4 = pcVar4 + 4;
  }
  *(undefined2 *)pcVar4 = *(undefined2 *)param_2;
  local_24 = (double)CONCAT44(&stack0xfffffffc,&LAB_008ccbf5);
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_34 = (double)CONCAT44(&LAB_008ccb6a,*in_FS_OFFSET);
  *in_FS_OFFSET = &local_34;
  uVar2 = (uint)local_d0 >> 0x10;
  local_38 = 0x8cc86c;
  puStack_2c = &stack0xfffffffc;
  FUN_0040a340((int)&uStack_c4 + 2);
  local_24 = (double)in_ST0;
  if (uStack_d4._2_2_ == 1) {
    if ((short)local_d0 == 0) {
      local_9 = 4;
      local_e4 = (uint)local_d0._2_2_;
      dVar8 = (double)local_e4;
    }
    else {
      local_9 = 2;
      local_e4 = (uint)local_d0._2_2_;
      dVar8 = (double)local_e4;
    }
  }
  fVar7 = in_ST1;
  if (1 < uStack_d4._2_2_) {
    local_9 = 4;
    local_38 = 0x8cc8dd;
    fVar7 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    FUN_0040a340(&local_bc);
    dVar8 = (double)in_ST1;
  }
  fVar5 = (float10)dVar8;
  local_38 = 0x8cc8ef;
  FUN_0040a370(&local_bc);
  if (local_de[0] == '\0') {
    local_9 = 10;
  }
  fVar6 = fVar7;
  if (0 < (short)local_cc) {
    uStack_3c = 0x8cc91d;
    fVar6 = in_ST3;
    local_38 = uVar2;
    FUN_00961998(*(undefined4 *)PTR_DAT_00ba9c04,(int)(short)local_cc);
    unique0x00005600 = (double)fVar5;
    local_44._0_4_ = SEXT24((short)local_cc);
    local_48 = CONCAT31((int3)(char)((ushort)(short)local_cc >> 8),local_9);
    local_50 = local_24;
    uStack_54 = 0x8cc93b;
    fVar5 = in_ST2;
    in_ST2 = in_ST4;
    FUN_00898f6c();
    local_50 = (double)fVar7;
    uStack_54 = 0;
    uStack_58 = 0;
    uStack_5c = 0;
    uStack_5a = 0xbff0;
    uStack_60 = 0;
    local_64 = (int)&uStack_b8 + 2;
    local_68 = (undefined1 *)0x8cc96a;
    FUN_00897254(param_1,CONCAT22(extraout_var_01,uStack_d4._2_2_),
                 CONCAT22(extraout_var_00,(short)local_d0));
  }
  puStack_6c = &LAB_008ccb4b;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  pwStack_74 = L"Adding learning data at ";
  uStack_78 = 0x8cc98b;
  local_68 = &stack0xfffffffc;
  FUN_009a9aa8(param_1,&local_e8);
  uStack_78 = local_e8;
  pwStack_7c = L"\r\n   ";
  pwStack_80 = L"Reps: ";
  uStack_84 = 0x8cc9ad;
  FUN_004282b0(uStack_d4._2_2_,&local_ec);
  uStack_84 = local_ec;
  pwStack_88 = L"\r\n   ";
  pwStack_8c = L"Lapses: ";
  uStack_90 = 0x8cc9cf;
  FUN_004282b0((uint)local_d0 & 0xffff,&local_f0);
  uStack_90 = local_f0;
  pwStack_94 = L"\r\n   ";
  pwStack_98 = L"Interval: ";
  uStack_9c = 0x8cc9f1;
  FUN_004282b0(local_d0._2_2_,&local_f4);
  uStack_9c = local_f4;
  pwStack_a0 = L"\r\n   ";
  pwStack_a4 = L"Last rep: ";
  uStack_a8 = 0xca0e;
  uStack_a6 = 0x8c;
  FUN_0040d87c(&uStack_3c,0xd);
  uStack_a8 = 0xca21;
  uStack_a6 = 0x8c;
  FUN_00961998(*(undefined4 *)PTR_DAT_00ba9c04,(int)(short)local_cc);
  local_34 = (double)fVar5;
  uStack_a8 = (undefined2)((ulonglong)local_34 >> 0x20);
  uStack_a6 = (undefined2)((ulonglong)local_34 >> 0x30);
  uStack_ac = (undefined4)local_34;
  local_b0 = (wchar_t *)0x8cca3e;
  FUN_0042d430(L"dd.mm.yyyy",PTR_DAT_00baa920,&local_38);
  uVar2 = (uint)local_d0._2_2_;
  if (SCARRY4((int)(short)local_cc,uVar2)) {
    uStack_a8 = 0xca55;
    uStack_a6 = 0x8c;
    thunk_FUN_004072dc(uVar2,(int)(short)local_cc + uVar2);
  }
  uStack_a8 = 0xca61;
  uStack_a6 = 0x8c;
  FUN_00961998(*(undefined4 *)PTR_DAT_00ba9c04);
  local_44 = (undefined1  [8])(double)fVar6;
  uStack_a8 = (undefined2)((ulonglong)local_44 >> 0x20);
  uStack_a6 = (undefined2)((ulonglong)local_44 >> 0x30);
  uStack_ac = local_44._0_4_;
  local_b0 = (wchar_t *)0x8cca7e;
  FUN_0042d430(L"dd.mm.yyyy",PTR_DAT_00baa920,&local_48);
  fVar7 = (float10)dVar8;
  local_b0 = SUB104(fVar7,0);
  uStack_ac = (uint)((unkuint10)fVar7 >> 0x20);
  uStack_a8 = (undefined2)((unkuint10)fVar7 >> 0x40);
  pwStack_b4 = (wchar_t *)0x8cca9b;
  FUN_0042bc74(L"0.###",PTR_DAT_00baa920,(int)&local_50 + 4);
  uStack_a8 = 0xcaa6;
  uStack_a6 = 0x8c;
  FUN_0040a340((int)&uStack_c4 + 2);
  local_64 = SUB104(in_ST2,0);
  uStack_60 = (undefined4)((unkuint10)in_ST2 >> 0x20);
  uStack_5c = (undefined2)((unkuint10)in_ST2 >> 0x40);
  uStack_a8 = uStack_5c;
  uStack_ac = uStack_60;
  local_b0 = (wchar_t *)local_64;
  pwStack_b4 = 
  L"痿￈챵偨賌栀촨\x8c痿梼챐\x8c䱨賍＀롵偨賌栀쵤\x8c痿梜챐\x8c薍，\xffff಺";
  uStack_a6 = extraout_var;
  FUN_0042bc74(L"0.###",PTR_DAT_00baa920,&local_68);
  uStack_a8 = (undefined2)uStack_3c;
  uStack_a6 = (undefined2)((uint)uStack_3c >> 0x10);
  uStack_ac = local_38;
  local_b0 = L"\r\n   ";
  pwStack_b4 = L"Next rep: ";
  uStack_b8 = local_48;
  local_bc = L"\r\n   ";
  pwStack_c0 = L"UF: ";
  uStack_c4 = local_50._4_4_;
  pwStack_c8 = L"\r\n   ";
  local_cc = L"AF: ";
  local_d0 = local_68;
  uStack_d4 = L"\r\n   ";
  uStack_d8 = 0x8ccb0a;
  FUN_0040d87c(&local_f8,0xc);
  uStack_d8 = 0x8ccb15;
  FUN_00b2e42c(local_f8);
  pwVar1 = local_cc;
  *in_FS_OFFSET = uStack_d4;
  local_cc = L"閍Ｆ\xffff䖋\xe8fcᤜ";
  local_d0 = (undefined1 *)0x8ccb2a;
  FUN_0040c5c8(&local_68,uStack_d4,pwVar1);
  local_d0 = (undefined1 *)0x8ccb32;
  FUN_0040c5c8((int)&local_50 + 4);
  local_d0 = (undefined1 *)0x8ccb3a;
  FUN_0040c5c8(&local_48);
  local_d0 = (undefined1 *)0x8ccb42;
  FUN_0040c5c8(&uStack_3c);
  local_d0 = (undefined1 *)0x8ccb4a;
  FUN_0040c5c8(&local_38);
  return;
}



// === FUN_008cd6a4 @ 008cd6a4 size:2029 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008cd6a4(int param_1,wchar_t *param_2,undefined4 param_3,double param_4)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int extraout_EDX;
  wchar_t *extraout_EDX_00;
  wchar_t *extraout_EDX_01;
  wchar_t *pwVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  undefined4 unaff_EDI;
  undefined4 *puVar9;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar10;
  byte bVar11;
  bool bVar12;
  float10 in_ST0;
  float10 fVar13;
  float10 in_ST1;
  undefined1 local_194 [8];
  undefined4 local_18c;
  int *local_188;
  undefined4 local_184;
  int local_180;
  int *local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  wchar_t *local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  short local_128;
  short local_126;
  short local_124;
  short local_122;
  undefined1 local_118 [6];
  undefined1 local_112 [19];
  undefined4 local_ff;
  undefined4 local_be [3];
  short local_b2;
  short local_b0;
  short local_ac;
  undefined4 uStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  wchar_t *pwStack_54;
  wchar_t *pwStack_50;
  wchar_t *pwStack_4c;
  wchar_t *pwStack_48;
  undefined8 local_44;
  wchar_t *pwStack_3c;
  wchar_t *local_38;
  wchar_t *local_34;
  undefined8 local_30;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  wchar_t *local_c;
  int local_8;
  
  bVar11 = 0;
  iVar6 = 0x32;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_1c = (undefined1 *)0x8cd6c4;
  local_c = param_2;
  local_8 = param_1;
  FUN_00410dd0(param_2);
  local_20 = &LAB_008cdedc;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_1c = &stack0xfffffffc;
  if (local_c != (wchar_t *)0x0) {
    local_30 = (double)CONCAT44(&LAB_008cdde6,*in_FS_OFFSET);
    *in_FS_OFFSET = &local_30;
    local_34 = (wchar_t *)0x8cd6f6;
    local_28 = &stack0xfffffffc;
    local_1c = &stack0xfffffffc;
    local_34 = (wchar_t *)FUN_00410d5c(&local_30);
    local_38 = L"LastRepetition";
    pwStack_3c = local_c;
    local_44 = (double)CONCAT44(0x8cd708,(undefined4)local_44);
    (**(code **)(*(int *)local_c + 0x94))();
    local_34 = 
    L"綃Ô൵쀳奚摙ႉᇩ\a贀첅\xfffe\xe8ff\xeee5ﾳ譐푅譐＀桐㻨둉诿첕\xfffe跿\xe445㣨돿跿䚍\xffffꇿ鰄º\x8b喋\xe8fcʻ\b떍ｆ\xffff붍ﻐ\xffffᶹ"
    ;
    FUN_00412078();
    uVar10 = (wchar_t *)local_30 == (wchar_t *)0x0;
    if ((bool)uVar10) {
      *in_FS_OFFSET = 0;
    }
    else {
      local_34 = 
      L"譐푅譐＀桐㻨둉诿첕\xfffe跿\xe445㣨돿跿䚍\xffffꇿ鰄º\x8b喋\xe8fcʻ\b떍ｆ\xffff붍ﻐ\xffffᶹ"
      ;
      local_34 = (wchar_t *)FUN_0040c610(&local_138);
      local_38 = (wchar_t *)local_30;
      pwStack_3c = 
      L"㻨둉诿첕\xfffe跿\xe445㣨돿跿䚍\xffffꇿ鰄º\x8b喋\xe8fcʻ\b떍ｆ\xffff붍ﻐ\xffffᶹ"
      ;
      (**(code **)(*(int *)(wchar_t *)local_30 + 0x68))();
      local_34 = 
      L"開ﻌ\xffff䖍\xe8e4Ｘﾳ趍ｆ\xffffҡ몜謀謀ﱕ믨ࠂ贀䚵\xffff跿킽\xfffe맿\x1d";
      FUN_00412078();
      local_34 = L"趍ｆ\xffffҡ몜謀謀ﱕ믨ࠂ贀䚵\xffff跿킽\xfffe맿\x1d";
      FUN_0040d680(&local_20,local_138);
      local_34 = L"떍ｆ\xffff붍ﻐ\xffffᶹ";
      FUN_0094da18(*(undefined4 *)PTR_DAT_00ba9c04,local_8,local_be);
      puVar8 = local_be;
      puVar9 = &local_134;
      for (iVar6 = 0x1d; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      *(undefined2 *)puVar9 = *(undefined2 *)puVar8;
      local_34 = L"ݵ쀳䖉\xebd0謞\xe445볨┸茀\xf8c4᳝鬤ҡ몜謀\xe800⡵\b䖉臐큽翿";
      FUN_0040d98c(local_20,&DAT_008cdf24);
      if ((bool)uVar10) {
        local_34 = (wchar_t *)0x0;
        in_ST1 = in_ST0;
      }
      else {
        local_34 = (wchar_t *)0x8cd790;
        FUN_00b2104c(local_20);
        local_30 = (double)in_ST0;
        pwStack_3c = L"䖉臐큽翿";
        local_34 = (wchar_t *)FUN_00950018(*(undefined4 *)PTR_DAT_00ba9c04);
      }
      pwVar7 = local_34;
      if (0x7fff < (int)local_34) {
        local_34 = L"趋ﻄ\xffff薍ﻈ\xffff㒺賟\xe800!ﾴ薋ﻈ\xffff᫨◡윀큅\x01";
        FUN_004282b0(pwVar7,&local_140);
        local_34 = L"薋ﻈ\xffff᫨◡윀큅\x01";
        FUN_0040d7f4(&local_13c,L"Wrong last repetition date. Day #",local_140);
        local_34 = L"䗇ǐ";
        FUN_00b2b8f8(local_13c);
        local_34 = (wchar_t *)0x1;
      }
      uVar3 = (int)local_34 + 0x8000;
      if (0xffff < uVar3) {
        local_34 = L"\x05ﾀ替薉ﻢ\xffffҡ몜謀\xe800㵇\b뼏\xe295\xfffe㯿࿂ꚍ";
        uVar3 = thunk_FUN_004072dc();
      }
      local_122 = (short)uVar3 + -0x8000;
      local_34 = L"뼏\xe295\xfffe㯿࿂ꚍ";
      iVar6 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
      if (iVar6 < local_122) {
        local_34 = L"Last repetition executed in the future!\r\nChanging from: ";
        local_38 = 
        L"뗿ﺼ\xffffѨ賠栀\xe018\x8cҡ몜謀\xe800㴅\b閍ﺸ\xffff웨හ＀뢵\xfffe棿\xe030\x8cѨ賠贀뒕\xfffe诿ﱅ⳨ෂ＀뒵\xfffe跿삅\xfffe뫿\b"
        ;
        FUN_009a9d24((int)local_122,&local_148);
        local_38 = local_148;
        pwStack_3c = L"\r\n";
        local_44._4_4_ = L"To: ";
        local_44._0_4_ = 0x8cd853;
        uVar4 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
        local_44._0_4_ = 0x8cd85e;
        FUN_009a9d24(uVar4,&local_14c);
        local_44 = (double)CONCAT44(local_44._4_4_,local_14c);
        pwStack_48 = L" (today)";
        pwStack_4c = L"\r\n";
        pwStack_50 = L"뗿ﺴ\xffff薍ﻀ\xffffࢺ";
        FUN_009a9aa8(local_8,&local_150);
        local_30 = (double)CONCAT44(local_30._4_4_,local_150);
        pwStack_54 = L"薋ﻀ\xffff寨◠ꄀ鰄º\x8b꿨࠼Ԁ耀";
        FUN_0040d87c(&local_144,8);
        pwStack_54 = L"ҡ몜謀\xe800㲯\b\x05\x80㴀\xffff";
        FUN_00b2b8f8(local_144);
        pwStack_54 = L"\x05\x80㴀\xffff";
        iVar6 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
        uVar3 = iVar6 + 0x8000;
        if (0xffff < uVar3) {
          pwStack_54 = 
          L"\x05ﾀ替薉ﻢ\xffff警墅\xffff替蔻ﻢ\xffff൵쀳奚摙ႉ仩\x05ꄀ鰄º\x8b槨࠼ༀ閿ｘ\xffff숻䙵荦劽\xffffÿ㱶閍ﺬ\xffff䖋\xe8fc솖\r趋ﺬ\xffff薍ﺰ\xffff傺賠\xe800ﻌﾳ薋ﺰ\xffff엨◟㌀嫀奙襤\xe910ӱ"
          ;
          uVar3 = thunk_FUN_004072dc();
        }
        local_122 = (short)uVar3 + -0x8000;
      }
      if (local_ac == local_122) {
        *in_FS_OFFSET = (wchar_t *)local_30;
      }
      else {
        local_34 = (wchar_t *)0x8cd8ef;
        iVar6 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
        if ((iVar6 == local_ac) && (local_b2 != 0)) {
          local_34 = 
          L"趋ﺬ\xffff薍ﺰ\xffff傺賠\xe800ﻌﾳ薋ﺰ\xffff엨◟㌀嫀奙襤\xe910ӱ";
          FUN_009a9aa8(local_8,&local_158);
          local_34 = L"薋ﺰ\xffff엨◟㌀嫀奙襤\xe910ӱ";
          FUN_0040d7f4(&local_154,L"Ignoring element repeated today\r\n",local_158);
          local_34 = 
          L"쀳奚摙ႉ\xf1e9\x04ꄀ鰄º\x8b೨࠼ༀ閿ﻢ\xffff퀫ձ惨돋菿㻺㱾閍ﺤ\xffff䖋\xe8fc섹\r趋ﺤ\xffff薍ﺨ\xffffꂺ賠\xe800﹯ﾳ薋ﺨ\xffff棨◟㌀嫀奙襤\xe910Ҕ"
          ;
          FUN_00b2b8f8(local_154);
          *in_FS_OFFSET = (wchar_t *)local_30;
        }
        else {
          local_34 = (wchar_t *)0x8cd94c;
          iVar5 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
          iVar6 = local_122 - iVar5;
          if (SBORROW4((int)local_122,iVar5)) {
            local_34 = (wchar_t *)0x8cd95c;
            thunk_FUN_004072dc();
            iVar6 = extraout_EDX;
          }
          if (iVar6 < 0x3f) {
            if (((double)_DAT_008ce0fc <= param_4 * (double)_DAT_008ce0f8) ||
               (DAT_00ca4f64 == '\x06')) {
              local_ff = 0;
              local_34 = L"桐\xe184\x8c䖋僸\x8b郿\x94";
              local_34 = (wchar_t *)FUN_00410d5c(&local_30);
              local_38 = L"Interval";
              pwStack_3c = local_c;
              local_44 = (double)CONCAT44(0x8cda19,(undefined4)local_44);
              (**(code **)(*(int *)local_c + 0x94))();
              local_44 = (double)CONCAT44(0x8cda1e,(undefined4)local_44);
              FUN_00412078();
              if ((wchar_t *)local_30 == (wchar_t *)0x0) {
                local_44 = (double)CONCAT44(0x8cda5b,(undefined4)local_44);
                FUN_0040c9f0(&stack0xffffffec,&DAT_008ce1a4);
              }
              else {
                local_44 = (double)CONCAT44(0x8cda2f,(undefined4)local_44);
                uVar4 = FUN_0040c610(&local_16c);
                local_44 = (double)CONCAT44(uVar4,(wchar_t *)local_30);
                pwStack_48 = (wchar_t *)0x8cda39;
                (**(code **)(*(int *)(wchar_t *)local_30 + 0x68))();
                local_44 = (double)CONCAT44(0x8cda3e,(undefined4)local_44);
                FUN_00412078();
                local_44 = (double)CONCAT44(0x8cda4c,(undefined4)local_44);
                FUN_0040d680(&stack0xffffffec,local_16c);
              }
              local_44 = (double)CONCAT44(0x8cda63,(undefined4)local_44);
              uVar3 = FUN_00428648(unaff_ESI);
              if (0xffff < uVar3) {
                local_44 = (double)CONCAT44(0x8cda6f,(undefined4)local_44);
                uVar3 = thunk_FUN_004072dc();
              }
              local_124 = (short)uVar3;
              local_44 = (double)CONCAT44(0x8cda7e,(undefined4)local_44);
              uVar4 = FUN_00410d5c(&local_30);
              local_44 = (double)CONCAT44(uVar4,L"Lapses");
              pwStack_48 = local_c;
              pwStack_4c = (wchar_t *)0x8cda90;
              (**(code **)(*(int *)local_c + 0x94))();
              pwStack_4c = 
              L"綃Ô⩴薍ﺔ\xffff櫨돫僿䖋僔\x8b僿\xe868䗃ﾴ開ﺔ\xffff䖍\xe8e8﮽ﾳ෫䖍뫨\xe1a4\x8cỨ돯诿\xe845滨떫㷿\xffff"
              ;
              FUN_00412078();
              if ((wchar_t *)local_30 == (wchar_t *)0x0) {
                pwStack_4c = (wchar_t *)0x8cdad2;
                FUN_0040c9f0(&local_1c,&DAT_008ce1a4);
              }
              else {
                pwStack_4c = (wchar_t *)0x8cdaa6;
                pwStack_4c = (wchar_t *)FUN_0040c610(&local_170);
                pwStack_50 = (wchar_t *)local_30;
                pwStack_54 = (wchar_t *)0x8cdab0;
                (**(code **)(*(int *)(wchar_t *)local_30 + 0x68))();
                pwStack_4c = 
                L"開ﺔ\xffff䖍\xe8e8﮽ﾳ෫䖍뫨\xe1a4\x8cỨ돯诿\xe845滨떫㷿\xffff";
                FUN_00412078();
                pwStack_4c = L"෫䖍뫨\xe1a4\x8cỨ돯诿\xe845滨떫㷿\xffff";
                FUN_0040d680(&local_1c,local_170);
              }
              pwStack_4c = (wchar_t *)0x8cdada;
              uVar3 = FUN_00428648(local_1c);
              if (0xffff < uVar3) {
                pwStack_4c = (wchar_t *)0x8cdae6;
                uVar3 = thunk_FUN_004072dc();
              }
              local_126 = (short)uVar3;
              pwStack_4c = L"桐\xe1c0\x8c䖋僸\x8b郿\x94";
              pwStack_4c = (wchar_t *)FUN_00410d5c(&local_30);
              pwStack_50 = L"Repetitions";
              pwStack_54 = local_c;
              uStack_58 = 0x8cdb07;
              (**(code **)(*(int *)local_c + 0x94))();
              uStack_58 = 0x8cdb0c;
              FUN_00412078();
              uStack_58 = 0x8cdb17;
              uStack_58 = FUN_0040c610(&local_174);
              piStack_5c = (int *)(wchar_t *)local_30;
              uStack_60 = 0x8cdb21;
              (**(code **)(*(int *)(wchar_t *)local_30 + 0x68))();
              local_34 = (wchar_t *)0x8cdb26;
              FUN_00412078();
              local_34 = (wchar_t *)0x8cdb34;
              FUN_0040d680(&stack0xffffffe8,local_174);
              local_34 = (wchar_t *)0x8cdb3c;
              uVar3 = FUN_00428648(unaff_EDI);
              if (0xffff < uVar3) {
                local_34 = (wchar_t *)0x8cdb48;
                uVar3 = thunk_FUN_004072dc();
              }
              local_128 = (short)uVar3;
              if ((local_b2 == local_128) && (local_b0 == local_126)) {
                *in_FS_OFFSET = (wchar_t *)local_30;
              }
              else {
                local_34 = L"赐袅\xfffe\xe8ff㇉ﾴ桐\xe1dc\x8c䖋僸\x8b郿\x94";
                local_34 = (wchar_t *)FUN_0040c610(&local_178);
                local_38 = L"桐\xe1dc\x8c䖋僸\x8b郿\x94";
                local_38 = (wchar_t *)FUN_00410d5c(&local_17c);
                pwStack_3c = L"AFactor";
                local_44._4_4_ = local_c;
                local_44._0_4_ = 0x8cdba5;
                (**(code **)(*(int *)local_c + 0x94))();
                local_44._0_4_ = 0x8cdbaa;
                FUN_00412078();
                local_44 = (double)CONCAT44(local_44._4_4_,local_17c);
                pwStack_48 = (wchar_t *)0x8cdbb6;
                (**(code **)(*local_17c + 0x68))();
                pwStack_48 = 
                L"開ﺌ\xffff䖍\xe8e0覆ﾳᖋ鵀º䖋\xe8e0앙ﾳ川鯀䂡몝茀8๴䗇췀쳌쟌쑅쳌㿴䗝跀\xec85\xfffe\xe8ff읯ﾳ쀳䖉觀쑅薍ﺄ\xffff䣨됱僿\xf068賡謀\xf845譐＀钐"
                ;
                FUN_00412078();
                pwStack_48 = 
                L"ᖋ鵀º䖋\xe8e0앙ﾳ川鯀䂡몝茀8๴䗇췀쳌쟌쑅쳌㿴䗝跀\xec85\xfffe\xe8ff읯ﾳ쀳䖉觀쑅薍ﺄ\xffff䣨됱僿\xf068賡謀\xf845譐＀钐"
                ;
                FUN_0040d680(&local_24,local_178);
                pwStack_48 = 
                L"川鯀䂡몝茀8๴䗇췀쳌쟌쑅쳌㿴䗝跀\xec85\xfffe\xe8ff읯ﾳ쀳䖉觀쑅薍ﺄ\xffff䣨됱僿\xf068賡謀\xf845譐＀钐"
                ;
                FUN_0040a130(local_24,PTR_DAT_00ba9d40);
                local_44 = (double)in_ST1;
                if (*(int *)PTR_DAT_00ba9d40 != 0) {
                  local_44 = 1.3;
                }
                fVar13 = (float10)local_44;
                pwStack_48 = L"쀳䖉觀쑅薍ﺄ\xffff䣨됱僿\xf068賡謀\xf845譐＀钐";
                FUN_0040a370(local_118);
                local_44 = 0.0;
                pwStack_48 = L"桐\xe1f0\x8c䖋僸\x8b郿\x94";
                pwStack_48 = (wchar_t *)FUN_00410d5c(&local_180);
                pwStack_4c = L"UFactor";
                pwStack_50 = local_c;
                pwStack_54 = 
                L"䷨둄菿蒽\xfffeÿ彴薍ﺀ\xffff퇨돩僿薍ﹼ\xffffᇨ됱僿\xf068賡謀\xf845譐＀钐"
                ;
                (**(code **)(*(int *)local_c + 0x94))();
                local_34 = 
                L"붃ﺄ\xffff琀赟肅\xfffe\xe8ff\xe9d1ﾳ赐粅\xfffe\xe8ffㄑﾴ桐\xe1f0\x8c䖋僸\x8b郿\x94"
                ;
                FUN_00412078();
                if (local_180 != 0) {
                  local_34 = L"赐粅\xfffe\xe8ffㄑﾴ桐\xe1f0\x8c䖋僸\x8b郿\x94";
                  local_34 = (wchar_t *)FUN_0040c610(&local_184);
                  local_38 = L"桐\xe1f0\x8c䖋僸\x8b郿\x94";
                  local_38 = (wchar_t *)FUN_00410d5c(&local_188);
                  pwStack_3c = L"UFactor";
                  local_44._4_4_ = local_c;
                  local_44._0_4_ = 0x8cdc5d;
                  (**(code **)(*(int *)local_c + 0x94))();
                  local_44._0_4_ = 0x8cdc62;
                  FUN_00412078();
                  local_44 = (double)CONCAT44(local_44._4_4_,local_188);
                  pwStack_48 = (wchar_t *)0x8cdc6e;
                  (**(code **)(*local_188 + 0x68))();
                  local_34 = (wchar_t *)0x8cdc73;
                  FUN_00412078();
                  local_34 = (wchar_t *)0x8cdc81;
                  FUN_0040d680(&local_28,local_184);
                  local_34 = (wchar_t *)0x8cdc8f;
                  FUN_0040a130(local_28,PTR_DAT_00ba9d40);
                  local_44 = (double)fVar13;
                }
                if (local_44 == 0.0) {
                  if (local_128 == 1) {
                    local_44 = 1.0;
                  }
                  else {
                    local_44 = 1.1;
                  }
                }
                local_34 = 
                L"荦\xe0bd\xfffeÿݴ藆ﻑ\xffff贁킍\xfffe跿䚕\xffff诿ﱅᏨ￧蓿痀㌍嫀奙襤\xe910į"
                ;
                FUN_0040a370(local_112);
                if (local_124 != 0) {
                  local_134._1_1_ = 1;
                }
                local_34 = L"삄൵쀳奚摙ႉ⿩\x01贀푅勨됰僿Ѩ賢謀\xf845譐＀钐";
                cVar2 = FUN_008cc404(local_8,local_be,&local_134);
                if (cVar2 == '\0') {
                  *in_FS_OFFSET = (wchar_t *)local_30;
                }
                else {
                  local_34 = L"桐\xe204\x8c䖋僸\x8b郿\x94";
                  local_34 = (wchar_t *)FUN_00410d5c(&local_30);
                  local_38 = L"RepHist";
                  pwStack_3c = local_c;
                  local_44 = (double)CONCAT44(0x8cdd1c,(undefined4)local_44);
                  (**(code **)(*(int *)local_c + 0x94))();
                  local_34 = L"綃Ô萏\x9f";
                  FUN_00412078();
                  if ((wchar_t *)local_30 != (wchar_t *)0x0) {
                    local_34 = (wchar_t *)0x8cdd36;
                    local_34 = (wchar_t *)FUN_0040c610(&local_18c);
                    local_38 = (wchar_t *)local_30;
                    pwStack_3c = (wchar_t *)0x8cdd40;
                    (**(code **)(*(int *)(wchar_t *)local_30 + 0x68))();
                    local_34 = (wchar_t *)0x8cdd45;
                    FUN_00412078();
                    local_34 = (wchar_t *)0x8cdd53;
                    FUN_0040d680((int)&local_30 + 4,local_18c);
                    local_34 = (wchar_t *)0x8cdd5d;
                    FUN_00b1fff8((int)&local_30 + 4,0);
                    local_34 = (wchar_t *)0x8cdd6f;
                    FUN_00b21f30((int)&local_30 + 4,L"<br>",&DAT_008ce004);
                    local_34 = (wchar_t *)0x8cdd7a;
                    FUN_008aa824(local_30._4_4_,&local_38);
                    if (local_38 != (wchar_t *)0x0) {
                      iVar6 = 0;
                      if ((local_38 == (wchar_t *)0x0) ||
                         (pwVar7 = local_38, *(int *)(local_38 + -2) == 0)) {
                        local_34 = (wchar_t *)0x8cdd93;
                        iVar6 = thunk_FUN_004072dc();
                        pwVar7 = extraout_EDX_00;
                      }
                      if (*(int *)((int)pwVar7 + iVar6 * 0x27) != local_8) {
                        iVar6 = 0;
                        if ((local_38 == (wchar_t *)0x0) ||
                           (pwVar7 = local_38, *(int *)(local_38 + -2) == 0)) {
                          local_34 = (wchar_t *)0x8cddb1;
                          iVar6 = thunk_FUN_004072dc();
                          pwVar7 = extraout_EDX_01;
                        }
                        local_34 = (wchar_t *)0x8cddc2;
                        FUN_0089c2bc(&local_38,*(undefined4 *)((int)pwVar7 + iVar6 * 0x27),local_8);
                      }
                      local_34 = L"䗆Ƿփ佼Ê焁\xe805웠ﾳ쀳奚摙ႉ䯫㗩돜ǿ";
                      FUN_008abea4(local_38);
                    }
                  }
                  bVar12 = SCARRY4(DAT_00ca4f7c,1);
                  DAT_00ca4f7c = DAT_00ca4f7c + 1;
                  if (bVar12) {
                    local_34 = L"쀳奚摙ႉ䯫㗩돜ǿ";
                    thunk_FUN_004072dc();
                  }
                  *in_FS_OFFSET = (wchar_t *)local_30;
                }
              }
            }
            else {
              local_34 = 
              L"趋ﺜ\xffff薍ﺠ\xffff಺賡\xe800︕ﾳ薋ﺠ\xffff໨◟㌀嫀奙襤\xe910к";
              FUN_009a9aa8(local_8,&local_168);
              local_34 = L"薋ﺠ\xffff໨◟㌀嫀奙襤\xe910к";
              FUN_0040d7f4(&local_164,L"Learning data update skipped due to low text similarity\r\n"
                           ,local_168);
              local_34 = L"쀳奚摙ႉ㫩\x04㌀觀օ\xffff跿푅嗨됳僿葨賡謀\xf845譐＀钐"
              ;
              FUN_00b2b8f8(local_164);
              *in_FS_OFFSET = (wchar_t *)local_30;
            }
          }
          else {
            local_34 = 
            L"趋ﺤ\xffff薍ﺨ\xffffꂺ賠\xe800﹯ﾳ薋ﺨ\xffff棨◟㌀嫀奙襤\xe910Ҕ";
            FUN_009a9aa8(local_8,&local_160);
            local_34 = L"薋ﺨ\xffff棨◟㌀嫀奙襤\xe910Ҕ";
            FUN_0040d7f4(&local_15c,L"Ignoring repetitions older than 2 months\r\n",local_160);
            local_34 = (wchar_t *)0x8cd990;
            FUN_00b2b8f8(local_15c);
            *in_FS_OFFSET = (wchar_t *)local_30;
          }
        }
      }
    }
  }
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_008cdee6;
  local_20 = (undefined1 *)0x8cde4e;
  FUN_0040c628(local_194,2,puVar1);
  local_20 = (undefined1 *)0x8cde59;
  FUN_0040c610(&local_18c);
  local_20 = (undefined1 *)0x8cde64;
  FUN_00410d5c(&local_188);
  local_20 = (undefined1 *)0x8cde6f;
  FUN_0040c610(&local_184);
  local_20 = (undefined1 *)0x8cde85;
  FUN_0040e048(&local_180,PTR_LAB_0064388c,2);
  local_20 = (undefined1 *)0x8cde95;
  FUN_0040c688(&local_178,4);
  local_20 = (undefined1 *)0x8cdea5;
  FUN_0040c628(&local_168,0xc);
  local_20 = (undefined1 *)0x8cdeb0;
  FUN_0040c610(&local_138);
  local_20 = (undefined1 *)0x8cdebe;
  FUN_0040f468(&local_38,PTR_DAT_0089b2f8);
  local_20 = (undefined1 *)0x8cdec6;
  FUN_00410d5c(&local_30);
  local_20 = (undefined1 *)0x8cded3;
  FUN_0040c628((int)&local_30 + 4,7);
  local_20 = (undefined1 *)0x8cdedb;
  FUN_00410d5c(&local_c);
  return;
}



// === FUN_00938448 @ 00938448 size:898 ===

void FUN_00938448(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined2 uVar4;
  undefined2 extraout_var;
  char *pcVar5;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  char local_92;
  char local_91;
  ushort local_86;
  ushort local_84;
  ushort local_82;
  short local_80;
  undefined1 local_76 [20];
  undefined1 local_62;
  int local_18;
  double local_14;
  byte local_a;
  char local_9;
  int local_8;
  
  puStack_b0 = &stack0xfffffffc;
  pcVar5 = &local_92;
  for (iVar3 = 0x1d; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar5 = *param_2;
    param_2 = param_2 + 1;
    pcVar5 = pcVar5 + 4;
  }
  *(undefined2 *)pcVar5 = *(undefined2 *)param_2;
  local_9 = (char)param_3;
  puStack_b4 = &LAB_009387c3;
  uStack_b8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_b8;
  if (local_91 == '\x01') {
    if ((DAT_00ca60d5 == '\0') || (-1 < local_9)) {
      local_18 = param_1 + 0x86;
      piVar1 = (int *)(param_1 + 0x8a);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + (int)local_9;
      puVar2 = &stack0xfffffffc;
      local_8 = param_1;
      if (SCARRY4(iVar3,(int)local_9)) {
        thunk_FUN_004072dc();
        param_3 = extraout_ECX;
        puVar2 = puStack_b0;
      }
      puStack_b0 = puVar2;
      uVar4 = (undefined2)((uint)param_3 >> 0x10);
      if (local_92 == '\x01') {
        piVar1 = (int *)(local_18 + 0x264);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + (int)local_9;
        if (SCARRY4(iVar3,(int)local_9)) {
          thunk_FUN_004072dc();
          uVar4 = extraout_var;
        }
      }
      if (local_9 < '\0') {
        FUN_0093648c(local_8,local_82,0);
      }
      else {
        FUN_0093648c(local_8,0,CONCAT22(uVar4,local_82));
      }
      local_14 = (double)in_ST0;
      if (local_92 == '\x01') {
        FUN_0040a340(local_18 + 0xd);
        in_ST1 = in_ST1 + (float10)local_14;
        FUN_0040a370(local_18 + 0xd);
        FUN_009480dc(local_8,local_18 + 0x32,local_9,(double)local_86);
        FUN_009480dc(local_8,local_18 + 0x3e,local_9,(double)local_82);
        FUN_009480dc(local_8,local_18 + 0x26,local_9,(double)local_80);
        FUN_009480dc(local_8,local_18 + 0x38,local_9,(double)local_84);
        FUN_0040a340(local_76);
        FUN_009480dc(local_8,local_18 + 0x44,local_9,(double)in_ST1);
        local_a = FUN_00951490(DAT_00ca60d0,local_62);
        FUN_009480dc(local_8,local_18 + 0x2c,local_9,(double)local_a);
      }
      else {
        FUN_0040a340(local_18 + 0x268);
        in_ST1 = in_ST1 + (float10)local_14;
        FUN_0040a370(local_18 + 0x268);
        FUN_00948228(local_8,local_18 + 0x280,local_9,(double)local_86);
        FUN_00948228(local_8,local_18 + 0x28c,local_9,(double)local_82);
        FUN_00948228(local_8,local_18 + 0x298,local_9,(double)local_80);
        FUN_0040a340(local_76);
        FUN_00948228(local_8,local_18 + 0x292,local_9,(double)in_ST1);
      }
      FUN_0094a09c(local_8,&local_92,local_9);
      FUN_00b19fb4(L"Item Burden",local_18 + 0xd);
      FUN_00b19fb4(L"Topic Burden",local_18 + 0x268);
      FUN_00b19fb4(L"Lapses",local_18 + 0x38);
      if (DAT_00ca60d5 == '\0') {
        FUN_00949e08(local_8,&local_92,local_9);
      }
      *in_FS_OFFSET = uStack_b8;
    }
    else {
      *in_FS_OFFSET = uStack_b8;
    }
  }
  else {
    *in_FS_OFFSET = uStack_b8;
  }
  return;
}



// === FUN_0093a350 @ 0093a350 size:268 ===

void FUN_0093a350(undefined4 param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 in_stack_ffffffb0;
  int *piVar3;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined *local_24;
  wchar_t *local_20;
  wchar_t *local_1c;
  wchar_t *local_18;
  undefined4 local_14;
  int local_10;
  undefined1 local_9;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_30 = 0;
  local_10 = 0;
  local_14 = 0;
  uVar2 = 1;
  puStack_38 = &LAB_0093a45c;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_20 = L"Create a &backup copy and continue";
  local_1c = L"&Continue";
  local_18 = L"&Quit the upgrade";
  piVar3 = &local_10;
  local_2c = &DAT_0093a51c;
  local_28 = &DAT_0093a52c;
  local_24 = &DAT_0093a53c;
  local_8 = param_1;
  FUN_00af7b60(L"For safety of your data you should make a backup copy:",&local_2c,2,piVar3,2,
               &local_20);
  FUN_0040d98c(local_10,&DAT_0093a53c);
  if (((bool)uVar2) || (uVar2 = local_10 == 0, (bool)uVar2)) {
    FUN_009a33b0();
  }
  local_9 = 0;
  FUN_0040d98c(local_10,&DAT_0093a51c);
  if ((bool)uVar2) {
    FUN_0093488c(local_8);
    FUN_0094c0b8(local_8,&local_14);
    in_stack_ffffffb0 = 0;
    FUN_0040d7f4(&local_30,local_14,L"-OldFormat",0,0);
    cVar1 = FUN_0099fd00(*(undefined4 *)PTR_DAT_00ba9740,local_14,local_30);
    if (cVar1 == '\0') {
      local_9 = 1;
    }
    FUN_0094217c(local_8,&local_14,0);
  }
  *in_FS_OFFSET = in_stack_ffffffb0;
  FUN_0040c5c8(&local_30,in_stack_ffffffb0,piVar3,&LAB_0093a463);
  FUN_0040c628(&local_14,2);
  return;
}



// === FUN_0093c0ac @ 0093c0ac size:497 ===

void FUN_0093c0ac(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwStackY_58;
  wchar_t *in_stack_ffffffb0;
  wchar_t *local_34;
  wchar_t *local_30;
  wchar_t *local_2c;
  wchar_t *local_28;
  wchar_t *local_24;
  undefined1 *local_20;
  wchar_t *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined1 local_9;
  int local_8;
  
  local_10 = &stack0xfffffffc;
  iVar3 = 6;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_14 = &LAB_0093c29d;
  local_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_18;
  local_9 = 1;
  local_8 = param_1;
  if (*(byte *)(param_1 + 0x92) < 0x12) {
    local_1c = L"SuperMemo 18 can only upgrade SuperMemo 16/17 collections\r\nUpgrades from ";
    local_20 = (undefined1 *)0x93c0f2;
    local_10 = &stack0xfffffffc;
    FUN_009aa410(*(undefined1 *)(param_1 + 0x92),&local_14);
    local_20 = local_14;
    local_24 = L" are not supported";
    local_28 = L"\r\n";
    local_2c = L"Please download SuperMemo 16 (Trial or Light) to upgrade older collections";
    local_30 = L"\r\n";
    local_34 = L"Write to ";
    FUN_00b0eb74(L"moni",&local_18);
    FUN_0040d87c(&local_10,9);
    FUN_00b2e42c(local_10);
  }
  else {
    puVar1 = &stack0xfffffffc;
    if (*(byte *)(param_1 + 0x92) < 0x16) {
      local_1c = L"Old collection format detected!\r\nCollection: ";
      local_20 = (undefined1 *)0x93c15d;
      FUN_0094c0b8(param_1,&local_20);
      local_24 = L"\r\n";
      local_28 = L"Current SuperMemo: Build=";
      local_2c = L"18.05";
      local_30 = L" released ";
      local_34 = L"Oct 29, 2020";
      FUN_009aa410(*(undefined1 *)(local_8 + 0x92),&local_24);
      FUN_009aa410(0x16,&local_28);
      in_stack_ffffffb0 = L"The upgrade operation is irreversible!";
      pwStackY_58 = L"Do you want to continue?";
      FUN_0040d87c(&local_1c,0x10);
      iVar3 = FUN_00b2b3d4(local_1c);
      if (iVar3 != 6) {
        FUN_009922c0(*(undefined4 *)PTR_DAT_00ba9740);
        FUN_009a33b0();
      }
      *PTR_DAT_00baae48 = 0;
      *PTR_DAT_00ba98a0 = 0;
      cVar2 = FUN_0093a350(local_8);
      puVar1 = local_10;
      if (cVar2 != '\0') {
        FUN_009a33b0();
        puVar1 = local_10;
      }
    }
    local_10 = puVar1;
    if (*(byte *)(local_8 + 0x92) < 0x17) {
      local_9 = 0;
    }
    else {
      FUN_0094c0b8(local_8,&local_30);
      FUN_00b185e0(&local_34);
      FUN_0040d87c(&local_2c,7);
      FUN_00b2f5c4(local_2c,L"To open this collection you need a newer version of SuperMemo");
      FUN_009922c0(*(undefined4 *)PTR_DAT_00ba9740);
      FUN_00b20eb8(L"http://www.super-memory.com/english/which.htm");
      FUN_009a33b0();
    }
  }
  *in_FS_OFFSET = pwStackY_58;
  FUN_0040c628(&local_34,10,in_stack_ffffffb0,&LAB_0093c2a4);
  return;
}



// === FUN_0093e838 @ 0093e838 size:368 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0093e838(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined8 local_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_28 = 0;
  local_24 = 0;
  puStack_30 = (undefined1 *)0x93e858;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040c6ac(param_3);
  puStack_34 = &LAB_0093e9af;
  puStack_38 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_38;
  puStack_3c = (undefined1 *)0x93e871;
  puStack_30 = &stack0xfffffffc;
  FUN_0040a130(local_10,&local_20);
  local_1c = (double)in_ST0;
  if (local_1c == 1.0) {
    local_1c = 1.01;
  }
  if (local_1c == 0.0) {
    local_1c = 1.01;
  }
  if (((local_20 == 0) && (_DAT_0093e9bc <= (float10)local_1c)) &&
     (local_1c <= (double)_DAT_0093e9c8)) {
    puStack_3c = (undefined1 *)local_1c._4_4_;
    puStack_40 = (undefined1 *)(undefined4)local_1c;
    uStack_44 = 0x93e98c;
    FUN_0093b898(DAT_00ca60d0,local_c);
    puVar1 = puStack_38;
    *in_FS_OFFSET = puStack_40;
    puStack_38 = &LAB_0093e9b6;
    puStack_3c = (undefined1 *)0x93e9a6;
    FUN_0040c628(&local_28,2,puVar1);
    puStack_3c = (undefined1 *)0x93e9ae;
    FUN_0040c5c8(&local_10);
    return;
  }
  if ((float10)local_1c < _DAT_0093e9bc) {
    local_1c = 1.01;
  }
  if ((double)_DAT_0093e9cc < local_1c) {
    local_1c = 2.0;
  }
  puStack_40 = &LAB_0093e972;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  fVar3 = (float10)local_1c;
  puStack_3c = &stack0xfffffffc;
  FUN_0042bc74(L"0.###",PTR_DAT_00baa920,&local_24,SUB104(fVar3,0),(int)((unkuint10)fVar3 >> 0x20),
               (short)((unkuint10)fVar3 >> 0x40));
  uVar2 = local_24;
  uVar6 = 0xe9f4;
  puVar4 = &DAT_0093ea24;
  uVar5 = local_10;
  FUN_0040d87c(&local_28,5);
  FUN_00b2b8f8(local_28);
  *in_FS_OFFSET = uVar2;
  FUN_0040c5c8(&local_24,uVar2,puVar4,0x93e979,uVar5,uVar6);
  return;
}



// === FUN_0093f000 @ 0093f000 size:691 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0093f000(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *in_FS_OFFSET;
  float10 in_ST0;
  wchar_t *in_stack_ffffff90;
  undefined4 *puStack_64;
  undefined *in_stack_ffffffa4;
  int iStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  int local_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  char local_9;
  int local_8;
  
  puStack_38 = &stack0xfffffffc;
  puStack_44 = &stack0xfffffffc;
  local_20[0] = 0;
  local_24 = 0;
  local_28 = (undefined4 *)0x0;
  puStack_3c = &LAB_0093f2d9;
  local_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_40;
  puStack_48 = &LAB_0093f298;
  iStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_4c;
  local_9 = param_2;
  local_8 = param_1;
  if (*PTR_DAT_00baae48 == '\0') {
    *in_FS_OFFSET = iStack_4c;
    puStack_44 = &stack0xfffffffc;
    puStack_38 = &stack0xfffffffc;
  }
  else {
    uVar1 = FUN_00951558(param_1);
    if (uVar1 == *(ushort *)(local_8 + 0x442)) {
      *in_FS_OFFSET = iStack_4c;
    }
    else {
      if ((local_9 == '\0') && (0 < *(int *)(local_8 + 0x8a))) {
        FUN_0042c3e8();
        if ((float10)_DAT_0093f2e8 < in_ST0 - (float10)*(double *)(local_8 + 0x449)) {
          if (*PTR_DAT_00baad5c != '\0') {
            FUN_0042c3e8();
            FUN_00407bcc();
            FUN_004282d8(&local_24);
            in_stack_ffffffa4 = &DAT_0093f364;
            iVar2 = FUN_00951558(DAT_00ca60d0);
            iVar3 = iVar2 - (uint)*(ushort *)(local_8 + 0x9b);
            if (SBORROW4(iVar2,(uint)*(ushort *)(local_8 + 0x9b))) {
              iVar3 = thunk_FUN_004072dc(iVar3);
            }
            FUN_004282b0(iVar3,&local_28);
            puStack_64 = local_28;
            in_stack_ffffff90 = L"Auto-postpone has been turned off to protect your data";
            FUN_0040d87c(local_20,9);
            FUN_00b2e42c(local_20[0]);
          }
          *PTR_DAT_00baae48 = 0;
          *in_FS_OFFSET = (int)in_stack_ffffff90;
          goto LAB_0093f2be;
        }
      }
      uVar1 = FUN_00951558(DAT_00ca60d0);
      if (0xffff < uVar1) {
        uVar1 = thunk_FUN_004072dc();
      }
      *(short *)(DAT_00ca60d0 + 0x442) = (short)uVar1;
      (**(code **)(**(int **)(DAT_00ca60d0 + 0x66) + 0x10))
                (*(int **)(DAT_00ca60d0 + 0x66),L"Learning",L"Last Auto-postpone",
                 *(undefined2 *)(DAT_00ca60d0 + 0x442));
      if (*(int *)(*(int *)(DAT_00ca60d0 + 0x7a) + 5) < 0xb) {
        *in_FS_OFFSET = 0x93f192;
      }
      else {
        FUN_00b2daa8(L"Auto postponing repetitions");
        local_10 = FUN_00965380(PTR_LAB_009635dc,1,0,0);
        in_stack_ffffffa4 = (undefined *)0x0;
        local_14 = FUN_00965380(PTR_LAB_009635dc,1,0);
        local_18 = FUN_00965380(PTR_LAB_009635dc,1,0,0);
        puStack_64 = &local_18;
        uVar1 = (uint)*(ushort *)(local_8 + 0x9b);
        iVar2 = FUN_00951558(local_8);
        uVar4 = iVar2 - 1;
        if (SBORROW4(iVar2,1)) {
          uVar4 = thunk_FUN_004072dc();
        }
        if (0xffff < uVar4) {
          uVar4 = thunk_FUN_004072dc();
        }
        iVar2 = 0;
        FUN_00960ee8(local_8,&local_10,&local_14,0,uVar4,uVar1);
        if (10 < *(int *)(local_10 + 5)) {
          FUN_00834088(PTR_DAT_00ba9854,1,L"Default");
          PTR_DAT_00ba9854[0xe] = 0;
          FUN_0040c5c8(PTR_DAT_00ba9854 + 7);
          FUN_008363b8(local_10,PTR_DAT_00ba9854);
        }
        FUN_0040a7a0(local_10);
        FUN_0040a7a0(local_14);
        FUN_0040a7a0(local_18);
        FUN_00b2daa8(0);
        *in_FS_OFFSET = iVar2;
      }
    }
  }
LAB_0093f2be:
  *in_FS_OFFSET = (int)puStack_64;
  FUN_0040c628(&local_28,3,in_stack_ffffffa4,&LAB_0093f2e0);
  return;
}



// === FUN_0093f890 @ 0093f890 size:472 ===

void FUN_0093f890(undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  char cVar1;
  uint uVar2;
  int *in_FS_OFFSET;
  bool bVar3;
  int *piVar4;
  wchar_t **ppwVar5;
  int iStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined *local_4c;
  undefined *local_48;
  undefined *local_44;
  undefined *local_40;
  undefined *local_3c;
  wchar_t *local_38;
  wchar_t *local_34;
  wchar_t *local_30;
  wchar_t *local_2c;
  wchar_t *local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  undefined1 local_11;
  undefined2 *local_10;
  undefined2 *local_c;
  undefined4 local_8;
  
  puStack_54 = &stack0xfffffffc;
  local_18 = 0;
  puStack_58 = &LAB_0093fa68;
  iStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_5c;
  *param_2 = 1;
  *param_3 = 0;
  local_11 = 0;
  local_38 = L"Default optimum interval";
  local_34 = L"Fixed interval";
  local_30 = L"Intervals in a chosen range";
  local_2c = L"One day interval";
  local_28 = L"Cancel";
  ppwVar5 = &local_38;
  piVar4 = &local_18;
  local_4c = &DAT_0093fb80;
  local_48 = &DAT_0093fb90;
  local_44 = &DAT_0093fba0;
  local_40 = &DAT_0093fbb0;
  local_3c = &DAT_0093fbc0;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00af7b60(L"Which interval should be chosen in scheduling elements?",&local_4c,4,piVar4,4);
  bVar3 = local_18 == 0;
  if (!bVar3) {
    FUN_0040d98c(local_18,&DAT_0093fbc0);
    if (!bVar3) {
      local_11 = 1;
      FUN_0040d98c(local_18,&DAT_0093fb80);
      if (!bVar3) {
        FUN_0040d98c(local_18,&DAT_0093fbb0);
        if (bVar3) {
          *local_c = 1;
          *local_10 = 1;
        }
        else {
          FUN_0040d98c(local_18,&DAT_0093fb90);
          if (bVar3) {
            local_24 = 7;
            cVar1 = FUN_006fd420(&local_24,1,0x5b4);
            if (cVar1 == '\0') {
              local_11 = 0;
            }
            else {
              uVar2 = local_24;
              if (0xffff < local_24) {
                uVar2 = thunk_FUN_004072dc();
              }
              *local_c = (short)uVar2;
              uVar2 = local_24;
              if (0xffff < local_24) {
                uVar2 = thunk_FUN_004072dc();
              }
              *local_10 = (short)uVar2;
            }
          }
          else {
            FUN_0040d98c(local_18,&DAT_0093fba0);
            if (bVar3) {
              local_1c = 1;
              local_20 = 10;
              cVar1 = FUN_00b2bcb0(&local_1c,&local_20,1,0x16d);
              if (cVar1 == '\0') {
                local_11 = 0;
              }
              else {
                uVar2 = local_1c;
                if (0xffff < local_1c) {
                  uVar2 = thunk_FUN_004072dc();
                }
                *local_c = (short)uVar2;
                uVar2 = local_20;
                if (0xffff < local_20) {
                  uVar2 = thunk_FUN_004072dc();
                }
                *local_10 = (short)uVar2;
              }
            }
          }
        }
      }
    }
  }
  *in_FS_OFFSET = (int)piVar4;
  FUN_0040c5c8(&local_18,piVar4,ppwVar5,&LAB_0093fa6f);
  return;
}



// === FUN_009445a8 @ 009445a8 size:427 ===

void FUN_009445a8(int param_1)

{
  undefined4 uVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10 [2];
  int local_8;
  
  local_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  local_10[0] = 4;
  do {
    local_10[0] = local_10[0] + -1;
  } while (local_10[0] != 0);
  local_24 = &LAB_00944779;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  puStack_30 = &LAB_00944738;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = param_1;
  FUN_0094c0b8(param_1,local_10,0,1);
  FUN_0040d79c(local_10,L"\\info\\repetitions.dat");
  uVar1 = FUN_00965380(PTR_LAB_009635dc,1,local_10[0]);
  *(undefined4 *)(local_8 + 0x76) = uVar1;
  uVar2 = 1;
  FUN_0094c0b8(local_8,&stack0xffffffec);
  FUN_0040d79c(&stack0xffffffec,L"\\info\\intact.dat");
  uVar1 = FUN_00965380(PTR_LAB_009635dc,1,unaff_EBX);
  *(undefined4 *)(local_8 + 0x6a) = uVar1;
  uVar1 = 1;
  FUN_0094c0b8(local_8,&stack0xffffffe8);
  FUN_0040d79c(&stack0xffffffe8,L"\\info\\drill.dat");
  uVar1 = FUN_00965380(PTR_LAB_009635dc,1,unaff_ESI,uVar1);
  *(undefined4 *)(local_8 + 0x6e) = uVar1;
  FUN_0093cdac(local_8,&stack0xffffffe4);
  uVar1 = FUN_00965380(PTR_LAB_009635dc,1,unaff_EDI);
  *(undefined4 *)(local_8 + 0x72) = uVar1;
  uVar1 = 0;
  FUN_0094c0b8(local_8,&local_20);
  FUN_0040d79c(&local_20,L"\\info\\Outstanding.sub");
  uVar1 = FUN_00965380(PTR_LAB_009635dc,1,local_20,uVar1);
  *(undefined4 *)(local_8 + 0x7a) = uVar1;
  uVar1 = 0;
  FUN_0094c0b8(local_8,&local_24);
  FUN_0040d79c(&local_24,L"\\info\\OutstandingItems.sub");
  uVar1 = FUN_00965380(PTR_LAB_009635dc,1,local_24,uVar1);
  *(undefined4 *)(local_8 + 0x7e) = uVar1;
  FUN_0094c0b8(local_8,&local_28);
  FUN_0040d79c(&local_28,L"\\info\\OutstandingTopics.sub");
  uVar1 = FUN_00965380(PTR_LAB_009635dc,1,local_28);
  *(undefined4 *)(local_8 + 0x82) = uVar1;
  uVar1 = FUN_00844cbc(PTR_DAT_00844808,1);
  *(undefined4 *)(local_8 + 0x4da) = uVar1;
  *in_FS_OFFSET = 0;
  *in_FS_OFFSET = 1;
  FUN_0040c628(&local_28,7,uVar2,&LAB_00944780);
  return;
}



// === FUN_0094a914 @ 0094a914 size:548 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0094a914(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  undefined4 local_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 local_118 [260];
  undefined4 local_14;
  ushort local_e;
  byte local_b;
  char local_a;
  char local_9;
  int local_8;
  
  puStack_134 = &stack0xfffffffc;
  puStack_140 = &stack0xfffffffc;
  local_120 = 0;
  local_124 = 0;
  local_11c = 0;
  local_14 = 0;
  local_a = (char)param_3;
  local_9 = (char)param_2;
  puStack_138 = &LAB_0094ab5e;
  local_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_13c;
  puStack_144 = &LAB_0094ab12;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  bVar1 = 1.0 < (double)CONCAT44(param_5,param_4);
  local_8 = param_1;
  if ((1.0 <= (double)CONCAT44(param_5,param_4)) ||
     (bVar1 = _DAT_0094ab70 < (float10)(double)CONCAT44(param_5,param_4),
     _DAT_0094ab70 == (float10)(double)CONCAT44(param_5,param_4))) {
    local_b = FUN_008b0994(CONCAT11(bVar1,local_a),param_2,param_3,param_4,(short)param_5);
    if (local_a == '\x01') {
      uVar3 = local_b - 1;
      if (0x13 < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      local_e = *(ushort *)(local_8 + 0xda + (uVar3 + 1) * 2);
    }
    else {
      uVar3 = local_b - 1;
      if (0x13 < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      local_e = *(ushort *)(local_8 + 0x322 + (uVar3 + 1) * 2);
    }
    if ((local_9 < '\0') && (local_e == 0)) {
      if (*(int *)(local_8 + 0x86) < 0xffff) {
        FUN_004282b0(local_b,&local_124);
        FUN_0040d7f4(&local_120,L"Wrong A-Factor distribution in category #",local_124);
        FUN_00b2b8f8(local_120);
      }
      *in_FS_OFFSET = uStack_148;
    }
    else if ((local_9 < '\x01') || (local_e != 0xffff)) {
      uVar3 = (uint)local_e + (int)local_9;
      if (SCARRY4((uint)local_e,(int)local_9)) {
        uVar3 = thunk_FUN_004072dc();
      }
      if (0xffff < uVar3) {
        uVar3 = thunk_FUN_004072dc();
      }
      local_e = (ushort)uVar3;
      if (local_a == '\x01') {
        uVar3 = local_b - 1;
        if (0x13 < uVar3) {
          uVar3 = thunk_FUN_004072dc();
        }
        *(ushort *)(local_8 + 0xda + (uVar3 + 1) * 2) = local_e;
      }
      else {
        uVar3 = local_b - 1;
        if (0x13 < uVar3) {
          uVar3 = thunk_FUN_004072dc();
        }
        *(ushort *)(local_8 + 0x322 + (uVar3 + 1) * 2) = local_e;
      }
      *in_FS_OFFSET = uStack_148;
    }
    else {
      *in_FS_OFFSET = uStack_148;
    }
  }
  else {
    fVar4 = (float10)(double)CONCAT44(param_5,param_4) / (float10)_DAT_0094ab7c;
    uVar5 = SUB104(fVar4,0);
    puStack_140 = &stack0xfffffffc;
    puStack_134 = &stack0xfffffffc;
    FUN_00409cb4(0,3,local_118,uVar5,(int)((unkuint10)fVar4 >> 0x20),
                 (short)((unkuint10)fVar4 >> 0x40));
    FUN_0040d710(&local_14,local_118);
    FUN_0040d7f4(&local_11c,L"Wrong AFactor in UpdateAFActorDistribution: ",local_14);
    FUN_00b2b8f8(local_11c);
    *in_FS_OFFSET = uVar5;
  }
  puVar2 = puStack_134;
  *in_FS_OFFSET = local_13c;
  puStack_134 = &LAB_0094ab65;
  puStack_138 = (undefined1 *)0x94ab55;
  FUN_0040c628(&local_124,3,puVar2);
  puStack_138 = (undefined1 *)0x94ab5d;
  FUN_0040c5c8(&local_14);
  return;
}



// === FUN_0094b188 @ 0094b188 size:371 ===

void FUN_0094b188(int param_1,ushort param_2,char param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  char local_b;
  ushort local_a;
  int local_8;
  
  puStack_28 = &stack0xfffffffc;
  puStack_34 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_0094b33f;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  puStack_38 = &LAB_0094b2e0;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_a = param_2;
  if (0xe < param_2) {
    local_a = 0xe;
  }
  local_10 = param_1 + 0x86;
  uVar4 = local_a + 1;
  puVar1 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  local_b = param_3;
  local_8 = param_1;
  if (SCARRY4((uint)local_a,1)) {
    uVar4 = thunk_FUN_004072dc();
    puVar1 = puStack_34;
    puVar2 = puStack_28;
  }
  puStack_28 = puVar2;
  puStack_34 = puVar1;
  if (0xffff < uVar4) {
    uVar4 = thunk_FUN_004072dc();
  }
  *(short *)PTR_DAT_00baa064 = (short)uVar4;
  if (local_b < '\0') {
    uVar4 = *(ushort *)PTR_DAT_00baa064 - 1;
    if (0xe < uVar4) {
      uVar4 = thunk_FUN_004072dc();
    }
    if (*(short *)(local_10 + 0x96 + (uVar4 + 1) * 2) == 0) {
      if (*(int *)(local_8 + 0x86) < 0xffff) {
        FUN_00b2b8f8(L"Wrong lapses distribution");
      }
      *in_FS_OFFSET = uStack_3c;
      goto LAB_0094b324;
    }
  }
  if ('\0' < local_b) {
    uVar4 = *(ushort *)PTR_DAT_00baa064 - 1;
    if (0xe < uVar4) {
      uVar4 = thunk_FUN_004072dc();
    }
    if (*(short *)(local_10 + 0x96 + (uVar4 + 1) * 2) == -1) {
      *in_FS_OFFSET = uStack_3c;
      goto LAB_0094b324;
    }
  }
  uVar4 = *(ushort *)PTR_DAT_00baa064 - 1;
  if (0xe < uVar4) {
    uVar4 = thunk_FUN_004072dc();
  }
  uVar4 = (uint)*(ushort *)(local_10 + 0x96 + (uVar4 + 1) * 2);
  uVar5 = uVar4 + (int)local_b;
  if (SCARRY4(uVar4,(int)local_b)) {
    uVar5 = thunk_FUN_004072dc();
  }
  if (0xffff < uVar5) {
    uVar5 = thunk_FUN_004072dc();
  }
  uVar3 = (undefined2)uVar5;
  uVar4 = *(ushort *)PTR_DAT_00baa064 - 1;
  if (0xe < uVar4) {
    uVar3 = thunk_FUN_004072dc();
    uVar4 = extraout_EDX;
  }
  *(undefined2 *)(local_10 + 0x96 + (uVar4 + 1) * 2) = uVar3;
  *in_FS_OFFSET = uStack_3c;
LAB_0094b324:
  puVar1 = puStack_28;
  *in_FS_OFFSET = local_30;
  puStack_28 = &LAB_0094b346;
  puStack_2c = (undefined1 *)0x94b33e;
  FUN_0040c628(&local_18,2,puVar1);
  return;
}



// === FUN_0094c91c @ 0094c91c size:425 ===

void FUN_0094c91c(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *in_FS_OFFSET;
  float10 fVar6;
  int iStack_b4;
  undefined1 *puStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  undefined4 local_94;
  undefined1 local_8e;
  char local_8d;
  ushort local_7e;
  short local_7c;
  int local_18;
  undefined2 local_12;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_98 = &stack0xfffffffc;
  local_94 = 0;
  local_c = 0;
  puStack_9c = &LAB_0094cacc;
  puStack_a0 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_a0;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x8a) != 0) {
    iStack_a4 = 0x94c95f;
    FUN_0094c0b8(param_1,&local_94);
    iStack_a4 = 0x94c972;
    FUN_0040d7f4(&local_c,local_94,L"\\info\\repetitions.dat");
    iStack_a4 = 0x94c97a;
    cVar2 = FUN_00b0cb34(local_c);
    puVar1 = puStack_98;
    if (cVar2 == '\0') {
      iStack_a4 = 0x94c996;
      uVar3 = FUN_0061c7ac(PTR_PTR_LAB_00b279c4,1,*(undefined4 *)PTR_DAT_00ba982c);
      *(undefined4 *)PTR_DAT_00baa8f8 = uVar3;
      iStack_a4 = 0x94c9a8;
      iStack_a8 = FUN_0094f468(DAT_00ca60d0);
      iStack_a4 = iStack_a8 >> 0x1f;
      uStack_ac._0_2_ = 0xc9bc;
      uStack_ac._2_2_ = 0x94;
      FUN_00b29314(*(undefined4 *)PTR_DAT_00baa8f8,L"Creating repetitions schedule");
      puStack_b0 = &LAB_0094caa4;
      iStack_b4 = *in_FS_OFFSET;
      *in_FS_OFFSET = (int)&iStack_b4;
      uStack_ac = &stack0xfffffffc;
      iVar4 = FUN_0094f468(local_8);
      if (0 < iVar4) {
        local_10 = 1;
        local_18 = iVar4;
        do {
          if (local_10 % 100 == 0) {
            cVar2 = FUN_00b2a0ec(*(undefined4 *)PTR_DAT_00baa8f8);
            if (cVar2 != '\0') {
              FUN_0040bd7c();
              puVar1 = puStack_98;
              goto LAB_0094caab;
            }
            fVar6 = (float10)local_10;
            iStack_b4 = SUB104(fVar6,0);
            puStack_b0 = (undefined1 *)((unkuint10)fVar6 >> 0x20);
            uStack_ac._0_2_ = (undefined2)((unkuint10)fVar6 >> 0x40);
            FUN_00b2a9a4(*(undefined4 *)PTR_DAT_00baa8f8);
          }
          FUN_0094da18(local_8,local_10,&local_8e);
          if (local_8d == '\x01') {
            uVar5 = (int)local_7c + (uint)local_7e;
            if (SCARRY4((int)local_7c,(uint)local_7e)) {
              uVar5 = thunk_FUN_004072dc();
            }
            if (0xffff < uVar5) {
              uVar5 = thunk_FUN_004072dc();
            }
            local_12 = (undefined2)uVar5;
            FUN_00964be8(*(undefined4 *)(local_8 + 0x76),local_10,uVar5 & 0xffff);
          }
          local_10 = local_10 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      FUN_00964c24(*(undefined4 *)(local_8 + 0x76),local_c);
      puVar1 = uStack_ac;
      *in_FS_OFFSET = iStack_b4;
      uStack_ac._0_2_ = 0xcaab;
      uStack_ac._2_2_ = 0x94;
      puStack_b0 = (undefined1 *)0x94caa3;
      FUN_00b2a8d8(*(undefined4 *)PTR_DAT_00baa8f8,iStack_b4,puVar1);
      return;
    }
  }
LAB_0094caab:
  puStack_98 = puVar1;
  puVar1 = puStack_a0;
  *in_FS_OFFSET = iStack_a8;
  puStack_a0 = &LAB_0094cad3;
  iStack_a4 = 0x94cac3;
  FUN_0040c5c8(&local_94,iStack_a8,puVar1);
  iStack_a4 = 0x94cacb;
  FUN_0040c5c8(&local_c);
  return;
}



// === FUN_00951744 @ 00951744 size:3070 ===

void FUN_00951744(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  float10 in_ST0;
  undefined4 uVar8;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  undefined4 local_128;
  undefined1 local_124 [256];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14 [2];
  int *local_c;
  int local_8;
  
  puStack_138 = &stack0xfffffffc;
  puStack_144 = &stack0xfffffffc;
  local_128 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_14[0] = 0;
  local_18 = 0;
  puStack_13c = &LAB_00952368;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  puStack_148 = &LAB_0095231c;
  uStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14c;
  local_8 = param_1;
  FUN_00b1ae44(*(undefined4 *)(param_1 + 0x66),*(undefined4 *)(param_1 + 0x451),L"Defaults",
               L"Question Font");
  FUN_00b1ae44(*(undefined4 *)(local_8 + 0x66),*(undefined4 *)(local_8 + 0x455),L"Defaults",
               L"Answer Font");
  FUN_00b1ae44(*(undefined4 *)(local_8 + 0x66),
               *(undefined4 *)(*(int *)(*(int *)PTR_DAT_00baa6c4 + 0x6e7) + 0x74),L"Defaults",
               L"Contents Font");
  FUN_00b1ae44(*(undefined4 *)(local_8 + 0x66),*(undefined4 *)(local_8 + 0x45d),L"Defaults",
               L"Highlighter Font");
  local_c = *(int **)(local_8 + 0x66);
  FUN_009390f4(local_8);
  (**(code **)(*local_c + 0x10))(local_c,L"Learning",L"Sound Mode",*PTR_DAT_00baadcc);
  (**(code **)(*local_c + 0x10))
            (local_c,L"Learning",L"Success Sound",*(undefined4 *)PTR_DAT_00ba9798);
  (**(code **)(*local_c + 0x10))
            (local_c,L"Learning",L"Failure Sound",*(undefined4 *)PTR_DAT_00baa4cc);
  (**(code **)(*local_c + 0x18))(local_c,L"Learning",L"Hunt SemiLeeches",*PTR_DAT_00baacc0);
  (**(code **)(*local_c + 0x18))(local_c,L"Learning",L"Randomize drill",*PTR_DAT_00baa10c);
  (**(code **)(*local_c + 0x18))(local_c,L"Learning",L"Skip drill",*PTR_DAT_00baaa58);
  (**(code **)(*local_c + 0x10))
            (local_c,L"Learning",L"Branch root",*(undefined4 *)(PTR_DAT_00ba9e34 + 0x14));
  (**(code **)(*local_c + 8))(local_c,L"Learning",L"Subset title",*(undefined4 *)PTR_DAT_00ba9e34);
  (**(code **)(*local_c + 8))
            (local_c,L"Learning",L"Subset date",*(undefined4 *)(PTR_DAT_00ba9e34 + 8));
  (**(code **)(*local_c + 8))
            (local_c,L"Learning",L"Subset file",*(undefined4 *)(PTR_DAT_00ba9e34 + 4));
  (**(code **)(*local_c + 8))
            (local_c,L"Learning",L"Highlight string",*(undefined4 *)(PTR_DAT_00ba9e34 + 0xc));
  (**(code **)(*local_c + 8))
            (local_c,L"Learning",L"Highlight string bis",*(undefined4 *)(PTR_DAT_00ba9e34 + 0x10));
  (**(code **)(*local_c + 0x10))(local_c,L"Learning",L"Learning mode",PTR_DAT_00ba9e34[0x30]);
  (**(code **)(*local_c + 0x10))(local_c,L"Learning",L"Leech mode",*PTR_DAT_00ba9b44);
  (**(code **)(*local_c + 0x3c))
            (local_c,L"Learning",L"Item Sorting",*(undefined4 *)PTR_DAT_00ba9d9c,
             *(undefined4 *)(PTR_DAT_00ba9d9c + 4));
  (**(code **)(*local_c + 0x3c))
            (local_c,L"Learning",L"Topic Sorting",*(undefined4 *)PTR_DAT_00baa4ac,
             *(undefined4 *)(PTR_DAT_00baa4ac + 4));
  (**(code **)(*local_c + 0x3c))
            (local_c,L"Learning",L"Topic Proportion",*(undefined4 *)PTR_DAT_00baac78,
             *(undefined4 *)(PTR_DAT_00baac78 + 4));
  (**(code **)(*local_c + 0x18))(local_c,L"Learning",L"Auto-sort",*PTR_DAT_00ba98a0);
  (**(code **)(*local_c + 0x18))(local_c,L"Learning",L"Auto-postpone",*PTR_DAT_00baae48);
  (**(code **)(*local_c + 0x10))
            (local_c,L"Learning",L"Last Auto-sort",*(undefined2 *)(local_8 + 0x440));
  (**(code **)(*local_c + 0x10))
            (local_c,L"Learning",L"Last Auto-postpone",*(undefined2 *)(local_8 + 0x442));
  (**(code **)(*local_c + 0x10))(local_c,L"Stats",&DAT_009527cc,*(undefined2 *)PTR_DAT_00baaa80);
  (**(code **)(*local_c + 0x3c))
            (local_c,L"Stats",L"Item Burden",*(undefined4 *)PTR_DAT_00baa740,
             *(undefined4 *)(PTR_DAT_00baa740 + 4));
  (**(code **)(*local_c + 0x3c))
            (local_c,L"Stats",L"Topic Burden",*(undefined4 *)PTR_DAT_00baad68,
             *(undefined4 *)(PTR_DAT_00baad68 + 4));
  (**(code **)(*local_c + 0x10))(local_c,L"Stats",L"Repetitions",*(undefined2 *)PTR_DAT_00baab40);
  (**(code **)(*local_c + 0x10))(local_c,L"Stats",L"Lapses",*(undefined2 *)PTR_DAT_00baad0c);
  FUN_0042c3e8();
  *(double *)PTR_DAT_00baa488 =
       (double)((in_ST0 - (float10)*(double *)PTR_DAT_00baa09c) +
               (float10)*(double *)PTR_DAT_00baa488);
  (**(code **)(*local_c + 0x3c))
            (local_c,L"Stats",L"Time",*(undefined4 *)PTR_DAT_00baa488,
             *(undefined4 *)(PTR_DAT_00baa488 + 4));
  (**(code **)(*local_c + 0x3c))
            (local_c,L"Stats",L"RepTime",*(undefined4 *)PTR_DAT_00baaaf8,
             *(undefined4 *)(PTR_DAT_00baaaf8 + 4));
  iVar4 = FUN_0093ce40(local_8,0);
  piVar6 = (int *)(*(int *)(local_8 + 0x6e) + 5);
  iVar5 = iVar4 + *piVar6;
  if (SCARRY4(iVar4,*piVar6)) {
    iVar5 = thunk_FUN_004072dc();
  }
  uVar7 = iVar5 == 0;
  if ((bool)uVar7) {
    *(undefined4 *)PTR_DAT_00baa934 = 0;
  }
  (**(code **)(*local_c + 0x10))
            (local_c,L"Stats",L"Max outstanding",*(undefined4 *)PTR_DAT_00baa934);
  (**(code **)(*local_c + 0x3c))
            (local_c,L"Stats",L"SM16 R",*(undefined4 *)PTR_DAT_00baa030,
             *(undefined4 *)(PTR_DAT_00baa030 + 4));
  (**(code **)(*local_c + 0x3c))
            (local_c,L"Stats",L"SM17 R",*(undefined4 *)PTR_DAT_00baac1c,
             *(undefined4 *)(PTR_DAT_00baac1c + 4));
  (**(code **)(*local_c + 0x3c))
            (local_c,L"Stats",L"SM16 Metric",*(undefined4 *)PTR_DAT_00baaeac,
             *(undefined4 *)(PTR_DAT_00baaeac + 4));
  (**(code **)(*local_c + 0x3c))
            (local_c,L"Stats",L"SM17 Metric",*(undefined4 *)PTR_DAT_00baa38c,
             *(undefined4 *)(PTR_DAT_00baa38c + 4));
  (**(code **)(*local_c + 0x3c))
            (local_c,L"Stats",L"Recall",*(undefined4 *)PTR_DAT_00ba9b6c,
             *(undefined4 *)(PTR_DAT_00ba9b6c + 4));
  (**(code **)(*local_c + 0x10))
            (local_c,L"Stats",L"SM16vSM17 metric cases",*(undefined4 *)PTR_DAT_00baa138);
  (**(code **)(*local_c + 0x18))
            (local_c,L"Navigation",L"Synchronize Element with Contents",
             CONCAT31((int3)((uint)*(int *)(*(int *)PTR_DAT_00baa6c4 + 0x684) >> 8),
                      *(undefined1 *)(*(int *)(*(int *)PTR_DAT_00baa6c4 + 0x684) + 0x1d2)));
  (**(code **)(*local_c + 0x18))
            (local_c,L"Navigation",L"Auto-Scroll Contents",
             CONCAT31((int3)((uint)*(int *)(*(int *)PTR_DAT_00baa6c4 + 0x524) >> 8),
                      *(undefined1 *)(*(int *)(*(int *)PTR_DAT_00baa6c4 + 0x524) + 0x44)));
  (**(code **)(*local_c + 0x18))
            (local_c,L"Navigation",L"Auto-Sort Contents",
             CONCAT31((int3)((uint)*(int *)(*(int *)PTR_DAT_00baa6c4 + 0x528) >> 8),
                      *(undefined1 *)(*(int *)(*(int *)PTR_DAT_00baa6c4 + 0x528) + 0x44)));
  (**(code **)(*local_c + 0x10))
            (local_c,L"Navigation",L"Next Element Mode",
             *(undefined1 *)(*(int *)PTR_DAT_00ba982c + 0xe0c));
  (**(code **)(*local_c + 0x10))
            (local_c,L"Concepts",L"Current Concept",*(undefined4 *)PTR_DAT_00ba9ca0);
  (**(code **)(*local_c + 0x10))
            (local_c,L"Append",L"Current Tasklist",*(undefined4 *)PTR_DAT_00baae1c);
  (**(code **)(*local_c + 0x10))
            (local_c,L"Append",L"Children Limit",*(undefined2 *)PTR_DAT_00ba9de4);
  (**(code **)(*local_c + 0x18))(local_c,L"Access",L"Edit On Click",*PTR_DAT_00ba9ecc);
  (**(code **)(*local_c + 0x18))(local_c,L"Access",L"Compile Lexicon",*PTR_DAT_00ba97e0);
  (**(code **)(*local_c + 0x10))
            (local_c,L"Access",L"Default Element",*(undefined4 *)PTR_DAT_00ba9c9c);
  (**(code **)(*local_c + 0x10))(local_c,L"Access",L"Level",*PTR_DAT_00baad5c);
  (**(code **)(*local_c + 0x3c))
            (local_c,L"Access",L"Last recovery",*(undefined4 *)PTR_DAT_00baa08c,
             *(undefined4 *)(PTR_DAT_00baa08c + 4));
  FUN_0094c0b8(local_8,local_14);
  uVar8 = local_14[0];
  FUN_0094bfc8(local_8,&local_18);
  FUN_0040d98c(uVar8,local_18);
  if ((bool)uVar7) {
    (**(code **)(*local_c + 8))(local_c,L"Storage",L"Secondary",0);
  }
  else {
    FUN_0094bfc8(local_8,&local_1c);
    (**(code **)(*local_c + 8))(local_c,L"Storage",L"Secondary",local_1c);
  }
  (**(code **)(*local_c + 8))(local_c,L"Path",L"Text",*(undefined4 *)(local_8 + 0x25));
  (**(code **)(*local_c + 8))(local_c,L"Path",L"HTML",*(undefined4 *)(local_8 + 0x29));
  (**(code **)(*local_c + 8))(local_c,L"Path",&DAT_00952cf0,*(undefined4 *)(local_8 + 0x2d));
  (**(code **)(*local_c + 8))(local_c,L"Path",L"Subset",*(undefined4 *)(local_8 + 0x31));
  (**(code **)(*local_c + 8))(local_c,L"Path",&DAT_00952d20,*(undefined4 *)(local_8 + 0x35));
  (**(code **)(*local_c + 8))(local_c,L"Path",L"Image",*(undefined4 *)(local_8 + 0x39));
  (**(code **)(*local_c + 8))(local_c,L"Path",L"Sound",*(undefined4 *)(local_8 + 0x3d));
  (**(code **)(*local_c + 8))(local_c,L"Path",L"Video",*(undefined4 *)(local_8 + 0x41));
  (**(code **)(*local_c + 8))(local_c,L"Path",L"Style",*(undefined4 *)(local_8 + 0x45));
  (**(code **)(*local_c + 8))(local_c,L"Path",L"Script",*(undefined4 *)(local_8 + 0x49));
  (**(code **)(*local_c + 8))(local_c,L"Path",L"Binary",*(undefined4 *)(local_8 + 0x4d));
  (**(code **)(*local_c + 8))(local_c,L"Path",L"Imports",*(undefined4 *)(local_8 + 0x51));
  (**(code **)(*local_c + 8))(local_c,L"Path",L"Backup",*(undefined4 *)(local_8 + 0x55));
  (**(code **)(*local_c + 8))(local_c,L"Path",L"Transfer",*(undefined4 *)(local_8 + 0x59));
  (**(code **)(*local_c + 8))(local_c,L"Path",L"Replace filter",*(undefined4 *)(local_8 + 0x19));
  (**(code **)(*local_c + 8))(local_c,L"Path",L"Sleep logs",*(undefined4 *)PTR_DAT_00ba9a24);
  (**(code **)(*local_c + 8))(local_c,L"Path",L"Background picture",*(undefined4 *)PTR_DAT_00baa6b8)
  ;
  (**(code **)(*local_c + 0x18))(local_c,L"Defaults",L"Use HTML font",*PTR_DAT_00ba9d3c);
  cVar3 = FUN_00992f50(*(undefined4 *)PTR_DAT_00ba9740);
  if (cVar3 == '\0') {
    (**(code **)(*local_c + 0x18))
              (local_c,L"Defaults",L"Hints",
               CONCAT31((int3)((uint)*(int *)PTR_DAT_00baa6a4 >> 8),
                        *(undefined1 *)(*(int *)PTR_DAT_00baa6a4 + 0x9c)));
  }
  (**(code **)(*local_c + 0x18))(local_c,L"Defaults",L"Mark status borders",*PTR_DAT_00ba9b34);
  (**(code **)(*local_c + 0x10))(local_c,L"Defaults",L"Text Font",*(undefined4 *)(local_8 + 0x461));
  (**(code **)(*local_c + 0x10))(local_c,L"Defaults",L"Text Align",*PTR_DAT_00baab00);
  (**(code **)(*local_c + 0x18))(local_c,L"Default",L"Use RTL",*PTR_DAT_00baa8fc);
  (**(code **)(*local_c + 0x10))
            (local_c,L"Defaults",L"Text Background Color",*(undefined4 *)(local_8 + 0x465));
  (**(code **)(*local_c + 0x10))(local_c,L"Defaults",L"Background",*(undefined4 *)PTR_DAT_00baa6bc);
  (**(code **)(*local_c + 0x10))
            (local_c,L"Defaults",L"Sound Display At",*(undefined1 *)(local_8 + 0x469));
  (**(code **)(*local_c + 8))(local_c,L"Defaults",L"Author",*(undefined4 *)PTR_DAT_00baa1fc);
  piVar6 = (int *)FUN_005aadb0();
  (**(code **)(*piVar6 + 0x50))(piVar6,&local_20);
  (**(code **)(*local_c + 8))(local_c,L"Defaults",L"Theme",local_20);
  (**(code **)(*local_c + 8))
            (local_c,L"Language",L"System Translation",*(undefined4 *)(local_8 + 0x1d));
  (**(code **)(*local_c + 8))
            (local_c,L"Language",L"Translation Font",*(undefined4 *)(local_8 + 0x61));
  (**(code **)(*local_c + 0x10))
            (local_c,L"Language",L"Translation Font Charset",*(undefined1 *)(local_8 + 0x65));
  (**(code **)(*local_c + 8))
            (local_c,L"Language",L"Phonetic Transcription",*(undefined4 *)(local_8 + 0x21));
  (**(code **)(*local_c + 8))
            (local_c,L"Language",L"Phonetic Transcription Font",*(undefined4 *)(local_8 + 0x5d));
  (**(code **)(*local_c + 0x18))
            (local_c,L"Language",L"Phonetic transcription on mouse move",*PTR_DAT_00baa6f4);
  (**(code **)(*local_c + 0x18))(local_c,L"Language",L"Translation on mouse move",*PTR_DAT_00ba9ef0)
  ;
  (**(code **)(*local_c + 0x18))
            (local_c,L"Language",L"Translate sounds on mouse move",*PTR_DAT_00ba9a40);
  (**(code **)(*local_c + 0x18))
            (local_c,L"Language",L"Phonetic transcription on middle click",*PTR_DAT_00ba9de0);
  (**(code **)(*local_c + 0x18))
            (local_c,L"Language",L"Translation on middle click",*PTR_DAT_00baadec);
  FUN_0040ce44(local_124,*(undefined4 *)PTR_DAT_00baa9c8,0xff);
  FUN_0040d710(&local_24,local_124);
  (**(code **)(*local_c + 8))(local_c,L"Search",L"Last string",local_24);
  FUN_0040ce44(local_124,*(undefined4 *)(PTR_DAT_00baa9c8 + 4),0xff);
  FUN_0040d710(&local_128,local_124);
  (**(code **)(*local_c + 8))(local_c,L"Search",L"Replace string",local_128);
  (**(code **)(*local_c + 8))(local_c,L"Search",L"Last defnition",*(undefined4 *)PTR_DAT_00baa2fc);
  (**(code **)(*local_c + 0x18))(local_c,L"Search",L"Show details",*PTR_DAT_00baabec);
  uVar8 = *(undefined4 *)PTR_DAT_00baa834;
  (**(code **)(*local_c + 8))(local_c,L"E-mail",L"FAQ file");
  (**(code **)(*local_c + 8))(local_c,L"E-mail",L"Mailer",DAT_00ca60e0);
  uVar1 = *(undefined4 *)PTR_DAT_00ba9f50;
  (**(code **)(*local_c + 8))(local_c,L"E-mail",L"Folder");
  (**(code **)(*local_c + 0x18))(local_c,L"E-mail",L"Prefixes",*PTR_DAT_00ba9ff8);
  (**(code **)(*local_c + 0x18))(local_c,L"Security",L"Filter HTML",*PTR_DAT_00baa484);
  uVar7 = *PTR_DAT_00baa250;
  uVar2 = (uint)PTR_DAT_00baa250 >> 8;
  (**(code **)(*local_c + 0x18))(local_c,L"Algorithm",L"SM16vsSM17 log");
  FUN_0094e410(local_8);
  *in_FS_OFFSET = CONCAT31((int3)uVar2,uVar7);
  *in_FS_OFFSET = uVar1;
  FUN_0040c5c8(&local_128,uVar1,uVar8,&LAB_0095236f);
  FUN_0040c628(&local_24,5);
  return;
}



// === FUN_0095ac24 @ 0095ac24 size:584 ===

/* WARNING: Removing unreachable block (ram,0x0095ad37) */

void FUN_0095ac24(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_bc;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  char local_9a;
  char local_99;
  ushort local_8a;
  short local_88;
  int local_20;
  undefined4 local_1c;
  char local_16;
  char local_15;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  puStack_ac = &stack0xfffffffc;
  puStack_b0 = &LAB_0095ae65;
  uStack_b4 = (undefined2)*in_FS_OFFSET;
  uStack_b2 = (undefined2)((uint)*in_FS_OFFSET >> 0x10);
  *in_FS_OFFSET = &uStack_b4;
  local_16 = 400 < *(int *)(*(int *)(PTR_DAT_00ba9e34 + 0x20) + 5);
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  if ((bool)local_16) {
    local_1c = FUN_0061c7ac(PTR_PTR_LAB_00b279c4,1,*(undefined4 *)PTR_DAT_00ba982c);
    uStack_bc = *(undefined4 *)(*(int *)(PTR_DAT_00ba9e34 + 0x20) + 5);
    FUN_00b29314(local_1c,L"Preparing subset repetitions");
    puVar2 = puStack_ac;
  }
  puStack_ac = puVar2;
  if (0 < *(int *)(*(int *)(PTR_DAT_00ba9e34 + 0x20) + 5)) {
    local_c = 1;
    local_20 = *(int *)(*(int *)(PTR_DAT_00ba9e34 + 0x20) + 5);
    do {
      if ((local_16 != '\0') && (local_c % 400 == 0)) {
        uStack_bc = SUB104((float10)local_c,0);
        uStack_b4 = (undefined2)((unkuint10)(float10)local_c >> 0x40);
        FUN_00b2a9a4(local_1c);
        cVar3 = FUN_00b2a0ec(local_1c);
        if (cVar3 != '\0') break;
      }
      local_10 = FUN_0096405c(*(undefined4 *)(PTR_DAT_00ba9e34 + 0x20),local_c);
      FUN_0094da18(local_8,local_10,&local_9a);
      if (local_99 == '\0') {
        FUN_00964514(*(undefined4 *)(PTR_DAT_00ba9e34 + 0x28),local_10,1);
        local_14 = FUN_00964030(*(undefined4 *)(local_8 + 0x6a),local_10);
        FUN_00964514(*(undefined4 *)(PTR_DAT_00ba9e34 + 0x2c),-local_14,1);
      }
      local_15 = local_99 == '\x01';
      if ((((bool)local_15) && ((byte)(PTR_DAT_00ba9e34[0x30] - 5) < 2)) &&
         (iVar4 = FUN_00951558(local_8), iVar4 == local_88)) {
        local_15 = '\0';
      }
      if ((local_15 != '\0') && (1 < (byte)(PTR_DAT_00ba9e34[0x30] - 5))) {
        iVar5 = FUN_00951558(local_8);
        iVar4 = (int)local_88 + (uint)local_8a;
        if (SCARRY4((int)local_88,(uint)local_8a)) {
          iVar5 = thunk_FUN_004072dc();
          iVar4 = extraout_EDX;
        }
        if (iVar5 < iVar4) {
          local_15 = '\0';
        }
      }
      if (((local_15 != '\0') && (PTR_DAT_00ba9e34[0x30] == '\x06')) && (local_9a == '\x01')) {
        local_15 = '\0';
      }
      if (local_15 != '\0') {
        FUN_00964514(*(undefined4 *)(PTR_DAT_00ba9e34 + 0x24),local_10,1);
        if (local_9a == '\x01') {
          piVar1 = (int *)(PTR_DAT_00ba9e34 + 0x18);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + 1;
          if (SCARRY4(iVar4,1)) {
            thunk_FUN_004072dc();
          }
        }
        else {
          piVar1 = (int *)(PTR_DAT_00ba9e34 + 0x1c);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + 1;
          if (SCARRY4(iVar4,1)) {
            thunk_FUN_004072dc();
          }
        }
      }
      local_c = local_c + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  if (1 < *(int *)(*(int *)(PTR_DAT_00ba9e34 + 0x28) + 5)) {
    FUN_00964194(*(undefined4 *)(PTR_DAT_00ba9e34 + 0x28),*(undefined4 *)(PTR_DAT_00ba9e34 + 0x2c));
  }
  if (local_16 != '\0') {
    FUN_00b2a8d8(local_1c);
  }
  *in_FS_OFFSET = uStack_bc;
  return;
}



// === FUN_0095e318 @ 0095e318 size:5002 ===

void FUN_0095e318(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined4 *puVar15;
  undefined4 **ppuVar16;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 *local_1b4;
  wchar_t *local_1b0;
  undefined4 *puStack_1ac;
  wchar_t *pwStack_1a8;
  undefined4 uStack_1a4;
  int **ppiStack_1a0;
  undefined4 uStack_19c;
  undefined4 *puStack_198;
  wchar_t *pwStack_194;
  undefined1 ***pppuStack_190;
  undefined4 uStack_18c;
  undefined4 *puStack_188;
  undefined4 uStack_184;
  undefined1 ***pppuStack_180;
  undefined4 uStack_17c;
  undefined4 *puStack_178;
  undefined4 uStack_174;
  undefined1 **ppuStack_170;
  undefined4 uStack_16c;
  undefined4 *puStack_168;
  undefined4 uStack_164;
  undefined1 **ppuStack_160;
  undefined4 uStack_15c;
  undefined4 *puStack_158;
  undefined4 uStack_154;
  undefined4 *puStack_150;
  undefined4 uStack_14c;
  undefined4 *puStack_148;
  undefined4 uStack_144;
  undefined4 *puStack_140;
  undefined4 uStack_13c;
  undefined4 *puStack_138;
  undefined4 uStack_134;
  undefined4 *puStack_130;
  undefined4 uStack_12c;
  undefined4 *puStack_128;
  undefined4 uStack_124;
  undefined4 *puStack_120;
  undefined4 uStack_11c;
  undefined4 *puStack_118;
  undefined4 uStack_114;
  undefined4 *puStack_110;
  wchar_t *pwStack_10c;
  int *piStack_108;
  wchar_t *pwStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int *local_a0;
  undefined4 local_9c;
  undefined1 **local_98;
  undefined4 local_94;
  undefined1 **local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined4 local_84;
  undefined1 *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  wchar_t *local_4c;
  undefined4 local_48;
  wchar_t *local_44;
  undefined4 local_40;
  wchar_t *local_3c;
  undefined4 local_38;
  wchar_t *local_34;
  int local_30;
  undefined8 local_2c;
  int local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  
  local_1c = &stack0xfffffffc;
  iVar7 = 0x3a;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_20 = &LAB_0095f6c8;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  local_2c = (double)CONCAT44(&stack0xfffffffc,&LAB_0095f651);
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_30;
  local_34 = L"Question Font";
  local_38 = *(undefined4 *)(*(int *)PTR_DAT_00ba9740 + 0x74);
  local_3c = 
  L"ⱨ闷ꄀ靀º\x8b䂋側䖋诼喐\x04謀ﱅ䂋륦\xf70c\x95\xe1e8ᯇ栀\xf750\x95䂡몗謀謀瑀ꅐꛄº\x8b肋ۧ"
  ;
  FUN_00b1ab7c(*(undefined4 *)(param_1 + 0x66),*(undefined4 *)(param_1 + 0x451),L"Defaults");
  local_3c = L"Answer Font";
  local_40 = *(undefined4 *)(*(int *)PTR_DAT_00ba9740 + 0x74);
  local_44 = 
  L"偨闷ꄀ靀º\x8b䂋側쒡몦謀謀\xe780\x06謀瑐䖋诼晀ಹ闷\xe800잱\x1b䂡몗謀謀瑐䖋诼嶀\x04謀（ࡑ䖋诼嶀\x04먀ÿ"
  ;
  FUN_00b1ab7c(*(undefined4 *)(param_1 + 0x66),*(undefined4 *)(param_1 + 0x455),L"Defaults");
  local_44 = L"Contents Font";
  local_48 = *(undefined4 *)(*(int *)PTR_DAT_00ba9740 + 0x74);
  local_4c = L"䂡몗謀謀瑐䖋诼嶀\x04謀（ࡑ䖋诼嶀\x04먀ÿ";
  FUN_00b1ab7c(*(undefined4 *)(param_1 + 0x66),
               *(undefined4 *)(*(int *)(*(int *)PTR_DAT_00baa6c4 + 0x6e7) + 0x74),L"Defaults");
  local_4c = L"䖋诼嶀\x04먀ÿ";
  (**(code **)(**(int **)(param_1 + 0x45d) + 8))
            (*(int **)(param_1 + 0x45d),*(undefined4 *)(*(int *)PTR_DAT_00ba9740 + 0x74));
  local_4c = L"䖋诼嶀\x04言氕闷\xe800紺ﾻ籨闷謀ﱅ肋ѝ";
  FUN_00515ce4(*(undefined4 *)(param_1 + 0x45d),0xff);
  local_4c = L"籨闷謀ﱅ肋ѝ";
  FUN_00516144(*(undefined4 *)(param_1 + 0x45d),DAT_0095f76c);
  local_4c = L"Highlighter Font";
  local_50 = *(undefined4 *)(param_1 + 0x45d);
  local_54 = 0x95e432;
  FUN_00b1ab7c(*(undefined4 *)(param_1 + 0x66),*(undefined4 *)(param_1 + 0x45d),L"Defaults");
  piVar1 = *(int **)(param_1 + 0x66);
  local_54 = 0x95e443;
  FUN_00938ef0(param_1);
  local_54 = 0;
  local_58 = 0x95e457;
  uVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Learning",L"Sound Mode");
  *PTR_DAT_00baadcc = uVar3;
  local_58 = *(undefined4 *)PTR_DAT_00ba9798;
  local_5c = 0x95e479;
  uVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Learning",L"Success Sound");
  *(undefined4 *)PTR_DAT_00ba9798 = uVar5;
  local_5c = *(undefined4 *)PTR_DAT_00baa4cc;
  local_60 = 0x95e49b;
  uVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Learning",L"Failure Sound");
  *(undefined4 *)PTR_DAT_00baa4cc = uVar5;
  local_60 = 1;
  local_64 = 0x95e4b7;
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Learning",L"Randomize drill");
  *PTR_DAT_00baa10c = uVar3;
  local_64 = 0;
  local_68 = 0x95e4d3;
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Learning",L"Skip drill");
  *PTR_DAT_00baaa58 = uVar3;
  local_68 = CONCAT31((int3)((uint)PTR_DAT_00ba98a0 >> 8),*PTR_DAT_00ba98a0);
  local_6c = 0x95e4f5;
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Learning",L"Auto-sort");
  *PTR_DAT_00ba98a0 = uVar3;
  local_6c = CONCAT31((int3)((uint)PTR_DAT_00baae48 >> 8),*PTR_DAT_00baae48);
  local_70 = 0x95e517;
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Learning",L"Auto-postpone");
  *PTR_DAT_00baae48 = uVar3;
  local_70 = 0;
  local_74 = 0x95e533;
  uVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Learning",L"Last Auto-sort");
  if (0xffff < uVar6) {
    local_74 = 0x95e53f;
    uVar6 = thunk_FUN_004072dc();
  }
  *(short *)(param_1 + 0x440) = (short)uVar6;
  local_74 = 0;
  local_78 = 0x95e55d;
  uVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Learning",L"Last Auto-postpone");
  if (0xffff < uVar6) {
    local_78 = 0x95e569;
    uVar6 = thunk_FUN_004072dc();
  }
  *(short *)(param_1 + 0x442) = (short)uVar6;
  local_78 = 0;
  local_7c = 0x95e587;
  uVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Learning",L"Branch root");
  *(undefined4 *)(PTR_DAT_00ba9e34 + 0x14) = uVar5;
  local_7c = 0;
  local_80 = &stack0xffffffec;
  local_84 = 0x95e5a8;
  (**(code **)(*piVar1 + 4))(piVar1,L"Learning",L"Subset title");
  local_84 = 0x95e5b5;
  FUN_0040c9a8(PTR_DAT_00ba9e34,unaff_ESI);
  local_84 = 0;
  local_88 = &stack0xffffffe8;
  local_8c = 0x95e5cd;
  (**(code **)(*piVar1 + 4))(piVar1,L"Learning",L"Subset date");
  local_8c = 0x95e5dd;
  FUN_0040c9a8(PTR_DAT_00ba9e34 + 8,unaff_EDI);
  local_8c = 0;
  local_90 = &local_1c;
  local_94 = 0x95e5f5;
  (**(code **)(*piVar1 + 4))(piVar1,L"Learning",L"Subset file");
  local_94 = 0x95e605;
  FUN_0040c9a8(PTR_DAT_00ba9e34 + 4,local_1c);
  local_94 = 0;
  local_98 = &local_20;
  local_9c = 0x95e61d;
  (**(code **)(*piVar1 + 4))(piVar1,L"Learning",L"Highlight string");
  local_9c = 0x95e62d;
  FUN_0040c9a8(PTR_DAT_00ba9e34 + 0xc,local_20);
  local_9c = 0;
  local_a0 = &local_24;
  local_a4 = 0x95e645;
  (**(code **)(*piVar1 + 4))(piVar1,L"Learning",L"Highlight string bis");
  local_a4 = 0x95e655;
  FUN_0040c9a8(PTR_DAT_00ba9e34 + 0x10,local_24);
  local_a4 = 0;
  local_a8 = 0x95e669;
  uVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Learning",L"Learning mode");
  PTR_DAT_00ba9e34[0x30] = uVar3;
  local_a8 = 1;
  local_ac = 0x95e686;
  uVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Learning",L"Leech mode");
  *PTR_DAT_00ba9b44 = uVar3;
  local_ac = 1;
  local_b0 = 0x95e6a2;
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Learning",L"Hunt SemiLeeches");
  *PTR_DAT_00baacc0 = uVar3;
  local_b0 = *(undefined4 *)(PTR_DAT_00ba9d9c + 4);
  uStack_b4 = *(undefined4 *)PTR_DAT_00ba9d9c;
  uStack_b8 = 0x95e6c6;
  (**(code **)(*piVar1 + 0x28))(piVar1,L"Learning",L"Item Sorting");
  *(double *)PTR_DAT_00ba9d9c = (double)in_ST0;
  uStack_b8 = *(undefined4 *)(PTR_DAT_00baa4ac + 4);
  uStack_bc = *(undefined4 *)PTR_DAT_00baa4ac;
  uStack_c0 = 0x95e6ea;
  fVar8 = in_ST7;
  (**(code **)(*piVar1 + 0x28))(piVar1,L"Learning",L"Topic Sorting");
  *(double *)PTR_DAT_00baa4ac = (double)in_ST1;
  uStack_c0 = *(undefined4 *)(PTR_DAT_00baac78 + 4);
  uStack_c4 = *(undefined4 *)PTR_DAT_00baac78;
  uStack_c8 = 0x95e70e;
  fVar9 = fVar8;
  (**(code **)(*piVar1 + 0x28))(piVar1,L"Learning",L"Topic Proportion");
  *(double *)PTR_DAT_00baac78 = (double)in_ST2;
  uStack_c8 = 0;
  uStack_cc = 0x95e72a;
  fVar10 = fVar9;
  uVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Stats",&DAT_0095fb30);
  if (0xffff < uVar6) {
    uStack_cc = 0x95e736;
    uVar6 = thunk_FUN_004072dc();
  }
  *(short *)PTR_DAT_00baaa80 = (short)uVar6;
  uStack_cc = 0x95e744;
  FUN_0042c3e8();
  *(double *)PTR_DAT_00baa09c = (double)in_ST3;
  uStack_cc = 1;
  uStack_d4._4_4_ = 0x95e760;
  fVar11 = fVar10;
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Algorithm",L"SM16vsSM17 log");
  *PTR_DAT_00baa250 = uVar3;
  uStack_d4._4_4_ = 0x95e770;
  uVar6 = FUN_00951558(param_1);
  if (uVar6 == *(ushort *)PTR_DAT_00baaa80) {
    uStack_d4._4_4_ = 0x95e78e;
    FUN_0040a340(param_1 + 0x93);
    local_2c = (double)in_ST4;
    uStack_dc._4_4_ = 0x95e7aa;
    fVar12 = fVar11;
    uStack_d4 = local_2c;
    (**(code **)(*piVar1 + 0x28))(piVar1,L"Stats",L"Item Burden");
    *(double *)PTR_DAT_00baa740 = (double)in_ST5;
    uStack_dc._4_4_ = 0x95e7bf;
    fVar13 = fVar12;
    FUN_0040a340(param_1 + 0x2ee);
    local_2c = (double)in_ST6;
    uStack_e0 = 0x95e7db;
    fVar14 = fVar13;
    uStack_dc = local_2c;
    (**(code **)(*piVar1 + 0x28))(piVar1,L"Stats",L"Topic Burden");
    *(double *)PTR_DAT_00baad68 = (double)in_ST7;
    uStack_e0 = 0;
    uStack_e4 = 0x95e7f7;
    in_ST6 = fVar14;
    uVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Stats",L"Repetitions");
    if (0xffff < uVar6) {
      uStack_e4 = 0x95e803;
      uVar6 = thunk_FUN_004072dc();
    }
    *(short *)PTR_DAT_00baab40 = (short)uVar6;
    uStack_e4 = 0;
    uStack_e8 = 0x95e820;
    uVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Stats",L"Lapses");
    if (0xffff < uVar6) {
      uStack_e8 = 0x95e82c;
      uVar6 = thunk_FUN_004072dc();
    }
    *(short *)PTR_DAT_00baad0c = (short)uVar6;
    uStack_e8 = 0;
    uStack_ec = 0;
    uStack_f0 = 0x95e84b;
    (**(code **)(*piVar1 + 0x28))(piVar1,L"Stats",L"Time");
    *(double *)PTR_DAT_00baa488 = (double)fVar8;
    uStack_f0 = 0;
    uStack_f4 = 0;
    uStack_f8 = 0x95e869;
    (**(code **)(*piVar1 + 0x28))(piVar1,L"Stats",L"RepTime");
    *(double *)PTR_DAT_00baaaf8 = (double)fVar9;
    uStack_f8 = 0;
    uStack_fc = 0x95e885;
    uVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Stats",L"Max outstanding");
    *(undefined4 *)PTR_DAT_00baa934 = uVar5;
    uStack_fc = 0x3feccccc;
    uStack_100 = 0xcccccccd;
    pwStack_104 = (wchar_t *)0x95e8a9;
    (**(code **)(*piVar1 + 0x28))(piVar1,L"Stats",L"SM16 R");
    *(double *)PTR_DAT_00baa030 = (double)fVar10;
    pwStack_104 = (wchar_t *)0x3feccccc;
    piStack_108 = (int *)0xcccccccd;
    pwStack_10c = (wchar_t *)0x95e8cd;
    (**(code **)(*piVar1 + 0x28))(piVar1,L"Stats",L"SM17 R");
    *(double *)PTR_DAT_00baac1c = (double)fVar11;
    pwStack_10c = (wchar_t *)0x0;
    puStack_110 = (undefined4 *)0x0;
    uStack_114 = 0x95e8eb;
    (**(code **)(*piVar1 + 0x28))(piVar1,L"Stats",L"SM16 Metric");
    *(double *)PTR_DAT_00baaeac = (double)fVar12;
    uStack_114 = 0;
    puStack_118 = (undefined4 *)0x0;
    uStack_11c = 0x95e909;
    (**(code **)(*piVar1 + 0x28))(piVar1,L"Stats",L"SM17 Metric");
    *(double *)PTR_DAT_00baa38c = (double)fVar13;
    uStack_11c = 0x3feccccc;
    puStack_120 = (undefined4 *)0xcccccccd;
    uStack_124 = 0x95e92d;
    (**(code **)(*piVar1 + 0x28))(piVar1,L"Stats",L"Recall");
    *(double *)PTR_DAT_00ba9b6c = (double)fVar14;
    uStack_124 = 0;
    puStack_128 = (undefined4 *)0x95e949;
    uVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Stats",L"SM16vSM17 metric cases");
    *(undefined4 *)PTR_DAT_00baa138 = uVar5;
    *(double *)PTR_DAT_00baa088 = (double)*(int *)PTR_DAT_00baa138 * *(double *)PTR_DAT_00baa030;
    *(double *)PTR_DAT_00baac74 = (double)*(int *)PTR_DAT_00baa138 * *(double *)PTR_DAT_00baac1c;
    *(double *)PTR_DAT_00baa688 =
         (double)*(int *)PTR_DAT_00baa138 *
         *(double *)PTR_DAT_00baaeac * *(double *)PTR_DAT_00baaeac;
    *(double *)PTR_DAT_00ba9a74 =
         (double)*(int *)PTR_DAT_00baa138 *
         *(double *)PTR_DAT_00baa38c * *(double *)PTR_DAT_00baa38c;
    *(double *)PTR_DAT_00baad54 = (double)*(int *)PTR_DAT_00baa138 * *(double *)PTR_DAT_00ba9b6c;
  }
  else {
    uStack_d4._4_4_ = 0x95e9d9;
    FUN_0040a340(param_1 + 0x93);
    *(double *)PTR_DAT_00baa740 = (double)in_ST4;
    uStack_d4._4_4_ = 0x95e9ee;
    FUN_0040a340(param_1 + 0x2ee);
    *(double *)PTR_DAT_00baad68 = (double)in_ST5;
    uStack_d4._4_4_ = 0x95e9fe;
    uVar6 = FUN_00951558(param_1);
    if (0xffff < uVar6) {
      uStack_d4._4_4_ = 0x95ea0a;
      uVar6 = thunk_FUN_004072dc();
    }
    *(short *)PTR_DAT_00baaa80 = (short)uVar6;
    *(undefined2 *)PTR_DAT_00baab40 = 0;
    *(undefined2 *)PTR_DAT_00baad0c = 0;
    puVar2 = PTR_DAT_00baa488;
    *(undefined4 *)PTR_DAT_00baa488 = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2 = PTR_DAT_00baaaf8;
    *(undefined4 *)PTR_DAT_00baaaf8 = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)PTR_DAT_00baa934 = 0;
    uStack_d4._4_4_ = 0x95ea4d;
    FUN_007abffc();
  }
  uStack_d4._4_4_ = 1;
  uStack_d4._0_4_ = 0x95ea61;
  uVar5 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Navigation",L"Synchronize Element with Contents");
  uStack_d4._0_4_ = 0x95ea75;
  FUN_00605bc8(*(undefined4 *)(*(int *)PTR_DAT_00baa6c4 + 0x684),uVar5);
  uStack_d4._0_4_ = 0;
  uStack_dc._4_4_ = 0x95ea89;
  uVar5 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Navigation",L"Auto-Scroll Contents");
  uStack_dc._4_4_ = 0x95ea9d;
  FUN_005e5e14(*(undefined4 *)(*(int *)PTR_DAT_00baa6c4 + 0x524),uVar5);
  uStack_dc._4_4_ = 0;
  uStack_dc._0_4_ = 0x95eab1;
  uVar5 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Navigation",L"Auto-Sort Contents");
  uStack_dc._0_4_ = 0x95eac5;
  FUN_005e5e14(*(undefined4 *)(*(int *)PTR_DAT_00baa6c4 + 0x528),uVar5);
  uStack_dc._0_4_ = 1;
  uStack_e0 = 0x95ead9;
  uVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Navigation",L"Next Element Mode");
  *(undefined1 *)(*(int *)PTR_DAT_00ba982c + 0xe0c) = uVar3;
  uStack_e0 = 1;
  uStack_e4 = 0x95eafb;
  uVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Concepts",L"Current Concept");
  *(undefined4 *)PTR_DAT_00ba9ca0 = uVar5;
  uStack_e4 = 1;
  uStack_e8 = 0x95eb17;
  uVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Append",L"Current Tasklist");
  *(undefined4 *)PTR_DAT_00baae1c = uVar5;
  uStack_e8 = 100;
  uStack_ec = 0x95eb33;
  uVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Append",L"Children Limit");
  if (0xffff < uVar6) {
    uStack_ec = 0x95eb3f;
    uVar6 = thunk_FUN_004072dc();
  }
  *(short *)PTR_DAT_00ba9de4 = (short)uVar6;
  uStack_ec = 0x95eb50;
  cVar4 = FUN_00932d0c(param_1);
  if (cVar4 != '\0') {
    uStack_ec = 0x95eb5e;
    FUN_00b2b8f8(L"Cannot use collection in read only mode");
    uStack_ec = 0x95eb63;
    FUN_009a33b0();
  }
  uStack_ec = 1;
  uStack_f0 = 0x95eb77;
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Access",L"Edit On Click");
  *PTR_DAT_00ba9ecc = uVar3;
  uStack_f0 = (uint)(byte)*PTR_DAT_00baad5c;
  uStack_f4 = 0x95eb9a;
  uVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Access",L"Level");
  *PTR_DAT_00baad5c = uVar3;
  uStack_f4 = 0;
  uStack_f8 = 0x95ebb6;
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Access",L"Compile Lexicon");
  *PTR_DAT_00ba97e0 = uVar3;
  uStack_f8 = 0;
  uStack_fc = 0x95ebd2;
  uVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Access",L"Default Element");
  *(undefined4 *)PTR_DAT_00ba9c9c = uVar5;
  uStack_fc = 0;
  uStack_100 = 0;
  pwStack_104 = (wchar_t *)0x95ebf0;
  (**(code **)(*piVar1 + 0x28))(piVar1,L"Access",L"Last recovery");
  *(double *)PTR_DAT_00baa08c = (double)in_ST6;
  pwStack_104 = (wchar_t *)0x95ec03;
  FUN_0094c0b8(param_1,&local_34);
  pwStack_104 = local_34;
  piStack_108 = &local_30;
  pwStack_10c = (wchar_t *)0x95ec1d;
  (**(code **)(*piVar1 + 4))(piVar1,L"Storage",L"Secondary");
  pwStack_10c = (wchar_t *)0x95ec2e;
  FUN_0040c9a8(*(int *)(param_1 + 0xc) + 0x10,local_30);
  pwStack_10c = (wchar_t *)0x95ec3f;
  FUN_00b09214(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10),&local_38);
  pwStack_10c = (wchar_t *)0x95ec50;
  FUN_0040c9a8(*(int *)(param_1 + 0xc) + 0x10,local_38);
  pwStack_10c = (wchar_t *)0x95ec61;
  FUN_00427548(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10),&local_3c);
  pwStack_10c = (wchar_t *)0x95ec72;
  FUN_0040c9a8(*(int *)(param_1 + 0xc) + 0x10,local_3c);
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x10) == 0) {
    pwStack_10c = (wchar_t *)0x95ec89;
    FUN_0094c0b8(param_1,&local_44);
    pwStack_10c = (wchar_t *)0x95ec94;
    FUN_00427548(local_44,&local_40);
    pwStack_10c = (wchar_t *)0x95eca5;
    FUN_0040c9a8(*(int *)(param_1 + 0xc) + 0x10,local_40);
  }
  pwStack_10c = (wchar_t *)0x95ecb0;
  FUN_0094c0b8(param_1,&local_4c);
  pwStack_10c = (wchar_t *)0x95ecbd;
  FUN_0040d79c(&local_4c,L"\\reports");
  pwStack_10c = local_4c;
  puStack_110 = &local_48;
  uStack_114 = 0x95ecd7;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",L"Text");
  uStack_114 = 0x95ece5;
  FUN_0040c9a8(param_1 + 0x25,local_48);
  uStack_114 = 0x95ecf0;
  FUN_0094c0b8(param_1,&local_54);
  uStack_114 = 0x95ecfd;
  FUN_0040d79c(&local_54,L"\\reports");
  uStack_114 = local_54;
  puStack_118 = &local_50;
  uStack_11c = 0x95ed17;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",L"HTML");
  uStack_11c = 0x95ed25;
  FUN_0040c9a8(param_1 + 0x29,local_50);
  uStack_11c = 0x95ed30;
  FUN_0094c0b8(param_1,&local_5c);
  uStack_11c = 0x95ed3d;
  FUN_0040d79c(&local_5c,L"\\reports");
  uStack_11c = local_5c;
  puStack_120 = &local_58;
  uStack_124 = 0x95ed57;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",&DAT_0096011c);
  uStack_124 = 0x95ed65;
  FUN_0040c9a8(param_1 + 0x2d,local_58);
  uStack_124 = 0x95ed70;
  FUN_0094c204(param_1,&local_64);
  uStack_124 = local_64;
  puStack_128 = &local_60;
  uStack_12c = 0x95ed8a;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",L"Subset");
  uStack_12c = 0x95ed98;
  FUN_0040c9a8(param_1 + 0x31,local_60);
  uStack_12c = 0;
  puStack_130 = &local_68;
  uStack_134 = 0x95edb0;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",&DAT_0096014c);
  uStack_134 = 0x95edbe;
  FUN_0040c9a8(param_1 + 0x35,local_68);
  uStack_134 = 0;
  puStack_138 = &local_6c;
  uStack_13c = 0x95edd6;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",L"Image");
  uStack_13c = 0x95ede4;
  FUN_0040c9a8(param_1 + 0x39,local_6c);
  uStack_13c = 0;
  puStack_140 = &local_70;
  uStack_144 = 0x95edfc;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",L"Sound");
  uStack_144 = 0x95ee0a;
  FUN_0040c9a8(param_1 + 0x3d,local_70);
  uStack_144 = 0;
  puStack_148 = &local_74;
  uStack_14c = 0x95ee22;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",L"Video");
  uStack_14c = 0x95ee30;
  FUN_0040c9a8(param_1 + 0x41,local_74);
  uStack_14c = 0;
  puStack_150 = &local_78;
  uStack_154 = 0x95ee48;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",L"Style");
  uStack_154 = 0x95ee56;
  FUN_0040c9a8(param_1 + 0x45,local_78);
  uStack_154 = 0;
  puStack_158 = &local_7c;
  uStack_15c = 0x95ee6e;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",L"Script");
  uStack_15c = 0x95ee7c;
  FUN_0040c9a8(param_1 + 0x49,local_7c);
  uStack_15c = 0;
  ppuStack_160 = &local_80;
  uStack_164 = 0x95ee94;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",L"Binary");
  uStack_164 = 0x95eea2;
  FUN_0040c9a8(param_1 + 0x4d,local_80);
  uStack_164 = 0;
  puStack_168 = &local_84;
  uStack_16c = 0x95eeba;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",L"Imports");
  uStack_16c = 0x95eec8;
  FUN_0040c9a8(param_1 + 0x51,local_84);
  uStack_16c = 0;
  ppuStack_170 = &local_88;
  uStack_174 = 0x95eee3;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",L"Backup");
  uStack_174 = 0x95eef4;
  FUN_0040c9a8(param_1 + 0x55,local_88);
  uStack_174 = 0;
  puStack_178 = &local_8c;
  uStack_17c = 0x95ef0f;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",L"Transfer");
  uStack_17c = 0x95ef20;
  FUN_0040c9a8(param_1 + 0x59,local_8c);
  uStack_17c = 0;
  pppuStack_180 = &local_90;
  uStack_184 = 0x95ef3b;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",L"Replace filter");
  uStack_184 = 0x95ef4c;
  FUN_0040c9a8(param_1 + 0x19,local_90);
  uStack_184 = 0;
  puStack_188 = &local_94;
  uStack_18c = 0x95ef67;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",L"Sleep logs");
  uStack_18c = 0x95ef77;
  FUN_0040c9a8(PTR_DAT_00ba9a24,local_94);
  uStack_18c = 0;
  pppuStack_190 = &local_98;
  pwStack_194 = (wchar_t *)0x95ef92;
  (**(code **)(*piVar1 + 4))(piVar1,L"Path",L"Background picture");
  pwStack_194 = (wchar_t *)0x95efa2;
  FUN_0040c9a8(PTR_DAT_00baa6b8,local_98);
  pwStack_194 = L"None";
  puStack_198 = &local_9c;
  uStack_19c = 0x95efc0;
  (**(code **)(*piVar1 + 4))(piVar1,L"Language",L"System Translation");
  uStack_19c = 0x95efd1;
  FUN_0040c9a8(param_1 + 0x1d,local_9c);
  if (*(int *)(param_1 + 0x1d) == 0) {
    uStack_19c = 0x95efea;
    FUN_0040c9a8(param_1 + 0x1d,L"None");
  }
  uStack_19c = 0;
  ppiStack_1a0 = &local_a0;
  uStack_1a4 = 0x95f005;
  (**(code **)(*piVar1 + 4))(piVar1,L"Language",L"Translation Font");
  uStack_1a4 = 0x95f016;
  FUN_0040c9a8(param_1 + 0x61,local_a0);
  uStack_1a4 = 1;
  pwStack_1a8 = L"］";
  uVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Language",L"Translation Font Charset");
  if (0xff < uVar6) {
    pwStack_1a8 = (wchar_t *)0x95f036;
    uVar6 = thunk_FUN_004072dc();
  }
  *(char *)(param_1 + 0x65) = (char)uVar6;
  pwStack_1a8 = L"NONE";
  puStack_1ac = &local_a4;
  local_1b0 = (wchar_t *)0x95f05a;
  (**(code **)(*piVar1 + 4))(piVar1,L"Language",L"Phonetic Transcription");
  local_1b0 = 
  L"Ѩ阄贀岅\xffff僿Ჹ阄먀̠\x96䖋诸８ѓ開｜\xffff䖋菼巀໨꫙櫿뤀Ѡ\x96₺阃謀\xf845ᢋ叿謔\xf415몦蠀樂뤀Ҹ\x96₺阃謀\xf845ᢋ叿謔\xf015몞蠀樂뤁Ӹ\x96₺阃謀\xf845ᢋ叿謔䀕몚蠀ꄂ黰º㢀琀ꄈ꛴ºÆ樀뤀Մ\x96₺阃謀\xf845ᢋ叿謔\xe015몝蠀樂뤀֠\x96₺阃謀\xf845ᢋ叿謔\xec15몭蠀ꄂ鷠º㢀琀ꄈ귬ºÆ樀뤀פ\x96಺闷謀\xf845ᢋ叿謔㰕몝蠀ꄂꚤº\x8b툳ヨ첖ꇿ靀º\x8b탨̽萀瓀ꄐ靀º\x8bƲ쫨з\xeb00ꄮꚤº\x8b肊\x9c"
  ;
  FUN_0040c9a8(param_1 + 0x21,local_a4);
  local_1b0 = L"Arial";
  local_1b4 = &local_a8;
  local_1b8 = 0x95f089;
  (**(code **)(*piVar1 + 4))(piVar1,L"Language",L"Phonetic Transcription Font");
  local_1b8 = 0x95f09a;
  FUN_0040c9a8(param_1 + 0x5d,local_a8);
  local_1b8 = 0;
  local_1bc = 0x95f0ae;
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Language",L"Phonetic transcription on mouse move");
  *PTR_DAT_00baa6f4 = uVar3;
  local_1bc = 0;
  local_1c0 = 0x95f0ca;
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Language",L"Translation on mouse move");
  *PTR_DAT_00ba9ef0 = uVar3;
  local_1c0 = 1;
  local_1c4 = 0x95f0e6;
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Language",L"Translate sounds on mouse move");
  *PTR_DAT_00ba9a40 = uVar3;
  if (*PTR_DAT_00ba9ef0 != '\0') {
    *PTR_DAT_00baa6f4 = 0;
  }
  local_1c4 = 0;
  local_1c8 = 0x95f114;
  uVar3 = (**(code **)(*piVar1 + 0x14))
                    (piVar1,L"Language",L"Phonetic transcription on middle click");
  *PTR_DAT_00ba9de0 = uVar3;
  local_1c8 = 0;
  local_1cc = 0x95f130;
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Language",L"Translation on middle click");
  *PTR_DAT_00baadec = uVar3;
  if (*PTR_DAT_00ba9de0 != '\0') {
    *PTR_DAT_00baadec = 0;
  }
  local_1cc = 0;
  local_1d0 = 0x95f15e;
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Defaults",L"Use HTML font");
  *PTR_DAT_00ba9d3c = uVar3;
  local_1d0 = 0x95f174;
  FUN_006287a4(*(undefined4 *)PTR_DAT_00baa6a4,0);
  local_1d0 = 0x95f180;
  cVar4 = FUN_00992f50(*(undefined4 *)PTR_DAT_00ba9740);
  if (cVar4 == '\0') {
    local_1d0 = CONCAT31((int3)((uint)*(int *)PTR_DAT_00baa6a4 >> 8),
                         *(undefined1 *)(*(int *)PTR_DAT_00baa6a4 + 0x9c));
    local_1d4 = 0x95f1b4;
    uVar5 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Defaults",L"Hints");
    local_1d0 = 0x95f1c2;
    FUN_009a295c(*(undefined4 *)PTR_DAT_00ba9740,uVar5);
  }
  else {
    local_1d0 = 0x95f192;
    FUN_009a295c(*(undefined4 *)PTR_DAT_00ba9740,1);
  }
  local_1d0 = 1;
  local_1d4 = 0x95f1d6;
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Defaults",L"Mark status borders");
  *PTR_DAT_00ba9b34 = uVar3;
  local_1d4 = 0;
  uVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Defaults",L"Text Font");
  *(undefined4 *)(param_1 + 0x461) = uVar5;
  uVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Defaults",L"Text Align",0);
  if (0xff < uVar6) {
    uVar6 = thunk_FUN_004072dc();
  }
  *PTR_DAT_00baab00 = (char)uVar6;
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Default",L"Use RTL",0);
  *PTR_DAT_00baa8fc = uVar3;
  uVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Defaults",L"Text Background Color",0xffffffff);
  *(undefined4 *)(param_1 + 0x465) = uVar5;
  FUN_00516018(*(undefined4 *)(*(int *)(*(int *)PTR_DAT_00baa6c4 + 0x6e7) + 0x74),&local_ac);
  FUN_005160a0(*(undefined4 *)(*(int *)(*(int *)PTR_DAT_00baada4 + 1000) + 0x74),local_ac);
  uVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Defaults",L"Background",0);
  *(undefined4 *)PTR_DAT_00baa6bc = uVar5;
  uVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Defaults",L"Background Color",0xff000010);
  FUN_0054a198(*(undefined4 *)PTR_DAT_00ba9cdc,uVar5);
  *(undefined1 *)(param_1 + 0x469) = DAT_00960754;
  uVar3 = (**(code **)(*piVar1 + 0xc))
                    (piVar1,L"Defaults",L"Sound Display At",*(undefined1 *)(param_1 + 0x469));
  *(undefined1 *)(param_1 + 0x469) = uVar3;
  (**(code **)(*piVar1 + 4))(piVar1,L"Defaults",L"Author",&local_b0,*(undefined4 *)PTR_DAT_00baa1f8)
  ;
  FUN_0040c9a8(PTR_DAT_00baa1fc,local_b0);
  ppuVar16 = &local_1b4;
  (**(code **)(*piVar1 + 4))(piVar1,L"Search",L"Last string",ppuVar16,0);
  FUN_0040d6a4(&local_1b0,local_1b4,0xff);
  FUN_0040cdf8(PTR_DAT_00baa9c8,&local_1b0,0xfde9,ppuVar16);
  FUN_0040d660(&local_1bc,*(undefined4 *)PTR_DAT_00baa9c8);
  puVar15 = &local_1b8;
  (**(code **)(*piVar1 + 4))(piVar1,L"Search",L"Replace string",puVar15,local_1bc);
  FUN_0040d6a4(&local_1b0,local_1b8,0xff);
  FUN_0040cdf8(PTR_DAT_00baa9c8 + 4,&local_1b0,0xfde9,puVar15);
  (**(code **)(*piVar1 + 4))(piVar1,L"Search",L"Last defnition",&local_1c0,0);
  FUN_0040c9a8(PTR_DAT_00baa2fc,local_1c0);
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Search",L"Show details",0);
  *PTR_DAT_00baabec = uVar3;
  FUN_0094c0b8(param_1,&local_1c8);
  FUN_0040d79c(&local_1c8,L"\\reports\\faq.htm");
  (**(code **)(*piVar1 + 4))(piVar1,L"E-mail",L"FAQ file",&local_1c4,local_1c8);
  FUN_0040c9a8(PTR_DAT_00baa834,local_1c4);
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"E-mail",L"Prefixes",1);
  *PTR_DAT_00ba9ff8 = uVar3;
  (**(code **)(*piVar1 + 4))(piVar1,L"E-mail",L"Mailer",&local_1cc,DAT_00ca60e0);
  FUN_0040c9a8(&DAT_00ca60e0,local_1cc);
  (**(code **)(*piVar1 + 4))(piVar1,L"E-mail",L"Folder",&local_1d0,*(undefined4 *)PTR_DAT_00ba9f50);
  FUN_0040c9a8(PTR_DAT_00ba9f50,local_1d0);
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,L"Security",L"Filter HTML",1);
  *PTR_DAT_00baa484 = uVar3;
  uVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Mercy",L"Importance",5);
  if (0xff < uVar6) {
    uVar6 = thunk_FUN_004072dc();
  }
  *PTR_DAT_00baa68c = (char)uVar6;
  uVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Mercy",L"Lateness",1);
  if (0xff < uVar6) {
    uVar6 = thunk_FUN_004072dc();
  }
  PTR_DAT_00baa68c[1] = (char)uVar6;
  uVar5 = 6;
  uVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Mercy",L"Easiness");
  if (0xff < uVar6) {
    uVar6 = thunk_FUN_004072dc();
  }
  PTR_DAT_00baa68c[3] = (char)uVar6;
  uVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Mercy",L"Investment",10);
  if (0xff < uVar6) {
    uVar6 = thunk_FUN_004072dc();
  }
  PTR_DAT_00baa68c[2] = (char)uVar6;
  uVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Mercy",L"Recency");
  if (0xff < uVar6) {
    uVar6 = thunk_FUN_004072dc();
  }
  PTR_DAT_00baa68c[4] = (char)uVar6;
  uVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,L"Mercy",L"Mode",3);
  PTR_DAT_00baa68c[5] = uVar3;
  puVar15 = &local_1d4;
  (**(code **)(*piVar1 + 4))(piVar1,L"Defaults",L"Theme",puVar15,0);
  FUN_0040c9a8(PTR_DAT_00ba9898,local_1d4);
  FUN_008b91f0(PTR_DAT_00ba97a4,L"Last filter");
  FUN_008b91f0(PTR_DAT_00ba99f8,L"Leech");
  FUN_0094e8a4(param_1);
  *in_FS_OFFSET = (int)puVar15;
  *in_FS_OFFSET = 8;
  FUN_0040c628(&local_1d4,9,uVar5,&LAB_0095f6cf);
  FUN_0040c5c8(&local_b0);
  FUN_0040c5c8(&local_ac);
  FUN_0040c628(&local_a8,0x1f);
  FUN_0040c628(&local_24,5);
  return;
}



// === FUN_0096bdd0 @ 0096bdd0 size:150 ===

void FUN_0096bdd0(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)0x96bddf;
  local_8 = param_1;
  FUN_0040c6ac(param_1);
  puStack_10 = &LAB_0096be66;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  FUN_00969b98(local_8,L"WAITGRADE");
  if (DAT_00ca6123 == 0) {
    bVar3 = *(byte *)(*(int *)PTR_DAT_00ba982c + 0x1219);
    if (100 < bVar3) {
      bVar3 = thunk_FUN_004072dc();
    }
    *(byte *)(*(int *)PTR_DAT_00ba982c + 0x1384) = bVar3;
  }
  else {
    uVar2 = (undefined1)*(uint *)(DAT_00ca6123 + 0xc);
    if (100 < (*(uint *)(DAT_00ca6123 + 0xc) & 0xff)) {
      uVar2 = thunk_FUN_004072dc();
    }
    *(undefined1 *)(*(int *)PTR_DAT_00ba982c + 0x1384) = uVar2;
  }
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0096be6d;
  puStack_10 = (undefined1 *)0x96be65;
  FUN_0040c5c8(&local_8,uStack_14,puVar1);
  return;
}



// === FUN_0096cae0 @ 0096cae0 size:1156 ===

/* WARNING: Type propagation algorithm not settling */

void FUN_0096cae0(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 extraout_var;
  int extraout_EDX;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  bool bVar5;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int local_14 [2];
  undefined3 uStack_c;
  char local_9;
  undefined4 local_8;
  
  _uStack_c = 0;
  local_14[1] = 0;
  local_14[0] = 0;
  uStack_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_34 = (undefined1 *)0x96cafb;
  local_8 = param_1;
  FUN_0040c6ac(param_1);
  puStack_38 = &LAB_0096cf98;
  local_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_3c;
  uVar4 = 1;
  puStack_44 = &LAB_0096cf34;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_40 = &stack0xfffffffc;
  puStack_34 = &stack0xfffffffc;
  FUN_0040c9f0(local_14 + 1,local_8);
  _uStack_c = _uStack_c & 0xffffff;
  FUN_00b262d0(&local_8,CONCAT22(extraout_var,0x20),&local_1c);
  FUN_004274f8(local_1c,local_14);
  FUN_0040d98c(local_14[0],L"PLAY");
  if (!(bool)uVar4) {
    FUN_0040d98c(local_14[0],L"UPLAY");
    if (!(bool)uVar4) {
      FUN_0040d98c(local_14[0],L"WAIT");
      if (!(bool)uVar4) {
        FUN_0040d98c(local_14[0],L"WAITGRADE");
        if (!(bool)uVar4) {
          _uStack_c = CONCAT13(1,uStack_c);
        }
      }
    }
  }
  iVar2 = 0;
  if ((local_14[0] == 0) || (iVar3 = local_14[0], *(int *)(local_14[0] + -4) == 0)) {
    iVar2 = thunk_FUN_004072dc();
    iVar3 = extraout_EDX;
  }
  bVar5 = *(short *)(iVar3 + -2 + (iVar2 + 1) * 2) == 0x3b;
  if (!bVar5) {
    FUN_0040d98c(local_14[0],L"DISMISS");
    if (bVar5) {
      FUN_0096bf10(local_8);
    }
    else {
      FUN_0040d98c(local_14[0],L"DISPLAY");
      if (bVar5) {
        FUN_00969c84(local_8);
      }
      else {
        FUN_0040d98c(local_14[0],L"DRAGMATCH");
        if (bVar5) {
          FUN_00969e74(local_8);
        }
        else {
          FUN_0040d98c(local_14[0],L"DRAGTEXTMODE");
          if (bVar5) {
            FUN_0096a268(local_8);
          }
          else {
            FUN_0040d98c(local_14[0],L"ELEMENT");
            if (bVar5) {
              FUN_0096c0d0(local_8);
            }
            else {
              FUN_0040d98c(local_14[0],L"FONT");
              if (bVar5) {
                FUN_0096a3c8(local_8);
              }
              else {
                FUN_0040d98c(local_14[0],L"FRAME");
                if (bVar5) {
                  FUN_0096a59c(local_8);
                }
                else {
                  FUN_0040d98c(local_14[0],L"GOTO");
                  if (bVar5) {
                    FUN_0096ab10(local_8);
                  }
                  else {
                    FUN_0040d98c(local_14[0],L"HIDE");
                    if (bVar5) {
                      FUN_0096ae1c(local_8);
                    }
                    else {
                      FUN_0040d98c(local_14[0],L"HIDEPROGRAM");
                      if (!bVar5) {
                        FUN_0040d98c(local_14[0],L"HITTEST");
                        if (bVar5) {
                          FUN_0096aec4(local_8);
                        }
                        else {
                          FUN_0040d98c(local_14[0],L"LEARN");
                          if (bVar5) {
                            FUN_0096be90(local_8);
                          }
                          else {
                            FUN_0040d98c(local_14[0],L"LEVEL");
                            if (bVar5) {
                              FUN_0096c270(local_8);
                            }
                            else {
                              FUN_0040d98c(local_14[0],L"MAILTO");
                              if (bVar5) {
                                FUN_0096b22c(local_8);
                              }
                              else {
                                FUN_0040d98c(local_14[0],L"MESSAGE");
                                if (bVar5) {
                                  FUN_0096ca84(local_8);
                                }
                                else {
                                  FUN_0040d98c(local_14[0],L"MOVE");
                                  if (bVar5) {
                                    FUN_0096c8f4(local_8);
                                  }
                                  else {
                                    FUN_0040d98c(local_14[0],L"PLAY");
                                    if (bVar5) {
                                      FUN_0096c520(local_8,1);
                                    }
                                    else {
                                      FUN_0040d98c(local_14[0],L"SHOW");
                                      if (bVar5) {
                                        FUN_0096b318(local_8);
                                      }
                                      else {
                                        FUN_0040d98c(local_14[0],L"SHOWPROGRAM");
                                        if (!bVar5) {
                                          FUN_0040d98c(local_14[0],L"START");
                                          if (bVar5) {
                                            FUN_0096c520(local_8,0);
                                          }
                                          else {
                                            FUN_0040d98c(local_14[0],L"STATUS");
                                            if (bVar5) {
                                              FUN_0096c190(local_8);
                                            }
                                            else {
                                              FUN_0040d98c(local_14[0],L"STOP");
                                              if (bVar5) {
                                                FUN_0096b410(local_8);
                                              }
                                              else {
                                                FUN_0040d98c(local_14[0],L"TEXTOUT");
                                                if (bVar5) {
                                                  FUN_0096b49c(local_8);
                                                }
                                                else {
                                                  FUN_0040d98c(local_14[0],L"TIPS");
                                                  if (bVar5) {
                                                    FUN_0096b618(local_8);
                                                  }
                                                  else {
                                                    FUN_0040d98c(local_14[0],L"TOGGLE");
                                                    if (bVar5) {
                                                      FUN_0096b698(local_8);
                                                    }
                                                    else {
                                                      FUN_0040d98c(local_14[0],L"TOPIC");
                                                      if (bVar5) {
                                                        FUN_0096c0d0(local_8);
                                                      }
                                                      else {
                                                        FUN_0040d98c(local_14[0],L"TRANSLATE");
                                                        if (bVar5) {
                                                          FUN_0096b794(local_8);
                                                        }
                                                        else {
                                                          FUN_0040d98c(local_14[0],L"UPLAY");
                                                          if (bVar5) {
                                                            FUN_0096c448(local_8);
                                                          }
                                                          else {
                                                            FUN_0040d98c(local_14[0],&DAT_0096d2e8);
                                                            if (bVar5) {
                                                              FUN_0096b9a0(local_8);
                                                            }
                                                            else {
                                                              FUN_0040d98c(local_14[0],L"WAIT");
                                                              if (bVar5) {
                                                                FUN_0096ba24(local_8);
                                                              }
                                                              else {
                                                                FUN_0040d98c(local_14[0],
                                                                             L"WAITFRAME");
                                                                if (bVar5) {
                                                                  FUN_0096bbf0(local_8);
                                                                }
                                                                else {
                                                                  FUN_0040d98c(local_14[0],
                                                                               L"WAITGRADE");
                                                                  if (bVar5) {
                                                                    FUN_0096bdd0(local_8);
                                                                  }
                                                                  else {
                                                                    FUN_0040d7f4(&local_20,
                                                                                 L"Unknown command "
                                                                                 ,local_14[0]);
                                                                    FUN_00968228(local_20);
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (local_9 != '\0') {
    FUN_0096c4f4();
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_48;
  *in_FS_OFFSET = local_3c;
  puStack_34 = &LAB_0096cf9f;
  puStack_38 = (undefined1 *)0x96cf82;
  FUN_0040c628(&local_24,3,puVar1);
  puStack_38 = (undefined1 *)0x96cf8f;
  FUN_0040c628(local_14,2);
  puStack_38 = (undefined1 *)0x96cf97;
  FUN_0040c5c8(&local_8);
  return;
}



// === FUN_00989efc @ 00989efc size:953 ===

void FUN_00989efc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_0098a2af;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0040c9a8(PTR_DAT_00ba9ea0,L"&File");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 4,L"&New");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 8,L"&Open");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x10,L"&Level");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x14,L"Beginner");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x18,L"Basic");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x1c,L"Middle");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x20,L"Professional");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0xc,L"E&xit");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x24,L"Contents");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x28,L"Search");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x2c,L"&Back");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x30,L"Next");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x34,L"History");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x38,L"Navigate");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x3c,L"Compose");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x40,L"Edit");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x44,L"Path");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x48,L"Title");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x4c,L"Learn");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x50,L"Add new");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x54,L"Rev&iew");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x58,L"Remember");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x5c,L"Forget");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x60,L"Dismiss");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 100,L"Show answer");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x68,L"Cancel");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x6c,L"Next repetition");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x70,L"Great");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x74,L"Good");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x78,L"Pass");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x7c,L"Fail");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x80,&DAT_0098a65c);
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x84,L"Null");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x88,L"View");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x8c,&DAT_0098a6a0);
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x90,L"Sibling");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x94,L"Insert");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x98,L"Delete");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0x9c,L"Do you want to learn new material?");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0xa0,L"Final drill?");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0xa4,L"Nothing more to learn");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0xa8,L"Stop");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0xac,L"Cancel grade");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0xb0,L"Error");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0xb4,L"Invalid path");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0xb8,L"Overwrite?");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0xbc,L"Not enough disk space");
  FUN_0040c9a8(PTR_DAT_00ba9ea0 + 0xc0,L"Language");
  *in_FS_OFFSET = uStack_20;
  return;
}



// === FUN_00994e30 @ 00994e30 size:63 ===

void FUN_00994e30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_008155dc(CONCAT31((int3)((uint)PTR_DAT_00baac78 >> 8),1),param_2,param_3,
               *(undefined4 *)PTR_DAT_00baac78,*(undefined4 *)(PTR_DAT_00baac78 + 4),
               *(undefined4 *)PTR_DAT_00baa4ac,*(undefined4 *)(PTR_DAT_00baa4ac + 4),
               *(undefined4 *)PTR_DAT_00ba9d9c,*(undefined4 *)(PTR_DAT_00ba9d9c + 4),param_2,param_1
              );
  FUN_00b2e42c(L"OK. Repetitions have been sorted");
  return;
}



// === FUN_009a0de4 @ 009a0de4 size:593 ===

void FUN_009a0de4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = &stack0xfffffffc;
  puStack_24 = &LAB_009a102e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (*(char *)(param_1 + 0xced) == '\0') {
    FUN_00b1ae44(*(undefined4 *)(param_1 + 0xce9),*(undefined4 *)(param_1 + 0x74),L"Application",
                 L"Font");
    piVar1 = *(int **)(param_1 + 0xce9);
    (**(code **)(*piVar1 + 8))(piVar1,L"Language",L"Localization",*(undefined4 *)(param_1 + 0xcf2));
    (**(code **)(*piVar1 + 8))(piVar1,L"Reading",L"RTF filter",*(undefined4 *)PTR_DAT_00ba9d7c);
    (**(code **)(*piVar1 + 0x10))(piVar1,L"Windows",L"ChoiceX",*(undefined4 *)PTR_DAT_00ba9758);
    (**(code **)(*piVar1 + 0x10))(piVar1,L"Windows",L"ChoiceY",*(undefined4 *)PTR_DAT_00baad6c);
    (**(code **)(*piVar1 + 0x18))(piVar1,L"System",L"Show tips",*PTR_DAT_00ba9aa0);
    (**(code **)(*piVar1 + 0x10))(piVar1,L"Learning",L"Midnight shift",*PTR_DAT_00baa76c);
    (**(code **)(*piVar1 + 0x10))
              (piVar1,L"Interval alert",L"Difference",*(undefined4 *)PTR_DAT_00ba9824);
    (**(code **)(*piVar1 + 0x10))
              (piVar1,L"Interval alert",L"Length",*(undefined4 *)PTR_DAT_00baae34);
    (**(code **)(*piVar1 + 0x3c))
              (piVar1,L"Interval alert",L"Factor",*(undefined4 *)PTR_DAT_00baa414,
               *(undefined4 *)(PTR_DAT_00baa414 + 4));
    (**(code **)(*piVar1 + 0x18))(piVar1,L"SuperMemo",L"Remove formatting",*PTR_DAT_00baa5e0);
    (**(code **)(*piVar1 + 0x18))(piVar1,L"SuperMemo",L"Grade icons",*PTR_DAT_00baacdc);
    (**(code **)(*piVar1 + 8))(piVar1,L"SuperMemo",L"Owner",*(undefined4 *)PTR_DAT_00baa1f8);
    (**(code **)(*piVar1 + 0x10))(piVar1,L"SuperMemo",L"Level",*PTR_DAT_00baad5c);
    (**(code **)(*piVar1 + 0x18))(piVar1,L"SuperMemo",L"Allow Read-Point Enter",*PTR_DAT_00baad58);
    (**(code **)(*piVar1 + 0x10))(piVar1,L"Contents",L"Type",*PTR_DAT_00ba9760);
    (**(code **)(*piVar1 + 8))(piVar1,L"E-Mail",L"Addressee",*(undefined4 *)PTR_DAT_00ba9a78);
    (**(code **)(*piVar1 + 8))(piVar1,L"E-Mail",L"FAQ file",*(undefined4 *)PTR_DAT_00baa834);
    uVar2 = *(undefined4 *)PTR_DAT_00baa024;
    (**(code **)(*piVar1 + 8))(piVar1,L"Alarm",L"File");
    FUN_0098d244(param_1);
    *in_FS_OFFSET = uVar2;
  }
  else {
    *in_FS_OFFSET = uStack_28;
  }
  return;
}



// === FUN_009a1470 @ 009a1470 size:882 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009a1470(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int *in_FS_OFFSET;
  float10 fVar5;
  undefined4 *puVar6;
  int iStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_c = (int *)0x0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_30 = &LAB_009a17e2;
  iStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_34;
  local_8 = param_1;
  FUN_00b1ab7c(*(undefined4 *)(param_1 + 0xce9),*(undefined4 *)(param_1 + 0x74),L"Application",
               *(undefined4 *)(param_1 + 0x74),L"Font");
  uVar2 = FUN_0061ee6c(local_8);
  FUN_00517a20(uVar2,*(undefined4 *)(local_8 + 0x74));
  local_c = *(int **)(local_8 + 0xce9);
  (**(code **)(*local_c + 4))(local_c,L"Language",L"Localization",&local_14,L"None");
  FUN_0040c9a8(local_8 + 0xcf2,local_14);
  (**(code **)(*local_c + 4))(local_c,L"Reading",L"RTF filter",&local_18,L"TWBASHrd");
  FUN_0040c9a8(PTR_DAT_00ba9d7c,local_18);
  local_10 = *(int *)PTR_DAT_00ba9d7c;
  if (local_10 != 0) {
    local_10 = *(int *)(local_10 + -4);
  }
  if (local_10 != 8) {
    FUN_0040c9a8(PTR_DAT_00ba9d7c,L"TWBASHrd");
  }
  iVar3 = FUN_00407bcc();
  if (iVar3 >> 0x1f != extraout_EDX) {
    iVar3 = thunk_FUN_004072dc();
  }
  uVar2 = (**(code **)(*local_c + 0xc))(local_c,L"Windows",L"ChoiceX",iVar3);
  *(undefined4 *)PTR_DAT_00ba9758 = uVar2;
  fVar5 = _DAT_009a18ec * (float10)*(int *)PTR_DAT_00ba9f70;
  iVar3 = FUN_00407bcc();
  if (iVar3 >> 0x1f != extraout_EDX_00) {
    iVar3 = thunk_FUN_004072dc();
  }
  uVar2 = (**(code **)(*local_c + 0xc))(local_c,L"Windows",L"ChoiceY",iVar3);
  *(undefined4 *)PTR_DAT_00baad6c = uVar2;
  uVar1 = (**(code **)(*local_c + 0x14))(local_c,L"System",L"Show tips",1);
  *PTR_DAT_00ba9aa0 = uVar1;
  FUN_0054a0e0(*(undefined4 *)(local_8 + 0xc70),*(undefined4 *)(local_8 + 0x74));
  FUN_00515ce4(*(undefined4 *)(*(int *)(local_8 + 0xbd0) + 0x74),0xff00);
  uVar4 = (**(code **)(*local_c + 0xc))(local_c,L"Learning",L"Midnight shift",0);
  if (0xff < uVar4) {
    uVar4 = thunk_FUN_004072dc();
  }
  *PTR_DAT_00baa76c = (char)uVar4;
  uVar2 = (**(code **)(*local_c + 0xc))
                    (local_c,L"Interval alert",L"Difference",*(undefined4 *)PTR_DAT_00ba9824);
  *(undefined4 *)PTR_DAT_00ba9824 = uVar2;
  uVar2 = (**(code **)(*local_c + 0xc))
                    (local_c,L"Interval alert",L"Length",*(undefined4 *)PTR_DAT_00baae34);
  *(undefined4 *)PTR_DAT_00baae34 = uVar2;
  (**(code **)(*local_c + 0x28))
            (local_c,L"Interval alert",L"Factor",*(undefined4 *)PTR_DAT_00baa414,
             *(undefined4 *)(PTR_DAT_00baa414 + 4));
  *(double *)PTR_DAT_00baa414 = (double)fVar5;
  uVar1 = (**(code **)(*local_c + 0xc))(local_c,L"SuperMemo",L"Level",*PTR_DAT_00baad5c);
  *PTR_DAT_00baad5c = uVar1;
  uVar1 = (**(code **)(*local_c + 0x14))(local_c,L"SuperMemo",L"Remove formatting",1);
  *PTR_DAT_00baa5e0 = uVar1;
  uVar1 = (**(code **)(*local_c + 0x14))(local_c,L"SuperMemo",L"Grade icons",1);
  *PTR_DAT_00baacdc = uVar1;
  (**(code **)(*local_c + 4))
            (local_c,L"SuperMemo",L"Owner",&local_1c,*(undefined4 *)PTR_DAT_00baa1f8);
  FUN_0040c9a8(PTR_DAT_00baa1f8,local_1c);
  uVar1 = (**(code **)(*local_c + 0x14))
                    (local_c,L"SuperMemo",L"Allow Read-Point Enter",*PTR_DAT_00baad58);
  *PTR_DAT_00baad58 = uVar1;
  (**(code **)(*local_c + 4))(local_c,L"E-Mail",L"Addressee",&local_20,0);
  FUN_0040c9a8(PTR_DAT_00ba9a78,local_20);
  uVar2 = 0;
  uVar1 = (**(code **)(*local_c + 0xc))(local_c,L"Contents",L"Type");
  *PTR_DAT_00ba9760 = uVar1;
  FUN_0098dfc8(local_8);
  puVar6 = &local_24;
  (**(code **)(*local_c + 4))(local_c,L"Alarm",L"File",puVar6,*(undefined4 *)PTR_DAT_00baa024);
  FUN_0040c9a8(PTR_DAT_00baa024,local_24);
  FUN_0076fd48();
  *in_FS_OFFSET = (int)puVar6;
  FUN_0040c628(&local_24,5,uVar2,&LAB_009a17e9);
  return;
}



// === FUN_009aa410 @ 009aa410 size:309 ===

void FUN_009aa410(undefined1 param_1,undefined4 param_2)

{
  FUN_0040c9a8(param_2,L"Unknown");
  switch(param_1) {
  case 0:
  case 1:
    FUN_0040c9a8(param_2,L"Genius 1.0");
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    FUN_0040c9a8(param_2,L"Genius 2.0");
    break;
  case 7:
  case 8:
    FUN_0040c9a8(param_2,L"SuperMemo 8");
    break;
  case 9:
    FUN_0040c9a8(param_2,L"SuperMemo 98");
    break;
  case 10:
    FUN_0040c9a8(param_2,L"SuperMemo 99");
    break;
  case 0xb:
  case 0xc:
    FUN_0040c9a8(param_2,L"SuperMemo 2000");
    break;
  case 0xd:
    FUN_0040c9a8(param_2,L"SuperMemo 2002");
    break;
  case 0xe:
    FUN_0040c9a8(param_2,L"SuperMemo 2004");
    break;
  case 0xf:
    FUN_0040c9a8(param_2,L"SuperMemo 2006");
    break;
  case 0x10:
    FUN_0040c9a8(param_2,L"SuperMemo 2008");
    break;
  case 0x11:
    FUN_0040c9a8(param_2,L"SuperMemo 15");
    break;
  case 0x12:
    FUN_0040c9a8(param_2,L"SuperMemo 16");
    break;
  case 0x13:
    FUN_0040c9a8(param_2,L"SM17 Alpha ElParam.ConceptNo");
    break;
  case 0x14:
    FUN_0040c9a8(param_2,L"SM17 Alpha TItemInfo upgrade");
    break;
  case 0x15:
    FUN_0040c9a8(param_2,L"SM17 Alpha RepHist upgrade");
    break;
  case 0x16:
    FUN_0040c9a8(param_2,L"SuperMemo 18");
  }
  return;
}



// === FUN_009d511c @ 009d511c size:937 ===

void FUN_009d511c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  float10 in_ST0;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uStack_e4;
  undefined1 *puStack_e0;
  undefined1 *puStack_dc;
  undefined4 uStack_d8;
  undefined1 *puStack_d4;
  undefined1 *puStack_d0;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_ad [12];
  undefined4 local_a1;
  undefined1 local_8d [5];
  undefined1 local_88 [20];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [16];
  undefined4 local_54;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined8 local_2c;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_bc = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_38 = 0;
  puStack_d0 = (undefined1 *)0x9d5162;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040c6ac(param_3);
  puStack_d0 = (undefined1 *)0x9d5173;
  FUN_0040def4(local_8d,PTR_DAT_00af8300);
  puStack_d4 = &LAB_009d54ee;
  uStack_d8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_d8;
  puStack_dc = (undefined1 *)0x9d518c;
  puStack_d0 = &stack0xfffffffc;
  FUN_0040c9a8(param_4,local_10);
  puStack_e0 = &LAB_009d5481;
  uStack_e4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_e4;
  puStack_dc = &stack0xfffffffc;
  FUN_0040c9f0(&local_38,local_10);
  FUN_00b21f30(&local_38,L"(source=https://",L"(source=http://");
  FUN_00b21f30(&local_38,L"(document=https://",L"(document=http://");
  FUN_00b22784(&local_38,&local_18,L"(source=http://",0,0,0,0,&DAT_009d55cc);
  FUN_00b22784(&local_38,&local_1c,L"(document=http://",0,0,0,0,&DAT_009d55cc);
  puVar5 = &DAT_009d55cc;
  uVar4 = 0;
  FUN_00b22784(&local_38,&local_20,L"(thumb=http://",0,0,0,0);
  FUN_00b21f30(&local_38,L"(document=about:blank)",0);
  FUN_00b21f30(&local_38,&DAT_009d5654,&DAT_009d5644);
  bVar1 = local_18 == 0;
  if (((bVar1) && (bVar1 = local_1c == 0, bVar1)) && (bVar1 = local_20 == 0, bVar1)) {
    FUN_00b21f30(&local_38,L"(source=",L"(source: ");
    (**(code **)(*local_8 + 8))(local_8,local_c,local_38);
    FUN_0040c9a8(param_4,local_38);
    *in_FS_OFFSET = 1;
  }
  else {
    FUN_0040d98c(local_38,L"url?sa=i");
    if (bVar1) {
      FUN_0040d7f4(&local_38,L"URL: ",local_18);
    }
    FUN_009c97e0(local_8,&local_c,2,&local_14,0);
    FUN_00b1305c(local_14);
    local_2c = (double)in_ST0;
    FUN_00af8b84(local_8d);
    local_8d[0] = 1;
    local_54 = 0;
    local_48 = local_c;
    FUN_0040c9f0(local_74,local_38);
    uVar2 = (undefined4)local_2c;
    uVar3 = local_2c._4_4_;
    FUN_00b26b58(&local_b4);
    FUN_0040c9f0(local_70,local_b4);
    if (local_18 != 0) {
      FUN_0040d7f4(local_68,L"http://",local_18,uVar2,uVar3);
    }
    if (local_1c != 0) {
      FUN_0040d7f4(local_6c,L"http://",local_1c,uVar2,uVar3);
    }
    if (local_20 != 0) {
      FUN_0040d7f4(local_88,L"http://",local_20,uVar2,uVar3);
    }
    FUN_004282b0(local_c,&local_b8);
    FUN_0040d7f4(local_64,L"Image reference upgrade for image #",local_b8);
    FUN_009db148(local_8,local_c,&local_c0,&DAT_009d57a8,&DAT_009d57a8,local_38,L"New name: ",
                 &DAT_009d57a8,&DAT_009d57a8,local_10,L"Renaming image member!\r\n\r\nOld name: ");
    uVar2 = local_c0;
    FUN_0040d87c(&local_bc,9);
    FUN_00b2e42c(local_bc);
    local_30 = FUN_009c15b8(local_8,local_c);
    (**(code **)(*local_8 + 8))(local_8,local_c,local_38,1,uVar2);
    FUN_009dc9bc(local_8,&local_c,&local_38);
    if (0 < local_30) {
      FUN_00b2e42c(L"Cannot create image reference if the reference is already there");
    }
    if (local_30 == 0) {
      local_30 = FUN_009d5ea4(*(undefined4 *)(*(int *)PTR_DAT_00ba9c04 + 0x4ee),local_8d);
      FUN_009ca4ac(*(undefined4 *)(*(int *)PTR_DAT_00ba9c04 + 0x4ee),&local_30,local_ad);
      local_34 = local_a1;
      FUN_009c1744(*(undefined4 *)(*(int *)PTR_DAT_00ba9c04 + 0x4e2),local_a1,local_c);
    }
    FUN_0040c9a8(param_4,local_38);
    *in_FS_OFFSET = &DAT_00ca6411;
  }
  *in_FS_OFFSET = uVar4;
  FUN_0040c628(&local_c0,4,puVar5,&LAB_009d54f5);
  FUN_0040dfd0(local_8d,PTR_DAT_00af8300);
  FUN_0040c5c8(&local_38);
  FUN_0040c628(&local_20,5);
  return;
}



// === FUN_00aba0e4 @ 00aba0e4 size:29 ===

void FUN_00aba0e4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00abde10(param_1,L"postpone",param_3,param_2);
  return;
}



// === FUN_00abde10 @ 00abde10 size:333 ===

void FUN_00abde10(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  wchar_t *pwVar3;
  undefined *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_18 = 0;
  local_1c = 0;
  puStack_20 = (undefined1 *)0xabde2c;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040c6ac(param_2);
  puStack_24 = &LAB_00abdf5d;
  puStack_28 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  local_10 = *(int *)(local_8 + 0xe0d);
  puStack_20 = &stack0xfffffffc;
  if ((local_10 != 1) &&
     (puStack_20 = &stack0xfffffffc, cVar1 = FUN_009311f4(*(undefined4 *)PTR_DAT_00ba9c04,local_10),
     cVar1 == '\0')) {
    local_10 = FUN_0093204c(*(undefined4 *)PTR_DAT_00ba9c04,local_10);
  }
  do {
    pwVar3 = L"Branch=";
    FUN_00940954(*(undefined4 *)PTR_DAT_00ba9c04,local_10,&local_1c,L"Branch=",&DAT_00abdfc8,
                 L" this branch:",local_c,L"Do you want to ");
    puStack_28 = &DAT_00abdff8;
    FUN_0040d87c(&local_18,7);
    local_14 = FUN_00b2b424(local_18);
    if (local_14 == 2) {
LAB_00abdf3a:
      *in_FS_OFFSET = puStack_28;
      FUN_0040c628(&local_1c,2,pwVar3,&LAB_00abdf64);
      FUN_0040c5c8(&local_c);
      return;
    }
    if (local_14 == 6) {
      uVar2 = 1;
      FUN_00853e10(*(undefined4 *)PTR_DAT_00baa6c4,local_10);
      FUN_0040d98c(local_c,L"learn");
      if ((bool)uVar2) {
        FUN_0084fe60(*(undefined4 *)PTR_DAT_00baa6c4,local_8);
      }
      FUN_0040d98c(local_c,L"postpone");
      if ((bool)uVar2) {
        FUN_0084ff58(*(undefined4 *)PTR_DAT_00baa6c4,0);
      }
      FUN_00af4040(local_8);
      goto LAB_00abdf3a;
    }
    if (local_14 == 7) {
      if (local_10 == 1) goto LAB_00abdf3a;
      local_10 = FUN_0093204c(*(undefined4 *)PTR_DAT_00ba9c04,local_10);
    }
  } while( true );
}



// === FUN_00abe440 @ 00abe440 size:637 ===

void FUN_00abe440(int param_1,char param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint extraout_ECX;
  int extraout_EDX;
  int *in_FS_OFFSET;
  undefined1 uVar5;
  bool bVar6;
  undefined4 uVar7;
  int *piStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_48;
  undefined *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  wchar_t *local_34;
  wchar_t *local_30;
  wchar_t *local_2c;
  undefined8 local_28;
  uint local_20;
  double local_1c;
  uint local_14;
  int local_10;
  ushort local_c;
  char local_9;
  int local_8;
  
  puStack_54 = &stack0xfffffffc;
  local_3c = 0;
  local_40 = 0;
  local_10 = 0;
  puStack_58 = &LAB_00abe6bd;
  piStack_5c = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&piStack_5c;
  local_14 = *(uint *)PTR_DAT_00baade8;
  puVar1 = &stack0xfffffffc;
  local_9 = param_2;
  local_8 = param_1;
  if (0xffff < local_14) {
    local_14 = thunk_FUN_004072dc();
    puVar1 = puStack_54;
  }
  puStack_54 = puVar1;
  local_c = (ushort)local_14;
  local_14 = local_14 & 0xffff;
  local_1c = (double)local_14;
  local_20 = (uint)(local_c >> 1);
  local_28._4_4_ = (undefined4)((ulonglong)(double)local_20 >> 0x20);
  uVar7 = local_28._4_4_;
  local_28 = (double)local_20;
  FUN_008b3fe8();
  uVar2 = FUN_00407bcc();
  if (extraout_EDX != 0 || 0xffff < uVar2) {
    uVar2 = thunk_FUN_004072dc();
  }
  local_c = (ushort)uVar2;
  if (local_c < 10) {
    uVar2 = *(uint *)PTR_DAT_00baade8;
    if (0xffff < uVar2) {
      uVar2 = thunk_FUN_004072dc();
    }
    local_c = (ushort)uVar2;
  }
  if (local_9 == '\0') {
    FUN_0040c9f0(&local_10,&DAT_00abe6d4);
  }
  else {
    do {
      iVar4 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
      iVar3 = iVar4 + (uint)local_c;
      uVar5 = iVar3 == 0;
      if (SCARRY4(iVar4,(uint)local_c)) {
        iVar3 = thunk_FUN_004072dc();
      }
      FUN_009a9d24(iVar3,&local_40);
      FUN_0040d7f4(&local_3c,L"&Postpone until ",local_40);
      local_38 = local_3c;
      local_34 = L"&Show answer first";
      local_30 = L"&Continue with repetitions";
      local_2c = L"Cancel auto-postpone mode";
      piStack_5c = &local_10;
      local_50 = &DAT_00abe6d4;
      local_4c = &DAT_00abe7cc;
      local_48 = &DAT_00abe7dc;
      local_44 = &DAT_00abe7ec;
      FUN_00af7b60(L"How do you want to handle this leech?",&local_50,3,uVar7,3,&local_38);
      FUN_0040d98c(local_10,&DAT_00abe7cc);
      if ((bool)uVar5) {
        FUN_00af16a4(local_8,6);
      }
      FUN_0040d98c(local_10,&DAT_00abe7cc);
    } while ((bool)uVar5);
  }
  bVar6 = local_10 == 0;
  if (!bVar6) {
    FUN_0040d98c(local_10,&DAT_00abe7dc);
    if (bVar6) {
      FUN_00af16a4(local_8,6);
    }
    else {
      FUN_0040d98c(local_10,&DAT_00abe7ec);
      if (bVar6) {
        if ((*PTR_DAT_00ba9b44 == '\x03') &&
           (iVar4 = FUN_00b2b424(L"Cancel auto-postpone mode?"), iVar4 == 6)) {
          *PTR_DAT_00ba9b44 = 1;
          FUN_00af16a4(local_8,5);
        }
      }
      else {
        FUN_00af16a4(local_8,2);
        FUN_00aef854(local_8,0,0);
        iVar4 = FUN_00951558(*(undefined4 *)PTR_DAT_00ba9c04);
        uVar2 = iVar4 + (uint)local_c;
        if (SCARRY4(iVar4,(uint)local_c)) {
          thunk_FUN_004072dc();
          uVar2 = extraout_ECX;
        }
        if (0xffff < uVar2) {
          thunk_FUN_004072dc();
        }
        FUN_0094168c(*(undefined4 *)PTR_DAT_00ba9c04,*(undefined4 *)(local_8 + 0xe0d));
        FUN_00944928(*(undefined4 *)PTR_DAT_00ba9c04);
        FUN_00991178(*(undefined4 *)PTR_DAT_00ba9740,*(undefined4 *)(local_8 + 0xe0d));
        FUN_00ac1330(local_8);
      }
    }
  }
  puVar1 = puStack_54;
  *in_FS_OFFSET = (int)piStack_5c;
  puStack_54 = &LAB_00abe6c4;
  puStack_58 = (undefined1 *)0xabe6b4;
  FUN_0040c628(&local_40,2,puVar1);
  puStack_58 = (undefined1 *)0xabe6bc;
  FUN_0040c5c8(&local_10);
  return;
}



// === FUN_00ac07d4 @ 00ac07d4 size:185 ===

void FUN_00ac07d4(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_14 = 0;
  local_c = 0;
  puStack_1c = &LAB_00ac088d;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar2 = *(char *)(param_1 + 0x121f);
  puVar1 = &stack0xfffffffc;
  local_10 = param_2;
  local_8 = param_1;
  if (((cVar2 != '\0') && (puVar1 = &stack0xfffffffc, cVar2 != '\x02')) &&
     (puVar1 = &stack0xfffffffc, cVar2 != '\b')) {
    cVar2 = FUN_00992f50(*(undefined4 *)PTR_DAT_00ba9740);
    if (cVar2 == '\0') {
      FUN_0040c9f0(&local_c,L"Continue repetitions?");
    }
    else {
      FUN_00b2d4ac(0x1b,&local_14);
      FUN_0040d7f4(&local_c,local_14,&DAT_00ac08a4);
    }
    iVar3 = FUN_00b2b424(local_c);
    if (iVar3 == 6) {
      FUN_00af1908(local_8);
      puVar1 = puStack_18;
    }
    else {
      FUN_00af16a4(local_8,2);
      FUN_00ac2b40(local_8,0);
      puVar1 = puStack_18;
    }
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00ac0894;
  puStack_1c = (undefined1 *)0xac0884;
  FUN_0040c5c8(&local_14,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0xac088c;
  FUN_0040c5c8(&local_c);
  return;
}



// === FUN_00ae58c8 @ 00ae58c8 size:344 ===

void FUN_00ae58c8(int param_1,char param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_b0;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  undefined4 local_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined4 local_8c;
  char local_86 [124];
  char local_a;
  char local_9;
  int local_8;
  
  puStack_9c = &stack0xfffffffc;
  puStack_a8 = &stack0xfffffffc;
  local_8c = 0;
  puStack_a0 = &LAB_00ae5a46;
  local_a4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_a4;
  puStack_ac = &LAB_00ae5a07;
  uStack_b0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_b0;
  puVar1 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  local_9 = param_2;
  local_8 = param_1;
  if (param_2 == '\x05') {
    cVar3 = FUN_00aafcc0(param_1,DAT_00ae5a54);
    puVar1 = puStack_a8;
    puVar2 = puStack_9c;
    if (cVar3 == '\0') {
      local_9 = '\x06';
    }
  }
  puStack_9c = puVar2;
  puStack_a8 = puVar1;
  if (local_9 == '\a') {
    local_a = FUN_00aafc1c(local_8);
    FUN_0094da18(*(undefined4 *)PTR_DAT_00ba9c04,*(undefined4 *)(local_8 + 0xe0d),local_86);
    if (local_86[0] == '\x01') {
      FUN_00b2d4ac(0x2b,PTR_DAT_00ba9ef8);
      FUN_0040c9a8(*(int *)(local_8 + 0xc6c) + 0x90,L"Cancel the just provided grade (Alt+G)");
      FUN_00abe034(local_8,local_a);
      if (local_a == '\0') {
        FUN_0088e8f0(*(undefined4 *)PTR_DAT_00baabf4,local_8 + 0x1136);
        FUN_00aaf9f8(local_8);
      }
    }
    else {
      *(undefined1 *)(local_8 + 0x1135) = 10;
      FUN_00b2d4ac(0x1a,&local_8c);
      FUN_0054a01c(*(undefined4 *)(local_8 + 0xc6c),local_8c);
      FUN_0040c9a8(*(int *)(local_8 + 0xc6c) + 0x90,L"Cancel current topic review (Alt+G)");
      FUN_00aba41c(local_8,local_a,local_86);
    }
  }
  puVar1 = puStack_9c;
  *in_FS_OFFSET = uStack_b0;
  *in_FS_OFFSET = local_a4;
  puStack_9c = &LAB_00ae5a4d;
  puStack_a0 = (undefined1 *)0xae5a45;
  FUN_0040c5c8(&local_8c,local_a4,puVar1);
  return;
}



// === FUN_00aeab20 @ 00aeab20 size:267 ===

void FUN_00aeab20(int param_1,undefined1 param_2,char param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14 [2];
  undefined1 local_b;
  char local_a;
  undefined1 local_9;
  int local_8;
  
  puStack_28 = &stack0xfffffffc;
  puStack_34 = &stack0xfffffffc;
  local_14[0] = 0;
  local_18 = 0;
  puStack_2c = &LAB_00aeac51;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  local_b = 0;
  puStack_38 = &LAB_00aeac10;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_a = param_3;
  local_9 = param_2;
  local_8 = param_1;
  if (*(int *)(param_1 + 0xe0d) == 0) {
    *in_FS_OFFSET = uStack_3c;
    puStack_34 = &stack0xfffffffc;
    puStack_28 = &stack0xfffffffc;
  }
  else {
    puVar1 = &stack0xfffffffc;
    puVar2 = &stack0xfffffffc;
    if (*(char *)(param_1 + 0x121e) == '\a') {
      uVar4 = FUN_008a71ec(*(undefined1 *)(param_1 + 0x1135));
      if ((uVar4 & 8) == 0) {
        cVar3 = FUN_00939618(*(undefined4 *)PTR_DAT_00ba9c04,*(undefined4 *)(local_8 + 0xe0d));
        if (cVar3 == '\x01') {
          FUN_008a50f8(*(undefined1 *)(local_8 + 0x1135),&local_18);
          FUN_0040d7f4(local_14,L"Cannot commit item repetition with the grade: ",local_18);
          FUN_00b2b8f8(local_14[0]);
          *in_FS_OFFSET = uStack_3c;
          goto LAB_00aeac36;
        }
      }
      local_b = 1;
      FUN_00af35fc(local_8,local_9);
      FUN_00af16a4(local_8,2);
      puVar1 = puStack_34;
      puVar2 = puStack_28;
    }
    puStack_28 = puVar2;
    puStack_34 = puVar1;
    if (local_a != '\0') {
      FUN_00af16a4(local_8,2);
    }
    *in_FS_OFFSET = uStack_3c;
  }
LAB_00aeac36:
  puVar1 = puStack_28;
  *in_FS_OFFSET = local_30;
  puStack_28 = &LAB_00aeac58;
  puStack_2c = (undefined1 *)0xaeac50;
  FUN_0040c628(&local_18,2,puVar1);
  return;
}




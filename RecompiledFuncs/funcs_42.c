#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802EC25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC2DC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802EC2E0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EC2E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EC2E8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802EC2EC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802EC2F0: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x802EC2F4: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802EC2F8: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x802EC2FC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802EC300: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802EC304: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802EC308: sh          $t9, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r25;
    // 0x802EC30C: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802EC310: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802EC314: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802EC318: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802EC31C: sb          $t0, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r8;
    // 0x802EC320: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802EC324: swc1        $f0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f0.u32l;
    // 0x802EC328: swc1        $f2, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f2.u32l;
    // 0x802EC32C: swc1        $f2, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f2.u32l;
    // 0x802EC330: jr          $ra
    // 0x802EC334: swc1        $f2, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f2.u32l;
    return;
    // 0x802EC334: swc1        $f2, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f2.u32l;
;}
RECOMP_FUNC void D_80200BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80200BD8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80200BDC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80200BE0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80200BE4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80200BE8: sw          $s7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r23;
    // 0x80200BEC: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x80200BF0: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x80200BF4: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x80200BF8: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x80200BFC: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x80200C00: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80200C04: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x80200C08: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x80200C0C: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x80200C10: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x80200C14: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80200C18: lw          $t7, 0x3C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3C);
    // 0x80200C1C: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80200C20: mtc1        $a2, $f26
    ctx->f26.u32l = ctx->r6;
    // 0x80200C24: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80200C28: lw          $s7, 0x0($t9)
    ctx->r23 = MEM_W(ctx->r25, 0X0);
    // 0x80200C2C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80200C30: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80200C34: bnel        $s7, $zero, L_80200C50
    if (ctx->r23 != 0) {
        // 0x80200C38: mtc1        $zero, $f22
        ctx->f22.u32l = 0;
            goto L_80200C50;
    }
    goto skip_0;
    // 0x80200C38: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    skip_0:
    // 0x80200C3C: jal         0x80231A24
    // 0x80200C40: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80200C40: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80200C44: b           L_80201144
    // 0x80200C48: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_80201144;
    // 0x80200C48: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80200C4C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
L_80200C50:
    // 0x80200C50: sb          $zero, 0x11($s3)
    MEM_B(0X11, ctx->r19) = 0;
    // 0x80200C54: lhu         $t6, 0x2($s7)
    ctx->r14 = MEM_HU(ctx->r23, 0X2);
    // 0x80200C58: c.lt.s      $f26, $f22
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f26.fl < ctx->f22.fl;
    // 0x80200C5C: addiu       $s5, $zero, 0xC
    ctx->r21 = ADD32(0, 0XC);
    // 0x80200C60: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80200C64: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80200C68: bc1f        L_80200C94
    if (!c1cs) {
        // 0x80200C6C: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80200C94;
    }
    // 0x80200C6C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80200C70: trunc.w.s   $f8, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    ctx->f8.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x80200C74: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80200C78: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80200C7C: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x80200C80: add.s       $f6, $f26, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f26.fl + ctx->f24.fl;
    // 0x80200C84: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80200C88: nop

    // 0x80200C8C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80200C90: sub.s       $f26, $f6, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f6.fl - ctx->f4.fl;
L_80200C94:
    // 0x80200C94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80200C98: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80200C9C: nop

    // 0x80200CA0: c.lt.s      $f24, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f24.fl < ctx->f26.fl;
    // 0x80200CA4: nop

    // 0x80200CA8: bc1fl       L_80200CD0
    if (!c1cs) {
        // 0x80200CAC: lbu         $t8, 0x8($s7)
        ctx->r24 = MEM_BU(ctx->r23, 0X8);
            goto L_80200CD0;
    }
    goto skip_1;
    // 0x80200CAC: lbu         $t8, 0x8($s7)
    ctx->r24 = MEM_BU(ctx->r23, 0X8);
    skip_1:
    // 0x80200CB0: trunc.w.s   $f8, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    ctx->f8.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x80200CB4: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80200CB8: nop

    // 0x80200CBC: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80200CC0: nop

    // 0x80200CC4: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80200CC8: sub.s       $f26, $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f26.fl - ctx->f6.fl;
    // 0x80200CCC: lbu         $t8, 0x8($s7)
    ctx->r24 = MEM_BU(ctx->r23, 0X8);
L_80200CD0:
    // 0x80200CD0: sb          $zero, 0x10($s3)
    MEM_B(0X10, ctx->r19) = 0;
    // 0x80200CD4: mul.s       $f26, $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f0.fl);
    // 0x80200CD8: sb          $t8, 0x11($s3)
    MEM_B(0X11, ctx->r19) = ctx->r24;
    // 0x80200CDC: lw          $t4, 0xC($s7)
    ctx->r12 = MEM_W(ctx->r23, 0XC);
    // 0x80200CE0: lw          $s6, 0xC($s3)
    ctx->r22 = MEM_W(ctx->r19, 0XC);
    // 0x80200CE4: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x80200CE8: lw          $s1, 0x4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X4);
    // 0x80200CEC: beq         $t4, $zero, L_80201140
    if (ctx->r12 == 0) {
        // 0x80200CF0: lw          $s2, 0x8($s3)
        ctx->r18 = MEM_W(ctx->r19, 0X8);
            goto L_80201140;
    }
    // 0x80200CF0: lw          $s2, 0x8($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X8);
    // 0x80200CF4: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80200CF8: lhu         $t5, 0x6($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X6);
L_80200CFC:
    // 0x80200CFC: lhu         $t9, 0x2($s7)
    ctx->r25 = MEM_HU(ctx->r23, 0X2);
    // 0x80200D00: lw          $s4, 0x0($s3)
    ctx->r20 = MEM_W(ctx->r19, 0X0);
    // 0x80200D04: bnel        $t5, $t9, L_80200D24
    if (ctx->r13 != ctx->r25) {
        // 0x80200D08: lw          $v0, 0x8($t4)
        ctx->r2 = MEM_W(ctx->r12, 0X8);
            goto L_80200D24;
    }
    goto skip_2;
    // 0x80200D08: lw          $v0, 0x8($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X8);
    skip_2:
    // 0x80200D0C: trunc.w.s   $f4, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    ctx->f4.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x80200D10: lw          $t2, 0xC($t4)
    ctx->r10 = MEM_W(ctx->r12, 0XC);
    // 0x80200D14: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80200D18: b           L_80200DF0
    // 0x80200D1C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
        goto L_80200DF0;
    // 0x80200D1C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80200D20: lw          $v0, 0x8($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X8);
L_80200D24:
    // 0x80200D24: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x80200D28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80200D2C: beq         $v0, $zero, L_80200D50
    if (ctx->r2 == 0) {
        // 0x80200D30: addiu       $ra, $t5, -0x2
        ctx->r31 = ADD32(ctx->r13, -0X2);
            goto L_80200D50;
    }
    // 0x80200D30: addiu       $ra, $t5, -0x2
    ctx->r31 = ADD32(ctx->r13, -0X2);
    // 0x80200D34: trunc.w.s   $f8, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    ctx->f8.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x80200D38: lw          $t2, 0xC($t4)
    ctx->r10 = MEM_W(ctx->r12, 0XC);
    // 0x80200D3C: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x80200D40: nop

    // 0x80200D44: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80200D48: b           L_80200DEC
    // 0x80200D4C: lbu         $a1, 0x0($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X0);
        goto L_80200DEC;
    // 0x80200D4C: lbu         $a1, 0x0($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X0);
L_80200D50:
    // 0x80200D50: bltz        $ra, L_80200DD8
    if (SIGNED(ctx->r31) < 0) {
        // 0x80200D54: or          $t0, $ra, $zero
        ctx->r8 = ctx->r31 | 0;
            goto L_80200DD8;
    }
    // 0x80200D54: or          $t0, $ra, $zero
    ctx->r8 = ctx->r31 | 0;
    // 0x80200D58: trunc.w.s   $f10, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    ctx->f10.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x80200D5C: lw          $t2, 0xC($t4)
    ctx->r10 = MEM_W(ctx->r12, 0XC);
    // 0x80200D60: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80200D64: nop

    // 0x80200D68: addu        $v0, $a3, $t0
    ctx->r2 = ADD32(ctx->r7, ctx->r8);
L_80200D6C:
    // 0x80200D6C: bgez        $v0, L_80200D7C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80200D70: sra         $t7, $v0, 1
        ctx->r15 = S32(SIGNED(ctx->r2) >> 1);
            goto L_80200D7C;
    }
    // 0x80200D70: sra         $t7, $v0, 1
    ctx->r15 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80200D74: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x80200D78: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_80200D7C:
    // 0x80200D7C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80200D80: addu        $v1, $t2, $t8
    ctx->r3 = ADD32(ctx->r10, ctx->r24);
    // 0x80200D84: lhu         $a0, 0x0($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X0);
    // 0x80200D88: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
    // 0x80200D8C: lhu         $a2, 0x2($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X2);
    // 0x80200D90: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80200D94: bne         $at, $zero, L_80200DAC
    if (ctx->r1 != 0) {
        // 0x80200D98: slt         $at, $a1, $a2
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_80200DAC;
    }
    // 0x80200D98: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80200D9C: beql        $at, $zero, L_80200DB0
    if (ctx->r1 == 0) {
        // 0x80200DA0: slt         $at, $a1, $a0
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80200DB0;
    }
    goto skip_3;
    // 0x80200DA0: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    skip_3:
    // 0x80200DA4: b           L_80200DC4
    // 0x80200DA8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_80200DC4;
    // 0x80200DA8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_80200DAC:
    // 0x80200DAC: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
L_80200DB0:
    // 0x80200DB0: beql        $at, $zero, L_80200DC4
    if (ctx->r1 == 0) {
        // 0x80200DB4: addiu       $a3, $t3, 0x1
        ctx->r7 = ADD32(ctx->r11, 0X1);
            goto L_80200DC4;
    }
    goto skip_4;
    // 0x80200DB4: addiu       $a3, $t3, 0x1
    ctx->r7 = ADD32(ctx->r11, 0X1);
    skip_4:
    // 0x80200DB8: b           L_80200DC4
    // 0x80200DBC: addiu       $t0, $t3, -0x1
    ctx->r8 = ADD32(ctx->r11, -0X1);
        goto L_80200DC4;
    // 0x80200DBC: addiu       $t0, $t3, -0x1
    ctx->r8 = ADD32(ctx->r11, -0X1);
    // 0x80200DC0: addiu       $a3, $t3, 0x1
    ctx->r7 = ADD32(ctx->r11, 0X1);
L_80200DC4:
    // 0x80200DC4: slt         $at, $t0, $a3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80200DC8: bne         $at, $zero, L_80200DD8
    if (ctx->r1 != 0) {
        // 0x80200DCC: nop
    
            goto L_80200DD8;
    }
    // 0x80200DCC: nop

    // 0x80200DD0: beql        $t1, $zero, L_80200D6C
    if (ctx->r9 == 0) {
        // 0x80200DD4: addu        $v0, $a3, $t0
        ctx->r2 = ADD32(ctx->r7, ctx->r8);
            goto L_80200D6C;
    }
    goto skip_5;
    // 0x80200DD4: addu        $v0, $a3, $t0
    ctx->r2 = ADD32(ctx->r7, ctx->r8);
    skip_5:
L_80200DD8:
    // 0x80200DD8: beq         $t1, $zero, L_80200DE8
    if (ctx->r9 == 0) {
        // 0x80200DDC: lw          $t2, 0xC($t4)
        ctx->r10 = MEM_W(ctx->r12, 0XC);
            goto L_80200DE8;
    }
    // 0x80200DDC: lw          $t2, 0xC($t4)
    ctx->r10 = MEM_W(ctx->r12, 0XC);
    // 0x80200DE0: b           L_80200DEC
    // 0x80200DE4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
        goto L_80200DEC;
    // 0x80200DE4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
L_80200DE8:
    // 0x80200DE8: or          $a1, $ra, $zero
    ctx->r5 = ctx->r31 | 0;
L_80200DEC:
    // 0x80200DEC: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
L_80200DF0:
    // 0x80200DF0: bne         $t5, $v0, L_80200E00
    if (ctx->r13 != ctx->r2) {
        // 0x80200DF4: sll         $t9, $a1, 1
        ctx->r25 = S32(ctx->r5 << 1);
            goto L_80200E00;
    }
    // 0x80200DF4: sll         $t9, $a1, 1
    ctx->r25 = S32(ctx->r5 << 1);
    // 0x80200DF8: b           L_80200E04
    // 0x80200DFC: addiu       $a2, $t5, -0x1
    ctx->r6 = ADD32(ctx->r13, -0X1);
        goto L_80200E04;
    // 0x80200DFC: addiu       $a2, $t5, -0x1
    ctx->r6 = ADD32(ctx->r13, -0X1);
L_80200E00:
    // 0x80200E00: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_80200E04:
    // 0x80200E04: addu        $t6, $t2, $t9
    ctx->r14 = ADD32(ctx->r10, ctx->r25);
    // 0x80200E08: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80200E0C: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x80200E10: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80200E14: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80200E18: addu        $t9, $t2, $t8
    ctx->r25 = ADD32(ctx->r10, ctx->r24);
    // 0x80200E1C: bgez        $t7, L_80200E30
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80200E20: cvt.s.w     $f12, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80200E30;
    }
    // 0x80200E20: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80200E24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80200E28: nop

    // 0x80200E2C: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
L_80200E30:
    // 0x80200E30: lhu         $t6, 0x0($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X0);
    // 0x80200E34: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80200E38: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80200E3C: bgez        $t6, L_80200E50
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80200E40: cvt.s.w     $f2, $f8
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80200E50;
    }
    // 0x80200E40: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80200E44: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80200E48: nop

    // 0x80200E4C: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
L_80200E50:
    // 0x80200E50: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x80200E54: nop

    // 0x80200E58: bc1fl       L_80200E70
    if (!c1cs) {
        // 0x80200E5C: sub.s       $f4, $f2, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_80200E70;
    }
    goto skip_6;
    // 0x80200E5C: sub.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
    skip_6:
    // 0x80200E60: mov.s       $f18, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    ctx->f18.fl = ctx->f24.fl;
    // 0x80200E64: b           L_80200E80
    // 0x80200E68: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
        goto L_80200E80;
    // 0x80200E68: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x80200E6C: sub.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
L_80200E70:
    // 0x80200E70: sub.s       $f6, $f2, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f26.fl;
    // 0x80200E74: div.s       $f8, $f24, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f24.fl, ctx->f4.fl);
    // 0x80200E78: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80200E7C: sub.s       $f20, $f24, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f24.fl - ctx->f18.fl;
L_80200E80:
    // 0x80200E80: lw          $a0, 0x18($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X18);
    // 0x80200E84: beq         $a0, $zero, L_80200FBC
    if (ctx->r4 == 0) {
        // 0x80200E88: nop
    
            goto L_80200FBC;
    }
    // 0x80200E88: nop

    // 0x80200E8C: beq         $s4, $zero, L_80200FBC
    if (ctx->r20 == 0) {
        // 0x80200E90: sll         $t7, $a1, 4
        ctx->r15 = S32(ctx->r5 << 4);
            goto L_80200FBC;
    }
    // 0x80200E90: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x80200E94: sll         $t8, $a2, 4
    ctx->r24 = S32(ctx->r6 << 4);
    // 0x80200E98: addu        $v1, $a0, $t8
    ctx->r3 = ADD32(ctx->r4, ctx->r24);
    // 0x80200E9C: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80200EA0: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x80200EA4: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80200EA8: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80200EAC: nop

    // 0x80200EB0: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x80200EB4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80200EB8: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x80200EBC: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80200EC0: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80200EC4: mul.s       $f4, $f6, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80200EC8: nop

    // 0x80200ECC: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80200ED0: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80200ED4: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x80200ED8: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80200EDC: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80200EE0: mul.s       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80200EE4: nop

    // 0x80200EE8: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80200EEC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80200EF0: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x80200EF4: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80200EF8: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80200EFC: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80200F00: nop

    // 0x80200F04: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x80200F08: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80200F0C: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x80200F10: lw          $t9, 0x1C($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X1C);
    // 0x80200F14: addu        $t6, $t9, $a1
    ctx->r14 = ADD32(ctx->r25, ctx->r5);
    // 0x80200F18: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80200F1C: beq         $t7, $zero, L_80200FD4
    if (ctx->r15 == 0) {
        // 0x80200F20: nop
    
            goto L_80200FD4;
    }
    // 0x80200F20: nop

    // 0x80200F24: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80200F28: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80200F2C: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80200F30: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80200F34: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80200F38: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    // 0x80200F3C: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80200F40: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    // 0x80200F44: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x80200F48: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80200F4C: sw          $a2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r6;
    // 0x80200F50: sw          $a1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r5;
    // 0x80200F54: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80200F58: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80200F5C: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80200F60: jal         0x8022AA40
    // 0x80200F64: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_1;
    // 0x80200F64: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x80200F68: c.eq.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl == ctx->f22.fl;
    // 0x80200F6C: lw          $a1, 0x90($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X90);
    // 0x80200F70: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    // 0x80200F74: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80200F78: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x80200F7C: bc1t        L_80200FD4
    if (c1cs) {
        // 0x80200F80: lwc1        $f18, 0x78($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
            goto L_80200FD4;
    }
    // 0x80200F80: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80200F84: div.s       $f2, $f24, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f24.fl, ctx->f0.fl);
    // 0x80200F88: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80200F8C: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80200F90: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80200F94: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80200F98: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80200F9C: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80200FA0: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x80200FA4: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80200FA8: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x80200FAC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80200FB0: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x80200FB4: b           L_80200FD4
    // 0x80200FB8: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
        goto L_80200FD4;
    // 0x80200FB8: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
L_80200FBC:
    // 0x80200FBC: beql        $s4, $zero, L_80200FD8
    if (ctx->r20 == 0) {
        // 0x80200FC0: lw          $a0, 0x10($t4)
        ctx->r4 = MEM_W(ctx->r12, 0X10);
            goto L_80200FD8;
    }
    goto skip_7;
    // 0x80200FC0: lw          $a0, 0x10($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X10);
    skip_7:
    // 0x80200FC4: swc1        $f22, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f22.u32l;
    // 0x80200FC8: swc1        $f22, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f22.u32l;
    // 0x80200FCC: swc1        $f22, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f22.u32l;
    // 0x80200FD0: swc1        $f24, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f24.u32l;
L_80200FD4:
    // 0x80200FD4: lw          $a0, 0x10($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X10);
L_80200FD8:
    // 0x80200FD8: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x80200FDC: beq         $a0, $zero, L_8020105C
    if (ctx->r4 == 0) {
        // 0x80200FE0: nop
    
            goto L_8020105C;
    }
    // 0x80200FE0: nop

    // 0x80200FE4: beq         $v0, $zero, L_8020105C
    if (ctx->r2 == 0) {
        // 0x80200FE8: nop
    
            goto L_8020105C;
    }
    // 0x80200FE8: nop

    // 0x80200FEC: multu       $a1, $s5
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80200FF0: mflo        $t8
    ctx->r24 = lo;
    // 0x80200FF4: addu        $v0, $a0, $t8
    ctx->r2 = ADD32(ctx->r4, ctx->r24);
    // 0x80200FF8: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80200FFC: multu       $a2, $s5
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80201000: mflo        $t9
    ctx->r25 = lo;
    // 0x80201004: addu        $v1, $a0, $t9
    ctx->r3 = ADD32(ctx->r4, ctx->r25);
    // 0x80201008: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8020100C: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80201010: nop

    // 0x80201014: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80201018: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8020101C: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    // 0x80201020: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80201024: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80201028: mul.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8020102C: nop

    // 0x80201030: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x80201034: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80201038: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    // 0x8020103C: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80201040: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80201044: mul.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80201048: nop

    // 0x8020104C: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80201050: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80201054: b           L_80201070
    // 0x80201058: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
        goto L_80201070;
    // 0x80201058: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
L_8020105C:
    // 0x8020105C: beql        $v0, $zero, L_80201074
    if (ctx->r2 == 0) {
        // 0x80201060: lw          $a0, 0x14($t4)
        ctx->r4 = MEM_W(ctx->r12, 0X14);
            goto L_80201074;
    }
    goto skip_8;
    // 0x80201060: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
    skip_8:
    // 0x80201064: swc1        $f22, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f22.u32l;
    // 0x80201068: swc1        $f22, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f22.u32l;
    // 0x8020106C: swc1        $f22, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f22.u32l;
L_80201070:
    // 0x80201070: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
L_80201074:
    // 0x80201074: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x80201078: beq         $a0, $zero, L_802010F8
    if (ctx->r4 == 0) {
        // 0x8020107C: nop
    
            goto L_802010F8;
    }
    // 0x8020107C: nop

    // 0x80201080: beq         $v0, $zero, L_802010F8
    if (ctx->r2 == 0) {
        // 0x80201084: nop
    
            goto L_802010F8;
    }
    // 0x80201084: nop

    // 0x80201088: multu       $a1, $s5
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8020108C: mflo        $t6
    ctx->r14 = lo;
    // 0x80201090: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x80201094: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80201098: multu       $a2, $s5
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8020109C: mflo        $t7
    ctx->r15 = lo;
    // 0x802010A0: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x802010A4: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x802010A8: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x802010AC: nop

    // 0x802010B0: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x802010B4: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802010B8: swc1        $f8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f8.u32l;
    // 0x802010BC: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x802010C0: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802010C4: mul.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x802010C8: nop

    // 0x802010CC: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x802010D0: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x802010D4: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x802010D8: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802010DC: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802010E0: mul.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x802010E4: nop

    // 0x802010E8: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x802010EC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802010F0: b           L_8020110C
    // 0x802010F4: swc1        $f6, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f6.u32l;
        goto L_8020110C;
    // 0x802010F4: swc1        $f6, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f6.u32l;
L_802010F8:
    // 0x802010F8: beql        $v0, $zero, L_80201110
    if (ctx->r2 == 0) {
        // 0x802010FC: lhu         $t8, 0x4($t4)
        ctx->r24 = MEM_HU(ctx->r12, 0X4);
            goto L_80201110;
    }
    goto skip_9;
    // 0x802010FC: lhu         $t8, 0x4($t4)
    ctx->r24 = MEM_HU(ctx->r12, 0X4);
    skip_9:
    // 0x80201100: swc1        $f24, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f24.u32l;
    // 0x80201104: swc1        $f24, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f24.u32l;
    // 0x80201108: swc1        $f24, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f24.u32l;
L_8020110C:
    // 0x8020110C: lhu         $t8, 0x4($t4)
    ctx->r24 = MEM_HU(ctx->r12, 0X4);
L_80201110:
    // 0x80201110: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80201114: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80201118: sb          $t8, -0x1($s6)
    MEM_B(-0X1, ctx->r22) = ctx->r24;
    // 0x8020111C: lbu         $t9, 0x10($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X10);
    // 0x80201120: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80201124: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x80201128: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x8020112C: sb          $t6, 0x10($s3)
    MEM_B(0X10, ctx->r19) = ctx->r14;
    // 0x80201130: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80201134: bnel        $t4, $zero, L_80200CFC
    if (ctx->r12 != 0) {
        // 0x80201138: lhu         $t5, 0x6($t4)
        ctx->r13 = MEM_HU(ctx->r12, 0X6);
            goto L_80200CFC;
    }
    goto skip_10;
    // 0x80201138: lhu         $t5, 0x6($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X6);
    skip_10:
    // 0x8020113C: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
L_80201140:
    // 0x80201140: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_80201144:
    // 0x80201144: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80201148: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x8020114C: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x80201150: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x80201154: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x80201158: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x8020115C: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x80201160: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x80201164: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x80201168: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x8020116C: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x80201170: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x80201174: jr          $ra
    // 0x80201178: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x80201178: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void D_802A13C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1440: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802A1444: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802A1448: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802A144C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802A1450: bne         $t6, $zero, L_802A1460
    if (ctx->r14 != 0) {
        // 0x802A1454: nop
    
            goto L_802A1460;
    }
    // 0x802A1454: nop

    // 0x802A1458: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x802A145C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_802A1460:
    // 0x802A1460: jr          $ra
    // 0x802A1464: nop

    return;
    // 0x802A1464: nop

;}
RECOMP_FUNC void D_80212C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80212C34: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80212C38: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80212C3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80212C40: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80212C44: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80212C48: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80212C4C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80212C50: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x80212C54: sll         $t2, $a2, 4
    ctx->r10 = S32(ctx->r6 << 4);
    // 0x80212C58: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x80212C5C: addu        $s0, $a0, $t2
    ctx->r16 = ADD32(ctx->r4, ctx->r10);
    // 0x80212C60: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x80212C64: lh          $t3, 0x0($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X0);
    // 0x80212C68: lh          $t9, 0x2($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2);
    // 0x80212C6C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80212C70: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80212C74: lh          $t0, 0x4($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X4);
    // 0x80212C78: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80212C7C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80212C80: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80212C84: sll         $t7, $a3, 4
    ctx->r15 = S32(ctx->r7 << 4);
    // 0x80212C88: addu        $s1, $a0, $t7
    ctx->r17 = ADD32(ctx->r4, ctx->r15);
    // 0x80212C8C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80212C90: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80212C94: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x80212C98: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x80212C9C: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80212CA0: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x80212CA4: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80212CA8: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x80212CAC: lh          $t4, 0x2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2);
    // 0x80212CB0: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80212CB4: nop

    // 0x80212CB8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80212CBC: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x80212CC0: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x80212CC4: lh          $t5, 0x4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X4);
    // 0x80212CC8: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80212CCC: nop

    // 0x80212CD0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80212CD4: sub.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x80212CD8: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x80212CDC: lh          $t8, 0x0($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X0);
    // 0x80212CE0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80212CE4: nop

    // 0x80212CE8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80212CEC: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x80212CF0: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x80212CF4: lh          $t9, 0x2($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X2);
    // 0x80212CF8: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80212CFC: nop

    // 0x80212D00: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80212D04: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x80212D08: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x80212D0C: lh          $t0, 0x4($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X4);
    // 0x80212D10: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x80212D14: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80212D18: nop

    // 0x80212D1C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80212D20: sub.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x80212D24: jal         0x80234C78
    // 0x80212D28: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    static_3_80234C78(rdram, ctx);
        goto after_0;
    // 0x80212D28: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80212D2C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80212D30: jal         0x80234D30
    // 0x80212D34: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    static_3_80234D30(rdram, ctx);
        goto after_1;
    // 0x80212D34: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_1:
    // 0x80212D38: bne         $v0, $zero, L_80212DBC
    if (ctx->r2 != 0) {
        // 0x80212D3C: lw          $v1, 0x28($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X28);
            goto L_80212DBC;
    }
    // 0x80212D3C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80212D40: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80212D44: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80212D48: jal         0x80231A24
    // 0x80212D4C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x80212D4C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_2:
    // 0x80212D50: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80212D54: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80212D58: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80212D5C: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80212D60: jal         0x80231A24
    // 0x80212D64: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x80212D64: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    after_3:
    // 0x80212D68: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80212D6C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80212D70: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80212D74: lh          $a1, 0x0($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X0);
    // 0x80212D78: lh          $a2, 0x2($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X2);
    // 0x80212D7C: jal         0x80231A24
    // 0x80212D80: lh          $a3, 0x4($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X4);
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x80212D80: lh          $a3, 0x4($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X4);
    after_4:
    // 0x80212D84: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80212D88: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80212D8C: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x80212D90: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x80212D94: jal         0x80231A24
    // 0x80212D98: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    static_3_80231A24(rdram, ctx);
        goto after_5;
    // 0x80212D98: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    after_5:
    // 0x80212D9C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80212DA0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80212DA4: lh          $a1, 0x0($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X0);
    // 0x80212DA8: lh          $a2, 0x2($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X2);
    // 0x80212DAC: jal         0x80231A24
    // 0x80212DB0: lh          $a3, 0x4($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X4);
    static_3_80231A24(rdram, ctx);
        goto after_6;
    // 0x80212DB0: lh          $a3, 0x4($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X4);
    after_6:
    // 0x80212DB4: b           L_80212DC0
    // 0x80212DB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80212DC0;
    // 0x80212DB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80212DBC:
    // 0x80212DBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80212DC0:
    // 0x80212DC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80212DC4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80212DC8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80212DCC: jr          $ra
    // 0x80212DD0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80212DD0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_802306AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802306AC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x802306B0: slti        $at, $t6, 0x30
    ctx->r1 = SIGNED(ctx->r14) < 0X30 ? 1 : 0;
    // 0x802306B4: bne         $at, $zero, L_802306D0
    if (ctx->r1 != 0) {
        // 0x802306B8: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_802306D0;
    }
    // 0x802306B8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802306BC: slti        $at, $t6, 0x3A
    ctx->r1 = SIGNED(ctx->r14) < 0X3A ? 1 : 0;
    // 0x802306C0: beql        $at, $zero, L_802306D4
    if (ctx->r1 == 0) {
        // 0x802306C4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802306D4;
    }
    goto skip_0;
    // 0x802306C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x802306C8: jr          $ra
    // 0x802306CC: addiu       $v0, $t6, -0x30
    ctx->r2 = ADD32(ctx->r14, -0X30);
    return;
    // 0x802306CC: addiu       $v0, $t6, -0x30
    ctx->r2 = ADD32(ctx->r14, -0X30);
L_802306D0:
    // 0x802306D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802306D4:
    // 0x802306D4: jr          $ra
    // 0x802306D8: nop

    return;
    // 0x802306D8: nop

;}
RECOMP_FUNC void D_802A84A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8528: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x802A852C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x802A8530: jr          $ra
    // 0x802A8534: sw          $t6, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r14;
    return;
    // 0x802A8534: sw          $t6, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void D_8027AC80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027ACF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027ACFC: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027AD00: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027AD04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027AD08: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8027AD0C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8027AD10: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8027AD14: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8027AD18: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027AD1C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8027AD20: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027AD24: addiu       $a3, $t6, 0x6E55
    ctx->r7 = ADD32(ctx->r14, 0X6E55);
    // 0x8027AD28: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8027AD2C: addiu       $a1, $t6, 0x6E54
    ctx->r5 = ADD32(ctx->r14, 0X6E54);
    // 0x8027AD30: jal         0x802A38F0
    // 0x8027AD34: addiu       $a0, $a0, 0x6E40
    ctx->r4 = ADD32(ctx->r4, 0X6E40);
    static_3_802A38F0(rdram, ctx);
        goto after_0;
    // 0x8027AD34: addiu       $a0, $a0, 0x6E40
    ctx->r4 = ADD32(ctx->r4, 0X6E40);
    after_0:
    // 0x8027AD38: beq         $v0, $zero, L_8027AD6C
    if (ctx->r2 == 0) {
        // 0x8027AD3C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8027AD6C;
    }
    // 0x8027AD3C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8027AD40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027AD44: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8027AD48: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8027AD4C: jal         0x802E9DA8
    // 0x8027AD50: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    static_3_802E9DA8(rdram, ctx);
        goto after_1;
    // 0x8027AD50: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x8027AD54: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x8027AD58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027AD5C: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x8027AD60: lh          $t8, 0x28($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X28);
    // 0x8027AD64: jalr        $t9
    // 0x8027AD68: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8027AD68: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    after_2:
L_8027AD6C:
    // 0x8027AD6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027AD70: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8027AD74: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8027AD78: jr          $ra
    // 0x8027AD7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8027AD7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802D8978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D89F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D89FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802D8A00: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802D8A04: lwc1        $f4, 0x58($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X58);
    // 0x802D8A08: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802D8A0C: nop

    // 0x802D8A10: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802D8A14: nop

    // 0x802D8A18: bc1tl       L_802D8AD0
    if (c1cs) {
        // 0x802D8A1C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802D8AD0;
    }
    goto skip_0;
    // 0x802D8A1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802D8A20: jal         0x8022331C
    // 0x802D8A24: nop

    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x802D8A24: nop

    after_0:
    // 0x802D8A28: jal         0x802233EC
    // 0x802D8A2C: lui         $a0, 0x4C0
    ctx->r4 = S32(0X4C0 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_1;
    // 0x802D8A2C: lui         $a0, 0x4C0
    ctx->r4 = S32(0X4C0 << 16);
    after_1:
    // 0x802D8A30: lui         $a0, 0x32
    ctx->r4 = S32(0X32 << 16);
    // 0x802D8A34: jal         0x8022342C
    // 0x802D8A38: ori         $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 | 0XFFF;
    static_3_8022342C(rdram, ctx);
        goto after_2;
    // 0x802D8A38: ori         $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 | 0XFFF;
    after_2:
    // 0x802D8A3C: jal         0x80223468
    // 0x802D8A40: addiu       $a0, $zero, 0x14D
    ctx->r4 = ADD32(0, 0X14D);
    static_3_80223468(rdram, ctx);
        goto after_3;
    // 0x802D8A40: addiu       $a0, $zero, 0x14D
    ctx->r4 = ADD32(0, 0X14D);
    after_3:
    // 0x802D8A44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D8A48: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D8A4C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x802D8A50: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x802D8A54: jal         0x80221F44
    // 0x802D8A58: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    static_3_80221F44(rdram, ctx);
        goto after_4;
    // 0x802D8A58: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_4:
    // 0x802D8A5C: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x802D8A60: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802D8A64: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802D8A68: lwc1        $f2, 0x50($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X50);
    // 0x802D8A6C: lwc1        $f0, 0x5C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x802D8A70: lwc1        $f12, 0x54($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X54);
    // 0x802D8A74: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D8A78: sub.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x802D8A7C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D8A80: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x802D8A84: add.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x802D8A88: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x802D8A8C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x802D8A90: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802D8A94: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x802D8A98: sub.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x802D8A9C: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x802D8AA0: add.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x802D8AA4: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802D8AA8: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802D8AAC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x802D8AB0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802D8AB4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x802D8AB8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802D8ABC: jal         0x8021F6F8
    // 0x802D8AC0: nop

    static_3_8021F6F8(rdram, ctx);
        goto after_5;
    // 0x802D8AC0: nop

    after_5:
    // 0x802D8AC4: jal         0x8022337C
    // 0x802D8AC8: nop

    static_3_8022337C(rdram, ctx);
        goto after_6;
    // 0x802D8AC8: nop

    after_6:
    // 0x802D8ACC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802D8AD0:
    // 0x802D8AD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802D8AD4: jr          $ra
    // 0x802D8AD8: nop

    return;
    // 0x802D8AD8: nop

;}
RECOMP_FUNC void D_802D2E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2EF0: jr          $ra
    // 0x802D2EF4: sw          $a1, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r5;
    return;
    // 0x802D2EF4: sw          $a1, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802D3550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D35D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D35D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D35D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D35DC: bne         $a0, $zero, L_802D35F4
    if (ctx->r4 != 0) {
        // 0x802D35E0: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802D35F4;
    }
    // 0x802D35E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D35E4: jal         0x802C67EC
    // 0x802D35E8: addiu       $a0, $zero, 0x1500
    ctx->r4 = ADD32(0, 0X1500);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802D35E8: addiu       $a0, $zero, 0x1500
    ctx->r4 = ADD32(0, 0X1500);
    after_0:
    // 0x802D35EC: beq         $v0, $zero, L_802D3618
    if (ctx->r2 == 0) {
        // 0x802D35F0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802D3618;
    }
    // 0x802D35F0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802D35F4:
    // 0x802D35F4: jal         0x80308668
    // 0x802D35F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80308668(rdram, ctx);
        goto after_1;
    // 0x802D35F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802D35FC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D3600: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802D3604: sw          $t6, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r14;
    // 0x802D3608: jal         0x80315CE4
    // 0x802D360C: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    static_3_80315CE4(rdram, ctx);
        goto after_2;
    // 0x802D360C: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    after_2:
    // 0x802D3610: jal         0x8031DCDC
    // 0x802D3614: addiu       $a0, $s0, 0x1410
    ctx->r4 = ADD32(ctx->r16, 0X1410);
    static_3_8031DCDC(rdram, ctx);
        goto after_3;
    // 0x802D3614: addiu       $a0, $s0, 0x1410
    ctx->r4 = ADD32(ctx->r16, 0X1410);
    after_3:
L_802D3618:
    // 0x802D3618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D361C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802D3620: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D3624: jr          $ra
    // 0x802D3628: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802D3628: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_80230F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230F18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230F1C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80230F20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230F24: beq         $t6, $zero, L_80230F4C
    if (ctx->r14 == 0) {
        // 0x80230F28: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80230F4C;
    }
    // 0x80230F28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80230F2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80230F30: beq         $t6, $at, L_80230F68
    if (ctx->r14 == ctx->r1) {
        // 0x80230F34: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80230F68;
    }
    // 0x80230F34: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230F38: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80230F3C: beq         $t6, $at, L_80230F80
    if (ctx->r14 == ctx->r1) {
        // 0x80230F40: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80230F80;
    }
    // 0x80230F40: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230F44: b           L_80230F9C
    // 0x80230F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80230F9C;
    // 0x80230F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80230F4C:
    // 0x80230F4C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230F50: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80230F54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80230F58: jal         0x802374B0
    // 0x80230F5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_0;
    // 0x80230F5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80230F60: b           L_80230F9C
    // 0x80230F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80230F9C;
    // 0x80230F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80230F68:
    // 0x80230F68: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80230F6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80230F70: jal         0x802374B0
    // 0x80230F74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_1;
    // 0x80230F74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80230F78: b           L_80230F9C
    // 0x80230F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80230F9C;
    // 0x80230F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80230F80:
    // 0x80230F80: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80230F84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80230F88: jal         0x802374B0
    // 0x80230F8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_2;
    // 0x80230F8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80230F90: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80230F94: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x80230F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80230F9C:
    // 0x80230F9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80230FA0: jr          $ra
    // 0x80230FA4: nop

    return;
    // 0x80230FA4: nop

;}
RECOMP_FUNC void D_802812F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281370: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80281374: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281378: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8028137C: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x80281380: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x80281384: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x80281388: lbu         $t6, 0x555($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X555);
    // 0x8028138C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80281390: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80281394: beql        $t6, $zero, L_80281514
    if (ctx->r14 == 0) {
        // 0x80281398: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80281514;
    }
    goto skip_0;
    // 0x80281398: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8028139C: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802813A0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x802813A4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802813A8: beql        $t7, $at, L_80281514
    if (ctx->r15 == ctx->r1) {
        // 0x802813AC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80281514;
    }
    goto skip_1;
    // 0x802813AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x802813B0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802813B4: jal         0x802AEDDC
    // 0x802813B8: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    static_3_802AEDDC(rdram, ctx);
        goto after_0;
    // 0x802813B8: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    after_0:
    // 0x802813BC: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x802813C0: jal         0x8022970C
    // 0x802813C4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x802813C4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x802813C8: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x802813CC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802813D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802813D4: lwc1        $f4, 0x30($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X30);
    // 0x802813D8: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802813DC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802813E0: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x802813E4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802813E8: lwc1        $f6, 0x34($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X34);
    // 0x802813EC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802813F0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x802813F4: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x802813F8: lwc1        $f18, 0x38($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X38);
    // 0x802813FC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80281400: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80281404: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x80281408: lwc1        $f6, 0x548($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X548);
    // 0x8028140C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80281410: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80281414: jal         0x802D01D4
    // 0x80281418: nop

    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x80281418: nop

    after_2:
    // 0x8028141C: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x80281420: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80281424: lh          $t8, 0xA8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XA8);
    // 0x80281428: lw          $t9, 0xAC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XAC);
    // 0x8028142C: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x80281430: jalr        $t9
    // 0x80281434: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80281434: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_3:
    // 0x80281438: lbu         $v0, 0x554($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X554);
    // 0x8028143C: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x80281440: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281444: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80281448: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8028144C: bgez        $v0, L_80281460
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80281450: cvt.s.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80281460;
    }
    // 0x80281450: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80281454: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281458: nop

    // 0x8028145C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_80281460:
    // 0x80281460: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80281464: lwc1        $f10, 0x548($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X548);
    // 0x80281468: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x8028146C: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x80281470: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80281474: nop

    // 0x80281478: bc1fl       L_80281514
    if (!c1cs) {
        // 0x8028147C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80281514;
    }
    goto skip_2;
    // 0x8028147C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x80281480: lw          $t2, 0x54C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X54C);
    // 0x80281484: bnel        $t2, $zero, L_80281514
    if (ctx->r10 != 0) {
        // 0x80281488: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80281514;
    }
    goto skip_3;
    // 0x80281488: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x8028148C: jal         0x8022970C
    // 0x80281490: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_8022970C(rdram, ctx);
        goto after_4;
    // 0x80281490: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_4:
    // 0x80281494: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80281498: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8028149C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802814A0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802814A4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802814A8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x802814AC: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x802814B0: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x802814B4: jal         0x802AABD0
    // 0x802814B8: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    static_3_802AABD0(rdram, ctx);
        goto after_5;
    // 0x802814B8: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x802814BC: lbu         $t3, 0x554($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X554);
    // 0x802814C0: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    // 0x802814C4: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x802814C8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x802814CC: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x802814D0: sw          $v0, 0x54C($t5)
    MEM_W(0X54C, ctx->r13) = ctx->r2;
    // 0x802814D4: lbu         $t6, 0x554($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X554);
    // 0x802814D8: lui         $a3, 0x4296
    ctx->r7 = S32(0X4296 << 16);
    // 0x802814DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802814E0: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x802814E4: jal         0x80320634
    // 0x802814E8: lw          $a0, 0x54C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X54C);
    static_3_80320634(rdram, ctx);
        goto after_6;
    // 0x802814E8: lw          $a0, 0x54C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X54C);
    after_6:
    // 0x802814EC: lbu         $t9, 0x554($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X554);
    // 0x802814F0: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x802814F4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802814F8: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x802814FC: jal         0x803205A0
    // 0x80281500: lw          $a0, 0x54C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X54C);
    static_3_803205A0(rdram, ctx);
        goto after_7;
    // 0x80281500: lw          $a0, 0x54C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X54C);
    after_7:
    // 0x80281504: lbu         $t2, 0x554($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X554);
    // 0x80281508: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8028150C: sb          $t3, 0x554($s0)
    MEM_B(0X554, ctx->r16) = ctx->r11;
    // 0x80281510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80281514:
    // 0x80281514: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80281518: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8028151C: jr          $ra
    // 0x80281520: nop

    return;
    // 0x80281520: nop

;}
RECOMP_FUNC void D_802847F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284878: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8028487C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80284880: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80284884: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80284888: lw          $t7, 0x78($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X78);
    // 0x8028488C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80284890: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x80284894: beql        $t8, $zero, L_802849C8
    if (ctx->r24 == 0) {
        // 0x80284898: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802849C8;
    }
    goto skip_0;
    // 0x80284898: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x8028489C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802848A0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802848A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802848A8: bne         $v0, $at, L_802848B8
    if (ctx->r2 != ctx->r1) {
        // 0x802848AC: nop
    
            goto L_802848B8;
    }
    // 0x802848AC: nop

    // 0x802848B0: b           L_802848B8
    // 0x802848B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_802848B8;
    // 0x802848B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802848B8:
    // 0x802848B8: bne         $v1, $zero, L_802849C4
    if (ctx->r3 != 0) {
        // 0x802848BC: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_802849C4;
    }
    // 0x802848BC: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x802848C0: beq         $v0, $at, L_802848F0
    if (ctx->r2 == ctx->r1) {
        // 0x802848C4: sw          $v0, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r2;
            goto L_802848F0;
    }
    // 0x802848C4: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x802848C8: addiu       $t0, $zero, 0x96
    ctx->r8 = ADD32(0, 0X96);
    // 0x802848CC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802848D0: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    // 0x802848D4: addiu       $a1, $zero, 0xD1
    ctx->r5 = ADD32(0, 0XD1);
    // 0x802848D8: addiu       $a2, $zero, 0xB7
    ctx->r6 = ADD32(0, 0XB7);
    // 0x802848DC: addiu       $a3, $zero, 0xDD
    ctx->r7 = ADD32(0, 0XDD);
    // 0x802848E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802848E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802848E8: jal         0x802CEEB4
    // 0x802848EC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    static_3_802CEEB4(rdram, ctx);
        goto after_0;
    // 0x802848EC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
L_802848F0:
    // 0x802848F0: jal         0x8021E66C
    // 0x802848F4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    static_3_8021E66C(rdram, ctx);
        goto after_1;
    // 0x802848F4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x802848F8: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x802848FC: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80284900: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80284904: lw          $t2, 0x78($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X78);
    // 0x80284908: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x8028490C: beq         $t3, $zero, L_80284948
    if (ctx->r11 == 0) {
        // 0x80284910: nop
    
            goto L_80284948;
    }
    // 0x80284910: nop

    // 0x80284914: jal         0x802AEDE4
    // 0x80284918: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    static_3_802AEDE4(rdram, ctx);
        goto after_2;
    // 0x80284918: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_2:
    // 0x8028491C: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80284920: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80284924: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80284928: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8028492C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80284930: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80284934: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80284938: jal         0x8023072C
    // 0x8028493C: nop

    static_3_8023072C(rdram, ctx);
        goto after_3;
    // 0x8028493C: nop

    after_3:
    // 0x80284940: b           L_80284954
    // 0x80284944: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
        goto L_80284954;
    // 0x80284944: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
L_80284948:
    // 0x80284948: jal         0x8023072C
    // 0x8028494C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_8023072C(rdram, ctx);
        goto after_4;
    // 0x8028494C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_4:
    // 0x80284950: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
L_80284954:
    // 0x80284954: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80284958: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028495C: bne         $t5, $at, L_80284990
    if (ctx->r13 != ctx->r1) {
        // 0x80284960: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80284990;
    }
    // 0x80284960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284964: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80284968: jal         0x8021E708
    // 0x8028496C: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    static_3_8021E708(rdram, ctx);
        goto after_5;
    // 0x8028496C: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    after_5:
    // 0x80284970: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80284974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284978: jal         0x802CE360
    // 0x8028497C: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_6;
    // 0x8028497C: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_6:
    // 0x80284980: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x80284984: addiu       $a1, $zero, 0xD3
    ctx->r5 = ADD32(0, 0XD3);
    // 0x80284988: jal         0x8021E87C
    // 0x8028498C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    static_3_8021E87C(rdram, ctx);
        goto after_7;
    // 0x8028498C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_7:
L_80284990:
    // 0x80284990: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284994: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80284998: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028499C: jal         0x8021E708
    // 0x802849A0: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    static_3_8021E708(rdram, ctx);
        goto after_8;
    // 0x802849A0: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    after_8:
    // 0x802849A4: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x802849A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802849AC: jal         0x802CE360
    // 0x802849B0: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_9;
    // 0x802849B0: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_9:
    // 0x802849B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802849B8: addiu       $a1, $zero, 0xD3
    ctx->r5 = ADD32(0, 0XD3);
    // 0x802849BC: jal         0x8021E87C
    // 0x802849C0: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    static_3_8021E87C(rdram, ctx);
        goto after_10;
    // 0x802849C0: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_10:
L_802849C4:
    // 0x802849C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802849C8:
    // 0x802849C8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802849CC: jr          $ra
    // 0x802849D0: nop

    return;
    // 0x802849D0: nop

;}
RECOMP_FUNC void D_8023D268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D268: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8023D26C: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x8023D270: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x8023D274: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x8023D278: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x8023D27C: ld          $t7, 0x10($sp)
    ctx->r15 = LD(ctx->r29, 0X10);
    // 0x8023D280: ld          $t6, 0x8($sp)
    ctx->r14 = LD(ctx->r29, 0X8);
    // 0x8023D284: ddiv        $zero, $t6, $t7
    DDIV(S64(ctx->r14), S64(ctx->r15), &lo, &hi);
    // 0x8023D288: nop

    // 0x8023D28C: bne         $t7, $zero, L_8023D298
    if (ctx->r15 != 0) {
        // 0x8023D290: nop
    
            goto L_8023D298;
    }
    // 0x8023D290: nop

    // 0x8023D294: break       7
    do_break(2149831316);
L_8023D298:
    // 0x8023D298: daddiu      $at, $zero, -0x1
    ctx->r1 = 0 + -0X1;
    // 0x8023D29C: bne         $t7, $at, L_8023D2B4
    if (ctx->r15 != ctx->r1) {
        // 0x8023D2A0: daddiu      $at, $zero, 0x1
        ctx->r1 = 0 + 0X1;
            goto L_8023D2B4;
    }
    // 0x8023D2A0: daddiu      $at, $zero, 0x1
    ctx->r1 = 0 + 0X1;
    // 0x8023D2A4: dsll32      $at, $at, 31
    ctx->r1 = ctx->r1 << (31 + 32);
    // 0x8023D2A8: bne         $t6, $at, L_8023D2B4
    if (ctx->r14 != ctx->r1) {
        // 0x8023D2AC: nop
    
            goto L_8023D2B4;
    }
    // 0x8023D2AC: nop

    // 0x8023D2B0: break       6
    do_break(2149831344);
L_8023D2B4:
    // 0x8023D2B4: mfhi        $t8
    ctx->r24 = hi;
    // 0x8023D2B8: sd          $t8, 0x0($sp)
    SD(ctx->r24, 0X0, ctx->r29);
    // 0x8023D2BC: bgez        $t8, L_8023D2CC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8023D2C0: nop
    
            goto L_8023D2CC;
    }
    // 0x8023D2C0: nop

    // 0x8023D2C4: bgtz        $t7, L_8023D2E4
    if (SIGNED(ctx->r15) > 0) {
        // 0x8023D2C8: nop
    
            goto L_8023D2E4;
    }
    // 0x8023D2C8: nop

L_8023D2CC:
    // 0x8023D2CC: ld          $t9, 0x0($sp)
    ctx->r25 = LD(ctx->r29, 0X0);
    // 0x8023D2D0: blez        $t9, L_8023D2F4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8023D2D4: nop
    
            goto L_8023D2F4;
    }
    // 0x8023D2D4: nop

    // 0x8023D2D8: ld          $t0, 0x10($sp)
    ctx->r8 = LD(ctx->r29, 0X10);
    // 0x8023D2DC: bgez        $t0, L_8023D2F4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8023D2E0: nop
    
            goto L_8023D2F4;
    }
    // 0x8023D2E0: nop

L_8023D2E4:
    // 0x8023D2E4: ld          $t1, 0x0($sp)
    ctx->r9 = LD(ctx->r29, 0X0);
    // 0x8023D2E8: ld          $t2, 0x10($sp)
    ctx->r10 = LD(ctx->r29, 0X10);
    // 0x8023D2EC: daddu       $t3, $t1, $t2
    ctx->r11 = ctx->r9 + ctx->r10;
    // 0x8023D2F0: sd          $t3, 0x0($sp)
    SD(ctx->r11, 0X0, ctx->r29);
L_8023D2F4:
    // 0x8023D2F4: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x8023D2F8: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x8023D2FC: jr          $ra
    // 0x8023D300: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8023D300: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void D_8027A3D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A450: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027A454: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027A458: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A45C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027A460: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8027A464: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8027A468: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A46C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A470: addiu       $a1, $t6, 0x6830
    ctx->r5 = ADD32(ctx->r14, 0X6830);
    // 0x8027A474: addiu       $a0, $a0, 0x6828
    ctx->r4 = ADD32(ctx->r4, 0X6828);
    // 0x8027A478: addiu       $a3, $t6, 0x6831
    ctx->r7 = ADD32(ctx->r14, 0X6831);
    // 0x8027A47C: jal         0x802A26A0
    // 0x8027A480: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    static_3_802A26A0(rdram, ctx);
        goto after_0;
    // 0x8027A480: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x8027A484: beq         $v0, $zero, L_8027A4A4
    if (ctx->r2 == 0) {
        // 0x8027A488: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8027A4A4;
    }
    // 0x8027A488: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A48C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A490: jal         0x802D6FE8
    // 0x8027A494: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    static_3_802D6FE8(rdram, ctx);
        goto after_1;
    // 0x8027A494: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x8027A498: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027A49C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027A4A0: sh          $t8, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r24;
L_8027A4A4:
    // 0x8027A4A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A4A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027A4AC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8027A4B0: jr          $ra
    // 0x8027A4B4: nop

    return;
    // 0x8027A4B4: nop

;}
RECOMP_FUNC void D_802494D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802494D8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802494DC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802494E0: ldc1        $f6, 0x0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X0);
    // 0x802494E4: lh          $t6, 0x18($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X18);
    // 0x802494E8: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x802494EC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802494F0: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x802494F4: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x802494F8: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x802494FC: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x80249500: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80249504: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80249508: bgezl       $a2, L_80249524
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8024950C: div.d       $f8, $f18, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f6.d);
            goto L_80249524;
    }
    goto skip_0;
    // 0x8024950C: div.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f6.d);
    skip_0:
    // 0x80249510: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80249514: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80249518: nop

    // 0x8024951C: add.d       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f6.d + ctx->f10.d;
    // 0x80249520: div.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f6.d);
L_80249524:
    // 0x80249524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80249528: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8024952C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80249530: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80249534: nop

    // 0x80249538: cvt.w.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_D(ctx->f8.d);
    // 0x8024953C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80249540: nop

    // 0x80249544: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80249548: beql        $v0, $zero, L_802495A4
    if (ctx->r2 == 0) {
        // 0x8024954C: mfc1        $v0, $f16
        ctx->r2 = (int32_t)ctx->f16.u32l;
            goto L_802495A4;
    }
    goto skip_1;
    // 0x8024954C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    skip_1:
    // 0x80249550: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80249554: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80249558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024955C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80249560: sub.d       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f8.d - ctx->f16.d;
    // 0x80249564: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80249568: nop

    // 0x8024956C: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x80249570: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80249574: nop

    // 0x80249578: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8024957C: bnel        $v0, $zero, L_80249598
    if (ctx->r2 != 0) {
        // 0x80249580: ctc1        $t7, $FpcCsr
        set_cop1_cs(ctx->r15);
            goto L_80249598;
    }
    goto skip_2;
    // 0x80249580: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    skip_2:
    // 0x80249584: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x80249588: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8024958C: jr          $ra
    // 0x80249590: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    return;
    // 0x80249590: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    // 0x80249594: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
L_80249598:
    // 0x80249598: jr          $ra
    // 0x8024959C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x8024959C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802495A0: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
L_802495A4:
    // 0x802495A4: nop

    // 0x802495A8: bltzl       $v0, L_80249598
    if (SIGNED(ctx->r2) < 0) {
        // 0x802495AC: ctc1        $t7, $FpcCsr
        set_cop1_cs(ctx->r15);
            goto L_80249598;
    }
    goto skip_3;
    // 0x802495AC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    skip_3:
    // 0x802495B0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802495B4: jr          $ra
    // 0x802495B8: nop

    return;
    // 0x802495B8: nop

;}
RECOMP_FUNC void D_802A8188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8208: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802A820C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802A8210: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802A8214: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802A8218: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A821C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802A8220: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x802A8224: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802A8228: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A822C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A8230: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802A8234: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A8238: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    // 0x802A823C: sb          $zero, 0x7FC4($a0)
    MEM_B(0X7FC4, ctx->r4) = 0;
    // 0x802A8240: sb          $zero, 0x7FC5($a0)
    MEM_B(0X7FC5, ctx->r4) = 0;
    // 0x802A8244: sb          $zero, 0x7FC6($a0)
    MEM_B(0X7FC6, ctx->r4) = 0;
    // 0x802A8248: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x802A824C: swc1        $f12, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f12.u32l;
    // 0x802A8250: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
    // 0x802A8254: jal         0x8030A9AC
    // 0x802A8258: swc1        $f6, 0x7FC0($a0)
    MEM_W(0X7FC0, ctx->r4) = ctx->f6.u32l;
    static_3_8030A9AC(rdram, ctx);
        goto after_0;
    // 0x802A8258: swc1        $f6, 0x7FC0($a0)
    MEM_W(0X7FC0, ctx->r4) = ctx->f6.u32l;
    after_0:
    // 0x802A825C: jal         0x80224CA8
    // 0x802A8260: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802A8260: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_1:
    // 0x802A8264: jal         0x80224CA8
    // 0x802A8268: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x802A8268: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    after_2:
    // 0x802A826C: jal         0x80224CA8
    // 0x802A8270: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    static_3_80224CA8(rdram, ctx);
        goto after_3;
    // 0x802A8270: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_3:
    // 0x802A8274: jal         0x80224CA8
    // 0x802A8278: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x802A8278: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_4:
    // 0x802A827C: jal         0x80224CA8
    // 0x802A8280: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    static_3_80224CA8(rdram, ctx);
        goto after_5;
    // 0x802A8280: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_5:
    // 0x802A8284: jal         0x80224CA8
    // 0x802A8288: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    static_3_80224CA8(rdram, ctx);
        goto after_6;
    // 0x802A8288: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    after_6:
    // 0x802A828C: jal         0x80224CA8
    // 0x802A8290: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    static_3_80224CA8(rdram, ctx);
        goto after_7;
    // 0x802A8290: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_7:
    // 0x802A8294: jal         0x80224CA8
    // 0x802A8298: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    static_3_80224CA8(rdram, ctx);
        goto after_8;
    // 0x802A8298: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_8:
    // 0x802A829C: jal         0x80224CA8
    // 0x802A82A0: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    static_3_80224CA8(rdram, ctx);
        goto after_9;
    // 0x802A82A0: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_9:
    // 0x802A82A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802A82A8: jal         0x80205AA0
    // 0x802A82AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_80205AA0(rdram, ctx);
        goto after_10;
    // 0x802A82AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x802A82B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802A82B4: jal         0x80205EBC
    // 0x802A82B8: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    static_3_80205EBC(rdram, ctx);
        goto after_11;
    // 0x802A82B8: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    after_11:
    // 0x802A82BC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802A82C0: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x802A82C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802A82C8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802A82CC: jal         0x80205E0C
    // 0x802A82D0: sw          $t8, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r24;
    static_3_80205E0C(rdram, ctx);
        goto after_12;
    // 0x802A82D0: sw          $t8, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r24;
    after_12:
    // 0x802A82D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A82D8: lw          $a2, 0x0($at)
    ctx->r6 = MEM_W(ctx->r1, 0X0);
    // 0x802A82DC: lw          $a3, 0x0($at)
    ctx->r7 = MEM_W(ctx->r1, 0X0);
    // 0x802A82E0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x802A82E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802A82E8: jal         0x8021CEF8
    // 0x802A82EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021CEF8(rdram, ctx);
        goto after_13;
    // 0x802A82EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
    // 0x802A82F0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A82F4: jal         0x802B0078
    // 0x802A82F8: lui         $a1, 0x4561
    ctx->r5 = S32(0X4561 << 16);
    static_3_802B0078(rdram, ctx);
        goto after_14;
    // 0x802A82F8: lui         $a1, 0x4561
    ctx->r5 = S32(0X4561 << 16);
    after_14:
    // 0x802A82FC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802A8300: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802A8304: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x802A8308: sb          $t9, 0x716C($v0)
    MEM_B(0X716C, ctx->r2) = ctx->r25;
    // 0x802A830C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802A8310: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x802A8314: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A8318: sb          $t0, 0x716D($v0)
    MEM_B(0X716D, ctx->r2) = ctx->r8;
    // 0x802A831C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x802A8320: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802A8324: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802A8328: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A832C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A8330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A8334: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A8338: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802A833C: jal         0x8030890C
    // 0x802A8340: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    static_3_8030890C(rdram, ctx);
        goto after_15;
    // 0x802A8340: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_15:
    // 0x802A8344: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802A8348: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A834C: jal         0x80309B88
    // 0x802A8350: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309B88(rdram, ctx);
        goto after_16;
    // 0x802A8350: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x802A8354: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802A8358: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802A835C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802A8360: jr          $ra
    // 0x802A8364: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802A8364: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802B68FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B697C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x802B6980: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x802B6984: sw          $s3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r19;
    // 0x802B6988: sw          $s2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r18;
    // 0x802B698C: sw          $s1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r17;
    // 0x802B6990: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x802B6994: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x802B6998: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x802B699C: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x802B69A0: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x802B69A4: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x802B69A8: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x802B69AC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802B69B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B69B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B69B8: bne         $v0, $at, L_802B69D0
    if (ctx->r2 != ctx->r1) {
        // 0x802B69BC: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802B69D0;
    }
    // 0x802B69BC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B69C0: jal         0x80231A24
    // 0x802B69C4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802B69C4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802B69C8: b           L_802B6B28
    // 0x802B69CC: nop

        goto L_802B6B28;
    // 0x802B69CC: nop

L_802B69D0:
    // 0x802B69D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B69D4: bne         $v0, $at, L_802B69EC
    if (ctx->r2 != ctx->r1) {
        // 0x802B69D8: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802B69EC;
    }
    // 0x802B69D8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B69DC: jal         0x80231A24
    // 0x802B69E0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802B69E0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x802B69E4: b           L_802B6B28
    // 0x802B69E8: nop

        goto L_802B6B28;
    // 0x802B69E8: nop

L_802B69EC:
    // 0x802B69EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B69F0: bne         $v0, $at, L_802B6A08
    if (ctx->r2 != ctx->r1) {
        // 0x802B69F4: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802B6A08;
    }
    // 0x802B69F4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B69F8: jal         0x80231A24
    // 0x802B69FC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x802B69FC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x802B6A00: b           L_802B6B28
    // 0x802B6A04: nop

        goto L_802B6B28;
    // 0x802B6A04: nop

L_802B6A08:
    // 0x802B6A08: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802B6A0C: bne         $v0, $at, L_802B6A24
    if (ctx->r2 != ctx->r1) {
        // 0x802B6A10: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802B6A24;
    }
    // 0x802B6A10: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6A14: jal         0x80231A24
    // 0x802B6A18: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x802B6A18: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x802B6A1C: b           L_802B6B28
    // 0x802B6A20: nop

        goto L_802B6B28;
    // 0x802B6A20: nop

L_802B6A24:
    // 0x802B6A24: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802B6A28: bne         $v0, $at, L_802B6A40
    if (ctx->r2 != ctx->r1) {
        // 0x802B6A2C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802B6A40;
    }
    // 0x802B6A2C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6A30: jal         0x80231A24
    // 0x802B6A34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x802B6A34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_4:
    // 0x802B6A38: b           L_802B6B28
    // 0x802B6A3C: nop

        goto L_802B6B28;
    // 0x802B6A3C: nop

L_802B6A40:
    // 0x802B6A40: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x802B6A44: bne         $v0, $at, L_802B6A5C
    if (ctx->r2 != ctx->r1) {
        // 0x802B6A48: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802B6A5C;
    }
    // 0x802B6A48: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6A4C: jal         0x80231A24
    // 0x802B6A50: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_5;
    // 0x802B6A50: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_5:
    // 0x802B6A54: b           L_802B6B28
    // 0x802B6A58: nop

        goto L_802B6B28;
    // 0x802B6A58: nop

L_802B6A5C:
    // 0x802B6A5C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802B6A60: bne         $v0, $at, L_802B6A78
    if (ctx->r2 != ctx->r1) {
        // 0x802B6A64: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802B6A78;
    }
    // 0x802B6A64: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6A68: jal         0x80231A24
    // 0x802B6A6C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_6;
    // 0x802B6A6C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_6:
    // 0x802B6A70: b           L_802B6B28
    // 0x802B6A74: nop

        goto L_802B6B28;
    // 0x802B6A74: nop

L_802B6A78:
    // 0x802B6A78: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802B6A7C: bne         $v0, $at, L_802B6A94
    if (ctx->r2 != ctx->r1) {
        // 0x802B6A80: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802B6A94;
    }
    // 0x802B6A80: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6A84: jal         0x80231A24
    // 0x802B6A88: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_7;
    // 0x802B6A88: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_7:
    // 0x802B6A8C: b           L_802B6B28
    // 0x802B6A90: nop

        goto L_802B6B28;
    // 0x802B6A90: nop

L_802B6A94:
    // 0x802B6A94: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802B6A98: bne         $v0, $at, L_802B6AB0
    if (ctx->r2 != ctx->r1) {
        // 0x802B6A9C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802B6AB0;
    }
    // 0x802B6A9C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6AA0: jal         0x80231A24
    // 0x802B6AA4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_8;
    // 0x802B6AA4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_8:
    // 0x802B6AA8: b           L_802B6B28
    // 0x802B6AAC: nop

        goto L_802B6B28;
    // 0x802B6AAC: nop

L_802B6AB0:
    // 0x802B6AB0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x802B6AB4: bne         $v0, $at, L_802B6ACC
    if (ctx->r2 != ctx->r1) {
        // 0x802B6AB8: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802B6ACC;
    }
    // 0x802B6AB8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6ABC: jal         0x80231A24
    // 0x802B6AC0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_9;
    // 0x802B6AC0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_9:
    // 0x802B6AC4: b           L_802B6B28
    // 0x802B6AC8: nop

        goto L_802B6B28;
    // 0x802B6AC8: nop

L_802B6ACC:
    // 0x802B6ACC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802B6AD0: bne         $v0, $at, L_802B6AE8
    if (ctx->r2 != ctx->r1) {
        // 0x802B6AD4: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802B6AE8;
    }
    // 0x802B6AD4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6AD8: jal         0x80231A24
    // 0x802B6ADC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_10;
    // 0x802B6ADC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_10:
    // 0x802B6AE0: b           L_802B6B28
    // 0x802B6AE4: nop

        goto L_802B6B28;
    // 0x802B6AE4: nop

L_802B6AE8:
    // 0x802B6AE8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802B6AEC: bne         $v0, $at, L_802B6B08
    if (ctx->r2 != ctx->r1) {
        // 0x802B6AF0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802B6B08;
    }
    // 0x802B6AF0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6AF4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6AF8: jal         0x80231A24
    // 0x802B6AFC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_11;
    // 0x802B6AFC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_11:
    // 0x802B6B00: b           L_802B6B28
    // 0x802B6B04: nop

        goto L_802B6B28;
    // 0x802B6B04: nop

L_802B6B08:
    // 0x802B6B08: jal         0x80231A24
    // 0x802B6B0C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_12;
    // 0x802B6B0C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_12:
    // 0x802B6B10: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6B14: jal         0x80231A24
    // 0x802B6B18: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_13;
    // 0x802B6B18: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_13:
    // 0x802B6B1C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6B20: jal         0x80231A24
    // 0x802B6B24: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_14;
    // 0x802B6B24: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_14:
L_802B6B28:
    // 0x802B6B28: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6B2C: jal         0x80231A24
    // 0x802B6B30: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_15;
    // 0x802B6B30: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_15:
    // 0x802B6B34: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802B6B38: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802B6B3C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802B6B40: jal         0x802D2668
    // 0x802B6B44: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D2668(rdram, ctx);
        goto after_16;
    // 0x802B6B44: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_16:
    // 0x802B6B48: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x802B6B4C: jal         0x802D25D4
    // 0x802B6B50: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D25D4(rdram, ctx);
        goto after_17;
    // 0x802B6B50: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_17:
    // 0x802B6B54: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x802B6B58: jal         0x802D2660
    // 0x802B6B5C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D2660(rdram, ctx);
        goto after_18;
    // 0x802B6B5C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_18:
    // 0x802B6B60: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B6B64: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B6B68: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x802B6B6C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802B6B70: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x802B6B74: jal         0x802D2650
    // 0x802B6B78: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D2650(rdram, ctx);
        goto after_19;
    // 0x802B6B78: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_19:
    // 0x802B6B7C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B6B80: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B6B84: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802B6B88: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B6B8C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B6B90: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802B6B94: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x802B6B98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B6B9C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x802B6BA0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802B6BA4: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x802B6BA8: addiu       $s0, $zero, 0x64
    ctx->r16 = ADD32(0, 0X64);
    // 0x802B6BAC: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x802B6BB0: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x802B6BB4: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
L_802B6BB8:
    // 0x802B6BB8: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802B6BBC: cvt.s.w     $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    ctx->f24.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802B6BC0: c.le.s      $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f10.fl <= ctx->f24.fl;
    // 0x802B6BC4: nop

    // 0x802B6BC8: bc1fl       L_802B6C74
    if (!c1cs) {
        // 0x802B6BCC: lwc1        $f4, 0x70($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
            goto L_802B6C74;
    }
    goto skip_0;
    // 0x802B6BCC: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    skip_0:
    // 0x802B6BD0: bne         $s1, $zero, L_802B6C70
    if (ctx->r17 != 0) {
        // 0x802B6BD4: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_802B6C70;
    }
    // 0x802B6BD4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802B6BD8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802B6BDC: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802B6BE0: sub.s       $f8, $f26, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f26.fl - ctx->f28.fl;
    // 0x802B6BE4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802B6BE8: sub.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x802B6BEC: sub.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x802B6BF0: cvt.d.s     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f20.d = CVT_D_S(ctx->f10.fl);
    // 0x802B6BF4: div.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x802B6BF8: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802B6BFC: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802B6C00: add.s       $f0, $f18, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f28.fl;
    // 0x802B6C04: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802B6C08: cvt.d.s     $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f22.d = CVT_D_S(ctx->f0.fl);
    // 0x802B6C0C: mul.s       $f30, $f4, $f4
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f30.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x802B6C10: jal         0x8022AA40
    // 0x802B6C14: sub.s       $f12, $f16, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f28.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_20;
    // 0x802B6C14: sub.s       $f12, $f16, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f28.fl;
    after_20:
    // 0x802B6C18: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B6C1C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B6C20: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802B6C24: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802B6C28: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802B6C2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B6C30: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B6C34: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6C38: mfc1        $a2, $f21
    ctx->r6 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x802B6C3C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802B6C40: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802B6C44: div.s       $f2, $f30, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f30.fl, ctx->f8.fl);
    // 0x802B6C48: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B6C4C: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x802B6C50: div.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    // 0x802B6C54: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x802B6C58: sdc1        $f18, 0x18($sp)
    CHECK_FR(ctx, 18);
    SD(ctx->f18.u64, 0X18, ctx->r29);
    // 0x802B6C5C: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802B6C60: div.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802B6C64: cvt.d.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.d = CVT_D_S(ctx->f18.fl);
    // 0x802B6C68: jal         0x80231A24
    // 0x802B6C6C: sdc1        $f16, 0x20($sp)
    CHECK_FR(ctx, 16);
    SD(ctx->f16.u64, 0X20, ctx->r29);
    static_3_80231A24(rdram, ctx);
        goto after_21;
    // 0x802B6C6C: sdc1        $f16, 0x20($sp)
    CHECK_FR(ctx, 16);
    SD(ctx->f16.u64, 0X20, ctx->r29);
    after_21:
L_802B6C70:
    // 0x802B6C70: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
L_802B6C74:
    // 0x802B6C74: c.le.s      $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f4.fl <= ctx->f24.fl;
    // 0x802B6C78: nop

    // 0x802B6C7C: bc1fl       L_802B6D04
    if (!c1cs) {
        // 0x802B6C80: lwc1        $f6, 0x8C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
            goto L_802B6D04;
    }
    goto skip_1;
    // 0x802B6C80: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    skip_1:
    // 0x802B6C84: bne         $s2, $zero, L_802B6D00
    if (ctx->r18 != 0) {
        // 0x802B6C88: lwc1        $f6, 0x9C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_802B6D00;
    }
    // 0x802B6C88: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x802B6C8C: mul.s       $f10, $f26, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x802B6C90: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x802B6C94: cvt.d.s     $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f20.d = CVT_D_S(ctx->f26.fl);
    // 0x802B6C98: mul.s       $f30, $f6, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f30.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x802B6C9C: cvt.d.s     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f22.d = CVT_D_S(ctx->f4.fl);
    // 0x802B6CA0: jal         0x8022AA40
    // 0x802B6CA4: sub.s       $f12, $f10, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f28.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_22;
    // 0x802B6CA4: sub.s       $f12, $f10, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f28.fl;
    after_22:
    // 0x802B6CA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B6CAC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B6CB0: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x802B6CB4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802B6CB8: mul.s       $f18, $f0, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802B6CBC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B6CC0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B6CC4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6CC8: mfc1        $a2, $f23
    ctx->r6 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x802B6CCC: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802B6CD0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802B6CD4: div.s       $f2, $f30, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = DIV_S(ctx->f30.fl, ctx->f18.fl);
    // 0x802B6CD8: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B6CDC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802B6CE0: div.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802B6CE4: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x802B6CE8: sdc1        $f16, 0x18($sp)
    CHECK_FR(ctx, 16);
    SD(ctx->f16.u64, 0X18, ctx->r29);
    // 0x802B6CEC: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802B6CF0: div.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x802B6CF4: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x802B6CF8: jal         0x80231A24
    // 0x802B6CFC: sdc1        $f10, 0x20($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X20, ctx->r29);
    static_3_80231A24(rdram, ctx);
        goto after_23;
    // 0x802B6CFC: sdc1        $f10, 0x20($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X20, ctx->r29);
    after_23:
L_802B6D00:
    // 0x802B6D00: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
L_802B6D04:
    // 0x802B6D04: c.le.s      $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f6.fl <= ctx->f24.fl;
    // 0x802B6D08: nop

    // 0x802B6D0C: bc1fl       L_802B6D94
    if (!c1cs) {
        // 0x802B6D10: lwc1        $f4, 0x74($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
            goto L_802B6D94;
    }
    goto skip_2;
    // 0x802B6D10: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    skip_2:
    // 0x802B6D14: bne         $s3, $zero, L_802B6D90
    if (ctx->r19 != 0) {
        // 0x802B6D18: lwc1        $f0, 0x98($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X98);
            goto L_802B6D90;
    }
    // 0x802B6D18: lwc1        $f0, 0x98($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802B6D1C: mul.s       $f4, $f26, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x802B6D20: cvt.d.s     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f22.d = CVT_D_S(ctx->f6.fl);
    // 0x802B6D24: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x802B6D28: mul.s       $f30, $f0, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f30.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802B6D2C: cvt.d.s     $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f20.d = CVT_D_S(ctx->f26.fl);
    // 0x802B6D30: jal         0x8022AA40
    // 0x802B6D34: sub.s       $f12, $f4, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f28.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_24;
    // 0x802B6D34: sub.s       $f12, $f4, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f28.fl;
    after_24:
    // 0x802B6D38: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B6D3C: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B6D40: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802B6D44: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802B6D48: mul.s       $f18, $f0, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802B6D4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B6D50: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B6D54: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6D58: mfc1        $a2, $f23
    ctx->r6 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x802B6D5C: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802B6D60: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802B6D64: div.s       $f2, $f30, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = DIV_S(ctx->f30.fl, ctx->f18.fl);
    // 0x802B6D68: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B6D6C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802B6D70: div.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802B6D74: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x802B6D78: sdc1        $f16, 0x18($sp)
    CHECK_FR(ctx, 16);
    SD(ctx->f16.u64, 0X18, ctx->r29);
    // 0x802B6D7C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B6D80: div.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x802B6D84: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x802B6D88: jal         0x80231A24
    // 0x802B6D8C: sdc1        $f10, 0x20($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X20, ctx->r29);
    static_3_80231A24(rdram, ctx);
        goto after_25;
    // 0x802B6D8C: sdc1        $f10, 0x20($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X20, ctx->r29);
    after_25:
L_802B6D90:
    // 0x802B6D90: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
L_802B6D94:
    // 0x802B6D94: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802B6D98: c.lt.s      $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f4.fl < ctx->f24.fl;
    // 0x802B6D9C: nop

    // 0x802B6DA0: bc1fl       L_802B6E90
    if (!c1cs) {
        // 0x802B6DA4: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_802B6E90;
    }
    goto skip_3;
    // 0x802B6DA4: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    skip_3:
    // 0x802B6DA8: c.lt.s      $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f24.fl < ctx->f6.fl;
    // 0x802B6DAC: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802B6DB0: bc1fl       L_802B6E90
    if (!c1cs) {
        // 0x802B6DB4: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_802B6E90;
    }
    goto skip_4;
    // 0x802B6DB4: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    skip_4:
    // 0x802B6DB8: c.eq.s      $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f8.fl == ctx->f24.fl;
    // 0x802B6DBC: nop

    // 0x802B6DC0: bc1tl       L_802B6E90
    if (c1cs) {
        // 0x802B6DC4: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_802B6E90;
    }
    goto skip_5;
    // 0x802B6DC4: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    skip_5:
    // 0x802B6DC8: c.lt.s      $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f24.fl < ctx->f8.fl;
    // 0x802B6DCC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802B6DD0: bc1fl       L_802B6E00
    if (!c1cs) {
        // 0x802B6DD4: mov.s       $f20, $f26
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    ctx->f20.fl = ctx->f26.fl;
            goto L_802B6E00;
    }
    goto skip_6;
    // 0x802B6DD4: mov.s       $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    ctx->f20.fl = ctx->f26.fl;
    skip_6:
    // 0x802B6DD8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B6DDC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B6DE0: sub.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x802B6DE4: sub.s       $f4, $f24, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f24.fl - ctx->f10.fl;
    // 0x802B6DE8: sub.s       $f8, $f26, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f26.fl - ctx->f28.fl;
    // 0x802B6DEC: div.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x802B6DF0: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802B6DF4: b           L_802B6E00
    // 0x802B6DF8: add.s       $f20, $f18, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = ctx->f18.fl + ctx->f28.fl;
        goto L_802B6E00;
    // 0x802B6DF8: add.s       $f20, $f18, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = ctx->f18.fl + ctx->f28.fl;
    // 0x802B6DFC: mov.s       $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    ctx->f20.fl = ctx->f26.fl;
L_802B6E00:
    // 0x802B6E00: mul.s       $f10, $f20, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x802B6E04: jal         0x8022AA40
    // 0x802B6E08: sub.s       $f12, $f10, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f28.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_26;
    // 0x802B6E08: sub.s       $f12, $f10, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f28.fl;
    after_26:
    // 0x802B6E0C: multu       $s0, $s0
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802B6E10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B6E14: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B6E18: cvt.d.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.d = CVT_D_S(ctx->f20.fl);
    // 0x802B6E1C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B6E20: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B6E24: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x802B6E28: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x802B6E2C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B6E30: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6E34: mflo        $t6
    ctx->r14 = lo;
    // 0x802B6E38: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x802B6E3C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802B6E40: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B6E44: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802B6E48: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802B6E4C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B6E50: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802B6E54: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802B6E58: div.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802B6E5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B6E60: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B6E64: mul.s       $f8, $f24, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f24.fl, ctx->f6.fl);
    // 0x802B6E68: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802B6E6C: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x802B6E70: sdc1        $f16, 0x10($sp)
    CHECK_FR(ctx, 16);
    SD(ctx->f16.u64, 0X10, ctx->r29);
    // 0x802B6E74: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B6E78: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x802B6E7C: div.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x802B6E80: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802B6E84: jal         0x80231A24
    // 0x802B6E88: sdc1        $f8, 0x18($sp)
    CHECK_FR(ctx, 8);
    SD(ctx->f8.u64, 0X18, ctx->r29);
    static_3_80231A24(rdram, ctx);
        goto after_27;
    // 0x802B6E88: sdc1        $f8, 0x18($sp)
    CHECK_FR(ctx, 8);
    SD(ctx->f8.u64, 0X18, ctx->r29);
    after_27:
    // 0x802B6E8C: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
L_802B6E90:
    // 0x802B6E90: addiu       $at, $zero, 0x3E8
    ctx->r1 = ADD32(0, 0X3E8);
    // 0x802B6E94: bnel        $s0, $at, L_802B6BB8
    if (ctx->r16 != ctx->r1) {
        // 0x802B6E98: mtc1        $s0, $f8
        ctx->f8.u32l = ctx->r16;
            goto L_802B6BB8;
    }
    goto skip_7;
    // 0x802B6E98: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    skip_7:
    // 0x802B6E9C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6EA0: jal         0x80231A24
    // 0x802B6EA4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_28;
    // 0x802B6EA4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_28:
    // 0x802B6EA8: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x802B6EAC: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x802B6EB0: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x802B6EB4: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x802B6EB8: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x802B6EBC: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x802B6EC0: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x802B6EC4: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x802B6EC8: lw          $s1, 0x60($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X60);
    // 0x802B6ECC: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
    // 0x802B6ED0: lw          $s3, 0x68($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X68);
    // 0x802B6ED4: jr          $ra
    // 0x802B6ED8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x802B6ED8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void D_802463C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802463C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802463C4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x802463C8: lbu         $t8, 0x3C($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3C);
    // 0x802463CC: lbu         $t6, 0x3D($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3D);
    // 0x802463D0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802463D4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802463D8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802463DC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802463E0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802463E4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802463E8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802463EC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802463F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802463F4: lbu         $t1, 0x64($s4)
    ctx->r9 = MEM_BU(ctx->r20, 0X64);
    // 0x802463F8: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x802463FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80246400: bgez        $t6, L_80246410
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80246404: sra         $t7, $t6, 2
        ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
            goto L_80246410;
    }
    // 0x80246404: sra         $t7, $t6, 2
    ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
    // 0x80246408: addiu       $at, $t6, 0x3
    ctx->r1 = ADD32(ctx->r14, 0X3);
    // 0x8024640C: sra         $t7, $at, 2
    ctx->r15 = S32(SIGNED(ctx->r1) >> 2);
L_80246410:
    // 0x80246410: bgez        $t8, L_80246424
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80246414: andi        $t9, $t8, 0x7
        ctx->r25 = ctx->r24 & 0X7;
            goto L_80246424;
    }
    // 0x80246414: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x80246418: beq         $t9, $zero, L_80246424
    if (ctx->r25 == 0) {
        // 0x8024641C: nop
    
            goto L_80246424;
    }
    // 0x8024641C: nop

    // 0x80246420: addiu       $t9, $t9, -0x8
    ctx->r25 = ADD32(ctx->r25, -0X8);
L_80246424:
    // 0x80246424: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x80246428: addu        $s6, $t7, $t0
    ctx->r22 = ADD32(ctx->r15, ctx->r8);
    // 0x8024642C: blez        $t1, L_80246534
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80246430: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80246534;
    }
    // 0x80246430: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80246434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80246438: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
L_8024643C:
    // 0x8024643C: lbu         $t2, 0x3C($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3C);
    // 0x80246440: blez        $v0, L_80246450
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80246444: addu        $t3, $s3, $s6
        ctx->r11 = ADD32(ctx->r19, ctx->r22);
            goto L_80246450;
    }
    // 0x80246444: addu        $t3, $s3, $s6
    ctx->r11 = ADD32(ctx->r19, ctx->r22);
    // 0x80246448: b           L_80246458
    // 0x8024644C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_80246458;
    // 0x8024644C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80246450:
    // 0x80246450: lw          $s1, 0x60($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X60);
    // 0x80246454: nop

L_80246458:
    // 0x80246458: beq         $t2, $v0, L_80246488
    if (ctx->r10 == ctx->r2) {
        // 0x8024645C: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80246488;
    }
    // 0x8024645C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80246460: lbu         $t4, 0x101($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X101);
    // 0x80246464: bgez        $v0, L_80246478
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80246468: andi        $t5, $v0, 0x7
        ctx->r13 = ctx->r2 & 0X7;
            goto L_80246478;
    }
    // 0x80246468: andi        $t5, $v0, 0x7
    ctx->r13 = ctx->r2 & 0X7;
    // 0x8024646C: beq         $t5, $zero, L_80246478
    if (ctx->r13 == 0) {
        // 0x80246470: nop
    
            goto L_80246478;
    }
    // 0x80246470: nop

    // 0x80246474: addiu       $t5, $t5, -0x8
    ctx->r13 = ADD32(ctx->r13, -0X8);
L_80246478:
    // 0x80246478: sllv        $t8, $t6, $t5
    ctx->r24 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x8024647C: and         $t9, $t4, $t8
    ctx->r25 = ctx->r12 & ctx->r24;
    // 0x80246480: beq         $t9, $zero, L_8024651C
    if (ctx->r25 == 0) {
        // 0x80246484: nop
    
            goto L_8024651C;
    }
    // 0x80246484: nop

L_80246488:
    // 0x80246488: lbu         $t7, 0x100($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X100);
    // 0x8024648C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80246490: beq         $t7, $v0, L_802464C0
    if (ctx->r15 == ctx->r2) {
        // 0x80246494: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_802464C0;
    }
    // 0x80246494: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80246498: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8024649C: jal         0x80245404
    // 0x802464A0: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    static_3_80245404(rdram, ctx);
        goto after_0;
    // 0x802464A0: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    after_0:
    // 0x802464A4: beq         $v0, $zero, L_802464BC
    if (ctx->r2 == 0) {
        // 0x802464A8: nop
    
            goto L_802464BC;
    }
    // 0x802464A8: nop

    // 0x802464AC: beq         $v0, $s5, L_802464BC
    if (ctx->r2 == ctx->r21) {
        // 0x802464B0: nop
    
            goto L_802464BC;
    }
    // 0x802464B0: nop

    // 0x802464B4: b           L_8024653C
    // 0x802464B8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8024653C;
    // 0x802464B8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802464BC:
    // 0x802464BC: sb          $s2, 0x100($s3)
    MEM_B(0X100, ctx->r19) = ctx->r18;
L_802464C0:
    // 0x802464C0: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x802464C4: beq         $at, $zero, L_80246508
    if (ctx->r1 == 0) {
        // 0x802464C8: slti        $at, $s1, 0x80
        ctx->r1 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
            goto L_80246508;
    }
    // 0x802464C8: slti        $at, $s1, 0x80
    ctx->r1 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x802464CC: beq         $at, $zero, L_80246508
    if (ctx->r1 == 0) {
        // 0x802464D0: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_80246508;
    }
    // 0x802464D0: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x802464D4: addu        $v1, $s3, $v0
    ctx->r3 = ADD32(ctx->r19, ctx->r2);
    // 0x802464D8: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
L_802464DC:
    // 0x802464DC: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x802464E0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x802464E4: bne         $t0, $t1, L_802464F4
    if (ctx->r8 != ctx->r9) {
        // 0x802464E8: slti        $at, $s0, 0x2
        ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_802464F4;
    }
    // 0x802464E8: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x802464EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802464F0: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
L_802464F4:
    // 0x802464F4: beq         $at, $zero, L_80246508
    if (ctx->r1 == 0) {
        // 0x802464F8: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80246508;
    }
    // 0x802464F8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x802464FC: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x80246500: bne         $at, $zero, L_802464DC
    if (ctx->r1 != 0) {
        // 0x80246504: lhu         $t0, 0x3C($sp)
        ctx->r8 = MEM_HU(ctx->r29, 0X3C);
            goto L_802464DC;
    }
    // 0x80246504: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
L_80246508:
    // 0x80246508: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8024650C: bne         $at, $zero, L_8024651C
    if (ctx->r1 != 0) {
        // 0x80246510: nop
    
            goto L_8024651C;
    }
    // 0x80246510: nop

    // 0x80246514: b           L_80246538
    // 0x80246518: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80246538;
    // 0x80246518: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8024651C:
    // 0x8024651C: lbu         $t3, 0x64($s4)
    ctx->r11 = MEM_BU(ctx->r20, 0X64);
    // 0x80246520: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80246524: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x80246528: slt         $at, $v0, $t3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8024652C: bne         $at, $zero, L_8024643C
    if (ctx->r1 != 0) {
        // 0x80246530: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8024643C;
    }
    // 0x80246530: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_80246534:
    // 0x80246534: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80246538:
    // 0x80246538: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8024653C:
    // 0x8024653C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80246540: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80246544: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80246548: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8024654C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80246550: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80246554: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80246558: jr          $ra
    // 0x8024655C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8024655C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_80236C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80236C80: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x80236C84: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80236C88: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80236C8C: multu       $a3, $t6
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80236C90: lw          $t9, 0x8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8);
    // 0x80236C94: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80236C98: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x80236C9C: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80236CA0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80236CA4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80236CA8: mflo        $v0
    ctx->r2 = lo;
    // 0x80236CAC: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x80236CB0: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x80236CB4: addu        $t1, $a0, $t7
    ctx->r9 = ADD32(ctx->r4, ctx->r15);
    // 0x80236CB8: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x80236CBC: bne         $at, $zero, L_80236CCC
    if (ctx->r1 != 0) {
        // 0x80236CC0: addu        $t2, $a0, $t7
        ctx->r10 = ADD32(ctx->r4, ctx->r15);
            goto L_80236CCC;
    }
    // 0x80236CC0: addu        $t2, $a0, $t7
    ctx->r10 = ADD32(ctx->r4, ctx->r15);
    // 0x80236CC4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80236CC8: sw          $t2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r10;
L_80236CCC:
    // 0x80236CCC: jr          $ra
    // 0x80236CD0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80236CD0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void D_802DCA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DCAA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802DCAA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802DCAA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802DCAAC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802DCAB0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802DCAB4: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x802DCAB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DCABC: lh          $t6, 0x38($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X38);
    // 0x802DCAC0: lw          $t9, 0x3C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X3C);
    // 0x802DCAC4: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802DCAC8: jalr        $t9
    // 0x802DCACC: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802DCACC: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_0:
    // 0x802DCAD0: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802DCAD4: swc1        $f0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f0.u32l;
    // 0x802DCAD8: lh          $t7, 0x48($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X48);
    // 0x802DCADC: lw          $t9, 0x4C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4C);
    // 0x802DCAE0: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x802DCAE4: jalr        $t9
    // 0x802DCAE8: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802DCAE8: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_1:
    // 0x802DCAEC: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802DCAF0: swc1        $f0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f0.u32l;
    // 0x802DCAF4: lh          $t8, 0x40($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X40);
    // 0x802DCAF8: lw          $t9, 0x44($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X44);
    // 0x802DCAFC: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x802DCB00: jalr        $t9
    // 0x802DCB04: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802DCB04: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_2:
    // 0x802DCB08: swc1        $f0, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f0.u32l;
    // 0x802DCB0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802DCB10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802DCB14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802DCB18: jr          $ra
    // 0x802DCB1C: nop

    return;
    // 0x802DCB1C: nop

;}
RECOMP_FUNC void D_8027EAC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027EB3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027EB40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027EB44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027EB48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8027EB4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027EB50: bne         $a2, $at, L_8027EB60
    if (ctx->r6 != ctx->r1) {
        // 0x8027EB54: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_8027EB60;
    }
    // 0x8027EB54: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8027EB58: b           L_8027EBF0
    // 0x8027EB5C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8027EBF0;
    // 0x8027EB5C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8027EB60:
    // 0x8027EB60: lh          $a0, 0x6C38($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6C38);
    // 0x8027EB64: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8027EB68: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8027EB6C: blezl       $a0, L_8027EBF0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8027EB70: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027EBF0;
    }
    goto skip_0;
    // 0x8027EB70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
L_8027EB74:
    // 0x8027EB74: lw          $a2, 0x68B4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X68B4);
    // 0x8027EB78: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8027EB7C: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8027EB80: bne         $a1, $a2, L_8027EBE4
    if (ctx->r5 != ctx->r6) {
        // 0x8027EB84: nop
    
            goto L_8027EBE4;
    }
    // 0x8027EB84: nop

    // 0x8027EB88: lw          $t6, 0x6B0C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X6B0C);
    // 0x8027EB8C: bne         $t6, $zero, L_8027EBE4
    if (ctx->r14 != 0) {
        // 0x8027EB90: nop
    
            goto L_8027EBE4;
    }
    // 0x8027EB90: nop

    // 0x8027EB94: lbu         $t7, 0x37($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X37);
    // 0x8027EB98: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027EB9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027EBA0: beq         $t7, $zero, L_8027EBDC
    if (ctx->r15 == 0) {
        // 0x8027EBA4: nop
    
            goto L_8027EBDC;
    }
    // 0x8027EBA4: nop

    // 0x8027EBA8: sw          $t8, 0x6B0C($v0)
    MEM_W(0X6B0C, ctx->r2) = ctx->r24;
    // 0x8027EBAC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8027EBB0: jal         0x802A8770
    // 0x8027EBB4: lw          $a3, 0x69E0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X69E0);
    static_3_802A8770(rdram, ctx);
        goto after_0;
    // 0x8027EBB4: lw          $a3, 0x69E0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X69E0);
    after_0:
    // 0x8027EBB8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8027EBBC: sb          $t9, 0x8A8($s0)
    MEM_B(0X8A8, ctx->r16) = ctx->r25;
    // 0x8027EBC0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8027EBC4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027EBC8: bne         $t0, $at, L_8027EBDC
    if (ctx->r8 != ctx->r1) {
        // 0x8027EBCC: nop
    
            goto L_8027EBDC;
    }
    // 0x8027EBCC: nop

    // 0x8027EBD0: lw          $t1, 0x8CC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8CC);
    // 0x8027EBD4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8027EBD8: sw          $t2, 0x8CC($s0)
    MEM_W(0X8CC, ctx->r16) = ctx->r10;
L_8027EBDC:
    // 0x8027EBDC: b           L_8027EBF0
    // 0x8027EBE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027EBF0;
    // 0x8027EBE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8027EBE4:
    // 0x8027EBE4: bne         $at, $zero, L_8027EB74
    if (ctx->r1 != 0) {
        // 0x8027EBE8: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8027EB74;
    }
    // 0x8027EBE8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8027EBEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027EBF0:
    // 0x8027EBF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027EBF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027EBF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027EBFC: jr          $ra
    // 0x8027EC00: nop

    return;
    // 0x8027EC00: nop

;}
RECOMP_FUNC void D_802C8AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C8B44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802C8B48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C8B4C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802C8B50: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x802C8B54: jal         0x80207130
    // 0x802C8B58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_0;
    // 0x802C8B58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802C8B5C: cvt.s.d     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.fl = CVT_S_D(ctx->f0.d);
    // 0x802C8B60: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802C8B64: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802C8B68: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x802C8B6C: swc1        $f2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f2.u32l;
    // 0x802C8B70: sb          $t6, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r14;
    // 0x802C8B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802C8B78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802C8B7C: jr          $ra
    // 0x802C8B80: nop

    return;
    // 0x802C8B80: nop

;}
RECOMP_FUNC void D_802E5554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E55D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802E55D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802E55DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E55E0: bne         $a0, $zero, L_802E55F8
    if (ctx->r4 != 0) {
        // 0x802E55E4: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802E55F8;
    }
    // 0x802E55E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E55E8: jal         0x802C67EC
    // 0x802E55EC: addiu       $a0, $zero, 0x1394
    ctx->r4 = ADD32(0, 0X1394);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802E55EC: addiu       $a0, $zero, 0x1394
    ctx->r4 = ADD32(0, 0X1394);
    after_0:
    // 0x802E55F0: beq         $v0, $zero, L_802E5654
    if (ctx->r2 == 0) {
        // 0x802E55F4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802E5654;
    }
    // 0x802E55F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802E55F8:
    // 0x802E55F8: jal         0x80317344
    // 0x802E55FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317344(rdram, ctx);
        goto after_1;
    // 0x802E55FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802E5600: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802E5604: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802E5608: sw          $t6, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->r14;
    // 0x802E560C: jal         0x802D6950
    // 0x802E5610: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    static_3_802D6950(rdram, ctx);
        goto after_2;
    // 0x802E5610: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    after_2:
    // 0x802E5614: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802E5618: addiu       $a3, $a3, 0x498C
    ctx->r7 = ADD32(ctx->r7, 0X498C);
    // 0x802E561C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802E5620: addiu       $a0, $s0, 0x2AC
    ctx->r4 = ADD32(ctx->r16, 0X2AC);
    // 0x802E5624: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802E5628: jal         0x802C6930
    // 0x802E562C: addiu       $a2, $zero, 0x194
    ctx->r6 = ADD32(0, 0X194);
    static_3_802C6930(rdram, ctx);
        goto after_3;
    // 0x802E562C: addiu       $a2, $zero, 0x194
    ctx->r6 = ADD32(0, 0X194);
    after_3:
    // 0x802E5630: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802E5634: addiu       $a0, $s0, 0x768
    ctx->r4 = ADD32(ctx->r16, 0X768);
    // 0x802E5638: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802E563C: jal         0x802C6930
    // 0x802E5640: addiu       $a2, $zero, 0x194
    ctx->r6 = ADD32(0, 0X194);
    static_3_802C6930(rdram, ctx);
        goto after_4;
    // 0x802E5640: addiu       $a2, $zero, 0x194
    ctx->r6 = ADD32(0, 0X194);
    after_4:
    // 0x802E5644: jal         0x802C498C
    // 0x802E5648: addiu       $a0, $s0, 0xC24
    ctx->r4 = ADD32(ctx->r16, 0XC24);
    static_3_802C498C(rdram, ctx);
        goto after_5;
    // 0x802E5648: addiu       $a0, $s0, 0xC24
    ctx->r4 = ADD32(ctx->r16, 0XC24);
    after_5:
    // 0x802E564C: jal         0x8031DE00
    // 0x802E5650: addiu       $a0, $s0, 0xDF4
    ctx->r4 = ADD32(ctx->r16, 0XDF4);
    static_3_8031DE00(rdram, ctx);
        goto after_6;
    // 0x802E5650: addiu       $a0, $s0, 0xDF4
    ctx->r4 = ADD32(ctx->r16, 0XDF4);
    after_6:
L_802E5654:
    // 0x802E5654: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802E5658: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802E565C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802E5660: jr          $ra
    // 0x802E5664: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802E5664: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802829E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282A64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282A68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80282A6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80282A70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282A74: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80282A78: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80282A7C: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x80282A80: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x80282A84: jal         0x80302DC8
    // 0x80282A88: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_0;
    // 0x80282A88: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x80282A8C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80282A90: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282A94: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x80282A98: jal         0x80302DC8
    // 0x80282A9C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_1;
    // 0x80282A9C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x80282AA0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80282AA4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282AA8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80282AAC: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x80282AB0: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x80282AB4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80282AB8: jal         0x80290474
    // 0x80282ABC: nop

    static_3_80290474(rdram, ctx);
        goto after_2;
    // 0x80282ABC: nop

    after_2:
    // 0x80282AC0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282AC4: jal         0x80302980
    // 0x80282AC8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_3;
    // 0x80282AC8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x80282ACC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282AD0: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x80282AD4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80282AD8: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x80282ADC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80282AE0: jal         0x80302988
    // 0x80282AE4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_4;
    // 0x80282AE4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x80282AE8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282AEC: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x80282AF0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80282AF4: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x80282AF8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80282AFC: jal         0x80302988
    // 0x80282B00: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x80282B00: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x80282B04: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282B08: jal         0x80302A7C
    // 0x80282B0C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_6;
    // 0x80282B0C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x80282B10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282B14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80282B18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282B1C: jr          $ra
    // 0x80282B20: nop

    return;
    // 0x80282B20: nop

;}
RECOMP_FUNC void D_802ED418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED498: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ED49C: bne         $a0, $zero, L_802ED4B4
    if (ctx->r4 != 0) {
        // 0x802ED4A0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802ED4B4;
    }
    // 0x802ED4A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ED4A4: jal         0x802C67EC
    // 0x802ED4A8: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802ED4A8: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802ED4AC: beq         $v0, $zero, L_802ED50C
    if (ctx->r2 == 0) {
        // 0x802ED4B0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802ED50C;
    }
    // 0x802ED4B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802ED4B4:
    // 0x802ED4B4: jal         0x8031C47C
    // 0x802ED4B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802ED4B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802ED4BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ED4C0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802ED4C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ED4C8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802ED4CC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802ED4D0: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802ED4D4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802ED4D8: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x802ED4DC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ED4E0: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802ED4E4: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802ED4E8: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802ED4EC: sh          $t8, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r24;
    // 0x802ED4F0: sh          $t9, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r25;
    // 0x802ED4F4: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802ED4F8: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802ED4FC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ED500: jal         0x8031DC78
    // 0x802ED504: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031DC78(rdram, ctx);
        goto after_2;
    // 0x802ED504: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802ED508: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802ED50C:
    // 0x802ED50C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ED510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ED514: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802ED518: jr          $ra
    // 0x802ED51C: nop

    return;
    // 0x802ED51C: nop

;}
RECOMP_FUNC void D_80222390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222390: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80222394: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80222398: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022239C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802223A0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802223A4: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x802223A8: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x802223AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802223B0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x802223B4: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x802223B8: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x802223BC: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x802223C0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802223C4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802223C8: sll         $t7, $a0, 5
    ctx->r15 = S32(ctx->r4 << 5);
    // 0x802223CC: addu        $t5, $t7, $t8
    ctx->r13 = ADD32(ctx->r15, ctx->r24);
    // 0x802223D0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802223D4: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802223D8: lui         $t8, 0xF0A
    ctx->r24 = S32(0XF0A << 16);
    // 0x802223DC: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x802223E0: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x802223E4: ori         $t8, $t8, 0x4000
    ctx->r24 = ctx->r24 | 0X4000;
    // 0x802223E8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x802223EC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802223F0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802223F4: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x802223F8: ori         $t7, $t7, 0x1402
    ctx->r15 = ctx->r15 | 0X1402;
    // 0x802223FC: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80222400: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80222404: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222408: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8022240C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222410: lui         $t8, 0x30
    ctx->r24 = S32(0X30 << 16);
    // 0x80222414: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80222418: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8022241C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80222420: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222424: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80222428: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022242C: lui         $t8, 0xFFFC
    ctx->r24 = S32(0XFFFC << 16);
    // 0x80222430: ori         $t8, $t8, 0xFFFC
    ctx->r24 = ctx->r24 | 0XFFFC;
    // 0x80222434: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80222438: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8022243C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222440: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222444: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222448: lui         $t7, 0xF700
    ctx->r15 = S32(0XF700 << 16);
    // 0x8022244C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80222450: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80222454: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222458: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8022245C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222460: lui         $t7, 0xFF10
    ctx->r15 = S32(0XFF10 << 16);
    // 0x80222464: ori         $t7, $t7, 0x13F
    ctx->r15 = ctx->r15 | 0X13F;
    // 0x80222468: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8022246C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80222470: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222474: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222478: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022247C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80222480: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80222484: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222488: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x8022248C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80222490: jal         0x802375F0
    // 0x80222494: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    static_3_802375F0(rdram, ctx);
        goto after_0;
    // 0x80222494: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80222498: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022249C: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x802224A0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802224A4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802224A8: sw          $v0, 0x4($ra)
    MEM_W(0X4, ctx->r31) = ctx->r2;
    // 0x802224AC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802224B0: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x802224B4: addiu       $t3, $zero, 0xF0
    ctx->r11 = ADD32(0, 0XF0);
    // 0x802224B8: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x802224BC: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x802224C0: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x802224C4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802224C8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802224CC: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x802224D0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802224D4: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x802224D8: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x802224DC: lh          $t6, 0xA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA);
    // 0x802224E0: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x802224E4: lh          $t6, 0xC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC);
    // 0x802224E8: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x802224EC: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x802224F0: subu        $t7, $t3, $t6
    ctx->r15 = SUB32(ctx->r11, ctx->r14);
    // 0x802224F4: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x802224F8: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x802224FC: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x80222500: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222504: lh          $t8, 0x8($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X8);
    // 0x80222508: lh          $t7, 0xE($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE);
    // 0x8022250C: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x80222510: sll         $t6, $t9, 14
    ctx->r14 = S32(ctx->r25 << 14);
    // 0x80222514: subu        $t8, $t3, $t7
    ctx->r24 = SUB32(ctx->r11, ctx->r15);
    // 0x80222518: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x8022251C: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80222520: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80222524: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80222528: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022252C: lui         $t7, 0xFF10
    ctx->r15 = S32(0XFF10 << 16);
    // 0x80222530: ori         $t7, $t7, 0x13F
    ctx->r15 = ctx->r15 | 0X13F;
    // 0x80222534: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80222538: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8022253C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222540: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222544: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222548: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8022254C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80222550: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222554: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80222558: jal         0x802375F0
    // 0x8022255C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    static_3_802375F0(rdram, ctx);
        goto after_1;
    // 0x8022255C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x80222560: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80222564: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80222568: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8022256C: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x80222570: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222574: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x80222578: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x8022257C: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80222580: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80222584: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222588: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x8022258C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222590: ori         $t6, $t6, 0x1402
    ctx->r14 = ctx->r14 | 0X1402;
    // 0x80222594: lui         $t7, 0x10
    ctx->r15 = S32(0X10 << 16);
    // 0x80222598: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8022259C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x802225A0: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x802225A4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802225A8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802225AC: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x802225B0: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x802225B4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802225B8: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x802225BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802225C0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x802225C4: jr          $ra
    // 0x802225C8: nop

    return;
    // 0x802225C8: nop

;}
RECOMP_FUNC void D_802D1108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D1188: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D118C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D1190: jr          $ra
    // 0x802D1194: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802D1194: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_8027E6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E768: jr          $ra
    // 0x8027E76C: lw          $v0, 0x6FBC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6FBC);
    return;
    // 0x8027E76C: lw          $v0, 0x6FBC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6FBC);
;}
RECOMP_FUNC void D_802CF5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF654: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802CF658: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802CF65C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CF660: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802CF664: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802CF668: beq         $a0, $zero, L_802CF71C
    if (ctx->r4 == 0) {
        // 0x802CF66C: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_802CF71C;
    }
    // 0x802CF66C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802CF670: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802CF674: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802CF678: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    // 0x802CF67C: jal         0x8021BAE0
    // 0x802CF680: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x802CF680: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    after_0:
    // 0x802CF684: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802CF688: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x802CF68C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x802CF690: addiu       $a1, $s0, 0x370
    ctx->r5 = ADD32(ctx->r16, 0X370);
    // 0x802CF694: jal         0x80302414
    // 0x802CF698: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_1;
    // 0x802CF698: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802CF69C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x802CF6A0: addiu       $a1, $s0, 0x378
    ctx->r5 = ADD32(ctx->r16, 0X378);
    // 0x802CF6A4: jal         0x80302414
    // 0x802CF6A8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_2;
    // 0x802CF6A8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802CF6AC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x802CF6B0: addiu       $a1, $s0, 0x380
    ctx->r5 = ADD32(ctx->r16, 0X380);
    // 0x802CF6B4: jal         0x80302414
    // 0x802CF6B8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_3;
    // 0x802CF6B8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802CF6BC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x802CF6C0: addiu       $a1, $s0, 0x388
    ctx->r5 = ADD32(ctx->r16, 0X388);
    // 0x802CF6C4: jal         0x80302414
    // 0x802CF6C8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_4;
    // 0x802CF6C8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802CF6CC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x802CF6D0: addiu       $a1, $s0, 0x390
    ctx->r5 = ADD32(ctx->r16, 0X390);
    // 0x802CF6D4: jal         0x80302414
    // 0x802CF6D8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_5;
    // 0x802CF6D8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802CF6DC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x802CF6E0: addiu       $a1, $s0, 0x398
    ctx->r5 = ADD32(ctx->r16, 0X398);
    // 0x802CF6E4: jal         0x80302414
    // 0x802CF6E8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_6;
    // 0x802CF6E8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802CF6EC: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802CF6F0: jal         0x802D48A8
    // 0x802CF6F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802D48A8(rdram, ctx);
        goto after_7;
    // 0x802CF6F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x802CF6F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CF6FC: jal         0x8031739C
    // 0x802CF700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8031739C(rdram, ctx);
        goto after_8;
    // 0x802CF700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x802CF704: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x802CF708: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802CF70C: beql        $t8, $zero, L_802CF720
    if (ctx->r24 == 0) {
        // 0x802CF710: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802CF720;
    }
    goto skip_0;
    // 0x802CF710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802CF714: jal         0x802C681C
    // 0x802CF718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_9;
    // 0x802CF718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_802CF71C:
    // 0x802CF71C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802CF720:
    // 0x802CF720: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802CF724: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802CF728: jr          $ra
    // 0x802CF72C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802CF72C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802EDDF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EDE74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EDE78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EDE7C: beq         $a0, $zero, L_802EDEAC
    if (ctx->r4 == 0) {
        // 0x802EDE80: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EDEAC;
    }
    // 0x802EDE80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EDE84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EDE88: jal         0x8031C514
    // 0x802EDE8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802EDE8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EDE90: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EDE94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EDE98: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EDE9C: beql        $t7, $zero, L_802EDEB0
    if (ctx->r15 == 0) {
        // 0x802EDEA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EDEB0;
    }
    goto skip_0;
    // 0x802EDEA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EDEA4: jal         0x802C681C
    // 0x802EDEA8: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EDEA8: nop

    after_1:
L_802EDEAC:
    // 0x802EDEAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EDEB0:
    // 0x802EDEB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EDEB4: jr          $ra
    // 0x802EDEB8: nop

    return;
    // 0x802EDEB8: nop

;}
RECOMP_FUNC void D_80298BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298C30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80298C34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80298C38: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80298C3C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80298C40: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80298C44: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x80298C48: jal         0x80224CA8
    // 0x80298C4C: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x80298C4C: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    after_0:
    // 0x80298C50: jal         0x80224CA8
    // 0x80298C54: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x80298C54: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    after_1:
    // 0x80298C58: jal         0x80224CA8
    // 0x80298C5C: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x80298C5C: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    after_2:
    // 0x80298C60: jal         0x80224CA8
    // 0x80298C64: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    static_3_80224CA8(rdram, ctx);
        goto after_3;
    // 0x80298C64: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_3:
    // 0x80298C68: jal         0x80224CA8
    // 0x80298C6C: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x80298C6C: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    after_4:
    // 0x80298C70: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80298C74: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80298C78: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80298C7C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80298C80: addiu       $s0, $a3, 0x70
    ctx->r16 = ADD32(ctx->r7, 0X70);
    // 0x80298C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80298C88: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80298C8C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80298C90: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x80298C94: jal         0x8028D2E8
    // 0x80298C98: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    static_3_8028D2E8(rdram, ctx);
        goto after_5;
    // 0x80298C98: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_5:
    // 0x80298C9C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80298CA0: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80298CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80298CA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80298CAC: jal         0x8028DDD8
    // 0x80298CB0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    static_3_8028DDD8(rdram, ctx);
        goto after_6;
    // 0x80298CB0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_6:
    // 0x80298CB4: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80298CB8: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80298CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80298CC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80298CC4: jal         0x8028DDD8
    // 0x80298CC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_8028DDD8(rdram, ctx);
        goto after_7;
    // 0x80298CC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80298CCC: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80298CD0: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80298CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80298CD8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80298CDC: jal         0x8028DDD8
    // 0x80298CE0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    static_3_8028DDD8(rdram, ctx);
        goto after_8;
    // 0x80298CE0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_8:
    // 0x80298CE4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80298CE8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80298CEC: jal         0x8028DB8C
    // 0x80298CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8028DB8C(rdram, ctx);
        goto after_9;
    // 0x80298CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80298CF4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80298CF8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80298CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80298D00: jal         0x8028DED0
    // 0x80298D04: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8028DED0(rdram, ctx);
        goto after_10;
    // 0x80298D04: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x80298D08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80298D0C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80298D10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80298D14: jr          $ra
    // 0x80298D18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80298D18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_80291A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80291AB8: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80291ABC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80291AC0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80291AC4: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x80291AC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80291ACC: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x80291AD0: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x80291AD4: jal         0x802C51D0
    // 0x80291AD8: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x80291AD8: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_0:
    // 0x80291ADC: lbu         $t6, 0xFC($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XFC);
    // 0x80291AE0: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80291AE4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80291AE8: beq         $t6, $zero, L_80291BC0
    if (ctx->r14 == 0) {
        // 0x80291AEC: lui         $a2, 0xC1D0
        ctx->r6 = S32(0XC1D0 << 16);
            goto L_80291BC0;
    }
    // 0x80291AEC: lui         $a2, 0xC1D0
    ctx->r6 = S32(0XC1D0 << 16);
    // 0x80291AF0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80291AF4: addiu       $t7, $sp, 0x4C
    ctx->r15 = ADD32(ctx->r29, 0X4C);
    // 0x80291AF8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80291AFC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80291B00: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80291B04: lwc1        $f4, 0x154($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X154);
    // 0x80291B08: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80291B0C: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x80291B10: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80291B14: lwc1        $f6, 0x15C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X15C);
    // 0x80291B18: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80291B1C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80291B20: lwc1        $f8, 0x160($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X160);
    // 0x80291B24: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80291B28: lwc1        $f10, 0x164($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X164);
    // 0x80291B2C: jal         0x802AD568
    // 0x80291B30: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    static_3_802AD568(rdram, ctx);
        goto after_1;
    // 0x80291B30: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80291B34: blez        $v0, L_80291BC8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80291B38: lwc1        $f16, 0x98($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X98);
            goto L_80291BC8;
    }
    // 0x80291B38: lwc1        $f16, 0x98($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80291B3C: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80291B40: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80291B44: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x80291B48: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80291B4C: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x80291B50: jal         0x8022970C
    // 0x80291B54: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x80291B54: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80291B58: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80291B5C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80291B60: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80291B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80291B68: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x80291B6C: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x80291B70: jal         0x802C4838
    // 0x80291B74: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    static_3_802C4838(rdram, ctx);
        goto after_3;
    // 0x80291B74: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80291B78: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80291B7C: lwc1        $f18, 0x104($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X104);
    // 0x80291B80: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80291B84: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80291B88: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80291B8C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80291B90: jal         0x802D01D4
    // 0x80291B94: nop

    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x80291B94: nop

    after_4:
    // 0x80291B98: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80291B9C: lwc1        $f8, 0x108($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X108);
    // 0x80291BA0: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80291BA4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80291BA8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80291BAC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80291BB0: jal         0x802D01D4
    // 0x80291BB4: nop

    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x80291BB4: nop

    after_5:
    // 0x80291BB8: b           L_80291BCC
    // 0x80291BBC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
        goto L_80291BCC;
    // 0x80291BBC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_80291BC0:
    // 0x80291BC0: jal         0x8022A0D0
    // 0x80291BC4: lui         $a3, 0xBF40
    ctx->r7 = S32(0XBF40 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_6;
    // 0x80291BC4: lui         $a3, 0xBF40
    ctx->r7 = S32(0XBF40 << 16);
    after_6:
L_80291BC8:
    // 0x80291BC8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_80291BCC:
    // 0x80291BCC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80291BD0: lwc1        $f16, 0xBC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80291BD4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80291BD8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80291BDC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80291BE0: lw          $t9, 0x8C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8C);
    // 0x80291BE4: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x80291BE8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80291BEC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80291BF0: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x80291BF4: lui         $a2, 0x4448
    ctx->r6 = S32(0X4448 << 16);
    // 0x80291BF8: lw          $a3, 0xB8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB8);
    // 0x80291BFC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80291C00: jal         0x802AAEC0
    // 0x80291C04: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    static_3_802AAEC0(rdram, ctx);
        goto after_7;
    // 0x80291C04: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_7:
    // 0x80291C08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80291C0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80291C10: beq         $v0, $zero, L_80291C48
    if (ctx->r2 == 0) {
        // 0x80291C14: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80291C48;
    }
    // 0x80291C14: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80291C18: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80291C1C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80291C20: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80291C24: lui         $a3, 0x3E80
    ctx->r7 = S32(0X3E80 << 16);
    // 0x80291C28: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80291C2C: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x80291C30: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x80291C34: jal         0x802E9420
    // 0x80291C38: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    static_3_802E9420(rdram, ctx);
        goto after_8;
    // 0x80291C38: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x80291C3C: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80291C40: jal         0x802E982C
    // 0x80291C44: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    static_3_802E982C(rdram, ctx);
        goto after_9;
    // 0x80291C44: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    after_9:
L_80291C48:
    // 0x80291C48: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80291C4C: swc1        $f18, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f18.u32l;
    // 0x80291C50: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80291C54: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80291C58: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x80291C5C: jr          $ra
    // 0x80291C60: nop

    return;
    // 0x80291C60: nop

;}
RECOMP_FUNC void D_80296484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80296504: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80296508: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8029650C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80296510: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80296514: beq         $a0, $zero, L_802965E0
    if (ctx->r4 == 0) {
        // 0x80296518: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_802965E0;
    }
    // 0x80296518: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8029651C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80296520: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80296524: jal         0x802C7960
    // 0x80296528: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    static_3_802C7960(rdram, ctx);
        goto after_0;
    // 0x80296528: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    after_0:
    // 0x8029652C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80296530: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80296534: addiu       $a0, $s0, 0x3EAC
    ctx->r4 = ADD32(ctx->r16, 0X3EAC);
    // 0x80296538: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8029653C: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    // 0x80296540: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80296544: jal         0x802C6A00
    // 0x80296548: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_802C6A00(rdram, ctx);
        goto after_1;
    // 0x80296548: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x8029654C: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x80296550: addiu       $a3, $a3, 0x2D78
    ctx->r7 = ADD32(ctx->r7, 0X2D78);
    // 0x80296554: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80296558: addiu       $a0, $s0, 0x2634
    ctx->r4 = ADD32(ctx->r16, 0X2634);
    // 0x8029655C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80296560: addiu       $a2, $zero, 0x414
    ctx->r6 = ADD32(0, 0X414);
    // 0x80296564: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80296568: jal         0x802C6A00
    // 0x8029656C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_802C6A00(rdram, ctx);
        goto after_2;
    // 0x8029656C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x80296570: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80296574: addiu       $a0, $s0, 0x15E4
    ctx->r4 = ADD32(ctx->r16, 0X15E4);
    // 0x80296578: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8029657C: addiu       $a2, $zero, 0x414
    ctx->r6 = ADD32(0, 0X414);
    // 0x80296580: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80296584: jal         0x802C6A00
    // 0x80296588: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_802C6A00(rdram, ctx);
        goto after_3;
    // 0x80296588: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x8029658C: addiu       $a0, $s0, 0x1450
    ctx->r4 = ADD32(ctx->r16, 0X1450);
    // 0x80296590: jal         0x802C49D0
    // 0x80296594: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_4;
    // 0x80296594: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x80296598: addiu       $a0, $s0, 0x12BC
    ctx->r4 = ADD32(ctx->r16, 0X12BC);
    // 0x8029659C: jal         0x802C49D0
    // 0x802965A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_5;
    // 0x802965A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x802965A4: addiu       $a0, $s0, 0x1128
    ctx->r4 = ADD32(ctx->r16, 0X1128);
    // 0x802965A8: jal         0x802C49D0
    // 0x802965AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_6;
    // 0x802965AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x802965B0: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    // 0x802965B4: jal         0x802BF884
    // 0x802965B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802BF884(rdram, ctx);
        goto after_7;
    // 0x802965B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x802965BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802965C0: jal         0x803086D4
    // 0x802965C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_8;
    // 0x802965C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x802965C8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x802965CC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802965D0: beql        $t8, $zero, L_802965E4
    if (ctx->r24 == 0) {
        // 0x802965D4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802965E4;
    }
    goto skip_0;
    // 0x802965D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802965D8: jal         0x802C681C
    // 0x802965DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_9;
    // 0x802965DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_802965E0:
    // 0x802965E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802965E4:
    // 0x802965E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802965E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802965EC: jr          $ra
    // 0x802965F0: nop

    return;
    // 0x802965F0: nop

;}
RECOMP_FUNC void D_802A2180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2200: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A2204: jr          $ra
    // 0x802A2208: swc1        $f12, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802A2208: swc1        $f12, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802D26E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2764: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D276C: beq         $a0, $zero, L_802D2798
    if (ctx->r4 == 0) {
        // 0x802D2770: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802D2798;
    }
    // 0x802D2770: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D2774: jal         0x80302ECC
    // 0x802D2778: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80302ECC(rdram, ctx);
        goto after_0;
    // 0x802D2778: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802D277C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802D2780: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D2784: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802D2788: beql        $t7, $zero, L_802D279C
    if (ctx->r15 == 0) {
        // 0x802D278C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802D279C;
    }
    goto skip_0;
    // 0x802D278C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802D2790: jal         0x802C681C
    // 0x802D2794: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802D2794: nop

    after_1:
L_802D2798:
    // 0x802D2798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D279C:
    // 0x802D279C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D27A0: jr          $ra
    // 0x802D27A4: nop

    return;
    // 0x802D27A4: nop

;}
RECOMP_FUNC void D_802B8C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B8D10: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802B8D14: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802B8D18: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802B8D1C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802B8D20: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802B8D24: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x802B8D28: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802B8D2C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802B8D30: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802B8D34: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802B8D38: nop

    // 0x802B8D3C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802B8D40: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802B8D44: nop

    // 0x802B8D48: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x802B8D4C: beql        $t7, $zero, L_802B8D9C
    if (ctx->r15 == 0) {
        // 0x802B8D50: mfc1        $t7, $f6
        ctx->r15 = (int32_t)ctx->f6.u32l;
            goto L_802B8D9C;
    }
    goto skip_0;
    // 0x802B8D50: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x802B8D54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B8D58: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802B8D5C: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802B8D60: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802B8D64: nop

    // 0x802B8D68: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802B8D6C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802B8D70: nop

    // 0x802B8D74: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x802B8D78: bne         $t7, $zero, L_802B8D90
    if (ctx->r15 != 0) {
        // 0x802B8D7C: nop
    
            goto L_802B8D90;
    }
    // 0x802B8D7C: nop

    // 0x802B8D80: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x802B8D84: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802B8D88: b           L_802B8DA8
    // 0x802B8D8C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_802B8DA8;
    // 0x802B8D8C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_802B8D90:
    // 0x802B8D90: b           L_802B8DA8
    // 0x802B8D94: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_802B8DA8;
    // 0x802B8D94: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x802B8D98: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
L_802B8D9C:
    // 0x802B8D9C: nop

    // 0x802B8DA0: bltz        $t7, L_802B8D90
    if (SIGNED(ctx->r15) < 0) {
        // 0x802B8DA4: nop
    
            goto L_802B8D90;
    }
    // 0x802B8DA4: nop

L_802B8DA8:
    // 0x802B8DA8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802B8DAC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802B8DB0: sw          $t7, 0x114($a0)
    MEM_W(0X114, ctx->r4) = ctx->r15;
    // 0x802B8DB4: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x802B8DB8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802B8DBC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802B8DC0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802B8DC4: nop

    // 0x802B8DC8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802B8DCC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802B8DD0: nop

    // 0x802B8DD4: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x802B8DD8: beql        $t9, $zero, L_802B8E28
    if (ctx->r25 == 0) {
        // 0x802B8DDC: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_802B8E28;
    }
    goto skip_1;
    // 0x802B8DDC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x802B8DE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B8DE4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802B8DE8: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802B8DEC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802B8DF0: nop

    // 0x802B8DF4: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802B8DF8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802B8DFC: nop

    // 0x802B8E00: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x802B8E04: bne         $t9, $zero, L_802B8E1C
    if (ctx->r25 != 0) {
        // 0x802B8E08: nop
    
            goto L_802B8E1C;
    }
    // 0x802B8E08: nop

    // 0x802B8E0C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x802B8E10: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802B8E14: b           L_802B8E34
    // 0x802B8E18: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_802B8E34;
    // 0x802B8E18: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_802B8E1C:
    // 0x802B8E1C: b           L_802B8E34
    // 0x802B8E20: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_802B8E34;
    // 0x802B8E20: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x802B8E24: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_802B8E28:
    // 0x802B8E28: nop

    // 0x802B8E2C: bltz        $t9, L_802B8E1C
    if (SIGNED(ctx->r25) < 0) {
        // 0x802B8E30: nop
    
            goto L_802B8E1C;
    }
    // 0x802B8E30: nop

L_802B8E34:
    // 0x802B8E34: sw          $t9, 0x118($a0)
    MEM_W(0X118, ctx->r4) = ctx->r25;
    // 0x802B8E38: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802B8E3C: lwc1        $f16, 0xC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802B8E40: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802B8E44: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802B8E48: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802B8E4C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x802B8E50: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802B8E54: nop

    // 0x802B8E58: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802B8E5C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802B8E60: nop

    // 0x802B8E64: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x802B8E68: beql        $t1, $zero, L_802B8EB8
    if (ctx->r9 == 0) {
        // 0x802B8E6C: mfc1        $t1, $f4
        ctx->r9 = (int32_t)ctx->f4.u32l;
            goto L_802B8EB8;
    }
    goto skip_2;
    // 0x802B8E6C: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    skip_2:
    // 0x802B8E70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B8E74: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802B8E78: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802B8E7C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802B8E80: nop

    // 0x802B8E84: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802B8E88: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802B8E8C: nop

    // 0x802B8E90: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x802B8E94: bne         $t1, $zero, L_802B8EAC
    if (ctx->r9 != 0) {
        // 0x802B8E98: nop
    
            goto L_802B8EAC;
    }
    // 0x802B8E98: nop

    // 0x802B8E9C: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x802B8EA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802B8EA4: b           L_802B8EC4
    // 0x802B8EA8: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_802B8EC4;
    // 0x802B8EA8: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_802B8EAC:
    // 0x802B8EAC: b           L_802B8EC4
    // 0x802B8EB0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_802B8EC4;
    // 0x802B8EB0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x802B8EB4: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
L_802B8EB8:
    // 0x802B8EB8: nop

    // 0x802B8EBC: bltz        $t1, L_802B8EAC
    if (SIGNED(ctx->r9) < 0) {
        // 0x802B8EC0: nop
    
            goto L_802B8EAC;
    }
    // 0x802B8EC0: nop

L_802B8EC4:
    // 0x802B8EC4: sw          $t1, 0x11C($a0)
    MEM_W(0X11C, ctx->r4) = ctx->r9;
    // 0x802B8EC8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x802B8ECC: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x802B8ED0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802B8ED4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802B8ED8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802B8EDC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x802B8EE0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802B8EE4: nop

    // 0x802B8EE8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802B8EEC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802B8EF0: nop

    // 0x802B8EF4: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x802B8EF8: beql        $t3, $zero, L_802B8F48
    if (ctx->r11 == 0) {
        // 0x802B8EFC: mfc1        $t3, $f10
        ctx->r11 = (int32_t)ctx->f10.u32l;
            goto L_802B8F48;
    }
    goto skip_3;
    // 0x802B8EFC: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    skip_3:
    // 0x802B8F00: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B8F04: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802B8F08: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802B8F0C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802B8F10: nop

    // 0x802B8F14: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802B8F18: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802B8F1C: nop

    // 0x802B8F20: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x802B8F24: bne         $t3, $zero, L_802B8F3C
    if (ctx->r11 != 0) {
        // 0x802B8F28: nop
    
            goto L_802B8F3C;
    }
    // 0x802B8F28: nop

    // 0x802B8F2C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x802B8F30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802B8F34: b           L_802B8F54
    // 0x802B8F38: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_802B8F54;
    // 0x802B8F38: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_802B8F3C:
    // 0x802B8F3C: b           L_802B8F54
    // 0x802B8F40: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_802B8F54;
    // 0x802B8F40: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x802B8F44: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
L_802B8F48:
    // 0x802B8F48: nop

    // 0x802B8F4C: bltz        $t3, L_802B8F3C
    if (SIGNED(ctx->r11) < 0) {
        // 0x802B8F50: nop
    
            goto L_802B8F3C;
    }
    // 0x802B8F50: nop

L_802B8F54:
    // 0x802B8F54: sw          $t3, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->r11;
    // 0x802B8F58: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802B8F5C: lwc1        $f16, 0x14($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802B8F60: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802B8F64: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802B8F68: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802B8F6C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802B8F70: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802B8F74: nop

    // 0x802B8F78: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802B8F7C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802B8F80: nop

    // 0x802B8F84: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x802B8F88: beql        $t5, $zero, L_802B8FD8
    if (ctx->r13 == 0) {
        // 0x802B8F8C: mfc1        $t5, $f4
        ctx->r13 = (int32_t)ctx->f4.u32l;
            goto L_802B8FD8;
    }
    goto skip_4;
    // 0x802B8F8C: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    skip_4:
    // 0x802B8F90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B8F94: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802B8F98: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802B8F9C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802B8FA0: nop

    // 0x802B8FA4: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802B8FA8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802B8FAC: nop

    // 0x802B8FB0: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x802B8FB4: bne         $t5, $zero, L_802B8FCC
    if (ctx->r13 != 0) {
        // 0x802B8FB8: nop
    
            goto L_802B8FCC;
    }
    // 0x802B8FB8: nop

    // 0x802B8FBC: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x802B8FC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802B8FC4: b           L_802B8FE4
    // 0x802B8FC8: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_802B8FE4;
    // 0x802B8FC8: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_802B8FCC:
    // 0x802B8FCC: b           L_802B8FE4
    // 0x802B8FD0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_802B8FE4;
    // 0x802B8FD0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x802B8FD4: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
L_802B8FD8:
    // 0x802B8FD8: nop

    // 0x802B8FDC: bltz        $t5, L_802B8FCC
    if (SIGNED(ctx->r13) < 0) {
        // 0x802B8FE0: nop
    
            goto L_802B8FCC;
    }
    // 0x802B8FE0: nop

L_802B8FE4:
    // 0x802B8FE4: sw          $t5, 0x124($a0)
    MEM_W(0X124, ctx->r4) = ctx->r13;
    // 0x802B8FE8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802B8FEC: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802B8FF0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802B8FF4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802B8FF8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802B8FFC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802B9000: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802B9004: nop

    // 0x802B9008: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802B900C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802B9010: nop

    // 0x802B9014: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x802B9018: beql        $t7, $zero, L_802B9068
    if (ctx->r15 == 0) {
        // 0x802B901C: mfc1        $t7, $f10
        ctx->r15 = (int32_t)ctx->f10.u32l;
            goto L_802B9068;
    }
    goto skip_5;
    // 0x802B901C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    skip_5:
    // 0x802B9020: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B9024: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802B9028: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802B902C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802B9030: nop

    // 0x802B9034: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802B9038: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802B903C: nop

    // 0x802B9040: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x802B9044: bne         $t7, $zero, L_802B905C
    if (ctx->r15 != 0) {
        // 0x802B9048: nop
    
            goto L_802B905C;
    }
    // 0x802B9048: nop

    // 0x802B904C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x802B9050: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802B9054: b           L_802B9074
    // 0x802B9058: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_802B9074;
    // 0x802B9058: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_802B905C:
    // 0x802B905C: b           L_802B9074
    // 0x802B9060: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_802B9074;
    // 0x802B9060: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x802B9064: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
L_802B9068:
    // 0x802B9068: nop

    // 0x802B906C: bltz        $t7, L_802B905C
    if (SIGNED(ctx->r15) < 0) {
        // 0x802B9070: nop
    
            goto L_802B905C;
    }
    // 0x802B9070: nop

L_802B9074:
    // 0x802B9074: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802B9078: jr          $ra
    // 0x802B907C: sw          $t7, 0x128($a0)
    MEM_W(0X128, ctx->r4) = ctx->r15;
    return;
    // 0x802B907C: sw          $t7, 0x128($a0)
    MEM_W(0X128, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void D_8022C7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C7E8: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022C7EC: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8022C7F0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8022C7F4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8022C7F8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C7FC: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022C800: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C804: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8022C808: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C80C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8022C810: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C814: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8022C818: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C81C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8022C820: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C824: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8022C828: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C82C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8022C830: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C834: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8022C838: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C83C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8022C840: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C844: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8022C848: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C84C: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022C850: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C854: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022C858: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C85C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022C860: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022C864: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C868: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022C86C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8022C870: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C874: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x8022C878: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8022C87C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8022C880: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C884: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022C888: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8022C88C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8022C890: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8022C894: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x8022C898: addiu       $t6, $a0, 0x264
    ctx->r14 = ADD32(ctx->r4, 0X264);
    // 0x8022C89C: addiu       $t7, $a0, 0x268
    ctx->r15 = ADD32(ctx->r4, 0X268);
    // 0x8022C8A0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8022C8A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8022C8A8: sw          $zero, 0x260($a0)
    MEM_W(0X260, ctx->r4) = 0;
    // 0x8022C8AC: sw          $zero, 0x274($a0)
    MEM_W(0X274, ctx->r4) = 0;
    // 0x8022C8B0: sw          $zero, 0x278($a0)
    MEM_W(0X278, ctx->r4) = 0;
    // 0x8022C8B4: sw          $zero, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = 0;
    // 0x8022C8B8: sw          $zero, 0x264($a0)
    MEM_W(0X264, ctx->r4) = 0;
    // 0x8022C8BC: sw          $zero, 0x268($a0)
    MEM_W(0X268, ctx->r4) = 0;
    // 0x8022C8C0: sw          $t6, 0x26C($a0)
    MEM_W(0X26C, ctx->r4) = ctx->r14;
    // 0x8022C8C4: sw          $t7, 0x270($a0)
    MEM_W(0X270, ctx->r4) = ctx->r15;
    // 0x8022C8C8: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    // 0x8022C8CC: sh          $t8, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r24;
    // 0x8022C8D0: addiu       $s1, $a0, 0x40
    ctx->r17 = ADD32(ctx->r4, 0X40);
    // 0x8022C8D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8022C8D8: addiu       $a1, $s0, 0x58
    ctx->r5 = ADD32(ctx->r16, 0X58);
    // 0x8022C8DC: jal         0x802371E0
    // 0x8022C8E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802371E0(rdram, ctx);
        goto after_0;
    // 0x8022C8E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022C8E4: addiu       $a0, $s0, 0x78
    ctx->r4 = ADD32(ctx->r16, 0X78);
    // 0x8022C8E8: addiu       $a1, $s0, 0x90
    ctx->r5 = ADD32(ctx->r16, 0X90);
    // 0x8022C8EC: jal         0x802371E0
    // 0x8022C8F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802371E0(rdram, ctx);
        goto after_1;
    // 0x8022C8F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022C8F4: jal         0x8023DB60
    // 0x8022C8F8: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    static_3_8023DB60(rdram, ctx);
        goto after_2;
    // 0x8022C8F8: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_2:
    // 0x8022C8FC: lbu         $t9, 0x37($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X37);
    // 0x8022C900: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8022C904: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x8022C908: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8022C90C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8022C910: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8022C914: jal         0x8023DEC0
    // 0x8022C918: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    static_3_8023DEC0(rdram, ctx);
        goto after_3;
    // 0x8022C918: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    after_3:
    // 0x8022C91C: jal         0x8023D7A0
    // 0x8022C920: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    func_8023D7A0(rdram, ctx);
        goto after_4;
    // 0x8022C920: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    after_4:
    // 0x8022C924: jal         0x8023CE10
    // 0x8022C928: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8023CE10(rdram, ctx);
        goto after_5;
    // 0x8022C928: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x8022C92C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8022C930: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022C934: jal         0x8023DF30
    // 0x8022C938: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    static_3_8023DF30(rdram, ctx);
        goto after_6;
    // 0x8022C938: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    after_6:
    // 0x8022C93C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8022C940: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022C944: jal         0x8023DF30
    // 0x8022C948: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    static_3_8023DF30(rdram, ctx);
        goto after_7;
    // 0x8022C948: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    after_7:
    // 0x8022C94C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8022C950: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022C954: jal         0x8023DF30
    // 0x8022C958: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    static_3_8023DF30(rdram, ctx);
        goto after_8;
    // 0x8022C958: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    after_8:
    // 0x8022C95C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8022C960: addiu       $a1, $zero, 0x29A
    ctx->r5 = ADD32(0, 0X29A);
    // 0x8022C964: jal         0x8023DFA0
    // 0x8022C968: lbu         $a2, 0x3B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3B);
    static_3_8023DFA0(rdram, ctx);
        goto after_9;
    // 0x8022C968: lbu         $a2, 0x3B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3B);
    after_9:
    // 0x8022C96C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C970: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8022C974: addiu       $s1, $s0, 0xB0
    ctx->r17 = ADD32(ctx->r16, 0XB0);
    // 0x8022C978: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8022C97C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8022C980: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8022C984: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022C988: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8022C98C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8022C990: jal         0x80237210
    // 0x8022C994: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    static_3_80237210(rdram, ctx);
        goto after_10;
    // 0x8022C994: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_10:
    // 0x8022C998: jal         0x80237360
    // 0x8022C99C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80237360(rdram, ctx);
        goto after_11;
    // 0x8022C99C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x8022C9A0: jal         0x80207210
    // 0x8022C9A4: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    func_80207210(rdram, ctx);
        goto after_12;
    // 0x8022C9A4: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    after_12:
    // 0x8022C9A8: jal         0x8022D4EC
    // 0x8022C9AC: nop

    static_3_8022D4EC(rdram, ctx);
        goto after_13;
    // 0x8022C9AC: nop

    after_13:
    // 0x8022C9B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022C9B4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C9B8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8022C9BC: jr          $ra
    // 0x8022C9C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8022C9C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_8022C778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C778: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C77C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C780: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022C784: jal         0x80231A24
    // 0x8022C788: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022C788: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8022C78C: addiu       $t6, $zero, 0x2902
    ctx->r14 = ADD32(0, 0X2902);
    // 0x8022C790: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8022C794: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8022C798: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8022C79C: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x8022C7A0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022C7A4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022C7A8: beq         $t8, $zero, L_8022C7B8
    if (ctx->r24 == 0) {
        // 0x8022C7AC: addiu       $a1, $zero, 0x29B
        ctx->r5 = ADD32(0, 0X29B);
            goto L_8022C7B8;
    }
    // 0x8022C7AC: addiu       $a1, $zero, 0x29B
    ctx->r5 = ADD32(0, 0X29B);
    // 0x8022C7B0: jal         0x80236B80
    // 0x8022C7B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80236B80(rdram, ctx);
        goto after_1;
    // 0x8022C7B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_8022C7B8:
    // 0x8022C7B8: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8022C7BC: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x8022C7C0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022C7C4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022C7C8: beq         $t9, $zero, L_8022C7D8
    if (ctx->r25 == 0) {
        // 0x8022C7CC: addiu       $a1, $zero, 0x29C
        ctx->r5 = ADD32(0, 0X29C);
            goto L_8022C7D8;
    }
    // 0x8022C7CC: addiu       $a1, $zero, 0x29C
    ctx->r5 = ADD32(0, 0X29C);
    // 0x8022C7D0: jal         0x80236B80
    // 0x8022C7D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80236B80(rdram, ctx);
        goto after_2;
    // 0x8022C7D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8022C7D8:
    // 0x8022C7D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C7DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022C7E0: jr          $ra
    // 0x8022C7E4: nop

    return;
    // 0x8022C7E4: nop

;}
RECOMP_FUNC void D_8027E6F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E770: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027E774: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027E778: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E77C: bne         $a1, $at, L_8027E7D4
    if (ctx->r5 != ctx->r1) {
        // 0x8027E780: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8027E7D4;
    }
    // 0x8027E780: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8027E784: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8027E788: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8027E78C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8027E790: addiu       $a1, $a2, 0x8B4
    ctx->r5 = ADD32(ctx->r6, 0X8B4);
    // 0x8027E794: beq         $v0, $at, L_8027E7C4
    if (ctx->r2 == ctx->r1) {
        // 0x8027E798: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_8027E7C4;
    }
    // 0x8027E798: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8027E79C: beq         $v0, $at, L_8027E7C4
    if (ctx->r2 == ctx->r1) {
        // 0x8027E7A0: lui         $t6, 0x0
        ctx->r14 = S32(0X0 << 16);
            goto L_8027E7C4;
    }
    // 0x8027E7A0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8027E7A4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8027E7A8: addiu       $a0, $a0, 0x6D0
    ctx->r4 = ADD32(ctx->r4, 0X6D0);
    // 0x8027E7AC: addiu       $a1, $a2, 0x8B4
    ctx->r5 = ADD32(ctx->r6, 0X8B4);
    // 0x8027E7B0: jal         0x802F6B80
    // 0x8027E7B4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    static_3_802F6B80(rdram, ctx);
        goto after_0;
    // 0x8027E7B4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x8027E7B8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8027E7BC: b           L_8027E7D8
    // 0x8027E7C0: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
        goto L_8027E7D8;
    // 0x8027E7C0: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
L_8027E7C4:
    // 0x8027E7C4: jal         0x802F6B80
    // 0x8027E7C8: addiu       $a0, $a2, 0x6D0
    ctx->r4 = ADD32(ctx->r6, 0X6D0);
    static_3_802F6B80(rdram, ctx);
        goto after_1;
    // 0x8027E7C8: addiu       $a0, $a2, 0x6D0
    ctx->r4 = ADD32(ctx->r6, 0X6D0);
    after_1:
    // 0x8027E7CC: b           L_8027E7DC
    // 0x8027E7D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027E7DC;
    // 0x8027E7D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027E7D4:
    // 0x8027E7D4: lw          $v0, 0x65F8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X65F8);
L_8027E7D8:
    // 0x8027E7D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027E7DC:
    // 0x8027E7DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027E7E0: jr          $ra
    // 0x8027E7E4: nop

    return;
    // 0x8027E7E4: nop

;}
RECOMP_FUNC void D_802ED2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED36C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ED370: bne         $a0, $zero, L_802ED388
    if (ctx->r4 != 0) {
        // 0x802ED374: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802ED388;
    }
    // 0x802ED374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ED378: jal         0x802C67EC
    // 0x802ED37C: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802ED37C: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802ED380: beq         $v0, $zero, L_802ED3E0
    if (ctx->r2 == 0) {
        // 0x802ED384: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802ED3E0;
    }
    // 0x802ED384: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802ED388:
    // 0x802ED388: jal         0x8031C47C
    // 0x802ED38C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802ED38C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802ED390: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ED394: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802ED398: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ED39C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802ED3A0: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802ED3A4: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802ED3A8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802ED3AC: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x802ED3B0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ED3B4: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802ED3B8: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802ED3BC: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802ED3C0: sh          $t8, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r24;
    // 0x802ED3C4: sh          $t9, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r25;
    // 0x802ED3C8: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802ED3CC: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802ED3D0: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ED3D4: jal         0x8031DB4C
    // 0x802ED3D8: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031DB4C(rdram, ctx);
        goto after_2;
    // 0x802ED3D8: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802ED3DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802ED3E0:
    // 0x802ED3E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ED3E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ED3E8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802ED3EC: jr          $ra
    // 0x802ED3F0: nop

    return;
    // 0x802ED3F0: nop

;}
RECOMP_FUNC void D_802EDF4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EDFCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EDFD0: bne         $a0, $zero, L_802EDFE4
    if (ctx->r4 != 0) {
        // 0x802EDFD4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802EDFE4;
    }
    // 0x802EDFD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EDFD8: jal         0x802C67EC
    // 0x802EDFDC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EDFDC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x802EDFE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802EDFE4:
    // 0x802EDFE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EDFE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EDFEC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802EDFF0: jr          $ra
    // 0x802EDFF4: nop

    return;
    // 0x802EDFF4: nop

;}
RECOMP_FUNC void D_802EDF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EE000: jr          $ra
    // 0x802EE004: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802EE004: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_80234820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234820: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80234824: jr          $ra
    // 0x80234828: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    return;
    // 0x80234828: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
;}
RECOMP_FUNC void D_8020219C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020219C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802021A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802021A4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802021A8: jal         0x802011D0
    // 0x802021AC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_802011D0(rdram, ctx);
        goto after_0;
    // 0x802021AC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802021B0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802021B4: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802021B8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802021BC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802021C0: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802021C4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802021C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802021CC:
    // 0x802021CC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802021D0: sb          $v0, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r2;
    // 0x802021D4: sb          $v0, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r2;
    // 0x802021D8: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x802021DC: sb          $v0, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r2;
    // 0x802021E0: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x802021E4: sb          $v0, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r2;
    // 0x802021E8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802021EC: sb          $v0, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r2;
    // 0x802021F0: bne         $v1, $a1, L_802021CC
    if (ctx->r3 != ctx->r5) {
        // 0x802021F4: sb          $v0, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = ctx->r2;
            goto L_802021CC;
    }
    // 0x802021F4: sb          $v0, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = ctx->r2;
    // 0x802021F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802021FC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80202200: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x80202204: jr          $ra
    // 0x80202208: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80202208: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_80231C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231C4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231C50: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80231C54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231C58: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231C5C: jal         0x80231A24
    // 0x80231C60: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80231C60: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80231C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231C68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80231C6C: jr          $ra
    // 0x80231C70: nop

    return;
    // 0x80231C70: nop

;}
RECOMP_FUNC void D_802EBCA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EBD24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EBD28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EBD2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EBD30: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x802EBD34: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802EBD38: lh          $t6, 0x48($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X48);
    // 0x802EBD3C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802EBD40: lw          $t9, 0x4C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4C);
    // 0x802EBD44: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802EBD48: jalr        $t9
    // 0x802EBD4C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802EBD4C: nop

    after_0:
    // 0x802EBD50: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EBD54: jal         0x8031AD14
    // 0x802EBD58: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    static_3_8031AD14(rdram, ctx);
        goto after_1;
    // 0x802EBD58: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x802EBD5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EBD60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EBD64: jr          $ra
    // 0x802EBD68: nop

    return;
    // 0x802EBD68: nop

;}
RECOMP_FUNC void D_8028C790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028C810: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x8028C814: jr          $ra
    // 0x8028C818: sw          $t6, 0x248($a0)
    MEM_W(0X248, ctx->r4) = ctx->r14;
    return;
    // 0x8028C818: sw          $t6, 0x248($a0)
    MEM_W(0X248, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void D_802A7A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7B04: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802A7B08: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A7B0C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802A7B10: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x802A7B14: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x802A7B18: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x802A7B1C: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x802A7B20: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x802A7B24: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x802A7B28: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x802A7B2C: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x802A7B30: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x802A7B34: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x802A7B38: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x802A7B3C: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x802A7B40: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x802A7B44: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802A7B48: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x802A7B4C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7B50: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x802A7B54: lwc1        $f28, 0x0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7B58: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7B5C: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x802A7B60: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802A7B64: lwc1        $f24, 0x0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7B68: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802A7B6C: addiu       $s2, $a0, 0x2AC8
    ctx->r18 = ADD32(ctx->r4, 0X2AC8);
    // 0x802A7B70: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_802A7B74:
    // 0x802A7B74: mtc1        $s3, $f4
    ctx->f4.u32l = ctx->r19;
    // 0x802A7B78: lui         $at, 0x41B4
    ctx->r1 = S32(0X41B4 << 16);
    // 0x802A7B7C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A7B80: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802A7B84: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7B88: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7B8C: mul.s       $f8, $f30, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f30.fl, ctx->f6.fl);
    // 0x802A7B90: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802A7B94: mul.s       $f20, $f28, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = MUL_S(ctx->f28.fl, ctx->f16.fl);
    // 0x802A7B98: jal         0x80300424
    // 0x802A7B9C: add.s       $f12, $f20, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f18.fl;
    static_3_80300424(rdram, ctx);
        goto after_0;
    // 0x802A7B9C: add.s       $f12, $f20, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f18.fl;
    after_0:
    // 0x802A7BA0: mul.s       $f4, $f0, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x802A7BA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7BA8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7BAC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x802A7BB0: jal         0x80300424
    // 0x802A7BB4: add.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f4.fl + ctx->f6.fl;
    static_3_80300424(rdram, ctx);
        goto after_1;
    // 0x802A7BB4: add.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x802A7BB8: lw          $s0, 0x2C68($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X2C68);
    // 0x802A7BBC: mul.s       $f20, $f0, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x802A7BC0: addiu       $a1, $zero, 0xAA
    ctx->r5 = ADD32(0, 0XAA);
    // 0x802A7BC4: lh          $t7, 0x110($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X110);
    // 0x802A7BC8: lw          $t9, 0x114($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X114);
    // 0x802A7BCC: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    // 0x802A7BD0: jalr        $t9
    // 0x802A7BD4: addiu       $a0, $a0, 0x2AC8
    ctx->r4 = ADD32(ctx->r4, 0X2AC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802A7BD4: addiu       $a0, $a0, 0x2AC8
    ctx->r4 = ADD32(ctx->r4, 0X2AC8);
    after_2:
    // 0x802A7BD8: lw          $s0, 0x2C68($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X2C68);
    // 0x802A7BDC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802A7BE0: lh          $t8, 0xB0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XB0);
    // 0x802A7BE4: lw          $t9, 0xB4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XB4);
    // 0x802A7BE8: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    // 0x802A7BEC: jalr        $t9
    // 0x802A7BF0: addiu       $a0, $a0, 0x2AC8
    ctx->r4 = ADD32(ctx->r4, 0X2AC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802A7BF0: addiu       $a0, $a0, 0x2AC8
    ctx->r4 = ADD32(ctx->r4, 0X2AC8);
    after_3:
    // 0x802A7BF4: lw          $s0, 0x2C68($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X2C68);
    // 0x802A7BF8: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x802A7BFC: lh          $t0, 0xB8($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XB8);
    // 0x802A7C00: lw          $t9, 0xBC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XBC);
    // 0x802A7C04: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    // 0x802A7C08: jalr        $t9
    // 0x802A7C0C: addiu       $a0, $a0, 0x2AC8
    ctx->r4 = ADD32(ctx->r4, 0X2AC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802A7C0C: addiu       $a0, $a0, 0x2AC8
    ctx->r4 = ADD32(ctx->r4, 0X2AC8);
    after_4:
    // 0x802A7C10: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x802A7C14: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802A7C18: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802A7C1C: jal         0x80309758
    // 0x802A7C20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309758(rdram, ctx);
        goto after_5;
    // 0x802A7C20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x802A7C24: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A7C28: jal         0x80318E80
    // 0x802A7C2C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80318E80(rdram, ctx);
        goto after_6;
    // 0x802A7C2C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x802A7C30: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802A7C34: jal         0x80318C88
    // 0x802A7C38: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    static_3_80318C88(rdram, ctx);
        goto after_7;
    // 0x802A7C38: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    after_7:
    // 0x802A7C3C: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802A7C40: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802A7C44: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x802A7C48: jal         0x80318E04
    // 0x802A7C4C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80318E04(rdram, ctx);
        goto after_8;
    // 0x802A7C4C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_8:
    // 0x802A7C50: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x802A7C54: jal         0x80318C9C
    // 0x802A7C58: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80318C9C(rdram, ctx);
        goto after_9;
    // 0x802A7C58: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_9:
    // 0x802A7C5C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802A7C60: jal         0x80319008
    // 0x802A7C64: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    static_3_80319008(rdram, ctx);
        goto after_10;
    // 0x802A7C64: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_10:
    // 0x802A7C68: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x802A7C6C: jal         0x802AB2AC
    // 0x802A7C70: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_11;
    // 0x802A7C70: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_11:
    // 0x802A7C74: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802A7C78: slti        $at, $s3, 0x8
    ctx->r1 = SIGNED(ctx->r19) < 0X8 ? 1 : 0;
    // 0x802A7C7C: addiu       $s1, $s1, 0x618
    ctx->r17 = ADD32(ctx->r17, 0X618);
    // 0x802A7C80: bne         $at, $zero, L_802A7B74
    if (ctx->r1 != 0) {
        // 0x802A7C84: addiu       $s2, $s2, 0x618
        ctx->r18 = ADD32(ctx->r18, 0X618);
            goto L_802A7B74;
    }
    // 0x802A7C84: addiu       $s2, $s2, 0x618
    ctx->r18 = ADD32(ctx->r18, 0X618);
    // 0x802A7C88: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7C8C: lwc1        $f24, 0x0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7C90: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802A7C94: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    // 0x802A7C98: addiu       $s2, $s4, 0x5B88
    ctx->r18 = ADD32(ctx->r20, 0X5B88);
    // 0x802A7C9C: addiu       $s5, $zero, 0x8
    ctx->r21 = ADD32(0, 0X8);
L_802A7CA0:
    // 0x802A7CA0: mtc1        $s3, $f8
    ctx->f8.u32l = ctx->r19;
    // 0x802A7CA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7CA8: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7CAC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802A7CB0: mul.s       $f16, $f30, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f30.fl, ctx->f10.fl);
    // 0x802A7CB4: nop

    // 0x802A7CB8: mul.s       $f20, $f28, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = MUL_S(ctx->f28.fl, ctx->f16.fl);
    // 0x802A7CBC: jal         0x80300424
    // 0x802A7CC0: add.s       $f12, $f20, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f18.fl;
    static_3_80300424(rdram, ctx);
        goto after_12;
    // 0x802A7CC0: add.s       $f12, $f20, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f18.fl;
    after_12:
    // 0x802A7CC4: mul.s       $f4, $f0, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x802A7CC8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7CCC: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7CD0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x802A7CD4: jal         0x80300424
    // 0x802A7CD8: add.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f4.fl + ctx->f6.fl;
    static_3_80300424(rdram, ctx);
        goto after_13;
    // 0x802A7CD8: add.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f4.fl + ctx->f6.fl;
    after_13:
    // 0x802A7CDC: lw          $s0, 0x5D28($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X5D28);
    // 0x802A7CE0: mul.s       $f20, $f0, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x802A7CE4: addiu       $a1, $zero, 0xA9
    ctx->r5 = ADD32(0, 0XA9);
    // 0x802A7CE8: lh          $t1, 0x110($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X110);
    // 0x802A7CEC: lw          $t9, 0x114($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X114);
    // 0x802A7CF0: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    // 0x802A7CF4: jalr        $t9
    // 0x802A7CF8: addiu       $a0, $a0, 0x5B88
    ctx->r4 = ADD32(ctx->r4, 0X5B88);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x802A7CF8: addiu       $a0, $a0, 0x5B88
    ctx->r4 = ADD32(ctx->r4, 0X5B88);
    after_14:
    // 0x802A7CFC: lw          $s0, 0x5D28($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X5D28);
    // 0x802A7D00: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802A7D04: lh          $t2, 0xB0($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XB0);
    // 0x802A7D08: lw          $t9, 0xB4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XB4);
    // 0x802A7D0C: addu        $a0, $t2, $s1
    ctx->r4 = ADD32(ctx->r10, ctx->r17);
    // 0x802A7D10: jalr        $t9
    // 0x802A7D14: addiu       $a0, $a0, 0x5B88
    ctx->r4 = ADD32(ctx->r4, 0X5B88);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x802A7D14: addiu       $a0, $a0, 0x5B88
    ctx->r4 = ADD32(ctx->r4, 0X5B88);
    after_15:
    // 0x802A7D18: lw          $s0, 0x5D28($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X5D28);
    // 0x802A7D1C: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x802A7D20: lh          $t3, 0xB8($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XB8);
    // 0x802A7D24: lw          $t9, 0xBC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XBC);
    // 0x802A7D28: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    // 0x802A7D2C: jalr        $t9
    // 0x802A7D30: addiu       $a0, $a0, 0x5B88
    ctx->r4 = ADD32(ctx->r4, 0X5B88);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x802A7D30: addiu       $a0, $a0, 0x5B88
    ctx->r4 = ADD32(ctx->r4, 0X5B88);
    after_16:
    // 0x802A7D34: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x802A7D38: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802A7D3C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802A7D40: jal         0x80309758
    // 0x802A7D44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309758(rdram, ctx);
        goto after_17;
    // 0x802A7D44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x802A7D48: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A7D4C: jal         0x80318E80
    // 0x802A7D50: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80318E80(rdram, ctx);
        goto after_18;
    // 0x802A7D50: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_18:
    // 0x802A7D54: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802A7D58: jal         0x80318C88
    // 0x802A7D5C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_80318C88(rdram, ctx);
        goto after_19;
    // 0x802A7D5C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_19:
    // 0x802A7D60: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802A7D64: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802A7D68: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802A7D6C: jal         0x80318E04
    // 0x802A7D70: lui         $a3, 0xC000
    ctx->r7 = S32(0XC000 << 16);
    static_3_80318E04(rdram, ctx);
        goto after_20;
    // 0x802A7D70: lui         $a3, 0xC000
    ctx->r7 = S32(0XC000 << 16);
    after_20:
    // 0x802A7D74: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x802A7D78: jal         0x80318C9C
    // 0x802A7D7C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80318C9C(rdram, ctx);
        goto after_21;
    // 0x802A7D7C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_21:
    // 0x802A7D80: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802A7D84: jal         0x80319008
    // 0x802A7D88: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    static_3_80319008(rdram, ctx);
        goto after_22;
    // 0x802A7D88: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_22:
    // 0x802A7D8C: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x802A7D90: jal         0x802AB2AC
    // 0x802A7D94: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_23;
    // 0x802A7D94: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_23:
    // 0x802A7D98: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802A7D9C: addiu       $s1, $s1, 0x484
    ctx->r17 = ADD32(ctx->r17, 0X484);
    // 0x802A7DA0: bne         $s3, $s5, L_802A7CA0
    if (ctx->r19 != ctx->r21) {
        // 0x802A7DA4: addiu       $s2, $s2, 0x484
        ctx->r18 = ADD32(ctx->r18, 0X484);
            goto L_802A7CA0;
    }
    // 0x802A7DA4: addiu       $s2, $s2, 0x484
    ctx->r18 = ADD32(ctx->r18, 0X484);
    // 0x802A7DA8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x802A7DAC: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x802A7DB0: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x802A7DB4: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x802A7DB8: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x802A7DBC: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x802A7DC0: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x802A7DC4: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x802A7DC8: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x802A7DCC: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x802A7DD0: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x802A7DD4: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x802A7DD8: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x802A7DDC: jr          $ra
    // 0x802A7DE0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x802A7DE0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void D_80234B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234B30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234B34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234B38: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80234B3C: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80234B40: lwc1        $f14, 0x8($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80234B44: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80234B48: nop

    // 0x80234B4C: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80234B50: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80234B54: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80234B58: jal         0x8022AA40
    // 0x80234B5C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_0;
    // 0x80234B5C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x80234B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234B64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80234B68: jr          $ra
    // 0x80234B6C: nop

    return;
    // 0x80234B6C: nop

;}

#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802E9C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9CA0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802E9CA4: jr          $ra
    // 0x802E9CA8: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802E9CA8: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_8021E82C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E82C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021E830: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021E834: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8021E838: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8021E83C: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8021E840: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8021E844: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8021E848: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8021E84C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8021E850: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8021E854: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8021E858: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8021E85C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8021E860: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8021E864: lw          $t7, 0x44($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X44);
    // 0x8021E868: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8021E86C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021E870: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8021E874: lw          $s3, 0x0($t0)
    ctx->r19 = MEM_W(ctx->r8, 0X0);
    // 0x8021E878: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8021E87C: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x8021E880: lw          $t1, 0xC($s3)
    ctx->r9 = MEM_W(ctx->r19, 0XC);
    // 0x8021E884: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x8021E888: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8021E88C: lh          $t2, 0x1C($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X1C);
    // 0x8021E890: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x8021E894: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8021E898: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8021E89C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8021E8A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8021E8A4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021E8A8: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x8021E8AC: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x8021E8B0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8021E8B4: addiu       $t5, $zero, 0xF0
    ctx->r13 = ADD32(0, 0XF0);
    // 0x8021E8B8: addu        $v0, $s5, $t8
    ctx->r2 = ADD32(ctx->r21, ctx->r24);
    // 0x8021E8BC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021E8C0: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8021E8C4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8021E8C8: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8021E8CC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8021E8D0: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8021E8D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021E8D8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021E8DC: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x8021E8E0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8021E8E4: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x8021E8E8: nop

    // 0x8021E8EC: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x8021E8F0: subu        $a1, $t5, $a1
    ctx->r5 = SUB32(ctx->r13, ctx->r5);
    // 0x8021E8F4: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x8021E8F8: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x8021E8FC: sb          $t7, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r15;
    // 0x8021E900: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x8021E904: sb          $t9, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r25;
    // 0x8021E908: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x8021E90C: sb          $t0, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r8;
    // 0x8021E910: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x8021E914: sb          $t1, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r9;
    // 0x8021E918: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8021E91C: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x8021E920: jal         0x8022FF90
    // 0x8021E924: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    static_3_8022FF90(rdram, ctx);
        goto after_0;
    // 0x8021E924: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    after_0:
    // 0x8021E928: slti        $at, $v0, 0x1A
    ctx->r1 = SIGNED(ctx->r2) < 0X1A ? 1 : 0;
    // 0x8021E92C: bne         $at, $zero, L_8021E93C
    if (ctx->r1 != 0) {
        // 0x8021E930: or          $s7, $v0, $zero
        ctx->r23 = ctx->r2 | 0;
            goto L_8021E93C;
    }
    // 0x8021E930: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x8021E934: sb          $zero, 0x18($s6)
    MEM_B(0X18, ctx->r22) = 0;
    // 0x8021E938: addiu       $s7, $zero, 0x19
    ctx->r23 = ADD32(0, 0X19);
L_8021E93C:
    // 0x8021E93C: blez        $s7, L_8021E9C4
    if (SIGNED(ctx->r23) <= 0) {
        // 0x8021E940: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8021E9C4;
    }
    // 0x8021E940: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021E944: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
    // 0x8021E948: addiu       $s6, $zero, -0x2
    ctx->r22 = ADD32(0, -0X2);
    // 0x8021E94C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8021E950:
    // 0x8021E950: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8021E954: jal         0x8022FF40
    // 0x8021E958: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    func_8022FF40(rdram, ctx);
        goto after_1;
    // 0x8021E958: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    after_1:
    // 0x8021E95C: beq         $v0, $zero, L_8021E994
    if (ctx->r2 == 0) {
        // 0x8021E960: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8021E994;
    }
    // 0x8021E960: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8021E964: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    // 0x8021E968: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x8021E96C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8021E970: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8021E974: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8021E978: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8021E97C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8021E980: addu        $t6, $s5, $t5
    ctx->r14 = ADD32(ctx->r21, ctx->r13);
    // 0x8021E984: addu        $t8, $t6, $s0
    ctx->r24 = ADD32(ctx->r14, ctx->r16);
    // 0x8021E988: subu        $t3, $v0, $t2
    ctx->r11 = SUB32(ctx->r2, ctx->r10);
    // 0x8021E98C: b           L_8021E9B8
    // 0x8021E990: sh          $t3, 0x14($t8)
    MEM_H(0X14, ctx->r24) = ctx->r11;
        goto L_8021E9B8;
    // 0x8021E990: sh          $t3, 0x14($t8)
    MEM_H(0X14, ctx->r24) = ctx->r11;
L_8021E994:
    // 0x8021E994: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x8021E998: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8021E99C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8021E9A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8021E9A4: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x8021E9A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8021E9AC: addu        $t0, $s5, $t9
    ctx->r8 = ADD32(ctx->r21, ctx->r25);
    // 0x8021E9B0: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x8021E9B4: sh          $s6, 0x14($t1)
    MEM_H(0X14, ctx->r9) = ctx->r22;
L_8021E9B8:
    // 0x8021E9B8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8021E9BC: bne         $s1, $s7, L_8021E950
    if (ctx->r17 != ctx->r23) {
        // 0x8021E9C0: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_8021E950;
    }
    // 0x8021E9C0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8021E9C4:
    // 0x8021E9C4: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x8021E9C8: sll         $t5, $s7, 1
    ctx->r13 = S32(ctx->r23 << 1);
    // 0x8021E9CC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8021E9D0: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x8021E9D4: addu        $t2, $t2, $v1
    ctx->r10 = ADD32(ctx->r10, ctx->r3);
    // 0x8021E9D8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8021E9DC: subu        $t2, $t2, $v1
    ctx->r10 = SUB32(ctx->r10, ctx->r3);
    // 0x8021E9E0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8021E9E4: addu        $v0, $s5, $t2
    ctx->r2 = ADD32(ctx->r21, ctx->r10);
    // 0x8021E9E8: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x8021E9EC: sh          $t4, 0x14($t6)
    MEM_H(0X14, ctx->r14) = ctx->r12;
    // 0x8021E9F0: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8021E9F4: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x8021E9F8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8021E9FC: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8021EA00: lw          $t8, 0x44($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X44);
    // 0x8021EA04: slti        $at, $v1, 0x22
    ctx->r1 = SIGNED(ctx->r3) < 0X22 ? 1 : 0;
    // 0x8021EA08: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8021EA0C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8021EA10: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8021EA14: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
    // 0x8021EA18: bne         $at, $zero, L_8021EA34
    if (ctx->r1 != 0) {
        // 0x8021EA1C: sw          $t1, 0x48($v0)
        MEM_W(0X48, ctx->r2) = ctx->r9;
            goto L_8021EA34;
    }
    // 0x8021EA1C: sw          $t1, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r9;
    // 0x8021EA20: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021EA24: jal         0x80231A24
    // 0x8021EA28: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x8021EA28: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x8021EA2C: b           L_8021EA3C
    // 0x8021EA30: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8021EA3C;
    // 0x8021EA30: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8021EA34:
    // 0x8021EA34: sw          $t2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r10;
    // 0x8021EA38: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8021EA3C:
    // 0x8021EA3C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8021EA40: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8021EA44: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8021EA48: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8021EA4C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8021EA50: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8021EA54: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8021EA58: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8021EA5C: jr          $ra
    // 0x8021EA60: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8021EA60: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_8022D3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022D3A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022D3A4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8022D3A8: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x8022D3AC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022D3B0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022D3B4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8022D3B8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8022D3BC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8022D3C0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8022D3C4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8022D3C8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8022D3CC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022D3D0: jal         0x80231A24
    // 0x8022D3D4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022D3D4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x8022D3D8: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x8022D3DC: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x8022D3E0: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x8022D3E4: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x8022D3E8: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x8022D3EC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8022D3F0: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
    // 0x8022D3F4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8022D3F8:
    // 0x8022D3F8: div         $zero, $s2, $s3
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r19)));
    // 0x8022D3FC: mfhi        $s0
    ctx->r16 = hi;
    // 0x8022D400: sll         $t6, $s0, 3
    ctx->r14 = S32(ctx->r16 << 3);
    // 0x8022D404: addu        $t7, $s5, $t6
    ctx->r15 = ADD32(ctx->r21, ctx->r14);
    // 0x8022D408: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x8022D40C: lw          $a3, 0x4($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X4);
    // 0x8022D410: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8022D414: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8022D418: bne         $s3, $zero, L_8022D424
    if (ctx->r19 != 0) {
        // 0x8022D41C: nop
    
            goto L_8022D424;
    }
    // 0x8022D41C: nop

    // 0x8022D420: break       7
    do_break(2149766176);
L_8022D424:
    // 0x8022D424: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022D428: bne         $s3, $at, L_8022D43C
    if (ctx->r19 != ctx->r1) {
        // 0x8022D42C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022D43C;
    }
    // 0x8022D42C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022D430: bne         $s2, $at, L_8022D43C
    if (ctx->r18 != ctx->r1) {
        // 0x8022D434: nop
    
            goto L_8022D43C;
    }
    // 0x8022D434: nop

    // 0x8022D438: break       6
    do_break(2149766200);
L_8022D43C:
    // 0x8022D43C: jal         0x80231A24
    // 0x8022D440: nop

    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022D440: nop

    after_1:
    // 0x8022D444: jal         0x8022D04C
    // 0x8022D448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8022D04C(rdram, ctx);
        goto after_2;
    // 0x8022D448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8022D44C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022D450: bne         $s1, $s3, L_8022D3F8
    if (ctx->r17 != ctx->r19) {
        // 0x8022D454: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8022D3F8;
    }
    // 0x8022D454: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8022D458: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022D45C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022D460: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8022D464: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022D468: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x8022D46C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022D470: jal         0x80231A24
    // 0x8022D474: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x8022D474: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x8022D478: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D47C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8022D480: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8022D484: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D488: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8022D48C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8022D490: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8022D494: jr          $ra
    // 0x8022D498: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8022D498: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_8023FD64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FD64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023FD68: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023FD6C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8023FD70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023FD74: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023FD78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023FD7C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8023FD80: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8023FD84: lw          $s1, 0xC($v0)
    ctx->r17 = MEM_W(ctx->r2, 0XC);
L_8023FD88:
    // 0x8023FD88: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8023FD8C: beql        $s1, $zero, L_8023FD88
    if (ctx->r17 == 0) {
        // 0x8023FD90: lw          $s1, 0xC($v0)
        ctx->r17 = MEM_W(ctx->r2, 0XC);
            goto L_8023FD88;
    }
    goto skip_0;
    // 0x8023FD90: lw          $s1, 0xC($v0)
    ctx->r17 = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x8023FD94: lbu         $t6, 0x34($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X34);
    // 0x8023FD98: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8023FD9C: blez        $t6, L_8023FDD0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8023FDA0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8023FDD0;
    }
    // 0x8023FDA0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8023FDA4:
    // 0x8023FDA4: jal         0x8023FD34
    // 0x8023FDA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_8023FD34(rdram, ctx);
        goto after_0;
    // 0x8023FDA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8023FDAC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8023FDB0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8023FDB4: jal         0x8023FCE0
    // 0x8023FDB8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_8023FCE0(rdram, ctx);
        goto after_1;
    // 0x8023FDB8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x8023FDBC: lbu         $t7, 0x34($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X34);
    // 0x8023FDC0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8023FDC4: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8023FDC8: bnel        $at, $zero, L_8023FDA4
    if (ctx->r1 != 0) {
        // 0x8023FDCC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8023FDA4;
    }
    goto skip_1;
    // 0x8023FDCC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_1:
L_8023FDD0:
    // 0x8023FDD0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8023FDD4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8023FDD8: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8023FDDC: beql        $t9, $zero, L_8023FE04
    if (ctx->r25 == 0) {
        // 0x8023FDE0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8023FE04;
    }
    goto skip_2;
    // 0x8023FDE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x8023FDE4: jal         0x8023FD34
    // 0x8023FDE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_8023FD34(rdram, ctx);
        goto after_2;
    // 0x8023FDE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x8023FDEC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8023FDF0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8023FDF4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8023FDF8: jal         0x8023FCE0
    // 0x8023FDFC: lw          $a1, 0x8($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X8);
    static_3_8023FCE0(rdram, ctx);
        goto after_3;
    // 0x8023FDFC: lw          $a1, 0x8($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X8);
    after_3:
    // 0x8023FE00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8023FE04:
    // 0x8023FE04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023FE08: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023FE0C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023FE10: jr          $ra
    // 0x8023FE14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8023FE14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802A97A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9828: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802A982C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A9830: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A9834: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x802A9838: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A983C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A9840: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x802A9844: nop

    // 0x802A9848: bc1f        L_802A9864
    if (!c1cs) {
        // 0x802A984C: nop
    
            goto L_802A9864;
    }
    // 0x802A984C: nop

    // 0x802A9850: jal         0x802DA3F8
    // 0x802A9854: nop

    static_3_802DA3F8(rdram, ctx);
        goto after_0;
    // 0x802A9854: nop

    after_0:
    // 0x802A9858: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802A985C: b           L_802A98BC
    // 0x802A9860: sb          $t6, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r14;
        goto L_802A98BC;
    // 0x802A9860: sb          $t6, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r14;
L_802A9864:
    // 0x802A9864: jal         0x80234B48
    // 0x802A9868: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    static_3_80234B48(rdram, ctx);
        goto after_1;
    // 0x802A9868: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    after_1:
    // 0x802A986C: lwc1        $f8, 0x7C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x802A9870: addiu       $a3, $s0, 0x2C
    ctx->r7 = ADD32(ctx->r16, 0X2C);
    // 0x802A9874: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802A9878: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802A987C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x802A9880: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802A9884: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802A9888: jal         0x802D01D4
    // 0x802A988C: nop

    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x802A988C: nop

    after_2:
    // 0x802A9890: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802A9894: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x802A9898: jal         0x8021B4B0
    // 0x802A989C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_3;
    // 0x802A989C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802A98A0: lwc1        $f0, 0x7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x802A98A4: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A98A8: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x802A98AC: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x802A98B0: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x802A98B4: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x802A98B8: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
L_802A98BC:
    // 0x802A98BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A98C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A98C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802A98C8: jr          $ra
    // 0x802A98CC: nop

    return;
    // 0x802A98CC: nop

;}
RECOMP_FUNC void D_80290B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290BB0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80290BB4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80290BB8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80290BBC: jr          $ra
    // 0x80290BC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80290BC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_80298CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298D6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80298D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80298D74: jal         0x8028D994
    // 0x80298D78: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D994(rdram, ctx);
        goto after_0;
    // 0x80298D78: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x80298D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80298D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80298D84: jr          $ra
    // 0x80298D88: nop

    return;
    // 0x80298D88: nop

;}
RECOMP_FUNC void D_80207BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80207BD0: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x80207BD4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80207BD8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80207BDC: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80207BE0: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80207BE4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80207BE8: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80207BEC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80207BF0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80207BF4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80207BF8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80207BFC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80207C00: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80207C04: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80207C08: sw          $a0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r4;
    // 0x80207C0C: sw          $a1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r5;
    // 0x80207C10: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80207C14: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80207C18: addiu       $t6, $sp, 0x104
    ctx->r14 = ADD32(ctx->r29, 0X104);
    // 0x80207C1C: lw          $t1, 0x4($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X4);
    // 0x80207C20: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80207C24: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80207C28: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
    // 0x80207C2C: lw          $t1, 0xC($t7)
    ctx->r9 = MEM_W(ctx->r15, 0XC);
    // 0x80207C30: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80207C34: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x80207C38: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80207C3C: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x80207C40: sw          $t1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r9;
    // 0x80207C44: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x80207C48: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x80207C4C: addiu       $t2, $sp, 0xA8
    ctx->r10 = ADD32(ctx->r29, 0XA8);
    // 0x80207C50: lw          $t9, 0x4($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X4);
    // 0x80207C54: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x80207C58: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x80207C5C: sw          $t9, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r25;
    // 0x80207C60: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x80207C64: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x80207C68: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x80207C6C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80207C70: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80207C74: lbu         $v1, 0x0($t8)
    ctx->r3 = MEM_BU(ctx->r24, 0X0);
    // 0x80207C78: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x80207C7C: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x80207C80: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x80207C84: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x80207C88: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
    // 0x80207C8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80207C90: blez        $v1, L_80207D7C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80207C94: or          $a3, $v1, $zero
        ctx->r7 = ctx->r3 | 0;
            goto L_80207D7C;
    }
    // 0x80207C94: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x80207C98: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x80207C9C: beq         $v0, $zero, L_80207CE4
    if (ctx->r2 == 0) {
        // 0x80207CA0: lw          $t6, 0x118($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X118);
            goto L_80207CE4;
    }
    // 0x80207CA0: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x80207CA4: sll         $t7, $zero, 2
    ctx->r15 = S32(0 << 2);
    // 0x80207CA8: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80207CAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80207CB0:
    // 0x80207CB0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80207CB4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80207CB8: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x80207CBC: nop

    // 0x80207CC0: bc1fl       L_80207CD4
    if (!c1cs) {
        // 0x80207CC4: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80207CD4;
    }
    goto skip_0;
    // 0x80207CC4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x80207CC8: lwc1        $f20, 0x0($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80207CCC: or          $fp, $a2, $zero
    ctx->r30 = ctx->r6 | 0;
    // 0x80207CD0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_80207CD4:
    // 0x80207CD4: bne         $a0, $a2, L_80207CB0
    if (ctx->r4 != ctx->r6) {
        // 0x80207CD8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80207CB0;
    }
    // 0x80207CD8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80207CDC: beql        $a2, $a3, L_80207D80
    if (ctx->r6 == ctx->r7) {
        // 0x80207CE0: lw          $t4, 0x118($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X118);
            goto L_80207D80;
    }
    goto skip_1;
    // 0x80207CE0: lw          $t4, 0x118($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X118);
    skip_1:
L_80207CE4:
    // 0x80207CE4: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x80207CE8: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x80207CEC: addu        $v1, $t1, $t5
    ctx->r3 = ADD32(ctx->r9, ctx->r13);
L_80207CF0:
    // 0x80207CF0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80207CF4: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80207CF8: c.lt.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl < ctx->f20.fl;
    // 0x80207CFC: nop

    // 0x80207D00: bc1fl       L_80207D14
    if (!c1cs) {
        // 0x80207D04: lw          $s4, 0x4($v1)
        ctx->r20 = MEM_W(ctx->r3, 0X4);
            goto L_80207D14;
    }
    goto skip_2;
    // 0x80207D04: lw          $s4, 0x4($v1)
    ctx->r20 = MEM_W(ctx->r3, 0X4);
    skip_2:
    // 0x80207D08: lwc1        $f20, 0x0($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80207D0C: or          $fp, $a2, $zero
    ctx->r30 = ctx->r6 | 0;
    // 0x80207D10: lw          $s4, 0x4($v1)
    ctx->r20 = MEM_W(ctx->r3, 0X4);
L_80207D14:
    // 0x80207D14: lwc1        $f0, 0x0($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X0);
    // 0x80207D18: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80207D1C: nop

    // 0x80207D20: bc1fl       L_80207D34
    if (!c1cs) {
        // 0x80207D24: lw          $s4, 0x8($v1)
        ctx->r20 = MEM_W(ctx->r3, 0X8);
            goto L_80207D34;
    }
    goto skip_3;
    // 0x80207D24: lw          $s4, 0x8($v1)
    ctx->r20 = MEM_W(ctx->r3, 0X8);
    skip_3:
    // 0x80207D28: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80207D2C: addiu       $fp, $a2, 0x1
    ctx->r30 = ADD32(ctx->r6, 0X1);
    // 0x80207D30: lw          $s4, 0x8($v1)
    ctx->r20 = MEM_W(ctx->r3, 0X8);
L_80207D34:
    // 0x80207D34: lwc1        $f0, 0x0($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X0);
    // 0x80207D38: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80207D3C: nop

    // 0x80207D40: bc1fl       L_80207D54
    if (!c1cs) {
        // 0x80207D44: lw          $s4, 0xC($v1)
        ctx->r20 = MEM_W(ctx->r3, 0XC);
            goto L_80207D54;
    }
    goto skip_4;
    // 0x80207D44: lw          $s4, 0xC($v1)
    ctx->r20 = MEM_W(ctx->r3, 0XC);
    skip_4:
    // 0x80207D48: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80207D4C: addiu       $fp, $a2, 0x2
    ctx->r30 = ADD32(ctx->r6, 0X2);
    // 0x80207D50: lw          $s4, 0xC($v1)
    ctx->r20 = MEM_W(ctx->r3, 0XC);
L_80207D54:
    // 0x80207D54: lwc1        $f0, 0x0($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X0);
    // 0x80207D58: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80207D5C: nop

    // 0x80207D60: bc1fl       L_80207D74
    if (!c1cs) {
        // 0x80207D64: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_80207D74;
    }
    goto skip_5;
    // 0x80207D64: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    skip_5:
    // 0x80207D68: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80207D6C: addiu       $fp, $a2, 0x3
    ctx->r30 = ADD32(ctx->r6, 0X3);
    // 0x80207D70: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_80207D74:
    // 0x80207D74: bne         $a2, $a3, L_80207CF0
    if (ctx->r6 != ctx->r7) {
        // 0x80207D78: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_80207CF0;
    }
    // 0x80207D78: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
L_80207D7C:
    // 0x80207D7C: lw          $t4, 0x118($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X118);
L_80207D80:
    // 0x80207D80: sll         $a0, $fp, 2
    ctx->r4 = S32(ctx->r30 << 2);
    // 0x80207D84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80207D88: addu        $a1, $t4, $a0
    ctx->r5 = ADD32(ctx->r12, ctx->r4);
    // 0x80207D8C: lw          $s4, 0x0($a1)
    ctx->r20 = MEM_W(ctx->r5, 0X0);
    // 0x80207D90: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80207D94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80207D98: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80207D9C: slti        $at, $a3, 0x2
    ctx->r1 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    // 0x80207DA0: sb          $t2, 0x9B($sp)
    MEM_B(0X9B, ctx->r29) = ctx->r10;
    // 0x80207DA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80207DA8: sw          $s4, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r20;
    // 0x80207DAC: swc1        $f22, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f22.u32l;
    // 0x80207DB0: swc1        $f22, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f22.u32l;
    // 0x80207DB4: bne         $at, $zero, L_80207EFC
    if (ctx->r1 != 0) {
        // 0x80207DB8: swc1        $f8, 0xB8($sp)
        MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
            goto L_80207EFC;
    }
    // 0x80207DB8: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    // 0x80207DBC: sw          $a2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r6;
    // 0x80207DC0: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x80207DC4: addiu       $s7, $sp, 0xB4
    ctx->r23 = ADD32(ctx->r29, 0XB4);
    // 0x80207DC8: addiu       $s6, $zero, 0xC
    ctx->r22 = ADD32(0, 0XC);
    // 0x80207DCC: addiu       $s5, $sp, 0xC0
    ctx->r21 = ADD32(ctx->r29, 0XC0);
L_80207DD0:
    // 0x80207DD0: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x80207DD4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80207DD8: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80207DDC: blez        $a3, L_80207E84
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80207DE0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80207E84;
    }
    // 0x80207DE0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80207DE4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80207DE8: addiu       $s3, $sp, 0x7C
    ctx->r19 = ADD32(ctx->r29, 0X7C);
L_80207DEC:
    // 0x80207DEC: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x80207DF0: lw          $t9, 0x118($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X118);
    // 0x80207DF4: bne         $t3, $zero, L_80207E64
    if (ctx->r11 != 0) {
        // 0x80207DF8: addu        $t8, $t9, $s2
        ctx->r24 = ADD32(ctx->r25, ctx->r18);
            goto L_80207E64;
    }
    // 0x80207DF8: addu        $t8, $t9, $s2
    ctx->r24 = ADD32(ctx->r25, ctx->r18);
    // 0x80207DFC: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x80207E00: lwc1        $f16, 0x0($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X0);
    // 0x80207E04: multu       $s1, $s6
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80207E08: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80207E0C: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x80207E10: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80207E14: swc1        $f18, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f18.u32l;
    // 0x80207E18: lwc1        $f6, 0x4($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X4);
    // 0x80207E1C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80207E20: mflo        $t6
    ctx->r14 = lo;
    // 0x80207E24: addu        $s0, $s5, $t6
    ctx->r16 = ADD32(ctx->r21, ctx->r14);
    // 0x80207E28: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80207E2C: swc1        $f22, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f22.u32l;
    // 0x80207E30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80207E34: jal         0x80234D30
    // 0x80207E38: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    static_3_80234D30(rdram, ctx);
        goto after_0;
    // 0x80207E38: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80207E3C: beq         $v0, $zero, L_80207E64
    if (ctx->r2 == 0) {
        // 0x80207E40: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_80207E64;
    }
    // 0x80207E40: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80207E44: jal         0x80234BC0
    // 0x80207E48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80234BC0(rdram, ctx);
        goto after_1;
    // 0x80207E48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80207E4C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80207E50: nop

    // 0x80207E54: bc1fl       L_80207E68
    if (!c1cs) {
        // 0x80207E58: lw          $t7, 0x64($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X64);
            goto L_80207E68;
    }
    goto skip_6;
    // 0x80207E58: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    skip_6:
    // 0x80207E5C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80207E60: or          $fp, $s1, $zero
    ctx->r30 = ctx->r17 | 0;
L_80207E64:
    // 0x80207E64: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
L_80207E68:
    // 0x80207E68: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80207E6C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80207E70: bne         $s1, $t7, L_80207DEC
    if (ctx->r17 != ctx->r15) {
        // 0x80207E74: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_80207DEC;
    }
    // 0x80207E74: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80207E78: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x80207E7C: sll         $a0, $fp, 2
    ctx->r4 = S32(ctx->r30 << 2);
    // 0x80207E80: addu        $a1, $t1, $a0
    ctx->r5 = ADD32(ctx->r9, ctx->r4);
L_80207E84:
    // 0x80207E84: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80207E88: lw          $t5, 0x104($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X104);
    // 0x80207E8C: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    // 0x80207E90: beql        $v1, $t5, L_80207F00
    if (ctx->r3 == ctx->r13) {
        // 0x80207E94: lbu         $a3, 0x9B($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X9B);
            goto L_80207F00;
    }
    goto skip_7;
    // 0x80207E94: lbu         $a3, 0x9B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X9B);
    skip_7:
    // 0x80207E98: multu       $fp, $s6
    result = U64(U32(ctx->r30)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80207E9C: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x80207EA0: addu        $t3, $sp, $t2
    ctx->r11 = ADD32(ctx->r29, ctx->r10);
    // 0x80207EA4: sw          $v1, 0x104($t3)
    MEM_W(0X104, ctx->r11) = ctx->r3;
    // 0x80207EA8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80207EAC: addu        $t8, $sp, $a0
    ctx->r24 = ADD32(ctx->r29, ctx->r4);
    // 0x80207EB0: sw          $t9, 0x7C($t8)
    MEM_W(0X7C, ctx->r24) = ctx->r25;
    // 0x80207EB4: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x80207EB8: lbu         $t7, 0x9B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X9B);
    // 0x80207EBC: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x80207EC0: mflo        $t6
    ctx->r14 = lo;
    // 0x80207EC4: addu        $v0, $s5, $t6
    ctx->r2 = ADD32(ctx->r21, ctx->r14);
    // 0x80207EC8: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80207ECC: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x80207ED0: addiu       $t1, $t7, 0x1
    ctx->r9 = ADD32(ctx->r15, 0X1);
    // 0x80207ED4: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x80207ED8: or          $s4, $v1, $zero
    ctx->r20 = ctx->r3 | 0;
    // 0x80207EDC: swc1        $f16, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f16.u32l;
    // 0x80207EE0: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80207EE4: sw          $t4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r12;
    // 0x80207EE8: swc1        $f22, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f22.u32l;
    // 0x80207EEC: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80207EF0: sb          $t1, 0x9B($sp)
    MEM_B(0X9B, ctx->r29) = ctx->r9;
    // 0x80207EF4: bne         $t4, $t2, L_80207DD0
    if (ctx->r12 != ctx->r10) {
        // 0x80207EF8: swc1        $f4, 0xB8($sp)
        MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
            goto L_80207DD0;
    }
    // 0x80207EF8: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
L_80207EFC:
    // 0x80207EFC: lbu         $a3, 0x9B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X9B);
L_80207F00:
    // 0x80207F00: blez        $a3, L_80207F98
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80207F04: andi        $t0, $a3, 0x3
        ctx->r8 = ctx->r7 & 0X3;
            goto L_80207F98;
    }
    // 0x80207F04: andi        $t0, $a3, 0x3
    ctx->r8 = ctx->r7 & 0X3;
    // 0x80207F08: beq         $t0, $zero, L_80207F4C
    if (ctx->r8 == 0) {
        // 0x80207F0C: sw          $zero, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = 0;
            goto L_80207F4C;
    }
    // 0x80207F0C: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x80207F10: lw          $t3, 0x118($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X118);
    // 0x80207F14: sll         $a2, $zero, 2
    ctx->r6 = S32(0 << 2);
    // 0x80207F18: addiu       $t9, $sp, 0x104
    ctx->r25 = ADD32(ctx->r29, 0X104);
    // 0x80207F1C: addu        $v0, $a2, $t9
    ctx->r2 = ADD32(ctx->r6, ctx->r25);
    // 0x80207F20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80207F24: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80207F28: addu        $v1, $t3, $a2
    ctx->r3 = ADD32(ctx->r11, ctx->r6);
L_80207F2C:
    // 0x80207F2C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80207F30: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80207F34: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80207F38: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80207F3C: bne         $a0, $a1, L_80207F2C
    if (ctx->r4 != ctx->r5) {
        // 0x80207F40: sw          $t8, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r24;
            goto L_80207F2C;
    }
    // 0x80207F40: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
    // 0x80207F44: beq         $a1, $a3, L_80207F98
    if (ctx->r5 == ctx->r7) {
        // 0x80207F48: sw          $a1, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = ctx->r5;
            goto L_80207F98;
    }
    // 0x80207F48: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
L_80207F4C:
    // 0x80207F4C: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x80207F50: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x80207F54: addiu       $t7, $sp, 0x104
    ctx->r15 = ADD32(ctx->r29, 0X104);
    // 0x80207F58: sll         $a2, $a1, 2
    ctx->r6 = S32(ctx->r5 << 2);
    // 0x80207F5C: sll         $t1, $a3, 2
    ctx->r9 = S32(ctx->r7 << 2);
    // 0x80207F60: addu        $a0, $t1, $t7
    ctx->r4 = ADD32(ctx->r9, ctx->r15);
    // 0x80207F64: addu        $v0, $a2, $t7
    ctx->r2 = ADD32(ctx->r6, ctx->r15);
    // 0x80207F68: addu        $v1, $t6, $a2
    ctx->r3 = ADD32(ctx->r14, ctx->r6);
L_80207F6C:
    // 0x80207F6C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80207F70: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80207F74: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80207F78: sw          $t5, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->r13;
    // 0x80207F7C: lw          $t4, -0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, -0XC);
    // 0x80207F80: sw          $t4, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->r12;
    // 0x80207F84: lw          $t2, -0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, -0X8);
    // 0x80207F88: sw          $t2, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->r10;
    // 0x80207F8C: lw          $t3, -0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, -0X4);
    // 0x80207F90: bne         $v0, $a0, L_80207F6C
    if (ctx->r2 != ctx->r4) {
        // 0x80207F94: sw          $t3, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r11;
            goto L_80207F6C;
    }
    // 0x80207F94: sw          $t3, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r11;
L_80207F98:
    // 0x80207F98: lbu         $t9, 0x9B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X9B);
    // 0x80207F9C: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x80207FA0: sb          $t9, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r25;
    // 0x80207FA4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80207FA8: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80207FAC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80207FB0: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80207FB4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80207FB8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80207FBC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80207FC0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80207FC4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80207FC8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80207FCC: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80207FD0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80207FD4: jr          $ra
    // 0x80207FD8: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    // 0x80207FD8: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void D_8029B0B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029B138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029B13C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8029B140: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8029B144: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8029B148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029B14C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8029B150: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8029B154: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8029B158: jal         0x8022FFC8
    // 0x8029B15C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_8022FFC8(rdram, ctx);
        goto after_0;
    // 0x8029B15C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x8029B160: beq         $v0, $zero, L_8029B1C0
    if (ctx->r2 == 0) {
        // 0x8029B164: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_8029B1C0;
    }
    // 0x8029B164: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8029B168: lw          $t8, 0x2C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X2C);
    // 0x8029B16C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8029B170: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8029B174: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x8029B178: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8029B17C: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x8029B180: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x8029B184: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8029B188: bne         $t6, $t1, L_8029B1A8
    if (ctx->r14 != ctx->r9) {
        // 0x8029B18C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8029B1A8;
    }
    // 0x8029B18C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029B190: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8029B194: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8029B198: jal         0x8021E708
    // 0x8029B19C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_8021E708(rdram, ctx);
        goto after_1;
    // 0x8029B19C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8029B1A0: b           L_8029B1B4
    // 0x8029B1A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_8029B1B4;
    // 0x8029B1A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_8029B1A8:
    // 0x8029B1A8: jal         0x8021E708
    // 0x8029B1AC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_2;
    // 0x8029B1AC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x8029B1B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_8029B1B4:
    // 0x8029B1B4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8029B1B8: jal         0x8021E87C
    // 0x8029B1BC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    static_3_8021E87C(rdram, ctx);
        goto after_3;
    // 0x8029B1BC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_3:
L_8029B1C0:
    // 0x8029B1C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029B1C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029B1C8: jr          $ra
    // 0x8029B1CC: nop

    return;
    // 0x8029B1CC: nop

;}
RECOMP_FUNC void D_802E2864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E28E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802E28E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802E28EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E28F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E28F4: beq         $a0, $zero, L_802E293C
    if (ctx->r4 == 0) {
        // 0x802E28F8: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_802E293C;
    }
    // 0x802E28F8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802E28FC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802E2900: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802E2904: jal         0x8031367C
    // 0x802E2908: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    static_3_8031367C(rdram, ctx);
        goto after_0;
    // 0x802E2908: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    after_0:
    // 0x802E290C: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    // 0x802E2910: jal         0x80311B84
    // 0x802E2914: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80311B84(rdram, ctx);
        goto after_1;
    // 0x802E2914: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802E2918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E291C: jal         0x803086D4
    // 0x802E2920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_2;
    // 0x802E2920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802E2924: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x802E2928: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802E292C: beql        $t8, $zero, L_802E2940
    if (ctx->r24 == 0) {
        // 0x802E2930: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802E2940;
    }
    goto skip_0;
    // 0x802E2930: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802E2934: jal         0x802C681C
    // 0x802E2938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_3;
    // 0x802E2938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_802E293C:
    // 0x802E293C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802E2940:
    // 0x802E2940: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802E2944: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802E2948: jr          $ra
    // 0x802E294C: nop

    return;
    // 0x802E294C: nop

;}
RECOMP_FUNC void D_8027A608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A680: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027A684: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027A688: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A68C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027A690: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8027A694: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8027A698: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A69C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A6A0: addiu       $a1, $t6, 0x6884
    ctx->r5 = ADD32(ctx->r14, 0X6884);
    // 0x8027A6A4: addiu       $a0, $a0, 0x6854
    ctx->r4 = ADD32(ctx->r4, 0X6854);
    // 0x8027A6A8: addiu       $a3, $t6, 0x6885
    ctx->r7 = ADD32(ctx->r14, 0X6885);
    // 0x8027A6AC: jal         0x802A1F80
    // 0x8027A6B0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_802A1F00(rdram, ctx);
        goto after_0;
    // 0x8027A6B0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x8027A6B4: beq         $v0, $zero, L_8027A6D4
    if (ctx->r2 == 0) {
        // 0x8027A6B8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8027A6D4;
    }
    // 0x8027A6B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A6BC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A6C0: jal         0x802C1044
    // 0x8027A6C4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    static_3_802C1044(rdram, ctx);
        goto after_1;
    // 0x8027A6C4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x8027A6C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027A6CC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027A6D0: sh          $t8, 0x648($a0)
    MEM_H(0X648, ctx->r4) = ctx->r24;
L_8027A6D4:
    // 0x8027A6D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A6D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027A6DC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8027A6E0: jr          $ra
    // 0x8027A6E4: nop

    return;
    // 0x8027A6E4: nop

;}
RECOMP_FUNC void D_802D7654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D76D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D76D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D76DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802D76E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802D76E4: jal         0x8021B240
    // 0x802D76E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_0;
    // 0x802D76E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x802D76EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D76F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D76F4: jr          $ra
    // 0x802D76F8: nop

    return;
    // 0x802D76F8: nop

;}
RECOMP_FUNC void D_8029F238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F2B8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8029F2BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029F2C0: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8029F2C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8029F2C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029F2CC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x8029F2D0: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8029F2D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8029F2D8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8029F2DC: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8029F2E0: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8029F2E4: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x8029F2E8: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8029F2EC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8029F2F0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x8029F2F4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x8029F2F8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8029F2FC: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8029F300: jal         0x80234C78
    // 0x8029F304: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    static_3_80234C78(rdram, ctx);
        goto after_0;
    // 0x8029F304: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8029F308: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8029F30C: jal         0x80234D30
    // 0x8029F310: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    static_3_80234D30(rdram, ctx);
        goto after_1;
    // 0x8029F310: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_1:
    // 0x8029F314: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x8029F318: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8029F31C: jal         0x80234C78
    // 0x8029F320: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    static_3_80234C78(rdram, ctx);
        goto after_2;
    // 0x8029F320: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x8029F324: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x8029F328: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8029F32C: swc1        $f16, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f16.u32l;
    // 0x8029F330: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8029F334: swc1        $f18, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f18.u32l;
    // 0x8029F338: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8029F33C: swc1        $f4, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f4.u32l;
    // 0x8029F340: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8029F344: swc1        $f6, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f6.u32l;
    // 0x8029F348: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8029F34C: swc1        $f8, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f8.u32l;
    // 0x8029F350: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8029F354: swc1        $f10, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f10.u32l;
    // 0x8029F358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029F35C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8029F360: jr          $ra
    // 0x8029F364: nop

    return;
    // 0x8029F364: nop

;}
RECOMP_FUNC void D_8024AE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024AE20: lui         $t9, 0x8400
    ctx->r25 = S32(0X8400 << 16);
    // 0x8024AE24: ori         $t9, $t9, 0x1064
    ctx->r25 = ctx->r25 | 0X1064;
    // 0x8024AE28: jr          $t9
    // 0x8024AE2C: addi        $at, $zero, 0xFC0
    ctx->r1 = ADD32(0, 0XFC0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
    return;
    // 0x8024AE2C: addi        $at, $zero, 0xFC0
    ctx->r1 = ADD32(0, 0XFC0);
;}
RECOMP_FUNC void D_802F20B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2138: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802F213C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802F2140: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802F2144: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802F2148: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802F214C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802F2150: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802F2154: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802F2158: sw          $t6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r14;
    // 0x802F215C: sb          $zero, 0x5458($a0)
    MEM_B(0X5458, ctx->r4) = 0;
    // 0x802F2160: swc1        $f12, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f12.u32l;
    // 0x802F2164: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
    // 0x802F2168: jal         0x80224CA8
    // 0x802F216C: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802F216C: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    after_0:
    // 0x802F2170: jal         0x80224CA8
    // 0x802F2174: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802F2174: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_1:
    // 0x802F2178: jal         0x80224CA8
    // 0x802F217C: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x802F217C: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_2:
    // 0x802F2180: jal         0x8030A9AC
    // 0x802F2184: nop

    static_3_8030A9AC(rdram, ctx);
        goto after_3;
    // 0x802F2184: nop

    after_3:
    // 0x802F2188: jal         0x80224CA8
    // 0x802F218C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x802F218C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_4:
    // 0x802F2190: jal         0x80224CA8
    // 0x802F2194: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    static_3_80224CA8(rdram, ctx);
        goto after_5;
    // 0x802F2194: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_5:
    // 0x802F2198: jal         0x80224CA8
    // 0x802F219C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    static_3_80224CA8(rdram, ctx);
        goto after_6;
    // 0x802F219C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_6:
    // 0x802F21A0: jal         0x80224CA8
    // 0x802F21A4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    static_3_80224CA8(rdram, ctx);
        goto after_7;
    // 0x802F21A4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_7:
    // 0x802F21A8: jal         0x80224CA8
    // 0x802F21AC: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    static_3_80224CA8(rdram, ctx);
        goto after_8;
    // 0x802F21AC: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    after_8:
    // 0x802F21B0: jal         0x80224CA8
    // 0x802F21B4: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    static_3_80224CA8(rdram, ctx);
        goto after_9;
    // 0x802F21B4: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_9:
    // 0x802F21B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802F21BC: jal         0x80205AA0
    // 0x802F21C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_80205AA0(rdram, ctx);
        goto after_10;
    // 0x802F21C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x802F21C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802F21C8: jal         0x80205EBC
    // 0x802F21CC: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    static_3_80205EBC(rdram, ctx);
        goto after_11;
    // 0x802F21CC: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    after_11:
    // 0x802F21D0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F21D4: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F21D8: lui         $at, 0x44AF
    ctx->r1 = S32(0X44AF << 16);
    // 0x802F21DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F21E0: nop

    // 0x802F21E4: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802F21E8: nop

    // 0x802F21EC: bc1f        L_802F222C
    if (!c1cs) {
        // 0x802F21F0: nop
    
            goto L_802F222C;
    }
    // 0x802F21F0: nop

    // 0x802F21F4: jal         0x80224CA8
    // 0x802F21F8: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    static_3_80224CA8(rdram, ctx);
        goto after_12;
    // 0x802F21F8: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_12:
    // 0x802F21FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802F2200: jal         0x80205E0C
    // 0x802F2204: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    static_3_80205E0C(rdram, ctx);
        goto after_13;
    // 0x802F2204: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_13:
    // 0x802F2208: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802F220C: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x802F2210: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802F2214: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802F2218: jal         0x80205E0C
    // 0x802F221C: sw          $t7, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r15;
    static_3_80205E0C(rdram, ctx);
        goto after_14;
    // 0x802F221C: sw          $t7, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r15;
    after_14:
    // 0x802F2220: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F2224: b           L_802F2264
    // 0x802F2228: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
        goto L_802F2264;
    // 0x802F2228: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
L_802F222C:
    // 0x802F222C: jal         0x80224CA8
    // 0x802F2230: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    static_3_80224CA8(rdram, ctx);
        goto after_15;
    // 0x802F2230: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_15:
    // 0x802F2234: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802F2238: jal         0x80205E0C
    // 0x802F223C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    static_3_80205E0C(rdram, ctx);
        goto after_16;
    // 0x802F223C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_16:
    // 0x802F2240: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802F2244: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x802F2248: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802F224C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802F2250: jal         0x80205E0C
    // 0x802F2254: sw          $t8, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r24;
    static_3_80205E0C(rdram, ctx);
        goto after_17;
    // 0x802F2254: sw          $t8, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r24;
    after_17:
    // 0x802F2258: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802F225C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F2260: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
L_802F2264:
    // 0x802F2264: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2268: jal         0x802B0078
    // 0x802F226C: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    static_3_802B0078(rdram, ctx);
        goto after_18;
    // 0x802F226C: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_18:
    // 0x802F2270: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802F2274: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802F2278: addiu       $t1, $zero, 0x64
    ctx->r9 = ADD32(0, 0X64);
    // 0x802F227C: sb          $t0, 0x716C($v0)
    MEM_B(0X716C, ctx->r2) = ctx->r8;
    // 0x802F2280: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802F2284: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x802F2288: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802F228C: sb          $t1, 0x716D($v0)
    MEM_B(0X716D, ctx->r2) = ctx->r9;
    // 0x802F2290: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x802F2294: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802F2298: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802F229C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802F22A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F22A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802F22A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802F22AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802F22B0: jal         0x8030890C
    // 0x802F22B4: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    static_3_8030890C(rdram, ctx);
        goto after_19;
    // 0x802F22B4: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_19:
    // 0x802F22B8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802F22BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802F22C0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802F22C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802F22C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802F22CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802F22D0: jal         0x80309B88
    // 0x802F22D4: swc1        $f16, 0x7160($v0)
    MEM_W(0X7160, ctx->r2) = ctx->f16.u32l;
    static_3_80309B88(rdram, ctx);
        goto after_20;
    // 0x802F22D4: swc1        $f16, 0x7160($v0)
    MEM_W(0X7160, ctx->r2) = ctx->f16.u32l;
    after_20:
    // 0x802F22D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802F22DC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802F22E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802F22E4: jr          $ra
    // 0x802F22E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802F22E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_80241EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241EAC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80241EB0: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x80241EB4: or          $t9, $a0, $zero
    ctx->r25 = ctx->r4 | 0;
    // 0x80241EB8: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x80241EBC: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80241EC0: bne         $at, $zero, L_80241EE0
    if (ctx->r1 != 0) {
        // 0x80241EC4: nop
    
            goto L_80241EE0;
    }
    // 0x80241EC4: nop

L_80241EC8:
    // 0x80241EC8: or          $t9, $t8, $zero
    ctx->r25 = ctx->r24 | 0;
    // 0x80241ECC: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80241ED0: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x80241ED4: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80241ED8: beq         $at, $zero, L_80241EC8
    if (ctx->r1 == 0) {
        // 0x80241EDC: nop
    
            goto L_80241EC8;
    }
    // 0x80241EDC: nop

L_80241EE0:
    // 0x80241EE0: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x80241EE4: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80241EE8: sw          $a1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r5;
    // 0x80241EEC: jr          $ra
    // 0x80241EF0: sw          $a0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r4;
    return;
    // 0x80241EF0: sw          $a0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void D_802084FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802084FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80208500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80208504: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80208508: jal         0x80208230
    // 0x8020850C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_80208230(rdram, ctx);
        goto after_0;
    // 0x8020850C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80208510: beq         $v0, $zero, L_80208520
    if (ctx->r2 == 0) {
        // 0x80208514: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80208520;
    }
    // 0x80208514: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80208518: b           L_80208534
    // 0x8020851C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80208534;
    // 0x8020851C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80208520:
    // 0x80208520: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80208524: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80208528: jal         0x8023A5D0
    // 0x8020852C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    static_3_8023A5D0(rdram, ctx);
        goto after_1;
    // 0x8020852C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80208530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80208534:
    // 0x80208534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80208538: jr          $ra
    // 0x8020853C: nop

    return;
    // 0x8020853C: nop

;}
RECOMP_FUNC void D_80283E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283F0C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80283F10: sw          $s7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r23;
    // 0x80283F14: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x80283F18: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80283F1C: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x80283F20: subu        $v0, $a3, $a1
    ctx->r2 = SUB32(ctx->r7, ctx->r5);
    // 0x80283F24: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80283F28: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80283F2C: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x80283F30: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x80283F34: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80283F38: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x80283F3C: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x80283F40: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x80283F44: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x80283F48: bgez        $v0, L_80283F6C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80283F4C: sdc1        $f20, 0x28($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
            goto L_80283F6C;
    }
    // 0x80283F4C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x80283F50: xor         $s1, $a1, $a3
    ctx->r17 = ctx->r5 ^ ctx->r7;
    // 0x80283F54: xor         $s0, $a0, $a2
    ctx->r16 = ctx->r4 ^ ctx->r6;
    // 0x80283F58: xor         $s2, $a3, $s1
    ctx->r18 = ctx->r7 ^ ctx->r17;
    // 0x80283F5C: xor         $s7, $a2, $s0
    ctx->r23 = ctx->r6 ^ ctx->r16;
    // 0x80283F60: xor         $s1, $s1, $s2
    ctx->r17 = ctx->r17 ^ ctx->r18;
    // 0x80283F64: xor         $s0, $s0, $s7
    ctx->r16 = ctx->r16 ^ ctx->r23;
    // 0x80283F68: subu        $v0, $s2, $s1
    ctx->r2 = SUB32(ctx->r18, ctx->r17);
L_80283F6C:
    // 0x80283F6C: subu        $t6, $s7, $s0
    ctx->r14 = SUB32(ctx->r23, ctx->r16);
    // 0x80283F70: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80283F74: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80283F78: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80283F7C: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80283F80: ldc1        $f4, 0x0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X0);
    // 0x80283F84: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80283F88: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80283F8C: nop

    // 0x80283F90: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80283F94: add.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80283F98: cvt.d.s     $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f18.d = CVT_D_S(ctx->f20.fl);
    // 0x80283F9C: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80283FA0: nop

    // 0x80283FA4: bc1t        L_80284188
    if (c1cs) {
        // 0x80283FA8: nop
    
            goto L_80284188;
    }
    // 0x80283FA8: nop

    // 0x80283FAC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80283FB0: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x80283FB4: jal         0x8022AA40
    // 0x80283FB8: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    static_3_8022AA40(rdram, ctx);
        goto after_0;
    // 0x80283FB8: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x80283FBC: lwc1        $f2, 0x60($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80283FC0: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80283FC4: div.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80283FC8: jal         0x8022AE1C
    // 0x80283FCC: div.s       $f12, $f16, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    static_3_8022AE1C(rdram, ctx);
        goto after_1;
    // 0x80283FCC: div.s       $f12, $f16, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    after_1:
    // 0x80283FD0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80283FD4: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80283FD8: sub.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x80283FDC: jal         0x80300424
    // 0x80283FE0: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    static_3_80300424(rdram, ctx);
        goto after_2;
    // 0x80283FE0: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    after_2:
    // 0x80283FE4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80283FE8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80283FEC: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x80283FF0: jal         0x80300424
    // 0x80283FF4: add.s       $f12, $f20, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f8.fl;
    static_3_80300424(rdram, ctx);
        goto after_3;
    // 0x80283FF4: add.s       $f12, $f20, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f8.fl;
    after_3:
    // 0x80283FF8: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x80283FFC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80284000: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80284004: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80284008: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8028400C: mtc1        $s1, $f10
    ctx->f10.u32l = ctx->r17;
    // 0x80284010: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x80284014: add.s       $f12, $f8, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x80284018: mtc1        $s7, $f8
    ctx->f8.u32l = ctx->r23;
    // 0x8028401C: sub.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x80284020: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80284024: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80284028: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8028402C: sub.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x80284030: mfc1        $s0, $f6
    ctx->r16 = (int32_t)ctx->f6.u32l;
    // 0x80284034: sub.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x80284038: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8028403C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80284040: mfc1        $s1, $f6
    ctx->r17 = (int32_t)ctx->f6.u32l;
    // 0x80284044: mtc1        $s2, $f6
    ctx->f6.u32l = ctx->r18;
    // 0x80284048: mfc1        $s7, $f4
    ctx->r23 = (int32_t)ctx->f4.u32l;
    // 0x8028404C: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x80284050: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80284054: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80284058: mtc1        $s7, $f4
    ctx->f4.u32l = ctx->r23;
    // 0x8028405C: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x80284060: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x80284064: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80284068: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8028406C: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x80284070: mfc1        $s2, $f18
    ctx->r18 = (int32_t)ctx->f18.u32l;
    // 0x80284074: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x80284078: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8028407C: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x80284080: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x80284084: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80284088: sw          $t2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r10;
    // 0x8028408C: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x80284090: jal         0x8021F4E4
    // 0x80284094: sw          $t4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r12;
    static_3_8021F4E4(rdram, ctx);
        goto after_4;
    // 0x80284094: sw          $t4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r12;
    after_4:
    // 0x80284098: lbu         $s3, 0xA3($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0XA3);
    // 0x8028409C: lbu         $s4, 0xA7($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0XA7);
    // 0x802840A0: lbu         $s5, 0xAB($sp)
    ctx->r21 = MEM_BU(ctx->r29, 0XAB);
    // 0x802840A4: lbu         $s6, 0xAF($sp)
    ctx->r22 = MEM_BU(ctx->r29, 0XAF);
    // 0x802840A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802840AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802840B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802840B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802840B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802840BC: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x802840C0: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x802840C4: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x802840C8: jal         0x8021F35C
    // 0x802840CC: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    static_3_8021F35C(rdram, ctx);
        goto after_5;
    // 0x802840CC: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    after_5:
    // 0x802840D0: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x802840D4: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802840D8: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x802840DC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802840E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802840E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802840E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802840EC: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x802840F0: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x802840F4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802840F8: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x802840FC: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x80284100: add.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x80284104: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80284108: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8028410C: jal         0x8021F35C
    // 0x80284110: nop

    static_3_8021F35C(rdram, ctx);
        goto after_6;
    // 0x80284110: nop

    after_6:
    // 0x80284114: mtc1        $s2, $f6
    ctx->f6.u32l = ctx->r18;
    // 0x80284118: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8028411C: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x80284120: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80284124: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80284128: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028412C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80284130: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x80284134: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x80284138: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8028413C: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x80284140: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x80284144: add.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f20.fl;
    // 0x80284148: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8028414C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80284150: jal         0x8021F35C
    // 0x80284154: nop

    static_3_8021F35C(rdram, ctx);
        goto after_7;
    // 0x80284154: nop

    after_7:
    // 0x80284158: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x8028415C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80284160: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80284164: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80284168: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028416C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x80284170: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x80284174: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x80284178: jal         0x8021F35C
    // 0x8028417C: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    static_3_8021F35C(rdram, ctx);
        goto after_8;
    // 0x8028417C: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    after_8:
    // 0x80284180: jal         0x8021FCD0
    // 0x80284184: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_9;
    // 0x80284184: nop

    after_9:
L_80284188:
    // 0x80284188: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8028418C: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80284190: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x80284194: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x80284198: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x8028419C: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x802841A0: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x802841A4: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x802841A8: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x802841AC: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x802841B0: jr          $ra
    // 0x802841B4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x802841B4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void D_802E84E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8564: jr          $ra
    // 0x802E8568: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802E8568: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_8029F2E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F368: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8029F36C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029F370: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8029F374: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8029F378: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x8029F37C: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8029F380: lwc1        $f2, 0x14($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8029F384: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8029F388: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8029F38C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8029F390: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8029F394: jal         0x8022AA40
    // 0x8029F398: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_0;
    // 0x8029F398: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x8029F39C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8029F3A0: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8029F3A4: lwc1        $f14, 0x14($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8029F3A8: jal         0x8022AE1C
    // 0x8029F3AC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    static_3_8022AE1C(rdram, ctx);
        goto after_1;
    // 0x8029F3AC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_1:
    // 0x8029F3B0: lwc1        $f12, 0x18($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X18);
    // 0x8029F3B4: jal         0x8022AE1C
    // 0x8029F3B8: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    static_3_8022AE1C(rdram, ctx);
        goto after_2;
    // 0x8029F3B8: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x8029F3BC: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8029F3C0: lwc1        $f14, 0x28($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X28);
    // 0x8029F3C4: jal         0x8022AE1C
    // 0x8029F3C8: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    static_3_8022AE1C(rdram, ctx);
        goto after_3;
    // 0x8029F3C8: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_3:
    // 0x8029F3CC: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
    // 0x8029F3D0: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x8029F3D4: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x8029F3D8: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8029F3DC: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8029F3E0: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x8029F3E4: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8029F3E8: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8029F3EC: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x8029F3F0: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8029F3F4: lwc1        $f16, 0x34($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8029F3F8: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8029F3FC: lwc1        $f2, 0x30($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8029F400: sub.s       $f14, $f8, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x8029F404: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x8029F408: sub.s       $f12, $f6, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x8029F40C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8029F410: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8029F414: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x8029F418: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x8029F41C: jal         0x802D05CC
    // 0x8029F420: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    static_3_802D05CC(rdram, ctx);
        goto after_4;
    // 0x8029F420: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    after_4:
    // 0x8029F424: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x8029F428: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8029F42C: jal         0x8022ADA8
    // 0x8029F430: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    static_3_8022ADA8(rdram, ctx);
        goto after_5;
    // 0x8029F430: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x8029F434: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8029F438: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8029F43C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8029F440: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8029F444: c.eq.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
    // 0x8029F448: nop

    // 0x8029F44C: bc1fl       L_8029F470
    if (!c1cs) {
        // 0x8029F450: c.eq.s      $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
            goto L_8029F470;
    }
    goto skip_0;
    // 0x8029F450: c.eq.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
    skip_0:
    // 0x8029F454: c.le.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl <= ctx->f6.fl;
    // 0x8029F458: nop

    // 0x8029F45C: bc1fl       L_8029F470
    if (!c1cs) {
        // 0x8029F460: c.eq.s      $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
            goto L_8029F470;
    }
    goto skip_1;
    // 0x8029F460: c.eq.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
    skip_1:
    // 0x8029F464: b           L_8029F4A4
    // 0x8029F468: mov.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = ctx->f16.fl;
        goto L_8029F4A4;
    // 0x8029F468: mov.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = ctx->f16.fl;
    // 0x8029F46C: c.eq.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
L_8029F470:
    // 0x8029F470: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F474: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8029F478: bc1fl       L_8029F48C
    if (!c1cs) {
        // 0x8029F47C: div.s       $f12, $f8, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
            goto L_8029F48C;
    }
    goto skip_2;
    // 0x8029F47C: div.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    skip_2:
    // 0x8029F480: b           L_8029F4A4
    // 0x8029F484: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
        goto L_8029F4A4;
    // 0x8029F484: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029F488: div.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
L_8029F48C:
    // 0x8029F48C: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x8029F490: jal         0x8022AE1C
    // 0x8029F494: div.s       $f14, $f18, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    static_3_8022AE1C(rdram, ctx);
        goto after_6;
    // 0x8029F494: div.s       $f14, $f18, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    after_6:
    // 0x8029F498: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8029F49C: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8029F4A0: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_8029F4A4:
    // 0x8029F4A4: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    // 0x8029F4A8: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8029F4AC: bc1fl       L_8029F4D0
    if (!c1cs) {
        // 0x8029F4B0: c.eq.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
            goto L_8029F4D0;
    }
    goto skip_3;
    // 0x8029F4B0: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    skip_3:
    // 0x8029F4B4: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x8029F4B8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F4BC: bc1fl       L_8029F4D0
    if (!c1cs) {
        // 0x8029F4C0: c.eq.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
            goto L_8029F4D0;
    }
    goto skip_4;
    // 0x8029F4C0: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    skip_4:
    // 0x8029F4C4: b           L_8029F504
    // 0x8029F4C8: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
        goto L_8029F504;
    // 0x8029F4C8: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029F4CC: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
L_8029F4D0:
    // 0x8029F4D0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F4D4: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8029F4D8: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8029F4DC: bc1fl       L_8029F4F0
    if (!c1cs) {
        // 0x8029F4E0: div.s       $f12, $f4, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
            goto L_8029F4F0;
    }
    goto skip_5;
    // 0x8029F4E0: div.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    skip_5:
    // 0x8029F4E4: b           L_8029F504
    // 0x8029F4E8: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
        goto L_8029F504;
    // 0x8029F4E8: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029F4EC: div.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
L_8029F4F0:
    // 0x8029F4F0: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x8029F4F4: jal         0x8022AE1C
    // 0x8029F4F8: div.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    static_3_8022AE1C(rdram, ctx);
        goto after_7;
    // 0x8029F4F8: div.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    after_7:
    // 0x8029F4FC: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8029F500: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_8029F504:
    // 0x8029F504: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029F508: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x8029F50C: jal         0x8022970C
    // 0x8029F510: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    func_8022970C(rdram, ctx);
        goto after_8;
    // 0x8029F510: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x8029F514: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8029F518: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8029F51C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029F520: swc1        $f6, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f6.u32l;
    // 0x8029F524: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8029F528: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8029F52C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x8029F530: swc1        $f8, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f8.u32l;
    // 0x8029F534: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8029F538: jal         0x802D01D4
    // 0x8029F53C: swc1        $f10, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f10.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_9;
    // 0x8029F53C: swc1        $f10, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f10.u32l;
    after_9:
    // 0x8029F540: lwc1        $f2, 0x68($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8029F544: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029F548: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x8029F54C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8029F550: jal         0x802D01D4
    // 0x8029F554: nop

    static_3_802D01D4(rdram, ctx);
        goto after_10;
    // 0x8029F554: nop

    after_10:
    // 0x8029F558: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8029F55C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029F560: lui         $a2, 0xC270
    ctx->r6 = S32(0XC270 << 16);
    // 0x8029F564: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8029F568: jal         0x8022A0D0
    // 0x8029F56C: lui         $a3, 0x4140
    ctx->r7 = S32(0X4140 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_11;
    // 0x8029F56C: lui         $a3, 0x4140
    ctx->r7 = S32(0X4140 << 16);
    after_11:
    // 0x8029F570: lui         $a1, 0xBDB2
    ctx->r5 = S32(0XBDB2 << 16);
    // 0x8029F574: ori         $a1, $a1, 0xB8C7
    ctx->r5 = ctx->r5 | 0XB8C7;
    // 0x8029F578: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029F57C: jal         0x802D01D4
    // 0x8029F580: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_12;
    // 0x8029F580: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_12:
    // 0x8029F584: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029F588: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8029F58C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8029F590: jr          $ra
    // 0x8029F594: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8029F594: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void D_802A82E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8368: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802A836C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A8370: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802A8374: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A8378: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A837C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x802A8380: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x802A8384: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x802A8388: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A838C: jal         0x802D80BC
    // 0x802A8390: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    static_3_802D80BC(rdram, ctx);
        goto after_0;
    // 0x802A8390: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    after_0:
    // 0x802A8394: lbu         $t7, 0x28($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X28);
    // 0x802A8398: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802A839C: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x802A83A0: bnel        $t7, $zero, L_802A843C
    if (ctx->r15 != 0) {
        // 0x802A83A4: lw          $at, 0x0($t4)
        ctx->r1 = MEM_W(ctx->r12, 0X0);
            goto L_802A843C;
    }
    goto skip_0;
    // 0x802A83A4: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    skip_0:
    // 0x802A83A8: jal         0x802D8214
    // 0x802A83AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802D8214(rdram, ctx);
        goto after_1;
    // 0x802A83AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802A83B0: jal         0x802D7F50
    // 0x802A83B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802D7F50(rdram, ctx);
        goto after_2;
    // 0x802A83B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802A83B8: jal         0x802D84F4
    // 0x802A83BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802D84F4(rdram, ctx);
        goto after_3;
    // 0x802A83BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802A83C0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802A83C4: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802A83C8: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x802A83CC: addiu       $v1, $sp, 0x44
    ctx->r3 = ADD32(ctx->r29, 0X44);
    // 0x802A83D0: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802A83D4: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x802A83D8: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x802A83DC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802A83E0: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x802A83E4: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x802A83E8: sw          $at, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r1;
    // 0x802A83EC: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x802A83F0: sw          $t0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r8;
    // 0x802A83F4: lw          $at, 0x10($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X10);
    // 0x802A83F8: sw          $at, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r1;
    // 0x802A83FC: lw          $t0, 0x14($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X14);
    // 0x802A8400: sw          $t0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r8;
    // 0x802A8404: lw          $at, 0x18($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X18);
    // 0x802A8408: sw          $at, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r1;
    // 0x802A840C: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802A8410: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8414: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x802A8418: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x802A841C: lwc1        $f0, 0x0($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X0);
    // 0x802A8420: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802A8424: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A8428: jal         0x80303778
    // 0x802A842C: nop

    static_3_80303778(rdram, ctx);
        goto after_4;
    // 0x802A842C: nop

    after_4:
    // 0x802A8430: b           L_802A84A4
    // 0x802A8434: lw          $v1, 0x74($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X74);
        goto L_802A84A4;
    // 0x802A8434: lw          $v1, 0x74($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X74);
    // 0x802A8438: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
L_802A843C:
    // 0x802A843C: addiu       $v0, $sp, 0x28
    ctx->r2 = ADD32(ctx->r29, 0X28);
    // 0x802A8440: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802A8444: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802A8448: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    // 0x802A844C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x802A8450: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802A8454: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x802A8458: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802A845C: lw          $t6, 0xC($t4)
    ctx->r14 = MEM_W(ctx->r12, 0XC);
    // 0x802A8460: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x802A8464: lw          $at, 0x10($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X10);
    // 0x802A8468: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x802A846C: lw          $t6, 0x14($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X14);
    // 0x802A8470: sw          $t6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r14;
    // 0x802A8474: lw          $at, 0x18($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X18);
    // 0x802A8478: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x802A847C: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802A8480: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8484: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x802A8488: addu        $t8, $v0, $t9
    ctx->r24 = ADD32(ctx->r2, ctx->r25);
    // 0x802A848C: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
    // 0x802A8490: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802A8494: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A8498: jal         0x80303778
    // 0x802A849C: nop

    static_3_80303778(rdram, ctx);
        goto after_5;
    // 0x802A849C: nop

    after_5:
    // 0x802A84A0: lw          $v1, 0x74($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X74);
L_802A84A4:
    // 0x802A84A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802A84A8: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x802A84AC: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802A84B0: lh          $t0, 0xB0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XB0);
    // 0x802A84B4: jalr        $t9
    // 0x802A84B8: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802A84B8: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    after_6:
    // 0x802A84BC: lui         $a1, 0xC489
    ctx->r5 = S32(0XC489 << 16);
    // 0x802A84C0: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x802A84C4: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x802A84C8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802A84CC: jal         0x80318E04
    // 0x802A84D0: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    static_3_80318E04(rdram, ctx);
        goto after_7;
    // 0x802A84D0: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    after_7:
    // 0x802A84D4: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x802A84D8: jal         0x80318C9C
    // 0x802A84DC: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_8;
    // 0x802A84DC: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    after_8:
    // 0x802A84E0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A84E4: jal         0x802AEDEC
    // 0x802A84E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEDEC(rdram, ctx);
        goto after_9;
    // 0x802A84E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x802A84EC: lw          $t1, 0x78($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X78);
    // 0x802A84F0: addiu       $at, $zero, -0x2005
    ctx->r1 = ADD32(0, -0X2005);
    // 0x802A84F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A84F8: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x802A84FC: jal         0x802BCF20
    // 0x802A8500: sw          $t2, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r10;
    static_3_802BCF20(rdram, ctx);
        goto after_10;
    // 0x802A8500: sw          $t2, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r10;
    after_10:
    // 0x802A8504: jal         0x80309B18
    // 0x802A8508: nop

    static_3_80309B18(rdram, ctx);
        goto after_11;
    // 0x802A8508: nop

    after_11:
    // 0x802A850C: jal         0x803099E4
    // 0x802A8510: nop

    static_3_803099E4(rdram, ctx);
        goto after_12;
    // 0x802A8510: nop

    after_12:
    // 0x802A8514: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A8518: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A851C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x802A8520: jr          $ra
    // 0x802A8524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802A8524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802D9E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D9EDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D9EE0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802D9EE4: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x802D9EE8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802D9EEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802D9EF0: andi        $s0, $a1, 0xFF
    ctx->r16 = ctx->r5 & 0XFF;
    // 0x802D9EF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802D9EF8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802D9EFC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802D9F00: bne         $v0, $at, L_802D9FC4
    if (ctx->r2 != ctx->r1) {
        // 0x802D9F04: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_802D9FC4;
    }
    // 0x802D9F04: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802D9F08: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802D9F0C: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    // 0x802D9F10: jal         0x8030A8D0
    // 0x802D9F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8030A8D0(rdram, ctx);
        goto after_0;
    // 0x802D9F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802D9F18: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x802D9F1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D9F20: bgez        $v0, L_802D9F38
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802D9F24: cvt.s.w     $f20, $f4
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802D9F38;
    }
    // 0x802D9F24: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802D9F28: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802D9F2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D9F30: nop

    // 0x802D9F34: add.s       $f20, $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f6.fl;
L_802D9F38:
    // 0x802D9F38: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802D9F3C: jal         0x8030A8D0
    // 0x802D9F40: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    static_3_8030A8D0(rdram, ctx);
        goto after_1;
    // 0x802D9F40: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    after_1:
    // 0x802D9F44: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x802D9F48: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802D9F4C: bgez        $s0, L_802D9F60
    if (SIGNED(ctx->r16) >= 0) {
        // 0x802D9F50: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_802D9F60;
    }
    // 0x802D9F50: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802D9F54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D9F58: nop

    // 0x802D9F5C: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_802D9F60:
    // 0x802D9F60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D9F64: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D9F68: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x802D9F6C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802D9F70: sub.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f20.fl;
    // 0x802D9F74: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x802D9F78: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802D9F7C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802D9F80: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802D9F84: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802D9F88: bgez        $v0, L_802D9F9C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802D9F8C: cvt.d.s     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
            goto L_802D9F9C;
    }
    // 0x802D9F8C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802D9F90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D9F94: nop

    // 0x802D9F98: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_802D9F9C:
    // 0x802D9F9C: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x802D9FA0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802D9FA4: add.d       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = ctx->f16.d + ctx->f6.d;
    // 0x802D9FA8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802D9FAC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802D9FB0: mul.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f18.d);
    // 0x802D9FB4: nop

    // 0x802D9FB8: mul.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f10.d);
    // 0x802D9FBC: b           L_802DA14C
    // 0x802D9FC0: cvt.s.d     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f2.fl = CVT_S_D(ctx->f16.d);
        goto L_802DA14C;
    // 0x802D9FC0: cvt.s.d     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f2.fl = CVT_S_D(ctx->f16.d);
L_802D9FC4:
    // 0x802D9FC4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802D9FC8: bne         $v0, $at, L_802DA098
    if (ctx->r2 != ctx->r1) {
        // 0x802D9FCC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DA098;
    }
    // 0x802D9FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D9FD0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802D9FD4: jal         0x8030A8D0
    // 0x802D9FD8: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    static_3_8030A8D0(rdram, ctx);
        goto after_2;
    // 0x802D9FD8: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    after_2:
    // 0x802D9FDC: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x802D9FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D9FE4: bgez        $v0, L_802D9FFC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802D9FE8: cvt.s.w     $f20, $f6
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
            goto L_802D9FFC;
    }
    // 0x802D9FE8: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802D9FEC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802D9FF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D9FF4: nop

    // 0x802D9FF8: add.s       $f20, $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f8.fl;
L_802D9FFC:
    // 0x802D9FFC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802DA000: jal         0x8030A8D0
    // 0x802DA004: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    static_3_8030A8D0(rdram, ctx);
        goto after_3;
    // 0x802DA004: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    after_3:
    // 0x802DA008: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DA00C: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DA010: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802DA014: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802DA018: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x802DA01C: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x802DA020: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DA024: ldc1        $f10, 0x0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X0);
    // 0x802DA028: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x802DA02C: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x802DA030: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802DA034: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802DA038: mul.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f10.d);
    // 0x802DA03C: bgez        $s0, L_802DA050
    if (SIGNED(ctx->r16) >= 0) {
        // 0x802DA040: cvt.s.d     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
            goto L_802DA050;
    }
    // 0x802DA040: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x802DA044: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802DA048: nop

    // 0x802DA04C: add.s       $f8, $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f18.fl;
L_802DA050:
    // 0x802DA050: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802DA054: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DA058: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x802DA05C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802DA060: sub.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x802DA064: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802DA068: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802DA06C: bgezl       $v0, L_802DA084
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802DA070: add.s       $f8, $f12, $f18
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f18.fl;
            goto L_802DA084;
    }
    goto skip_0;
    // 0x802DA070: add.s       $f8, $f12, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f18.fl;
    skip_0:
    // 0x802DA074: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DA078: nop

    // 0x802DA07C: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802DA080: add.s       $f8, $f12, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f18.fl;
L_802DA084:
    // 0x802DA084: mul.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x802DA088: nop

    // 0x802DA08C: mul.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x802DA090: b           L_802DA14C
    // 0x802DA094: add.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f0.fl;
        goto L_802DA14C;
    // 0x802DA094: add.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f0.fl;
L_802DA098:
    // 0x802DA098: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802DA09C: bne         $v0, $at, L_802DA14C
    if (ctx->r2 != ctx->r1) {
        // 0x802DA0A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DA14C;
    }
    // 0x802DA0A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DA0A4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802DA0A8: jal         0x8030A8D0
    // 0x802DA0AC: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    static_3_8030A8D0(rdram, ctx);
        goto after_4;
    // 0x802DA0AC: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    after_4:
    // 0x802DA0B0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x802DA0B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DA0B8: bgez        $v0, L_802DA0D0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802DA0BC: cvt.s.w     $f20, $f4
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802DA0D0;
    }
    // 0x802DA0BC: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802DA0C0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802DA0C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802DA0C8: nop

    // 0x802DA0CC: add.s       $f20, $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f18.fl;
L_802DA0D0:
    // 0x802DA0D0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802DA0D4: jal         0x8030A8D0
    // 0x802DA0D8: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    static_3_8030A8D0(rdram, ctx);
        goto after_5;
    // 0x802DA0D8: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    after_5:
    // 0x802DA0DC: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    // 0x802DA0E0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802DA0E4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802DA0E8: bgez        $s0, L_802DA100
    if (SIGNED(ctx->r16) >= 0) {
        // 0x802DA0EC: cvt.s.w     $f8, $f16
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
            goto L_802DA100;
    }
    // 0x802DA0EC: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802DA0F0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802DA0F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DA0F8: nop

    // 0x802DA0FC: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_802DA100:
    // 0x802DA100: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802DA104: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DA108: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x802DA10C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802DA110: sub.s       $f4, $f6, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x802DA114: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802DA118: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802DA11C: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802DA120: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802DA124: bgezl       $v0, L_802DA13C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802DA128: add.s       $f4, $f16, $f6
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
            goto L_802DA13C;
    }
    goto skip_1;
    // 0x802DA128: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    skip_1:
    // 0x802DA12C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802DA130: nop

    // 0x802DA134: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802DA138: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
L_802DA13C:
    // 0x802DA13C: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802DA140: nop

    // 0x802DA144: mul.s       $f2, $f10, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x802DA148: nop

L_802DA14C:
    // 0x802DA14C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802DA150: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802DA154: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802DA158: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802DA15C: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x802DA160: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802DA164: bc1f        L_802DA174
    if (!c1cs) {
        // 0x802DA168: nop
    
            goto L_802DA174;
    }
    // 0x802DA168: nop

    // 0x802DA16C: b           L_802DA174
    // 0x802DA170: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_802DA174;
    // 0x802DA170: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802DA174:
    // 0x802DA174: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802DA178: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802DA17C: jr          $ra
    // 0x802DA180: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x802DA180: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void D_80295EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295F48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80295F4C: addiu       $a1, $a1, 0xF
    ctx->r5 = ADD32(ctx->r5, 0XF);
    // 0x80295F50: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80295F54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80295F58: and         $t6, $a1, $at
    ctx->r14 = ctx->r5 & ctx->r1;
    // 0x80295F5C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80295F60: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80295F64: jal         0x802C6520
    // 0x80295F68: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_802C6520(rdram, ctx);
        goto after_0;
    // 0x80295F68: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80295F6C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80295F70: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80295F74: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80295F78: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x80295F7C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80295F80: addiu       $t6, $zero, 0x7373
    ctx->r14 = ADD32(0, 0X7373);
    // 0x80295F84: beql        $v0, $zero, L_8029600C
    if (ctx->r2 == 0) {
        // 0x80295F88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029600C;
    }
    goto skip_0;
    // 0x80295F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80295F8C: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
L_80295F90:
    // 0x80295F90: beql        $t8, $zero, L_80296000
    if (ctx->r24 == 0) {
        // 0x80295F94: lw          $v0, 0x8($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X8);
            goto L_80296000;
    }
    goto skip_1;
    // 0x80295F94: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    skip_1:
    // 0x80295F98: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x80295F9C: addiu       $t0, $a1, 0x10
    ctx->r8 = ADD32(ctx->r5, 0X10);
    // 0x80295FA0: sltu        $at, $t0, $t9
    ctx->r1 = ctx->r8 < ctx->r25 ? 1 : 0;
    // 0x80295FA4: beql        $at, $zero, L_80296000
    if (ctx->r1 == 0) {
        // 0x80295FA8: lw          $v0, 0x8($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X8);
            goto L_80296000;
    }
    goto skip_2;
    // 0x80295FA8: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    skip_2:
    // 0x80295FAC: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x80295FB0: addu        $v1, $v0, $a1
    ctx->r3 = ADD32(ctx->r2, ctx->r5);
    // 0x80295FB4: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80295FB8: sw          $t1, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r9;
    // 0x80295FBC: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x80295FC0: sh          $t5, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r13;
    // 0x80295FC4: sh          $t6, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r14;
    // 0x80295FC8: subu        $t3, $t2, $a1
    ctx->r11 = SUB32(ctx->r10, ctx->r5);
    // 0x80295FCC: addiu       $t4, $t3, -0x10
    ctx->r12 = ADD32(ctx->r11, -0X10);
    // 0x80295FD0: beq         $t1, $zero, L_80295FE4
    if (ctx->r9 == 0) {
        // 0x80295FD4: sw          $t4, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->r12;
            goto L_80295FE4;
    }
    // 0x80295FD4: sw          $t4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r12;
    // 0x80295FD8: addiu       $a0, $v1, 0x10
    ctx->r4 = ADD32(ctx->r3, 0X10);
    // 0x80295FDC: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x80295FE0: sw          $a0, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r4;
L_80295FE4:
    // 0x80295FE4: addiu       $t9, $v1, 0x10
    ctx->r25 = ADD32(ctx->r3, 0X10);
    // 0x80295FE8: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    // 0x80295FEC: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x80295FF0: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x80295FF4: b           L_80296008
    // 0x80295FF8: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
        goto L_80296008;
    // 0x80295FF8: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    // 0x80295FFC: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
L_80296000:
    // 0x80296000: bnel        $v0, $zero, L_80295F90
    if (ctx->r2 != 0) {
        // 0x80296004: lh          $t8, 0x2($v0)
        ctx->r24 = MEM_H(ctx->r2, 0X2);
            goto L_80295F90;
    }
    goto skip_3;
    // 0x80296004: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
    skip_3:
L_80296008:
    // 0x80296008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029600C:
    // 0x8029600C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80296010: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x80296014: jr          $ra
    // 0x80296018: nop

    return;
    // 0x80296018: nop

;}
RECOMP_FUNC void D_80245A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80245A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80245A34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80245A38: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80245A3C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80245A40: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80245A44: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80245A48: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x80245A4C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80245A50: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80245A54: jal         0x802371E0
    // 0x80245A58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802371E0(rdram, ctx);
        goto after_0;
    // 0x80245A58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80245A5C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80245A60: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80245A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80245A68: jal         0x80236B80
    // 0x80245A6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80236B80(rdram, ctx);
        goto after_1;
    // 0x80245A6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80245A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80245A74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80245A78: jr          $ra
    // 0x80245A7C: nop

    return;
    // 0x80245A7C: nop

;}
RECOMP_FUNC void D_802A1E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1EAC: jr          $ra
    // 0x802A1EB0: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    return;
    // 0x802A1EB0: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
;}
RECOMP_FUNC void D_8028271C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028279C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802827A0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802827A4: jr          $ra
    // 0x802827A8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802827A8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802D3FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D403C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D4040: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D4044: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D4048: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D404C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802D4050: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802D4054: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802D4058: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802D405C: jal         0x80302DC8
    // 0x802D4060: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_0;
    // 0x802D4060: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x802D4064: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802D4068: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D406C: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x802D4070: jal         0x80302DC8
    // 0x802D4074: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_1;
    // 0x802D4074: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802D4078: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802D407C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D4080: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802D4084: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x802D4088: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x802D408C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802D4090: jal         0x80290474
    // 0x802D4094: nop

    static_3_80290474(rdram, ctx);
        goto after_2;
    // 0x802D4094: nop

    after_2:
    // 0x802D4098: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D409C: jal         0x80302980
    // 0x802D40A0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_3;
    // 0x802D40A0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802D40A4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D40A8: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802D40AC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802D40B0: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802D40B4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802D40B8: jal         0x80302988
    // 0x802D40BC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_4;
    // 0x802D40BC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802D40C0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D40C4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802D40C8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802D40CC: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x802D40D0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802D40D4: jal         0x80302988
    // 0x802D40D8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x802D40D8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802D40DC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D40E0: jal         0x80302A7C
    // 0x802D40E4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_6;
    // 0x802D40E4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802D40E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D40EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D40F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802D40F4: jr          $ra
    // 0x802D40F8: nop

    return;
    // 0x802D40F8: nop

;}
RECOMP_FUNC void D_802EFC30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFCB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EFCB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EFCB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EFCBC: beq         $a0, $zero, L_802EFCF8
    if (ctx->r4 == 0) {
        // 0x802EFCC0: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_802EFCF8;
    }
    // 0x802EFCC0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802EFCC4: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x802EFCC8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802EFCCC: jal         0x8031CFCC
    // 0x802EFCD0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_8031CFCC(rdram, ctx);
        goto after_0;
    // 0x802EFCD0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802EFCD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EFCD8: jal         0x8031CD20
    // 0x802EFCDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031CD20(rdram, ctx);
        goto after_1;
    // 0x802EFCDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802EFCE0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EFCE4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EFCE8: beql        $t7, $zero, L_802EFCFC
    if (ctx->r15 == 0) {
        // 0x802EFCEC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EFCFC;
    }
    goto skip_0;
    // 0x802EFCEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EFCF0: jal         0x802C681C
    // 0x802EFCF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_802C681C(rdram, ctx);
        goto after_2;
    // 0x802EFCF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
L_802EFCF8:
    // 0x802EFCF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EFCFC:
    // 0x802EFCFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EFD00: jr          $ra
    // 0x802EFD04: nop

    return;
    // 0x802EFD04: nop

;}
RECOMP_FUNC void D_802A8B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8B94: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A8B98: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A8B9C: jr          $ra
    // 0x802A8BA0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802A8BA0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_8028335C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802833DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802833E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802833E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802833E8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802833EC: lh          $t6, 0x68($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X68);
    // 0x802833F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802833F4: bgez        $t6, L_80283418
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802833F8: nop
    
            goto L_80283418;
    }
    // 0x802833F8: nop

    // 0x802833FC: lh          $t7, 0x1508($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X1508);
    // 0x80283400: bgez        $t7, L_80283418
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80283404: nop
    
            goto L_80283418;
    }
    // 0x80283404: nop

    // 0x80283408: jal         0x802B39D8
    // 0x8028340C: nop

    static_3_802B39D8(rdram, ctx);
        goto after_0;
    // 0x8028340C: nop

    after_0:
    // 0x80283410: b           L_80283418
    // 0x80283414: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80283418;
    // 0x80283414: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80283418:
    // 0x80283418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028341C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80283420: jr          $ra
    // 0x80283424: nop

    return;
    // 0x80283424: nop

;}
RECOMP_FUNC void D_802E388C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E390C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E3910: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802E3914: slti        $at, $a2, 0x32
    ctx->r1 = SIGNED(ctx->r6) < 0X32 ? 1 : 0;
    // 0x802E3918: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x802E391C: beq         $at, $zero, L_802E393C
    if (ctx->r1 == 0) {
        // 0x802E3920: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802E393C;
    }
    // 0x802E3920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E3924: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x802E3928: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x802E392C: jal         0x80314060
    // 0x802E3930: swc1        $f12, 0x480($t7)
    MEM_W(0X480, ctx->r15) = ctx->f12.u32l;
    static_3_80314060(rdram, ctx);
        goto after_0;
    // 0x802E3930: swc1        $f12, 0x480($t7)
    MEM_W(0X480, ctx->r15) = ctx->f12.u32l;
    after_0:
    // 0x802E3934: b           L_802E3940
    // 0x802E3938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802E3940;
    // 0x802E3938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802E393C:
    // 0x802E393C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802E3940:
    // 0x802E3940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E3944: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E3948: jr          $ra
    // 0x802E394C: nop

    return;
    // 0x802E394C: nop

;}
RECOMP_FUNC void D_80237ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237ED0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80237ED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237ED8: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80237EDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80237EE0: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80237EE4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80237EE8: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x80237EEC: jal         0x8023F37C
    // 0x80237EF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80237EF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80237EF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237EF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80237EFC: jr          $ra
    // 0x80237F00: nop

    return;
    // 0x80237F00: nop

;}
RECOMP_FUNC void D_802A1EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F70: jr          $ra
    // 0x802A1F74: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    return;
    // 0x802A1F74: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
;}
RECOMP_FUNC void D_80230C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230C28: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80230C2C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80230C30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230C34: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80230C38: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80230C3C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80230C40: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80230C44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230C48: bne         $t6, $zero, L_80230C64
    if (ctx->r14 != 0) {
        // 0x80230C4C: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_80230C64;
    }
    // 0x80230C4C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80230C50: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230C54: jal         0x80231A24
    // 0x80230C58: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80230C58: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80230C5C: b           L_80230D0C
    // 0x80230C60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230D0C;
    // 0x80230C60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230C64:
    // 0x80230C64: andi        $t7, $s0, 0x7
    ctx->r15 = ctx->r16 & 0X7;
    // 0x80230C68: beq         $t7, $zero, L_80230C84
    if (ctx->r15 == 0) {
        // 0x80230C6C: andi        $t8, $s1, 0x7
        ctx->r24 = ctx->r17 & 0X7;
            goto L_80230C84;
    }
    // 0x80230C6C: andi        $t8, $s1, 0x7
    ctx->r24 = ctx->r17 & 0X7;
    // 0x80230C70: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230C74: jal         0x80231A24
    // 0x80230C78: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80230C78: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x80230C7C: b           L_80230D0C
    // 0x80230C80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230D0C;
    // 0x80230C80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230C84:
    // 0x80230C84: beq         $t8, $zero, L_80230CA0
    if (ctx->r24 == 0) {
        // 0x80230C88: addu        $t9, $s0, $s1
        ctx->r25 = ADD32(ctx->r16, ctx->r17);
            goto L_80230CA0;
    }
    // 0x80230C88: addu        $t9, $s0, $s1
    ctx->r25 = ADD32(ctx->r16, ctx->r17);
    // 0x80230C8C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230C90: jal         0x80231A24
    // 0x80230C94: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x80230C94: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x80230C98: b           L_80230D0C
    // 0x80230C9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230D0C;
    // 0x80230C9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230CA0:
    // 0x80230CA0: slti        $at, $t9, 0x209
    ctx->r1 = SIGNED(ctx->r25) < 0X209 ? 1 : 0;
    // 0x80230CA4: bne         $at, $zero, L_80230CCC
    if (ctx->r1 != 0) {
        // 0x80230CA8: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80230CCC;
    }
    // 0x80230CA8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230CAC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230CB0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80230CB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80230CB8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80230CBC: jal         0x80231A24
    // 0x80230CC0: addiu       $a3, $zero, 0x208
    ctx->r7 = ADD32(0, 0X208);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x80230CC0: addiu       $a3, $zero, 0x208
    ctx->r7 = ADD32(0, 0X208);
    after_3:
    // 0x80230CC4: b           L_80230D0C
    // 0x80230CC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230D0C;
    // 0x80230CC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230CCC:
    // 0x80230CCC: bgez        $s0, L_80230CDC
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80230CD0: sra         $t0, $s0, 3
        ctx->r8 = S32(SIGNED(ctx->r16) >> 3);
            goto L_80230CDC;
    }
    // 0x80230CD0: sra         $t0, $s0, 3
    ctx->r8 = S32(SIGNED(ctx->r16) >> 3);
    // 0x80230CD4: addiu       $at, $s0, 0x7
    ctx->r1 = ADD32(ctx->r16, 0X7);
    // 0x80230CD8: sra         $t0, $at, 3
    ctx->r8 = S32(SIGNED(ctx->r1) >> 3);
L_80230CDC:
    // 0x80230CDC: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    // 0x80230CE0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80230CE4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80230CE8: jal         0x8023E1F0
    // 0x80230CEC: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_8023E1F0(rdram, ctx);
        goto after_4;
    // 0x80230CEC: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_4:
    // 0x80230CF0: beq         $v0, $zero, L_80230D08
    if (ctx->r2 == 0) {
        // 0x80230CF4: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80230D08;
    }
    // 0x80230CF4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230CF8: jal         0x80231A24
    // 0x80230CFC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_5;
    // 0x80230CFC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_5:
    // 0x80230D00: b           L_80230D0C
    // 0x80230D04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230D0C;
    // 0x80230D04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230D08:
    // 0x80230D08: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_80230D0C:
    // 0x80230D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230D10: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80230D14: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80230D18: jr          $ra
    // 0x80230D1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80230D1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_8029EB70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029EBF0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8029EBF4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8029EBF8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8029EBFC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8029EC00: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x8029EC04: c.eq.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl == ctx->f20.fl;
    // 0x8029EC08: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8029EC0C: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x8029EC10: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x8029EC14: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8029EC18: swc1        $f14, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f14.u32l;
    // 0x8029EC1C: bc1f        L_8029EC34
    if (!c1cs) {
        // 0x8029EC20: sw          $a2, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r6;
            goto L_8029EC34;
    }
    // 0x8029EC20: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8029EC24: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029EC28: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8029EC2C: b           L_8029EC58
    // 0x8029EC30: mov.s       $f26, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    ctx->f26.fl = ctx->f20.fl;
        goto L_8029EC58;
    // 0x8029EC30: mov.s       $f26, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    ctx->f26.fl = ctx->f20.fl;
L_8029EC34:
    // 0x8029EC34: jal         0x80300424
    // 0x8029EC38: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    static_3_80300424(rdram, ctx);
        goto after_0;
    // 0x8029EC38: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8029EC3C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029EC40: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029EC44: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8029EC48: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x8029EC4C: jal         0x80300424
    // 0x8029EC50: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    static_3_80300424(rdram, ctx);
        goto after_1;
    // 0x8029EC50: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x8029EC54: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
L_8029EC58:
    // 0x8029EC58: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8029EC5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029EC60: c.eq.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl == ctx->f20.fl;
    // 0x8029EC64: nop

    // 0x8029EC68: bc1f        L_8029EC7C
    if (!c1cs) {
        // 0x8029EC6C: nop
    
            goto L_8029EC7C;
    }
    // 0x8029EC6C: nop

    // 0x8029EC70: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8029EC74: b           L_8029ECA0
    // 0x8029EC78: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
        goto L_8029ECA0;
    // 0x8029EC78: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
L_8029EC7C:
    // 0x8029EC7C: jal         0x80300424
    // 0x8029EC80: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    static_3_80300424(rdram, ctx);
        goto after_2;
    // 0x8029EC80: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    after_2:
    // 0x8029EC84: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029EC88: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029EC8C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8029EC90: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8029EC94: jal         0x80300424
    // 0x8029EC98: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    static_3_80300424(rdram, ctx);
        goto after_3;
    // 0x8029EC98: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_3:
    // 0x8029EC9C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_8029ECA0:
    // 0x8029ECA0: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8029ECA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029ECA8: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8029ECAC: c.eq.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl == ctx->f20.fl;
    // 0x8029ECB0: nop

    // 0x8029ECB4: bc1f        L_8029ECD0
    if (!c1cs) {
        // 0x8029ECB8: nop
    
            goto L_8029ECD0;
    }
    // 0x8029ECB8: nop

    // 0x8029ECBC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8029ECC0: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x8029ECC4: mov.s       $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    ctx->f16.fl = ctx->f20.fl;
    // 0x8029ECC8: b           L_8029ED0C
    // 0x8029ECCC: mov.s       $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.fl = ctx->f22.fl;
        goto L_8029ED0C;
    // 0x8029ECCC: mov.s       $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.fl = ctx->f22.fl;
L_8029ECD0:
    // 0x8029ECD0: jal         0x80300424
    // 0x8029ECD4: swc1        $f14, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f14.u32l;
    static_3_80300424(rdram, ctx);
        goto after_4;
    // 0x8029ECD4: swc1        $f14, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f14.u32l;
    after_4:
    // 0x8029ECD8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029ECDC: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029ECE0: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8029ECE4: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x8029ECE8: jal         0x80300424
    // 0x8029ECEC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    static_3_80300424(rdram, ctx);
        goto after_5;
    // 0x8029ECEC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_5:
    // 0x8029ECF0: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8029ECF4: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8029ECF8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8029ECFC: mul.s       $f16, $f2, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8029ED00: nop

    // 0x8029ED04: mul.s       $f18, $f0, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8029ED08: nop

L_8029ED0C:
    // 0x8029ED0C: mul.s       $f4, $f12, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f24.fl);
    // 0x8029ED10: neg.s       $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = -ctx->f14.fl;
    // 0x8029ED14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029ED18: mul.s       $f6, $f16, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f26.fl);
    // 0x8029ED1C: swc1        $f20, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f20.u32l;
    // 0x8029ED20: swc1        $f20, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f20.u32l;
    // 0x8029ED24: swc1        $f22, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f22.u32l;
    // 0x8029ED28: swc1        $f20, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f20.u32l;
    // 0x8029ED2C: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x8029ED30: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x8029ED34: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8029ED38: mul.s       $f4, $f10, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x8029ED3C: swc1        $f20, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f20.u32l;
    // 0x8029ED40: mul.s       $f6, $f2, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x8029ED44: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x8029ED48: mul.s       $f8, $f18, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x8029ED4C: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x8029ED50: mul.s       $f4, $f12, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f26.fl);
    // 0x8029ED54: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8029ED58: mul.s       $f6, $f16, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x8029ED5C: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x8029ED60: mul.s       $f10, $f14, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f24.fl);
    // 0x8029ED64: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8029ED68: mul.s       $f4, $f2, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f26.fl);
    // 0x8029ED6C: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x8029ED70: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    // 0x8029ED74: mul.s       $f6, $f18, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x8029ED78: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x8029ED7C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8029ED80: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8029ED84: nop

    // 0x8029ED88: mul.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x8029ED8C: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    // 0x8029ED90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8029ED94: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x8029ED98: swc1        $f8, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f8.u32l;
    // 0x8029ED9C: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x8029EDA0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8029EDA4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8029EDA8: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x8029EDAC: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x8029EDB0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x8029EDB4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8029EDB8: jr          $ra
    // 0x8029EDBC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8029EDBC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void D_802EDFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EE020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EE024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EE028: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802EE02C: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802EE030: addiu       $a3, $a3, -0x5B40
    ctx->r7 = ADD32(ctx->r7, -0X5B40);
    // 0x802EE034: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802EE038: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802EE03C: jal         0x802C6930
    // 0x802EE040: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_802C6930(rdram, ctx);
        goto after_0;
    // 0x802EE040: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x802EE044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EE048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EE04C: jr          $ra
    // 0x802EE050: nop

    return;
    // 0x802EE050: nop

;}
RECOMP_FUNC void D_80205750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80205754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205758: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020575C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80205760: jal         0x80237F60
    // 0x80205764: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_80237F60(rdram, ctx);
        goto after_0;
    // 0x80205764: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x80205768: beq         $v0, $zero, L_8020579C
    if (ctx->r2 == 0) {
        // 0x8020576C: lwc1        $f4, 0x18($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
            goto L_8020579C;
    }
    // 0x8020576C: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80205770: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80205774: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80205778: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020577C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80205780: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80205784: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80205788: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8020578C: nop

    // 0x80205790: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x80205794: jal         0x80238B10
    // 0x80205798: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    static_3_80238B10(rdram, ctx);
        goto after_1;
    // 0x80205798: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    after_1:
L_8020579C:
    // 0x8020579C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802057A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802057A4: jr          $ra
    // 0x802057A8: nop

    return;
    // 0x802057A8: nop

;}
RECOMP_FUNC void D_8027A538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A5B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027A5B4: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027A5B8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A5BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027A5C0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8027A5C4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8027A5C8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A5CC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A5D0: addiu       $a1, $t6, 0x68A8
    ctx->r5 = ADD32(ctx->r14, 0X68A8);
    // 0x8027A5D4: addiu       $a0, $a0, 0x68A4
    ctx->r4 = ADD32(ctx->r4, 0X68A4);
    // 0x8027A5D8: addiu       $a3, $t6, 0x68A9
    ctx->r7 = ADD32(ctx->r14, 0X68A9);
    // 0x8027A5DC: jal         0x802A20B0
    // 0x8027A5E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802A20B0(rdram, ctx);
        goto after_0;
    // 0x8027A5E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8027A5E4: beq         $v0, $zero, L_8027A604
    if (ctx->r2 == 0) {
        // 0x8027A5E8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8027A604;
    }
    // 0x8027A5E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A5EC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A5F0: jal         0x802B369C
    // 0x8027A5F4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    static_3_802B369C(rdram, ctx);
        goto after_1;
    // 0x8027A5F4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x8027A5F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027A5FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027A600: sh          $t8, 0x1590($a0)
    MEM_H(0X1590, ctx->r4) = ctx->r24;
L_8027A604:
    // 0x8027A604: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A608: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027A60C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8027A610: jr          $ra
    // 0x8027A614: nop

    return;
    // 0x8027A614: nop

;}
RECOMP_FUNC void D_80247244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247244: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80247248: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024724C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80247250: jal         0x80241760
    // 0x80247254: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x80247254: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80247258: jal         0x80238B80
    // 0x8024725C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    static_3_80238B80(rdram, ctx);
        goto after_1;
    // 0x8024725C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80247260: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80247264: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80247268: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8024726C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80247270: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80247274: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80247278: or          $t9, $t6, $zero
    ctx->r25 = ctx->r14 | 0;
    // 0x8024727C: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x80247280: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x80247284: sltu        $at, $t3, $t1
    ctx->r1 = ctx->r11 < ctx->r9 ? 1 : 0;
    // 0x80247288: addu        $t2, $at, $t8
    ctx->r10 = ADD32(ctx->r1, ctx->r24);
    // 0x8024728C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80247290: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80247294: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80247298: jal         0x8024A740
    // 0x8024729C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    static_3_8024A740(rdram, ctx);
        goto after_2;
    // 0x8024729C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_2:
    // 0x802472A0: jal         0x80241780
    // 0x802472A4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    static_3_80241780(rdram, ctx);
        goto after_3;
    // 0x802472A4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x802472A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802472AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802472B0: jr          $ra
    // 0x802472B4: nop

    return;
    // 0x802472B4: nop

;}
RECOMP_FUNC void D_80233360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233360: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80233364: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x80233368: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023336C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80233370: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x80233374: beq         $t6, $zero, L_802336E4
    if (ctx->r14 == 0) {
        // 0x80233378: sdc1        $f20, 0x10($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
            goto L_802336E4;
    }
    // 0x80233378: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8023337C: jal         0x80222E50
    // 0x80233380: nop

    static_3_80222E50(rdram, ctx);
        goto after_0;
    // 0x80233380: nop

    after_0:
    // 0x80233384: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80233388: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8023338C: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80233390: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x80233394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80233398: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023339C: addu        $a0, $v1, $t7
    ctx->r4 = ADD32(ctx->r3, ctx->r15);
    // 0x802333A0: blez        $a0, L_802336E4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x802333A4: lui         $t3, 0x0
        ctx->r11 = S32(0X0 << 16);
            goto L_802336E4;
    }
    // 0x802333A4: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802333A8: lwc1        $f22, 0x0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802333AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802333B0: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802333B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802333B8: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802333BC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802333C0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802333C4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802333C8: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x802333CC: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x802333D0: addiu       $t1, $zero, 0x1C
    ctx->r9 = ADD32(0, 0X1C);
    // 0x802333D4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802333D8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x802333DC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x802333E0: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
L_802333E4:
    // 0x802333E4: beq         $at, $zero, L_80233404
    if (ctx->r1 == 0) {
        // 0x802333E8: sll         $t5, $a1, 2
        ctx->r13 = S32(ctx->r5 << 2);
            goto L_80233404;
    }
    // 0x802333E8: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x802333EC: multu       $a1, $t1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802333F0: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x802333F4: mflo        $t8
    ctx->r24 = lo;
    // 0x802333F8: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x802333FC: b           L_80233420
    // 0x80233400: lbu         $t4, 0x1A($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1A);
        goto L_80233420;
    // 0x80233400: lbu         $t4, 0x1A($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1A);
L_80233404:
    // 0x80233404: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80233408: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8023340C: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x80233410: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80233414: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80233418: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x8023341C: lbu         $t4, 0x1A($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1A);
L_80233420:
    // 0x80233420: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80233424: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80233428: beql        $t4, $zero, L_802336DC
    if (ctx->r12 == 0) {
        // 0x8023342C: slt         $at, $a1, $a0
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_802336DC;
    }
    goto skip_0;
    // 0x8023342C: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    skip_0:
    // 0x80233430: lbu         $v1, 0x18($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X18);
    // 0x80233434: beq         $a2, $v1, L_80233454
    if (ctx->r6 == ctx->r3) {
        // 0x80233438: nop
    
            goto L_80233454;
    }
    // 0x80233438: nop

    // 0x8023343C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80233440: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80233444: lbu         $v1, 0x18($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X18);
    // 0x80233448: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8023344C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80233450: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
L_80233454:
    // 0x80233454: bne         $v1, $zero, L_802334C0
    if (ctx->r3 != 0) {
        // 0x80233458: nop
    
            goto L_802334C0;
    }
    // 0x80233458: nop

    // 0x8023345C: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80233460: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x80233464: nop

    // 0x80233468: bc1fl       L_80233494
    if (!c1cs) {
        // 0x8023346C: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_80233494;
    }
    goto skip_1;
    // 0x8023346C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_1:
    // 0x80233470: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80233474: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x80233478: nop

    // 0x8023347C: bc1fl       L_80233494
    if (!c1cs) {
        // 0x80233480: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_80233494;
    }
    goto skip_2;
    // 0x80233480: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_2:
    // 0x80233484: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80233488: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8023348C: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x80233490: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
L_80233494:
    // 0x80233494: nop

    // 0x80233498: bc1fl       L_80233580
    if (!c1cs) {
        // 0x8023349C: lbu         $v1, 0x19($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X19);
            goto L_80233580;
    }
    goto skip_3;
    // 0x8023349C: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    skip_3:
    // 0x802334A0: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802334A4: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x802334A8: nop

    // 0x802334AC: bc1fl       L_80233580
    if (!c1cs) {
        // 0x802334B0: lbu         $v1, 0x19($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X19);
            goto L_80233580;
    }
    goto skip_4;
    // 0x802334B0: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    skip_4:
    // 0x802334B4: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x802334B8: b           L_8023357C
    // 0x802334BC: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
        goto L_8023357C;
    // 0x802334BC: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
L_802334C0:
    // 0x802334C0: bne         $a3, $v1, L_80233514
    if (ctx->r7 != ctx->r3) {
        // 0x802334C4: nop
    
            goto L_80233514;
    }
    // 0x802334C4: nop

    // 0x802334C8: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802334CC: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x802334D0: nop

    // 0x802334D4: bc1fl       L_802334F4
    if (!c1cs) {
        // 0x802334D8: c.le.s      $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
            goto L_802334F4;
    }
    goto skip_5;
    // 0x802334D8: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    skip_5:
    // 0x802334DC: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802334E0: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    // 0x802334E4: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x802334E8: b           L_8023357C
    // 0x802334EC: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
        goto L_8023357C;
    // 0x802334EC: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x802334F0: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
L_802334F4:
    // 0x802334F4: nop

    // 0x802334F8: bc1fl       L_80233580
    if (!c1cs) {
        // 0x802334FC: lbu         $v1, 0x19($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X19);
            goto L_80233580;
    }
    goto skip_6;
    // 0x802334FC: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    skip_6:
    // 0x80233500: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80233504: swc1        $f22, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f22.u32l;
    // 0x80233508: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x8023350C: b           L_8023357C
    // 0x80233510: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
        goto L_8023357C;
    // 0x80233510: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
L_80233514:
    // 0x80233514: bnel        $t0, $v1, L_80233580
    if (ctx->r8 != ctx->r3) {
        // 0x80233518: lbu         $v1, 0x19($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X19);
            goto L_80233580;
    }
    goto skip_7;
    // 0x80233518: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    skip_7:
    // 0x8023351C: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80233520: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x80233524: nop

    // 0x80233528: bc1fl       L_80233554
    if (!c1cs) {
        // 0x8023352C: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_80233554;
    }
    goto skip_8;
    // 0x8023352C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_8:
    // 0x80233530: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80233534: c.le.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl <= ctx->f8.fl;
    // 0x80233538: nop

    // 0x8023353C: bc1fl       L_80233554
    if (!c1cs) {
        // 0x80233540: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_80233554;
    }
    goto skip_9;
    // 0x80233540: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_9:
    // 0x80233544: swc1        $f14, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f14.u32l;
    // 0x80233548: sb          $zero, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = 0;
    // 0x8023354C: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80233550: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
L_80233554:
    // 0x80233554: nop

    // 0x80233558: bc1fl       L_80233580
    if (!c1cs) {
        // 0x8023355C: lbu         $v1, 0x19($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X19);
            goto L_80233580;
    }
    goto skip_10;
    // 0x8023355C: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    skip_10:
    // 0x80233560: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80233564: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x80233568: nop

    // 0x8023356C: bc1fl       L_80233580
    if (!c1cs) {
        // 0x80233570: lbu         $v1, 0x19($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X19);
            goto L_80233580;
    }
    goto skip_11;
    // 0x80233570: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    skip_11:
    // 0x80233574: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x80233578: sb          $zero, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = 0;
L_8023357C:
    // 0x8023357C: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
L_80233580:
    // 0x80233580: beq         $a2, $v1, L_802335A0
    if (ctx->r6 == ctx->r3) {
        // 0x80233584: nop
    
            goto L_802335A0;
    }
    // 0x80233584: nop

    // 0x80233588: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8023358C: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80233590: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    // 0x80233594: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80233598: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8023359C: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
L_802335A0:
    // 0x802335A0: bne         $v1, $zero, L_8023360C
    if (ctx->r3 != 0) {
        // 0x802335A4: nop
    
            goto L_8023360C;
    }
    // 0x802335A4: nop

    // 0x802335A8: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802335AC: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x802335B0: nop

    // 0x802335B4: bc1fl       L_802335E0
    if (!c1cs) {
        // 0x802335B8: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_802335E0;
    }
    goto skip_12;
    // 0x802335B8: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_12:
    // 0x802335BC: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x802335C0: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x802335C4: nop

    // 0x802335C8: bc1fl       L_802335E0
    if (!c1cs) {
        // 0x802335CC: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_802335E0;
    }
    goto skip_13;
    // 0x802335CC: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_13:
    // 0x802335D0: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x802335D4: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802335D8: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x802335DC: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
L_802335E0:
    // 0x802335E0: nop

    // 0x802335E4: bc1f        L_802336C8
    if (!c1cs) {
        // 0x802335E8: nop
    
            goto L_802336C8;
    }
    // 0x802335E8: nop

    // 0x802335EC: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x802335F0: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x802335F4: nop

    // 0x802335F8: bc1f        L_802336C8
    if (!c1cs) {
        // 0x802335FC: nop
    
            goto L_802336C8;
    }
    // 0x802335FC: nop

    // 0x80233600: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x80233604: b           L_802336C8
    // 0x80233608: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
        goto L_802336C8;
    // 0x80233608: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
L_8023360C:
    // 0x8023360C: bne         $a3, $v1, L_80233660
    if (ctx->r7 != ctx->r3) {
        // 0x80233610: nop
    
            goto L_80233660;
    }
    // 0x80233610: nop

    // 0x80233614: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80233618: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x8023361C: nop

    // 0x80233620: bc1fl       L_80233640
    if (!c1cs) {
        // 0x80233624: c.le.s      $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
            goto L_80233640;
    }
    goto skip_14;
    // 0x80233624: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    skip_14:
    // 0x80233628: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8023362C: swc1        $f20, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f20.u32l;
    // 0x80233630: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80233634: b           L_802336C8
    // 0x80233638: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
        goto L_802336C8;
    // 0x80233638: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x8023363C: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
L_80233640:
    // 0x80233640: nop

    // 0x80233644: bc1f        L_802336C8
    if (!c1cs) {
        // 0x80233648: nop
    
            goto L_802336C8;
    }
    // 0x80233648: nop

    // 0x8023364C: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80233650: swc1        $f22, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f22.u32l;
    // 0x80233654: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80233658: b           L_802336C8
    // 0x8023365C: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
        goto L_802336C8;
    // 0x8023365C: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
L_80233660:
    // 0x80233660: bne         $t0, $v1, L_802336C8
    if (ctx->r8 != ctx->r3) {
        // 0x80233664: nop
    
            goto L_802336C8;
    }
    // 0x80233664: nop

    // 0x80233668: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8023366C: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x80233670: nop

    // 0x80233674: bc1fl       L_802336A0
    if (!c1cs) {
        // 0x80233678: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_802336A0;
    }
    goto skip_15;
    // 0x80233678: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_15:
    // 0x8023367C: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80233680: c.le.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl <= ctx->f8.fl;
    // 0x80233684: nop

    // 0x80233688: bc1fl       L_802336A0
    if (!c1cs) {
        // 0x8023368C: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_802336A0;
    }
    goto skip_16;
    // 0x8023368C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_16:
    // 0x80233690: swc1        $f14, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f14.u32l;
    // 0x80233694: sb          $zero, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = 0;
    // 0x80233698: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8023369C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
L_802336A0:
    // 0x802336A0: nop

    // 0x802336A4: bc1f        L_802336C8
    if (!c1cs) {
        // 0x802336A8: nop
    
            goto L_802336C8;
    }
    // 0x802336A8: nop

    // 0x802336AC: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x802336B0: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x802336B4: nop

    // 0x802336B8: bc1f        L_802336C8
    if (!c1cs) {
        // 0x802336BC: nop
    
            goto L_802336C8;
    }
    // 0x802336BC: nop

    // 0x802336C0: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x802336C4: sb          $zero, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = 0;
L_802336C8:
    // 0x802336C8: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802336CC: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x802336D0: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x802336D4: addu        $a0, $v1, $t5
    ctx->r4 = ADD32(ctx->r3, ctx->r13);
    // 0x802336D8: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
L_802336DC:
    // 0x802336DC: bnel        $at, $zero, L_802333E4
    if (ctx->r1 != 0) {
        // 0x802336E0: slt         $at, $a1, $v1
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_802333E4;
    }
    goto skip_17;
    // 0x802336E0: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    skip_17:
L_802336E4:
    // 0x802336E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802336E8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x802336EC: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x802336F0: jr          $ra
    // 0x802336F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802336F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802CF92C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF9AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802CF9B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802CF9B4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802CF9B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802CF9BC: addiu       $a0, $zero, 0x1F3
    ctx->r4 = ADD32(0, 0X1F3);
    // 0x802CF9C0: jal         0x80305E90
    // 0x802CF9C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_0;
    // 0x802CF9C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802CF9C8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x802CF9CC: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802CF9D0: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x802CF9D4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CF9D8: addiu       $a1, $a1, 0x370
    ctx->r5 = ADD32(ctx->r5, 0X370);
    // 0x802CF9DC: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x802CF9E0: addiu       $a2, $zero, 0x35
    ctx->r6 = ADD32(0, 0X35);
    // 0x802CF9E4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802CF9E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CF9EC: jal         0x80302238
    // 0x802CF9F0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_1;
    // 0x802CF9F0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802CF9F4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CF9F8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CF9FC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802CFA00: jal         0x8030262C
    // 0x802CFA04: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030262C(rdram, ctx);
        goto after_2;
    // 0x802CFA04: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802CFA08: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFA0C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x802CFA10: ori         $a2, $a2, 0x4189
    ctx->r6 = ctx->r6 | 0X4189;
    // 0x802CFA14: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFA18: jal         0x80302664
    // 0x802CFA1C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_3;
    // 0x802CFA1C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802CFA20: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFA24: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFA28: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x802CFA2C: jal         0x80302724
    // 0x802CFA30: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302724(rdram, ctx);
        goto after_4;
    // 0x802CFA30: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802CFA34: addiu       $a0, $zero, 0x1F3
    ctx->r4 = ADD32(0, 0X1F3);
    // 0x802CFA38: jal         0x80305E90
    // 0x802CFA3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_5;
    // 0x802CFA3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x802CFA40: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x802CFA44: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFA48: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x802CFA4C: addiu       $a1, $a1, 0x378
    ctx->r5 = ADD32(ctx->r5, 0X378);
    // 0x802CFA50: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x802CFA54: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802CFA58: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    // 0x802CFA5C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802CFA60: jal         0x80302238
    // 0x802CFA64: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_6;
    // 0x802CFA64: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802CFA68: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFA6C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFA70: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802CFA74: jal         0x8030262C
    // 0x802CFA78: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030262C(rdram, ctx);
        goto after_7;
    // 0x802CFA78: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_7:
    // 0x802CFA7C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFA80: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFA84: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x802CFA88: jal         0x80302664
    // 0x802CFA8C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_8;
    // 0x802CFA8C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_8:
    // 0x802CFA90: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFA94: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFA98: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x802CFA9C: jal         0x80302724
    // 0x802CFAA0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302724(rdram, ctx);
        goto after_9;
    // 0x802CFAA0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_9:
    // 0x802CFAA4: addiu       $a0, $zero, 0x1F3
    ctx->r4 = ADD32(0, 0X1F3);
    // 0x802CFAA8: jal         0x80305E90
    // 0x802CFAAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_10;
    // 0x802CFAAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x802CFAB0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x802CFAB4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFAB8: addiu       $a2, $zero, 0x35
    ctx->r6 = ADD32(0, 0X35);
    // 0x802CFABC: addiu       $a1, $a1, 0x380
    ctx->r5 = ADD32(ctx->r5, 0X380);
    // 0x802CFAC0: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x802CFAC4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802CFAC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CFACC: jal         0x80302238
    // 0x802CFAD0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_11;
    // 0x802CFAD0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_11:
    // 0x802CFAD4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFAD8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFADC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802CFAE0: jal         0x8030262C
    // 0x802CFAE4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030262C(rdram, ctx);
        goto after_12;
    // 0x802CFAE4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_12:
    // 0x802CFAE8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFAEC: lui         $a2, 0x3E85
    ctx->r6 = S32(0X3E85 << 16);
    // 0x802CFAF0: ori         $a2, $a2, 0xA1CB
    ctx->r6 = ctx->r6 | 0XA1CB;
    // 0x802CFAF4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFAF8: jal         0x80302664
    // 0x802CFAFC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_13;
    // 0x802CFAFC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_13:
    // 0x802CFB00: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFB04: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFB08: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x802CFB0C: jal         0x80302724
    // 0x802CFB10: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302724(rdram, ctx);
        goto after_14;
    // 0x802CFB10: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_14:
    // 0x802CFB14: addiu       $a0, $zero, 0x1F3
    ctx->r4 = ADD32(0, 0X1F3);
    // 0x802CFB18: jal         0x80305E90
    // 0x802CFB1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_15;
    // 0x802CFB1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x802CFB20: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x802CFB24: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFB28: addiu       $a2, $zero, 0x35
    ctx->r6 = ADD32(0, 0X35);
    // 0x802CFB2C: addiu       $a1, $a1, 0x388
    ctx->r5 = ADD32(ctx->r5, 0X388);
    // 0x802CFB30: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x802CFB34: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802CFB38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CFB3C: jal         0x80302238
    // 0x802CFB40: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_16;
    // 0x802CFB40: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_16:
    // 0x802CFB44: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFB48: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFB4C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802CFB50: jal         0x8030262C
    // 0x802CFB54: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030262C(rdram, ctx);
        goto after_17;
    // 0x802CFB54: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_17:
    // 0x802CFB58: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFB5C: lui         $a2, 0x3F8A
    ctx->r6 = S32(0X3F8A << 16);
    // 0x802CFB60: ori         $a2, $a2, 0x5E35
    ctx->r6 = ctx->r6 | 0X5E35;
    // 0x802CFB64: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFB68: jal         0x80302664
    // 0x802CFB6C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_18;
    // 0x802CFB6C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_18:
    // 0x802CFB70: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFB74: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFB78: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x802CFB7C: jal         0x80302724
    // 0x802CFB80: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302724(rdram, ctx);
        goto after_19;
    // 0x802CFB80: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_19:
    // 0x802CFB84: addiu       $a0, $zero, 0x1F3
    ctx->r4 = ADD32(0, 0X1F3);
    // 0x802CFB88: jal         0x80305E90
    // 0x802CFB8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_20;
    // 0x802CFB8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_20:
    // 0x802CFB90: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x802CFB94: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFB98: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x802CFB9C: addiu       $a1, $a1, 0x390
    ctx->r5 = ADD32(ctx->r5, 0X390);
    // 0x802CFBA0: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x802CFBA4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802CFBA8: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x802CFBAC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802CFBB0: jal         0x80302238
    // 0x802CFBB4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_21;
    // 0x802CFBB4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_21:
    // 0x802CFBB8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFBBC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFBC0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802CFBC4: jal         0x8030262C
    // 0x802CFBC8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030262C(rdram, ctx);
        goto after_22;
    // 0x802CFBC8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_22:
    // 0x802CFBCC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFBD0: lui         $a2, 0x3E8F
    ctx->r6 = S32(0X3E8F << 16);
    // 0x802CFBD4: ori         $a2, $a2, 0xDF3B
    ctx->r6 = ctx->r6 | 0XDF3B;
    // 0x802CFBD8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFBDC: jal         0x80302664
    // 0x802CFBE0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_23;
    // 0x802CFBE0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_23:
    // 0x802CFBE4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFBE8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFBEC: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x802CFBF0: jal         0x80302724
    // 0x802CFBF4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302724(rdram, ctx);
        goto after_24;
    // 0x802CFBF4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_24:
    // 0x802CFBF8: addiu       $a0, $zero, 0x1F3
    ctx->r4 = ADD32(0, 0X1F3);
    // 0x802CFBFC: jal         0x80305E90
    // 0x802CFC00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_25;
    // 0x802CFC00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_25:
    // 0x802CFC04: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x802CFC08: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFC0C: addiu       $a2, $zero, 0x35
    ctx->r6 = ADD32(0, 0X35);
    // 0x802CFC10: addiu       $a1, $a1, 0x398
    ctx->r5 = ADD32(ctx->r5, 0X398);
    // 0x802CFC14: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x802CFC18: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802CFC1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CFC20: jal         0x80302238
    // 0x802CFC24: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_26;
    // 0x802CFC24: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_26:
    // 0x802CFC28: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFC2C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFC30: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802CFC34: jal         0x8030262C
    // 0x802CFC38: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030262C(rdram, ctx);
        goto after_27;
    // 0x802CFC38: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_27:
    // 0x802CFC3C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFC40: lui         $a2, 0x3FA1
    ctx->r6 = S32(0X3FA1 << 16);
    // 0x802CFC44: ori         $a2, $a2, 0x6873
    ctx->r6 = ctx->r6 | 0X6873;
    // 0x802CFC48: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFC4C: jal         0x80302664
    // 0x802CFC50: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_28;
    // 0x802CFC50: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_28:
    // 0x802CFC54: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CFC58: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802CFC5C: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x802CFC60: jal         0x80302724
    // 0x802CFC64: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302724(rdram, ctx);
        goto after_29;
    // 0x802CFC64: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_29:
    // 0x802CFC68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802CFC6C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802CFC70: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802CFC74: jr          $ra
    // 0x802CFC78: nop

    return;
    // 0x802CFC78: nop

;}
RECOMP_FUNC void D_802DDBB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DDC38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802DDC3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802DDC40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DDC44: bne         $a0, $zero, L_802DDC5C
    if (ctx->r4 != 0) {
        // 0x802DDC48: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802DDC5C;
    }
    // 0x802DDC48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802DDC4C: jal         0x802C67EC
    // 0x802DDC50: addiu       $a0, $zero, 0x1C4C
    ctx->r4 = ADD32(0, 0X1C4C);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802DDC50: addiu       $a0, $zero, 0x1C4C
    ctx->r4 = ADD32(0, 0X1C4C);
    after_0:
    // 0x802DDC54: beq         $v0, $zero, L_802DDC90
    if (ctx->r2 == 0) {
        // 0x802DDC58: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802DDC90;
    }
    // 0x802DDC58: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802DDC5C:
    // 0x802DDC5C: jal         0x80308668
    // 0x802DDC60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80308668(rdram, ctx);
        goto after_1;
    // 0x802DDC60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802DDC64: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DDC68: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802DDC6C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802DDC70: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802DDC74: sw          $t6, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r14;
    // 0x802DDC78: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    // 0x802DDC7C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DDC80: jal         0x802C6930
    // 0x802DDC84: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    static_3_802C6930(rdram, ctx);
        goto after_2;
    // 0x802DDC84: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    after_2:
    // 0x802DDC88: jal         0x8031DCDC
    // 0x802DDC8C: addiu       $a0, $s0, 0x1B00
    ctx->r4 = ADD32(ctx->r16, 0X1B00);
    static_3_8031DCDC(rdram, ctx);
        goto after_3;
    // 0x802DDC8C: addiu       $a0, $s0, 0x1B00
    ctx->r4 = ADD32(ctx->r16, 0X1B00);
    after_3:
L_802DDC90:
    // 0x802DDC90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802DDC94: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802DDC98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802DDC9C: jr          $ra
    // 0x802DDCA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802DDCA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802C69E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C6A64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802C6A68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C6A6C: bne         $a0, $zero, L_802C6A84
    if (ctx->r4 != 0) {
        // 0x802C6A70: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802C6A84;
    }
    // 0x802C6A70: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802C6A74: jal         0x802C67EC
    // 0x802C6A78: addiu       $a0, $zero, 0x1E4
    ctx->r4 = ADD32(0, 0X1E4);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802C6A78: addiu       $a0, $zero, 0x1E4
    ctx->r4 = ADD32(0, 0X1E4);
    after_0:
    // 0x802C6A7C: beq         $v0, $zero, L_802C6AA4
    if (ctx->r2 == 0) {
        // 0x802C6A80: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802C6AA4;
    }
    // 0x802C6A80: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802C6A84:
    // 0x802C6A84: addiu       $a0, $a1, 0x180
    ctx->r4 = ADD32(ctx->r5, 0X180);
    // 0x802C6A88: jal         0x80303224
    // 0x802C6A8C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_80303224(rdram, ctx);
        goto after_1;
    // 0x802C6A8C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x802C6A90: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802C6A94: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x802C6A98: sb          $zero, 0xBC($a1)
    MEM_B(0XBC, ctx->r5) = 0;
    // 0x802C6A9C: sw          $t6, 0x114($a1)
    MEM_W(0X114, ctx->r5) = ctx->r14;
    // 0x802C6AA0: sw          $zero, 0xA0($a1)
    MEM_W(0XA0, ctx->r5) = 0;
L_802C6AA4:
    // 0x802C6AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802C6AA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802C6AAC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802C6AB0: jr          $ra
    // 0x802C6AB4: nop

    return;
    // 0x802C6AB4: nop

;}
RECOMP_FUNC void D_80294C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294CB8: jr          $ra
    // 0x80294CBC: lw          $v0, 0x190($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X190);
    return;
    // 0x80294CBC: lw          $v0, 0x190($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X190);
;}
RECOMP_FUNC void D_80209028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80209028: addiu       $sp, $sp, -0x218
    ctx->r29 = ADD32(ctx->r29, -0X218);
    // 0x8020902C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80209030: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80209034: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x80209038: andi        $t8, $a2, 0xC
    ctx->r24 = ctx->r6 & 0XC;
    // 0x8020903C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80209040: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80209044: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80209048: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8020904C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80209050: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80209054: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80209058: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8020905C: sw          $a0, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->r4;
    // 0x80209060: sw          $a1, 0x21C($sp)
    MEM_W(0X21C, ctx->r29) = ctx->r5;
    // 0x80209064: sw          $a2, 0x220($sp)
    MEM_W(0X220, ctx->r29) = ctx->r6;
    // 0x80209068: sw          $a3, 0x224($sp)
    MEM_W(0X224, ctx->r29) = ctx->r7;
    // 0x8020906C: addiu       $s0, $sp, 0x224
    ctx->r16 = ADD32(ctx->r29, 0X224);
    // 0x80209070: sw          $zero, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = 0;
    // 0x80209074: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x80209078: beq         $t8, $zero, L_80209098
    if (ctx->r24 == 0) {
        // 0x8020907C: sw          $t6, 0x208($sp)
        MEM_W(0X208, ctx->r29) = ctx->r14;
            goto L_80209098;
    }
    // 0x8020907C: sw          $t6, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->r14;
    // 0x80209080: addiu       $s1, $zero, -0x4
    ctx->r17 = ADD32(0, -0X4);
    // 0x80209084: addiu       $t9, $sp, 0x227
    ctx->r25 = ADD32(ctx->r29, 0X227);
    // 0x80209088: and         $s0, $t9, $s1
    ctx->r16 = ctx->r25 & ctx->r17;
    // 0x8020908C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80209090: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80209094: sw          $t0, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->r8;
L_80209098:
    // 0x80209098: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x8020909C: addiu       $s1, $zero, -0x4
    ctx->r17 = ADD32(0, -0X4);
    // 0x802090A0: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x802090A4: addiu       $s5, $sp, 0x74
    ctx->r21 = ADD32(ctx->r29, 0X74);
    // 0x802090A8: addiu       $s3, $sp, 0xF4
    ctx->r19 = ADD32(ctx->r29, 0XF4);
    // 0x802090AC: addiu       $s2, $sp, 0x174
    ctx->r18 = ADD32(ctx->r29, 0X174);
L_802090B0:
    // 0x802090B0: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
    // 0x802090B4: and         $s0, $t1, $s1
    ctx->r16 = ctx->r9 & ctx->r17;
    // 0x802090B8: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x802090BC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802090C0: addiu       $t2, $s0, 0x3
    ctx->r10 = ADD32(ctx->r16, 0X3);
    // 0x802090C4: beq         $v1, $zero, L_80209120
    if (ctx->r3 == 0) {
        // 0x802090C8: and         $s0, $t2, $s1
        ctx->r16 = ctx->r10 & ctx->r17;
            goto L_80209120;
    }
    // 0x802090C8: and         $s0, $t2, $s1
    ctx->r16 = ctx->r10 & ctx->r17;
    // 0x802090CC: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x802090D0: addiu       $t4, $s0, 0x7
    ctx->r12 = ADD32(ctx->r16, 0X7);
    // 0x802090D4: and         $s0, $t4, $s1
    ctx->r16 = ctx->r12 & ctx->r17;
    // 0x802090D8: sll         $v0, $fp, 2
    ctx->r2 = S32(ctx->r30 << 2);
    // 0x802090DC: sw          $t3, 0x210($sp)
    MEM_W(0X210, ctx->r29) = ctx->r11;
    // 0x802090E0: lw          $s4, 0x0($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X0);
    // 0x802090E4: addu        $t5, $s2, $v0
    ctx->r13 = ADD32(ctx->r18, ctx->r2);
    // 0x802090E8: sw          $v1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r3;
    // 0x802090EC: lw          $t6, 0x210($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X210);
    // 0x802090F0: addu        $t7, $s3, $v0
    ctx->r15 = ADD32(ctx->r19, ctx->r2);
    // 0x802090F4: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x802090F8: addu        $t8, $s5, $v0
    ctx->r24 = ADD32(ctx->r21, ctx->r2);
    // 0x802090FC: slti        $at, $fp, 0x20
    ctx->r1 = SIGNED(ctx->r30) < 0X20 ? 1 : 0;
    // 0x80209100: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80209104: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80209108: bne         $at, $zero, L_802090B0
    if (ctx->r1 != 0) {
        // 0x8020910C: sw          $s4, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->r20;
            goto L_802090B0;
    }
    // 0x8020910C: sw          $s4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r20;
    // 0x80209110: jal         0x80231A24
    // 0x80209114: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80209114: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_0:
    // 0x80209118: b           L_802090B0
    // 0x8020911C: addiu       $fp, $fp, -0x1
    ctx->r30 = ADD32(ctx->r30, -0X1);
        goto L_802090B0;
    // 0x8020911C: addiu       $fp, $fp, -0x1
    ctx->r30 = ADD32(ctx->r30, -0X1);
L_80209120:
    // 0x80209120: lw          $t9, 0x220($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X220);
    // 0x80209124: lw          $t2, 0x220($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X220);
    // 0x80209128: lw          $v1, 0x208($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X208);
    // 0x8020912C: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x80209130: beq         $t0, $zero, L_80209140
    if (ctx->r8 == 0) {
        // 0x80209134: andi        $t3, $t2, 0x1
        ctx->r11 = ctx->r10 & 0X1;
            goto L_80209140;
    }
    // 0x80209134: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80209138: b           L_80209160
    // 0x8020913C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80209160;
    // 0x8020913C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80209140:
    // 0x80209140: beq         $t3, $zero, L_8020915C
    if (ctx->r11 == 0) {
        // 0x80209144: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8020915C;
    }
    // 0x80209144: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80209148: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8020914C: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x80209150: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80209154: b           L_80209160
    // 0x80209158: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
        goto L_80209160;
    // 0x80209158: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_8020915C:
    // 0x8020915C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_80209160:
    // 0x80209160: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80209164: bne         $at, $zero, L_802092D0
    if (ctx->r1 != 0) {
        // 0x80209168: sw          $v0, 0x214($sp)
        MEM_W(0X214, ctx->r29) = ctx->r2;
            goto L_802092D0;
    }
    // 0x80209168: sw          $v0, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->r2;
    // 0x8020916C: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x80209170: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80209174: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x80209178: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
L_8020917C:
    // 0x8020917C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80209180: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80209184: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80209188: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x8020918C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80209190: lw          $s7, 0x0($t0)
    ctx->r23 = MEM_W(ctx->r8, 0X0);
    // 0x80209194: beql        $s7, $zero, L_802092B4
    if (ctx->r23 == 0) {
        // 0x80209198: lw          $t3, 0x214($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X214);
            goto L_802092B4;
    }
    goto skip_0;
    // 0x80209198: lw          $t3, 0x214($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X214);
    skip_0:
    // 0x8020919C: sw          $zero, 0x210($sp)
    MEM_W(0X210, ctx->r29) = 0;
    // 0x802091A0: lhu         $t1, 0x4($s7)
    ctx->r9 = MEM_HU(ctx->r23, 0X4);
    // 0x802091A4: blezl       $t1, L_802092B4
    if (SIGNED(ctx->r9) <= 0) {
        // 0x802091A8: lw          $t3, 0x214($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X214);
            goto L_802092B4;
    }
    goto skip_1;
    // 0x802091A8: lw          $t3, 0x214($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X214);
    skip_1:
    // 0x802091AC: lw          $t3, 0x210($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X210);
L_802091B0:
    // 0x802091B0: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x802091B4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802091B8: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x802091BC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x802091C0: blez        $fp, L_80209230
    if (SIGNED(ctx->r30) <= 0) {
        // 0x802091C4: addu        $s6, $t2, $t4
        ctx->r22 = ADD32(ctx->r10, ctx->r12);
            goto L_80209230;
    }
    // 0x802091C4: addu        $s6, $t2, $t4
    ctx->r22 = ADD32(ctx->r10, ctx->r12);
    // 0x802091C8: addiu       $s5, $sp, 0x174
    ctx->r21 = ADD32(ctx->r29, 0X174);
    // 0x802091CC: addiu       $s1, $sp, 0xF4
    ctx->r17 = ADD32(ctx->r29, 0XF4);
    // 0x802091D0: addiu       $s2, $sp, 0x74
    ctx->r18 = ADD32(ctx->r29, 0X74);
L_802091D4:
    // 0x802091D4: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x802091D8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x802091DC: andi        $t5, $s0, 0x600
    ctx->r13 = ctx->r16 & 0X600;
    // 0x802091E0: beq         $t5, $zero, L_8020920C
    if (ctx->r13 == 0) {
        // 0x802091E4: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_8020920C;
    }
    // 0x802091E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802091E8: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x802091EC: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x802091F0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x802091F4: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x802091F8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802091FC: jal         0x802088E4
    // 0x80209200: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    static_3_802088E4(rdram, ctx);
        goto after_1;
    // 0x80209200: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x80209204: b           L_8020921C
    // 0x80209208: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
        goto L_8020921C;
    // 0x80209208: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
L_8020920C:
    // 0x8020920C: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x80209210: jal         0x80208B0C
    // 0x80209214: lw          $a3, 0x0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X0);
    static_3_80208B0C(rdram, ctx);
        goto after_2;
    // 0x80209214: lw          $a3, 0x0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X0);
    after_2:
    // 0x80209218: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
L_8020921C:
    // 0x8020921C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80209220: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x80209224: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80209228: bne         $s4, $fp, L_802091D4
    if (ctx->r20 != ctx->r30) {
        // 0x8020922C: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_802091D4;
    }
    // 0x8020922C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_80209230:
    // 0x80209230: bne         $s3, $fp, L_80209294
    if (ctx->r19 != ctx->r30) {
        // 0x80209234: lw          $t7, 0x21C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X21C);
            goto L_80209294;
    }
    // 0x80209234: lw          $t7, 0x21C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X21C);
    // 0x80209238: lw          $s1, 0x214($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X214);
    // 0x8020923C: lw          $t8, 0x1FC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1FC);
    // 0x80209240: lw          $t3, 0x218($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X218);
    // 0x80209244: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80209248: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x8020924C: or          $s1, $t0, $at
    ctx->r17 = ctx->r8 | ctx->r1;
    // 0x80209250: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80209254: slt         $at, $t8, $t3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80209258: bne         $at, $zero, L_8020927C
    if (ctx->r1 != 0) {
        // 0x8020925C: addu        $s0, $t7, $t9
        ctx->r16 = ADD32(ctx->r15, ctx->r25);
            goto L_8020927C;
    }
    // 0x8020925C: addu        $s0, $t7, $t9
    ctx->r16 = ADD32(ctx->r15, ctx->r25);
    // 0x80209260: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80209264: jal         0x80231A24
    // 0x80209268: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x80209268: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x8020926C: lw          $t2, 0x1FC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1FC);
    // 0x80209270: addiu       $s0, $s0, -0x4
    ctx->r16 = ADD32(ctx->r16, -0X4);
    // 0x80209274: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x80209278: sw          $t4, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->r12;
L_8020927C:
    // 0x8020927C: lw          $t5, 0x210($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X210);
    // 0x80209280: or          $t6, $s1, $t5
    ctx->r14 = ctx->r17 | ctx->r13;
    // 0x80209284: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80209288: lw          $t7, 0x1FC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1FC);
    // 0x8020928C: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80209290: sw          $t9, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->r25;
L_80209294:
    // 0x80209294: lw          $t0, 0x210($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X210);
    // 0x80209298: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8020929C: sw          $t1, 0x210($sp)
    MEM_W(0X210, ctx->r29) = ctx->r9;
    // 0x802092A0: lhu         $t8, 0x4($s7)
    ctx->r24 = MEM_HU(ctx->r23, 0X4);
    // 0x802092A4: slt         $at, $t1, $t8
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802092A8: bnel        $at, $zero, L_802091B0
    if (ctx->r1 != 0) {
        // 0x802092AC: lw          $t3, 0x210($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X210);
            goto L_802091B0;
    }
    goto skip_2;
    // 0x802092AC: lw          $t3, 0x210($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X210);
    skip_2:
    // 0x802092B0: lw          $t3, 0x214($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X214);
L_802092B4:
    // 0x802092B4: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x802092B8: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x802092BC: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x802092C0: addiu       $t5, $t4, 0x4
    ctx->r13 = ADD32(ctx->r12, 0X4);
    // 0x802092C4: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x802092C8: bne         $t6, $t2, L_8020917C
    if (ctx->r14 != ctx->r10) {
        // 0x802092CC: sw          $t2, 0x214($sp)
        MEM_W(0X214, ctx->r29) = ctx->r10;
            goto L_8020917C;
    }
    // 0x802092CC: sw          $t2, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->r10;
L_802092D0:
    // 0x802092D0: lw          $t7, 0x220($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X220);
    // 0x802092D4: lw          $t1, 0x220($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X220);
    // 0x802092D8: lw          $v1, 0x208($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X208);
    // 0x802092DC: andi        $t9, $t7, 0x8
    ctx->r25 = ctx->r15 & 0X8;
    // 0x802092E0: beq         $t9, $zero, L_802092F0
    if (ctx->r25 == 0) {
        // 0x802092E4: andi        $t8, $t1, 0x2
        ctx->r24 = ctx->r9 & 0X2;
            goto L_802092F0;
    }
    // 0x802092E4: andi        $t8, $t1, 0x2
    ctx->r24 = ctx->r9 & 0X2;
    // 0x802092E8: b           L_8020930C
    // 0x802092EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8020930C;
    // 0x802092EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_802092F0:
    // 0x802092F0: beq         $t8, $zero, L_80209308
    if (ctx->r24 == 0) {
        // 0x802092F4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80209308;
    }
    // 0x802092F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802092F8: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x802092FC: lhu         $v1, 0xC48($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XC48);
    // 0x80209300: b           L_8020930C
    // 0x80209304: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
        goto L_8020930C;
    // 0x80209304: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_80209308:
    // 0x80209308: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8020930C:
    // 0x8020930C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80209310: bne         $at, $zero, L_80209478
    if (ctx->r1 != 0) {
        // 0x80209314: sw          $v0, 0x214($sp)
        MEM_W(0X214, ctx->r29) = ctx->r2;
            goto L_80209478;
    }
    // 0x80209314: sw          $v0, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->r2;
    // 0x80209318: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x8020931C: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
    // 0x80209320: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x80209324: sw          $t4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r12;
L_80209328:
    // 0x80209328: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8020932C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80209330: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80209334: lw          $t2, 0x1C($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X1C);
    // 0x80209338: addu        $t9, $t2, $t7
    ctx->r25 = ADD32(ctx->r10, ctx->r15);
    // 0x8020933C: lw          $s7, 0x0($t9)
    ctx->r23 = MEM_W(ctx->r25, 0X0);
    // 0x80209340: beql        $s7, $zero, L_8020945C
    if (ctx->r23 == 0) {
        // 0x80209344: lw          $t0, 0x214($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X214);
            goto L_8020945C;
    }
    goto skip_3;
    // 0x80209344: lw          $t0, 0x214($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X214);
    skip_3:
    // 0x80209348: sw          $zero, 0x210($sp)
    MEM_W(0X210, ctx->r29) = 0;
    // 0x8020934C: lhu         $t0, 0x4($s7)
    ctx->r8 = MEM_HU(ctx->r23, 0X4);
    // 0x80209350: blezl       $t0, L_8020945C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80209354: lw          $t0, 0x214($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X214);
            goto L_8020945C;
    }
    goto skip_4;
    // 0x80209354: lw          $t0, 0x214($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X214);
    skip_4:
    // 0x80209358: lw          $t8, 0x210($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X210);
L_8020935C:
    // 0x8020935C: lw          $t1, 0x0($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X0);
    // 0x80209360: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80209364: sll         $t3, $t8, 4
    ctx->r11 = S32(ctx->r24 << 4);
    // 0x80209368: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8020936C: blez        $fp, L_802093DC
    if (SIGNED(ctx->r30) <= 0) {
        // 0x80209370: addu        $s6, $t1, $t3
        ctx->r22 = ADD32(ctx->r9, ctx->r11);
            goto L_802093DC;
    }
    // 0x80209370: addu        $s6, $t1, $t3
    ctx->r22 = ADD32(ctx->r9, ctx->r11);
    // 0x80209374: addiu       $s5, $sp, 0x174
    ctx->r21 = ADD32(ctx->r29, 0X174);
    // 0x80209378: addiu       $s1, $sp, 0xF4
    ctx->r17 = ADD32(ctx->r29, 0XF4);
    // 0x8020937C: addiu       $s2, $sp, 0x74
    ctx->r18 = ADD32(ctx->r29, 0X74);
L_80209380:
    // 0x80209380: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x80209384: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80209388: andi        $t4, $s0, 0x600
    ctx->r12 = ctx->r16 & 0X600;
    // 0x8020938C: beq         $t4, $zero, L_802093B8
    if (ctx->r12 == 0) {
        // 0x80209390: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_802093B8;
    }
    // 0x80209390: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80209394: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x80209398: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x8020939C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x802093A0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x802093A4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802093A8: jal         0x802086CC
    // 0x802093AC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    static_3_802086CC(rdram, ctx);
        goto after_4;
    // 0x802093AC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_4:
    // 0x802093B0: b           L_802093C8
    // 0x802093B4: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
        goto L_802093C8;
    // 0x802093B4: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
L_802093B8:
    // 0x802093B8: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x802093BC: jal         0x80208B0C
    // 0x802093C0: lw          $a3, 0x0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X0);
    static_3_80208B0C(rdram, ctx);
        goto after_5;
    // 0x802093C0: lw          $a3, 0x0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X0);
    after_5:
    // 0x802093C4: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
L_802093C8:
    // 0x802093C8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x802093CC: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x802093D0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802093D4: bne         $s4, $fp, L_80209380
    if (ctx->r20 != ctx->r30) {
        // 0x802093D8: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80209380;
    }
    // 0x802093D8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_802093DC:
    // 0x802093DC: bne         $s3, $fp, L_8020943C
    if (ctx->r19 != ctx->r30) {
        // 0x802093E0: lw          $t6, 0x21C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X21C);
            goto L_8020943C;
    }
    // 0x802093E0: lw          $t6, 0x21C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X21C);
    // 0x802093E4: lw          $t2, 0x1FC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1FC);
    // 0x802093E8: lw          $s1, 0x214($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X214);
    // 0x802093EC: lw          $t0, 0x218($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X218);
    // 0x802093F0: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x802093F4: sll         $t9, $s1, 16
    ctx->r25 = S32(ctx->r17 << 16);
    // 0x802093F8: slt         $at, $t2, $t0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x802093FC: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x80209400: bne         $at, $zero, L_80209424
    if (ctx->r1 != 0) {
        // 0x80209404: addu        $s0, $t6, $t7
        ctx->r16 = ADD32(ctx->r14, ctx->r15);
            goto L_80209424;
    }
    // 0x80209404: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x80209408: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020940C: jal         0x80231A24
    // 0x80209410: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_6;
    // 0x80209410: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_6:
    // 0x80209414: lw          $t8, 0x1FC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1FC);
    // 0x80209418: addiu       $s0, $s0, -0x4
    ctx->r16 = ADD32(ctx->r16, -0X4);
    // 0x8020941C: addiu       $t1, $t8, -0x1
    ctx->r9 = ADD32(ctx->r24, -0X1);
    // 0x80209420: sw          $t1, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->r9;
L_80209424:
    // 0x80209424: lw          $t3, 0x210($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X210);
    // 0x80209428: or          $t4, $s1, $t3
    ctx->r12 = ctx->r17 | ctx->r11;
    // 0x8020942C: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x80209430: lw          $t5, 0x1FC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1FC);
    // 0x80209434: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80209438: sw          $t6, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->r14;
L_8020943C:
    // 0x8020943C: lw          $t7, 0x210($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X210);
    // 0x80209440: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80209444: sw          $t9, 0x210($sp)
    MEM_W(0X210, ctx->r29) = ctx->r25;
    // 0x80209448: lhu         $t2, 0x4($s7)
    ctx->r10 = MEM_HU(ctx->r23, 0X4);
    // 0x8020944C: slt         $at, $t9, $t2
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80209450: bnel        $at, $zero, L_8020935C
    if (ctx->r1 != 0) {
        // 0x80209454: lw          $t8, 0x210($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X210);
            goto L_8020935C;
    }
    goto skip_5;
    // 0x80209454: lw          $t8, 0x210($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X210);
    skip_5:
    // 0x80209458: lw          $t0, 0x214($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X214);
L_8020945C:
    // 0x8020945C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80209460: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x80209464: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x80209468: addiu       $t3, $t1, 0x4
    ctx->r11 = ADD32(ctx->r9, 0X4);
    // 0x8020946C: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x80209470: bne         $t4, $t8, L_80209328
    if (ctx->r12 != ctx->r24) {
        // 0x80209474: sw          $t8, 0x214($sp)
        MEM_W(0X214, ctx->r29) = ctx->r24;
            goto L_80209328;
    }
    // 0x80209474: sw          $t8, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->r24;
L_80209478:
    // 0x80209478: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8020947C: lw          $v0, 0x1FC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1FC);
    // 0x80209480: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80209484: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80209488: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8020948C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80209490: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80209494: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80209498: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8020949C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x802094A0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x802094A4: jr          $ra
    // 0x802094A8: addiu       $sp, $sp, 0x218
    ctx->r29 = ADD32(ctx->r29, 0X218);
    return;
    // 0x802094A8: addiu       $sp, $sp, 0x218
    ctx->r29 = ADD32(ctx->r29, 0X218);
;}
RECOMP_FUNC void D_802359AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802359AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802359B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802359B4: lbu         $t6, 0x8($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X8);
    // 0x802359B8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802359BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802359C0: bne         $t6, $at, L_80235B6C
    if (ctx->r14 != ctx->r1) {
        // 0x802359C4: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80235B6C;
    }
    // 0x802359C4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802359C8: lbu         $t7, 0x9($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X9);
    // 0x802359CC: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x802359D0: addiu       $v0, $a1, 0x4
    ctx->r2 = ADD32(ctx->r5, 0X4);
    // 0x802359D4: bnel        $t7, $at, L_80235B70
    if (ctx->r15 != ctx->r1) {
        // 0x802359D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80235B70;
    }
    goto skip_0;
    // 0x802359D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802359DC: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x802359E0: lbu         $t8, 0x7($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X7);
    // 0x802359E4: lw          $fp, 0x24($s7)
    ctx->r30 = MEM_W(ctx->r23, 0X24);
    // 0x802359E8: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x802359EC: lbu         $t6, 0x9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9);
    // 0x802359F0: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x802359F4: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x802359F8: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x802359FC: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80235A00: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80235A04: jal         0x802359C0
    // 0x80235A08: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    static_3_802359C0(rdram, ctx);
        goto after_0;
    // 0x80235A08: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x80235A0C: lw          $s1, 0x50($s7)
    ctx->r17 = MEM_W(ctx->r23, 0X50);
    // 0x80235A10: beq         $s1, $zero, L_80235A88
    if (ctx->r17 == 0) {
        // 0x80235A14: nop
    
            goto L_80235A88;
    }
    // 0x80235A14: nop

    // 0x80235A18: addiu       $s4, $zero, 0x15
    ctx->r20 = ADD32(0, 0X15);
L_80235A1C:
    // 0x80235A1C: lh          $t7, 0xC($s1)
    ctx->r15 = MEM_H(ctx->r17, 0XC);
    // 0x80235A20: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x80235A24: lw          $s2, 0x0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X0);
    // 0x80235A28: bne         $s4, $t7, L_80235A80
    if (ctx->r20 != ctx->r15) {
        // 0x80235A2C: addu        $s0, $s0, $t9
        ctx->r16 = ADD32(ctx->r16, ctx->r25);
            goto L_80235A80;
    }
    // 0x80235A2C: addu        $s0, $s0, $t9
    ctx->r16 = ADD32(ctx->r16, ctx->r25);
    // 0x80235A30: jal         0x80237120
    // 0x80235A34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80237120(rdram, ctx);
        goto after_1;
    // 0x80235A34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80235A38: beql        $s3, $zero, L_80235A58
    if (ctx->r19 == 0) {
        // 0x80235A3C: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_80235A58;
    }
    goto skip_1;
    // 0x80235A3C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_1:
    // 0x80235A40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80235A44: jal         0x80237150
    // 0x80235A48: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    static_3_80237150(rdram, ctx);
        goto after_2;
    // 0x80235A48: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x80235A4C: b           L_80235A60
    // 0x80235A50: nop

        goto L_80235A60;
    // 0x80235A50: nop

    // 0x80235A54: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_80235A58:
    // 0x80235A58: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x80235A5C: or          $s3, $s1, $zero
    ctx->r19 = ctx->r17 | 0;
L_80235A60:
    // 0x80235A60: beq         $s2, $zero, L_80235A7C
    if (ctx->r18 == 0) {
        // 0x80235A64: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_80235A7C;
    }
    // 0x80235A64: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80235A68: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x80235A6C: lw          $t8, 0x8($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X8);
    // 0x80235A70: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x80235A74: addu        $t6, $t8, $v0
    ctx->r14 = ADD32(ctx->r24, ctx->r2);
    // 0x80235A78: sw          $t6, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r14;
L_80235A7C:
    // 0x80235A7C: sw          $v1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r3;
L_80235A80:
    // 0x80235A80: bne         $s2, $zero, L_80235A1C
    if (ctx->r18 != 0) {
        // 0x80235A84: or          $s1, $s2, $zero
        ctx->r17 = ctx->r18 | 0;
            goto L_80235A1C;
    }
    // 0x80235A84: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
L_80235A88:
    // 0x80235A88: beq         $s3, $zero, L_80235B6C
    if (ctx->r19 == 0) {
        // 0x80235A8C: or          $s1, $s3, $zero
        ctx->r17 = ctx->r19 | 0;
            goto L_80235B6C;
    }
    // 0x80235A8C: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x80235A90: addiu       $s4, $s7, 0x48
    ctx->r20 = ADD32(ctx->r23, 0X48);
    // 0x80235A94: addiu       $s5, $s4, 0x8
    ctx->r21 = ADD32(ctx->r20, 0X8);
    // 0x80235A98: addiu       $s6, $zero, -0x8
    ctx->r22 = ADD32(0, -0X8);
L_80235A9C:
    // 0x80235A9C: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x80235AA0: lw          $t7, 0x24($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X24);
    // 0x80235AA4: lw          $s2, 0x0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X0);
    // 0x80235AA8: div         $zero, $t9, $fp
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r30))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r30)));
    // 0x80235AAC: mflo        $v0
    ctx->r2 = lo;
    // 0x80235AB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80235AB4: bne         $fp, $zero, L_80235AC0
    if (ctx->r30 != 0) {
        // 0x80235AB8: nop
    
            goto L_80235AC0;
    }
    // 0x80235AB8: nop

    // 0x80235ABC: break       7
    do_break(2149800636);
L_80235AC0:
    // 0x80235AC0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80235AC4: bne         $fp, $at, L_80235AD8
    if (ctx->r30 != ctx->r1) {
        // 0x80235AC8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80235AD8;
    }
    // 0x80235AC8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80235ACC: bne         $t9, $at, L_80235AD8
    if (ctx->r25 != ctx->r1) {
        // 0x80235AD0: nop
    
            goto L_80235AD8;
    }
    // 0x80235AD0: nop

    // 0x80235AD4: break       6
    do_break(2149800660);
L_80235AD8:
    // 0x80235AD8: multu       $t7, $v0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235ADC: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x80235AE0: mflo        $t8
    ctx->r24 = lo;
    // 0x80235AE4: sw          $t8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r24;
    // 0x80235AE8: jal         0x8023FC40
    // 0x80235AEC: nop

    static_3_8023FC40(rdram, ctx);
        goto after_3;
    // 0x80235AEC: nop

    after_3:
    // 0x80235AF0: beq         $s4, $s6, L_80235B5C
    if (ctx->r20 == ctx->r22) {
        // 0x80235AF4: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80235B5C;
    }
    // 0x80235AF4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80235AF8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_80235AFC:
    // 0x80235AFC: bnel        $a0, $zero, L_80235B1C
    if (ctx->r4 != 0) {
        // 0x80235B00: lw          $v0, 0x8($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X8);
            goto L_80235B1C;
    }
    goto skip_2;
    // 0x80235B00: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    skip_2:
    // 0x80235B04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80235B08: jal         0x80237150
    // 0x80235B0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80237150(rdram, ctx);
        goto after_4;
    // 0x80235B0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x80235B10: b           L_80235B5C
    // 0x80235B14: nop

        goto L_80235B5C;
    // 0x80235B14: nop

    // 0x80235B18: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
L_80235B1C:
    // 0x80235B1C: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80235B20: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80235B24: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80235B28: beq         $at, $zero, L_80235B4C
    if (ctx->r1 == 0) {
        // 0x80235B2C: subu        $t9, $v0, $v1
        ctx->r25 = SUB32(ctx->r2, ctx->r3);
            goto L_80235B4C;
    }
    // 0x80235B2C: subu        $t9, $v0, $v1
    ctx->r25 = SUB32(ctx->r2, ctx->r3);
    // 0x80235B30: subu        $t6, $v1, $v0
    ctx->r14 = SUB32(ctx->r3, ctx->r2);
    // 0x80235B34: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x80235B38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80235B3C: jal         0x80237150
    // 0x80235B40: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80237150(rdram, ctx);
        goto after_5;
    // 0x80235B40: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80235B44: b           L_80235B5C
    // 0x80235B48: nop

        goto L_80235B5C;
    // 0x80235B48: nop

L_80235B4C:
    // 0x80235B4C: sw          $t9, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r25;
    // 0x80235B50: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80235B54: bnel        $s0, $zero, L_80235AFC
    if (ctx->r16 != 0) {
        // 0x80235B58: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_80235AFC;
    }
    goto skip_3;
    // 0x80235B58: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_3:
L_80235B5C:
    // 0x80235B5C: jal         0x8023FC40
    // 0x80235B60: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_8023FC40(rdram, ctx);
        goto after_6;
    // 0x80235B60: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_6:
    // 0x80235B64: bne         $s2, $zero, L_80235A9C
    if (ctx->r18 != 0) {
        // 0x80235B68: or          $s1, $s2, $zero
        ctx->r17 = ctx->r18 | 0;
            goto L_80235A9C;
    }
    // 0x80235B68: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
L_80235B6C:
    // 0x80235B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80235B70:
    // 0x80235B70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80235B74: jr          $ra
    // 0x80235B78: nop

    return;
    // 0x80235B78: nop

;}
RECOMP_FUNC void D_8021A320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021A320: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021A324: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x8021A328: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8021A32C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021A330: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8021A334: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021A338: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8021A33C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021A340: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021A344: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8021A348: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021A34C: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021A350: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8021A354: sub.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8021A358: sub.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x8021A35C: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x8021A360: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8021A364: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8021A368: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x8021A36C: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021A370: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021A374: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8021A378: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021A37C: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x8021A380: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8021A384: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021A388: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021A38C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021A390: nop

    // 0x8021A394: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8021A398: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021A39C: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x8021A3A0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021A3A4: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x8021A3A8: jal         0x8022AA40
    // 0x8021A3AC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_0;
    // 0x8021A3AC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x8021A3B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021A3B4: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8021A3B8: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021A3BC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8021A3C0: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021A3C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021A3C8: bc1tl       L_8021A3E8
    if (c1cs) {
        // 0x8021A3CC: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_8021A3E8;
    }
    goto skip_0;
    // 0x8021A3CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_0:
    // 0x8021A3D0: div.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8021A3D4: div.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8021A3D8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x8021A3DC: b           L_8021A3F4
    // 0x8021A3E0: div.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
        goto L_8021A3F4;
    // 0x8021A3E0: div.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8021A3E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_8021A3E8:
    // 0x8021A3E8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8021A3EC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8021A3F0: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
L_8021A3F4:
    // 0x8021A3F4: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x8021A3F8: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x8021A3FC: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8021A400: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021A404: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x8021A408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021A40C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8021A410: jr          $ra
    // 0x8021A414: nop

    return;
    // 0x8021A414: nop

;}
RECOMP_FUNC void D_802401EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802401EC: lbu         $t6, 0x8($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X8);
    // 0x802401F0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802401F4: bne         $t6, $at, L_8024025C
    if (ctx->r14 != ctx->r1) {
        // 0x802401F8: nop
    
            goto L_8024025C;
    }
    // 0x802401F8: nop

    // 0x802401FC: lbu         $t7, 0x9($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X9);
    // 0x80240200: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x80240204: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x80240208: bne         $t7, $at, L_8024025C
    if (ctx->r15 != ctx->r1) {
        // 0x8024020C: nop
    
            goto L_8024025C;
    }
    // 0x8024020C: nop

    // 0x80240210: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x80240214: lbu         $t8, 0x7($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X7);
    // 0x80240218: lw          $a2, 0x18($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X18);
    // 0x8024021C: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x80240220: lbu         $t6, 0x9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9);
    // 0x80240224: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80240228: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8024022C: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x80240230: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80240234: addiu       $t8, $zero, 0x1E8
    ctx->r24 = ADD32(0, 0X1E8);
    // 0x80240238: beq         $a2, $zero, L_80240258
    if (ctx->r6 == 0) {
        // 0x8024023C: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80240258;
    }
    // 0x8024023C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80240240: lwc1        $f6, 0x14($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X14);
    // 0x80240244: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80240248: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8024024C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80240250: jr          $ra
    // 0x80240254: sw          $t7, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r15;
    return;
    // 0x80240254: sw          $t7, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r15;
L_80240258:
    // 0x80240258: sw          $t8, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r24;
L_8024025C:
    // 0x8024025C: jr          $ra
    // 0x80240260: nop

    return;
    // 0x80240260: nop

;}
RECOMP_FUNC void D_802AA400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA480: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802AA484: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AA488: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802AA48C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x802AA490: lbu         $t7, 0xBA($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XBA);
    // 0x802AA494: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802AA498: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AA49C: beq         $t7, $at, L_802AA52C
    if (ctx->r15 == ctx->r1) {
        // 0x802AA4A0: andi        $t6, $a1, 0xFF
        ctx->r14 = ctx->r5 & 0XFF;
            goto L_802AA52C;
    }
    // 0x802AA4A0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802AA4A4: beq         $t6, $zero, L_802AA518
    if (ctx->r14 == 0) {
        // 0x802AA4A8: nop
    
            goto L_802AA518;
    }
    // 0x802AA4A8: nop

    // 0x802AA4AC: jal         0x80305EF0
    // 0x802AA4B0: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    static_3_80305EF0(rdram, ctx);
        goto after_0;
    // 0x802AA4B0: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    after_0:
    // 0x802AA4B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802AA4B8: addiu       $a1, $zero, 0x15E
    ctx->r5 = ADD32(0, 0X15E);
    // 0x802AA4BC: jal         0x80305E90
    // 0x802AA4C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_1;
    // 0x802AA4C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x802AA4C4: lbu         $t8, 0x24($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X24);
    // 0x802AA4C8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802AA4CC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AA4D0: bne         $t8, $zero, L_802AA52C
    if (ctx->r24 != 0) {
        // 0x802AA4D4: addiu       $a1, $s0, 0xCC
        ctx->r5 = ADD32(ctx->r16, 0XCC);
            goto L_802AA52C;
    }
    // 0x802AA4D4: addiu       $a1, $s0, 0xCC
    ctx->r5 = ADD32(ctx->r16, 0XCC);
    // 0x802AA4D8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AA4DC: lbu         $a2, 0xBA($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XBA);
    // 0x802AA4E0: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x802AA4E4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802AA4E8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802AA4EC: jal         0x80302238
    // 0x802AA4F0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_2;
    // 0x802AA4F0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802AA4F4: beq         $v0, $zero, L_802AA52C
    if (ctx->r2 == 0) {
        // 0x802AA4F8: lw          $a1, 0x2C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X2C);
            goto L_802AA52C;
    }
    // 0x802AA4F8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802AA4FC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AA500: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AA504: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802AA508: jal         0x8030276C
    // 0x802AA50C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030276C(rdram, ctx);
        goto after_3;
    // 0x802AA50C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802AA510: b           L_802AA530
    // 0x802AA514: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802AA530;
    // 0x802AA514: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802AA518:
    // 0x802AA518: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AA51C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AA520: addiu       $a1, $s0, 0xCC
    ctx->r5 = ADD32(ctx->r16, 0XCC);
    // 0x802AA524: jal         0x80302414
    // 0x802AA528: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_4;
    // 0x802AA528: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
L_802AA52C:
    // 0x802AA52C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802AA530:
    // 0x802AA530: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802AA534: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802AA538: jr          $ra
    // 0x802AA53C: nop

    return;
    // 0x802AA53C: nop

;}
RECOMP_FUNC void D_802EC134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC1B4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802EC1B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EC1BC: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x802EC1C0: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802EC1C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EC1C8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EC1CC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802EC1D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EC1D4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802EC1D8: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802EC1DC: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x802EC1E0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802EC1E4: sh          $t9, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r25;
    // 0x802EC1E8: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802EC1EC: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802EC1F0: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802EC1F4: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802EC1F8: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802EC1FC: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802EC200: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802EC204: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
    // 0x802EC208: jr          $ra
    // 0x802EC20C: swc1        $f6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x802EC20C: swc1        $f6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f6.u32l;
;}

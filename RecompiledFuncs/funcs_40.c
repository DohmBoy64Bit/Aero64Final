#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802B676C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B67EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802B67F0: jr          $ra
    // 0x802B67F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802B67F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802EC214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EC298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EC29C: beq         $a0, $zero, L_802EC2CC
    if (ctx->r4 == 0) {
        // 0x802EC2A0: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EC2CC;
    }
    // 0x802EC2A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EC2A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EC2A8: jal         0x8031C514
    // 0x802EC2AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802EC2AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EC2B0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EC2B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EC2B8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EC2BC: beql        $t7, $zero, L_802EC2D0
    if (ctx->r15 == 0) {
        // 0x802EC2C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EC2D0;
    }
    goto skip_0;
    // 0x802EC2C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EC2C4: jal         0x802C681C
    // 0x802EC2C8: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EC2C8: nop

    after_1:
L_802EC2CC:
    // 0x802EC2CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EC2D0:
    // 0x802EC2D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EC2D4: jr          $ra
    // 0x802EC2D8: nop

    return;
    // 0x802EC2D8: nop

;}
RECOMP_FUNC void D_802A6A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6AEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6AF0: beq         $a0, $zero, L_802A6B0C
    if (ctx->r4 == 0) {
        // 0x802A6AF4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A6B0C;
    }
    // 0x802A6AF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A6AF8: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x802A6AFC: beql        $t6, $zero, L_802A6B10
    if (ctx->r14 == 0) {
        // 0x802A6B00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A6B10;
    }
    goto skip_0;
    // 0x802A6B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A6B04: jal         0x802C681C
    // 0x802A6B08: nop

    static_3_802C681C(rdram, ctx);
        goto after_0;
    // 0x802A6B08: nop

    after_0:
L_802A6B0C:
    // 0x802A6B0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A6B10:
    // 0x802A6B10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A6B14: jr          $ra
    // 0x802A6B18: nop

    return;
    // 0x802A6B18: nop

;}
RECOMP_FUNC void func_80237828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237828: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8023782C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80237830: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x80237834: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80237838: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8023783C: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x80237840: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x80237844: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x80237848: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x8023784C: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80237850: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80237854: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80237858: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8023785C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80237860: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x80237864: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x80237868: sh          $zero, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = 0;
    // 0x8023786C: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80237870: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x80237874: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80237878: bne         $t7, $zero, L_8023788C
    if (ctx->r15 != 0) {
        // 0x8023787C: or          $s5, $a2, $zero
        ctx->r21 = ctx->r6 | 0;
            goto L_8023788C;
    }
    // 0x8023787C: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80237880: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x80237884: b           L_80237A8C
    // 0x80237888: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_80237A8C;
    // 0x80237888: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8023788C:
    // 0x8023788C: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x80237890: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80237894: lui         $v1, 0x7FFF
    ctx->r3 = S32(0X7FFF << 16);
    // 0x80237898: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8023789C: beq         $v0, $zero, L_802378D8
    if (ctx->r2 == 0) {
        // 0x802378A0: addiu       $s2, $zero, -0x10
        ctx->r18 = ADD32(0, -0X10);
            goto L_802378D8;
    }
    // 0x802378A0: addiu       $s2, $zero, -0x10
    ctx->r18 = ADD32(0, -0X10);
    // 0x802378A4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802378A8: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
L_802378AC:
    // 0x802378AC: subu        $t0, $t9, $a0
    ctx->r8 = SUB32(ctx->r25, ctx->r4);
    // 0x802378B0: slt         $at, $t0, $v1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802378B4: beql        $at, $zero, L_802378D0
    if (ctx->r1 == 0) {
        // 0x802378B8: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_802378D0;
    }
    goto skip_0;
    // 0x802378B8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x802378BC: sw          $v0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r2;
    // 0x802378C0: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
    // 0x802378C4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802378C8: subu        $v1, $t1, $a0
    ctx->r3 = SUB32(ctx->r9, ctx->r4);
    // 0x802378CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_802378D0:
    // 0x802378D0: bnel        $v0, $zero, L_802378AC
    if (ctx->r2 != 0) {
        // 0x802378D4: lw          $t9, 0x10($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X10);
            goto L_802378AC;
    }
    goto skip_1;
    // 0x802378D4: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    skip_1:
L_802378D8:
    // 0x802378D8: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x802378DC: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802378E0: lw          $v0, 0x10($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X10);
    // 0x802378E4: subu        $t3, $v0, $a0
    ctx->r11 = SUB32(ctx->r2, ctx->r4);
    // 0x802378E8: slt         $at, $t3, $s3
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x802378EC: beq         $at, $zero, L_802379D0
    if (ctx->r1 == 0) {
        // 0x802378F0: sw          $v0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r2;
            goto L_802379D0;
    }
    // 0x802378F0: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x802378F4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802378F8: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x802378FC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80237900: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80237904: ldc1        $f20, 0x0($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, 0X0);
L_80237908:
    // 0x80237908: lw          $t4, 0x1C($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X1C);
    // 0x8023790C: lui         $s0, 0x7FFF
    ctx->r16 = S32(0X7FFF << 16);
    // 0x80237910: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x80237914: and         $t5, $t4, $s2
    ctx->r13 = ctx->r12 & ctx->r18;
    // 0x80237918: sw          $t5, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r13;
    // 0x8023791C: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x80237920: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80237924: jalr        $t9
    // 0x80237928: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80237928: nop

    after_0:
    // 0x8023792C: lw          $t8, 0x44($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X44);
    // 0x80237930: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80237934: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x80237938: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8023793C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80237940: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x80237944: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80237948: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8023794C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80237950: div.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f20.d);
    // 0x80237954: add.d       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = ctx->f4.d + ctx->f22.d;
    // 0x80237958: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x8023795C: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80237960: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80237964: nop

    // 0x80237968: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8023796C: sw          $t2, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r10;
    // 0x80237970: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x80237974: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80237978: beql        $v1, $zero, L_802379B8
    if (ctx->r3 == 0) {
        // 0x8023797C: lw          $t7, 0xB4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XB4);
            goto L_802379B8;
    }
    goto skip_2;
    // 0x8023797C: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    skip_2:
    // 0x80237980: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80237984: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
L_80237988:
    // 0x80237988: subu        $t4, $t3, $a0
    ctx->r12 = SUB32(ctx->r11, ctx->r4);
    // 0x8023798C: slt         $at, $t4, $s0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80237990: beql        $at, $zero, L_802379AC
    if (ctx->r1 == 0) {
        // 0x80237994: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_802379AC;
    }
    goto skip_3;
    // 0x80237994: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_3:
    // 0x80237998: sw          $v1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r3;
    // 0x8023799C: lw          $t5, 0x10($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X10);
    // 0x802379A0: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802379A4: subu        $s0, $t5, $a0
    ctx->r16 = SUB32(ctx->r13, ctx->r4);
    // 0x802379A8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_802379AC:
    // 0x802379AC: bnel        $v1, $zero, L_80237988
    if (ctx->r3 != 0) {
        // 0x802379B0: lw          $t3, 0x10($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X10);
            goto L_80237988;
    }
    goto skip_4;
    // 0x802379B0: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
    skip_4:
    // 0x802379B4: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
L_802379B8:
    // 0x802379B8: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802379BC: lw          $v0, 0x10($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X10);
    // 0x802379C0: subu        $t9, $v0, $a0
    ctx->r25 = SUB32(ctx->r2, ctx->r4);
    // 0x802379C4: slt         $at, $t9, $s3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x802379C8: bne         $at, $zero, L_80237908
    if (ctx->r1 != 0) {
        // 0x802379CC: sw          $v0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r2;
            goto L_80237908;
    }
    // 0x802379CC: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
L_802379D0:
    // 0x802379D0: lw          $t8, 0x1C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X1C);
    // 0x802379D4: addiu       $s2, $zero, -0x10
    ctx->r18 = ADD32(0, -0X10);
    // 0x802379D8: addiu       $s7, $sp, 0xAA
    ctx->r23 = ADD32(ctx->r29, 0XAA);
    // 0x802379DC: and         $t6, $t8, $s2
    ctx->r14 = ctx->r24 & ctx->r18;
    // 0x802379E0: blez        $s3, L_80237A6C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x802379E4: sw          $t6, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r14;
            goto L_80237A6C;
    }
    // 0x802379E4: sw          $t6, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r14;
    // 0x802379E8: lui         $s6, 0x700
    ctx->r22 = S32(0X700 << 16);
L_802379EC:
    // 0x802379EC: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x802379F0: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x802379F4: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x802379F8: beq         $at, $zero, L_80237A08
    if (ctx->r1 == 0) {
        // 0x802379FC: nop
    
            goto L_80237A08;
    }
    // 0x802379FC: nop

    // 0x80237A00: b           L_80237A08
    // 0x80237A04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_80237A08;
    // 0x80237A04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80237A08:
    // 0x80237A08: sw          $s6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r22;
    // 0x80237A0C: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
    // 0x80237A10: lw          $s2, 0x38($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X38);
    // 0x80237A14: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80237A18: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80237A1C: lw          $t9, 0x8($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X8);
    // 0x80237A20: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80237A24: jalr        $t9
    // 0x80237A28: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80237A28: nop

    after_1:
    // 0x80237A2C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x80237A30: addiu       $t1, $s4, 0x8
    ctx->r9 = ADD32(ctx->r20, 0X8);
    // 0x80237A34: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80237A38: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x80237A3C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80237A40: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80237A44: jalr        $t9
    // 0x80237A48: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80237A48: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x80237A4C: lw          $t3, 0x20($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X20);
    // 0x80237A50: subu        $s3, $s3, $s0
    ctx->r19 = SUB32(ctx->r19, ctx->r16);
    // 0x80237A54: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x80237A58: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x80237A5C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80237A60: addu        $s5, $s5, $t0
    ctx->r21 = ADD32(ctx->r21, ctx->r8);
    // 0x80237A64: bgtz        $s3, L_802379EC
    if (SIGNED(ctx->r19) > 0) {
        // 0x80237A68: sw          $t4, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r12;
            goto L_802379EC;
    }
    // 0x80237A68: sw          $t4, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r12;
L_80237A6C:
    // 0x80237A6C: lw          $t5, 0xB8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB8);
    // 0x80237A70: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x80237A74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80237A78: subu        $t7, $s4, $t5
    ctx->r15 = SUB32(ctx->r20, ctx->r13);
    // 0x80237A7C: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x80237A80: jal         0x802377C8
    // 0x80237A84: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    static_3_802377C8(rdram, ctx);
        goto after_3;
    // 0x80237A84: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    after_3:
    // 0x80237A88: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_80237A8C:
    // 0x80237A8C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80237A90: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80237A94: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80237A98: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80237A9C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80237AA0: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80237AA4: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80237AA8: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80237AAC: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80237AB0: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x80237AB4: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x80237AB8: jr          $ra
    // 0x80237ABC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80237ABC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void D_802491BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802491BC: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x802491C0: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x802491C4: lh          $t7, 0xC($a1)
    ctx->r15 = MEM_H(ctx->r5, 0XC);
    // 0x802491C8: sh          $t7, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r15;
    // 0x802491CC: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x802491D0: jr          $ra
    // 0x802491D4: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
    return;
    // 0x802491D4: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void D_80295010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295090: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80295094: jr          $ra
    // 0x80295098: swc1        $f12, 0x170($a0)
    MEM_W(0X170, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x80295098: swc1        $f12, 0x170($a0)
    MEM_W(0X170, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802D2D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2D98: lbu         $v0, 0x48($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X48);
    // 0x802D2D9C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802D2DA0: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x802D2DA4: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x802D2DA8: beq         $at, $zero, L_802D2DE4
    if (ctx->r1 == 0) {
        // 0x802D2DAC: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_802D2DE4;
    }
    // 0x802D2DAC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x802D2DB0: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x802D2DB4: sw          $a1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r5;
    // 0x802D2DB8: lbu         $t8, 0x48($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X48);
    // 0x802D2DBC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802D2DC0: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x802D2DC4: swc1        $f12, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f12.u32l;
    // 0x802D2DC8: lbu         $t1, 0x48($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X48);
    // 0x802D2DCC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x802D2DD0: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x802D2DD4: swc1        $f14, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->f14.u32l;
    // 0x802D2DD8: lbu         $t4, 0x48($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X48);
    // 0x802D2DDC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802D2DE0: sb          $t5, 0x48($a0)
    MEM_B(0X48, ctx->r4) = ctx->r13;
L_802D2DE4:
    // 0x802D2DE4: jr          $ra
    // 0x802D2DE8: nop

    return;
    // 0x802D2DE8: nop

;}
RECOMP_FUNC void D_8029507C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802950FC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80295100: jr          $ra
    // 0x80295104: swc1        $f12, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x80295104: swc1        $f12, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802E877C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E87FC: jr          $ra
    // 0x802E8800: sw          $a1, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r5;
    return;
    // 0x802E8800: sw          $a1, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_8023A580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023A580: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8023A584: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023A588: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8023A58C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8023A590: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8023A594: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8023A598: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8023A59C: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8023A5A0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8023A5A4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8023A5A8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8023A5AC: bne         $t7, $zero, L_8023A5BC
    if (ctx->r15 != 0) {
        // 0x8023A5B0: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8023A5BC;
    }
    // 0x8023A5B0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8023A5B4: b           L_8023A68C
    // 0x8023A5B8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8023A68C;
    // 0x8023A5B8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8023A5BC:
    // 0x8023A5BC: jal         0x802452EC
    // 0x8023A5C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802452EC(rdram, ctx);
        goto after_0;
    // 0x8023A5C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8023A5C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8023A5C8: bne         $v0, $at, L_8023A5D8
    if (ctx->r2 != ctx->r1) {
        // 0x8023A5CC: nop
    
            goto L_8023A5D8;
    }
    // 0x8023A5CC: nop

    // 0x8023A5D0: b           L_8023A68C
    // 0x8023A5D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8023A68C;
    // 0x8023A5D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8023A5D8:
    // 0x8023A5D8: lbu         $t8, 0x65($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X65);
    // 0x8023A5DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8023A5E0: beq         $t8, $zero, L_8023A600
    if (ctx->r24 == 0) {
        // 0x8023A5E4: nop
    
            goto L_8023A600;
    }
    // 0x8023A5E4: nop

    // 0x8023A5E8: jal         0x802456A0
    // 0x8023A5EC: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    static_3_802456A0(rdram, ctx);
        goto after_1;
    // 0x8023A5EC: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    after_1:
    // 0x8023A5F0: beq         $v0, $zero, L_8023A600
    if (ctx->r2 == 0) {
        // 0x8023A5F4: nop
    
            goto L_8023A600;
    }
    // 0x8023A5F4: nop

    // 0x8023A5F8: b           L_8023A690
    // 0x8023A5FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8023A690;
    // 0x8023A5FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8023A600:
    // 0x8023A600: lw          $t9, 0x50($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X50);
    // 0x8023A604: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8023A608: blez        $t9, L_8023A670
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8023A60C: addiu       $s3, $sp, 0x30
        ctx->r19 = ADD32(ctx->r29, 0X30);
            goto L_8023A670;
    }
    // 0x8023A60C: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
L_8023A610:
    // 0x8023A610: lw          $t0, 0x5C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X5C);
    // 0x8023A614: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x8023A618: addu        $a2, $t0, $s0
    ctx->r6 = ADD32(ctx->r8, ctx->r16);
    // 0x8023A61C: andi        $t1, $a2, 0xFFFF
    ctx->r9 = ctx->r6 & 0XFFFF;
    // 0x8023A620: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x8023A624: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8023A628: jal         0x80245710
    // 0x8023A62C: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    static_3_80245710(rdram, ctx);
        goto after_2;
    // 0x8023A62C: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_2:
    // 0x8023A630: beq         $v0, $zero, L_8023A644
    if (ctx->r2 == 0) {
        // 0x8023A634: lhu         $t2, 0x34($sp)
        ctx->r10 = MEM_HU(ctx->r29, 0X34);
            goto L_8023A644;
    }
    // 0x8023A634: lhu         $t2, 0x34($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X34);
    // 0x8023A638: b           L_8023A690
    // 0x8023A63C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8023A690;
    // 0x8023A63C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023A640: lhu         $t2, 0x34($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X34);
L_8023A644:
    // 0x8023A644: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8023A648: beq         $t2, $zero, L_8023A65C
    if (ctx->r10 == 0) {
        // 0x8023A64C: nop
    
            goto L_8023A65C;
    }
    // 0x8023A64C: nop

    // 0x8023A650: beq         $t3, $zero, L_8023A65C
    if (ctx->r11 == 0) {
        // 0x8023A654: nop
    
            goto L_8023A65C;
    }
    // 0x8023A654: nop

    // 0x8023A658: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8023A65C:
    // 0x8023A65C: lw          $t4, 0x50($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X50);
    // 0x8023A660: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8023A664: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8023A668: bne         $at, $zero, L_8023A610
    if (ctx->r1 != 0) {
        // 0x8023A66C: nop
    
            goto L_8023A610;
    }
    // 0x8023A66C: nop

L_8023A670:
    // 0x8023A670: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x8023A674: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8023A678: sw          $s2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r18;
    // 0x8023A67C: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x8023A680: lw          $t6, 0x50($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X50);
    // 0x8023A684: nop

    // 0x8023A688: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
L_8023A68C:
    // 0x8023A68C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8023A690:
    // 0x8023A690: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8023A694: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8023A698: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8023A69C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8023A6A0: jr          $ra
    // 0x8023A6A4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8023A6A4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void D_8029B204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029B284: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8029B288: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8029B28C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8029B290: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8029B294: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8029B298: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8029B29C: addiu       $a1, $zero, 0xBF
    ctx->r5 = ADD32(0, 0XBF);
    // 0x8029B2A0: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8029B2A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029B2A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029B2AC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029B2B0: addiu       $a2, $zero, 0x126
    ctx->r6 = ADD32(0, 0X126);
    // 0x8029B2B4: jal         0x802CEEB4
    // 0x8029B2B8: addiu       $a3, $zero, 0xD1
    ctx->r7 = ADD32(0, 0XD1);
    static_3_802CEEB4(rdram, ctx);
        goto after_0;
    // 0x8029B2B8: addiu       $a3, $zero, 0xD1
    ctx->r7 = ADD32(0, 0XD1);
    after_0:
    // 0x8029B2BC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8029B2C0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8029B2C4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8029B2C8: jal         0x8021E708
    // 0x8029B2CC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_1;
    // 0x8029B2CC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x8029B2D0: jal         0x8021E66C
    // 0x8029B2D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_2;
    // 0x8029B2D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8029B2D8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8029B2DC: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x8029B2E0: jal         0x802CE360
    // 0x8029B2E4: addiu       $a2, $zero, 0x126
    ctx->r6 = ADD32(0, 0X126);
    static_3_802CE360(rdram, ctx);
        goto after_3;
    // 0x8029B2E4: addiu       $a2, $zero, 0x126
    ctx->r6 = ADD32(0, 0X126);
    after_3:
    // 0x8029B2E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029B2EC: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    // 0x8029B2F0: jal         0x8021E87C
    // 0x8029B2F4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    static_3_8021E87C(rdram, ctx);
        goto after_4;
    // 0x8029B2F4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x8029B2F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8029B2FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8029B300: jr          $ra
    // 0x8029B304: nop

    return;
    // 0x8029B304: nop

;}
RECOMP_FUNC void D_8024A1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A1FC: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x8024A200: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8024A204: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8024A208: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8024A20C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8024A210: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8024A214: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8024A218: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8024A21C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8024A220: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8024A224: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8024A228: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8024A22C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8024A230: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x8024A234: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x8024A238: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x8024A23C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8024A240: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x8024A244: jalr        $t9
    // 0x8024A248: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8024A248: nop

    after_0:
    // 0x8024A24C: sll         $s1, $s6, 1
    ctx->r17 = S32(ctx->r22 << 1);
    // 0x8024A250: lui         $t8, 0xC00
    ctx->r24 = S32(0XC00 << 16);
    // 0x8024A254: lui         $t2, 0x6C0
    ctx->r10 = S32(0X6C0 << 16);
    // 0x8024A258: lui         $t3, 0xC00
    ctx->r11 = S32(0XC00 << 16);
    // 0x8024A25C: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x8024A260: andi        $t1, $s1, 0xFFFF
    ctx->r9 = ctx->r17 & 0XFFFF;
    // 0x8024A264: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x8024A268: ori         $t2, $t2, 0x6C0
    ctx->r10 = ctx->r10 | 0X6C0;
    // 0x8024A26C: ori         $t8, $t8, 0xDA83
    ctx->r24 = ctx->r24 | 0XDA83;
    // 0x8024A270: ori         $t4, $t4, 0x6C0
    ctx->r12 = ctx->r12 | 0X6C0;
    // 0x8024A274: ori         $t3, $t3, 0x5A82
    ctx->r11 = ctx->r11 | 0X5A82;
    // 0x8024A278: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8024A27C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8024A280: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
    // 0x8024A284: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x8024A288: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
    // 0x8024A28C: sw          $t4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r12;
    // 0x8024A290: lw          $a1, 0x18($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X18);
    // 0x8024A294: addiu       $t5, $v0, 0x18
    ctx->r13 = ADD32(ctx->r2, 0X18);
    // 0x8024A298: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8024A29C: addiu       $s2, $zero, 0x140
    ctx->r18 = ADD32(0, 0X140);
    // 0x8024A2A0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8024A2A4: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x8024A2A8: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x8024A2AC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8024A2B0: addiu       $a2, $zero, 0x6C0
    ctx->r6 = ADD32(0, 0X6C0);
    // 0x8024A2B4: jal         0x80249AA0
    // 0x8024A2B8: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    static_3_80249AA0(rdram, ctx);
        goto after_1;
    // 0x8024A2B8: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_1:
    // 0x8024A2BC: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x8024A2C0: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x8024A2C4: ori         $t6, $t6, 0x800
    ctx->r14 = ctx->r14 | 0X800;
    // 0x8024A2C8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8024A2CC: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x8024A2D0: lbu         $t9, 0x24($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X24);
    // 0x8024A2D4: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x8024A2D8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x8024A2DC: blezl       $t9, L_8024A4BC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8024A2E0: lw          $v1, 0x1C($s3)
        ctx->r3 = MEM_W(ctx->r19, 0X1C);
            goto L_8024A4BC;
    }
    goto skip_0;
    // 0x8024A2E0: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    skip_0:
    // 0x8024A2E4: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
L_8024A2E8:
    // 0x8024A2E8: lw          $t7, 0x20($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X20);
    // 0x8024A2EC: sll         $t8, $s7, 2
    ctx->r24 = S32(ctx->r23 << 2);
    // 0x8024A2F0: addu        $t8, $t8, $s7
    ctx->r24 = ADD32(ctx->r24, ctx->r23);
    // 0x8024A2F4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8024A2F8: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x8024A2FC: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x8024A300: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x8024A304: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8024A308: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x8024A30C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8024A310: negu        $t6, $t5
    ctx->r14 = SUB32(0, ctx->r13);
    // 0x8024A314: addu        $s4, $v0, $t4
    ctx->r20 = ADD32(ctx->r2, ctx->r12);
    // 0x8024A318: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x8024A31C: bne         $s4, $v1, L_8024A344
    if (ctx->r20 != ctx->r3) {
        // 0x8024A320: addu        $fp, $v0, $t9
        ctx->r30 = ADD32(ctx->r2, ctx->r25);
            goto L_8024A344;
    }
    // 0x8024A320: addu        $fp, $v0, $t9
    ctx->r30 = ADD32(ctx->r2, ctx->r25);
    // 0x8024A324: or          $t7, $s2, $zero
    ctx->r15 = ctx->r18 | 0;
    // 0x8024A328: sll         $s2, $s5, 16
    ctx->r18 = S32(ctx->r21 << 16);
    // 0x8024A32C: sll         $s5, $t7, 16
    ctx->r21 = S32(ctx->r15 << 16);
    // 0x8024A330: sra         $t2, $s5, 16
    ctx->r10 = S32(SIGNED(ctx->r21) >> 16);
    // 0x8024A334: sra         $t8, $s2, 16
    ctx->r24 = S32(SIGNED(ctx->r18) >> 16);
    // 0x8024A338: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x8024A33C: b           L_8024A35C
    // 0x8024A340: or          $s5, $t2, $zero
    ctx->r21 = ctx->r10 | 0;
        goto L_8024A35C;
    // 0x8024A340: or          $s5, $t2, $zero
    ctx->r21 = ctx->r10 | 0;
L_8024A344:
    // 0x8024A344: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8024A348: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8024A34C: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8024A350: jal         0x80249C28
    // 0x8024A354: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    static_3_80249C28(rdram, ctx);
        goto after_2;
    // 0x8024A354: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x8024A358: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8024A35C:
    // 0x8024A35C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8024A360: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8024A364: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8024A368: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8024A36C: jal         0x80249DB4
    // 0x8024A370: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    static_3_80249DB4(rdram, ctx);
        goto after_3;
    // 0x8024A370: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x8024A374: lh          $a0, 0x8($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X8);
    // 0x8024A378: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8024A37C: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x8024A380: beq         $a0, $zero, L_8024A3D4
    if (ctx->r4 == 0) {
        // 0x8024A384: andi        $t4, $a0, 0xFFFF
        ctx->r12 = ctx->r4 & 0XFFFF;
            goto L_8024A3D4;
    }
    // 0x8024A384: andi        $t4, $a0, 0xFFFF
    ctx->r12 = ctx->r4 & 0XFFFF;
    // 0x8024A388: sll         $t9, $s5, 16
    ctx->r25 = S32(ctx->r21 << 16);
    // 0x8024A38C: andi        $t7, $s2, 0xFFFF
    ctx->r15 = ctx->r18 & 0XFFFF;
    // 0x8024A390: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8024A394: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x8024A398: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8024A39C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8024A3A0: lw          $t2, 0x24($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X24);
    // 0x8024A3A4: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x8024A3A8: bnel        $t2, $zero, L_8024A3D8
    if (ctx->r10 != 0) {
        // 0x8024A3AC: lh          $v1, 0xA($s1)
        ctx->r3 = MEM_H(ctx->r17, 0XA);
            goto L_8024A3D8;
    }
    goto skip_1;
    // 0x8024A3AC: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    skip_1:
    // 0x8024A3B0: lw          $t3, 0x20($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X20);
    // 0x8024A3B4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8024A3B8: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x8024A3BC: bne         $t3, $zero, L_8024A3D4
    if (ctx->r11 != 0) {
        // 0x8024A3C0: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_8024A3D4;
    }
    // 0x8024A3C0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8024A3C4: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8024A3C8: jal         0x80249AA0
    // 0x8024A3CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    static_3_80249AA0(rdram, ctx);
        goto after_4;
    // 0x8024A3CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_4:
    // 0x8024A3D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8024A3D4:
    // 0x8024A3D4: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
L_8024A3D8:
    // 0x8024A3D8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8024A3DC: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x8024A3E0: beq         $v1, $zero, L_8024A420
    if (ctx->r3 == 0) {
        // 0x8024A3E4: andi        $t5, $v1, 0xFFFF
        ctx->r13 = ctx->r3 & 0XFFFF;
            goto L_8024A420;
    }
    // 0x8024A3E4: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x8024A3E8: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x8024A3EC: andi        $t8, $s5, 0xFFFF
    ctx->r24 = ctx->r21 & 0XFFFF;
    // 0x8024A3F0: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x8024A3F4: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8024A3F8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8024A3FC: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x8024A400: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8024A404: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024A408: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8024A40C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8024A410: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8024A414: jal         0x80249AA0
    // 0x8024A418: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    static_3_80249AA0(rdram, ctx);
        goto after_5;
    // 0x8024A418: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_5:
    // 0x8024A41C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8024A420:
    // 0x8024A420: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x8024A424: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8024A428: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8024A42C: beql        $a0, $zero, L_8024A444
    if (ctx->r4 == 0) {
        // 0x8024A430: lw          $t3, 0x24($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X24);
            goto L_8024A444;
    }
    goto skip_2;
    // 0x8024A430: lw          $t3, 0x24($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X24);
    skip_2:
    // 0x8024A434: jal         0x802499E8
    // 0x8024A438: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    static_3_802499E8(rdram, ctx);
        goto after_6;
    // 0x8024A438: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_6:
    // 0x8024A43C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8024A440: lw          $t3, 0x24($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X24);
L_8024A444:
    // 0x8024A444: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8024A448: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x8024A44C: bne         $t3, $zero, L_8024A464
    if (ctx->r11 != 0) {
        // 0x8024A450: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_8024A464;
    }
    // 0x8024A450: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8024A454: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8024A458: jal         0x80249AA0
    // 0x8024A45C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    static_3_80249AA0(rdram, ctx);
        goto after_7;
    // 0x8024A45C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_7:
    // 0x8024A460: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8024A464:
    // 0x8024A464: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x8024A468: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8024A46C: sll         $t4, $s7, 16
    ctx->r12 = S32(ctx->r23 << 16);
    // 0x8024A470: beq         $v1, $zero, L_8024A49C
    if (ctx->r3 == 0) {
        // 0x8024A474: sra         $s7, $t4, 16
        ctx->r23 = S32(SIGNED(ctx->r12) >> 16);
            goto L_8024A49C;
    }
    // 0x8024A474: sra         $s7, $t4, 16
    ctx->r23 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8024A478: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8024A47C: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x8024A480: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x8024A484: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x8024A488: ori         $t8, $t7, 0x800
    ctx->r24 = ctx->r15 | 0X800;
    // 0x8024A48C: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8024A490: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8024A494: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8024A498: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8024A49C:
    // 0x8024A49C: lbu         $t6, 0x24($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X24);
    // 0x8024A4A0: lw          $t2, 0x4($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X4);
    // 0x8024A4A4: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x8024A4A8: slt         $at, $s7, $t6
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8024A4AC: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8024A4B0: bne         $at, $zero, L_8024A2E8
    if (ctx->r1 != 0) {
        // 0x8024A4B4: addu        $v1, $v0, $t3
        ctx->r3 = ADD32(ctx->r2, ctx->r11);
            goto L_8024A2E8;
    }
    // 0x8024A4B4: addu        $v1, $v0, $t3
    ctx->r3 = ADD32(ctx->r2, ctx->r11);
    // 0x8024A4B8: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
L_8024A4BC:
    // 0x8024A4BC: lw          $t9, 0x18($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X18);
    // 0x8024A4C0: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8024A4C4: lw          $t3, 0x14($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X14);
    // 0x8024A4C8: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    // 0x8024A4CC: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x8024A4D0: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x8024A4D4: sltu        $at, $t4, $t8
    ctx->r1 = ctx->r12 < ctx->r24 ? 1 : 0;
    // 0x8024A4D8: beq         $at, $zero, L_8024A4E8
    if (ctx->r1 == 0) {
        // 0x8024A4DC: sw          $t8, 0x18($s3)
        MEM_W(0X18, ctx->r19) = ctx->r24;
            goto L_8024A4E8;
    }
    // 0x8024A4DC: sw          $t8, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r24;
    // 0x8024A4E0: subu        $t5, $t8, $t2
    ctx->r13 = SUB32(ctx->r24, ctx->r10);
    // 0x8024A4E4: sw          $t5, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r13;
L_8024A4E8:
    // 0x8024A4E8: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x8024A4EC: ori         $t6, $t6, 0x800
    ctx->r14 = ctx->r14 | 0X800;
    // 0x8024A4F0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8024A4F4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8024A4F8: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8024A4FC: lui         $at, 0x6C0
    ctx->r1 = S32(0X6C0 << 16);
    // 0x8024A500: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x8024A504: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x8024A508: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8024A50C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8024A510: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8024A514: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8024A518: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8024A51C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8024A520: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8024A524: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8024A528: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8024A52C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8024A530: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8024A534: jr          $ra
    // 0x8024A538: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x8024A538: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void D_802491A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802491A0: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x802491A4: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802491A8: lh          $t7, 0x1A($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X1A);
    // 0x802491AC: sh          $t7, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r15;
    // 0x802491B0: lw          $t8, 0xC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC);
    // 0x802491B4: jr          $ra
    // 0x802491B8: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    return;
    // 0x802491B8: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
;}
RECOMP_FUNC void D_8023EFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023EFD0: blez        $a1, L_8023F050
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8023EFD4: nop
    
            goto L_8023F050;
    }
    // 0x8023EFD4: nop

    // 0x8023EFD8: addiu       $t3, $zero, 0x2000
    ctx->r11 = ADD32(0, 0X2000);
    // 0x8023EFDC: sltu        $at, $a1, $t3
    ctx->r1 = ctx->r5 < ctx->r11 ? 1 : 0;
    // 0x8023EFE0: beq         $at, $zero, L_8023F058
    if (ctx->r1 == 0) {
        // 0x8023EFE4: nop
    
            goto L_8023F058;
    }
    // 0x8023EFE4: nop

    // 0x8023EFE8: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8023EFEC: addu        $t1, $a0, $a1
    ctx->r9 = ADD32(ctx->r4, ctx->r5);
    // 0x8023EFF0: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x8023EFF4: beq         $at, $zero, L_8023F050
    if (ctx->r1 == 0) {
        // 0x8023EFF8: nop
    
            goto L_8023F050;
    }
    // 0x8023EFF8: nop

    // 0x8023EFFC: andi        $t2, $t0, 0xF
    ctx->r10 = ctx->r8 & 0XF;
    // 0x8023F000: beq         $t2, $zero, L_8023F020
    if (ctx->r10 == 0) {
        // 0x8023F004: addiu       $t1, $t1, -0x10
        ctx->r9 = ADD32(ctx->r9, -0X10);
            goto L_8023F020;
    }
    // 0x8023F004: addiu       $t1, $t1, -0x10
    ctx->r9 = ADD32(ctx->r9, -0X10);
    // 0x8023F008: subu        $t0, $t0, $t2
    ctx->r8 = SUB32(ctx->r8, ctx->r10);
    // 0x8023F00C: cache       0x15, 0x0($t0)

    // 0x8023F010: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x8023F014: beq         $at, $zero, L_8023F050
    if (ctx->r1 == 0) {
        // 0x8023F018: nop
    
            goto L_8023F050;
    }
    // 0x8023F018: nop

    // 0x8023F01C: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
L_8023F020:
    // 0x8023F020: andi        $t2, $t1, 0xF
    ctx->r10 = ctx->r9 & 0XF;
    // 0x8023F024: beq         $t2, $zero, L_8023F040
    if (ctx->r10 == 0) {
        // 0x8023F028: nop
    
            goto L_8023F040;
    }
    // 0x8023F028: nop

    // 0x8023F02C: subu        $t1, $t1, $t2
    ctx->r9 = SUB32(ctx->r9, ctx->r10);
    // 0x8023F030: cache       0x15, 0x10($t1)

    // 0x8023F034: sltu        $at, $t1, $t0
    ctx->r1 = ctx->r9 < ctx->r8 ? 1 : 0;
    // 0x8023F038: bne         $at, $zero, L_8023F050
    if (ctx->r1 != 0) {
        // 0x8023F03C: nop
    
            goto L_8023F050;
    }
    // 0x8023F03C: nop

L_8023F040:
    // 0x8023F040: cache       0x11, 0x0($t0)

    // 0x8023F044: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x8023F048: bne         $at, $zero, L_8023F040
    if (ctx->r1 != 0) {
        // 0x8023F04C: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_8023F040;
    }
    // 0x8023F04C: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
L_8023F050:
    // 0x8023F050: jr          $ra
    // 0x8023F054: nop

    return;
    // 0x8023F054: nop

L_8023F058:
    // 0x8023F058: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x8023F05C: addu        $t1, $t0, $t3
    ctx->r9 = ADD32(ctx->r8, ctx->r11);
    // 0x8023F060: addiu       $t1, $t1, -0x10
    ctx->r9 = ADD32(ctx->r9, -0X10);
L_8023F064:
    // 0x8023F064: cache       0x01, 0x0($t0)

    // 0x8023F068: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x8023F06C: bne         $at, $zero, L_8023F064
    if (ctx->r1 != 0) {
        // 0x8023F070: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_8023F064;
    }
    // 0x8023F070: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x8023F074: jr          $ra
    // 0x8023F078: nop

    return;
    // 0x8023F078: nop

;}
RECOMP_FUNC void D_802DB808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DB888: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DB88C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802DB890: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802DB894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802DB898: jal         0x8030998C
    // 0x802DB89C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    static_3_8030998C(rdram, ctx);
        goto after_0;
    // 0x802DB89C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x802DB8A0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802DB8A4: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802DB8A8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802DB8AC: addiu       $t6, $zero, 0x41
    ctx->r14 = ADD32(0, 0X41);
    // 0x802DB8B0: sb          $v0, 0x48($v1)
    MEM_B(0X48, ctx->r3) = ctx->r2;
    // 0x802DB8B4: sb          $t6, 0x51($v1)
    MEM_B(0X51, ctx->r3) = ctx->r14;
    // 0x802DB8B8: sh          $zero, 0x52($v1)
    MEM_H(0X52, ctx->r3) = 0;
    // 0x802DB8BC: sw          $zero, 0x54($v1)
    MEM_W(0X54, ctx->r3) = 0;
    // 0x802DB8C0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802DB8C4: sw          $zero, 0x89C($a0)
    MEM_W(0X89C, ctx->r4) = 0;
    // 0x802DB8C8: sw          $zero, 0x8A4($a0)
    MEM_W(0X8A4, ctx->r4) = 0;
    // 0x802DB8CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802DB8D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802DB8D4: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x802DB8D8: sb          $zero, 0x5D($v1)
    MEM_B(0X5D, ctx->r3) = 0;
    // 0x802DB8DC: sb          $zero, 0x5E($v1)
    MEM_B(0X5E, ctx->r3) = 0;
    // 0x802DB8E0: sb          $zero, 0x5F($v1)
    MEM_B(0X5F, ctx->r3) = 0;
    // 0x802DB8E4: sb          $zero, 0x60($v1)
    MEM_B(0X60, ctx->r3) = 0;
    // 0x802DB8E8: sb          $zero, 0x61($v1)
    MEM_B(0X61, ctx->r3) = 0;
    // 0x802DB8EC: sb          $zero, 0x62($v1)
    MEM_B(0X62, ctx->r3) = 0;
    // 0x802DB8F0: sb          $zero, 0x63($v1)
    MEM_B(0X63, ctx->r3) = 0;
    // 0x802DB8F4: sb          $zero, 0x64($v1)
    MEM_B(0X64, ctx->r3) = 0;
    // 0x802DB8F8: sb          $zero, 0x66($v1)
    MEM_B(0X66, ctx->r3) = 0;
    // 0x802DB8FC: sw          $zero, 0x28($v1)
    MEM_W(0X28, ctx->r3) = 0;
    // 0x802DB900: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802DB904: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802DB908: jr          $ra
    // 0x802DB90C: swc1        $f4, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f4.u32l;
    return;
    // 0x802DB90C: swc1        $f4, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_802D2924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D29A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D29A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D29AC: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802D29B0: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x802D29B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802D29B8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x802D29BC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802D29C0: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x802D29C4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D29C8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802D29CC: bc1fl       L_802D2A00
    if (!c1cs) {
        // 0x802D29D0: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_802D2A00;
    }
    goto skip_0;
    // 0x802D29D0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_0:
    // 0x802D29D4: jal         0x80231A24
    // 0x802D29D8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802D29D8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802D29DC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D29E0: jal         0x80231A24
    // 0x802D29E4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802D29E4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x802D29E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D29EC: jal         0x8030303C
    // 0x802D29F0: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    static_3_8030303C(rdram, ctx);
        goto after_2;
    // 0x802D29F0: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_2:
    // 0x802D29F4: b           L_802D2A0C
    // 0x802D29F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802D2A0C;
    // 0x802D29F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D29FC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_802D2A00:
    // 0x802D2A00: jal         0x8030303C
    // 0x802D2A04: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_8030303C(rdram, ctx);
        goto after_3;
    // 0x802D2A04: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
    // 0x802D2A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D2A0C:
    // 0x802D2A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2A10: jr          $ra
    // 0x802D2A14: nop

    return;
    // 0x802D2A14: nop

;}
RECOMP_FUNC void D_8021FF58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021FF58: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021FF5C: jr          $ra
    // 0x8021FF60: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
    return;
    // 0x8021FF60: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void D_80281C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281C80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80281C84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80281C88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80281C8C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80281C90: addiu       $s0, $a0, 0x70
    ctx->r16 = ADD32(ctx->r4, 0X70);
    // 0x80281C94: jal         0x802B1E68
    // 0x80281C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802B1E68(rdram, ctx);
        goto after_0;
    // 0x80281C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80281C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80281CA0: jal         0x80318C9C
    // 0x80281CA4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80318C9C(rdram, ctx);
        goto after_1;
    // 0x80281CA4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80281CA8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80281CAC: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x80281CB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281CB4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80281CB8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80281CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80281CC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281CC4: jal         0x802B2224
    // 0x80281CC8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B2224(rdram, ctx);
        goto after_2;
    // 0x80281CC8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80281CCC: lui         $at, 0xC3AF
    ctx->r1 = S32(0XC3AF << 16);
    // 0x80281CD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80281CD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80281CDC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80281CE0: lui         $a3, 0x44FA
    ctx->r7 = S32(0X44FA << 16);
    // 0x80281CE4: jal         0x802B2224
    // 0x80281CE8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B2224(rdram, ctx);
        goto after_3;
    // 0x80281CE8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80281CEC: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x80281CF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80281CF4: lui         $a3, 0x455A
    ctx->r7 = S32(0X455A << 16);
    // 0x80281CF8: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x80281CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80281D00: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80281D04: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80281D08: jal         0x802B2224
    // 0x80281D0C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B2224(rdram, ctx);
        goto after_4;
    // 0x80281D0C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x80281D10: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80281D14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80281D18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80281D1C: jal         0x802AA498
    // 0x80281D20: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    static_3_802AA498(rdram, ctx);
        goto after_5;
    // 0x80281D20: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    after_5:
    // 0x80281D24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80281D28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80281D2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80281D30: jr          $ra
    // 0x80281D34: nop

    return;
    // 0x80281D34: nop

;}
RECOMP_FUNC void D_8022BB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022BB5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BB60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BB64: beq         $a0, $a1, L_8022BBE0
    if (ctx->r4 == ctx->r5) {
        // 0x8022BB68: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_8022BBE0;
    }
    // 0x8022BB68: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8022BB6C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8022BB70: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8022BB74: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x8022BB78: subu        $a1, $a2, $a0
    ctx->r5 = SUB32(ctx->r6, ctx->r4);
    // 0x8022BB7C: slti        $at, $t6, 0x14
    ctx->r1 = SIGNED(ctx->r14) < 0X14 ? 1 : 0;
    // 0x8022BB80: bnel        $at, $zero, L_8022BBA0
    if (ctx->r1 != 0) {
        // 0x8022BB84: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8022BBA0;
    }
    goto skip_0;
    // 0x8022BB84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    skip_0:
    // 0x8022BB88: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022BB8C: jal         0x80231A24
    // 0x8022BB90: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022BB90: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8022BB94: b           L_8022BBE4
    // 0x8022BB98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022BBE4;
    // 0x8022BB98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BB9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
L_8022BBA0:
    // 0x8022BBA0: jal         0x8022B2F4
    // 0x8022BBA4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8022B2F4(rdram, ctx);
        goto after_1;
    // 0x8022BBA4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x8022BBA8: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8022BBAC: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8022BBB0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8022BBB4: beq         $v0, $zero, L_8022BBE0
    if (ctx->r2 == 0) {
        // 0x8022BBB8: lw          $a2, 0x1C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1C);
            goto L_8022BBE0;
    }
    // 0x8022BBB8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BBBC: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8022BBC0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8022BBC4: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8022BBC8: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x8022BBCC: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8022BBD0: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x8022BBD4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8022BBD8: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x8022BBDC: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
L_8022BBE0:
    // 0x8022BBE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022BBE4:
    // 0x8022BBE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022BBE8: jr          $ra
    // 0x8022BBEC: nop

    return;
    // 0x8022BBEC: nop

;}
RECOMP_FUNC void D_802D9254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D92D4: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802D92D8: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x802D92DC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802D92E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D92E4: slti        $at, $v1, 0x7
    ctx->r1 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    // 0x802D92E8: bne         $at, $zero, L_802D92F4
    if (ctx->r1 != 0) {
        // 0x802D92EC: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_802D92F4;
    }
    // 0x802D92EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802D92F0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802D92F4:
    // 0x802D92F4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x802D92F8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802D92FC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802D9300: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802D9304: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802D9308: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D930C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x802D9310: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x802D9314: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D9318: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802D931C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802D9320: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802D9324: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D9328: slti        $at, $v1, 0xF
    ctx->r1 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
    // 0x802D932C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D9330: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D9334: mul.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802D9338: beq         $at, $zero, L_802D93A0
    if (ctx->r1 == 0) {
        // 0x802D933C: swc1        $f10, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
            goto L_802D93A0;
    }
    // 0x802D933C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x802D9340: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D9344: jal         0x802AEE54
    // 0x802D9348: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    static_3_802AEE54(rdram, ctx);
        goto after_0;
    // 0x802D9348: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x802D934C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D9350: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D9354: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x802D9358: jal         0x802AEE54
    // 0x802D935C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_1;
    // 0x802D935C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x802D9360: jal         0x803183C8
    // 0x802D9364: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_803183C8(rdram, ctx);
        goto after_2;
    // 0x802D9364: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x802D9368: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802D936C: jal         0x803183C0
    // 0x802D9370: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    static_3_803183C0(rdram, ctx);
        goto after_3;
    // 0x802D9370: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x802D9374: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802D9378: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D937C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D9380: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802D9384: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D9388: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D938C: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802D9390: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802D9394: mul.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802D9398: b           L_802D93B0
    // 0x802D939C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
        goto L_802D93B0;
    // 0x802D939C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_802D93A0:
    // 0x802D93A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D93A4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D93A8: nop

    // 0x802D93AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_802D93B0:
    // 0x802D93B0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x802D93B4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802D93B8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802D93BC: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802D93C0: mul.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x802D93C4: bc1f        L_802D93D0
    if (!c1cs) {
        // 0x802D93C8: nop
    
            goto L_802D93D0;
    }
    // 0x802D93C8: nop

    // 0x802D93CC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_802D93D0:
    // 0x802D93D0: mul.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x802D93D4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802D93D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D93DC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802D93E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D93E4: mul.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x802D93E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D93EC: add.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
    // 0x802D93F0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D93F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802D93F8: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x802D93FC: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802D9400: jr          $ra
    // 0x802D9404: swc1        $f18, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f18.u32l;
    return;
    // 0x802D9404: swc1        $f18, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f18.u32l;
;}
RECOMP_FUNC void D_802F04F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F0578: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802F057C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802F0580: beq         $a0, $zero, L_802F05B8
    if (ctx->r4 == 0) {
        // 0x802F0584: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802F05B8;
    }
    // 0x802F0584: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802F0588: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802F058C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802F0590: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x802F0594: jal         0x80320D30
    // 0x802F0598: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80320D30(rdram, ctx);
        goto after_0;
    // 0x802F0598: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802F059C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802F05A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802F05A4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802F05A8: beql        $t8, $zero, L_802F05BC
    if (ctx->r24 == 0) {
        // 0x802F05AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802F05BC;
    }
    goto skip_0;
    // 0x802F05AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802F05B0: jal         0x802C681C
    // 0x802F05B4: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802F05B4: nop

    after_1:
L_802F05B8:
    // 0x802F05B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802F05BC:
    // 0x802F05BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802F05C0: jr          $ra
    // 0x802F05C4: nop

    return;
    // 0x802F05C4: nop

;}
RECOMP_FUNC void func_8029ED40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029EDC0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029EDC4: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029EDC8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8029EDCC: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8029EDD0: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8029EDD4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029EDD8: bc1f        L_8029EDF8
    if (!c1cs) {
        // 0x8029EDDC: nop
    
            goto L_8029EDF8;
    }
    // 0x8029EDDC: nop

    // 0x8029EDE0: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029EDE4: sub.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f18.fl;
L_8029EDE8:
    // 0x8029EDE8: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8029EDEC: nop

    // 0x8029EDF0: bc1tl       L_8029EDE8
    if (c1cs) {
        // 0x8029EDF4: sub.s       $f12, $f12, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f18.fl;
            goto L_8029EDE8;
    }
    goto skip_0;
    // 0x8029EDF4: sub.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f18.fl;
    skip_0:
L_8029EDF8:
    // 0x8029EDF8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029EDFC: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029EE00: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029EE04: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029EE08: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8029EE0C: nop

    // 0x8029EE10: bc1fl       L_8029EE30
    if (!c1cs) {
        // 0x8029EE14: c.lt.s      $f16, $f14
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
            goto L_8029EE30;
    }
    goto skip_1;
    // 0x8029EE14: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    skip_1:
    // 0x8029EE18: add.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f18.fl;
L_8029EE1C:
    // 0x8029EE1C: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8029EE20: nop

    // 0x8029EE24: bc1tl       L_8029EE1C
    if (c1cs) {
        // 0x8029EE28: add.s       $f12, $f12, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f18.fl;
            goto L_8029EE1C;
    }
    goto skip_2;
    // 0x8029EE28: add.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f18.fl;
    skip_2:
    // 0x8029EE2C: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
L_8029EE30:
    // 0x8029EE30: nop

    // 0x8029EE34: bc1fl       L_8029EE54
    if (!c1cs) {
        // 0x8029EE38: c.lt.s      $f14, $f20
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
            goto L_8029EE54;
    }
    goto skip_3;
    // 0x8029EE38: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    skip_3:
    // 0x8029EE3C: sub.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f18.fl;
L_8029EE40:
    // 0x8029EE40: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x8029EE44: nop

    // 0x8029EE48: bc1tl       L_8029EE40
    if (c1cs) {
        // 0x8029EE4C: sub.s       $f14, $f14, $f18
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f18.fl;
            goto L_8029EE40;
    }
    goto skip_4;
    // 0x8029EE4C: sub.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f18.fl;
    skip_4:
    // 0x8029EE50: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
L_8029EE54:
    // 0x8029EE54: nop

    // 0x8029EE58: bc1fl       L_8029EE78
    if (!c1cs) {
        // 0x8029EE5C: sub.s       $f0, $f14, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
            goto L_8029EE78;
    }
    goto skip_5;
    // 0x8029EE5C: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
    skip_5:
    // 0x8029EE60: add.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f18.fl;
L_8029EE64:
    // 0x8029EE64: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8029EE68: nop

    // 0x8029EE6C: bc1tl       L_8029EE64
    if (c1cs) {
        // 0x8029EE70: add.s       $f14, $f14, $f18
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f18.fl;
            goto L_8029EE64;
    }
    goto skip_6;
    // 0x8029EE70: add.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f18.fl;
    skip_6:
    // 0x8029EE74: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
L_8029EE78:
    // 0x8029EE78: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8029EE7C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8029EE80: bc1fl       L_8029EE94
    if (!c1cs) {
        // 0x8029EE84: c.lt.s      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
            goto L_8029EE94;
    }
    goto skip_7;
    // 0x8029EE84: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    skip_7:
    // 0x8029EE88: b           L_8029EEA4
    // 0x8029EE8C: sub.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f18.fl;
        goto L_8029EEA4;
    // 0x8029EE8C: sub.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x8029EE90: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
L_8029EE94:
    // 0x8029EE94: nop

    // 0x8029EE98: bc1fl       L_8029EEA8
    if (!c1cs) {
        // 0x8029EE9C: ldc1        $f20, 0x8($sp)
        CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
            goto L_8029EEA8;
    }
    goto skip_8;
    // 0x8029EE9C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    skip_8:
    // 0x8029EEA0: add.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f18.fl;
L_8029EEA4:
    // 0x8029EEA4: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_8029EEA8:
    // 0x8029EEA8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8029EEAC: jr          $ra
    // 0x8029EEB0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8029EEB0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void D_80238590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238590: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x80238594: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80238598: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8023859C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x802385A0: addiu       $s3, $sp, 0x48
    ctx->r19 = ADD32(ctx->r29, 0X48);
    // 0x802385A4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802385A8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x802385AC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x802385B0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802385B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802385B8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802385BC: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x802385C0: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x802385C4: jal         0x802384CC
    // 0x802385C8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_802384CC(rdram, ctx);
        goto after_0;
    // 0x802385C8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x802385CC: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x802385D0: addiu       $s4, $sp, 0x140
    ctx->r20 = ADD32(ctx->r29, 0X140);
    // 0x802385D4: addiu       $s0, $sp, 0x58
    ctx->r16 = ADD32(ctx->r29, 0X58);
    // 0x802385D8: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
L_802385DC:
    // 0x802385DC: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x802385E0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x802385E4: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x802385E8: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x802385EC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x802385F0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802385F4: sw          $t7, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r15;
    // 0x802385F8: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x802385FC: sw          $t8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r24;
L_80238600:
    // 0x80238600: lw          $t0, 0x18($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X18);
    // 0x80238604: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80238608: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8023860C: sw          $t0, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r8;
    // 0x80238610: lw          $t1, 0x58($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X58);
    // 0x80238614: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80238618: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8023861C: sw          $t1, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r9;
    // 0x80238620: lbu         $t2, 0x94($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X94);
    // 0x80238624: sb          $t2, 0x88($a1)
    MEM_B(0X88, ctx->r5) = ctx->r10;
    // 0x80238628: lbu         $t3, 0xA4($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XA4);
    // 0x8023862C: sb          $t3, 0x98($a1)
    MEM_B(0X98, ctx->r5) = ctx->r11;
    // 0x80238630: lw          $t4, 0xA8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XA8);
    // 0x80238634: sw          $t4, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r12;
    // 0x80238638: lw          $t5, 0xC($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XC);
    // 0x8023863C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80238640: lw          $t6, 0x4C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4C);
    // 0x80238644: sw          $t6, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r14;
    // 0x80238648: lbu         $t7, 0x95($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X95);
    // 0x8023864C: sb          $t7, 0x89($a1)
    MEM_B(0X89, ctx->r5) = ctx->r15;
    // 0x80238650: lbu         $t8, 0xA5($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XA5);
    // 0x80238654: sb          $t8, 0x99($a1)
    MEM_B(0X99, ctx->r5) = ctx->r24;
    // 0x80238658: lw          $t9, 0xAC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XAC);
    // 0x8023865C: sw          $t9, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r25;
    // 0x80238660: lw          $t0, 0x10($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X10);
    // 0x80238664: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x80238668: lw          $t1, 0x50($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X50);
    // 0x8023866C: sw          $t1, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r9;
    // 0x80238670: lbu         $t2, 0x96($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X96);
    // 0x80238674: sb          $t2, 0x8A($a1)
    MEM_B(0X8A, ctx->r5) = ctx->r10;
    // 0x80238678: lbu         $t3, 0xA6($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XA6);
    // 0x8023867C: sb          $t3, 0x9A($a1)
    MEM_B(0X9A, ctx->r5) = ctx->r11;
    // 0x80238680: lw          $t4, 0xB0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XB0);
    // 0x80238684: sw          $t4, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r12;
    // 0x80238688: lw          $t5, 0x14($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X14);
    // 0x8023868C: sw          $t5, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r13;
    // 0x80238690: lw          $t6, 0x54($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X54);
    // 0x80238694: sw          $t6, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r14;
    // 0x80238698: lbu         $t7, 0x97($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X97);
    // 0x8023869C: sb          $t7, 0x8B($a1)
    MEM_B(0X8B, ctx->r5) = ctx->r15;
    // 0x802386A0: lbu         $t8, 0xA7($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XA7);
    // 0x802386A4: sb          $t8, 0x9B($a1)
    MEM_B(0X9B, ctx->r5) = ctx->r24;
    // 0x802386A8: lw          $t9, 0xB4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XB4);
    // 0x802386AC: bne         $a0, $s0, L_80238600
    if (ctx->r4 != ctx->r16) {
        // 0x802386B0: sw          $t9, 0xA8($v0)
        MEM_W(0XA8, ctx->r2) = ctx->r25;
            goto L_80238600;
    }
    // 0x802386B0: sw          $t9, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r25;
    // 0x802386B4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802386B8: jal         0x802381D4
    // 0x802386BC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    static_3_802381D4(rdram, ctx);
        goto after_1;
    // 0x802386BC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_1:
    // 0x802386C0: lh          $t0, 0x140($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X140);
    // 0x802386C4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x802386C8: beq         $t0, $s5, L_802386D8
    if (ctx->r8 == ctx->r21) {
        // 0x802386CC: sltu        $at, $t1, $s2
        ctx->r1 = ctx->r9 < ctx->r18 ? 1 : 0;
            goto L_802386D8;
    }
    // 0x802386CC: sltu        $at, $t1, $s2
    ctx->r1 = ctx->r9 < ctx->r18 ? 1 : 0;
    // 0x802386D0: bnel        $at, $zero, L_802385DC
    if (ctx->r1 != 0) {
        // 0x802386D4: lw          $t6, 0x4C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X4C);
            goto L_802385DC;
    }
    goto skip_0;
    // 0x802386D4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    skip_0:
L_802386D8:
    // 0x802386D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802386DC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802386E0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802386E4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802386E8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802386EC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x802386F0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x802386F4: jr          $ra
    // 0x802386F8: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    return;
    // 0x802386F8: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void D_802EA6D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EA758: jr          $ra
    // 0x802EA75C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802EA75C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_80239BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80239BF0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80239BF4: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80239BF8: lbu         $t6, 0x5B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5B);
    // 0x80239BFC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80239C00: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80239C04: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80239C08: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80239C0C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80239C10: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80239C14: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80239C18: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80239C1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80239C20: addu        $v1, $a1, $t7
    ctx->r3 = ADD32(ctx->r5, ctx->r15);
    // 0x80239C24: lhu         $at, 0x0($v1)
    ctx->r1 = MEM_HU(ctx->r3, 0X0);
    // 0x80239C28: addiu       $s4, $sp, 0x4C
    ctx->r20 = ADD32(ctx->r29, 0X4C);
    // 0x80239C2C: sh          $at, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r1;
    // 0x80239C30: lhu         $t1, 0x4C($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X4C);
    // 0x80239C34: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80239C38: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80239C3C: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x80239C40: beq         $s0, $t1, L_80239C70
    if (ctx->r16 == ctx->r9) {
        // 0x80239C44: or          $s6, $a3, $zero
        ctx->r22 = ctx->r7 | 0;
            goto L_80239C70;
    }
    // 0x80239C44: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x80239C48: lbu         $t2, 0x4C($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4C);
    // 0x80239C4C: lbu         $s1, 0x63($sp)
    ctx->r17 = MEM_BU(ctx->r29, 0X63);
    // 0x80239C50: blez        $t2, L_80239C60
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80239C54: nop
    
            goto L_80239C60;
    }
    // 0x80239C54: nop

    // 0x80239C58: b           L_80239C68
    // 0x80239C5C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_80239C68;
    // 0x80239C5C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80239C60:
    // 0x80239C60: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x80239C64: nop

L_80239C68:
    // 0x80239C68: b           L_80239C94
    // 0x80239C6C: lbu         $t3, 0x4D($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4D);
        goto L_80239C94;
    // 0x80239C6C: lbu         $t3, 0x4D($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4D);
L_80239C70:
    // 0x80239C70: lbu         $s1, 0x63($sp)
    ctx->r17 = MEM_BU(ctx->r29, 0X63);
    // 0x80239C74: nop

    // 0x80239C78: blez        $s1, L_80239C88
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80239C7C: nop
    
            goto L_80239C88;
    }
    // 0x80239C7C: nop

    // 0x80239C80: b           L_80239C90
    // 0x80239C84: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_80239C90;
    // 0x80239C84: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80239C88:
    // 0x80239C88: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x80239C8C: nop

L_80239C90:
    // 0x80239C90: lbu         $t3, 0x4D($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4D);
L_80239C94:
    // 0x80239C94: lhu         $t4, 0x4C($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X4C);
    // 0x80239C98: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80239C9C: beq         $at, $zero, L_80239CB4
    if (ctx->r1 == 0) {
        // 0x80239CA0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80239CB4;
    }
    // 0x80239CA0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80239CA4: beq         $s0, $t4, L_80239CB8
    if (ctx->r16 == ctx->r12) {
        // 0x80239CA8: lw          $t5, 0x64($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X64);
            goto L_80239CB8;
    }
    // 0x80239CA8: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x80239CAC: b           L_80239DCC
    // 0x80239CB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80239DCC;
    // 0x80239CB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80239CB4:
    // 0x80239CB4: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
L_80239CB8:
    // 0x80239CB8: lhu         $at, 0x0($s4)
    ctx->r1 = MEM_HU(ctx->r20, 0X0);
    // 0x80239CBC: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x80239CC0: sh          $at, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r1;
    // 0x80239CC4: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x80239CC8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80239CCC: bne         $t9, $s0, L_80239CD8
    if (ctx->r25 != ctx->r16) {
        // 0x80239CD0: andi        $a3, $s1, 0xFF
        ctx->r7 = ctx->r17 & 0XFF;
            goto L_80239CD8;
    }
    // 0x80239CD0: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    // 0x80239CD4: sh          $s5, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r21;
L_80239CD8:
    // 0x80239CD8: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    // 0x80239CDC: jal         0x80239E44
    // 0x80239CE0: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    static_3_80239E44(rdram, ctx);
        goto after_0;
    // 0x80239CE0: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    after_0:
    // 0x80239CE4: beq         $v0, $zero, L_80239CF8
    if (ctx->r2 == 0) {
        // 0x80239CE8: lhu         $t8, 0x4C($sp)
        ctx->r24 = MEM_HU(ctx->r29, 0X4C);
            goto L_80239CF8;
    }
    // 0x80239CE8: lhu         $t8, 0x4C($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X4C);
    // 0x80239CEC: b           L_80239DD0
    // 0x80239CF0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80239DD0;
    // 0x80239CF0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80239CF4: lhu         $t8, 0x4C($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X4C);
L_80239CF8:
    // 0x80239CF8: lhu         $t0, 0x4C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X4C);
    // 0x80239CFC: bne         $s0, $t8, L_80239D0C
    if (ctx->r16 != ctx->r24) {
        // 0x80239D00: nop
    
            goto L_80239D0C;
    }
    // 0x80239D00: nop

    // 0x80239D04: b           L_80239DCC
    // 0x80239D08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80239DCC;
    // 0x80239D08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80239D0C:
    // 0x80239D0C: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x80239D10: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x80239D14: slt         $at, $t0, $v0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80239D18: bne         $at, $zero, L_80239DA4
    if (ctx->r1 != 0) {
        // 0x80239D1C: lhu         $t3, 0x4C($sp)
        ctx->r11 = MEM_HU(ctx->r29, 0X4C);
            goto L_80239DA4;
    }
    // 0x80239D1C: lhu         $t3, 0x4C($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X4C);
L_80239D20:
    // 0x80239D20: lhu         $at, 0x0($s4)
    ctx->r1 = MEM_HU(ctx->r20, 0X0);
    // 0x80239D24: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80239D28: sh          $at, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r1;
    // 0x80239D2C: lbu         $t3, 0x4D($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4D);
    // 0x80239D30: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80239D34: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80239D38: addu        $t6, $s3, $t4
    ctx->r14 = ADD32(ctx->r19, ctx->r12);
    // 0x80239D3C: lhu         $at, 0x0($t6)
    ctx->r1 = MEM_HU(ctx->r14, 0X0);
    // 0x80239D40: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    // 0x80239D44: sh          $at, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r1;
    // 0x80239D48: lbu         $a1, 0x49($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X49);
    // 0x80239D4C: nop

    // 0x80239D50: sll         $t8, $a1, 1
    ctx->r24 = S32(ctx->r5 << 1);
    // 0x80239D54: addu        $t0, $s3, $t8
    ctx->r8 = ADD32(ctx->r19, ctx->r24);
    // 0x80239D58: jal         0x80239E44
    // 0x80239D5C: sh          $s5, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r21;
    static_3_80239E44(rdram, ctx);
        goto after_1;
    // 0x80239D5C: sh          $s5, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r21;
    after_1:
    // 0x80239D60: beq         $v0, $zero, L_80239D74
    if (ctx->r2 == 0) {
        // 0x80239D64: lbu         $t1, 0x4C($sp)
        ctx->r9 = MEM_BU(ctx->r29, 0X4C);
            goto L_80239D74;
    }
    // 0x80239D64: lbu         $t1, 0x4C($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4C);
    // 0x80239D68: b           L_80239DD0
    // 0x80239D6C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80239DD0;
    // 0x80239D6C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80239D70: lbu         $t1, 0x4C($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4C);
L_80239D74:
    // 0x80239D74: lhu         $t2, 0x4C($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X4C);
    // 0x80239D78: beq         $s1, $t1, L_80239D8C
    if (ctx->r17 == ctx->r9) {
        // 0x80239D7C: nop
    
            goto L_80239D8C;
    }
    // 0x80239D7C: nop

    // 0x80239D80: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x80239D84: b           L_80239DA4
    // 0x80239D88: lhu         $t3, 0x4C($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X4C);
        goto L_80239DA4;
    // 0x80239D88: lhu         $t3, 0x4C($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X4C);
L_80239D8C:
    // 0x80239D8C: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x80239D90: nop

    // 0x80239D94: slt         $at, $t2, $v0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80239D98: beq         $at, $zero, L_80239D20
    if (ctx->r1 == 0) {
        // 0x80239D9C: nop
    
            goto L_80239D20;
    }
    // 0x80239D9C: nop

    // 0x80239DA0: lhu         $t3, 0x4C($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X4C);
L_80239DA4:
    // 0x80239DA4: lbu         $t4, 0x4D($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X4D);
    // 0x80239DA8: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80239DAC: bne         $at, $zero, L_80239DBC
    if (ctx->r1 != 0) {
        // 0x80239DB0: sll         $t5, $t4, 1
        ctx->r13 = S32(ctx->r12 << 1);
            goto L_80239DBC;
    }
    // 0x80239DB0: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80239DB4: addu        $t6, $s3, $t5
    ctx->r14 = ADD32(ctx->r19, ctx->r13);
    // 0x80239DB8: sh          $s5, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r21;
L_80239DBC:
    // 0x80239DBC: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x80239DC0: lhu         $at, 0x0($s4)
    ctx->r1 = MEM_HU(ctx->r20, 0X0);
    // 0x80239DC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80239DC8: sh          $at, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r1;
L_80239DCC:
    // 0x80239DCC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80239DD0:
    // 0x80239DD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80239DD4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80239DD8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80239DDC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80239DE0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80239DE4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80239DE8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80239DEC: jr          $ra
    // 0x80239DF0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80239DF0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_802CD52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CD5AC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802CD5B0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802CD5B4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802CD5B8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802CD5BC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802CD5C0: addiu       $s0, $a0, 0x17F4
    ctx->r16 = ADD32(ctx->r4, 0X17F4);
    // 0x802CD5C4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802CD5C8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802CD5CC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802CD5D0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x802CD5D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD5D8: jal         0x8030D3D4
    // 0x802CD5DC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    static_3_8030D3D4(rdram, ctx);
        goto after_0;
    // 0x802CD5DC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_0:
    // 0x802CD5E0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802CD5E4: lui         $a3, 0x453C
    ctx->r7 = S32(0X453C << 16);
    // 0x802CD5E8: ori         $a3, $a3, 0x2000
    ctx->r7 = ctx->r7 | 0X2000;
    // 0x802CD5EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD5F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CD5F4: lui         $a2, 0xC52F
    ctx->r6 = S32(0XC52F << 16);
    // 0x802CD5F8: jal         0x8030D748
    // 0x802CD5FC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_1;
    // 0x802CD5FC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_1:
    // 0x802CD600: lui         $a2, 0xC518
    ctx->r6 = S32(0XC518 << 16);
    // 0x802CD604: lui         $a3, 0x4514
    ctx->r7 = S32(0X4514 << 16);
    // 0x802CD608: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802CD60C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CD610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD614: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CD618: jal         0x8030D748
    // 0x802CD61C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_2;
    // 0x802CD61C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_2:
    // 0x802CD620: lui         $a2, 0xC4ED
    ctx->r6 = S32(0XC4ED << 16);
    // 0x802CD624: lui         $a3, 0x44D3
    ctx->r7 = S32(0X44D3 << 16);
    // 0x802CD628: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802CD62C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CD630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD634: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CD638: jal         0x8030D748
    // 0x802CD63C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_3;
    // 0x802CD63C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_3:
    // 0x802CD640: lui         $a2, 0xC4AD
    ctx->r6 = S32(0XC4AD << 16);
    // 0x802CD644: lui         $a3, 0x449E
    ctx->r7 = S32(0X449E << 16);
    // 0x802CD648: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802CD64C: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802CD650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD654: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CD658: jal         0x8030D748
    // 0x802CD65C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_4;
    // 0x802CD65C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_4:
    // 0x802CD660: lui         $a2, 0xC410
    ctx->r6 = S32(0XC410 << 16);
    // 0x802CD664: lui         $a3, 0x4435
    ctx->r7 = S32(0X4435 << 16);
    // 0x802CD668: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CD66C: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802CD670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD674: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802CD678: jal         0x8030D748
    // 0x802CD67C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_5;
    // 0x802CD67C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_5:
    // 0x802CD680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD684: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802CD688: lui         $a2, 0xC386
    ctx->r6 = S32(0XC386 << 16);
    // 0x802CD68C: lui         $a3, 0x4234
    ctx->r7 = S32(0X4234 << 16);
    // 0x802CD690: jal         0x8030D748
    // 0x802CD694: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_6;
    // 0x802CD694: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_6:
    // 0x802CD698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD69C: jal         0x80318C9C
    // 0x802CD6A0: lui         $a1, 0x4361
    ctx->r5 = S32(0X4361 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_7;
    // 0x802CD6A0: lui         $a1, 0x4361
    ctx->r5 = S32(0X4361 << 16);
    after_7:
    // 0x802CD6A4: addiu       $s0, $s4, 0x1E80
    ctx->r16 = ADD32(ctx->r20, 0X1E80);
    // 0x802CD6A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD6AC: jal         0x8030D3D4
    // 0x802CD6B0: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    static_3_8030D3D4(rdram, ctx);
        goto after_8;
    // 0x802CD6B0: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_8:
    // 0x802CD6B4: lui         $a2, 0x4440
    ctx->r6 = S32(0X4440 << 16);
    // 0x802CD6B8: lui         $a3, 0x4563
    ctx->r7 = S32(0X4563 << 16);
    // 0x802CD6BC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CD6C0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CD6C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD6C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CD6CC: jal         0x8030D748
    // 0x802CD6D0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_9;
    // 0x802CD6D0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_9:
    // 0x802CD6D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD6D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CD6DC: lui         $a2, 0x432A
    ctx->r6 = S32(0X432A << 16);
    // 0x802CD6E0: lui         $a3, 0x454D
    ctx->r7 = S32(0X454D << 16);
    // 0x802CD6E4: jal         0x8030D748
    // 0x802CD6E8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_10;
    // 0x802CD6E8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_10:
    // 0x802CD6EC: lui         $a3, 0x4523
    ctx->r7 = S32(0X4523 << 16);
    // 0x802CD6F0: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802CD6F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD6F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CD6FC: lui         $a2, 0xC38C
    ctx->r6 = S32(0XC38C << 16);
    // 0x802CD700: jal         0x8030D748
    // 0x802CD704: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_11;
    // 0x802CD704: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_11:
    // 0x802CD708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD70C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CD710: lui         $a2, 0xC44F
    ctx->r6 = S32(0XC44F << 16);
    // 0x802CD714: lui         $a3, 0x44ED
    ctx->r7 = S32(0X44ED << 16);
    // 0x802CD718: jal         0x8030D748
    // 0x802CD71C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_12;
    // 0x802CD71C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_12:
    // 0x802CD720: lui         $a3, 0x44BE
    ctx->r7 = S32(0X44BE << 16);
    // 0x802CD724: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802CD728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD72C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802CD730: lui         $a2, 0xC385
    ctx->r6 = S32(0XC385 << 16);
    // 0x802CD734: jal         0x8030D748
    // 0x802CD738: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_13;
    // 0x802CD738: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_13:
    // 0x802CD73C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD740: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802CD744: lui         $a2, 0xC306
    ctx->r6 = S32(0XC306 << 16);
    // 0x802CD748: lui         $a3, 0x4320
    ctx->r7 = S32(0X4320 << 16);
    // 0x802CD74C: jal         0x8030D748
    // 0x802CD750: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_14;
    // 0x802CD750: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_14:
    // 0x802CD754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD758: jal         0x80318C9C
    // 0x802CD75C: lui         $a1, 0x4307
    ctx->r5 = S32(0X4307 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_15;
    // 0x802CD75C: lui         $a1, 0x4307
    ctx->r5 = S32(0X4307 << 16);
    after_15:
    // 0x802CD760: addiu       $s0, $s4, 0x250C
    ctx->r16 = ADD32(ctx->r20, 0X250C);
    // 0x802CD764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD768: jal         0x8030D3D4
    // 0x802CD76C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    static_3_8030D3D4(rdram, ctx);
        goto after_16;
    // 0x802CD76C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_16:
    // 0x802CD770: lui         $a3, 0x451A
    ctx->r7 = S32(0X451A << 16);
    // 0x802CD774: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802CD778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD77C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CD780: lui         $a2, 0x4382
    ctx->r6 = S32(0X4382 << 16);
    // 0x802CD784: jal         0x8030D748
    // 0x802CD788: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_17;
    // 0x802CD788: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_17:
    // 0x802CD78C: lui         $a3, 0x44CB
    ctx->r7 = S32(0X44CB << 16);
    // 0x802CD790: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802CD794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD798: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CD79C: lui         $a2, 0x43DC
    ctx->r6 = S32(0X43DC << 16);
    // 0x802CD7A0: jal         0x8030D748
    // 0x802CD7A4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_18;
    // 0x802CD7A4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_18:
    // 0x802CD7A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD7AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CD7B0: lui         $a2, 0x4366
    ctx->r6 = S32(0X4366 << 16);
    // 0x802CD7B4: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x802CD7B8: jal         0x8030D748
    // 0x802CD7BC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_19;
    // 0x802CD7BC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_19:
    // 0x802CD7C0: lui         $a3, 0x44E2
    ctx->r7 = S32(0X44E2 << 16);
    // 0x802CD7C4: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802CD7C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD7CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CD7D0: lui         $a2, 0xC3E6
    ctx->r6 = S32(0XC3E6 << 16);
    // 0x802CD7D4: jal         0x8030D748
    // 0x802CD7D8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_20;
    // 0x802CD7D8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_20:
    // 0x802CD7DC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802CD7E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD7E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802CD7E8: lui         $a3, 0xC0C0
    ctx->r7 = S32(0XC0C0 << 16);
    // 0x802CD7EC: jal         0x8030D748
    // 0x802CD7F0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_21;
    // 0x802CD7F0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_21:
    // 0x802CD7F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD7F8: jal         0x80318C9C
    // 0x802CD7FC: lui         $a1, 0x433E
    ctx->r5 = S32(0X433E << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_22;
    // 0x802CD7FC: lui         $a1, 0x433E
    ctx->r5 = S32(0X433E << 16);
    after_22:
    // 0x802CD800: addiu       $s0, $s4, 0x2B98
    ctx->r16 = ADD32(ctx->r20, 0X2B98);
    // 0x802CD804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD808: jal         0x8030D3D4
    // 0x802CD80C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    static_3_8030D3D4(rdram, ctx);
        goto after_23;
    // 0x802CD80C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_23:
    // 0x802CD810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD814: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CD818: lui         $a2, 0x44AF
    ctx->r6 = S32(0X44AF << 16);
    // 0x802CD81C: lui         $a3, 0x452F
    ctx->r7 = S32(0X452F << 16);
    // 0x802CD820: jal         0x8030D748
    // 0x802CD824: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_24;
    // 0x802CD824: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_24:
    // 0x802CD828: lui         $a2, 0x44A3
    ctx->r6 = S32(0X44A3 << 16);
    // 0x802CD82C: lui         $a3, 0x4503
    ctx->r7 = S32(0X4503 << 16);
    // 0x802CD830: ori         $a3, $a3, 0xE000
    ctx->r7 = ctx->r7 | 0XE000;
    // 0x802CD834: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802CD838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD83C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CD840: jal         0x8030D748
    // 0x802CD844: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_25;
    // 0x802CD844: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_25:
    // 0x802CD848: lui         $a2, 0x448D
    ctx->r6 = S32(0X448D << 16);
    // 0x802CD84C: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802CD850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD854: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CD858: lui         $a3, 0x44B9
    ctx->r7 = S32(0X44B9 << 16);
    // 0x802CD85C: jal         0x8030D748
    // 0x802CD860: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_26;
    // 0x802CD860: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_26:
    // 0x802CD864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD868: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CD86C: lui         $a2, 0x4439
    ctx->r6 = S32(0X4439 << 16);
    // 0x802CD870: lui         $a3, 0x4420
    ctx->r7 = S32(0X4420 << 16);
    // 0x802CD874: jal         0x8030D748
    // 0x802CD878: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_27;
    // 0x802CD878: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_27:
    // 0x802CD87C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD880: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802CD884: lui         $a2, 0x4230
    ctx->r6 = S32(0X4230 << 16);
    // 0x802CD888: lui         $a3, 0xC2B2
    ctx->r7 = S32(0XC2B2 << 16);
    // 0x802CD88C: jal         0x8030D748
    // 0x802CD890: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_28;
    // 0x802CD890: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_28:
    // 0x802CD894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD898: jal         0x80318C9C
    // 0x802CD89C: lui         $a1, 0x432A
    ctx->r5 = S32(0X432A << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_29;
    // 0x802CD89C: lui         $a1, 0x432A
    ctx->r5 = S32(0X432A << 16);
    after_29:
    // 0x802CD8A0: addiu       $s0, $s4, 0x3224
    ctx->r16 = ADD32(ctx->r20, 0X3224);
    // 0x802CD8A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD8A8: jal         0x8030D3D4
    // 0x802CD8AC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    static_3_8030D3D4(rdram, ctx);
        goto after_30;
    // 0x802CD8AC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_30:
    // 0x802CD8B0: lui         $a2, 0x4508
    ctx->r6 = S32(0X4508 << 16);
    // 0x802CD8B4: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802CD8B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD8BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CD8C0: lui         $a3, 0x43AA
    ctx->r7 = S32(0X43AA << 16);
    // 0x802CD8C4: jal         0x8030D748
    // 0x802CD8C8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_31;
    // 0x802CD8C8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_31:
    // 0x802CD8CC: lui         $a2, 0x4498
    ctx->r6 = S32(0X4498 << 16);
    // 0x802CD8D0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CD8D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD8D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CD8DC: lui         $a3, 0x43B9
    ctx->r7 = S32(0X43B9 << 16);
    // 0x802CD8E0: jal         0x8030D748
    // 0x802CD8E4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_32;
    // 0x802CD8E4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_32:
    // 0x802CD8E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD8EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CD8F0: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    // 0x802CD8F4: lui         $a3, 0xC2F2
    ctx->r7 = S32(0XC2F2 << 16);
    // 0x802CD8F8: jal         0x8030D748
    // 0x802CD8FC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_33;
    // 0x802CD8FC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_33:
    // 0x802CD900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD904: jal         0x80318C9C
    // 0x802CD908: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_34;
    // 0x802CD908: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_34:
    // 0x802CD90C: addiu       $s0, $s4, 0x38B0
    ctx->r16 = ADD32(ctx->r20, 0X38B0);
    // 0x802CD910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD914: jal         0x8030D3D4
    // 0x802CD918: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    static_3_8030D3D4(rdram, ctx);
        goto after_35;
    // 0x802CD918: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_35:
    // 0x802CD91C: lui         $a2, 0x455E
    ctx->r6 = S32(0X455E << 16);
    // 0x802CD920: lui         $a3, 0xC513
    ctx->r7 = S32(0XC513 << 16);
    // 0x802CD924: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CD928: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CD92C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD930: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CD934: jal         0x8030D748
    // 0x802CD938: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_36;
    // 0x802CD938: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_36:
    // 0x802CD93C: lui         $a2, 0x4531
    ctx->r6 = S32(0X4531 << 16);
    // 0x802CD940: lui         $a3, 0xC4DF
    ctx->r7 = S32(0XC4DF << 16);
    // 0x802CD944: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802CD948: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CD94C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD950: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CD954: jal         0x8030D748
    // 0x802CD958: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_37;
    // 0x802CD958: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_37:
    // 0x802CD95C: lui         $a2, 0x4515
    ctx->r6 = S32(0X4515 << 16);
    // 0x802CD960: lui         $a3, 0xC498
    ctx->r7 = S32(0XC498 << 16);
    // 0x802CD964: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CD968: ori         $a2, $a2, 0x6000
    ctx->r6 = ctx->r6 | 0X6000;
    // 0x802CD96C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD970: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CD974: jal         0x8030D748
    // 0x802CD978: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_38;
    // 0x802CD978: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_38:
    // 0x802CD97C: lui         $a2, 0x44DF
    ctx->r6 = S32(0X44DF << 16);
    // 0x802CD980: lui         $a3, 0xC431
    ctx->r7 = S32(0XC431 << 16);
    // 0x802CD984: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CD988: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802CD98C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD990: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CD994: jal         0x8030D748
    // 0x802CD998: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_39;
    // 0x802CD998: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_39:
    // 0x802CD99C: lui         $a2, 0x4498
    ctx->r6 = S32(0X4498 << 16);
    // 0x802CD9A0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CD9A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD9A8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802CD9AC: lui         $a3, 0xC3A0
    ctx->r7 = S32(0XC3A0 << 16);
    // 0x802CD9B0: jal         0x8030D748
    // 0x802CD9B4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_40;
    // 0x802CD9B4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_40:
    // 0x802CD9B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD9BC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802CD9C0: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x802CD9C4: lui         $a3, 0xC396
    ctx->r7 = S32(0XC396 << 16);
    // 0x802CD9C8: jal         0x8030D748
    // 0x802CD9CC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_41;
    // 0x802CD9CC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_41:
    // 0x802CD9D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD9D4: jal         0x80318C9C
    // 0x802CD9D8: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_42;
    // 0x802CD9D8: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    after_42:
    // 0x802CD9DC: addiu       $s0, $s4, 0x3F3C
    ctx->r16 = ADD32(ctx->r20, 0X3F3C);
    // 0x802CD9E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD9E4: jal         0x8030D3D4
    // 0x802CD9E8: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    static_3_8030D3D4(rdram, ctx);
        goto after_43;
    // 0x802CD9E8: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_43:
    // 0x802CD9EC: lui         $a2, 0x44D0
    ctx->r6 = S32(0X44D0 << 16);
    // 0x802CD9F0: lui         $a3, 0xC571
    ctx->r7 = S32(0XC571 << 16);
    // 0x802CD9F4: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802CD9F8: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802CD9FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDA00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CDA04: jal         0x8030D748
    // 0x802CDA08: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_44;
    // 0x802CDA08: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_44:
    // 0x802CDA0C: lui         $a2, 0x4498
    ctx->r6 = S32(0X4498 << 16);
    // 0x802CDA10: lui         $a3, 0xC54F
    ctx->r7 = S32(0XC54F << 16);
    // 0x802CDA14: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CDA18: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CDA1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDA20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CDA24: jal         0x8030D748
    // 0x802CDA28: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_45;
    // 0x802CDA28: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_45:
    // 0x802CDA2C: lui         $a3, 0xC524
    ctx->r7 = S32(0XC524 << 16);
    // 0x802CDA30: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802CDA34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDA38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CDA3C: lui         $a2, 0x4448
    ctx->r6 = S32(0X4448 << 16);
    // 0x802CDA40: jal         0x8030D748
    // 0x802CDA44: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_46;
    // 0x802CDA44: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_46:
    // 0x802CDA48: lui         $a2, 0x4404
    ctx->r6 = S32(0X4404 << 16);
    // 0x802CDA4C: lui         $a3, 0xC4E7
    ctx->r7 = S32(0XC4E7 << 16);
    // 0x802CDA50: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802CDA54: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CDA58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDA5C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CDA60: jal         0x8030D748
    // 0x802CDA64: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_47;
    // 0x802CDA64: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_47:
    // 0x802CDA68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDA6C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802CDA70: lui         $a2, 0x4382
    ctx->r6 = S32(0X4382 << 16);
    // 0x802CDA74: lui         $a3, 0xC491
    ctx->r7 = S32(0XC491 << 16);
    // 0x802CDA78: jal         0x8030D748
    // 0x802CDA7C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_48;
    // 0x802CDA7C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_48:
    // 0x802CDA80: lui         $a3, 0xC422
    ctx->r7 = S32(0XC422 << 16);
    // 0x802CDA84: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CDA88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDA8C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802CDA90: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x802CDA94: jal         0x8030D748
    // 0x802CDA98: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_49;
    // 0x802CDA98: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_49:
    // 0x802CDA9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDAA0: jal         0x80318C9C
    // 0x802CDAA4: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_50;
    // 0x802CDAA4: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    after_50:
    // 0x802CDAA8: addiu       $s0, $s4, 0x45C8
    ctx->r16 = ADD32(ctx->r20, 0X45C8);
    // 0x802CDAAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDAB0: jal         0x8030D3D4
    // 0x802CDAB4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    static_3_8030D3D4(rdram, ctx);
        goto after_51;
    // 0x802CDAB4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_51:
    // 0x802CDAB8: lui         $a3, 0xC520
    ctx->r7 = S32(0XC520 << 16);
    // 0x802CDABC: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802CDAC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDAC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CDAC8: lui         $a2, 0xC3E6
    ctx->r6 = S32(0XC3E6 << 16);
    // 0x802CDACC: jal         0x8030D748
    // 0x802CDAD0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_52;
    // 0x802CDAD0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_52:
    // 0x802CDAD4: lui         $a3, 0xC4D8
    ctx->r7 = S32(0XC4D8 << 16);
    // 0x802CDAD8: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802CDADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDAE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CDAE4: lui         $a2, 0xC3F5
    ctx->r6 = S32(0XC3F5 << 16);
    // 0x802CDAE8: jal         0x8030D748
    // 0x802CDAEC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_53;
    // 0x802CDAEC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_53:
    // 0x802CDAF0: lui         $a3, 0xC40A
    ctx->r7 = S32(0XC40A << 16);
    // 0x802CDAF4: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802CDAF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDAFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CDB00: lui         $a2, 0xC3D4
    ctx->r6 = S32(0XC3D4 << 16);
    // 0x802CDB04: jal         0x8030D748
    // 0x802CDB08: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_54;
    // 0x802CDB08: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_54:
    // 0x802CDB0C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802CDB10: jal         0x80318C9C
    // 0x802CDB14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318C9C(rdram, ctx);
        goto after_55;
    // 0x802CDB14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_55:
    // 0x802CDB18: addiu       $s0, $s4, 0x4C54
    ctx->r16 = ADD32(ctx->r20, 0X4C54);
    // 0x802CDB1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDB20: jal         0x8030D3D4
    // 0x802CDB24: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    static_3_8030D3D4(rdram, ctx);
        goto after_56;
    // 0x802CDB24: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_56:
    // 0x802CDB28: lui         $a2, 0xC543
    ctx->r6 = S32(0XC543 << 16);
    // 0x802CDB2C: lui         $a3, 0xC526
    ctx->r7 = S32(0XC526 << 16);
    // 0x802CDB30: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802CDB34: ori         $a2, $a2, 0xA000
    ctx->r6 = ctx->r6 | 0XA000;
    // 0x802CDB38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDB3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CDB40: jal         0x8030D748
    // 0x802CDB44: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_57;
    // 0x802CDB44: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_57:
    // 0x802CDB48: lui         $a3, 0xC51C
    ctx->r7 = S32(0XC51C << 16);
    // 0x802CDB4C: ori         $a3, $a3, 0xE000
    ctx->r7 = ctx->r7 | 0XE000;
    // 0x802CDB50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDB54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CDB58: lui         $a2, 0xC511
    ctx->r6 = S32(0XC511 << 16);
    // 0x802CDB5C: jal         0x8030D748
    // 0x802CDB60: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_58;
    // 0x802CDB60: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_58:
    // 0x802CDB64: lui         $a3, 0xC4F2
    ctx->r7 = S32(0XC4F2 << 16);
    // 0x802CDB68: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CDB6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDB70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CDB74: lui         $a2, 0xC4C8
    ctx->r6 = S32(0XC4C8 << 16);
    // 0x802CDB78: jal         0x8030D748
    // 0x802CDB7C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_59;
    // 0x802CDB7C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_59:
    // 0x802CDB80: lui         $a2, 0xC484
    ctx->r6 = S32(0XC484 << 16);
    // 0x802CDB84: lui         $a3, 0xC4C9
    ctx->r7 = S32(0XC4C9 << 16);
    // 0x802CDB88: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802CDB8C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CDB90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDB94: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CDB98: jal         0x8030D748
    // 0x802CDB9C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_60;
    // 0x802CDB9C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_60:
    // 0x802CDBA0: lui         $a3, 0xC431
    ctx->r7 = S32(0XC431 << 16);
    // 0x802CDBA4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CDBA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDBAC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802CDBB0: lui         $a2, 0xC420
    ctx->r6 = S32(0XC420 << 16);
    // 0x802CDBB4: jal         0x8030D748
    // 0x802CDBB8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_61;
    // 0x802CDBB8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_61:
    // 0x802CDBBC: lui         $a3, 0xC427
    ctx->r7 = S32(0XC427 << 16);
    // 0x802CDBC0: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CDBC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDBC8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802CDBCC: lui         $a2, 0xC36B
    ctx->r6 = S32(0XC36B << 16);
    // 0x802CDBD0: jal         0x8030D748
    // 0x802CDBD4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_62;
    // 0x802CDBD4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_62:
    // 0x802CDBD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDBDC: jal         0x80318C9C
    // 0x802CDBE0: lui         $a1, 0x4391
    ctx->r5 = S32(0X4391 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_63;
    // 0x802CDBE0: lui         $a1, 0x4391
    ctx->r5 = S32(0X4391 << 16);
    after_63:
    // 0x802CDBE4: addiu       $s0, $s4, 0x52E0
    ctx->r16 = ADD32(ctx->r20, 0X52E0);
    // 0x802CDBE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDBEC: jal         0x8030D3D4
    // 0x802CDBF0: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    static_3_8030D3D4(rdram, ctx);
        goto after_64;
    // 0x802CDBF0: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_64:
    // 0x802CDBF4: lui         $a2, 0xC512
    ctx->r6 = S32(0XC512 << 16);
    // 0x802CDBF8: ori         $a2, $a2, 0xE000
    ctx->r6 = ctx->r6 | 0XE000;
    // 0x802CDBFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDC00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CDC04: lui         $a3, 0x44AA
    ctx->r7 = S32(0X44AA << 16);
    // 0x802CDC08: jal         0x8030D748
    // 0x802CDC0C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_65;
    // 0x802CDC0C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_65:
    // 0x802CDC10: lui         $a2, 0xC4CF
    ctx->r6 = S32(0XC4CF << 16);
    // 0x802CDC14: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CDC18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDC1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CDC20: lui         $a3, 0x4420
    ctx->r7 = S32(0X4420 << 16);
    // 0x802CDC24: jal         0x8030D748
    // 0x802CDC28: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_66;
    // 0x802CDC28: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_66:
    // 0x802CDC2C: lui         $a2, 0xC485
    ctx->r6 = S32(0XC485 << 16);
    // 0x802CDC30: ori         $a2, $a2, 0x6000
    ctx->r6 = ctx->r6 | 0X6000;
    // 0x802CDC34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDC38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CDC3C: lui         $a3, 0x435A
    ctx->r7 = S32(0X435A << 16);
    // 0x802CDC40: jal         0x8030D748
    // 0x802CDC44: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_67;
    // 0x802CDC44: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_67:
    // 0x802CDC48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDC4C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CDC50: lui         $a2, 0xC411
    ctx->r6 = S32(0XC411 << 16);
    // 0x802CDC54: lui         $a3, 0xC1B8
    ctx->r7 = S32(0XC1B8 << 16);
    // 0x802CDC58: jal         0x8030D748
    // 0x802CDC5C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_68;
    // 0x802CDC5C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_68:
    // 0x802CDC60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDC64: jal         0x80318C9C
    // 0x802CDC68: lui         $a1, 0x4361
    ctx->r5 = S32(0X4361 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_69;
    // 0x802CDC68: lui         $a1, 0x4361
    ctx->r5 = S32(0X4361 << 16);
    after_69:
    // 0x802CDC6C: addiu       $s0, $s4, 0x596C
    ctx->r16 = ADD32(ctx->r20, 0X596C);
    // 0x802CDC70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDC74: jal         0x8030D3D4
    // 0x802CDC78: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    static_3_8030D3D4(rdram, ctx);
        goto after_70;
    // 0x802CDC78: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_70:
    // 0x802CDC7C: lui         $a2, 0xC56E
    ctx->r6 = S32(0XC56E << 16);
    // 0x802CDC80: lui         $a3, 0xC46D
    ctx->r7 = S32(0XC46D << 16);
    // 0x802CDC84: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CDC88: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802CDC8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDC90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CDC94: jal         0x8030D748
    // 0x802CDC98: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_71;
    // 0x802CDC98: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_71:
    // 0x802CDC9C: lui         $a2, 0xC56C
    ctx->r6 = S32(0XC56C << 16);
    // 0x802CDCA0: ori         $a2, $a2, 0xE000
    ctx->r6 = ctx->r6 | 0XE000;
    // 0x802CDCA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDCA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CDCAC: lui         $a3, 0xC32A
    ctx->r7 = S32(0XC32A << 16);
    // 0x802CDCB0: jal         0x8030D748
    // 0x802CDCB4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_72;
    // 0x802CDCB4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_72:
    // 0x802CDCB8: lui         $a2, 0xC567
    ctx->r6 = S32(0XC567 << 16);
    // 0x802CDCBC: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802CDCC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDCC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CDCC8: lui         $a3, 0x4411
    ctx->r7 = S32(0X4411 << 16);
    // 0x802CDCCC: jal         0x8030D748
    // 0x802CDCD0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_73;
    // 0x802CDCD0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_73:
    // 0x802CDCD4: lui         $a2, 0xC565
    ctx->r6 = S32(0XC565 << 16);
    // 0x802CDCD8: ori         $a2, $a2, 0x6000
    ctx->r6 = ctx->r6 | 0X6000;
    // 0x802CDCDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDCE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CDCE4: lui         $a3, 0x44AA
    ctx->r7 = S32(0X44AA << 16);
    // 0x802CDCE8: jal         0x8030D748
    // 0x802CDCEC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_74;
    // 0x802CDCEC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_74:
    // 0x802CDCF0: lui         $a2, 0xC54B
    ctx->r6 = S32(0XC54B << 16);
    // 0x802CDCF4: lui         $a3, 0x4500
    ctx->r7 = S32(0X4500 << 16);
    // 0x802CDCF8: ori         $a3, $a3, 0x2000
    ctx->r7 = ctx->r7 | 0X2000;
    // 0x802CDCFC: ori         $a2, $a2, 0x2000
    ctx->r6 = ctx->r6 | 0X2000;
    // 0x802CDD00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDD04: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802CDD08: jal         0x8030D748
    // 0x802CDD0C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_75;
    // 0x802CDD0C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_75:
    // 0x802CDD10: lui         $a2, 0xC51F
    ctx->r6 = S32(0XC51F << 16);
    // 0x802CDD14: lui         $a3, 0x450C
    ctx->r7 = S32(0X450C << 16);
    // 0x802CDD18: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802CDD1C: ori         $a2, $a2, 0x6000
    ctx->r6 = ctx->r6 | 0X6000;
    // 0x802CDD20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDD24: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802CDD28: jal         0x8030D748
    // 0x802CDD2C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_76;
    // 0x802CDD2C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_76:
    // 0x802CDD30: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802CDD34: jal         0x80318C9C
    // 0x802CDD38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318C9C(rdram, ctx);
        goto after_77;
    // 0x802CDD38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_77:
    // 0x802CDD3C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802CDD40: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    // 0x802CDD44: addiu       $s2, $s4, 0x17F4
    ctx->r18 = ADD32(ctx->r20, 0X17F4);
L_802CDD48:
    // 0x802CDD48: lw          $s0, 0x1994($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1994);
    // 0x802CDD4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CDD50: lh          $t6, 0xA8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA8);
    // 0x802CDD54: lw          $t9, 0xAC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XAC);
    // 0x802CDD58: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    // 0x802CDD5C: jalr        $t9
    // 0x802CDD60: addiu       $a0, $a0, 0x17F4
    ctx->r4 = ADD32(ctx->r4, 0X17F4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_78;
    // 0x802CDD60: addiu       $a0, $a0, 0x17F4
    ctx->r4 = ADD32(ctx->r4, 0X17F4);
    after_78:
    // 0x802CDD64: lw          $s0, 0x1994($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1994);
    // 0x802CDD68: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802CDD6C: lh          $t7, 0xB0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XB0);
    // 0x802CDD70: lw          $t9, 0xB4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XB4);
    // 0x802CDD74: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    // 0x802CDD78: jalr        $t9
    // 0x802CDD7C: addiu       $a0, $a0, 0x17F4
    ctx->r4 = ADD32(ctx->r4, 0X17F4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_79;
    // 0x802CDD7C: addiu       $a0, $a0, 0x17F4
    ctx->r4 = ADD32(ctx->r4, 0X17F4);
    after_79:
    // 0x802CDD80: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802CDD84: jal         0x80319008
    // 0x802CDD88: lui         $a1, 0x4158
    ctx->r5 = S32(0X4158 << 16);
    static_3_80319008(rdram, ctx);
        goto after_80;
    // 0x802CDD88: lui         $a1, 0x4158
    ctx->r5 = S32(0X4158 << 16);
    after_80:
    // 0x802CDD8C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802CDD90: jal         0x80318EFC
    // 0x802CDD94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318EFC(rdram, ctx);
        goto after_81;
    // 0x802CDD94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_81:
    // 0x802CDD98: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802CDD9C: jal         0x80318F04
    // 0x802CDDA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F04(rdram, ctx);
        goto after_82;
    // 0x802CDDA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_82:
    // 0x802CDDA4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802CDDA8: jal         0x80318F14
    // 0x802CDDAC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80318F14(rdram, ctx);
        goto after_83;
    // 0x802CDDAC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_83:
    // 0x802CDDB0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802CDDB4: jal         0x80318EF4
    // 0x802CDDB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80318EF4(rdram, ctx);
        goto after_84;
    // 0x802CDDB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_84:
    // 0x802CDDBC: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x802CDDC0: jal         0x802AB2AC
    // 0x802CDDC4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_85;
    // 0x802CDDC4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_85:
    // 0x802CDDC8: addiu       $s3, $s3, 0x68C
    ctx->r19 = ADD32(ctx->r19, 0X68C);
    // 0x802CDDCC: slti        $at, $s3, 0x4804
    ctx->r1 = SIGNED(ctx->r19) < 0X4804 ? 1 : 0;
    // 0x802CDDD0: addiu       $s1, $s1, 0x68C
    ctx->r17 = ADD32(ctx->r17, 0X68C);
    // 0x802CDDD4: bne         $at, $zero, L_802CDD48
    if (ctx->r1 != 0) {
        // 0x802CDDD8: addiu       $s2, $s2, 0x68C
        ctx->r18 = ADD32(ctx->r18, 0X68C);
            goto L_802CDD48;
    }
    // 0x802CDDD8: addiu       $s2, $s2, 0x68C
    ctx->r18 = ADD32(ctx->r18, 0X68C);
    // 0x802CDDDC: addiu       $s0, $s4, 0x5FF8
    ctx->r16 = ADD32(ctx->r20, 0X5FF8);
    // 0x802CDDE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDDE4: jal         0x8030D3D4
    // 0x802CDDE8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    static_3_8030D3D4(rdram, ctx);
        goto after_86;
    // 0x802CDDE8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_86:
    // 0x802CDDEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDDF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CDDF4: lui         $a2, 0xC389
    ctx->r6 = S32(0XC389 << 16);
    // 0x802CDDF8: lui         $a3, 0x4413
    ctx->r7 = S32(0X4413 << 16);
    // 0x802CDDFC: jal         0x8030D748
    // 0x802CDE00: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_87;
    // 0x802CDE00: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_87:
    // 0x802CDE04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDE08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CDE0C: lui         $a2, 0xC336
    ctx->r6 = S32(0XC336 << 16);
    // 0x802CDE10: lui         $a3, 0x4329
    ctx->r7 = S32(0X4329 << 16);
    // 0x802CDE14: jal         0x8030D748
    // 0x802CDE18: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_88;
    // 0x802CDE18: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_88:
    // 0x802CDE1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDE20: jal         0x80318C9C
    // 0x802CDE24: lui         $a1, 0x433B
    ctx->r5 = S32(0X433B << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_89;
    // 0x802CDE24: lui         $a1, 0x433B
    ctx->r5 = S32(0X433B << 16);
    after_89:
    // 0x802CDE28: addiu       $s0, $s4, 0x6684
    ctx->r16 = ADD32(ctx->r20, 0X6684);
    // 0x802CDE2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDE30: jal         0x8030D3D4
    // 0x802CDE34: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    static_3_8030D3D4(rdram, ctx);
        goto after_90;
    // 0x802CDE34: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_90:
    // 0x802CDE38: lui         $a2, 0x44C1
    ctx->r6 = S32(0X44C1 << 16);
    // 0x802CDE3C: lui         $a3, 0x44C0
    ctx->r7 = S32(0X44C0 << 16);
    // 0x802CDE40: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CDE44: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802CDE48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDE4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CDE50: jal         0x8030D748
    // 0x802CDE54: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_91;
    // 0x802CDE54: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_91:
    // 0x802CDE58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDE5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CDE60: lui         $a2, 0x4439
    ctx->r6 = S32(0X4439 << 16);
    // 0x802CDE64: lui         $a3, 0x444D
    ctx->r7 = S32(0X444D << 16);
    // 0x802CDE68: jal         0x8030D748
    // 0x802CDE6C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_92;
    // 0x802CDE6C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_92:
    // 0x802CDE70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDE74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CDE78: lui         $a2, 0x4224
    ctx->r6 = S32(0X4224 << 16);
    // 0x802CDE7C: lui         $a3, 0xC1A8
    ctx->r7 = S32(0XC1A8 << 16);
    // 0x802CDE80: jal         0x8030D748
    // 0x802CDE84: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_93;
    // 0x802CDE84: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_93:
    // 0x802CDE88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDE8C: jal         0x80318C9C
    // 0x802CDE90: lui         $a1, 0x42E6
    ctx->r5 = S32(0X42E6 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_94;
    // 0x802CDE90: lui         $a1, 0x42E6
    ctx->r5 = S32(0X42E6 << 16);
    after_94:
    // 0x802CDE94: addiu       $s0, $s4, 0x6D10
    ctx->r16 = ADD32(ctx->r20, 0X6D10);
    // 0x802CDE98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDE9C: jal         0x8030D3D4
    // 0x802CDEA0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    static_3_8030D3D4(rdram, ctx);
        goto after_95;
    // 0x802CDEA0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_95:
    // 0x802CDEA4: lui         $a2, 0x4576
    ctx->r6 = S32(0X4576 << 16);
    // 0x802CDEA8: lui         $a3, 0x4544
    ctx->r7 = S32(0X4544 << 16);
    // 0x802CDEAC: ori         $a3, $a3, 0x9000
    ctx->r7 = ctx->r7 | 0X9000;
    // 0x802CDEB0: ori         $a2, $a2, 0xB000
    ctx->r6 = ctx->r6 | 0XB000;
    // 0x802CDEB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDEB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CDEBC: jal         0x8030D748
    // 0x802CDEC0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_96;
    // 0x802CDEC0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_96:
    // 0x802CDEC4: lui         $a2, 0x4549
    ctx->r6 = S32(0X4549 << 16);
    // 0x802CDEC8: lui         $a3, 0x452B
    ctx->r7 = S32(0X452B << 16);
    // 0x802CDECC: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802CDED0: ori         $a2, $a2, 0xE000
    ctx->r6 = ctx->r6 | 0XE000;
    // 0x802CDED4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDED8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CDEDC: jal         0x8030D748
    // 0x802CDEE0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_97;
    // 0x802CDEE0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_97:
    // 0x802CDEE4: lui         $a2, 0x4528
    ctx->r6 = S32(0X4528 << 16);
    // 0x802CDEE8: lui         $a3, 0x44E9
    ctx->r7 = S32(0X44E9 << 16);
    // 0x802CDEEC: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802CDEF0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CDEF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDEF8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CDEFC: jal         0x8030D748
    // 0x802CDF00: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_98;
    // 0x802CDF00: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_98:
    // 0x802CDF04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDF08: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CDF0C: lui         $a2, 0x44EB
    ctx->r6 = S32(0X44EB << 16);
    // 0x802CDF10: lui         $a3, 0x44AA
    ctx->r7 = S32(0X44AA << 16);
    // 0x802CDF14: jal         0x8030D748
    // 0x802CDF18: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_99;
    // 0x802CDF18: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_99:
    // 0x802CDF1C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CDF20: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CDF24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDF28: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802CDF2C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802CDF30: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802CDF34: jal         0x8030D748
    // 0x802CDF38: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_100;
    // 0x802CDF38: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_100:
    // 0x802CDF3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDF40: jal         0x80318C9C
    // 0x802CDF44: lui         $a1, 0x4325
    ctx->r5 = S32(0X4325 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_101;
    // 0x802CDF44: lui         $a1, 0x4325
    ctx->r5 = S32(0X4325 << 16);
    after_101:
    // 0x802CDF48: addiu       $s0, $s4, 0x739C
    ctx->r16 = ADD32(ctx->r20, 0X739C);
    // 0x802CDF4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDF50: jal         0x8030D3D4
    // 0x802CDF54: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    static_3_8030D3D4(rdram, ctx);
        goto after_102;
    // 0x802CDF54: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_102:
    // 0x802CDF58: lui         $a2, 0x4533
    ctx->r6 = S32(0X4533 << 16);
    // 0x802CDF5C: lui         $a3, 0xC52A
    ctx->r7 = S32(0XC52A << 16);
    // 0x802CDF60: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802CDF64: ori         $a2, $a2, 0x6000
    ctx->r6 = ctx->r6 | 0X6000;
    // 0x802CDF68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDF6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CDF70: jal         0x8030D748
    // 0x802CDF74: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_103;
    // 0x802CDF74: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_103:
    // 0x802CDF78: lui         $a3, 0xC4B4
    ctx->r7 = S32(0XC4B4 << 16);
    // 0x802CDF7C: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802CDF80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDF84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CDF88: lui         $a2, 0x44AF
    ctx->r6 = S32(0X44AF << 16);
    // 0x802CDF8C: jal         0x8030D748
    // 0x802CDF90: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_104;
    // 0x802CDF90: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_104:
    // 0x802CDF94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDF98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CDF9C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x802CDFA0: lui         $a3, 0xC40E
    ctx->r7 = S32(0XC40E << 16);
    // 0x802CDFA4: jal         0x8030D748
    // 0x802CDFA8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_105;
    // 0x802CDFA8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_105:
    // 0x802CDFAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDFB0: jal         0x80318C9C
    // 0x802CDFB4: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_106;
    // 0x802CDFB4: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_106:
    // 0x802CDFB8: addiu       $s0, $s4, 0x7A28
    ctx->r16 = ADD32(ctx->r20, 0X7A28);
    // 0x802CDFBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDFC0: jal         0x8030D3D4
    // 0x802CDFC4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    static_3_8030D3D4(rdram, ctx);
        goto after_107;
    // 0x802CDFC4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_107:
    // 0x802CDFC8: lui         $a2, 0x4549
    ctx->r6 = S32(0X4549 << 16);
    // 0x802CDFCC: lui         $a3, 0xC560
    ctx->r7 = S32(0XC560 << 16);
    // 0x802CDFD0: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802CDFD4: ori         $a2, $a2, 0xE000
    ctx->r6 = ctx->r6 | 0XE000;
    // 0x802CDFD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDFDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CDFE0: jal         0x8030D748
    // 0x802CDFE4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_108;
    // 0x802CDFE4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_108:
    // 0x802CDFE8: lui         $a2, 0x4511
    ctx->r6 = S32(0X4511 << 16);
    // 0x802CDFEC: lui         $a3, 0xC555
    ctx->r7 = S32(0XC555 << 16);
    // 0x802CDFF0: ori         $a3, $a3, 0x2000
    ctx->r7 = ctx->r7 | 0X2000;
    // 0x802CDFF4: ori         $a2, $a2, 0xA000
    ctx->r6 = ctx->r6 | 0XA000;
    // 0x802CDFF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CDFFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CE000: jal         0x8030D748
    // 0x802CE004: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_109;
    // 0x802CE004: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_109:
    // 0x802CE008: lui         $a2, 0x44B6
    ctx->r6 = S32(0X44B6 << 16);
    // 0x802CE00C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CE010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE014: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CE018: lui         $a3, 0xC52A
    ctx->r7 = S32(0XC52A << 16);
    // 0x802CE01C: jal         0x8030D748
    // 0x802CE020: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_110;
    // 0x802CE020: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_110:
    // 0x802CE024: lui         $a2, 0x448D
    ctx->r6 = S32(0X448D << 16);
    // 0x802CE028: lui         $a3, 0xC4E3
    ctx->r7 = S32(0XC4E3 << 16);
    // 0x802CE02C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CE030: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802CE034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE038: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CE03C: jal         0x8030D748
    // 0x802CE040: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_111;
    // 0x802CE040: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_111:
    // 0x802CE044: lui         $a3, 0xC45E
    ctx->r7 = S32(0XC45E << 16);
    // 0x802CE048: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CE04C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE050: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802CE054: lui         $a2, 0x4439
    ctx->r6 = S32(0X4439 << 16);
    // 0x802CE058: jal         0x8030D748
    // 0x802CE05C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_112;
    // 0x802CE05C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_112:
    // 0x802CE060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE064: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802CE068: lui         $a2, 0x4292
    ctx->r6 = S32(0X4292 << 16);
    // 0x802CE06C: lui         $a3, 0xC3CE
    ctx->r7 = S32(0XC3CE << 16);
    // 0x802CE070: jal         0x8030D748
    // 0x802CE074: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_113;
    // 0x802CE074: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_113:
    // 0x802CE078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE07C: jal         0x80318C9C
    // 0x802CE080: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_114;
    // 0x802CE080: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    after_114:
    // 0x802CE084: ori         $at, $zero, 0x80B4
    ctx->r1 = 0 | 0X80B4;
    // 0x802CE088: addu        $s0, $s4, $at
    ctx->r16 = ADD32(ctx->r20, ctx->r1);
    // 0x802CE08C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE090: jal         0x8030D3D4
    // 0x802CE094: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    static_3_8030D3D4(rdram, ctx);
        goto after_115;
    // 0x802CE094: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_115:
    // 0x802CE098: lui         $a2, 0x447C
    ctx->r6 = S32(0X447C << 16);
    // 0x802CE09C: lui         $a3, 0xC56F
    ctx->r7 = S32(0XC56F << 16);
    // 0x802CE0A0: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802CE0A4: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CE0A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE0AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CE0B0: jal         0x8030D748
    // 0x802CE0B4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_116;
    // 0x802CE0B4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_116:
    // 0x802CE0B8: lui         $a3, 0xC56F
    ctx->r7 = S32(0XC56F << 16);
    // 0x802CE0BC: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802CE0C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE0C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CE0C8: lui         $a2, 0x4366
    ctx->r6 = S32(0X4366 << 16);
    // 0x802CE0CC: jal         0x8030D748
    // 0x802CE0D0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_117;
    // 0x802CE0D0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_117:
    // 0x802CE0D4: lui         $a3, 0xC56B
    ctx->r7 = S32(0XC56B << 16);
    // 0x802CE0D8: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802CE0DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE0E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CE0E4: lui         $a2, 0xC411
    ctx->r6 = S32(0XC411 << 16);
    // 0x802CE0E8: jal         0x8030D748
    // 0x802CE0EC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_118;
    // 0x802CE0EC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_118:
    // 0x802CE0F0: lui         $a3, 0xC54D
    ctx->r7 = S32(0XC54D << 16);
    // 0x802CE0F4: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802CE0F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE0FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CE100: lui         $a2, 0xC4AA
    ctx->r6 = S32(0XC4AA << 16);
    // 0x802CE104: jal         0x8030D748
    // 0x802CE108: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_119;
    // 0x802CE108: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_119:
    // 0x802CE10C: lui         $a2, 0xC4DA
    ctx->r6 = S32(0XC4DA << 16);
    // 0x802CE110: lui         $a3, 0xC526
    ctx->r7 = S32(0XC526 << 16);
    // 0x802CE114: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802CE118: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802CE11C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE120: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802CE124: jal         0x8030D748
    // 0x802CE128: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_120;
    // 0x802CE128: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_120:
    // 0x802CE12C: lui         $a2, 0xC4C1
    ctx->r6 = S32(0XC4C1 << 16);
    // 0x802CE130: lui         $a3, 0xC500
    ctx->r7 = S32(0XC500 << 16);
    // 0x802CE134: ori         $a3, $a3, 0x2000
    ctx->r7 = ctx->r7 | 0X2000;
    // 0x802CE138: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802CE13C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE140: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802CE144: jal         0x8030D748
    // 0x802CE148: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_121;
    // 0x802CE148: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_121:
    // 0x802CE14C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE150: jal         0x80318C9C
    // 0x802CE154: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_122;
    // 0x802CE154: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_122:
    // 0x802CE158: ori         $at, $zero, 0x8740
    ctx->r1 = 0 | 0X8740;
    // 0x802CE15C: addu        $s0, $s4, $at
    ctx->r16 = ADD32(ctx->r20, ctx->r1);
    // 0x802CE160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE164: jal         0x8030D3D4
    // 0x802CE168: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    static_3_8030D3D4(rdram, ctx);
        goto after_123;
    // 0x802CE168: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_123:
    // 0x802CE16C: lui         $a2, 0xC556
    ctx->r6 = S32(0XC556 << 16);
    // 0x802CE170: lui         $a3, 0xC50F
    ctx->r7 = S32(0XC50F << 16);
    // 0x802CE174: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802CE178: ori         $a2, $a2, 0x6000
    ctx->r6 = ctx->r6 | 0X6000;
    // 0x802CE17C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CE184: jal         0x8030D748
    // 0x802CE188: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_124;
    // 0x802CE188: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_124:
    // 0x802CE18C: lui         $a2, 0xC50C
    ctx->r6 = S32(0XC50C << 16);
    // 0x802CE190: lui         $a3, 0xC506
    ctx->r7 = S32(0XC506 << 16);
    // 0x802CE194: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802CE198: ori         $a2, $a2, 0xA000
    ctx->r6 = ctx->r6 | 0XA000;
    // 0x802CE19C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE1A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CE1A4: jal         0x8030D748
    // 0x802CE1A8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_125;
    // 0x802CE1A8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_125:
    // 0x802CE1AC: lui         $a2, 0xC4C0
    ctx->r6 = S32(0XC4C0 << 16);
    // 0x802CE1B0: ori         $a2, $a2, 0xE000
    ctx->r6 = ctx->r6 | 0XE000;
    // 0x802CE1B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE1B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CE1BC: lui         $a3, 0xC4AB
    ctx->r7 = S32(0XC4AB << 16);
    // 0x802CE1C0: jal         0x8030D748
    // 0x802CE1C4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_126;
    // 0x802CE1C4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_126:
    // 0x802CE1C8: lui         $a3, 0xC440
    ctx->r7 = S32(0XC440 << 16);
    // 0x802CE1CC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CE1D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE1D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CE1D8: lui         $a2, 0xC44D
    ctx->r6 = S32(0XC44D << 16);
    // 0x802CE1DC: jal         0x8030D748
    // 0x802CE1E0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_127;
    // 0x802CE1E0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_127:
    // 0x802CE1E4: lui         $a2, 0xC3EC
    ctx->r6 = S32(0XC3EC << 16);
    // 0x802CE1E8: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CE1EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE1F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802CE1F4: lui         $a3, 0xC419
    ctx->r7 = S32(0XC419 << 16);
    // 0x802CE1F8: jal         0x8030D748
    // 0x802CE1FC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_128;
    // 0x802CE1FC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_128:
    // 0x802CE200: lui         $a1, 0x43B0
    ctx->r5 = S32(0X43B0 << 16);
    // 0x802CE204: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x802CE208: jal         0x80318C9C
    // 0x802CE20C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318C9C(rdram, ctx);
        goto after_129;
    // 0x802CE20C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_129:
    // 0x802CE210: ori         $at, $zero, 0x8DCC
    ctx->r1 = 0 | 0X8DCC;
    // 0x802CE214: addu        $s0, $s4, $at
    ctx->r16 = ADD32(ctx->r20, ctx->r1);
    // 0x802CE218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE21C: jal         0x8030D3D4
    // 0x802CE220: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    static_3_8030D3D4(rdram, ctx);
        goto after_130;
    // 0x802CE220: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_130:
    // 0x802CE224: lui         $a2, 0xC507
    ctx->r6 = S32(0XC507 << 16);
    // 0x802CE228: ori         $a2, $a2, 0xA000
    ctx->r6 = ctx->r6 | 0XA000;
    // 0x802CE22C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CE234: lui         $a3, 0x43B9
    ctx->r7 = S32(0X43B9 << 16);
    // 0x802CE238: jal         0x8030D748
    // 0x802CE23C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_131;
    // 0x802CE23C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_131:
    // 0x802CE240: lui         $a2, 0xC49E
    ctx->r6 = S32(0XC49E << 16);
    // 0x802CE244: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802CE248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE24C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CE250: lui         $a3, 0x435C
    ctx->r7 = S32(0X435C << 16);
    // 0x802CE254: jal         0x8030D748
    // 0x802CE258: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_132;
    // 0x802CE258: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_132:
    // 0x802CE25C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE260: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CE264: lui         $a2, 0xC419
    ctx->r6 = S32(0XC419 << 16);
    // 0x802CE268: lui         $a3, 0xC20C
    ctx->r7 = S32(0XC20C << 16);
    // 0x802CE26C: jal         0x8030D748
    // 0x802CE270: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_133;
    // 0x802CE270: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_133:
    // 0x802CE274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE278: jal         0x80318C9C
    // 0x802CE27C: lui         $a1, 0x4382
    ctx->r5 = S32(0X4382 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_134;
    // 0x802CE27C: lui         $a1, 0x4382
    ctx->r5 = S32(0X4382 << 16);
    after_134:
    // 0x802CE280: ori         $at, $zero, 0x9458
    ctx->r1 = 0 | 0X9458;
    // 0x802CE284: addu        $s0, $s4, $at
    ctx->r16 = ADD32(ctx->r20, ctx->r1);
    // 0x802CE288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE28C: jal         0x8030D3D4
    // 0x802CE290: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    static_3_8030D3D4(rdram, ctx);
        goto after_135;
    // 0x802CE290: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_135:
    // 0x802CE294: lui         $a2, 0xC4A3
    ctx->r6 = S32(0XC4A3 << 16);
    // 0x802CE298: ori         $a2, $a2, 0xA000
    ctx->r6 = ctx->r6 | 0XA000;
    // 0x802CE29C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE2A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CE2A4: lui         $a3, 0x436A
    ctx->r7 = S32(0X436A << 16);
    // 0x802CE2A8: jal         0x8030D748
    // 0x802CE2AC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_136;
    // 0x802CE2AC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_136:
    // 0x802CE2B0: lui         $a2, 0xC42B
    ctx->r6 = S32(0XC42B << 16);
    // 0x802CE2B4: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802CE2B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE2BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CE2C0: lui         $a3, 0xC208
    ctx->r7 = S32(0XC208 << 16);
    // 0x802CE2C4: jal         0x8030D748
    // 0x802CE2C8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_8030D748(rdram, ctx);
        goto after_137;
    // 0x802CE2C8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_137:
    // 0x802CE2CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE2D0: jal         0x80318C9C
    // 0x802CE2D4: lui         $a1, 0x4382
    ctx->r5 = S32(0X4382 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_138;
    // 0x802CE2D4: lui         $a1, 0x4382
    ctx->r5 = S32(0X4382 << 16);
    after_138:
    // 0x802CE2D8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802CE2DC: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    // 0x802CE2E0: addiu       $s2, $s4, 0x5FF8
    ctx->r18 = ADD32(ctx->r20, 0X5FF8);
L_802CE2E4:
    // 0x802CE2E4: lw          $s0, 0x6198($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X6198);
    // 0x802CE2E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CE2EC: lh          $t8, 0xA8($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XA8);
    // 0x802CE2F0: lw          $t9, 0xAC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XAC);
    // 0x802CE2F4: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    // 0x802CE2F8: jalr        $t9
    // 0x802CE2FC: addiu       $a0, $a0, 0x5FF8
    ctx->r4 = ADD32(ctx->r4, 0X5FF8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_139;
    // 0x802CE2FC: addiu       $a0, $a0, 0x5FF8
    ctx->r4 = ADD32(ctx->r4, 0X5FF8);
    after_139:
    // 0x802CE300: lw          $s0, 0x6198($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X6198);
    // 0x802CE304: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802CE308: lh          $t0, 0xB0($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XB0);
    // 0x802CE30C: lw          $t9, 0xB4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XB4);
    // 0x802CE310: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    // 0x802CE314: jalr        $t9
    // 0x802CE318: addiu       $a0, $a0, 0x5FF8
    ctx->r4 = ADD32(ctx->r4, 0X5FF8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_140;
    // 0x802CE318: addiu       $a0, $a0, 0x5FF8
    ctx->r4 = ADD32(ctx->r4, 0X5FF8);
    after_140:
    // 0x802CE31C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802CE320: jal         0x80319008
    // 0x802CE324: lui         $a1, 0x4158
    ctx->r5 = S32(0X4158 << 16);
    static_3_80319008(rdram, ctx);
        goto after_141;
    // 0x802CE324: lui         $a1, 0x4158
    ctx->r5 = S32(0X4158 << 16);
    after_141:
    // 0x802CE328: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802CE32C: jal         0x80318EFC
    // 0x802CE330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318EFC(rdram, ctx);
        goto after_142;
    // 0x802CE330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_142:
    // 0x802CE334: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802CE338: jal         0x80318F04
    // 0x802CE33C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F04(rdram, ctx);
        goto after_143;
    // 0x802CE33C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_143:
    // 0x802CE340: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802CE344: jal         0x80318F14
    // 0x802CE348: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80318F14(rdram, ctx);
        goto after_144;
    // 0x802CE348: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_144:
    // 0x802CE34C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802CE350: jal         0x80318EF4
    // 0x802CE354: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80318EF4(rdram, ctx);
        goto after_145;
    // 0x802CE354: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_145:
    // 0x802CE358: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x802CE35C: jal         0x802AB2AC
    // 0x802CE360: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_146;
    // 0x802CE360: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_146:
    // 0x802CE364: addiu       $s3, $s3, 0x68C
    ctx->r19 = ADD32(ctx->r19, 0X68C);
    // 0x802CE368: addiu       $at, $zero, 0x3AEC
    ctx->r1 = ADD32(0, 0X3AEC);
    // 0x802CE36C: addiu       $s1, $s1, 0x68C
    ctx->r17 = ADD32(ctx->r17, 0X68C);
    // 0x802CE370: bne         $s3, $at, L_802CE2E4
    if (ctx->r19 != ctx->r1) {
        // 0x802CE374: addiu       $s2, $s2, 0x68C
        ctx->r18 = ADD32(ctx->r18, 0X68C);
            goto L_802CE2E4;
    }
    // 0x802CE374: addiu       $s2, $s2, 0x68C
    ctx->r18 = ADD32(ctx->r18, 0X68C);
    // 0x802CE378: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802CE37C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x802CE380: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802CE384: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802CE388: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802CE38C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802CE390: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802CE394: jr          $ra
    // 0x802CE398: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802CE398: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_80295094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295114: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80295118: jr          $ra
    // 0x8029511C: swc1        $f12, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x8029511C: swc1        $f12, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802E8794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8814: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E8818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E881C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802E8820: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E8824: bne         $a1, $at, L_802E8848
    if (ctx->r5 != ctx->r1) {
        // 0x802E8828: sw          $a1, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r5;
            goto L_802E8848;
    }
    // 0x802E8828: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802E882C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E8830: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E8834: jal         0x802AED58
    // 0x802E8838: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_802AED58(rdram, ctx);
        goto after_0;
    // 0x802E8838: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E883C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E8840: b           L_802E8860
    // 0x802E8844: sw          $v0, 0xD4($a2)
    MEM_W(0XD4, ctx->r6) = ctx->r2;
        goto L_802E8860;
    // 0x802E8844: sw          $v0, 0xD4($a2)
    MEM_W(0XD4, ctx->r6) = ctx->r2;
L_802E8848:
    // 0x802E8848: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E884C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E8850: jal         0x802AEE80
    // 0x802E8854: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_802AEE80(rdram, ctx);
        goto after_1;
    // 0x802E8854: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x802E8858: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E885C: sw          $v0, 0xD4($a2)
    MEM_W(0XD4, ctx->r6) = ctx->r2;
L_802E8860:
    // 0x802E8860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E8864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E8868: jr          $ra
    // 0x802E886C: nop

    return;
    // 0x802E886C: nop

;}
RECOMP_FUNC void D_80292974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802929F4: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x802929F8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802929FC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80292A00: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x80292A04: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x80292A08: lh          $t6, 0x10C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X10C);
    // 0x80292A0C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80292A10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80292A14: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80292A18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80292A1C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80292A20: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80292A24: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80292A28: nop

    // 0x80292A2C: bc1tl       L_80292A44
    if (c1cs) {
        // 0x80292A30: lui         $at, 0x4090
        ctx->r1 = S32(0X4090 << 16);
            goto L_80292A44;
    }
    goto skip_0;
    // 0x80292A30: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    skip_0:
    // 0x80292A34: lw          $t7, 0xEC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XEC);
    // 0x80292A38: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x80292A3C: beq         $at, $zero, L_80292A60
    if (ctx->r1 == 0) {
        // 0x80292A40: lui         $at, 0x4090
        ctx->r1 = S32(0X4090 << 16);
            goto L_80292A60;
    }
    // 0x80292A40: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
L_80292A44:
    // 0x80292A44: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80292A48: nop

    // 0x80292A4C: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80292A50: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80292A54: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x80292A58: b           L_80292A80
    // 0x80292A5C: sh          $t9, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = ctx->r25;
        goto L_80292A80;
    // 0x80292A5C: sh          $t9, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = ctx->r25;
L_80292A60:
    // 0x80292A60: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x80292A64: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80292A68: nop

    // 0x80292A6C: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x80292A70: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80292A74: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x80292A78: nop

    // 0x80292A7C: sh          $t1, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = ctx->r9;
L_80292A80:
    // 0x80292A80: lwc1        $f0, 0xE0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x80292A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80292A88: jal         0x802C51D0
    // 0x80292A8C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x80292A8C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x80292A90: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80292A94: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x80292A98: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    // 0x80292A9C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80292AA0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80292AA4: jal         0x8022A0D0
    // 0x80292AA8: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x80292AA8: nop

    after_1:
    // 0x80292AAC: lh          $t2, 0x10C($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X10C);
    // 0x80292AB0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80292AB4: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x80292AB8: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80292ABC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80292AC0: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80292AC4: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80292AC8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80292ACC: jal         0x8022A0D0
    // 0x80292AD0: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_2;
    // 0x80292AD0: nop

    after_2:
    // 0x80292AD4: lh          $t3, 0x10E($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X10E);
    // 0x80292AD8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80292ADC: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80292AE0: bne         $t3, $zero, L_80292B50
    if (ctx->r11 != 0) {
        // 0x80292AE4: addiu       $a1, $sp, 0x5C
        ctx->r5 = ADD32(ctx->r29, 0X5C);
            goto L_80292B50;
    }
    // 0x80292AE4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80292AE8: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80292AEC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80292AF0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80292AF4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80292AF8: lui         $at, 0x44C8
    ctx->r1 = S32(0X44C8 << 16);
    // 0x80292AFC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80292B00: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80292B04: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80292B08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80292B0C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80292B10: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80292B14: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80292B18: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80292B1C: lw          $t4, 0x8C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8C);
    // 0x80292B20: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80292B24: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x80292B28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80292B2C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80292B30: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80292B34: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80292B38: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80292B3C: addiu       $a2, $zero, 0x59
    ctx->r6 = ADD32(0, 0X59);
    // 0x80292B40: jal         0x802AB018
    // 0x80292B44: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    static_3_802AB018(rdram, ctx);
        goto after_3;
    // 0x80292B44: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_3:
    // 0x80292B48: b           L_80292C78
    // 0x80292B4C: lw          $t2, 0xEC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XEC);
        goto L_80292C78;
    // 0x80292B4C: lw          $t2, 0xEC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XEC);
L_80292B50:
    // 0x80292B50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80292B54: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80292B58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80292B5C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80292B60: lwc1        $f0, 0xE0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x80292B64: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80292B68: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80292B6C: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x80292B70: mul.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80292B74: sub.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80292B78: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80292B7C: jal         0x8022A0D0
    // 0x80292B80: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    static_3_8022A0D0(rdram, ctx);
        goto after_4;
    // 0x80292B80: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x80292B84: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80292B88: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80292B8C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80292B90: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80292B94: lui         $at, 0x44C8
    ctx->r1 = S32(0X44C8 << 16);
    // 0x80292B98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80292B9C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80292BA0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80292BA4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80292BA8: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80292BAC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80292BB0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x80292BB4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80292BB8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80292BBC: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x80292BC0: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x80292BC4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80292BC8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80292BCC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80292BD0: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80292BD4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80292BD8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80292BDC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80292BE0: addiu       $a2, $zero, 0x59
    ctx->r6 = ADD32(0, 0X59);
    // 0x80292BE4: jal         0x802AB018
    // 0x80292BE8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    static_3_802AB018(rdram, ctx);
        goto after_5;
    // 0x80292BE8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_5:
    // 0x80292BEC: beq         $v0, $zero, L_80292C74
    if (ctx->r2 == 0) {
        // 0x80292BF0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80292C74;
    }
    // 0x80292BF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80292BF4: lbu         $v1, 0x110($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X110);
    // 0x80292BF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80292BFC: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x80292C00: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x80292C04: lw          $v0, 0x13C($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X13C);
    // 0x80292C08: bne         $v0, $zero, L_80292C24
    if (ctx->r2 != 0) {
        // 0x80292C0C: nop
    
            goto L_80292C24;
    }
    // 0x80292C0C: nop

    // 0x80292C10: andi        $v1, $zero, 0xFF
    ctx->r3 = 0 & 0XFF;
    // 0x80292C14: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x80292C18: sb          $zero, 0x110($s0)
    MEM_B(0X110, ctx->r16) = 0;
    // 0x80292C1C: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x80292C20: lw          $v0, 0x13C($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X13C);
L_80292C24:
    // 0x80292C24: bnel        $v0, $at, L_80292C54
    if (ctx->r2 != ctx->r1) {
        // 0x80292C28: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80292C54;
    }
    goto skip_1;
    // 0x80292C28: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_1:
    // 0x80292C2C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80292C30: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80292C34: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80292C38: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x80292C3C: sb          $t6, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r14;
    // 0x80292C40: jal         0x802D0CC0
    // 0x80292C44: lw          $a1, 0x128($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X128);
    static_3_802D0CC0(rdram, ctx);
        goto after_6;
    // 0x80292C44: lw          $a1, 0x128($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X128);
    after_6:
    // 0x80292C48: b           L_80292C78
    // 0x80292C4C: lw          $t2, 0xEC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XEC);
        goto L_80292C78;
    // 0x80292C4C: lw          $t2, 0xEC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XEC);
    // 0x80292C50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_80292C54:
    // 0x80292C54: bne         $v0, $at, L_80292C74
    if (ctx->r2 != ctx->r1) {
        // 0x80292C58: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_80292C74;
    }
    // 0x80292C58: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80292C5C: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x80292C60: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x80292C64: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x80292C68: sb          $t9, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r25;
    // 0x80292C6C: jal         0x802D0C7C
    // 0x80292C70: lw          $a1, 0x114($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X114);
    static_3_802D0C7C(rdram, ctx);
        goto after_7;
    // 0x80292C70: lw          $a1, 0x114($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X114);
    after_7:
L_80292C74:
    // 0x80292C74: lw          $t2, 0xEC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XEC);
L_80292C78:
    // 0x80292C78: lwc1        $f6, 0xA4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x80292C7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80292C80: bne         $t2, $at, L_80292CA0
    if (ctx->r10 != ctx->r1) {
        // 0x80292C84: swc1        $f6, 0xF4($s0)
        MEM_W(0XF4, ctx->r16) = ctx->f6.u32l;
            goto L_80292CA0;
    }
    // 0x80292C84: swc1        $f6, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f6.u32l;
    // 0x80292C88: lw          $t3, 0x18C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X18C);
    // 0x80292C8C: addiu       $t5, $zero, -0xA
    ctx->r13 = ADD32(0, -0XA);
    // 0x80292C90: sb          $zero, 0x110($s0)
    MEM_B(0X110, ctx->r16) = 0;
    // 0x80292C94: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80292C98: sw          $t4, 0x18C($s0)
    MEM_W(0X18C, ctx->r16) = ctx->r12;
    // 0x80292C9C: sh          $t5, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = ctx->r13;
L_80292CA0:
    // 0x80292CA0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80292CA4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80292CA8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x80292CAC: jr          $ra
    // 0x80292CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80292CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802CC1BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CC23C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802CC240: bne         $a1, $at, L_802CC258
    if (ctx->r5 != ctx->r1) {
        // 0x802CC244: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_802CC258;
    }
    // 0x802CC244: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802CC248: lh          $t6, 0x160($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X160);
    // 0x802CC24C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x802CC250: b           L_802CC270
    // 0x802CC254: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
        goto L_802CC270;
    // 0x802CC254: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
L_802CC258:
    // 0x802CC258: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802CC25C: bnel        $a1, $at, L_802CC274
    if (ctx->r5 != ctx->r1) {
        // 0x802CC260: lw          $v0, 0x4($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X4);
            goto L_802CC274;
    }
    goto skip_0;
    // 0x802CC260: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    skip_0:
    // 0x802CC264: lh          $t8, 0x162($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X162);
    // 0x802CC268: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802CC26C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
L_802CC270:
    // 0x802CC270: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
L_802CC274:
    // 0x802CC274: jr          $ra
    // 0x802CC278: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x802CC278: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void D_802950A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295120: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80295124: jr          $ra
    // 0x80295128: swc1        $f12, 0x154($a0)
    MEM_W(0X154, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x80295128: swc1        $f12, 0x154($a0)
    MEM_W(0X154, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_80299780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299800: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80299804: lw          $t7, 0x28($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X28);
    // 0x80299808: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x8029980C: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80299810: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80299814: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80299818: sb          $t6, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r14;
    // 0x8029981C: sb          $v1, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r3;
    // 0x80299820: sb          $v1, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = ctx->r3;
    // 0x80299824: sb          $a1, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r5;
    // 0x80299828: sb          $a1, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r5;
    // 0x8029982C: sw          $t0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r8;
    // 0x80299830: sw          $t0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r8;
    // 0x80299834: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x80299838: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8029983C: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80299840: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80299844: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80299848: sb          $t9, 0x89($a0)
    MEM_B(0X89, ctx->r4) = ctx->r25;
    // 0x8029984C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80299850: sw          $t7, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r15;
    // 0x80299854: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80299858: addiu       $t9, $v1, -0x1
    ctx->r25 = ADD32(ctx->r3, -0X1);
    // 0x8029985C: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x80299860: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80299864: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80299868: sw          $t6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r14;
    // 0x8029986C: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x80299870: sb          $t9, 0x32($a0)
    MEM_B(0X32, ctx->r4) = ctx->r25;
    // 0x80299874: sb          $zero, 0x31($a0)
    MEM_B(0X31, ctx->r4) = 0;
    // 0x80299878: sb          $t7, 0x33($a0)
    MEM_B(0X33, ctx->r4) = ctx->r15;
    // 0x8029987C: sb          $t1, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r9;
    // 0x80299880: sb          $t1, 0x35($a0)
    MEM_B(0X35, ctx->r4) = ctx->r9;
    // 0x80299884: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80299888: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x8029988C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80299890: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80299894: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80299898: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8029989C: addiu       $t3, $zero, 0xD
    ctx->r11 = ADD32(0, 0XD);
L_802998A0:
    // 0x802998A0: lbu         $v1, 0x89($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X89);
    // 0x802998A4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x802998A8: addu        $t9, $t2, $a2
    ctx->r25 = ADD32(ctx->r10, ctx->r6);
    // 0x802998AC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802998B0: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    // 0x802998B4: bne         $a1, $zero, L_802998C4
    if (ctx->r5 != 0) {
        // 0x802998B8: nop
    
            goto L_802998C4;
    }
    // 0x802998B8: nop

    // 0x802998BC: b           L_802998DC
    // 0x802998C0: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
        goto L_802998DC;
    // 0x802998C0: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
L_802998C4:
    // 0x802998C4: bne         $t4, $a1, L_802998D8
    if (ctx->r12 != ctx->r5) {
        // 0x802998C8: addu        $t7, $t2, $a2
        ctx->r15 = ADD32(ctx->r10, ctx->r6);
            goto L_802998D8;
    }
    // 0x802998C8: addu        $t7, $t2, $a2
    ctx->r15 = ADD32(ctx->r10, ctx->r6);
    // 0x802998CC: addu        $t6, $t5, $a2
    ctx->r14 = ADD32(ctx->r13, ctx->r6);
    // 0x802998D0: b           L_802998DC
    // 0x802998D4: lw          $v1, 0x0($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X0);
        goto L_802998DC;
    // 0x802998D4: lw          $v1, 0x0($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X0);
L_802998D8:
    // 0x802998D8: lw          $v1, 0x0($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X0);
L_802998DC:
    // 0x802998DC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802998E0: sw          $v1, 0x38($a3)
    MEM_W(0X38, ctx->r7) = ctx->r3;
    // 0x802998E4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802998E8: or          $t1, $v1, $zero
    ctx->r9 = ctx->r3 | 0;
L_802998EC:
    // 0x802998EC: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x802998F0: bnel        $t8, $t1, L_8029990C
    if (ctx->r24 != ctx->r9) {
        // 0x802998F4: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_8029990C;
    }
    goto skip_0;
    // 0x802998F4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_0:
    // 0x802998F8: lw          $t9, 0x28($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X28);
    // 0x802998FC: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x80299900: b           L_80299914
    // 0x80299904: sb          $t0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r8;
        goto L_80299914;
    // 0x80299904: sb          $t0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r8;
    // 0x80299908: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_8029990C:
    // 0x8029990C: bne         $t0, $t3, L_802998EC
    if (ctx->r8 != ctx->r11) {
        // 0x80299910: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_802998EC;
    }
    // 0x80299910: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_80299914:
    // 0x80299914: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80299918: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8029991C: bne         $v0, $t3, L_802998A0
    if (ctx->r2 != ctx->r11) {
        // 0x80299920: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_802998A0;
    }
    // 0x80299920: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80299924: jr          $ra
    // 0x80299928: nop

    return;
    // 0x80299928: nop

;}
RECOMP_FUNC void D_802A8D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8DBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A8DC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A8DC4: jal         0x8028D994
    // 0x802A8DC8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D994(rdram, ctx);
        goto after_0;
    // 0x802A8DC8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802A8DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A8DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A8DD4: jr          $ra
    // 0x802A8DD8: nop

    return;
    // 0x802A8DD8: nop

;}
RECOMP_FUNC void D_802A2088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2108: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A210C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A2110: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A2114: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x802A2118: jr          $ra
    // 0x802A211C: swc1        $f6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x802A211C: swc1        $f6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void D_802B7E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7E9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B7EA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B7EA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B7EA8: lbu         $t6, 0x968($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X968);
    // 0x802B7EAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B7EB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802B7EB4: beq         $t6, $zero, L_802B7F40
    if (ctx->r14 == 0) {
        // 0x802B7EB8: nop
    
            goto L_802B7F40;
    }
    // 0x802B7EB8: nop

    // 0x802B7EBC: lw          $t7, 0x95C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X95C);
    // 0x802B7EC0: beq         $a1, $t7, L_802B7F40
    if (ctx->r5 == ctx->r15) {
        // 0x802B7EC4: nop
    
            goto L_802B7F40;
    }
    // 0x802B7EC4: nop

    // 0x802B7EC8: sw          $a1, 0x95C($a0)
    MEM_W(0X95C, ctx->r4) = ctx->r5;
    // 0x802B7ECC: lw          $a1, 0x944($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X944);
    // 0x802B7ED0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802B7ED4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802B7ED8: beq         $a1, $at, L_802B7EFC
    if (ctx->r5 == ctx->r1) {
        // 0x802B7EDC: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_802B7EFC;
    }
    // 0x802B7EDC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802B7EE0: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7EE4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7EE8: addiu       $a0, $v0, 0x8F4
    ctx->r4 = ADD32(ctx->r2, 0X8F4);
    // 0x802B7EEC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B7EF0: jal         0x80302988
    // 0x802B7EF4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    static_3_80302988(rdram, ctx);
        goto after_0;
    // 0x802B7EF4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_0:
    // 0x802B7EF8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_802B7EFC:
    // 0x802B7EFC: lw          $a1, 0x948($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X948);
    // 0x802B7F00: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802B7F04: addiu       $a0, $v0, 0x8F4
    ctx->r4 = ADD32(ctx->r2, 0X8F4);
    // 0x802B7F08: beq         $a1, $at, L_802B7F24
    if (ctx->r5 == ctx->r1) {
        // 0x802B7F0C: lui         $a2, 0x3D4C
        ctx->r6 = S32(0X3D4C << 16);
            goto L_802B7F24;
    }
    // 0x802B7F0C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7F10: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7F14: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B7F18: jal         0x80302988
    // 0x802B7F1C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_80302988(rdram, ctx);
        goto after_1;
    // 0x802B7F1C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x802B7F20: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_802B7F24:
    // 0x802B7F24: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7F28: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7F2C: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
    // 0x802B7F30: jal         0x80302988
    // 0x802B7F34: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_80302988(rdram, ctx);
        goto after_2;
    // 0x802B7F34: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x802B7F38: b           L_802B7F40
    // 0x802B7F3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802B7F40;
    // 0x802B7F3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802B7F40:
    // 0x802B7F40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B7F44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B7F48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802B7F4C: jr          $ra
    // 0x802B7F50: nop

    return;
    // 0x802B7F50: nop

;}
RECOMP_FUNC void D_802F2A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2A9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802F2AA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802F2AA4: jal         0x8028D994
    // 0x802F2AA8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D994(rdram, ctx);
        goto after_0;
    // 0x802F2AA8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802F2AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802F2AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802F2AB4: jr          $ra
    // 0x802F2AB8: nop

    return;
    // 0x802F2AB8: nop

;}
RECOMP_FUNC void D_802957E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295860: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80295864: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80295868: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029586C: bne         $a0, $zero, L_80295884
    if (ctx->r4 != 0) {
        // 0x80295870: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80295884;
    }
    // 0x80295870: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80295874: jal         0x802C67EC
    // 0x80295878: addiu       $a0, $zero, 0x690
    ctx->r4 = ADD32(0, 0X690);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x80295878: addiu       $a0, $zero, 0x690
    ctx->r4 = ADD32(0, 0X690);
    after_0:
    // 0x8029587C: beq         $v0, $zero, L_802958A4
    if (ctx->r2 == 0) {
        // 0x80295880: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802958A4;
    }
    // 0x80295880: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80295884:
    // 0x80295884: jal         0x8031F89C
    // 0x80295888: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    static_3_8031F89C(rdram, ctx);
        goto after_1;
    // 0x80295888: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    after_1:
    // 0x8029588C: jal         0x8031D344
    // 0x80295890: addiu       $a0, $s0, 0x1E0
    ctx->r4 = ADD32(ctx->r16, 0X1E0);
    static_3_8031D344(rdram, ctx);
        goto after_2;
    // 0x80295890: addiu       $a0, $s0, 0x1E0
    ctx->r4 = ADD32(ctx->r16, 0X1E0);
    after_2:
    // 0x80295894: jal         0x8031D344
    // 0x80295898: addiu       $a0, $s0, 0x3C0
    ctx->r4 = ADD32(ctx->r16, 0X3C0);
    static_3_8031D344(rdram, ctx);
        goto after_3;
    // 0x80295898: addiu       $a0, $s0, 0x3C0
    ctx->r4 = ADD32(ctx->r16, 0X3C0);
    after_3:
    // 0x8029589C: jal         0x8031D488
    // 0x802958A0: addiu       $a0, $s0, 0x5A0
    ctx->r4 = ADD32(ctx->r16, 0X5A0);
    static_3_8031D488(rdram, ctx);
        goto after_4;
    // 0x802958A0: addiu       $a0, $s0, 0x5A0
    ctx->r4 = ADD32(ctx->r16, 0X5A0);
    after_4:
L_802958A4:
    // 0x802958A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802958A8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802958AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802958B0: jr          $ra
    // 0x802958B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802958B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802D3E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3E90: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D3E94: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D3E98: jr          $ra
    // 0x802D3E9C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802D3E9C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802F29FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2A7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802F2A80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802F2A84: jal         0x8028D750
    // 0x802F2A88: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D750(rdram, ctx);
        goto after_0;
    // 0x802F2A88: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802F2A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802F2A90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802F2A94: jr          $ra
    // 0x802F2A98: nop

    return;
    // 0x802F2A98: nop

;}
RECOMP_FUNC void func_802A1F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F80: jr          $ra
    // 0x802A1F84: lwc1        $f0, 0x6C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X6C);
    return;
    // 0x802A1F84: lwc1        $f0, 0x6C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X6C);
;}
RECOMP_FUNC void D_802E1300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E1380: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E1384: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E1388: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802E138C: jr          $ra
    // 0x802E1390: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    return;
    // 0x802E1390: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
;}
RECOMP_FUNC void D_802826FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028277C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80282780: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80282784: jr          $ra
    // 0x80282788: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x80282788: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802E751C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E759C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E75A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E75A4: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E75A8: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E75AC: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E75B0: lh          $t6, 0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X10);
    // 0x802E75B4: jalr        $t9
    // 0x802E75B8: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802E75B8: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    after_0:
    // 0x802E75BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E75C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E75C4: jr          $ra
    // 0x802E75C8: nop

    return;
    // 0x802E75C8: nop

;}
RECOMP_FUNC void D_80295838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802958B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802958BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802958C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802958C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802958C8: beq         $a0, $zero, L_80295918
    if (ctx->r4 == 0) {
        // 0x802958CC: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_80295918;
    }
    // 0x802958CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802958D0: addiu       $a0, $a0, 0x5A0
    ctx->r4 = ADD32(ctx->r4, 0X5A0);
    // 0x802958D4: jal         0x8031D50C
    // 0x802958D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031D50C(rdram, ctx);
        goto after_0;
    // 0x802958D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x802958DC: addiu       $a0, $s0, 0x3C0
    ctx->r4 = ADD32(ctx->r16, 0X3C0);
    // 0x802958E0: jal         0x8031D3EC
    // 0x802958E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031D3EC(rdram, ctx);
        goto after_1;
    // 0x802958E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802958E8: addiu       $a0, $s0, 0x1E0
    ctx->r4 = ADD32(ctx->r16, 0X1E0);
    // 0x802958EC: jal         0x8031D3EC
    // 0x802958F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031D3EC(rdram, ctx);
        goto after_2;
    // 0x802958F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x802958F4: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x802958F8: jal         0x8031FA40
    // 0x802958FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031FA40(rdram, ctx);
        goto after_3;
    // 0x802958FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80295900: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80295904: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80295908: beql        $t7, $zero, L_8029591C
    if (ctx->r15 == 0) {
        // 0x8029590C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8029591C;
    }
    goto skip_0;
    // 0x8029590C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80295910: jal         0x802C681C
    // 0x80295914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_4;
    // 0x80295914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_80295918:
    // 0x80295918: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029591C:
    // 0x8029591C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80295920: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80295924: jr          $ra
    // 0x80295928: nop

    return;
    // 0x80295928: nop

;}
RECOMP_FUNC void D_802EF9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFA30: jr          $ra
    // 0x802EFA34: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802EFA34: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_8027E64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E6C4: jr          $ra
    // 0x8027E6C8: lwc1        $f0, 0x32B0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32B0);
    return;
    // 0x8027E6C8: lwc1        $f0, 0x32B0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32B0);
;}
RECOMP_FUNC void D_802A49F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A4A78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A4A7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A4A80: beq         $a0, $zero, L_802A4ABC
    if (ctx->r4 == 0) {
        // 0x802A4A84: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802A4ABC;
    }
    // 0x802A4A84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A4A88: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A4A8C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A4A90: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x802A4A94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A4A98: jal         0x802D1A34
    // 0x802A4A9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802D1A34(rdram, ctx);
        goto after_0;
    // 0x802A4A9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802A4AA0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802A4AA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A4AA8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802A4AAC: beql        $t8, $zero, L_802A4AC0
    if (ctx->r24 == 0) {
        // 0x802A4AB0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A4AC0;
    }
    goto skip_0;
    // 0x802A4AB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A4AB4: jal         0x802C681C
    // 0x802A4AB8: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802A4AB8: nop

    after_1:
L_802A4ABC:
    // 0x802A4ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A4AC0:
    // 0x802A4AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A4AC4: jr          $ra
    // 0x802A4AC8: nop

    return;
    // 0x802A4AC8: nop

;}
RECOMP_FUNC void D_802319D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802319D4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802319D8: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x802319DC: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x802319E0: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x802319E4: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x802319E8: jr          $ra
    // 0x802319EC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x802319EC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void D_802E16C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E1748: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802E174C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802E1750: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802E1754: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802E1758: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802E175C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802E1760: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802E1764: jal         0x8021BAE0
    // 0x802E1768: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x802E1768: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    after_0:
    // 0x802E176C: lw          $a0, 0x280($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X280);
    // 0x802E1770: ori         $s3, $zero, 0xFFFF
    ctx->r19 = 0 | 0XFFFF;
    // 0x802E1774: beql        $s3, $a0, L_802E1788
    if (ctx->r19 == ctx->r4) {
        // 0x802E1778: lw          $v0, 0x300($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X300);
            goto L_802E1788;
    }
    goto skip_0;
    // 0x802E1778: lw          $v0, 0x300($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X300);
    skip_0:
    // 0x802E177C: jal         0x8021BAE0
    // 0x802E1780: nop

    static_3_8021BAE0(rdram, ctx);
        goto after_1;
    // 0x802E1780: nop

    after_1:
    // 0x802E1784: lw          $v0, 0x300($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X300);
L_802E1788:
    // 0x802E1788: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802E178C: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x802E1790: blezl       $v0, L_802E17C8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802E1794: lw          $v0, 0x370($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X370);
            goto L_802E17C8;
    }
    goto skip_1;
    // 0x802E1794: lw          $v0, 0x370($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X370);
    skip_1:
L_802E1798:
    // 0x802E1798: lw          $a0, 0x290($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X290);
    // 0x802E179C: beql        $s3, $a0, L_802E17B4
    if (ctx->r19 == ctx->r4) {
        // 0x802E17A0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802E17B4;
    }
    goto skip_2;
    // 0x802E17A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x802E17A4: jal         0x8021BAE0
    // 0x802E17A8: nop

    static_3_8021BAE0(rdram, ctx);
        goto after_2;
    // 0x802E17A8: nop

    after_2:
    // 0x802E17AC: lw          $v0, 0x300($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X300);
    // 0x802E17B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802E17B4:
    // 0x802E17B4: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802E17B8: bne         $at, $zero, L_802E1798
    if (ctx->r1 != 0) {
        // 0x802E17BC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_802E1798;
    }
    // 0x802E17BC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802E17C0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802E17C4: lw          $v0, 0x370($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X370);
L_802E17C8:
    // 0x802E17C8: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x802E17CC: blezl       $v0, L_802E1800
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802E17D0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802E1800;
    }
    goto skip_3;
    // 0x802E17D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
L_802E17D4:
    // 0x802E17D4: lw          $a0, 0x304($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X304);
    // 0x802E17D8: beql        $s3, $a0, L_802E17F0
    if (ctx->r19 == ctx->r4) {
        // 0x802E17DC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802E17F0;
    }
    goto skip_4;
    // 0x802E17DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_4:
    // 0x802E17E0: jal         0x8021BAE0
    // 0x802E17E4: nop

    static_3_8021BAE0(rdram, ctx);
        goto after_3;
    // 0x802E17E4: nop

    after_3:
    // 0x802E17E8: lw          $v0, 0x370($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X370);
    // 0x802E17EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802E17F0:
    // 0x802E17F0: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802E17F4: bne         $at, $zero, L_802E17D4
    if (ctx->r1 != 0) {
        // 0x802E17F8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_802E17D4;
    }
    // 0x802E17F8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802E17FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802E1800:
    // 0x802E1800: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802E1804: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802E1808: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802E180C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802E1810: jr          $ra
    // 0x802E1814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802E1814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802A6964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A69E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A69E8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802A69EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A69F0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802A69F4: jal         0x80228DE0
    // 0x802A69F8: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802A69F8: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    after_0:
    // 0x802A69FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A6A00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A6A04: jr          $ra
    // 0x802A6A08: nop

    return;
    // 0x802A6A08: nop

;}

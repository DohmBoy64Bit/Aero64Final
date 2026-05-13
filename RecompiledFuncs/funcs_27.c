#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802DED70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DEDF0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DEDF4: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DEDF8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802DEDFC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DEE00: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DEE04: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x802DEE08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802DEE0C: lui         $at, 0x4384
    ctx->r1 = S32(0X4384 << 16);
    // 0x802DEE10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DEE14: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802DEE18: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802DEE1C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802DEE20: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802DEE24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802DEE28: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802DEE2C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802DEE30: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802DEE34: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802DEE38: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802DEE3C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x802DEE40: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802DEE44: jal         0x80308530
    // 0x802DEE48: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_0;
    // 0x802DEE48: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x802DEE4C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DEE50: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DEE54: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DEE58: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DEE5C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802DEE60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DEE64: lui         $at, 0x4384
    ctx->r1 = S32(0X4384 << 16);
    // 0x802DEE68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DEE6C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802DEE70: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802DEE74: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802DEE78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DEE7C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802DEE80: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802DEE84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802DEE88: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802DEE8C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x802DEE90: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x802DEE94: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x802DEE98: jal         0x80308530
    // 0x802DEE9C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    static_3_80308530(rdram, ctx);
        goto after_1;
    // 0x802DEE9C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802DEEA0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DEEA4: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DEEA8: lui         $at, 0x4420
    ctx->r1 = S32(0X4420 << 16);
    // 0x802DEEAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DEEB0: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x802DEEB4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802DEEB8: lui         $at, 0x4384
    ctx->r1 = S32(0X4384 << 16);
    // 0x802DEEBC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802DEEC0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802DEEC4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802DEEC8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802DEECC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DEED0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802DEED4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802DEED8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802DEEDC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802DEEE0: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x802DEEE4: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x802DEEE8: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x802DEEEC: jal         0x80308530
    // 0x802DEEF0: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    static_3_80308530(rdram, ctx);
        goto after_2;
    // 0x802DEEF0: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x802DEEF4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DEEF8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DEEFC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DEF00: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DEF04: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802DEF08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802DEF0C: lui         $at, 0x4384
    ctx->r1 = S32(0X4384 << 16);
    // 0x802DEF10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DEF14: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802DEF18: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802DEF1C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802DEF20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802DEF24: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802DEF28: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802DEF2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802DEF30: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802DEF34: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802DEF38: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x802DEF3C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802DEF40: jal         0x80308530
    // 0x802DEF44: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_3;
    // 0x802DEF44: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x802DEF48: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802DEF4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802DEF50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802DEF54: jr          $ra
    // 0x802DEF58: nop

    return;
    // 0x802DEF58: nop

;}
RECOMP_FUNC void D_80277290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277308: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027730C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80277310: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80277314: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80277318: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8027731C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80277320: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80277324: lbu         $t6, 0x6EFC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X6EFC);
    // 0x80277328: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8027732C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80277330: blez        $t6, L_802773F4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80277334: sll         $t7, $s4, 2
        ctx->r15 = S32(ctx->r20 << 2);
            goto L_802773F4;
    }
L_80277334:
    // 0x80277334: sll         $t7, $s4, 2
    ctx->r15 = S32(ctx->r20 << 2);
    // 0x80277338: addu        $s2, $s3, $t7
    ctx->r18 = ADD32(ctx->r19, ctx->r15);
    // 0x8027733C: lw          $a3, 0x6EEC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X6EEC);
    // 0x80277340: beql        $a3, $zero, L_802773DC
    if (ctx->r7 == 0) {
        // 0x80277344: lbu         $t4, 0x6EFC($s3)
        ctx->r12 = MEM_BU(ctx->r19, 0X6EFC);
            goto L_802773DC;
    }
    goto skip_0;
    // 0x80277344: lbu         $t4, 0x6EFC($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X6EFC);
    skip_0:
    // 0x80277348: jal         0x80317E10
    // 0x8027734C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_0;
    // 0x8027734C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x80277350: beql        $v0, $zero, L_802773DC
    if (ctx->r2 == 0) {
        // 0x80277354: lbu         $t4, 0x6EFC($s3)
        ctx->r12 = MEM_BU(ctx->r19, 0X6EFC);
            goto L_802773DC;
    }
    goto skip_1;
    // 0x80277354: lbu         $t4, 0x6EFC($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X6EFC);
    skip_1:
    // 0x80277358: jal         0x802E45C4
    // 0x8027735C: lw          $a0, 0x6EEC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X6EEC);
    static_3_802E45C4(rdram, ctx);
        goto after_1;
    // 0x8027735C: lw          $a0, 0x6EEC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X6EEC);
    after_1:
    // 0x80277360: beql        $v0, $zero, L_802773DC
    if (ctx->r2 == 0) {
        // 0x80277364: lbu         $t4, 0x6EFC($s3)
        ctx->r12 = MEM_BU(ctx->r19, 0X6EFC);
            goto L_802773DC;
    }
    goto skip_2;
    // 0x80277364: lbu         $t4, 0x6EFC($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X6EFC);
    skip_2:
    // 0x80277368: lw          $a3, 0x6EEC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X6EEC);
    // 0x8027736C: lw          $a1, 0x32A8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X32A8);
    // 0x80277370: lw          $a2, 0x32B0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X32B0);
    // 0x80277374: lw          $s0, 0x1A0($a3)
    ctx->r16 = MEM_W(ctx->r7, 0X1A0);
    // 0x80277378: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x8027737C: lh          $t8, 0x50($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X50);
    // 0x80277380: jalr        $t9
    // 0x80277384: addu        $a0, $t8, $a3
    ctx->r4 = ADD32(ctx->r24, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80277384: addu        $a0, $t8, $a3
    ctx->r4 = ADD32(ctx->r24, ctx->r7);
    after_2:
    // 0x80277388: jal         0x80319F00
    // 0x8027738C: lw          $a0, 0x6EEC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X6EEC);
    static_3_80319F00(rdram, ctx);
        goto after_3;
    // 0x8027738C: lw          $a0, 0x6EEC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X6EEC);
    after_3:
    // 0x80277390: lw          $a3, 0x6EEC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X6EEC);
    // 0x80277394: lw          $a1, 0x32A8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X32A8);
    // 0x80277398: lw          $a2, 0x32B0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X32B0);
    // 0x8027739C: lw          $s0, 0x1A0($a3)
    ctx->r16 = MEM_W(ctx->r7, 0X1A0);
    // 0x802773A0: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x802773A4: lh          $t0, 0x98($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X98);
    // 0x802773A8: jalr        $t9
    // 0x802773AC: addu        $a0, $t0, $a3
    ctx->r4 = ADD32(ctx->r8, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802773AC: addu        $a0, $t0, $a3
    ctx->r4 = ADD32(ctx->r8, ctx->r7);
    after_4:
    // 0x802773B0: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x802773B4: bnel        $t1, $zero, L_802773DC
    if (ctx->r9 != 0) {
        // 0x802773B8: lbu         $t4, 0x6EFC($s3)
        ctx->r12 = MEM_BU(ctx->r19, 0X6EFC);
            goto L_802773DC;
    }
    goto skip_3;
    // 0x802773B8: lbu         $t4, 0x6EFC($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X6EFC);
    skip_3:
    // 0x802773BC: lw          $a3, 0x6EEC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X6EEC);
    // 0x802773C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802773C4: lw          $s0, 0x1A0($a3)
    ctx->r16 = MEM_W(ctx->r7, 0X1A0);
    // 0x802773C8: lw          $t9, 0xAC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XAC);
    // 0x802773CC: lh          $t2, 0xA8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XA8);
    // 0x802773D0: jalr        $t9
    // 0x802773D4: addu        $a0, $t2, $a3
    ctx->r4 = ADD32(ctx->r10, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802773D4: addu        $a0, $t2, $a3
    ctx->r4 = ADD32(ctx->r10, ctx->r7);
    after_5:
    // 0x802773D8: lbu         $t4, 0x6EFC($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X6EFC);
L_802773DC:
    // 0x802773DC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x802773E0: andi        $t3, $s4, 0xFF
    ctx->r11 = ctx->r20 & 0XFF;
    // 0x802773E4: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x802773E8: bne         $at, $zero, L_80277334
    if (ctx->r1 != 0) {
        // 0x802773EC: or          $s4, $t3, $zero
        ctx->r20 = ctx->r11 | 0;
            goto L_80277334;
    }
    // 0x802773EC: or          $s4, $t3, $zero
    ctx->r20 = ctx->r11 | 0;
    // 0x802773F0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_802773F4:
    // 0x802773F4: lbu         $t5, 0x6FB8($s3)
    ctx->r13 = MEM_BU(ctx->r19, 0X6FB8);
    // 0x802773F8: blez        $t5, L_802774B4
    if (SIGNED(ctx->r13) <= 0) {
        // 0x802773FC: sll         $t6, $s4, 2
        ctx->r14 = S32(ctx->r20 << 2);
            goto L_802774B4;
    }
L_802773FC:
    // 0x802773FC: sll         $t6, $s4, 2
    ctx->r14 = S32(ctx->r20 << 2);
    // 0x80277400: addu        $s2, $s3, $t6
    ctx->r18 = ADD32(ctx->r19, ctx->r14);
    // 0x80277404: lw          $s1, 0x6F94($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X6F94);
    // 0x80277408: beql        $s1, $zero, L_8027749C
    if (ctx->r17 == 0) {
        // 0x8027740C: lbu         $t3, 0x6FB8($s3)
        ctx->r11 = MEM_BU(ctx->r19, 0X6FB8);
            goto L_8027749C;
    }
    goto skip_4;
    // 0x8027740C: lbu         $t3, 0x6FB8($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X6FB8);
    skip_4:
    // 0x80277410: jal         0x80317E10
    // 0x80277414: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_6;
    // 0x80277414: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x80277418: beql        $v0, $zero, L_8027749C
    if (ctx->r2 == 0) {
        // 0x8027741C: lbu         $t3, 0x6FB8($s3)
        ctx->r11 = MEM_BU(ctx->r19, 0X6FB8);
            goto L_8027749C;
    }
    goto skip_5;
    // 0x8027741C: lbu         $t3, 0x6FB8($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X6FB8);
    skip_5:
    // 0x80277420: jal         0x802E45C4
    // 0x80277424: lw          $a0, 0x6F94($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X6F94);
    static_3_802E45C4(rdram, ctx);
        goto after_7;
    // 0x80277424: lw          $a0, 0x6F94($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X6F94);
    after_7:
    // 0x80277428: beql        $v0, $zero, L_8027749C
    if (ctx->r2 == 0) {
        // 0x8027742C: lbu         $t3, 0x6FB8($s3)
        ctx->r11 = MEM_BU(ctx->r19, 0X6FB8);
            goto L_8027749C;
    }
    goto skip_6;
    // 0x8027742C: lbu         $t3, 0x6FB8($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X6FB8);
    skip_6:
    // 0x80277430: lw          $s1, 0x6F94($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X6F94);
    // 0x80277434: lw          $a1, 0x32A8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X32A8);
    // 0x80277438: lw          $a2, 0x32B0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X32B0);
    // 0x8027743C: lw          $s0, 0x1A0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1A0);
    // 0x80277440: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x80277444: lh          $t7, 0x50($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X50);
    // 0x80277448: jalr        $t9
    // 0x8027744C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x8027744C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    after_8:
    // 0x80277450: lw          $s1, 0x6F94($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X6F94);
    // 0x80277454: lw          $a1, 0x32A8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X32A8);
    // 0x80277458: lw          $a2, 0x32B0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X32B0);
    // 0x8027745C: lw          $s0, 0x1A0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1A0);
    // 0x80277460: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x80277464: lh          $t8, 0x98($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X98);
    // 0x80277468: jalr        $t9
    // 0x8027746C: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x8027746C: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    after_9:
    // 0x80277470: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x80277474: bnel        $t0, $zero, L_8027749C
    if (ctx->r8 != 0) {
        // 0x80277478: lbu         $t3, 0x6FB8($s3)
        ctx->r11 = MEM_BU(ctx->r19, 0X6FB8);
            goto L_8027749C;
    }
    goto skip_7;
    // 0x80277478: lbu         $t3, 0x6FB8($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X6FB8);
    skip_7:
    // 0x8027747C: lw          $s1, 0x6F94($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X6F94);
    // 0x80277480: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80277484: lw          $s0, 0x1A0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1A0);
    // 0x80277488: lw          $t9, 0xAC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XAC);
    // 0x8027748C: lh          $t1, 0xA8($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XA8);
    // 0x80277490: jalr        $t9
    // 0x80277494: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x80277494: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    after_10:
    // 0x80277498: lbu         $t3, 0x6FB8($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X6FB8);
L_8027749C:
    // 0x8027749C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x802774A0: andi        $t2, $s4, 0xFF
    ctx->r10 = ctx->r20 & 0XFF;
    // 0x802774A4: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x802774A8: bne         $at, $zero, L_802773FC
    if (ctx->r1 != 0) {
        // 0x802774AC: or          $s4, $t2, $zero
        ctx->r20 = ctx->r10 | 0;
            goto L_802773FC;
    }
    // 0x802774AC: or          $s4, $t2, $zero
    ctx->r20 = ctx->r10 | 0;
    // 0x802774B0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_802774B4:
    // 0x802774B4: lbu         $v0, 0x70F0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X70F0);
    // 0x802774B8: blez        $v0, L_80277550
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802774BC: sll         $t4, $s4, 2
        ctx->r12 = S32(ctx->r20 << 2);
            goto L_80277550;
    }
L_802774BC:
    // 0x802774BC: sll         $t4, $s4, 2
    ctx->r12 = S32(ctx->r20 << 2);
    // 0x802774C0: addu        $s2, $s3, $t4
    ctx->r18 = ADD32(ctx->r19, ctx->r12);
    // 0x802774C4: lw          $s1, 0x7050($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X7050);
    // 0x802774C8: beql        $s1, $zero, L_80277540
    if (ctx->r17 == 0) {
        // 0x802774CC: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80277540;
    }
    goto skip_8;
    // 0x802774CC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_8:
    // 0x802774D0: lw          $s0, 0x1A0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1A0);
    // 0x802774D4: lw          $a1, 0x32A8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X32A8);
    // 0x802774D8: lw          $a2, 0x32B0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X32B0);
    // 0x802774DC: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x802774E0: lh          $t5, 0x50($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X50);
    // 0x802774E4: jalr        $t9
    // 0x802774E8: addu        $a0, $t5, $s1
    ctx->r4 = ADD32(ctx->r13, ctx->r17);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x802774E8: addu        $a0, $t5, $s1
    ctx->r4 = ADD32(ctx->r13, ctx->r17);
    after_11:
    // 0x802774EC: lw          $s1, 0x7050($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X7050);
    // 0x802774F0: lw          $a1, 0x32A8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X32A8);
    // 0x802774F4: lw          $a2, 0x32B0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X32B0);
    // 0x802774F8: lw          $s0, 0x1A0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1A0);
    // 0x802774FC: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x80277500: lh          $t6, 0x98($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X98);
    // 0x80277504: jalr        $t9
    // 0x80277508: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x80277508: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    after_12:
    // 0x8027750C: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x80277510: bnel        $t7, $zero, L_8027753C
    if (ctx->r15 != 0) {
        // 0x80277514: lbu         $v0, 0x70F0($s3)
        ctx->r2 = MEM_BU(ctx->r19, 0X70F0);
            goto L_8027753C;
    }
    goto skip_9;
    // 0x80277514: lbu         $v0, 0x70F0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X70F0);
    skip_9:
    // 0x80277518: lw          $s1, 0x7050($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X7050);
    // 0x8027751C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80277520: lw          $s0, 0x1A0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1A0);
    // 0x80277524: lw          $t9, 0xAC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XAC);
    // 0x80277528: lh          $t8, 0xA8($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XA8);
    // 0x8027752C: jalr        $t9
    // 0x80277530: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x80277530: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    after_13:
    // 0x80277534: sw          $zero, 0x7050($s2)
    MEM_W(0X7050, ctx->r18) = 0;
    // 0x80277538: lbu         $v0, 0x70F0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X70F0);
L_8027753C:
    // 0x8027753C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80277540:
    // 0x80277540: andi        $t0, $s4, 0xFF
    ctx->r8 = ctx->r20 & 0XFF;
    // 0x80277544: slt         $at, $t0, $v0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80277548: bne         $at, $zero, L_802774BC
    if (ctx->r1 != 0) {
        // 0x8027754C: or          $s4, $t0, $zero
        ctx->r20 = ctx->r8 | 0;
            goto L_802774BC;
    }
    // 0x8027754C: or          $s4, $t0, $zero
    ctx->r20 = ctx->r8 | 0;
L_80277550:
    // 0x80277550: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80277554: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80277558: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8027755C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80277560: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80277564: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80277568: jr          $ra
    // 0x8027756C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027756C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802DD28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD30C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802DD310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802DD314: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802DD318: jal         0x8021BAE0
    // 0x802DD31C: lw          $a0, 0x70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70);
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x802DD31C: lw          $a0, 0x70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70);
    after_0:
    // 0x802DD320: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DD324: jal         0x80205AA0
    // 0x802DD328: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_80205AA0(rdram, ctx);
        goto after_1;
    // 0x802DD328: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802DD32C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x802DD330: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x802DD334: lw          $v0, 0x14($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X14);
    // 0x802DD338: sw          $t8, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r24;
    // 0x802DD33C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802DD340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802DD344: jr          $ra
    // 0x802DD348: nop

    return;
    // 0x802DD348: nop

;}
RECOMP_FUNC void D_802E5374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E53F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802E53F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802E53FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802E5400: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x802E5404: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802E5408: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E540C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802E5410: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802E5414: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x802E5418: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802E541C: beq         $t7, $at, L_802E54BC
    if (ctx->r15 == ctx->r1) {
        // 0x802E5420: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_802E54BC;
    }
    // 0x802E5420: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x802E5424: beq         $t6, $zero, L_802E54A8
    if (ctx->r14 == 0) {
        // 0x802E5428: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802E54A8;
    }
    // 0x802E5428: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E542C: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x802E5430: bne         $t7, $at, L_802E5440
    if (ctx->r15 != ctx->r1) {
        // 0x802E5434: addiu       $a0, $zero, 0x1F4
        ctx->r4 = ADD32(0, 0X1F4);
            goto L_802E5440;
    }
    // 0x802E5434: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x802E5438: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E543C: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
L_802E5440:
    // 0x802E5440: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x802E5444: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802E5448: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x802E544C: jal         0x80305E90
    // 0x802E5450: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    static_3_80305E90(rdram, ctx);
        goto after_0;
    // 0x802E5450: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x802E5454: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x802E5458: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E545C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E5460: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x802E5464: addiu       $a1, $a1, 0xDD8
    ctx->r5 = ADD32(ctx->r5, 0XDD8);
    // 0x802E5468: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x802E546C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802E5470: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802E5474: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802E5478: jal         0x80302238
    // 0x802E547C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_1;
    // 0x802E547C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802E5480: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802E5484: beq         $v0, $zero, L_802E54BC
    if (ctx->r2 == 0) {
        // 0x802E5488: lwc1        $f0, 0x2C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_802E54BC;
    }
    // 0x802E5488: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802E548C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E5490: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E5494: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802E5498: jal         0x80302664
    // 0x802E549C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_2;
    // 0x802E549C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802E54A0: b           L_802E54C0
    // 0x802E54A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802E54C0;
    // 0x802E54A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802E54A8:
    // 0x802E54A8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E54AC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x802E54B0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    // 0x802E54B4: jal         0x80302414
    // 0x802E54B8: addiu       $a1, $a1, 0xDD8
    ctx->r5 = ADD32(ctx->r5, 0XDD8);
    static_3_80302414(rdram, ctx);
        goto after_3;
    // 0x802E54B8: addiu       $a1, $a1, 0xDD8
    ctx->r5 = ADD32(ctx->r5, 0XDD8);
    after_3:
L_802E54BC:
    // 0x802E54BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802E54C0:
    // 0x802E54C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802E54C4: jr          $ra
    // 0x802E54C8: nop

    return;
    // 0x802E54C8: nop

;}
RECOMP_FUNC void D_80298D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298DAC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80298DB0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80298DB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80298DB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80298DBC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80298DC0: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80298DC4: jal         0x8028DA48
    // 0x80298DC8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028DA48(rdram, ctx);
        goto after_0;
    // 0x80298DC8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x80298DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80298DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80298DD4: jr          $ra
    // 0x80298DD8: nop

    return;
    // 0x80298DD8: nop

;}
RECOMP_FUNC void D_80299BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299C70: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x80299C74: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80299C78: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80299C7C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80299C80: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80299C84: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80299C88: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x80299C8C: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80299C90: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80299C94: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80299C98: sb          $t6, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r14;
    // 0x80299C9C: sb          $t1, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r9;
    // 0x80299CA0: sb          $zero, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = 0;
    // 0x80299CA4: sw          $t8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r24;
    // 0x80299CA8: sw          $t9, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r25;
    // 0x80299CAC: sw          $t0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r8;
    // 0x80299CB0: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x80299CB4: sb          $t2, 0x32($a0)
    MEM_B(0X32, ctx->r4) = ctx->r10;
    // 0x80299CB8: jr          $ra
    // 0x80299CBC: sb          $t3, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r11;
    return;
    // 0x80299CBC: sb          $t3, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r11;
;}
RECOMP_FUNC void D_802C852C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C85AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802C85B0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802C85B4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802C85B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C85BC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802C85C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802C85C4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802C85C8: jal         0x80207130
    // 0x802C85CC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    static_3_80207130(rdram, ctx);
        goto after_0;
    // 0x802C85CC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x802C85D0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x802C85D4: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x802C85D8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802C85DC: lwc1        $f6, 0x38($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X38);
    // 0x802C85E0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802C85E4: jal         0x8022970C
    // 0x802C85E8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x802C85E8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x802C85EC: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x802C85F0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802C85F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802C85F8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x802C85FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802C8600: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802C8604: lui         $a1, 0xBFC9
    ctx->r5 = S32(0XBFC9 << 16);
    // 0x802C8608: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x802C860C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802C8610: swc1        $f10, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f10.u32l;
    // 0x802C8614: swc1        $f16, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f16.u32l;
    // 0x802C8618: jal         0x802D01D4
    // 0x802C861C: swc1        $f18, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f18.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x802C861C: swc1        $f18, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f18.u32l;
    after_2:
    // 0x802C8620: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802C8624: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x802C8628: jal         0x8028FC24
    // 0x802C862C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    static_3_8028FC24(rdram, ctx);
        goto after_3;
    // 0x802C862C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_3:
    // 0x802C8630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802C8634: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802C8638: jr          $ra
    // 0x802C863C: nop

    return;
    // 0x802C863C: nop

;}
RECOMP_FUNC void D_8027B0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027B168: addiu       $sp, $sp, -0x148
    ctx->r29 = ADD32(ctx->r29, -0X148);
    // 0x8027B16C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8027B170: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8027B174: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027B178: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8027B17C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027B180: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027B184: sw          $a1, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r5;
    // 0x8027B188: sb          $zero, 0x143($sp)
    MEM_B(0X143, ctx->r29) = 0;
    // 0x8027B18C: jal         0x803187E4
    // 0x8027B190: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_803187E4(rdram, ctx);
        goto after_0;
    // 0x8027B190: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8027B194: beq         $v0, $zero, L_8027B528
    if (ctx->r2 == 0) {
        // 0x8027B198: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8027B528;
    }
    // 0x8027B198: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8027B19C: lw          $t6, 0x7170($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X7170);
    // 0x8027B1A0: bnel        $t6, $zero, L_8027B52C
    if (ctx->r14 != 0) {
        // 0x8027B1A4: lw          $t0, 0x7170($s3)
        ctx->r8 = MEM_W(ctx->r19, 0X7170);
            goto L_8027B52C;
    }
    goto skip_0;
    // 0x8027B1A4: lw          $t0, 0x7170($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X7170);
    skip_0:
    // 0x8027B1A8: jal         0x80318804
    // 0x8027B1AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_80318804(rdram, ctx);
        goto after_1;
    // 0x8027B1AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8027B1B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027B1B4: bne         $v0, $at, L_8027B248
    if (ctx->r2 != ctx->r1) {
        // 0x8027B1B8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8027B248;
    }
    // 0x8027B1B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027B1BC: jal         0x80318EF4
    // 0x8027B1C0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    static_3_80318EF4(rdram, ctx);
        goto after_2;
    // 0x8027B1C0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x8027B1C4: jal         0x803187F4
    // 0x8027B1C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_803187F4(rdram, ctx);
        goto after_3;
    // 0x8027B1C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x8027B1CC: beql        $v0, $zero, L_8027B1F8
    if (ctx->r2 == 0) {
        // 0x8027B1D0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8027B1F8;
    }
    goto skip_1;
    // 0x8027B1D0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_1:
    // 0x8027B1D4: jal         0x803187F4
    // 0x8027B1D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_803187F4(rdram, ctx);
        goto after_4;
    // 0x8027B1D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x8027B1DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027B1E0: jal         0x80318F0C
    // 0x8027B1E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F0C(rdram, ctx);
        goto after_5;
    // 0x8027B1E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8027B1E8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027B1EC: jal         0x80318F1C
    // 0x8027B1F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F1C(rdram, ctx);
        goto after_6;
    // 0x8027B1F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8027B1F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8027B1F8:
    // 0x8027B1F8: jal         0x80318EFC
    // 0x8027B1FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80318EFC(rdram, ctx);
        goto after_7;
    // 0x8027B1FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x8027B200: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027B204: jal         0x80318F14
    // 0x8027B208: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80318F14(rdram, ctx);
        goto after_8;
    // 0x8027B208: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x8027B20C: jal         0x8031A36C
    // 0x8027B210: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_8031A36C(rdram, ctx);
        goto after_9;
    // 0x8027B210: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_9:
    // 0x8027B214: bne         $v0, $zero, L_8027B22C
    if (ctx->r2 != 0) {
        // 0x8027B218: nop
    
            goto L_8027B22C;
    }
    // 0x8027B218: nop

    // 0x8027B21C: jal         0x802E7FC8
    // 0x8027B220: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802E7FC8(rdram, ctx);
        goto after_10;
    // 0x8027B220: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_10:
    // 0x8027B224: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8027B228: sb          $t7, 0x143($sp)
    MEM_B(0X143, ctx->r29) = ctx->r15;
L_8027B22C:
    // 0x8027B22C: jal         0x8030C9B4
    // 0x8027B230: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8030C9B4(rdram, ctx);
        goto after_11;
    // 0x8027B230: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x8027B234: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027B238: jal         0x80231A24
    // 0x8027B23C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_12;
    // 0x8027B23C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_12:
    // 0x8027B240: b           L_8027B520
    // 0x8027B244: lw          $t7, 0x7170($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X7170);
        goto L_8027B520;
    // 0x8027B244: lw          $t7, 0x7170($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X7170);
L_8027B248:
    // 0x8027B248: jal         0x80318804
    // 0x8027B24C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80318804(rdram, ctx);
        goto after_13;
    // 0x8027B24C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_13:
    // 0x8027B250: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027B254: bne         $v0, $at, L_8027B368
    if (ctx->r2 != ctx->r1) {
        // 0x8027B258: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8027B368;
    }
    // 0x8027B258: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027B25C: jal         0x80318EF4
    // 0x8027B260: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_80318EF4(rdram, ctx);
        goto after_14;
    // 0x8027B260: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_14:
    // 0x8027B264: jal         0x803187F4
    // 0x8027B268: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_803187F4(rdram, ctx);
        goto after_15;
    // 0x8027B268: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_15:
    // 0x8027B26C: beql        $v0, $zero, L_8027B298
    if (ctx->r2 == 0) {
        // 0x8027B270: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8027B298;
    }
    goto skip_2;
    // 0x8027B270: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_2:
    // 0x8027B274: jal         0x803187F4
    // 0x8027B278: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_803187F4(rdram, ctx);
        goto after_16;
    // 0x8027B278: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_16:
    // 0x8027B27C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027B280: jal         0x80318F0C
    // 0x8027B284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F0C(rdram, ctx);
        goto after_17;
    // 0x8027B284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x8027B288: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027B28C: jal         0x80318F1C
    // 0x8027B290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F1C(rdram, ctx);
        goto after_18;
    // 0x8027B290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x8027B294: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8027B298:
    // 0x8027B298: jal         0x80318EFC
    // 0x8027B29C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80318EFC(rdram, ctx);
        goto after_19;
    // 0x8027B29C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_19:
    // 0x8027B2A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027B2A4: jal         0x80318F14
    // 0x8027B2A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80318F14(rdram, ctx);
        goto after_20;
    // 0x8027B2A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_20:
    // 0x8027B2AC: jal         0x8031A36C
    // 0x8027B2B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_8031A36C(rdram, ctx);
        goto after_21;
    // 0x8027B2B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_21:
    // 0x8027B2B4: bne         $v0, $zero, L_8027B2CC
    if (ctx->r2 != 0) {
        // 0x8027B2B8: nop
    
            goto L_8027B2CC;
    }
    // 0x8027B2B8: nop

    // 0x8027B2BC: jal         0x802E7FC8
    // 0x8027B2C0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802E7FC8(rdram, ctx);
        goto after_22;
    // 0x8027B2C0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_22:
    // 0x8027B2C4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027B2C8: sb          $t8, 0x143($sp)
    MEM_B(0X143, ctx->r29) = ctx->r24;
L_8027B2CC:
    // 0x8027B2CC: jal         0x8030C9B4
    // 0x8027B2D0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    static_3_8030C9B4(rdram, ctx);
        goto after_23;
    // 0x8027B2D0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_23:
    // 0x8027B2D4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027B2D8: jal         0x80231A24
    // 0x8027B2DC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_24;
    // 0x8027B2DC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_24:
    // 0x8027B2E0: jal         0x80318804
    // 0x8027B2E4: addiu       $a0, $s3, 0x365C
    ctx->r4 = ADD32(ctx->r19, 0X365C);
    static_3_80318804(rdram, ctx);
        goto after_25;
    // 0x8027B2E4: addiu       $a0, $s3, 0x365C
    ctx->r4 = ADD32(ctx->r19, 0X365C);
    after_25:
    // 0x8027B2E8: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8027B2EC: bnel        $v0, $at, L_8027B520
    if (ctx->r2 != ctx->r1) {
        // 0x8027B2F0: lw          $t7, 0x7170($s3)
        ctx->r15 = MEM_W(ctx->r19, 0X7170);
            goto L_8027B520;
    }
    goto skip_3;
    // 0x8027B2F0: lw          $t7, 0x7170($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X7170);
    skip_3:
    // 0x8027B2F4: lw          $s0, 0x37FC($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X37FC);
    // 0x8027B2F8: addiu       $s1, $sp, 0xFC
    ctx->r17 = ADD32(ctx->r29, 0XFC);
    // 0x8027B2FC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8027B300: lh          $t9, 0x60($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X60);
    // 0x8027B304: addu        $a0, $t9, $s3
    ctx->r4 = ADD32(ctx->r25, ctx->r19);
    // 0x8027B308: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x8027B30C: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    // 0x8027B310: jalr        $t9
    // 0x8027B314: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x8027B314: nop

    after_26:
    // 0x8027B318: lw          $s0, 0x1A0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X1A0);
    // 0x8027B31C: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x8027B320: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x8027B324: lh          $t0, 0x60($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X60);
    // 0x8027B328: jalr        $t9
    // 0x8027B32C: addu        $a0, $t0, $s2
    ctx->r4 = ADD32(ctx->r8, ctx->r18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x8027B32C: addu        $a0, $t0, $s2
    ctx->r4 = ADD32(ctx->r8, ctx->r18);
    after_27:
    // 0x8027B330: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8027B334: jal         0x802CF954
    // 0x8027B338: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    static_3_802CF954(rdram, ctx);
        goto after_28;
    // 0x8027B338: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    after_28:
    // 0x8027B33C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8027B340: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8027B344: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027B348: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x8027B34C: nop

    // 0x8027B350: bc1fl       L_8027B520
    if (!c1cs) {
        // 0x8027B354: lw          $t7, 0x7170($s3)
        ctx->r15 = MEM_W(ctx->r19, 0X7170);
            goto L_8027B520;
    }
    goto skip_4;
    // 0x8027B354: lw          $t7, 0x7170($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X7170);
    skip_4:
    // 0x8027B358: jal         0x802E8000
    // 0x8027B35C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802E8000(rdram, ctx);
        goto after_29;
    // 0x8027B35C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_29:
    // 0x8027B360: b           L_8027B520
    // 0x8027B364: lw          $t7, 0x7170($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X7170);
        goto L_8027B520;
    // 0x8027B364: lw          $t7, 0x7170($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X7170);
L_8027B368:
    // 0x8027B368: jal         0x80318804
    // 0x8027B36C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80318804(rdram, ctx);
        goto after_30;
    // 0x8027B36C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_30:
    // 0x8027B370: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027B374: bne         $v0, $at, L_8027B410
    if (ctx->r2 != ctx->r1) {
        // 0x8027B378: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8027B410;
    }
    // 0x8027B378: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027B37C: jal         0x80318EF4
    // 0x8027B380: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    static_3_80318EF4(rdram, ctx);
        goto after_31;
    // 0x8027B380: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_31:
    // 0x8027B384: jal         0x803187F4
    // 0x8027B388: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_803187F4(rdram, ctx);
        goto after_32;
    // 0x8027B388: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_32:
    // 0x8027B38C: beql        $v0, $zero, L_8027B3B8
    if (ctx->r2 == 0) {
        // 0x8027B390: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8027B3B8;
    }
    goto skip_5;
    // 0x8027B390: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_5:
    // 0x8027B394: jal         0x803187F4
    // 0x8027B398: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_803187F4(rdram, ctx);
        goto after_33;
    // 0x8027B398: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_33:
    // 0x8027B39C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027B3A0: jal         0x80318F0C
    // 0x8027B3A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F0C(rdram, ctx);
        goto after_34;
    // 0x8027B3A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_34:
    // 0x8027B3A8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027B3AC: jal         0x80318F1C
    // 0x8027B3B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F1C(rdram, ctx);
        goto after_35;
    // 0x8027B3B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_35:
    // 0x8027B3B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8027B3B8:
    // 0x8027B3B8: jal         0x80318EFC
    // 0x8027B3BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80318EFC(rdram, ctx);
        goto after_36;
    // 0x8027B3BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_36:
    // 0x8027B3C0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027B3C4: jal         0x80318F14
    // 0x8027B3C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80318F14(rdram, ctx);
        goto after_37;
    // 0x8027B3C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_37:
    // 0x8027B3CC: jal         0x8030C9B4
    // 0x8027B3D0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    static_3_8030C9B4(rdram, ctx);
        goto after_38;
    // 0x8027B3D0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_38:
    // 0x8027B3D4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027B3D8: jal         0x80231A24
    // 0x8027B3DC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_39;
    // 0x8027B3DC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_39:
    // 0x8027B3E0: jal         0x8031A36C
    // 0x8027B3E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_8031A36C(rdram, ctx);
        goto after_40;
    // 0x8027B3E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_40:
    // 0x8027B3E8: bnel        $v0, $zero, L_8027B520
    if (ctx->r2 != 0) {
        // 0x8027B3EC: lw          $t7, 0x7170($s3)
        ctx->r15 = MEM_W(ctx->r19, 0X7170);
            goto L_8027B520;
    }
    goto skip_6;
    // 0x8027B3EC: lw          $t7, 0x7170($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X7170);
    skip_6:
    // 0x8027B3F0: lbu         $t1, 0x7D0($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X7D0);
    // 0x8027B3F4: bnel        $t1, $zero, L_8027B408
    if (ctx->r9 != 0) {
        // 0x8027B3F8: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_8027B408;
    }
    goto skip_7;
    // 0x8027B3F8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    skip_7:
    // 0x8027B3FC: jal         0x802E811C
    // 0x8027B400: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802E811C(rdram, ctx);
        goto after_41;
    // 0x8027B400: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_41:
    // 0x8027B404: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_8027B408:
    // 0x8027B408: b           L_8027B51C
    // 0x8027B40C: sb          $t2, 0x143($sp)
    MEM_B(0X143, ctx->r29) = ctx->r10;
        goto L_8027B51C;
    // 0x8027B40C: sb          $t2, 0x143($sp)
    MEM_B(0X143, ctx->r29) = ctx->r10;
L_8027B410:
    // 0x8027B410: jal         0x80318804
    // 0x8027B414: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80318804(rdram, ctx);
        goto after_42;
    // 0x8027B414: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_42:
    // 0x8027B418: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027B41C: bnel        $v0, $at, L_8027B520
    if (ctx->r2 != ctx->r1) {
        // 0x8027B420: lw          $t7, 0x7170($s3)
        ctx->r15 = MEM_W(ctx->r19, 0X7170);
            goto L_8027B520;
    }
    goto skip_8;
    // 0x8027B420: lw          $t7, 0x7170($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X7170);
    skip_8:
    // 0x8027B424: lw          $t3, 0x6FBC($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X6FBC);
    // 0x8027B428: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027B42C: beql        $t3, $zero, L_8027B520
    if (ctx->r11 == 0) {
        // 0x8027B430: lw          $t7, 0x7170($s3)
        ctx->r15 = MEM_W(ctx->r19, 0X7170);
            goto L_8027B520;
    }
    goto skip_9;
    // 0x8027B430: lw          $t7, 0x7170($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X7170);
    skip_9:
    // 0x8027B434: jal         0x80318EF4
    // 0x8027B438: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80318EF4(rdram, ctx);
        goto after_43;
    // 0x8027B438: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_43:
    // 0x8027B43C: jal         0x803187F4
    // 0x8027B440: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_803187F4(rdram, ctx);
        goto after_44;
    // 0x8027B440: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_44:
    // 0x8027B444: beq         $v0, $zero, L_8027B46C
    if (ctx->r2 == 0) {
        // 0x8027B448: nop
    
            goto L_8027B46C;
    }
    // 0x8027B448: nop

    // 0x8027B44C: jal         0x803187F4
    // 0x8027B450: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_803187F4(rdram, ctx);
        goto after_45;
    // 0x8027B450: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_45:
    // 0x8027B454: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027B458: jal         0x80318F0C
    // 0x8027B45C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F0C(rdram, ctx);
        goto after_46;
    // 0x8027B45C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_46:
    // 0x8027B460: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027B464: jal         0x80318F1C
    // 0x8027B468: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F1C(rdram, ctx);
        goto after_47;
    // 0x8027B468: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_47:
L_8027B46C:
    // 0x8027B46C: jal         0x8030C9B4
    // 0x8027B470: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    static_3_8030C9B4(rdram, ctx);
        goto after_48;
    // 0x8027B470: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_48:
    // 0x8027B474: jal         0x8031A36C
    // 0x8027B478: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_8031A36C(rdram, ctx);
        goto after_49;
    // 0x8027B478: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_49:
    // 0x8027B47C: bnel        $v0, $zero, L_8027B4A4
    if (ctx->r2 != 0) {
        // 0x8027B480: addiu       $s1, $s3, 0x365C
        ctx->r17 = ADD32(ctx->r19, 0X365C);
            goto L_8027B4A4;
    }
    goto skip_10;
    // 0x8027B480: addiu       $s1, $s3, 0x365C
    ctx->r17 = ADD32(ctx->r19, 0X365C);
    skip_10:
    // 0x8027B484: jal         0x802E7FC8
    // 0x8027B488: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802E7FC8(rdram, ctx);
        goto after_50;
    // 0x8027B488: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_50:
    // 0x8027B48C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027B490: jal         0x80231A24
    // 0x8027B494: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_51;
    // 0x8027B494: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_51:
    // 0x8027B498: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8027B49C: sb          $t4, 0x143($sp)
    MEM_B(0X143, ctx->r29) = ctx->r12;
    // 0x8027B4A0: addiu       $s1, $s3, 0x365C
    ctx->r17 = ADD32(ctx->r19, 0X365C);
L_8027B4A4:
    // 0x8027B4A4: jal         0x80318804
    // 0x8027B4A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80318804(rdram, ctx);
        goto after_52;
    // 0x8027B4A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_52:
    // 0x8027B4AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027B4B0: bnel        $v0, $at, L_8027B520
    if (ctx->r2 != ctx->r1) {
        // 0x8027B4B4: lw          $t7, 0x7170($s3)
        ctx->r15 = MEM_W(ctx->r19, 0X7170);
            goto L_8027B520;
    }
    goto skip_11;
    // 0x8027B4B4: lw          $t7, 0x7170($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X7170);
    skip_11:
    // 0x8027B4B8: lw          $s0, 0x37FC($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X37FC);
    // 0x8027B4BC: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x8027B4C0: lh          $t5, 0x60($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X60);
    // 0x8027B4C4: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x8027B4C8: addu        $a0, $t5, $s3
    ctx->r4 = ADD32(ctx->r13, ctx->r19);
    // 0x8027B4CC: jalr        $t9
    // 0x8027B4D0: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_53;
    // 0x8027B4D0: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_53:
    // 0x8027B4D4: lw          $s0, 0x1A0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X1A0);
    // 0x8027B4D8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8027B4DC: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x8027B4E0: lh          $t6, 0x60($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X60);
    // 0x8027B4E4: jalr        $t9
    // 0x8027B4E8: addu        $a0, $t6, $s2
    ctx->r4 = ADD32(ctx->r14, ctx->r18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_54;
    // 0x8027B4E8: addu        $a0, $t6, $s2
    ctx->r4 = ADD32(ctx->r14, ctx->r18);
    after_54:
    // 0x8027B4EC: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x8027B4F0: jal         0x802CF954
    // 0x8027B4F4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    static_3_802CF954(rdram, ctx);
        goto after_55;
    // 0x8027B4F4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_55:
    // 0x8027B4F8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8027B4FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8027B500: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8027B504: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x8027B508: nop

    // 0x8027B50C: bc1fl       L_8027B520
    if (!c1cs) {
        // 0x8027B510: lw          $t7, 0x7170($s3)
        ctx->r15 = MEM_W(ctx->r19, 0X7170);
            goto L_8027B520;
    }
    goto skip_12;
    // 0x8027B510: lw          $t7, 0x7170($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X7170);
    skip_12:
    // 0x8027B514: jal         0x802E8000
    // 0x8027B518: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802E8000(rdram, ctx);
        goto after_56;
    // 0x8027B518: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_56:
L_8027B51C:
    // 0x8027B51C: lw          $t7, 0x7170($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X7170);
L_8027B520:
    // 0x8027B520: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8027B524: sw          $t8, 0x7170($s3)
    MEM_W(0X7170, ctx->r19) = ctx->r24;
L_8027B528:
    // 0x8027B528: lw          $t0, 0x7170($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X7170);
L_8027B52C:
    // 0x8027B52C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027B530: bnel        $t0, $at, L_8027B650
    if (ctx->r8 != ctx->r1) {
        // 0x8027B534: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8027B650;
    }
    goto skip_13;
    // 0x8027B534: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_13:
    // 0x8027B538: jal         0x803187FC
    // 0x8027B53C: lw          $a0, 0x14C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14C);
    static_3_803187FC(rdram, ctx);
        goto after_57;
    // 0x8027B53C: lw          $a0, 0x14C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14C);
    after_57:
    // 0x8027B540: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027B544: bnel        $v0, $at, L_8027B650
    if (ctx->r2 != ctx->r1) {
        // 0x8027B548: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8027B650;
    }
    goto skip_14;
    // 0x8027B548: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_14:
    // 0x8027B54C: lbu         $t1, 0x6EFC($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0X6EFC);
    // 0x8027B550: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027B554: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x8027B558: blezl       $t1, L_8027B650
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8027B55C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8027B650;
    }
    goto skip_15;
    // 0x8027B55C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_15:
    // 0x8027B560: lw          $a0, 0x6EEC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6EEC);
L_8027B564:
    // 0x8027B564: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8027B568: beql        $a0, $zero, L_8027B634
    if (ctx->r4 == 0) {
        // 0x8027B56C: lw          $v0, 0x38($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X38);
            goto L_8027B634;
    }
    goto skip_16;
    // 0x8027B56C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    skip_16:
    // 0x8027B570: jal         0x80317E10
    // 0x8027B574: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    static_3_80317E10(rdram, ctx);
        goto after_58;
    // 0x8027B574: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_58:
    // 0x8027B578: beql        $v0, $zero, L_8027B634
    if (ctx->r2 == 0) {
        // 0x8027B57C: lw          $v0, 0x38($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X38);
            goto L_8027B634;
    }
    goto skip_17;
    // 0x8027B57C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    skip_17:
    // 0x8027B580: jal         0x80318804
    // 0x8027B584: lw          $a0, 0x6EEC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6EEC);
    static_3_80318804(rdram, ctx);
        goto after_59;
    // 0x8027B584: lw          $a0, 0x6EEC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6EEC);
    after_59:
    // 0x8027B588: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027B58C: bnel        $v0, $at, L_8027B634
    if (ctx->r2 != ctx->r1) {
        // 0x8027B590: lw          $v0, 0x38($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X38);
            goto L_8027B634;
    }
    goto skip_18;
    // 0x8027B590: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    skip_18:
    // 0x8027B594: lw          $s0, 0x6EEC($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X6EEC);
    // 0x8027B598: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    // 0x8027B59C: jal         0x80318428
    // 0x8027B5A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318428(rdram, ctx);
        goto after_60;
    // 0x8027B5A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_60:
    // 0x8027B5A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027B5A8: bnel        $v0, $at, L_8027B634
    if (ctx->r2 != ctx->r1) {
        // 0x8027B5AC: lw          $v0, 0x38($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X38);
            goto L_8027B634;
    }
    goto skip_19;
    // 0x8027B5AC: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    skip_19:
    // 0x8027B5B0: jal         0x803187F4
    // 0x8027B5B4: lw          $a0, 0x14C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14C);
    static_3_803187F4(rdram, ctx);
        goto after_61;
    // 0x8027B5B4: lw          $a0, 0x14C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14C);
    after_61:
    // 0x8027B5B8: beql        $v0, $s0, L_8027B5D4
    if (ctx->r2 == ctx->r16) {
        // 0x8027B5BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8027B5D4;
    }
    goto skip_20;
    // 0x8027B5BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_20:
    // 0x8027B5C0: jal         0x80318428
    // 0x8027B5C4: lw          $a0, 0x14C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14C);
    static_3_80318428(rdram, ctx);
        goto after_62;
    // 0x8027B5C4: lw          $a0, 0x14C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14C);
    after_62:
    // 0x8027B5C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027B5CC: bne         $v0, $at, L_8027B630
    if (ctx->r2 != ctx->r1) {
        // 0x8027B5D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8027B630;
    }
    // 0x8027B5D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8027B5D4:
    // 0x8027B5D4: jal         0x80318F04
    // 0x8027B5D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80318F04(rdram, ctx);
        goto after_63;
    // 0x8027B5D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_63:
    // 0x8027B5DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027B5E0: jal         0x80318F14
    // 0x8027B5E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80318F14(rdram, ctx);
        goto after_64;
    // 0x8027B5E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_64:
    // 0x8027B5E8: lw          $t2, 0x7170($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X7170);
    // 0x8027B5EC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027B5F0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8027B5F4: jal         0x8031A36C
    // 0x8027B5F8: sw          $t3, 0x7170($s3)
    MEM_W(0X7170, ctx->r19) = ctx->r11;
    static_3_8031A36C(rdram, ctx);
        goto after_65;
    // 0x8027B5F8: sw          $t3, 0x7170($s3)
    MEM_W(0X7170, ctx->r19) = ctx->r11;
    after_65:
    // 0x8027B5FC: bne         $v0, $zero, L_8027B630
    if (ctx->r2 != 0) {
        // 0x8027B600: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_8027B630;
    }
    // 0x8027B600: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8027B604: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8027B608: sb          $t4, 0x143($sp)
    MEM_B(0X143, ctx->r29) = ctx->r12;
    // 0x8027B60C: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    // 0x8027B610: jal         0x8030A5EC
    // 0x8027B614: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    static_3_8030A5EC(rdram, ctx);
        goto after_66;
    // 0x8027B614: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_66:
    // 0x8027B618: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x8027B61C: jal         0x802E8000
    // 0x8027B620: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802E8000(rdram, ctx);
        goto after_67;
    // 0x8027B620: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_67:
    // 0x8027B624: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027B628: jal         0x80231A24
    // 0x8027B62C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_68;
    // 0x8027B62C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_68:
L_8027B630:
    // 0x8027B630: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
L_8027B634:
    // 0x8027B634: lbu         $t5, 0x6EFC($s3)
    ctx->r13 = MEM_BU(ctx->r19, 0X6EFC);
    // 0x8027B638: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8027B63C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8027B640: slt         $at, $v0, $t5
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8027B644: bnel        $at, $zero, L_8027B564
    if (ctx->r1 != 0) {
        // 0x8027B648: lw          $a0, 0x6EEC($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X6EEC);
            goto L_8027B564;
    }
    goto skip_21;
    // 0x8027B648: lw          $a0, 0x6EEC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6EEC);
    skip_21:
    // 0x8027B64C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027B650:
    // 0x8027B650: lbu         $v0, 0x143($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X143);
    // 0x8027B654: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027B658: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027B65C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027B660: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027B664: jr          $ra
    // 0x8027B668: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
    return;
    // 0x8027B668: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
;}
RECOMP_FUNC void D_80279DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279E6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80279E70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80279E74: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80279E78: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80279E7C: lw          $t6, 0x65FC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X65FC);
    // 0x80279E80: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80279E84: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80279E88: beq         $t6, $zero, L_80279F28
    if (ctx->r14 == 0) {
        // 0x80279E8C: sw          $t6, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r14;
            goto L_80279F28;
    }
    // 0x80279E8C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80279E90: lh          $t8, 0x6C38($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X6C38);
    // 0x80279E94: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80279E98: slti        $at, $t8, 0x4B
    ctx->r1 = SIGNED(ctx->r24) < 0X4B ? 1 : 0;
    // 0x80279E9C: beq         $at, $zero, L_80279F28
    if (ctx->r1 == 0) {
        // 0x80279EA0: nop
    
            goto L_80279F28;
    }
    // 0x80279EA0: nop

    // 0x80279EA4: jal         0x803087A8
    // 0x80279EA8: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    static_3_803087A8(rdram, ctx);
        goto after_0;
    // 0x80279EA8: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x80279EAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80279EB0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80279EB4: jal         0x8022EE60
    // 0x80279EB8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    static_3_8022EE60(rdram, ctx);
        goto after_1;
    // 0x80279EB8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x80279EBC: bne         $v0, $zero, L_80279EDC
    if (ctx->r2 != 0) {
        // 0x80279EC0: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_80279EDC;
    }
    // 0x80279EC0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80279EC4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80279EC8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80279ECC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80279ED0: jal         0x80231A24
    // 0x80279ED4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x80279ED4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_2:
    // 0x80279ED8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
L_80279EDC:
    // 0x80279EDC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80279EE0: lh          $t1, 0x6C38($a3)
    ctx->r9 = MEM_H(ctx->r7, 0X6C38);
    // 0x80279EE4: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80279EE8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80279EEC: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x80279EF0: sw          $t0, 0x68B4($t3)
    MEM_W(0X68B4, ctx->r11) = ctx->r8;
    // 0x80279EF4: lh          $t5, 0x6C38($a3)
    ctx->r13 = MEM_H(ctx->r7, 0X6C38);
    // 0x80279EF8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80279EFC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80279F00: addu        $t8, $a3, $t6
    ctx->r24 = ADD32(ctx->r7, ctx->r14);
    // 0x80279F04: sw          $t4, 0x69E0($t8)
    MEM_W(0X69E0, ctx->r24) = ctx->r12;
    // 0x80279F08: lh          $t7, 0x6C38($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X6C38);
    // 0x80279F0C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80279F10: addu        $t1, $a3, $t9
    ctx->r9 = ADD32(ctx->r7, ctx->r25);
    // 0x80279F14: sw          $zero, 0x6B0C($t1)
    MEM_W(0X6B0C, ctx->r9) = 0;
    // 0x80279F18: lh          $t2, 0x6C38($a3)
    ctx->r10 = MEM_H(ctx->r7, 0X6C38);
    // 0x80279F1C: addiu       $t0, $t2, 0x1
    ctx->r8 = ADD32(ctx->r10, 0X1);
    // 0x80279F20: b           L_80279F44
    // 0x80279F24: sh          $t0, 0x6C38($a3)
    MEM_H(0X6C38, ctx->r7) = ctx->r8;
        goto L_80279F44;
    // 0x80279F24: sh          $t0, 0x6C38($a3)
    MEM_H(0X6C38, ctx->r7) = ctx->r8;
L_80279F28:
    // 0x80279F28: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80279F2C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80279F30: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80279F34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80279F38: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80279F3C: jal         0x80231A24
    // 0x80279F40: addiu       $a3, $zero, 0x265
    ctx->r7 = ADD32(0, 0X265);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x80279F40: addiu       $a3, $zero, 0x265
    ctx->r7 = ADD32(0, 0X265);
    after_3:
L_80279F44:
    // 0x80279F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279F48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80279F4C: jr          $ra
    // 0x80279F50: nop

    return;
    // 0x80279F50: nop

;}
RECOMP_FUNC void D_802A90C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9148: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802A914C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802A9150: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A9154: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802A9158: beq         $a0, $zero, L_802A91CC
    if (ctx->r4 == 0) {
        // 0x802A915C: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_802A91CC;
    }
    // 0x802A915C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802A9160: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A9164: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A9168: jal         0x802D9BCC
    // 0x802A916C: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    static_3_802D9BCC(rdram, ctx);
        goto after_0;
    // 0x802A916C: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    after_0:
    // 0x802A9170: addiu       $a0, $s0, 0x740
    ctx->r4 = ADD32(ctx->r16, 0X740);
    // 0x802A9174: jal         0x802C49D0
    // 0x802A9178: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_1;
    // 0x802A9178: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802A917C: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802A9180: addiu       $a3, $a3, 0x49D0
    ctx->r7 = ADD32(ctx->r7, 0X49D0);
    // 0x802A9184: addiu       $a0, $s0, 0x284
    ctx->r4 = ADD32(ctx->r16, 0X284);
    // 0x802A9188: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802A918C: addiu       $a2, $zero, 0x194
    ctx->r6 = ADD32(0, 0X194);
    // 0x802A9190: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A9194: jal         0x802C6A00
    // 0x802A9198: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_802C6A00(rdram, ctx);
        goto after_2;
    // 0x802A9198: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x802A919C: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802A91A0: jal         0x802D3D78
    // 0x802A91A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802D3D78(rdram, ctx);
        goto after_3;
    // 0x802A91A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x802A91A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A91AC: jal         0x8031739C
    // 0x802A91B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8031739C(rdram, ctx);
        goto after_4;
    // 0x802A91B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802A91B4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x802A91B8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802A91BC: beql        $t8, $zero, L_802A91D0
    if (ctx->r24 == 0) {
        // 0x802A91C0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802A91D0;
    }
    goto skip_0;
    // 0x802A91C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802A91C4: jal         0x802C681C
    // 0x802A91C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_5;
    // 0x802A91C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_802A91CC:
    // 0x802A91CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802A91D0:
    // 0x802A91D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802A91D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802A91D8: jr          $ra
    // 0x802A91DC: nop

    return;
    // 0x802A91DC: nop

;}
RECOMP_FUNC void D_802AAB28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AABA8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802AABAC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802AABB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AABB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AABB8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802AABBC: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x802AABC0: jal         0x8021ACB0
    // 0x802AABC4: addiu       $a1, $zero, 0x83
    ctx->r5 = ADD32(0, 0X83);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802AABC4: addiu       $a1, $zero, 0x83
    ctx->r5 = ADD32(0, 0X83);
    after_0:
    // 0x802AABC8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AABCC: jal         0x8021B838
    // 0x802AABD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802AABD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802AABD4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802AABD8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AABDC: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802AABE0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802AABE4: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    // 0x802AABE8: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802AABEC: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802AABF0: lh          $t7, 0xB8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XB8);
    // 0x802AABF4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802AABF8: jalr        $t9
    // 0x802AABFC: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802AABFC: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_2:
    // 0x802AAC00: sb          $zero, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = 0;
    // 0x802AAC04: addiu       $t8, $zero, 0x22
    ctx->r24 = ADD32(0, 0X22);
    // 0x802AAC08: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802AAC0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AAC10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802AAC14: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802AAC18: jal         0x80317194
    // 0x802AAC1C: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_3;
    // 0x802AAC1C: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_3:
    // 0x802AAC20: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802AAC24: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x802AAC28: jal         0x802D51DC
    // 0x802AAC2C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    static_3_802D51DC(rdram, ctx);
        goto after_4;
    // 0x802AAC2C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    after_4:
    // 0x802AAC30: addiu       $s1, $s0, 0x1070
    ctx->r17 = ADD32(ctx->r16, 0X1070);
    // 0x802AAC34: addiu       $a2, $s0, 0x6A8
    ctx->r6 = ADD32(ctx->r16, 0X6A8);
    // 0x802AAC38: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802AAC3C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x802AAC40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802AAC44: jal         0x802C4A20
    // 0x802AAC48: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    static_3_802C4A20(rdram, ctx);
        goto after_5;
    // 0x802AAC48: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_5:
    // 0x802AAC4C: lui         $a1, 0xBFC9
    ctx->r5 = S32(0XBFC9 << 16);
    // 0x802AAC50: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x802AAC54: jal         0x802C5824
    // 0x802AAC58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802C5824(rdram, ctx);
        goto after_6;
    // 0x802AAC58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x802AAC5C: lui         $a1, 0x3FC9
    ctx->r5 = S32(0X3FC9 << 16);
    // 0x802AAC60: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x802AAC64: jal         0x802C5818
    // 0x802AAC68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802C5818(rdram, ctx);
        goto after_7;
    // 0x802AAC68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x802AAC6C: lui         $a1, 0x4049
    ctx->r5 = S32(0X4049 << 16);
    // 0x802AAC70: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x802AAC74: jal         0x802C580C
    // 0x802AAC78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802C580C(rdram, ctx);
        goto after_8;
    // 0x802AAC78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x802AAC7C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802AAC80: jal         0x802C5830
    // 0x802AAC84: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    static_3_802C5830(rdram, ctx);
        goto after_9;
    // 0x802AAC84: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    after_9:
    // 0x802AAC88: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802AAC8C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x802AAC90: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x802AAC94: jal         0x802C4A20
    // 0x802AAC98: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_10;
    // 0x802AAC98: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_10:
    // 0x802AAC9C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802AACA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AACA4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802AACA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AACAC: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x802AACB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AACB4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802AACB8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AACBC: sw          $zero, 0x664($s0)
    MEM_W(0X664, ctx->r16) = 0;
    // 0x802AACC0: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x802AACC4: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    // 0x802AACC8: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    // 0x802AACCC: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    // 0x802AACD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AACD4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802AACD8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802AACDC: jr          $ra
    // 0x802AACE0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802AACE0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_8023D0D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D0D8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023D0DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023D0E0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D0E4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D0E8: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x8023D0EC: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x8023D0F0: ddivu       $zero, $t6, $t7
    DDIVU(U64(ctx->r14), U64(ctx->r15), &lo, &hi);
    // 0x8023D0F4: bne         $t7, $zero, L_8023D100
    if (ctx->r15 != 0) {
        // 0x8023D0F8: nop
    
            goto L_8023D100;
    }
    // 0x8023D0F8: nop

    // 0x8023D0FC: break       7
    do_break(2149830908);
L_8023D100:
    // 0x8023D100: mflo        $v0
    ctx->r2 = lo;
    // 0x8023D104: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8023D108: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8023D10C: jr          $ra
    // 0x8023D110: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8023D110: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void D_80296798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80296818: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x8029681C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80296820: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80296824: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80296828: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8029682C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80296830: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80296834: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x80296838: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x8029683C: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x80296840: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80296844: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    // 0x80296848: addiu       $s1, $a0, 0x70
    ctx->r17 = ADD32(ctx->r4, 0X70);
    // 0x8029684C: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x80296850: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x80296854: jal         0x802BFA18
    // 0x80296858: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802BFA18(rdram, ctx);
        goto after_0;
    // 0x80296858: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8029685C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80296860: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296864: jal         0x802AA498
    // 0x80296868: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_802AA498(rdram, ctx);
        goto after_1;
    // 0x80296868: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x8029686C: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x80296870: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80296874: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x80296878: lh          $t8, 0xB0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XB0);
    // 0x8029687C: jalr        $t9
    // 0x80296880: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80296880: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    after_2:
    // 0x80296884: lui         $a2, 0xC528
    ctx->r6 = S32(0XC528 << 16);
    // 0x80296888: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x8029688C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296890: lui         $a1, 0xC4AF
    ctx->r5 = S32(0XC4AF << 16);
    // 0x80296894: jal         0x80318E04
    // 0x80296898: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    static_3_80318E04(rdram, ctx);
        goto after_3;
    // 0x80296898: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    after_3:
    // 0x8029689C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802968A0: jal         0x80318C9C
    // 0x802968A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80318C9C(rdram, ctx);
        goto after_4;
    // 0x802968A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x802968A8: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x802968AC: jal         0x802AEDEC
    // 0x802968B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEDEC(rdram, ctx);
        goto after_5;
    // 0x802968B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x802968B4: lw          $t0, 0x78($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X78);
    // 0x802968B8: addiu       $at, $zero, -0x2001
    ctx->r1 = ADD32(0, -0X2001);
    // 0x802968BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802968C0: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x802968C4: jal         0x802BCF20
    // 0x802968C8: sw          $t1, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r9;
    static_3_802BCF20(rdram, ctx);
        goto after_6;
    // 0x802968C8: sw          $t1, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r9;
    after_6:
    // 0x802968CC: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802968D0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802968D4: jal         0x80309B18
    // 0x802968D8: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    static_3_80309B18(rdram, ctx);
        goto after_7;
    // 0x802968D8: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    after_7:
    // 0x802968DC: jal         0x803099E4
    // 0x802968E0: nop

    static_3_803099E4(rdram, ctx);
        goto after_8;
    // 0x802968E0: nop

    after_8:
    // 0x802968E4: addiu       $s1, $sp, 0x64
    ctx->r17 = ADD32(ctx->r29, 0X64);
    // 0x802968E8: jal         0x8022970C
    // 0x802968EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8022970C(rdram, ctx);
        goto after_9;
    // 0x802968EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x802968F0: addiu       $s0, $s2, 0x1128
    ctx->r16 = ADD32(ctx->r18, 0X1128);
    // 0x802968F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802968F8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x802968FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80296900: jal         0x802C4A20
    // 0x80296904: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802C4A20(rdram, ctx);
        goto after_10;
    // 0x80296904: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x80296908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029690C: jal         0x802C5830
    // 0x80296910: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    static_3_802C5830(rdram, ctx);
        goto after_11;
    // 0x80296910: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    after_11:
    // 0x80296914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296918: jal         0x802C5818
    // 0x8029691C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_12;
    // 0x8029691C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_12:
    // 0x80296920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296924: jal         0x802C5824
    // 0x80296928: lui         $a1, 0xC1C8
    ctx->r5 = S32(0XC1C8 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_13;
    // 0x80296928: lui         $a1, 0xC1C8
    ctx->r5 = S32(0XC1C8 << 16);
    after_13:
    // 0x8029692C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296930: jal         0x802C580C
    // 0x80296934: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_14;
    // 0x80296934: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    after_14:
    // 0x80296938: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x8029693C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80296940: jal         0x802C584C
    // 0x80296944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C584C(rdram, ctx);
        goto after_15;
    // 0x80296944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80296948: addiu       $s0, $s2, 0x12BC
    ctx->r16 = ADD32(ctx->r18, 0X12BC);
    // 0x8029694C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296950: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x80296954: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80296958: jal         0x802C4A20
    // 0x8029695C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802C4A20(rdram, ctx);
        goto after_16;
    // 0x8029695C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x80296960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296964: jal         0x802C5830
    // 0x80296968: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    static_3_802C5830(rdram, ctx);
        goto after_17;
    // 0x80296968: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    after_17:
    // 0x8029696C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296970: jal         0x802C5818
    // 0x80296974: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_18;
    // 0x80296974: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_18:
    // 0x80296978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029697C: jal         0x802C5824
    // 0x80296980: lui         $a1, 0xC1C8
    ctx->r5 = S32(0XC1C8 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_19;
    // 0x80296980: lui         $a1, 0xC1C8
    ctx->r5 = S32(0XC1C8 << 16);
    after_19:
    // 0x80296984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296988: jal         0x802C580C
    // 0x8029698C: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_20;
    // 0x8029698C: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    after_20:
    // 0x80296990: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x80296994: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80296998: jal         0x802C584C
    // 0x8029699C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C584C(rdram, ctx);
        goto after_21;
    // 0x8029699C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x802969A0: addiu       $s0, $s2, 0x1450
    ctx->r16 = ADD32(ctx->r18, 0X1450);
    // 0x802969A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802969A8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x802969AC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x802969B0: jal         0x802C4A20
    // 0x802969B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802C4A20(rdram, ctx);
        goto after_22;
    // 0x802969B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_22:
    // 0x802969B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802969BC: jal         0x802C5830
    // 0x802969C0: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    static_3_802C5830(rdram, ctx);
        goto after_23;
    // 0x802969C0: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    after_23:
    // 0x802969C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802969C8: jal         0x802C5818
    // 0x802969CC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_24;
    // 0x802969CC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_24:
    // 0x802969D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802969D4: jal         0x802C5824
    // 0x802969D8: lui         $a1, 0xC1C8
    ctx->r5 = S32(0XC1C8 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_25;
    // 0x802969D8: lui         $a1, 0xC1C8
    ctx->r5 = S32(0XC1C8 << 16);
    after_25:
    // 0x802969DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802969E0: jal         0x802C580C
    // 0x802969E4: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_26;
    // 0x802969E4: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    after_26:
    // 0x802969E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802969EC: jal         0x802C584C
    // 0x802969F0: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    static_3_802C584C(rdram, ctx);
        goto after_27;
    // 0x802969F0: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_27:
    // 0x802969F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802969F8: addiu       $s1, $s2, 0x2634
    ctx->r17 = ADD32(ctx->r18, 0X2634);
L_802969FC:
    // 0x802969FC: jal         0x80292DF4
    // 0x80296A00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80292DF4(rdram, ctx);
        goto after_28;
    // 0x80296A00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_28:
    // 0x80296A04: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80296A08: jal         0x802AB2AC
    // 0x80296A0C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_29;
    // 0x80296A0C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_29:
    // 0x80296A10: addiu       $s0, $s0, 0x414
    ctx->r16 = ADD32(ctx->r16, 0X414);
    // 0x80296A14: slti        $at, $s0, 0x1878
    ctx->r1 = SIGNED(ctx->r16) < 0X1878 ? 1 : 0;
    // 0x80296A18: bne         $at, $zero, L_802969FC
    if (ctx->r1 != 0) {
        // 0x80296A1C: addiu       $s1, $s1, 0x414
        ctx->r17 = ADD32(ctx->r17, 0X414);
            goto L_802969FC;
    }
    // 0x80296A1C: addiu       $s1, $s1, 0x414
    ctx->r17 = ADD32(ctx->r17, 0X414);
    // 0x80296A20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80296A24: addiu       $s1, $s2, 0x15E4
    ctx->r17 = ADD32(ctx->r18, 0X15E4);
L_80296A28:
    // 0x80296A28: jal         0x80292DF4
    // 0x80296A2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80292DF4(rdram, ctx);
        goto after_30;
    // 0x80296A2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_30:
    // 0x80296A30: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80296A34: jal         0x802AB2AC
    // 0x80296A38: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_31;
    // 0x80296A38: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_31:
    // 0x80296A3C: addiu       $s0, $s0, 0x414
    ctx->r16 = ADD32(ctx->r16, 0X414);
    // 0x80296A40: addiu       $at, $zero, 0x1050
    ctx->r1 = ADD32(0, 0X1050);
    // 0x80296A44: bne         $s0, $at, L_80296A28
    if (ctx->r16 != ctx->r1) {
        // 0x80296A48: addiu       $s1, $s1, 0x414
        ctx->r17 = ADD32(ctx->r17, 0X414);
            goto L_80296A28;
    }
    // 0x80296A48: addiu       $s1, $s1, 0x414
    ctx->r17 = ADD32(ctx->r17, 0X414);
    // 0x80296A4C: addiu       $s0, $s2, 0x2634
    ctx->r16 = ADD32(ctx->r18, 0X2634);
    // 0x80296A50: lui         $a1, 0xC536
    ctx->r5 = S32(0XC536 << 16);
    // 0x80296A54: lui         $a2, 0x44F0
    ctx->r6 = S32(0X44F0 << 16);
    // 0x80296A58: lui         $a3, 0xC396
    ctx->r7 = S32(0XC396 << 16);
    // 0x80296A5C: ori         $a3, $a3, 0xB3F8
    ctx->r7 = ctx->r7 | 0XB3F8;
    // 0x80296A60: ori         $a2, $a2, 0x2EE1
    ctx->r6 = ctx->r6 | 0X2EE1;
    // 0x80296A64: ori         $a1, $a1, 0xA5EC
    ctx->r5 = ctx->r5 | 0XA5EC;
    // 0x80296A68: jal         0x80318E04
    // 0x80296A6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318E04(rdram, ctx);
        goto after_32;
    // 0x80296A6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80296A70: addiu       $s1, $s2, 0x2A48
    ctx->r17 = ADD32(ctx->r18, 0X2A48);
    // 0x80296A74: lui         $a1, 0xC4D3
    ctx->r5 = S32(0XC4D3 << 16);
    // 0x80296A78: lui         $a2, 0x43F1
    ctx->r6 = S32(0X43F1 << 16);
    // 0x80296A7C: lui         $a3, 0xC39F
    ctx->r7 = S32(0XC39F << 16);
    // 0x80296A80: ori         $a3, $a3, 0xBCCD
    ctx->r7 = ctx->r7 | 0XBCCD;
    // 0x80296A84: ori         $a2, $a2, 0xCA7F
    ctx->r6 = ctx->r6 | 0XCA7F;
    // 0x80296A88: ori         $a1, $a1, 0xE0C5
    ctx->r5 = ctx->r5 | 0XE0C5;
    // 0x80296A8C: jal         0x80318E04
    // 0x80296A90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80318E04(rdram, ctx);
        goto after_33;
    // 0x80296A90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_33:
    // 0x80296A94: addiu       $a0, $s2, 0x2E5C
    ctx->r4 = ADD32(ctx->r18, 0X2E5C);
    // 0x80296A98: lui         $a1, 0xC480
    ctx->r5 = S32(0XC480 << 16);
    // 0x80296A9C: lui         $a2, 0xC440
    ctx->r6 = S32(0XC440 << 16);
    // 0x80296AA0: lui         $a3, 0xC302
    ctx->r7 = S32(0XC302 << 16);
    // 0x80296AA4: ori         $a3, $a3, 0xFEFA
    ctx->r7 = ctx->r7 | 0XFEFA;
    // 0x80296AA8: ori         $a2, $a2, 0xF873
    ctx->r6 = ctx->r6 | 0XF873;
    // 0x80296AAC: ori         $a1, $a1, 0x1579
    ctx->r5 = ctx->r5 | 0X1579;
    // 0x80296AB0: jal         0x80318E04
    // 0x80296AB4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    static_3_80318E04(rdram, ctx);
        goto after_34;
    // 0x80296AB4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    after_34:
    // 0x80296AB8: addiu       $a0, $s2, 0x3270
    ctx->r4 = ADD32(ctx->r18, 0X3270);
    // 0x80296ABC: lui         $a1, 0xC40B
    ctx->r5 = S32(0XC40B << 16);
    // 0x80296AC0: lui         $a2, 0xC32C
    ctx->r6 = S32(0XC32C << 16);
    // 0x80296AC4: lui         $a3, 0xC393
    ctx->r7 = S32(0XC393 << 16);
    // 0x80296AC8: ori         $a3, $a3, 0x9F3B
    ctx->r7 = ctx->r7 | 0X9F3B;
    // 0x80296ACC: ori         $a2, $a2, 0xF9E
    ctx->r6 = ctx->r6 | 0XF9E;
    // 0x80296AD0: ori         $a1, $a1, 0x6344
    ctx->r5 = ctx->r5 | 0X6344;
    // 0x80296AD4: jal         0x80318E04
    // 0x80296AD8: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    static_3_80318E04(rdram, ctx);
        goto after_35;
    // 0x80296AD8: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    after_35:
    // 0x80296ADC: addiu       $a0, $s2, 0x3684
    ctx->r4 = ADD32(ctx->r18, 0X3684);
    // 0x80296AE0: lui         $a1, 0xC41A
    ctx->r5 = S32(0XC41A << 16);
    // 0x80296AE4: lui         $a2, 0x43C5
    ctx->r6 = S32(0X43C5 << 16);
    // 0x80296AE8: ori         $a2, $a2, 0x53F8
    ctx->r6 = ctx->r6 | 0X53F8;
    // 0x80296AEC: ori         $a1, $a1, 0xD24E
    ctx->r5 = ctx->r5 | 0XD24E;
    // 0x80296AF0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80296AF4: jal         0x80318E04
    // 0x80296AF8: lui         $a3, 0xC34F
    ctx->r7 = S32(0XC34F << 16);
    static_3_80318E04(rdram, ctx);
        goto after_36;
    // 0x80296AF8: lui         $a3, 0xC34F
    ctx->r7 = S32(0XC34F << 16);
    after_36:
    // 0x80296AFC: addiu       $a0, $s2, 0x3A98
    ctx->r4 = ADD32(ctx->r18, 0X3A98);
    // 0x80296B00: lui         $a1, 0xC3EC
    ctx->r5 = S32(0XC3EC << 16);
    // 0x80296B04: lui         $a2, 0x4409
    ctx->r6 = S32(0X4409 << 16);
    // 0x80296B08: ori         $a2, $a2, 0x71B
    ctx->r6 = ctx->r6 | 0X71B;
    // 0x80296B0C: ori         $a1, $a1, 0x6BA6
    ctx->r5 = ctx->r5 | 0X6BA6;
    // 0x80296B10: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80296B14: jal         0x80318E04
    // 0x80296B18: lui         $a3, 0xC329
    ctx->r7 = S32(0XC329 << 16);
    static_3_80318E04(rdram, ctx);
        goto after_37;
    // 0x80296B18: lui         $a3, 0xC329
    ctx->r7 = S32(0XC329 << 16);
    after_37:
    // 0x80296B1C: addiu       $a0, $s2, 0x15E4
    ctx->r4 = ADD32(ctx->r18, 0X15E4);
    // 0x80296B20: lui         $a1, 0xC564
    ctx->r5 = S32(0XC564 << 16);
    // 0x80296B24: lui         $a2, 0x452B
    ctx->r6 = S32(0X452B << 16);
    // 0x80296B28: ori         $a2, $a2, 0x8727
    ctx->r6 = ctx->r6 | 0X8727;
    // 0x80296B2C: ori         $a1, $a1, 0x6964
    ctx->r5 = ctx->r5 | 0X6964;
    // 0x80296B30: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80296B34: jal         0x80318E04
    // 0x80296B38: lui         $a3, 0x41B0
    ctx->r7 = S32(0X41B0 << 16);
    static_3_80318E04(rdram, ctx);
        goto after_38;
    // 0x80296B38: lui         $a3, 0x41B0
    ctx->r7 = S32(0X41B0 << 16);
    after_38:
    // 0x80296B3C: addiu       $a0, $s2, 0x19F8
    ctx->r4 = ADD32(ctx->r18, 0X19F8);
    // 0x80296B40: lui         $a1, 0xC58C
    ctx->r5 = S32(0XC58C << 16);
    // 0x80296B44: lui         $a2, 0x445F
    ctx->r6 = S32(0X445F << 16);
    // 0x80296B48: lui         $a3, 0x43FD
    ctx->r7 = S32(0X43FD << 16);
    // 0x80296B4C: ori         $a3, $a3, 0xCAC1
    ctx->r7 = ctx->r7 | 0XCAC1;
    // 0x80296B50: ori         $a2, $a2, 0x4635
    ctx->r6 = ctx->r6 | 0X4635;
    // 0x80296B54: ori         $a1, $a1, 0xFB54
    ctx->r5 = ctx->r5 | 0XFB54;
    // 0x80296B58: jal         0x80318E04
    // 0x80296B5C: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    static_3_80318E04(rdram, ctx);
        goto after_39;
    // 0x80296B5C: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    after_39:
    // 0x80296B60: addiu       $a0, $s2, 0x1E0C
    ctx->r4 = ADD32(ctx->r18, 0X1E0C);
    // 0x80296B64: lui         $a1, 0xC545
    ctx->r5 = S32(0XC545 << 16);
    // 0x80296B68: lui         $a2, 0x4310
    ctx->r6 = S32(0X4310 << 16);
    // 0x80296B6C: ori         $a2, $a2, 0x4F9E
    ctx->r6 = ctx->r6 | 0X4F9E;
    // 0x80296B70: ori         $a1, $a1, 0x625A
    ctx->r5 = ctx->r5 | 0X625A;
    // 0x80296B74: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80296B78: jal         0x80318E04
    // 0x80296B7C: lui         $a3, 0x43F1
    ctx->r7 = S32(0X43F1 << 16);
    static_3_80318E04(rdram, ctx);
        goto after_40;
    // 0x80296B7C: lui         $a3, 0x43F1
    ctx->r7 = S32(0X43F1 << 16);
    after_40:
    // 0x80296B80: addiu       $a0, $s2, 0x2220
    ctx->r4 = ADD32(ctx->r18, 0X2220);
    // 0x80296B84: lui         $a1, 0x44A6
    ctx->r5 = S32(0X44A6 << 16);
    // 0x80296B88: lui         $a2, 0xC425
    ctx->r6 = S32(0XC425 << 16);
    // 0x80296B8C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x80296B90: ori         $a3, $a3, 0x6A7F
    ctx->r7 = ctx->r7 | 0X6A7F;
    // 0x80296B94: ori         $a2, $a2, 0x3F7D
    ctx->r6 = ctx->r6 | 0X3F7D;
    // 0x80296B98: ori         $a1, $a1, 0x9B64
    ctx->r5 = ctx->r5 | 0X9B64;
    // 0x80296B9C: jal         0x80318E04
    // 0x80296BA0: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    static_3_80318E04(rdram, ctx);
        goto after_41;
    // 0x80296BA0: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    after_41:
    // 0x80296BA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296BA8: jal         0x80318C9C
    // 0x80296BAC: lui         $a1, 0xC2C6
    ctx->r5 = S32(0XC2C6 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_42;
    // 0x80296BAC: lui         $a1, 0xC2C6
    ctx->r5 = S32(0XC2C6 << 16);
    after_42:
    // 0x80296BB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80296BB4: jal         0x80318C9C
    // 0x80296BB8: lui         $a1, 0x41E0
    ctx->r5 = S32(0X41E0 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_43;
    // 0x80296BB8: lui         $a1, 0x41E0
    ctx->r5 = S32(0X41E0 << 16);
    after_43:
    // 0x80296BBC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80296BC0: jal         0x80318C9C
    // 0x80296BC4: lui         $a1, 0x4298
    ctx->r5 = S32(0X4298 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_44;
    // 0x80296BC4: lui         $a1, 0x4298
    ctx->r5 = S32(0X4298 << 16);
    after_44:
    // 0x80296BC8: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80296BCC: jal         0x80318C9C
    // 0x80296BD0: lui         $a1, 0x431B
    ctx->r5 = S32(0X431B << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_45;
    // 0x80296BD0: lui         $a1, 0x431B
    ctx->r5 = S32(0X431B << 16);
    after_45:
    // 0x80296BD4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80296BD8: jal         0x80318C9C
    // 0x80296BDC: lui         $a1, 0xC32E
    ctx->r5 = S32(0XC32E << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_46;
    // 0x80296BDC: lui         $a1, 0xC32E
    ctx->r5 = S32(0XC32E << 16);
    after_46:
    // 0x80296BE0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80296BE4: jal         0x80318C9C
    // 0x80296BE8: lui         $a1, 0x4328
    ctx->r5 = S32(0X4328 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_47;
    // 0x80296BE8: lui         $a1, 0x4328
    ctx->r5 = S32(0X4328 << 16);
    after_47:
    // 0x80296BEC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80296BF0: jal         0x80318C9C
    // 0x80296BF4: lui         $a1, 0xC2BE
    ctx->r5 = S32(0XC2BE << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_48;
    // 0x80296BF4: lui         $a1, 0xC2BE
    ctx->r5 = S32(0XC2BE << 16);
    after_48:
    // 0x80296BF8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80296BFC: jal         0x80318C9C
    // 0x80296C00: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_49;
    // 0x80296C00: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_49:
    // 0x80296C04: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80296C08: jal         0x80318C9C
    // 0x80296C0C: lui         $a1, 0x4292
    ctx->r5 = S32(0X4292 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_50;
    // 0x80296C0C: lui         $a1, 0x4292
    ctx->r5 = S32(0X4292 << 16);
    after_50:
    // 0x80296C10: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80296C14: jal         0x80318C9C
    // 0x80296C18: lui         $a1, 0xC268
    ctx->r5 = S32(0XC268 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_51;
    // 0x80296C18: lui         $a1, 0xC268
    ctx->r5 = S32(0XC268 << 16);
    after_51:
    // 0x80296C1C: addiu       $s0, $s2, 0x3EAC
    ctx->r16 = ADD32(ctx->r18, 0X3EAC);
    // 0x80296C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296C24: jal         0x802B3F64
    // 0x80296C28: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_52;
    // 0x80296C28: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_52:
    // 0x80296C2C: lui         $at, 0xC375
    ctx->r1 = S32(0XC375 << 16);
    // 0x80296C30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80296C34: lui         $a2, 0xC4BA
    ctx->r6 = S32(0XC4BA << 16);
    // 0x80296C38: lui         $a3, 0x44C2
    ctx->r7 = S32(0X44C2 << 16);
    // 0x80296C3C: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x80296C40: ori         $a2, $a2, 0xE000
    ctx->r6 = ctx->r6 | 0XE000;
    // 0x80296C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296C4C: jal         0x802B447C
    // 0x80296C50: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_53;
    // 0x80296C50: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_53:
    // 0x80296C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296C58: jal         0x802B4510
    // 0x80296C5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_54;
    // 0x80296C5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_54:
    // 0x80296C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296C64: jal         0x80318C9C
    // 0x80296C68: lui         $a1, 0x433C
    ctx->r5 = S32(0X433C << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_55;
    // 0x80296C68: lui         $a1, 0x433C
    ctx->r5 = S32(0X433C << 16);
    after_55:
    // 0x80296C6C: lw          $v0, 0x404C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X404C);
    // 0x80296C70: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80296C74: lh          $t3, 0xB0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XB0);
    // 0x80296C78: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x80296C7C: addu        $a0, $t3, $s2
    ctx->r4 = ADD32(ctx->r11, ctx->r18);
    // 0x80296C80: jalr        $t9
    // 0x80296C84: addiu       $a0, $a0, 0x3EAC
    ctx->r4 = ADD32(ctx->r4, 0X3EAC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_56;
    // 0x80296C84: addiu       $a0, $a0, 0x3EAC
    ctx->r4 = ADD32(ctx->r4, 0X3EAC);
    after_56:
    // 0x80296C88: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80296C8C: jal         0x802AB2AC
    // 0x80296C90: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_57;
    // 0x80296C90: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_57:
    // 0x80296C94: addiu       $s0, $s2, 0x454C
    ctx->r16 = ADD32(ctx->r18, 0X454C);
    // 0x80296C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296C9C: jal         0x802B3F64
    // 0x80296CA0: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_58;
    // 0x80296CA0: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_58:
    // 0x80296CA4: lui         $at, 0xC357
    ctx->r1 = S32(0XC357 << 16);
    // 0x80296CA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80296CAC: lui         $a2, 0xC4C4
    ctx->r6 = S32(0XC4C4 << 16);
    // 0x80296CB0: lui         $a3, 0x44BF
    ctx->r7 = S32(0X44BF << 16);
    // 0x80296CB4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80296CB8: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x80296CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296CC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296CC4: jal         0x802B447C
    // 0x80296CC8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_59;
    // 0x80296CC8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_59:
    // 0x80296CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296CD0: jal         0x802B4510
    // 0x80296CD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_60;
    // 0x80296CD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_60:
    // 0x80296CD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296CDC: jal         0x80318C9C
    // 0x80296CE0: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_61;
    // 0x80296CE0: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    after_61:
    // 0x80296CE4: lw          $v0, 0x46EC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X46EC);
    // 0x80296CE8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80296CEC: lh          $t4, 0xB0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XB0);
    // 0x80296CF0: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x80296CF4: addu        $a0, $t4, $s2
    ctx->r4 = ADD32(ctx->r12, ctx->r18);
    // 0x80296CF8: jalr        $t9
    // 0x80296CFC: addiu       $a0, $a0, 0x454C
    ctx->r4 = ADD32(ctx->r4, 0X454C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_62;
    // 0x80296CFC: addiu       $a0, $a0, 0x454C
    ctx->r4 = ADD32(ctx->r4, 0X454C);
    after_62:
    // 0x80296D00: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80296D04: jal         0x802AB2AC
    // 0x80296D08: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_63;
    // 0x80296D08: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_63:
    // 0x80296D0C: addiu       $s0, $s2, 0x4BEC
    ctx->r16 = ADD32(ctx->r18, 0X4BEC);
    // 0x80296D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296D14: jal         0x802B3F64
    // 0x80296D18: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_64;
    // 0x80296D18: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_64:
    // 0x80296D1C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80296D20: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80296D24: lui         $a3, 0x43AC
    ctx->r7 = S32(0X43AC << 16);
    // 0x80296D28: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80296D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296D30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296D34: lui         $a2, 0xC518
    ctx->r6 = S32(0XC518 << 16);
    // 0x80296D38: jal         0x802B447C
    // 0x80296D3C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_65;
    // 0x80296D3C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_65:
    // 0x80296D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296D44: jal         0x802B4510
    // 0x80296D48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_66;
    // 0x80296D48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_66:
    // 0x80296D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296D50: jal         0x80318C9C
    // 0x80296D54: lui         $a1, 0x42C2
    ctx->r5 = S32(0X42C2 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_67;
    // 0x80296D54: lui         $a1, 0x42C2
    ctx->r5 = S32(0X42C2 << 16);
    after_67:
    // 0x80296D58: lw          $v0, 0x4D8C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4D8C);
    // 0x80296D5C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80296D60: lh          $t5, 0xB0($v0)
    ctx->r13 = MEM_H(ctx->r2, 0XB0);
    // 0x80296D64: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x80296D68: addu        $a0, $t5, $s2
    ctx->r4 = ADD32(ctx->r13, ctx->r18);
    // 0x80296D6C: jalr        $t9
    // 0x80296D70: addiu       $a0, $a0, 0x4BEC
    ctx->r4 = ADD32(ctx->r4, 0X4BEC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_68;
    // 0x80296D70: addiu       $a0, $a0, 0x4BEC
    ctx->r4 = ADD32(ctx->r4, 0X4BEC);
    after_68:
    // 0x80296D74: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80296D78: jal         0x802AB2AC
    // 0x80296D7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_69;
    // 0x80296D7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_69:
    // 0x80296D80: addiu       $s0, $s2, 0x528C
    ctx->r16 = ADD32(ctx->r18, 0X528C);
    // 0x80296D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296D88: jal         0x802B3F64
    // 0x80296D8C: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_70;
    // 0x80296D8C: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_70:
    // 0x80296D90: lui         $at, 0x43DC
    ctx->r1 = S32(0X43DC << 16);
    // 0x80296D94: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80296D98: lui         $a3, 0x43C0
    ctx->r7 = S32(0X43C0 << 16);
    // 0x80296D9C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80296DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296DA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296DA8: lui         $a2, 0xC513
    ctx->r6 = S32(0XC513 << 16);
    // 0x80296DAC: jal         0x802B447C
    // 0x80296DB0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_71;
    // 0x80296DB0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_71:
    // 0x80296DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296DB8: jal         0x802B4510
    // 0x80296DBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_72;
    // 0x80296DBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_72:
    // 0x80296DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296DC4: jal         0x80318C9C
    // 0x80296DC8: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_73;
    // 0x80296DC8: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_73:
    // 0x80296DCC: lw          $v0, 0x542C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X542C);
    // 0x80296DD0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80296DD4: lh          $t6, 0xB0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XB0);
    // 0x80296DD8: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x80296DDC: addu        $a0, $t6, $s2
    ctx->r4 = ADD32(ctx->r14, ctx->r18);
    // 0x80296DE0: jalr        $t9
    // 0x80296DE4: addiu       $a0, $a0, 0x528C
    ctx->r4 = ADD32(ctx->r4, 0X528C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_74;
    // 0x80296DE4: addiu       $a0, $a0, 0x528C
    ctx->r4 = ADD32(ctx->r4, 0X528C);
    after_74:
    // 0x80296DE8: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80296DEC: jal         0x802AB2AC
    // 0x80296DF0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_75;
    // 0x80296DF0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_75:
    // 0x80296DF4: addiu       $s0, $s2, 0x592C
    ctx->r16 = ADD32(ctx->r18, 0X592C);
    // 0x80296DF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296DFC: jal         0x802B3F64
    // 0x80296E00: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_76;
    // 0x80296E00: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_76:
    // 0x80296E04: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80296E08: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80296E0C: lui         $a2, 0x43E5
    ctx->r6 = S32(0X43E5 << 16);
    // 0x80296E10: lui         $a3, 0x447E
    ctx->r7 = S32(0X447E << 16);
    // 0x80296E14: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x80296E18: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80296E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296E20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296E24: jal         0x802B447C
    // 0x80296E28: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_77;
    // 0x80296E28: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_77:
    // 0x80296E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296E30: jal         0x802B4510
    // 0x80296E34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_78;
    // 0x80296E34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_78:
    // 0x80296E38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296E3C: jal         0x80318C9C
    // 0x80296E40: lui         $a1, 0x42D0
    ctx->r5 = S32(0X42D0 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_79;
    // 0x80296E40: lui         $a1, 0x42D0
    ctx->r5 = S32(0X42D0 << 16);
    after_79:
    // 0x80296E44: lw          $v0, 0x5ACC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X5ACC);
    // 0x80296E48: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80296E4C: lh          $t7, 0xB0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XB0);
    // 0x80296E50: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x80296E54: addu        $a0, $t7, $s2
    ctx->r4 = ADD32(ctx->r15, ctx->r18);
    // 0x80296E58: jalr        $t9
    // 0x80296E5C: addiu       $a0, $a0, 0x592C
    ctx->r4 = ADD32(ctx->r4, 0X592C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_80;
    // 0x80296E5C: addiu       $a0, $a0, 0x592C
    ctx->r4 = ADD32(ctx->r4, 0X592C);
    after_80:
    // 0x80296E60: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80296E64: jal         0x802AB2AC
    // 0x80296E68: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_81;
    // 0x80296E68: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_81:
    // 0x80296E6C: addiu       $s0, $s2, 0x5FCC
    ctx->r16 = ADD32(ctx->r18, 0X5FCC);
    // 0x80296E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296E74: jal         0x802B3F64
    // 0x80296E78: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_82;
    // 0x80296E78: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_82:
    // 0x80296E7C: lui         $at, 0x43E4
    ctx->r1 = S32(0X43E4 << 16);
    // 0x80296E80: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80296E84: lui         $a2, 0x4402
    ctx->r6 = S32(0X4402 << 16);
    // 0x80296E88: lui         $a3, 0x4486
    ctx->r7 = S32(0X4486 << 16);
    // 0x80296E8C: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x80296E90: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x80296E94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296E98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296E9C: jal         0x802B447C
    // 0x80296EA0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_83;
    // 0x80296EA0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_83:
    // 0x80296EA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296EA8: jal         0x802B4510
    // 0x80296EAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_84;
    // 0x80296EAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_84:
    // 0x80296EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296EB4: jal         0x80318C9C
    // 0x80296EB8: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_85;
    // 0x80296EB8: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_85:
    // 0x80296EBC: lw          $v0, 0x616C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X616C);
    // 0x80296EC0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80296EC4: lh          $t8, 0xB0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XB0);
    // 0x80296EC8: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x80296ECC: addu        $a0, $t8, $s2
    ctx->r4 = ADD32(ctx->r24, ctx->r18);
    // 0x80296ED0: jalr        $t9
    // 0x80296ED4: addiu       $a0, $a0, 0x5FCC
    ctx->r4 = ADD32(ctx->r4, 0X5FCC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_86;
    // 0x80296ED4: addiu       $a0, $a0, 0x5FCC
    ctx->r4 = ADD32(ctx->r4, 0X5FCC);
    after_86:
    // 0x80296ED8: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80296EDC: jal         0x802AB2AC
    // 0x80296EE0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_87;
    // 0x80296EE0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_87:
    // 0x80296EE4: addiu       $s0, $s2, 0x666C
    ctx->r16 = ADD32(ctx->r18, 0X666C);
    // 0x80296EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296EEC: jal         0x802B3F64
    // 0x80296EF0: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_88;
    // 0x80296EF0: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_88:
    // 0x80296EF4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80296EF8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80296EFC: lui         $a2, 0x4402
    ctx->r6 = S32(0X4402 << 16);
    // 0x80296F00: lui         $a3, 0x4477
    ctx->r7 = S32(0X4477 << 16);
    // 0x80296F04: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x80296F08: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x80296F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296F10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296F14: jal         0x802B447C
    // 0x80296F18: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_89;
    // 0x80296F18: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_89:
    // 0x80296F1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296F20: jal         0x802B4510
    // 0x80296F24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_90;
    // 0x80296F24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_90:
    // 0x80296F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296F2C: jal         0x80318C9C
    // 0x80296F30: lui         $a1, 0x42D8
    ctx->r5 = S32(0X42D8 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_91;
    // 0x80296F30: lui         $a1, 0x42D8
    ctx->r5 = S32(0X42D8 << 16);
    after_91:
    // 0x80296F34: lw          $v0, 0x680C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X680C);
    // 0x80296F38: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80296F3C: lh          $t0, 0xB0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XB0);
    // 0x80296F40: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x80296F44: addu        $a0, $t0, $s2
    ctx->r4 = ADD32(ctx->r8, ctx->r18);
    // 0x80296F48: jalr        $t9
    // 0x80296F4C: addiu       $a0, $a0, 0x666C
    ctx->r4 = ADD32(ctx->r4, 0X666C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_92;
    // 0x80296F4C: addiu       $a0, $a0, 0x666C
    ctx->r4 = ADD32(ctx->r4, 0X666C);
    after_92:
    // 0x80296F50: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80296F54: jal         0x802AB2AC
    // 0x80296F58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_93;
    // 0x80296F58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_93:
    // 0x80296F5C: addiu       $s0, $s2, 0x6D0C
    ctx->r16 = ADD32(ctx->r18, 0X6D0C);
    // 0x80296F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296F64: jal         0x802B3F64
    // 0x80296F68: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_94;
    // 0x80296F68: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_94:
    // 0x80296F6C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80296F70: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80296F74: lui         $a2, 0xC50F
    ctx->r6 = S32(0XC50F << 16);
    // 0x80296F78: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80296F7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296F80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296F84: lui         $a3, 0x448E
    ctx->r7 = S32(0X448E << 16);
    // 0x80296F88: jal         0x802B447C
    // 0x80296F8C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_95;
    // 0x80296F8C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_95:
    // 0x80296F90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296F94: jal         0x802B4510
    // 0x80296F98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_96;
    // 0x80296F98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_96:
    // 0x80296F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296FA0: jal         0x80318C9C
    // 0x80296FA4: lui         $a1, 0x42A6
    ctx->r5 = S32(0X42A6 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_97;
    // 0x80296FA4: lui         $a1, 0x42A6
    ctx->r5 = S32(0X42A6 << 16);
    after_97:
    // 0x80296FA8: lw          $v0, 0x6EAC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X6EAC);
    // 0x80296FAC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80296FB0: lh          $t1, 0xB0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XB0);
    // 0x80296FB4: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x80296FB8: addu        $a0, $t1, $s2
    ctx->r4 = ADD32(ctx->r9, ctx->r18);
    // 0x80296FBC: jalr        $t9
    // 0x80296FC0: addiu       $a0, $a0, 0x6D0C
    ctx->r4 = ADD32(ctx->r4, 0X6D0C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_98;
    // 0x80296FC0: addiu       $a0, $a0, 0x6D0C
    ctx->r4 = ADD32(ctx->r4, 0X6D0C);
    after_98:
    // 0x80296FC4: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80296FC8: jal         0x802AB2AC
    // 0x80296FCC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_99;
    // 0x80296FCC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_99:
    // 0x80296FD0: addiu       $s0, $s2, 0x73AC
    ctx->r16 = ADD32(ctx->r18, 0X73AC);
    // 0x80296FD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296FD8: jal         0x802B3F64
    // 0x80296FDC: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_100;
    // 0x80296FDC: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_100:
    // 0x80296FE0: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x80296FE4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80296FE8: lui         $a2, 0xC503
    ctx->r6 = S32(0XC503 << 16);
    // 0x80296FEC: lui         $a3, 0x4489
    ctx->r7 = S32(0X4489 << 16);
    // 0x80296FF0: ori         $a3, $a3, 0xE000
    ctx->r7 = ctx->r7 | 0XE000;
    // 0x80296FF4: ori         $a2, $a2, 0xB000
    ctx->r6 = ctx->r6 | 0XB000;
    // 0x80296FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296FFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80297000: jal         0x802B447C
    // 0x80297004: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_101;
    // 0x80297004: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_101:
    // 0x80297008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029700C: jal         0x802B4510
    // 0x80297010: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_102;
    // 0x80297010: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_102:
    // 0x80297014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80297018: jal         0x80318C9C
    // 0x8029701C: lui         $a1, 0x42A6
    ctx->r5 = S32(0X42A6 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_103;
    // 0x8029701C: lui         $a1, 0x42A6
    ctx->r5 = S32(0X42A6 << 16);
    after_103:
    // 0x80297020: lw          $v0, 0x754C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X754C);
    // 0x80297024: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80297028: lh          $t2, 0xB0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XB0);
    // 0x8029702C: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x80297030: addu        $a0, $t2, $s2
    ctx->r4 = ADD32(ctx->r10, ctx->r18);
    // 0x80297034: jalr        $t9
    // 0x80297038: addiu       $a0, $a0, 0x73AC
    ctx->r4 = ADD32(ctx->r4, 0X73AC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_104;
    // 0x80297038: addiu       $a0, $a0, 0x73AC
    ctx->r4 = ADD32(ctx->r4, 0X73AC);
    after_104:
    // 0x8029703C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80297040: jal         0x802AB2AC
    // 0x80297044: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_105;
    // 0x80297044: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_105:
    // 0x80297048: addiu       $s0, $s2, 0x7A4C
    ctx->r16 = ADD32(ctx->r18, 0X7A4C);
    // 0x8029704C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80297050: jal         0x802B3F64
    // 0x80297054: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_106;
    // 0x80297054: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_106:
    // 0x80297058: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029705C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80297060: lui         $a2, 0xC4E4
    ctx->r6 = S32(0XC4E4 << 16);
    // 0x80297064: lui         $a3, 0xC3A8
    ctx->r7 = S32(0XC3A8 << 16);
    // 0x80297068: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x8029706C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80297070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80297074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80297078: jal         0x802B447C
    // 0x8029707C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_107;
    // 0x8029707C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_107:
    // 0x80297080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80297084: jal         0x802B4510
    // 0x80297088: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_108;
    // 0x80297088: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_108:
    // 0x8029708C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80297090: jal         0x80318C9C
    // 0x80297094: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_109;
    // 0x80297094: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    after_109:
    // 0x80297098: lw          $v0, 0x7BEC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X7BEC);
    // 0x8029709C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802970A0: lh          $t3, 0xB0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XB0);
    // 0x802970A4: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802970A8: addu        $a0, $t3, $s2
    ctx->r4 = ADD32(ctx->r11, ctx->r18);
    // 0x802970AC: jalr        $t9
    // 0x802970B0: addiu       $a0, $a0, 0x7A4C
    ctx->r4 = ADD32(ctx->r4, 0X7A4C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_110;
    // 0x802970B0: addiu       $a0, $a0, 0x7A4C
    ctx->r4 = ADD32(ctx->r4, 0X7A4C);
    after_110:
    // 0x802970B4: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x802970B8: jal         0x802AB2AC
    // 0x802970BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_111;
    // 0x802970BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_111:
    // 0x802970C0: ori         $at, $zero, 0x80EC
    ctx->r1 = 0 | 0X80EC;
    // 0x802970C4: addu        $s0, $s2, $at
    ctx->r16 = ADD32(ctx->r18, ctx->r1);
    // 0x802970C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802970CC: jal         0x802B3F64
    // 0x802970D0: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_112;
    // 0x802970D0: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_112:
    // 0x802970D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802970D8: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802970DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802970E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802970E4: lui         $a2, 0xC4D8
    ctx->r6 = S32(0XC4D8 << 16);
    // 0x802970E8: lui         $a3, 0xC3A8
    ctx->r7 = S32(0XC3A8 << 16);
    // 0x802970EC: jal         0x802B447C
    // 0x802970F0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_113;
    // 0x802970F0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_113:
    // 0x802970F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802970F8: jal         0x802B4510
    // 0x802970FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_114;
    // 0x802970FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_114:
    // 0x80297100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80297104: jal         0x80318C9C
    // 0x80297108: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_115;
    // 0x80297108: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_115:
    // 0x8029710C: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80297110: addu        $s1, $s2, $at
    ctx->r17 = ADD32(ctx->r18, ctx->r1);
    // 0x80297114: lw          $v0, 0x28C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X28C);
    // 0x80297118: ori         $at, $zero, 0x80EC
    ctx->r1 = 0 | 0X80EC;
    // 0x8029711C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80297120: lh          $t4, 0xB0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XB0);
    // 0x80297124: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x80297128: addu        $a0, $t4, $s2
    ctx->r4 = ADD32(ctx->r12, ctx->r18);
    // 0x8029712C: jalr        $t9
    // 0x80297130: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_116;
    // 0x80297130: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_116:
    // 0x80297134: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80297138: jal         0x802AB2AC
    // 0x8029713C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_117;
    // 0x8029713C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_117:
    // 0x80297140: ori         $at, $zero, 0x878C
    ctx->r1 = 0 | 0X878C;
    // 0x80297144: addu        $s0, $s2, $at
    ctx->r16 = ADD32(ctx->r18, ctx->r1);
    // 0x80297148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029714C: jal         0x802B3F64
    // 0x80297150: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_118;
    // 0x80297150: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_118:
    // 0x80297154: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297158: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029715C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80297160: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80297164: lui         $a2, 0xC4D8
    ctx->r6 = S32(0XC4D8 << 16);
    // 0x80297168: lui         $a3, 0xC3A8
    ctx->r7 = S32(0XC3A8 << 16);
    // 0x8029716C: jal         0x802B447C
    // 0x80297170: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_119;
    // 0x80297170: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_119:
    // 0x80297174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80297178: jal         0x802B4510
    // 0x8029717C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_120;
    // 0x8029717C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_120:
    // 0x80297180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80297184: jal         0x80318C9C
    // 0x80297188: lui         $a1, 0x430C
    ctx->r5 = S32(0X430C << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_121;
    // 0x80297188: lui         $a1, 0x430C
    ctx->r5 = S32(0X430C << 16);
    after_121:
    // 0x8029718C: lw          $v0, 0x92C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X92C);
    // 0x80297190: ori         $at, $zero, 0x878C
    ctx->r1 = 0 | 0X878C;
    // 0x80297194: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80297198: lh          $t5, 0xB0($v0)
    ctx->r13 = MEM_H(ctx->r2, 0XB0);
    // 0x8029719C: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802971A0: addu        $a0, $t5, $s2
    ctx->r4 = ADD32(ctx->r13, ctx->r18);
    // 0x802971A4: jalr        $t9
    // 0x802971A8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_122;
    // 0x802971A8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_122:
    // 0x802971AC: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x802971B0: jal         0x802AB2AC
    // 0x802971B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_123;
    // 0x802971B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_123:
    // 0x802971B8: ori         $at, $zero, 0x8E2C
    ctx->r1 = 0 | 0X8E2C;
    // 0x802971BC: addu        $s0, $s2, $at
    ctx->r16 = ADD32(ctx->r18, ctx->r1);
    // 0x802971C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802971C4: jal         0x802B3F64
    // 0x802971C8: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_124;
    // 0x802971C8: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_124:
    // 0x802971CC: lui         $at, 0xC2CA
    ctx->r1 = S32(0XC2CA << 16);
    // 0x802971D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802971D4: lui         $a3, 0x4432
    ctx->r7 = S32(0X4432 << 16);
    // 0x802971D8: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802971DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802971E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802971E4: lui         $a2, 0xC36C
    ctx->r6 = S32(0XC36C << 16);
    // 0x802971E8: jal         0x802B447C
    // 0x802971EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_125;
    // 0x802971EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_125:
    // 0x802971F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802971F4: jal         0x802B4510
    // 0x802971F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_126;
    // 0x802971F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_126:
    // 0x802971FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80297200: jal         0x80318C9C
    // 0x80297204: lui         $a1, 0x430B
    ctx->r5 = S32(0X430B << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_127;
    // 0x80297204: lui         $a1, 0x430B
    ctx->r5 = S32(0X430B << 16);
    after_127:
    // 0x80297208: lw          $v0, 0xFCC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XFCC);
    // 0x8029720C: ori         $at, $zero, 0x8E2C
    ctx->r1 = 0 | 0X8E2C;
    // 0x80297210: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80297214: lh          $t6, 0xB0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XB0);
    // 0x80297218: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x8029721C: addu        $a0, $t6, $s2
    ctx->r4 = ADD32(ctx->r14, ctx->r18);
    // 0x80297220: jalr        $t9
    // 0x80297224: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_128;
    // 0x80297224: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_128:
    // 0x80297228: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8029722C: jal         0x802AB2AC
    // 0x80297230: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_129;
    // 0x80297230: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_129:
    // 0x80297234: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80297238: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8029723C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80297240: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80297244: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x80297248: jr          $ra
    // 0x8029724C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8029724C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_80236EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80236EE8: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x80236EEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80236EF0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80236EF4: blez        $t6, L_80236F20
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80236EF8: nop
    
            goto L_80236F20;
    }
    // 0x80236EF8: nop

    // 0x80236EFC: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
L_80236F00:
    // 0x80236F00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236F04: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80236F08: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80236F0C: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
    // 0x80236F10: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x80236F14: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80236F18: bnel        $at, $zero, L_80236F00
    if (ctx->r1 != 0) {
        // 0x80236F1C: lw          $t7, 0x4($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X4);
            goto L_80236F00;
    }
    goto skip_0;
    // 0x80236F1C: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    skip_0:
L_80236F20:
    // 0x80236F20: jr          $ra
    // 0x80236F24: nop

    return;
    // 0x80236F24: nop

;}
RECOMP_FUNC void D_802E9C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9CDC: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802E9CE0: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802E9CE4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802E9CE8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802E9CEC: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x802E9CF0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E9CF4: jr          $ra
    // 0x802E9CF8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x802E9CF8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
;}
RECOMP_FUNC void D_80223094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223094: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80223098: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022309C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x802230A0: lui         $t7, 0xBD00
    ctx->r15 = S32(0XBD00 << 16);
    // 0x802230A4: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802230A8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x802230AC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802230B0: jr          $ra
    // 0x802230B4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    return;
    // 0x802230B4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
;}
RECOMP_FUNC void D_802BCBA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802BCC28: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802BCC2C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802BCC30: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x802BCC34: jal         0x802EE050
    // 0x802BCC38: sb          $zero, 0x73($sp)
    MEM_B(0X73, ctx->r29) = 0;
    static_3_802EE050(rdram, ctx);
        goto after_0;
    // 0x802BCC38: sb          $zero, 0x73($sp)
    MEM_B(0X73, ctx->r29) = 0;
    after_0:
    // 0x802BCC3C: jal         0x8022331C
    // 0x802BCC40: nop

    static_3_8022331C(rdram, ctx);
        goto after_1;
    // 0x802BCC40: nop

    after_1:
    // 0x802BCC44: jal         0x8022970C
    // 0x802BCC48: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x802BCC48: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x802BCC4C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802BCC50: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802BCC54: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x802BCC58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802BCC5C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802BCC60: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802BCC64: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x802BCC68: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x802BCC6C: jal         0x8022A848
    // 0x802BCC70: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_3;
    // 0x802BCC70: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x802BCC74: jal         0x80221B2C
    // 0x802BCC78: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    static_3_80221B2C(rdram, ctx);
        goto after_4;
    // 0x802BCC78: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x802BCC7C: jal         0x8022970C
    // 0x802BCC80: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_5;
    // 0x802BCC80: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x802BCC84: jal         0x8022149C
    // 0x802BCC88: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    static_3_8022149C(rdram, ctx);
        goto after_6;
    // 0x802BCC88: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x802BCC8C: jal         0x802233EC
    // 0x802BCC90: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_7;
    // 0x802BCC90: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    after_7:
    // 0x802BCC94: jal         0x8021F4E4
    // 0x802BCC98: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_8;
    // 0x802BCC98: nop

    after_8:
    // 0x802BCC9C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x802BCCA0: addiu       $t7, $zero, 0xCA
    ctx->r15 = ADD32(0, 0XCA);
    // 0x802BCCA4: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x802BCCA8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x802BCCAC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802BCCB0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802BCCB4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802BCCB8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802BCCBC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x802BCCC0: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x802BCCC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BCCC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BCCCC: jal         0x8021F35C
    // 0x802BCCD0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x802BCCD0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x802BCCD4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802BCCD8: addiu       $t1, $zero, 0xCA
    ctx->r9 = ADD32(0, 0XCA);
    // 0x802BCCDC: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802BCCE0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802BCCE4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802BCCE8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802BCCEC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802BCCF0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802BCCF4: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802BCCF8: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x802BCCFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BCD00: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802BCD04: jal         0x8021F35C
    // 0x802BCD08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x802BCD08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x802BCD0C: addiu       $t4, $zero, 0x1E0
    ctx->r12 = ADD32(0, 0X1E0);
    // 0x802BCD10: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x802BCD14: addiu       $t6, $zero, 0xCA
    ctx->r14 = ADD32(0, 0XCA);
    // 0x802BCD18: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x802BCD1C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x802BCD20: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802BCD24: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802BCD28: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802BCD2C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802BCD30: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802BCD34: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802BCD38: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    // 0x802BCD3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BCD40: jal         0x8021F35C
    // 0x802BCD44: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x802BCD44: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_11:
    // 0x802BCD48: addiu       $t9, $zero, 0x1E0
    ctx->r25 = ADD32(0, 0X1E0);
    // 0x802BCD4C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802BCD50: addiu       $t1, $zero, 0xCA
    ctx->r9 = ADD32(0, 0XCA);
    // 0x802BCD54: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802BCD58: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802BCD5C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802BCD60: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802BCD64: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802BCD68: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802BCD6C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802BCD70: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x802BCD74: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    // 0x802BCD78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BCD7C: jal         0x8021F35C
    // 0x802BCD80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x802BCD80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x802BCD84: jal         0x8021FCD0
    // 0x802BCD88: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_13;
    // 0x802BCD88: nop

    after_13:
    // 0x802BCD8C: jal         0x8021F4E4
    // 0x802BCD90: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_14;
    // 0x802BCD90: nop

    after_14:
    // 0x802BCD94: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802BCD98: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x802BCD9C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802BCDA0: addiu       $t7, $zero, 0x96
    ctx->r15 = ADD32(0, 0X96);
    // 0x802BCDA4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802BCDA8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802BCDAC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802BCDB0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x802BCDB4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802BCDB8: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    // 0x802BCDBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BCDC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BCDC4: jal         0x8021F35C
    // 0x802BCDC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_15;
    // 0x802BCDC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x802BCDCC: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802BCDD0: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x802BCDD4: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x802BCDD8: addiu       $t1, $zero, 0x96
    ctx->r9 = ADD32(0, 0X96);
    // 0x802BCDDC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802BCDE0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802BCDE4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802BCDE8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802BCDEC: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802BCDF0: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    // 0x802BCDF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BCDF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BCDFC: jal         0x8021F35C
    // 0x802BCE00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_16;
    // 0x802BCE00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_16:
    // 0x802BCE04: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802BCE08: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x802BCE0C: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802BCE10: addiu       $t5, $zero, 0x96
    ctx->r13 = ADD32(0, 0X96);
    // 0x802BCE14: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x802BCE18: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802BCE1C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802BCE20: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802BCE24: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802BCE28: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
    // 0x802BCE2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BCE30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BCE34: jal         0x8021F35C
    // 0x802BCE38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_17;
    // 0x802BCE38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x802BCE3C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802BCE40: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x802BCE44: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802BCE48: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x802BCE4C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802BCE50: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802BCE54: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802BCE58: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802BCE5C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802BCE60: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
    // 0x802BCE64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BCE68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BCE6C: jal         0x8021F35C
    // 0x802BCE70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_18;
    // 0x802BCE70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_18:
    // 0x802BCE74: jal         0x8021FCD0
    // 0x802BCE78: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_19;
    // 0x802BCE78: nop

    after_19:
    // 0x802BCE7C: jal         0x802230E4
    // 0x802BCE80: nop

    static_3_802230E4(rdram, ctx);
        goto after_20;
    // 0x802BCE80: nop

    after_20:
    // 0x802BCE84: jal         0x8022337C
    // 0x802BCE88: nop

    static_3_8022337C(rdram, ctx);
        goto after_21;
    // 0x802BCE88: nop

    after_21:
    // 0x802BCE8C: jal         0x8021E66C
    // 0x802BCE90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_22;
    // 0x802BCE90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_22:
    // 0x802BCE94: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BCE98: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802BCE9C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802BCEA0: jal         0x8021E708
    // 0x802BCEA4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_23;
    // 0x802BCEA4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_23:
    // 0x802BCEA8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BCEAC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BCEB0: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x802BCEB4: jal         0x8021E87C
    // 0x802BCEB8: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    static_3_8021E87C(rdram, ctx);
        goto after_24;
    // 0x802BCEB8: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    after_24:
    // 0x802BCEBC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802BCEC0: ldc1        $f12, 0x0($at)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r1, 0X0);
    // 0x802BCEC4: jal         0x8021E6EC
    // 0x802BCEC8: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    func_8021E6EC(rdram, ctx);
        goto after_25;
    // 0x802BCEC8: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    after_25:
    // 0x802BCECC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802BCED0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802BCED4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BCED8: jal         0x8021E708
    // 0x802BCEDC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_26;
    // 0x802BCEDC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_26:
    // 0x802BCEE0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BCEE4: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BCEE8: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x802BCEEC: jal         0x8021E87C
    // 0x802BCEF0: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    static_3_8021E87C(rdram, ctx);
        goto after_27;
    // 0x802BCEF0: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    after_27:
    // 0x802BCEF4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BCEF8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BCEFC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x802BCF00: jal         0x8021E87C
    // 0x802BCF04: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    static_3_8021E87C(rdram, ctx);
        goto after_28;
    // 0x802BCF04: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_28:
    // 0x802BCF08: jal         0x8021EC9C
    // 0x802BCF0C: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_29;
    // 0x802BCF0C: nop

    after_29:
    // 0x802BCF10: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802BCF14: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802BCF18: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802BCF1C: blezl       $t0, L_802BCFF8
    if (SIGNED(ctx->r8) <= 0) {
        // 0x802BCF20: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802BCFF8;
    }
    goto skip_0;
    // 0x802BCF20: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x802BCF24: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x802BCF28: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802BCF2C: jal         0x8021E6EC
    // 0x802BCF30: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    func_8021E6EC(rdram, ctx);
        goto after_30;
    // 0x802BCF30: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    after_30:
    // 0x802BCF34: jal         0x8021E66C
    // 0x802BCF38: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    static_3_8021E66C(rdram, ctx);
        goto after_31;
    // 0x802BCF38: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_31:
    // 0x802BCF3C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BCF40: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802BCF44: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802BCF48: jal         0x8021E708
    // 0x802BCF4C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_32;
    // 0x802BCF4C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_32:
    // 0x802BCF50: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802BCF54: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802BCF58: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BCF5C: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x802BCF60: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802BCF64: jal         0x8023072C
    // 0x802BCF68: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_8023072C(rdram, ctx);
        goto after_33;
    // 0x802BCF68: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_33:
    // 0x802BCF6C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BCF70: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x802BCF74: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    // 0x802BCF78: jal         0x8021E87C
    // 0x802BCF7C: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    static_3_8021E87C(rdram, ctx);
        goto after_34;
    // 0x802BCF7C: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_34:
    // 0x802BCF80: jal         0x8021E66C
    // 0x802BCF84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_35;
    // 0x802BCF84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_35:
    // 0x802BCF88: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BCF8C: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x802BCF90: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802BCF94: jal         0x8021E708
    // 0x802BCF98: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_36;
    // 0x802BCF98: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_36:
    // 0x802BCF9C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802BCFA0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802BCFA4: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x802BCFA8: jal         0x8022B460
    // 0x802BCFAC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022B460(rdram, ctx);
        goto after_37;
    // 0x802BCFAC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_37:
    // 0x802BCFB0: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x802BCFB4: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x802BCFB8: jal         0x8021E87C
    // 0x802BCFBC: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    static_3_8021E87C(rdram, ctx);
        goto after_38;
    // 0x802BCFBC: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_38:
    // 0x802BCFC0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BCFC4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802BCFC8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802BCFCC: jal         0x8021E708
    // 0x802BCFD0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_39;
    // 0x802BCFD0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_39:
    // 0x802BCFD4: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x802BCFD8: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    // 0x802BCFDC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802BCFE0: jal         0x802F14C4
    // 0x802BCFE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802F14C4(rdram, ctx);
        goto after_40;
    // 0x802BCFE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_40:
    // 0x802BCFE8: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x802BCFEC: jal         0x8023413C
    // 0x802BCFF0: lw          $a0, 0x50($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X50);
    static_3_8023413C(rdram, ctx);
        goto after_41;
    // 0x802BCFF0: lw          $a0, 0x50($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X50);
    after_41:
    // 0x802BCFF4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802BCFF8:
    // 0x802BCFF8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802BCFFC: jr          $ra
    // 0x802BD000: nop

    return;
    // 0x802BD000: nop

;}
RECOMP_FUNC void D_8022FE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FE40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FE44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FE48: jal         0x8022FB4C
    // 0x8022FE4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_8022FB4C(rdram, ctx);
        goto after_0;
    // 0x8022FE4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8022FE50: beq         $v0, $zero, L_8022FEDC
    if (ctx->r2 == 0) {
        // 0x8022FE54: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_8022FEDC;
    }
    // 0x8022FE54: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FE58: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8022FE5C: bne         $a1, $at, L_8022FE6C
    if (ctx->r5 != ctx->r1) {
        // 0x8022FE60: lui         $t6, 0x0
        ctx->r14 = S32(0X0 << 16);
            goto L_8022FE6C;
    }
    // 0x8022FE60: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022FE64: b           L_8022FEDC
    // 0x8022FE68: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
        goto L_8022FEDC;
    // 0x8022FE68: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
L_8022FE6C:
    // 0x8022FE6C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8022FE70: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8022FE74: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x8022FE78: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x8022FE7C: lw          $v1, 0x0($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X0);
    // 0x8022FE80: bnel        $v1, $zero, L_8022FEA0
    if (ctx->r3 != 0) {
        // 0x8022FE84: lhu         $t1, 0x0($v0)
        ctx->r9 = MEM_HU(ctx->r2, 0X0);
            goto L_8022FEA0;
    }
    goto skip_0;
    // 0x8022FE84: lhu         $t1, 0x0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X0);
    skip_0:
    // 0x8022FE88: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022FE8C: jal         0x80231A24
    // 0x8022FE90: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022FE90: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x8022FE94: b           L_8022FEE0
    // 0x8022FE98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022FEE0;
    // 0x8022FE98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FE9C: lhu         $t1, 0x0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X0);
L_8022FEA0:
    // 0x8022FEA0: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x8022FEA4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8022FEA8: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x8022FEAC: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8022FEB0: lbu         $t0, 0x4($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X4);
    // 0x8022FEB4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022FEB8: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x8022FEBC: lbu         $t6, 0x4($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X4);
    // 0x8022FEC0: beql        $t0, $t6, L_8022FEDC
    if (ctx->r8 == ctx->r14) {
        // 0x8022FEC4: sh          $a1, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r5;
            goto L_8022FEDC;
    }
    goto skip_1;
    // 0x8022FEC4: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
    skip_1:
    // 0x8022FEC8: jal         0x80231A24
    // 0x8022FECC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x8022FECC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x8022FED0: b           L_8022FEE0
    // 0x8022FED4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022FEE0;
    // 0x8022FED4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FED8: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
L_8022FEDC:
    // 0x8022FEDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022FEE0:
    // 0x8022FEE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022FEE4: jr          $ra
    // 0x8022FEE8: nop

    return;
    // 0x8022FEE8: nop

;}
RECOMP_FUNC void D_802D20B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2134: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D213C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D2140: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D2144: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802D2148: jal         0x80301EA0
    // 0x802D214C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_80301EA0(rdram, ctx);
        goto after_0;
    // 0x802D214C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802D2150: beq         $v0, $zero, L_802D21C0
    if (ctx->r2 == 0) {
        // 0x802D2154: lw          $a2, 0x1C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1C);
            goto L_802D21C0;
    }
    // 0x802D2154: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802D2158: lbu         $t7, 0x4($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X4);
    // 0x802D215C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802D2160: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802D2164: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x802D2168: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x802D216C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802D2170: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802D2174: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D2178: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802D217C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802D2180: nop

    // 0x802D2184: bc1fl       L_802D2198
    if (!c1cs) {
        // 0x802D2188: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_802D2198;
    }
    goto skip_0;
    // 0x802D2188: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x802D218C: b           L_802D21B0
    // 0x802D2190: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_802D21B0;
    // 0x802D2190: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802D2194: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_802D2198:
    // 0x802D2198: nop

    // 0x802D219C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802D21A0: nop

    // 0x802D21A4: bc1fl       L_802D21B4
    if (!c1cs) {
        // 0x802D21A8: swc1        $f0, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
            goto L_802D21B4;
    }
    goto skip_1;
    // 0x802D21A8: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    skip_1:
    // 0x802D21AC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_802D21B0:
    // 0x802D21B0: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_802D21B4:
    // 0x802D21B4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802D21B8: jal         0x8020178C
    // 0x802D21BC: lbu         $a0, 0x4($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X4);
    static_3_8020178C(rdram, ctx);
        goto after_1;
    // 0x802D21BC: lbu         $a0, 0x4($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X4);
    after_1:
L_802D21C0:
    // 0x802D21C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D21C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D21C8: jr          $ra
    // 0x802D21CC: nop

    return;
    // 0x802D21CC: nop

;}
RECOMP_FUNC void D_80203604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80203604: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x80203608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020360C: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x80203610: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80203614: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80203618: beq         $at, $zero, L_802036C0
    if (ctx->r1 == 0) {
        // 0x8020361C: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_802036C0;
    }
    // 0x8020361C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80203620: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203624: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80203628: jal         0x802011D0
    // 0x8020362C: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    static_3_802011D0(rdram, ctx);
        goto after_0;
    // 0x8020362C: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    after_0:
    // 0x80203630: lbu         $a2, 0x1B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1B);
    // 0x80203634: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80203638: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8020363C: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x80203640: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203644: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80203648: lh          $a1, 0x0($t8)
    ctx->r5 = MEM_H(ctx->r24, 0X0);
    // 0x8020364C: jal         0x80234E90
    // 0x80203650: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_80234E90(rdram, ctx);
        goto after_1;
    // 0x80203650: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_1:
    // 0x80203654: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203658: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8020365C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80203660: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80203664: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
    // 0x80203668: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8020366C: addiu       $a2, $zero, 0x469
    ctx->r6 = ADD32(0, 0X469);
    // 0x80203670: bne         $t9, $at, L_8020368C
    if (ctx->r25 != ctx->r1) {
        // 0x80203674: nop
    
            goto L_8020368C;
    }
    // 0x80203674: nop

    // 0x80203678: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020367C: jal         0x80231C9C
    // 0x80203680: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231C9C(rdram, ctx);
        goto after_2;
    // 0x80203680: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x80203684: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203688: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
L_8020368C:
    // 0x8020368C: jal         0x80234EB0
    // 0x80203690: nop

    static_3_80234EB0(rdram, ctx);
        goto after_3;
    // 0x80203690: nop

    after_3:
    // 0x80203694: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80203698: bne         $v0, $at, L_802036AC
    if (ctx->r2 != ctx->r1) {
        // 0x8020369C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802036AC;
    }
    // 0x8020369C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802036A0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802036A4: jal         0x80235080
    // 0x802036A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80235080(rdram, ctx);
        goto after_4;
    // 0x802036A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_802036AC:
    // 0x802036AC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802036B0: jal         0x80234ED0
    // 0x802036B4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_80234ED0(rdram, ctx);
        goto after_5;
    // 0x802036B4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_5:
    // 0x802036B8: b           L_802036D0
    // 0x802036BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802036D0;
    // 0x802036BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802036C0:
    // 0x802036C0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802036C4: jal         0x802011D0
    // 0x802036C8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_802011D0(rdram, ctx);
        goto after_6;
    // 0x802036C8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_6:
    // 0x802036CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802036D0:
    // 0x802036D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802036D4: jr          $ra
    // 0x802036D8: nop

    return;
    // 0x802036D8: nop

;}
RECOMP_FUNC void D_8029D578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029D5F8: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x8029D5FC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8029D600: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8029D604: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8029D608: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8029D60C: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x8029D610: sw          $a2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r6;
    // 0x8029D614: sw          $t6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r14;
    // 0x8029D618: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029D61C: jal         0x80318510
    // 0x8029D620: lw          $a1, 0x280($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X280);
    static_3_80318510(rdram, ctx);
        goto after_0;
    // 0x8029D620: lw          $a1, 0x280($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X280);
    after_0:
    // 0x8029D624: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x8029D628: lw          $a1, 0x280($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X280);
    // 0x8029D62C: jal         0x80317EC0
    // 0x8029D630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317EC0(rdram, ctx);
        goto after_1;
    // 0x8029D630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8029D634: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029D638: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029D63C: jal         0x802CF4D0
    // 0x8029D640: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_2;
    // 0x8029D640: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_2:
    // 0x8029D644: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029D648: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029D64C: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x8029D650: lh          $v0, 0x284($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X284);
    // 0x8029D654: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8029D658: nop

    // 0x8029D65C: bc1fl       L_8029D7D8
    if (!c1cs) {
        // 0x8029D660: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8029D7D8;
    }
    goto skip_0;
    // 0x8029D660: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x8029D664: bnel        $v0, $zero, L_8029D7D8
    if (ctx->r2 != 0) {
        // 0x8029D668: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8029D7D8;
    }
    goto skip_1;
    // 0x8029D668: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_1:
    // 0x8029D66C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8029D670: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8029D674: sh          $t7, 0x284($s0)
    MEM_H(0X284, ctx->r16) = ctx->r15;
    // 0x8029D678: swc1        $f0, 0x288($s0)
    MEM_W(0X288, ctx->r16) = ctx->f0.u32l;
    // 0x8029D67C: swc1        $f0, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->f0.u32l;
    // 0x8029D680: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x8029D684: jal         0x802F7AC4
    // 0x8029D688: addiu       $a0, $a0, 0x6D0
    ctx->r4 = ADD32(ctx->r4, 0X6D0);
    static_3_802F7AC4(rdram, ctx);
        goto after_3;
    // 0x8029D688: addiu       $a0, $a0, 0x6D0
    ctx->r4 = ADD32(ctx->r4, 0X6D0);
    after_3:
    // 0x8029D68C: jal         0x8022970C
    // 0x8029D690: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    func_8022970C(rdram, ctx);
        goto after_4;
    // 0x8029D690: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    after_4:
    // 0x8029D694: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8029D698: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8029D69C: lui         $at, 0xC54E
    ctx->r1 = S32(0XC54E << 16);
    // 0x8029D6A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8029D6A4: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x8029D6A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8029D6AC: lui         $at, 0x43CD
    ctx->r1 = S32(0X43CD << 16);
    // 0x8029D6B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8029D6B4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8029D6B8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8029D6BC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8029D6C0: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x8029D6C4: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x8029D6C8: swc1        $f10, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f10.u32l;
    // 0x8029D6CC: jal         0x8022A210
    // 0x8029D6D0: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    static_3_8022A210(rdram, ctx);
        goto after_5;
    // 0x8029D6D0: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x8029D6D4: lw          $a2, 0x66C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X66C);
    // 0x8029D6D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8029D6DC: lh          $t8, 0x18($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X18);
    // 0x8029D6E0: lw          $t9, 0x1C($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X1C);
    // 0x8029D6E4: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x8029D6E8: jalr        $t9
    // 0x8029D6EC: addiu       $a0, $a0, 0x5BC
    ctx->r4 = ADD32(ctx->r4, 0X5BC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x8029D6EC: addiu       $a0, $a0, 0x5BC
    ctx->r4 = ADD32(ctx->r4, 0X5BC);
    after_6:
    // 0x8029D6F0: addiu       $a0, $s0, 0x5C0
    ctx->r4 = ADD32(ctx->r16, 0X5C0);
    // 0x8029D6F4: jal         0x80228DE0
    // 0x8029D6F8: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    func_80228DE0(rdram, ctx);
        goto after_7;
    // 0x8029D6F8: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    after_7:
    // 0x8029D6FC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8029D700: sb          $t0, 0x668($s0)
    MEM_B(0X668, ctx->r16) = ctx->r8;
    // 0x8029D704: jal         0x802AF028
    // 0x8029D708: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    static_3_802AF028(rdram, ctx);
        goto after_8;
    // 0x8029D708: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    after_8:
    // 0x8029D70C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029D710: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x8029D714: jal         0x8022EE60
    // 0x8029D718: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    static_3_8022EE60(rdram, ctx);
        goto after_9;
    // 0x8029D718: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_9:
    // 0x8029D71C: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x8029D720: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029D724: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x8029D728: jal         0x8022FCDC
    // 0x8029D72C: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    static_3_8022FCDC(rdram, ctx);
        goto after_10;
    // 0x8029D72C: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_10:
    // 0x8029D730: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x8029D734: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x8029D738: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8029D73C: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x8029D740: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8029D744: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x8029D748: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029D74C: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x8029D750: jal         0x802AF254
    // 0x8029D754: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    static_3_802AF254(rdram, ctx);
        goto after_11;
    // 0x8029D754: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_11:
    // 0x8029D758: jal         0x802AF028
    // 0x8029D75C: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    static_3_802AF028(rdram, ctx);
        goto after_12;
    // 0x8029D75C: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    after_12:
    // 0x8029D760: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029D764: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    // 0x8029D768: jal         0x8022EE60
    // 0x8029D76C: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    static_3_8022EE60(rdram, ctx);
        goto after_13;
    // 0x8029D76C: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_13:
    // 0x8029D770: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x8029D774: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029D778: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x8029D77C: jal         0x8022FCDC
    // 0x8029D780: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    static_3_8022FCDC(rdram, ctx);
        goto after_14;
    // 0x8029D780: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    after_14:
    // 0x8029D784: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x8029D788: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x8029D78C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8029D790: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x8029D794: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8029D798: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x8029D79C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029D7A0: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x8029D7A4: jal         0x802AF254
    // 0x8029D7A8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    static_3_802AF254(rdram, ctx);
        goto after_15;
    // 0x8029D7A8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_15:
    // 0x8029D7AC: lui         $at, 0x4428
    ctx->r1 = S32(0X4428 << 16);
    // 0x8029D7B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8029D7B4: lui         $a2, 0xC4D8
    ctx->r6 = S32(0XC4D8 << 16);
    // 0x8029D7B8: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x8029D7BC: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x8029D7C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8029D7C4: lui         $a3, 0xC238
    ctx->r7 = S32(0XC238 << 16);
    // 0x8029D7C8: jal         0x802AFF70
    // 0x8029D7CC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802AFF70(rdram, ctx);
        goto after_16;
    // 0x8029D7CC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_16:
    // 0x8029D7D0: lh          $v0, 0x284($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X284);
    // 0x8029D7D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8029D7D8:
    // 0x8029D7D8: bne         $v0, $at, L_8029D844
    if (ctx->r2 != ctx->r1) {
        // 0x8029D7DC: lwc1        $f6, 0xD0($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
            goto L_8029D844;
    }
    // 0x8029D7DC: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8029D7E0: lwc1        $f4, 0x290($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X290);
    // 0x8029D7E4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8029D7E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8029D7EC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8029D7F0: swc1        $f8, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->f8.u32l;
    // 0x8029D7F4: lwc1        $f16, 0x290($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X290);
    // 0x8029D7F8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8029D7FC: nop

    // 0x8029D800: bc1fl       L_8029D834
    if (!c1cs) {
        // 0x8029D804: lwc1        $f18, 0x288($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X288);
            goto L_8029D834;
    }
    goto skip_2;
    // 0x8029D804: lwc1        $f18, 0x288($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X288);
    skip_2:
    // 0x8029D808: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8029D80C: lw          $a2, 0x66C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X66C);
    // 0x8029D810: swc1        $f0, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->f0.u32l;
    // 0x8029D814: lh          $t9, 0x18($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X18);
    // 0x8029D818: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8029D81C: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x8029D820: lw          $t9, 0x1C($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X1C);
    // 0x8029D824: addiu       $a0, $a0, 0x5BC
    ctx->r4 = ADD32(ctx->r4, 0X5BC);
    // 0x8029D828: jalr        $t9
    // 0x8029D82C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x8029D82C: nop

    after_17:
    // 0x8029D830: lwc1        $f18, 0x288($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X288);
L_8029D834:
    // 0x8029D834: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8029D838: lh          $v0, 0x284($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X284);
    // 0x8029D83C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8029D840: swc1        $f6, 0x288($s0)
    MEM_W(0X288, ctx->r16) = ctx->f6.u32l;
L_8029D844:
    // 0x8029D844: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8029D848: bne         $v0, $at, L_8029D8A8
    if (ctx->r2 != ctx->r1) {
        // 0x8029D84C: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_8029D8A8;
    }
    // 0x8029D84C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8029D850: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8029D854: lwc1        $f10, 0x288($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X288);
    // 0x8029D858: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8029D85C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8029D860: nop

    // 0x8029D864: bc1fl       L_8029D8AC
    if (!c1cs) {
        // 0x8029D868: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8029D8AC;
    }
    goto skip_3;
    // 0x8029D868: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_3:
    // 0x8029D86C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8029D870: lw          $a2, 0x66C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X66C);
    // 0x8029D874: sh          $t0, 0x284($s0)
    MEM_H(0X284, ctx->r16) = ctx->r8;
    // 0x8029D878: swc1        $f0, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->f0.u32l;
    // 0x8029D87C: lh          $t1, 0x50($a2)
    ctx->r9 = MEM_H(ctx->r6, 0X50);
    // 0x8029D880: lw          $t9, 0x54($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X54);
    // 0x8029D884: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8029D888: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    // 0x8029D88C: jalr        $t9
    // 0x8029D890: addiu       $a0, $a0, 0x5BC
    ctx->r4 = ADD32(ctx->r4, 0X5BC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x8029D890: addiu       $a0, $a0, 0x5BC
    ctx->r4 = ADD32(ctx->r4, 0X5BC);
    after_18:
    // 0x8029D894: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8029D898: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8029D89C: jal         0x80200B20
    // 0x8029D8A0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    static_3_80200B20(rdram, ctx);
        goto after_19;
    // 0x8029D8A0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_19:
    // 0x8029D8A4: lh          $v0, 0x284($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X284);
L_8029D8A8:
    // 0x8029D8A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8029D8AC:
    // 0x8029D8AC: bne         $v0, $at, L_8029D9A8
    if (ctx->r2 != ctx->r1) {
        // 0x8029D8B0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8029D9A8;
    }
    // 0x8029D8B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029D8B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8029D8B8: lwc1        $f0, 0x290($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X290);
    // 0x8029D8BC: lui         $a2, 0xC4A8
    ctx->r6 = S32(0XC4A8 << 16);
    // 0x8029D8C0: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8029D8C4: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x8029D8C8: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x8029D8CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8029D8D0: lui         $a3, 0x4361
    ctx->r7 = S32(0X4361 << 16);
    // 0x8029D8D4: bc1f        L_8029D904
    if (!c1cs) {
        // 0x8029D8D8: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_8029D904;
    }
    // 0x8029D8D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029D8DC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8029D8E0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8029D8E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8029D8E8: sh          $t2, 0x284($s0)
    MEM_H(0X284, ctx->r16) = ctx->r10;
    // 0x8029D8EC: swc1        $f18, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->f18.u32l;
    // 0x8029D8F0: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x8029D8F4: jal         0x802AFF70
    // 0x8029D8F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802AFF70(rdram, ctx);
        goto after_20;
    // 0x8029D8F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_20:
    // 0x8029D8FC: b           L_8029D97C
    // 0x8029D900: lwc1        $f0, 0x290($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X290);
        goto L_8029D97C;
    // 0x8029D900: lwc1        $f0, 0x290($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X290);
L_8029D904:
    // 0x8029D904: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029D908: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029D90C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8029D910: nop

    // 0x8029D914: bc1f        L_8029D930
    if (!c1cs) {
        // 0x8029D918: nop
    
            goto L_8029D930;
    }
    // 0x8029D918: nop

    // 0x8029D91C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029D920: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029D924: lwc1        $f0, 0x290($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X290);
    // 0x8029D928: b           L_8029D97C
    // 0x8029D92C: swc1        $f8, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = ctx->f8.u32l;
        goto L_8029D97C;
    // 0x8029D92C: swc1        $f8, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = ctx->f8.u32l;
L_8029D930:
    // 0x8029D930: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029D934: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029D938: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8029D93C: nop

    // 0x8029D940: bc1fl       L_8029D95C
    if (!c1cs) {
        // 0x8029D944: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_8029D95C;
    }
    goto skip_4;
    // 0x8029D944: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_4:
    // 0x8029D948: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029D94C: lwc1        $f0, 0x290($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X290);
    // 0x8029D950: b           L_8029D97C
    // 0x8029D954: swc1        $f16, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = ctx->f16.u32l;
        goto L_8029D97C;
    // 0x8029D954: swc1        $f16, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = ctx->f16.u32l;
    // 0x8029D958: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_8029D95C:
    // 0x8029D95C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029D960: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x8029D964: nop

    // 0x8029D968: bc1fl       L_8029D980
    if (!c1cs) {
        // 0x8029D96C: mfc1        $a2, $f0
        ctx->r6 = (int32_t)ctx->f0.u32l;
            goto L_8029D980;
    }
    goto skip_5;
    // 0x8029D96C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    skip_5:
    // 0x8029D970: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029D974: lwc1        $f0, 0x290($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X290);
    // 0x8029D978: swc1        $f4, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = ctx->f4.u32l;
L_8029D97C:
    // 0x8029D97C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_8029D980:
    // 0x8029D980: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8029D984: jal         0x80200B20
    // 0x8029D988: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    static_3_80200B20(rdram, ctx);
        goto after_21;
    // 0x8029D988: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_21:
    // 0x8029D98C: lwc1        $f6, 0x28C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28C);
    // 0x8029D990: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8029D994: lwc1        $f16, 0x290($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X290);
    // 0x8029D998: lh          $v0, 0x284($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X284);
    // 0x8029D99C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8029D9A0: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8029D9A4: swc1        $f18, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->f18.u32l;
L_8029D9A8:
    // 0x8029D9A8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8029D9AC: bne         $v0, $at, L_8029DA04
    if (ctx->r2 != ctx->r1) {
        // 0x8029D9B0: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_8029DA04;
    }
    // 0x8029D9B0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8029D9B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029D9B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8029D9BC: lwc1        $f0, 0x290($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X290);
    // 0x8029D9C0: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8029D9C4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x8029D9C8: nop

    // 0x8029D9CC: bc1fl       L_8029D9E0
    if (!c1cs) {
        // 0x8029D9D0: mfc1        $a2, $f0
        ctx->r6 = (int32_t)ctx->f0.u32l;
            goto L_8029D9E0;
    }
    goto skip_6;
    // 0x8029D9D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    skip_6:
    // 0x8029D9D4: sh          $t3, 0x284($s0)
    MEM_H(0X284, ctx->r16) = ctx->r11;
    // 0x8029D9D8: lwc1        $f0, 0x290($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X290);
    // 0x8029D9DC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_8029D9E0:
    // 0x8029D9E0: jal         0x80200B20
    // 0x8029D9E4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_80200B20(rdram, ctx);
        goto after_22;
    // 0x8029D9E4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_22:
    // 0x8029D9E8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8029D9EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8029D9F0: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8029D9F4: lwc1        $f10, 0x290($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X290);
    // 0x8029D9F8: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8029D9FC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8029DA00: swc1        $f18, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->f18.u32l;
L_8029DA04:
    // 0x8029DA04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8029DA08: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8029DA0C: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x8029DA10: jr          $ra
    // 0x8029DA14: nop

    return;
    // 0x8029DA14: nop

;}
RECOMP_FUNC void D_802A8CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8D6C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A8D70: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A8D74: jr          $ra
    // 0x802A8D78: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802A8D78: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_80234CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234CE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80234CE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234CE8: lwc1        $f14, 0x0($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80234CEC: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80234CF0: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80234CF4: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80234CF8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80234CFC: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x80234D00: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80234D04: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x80234D08: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x80234D0C: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80234D10: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80234D14: jal         0x8022AA40
    // 0x80234D18: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_0;
    // 0x80234D18: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x80234D1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80234D20: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80234D24: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80234D28: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80234D2C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80234D30: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80234D34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80234D38: bc1fl       L_80234D4C
    if (!c1cs) {
        // 0x80234D3C: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_80234D4C;
    }
    goto skip_0;
    // 0x80234D3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_0:
    // 0x80234D40: b           L_80234D74
    // 0x80234D44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80234D74;
    // 0x80234D44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80234D48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_80234D4C:
    // 0x80234D4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234D50: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80234D54: mul.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x80234D58: nop

    // 0x80234D5C: mul.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x80234D60: nop

    // 0x80234D64: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80234D68: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x80234D6C: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x80234D70: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
L_80234D74:
    // 0x80234D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234D78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80234D7C: jr          $ra
    // 0x80234D80: nop

    return;
    // 0x80234D80: nop

;}
RECOMP_FUNC void D_8028244C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802824CC: jr          $ra
    // 0x802824D0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802824D0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_802D69E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D6A60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D6A64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D6A68: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802D6A6C: lbu         $t7, 0x380($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X380);
    // 0x802D6A70: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802D6A74: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802D6A78: beq         $t7, $at, L_802D6ADC
    if (ctx->r15 == ctx->r1) {
        // 0x802D6A7C: andi        $t6, $a1, 0xFF
        ctx->r14 = ctx->r5 & 0XFF;
            goto L_802D6ADC;
    }
    // 0x802D6A7C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802D6A80: beq         $t6, $zero, L_802D6ACC
    if (ctx->r14 == 0) {
        // 0x802D6A84: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802D6ACC;
    }
    // 0x802D6A84: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D6A88: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x802D6A8C: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x802D6A90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802D6A94: jal         0x80305E90
    // 0x802D6A98: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    static_3_80305E90(rdram, ctx);
        goto after_0;
    // 0x802D6A98: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x802D6A9C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x802D6AA0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D6AA4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D6AA8: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x802D6AAC: lbu         $a2, 0x380($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X380);
    // 0x802D6AB0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802D6AB4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802D6AB8: addiu       $a1, $v1, 0x384
    ctx->r5 = ADD32(ctx->r3, 0X384);
    // 0x802D6ABC: jal         0x80302238
    // 0x802D6AC0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_1;
    // 0x802D6AC0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802D6AC4: b           L_802D6AE0
    // 0x802D6AC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802D6AE0;
    // 0x802D6AC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802D6ACC:
    // 0x802D6ACC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D6AD0: addiu       $a1, $a3, 0x384
    ctx->r5 = ADD32(ctx->r7, 0X384);
    // 0x802D6AD4: jal         0x80302414
    // 0x802D6AD8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_2;
    // 0x802D6AD8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
L_802D6ADC:
    // 0x802D6ADC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802D6AE0:
    // 0x802D6AE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802D6AE4: jr          $ra
    // 0x802D6AE8: nop

    return;
    // 0x802D6AE8: nop

;}
RECOMP_FUNC void D_8028CAFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028CB7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028CB80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8028CB84: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028CB88: bne         $a0, $zero, L_8028CBA0
    if (ctx->r4 != 0) {
        // 0x8028CB8C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8028CBA0;
    }
    // 0x8028CB8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028CB90: jal         0x802C67EC
    // 0x8028CB94: addiu       $a0, $zero, 0x820
    ctx->r4 = ADD32(0, 0X820);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x8028CB94: addiu       $a0, $zero, 0x820
    ctx->r4 = ADD32(0, 0X820);
    after_0:
    // 0x8028CB98: beq         $v0, $zero, L_8028CBD4
    if (ctx->r2 == 0) {
        // 0x8028CB9C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8028CBD4;
    }
    // 0x8028CB9C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8028CBA0:
    // 0x8028CBA0: jal         0x80317344
    // 0x8028CBA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317344(rdram, ctx);
        goto after_1;
    // 0x8028CBA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8028CBA8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8028CBAC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8028CBB0: sw          $t6, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->r14;
    // 0x8028CBB4: jal         0x802D4800
    // 0x8028CBB8: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    static_3_802D4800(rdram, ctx);
        goto after_2;
    // 0x8028CBB8: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    after_2:
    // 0x8028CBBC: jal         0x802C498C
    // 0x8028CBC0: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    static_3_802C498C(rdram, ctx);
        goto after_3;
    // 0x8028CBC0: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    after_3:
    // 0x8028CBC4: jal         0x802C498C
    // 0x8028CBC8: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
    static_3_802C498C(rdram, ctx);
        goto after_4;
    // 0x8028CBC8: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
    after_4:
    // 0x8028CBCC: jal         0x802C498C
    // 0x8028CBD0: addiu       $a0, $s0, 0x68C
    ctx->r4 = ADD32(ctx->r16, 0X68C);
    static_3_802C498C(rdram, ctx);
        goto after_5;
    // 0x8028CBD0: addiu       $a0, $s0, 0x68C
    ctx->r4 = ADD32(ctx->r16, 0X68C);
    after_5:
L_8028CBD4:
    // 0x8028CBD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028CBD8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8028CBDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8028CBE0: jr          $ra
    // 0x8028CBE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8028CBE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_80230114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230114: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80230118: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8023011C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80230120: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80230124: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80230128: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8023012C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80230130: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80230134: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80230138: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023013C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80230140: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80230144: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80230148: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x8023014C: lw          $s3, 0x0($a2)
    ctx->r19 = MEM_W(ctx->r6, 0X0);
    // 0x80230150: bgez        $a0, L_80230164
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80230154: or          $t6, $a2, $zero
        ctx->r14 = ctx->r6 | 0;
            goto L_80230164;
    }
    // 0x80230154: or          $t6, $a2, $zero
    ctx->r14 = ctx->r6 | 0;
    // 0x80230158: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8023015C: b           L_80230168
    // 0x80230160: negu        $s6, $a0
    ctx->r22 = SUB32(0, ctx->r4);
        goto L_80230168;
    // 0x80230160: negu        $s6, $a0
    ctx->r22 = SUB32(0, ctx->r4);
L_80230164:
    // 0x80230164: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80230168:
    // 0x80230168: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8023016C: beq         $s6, $zero, L_802301A4
    if (ctx->r22 == 0) {
        // 0x80230170: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_802301A4;
    }
    // 0x80230170: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80230174: blez        $s6, L_802301A8
    if (SIGNED(ctx->r22) <= 0) {
        // 0x80230178: lhu         $s1, 0x66($sp)
        ctx->r17 = MEM_HU(ctx->r29, 0X66);
            goto L_802301A8;
    }
    // 0x80230178: lhu         $s1, 0x66($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X66);
L_8023017C:
    // 0x8023017C: multu       $s4, $s1
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80230180: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230184: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x80230188: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8023018C: mflo        $s4
    ctx->r20 = lo;
    // 0x80230190: slt         $at, $s6, $s4
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x80230194: beq         $at, $zero, L_8023017C
    if (ctx->r1 == 0) {
        // 0x80230198: nop
    
            goto L_8023017C;
    }
    // 0x80230198: nop

    // 0x8023019C: b           L_802301AC
    // 0x802301A0: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
        goto L_802301AC;
    // 0x802301A0: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
L_802301A4:
    // 0x802301A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802301A8:
    // 0x802301A8: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
L_802301AC:
    // 0x802301AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802301B0: addu        $t0, $v0, $a2
    ctx->r8 = ADD32(ctx->r2, ctx->r6);
    // 0x802301B4: blez        $v1, L_802301CC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x802301B8: lw          $t8, 0x74($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X74);
            goto L_802301CC;
    }
    // 0x802301B8: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x802301BC: or          $fp, $v1, $zero
    ctx->r30 = ctx->r3 | 0;
    // 0x802301C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802301C4: b           L_802301D0
    // 0x802301C8: addu        $t0, $v0, $a2
    ctx->r8 = ADD32(ctx->r2, ctx->r6);
        goto L_802301D0;
    // 0x802301C8: addu        $t0, $v0, $a2
    ctx->r8 = ADD32(ctx->r2, ctx->r6);
L_802301CC:
    // 0x802301CC: or          $fp, $t0, $zero
    ctx->r30 = ctx->r8 | 0;
L_802301D0:
    // 0x802301D0: addu        $s3, $s3, $fp
    ctx->r19 = ADD32(ctx->r19, ctx->r30);
    // 0x802301D4: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x802301D8: or          $v1, $fp, $zero
    ctx->r3 = ctx->r30 | 0;
    // 0x802301DC: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x802301E0: beq         $t8, $zero, L_802302E8
    if (ctx->r24 == 0) {
        // 0x802301E4: or          $a1, $t0, $zero
        ctx->r5 = ctx->r8 | 0;
            goto L_802302E8;
    }
    // 0x802301E4: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x802301E8: blez        $fp, L_80230410
    if (SIGNED(ctx->r30) <= 0) {
        // 0x802301EC: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_80230410;
    }
    // 0x802301EC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x802301F0: addiu       $s7, $zero, 0x20
    ctx->r23 = ADD32(0, 0X20);
    // 0x802301F4: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
L_802301F8:
    // 0x802301F8: beq         $at, $zero, L_80230214
    if (ctx->r1 == 0) {
        // 0x802301FC: nop
    
            goto L_80230214;
    }
    // 0x802301FC: nop

    // 0x80230200: addu        $t9, $a3, $s3
    ctx->r25 = ADD32(ctx->r7, ctx->r19);
    // 0x80230204: sb          $s7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r23;
    // 0x80230208: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8023020C: b           L_802302D4
    // 0x80230210: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
        goto L_802302D4;
    // 0x80230210: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_80230214:
    // 0x80230214: blez        $s5, L_802302BC
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80230218: lhu         $s1, 0x66($sp)
        ctx->r17 = MEM_HU(ctx->r29, 0X66);
            goto L_802302BC;
    }
    // 0x80230218: lhu         $s1, 0x66($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X66);
    // 0x8023021C: div         $zero, $s6, $s1
    lo = S32(S64(S32(ctx->r22)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r22)) % S64(S32(ctx->r17)));
    // 0x80230220: mfhi        $v0
    ctx->r2 = hi;
    // 0x80230224: andi        $s2, $v0, 0xFFFF
    ctx->r18 = ctx->r2 & 0XFFFF;
    // 0x80230228: bne         $s1, $zero, L_80230234
    if (ctx->r17 != 0) {
        // 0x8023022C: nop
    
            goto L_80230234;
    }
    // 0x8023022C: nop

    // 0x80230230: break       7
    do_break(2149777968);
L_80230234:
    // 0x80230234: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80230238: bne         $s1, $at, L_8023024C
    if (ctx->r17 != ctx->r1) {
        // 0x8023023C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023024C;
    }
    // 0x8023023C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80230240: bne         $s6, $at, L_8023024C
    if (ctx->r22 != ctx->r1) {
        // 0x80230244: nop
    
            goto L_8023024C;
    }
    // 0x80230244: nop

    // 0x80230248: break       6
    do_break(2149777992);
L_8023024C:
    // 0x8023024C: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x80230250: addu        $s0, $a3, $s3
    ctx->r16 = ADD32(ctx->r7, ctx->r19);
    // 0x80230254: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x80230258: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8023025C: jal         0x802306D0
    // 0x80230260: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    static_3_802306D0(rdram, ctx);
        goto after_0;
    // 0x80230260: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80230264: subu        $t1, $s6, $s2
    ctx->r9 = SUB32(ctx->r22, ctx->r18);
    // 0x80230268: div         $zero, $t1, $s1
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r17)));
    // 0x8023026C: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80230270: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80230274: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x80230278: mflo        $s6
    ctx->r22 = lo;
    // 0x8023027C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80230280: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x80230284: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80230288: bne         $s1, $zero, L_80230294
    if (ctx->r17 != 0) {
        // 0x8023028C: nop
    
            goto L_80230294;
    }
    // 0x8023028C: nop

    // 0x80230290: break       7
    do_break(2149778064);
L_80230294:
    // 0x80230294: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80230298: bne         $s1, $at, L_802302AC
    if (ctx->r17 != ctx->r1) {
        // 0x8023029C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802302AC;
    }
    // 0x8023029C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802302A0: bne         $t1, $at, L_802302AC
    if (ctx->r9 != ctx->r1) {
        // 0x802302A4: nop
    
            goto L_802302AC;
    }
    // 0x802302A4: nop

    // 0x802302A8: break       6
    do_break(2149778088);
L_802302AC:
    // 0x802302AC: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x802302B0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802302B4: b           L_802302D4
    // 0x802302B8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
        goto L_802302D4;
    // 0x802302B8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_802302BC:
    // 0x802302BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802302C0: bnel        $a1, $at, L_802302D8
    if (ctx->r5 != ctx->r1) {
        // 0x802302C4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_802302D8;
    }
    goto skip_0;
    // 0x802302C4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x802302C8: addu        $t2, $a3, $s3
    ctx->r10 = ADD32(ctx->r7, ctx->r19);
    // 0x802302CC: sb          $s7, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r23;
    // 0x802302D0: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
L_802302D4:
    // 0x802302D4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_802302D8:
    // 0x802302D8: bnel        $s4, $fp, L_802301F8
    if (ctx->r20 != ctx->r30) {
        // 0x802302DC: slt         $at, $a1, $v1
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_802301F8;
    }
    goto skip_1;
    // 0x802302DC: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    skip_1:
    // 0x802302E0: b           L_80230414
    // 0x802302E4: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
        goto L_80230414;
    // 0x802302E4: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
L_802302E8:
    // 0x802302E8: blez        $fp, L_80230410
    if (SIGNED(ctx->r30) <= 0) {
        // 0x802302EC: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_80230410;
    }
    // 0x802302EC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x802302F0: addu        $s0, $a3, $s3
    ctx->r16 = ADD32(ctx->r7, ctx->r19);
    // 0x802302F4: addiu       $s7, $zero, 0x20
    ctx->r23 = ADD32(0, 0X20);
    // 0x802302F8: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
L_802302FC:
    // 0x802302FC: blez        $s5, L_80230390
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80230300: lhu         $s1, 0x66($sp)
        ctx->r17 = MEM_HU(ctx->r29, 0X66);
            goto L_80230390;
    }
    // 0x80230300: lhu         $s1, 0x66($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X66);
    // 0x80230304: div         $zero, $s6, $s1
    lo = S32(S64(S32(ctx->r22)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r22)) % S64(S32(ctx->r17)));
    // 0x80230308: mfhi        $v0
    ctx->r2 = hi;
    // 0x8023030C: andi        $s2, $v0, 0xFFFF
    ctx->r18 = ctx->r2 & 0XFFFF;
    // 0x80230310: bne         $s1, $zero, L_8023031C
    if (ctx->r17 != 0) {
        // 0x80230314: nop
    
            goto L_8023031C;
    }
    // 0x80230314: nop

    // 0x80230318: break       7
    do_break(2149778200);
L_8023031C:
    // 0x8023031C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80230320: bne         $s1, $at, L_80230334
    if (ctx->r17 != ctx->r1) {
        // 0x80230324: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80230334;
    }
    // 0x80230324: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80230328: bne         $s6, $at, L_80230334
    if (ctx->r22 != ctx->r1) {
        // 0x8023032C: nop
    
            goto L_80230334;
    }
    // 0x8023032C: nop

    // 0x80230330: break       6
    do_break(2149778224);
L_80230334:
    // 0x80230334: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x80230338: jal         0x802306D0
    // 0x8023033C: sh          $a2, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r6;
    static_3_802306D0(rdram, ctx);
        goto after_1;
    // 0x8023033C: sh          $a2, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r6;
    after_1:
    // 0x80230340: subu        $t3, $s6, $s2
    ctx->r11 = SUB32(ctx->r22, ctx->r18);
    // 0x80230344: div         $zero, $t3, $s1
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r17)));
    // 0x80230348: lhu         $a2, 0x52($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X52);
    // 0x8023034C: mflo        $s6
    ctx->r22 = lo;
    // 0x80230350: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80230354: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x80230358: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8023035C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80230360: bne         $s1, $zero, L_8023036C
    if (ctx->r17 != 0) {
        // 0x80230364: nop
    
            goto L_8023036C;
    }
    // 0x80230364: nop

    // 0x80230368: break       7
    do_break(2149778280);
L_8023036C:
    // 0x8023036C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80230370: bne         $s1, $at, L_80230384
    if (ctx->r17 != ctx->r1) {
        // 0x80230374: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80230384;
    }
    // 0x80230374: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80230378: bne         $t3, $at, L_80230384
    if (ctx->r11 != ctx->r1) {
        // 0x8023037C: nop
    
            goto L_80230384;
    }
    // 0x8023037C: nop

    // 0x80230380: break       6
    do_break(2149778304);
L_80230384:
    // 0x80230384: addiu       $v1, $s4, 0x1
    ctx->r3 = ADD32(ctx->r20, 0X1);
    // 0x80230388: b           L_80230408
    // 0x8023038C: or          $s4, $v1, $zero
    ctx->r20 = ctx->r3 | 0;
        goto L_80230408;
    // 0x8023038C: or          $s4, $v1, $zero
    ctx->r20 = ctx->r3 | 0;
L_80230390:
    // 0x80230390: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x80230394: addiu       $v1, $s4, 0x1
    ctx->r3 = ADD32(ctx->r20, 0X1);
    // 0x80230398: beq         $t4, $zero, L_802303D4
    if (ctx->r12 == 0) {
        // 0x8023039C: nop
    
            goto L_802303D4;
    }
    // 0x8023039C: nop

    // 0x802303A0: bnel        $fp, $v1, L_802303C4
    if (ctx->r30 != ctx->r3) {
        // 0x802303A4: addiu       $t5, $zero, 0x30
        ctx->r13 = ADD32(0, 0X30);
            goto L_802303C4;
    }
    goto skip_2;
    // 0x802303A4: addiu       $t5, $zero, 0x30
    ctx->r13 = ADD32(0, 0X30);
    skip_2:
    // 0x802303A8: beql        $a2, $zero, L_802303C4
    if (ctx->r6 == 0) {
        // 0x802303AC: addiu       $t5, $zero, 0x30
        ctx->r13 = ADD32(0, 0X30);
            goto L_802303C4;
    }
    goto skip_3;
    // 0x802303AC: addiu       $t5, $zero, 0x30
    ctx->r13 = ADD32(0, 0X30);
    skip_3:
    // 0x802303B0: sb          $a1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r5;
    // 0x802303B4: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x802303B8: b           L_80230404
    // 0x802303BC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_80230404;
    // 0x802303BC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x802303C0: addiu       $t5, $zero, 0x30
    ctx->r13 = ADD32(0, 0X30);
L_802303C4:
    // 0x802303C4: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
    // 0x802303C8: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x802303CC: b           L_80230404
    // 0x802303D0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_80230404;
    // 0x802303D0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_802303D4:
    // 0x802303D4: bne         $s5, $zero, L_802303F8
    if (ctx->r21 != 0) {
        // 0x802303D8: addiu       $v1, $s4, 0x1
        ctx->r3 = ADD32(ctx->r20, 0X1);
            goto L_802303F8;
    }
    // 0x802303D8: addiu       $v1, $s4, 0x1
    ctx->r3 = ADD32(ctx->r20, 0X1);
    // 0x802303DC: beql        $a2, $zero, L_802303FC
    if (ctx->r6 == 0) {
        // 0x802303E0: sb          $s7, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r23;
            goto L_802303FC;
    }
    goto skip_4;
    // 0x802303E0: sb          $s7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r23;
    skip_4:
    // 0x802303E4: sb          $a1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r5;
    // 0x802303E8: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x802303EC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x802303F0: b           L_80230404
    // 0x802303F4: addiu       $v1, $s4, 0x1
    ctx->r3 = ADD32(ctx->r20, 0X1);
        goto L_80230404;
    // 0x802303F4: addiu       $v1, $s4, 0x1
    ctx->r3 = ADD32(ctx->r20, 0X1);
L_802303F8:
    // 0x802303F8: sb          $s7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r23;
L_802303FC:
    // 0x802303FC: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x80230400: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_80230404:
    // 0x80230404: or          $s4, $v1, $zero
    ctx->r20 = ctx->r3 | 0;
L_80230408:
    // 0x80230408: bne         $v1, $fp, L_802302FC
    if (ctx->r3 != ctx->r30) {
        // 0x8023040C: addiu       $s5, $s5, -0x1
        ctx->r21 = ADD32(ctx->r21, -0X1);
            goto L_802302FC;
    }
    // 0x8023040C: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
L_80230410:
    // 0x80230410: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
L_80230414:
    // 0x80230414: addu        $s3, $s3, $fp
    ctx->r19 = ADD32(ctx->r19, ctx->r30);
    // 0x80230418: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8023041C: sw          $s3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r19;
    // 0x80230420: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80230424: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80230428: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8023042C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80230430: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80230434: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80230438: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023043C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80230440: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80230444: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230448: jr          $ra
    // 0x8023044C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8023044C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void D_802D80A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8120: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802D8124: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D8128: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D812C: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x802D8130: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x802D8134: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x802D8138: jal         0x80228DE0
    // 0x802D813C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802D813C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x802D8140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D8144: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802D8148: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x802D814C: jal         0x8022A0D0
    // 0x802D8150: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x802D8150: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    after_1:
    // 0x802D8154: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x802D8158: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D815C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D8160: lwc1        $f0, 0x20($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X20);
    // 0x802D8164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D8168: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802D816C: mul.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802D8170: nop

    // 0x802D8174: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x802D8178: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x802D817C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802D8180: jal         0x802D01D4
    // 0x802D8184: nop

    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x802D8184: nop

    after_2:
    // 0x802D8188: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D818C: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802D8190: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D8194: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802D8198: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D819C: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802D81A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D81A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802D81A8: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x802D81AC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802D81B0: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x802D81B4: jal         0x8022A0D0
    // 0x802D81B8: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_3;
    // 0x802D81B8: nop

    after_3:
    // 0x802D81BC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x802D81C0: jal         0x802CF888
    // 0x802D81C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802CF888(rdram, ctx);
        goto after_4;
    // 0x802D81C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x802D81C8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D81CC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D81D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D81D4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802D81D8: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x802D81DC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802D81E0: jal         0x802D01D4
    // 0x802D81E4: nop

    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x802D81E4: nop

    after_5:
    // 0x802D81E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D81EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D81F0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x802D81F4: jr          $ra
    // 0x802D81F8: nop

    return;
    // 0x802D81F8: nop

;}
RECOMP_FUNC void D_8023FBF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FBF0: mfc0        $t4, Status
    ctx->r12 = cop0_status_read(ctx);
    // 0x8023FBF4: andi        $v0, $t4, 0xFF01
    ctx->r2 = ctx->r12 & 0XFF01;
    // 0x8023FBF8: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8023FBFC: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x8023FC00: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x8023FC04: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023FC08: xor         $t0, $t3, $at
    ctx->r8 = ctx->r11 ^ ctx->r1;
    // 0x8023FC0C: andi        $t0, $t0, 0xFF00
    ctx->r8 = ctx->r8 & 0XFF00;
    // 0x8023FC10: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x8023FC14: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8023FC18: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x8023FC1C: beq         $t2, $zero, L_8023FC34
    if (ctx->r10 == 0) {
        // 0x8023FC20: srl         $t1, $t3, 16
        ctx->r9 = S32(U32(ctx->r11) >> 16);
            goto L_8023FC34;
    }
    // 0x8023FC20: srl         $t1, $t3, 16
    ctx->r9 = S32(U32(ctx->r11) >> 16);
    // 0x8023FC24: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023FC28: xor         $t1, $t1, $at
    ctx->r9 = ctx->r9 ^ ctx->r1;
    // 0x8023FC2C: andi        $t1, $t1, 0x3F
    ctx->r9 = ctx->r9 & 0X3F;
    // 0x8023FC30: or          $t2, $t2, $t1
    ctx->r10 = ctx->r10 | ctx->r9;
L_8023FC34:
    // 0x8023FC34: sll         $t2, $t2, 16
    ctx->r10 = S32(ctx->r10 << 16);
    // 0x8023FC38: or          $v0, $v0, $t2
    ctx->r2 = ctx->r2 | ctx->r10;
    // 0x8023FC3C: lui         $at, 0x3F
    ctx->r1 = S32(0X3F << 16);
    // 0x8023FC40: and         $t0, $a0, $at
    ctx->r8 = ctx->r4 & ctx->r1;
    // 0x8023FC44: and         $t0, $t0, $t3
    ctx->r8 = ctx->r8 & ctx->r11;
    // 0x8023FC48: srl         $t0, $t0, 15
    ctx->r8 = S32(U32(ctx->r8) >> 15);
    // 0x8023FC4C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8023FC50: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8023FC54: lhu         $t2, 0x0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X0);
    // 0x8023FC58: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023FC5C: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x8023FC60: andi        $t0, $a0, 0xFF01
    ctx->r8 = ctx->r4 & 0XFF01;
    // 0x8023FC64: andi        $t1, $t3, 0xFF00
    ctx->r9 = ctx->r11 & 0XFF00;
    // 0x8023FC68: and         $t0, $t0, $t1
    ctx->r8 = ctx->r8 & ctx->r9;
    // 0x8023FC6C: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8023FC70: ori         $at, $at, 0xFF
    ctx->r1 = ctx->r1 | 0XFF;
    // 0x8023FC74: and         $t4, $t4, $at
    ctx->r12 = ctx->r12 & ctx->r1;
    // 0x8023FC78: or          $t4, $t4, $t0
    ctx->r12 = ctx->r12 | ctx->r8;
    // 0x8023FC7C: mtc0        $t4, Status
    cop0_status_write(ctx, ctx->r12);    // 0x8023FC80: nop

    // 0x8023FC84: nop

    // 0x8023FC88: jr          $ra
    // 0x8023FC8C: nop

    return;
    // 0x8023FC8C: nop

;}
RECOMP_FUNC void D_802E8774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E87F4: jr          $ra
    // 0x802E87F8: sw          $a1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r5;
    return;
    // 0x802E87F8: sw          $a1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_8023F210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F210: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8023F214: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8023F218: sll         $s3, $a1, 16
    ctx->r19 = S32(ctx->r5 << 16);
    // 0x8023F21C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8023F220: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8023F224: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8023F228: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023F22C: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8023F230: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8023F234: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8023F238: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8023F23C: jal         0x8023FC40
    // 0x8023F240: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8023FC40(rdram, ctx);
        goto after_0;
    // 0x8023F240: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8023F244: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8023F248: lw          $s0, 0x8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X8);
    // 0x8023F24C: beq         $s0, $zero, L_8023F298
    if (ctx->r16 == 0) {
        // 0x8023F250: nop
    
            goto L_8023F298;
    }
    // 0x8023F250: nop

L_8023F254:
    // 0x8023F254: lh          $t7, 0xC($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XC);
    // 0x8023F258: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8023F25C: bne         $s3, $t7, L_8023F290
    if (ctx->r19 != ctx->r15) {
        // 0x8023F260: nop
    
            goto L_8023F290;
    }
    // 0x8023F260: nop

    // 0x8023F264: beq         $s1, $zero, L_8023F27C
    if (ctx->r17 == 0) {
        // 0x8023F268: nop
    
            goto L_8023F27C;
    }
    // 0x8023F268: nop

    // 0x8023F26C: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x8023F270: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x8023F274: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8023F278: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
L_8023F27C:
    // 0x8023F27C: jal         0x80237120
    // 0x8023F280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80237120(rdram, ctx);
        goto after_1;
    // 0x8023F280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8023F284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023F288: jal         0x80237150
    // 0x8023F28C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_80237150(rdram, ctx);
        goto after_2;
    // 0x8023F28C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
L_8023F290:
    // 0x8023F290: bne         $s1, $zero, L_8023F254
    if (ctx->r17 != 0) {
        // 0x8023F294: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8023F254;
    }
    // 0x8023F294: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_8023F298:
    // 0x8023F298: jal         0x8023FC40
    // 0x8023F29C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_8023FC40(rdram, ctx);
        goto after_3;
    // 0x8023F29C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x8023F2A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023F2A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8023F2A8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8023F2AC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F2B0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8023F2B4: jr          $ra
    // 0x8023F2B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8023F2B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802EC9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ECA2C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802ECA30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ECA34: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x802ECA38: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802ECA3C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ECA40: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ECA44: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802ECA48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802ECA4C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802ECA50: addiu       $t7, $zero, 0x1FF
    ctx->r15 = ADD32(0, 0X1FF);
    // 0x802ECA54: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x802ECA58: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802ECA5C: sh          $t9, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r25;
    // 0x802ECA60: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802ECA64: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802ECA68: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802ECA6C: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802ECA70: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ECA74: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802ECA78: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802ECA7C: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802ECA80: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
    // 0x802ECA84: swc1        $f6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f6.u32l;
    // 0x802ECA88: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ECA8C: jr          $ra
    // 0x802ECA90: swc1        $f8, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x802ECA90: swc1        $f8, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void D_8021C55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021C55C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8021C560: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021C564: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8021C568: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8021C56C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8021C570: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8021C574: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8021C578: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8021C57C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021C580: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021C584: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021C588: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x8021C58C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x8021C590: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8021C594: andi        $s1, $a2, 0xFF
    ctx->r17 = ctx->r6 & 0XFF;
    // 0x8021C598: beq         $v0, $zero, L_8021C5A8
    if (ctx->r2 == 0) {
        // 0x8021C59C: or          $fp, $a0, $zero
        ctx->r30 = ctx->r4 | 0;
            goto L_8021C5A8;
    }
    // 0x8021C59C: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x8021C5A0: jalr        $v0
    // 0x8021C5A4: lw          $a0, 0x1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8021C5A4: lw          $a0, 0x1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C);
    after_0:
L_8021C5A8:
    // 0x8021C5A8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021C5AC: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8021C5B0: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x8021C5B4: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021C5B8: subu        $t7, $fp, $t6
    ctx->r15 = SUB32(ctx->r30, ctx->r14);
    // 0x8021C5BC: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8021C5C0: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8021C5C4: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x8021C5C8: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8021C5CC: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8021C5D0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8021C5D4: mflo        $t8
    ctx->r24 = lo;
    // 0x8021C5D8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8021C5DC: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8021C5E0: lhu         $t3, 0x0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X0);
    // 0x8021C5E4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8021C5E8: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x8021C5EC: lbu         $t5, 0x8($fp)
    ctx->r13 = MEM_BU(ctx->r30, 0X8);
    // 0x8021C5F0: andi        $t6, $t5, 0x8
    ctx->r14 = ctx->r13 & 0X8;
    // 0x8021C5F4: beql        $t6, $zero, L_8021C608
    if (ctx->r14 == 0) {
        // 0x8021C5F8: lw          $t7, 0x8($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X8);
            goto L_8021C608;
    }
    goto skip_0;
    // 0x8021C5F8: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    skip_0:
    // 0x8021C5FC: jal         0x80223648
    // 0x8021C600: nop

    static_3_80223648(rdram, ctx);
        goto after_1;
    // 0x8021C600: nop

    after_1:
    // 0x8021C604: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
L_8021C608:
    // 0x8021C608: sll         $t0, $s1, 3
    ctx->r8 = S32(ctx->r17 << 3);
    // 0x8021C60C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8021C610: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x8021C614: sw          $t9, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r25;
    // 0x8021C618: lbu         $v1, 0x4($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X4);
    // 0x8021C61C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8021C620: lui         $s7, 0x1000
    ctx->r23 = S32(0X1000 << 16);
    // 0x8021C624: blez        $v1, L_8021C910
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8021C628: nop
    
            goto L_8021C910;
    }
    // 0x8021C628: nop

    // 0x8021C62C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
L_8021C630:
    // 0x8021C630: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x8021C634: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8021C638: slti        $at, $s6, 0x20
    ctx->r1 = SIGNED(ctx->r22) < 0X20 ? 1 : 0;
    // 0x8021C63C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8021C640: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x8021C644: beq         $at, $zero, L_8021C684
    if (ctx->r1 == 0) {
        // 0x8021C648: addu        $s3, $a0, $t2
        ctx->r19 = ADD32(ctx->r4, ctx->r10);
            goto L_8021C684;
    }
    // 0x8021C648: addu        $s3, $a0, $t2
    ctx->r19 = ADD32(ctx->r4, ctx->r10);
    // 0x8021C64C: lw          $t3, 0x10($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X10);
    // 0x8021C650: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8021C654: sllv        $t5, $t4, $s6
    ctx->r13 = S32(ctx->r12 << (ctx->r22 & 31));
    // 0x8021C658: and         $t6, $t3, $t5
    ctx->r14 = ctx->r11 & ctx->r13;
    // 0x8021C65C: bne         $t6, $zero, L_8021C674
    if (ctx->r14 != 0) {
        // 0x8021C660: nop
    
            goto L_8021C674;
    }
    // 0x8021C660: nop

    // 0x8021C664: lbu         $t7, 0x7($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X7);
    // 0x8021C668: andi        $t0, $t7, 0x1
    ctx->r8 = ctx->r15 & 0X1;
    // 0x8021C66C: beq         $t0, $zero, L_8021C67C
    if (ctx->r8 == 0) {
        // 0x8021C670: nop
    
            goto L_8021C67C;
    }
    // 0x8021C670: nop

L_8021C674:
    // 0x8021C674: b           L_8021C684
    // 0x8021C678: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
        goto L_8021C684;
    // 0x8021C678: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_8021C67C:
    // 0x8021C67C: b           L_8021C684
    // 0x8021C680: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
        goto L_8021C684;
    // 0x8021C680: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_8021C684:
    // 0x8021C684: bnel        $s5, $zero, L_8021C6EC
    if (ctx->r21 != 0) {
        // 0x8021C688: lbu         $t7, 0x5($s3)
        ctx->r15 = MEM_BU(ctx->r19, 0X5);
            goto L_8021C6EC;
    }
    goto skip_1;
    // 0x8021C688: lbu         $t7, 0x5($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X5);
    skip_1:
    // 0x8021C68C: lbu         $t9, 0x7($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X7);
    // 0x8021C690: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x8021C694: slt         $at, $s6, $t8
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8021C698: andi        $t1, $t9, 0x2
    ctx->r9 = ctx->r25 & 0X2;
    // 0x8021C69C: beql        $t1, $zero, L_8021C6EC
    if (ctx->r9 == 0) {
        // 0x8021C6A0: lbu         $t7, 0x5($s3)
        ctx->r15 = MEM_BU(ctx->r19, 0X5);
            goto L_8021C6EC;
    }
    goto skip_2;
    // 0x8021C6A0: lbu         $t7, 0x5($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X5);
    skip_2:
    // 0x8021C6A4: beq         $at, $zero, L_8021C8F4
    if (ctx->r1 == 0) {
        // 0x8021C6A8: lw          $t2, 0x44($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X44);
            goto L_8021C8F4;
    }
    // 0x8021C6A8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8021C6AC: addu        $v0, $a0, $t2
    ctx->r2 = ADD32(ctx->r4, ctx->r10);
    // 0x8021C6B0: lbu         $t4, 0x6($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X6);
    // 0x8021C6B4: lbu         $t3, 0x2A($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2A);
    // 0x8021C6B8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021C6BC: subu        $s1, $t4, $t3
    ctx->r17 = SUB32(ctx->r12, ctx->r11);
    // 0x8021C6C0: blezl       $s1, L_8021C8F8
    if (SIGNED(ctx->r17) <= 0) {
        // 0x8021C6C4: lw          $t9, 0x44($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X44);
            goto L_8021C8F8;
    }
    goto skip_3;
    // 0x8021C6C4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    skip_3:
L_8021C6C8:
    // 0x8021C6C8: jal         0x802230E4
    // 0x8021C6CC: nop

    static_3_802230E4(rdram, ctx);
        goto after_2;
    // 0x8021C6CC: nop

    after_2:
    // 0x8021C6D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021C6D4: bne         $s0, $s1, L_8021C6C8
    if (ctx->r16 != ctx->r17) {
        // 0x8021C6D8: addiu       $s4, $s4, -0x1
        ctx->r20 = ADD32(ctx->r20, -0X1);
            goto L_8021C6C8;
    }
    // 0x8021C6D8: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x8021C6DC: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x8021C6E0: b           L_8021C8F4
    // 0x8021C6E4: lbu         $v1, 0x4($t5)
    ctx->r3 = MEM_BU(ctx->r13, 0X4);
        goto L_8021C8F4;
    // 0x8021C6E4: lbu         $v1, 0x4($t5)
    ctx->r3 = MEM_BU(ctx->r13, 0X4);
    // 0x8021C6E8: lbu         $t7, 0x5($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X5);
L_8021C6EC:
    // 0x8021C6EC: lw          $t6, 0x4($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X4);
    // 0x8021C6F0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021C6F4: sll         $t0, $t7, 1
    ctx->r8 = S32(ctx->r15 << 1);
    // 0x8021C6F8: addu        $t9, $t6, $t0
    ctx->r25 = ADD32(ctx->r14, ctx->r8);
    // 0x8021C6FC: lhu         $s2, 0x0($t9)
    ctx->r18 = MEM_HU(ctx->r25, 0X0);
    // 0x8021C700: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8021C704: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8021C708: sll         $s0, $s2, 2
    ctx->r16 = S32(ctx->r18 << 2);
    // 0x8021C70C: addu        $t1, $v0, $s0
    ctx->r9 = ADD32(ctx->r2, ctx->r16);
    // 0x8021C710: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x8021C714: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8021C718: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8021C71C: beq         $t8, $zero, L_8021C778
    if (ctx->r24 == 0) {
        // 0x8021C720: sll         $t1, $s2, 2
        ctx->r9 = S32(ctx->r18 << 2);
            goto L_8021C778;
    }
    // 0x8021C720: sll         $t1, $s2, 2
    ctx->r9 = S32(ctx->r18 << 2);
    // 0x8021C724: bne         $s6, $zero, L_8021C734
    if (ctx->r22 != 0) {
        // 0x8021C728: lui         $v1, 0x0
        ctx->r3 = S32(0X0 << 16);
            goto L_8021C734;
    }
    // 0x8021C728: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8021C72C: b           L_8021C738
    // 0x8021C730: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
        goto L_8021C738;
    // 0x8021C730: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
L_8021C734:
    // 0x8021C734: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_8021C738:
    // 0x8021C738: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8021C73C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021C740: andi        $t4, $s1, 0xFF
    ctx->r12 = ctx->r17 & 0XFF;
    // 0x8021C744: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x8021C748: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x8021C74C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x8021C750: sll         $t3, $t4, 16
    ctx->r11 = S32(ctx->r12 << 16);
    // 0x8021C754: or          $t5, $t3, $at
    ctx->r13 = ctx->r11 | ctx->r1;
    // 0x8021C758: ori         $t7, $t5, 0x40
    ctx->r15 = ctx->r13 | 0X40;
    // 0x8021C75C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021C760: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021C764: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8021C768: addu        $t0, $t6, $s0
    ctx->r8 = ADD32(ctx->r14, ctx->r16);
    // 0x8021C76C: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x8021C770: b           L_8021C7F0
    // 0x8021C774: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
        goto L_8021C7F0;
    // 0x8021C774: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
L_8021C778:
    // 0x8021C778: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8021C77C: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x8021C780: addu        $t8, $t1, $v0
    ctx->r24 = ADD32(ctx->r9, ctx->r2);
    // 0x8021C784: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x8021C788: addu        $t5, $t2, $t3
    ctx->r13 = ADD32(ctx->r10, ctx->r11);
    // 0x8021C78C: sw          $t8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r24;
    // 0x8021C790: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8021C794: sll         $t3, $s2, 6
    ctx->r11 = S32(ctx->r18 << 6);
    // 0x8021C798: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8021C79C: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x8021C7A0: bne         $s6, $zero, L_8021C7D0
    if (ctx->r22 != 0) {
        // 0x8021C7A4: sw          $t6, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r14;
            goto L_8021C7D0;
    }
    // 0x8021C7A4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021C7A8: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8021C7AC: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x8021C7B0: sll         $t9, $s2, 6
    ctx->r25 = S32(ctx->r18 << 6);
    // 0x8021C7B4: jal         0x80223108
    // 0x8021C7B8: addu        $a0, $t0, $t9
    ctx->r4 = ADD32(ctx->r8, ctx->r25);
    static_3_80223108(rdram, ctx);
        goto after_3;
    // 0x8021C7B8: addu        $a0, $t0, $t9
    ctx->r4 = ADD32(ctx->r8, ctx->r25);
    after_3:
    // 0x8021C7BC: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8021C7C0: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x8021C7C4: addu        $t4, $t1, $s0
    ctx->r12 = ADD32(ctx->r9, ctx->r16);
    // 0x8021C7C8: b           L_8021C7F0
    // 0x8021C7CC: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
        goto L_8021C7F0;
    // 0x8021C7CC: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
L_8021C7D0:
    // 0x8021C7D0: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x8021C7D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8021C7D8: jal         0x80222F30
    // 0x8021C7DC: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    static_3_80222F30(rdram, ctx);
        goto after_4;
    // 0x8021C7DC: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    after_4:
    // 0x8021C7E0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8021C7E4: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8021C7E8: addu        $t5, $t8, $s0
    ctx->r13 = ADD32(ctx->r24, ctx->r16);
    // 0x8021C7EC: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
L_8021C7F0:
    // 0x8021C7F0: beq         $s5, $zero, L_8021C894
    if (ctx->r21 == 0) {
        // 0x8021C7F4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8021C894;
    }
    // 0x8021C7F4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8021C7F8: lbu         $t7, 0x20($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X20);
    // 0x8021C7FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021C800: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021C804: beql        $t7, $zero, L_8021C820
    if (ctx->r15 == 0) {
        // 0x8021C808: lbu         $t9, 0x4($s3)
        ctx->r25 = MEM_BU(ctx->r19, 0X4);
            goto L_8021C820;
    }
    goto skip_4;
    // 0x8021C808: lbu         $t9, 0x4($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X4);
    skip_4:
    // 0x8021C80C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8021C810: sll         $t0, $s2, 6
    ctx->r8 = S32(ctx->r18 << 6);
    // 0x8021C814: jal         0x802219B8
    // 0x8021C818: addu        $a0, $t6, $t0
    ctx->r4 = ADD32(ctx->r14, ctx->r8);
    static_3_802219B8(rdram, ctx);
        goto after_5;
    // 0x8021C818: addu        $a0, $t6, $t0
    ctx->r4 = ADD32(ctx->r14, ctx->r8);
    after_5:
    // 0x8021C81C: lbu         $t9, 0x4($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X4);
L_8021C820:
    // 0x8021C820: blezl       $t9, L_8021C898
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8021C824: lw          $t4, 0x74($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X74);
            goto L_8021C898;
    }
    goto skip_5;
    // 0x8021C824: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    skip_5:
    // 0x8021C828: lbu         $t1, 0x8($fp)
    ctx->r9 = MEM_BU(ctx->r30, 0X8);
L_8021C82C:
    // 0x8021C82C: andi        $t4, $t1, 0x20
    ctx->r12 = ctx->r9 & 0X20;
    // 0x8021C830: beql        $t4, $zero, L_8021C874
    if (ctx->r12 == 0) {
        // 0x8021C834: lw          $t0, 0x0($s3)
        ctx->r8 = MEM_W(ctx->r19, 0X0);
            goto L_8021C874;
    }
    goto skip_6;
    // 0x8021C834: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    skip_6:
    // 0x8021C838: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x8021C83C: sll         $s1, $s0, 4
    ctx->r17 = S32(ctx->r16 << 4);
    // 0x8021C840: sll         $t5, $s0, 4
    ctx->r13 = S32(ctx->r16 << 4);
    // 0x8021C844: addu        $v0, $t2, $s1
    ctx->r2 = ADD32(ctx->r10, ctx->r17);
    // 0x8021C848: lw          $s2, 0x0($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X0);
    // 0x8021C84C: or          $t3, $s2, $s7
    ctx->r11 = ctx->r18 | ctx->r23;
    // 0x8021C850: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8021C854: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x8021C858: jal         0x80220C44
    // 0x8021C85C: addu        $a0, $t8, $t5
    ctx->r4 = ADD32(ctx->r24, ctx->r13);
    static_3_80220C44(rdram, ctx);
        goto after_6;
    // 0x8021C85C: addu        $a0, $t8, $t5
    ctx->r4 = ADD32(ctx->r24, ctx->r13);
    after_6:
    // 0x8021C860: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x8021C864: addu        $t6, $t7, $s1
    ctx->r14 = ADD32(ctx->r15, ctx->r17);
    // 0x8021C868: b           L_8021C880
    // 0x8021C86C: sw          $s2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r18;
        goto L_8021C880;
    // 0x8021C86C: sw          $s2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r18;
    // 0x8021C870: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
L_8021C874:
    // 0x8021C874: sll         $t9, $s0, 4
    ctx->r25 = S32(ctx->r16 << 4);
    // 0x8021C878: jal         0x80220C44
    // 0x8021C87C: addu        $a0, $t0, $t9
    ctx->r4 = ADD32(ctx->r8, ctx->r25);
    static_3_80220C44(rdram, ctx);
        goto after_7;
    // 0x8021C87C: addu        $a0, $t0, $t9
    ctx->r4 = ADD32(ctx->r8, ctx->r25);
    after_7:
L_8021C880:
    // 0x8021C880: lbu         $t1, 0x4($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0X4);
    // 0x8021C884: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021C888: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8021C88C: bnel        $at, $zero, L_8021C82C
    if (ctx->r1 != 0) {
        // 0x8021C890: lbu         $t1, 0x8($fp)
        ctx->r9 = MEM_BU(ctx->r30, 0X8);
            goto L_8021C82C;
    }
    goto skip_7;
    // 0x8021C890: lbu         $t1, 0x8($fp)
    ctx->r9 = MEM_BU(ctx->r30, 0X8);
    skip_7:
L_8021C894:
    // 0x8021C894: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
L_8021C898:
    // 0x8021C898: addiu       $t2, $s6, 0x1
    ctx->r10 = ADD32(ctx->r22, 0X1);
    // 0x8021C89C: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x8021C8A0: lbu         $v1, 0x4($t4)
    ctx->r3 = MEM_BU(ctx->r12, 0X4);
    // 0x8021C8A4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8021C8A8: bnel        $t2, $v1, L_8021C8BC
    if (ctx->r10 != ctx->r3) {
        // 0x8021C8AC: lw          $t8, 0x0($t3)
        ctx->r24 = MEM_W(ctx->r11, 0X0);
            goto L_8021C8BC;
    }
    goto skip_8;
    // 0x8021C8AC: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    skip_8:
    // 0x8021C8B0: b           L_8021C910
    // 0x8021C8B4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
        goto L_8021C910;
    // 0x8021C8B4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8021C8B8: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
L_8021C8BC:
    // 0x8021C8BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021C8C0: addu        $v0, $t8, $t5
    ctx->r2 = ADD32(ctx->r24, ctx->r13);
    // 0x8021C8C4: lbu         $t7, 0x6($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X6);
    // 0x8021C8C8: lbu         $t6, 0x2A($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2A);
    // 0x8021C8CC: subu        $s1, $t7, $t6
    ctx->r17 = SUB32(ctx->r15, ctx->r14);
    // 0x8021C8D0: bltz        $s1, L_8021C8F4
    if (SIGNED(ctx->r17) < 0) {
        // 0x8021C8D4: addiu       $s2, $s1, 0x1
        ctx->r18 = ADD32(ctx->r17, 0X1);
            goto L_8021C8F4;
    }
    // 0x8021C8D4: addiu       $s2, $s1, 0x1
    ctx->r18 = ADD32(ctx->r17, 0X1);
L_8021C8D8:
    // 0x8021C8D8: jal         0x802230E4
    // 0x8021C8DC: nop

    static_3_802230E4(rdram, ctx);
        goto after_8;
    // 0x8021C8DC: nop

    after_8:
    // 0x8021C8E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021C8E4: bne         $s2, $s0, L_8021C8D8
    if (ctx->r18 != ctx->r16) {
        // 0x8021C8E8: addiu       $s4, $s4, -0x1
        ctx->r20 = ADD32(ctx->r20, -0X1);
            goto L_8021C8D8;
    }
    // 0x8021C8E8: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x8021C8EC: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x8021C8F0: lbu         $v1, 0x4($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X4);
L_8021C8F4:
    // 0x8021C8F4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
L_8021C8F8:
    // 0x8021C8F8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8021C8FC: slt         $at, $s6, $v1
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8021C900: addiu       $t1, $t9, 0x24
    ctx->r9 = ADD32(ctx->r25, 0X24);
    // 0x8021C904: bne         $at, $zero, L_8021C630
    if (ctx->r1 != 0) {
        // 0x8021C908: sw          $t1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r9;
            goto L_8021C630;
    }
    // 0x8021C908: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x8021C90C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
L_8021C910:
    // 0x8021C910: blezl       $s4, L_8021C930
    if (SIGNED(ctx->r20) <= 0) {
        // 0x8021C914: lw          $v0, 0x18($fp)
        ctx->r2 = MEM_W(ctx->r30, 0X18);
            goto L_8021C930;
    }
    goto skip_9;
    // 0x8021C914: lw          $v0, 0x18($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X18);
    skip_9:
L_8021C918:
    // 0x8021C918: jal         0x802230E4
    // 0x8021C91C: nop

    static_3_802230E4(rdram, ctx);
        goto after_9;
    // 0x8021C91C: nop

    after_9:
    // 0x8021C920: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8021C924: bne         $s6, $s4, L_8021C918
    if (ctx->r22 != ctx->r20) {
        // 0x8021C928: nop
    
            goto L_8021C918;
    }
    // 0x8021C928: nop

    // 0x8021C92C: lw          $v0, 0x18($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X18);
L_8021C930:
    // 0x8021C930: beql        $v0, $zero, L_8021C944
    if (ctx->r2 == 0) {
        // 0x8021C934: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_8021C944;
    }
    goto skip_10;
    // 0x8021C934: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_10:
    // 0x8021C938: jalr        $v0
    // 0x8021C93C: lw          $a0, 0x20($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X20);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x8021C93C: lw          $a0, 0x20($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X20);
    after_10:
    // 0x8021C940: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8021C944:
    // 0x8021C944: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021C948: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021C94C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021C950: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8021C954: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8021C958: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8021C95C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8021C960: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8021C964: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8021C968: jr          $ra
    // 0x8021C96C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8021C96C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void D_802B93DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B945C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B9460: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B9464: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802B9468: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802B946C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802B9470: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    // 0x802B9474: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x802B9478: sb          $zero, 0x24($a0)
    MEM_B(0X24, ctx->r4) = 0;
    // 0x802B947C: sb          $zero, 0x25($a0)
    MEM_B(0X25, ctx->r4) = 0;
    // 0x802B9480: sb          $zero, 0x18($a0)
    MEM_B(0X18, ctx->r4) = 0;
    // 0x802B9484: sb          $zero, 0x19($a0)
    MEM_B(0X19, ctx->r4) = 0;
    // 0x802B9488: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x802B948C: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x802B9490: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x802B9494: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x802B9498: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x802B949C: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x802B94A0: swc1        $f2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f2.u32l;
    // 0x802B94A4: swc1        $f2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f2.u32l;
    // 0x802B94A8: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
    // 0x802B94AC: jal         0x8022BE80
    // 0x802B94B0: swc1        $f2, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f2.u32l;
    static_3_8022BE80(rdram, ctx);
        goto after_0;
    // 0x802B94B0: swc1        $f2, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f2.u32l;
    after_0:
    // 0x802B94B4: jal         0x8022C314
    // 0x802B94B8: nop

    static_3_8022C314(rdram, ctx);
        goto after_1;
    // 0x802B94B8: nop

    after_1:
    // 0x802B94BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B94C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B94C4: jr          $ra
    // 0x802B94C8: nop

    return;
    // 0x802B94C8: nop

;}
RECOMP_FUNC void D_8020D740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020D740: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x8020D744: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x8020D748: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020D74C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8020D750: lwc1        $f22, 0xDC($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020D754: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x8020D758: lwc1        $f24, 0xE0($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8020D75C: sub.s       $f4, $f12, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f22.fl;
    // 0x8020D760: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x8020D764: mtc1        $a2, $f30
    ctx->f30.u32l = ctx->r6;
    // 0x8020D768: sub.s       $f6, $f12, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f24.fl;
    // 0x8020D76C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8020D770: mul.s       $f0, $f4, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x8020D774: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x8020D778: lwc1        $f26, 0xE4($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8020D77C: mul.s       $f2, $f6, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8020D780: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x8020D784: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8020D788: mul.s       $f8, $f26, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x8020D78C: lwc1        $f20, 0xD8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8020D790: sub.s       $f18, $f12, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f26.fl;
    // 0x8020D794: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8020D798: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8020D79C: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8020D7A0: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x8020D7A4: mul.s       $f28, $f8, $f26
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f28.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x8020D7A8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8020D7AC: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x8020D7B0: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x8020D7B4: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x8020D7B8: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x8020D7BC: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x8020D7C0: sub.s       $f10, $f12, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f28.fl;
    // 0x8020D7C4: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8020D7C8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8020D7CC: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x8020D7D0: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8020D7D4: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x8020D7D8: mov.s       $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    ctx->f30.fl = ctx->f0.fl;
    // 0x8020D7DC: mul.s       $f20, $f18, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x8020D7E0: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x8020D7E4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8020D7E8: blez        $a1, L_8020DAE0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8020D7EC: swc1        $f16, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
            goto L_8020DAE0;
    }
    // 0x8020D7EC: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    // 0x8020D7F0: swc1        $f20, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f20.u32l;
    // 0x8020D7F4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020D7F8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8020D7FC: swc1        $f14, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f14.u32l;
    // 0x8020D800: addiu       $fp, $sp, 0xA4
    ctx->r30 = ADD32(ctx->r29, 0XA4);
    // 0x8020D804: addiu       $s7, $sp, 0xB4
    ctx->r23 = ADD32(ctx->r29, 0XB4);
    // 0x8020D808: addiu       $s6, $sp, 0xB8
    ctx->r22 = ADD32(ctx->r29, 0XB8);
    // 0x8020D80C: addiu       $s5, $sp, 0xBC
    ctx->r21 = ADD32(ctx->r29, 0XBC);
L_8020D810:
    // 0x8020D810: sll         $t6, $s1, 4
    ctx->r14 = S32(ctx->r17 << 4);
    // 0x8020D814: addu        $s0, $t6, $s4
    ctx->r16 = ADD32(ctx->r14, ctx->r20);
    // 0x8020D818: lbu         $t7, 0xC($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XC);
    // 0x8020D81C: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    // 0x8020D820: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D824: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8020D828: bgez        $t7, L_8020D83C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020D82C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020D83C;
    }
    // 0x8020D82C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020D830: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020D834: nop

    // 0x8020D838: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8020D83C:
    // 0x8020D83C: lbu         $t8, 0xD($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD);
    // 0x8020D840: div.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8020D844: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D848: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8020D84C: bgez        $t8, L_8020D860
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8020D850: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020D860;
    }
    // 0x8020D850: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020D854: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020D858: nop

    // 0x8020D85C: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_8020D860:
    // 0x8020D860: lbu         $t9, 0xE($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XE);
    // 0x8020D864: div.s       $f14, $f16, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f20.fl);
    // 0x8020D868: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D86C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8020D870: bgez        $t9, L_8020D884
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8020D874: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020D884;
    }
    // 0x8020D874: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020D878: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020D87C: nop

    // 0x8020D880: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_8020D884:
    // 0x8020D884: div.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8020D888: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x8020D88C: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x8020D890: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    // 0x8020D894: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8020D898: jal         0x80209914
    // 0x8020D89C: nop

    static_3_80209914(rdram, ctx);
        goto after_0;
    // 0x8020D89C: nop

    after_0:
    // 0x8020D8A0: lhu         $t0, 0x6($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X6);
    // 0x8020D8A4: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x8020D8A8: addiu       $t1, $sp, 0xA0
    ctx->r9 = ADD32(ctx->r29, 0XA0);
    // 0x8020D8AC: beq         $t0, $zero, L_8020D8E8
    if (ctx->r8 == 0) {
        // 0x8020D8B0: addiu       $t2, $sp, 0x9C
        ctx->r10 = ADD32(ctx->r29, 0X9C);
            goto L_8020D8E8;
    }
    // 0x8020D8B0: addiu       $t2, $sp, 0x9C
    ctx->r10 = ADD32(ctx->r29, 0X9C);
    // 0x8020D8B4: lwc1        $f18, 0xBC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8020D8B8: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8020D8BC: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8020D8C0: mul.s       $f16, $f22, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x8020D8C4: lwc1        $f8, 0xD4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8020D8C8: mul.s       $f6, $f24, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f4.fl);
    // 0x8020D8CC: nop

    // 0x8020D8D0: mul.s       $f18, $f26, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f26.fl, ctx->f10.fl);
    // 0x8020D8D4: add.s       $f12, $f16, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f30.fl;
    // 0x8020D8D8: lwc1        $f16, 0xD8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8020D8DC: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8020D8E0: b           L_8020D918
    // 0x8020D8E4: add.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f16.fl;
        goto L_8020D918;
    // 0x8020D8E4: add.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f16.fl;
L_8020D8E8:
    // 0x8020D8E8: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8020D8EC: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8020D8F0: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8020D8F4: mul.s       $f6, $f22, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f4.fl);
    // 0x8020D8F8: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8020D8FC: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8020D900: mul.s       $f18, $f24, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f24.fl, ctx->f10.fl);
    // 0x8020D904: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8020D908: mul.s       $f6, $f28, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f4.fl);
    // 0x8020D90C: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8020D910: add.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x8020D914: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
L_8020D918:
    // 0x8020D918: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8020D91C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8020D920: jal         0x802096F4
    // 0x8020D924: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    static_3_802096F4(rdram, ctx);
        goto after_1;
    // 0x8020D924: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_1:
    // 0x8020D928: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x8020D92C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020D930: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8020D934: mul.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8020D938: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D93C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020D940: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020D944: nop

    // 0x8020D948: cvt.w.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8020D94C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020D950: nop

    // 0x8020D954: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020D958: beql        $t4, $zero, L_8020D9A8
    if (ctx->r12 == 0) {
        // 0x8020D95C: mfc1        $t4, $f16
        ctx->r12 = (int32_t)ctx->f16.u32l;
            goto L_8020D9A8;
    }
    goto skip_0;
    // 0x8020D95C: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x8020D960: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020D964: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020D968: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8020D96C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020D970: nop

    // 0x8020D974: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8020D978: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020D97C: nop

    // 0x8020D980: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020D984: bne         $t4, $zero, L_8020D99C
    if (ctx->r12 != 0) {
        // 0x8020D988: nop
    
            goto L_8020D99C;
    }
    // 0x8020D988: nop

    // 0x8020D98C: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x8020D990: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D994: b           L_8020D9B4
    // 0x8020D998: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8020D9B4;
    // 0x8020D998: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8020D99C:
    // 0x8020D99C: b           L_8020D9B4
    // 0x8020D9A0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8020D9B4;
    // 0x8020D9A0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8020D9A4: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
L_8020D9A8:
    // 0x8020D9A8: nop

    // 0x8020D9AC: bltz        $t4, L_8020D99C
    if (SIGNED(ctx->r12) < 0) {
        // 0x8020D9B0: nop
    
            goto L_8020D99C;
    }
    // 0x8020D9B0: nop

L_8020D9B4:
    // 0x8020D9B4: sb          $t4, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r12;
    // 0x8020D9B8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020D9BC: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8020D9C0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8020D9C4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D9C8: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8020D9CC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020D9D0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020D9D4: nop

    // 0x8020D9D8: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020D9DC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020D9E0: nop

    // 0x8020D9E4: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8020D9E8: beql        $t6, $zero, L_8020DA38
    if (ctx->r14 == 0) {
        // 0x8020D9EC: mfc1        $t6, $f8
        ctx->r14 = (int32_t)ctx->f8.u32l;
            goto L_8020DA38;
    }
    goto skip_1;
    // 0x8020D9EC: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    skip_1:
    // 0x8020D9F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020D9F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8020D9F8: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020D9FC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020DA00: nop

    // 0x8020DA04: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020DA08: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020DA0C: nop

    // 0x8020DA10: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8020DA14: bne         $t6, $zero, L_8020DA2C
    if (ctx->r14 != 0) {
        // 0x8020DA18: nop
    
            goto L_8020DA2C;
    }
    // 0x8020DA18: nop

    // 0x8020DA1C: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8020DA20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020DA24: b           L_8020DA44
    // 0x8020DA28: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8020DA44;
    // 0x8020DA28: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8020DA2C:
    // 0x8020DA2C: b           L_8020DA44
    // 0x8020DA30: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8020DA44;
    // 0x8020DA30: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8020DA34: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
L_8020DA38:
    // 0x8020DA38: nop

    // 0x8020DA3C: bltz        $t6, L_8020DA2C
    if (SIGNED(ctx->r14) < 0) {
        // 0x8020DA40: nop
    
            goto L_8020DA2C;
    }
    // 0x8020DA40: nop

L_8020DA44:
    // 0x8020DA44: sb          $t6, 0xD($s2)
    MEM_B(0XD, ctx->r18) = ctx->r14;
    // 0x8020DA48: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020DA4C: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8020DA50: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020DA54: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020DA58: mul.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8020DA5C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020DA60: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020DA64: nop

    // 0x8020DA68: cvt.w.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8020DA6C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020DA70: nop

    // 0x8020DA74: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020DA78: beql        $t8, $zero, L_8020DAC8
    if (ctx->r24 == 0) {
        // 0x8020DA7C: mfc1        $t8, $f16
        ctx->r24 = (int32_t)ctx->f16.u32l;
            goto L_8020DAC8;
    }
    goto skip_2;
    // 0x8020DA7C: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    skip_2:
    // 0x8020DA80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020DA84: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020DA88: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8020DA8C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020DA90: nop

    // 0x8020DA94: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8020DA98: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020DA9C: nop

    // 0x8020DAA0: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020DAA4: bne         $t8, $zero, L_8020DABC
    if (ctx->r24 != 0) {
        // 0x8020DAA8: nop
    
            goto L_8020DABC;
    }
    // 0x8020DAA8: nop

    // 0x8020DAAC: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x8020DAB0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020DAB4: b           L_8020DAD4
    // 0x8020DAB8: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8020DAD4;
    // 0x8020DAB8: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8020DABC:
    // 0x8020DABC: b           L_8020DAD4
    // 0x8020DAC0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8020DAD4;
    // 0x8020DAC0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8020DAC4: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
L_8020DAC8:
    // 0x8020DAC8: nop

    // 0x8020DACC: bltz        $t8, L_8020DABC
    if (SIGNED(ctx->r24) < 0) {
        // 0x8020DAD0: nop
    
            goto L_8020DABC;
    }
    // 0x8020DAD0: nop

L_8020DAD4:
    // 0x8020DAD4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020DAD8: bne         $s1, $s3, L_8020D810
    if (ctx->r17 != ctx->r19) {
        // 0x8020DADC: sb          $t8, 0xE($s2)
        MEM_B(0XE, ctx->r18) = ctx->r24;
            goto L_8020D810;
    }
    // 0x8020DADC: sb          $t8, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r24;
L_8020DAE0:
    // 0x8020DAE0: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x8020DAE4: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x8020DAE8: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x8020DAEC: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x8020DAF0: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x8020DAF4: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x8020DAF8: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x8020DAFC: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8020DB00: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8020DB04: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8020DB08: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x8020DB0C: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8020DB10: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x8020DB14: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x8020DB18: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x8020DB1C: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x8020DB20: jr          $ra
    // 0x8020DB24: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x8020DB24: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void D_802A3594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3614: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A3618: jr          $ra
    // 0x802A361C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802A361C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_8027F640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F6B8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8027F6BC: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x8027F6C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8027F6C4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8027F6C8: slti        $at, $t6, 0xF
    ctx->r1 = SIGNED(ctx->r14) < 0XF ? 1 : 0;
    // 0x8027F6CC: beq         $at, $zero, L_8027F6E0
    if (ctx->r1 == 0) {
        // 0x8027F6D0: nop
    
            goto L_8027F6E0;
    }
    // 0x8027F6D0: nop

    // 0x8027F6D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8027F6D8: jr          $ra
    // 0x8027F6DC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x8027F6DC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_8027F6E0:
    // 0x8027F6E0: jr          $ra
    // 0x8027F6E4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x8027F6E4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void D_802CEE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CEEC0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802CEEC4: jr          $ra
    // 0x802CEEC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802CEEC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_802E8B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8C08: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802E8C0C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802E8C10: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802E8C14: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802E8C18: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802E8C1C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802E8C20: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x802E8C24: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802E8C28: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802E8C2C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802E8C30: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802E8C34: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802E8C38: bne         $t6, $at, L_802E8C48
    if (ctx->r14 != ctx->r1) {
        // 0x802E8C3C: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_802E8C48;
    }
    // 0x802E8C3C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x802E8C40: b           L_802E8C4C
    // 0x802E8C44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802E8C4C;
    // 0x802E8C44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802E8C48:
    // 0x802E8C48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802E8C4C:
    // 0x802E8C4C: beq         $v0, $zero, L_802E8C88
    if (ctx->r2 == 0) {
        // 0x802E8C50: lui         $s2, 0x0
        ctx->r18 = S32(0X0 << 16);
            goto L_802E8C88;
    }
    // 0x802E8C50: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x802E8C54: lw          $t7, 0x14($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X14);
    // 0x802E8C58: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802E8C5C: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x802E8C60: bne         $t7, $at, L_802E8C7C
    if (ctx->r15 != ctx->r1) {
        // 0x802E8C64: addiu       $s2, $s2, 0x0
        ctx->r18 = ADD32(ctx->r18, 0X0);
            goto L_802E8C7C;
    }
    // 0x802E8C64: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x802E8C68: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x802E8C6C: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x802E8C70: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x802E8C74: b           L_802E8D48
    // 0x802E8C78: addiu       $s4, $a2, 0x4E3C
    ctx->r20 = ADD32(ctx->r6, 0X4E3C);
        goto L_802E8D48;
    // 0x802E8C78: addiu       $s4, $a2, 0x4E3C
    ctx->r20 = ADD32(ctx->r6, 0X4E3C);
L_802E8C7C:
    // 0x802E8C7C: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x802E8C80: b           L_802E8D48
    // 0x802E8C84: addiu       $s4, $a2, 0x365C
    ctx->r20 = ADD32(ctx->r6, 0X365C);
        goto L_802E8D48;
    // 0x802E8C84: addiu       $s4, $a2, 0x365C
    ctx->r20 = ADD32(ctx->r6, 0X365C);
L_802E8C88:
    // 0x802E8C88: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x802E8C8C: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x802E8C90: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E8C94: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E8C98: lbu         $t8, 0x6FB8($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X6FB8);
    // 0x802E8C9C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802E8CA0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802E8CA4: blez        $t8, L_802E8D48
    if (SIGNED(ctx->r24) <= 0) {
        // 0x802E8CA8: addu        $t9, $a2, $s0
        ctx->r25 = ADD32(ctx->r6, ctx->r16);
            goto L_802E8D48;
    }
    // 0x802E8CA8: addu        $t9, $a2, $s0
    ctx->r25 = ADD32(ctx->r6, ctx->r16);
L_802E8CAC:
    // 0x802E8CAC: lw          $a0, 0x6F94($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X6F94);
    // 0x802E8CB0: beql        $a0, $zero, L_802E8D30
    if (ctx->r4 == 0) {
        // 0x802E8CB4: lw          $a2, 0x0($s2)
        ctx->r6 = MEM_W(ctx->r18, 0X0);
            goto L_802E8D30;
    }
    goto skip_0;
    // 0x802E8CB4: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    skip_0:
    // 0x802E8CB8: jal         0x80317E10
    // 0x802E8CBC: nop

    static_3_80317E10(rdram, ctx);
        goto after_0;
    // 0x802E8CBC: nop

    after_0:
    // 0x802E8CC0: beql        $v0, $zero, L_802E8D30
    if (ctx->r2 == 0) {
        // 0x802E8CC4: lw          $a2, 0x0($s2)
        ctx->r6 = MEM_W(ctx->r18, 0X0);
            goto L_802E8D30;
    }
    goto skip_1;
    // 0x802E8CC4: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    skip_1:
    // 0x802E8CC8: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x802E8CCC: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x802E8CD0: jal         0x803183C0
    // 0x802E8CD4: lw          $a0, 0x6F94($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X6F94);
    static_3_803183C0(rdram, ctx);
        goto after_1;
    // 0x802E8CD4: lw          $a0, 0x6F94($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X6F94);
    after_1:
    // 0x802E8CD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802E8CDC: nop

    // 0x802E8CE0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802E8CE4: nop

    // 0x802E8CE8: bc1fl       L_802E8D30
    if (!c1cs) {
        // 0x802E8CEC: lw          $a2, 0x0($s2)
        ctx->r6 = MEM_W(ctx->r18, 0X0);
            goto L_802E8D30;
    }
    goto skip_2;
    // 0x802E8CEC: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    skip_2:
    // 0x802E8CF0: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x802E8CF4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802E8CF8: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x802E8CFC: jal         0x80318510
    // 0x802E8D00: lw          $a1, 0x6F94($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X6F94);
    static_3_80318510(rdram, ctx);
        goto after_2;
    // 0x802E8D00: lw          $a1, 0x6F94($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X6F94);
    after_2:
    // 0x802E8D04: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x802E8D08: nop

    // 0x802E8D0C: bc1fl       L_802E8D30
    if (!c1cs) {
        // 0x802E8D10: lw          $a2, 0x0($s2)
        ctx->r6 = MEM_W(ctx->r18, 0X0);
            goto L_802E8D30;
    }
    goto skip_3;
    // 0x802E8D10: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    skip_3:
    // 0x802E8D14: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x802E8D18: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802E8D1C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802E8D20: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x802E8D24: lw          $s4, 0x6F94($t5)
    ctx->r20 = MEM_W(ctx->r13, 0X6F94);
    // 0x802E8D28: sb          $t6, 0xEC($s3)
    MEM_B(0XEC, ctx->r19) = ctx->r14;
    // 0x802E8D2C: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
L_802E8D30:
    // 0x802E8D30: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802E8D34: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802E8D38: lbu         $t7, 0x6FB8($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X6FB8);
    // 0x802E8D3C: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x802E8D40: bnel        $at, $zero, L_802E8CAC
    if (ctx->r1 != 0) {
        // 0x802E8D44: addu        $t9, $a2, $s0
        ctx->r25 = ADD32(ctx->r6, ctx->r16);
            goto L_802E8CAC;
    }
    goto skip_4;
    // 0x802E8D44: addu        $t9, $a2, $s0
    ctx->r25 = ADD32(ctx->r6, ctx->r16);
    skip_4:
L_802E8D48:
    // 0x802E8D48: bne         $s4, $zero, L_802E8D70
    if (ctx->r20 != 0) {
        // 0x802E8D4C: nop
    
            goto L_802E8D70;
    }
    // 0x802E8D4C: nop

    // 0x802E8D50: jal         0x802AEE80
    // 0x802E8D54: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802AEE80(rdram, ctx);
        goto after_3;
    // 0x802E8D54: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
    // 0x802E8D58: beq         $v0, $zero, L_802E8D70
    if (ctx->r2 == 0) {
        // 0x802E8D5C: nop
    
            goto L_802E8D70;
    }
    // 0x802E8D5C: nop

    // 0x802E8D60: jal         0x802AEE80
    // 0x802E8D64: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    static_3_802AEE80(rdram, ctx);
        goto after_4;
    // 0x802E8D64: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_4:
    // 0x802E8D68: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x802E8D6C: sb          $zero, 0xEC($s3)
    MEM_B(0XEC, ctx->r19) = 0;
L_802E8D70:
    // 0x802E8D70: bne         $s4, $zero, L_802E8D98
    if (ctx->r20 != 0) {
        // 0x802E8D74: nop
    
            goto L_802E8D98;
    }
    // 0x802E8D74: nop

    // 0x802E8D78: jal         0x802AED58
    // 0x802E8D7C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    static_3_802AED58(rdram, ctx);
        goto after_5;
    // 0x802E8D7C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_5:
    // 0x802E8D80: beq         $v0, $zero, L_802E8D98
    if (ctx->r2 == 0) {
        // 0x802E8D84: nop
    
            goto L_802E8D98;
    }
    // 0x802E8D84: nop

    // 0x802E8D88: jal         0x802AED58
    // 0x802E8D8C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    static_3_802AED58(rdram, ctx);
        goto after_6;
    // 0x802E8D8C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_6:
    // 0x802E8D90: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x802E8D94: sb          $zero, 0xEC($s3)
    MEM_B(0XEC, ctx->r19) = 0;
L_802E8D98:
    // 0x802E8D98: bne         $s4, $zero, L_802E8E24
    if (ctx->r20 != 0) {
        // 0x802E8D9C: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802E8E24;
    }
    // 0x802E8D9C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E8DA0: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E8DA4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802E8DA8: addiu       $s1, $zero, 0xA0
    ctx->r17 = ADD32(0, 0XA0);
    // 0x802E8DAC: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
L_802E8DB0:
    // 0x802E8DB0: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x802E8DB4: lw          $a1, 0x7050($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X7050);
    // 0x802E8DB8: beql        $a1, $zero, L_802E8E1C
    if (ctx->r5 == 0) {
        // 0x802E8DBC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802E8E1C;
    }
    goto skip_5;
    // 0x802E8DBC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_5:
    // 0x802E8DC0: jal         0x803183C0
    // 0x802E8DC4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_803183C0(rdram, ctx);
        goto after_7;
    // 0x802E8DC4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_7:
    // 0x802E8DC8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802E8DCC: nop

    // 0x802E8DD0: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802E8DD4: nop

    // 0x802E8DD8: bc1fl       L_802E8E1C
    if (!c1cs) {
        // 0x802E8DDC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802E8E1C;
    }
    goto skip_6;
    // 0x802E8DDC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_6:
    // 0x802E8DE0: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x802E8DE4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802E8DE8: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x802E8DEC: jal         0x80318510
    // 0x802E8DF0: lw          $a1, 0x7050($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X7050);
    static_3_80318510(rdram, ctx);
        goto after_8;
    // 0x802E8DF0: lw          $a1, 0x7050($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X7050);
    after_8:
    // 0x802E8DF4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x802E8DF8: nop

    // 0x802E8DFC: bc1fl       L_802E8E1C
    if (!c1cs) {
        // 0x802E8E00: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802E8E1C;
    }
    goto skip_7;
    // 0x802E8E00: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_7:
    // 0x802E8E04: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x802E8E08: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802E8E0C: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x802E8E10: lw          $s4, 0x7050($t3)
    ctx->r20 = MEM_W(ctx->r11, 0X7050);
    // 0x802E8E14: sb          $zero, 0xEC($s3)
    MEM_B(0XEC, ctx->r19) = 0;
    // 0x802E8E18: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_802E8E1C:
    // 0x802E8E1C: bnel        $s0, $s1, L_802E8DB0
    if (ctx->r16 != ctx->r17) {
        // 0x802E8E20: lw          $t8, 0x0($s2)
        ctx->r24 = MEM_W(ctx->r18, 0X0);
            goto L_802E8DB0;
    }
    goto skip_8;
    // 0x802E8E20: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    skip_8:
L_802E8E24:
    // 0x802E8E24: bne         $s4, $zero, L_802E8EC0
    if (ctx->r20 != 0) {
        // 0x802E8E28: nop
    
            goto L_802E8EC0;
    }
    // 0x802E8E28: nop

    // 0x802E8E2C: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x802E8E30: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E8E34: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E8E38: lbu         $t4, 0x6FB8($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X6FB8);
    // 0x802E8E3C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802E8E40: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802E8E44: blez        $t4, L_802E8EC0
    if (SIGNED(ctx->r12) <= 0) {
        // 0x802E8E48: addu        $t5, $a2, $s0
        ctx->r13 = ADD32(ctx->r6, ctx->r16);
            goto L_802E8EC0;
    }
    // 0x802E8E48: addu        $t5, $a2, $s0
    ctx->r13 = ADD32(ctx->r6, ctx->r16);
L_802E8E4C:
    // 0x802E8E4C: lw          $a0, 0x6F94($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X6F94);
    // 0x802E8E50: beql        $a0, $zero, L_802E8EA8
    if (ctx->r4 == 0) {
        // 0x802E8E54: lw          $a2, 0x0($s2)
        ctx->r6 = MEM_W(ctx->r18, 0X0);
            goto L_802E8EA8;
    }
    goto skip_9;
    // 0x802E8E54: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    skip_9:
    // 0x802E8E58: jal         0x80317E10
    // 0x802E8E5C: nop

    static_3_80317E10(rdram, ctx);
        goto after_9;
    // 0x802E8E5C: nop

    after_9:
    // 0x802E8E60: beql        $v0, $zero, L_802E8EA8
    if (ctx->r2 == 0) {
        // 0x802E8E64: lw          $a2, 0x0($s2)
        ctx->r6 = MEM_W(ctx->r18, 0X0);
            goto L_802E8EA8;
    }
    goto skip_10;
    // 0x802E8E64: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    skip_10:
    // 0x802E8E68: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x802E8E6C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802E8E70: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x802E8E74: jal         0x80318510
    // 0x802E8E78: lw          $a1, 0x6F94($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X6F94);
    static_3_80318510(rdram, ctx);
        goto after_10;
    // 0x802E8E78: lw          $a1, 0x6F94($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X6F94);
    after_10:
    // 0x802E8E7C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x802E8E80: nop

    // 0x802E8E84: bc1fl       L_802E8EA8
    if (!c1cs) {
        // 0x802E8E88: lw          $a2, 0x0($s2)
        ctx->r6 = MEM_W(ctx->r18, 0X0);
            goto L_802E8EA8;
    }
    goto skip_11;
    // 0x802E8E88: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    skip_11:
    // 0x802E8E8C: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x802E8E90: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802E8E94: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802E8E98: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x802E8E9C: lw          $s4, 0x6F94($t9)
    ctx->r20 = MEM_W(ctx->r25, 0X6F94);
    // 0x802E8EA0: sb          $t0, 0xEC($s3)
    MEM_B(0XEC, ctx->r19) = ctx->r8;
    // 0x802E8EA4: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
L_802E8EA8:
    // 0x802E8EA8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802E8EAC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802E8EB0: lbu         $t1, 0x6FB8($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0X6FB8);
    // 0x802E8EB4: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x802E8EB8: bnel        $at, $zero, L_802E8E4C
    if (ctx->r1 != 0) {
        // 0x802E8EBC: addu        $t5, $a2, $s0
        ctx->r13 = ADD32(ctx->r6, ctx->r16);
            goto L_802E8E4C;
    }
    goto skip_12;
    // 0x802E8EBC: addu        $t5, $a2, $s0
    ctx->r13 = ADD32(ctx->r6, ctx->r16);
    skip_12:
L_802E8EC0:
    // 0x802E8EC0: bne         $s4, $zero, L_802E8F28
    if (ctx->r20 != 0) {
        // 0x802E8EC4: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802E8F28;
    }
    // 0x802E8EC4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E8EC8: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E8ECC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802E8ED0: addiu       $s1, $zero, 0xA0
    ctx->r17 = ADD32(0, 0XA0);
    // 0x802E8ED4: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
L_802E8ED8:
    // 0x802E8ED8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802E8EDC: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x802E8EE0: lw          $a1, 0x7050($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X7050);
    // 0x802E8EE4: beql        $a1, $zero, L_802E8F20
    if (ctx->r5 == 0) {
        // 0x802E8EE8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802E8F20;
    }
    goto skip_13;
    // 0x802E8EE8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_13:
    // 0x802E8EEC: jal         0x80318510
    // 0x802E8EF0: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    static_3_80318510(rdram, ctx);
        goto after_11;
    // 0x802E8EF0: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    after_11:
    // 0x802E8EF4: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802E8EF8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802E8EFC: nop

    // 0x802E8F00: bc1fl       L_802E8F20
    if (!c1cs) {
        // 0x802E8F04: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802E8F20;
    }
    goto skip_14;
    // 0x802E8F04: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_14:
    // 0x802E8F08: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x802E8F0C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802E8F10: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x802E8F14: lw          $s4, 0x7050($t5)
    ctx->r20 = MEM_W(ctx->r13, 0X7050);
    // 0x802E8F18: sb          $zero, 0xEC($s3)
    MEM_B(0XEC, ctx->r19) = 0;
    // 0x802E8F1C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_802E8F20:
    // 0x802E8F20: bnel        $s0, $s1, L_802E8ED8
    if (ctx->r16 != ctx->r17) {
        // 0x802E8F24: lw          $t2, 0x0($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X0);
            goto L_802E8ED8;
    }
    goto skip_15;
    // 0x802E8F24: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    skip_15:
L_802E8F28:
    // 0x802E8F28: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802E8F2C: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x802E8F30: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802E8F34: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802E8F38: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802E8F3C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802E8F40: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802E8F44: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802E8F48: jr          $ra
    // 0x802E8F4C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x802E8F4C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void D_802C8F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C8F88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802C8F8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C8F90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802C8F94: beq         $a0, $zero, L_802C8FC8
    if (ctx->r4 == 0) {
        // 0x802C8F98: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_802C8FC8;
    }
    // 0x802C8F98: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802C8F9C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x802C8FA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802C8FA4: jal         0x80291698
    // 0x802C8FA8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80291698(rdram, ctx);
        goto after_0;
    // 0x802C8FA8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802C8FAC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802C8FB0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802C8FB4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802C8FB8: beql        $t7, $zero, L_802C8FCC
    if (ctx->r15 == 0) {
        // 0x802C8FBC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802C8FCC;
    }
    goto skip_0;
    // 0x802C8FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802C8FC0: jal         0x802C681C
    // 0x802C8FC4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802C8FC4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
L_802C8FC8:
    // 0x802C8FC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802C8FCC:
    // 0x802C8FCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802C8FD0: jr          $ra
    // 0x802C8FD4: nop

    return;
    // 0x802C8FD4: nop

;}
RECOMP_FUNC void D_802028DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802028DC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802028E0: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x802028E4: lbu         $t6, 0x63($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X63);
    // 0x802028E8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802028EC: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x802028F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802028F4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802028F8: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x802028FC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80202900: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80202904: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x80202908: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x8020290C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80202910: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x80202914: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80202918: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x8020291C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80202920: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80202924: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80202928: slti        $at, $t9, 0x11
    ctx->r1 = SIGNED(ctx->r25) < 0X11 ? 1 : 0;
    // 0x8020292C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80202930: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80202934: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80202938: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8020293C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80202940: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80202944: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80202948: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x8020294C: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x80202950: bne         $at, $zero, L_80202970
    if (ctx->r1 != 0) {
        // 0x80202954: addu        $s0, $t7, $t8
        ctx->r16 = ADD32(ctx->r15, ctx->r24);
            goto L_80202970;
    }
    // 0x80202954: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x80202958: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020295C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80202960: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80202964: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202968: jal         0x80231C9C
    // 0x8020296C: addiu       $a2, $zero, 0x353
    ctx->r6 = ADD32(0, 0X353);
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x8020296C: addiu       $a2, $zero, 0x353
    ctx->r6 = ADD32(0, 0X353);
    after_0:
L_80202970:
    // 0x80202970: lbu         $fp, 0x63($sp)
    ctx->r30 = MEM_BU(ctx->r29, 0X63);
    // 0x80202974: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202978: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8020297C: jal         0x802011D0
    // 0x80202980: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_1;
    // 0x80202980: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_1:
    // 0x80202984: lw          $t0, 0x98($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X98);
    // 0x80202988: andi        $t1, $t0, 0x10
    ctx->r9 = ctx->r8 & 0X10;
    // 0x8020298C: beql        $t1, $zero, L_80202A6C
    if (ctx->r9 == 0) {
        // 0x80202990: lw          $t4, 0x0($s4)
        ctx->r12 = MEM_W(ctx->r20, 0X0);
            goto L_80202A6C;
    }
    goto skip_0;
    // 0x80202990: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    skip_0:
    // 0x80202994: lw          $t2, 0xA0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XA0);
    // 0x80202998: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8020299C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802029A0: bne         $t2, $at, L_80202A68
    if (ctx->r10 != ctx->r1) {
        // 0x802029A4: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_80202A68;
    }
    // 0x802029A4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802029A8: jal         0x802011D0
    // 0x802029AC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_2;
    // 0x802029AC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_2:
    // 0x802029B0: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x802029B4: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x802029B8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802029BC: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x802029C0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x802029C4: lbu         $t6, 0xAD($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XAD);
    // 0x802029C8: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802029CC: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x802029D0: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x802029D4: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x802029D8: lh          $a1, 0x0($t9)
    ctx->r5 = MEM_H(ctx->r25, 0X0);
    // 0x802029DC: jal         0x80234E90
    // 0x802029E0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    static_3_80234E90(rdram, ctx);
        goto after_3;
    // 0x802029E0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_3:
    // 0x802029E4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x802029E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802029EC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802029F0: lw          $t0, 0x3C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X3C);
    // 0x802029F4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802029F8: addiu       $a2, $zero, 0x361
    ctx->r6 = ADD32(0, 0X361);
    // 0x802029FC: bne         $t0, $at, L_80202A18
    if (ctx->r8 != ctx->r1) {
        // 0x80202A00: nop
    
            goto L_80202A18;
    }
    // 0x80202A00: nop

    // 0x80202A04: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202A08: jal         0x80231C9C
    // 0x80202A0C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231C9C(rdram, ctx);
        goto after_4;
    // 0x80202A0C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_4:
    // 0x80202A10: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202A14: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
L_80202A18:
    // 0x80202A18: jal         0x80234EB0
    // 0x80202A1C: nop

    static_3_80234EB0(rdram, ctx);
        goto after_5;
    // 0x80202A1C: nop

    after_5:
    // 0x80202A20: bnel        $v0, $zero, L_80202A6C
    if (ctx->r2 != 0) {
        // 0x80202A24: lw          $t4, 0x0($s4)
        ctx->r12 = MEM_W(ctx->r20, 0X0);
            goto L_80202A6C;
    }
    goto skip_1;
    // 0x80202A24: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    skip_1:
    // 0x80202A28: jal         0x80203654
    // 0x80202A2C: lbu         $a0, 0xAD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAD);
    static_3_80203654(rdram, ctx);
        goto after_6;
    // 0x80202A2C: lbu         $a0, 0xAD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAD);
    after_6:
    // 0x80202A30: lw          $t2, 0x98($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X98);
    // 0x80202A34: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x80202A38: sb          $t1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r9;
    // 0x80202A3C: andi        $t3, $t2, 0x20
    ctx->r11 = ctx->r10 & 0X20;
    // 0x80202A40: beq         $t3, $zero, L_80202DF8
    if (ctx->r11 == 0) {
        // 0x80202A44: sw          $zero, 0xA0($s0)
        MEM_W(0XA0, ctx->r16) = 0;
            goto L_80202DF8;
    }
    // 0x80202A44: sw          $zero, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = 0;
    // 0x80202A48: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202A4C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202A50: jal         0x802011D0
    // 0x80202A54: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_7;
    // 0x80202A54: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_7:
    // 0x80202A58: jal         0x802012BC
    // 0x80202A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802012BC(rdram, ctx);
        goto after_8;
    // 0x80202A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80202A60: b           L_80202DFC
    // 0x80202A64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80202DFC;
    // 0x80202A64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80202A68:
    // 0x80202A68: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
L_80202A6C:
    // 0x80202A6C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x80202A70: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202A74: bnel        $t4, $zero, L_80202B0C
    if (ctx->r12 != 0) {
        // 0x80202A78: lw          $t7, 0xA4($s0)
        ctx->r15 = MEM_W(ctx->r16, 0XA4);
            goto L_80202B0C;
    }
    goto skip_2;
    // 0x80202A78: lw          $t7, 0xA4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XA4);
    skip_2:
    // 0x80202A7C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202A80: jal         0x802011D0
    // 0x80202A84: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_802011D0(rdram, ctx);
        goto after_9;
    // 0x80202A84: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_9:
    // 0x80202A88: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x80202A8C: lbu         $t5, 0x63($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X63);
    // 0x80202A90: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80202A94: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80202A98: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x80202A9C: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x80202AA0: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80202AA4: sw          $t8, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r24;
    // 0x80202AA8: sb          $t5, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r13;
    // 0x80202AAC: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80202AB0: lbu         $t1, 0xAD($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XAD);
    // 0x80202AB4: addiu       $s6, $zero, 0x11
    ctx->r22 = ADD32(0, 0X11);
    // 0x80202AB8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202ABC: beq         $s6, $t1, L_80202AF0
    if (ctx->r22 == ctx->r9) {
        // 0x80202AC0: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_80202AF0;
    }
    // 0x80202AC0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202AC4: jal         0x802011D0
    // 0x80202AC8: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_10;
    // 0x80202AC8: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_10:
    // 0x80202ACC: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80202AD0: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80202AD4: lbu         $t2, 0x63($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X63);
    // 0x80202AD8: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x80202ADC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80202AE0: lbu         $t6, 0xAD($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XAD);
    // 0x80202AE4: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x80202AE8: addu        $t8, $s7, $t6
    ctx->r24 = ADD32(ctx->r23, ctx->r14);
    // 0x80202AEC: sb          $t2, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r10;
L_80202AF0:
    // 0x80202AF0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202AF4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202AF8: jal         0x802011D0
    // 0x80202AFC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_11;
    // 0x80202AFC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_11:
    // 0x80202B00: b           L_80202DFC
    // 0x80202B04: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80202DFC;
    // 0x80202B04: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80202B08: lw          $t7, 0xA4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XA4);
L_80202B0C:
    // 0x80202B0C: lw          $t9, 0x88($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X88);
    // 0x80202B10: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202B14: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x80202B18: addu        $a1, $t7, $t9
    ctx->r5 = ADD32(ctx->r15, ctx->r25);
    // 0x80202B1C: jal         0x802011D0
    // 0x80202B20: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    static_3_802011D0(rdram, ctx);
        goto after_12;
    // 0x80202B20: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    after_12:
    // 0x80202B24: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x80202B28: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80202B2C: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80202B30: blez        $a2, L_80202CD4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80202B34: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80202CD4;
    }
    // 0x80202B34: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80202B38: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x80202B3C: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x80202B40: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x80202B44: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x80202B48: addu        $s2, $zero, $t0
    ctx->r18 = ADD32(0, ctx->r8);
    // 0x80202B4C: addiu       $s6, $zero, 0x11
    ctx->r22 = ADD32(0, 0X11);
L_80202B50:
    // 0x80202B50: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202B54: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202B58: jal         0x802011D0
    // 0x80202B5C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_13;
    // 0x80202B5C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x80202B60: lbu         $t3, 0x0($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X0);
    // 0x80202B64: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x80202B68: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202B6C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80202B70: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80202B74: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80202B78: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80202B7C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80202B80: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80202B84: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80202B88: addu        $v0, $t1, $t4
    ctx->r2 = ADD32(ctx->r9, ctx->r12);
    // 0x80202B8C: lw          $t5, 0x88($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X88);
    // 0x80202B90: lw          $t6, 0xA4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XA4);
    // 0x80202B94: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202B98: addu        $s1, $t5, $t6
    ctx->r17 = ADD32(ctx->r13, ctx->r14);
    // 0x80202B9C: jal         0x802011D0
    // 0x80202BA0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_14;
    // 0x80202BA0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_14:
    // 0x80202BA4: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80202BA8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202BAC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202BB0: slt         $at, $t2, $s1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80202BB4: bne         $at, $zero, L_80202CB4
    if (ctx->r1 != 0) {
        // 0x80202BB8: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80202CB4;
    }
    // 0x80202BB8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80202BBC: jal         0x802011D0
    // 0x80202BC0: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    static_3_802011D0(rdram, ctx);
        goto after_15;
    // 0x80202BC0: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    after_15:
    // 0x80202BC4: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x80202BC8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80202BCC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202BD0: bne         $a2, $at, L_80202C50
    if (ctx->r6 != ctx->r1) {
        // 0x80202BD4: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_80202C50;
    }
    // 0x80202BD4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202BD8: addu        $t7, $s3, $a2
    ctx->r15 = ADD32(ctx->r19, ctx->r6);
    // 0x80202BDC: jal         0x802011D0
    // 0x80202BE0: lbu         $a1, -0x1($t7)
    ctx->r5 = MEM_BU(ctx->r15, -0X1);
    static_3_802011D0(rdram, ctx);
        goto after_16;
    // 0x80202BE0: lbu         $a1, -0x1($t7)
    ctx->r5 = MEM_BU(ctx->r15, -0X1);
    after_16:
    // 0x80202BE4: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x80202BE8: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80202BEC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80202BF0: addu        $t0, $s3, $t9
    ctx->r8 = ADD32(ctx->r19, ctx->r25);
    // 0x80202BF4: lbu         $a0, -0x1($t0)
    ctx->r4 = MEM_BU(ctx->r8, -0X1);
    // 0x80202BF8: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x80202BFC: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x80202C00: subu        $t1, $t1, $a0
    ctx->r9 = SUB32(ctx->r9, ctx->r4);
    // 0x80202C04: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80202C08: subu        $t1, $t1, $a0
    ctx->r9 = SUB32(ctx->r9, ctx->r4);
    // 0x80202C0C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80202C10: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x80202C14: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80202C18: addu        $t4, $t3, $t1
    ctx->r12 = ADD32(ctx->r11, ctx->r9);
    // 0x80202C1C: lbu         $v0, 0xAD($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0XAD);
    // 0x80202C20: beq         $s6, $v0, L_80202C44
    if (ctx->r22 == ctx->r2) {
        // 0x80202C24: addu        $t6, $s7, $v0
        ctx->r14 = ADD32(ctx->r23, ctx->r2);
            goto L_80202C44;
    }
    // 0x80202C24: addu        $t6, $s7, $v0
    ctx->r14 = ADD32(ctx->r23, ctx->r2);
    // 0x80202C28: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202C2C: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x80202C30: jal         0x802011D0
    // 0x80202C34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_802011D0(rdram, ctx);
        goto after_17;
    // 0x80202C34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_17:
    // 0x80202C38: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x80202C3C: addu        $t8, $s3, $t2
    ctx->r24 = ADD32(ctx->r19, ctx->r10);
    // 0x80202C40: lbu         $a0, -0x1($t8)
    ctx->r4 = MEM_BU(ctx->r24, -0X1);
L_80202C44:
    // 0x80202C44: jal         0x80202E78
    // 0x80202C48: nop

    static_3_80202E78(rdram, ctx);
        goto after_18;
    // 0x80202C48: nop

    after_18:
    // 0x80202C4C: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
L_80202C50:
    // 0x80202C50: slt         $at, $s0, $a2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80202C54: beq         $at, $zero, L_80202C7C
    if (ctx->r1 == 0) {
        // 0x80202C58: addu        $v0, $s3, $a2
        ctx->r2 = ADD32(ctx->r19, ctx->r6);
            goto L_80202C7C;
    }
    // 0x80202C58: addu        $v0, $s3, $a2
    ctx->r2 = ADD32(ctx->r19, ctx->r6);
    // 0x80202C5C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80202C60: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80202C64: addu        $v1, $s0, $t7
    ctx->r3 = ADD32(ctx->r16, ctx->r15);
L_80202C68:
    // 0x80202C68: lbu         $t9, -0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, -0X1);
    // 0x80202C6C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80202C70: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80202C74: bne         $at, $zero, L_80202C68
    if (ctx->r1 != 0) {
        // 0x80202C78: sb          $t9, 0x1($v0)
        MEM_B(0X1, ctx->r2) = ctx->r25;
            goto L_80202C68;
    }
    // 0x80202C78: sb          $t9, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r25;
L_80202C7C:
    // 0x80202C7C: lbu         $t0, 0x63($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X63);
    // 0x80202C80: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80202C84: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80202C88: sb          $t0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r8;
    // 0x80202C8C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202C90: addu        $t4, $t3, $t1
    ctx->r12 = ADD32(ctx->r11, ctx->r9);
    // 0x80202C94: lbu         $v0, 0xAD($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0XAD);
    // 0x80202C98: lbu         $t5, 0x63($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X63);
    // 0x80202C9C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202CA0: beq         $s6, $v0, L_80202CB4
    if (ctx->r22 == ctx->r2) {
        // 0x80202CA4: addu        $t6, $s7, $v0
        ctx->r14 = ADD32(ctx->r23, ctx->r2);
            goto L_80202CB4;
    }
    // 0x80202CA4: addu        $t6, $s7, $v0
    ctx->r14 = ADD32(ctx->r23, ctx->r2);
    // 0x80202CA8: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x80202CAC: jal         0x802011D0
    // 0x80202CB0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_19;
    // 0x80202CB0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_19:
L_80202CB4:
    // 0x80202CB4: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x80202CB8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80202CBC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80202CC0: slt         $at, $s0, $a2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80202CC4: beq         $at, $zero, L_80202CD4
    if (ctx->r1 == 0) {
        // 0x80202CC8: lw          $t2, 0x50($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X50);
            goto L_80202CD4;
    }
    // 0x80202CC8: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80202CCC: beq         $t2, $zero, L_80202B50
    if (ctx->r10 == 0) {
        // 0x80202CD0: nop
    
            goto L_80202B50;
    }
    // 0x80202CD0: nop

L_80202CD4:
    // 0x80202CD4: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80202CD8: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x80202CDC: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x80202CE0: bne         $t8, $zero, L_80202D30
    if (ctx->r24 != 0) {
        // 0x80202CE4: addiu       $s6, $zero, 0x11
        ctx->r22 = ADD32(0, 0X11);
            goto L_80202D30;
    }
    // 0x80202CE4: addiu       $s6, $zero, 0x11
    ctx->r22 = ADD32(0, 0X11);
    // 0x80202CE8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80202CEC: bne         $s0, $at, L_80202D30
    if (ctx->r16 != ctx->r1) {
        // 0x80202CF0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80202D30;
    }
    // 0x80202CF0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202CF4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202CF8: jal         0x802011D0
    // 0x80202CFC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_20;
    // 0x80202CFC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_20:
    // 0x80202D00: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80202D04: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80202D08: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80202D0C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80202D10: lbu         $v0, 0xAD($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XAD);
    // 0x80202D14: beq         $s6, $v0, L_80202D20
    if (ctx->r22 == ctx->r2) {
        // 0x80202D18: addu        $t1, $s7, $v0
        ctx->r9 = ADD32(ctx->r23, ctx->r2);
            goto L_80202D20;
    }
    // 0x80202D18: addu        $t1, $s7, $v0
    ctx->r9 = ADD32(ctx->r23, ctx->r2);
    // 0x80202D1C: sb          $t3, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r11;
L_80202D20:
    // 0x80202D20: jal         0x80202E78
    // 0x80202D24: lbu         $a0, 0x63($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X63);
    static_3_80202E78(rdram, ctx);
        goto after_21;
    // 0x80202D24: lbu         $a0, 0x63($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X63);
    after_21:
    // 0x80202D28: b           L_80202DFC
    // 0x80202D2C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80202DFC;
    // 0x80202D2C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80202D30:
    // 0x80202D30: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80202D34: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202D38: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x80202D3C: bne         $t4, $zero, L_80202DD4
    if (ctx->r12 != 0) {
        // 0x80202D40: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_80202DD4;
    }
    // 0x80202D40: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202D44: bne         $s0, $a2, L_80202DD4
    if (ctx->r16 != ctx->r6) {
        // 0x80202D48: or          $a1, $fp, $zero
        ctx->r5 = ctx->r30 | 0;
            goto L_80202DD4;
    }
    // 0x80202D48: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x80202D4C: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80202D50: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x80202D54: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202D58: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202D5C: jal         0x802011D0
    // 0x80202D60: addu        $s2, $s0, $t5
    ctx->r18 = ADD32(ctx->r16, ctx->r13);
    static_3_802011D0(rdram, ctx);
        goto after_22;
    // 0x80202D60: addu        $s2, $s0, $t5
    ctx->r18 = ADD32(ctx->r16, ctx->r13);
    after_22:
    // 0x80202D64: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x80202D68: lbu         $t6, 0x63($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X63);
    // 0x80202D6C: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80202D70: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80202D74: addiu       $t8, $t2, 0x1
    ctx->r24 = ADD32(ctx->r10, 0X1);
    // 0x80202D78: sw          $t8, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r24;
    // 0x80202D7C: sb          $t6, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r14;
    // 0x80202D80: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80202D84: lbu         $t3, 0xAD($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XAD);
    // 0x80202D88: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202D8C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202D90: beq         $s6, $t3, L_80202DBC
    if (ctx->r22 == ctx->r11) {
        // 0x80202D94: nop
    
            goto L_80202DBC;
    }
    // 0x80202D94: nop

    // 0x80202D98: jal         0x802011D0
    // 0x80202D9C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_23;
    // 0x80202D9C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_23:
    // 0x80202DA0: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80202DA4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80202DA8: lbu         $t1, 0x63($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X63);
    // 0x80202DAC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80202DB0: lbu         $t2, 0xAD($t6)
    ctx->r10 = MEM_BU(ctx->r14, 0XAD);
    // 0x80202DB4: addu        $t8, $s7, $t2
    ctx->r24 = ADD32(ctx->r23, ctx->r10);
    // 0x80202DB8: sb          $t1, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r9;
L_80202DBC:
    // 0x80202DBC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202DC0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80202DC4: jal         0x802011D0
    // 0x80202DC8: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_24;
    // 0x80202DC8: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_24:
    // 0x80202DCC: b           L_80202DFC
    // 0x80202DD0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80202DFC;
    // 0x80202DD0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80202DD4:
    // 0x80202DD4: beq         $at, $zero, L_80202DE4
    if (ctx->r1 == 0) {
        // 0x80202DD8: addiu       $t7, $a2, 0x1
        ctx->r15 = ADD32(ctx->r6, 0X1);
            goto L_80202DE4;
    }
    // 0x80202DD8: addiu       $t7, $a2, 0x1
    ctx->r15 = ADD32(ctx->r6, 0X1);
    // 0x80202DDC: sw          $t7, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r15;
    // 0x80202DE0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
L_80202DE4:
    // 0x80202DE4: jal         0x802011D0
    // 0x80202DE8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_25;
    // 0x80202DE8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_25:
    // 0x80202DEC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202DF0: jal         0x802011D0
    // 0x80202DF4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_802011D0(rdram, ctx);
        goto after_26;
    // 0x80202DF4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_26:
L_80202DF8:
    // 0x80202DF8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80202DFC:
    // 0x80202DFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80202E00: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80202E04: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80202E08: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80202E0C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80202E10: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80202E14: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80202E18: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80202E1C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80202E20: jr          $ra
    // 0x80202E24: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80202E24: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void D_80293AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80293B70: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80293B74: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80293B78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80293B7C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80293B80: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80293B84: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x80293B88: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80293B8C: addiu       $t6, $sp, 0x90
    ctx->r14 = ADD32(ctx->r29, 0X90);
    // 0x80293B90: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80293B94: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80293B98: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80293B9C: lwc1        $f4, 0x154($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X154);
    // 0x80293BA0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80293BA4: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x80293BA8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80293BAC: lwc1        $f6, 0x15C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X15C);
    // 0x80293BB0: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    // 0x80293BB4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80293BB8: lwc1        $f8, 0x160($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X160);
    // 0x80293BBC: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80293BC0: lwc1        $f10, 0x164($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X164);
    // 0x80293BC4: jal         0x802AD568
    // 0x80293BC8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    static_3_802AD568(rdram, ctx);
        goto after_0;
    // 0x80293BC8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80293BCC: blez        $v0, L_80293DE8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80293BD0: addiu       $s1, $sp, 0x4C
        ctx->r17 = ADD32(ctx->r29, 0X4C);
            goto L_80293DE8;
    }
    // 0x80293BD0: addiu       $s1, $sp, 0x4C
    ctx->r17 = ADD32(ctx->r29, 0X4C);
    // 0x80293BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80293BD8: jal         0x802C51D0
    // 0x80293BDC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_802C51D0(rdram, ctx);
        goto after_1;
    // 0x80293BDC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x80293BE0: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80293BE4: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80293BE8: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80293BEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80293BF0: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x80293BF4: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x80293BF8: jal         0x8022970C
    // 0x80293BFC: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x80293BFC: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80293C00: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80293C04: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80293C08: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80293C0C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80293C10: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80293C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80293C18: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x80293C1C: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    // 0x80293C20: addiu       $a3, $sp, 0x90
    ctx->r7 = ADD32(ctx->r29, 0X90);
    // 0x80293C24: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x80293C28: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x80293C2C: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    // 0x80293C30: jal         0x802C484C
    // 0x80293C34: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802C484C(rdram, ctx);
        goto after_3;
    // 0x80293C34: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80293C38: jal         0x802C4838
    // 0x80293C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C4838(rdram, ctx);
        goto after_4;
    // 0x80293C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80293C40: lwc1        $f18, 0x98($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80293C44: lwc1        $f4, 0x104($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X104);
    // 0x80293C48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80293C4C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80293C50: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80293C54: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80293C58: jal         0x802D01D4
    // 0x80293C5C: nop

    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x80293C5C: nop

    after_5:
    // 0x80293C60: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80293C64: lwc1        $f10, 0x108($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X108);
    // 0x80293C68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80293C6C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80293C70: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80293C74: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80293C78: jal         0x802D01D4
    // 0x80293C7C: nop

    static_3_802D01D4(rdram, ctx);
        goto after_6;
    // 0x80293C7C: nop

    after_6:
    // 0x80293C80: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80293C84: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80293C88: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x80293C8C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80293C90: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80293C94: jal         0x8022A0D0
    // 0x80293C98: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_7;
    // 0x80293C98: nop

    after_7:
    // 0x80293C9C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80293CA0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80293CA4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80293CA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80293CAC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80293CB0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80293CB4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80293CB8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80293CBC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80293CC0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80293CC4: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x80293CC8: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80293CCC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80293CD0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80293CD4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80293CD8: lui         $a3, 0x4416
    ctx->r7 = S32(0X4416 << 16);
    // 0x80293CDC: jal         0x802AB4C8
    // 0x80293CE0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    static_3_802AB4C8(rdram, ctx);
        goto after_8;
    // 0x80293CE0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_8:
    // 0x80293CE4: beq         $v0, $zero, L_80293DE0
    if (ctx->r2 == 0) {
        // 0x80293CE8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80293DE0;
    }
    // 0x80293CE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80293CEC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80293CF0: jal         0x8029FB34
    // 0x80293CF4: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    static_3_8029FB34(rdram, ctx);
        goto after_9;
    // 0x80293CF4: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_9:
    // 0x80293CF8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80293CFC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80293D00: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80293D04: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80293D08: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80293D0C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80293D10: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80293D14: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80293D18: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80293D1C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80293D20: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x80293D24: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x80293D28: jal         0x8029FA7C
    // 0x80293D2C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_8029FA7C(rdram, ctx);
        goto after_10;
    // 0x80293D2C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x80293D30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80293D34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80293D38: lui         $a1, 0xC080
    ctx->r5 = S32(0XC080 << 16);
    // 0x80293D3C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80293D40: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80293D44: jal         0x8022A0D0
    // 0x80293D48: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_11;
    // 0x80293D48: nop

    after_11:
    // 0x80293D4C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80293D50: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80293D54: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80293D58: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80293D5C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80293D60: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80293D64: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80293D68: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80293D6C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80293D70: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80293D74: lw          $t0, 0x8C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8C);
    // 0x80293D78: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x80293D7C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80293D80: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80293D84: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80293D88: lui         $a3, 0x4416
    ctx->r7 = S32(0X4416 << 16);
    // 0x80293D8C: jal         0x802AB4C8
    // 0x80293D90: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    static_3_802AB4C8(rdram, ctx);
        goto after_12;
    // 0x80293D90: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_12:
    // 0x80293D94: beq         $v0, $zero, L_80293DE0
    if (ctx->r2 == 0) {
        // 0x80293D98: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80293DE0;
    }
    // 0x80293D98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80293D9C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80293DA0: jal         0x8029FB34
    // 0x80293DA4: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    static_3_8029FB34(rdram, ctx);
        goto after_13;
    // 0x80293DA4: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_13:
    // 0x80293DA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80293DAC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80293DB0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80293DB4: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80293DB8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80293DBC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80293DC0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80293DC4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80293DC8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80293DCC: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80293DD0: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x80293DD4: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x80293DD8: jal         0x8029FA7C
    // 0x80293DDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8029FA7C(rdram, ctx);
        goto after_14;
    // 0x80293DDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_14:
L_80293DE0:
    // 0x80293DE0: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80293DE4: swc1        $f6, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f6.u32l;
L_80293DE8:
    // 0x80293DE8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80293DEC: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80293DF0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80293DF4: jr          $ra
    // 0x80293DF8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x80293DF8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void D_802D0E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D0F08: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x802D0F0C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x802D0F10: jr          $ra
    // 0x802D0F14: sw          $t6, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r14;
    return;
    // 0x802D0F14: sw          $t6, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void D_8023FFF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FFF8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023FFFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80240000: lw          $a3, 0x50($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X50);
    // 0x80240004: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x80240008: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8024000C: beq         $a3, $zero, L_8024008C
    if (ctx->r7 == 0) {
        // 0x80240010: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_8024008C;
    }
    // 0x80240010: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80240014: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_80240018:
    // 0x80240018: lh          $t6, 0xC($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XC);
    // 0x8024001C: lw          $v1, 0x8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X8);
    // 0x80240020: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80240024: bne         $a0, $t6, L_80240084
    if (ctx->r4 != ctx->r14) {
        // 0x80240028: addu        $t0, $t0, $v1
        ctx->r8 = ADD32(ctx->r8, ctx->r3);
            goto L_80240084;
    }
    // 0x80240028: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x8024002C: lw          $t7, 0x10($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X10);
    // 0x80240030: bne         $a1, $t7, L_80240084
    if (ctx->r5 != ctx->r15) {
        // 0x80240034: slt         $at, $a2, $t0
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_80240084;
    }
    // 0x80240034: slt         $at, $a2, $t0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80240038: beq         $at, $zero, L_8024007C
    if (ctx->r1 == 0) {
        // 0x8024003C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8024007C;
    }
    // 0x8024003C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80240040: beql        $v0, $zero, L_80240058
    if (ctx->r2 == 0) {
        // 0x80240044: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_80240058;
    }
    goto skip_0;
    // 0x80240044: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    skip_0:
    // 0x80240048: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x8024004C: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x80240050: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    // 0x80240054: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
L_80240058:
    // 0x80240058: sb          $t1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r9;
    // 0x8024005C: jal         0x80237120
    // 0x80240060: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    static_3_80237120(rdram, ctx);
        goto after_0;
    // 0x80240060: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    after_0:
    // 0x80240064: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80240068: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8024006C: jal         0x80237150
    // 0x80240070: addiu       $a1, $t2, 0x48
    ctx->r5 = ADD32(ctx->r10, 0X48);
    static_3_80237150(rdram, ctx);
        goto after_1;
    // 0x80240070: addiu       $a1, $t2, 0x48
    ctx->r5 = ADD32(ctx->r10, 0X48);
    after_1:
    // 0x80240074: b           L_8024008C
    // 0x80240078: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
        goto L_8024008C;
    // 0x80240078: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
L_8024007C:
    // 0x8024007C: b           L_8024008C
    // 0x80240080: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
        goto L_8024008C;
    // 0x80240080: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80240084:
    // 0x80240084: bne         $v0, $zero, L_80240018
    if (ctx->r2 != 0) {
        // 0x80240088: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_80240018;
    }
    // 0x80240088: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_8024008C:
    // 0x8024008C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80240090: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80240094: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80240098: jr          $ra
    // 0x8024009C: nop

    return;
    // 0x8024009C: nop

;}
RECOMP_FUNC void D_802A2F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2FF4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802A2FF8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802A2FFC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802A3000: jal         0x802D2924
    // 0x802A3004: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    static_3_802D2924(rdram, ctx);
        goto after_0;
    // 0x802A3004: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x802A3008: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x802A300C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x802A3010: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802A3014: addiu       $t6, $v0, 0x20
    ctx->r14 = ADD32(ctx->r2, 0X20);
    // 0x802A3018: addiu       $t7, $v0, 0x24
    ctx->r15 = ADD32(ctx->r2, 0X24);
    // 0x802A301C: addiu       $t8, $v0, 0x28
    ctx->r24 = ADD32(ctx->r2, 0X28);
    // 0x802A3020: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802A3024: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802A3028: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802A302C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802A3030: jal         0x802CF1C8
    // 0x802A3034: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    static_3_802CF1C8(rdram, ctx);
        goto after_1;
    // 0x802A3034: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x802A3038: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802A303C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802A3040: jr          $ra
    // 0x802A3044: nop

    return;
    // 0x802A3044: nop

;}
RECOMP_FUNC void D_802EF9B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFA38: jr          $ra
    // 0x802EFA3C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802EFA3C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_802A4880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A4900: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A4904: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A4908: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802A490C: lw          $t6, 0xDC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XDC);
    // 0x802A4910: addiu       $v1, $a1, 0x1
    ctx->r3 = ADD32(ctx->r5, 0X1);
    // 0x802A4914: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802A4918: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x802A491C: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802A4920: beq         $at, $zero, L_802A492C
    if (ctx->r1 == 0) {
        // 0x802A4924: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_802A492C;
    }
    // 0x802A4924: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802A4928: sw          $v1, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r3;
L_802A492C:
    // 0x802A492C: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x802A4930: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x802A4934: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x802A4938: addu        $v0, $a3, $t0
    ctx->r2 = ADD32(ctx->r7, ctx->r8);
    // 0x802A493C: swc1        $f12, 0xE0($v0)
    MEM_W(0XE0, ctx->r2) = ctx->f12.u32l;
    // 0x802A4940: swc1        $f14, 0xE4($v0)
    MEM_W(0XE4, ctx->r2) = ctx->f14.u32l;
    // 0x802A4944: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802A4948: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A494C: bne         $v1, $at, L_802A49A0
    if (ctx->r3 != ctx->r1) {
        // 0x802A4950: swc1        $f4, 0xE8($v0)
        MEM_W(0XE8, ctx->r2) = ctx->f4.u32l;
            goto L_802A49A0;
    }
    // 0x802A4950: swc1        $f4, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->f4.u32l;
    // 0x802A4954: addiu       $a2, $a3, 0x2C
    ctx->r6 = ADD32(ctx->r7, 0X2C);
    // 0x802A4958: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802A495C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x802A4960: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x802A4964: jal         0x8022970C
    // 0x802A4968: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802A4968: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_0:
    // 0x802A496C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x802A4970: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802A4974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A4978: lwc1        $f6, 0xE0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XE0);
    // 0x802A497C: lwc1        $f8, 0xE4($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0XE4);
    // 0x802A4980: lwc1        $f10, 0xE8($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XE8);
    // 0x802A4984: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x802A4988: swc1        $f6, 0x5C($a3)
    MEM_W(0X5C, ctx->r7) = ctx->f6.u32l;
    // 0x802A498C: swc1        $f8, 0x60($a3)
    MEM_W(0X60, ctx->r7) = ctx->f8.u32l;
    // 0x802A4990: jal         0x8021B4B0
    // 0x802A4994: swc1        $f10, 0x64($a3)
    MEM_W(0X64, ctx->r7) = ctx->f10.u32l;
    static_3_8021B4B0(rdram, ctx);
        goto after_1;
    // 0x802A4994: swc1        $f10, 0x64($a3)
    MEM_W(0X64, ctx->r7) = ctx->f10.u32l;
    after_1:
    // 0x802A4998: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x802A499C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
L_802A49A0:
    // 0x802A49A0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802A49A4: bne         $t0, $at, L_802A49C8
    if (ctx->r8 != ctx->r1) {
        // 0x802A49A8: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_802A49C8;
    }
    // 0x802A49A8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802A49AC: lwc1        $f16, 0xEC($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0XEC);
    // 0x802A49B0: lwc1        $f18, 0xF0($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0XF0);
    // 0x802A49B4: lwc1        $f4, 0xF4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XF4);
    // 0x802A49B8: sw          $t7, 0x19C($a3)
    MEM_W(0X19C, ctx->r7) = ctx->r15;
    // 0x802A49BC: swc1        $f16, 0x1A4($a3)
    MEM_W(0X1A4, ctx->r7) = ctx->f16.u32l;
    // 0x802A49C0: swc1        $f18, 0x1A8($a3)
    MEM_W(0X1A8, ctx->r7) = ctx->f18.u32l;
    // 0x802A49C4: swc1        $f4, 0x1AC($a3)
    MEM_W(0X1AC, ctx->r7) = ctx->f4.u32l;
L_802A49C8:
    // 0x802A49C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A49CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A49D0: jr          $ra
    // 0x802A49D4: nop

    return;
    // 0x802A49D4: nop

;}
RECOMP_FUNC void D_8027D2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D338: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x8027D33C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8027D340: lw          $s2, 0x154($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X154);
    // 0x8027D344: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x8027D348: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8027D34C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8027D350: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8027D354: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x8027D358: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x8027D35C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8027D360: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x8027D364: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8027D368: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8027D36C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8027D370: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x8027D374: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x8027D378: sw          $a2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r6;
    // 0x8027D37C: sw          $a3, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r7;
    // 0x8027D380: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027D384: blez        $s2, L_8027D428
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8027D388: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8027D428;
    }
    // 0x8027D388: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8027D38C: andi        $a2, $s2, 0x3
    ctx->r6 = ctx->r18 & 0X3;
    // 0x8027D390: beq         $a2, $zero, L_8027D3D4
    if (ctx->r6 == 0) {
        // 0x8027D394: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8027D3D4;
    }
    // 0x8027D394: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8027D398: lw          $t7, 0x150($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X150);
    // 0x8027D39C: sll         $a1, $zero, 2
    ctx->r5 = S32(0 << 2);
    // 0x8027D3A0: addiu       $t6, $sp, 0xB8
    ctx->r14 = ADD32(ctx->r29, 0XB8);
    // 0x8027D3A4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027D3A8: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027D3AC: addu        $v0, $a1, $t6
    ctx->r2 = ADD32(ctx->r5, ctx->r14);
    // 0x8027D3B0: addu        $v1, $t7, $a1
    ctx->r3 = ADD32(ctx->r15, ctx->r5);
L_8027D3B4:
    // 0x8027D3B4: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x8027D3B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027D3BC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8027D3C0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8027D3C4: bne         $a0, $s0, L_8027D3B4
    if (ctx->r4 != ctx->r16) {
        // 0x8027D3C8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8027D3B4;
    }
    // 0x8027D3C8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8027D3CC: beql        $s0, $s2, L_8027D428
    if (ctx->r16 == ctx->r18) {
        // 0x8027D3D0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8027D428;
    }
    goto skip_0;
    // 0x8027D3D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    skip_0:
L_8027D3D4:
    // 0x8027D3D4: lw          $t9, 0x150($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X150);
    // 0x8027D3D8: sll         $a1, $s0, 2
    ctx->r5 = S32(ctx->r16 << 2);
    // 0x8027D3DC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027D3E0: addiu       $t8, $sp, 0xB8
    ctx->r24 = ADD32(ctx->r29, 0XB8);
    // 0x8027D3E4: sll         $t0, $s2, 2
    ctx->r8 = S32(ctx->r18 << 2);
    // 0x8027D3E8: addu        $v0, $a1, $t8
    ctx->r2 = ADD32(ctx->r5, ctx->r24);
    // 0x8027D3EC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027D3F0: addu        $a0, $t0, $t9
    ctx->r4 = ADD32(ctx->r8, ctx->r25);
    // 0x8027D3F4: addu        $v1, $t9, $a1
    ctx->r3 = ADD32(ctx->r25, ctx->r5);
L_8027D3F8:
    // 0x8027D3F8: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x8027D3FC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8027D400: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x8027D404: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8027D408: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8027D40C: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x8027D410: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x8027D414: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8027D418: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x8027D41C: bne         $v1, $a0, L_8027D3F8
    if (ctx->r3 != ctx->r4) {
        // 0x8027D420: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_8027D3F8;
    }
    // 0x8027D420: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8027D424: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8027D428:
    // 0x8027D428: addiu       $a1, $sp, 0x134
    ctx->r5 = ADD32(ctx->r29, 0X134);
    // 0x8027D42C: addiu       $t1, $sp, 0x130
    ctx->r9 = ADD32(ctx->r29, 0X130);
    // 0x8027D430: addiu       $t2, $sp, 0x12C
    ctx->r10 = ADD32(ctx->r29, 0X12C);
    // 0x8027D434: addiu       $t3, $sp, 0x128
    ctx->r11 = ADD32(ctx->r29, 0X128);
    // 0x8027D438: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8027D43C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8027D440: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8027D444: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8027D448: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8027D44C: jal         0x802CF1C8
    // 0x8027D450: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    static_3_802CF1C8(rdram, ctx);
        goto after_0;
    // 0x8027D450: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_0:
    // 0x8027D454: lw          $a2, 0x160($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X160);
    // 0x8027D458: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027D45C: addiu       $s3, $s7, 0x365C
    ctx->r19 = ADD32(ctx->r23, 0X365C);
    // 0x8027D460: beq         $a2, $at, L_8027D470
    if (ctx->r6 == ctx->r1) {
        // 0x8027D464: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8027D470;
    }
    // 0x8027D464: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027D468: bnel        $a2, $at, L_8027DD5C
    if (ctx->r6 != ctx->r1) {
        // 0x8027D46C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8027DD5C;
    }
    goto skip_1;
    // 0x8027D46C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_1:
L_8027D470:
    // 0x8027D470: jal         0x803187FC
    // 0x8027D474: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_803187FC(rdram, ctx);
        goto after_1;
    // 0x8027D474: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x8027D478: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027D47C: bnel        $v0, $at, L_8027D528
    if (ctx->r2 != ctx->r1) {
        // 0x8027D480: slti        $at, $s2, 0x2
        ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
            goto L_8027D528;
    }
    goto skip_2;
    // 0x8027D480: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    skip_2:
    // 0x8027D484: lw          $v1, 0x37FC($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X37FC);
    // 0x8027D488: addiu       $s5, $sp, 0xE0
    ctx->r21 = ADD32(ctx->r29, 0XE0);
    // 0x8027D48C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027D490: lh          $t4, 0x60($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X60);
    // 0x8027D494: lw          $t9, 0x64($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X64);
    // 0x8027D498: addu        $a0, $t4, $s7
    ctx->r4 = ADD32(ctx->r12, ctx->r23);
    // 0x8027D49C: jalr        $t9
    // 0x8027D4A0: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8027D4A0: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_2:
    // 0x8027D4A4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027D4A8: jal         0x802CF954
    // 0x8027D4AC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    static_3_802CF954(rdram, ctx);
        goto after_3;
    // 0x8027D4AC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_3:
    // 0x8027D4B0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8027D4B4: jal         0x80319298
    // 0x8027D4B8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_80319298(rdram, ctx);
        goto after_4;
    // 0x8027D4B8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x8027D4BC: beq         $v0, $zero, L_8027D4D4
    if (ctx->r2 == 0) {
        // 0x8027D4C0: lwc1        $f0, 0x158($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
            goto L_8027D4D4;
    }
    // 0x8027D4C0: lwc1        $f0, 0x158($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8027D4C4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8027D4C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027D4CC: b           L_8027D4D8
    // 0x8027D4D0: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
        goto L_8027D4D8;
    // 0x8027D4D0: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027D4D4:
    // 0x8027D4D4: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027D4D8:
    // 0x8027D4D8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027D4DC: bc1fl       L_8027D528
    if (!c1cs) {
        // 0x8027D4E0: slti        $at, $s2, 0x2
        ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
            goto L_8027D528;
    }
    goto skip_3;
    // 0x8027D4E0: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    skip_3:
    // 0x8027D4E4: jal         0x802CF718
    // 0x8027D4E8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    static_3_802CF718(rdram, ctx);
        goto after_5;
    // 0x8027D4E8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_5:
    // 0x8027D4EC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027D4F0: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027D4F4: lwc1        $f6, 0x15C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8027D4F8: lw          $t5, 0x148($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X148);
    // 0x8027D4FC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8027D500: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8027D504: nop

    // 0x8027D508: bc1fl       L_8027D528
    if (!c1cs) {
        // 0x8027D50C: slti        $at, $s2, 0x2
        ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
            goto L_8027D528;
    }
    goto skip_4;
    // 0x8027D50C: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    skip_4:
    // 0x8027D510: sw          $s3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r19;
    // 0x8027D514: lw          $t7, 0x150($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X150);
    // 0x8027D518: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    // 0x8027D51C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8027D520: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8027D524: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
L_8027D528:
    // 0x8027D528: addiu       $s5, $sp, 0xE0
    ctx->r21 = ADD32(ctx->r29, 0XE0);
    // 0x8027D52C: lwc1        $f20, 0xB8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8027D530: bne         $at, $zero, L_8027D608
    if (ctx->r1 != 0) {
        // 0x8027D534: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_8027D608;
    }
    // 0x8027D534: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8027D538: addiu       $a0, $s2, -0x1
    ctx->r4 = ADD32(ctx->r18, -0X1);
    // 0x8027D53C: andi        $t8, $a0, 0x3
    ctx->r24 = ctx->r4 & 0X3;
    // 0x8027D540: beq         $t8, $zero, L_8027D580
    if (ctx->r24 == 0) {
        // 0x8027D544: addiu       $v1, $t8, 0x1
        ctx->r3 = ADD32(ctx->r24, 0X1);
            goto L_8027D580;
    }
    // 0x8027D544: addiu       $v1, $t8, 0x1
    ctx->r3 = ADD32(ctx->r24, 0X1);
    // 0x8027D548: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x8027D54C: addiu       $t1, $sp, 0xB8
    ctx->r9 = ADD32(ctx->r29, 0XB8);
    // 0x8027D550: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
L_8027D554:
    // 0x8027D554: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027D558: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027D55C: nop

    // 0x8027D560: bc1fl       L_8027D574
    if (!c1cs) {
        // 0x8027D564: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8027D574;
    }
    goto skip_5;
    // 0x8027D564: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_5:
    // 0x8027D568: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D56C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027D570: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8027D574:
    // 0x8027D574: bne         $v1, $s0, L_8027D554
    if (ctx->r3 != ctx->r16) {
        // 0x8027D578: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8027D554;
    }
    // 0x8027D578: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8027D57C: beq         $s0, $s2, L_8027D608
    if (ctx->r16 == ctx->r18) {
        // 0x8027D580: sll         $t2, $s0, 2
        ctx->r10 = S32(ctx->r16 << 2);
            goto L_8027D608;
    }
L_8027D580:
    // 0x8027D580: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x8027D584: addiu       $t3, $sp, 0xB8
    ctx->r11 = ADD32(ctx->r29, 0XB8);
    // 0x8027D588: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
L_8027D58C:
    // 0x8027D58C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027D590: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027D594: nop

    // 0x8027D598: bc1fl       L_8027D5AC
    if (!c1cs) {
        // 0x8027D59C: lwc1        $f0, 0x4($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
            goto L_8027D5AC;
    }
    goto skip_6;
    // 0x8027D59C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    skip_6:
    // 0x8027D5A0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D5A4: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027D5A8: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_8027D5AC:
    // 0x8027D5AC: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027D5B0: nop

    // 0x8027D5B4: bc1fl       L_8027D5C8
    if (!c1cs) {
        // 0x8027D5B8: lwc1        $f0, 0x8($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
            goto L_8027D5C8;
    }
    goto skip_7;
    // 0x8027D5B8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    skip_7:
    // 0x8027D5BC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D5C0: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    // 0x8027D5C4: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
L_8027D5C8:
    // 0x8027D5C8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027D5CC: nop

    // 0x8027D5D0: bc1fl       L_8027D5E4
    if (!c1cs) {
        // 0x8027D5D4: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8027D5E4;
    }
    goto skip_8;
    // 0x8027D5D4: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_8:
    // 0x8027D5D8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D5DC: addiu       $s1, $s0, 0x2
    ctx->r17 = ADD32(ctx->r16, 0X2);
    // 0x8027D5E0: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_8027D5E4:
    // 0x8027D5E4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027D5E8: nop

    // 0x8027D5EC: bc1fl       L_8027D600
    if (!c1cs) {
        // 0x8027D5F0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8027D600;
    }
    goto skip_9;
    // 0x8027D5F0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_9:
    // 0x8027D5F4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D5F8: addiu       $s1, $s0, 0x3
    ctx->r17 = ADD32(ctx->r16, 0X3);
    // 0x8027D5FC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8027D600:
    // 0x8027D600: bne         $s0, $s2, L_8027D58C
    if (ctx->r16 != ctx->r18) {
        // 0x8027D604: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_8027D58C;
    }
    // 0x8027D604: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_8027D608:
    // 0x8027D608: lbu         $t4, 0x6FB8($s7)
    ctx->r12 = MEM_BU(ctx->r23, 0X6FB8);
    // 0x8027D60C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8027D610: or          $s3, $s7, $zero
    ctx->r19 = ctx->r23 | 0;
    // 0x8027D614: blez        $t4, L_8027D7EC
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8027D618: addiu       $fp, $sp, 0xB8
        ctx->r30 = ADD32(ctx->r29, 0XB8);
            goto L_8027D7EC;
    }
    // 0x8027D618: addiu       $fp, $sp, 0xB8
    ctx->r30 = ADD32(ctx->r29, 0XB8);
    // 0x8027D61C: lw          $a2, 0x6F94($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X6F94);
L_8027D620:
    // 0x8027D620: beql        $a2, $zero, L_8027D7D8
    if (ctx->r6 == 0) {
        // 0x8027D624: lbu         $t9, 0x6FB8($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X6FB8);
            goto L_8027D7D8;
    }
    goto skip_10;
    // 0x8027D624: lbu         $t9, 0x6FB8($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6FB8);
    skip_10:
    // 0x8027D628: jal         0x80317E10
    // 0x8027D62C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_6;
    // 0x8027D62C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_6:
    // 0x8027D630: beql        $v0, $zero, L_8027D7D8
    if (ctx->r2 == 0) {
        // 0x8027D634: lbu         $t9, 0x6FB8($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X6FB8);
            goto L_8027D7D8;
    }
    goto skip_11;
    // 0x8027D634: lbu         $t9, 0x6FB8($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6FB8);
    skip_11:
    // 0x8027D638: lw          $a2, 0x6F94($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X6F94);
    // 0x8027D63C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027D640: lw          $v1, 0x1A0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X1A0);
    // 0x8027D644: lh          $t9, 0x60($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X60);
    // 0x8027D648: addu        $a0, $t9, $a2
    ctx->r4 = ADD32(ctx->r25, ctx->r6);
    // 0x8027D64C: lw          $t9, 0x64($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X64);
    // 0x8027D650: jalr        $t9
    // 0x8027D654: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x8027D654: nop

    after_7:
    // 0x8027D658: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027D65C: jal         0x802CF954
    // 0x8027D660: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    static_3_802CF954(rdram, ctx);
        goto after_8;
    // 0x8027D660: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_8:
    // 0x8027D664: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8027D668: jal         0x80319298
    // 0x8027D66C: lw          $a0, 0x6F94($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X6F94);
    static_3_80319298(rdram, ctx);
        goto after_9;
    // 0x8027D66C: lw          $a0, 0x6F94($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X6F94);
    after_9:
    // 0x8027D670: beq         $v0, $zero, L_8027D688
    if (ctx->r2 == 0) {
        // 0x8027D674: lwc1        $f0, 0x158($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
            goto L_8027D688;
    }
    // 0x8027D674: lwc1        $f0, 0x158($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8027D678: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8027D67C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027D680: b           L_8027D68C
    // 0x8027D684: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
        goto L_8027D68C;
    // 0x8027D684: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027D688:
    // 0x8027D688: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027D68C:
    // 0x8027D68C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027D690: lwc1        $f16, 0x15C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8027D694: bc1fl       L_8027D7D8
    if (!c1cs) {
        // 0x8027D698: lbu         $t9, 0x6FB8($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X6FB8);
            goto L_8027D7D8;
    }
    goto skip_12;
    // 0x8027D698: lbu         $t9, 0x6FB8($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6FB8);
    skip_12:
    // 0x8027D69C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027D6A0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027D6A4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027D6A8: mul.s       $f22, $f10, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8027D6AC: jal         0x802CF718
    // 0x8027D6B0: nop

    static_3_802CF718(rdram, ctx);
        goto after_10;
    // 0x8027D6B0: nop

    after_10:
    // 0x8027D6B4: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x8027D6B8: nop

    // 0x8027D6BC: bc1fl       L_8027D7D8
    if (!c1cs) {
        // 0x8027D6C0: lbu         $t9, 0x6FB8($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X6FB8);
            goto L_8027D7D8;
    }
    goto skip_13;
    // 0x8027D6C0: lbu         $t9, 0x6FB8($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6FB8);
    skip_13:
    // 0x8027D6C4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8027D6C8: lw          $t5, 0x148($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X148);
    // 0x8027D6CC: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x8027D6D0: addu        $t7, $fp, $v0
    ctx->r15 = ADD32(ctx->r30, ctx->r2);
    // 0x8027D6D4: bc1f        L_8027D7D4
    if (!c1cs) {
        // 0x8027D6D8: addu        $t6, $t5, $v0
        ctx->r14 = ADD32(ctx->r13, ctx->r2);
            goto L_8027D7D4;
    }
    // 0x8027D6D8: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x8027D6DC: lw          $v1, 0x6F94($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X6F94);
    // 0x8027D6E0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027D6E4: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x8027D6E8: sw          $v1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r3;
    // 0x8027D6EC: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x8027D6F0: lw          $t0, 0x150($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X150);
    // 0x8027D6F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027D6F8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8027D6FC: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x8027D700: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x8027D704: bne         $at, $zero, L_8027D7D4
    if (ctx->r1 != 0) {
        // 0x8027D708: lwc1        $f20, 0xB8($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XB8);
            goto L_8027D7D4;
    }
    // 0x8027D708: lwc1        $f20, 0xB8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8027D70C: addiu       $a0, $s2, -0x1
    ctx->r4 = ADD32(ctx->r18, -0X1);
    // 0x8027D710: andi        $t2, $a0, 0x3
    ctx->r10 = ctx->r4 & 0X3;
    // 0x8027D714: beq         $t2, $zero, L_8027D750
    if (ctx->r10 == 0) {
        // 0x8027D718: addiu       $v1, $t2, 0x1
        ctx->r3 = ADD32(ctx->r10, 0X1);
            goto L_8027D750;
    }
    // 0x8027D718: addiu       $v1, $t2, 0x1
    ctx->r3 = ADD32(ctx->r10, 0X1);
    // 0x8027D71C: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x8027D720: addu        $v0, $fp, $t3
    ctx->r2 = ADD32(ctx->r30, ctx->r11);
L_8027D724:
    // 0x8027D724: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027D728: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027D72C: nop

    // 0x8027D730: bc1fl       L_8027D744
    if (!c1cs) {
        // 0x8027D734: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8027D744;
    }
    goto skip_14;
    // 0x8027D734: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_14:
    // 0x8027D738: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D73C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027D740: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8027D744:
    // 0x8027D744: bne         $v1, $s0, L_8027D724
    if (ctx->r3 != ctx->r16) {
        // 0x8027D748: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8027D724;
    }
    // 0x8027D748: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8027D74C: beq         $s0, $s2, L_8027D7D4
    if (ctx->r16 == ctx->r18) {
        // 0x8027D750: sll         $t4, $s0, 2
        ctx->r12 = S32(ctx->r16 << 2);
            goto L_8027D7D4;
    }
L_8027D750:
    // 0x8027D750: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x8027D754: addu        $v0, $fp, $t4
    ctx->r2 = ADD32(ctx->r30, ctx->r12);
L_8027D758:
    // 0x8027D758: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027D75C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027D760: nop

    // 0x8027D764: bc1fl       L_8027D778
    if (!c1cs) {
        // 0x8027D768: lwc1        $f0, 0x4($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
            goto L_8027D778;
    }
    goto skip_15;
    // 0x8027D768: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    skip_15:
    // 0x8027D76C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D770: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027D774: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_8027D778:
    // 0x8027D778: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027D77C: nop

    // 0x8027D780: bc1fl       L_8027D794
    if (!c1cs) {
        // 0x8027D784: lwc1        $f0, 0x8($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
            goto L_8027D794;
    }
    goto skip_16;
    // 0x8027D784: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    skip_16:
    // 0x8027D788: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D78C: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    // 0x8027D790: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
L_8027D794:
    // 0x8027D794: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027D798: nop

    // 0x8027D79C: bc1fl       L_8027D7B0
    if (!c1cs) {
        // 0x8027D7A0: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8027D7B0;
    }
    goto skip_17;
    // 0x8027D7A0: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_17:
    // 0x8027D7A4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D7A8: addiu       $s1, $s0, 0x2
    ctx->r17 = ADD32(ctx->r16, 0X2);
    // 0x8027D7AC: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_8027D7B0:
    // 0x8027D7B0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027D7B4: nop

    // 0x8027D7B8: bc1fl       L_8027D7CC
    if (!c1cs) {
        // 0x8027D7BC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8027D7CC;
    }
    goto skip_18;
    // 0x8027D7BC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_18:
    // 0x8027D7C0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D7C4: addiu       $s1, $s0, 0x3
    ctx->r17 = ADD32(ctx->r16, 0X3);
    // 0x8027D7C8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8027D7CC:
    // 0x8027D7CC: bne         $s0, $s2, L_8027D758
    if (ctx->r16 != ctx->r18) {
        // 0x8027D7D0: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_8027D758;
    }
    // 0x8027D7D0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_8027D7D4:
    // 0x8027D7D4: lbu         $t9, 0x6FB8($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6FB8);
L_8027D7D8:
    // 0x8027D7D8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8027D7DC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8027D7E0: slt         $at, $s4, $t9
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8027D7E4: bnel        $at, $zero, L_8027D620
    if (ctx->r1 != 0) {
        // 0x8027D7E8: lw          $a2, 0x6F94($s3)
        ctx->r6 = MEM_W(ctx->r19, 0X6F94);
            goto L_8027D620;
    }
    goto skip_19;
    // 0x8027D7E8: lw          $a2, 0x6F94($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X6F94);
    skip_19:
L_8027D7EC:
    // 0x8027D7EC: addiu       $fp, $sp, 0xB8
    ctx->r30 = ADD32(ctx->r29, 0XB8);
    // 0x8027D7F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027D7F4: or          $s3, $s7, $zero
    ctx->r19 = ctx->r23 | 0;
L_8027D7F8:
    // 0x8027D7F8: lw          $v0, 0x7050($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X7050);
    // 0x8027D7FC: beql        $v0, $zero, L_8027D9A8
    if (ctx->r2 == 0) {
        // 0x8027D800: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_8027D9A8;
    }
    goto skip_20;
    // 0x8027D800: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    skip_20:
    // 0x8027D804: lw          $v1, 0x1A0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1A0);
    // 0x8027D808: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027D80C: lh          $t5, 0x60($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X60);
    // 0x8027D810: sw          $a2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r6;
    // 0x8027D814: lw          $t9, 0x64($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X64);
    // 0x8027D818: addu        $a0, $t5, $v0
    ctx->r4 = ADD32(ctx->r13, ctx->r2);
    // 0x8027D81C: jalr        $t9
    // 0x8027D820: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x8027D820: nop

    after_11:
    // 0x8027D824: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027D828: jal         0x802CF954
    // 0x8027D82C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    static_3_802CF954(rdram, ctx);
        goto after_12;
    // 0x8027D82C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_12:
    // 0x8027D830: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8027D834: jal         0x80319298
    // 0x8027D838: lw          $a0, 0x7050($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X7050);
    static_3_80319298(rdram, ctx);
        goto after_13;
    // 0x8027D838: lw          $a0, 0x7050($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X7050);
    after_13:
    // 0x8027D83C: beq         $v0, $zero, L_8027D854
    if (ctx->r2 == 0) {
        // 0x8027D840: lwc1        $f0, 0x158($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
            goto L_8027D854;
    }
    // 0x8027D840: lwc1        $f0, 0x158($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8027D844: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8027D848: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027D84C: b           L_8027D858
    // 0x8027D850: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
        goto L_8027D858;
    // 0x8027D850: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027D854:
    // 0x8027D854: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027D858:
    // 0x8027D858: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027D85C: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8027D860: bc1fl       L_8027D9A4
    if (!c1cs) {
        // 0x8027D864: lw          $a2, 0x6C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X6C);
            goto L_8027D9A4;
    }
    goto skip_21;
    // 0x8027D864: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    skip_21:
    // 0x8027D868: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027D86C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027D870: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027D874: mul.s       $f22, $f18, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8027D878: jal         0x802CF718
    // 0x8027D87C: nop

    static_3_802CF718(rdram, ctx);
        goto after_14;
    // 0x8027D87C: nop

    after_14:
    // 0x8027D880: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x8027D884: nop

    // 0x8027D888: bc1fl       L_8027D9A4
    if (!c1cs) {
        // 0x8027D88C: lw          $a2, 0x6C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X6C);
            goto L_8027D9A4;
    }
    goto skip_22;
    // 0x8027D88C: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    skip_22:
    // 0x8027D890: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8027D894: lw          $t7, 0x148($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X148);
    // 0x8027D898: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x8027D89C: addu        $t8, $fp, $v0
    ctx->r24 = ADD32(ctx->r30, ctx->r2);
    // 0x8027D8A0: bc1f        L_8027D9A0
    if (!c1cs) {
        // 0x8027D8A4: addu        $t0, $t7, $v0
        ctx->r8 = ADD32(ctx->r15, ctx->r2);
            goto L_8027D9A0;
    }
    // 0x8027D8A4: addu        $t0, $t7, $v0
    ctx->r8 = ADD32(ctx->r15, ctx->r2);
    // 0x8027D8A8: lw          $t6, 0x7050($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X7050);
    // 0x8027D8AC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8027D8B0: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x8027D8B4: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x8027D8B8: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
    // 0x8027D8BC: lw          $t2, 0x150($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X150);
    // 0x8027D8C0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027D8C4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8027D8C8: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x8027D8CC: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x8027D8D0: bne         $at, $zero, L_8027D9A0
    if (ctx->r1 != 0) {
        // 0x8027D8D4: lwc1        $f20, 0xB8($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XB8);
            goto L_8027D9A0;
    }
    // 0x8027D8D4: lwc1        $f20, 0xB8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8027D8D8: addiu       $a0, $s2, -0x1
    ctx->r4 = ADD32(ctx->r18, -0X1);
    // 0x8027D8DC: andi        $t4, $a0, 0x3
    ctx->r12 = ctx->r4 & 0X3;
    // 0x8027D8E0: beq         $t4, $zero, L_8027D91C
    if (ctx->r12 == 0) {
        // 0x8027D8E4: addiu       $v1, $t4, 0x1
        ctx->r3 = ADD32(ctx->r12, 0X1);
            goto L_8027D91C;
    }
    // 0x8027D8E4: addiu       $v1, $t4, 0x1
    ctx->r3 = ADD32(ctx->r12, 0X1);
    // 0x8027D8E8: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x8027D8EC: addu        $v0, $fp, $t5
    ctx->r2 = ADD32(ctx->r30, ctx->r13);
L_8027D8F0:
    // 0x8027D8F0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027D8F4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027D8F8: nop

    // 0x8027D8FC: bc1fl       L_8027D910
    if (!c1cs) {
        // 0x8027D900: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8027D910;
    }
    goto skip_23;
    // 0x8027D900: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_23:
    // 0x8027D904: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D908: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027D90C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8027D910:
    // 0x8027D910: bne         $v1, $s0, L_8027D8F0
    if (ctx->r3 != ctx->r16) {
        // 0x8027D914: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8027D8F0;
    }
    // 0x8027D914: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8027D918: beq         $s0, $s2, L_8027D9A0
    if (ctx->r16 == ctx->r18) {
        // 0x8027D91C: sll         $t9, $s0, 2
        ctx->r25 = S32(ctx->r16 << 2);
            goto L_8027D9A0;
    }
L_8027D91C:
    // 0x8027D91C: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x8027D920: addu        $v0, $fp, $t9
    ctx->r2 = ADD32(ctx->r30, ctx->r25);
L_8027D924:
    // 0x8027D924: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027D928: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027D92C: nop

    // 0x8027D930: bc1fl       L_8027D944
    if (!c1cs) {
        // 0x8027D934: lwc1        $f0, 0x4($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
            goto L_8027D944;
    }
    goto skip_24;
    // 0x8027D934: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    skip_24:
    // 0x8027D938: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D93C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027D940: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_8027D944:
    // 0x8027D944: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027D948: nop

    // 0x8027D94C: bc1fl       L_8027D960
    if (!c1cs) {
        // 0x8027D950: lwc1        $f0, 0x8($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
            goto L_8027D960;
    }
    goto skip_25;
    // 0x8027D950: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    skip_25:
    // 0x8027D954: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D958: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    // 0x8027D95C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
L_8027D960:
    // 0x8027D960: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027D964: nop

    // 0x8027D968: bc1fl       L_8027D97C
    if (!c1cs) {
        // 0x8027D96C: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8027D97C;
    }
    goto skip_26;
    // 0x8027D96C: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_26:
    // 0x8027D970: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D974: addiu       $s1, $s0, 0x2
    ctx->r17 = ADD32(ctx->r16, 0X2);
    // 0x8027D978: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_8027D97C:
    // 0x8027D97C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027D980: nop

    // 0x8027D984: bc1fl       L_8027D998
    if (!c1cs) {
        // 0x8027D988: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8027D998;
    }
    goto skip_27;
    // 0x8027D988: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_27:
    // 0x8027D98C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D990: addiu       $s1, $s0, 0x3
    ctx->r17 = ADD32(ctx->r16, 0X3);
    // 0x8027D994: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8027D998:
    // 0x8027D998: bne         $s0, $s2, L_8027D924
    if (ctx->r16 != ctx->r18) {
        // 0x8027D99C: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_8027D924;
    }
    // 0x8027D99C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_8027D9A0:
    // 0x8027D9A0: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
L_8027D9A4:
    // 0x8027D9A4: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_8027D9A8:
    // 0x8027D9A8: slti        $at, $a2, 0xA0
    ctx->r1 = SIGNED(ctx->r6) < 0XA0 ? 1 : 0;
    // 0x8027D9AC: bne         $at, $zero, L_8027D7F8
    if (ctx->r1 != 0) {
        // 0x8027D9B0: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_8027D7F8;
    }
    // 0x8027D9B0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8027D9B4: addiu       $a0, $s7, 0x4E3C
    ctx->r4 = ADD32(ctx->r23, 0X4E3C);
    // 0x8027D9B8: jal         0x80317E10
    // 0x8027D9BC: sw          $a0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r4;
    static_3_80317E10(rdram, ctx);
        goto after_15;
    // 0x8027D9BC: sw          $a0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r4;
    after_15:
    // 0x8027D9C0: beq         $v0, $zero, L_8027DB5C
    if (ctx->r2 == 0) {
        // 0x8027D9C4: lw          $s3, 0x6C($sp)
        ctx->r19 = MEM_W(ctx->r29, 0X6C);
            goto L_8027DB5C;
    }
    // 0x8027D9C4: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x8027D9C8: lw          $v1, 0x4FDC($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X4FDC);
    // 0x8027D9CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027D9D0: lh          $t7, 0x60($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X60);
    // 0x8027D9D4: lw          $t9, 0x64($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X64);
    // 0x8027D9D8: addu        $a0, $t7, $s7
    ctx->r4 = ADD32(ctx->r15, ctx->r23);
    // 0x8027D9DC: jalr        $t9
    // 0x8027D9E0: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x8027D9E0: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_16:
    // 0x8027D9E4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027D9E8: jal         0x802CF954
    // 0x8027D9EC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    static_3_802CF954(rdram, ctx);
        goto after_17;
    // 0x8027D9EC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_17:
    // 0x8027D9F0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8027D9F4: jal         0x80319298
    // 0x8027D9F8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_80319298(rdram, ctx);
        goto after_18;
    // 0x8027D9F8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_18:
    // 0x8027D9FC: beq         $v0, $zero, L_8027DA14
    if (ctx->r2 == 0) {
        // 0x8027DA00: lwc1        $f0, 0x158($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
            goto L_8027DA14;
    }
    // 0x8027DA00: lwc1        $f0, 0x158($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8027DA04: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8027DA08: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027DA0C: b           L_8027DA18
    // 0x8027DA10: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
        goto L_8027DA18;
    // 0x8027DA10: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027DA14:
    // 0x8027DA14: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027DA18:
    // 0x8027DA18: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027DA1C: lwc1        $f8, 0x15C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8027DA20: bc1fl       L_8027DB60
    if (!c1cs) {
        // 0x8027DA24: lbu         $t9, 0x704C($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X704C);
            goto L_8027DB60;
    }
    goto skip_28;
    // 0x8027DA24: lbu         $t9, 0x704C($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X704C);
    skip_28:
    // 0x8027DA28: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027DA2C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027DA30: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027DA34: mul.s       $f22, $f6, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8027DA38: jal         0x802CF718
    // 0x8027DA3C: nop

    static_3_802CF718(rdram, ctx);
        goto after_19;
    // 0x8027DA3C: nop

    after_19:
    // 0x8027DA40: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x8027DA44: nop

    // 0x8027DA48: bc1fl       L_8027DB60
    if (!c1cs) {
        // 0x8027DA4C: lbu         $t9, 0x704C($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X704C);
            goto L_8027DB60;
    }
    goto skip_29;
    // 0x8027DA4C: lbu         $t9, 0x704C($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X704C);
    skip_29:
    // 0x8027DA50: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8027DA54: lw          $t6, 0x148($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X148);
    // 0x8027DA58: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x8027DA5C: addu        $t8, $fp, $v0
    ctx->r24 = ADD32(ctx->r30, ctx->r2);
    // 0x8027DA60: bc1f        L_8027DB5C
    if (!c1cs) {
        // 0x8027DA64: addu        $t0, $t6, $v0
        ctx->r8 = ADD32(ctx->r14, ctx->r2);
            goto L_8027DB5C;
    }
    // 0x8027DA64: addu        $t0, $t6, $v0
    ctx->r8 = ADD32(ctx->r14, ctx->r2);
    // 0x8027DA68: sw          $s3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r19;
    // 0x8027DA6C: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
    // 0x8027DA70: lw          $t1, 0x150($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X150);
    // 0x8027DA74: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8027DA78: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x8027DA7C: addu        $t3, $t1, $v0
    ctx->r11 = ADD32(ctx->r9, ctx->r2);
    // 0x8027DA80: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8027DA84: lwc1        $f20, 0xB8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8027DA88: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027DA8C: bne         $at, $zero, L_8027DB5C
    if (ctx->r1 != 0) {
        // 0x8027DA90: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_8027DB5C;
    }
    // 0x8027DA90: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8027DA94: addiu       $a0, $s2, -0x1
    ctx->r4 = ADD32(ctx->r18, -0X1);
    // 0x8027DA98: andi        $t4, $a0, 0x3
    ctx->r12 = ctx->r4 & 0X3;
    // 0x8027DA9C: beq         $t4, $zero, L_8027DAD8
    if (ctx->r12 == 0) {
        // 0x8027DAA0: addiu       $v1, $t4, 0x1
        ctx->r3 = ADD32(ctx->r12, 0X1);
            goto L_8027DAD8;
    }
    // 0x8027DAA0: addiu       $v1, $t4, 0x1
    ctx->r3 = ADD32(ctx->r12, 0X1);
    // 0x8027DAA4: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x8027DAA8: addu        $v0, $fp, $t5
    ctx->r2 = ADD32(ctx->r30, ctx->r13);
L_8027DAAC:
    // 0x8027DAAC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027DAB0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027DAB4: nop

    // 0x8027DAB8: bc1fl       L_8027DACC
    if (!c1cs) {
        // 0x8027DABC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8027DACC;
    }
    goto skip_30;
    // 0x8027DABC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_30:
    // 0x8027DAC0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027DAC4: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027DAC8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8027DACC:
    // 0x8027DACC: bne         $v1, $s0, L_8027DAAC
    if (ctx->r3 != ctx->r16) {
        // 0x8027DAD0: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8027DAAC;
    }
    // 0x8027DAD0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8027DAD4: beq         $s0, $s2, L_8027DB5C
    if (ctx->r16 == ctx->r18) {
        // 0x8027DAD8: sll         $t7, $s0, 2
        ctx->r15 = S32(ctx->r16 << 2);
            goto L_8027DB5C;
    }
L_8027DAD8:
    // 0x8027DAD8: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x8027DADC: addu        $v0, $fp, $t7
    ctx->r2 = ADD32(ctx->r30, ctx->r15);
L_8027DAE0:
    // 0x8027DAE0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027DAE4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027DAE8: nop

    // 0x8027DAEC: bc1fl       L_8027DB00
    if (!c1cs) {
        // 0x8027DAF0: lwc1        $f0, 0x4($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
            goto L_8027DB00;
    }
    goto skip_31;
    // 0x8027DAF0: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    skip_31:
    // 0x8027DAF4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027DAF8: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027DAFC: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_8027DB00:
    // 0x8027DB00: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027DB04: nop

    // 0x8027DB08: bc1fl       L_8027DB1C
    if (!c1cs) {
        // 0x8027DB0C: lwc1        $f0, 0x8($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
            goto L_8027DB1C;
    }
    goto skip_32;
    // 0x8027DB0C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    skip_32:
    // 0x8027DB10: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027DB14: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    // 0x8027DB18: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
L_8027DB1C:
    // 0x8027DB1C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027DB20: nop

    // 0x8027DB24: bc1fl       L_8027DB38
    if (!c1cs) {
        // 0x8027DB28: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8027DB38;
    }
    goto skip_33;
    // 0x8027DB28: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_33:
    // 0x8027DB2C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027DB30: addiu       $s1, $s0, 0x2
    ctx->r17 = ADD32(ctx->r16, 0X2);
    // 0x8027DB34: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_8027DB38:
    // 0x8027DB38: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027DB3C: nop

    // 0x8027DB40: bc1fl       L_8027DB54
    if (!c1cs) {
        // 0x8027DB44: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8027DB54;
    }
    goto skip_34;
    // 0x8027DB44: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_34:
    // 0x8027DB48: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027DB4C: addiu       $s1, $s0, 0x3
    ctx->r17 = ADD32(ctx->r16, 0X3);
    // 0x8027DB50: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8027DB54:
    // 0x8027DB54: bne         $s0, $s2, L_8027DAE0
    if (ctx->r16 != ctx->r18) {
        // 0x8027DB58: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_8027DAE0;
    }
    // 0x8027DB58: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_8027DB5C:
    // 0x8027DB5C: lbu         $t9, 0x704C($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X704C);
L_8027DB60:
    // 0x8027DB60: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8027DB64: or          $s3, $s7, $zero
    ctx->r19 = ctx->r23 | 0;
    // 0x8027DB68: blezl       $t9, L_8027DD54
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8027DB6C: swc1        $f20, 0xB4($sp)
        MEM_W(0XB4, ctx->r29) = ctx->f20.u32l;
            goto L_8027DD54;
    }
    goto skip_35;
    // 0x8027DB6C: swc1        $f20, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f20.u32l;
    skip_35:
    // 0x8027DB70: lw          $a0, 0x6FC0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X6FC0);
L_8027DB74:
    // 0x8027DB74: beql        $a0, $zero, L_8027DD3C
    if (ctx->r4 == 0) {
        // 0x8027DB78: lbu         $t0, 0x704C($s7)
        ctx->r8 = MEM_BU(ctx->r23, 0X704C);
            goto L_8027DD3C;
    }
    goto skip_36;
    // 0x8027DB78: lbu         $t0, 0x704C($s7)
    ctx->r8 = MEM_BU(ctx->r23, 0X704C);
    skip_36:
    // 0x8027DB7C: jal         0x8028C2B8
    // 0x8027DB80: nop

    static_3_8028C2B8(rdram, ctx);
        goto after_20;
    // 0x8027DB80: nop

    after_20:
    // 0x8027DB84: beq         $v0, $zero, L_8027DD38
    if (ctx->r2 == 0) {
        // 0x8027DB88: addiu       $a1, $sp, 0xA4
        ctx->r5 = ADD32(ctx->r29, 0XA4);
            goto L_8027DD38;
    }
    // 0x8027DB88: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x8027DB8C: lw          $a0, 0x6FC0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X6FC0);
    // 0x8027DB90: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x8027DB94: jal         0x8028C2C0
    // 0x8027DB98: addiu       $a3, $sp, 0x9C
    ctx->r7 = ADD32(ctx->r29, 0X9C);
    static_3_8028C2C0(rdram, ctx);
        goto after_21;
    // 0x8027DB98: addiu       $a3, $sp, 0x9C
    ctx->r7 = ADD32(ctx->r29, 0X9C);
    after_21:
    // 0x8027DB9C: jal         0x8022970C
    // 0x8027DBA0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8022970C(rdram, ctx);
        goto after_22;
    // 0x8027DBA0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_22:
    // 0x8027DBA4: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x8027DBA8: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8027DBAC: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8027DBB0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027DBB4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027DBB8: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    // 0x8027DBBC: swc1        $f16, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f16.u32l;
    // 0x8027DBC0: jal         0x802CF954
    // 0x8027DBC4: swc1        $f18, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f18.u32l;
    static_3_802CF954(rdram, ctx);
        goto after_23;
    // 0x8027DBC4: swc1        $f18, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f18.u32l;
    after_23:
    // 0x8027DBC8: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8027DBCC: jal         0x8028C450
    // 0x8027DBD0: lw          $a0, 0x6FC0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X6FC0);
    static_3_8028C450(rdram, ctx);
        goto after_24;
    // 0x8027DBD0: lw          $a0, 0x6FC0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X6FC0);
    after_24:
    // 0x8027DBD4: beq         $v0, $zero, L_8027DBEC
    if (ctx->r2 == 0) {
        // 0x8027DBD8: lwc1        $f0, 0x158($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
            goto L_8027DBEC;
    }
    // 0x8027DBD8: lwc1        $f0, 0x158($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8027DBDC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8027DBE0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027DBE4: b           L_8027DBF0
    // 0x8027DBE8: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
        goto L_8027DBF0;
    // 0x8027DBE8: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027DBEC:
    // 0x8027DBEC: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027DBF0:
    // 0x8027DBF0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027DBF4: lwc1        $f6, 0x15C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8027DBF8: bc1fl       L_8027DD3C
    if (!c1cs) {
        // 0x8027DBFC: lbu         $t0, 0x704C($s7)
        ctx->r8 = MEM_BU(ctx->r23, 0X704C);
            goto L_8027DD3C;
    }
    goto skip_37;
    // 0x8027DBFC: lbu         $t0, 0x704C($s7)
    ctx->r8 = MEM_BU(ctx->r23, 0X704C);
    skip_37:
    // 0x8027DC00: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027DC04: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027DC08: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027DC0C: mul.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8027DC10: jal         0x802CF718
    // 0x8027DC14: nop

    static_3_802CF718(rdram, ctx);
        goto after_25;
    // 0x8027DC14: nop

    after_25:
    // 0x8027DC18: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x8027DC1C: nop

    // 0x8027DC20: bc1fl       L_8027DD3C
    if (!c1cs) {
        // 0x8027DC24: lbu         $t0, 0x704C($s7)
        ctx->r8 = MEM_BU(ctx->r23, 0X704C);
            goto L_8027DD3C;
    }
    goto skip_38;
    // 0x8027DC24: lbu         $t0, 0x704C($s7)
    ctx->r8 = MEM_BU(ctx->r23, 0X704C);
    skip_38:
    // 0x8027DC28: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8027DC2C: lw          $t0, 0x14C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14C);
    // 0x8027DC30: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x8027DC34: addu        $t1, $fp, $v0
    ctx->r9 = ADD32(ctx->r30, ctx->r2);
    // 0x8027DC38: bc1f        L_8027DD38
    if (!c1cs) {
        // 0x8027DC3C: addu        $t8, $t0, $v0
        ctx->r24 = ADD32(ctx->r8, ctx->r2);
            goto L_8027DD38;
    }
    // 0x8027DC3C: addu        $t8, $t0, $v0
    ctx->r24 = ADD32(ctx->r8, ctx->r2);
    // 0x8027DC40: lw          $t6, 0x6FC0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X6FC0);
    // 0x8027DC44: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8027DC48: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x8027DC4C: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
    // 0x8027DC50: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
    // 0x8027DC54: lw          $t3, 0x150($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X150);
    // 0x8027DC58: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027DC5C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8027DC60: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x8027DC64: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x8027DC68: bne         $at, $zero, L_8027DD38
    if (ctx->r1 != 0) {
        // 0x8027DC6C: lwc1        $f20, 0xB8($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XB8);
            goto L_8027DD38;
    }
    // 0x8027DC6C: lwc1        $f20, 0xB8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8027DC70: addiu       $a0, $s2, -0x1
    ctx->r4 = ADD32(ctx->r18, -0X1);
    // 0x8027DC74: andi        $t5, $a0, 0x3
    ctx->r13 = ctx->r4 & 0X3;
    // 0x8027DC78: beq         $t5, $zero, L_8027DCB4
    if (ctx->r13 == 0) {
        // 0x8027DC7C: addiu       $v1, $t5, 0x1
        ctx->r3 = ADD32(ctx->r13, 0X1);
            goto L_8027DCB4;
    }
    // 0x8027DC7C: addiu       $v1, $t5, 0x1
    ctx->r3 = ADD32(ctx->r13, 0X1);
    // 0x8027DC80: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x8027DC84: addu        $v0, $fp, $t7
    ctx->r2 = ADD32(ctx->r30, ctx->r15);
L_8027DC88:
    // 0x8027DC88: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027DC8C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027DC90: nop

    // 0x8027DC94: bc1fl       L_8027DCA8
    if (!c1cs) {
        // 0x8027DC98: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8027DCA8;
    }
    goto skip_39;
    // 0x8027DC98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_39:
    // 0x8027DC9C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027DCA0: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027DCA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8027DCA8:
    // 0x8027DCA8: bne         $v1, $s0, L_8027DC88
    if (ctx->r3 != ctx->r16) {
        // 0x8027DCAC: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8027DC88;
    }
    // 0x8027DCAC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8027DCB0: beq         $s0, $s2, L_8027DD38
    if (ctx->r16 == ctx->r18) {
        // 0x8027DCB4: sll         $t9, $s0, 2
        ctx->r25 = S32(ctx->r16 << 2);
            goto L_8027DD38;
    }
L_8027DCB4:
    // 0x8027DCB4: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x8027DCB8: addu        $v0, $fp, $t9
    ctx->r2 = ADD32(ctx->r30, ctx->r25);
L_8027DCBC:
    // 0x8027DCBC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027DCC0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027DCC4: nop

    // 0x8027DCC8: bc1fl       L_8027DCDC
    if (!c1cs) {
        // 0x8027DCCC: lwc1        $f0, 0x4($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
            goto L_8027DCDC;
    }
    goto skip_40;
    // 0x8027DCCC: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    skip_40:
    // 0x8027DCD0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027DCD4: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027DCD8: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_8027DCDC:
    // 0x8027DCDC: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027DCE0: nop

    // 0x8027DCE4: bc1fl       L_8027DCF8
    if (!c1cs) {
        // 0x8027DCE8: lwc1        $f0, 0x8($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
            goto L_8027DCF8;
    }
    goto skip_41;
    // 0x8027DCE8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    skip_41:
    // 0x8027DCEC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027DCF0: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    // 0x8027DCF4: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
L_8027DCF8:
    // 0x8027DCF8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027DCFC: nop

    // 0x8027DD00: bc1fl       L_8027DD14
    if (!c1cs) {
        // 0x8027DD04: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8027DD14;
    }
    goto skip_42;
    // 0x8027DD04: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_42:
    // 0x8027DD08: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027DD0C: addiu       $s1, $s0, 0x2
    ctx->r17 = ADD32(ctx->r16, 0X2);
    // 0x8027DD10: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_8027DD14:
    // 0x8027DD14: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027DD18: nop

    // 0x8027DD1C: bc1fl       L_8027DD30
    if (!c1cs) {
        // 0x8027DD20: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8027DD30;
    }
    goto skip_43;
    // 0x8027DD20: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_43:
    // 0x8027DD24: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027DD28: addiu       $s1, $s0, 0x3
    ctx->r17 = ADD32(ctx->r16, 0X3);
    // 0x8027DD2C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8027DD30:
    // 0x8027DD30: bne         $s0, $s2, L_8027DCBC
    if (ctx->r16 != ctx->r18) {
        // 0x8027DD34: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_8027DCBC;
    }
    // 0x8027DD34: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_8027DD38:
    // 0x8027DD38: lbu         $t0, 0x704C($s7)
    ctx->r8 = MEM_BU(ctx->r23, 0X704C);
L_8027DD3C:
    // 0x8027DD3C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8027DD40: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8027DD44: slt         $at, $s4, $t0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8027DD48: bnel        $at, $zero, L_8027DB74
    if (ctx->r1 != 0) {
        // 0x8027DD4C: lw          $a0, 0x6FC0($s3)
        ctx->r4 = MEM_W(ctx->r19, 0X6FC0);
            goto L_8027DB74;
    }
    goto skip_44;
    // 0x8027DD4C: lw          $a0, 0x6FC0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X6FC0);
    skip_44:
    // 0x8027DD50: swc1        $f20, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f20.u32l;
L_8027DD54:
    // 0x8027DD54: lw          $a2, 0x160($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X160);
    // 0x8027DD58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8027DD5C:
    // 0x8027DD5C: addiu       $s5, $sp, 0xE0
    ctx->r21 = ADD32(ctx->r29, 0XE0);
    // 0x8027DD60: addiu       $fp, $sp, 0xB8
    ctx->r30 = ADD32(ctx->r29, 0XB8);
    // 0x8027DD64: lwc1        $f20, 0xB4($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8027DD68: beq         $a2, $at, L_8027DD7C
    if (ctx->r6 == ctx->r1) {
        // 0x8027DD6C: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_8027DD7C;
    }
    // 0x8027DD6C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8027DD70: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027DD74: bnel        $a2, $at, L_8027E288
    if (ctx->r6 != ctx->r1) {
        // 0x8027DD78: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8027E288;
    }
    goto skip_45;
    // 0x8027DD78: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    skip_45:
L_8027DD7C:
    // 0x8027DD7C: lw          $v0, 0x6F00($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X6F00);
    // 0x8027DD80: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027DD84: addiu       $s3, $s7, 0x365C
    ctx->r19 = ADD32(ctx->r23, 0X365C);
    // 0x8027DD88: beql        $v0, $zero, L_8027DE24
    if (ctx->r2 == 0) {
        // 0x8027DD8C: slti        $at, $s2, 0x2
        ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
            goto L_8027DE24;
    }
    goto skip_46;
    // 0x8027DD8C: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    skip_46:
    // 0x8027DD90: lw          $v1, 0x1A0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1A0);
    // 0x8027DD94: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027DD98: lw          $t9, 0x64($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X64);
    // 0x8027DD9C: lh          $t6, 0x60($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X60);
    // 0x8027DDA0: jalr        $t9
    // 0x8027DDA4: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x8027DDA4: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    after_26:
    // 0x8027DDA8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027DDAC: jal         0x802CF954
    // 0x8027DDB0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    static_3_802CF954(rdram, ctx);
        goto after_27;
    // 0x8027DDB0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_27:
    // 0x8027DDB4: lwc1        $f8, 0x158($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8027DDB8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027DDBC: lwc1        $f16, 0x15C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8027DDC0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8027DDC4: nop

    // 0x8027DDC8: bc1f        L_8027DE20
    if (!c1cs) {
        // 0x8027DDCC: nop
    
            goto L_8027DE20;
    }
    // 0x8027DDCC: nop

    // 0x8027DDD0: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027DDD4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027DDD8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027DDDC: mul.s       $f22, $f10, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8027DDE0: jal         0x802CF718
    // 0x8027DDE4: nop

    static_3_802CF718(rdram, ctx);
        goto after_28;
    // 0x8027DDE4: nop

    after_28:
    // 0x8027DDE8: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x8027DDEC: sll         $a1, $s0, 2
    ctx->r5 = S32(ctx->r16 << 2);
    // 0x8027DDF0: lw          $t1, 0x148($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X148);
    // 0x8027DDF4: bc1f        L_8027DE20
    if (!c1cs) {
        // 0x8027DDF8: nop
    
            goto L_8027DE20;
    }
    // 0x8027DDF8: nop

    // 0x8027DDFC: lw          $t8, 0x6F00($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X6F00);
    // 0x8027DE00: addu        $t3, $t1, $a1
    ctx->r11 = ADD32(ctx->r9, ctx->r5);
    // 0x8027DE04: addu        $t2, $fp, $a1
    ctx->r10 = ADD32(ctx->r30, ctx->r5);
    // 0x8027DE08: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x8027DE0C: swc1        $f0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f0.u32l;
    // 0x8027DE10: lw          $t5, 0x150($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X150);
    // 0x8027DE14: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8027DE18: addu        $t7, $t5, $a1
    ctx->r15 = ADD32(ctx->r13, ctx->r5);
    // 0x8027DE1C: sw          $t4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r12;
L_8027DE20:
    // 0x8027DE20: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
L_8027DE24:
    // 0x8027DE24: lwc1        $f20, 0xB8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8027DE28: bne         $at, $zero, L_8027DEF8
    if (ctx->r1 != 0) {
        // 0x8027DE2C: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_8027DEF8;
    }
    // 0x8027DE2C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8027DE30: addiu       $a0, $s2, -0x1
    ctx->r4 = ADD32(ctx->r18, -0X1);
    // 0x8027DE34: andi        $t0, $a0, 0x3
    ctx->r8 = ctx->r4 & 0X3;
    // 0x8027DE38: beq         $t0, $zero, L_8027DE74
    if (ctx->r8 == 0) {
        // 0x8027DE3C: addiu       $v1, $t0, 0x1
        ctx->r3 = ADD32(ctx->r8, 0X1);
            goto L_8027DE74;
    }
    // 0x8027DE3C: addiu       $v1, $t0, 0x1
    ctx->r3 = ADD32(ctx->r8, 0X1);
    // 0x8027DE40: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x8027DE44: addu        $v0, $fp, $t6
    ctx->r2 = ADD32(ctx->r30, ctx->r14);
L_8027DE48:
    // 0x8027DE48: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027DE4C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027DE50: nop

    // 0x8027DE54: bc1fl       L_8027DE68
    if (!c1cs) {
        // 0x8027DE58: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8027DE68;
    }
    goto skip_47;
    // 0x8027DE58: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_47:
    // 0x8027DE5C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027DE60: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027DE64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8027DE68:
    // 0x8027DE68: bne         $v1, $s0, L_8027DE48
    if (ctx->r3 != ctx->r16) {
        // 0x8027DE6C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8027DE48;
    }
    // 0x8027DE6C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8027DE70: beq         $s0, $s2, L_8027DEF8
    if (ctx->r16 == ctx->r18) {
        // 0x8027DE74: sll         $t9, $s0, 2
        ctx->r25 = S32(ctx->r16 << 2);
            goto L_8027DEF8;
    }
L_8027DE74:
    // 0x8027DE74: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x8027DE78: addu        $v0, $fp, $t9
    ctx->r2 = ADD32(ctx->r30, ctx->r25);
L_8027DE7C:
    // 0x8027DE7C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027DE80: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027DE84: nop

    // 0x8027DE88: bc1fl       L_8027DE9C
    if (!c1cs) {
        // 0x8027DE8C: lwc1        $f0, 0x4($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
            goto L_8027DE9C;
    }
    goto skip_48;
    // 0x8027DE8C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    skip_48:
    // 0x8027DE90: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027DE94: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027DE98: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_8027DE9C:
    // 0x8027DE9C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027DEA0: nop

    // 0x8027DEA4: bc1fl       L_8027DEB8
    if (!c1cs) {
        // 0x8027DEA8: lwc1        $f0, 0x8($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
            goto L_8027DEB8;
    }
    goto skip_49;
    // 0x8027DEA8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    skip_49:
    // 0x8027DEAC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027DEB0: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    // 0x8027DEB4: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
L_8027DEB8:
    // 0x8027DEB8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027DEBC: nop

    // 0x8027DEC0: bc1fl       L_8027DED4
    if (!c1cs) {
        // 0x8027DEC4: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8027DED4;
    }
    goto skip_50;
    // 0x8027DEC4: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_50:
    // 0x8027DEC8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027DECC: addiu       $s1, $s0, 0x2
    ctx->r17 = ADD32(ctx->r16, 0X2);
    // 0x8027DED0: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_8027DED4:
    // 0x8027DED4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027DED8: nop

    // 0x8027DEDC: bc1fl       L_8027DEF0
    if (!c1cs) {
        // 0x8027DEE0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8027DEF0;
    }
    goto skip_51;
    // 0x8027DEE0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_51:
    // 0x8027DEE4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027DEE8: addiu       $s1, $s0, 0x3
    ctx->r17 = ADD32(ctx->r16, 0X3);
    // 0x8027DEEC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8027DEF0:
    // 0x8027DEF0: bne         $s0, $s2, L_8027DE7C
    if (ctx->r16 != ctx->r18) {
        // 0x8027DEF4: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_8027DE7C;
    }
    // 0x8027DEF4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_8027DEF8:
    // 0x8027DEF8: jal         0x803187FC
    // 0x8027DEFC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_803187FC(rdram, ctx);
        goto after_29;
    // 0x8027DEFC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_29:
    // 0x8027DF00: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027DF04: bnel        $v0, $at, L_8027E0A4
    if (ctx->r2 != ctx->r1) {
        // 0x8027DF08: lbu         $t9, 0x6EFC($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
            goto L_8027E0A4;
    }
    goto skip_52;
    // 0x8027DF08: lbu         $t9, 0x6EFC($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
    skip_52:
    // 0x8027DF0C: lw          $v1, 0x37FC($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X37FC);
    // 0x8027DF10: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027DF14: lh          $t1, 0x60($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X60);
    // 0x8027DF18: lw          $t9, 0x64($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X64);
    // 0x8027DF1C: addu        $a0, $t1, $s7
    ctx->r4 = ADD32(ctx->r9, ctx->r23);
    // 0x8027DF20: jalr        $t9
    // 0x8027DF24: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x8027DF24: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_30:
    // 0x8027DF28: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027DF2C: jal         0x802CF954
    // 0x8027DF30: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    static_3_802CF954(rdram, ctx);
        goto after_31;
    // 0x8027DF30: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_31:
    // 0x8027DF34: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8027DF38: jal         0x80319298
    // 0x8027DF3C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_80319298(rdram, ctx);
        goto after_32;
    // 0x8027DF3C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_32:
    // 0x8027DF40: beq         $v0, $zero, L_8027DF58
    if (ctx->r2 == 0) {
        // 0x8027DF44: lwc1        $f0, 0x158($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
            goto L_8027DF58;
    }
    // 0x8027DF44: lwc1        $f0, 0x158($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8027DF48: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8027DF4C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027DF50: b           L_8027DF5C
    // 0x8027DF54: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
        goto L_8027DF5C;
    // 0x8027DF54: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027DF58:
    // 0x8027DF58: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027DF5C:
    // 0x8027DF5C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027DF60: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8027DF64: bc1fl       L_8027E0A4
    if (!c1cs) {
        // 0x8027DF68: lbu         $t9, 0x6EFC($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
            goto L_8027E0A4;
    }
    goto skip_53;
    // 0x8027DF68: lbu         $t9, 0x6EFC($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
    skip_53:
    // 0x8027DF6C: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027DF70: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027DF74: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027DF78: mul.s       $f22, $f18, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8027DF7C: jal         0x802CF718
    // 0x8027DF80: nop

    static_3_802CF718(rdram, ctx);
        goto after_33;
    // 0x8027DF80: nop

    after_33:
    // 0x8027DF84: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x8027DF88: nop

    // 0x8027DF8C: bc1fl       L_8027E0A4
    if (!c1cs) {
        // 0x8027DF90: lbu         $t9, 0x6EFC($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
            goto L_8027E0A4;
    }
    goto skip_54;
    // 0x8027DF90: lbu         $t9, 0x6EFC($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
    skip_54:
    // 0x8027DF94: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8027DF98: lw          $t8, 0x148($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X148);
    // 0x8027DF9C: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x8027DFA0: addu        $t2, $fp, $v0
    ctx->r10 = ADD32(ctx->r30, ctx->r2);
    // 0x8027DFA4: bc1f        L_8027E0A0
    if (!c1cs) {
        // 0x8027DFA8: addu        $t3, $t8, $v0
        ctx->r11 = ADD32(ctx->r24, ctx->r2);
            goto L_8027E0A0;
    }
    // 0x8027DFA8: addu        $t3, $t8, $v0
    ctx->r11 = ADD32(ctx->r24, ctx->r2);
    // 0x8027DFAC: sw          $s3, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r19;
    // 0x8027DFB0: swc1        $f0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f0.u32l;
    // 0x8027DFB4: lw          $t4, 0x150($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X150);
    // 0x8027DFB8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8027DFBC: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x8027DFC0: addu        $t7, $t4, $v0
    ctx->r15 = ADD32(ctx->r12, ctx->r2);
    // 0x8027DFC4: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x8027DFC8: lwc1        $f20, 0xB8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8027DFCC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027DFD0: bne         $at, $zero, L_8027E0A0
    if (ctx->r1 != 0) {
        // 0x8027DFD4: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_8027E0A0;
    }
    // 0x8027DFD4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8027DFD8: addiu       $a0, $s2, -0x1
    ctx->r4 = ADD32(ctx->r18, -0X1);
    // 0x8027DFDC: andi        $t0, $a0, 0x3
    ctx->r8 = ctx->r4 & 0X3;
    // 0x8027DFE0: beq         $t0, $zero, L_8027E01C
    if (ctx->r8 == 0) {
        // 0x8027DFE4: addiu       $v1, $t0, 0x1
        ctx->r3 = ADD32(ctx->r8, 0X1);
            goto L_8027E01C;
    }
    // 0x8027DFE4: addiu       $v1, $t0, 0x1
    ctx->r3 = ADD32(ctx->r8, 0X1);
    // 0x8027DFE8: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x8027DFEC: addu        $v0, $fp, $t6
    ctx->r2 = ADD32(ctx->r30, ctx->r14);
L_8027DFF0:
    // 0x8027DFF0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027DFF4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027DFF8: nop

    // 0x8027DFFC: bc1fl       L_8027E010
    if (!c1cs) {
        // 0x8027E000: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8027E010;
    }
    goto skip_55;
    // 0x8027E000: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_55:
    // 0x8027E004: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027E008: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027E00C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8027E010:
    // 0x8027E010: bne         $v1, $s0, L_8027DFF0
    if (ctx->r3 != ctx->r16) {
        // 0x8027E014: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8027DFF0;
    }
    // 0x8027E014: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8027E018: beq         $s0, $s2, L_8027E0A0
    if (ctx->r16 == ctx->r18) {
        // 0x8027E01C: sll         $t1, $s0, 2
        ctx->r9 = S32(ctx->r16 << 2);
            goto L_8027E0A0;
    }
L_8027E01C:
    // 0x8027E01C: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x8027E020: addu        $v0, $fp, $t1
    ctx->r2 = ADD32(ctx->r30, ctx->r9);
L_8027E024:
    // 0x8027E024: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027E028: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027E02C: nop

    // 0x8027E030: bc1fl       L_8027E044
    if (!c1cs) {
        // 0x8027E034: lwc1        $f0, 0x4($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
            goto L_8027E044;
    }
    goto skip_56;
    // 0x8027E034: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    skip_56:
    // 0x8027E038: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027E03C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027E040: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_8027E044:
    // 0x8027E044: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027E048: nop

    // 0x8027E04C: bc1fl       L_8027E060
    if (!c1cs) {
        // 0x8027E050: lwc1        $f0, 0x8($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
            goto L_8027E060;
    }
    goto skip_57;
    // 0x8027E050: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    skip_57:
    // 0x8027E054: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027E058: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    // 0x8027E05C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
L_8027E060:
    // 0x8027E060: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027E064: nop

    // 0x8027E068: bc1fl       L_8027E07C
    if (!c1cs) {
        // 0x8027E06C: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8027E07C;
    }
    goto skip_58;
    // 0x8027E06C: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_58:
    // 0x8027E070: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027E074: addiu       $s1, $s0, 0x2
    ctx->r17 = ADD32(ctx->r16, 0X2);
    // 0x8027E078: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_8027E07C:
    // 0x8027E07C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027E080: nop

    // 0x8027E084: bc1fl       L_8027E098
    if (!c1cs) {
        // 0x8027E088: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8027E098;
    }
    goto skip_59;
    // 0x8027E088: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_59:
    // 0x8027E08C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027E090: addiu       $s1, $s0, 0x3
    ctx->r17 = ADD32(ctx->r16, 0X3);
    // 0x8027E094: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8027E098:
    // 0x8027E098: bne         $s0, $s2, L_8027E024
    if (ctx->r16 != ctx->r18) {
        // 0x8027E09C: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_8027E024;
    }
    // 0x8027E09C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_8027E0A0:
    // 0x8027E0A0: lbu         $t9, 0x6EFC($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
L_8027E0A4:
    // 0x8027E0A4: or          $s3, $s7, $zero
    ctx->r19 = ctx->r23 | 0;
    // 0x8027E0A8: blezl       $t9, L_8027E284
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8027E0AC: lw          $a2, 0x160($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X160);
            goto L_8027E284;
    }
    goto skip_60;
    // 0x8027E0AC: lw          $a2, 0x160($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X160);
    skip_60:
    // 0x8027E0B0: lw          $a2, 0x6EEC($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X6EEC);
L_8027E0B4:
    // 0x8027E0B4: beql        $a2, $zero, L_8027E268
    if (ctx->r6 == 0) {
        // 0x8027E0B8: lbu         $t9, 0x6EFC($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
            goto L_8027E268;
    }
    goto skip_61;
    // 0x8027E0B8: lbu         $t9, 0x6EFC($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
    skip_61:
    // 0x8027E0BC: jal         0x80317E10
    // 0x8027E0C0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_34;
    // 0x8027E0C0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_34:
    // 0x8027E0C4: beql        $v0, $zero, L_8027E268
    if (ctx->r2 == 0) {
        // 0x8027E0C8: lbu         $t9, 0x6EFC($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
            goto L_8027E268;
    }
    goto skip_62;
    // 0x8027E0C8: lbu         $t9, 0x6EFC($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
    skip_62:
    // 0x8027E0CC: lw          $a2, 0x6EEC($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X6EEC);
    // 0x8027E0D0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027E0D4: lw          $v1, 0x1A0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X1A0);
    // 0x8027E0D8: lw          $t9, 0x64($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X64);
    // 0x8027E0DC: lh          $t8, 0x60($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X60);
    // 0x8027E0E0: jalr        $t9
    // 0x8027E0E4: addu        $a0, $t8, $a2
    ctx->r4 = ADD32(ctx->r24, ctx->r6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x8027E0E4: addu        $a0, $t8, $a2
    ctx->r4 = ADD32(ctx->r24, ctx->r6);
    after_35:
    // 0x8027E0E8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027E0EC: jal         0x802CF954
    // 0x8027E0F0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    static_3_802CF954(rdram, ctx);
        goto after_36;
    // 0x8027E0F0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_36:
    // 0x8027E0F4: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8027E0F8: jal         0x80319298
    // 0x8027E0FC: lw          $a0, 0x6EEC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X6EEC);
    static_3_80319298(rdram, ctx);
        goto after_37;
    // 0x8027E0FC: lw          $a0, 0x6EEC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X6EEC);
    after_37:
    // 0x8027E100: beq         $v0, $zero, L_8027E118
    if (ctx->r2 == 0) {
        // 0x8027E104: lwc1        $f0, 0x158($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
            goto L_8027E118;
    }
    // 0x8027E104: lwc1        $f0, 0x158($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8027E108: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8027E10C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027E110: b           L_8027E11C
    // 0x8027E114: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
        goto L_8027E11C;
    // 0x8027E114: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027E118:
    // 0x8027E118: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027E11C:
    // 0x8027E11C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027E120: lwc1        $f8, 0x15C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8027E124: bc1fl       L_8027E268
    if (!c1cs) {
        // 0x8027E128: lbu         $t9, 0x6EFC($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
            goto L_8027E268;
    }
    goto skip_63;
    // 0x8027E128: lbu         $t9, 0x6EFC($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
    skip_63:
    // 0x8027E12C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027E130: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027E134: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027E138: mul.s       $f22, $f6, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8027E13C: jal         0x802CF718
    // 0x8027E140: nop

    static_3_802CF718(rdram, ctx);
        goto after_38;
    // 0x8027E140: nop

    after_38:
    // 0x8027E144: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x8027E148: nop

    // 0x8027E14C: bc1fl       L_8027E268
    if (!c1cs) {
        // 0x8027E150: lbu         $t9, 0x6EFC($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
            goto L_8027E268;
    }
    goto skip_64;
    // 0x8027E150: lbu         $t9, 0x6EFC($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
    skip_64:
    // 0x8027E154: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8027E158: lw          $t3, 0x148($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X148);
    // 0x8027E15C: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x8027E160: addu        $t4, $fp, $v0
    ctx->r12 = ADD32(ctx->r30, ctx->r2);
    // 0x8027E164: bc1f        L_8027E264
    if (!c1cs) {
        // 0x8027E168: addu        $t2, $t3, $v0
        ctx->r10 = ADD32(ctx->r11, ctx->r2);
            goto L_8027E264;
    }
    // 0x8027E168: addu        $t2, $t3, $v0
    ctx->r10 = ADD32(ctx->r11, ctx->r2);
    // 0x8027E16C: lw          $v1, 0x6EEC($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X6EEC);
    // 0x8027E170: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8027E174: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x8027E178: sw          $v1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r3;
    // 0x8027E17C: swc1        $f0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f0.u32l;
    // 0x8027E180: lw          $t7, 0x150($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X150);
    // 0x8027E184: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027E188: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8027E18C: addu        $t0, $t7, $v0
    ctx->r8 = ADD32(ctx->r15, ctx->r2);
    // 0x8027E190: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
    // 0x8027E194: bne         $at, $zero, L_8027E264
    if (ctx->r1 != 0) {
        // 0x8027E198: lwc1        $f20, 0xB8($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XB8);
            goto L_8027E264;
    }
    // 0x8027E198: lwc1        $f20, 0xB8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8027E19C: addiu       $a0, $s2, -0x1
    ctx->r4 = ADD32(ctx->r18, -0X1);
    // 0x8027E1A0: andi        $t6, $a0, 0x3
    ctx->r14 = ctx->r4 & 0X3;
    // 0x8027E1A4: beq         $t6, $zero, L_8027E1E0
    if (ctx->r14 == 0) {
        // 0x8027E1A8: addiu       $v1, $t6, 0x1
        ctx->r3 = ADD32(ctx->r14, 0X1);
            goto L_8027E1E0;
    }
    // 0x8027E1A8: addiu       $v1, $t6, 0x1
    ctx->r3 = ADD32(ctx->r14, 0X1);
    // 0x8027E1AC: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x8027E1B0: addu        $v0, $fp, $t1
    ctx->r2 = ADD32(ctx->r30, ctx->r9);
L_8027E1B4:
    // 0x8027E1B4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027E1B8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027E1BC: nop

    // 0x8027E1C0: bc1fl       L_8027E1D4
    if (!c1cs) {
        // 0x8027E1C4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8027E1D4;
    }
    goto skip_65;
    // 0x8027E1C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_65:
    // 0x8027E1C8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027E1CC: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027E1D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8027E1D4:
    // 0x8027E1D4: bne         $v1, $s0, L_8027E1B4
    if (ctx->r3 != ctx->r16) {
        // 0x8027E1D8: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8027E1B4;
    }
    // 0x8027E1D8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8027E1DC: beq         $s0, $s2, L_8027E264
    if (ctx->r16 == ctx->r18) {
        // 0x8027E1E0: sll         $t8, $s0, 2
        ctx->r24 = S32(ctx->r16 << 2);
            goto L_8027E264;
    }
L_8027E1E0:
    // 0x8027E1E0: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x8027E1E4: addu        $v0, $fp, $t8
    ctx->r2 = ADD32(ctx->r30, ctx->r24);
L_8027E1E8:
    // 0x8027E1E8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027E1EC: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027E1F0: nop

    // 0x8027E1F4: bc1fl       L_8027E208
    if (!c1cs) {
        // 0x8027E1F8: lwc1        $f0, 0x4($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
            goto L_8027E208;
    }
    goto skip_66;
    // 0x8027E1F8: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    skip_66:
    // 0x8027E1FC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027E200: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027E204: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_8027E208:
    // 0x8027E208: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027E20C: nop

    // 0x8027E210: bc1fl       L_8027E224
    if (!c1cs) {
        // 0x8027E214: lwc1        $f0, 0x8($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
            goto L_8027E224;
    }
    goto skip_67;
    // 0x8027E214: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    skip_67:
    // 0x8027E218: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027E21C: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    // 0x8027E220: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
L_8027E224:
    // 0x8027E224: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027E228: nop

    // 0x8027E22C: bc1fl       L_8027E240
    if (!c1cs) {
        // 0x8027E230: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8027E240;
    }
    goto skip_68;
    // 0x8027E230: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_68:
    // 0x8027E234: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027E238: addiu       $s1, $s0, 0x2
    ctx->r17 = ADD32(ctx->r16, 0X2);
    // 0x8027E23C: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_8027E240:
    // 0x8027E240: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027E244: nop

    // 0x8027E248: bc1fl       L_8027E25C
    if (!c1cs) {
        // 0x8027E24C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8027E25C;
    }
    goto skip_69;
    // 0x8027E24C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_69:
    // 0x8027E250: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027E254: addiu       $s1, $s0, 0x3
    ctx->r17 = ADD32(ctx->r16, 0X3);
    // 0x8027E258: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8027E25C:
    // 0x8027E25C: bne         $s0, $s2, L_8027E1E8
    if (ctx->r16 != ctx->r18) {
        // 0x8027E260: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_8027E1E8;
    }
    // 0x8027E260: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_8027E264:
    // 0x8027E264: lbu         $t9, 0x6EFC($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
L_8027E268:
    // 0x8027E268: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8027E26C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8027E270: slt         $at, $s4, $t9
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8027E274: bnel        $at, $zero, L_8027E0B4
    if (ctx->r1 != 0) {
        // 0x8027E278: lw          $a2, 0x6EEC($s3)
        ctx->r6 = MEM_W(ctx->r19, 0X6EEC);
            goto L_8027E0B4;
    }
    goto skip_70;
    // 0x8027E278: lw          $a2, 0x6EEC($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X6EEC);
    skip_70:
    // 0x8027E27C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8027E280: lw          $a2, 0x160($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X160);
L_8027E284:
    // 0x8027E284: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_8027E288:
    // 0x8027E288: bne         $a2, $at, L_8027E52C
    if (ctx->r6 != ctx->r1) {
        // 0x8027E28C: addiu       $s3, $s7, 0x365C
        ctx->r19 = ADD32(ctx->r23, 0X365C);
            goto L_8027E52C;
    }
    // 0x8027E28C: addiu       $s3, $s7, 0x365C
    ctx->r19 = ADD32(ctx->r23, 0X365C);
    // 0x8027E290: jal         0x803187FC
    // 0x8027E294: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_803187FC(rdram, ctx);
        goto after_39;
    // 0x8027E294: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_39:
    // 0x8027E298: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027E29C: bnel        $v0, $at, L_8027E350
    if (ctx->r2 != ctx->r1) {
        // 0x8027E2A0: lbu         $t1, 0x6EFC($s7)
        ctx->r9 = MEM_BU(ctx->r23, 0X6EFC);
            goto L_8027E350;
    }
    goto skip_71;
    // 0x8027E2A0: lbu         $t1, 0x6EFC($s7)
    ctx->r9 = MEM_BU(ctx->r23, 0X6EFC);
    skip_71:
    // 0x8027E2A4: lw          $v1, 0x37FC($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X37FC);
    // 0x8027E2A8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027E2AC: lh          $t3, 0x60($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X60);
    // 0x8027E2B0: lw          $t9, 0x64($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X64);
    // 0x8027E2B4: addu        $a0, $t3, $s7
    ctx->r4 = ADD32(ctx->r11, ctx->r23);
    // 0x8027E2B8: jalr        $t9
    // 0x8027E2BC: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x8027E2BC: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_40:
    // 0x8027E2C0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027E2C4: jal         0x802CF954
    // 0x8027E2C8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    static_3_802CF954(rdram, ctx);
        goto after_41;
    // 0x8027E2C8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_41:
    // 0x8027E2CC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8027E2D0: jal         0x80319298
    // 0x8027E2D4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_80319298(rdram, ctx);
        goto after_42;
    // 0x8027E2D4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_42:
    // 0x8027E2D8: beq         $v0, $zero, L_8027E2F0
    if (ctx->r2 == 0) {
        // 0x8027E2DC: lwc1        $f0, 0x158($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
            goto L_8027E2F0;
    }
    // 0x8027E2DC: lwc1        $f0, 0x158($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8027E2E0: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8027E2E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027E2E8: b           L_8027E2F4
    // 0x8027E2EC: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
        goto L_8027E2F4;
    // 0x8027E2EC: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027E2F0:
    // 0x8027E2F0: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027E2F4:
    // 0x8027E2F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027E2F8: lwc1        $f16, 0x15C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8027E2FC: bc1fl       L_8027E350
    if (!c1cs) {
        // 0x8027E300: lbu         $t1, 0x6EFC($s7)
        ctx->r9 = MEM_BU(ctx->r23, 0X6EFC);
            goto L_8027E350;
    }
    goto skip_72;
    // 0x8027E300: lbu         $t1, 0x6EFC($s7)
    ctx->r9 = MEM_BU(ctx->r23, 0X6EFC);
    skip_72:
    // 0x8027E304: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027E308: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027E30C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027E310: mul.s       $f22, $f10, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8027E314: jal         0x802CF718
    // 0x8027E318: nop

    static_3_802CF718(rdram, ctx);
        goto after_43;
    // 0x8027E318: nop

    after_43:
    // 0x8027E31C: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x8027E320: lw          $t2, 0x148($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X148);
    // 0x8027E324: bc1f        L_8027E34C
    if (!c1cs) {
        // 0x8027E328: sll         $a1, $s0, 2
        ctx->r5 = S32(ctx->r16 << 2);
            goto L_8027E34C;
    }
    // 0x8027E328: sll         $a1, $s0, 2
    ctx->r5 = S32(ctx->r16 << 2);
    // 0x8027E32C: addu        $t4, $t2, $a1
    ctx->r12 = ADD32(ctx->r10, ctx->r5);
    // 0x8027E330: sw          $s3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r19;
    // 0x8027E334: addu        $t7, $fp, $a1
    ctx->r15 = ADD32(ctx->r30, ctx->r5);
    // 0x8027E338: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x8027E33C: lw          $t0, 0x150($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X150);
    // 0x8027E340: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8027E344: addu        $t6, $t0, $a1
    ctx->r14 = ADD32(ctx->r8, ctx->r5);
    // 0x8027E348: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
L_8027E34C:
    // 0x8027E34C: lbu         $t1, 0x6EFC($s7)
    ctx->r9 = MEM_BU(ctx->r23, 0X6EFC);
L_8027E350:
    // 0x8027E350: or          $s3, $s7, $zero
    ctx->r19 = ctx->r23 | 0;
    // 0x8027E354: blez        $t1, L_8027E52C
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8027E358: nop
    
            goto L_8027E52C;
    }
    // 0x8027E358: nop

    // 0x8027E35C: lw          $a2, 0x6EEC($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X6EEC);
L_8027E360:
    // 0x8027E360: beql        $a2, $zero, L_8027E514
    if (ctx->r6 == 0) {
        // 0x8027E364: lbu         $t9, 0x6EFC($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
            goto L_8027E514;
    }
    goto skip_73;
    // 0x8027E364: lbu         $t9, 0x6EFC($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
    skip_73:
    // 0x8027E368: jal         0x80317E10
    // 0x8027E36C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_44;
    // 0x8027E36C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_44:
    // 0x8027E370: beql        $v0, $zero, L_8027E514
    if (ctx->r2 == 0) {
        // 0x8027E374: lbu         $t9, 0x6EFC($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
            goto L_8027E514;
    }
    goto skip_74;
    // 0x8027E374: lbu         $t9, 0x6EFC($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
    skip_74:
    // 0x8027E378: lw          $a2, 0x6EEC($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X6EEC);
    // 0x8027E37C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027E380: lw          $v1, 0x1A0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X1A0);
    // 0x8027E384: lw          $t9, 0x64($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X64);
    // 0x8027E388: lh          $t8, 0x60($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X60);
    // 0x8027E38C: jalr        $t9
    // 0x8027E390: addu        $a0, $t8, $a2
    ctx->r4 = ADD32(ctx->r24, ctx->r6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x8027E390: addu        $a0, $t8, $a2
    ctx->r4 = ADD32(ctx->r24, ctx->r6);
    after_45:
    // 0x8027E394: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027E398: jal         0x802CF954
    // 0x8027E39C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    static_3_802CF954(rdram, ctx);
        goto after_46;
    // 0x8027E39C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_46:
    // 0x8027E3A0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8027E3A4: jal         0x80319298
    // 0x8027E3A8: lw          $a0, 0x6EEC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X6EEC);
    static_3_80319298(rdram, ctx);
        goto after_47;
    // 0x8027E3A8: lw          $a0, 0x6EEC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X6EEC);
    after_47:
    // 0x8027E3AC: beq         $v0, $zero, L_8027E3C4
    if (ctx->r2 == 0) {
        // 0x8027E3B0: lwc1        $f0, 0x158($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
            goto L_8027E3C4;
    }
    // 0x8027E3B0: lwc1        $f0, 0x158($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8027E3B4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8027E3B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027E3BC: b           L_8027E3C8
    // 0x8027E3C0: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
        goto L_8027E3C8;
    // 0x8027E3C0: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027E3C4:
    // 0x8027E3C4: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8027E3C8:
    // 0x8027E3C8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027E3CC: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8027E3D0: bc1fl       L_8027E514
    if (!c1cs) {
        // 0x8027E3D4: lbu         $t9, 0x6EFC($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
            goto L_8027E514;
    }
    goto skip_75;
    // 0x8027E3D4: lbu         $t9, 0x6EFC($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
    skip_75:
    // 0x8027E3D8: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027E3DC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8027E3E0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8027E3E4: mul.s       $f22, $f18, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8027E3E8: jal         0x802CF718
    // 0x8027E3EC: nop

    static_3_802CF718(rdram, ctx);
        goto after_48;
    // 0x8027E3EC: nop

    after_48:
    // 0x8027E3F0: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x8027E3F4: nop

    // 0x8027E3F8: bc1fl       L_8027E514
    if (!c1cs) {
        // 0x8027E3FC: lbu         $t9, 0x6EFC($s7)
        ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
            goto L_8027E514;
    }
    goto skip_76;
    // 0x8027E3FC: lbu         $t9, 0x6EFC($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
    skip_76:
    // 0x8027E400: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8027E404: lw          $t3, 0x148($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X148);
    // 0x8027E408: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x8027E40C: addu        $t4, $fp, $v0
    ctx->r12 = ADD32(ctx->r30, ctx->r2);
    // 0x8027E410: bc1f        L_8027E510
    if (!c1cs) {
        // 0x8027E414: addu        $t2, $t3, $v0
        ctx->r10 = ADD32(ctx->r11, ctx->r2);
            goto L_8027E510;
    }
    // 0x8027E414: addu        $t2, $t3, $v0
    ctx->r10 = ADD32(ctx->r11, ctx->r2);
    // 0x8027E418: lw          $v1, 0x6EEC($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X6EEC);
    // 0x8027E41C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8027E420: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x8027E424: sw          $v1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r3;
    // 0x8027E428: swc1        $f0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f0.u32l;
    // 0x8027E42C: lw          $t0, 0x150($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X150);
    // 0x8027E430: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027E434: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8027E438: addu        $t5, $t0, $v0
    ctx->r13 = ADD32(ctx->r8, ctx->r2);
    // 0x8027E43C: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x8027E440: bne         $at, $zero, L_8027E510
    if (ctx->r1 != 0) {
        // 0x8027E444: lwc1        $f20, 0xB8($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XB8);
            goto L_8027E510;
    }
    // 0x8027E444: lwc1        $f20, 0xB8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8027E448: addiu       $a0, $s2, -0x1
    ctx->r4 = ADD32(ctx->r18, -0X1);
    // 0x8027E44C: andi        $t6, $a0, 0x3
    ctx->r14 = ctx->r4 & 0X3;
    // 0x8027E450: beq         $t6, $zero, L_8027E48C
    if (ctx->r14 == 0) {
        // 0x8027E454: addiu       $v1, $t6, 0x1
        ctx->r3 = ADD32(ctx->r14, 0X1);
            goto L_8027E48C;
    }
    // 0x8027E454: addiu       $v1, $t6, 0x1
    ctx->r3 = ADD32(ctx->r14, 0X1);
    // 0x8027E458: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x8027E45C: addu        $v0, $fp, $t1
    ctx->r2 = ADD32(ctx->r30, ctx->r9);
L_8027E460:
    // 0x8027E460: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027E464: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027E468: nop

    // 0x8027E46C: bc1fl       L_8027E480
    if (!c1cs) {
        // 0x8027E470: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8027E480;
    }
    goto skip_77;
    // 0x8027E470: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_77:
    // 0x8027E474: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027E478: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027E47C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8027E480:
    // 0x8027E480: bne         $v1, $s0, L_8027E460
    if (ctx->r3 != ctx->r16) {
        // 0x8027E484: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8027E460;
    }
    // 0x8027E484: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8027E488: beq         $s0, $s2, L_8027E510
    if (ctx->r16 == ctx->r18) {
        // 0x8027E48C: sll         $t8, $s0, 2
        ctx->r24 = S32(ctx->r16 << 2);
            goto L_8027E510;
    }
L_8027E48C:
    // 0x8027E48C: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x8027E490: addu        $v0, $fp, $t8
    ctx->r2 = ADD32(ctx->r30, ctx->r24);
L_8027E494:
    // 0x8027E494: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027E498: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027E49C: nop

    // 0x8027E4A0: bc1fl       L_8027E4B4
    if (!c1cs) {
        // 0x8027E4A4: lwc1        $f0, 0x4($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
            goto L_8027E4B4;
    }
    goto skip_78;
    // 0x8027E4A4: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    skip_78:
    // 0x8027E4A8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027E4AC: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8027E4B0: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_8027E4B4:
    // 0x8027E4B4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027E4B8: nop

    // 0x8027E4BC: bc1fl       L_8027E4D0
    if (!c1cs) {
        // 0x8027E4C0: lwc1        $f0, 0x8($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
            goto L_8027E4D0;
    }
    goto skip_79;
    // 0x8027E4C0: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    skip_79:
    // 0x8027E4C4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027E4C8: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    // 0x8027E4CC: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
L_8027E4D0:
    // 0x8027E4D0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027E4D4: nop

    // 0x8027E4D8: bc1fl       L_8027E4EC
    if (!c1cs) {
        // 0x8027E4DC: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8027E4EC;
    }
    goto skip_80;
    // 0x8027E4DC: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_80:
    // 0x8027E4E0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027E4E4: addiu       $s1, $s0, 0x2
    ctx->r17 = ADD32(ctx->r16, 0X2);
    // 0x8027E4E8: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_8027E4EC:
    // 0x8027E4EC: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8027E4F0: nop

    // 0x8027E4F4: bc1fl       L_8027E508
    if (!c1cs) {
        // 0x8027E4F8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8027E508;
    }
    goto skip_81;
    // 0x8027E4F8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_81:
    // 0x8027E4FC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027E500: addiu       $s1, $s0, 0x3
    ctx->r17 = ADD32(ctx->r16, 0X3);
    // 0x8027E504: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8027E508:
    // 0x8027E508: bne         $s0, $s2, L_8027E494
    if (ctx->r16 != ctx->r18) {
        // 0x8027E50C: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_8027E494;
    }
    // 0x8027E50C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_8027E510:
    // 0x8027E510: lbu         $t9, 0x6EFC($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X6EFC);
L_8027E514:
    // 0x8027E514: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8027E518: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8027E51C: slt         $at, $s4, $t9
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8027E520: bnel        $at, $zero, L_8027E360
    if (ctx->r1 != 0) {
        // 0x8027E524: lw          $a2, 0x6EEC($s3)
        ctx->r6 = MEM_W(ctx->r19, 0X6EEC);
            goto L_8027E360;
    }
    goto skip_82;
    // 0x8027E524: lw          $a2, 0x6EEC($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X6EEC);
    skip_82:
    // 0x8027E528: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_8027E52C:
    // 0x8027E52C: blez        $s2, L_8027E604
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8027E530: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8027E604;
    }
    // 0x8027E530: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8027E534: andi        $a2, $s2, 0x3
    ctx->r6 = ctx->r18 & 0X3;
    // 0x8027E538: beq         $a2, $zero, L_8027E57C
    if (ctx->r6 == 0) {
        // 0x8027E53C: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_8027E57C;
    }
    // 0x8027E53C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x8027E540: sll         $t3, $s4, 2
    ctx->r11 = S32(ctx->r20 << 2);
    // 0x8027E544: addiu       $t2, $sp, 0xB8
    ctx->r10 = ADD32(ctx->r29, 0XB8);
    // 0x8027E548: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027E54C: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027E550: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
L_8027E554:
    // 0x8027E554: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8027E558: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8027E55C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8027E560: nop

    // 0x8027E564: bc1f        L_8027E570
    if (!c1cs) {
        // 0x8027E568: nop
    
            goto L_8027E570;
    }
    // 0x8027E568: nop

    // 0x8027E56C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8027E570:
    // 0x8027E570: bne         $v1, $s4, L_8027E554
    if (ctx->r3 != ctx->r20) {
        // 0x8027E574: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8027E554;
    }
    // 0x8027E574: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8027E578: beq         $s4, $s2, L_8027E604
    if (ctx->r20 == ctx->r18) {
        // 0x8027E57C: addiu       $t0, $sp, 0xB8
        ctx->r8 = ADD32(ctx->r29, 0XB8);
            goto L_8027E604;
    }
L_8027E57C:
    // 0x8027E57C: addiu       $t0, $sp, 0xB8
    ctx->r8 = ADD32(ctx->r29, 0XB8);
    // 0x8027E580: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027E584: sll         $t4, $s4, 2
    ctx->r12 = S32(ctx->r20 << 2);
    // 0x8027E588: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x8027E58C: addu        $v1, $t7, $t0
    ctx->r3 = ADD32(ctx->r15, ctx->r8);
    // 0x8027E590: addu        $v0, $t4, $t0
    ctx->r2 = ADD32(ctx->r12, ctx->r8);
    // 0x8027E594: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027E598: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
L_8027E59C:
    // 0x8027E59C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8027E5A0: nop

    // 0x8027E5A4: bc1fl       L_8027E5B4
    if (!c1cs) {
        // 0x8027E5A8: lwc1        $f10, 0x4($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
            goto L_8027E5B4;
    }
    goto skip_83;
    // 0x8027E5A8: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    skip_83:
    // 0x8027E5AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027E5B0: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
L_8027E5B4:
    // 0x8027E5B4: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8027E5B8: nop

    // 0x8027E5BC: bc1fl       L_8027E5CC
    if (!c1cs) {
        // 0x8027E5C0: lwc1        $f16, 0x8($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
            goto L_8027E5CC;
    }
    goto skip_84;
    // 0x8027E5C0: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    skip_84:
    // 0x8027E5C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027E5C8: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
L_8027E5CC:
    // 0x8027E5CC: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8027E5D0: nop

    // 0x8027E5D4: bc1fl       L_8027E5E4
    if (!c1cs) {
        // 0x8027E5D8: lwc1        $f18, 0xC($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8027E5E4;
    }
    goto skip_85;
    // 0x8027E5D8: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    skip_85:
    // 0x8027E5DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027E5E0: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
L_8027E5E4:
    // 0x8027E5E4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8027E5E8: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x8027E5EC: nop

    // 0x8027E5F0: bc1f        L_8027E5FC
    if (!c1cs) {
        // 0x8027E5F4: nop
    
            goto L_8027E5FC;
    }
    // 0x8027E5F4: nop

    // 0x8027E5F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8027E5FC:
    // 0x8027E5FC: bnel        $v0, $v1, L_8027E59C
    if (ctx->r2 != ctx->r3) {
        // 0x8027E600: lwc1        $f8, 0x0($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
            goto L_8027E59C;
    }
    goto skip_86;
    // 0x8027E600: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    skip_86:
L_8027E604:
    // 0x8027E604: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8027E608: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8027E60C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8027E610: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x8027E614: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x8027E618: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8027E61C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8027E620: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8027E624: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8027E628: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8027E62C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8027E630: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x8027E634: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x8027E638: jr          $ra
    // 0x8027E63C: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    return;
    // 0x8027E63C: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
;}
RECOMP_FUNC void D_80247990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80247994: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80247998: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8024799C: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x802479A0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802479A4: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_802479A8:
    // 0x802479A8: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x802479AC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x802479B0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802479B4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802479B8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x802479BC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802479C0: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x802479C4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x802479C8: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x802479CC: bne         $at, $zero, L_802479A8
    if (ctx->r1 != 0) {
        // 0x802479D0: sw          $t1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r9;
            goto L_802479A8;
    }
    // 0x802479D0: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x802479D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802479D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802479DC: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x802479E0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802479E4: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x802479E8: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x802479EC: sb          $t3, 0x8($sp)
    MEM_B(0X8, ctx->r29) = ctx->r11;
    // 0x802479F0: sb          $t4, 0x9($sp)
    MEM_B(0X9, ctx->r29) = ctx->r12;
    // 0x802479F4: sb          $t5, 0xA($sp)
    MEM_B(0XA, ctx->r29) = ctx->r13;
    // 0x802479F8: sb          $a0, 0xB($sp)
    MEM_B(0XB, ctx->r29) = ctx->r4;
    // 0x802479FC: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80247A00:
    // 0x80247A00: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80247A04: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x80247A08: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80247A0C: addu        $t7, $sp, $t8
    ctx->r15 = ADD32(ctx->r29, ctx->r24);
    // 0x80247A10: sb          $t6, 0xC($t7)
    MEM_B(0XC, ctx->r15) = ctx->r14;
    // 0x80247A14: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80247A18: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80247A1C: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x80247A20: bne         $at, $zero, L_80247A00
    if (ctx->r1 != 0) {
        // 0x80247A24: sw          $t0, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r8;
            goto L_80247A00;
    }
    // 0x80247A24: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x80247A28: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80247A2C:
    // 0x80247A2C: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x80247A30: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x80247A34: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80247A38: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x80247A3C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80247A40: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x80247A44: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80247A48: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x80247A4C: bne         $at, $zero, L_80247A2C
    if (ctx->r1 != 0) {
        // 0x80247A50: sw          $t3, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r11;
            goto L_80247A2C;
    }
    // 0x80247A50: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80247A54: addiu       $t8, $sp, 0x8
    ctx->r24 = ADD32(ctx->r29, 0X8);
    // 0x80247A58: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80247A5C: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x80247A60: addiu       $t2, $zero, 0xFE
    ctx->r10 = ADD32(0, 0XFE);
    // 0x80247A64: swl         $at, 0x0($t6)
    do_swl(rdram, 0X0, ctx->r14, ctx->r1);
    // 0x80247A68: swr         $at, 0x3($t6)
    do_swr(rdram, 0X3, ctx->r14, ctx->r1);
    // 0x80247A6C: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80247A70: swl         $t9, 0x4($t6)
    do_swl(rdram, 0X4, ctx->r14, ctx->r25);
    // 0x80247A74: swr         $t9, 0x7($t6)
    do_swr(rdram, 0X7, ctx->r14, ctx->r25);
    // 0x80247A78: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x80247A7C: swl         $at, 0x8($t6)
    do_swl(rdram, 0X8, ctx->r14, ctx->r1);
    // 0x80247A80: swr         $at, 0xB($t6)
    do_swr(rdram, 0XB, ctx->r14, ctx->r1);
    // 0x80247A84: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x80247A88: addiu       $t1, $t0, 0xC
    ctx->r9 = ADD32(ctx->r8, 0XC);
    // 0x80247A8C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80247A90: sb          $t2, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r10;
    // 0x80247A94: jr          $ra
    // 0x80247A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80247A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_80235030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80235030: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235038: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8023503C: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80235040: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80235044: sh          $t7, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r15;
    // 0x80235048: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x8023504C: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x80235050: sh          $t6, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r14;
    // 0x80235054: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80235058: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8023505C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80235060: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x80235064: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80235068: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023506C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80235070: jal         0x8023F37C
    // 0x80235074: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80235074: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80235078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023507C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80235080: jr          $ra
    // 0x80235084: nop

    return;
    // 0x80235084: nop

;}
